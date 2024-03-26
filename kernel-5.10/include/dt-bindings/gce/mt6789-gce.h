/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2021 MediaTek Inc.
 *
 */

#ifndef _DT_BINDINGS_GCE_MT6789_H
#define _DT_BINDINGS_GCE_MT6789_H

/* assign timeout 0 also means default */
#define CMDQ_NO_TIMEOUT		0xffffffff
#define CMDQ_TIMEOUT_DEFAULT	1000

/* GCE thread priority */
#define CMDQ_THR_PRIO_LOWEST	0
#define CMDQ_THR_PRIO_1		1
#define CMDQ_THR_PRIO_2		2
#define CMDQ_THR_PRIO_3		3
#define CMDQ_THR_PRIO_4		4
#define CMDQ_THR_PRIO_5		5
#define CMDQ_THR_PRIO_6		6
#define CMDQ_THR_PRIO_HIGHEST	7

/* CPR count in 32bit register */
#define GCE_CPR_COUNT		1312

/* GCE subsys table */
#define SUBSYS_1300XXXX		0
#define SUBSYS_1400XXXX		1
#define SUBSYS_1401XXXX		2
#define SUBSYS_1402XXXX		3
#define SUBSYS_1502XXXX		4
#define SUBSYS_1880XXXX		5
#define SUBSYS_1881XXXX		6
#define SUBSYS_1882XXXX		7
#define SUBSYS_1883XXXX		8
#define SUBSYS_1884XXXX		9
#define SUBSYS_1000XXXX		10
#define SUBSYS_1001XXXX		11
#define SUBSYS_1002XXXX		12
#define SUBSYS_1003XXXX		13
#define SUBSYS_1004XXXX		14
#define SUBSYS_1005XXXX		15
#define SUBSYS_1020XXXX		16
#define SUBSYS_1028XXXX		17
#define SUBSYS_1700XXXX		18
#define SUBSYS_1701XXXX		19
#define SUBSYS_1702XXXX		20
#define SUBSYS_1703XXXX		21
#define SUBSYS_1800XXXX		22
#define SUBSYS_1801XXXX		23
#define SUBSYS_1802XXXX		24
#define SUBSYS_1804XXXX		25
#define SUBSYS_1805XXXX		26
#define SUBSYS_1808XXXX		27
#define SUBSYS_180aXXXX		28
#define SUBSYS_180bXXXX		29
#define SUBSYS_NO_SUPPORT	99

/* GCE General Purpose Register (GPR) support
 * Leave note for scenario usage here
 */
/* GCE: write mask */
#define GCE_GPR_R00		0x00
#define GCE_GPR_R01		0x01
#define GCE_GPR_R02		0x02
/* DISP */
#define GCE_GPR_R03		0x03
#define GCE_GPR_R04		0x04
#define GCE_GPR_R05		0x05
#define GCE_GPR_R06		0x06
#define GCE_GPR_R07		0x07
/* MML Pipe 0 */
#define GCE_GPR_R08		0x08
#define GCE_GPR_R09		0x09
/* MML Pipe 1 */
#define GCE_GPR_R10		0x0A
#define GCE_GPR_R11		0x0B
/* MDP Pipe 0 */
#define GCE_GPR_R12		0x0C
#define GCE_GPR_R13		0x0D
/* MDP Pipe 1 */
#define GCE_GPR_R14		0x0E
#define GCE_GPR_R15		0x0F

