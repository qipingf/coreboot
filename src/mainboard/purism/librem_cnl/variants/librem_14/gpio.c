/* SPDX-License-Identifier: GPL-2.0-only */

#include "../../variant.h"

/* Pad configuration was generated automatically using intelp2m utility */
static const struct pad_config gpio_table[] = {

	/* ------- GPIO Group GPP_A ------- */

	/* GPP_A0 - RCIN# */
	PAD_CFG_NF(GPP_A0, NONE, DEEP, NF1),

	/* GPP_A1 - LAD0 */
	PAD_CFG_NF(GPP_A1, NATIVE, DEEP, NF1),

	/* GPP_A2 - LAD1 */
	PAD_CFG_NF(GPP_A2, NATIVE, DEEP, NF1),

	/* GPP_A3 - LAD2 */
	PAD_CFG_NF(GPP_A3, NATIVE, DEEP, NF1),

	/* GPP_A4 - LAD3 */
	PAD_CFG_NF(GPP_A4, NATIVE, DEEP, NF1),

	/* GPP_A5 - LFRAME# */
	PAD_CFG_NF(GPP_A5, NONE, DEEP, NF1),

	/* GPP_A6 - SERIRQ */
	PAD_CFG_NF(GPP_A6, NONE, DEEP, NF1),

	/* GPP_A7 - TPM_SPI_PIRQ# */
	PAD_CFG_NF(GPP_A7, NONE, DEEP, NF1),

	/* GPP_A8 - CLKRUN# */
	PAD_CFG_NF(GPP_A8, NONE, DEEP, NF1),

	/* GPP_A9 - CLKOUT_LPC0 */
	PAD_CFG_NF(GPP_A9, DN_20K, DEEP, NF1),

	/* GPP_A10 - CLKOUT_LPC1 */
	PAD_CFG_NF(GPP_A10, DN_20K, DEEP, NF1),

	/* GPP_A11 - NC */
	PAD_NC(GPP_A11, UP_20K),

	/* GPP_A12 - NC */
	PAD_NC(GPP_A12, UP_20K),

	/* GPP_A13 - NC */
	PAD_NC(GPP_A13, NONE),

	/* GPP_A14 - SUS_STAT# */
	PAD_CFG_NF(GPP_A14, NONE, DEEP, NF1),

	/* GPP_A15 - NC */
	PAD_NC(GPP_A15, NONE),

	/* GPP_A16 - NC */
	PAD_NC(GPP_A16, UP_20K),

	/* GPP_A17 - NC */
	PAD_NC(GPP_A17, NONE),

	/* GPP_A18 - NC */
	PAD_NC(GPP_A18, NONE),

	/* GPP_A19 - NC */
	PAD_NC(GPP_A19, NONE),

	/* GPP_A20 - NC */
	PAD_NC(GPP_A20, NONE),

	/* GPP_A21 - NC */
	PAD_NC(GPP_A21, UP_20K),

	/* GPP_A22 - NC */
	PAD_NC(GPP_A22, UP_20K),

	/* GPP_A23 - NC */
	PAD_NC(GPP_A23, UP_20K),

	/* ------- GPIO Group GPP_B ------- */

	/* GPP_B0 - CORE_VID0 */
	PAD_CFG_NF(GPP_B0, NONE, DEEP, NF1),

	/* GPP_B1 - CORE_VID1 */
	PAD_CFG_NF(GPP_B1, NONE, DEEP, NF1),

	/* GPP_B2 - VRALERT# */
	PAD_CFG_NF(GPP_B2, NONE, PLTRST, NF1),

	/* GPP_B3 - TP_INT# */
	PAD_CFG_GPI_APIC_LOW(GPP_B3, NONE, PLTRST),

	/* GPP_B4 - NC */
	PAD_NC(GPP_B4, UP_20K),

	/* GPP_B5 - SRCCLKREQ0# / SSD1 */
	PAD_CFG_NF(GPP_B5, NONE, DEEP, NF1),

	/* GPP_B6 - SRCCLKREQ1# / SSD0 */
	PAD_CFG_NF(GPP_B6, NONE, DEEP, NF1),

	/* GPP_B8 - SRCCLKREQ2# / WIFI */
	PAD_CFG_NF(GPP_B7, NONE, DEEP, NF1),

	/* GPP_B8 - SRCCLKREQ3# / LAN */
	PAD_CFG_NF(GPP_B8, NONE, DEEP, NF1),

	/* GPP_B9 - NC */
	PAD_NC(GPP_B9, UP_20K),

	/* GPP_B10 - NC */
	PAD_NC(GPP_B10, UP_20K),

	/* GPP_B11 - NC */
	PAD_NC(GPP_B11, NONE),

	/* GPP_B12 - SLP_S0# */
	PAD_CFG_NF(GPP_B12, NONE, DEEP, NF1),

	/* GPP_B13 - PLTRST# */
	PAD_CFG_NF(GPP_B13, NONE, DEEP, NF1),

	/* GPP_B14 - NC */
	PAD_NC(GPP_B14, NONE),

	/* GPP_B15 - NC */
	PAD_NC(GPP_B15, NONE),

	/* GPP_B16 - LAN_RST */
	PAD_CFG_GPO(GPP_B16, 0, PLTRST),

	/* GPP_B17 - WLAN_PCIE_RST */
	PAD_CFG_GPO(GPP_B17, 0, PLTRST),

	/* GPP_B18 - NC */
	PAD_NC(GPP_B18, NONE),

	/* GPP_B19 - USB3_P1_PWREN */
	PAD_CFG_GPO(GPP_B19, 1, PLTRST),

	/* GPP_B20 - NC */
	PAD_NC(GPP_B20, NONE),

	/* GPP_B21 - NC */
	PAD_NC(GPP_B21, UP_20K),

	/* GPP_B22 - NC */
	PAD_NC(GPP_B22, NONE),

	/* GPP_B23 - NC */
	PAD_NC(GPP_B23, NONE),

	/* ------- GPIO Group GPP_G ------- */

	/* GPP_G0 - NC */
	PAD_NC(GPP_G0, NONE),

	/* GPP_G1 - NC */
	PAD_NC(GPP_G1, NONE),

	/* GPP_G2 - NC */
	PAD_NC(GPP_G2, NONE),

	/* GPP_G3 - NC */
	PAD_NC(GPP_G3, NONE),

	/* GPP_G4 - NC */
	PAD_NC(GPP_G4, NONE),

	/* GPP_G5 - NC */
	PAD_NC(GPP_G5, UP_20K),

	/* GPP_G6 - NC */
	PAD_NC(GPP_G6, NONE),

	/* GPP_G7 - NC */
	PAD_NC(GPP_G7, DN_20K),

	/* ------- GPIO Group GPP_D ------- */

	/* GPP_D0 - NC */
	PAD_NC(GPP_D0, UP_20K),

	/* GPP_D1 - NC */
	PAD_NC(GPP_D1, UP_20K),

	/* GPP_D2 - NC */
	PAD_NC(GPP_D2, UP_20K),

	/* GPP_D3 - NC */
	PAD_NC(GPP_D3, UP_20K),

	/* GPP_D4 - NC */
	PAD_NC(GPP_D4, UP_20K),

	/* GPP_D5 - ISH_I2C0_SDA */
	PAD_CFG_NF(GPP_D5, NONE, DEEP, NF1),

	/* GPP_D6 - ISH_I2C0_SCL */
	PAD_CFG_NF(GPP_D6, NONE, DEEP, NF1),

	/* GPP_D7 - PCH_NVME_RST */
	PAD_CFG_GPO(GPP_D7, 1, PLTRST),

	/* GPP_D8 - PCH_NVME_RST1 */
	PAD_CFG_GPO(GPP_D8, 1, PLTRST),

	/* GPP_D9 - TP_RST */
	PAD_CFG_GPO(GPP_D9, 1, PLTRST),

	/* GPP_D10 - NC */
	PAD_NC(GPP_D10, NONE),

	/* GPP_D11 - NC */
	PAD_NC(GPP_D11, UP_20K),

	/* GPP_D12 - NC */
	PAD_NC(GPP_D12, UP_20K),

	/* GPP_D13 - NC */
	PAD_NC(GPP_D13, NONE),

	/* GPP_D14 - NC */
	PAD_NC(GPP_D14, UP_20K),

	/* GPP_D15 - NC */
	PAD_NC(GPP_D15, UP_20K),

	/* GPP_D16 - NC */
	PAD_NC(GPP_D16, UP_20K),

	/* GPP_D17 - DMIC_CLK1 */
	PAD_CFG_NF(GPP_D17, NONE, DEEP, NF1),

	/* GPP_D18 - DMIC_DATA1 */
	PAD_CFG_NF(GPP_D18, NONE, DEEP, NF1),

	/* GPP_D19 - DMIC_CLK0 */
	PAD_CFG_NF(GPP_D19, NONE, DEEP, NF1),

	/* GPP_D20 - DMIC_DATA0 */
	PAD_CFG_NF(GPP_D20, NONE, DEEP, NF1),

	/* GPP_D21 - NC */
	PAD_NC(GPP_D21, UP_20K),

	/* GPP_D22 - NC */
	PAD_NC(GPP_D22, UP_20K),

	/* GPP_D23 - NC */
	PAD_NC(GPP_D23, UP_20K),

	/* ------- GPIO Group GPP_F ------- */

	/* GPP_F0 - NC */
	PAD_NC(GPP_F0, NONE),

	/* GPP_F1 - NC */
	PAD_NC(GPP_F1, UP_20K),

	/* GPP_F2 - NC */
	PAD_NC(GPP_F2, UP_20K),

	/* GPP_F3 - NC */
	PAD_NC(GPP_F3, UP_20K),

	/* GPP_F4 - NC */
	PAD_NC(GPP_F4, UP_20K),

	/* GPP_F5 - NC */
	PAD_NC(GPP_F5, UP_20K),

	/* GPP_F6 - NC */
	PAD_NC(GPP_F6, NONE),

	/* GPP_F7 - NC */
	PAD_NC(GPP_F7, NONE),

	/* GPP_F8 - NC */
	PAD_NC(GPP_F8, NONE),

	/* GPP_F9 - NC */
	PAD_NC(GPP_F9, NONE),

	/* GPP_F10 - NC */
	PAD_NC(GPP_F10, UP_20K),

	/* GPP_F11 - NC */
	PAD_NC(GPP_F11, UP_20K),

	/* GPP_F12 - NC */
	PAD_NC(GPP_F12, UP_20K),

	/* GPP_F13 - NC */
	PAD_NC(GPP_F13, UP_20K),

	/* GPP_F14 - NC */
	PAD_NC(GPP_F14, UP_20K),

	/* GPP_F15 - NC */
	PAD_NC(GPP_F15, UP_20K),

	/* GPP_F16 - NC */
	PAD_NC(GPP_F16, UP_20K),

	/* GPP_F17 - NC */
	PAD_NC(GPP_F17, UP_20K),

	/* GPP_F18 - NC */
	PAD_NC(GPP_F18, UP_20K),

	/* GPP_F19 - NC */
	PAD_NC(GPP_F19, UP_20K),

	/* GPP_F20 - NC */
	PAD_NC(GPP_F20, UP_20K),

	/* GPP_F21 - NC */
	PAD_NC(GPP_F21, UP_20K),

	/* GPP_F22 - NC */
	PAD_NC(GPP_F22, UP_20K),

	/* GPP_F23 - NC */
	PAD_NC(GPP_F23, UP_20K),

	/* ------- GPIO Group GPP_H ------- */

	/* GPP_H0 - M.2_BT_PCMCLK */
	PAD_NC(GPP_H0, UP_20K),

	/* GPP_H1 - M.2_BT_PCMSYNC */
	PAD_CFG_NF(GPP_H1, UP_20K, DEEP, NF3),

	/* GPP_H2 - M.2_BT_PCMOUT */
	PAD_CFG_NF(GPP_H2, UP_20K, DEEP, NF3),

	/* GPP_H3 - M.2_BT_PCMIN */
	PAD_CFG_GPO(GPP_H3, 1, PLTRST),

	/* GPP_H4 - NC */
	PAD_NC(GPP_H4, NONE),

	/* GPP_H5 - NC */
	PAD_NC(GPP_H5, NONE),

	/* GPP_H6 - NC */
	PAD_NC(GPP_H6, UP_20K),

	/* GPP_H7 - NC */
	PAD_NC(GPP_H7, NONE),

	/* GPP_H8 - NC */
	PAD_NC(GPP_H8, NONE),

	/* GPP_H9 - NC */
	PAD_NC(GPP_H9, NONE),

	/* GPP_H10 - NC */
	PAD_NC(GPP_H10, NONE),

	/* GPP_H11 - NC */
	PAD_NC(GPP_H11, NONE),

	/* GPP_H12 - NC */
	PAD_NC(GPP_H12, UP_20K),

	/* GPP_H13 - NC */
	PAD_NC(GPP_H13, UP_20K),

	/* GPP_H14 - NC */
	PAD_NC(GPP_H14, UP_20K),

	/* GPP_H15 - NC */
	PAD_NC(GPP_H15, UP_20K),

	/* GPP_H16 - NC */
	PAD_NC(GPP_H16, UP_20K),

	/* GPP_H17 - NC */
	PAD_NC(GPP_H17, NONE),

	/* GPP_H18 - CPU_C10_GATE# */
	PAD_CFG_NF(GPP_H18, NONE, DEEP, NF1),

	/* GPP_H19 - NC */
	PAD_NC(GPP_H19, UP_20K),

	/* GPP_H20 - NC */
	PAD_NC(GPP_H20, UP_20K),

	/* GPP_H21 - NC */
	PAD_NC(GPP_H21, NONE),

	/* GPP_H22 - NC */
	PAD_NC(GPP_H22, UP_20K),

	/* GPP_H23 - NC */
	PAD_NC(GPP_H23, NONE),

	/* ------- GPIO Group GPD ------- */

	/* GPD0 - BATLOW# */
	PAD_CFG_NF(GPD0, NONE, RSMRST, NF1),

	/* GPD1 - ACPRESENT */
	PAD_CFG_NF(GPD1, NATIVE, RSMRST, NF1),

	/* GPD2 - LAN_WAKE# */
	PAD_CFG_NF(GPD2, NATIVE, RSMRST, NF1),

	/* GPD3 - PRWBTN# */
	PAD_CFG_NF(GPD3, UP_20K, RSMRST, NF1),

	/* GPD4 - SLP_S3# */
	PAD_CFG_NF(GPD4, NONE, RSMRST, NF1),

	/* GPD5 - SLP_S4# */
	PAD_CFG_NF(GPD5, NONE, RSMRST, NF1),

	/* GPD6 - SLP_A# */
	PAD_CFG_NF(GPD6, NONE, RSMRST, NF1),

	/* GPD7 - NC */
	PAD_NC(GPD7, NONE),

	/* GPD8 - SUSCLK */
	PAD_CFG_NF(GPD8, NONE, RSMRST, NF1),

	/* GPD9 - SLP_WLAN# */
	PAD_CFG_NF(GPD9, NONE, RSMRST, NF1),

	/* GPD10 - SLP_S5# */
	PAD_CFG_NF(GPD10, NONE, RSMRST, NF1),

	/* GPD11 - LANPHYPC */
	PAD_CFG_NF(GPD11, NONE, RSMRST, NF1),

	/* ------- GPIO Group GPP_C ------- */

	/* GPP_C0 - SMBCLK */
	PAD_CFG_NF(GPP_C0, NONE, DEEP, NF1),

	/* GPP_C1 - SMBDATA */
	PAD_CFG_NF(GPP_C1, NONE, DEEP, NF1),

	/* GPP_C2 - NC */
	PAD_NC(GPP_C2, NONE),

	/* GPP_C3 - SML0CLK */
	PAD_CFG_NF(GPP_C3, NONE, DEEP, NF1),

	/* GPP_C4 - SML0DATA */
	PAD_CFG_NF(GPP_C4, NONE, DEEP, NF1),

	/* GPP_C5 - NC */
	PAD_NC(GPP_C5, NONE),

	/* GPP_C6 - NC */
	PAD_NC(GPP_C6, NONE),

	/* GPP_C7 - NC */
	PAD_NC(GPP_C7, NONE),

	/* GPP_C8 - NC */
	PAD_NC(GPP_C8, NONE),

	/* GPP_C9 - NC */
	PAD_NC(GPP_C9, NONE),

	/* GPP_C10 - NC */
	PAD_NC(GPP_C10, UP_20K),

	/* GPP_C11 - NC */
	PAD_NC(GPP_C11, UP_20K),

	/* GPP_C12 - NC */
	PAD_NC(GPP_C12, UP_20K),

	/* GPP_C13 - NC */
	PAD_NC(GPP_C13, UP_20K),

	/* GPP_C14 - NC */
	PAD_NC(GPP_C14, UP_20K),

	/* GPP_C15 - NC */
	PAD_NC(GPP_C15, UP_20K),

	/* GPP_C16 - I2C0_SDA - TP */
	PAD_CFG_NF(GPP_C16, NONE, PLTRST, NF1),

	/* GPP_C17 - I2C0_SCL - TP */
	PAD_CFG_NF(GPP_C17, NONE, PLTRST, NF1),

	/* GPP_C18 - NC */
	PAD_NC(GPP_C18, UP_20K),

	/* GPP_C19 - NC */
	PAD_NC(GPP_C19, UP_20K),

	/* GPP_C20 - NC */
	PAD_NC(GPP_C20, NONE),

	/* GPP_C21 - NC */
	PAD_NC(GPP_C21, NONE),

	/* GPP_C22 - NC */
	PAD_NC(GPP_C22, NONE),

	/* GPP_C23 - NC */
	PAD_NC(GPP_C23, NONE),

	/* ------- GPIO Group GPP_E ------- */

	/* GPP_E0 - NC */
	PAD_NC(GPP_E0, UP_20K),

	/* GPP_E1 - SATAXPCIE1 */
	PAD_CFG_NF(GPP_E1, UP_20K, PLTRST, NF1),

	/* GPP_E2 - SATAXPCIE2 */
	PAD_CFG_NF(GPP_E2, UP_20K, PLTRST, NF1),

	/* GPP_E3 - NC */
	PAD_NC(GPP_E3, NONE),

	/* GPP_E4 - SATA_DEVSLP0 */
	PAD_CFG_NF(GPP_E4, NONE, DEEP, NF1),

	/* GPP_E5 - SATA_DEVSLP1 */
	PAD_CFG_NF(GPP_E5, NONE, DEEP, NF1),

	/* GPP_E6 - NC */
	PAD_NC(GPP_E6, UP_20K),

	/* GPP_E7 - NC */
	PAD_NC(GPP_E7, NONE),

	/* GPP_E8 - NC */
	PAD_NC(GPP_E8, UP_20K),

	/* GPP_E9 - USB2_OC0# */
	PAD_CFG_NF(GPP_E9, NONE, DEEP, NF1),

	/* GPP_E10 - USB2_OC1# */
	PAD_CFG_NF(GPP_E10, NONE, DEEP, NF1),

	/* GPP_E11 - USB2_OC2# */
	PAD_CFG_NF(GPP_E11, NONE, DEEP, NF1),

	/* GPP_E12 - NC */
	PAD_NC(GPP_E12, NONE),

	/* GPP_E13 - DDPB_HPD0 */
	PAD_CFG_NF(GPP_E13, NONE, DEEP, NF1),

	/* GPP_E14 - DDPC_HPD1 */
	PAD_CFG_NF(GPP_E14, NONE, DEEP, NF1),

	/* GPP_E15 - SMC_EXTSMI# */
	PAD_CFG_GPI_SCI_LOW(GPP_E15, UP_20K, PLTRST, LEVEL),

	/* GPP_E16 - SMC_RUNTIME_SCI# */
	PAD_CFG_GPI_SCI_LOW(GPP_E16, UP_20K, PLTRST, LEVEL),

	/* GPP_E17 - EDP_HPD */
	PAD_CFG_NF(GPP_E17, NONE, DEEP, NF1),

	/* GPP_E18 - NC */
	PAD_NC(GPP_E18, UP_20K),

	/* GPP_E19 - NC */
	PAD_NC(GPP_E19, NONE),

	/* GPP_E20 - NC */
	PAD_NC(GPP_E20, NONE),

	/* GPP_E21 - NC */
	PAD_NC(GPP_E21, NONE),

	/* GPP_E22 - NC */
	PAD_NC(GPP_E22, UP_20K),

	/* GPP_E23 - NC */
	PAD_NC(GPP_E23, NONE),
};

const struct pad_config *variant_gpio_table(size_t *num)
{
	*num = ARRAY_SIZE(gpio_table);
	return gpio_table;
}