#include "stdafx.h"
#include <SADXModLoader.h>
#include "SambaDLC.h"

FunctionPointer(void, sub_412D80, (int a1, int a2), 0x412D80);
FunctionPointer(void, sub_62E980, (), 0x62E980);
FunctionPointer(void, sub_4B79C0, (char *a1, int a2), 0x4B79A0);
FunctionPointer(void, sub_4145D0, (unsigned __int8 a1, unsigned __int8 a2), 0x4145D0);

HMODULE ADV00MODELS = GetModuleHandle(L"ADV00MODELS");

HMODULE SONICADV_000 = GetModuleHandle(L"SONICADV_000");
HMODULE SONICADV_001 = GetModuleHandle(L"SONICADV_001");
HMODULE SONICADV_002 = GetModuleHandle(L"SONICADV_002");
HMODULE SONICADV_003 = GetModuleHandle(L"SONICADV_003");
HMODULE SONICADV_501 = GetModuleHandle(L"SONICADV_501");
HMODULE SONICADV_502 = GetModuleHandle(L"SONICADV_502");
HMODULE SONICADV_503 = GetModuleHandle(L"SONICADV_503");
HMODULE SONICADV_504 = GetModuleHandle(L"SONICADV_504");
HMODULE SONICADV_505 = GetModuleHandle(L"SONICADV_505");
HMODULE SONICADV_506 = GetModuleHandle(L"SONICADV_506");
HMODULE SONICADV_507 = GetModuleHandle(L"SONICADV_507");
HMODULE SONICADV_508 = GetModuleHandle(L"SONICADV_508");
HMODULE SONICADV_509 = GetModuleHandle(L"SONICADV_509");
HMODULE SONICADV_510 = GetModuleHandle(L"SONICADV_510");
HMODULE SONICADV_511 = GetModuleHandle(L"SONICADV_511");

DataArray(FieldStartPosition, SonicSSStartArray, 0x0090BB58, 13);
DataArray(FieldStartPosition, TailsSSStartArray, 0x0090BC60, 8);
DataArray(FieldStartPosition, KnucklesSSStartArray, 0x0090BD00, 7);
DataArray(FieldStartPosition, AmySSStartArray, 0x0090BD90, 5);
DataArray(FieldStartPosition, BigSSStartArray, 0x0090BDF8, 6);
DataArray(FieldStartPosition, E102SSStartArray, 0x0090BE70, 7);
DataPointer(int, DroppedFrames, 0x03B1117C);

static bool MessageOn = false;
static bool ModFailsafe = false;
static int HintTimer = 0;

SETObjData setdata_dlc = {};

char *SambaGPMessage0[] = {
	"\aSamba GP\nSTART!",
	NULL,
};

char *SambaGPMessage1[] = {
	"\aTwinkle Circuit\nSamba GP Grand Opening!",
	NULL,
};

char *SambaGPMessage2[] = {
	"\aThe contest is over,\nbut you can still play the course.",
	NULL,
};

char *SambaGPMessage3[] = {
	"\aCollecting the rings increases\nbumper car acceleration.",
	NULL,
};

PVMEntry StationSquareObjectTextures[] = {
	{ "OBJ_SS", (TexList *)0x2AA4BF8 },
	{ "SS_BG", (TexList *)0x2AA4C30 },
	{ "SS_PEOPLE", NULL },
	{ "NULL", NULL },
	{ "NULL", NULL },
	{ "NULL", NULL },
	{ "NULL", NULL },
	{ "NULL", NULL },
	{ "NULL", NULL },
	{ "NULL", NULL },
	{ "NULL", NULL },
	{ "NULL", NULL },
	{ 0 }
};