/* GCE hardware events */
#define CMDQ_EVENT_VDEC_GCE_EVENT_0		0
#define CMDQ_EVENT_VDEC_GCE_EVENT_1		1
#define CMDQ_EVENT_VDEC_GCE_EVENT_2		2
#define CMDQ_EVENT_VDEC_GCE_EVENT_3		3
#define CMDQ_EVENT_VDEC_GCE_EVENT_4		4
#define CMDQ_EVENT_VDEC_GCE_EVENT_5		5
#define CMDQ_EVENT_VDEC_GCE_EVENT_6		6
#define CMDQ_EVENT_VDEC_GCE_EVENT_7		7
#define CMDQ_EVENT_VDEC_GCE_EVENT_8		8
#define CMDQ_EVENT_VDEC_GCE_EVENT_9		9
#define CMDQ_EVENT_VDEC_GCE_EVENT_10		10
#define CMDQ_EVENT_VDEC_GCE_EVENT_11		11
#define CMDQ_EVENT_VDEC_GCE_EVENT_12		12
#define CMDQ_EVENT_VDEC_GCE_EVENT_13		13
#define CMDQ_EVENT_VDEC_GCE_EVENT_14		14
#define CMDQ_EVENT_VDEC_GCE_EVENT_15		15
#define CMDQ_EVENT_VDEC_VDEC_MINI_MDP_EVENT_0	16
#define CMDQ_EVENT_VDEC_VDEC_MINI_MDP_EVENT_1	17
#define CMDQ_EVENT_VDEC_VDEC_MINI_MDP_EVENT_2	18
#define CMDQ_EVENT_VDEC_VDEC_MINI_MDP_EVENT_3	19
#define CMDQ_EVENT_VDEC_VDEC_MINI_MDP_EVENT_4	20
#define CMDQ_EVENT_VDEC_VDEC_MINI_MDP_EVENT_5	21
#define CMDQ_EVENT_VDEC_VDEC_MINI_MDP_EVENT_6	22
#define CMDQ_EVENT_VDEC_VDEC_MINI_MDP_EVENT_7	23
#define CMDQ_EVENT_VDEC_VDEC_MINI_MDP_EVENT_8	24
#define CMDQ_EVENT_VDEC_VDEC_MINI_MDP_EVENT_9	25
#define CMDQ_EVENT_VDEC_VDEC_MINI_MDP_EVENT_10	26
#define CMDQ_EVENT_VDEC_VDEC_MINI_MDP_EVENT_11	27
#define CMDQ_EVENT_VDEC_VDEC_MINI_MDP_EVENT_12	28
#define CMDQ_EVENT_VDEC_VDEC_MINI_MDP_EVENT_13	29
#define CMDQ_EVENT_VDEC_VDEC_MINI_MDP_EVENT_14	30
#define CMDQ_EVENT_VDEC_VDEC_MINI_MDP_EVENT_15	31

