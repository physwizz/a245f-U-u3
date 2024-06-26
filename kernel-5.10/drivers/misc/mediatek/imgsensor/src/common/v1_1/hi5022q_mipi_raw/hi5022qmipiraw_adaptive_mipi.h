/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2022 Samsung Electronics Co., Ltd.
 */

#ifndef HI5022QMIPIRAW_ADAPTIVE_MIPI_H
#define HI5022QMIPIRAW_ADAPTIVE_MIPI_H

#include "kd_imgsensor_adaptive_mipi.h"
#include "hi5022qmipiraw_Sensor.h"

/* MIPI table */
enum {
	/* FULL Default - mipi clock = 1150.5Mhz, mipi rate = 2301Mbps */
	CAM_HI5022Q_SET_A_Full_1150p5_MHZ = 0,
	/* FULL mipi clock = 1179.75Mhz, mipi rate = 2359.5Mbps */
	CAM_HI5022Q_SET_A_Full_1179p75_MHZ = 1,
	/* FULL mipi clock = 1196Mhz, mipi rate = 2392Mbps */
	CAM_HI5022Q_SET_A_Full_1196_MHZ = 2,

	CAM_HI5022Q_SET_FULL_MAX_NUM = 3,
};

enum {
	/* Binning Default mipi clock = 672.75Mhz, mipi rate = 1345.5Mbps */
	CAM_HI5022Q_SET_B_binning_672p75_MHZ = 0,
	/* Binning mipi clock = 835.25Mhz, mipi rate = 1670.5Mbps */
	CAM_HI5022Q_SET_B_binning_835p25_MHZ = 1,
	/* Binning mipi clock = 1023.75Mhz, mipi rate = 2047.5Mbps */
	CAM_HI5022Q_SET_B_binning_1023p75_MHZ = 2,
	/* Binning mipi clock = 1046.5Mhz, mipi rate = 2093Mbps */
	CAM_HI5022Q_SET_B_binning_1046p5_MHZ = 3,

	CAM_HI5022Q_SET_BINNING_MAX_NUM = 4,
};

#define CAM_HI5022Q_SET_MAX_NUM CAM_HI5022Q_SET_BINNING_MAX_NUM

static kal_uint16 hi5022q_mipi_preview_835p25Mhz[] = {
	0x03A0, 0x050B,
	0x050C, 0x0C72,
	0x0746, 0x0101,
	0x0766, 0x0064,
	0x1020, 0xC107,
	0x1022, 0x0821,
	0x1024, 0x0408,
	0x1026, 0x0B0A,
	0x1028, 0x100A,
	0x102A, 0x0C04,
	0x102C, 0x0011,
};

static kal_uint16 hi5022q_mipi_preview_1023p75Mhz[] = {
	0x03A0, 0x050B,
	0x050C, 0x0C72,
	0x0746, 0x013B,
	0x0766, 0x0073,
	0x1020, 0xC108,
	0x1022, 0x0928,
	0x1024, 0x0409,
	0x1026, 0x0D0C,
	0x1028, 0x130C,
	0x102A, 0x0E04,
	0x102C, 0x0015,
};

static kal_uint16 hi5022q_mipi_preview_1046p5MHZ[] = {
	0x03A0, 0x050B,
	0x050C, 0x0C72,
	0x0746, 0x0142,
	0x0766, 0x0076,
	0x1020, 0xC108,
	0x1022, 0x0929,
	0x1024, 0x040A,
	0x1026, 0x0F0C,
	0x1028, 0x140C,
	0x102A, 0x0F04,
	0x102C, 0x0015,
};

static kal_uint16 hi5022q_mipi_video_835p25Mhz[] = {
	0x03A0, 0x050B,
	0x050C, 0x0C72,
	0x0746, 0x0101,
	0x0766, 0x0064,
	0x1020, 0xC107,
	0x1022, 0x0821,
	0x1024, 0x0408,
	0x1026, 0x0B0A,
	0x1028, 0x100A,
	0x102A, 0x0C04,
	0x102C, 0x0011,
};

static kal_uint16 hi5022q_mipi_video_1023p75Mhz[] = {
	0x03A0, 0x050B,
	0x050C, 0x0C72,
	0x0746, 0x013B,
	0x0766, 0x0073,
	0x1020, 0xC108,
	0x1022, 0x0928,
	0x1024, 0x0409,
	0x1026, 0x0D0C,
	0x1028, 0x130C,
	0x102A, 0x0E04,
	0x102C, 0x0015,
};