int __cdecl sub_7C4EB0()
{
	int result; // eax@1
	NJS_TEXLIST **ADV00_TEXLISTS = (NJS_TEXLIST **)GetProcAddress(ADV00MODELS, "___ADV00_TEXLISTS");
	StationSquareObjectTextures[2].TexList = ADV00_TEXLISTS[6];
	StationSquareObjectTextures[3].Name = "SSCAR";
	StationSquareObjectTextures[3].TexList = (NJS_TEXLIST*)0x2AEE920;
	StationSquareObjectTextures[4].Name = "SS_BURGER";
	StationSquareObjectTextures[4].TexList = ADV00_TEXLISTS[9];
	StationSquareObjectTextures[5].Name = "EMBLEM";
	StationSquareObjectTextures[5].TexList = (NJS_TEXLIST*)0x009740DC;
	StationSquareObjectTextures[6].Name = "SS_EKIIN";
	StationSquareObjectTextures[6].TexList = ADV00_TEXLISTS[7];
	StationSquareObjectTextures[7].Name = "SS_MIZUGI";
	result = 0;
	StationSquareObjectTextures[7].TexList = ADV00_TEXLISTS[8];
	StationSquareObjectTextures[8].Name = "SS_KANBAN";
	StationSquareObjectTextures[8].TexList = (NJS_TEXLIST*)0x2AEAA88;
	StationSquareObjectTextures[9].Name = "SS_DENTOU";
	StationSquareObjectTextures[9].TexList = (NJS_TEXLIST*)0x2AEAA50;
	StationSquareObjectTextures[10].Name = "Cream";
	StationSquareObjectTextures[10].TexList = (NJS_TEXLIST*)0x2BBA8C4;
	StationSquareObjectTextures[11].Name = "SONICADV_511";
	StationSquareObjectTextures[11].TexList = &texlist_sambagp;
	StationSquareObjectTextures[12].Name = 0;
	StationSquareObjectTextures[12].TexList = 0;
	return result;
}

void CallSambaCircuit()
{
	int CircuitID = 2;
	if (CurrentAct == 3)
	{
		if (CurrentCharacter == 0) WriteData((char*)0x004DAB4E, 87, 1); else WriteData((char*)0x004DAB4E, 25, 1);
		if (CurrentCharacter == 0) CircuitID = 2;
		if (CurrentCharacter == 2) CircuitID = 1;
		if (CurrentCharacter == 3) CircuitID = 3;
		if (CurrentCharacter == 5) CircuitID = 4;
		if (CurrentCharacter == 6) CircuitID = 5;
		if (CurrentCharacter == 7) CircuitID = 0;
		SonicSSStartArray[11].Position.x = 635;
		SonicSSStartArray[11].Position.y = 1.4f;
		SonicSSStartArray[11].Position.z = 1570;
		SonicSSStartArray[11].YRot = NJM_DEG_ANG(180);

		TailsSSStartArray[6].Position.x = 635;
		TailsSSStartArray[6].Position.y = 1.4f;
		TailsSSStartArray[6].Position.z = 1570;
		TailsSSStartArray[6].YRot = NJM_DEG_ANG(180);

		KnucklesSSStartArray[5].Position.x = 635;
		KnucklesSSStartArray[5].Position.y = 1.4f;
		KnucklesSSStartArray[5].Position.z = 1570;
		KnucklesSSStartArray[5].YRot = NJM_DEG_ANG(180);

		AmySSStartArray[3].Position.x = 635;
		AmySSStartArray[3].Position.y = 1.4f;
		AmySSStartArray[3].Position.z = 1570;
		AmySSStartArray[3].YRot = NJM_DEG_ANG(180);

		BigSSStartArray[4].Position.x = 635;
		BigSSStartArray[4].Position.y = 1.4f;
		BigSSStartArray[4].Position.z = 1570;
		BigSSStartArray[4].YRot = NJM_DEG_ANG(180);

		E102SSStartArray[5].Position.x = 635;
		E102SSStartArray[5].Position.y = 1.4f;
		E102SSStartArray[5].Position.z = 1570;
		E102SSStartArray[5].YRot = NJM_DEG_ANG(180);
		LastLevel = 26;
		LastAct = 3;
		sub_412D80(LevelIDs_TwinkleCircuit, CircuitID);
	}
	else
	{
		WriteData((char*)0x004DAB4E, 25, 1);
		sub_412D80(LevelIDs_TwinkleCircuit, 0);
		SonicSSStartArray[11].Position.x = 757.7f;
		SonicSSStartArray[11].Position.y = 50.0f;
		SonicSSStartArray[11].Position.z = 1747.0f;
		SonicSSStartArray[11].YRot = 0x4000;

		TailsSSStartArray[6].Position.x = 757.7f;;
		TailsSSStartArray[6].Position.y = 50.0f;
		TailsSSStartArray[6].Position.z = 1747.0f;
		TailsSSStartArray[6].YRot = 0x4000;

		KnucklesSSStartArray[5].Position.x = 757.7f;;
		KnucklesSSStartArray[5].Position.y = 50.0f;
		KnucklesSSStartArray[5].Position.z = 1747.0f;
		KnucklesSSStartArray[5].YRot = 0x4000;

		AmySSStartArray[3].Position.x = 757.7f;;
		AmySSStartArray[3].Position.y = 50.0f;
		AmySSStartArray[3].Position.z = 1747.0f;
		AmySSStartArray[3].YRot = 0x4000;

		BigSSStartArray[4].Position.x = 757.7f;;
		BigSSStartArray[4].Position.y = 50.0f;
		BigSSStartArray[4].Position.z = 1747.0f;
		BigSSStartArray[4].YRot = 0x4000;

		E102SSStartArray[5].Position.x = 757.7f;;
		E102SSStartArray[5].Position.y = 50.0f;
		E102SSStartArray[5].Position.z = 1747.0f;
		E102SSStartArray[5].YRot = 0x4000;
	}
}

