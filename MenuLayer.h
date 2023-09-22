#pragma once
#include <cocos2d.h>
#include <gd.h>
#include <MinHook.h>

using namespace cocos2d;



namespace MenuLayer {
    void hook();

    inline bool(__thiscall* MenuLayer_init)(CCLayer* self);
    bool __fastcall MenuLayer_initHook(CCLayer* self);

    class Callbacks {
    public:
        //oh shit i'm sorry :)
        
    };
}