/*
 * ExInt_Reg.h
 *
 */ 


#ifndef EXINT_REG_H_
#define EXINT_REG_H_
#include "std.h"

#define Ext_Int_MCUCR_Reg (*((volatile u8*)0x55))
#define Ext_Int_MCUCSR_Reg (*((volatile u8*)0x54))
#define Ext_Int_GICR_Reg (*((volatile u8*)0x5B))
#define Ext_Int_GIFR_Reg (*((volatile u8*)0x5A))




#endif /* EXINT_REG_H_ */