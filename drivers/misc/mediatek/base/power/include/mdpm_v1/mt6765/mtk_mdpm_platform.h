/*
 * Copyright (C) 2017 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef _MTK_MDPM_PLATFORM_H_
#define _MTK_MDPM_PLATFORM_H_

#define MD_POWER_METER_ENABLE 1

#if MD_POWER_METER_ENABLE
/* #define MD_POWER_UT */
#endif

#define MAX_MD1_POWER	4000	/* mW */
#define MAX_DBM_POWER	\
	(MAX_PW_MD1_PA_4G_upL1_SECTION_1 + MAX_PW_MD1_RF_4G_upL1_SECTION_1)

#define GUARDING_PATTERN	0

#define SECTION_LEN	0xFFFFFFFF
/* total 4 byte, 6 section =  11 11111 11111 11111 11111 11111 11111 */
#define SECTION_VALUE	0x1F
/* each section is 0x1F = bit(11111) */

enum section_level_tbl {
	BIT_SECTION_1 = 0,
	BIT_SECTION_2 = 5,
	BIT_SECTION_3 = 10,
	BIT_SECTION_4 = 15,
	BIT_SECTION_5 = 20,
	BIT_SECTION_6 = 25,
	SECTION_NUM = 6
};

enum md1_scenario {
	S_STANDBY = 0,
	S_2G_CONNECT,
	S_3G_C2K_TALKING,
	S_3G_4G_C2K_PAGING,
	S_3G_C2K_DATALINK,
	S_4G_DL_1CC,
	S_4G_DL_2CC,
	SCENARIO_NUM
};

enum share_mem_mapping {	/* each of 4 byte */
	DBM_2G_TABLE = 0,
	DBM_3G_TABLE,
	DBM_4G_TABLE,
	DBM_4G_1_TABLE,
	DBM_4G_2_TABLE,
	DBM_4G_3_TABLE,
	DBM_4G_4_TABLE,
	DBM_4G_5_TABLE,
	DBM_4G_6_TABLE,
	DBM_4G_7_TABLE,
	DBM_4G_8_TABLE,
	DBM_4G_9_TABLE,
	DBM_4G_10_TABLE,
	DBM_4G_11_TABLE,
	DBM_4G_12_TABLE,
	DBM_TDD_TABLE,
	DBM_C2K_1_TABLE,
	DBM_C2K_2_TABLE,
	DBM_C2K_3_TABLE,
	DBM_C2K_4_TABLE,
	SECTION_LEVLE_2G,
	SECTION_LEVLE_3G,
	SECTION_LEVLE_4G,
	SECTION_1_LEVLE_4G,
	SECTION_2_LEVLE_4G,
	SECTION_3_LEVLE_4G,
	SECTION_4_LEVLE_4G,
	SECTION_5_LEVLE_4G,
	SECTION_6_LEVLE_4G,
	SECTION_7_LEVLE_4G,
	SECTION_8_LEVLE_4G,
	SECTION_9_LEVLE_4G,
	SECTION_10_LEVLE_4G,
	SECTION_11_LEVLE_4G,
	SECTION_12_LEVLE_4G,
	SECTION_LEVLE_TDD,
	SECTION_1_LEVLE_C2K,
	SECTION_2_LEVLE_C2K,
	SECTION_3_LEVLE_C2K,
	SECTION_4_LEVLE_C2K,
	SHARE_MEM_BLOCK_NUM
};

/*
 * MD1 Section level (can't more than SECTION_VALUE)
 */
/* Each section has only 5 bits. The range is from 0 to 31 */

//Samuel: move to platform
enum md1_section_level_tbl_2g {
	VAL_MD1_2G_SECTION_1 = 31,
	VAL_MD1_2G_SECTION_2 = 29,
	VAL_MD1_2G_SECTION_3 = 25,
	VAL_MD1_2G_SECTION_4 = 21,
	VAL_MD1_2G_SECTION_5 = 13,
	VAL_MD1_2G_SECTION_6 = 0
};

enum md1_section_level_tbl_3g {
	VAL_MD1_3G_SECTION_1 = 22,
	VAL_MD1_3G_SECTION_2 = 19,
	VAL_MD1_3G_SECTION_3 = 17,
	VAL_MD1_3G_SECTION_4 = 15,
	VAL_MD1_3G_SECTION_5 = 9,
	VAL_MD1_3G_SECTION_6 = 0
};

enum md1_section_level_tbl_4g_upL1 {
	VAL_MD1_4G_upL1_SECTION_1 = 22,
	VAL_MD1_4G_upL1_SECTION_2 = 20,
	VAL_MD1_4G_upL1_SECTION_3 = 17,
	VAL_MD1_4G_upL1_SECTION_4 = 13,
	VAL_MD1_4G_upL1_SECTION_5 = 5,
	VAL_MD1_4G_upL1_SECTION_6 = 0
};

