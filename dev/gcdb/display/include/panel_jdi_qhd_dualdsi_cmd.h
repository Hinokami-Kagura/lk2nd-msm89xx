/* Copyright (c) 2014-2015, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*---------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = "1.0"
 *---------------------------------------------------------------------------*/

#ifndef _PANEL_JDI_QHD_DUALDSI_CMD_H_
#define _PANEL_JDI_QHD_DUALDSI_CMD_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/
static struct panel_config jdi_qhd_dualdsi_cmd_panel_data = {
	"qcom,mdss_dsi_jdi_qhd_dualmipi0_cmd", "dsi:0:", "qcom,mdss-dsi-panel",
	10, 1, "DISPLAY_1", 0, 0, 60, 0, 0, 1, 0, 0, 0, 0, 0, 11, 0, 0,
	"qcom,mdss_dsi_jdi_qhd_dualmipi1_cmd"
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution jdi_qhd_dualdsi_cmd_panel_res = {
	2560, 1440, 120, 44, 16, 0, 8, 4, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel color information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info jdi_qhd_dualdsi_cmd_color = {
	24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel on/off command information                                          */
/*---------------------------------------------------------------------------*/
static char jdi_qhd_dualdsi_cmd_on_cmd0[] = {
	0x01, 0x00, 0x05, 0x80
};

static char jdi_qhd_dualdsi_cmd_on_cmd1[] = {
	0x3a, 0x77, 0x15, 0x80
};

static char jdi_qhd_dualdsi_cmd_on_cmd2[] = {
	0x05, 0x00, 0x39, 0xC0,
	0x2a, 0x00, 0x00, 0x04,
	0xff, 0xFF, 0xFF, 0xFF,
};

static char jdi_qhd_dualdsi_cmd_on_cmd3[] = {
	0x05, 0x00, 0x39, 0xC0,
	0x2b, 0x00, 0x00, 0x05,
	0x9f, 0xFF, 0xFF, 0xFF,
};

static char jdi_qhd_dualdsi_cmd_on_cmd4[] = {
	0x51, 0xff, 0x15, 0x80
};

static char jdi_qhd_dualdsi_cmd_on_cmd5[] = {
	0x11, 0x00, 0x05, 0x80
};

static char jdi_qhd_dualdsi_cmd_on_cmd6[] = {
	0xb0, 0x00, 0x23, 0x80
};

static char jdi_qhd_dualdsi_cmd_on_cmd7[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xb3, 0x0c, 0xFF, 0xFF,
};

static char jdi_qhd_dualdsi_cmd_on_cmd8[] = {
	0x14, 0x00, 0x29, 0xC0,
	0xce, 0x7d, 0x40, 0x48,
	0x56, 0x67, 0x78, 0x88,
	0x98, 0xa7, 0xb5, 0xc3,
	0xd1, 0xde, 0xe9, 0xf2,
	0xfa, 0xff, 0x04, 0x00,
};

static char jdi_qhd_dualdsi_cmd_on_cmd9[] = {
	0xb0, 0x03, 0x23, 0x80
};

static char jdi_qhd_dualdsi_cmd_on_cmd10[] = {
	0x29, 0x00, 0x05, 0x80
};

static char jdi_qhd_dualdsi_cmd_on_cmd11[] = {
	0x35, 0x00, 0x15, 0x80
};

static char jdi_qhd_dualdsi_cmd_on_cmd12[] = {
	0x53, 0x24, 0x15, 0x80
};

static struct mipi_dsi_cmd jdi_qhd_dualdsi_cmd_on_command[] = {
	{0x4, jdi_qhd_dualdsi_cmd_on_cmd0, 0x05},
	{0x4, jdi_qhd_dualdsi_cmd_on_cmd1, 0x05},
	{0xc, jdi_qhd_dualdsi_cmd_on_cmd2, 0x05},
	{0xc, jdi_qhd_dualdsi_cmd_on_cmd3, 0x05},
	{0x4, jdi_qhd_dualdsi_cmd_on_cmd4, 0x05},
	{0x4, jdi_qhd_dualdsi_cmd_on_cmd5, 0x78},
	{0x4, jdi_qhd_dualdsi_cmd_on_cmd6, 0x05},
	{0x8, jdi_qhd_dualdsi_cmd_on_cmd7, 0x05},
	{0x18, jdi_qhd_dualdsi_cmd_on_cmd8, 0x05},
	{0x4, jdi_qhd_dualdsi_cmd_on_cmd9, 0x05},
	{0x4, jdi_qhd_dualdsi_cmd_on_cmd10, 0x14},
	{0x4, jdi_qhd_dualdsi_cmd_on_cmd11, 0x05},
	{0x4, jdi_qhd_dualdsi_cmd_on_cmd12, 0x05},
};

#define JDI_QHD_DUALDSI_CMD_ON_COMMAND 13


static char jdi_qhd_dualdsi_cmdoff_cmd0[] = {
	0x28, 0x00, 0x05, 0x80
};

static char jdi_qhd_dualdsi_cmdoff_cmd1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd jdi_qhd_dualdsi_cmd_off_command[] = {
	{0x4, jdi_qhd_dualdsi_cmdoff_cmd0, 0x32},
	{0x4, jdi_qhd_dualdsi_cmdoff_cmd1, 0x78}
};

#define JDI_QHD_DUALDSI_CMD_OFF_COMMAND 2


static struct command_state jdi_qhd_dualdsi_cmd_state = {
	0, 1
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/
static struct commandpanel_info jdi_qhd_dualdsi_cmd_command_panel = {
	1, 1, 1, 0, 0, 0x2c, 0, 0, 0, 1, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/
static struct videopanel_info jdi_qhd_dualdsi_cmd_video_panel = {
	0, 0, 0, 0, 1, 1, 1, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Lane configuration                                                        */
/*---------------------------------------------------------------------------*/
static struct lane_configuration jdi_qhd_dualdsi_cmd_lane_config = {
	4, 0, 1, 1, 1, 1, 0
};

/*---------------------------------------------------------------------------*/
/* Panel timing                                                              */
/*---------------------------------------------------------------------------*/
static const uint32_t jdi_qhd_dualdsi_cmd_timings[] = {
	0xcd, 0x32, 0x22, 0x00, 0x60, 0x64, 0x26, 0x34, 0x29, 0x03, 0x04, 0x00
};

static struct panel_timing jdi_qhd_dualdsi_cmd_timing_info = {
	0x0, 0x04, 0x03, 0x27
};

/*---------------------------------------------------------------------------*/
/* Panel reset sequence                                                      */
/*---------------------------------------------------------------------------*/
static struct panel_reset_sequence jdi_qhd_dualdsi_cmd_reset_seq = {
	{1, 0, 1, }, {10, 10, 10, }, 2
};

/*---------------------------------------------------------------------------*/
/* Backlight setting                                                         */
/*---------------------------------------------------------------------------*/
static struct backlight jdi_qhd_dualdsi_cmd_backlight = {
	0, 1, 4095, 100, 1, "PMIC_8941"
};

/*---------------------------------------------------------------------------*/
/* Other configuration                                                       */
/*---------------------------------------------------------------------------*/
#define JDI_QHD_DUALDSI_CMD_PANEL_ON_DELAY 30

#endif /*_PANEL_JDI_QHD_DUALDSI_CMD_H_*/
