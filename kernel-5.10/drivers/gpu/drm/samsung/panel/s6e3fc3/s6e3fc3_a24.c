/*
 * linux/drivers/video/fbdev/exynos/panel/tft_common/tft_common.c
 *
 * TFT_COMMON Dimming Driver
 *
 * Copyright (c) 2016 Samsung Electronics
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#include <linux/of_gpio.h>
#include <video/mipi_display.h>
#include "../maptbl.h"
#include "../panel.h"
#include "../panel_function.h"
#include "s6e3fc3_a24_panel.h"

#ifdef CONFIG_USDM_FACTORY_DSC_CRC_TEST
/*
 * s6e3fc3_decoder_test - test ddi's decoder function
 *
 * description of state values:
 * [0](14h 1st): 0xEB (OK) other (NG)
 * [1](14h 2nd): 0x21 (OK) other (NG)
 *
 * [0](15h 1st): 0x96 (OK) other (NG)
 * [1](15h 2nd): 0xAF (OK) other (NG)
 */
int s6e3fc3_a24_decoder_test(struct panel_device *panel, void *data, u32 len)
{
	int ret = 0;
	u8 read_buf1[S6E3FC3_DECODER_TEST1_LEN] = { -1, -1 };
	u8 read_buf2[S6E3FC3_DECODER_TEST2_LEN] = { -1, -1 };
	u8 read_buf3[S6E3FC3_DECODER_TEST3_LEN] = { -1, -1 };
	u8 read_buf4[S6E3FC3_DECODER_TEST4_LEN] = { -1, -1 };

	if (!panel)
		return -EINVAL;

	ret = panel_do_seqtbl_by_name_nolock(panel, PANEL_DECODER_TEST_SEQ);
	if (unlikely(ret < 0)) {
		panel_err("failed to write decoder-test seq\n");
		return ret;
	}

	ret = panel_resource_copy(panel, read_buf1, "decoder_test1"); // 0x14 in normal voltage
	if (unlikely(ret < 0)) {
		panel_err("decoder_test1 copy failed\n");
		return -ENODATA;
	}

	ret = panel_resource_copy(panel, read_buf2, "decoder_test2"); // 0x15 in normal voltage
	if (unlikely(ret < 0)) {
		panel_err("decoder_test2 copy failed\n");
		return -ENODATA;
	}

	ret = panel_resource_copy(panel, read_buf3, "decoder_test3"); // 0x14 in low voltage
	if (unlikely(ret < 0)) {
		panel_err("decoder_test1 copy failed\n");
		return -ENODATA;
	}

	ret = panel_resource_copy(panel, read_buf4, "decoder_test4"); // 0x15 in low voltage
	if (unlikely(ret < 0)) {
		panel_err("decoder_test2 copy failed\n");
		return -ENODATA;
	}

	if ((read_buf1[0] == 0xEB) && (read_buf1[1] == 0x21) &&
		(read_buf2[0] == 0x96) && (read_buf2[1] == 0xAF) &&
		(read_buf3[0] == 0xEB) && (read_buf3[1] == 0x21) &&
		(read_buf4[0] == 0x96) && (read_buf4[1] == 0xAF)) {
		ret = PANEL_DECODER_TEST_PASS;
		panel_info("Fail [normal]:0x14->0x%02x,0x%02x, 0x15->0x%02x,0x%02x, [low]:0x14->0x%02x,0x%02x, 0x15->0x%02x,0x%02x, ret: %d\n",
			read_buf1[0], read_buf1[1], read_buf2[0], read_buf2[1],
			read_buf3[0], read_buf3[1], read_buf4[0], read_buf4[1],	ret);
	} else {
		ret = PANEL_DECODER_TEST_FAIL;
		panel_info("Fail [normal]:0x14->0x%02x,0x%02x, 0x15->0x%02x,0x%02x, [low]:0x14->0x%02x,0x%02x, 0x15->0x%02x,0x%02x, ret: %d\n",
			read_buf1[0], read_buf1[1], read_buf2[0], read_buf2[1],
			read_buf3[0], read_buf3[1], read_buf4[0], read_buf4[1],	ret);
	}

	snprintf((char *)data, len, "%02x %02x %02x %02x %02x %02x %02x %02x",
		read_buf1[0], read_buf1[1], read_buf2[0], read_buf2[1],
		read_buf3[0], read_buf3[1], read_buf4[0], read_buf4[1]);

	return ret;
}
#endif

int s6e3fc3_a24_maptbl_getidx_ffc(struct maptbl *tbl)
{
	int idx;
	u32 dsi_clk;
	struct panel_device *panel = (struct panel_device *)tbl->pdata;
	struct panel_info *panel_data = &panel->panel_data;

	dsi_clk = panel_data->props.dsi_freq;

	switch (dsi_clk) {
	case 806000:
		idx = S6E3FC3_A24_HS_CLK_806;
		break;
	case 822000:
		idx = S6E3FC3_A24_HS_CLK_822;
		break;
	case 824000:
		idx = S6E3FC3_A24_HS_CLK_824;
		break;
	default:
		pr_info("%s: invalid dsi clock: %d\n", __func__, dsi_clk);
		BUG();
	}
	return maptbl_index(tbl, 0, idx, 0);
}

struct pnobj_func s6e3fc3_a24_function_table[MAX_S6E3FC3_A24_FUNCTION] = {
	[S6E3FC3_A24_MAPTBL_GETIDX_FFC] = __PNOBJ_FUNC_INITIALIZER(S6E3FC3_A24_MAPTBL_GETIDX_FFC, s6e3fc3_a24_maptbl_getidx_ffc),
};

static int __init s6e3fc3_a24_panel_init(void)
{
	s6e3fc3_init(&s6e3fc3_a24_panel_info);
	panel_function_insert_array(s6e3fc3_a24_function_table, ARRAY_SIZE(s6e3fc3_a24_function_table));
	register_common_panel(&s6e3fc3_a24_panel_info);

	return 0;
}

static void __exit s6e3fc3_a24_panel_exit(void)
{
	deregister_common_panel(&s6e3fc3_a24_panel_info);
}

module_init(s6e3fc3_a24_panel_init);
module_exit(s6e3fc3_a24_panel_exit);
MODULE_DESCRIPTION("Samsung Mobile Panel Driver");
MODULE_LICENSE("GPL");
