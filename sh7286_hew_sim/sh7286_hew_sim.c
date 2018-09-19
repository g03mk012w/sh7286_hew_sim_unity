/***********************************************************************/
/*                                                                     */
/*  FILE        :sh7286_hew_sim.c                                      */
/*  DATE        :Wed, Sep 12, 2018                                     */
/*  DESCRIPTION :Main Program                                          */
/*  CPU TYPE    :SH7286                                                */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.19).    */
/*  NOTE:THIS IS A TYPICAL EXAMPLE.                                    */
/***********************************************************************/
                  


//#include "typedefine.h"
#ifdef __cplusplus
//#include <ios>                        // Remove the comment when you use ios
//_SINT ios_base::Init::init_cnt;       // Remove the comment when you use ios
#endif

void main(void);
#ifdef __cplusplus
extern "C" {
void abort(void);
}
#endif

#include <stdio.h>

void main(void)
{
	volatile int i;
	
	while(1) {
		printf("sim test\n");
		i = 0; 
		while(i < 0x100000) {
			i++;
		}
	}
}

#ifdef __cplusplus
void abort(void)
{

}
#endif
