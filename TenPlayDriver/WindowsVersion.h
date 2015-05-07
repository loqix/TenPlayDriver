#ifndef  _WINDOWSVERSION_H_
#define  _WINDOWSVERSION_H_
#include "struct.h"
typedef enum WIN_VER_DETAIL 
{
	WINDOWS_VERSION_NONE,       //  0
	WINDOWS_VERSION_2K,
	WINDOWS_VERSION_XP,
	WINDOWS_VERSION_2K3,
	WINDOWS_VERSION_2K3_SP1_SP2,//2K3��SP1��SP2�ṹģʽ����ͬ��
	WINDOWS_VERSION_VISTA_2008,
	WINDOWS_VERSION_7_7600_UP,
	WINDOWS_VERSION_7_7000
} WIN_VER_DETAIL;
WIN_VER_DETAIL WinVersion;

typedef NTSTATUS (NTAPI * PFN_RTLGETVERSION)(OUT PRTL_OSVERSIONINFOW lpVersionInformation);  
WIN_VER_DETAIL GetWindowsVersion(); 
#endif