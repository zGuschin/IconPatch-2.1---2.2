#include "pch.h"
#include <fstream>
#include <cocos2d.h>
#include <string>
#include "MenuLayer.h"

//#define CONSOLE



using namespace std;



DWORD WINAPI my_thread(void* hModule) {
#ifdef CONSOLE
    AllocConsole();
    freopen_s(reinterpret_cast<FILE**>(stdout), "CONOUT$", "w", stdout);
    freopen_s(reinterpret_cast<FILE**>(stdin), "CONIN$", "r", stdin);
    static std::ofstream conout("CONOUT$", std::ios::out);
    std::cout.rdbuf(conout.rdbuf());
#endif

    MH_Initialize();
    MenuLayer::hook();
  
    MH_EnableHook(MH_ALL_HOOKS);

#ifdef CONSOLE
    std::string line;
    std::getline(std::cin, line);
    MH_RemoveHook(reinterpret_cast<void*>(base + 0x1907b0));
    MH_Uninitialize();
    fclose(stdout);
    fclose(stdin);
    FreeConsole();
    FreeLibraryAndExitThread(reinterpret_cast<HMODULE>(hModule), 0);
#endif

    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0x1000, my_thread, hModule, 0, 0);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