#define CMDQ_EVENT_CAM_FRAME_DONE_0	65
#define CMDQ_EVENT_CAM_FRAME_DONE_1	66
#define CMDQ_EVENT_CAM_FRAME_DONE_2	67
#define CMDQ_EVENT_CAM_FRAME_DONE_3	68
#define CMDQ_EVENT_CAM_FRAME_DONE_4	69
#define CMDQ_EVENT_CAM_FRAME_DONE_5	70
#define CMDQ_EVENT_CAM_FRAME_DONE_6	71
#define CMDQ_EVENT_CAM_FRAME_DONE_7	72
#define CMDQ_EVENT_CAM_FRAME_DONE_8	73
#define CMDQ_EVENT_CAM_FRAME_DONE_9	74
#define CMDQ_EVENT_CAM_ENG_EVENT_0	75
#define CMDQ_EVENT_CAM_ENG_EVENT_1	76
#define CMDQ_EVENT_CAM_ENG_EVENT_2	77
#define CMDQ_EVENT_CAM_ENG_EVENT_3	78
#define CMDQ_EVENT_CAM_ENG_EVENT_4	79
#define CMDQ_EVENT_CAM_ENG_EVENT_5	80
#define CMDQ_EVENT_CAM_ENG_EVENT_6	81
#define CMDQ_EVENT_CAM_ENG_EVENT_7	82
#define CMDQ_EVENT_CAM_ENG_EVENT_8	83
#define CMDQ_EVENT_CAM_ENG_EVENT_9	84
#define CMDQ_EVENT_CAM_ENG_EVENT_10	85
#define CMDQ_EVENT_CAM_ENG_EVENT_11	86
#define CMDQ_EVENT_CAM_ENG_EVENT_12	87
#define CMDQ_EVENT_CAM_ENG_EVENT_13	88
#define CMDQ_EVENT_CAM_ENG_EVENT_14	89
#define CMDQ_EVENT_CAM_ENG_EVENT_15	90
#define CMDQ_EVENT_CAM_ENG_EVENT_16	91
#define CMDQ_EVENT_CAM_ENG_EVENT_17	92
#define CMDQ_EVENT_CAM_ENG_EVENT_18	93
#define CMDQ_EVENT_CAM_ENG_EVENT_19	94
#define CMDQ_EVENT_CAM_ENG_EVENT_20	95
#define CMDQ_EVENT_CAM_ENG_EVENT_21	96
#define CMDQ_EVENT_CAM_ENG_EVENT_22	97
#define CMDQ_EVENT_CAM_ENG_EVENT_23	98
#define CMDQ_EVENT_CAM_ENG_EVENT_24	99
#define CMDQ_EVENT_CAM_ENG_EVENT_25	100
#define CMDQ_EVENT_CAM_ENG_EVENT_26	101
#define CMDQ_EVENT_CAM_ENG_EVENT_27	102
#define CMDQ_EVENT_CAM_ENG_EVENT_28	103

#define CMDQ_EVENT_VENC_VENCSYS_CMDQ_DONE_CAT_0		129
#define CMDQ_EVENT_VENC_VENCSYS_CMDQ_DONE_CAT_1		130
#define CMDQ_EVENT_VENC_VENCSYS_CMDQ_DONE_CAT_2		131
#define CMDQ_EVENT_VENC_VENCSYS_CMDQ_DONE_CAT_3		132
#define CMDQ_EVENT_VENC_VENCSYS_CMDQ_DONE_CAT_4		133
#define CMDQ_EVENT_VENC_VENCSYS_CMDQ_DONE_CAT_5		134
#define CMDQ_EVENT_VENC_VENCSYS_CMDQ_DONE_CAT_6		135
#define CMDQ_EVENT_VENC_VENCSYS_CMDQ_DONE_CAT_7		136
#define CMDQ_EVENT_VENC_VENCSYS_CMDQ_DONE_CAT_8		137
#define CMDQ_EVENT_VENC_VENCSYS_CMDQ_DONE_CAT_9		138
#define CMDQ_EVENT_VENC_VENCSYS_CMDQ_DONE_CAT_10	139
#define CMDQ_EVENT_VENC_VENCSYS_CMDQ_DONE_CAT_11	140
#define CMDQ_EVENT_VENC_VENCSYS_CMDQ_DONE_CAT_12	141
#define CMDQ_EVENT_VENC_VENCSYS_CMDQ_DONE_CAT_13	142
#define CMDQ_EVENT_VENC_VENC_CMDQ_BSDMA_FULL		143

#define CMDQ_EVENT_IPE_GCE_EVENT_0		177
#define CMDQ_EVENT_IPE_GCE_EVENT_1		178
#define CMDQ_EVENT_IPE_GCE_EVENT_2		179
#define CMDQ_EVENT_IPE_GCE_EVENT_3		180
#define CMDQ_EVENT_IPE_GCE_EVENT_4		181

#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_0	225
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_1	226
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_2	227
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_3	228
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_4	229
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_5	230
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_6	231
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_7	232
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_8	233
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_9	234
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_10	235
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_11	236
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_12	237
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_13	238
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_14	239
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_15	240
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_16	241
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_17	242
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_18	243
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_19	244
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_20	245
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_21	246
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_22	247
#define CMDQ_EVENT_IMG2_EVENT_TX_FRAME_DONE_23	248

