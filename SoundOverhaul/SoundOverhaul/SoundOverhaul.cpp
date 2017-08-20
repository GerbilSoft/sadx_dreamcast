#include "stdafx.h"
#include <SADXModLoader.h>

FunctionPointer(Sint32, sub_424FC0, (int a1, EntityData1 *a2, int a3, int a4, float x, float y, float z), 0x424FC0);
FunctionPointer(ObjectMaster*, sub_4F5E50, (int a1), 0x4F5E50);
FunctionPointer(void, sub_4EC2E0, (ObjectMaster *), 0x4EC2E0);
FunctionPointer(void, sub_4EC310, (int a2), 0x4EC310);
DataPointer(CollisionData, stru_E94844, 0xE94844);

void __cdecl sub_4EC370(ObjectMaster *a1) //Ice Cap bomber
{
	EntityData1 *v1; // esi@1

	v1 = a1->Data1;
	if (v1->Position.y <= (double)*(float *)&v1->CharIndex)
	{
		PlaySound(233, 0, 0, 0);
		sub_4F5E50((int)&v1->Position);
		RumbleA(0, 0);
		*(short*)&v1->Object = 40;
		InitCollision(a1, &stru_E94844, 1, 4u);
		a1->MainSub = sub_4EC2E0;
		a1->DisplaySub = 0;
	}
	sub_4EC310((int)a1);
	v1->Position.y = v1->Position.y - 10.0;
}

void PlayBomb()
{
	PlaySound(232, 0, 0, 0);
}

SoundFileInfo E101mkIISoundList_list[] = {
	{ 0, "COMMON_BANK00" },
	{ 1, "E101_BANK01" },
	{ 2, "CHECK_SHEET_BANK02" },
	{ 4, "E101R_BANK04" },
	{ 5, "" }
};

SoundFileInfo soundlist97_list[] = {
	{ 6, "E_00BF" }
};


SoundFileInfo FinalEggSoundList_list[] = {
	{ 0, "COMMON_BANK00" },
	{ 1, "FINAL_EGG_BANK01" },
	{ 2, "CHECK_SHEET_BANK02" },
	{ 4, "ENEMY_SET_BANK04" },
	{ 5, "FINAL_EGG_BANK05" }
};

SoundList FinalEggSoundList = { arraylengthandptr(FinalEggSoundList_list) };
SoundList E101mkIISoundList = { arraylengthandptr(E101mkIISoundList_list) };
SoundList soundlist97 = { arraylengthandptr(soundlist97_list) };

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
		WriteData((char*)0x00496F28, 0x72, 1); //Spindash charge
		WriteJump((void*)0x004EC370, sub_4EC370); //Ice Cap bomber 1
		WriteCall((void*)0x004EC573, PlayBomb); //Ice Cap bomber 2
		WriteCall((void*)0x005ECB4F, PlaySound2); //Go up! Full speed ahead!
		WriteData((void*)0x0053881F, 0x90u, 2); // Enable ambient sound in MR Final Egg base
		WriteData((char*)0x00571AAF, 0x08, 1); // Fix Egg Hornet sound loop
		*(SoundList*)0x90FDD0 = E101mkIISoundList;
		*(SoundList*)0x90FFB8 = soundlist97;
		*(SoundList*)0x90FDE0 = FinalEggSoundList;
	}
}