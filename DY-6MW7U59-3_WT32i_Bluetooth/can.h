#ifndef __CAN_H__
#define __CAN_H__
#include <stm32f10x_can.h>
#include "config.h"
#include "display_handler.h"

#define CAN_ID_FUEL_CONSUMPTION 0x1A7
#define CAN_ID_BEEP 0x327
#define CAN_ID_CUSTOM_SEND 0x310
#define CAN_ID_CUSTOM_RECEIVE 0x1D0

#define CAN_CUSTOM_VAL_MASK 0x01C0
#define CAN_CUSTOM_ID_MASK 0x003F
#define CAN_CUSTOM_ENABLE_MASK 0xFE00

enum beeps
{
	NO_BEEP     = 0x00,
	SHORT_BEEP  = 0x01,
	LONG_BEEP   = 0x02,
	DOUBLE_BEEP = 0x04,
	LONG_BEEP_2 = 0x08,
	LONG_BEEP_3 = 0x10
};

uint8_t IsFuelConsumptionAvailable();
uint16_t GetLitersPerHour();

void SendCustomization(MenuItem);
void CanRxHandler(CanRxMsg* RxMessage);

void CanBeep(uint8_t beep_type);

void CanSendMessage(CanTxMsg* TxMessage);
#endif