#define CMDQ_EVENT_MDP_MDP_RDMA0_SOF			256
#define CMDQ_EVENT_MDP_MDP_RDMA1_SOF			257
#define CMDQ_EVENT_MDP_MDP_AAL0_SOF			258
#define CMDQ_EVENT_MDP_MDP_AAL1_SOF			259
#define CMDQ_EVENT_MDP_MDP_HDR0_SOF			260
#define CMDQ_EVENT_MDP_MDP_RSZ0_SOF			261
#define CMDQ_EVENT_MDP_MDP_RSZ1_SOF			262
#define CMDQ_EVENT_MDP_MDP_WROT0_SOF			263
#define CMDQ_EVENT_MDP_MDP_WROT1_SOF			264
#define CMDQ_EVENT_MDP_MDP_TDSHP0_SOF			265
#define CMDQ_EVENT_MDP_MDP_TDSHP1_SOF			266
#define CMDQ_EVENT_MDP_IMG_DL_RELAY0_SOF		267
#define CMDQ_EVENT_MDP_IMG_DL_RELAY1_SOF		268
#define CMDQ_EVENT_MDP_MDP_COLOR0_SOF			269
#define CMDQ_EVENT_MDP_MDP_WROT3_FRAME_DONE		288
#define CMDQ_EVENT_MDP_MDP_WROT2_FRAME_DONE		289
#define CMDQ_EVENT_MDP_MDP_WROT1_FRAME_DONE		290
#define CMDQ_EVENT_MDP_MDP_WROT0_FRAME_DONE		291
#define CMDQ_EVENT_MDP_MDP_TDSHP3_FRAME_DONE		292
#define CMDQ_EVENT_MDP_MDP_TDSHP2_FRAME_DONE		293
#define CMDQ_EVENT_MDP_MDP_TDSHP1_FRAME_DONE		294
#define CMDQ_EVENT_MDP_MDP_TDSHP0_FRAME_DONE		295
#define CMDQ_EVENT_MDP_MDP_RSZ3_FRAME_DONE		296
#define CMDQ_EVENT_MDP_MDP_RSZ2_FRAME_DONE		297
#define CMDQ_EVENT_MDP_MDP_RSZ1_FRAME_DONE		298
#define CMDQ_EVENT_MDP_MDP_RSZ0_FRAME_DONE		299
#define CMDQ_EVENT_MDP_MDP_RDMA3_FRAME_DONE		300
#define CMDQ_EVENT_MDP_MDP_RDMA2_FRAME_DONE		301
#define CMDQ_EVENT_MDP_MDP_RDMA1_FRAME_DONE		302
#define CMDQ_EVENT_MDP_MDP_RDMA0_FRAME_DONE		303
#define CMDQ_EVENT_MDP_MDP_HDR1_FRAME_DONE		304
#define CMDQ_EVENT_MDP_MDP_HDR0_FRAME_DONE		305
#define CMDQ_EVENT_MDP_MDP_COLOR0_FRAME_DONE		306
#define CMDQ_EVENT_MDP_MDP_AAL3_FRAME_DONE		307
#define CMDQ_EVENT_MDP_MDP_AAL2_FRAME_DONE		308
#define CMDQ_EVENT_MDP_MDP_AAL1_FRAME_DONE		309
#define CMDQ_EVENT_MDP_MDP_AAL0_FRAME_DONE		310
#define CMDQ_EVENT_MDP_STREAM_DONE_ENG_EVENT_0		320
#define CMDQ_EVENT_MDP_STREAM_DONE_ENG_EVENT_1		321
#define CMDQ_EVENT_MDP_STREAM_DONE_ENG_EVENT_2		322
#define CMDQ_EVENT_MDP_STREAM_DONE_ENG_EVENT_3		323
#define CMDQ_EVENT_MDP_STREAM_DONE_ENG_EVENT_4		324
#define CMDQ_EVENT_MDP_STREAM_DONE_ENG_EVENT_5		325
#define CMDQ_EVENT_MDP_STREAM_DONE_ENG_EVENT_6		326
#define CMDQ_EVENT_MDP_STREAM_DONE_ENG_EVENT_7		327
#define CMDQ_EVENT_MDP_STREAM_DONE_ENG_EVENT_8		328
#define CMDQ_EVENT_MDP_STREAM_DONE_ENG_EVENT_9		329
#define CMDQ_EVENT_MDP_STREAM_DONE_ENG_EVENT_10		330
#define CMDQ_EVENT_MDP_STREAM_DONE_ENG_EVENT_11		331
#define CMDQ_EVENT_MDP_STREAM_DONE_ENG_EVENT_12		332
#define CMDQ_EVENT_MDP_STREAM_DONE_ENG_EVENT_13		333
#define CMDQ_EVENT_MDP_STREAM_DONE_ENG_EVENT_14		334
#define CMDQ_EVENT_MDP_STREAM_DONE_ENG_EVENT_15		335
#define CMDQ_EVENT_MDP_MDP_WROT3_SW_RST_DONE_ENG_EVENT	336
#define CMDQ_EVENT_MDP_MDP_WROT2_SW_RST_DONE_ENG_EVENT	337
#define CMDQ_EVENT_MDP_MDP_WROT1_SW_RST_DONE_ENG_EVENT	338
#define CMDQ_EVENT_MDP_MDP_WROT0_SW_RST_DONE_ENG_EVENT	339
#define CMDQ_EVENT_MDP_MDP_RDMA3_SW_RST_DONE_ENG_EVENT	340
#define CMDQ_EVENT_MDP_MDP_RDMA2_SW_RST_DONE_ENG_EVENT	341
#define CMDQ_EVENT_MDP_MDP_RDMA1_SW_RST_DONE_ENG_EVENT	342
#define CMDQ_EVENT_MDP_MDP_RDMA0_SW_RST_DONE_ENG_EVENT	343

