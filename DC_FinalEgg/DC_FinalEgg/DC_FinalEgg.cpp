#include "stdafx.h"
#include "SADXModLoader.h"
#include <lanternapi.h>
#include <string>
#include "FinalEgg1.h"
#include "FinalEgg2.h"
#include "FinalEgg3.h"
#include "FinalEgg_objects.h"
#include "stdlib.h"
#include "math.h"

std::string pla2xbin;

NJS_TEXNAME textures_cylinder[259];
NJS_TEXLIST texlist_cylinder = { arrayptrandlength(textures_cylinder) };
DataPointer(int, FramerateSetting, 0x0389D7DC);
DataPointer(int, DroppedFrames, 0x03B1117C);
DataPointer(int, LastRenderFlags, 0x03D08498);
DataPointer(float, SomeDepthThing, 0x03ABD9C0);
FunctionPointer(void, sub_407A00, (NJS_MODEL_SADX *model, float a2), 0x407A00);
FunctionPointer(void, sub_4094D0, (NJS_MODEL_SADX *model, char blend, float radius_scale), 0x4094D0);
FunctionPointer(void, sub_408530, (NJS_OBJECT*), 0x408530);
static int cylinderframe = 0;

PVMEntry FinalEggObjectTextures[] = {
	{ "OBJ_FINALEGG", (TexList *)0x19CC1C0 },
	{ "E_ROBO", (TexList *)0x94A318 },
	{ "GACHAPON", (TexList *)0x19C929C },
	{ "SUPI_SUPI", (TexList *)0x96F518 },
	{ "EFF_FINALEGG_POM", (TexList *)0x19C91B0 },
	{ "MOGU", (TexList *)0x93ECEC },
	{ "WARA", (TexList *)0x93852C },
	{ "USA", (TexList *)0x93CF74 },
	{ "BANB", (TexList *)0x93A8BC },
	{ "GORI", (TexList *)0x945964 },
	{ "CYLINDER", &texlist_cylinder },
	{ 0 }
};

PointerInfo pointers[] = {
	ptrdecl(0x97DB48, &landtable_0001D108), //Act 1
	ptrdecl(0x97DB50, &landtable_000E67D0), //Act 3
	ptrdecl(0x90EB90, &FinalEggObjectTextures)
};

//Final Egg 2 clip function
void __cdecl SetClip_FEgg2_r(signed int a1)
{
	if (a1 >= 2)
	{
		for (int i = 0; i < object_00087F80_2.basicdxmodel->nbMat; i++)
			object_00087F80_2.basicdxmodel->mats[i].attrflags &= 0xFFEFFFFF;
		for (int i = 0; i < object_00089114_2.basicdxmodel->nbMat; i++)
			object_00089114_2.basicdxmodel->mats[i].attrflags &= 0xFFEFFFFF;
		for (int i = 0; i < object_00085D08_2.basicdxmodel->nbMat; i++)
			object_00085D08_2.basicdxmodel->mats[i].attrflags &= 0xFFEFFFFF;
	}
	else
	((LandTable *)0x19C8ED0)->Col = &collist_00081980[3];
	((LandTable *)0x19C8ED0)->COLCount -= 3;
}

//O Tatekan
void __cdecl sub_5B4690(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	int v2; // eax@2
	int v3; // eax@4
	float YDist; // ST04_4@6
	int v5; // eax@6
	float scale; // [sp+10h] [bp+4h]@9
	v1 = a1->Data1;
	if (!DroppedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.y;
		if (v2)
		{
			njRotateY(0, (unsigned __int16)v2);
		}
		njPushMatrix(0);
		v3 = v1->Rotation.x;
		if (v3)
		{
			njRotateY(0, (unsigned __int16)v3);
		}
		sub_408530((NJS_OBJECT*)0x1A45500);
		njPopMatrix(1u);
		njPushMatrix(0);
		YDist = v1->Scale.y * 22.0;
		njTranslate(0, 0.0, YDist, 0.0);
		v5 = v1->Rotation.z;
		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}
		ProcessModelNode_AB_Wrapper((NJS_OBJECT*)0x1A44A40, 1.0);
		njPopMatrix(1u);
		njSetTexture(&texlist_cylinder);
		njPushMatrix(0);
		njTranslate(0, 0.0, 4.0, 0.0);
		njScale(0, 1.0, v1->Scale.y, 1.0);
		((NJS_OBJECT*)0x01A4425C)->basicdxmodel->mats->attr_texId = 258;
		sub_408530((NJS_OBJECT*)0x01A4425C);
		if (v1->Scale.y >= 1.0)
		{
			scale = v1->Scale.y;
		}
		else
		{
			scale = 1.0;
		}
		LastRenderFlags &= ~1;
		ProcessModelNode_AB_Wrapper((NJS_OBJECT*)0x01A4583C, scale);
		njPopMatrix(1u);
		njPopMatrix(1u);
	}
}

