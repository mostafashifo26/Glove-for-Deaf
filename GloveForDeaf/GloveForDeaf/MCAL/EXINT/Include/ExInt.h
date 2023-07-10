/*
 * ExInt.h
 *
 */ 


#ifndef EXINT_H_
#define EXINT_H_
#include "ExInt_Reg.h"
#include "ExInt_Types.h"
#include "Bit_Math.h"
#include <avr/interrupt.h>


void Ext_Interrupt_Enable(Ext_Int_Types interruptId);
void Ext_Interrupt_Disable(Ext_Int_Types interruptId);
void Ext_Interrupt_Sncontrol(Ext_Int_Types interruptId,Snc_Mode_Types mode);
void Ext_Interrupt_SetCallBack(Ext_Int_Types interruptId,void (*ExtIntFunCopyPtr)(void));

#endif /* EXINT_H_ */