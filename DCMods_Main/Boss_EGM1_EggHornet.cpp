#include "stdafx.h"

NJS_TEXNAME textures_egm1land[118];
NJS_TEXLIST texlist_egm1land = { arrayptrandlength(textures_egm1land) };

//#include "EggHornet.h"

DataArray(PVMEntry, EggHornetObjectTextures, 0x156F6B0, 15);
DataArray(FogData, EggHornetFog, 0x01556B34, 3);
DataArray(DrawDistance, DrawDist_EggHornet, 0x01556B1C, 3);

FunctionPointer(void, sub_571AD0, (ObjectMaster *a1), 0x571AD0);

static int EggHornet_Rotation = 0;
static int EggHornet_RotationDirection = 1;
static bool EggHornet_RotationEnabled = false;

int EHOcean = -1;
int EHWaterObjects[] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };

void AddEHWaterObject(int colnumber)
{
	for (int q = 0; q < LengthOfArray(EHWaterObjects); ++q)
	{
		if (EHWaterObjects[q] == colnumber) return;
		else if (EHWaterObjects[q] == -1)
		{
			EHWaterObjects[q] = colnumber;
			return;
		}
	}
}

void __cdecl EHWater_Display(void(__cdecl *function)(void *), void *data, float depth, QueuedModelFlagsB queueflags)
{
	if (SADXWater_MysticRuins)
	{
		DrawModelCallback_Queue((void(__cdecl *)(void *))MysticRuins_OceanDraw, OceanDataArray, -7952.0f, QueuedModelFlagsB_EnableZWrite);
	}
	else if (EHOcean != -1)
	{
		ClampGlobalColorThing_Thing();
		DisableFog();
		njSetTexture(&BEACH_SEA_TEXLIST);
		njPushMatrix(0);
		njTranslate(0, 0, 0, 0);
		DrawQueueDepthBias = -47952.0f;
		ProcessModelNode_AB_Wrapper(LandTableArray[40]->Col[EHOcean].Model, 1.0f);
		DrawQueueDepthBias = 0.0f;
		njPopMatrix(1u);
		ToggleStageFog();
	}
	for (int i = 0; i < LengthOfArray(EHWaterObjects); i++)
	{
		if (EHWaterObjects[i] != -1)
		{
			njSetTexture(&texlist_egm1land);
			njPushMatrix(0);
			njTranslate(0, 0, 0, 0);
			ProcessModelNode_A_Wrapper(LandTableArray[40]->Col[EHWaterObjects[i]].Model, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);
		}
	}
}

void UnloadLevelFiles_B_EGM1()
{
	EHOcean = -1;
	for (int j = 0; j < LengthOfArray(EHWaterObjects); j++)
	{
		EHWaterObjects[j] = -1;
	}
	LandTable *B_EGM1 = B_EGM1_Info->getlandtable();
	NJS_MATERIAL *material;
	//Also unregister white diffuse in the level
	for (int j = 0; j < B_EGM1->COLCount; j++)
	{
		for (int k = 0; k < B_EGM1->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)&B_EGM1->Col[j].Model->basicdxmodel->mats[k];
			if (material->attrflags & NJD_CUSTOMFLAG_WHITE)
			{
				RemoveWhiteDiffuseMaterial(material);
			}
		}
	}
	delete B_EGM1_Info;
	B_EGM1_Info = nullptr;
}

void RotateEggHornet(ObjectMaster *a1)
{
	sub_571AD0(a1);
	njRotateY(0, EggHornet_Rotation);
}

static void EggHornetRotationObject_r(ObjectMaster *a1);
static Trampoline EggHornetRotationObject_t(0x574CB0, 0x574CB6, EggHornetRotationObject_r);
static void __cdecl EggHornetRotationObject_r(ObjectMaster *a1)
{
	auto original = reinterpret_cast<decltype(EggHornetRotationObject_r)*>(EggHornetRotationObject_t.Target());
	original(a1);
	if (EnableEggHornet) EggHornet_RotationEnabled = true;
}

void EggHornet_RotationDisable(ObjectMaster *a1)
{
	if (EnableEggHornet) EggHornet_RotationEnabled = false;
	CheckThingButThenDeleteObject(a1);
}