#define CMDQ_EVENT_DISP_DISP_OVL0_SOF			384
#define CMDQ_EVENT_DISP_DISP_OVL0_2L_SOF		385
#define CMDQ_EVENT_DISP_DISP_RDMA0_SOF			386
#define CMDQ_EVENT_DISP_DISP_RSZ0_SOF			387
#define CMDQ_EVENT_DISP_DISP_COLOR0_SOF			388
#define CMDQ_EVENT_DISP_DISP_CCORR0_SOF			389
#define CMDQ_EVENT_DISP_DISP_CCORR1_SOF			390
#define CMDQ_EVENT_DISP_DISP_AAL0_SOF			391
#define CMDQ_EVENT_DISP_DISP_GAMMA0_SOF			392
#define CMDQ_EVENT_DISP_DISP_POSTMASK0_SOF		393
#define CMDQ_EVENT_DISP_DISP_DITHER0_SOF		394
#define CMDQ_EVENT_DISP_DISP_CM0_SOF			395
#define CMDQ_EVENT_DISP_DISP_SPR0_SOF			396
#define CMDQ_EVENT_DISP_DISP_DSC_WRAP0_SOF		397
#define CMDQ_EVENT_DISP_DSI0_SOF			398
#define CMDQ_EVENT_DISP_DISP_WDMA0_SOF			399
#define CMDQ_EVENT_DISP_DISP_PWM0_SOF			400
#define CMDQ_EVENT_DISP_DSI0_FRAME_DONE			410
#define CMDQ_EVENT_DISP_DISP_WDMA0_FRAME_DONE		411
#define CMDQ_EVENT_DISP_DISP_SPR0_FRAME_DONE		412
#define CMDQ_EVENT_DISP_DISP_RSZ0_FRAME_DONE		413
#define CMDQ_EVENT_DISP_DISP_RDMA0_FRAME_DONE		414
#define CMDQ_EVENT_DISP_DISP_POSTMASK0_FRAME_DONE	415
#define CMDQ_EVENT_DISP_DISP_OVL0_FRAME_DONE		416
#define CMDQ_EVENT_DISP_DISP_OVL0_2L_FRAME_DONE		417
#define CMDQ_EVENT_DISP_DISP_GAMMA0_FRAME_DONE		418
#define CMDQ_EVENT_DISP_DISP_DSC_WRAP0_CORE1_FRAME_DONE	419
#define CMDQ_EVENT_DISP_DISP_DSC_WRAP0_CORE0_FRAME_DONE	420
#define CMDQ_EVENT_DISP_DISP_DITHER0_FRAME_DONE		421
#define CMDQ_EVENT_DISP_DISP_COLOR0_FRAME_DONE		422
#define CMDQ_EVENT_DISP_DISP_CM0_FRAME_DONE		423
#define CMDQ_EVENT_DISP_DISP_CCORR1_FRAME_DONE		424
#define CMDQ_EVENT_DISP_DISP_CCORR0_FRAME_DONE		425
#define CMDQ_EVENT_DISP_DISP_AAL0_FRAME_DONE		426
#define CMDQ_EVENT_DISP_STREAM_DONE_ENG_EVENT_0		434
#define CMDQ_EVENT_DISP_STREAM_DONE_ENG_EVENT_1		435
#define CMDQ_EVENT_DISP_STREAM_DONE_ENG_EVENT_2		436
#define CMDQ_EVENT_DISP_STREAM_DONE_ENG_EVENT_3		437
#define CMDQ_EVENT_DISP_STREAM_DONE_ENG_EVENT_4		438
#define CMDQ_EVENT_DISP_STREAM_DONE_ENG_EVENT_5		439
#define CMDQ_EVENT_DISP_STREAM_DONE_ENG_EVENT_6		440
#define CMDQ_EVENT_DISP_STREAM_DONE_ENG_EVENT_7		441
#define CMDQ_EVENT_DISP_STREAM_DONE_ENG_EVENT_8		442
#define CMDQ_EVENT_DISP_STREAM_DONE_ENG_EVENT_9		443
#define CMDQ_EVENT_DISP_STREAM_DONE_ENG_EVENT_10	444
#define CMDQ_EVENT_DISP_STREAM_DONE_ENG_EVENT_11	445
#define CMDQ_EVENT_DISP_STREAM_DONE_ENG_EVENT_12	446
#define CMDQ_EVENT_DISP_STREAM_DONE_ENG_EVENT_13	447
#define CMDQ_EVENT_DISP_STREAM_DONE_ENG_EVENT_14	448
#define CMDQ_EVENT_DISP_STREAM_DONE_ENG_EVENT_15	449
#define CMDQ_EVENT_DISP_DSI0_TE_ENG_EVENT		450
#define CMDQ_EVENT_DISP_DSI0_IRQ_ENG_EVENT		451
#define CMDQ_EVENT_DISP_DSI0_DONE_ENG_EVENT		452
#define CMDQ_EVENT_DISP_DISP_WDMA0_SW_RST_DONE_ENG_EVENT 453
#define CMDQ_EVENT_DISP_DISP_SMIASSERT_ENG_EVENT	454
#define CMDQ_EVENT_DISP_DISP_POSTMASK0_RST_DONE_ENG_EVENT 455
#define CMDQ_EVENT_DISP_DISP_OVL0_RST_DONE_ENG_EVENT	456
#define CMDQ_EVENT_DISP_DISP_OVL0_2L_RST_DONE_ENG_EVENT	457
#define CMDQ_EVENT_DISP_BUF_UNDERRUN_ENG_EVENT_0	458
#define CMDQ_EVENT_DISP_BUF_UNDERRUN_ENG_EVENT_1	459
#define CMDQ_EVENT_DISP_BUF_UNDERRUN_ENG_EVENT_2	460
#define CMDQ_EVENT_DISP_BUF_UNDERRUN_ENG_EVENT_3	461
#define CMDQ_EVENT_DISP_BUF_UNDERRUN_ENG_EVENT_4	462
#define CMDQ_EVENT_DISP_BUF_UNDERRUN_ENG_EVENT_5	463
#define CMDQ_EVENT_DISP_BUF_UNDERRUN_ENG_EVENT_6	464
#define CMDQ_EVENT_DISP_BUF_UNDERRUN_ENG_EVENT_7	465

