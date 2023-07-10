/*
 * DIO.h
 *
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "std.h"
#include "Bit_Math.h"
#include "DIO_Reg.h"
#include "DIO_Types.h"
#include "DIO_CFG.h"

void DIO_WriteChannel(DIO_ChannelTypes channelId,STD_LevelTypes level);
STD_LevelTypes DIO_ReadChannel(DIO_ChannelTypes channelId);
void DIO_ToggleChannel(DIO_ChannelTypes channelId);
void DIO_ConfigChannel(DIO_ChannelTypes channelId,DIO_DirTypes direction);
void DIO_WritePort(DIO_PortTypes portId,u8 portValue);
u8 DIO_ReadPort(DIO_PortTypes portId);
void DIO_WriteChannelGroup(DIO_PortTypes portId,u8 portValue,u8 mask);
#endif /* DIO_H_ */