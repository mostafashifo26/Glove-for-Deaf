/*
 * DIO_CFG.h
 */ 


#ifndef DIO_CFG_H_
#define DIO_CFG_H_
#include "std.h"
#include "Bit_Math.h"
#include "DIO_Reg.h"
#include "DIO_Types.h"
#include "DIO.h"

typedef struct{
	DIO_DirTypes direction;
	STD_LevelTypes level;
}DIO_PinCfg;

#define PINCOUNT 32

void DIO_Init(void);





#endif /* DIO_CFG_H_ */