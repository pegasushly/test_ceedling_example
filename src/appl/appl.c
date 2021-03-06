/*******************************************************************************
 *    Description:   See header file
 *
 ******************************************************************************/


/*******************************************************************************
 *    INCLUDED FILES
 ******************************************************************************/

#include "bsp_adc.h"




/*******************************************************************************
 *    DEFINITIONS
 ******************************************************************************/



/*******************************************************************************
 *    PRIVATE FUNCTION PROTOTYPES
 ******************************************************************************/

/*******************************************************************************
 *    PRIVATE TYPES
 ******************************************************************************/

/*******************************************************************************
 *    PRIVATE DATA
 ******************************************************************************/

/*******************************************************************************
 *    PUBLIC DATA
 ******************************************************************************/



/*******************************************************************************
 *    EXTERNAL DATA
 ******************************************************************************/

/*******************************************************************************
 *    EXTERNAL FUNCTION PROTOTYPES
 ******************************************************************************/

/*******************************************************************************
 *    PRIVATE FUNCTIONS
 ******************************************************************************/





/*******************************************************************************
 *    PUBLIC FUNCTIONS
 ******************************************************************************/

int main(void)
{
    //TODO: MCU-specific init

    //-- init MCU-specific ADC stuff
    bsp_adc__init();


    //-- enter endless loop
    for (;;){
        bsp_adc__proceed();
    }
}



/*******************************************************************************
 *    end of file
 ******************************************************************************/