#define CMDQ_EVENT_MM_OUT_EVENT_0	898

/* CMDQ sw tokens
 * Following definitions are gce sw token which may use by clients
 * event operation API.
 * Note that token 512 to 639 may set secure
 */

/* end of hw event and begin of sw token */
#define CMDQ_MAX_HW_EVENT				512

#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_1			514
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_2			515
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_3			516
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_4			517
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_5			518
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_6			519
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_7			520
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_8			521
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_9			522
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_10			523
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_11			524
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_12			525
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_13			526
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_14			527
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_15			528
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_16			529
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_17			530
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_18			531
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_19			532
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_20			533
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_21			534
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_22			535
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_23			536
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_24			537
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_25			538
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_26			539
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_27			540
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_28			541
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_29			542
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_30			543
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_31			544
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_32			545
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_33			546
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_34			547
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_35			548
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_36			549
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_37			550
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_38			551
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_39			552
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_40			553
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_41			554
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_42			555
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_43			556
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_44			557
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_45			558
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_46			559
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_47			560
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_48			561
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_49			562
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_50			563
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_51			564
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_52			565
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_53			566
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_54			567
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_55			568
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_56			569
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_57			570
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_58			571
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_59			572
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_60			573
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_61			574
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_62			575
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_63			576
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_64			577
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_65			578
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_66			579
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_67			580
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_68			581
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_69			582
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_70			583
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_71			584
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_72			585
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_73			586
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_74			587
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_75			588
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_76			589
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_77			590
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_78			591
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_79			592
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_80			593
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_81			594
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_82			595
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_83			596
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_84			597
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_85			598
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_86			599
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_87			600
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_88			601
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_89			602
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_90			603
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_91			604
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_92			605
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_93			606
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_94			607
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_95			608
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_96			609
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_97			610
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_98			611
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_99			612
#define CMDQ_SYNC_TOKEN_IMGSYS_POOL_100			613

