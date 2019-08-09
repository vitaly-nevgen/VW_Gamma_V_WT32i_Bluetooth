#ifndef __DISPLAYHANDLER_H__
#define __DISPLAYHANDLER_H__
#include <stm32f10x.h>

#define DISPLAY_BUFFER_SIZE 23
#define DISPLAY_STRING_SIZE 12
#define DISPLAY_DATA_SIZE 300
#define BLUETOOTH_CHAR 0x86
#define ACC_OFF 0x40

enum EDisplayMode
{
	DISPLAY_NORMAL,
	DISPLAY_FORCE_MESSAGE,
	DISPLAY_SETTINGS,
	DISPLAY_OTHER
};
typedef struct MenuItem_s
{
	char name[8];
	uint8_t id;
	uint8_t items_cnt;
	const char* items[8];
	uint8_t values[8];
	uint8_t selected_idx;
	uint8_t enabled;
}MenuItem;





void ResetDisplayState(void);
void ClearDisplayString(void);
void ClearDisplayBtString(void);
void HandleDisplayData(void);
void CheckMode(void);
void ForceShowString(const char*);
void ShowMenu(void);
void ExecCommand(uint8_t); 
void SetCustomItem(uint16_t);
uint8_t isAux;

#endif