void __cdecl OStandLight_DisplayFixed(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	int v2; // eax@2
	NJS_OBJECT* v3; // eax@4
	NJS_OBJECT* v4; // eax@4
	v1 = a1->Data1;
	float lighttype;
	int light_angle;
	int cam_angle;
	if (!DroppedFrames)
	{
		cam_angle = NJM_ANG_DEG(Camera_Data1->Rotation.y);
		cam_angle = cam_angle % 360;
		if (cam_angle < 0) cam_angle = cam_angle + 360;
		light_angle = NJM_ANG_DEG(16384 + (Camera_Data1->Rotation.y) * 4);
		light_angle = light_angle % 360;
		if (light_angle < 0) light_angle = light_angle + 360;
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.y;
		if (v2)
		{
			njRotateY(0, (unsigned __int16)v2);
		}
		sub_407A00(((NJS_MODEL_SADX*)0x1C28C4C), 1.0);
		v3 = ((NJS_OBJECT*)0x1C28C78)->child;
		njTranslate(0, ((NJS_OBJECT*)0x1C28C78)->child->pos[0], ((NJS_OBJECT*)0x1C28C78)->child->pos[1], ((NJS_OBJECT*)0x1C28C78)->child->pos[2]);
		if (v1->Scale.z != 11) njRotateXYZ(0, v3->ang[0] + *(int*)&v1->CharIndex, v3->ang[1], v3->ang[2]);
		if (cam_angle >= 160 && cam_angle <= 200 && v1->Scale.z == 11) njRotateXYZ(0, v3->ang[0] + *(int*)&v1->CharIndex, v3->ang[1], NJM_DEG_ANG(light_angle));
		if (cam_angle < 160 && v1->Scale.z == 11) njRotateXYZ(0, v3->ang[0] + *(int*)&v1->CharIndex, v3->ang[1], NJM_DEG_ANG(0));
		if (cam_angle > 200 && v1->Scale.z == 11) njRotateXYZ(0, v3->ang[0] + *(int*)&v1->CharIndex, v3->ang[1], NJM_DEG_ANG(180));
		sub_4094D0((NJS_MODEL_SADX*)v3->model, 4, 1.0f);
		if (v1->Scale.x != -10 && v1->Scale.x != -0.9f)
		{
		//((NJS_OBJECT*)0x1C28C78)->child->basicdxmodel->points[23].x = (v1->Scale.x);
		((NJS_OBJECT*)0x1C28C78)->child->basicdxmodel->points[23].y = v1->Scale.z;
		((NJS_OBJECT*)0x1C28C78)->child->basicdxmodel->points[23].z = v1->Scale.y;
		//((NJS_OBJECT*)0x1C28C78)->child->basicdxmodel->points[24].x = (v1->Scale.x);
		((NJS_OBJECT*)0x1C28C78)->child->basicdxmodel->points[24].y = -1.0f*(v1->Scale.z);
		((NJS_OBJECT*)0x1C28C78)->child->basicdxmodel->points[24].z = v1->Scale.y;
		((NJS_OBJECT*)0x1C28C78)->child->basicdxmodel->points[19].x = 0;
		((NJS_OBJECT*)0x1C28C78)->child->basicdxmodel->points[19].y = 0;
		((NJS_OBJECT*)0x1C28C78)->child->basicdxmodel->points[19].z = 0;
		((NJS_OBJECT*)0x1C28C78)->child->basicdxmodel->points[20].x = 0;
		((NJS_OBJECT*)0x1C28C78)->child->basicdxmodel->points[20].y = 0;
		((NJS_OBJECT*)0x1C28C78)->child->basicdxmodel->points[20].z = 0;
		}
		if (v1->Scale.x == -10 || v1->Scale.x == -0.9f)
		{
			((NJS_OBJECT*)0x1C28C78)->child->basicdxmodel->points[19].x = (v1->Scale.x);
			((NJS_OBJECT*)0x1C28C78)->child->basicdxmodel->points[20].x = -1 * (v1->Scale.x);
			((NJS_OBJECT*)0x1C28C78)->child->basicdxmodel->points[19].z = (v1->Scale.y);
			((NJS_OBJECT*)0x1C28C78)->child->basicdxmodel->points[20].z = (v1->Scale.y);
			((NJS_OBJECT*)0x1C28C78)->child->basicdxmodel->points[23].x = 0;
			((NJS_OBJECT*)0x1C28C78)->child->basicdxmodel->points[23].y = 0;
			((NJS_OBJECT*)0x1C28C78)->child->basicdxmodel->points[23].z = 0;
			((NJS_OBJECT*)0x1C28C78)->child->basicdxmodel->points[24].x = 0;
			((NJS_OBJECT*)0x1C28C78)->child->basicdxmodel->points[24].y = 0;
			((NJS_OBJECT*)0x1C28C78)->child->basicdxmodel->points[24].z = 0;
		}
		njPopMatrix(1u);
	}
}