void SambaGate_Display(ObjectMaster *a1)
{
	EntityData1 *v1;
	v1 = a1->Data1;
	if (!DroppedFrames)
	{
		njSetTexture(&texlist_sambagp);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		njRotateY(0, 0xFFFFC000);
		ProcessModelNode_AB_Wrapper(&object_00000EF8, 1.0f);
		njPopMatrix(1u);
	}
}

void SambaGate_Main(ObjectMaster *a1)
{
	DataPointer(char, off_2BBF4A0, 0x02BBF450);
	NJS_VECTOR WarpPosition = { 683, 1.4f, 1570 };
	if (MessageOn == false && IsPlayerInsideSphere(&WarpPosition, 20))
	{
		MessageOn = true;
		sub_4B79C0((char *)(&SambaGPMessage0), 360);
	}
	if (!IsPlayerInsideSphere(&WarpPosition, 20)) MessageOn = false;
	if (IsPlayerInsideSphere(&WarpPosition, 20))
	{
		CallSambaCircuit();
	}
	SambaGate_Display(a1);
}

void LoadSambaGate(ObjectMaster *a1)
{
	ObjectMaster *v1; // esi@1
	EntityData1 *v3; // edi@1
	NJS_OBJECT *v4; // eax@2
	v4 = ObjectArray_GetFreeObject();
	v3 = a1->Data1;
	*(NJS_OBJECT **)&v3->CharIndex = v4;
	v4->evalflags = 16;
	v4->ang[0] = 0;
	v4->ang[1] = v3->Rotation.y;
	v4->ang[2] = 0;
	v4->scl[0] = 1.0f;
	v4->scl[1] = 1.0f;
	v4->scl[2] = 1.0f;
	v4->pos[0] = v3->Position.x;
	v4->pos[1] = v3->Position.y;
	v4->pos[2] = v3->Position.z;
	v4->model = &attach_00000ED0;
	v4->child = 0;
	v4->sibling = 0;
	DynamicCOL_Add((ColFlags)0x20001001, a1, v4);
	if (IsPlayerInsideSphere(&v3->Position, 140.0f))
	{
		v3->Status |= 1u;
	}
	a1->DeleteSub = DeleteObject_DynamicCOL;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))SambaGate_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))SambaGate_Display;
}

