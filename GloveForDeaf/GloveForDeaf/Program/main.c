#include "std.h"
#include "Dio.h"
#include "ADC.h"
#include "LCD.h"
#include "ExInt.h"
#include "GINT.h"
#include <string.h>

#define NUM_SENSORS 5
#define THRESHOLD 500

s16 sensorValues[NUM_SENSORS] = {0};
const char* words[15] = {
	"Hello",
	"Goodbye",
	"Thank you",
	"Yes",
	"No",
	"Sorry",
	"Please",
	"Help",
	"Eat",
	"Drink",
	"Sleep",
	"Home",
	"School",
	"Work",
	"Play"
};

void init()
{
	DIO_Init();
	ADC_Init(&((ADC_InitTypes){ADC_Prescaler128, ADC_Vref_Avcc}));
	LCD_Init();
	Ext_Interrupt_SetCallBack(Ext_INT0, NULL);
	Ext_Interrupt_Enable(Ext_INT0);
	GINT_EnableAllInterrupts();
}

void updateSensorValues()
{
	for (u8 i = 0; i < NUM_SENSORS; i++)
	{
		ADC_ChannelTypes channelId = ADC_Channel0 + i;
		sensorValues[i] = ADC_Read(channelId);
	}
}

void recognizeWord(char* word)
{
	u8 activeSensors = 0;
	u8 activeSensorIndices[NUM_SENSORS];
	for (u8 i = 0; i < NUM_SENSORS; i++)
	{
		if (sensorValues[i] > THRESHOLD)
		{
			activeSensorIndices[activeSensors] = i;
			activeSensors++;
		}
	}

	if (activeSensors > 0)
	{
		word[0] = '\0';  // Initialize the word as an empty string

		for (u8 i = 0; i < activeSensors; i++)
		{
			strncat(word, words[activeSensorIndices[i]], 15 - strlen(word) - 1);
		}
	}
}

int main()
{
	init();

	LCD_Clear();
	LCD_String((char*)"Glove for Deaf");

	char word[15];
	while (1)
	{
		updateSensorValues();
		recognizeWord(word);
		if (word[0] != '\0')
		{
			LCD_Clear();
			LCD_String(word);
		}
	}

	return 0;
}
