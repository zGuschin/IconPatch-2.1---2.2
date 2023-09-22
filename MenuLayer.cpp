#include "MenuLayer.h"





namespace MenuLayer {
    bool __fastcall  MenuLayer_initHook(cocos2d::CCLayer* self) {
        bool ret = MenuLayer_init(self);

        //Finded by Guschin

        //icon hack lmao
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0xC50A8), "\xB0\x01\x90\x90\x90", 5, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0xC54BA), "\xB0\x01\x90\x90\x90", 5, NULL);


        // cube = 143 = 8f;                                                                             cube default = 142 = 8e;
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x1F7E48), "\xB9\x8F\x00\x00\x00", 5, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x12B095), "\xc7\x44\x24\x1c\x8F\x00\x00\x00", 8, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x12C766), "\xc7\x44\x24\x14\x8F\x00\x00\x00", 8, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x12807A), "\xb8\x8F\x00\x00\x00", 5, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x12BE64), "\xb9\x8F\x00\x00\x00", 5, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x1E6DD9), "\xba\x8F\x00\x00\x00", 5, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x12C26C), "\xba\x8F\x00\x00\x00", 5, NULL);

        // ship = 16 = 10;                                                                             ship default = 55 = 33;
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x1E6DEF), "\xB8\x10\x00\x00\x00", 5, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x1F7FF6), "\xBa\x10\x00\x00\x00", 5, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x12C6D1), "\xc7\x44\x24\x14\x10\x00\x00\x00", 8, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x12B0CA), "\xc7\x44\x24\x1c\x10\x00\x00\x00", 8, NULL);

        // balls = 15 = 0F;                                                                             ship balls = 42 = 2a;
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x12C6EC), "\xc7\x44\x24\x14\x0F\x00\x00\x00", 8, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x12B0FF), "\xc7\x44\x24\x1c\x0F\x00\x00\x00", 8, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x1F83A6), "\xba\x0F\x00\x00\x00", 5, NULL);

        // ufo = 14 = 0E;                                                                             ufo default = 35 = 23; 
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x22DA45), "\xB9\x0E\x00\x00\x00", 5, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x24A18F), "\xB8\x0E\x00\x00\x00", 5, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x24B210), "\xB8\x0E\x00\x00\x00", 5, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x1F81A6), "\xBA\x0E\x00\x00\x00", 5, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x12B134), "\xc7\x44\x24\x1c\x0E\x00\x00\x00", 8, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x12C704), "\xc7\x44\x24\x14\x0E\x00\x00\x00", 8, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x25612A), "\xc7\x84\x24\x28\x0a\x00\x00\x0E\x00\x00\x00", 11, NULL);

        // wave = 13 = 0D;                                                                             wave default = 35 = 23; 
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x128568), "\xb8\x0D\x00\x00\x00", 5, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x142762), "\xbb\x0D\x00\x00\x00", 5, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x1F8586), "\xba\x0D\x00\x00\x00", 5, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x12B169), "\xc7\x44\x24\x1c\x0D\x00\x00\x00", 8, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x12C71C), "\xc7\x44\x24\x1c\x0D\x00\x00\x00", 8, NULL);
       
        // robot = 12 = 0c;                                                                             robot default = 26 = 1a; 
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x12B19E), "\xC7\x44\x24\x1C\x0c\x00\x00\x00", 8, NULL);
       WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x12C734), "\xC7\x44\x24\x14\x0c\x00\x00\x00", 8, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x255ADC), "\xc7\x84\x24\x28\x0a\x00\x00\x0c\x00\x00\x00", 11, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x199436), "\xC7\x84\x24\x08\x2E\x44\x00\x0c\x00\x00\x00", 11, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x1F855A), "\xba\x0c\x00\x00\x00", 5, NULL);    
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x20CCD5), "\xb9\x0c\x00\x00\x00", 5, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x14673D), "\xb8\x0c\x00\x00\x00", 5, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x1F6ACD), "\xb8\x0c\x00\x00\x00", 5, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x20900F), "\xb9\x0c\x00\x00\x00", 5, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x20CCC3), "\x6a\x0c", 2, NULL);

        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x125F61), "\xb9\x0c\x00\x00\x00", 5, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x12880E), "\xb9\x0c\x00\x00\x00", 5, NULL);

      
        // spider = 16 = 10;                                                                             spider default = 17 = 11; 
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x12B1D3), "\xC7\x44\x24\x1C\x10\x00\x00\x00", 8, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x12C74C), "\xC7\x44\x24\x14\x10\x00\x00\x00", 8, NULL);//
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x146745), "\xba\x10\x00\x00\x00", 5, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x1553A2), "\xC7\x84\x24\xC0\x10\x00\x00\x01\x00\x00\x00", 11, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x1289CE), "\xb9\x10\x00\x00\x00", 5, NULL);
        WriteProcessMemory(GetCurrentProcess(), reinterpret_cast<void*>(gd::base + 0x126021), "\xb9\x10", 2, NULL);


        //coming soon BG path and Trail + Death Effects.

        return ret;
    }

    void hook() {
        MH_CreateHook(
            (PVOID)(gd::base + 0x1907b0),
            MenuLayer_initHook,
            (LPVOID*)&MenuLayer_init
        );
    }
}