//O Texture
void __cdecl sub_5AE330(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	NJS_VECTOR *v2; // esi@2
	float a3; // ST24_4@2
	v1 = a1->Data1;
	if (!DroppedFrames)
	{
		BackupConstantAttr();
		AddConstantAttr(0, NJD_FLAG_USE_ALPHA);
		AddConstantAttr(0, NJD_DA_ONE);
		njColorBlendingMode(0, 8);
		njColorBlendingMode(1, 10);
		njPushMatrix(0);
		njSetTexture(&texlist_cylinder);
		njTranslateV(0, &v1->Position);
		njRotateXYZ(0, v1->Rotation.x, v1->Rotation.y, v1->Rotation.z);
		v2 = &v1->Scale;
		njScaleV(0, v2);
		SomeDepthThing = 38952;
		a3 = VectorMaxAbs(v2);
		ProcessModelNode_A_Wrapper((NJS_OBJECT*)0x1A45620, QueuedModelFlagsB_SomeTextureThing, a3);
		SomeDepthThing = 0;
		njPopMatrix(1u);
		ClampGlobalColorThing_Thing();
		njColorBlendingMode(0, 8);
		njColorBlendingMode(1, 6);
		RestoreConstantAttr();
	}
}


NJS_MATERIAL* LevelSpecular[] = {
	((NJS_MATERIAL*)0x01A3AD08), //Glass tube elevator
	//OHakidashi
	((NJS_MATERIAL*)0x01A26E18),
	((NJS_MATERIAL*)0x01A26E2C),
	((NJS_MATERIAL*)0x01A26E40),
	((NJS_MATERIAL*)0x01A26E54),
	((NJS_MATERIAL*)0x01A26E68),
	((NJS_MATERIAL*)0x01A26E7C),
	((NJS_MATERIAL*)0x01A26E90),
	((NJS_MATERIAL*)0x01A26EA4),
	((NJS_MATERIAL*)0x01A26EB8),
	((NJS_MATERIAL*)0x01A26ECC),
	//OEggKanban
	((NJS_MATERIAL*)0x01C26FBC),
	//Side_Arm
	((NJS_MATERIAL*)0x019DEB20),
	((NJS_MATERIAL*)0x019DEB34),
	((NJS_MATERIAL*)0x019DEB48),
	((NJS_MATERIAL*)0x019DEB5C),
	((NJS_MATERIAL*)0x019DEB70),
	//Top_Arm
	((NJS_MATERIAL*)0x019DC710),
	((NJS_MATERIAL*)0x019DC724),
};