enum md1_section_level_tbl_4g_upL2 {
	VAL_MD1_4G_upL2_SECTION_1 = 22,
	VAL_MD1_4G_upL2_SECTION_2 = 20,
	VAL_MD1_4G_upL2_SECTION_3 = 17,
	VAL_MD1_4G_upL2_SECTION_4 = 13,
	VAL_MD1_4G_upL2_SECTION_5 = 5,
	VAL_MD1_4G_upL2_SECTION_6 = 0
};

enum md1_section_level_tbl_tdd {
	VAL_MD1_TDD_SECTION_1 = 21,
	VAL_MD1_TDD_SECTION_2 = 19,
	VAL_MD1_TDD_SECTION_3 = 18,
	VAL_MD1_TDD_SECTION_4 = 16,
	VAL_MD1_TDD_SECTION_5 = 13,
	VAL_MD1_TDD_SECTION_6 = 0
};

enum md1_section_level_tbl_c2k {
	VAL_MD1_C2K_SECTION_1 = 23,
	VAL_MD1_C2K_SECTION_2 = 22,
	VAL_MD1_C2K_SECTION_3 = 20,
	VAL_MD1_C2K_SECTION_4 = 17,
	VAL_MD1_C2K_SECTION_5 = 16,
	VAL_MD1_C2K_SECTION_6 = 0
};

/*
 * MD1 Scenario power
 */

enum md1_scenario_max_pwr_tbl {
	MAX_PW_STANDBY = 1,
	MAX_PW_2G_CONNECT = 31,
	MAX_PW_3G_C2K_TALKING = 74,
	MAX_PW_3G_4G_C2K_PAGING = 1,
	MAX_PW_3G_C2K_DATALINK = 169,
	MAX_PW_4G_DL_1CC = 163,
	MAX_PW_4G_DL_2CC = 258
};

enum md1_scenario_avg_pwr_tbl {
	AVG_PW_STANDBY = 1,
	AVG_PW_2G_CONNECT = 31,
	AVG_PW_3G_C2K_TALKING = 74,
	AVG_PW_3G_4G_C2K_PAGING = 1,
	AVG_PW_3G_C2K_DATALINK = 169,
	AVG_PW_4G_DL_1CC = 163,
	AVG_PW_4G_DL_2CC = 258
};

/*
 * MD1 PA power
 */

enum md1_pa_max_pwr_tbl_2g {
	MAX_PW_MD1_PA_2G_SECTION_1 = 480,
	MAX_PW_MD1_PA_2G_SECTION_2 = 380,
	MAX_PW_MD1_PA_2G_SECTION_3 = 280,
	MAX_PW_MD1_PA_2G_SECTION_4 = 188,
	MAX_PW_MD1_PA_2G_SECTION_5 = 120,
	MAX_PW_MD1_PA_2G_SECTION_6 = 64
};

enum md1_pa_avg_pwr_tbl_2g {
	AVG_PW_MD1_PA_2G_SECTION_1 = 480,
	AVG_PW_MD1_PA_2G_SECTION_2 = 380,
	AVG_PW_MD1_PA_2G_SECTION_3 = 280,
	AVG_PW_MD1_PA_2G_SECTION_4 = 188,
	AVG_PW_MD1_PA_2G_SECTION_5 = 120,
	AVG_PW_MD1_PA_2G_SECTION_6 = 64
};

enum md1_pa_max_pwr_tbl_3g {
	MAX_PW_MD1_PA_3G_SECTION_1 = 1765,
	MAX_PW_MD1_PA_3G_SECTION_2 = 1421,
	MAX_PW_MD1_PA_3G_SECTION_3 = 793,
	MAX_PW_MD1_PA_3G_SECTION_4 = 637,
	MAX_PW_MD1_PA_3G_SECTION_5 = 320,
	MAX_PW_MD1_PA_3G_SECTION_6 = 228
};

enum md1_pa_avg_pwr_tbl_3g {
	AVG_PW_MD1_PA_3G_SECTION_1 = 1765,
	AVG_PW_MD1_PA_3G_SECTION_2 = 1421,
	AVG_PW_MD1_PA_3G_SECTION_3 = 793,
	AVG_PW_MD1_PA_3G_SECTION_4 = 637,
	AVG_PW_MD1_PA_3G_SECTION_5 = 320,
	AVG_PW_MD1_PA_3G_SECTION_6 = 228
};

