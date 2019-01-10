/************************************************************************************
**                                                                                 **
**                             mcHF Pro QRP Transceiver                            **
**                         Krassi Atanassov - M0NKA 2013-2018                      **
**                              djchrismarc@gmail.com                              **
**                                      @M0NKA_                                    **
**---------------------------------------------------------------------------------**
**                                                                                 **
**  File name:      driver.c                                                       **
**  Description:    empty driver template                                          **
**  Last Modified:                                                                 **
**  Licence:		For radio amateurs experimentation, non-commercial use only!   **
************************************************************************************/

#include "mchf_pro_board.h"

#include "driver.h"
#include "api_ui.h"

//*----------------------------------------------------------------------------
//* Function Name       :
//* Object              :
//* Notes    			:
//* Notes   			:
//* Notes    			:
//* Context    			: CONTEXT_DRIVER_TEMPLATE
//*----------------------------------------------------------------------------
static void driver_hw_init(void)
{
	
}

//*----------------------------------------------------------------------------
//* Function Name       :
//* Object              :
//* Notes    			:
//* Notes   			:
//* Notes    			:
//* Context    			: CONTEXT_DRIVER_TEMPLATE
//*----------------------------------------------------------------------------
static void driver_worker(void)
{

}

//*----------------------------------------------------------------------------
//* Function Name       :
//* Object              :
//* Notes    			:
//* Notes   			:
//* Notes    			:
//* Context    			: CONTEXT_DRIVER_TEMPLATE
//*----------------------------------------------------------------------------
void driver_task(void const * argument)
{
	// Delay start, so UI can paint properly
	OsDelayMs(1000);

	printf("template driver start\r\n");

	driver_hw_init();

template_driver_loop:

	driver_worker();
	
	// Driver sleep period
	OsDelayMs(150);
		
	goto template_driver_loop;
}