static kal_uint16 hi5022q_mipi_video_1046p5MHZ[] = {
	0x03A0, 0x050B,
	0x050C, 0x0C72,
	0x0746, 0x0142,
	0x0766, 0x0076,
	0x1020, 0xC108,
	0x1022, 0x0929,
	0x1024, 0x040A,
	0x1026, 0x0F0C,
	0x1028, 0x140C,
	0x102A, 0x0F04,
	0x102C, 0x0015,
};

static kal_uint16 hi5022q_mipi_hs_835p25Mhz[] = {
	0x03A0, 0x0252,
	0x050C, 0x06C4,
	0x0746, 0x0101,
	0x0766, 0x0064,
	0x1020, 0xC107,
	0x1022, 0x0821,
	0x1024, 0x0408,
	0x1026, 0x0B0A,
	0x1028, 0x100A,
	0x102A, 0x0C04,
	0x102C, 0x0011,
};

static kal_uint16 hi5022q_mipi_hs_1023p75Mhz[] = {
	0x03A0, 0x0252,
	0x050C, 0x06C4,
	0x0746, 0x013B,
	0x0766, 0x0073,
	0x1020, 0xC108,
	0x1022, 0x0928,
	0x1024, 0x0409,
	0x1026, 0x0D0C,
	0x1028, 0x130C,
	0x102A, 0x0E04,
	0x102C, 0x0015,

};

static kal_uint16 hi5022q_mipi_hs_1046p5MHZ[] = {
	0x03A0, 0x0252,
	0x050C, 0x06C4,
	0x0746, 0x0142,
	0x0766, 0x0076,
	0x1020, 0xC108,
	0x1022, 0x0929,
	0x1024, 0x040A,
	0x1026, 0x0F0C,
	0x1028, 0x140C,
	0x102A, 0x0F04,
	0x102C, 0x0015,
};

static kal_uint16 hi5022q_mipi_custom2_1179p75Mhz[] = {
	0x03A0, 0x04F2,
	0x050C, 0x1963,
	0x0746, 0x016B,
	0x0766, 0x0080,
	0x1020, 0xC10A,
	0x1022, 0x0B2E,
	0x1024, 0x020B,
	0x1026, 0x0E0D,
	0x1028, 0x170D,
	0x102A, 0x1004,
	0x102C, 0x0018,
};

static kal_uint16 hi5022q_mipi_custom2_1196Mhz[] = {
	0x03A0, 0x04F2,
	0x050C, 0x1963,
	0x0746, 0x0170,
	0x0766, 0x0080,
	0x1020, 0xC109,
	0x1022, 0x0A2D,
	0x1024, 0x040A,
	0x1026, 0x0F0D,
	0x1028, 0x160E,
	0x102A, 0x1004,
	0x102C, 0x0018,
};

