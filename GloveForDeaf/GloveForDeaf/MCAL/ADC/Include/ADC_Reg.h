/*
 * ADC_Reg.h
 *
 */ 


#ifndef ADC_REG_H_
#define ADC_REG_H_
#include "std.h"

#define ADC_ADCSRA_ADEN_Bit 7
#define ADC_ADCSRA_ADSC_Bit 6
#define ADC_ADCSRA_ADIF_Bit 4

#define ADC_ADMUX_Reg (*((volatile u8*)0x27))
#define ADC_ADCSRA_Reg (*((volatile u8*)0x26))
#define ADC_ADCL_Reg (*((volatile u8*)0x24))
#define ADC_ADCH_Reg (*((volatile u8*)0x25))

#endif /* ADC_REG_H_ */