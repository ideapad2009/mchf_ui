/************************************************************************************
**                                                                                 **
**                             mcHF Pro QRP Transceiver                            **
**                         Krassi Atanassov - M0NKA 2012-2019                      **
**                            mail: djchrismarc@gmail.com                          **
**                                 twitter: @M0NKA_                                **
**---------------------------------------------------------------------------------**
**                                                                                 **
**  File name:                                                                     **
**  Description:                                                                   **
**  Last Modified:                                                                 **
**  Licence:                                                                       **
**          The mcHF project is released for radio amateurs experimentation,       **
**          non-commercial use only. All source files under GPL-3.0, unless        **
**          third party drivers specifies otherwise. Thank you!                    **
************************************************************************************/
#ifndef UI_CONTROLS_RX_TX_H
#define UI_CONTROLS_RX_TX_H

// Exports
void ui_controls_rx_tx_init(void);
void ui_controls_rx_tx_quit(void);

void ui_controls_rx_tx_touch(void);
void ui_controls_rx_tx_refresh(void);

#endif