void Poster_Display(ObjectMaster *a1)
{
	Angle v2;
	EntityData1 *v1;
	v1 = a1->Data1;
	if (!DroppedFrames)
	{
		njSetTexture(&texlist_sambagp);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		njScale(0, v1->Scale.x, v1->Scale.y, v1->Scale.z);
		v2 = v1->Rotation.y;
		njRotateY(0, v2);
		ProcessModelNode_AB_Wrapper(&poster1, v1->Scale.x);
		njPopMatrix(1u);
	}
}

void Poster_Main(ObjectMaster *a1)
{
	EntityData1 *v1;
	v1 = a1->Data1;
	if (IsPlayerInsideSphere(&v1->Position, 20) && HintTimer <= 0)
	{
		HintTimer = 150;
		PlaySound(6, 0, 0, 0);
		if (v1->CharIndex == 0) sub_4B79C0((char *)(&SambaGPMessage1), 180);
		if (v1->CharIndex == 1) sub_4B79C0((char *)(&SambaGPMessage2), 180);
		if (v1->CharIndex == 2) sub_4B79C0((char *)(&SambaGPMessage3), 180);
	}
	Poster_Display(a1);
}

void LoadPoster(ObjectMaster *a1)
{
	a1->DeleteSub = DeleteObject_DynamicCOL;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Poster_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))Poster_Display;
}