struct setfile_mode_info hi5022q_adaptive_mipi_setfile[IMGSENSOR_MODE_MAX][CAM_HI5022Q_SET_MAX_NUM] = {
	{ // NOT USED - init
		{NULL,                            0,                                           "not used"},
		{NULL,                            0,                                           "not used"},
		{NULL,                            0,                                           "not used"},
		{NULL,                            0,                                           "not used"},
	},
	{ // preview
		{NULL,                            0,                                           "4:3 672.75MHz - defaults"},
		{hi5022q_mipi_preview_835p25Mhz,  ARRAY_SIZE(hi5022q_mipi_preview_835p25Mhz),  "4:3 835.25MHz"},
		{hi5022q_mipi_preview_1023p75Mhz, ARRAY_SIZE(hi5022q_mipi_preview_1023p75Mhz), "4:3 1023.75Mhz"},
		{hi5022q_mipi_preview_1046p5MHZ,  ARRAY_SIZE(hi5022q_mipi_preview_1046p5MHZ),  "4:3 1046.5MHz"},
	},
	{ // capture
		{NULL,                            0,                                           "4:3 672.75MHz - defaults"},
		{hi5022q_mipi_preview_835p25Mhz,  ARRAY_SIZE(hi5022q_mipi_preview_835p25Mhz),  "4:3 835.25MHz"},
		{hi5022q_mipi_preview_1023p75Mhz, ARRAY_SIZE(hi5022q_mipi_preview_1023p75Mhz), "4:3 1023.75Mhz"},
		{hi5022q_mipi_preview_1046p5MHZ,  ARRAY_SIZE(hi5022q_mipi_preview_1046p5MHZ),  "4:3 1046.5MHz"},
	},
	{ // video
		{NULL,                            0,                                           "16:9 672.75MHz - defaults"},
		{hi5022q_mipi_video_835p25Mhz,    ARRAY_SIZE(hi5022q_mipi_video_835p25Mhz),    "16:9 835.25MHz"},
		{hi5022q_mipi_video_1023p75Mhz,   ARRAY_SIZE(hi5022q_mipi_video_1023p75Mhz),   "16:9 1023.75Mhz"},
		{hi5022q_mipi_video_1046p5MHZ,    ARRAY_SIZE(hi5022q_mipi_video_1046p5MHZ),    "16:9 1046.5MHz"},
	},
	{ // HS Video
		{NULL,                            0,                                           "slow motion 672.75MHz - defaults"},
		{hi5022q_mipi_hs_835p25Mhz,       ARRAY_SIZE(hi5022q_mipi_hs_835p25Mhz),       "slow motion 835.25MHz"},
		{hi5022q_mipi_hs_1023p75Mhz,      ARRAY_SIZE(hi5022q_mipi_hs_1023p75Mhz),      "slow motion 1023.75Mhz"},
		{hi5022q_mipi_hs_1046p5MHZ,       ARRAY_SIZE(hi5022q_mipi_hs_1046p5MHZ),       "slow motion 1046.5MHz"},
	},
	{ // NOT USED - Slim Video
		{NULL,                            0,                                           "not used"},
		{NULL,                            0,                                           "not used"},
		{NULL,                            0,                                           "not used"},
		{NULL,                            0,                                           "not used"},
	},
	{ // NOT USED - custom1
		{NULL,                            0,                                           "not used"},
		{NULL,                            0,                                           "not used"},
		{NULL,                            0,                                           "not used"},
		{NULL,                            0,                                           "not used"},
	},
	{ // custom2
		{NULL,                            0,                                           "remosaic 1150.5MHz - defaults"},
		{hi5022q_mipi_custom2_1179p75Mhz, ARRAY_SIZE(hi5022q_mipi_custom2_1179p75Mhz), "remosaic 1179.75MHz"},
		{hi5022q_mipi_custom2_1196Mhz,    ARRAY_SIZE(hi5022q_mipi_custom2_1196Mhz),    "remosaic 1196Mhz"},
		{NULL,                            0,                                           "remosaic not used"},
	},
	{ // NOT USED -  custom3
		{NULL,                            0,                                           "not used"},
		{NULL,                            0,                                           "not used"},
		{NULL,                            0,                                           "not used"},
		{NULL,                            0,                                           "not used"},
	},
	{ // NOT USED -  custom4
		{NULL,                            0,                                           "not used"},
		{NULL,                            0,                                           "not used"},
		{NULL,                            0,                                           "not used"},
		{NULL,                            0,                                           "not used"},
	},
	{ // NOT USED - custom5
		{NULL,                            0,                                           "not used"},
		{NULL,                            0,                                           "not used"},
		{NULL,                            0,                                           "not used"},
		{NULL,                            0,                                           "not used"},
	},
};