enum md1_pa_max_pwr_tbl_4g_upL1 {
	MAX_PW_MD1_PA_4G_upL1_SECTION_1 = 1258,
	MAX_PW_MD1_PA_4G_upL1_SECTION_2 = 1132,
	MAX_PW_MD1_PA_4G_upL1_SECTION_3 = 694,
	MAX_PW_MD1_PA_4G_upL1_SECTION_4 = 428,
	MAX_PW_MD1_PA_4G_upL1_SECTION_5 = 197,
	MAX_PW_MD1_PA_4G_upL1_SECTION_6 = 112
};

enum md1_pa_avg_pwr_tbl_4g_upL1 {
	AVG_PW_MD1_PA_4G_upL1_SECTION_1 = 1258,
	AVG_PW_MD1_PA_4G_upL1_SECTION_2 = 1132,
	AVG_PW_MD1_PA_4G_upL1_SECTION_3 = 694,
	AVG_PW_MD1_PA_4G_upL1_SECTION_4 = 428,
	AVG_PW_MD1_PA_4G_upL1_SECTION_5 = 197,
	AVG_PW_MD1_PA_4G_upL1_SECTION_6 = 112
};

enum md1_pa_max_pwr_tbl_4g_upL2 {
	MAX_PW_MD1_PA_4G_upL2_SECTION_1 = 1258,
	MAX_PW_MD1_PA_4G_upL2_SECTION_2 = 1132,
	MAX_PW_MD1_PA_4G_upL2_SECTION_3 = 694,
	MAX_PW_MD1_PA_4G_upL2_SECTION_4 = 428,
	MAX_PW_MD1_PA_4G_upL2_SECTION_5 = 197,
	MAX_PW_MD1_PA_4G_upL2_SECTION_6 = 112
};

enum md1_pa_avg_pwr_tbl_4g_upL2 {
	AVG_PW_MD1_PA_4G_upL2_SECTION_1 = 1258,
	AVG_PW_MD1_PA_4G_upL2_SECTION_2 = 1132,
	AVG_PW_MD1_PA_4G_upL2_SECTION_3 = 694,
	AVG_PW_MD1_PA_4G_upL2_SECTION_4 = 428,
	AVG_PW_MD1_PA_4G_upL2_SECTION_5 = 197,
	AVG_PW_MD1_PA_4G_upL2_SECTION_6 = 112
};

enum md1_max_pa_pwr_tbl_c2k {
	MAX_PW_MD1_PA_C2K_SECTION_1 = 1753,
	MAX_PW_MD1_PA_C2K_SECTION_2 = 1420,
	MAX_PW_MD1_PA_C2K_SECTION_3 = 967,
	MAX_PW_MD1_PA_C2K_SECTION_4 = 718,
	MAX_PW_MD1_PA_C2K_SECTION_5 = 506,
	MAX_PW_MD1_PA_C2K_SECTION_6 = 233
};

enum md1_avg_pa_pwr_tbl_c2k {
	AVG_PW_MD1_PA_C2K_SECTION_1 = 1753,
	AVG_PW_MD1_PA_C2K_SECTION_2 = 1420,
	AVG_PW_MD1_PA_C2K_SECTION_3 = 967,
	AVG_PW_MD1_PA_C2K_SECTION_4 = 718,
	AVG_PW_MD1_PA_C2K_SECTION_5 = 506,
	AVG_PW_MD1_PA_C2K_SECTION_6 = 233
};

/*
 * MD1 RF power
 */
enum md1_max_rf_pwr_tbl_2g {
	MAX_PW_MD1_RF_2G_SECTION_1 = 51,
	MAX_PW_MD1_RF_2G_SECTION_2 = 51,
	MAX_PW_MD1_RF_2G_SECTION_3 = 51,
	MAX_PW_MD1_RF_2G_SECTION_4 = 51,
	MAX_PW_MD1_RF_2G_SECTION_5 = 51,
	MAX_PW_MD1_RF_2G_SECTION_6 = 51
};

enum md1_avg_rf_pwr_tbl_2g {
	AVG_PW_MD1_RF_2G_SECTION_1 = 51,
	AVG_PW_MD1_RF_2G_SECTION_2 = 51,
	AVG_PW_MD1_RF_2G_SECTION_3 = 51,
	AVG_PW_MD1_RF_2G_SECTION_4 = 51,
	AVG_PW_MD1_RF_2G_SECTION_5 = 51,
	AVG_PW_MD1_RF_2G_SECTION_6 = 51
};

enum md1_rf_max_pwr_tbl_3g {
	MAX_PW_MD1_RF_3G_SECTION_1 = 206,
	MAX_PW_MD1_RF_3G_SECTION_2 = 186,
	MAX_PW_MD1_RF_3G_SECTION_3 = 155,
	MAX_PW_MD1_RF_3G_SECTION_4 = 150,
	MAX_PW_MD1_RF_3G_SECTION_5 = 134,
	MAX_PW_MD1_RF_3G_SECTION_6 = 106
};

