#include <Windows.h>

#define APINUMS 67
FARPROC fpApiAddr[APINUMS];
LPSTR InterfaceNames[APINUMS] = {
	"GetHSteamPipe", 
	"GetHSteamUser", 
	"SteamAPI_GetHSteamPipe", 
	"SteamAPI_GetHSteamUser", 
	"SteamAPI_GetSteamInstallPath", 
	"SteamAPI_Init", 
	"SteamAPI_InitSafe", 
	"SteamAPI_IsSteamRunning", 
	"SteamAPI_RegisterCallResult", 
	"SteamAPI_RegisterCallback", 
	"SteamAPI_RestartAppIfNecessary", 
	"SteamAPI_RunCallbacks", 
	"SteamAPI_SetBreakpadAppID", 
	"SteamAPI_SetMiniDumpComment", 
	"SteamAPI_SetTryCatchCallbacks", 
	"SteamAPI_Shutdown", 
	"SteamAPI_UnregisterCallResult", 
	"SteamAPI_UnregisterCallback", 
	"SteamAPI_UseBreakpadCrashHandler", 
	"SteamAPI_WriteMiniDump", 
	"SteamAppList", 
	"SteamApps", 
	"SteamClient", 
	"SteamController", 
	"SteamController_GetControllerState", 
	"SteamController_Init", 
	"SteamController_SetOverrideMode", 
	"SteamController_Shutdown", 
	"SteamController_TriggerHapticPulse", 
	"SteamFriends", 
	"SteamGameServer", 
	"SteamGameServerApps", 
	"SteamGameServerHTTP", 
	"SteamGameServerInventory", 
	"SteamGameServerNetworking", 
	"SteamGameServerStats", 
	"SteamGameServerUGC", 
	"SteamGameServerUtils", 
	"SteamGameServer_BSecure", 
	"SteamGameServer_GetHSteamPipe", 
	"SteamGameServer_GetHSteamUser", 
	"SteamGameServer_GetIPCCallCount", 
	"SteamGameServer_GetSteamID", 
	"SteamGameServer_Init", 
	"SteamGameServer_InitSafe", 
	"SteamGameServer_RunCallbacks", 
	"SteamGameServer_Shutdown", 
	"SteamHTMLSurface", 
	"SteamHTTP", 
	"SteamInventory", 
	"SteamMatchmaking", 
	"SteamMatchmakingServers", 
	"SteamMusic", 
	"SteamMusicRemote", 
	"SteamNetworking", 
	"SteamRemoteStorage", 
	"SteamScreenshots", 
	"SteamUGC", 
	"SteamUnifiedMessages", 
	"SteamUser", 
	"SteamUserStats", 
	"SteamUtils", 
	"SteamVideo", 
	"Steam_GetHSteamUserCurrent", 
	"Steam_RegisterInterfaceFuncs", 
	"Steam_RunCallbacks", 
	"g_pSteamClientGameServer"
};

#define DLLEXPORT extern "C" __declspec(dllexport)