NJS_MATERIAL* ObjectSpecular[] = {
	//OTexture
	((NJS_MATERIAL*)0x01A45548),
	//OContainer
	((NJS_MATERIAL*)0x019D7590),
	((NJS_MATERIAL*)0x019D75A4),
	((NJS_MATERIAL*)0x019D75B8),
	//Elevator door
	((NJS_MATERIAL*)0x01A3AA44),
	//Barrier
	((NJS_MATERIAL*)0x01A45BF4),
	((NJS_MATERIAL*)0x01A45C08),
	((NJS_MATERIAL*)0x01A45C1C),
	((NJS_MATERIAL*)0x01A45C44),
	((NJS_MATERIAL*)0x01A45C58),
	//OHammer
	((NJS_MATERIAL*)0x019FA670),
	((NJS_MATERIAL*)0x019FA684),
	((NJS_MATERIAL*)0x019FA698),
	((NJS_MATERIAL*)0x019FA6AC),
	((NJS_MATERIAL*)0x019FA6C0),
	((NJS_MATERIAL*)0x019FA6D4),
	((NJS_MATERIAL*)0x019FA6E8),
	((NJS_MATERIAL*)0x019F8EA8),
	((NJS_MATERIAL*)0x019F8EBC),
	((NJS_MATERIAL*)0x019F8ED0),
	((NJS_MATERIAL*)0x019F8EE4),
	((NJS_MATERIAL*)0x019F8EF8),
	((NJS_MATERIAL*)0x019F8F0C),
	((NJS_MATERIAL*)0x019F8F20),
	//OGshooter
	((NJS_MATERIAL*)0x01A20498),
	((NJS_MATERIAL*)0x01A204AC),
	((NJS_MATERIAL*)0x01A204C0),
	((NJS_MATERIAL*)0x01A204D4),
	((NJS_MATERIAL*)0x01A204E8),
	((NJS_MATERIAL*)0x01A204FC),
	((NJS_MATERIAL*)0x01A1FF94),
	((NJS_MATERIAL*)0x01A1FFA8),
	((NJS_MATERIAL*)0x01A1FFBC),
	((NJS_MATERIAL*)0x01A1FE88),
	((NJS_MATERIAL*)0x01A1FD7C),
	((NJS_MATERIAL*)0x01A1FC70),
	((NJS_MATERIAL*)0x01A1FB64),
	((NJS_MATERIAL*)0x01A1FA58),
	((NJS_MATERIAL*)0x01A1F94C),
	//Rotating spikes
	((NJS_MATERIAL*)0x019D23C4),
	((NJS_MATERIAL*)0x019D23D8),
	((NJS_MATERIAL*)0x019D23EC),
	//OSetStep
	((NJS_MATERIAL*)0x019D6A80),
	((NJS_MATERIAL*)0x019D6A94),
	((NJS_MATERIAL*)0x019D6AA8),
	((NJS_MATERIAL*)0x019D6ABC),
	((NJS_MATERIAL*)0x019D6AD0),
	//Side_Arm
	((NJS_MATERIAL*)0x019E0CA0),
	((NJS_MATERIAL*)0x019E06A8),
	((NJS_MATERIAL*)0x019E06BC),
	((NJS_MATERIAL*)0x019E06D0),
	((NJS_MATERIAL*)0x019E04A8),
	((NJS_MATERIAL*)0x019DFE6C),
	((NJS_MATERIAL*)0x019DFE80),
	((NJS_MATERIAL*)0x019DFE94),
	((NJS_MATERIAL*)0x019DF790),
	((NJS_MATERIAL*)0x019DF7A4),
	((NJS_MATERIAL*)0x019DF7B8),
	((NJS_MATERIAL*)0x019DF7CC),
	((NJS_MATERIAL*)0x019DF398),
	((NJS_MATERIAL*)0x019DF3AC),
	((NJS_MATERIAL*)0x019DF3C0),
	((NJS_MATERIAL*)0x019DE738),
	((NJS_MATERIAL*)0x019DE74C),
	((NJS_MATERIAL*)0x019DE760),
	((NJS_MATERIAL*)0x019DE774),
	((NJS_MATERIAL*)0x019DE318),
	((NJS_MATERIAL*)0x019DE32C),
	((NJS_MATERIAL*)0x019DE340),
	((NJS_MATERIAL*)0x019DE354),
	((NJS_MATERIAL*)0x019DDEF8),
	((NJS_MATERIAL*)0x019DDF0C),
	((NJS_MATERIAL*)0x019DDF20),
	((NJS_MATERIAL*)0x019DDF34),
	((NJS_MATERIAL*)0x019DDB78),
	((NJS_MATERIAL*)0x019DDB8C),
	((NJS_MATERIAL*)0x019DD9EC),
	//Top_Arm
	((NJS_MATERIAL*)0x019DCC80),
	((NJS_MATERIAL*)0x019DCC94),
	((NJS_MATERIAL*)0x019DD1F0),
	((NJS_MATERIAL*)0x019DD204),
	((NJS_MATERIAL*)0x019DC120),
	((NJS_MATERIAL*)0x019DC134),
	((NJS_MATERIAL*)0x019DB890),
	((NJS_MATERIAL*)0x019DB8A4),
	((NJS_MATERIAL*)0x019DB8B8),
	((NJS_MATERIAL*)0x019DB8CC),
	((NJS_MATERIAL*)0x019DB8E0),
	((NJS_MATERIAL*)0x019DB4A8),
	((NJS_MATERIAL*)0x019DB4BC),
	((NJS_MATERIAL*)0x019DB4D0),
	((NJS_MATERIAL*)0x019DB4E4),
	((NJS_MATERIAL*)0x019DB088),
	((NJS_MATERIAL*)0x019DB09C),
	((NJS_MATERIAL*)0x019DB0B0),
	((NJS_MATERIAL*)0x019DB0C4),
	((NJS_MATERIAL*)0x019DAC68),
	((NJS_MATERIAL*)0x019DAC7C),
	((NJS_MATERIAL*)0x019DAC90),
	((NJS_MATERIAL*)0x019DACA4),
};

