#include "SADXModLoader.h"

enum CHAOS4_OBJECTTexName
{
	CHAOS4_OBJECTTexName_c4_128s_kankyo,
	CHAOS4_OBJECTTexName_mra_008s_hirusorab,
	CHAOS4_OBJECTTexName_mra_032s_hirusorac,
	CHAOS4_OBJECTTexName_mra_256s_hirusoraa,
	CHAOS4_OBJECTTexName_mrc4_032s_kuki,
	CHAOS4_OBJECTTexName_mrc4_256s_hapa
};

NJS_MATERIAL matlist_000409E8[] = {
	{ { 0x65B2B2B2 },{ 0xFFFFFFFF }, 11, CHAOS4_OBJECTTexName_c4_128s_kankyo, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_000409FC[] = {
	3, 41, 42, 43,
	11, 47, 44, 45, 79, 142, 78, 139, 83, 81, 173, 174,
	4, 45, 46, 47, 134,
	7, 51, 48, 49, 141, 52, 138, 175,
	27, 180, 153, 60, 64, 26, 28, 31, 29, 30, 35, 107, 34, 108, 111, 114, 112, 113, 133, 10, 13, 16, 14, 15, 20, 127, 122, 125,
	0x8000u | 7, 76, 74, 73, 85, 86, 167, 166,
	0x8000u | 6, 174, 81, 151, 139, 140, 142,
	0x8000u | 5, 87, 165, 88, 164, 163,
	11, 154, 161, 91, 90, 65, 89, 66, 69, 72, 70, 71,
	0x8000u | 25, 181, 186, 101, 102, 106, 0, 1, 4, 2, 3, 8, 93, 7, 94, 97, 100, 98, 99, 129, 120, 117, 157, 118, 160, 159,
	0x8000u | 10, 125, 123, 122, 19, 20, 18, 17, 136, 137, 135,
	13, 137, 134, 135, 46, 51, 45, 48, 142, 141, 140, 138, 152, 175,
	0x8000u | 5, 148, 144, 169, 82, 170,
	4, 2, 1, 105, 106,
	0x8000u | 8, 110, 5, 109, 6, 114, 9, 113, 10,
	0x8000u | 9, 127, 15, 126, 16, 11, 10, 12, 9, 6,
	4, 14, 13, 132, 133,
	0x8000u | 8, 143, 23, 24, 22, 21, 58, 59, 57,
	0x8000u | 24, 182, 181, 27, 101, 103, 106, 104, 105, 110, 2, 5, 8, 6, 7, 12, 97, 11, 98, 126, 129, 127, 128, 125, 115,
	4, 26, 179, 60, 180,
	4, 29, 28, 63, 64,
	4, 33, 32, 67, 68,
	3, 72, 71, 36,
	0x8000u | 10, 36, 37, 71, 76, 70, 73, 87, 86, 165, 166,
	0x8000u | 12, 37, 43, 40, 41, 75, 80, 74, 77, 85, 84, 167, 168,
	0x8000u | 9, 44, 79, 80, 78, 77, 83, 84, 173, 168,
	0x8000u | 8, 177, 54, 178, 55, 183, 25, 184, 147,
	17, 175, 176, 52, 53, 49, 50, 51, 56, 135, 59, 136, 21, 18, 24, 19, 143, 123,
	0x8000u | 18, 154, 61, 91, 62, 65, 68, 66, 67, 72, 33, 36, 39, 37, 38, 43, 130, 42, 131,
	3, 172, 116, 171,
	9, 161, 162, 90, 163, 89, 88, 69, 87, 70,
	0x8000u | 7, 121, 95, 145, 96, 146, 92, 149,
	4, 100, 99, 119, 120,
	13, 114, 109, 108, 110, 107, 104, 30, 103, 31, 27, 26, 182, 179,
	0x8000u | 6, 159, 115, 118, 128, 117, 129,
	18, 115, 125, 124, 123, 144, 143, 148, 23, 147, 22, 25, 58, 55, 57, 54, 53, 177, 176,
	0x8000u | 5, 124, 115, 116, 159, 172,
	20, 157, 158, 120, 155, 119, 121, 100, 95, 94, 96, 93, 92, 3, 149, 4, 150, 0, 185, 102, 186,
	4, 155, 156, 121, 145,
	8, 137, 131, 134, 42, 47, 41, 44, 80,
	6, 124, 144, 116, 82, 171, 170,
	0x8000u | 24, 154, 153, 61, 64, 62, 63, 68, 29, 32, 35, 33, 34, 39, 111, 38, 112, 130, 133, 131, 132, 137, 14, 17, 20,
	3, 152, 140, 151,
	0x8000u | 5, 37, 40, 76, 75, 74,
	0x8000u | 5, 53, 50, 57, 56, 59
};

NJS_TEX uv_00040DA0[] = {
	{ 83, 22 },
	{ 101, 22 },
	{ 101, 46 },
	{ 101, 255 },
	{ 83, 255 },
	{ 83, 255 },
	{ 65, 255 },
	{ 65, 255 },
	{ 47, 255 },
	{ 47, 255 },
	{ 29, 255 },
	{ 33, 255 },
	{ 8, 255 },
	{ 17, 255 },
	{ 83, 255 },
	{ 101, 255 },
	{ 101, 255 },
	{ 119, 255 },
	{ 101, 255 },
	{ 83, 255 },
	{ 83, 255 },
	{ 65, 255 },
	{ 83, 255 },
	{ 67, 255 },
	{ 63, 255 },
	{ 54, 241 },
	{ 41, 218 },
	{ 62, 221 },
	{ 65, 189 },
	{ 82, 228 },
	{ 83, 189 },
	{ 101, 189 },
	{ 83, 165 },
	{ 101, 165 },
	{ 101, 141 },
	{ 119, 141 },
	{ 101, 117 },
	{ 119, 117 },
	{ 119, 94 },
	{ 137, 94 },
	{ 119, 70 },
	{ 137, 70 },
	{ 137, 46 },
	{ 155, 70 },
	{ 155, 46 },
	{ 173, 46 },
	{ 155, 22 },
	{ 173, 22 },
	{ 173, -1 },
	{ 191, 22 },
	{ 191, -1 },
	{ 208, -1 },
	{ 65, 46 },
	{ 47, 22 },
	{ 47, 46 },
	{ 28, 21 },
	{ 28, 45 },
	{ 0, 18 },
	{ 0, 44 },
	{ 17, 255 },
	{ 33, 255 },
	{ 31, 255 },
	{ 47, 255 },
	{ 47, 255 },
	{ 65, 255 },
	{ 28, 70 },
	{ 0, 70 },
	{ 28, 94 },
	{ 0, 95 },
	{ 2, 118 },
	{ 28, 192 },
	{ 17, 164 },
	{ 30, 165 },
	{ 29, 141 },
	{ 47, 141 },
	{ 29, 117 },
	{ 47, 117 },
	{ 47, 94 },
	{ 65, 94 },
	{ 47, 70 },
	{ 65, 70 },
	{ 119, 245 },
	{ 138, 236 },
	{ 117, 220 },
	{ 136, 211 },
	{ 137, 189 },
	{ 152, 206 },
	{ 155, 189 },
	{ 173, 189 },
	{ 155, 165 },
	{ 173, 165 },
	{ 173, 141 },
	{ 191, 142 },
	{ 173, 117 },
	{ 191, 118 },
	{ 191, 94 },
	{ 208, 94 },
	{ 191, 70 },
	{ 208, 70 },
	{ 208, 46 },
	{ 226, 70 },
	{ 227, 46 },
	{ 254, 47 },
	{ 227, 22 },
	{ 254, 22 },
	{ 251, 0 },
	{ 208, 255 },
	{ 191, 255 },
	{ 191, 255 },
	{ 173, 255 },
	{ 173, 255 },
	{ 155, 255 },
	{ 155, 255 },
	{ 137, 255 },
	{ 137, 255 },
	{ 119, 255 },
	{ 137, 255 },
	{ 119, 255 },
	{ 119, 255 },
	{ 101, 255 },
	{ 101, 255 },
	{ 83, 255 },
	{ 83, 255 },
	{ 65, 255 },
	{ 65, 255 },
	{ 47, 255 },
	{ 67, 255 },
	{ 46, 255 },
	{ 63, 255 },
	{ 196, 255 },
	{ 209, 255 },
	{ 211, 255 },
	{ 222, 255 },
	{ 225, 255 },
	{ 155, 165 },
	{ 155, 189 },
	{ 137, 165 },
	{ 137, 189 },
	{ 137, 141 },
	{ 155, 141 },
	{ 137, 117 },
	{ 155, 117 },
	{ 137, 94 },
	{ 155, 94 },
	{ 137, 70 },
	{ 155, 70 },
	{ 191, 22 },
	{ 173, 22 },
	{ 191, 46 },
	{ 173, 46 },
	{ 173, 70 },
	{ 155, 70 },
	{ 173, 94 },
	{ 155, 94 },
	{ 155, 117 },
	{ 155, 22 },
	{ 155, 46 },
	{ 137, 22 },
	{ 137, 46 },
	{ 191, 255 },
	{ 177, 255 },
	{ 174, 255 },
	{ 156, 255 },
	{ 156, 255 },
	{ 137, 255 },
	{ 137, 255 },
	{ 119, 255 },
	{ 101, 251 },
	{ 119, 245 },
	{ 101, 223 },
	{ 117, 220 },
	{ 119, 189 },
	{ 137, 189 },
	{ 119, 165 },
	{ 137, 165 },
	{ 137, 141 },
	{ 155, 165 },
	{ 155, 141 },
	{ 173, 141 },
	{ 155, 117 },
	{ 173, 117 },
	{ 173, 94 },
	{ 191, 94 },
	{ 173, 70 },
	{ 191, 70 },
	{ 191, 46 },
	{ 208, 46 },
	{ 191, 22 },
	{ 208, 22 },
	{ 208, -1 },
	{ 225, 0 },
	{ 82, 228 },
	{ 82, 255 },
	{ 62, 221 },
	{ 54, 241 },
	{ 83, 165 },
	{ 83, 189 },
	{ 65, 165 },
	{ 65, 189 },
	{ 83, 117 },
	{ 83, 141 },
	{ 65, 117 },
	{ 65, 141 },
	{ 65, 94 },
	{ 65, 70 },
	{ 83, 94 },
	{ 83, 94 },
	{ 83, 70 },
	{ 65, 70 },
	{ 65, 46 },
	{ 47, 70 },
	{ 47, 46 },
	{ 28, 70 },
	{ 28, 45 },
	{ 0, 70 },
	{ 0, 44 },
	{ 83, 70 },
	{ 101, 46 },
	{ 83, 46 },
	{ 83, 22 },
	{ 65, 22 },
	{ 65, -1 },
	{ 47, 22 },
	{ 47, -1 },
	{ 28, 21 },
	{ 29, -1 },
	{ 0, 18 },
	{ 2, -4 },
	{ 83, 255 },
	{ 65, 255 },
	{ 65, 255 },
	{ 47, 255 },
	{ 47, 255 },
	{ 29, 255 },
	{ 29, 255 },
	{ 8, 255 },
	{ 2, 255 },
	{ 100, 255 },
	{ 119, 255 },
	{ 119, 255 },
	{ 137, 255 },
	{ 137, 255 },
	{ 153, 255 },
	{ 156, 255 },
	{ 178, 255 },
	{ 63, 255 },
	{ 81, 255 },
	{ 83, 255 },
	{ 101, 255 },
	{ 83, 255 },
	{ 101, 255 },
	{ 101, 255 },
	{ 119, 255 },
	{ 119, 255 },
	{ 137, 255 },
	{ 137, 255 },
	{ 156, 255 },
	{ 155, 255 },
	{ 174, 255 },
	{ 173, 255 },
	{ 191, 255 },
	{ 191, 255 },
	{ 28, 192 },
	{ 47, 189 },
	{ 30, 165 },
	{ 47, 165 },
	{ 47, 141 },
	{ 65, 141 },
	{ 47, 117 },
	{ 65, 117 },
	{ 65, 94 },
	{ 83, 117 },
	{ 83, 94 },
	{ 101, 94 },
	{ 83, 70 },
	{ 101, 70 },
	{ 101, 46 },
	{ 119, 46 },
	{ 101, 22 },
	{ 119, 22 },
	{ 247, 255 },
	{ 225, 255 },
	{ 238, 255 },
	{ 17, 164 },
	{ 8, 141 },
	{ 29, 141 },
	{ 2, 118 },
	{ 29, 117 },
	{ 28, 94 },
	{ 47, 94 },
	{ 28, 70 },
	{ 47, 70 },
	{ 224, 115 },
	{ 209, 118 },
	{ 230, 145 },
	{ 212, 144 },
	{ 213, 168 },
	{ 189, 162 },
	{ 192, 190 },
	{ 208, 94 },
	{ 208, 70 },
	{ 226, 94 },
	{ 226, 70 },
	{ 137, 94 },
	{ 137, 117 },
	{ 119, 117 },
	{ 137, 141 },
	{ 119, 141 },
	{ 119, 165 },
	{ 101, 165 },
	{ 119, 189 },
	{ 101, 189 },
	{ 101, 223 },
	{ 82, 228 },
	{ 101, 251 },
	{ 82, 255 },
	{ 251, 0 },
	{ 225, 0 },
	{ 227, 22 },
	{ 208, 22 },
	{ 227, 46 },
	{ 208, 46 },
	{ 225, 255 },
	{ 208, 255 },
	{ 208, 255 },
	{ 191, 255 },
	{ 209, 255 },
	{ 191, 255 },
	{ 196, 255 },
	{ 177, 255 },
	{ 178, 255 },
	{ 156, 255 },
	{ 153, 255 },
	{ 137, 255 },
	{ 137, 255 },
	{ 119, 255 },
	{ 119, 255 },
	{ 101, 255 },
	{ 100, 255 },
	{ 81, 255 },
	{ 208, 255 },
	{ 225, 255 },
	{ 225, 255 },
	{ 251, 255 },
	{ 247, 255 },
	{ 254, 47 },
	{ 254, 72 },
	{ 226, 70 },
	{ 251, 97 },
	{ 226, 94 },
	{ 224, 115 },
	{ 208, 94 },
	{ 209, 118 },
	{ 191, 118 },
	{ 212, 144 },
	{ 191, 142 },
	{ 189, 162 },
	{ 173, 165 },
	{ 192, 190 },
	{ 173, 189 },
	{ 173, 209 },
	{ 152, 206 },
	{ 156, 224 },
	{ 136, 211 },
	{ 138, 236 },
	{ 251, 97 },
	{ 243, 122 },
	{ 224, 115 },
	{ 230, 145 },
	{ 137, -1 },
	{ 119, 22 },
	{ 119, -1 },
	{ 101, 22 },
	{ 101, -1 },
	{ 83, 22 },
	{ 83, -1 },
	{ 65, -1 },
	{ 208, 255 },
	{ 209, 255 },
	{ 225, 255 },
	{ 222, 255 },
	{ 238, 255 },
	{ 225, 255 },
	{ 28, 192 },
	{ 41, 218 },
	{ 47, 189 },
	{ 65, 189 },
	{ 47, 165 },
	{ 65, 165 },
	{ 65, 141 },
	{ 83, 165 },
	{ 83, 141 },
	{ 101, 141 },
	{ 83, 117 },
	{ 101, 117 },
	{ 101, 94 },
	{ 119, 94 },
	{ 101, 70 },
	{ 119, 70 },
	{ 119, 46 },
	{ 137, 46 },
	{ 119, 22 },
	{ 137, 22 },
	{ 137, -1 },
	{ 155, 22 },
	{ 155, -1 },
	{ 173, -1 },
	{ 46, 255 },
	{ 47, 255 },
	{ 31, 255 },
	{ 83, 70 },
	{ 83, 46 },
	{ 65, 46 },
	{ 65, 22 },
	{ 47, 22 },
	{ 101, 255 },
	{ 101, 255 },
	{ 119, 255 },
	{ 119, 255 },
	{ 137, 255 }
};

NJS_MESHSET_SADX meshlist_00041430[] = {
	{ NJD_MESHSET_TRIMESH | 0, 45, poly_000409FC, NULL, NULL, NULL, uv_00040DA0, NULL }
};

NJS_VECTOR vertex_00041448[] = {
	{ 48.80411f, 20.14628f, -254.3044f },
	{ 54.2872f, 20.14628f, -228.5583f },
	{ 54.2872f, 20.14628f, -192.5583f },
	{ 90.2872f, 20.14628f, -192.5583f },
	{ 90.2872f, 20.14628f, -228.5583f },
	{ 54.2872f, 20.14628f, -156.5583f },
	{ 54.2872f, 20.14628f, -120.5583f },
	{ 90.2872f, 20.14628f, -120.5583f },
	{ 90.2872f, 20.14628f, -156.5583f },
	{ 54.2872f, 20.14628f, -84.55835f },
	{ 54.2872f, 20.14628f, -48.55835f },
	{ 90.2872f, 20.14628f, -48.55835f },
	{ 90.2872f, 20.14628f, -84.55835f },
	{ 54.2872f, 20.14628f, -12.55833f },
	{ 54.2872f, 20.14628f, 23.44169f },
	{ 90.2872f, 20.14628f, 23.44169f },
	{ 90.2872f, 20.14628f, -12.55833f },
	{ 54.2872f, 20.14628f, 59.44171f },
	{ 54.2872f, 20.14628f, 95.4417f },
	{ 90.2872f, 20.14628f, 95.4417f },
	{ 90.2872f, 20.14628f, 59.44171f },
	{ 56.8206f, 20.14628f, 134.6491f },
	{ 56.8206f, 20.14628f, 170.6491f },
	{ 99.737f, 20.14628f, 180.955f },
	{ 92.82059f, 20.14628f, 134.6491f },
	{ 50.59267f, 20.14628f, 200.877f },
	{ -90.95589f, 20.14628f, -287.5148f },
	{ -53.50402f, 20.14628f, -279.8011f },
	{ -89.71279f, 20.14628f, -228.5583f },
	{ -89.71279f, 20.14628f, -192.5583f },
	{ -53.7128f, 20.14628f, -192.5583f },
	{ -53.7128f, 20.14628f, -228.5583f },
	{ -89.71279f, 20.14628f, -156.5583f },
	{ -89.71279f, 20.14628f, -120.5583f },
	{ -53.71279f, 20.14628f, -120.5583f },
	{ -53.71279f, 20.14628f, -156.5583f },
	{ -89.71279f, 20.14628f, -84.55835f },
	{ -89.71279f, 20.14628f, -48.55835f },
	{ -53.71279f, 20.14628f, -48.55835f },
	{ -53.71279f, 20.14628f, -84.55835f },
	{ -89.71279f, 20.14628f, -12.55833f },
	{ -89.71279f, 20.14628f, 23.44169f },
	{ -53.7128f, 20.14628f, 23.44169f },
	{ -53.7128f, 20.14628f, -12.55833f },
	{ -89.71279f, 20.14628f, 59.44171f },
	{ -89.71279f, 20.14628f, 95.4417f },
	{ -53.71279f, 20.14628f, 95.4417f },
	{ -53.71279f, 20.14628f, 59.44171f },
	{ -89.71279f, 20.14628f, 131.4417f },
	{ -89.71279f, 20.14628f, 167.4417f },
	{ -53.71279f, 20.14628f, 167.4417f },
	{ -53.71279f, 20.14628f, 131.4417f },
	{ -89.2342f, 20.14628f, 201.3428f },
	{ -53.2342f, 20.14628f, 201.3428f },
	{ -17.7128f, 20.14628f, 203.4417f },
	{ 18.2872f, 20.14628f, 203.4417f },
	{ -17.7128f, 20.14628f, 131.4417f },
	{ -17.7128f, 20.14628f, 167.4417f },
	{ 18.2872f, 20.14628f, 167.4417f },
	{ 18.2872f, 20.14628f, 131.4417f },
	{ -130.6108f, 20.14628f, -276.4953f },
	{ -161.7128f, 20.14628f, -228.5583f },
	{ -161.7128f, 20.14628f, -192.5583f },
	{ -125.7128f, 20.14628f, -192.5583f },
	{ -125.7128f, 20.14628f, -228.5583f },
	{ -161.7128f, 20.14628f, -156.5583f },
	{ -161.7128f, 20.14628f, -120.5583f },
	{ -125.7128f, 20.14628f, -120.5583f },
	{ -125.7128f, 20.14628f, -156.5583f },
	{ -161.7128f, 20.14628f, -84.55835f },
	{ -161.7128f, 20.14628f, -48.55835f },
	{ -125.7128f, 20.14628f, -48.55835f },
	{ -125.7128f, 20.14628f, -84.55835f },
	{ -161.7128f, 20.14628f, -12.55833f },
	{ -161.7128f, 20.14628f, 23.44169f },
	{ -125.7128f, 20.14628f, 23.44169f },
	{ -125.7128f, 20.14628f, -12.55833f },
	{ -161.7128f, 20.14628f, 59.44171f },
	{ -161.7128f, 20.14628f, 95.4417f },
	{ -125.7128f, 20.14628f, 95.4417f },
	{ -125.7128f, 20.14628f, 59.44171f },
	{ -188.7399f, 20.14628f, 125.4111f },
	{ 189.7287f, 20.14628f, 123.4125f },
	{ -196.0184f, 20.14628f, 95.20789f },
	{ -196.0184f, 20.14628f, 59.20789f },
	{ -198.8189f, 20.14628f, 24.48698f },
	{ -198.8189f, 20.14628f, -11.51305f },
	{ -198.7199f, 20.14628f, -48.8489f },
	{ -198.7199f, 20.14628f, -84.8489f },
	{ -196.0768f, 20.14628f, -119.5829f },
	{ -196.0768f, 20.14628f, -155.5829f },
	{ -195.6008f, 20.14628f, -191.645f },
	{ 122.292f, 20.14628f, -187.4945f },
	{ 128.054f, 20.14628f, -157.7325f },
	{ 128.054f, 20.14628f, -121.7325f },
	{ 164.0541f, 20.14628f, -121.7325f },
	{ 170.0686f, 20.14628f, -160.541f },
	{ 126.2872f, 20.14628f, -84.55835f },
	{ 126.2872f, 20.14628f, -48.55835f },
	{ 162.2872f, 20.14628f, -48.55835f },
	{ 162.2872f, 20.14628f, -84.55835f },
	{ -20.45825f, 20.14628f, -275.3933f },
	{ 17.39142f, 20.14628f, -261.717f },
	{ -17.7128f, 20.14628f, -228.5583f },
	{ -17.7128f, 20.14628f, -192.5583f },
	{ 18.2872f, 20.14628f, -192.5583f },
	{ 18.2872f, 20.14628f, -228.5583f },
	{ -17.7128f, 20.14628f, -156.5583f },
	{ -17.7128f, 20.14628f, -120.5583f },
	{ 18.2872f, 20.14628f, -120.5583f },
	{ 18.2872f, 20.14628f, -156.5583f },
	{ -17.7128f, 20.14628f, -84.55835f },
	{ -17.7128f, 20.14628f, -48.55835f },
	{ 18.2872f, 20.14628f, -48.55835f },
	{ 18.2872f, 20.14628f, -84.55835f },
	{ 195.9956f, 20.14628f, 57.97477f },
	{ 195.9956f, 20.14628f, 93.97477f },
	{ 198.6951f, 20.14628f, -12.8755f },
	{ 198.6951f, 20.14628f, 23.12453f },
	{ 197.9856f, 20.14628f, -85.27453f },
	{ 197.9856f, 20.14628f, -49.27453f },
	{ 193.0714f, 20.14628f, -116.7268f },
	{ 126.2872f, 20.14628f, 59.44171f },
	{ 126.2872f, 20.14628f, 95.4417f },
	{ 162.2872f, 20.14628f, 95.4417f },
	{ 162.2872f, 20.14628f, 59.44171f },
	{ 126.2872f, 20.14628f, -12.55833f },
	{ 126.2872f, 20.14628f, 23.44169f },
	{ 162.2872f, 20.14628f, 23.44169f },
	{ 162.2872f, 20.14628f, -12.55833f },
	{ -17.7128f, 20.14628f, -12.55833f },
	{ -17.7128f, 20.14628f, 23.44169f },
	{ 18.2872f, 20.14628f, 23.44169f },
	{ 18.2872f, 20.14628f, -12.55833f },
	{ -17.7128f, 20.14628f, 59.44171f },
	{ -17.7128f, 20.14628f, 95.4417f },
	{ 18.2872f, 20.14628f, 95.4417f },
	{ 18.2872f, 20.14628f, 59.44171f },
	{ -120.266f, 20.14628f, 194.311f },
	{ -161.7128f, 20.14628f, 131.4417f },
	{ -161.7128f, 20.14628f, 167.4417f },
	{ -125.7128f, 20.14628f, 167.4417f },
	{ -125.7128f, 20.14628f, 131.4417f },
	{ 127.1936f, 20.14628f, 132.9199f },
	{ 163.1936f, 20.14628f, 132.9199f },
	{ 205.4781f, 20.14628f, -162.6196f },
	{ 171.309f, 20.14628f, -196.7711f },
	{ 100.6618f, 20.14628f, 218.9006f },
	{ 137.162f, 20.14628f, 199.1566f },
	{ 129.2945f, 20.14628f, -229.9626f },
	{ 91.06255f, 20.14628f, -258.1774f },
	{ -193.2535f, 20.14628f, 167.3959f },
	{ -162.5426f, 20.14628f, 198.7456f },
	{ -172.273f, 20.14628f, -271.7668f },
	{ -197.9904f, 20.14628f, -232.5631f },
	{ 247.4705f, 20.14628f, -90.51511f },
	{ 231.8017f, 20.14628f, -127.5078f },
	{ 254.3154f, 20.14628f, -13.79301f },
	{ 252.4845f, 20.14628f, -51.64143f },
	{ 247.9493f, 20.14628f, 58.14186f },
	{ 252.9633f, 20.14628f, 23.03013f },
	{ -220.3348f, 20.14628f, -191.1282f },
	{ -239.5163f, 20.14628f, -155.7227f },
	{ -250.7978f, 20.14628f, -121.8649f },
	{ -255.8118f, 20.14628f, -86.12618f },
	{ -254.5583f, 20.14628f, -48.5065f },
	{ -254.5583f, 20.14628f, -10.2598f },
	{ -255.8118f, 20.14628f, 28.61392f },
	{ -250.7978f, 20.14628f, 64.35265f },
	{ 167.2462f, 20.14628f, 185.3627f },
	{ 195.45f, 20.14628f, 160.9099f },
	{ 221.7736f, 20.14628f, 125.7982f },
	{ 239.2734f, 20.14628f, 91.54215f },
	{ -239.5163f, 20.14628f, 96.95642f },
	{ -220.3348f, 20.14628f, 131.3041f },
	{ -128.2022f, 20.14628f, 225.3534f },
	{ -92.20219f, 20.14628f, 243.3534f },
	{ -54.54259f, 20.14628f, 252.7456f },
	{ -17.7128f, 20.14628f, 239.4417f },
	{ -90.22205f, 20.14628f, -326.897f },
	{ -146.5555f, 20.14628f, -306.07f },
	{ -16.93744f, 20.14628f, -312.1773f },
	{ -52.25816f, 20.14628f, -321.9965f },
	{ 18.2872f, 20.14628f, 239.4417f },
	{ 57.7454f, 20.14628f, 244.5947f },
	{ 56.61328f, 20.14628f, -281.4155f },
	{ 20.61328f, 20.14628f, -299.4155f }
};

NJS_VECTOR normal_00041D0C[] = {
	{ 0.222398f, 0, -0.974956f },
	{ 0.276234f, 0, -0.96109f },
	{ 0.333678f, 0, -0.942687f },
	{ 0.505267f, 0, -0.862963f },
	{ 0.429369f, 0, -0.903129f },
	{ 0.418366f, 0, -0.9082789f },
	{ 0.550402f, 0, -0.8349f },
	{ 0.7370189f, 0, -0.675872f },
	{ 0.606047f, 0, -0.795429f },
	{ 0.757149f, 0, -0.653242f },
	{ 0.97892f, 0, -0.204243f },
	{ 0.992139f, 0, -0.125143f },
	{ 0.886641f, 0, -0.462458f },
	{ 0.9134589f, 0, 0.406931f },
	{ 0.672804f, 0, 0.739821f },
	{ 0.832779f, 0, 0.553605f },
	{ 0.9655949f, 0, 0.260051f },
	{ 0.495342f, 0, 0.8686979f },
	{ 0.383545f, 0, 0.923522f },
	{ 0.566232f, 0, 0.824246f },
	{ 0.686146f, 0, 0.727464f },
	{ 0.317853f, 0, 0.94814f },
	{ 0.267073f, 0, 0.963676f },
	{ 0.418562f, 0, 0.908188f },
	{ 0.478461f, 0, 0.878109f },
	{ 0.210907f, 0, 0.977506f },
	{ -0.338884f, 0, -0.940828f },
	{ -0.212389f, 0, -0.977185f },
	{ -0.421353f, 0, -0.9068969f },
	{ -0.496633f, 0, -0.867961f },
	{ -0.322451f, 0, -0.946586f },
	{ -0.266592f, 0, -0.963809f },
	{ -0.597215f, 0, -0.802081f },
	{ -0.729217f, 0, -0.684283f },
	{ -0.535718f, 0, -0.8443969f },
	{ -0.405251f, 0, -0.914205f },
	{ -0.8822089f, 0, -0.470857f },
	{ -0.9917729f, 0, -0.128008f },
	{ -0.977296f, 0, -0.211877f },
	{ -0.744589f, 0, -0.667523f },
	{ -0.964061f, 0, 0.265681f },
	{ -0.826834f, 0, 0.562446f },
	{ -0.658588f, 0, 0.752503f },
	{ -0.907488f, 0, 0.420077f },
	{ -0.677752f, 0, 0.7352909f },
	{ -0.557385f, 0, 0.830254f },
	{ -0.371135f, 0, 0.928579f },
	{ -0.481082f, 0, 0.876676f },
	{ -0.466861f, 0, 0.884331f },
	{ -0.398892f, 0, 0.916998f },
	{ -0.250703f, 0, 0.968064f },
	{ -0.299837f, 0, 0.953991f },
	{ -0.347947f, 0, 0.9375139f },
	{ -0.214994f, 0, 0.976615f },
	{ -0.070359f, 0, 0.997522f },
	{ 0.078897f, 0, 0.996883f },
	{ -0.100163f, 0, 0.994971f },
	{ -0.08266599f, 0, 0.996577f },
	{ 0.09267399f, 0, 0.9956959f },
	{ 0.112244f, 0, 0.993681f },
	{ -0.476785f, 0, -0.87902f },
	{ -0.6434709f, 0, -0.76547f },
	{ -0.719248f, 0, -0.694753f },
	{ -0.626462f, 0, -0.779452f },
	{ -0.546527f, 0, -0.837441f },
	{ -0.802961f, 0, -0.596031f },
	{ -0.88771f, 0, -0.460402f },
	{ -0.8315189f, 0, -0.555497f },
	{ -0.722782f, 0, -0.691076f },
	{ -0.959139f, 0, -0.282935f },
	{ -0.997465f, 0, -0.071156f },
	{ -0.995805f, 0, -0.091502f },
	{ -0.934793f, 0, -0.355192f },
	{ -0.988598f, 0, 0.150578f },
	{ -0.936031f, 0, 0.351917f },
	{ -0.900016f, 0, 0.435856f },
	{ -0.9812919f, 0, 0.192524f },
	{ -0.857637f, 0, 0.514255f },
	{ -0.772028f, 0, 0.635588f },
	{ -0.68607f, 0, 0.727536f },
	{ -0.7914259f, 0, 0.611264f },
	{ -0.7565629f, 0, 0.65392f },
	{ 0.76474f, 0, 0.644339f },
	{ -0.827911f, 0, 0.560859f },
	{ -0.896897f, 0, 0.442241f },
	{ -0.954938f, 0, 0.296806f },
	{ -0.991775f, 0, 0.127997f },
	{ -0.9982359f, 0, -0.059364f },
	{ -0.972097f, 0, -0.23458f },
	{ -0.92119f, 0, -0.389113f },
	{ -0.854953f, 0, -0.518706f },
	{ -0.783437f, 0, -0.621471f },
	{ 0.633146f, 0, -0.774032f },
	{ 0.7298059f, 0, -0.683654f },
	{ 0.83566f, 0, -0.549248f },
	{ 0.889504f, 0, -0.456927f },
	{ 0.810459f, 0, -0.585795f },
	{ 0.9367059f, 0, -0.350117f },
	{ 0.99594f, 0, -0.090022f },
	{ 0.997529f, 0, -0.07025599f },
	{ 0.9601099f, 0, -0.279624f },
	{ -0.082424f, 0, -0.996597f },
	{ 0.080487f, 0, -0.996756f },
	{ -0.08825f, 0, -0.996098f },
	{ -0.108466f, 0, -0.9941f },
	{ 0.12152f, 0, -0.992589f },
	{ 0.098923f, 0, -0.995095f },
	{ -0.140574f, 0, -0.99007f },
	{ -0.199141f, 0, -0.979971f },
	{ 0.22231f, 0, -0.9749759f },
	{ 0.157331f, 0, -0.987546f },
	{ -0.336451f, 0, -0.941701f },
	{ -0.8281339f, 0, -0.560531f },
	{ 0.856271f, 0, -0.516526f },
	{ 0.372104f, 0, -0.9281909f },
	{ 0.900425f, 0, 0.435011f },
	{ 0.832269f, 0, 0.554372f },
	{ 0.992719f, 0, 0.120455f },
	{ 0.9573399f, 0, 0.288965f },
	{ 0.971827f, 0, -0.235697f },
	{ 0.998121f, 0, -0.061268f },
	{ 0.924942f, 0, -0.380109f },
	{ 0.796251f, 0, 0.604966f },
	{ 0.692018f, 0, 0.721881f },
	{ 0.775995f, 0, 0.630739f },
	{ 0.860514f, 0, 0.509427f },
	{ 0.981881f, 0, 0.189499f },
	{ 0.902793f, 0, 0.430075f },
	{ 0.937498f, 0, 0.347991f },
	{ 0.988881f, 0, 0.148708f },
	{ -0.569007f, 0, 0.822333f },
	{ -0.269921f, 0, 0.962882f },
	{ 0.300051f, 0, 0.953923f },
	{ 0.613265f, 0, 0.789877f },
	{ -0.173114f, 0, 0.984902f },
	{ -0.126982f, 0, 0.991905f },
	{ 0.142185f, 0, 0.98984f },
	{ 0.193495f, 0, 0.981101f },
	{ -0.458923f, 0, 0.888476f },
	{ -0.690716f, 0, 0.723126f },
	{ -0.618468f, 0, 0.78581f },
	{ -0.521395f, 0, 0.8533159f },
	{ -0.5956489f, 0, 0.8032449f },
	{ 0.601338f, 0, 0.798995f },
	{ 0.694174f, 0, 0.719807f },
	{ 0.854171f, 0, -0.519992f },
	{ 0.732946f, 0, -0.680286f },
	{ 0.368319f, 0, 0.9297f },
	{ 0.5041659f, 0, 0.863607f },
	{ 0.559012f, 0, -0.82916f },
	{ 0.383494f, 0, -0.923543f },
	{ -0.685481f, 0, 0.7280909f },
	{ -0.565738f, 0, 0.824585f },
	{ -0.5900609f, 0, -0.807359f },
	{ -0.710259f, 0, -0.70394f },
	{ 0.9776f, 0, -0.210469f },
	{ 0.93201f, 0, -0.362433f },
	{ 0.99586f, 0, 0.090904f },
	{ 0.99835f, 0, -0.057424f },
	{ 0.933892f, 0, 0.357555f },
	{ 0.973066f, 0, 0.230525f },
	{ -0.818633f, 0, -0.574318f },
	{ -0.89553f, 0, -0.445001f },
	{ -0.947035f, 0, -0.32113f },
	{ -0.982007f, 0, -0.188847f },
	{ -0.998987f, 0, -0.044991f },
	{ -0.994465f, 0, 0.105069f },
	{ -0.9683999f, 0, 0.249404f },
	{ -0.926666f, 0, 0.375886f },
	{ 0.602673f, 0, 0.797988f },
	{ 0.7038929f, 0, 0.710306f },
	{ 0.8069389f, 0, 0.5906349f },
	{ 0.881427f, 0, 0.472321f },
	{ -0.872004f, 0, 0.489498f },
	{ -0.7935539f, 0, 0.6084999f },
	{ -0.436872f, 0, 0.899524f },
	{ -0.31005f, 0, 0.95072f },
	{ -0.182495f, 0, 0.983207f },
	{ -0.061236f, 0, 0.998123f },
	{ -0.294983f, 0, -0.955502f },
	{ -0.476541f, 0, -0.879152f },
	{ -0.058747f, 0, -0.998273f },
	{ -0.177903f, 0, -0.9840479f },
	{ 0.06867699f, 0, 0.9976389f },
	{ 0.203329f, 0, 0.9791099f },
	{ 0.228548f, 0, -0.973533f },
	{ 0.081158f, 0, -0.9967009f }
};

NJS_MODEL_SADX attach_000425D0 = { vertex_00041448, normal_00041D0C, LengthOfArray(vertex_00041448), meshlist_00041430, matlist_000409E8, LengthOfArray(meshlist_00041430), LengthOfArray(matlist_000409E8),{ -0.748192f, 20.14628f, -37.07568f }, 386.0749f, NULL };

NJS_OBJECT object_000425F8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000425D0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

/* NINJA Basic (with Sonic Adventure DX additions) model
*
* Generated by SAMDL
*
*/

enum CHAOS4_NUMATexName
{
	CHAOS4_NUMATexName_s_los_wt00,
	CHAOS4_NUMATexName_s_los_wt01,
	CHAOS4_NUMATexName_s_los_wt02,
	CHAOS4_NUMATexName_s_los_wt03,
	CHAOS4_NUMATexName_s_los_wt04,
	CHAOS4_NUMATexName_s_los_wt05,
	CHAOS4_NUMATexName_s_los_wt06,
	CHAOS4_NUMATexName_s_los_wt07,
	CHAOS4_NUMATexName_s_los_wt08,
	CHAOS4_NUMATexName_s_los_wt09,
	CHAOS4_NUMATexName_s_los_wt10,
	CHAOS4_NUMATexName_s_los_wt11,
	CHAOS4_NUMATexName_s_los_wt12,
	CHAOS4_NUMATexName_s_los_wt13
};

NJS_MATERIAL matlist_0003D934[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, CHAOS4_NUMATexName_s_los_wt00, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC }
};

Sint16 poly_0003D948[] = {
	10, 12, 11, 13,
	8, 10, 9, 11,
	0, 2, 1, 3,
	14, 0, 15, 1,
	12, 14, 13, 15,
	6, 8, 7, 9,
	2, 4, 3, 5,
	4, 6, 5, 7
};

NJS_TEX uv_0003D988[] = {
	{ 765, 255 },
	{ 637, 255 },
	{ 765, 3 },
	{ 637, 3 },
	{ 892, 255 },
	{ 765, 255 },
	{ 892, 3 },
	{ 765, 3 },
	{ 382, 255 },
	{ 255, 255 },
	{ 382, 3 },
	{ 255, 3 },
	{ 510, 255 },
	{ 382, 255 },
	{ 510, 3 },
	{ 382, 3 },
	{ 637, 255 },
	{ 510, 255 },
	{ 637, 3 },
	{ 510, 3 },
	{ 1020, 255 },
	{ 892, 255 },
	{ 1020, 3 },
	{ 892, 3 },
	{ 255, 255 },
	{ 127, 255 },
	{ 255, 3 },
	{ 127, 3 },
	{ 127, 255 },
	{ 0, 255 },
	{ 127, 3 },
	{ 0, 3 }
};

NJS_MESHSET_SADX meshlist_0003DA08[] = {
	{ NJD_MESHSET_4 | 0, 8, poly_0003D948, NULL, NULL, NULL, uv_0003D988, NULL }
};

NJS_VECTOR vertex_0003DA20[] = {
	{ 8.914833f, 0, 0 },
	{ 11.24877f, 100, 0 },
	{ 6.303742f, 0, -6.290254f },
	{ 7.954087f, 100, -7.937067f },
	{ 0, 0, -8.895759f },
	{ 0, 100, -11.2247f },
	{ -6.303742f, 0, -6.290254f },
	{ -7.954087f, 100, -7.937067f },
	{ -8.914833f, 0, 0 },
	{ -11.24877f, 100, 0 },
	{ -6.303742f, 0, 6.290254f },
	{ -7.954087f, 100, 7.937067f },
	{ 0, 0, 8.895759f },
	{ 0, 100, 11.2247f },
	{ 6.303742f, 0, 6.290254f },
	{ 7.954087f, 100, 7.937067f }
};

NJS_VECTOR normal_0003DAE0[] = {
	{ 0.999728f, -0.023333f, 0 },
	{ 0.999728f, -0.023333f, 0 },
	{ 0.706372f, -0.023308f, -0.7074569f },
	{ 0.706386f, -0.023308f, -0.707443f },
	{ 0, -0.023283f, -0.999729f },
	{ 0, -0.023283f, -0.999729f },
	{ -0.706372f, -0.023308f, -0.7074569f },
	{ -0.706386f, -0.023308f, -0.707443f },
	{ -0.999728f, -0.023333f, 0 },
	{ -0.999728f, -0.023333f, 0 },
	{ -0.706372f, -0.023308f, 0.7074569f },
	{ -0.706386f, -0.023308f, 0.707443f },
	{ 0, -0.023283f, 0.999729f },
	{ 0, -0.023283f, 0.999729f },
	{ 0.706372f, -0.023308f, 0.7074569f },
	{ 0.706386f, -0.023308f, 0.707443f }
};

NJS_MODEL_SADX attach_0003DBA0 = { vertex_0003DA20, normal_0003DAE0, LengthOfArray(vertex_0003DA20), meshlist_0003DA08, matlist_0003D934, LengthOfArray(meshlist_0003DA08), LengthOfArray(matlist_0003D934),{ 0, 50, 0 }, 51.24445f, NULL };

NJS_OBJECT object_0003DBC8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0003DBA0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
