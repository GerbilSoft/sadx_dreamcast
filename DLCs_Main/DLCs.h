#pragma once

// Common
extern bool EverybodySuperSonicRacing;
extern int CurrentDLC;
extern bool ObjectsLoaded;
extern bool ObjectsLoaded_SS;
extern bool ObjectsLoaded_MR;
extern bool ForceSADXLayout;
extern bool DisableDuringStory;
extern bool TimerLoaded;
extern int PreviousLevel;
extern int PreviousAct;
extern int HintTimer;
extern int ChallengeTimer;
extern int CollectedAll;
extern int MusicMode;

extern bool ChallengeOver;
extern bool ChallengeAction;

// AT&T stuff
extern bool HighwayGoal;

// MR challenge stuff
extern bool Treasure1;
extern bool Treasure2;
extern bool Treasure3;
extern bool Treasure4;

// Sand Hill challenge stuff
extern bool Gate1;
extern bool Gate2;
extern bool Gate3;
extern bool Gate4;
extern bool Gate5;
extern bool Gate6;
extern bool Gate7;
extern bool Gate8;
extern bool Gate9;
extern bool Gate10;

// Common function pointers.
FunctionPointer(void, sub_412D80, (int a1, int a2), 0x412D80);
FunctionPointer(void, sub_62E980, (), 0x62E980);
FunctionPointer(void, sub_52F240, (), 0x52F240);
FunctionPointer(void, sub_4B79C0, (char *a1, int a2), 0x4B79C0);
FunctionPointer(signed int, sub_4570B0, (), 0x4570B0);
FunctionPointer(signed int, sub_49E170, (ObjectMaster *a1), 0x49E170);
FunctionPointer(signed int, sub_49CD60, (ObjectMaster *a1), 0x49CD60);
FunctionPointer(NJS_OBJECT*, sub_49D6C0, (NJS_OBJECT *a1, ObjectMaster *a2, ColFlags surfaceFlags), 0x49D6C0);
FunctionPointer(void, sub_425800, (int a1), 0x425800);

// Common data pointers.
DataPointer(int, DroppedFrames, 0x03B1117C);
DataPointer(int, FramerateSetting, 0x0389D7DC);
DataArray(ControllerData*, ControllerPointersShit, 0x03B0E77C, 8);
