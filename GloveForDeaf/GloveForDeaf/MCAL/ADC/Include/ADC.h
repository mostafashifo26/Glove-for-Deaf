/*
 * ADC.h
 *
 */ 


#ifndef ADC_H_
#define ADC_H_
#include "ADC_Reg.h"
#include "ADC_Types.h"
#include "Bit_Math.h"


void ADC_Init(ADC_InitTypes * options);
u16 ADC_Read(ADC_ChannelTypes channelId);




#endif /* ADC_H_ */