DLLEXPORT void GetHSteamPipe() { fpApiAddr[0](); };
DLLEXPORT void GetHSteamUser() { fpApiAddr[1](); };
DLLEXPORT void SteamAPI_GetHSteamPipe() { fpApiAddr[2](); };
DLLEXPORT void SteamAPI_GetHSteamUser() { fpApiAddr[3](); };
DLLEXPORT void SteamAPI_GetSteamInstallPath() { fpApiAddr[4](); };
DLLEXPORT void SteamAPI_Init() { fpApiAddr[5](); };
DLLEXPORT void SteamAPI_InitSafe() { fpApiAddr[6](); };
DLLEXPORT void SteamAPI_IsSteamRunning() { fpApiAddr[7](); };
DLLEXPORT void SteamAPI_RegisterCallResult() { fpApiAddr[8](); };
DLLEXPORT void SteamAPI_RegisterCallback() { fpApiAddr[9](); };
DLLEXPORT void SteamAPI_RestartAppIfNecessary() { fpApiAddr[10](); };
DLLEXPORT void SteamAPI_RunCallbacks() { fpApiAddr[11](); };
DLLEXPORT void SteamAPI_SetBreakpadAppID() { fpApiAddr[12](); };
DLLEXPORT void SteamAPI_SetMiniDumpComment() { fpApiAddr[13](); };
DLLEXPORT void SteamAPI_SetTryCatchCallbacks() { fpApiAddr[14](); };
DLLEXPORT void SteamAPI_Shutdown() { fpApiAddr[15](); };
DLLEXPORT void SteamAPI_UnregisterCallResult() { fpApiAddr[16](); };
DLLEXPORT void SteamAPI_UnregisterCallback() { fpApiAddr[17](); };
DLLEXPORT void SteamAPI_UseBreakpadCrashHandler() { fpApiAddr[18](); };
DLLEXPORT void SteamAPI_WriteMiniDump() { fpApiAddr[19](); };
DLLEXPORT void SteamAppList() { fpApiAddr[20](); };
DLLEXPORT void SteamApps() { fpApiAddr[21](); };
DLLEXPORT void SteamClient() { fpApiAddr[22](); };
DLLEXPORT void SteamController() { fpApiAddr[23](); };
DLLEXPORT void SteamController_GetControllerState() { fpApiAddr[24](); };
DLLEXPORT void SteamController_Init() { fpApiAddr[25](); };
DLLEXPORT void SteamController_SetOverrideMode() { fpApiAddr[26](); };
DLLEXPORT void SteamController_Shutdown() { fpApiAddr[27](); };
DLLEXPORT void SteamController_TriggerHapticPulse() { fpApiAddr[28](); };
DLLEXPORT void SteamFriends() { fpApiAddr[29](); };
DLLEXPORT void SteamGameServer() { fpApiAddr[30](); };
DLLEXPORT void SteamGameServerApps() { fpApiAddr[31](); };
DLLEXPORT void SteamGameServerHTTP() { fpApiAddr[32](); };
DLLEXPORT void SteamGameServerInventory() { fpApiAddr[33](); };
DLLEXPORT void SteamGameServerNetworking() { fpApiAddr[34](); };
DLLEXPORT void SteamGameServerStats() { fpApiAddr[35](); };
DLLEXPORT void SteamGameServerUGC() { fpApiAddr[36](); };
DLLEXPORT void SteamGameServerUtils() { fpApiAddr[37](); };
DLLEXPORT void SteamGameServer_BSecure() { fpApiAddr[38](); };
DLLEXPORT void SteamGameServer_GetHSteamPipe() { fpApiAddr[39](); };
DLLEXPORT void SteamGameServer_GetHSteamUser() { fpApiAddr[40](); };
DLLEXPORT void SteamGameServer_GetIPCCallCount() { fpApiAddr[41](); };
DLLEXPORT void SteamGameServer_GetSteamID() { fpApiAddr[42](); };
DLLEXPORT void SteamGameServer_Init() { fpApiAddr[43](); };
DLLEXPORT void SteamGameServer_InitSafe() { fpApiAddr[44](); };
DLLEXPORT void SteamGameServer_RunCallbacks() { fpApiAddr[45](); };
DLLEXPORT void SteamGameServer_Shutdown() { fpApiAddr[46](); };
DLLEXPORT void SteamHTMLSurface() { fpApiAddr[47](); };
DLLEXPORT void SteamHTTP() { fpApiAddr[48](); };
DLLEXPORT void SteamInventory() { fpApiAddr[49](); };
DLLEXPORT void SteamMatchmaking() { fpApiAddr[50](); };
DLLEXPORT void SteamMatchmakingServers() { fpApiAddr[51](); };
DLLEXPORT void SteamMusic() { fpApiAddr[52](); };
DLLEXPORT void SteamMusicRemote() { fpApiAddr[53](); };
DLLEXPORT void SteamNetworking() { fpApiAddr[54](); };
DLLEXPORT void SteamRemoteStorage() { fpApiAddr[55](); };
DLLEXPORT void SteamScreenshots() { fpApiAddr[56](); };
DLLEXPORT void SteamUGC() { fpApiAddr[57](); };
DLLEXPORT void SteamUnifiedMessages() { fpApiAddr[58](); };
DLLEXPORT void SteamUser() { fpApiAddr[59](); };
DLLEXPORT void SteamUserStats() { fpApiAddr[60](); };
DLLEXPORT void SteamUtils() { fpApiAddr[61](); };
DLLEXPORT void SteamVideo() { fpApiAddr[62](); };
DLLEXPORT void Steam_GetHSteamUserCurrent() { fpApiAddr[63](); };
DLLEXPORT void Steam_RegisterInterfaceFuncs() { fpApiAddr[64](); };
DLLEXPORT void Steam_RunCallbacks() { fpApiAddr[65](); };
DLLEXPORT void g_pSteamClientGameServer() { fpApiAddr[66](); };