void LoadSambaGateEntry(ObjectMaster *a1)
{
	sub_62E980();
	ObjectMaster *obj;
	EntityData1 *ent;
	ObjectFunc(OF1, LoadSambaGate); // Samba Gate
	ObjectFunc(OF2, LoadPoster); // Samba Poster
	setdata_dlc.Distance = 612800.0f;
	if (CurrentAct == 0)
	{
		obj = LoadObject((LoadObj)2, 3, OF2);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 263.15332f;
			ent->Position.y = 24;
			ent->Position.z = 833.388733;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x7FFF;
			ent->Rotation.z = 0;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->CharIndex = 0;
		}
		obj = LoadObject((LoadObj)2, 3, OF2);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 263.159515f;
			ent->Position.y = 24;
			ent->Position.z = 773.763733f;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x7FFF;
			ent->Rotation.z = 0;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->CharIndex = 0;
		}
		obj = LoadObject((LoadObj)2, 3, OF2);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 422.0f;
			ent->Position.y = 26;
			ent->Position.z = 729;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x7FFF;
			ent->Rotation.z = 0;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->CharIndex = 0;
		}
	}
	if (CurrentAct == 1)
	{
		obj = LoadObject((LoadObj)2, 3, OF2);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 123.0f;
			ent->Position.y = 164.757736f;
			ent->Position.z = 1073.44507f;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0xFFFFA25A;
			ent->Rotation.z = 0;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->CharIndex = 0;
		}
		obj = LoadObject((LoadObj)2, 3, OF2);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -281.0f;
			ent->Position.y = 164.757736f;
			ent->Position.z = 1280.4574f;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x268;
			ent->Rotation.z = 0;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->CharIndex = 0;
		}
		obj = LoadObject((LoadObj)2, 3, OF2);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -543.115f;
			ent->Position.y = 54.7749977f;
			ent->Position.z = 1225.04f;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->Scale.x = 2.0f;
			ent->Scale.y = 2.0f;
			ent->Scale.z = 2.0f;
			ent->CharIndex = 0;
		}
	}
	if (CurrentAct == 3)
	{
		obj = LoadObject((LoadObj)2, 3, OF2);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -175;
			ent->Position.y = 10.625f;
			ent->Position.z = 1742.375f;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0x4000;
			ent->Scale.x = 0.8f;
			ent->Scale.y = 0.8f;
			ent->Scale.z = 0.8f;
			ent->CharIndex = 0;
		}
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 699.0f;
			ent->Position.y = 0;
			ent->Position.z = 1570.0f;
			ent->Rotation.y = 0xFFFFC000;
		}
		obj = LoadObject((LoadObj)2, 3, OF2);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 112.1277f;
			ent->Position.y = 44.875f;
			ent->Position.z = 1342.1f;
			ent->Rotation.y = 0xFFFFD2B3;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->CharIndex = 0;
		}
		obj = LoadObject((LoadObj)2, 3, OF2);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -55.30893f;
			ent->Position.y = 44.875f;
			ent->Position.z = 1425.988f;
			ent->Rotation.y = 0xFFFFD2B3;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->CharIndex = 0;
		}
		obj = LoadObject((LoadObj)2, 3, OF2);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 408.8f;
			ent->Position.y = 22.7500019f;
			ent->Position.z = 1232.8f;
			ent->Rotation.y = 0xFFFF566A;
			ent->Scale.x = 2.0f;
			ent->Scale.y = 1.6f;
			ent->Scale.z = 1.0f;
			ent->CharIndex = 0;
		}
		obj = LoadObject((LoadObj)2, 3, OF2);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 504.0f;
			ent->Position.y = 19.75f;
			ent->Position.z = 1662.65f;
			ent->Rotation.y = 0xFFFF4060;
			ent->Scale.x = 2.0f;
			ent->Scale.y = 2.0f;
			ent->Scale.z = 1.0f;
			ent->CharIndex = 1;
		}
		obj = LoadObject((LoadObj)2, 3, OF2);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 586.958252f;
			ent->Position.y = 19.75f;
			ent->Position.z = 1661.8938f;
			ent->Rotation.y = 0xFFFF4060;
			ent->Scale.x = 2.0f;
			ent->Scale.y = 2.0f;
			ent->Scale.z = 1.0f;
			ent->CharIndex = 2;
		}
	}
}

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
		if (SONICADV_000 != nullptr) ModFailsafe = true;
		if (SONICADV_001 != nullptr) ModFailsafe = true;
		if (SONICADV_002 != nullptr) ModFailsafe = true;
		if (SONICADV_003 != nullptr) ModFailsafe = true;
		if (SONICADV_501 != nullptr) ModFailsafe = true;
		if (SONICADV_502 != nullptr) ModFailsafe = true;
		if (SONICADV_503 != nullptr) ModFailsafe = true;
		if (SONICADV_504 != nullptr) ModFailsafe = true;
		if (SONICADV_505 != nullptr) ModFailsafe = true;
		if (SONICADV_506 != nullptr) ModFailsafe = true;
		if (SONICADV_507 != nullptr) ModFailsafe = true;
		if (SONICADV_508 != nullptr) ModFailsafe = true;
		if (SONICADV_509 != nullptr) ModFailsafe = true;
		if (SONICADV_510 != nullptr) ModFailsafe = true;
		if (ModFailsafe == false)		
		{
			WriteData((void**)0x90EBD0, (void*)&StationSquareObjectTextures);
			WriteData((void**)0x90EBD4, (void*)&StationSquareObjectTextures);
			WriteData((void**)0x90EBD8, (void*)&StationSquareObjectTextures);
			WriteJump((void*)0x7C4EB0, sub_7C4EB0);
			WriteCall((void*)0x0062F098, LoadSambaGateEntry);
			WriteCall((void*)0x0062F102, LoadSambaGateEntry);
			WriteCall((void*)0x00640684, CallSambaCircuit);
		}
	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (ModFailsafe == false && CurrentLevel == 26 && GameState != 16)
		{
			if (HintTimer > 0) HintTimer--;
		}
	}
}