/* MML sw tokens */
#define CMDQ_SYNC_TOKEN_MML_WROT0_PIPE			630
#define CMDQ_SYNC_TOKEN_MML_WROT2_PIPE			631
#define CMDQ_SYNC_TOKEN_MML_IR_MML_READY		632
#define CMDQ_SYNC_TOKEN_MML_IR_DISP_READY		633
#define CMDQ_SYNC_TOKEN_MML_MML_STOP			634

/* Config thread notify trigger thread */
#define CMDQ_SYNC_TOKEN_CONFIG_DIRTY			640
/* Trigger thread notify config thread */
#define CMDQ_SYNC_TOKEN_STREAM_EOF			641
/* Block Trigger thread until the ESD check finishes. */
#define CMDQ_SYNC_TOKEN_ESD_EOF				642
#define CMDQ_SYNC_TOKEN_STREAM_BLOCK			643
/* check CABC setup finish */
#define CMDQ_SYNC_TOKEN_CABC_EOF			644

/*VFP period token for Msync*/
#define CMDQ_SYNC_TOKEN_VFP_PERIOD			645

/* Notify normal CMDQ there are some secure task done
 * MUST NOT CHANGE, this token sync with secure world
 */
#define CMDQ_SYNC_SECURE_THR_EOF			647

