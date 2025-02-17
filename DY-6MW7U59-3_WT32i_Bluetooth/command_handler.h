#ifndef __COMMANDHANDLER_H__
#define __COMMANDHANDLER_H__

#define COMMAND_BUFFER_SIZE 7

#define VOL_UP 0x10
#define VOL_DN 0x90
#define POWER_BUTTON 0x02
#define CD_BUTTON 0x20
#define FM_BUTTON 0x40
#define FORWARD_BUTTON 0x02
#define BACKWARD_BUTTON 0x01
#define NOTHING 0x00

enum EMainFSM
{
	NORMAL_STATE,
	BT_ACTIVATE,
	BT_ACTIVE,
	GOING_NORMAL_STATE,
	SHOW_MENU
};
void HandleCommandData(void);
void Bluetooth_on(void);
void Bluetooth_off(void);

#endif
