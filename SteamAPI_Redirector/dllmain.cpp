#include <Windows.h>
#include "Interface.h"

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
	if (dwReason == DLL_PROCESS_ATTACH)
	{
		HMODULE hValve = LoadLibrary(L"ValveAPI.dll");
		HMODULE hCodex = LoadLibrary(L"CodexAPI.dll");
		for (int i = 0; i < APINUMS; i++)
			fpApiAddr[i] = GetProcAddress(hValve, InterfaceNames[i]);
		fpApiAddr[21] = GetProcAddress(hCodex, "SteamApps");
		fpApiAddr[55] = GetProcAddress(hCodex, "SteamRemoteStorage");
	}
	return TRUE;
}