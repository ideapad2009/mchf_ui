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
#include "mchf_pro_board.h"

#include "gui.h"
#include "dialog.h"
#include "ST_GUI_Addons.h"

#include "ui_controls_sd_icon.h"
#include "ui_controls_layout.h"

extern GUI_CONST_STORAGE GUI_BITMAP bmsd_small;

// From SD driver
extern uchar isInitialized;

uchar loc_sd_status = 0;

void ui_controls_sd_icon_update(uchar is_init)
{
#if 1
	// Prevent over update
	if((loc_sd_status == isInitialized) && (!is_init))
		return;

	if(isInitialized)
	{
		// Icon
		GUI_DrawBitmap(&bmsd_small, (SD_CARD_X + 1), (SD_CARD_Y + 1));

		// Frame
		GUI_SetColor(GUI_RED);
		GUI_DrawRoundedRect((SD_CARD_X + 0),(SD_CARD_Y + 0),(SD_CARD_X + 40),(SD_CARD_Y + 49),2);
		GUI_DrawRect((SD_CARD_X + 1),(SD_CARD_Y + 1),(SD_CARD_X + 39),(SD_CARD_Y + 48));
	}
	else
	{
		// Delete
		GUI_SetColor(GUI_BLACK);
		GUI_FillRoundedRect((SD_CARD_X + 0),(SD_CARD_Y + 0),(SD_CARD_X + 40),(SD_CARD_Y + 49),2);
	}

	// Save to local
	loc_sd_status = isInitialized;
#endif
}

//*----------------------------------------------------------------------------
//* Function Name       :
//* Object              :
//* Notes    			:
//* Notes   			:
//* Notes    			:
//* Context    			: CONTEXT_DRIVER_UI
//*----------------------------------------------------------------------------
void ui_controls_sd_icon_init(void)
{
	// Initial paint
	ui_controls_sd_icon_update(1);
}

//*----------------------------------------------------------------------------
//* Function Name       :
//* Object              :
//* Notes    			:
//* Notes   			:
//* Notes    			:
//* Context    			: CONTEXT_DRIVER_UI
//*----------------------------------------------------------------------------
void ui_controls_sd_icon_quit(void)
{

}

//*----------------------------------------------------------------------------
//* Function Name       :
//* Object              :
//* Notes    			:
//* Notes   			:
//* Notes    			:
//* Context    			: CONTEXT_DRIVER_UI
//*----------------------------------------------------------------------------
void ui_controls_sd_icon_touch(void)
{

}

//*----------------------------------------------------------------------------
//* Function Name       :
//* Object              :
//* Notes    			:
//* Notes   			:
//* Notes    			:
//* Context    			: CONTEXT_DRIVER_UI
//*----------------------------------------------------------------------------
void ui_controls_sd_icon_refresh(void)
{
	// Initial paint
	ui_controls_sd_icon_update(0);
}
