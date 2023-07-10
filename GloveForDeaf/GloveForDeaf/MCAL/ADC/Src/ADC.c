/*
 * ADC.c
 *
 */ 
#include "ADC.h"

void ADC_Init(ADC_InitTypes * options){
	ADC_ADMUX_Reg = ((options->adcVref)<<6);//set Vref
	ADC_ADCSRA_Reg = (1<<ADC_ADCSRA_ADEN_Bit)|(options->adcClock);//Enable ADC & Prescaler
}
u16 ADC_Read(ADC_ChannelTypes channelId){
	u16 readValue = 0;
	ADC_ADMUX_Reg = (ADC_ADMUX_Reg & 0b11100000)|(channelId & 0b00011111);
	SetBit(ADC_ADCSRA_Reg,ADC_ADCSRA_ADSC_Bit);//start Conv.
	while(GetBit(ADC_ADCSRA_Reg,ADC_ADCSRA_ADIF_Bit) == 0);//Waiting to finish the Conv.
	SetBit(ADC_ADCSRA_Reg,ADC_ADCSRA_ADIF_Bit);//Clear the Flag
	readValue = (ADC_ADCL_Reg)|(ADC_ADCH_Reg<<8);
	return readValue;
}