enum md1_rf_avg_pwr_tbl_3g {
	AVG_PW_MD1_RF_3G_SECTION_1 = 206,
	AVG_PW_MD1_RF_3G_SECTION_2 = 186,
	AVG_PW_MD1_RF_3G_SECTION_3 = 155,
	AVG_PW_MD1_RF_3G_SECTION_4 = 150,
	AVG_PW_MD1_RF_3G_SECTION_5 = 134,
	AVG_PW_MD1_RF_3G_SECTION_6 = 106
};

enum md1_rf_max_pwr_tbl_4g_upL1 {
	MAX_PW_MD1_RF_4G_upL1_SECTION_1 = 235,
	MAX_PW_MD1_RF_4G_upL1_SECTION_2 = 230,
	MAX_PW_MD1_RF_4G_upL1_SECTION_3 = 230,
	MAX_PW_MD1_RF_4G_upL1_SECTION_4 = 214,
	MAX_PW_MD1_RF_4G_upL1_SECTION_5 = 212,
	MAX_PW_MD1_RF_4G_upL1_SECTION_6 = 155
};

enum md1_rf_avg_pwr_tbl_4g_upL1 {
	AVG_PW_MD1_RF_4G_upL1_SECTION_1 = 235,
	AVG_PW_MD1_RF_4G_upL1_SECTION_2 = 230,
	AVG_PW_MD1_RF_4G_upL1_SECTION_3 = 230,
	AVG_PW_MD1_RF_4G_upL1_SECTION_4 = 214,
	AVG_PW_MD1_RF_4G_upL1_SECTION_5 = 212,
	AVG_PW_MD1_RF_4G_upL1_SECTION_6 = 155
};

enum md1_rf_max_pwr_tbl_4g_upL2 {
	MAX_PW_MD1_RF_4G_upL2_SECTION_1 = 235,
	MAX_PW_MD1_RF_4G_upL2_SECTION_2 = 230,
	MAX_PW_MD1_RF_4G_upL2_SECTION_3 = 230,
	MAX_PW_MD1_RF_4G_upL2_SECTION_4 = 214,
	MAX_PW_MD1_RF_4G_upL2_SECTION_5 = 212,
	MAX_PW_MD1_RF_4G_upL2_SECTION_6 = 155
};

enum md1_rf_avg_pwr_tbl_4g_upL2 {
	AVG_PW_MD1_RF_4G_upL2_SECTION_1 = 235,
	AVG_PW_MD1_RF_4G_upL2_SECTION_2 = 230,
	AVG_PW_MD1_RF_4G_upL2_SECTION_3 = 230,
	AVG_PW_MD1_RF_4G_upL2_SECTION_4 = 214,
	AVG_PW_MD1_RF_4G_upL2_SECTION_5 = 212,
	AVG_PW_MD1_RF_4G_upL2_SECTION_6 = 155
};

enum md1_rf_max_pwr_tbl_c2k {
	MAX_PW_MD1_RF_C2K_SECTION_1 = 284,
	MAX_PW_MD1_RF_C2K_SECTION_2 = 262,
	MAX_PW_MD1_RF_C2K_SECTION_3 = 226,
	MAX_PW_MD1_RF_C2K_SECTION_4 = 173,
	MAX_PW_MD1_RF_C2K_SECTION_5 = 166,
	MAX_PW_MD1_RF_C2K_SECTION_6 = 158
};

enum md1_rf_avg_pwr_tbl_c2k {
	AVG_PW_MD1_RF_C2K_SECTION_1 = 284,
	AVG_PW_MD1_RF_C2K_SECTION_2 = 262,
	AVG_PW_MD1_RF_C2K_SECTION_3 = 226,
	AVG_PW_MD1_RF_C2K_SECTION_4 = 173,
	AVG_PW_MD1_RF_C2K_SECTION_5 = 166,
	AVG_PW_MD1_RF_C2K_SECTION_6 = 158
};

#define MAX_DBM_FUNC_NUM 5

struct mdpm {
	int scenario_power[POWER_CATEGORY_NUM];

	int (*dbm_power_func[MAX_DBM_FUNC_NUM])(u32 *, unsigned int);

};

#ifdef MD_POWER_UT
extern void md_power_meter_ut(void);
#endif
extern void init_md1_section_level(u32 *share_mem);
extern unsigned int get_md1_scenario(u32 share_reg,
	unsigned int power_category);
extern int get_md1_scenario_power(unsigned int scenario,
	unsigned int power_category);
extern int get_md1_dBm_power(unsigned int scenario, u32 *share_mem,
	unsigned int power_category);

#endif /* _MTK_MDPM_PLATFORM_H_ */