NJS_MATERIAL* WhiteDiffuse[] = {
	//Egg Keeper
	((NJS_MATERIAL*)0x0094B168),
	//OTexture
	((NJS_MATERIAL*)0x01A45548),
	//Elevator (glass tube)
	((NJS_MATERIAL*)0x01A3ACB8),
	((NJS_MATERIAL*)0x01A3ACCC),
	((NJS_MATERIAL*)0x01A3ACE0),
	((NJS_MATERIAL*)0x01A3AD58),
	//Cylinder
	((NJS_MATERIAL*)0x01A44088),
	//OLight1
	((NJS_MATERIAL*)0x01A46C10),
	((NJS_MATERIAL*)0x01A46C24),
	//OEggKanban
	((NJS_MATERIAL*)0x01C26FD0),
	((NJS_MATERIAL*)0x01C26FE4),
	//Level stuff
	&matlist_000DA1C4[7],
	&matlist_000D61B8[8],
	&matlist_000D8E98[8],
	&matlist_000D2870[9],
	&matlist_000D0E5C[2],
	&matlist_000D0E5C[3],
	&matlist_000D0E5C[5],
	&matlist_000D0E5C[6],
	&matlist_000D0E5C[7],
	&matlist_0009A5FC[0],
	&matlist_0009A5FC[1],
	&matlist_00085FB4[8],
	&matlist_001357BC[0],
	&matlist_001357BC[1],
	&matlist_001357BC[2],
	&matlist_001357BC[3],
	&matlist_00148C90_2[0],
	&matlist_00146E8C_2[0],
	&matlist_00146E8C_2[0],
	&matlist_001228E4[3],
	&matlist_0002CF50[0],
	&matlist_0002CF50[1],
	&matlist_0002CF50[2],
	&matlist_0002CF50[3],
	&matlist_0002CF50[4],
	&matlist_0002CF50[5],
};


bool ForceObjectSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_specular(1, false);
	use_default_diffuse(true);
	return true;
}

bool ForceLevelSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_specular(0, false);
	set_diffuse(0, false);
	use_default_diffuse(true);
	return true;
}

bool ForceWhiteDiffuse(NJS_MATERIAL* material, Uint32 flags)
{
	if (CurrentAct == 0) set_diffuse(5, false); else set_diffuse(1, false);
	use_default_diffuse(true);
	return true;
}