struct cam_mipi_channel hi5022q_mipi_channel_full[] = {
	{ CAM_RAT_BAND(CAM_RAT_1_GSM, CAM_BAND_001_GSM_GSM850), 0, 0, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_1_GSM, CAM_BAND_002_GSM_EGSM900), 0, 0, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_1_GSM, CAM_BAND_003_GSM_DCS1800), 0, 0, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_1_GSM, CAM_BAND_004_GSM_PCS1900), 0, 0, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_011_WCDMA_WB01), 10562, 10728, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_011_WCDMA_WB01), 10729, 10798, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_011_WCDMA_WB01), 10799, 10838, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_012_WCDMA_WB02), 9662, 9831, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_012_WCDMA_WB02), 9832, 9901, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_012_WCDMA_WB02), 9902, 9938, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_013_WCDMA_WB03), 1162, 1358, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_013_WCDMA_WB03), 1359, 1428, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_013_WCDMA_WB03), 1429, 1513, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_014_WCDMA_WB04), 1537, 1703, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_014_WCDMA_WB04), 1704, 1738, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_015_WCDMA_WB05), 4357, 4449, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_015_WCDMA_WB05), 4450, 4458, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_016_WCDMA_WB06), 4387, 4413, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_017_WCDMA_WB07), 2237, 2320, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_017_WCDMA_WB07), 2321, 2362, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_017_WCDMA_WB07), 2363, 2390, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_017_WCDMA_WB07), 2391, 2563, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_018_WCDMA_WB08), 2937, 3048, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_018_WCDMA_WB08), 3049, 3053, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_018_WCDMA_WB08), 3054, 3088, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_029_WCDMA_WB19), 712, 763, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_091_LTE_LB01), 0, 357, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_091_LTE_LB01), 358, 497, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_091_LTE_LB01), 498, 599, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_092_LTE_LB02), 600, 963, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_092_LTE_LB02), 964, 1103, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_092_LTE_LB02), 1104, 1199, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_093_LTE_LB03), 1200, 1617, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_093_LTE_LB03), 1618, 1757, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_093_LTE_LB03), 1758, 1949, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_094_LTE_LB04), 1950, 2307, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_094_LTE_LB04), 2308, 2399, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_095_LTE_LB05), 2400, 2609, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_095_LTE_LB05), 2610, 2628, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_095_LTE_LB05), 2629, 2649, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_097_LTE_LB07), 2750, 2941, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_097_LTE_LB07), 2942, 3024, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_097_LTE_LB07), 3025, 3081, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_097_LTE_LB07), 3082, 3449, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_098_LTE_LB08), 3450, 3697, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_098_LTE_LB08), 3698, 3707, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_098_LTE_LB08), 3708, 3799, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_102_LTE_LB12), 5010, 5179, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_103_LTE_LB13), 5180, 5279, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_104_LTE_LB14), 5280, 5379, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_107_LTE_LB17), 5730, 5849, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_108_LTE_LB18), 5850, 5999, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_109_LTE_LB19), 6000, 6149, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_110_LTE_LB20), 6150, 6449, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_111_LTE_LB21), 6450, 6517, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_111_LTE_LB21), 6518, 6599, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_115_LTE_LB25), 8040, 8403, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_115_LTE_LB25), 8404, 8543, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_115_LTE_LB25), 8544, 8689, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_116_LTE_LB26), 8690, 8999, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_116_LTE_LB26), 9000, 9018, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_116_LTE_LB26), 9019, 9039, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_118_LTE_LB28), 9210, 9333, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_118_LTE_LB28), 9334, 9368, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_118_LTE_LB28), 9369, 9473, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_118_LTE_LB28), 9474, 9659, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_119_LTE_LB29), 9660, 9735, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_119_LTE_LB29), 9736, 9769, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_120_LTE_LB30), 9770, 9785, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_120_LTE_LB30), 9786, 9869, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_122_LTE_LB32), 9920, 10286, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_122_LTE_LB32), 10287, 10359, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_124_LTE_LB34), 36200, 36349, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_128_LTE_LB38), 37750, 37866, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_128_LTE_LB38), 37867, 37934, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_128_LTE_LB38), 37935, 38006, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_128_LTE_LB38), 38007, 38249, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_129_LTE_LB39), 38250, 38515, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_129_LTE_LB39), 38516, 38649, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 38650, 38901, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 38902, 38952, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 38953, 39041, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 39042, 39114, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 39115, 39165, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 39166, 39305, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 39306, 39649, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 39650, 39930, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 39931, 39984, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 39985, 40070, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 40071, 40506, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 40507, 40574, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 40575, 40646, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 40647, 41081, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 41082, 41164, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 41165, 41221, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 41222, 41589, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 41590, 41606, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 41607, 41732, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 41733, 41746, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 41747, 42204, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 42205, 42322, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 42323, 42344, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 42345, 42787, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 42788, 43185, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 43186, 43226, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 43227, 43325, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 43326, 43589, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 55240, 55335, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 55336, 55376, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 55377, 55475, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 55476, 55910, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 55911, 56050, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 56051, 56486, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 56487, 56626, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 56627, 56739, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_156_LTE_LB66), 66436, 66793, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_156_LTE_LB66), 66794, 66933, CAM_HI5022Q_SET_A_Full_1179p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_156_LTE_LB66), 66934, 67335, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_161_LTE_LB71), 68586, 68923, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_161_LTE_LB71), 68924, 68935, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_4_TDSCDMA, CAM_BAND_051_TDSCDMA_TD1), 0, 0, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_4_TDSCDMA, CAM_BAND_052_TDSCDMA_TD2), 0, 0, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_4_TDSCDMA, CAM_BAND_053_TDSCDMA_TD3), 0, 0, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_4_TDSCDMA, CAM_BAND_054_TDSCDMA_TD4), 0, 0, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_4_TDSCDMA, CAM_BAND_055_TDSCDMA_TD5), 0, 0, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_4_TDSCDMA, CAM_BAND_056_TDSCDMA_TD6), 0, 0, CAM_HI5022Q_SET_A_Full_1150p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_5_CDMA, CAM_BAND_061_CDMA_BC0), 0, 0, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_5_CDMA, CAM_BAND_062_CDMA_BC1), 0, 0, CAM_HI5022Q_SET_A_Full_1196_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_5_CDMA, CAM_BAND_071_CDMA_BC10), 0, 0, CAM_HI5022Q_SET_A_Full_1196_MHZ },
};