/* CMDQ use sw token */
#define CMDQ_SYNC_TOKEN_USER_0				649
#define CMDQ_SYNC_TOKEN_USER_1				650
#define CMDQ_SYNC_TOKEN_POLL_MONITOR			651
#define CMDQ_SYNC_TOKEN_TPR_LOCK			652

/* ISP sw token */
#define CMDQ_SYNC_TOKEN_MSS			665
#define CMDQ_SYNC_TOKEN_MSF			666

/* TZMP sw token */
#define CMDQ_SYNC_TOKEN_TZMP_ISP_WAIT			676
#define CMDQ_SYNC_TOKEN_TZMP_ISP_SET			677
#define CMDQ_SYNC_TOKEN_TZMP_AIE_WAIT			678
#define CMDQ_SYNC_TOKEN_TZMP_AIE_SET			679

/* PREBUILT sw token */
#define CMDQ_SYNC_TOKEN_PREBUILT_MDP_LOCK		682
#define CMDQ_SYNC_TOKEN_PREBUILT_MML_LOCK		685
#define CMDQ_SYNC_TOKEN_PREBUILT_VFMT_LOCK		688
#define CMDQ_SYNC_TOKEN_PREBUILT_DISP_LOCK		691

#define CMDQ_SYNC_TOKEN_DISP_VA_START			692
#define CMDQ_SYNC_TOKEN_DISP_VA_END			693

/* histogram sw token */
#define CMDQ_SYNC_TOKEN_HISTOGRAM_MDP_WAIT		694
#define CMDQ_SYNC_TOKEN_HISTOGRAM_MDP_SET		695
#define CMDQ_SYNC_TOKEN_HISTOGRAM_VENC_WAIT		696
#define CMDQ_SYNC_TOKEN_HISTOGRAM_VENC_SET		697

/* GPR access tokens (for HW register backup)
 * There are 15 32-bit GPR, 3 GPR form a set
 * (64-bit for address, 32-bit for value)
 * MUST NOT CHANGE, these tokens sync with MDP
 */
#define CMDQ_SYNC_TOKEN_GPR_SET_0			700
#define CMDQ_SYNC_TOKEN_GPR_SET_1			701
#define CMDQ_SYNC_TOKEN_GPR_SET_2			702
#define CMDQ_SYNC_TOKEN_GPR_SET_3			703
#define CMDQ_SYNC_TOKEN_GPR_SET_4			704

/* Resource lock event to control resource in GCE thread */
#define CMDQ_SYNC_RESOURCE_WROT0			710
#define CMDQ_SYNC_RESOURCE_WROT1			711

/* event for gpr timer, used in sleep and poll with timeout */
#define CMDQ_TOKEN_GPR_TIMER_R0				994
#define CMDQ_TOKEN_GPR_TIMER_R1				995
#define CMDQ_TOKEN_GPR_TIMER_R2				996
#define CMDQ_TOKEN_GPR_TIMER_R3				997
#define CMDQ_TOKEN_GPR_TIMER_R4				998
#define CMDQ_TOKEN_GPR_TIMER_R5				999
#define CMDQ_TOKEN_GPR_TIMER_R6				1000
#define CMDQ_TOKEN_GPR_TIMER_R7				1001
#define CMDQ_TOKEN_GPR_TIMER_R8				1002
#define CMDQ_TOKEN_GPR_TIMER_R9				1003
#define CMDQ_TOKEN_GPR_TIMER_R10			1004
#define CMDQ_TOKEN_GPR_TIMER_R11			1005
#define CMDQ_TOKEN_GPR_TIMER_R12			1006
#define CMDQ_TOKEN_GPR_TIMER_R13			1007
#define CMDQ_TOKEN_GPR_TIMER_R14			1008
#define CMDQ_TOKEN_GPR_TIMER_R15			1009

#define CMDQ_EVENT_MAX					0x3FF
/* CMDQ sw tokens END */

#endif