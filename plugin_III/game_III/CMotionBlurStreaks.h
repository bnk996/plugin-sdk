/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CRegisteredMotionBlurStreak.h"

class CMotionBlurStreaks {
public:
    static CRegisteredMotionBlurStreak *aStreaks; // static CRegisteredMotionBlurStreak aStreaks[4]

    //funcs
    static void Init();
    static void RegisterStreak(unsigned int id, unsigned char red, unsigned char green, unsigned char blue, CVector leftPoint, CVector rightPoint);
    static void Render();
    static void Update();
};

extern unsigned int MAX_NUM_MOTIONBLUR_STREAKS; // default 4