struct cam_mipi_channel hi5022q_mipi_channel_binning[] = {
	{ CAM_RAT_BAND(CAM_RAT_1_GSM, CAM_BAND_001_GSM_GSM850), 0, 0, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_1_GSM, CAM_BAND_002_GSM_EGSM900), 0, 0, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_1_GSM, CAM_BAND_003_GSM_DCS1800), 0, 0, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_1_GSM, CAM_BAND_004_GSM_PCS1900), 0, 0, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_011_WCDMA_WB01), 10562, 10614, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_011_WCDMA_WB01), 10615, 10630, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_011_WCDMA_WB01), 10631, 10684, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_011_WCDMA_WB01), 10685, 10823, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_011_WCDMA_WB01), 10824, 10838, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_012_WCDMA_WB02), 9662, 9779, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_012_WCDMA_WB02), 9780, 9849, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_012_WCDMA_WB02), 9850, 9938, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_013_WCDMA_WB03), 1162, 1246, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_013_WCDMA_WB03), 1247, 1303, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_013_WCDMA_WB03), 1304, 1316, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_013_WCDMA_WB03), 1317, 1508, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_013_WCDMA_WB03), 1509, 1513, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_014_WCDMA_WB04), 1537, 1589, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_014_WCDMA_WB04), 1590, 1605, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_014_WCDMA_WB04), 1606, 1659, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_014_WCDMA_WB04), 1660, 1738, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_015_WCDMA_WB05), 4357, 4407, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_015_WCDMA_WB05), 4408, 4458, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_016_WCDMA_WB06), 4387, 4407, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_016_WCDMA_WB06), 4408, 4413, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_017_WCDMA_WB07), 2237, 2241, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_017_WCDMA_WB07), 2242, 2432, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_017_WCDMA_WB07), 2433, 2453, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_017_WCDMA_WB07), 2454, 2468, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_017_WCDMA_WB07), 2469, 2502, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_017_WCDMA_WB07), 2503, 2563, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_018_WCDMA_WB08), 2937, 2974, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_018_WCDMA_WB08), 2975, 3044, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_018_WCDMA_WB08), 3045, 3088, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_029_WCDMA_WB19), 712, 732, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_029_WCDMA_WB19), 733, 763, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_091_LTE_LB01), 0, 128, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_091_LTE_LB01), 129, 161, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_091_LTE_LB01), 162, 268, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_091_LTE_LB01), 269, 546, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_091_LTE_LB01), 547, 599, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_092_LTE_LB02), 600, 858, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_092_LTE_LB02), 859, 998, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_092_LTE_LB02), 999, 1199, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_093_LTE_LB03), 1200, 1393, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_093_LTE_LB03), 1394, 1507, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_093_LTE_LB03), 1508, 1533, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_093_LTE_LB03), 1534, 1916, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_093_LTE_LB03), 1917, 1949, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_094_LTE_LB04), 1950, 2078, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_094_LTE_LB04), 2079, 2111, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_094_LTE_LB04), 2112, 2218, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_094_LTE_LB04), 2219, 2399, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_095_LTE_LB05), 2400, 2525, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_095_LTE_LB05), 2526, 2649, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_097_LTE_LB07), 2750, 2782, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_097_LTE_LB07), 2783, 3165, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_097_LTE_LB07), 3166, 3207, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_097_LTE_LB07), 3208, 3237, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_097_LTE_LB07), 3238, 3305, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_097_LTE_LB07), 3306, 3449, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_098_LTE_LB08), 3450, 3548, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_098_LTE_LB08), 3549, 3688, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_098_LTE_LB08), 3689, 3799, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_102_LTE_LB12), 5010, 5115, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_102_LTE_LB12), 5116, 5179, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_103_LTE_LB13), 5180, 5279, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_104_LTE_LB14), 5280, 5379, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_107_LTE_LB17), 5730, 5785, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_107_LTE_LB17), 5786, 5849, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_108_LTE_LB18), 5850, 5925, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_108_LTE_LB18), 5926, 5999, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_109_LTE_LB19), 6000, 6065, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_109_LTE_LB19), 6066, 6149, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_110_LTE_LB20), 6150, 6158, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_110_LTE_LB20), 6159, 6449, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_111_LTE_LB21), 6450, 6599, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_115_LTE_LB25), 8040, 8298, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_115_LTE_LB25), 8299, 8438, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_115_LTE_LB25), 8439, 8689, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_116_LTE_LB26), 8690, 8696, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_116_LTE_LB26), 8697, 8775, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_116_LTE_LB26), 8776, 8915, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_116_LTE_LB26), 8916, 9039, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_118_LTE_LB28), 9210, 9408, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_118_LTE_LB28), 9409, 9548, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_118_LTE_LB28), 9549, 9659, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_119_LTE_LB29), 9660, 9745, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_119_LTE_LB29), 9746, 9769, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_120_LTE_LB30), 9770, 9869, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_122_LTE_LB32), 9920, 10174, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_122_LTE_LB32), 10175, 10314, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_122_LTE_LB32), 10315, 10359, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_124_LTE_LB34), 36200, 36216, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_124_LTE_LB34), 36217, 36349, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_128_LTE_LB38), 37750, 37871, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_128_LTE_LB38), 37872, 38142, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_128_LTE_LB38), 38143, 38225, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_128_LTE_LB38), 38226, 38249, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_129_LTE_LB39), 38250, 38313, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_129_LTE_LB39), 38314, 38590, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_129_LTE_LB39), 38591, 38649, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 38650, 38789, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 38790, 38929, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 38930, 39126, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 39127, 39266, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 39267, 39342, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 39343, 39638, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 39639, 39649, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 39650, 39701, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 39702, 39735, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 39736, 39841, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 39842, 40213, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 40214, 40259, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 40260, 40324, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 40325, 40353, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 40354, 40511, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 40512, 40782, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 40783, 40865, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 40866, 40922, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 40923, 41305, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 41306, 41347, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 41348, 41377, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 41378, 41445, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 41446, 41589, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 41590, 41815, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 41816, 41955, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 41956, 42327, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 42328, 42467, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 42468, 42839, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 42840, 42979, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 42980, 43351, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 43352, 43491, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 43492, 43589, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 55240, 55501, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 55502, 55641, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 55642, 55914, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 55915, 56297, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 56298, 56437, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 56438, 56739, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_156_LTE_LB66), 66436, 66564, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_156_LTE_LB66), 66565, 66597, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_156_LTE_LB66), 66598, 66704, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_156_LTE_LB66), 66705, 66982, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_156_LTE_LB66), 66983, 67122, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_156_LTE_LB66), 67123, 67335, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_161_LTE_LB71), 68586, 68624, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_161_LTE_LB71), 68625, 68628, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_161_LTE_LB71), 68629, 68764, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_161_LTE_LB71), 68765, 68935, CAM_HI5022Q_SET_B_binning_1046p5_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_4_TDSCDMA, CAM_BAND_051_TDSCDMA_TD1), 0, 0, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_4_TDSCDMA, CAM_BAND_052_TDSCDMA_TD2), 0, 0, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_4_TDSCDMA, CAM_BAND_053_TDSCDMA_TD3), 0, 0, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_4_TDSCDMA, CAM_BAND_054_TDSCDMA_TD4), 0, 0, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_4_TDSCDMA, CAM_BAND_055_TDSCDMA_TD5), 0, 0, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_4_TDSCDMA, CAM_BAND_056_TDSCDMA_TD6), 0, 0, CAM_HI5022Q_SET_B_binning_672p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_5_CDMA, CAM_BAND_061_CDMA_BC0), 0, 0, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_5_CDMA, CAM_BAND_062_CDMA_BC1), 0, 0, CAM_HI5022Q_SET_B_binning_1023p75_MHZ },
	{ CAM_RAT_BAND(CAM_RAT_5_CDMA, CAM_BAND_071_CDMA_BC10), 0, 0, CAM_HI5022Q_SET_B_binning_835p25_MHZ },
};

#endif
