/*
 * GINT.c
 *
 */ 
#include "GINT.h"

void GINT_EnableAllInterrupts(void){
	SetBit(GINT_SREG_Reg,GINT_SREG_IBit);
}
void GINT_DisableAllInterrupts(void){
	ClearBit(GINT_SREG_Reg,GINT_SREG_IBit);
}