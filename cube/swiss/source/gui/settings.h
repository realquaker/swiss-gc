#ifndef SETTINGS_H_
#define SETTINGS_H_

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <gccore.h>
#include "config.h"
#include "deviceHandler.h"

enum PAGES {
	PAGE_GLOBAL=0,
	PAGE_NETWORK,
	PAGE_GAME_GLOBAL,
	PAGE_GAME_DEFAULTS,
	PAGE_GAME
};
#define PAGE_MIN (PAGE_GLOBAL)
#define PAGE_MAX (PAGE_GAME)

enum SETTINGS_GLOBAL {
	SET_SYS_SOUND=0,
	SET_SCREEN_POS,
	SET_SYS_LANG,
	SET_CONFIG_DEV,
	SET_SWISS_VIDEOMODE,
	SET_FILEBROWSER_TYPE,
	SET_FILE_MGMT,
	SET_RECENT_LIST,
	SET_SHOW_HIDDEN,
	SET_HIDE_UNK,
	SET_STOP_MOTOR,
	SET_EXI_SPEED,
	SET_AVE_COMPAT,
	SET_FORCE_DTVSTATUS,
	SET_ENABLE_USBGECKODBG,
	SET_PAGE_1_NEXT,
	SET_PAGE_1_SAVE,
	SET_PAGE_1_CANCEL
};
#define PAGE_GLOBAL_MAX (SET_PAGE_1_CANCEL)

enum SETTINGS_NETWORK {
	SET_INIT_NET=0,
	SET_FSP_HOSTIP,
	SET_FSP_PORT,
	SET_FSP_PASS,
	SET_FTP_HOSTIP,
	SET_FTP_PORT,
	SET_FTP_USER,
	SET_FTP_PASS,
	SET_FTP_PASV,
	SET_SMB_HOSTIP,
	SET_SMB_SHARE,
	SET_SMB_USER,
	SET_SMB_PASS,
	SET_PAGE_2_BACK,
	SET_PAGE_2_NEXT,
	SET_PAGE_2_SAVE,
	SET_PAGE_2_CANCEL
};
#define PAGE_NETWORK_MAX (SET_PAGE_2_CANCEL)

enum SETTINGS_GAME_GLOBAL {
	SET_IGR=0,
	SET_BS2BOOT,
	SET_AUTOBOOT,
	SET_EMULATE_MEMCARD,
	SET_ENABLE_MCPGAMEID,
	SET_FORCE_VIDACTIVE,
	SET_ENABLE_VIDPATCH,
	SET_PAUSE_AVOUTPUT,
	SET_ALL_CHEATS,
	SET_WIIRDDBG,
	SET_PAGE_3_BACK,
	SET_PAGE_3_NEXT,
	SET_PAGE_3_SAVE,
	SET_PAGE_3_CANCEL
};
#define PAGE_GAME_GLOBAL_MAX (SET_PAGE_3_CANCEL)

enum SETTINGS_GAME_DEFAULTS {
	SET_DEFAULT_FORCE_VIDEOMODE=0,
	SET_DEFAULT_HORIZ_SCALE,
	SET_DEFAULT_VERT_OFFSET,
	SET_DEFAULT_VERT_FILTER,
	SET_DEFAULT_FIELD_RENDER,
	SET_DEFAULT_ALPHA_DITHER,
	SET_DEFAULT_ANISO_FILTER,
	SET_DEFAULT_WIDESCREEN,
	SET_DEFAULT_POLL_RATE,
	SET_DEFAULT_INVERT_CAMERA,
	SET_DEFAULT_SWAP_CAMERA,
	SET_DEFAULT_TRIGGER_LEVEL,
	SET_DEFAULT_READ_SPEED,
	SET_DEFAULT_CLEAN_BOOT,
	SET_PAGE_4_BACK,
	SET_PAGE_4_NEXT,
	SET_PAGE_4_SAVE,
	SET_PAGE_4_CANCEL
};
#define PAGE_GAME_DEFAULTS_MAX (SET_PAGE_4_CANCEL)

enum SETTINGS_GAME {
	SET_FORCE_VIDEOMODE=0,
	SET_HORIZ_SCALE,
	SET_VERT_OFFSET,
	SET_VERT_FILTER,
	SET_FIELD_RENDER,
	SET_ALPHA_DITHER,
	SET_ANISO_FILTER,
	SET_WIDESCREEN,
	SET_POLL_RATE,
	SET_INVERT_CAMERA,
	SET_SWAP_CAMERA,
	SET_TRIGGER_LEVEL,
	SET_READ_SPEED,
	SET_CLEAN_BOOT,
	SET_PAGE_5_BACK,
	SET_PAGE_5_SAVE,
	SET_PAGE_5_CANCEL
};
#define PAGE_GAME_MAX (SET_PAGE_5_CANCEL)

extern char *uiVModeStr[];
extern char *gameVModeStr[];
extern char *forceHScaleStr[];
extern char *forceVFilterStr[];
extern char *forceVJitterStr[];
extern char *forceWidescreenStr[];
extern char *forcePollRateStr[];
extern char *invertCStickStr[];
extern char *swapCStickStr[];
extern char *disableMCPGameIDStr[];
extern char *disableVideoPatchesStr[];
extern char *emulateReadSpeedStr[];
extern char *igrTypeStr[];
extern char *aveCompatStr[];
extern char *fileBrowserStr[];
extern char *bs2BootStr[];
extern char *recentListLevelStr[];
#define SRAM_LANG_MAX 6
extern char *sramLang[];
int show_settings(int page, int option, ConfigEntry *config);
void refreshSRAM();

#endif