const char* __cdecl SetPLA2X(int level, int act)
{
	if (level == 10 && act == 2)
	{
		return pla2xbin.c_str();
	}
	else { return nullptr; }
}

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) void __cdecl Init(const char *path)
	{
		pla2xbin = path;
		pla2xbin.append("\\system\\PL_A2X.BIN");
		HMODULE Lantern = GetModuleHandle(L"sadx-dc-lighting");
		if (Lantern != nullptr && GetProcAddress(Lantern, "material_register") != nullptr)
		{
			typedef const char* (__cdecl* lantern_load_cb)(int level, int act);
			pl_load_register(SetPLA2X);
			material_register(LevelSpecular, LengthOfArray(LevelSpecular), &ForceLevelSpecular);
			material_register(ObjectSpecular, LengthOfArray(ObjectSpecular), &ForceObjectSpecular);
			material_register(WhiteDiffuse, LengthOfArray(WhiteDiffuse), &ForceWhiteDiffuse);
		}
		//OTexture lighting
		((NJS_MATERIAL*)0x01A45548)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x01A45548)->attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		//OUkishima lighting
		((NJS_MATERIAL*)0x01A27EC8)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_MATERIAL*)0x01A27EDC)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
		*(NJS_OBJECT*)0x1A37A6C = object_001E1EF8; //Elevator
		*(NJS_OBJECT*)0x19D228C = object_0018E284; //OConvStop
		memcpy((void*)0x019CDCD0, uv_0018AD48, sizeof(uv_0018AD48)); //Conveyour belt UVs
		memcpy((void*)0x019CDD98, uv_0018AE10, sizeof(uv_0018AE10)); //Conveyour belt UVs
		memcpy((void*)0x019CDF08, uv_0018AF80, sizeof(uv_0018AF80)); //Conveyour belt UVs
		memcpy((void*)0x01C271F0, uv_0021DA1C, sizeof(uv_0021DA1C)); //Egg Kanban UVs
		*(NJS_MODEL_SADX*)0x01C2A55C = attach_0021D538; //Some light thing material fix
		*(NJS_MODEL_SADX*)0x01A1F7F8 = attach_001CE570; //Gachapon thing
		*(NJS_MODEL_SADX*)0x01A1ED18 = attach_001CE0D0; //Gachapon thing lid
		*(NJS_MODEL_SADX*)0x01A1E758 = attach_001CDD00; //Gachapon thing left
		*(NJS_MODEL_SADX*)0x01A1E458 = attach_001CDA74; //Gachapon thing right
		((NJS_MATERIAL*)0x01C26FD0)->attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Egg Kanban stuff
		((NJS_MATERIAL*)0x01C26FE4)->attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Egg Kanban stuff
		((NJS_OBJECT*)0x1C26F74)->basicdxmodel->mats[0].diffuse.argb.g = 178; //Egg Kanban stuff
		((NJS_OBJECT*)0x1C26F74)->basicdxmodel->mats[0].diffuse.argb.r = 152; //Egg Kanban stuff
		((NJS_OBJECT*)0x1C26F74)->basicdxmodel->mats[0].diffuse.argb.b = 152; //Egg Kanban stuff
		((NJS_OBJECT*)0x1A462EC)->basicdxmodel->mats[4].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Barrier
		*(NJS_OBJECT*)0x19FEFE4 = object_001AEDFC;  // Light
		*(NJS_MODEL_SADX*)0x19D8BC0 = attach_015D8BC0;  // Laser
		*(NJS_OBJECT*)0x01C28C78 = object_01828C78; // O Stand Light
		WriteJump((void*)0x5AE330, sub_5AE330); //O Texture function
		WriteJump(OStandLight_Display, OStandLight_DisplayFixed); //O Stand Light function
		WriteJump((void*)0x005B4690, sub_5B4690); //Cylinder function
		ResizeTextureList((NJS_TEXLIST*)0x1B98518, textures_finalegg1);
		ResizeTextureList((NJS_TEXLIST*)0x1A60488, textures_finalegg2);
		ResizeTextureList((NJS_TEXLIST*)0x1AC5780, textures_finalegg3);
		((LandTable *)0x19C8ED0)->COLCount = LengthOfArray(collist_00081980); //Final Egg 2 COL list
		((LandTable *)0x19C8ED0)->Col = collist_00081980; //Final Egg 2 COL list
		WriteJump((void*)0x5ADC40, SetClip_FEgg2_r); //Final Egg 2 clip function
		DataArray(FogData, FinalEgg1Fog, 0x019C8FF0, 3);
		DataArray(FogData, FinalEgg2Fog, 0x019C9020, 3);
		DataArray(FogData, FinalEgg3Fog, 0x019C9050, 3);
		DataArray(DrawDistance, DrawDist_FinalEgg2, 0x019C8FC0, 3);
		for (int i = 0; i < 3; i++)
		{
			FinalEgg1Fog[i].Color = 0xFF000000;
			FinalEgg1Fog[i].Layer = 1200.0f;
			FinalEgg1Fog[i].Distance = 3000.0f;
			FinalEgg2Fog[i].Color = 0xFF000000;
			FinalEgg2Fog[i].Layer = 650.0f;
			FinalEgg2Fog[i].Distance = 2000.0f;
			FinalEgg2Fog[i].Toggle = 1;
			FinalEgg3Fog[i].Color = 0xFF000000;
			FinalEgg3Fog[i].Layer = 650.0f;
			FinalEgg3Fog[i].Distance = 2000.0f;
			DrawDist_FinalEgg2[i].Maximum = -2400.0f;
		}
	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (CurrentLevel == 10 && GameState != 16)
		{
			if (FramerateSetting < 2 && FrameCounter % 2 == 0 || FramerateSetting >= 2) cylinderframe++;
			if (cylinderframe >= 257) cylinderframe = 0;
			((NJS_OBJECT*)0x01A4583C)->basicdxmodel->mats[0].attr_texId = cylinderframe;
			((NJS_OBJECT*)0x1A45620)->basicdxmodel->mats->attr_texId = cylinderframe;
		}
	}
}