void EggHornet_Init()
{
	Uint32 materialflags;
	NJS_MATERIAL* material;
	B_EGM1_Info = new LandTableInfo(HelperFunctionsGlobal.GetReplaceablePath("SYSTEM\\data\\B_EGM1\\0.sa1lvl"));
	LandTable* B_EGM1 = B_EGM1_Info->getlandtable(); //&landtable_00000128;
	RemoveMaterialColors_Landtable(B_EGM1);
	B_EGM1->TexList = &texlist_egm1land;
	LandTableArray[40] = B_EGM1;
	for (int j = 0; j < B_EGM1->COLCount; j++)
	{
		//Check materials
		for (int k = 0; k < B_EGM1->Col[j].Model->basicdxmodel->nbMat; ++k)
		{
			material = (NJS_MATERIAL*)&B_EGM1->Col[j].Model->basicdxmodel->mats[k];
			//Texanim 1
			if (material->attr_texId == 55)
			{
				material->attr_texId = 0;
				AddTextureAnimation(20, 0, material, false, 5, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			//White diffuse
			if (material->attrflags & NJD_CUSTOMFLAG_WHITE)
			{
				AddWhiteDiffuseMaterial(material);
			}
		}
		//Check COL flags
		if (B_EGM1->Col[j].Flags & 0x8000000)
		{
			if (B_EGM1->Col[j].Flags & ColFlags_Visible) B_EGM1->Col[j].Flags &= ~ColFlags_Visible;
			if (B_EGM1->Col[j].Flags & 0x2)
			{
				EHOcean = j;
			}
			else
			{
				AddEHWaterObject(j);
			}
		}
	}
	if (!ModelsLoaded_B_EGM1)
	{
		*(NJS_TEXLIST*)0x1557064 = texlist_egm1land; //Egg Hornet level texlist
		RemoveVertexColors_Object((NJS_OBJECT*)0x1561A70); //Egg Hornet main model
		RemoveVertexColors_Object((NJS_OBJECT*)0x1561A70); //Egg Hornet eggmobile part
		//Water
		WriteCall((void*)0x57192A, EHWater_Display); //Egg Hornet water
		//SADX style water
		if (SADXWater_MysticRuins)
		{
			EggHornetObjectTextures[0].TexList = &texlist_sadxwtr_waves;
			EggHornetObjectTextures[0].Name = "SADXWTR_WAVES";
		}
		else
		{
			EggHornetObjectTextures[0].TexList = &BEACH_SEA_TEXLIST;
			EggHornetObjectTextures[0].Name = "BEACH_SEA_DC";
		}
		//Egg Hornet model stuff
		((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[4].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[5].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[6].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[4].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[5].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[6].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[7].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[4].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[5].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[6].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[7].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155D5D0)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT; //drills
		((NJS_OBJECT*)0x0155B9E8)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //drills
		((NJS_OBJECT*)0x01561A70)->basicdxmodel->mats[18].attrflags |= NJD_FLAG_IGNORE_LIGHT; //front light
		((NJS_OBJECT*)0x01561A70)->basicdxmodel->mats[8].attrflags |= NJD_FLAG_IGNORE_LIGHT; //computer
		((NJS_MATERIAL*)0x015570AC)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		ForceObjectSpecular_Object((NJS_OBJECT*)0x1561A70, false);
		AddWhiteDiffuseMaterial((NJS_MATERIAL*)0x0155D1DC); //Drill white diffuse
		for (int i = 0; i < 3; i++)
		{
			DrawDist_EggHornet[i].Maximum = -12500.0;
			EggHornetFog[i].Distance = -14000.0f;
			EggHornetFog[i].Layer = -2000.0f;
			EggHornetFog[i].Toggle = 1;
			EggHornetFog[i].Color = 0xFFA0A0A0;
		}
		//Rotation stuff
		WriteCall((void*)0x574BC3, EggHornet_RotationDisable);
		WriteCall((void*)0x571F79, RotateEggHornet);
		WriteCall((void*)0x5728C4, RotateEggHornet);
		ModelsLoaded_B_EGM1 = true;
	}
}

void EggHornet_OnFrame()
{
	//Egg Hornet rotation
	if (EnableEggHornet && CurrentLevel == LevelIDs_EggHornet && !IsGamePaused())
	{
		if (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21)
		{
			EggHornet_Rotation = 0;
			EggHornet_RotationDirection = 1;
			EggHornet_RotationEnabled = false;
		}
		if (EggHornet_RotationEnabled)
		{
			if (EggHornet_RotationDirection == 1) EggHornet_Rotation = EggHornet_Rotation + 546 * FramerateSetting;
			if (EggHornet_RotationDirection == -1) EggHornet_Rotation = EggHornet_Rotation - 546 * FramerateSetting;
			if (EggHornet_Rotation > 1820) EggHornet_RotationDirection = -1;
			if (EggHornet_Rotation < -1820) EggHornet_RotationDirection = 1;
		}
	}
}