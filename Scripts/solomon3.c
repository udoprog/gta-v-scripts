#pragma region Local Var //{
var uLocal_0 = 0;
var uLocal_1 = 0;
int iLocal_2 = 0;
int iLocal_3 = 0;
int iLocal_4 = 0;
int iLocal_5 = 0;
int iLocal_6 = 0;
int iLocal_7 = 0;
int iLocal_8 = 0;
int iLocal_9 = 0;
int iLocal_10 = 0;
int iLocal_11 = 0;
var uLocal_12 = 0;
var uLocal_13 = 0;
float fLocal_14 = 0f;
var uLocal_15 = 0;
var uLocal_16 = 0;
int iLocal_17 = 0;
var uLocal_18 = 0;
var uLocal_19 = 0;
char *sLocal_20 = NULL;
float fLocal_21 = 0f;
var uLocal_22 = 0;
var uLocal_23 = 0;
var uLocal_24 = 0;
float fLocal_25 = 0f;
float fLocal_26 = 0f;
var uLocal_27 = 0;
var *uLocal_28 = NULL;
var uLocal_29 = 0;
var uLocal_30 = -1;
var uLocal_31 = 0;
var uLocal_32 = 0;
var uLocal_33 = 0;
var uLocal_34 = 0;
var uLocal_35 = 0;
var uLocal_36 = 0;
var uLocal_37 = 1000;
var uLocal_38 = 1000;
var uLocal_39 = 0;
int iLocal_40 = 0;
int iLocal_41 = 0;
int iLocal_42 = 0;
int iLocal_43 = 0;
int iLocal_44 = 0;
var uLocal_45 = 0;
int iLocal_46 = 0;
int iLocal_47 = 0;
int iLocal_48 = 0;
int iLocal_49 = 0;
int iLocal_50 = 0;
float fLocal_51 = 0f;
float fLocal_52 = 0f;
float fLocal_53 = 0f;
int iLocal_54 = 0;
int iLocal_55 = 0;
var uLocal_56 = 0;
var uLocal_57 = 0;
float fLocal_58 = 0f;
float fLocal_59 = 0f;
float fLocal_60 = 0f;
var uLocal_61 = 0;
var uLocal_62 = 0;
var uLocal_63 = 0;
var uLocal_64 = 0;
var uLocal_65 = 0;
int iLocal_66 = 0;
int iLocal_67 = 0;
int iLocal_68 = 0;
int iLocal_69 = 0;
var uLocal_70 = 0;
var uLocal_71 = 0;
var uLocal_72 = 0;
var uLocal_73 = 0;
var uLocal_74 = 0;
int iLocal_75 = 0;
int iLocal_76 = 0;
bool bLocal_77 = 0;
bool bLocal_78 = 0;
bool bLocal_79 = 0;
bool bLocal_80 = 0;
bool bLocal_81 = 0;
int iLocal_82 = 0;
int iLocal_83 = 0;
bool bLocal_84 = 0;
bool bLocal_85 = 0;
int iLocal_86 = 0;
bool bLocal_87 = 0;
int iLocal_88 = 0;
int iLocal_89 = 0;
int iLocal_90 = 0;
int iLocal_91 = 0;
int iLocal_92 = 0;
bool bLocal_93 = 0;
bool bLocal_94 = 0;
int iLocal_95 = 0;
int iLocal_96 = 0;
bool bLocal_97 = 0;
var uLocal_98 = 0;
bool bLocal_99 = 0;
bool bLocal_100 = 0;
bool bLocal_101 = 0;
bool bLocal_102 = 0;
bool bLocal_103 = 0;
int iLocal_104 = 0;
bool bLocal_105 = 0;
int iLocal_106 = 0;
bool bLocal_107 = 0;
bool bLocal_108 = 0;
float fLocal_109[175] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_285[175] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_461[175] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_637[175] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_813[175] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_989 = 0f;
float fLocal_990 = 0f;
float fLocal_991 = 0f;
float fLocal_992 = 0f;
float fLocal_993[35] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_1029[35] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_1065[35] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_1101[35] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_1137[35] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_1173[35] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_1209[15] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_1225[15] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_1241[15] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_1257[15] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_1273 = 0f;
float fLocal_1274 = 0f;
float fLocal_1275 = 0f;
float fLocal_1276 = 0f;
float fLocal_1277 = 0f;
float fLocal_1278 = 0f;
float fLocal_1279 = 0f;
float fLocal_1280 = 0f;
float fLocal_1281 = 0f;
float fLocal_1282 = 0f;
float fLocal_1283 = 0f;
float fLocal_1284 = 0f;
float fLocal_1285 = 0f;
float fLocal_1286 = 0f;
float fLocal_1287 = 0f;
float fLocal_1288 = 0f;
float fLocal_1289 = 0f;
float fLocal_1290 = 0f;
float fLocal_1291 = 0f;
float fLocal_1292 = 0f;
float fLocal_1293 = 0f;
int iLocal_1294[175] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_1470[175] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_1646[175] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_1822[35] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_1858[35] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_1894[35] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_1930[15] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_1946 = 0;
int iLocal_1947 = 0;
int iLocal_1948 = 0;
int iLocal_1949 = 0;
int iLocal_1950 = 0;
int iLocal_1951 = 0;
int iLocal_1952 = 0;
int iLocal_1953 = 0;
int iLocal_1954 = 0;
int iLocal_1955 = 0;
int iLocal_1956 = 0;
int iLocal_1957 = 0;
int iLocal_1958 = 0;
int iLocal_1959 = 0;
int iLocal_1960 = 0;
int iLocal_1961 = 0;
int iLocal_1962 = 0;
vector3 vLocal_1963[175] = {
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
vector3 vLocal_2489[15] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
						   {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
						   {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
vector3 vLocal_2535[35] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
						   {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
						   {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
						   {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
						   {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
						   {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
vector3 vLocal_2641 = {0f, 0f, 0f};
vector3 vLocal_2644 = {0f, 0f, 0f};
vector3 vLocal_2647 = {0f, 0f, 0f};
vector3 vLocal_2650 = {0f, 0f, 0f};
vector3 vLocal_2653 = {0f, 0f, 0f};
vector3 vLocal_2656 = {0f, 0f, 0f};
vector3 vLocal_2659 = {0f, 0f, 0f};
vector3 vLocal_2662 = {0f, 0f, 0f};
vector3 vLocal_2665 = {0f, 0f, 0f};
char cLocal_2668[64] = "";
var uLocal_2676 = 0;
var uLocal_2677 = 0;
var uLocal_2678 = 0;
var uLocal_2679 = 0;
var uLocal_2680 = 0;
var uLocal_2681 = 0;
var uLocal_2682 = 0;
var uLocal_2683 = 0;
int iLocal_2684 = 0;
int iLocal_2685[175] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_2861[15] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_2877[35] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_2913 = 0;
int iLocal_2914 = 0;
int iLocal_2915 = 0;
int iLocal_2916[175] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
						0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_3092[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_3105[15] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_3121[35] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_3157[6] = {0, 0, 0, 0, 0, 0};
int iLocal_3164 = 0;
int iLocal_3165 = 0;
int iLocal_3166 = 0;
var uLocal_3167 = 12;
var uLocal_3168 = 0;
var uLocal_3169 = 0;
var uLocal_3170 = 0;
var uLocal_3171 = 0;
var uLocal_3172 = 0;
var uLocal_3173 = 0;
var uLocal_3174 = 0;
var uLocal_3175 = 0;
var uLocal_3176 = 0;
var uLocal_3177 = 0;
var uLocal_3178 = 0;
var uLocal_3179 = 0;
int iLocal_3180 = 0;
int iLocal_3181 = 0;
int iLocal_3182 = 0;
int iLocal_3183 = 0;
int iLocal_3184 = 0;
int iLocal_3185 = 0;
int iLocal_3186 = 0;
int iLocal_3187 = 0;
int iLocal_3188 = 0;
int iLocal_3189 = 0;
int iLocal_3190 = 0;
int iLocal_3191 = 0;
int iLocal_3192 = 0;
int iLocal_3193 = 0;
int iLocal_3194 = 0;
int iLocal_3195 = 0;
int iLocal_3196 = 0;
int iLocal_3197 = 0;
int iLocal_3198 = 0;
int iLocal_3199 = 0;
int iLocal_3200 = 0;
int iLocal_3201 = 0;
int iLocal_3202 = 0;
int iLocal_3203 = 0;
int iLocal_3204 = 0;
int iLocal_3205 = 0;
int iLocal_3206 = 0;
int iLocal_3207 = 0;
int iLocal_3208 = 0;
int iLocal_3209 = 0;
int iLocal_3210 = 0;
int iLocal_3211 = 0;
int iLocal_3212 = 0;
int iLocal_3213 = 0;
int iLocal_3214 = 0;
int iLocal_3215 = 0;
int iLocal_3216 = 0;
int iLocal_3217 = 0;
int iLocal_3218 = 0;
int iLocal_3219 = 0;
int iLocal_3220 = 0;
int iLocal_3221 = 0;
int iLocal_3222 = 0;
var uLocal_3223[4] = {0, 0, 0, 0};
int iLocal_3228 = 0;
var uLocal_3229[3] = {0, 0, 0};
var uLocal_3233[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_3245 = 0;
int iLocal_3246 = 0;
int iLocal_3247 = 0;
int iLocal_3248 = 0;
int iLocal_3249 = 0;
int iLocal_3250 = 0;
var uLocal_3251[2] = {0, 0};
var uLocal_3254[2] = {0, 0};
int iLocal_3257 = 0;
int iLocal_3258 = 0;
int iLocal_3259 = 0;
var uLocal_3260[2] = {0, 0};
int iLocal_3263 = 0;
int iLocal_3264 = 0;
int iLocal_3265 = 0;
int iLocal_3266 = 0;
int iLocal_3267 = 0;
var uLocal_3268[2] = {0, 0};
int iLocal_3271 = 0;
var uLocal_3272[2] = {0, 0};
int iLocal_3275 = 0;
int iLocal_3276 = 0;
int iLocal_3277 = 0;
int iLocal_3278 = 0;
var uLocal_3279[2] = {0, 0};
int iLocal_3282 = 0;
int iLocal_3283 = 0;
int iLocal_3284 = 0;
int iLocal_3285 = 0;
int iLocal_3286 = 0;
int iLocal_3287 = 0;
int iLocal_3288 = 0;
int iLocal_3289 = 0;
int iLocal_3290 = 0;
int iLocal_3291 = 0;
int iLocal_3292 = 0;
int iLocal_3293 = 0;
vector3 vLocal_3294 = {0f, 0f, 0f};
vector3 vLocal_3297 = {0f, 0f, 0f};
vector3 vLocal_3300 = {0f, 0f, 0f};
vector3 vLocal_3303 = {0f, 0f, 0f};
var uLocal_3306 = 0;
var uLocal_3307 = 0;
var uLocal_3308 = 0;
var uLocal_3309 = 0;
var uLocal_3310 = 0;
var uLocal_3311 = 0;
vector3 vLocal_3312 = {0f, 0f, 0f};
vector3 vLocal_3315 = {0f, 0f, 0f};
vector3 vLocal_3318 = {0f, 0f, 0f};
float fLocal_3321 = 0f;
float fLocal_3322 = 0f;
float fLocal_3323 = 0f;
float fLocal_3324 = 0f;
float fLocal_3325 = 0f;
float fLocal_3326 = 0f;
int iLocal_3327 = 0;
int iLocal_3328 = 0;
var uLocal_3329 = 0;
int iLocal_3330 = 0;
int iLocal_3331 = 0;
int iLocal_3332 = 0;
int iLocal_3333 = 0;
int iLocal_3334 = 0;
int iLocal_3335 = 0;
int iLocal_3336 = 0;
int iLocal_3337 = 0;
int iLocal_3338 = 0;
int iLocal_3339 = 0;
int iLocal_3340 = 0;
int iLocal_3341 = 0;
int iLocal_3342 = 0;
int iLocal_3343 = 0;
int iLocal_3344 = 0;
int iLocal_3345 = 0;
int iLocal_3346 = 0;
int iLocal_3347 = 0;
int iLocal_3348 = 0;
int iLocal_3349 = 0;
int iLocal_3350 = 0;
int iLocal_3351 = 0;
int iLocal_3352 = 0;
int iLocal_3353 = 0;
int iLocal_3354 = 0;
int iLocal_3355 = 0;
int iLocal_3356 = 0;
int iLocal_3357 = 0;
int iLocal_3358 = 0;
int iLocal_3359 = 0;
int iLocal_3360 = 0;
int iLocal_3361 = 0;
int iLocal_3362 = 0;
int iLocal_3363 = 0;
int iLocal_3364 = 0;
int iLocal_3365[3] = {0, 0, 0};
int iLocal_3369[2] = {0, 0};
int iLocal_3372 = 0;
int iLocal_3373 = 0;
int iLocal_3374 = 0;
int iLocal_3375 = 0;
int iLocal_3376 = 0;
int iLocal_3377 = 0;
int iLocal_3378 = 0;
int iLocal_3379 = 0;
int iLocal_3380 = 0;
int iLocal_3381 = 0;
int iLocal_3382 = 0;
int iLocal_3383 = 0;
int iLocal_3384 = 0;
int iLocal_3385 = 0;
int iLocal_3386 = 0;
int iLocal_3387 = 0;
int iLocal_3388 = 0;
int iLocal_3389 = 0;
int iLocal_3390 = 0;
int iLocal_3391 = 0;
int iLocal_3392 = 0;
int iLocal_3393 = 0;
int iLocal_3394 = 0;
int iLocal_3395 = 0;
int iLocal_3396 = 0;
int iLocal_3397 = 0;
int iLocal_3398 = 0;
int iLocal_3399 = 0;
var uLocal_3400 = 0;
int iLocal_3401 = 0;
int iLocal_3402 = 0;
int iLocal_3403 = 0;
int iLocal_3404[25] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_3430 = 0;
int iLocal_3431 = 0;
int iLocal_3432 = 0;
int iLocal_3433 = 0;
int iLocal_3434 = 0;
int iLocal_3435 = 0;
int iLocal_3436 = 0;
int iLocal_3437 = 0;
int iLocal_3438 = 0;
int iLocal_3439 = 0;
int iLocal_3440 = 0;
int iLocal_3441 = 0;
int iLocal_3442 = 0;
int iLocal_3443 = 0;
int iLocal_3444 = 0;
int iLocal_3445[19] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_3465 = 0;
int iLocal_3466 = 0;
int iLocal_3467 = 0;
int iLocal_3468 = 0;
int iLocal_3469 = 0;
int iLocal_3470 = 0;
int iLocal_3471 = 0;
int iLocal_3472 = 0;
int iLocal_3473 = 0;
int iLocal_3474 = 0;
int iLocal_3475 = 0;
int iLocal_3476 = 0;
int iLocal_3477 = 0;
int iLocal_3478 = 0;
int iLocal_3479 = 0;
int iLocal_3480[2] = {0, 0};
int iLocal_3483[2] = {0, 0};
int iLocal_3486 = 0;
int iLocal_3487 = 0;
int iLocal_3488 = 0;
int iLocal_3489 = 0;
int iLocal_3490[7] = {0, 0, 0, 0, 0, 0, 0};
int iLocal_3498[7] = {0, 0, 0, 0, 0, 0, 0};
int iLocal_3506 = 0;
int iLocal_3507 = 0;
int iLocal_3508 = 0;
int iLocal_3509 = 0;
int iLocal_3510 = 0;
int iLocal_3511 = 0;
int iLocal_3512 = 0;
int iLocal_3513 = 0;
int iLocal_3514 = 0;
int iLocal_3515 = 0;
int iLocal_3516[3] = {0, 0, 0};
int iLocal_3520[2] = {0, 0};
int iLocal_3523 = 0;
int iLocal_3524[4] = {0, 0, 0, 0};
int iLocal_3529 = 0;
int iLocal_3530 = 0;
int iLocal_3531 = 0;
int iLocal_3532 = 0;
int iLocal_3533 = 0;
int iLocal_3534 = 0;
int iLocal_3535 = 0;
int iLocal_3536 = 0;
int iLocal_3537 = 0;
int iLocal_3538 = 0;
int iLocal_3539 = 0;
int iLocal_3540 = 0;
int iLocal_3541 = 0;
int iLocal_3542 = 0;
int iLocal_3543[3] = {0, 0, 0};
int iLocal_3547[3] = {0, 0, 0};
int iLocal_3551 = 0;
int iLocal_3552 = 0;
int iLocal_3553 = 0;
int iLocal_3554 = 0;
int iLocal_3555 = 0;
int iLocal_3556 = 0;
int iLocal_3557 = 0;
int iLocal_3558 = 0;
int iLocal_3559 = 0;
int iLocal_3560 = 0;
int iLocal_3561 = 0;
int iLocal_3562 = 0;
int iLocal_3563 = 0;
int iLocal_3564 = 0;
int iLocal_3565 = 0;
int iLocal_3566 = 0;
int iLocal_3567 = 0;
int iLocal_3568 = 0;
int iLocal_3569 = 0;
int iLocal_3570 = 0;
int iLocal_3571[4] = {0, 0, 0, 0};
int iLocal_3576 = 0;
char *sLocal_3577 = NULL;
var *uLocal_3578 = NULL;
var uLocal_3579 = 0;
var uLocal_3580 = 0;
var uLocal_3581 = 0;
var uLocal_3582 = 0;
var uLocal_3583 = 0;
var uLocal_3584 = 0;
var uLocal_3585 = 0;
var uLocal_3586 = 0;
var uLocal_3587 = 0;
var uLocal_3588 = 0;
var uLocal_3589 = 0;
var uLocal_3590 = 0;
var uLocal_3591 = 0;
var uLocal_3592 = 0;
var uLocal_3593 = 0;
var uLocal_3594 = 0;
var uLocal_3595 = 0;
var uLocal_3596 = 0;
var uLocal_3597 = 0;
var uLocal_3598 = 0;
var uLocal_3599 = 0;
var uLocal_3600 = 0;
var uLocal_3601 = 0;
var uLocal_3602 = 0;
var uLocal_3603 = 0;
var uLocal_3604 = 0;
var uLocal_3605 = 0;
var uLocal_3606 = 0;
var uLocal_3607 = 0;
var uLocal_3608 = 0;
var uLocal_3609 = 0;
var uLocal_3610 = 0;
var uLocal_3611 = 0;
var uLocal_3612 = 0;
var uLocal_3613 = 0;
var uLocal_3614 = 0;
var uLocal_3615 = 0;
var uLocal_3616 = 0;
var uLocal_3617 = 0;
var uLocal_3618 = 0;
var uLocal_3619 = 0;
var uLocal_3620 = 0;
var uLocal_3621 = 0;
var uLocal_3622 = 0;
var uLocal_3623 = 0;
var uLocal_3624 = 0;
var uLocal_3625 = 0;
var uLocal_3626 = 0;
var uLocal_3627 = 0;
var uLocal_3628 = 0;
var uLocal_3629 = 0;
var uLocal_3630 = 0;
var uLocal_3631 = 0;
var uLocal_3632 = 0;
var uLocal_3633 = 0;
var uLocal_3634 = 0;
var uLocal_3635 = 0;
var uLocal_3636 = 0;
var uLocal_3637 = 0;
var uLocal_3638 = 0;
var uLocal_3639 = 0;
var uLocal_3640 = 0;
var uLocal_3641 = 0;
var uLocal_3642 = 0;
var uLocal_3643 = 0;
var uLocal_3644 = 0;
var uLocal_3645 = 0;
var uLocal_3646 = 0;
var uLocal_3647 = 0;
var uLocal_3648 = 0;
var uLocal_3649 = 0;
var uLocal_3650 = 0;
var uLocal_3651 = 0;
var uLocal_3652 = 0;
var uLocal_3653 = 0;
var uLocal_3654 = 0;
var uLocal_3655 = 0;
var uLocal_3656 = 0;
var uLocal_3657 = 0;
var uLocal_3658 = 0;
var uLocal_3659 = 0;
var uLocal_3660 = 0;
var uLocal_3661 = 0;
var uLocal_3662 = 0;
var uLocal_3663 = 0;
var uLocal_3664 = 0;
var uLocal_3665 = 0;
var uLocal_3666 = 0;
var uLocal_3667 = 0;
var uLocal_3668 = 0;
var uLocal_3669 = 0;
var uLocal_3670 = 0;
var uLocal_3671 = 0;
var uLocal_3672 = 0;
var uLocal_3673 = 0;
var uLocal_3674 = 0;
var uLocal_3675 = 0;
var uLocal_3676 = 0;
var uLocal_3677 = 0;
var uLocal_3678 = 0;
var uLocal_3679 = 0;
var uLocal_3680 = 0;
var uLocal_3681 = 0;
var uLocal_3682 = 0;
var uLocal_3683 = 0;
var uLocal_3684 = 0;
var uLocal_3685 = 0;
var uLocal_3686 = 0;
var uLocal_3687 = 0;
var uLocal_3688 = 0;
var uLocal_3689 = 0;
var uLocal_3690 = 0;
var uLocal_3691 = 0;
var uLocal_3692 = 0;
var uLocal_3693 = 0;
var uLocal_3694 = 0;
var uLocal_3695 = 0;
var uLocal_3696 = 0;
var uLocal_3697 = 0;
var uLocal_3698 = 0;
var uLocal_3699 = 0;
var uLocal_3700 = 0;
var uLocal_3701 = 0;
var uLocal_3702 = 0;
var uLocal_3703 = 0;
var uLocal_3704 = 0;
var uLocal_3705 = 0;
var uLocal_3706 = 0;
var uLocal_3707 = 0;
var uLocal_3708 = 0;
var uLocal_3709 = 0;
var uLocal_3710 = 0;
var uLocal_3711 = 0;
var uLocal_3712 = 0;
var uLocal_3713 = 0;
var uLocal_3714 = 0;
var uLocal_3715 = 0;
var uLocal_3716 = 0;
var uLocal_3717 = 0;
var uLocal_3718 = 0;
var uLocal_3719 = 0;
var uLocal_3720 = 0;
var uLocal_3721 = 0;
var uLocal_3722 = 0;
var uLocal_3723 = 0;
var uLocal_3724 = 0;
var uLocal_3725 = 0;
var uLocal_3726 = 0;
var uLocal_3727 = 0;
var uLocal_3728 = 0;
var uLocal_3729 = 0;
var uLocal_3730 = 0;
var uLocal_3731 = 0;
var uLocal_3732 = 0;
var uLocal_3733 = 0;
var uLocal_3734 = 0;
var uLocal_3735 = 0;
var uLocal_3736 = 0;
var uLocal_3737 = 0;
var uLocal_3738 = 0;
var uLocal_3739 = 0;
var uLocal_3740 = 0;
var uLocal_3741 = 0;
var uLocal_3742 = 0;
var *uLocal_3743 = NULL;
var uLocal_3744 = 0;
var uLocal_3745 = 0;
var uLocal_3746 = 0;
var uLocal_3747 = 0;
var uLocal_3748 = 0;
var uLocal_3749 = 0;
var uLocal_3750 = 21;
var uLocal_3751 = 6;
var uLocal_3752 = 0;
var uLocal_3753 = 0;
var uLocal_3754 = 0;
var uLocal_3755[3] = {0, 0, 0};
int iLocal_3759 = 0;
int iLocal_3760 = 0;
int iLocal_3761 = 0;
int iLocal_3762 = 0;
int iLocal_3763 = 0;
int iLocal_3764 = 0;
#pragma endregion //}

void __EntryFunction__() {
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_55 = 3;
	fLocal_58 = 80f;
	fLocal_59 = 140f;
	fLocal_60 = 180f;
	iLocal_66 = 1;
	iLocal_67 = 65;
	iLocal_68 = 49;
	iLocal_69 = 64;
	uLocal_73 = ui::_0x4A9923385BDB9DAD();
	uLocal_74 = ui::_get_blip_info_id_iterator();
	bLocal_78 = true;
	bLocal_85 = true;
	bLocal_107 = true;
	fLocal_1273 = 120f;
	fLocal_1274 = 0f;
	fLocal_1276 = 1f;
	fLocal_1277 = 0f;
	fLocal_1278 = 1f;
	fLocal_1279 = 30f;
	fLocal_1281 = 1f;
	fLocal_1282 = 5f;
	fLocal_1283 = 1f;
	fLocal_1284 = 1f;
	fLocal_1285 = 100f;
	fLocal_1286 = 100f;
	fLocal_1287 = 0f;
	fLocal_1288 = 7000f;
	fLocal_1289 = 0f;
	fLocal_1290 = 0f;
	fLocal_1291 = 0.3f;
	fLocal_1292 = 0.5f;
	fLocal_1293 = 50f;
	iLocal_1949 = -1;
	iLocal_1957 = -1;
	iLocal_1958 = -1;
	vLocal_3294 = {-1024.1f, -485.3321f, 35.9816f};
	vLocal_3297 = {-428.0263f, -2153.577f, 9.2997f};
	vLocal_3300 = {-498.7f, -2136.5f, 8.4f};
	vLocal_3312 = {-272.8615f, -2186.932f, 9.3174f};
	fLocal_3321 = 209.7233f;
	fLocal_3322 = 90.947f;
	fLocal_3325 = 46.7161f;
	if (func_396(0)) {
		func_389(24, 0);
	}
	audio::register_script_with_audio(0);
	gameplay::_set_weather_type_over_time("EXTRASUNNY", 20f);
	if (player::has_force_cleanup_occurred(3)) {
		func_387(player::player_ped_id(), 0);
		audio::trigger_music_event("TRV4_FAIL");
		func_385();
		func_383();
	}
	func_382(1);
	gameplay::set_mission_flag(1);
	iLocal_3181 = 0;
	iLocal_3180 = 0;
	while (true) {
		unk1::_0x208784099002BC30("M_LegalTrouble", 0);
		if (iLocal_3207 > gameplay::get_game_timer()) {
			unk1::_0xAF66DCEE6609B148();
		}
		func_378();
		func_377();
		func_375();
		func_371();
		func_370();
		switch (iLocal_3180) {
		case 0: func_366(); break;

		case 1: func_321(); break;

		case 2: func_315(); break;

		case 3: func_312(); break;

		case 4: func_223(); break;

		case 5: func_211(); break;

		case 6: func_205(); break;

		case 7: func_195(); break;

		case 8: func_5(); break;

		case 9: break;

		case 10: break;

		case 11: break;
		}
		system::wait(0);
		func_1();
	}
}

// Position - 0x28A
void func_1() {
	if (iLocal_3443 == 0) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			func_4(player::player_ped_id(), 476);
			iLocal_3443 = 1;
		}
	}
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (iLocal_3444 == 0) {
				iLocal_3275 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
				if (entity::does_entity_exist(iLocal_3275)) {
					if (vehicle::is_vehicle_driveable(iLocal_3275, 0)) {
						func_3(iLocal_3275, -1);
						func_4(iLocal_3275, 479);
						iLocal_3444 = 1;
					}
				}
			}
		}
		else {
			func_4(0, 479);
			func_3(0, -1);
			if (iLocal_3444 == 1) {
				iLocal_3444 = 0;
			}
		}
	}
	if (iLocal_3445[0] == 0) {
		if (entity::does_entity_exist(uLocal_3229[0])) {
			if (ped::is_ped_injured(uLocal_3229[0])) {
				iLocal_3191++;
				iLocal_3445[0] = 1;
			}
		}
	}
	if (iLocal_3445[1] == 0) {
		if (entity::does_entity_exist(uLocal_3229[1])) {
			if (ped::is_ped_injured(uLocal_3229[1])) {
				iLocal_3191++;
				iLocal_3445[1] = 1;
			}
		}
	}
	if (iLocal_3445[2] == 0) {
		if (entity::does_entity_exist(uLocal_3229[2])) {
			if (ped::is_ped_injured(uLocal_3229[2])) {
				iLocal_3191++;
				iLocal_3445[2] = 1;
			}
		}
	}
	if (iLocal_3445[3] == 0) {
		if (entity::does_entity_exist(uLocal_3233[0])) {
			if (ped::is_ped_injured(uLocal_3233[0])) {
				iLocal_3191++;
				iLocal_3445[3] = 1;
			}
		}
	}
	if (iLocal_3445[4] == 0) {
		if (entity::does_entity_exist(uLocal_3233[1])) {
			if (ped::is_ped_injured(uLocal_3233[1])) {
				iLocal_3191++;
				iLocal_3445[4] = 1;
			}
		}
	}
	if (iLocal_3445[5] == 0) {
		if (entity::does_entity_exist(uLocal_3233[2])) {
			if (ped::is_ped_injured(uLocal_3233[2])) {
				iLocal_3191++;
				iLocal_3445[5] = 1;
			}
		}
	}
	if (iLocal_3445[6] == 0) {
		if (entity::does_entity_exist(uLocal_3233[3])) {
			if (ped::is_ped_injured(uLocal_3233[3])) {
				iLocal_3191++;
				iLocal_3445[6] = 1;
			}
		}
	}
	if (iLocal_3445[7] == 0) {
		if (entity::does_entity_exist(uLocal_3233[4])) {
			if (ped::is_ped_injured(uLocal_3233[4])) {
				iLocal_3191++;
				iLocal_3445[7] = 1;
			}
		}
	}
	if (iLocal_3445[8] == 0) {
		if (entity::does_entity_exist(uLocal_3233[5])) {
			if (ped::is_ped_injured(uLocal_3233[5])) {
				iLocal_3191++;
				iLocal_3445[8] = 1;
			}
		}
	}
	if (iLocal_3445[9] == 0) {
		if (entity::does_entity_exist(uLocal_3233[6])) {
			if (ped::is_ped_injured(uLocal_3233[6])) {
				iLocal_3191++;
				iLocal_3445[9] = 1;
			}
		}
	}
	if (iLocal_3445[10] == 0) {
		if (entity::does_entity_exist(uLocal_3233[7])) {
			if (ped::is_ped_injured(uLocal_3233[7])) {
				iLocal_3191++;
				iLocal_3445[10] = 1;
			}
		}
	}
	if (iLocal_3445[11] == 0) {
		if (entity::does_entity_exist(uLocal_3233[8])) {
			if (ped::is_ped_injured(uLocal_3233[8])) {
				iLocal_3191++;
				iLocal_3445[11] = 1;
			}
		}
	}
	if (iLocal_3445[12] == 0) {
		if (entity::does_entity_exist(uLocal_3233[9])) {
			if (ped::is_ped_injured(uLocal_3233[9])) {
				iLocal_3191++;
				iLocal_3445[12] = 1;
			}
		}
	}
	if (iLocal_3445[13] == 0) {
		if (entity::does_entity_exist(uLocal_3233[10])) {
			if (ped::is_ped_injured(uLocal_3233[10])) {
				iLocal_3191++;
				iLocal_3445[13] = 1;
			}
		}
	}
	if (iLocal_3445[14] == 0) {
		if (entity::does_entity_exist(iLocal_3248)) {
			if (ped::is_ped_injured(iLocal_3248)) {
				iLocal_3191++;
				iLocal_3445[14] = 1;
			}
		}
	}
	if (iLocal_3445[15] == 0) {
		if (entity::does_entity_exist(iLocal_3249)) {
			if (ped::is_ped_injured(iLocal_3249)) {
				iLocal_3191++;
				iLocal_3445[15] = 1;
			}
		}
	}
	if (iLocal_3445[16] == 0) {
		if (entity::does_entity_exist(iLocal_3250)) {
			if (ped::is_ped_injured(iLocal_3250)) {
				iLocal_3191++;
				iLocal_3445[16] = 1;
			}
		}
	}
	if (iLocal_3445[17] == 0) {
		if (entity::does_entity_exist(uLocal_3251[0])) {
			if (ped::is_ped_injured(uLocal_3251[0])) {
				iLocal_3191++;
				iLocal_3445[17] = 1;
			}
		}
	}
	if (iLocal_3180 == 8) {
		if (player::get_player_wanted_level(player::player_id()) != 0) {
			if (iLocal_3465 == 0) {
				func_2(482, 0);
				iLocal_3465 = 1;
			}
		}
	}
}

// Position - 0x6EB
void func_2(int iParam0, int iParam1) {
	int iVar0;

	Global_55832 = iParam0;
	if (!Global_55830) {
		Global_55830 = 1;
	}
	if (iParam1) {
		iVar0 = 0;
		while (iVar0 < Global_67917) {
			if (Global_67918[iVar0 /*9*/] == iParam0) {
				Global_67918[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

// Position - 0x735
void func_3(int iParam0, int iParam1) {
	Global_55833 = iParam0;
	Global_55834 = iParam1;
}

// Position - 0x747
void func_4(int iParam0, int iParam1) {
	int iVar0;

	Global_55835 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67917) {
		if (iParam1 == -1 || Global_67918[iVar0 /*9*/] == iParam1) {
			if (Global_67918[iVar0 /*9*/].f_6 != iParam0) {
				Global_67918[iVar0 /*9*/].f_6 = iParam0;
				Global_67918[iVar0 /*9*/].f_7 = 1;
				Global_67918[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

// Position - 0x7B2
void func_5() {
	if (cam::is_screen_faded_out()) {
		if (entity::does_entity_exist(iLocal_3267)) {
			vehicle::set_vehicle_door_open(iLocal_3267, 0, 0, 1);
		}
	}
	if (iLocal_3181 > 0) {
		func_193();
	}
	if (iLocal_3181 == 0) {
		if (iLocal_3345 == 1) {
			func_105();
			iLocal_3345 = 0;
		}
		func_25(3, "STAGE_EVADE_POLICE", 1, 0, 0, 1);
		iLocal_3374 = 0;
		iLocal_3375 = 0;
		iLocal_3376 = 0;
		iLocal_3346 = 0;
		iLocal_3347 = 0;
		iLocal_3348 = 0;
		iLocal_3430 = 0;
		iLocal_3431 = 0;
		iLocal_3432 = 0;
		iLocal_3469 = 0;
		iLocal_3470 = 0;
		iLocal_3474 = 0;
		iLocal_3477 = 0;
		iLocal_3185 = 0;
		streaming::request_anim_dict("Misssolomon_3");
		streaming::request_model(joaat("oracle2"));
		streaming::request_model(joaat("baller2"));
		if (ui::does_blip_exist(iLocal_3285)) {
			ui::remove_blip(&iLocal_3285);
		}
		if (ai::get_is_waypoint_recording_loaded("Trev4_5")) {
			ai::use_waypoint_recording_as_assisted_movement_route("Trev4_5", 0, 1f, 1f);
			ai::remove_waypoint_recording("Trev4_5");
		}
		if (entity::does_entity_exist(iLocal_3259)) {
			entity::set_vehicle_as_no_longer_needed(&iLocal_3259);
		}
		system::settimera(0);
		if (cam::is_screen_faded_out()) {
			if (!func_24()) {
				streaming::load_scene(entity::get_entity_coords(player::player_ped_id(), 1));
			}
			func_21(0, -1, 1);
		}
		if (!cam::is_screen_faded_in()) {
			cam::do_screen_fade_in(800);
		}
		if (entity::does_entity_exist(iLocal_3228)) {
			if (!ped::is_ped_injured(iLocal_3228)) {
				ped::set_ped_can_be_targetted(iLocal_3228, 1);
				ped::set_blocking_of_non_temporary_events(iLocal_3228, 0);
			}
		}
		audio::trigger_music_event("TRV4_LOSE_COPS");
		if (!audio::is_audio_scene_active("SOL_3_LOSE_COPS")) {
			audio::start_audio_scene("SOL_3_LOSE_COPS");
		}
		ui::clear_prints();
		func_20("TRV4_END1", 7500, 1);
		if (audio::is_audio_scene_active("SOL_3_ENGINE_DEATH_SCENE")) {
			audio::stop_audio_scene("SOL_3_ENGINE_DEATH_SCENE");
		}
		if (func_19(2)) {
			func_18(2, 0);
		}
		iLocal_3221 = pathfind::add_navmesh_blocking_object(-948.4f, -2992.6f, 13.3f, 6f, 5f, 4f, 60f, 0, 7);
		if (entity::does_entity_exist(iLocal_3266)) {
			if (vehicle::is_vehicle_driveable(iLocal_3266, 0)) {
				vehicle::_0x21115BCD6E44656A(iLocal_3266, 0);
			}
		}
		if (entity::does_entity_exist(iLocal_3267)) {
			if (vehicle::is_vehicle_driveable(iLocal_3267, 0)) {
				vehicle::_0x21115BCD6E44656A(iLocal_3267, 0);
			}
		}
		player::set_max_wanted_level(5);
		player::set_player_wanted_level(player::player_id(), 3, 0);
		player::set_player_wanted_level_now(player::player_id(), 0);
		func_17(&uLocal_3578, 0, player::player_ped_id(), "MICHAEL", 0, 1);
		audio::set_audio_flag("PoliceScannerDisabled", 0);
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1) {
		if (iLocal_3469 == 0) {
			if (!entity::does_entity_exist(uLocal_3279[0])) {
				if (streaming::has_model_loaded(joaat("oracle2"))) {
					uLocal_3279[0] =
						vehicle::create_vehicle(joaat("oracle2"), -1025.596f, -2869.237f, 12.9585f, 241.0686f, 1, 1);
					entity::set_entity_load_collision_flag(uLocal_3279[0], 1);
					vehicle::set_vehicle_on_ground_properly(uLocal_3279[0], 1084227584);
					streaming::set_model_as_no_longer_needed(joaat("oracle2"));
					iLocal_3469 = 1;
				}
			}
		}
		if (iLocal_3470 == 0) {
			if (!entity::does_entity_exist(uLocal_3279[1])) {
				if (streaming::has_model_loaded(joaat("baller2"))) {
					uLocal_3279[1] =
						vehicle::create_vehicle(joaat("baller2"), -971.4223f, -2903.354f, 12.9652f, 61.0213f, 1, 1);
					entity::set_entity_load_collision_flag(uLocal_3279[1], 1);
					vehicle::set_vehicle_on_ground_properly(uLocal_3279[1], 1084227584);
					streaming::set_model_as_no_longer_needed(joaat("baller2"));
					iLocal_3470 = 1;
				}
			}
		}
		if (entity::does_entity_exist(uLocal_3279[0])) {
			if (vehicle::is_vehicle_driveable(uLocal_3279[0], 0)) {
				if (ped::is_ped_in_vehicle(player::player_ped_id(), uLocal_3279[0], 0)) {
					if (!audio::is_audio_scene_active("SOL_3_LOSE_COPS_VEHICLE")) {
						audio::start_audio_scene("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(player::player_ped_id(), uLocal_3279[0], 1) > 200f ||
				ped::is_ped_in_vehicle(player::player_ped_id(), uLocal_3279[0], 0)) {
				entity::set_vehicle_as_no_longer_needed(&uLocal_3279[0]);
			}
		}
		if (entity::does_entity_exist(uLocal_3279[1])) {
			if (vehicle::is_vehicle_driveable(uLocal_3279[1], 0)) {
				if (ped::is_ped_in_vehicle(player::player_ped_id(), uLocal_3279[1], 0)) {
					if (!audio::is_audio_scene_active("SOL_3_LOSE_COPS_VEHICLE")) {
						audio::start_audio_scene("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(player::player_ped_id(), uLocal_3279[1], 1) > 200f ||
				ped::is_ped_in_vehicle(player::player_ped_id(), uLocal_3279[1], 0)) {
				entity::set_vehicle_as_no_longer_needed(&uLocal_3279[1]);
			}
		}
		if (iLocal_3430 == 0) {
			if (!ped::is_ped_injured(uLocal_3233[0])) {
				func_14(uLocal_3233[0], "SURROUNDED", 24);
				iLocal_3430 = 1;
			}
		}
		if (iLocal_3374 == 0) {
			if (system::timera() > 8000) {
				if (vehicle::is_vehicle_driveable(uLocal_3268[0], 0)) {
					vehicle::start_playback_recorded_vehicle(uLocal_3268[0], 68, "BB_Chase", 1);
					vehicle::_0x796A877E459B99EA(uLocal_3268[0], 0f, 0f, 0.15f);
				}
				if (vehicle::is_vehicle_driveable(uLocal_3268[1], 0)) {
					vehicle::start_playback_recorded_vehicle(uLocal_3268[1], 69, "BB_Chase", 1);
					vehicle::_0x796A877E459B99EA(uLocal_3268[1], 0f, 0f, 0.15f);
				}
				iLocal_3374 = 1;
			}
		}
		else {
			if (vehicle::is_vehicle_driveable(uLocal_3268[0], 0)) {
				if (vehicle::is_playback_going_on_for_vehicle(uLocal_3268[0])) {
					if (vehicle::get_time_position_in_recording(uLocal_3268[0]) > 5000f) {
						if (vehicle::is_vehicle_stopped(uLocal_3268[0])) {
							vehicle::stop_playback_recorded_vehicle(uLocal_3268[0]);
						}
					}
				}
				else if (iLocal_3375 == 0) {
					if (!ped::is_ped_injured(uLocal_3233[6])) {
						ped::set_blocking_of_non_temporary_events(uLocal_3233[6], 0);
					}
					if (!ped::is_ped_injured(uLocal_3233[7])) {
						ped::set_blocking_of_non_temporary_events(uLocal_3233[7], 0);
					}
					iLocal_3375 = 1;
				}
			}
			if (vehicle::is_vehicle_driveable(uLocal_3268[1], 0)) {
				if (vehicle::is_playback_going_on_for_vehicle(uLocal_3268[1])) {
					if (vehicle::get_time_position_in_recording(uLocal_3268[1]) > 5000f) {
						if (vehicle::is_vehicle_stopped(uLocal_3268[1])) {
							vehicle::stop_playback_recorded_vehicle(uLocal_3268[1]);
						}
					}
				}
				else if (iLocal_3376 == 0) {
					if (!ped::is_ped_injured(uLocal_3233[8])) {
						ped::set_blocking_of_non_temporary_events(uLocal_3233[8], 0);
					}
					if (!ped::is_ped_injured(uLocal_3233[9])) {
						ped::set_blocking_of_non_temporary_events(uLocal_3233[9], 0);
					}
					iLocal_3376 = 1;
				}
			}
		}
		func_12();
		if (iLocal_3474 == 0) {
			if (entity::does_entity_exist(iLocal_3267)) {
				if (vehicle::is_vehicle_driveable(iLocal_3267, 0)) {
					if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_3267, 0)) {
						audio::trigger_music_event("TRV4_JET_ENTERED");
						if (!audio::is_audio_scene_active("SOL_3_LOSE_COPS_PLANE")) {
							audio::start_audio_scene("SOL_3_LOSE_COPS_PLANE");
						}
						unk1::_0x293220DA1B46CEBC(4f, 15f, 4);
						entity::set_vehicle_as_no_longer_needed(&iLocal_3267);
						iLocal_3474 = 1;
					}
					else if (func_16(player::player_ped_id(), iLocal_3267, 1) > 200f) {
						entity::set_vehicle_as_no_longer_needed(&iLocal_3267);
					}
				}
			}
		}
		if (iLocal_3474 == 1) {
			if (entity::does_entity_exist(iLocal_3267)) {
				if (vehicle::is_vehicle_driveable(iLocal_3267, 0)) {
					if (!ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_3267, 0)) {
						if (audio::is_audio_scene_active("SOL_3_LOSE_COPS_PLANE")) {
							audio::stop_audio_scene("SOL_3_LOSE_COPS_PLANE");
						}
						audio::trigger_music_event("TRV4_LOSE_COPS");
						iLocal_3474 = 0;
					}
				}
			}
		}
		if (player::get_player_wanted_level(player::player_id()) == 0) {
			if (iLocal_3477 == 0) {
				iLocal_3193 = gameplay::get_game_timer();
				iLocal_3477 = 1;
			}
		}
		if (iLocal_3477 == 1) {
			if (player::get_player_wanted_level(player::player_id()) == 0) {
				if (gameplay::get_game_timer() > iLocal_3193 + 3500) {
					if (audio::is_audio_scene_active("SOL_3_LOSE_COPS_PLANE")) {
						audio::stop_audio_scene("SOL_3_LOSE_COPS_PLANE");
					}
					if (audio::is_audio_scene_active("SOL_3_LOSE_COPS")) {
						audio::stop_audio_scene("SOL_3_LOSE_COPS");
					}
					if (audio::is_audio_scene_active("SOL_3_LOSE_COPS_VEHICLE")) {
						audio::stop_audio_scene("SOL_3_LOSE_COPS_VEHICLE");
					}
					audio::trigger_music_event("TRV4_COPS_LOST");
					func_11(0, -1);
					func_6();
				}
			}
			else {
				iLocal_3477 = 0;
			}
		}
	}
}

// Position - 0xE92
void func_6() {
	func_10(481, iLocal_3191, 0);
	func_7(0, 0);
	func_383();
}

// Position - 0xEAF
void func_7(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	var uVar2;

	if (!Global_55824) {
		Global_55824 = iParam1;
	}
	if (iParam0) {
		if (func_396(0) && Global_69948.f_1 == 1 && func_9(Global_69948)) {
		}
		else {
			Global_55822 = 1;
		}
	}
	if (Global_101700.f_8044 || func_396(0)) {
		iVar0 = func_8();
		iVar1 = Global_82576[iVar0 /*5*/];
		uVar2 = G_TextMessageConfig.f_109[iVar1 /*4*/];
		if (iVar0 == -1) {
			if (Global_101700.f_8044) {
			}
			return;
		}
		if (gameplay::is_bit_set(Global_82576[iVar0 /*5*/].f_1, 4)) {
			return;
		}
		if (gameplay::is_bit_set(Global_82576[iVar0 /*5*/].f_1, 5)) {
			return;
		}
		gameplay::set_bit(&Global_82576[iVar0 /*5*/].f_1, 4);
		gameplay::set_bit(&Global_69950, 1);
		Global_69966 = uVar2;
		Global_69967 = gameplay::get_game_timer();
	}
}

// Position - 0xF85
int func_8() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7) {
		if (gameplay::is_bit_set(Global_82576[iVar0 /*5*/].f_1, 2)) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0xFBA
int func_9(int iParam0) {
	switch (iParam0) {
	case 71: return 1;

	case 86: return 1;

	case 91: return 1;

	default: return 0;
	}
	return 0;
}

// Position - 0xFF8
void func_10(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67917) {
		if (Global_67918[iVar0 /*9*/] == iParam0) {
			if (iParam2) {
				Global_67918[iVar0 /*9*/].f_1 = iParam1;
			}
			else {
				Global_67918[iVar0 /*9*/].f_1 += iParam1;
			}
			return;
		}
		iVar0++;
	}
	if (Global_67918[iVar0 /*9*/] != -1) {
		if (MissionObjectives[Global_67918[iVar0 /*9*/] /*13*/] == 3) {
			if (Global_67918[iVar0 /*9*/].f_1 > 1) {
				Global_67918[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_67918[iVar0 /*9*/].f_1 < 0) {
				Global_67918[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

// Position - 0x10A2
void func_11(int iParam0, int iParam1) {
	int iVar0;

	if (Global_55830) {
	}
	Global_55830 = 0;
	if (iParam0) {
		Global_55831 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1) {
		iVar0 = 0;
		while (iVar0 < Global_67917) {
			if (MissionObjectives[Global_67918[iVar0 /*9*/] /*13*/] == 4) {
				Global_67918[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else {
		iVar0 = 0;
		while (iVar0 < Global_67917) {
			if (Global_67918[iVar0 /*9*/] > 0) {
				if (Global_67918[iVar0 /*9*/] == iParam1) {
					Global_67918[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

// Position - 0x113C
void func_12() {
	iLocal_3189 = 0;
	while (iLocal_3189 <= 9) {
		if (entity::does_entity_exist(uLocal_3233[iLocal_3189])) {
			if (!ped::is_ped_injured(uLocal_3233[iLocal_3189])) {
				if (!ped::is_ped_in_any_vehicle(uLocal_3233[iLocal_3189], 0)) {
					if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						if (func_13(player::player_ped_id(), uLocal_3233[iLocal_3189]) > 200f) {
							ai::clear_ped_tasks(uLocal_3233[iLocal_3189]);
							entity::set_ped_as_no_longer_needed(&uLocal_3233[iLocal_3189]);
						}
						else if (func_13(player::player_ped_id(), uLocal_3233[iLocal_3189]) > 20f) {
							if (ai::get_script_task_status(uLocal_3233[iLocal_3189], -1207174364) != 1 &&
								ai::get_script_task_status(uLocal_3233[iLocal_3189], -1207174364) != 0) {
								ai::task_go_to_entity_while_aiming_at_entity(
									uLocal_3233[iLocal_3189], player::player_ped_id(), player::player_ped_id(), 2f, 1,
									15f, 20f, 0, 0, -687903391);
							}
						}
						else if (ai::get_script_task_status(uLocal_3233[iLocal_3189], 780511057) != 1 &&
								 ai::get_script_task_status(uLocal_3233[iLocal_3189], 780511057) != 0) {
							ai::task_combat_ped(uLocal_3233[iLocal_3189], player::player_ped_id(), 0, 16);
							ped::set_ped_combat_attributes(uLocal_3233[iLocal_3189], 50, 1);
						}
					}
					else if (func_13(player::player_ped_id(), uLocal_3233[iLocal_3189]) > 200f) {
						entity::set_ped_as_no_longer_needed(&uLocal_3233[iLocal_3189]);
					}
					else if (func_13(player::player_ped_id(), uLocal_3233[iLocal_3189]) > 5f) {
						if (ai::get_script_task_status(uLocal_3233[iLocal_3189], -1207174364) != 1 &&
							ai::get_script_task_status(uLocal_3233[iLocal_3189], -1207174364) != 0) {
							ai::task_go_to_entity_while_aiming_at_entity(
								uLocal_3233[iLocal_3189], player::player_ped_id(), player::player_ped_id(), 2f, 1, 15f,
								20f, 0, 0, -687903391);
						}
					}
					else if (ai::get_script_task_status(uLocal_3233[iLocal_3189], 780511057) != 1 &&
							 ai::get_script_task_status(uLocal_3233[iLocal_3189], 780511057) != 0) {
						ai::task_combat_ped(uLocal_3233[iLocal_3189], player::player_ped_id(), 0, 16);
						ped::set_ped_combat_attributes(uLocal_3233[iLocal_3189], 50, 1);
					}
				}
			}
		}
		iLocal_3189++;
	}
	if (iLocal_3374 == 1) {
		if (iLocal_3346 == 0) {
			if (entity::does_entity_exist(uLocal_3268[0])) {
				if (vehicle::is_vehicle_driveable(uLocal_3268[0], 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(uLocal_3268[0])) {
					}
					else {
						if (entity::does_entity_exist(uLocal_3233[6])) {
							if (!ped::is_ped_injured(uLocal_3233[6])) {
								ped::set_blocking_of_non_temporary_events(uLocal_3233[6], 0);
								ai::clear_ped_tasks(uLocal_3233[6]);
								ai::open_sequence_task(&iLocal_3292);
								ai::task_leave_vehicle(0, uLocal_3268[0], 256);
								ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
								ai::close_sequence_task(iLocal_3292);
								ai::task_perform_sequence(uLocal_3233[6], iLocal_3292);
								ai::clear_sequence_task(&iLocal_3292);
							}
						}
						if (entity::does_entity_exist(uLocal_3233[7])) {
							if (!ped::is_ped_injured(uLocal_3233[7])) {
								ped::set_blocking_of_non_temporary_events(uLocal_3233[7], 0);
								ai::clear_ped_tasks(uLocal_3233[7]);
								ai::open_sequence_task(&iLocal_3292);
								ai::task_leave_vehicle(0, uLocal_3268[0], 256);
								ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
								ai::close_sequence_task(iLocal_3292);
								ai::task_perform_sequence(uLocal_3233[7], iLocal_3292);
								ai::clear_sequence_task(&iLocal_3292);
							}
						}
						iLocal_3346 = 1;
					}
				}
			}
		}
		else if (iLocal_3431 == 0) {
			if (entity::does_entity_exist(uLocal_3268[0])) {
				if (vehicle::is_vehicle_driveable(uLocal_3268[0], 0)) {
					if (entity::does_entity_exist(uLocal_3233[6])) {
						if (!ped::is_ped_injured(uLocal_3233[6])) {
							if (!ped::is_ped_in_vehicle(uLocal_3233[6], uLocal_3268[0], 0)) {
								if (func_13(player::player_ped_id(), uLocal_3233[6]) < 20f) {
									func_14(uLocal_3233[6], "DRAW_GUN", 24);
									iLocal_3431 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3347 == 0) {
			if (entity::does_entity_exist(uLocal_3268[1])) {
				if (vehicle::is_vehicle_driveable(uLocal_3268[1], 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(uLocal_3268[1])) {
					}
					else {
						if (entity::does_entity_exist(uLocal_3233[8])) {
							if (!ped::is_ped_injured(uLocal_3233[8])) {
								ped::set_blocking_of_non_temporary_events(uLocal_3233[8], 0);
								ai::clear_ped_tasks(uLocal_3233[8]);
								ai::open_sequence_task(&iLocal_3292);
								ai::task_leave_vehicle(0, uLocal_3268[1], 256);
								ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
								ai::close_sequence_task(iLocal_3292);
								ai::task_perform_sequence(uLocal_3233[8], iLocal_3292);
								ai::clear_sequence_task(&iLocal_3292);
							}
						}
						if (entity::does_entity_exist(uLocal_3233[9])) {
							if (!ped::is_ped_injured(uLocal_3233[9])) {
								ped::set_blocking_of_non_temporary_events(uLocal_3233[9], 0);
								ai::clear_ped_tasks(uLocal_3233[9]);
								ai::open_sequence_task(&iLocal_3292);
								ai::task_leave_vehicle(0, uLocal_3268[1], 256);
								ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
								ai::close_sequence_task(iLocal_3292);
								ai::task_perform_sequence(uLocal_3233[9], iLocal_3292);
								ai::clear_sequence_task(&iLocal_3292);
							}
						}
						iLocal_3347 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3348 == 0) {
		if (entity::does_entity_exist(uLocal_3233[10])) {
			if (!ped::is_ped_injured(uLocal_3233[10])) {
				if (func_13(player::player_ped_id(), uLocal_3233[10]) > 200f) {
					entity::set_ped_as_no_longer_needed(&uLocal_3233[iLocal_3189]);
					streaming::remove_anim_dict("misssolomon_3");
				}
				else if (streaming::has_anim_dict_loaded("misssolomon_3")) {
					if (entity::is_entity_at_coord(player::player_ped_id(), -923.2303f, -2948.004f, 12.9451f, 2f, 2f,
												   2f, 0, 1, 0)) {
						if (!ped::is_ped_injured(uLocal_3233[10])) {
							ai::clear_ped_tasks(uLocal_3233[10]);
							ai::open_sequence_task(&iLocal_3292);
							ai::task_play_anim(0, "misssolomon_3", "plyr_roll_left", 8f, -8f, -1, 0, 0, 0, 0, 0);
							ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
							ai::close_sequence_task(iLocal_3292);
							ai::task_perform_sequence(uLocal_3233[10], iLocal_3292);
							ai::clear_sequence_task(&iLocal_3292);
							iLocal_3348 = 1;
						}
					}
				}
			}
		}
	}
}

// Position - 0x170A
float func_13(int iParam0, int iParam1) { return func_16(iParam0, iParam1, 1); }

// Position - 0x171B
void func_14(int iParam0, char *sParam1, int iParam2) {
	audio::_play_ambient_speech1(iParam0, sParam1, func_15(iParam2), 1);
}

// Position - 0x1732
int func_15(int iParam0) {
	int iVar0;

	switch (iParam0) {
	case 0: return "SPEECH_PARAMS_STANDARD";

	case 1: return "SPEECH_PARAMS_ALLOW_REPEAT";

	case 2: return "SPEECH_PARAMS_BEAT";

	case 3: return "SPEECH_PARAMS_FORCE";

	case 4: return "SPEECH_PARAMS_FORCE_FRONTEND";

	case 5: return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";

	case 6: return "SPEECH_PARAMS_FORCE_NORMAL";

	case 7: return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";

	case 8: return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";

	case 9: return "SPEECH_PARAMS_FORCE_SHOUTED";

	case 10: return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";

	case 11: return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";

	case 12: return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";

	case 13: return "SPEECH_PARAMS_MEGAPHONE";

	case 14: return "SPEECH_PARAMS_HELI";

	case 15: return "SPEECH_PARAMS_FORCE_MEGAPHONE";

	case 16: return "SPEECH_PARAMS_FORCE_HELI";

	case 17: return "SPEECH_PARAMS_INTERRUPT";

	case 18: return "SPEECH_PARAMS_INTERRUPT_SHOUTED";

	case 19: return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";

	case 20: return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";

	case 21: return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";

	case 22: return "SPEECH_PARAMS_INTERRUPT_FRONTEND";

	case 23: return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";

	case 24: return "SPEECH_PARAMS_ADD_BLIP";

	case 25: return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";

	case 26: return "SPEECH_PARAMS_ADD_BLIP_FORCE";

	case 27: return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";

	case 28: return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";

	case 29: return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";

	case 30: return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";

	case 31: return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";

	case 32: return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";

	case 33: return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";

	case 34: return "SPEECH_PARAMS_SHOUTED";

	case 35: return "SPEECH_PARAMS_SHOUTED_CLEAR";

	case 36: return "SPEECH_PARAMS_SHOUTED_CRITICAL";

	default:
	}
	iVar0 = 0;
	return iVar0;
}

// Position - 0x1927
float func_16(int iParam0, int iParam1, int iParam2) {
	vector3 vVar0;
	vector3 vVar3;

	if (!entity::is_entity_dead(iParam0, 0)) {
		vVar0 = {entity::get_entity_coords(iParam0, 1)};
	}
	else {
		vVar0 = {entity::get_entity_coords(iParam0, 0)};
	}
	if (!entity::is_entity_dead(iParam1, 0)) {
		vVar3 = {entity::get_entity_coords(iParam1, 1)};
	}
	else {
		vVar3 = {entity::get_entity_coords(iParam1, 0)};
	}
	return gameplay::get_distance_between_coords(vVar0, vVar3, iParam2);
}

// Position - 0x1985
void func_17(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
	if ((*uParam0)[iParam1 /*10*/].f_7 == 1) {
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&(*uParam0)[iParam1 /*10*/].f_1, sParam3, 24);
	(*uParam0)[iParam1 /*10*/].f_7 = 1;
	(*uParam0)[iParam1 /*10*/].f_8 = iParam4;
	(*uParam0)[iParam1 /*10*/].f_9 = iParam5;
	if (!Global_69702) {
		if (!ped::is_ped_injured(iParam2)) {
			if ((*uParam0)[iParam1 /*10*/].f_8 == 0) {
				ped::set_ped_can_play_ambient_anims(iParam2, 0);
			}
			else {
				ped::set_ped_can_play_ambient_anims(iParam2, 1);
			}
		}
		if (!ped::is_ped_injured(iParam2)) {
			if ((*uParam0)[iParam1 /*10*/].f_9 == 0) {
				ped::set_ped_can_use_auto_conversation_lookat(iParam2, 0);
			}
			else {
				ped::set_ped_can_use_auto_conversation_lookat(iParam2, 1);
			}
		}
	}
}

// Position - 0x1A20
void func_18(int iParam0, int iParam1) {
	if (gameplay::is_bit_set(Global_25347, iParam0)) {
		if (!iParam1) {
			gameplay::clear_bit(&Global_25347, iParam0);
			StringCopy(&Global_25348[iParam0 /*6*/], "NULL", 24);
			Global_25403[iParam0] = iParam1;
		}
	}
}

// Position - 0x1A57
bool func_19(int iParam0) {
	if (gameplay::is_bit_set(Global_25347, iParam0)) {
		return true;
	}
	return false;
}

// Position - 0x1A70
void func_20(char *sParam0, int iParam1, int iParam2) {
	iParam2 = iParam2;
	ui::begin_text_command_print(sParam0);
	ui::end_text_command_print(iParam1, 1);
}

// Position - 0x1A89
void func_21(int iParam0, int iParam1, int iParam2) {
	if (func_23() && func_24()) {
		while (Global_91486 != 6) {
			system::wait(0);
		}
		gameplay::set_game_paused(0);
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				ped::clear_ped_wetness(player::player_ped_id());
			}
		}
		if (iParam0 != 0) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				if (entity::does_entity_exist(iParam0)) {
					if (vehicle::is_vehicle_driveable(iParam0, 0)) {
						if (!ped::is_ped_in_vehicle(player::player_ped_id(), iParam0, 0)) {
							ped::set_ped_into_vehicle(player::player_ped_id(), iParam0, iParam1);
							cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
							cam::set_gameplay_cam_relative_heading(0f);
							system::wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1) {
			if (player::is_player_playing(player::player_id())) {
				player::set_player_control(player::player_id(), 1, 0);
			}
		}
		graphics::_stop_all_screen_effects();
		func_22(0);
	}
}

// Position - 0x1B4D
void func_22(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_91491.f_20, 13);
	}
	else {
		gameplay::clear_bit(&Global_91491.f_20, 13);
	}
}

// Position - 0x1B76
bool func_23() {
	if (Global_91491 == 10 || Global_91491 == 9) {
		return true;
	}
	return false;
}

// Position - 0x1B9A
bool func_24() { return gameplay::is_bit_set(Global_91491.f_20, 13); }

// Position - 0x1BAE
void func_25(int iParam0, char *sParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;

	if (iParam3 == 1) {
		if (!gameplay::are_strings_equal("FinaleC2", script::get_this_script_name())) {
		}
	}
	iVar0 = 0;
	if (iParam3 == 1) {
		if (iParam0 != Global_91528) {
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_91528) {
		iVar0 = 1;
	}
	if (iVar0 == 1) {
		func_104(1);
		if (iParam0 <= Global_91528) {
		}
		iVar1 = func_102(script::get_this_script_name(), 1);
		if (iVar1 != -1 && iVar1 != 94) {
			Global_101700.f_8044.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_100(iVar1);
			cVar3 = {Global_82612[iVar1 /*34*/].f_8};
			if (iVar1 == 90) {
				switch (Global_101700.f_8044.f_99.f_205[7]) {
				case 1: StringConCat(&cVar3, "A", 8); break;

				case 2: StringConCat(&cVar3, "B", 8); break;
				}
			}
			stats::playstats_mission_checkpoint(&cVar3, iVar2, Global_91528, iParam0);
		}
		else {
			iVar5 = func_95(script::get_this_script_name(), 1);
			if (iVar5 != -1) {
				Global_101700.f_17533[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_94(iVar5)}, 4);
				stats::playstats_mission_checkpoint(&uVar6, 0, Global_91528, iParam0);
			}
			else {
				iVar10 = func_93(&Global_91491.f_3);
				if (iVar10 > -1) {
					Global_101700.f_23945.f_4[iVar10] = 0;
				}
			}
		}
		Global_86002 = iParam2;
		Global_91528 = iParam0;
		func_26(iParam0, sParam1, iParam4, iParam5);
		if (gameplay::are_strings_equal(sParam1, "")) {
		}
	}
	else if (iParam0 < Global_91528) {
	}
}

// Position - 0x1D24
void func_26(int iParam0, var uParam1, int iParam2, int iParam3) {
	func_27(&Global_96040, script::get_this_script_name(), iParam0, uParam1, iParam3, iParam2);
}

// Position - 0x1D40
void func_27(var *uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5) {
	int iVar0;
	int iVar1;

	*uParam0 = func_92();
	uParam0->f_1 = func_81();
	gameplay::_get_weather_type_transition(&uParam0->f_6, &uParam0->f_7, &uParam0->f_8);
	if (!ped::is_ped_injured(player::player_ped_id())) {
		func_65(&uParam0->f_2305, 0);
		func_64(player::player_ped_id());
		func_58(player::player_ped_id(), 0);
		weapon::get_current_ped_weapon(player::player_ped_id(), &uParam0->f_2, 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object")) {
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3) {
		uParam0->f_17[iVar1] = Global_101700.f_2095.f_539.f_294[iVar1];
		if (iVar1 == func_55()) {
			func_48(player::player_ped_id(), &uParam0->f_616[iVar1 /*65*/], 1);
		}
		else {
			iVar0 = 0;
			while (iVar0 < 12) {
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_91281[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_91281[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_91281[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_91281[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_91281[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_91281[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_91281[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_91281[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9) {
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_91281[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_91281[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44) {
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = {Global_101700.f_2095.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/]};
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50) {
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = {
				Global_101700.f_2095.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/]};
			iVar0++;
		}
		switch (iVar1) {
		case 0:
			stats::stat_get_int(joaat("sp0_weap_purch_0"), &uParam0->f_1665[iVar1 /*32*/][0], -1);
			stats::stat_get_int(joaat("sp0_weap_purch_1"), &uParam0->f_1665[iVar1 /*32*/][1], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_5[0], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_5[1], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_5[2], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_5[3], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_5[4], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_16[0], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_16[1], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_16[2], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_16[3], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_16[4], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_5"), &uParam0->f_1665[iVar1 /*32*/].f_16[5], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_6"), &uParam0->f_1665[iVar1 /*32*/].f_16[6], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_7"), &uParam0->f_1665[iVar1 /*32*/].f_16[7], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_8"), &uParam0->f_1665[iVar1 /*32*/].f_16[8], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_9"), &uParam0->f_1665[iVar1 /*32*/].f_16[9], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_10"), &uParam0->f_1665[iVar1 /*32*/].f_16[10], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_11"), &uParam0->f_1665[iVar1 /*32*/].f_16[11], -1);
			break;

		case 1:
			stats::stat_get_int(joaat("sp1_weap_purch_0"), &uParam0->f_1665[iVar1 /*32*/][0], -1);
			stats::stat_get_int(joaat("sp1_weap_purch_1"), &uParam0->f_1665[iVar1 /*32*/][1], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_5[0], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_5[1], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_5[2], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_5[3], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_5[4], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_16[0], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_16[1], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_16[2], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_16[3], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_16[4], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_5"), &uParam0->f_1665[iVar1 /*32*/].f_16[5], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_6"), &uParam0->f_1665[iVar1 /*32*/].f_16[6], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_7"), &uParam0->f_1665[iVar1 /*32*/].f_16[7], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_8"), &uParam0->f_1665[iVar1 /*32*/].f_16[8], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_9"), &uParam0->f_1665[iVar1 /*32*/].f_16[9], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_10"), &uParam0->f_1665[iVar1 /*32*/].f_16[10], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_11"), &uParam0->f_1665[iVar1 /*32*/].f_16[11], -1);
			break;

		case 2:
			stats::stat_get_int(joaat("sp2_weap_purch_0"), &uParam0->f_1665[iVar1 /*32*/][0], -1);
			stats::stat_get_int(joaat("sp2_weap_purch_1"), &uParam0->f_1665[iVar1 /*32*/][1], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_5[0], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_5[1], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_5[2], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_5[3], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_5[4], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_16[0], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_16[1], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_16[2], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_16[3], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_16[4], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_5"), &uParam0->f_1665[iVar1 /*32*/].f_16[5], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_6"), &uParam0->f_1665[iVar1 /*32*/].f_16[6], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_7"), &uParam0->f_1665[iVar1 /*32*/].f_16[7], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_8"), &uParam0->f_1665[iVar1 /*32*/].f_16[8], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_9"), &uParam0->f_1665[iVar1 /*32*/].f_16[9], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_10"), &uParam0->f_1665[iVar1 /*32*/].f_16[10], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_11"), &uParam0->f_1665[iVar1 /*32*/].f_16[11], -1);
			break;
		}
		uParam0->f_9[iVar1] = Global_101700.f_19523.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_52996[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = {Global_101700.f_2095.f_539.f_1635[0 /*295*/][iVar1 /*98*/]};
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = {Global_101700.f_2095.f_539.f_1635[1 /*295*/][iVar1 /*98*/]};
		iVar0 = 0;
		while (iVar0 <= 3) {
			uParam0->f_2259[iVar1 /*15*/][iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2) {
			uParam0->f_1766[iVar1 /*164*/][iVar0] = Global_101700.f_2095[iVar1 /*164*/][iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	stats::stat_get_int(joaat("sp0_special_ability"), &uParam0->f_1762[0], -1);
	stats::stat_get_int(joaat("sp1_special_ability"), &uParam0->f_1762[1], -1);
	stats::stat_get_int(joaat("sp2_special_ability"), &uParam0->f_1762[2], -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1) {
		func_29(&uParam0->f_2311, uParam0, iParam5, 1, 1, 0);
	}
	func_28(&uParam0->f_2401);
	uParam3 = uParam3;
	uParam2 = uParam2;
}

// Position - 0x2BC8
int func_28(var *uParam0) {
	*uParam0 = Global_87673;
	uParam0->f_1 = Global_87674;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

// Position - 0x2BEA
void func_29(var *uParam0, var *uParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;

	if (iParam2 == 0) {
		iParam2 = player::player_ped_id();
	}
	if (entity::does_entity_exist(iParam2)) {
		uParam1->f_5 = func_46(iParam2);
	}
	if (func_43(iParam2, &iVar0, iParam3, iParam5)) {
		func_30(uParam0, uParam1, iVar0, iParam4);
	}
	else if (entity::does_entity_exist(iVar0)) {
		if (!entity::is_entity_dead(iVar0, 0)) {
			if (vehicle::is_vehicle_model(iVar0, joaat("skylift")) &&
				ped::is_ped_in_vehicle(player::player_ped_id(), iVar0, 0)) {
				func_30(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

// Position - 0x2C72
int func_30(var *uParam0, var *uParam1, int iParam2, int iParam3) {
	if (vehicle::is_vehicle_driveable(iParam2, 0)) {
		func_32(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_31(iParam2)) {
			uParam1->f_3 = 1;
		}
		else {
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

// Position - 0x2CB2
bool func_31(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6) {
		if (Global_91491.f_22[iVar0] == iParam0) {
			return true;
		}
		iVar0++;
	}
	return false;
}

// Position - 0x2CE0
void func_32(var *uParam0, int iParam1, int iParam2) {
	func_39(iParam1, &uParam0->f_12);
	uParam0->f_7 = func_35(iParam1, 145, 0);
	uParam0->f_11 = func_34(iParam1);
	if (!uParam0->f_7) {
		if (!uParam0->f_10) {
			uParam0->f_10 = func_33(iParam1);
		}
	}
	if (iParam2 == 1) {
		*uParam0 = {entity::get_entity_coords(iParam1, 1)};
		uParam0->f_6 = entity::get_entity_heading(iParam1);
		uParam0->f_3 = {entity::get_entity_velocity(iParam1)};
		if (entity::is_entity_in_angled_area(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f,
											 6.374244f, 13f, 0, 1, 0)) {
			*uParam0 = {-1160.095f, -1515.407f, 3.1496f};
			uParam0->f_6 = 305.6424f;
		}
		if (Global_69436 == iParam1) {
			uParam0->f_9 = 1;
		}
	}
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		uParam0->f_8 = 1;
	}
	else {
		uParam0->f_8 = 0;
	}
}

// Position - 0x2DBC
int func_33(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68) {
		if (entity::does_entity_exist(Global_68531.f_484[iVar0])) {
			if (iParam0 == Global_68531.f_484[iVar0]) {
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x2DFE
int func_34(int iParam0) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 145;
	}
	if (!vehicle::is_vehicle_driveable(iParam0, 0)) {
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9) {
		if (entity::does_entity_exist(Global_89155[iVar0])) {
			if (Global_89155[iVar0] == iParam0) {
				return Global_89165[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

// Position - 0x2E61
int func_35(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	if (!vehicle::is_vehicle_driveable(iParam0, 0)) {
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9) {
		if (entity::does_entity_exist(Global_89155[iVar0])) {
			if (Global_89155[iVar0] == iParam0) {
				if (iParam1 == 145 || iParam1 == Global_89165[iVar0]) {
					if (iParam2 == 0 || entity::get_entity_model(iParam0) == func_36(iParam1, iParam2)) {
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x2EEF
int func_36(int iParam0, int iParam1) {
	struct<82> Var0;

	if (func_38(iParam0)) {
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_37(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x2F31
void func_37(int iParam0, var *uParam1, int iParam2) {
	int iVar0;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0) {
	case 0:
		iVar0 = joaat("tailgater");
		if (Global_101700.f_8044.f_99.f_58[128] && !Global_101700.f_8044.f_99.f_58[131]) {
			iVar0 = joaat("premier");
		}
		switch (iVar0) {
		case joaat("tailgater"):
			*uParam1 = iVar0;
			uParam1->f_2 = 3f;
			uParam1->f_4 = 0;
			uParam1->f_9 = 1;
			uParam1->f_11[0] = 1;
			StringCopy(&uParam1->f_27, "5MDS003", 16);
			break;

		case joaat("premier"):
			*uParam1 = iVar0;
			uParam1->f_2 = 14.9f;
			uParam1->f_5 = 43;
			uParam1->f_6 = 43;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_9 = 0;
			StringCopy(&uParam1->f_27, "880HS955", 16);
			break;
		}
		break;

	case 2:
		iVar0 = joaat("bodhi2");
		switch (iVar0) {
		case joaat("bodhi2"):
			*uParam1 = iVar0;
			uParam1->f_2 = 14f;
			uParam1->f_5 = 32;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			StringCopy(&uParam1->f_27, "BETTY 32", 16);
			if (Global_101700.f_8044.f_99.f_58[119]) {
				uParam1->f_11[1] = 1;
			}
			break;
		}
		break;

	case 1:
		if (iParam2 == 1) {
			iVar0 = joaat("buffalo2");
		}
		else if (iParam2 == 2) {
			iVar0 = joaat("bagger");
		}
		else if (Global_101700.f_8044.f_99.f_58[118]) {
			iVar0 = joaat("bagger");
		}
		else {
			iVar0 = joaat("buffalo2");
		}
		switch (iVar0) {
		case joaat("bagger"):
			*uParam1 = iVar0;
			uParam1->f_2 = 6f;
			uParam1->f_5 = 53;
			uParam1->f_6 = 0;
			uParam1->f_7 = 59;
			uParam1->f_8 = 156;
			StringCopy(&uParam1->f_27, "FC88", 16);
			break;

		case joaat("buffalo2"):
			*uParam1 = iVar0;
			uParam1->f_2 = 0f;
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_10 = 1;
			StringCopy(&uParam1->f_27, "FC1988", 16);
			uParam1->f_11[0] = 1;
			uParam1->f_11[1] = 1;
			uParam1->f_11[2] = 1;
			uParam1->f_11[3] = 1;
			uParam1->f_11[4] = 1;
			uParam1->f_11[5] = 1;
			uParam1->f_11[6] = 1;
			uParam1->f_11[7] = 1;
			uParam1->f_11[8] = 1;
			break;
		}
		break;

	default: break;
	}
}

// Position - 0x318D
bool func_38(int iParam0) { return iParam0 < 3; }

// Position - 0x3199
void func_39(int iParam0, var *uParam1) {
	int iVar0;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		func_42(uParam1);
		uParam1->f_66 = entity::get_entity_model(iParam0);
		StringCopy(&uParam1->f_1, vehicle::get_vehicle_number_plate_text(iParam0), 16);
		*uParam1 = vehicle::get_vehicle_number_plate_text_index(iParam0);
		vehicle::get_vehicle_colours(iParam0, &uParam1->f_5, &uParam1->f_6);
		vehicle::get_vehicle_extra_colours(iParam0, &uParam1->f_7, &uParam1->f_8);
		vehicle::get_vehicle_tyre_smoke_color(iParam0, &uParam1->f_62, &uParam1->f_63, &uParam1->f_64);
		uParam1->f_65 = vehicle::get_vehicle_window_tint(iParam0);
		uParam1->f_67 = vehicle::get_vehicle_livery(iParam0);
		uParam1->f_69 = vehicle::get_vehicle_wheel_type(iParam0);
		uParam1->f_70 = vehicle::get_vehicle_door_lock_status(iParam0);
		vehicle::get_vehicle_custom_secondary_colour(iParam0, &uParam1->f_71, &uParam1->f_72, &uParam1->f_73);
		vehicle::_get_vehicle_neon_lights_colour(iParam0, &uParam1->f_74, &uParam1->f_75, &uParam1->f_76);
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 2)) {
			gameplay::set_bit(&uParam1->f_77, 28);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 3)) {
			gameplay::set_bit(&uParam1->f_77, 29);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 0)) {
			gameplay::set_bit(&uParam1->f_77, 30);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 1)) {
			gameplay::set_bit(&uParam1->f_77, 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger")) {
			uParam1->f_65 = 0;
		}
		if (vehicle::is_vehicle_a_convertible(iParam0, 0)) {
			uParam1->f_68 = vehicle::get_convertible_roof_state(iParam0);
		}
		if (vehicle::is_this_model_a_plane(uParam1->f_66)) {
			if (vehicle::_vehicle_has_landing_gear(iParam0)) {
				switch (vehicle::get_landing_gear_state(iParam0)) {
				case 2:
				case 0:
					gameplay::clear_bit(&uParam1->f_77, 23);
					gameplay::set_bit(&uParam1->f_77, 22);
					break;

				case 3:
				case 1:
					gameplay::clear_bit(&uParam1->f_77, 23);
					gameplay::clear_bit(&uParam1->f_77, 22);
					break;

				case 4: gameplay::set_bit(&uParam1->f_77, 23); break;
				}
			}
			else {
				gameplay::set_bit(&uParam1->f_77, 23);
			}
		}
		if (!vehicle::get_vehicle_tyres_can_burst(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 9);
		}
		if (vehicle::is_vehicle_stolen(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 10);
		}
		if (vehicle::get_is_vehicle_primary_colour_custom(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 13);
			vehicle::get_vehicle_custom_primary_colour(iParam0, &uParam1->f_71, &uParam1->f_72, &uParam1->f_73);
		}
		if (vehicle::get_is_vehicle_secondary_colour_custom(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 12);
		}
		func_41(&iParam0, &uParam1->f_9, &uParam1->f_59);
		iVar0 = 0;
		while (iVar0 <= 11) {
			if (vehicle::is_vehicle_extra_turned_on(iParam0, iVar0 + 1)) {
				gameplay::set_bit(&uParam1->f_77, func_40(iVar0 + 1));
			}
			iVar0++;
		}
		if (graphics::_does_vehicle_have_decal(iParam0, 0)) {
			gameplay::set_bit(&uParam1->f_77, 11);
		}
		else {
			gameplay::clear_bit(&uParam1->f_77, 11);
		}
		if (decorator::decor_exist_on(iParam0, "IgnoredByQuickSave") &&
			decorator::decor_get_bool(iParam0, "IgnoredByQuickSave")) {
			gameplay::set_bit(&uParam1->f_77, 27);
		}
		else {
			gameplay::clear_bit(&uParam1->f_77, 27);
		}
	}
}

// Position - 0x3445
int func_40(int iParam0) {
	switch (iParam0) {
	case 1: return 0;

	case 2: return 1;

	case 3: return 2;

	case 4: return 3;

	case 5: return 4;

	case 6: return 5;

	case 7: return 6;

	case 8: return 7;

	case 9: return 8;

	case 10: return 24;

	case 11: return 25;

	case 12: return 26;
	}
	return 0;
}

// Position - 0x34F5
int func_41(int iParam0, var *uParam1, var *uParam2) {
	int iVar0;
	int iVar1;

	if (!vehicle::is_vehicle_driveable(*iParam0, 0)) {
		return 0;
	}
	if (vehicle::get_num_mod_kits(*iParam0) == 0) {
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1) {
		iVar1 = iVar0;
		if (iVar1 == 17 || iVar1 == 18 || iVar1 == 19 || iVar1 == 20 || iVar1 == 21 || iVar1 == 22) {
			(*uParam1)[iVar0] = 0;
			if (vehicle::is_toggle_mod_on(*iParam0, iVar1)) {
				(*uParam1)[iVar0] = 1;
			}
		}
		else {
			(*uParam1)[iVar0] = vehicle::get_vehicle_mod(*iParam0, iVar0) + 1;
			if (iVar0 == 23) {
				(*uParam2)[0] = vehicle::get_vehicle_mod_variation(*iParam0, iVar0);
			}
			else if (iVar0 == 24) {
				(*uParam2)[1] = vehicle::get_vehicle_mod_variation(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

// Position - 0x35CF
void func_42(var *uParam0) {
	int iVar0;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&uParam0->f_1, "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49) {
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2) {
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

// Position - 0x3680
bool func_43(int iParam0, var *uParam1, int iParam2, int iParam3) {
	char *sVar0;

	if (entity::does_entity_exist(iParam0)) {
		if (!ped::is_ped_injured(iParam0)) {
			if (iParam0 == player::player_ped_id()) {
				*uParam1 = player::get_players_last_vehicle();
			}
			else {
				*uParam1 = ped::get_vehicle_ped_is_in(iParam0, 1);
			}
			if (entity::does_entity_exist(*uParam1)) {
				if (vehicle::is_vehicle_driveable(*uParam1, 0)) {
					if (iParam2 == 0 ||
						gameplay::get_distance_between_coords(entity::get_entity_coords(*uParam1, 1),
															  entity::get_entity_coords(iParam0, 1), 1) < 100f) {
						if (vehicle::is_vehicle_model(*uParam1, joaat("taxi"))) {
							if (vehicle::get_ped_in_vehicle_seat(*uParam1, -1, 0) != iParam0 &&
								vehicle::get_ped_in_vehicle_seat(*uParam1, -1, 0) != 0) {
								return false;
							}
						}
						if (func_44(*uParam1, func_92(), 1)) {
							sVar0 = script::get_this_script_name();
							if (!gameplay::are_strings_equal(sVar0, "save_anywhere")) {
								return false;
							}
							else if (!ped::is_ped_in_any_vehicle(iParam0, 1)) {
								return false;
							}
						}
						if (iParam3 == 1) {
							if (decorator::decor_exist_on(*uParam1, "IgnoredByQuickSave")) {
								if (decorator::decor_get_bool(*uParam1, "IgnoredByQuickSave")) {
									return false;
								}
							}
						}
						else if (vehicle::is_vehicle_model(*uParam1, joaat("blimp"))) {
							return false;
						}
						return true;
					}
				}
			}
		}
	}
	return false;
}

// Position - 0x37AF
bool func_44(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	char *sVar1;
	int iVar9;

	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0)) {
		return false;
	}
	iVar0 = 0;
	while (func_45(iParam1, iVar0, &sVar1, &iVar9)) {
		if (!iParam2 || gameplay::is_bit_set(Global_101700.f_6188[iVar9], 0)) {
			if (vehicle::is_vehicle_in_garage_area(&sVar1, iParam0)) {
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0x3820
bool func_45(int iParam0, int iParam1, char *sParam2, int *iParam3) {
	StringCopy(sParam2, "", 32);
	switch (iParam0) {
	case 0:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Michael - Beverly Hills", 32);
			*iParam3 = 0;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Trevor - Countryside", 32);
			*iParam3 = 1;
			return true;
		}
		break;

	case 1:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Franklin - Aunt", 32);
			*iParam3 = 5;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Franklin - Hills", 32);
			*iParam3 = 6;
			return true;
		}
		break;

	case 2:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Trevor - Countryside", 32);
			*iParam3 = 2;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Trevor - City", 32);
			*iParam3 = 3;
			return true;
		}
		else if (iParam1 == 2) {
			StringCopy(sParam2, "Trevor - Stripclub", 32);
			*iParam3 = 4;
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x38F9
int func_46(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_47(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x3936
int func_47(int iParam0) {
	if (func_38(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x3960
void func_48(int iParam0, var *uParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = func_46(iParam0);
		iVar1 = 0;
		while (iVar1 < 12) {
			func_54(iParam0, iVar1, &uParam1->f_13[iVar1], &(*uParam1)[iVar1], &uParam1->f_26[iVar1], iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9) {
			func_53(iParam0, iVar1, &uParam1->f_39[iVar1], &uParam1->f_49[iVar1], iParam2, 145);
			iVar1++;
		}
		if (func_38(iVar0)) {
			uParam1->f_59 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_64;
		}
		else if (network::network_is_game_in_progress() &&
				 entity::get_entity_model(iParam0) == entity::get_entity_model(player::player_ped_id())) {
			if (func_52(161, -1)) {
				uParam1->f_59 = func_49(2045, Global_69521, 0);
			}
			else {
				uParam1->f_59 = func_49(747, Global_69521, 0);
			}
			uParam1->f_60 = func_49(748, Global_69521, 0);
			uParam1->f_61 = func_49(749, Global_69521, 0);
		}
		if (network::network_is_game_in_progress() && iParam0 == player::player_ped_id()) {
			if (func_52(161, -1)) {
				uParam1->f_59 = func_49(2045, Global_69521, 0);
			}
			else {
				uParam1->f_59 = func_49(747, Global_69521, 0);
			}
		}
	}
}

// Position - 0x3B0A
int func_49(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_50(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x3B3C
int func_50(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_51();
		if (iVar1 > -1) {
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else {
			iVar0 = 0;
			Global_2503539 = 1;
		}
	}
	return iVar0;
}

// Position - 0x3B70
var func_51() { return Global_1312735; }

// Position - 0x3B7C
bool func_52(int iParam0, int iParam1) {
	int iVar0;
	var uVar1;

	iVar0 = Global_2522581[iParam0 /*3*/][func_50(iParam1)];
	if (stats::stat_get_bool(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return false;
}

// Position - 0x3BA8
void func_53(int iParam0, int iParam1, int *iParam2, int *iParam3, int iParam4, int iParam5) {
	int iVar0;

	iVar0 = func_46(iParam0);
	if (iParam0 != 0) {
		*iParam2 = ped::get_ped_prop_index(iParam0, iParam1);
		*iParam3 = ped::get_ped_prop_texture_index(iParam0, iParam1);
	}
	else {
		iVar0 = iParam5;
	}
	if (iParam4 == 0) {
		return;
	}
	if (iParam1 == 0) {
		if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
			if (iParam0 != 0) {
				if (ped::is_ped_wearing_helmet(iParam0) && ped::_0x451294E859ECC018(iParam0) != -1) {
					*iParam2 = ped::_0x451294E859ECC018(iParam0);
					*iParam3 = ped::_0x9D728C1E12BF5518(iParam0);
				}
			}
		}
	}
	switch (iVar0) {
	case 0:
		if (iParam1 == 0) {
			if (*iParam2 == 7) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 11) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 21) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 16) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 23) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 27) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 28) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 >= 14 && *iParam2 <= 20) {
				if ((iParam4 & 2) != 0 || (iParam4 & 4) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
		}
		else if (iParam1 == 1) {
			if (*iParam2 == 1) {
				if ((iParam4 & 2) != 0 || (iParam4 & 64) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
		}
		break;

	case 1:
		if (iParam1 == 0) {
			if (*iParam2 == 2) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 4) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 16) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 6) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 17) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 20) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 21) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 >= 8 && *iParam2 <= 14) {
				if ((iParam4 & 2) != 0 || (iParam4 & 4) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
		}
		break;

	case 2:
		if (iParam1 == 0) {
			if (*iParam2 == 9) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 11) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 12) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 21) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 23) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 27) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 >= 14 && *iParam2 <= 20 || *iParam2 == 2) {
				if ((iParam4 & 2) != 0 || (iParam4 & 4) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
		}
		break;
	}
}

// Position - 0x40F1
void func_54(int iParam0, int iParam1, int *iParam2, int *iParam3, var *uParam4, int iParam5, int iParam6) {
	int iVar0;

	iVar0 = func_46(iParam0);
	if (iParam0 != 0) {
		*iParam2 = ped::get_ped_drawable_variation(iParam0, iParam1);
		*iParam3 = ped::get_ped_texture_variation(iParam0, iParam1);
		*uParam4 = ped::get_ped_palette_variation(iParam0, iParam1);
	}
	else {
		iVar0 = iParam6;
	}
	if (iParam5 == 0) {
		return;
	}
	switch (iVar0) {
	case 0:
		if (iParam1 == 8) {
			if ((iParam5 & 1) != 0 || (iParam5 & 2) != 0 || (iParam5 & 32) != 0) {
				if (*iParam2 == 15) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
			if ((iParam5 & 2) != 0 || (iParam5 & 64) != 0) {
				if (*iParam2 == 3 || *iParam2 == 22) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
		}
		else if (iParam1 == 9) {
			if ((iParam5 & 1) != 0 || (iParam5 & 2) != 0 || (iParam5 & 32) != 0) {
				if (*iParam2 == 5) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
			if ((iParam5 & 2) != 0 || (iParam5 & 4) != 0) {
				if (*iParam2 == 8) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
		}
		break;

	case 1:
		if (iParam1 == 8) {
			if ((iParam5 & 1) != 0 || (iParam5 & 2) != 0 || (iParam5 & 32) != 0) {
				if (*iParam2 == 1 || *iParam2 == 10) {
					*iParam2 = 14;
					*iParam3 = 0;
				}
			}
			if ((iParam5 & 2) != 0 || (iParam5 & 64) != 0) {
				if (*iParam2 == 19) {
					*iParam2 = 14;
					*iParam3 = 0;
				}
			}
		}
		else if (iParam1 == 9) {
			if ((iParam5 & 2) != 0 || (iParam5 & 4) != 0) {
				if (*iParam2 == 5) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
		}
		break;

	case 2:
		if (iParam1 == 8) {
			if ((iParam5 & 1) != 0 || (iParam5 & 2) != 0 || (iParam5 & 32) != 0) {
				if (*iParam2 == 3) {
					*iParam2 = 14;
					*iParam3 = 0;
				}
			}
		}
		else if (iParam1 == 9) {
			if (*iParam2 >= 5 && *iParam2 <= 7) {
				if ((iParam5 & 2) != 0 || (iParam5 & 4) != 0) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
		}
		break;
	}
}

// Position - 0x4332
int func_55() {
	func_56();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x434B
void func_56() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_47(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_46(player::player_ped_id());
			if (func_38(iVar0) && (!func_57(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_38(Global_101700.f_2095.f_539.f_3549)) {
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else {
			if (Global_101700.f_2095.f_539.f_3549 != 145) {
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

// Position - 0x4448
bool func_57(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x4456
void func_58(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_46(iParam0);
	if (func_38(iVar0) && !ped::is_ped_injured(iParam0)) {
		if (iParam0 == player::player_ped_id()) {
			func_59(iParam0, &Global_101700.f_2095.f_539.f_298[iVar0 /*284*/]);
			iVar2 = 0;
			while (iVar2 <= 8 - 1) {
				Global_101700.f_2095.f_539.f_1151[iVar2 /*4*/][iVar0] = ui::_0xA13E93403F26C812(iVar2);
				if (iParam1) {
					iVar1 = ui::_0xA48931185F0536FE();
					if (Global_101700.f_2095.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1) {
						Global_101700.f_2095.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			player::get_player_parachute_pack_tint_index(player::player_id(), &iVar3);
			if (iVar0 == 0) {
				stats::stat_set_int(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1) {
				stats::stat_set_int(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2) {
				stats::stat_set_int(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

// Position - 0x4549
void func_59(int iParam0, var *uParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;

	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = 0;
		while (iVar0 <= 44 - 1) {
			(*uParam1)[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 44 - 1) {
			iVar3 = func_63(iVar0);
			if (iVar3 != 0) {
				vVar4.x = weapon::get_ped_weapontype_in_slot(iParam0, func_63(iVar0));
				vVar4.y = 0;
				vVar4.z = 0;
				if (vVar4.x != 0 && vVar4.x != joaat("weapon_unarmed")) {
					vVar4.y = weapon::get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (vVar4.x == joaat("gadget_parachute")) {
						vVar4.y = 1;
					}
					gameplay::set_bit(&vVar4.f_2, 20 + weapon::get_ped_weapon_tint_index(iParam0, vVar4.x));
					if (vVar4.y == -1) {
						if (!weapon::get_max_ammo(iParam0, vVar4.x, &vVar4.f_1)) {
							vVar4.y = 0;
						}
					}
					(*uParam1)[iVar0 /*3*/].f_1 = vVar4.y;
					iVar1 = 0;
					iVar2 = func_61(vVar4.x, iVar1);
					while (iVar2 != 0) {
						if (weapon::has_ped_got_weapon_component(iParam0, vVar4.x, iVar2)) {
							gameplay::set_bit(&vVar4.f_2, iVar1);
						}
						iVar1++;
						iVar2 = func_61(vVar4.x, iVar1);
					}
				}
				(*uParam1)[iVar0 /*3*/] = {vVar4};
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50 - 1) {
			uParam1->f_133[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar8 = dlc1::get_num_dlc_weapons();
		iVar7 = 0;
		while (iVar7 < iVar8) {
			if (dlc1::get_dlc_weapon_data(iVar7, &Var9) && !func_60(Var9.f_1) && iVar70 < 50) {
				if (!dlc1::_is_dlc_data_empty(Var9)) {
					vVar4.x = Var9.f_1;
					vVar4.y = 0;
					vVar4.z = 0;
					vVar4.y = weapon::get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (weapon::has_ped_got_weapon(iParam0, vVar4.x, 0)) {
						gameplay::set_bit(&vVar4.f_2, 20 + weapon::get_ped_weapon_tint_index(iParam0, vVar4.x));
					}
					else {
						gameplay::set_bit(&vVar4.f_2, 20);
					}
					if (vVar4.y == -1) {
						if (!weapon::get_max_ammo(iParam0, vVar4.x, &vVar4.f_1)) {
							vVar4.y = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = vVar4.y;
					iVar1 = 0;
					while (iVar1 < dlc1::get_num_dlc_weapon_components(iVar7)) {
						if (dlc1::get_dlc_weapon_component_data(iVar7, iVar1, &Var48)) {
							if (weapon::has_ped_got_weapon_component(iParam0, vVar4.x, Var48.f_3)) {
								gameplay::set_bit(&vVar4.f_2, iVar1);
							}
						}
						iVar1++;
					}
				}
				if (vVar4.x != 0) {
					if (!weapon::has_ped_got_weapon(iParam0, vVar4.x, 0)) {
						vVar4.x = 0;
						vVar4.y = 0;
					}
				}
				uParam1->f_133[iVar70 /*3*/] = {vVar4};
				iVar70++;
			}
			iVar7++;
		}
	}
}

// Position - 0x47AD
int func_60(int iParam0) {
	if (network::network_is_game_in_progress()) {
	}
	else {
		switch (iParam0) {
		case joaat("weapon_pistol50"):
		case joaat("weapon_bullpupshotgun"):
		case joaat("weapon_assaultsmg"): return 0;

		case joaat("weapon_bottle"):
		case joaat("weapon_snspistol"):
		case joaat("weapon_gusenberg"): return 0;

		case joaat("weapon_heavypistol"):
		case joaat("weapon_specialcarbine"): return 0;

		case joaat("weapon_bullpuprifle"): return 0;

		case joaat("weapon_dagger"):
		case joaat("weapon_vintagepistol"): return 0;

		case joaat("weapon_firework"):
		case joaat("weapon_musket"): return 0;

		case joaat("weapon_heavyshotgun"):
		case joaat("weapon_marksmanrifle"): return 0;

		case joaat("weapon_hominglauncher"):
		case joaat("weapon_proxmine"): return 0;

		case joaat("weapon_combatpdw"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_marksmanpistol"): return 0;

		case -947031628:
		case -572349828:
		case 392730790:
		case -1523701417:
		case -2112826155:
		case -664359727:
		case -1887867191:
		case -837150131:
		case -344484024:
		case joaat("weapon_flaregun"):
		case joaat("weapon_handcuffs"):
		case joaat("weapon_snowball"):
		case joaat("weapon_garbagebag"):
		case joaat("weapon_flashlight"):
		case joaat("weapon_switchblade"):
		case joaat("weapon_revolver"):
		case joaat("weapon_dbshotgun"):
		case joaat("weapon_compactrifle"):
		case 317205821:
		case -1121678507:
		case 125959754:
		case -853065399:
		case -1169823560:
		case -1810795771:
		case 419712736: return 1;
		}
	}
	return 0;
}

// Position - 0x491B
int func_61(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	var *uVar2;
	struct<4> Var41;

	iVar0 = 0;
	switch (iParam0) {
	case joaat("weapon_pistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_pistol_clip_01"); break;

		case 1: iVar0 = joaat("component_pistol_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_pi_supp_02"); break;

		case 4: iVar0 = joaat("component_pistol_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_combatpistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_combatpistol_clip_01"); break;

		case 1: iVar0 = joaat("component_combatpistol_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_pi_supp"); break;

		case 4: iVar0 = joaat("component_combatpistol_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_appistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_appistol_clip_01"); break;

		case 1: iVar0 = joaat("component_appistol_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_pi_supp"); break;

		case 4: iVar0 = joaat("component_appistol_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_microsmg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_microsmg_clip_01"); break;

		case 1: iVar0 = joaat("component_microsmg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_macro"); break;

		case 4: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 5: iVar0 = joaat("component_microsmg_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_smg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_smg_clip_01"); break;

		case 1: iVar0 = joaat("component_smg_clip_02"); break;

		case 2: iVar0 = joaat("component_smg_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_pi_supp"); break;

		case 5: iVar0 = joaat("component_at_scope_macro_02"); break;

		case 6: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 7: iVar0 = joaat("component_smg_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_assaultrifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_assaultrifle_clip_01"); break;

		case 1: iVar0 = joaat("component_assaultrifle_clip_02"); break;

		case 2: iVar0 = joaat("component_assaultrifle_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 4: iVar0 = joaat("component_at_ar_flsh"); break;

		case 5: iVar0 = joaat("component_at_scope_macro"); break;

		case 6: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 7: iVar0 = joaat("component_assaultrifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_carbinerifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_carbinerifle_clip_01"); break;

		case 1: iVar0 = joaat("component_carbinerifle_clip_02"); break;

		case 2: iVar0 = joaat("component_carbinerifle_clip_03"); break;

		case 3: iVar0 = joaat("component_at_railcover_01"); break;

		case 4: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 5: iVar0 = joaat("component_at_ar_flsh"); break;

		case 6: iVar0 = joaat("component_at_scope_medium"); break;

		case 7: iVar0 = joaat("component_at_ar_supp"); break;

		case 8: iVar0 = joaat("component_carbinerifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_advancedrifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_advancedrifle_clip_01"); break;

		case 1: iVar0 = joaat("component_advancedrifle_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_small"); break;

		case 4: iVar0 = joaat("component_at_ar_supp"); break;

		case 5: iVar0 = joaat("component_advancedrifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_mg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_mg_clip_01"); break;

		case 1: iVar0 = joaat("component_mg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_scope_small_02"); break;

		case 3: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 4: iVar0 = joaat("component_mg_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_combatmg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_combatmg_clip_01"); break;

		case 1: iVar0 = joaat("component_combatmg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 3: iVar0 = joaat("component_at_scope_medium"); break;

		case 4: iVar0 = joaat("component_combatmg_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_pumpshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_at_sr_supp"); break;

		case 1: iVar0 = joaat("component_at_ar_flsh"); break;

		case 2: iVar0 = joaat("component_pumpshotgun_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_assaultshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_assaultshotgun_clip_01"); break;

		case 1: iVar0 = joaat("component_assaultshotgun_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_ar_supp"); break;
		}
		break;

	case joaat("weapon_sniperrifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_sniperrifle_clip_01"); break;

		case 1: iVar0 = joaat("component_at_scope_large"); break;

		case 2: iVar0 = joaat("component_at_scope_max"); break;

		case 3: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 4: iVar0 = joaat("component_sniperrifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_heavysniper"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_heavysniper_clip_01"); break;

		case 1: iVar0 = joaat("component_at_scope_large"); break;

		case 2: iVar0 = joaat("component_at_scope_max"); break;
		}
		break;

	case joaat("weapon_grenadelauncher"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 1: iVar0 = joaat("component_at_ar_flsh"); break;

		case 2: iVar0 = joaat("component_at_scope_small"); break;
		}
		break;

	case joaat("weapon_minigun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_minigun_clip_01"); break;
		}
		break;

	case joaat("weapon_assaultsmg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_assaultsmg_clip_01"); break;

		case 1: iVar0 = joaat("component_assaultsmg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_macro"); break;

		case 4: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 5: iVar0 = joaat("component_assaultsmg_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_bullpupshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 1: iVar0 = joaat("component_at_ar_flsh"); break;

		case 2: iVar0 = joaat("component_at_ar_supp_02"); break;
		}
		break;

	case joaat("weapon_pistol50"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_pistol50_clip_01"); break;

		case 1: iVar0 = joaat("component_pistol50_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 4: iVar0 = joaat("component_pistol50_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_combatpdw"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_combatpdw_clip_01"); break;

		case 1: iVar0 = joaat("component_combatpdw_clip_02"); break;

		case 2: iVar0 = joaat("component_combatpdw_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_scope_small"); break;

		case 5: iVar0 = joaat("component_at_ar_afgrip"); break;
		}
		break;

	case joaat("weapon_sawnoffshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_sawnoffshotgun_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_bullpuprifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_bullpuprifle_clip_01"); break;

		case 1: iVar0 = joaat("component_bullpuprifle_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_small"); break;

		case 4: iVar0 = joaat("component_at_ar_supp"); break;

		case 5: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 6: iVar0 = joaat("component_bullpuprifle_varmod_low"); break;
		}
		break;

	case joaat("weapon_snspistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_snspistol_clip_01"); break;

		case 1: iVar0 = joaat("component_snspistol_clip_02"); break;

		case 2: iVar0 = joaat("component_snspistol_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_specialcarbine"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_specialcarbine_clip_01"); break;

		case 1: iVar0 = joaat("component_specialcarbine_clip_02"); break;

		case 2: iVar0 = joaat("component_specialcarbine_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_scope_medium"); break;

		case 5: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 6: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 7: iVar0 = joaat("component_specialcarbine_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_knuckle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_knuckle_varmod_pimp"); break;

		case 1: iVar0 = joaat("component_knuckle_varmod_ballas"); break;

		case 2: iVar0 = joaat("component_knuckle_varmod_dollar"); break;

		case 3: iVar0 = joaat("component_knuckle_varmod_diamond"); break;

		case 4: iVar0 = joaat("component_knuckle_varmod_hate"); break;

		case 5: iVar0 = joaat("component_knuckle_varmod_love"); break;

		case 6: iVar0 = joaat("component_knuckle_varmod_player"); break;

		case 7: iVar0 = joaat("component_knuckle_varmod_king"); break;

		case 8: iVar0 = joaat("component_knuckle_varmod_vagos"); break;
		}
		break;

	case joaat("weapon_machinepistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_machinepistol_clip_01"); break;

		case 1: iVar0 = joaat("component_machinepistol_clip_02"); break;

		case 2: iVar0 = joaat("component_machinepistol_clip_03"); break;

		case 3: iVar0 = joaat("component_at_pi_supp"); break;
		}
		break;

	case joaat("weapon_switchblade"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_switchblade_varmod_var1"); break;

		case 1: iVar0 = joaat("component_switchblade_varmod_var2"); break;
		}
		break;

	case joaat("weapon_revolver"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_revolver_clip_01"); break;

		case 1: iVar0 = joaat("component_revolver_varmod_boss"); break;

		case 2: iVar0 = joaat("component_revolver_varmod_goon"); break;
		}
		break;

	case -1121678507:
		switch (iParam1) {
		case 0: iVar0 = -2067221805; break;

		case 1: iVar0 = -1820405577; break;
		}
		break;

	default:
		if (iParam0 != 0) {
			iVar1 = func_62(iParam0, &uVar2);
			if (iVar1 != -1) {
				if (iParam1 < dlc1::get_num_dlc_weapon_components(iVar1)) {
					if (dlc1::get_dlc_weapon_component_data(iVar1, iParam1, &Var41)) {
						return Var41.f_3;
					}
				}
			}
		}
		break;
	}
	return iVar0;
}

// Position - 0x5407
int func_62(int iParam0, var *uParam1) {
	int iVar0;
	int iVar1;

	iVar1 = dlc1::get_num_dlc_weapons();
	iVar0 = 0;
	while (iVar0 < iVar1) {
		if (dlc1::get_dlc_weapon_data(iVar0, uParam1)) {
			if (uParam1->f_1 == iParam0) {
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x5442
int func_63(int iParam0) {
	int iVar0;

	iVar0 = 0;
	switch (iParam0) {
	case 0: iVar0 = 1993361168; break;

	case 1: iVar0 = 1277010230; break;

	case 2: iVar0 = 932043479; break;

	case 3: iVar0 = -690654591; break;

	case 4: iVar0 = -1459198205; break;

	case 5: iVar0 = 195782970; break;

	case 6: iVar0 = -438797331; break;

	case 7: iVar0 = 896793492; break;

	case 8: iVar0 = 495159329; break;

	case 9: iVar0 = -1155528315; break;

	case 10: iVar0 = -515636489; break;

	case 11: iVar0 = -871913299; break;

	case 12: iVar0 = -1352759032; break;

	case 13: iVar0 = -542958961; break;

	case 14: iVar0 = 1682645887; break;

	case 15: iVar0 = -859470162; break;

	case 16: iVar0 = -2125426402; break;

	case 17: iVar0 = 2067210266; break;

	case 18: iVar0 = -538172856; break;

	case 19: iVar0 = 1783244476; break;

	case 20: iVar0 = 439844898; break;

	case 21: iVar0 = -24829327; break;

	case 22: iVar0 = 1949306232; break;

	case 23: iVar0 = -1941230881; break;

	case 24: iVar0 = -1033554448; break;

	case 25: iVar0 = 320513715; break;

	case 26: iVar0 = -695165975; break;

	case 27: iVar0 = -281028447; break;

	case 28: iVar0 = -686713772; break;

	case 29: iVar0 = 347509793; break;

	case 30: iVar0 = 1769089473; break;

	case 31: iVar0 = 189935548; break;

	case 33: iVar0 = 248801358; break;

	case 34: iVar0 = 386596758; break;

	case 35: iVar0 = -157212362; break;

	case 36: iVar0 = 436985596; break;

	case 37: iVar0 = -47957369; break;

	case 38: iVar0 = 575938238; break;
	}
	return iVar0;
}

// Position - 0x56B6
void func_64(int iParam0) {
	int iVar0;

	iVar0 = func_46(iParam0);
	if (func_38(iVar0) && !ped::is_ped_injured(iParam0)) {
		Global_101700.f_2095.f_539.f_294[iVar0] = ped::get_ped_armour(iParam0);
	}
}

// Position - 0x56F2
void func_65(var *uParam0, int iParam1) {
	int iVar0;
	vector3 vVar1;
	float *fVar4;
	int iVar5;

	*uParam0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	uParam0->f_3 = entity::get_entity_heading(player::player_ped_id());
	uParam0->f_5 = ped::get_ped_parachute_state(player::player_ped_id());
	if (player::is_player_playing(player::player_id())) {
		uParam0->f_4 = player::get_player_wanted_level(player::player_id());
	}
	if (system::vdist(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f) {
		*uParam0 = {301.2162f, 202.1357f, 103.3797f};
		uParam0->f_3 = 156.5144f;
	}
	else if (system::vdist(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f) {
		*uParam0 = {394.2567f, -713.5439f, 28.2853f};
		uParam0->f_3 = 276.6273f;
	}
	else if (system::vdist(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f) {
		*uParam0 = {-1423.472f, -214.2539f, 45.5004f};
		uParam0->f_3 = 353.8757f;
	}
	else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("finale_choice")) > 0) {
		*uParam0 = {4.2587f, 525.0214f, 173.6281f};
		uParam0->f_3 = 203.6746f;
	}
	else if (gameplay::is_bit_set(Global_69950, 4)) {
		*uParam0 = {452.0255f, 5571.85f, 780.1859f};
		uParam0->f_3 = 78.9858f;
	}
	else if (gameplay::is_bit_set(Global_69950, 5)) {
		*uParam0 = {-745.4462f, 5595.146f, 40.6594f};
		uParam0->f_3 = 261.747f;
	}
	else if (gameplay::is_bit_set(Global_69950, 6)) {
		*uParam0 = {-1675.521f, -1125.59f, 12.091f};
		uParam0->f_3 = 271.8208f;
	}
	else if (gameplay::is_bit_set(Global_69950, 7)) {
		*uParam0 = {-1631.219f, -1112.805f, 12.0212f};
		uParam0->f_3 = 316.8879f;
	}
	else if (interior::get_interior_from_entity(player::player_ped_id()) ==
			 interior::get_interior_at_coords_with_type(1272.659f, -1715.467f, 53.7715f, "v_lesters")) {
		*uParam0 = {1276.956f, -1725.189f, 53.6551f};
		uParam0->f_3 = 204.1703f;
	}
	else if (entity::is_entity_in_angled_area(player::player_ped_id(), -415.4365f, 2068.289f, 113.3002f, -564.9516f,
											  1884.703f, 134.0403f, 258.75f, 0, 1, 0) ||
			 entity::is_entity_in_angled_area(player::player_ped_id(), -596.4706f, 2089.921f, 125.4128f, -581.2134f,
											  2036.256f, 136.2836f, 9.5f, 0, 1, 0)) {
		*uParam0 = {-601.59f, 2099.197f, 128.8928f};
		uParam0->f_3 = 204.7498f;
	}
	else if (system::vdist(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f) {
		*uParam0 = {-1018.376f, -483.9436f, 36.0964f};
		uParam0->f_3 = 114.7664f;
	}
	else if (system::vdist(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f) {
		*uParam0 = {497.7238f, -1310.932f, 28.2372f};
		uParam0->f_3 = 289.3663f;
	}
	else if (system::vdist(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f) {
		*uParam0 = {2316.93f, 2594.153f, 45.7199f};
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1) {
		if (func_69(&iVar0)) {
			if (func_67(iVar0, &vVar1, &fVar4)) {
				vVar1.z++;
				*uParam0 = {vVar1};
				uParam0->f_3 = fVar4;
			}
		}
		else if (entity::is_entity_in_angled_area(player::player_ped_id(), 207.4336f, -1019.795f, -100.4728f, 189.9338f,
												  -1019.623f, -95.56883f, 17.1875f, 0, 1, 0)) {
			iVar5 = func_92();
			if (iVar5 == 0) {
				*uParam0 = {-65.1234f, 81.2517f, 70.5644f};
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1) {
				*uParam0 = {-68.5531f, -1824.377f, 25.9424f};
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2) {
				*uParam0 = {-220.8189f, -1162.302f, 22.0242f};
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (entity::is_entity_in_angled_area(player::player_ped_id(), 483.7175f, -1326.63f, 28.2135f, 474.9644f,
												  -1307.998f, 34.49498f, 12f, 0, 1, 0)) {
			*uParam0 = {495.4108f, -1306.08f, 29.2883f};
			uParam0->f_3 = 213.6273f;
		}
		else if (entity::is_entity_in_angled_area(player::player_ped_id(), -1146.77f, -1534.22f, 3.37f, -1158.453f,
												  -1517.75f, 6.374244f, 13f, 0, 1, 0)) {
			*uParam0 = {-1160.095f, -1515.407f, 3.1496f};
			uParam0->f_3 = 305.6424f;
		}
		else if (entity::is_entity_in_angled_area(player::player_ped_id(), 439.5432f, -996.9769f, 24.88307f, 428.2935f,
												  -997.0192f, 28.57458f, 8.5f, 0, 1, 0)) {
			*uParam0 = {431.8853f, -1013.133f, 28.7907f};
			uParam0->f_3 = 186.6814f;
		}
		else if (func_66(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f)) {
			*uParam0 = {279.4137f, -585.8815f, 43.2502f};
			uParam0->f_3 = 48.8028f;
		}
	}
}

// Position - 0x5C4D
bool func_66(vector3 vParam0, char *sParam3, vector3 vParam4) {
	int iVar0;
	int iVar1;

	if (!interior::_are_coords_colliding_with_exterior(vParam0)) {
		iVar0 = interior::get_interior_at_coords_with_type(vParam4, sParam3);
		if (!interior::is_valid_interior(iVar0)) {
			return false;
		}
		iVar1 = interior::get_interior_from_collision(vParam0);
		if (iVar1 == iVar0) {
			return true;
		}
	}
	return false;
}

// Position - 0x5C91
bool func_67(int iParam0, var *uParam1, float *fParam2) {
	*uParam1 = {0f, 0f, 0f};
	*fParam2 = 0f;
	switch (iParam0) {
	case 0:
		*uParam1 = {-829.842f, -191.7454f, 36.4386f};
		*fParam2 = 29.5061f;
		break;

	case 1:
		*uParam1 = {129.8484f, -1716.528f, 28.0702f};
		*fParam2 = 50.3483f;
		break;

	case 2:
		*uParam1 = {-1296.913f, -1120.999f, 5.3951f};
		*fParam2 = 0.9933f;
		break;

	case 3:
		*uParam1 = {1938.028f, 3718.736f, 31.3154f};
		*fParam2 = 118.2305f;
		break;

	case 4:
		*uParam1 = {1197.866f, -469.3809f, 65.0885f};
		*fParam2 = 346.4477f;
		break;

	case 5:
		*uParam1 = {-32.2161f, -135.8212f, 56.0532f};
		*fParam2 = 186.0052f;
		break;

	case 6:
		*uParam1 = {-287.7696f, 6238.081f, 30.2902f};
		*fParam2 = 316.1349f;
		break;

	case 7:
		*uParam1 = {99.2876f, -1395.16f, 28.2759f};
		*fParam2 = 320.2739f;
		break;

	case 8:
		*uParam1 = {1679.445f, 4819.056f, 41.0035f};
		*fParam2 = 4.6192f;
		break;

	case 9:
		*uParam1 = {411.3063f, -809.1863f, 28.1554f};
		*fParam2 = 1.8972f;
		break;

	case 10:
		*uParam1 = {-1088.054f, 2699.167f, 19.2748f};
		*fParam2 = 129.7382f;
		break;

	case 11:
		*uParam1 = {1194.163f, 2695.644f, 36.9225f};
		*fParam2 = 1.1454f;
		break;

	case 12:
		*uParam1 = {-821.2829f, -1088.027f, 10.0499f};
		*fParam2 = 120.5883f;
		break;

	case 13:
		*uParam1 = {-3.3416f, 6521.303f, 30.2961f};
		*fParam2 = 316.4451f;
		break;

	case 14:
		*uParam1 = {-1208.417f, -785.9635f, 16.0139f};
		*fParam2 = 36.3181f;
		break;

	case 15:
		*uParam1 = {623.1845f, 2739.191f, 40.9588f};
		*fParam2 = 3.5411f;
		break;

	case 16:
		*uParam1 = {130.9555f, -198.2084f, 53.41f};
		*fParam2 = 251.3506f;
		break;

	case 17:
		*uParam1 = {-3164.065f, 1067.317f, 19.6778f};
		*fParam2 = 101.2229f;
		break;

	case 18:
		*uParam1 = {-713.2797f, -174.2767f, 35.8962f};
		*fParam2 = 29.8138f;
		break;

	case 19:
		*uParam1 = {-147.0616f, -306.4322f, 37.7912f};
		*fParam2 = 160.4526f;
		break;

	case 20:
		*uParam1 = {-1461.355f, -230.6092f, 48.3064f};
		*fParam2 = 318.7851f;
		break;

	case 21:
		*uParam1 = {-1347.739f, -1278.573f, 3.8952f};
		*fParam2 = 17.9365f;
		break;

	case 22:
		*uParam1 = {325.6833f, 164.3263f, 102.4425f};
		*fParam2 = 68.6407f;
		break;

	case 23:
		*uParam1 = {1858.774f, 3742.393f, 32.0779f};
		*fParam2 = 301.2329f;
		break;

	case 24:
		*uParam1 = {-286.3272f, 6202.802f, 30.3323f};
		*fParam2 = 225.1334f;
		break;

	case 25:
		*uParam1 = {-1161.596f, -1417.7f, 3.712f};
		*fParam2 = 246.9161f;
		break;

	case 26:
		*uParam1 = {1308.952f, -1660.611f, 50.2362f};
		*fParam2 = 163.5456f;
		break;

	case 27:
		*uParam1 = {-3161.585f, 1074.214f, 19.6847f};
		*fParam2 = 98.6092f;
		break;

	case 28:
		*uParam1 = {28.423f, -1110.814f, 28.2848f};
		*fParam2 = 85.2495f;
		break;

	case 29:
		*uParam1 = {1704.966f, 3749.709f, 33.0188f};
		*fParam2 = 45.6778f;
		break;

	case 30:
		*uParam1 = {223.949f, -38.7894f, 68.6483f};
		*fParam2 = 159.4265f;
		break;

	case 31:
		*uParam1 = {837.7854f, -1017.963f, 26.3045f};
		*fParam2 = 181.0445f;
		break;

	case 32:
		*uParam1 = {-313.1914f, 6093.351f, 30.4625f};
		*fParam2 = 315.8405f;
		break;

	case 33:
		*uParam1 = {-663.4631f, -952.8069f, 20.3143f};
		*fParam2 = 92.6796f;
		break;

	case 34:
		*uParam1 = {-1323.06f, -392.8577f, 35.4596f};
		*fParam2 = 210.7398f;
		break;

	case 35:
		*uParam1 = {-1106.102f, 2684.35f, 18.0953f};
		*fParam2 = 127.0383f;
		break;

	case 36:
		*uParam1 = {-3157.932f, 1081.309f, 19.6953f};
		*fParam2 = 100.2942f;
		break;

	case 37:
		*uParam1 = {2562.882f, 312.8641f, 107.4612f};
		*fParam2 = 179.205f;
		break;

	case 38:
		*uParam1 = {822.48f, -2142.875f, 27.8496f};
		*fParam2 = 355.0598f;
		break;

	case 39:
		*uParam1 = {-1137.053f, -1993.916f, 12.1677f};
		*fParam2 = 43.1213f;
		break;

	case 40:
		*uParam1 = {717.8107f, -1084.081f, 21.3094f};
		*fParam2 = 93.2649f;
		break;

	case 41:
		*uParam1 = {-387.6789f, -128.2568f, 37.6796f};
		*fParam2 = 119.1085f;
		break;

	case 42:
		*uParam1 = {117.8835f, 6599.415f, 31.0134f};
		*fParam2 = 90.7225f;
		break;

	case 43:
		*uParam1 = {1201.709f, 2664.813f, 36.8102f};
		*fParam2 = 133.9002f;
		break;

	case 44:
		*uParam1 = {-200.1521f, -1297.502f, 30.296f};
		*fParam2 = 269.0687f;
		break;

	case 45:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		break;
	}
	return !func_68(*uParam1, 0f, 0f, 0f, 0);
}

// Position - 0x6320
bool func_68(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x6367
bool func_69(int *iParam0) {
	if (!entity::is_entity_dead(player::player_ped_id(), 0) && !ped::is_ped_injured(player::player_ped_id())) {
		if (func_80()) {
			*iParam0 = func_75(entity::get_entity_coords(player::player_ped_id(), 0), 6, -1, 0, 1, -1);
			if (func_74(*iParam0) && !func_70(*iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x63C2
bool func_70(int iParam0) { return func_71(iParam0, 0, 1); }

// Position - 0x63D2
bool func_71(int iParam0, int iParam1, int iParam2) {
	if (iParam2) {
		return gameplay::is_bit_set(Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_73() == 0) {
			return gameplay::is_bit_set(func_49(func_72(iParam0), -1, 0), iParam1);
		}
	}
	else {
		return gameplay::is_bit_set(Global_101700.f_668[iParam0], iParam1);
	}
	return false;
}

// Position - 0x6432
int func_72(int iParam0) {
	switch (iParam0) {
	case 0: return 822;

	case 1: return 823;

	case 2: return 824;

	case 3: return 825;

	case 4: return 826;

	case 5: return 827;

	case 6: return 828;

	case 7: return 829;

	case 8: return 830;

	case 9: return 831;

	case 10: return 832;

	case 11: return 833;

	case 12: return 834;

	case 13: return 835;

	case 14: return 836;

	case 15: return 838;

	case 16: return 839;

	case 17: return 840;

	case 18: return 841;

	case 19: return 842;

	case 20: return 843;

	case 21: return 844;

	case 22: return 845;

	case 23: return 846;

	case 24: return 847;

	case 25: return 848;

	case 26: return 849;

	case 27: return 850;

	case 28: return 851;

	case 29: return 852;

	case 30: return 853;

	case 31: return 854;

	case 32: return 855;

	case 33: return 856;

	case 34: return 857;

	case 35: return 858;

	case 36: return 859;

	case 37: return 860;

	case 38: return 861;

	case 39: return 862;

	case 40: return 866;

	case 41: return 867;

	case 42: return 868;

	case 43: return 869;

	case 44: return 5847;

	case 45: return 3780;

	default: break;
	}
	return 6022;
}

// Position - 0x66F9
int func_73() { return Global_25190; }

// Position - 0x6704
bool func_74(int iParam0) { return func_71(iParam0, 5, 1); }

// Position - 0x6714
int func_75(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) {
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 45) {
		if (iParam3 == 6 || iParam3 == func_79(iVar0)) {
			if (!iParam5 || func_78(iVar0)) {
				fVar1 = gameplay::get_distance_between_coords(vParam0, func_76(iVar0, 0), 1);
				if (fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1) && (iParam6 || iVar0 != 21) &&
					iVar0 != iParam7) {
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

// Position - 0x67B6
Vector3 func_76(int iParam0, int iParam1) {
	switch (iParam0) {
	case -1: return 0f, 0f, 0f;

	case 0: return -821.9946f, -187.1776f, 36.5689f;

	case 1: return 133.5702f, -1710.918f, 28.2916f;

	case 2: return -1287.082f, -1116.558f, 5.9901f;

	case 3: return 1933.119f, 3726.079f, 31.8444f;

	case 4: return 1208.333f, -470.917f, 65.208f;

	case 5: return -30.7448f, -148.4921f, 56.0765f;

	case 6: return -280.8165f, 6231.771f, 30.6955f;

	case 7: return 80.665f, -1391.669f, 28.3761f;

	case 8: return 1687.881f, 4820.55f, 41.0096f;

	case 9: return 419.531f, -807.5787f, 28.4896f;

	case 10: return -1094.049f, 2704.171f, 18.0873f;

	case 11: return 1197.972f, 2704.22f, 37.1572f;

	case 12: return -818.6218f, -1077.533f, 10.3282f;

	case 13: return -0.2361f, 6516.045f, 30.8684f;

	case 14: return -1199.809f, -776.6886f, 16.3237f;

	case 15: return 618.1857f, 2752.567f, 41.0881f;

	case 16: return 126.6853f, -212.5027f, 53.5578f;

	case 17: return -3168.966f, 1055.287f, 19.8632f;

	case 18: return -715.3598f, -155.7742f, 36.4105f;

	case 19: return -158.2199f, -304.9663f, 38.735f;

	case 20: return -1455.005f, -233.1862f, 48.7936f;

	case 21: return -1335.973f, -1278.555f, 3.8598f;

	case 22: return 321.6098f, 179.4165f, 102.5865f;

	case 23: return 1861.685f, 3750.08f, 32.0318f;

	case 24: return -290.1603f, 6199.095f, 30.4871f;

	case 25: return -1153.948f, -1425.019f, 3.9544f;

	case 26: return 1322.455f, -1651.125f, 51.1885f;

	case 27: return -3169.42f, 1074.727f, 19.8343f;

	case 28: return 17.6804f, -1114.288f, 28.797f;

	case 29: return 1697.979f, 3753.2f, 33.7053f;

	case 30: return 245.2711f, -45.8126f, 68.941f;

	case 31: return 844.1248f, -1025.571f, 27.1948f;

	case 32: return -325.8904f, 6077.026f, 30.4548f;

	case 33: return -664.2178f, -943.3646f, 20.8292f;

	case 34: return -1313.948f, -390.9637f, 35.592f;

	case 35: return -1111.238f, 2688.463f, 17.6131f;

	case 36: return -3165.231f, 1082.855f, 19.8438f;

	case 37: return 2569.612f, 302.576f, 107.7349f;

	case 38: return 811.8699f, -2149.102f, 28.6363f;

	case 39: return -1147.314f, -1992.434f, 12.1803f;

	case 40: return 724.524f, -1089.081f, 21.1692f;

	case 41: return -354.5272f, -135.4011f, 38.185f;

	case 42: return 113.2615f, 6624.28f, 30.7871f;

	case 43: return 1174.707f, 2644.45f, 36.7552f;

	case 44:
		if (iParam1) {
			return -211.5f, -1324.2f, 30.296f;
		}
		else {
			return -205.6654f, -1311.113f, 30.296f;
		}
		break;

	case 45: return func_77(Global_93004);
	}
	return 1000000f, 1000000f, 1000000f;
}

// Position - 0x6CD0
Vector3 func_77(int iParam0) {
	switch (iParam0) {
	case 1: return 1060f, -2990f, -35f;

	case 2: return 1060f, -2990f, -35f;

	case 3: return 974.9542f, -3000.091f, -35f;

	case 6: return -1586.36f, -566.6f, 106.17f;

	case 7: return -1389.87f, -465.17f, 82.68f;

	case 8: return -145.81f, -590.2f, 171.13f;

	case 9: return -62.49f, -823.55f, 288.74f;

	case 4: return 1102.515f, -3158.888f, -38.5186f;

	case 5: return 1005.861f, -3156.162f, -39.907f;

	default: return 0f, 0f, -200f;
	}
	return 0f, 0f, -200f;
}

// Position - 0x6DE6
bool func_78(int iParam0) { return func_71(iParam0, 0, 0); }

// Position - 0x6DF6
int func_79(int iParam0) {
	switch (iParam0) {
	case -1: return 6;

	case 0: return 0;

	case 1: return 0;

	case 2: return 0;

	case 3: return 0;

	case 4: return 0;

	case 5: return 0;

	case 6: return 0;

	case 7: return 1;

	case 8: return 1;

	case 9: return 1;

	case 10: return 1;

	case 11: return 1;

	case 12: return 1;

	case 13: return 1;

	case 14: return 1;

	case 15: return 1;

	case 16: return 1;

	case 17: return 1;

	case 18: return 1;

	case 19: return 1;

	case 20: return 1;

	case 21: return 1;

	case 22: return 2;

	case 23: return 2;

	case 24: return 2;

	case 25: return 2;

	case 26: return 2;

	case 27: return 2;

	case 28: return 3;

	case 29: return 3;

	case 30: return 3;

	case 31: return 3;

	case 32: return 3;

	case 33: return 3;

	case 34: return 3;

	case 35: return 3;

	case 36: return 3;

	case 37: return 3;

	case 38: return 3;

	case 39: return 4;

	case 40: return 4;

	case 41: return 4;

	case 42: return 4;

	case 43: return 4;

	case 44: return 4;

	case 45: return 5;
	}
	return 6;
}

// Position - 0x7069
bool func_80() { return Global_91543.f_303 > 0; }

// Position - 0x707A
var func_81() {
	int *iVar0;

	func_91(&iVar0, time::get_clock_seconds());
	func_90(&iVar0, time::get_clock_minutes());
	func_89(&iVar0, time::get_clock_hours());
	func_84(&iVar0, time::get_clock_day_of_month());
	func_83(&iVar0, time::get_clock_month());
	func_82(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0x70C0
void func_82(int *iParam0, int iParam1) {
	if (iParam1 <= 0) {
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979) {
		return;
	}
	*iParam0 -= (*iParam0 & 2080374784);
	if (iParam1 < 2011) {
		*iParam0 |= system::shift_left(2011 - iParam1, 26);
		*iParam0 |= -2147483648;
	}
	else {
		*iParam0 |= system::shift_left(iParam1 - 2011, 26);
		*iParam0 -= (*iParam0 & -2147483648);
	}
}

// Position - 0x7146
void func_83(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*uParam0 -= (*uParam0 & 15);
	*uParam0 |= iParam1;
}

// Position - 0x7179
void func_84(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_88(*uParam0);
	iVar1 = func_86(*uParam0);
	if (iParam1 < 1 || iParam1 > func_85(iVar0, iVar1)) {
		return;
	}
	*uParam0 -= (*uParam0 & 496);
	*uParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0x71CA
int func_85(int iParam0, int iParam1) {
	if (iParam1 < 0) {
		iParam1 = 0;
	}
	switch (iParam0) {
	case 0:
	case 2:
	case 4:
	case 6:
	case 7:
	case 9:
	case 11: return 31;

	case 3:
	case 5:
	case 8:
	case 10: return 30;

	case 1:
		if (iParam1 % 4 == 0) {
			if (iParam1 % 100 != 0) {
				return 29;
			}
			else if (iParam1 % 400 == 0) {
				return 29;
			}
		}
		return 28;
	}
	return 30;
}

// Position - 0x726C
int func_86(int iParam0) {
	return (system::shift_right(iParam0, 26) & 31) * func_87(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x7291
int func_87(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x72A8
int func_88(int iParam0) { return iParam0 & 15; }

// Position - 0x72B5
void func_89(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*uParam0 -= (*uParam0 & 15872);
	*uParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0x72EF
void func_90(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 1032192);
	*uParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0x732A
void func_91(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 66060288);
	*uParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0x7366
int func_92() {
	func_56();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x737F
int func_93(char *sParam0) {
	if (gameplay::are_strings_equal("BailBond1", sParam0)) {
		return 0;
	}
	else if (gameplay::are_strings_equal("BailBond2", sParam0)) {
		return 1;
	}
	else if (gameplay::are_strings_equal("BailBond3", sParam0)) {
		return 2;
	}
	else if (gameplay::are_strings_equal("BailBond4", sParam0)) {
		return 3;
	}
	return -1;
}

// Position - 0x73D5
struct<2> func_94(int iParam0) {
	struct<2> Var0;

	StringCopy(&Var0, "", 8);
	switch (iParam0) {
	case 0: StringCopy(&Var0, "ABI1", 8); break;

	case 1: StringCopy(&Var0, "ABI2", 8); break;

	case 2: StringCopy(&Var0, "BA1", 8); break;

	case 3: StringCopy(&Var0, "BA2", 8); break;

	case 4: StringCopy(&Var0, "BA3", 8); break;

	case 5: StringCopy(&Var0, "BA3A", 8); break;

	case 6: StringCopy(&Var0, "BA3C", 8); break;

	case 7: StringCopy(&Var0, "BA4", 8); break;

	case 8: StringCopy(&Var0, "DRE1", 8); break;

	case 9: StringCopy(&Var0, "EPS1", 8); break;

	case 10: StringCopy(&Var0, "EPS2", 8); break;

	case 11: StringCopy(&Var0, "EPS3", 8); break;

	case 12: StringCopy(&Var0, "EPS4", 8); break;

	case 13: StringCopy(&Var0, "EPS5", 8); break;

	case 14: StringCopy(&Var0, "EPS6", 8); break;

	case 15: StringCopy(&Var0, "EPS7", 8); break;

	case 16: StringCopy(&Var0, "EPS8", 8); break;

	case 17: StringCopy(&Var0, "EXT1", 8); break;

	case 18: StringCopy(&Var0, "EXT2", 8); break;

	case 19: StringCopy(&Var0, "EXT3", 8); break;

	case 20: StringCopy(&Var0, "EXT4", 8); break;

	case 21: StringCopy(&Var0, "FAN1", 8); break;

	case 22: StringCopy(&Var0, "FAN2", 8); break;

	case 23: StringCopy(&Var0, "FAN3", 8); break;

	case 24: StringCopy(&Var0, "HAO1", 8); break;

	case 25: StringCopy(&Var0, "HUN1", 8); break;

	case 26: StringCopy(&Var0, "HUN2", 8); break;

	case 27: StringCopy(&Var0, "JOS1", 8); break;

	case 28: StringCopy(&Var0, "JOS2", 8); break;

	case 29: StringCopy(&Var0, "JOS3", 8); break;

	case 30: StringCopy(&Var0, "JOS4", 8); break;

	case 31: StringCopy(&Var0, "MAU1", 8); break;

	case 32: StringCopy(&Var0, "MIN1", 8); break;

	case 33: StringCopy(&Var0, "MIN2", 8); break;

	case 34: StringCopy(&Var0, "MIN3", 8); break;

	case 35: StringCopy(&Var0, "MRS1", 8); break;

	case 36: StringCopy(&Var0, "MRS2", 8); break;

	case 37: StringCopy(&Var0, "NI1", 8); break;

	case 38: StringCopy(&Var0, "NI1A", 8); break;

	case 39: StringCopy(&Var0, "NI1B", 8); break;

	case 40: StringCopy(&Var0, "NI1C", 8); break;

	case 41: StringCopy(&Var0, "NI1D", 8); break;

	case 42: StringCopy(&Var0, "NI2", 8); break;

	case 43: StringCopy(&Var0, "NI3", 8); break;

	case 44: StringCopy(&Var0, "OME1", 8); break;

	case 45: StringCopy(&Var0, "OME2", 8); break;

	case 46: StringCopy(&Var0, "PA1", 8); break;

	case 47: StringCopy(&Var0, "PA2", 8); break;

	case 48: StringCopy(&Var0, "PA3", 8); break;

	case 49: StringCopy(&Var0, "PA3A", 8); break;

	case 50: StringCopy(&Var0, "PA3B", 8); break;

	case 51: StringCopy(&Var0, "PA4", 8); break;

	case 52: StringCopy(&Var0, "RAM1", 8); break;

	case 53: StringCopy(&Var0, "RAM2", 8); break;

	case 54: StringCopy(&Var0, "RAM3", 8); break;

	case 55: StringCopy(&Var0, "RAM4", 8); break;

	case 56: StringCopy(&Var0, "RAM5", 8); break;

	case 57: StringCopy(&Var0, "SAS1", 8); break;

	case 58: StringCopy(&Var0, "TON1", 8); break;

	case 59: StringCopy(&Var0, "TON2", 8); break;

	case 60: StringCopy(&Var0, "TON3", 8); break;

	case 61: StringCopy(&Var0, "TON4", 8); break;

	case 62: StringCopy(&Var0, "TON5", 8); break;

	default: break;
	}
	return Var0;
}

//Position - 0x7822
int func_95(char* sParam0, int iParam1)
{
	int iVar0;
	char *sVar1;
	int iVar33;
	int iVar34;

	iVar33 = gameplay::get_hash_key(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63) {
		iVar0 = iVar34;
		func_96(iVar0, &sVar1);
		if (gameplay::get_hash_key(sVar1) == iVar33) {
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0) {
	}
	return -1;
}

// Position - 0x786B
void func_96(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0:
		func_97(uParam1, "Abigail1", func_99(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0,
				"ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_98(iParam0), 1, 0);
		break;

	case 1:
		func_97(uParam1, "Abigail2", func_99(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0,
				-1, 4, 1, 0, 2359, func_98(iParam0), 1, 0);
		break;

	case 2:
		func_97(uParam1, "Barry1", func_99(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1,
				4, 1, 0, 2359, func_98(iParam0), 1, 0);
		break;

	case 3:
		func_97(uParam1, "Barry2", func_99(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1,
				4, 4, 0, 2359, func_98(iParam0), 1, 1);
		break;

	case 4:
		func_97(uParam1, "Barry3", func_99(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0,
				2359, func_98(iParam0), 0, 0);
		break;

	case 5:
		func_97(uParam1, "Barry3A", func_99(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "",
				166, 0, 7, 4, 2, 0, 2359, func_98(iParam0), 0, 1);
		break;

	case 6:
		func_97(uParam1, "Barry3C", func_99(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0,
				7, 4, 2, 0, 2359, func_98(iParam0), 0, 1);
		break;

	case 7:
		func_97(uParam1, "Barry4", func_99(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4",
				0, 0, -1, 4, 2, 800, 2000, func_98(iParam0), 0, 0);
		break;

	case 8:
		func_97(uParam1, "Dreyfuss1", func_99(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106,
				0, "", 0, 0, -1, 4, 2, 0, 2359, func_98(iParam0), 0, 0);
		break;

	case 9:
		func_97(uParam1, "Epsilon1", func_99(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10,
				4, 1, 0, 2359, func_98(iParam0), 0, 0);
		break;

	case 10:
		func_97(uParam1, "Epsilon2", func_99(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11,
				4, 1, 0, 2359, func_98(iParam0), 1, 0);
		break;

	case 11:
		func_97(uParam1, "Epsilon3", func_99(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars",
				0, 0, 12, 4, 1, 0, 2359, func_98(iParam0), 0, 0);
		break;

	case 12:
		func_97(uParam1, "Epsilon4", func_99(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16,
				"postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_98(iParam0), 0, 0);
		break;

	case 13:
		func_97(uParam1, "Epsilon5", func_99(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes",
				0, 0, 14, 4, 1, 0, 2359, func_98(iParam0), 1, 0);
		break;

	case 14:
		func_97(uParam1, "Epsilon6", func_99(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0,
				15, 4, 1, 0, 2359, func_98(iParam0), 0, 1);
		break;

	case 15:
		func_97(uParam1, "Epsilon7", func_99(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert",
				0, 0, 16, 4, 1, 0, 2359, func_98(iParam0), 0, 0);
		break;

	case 16:
		func_97(uParam1, "Epsilon8", func_99(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16,
				"epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_98(iParam0), 1, 0);
		break;

	case 17:
		func_97(uParam1, "Extreme1", func_99(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18,
				4, 2, 0, 2359, func_98(iParam0), 0, 1);
		break;

	case 18:
		func_97(uParam1, "Extreme2", func_99(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0,
				19, 4, 2, 0, 2359, func_98(iParam0), 0, 1);
		break;

	case 19:
		func_97(uParam1, "Extreme3", func_99(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20,
				4, 2, 0, 2359, func_98(iParam0), 0, 1);
		break;

	case 20:
		func_97(uParam1, "Extreme4", func_99(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0,
				-1, 4, 2, 0, 2359, func_98(iParam0), 0, 0);
		break;

	case 21:
		func_97(uParam1, "Fanatic1", func_99(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1,
				-1, 4, 1, 700, 2000, func_98(iParam0), 1, 0);
		break;

	case 22:
		func_97(uParam1, "Fanatic2", func_99(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1,
				-1, 4, 4, 700, 2000, func_98(iParam0), 1, 0);
		break;

	case 23:
		func_97(uParam1, "Fanatic3", func_99(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4,
				2, 700, 2000, func_98(iParam0), 0, 1);
		break;

	case 24:
		func_97(uParam1, "Hao1", func_99(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0,
				"controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_98(iParam0), 0, 1);
		break;

	case 25:
		func_97(uParam1, "Hunting1", func_99(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1,
				26, 4, 4, 0, 2359, func_98(iParam0), 0, 1);
		break;

	case 26:
		func_97(uParam1, "Hunting2", func_99(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0,
				-1, 4, 4, 0, 2359, func_98(iParam0), 0, 1);
		break;

	case 27:
		func_97(uParam1, "Josh1", func_99(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns",
				0, 1, 28, 4, 4, 0, 2359, func_98(iParam0), 1, 0);
		break;

	case 28:
		func_97(uParam1, "Josh2", func_99(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29,
				4, 4, 0, 2359, func_98(iParam0), 1, 1);
		break;

	case 29:
		func_97(uParam1, "Josh3", func_99(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30,
				4, 4, 0, 2359, func_98(iParam0), 1, 1);
		break;

	case 30:
		func_97(uParam1, "Josh4", func_99(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1,
				4, 4, 0, 2359, func_98(iParam0), 1, 0);
		break;

	case 31:
		func_97(uParam1, "Maude1", func_99(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher",
				0, 1, -1, 4, 4, 0, 2359, func_98(iParam0), 0, 1);
		break;

	case 32:
		func_97(uParam1, "Minute1", func_99(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33,
				4, 4, 0, 2359, func_98(iParam0), 0, 1);
		break;

	case 33:
		func_97(uParam1, "Minute2", func_99(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4,
				0, 2359, func_98(iParam0), 0, 1);
		break;

	case 34:
		func_97(uParam1, "Minute3", func_99(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0,
				-1, 4, 4, 0, 2359, func_98(iParam0), 0, 1);
		break;

	case 35:
		func_97(uParam1, "MrsPhilips1", func_99(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0,
				"ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_98(iParam0), 0, 0);
		break;

	case 36:
		func_97(uParam1, "MrsPhilips2", func_99(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0,
				2359, func_98(iParam0), 0, 0);
		break;

	case 37:
		func_97(uParam1, "Nigel1", func_99(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1,
				-1, 1, 4, 0, 2359, func_98(iParam0), 1, 0);
		break;

	case 38:
		func_97(uParam1, "Nigel1A", func_99(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "",
				0, 0, 42, 4, 4, 0, 2359, func_98(iParam0), 1, 1);
		break;

	case 39:
		func_97(uParam1, "Nigel1B", func_99(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0,
				42, 4, 4, 700, 2000, func_98(iParam0), 1, 1);
		break;

	case 40:
		func_97(uParam1, "Nigel1C", func_99(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0,
				42, 4, 4, 700, 2000, func_98(iParam0), 1, 1);
		break;

	case 41:
		func_97(uParam1, "Nigel1D", func_99(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0,
				42, 4, 4, 700, 2000, func_98(iParam0), 1, 1);
		break;

	case 42:
		func_97(uParam1, "Nigel2", func_99(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43,
				4, 4, 0, 2359, func_98(iParam0), 1, 1);
		break;

	case 43:
		func_97(uParam1, "Nigel3", func_99(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16,
				"postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_98(iParam0), 1, 1);
		break;

	case 44:
		func_97(uParam1, "Omega1", func_99(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0,
				"spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_98(iParam0), 0, 0);
		break;

	case 45:
		func_97(uParam1, "Omega2", func_99(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0,
				-1, 4, 2, 0, 2359, func_98(iParam0), 0, 0);
		break;

	case 46:
		func_97(uParam1, "Paparazzo1", func_99(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1,
				47, 4, 2, 0, 2359, func_98(iParam0), 0, 1);
		break;

	case 47:
		func_97(uParam1, "Paparazzo2", func_99(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0,
				48, 4, 2, 0, 2359, func_98(iParam0), 0, 1);
		break;

	case 48:
		func_97(uParam1, "Paparazzo3", func_99(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183,
				1, -1, 2, 2, 0, 2359, func_98(iParam0), 0, 0);
		break;

	case 49:
		func_97(uParam1, "Paparazzo3A", func_99(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0,
				"", 0, 0, 51, 4, 2, 0, 2359, func_98(iParam0), 0, 1);
		break;

	case 50:
		func_97(uParam1, "Paparazzo3B", func_99(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0,
				0, 51, 4, 2, 0, 2359, func_98(iParam0), 0, 1);
		break;

	case 51:
		func_97(uParam1, "Paparazzo4", func_99(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1,
				-1, 4, 2, 0, 2359, func_98(iParam0), 0, 0);
		break;

	case 52:
		func_97(uParam1, "Rampage1", func_99(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4,
				4, 0, 2359, func_98(iParam0), 0, 0);
		break;

	case 54:
		func_97(uParam1, "Rampage3", func_99(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55,
				4, 4, 0, 2359, func_98(iParam0), 1, 0);
		break;

	case 55:
		func_97(uParam1, "Rampage4", func_99(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4,
				4, 0, 2359, func_98(iParam0), 1, 0);
		break;

	case 56:
		func_97(uParam1, "Rampage5", func_99(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0,
				53, 4, 4, 0, 2359, func_98(iParam0), 0, 0);
		break;

	case 53:
		func_97(uParam1, "Rampage2", func_99(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0,
				"rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_98(iParam0), 1, 0);
		break;

	case 57:
		func_97(uParam1, "TheLastOne", func_99(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0,
				1, -1, 4, 2, 0, 2359, func_98(iParam0), 0, 1);
		break;

	case 58:
		func_97(uParam1, "Tonya1", func_99(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0,
				"ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_98(iParam0), 0, 1);
		break;

	case 59:
		func_97(uParam1, "Tonya2", func_99(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48,
				"ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_98(iParam0), 0, 1);
		break;

	case 60:
		func_97(uParam1, "Tonya3", func_99(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359,
				func_98(iParam0), 0, 1);
		break;

	case 61:
		func_97(uParam1, "Tonya4", func_99(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359,
				func_98(iParam0), 0, 1);
		break;

	case 62:
		func_97(uParam1, "Tonya5", func_99(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0,
				-1, 4, 2, 0, 2359, func_98(iParam0), 0, 1);
		break;

	default: break;
	}
}

// Position - 0x8AB5
void func_97(var *uParam0, char *sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7,
			 int iParam10, char *sParam11, int iParam12, int iParam13, char *sParam14, int iParam15, int iParam16,
			 int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23,
			 int iParam24) {
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = {Param2};
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = {vParam7};
	uParam0->f_9 = iParam10;
	StringCopy(&uParam0->f_10, sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&uParam0->f_16, sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = iParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

// Position - 0x8B46
int func_98(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 1: return 0;

	case 2: return 1;

	case 3: return 1;

	case 4: return 0;

	case 5: return 1;

	case 6: return 1;

	case 7: return 0;

	case 8: return 1;

	case 9: return 0;

	case 10: return 0;

	case 11: return 0;

	case 12: return 1;

	case 13: return 0;

	case 14: return 1;

	case 15: return 0;

	case 16: return 1;

	case 17: return 1;

	case 18: return 1;

	case 19: return 1;

	case 20: return 1;

	case 21: return 1;

	case 22: return 1;

	case 23: return 1;

	case 24: return 1;

	case 25: return 1;

	case 26: return 1;

	case 27: return 0;

	case 28: return 1;

	case 29: return 1;

	case 30: return 1;

	case 31: return 0;

	case 32: return 1;

	case 33: return 1;

	case 34: return 1;

	case 35: return 0;

	case 36: return 0;

	case 37: return 0;

	case 38: return 1;

	case 39: return 1;

	case 40: return 1;

	case 41: return 1;

	case 42: return 1;

	case 43: return 1;

	case 44: return 0;

	case 45: return 0;

	case 46: return 1;

	case 47: return 1;

	case 48: return 0;

	case 49: return 1;

	case 50: return 1;

	case 51: return 1;

	case 52: return 1;

	case 54: return 1;

	case 55: return 1;

	case 56: return 1;

	case 53: return 1;

	case 57: return 1;

	case 58: return 1;

	case 59: return 1;

	case 60: return 1;

	case 61: return 1;

	case 62: return 1;

	default: break;
	}
	return 0;
}

// Position - 0x8E8C
struct<2> func_99(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = {func_94(iParam0)};
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

//Position - 0x8EC4
int func_100(int iParam0)
{
	switch (iParam0) {
	case 69:
	case 70: return func_101(Global_101700.f_8044.f_99.f_205[10]);

	case 74:
	case 75: return func_101(Global_101700.f_8044.f_99.f_205[8]);

	case 84:
	case 85: return func_101(Global_101700.f_8044.f_99.f_205[11]);

	case 90: return func_101(Global_101700.f_8044.f_99.f_205[7]);

	case 93: return func_101(Global_101700.f_8044.f_99.f_205[9]);
	}
	return 0;
}

// Position - 0x8F80
int func_101(int iParam0) {
	switch (iParam0) {
	case 1:
	case 3:
	case 5:
	case 6:
	case 8: return 0;

	case 2:
	case 4:
	case 7:
	case 9: return 1;
	}
	return -1;
}

// Position - 0x8FD4
int func_102(char *sParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = gameplay::get_hash_key(sParam0);
	iVar1 = func_103(iVar0, 1);
	if (iVar1 == -1 && !iParam1) {
	}
	return iVar1;
}

// Position - 0x8FFE
int func_103(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 94) {
		if (Global_82612[iVar0 /*34*/].f_6 == iParam0) {
			return iVar0;
		}
		iVar0++;
	}
	if (!iParam1) {
	}
	return -1;
}

// Position - 0x9034
void func_104(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3) {
		iVar1 = 0;
		while (iVar1 < 11) {
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 =
				Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 =
				Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 =
				Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10) {
		Global_53004[iVar0 /*3*/][0] = Global_101700.f_19523[iVar0];
		Global_53004.f_31[iVar0 /*3*/][0] = Global_101700.f_19523.f_11[iVar0];
		Global_53004.f_62[iVar0 /*3*/][0] = Global_101700.f_19523.f_22[iVar0];
		Global_53004.f_93[iVar0 /*3*/][0] = Global_101700.f_19523.f_33[iVar0];
		Global_53004.f_124[iVar0 /*3*/][0] = Global_101700.f_19523.f_44[iVar0];
		Global_53004.f_155[iVar0 /*3*/][0] = Global_101700.f_19523.f_55[iVar0];
		Global_53004.f_186[iVar0 /*3*/][0] = Global_101700.f_19523.f_66[iVar0];
		Global_53004.f_217[iVar0 /*3*/][0] = Global_101700.f_19523.f_77[iVar0];
		Global_53004.f_248[iVar0 /*3*/][0] = Global_101700.f_19523.f_88[iVar0];
		if (!iParam0) {
			Global_53004[iVar0 /*3*/][1] = Global_101700.f_19523[iVar0];
			Global_53004.f_31[iVar0 /*3*/][1] = Global_101700.f_19523.f_11[iVar0];
			Global_53004.f_62[iVar0 /*3*/][1] = Global_101700.f_19523.f_22[iVar0];
			Global_53004.f_93[iVar0 /*3*/][1] = Global_101700.f_19523.f_33[iVar0];
			Global_53004.f_124[iVar0 /*3*/][1] = Global_101700.f_19523.f_44[iVar0];
			Global_53004.f_155[iVar0 /*3*/][1] = Global_101700.f_19523.f_55[iVar0];
			Global_53004.f_186[iVar0 /*3*/][1] = Global_101700.f_19523.f_66[iVar0];
			Global_53004.f_217[iVar0 /*3*/][1] = Global_101700.f_19523.f_77[iVar0];
			Global_53004.f_248[iVar0 /*3*/][1] = Global_101700.f_19523.f_88[iVar0];
		}
		iVar0++;
	}
}

// Position - 0x92B6
void func_105() {
	gameplay::set_weather_type_now("EXTRASUNNY");
	func_192();
	func_164();
	func_107();
	if (!func_24()) {
		func_106();
	}
	iLocal_3351 = 1;
	cam::set_gameplay_cam_relative_heading(0f);
}

// Position - 0x92E5
void func_106() {
	switch (iLocal_3180) {
	case 2:
		ai::clear_ped_tasks(player::player_ped_id());
		entity::set_entity_coords(player::player_ped_id(), -1019.579f, -484.872f, 36.0795f, 1, 0, 0, 1);
		entity::set_entity_heading(player::player_ped_id(), 93.7701f);
		break;

	case 3:
		if (vehicle::is_vehicle_driveable(iLocal_3259, 0)) {
			if (!ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_3259, 0)) {
				ped::set_ped_into_vehicle(player::player_ped_id(), iLocal_3259, -1);
			}
			entity::set_entity_health(iLocal_3259, 3000);
			entity::set_entity_proofs(iLocal_3259, 0, 1, 0, 0, 0, 0, 0, 0);
		}
		break;

	case 5:
		ai::clear_ped_tasks_immediately(player::player_ped_id());
		entity::set_entity_coords(player::player_ped_id(), -935.4413f, -2928.061f, 12.9451f, 1, 0, 0, 1);
		entity::set_entity_heading(player::player_ped_id(), 178.466f);
		entity::set_entity_load_collision_flag(player::player_ped_id(), 1);
		break;

	case 8:
		ai::clear_ped_tasks_immediately(player::player_ped_id());
		entity::set_entity_coords(player::player_ped_id(), -937.5466f, -2968.713f, 12.9451f, 1, 0, 0, 1);
		entity::set_entity_heading(player::player_ped_id(), 111.5016f);
		entity::set_entity_load_collision_flag(player::player_ped_id(), 1);
		break;
	}
}

// Position - 0x93FB
void func_107() {
	switch (iLocal_3180) {
	case 2:
		player::set_player_wanted_level(player::player_id(), 0, 0);
		player::set_player_wanted_level_now(player::player_id(), 0);
		gameplay::clear_area(-1026.8f, -492.1f, 36f, 18f, 1, 0, 0, 0);
		vehicle::set_all_vehicle_generators_active_in_area(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 0, 1);
		vehicle::remove_vehicles_from_generators_in_area(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 0);
		streaming::request_model(joaat("rapidgt"));
		streaming::request_model(joaat("surano"));
		streaming::request_model(joaat("carbonizzare"));
		while (!streaming::has_model_loaded(joaat("rapidgt")) || !streaming::has_model_loaded(joaat("surano")) ||
			   !streaming::has_model_loaded(joaat("carbonizzare"))) {
			system::wait(0);
		}
		if (!entity::does_entity_exist(iLocal_3259)) {
			gameplay::clear_area(vLocal_3294, 5f, 1, 0, 0, 0);
			iLocal_3259 = vehicle::create_vehicle(joaat("rapidgt"), vLocal_3294, fLocal_3321, 1, 1);
			vehicle::set_vehicle_colours(iLocal_3259, 112, 112);
			entity::set_entity_health(iLocal_3259, 3000);
			vehicle::set_vehicle_strong(iLocal_3259, 1);
			streaming::set_model_as_no_longer_needed(joaat("rapidgt"));
			vehicle::set_vehicle_model_is_suppressed(joaat("rapidgt"), 1);
			entity::_set_entity_register(iLocal_3259, 1);
			vehicle::set_vehicle_has_strong_axles(iLocal_3259, 1);
		}
		if (!entity::does_entity_exist(iLocal_3276)) {
			if (streaming::has_model_loaded(joaat("surano"))) {
				gameplay::clear_area(-1037.398f, -491.6539f, 35.5545f, 5f, 1, 0, 0, 0);
				iLocal_3276 =
					vehicle::create_vehicle(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, 1, 1);
				vehicle::set_vehicle_colours(iLocal_3276, 0, 0);
				entity::set_entity_health(iLocal_3276, 3000);
				vehicle::set_vehicle_strong(iLocal_3276, 1);
				streaming::set_model_as_no_longer_needed(joaat("surano"));
				vehicle::set_vehicle_model_is_suppressed(joaat("surano"), 1);
				vehicle::set_vehicle_has_strong_axles(iLocal_3276, 1);
			}
		}
		if (!entity::does_entity_exist(iLocal_3277)) {
			if (streaming::has_model_loaded(joaat("carbonizzare"))) {
				gameplay::clear_area(vLocal_3294, 5f, 1, 0, 0, 0);
				iLocal_3277 =
					vehicle::create_vehicle(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, 1, 1);
				vehicle::set_vehicle_colours(iLocal_3277, 89, 89);
				entity::set_entity_health(iLocal_3277, 3000);
				vehicle::set_vehicle_strong(iLocal_3277, 1);
				streaming::set_model_as_no_longer_needed(joaat("carbonizzare"));
				vehicle::set_vehicle_model_is_suppressed(joaat("carbonizzare"), 1);
				vehicle::set_vehicle_has_strong_axles(iLocal_3277, 1);
			}
		}
		break;

	case 3:
		audio::prepare_music_event("TRV4_CHASE");
		player::set_player_wanted_level(player::player_id(), 0, 0);
		player::set_player_wanted_level_now(player::player_id(), 0);
		func_161();
		gameplay::clear_area(vLocal_3297, 200f, 1, 0, 0, 0);
		if (!entity::does_entity_exist(iLocal_3258)) {
			iLocal_3258 = vehicle::create_vehicle(joaat("cogcabrio"), vLocal_3297, fLocal_3322, 1, 1);
			entity::set_entity_proofs(iLocal_3258, 1, 1, 1, 1, 1, 0, 0, 0);
			vehicle::set_vehicle_colours(iLocal_3258, 27, 27);
			streaming::set_model_as_no_longer_needed(joaat("cogcabrio"));
			audio::_dynamic_mixer_related_fn(iLocal_3258, "SOL_3_MOLLY_CAR_Group", 0);
		}
		if (!entity::does_entity_exist(iLocal_3222)) {
			iLocal_3222 = ped::create_ped_inside_vehicle(iLocal_3258, 26, joaat("ig_molly"), -1, 1, 1);
			entity::set_entity_proofs(iLocal_3222, 1, 1, 1, 1, 1, 0, 0, 0);
			entity::set_entity_invincible(iLocal_3222, 1);
			ped::set_ped_can_be_targetted(iLocal_3222, 0);
			streaming::set_model_as_no_longer_needed(joaat("ig_molly"));
			ped::set_ped_relationship_group_hash(iLocal_3222, 1862763509);
		}
		if (func_23()) {
			if (!entity::does_entity_exist(iLocal_3259)) {
				if (func_160()) {
					if (!vehicle::is_this_model_a_heli(func_159()) && !vehicle::is_this_model_a_plane(func_159())) {
						iLocal_3259 = func_128(vLocal_3312, fLocal_3325);
						streaming::set_model_as_no_longer_needed(func_159());
						vehicle::set_vehicle_has_strong_axles(iLocal_3259, 1);
					}
					else {
						iLocal_3259 = vehicle::create_vehicle(joaat("rapidgt"), vLocal_3312, fLocal_3325, 1, 1);
						vehicle::set_vehicle_colours(iLocal_3259, 112, 112);
					}
				}
				else {
					iLocal_3259 = vehicle::create_vehicle(joaat("rapidgt"), vLocal_3312, fLocal_3325, 1, 1);
					vehicle::set_vehicle_colours(iLocal_3259, 112, 112);
				}
				entity::set_entity_health(iLocal_3259, 3000);
				vehicle::set_vehicle_strong(iLocal_3259, 1);
				entity::set_entity_proofs(iLocal_3259, 0, 1, 0, 0, 0, 0, 0, 0);
				entity::_set_entity_register(iLocal_3259, 1);
				streaming::set_model_as_no_longer_needed(joaat("rapidgt"));
				vehicle::set_vehicle_has_strong_axles(iLocal_3259, 1);
			}
		}
		else if (!entity::does_entity_exist(iLocal_3259)) {
			iLocal_3259 = vehicle::create_vehicle(joaat("rapidgt"), vLocal_3312, fLocal_3325, 1, 1);
			vehicle::set_vehicle_colours(iLocal_3259, 112, 112);
			streaming::set_model_as_no_longer_needed(joaat("rapidgt"));
			entity::set_entity_health(iLocal_3259, 3000);
			vehicle::set_vehicle_strong(iLocal_3259, 1);
			entity::set_entity_proofs(iLocal_3259, 0, 1, 0, 0, 0, 0, 0, 0);
			entity::_set_entity_register(iLocal_3259, 1);
			vehicle::set_vehicle_has_strong_axles(iLocal_3259, 1);
		}
		break;

	case 5:
		iLocal_3352 = 0;
		gameplay::clear_area(-973.3f, -2967.7f, 13.5f, 100f, 1, 0, 0, 0);
		system::settimera(0);
		streaming::request_model(joaat("jet"));
		streaming::request_model(joaat("shamal"));
		ai::request_waypoint_recording("BB_MOLLY_2");
		streaming::request_model(joaat("s_m_y_airworker"));
		streaming::request_model(joaat("s_m_y_cop_01"));
		streaming::request_model(joaat("police3"));
		streaming::request_model(joaat("ig_molly"));
		streaming::request_model(joaat("cogcabrio"));
		streaming::request_model(joaat("rapidgt"));
		streaming::request_model(joaat("prop_cs_film_reel_01"));
		vehicle::request_vehicle_recording(68, "BB_Chase");
		vehicle::request_vehicle_recording(69, "BB_Chase");
		ai::request_waypoint_recording("Trev4_5");
		streaming::request_ptfx_asset();
		streaming::request_anim_dict("move_f@film_reel_arms");
		streaming::request_anim_dict("misssolomon_3");
		while (!streaming::has_model_loaded(joaat("jet")) || !streaming::has_model_loaded(joaat("shamal")) ||
			   !ai::get_is_waypoint_recording_loaded("BB_MOLLY_2") ||
			   !streaming::has_model_loaded(joaat("s_m_y_airworker")) ||
			   !streaming::has_model_loaded(joaat("s_m_y_cop_01")) || !streaming::has_model_loaded(joaat("police3")) ||
			   !streaming::has_model_loaded(joaat("ig_molly")) || !streaming::has_model_loaded(joaat("cogcabrio")) ||
			   !streaming::has_model_loaded(joaat("rapidgt")) ||
			   !streaming::has_model_loaded(joaat("prop_cs_film_reel_01")) ||
			   !vehicle::has_vehicle_recording_been_loaded(68, "BB_Chase") ||
			   !vehicle::has_vehicle_recording_been_loaded(69, "BB_Chase") ||
			   !ai::get_is_waypoint_recording_loaded("Trev4_5") || !streaming::has_ptfx_asset_loaded() ||
			   !streaming::has_anim_dict_loaded("move_f@film_reel_arms") ||
			   !streaming::has_anim_dict_loaded("misssolomon_3")) {
			system::wait(0);
		}
		if (!entity::does_entity_exist(iLocal_3222)) {
			iLocal_3222 = ped::create_ped(26, joaat("ig_molly"), -920.5093f, -2943.93f, 12.9451f, 157.6203f, 1, 1);
			entity::set_entity_invincible(iLocal_3222, 1);
			ped::set_ped_can_be_targetted(iLocal_3222, 0);
			ped::set_blocking_of_non_temporary_events(iLocal_3222, 1);
			streaming::set_model_as_no_longer_needed(joaat("ig_molly"));
			entity::set_entity_load_collision_flag(iLocal_3222, 1);
			ped::set_ped_relationship_group_hash(iLocal_3222, 1862763509);
		}
		iLocal_3283 = object::create_object(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, 1, 1, 0);
		entity::attach_entity_to_entity(iLocal_3283, iLocal_3222, ped::get_ped_bone_index(iLocal_3222, 28422), 0f, 0f,
										0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		if (!entity::does_entity_exist(iLocal_3266)) {
			iLocal_3266 = vehicle::create_vehicle(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1);
			vehicle::set_vehicle_livery(iLocal_3266, 2);
			vehicle::set_vehicle_is_considered_by_player(iLocal_3266, 0);
			entity::freeze_entity_position(iLocal_3266, 1);
			entity::set_entity_proofs(iLocal_3266, 1, 1, 1, 1, 1, 0, 0, 0);
			streaming::set_model_as_no_longer_needed(joaat("jet"));
			entity::set_entity_lod_dist(iLocal_3266, 500);
		}
		if (func_23()) {
			if (func_160()) {
				func_126();
				while (!func_113()) {
					system::wait(0);
				}
			}
			if (!entity::does_entity_exist(iLocal_3259)) {
				if (func_160()) {
					iLocal_3259 = func_128(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
					entity::_set_entity_register(iLocal_3259, 1);
					streaming::set_model_as_no_longer_needed(func_159());
					vehicle::set_vehicle_has_strong_axles(iLocal_3259, 1);
				}
				else {
					iLocal_3259 =
						vehicle::create_vehicle(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1);
					vehicle::set_vehicle_colours(iLocal_3259, 112, 112);
					entity::_set_entity_register(iLocal_3259, 1);
					streaming::set_model_as_no_longer_needed(joaat("rapidgt"));
					vehicle::set_vehicle_has_strong_axles(iLocal_3259, 1);
				}
			}
		}
		else if (!entity::does_entity_exist(iLocal_3259)) {
			iLocal_3259 = vehicle::create_vehicle(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1);
			vehicle::set_vehicle_colours(iLocal_3259, 112, 112);
			streaming::set_model_as_no_longer_needed(joaat("rapidgt"));
			entity::_set_entity_register(iLocal_3259, 1);
			vehicle::set_vehicle_has_strong_axles(iLocal_3259, 1);
		}
		if (!entity::does_entity_exist(iLocal_3258)) {
			iLocal_3258 = vehicle::create_vehicle(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, 1, 1);
			vehicle::set_vehicle_colours(iLocal_3258, 27, 27);
			streaming::set_model_as_no_longer_needed(joaat("cogcabrio"));
		}
		if (!entity::does_entity_exist(iLocal_3263)) {
			iLocal_3263 = vehicle::create_vehicle(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, 1, 1);
		}
		if (!entity::does_entity_exist(iLocal_3248)) {
			iLocal_3248 = ped::create_ped(6, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, 1, 1);
			weapon::give_weapon_to_ped(iLocal_3248, joaat("weapon_pistol"), 1000, 1, 1);
			func_112(iLocal_3248, 0);
			streaming::set_model_as_no_longer_needed(joaat("s_m_y_cop_01"));
		}
		system::settimera(0);
		func_111(2, 1);
		iLocal_3360 = 1;
		break;

	case 8:
		gameplay::clear_area(-973.3f, -2967.7f, 13.5f, 100f, 1, 0, 0, 0);
		system::settimera(0);
		iLocal_3352 = 0;
		iLocal_3360 = 0;
		iLocal_3339 = 0;
		streaming::request_model(joaat("jet"));
		streaming::request_model(joaat("s_m_y_airworker"));
		streaming::request_model(joaat("shamal"));
		streaming::request_model(joaat("s_m_y_cop_01"));
		streaming::request_model(joaat("police3"));
		streaming::request_model(joaat("cogcabrio"));
		streaming::request_model(joaat("rapidgt"));
		streaming::request_model(joaat("prop_jet_bloodsplat_01"));
		vehicle::request_vehicle_recording(68, "BB_Chase");
		vehicle::request_vehicle_recording(69, "BB_Chase");
		streaming::request_ptfx_asset();
		while (!streaming::has_model_loaded(joaat("jet")) || !streaming::has_model_loaded(joaat("s_m_y_airworker")) ||
			   !streaming::has_model_loaded(joaat("shamal")) || !streaming::has_model_loaded(joaat("s_m_y_cop_01")) ||
			   !streaming::has_model_loaded(joaat("police3")) || !streaming::has_model_loaded(joaat("cogcabrio")) ||
			   !streaming::has_model_loaded(joaat("rapidgt")) ||
			   !streaming::has_model_loaded(joaat("prop_jet_bloodsplat_01")) ||
			   !vehicle::has_vehicle_recording_been_loaded(68, "BB_Chase") ||
			   !vehicle::has_vehicle_recording_been_loaded(69, "BB_Chase") || !streaming::has_ptfx_asset_loaded()) {
			system::wait(0);
		}
		func_110();
		if (func_23()) {
			if (func_160()) {
				func_126();
				while (!func_113()) {
					system::wait(0);
				}
			}
			if (!entity::does_entity_exist(iLocal_3259)) {
				if (func_160()) {
					iLocal_3259 = func_128(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
					entity::_set_entity_register(iLocal_3259, 1);
					streaming::set_model_as_no_longer_needed(func_159());
					vehicle::set_vehicle_has_strong_axles(iLocal_3259, 1);
				}
				else {
					iLocal_3259 =
						vehicle::create_vehicle(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1);
					vehicle::set_vehicle_colours(iLocal_3259, 112, 112);
					entity::_set_entity_register(iLocal_3259, 1);
					streaming::set_model_as_no_longer_needed(joaat("rapidgt"));
					vehicle::set_vehicle_has_strong_axles(iLocal_3259, 1);
				}
			}
		}
		else if (!entity::does_entity_exist(iLocal_3259)) {
			iLocal_3259 = vehicle::create_vehicle(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1);
			vehicle::set_vehicle_colours(iLocal_3259, 112, 112);
			streaming::set_model_as_no_longer_needed(joaat("rapidgt"));
			entity::_set_entity_register(iLocal_3259, 1);
			vehicle::set_vehicle_has_strong_axles(iLocal_3259, 1);
		}
		if (!entity::does_entity_exist(iLocal_3258)) {
			iLocal_3258 = vehicle::create_vehicle(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, 1, 1);
			vehicle::set_vehicle_colours(iLocal_3258, 27, 27);
			streaming::set_model_as_no_longer_needed(joaat("cogcabrio"));
		}
		if (!entity::does_entity_exist(iLocal_3263)) {
			iLocal_3263 = vehicle::create_vehicle(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, 1, 1);
		}
		if (!entity::does_entity_exist(iLocal_3248)) {
			iLocal_3248 = ped::create_ped(6, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, 1, 1);
			weapon::give_weapon_to_ped(iLocal_3248, joaat("weapon_pistol"), 1000, 1, 1);
			func_112(iLocal_3248, 0);
			streaming::set_model_as_no_longer_needed(joaat("s_m_y_cop_01"));
		}
		if (!entity::does_entity_exist(iLocal_3282)) {
			iLocal_3282 =
				object::create_object(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, 1, 0);
			entity::set_entity_rotation(iLocal_3282, 0f, 0f, -121.5948f, 2, 1);
			entity::set_entity_quaternion(iLocal_3282, 0f, 0f, 0.8729f, -0.4879f);
			streaming::set_model_as_no_longer_needed(joaat("prop_jet_bloodsplat_01"));
		}
		if (!entity::does_entity_exist(iLocal_3266)) {
			iLocal_3266 = vehicle::create_vehicle(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1);
			vehicle::set_vehicle_livery(iLocal_3266, 2);
			vehicle::set_vehicle_is_considered_by_player(iLocal_3266, 0);
			entity::freeze_entity_position(iLocal_3266, 1);
			entity::set_entity_proofs(iLocal_3266, 1, 1, 1, 1, 1, 0, 0, 0);
			streaming::set_model_as_no_longer_needed(joaat("jet"));
			iLocal_3763 =
				graphics::start_particle_fx_looped_on_entity("scr_trev4_747_engine_damage", iLocal_3266, -11.956f,
															 10.528f, -7.657f, 0f, 2f, 0f, 1065353216, 0, 0, 0);
			entity::set_entity_lod_dist(iLocal_3266, 500);
		}
		if (!entity::does_entity_exist(iLocal_3228)) {
			iLocal_3228 =
				ped::create_ped(26, joaat("s_m_y_airworker"), -933.8942f, -2965.785f, 12.9451f, 331.7339f, 1, 1);
			func_17(&uLocal_3578, 4, iLocal_3228, "HangerWorker", 0, 1);
			streaming::set_model_as_no_longer_needed(joaat("s_m_y_airworker"));
			ped::set_ped_can_be_targetted(iLocal_3228, 1);
			ped::set_blocking_of_non_temporary_events(iLocal_3228, 1);
			ai::task_smart_flee_ped(iLocal_3228, player::player_ped_id(), 150f, -1, 0, 0);
			ped::set_ped_keep_task(iLocal_3228, 1);
			entity::set_entity_proofs(iLocal_3228, 0, 0, 0, 0, 0, 0, 0, 0);
			entity::set_ped_as_no_longer_needed(&iLocal_3228);
		}
		if (func_109(0) == 0 || func_109(0) == joaat("weapon_unarmed")) {
			func_108(1);
		}
		break;
	}
}

// Position - 0xA177
void func_108(int iParam0) {
	int iVar0;

	if (!ped::is_ped_injured(player::player_ped_id())) {
		iVar0 = weapon::get_best_ped_weapon(player::player_ped_id(), 0);
		if (iVar0 != joaat("weapon_unarmed")) {
			weapon::set_current_ped_weapon(player::player_ped_id(), iVar0, iParam0);
		}
	}
}

// Position - 0xA1AC
int func_109(int iParam0) {
	if (Global_91528 > 0) {
		return Global_96040.f_21[iParam0];
	}
	return Global_93635.f_21[iParam0];
}

// Position - 0xA1D6
void func_110() {
	if (iLocal_3339 == 0) {
		if (!entity::does_entity_exist(uLocal_3268[0])) {
			uLocal_3268[0] =
				vehicle::create_vehicle(joaat("police3"), -994.5278f, -2903.285f, 12.9447f, 158.7951f, 1, 1);
			vehicle::_0x428BACCDF5E26EAD(uLocal_3268[0], 0);
		}
		if (!entity::does_entity_exist(uLocal_3233[0])) {
			uLocal_3233[0] = ped::create_ped(6, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, 1, 1);
			weapon::give_weapon_to_ped(uLocal_3233[0], joaat("weapon_pistol"), 1000, 1, 1);
			ped::set_ped_accuracy(uLocal_3233[0], 20);
			entity::set_entity_load_collision_flag(uLocal_3233[0], 1);
			ai::task_aim_gun_at_entity(uLocal_3233[0], player::player_ped_id(), -1, 1);
			func_112(uLocal_3233[0], 0);
		}
		if (!entity::does_entity_exist(iLocal_3267)) {
			iLocal_3267 = vehicle::create_vehicle(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, 1, 1);
			vehicle::set_vehicle_on_ground_properly(iLocal_3267, 1084227584);
			streaming::set_model_as_no_longer_needed(joaat("shamal"));
			entity::set_entity_health(iLocal_3267, 2000);
			vehicle::set_vehicle_door_open(iLocal_3267, 0, 0, 1);
		}
		if (!entity::does_entity_exist(uLocal_3233[6])) {
			uLocal_3233[6] = ped::create_ped_inside_vehicle(uLocal_3268[0], 6, joaat("s_m_y_cop_01"), 0, 1, 1);
			weapon::give_weapon_to_ped(uLocal_3233[6], joaat("weapon_pistol"), 1000, 1, 1);
			ped::set_ped_accuracy(uLocal_3233[6], 20);
			entity::set_entity_load_collision_flag(uLocal_3233[6], 1);
			ped::set_blocking_of_non_temporary_events(uLocal_3233[6], 1);
			func_112(uLocal_3233[6], 0);
		}
		if (!entity::does_entity_exist(uLocal_3233[7])) {
			uLocal_3233[7] = ped::create_ped_inside_vehicle(uLocal_3268[0], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
			weapon::give_weapon_to_ped(uLocal_3233[7], joaat("weapon_pistol"), 1000, 1, 1);
			ped::set_ped_accuracy(uLocal_3233[7], 20);
			entity::set_entity_load_collision_flag(uLocal_3233[7], 1);
			ped::set_blocking_of_non_temporary_events(uLocal_3233[7], 1);
			func_112(uLocal_3233[7], 0);
		}
		if (!entity::does_entity_exist(uLocal_3268[1])) {
			uLocal_3268[1] =
				vehicle::create_vehicle(joaat("police3"), -962.2432f, -2864.16f, 12.9447f, 149.5586f, 1, 1);
			vehicle::_0x428BACCDF5E26EAD(uLocal_3268[1], 0);
		}
		if (!entity::does_entity_exist(uLocal_3233[8])) {
			uLocal_3233[8] = ped::create_ped_inside_vehicle(uLocal_3268[1], 6, joaat("s_m_y_cop_01"), 0, 1, 1);
			weapon::give_weapon_to_ped(uLocal_3233[8], joaat("weapon_pistol"), 1000, 1, 1);
			ped::set_ped_accuracy(uLocal_3233[8], 20);
			entity::set_entity_load_collision_flag(uLocal_3233[8], 1);
			ped::set_blocking_of_non_temporary_events(uLocal_3233[8], 1);
			func_112(uLocal_3233[8], 0);
		}
		if (!entity::does_entity_exist(uLocal_3233[9])) {
			uLocal_3233[9] = ped::create_ped_inside_vehicle(uLocal_3268[1], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
			weapon::give_weapon_to_ped(uLocal_3233[9], joaat("weapon_pistol"), 1000, 1, 1);
			ped::set_ped_accuracy(uLocal_3233[9], 20);
			entity::set_entity_load_collision_flag(uLocal_3233[9], 1);
			ped::set_blocking_of_non_temporary_events(uLocal_3233[9], 1);
			func_112(uLocal_3233[9], 0);
		}
		if (!entity::does_entity_exist(uLocal_3233[10])) {
			uLocal_3233[10] =
				ped::create_ped(6, joaat("s_m_y_cop_01"), -922.1185f, -2939.595f, 12.9451f, 156.1408f, 1, 1);
			weapon::give_weapon_to_ped(uLocal_3233[10], joaat("weapon_pistol"), 1000, 1, 1);
			ped::set_ped_accuracy(uLocal_3233[10], 20);
			entity::set_entity_load_collision_flag(uLocal_3233[10], 1);
			ped::set_blocking_of_non_temporary_events(uLocal_3233[10], 1);
			func_112(uLocal_3233[10], 0);
			ped::set_ped_ducking(uLocal_3233[10], 1);
		}
		iLocal_3339 = 1;
	}
}

// Position - 0xA56C
void func_111(int iParam0, int iParam1) {
	gameplay::set_bit(&Global_25347, iParam0);
	StringCopy(&Global_25348[iParam0 /*6*/], script::get_this_script_name(), 24);
	Global_25403[iParam0] = iParam1;
}

// Position - 0xA593
void func_112(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (iParam1) {
		iVar0 = 0;
		while (iVar0 < 64) {
			if (Global_55852[iVar0 /*2*/] != 0) {
				if (Global_55852[iVar0 /*2*/] == iParam0) {
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_55851) {
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64) {
		if (Global_55852[iVar2 /*2*/] == 0) {
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1) {
		return;
	}
	Global_55852[iVar1 /*2*/] = iParam0;
	Global_55852[iVar1 /*2*/].f_1 = 7;
	Global_55851++;
}

// Position - 0xA62E
int func_113() { return func_114(&Global_96040.f_2311); }

// Position - 0xA641
bool func_114(var *uParam0) {
	if (func_115(uParam0)) {
		if (streaming::has_model_loaded(uParam0->f_12.f_66)) {
			return true;
		}
		else {
			return false;
		}
		return true;
	}
	else {
		return false;
	}
	return true;
}

// Position - 0xA676
bool func_115(var *uParam0) {
	if (uParam0->f_12.f_66 == 0) {
		return false;
	}
	if (!func_117(uParam0->f_12.f_66, 0)) {
		return false;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_116(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0)) {
		return false;
	}
	return true;
}

// Position - 0xA6D5
int func_116(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7) {
	if (fParam6 < 0f) {
		fParam6 = 0f;
	}
	if (!iParam7) {
		if (gameplay::absf(vParam0.x - vParam3.x) <= fParam6) {
			if (gameplay::absf(vParam0.y - vParam3.y) <= fParam6) {
				if (gameplay::absf(vParam0.z - vParam3.z) <= fParam6) {
					return 1;
				}
			}
		}
	}
	else if (gameplay::absf(vParam0.x - vParam3.x) <= fParam6) {
		if (gameplay::absf(vParam0.y - vParam3.y) <= fParam6) {
			return 1;
		}
	}
	return 0;
}

// Position - 0xA750
int func_117(int iParam0, int iParam1) {
	int iVar0;
	struct<2> Var1;

	if (iParam0 == 0) {
		return 0;
	}
	if (!streaming::is_model_a_vehicle(iParam0)) {
		return 0;
	}
	if (iParam0 == joaat("dominator2") && !network::network_is_game_in_progress() ||
		iParam0 == joaat("buffalo3") && !network::network_is_game_in_progress() ||
		iParam0 == joaat("gauntlet2") && !network::network_is_game_in_progress() || iParam0 == joaat("blimp2") ||
		iParam0 == joaat("stalion2") && !network::network_is_game_in_progress() || iParam0 == joaat("blista3")) {
		if (!func_125()) {
			return 0;
		}
	}
	else {
		iVar0 = 0;
		while (iVar0 < dlc1::get_num_dlc_vehicles()) {
			if (dlc1::get_dlc_vehicle_data(iVar0, &Var1)) {
				if (iParam0 == Var1.f_1) {
					if (dlc1::_is_dlc_data_empty(Var1)) {
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp")) {
		if (!func_124() && !func_123() && !func_122() && !func_121() && !func_125()) {
			return 0;
		}
	}
	if (iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs") || iParam0 == joaat("khamelion")) {
		if (gameplay::is_durango_version() || gameplay::is_pc_version() || gameplay::is_orbis_version()) {
		}
		else if (!func_122()) {
			return 0;
		}
	}
	if (iParam1) {
		if (!func_120(iParam0)) {
			return 0;
		}
	}
	if (!func_118(iParam0)) {
		return 0;
	}
	return 1;
}

// Position - 0xA8DE
int func_118(int iParam0) {
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_119()) {
		return 1;
	}
	unk3::_0x897433D292B44130(&iVar0, &uVar1);
	if (iVar0 == 4) {
		return 1;
	}
	switch (iParam0) {
	case joaat("dune4"): StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64); break;

	case joaat("voltic2"): StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64); break;

	case joaat("ruiner2"): StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64); break;

	case joaat("phantom2"): StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64); break;

	case joaat("technical2"): StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64); break;

	case joaat("boxville5"): StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64); break;

	case joaat("wastelander"): StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64); break;

	case joaat("blazer5"): StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64); break;

	default: return 1;
	}
	if (!mobile::_network_shop_is_item_unlocked(&cVar2)) {
		return 0;
	}
	return 1;
}

// Position - 0xA9AA
int func_119() {
	if (gameplay::is_pc_version()) {
		return 1;
	}
	return 0;
}

// Position - 0xA9BE
int func_120(int iParam0) {
	int iVar0;
	int iVar1;

	if (Global_2482093) {
		return 1;
	}
	iVar0 = 1;
	iVar1 = network::_get_posix_time();
	if (iParam0 == joaat("btype3")) {
		if (!Global_262145.f_5506 && !Global_262145.f_11530 && iVar1 < Global_262145.f_11531) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3")) {
		if (!Global_262145.f_12342 && iVar1 < Global_262145.f_12354) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2")) {
		if (!Global_262145.f_12338 && iVar1 < Global_262145.f_12350) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2")) {
		if (!Global_262145.f_12339 && iVar1 < Global_262145.f_12351) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5")) {
		if (!Global_262145.f_12340 && iVar1 < Global_262145.f_12352) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2")) {
		if (!Global_262145.f_12341 && iVar1 < Global_262145.f_12353) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3")) {
		if (!Global_262145.f_12343 && iVar1 < Global_262145.f_12355) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo")) {
		if (!Global_262145.f_12344 && iVar1 < Global_262145.f_12347) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70")) {
		if (!Global_262145.f_12345 && iVar1 < Global_262145.f_12348) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811")) {
		if (!Global_262145.f_12346 && iVar1 < Global_262145.f_12349) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400")) {
		if (!Global_262145.f_14969 && iVar1 < Global_262145.f_14934) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso")) {
		if (!Global_262145.f_14964 && iVar1 < Global_262145.f_14929) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger")) {
		if (!Global_262145.f_14968 && iVar1 < Global_262145.f_14933) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender")) {
		if (!Global_262145.f_14967 && iVar1 < Global_262145.f_14932) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b")) {
		if (!Global_262145.f_14961 && iVar1 < Global_262145.f_14926) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis")) {
		if (!Global_262145.f_14962 && iVar1 < Global_262145.f_14927) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck")) {
		if (!Global_262145.f_14965 && iVar1 < Global_262145.f_14930) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2")) {
		if (!Global_262145.f_14966 && iVar1 < Global_262145.f_14931) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos")) {
		if (!Global_262145.f_14963 && iVar1 < Global_262145.f_14928) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle")) {
		if (!Global_262145.f_14971 && iVar1 < Global_262145.f_14936) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck")) {
		if (!Global_262145.f_14972 && iVar1 < Global_262145.f_14937) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2")) {
		if (!Global_262145.f_14960 && iVar1 < Global_262145.f_14925) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus")) {
		if (!Global_262145.f_14959 && iVar1 < Global_262145.f_14924) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava")) {
		if (!Global_262145.f_14958 && iVar1 < Global_262145.f_14923) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx")) {
		if (!Global_262145.f_14970 && iVar1 < Global_262145.f_14935) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2")) {
		if (!Global_262145.f_14973 && iVar1 < Global_262145.f_14938) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2")) {
		if (!Global_262145.f_14974 && iVar1 < Global_262145.f_14939) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2")) {
		if (!Global_262145.f_14975 && iVar1 < Global_262145.f_14940) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3")) {
		if (!Global_262145.f_14976 && iVar1 < Global_262145.f_14941) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler")) {
		if (!Global_262145.f_15121 && iVar1 < Global_262145.f_15143) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade")) {
		if (!Global_262145.f_15122 && iVar1 < Global_262145.f_15144) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea")) {
		if (!Global_262145.f_15123 && iVar1 < Global_262145.f_15145) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey")) {
		if (!Global_262145.f_15124 && iVar1 < Global_262145.f_15146) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus")) {
		if (!Global_262145.f_15125 && iVar1 < Global_262145.f_15147) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb")) {
		if (!Global_262145.f_15126 && iVar1 < Global_262145.f_15148) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2")) {
		if (!Global_262145.f_15128 && iVar1 < Global_262145.f_15149) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex")) {
		if (!Global_262145.f_15129 && iVar1 < Global_262145.f_15150) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro")) {
		if (!Global_262145.f_15130 && iVar1 < Global_262145.f_15151) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera")) {
		if (!Global_262145.f_15131 && iVar1 < Global_262145.f_15152) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor")) {
		if (!Global_262145.f_15132 && iVar1 < Global_262145.f_15153) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2")) {
		if (!Global_262145.f_15133 && iVar1 < Global_262145.f_15154) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4")) {
		if (!Global_262145.f_15134 && iVar1 < Global_262145.f_15155) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6")) {
		if (!Global_262145.f_15140 && iVar1 < Global_262145.f_15162) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2")) {
		if (!Global_262145.f_15137 && iVar1 < Global_262145.f_15158) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane")) {
		if (!Global_262145.f_15138 && iVar1 < Global_262145.f_15159) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3")) {
		if (!Global_262145.f_15139 && iVar1 < Global_262145.f_15160) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio")) {
		if (!Global_262145.f_15127 && iVar1 < Global_262145.f_15161) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger")) {
		if (!Global_262145.f_15141 && iVar1 < Global_262145.f_15163) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus")) {
		if (!Global_262145.f_15135 && iVar1 < Global_262145.f_15156) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez")) {
		if (!Global_262145.f_15136 && iVar1 < Global_262145.f_15157) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike")) {
		if (!Global_262145.f_15142 && iVar1 < Global_262145.f_15164) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2")) {
		if (!Global_262145.f_16770 && iVar1 < Global_262145.f_16811) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2")) {
		if (!Global_262145.f_16771 && iVar1 < Global_262145.f_16812) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4")) {
		if (!Global_262145.f_16772 && iVar1 < Global_262145.f_16813) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5")) {
		if (!Global_262145.f_16773 && iVar1 < Global_262145.f_16814) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2")) {
		if (!Global_262145.f_16774 && iVar1 < Global_262145.f_16815) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2")) {
		if (!Global_262145.f_16775 && iVar1 < Global_262145.f_16816) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5")) {
		if (!Global_262145.f_16776 && iVar1 < Global_262145.f_16817) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander")) {
		if (!Global_262145.f_16777 && iVar1 < Global_262145.f_16818) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5")) {
		if (!Global_262145.f_16778 && iVar1 < Global_262145.f_16819) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2")) {
		if (!Global_262145.f_16779 && iVar1 < Global_262145.f_16820) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3")) {
		if (!Global_262145.f_16780 && iVar1 < Global_262145.f_16821) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous")) {
		if (!Global_262145.f_16781 && iVar1 < Global_262145.f_16822) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2")) {
		if (!Global_262145.f_16782 && iVar1 < Global_262145.f_16823) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy")) {
		if (!Global_262145.f_16783 && iVar1 < Global_262145.f_16824) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2")) {
		if (!Global_262145.f_16784 && iVar1 < Global_262145.f_16825) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr")) {
		if (!Global_262145.f_16785 && iVar1 < Global_262145.f_16826) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2")) {
		if (!Global_262145.f_16786 && iVar1 < Global_262145.f_16827) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb")) {
		if (!Global_262145.f_16787 && iVar1 < Global_262145.f_16828) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2")) {
		if (!Global_262145.f_16788 && iVar1 < Global_262145.f_16829) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero")) {
		if (!Global_262145.f_16789 && iVar1 < Global_262145.f_16830) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2")) {
		if (!Global_262145.f_16790 && iVar1 < Global_262145.f_16831) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator")) {
		if (!Global_262145.f_16791 && iVar1 < Global_262145.f_16832) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter")) {
		if (!Global_262145.f_16792 && iVar1 < Global_262145.f_16833) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2")) {
		if (!Global_262145.f_16793 && iVar1 < Global_262145.f_16834) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta")) {
		if (!Global_262145.f_16794 && iVar1 < Global_262145.f_16835) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1")) {
		if (!Global_262145.f_17797 && iVar1 < Global_262145.f_17793) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2")) {
		if (!Global_262145.f_17798 && iVar1 < Global_262145.f_17794) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston")) {
		if (!Global_262145.f_17799 && iVar1 < Global_262145.f_17795) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2")) {
		if (!Global_262145.f_17800 && iVar1 < Global_262145.f_17796) {
			iVar0 = 0;
		}
	}
	return iVar0;
}

// Position - 0xB701
int func_121() { return 0; }

// Position - 0xB70A
int func_122() { return 1; }

// Position - 0xB713
int func_123() { return 1; }

// Position - 0xB71C
int func_124() {
	if (dlc2::is_dlc_present(-1226939934)) {
		return 1;
	}
	return 0;
}

// Position - 0xB735
bool func_125() {
	int iVar0;

	if (network::network_is_signed_in()) {
		if (network::_network_are_ros_available()) {
			if (network::_0x593570C289A77688()) {
				stats::stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				gameplay::set_bit(&iVar0, 2);
				gameplay::set_bit(&iVar0, 4);
				gameplay::set_bit(&iVar0, 6);
				gameplay::set_bit(&Global_25, 2);
				gameplay::set_bit(&Global_25, 4);
				gameplay::set_bit(&Global_25, 6);
				stats::stat_set_int(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (gameplay::_0x5AA3BEFA29F03AD4()) {
					iVar0 = gameplay::get_profile_setting(866);
					gameplay::set_bit(&iVar0, 0);
					stats::_0xDAC073C7901F9E15(iVar0);
				}
				return true;
			}
		}
	}
	if (Global_139179 == 2) {
		return true;
	}
	else if (Global_139179 == 3) {
		return false;
	}
	if (gameplay::_0x5AA3BEFA29F03AD4()) {
		if (gameplay::is_bit_set(gameplay::get_profile_setting(866), 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0xB7F0
void func_126() { func_127(&Global_96040.f_2311); }

// Position - 0xB803
void func_127(var *uParam0) {
	if (func_115(uParam0)) {
		streaming::request_model(uParam0->f_12.f_66);
	}
}

// Position - 0xB821
int func_128(vector3 vParam0, float fParam3) { return func_129(&Global_96040.f_2311, vParam0, fParam3, 0); }

// Position - 0xB83B
int func_129(var *uParam0, vector3 vParam1, float fParam4, int iParam5) {
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	var uVar5;
	int iVar8;

	if (func_115(uParam0)) {
		if (func_68(vParam1, 0f, 0f, 0f, 0)) {
			vParam1 = {*uParam0};
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall")) {
			if (object::is_point_in_angled_area(vParam1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f,
												75.27323f, 6.5f, 0, 1)) {
				vParam1 = {-850.93f, 158.82f, 65.7f};
				fParam4 = 89.5f;
			}
		}
		if (func_114(uParam0)) {
			gameplay::clear_area(vParam1, 5f, 1, 0, 0, 0);
			func_158(vParam1, 5f, 0);
			iVar0 = vehicle::create_vehicle(uParam0->f_12.f_66, vParam1, fParam4, 1, 1);
			if (entity::does_entity_exist(iVar0)) {
				vVar1 = {entity::get_entity_coords(iVar0, 1)};
				if (system::vdist2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f) {
					entity::set_entity_coords_no_offset(iVar0, vParam1, 0, 0, 1);
				}
				func_150(iVar0, &uParam0->f_12, 0, 1);
				bVar4 = true;
				if (vehicle::is_this_model_a_boat(uParam0->f_12.f_66) ||
					vehicle::_is_this_model_an_emergency_boat(uParam0->f_12.f_66)) {
					if (!water::test_probe_against_water(vParam1.x, vParam1.y, vParam1.z + 30f, vParam1.x, vParam1.y,
														 vParam1.z - 30f, &uVar5)) {
						bVar4 = false;
					}
				}
				if (bVar4) {
					vehicle::set_vehicle_on_ground_properly(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1) {
					if (iParam5) {
						if (vehicle::is_this_model_a_car(entity::get_entity_model(iVar0))) {
							func_149(uParam0->f_11, 1);
						}
						else if (vehicle::is_this_model_a_bike(entity::get_entity_model(iVar0))) {
							func_149(uParam0->f_11, 2);
						}
					}
					vehicle::_0xAB04325045427AAE(iVar0, 0);
					vehicle::_0x428BACCDF5E26EAD(iVar0, 0);
					vehicle::set_vehicle_has_strong_axles(iVar0, 1);
					func_148(iVar0, uParam0->f_11);
				}
				else if (!func_146(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10 &&
						 gameplay::are_strings_equal(script::get_this_script_name(), "startup_positioning")) {
					iVar8 = func_145(iVar0);
					if (iVar8 == -1) {
						uParam0->f_10 = 0;
					}
					else {
						func_140(iVar8);
					}
				}
				if (Global_91491 != 13 && Global_91491 != 10 && Global_91491 != 11 && Global_91491 != 12) {
					if (gameplay::get_hash_key(&Global_91491.f_3) == Global_69519) {
						if (uParam0->f_12.f_66 == Global_101700.f_31389.f_69[21 /*78*/].f_66) {
							func_137(24, 0);
							func_140(24);
						}
					}
				}
				if (uParam0->f_9 == 1) {
					func_130(iVar0, uParam0->f_11);
				}
				streaming::set_model_as_no_longer_needed(uParam0->f_12.f_66);
				vVar1 = {entity::get_entity_coords(iVar0, 1)};
			}
			return iVar0;
		}
	}
	return iVar0;
}

// Position - 0xBAEC
void func_130(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_131(iParam0)) {
		return;
	}
	if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2) {
		iVar0 = vehicle::get_ped_in_vehicle_seat(iParam0, -1, 0);
		if (!entity::does_entity_exist(iVar0)) {
			iVar0 = vehicle::get_last_ped_in_vehicle_seat(iParam0, -1);
		}
		if (entity::does_entity_exist(iVar0) && !ped::is_ped_injured(iVar0)) {
			if (entity::get_entity_model(iVar0) == joaat("player_zero")) {
				iParam1 = 0;
			}
			else if (entity::get_entity_model(iVar0) == joaat("player_one")) {
				iParam1 = 1;
			}
			else if (entity::get_entity_model(iVar0) == joaat("player_two")) {
				iParam1 = 2;
			}
		}
		if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2) {
			iParam1 = Global_101700.f_2095.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3) {
		iVar2 = 0;
		while (iVar2 < 2) {
			if (entity::get_entity_model(iParam0) == Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66) {
				if (!gameplay::is_string_null_or_empty(
						&Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)) {
					if (gameplay::are_strings_equal(vehicle::get_vehicle_number_plate_text(iParam0),
													&Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)) {
						Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101700.f_31389.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3) {
		if (entity::get_entity_model(iParam0) == Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66) {
			if (!gameplay::is_string_null_or_empty(&Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)) {
				if (gameplay::are_strings_equal(vehicle::get_vehicle_number_plate_text(iParam0),
												&Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)) {
					Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101700.f_31389.f_5590 = iParam1;
	Global_69436 = iParam0;
	Global_101700.f_31389.f_5588 = 1;
	func_39(iParam0, &Global_101700.f_31389.f_5510);
}

// Position - 0xBCEE
int func_131(int iParam0) {
	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0) || func_44(iParam0, 0, 0) ||
		func_44(iParam0, 1, 0) || func_44(iParam0, 2, 0) || func_34(iParam0) != 145 || func_136(iParam0) ||
		func_135(iParam0) || func_134(iParam0) || func_133(iParam0) || !func_132(entity::get_entity_model(iParam0))) {
		if (func_135(iParam0)) {
		}
		if (func_135(iParam0)) {
		}
		if (func_44(iParam0, 0, 0)) {
		}
		if (func_44(iParam0, 1, 0)) {
		}
		if (func_44(iParam0, 2, 0)) {
		}
		if (func_34(iParam0) != 145) {
		}
		return 0;
	}
	return 1;
}

// Position - 0xBDCB
int func_132(int iParam0) {
	if (iParam0 == 0) {
		return 0;
	}
	if (!func_117(iParam0, 0)) {
		return 0;
	}
	if (vehicle::is_this_model_a_boat(iParam0) || vehicle::is_this_model_a_plane(iParam0) ||
		vehicle::is_this_model_a_heli(iParam0) || vehicle::is_this_model_a_train(iParam0)) {
		return 0;
	}
	switch (iParam0) {
	case joaat("bus"):
	case joaat("stretch"):
	case joaat("barracks"):
	case joaat("armytanker"):
	case joaat("rhino"):
	case joaat("armytrailer"):
	case joaat("barracks2"):
	case joaat("flatbed"):
	case joaat("ripley"):
	case joaat("towtruck"):
	case joaat("towtruck2"):
	case joaat("airbus"):
	case joaat("coach"):
	case joaat("rentalbus"):
	case joaat("tourbus"):
	case joaat("firetruk"):
	case joaat("pbus"):
	case joaat("trash"):
	case joaat("benson"):
	case joaat("boattrailer"):
	case joaat("biff"):
	case joaat("hauler"):
	case joaat("docktrailer"):
	case joaat("phantom"):
	case joaat("pounder"):
	case joaat("tractor2"):
	case joaat("bulldozer"):
	case joaat("handler"):
	case joaat("tiptruck"):
	case joaat("cutter"):
	case joaat("dump"):
	case joaat("mixer"):
	case joaat("mixer2"):
	case joaat("rubble"):
	case joaat("scrap"):
	case joaat("tiptruck2"):
	case joaat("camper"):
	case joaat("taco"):
	case joaat("boxville"):
	case joaat("boxville2"):
	case joaat("boxville3"):
	case joaat("journey"):
	case joaat("mule"):
	case joaat("mule2"):
	case joaat("police"):
	case joaat("police2"):
	case joaat("police3"):
	case joaat("police4"):
	case joaat("policeb"):
	case joaat("policeold1"):
	case joaat("policeold2"):
	case joaat("policet"):
	case joaat("taxi"):
	case joaat("submersible"):
	case joaat("submersible2"):
	case joaat("monster"): return 0;
	}
	return 1;
}

// Position - 0xBF7C
int func_133(int iParam0) {
	int iVar0;
	char *sVar1;

	iVar0 = entity::get_entity_model(iParam0);
	sVar1 = vehicle::get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && gameplay::are_strings_equal(sVar1, "LAMAR G ")) {
		return 1;
	}
	if (!func_117(iVar0, 0)) {
		return 1;
	}
	return 0;
}

// Position - 0xBFC2
int func_134(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		if (entity::does_entity_exist(Global_89185[iVar0])) {
			if (Global_89185[iVar0] == iParam0) {
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0xBFFD
bool func_135(int iParam0) {
	int iVar0;

	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0)) {
		iVar0 = 0;
		while (iVar0 < 9) {
			if (entity::does_entity_exist(Global_89155[iVar0]) &&
				vehicle::is_vehicle_driveable(Global_89155[iVar0], 0)) {
				if (Global_89155[iVar0] == iParam0 &&
					entity::get_entity_model(Global_89155[iVar0]) == entity::get_entity_model(iParam0)) {
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

// Position - 0xC07C
int func_136(int iParam0) {
	int iVar0;

	if (entity::does_entity_exist(Global_68531.f_484[24])) {
		if (iParam0 == Global_68531.f_484[24]) {
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68) {
		if (entity::does_entity_exist(Global_68531.f_484[iVar0])) {
			if (iVar0 != 24 && iVar0 != 21 && iVar0 != 22 && iVar0 != 23 && iVar0 != 27 && iVar0 != 30 && iVar0 != 33 &&
				iVar0 != 28 && iVar0 != 31 && iVar0 != 34 && iVar0 != 26 && iVar0 != 29 && iVar0 != 32) {
				if (iParam0 == Global_68531.f_484[iVar0]) {
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0xC164
void func_137(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return;
	}
	if (iParam1) {
		if (!func_139(iParam0, 0)) {
			func_138(iParam0, 1, 0);
			func_138(iParam0, 2, 0);
			func_138(iParam0, 3, 0);
			func_138(iParam0, 4, 0);
			func_138(iParam0, 0, 1);
			Global_68531[iParam0] = 1;
		}
	}
	else {
		func_138(iParam0, 0, 0);
	}
}

// Position - 0xC1C1
void func_138(int iParam0, int iParam1, int iParam2) {
	if (iParam0 == -1) {
		return;
	}
	if (iParam2) {
		gameplay::set_bit(&Global_101700.f_31389[iParam0], iParam1);
	}
	else {
		gameplay::clear_bit(&Global_101700.f_31389[iParam0], iParam1);
	}
}

// Position - 0xC1FC
int func_139(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return 0;
	}
	return gameplay::is_bit_set(Global_101700.f_31389[iParam0], iParam1);
}

// Position - 0xC21F
void func_140(int iParam0) {
	bool bVar0;

	if (iParam0 == -1) {
		return;
	}
	if (func_144(&Global_68531.f_555[0 /*21*/], iParam0)) {
		if (entity::does_entity_exist(Global_68531.f_139[iParam0])) {
			bVar0 = true;
			if (!ped::is_ped_injured(player::player_ped_id())) {
				if (vehicle::is_vehicle_driveable(Global_68531.f_139[iParam0], 0)) {
					if (ped::is_ped_in_vehicle(player::player_ped_id(), Global_68531.f_139[iParam0], 0)) {
						bVar0 = false;
					}
				}
			}
			if (bVar0) {
				entity::set_entity_as_mission_entity(Global_68531.f_139[iParam0], 1, 1);
				vehicle::delete_vehicle(&Global_68531.f_139[iParam0]);
			}
		}
		Global_68531[iParam0] = 1;
		if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 13)) {
			if (iParam0 == 24 && func_139(iParam0, 0) && Global_69440.f_66 == 0 &&
				Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] != 0 &&
				Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] > 3 &&
				(!func_142(0, Global_68531.f_555[0 /*21*/].f_12) || !func_142(1, Global_68531.f_555[0 /*21*/].f_12))) {
				func_141(&Global_101700.f_31389.f_69[Global_68531.f_555[0 /*21*/].f_14 /*78*/], &Global_69440);
				Global_69518 = Global_101700.f_31389.f_5591;
			}
			func_137(iParam0, 0);
		}
	}
}

// Position - 0xC391
void func_141(var *uParam0, var *uParam1) {
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = {uParam0->f_1};
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = {uParam0->f_9};
	uParam1->f_59 = {uParam0->f_59};
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

// Position - 0xC45D
int func_142(int iParam0, int iParam1) {
	int iVar0;

	switch (iParam1) {
	case 0: iVar0 = 0; break;

	case 1: iVar0 = 1; break;

	case 2: iVar0 = 2; break;
	}
	if (iParam0 < 0 || iParam0 >= func_143(&Global_101700.f_31389.f_5038[iVar0 /*157*/])) {
		return 0;
	}
	return func_117(Global_101700.f_31389.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

// Position - 0xC4CF
int func_143(var *uParam0) { return *uParam0; }

// Position - 0xC4DA
bool func_144(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	*uParam0 = {0f, 0f, 0f};
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&uParam0->f_5, "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = {0f, 0f, 0f};
	uParam0->f_18 = {0f, 0f, 0f};
	switch (iParam1) {
	case 0:
		*uParam0 = {-831.8538f, 172.1154f, 69.9058f};
		uParam0->f_3 = 157.5705f;
		uParam0->f_4 = func_36(0, 1);
		uParam0->f_12 = 0;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 1:
		*uParam0 = {1970.943f, 3801.684f, 31.1396f};
		uParam0->f_3 = 301.3964f;
		uParam0->f_4 = func_36(0, 1);
		uParam0->f_12 = 0;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 2:
		*uParam0 = {-22.6297f, -1439.137f, 29.6549f};
		uParam0->f_3 = 180.0808f;
		uParam0->f_4 = func_36(1, 1);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 3:
		*uParam0 = {-22.5229f, -1434.699f, 29.6552f};
		uParam0->f_3 = 141.6114f;
		uParam0->f_4 = func_36(1, 2);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 19);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 4:
		*uParam0 = {10.9281f, 545.669f, 174.7951f};
		uParam0->f_3 = 61.392f;
		uParam0->f_4 = func_36(1, 1);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 5:
		*uParam0 = {6.1093f, 544.9742f, 174.2835f};
		uParam0->f_3 = 92.1548f;
		uParam0->f_4 = func_36(1, 2);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 19);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 6:
		*uParam0 = {1981.416f, 3808.131f, 31.1384f};
		uParam0->f_3 = 117.2557f;
		uParam0->f_4 = func_36(2, 1);
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 7:
		*uParam0 = {-1158.488f, -1529.367f, 3.8995f};
		uParam0->f_3 = 35.7505f;
		uParam0->f_4 = func_36(2, 1);
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 8:
		*uParam0 = {148.2868f, -1270.569f, 28.2252f};
		uParam0->f_3 = 208.4685f;
		uParam0->f_4 = func_36(2, 1);
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 9:
		*uParam0 = {1459.509f, -1380.45f, 78.3259f};
		uParam0->f_3 = 99.6211f;
		uParam0->f_4 = joaat("scorcher");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 10:
		*uParam0 = {-1518.947f, -1387.865f, -0.5134f};
		uParam0->f_3 = 98.3867f;
		uParam0->f_4 = joaat("seashark");
		iVar0 = 1;
		gameplay::set_bit(&uParam0->f_9, 6);
		break;

	case 11:
		*uParam0 = {353.0926f, 3577.593f, 32.351f};
		uParam0->f_3 = 16.6205f;
		uParam0->f_4 = joaat("duster");
		iVar0 = 1;
		gameplay::set_bit(&uParam0->f_9, 6);
		break;

	case 12:
		uParam0->f_14 = 0;
		*uParam0 = {-1652.004f, -3142.348f, 12.9921f};
		uParam0->f_3 = 329.1082f;
		uParam0->f_12 = 0;
		uParam0->f_13 = 359;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 13:
		uParam0->f_14 = 1;
		*uParam0 = {-1271.649f, -3380.685f, 12.9451f};
		uParam0->f_3 = 329.5137f;
		uParam0->f_12 = 1;
		uParam0->f_13 = 359;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 14:
		uParam0->f_14 = 2;
		*uParam0 = {1735.586f, 3294.531f, 40.1651f};
		uParam0->f_3 = 194.9525f;
		uParam0->f_12 = 2;
		uParam0->f_13 = 359;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 15:
		uParam0->f_14 = 3;
		*uParam0 = {-846.27f, -1363.19f, 0.22f};
		uParam0->f_3 = 108.78f;
		uParam0->f_12 = 0;
		uParam0->f_13 = 356;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 16:
		uParam0->f_14 = 4;
		*uParam0 = {-849.47f, -1354.99f, 0.24f};
		uParam0->f_3 = 109.84f;
		uParam0->f_12 = 1;
		uParam0->f_13 = 356;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 17:
		uParam0->f_14 = 5;
		*uParam0 = {-852.47f, -1346.2f, 0.21f};
		uParam0->f_3 = 108.76f;
		uParam0->f_12 = 2;
		uParam0->f_13 = 356;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 18:
		uParam0->f_14 = 6;
		*uParam0 = {-745.857f, -1433.904f, 4.0005f};
		uParam0->f_12 = 0;
		uParam0->f_13 = 360;
		uParam0->f_15 = {-756.2952f, -1441.609f, 2.9184f};
		uParam0->f_18 = {-738.0606f, -1423.068f, 8.2835f};
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 19:
		uParam0->f_14 = 7;
		*uParam0 = {-761.8486f, -1453.829f, 4.0005f};
		uParam0->f_12 = 1;
		uParam0->f_13 = 360;
		uParam0->f_15 = {-772.8158f, -1459.957f, 3.2894f};
		uParam0->f_18 = {-754.3353f, -1440.836f, 8.3334f};
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 20:
		uParam0->f_14 = 8;
		*uParam0 = {1769.3f, 3244f, 41.1f};
		uParam0->f_12 = 2;
		uParam0->f_13 = 360;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 21:
		uParam0->f_14 = 9;
		*uParam0 = {192.7897f, -1020.539f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0;
		uParam0->f_13 = 357;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 28);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 22:
		uParam0->f_14 = 10;
		*uParam0 = {192.7897f, -1020.539f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 1;
		uParam0->f_13 = 357;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 28);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 23:
		uParam0->f_14 = 11;
		*uParam0 = {192.7897f, -1020.539f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 2;
		uParam0->f_13 = 357;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 28);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 26:
	case 27:
	case 28:
		iVar1 = iParam1 - 26;
		uParam0->f_14 = 12 + iVar1;
		*uParam0 = {196.2794f, -1020.479f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0 + iVar1;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 27);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 29:
	case 30:
	case 31:
		iVar1 = iParam1 - 29;
		uParam0->f_14 = 15 + iVar1;
		*uParam0 = {199.8872f, -1020.048f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0 + iVar1;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 27);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 32:
	case 33:
	case 34:
		iVar1 = iParam1 - 32;
		uParam0->f_14 = 18 + iVar1;
		*uParam0 = {203.6006f, -1019.776f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0 + iVar1;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 27);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 24:
		uParam0->f_14 = 21;
		*uParam0 = {0f, 0f, 0f};
		uParam0->f_3 = 0f;
		uParam0->f_4 = 0;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 11);
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 12);
		iVar0 = 1;
		break;

	case 25:
		uParam0->f_14 = 22;
		*uParam0 = {723.2515f, -632.0496f, 27.1484f};
		uParam0->f_3 = 12.9316f;
		uParam0->f_4 = joaat("tailgater");
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 11);
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 12);
		iVar0 = 1;
		break;

	case 35:
		*uParam0 = {-51.23f, 3111.9f, 24.95f};
		uParam0->f_3 = 46.78f;
		uParam0->f_4 = joaat("proptrailer");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 36:
		*uParam0 = {-55.7984f, -1096.586f, 25.4223f};
		uParam0->f_3 = 308.0596f;
		uParam0->f_4 = joaat("bjxl");
		uParam0->f_10 = 126;
		uParam0->f_11 = 126;
		gameplay::set_bit(&uParam0->f_9, 9);
		gameplay::set_bit(&uParam0->f_9, 13);
		iVar0 = 1;
		break;

	case 37:
		*uParam0 = {-2892.93f, 3192.37f, 11.66f};
		uParam0->f_3 = -132.35f;
		uParam0->f_4 = joaat("velum");
		uParam0->f_10 = 157;
		uParam0->f_11 = 157;
		gameplay::set_bit(&uParam0->f_9, 9);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 13);
		iVar0 = 1;
		break;

	case 38:
		*uParam0 = {1744.308f, 3270.673f, 40.2076f};
		uParam0->f_3 = 125f;
		uParam0->f_4 = joaat("cargobob3");
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 39:
		*uParam0 = {1751.44f, 3322.643f, 42.1855f};
		uParam0->f_3 = 268.134f;
		uParam0->f_4 = joaat("submersible");
		gameplay::set_bit(&uParam0->f_9, 23);
		iVar0 = 1;
		break;

	case 41:
		*uParam0 = {1377.104f, -2076.2f, 52f};
		uParam0->f_3 = 37.5f;
		uParam0->f_4 = joaat("towtruck");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 40:
		*uParam0 = {1380.42f, -2072.77f, 51.7607f};
		uParam0->f_3 = 37.5f;
		uParam0->f_4 = joaat("trash");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 42:
		*uParam0 = {1359.389f, 3618.441f, 33.8907f};
		uParam0->f_3 = 108.2337f;
		uParam0->f_4 = joaat("barracks");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 43:
		*uParam0 = {693.1154f, -1018.155f, 21.6387f};
		uParam0->f_3 = 177.6454f;
		uParam0->f_4 = joaat("firetruk");
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 44:
		*uParam0 = {-73.6963f, 495.124f, 143.5226f};
		uParam0->f_3 = 155.5994f;
		uParam0->f_4 = joaat("vacca");
		iVar0 = 1;
		break;

	case 45:
		*uParam0 = {-67.6314f, 891.8266f, 234.5348f};
		uParam0->f_3 = 294.993f;
		uParam0->f_4 = joaat("surano");
		iVar0 = 1;
		break;

	case 46:
		*uParam0 = {533.9048f, -169.2469f, 53.7005f};
		uParam0->f_3 = 1.2998f;
		uParam0->f_4 = joaat("tornado2");
		iVar0 = 1;
		break;

	case 47:
		*uParam0 = {-726.8914f, -408.6952f, 34.0416f};
		uParam0->f_3 = 267.7392f;
		uParam0->f_4 = joaat("superd");
		iVar0 = 1;
		break;

	case 48:
		*uParam0 = {-1321.519f, 261.3993f, 61.5709f};
		uParam0->f_3 = 350.7697f;
		uParam0->f_4 = joaat("double");
		iVar0 = 1;
		break;

	case 49:
		*uParam0 = {-1267.999f, 451.6463f, 93.7071f};
		uParam0->f_3 = 48.9311f;
		uParam0->f_4 = joaat("double");
		iVar0 = 1;
		break;

	case 50:
		*uParam0 = {-1062.076f, -226.7637f, 37.157f};
		uParam0->f_3 = 234.2767f;
		uParam0->f_4 = joaat("double");
		iVar0 = 1;
		break;

	case 51:
		*uParam0 = {68.16914f, -1558.958f, 29.46904f};
		uParam0->f_3 = 49.90575f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 52:
		*uParam0 = {589.4399f, 2736.708f, 42.03316f};
		uParam0->f_3 = -175.7105f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 53:
		*uParam0 = {-488.774f, -344.5721f, 34.36356f};
		uParam0->f_3 = 82.4042f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 54:
		*uParam0 = {288.8808f, -585.4728f, 43.15428f};
		uParam0->f_3 = -20.80707f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 55:
		*uParam0 = {304.8294f, -1383.674f, 31.67744f};
		uParam0->f_3 = -41.11603f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 56:
		*uParam0 = {1126.194f, -1481.486f, 34.7016f};
		uParam0->f_3 = -91.43369f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 57:
		*uParam0 = {-1598.36f, 5252.84f, 0f};
		uParam0->f_3 = 28.14f;
		uParam0->f_4 = joaat("submersible");
		uParam0->f_13 = 308;
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 30);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 58:
		*uParam0 = {-1602.62f, 5260.37f, 0.86f};
		uParam0->f_3 = 25.32f;
		uParam0->f_4 = joaat("dinghy");
		uParam0->f_13 = 404;
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 59:
		*uParam0 = {2116.571f, 4763.279f, 40.1596f};
		uParam0->f_3 = 198.723f;
		uParam0->f_4 = joaat("bfinjection");
		iVar0 = 1;
		break;

	case 60:
		*uParam0 = {1133.21f, 120.2f, 80.9f};
		uParam0->f_3 = 134.4f;
		if (func_125()) {
			uParam0->f_4 = joaat("blimp2");
		}
		else {
			uParam0->f_4 = joaat("blimp");
		}
		uParam0->f_13 = 401;
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 1);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 21);
		iVar0 = 1;
		break;

	case 61:
		*uParam0 = {-806.31f, -2679.65f, 13.9f};
		uParam0->f_3 = 150.54f;
		if (func_125()) {
			uParam0->f_4 = joaat("blimp2");
		}
		else {
			uParam0->f_4 = joaat("blimp");
		}
		uParam0->f_13 = 401;
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 1);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 21);
		iVar0 = 1;
		break;

	case 62:
		*uParam0 = {1985.85f, 3828.96f, 31.98f};
		uParam0->f_3 = -16.58f;
		uParam0->f_4 = joaat("blazer3");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 63:
		*uParam0 = {3870.75f, 4464.67f, 0f};
		uParam0->f_3 = 0f;
		uParam0->f_4 = joaat("submersible2");
		uParam0->f_13 = 308;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 6);
		gameplay::set_bit(&uParam0->f_9, 30);
		iVar0 = 1;
		break;

	case 64:
		*uParam0 = {1257.729f, -2564.474f, 41.717f};
		uParam0->f_3 = 284.5561f;
		uParam0->f_4 = joaat("dukes2");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 65:
		*uParam0 = {643.2823f, 3014.152f, 42.2733f};
		uParam0->f_3 = 128.0554f;
		uParam0->f_4 = joaat("dukes2");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 66:
		*uParam0 = {38.9368f, 850.8677f, 196.3f};
		uParam0->f_3 = 311.6813f;
		uParam0->f_4 = joaat("dodo");
		gameplay::set_bit(&uParam0->f_9, 30);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 67:
		*uParam0 = {1333.875f, 4262.226f, 30.78f};
		uParam0->f_3 = 262.5293f;
		uParam0->f_4 = joaat("dodo");
		gameplay::set_bit(&uParam0->f_9, 30);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;
	}
	if (gameplay::is_bit_set(uParam0->f_9, 10)) {
		uParam0->f_4 = Global_101700.f_31389.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14) {
			if (uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra") || uParam0->f_4 == joaat("luxor") ||
				uParam0->f_4 == joaat("shamal") || uParam0->f_4 == joaat("titan") || uParam0->f_4 == joaat("luxor2")) {
				*uParam0 = {1678.8f, 3229.6f, 41.8f};
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_68(Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/]};
		}
		if (Global_101700.f_31389.f_1934[uParam0->f_14] != -1f) {
			uParam0->f_3 = Global_101700.f_31389.f_1934[uParam0->f_14];
		}
	}
	if (gameplay::is_bit_set(uParam0->f_9, 19)) {
		if (!func_68(Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/]};
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (gameplay::is_bit_set(uParam0->f_9, 20)) {
		if (!func_68(Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/]};
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

// Position - 0xDBD2
int func_145(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 68) {
		if (entity::does_entity_exist(Global_68531.f_484[iVar0]) &&
			!entity::is_entity_dead(Global_68531.f_484[iVar0], 0) &&
			vehicle::is_vehicle_driveable(Global_68531.f_484[iVar0], 0)) {
			vehicle::get_vehicle_colours(iParam0, &iVar1, &iVar2);
			vehicle::get_vehicle_colours(Global_68531.f_484[iVar0], &iVar3, &iVar4);
			if (entity::get_entity_model(iParam0) == entity::get_entity_model(Global_68531.f_484[iVar0]) &&
				vehicle::get_vehicle_livery(iParam0) == vehicle::get_vehicle_livery(Global_68531.f_484[iVar0]) &&
				iVar1 == iVar2 && iVar3 == iVar4) {
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

// Position - 0xDC95
int func_146(int iParam0, vector3 vParam1, bool bParam4) {
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;

	iVar0 = entity::get_entity_model(iParam0);
	switch (iVar0) {
	case joaat("cargobob"):
		if (func_147(iParam0, Global_68531.f_139[38], 0)) {
			func_140(38);
			return 1;
		}
		break;

	case joaat("firetruk"):
		if (func_147(iParam0, Global_68531.f_139[43], 1)) {
			func_140(43);
			return 1;
		}
		break;

	case joaat("cuban800"):
		iVar5 = ped::get_ped_nearby_vehicles(player::player_ped_id(), &uVar1);
		iVar6 = 0;
		while (iVar6 <= iVar5 - 1) {
			if (func_147(iParam0, uVar1[iVar6], 1) &&
				func_116(entity::get_entity_coords(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0)) {
				if (!bParam4 || func_68(vParam1, 0f, 0f, 0f, 0) ||
					gameplay::get_distance_between_coords(entity::get_entity_coords(iParam0, 1),
														  entity::get_entity_coords(uVar1[iVar6], 1), 1) < 10f) {
					vehicle::delete_vehicle(&iParam0);
					return 1;
				}
				else {
					return 0;
				}
			}
			iVar6++;
		}
		break;

	case joaat("luxor2"):
		if (entity::does_entity_exist(Global_68531.f_484[14]) && vehicle::is_vehicle_driveable(iParam0, 0) &&
			vehicle::is_vehicle_driveable(Global_68531.f_484[14], 0)) {
			if (entity::get_entity_model(Global_68531.f_484[14]) == joaat("luxor2") &&
				vehicle::get_vehicle_livery(iParam0) == vehicle::get_vehicle_livery(Global_68531.f_484[14])) {
				func_140(14);
				return 1;
			}
		}
		break;

	case joaat("swift2"):
		if (entity::does_entity_exist(Global_68531.f_484[20]) && vehicle::is_vehicle_driveable(iParam0, 0) &&
			vehicle::is_vehicle_driveable(Global_68531.f_484[20], 0)) {
			if (entity::get_entity_model(Global_68531.f_484[20]) == joaat("swift2") &&
				vehicle::get_vehicle_livery(iParam0) == vehicle::get_vehicle_livery(Global_68531.f_484[20])) {
				func_140(20);
				return 1;
			}
		}
		break;
	}
	return 0;
}

// Position - 0xDE9D
bool func_147(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (entity::does_entity_exist(iParam1) && !entity::is_entity_dead(iParam1, 0) &&
		vehicle::is_vehicle_driveable(iParam1, 0)) {
		if (iParam2) {
			vehicle::get_vehicle_colours(iParam0, &iVar0, &iVar1);
			vehicle::get_vehicle_colours(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3) {
				return true;
			}
		}
		else {
			return true;
		}
	}
	return false;
}

// Position - 0xDEFE
void func_148(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9) {
		if (!entity::does_entity_exist(Global_89155[iVar0])) {
			Global_89155[iVar0] = iParam0;
			Global_89165[iVar0] = iParam1;
			Global_89175[iVar0] = entity::get_entity_model(iParam0);
			if (vehicle::is_this_model_a_car(Global_89175[iVar0])) {
				Global_89203[iParam1 /*3*/][0] = -1;
			}
			else {
				Global_89203[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8) {
		}
		iVar0++;
	}
}

// Position - 0xDF80
void func_149(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9) {
		if (entity::does_entity_exist(Global_89155[iVar0])) {
			if (iParam0 == 145 || Global_89165[iVar0] == iParam0) {
				if (iParam1 == 0 || entity::get_entity_model(Global_89155[iVar0]) == func_36(iParam0, iParam1)) {
					if (!ped::is_ped_in_vehicle(player::player_ped_id(), Global_89155[iVar0], 0)) {
						entity::set_entity_as_mission_entity(Global_89155[iVar0], 0, 1);
						vehicle::delete_vehicle(&Global_89155[iVar0]);
						Global_89165[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

// Position - 0xE01E
void func_150(int iParam0, var *uParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		if (gameplay::get_hash_key(&uParam1->f_1) != 0) {
			vehicle::set_vehicle_number_plate_text(iParam0, &uParam1->f_1);
		}
		if (*uParam1 >= 0 && *uParam1 < vehicle::get_number_of_vehicle_number_plates()) {
			vehicle::set_vehicle_number_plate_text_index(iParam0, *uParam1);
		}
		if (uParam1->f_66 == joaat("sovereign")) {
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco")) {
			iVar0 = 1;
			if (gameplay::is_bit_set(uParam1->f_77, func_40(iVar0 + 1))) {
			}
			else {
				gameplay::set_bit(&uParam1->f_77, func_40(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2")) {
			iVar1 = 1;
			if (gameplay::is_bit_set(uParam1->f_77, func_40(iVar1 + 1))) {
			}
			else {
				gameplay::set_bit(&uParam1->f_77, func_40(iVar1 + 1));
			}
		}
		if (gameplay::is_bit_set(uParam1->f_77, 13)) {
			vehicle::set_vehicle_custom_primary_colour(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else {
			vehicle::clear_vehicle_custom_primary_colour(iParam0);
		}
		if (gameplay::is_bit_set(uParam1->f_77, 12)) {
			vehicle::set_vehicle_custom_secondary_colour(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else {
			vehicle::clear_vehicle_custom_secondary_colour(iParam0);
		}
		vehicle::set_vehicle_colours(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0) {
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0) {
			uParam1->f_8 = 0;
		}
		vehicle::set_vehicle_extra_colours(iParam0, uParam1->f_7, uParam1->f_8);
		if (gameplay::is_bit_set(uParam1->f_77, 15) || func_157(iParam0) ||
			uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0 && uParam1->f_9[20] > 0)
			&&func_156() {
				uParam1->f_62 = 0;
				uParam1->f_63 = 0;
				uParam1->f_64 = 0;
			}
		else if (uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0) {
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		vehicle::set_vehicle_tyre_smoke_color(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger")) {
			vehicle::set_vehicle_window_tint(iParam0, 0);
		}
		else {
			vehicle::set_vehicle_window_tint(iParam0, 0);
			vehicle::set_vehicle_window_tint(iParam0, uParam1->f_65);
		}
		vehicle::set_vehicle_tyres_can_burst(iParam0, !gameplay::is_bit_set(uParam1->f_77, 9));
		if (iParam2) {
			vehicle::set_vehicle_doors_locked(iParam0, uParam1->f_70);
		}
		vehicle::_set_vehicle_neon_lights_colour(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		vehicle::_set_vehicle_neon_light_enabled(iParam0, 2, gameplay::is_bit_set(uParam1->f_77, 28));
		vehicle::_set_vehicle_neon_light_enabled(iParam0, 3, gameplay::is_bit_set(uParam1->f_77, 29));
		vehicle::_set_vehicle_neon_light_enabled(iParam0, 0, gameplay::is_bit_set(uParam1->f_77, 30));
		vehicle::_set_vehicle_neon_light_enabled(iParam0, 1, gameplay::is_bit_set(uParam1->f_77, 31));
		vehicle::set_vehicle_is_stolen(iParam0, gameplay::is_bit_set(uParam1->f_77, 10));
		if (vehicle::get_vehicle_livery_count(iParam0) > 1 && uParam1->f_67 >= 0) {
			vehicle::set_vehicle_livery(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255) {
			if (!vehicle::is_this_model_a_bicycle(entity::get_entity_model(iParam0))) {
				if (vehicle::is_this_model_a_bike(entity::get_entity_model(iParam0))) {
					if (uParam1->f_69 == 6) {
						func_155(iParam0, uParam1->f_69);
					}
				}
				else {
					func_155(iParam0, uParam1->f_69);
				}
			}
		}
		if (vehicle::is_vehicle_a_convertible(iParam0, 0)) {
			if (uParam1->f_68 == 0 || uParam1->f_68 == 3 || uParam1->f_68 == 5) {
				vehicle::raise_convertible_roof(iParam0, 1);
			}
			else {
				vehicle::lower_convertible_roof(iParam0, 1);
			}
		}
		if (iParam3) {
			func_151(&iParam0, &uParam1->f_9, &uParam1->f_59);
		}
		if (!vehicle::is_this_model_a_heli(uParam1->f_66) && !vehicle::is_this_model_a_boat(uParam1->f_66)) {
			iVar2 = 0;
			while (iVar2 <= 11) {
				if (gameplay::is_bit_set(uParam1->f_77, func_40(iVar2 + 1))) {
					if (!vehicle::is_vehicle_extra_turned_on(iParam0, iVar2 + 1)) {
						vehicle::set_vehicle_extra(iParam0, iVar2 + 1, 0);
					}
				}
				else if (vehicle::is_vehicle_extra_turned_on(iParam0, iVar2 + 1)) {
					vehicle::set_vehicle_extra(iParam0, iVar2 + 1, 1);
				}
				iVar2++;
			}
		}
		if (entity::get_entity_model(iParam0) == joaat("sheava") ||
			entity::get_entity_model(iParam0) == joaat("omnis") || entity::get_entity_model(iParam0) == joaat("le7b")) {
			if (vehicle::get_vehicle_mod(iParam0, 0) == -1) {
				vehicle::set_vehicle_extra(iParam0, 1, 0);
			}
		}
		if (vehicle::is_this_model_a_plane(uParam1->f_66)) {
			if (!gameplay::is_bit_set(uParam1->f_77, 23)) {
				if (gameplay::is_bit_set(uParam1->f_77, 22)) {
					vehicle::control_landing_gear(iParam0, 2);
				}
				else {
					vehicle::control_landing_gear(iParam0, 3);
				}
			}
			else {
				vehicle::control_landing_gear(iParam0, 4);
			}
		}
		if (gameplay::is_bit_set(uParam1->f_77, 27)) {
			decorator::decor_set_bool(iParam0, "IgnoredByQuickSave", 1);
		}
		else {
			decorator::decor_set_bool(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

// Position - 0xE4CC
int func_151(int iParam0, var *uParam1, var *uParam2) {
	int iVar0;
	int iVar1;

	if (!vehicle::is_vehicle_driveable(*iParam0, 0)) {
		return 0;
	}
	if (vehicle::get_num_mod_kits(*iParam0) == 0) {
		return 0;
	}
	vehicle::set_vehicle_mod_kit(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1) {
		iVar1 = iVar0;
		if (iVar1 == 17 || iVar1 == 18 || iVar1 == 19 || iVar1 == 20 || iVar1 == 21 || iVar1 == 22) {
			vehicle::toggle_vehicle_mod(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (vehicle::get_vehicle_mod(*iParam0, iVar1) != (*uParam1)[iVar0] - 1) {
			vehicle::remove_vehicle_mod(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0) {
				if (iVar0 == 23) {
					vehicle::set_vehicle_mod(*iParam0, iVar1, (*uParam1)[iVar0] - 1, (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24) {
					vehicle::set_vehicle_mod(*iParam0, iVar1, (*uParam1)[iVar0] - 1, (*uParam2)[1] > 0);
				}
				else {
					vehicle::set_vehicle_mod(*iParam0, iVar1, (*uParam1)[iVar0] - 1, 0);
				}
			}
		}
		iVar0++;
	}
	if (func_154(entity::get_entity_model(*iParam0), 1) &&
		vehicle::get_vehicle_mod(*iParam0, 24) != func_153(*iParam0, (*uParam1)[38] - 1)) {
		vehicle::set_vehicle_mod(*iParam0, 24, func_153(*iParam0, (*uParam1)[38] - 1), 0);
	}
	if (func_152(*iParam0)) {
		vehicle::set_vehicle_strong(*iParam0, 1);
		vehicle::set_vehicle_has_strong_axles(*iParam0, 1);
	}
	return 1;
}

// Position - 0xE644
bool func_152(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];

	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0) &&
		vehicle::get_num_mod_kits(iParam0) > 0) {
		vehicle::set_vehicle_mod_kit(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49) {
			iVar1 = iVar0;
			if (iVar1 == 17 || iVar1 == 18 || iVar1 == 19 || iVar1 == 20 || iVar1 == 21 || iVar1 == 22) {
			}
			else if (vehicle::get_vehicle_mod(iParam0, iVar1) != -1) {
				StringCopy(&cVar3,
						   vehicle::get_mod_text_label(iParam0, iVar1, vehicle::get_vehicle_mod(iParam0, iVar1)), 16);
				iVar2 = gameplay::get_hash_key(&cVar3);
				if (iVar2 != 0) {
					if (iVar2 == gameplay::get_hash_key("MNU_CAGE") || iVar2 == gameplay::get_hash_key("SABRE_CAG")) {
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

// Position - 0xE720
int func_153(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0)) {
		switch (entity::get_entity_model(iParam0)) {
		case joaat("tornado5"):
			switch (iParam1) {
			case 0: return 0;

			case 1: return 1;

			case 2: return 2;

			case 3: return 3;

			case 4: return 4;

			case 5: return 4;
			}
			break;

		case joaat("faction3"): return 3;
		}
		iVar0 = vehicle::get_num_vehicle_mods(iParam0, 38);
		iVar1 = vehicle::get_num_vehicle_mods(iParam0, 24);
		fVar2 = system::to_float(iParam1 + 1) / system::to_float(iVar0);
		iVar3 = system::floor(system::to_float(iVar1) * fVar2) - 1;
		if (iVar3 < 0) {
			iVar3 = 0;
		}
		if (iVar3 >= iVar0) {
			iVar3 = iVar0 - 1;
		}
		return iVar3;
	}
	return 0;
}

// Position - 0xE805
int func_154(int iParam0, int iParam1) {
	switch (iParam0) {
	case joaat("faction2"):
	case joaat("buccaneer2"):
	case joaat("chino2"):
	case joaat("moonbeam2"):
	case joaat("primo2"):
	case joaat("voodoo"): return 1;

	case joaat("sabregt2"):
		if (!Global_262145.f_12339) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("tornado5"):
		if (!Global_262145.f_12340) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("virgo2"):
		if (!Global_262145.f_12338) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("minivan2"):
		if (!Global_262145.f_12341) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("slamvan3"):
		if (!Global_262145.f_12343) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("faction3"):
		if (!Global_262145.f_12342) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("sultanrs"):
	case joaat("banshee2"):
		if ((iParam1 & 1) != 0) {
			return 0;
		}
		return 1;

	case joaat("comet3"):
		if (Global_262145.f_16780) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("diablous2"):
		if (Global_262145.f_16782) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("fcr2"):
		if (Global_262145.f_16786) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("elegy"):
		if (Global_262145.f_16783) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("nero2"):
		if (Global_262145.f_16790) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("italigtb2"):
		if (Global_262145.f_16788) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("specter2"):
		if (Global_262145.f_16793) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;
	}
	return 0;
}

// Position - 0xEA2A
void func_155(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (vehicle::get_num_mod_kits(iParam0) > 0) {
		vehicle::set_vehicle_mod_kit(iParam0, 0);
		iVar0 = vehicle::get_vehicle_mod(iParam0, 24);
		iVar1 = vehicle::get_vehicle_mod_variation(iParam0, 24);
		vehicle::set_vehicle_wheel_type(iParam0, iParam1);
		if (entity::get_entity_model(iParam0) == joaat("tornado6")) {
			return;
		}
		if (iVar0 == -1) {
			vehicle::remove_vehicle_mod(iParam0, 24);
		}
		else {
			vehicle::set_vehicle_mod(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

// Position - 0xEA8F
var func_156() { return dlc2::is_dlc_present(-1691188696); }

// Position - 0xEAA0
int func_157(int iParam0) {
	int iVar0;

	if (entity::does_entity_exist(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (decorator::decor_is_registered_as_type("MPBitset", 3)) {
				if (decorator::decor_exist_on(iParam0, "MPBitset")) {
					iVar0 = decorator::decor_get_int(iParam0, "MPBitset");
				}
				return gameplay::is_bit_set(iVar0, 4);
			}
		}
	}
	return 0;
}

// Position - 0xEAEB
void func_158(vector3 vParam0, float fParam3, int iParam4) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68) {
		if (func_144(&Global_68531.f_555[0 /*21*/], iVar0)) {
			if (gameplay::get_distance_between_coords(vParam0, Global_68531.f_555[0 /*21*/], iParam4) <= fParam3) {
				func_140(iVar0);
			}
		}
		iVar0++;
	}
}

// Position - 0xEB3B
var func_159() { return Global_96040.f_2311.f_12.f_66; }

// Position - 0xEB4E
bool func_160() { return func_115(&Global_96040.f_2311); }

// Position - 0xEB61
void func_161() {
	iLocal_3293 = unk_0x67D02A194A2FC2BD("BREAKING_NEWS");
	streaming::request_model(joaat("jet"));
	streaming::request_model(joaat("police3"));
	streaming::request_model(joaat("maverick"));
	streaming::request_model(joaat("bison"));
	streaming::request_model(joaat("blista"));
	streaming::request_model(joaat("ig_molly"));
	streaming::request_model(joaat("cogcabrio"));
	streaming::request_model(joaat("rapidgt"));
	vehicle::request_vehicle_recording(45, "BB_Chase");
	vehicle::request_vehicle_recording(35, "BB_Chase");
	vehicle::request_vehicle_recording(2, "BB_Chase");
	vehicle::request_vehicle_recording(54, "BB_Chase");
	vehicle::request_vehicle_recording(55, "BB_Chase");
	vehicle::request_vehicle_recording(67, "BB_Chase");
	func_163(1, "BB_Chase");
	if (func_23()) {
		if (func_160()) {
			if (!vehicle::is_this_model_a_heli(func_159()) && !vehicle::is_this_model_a_plane(func_159())) {
				func_126();
				while (!func_113()) {
					system::wait(0);
				}
			}
		}
	}
	while (!streaming::has_model_loaded(joaat("jet")) || !streaming::has_model_loaded(joaat("police3")) ||
		   !streaming::has_model_loaded(joaat("maverick")) || !streaming::has_model_loaded(joaat("bison")) ||
		   !streaming::has_model_loaded(joaat("blista")) || !streaming::has_model_loaded(joaat("ig_molly")) ||
		   !streaming::has_model_loaded(joaat("cogcabrio")) || !streaming::has_model_loaded(joaat("rapidgt"))) {
		system::wait(0);
	}
	while (!graphics::has_scaleform_movie_loaded(iLocal_3293) || !func_162(1, "BB_Chase")) {
		system::wait(0);
	}
	while (!vehicle::has_vehicle_recording_been_loaded(45, "BB_Chase") ||
		   !vehicle::has_vehicle_recording_been_loaded(35, "BB_Chase") ||
		   !vehicle::has_vehicle_recording_been_loaded(2, "BB_Chase") ||
		   !vehicle::has_vehicle_recording_been_loaded(54, "BB_Chase") ||
		   !vehicle::has_vehicle_recording_been_loaded(55, "BB_Chase") ||
		   !vehicle::has_vehicle_recording_been_loaded(67, "BB_Chase")) {
		system::wait(0);
	}
}

// Position - 0xED36
bool func_162(int iParam0, char *sParam1) { return vehicle::has_vehicle_recording_been_loaded(iParam0, sParam1); }

// Position - 0xED46
void func_163(int iParam0, char *sParam1) { vehicle::request_vehicle_recording(iParam0, sParam1); }

// Position - 0xED56
void func_164() {
	func_190();
	func_188();
	ui::clear_prints();
	gameplay::_set_unk_map_flag(0);
	pathfind::set_ignore_no_gps_flag(0);
	cam::set_cinematic_button_active(1);
	if (object::_does_door_exist(iLocal_3220)) {
		object::remove_door_from_system(iLocal_3220);
	}
	if (pathfind::does_navmesh_blocking_object_exist(iLocal_3221)) {
		pathfind::remove_navmesh_blocking_object(iLocal_3221);
	}
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		entity::set_entity_coords(player::player_ped_id(), -1019.579f, -484.872f, 36.0795f, 1, 0, 0, 1);
		entity::set_entity_heading(player::player_ped_id(), 93.7701f);
	}
	if (entity::does_entity_exist(iLocal_3259)) {
		if (vehicle::is_vehicle_driveable(iLocal_3259, 0)) {
			if (vehicle::is_playback_going_on_for_vehicle(iLocal_3259)) {
				vehicle::stop_playback_recorded_vehicle(iLocal_3259);
			}
		}
	}
	if (entity::does_entity_exist(iLocal_3258)) {
		if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
			audio::_0x18EB48CFC41F2EA0(iLocal_3258, 0);
			if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
				vehicle::stop_playback_recorded_vehicle(iLocal_3258);
			}
		}
	}
	if (graphics::does_particle_fx_looped_exist(iLocal_3759)) {
		graphics::stop_particle_fx_looped(iLocal_3759, 0);
	}
	if (graphics::does_particle_fx_looped_exist(iLocal_3760)) {
		graphics::stop_particle_fx_looped(iLocal_3760, 0);
	}
	if (graphics::does_particle_fx_looped_exist(iLocal_3761)) {
		graphics::stop_particle_fx_looped(iLocal_3761, 0);
	}
	if (graphics::does_particle_fx_looped_exist(iLocal_3762)) {
		graphics::stop_particle_fx_looped(iLocal_3762, 0);
	}
	if (graphics::does_particle_fx_looped_exist(iLocal_3763)) {
		graphics::stop_particle_fx_looped(iLocal_3763, 0);
	}
	if (graphics::does_particle_fx_looped_exist(uLocal_3755[0])) {
		graphics::stop_particle_fx_looped(uLocal_3755[0], 0);
	}
	if (graphics::does_particle_fx_looped_exist(uLocal_3755[1])) {
		graphics::stop_particle_fx_looped(uLocal_3755[1], 0);
	}
	if (graphics::does_particle_fx_looped_exist(uLocal_3755[2])) {
		graphics::stop_particle_fx_looped(uLocal_3755[2], 0);
	}
	streaming::remove_ptfx_asset();
	if (entity::does_entity_exist(iLocal_3222)) {
		ped::delete_ped(&iLocal_3222);
	}
	if (entity::does_entity_exist(iLocal_3228)) {
		ped::delete_ped(&iLocal_3228);
	}
	if (entity::does_entity_exist(iLocal_3245)) {
		ped::delete_ped(&iLocal_3245);
	}
	if (entity::does_entity_exist(iLocal_3246)) {
		ped::delete_ped(&iLocal_3246);
	}
	if (entity::does_entity_exist(iLocal_3247)) {
		ped::delete_ped(&iLocal_3247);
	}
	if (entity::does_entity_exist(iLocal_3248)) {
		ped::delete_ped(&iLocal_3248);
	}
	if (entity::does_entity_exist(iLocal_3249)) {
		ped::delete_ped(&iLocal_3249);
	}
	if (entity::does_entity_exist(iLocal_3250)) {
		ped::delete_ped(&iLocal_3250);
	}
	if (entity::does_entity_exist(uLocal_3223[0])) {
		ped::delete_ped(&uLocal_3223[0]);
	}
	if (entity::does_entity_exist(uLocal_3223[1])) {
		ped::delete_ped(&uLocal_3223[1]);
	}
	if (entity::does_entity_exist(uLocal_3223[2])) {
		ped::delete_ped(&uLocal_3223[2]);
	}
	if (entity::does_entity_exist(uLocal_3223[3])) {
		ped::delete_ped(&uLocal_3223[3]);
	}
	if (entity::does_entity_exist(uLocal_3229[0])) {
		ped::delete_ped(&uLocal_3229[0]);
	}
	if (entity::does_entity_exist(uLocal_3229[1])) {
		ped::delete_ped(&uLocal_3229[1]);
	}
	if (entity::does_entity_exist(uLocal_3229[2])) {
		ped::delete_ped(&uLocal_3229[2]);
	}
	if (entity::does_entity_exist(uLocal_3233[0])) {
		ped::delete_ped(&uLocal_3233[0]);
	}
	if (entity::does_entity_exist(uLocal_3233[1])) {
		ped::delete_ped(&uLocal_3233[1]);
	}
	if (entity::does_entity_exist(uLocal_3233[2])) {
		ped::delete_ped(&uLocal_3233[2]);
	}
	if (entity::does_entity_exist(uLocal_3233[3])) {
		ped::delete_ped(&uLocal_3233[3]);
	}
	if (entity::does_entity_exist(uLocal_3233[4])) {
		ped::delete_ped(&uLocal_3233[4]);
	}
	if (entity::does_entity_exist(uLocal_3233[5])) {
		ped::delete_ped(&uLocal_3233[5]);
	}
	if (entity::does_entity_exist(uLocal_3233[6])) {
		ped::delete_ped(&uLocal_3233[6]);
	}
	if (entity::does_entity_exist(uLocal_3233[7])) {
		ped::delete_ped(&uLocal_3233[7]);
	}
	if (entity::does_entity_exist(uLocal_3233[8])) {
		ped::delete_ped(&uLocal_3233[8]);
	}
	if (entity::does_entity_exist(uLocal_3233[9])) {
		ped::delete_ped(&uLocal_3233[9]);
	}
	if (entity::does_entity_exist(uLocal_3233[10])) {
		ped::delete_ped(&uLocal_3233[10]);
	}
	if (entity::does_entity_exist(uLocal_3251[0])) {
		ped::delete_ped(&uLocal_3251[0]);
	}
	if (entity::does_entity_exist(uLocal_3254[0])) {
		ped::delete_ped(&uLocal_3254[0]);
	}
	if (entity::does_entity_exist(uLocal_3254[1])) {
		ped::delete_ped(&uLocal_3254[1]);
	}
	if (entity::does_entity_exist(iLocal_3258)) {
		vehicle::delete_vehicle(&iLocal_3258);
	}
	if (entity::does_entity_exist(iLocal_3259)) {
		if (!entity::is_entity_a_mission_entity(iLocal_3259)) {
			entity::set_entity_as_mission_entity(iLocal_3259, 1, 0);
		}
		vehicle::delete_vehicle(&iLocal_3259);
	}
	if (entity::does_entity_exist(iLocal_3264)) {
		vehicle::delete_vehicle(&iLocal_3264);
	}
	if (entity::does_entity_exist(iLocal_3265)) {
		vehicle::delete_vehicle(&iLocal_3265);
	}
	if (entity::does_entity_exist(iLocal_3266)) {
		vehicle::delete_vehicle(&iLocal_3266);
	}
	if (entity::does_entity_exist(iLocal_3267)) {
		vehicle::delete_vehicle(&iLocal_3267);
	}
	if (entity::does_entity_exist(iLocal_3271)) {
		vehicle::delete_vehicle(&iLocal_3271);
	}
	if (entity::does_entity_exist(iLocal_3275)) {
		vehicle::delete_vehicle(&iLocal_3275);
	}
	if (entity::does_entity_exist(uLocal_3279[0])) {
		vehicle::delete_vehicle(&uLocal_3279[0]);
	}
	if (entity::does_entity_exist(uLocal_3279[1])) {
		vehicle::delete_vehicle(&uLocal_3279[1]);
	}
	if (entity::does_entity_exist(uLocal_3260[0])) {
		vehicle::delete_vehicle(&uLocal_3260[0]);
	}
	if (entity::does_entity_exist(uLocal_3260[1])) {
		vehicle::delete_vehicle(&uLocal_3260[1]);
	}
	if (entity::does_entity_exist(uLocal_3279[0])) {
		vehicle::delete_vehicle(&uLocal_3279[0]);
	}
	if (entity::does_entity_exist(uLocal_3279[1])) {
		vehicle::delete_vehicle(&uLocal_3279[1]);
	}
	if (entity::does_entity_exist(uLocal_3268[0])) {
		vehicle::delete_vehicle(&uLocal_3268[0]);
	}
	if (entity::does_entity_exist(uLocal_3268[1])) {
		vehicle::delete_vehicle(&uLocal_3268[1]);
	}
	if (entity::does_entity_exist(uLocal_3272[0])) {
		vehicle::delete_vehicle(&uLocal_3272[0]);
	}
	if (entity::does_entity_exist(iLocal_3263)) {
		vehicle::delete_vehicle(&iLocal_3263);
	}
	if (entity::does_entity_exist(iLocal_3282)) {
		object::delete_object(&iLocal_3282);
	}
	if (entity::does_entity_exist(iLocal_3283)) {
		object::delete_object(&iLocal_3283);
	}
	if (entity::does_entity_exist(iLocal_3284)) {
		object::delete_object(&iLocal_3284);
	}
	audio::release_script_audio_bank();
	if (audio::is_audio_scene_active("SOL_3_DRIVE_TO_AIRPORT")) {
		audio::stop_audio_scene("SOL_3_DRIVE_TO_AIRPORT");
	}
	if (audio::is_audio_scene_active("SOL_3_MAIN_CHASE")) {
		audio::stop_audio_scene("SOL_3_MAIN_CHASE");
	}
	if (audio::is_audio_scene_active("SOL_3_CHOPPER_CAM")) {
		audio::stop_audio_scene("SOL_3_CHOPPER_CAM");
	}
	if (audio::is_audio_scene_active("SOL_3_HELI_TAKEOFF")) {
		audio::stop_audio_scene("SOL_3_HELI_TAKEOFF");
	}
	if (audio::is_audio_scene_active("SOL_3_EVENT_TANKER_CRASH")) {
		audio::stop_audio_scene("SOL_3_EVENT_TANKER_CRASH");
	}
	if (audio::is_audio_scene_active("SOL_3_CAR_JET_ENGINE")) {
		audio::stop_audio_scene("SOL_3_CAR_JET_ENGINE");
	}
	if (audio::is_audio_scene_active("SOL_3_PLANE_ON_FIRE")) {
		audio::stop_audio_scene("SOL_3_PLANE_ON_FIRE");
	}
	if (audio::is_audio_scene_active("SOL_3_EVENT_JET_LANDING")) {
		audio::stop_audio_scene("SOL_3_EVENT_JET_LANDING");
	}
	if (audio::is_audio_scene_active("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION")) {
		audio::stop_audio_scene("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
	}
	if (audio::is_audio_scene_active("SOL_3_ARRIVE_AT_HANGAR")) {
		audio::stop_audio_scene("SOL_3_ARRIVE_AT_HANGAR");
	}
	if (audio::is_audio_scene_active("SOL_3_ON_FOOT_CHASE")) {
		audio::stop_audio_scene("SOL_3_ON_FOOT_CHASE");
	}
	if (audio::is_audio_scene_active("SOL_3_LOSE_COPS")) {
		audio::stop_audio_scene("SOL_3_LOSE_COPS");
	}
	if (audio::is_audio_scene_active("SOL_3_LOSE_COPS_PLANE")) {
		audio::stop_audio_scene("SOL_3_LOSE_COPS_PLANE");
	}
	if (audio::is_audio_scene_active("SOL_3_LOSE_COPS_VEHICLE")) {
		audio::stop_audio_scene("SOL_3_LOSE_COPS_VEHICLE");
	}
	if (audio::is_audio_scene_active("SOL_3_ENGINE_DEATH_SCENE")) {
		audio::stop_audio_scene("SOL_3_ENGINE_DEATH_SCENE");
	}
	audio::stop_sound(iLocal_3211);
	audio::stop_sound(iLocal_3213);
	audio::stop_sound(iLocal_3214);
	audio::stop_sound(iLocal_3215);
	audio::stop_sound(iLocal_3216);
	audio::stop_sound(iLocal_3217);
	audio::stop_sound(iLocal_3218);
	audio::stop_sound(iLocal_3219);
	audio::stop_sound(iLocal_3212);
	func_186(&uLocal_28, 0, 0);
	if (cam::does_cam_exist(iLocal_3289)) {
		cam::destroy_cam(iLocal_3289, 0);
	}
	if (cam::does_cam_exist(iLocal_3290)) {
		cam::destroy_cam(iLocal_3290, 0);
	}
	if (cam::does_cam_exist(iLocal_3291)) {
		cam::destroy_cam(iLocal_3291, 0);
	}
	func_165(1, 1);
	streaming::remove_anim_dict("misssolomon_3");
	streaming::remove_anim_dict("amb@world_human_clipboard@male@base");
	streaming::remove_anim_dict("missheist_agency3aig_lift_waitped_a");
	vehicle::remove_vehicle_recording(1, "BB_CHASE");
	vehicle::remove_vehicle_recording(2, "BB_Chase");
	vehicle::remove_vehicle_recording(9, "BB_CHASE");
	vehicle::remove_vehicle_recording(35, "BB_Chase");
	vehicle::remove_vehicle_recording(45, "BB_Chase");
	vehicle::remove_vehicle_recording(54, "BB_Chase");
	vehicle::remove_vehicle_recording(55, "BB_Chase");
	vehicle::remove_vehicle_recording(61, "BB_CHASE");
	vehicle::remove_vehicle_recording(63, "BB_CHASE");
	vehicle::remove_vehicle_recording(64, "BB_CHASE");
	vehicle::remove_vehicle_recording(67, "BB_Chase");
	vehicle::remove_vehicle_recording(68, "BB_CHASE");
	vehicle::remove_vehicle_recording(69, "BB_Chase");
	graphics::set_scaleform_movie_as_no_longer_needed(&iLocal_3293);
	graphics::set_streamed_texture_dict_as_no_longer_needed("digitalOverlay");
}

// Position - 0xF522
void func_165(int iParam0, int iParam1) {
	if (!gameplay::is_string_null_or_empty(&cLocal_2668)) {
		iLocal_91 = 0;
		func_185();
		ped::remove_relationship_group(iLocal_2684);
		pathfind::set_roads_back_to_original(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (player::is_player_playing(player::player_id())) {
			player::set_air_drag_multiplier_for_players_vehicle(player::player_id(), 1f);
			player::set_dispatch_cops_for_player(player::player_id(), 1);
			ped::set_create_random_cops(1);
		}
		if (bLocal_107) {
			streaming::set_model_as_no_longer_needed(func_184());
		}
		streaming::set_model_as_no_longer_needed(func_183());
		streaming::set_model_as_no_longer_needed(func_182());
		streaming::set_model_as_no_longer_needed(func_181());
		if (!cam::is_screen_faded_out() && !iParam0) {
			func_180();
			func_179();
			func_176();
		}
		else {
			func_172();
			func_171();
		}
		if (iParam1) {
			func_166(0);
		}
	}
}

// Position - 0xF5DE
void func_166(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 46) {
		func_167(iVar0, iParam0);
		iVar0++;
	}
}

// Position - 0xF601
void func_167(int iParam0, bool bParam1) {
	if (bParam1) {
		if (!func_71(iParam0, 2, 1)) {
			func_170(iParam0, 2, 1);
		}
	}
	else if (func_71(iParam0, 2, 1)) {
		func_168(iParam0, 2, 1);
	}
}

// Position - 0xF638
void func_168(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam2) {
		gameplay::clear_bit(&Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_73() == 0) {
			iVar0 = func_49(func_72(iParam0), -1, 0);
			gameplay::clear_bit(&iVar0, iParam1);
			func_169(func_72(iParam0), iVar0, -1, 1, 0);
		}
	}
	else {
		gameplay::clear_bit(&Global_101700.f_668[iParam0], iParam1);
	}
}

// Position - 0xF6A1
void func_169(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam4) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_50(iParam2)];
	if (iVar0 != 0) {
		stats::stat_set_int(iVar0, iParam1, iParam3);
	}
}

// Position - 0xF6D1
void func_170(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam2) {
		gameplay::set_bit(&Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_73() == 0) {
			iVar0 = func_49(func_72(iParam0), -1, 0);
			gameplay::set_bit(&iVar0, iParam1);
			func_169(func_72(iParam0), iVar0, -1, 1, 0);
		}
	}
	else {
		gameplay::set_bit(&Global_101700.f_668[iParam0], iParam1);
	}
}

// Position - 0xF73A
void func_171() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 175) {
		iLocal_2916[iVar0] = 0;
		vLocal_1963[iVar0 /*3*/] = {0f, 0f, 0f};
		fLocal_109[iVar0] = 0f;
		fLocal_285[iVar0] = 0f;
		fLocal_461[iVar0] = 0f;
		fLocal_637[iVar0] = 0f;
		iLocal_1294[iVar0] = 0;
		fLocal_813[iVar0] = 0f;
		iLocal_1470[iVar0] = 0;
		iLocal_2685[iVar0] = 0;
		iLocal_1646[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12) {
		iLocal_3092[iVar0] = 0;
		iVar0++;
	}
	iLocal_1946 = 0;
	iVar0 = 0;
	while (iVar0 < 15) {
		iLocal_3105[iVar0] = 0;
		vLocal_2489[iVar0 /*3*/] = {0f, 0f, 0f};
		fLocal_1209[iVar0] = 0f;
		fLocal_1225[iVar0] = 0f;
		fLocal_1241[iVar0] = 0f;
		fLocal_1257[iVar0] = 0f;
		iLocal_1930[iVar0] = 0;
		iLocal_2861[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6) {
		iLocal_3157[iVar0] = 0;
		iVar0++;
	}
	iLocal_1948 = 0;
	iVar0 = 0;
	while (iVar0 < 35) {
		iLocal_3121[iVar0] = 0;
		vLocal_2535[iVar0 /*3*/] = {0f, 0f, 0f};
		fLocal_993[iVar0] = 0f;
		fLocal_1029[iVar0] = 0f;
		fLocal_1065[iVar0] = 0f;
		fLocal_1101[iVar0] = 0f;
		iLocal_1822[iVar0] = 0;
		fLocal_1137[iVar0] = 0f;
		iLocal_1858[iVar0] = 0;
		iLocal_2877[iVar0] = 0;
		iLocal_1894[iVar0] = 0;
		iVar0++;
	}
	iLocal_1947 = 0;
	iLocal_1950 = 0;
	iLocal_1953 = 0;
	iLocal_1954 = 0;
	iLocal_1955 = 0;
}

// Position - 0xF8C7
void func_172() {
	func_175();
	func_174();
	func_173();
}

// Position - 0xF8DB
void func_173() {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 35) {
		if (entity::does_entity_exist(iLocal_3121[iVar0])) {
			if (vehicle::is_vehicle_driveable(iLocal_3121[iVar0], 0)) {
				if (vehicle::is_playback_going_on_for_vehicle(iLocal_3121[iVar0])) {
					vehicle::stop_playback_recorded_vehicle(iLocal_3121[iVar0]);
				}
				iVar1 = vehicle::get_ped_in_vehicle_seat(iLocal_3121[iVar0], -1, 0);
				if (entity::does_entity_exist(iVar1) && iVar1 != player::player_ped_id()) {
					if (entity::is_entity_a_mission_entity(iVar1)) {
						ped::delete_ped(&iVar1);
					}
				}
			}
			if (entity::is_entity_a_mission_entity(iLocal_3121[iVar0])) {
				vehicle::delete_vehicle(&iLocal_3121[iVar0]);
			}
		}
		iLocal_1858[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100) {
			if (iLocal_1822[iVar0] > 0) {
				vehicle::remove_vehicle_recording(iLocal_1822[iVar0], &cLocal_2668);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35) {
		if (iLocal_2877[iVar0] != 0) {
			streaming::set_model_as_no_longer_needed(iLocal_2877[iVar0]);
		}
		iVar0++;
	}
}

// Position - 0xF9D2
void func_174() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15) {
		if (entity::does_entity_exist(iLocal_3105[iVar0])) {
			if (entity::is_entity_a_mission_entity(iLocal_3105[iVar0])) {
				vehicle::delete_vehicle(&iLocal_3105[iVar0]);
			}
		}
		iLocal_1930[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15) {
		if (iLocal_2861[iVar0] != 0) {
			streaming::set_model_as_no_longer_needed(iLocal_2861[iVar0]);
		}
		iVar0++;
	}
	iLocal_1951 = 0;
	iLocal_1948 = 0;
}

// Position - 0xFA4F
void func_175() {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 175) {
		if (entity::does_entity_exist(iLocal_2916[iVar0])) {
			if (vehicle::is_vehicle_driveable(iLocal_2916[iVar0], 0)) {
				if (vehicle::is_playback_going_on_for_vehicle(iLocal_2916[iVar0])) {
					vehicle::stop_playback_recorded_vehicle(iLocal_2916[iVar0]);
				}
				iVar1 = vehicle::get_ped_in_vehicle_seat(iLocal_2916[iVar0], -1, 0);
				if (entity::does_entity_exist(iVar1) && iVar1 != player::player_ped_id()) {
					if (entity::is_entity_a_mission_entity(iVar1)) {
						ped::delete_ped(&iVar1);
					}
				}
			}
			if (entity::is_entity_a_mission_entity(iLocal_2916[iVar0])) {
				vehicle::delete_vehicle(&iLocal_2916[iVar0]);
			}
		}
		if (!bLocal_87 && !bLocal_100) {
			if (iLocal_1294[iVar0] > 0) {
				vehicle::remove_vehicle_recording(iLocal_1294[iVar0], &cLocal_2668);
			}
		}
		iLocal_1470[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175) {
		if (iLocal_2685[iVar0] != 0) {
			streaming::set_model_as_no_longer_needed(iLocal_2685[iVar0]);
		}
		iVar0++;
	}
	iLocal_1950 = 0;
	iLocal_1946 = 0;
}

// Position - 0xFB4E
void func_176() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35) {
		if (entity::does_entity_exist(iLocal_3121[iVar0])) {
			if (vehicle::is_vehicle_driveable(iLocal_3121[iVar0], 0)) {
				if (vehicle::is_playback_going_on_for_vehicle(iLocal_3121[iVar0])) {
					vehicle::stop_playback_recorded_vehicle(iLocal_3121[iVar0]);
				}
			}
			func_178(iLocal_3121[iVar0]);
			func_177(iLocal_3121[iVar0]);
		}
		iLocal_1858[iVar0] = 0;
		iLocal_1894[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100) {
			if (iLocal_1822[iVar0] > 0) {
				vehicle::remove_vehicle_recording(iLocal_1822[iVar0], &cLocal_2668);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35) {
		if (iLocal_2877[iVar0] != 0) {
			streaming::set_model_as_no_longer_needed(iLocal_2877[iVar0]);
		}
		iVar0++;
	}
	iLocal_1952 = 0;
}

// Position - 0xFC1B
void func_177(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		entity::set_vehicle_as_no_longer_needed(&iParam0);
	}
}

// Position - 0xFC32
void func_178(int iParam0) {
	float fVar0;
	int iVar1;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		iVar1 = vehicle::get_ped_in_vehicle_seat(iParam0, -1, 0);
		if (!ped::is_ped_injured(iVar1)) {
			if (iVar1 != player::player_ped_id()) {
				fVar0 = entity::get_entity_speed(iParam0);
				if (fVar0 < 8f) {
					fVar0 = 8f;
				}
				if (fVar0 > 62.9f) {
					fVar0 = 62.9f;
				}
				ai::task_vehicle_mission(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, 1);
				ped::set_ped_flee_attributes(iVar1, 8192, 1);
				if (bLocal_108) {
					ped::set_ped_flee_attributes(iVar1, 65536, 1);
					ped::set_ped_flee_attributes(iVar1, 2, 0);
				}
				ped::set_ped_combat_attributes(iVar1, 6, 0);
			}
		}
	}
}

// Position - 0xFCCC
void func_179() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15) {
		if (entity::does_entity_exist(iLocal_3105[iVar0])) {
			if (!entity::is_entity_dead(iLocal_3105[iVar0], 0)) {
				entity::set_entity_collision(iLocal_3105[iVar0], 1, 0);
			}
			func_177(iLocal_3105[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15) {
		if (iLocal_2861[iVar0] != 0) {
			streaming::set_model_as_no_longer_needed(iLocal_2861[iVar0]);
		}
		iVar0++;
	}
	iLocal_1951 = 0;
	iLocal_1948 = 0;
}

// Position - 0xFD50
void func_180() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 175) {
		if (entity::does_entity_exist(iLocal_2916[iVar0])) {
			if (!entity::is_entity_dead(iLocal_2916[iVar0], 0)) {
				entity::set_entity_collision(iLocal_2916[iVar0], 1, 0);
			}
			if (vehicle::is_vehicle_driveable(iLocal_2916[iVar0], 0)) {
				if (vehicle::is_playback_going_on_for_vehicle(iLocal_2916[iVar0])) {
					vehicle::stop_playback_recorded_vehicle(iLocal_2916[iVar0]);
				}
			}
			func_178(iLocal_2916[iVar0]);
			func_177(iLocal_2916[iVar0]);
		}
		iLocal_1470[iVar0] = 0;
		iLocal_1646[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100) {
			if (iLocal_1294[iVar0] > 0) {
				vehicle::remove_vehicle_recording(iLocal_1294[iVar0], &cLocal_2668);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175) {
		if (iLocal_2685[iVar0] != 0) {
			streaming::set_model_as_no_longer_needed(iLocal_2685[iVar0]);
		}
		iVar0++;
	}
	iLocal_1950 = 0;
	iLocal_1946 = 0;
}

// Position - 0xFE3E
int func_181() { return joaat("s_m_y_cop_01"); }

// Position - 0xFE4B
int func_182() { return joaat("police"); }

// Position - 0xFE58
int func_183() { return joaat("sultan"); }

// Position - 0xFE65
int func_184() {
	if (iLocal_2913 == 0) {
		return joaat("a_m_y_business_01");
	}
	return iLocal_2913;
}

// Position - 0xFE82
void func_185() {
	vehicle::set_all_vehicle_generators_active();
	vehicle::set_number_of_parked_vehicles(-1);
	vehicle::set_garbage_trucks(1);
	vehicle::set_all_low_priority_vehicle_generators_active(1);
	vehicle::set_vehicle_density_multiplier_this_frame(1f);
	streaming::set_vehicle_population_budget(3);
	streaming::set_ped_population_budget(3);
}

// Position - 0xFEAC
void func_186(var *uParam0, int iParam1, int iParam2) {
	char *sVar0;

	if (network::network_is_game_in_progress()) {
		if (gameplay::is_bit_set(Global_2494199.f_4449, 26)) {
			return;
		}
	}
	if (cam::is_gameplay_hint_active()) {
		cam::stop_gameplay_hint(iParam2);
		graphics::_stop_screen_effect("FocusIn");
		audio::stop_audio_scene("HINT_CAM_SCENE");
		if (uParam0->f_11) {
			graphics::_start_screen_effect("FocusOut", 0, 0);
			audio::play_sound_frontend(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	cam::set_cinematic_button_active(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (gameplay::is_string_null(sVar0)) {
		if (!network::network_is_game_in_progress()) {
			sVar0 = "CMN_HINT";
		}
		else {
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!gameplay::is_string_null(uParam0->f_3)) {
		if (func_187(uParam0->f_3)) {
			ui::clear_help(1);
		}
	}
	if (!gameplay::is_string_null(sVar0)) {
		if (func_187(sVar0)) {
			ui::clear_help(1);
		}
	}
}

// Position - 0xFF89
bool func_187(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0xFF9C
void func_188() {
	Global_14611 = 0;
	func_189();
}

// Position - 0xFFAC
void func_189() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
	}
}

// Position - 0xFFCD
void func_190() {
	Global_14611 = 0;
	func_191();
}

// Position - 0xFFDD
void func_191() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_mobile_phone_call_ongoing() || Global_14443.f_1 == 9 || Global_14442 == 1) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(1);
		Global_15745 = 6;
		return;
	}
}

// Position - 0x10036
void func_192() {
	if (ui::does_blip_exist(iLocal_3285)) {
		ui::remove_blip(&iLocal_3285);
	}
	if (ui::does_blip_exist(iLocal_3286)) {
		ui::remove_blip(&iLocal_3286);
	}
	if (ui::does_blip_exist(iLocal_3287)) {
		ui::remove_blip(&iLocal_3287);
	}
	if (ui::does_blip_exist(iLocal_3288)) {
		ui::remove_blip(&iLocal_3288);
	}
}

// Position - 0x10082
void func_193() {
	if (iLocal_3570 == 0) {
		if (entity::does_entity_exist(iLocal_3228)) {
			if (!ped::is_ped_injured(iLocal_3228)) {
				if (entity::has_entity_been_damaged_by_entity(iLocal_3228, player::player_ped_id(), 0)) {
					iLocal_3570 = 1;
				}
			}
		}
	}
	if (iLocal_3570 == 0) {
		if (iLocal_3534 == 0) {
			if (entity::does_entity_exist(iLocal_3228)) {
				if (!ped::is_ped_injured(iLocal_3228)) {
					if (entity::does_entity_exist(iLocal_3222)) {
						if (!ped::is_ped_injured(iLocal_3222)) {
							if (ai::is_waypoint_playback_going_on_for_ped(iLocal_3222)) {
								if (ai::get_ped_waypoint_progress(iLocal_3222) > 18) {
									if (entity::does_entity_exist(iLocal_3284)) {
										if (entity::is_entity_attached(iLocal_3284)) {
											entity::detach_entity(iLocal_3284, 1, 1);
										}
									}
									iLocal_3210 = ped::create_synchronized_scene(-932.847f, -2978.498f, 13.946f, 0f, 0f,
																				 16.56f, 2);
									ai::task_synchronized_scene(iLocal_3228, iLocal_3210, "misssolomon_3", "_action",
																1000f, -1000f, 4, 0, 1148846080, 0);
									ai::task_look_at_entity(iLocal_3228, player::player_ped_id(), 9000, 1024, 3);
									iLocal_3534 = 1;
									iLocal_3535 = 0;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3534 == 1 && iLocal_3536 == 0) {
			if (entity::does_entity_exist(iLocal_3228)) {
				if (!ped::is_ped_injured(iLocal_3228)) {
					if (ped::is_synchronized_scene_running(iLocal_3210)) {
						if (!iLocal_3535) {
							if (ped::get_synchronized_scene_phase(iLocal_3210) > 0.25f) {
								func_17(&uLocal_3578, 4, iLocal_3228, "HangerWorker", 0, 1);
								func_194(iLocal_3228, "T1M4_BCAA", "HangerWorker", 11);
								iLocal_3535 = 1;
							}
						}
						if (ped::get_synchronized_scene_phase(iLocal_3210) > 0.99f) {
							iLocal_3210 =
								ped::create_synchronized_scene(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
							ai::task_synchronized_scene(iLocal_3228, iLocal_3210, "misssolomon_3", "_react_to_death",
														1000f, -1.5f, 3, 16, 1148846080, 0);
							iLocal_3536 = 1;
						}
					}
				}
			}
		}
		if (iLocal_3536 == 1 && iLocal_3539 == 0) {
			if (entity::does_entity_exist(iLocal_3228)) {
				if (!ped::is_ped_injured(iLocal_3228)) {
					if (ped::is_synchronized_scene_running(iLocal_3210)) {
						if (entity::has_anim_event_fired(iLocal_3228, gameplay::get_hash_key("ENDS_IN_RUN"))) {
							ai::open_sequence_task(&iLocal_3292);
							ai::task_force_motion_state(0, -1115154469, 0);
							ai::task_go_straight_to_coord(0, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
							ai::task_smart_flee_ped(0, player::player_ped_id(), 200f, -1, 0, 0);
							ai::close_sequence_task(iLocal_3292);
							ai::task_perform_sequence(iLocal_3228, iLocal_3292);
							ai::clear_sequence_task(&iLocal_3292);
							ped::force_ped_motion_state(iLocal_3228, -1115154469, 0, 0, 0);
							iLocal_3539 = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_3539 == 0) {
		if (entity::does_entity_exist(iLocal_3228)) {
			if (!ped::is_ped_injured(iLocal_3228)) {
				ai::open_sequence_task(&iLocal_3292);
				ai::task_go_straight_to_coord(0, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
				ai::task_smart_flee_ped(0, player::player_ped_id(), 200f, -1, 0, 0);
				ai::close_sequence_task(iLocal_3292);
				ai::task_perform_sequence(iLocal_3228, iLocal_3292);
				ai::clear_sequence_task(&iLocal_3292);
				iLocal_3539 = 1;
			}
		}
	}
}

// Position - 0x10362
void func_194(int iParam0, char *sParam1, char *sParam2, int iParam3) {
	audio::_play_ambient_speech_with_voice(iParam0, sParam1, sParam2, func_15(iParam3), 0);
}

// Position - 0x1037B
void func_195() {
	if (iLocal_3181 == 0) {
		iLocal_3183 = 0;
		iLocal_3211 = audio::get_sound_id();
		cutscene::request_cutscene("TRV_4_MCS_2", 8);
		streaming::request_model(joaat("prop_jet_bloodsplat_01"));
		if (ai::get_is_waypoint_recording_loaded("Trev4_5")) {
			ai::use_waypoint_recording_as_assisted_movement_route("Trev4_5", 0, 0.5f, 1f);
		}
		if (!cam::is_screen_faded_in()) {
			cam::do_screen_fade_in(800);
		}
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1) {
		switch (iLocal_3183) {
		case 0:
			while (!cutscene::has_cutscene_loaded()) {
				system::wait(0);
			}
			player::set_player_control(player::player_id(), 0, 0);
			if (!ped::is_ped_injured(iLocal_3222)) {
				cutscene::register_entity_for_cutscene(iLocal_3222, "Molly", 1, joaat("ig_molly"), 0);
			}
			if (!ped::is_ped_injured(iLocal_3228)) {
				cutscene::register_entity_for_cutscene(iLocal_3228, "Airworker_Tackle_trevor", 0,
													   joaat("s_m_y_airworker"), 0);
			}
			if (vehicle::is_vehicle_driveable(iLocal_3266, 0)) {
				cutscene::register_entity_for_cutscene(iLocal_3266, "JET_TRV4", 0, joaat("jet"), 0);
			}
			func_196(1, 1, 1, 0);
			audio::trigger_music_event("TRV4_SUCK_CS");
			cutscene::start_cutscene(0);
			iLocal_3183++;
			break;

		case 1:
			func_110();
			if (cutscene::can_set_exit_state_for_registered_entity("JET_TRV4", joaat("jet"))) {
				if (vehicle::is_vehicle_driveable(iLocal_3266, 0)) {
					if (!entity::is_entity_dead(iLocal_3266, 0)) {
						entity::freeze_entity_position(iLocal_3266, 1);
					}
				}
			}
			if (cutscene::can_set_exit_state_for_registered_entity("Airworker_Tackle_trevor",
																   joaat("s_m_y_airworker"))) {
				if (!ped::is_ped_injured(iLocal_3228)) {
					ped::set_blocking_of_non_temporary_events(iLocal_3228, 1);
					ai::task_smart_flee_ped(iLocal_3228, player::player_ped_id(), 150f, -1, 0, 0);
					entity::set_entity_invincible(iLocal_3228, 0);
					ped::set_ped_can_be_targetted(iLocal_3228, 1);
					entity::set_entity_proofs(iLocal_3228, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
			if (cutscene::can_set_exit_state_for_registered_entity("Michael", 0)) {
				func_110();
				func_108(1);
			}
			if (!cutscene::is_cutscene_active()) {
				iLocal_3338 = 1;
				if (!entity::does_entity_exist(iLocal_3282)) {
					if (streaming::has_model_loaded(joaat("prop_jet_bloodsplat_01"))) {
						iLocal_3282 = object::create_object(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f,
															12.9264f, 1, 1, 0);
						entity::set_entity_rotation(iLocal_3282, 0f, 0f, -121.5948f, 2, 1);
						entity::set_entity_quaternion(iLocal_3282, 0f, 0f, 0.8729f, -0.4879f);
						streaming::set_model_as_no_longer_needed(joaat("prop_jet_bloodsplat_01"));
					}
				}
				cutscene::_0xC61B86C9F61EB404(0);
				func_196(0, 1, 1, 0);
				player::set_player_control(player::player_id(), 1, 0);
				if (!weapon::has_ped_got_weapon(player::player_ped_id(), 0, 2)) {
					weapon::give_weapon_to_ped(player::player_ped_id(), joaat("weapon_smg"), 150, 1, 1);
				}
				iLocal_3181 = 2;
			}
			break;
		}
	}
	if (iLocal_3181 == 2) {
		iLocal_3181 = 0;
		iLocal_3180 = 8;
	}
}

// Position - 0x105D7
void func_196(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0) {
		player::special_ability_deactivate_fast(player::player_id());
		player::set_all_random_peds_flee(player::player_id(), 1);
		player::set_police_ignore_player(player::player_id(), 1);
		func_204(1);
		ui::_0xA8FDB297A8D25FBA();
		ui::_0xFDB423997FA30340();
		if (Global_14443.f_1 > 3) {
			if (audio::is_mobile_phone_call_ongoing()) {
				audio::stop_scripted_conversation(0);
			}
			if (!func_203()) {
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_202(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		G_DisableMessagesAndCalls1 = 1;
	}
	else {
		func_204(0);
		ui::_0xE1CD1E48E025E661();
		Global_55828 = 0;
		if (iParam1) {
			graphics::_0x03FC694AE06C5A20();
		}
		player::set_all_random_peds_flee(player::player_id(), 0);
		player::set_police_ignore_player(player::player_id(), 0);
		func_202(0, iParam3, iParam2, 0);
		if (network::network_is_game_in_progress()) {
			if (!ped::is_ped_injured(player::player_ped_id()) && !func_200(player::player_id()) &&
				!func_198(player::player_id(), 0) && !func_197()) {
				entity::set_entity_invincible(player::player_ped_id(), 0);
			}
		}
		else if (!ped::is_ped_injured(player::player_ped_id()) && !func_200(player::player_id())) {
			entity::set_entity_invincible(player::player_ped_id(), 0);
		}
		G_DisableMessagesAndCalls1 = 0;
	}
}

// Position - 0x106F0
bool func_197() { return gameplay::is_bit_set(Global_1591201[player::player_id() /*602*/].f_39.f_18, 14); }

// Position - 0x1070D
bool func_198(int iParam0, int iParam1) {
	bool bVar0;

	if (iParam0 == player::player_id()) {
		bVar0 = func_199(-1, 0) == 8;
	}
	else {
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1) {
		if (network::network_is_player_active(iParam0)) {
			bVar0 = player::get_player_team(iParam0) == 8;
		}
	}
	return bVar0;
}

// Position - 0x10758
int func_199(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1) {
		iVar1 = func_51();
	}
	if (Global_1315213[iVar1] == 1) {
		if (iParam1) {
		}
		iVar0 = 8;
	}
	else {
		iVar0 = Global_1312729[iVar1];
		if (iParam1) {
		}
	}
	return iVar0;
}

// Position - 0x10799
int func_200(int iParam0) {
	if (func_198(iParam0, 0)) {
		return 1;
	}
	if (func_201()) {
		if (iParam0 == player::player_id()) {
			return 1;
		}
	}
	if (gameplay::is_bit_set(Global_2421664[iParam0 /*358*/].f_198, 2)) {
		return 1;
	}
	return 0;
}

// Position - 0x107DB
bool func_201() { return gameplay::is_bit_set(Global_2359301, 3); }

// Position - 0x107EC
int func_202(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	iVar0 = 0;
	if (gameplay::is_pc_version()) {
		if (cutscene::_0xA0FE76168A189DDB() != iParam0 && iParam2) {
			cutscene::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

// Position - 0x1081F
bool func_203() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return true;
	}
	return false;
}

// Position - 0x10846
void func_204(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&G_SleepModeOnOn25, 13);
	}
	else {
		gameplay::clear_bit(&G_SleepModeOnOn25, 13);
	}
}

// Position - 0x10869
void func_205() {
	if (iLocal_3511 == 0) {
		if (entity::is_entity_in_angled_area(player::player_ped_id(), -926.0258f, -2958.615f, 12.46467f, -930.6525f,
											 -2956.061f, 16.45945f, 2.75f, 0, 1, 0)) {
			iLocal_3511 = 1;
		}
	}
	else if (iLocal_3515 == 0) {
		controls::disable_control_action(0, 22, 1);
		controls::disable_control_action(0, 25, 1);
		if (entity::is_entity_in_angled_area(player::player_ped_id(), -938.5178f, -2972.022f, 12.46715f, -934.1034f,
											 -2974.613f, 15.96715f, 5.25f, 0, 1, 0)) {
			ped::set_ped_max_move_blend_ratio(player::player_ped_id(), 0f);
		}
		else {
			if (fLocal_3326 < 1f) {
				fLocal_3326 = 1f;
			}
			fLocal_3326 *= 0.975f;
			ped::set_ped_max_move_blend_ratio(player::player_ped_id(), fLocal_3326);
		}
	}
	if (iLocal_3181 > 0) {
		func_193();
	}
	if (iLocal_3181 == 0) {
		iLocal_3339 = 0;
		iLocal_3340 = 0;
		iLocal_3341 = 0;
		iLocal_3342 = 0;
		iLocal_3344 = 0;
		iLocal_3360 = 0;
		iLocal_3471 = 0;
		iLocal_3472 = 0;
		iLocal_3473 = 0;
		iLocal_3479 = 0;
		iLocal_3512 = 0;
		iLocal_3513 = 0;
		iLocal_3514 = 0;
		iLocal_3515 = 0;
		iLocal_3516[0] = 0;
		iLocal_3520[0] = 0;
		iLocal_3516[1] = 0;
		iLocal_3520[1] = 0;
		iLocal_3516[2] = 0;
		iLocal_3534 = 0;
		iLocal_3536 = 0;
		iLocal_3537 = 0;
		iLocal_3538 = 0;
		iLocal_3539 = 0;
		iLocal_3542 = 0;
		iLocal_3568 = 0;
		iLocal_3570 = 0;
		iLocal_3571[3] = 0;
		streaming::request_model(joaat("prop_jet_bloodsplat_01"));
		interior::_0xAF348AFCB575A441("V_60_HangerRm");
		player::set_max_wanted_level(5);
		player::set_player_wanted_level(player::player_id(), 3, 0);
		player::set_player_wanted_level_now(player::player_id(), 0);
		if (entity::does_entity_exist(iLocal_3222)) {
			if (!ped::is_ped_injured(iLocal_3222)) {
				if (ai::is_waypoint_playback_going_on_for_ped(iLocal_3222)) {
					ai::waypoint_playback_override_speed(iLocal_3222, 3f, 1);
				}
			}
		}
		if (!cam::is_screen_faded_in()) {
			cam::do_screen_fade_in(800);
		}
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1) {
		if (iLocal_3479 == 0) {
			if (audio::request_script_audio_bank("Trv_4_747", 0, -1)) {
				iLocal_3479 = 1;
			}
		}
		if (iLocal_3471 == 0) {
			if (entity::does_entity_exist(iLocal_3222)) {
				if (!ped::is_ped_injured(iLocal_3222)) {
					if (ai::is_waypoint_playback_going_on_for_ped(iLocal_3222)) {
						if (ai::get_ped_waypoint_progress(iLocal_3222) > 20) {
							if (entity::does_entity_exist(iLocal_3266)) {
								if (vehicle::is_vehicle_driveable(iLocal_3266, 0)) {
									func_210(&iLocal_3266);
									audio::play_sound_from_coord(iLocal_3211, "Trevor_4_747_Jet_Engine", -937.77f,
																 -2981.36f, 15.44f, 0, 0, 0, 0);
									vehicle::set_vehicle_engine_on(iLocal_3266, 1, 0, 0);
									iLocal_3471 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3512 == 0) {
			if (entity::does_entity_exist(iLocal_3222)) {
				if (!ped::is_ped_injured(iLocal_3222)) {
					if (ai::is_waypoint_playback_going_on_for_ped(iLocal_3222)) {
						if (ai::get_ped_waypoint_progress(iLocal_3222) > 23) {
							ai::clear_ped_tasks(iLocal_3222);
							if (entity::does_entity_exist(iLocal_3266)) {
								if (vehicle::is_vehicle_driveable(iLocal_3266, 0)) {
									if (!audio::is_audio_scene_active("SOL_3_ENGINE_DEATH_SCENE")) {
										audio::start_audio_scene("SOL_3_ENGINE_DEATH_SCENE");
									}
									iLocal_3209 = ped::create_synchronized_scene(0f, 0f, 0f, 0f, 0f, 0f, 2);
									ped::attach_synchronized_scene_to_entity(
										iLocal_3209, iLocal_3266,
										entity::get_entity_bone_index_by_name(iLocal_3266, "chassis_Control"));
									ai::task_synchronized_scene(iLocal_3222, iLocal_3209, "MISSSOLOMON_3",
																"molly_death", 1.5f, -8f, 4, 0, 1148846080, 0);
									ped::_set_synchronized_scene_occlusion_portal(iLocal_3209, 1);
									iLocal_3512 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3513 == 0) {
			if (entity::does_entity_exist(iLocal_3222)) {
				if (!ped::is_ped_injured(iLocal_3222)) {
					if (iLocal_3512 == 1) {
						vLocal_3318 = {entity::get_entity_coords(player::player_ped_id(), 1)};
						if (vLocal_3318.y < -2965f) {
							cam::set_gameplay_entity_hint(iLocal_3222, 0f, 0f, 0f, 1, 6000, 1000, 2000, 0);
							player::set_player_control(player::player_id(), 0, 0);
							ai::task_turn_ped_to_face_entity(player::player_ped_id(), iLocal_3222, 0);
							ai::task_look_at_entity(player::player_ped_id(), iLocal_3222, 4000, 48, 4);
							iLocal_3513 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_3514 == 0) {
			if (!entity::does_entity_exist(iLocal_3222)) {
				cam::stop_gameplay_hint(0);
				player::set_player_control(player::player_id(), 1, 0);
				if (entity::does_entity_exist(uLocal_3233[0])) {
					if (!ped::is_ped_injured(uLocal_3233[0])) {
						ai::clear_ped_tasks(uLocal_3233[0]);
						ped::set_blocking_of_non_temporary_events(uLocal_3233[0], 0);
					}
				}
				iLocal_3514 = 1;
			}
		}
		if (iLocal_3473 == 0) {
			if (entity::does_entity_exist(iLocal_3222)) {
				if (!ped::is_ped_injured(iLocal_3222)) {
					if (entity::does_entity_exist(iLocal_3283)) {
						if (entity::is_entity_attached_to_entity(iLocal_3283, iLocal_3222)) {
							if (entity::is_entity_playing_anim(iLocal_3222, "MISSSOLOMON_3", "molly_death", 3)) {
								if (ped::get_synchronized_scene_phase(iLocal_3209) > 0.59f) {
									entity::detach_entity(iLocal_3283, 1, 1);
									if (ui::does_blip_exist(iLocal_3285)) {
										ui::remove_blip(&iLocal_3285);
									}
									if (!ui::does_blip_exist(iLocal_3288)) {
										func_194(iLocal_3222, "HIGH_FALL", "WAVELOAD_PAIN_FEMALE", 11);
										if (audio::is_audio_scene_active("SOL_3_ON_FOOT_CHASE")) {
											audio::stop_audio_scene("SOL_3_ON_FOOT_CHASE");
										}
										if (!audio::is_audio_scene_active("SOL_3_LOSE_COPS")) {
											audio::start_audio_scene("SOL_3_LOSE_COPS");
										}
										system::settimerb(0);
										iLocal_3473 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3515 == 0) {
			if (iLocal_3473 == 1 && system::timerb() > 2500) {
				iLocal_3288 = func_207(iLocal_3283);
				func_20("SOL3_GOD1", 7500, -1);
				system::settimerb(0);
				iLocal_3515 = 1;
			}
		}
		if (iLocal_3571[3] == 0) {
			if (iLocal_3515 == 1 && iLocal_3514 == 1) {
				if (system::timerb() > 2500) {
					unk1::_0x293220DA1B46CEBC(10f, 1073741824, 3);
					iLocal_3571[3] = 1;
				}
			}
		}
		if (iLocal_3472 == 0) {
			if (!ped::is_ped_injured(iLocal_3222)) {
				if (entity::is_entity_playing_anim(iLocal_3222, "MISSSOLOMON_3", "molly_death", 3)) {
					if (ped::get_synchronized_scene_phase(iLocal_3209) > 0.89f) {
						if (entity::does_entity_exist(iLocal_3266)) {
							if (vehicle::is_vehicle_driveable(iLocal_3266, 0)) {
								ped::delete_ped(&iLocal_3222);
								graphics::start_particle_fx_non_looped_on_entity("scr_trev4_747_blood_impact",
																				 iLocal_3266, -12.5793f, 12.2f,
																				 -7.09421f, 0f, 0f, 0f, 1f, 0, 0, 0);
								iLocal_3764 = graphics::start_particle_fx_looped_on_entity(
									"scr_trev4_747_exhaust_plane_misfire", iLocal_3266, -12.6323f, 8.1153f, -7.0876f,
									0f, 0f, 0f, 1f, 0, 0, 0);
								audio::play_sound_from_coord(iLocal_3212, "Trevor_4_747_Man_Sucked_In", -938.6f,
															 -2984.13f, 15.47f, 0, 0, 0, 0);
								iLocal_3192 = gameplay::get_game_timer();
								iLocal_3472 = 1;
							}
						}
					}
				}
			}
		}
		else {
			if (gameplay::get_game_timer() > iLocal_3192 + 574) {
				if (!entity::does_entity_exist(iLocal_3282)) {
					if (streaming::has_model_loaded(joaat("prop_jet_bloodsplat_01"))) {
						iLocal_3282 = object::create_object(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f,
															12.9264f, 1, 1, 0);
						entity::set_entity_rotation(iLocal_3282, 0f, 0f, -121.5948f, 2, 1);
						entity::set_entity_quaternion(iLocal_3282, 0f, 0f, 0.8729f, -0.4879f);
						streaming::set_model_as_no_longer_needed(joaat("prop_jet_bloodsplat_01"));
					}
				}
				if (iLocal_3568 == 0) {
					if (entity::does_entity_exist(iLocal_3266)) {
						if (vehicle::is_vehicle_driveable(iLocal_3266, 0)) {
							graphics::start_particle_fx_non_looped_on_entity("scr_trev4_747_engine_debris", iLocal_3266,
																			 -12.6286f, 6.85353f, -7.13622f, 180f, 0f,
																			 0f, 1f, 0, 0, 0);
							vehicle::set_vehicle_engine_on(iLocal_3266, 0, 0, 0);
							func_206();
							audio::stop_sound(iLocal_3211);
							iLocal_3568 = 1;
						}
					}
				}
			}
			if (iLocal_3516[0] == 0) {
				if (gameplay::get_game_timer() > iLocal_3192 + 300) {
					if (graphics::does_particle_fx_looped_exist(iLocal_3764)) {
						graphics::stop_particle_fx_looped(iLocal_3764, 0);
					}
					iLocal_3516[0] = 1;
				}
			}
			else if (iLocal_3520[0] == 0) {
				if (gameplay::get_game_timer() > iLocal_3192 + 700) {
					if (entity::does_entity_exist(iLocal_3266)) {
						if (vehicle::is_vehicle_driveable(iLocal_3266, 0)) {
							iLocal_3764 = graphics::start_particle_fx_looped_on_entity(
								"scr_trev4_747_exhaust_plane_misfire", iLocal_3266, -12.6323f, 8.1153f, -7.0876f, 0f,
								0f, 0f, 1f, 0, 0, 0);
							iLocal_3520[0] = 1;
						}
					}
				}
			}
			else if (iLocal_3516[1] == 0) {
				if (gameplay::get_game_timer() > iLocal_3192 + 1000) {
					if (graphics::does_particle_fx_looped_exist(iLocal_3764)) {
						graphics::stop_particle_fx_looped(iLocal_3764, 0);
					}
					iLocal_3516[1] = 1;
				}
			}
			else if (iLocal_3520[1] == 0) {
				if (gameplay::get_game_timer() > iLocal_3192 + 1400) {
					if (entity::does_entity_exist(iLocal_3266)) {
						if (vehicle::is_vehicle_driveable(iLocal_3266, 0)) {
							iLocal_3764 = graphics::start_particle_fx_looped_on_entity(
								"scr_trev4_747_exhaust_plane_misfire", iLocal_3266, -12.6323f, 8.1153f, -7.0876f, 0f,
								0f, 0f, 1f, 0, 0, 0);
							iLocal_3763 = graphics::start_particle_fx_looped_on_entity(
								"scr_trev4_747_engine_damage", iLocal_3266, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f,
								1065353216, 0, 0, 0);
							iLocal_3520[1] = 1;
						}
					}
				}
			}
			else if (iLocal_3516[2] == 0) {
				if (gameplay::get_game_timer() > iLocal_3192 + 3500) {
					if (graphics::does_particle_fx_looped_exist(iLocal_3764)) {
						graphics::stop_particle_fx_looped(iLocal_3764, 0);
					}
					if (entity::does_entity_exist(iLocal_3266)) {
						if (vehicle::is_vehicle_driveable(iLocal_3266, 0)) {
							entity::set_entity_proofs(iLocal_3266, 0, 0, 0, 0, 0, 0, 0, 0);
						}
					}
					iLocal_3516[2] = 1;
				}
			}
		}
		if (iLocal_3537 == 0) {
			if (iLocal_3473 == 1) {
				if (iLocal_3538 == 0) {
					if (!entity::is_entity_in_air(iLocal_3283)) {
						iLocal_3202 = gameplay::get_game_timer();
						iLocal_3538 = 1;
					}
				}
				else if (gameplay::get_game_timer() > iLocal_3202 + 2000) {
					entity::freeze_entity_position(iLocal_3283, 1);
					iLocal_3537 = 1;
				}
			}
		}
		if (iLocal_3542 == 0) {
			if (!entity::does_entity_exist(iLocal_3222)) {
				if (entity::does_entity_exist(iLocal_3266)) {
					entity::freeze_entity_position(iLocal_3266, 0);
					iLocal_3542 = 1;
				}
			}
		}
		if (entity::does_entity_exist(iLocal_3283)) {
			if (ui::does_blip_exist(iLocal_3288)) {
				if (func_16(player::player_ped_id(), iLocal_3283, 1) < 1.5f &&
					!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
					audio::play_sound_frontend(-1, "PICK_UP", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					ui::remove_blip(&iLocal_3288);
					object::delete_object(&iLocal_3283);
					func_110();
					iLocal_3181 = 0;
					iLocal_3180 = 8;
				}
			}
		}
	}
}

// Position - 0x11167
void func_206() {
	if (graphics::does_particle_fx_looped_exist(iLocal_3759)) {
		graphics::stop_particle_fx_looped(iLocal_3759, 0);
	}
	if (graphics::does_particle_fx_looped_exist(iLocal_3760)) {
		graphics::stop_particle_fx_looped(iLocal_3760, 0);
	}
	if (graphics::does_particle_fx_looped_exist(iLocal_3761)) {
		graphics::stop_particle_fx_looped(iLocal_3761, 0);
	}
	if (graphics::does_particle_fx_looped_exist(iLocal_3762)) {
		graphics::stop_particle_fx_looped(iLocal_3762, 0);
	}
}

// Position - 0x111B7
int func_207(int iParam0) { return func_208(iParam0, 1, 0); }

// Position - 0x111C7
int func_208(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	iVar0 = ui::add_blip_for_entity(iParam0);
	if (entity::is_entity_a_vehicle(iParam0)) {
		ui::set_blip_scale(iVar0, func_209(network::network_is_game_in_progress(), 1f, 1f));
		if (!iParam2) {
			ui::set_blip_as_friendly(iVar0, iParam1);
		}
		else {
			ui::set_blip_colour(iVar0, 2);
		}
	}
	else if (entity::is_entity_a_ped(iParam0)) {
		ui::set_blip_scale(iVar0, func_209(network::network_is_game_in_progress(), 0.7f, 0.7f));
		ui::set_blip_as_friendly(iVar0, iParam1);
	}
	else if (entity::is_entity_an_object(iParam0)) {
		ui::set_blip_scale(iVar0, func_209(network::network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

// Position - 0x1126B
var func_209(bool bParam0, float fParam1, float fParam2) {
	if (bParam0) {
		return fParam1;
	}
	return fParam2;
}

// Position - 0x11282
void func_210(int iParam0) {
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;

	if (!entity::is_entity_dead(*iParam0, 0)) {
		vVar0 = {22.6057f, -2.10018f, -6.22841f};
		vVar3 = {12.6349f, 7.89711f, -7.09742f};
		vVar6 = {-22.5879f, -2.2931f, -6.22542f};
		vVar9 = {-12.6675f, 8.15519f, -6.98833f};
		vVar12 = {180f, 0f, 0f};
		iLocal_3759 = graphics::start_particle_fx_looped_on_entity("scr_trev4_747_engine_heathaze", *iParam0, vVar0,
																   vVar12, 1065353216, 0, 0, 0);
		iLocal_3760 = graphics::start_particle_fx_looped_on_entity("scr_trev4_747_engine_heathaze", *iParam0, vVar3,
																   vVar12, 1065353216, 0, 0, 0);
		iLocal_3761 = graphics::start_particle_fx_looped_on_entity("scr_trev4_747_engine_heathaze", *iParam0, vVar6,
																   vVar12, 1065353216, 0, 0, 0);
		iLocal_3762 = graphics::start_particle_fx_looped_on_entity("scr_trev4_747_engine_heathaze", *iParam0, vVar9,
																   vVar12, 1065353216, 0, 0, 0);
	}
}

// Position - 0x11365
void func_211() {
	if (entity::does_entity_exist(iLocal_3222)) {
		if (!ped::is_ped_injured(iLocal_3222)) {
			if (ai::is_waypoint_playback_going_on_for_ped(iLocal_3222)) {
				if (func_16(player::player_ped_id(), iLocal_3222, 1) < 17f) {
					ai::waypoint_playback_override_speed(iLocal_3222, 3f, 1);
				}
				if (func_16(player::player_ped_id(), iLocal_3222, 1) < 22f &&
					func_16(player::player_ped_id(), iLocal_3222, 1) > 17f) {
					ai::waypoint_playback_override_speed(iLocal_3222, 2f, 1);
				}
				if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1),
														  -921.7f, -2946.4f, 13.4f, 1) > 8f &&
					!entity::is_entity_on_screen(iLocal_3222)) {
					if (func_16(player::player_ped_id(), iLocal_3222, 1) > 22f) {
						ai::waypoint_playback_override_speed(iLocal_3222, 1f, 1);
					}
				}
				else if (func_16(player::player_ped_id(), iLocal_3222, 1) > 22f) {
					ai::waypoint_playback_override_speed(iLocal_3222, 2f, 1);
				}
			}
		}
	}
	if (iLocal_3181 > 0) {
		if (iLocal_3511 == 0) {
			if (entity::is_entity_in_angled_area(player::player_ped_id(), -926.0258f, -2958.615f, 12.46467f, -930.6525f,
												 -2956.061f, 16.45945f, 2.75f, 0, 1, 0)) {
				iLocal_3511 = 1;
			}
		}
		else {
			controls::disable_control_action(0, 22, 1);
			controls::disable_control_action(0, 25, 1);
			if (fLocal_3326 < 1f) {
				fLocal_3326 = 1f;
			}
			fLocal_3326 *= 0.98f;
			ped::set_ped_max_move_blend_ratio(player::player_ped_id(), fLocal_3326);
		}
		if (!entity::does_entity_exist(iLocal_3266)) {
			streaming::request_model(joaat("jet"));
			if (streaming::has_model_loaded(joaat("jet"))) {
				iLocal_3266 = vehicle::create_vehicle(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1);
				vehicle::set_vehicle_livery(iLocal_3266, 2);
				vehicle::set_vehicle_is_considered_by_player(iLocal_3266, 0);
				entity::freeze_entity_position(iLocal_3266, 1);
				entity::set_entity_proofs(iLocal_3266, 1, 1, 1, 1, 1, 0, 0, 0);
				streaming::set_model_as_no_longer_needed(joaat("jet"));
				entity::set_entity_lod_dist(iLocal_3266, 500);
			}
		}
		if (!entity::does_entity_exist(iLocal_3228)) {
			streaming::request_model(joaat("s_m_y_airworker"));
			streaming::request_anim_dict("misssolomon_3");
			streaming::request_model(joaat("p_amb_clipboard_01"));
			if (streaming::has_model_loaded(joaat("s_m_y_airworker")) &&
				streaming::has_anim_dict_loaded("misssolomon_3") &&
				streaming::has_model_loaded(joaat("p_amb_clipboard_01"))) {
				iLocal_3228 =
					ped::create_ped(26, joaat("s_m_y_airworker"), -932.1812f, -2967.947f, 12.9451f, 170.7182f, 1, 1);
				entity::set_entity_proofs(iLocal_3228, 0, 0, 0, 0, 0, 0, 0, 0);
				ped::set_ped_can_be_targetted(iLocal_3228, 0);
				ped::set_blocking_of_non_temporary_events(iLocal_3228, 1);
				func_17(&uLocal_3578, 4, iLocal_3228, "HangerWorker", 0, 1);
				iLocal_3284 =
					object::create_object(joaat("p_amb_clipboard_01"), -932.1812f, -2967.947f, 12.9451f, 1, 1, 0);
				entity::attach_entity_to_entity(iLocal_3284, iLocal_3228, ped::get_ped_bone_index(iLocal_3222, 60309),
												0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				iLocal_3210 = ped::create_synchronized_scene(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
				ai::task_synchronized_scene(iLocal_3228, iLocal_3210, "misssolomon_3", "_start_loop", 1000f, -8f, 68, 0,
											1148846080, 0);
				streaming::set_model_as_no_longer_needed(joaat("s_m_y_airworker"));
				streaming::set_model_as_no_longer_needed(joaat("p_amb_clipboard_01"));
			}
		}
		if (!entity::does_entity_exist(uLocal_3233[0])) {
			streaming::request_model(joaat("s_m_y_cop_01"));
			if (streaming::has_model_loaded(joaat("s_m_y_cop_01"))) {
				uLocal_3233[0] =
					ped::create_ped(6, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, 1, 1);
				weapon::give_weapon_to_ped(uLocal_3233[0], joaat("weapon_pistol"), 1000, 1, 1);
				ped::set_ped_accuracy(uLocal_3233[0], 20);
				entity::set_entity_load_collision_flag(uLocal_3233[0], 1);
				ped::set_blocking_of_non_temporary_events(uLocal_3233[0], 1);
				ai::task_aim_gun_at_entity(uLocal_3233[0], player::player_ped_id(), -1, 1);
				func_112(uLocal_3233[0], 0);
			}
		}
		if (!entity::does_entity_exist(iLocal_3267)) {
			streaming::request_model(joaat("shamal"));
			if (streaming::has_model_loaded(joaat("shamal"))) {
				iLocal_3267 =
					vehicle::create_vehicle(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, 1, 1);
				vehicle::set_vehicle_door_open(iLocal_3267, 0, 0, 1);
				vehicle::set_vehicle_on_ground_properly(iLocal_3267, 1084227584);
				streaming::set_model_as_no_longer_needed(joaat("shamal"));
				entity::set_entity_health(iLocal_3267, 2000);
			}
		}
		if (entity::does_entity_exist(iLocal_3267)) {
			if (vehicle::is_vehicle_driveable(iLocal_3267, 0)) {
				if (func_16(player::player_ped_id(), iLocal_3267, 1) > 5f) {
					vehicle::set_vehicle_door_open(iLocal_3267, 0, 0, 0);
				}
			}
		}
	}
	if (iLocal_3181 == 0) {
		func_25(2, "STAGE_ON_FOOT_CHASE", 0, 0, 0, 1);
		if (iLocal_3345 == 1) {
			if (!cam::is_screen_faded_out()) {
				cam::do_screen_fade_out(0);
			}
			func_105();
			func_17(&uLocal_3578, 0, player::player_ped_id(), "MICHAEL", 0, 1);
			iLocal_3345 = 0;
		}
		iLocal_3432 = 0;
		iLocal_3433 = 0;
		iLocal_3511 = 0;
		fLocal_3326 = 3f;
		iLocal_3185 = 0;
		func_165(0, 1);
		vehicle::remove_vehicle_recording(45, "BB_CHASE");
		vehicle::remove_vehicle_recording(35, "BB_CHASE");
		vehicle::remove_vehicle_recording(2, "BB_CHASE");
		vehicle::remove_vehicle_recording(54, "BB_CHASE");
		vehicle::remove_vehicle_recording(1, "BB_CHASE");
		vehicle::remove_vehicle_recording(9, "BB_CHASE");
		vehicle::remove_vehicle_recording(61, "BB_CHASE");
		vehicle::remove_vehicle_recording(63, "BB_CHASE");
		vehicle::remove_vehicle_recording(64, "BB_CHASE");
		graphics::set_scaleform_movie_as_no_longer_needed(&iLocal_3293);
		graphics::set_streamed_texture_dict_as_no_longer_needed("digitalOverlay");
		if (entity::does_entity_exist(iLocal_3258)) {
			audio::_0x18EB48CFC41F2EA0(iLocal_3258, 0);
			entity::set_vehicle_as_no_longer_needed(&iLocal_3258);
		}
		if (entity::does_entity_exist(iLocal_3271)) {
			vehicle::delete_vehicle(&iLocal_3271);
		}
		if (entity::does_entity_exist(uLocal_3254[0])) {
			ped::delete_ped(&uLocal_3254[0]);
		}
		if (entity::does_entity_exist(uLocal_3260[0])) {
			vehicle::delete_vehicle(&uLocal_3260[0]);
		}
		gameplay::set_fake_wanted_level(0);
		audio::set_frontend_radio_active(1);
		if (!ped::is_ped_injured(iLocal_3222)) {
			if (!ui::does_blip_exist(iLocal_3285)) {
				iLocal_3285 = ui::add_blip_for_entity(iLocal_3222);
				ui::set_blip_as_friendly(iLocal_3285, 1);
			}
		}
		audio::set_audio_flag("PoliceScannerDisabled", 1);
		if (iLocal_3365[2] == 1) {
			if (!audio::has_sound_finished(iLocal_3219)) {
				audio::stop_sound(iLocal_3219);
			}
			audio::release_sound_id(iLocal_3219);
			iLocal_3397 = 0;
			iLocal_3365[2] = 0;
		}
		player::set_max_wanted_level(5);
		player::set_player_wanted_level(player::player_id(), 3, 0);
		player::set_player_wanted_level_now(player::player_id(), 0);
		audio::trigger_music_event("TRV4_RUN");
		if (!entity::does_entity_exist(iLocal_3266)) {
			streaming::request_model(joaat("jet"));
		}
		if (!entity::does_entity_exist(iLocal_3228)) {
			streaming::request_model(joaat("s_m_y_airworker"));
		}
		streaming::request_model(joaat("shamal"));
		streaming::request_model(joaat("s_m_y_cop_01"));
		streaming::request_model(joaat("police3"));
		streaming::request_model(joaat("p_amb_clipboard_01"));
		vehicle::request_vehicle_recording(68, "BB_Chase");
		vehicle::request_vehicle_recording(69, "BB_Chase");
		streaming::request_anim_dict("misssolomon_3");
		system::settimera(0);
		if (ai::get_is_waypoint_recording_loaded("Trev4_5")) {
			ai::use_waypoint_recording_as_assisted_movement_route("Trev4_5", 1, 1f, 1f);
		}
		if (cam::is_screen_faded_out()) {
			if (!func_24()) {
				streaming::load_scene(entity::get_entity_coords(player::player_ped_id(), 1));
			}
			func_21(0, -1, 1);
			func_20("TRV4_CHASE1", 7500, 1);
		}
		if (!cam::is_screen_faded_in()) {
			cam::do_screen_fade_in(800);
		}
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1) {
		iLocal_3181 = 2;
	}
	if (iLocal_3181 == 2) {
		if (entity::is_entity_at_coord(player::player_ped_id(), -880.365f, -2942.26f, 14f, 9.55f, 15.69f, 5f, 0, 1,
									   0)) {
			func_212("TRV4_FAIL1");
		}
		if (entity::is_entity_at_coord(player::player_ped_id(), -945.725f, -2893.15f, 14f, 4.5f, 9.56f, 5f, 0, 1, 0)) {
			func_212("TRV4_FAIL1");
		}
		if (system::timera() > 15000) {
			func_212("TRV4_FAIL1");
		}
		if (entity::is_entity_at_coord(player::player_ped_id(), -932.1196f, -2934.317f, 12.9448f, 2f, 2f, 2f, 0, 1,
									   0)) {
			if (!ped::is_ped_injured(iLocal_3222)) {
				if (!ai::is_waypoint_playback_going_on_for_ped(iLocal_3222)) {
					ai::task_follow_waypoint_recording(iLocal_3222, "BB_MOLLY_2", 10, 4, -1);
					ai::task_play_anim(iLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
				}
			}
			system::settimera(0);
			iLocal_3181 = 3;
		}
	}
	if (iLocal_3181 == 3) {
		if (!ped::is_ped_injured(iLocal_3222)) {
			if (ai::is_waypoint_playback_going_on_for_ped(iLocal_3222)) {
				if (ai::get_ped_waypoint_progress(iLocal_3222) > 18 && iLocal_3437 == 0) {
					iLocal_3352 = 0;
					ai::waypoint_playback_override_speed(iLocal_3222, 3f, 1);
					iLocal_3181 = 0;
					iLocal_3180 = 6;
				}
			}
		}
		if (system::timera() > 50000) {
			if (!ped::is_ped_injured(iLocal_3222)) {
				ai::clear_ped_tasks_immediately(iLocal_3222);
				entity::set_entity_coords(iLocal_3222, -932.5f, -2964.1f, 13.4f, 1, 0, 0, 1);
				ai::task_follow_waypoint_recording(iLocal_3222, "BB_MOLLY_2", 18, 4, -1);
				ai::task_play_anim(iLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
				iLocal_3352 = 0;
				iLocal_3181 = 0;
				iLocal_3180 = 6;
			}
		}
	}
}

// Position - 0x11BBE
void func_212(char *sParam0) {
	if (iLocal_3437 == 0) {
		if (iLocal_3336) {
			func_202(0, 1, 1, 0);
			cam::set_cam_active(iLocal_3289, 0);
			cam::render_script_cams(0, 0, 3000, 1, 0, 0);
			ui::display_radar(1);
			if (audio::is_audio_scene_active("SOL_3_CHOPPER_CAM")) {
				audio::stop_audio_scene("SOL_3_CHOPPER_CAM");
			}
			audio::stop_sound(iLocal_3219);
			func_222();
			audio::set_frontend_radio_active(1);
			iLocal_3365[2] = 0;
			iLocal_3336 = 0;
		}
		audio::trigger_music_event("TRV4_FAIL");
		sLocal_3577 = sParam0;
		ui::clear_prints();
		func_190();
		func_188();
		func_213(sLocal_3577);
		iLocal_3437 = 1;
	}
}

// Position - 0x11C47
void func_213(char *sParam0) {
	func_221(sParam0);
	func_214(0);
}

// Position - 0x11C5A
void func_214(int iParam0) {
	int iVar0;

	if (Global_101700.f_8044 || func_396(0)) {
		iVar0 = func_8();
		if (!func_215(iVar0)) {
			return;
		}
		gameplay::set_bit(&Global_82576[iVar0 /*5*/].f_1, 5);
		Global_91527 = iParam0;
	}
}

// Position - 0x11C9F
int func_215(int iParam0) {
	int iVar0;
	int iVar1;

	func_220();
	if (player::is_player_playing(player::player_id())) {
		player::start_firing_amnesty(5000);
	}
	iVar0 = Global_82576[iParam0 /*5*/];
	iVar1 = G_TextMessageConfig.f_109[iVar0 /*4*/];
	func_219(iVar1, 1);
	player::_0xC9A763D8FE87436A(player::player_id());
	player::special_ability_deactivate(player::player_id());
	func_216(&Global_101700.f_2095.f_539, iVar1);
	if (Global_85999 == Global_91528) {
		Global_101700.f_8044.f_330[iVar1 /*6*/].f_1++;
	}
	if (!gameplay::is_bit_set(Global_82612[iVar1 /*34*/].f_15, 1)) {
		if (!player::is_player_playing(player::player_id())) {
			gameplay::set_fade_in_after_death_arrest(0);
		}
	}
	Global_101700.f_8044.f_330[iVar1 /*6*/].f_2++;
	Global_85999 = Global_91528;
	if (iParam0 == -1) {
		if (Global_101700.f_8044) {
		}
		return 0;
	}
	if (gameplay::is_bit_set(Global_82576[iParam0 /*5*/].f_1, 4)) {
		return 0;
	}
	if (gameplay::is_bit_set(Global_82576[iParam0 /*5*/].f_1, 5)) {
		return 0;
	}
	return 1;
}

// Position - 0x11DB6
void func_216(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float *fVar5;

	if (iParam1 == 94) {
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3) {
		iVar1 = Global_101700.f_17492[iVar0];
		if (iVar1 == 8 || iVar1 == 9 || iVar1 == 10 || iVar1 == 11 || iVar1 == 34 || iVar1 == 72 || iVar1 == 73)
			&&!gameplay::is_bit_set(Global_101700.f_8044.f_99.f_219[0], 9) {}
		else {
			vVar2 = {0f, 0f, 0f};
			fVar5 = 0f;
			if (!func_218(Global_101700.f_17492[iVar0], &vVar2, &fVar5)) {
				Global_101700.f_17492[iVar0] = 318;
				func_217(&uParam0->f_1524[iVar0]);
				uParam0->f_1528[iVar0 /*3*/] = {0f, 0f, 0f};
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = {0f, 0f, 0f};
				uParam0->f_1556[iVar0] = 0;
				Global_89214[iVar0 /*29*/] = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_9 = 0f;
				Global_89214[iVar0 /*29*/].f_12 = 0f;
				Global_89214[iVar0 /*29*/].f_3 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_10 = 0f;
				Global_89214[iVar0 /*29*/].f_13 = 0f;
				Global_89214[iVar0 /*29*/].f_6 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_11 = 0f;
				Global_89214[iVar0 /*29*/].f_14 = 0f;
				Global_89214[iVar0 /*29*/].f_17 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_26 = 0f;
				Global_89214[iVar0 /*29*/].f_20 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_27 = 0f;
				Global_89214[iVar0 /*29*/].f_23 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

// Position - 0x11F7F
void func_217(int *iParam0) { *iParam0 = -15; }

// Position - 0x11F8D
int func_218(int iParam0, var *uParam1, float *fParam2) {
	switch (iParam0) {
	case 11:
		*uParam1 = {115.1569f, -1286.684f, 28.2613f};
		*fParam2 = 111f;
		return 1;

	case 8:
		*uParam1 = {-90.0089f, -1324.195f, 28.3203f};
		*fParam2 = 194.1887f;
		return 1;

	case 9: return func_218(8, uParam1, fParam2);

	case 10: return func_218(8, uParam1, fParam2);

	case 13:
		*uParam1 = {-807.2979f, -48.4004f, 36.8173f};
		*fParam2 = 201.6328f;
		return 1;

	case 14:
		*uParam1 = {1432.34f, -1887.383f, 70.5768f};
		*fParam2 = 350.0509f;
		return 1;

	case 15:
		*uParam1 = {1666.204f, 1967.25f, 143.3213f};
		*fParam2 = 0.7896f;
		return 1;

	case 12:
		*uParam1 = {-1440.22f, -127.02f, 50f};
		*fParam2 = 42f;
		return 1;

	case 16:
		*uParam1 = {135.055f, -1759.64f, 27.8957f};
		*fParam2 = -129f;
		return 1;

	case 17:
		*uParam1 = {687.6992f, -1744.03f, 28.3624f};
		*fParam2 = 267.1409f;
		return 1;

	case 18:
		*uParam1 = {56.5117f, -744.6122f, 43.1356f};
		*fParam2 = 340.0526f;
		return 1;

	case 19:
		*uParam1 = {506.485f, -1884.967f, 24.764f};
		*fParam2 = 22.9566f;
		return 1;

	case 20:
		*uParam1 = {1555.958f, 953.6136f, 77.2063f};
		*fParam2 = 152.8118f;
		return 1;

	case 21:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 22:
		*uParam1 = {220.72f, -64.4177f, 68.2922f};
		*fParam2 = 250.4535f - 360f;
		return 1;

	case 74:
		*uParam1 = {2048.07f, 3840.84f, 34.2238f};
		*fParam2 = 119.603f;
		return 1;

	case 23:
		*uParam1 = {-464.22f, -1592.98f, 38.73f};
		*fParam2 = 168f;
		return 1;

	case 24:
		*uParam1 = {744.79f + 0.0186f, -465.86f - 0.0114f, 36.6399f};
		*fParam2 = 51.7279f;
		return 1;

	case 67:
		*uParam1 = {-9f, 508.1f, 173.6278f};
		*fParam2 = 151.2504f;
		return 1;

	case 25:
		*uParam1 = {72.2278f, -1464.68f, 28.2915f};
		*fParam2 = 156.8827f;
		return 1;

	case 27:
		*uParam1 = {763f, -906f, 24.2312f};
		*fParam2 = 7.2736f;
		return 1;

	case 26:
		*uParam1 = {257.9167f, -1120.786f, 28.3684f};
		*fParam2 = 97.2736f;
		return 1;

	case 28:
		*uParam1 = {422.5858f, -978.6332f, 69.7073f};
		*fParam2 = 4f;
		return 1;

	case 29:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 30:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 31:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 32:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 33:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 34:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 35:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 36:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 37:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 58:
		*uParam1 = {294.8521f, 882.9366f, 197.8527f};
		*fParam2 = 162.693f;
		return 1;

	case 59:
		*uParam1 = {-1771.802f, 794.4316f, 138.4211f};
		*fParam2 = 128.9946f;
		return 1;

	case 60:
		*uParam1 = {1495.595f, -1848.821f, 70.2075f};
		*fParam2 = 32.2721f;
		return 1;

	case 38:
		*uParam1 = {2897.554f, 4032.241f, 50.1419f};
		*fParam2 = 192.8091f;
		return 1;

	case 39:
		*uParam1 = {1973.355f, 3818.204f, 32.005f};
		*fParam2 = 32f;
		return 1;

	case 40:
		*uParam1 = {1973.355f, 3818.204f, 32.005f};
		*fParam2 = 32f;
		return 1;

	case 41:
		*uParam1 = {1397f, 3725.8f, 33.0673f};
		*fParam2 = -3.7534f;
		return 1;

	case 42:
		*uParam1 = {Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f)};
		*fParam2 = 90f;
		return 1;

	case 43:
		*uParam1 = {709.0244f, -2916.479f, 5.0589f};
		*fParam2 = 355.326f;
		return 1;

	case 44:
		*uParam1 = {643.5248f, -2917.325f, 5.1337f};
		*fParam2 = 334.1068f;
		return 1;

	case 45:
		*uParam1 = {595.2742f, -2819.183f, 5.0559f};
		*fParam2 = 46.8853f;
		return 1;

	case 46:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 47:
		*uParam1 = {314.4171f, 965.207f, 208.4024f};
		*fParam2 = 165.9421f;
		return 1;

	case 49:
		*uParam1 = {3321.537f, 4975.455f, 25.9097f};
		*fParam2 = 221.228f;
		return 1;

	case 48:
		*uParam1 = {-111.1318f, 6316.479f, 30.4904f};
		*fParam2 = 42f + 180f;
		return 1;

	case 50:
		*uParam1 = {-731.3261f, 106.68f, 54.7169f};
		*fParam2 = 98.9764f;
		return 1;

	case 51:
		*uParam1 = {-1257.5f, -526.9999f, 30.2361f};
		*fParam2 = 220.9554f;
		return 1;

	case 52:
		*uParam1 = {736.9869f, -2050.678f, 28.2718f};
		*fParam2 = 83.9922f;
		return 1;

	case 66:
		*uParam1 = {262.5499f, -2540.15f, 4.8433f};
		*fParam2 = -64.1366f;
		return 1;

	case 53:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 55:
		*uParam1 = {-315.7789f, 6201.355f, 30.4322f};
		*fParam2 = 127.7547f;
		return 1;

	case 56:
		*uParam1 = {118.0988f, -1264.916f, 32.3637f};
		*fParam2 = -63f;
		return 1;

	case 57:
		*uParam1 = {37.5988f, -1351.52f, 28.2954f};
		*fParam2 = 90.0339f;
		return 1;

	case 61:
		*uParam1 = {-558.2693f, 261.1167f, 82.07f};
		*fParam2 = 84.6231f;
		return 1;

	case 62:
		*uParam1 = {-196.9999f, 507.9999f, 132.477f};
		*fParam2 = 99.6049f;
		return 1;

	case 63:
		*uParam1 = {1312.01f, -1645.87f, 51.2f};
		*fParam2 = 120f;
		return 1;

	case 68:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 69:
		*uParam1 = {-818.7374f, 6.4824f, 41.2432f};
		*fParam2 = 211.8223f;
		return 1;

	case 64:
		*uParam1 = {2091.258f, 4714.852f, 40.1936f};
		*fParam2 = 136.0867f;
		return 1;

	case 54:
		*uParam1 = {1762.59f, 3247.212f, 40.735f};
		*fParam2 = 27.0648f;
		return 1;

	case 65:
		*uParam1 = {1764.013f, 3252.902f, 40.735f};
		*fParam2 = 27.0648f;
		return 1;

	case 70:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 71:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 72:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 73:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	default: break;
	}
	return 0;
}

// Position - 0x128FC
void func_219(int iParam0, int iParam1) {
	if (iParam1) {
		if (iParam0 != 88 && iParam0 != 89 && iParam0 != 92) {
			Global_85809[iParam0 /*2*/] = 1;
		}
	}
	else {
		Global_85809[iParam0 /*2*/] = 0;
	}
}

// Position - 0x1293A
void func_220() {
	Global_91526 = 1;
	if (player::is_player_being_arrested(player::player_id(), 1)) {
		if (gameplay::is_string_null_or_empty(&Global_69934)) {
			switch (func_92()) {
			case 0: StringCopy(&Global_69934, "CMN_MARRE", 16); break;

			case 1: StringCopy(&Global_69934, "CMN_FARRE", 16); break;

			case 2: StringCopy(&Global_69934, "CMN_TARRE", 16); break;
			}
			StringCopy(&Global_69938, "", 16);
		}
		Global_91526 = 0;
	}
	else if (!player::is_player_playing(player::player_id())) {
		if (gameplay::is_string_null_or_empty(&Global_69934)) {
			switch (func_92()) {
			case 0: StringCopy(&Global_69934, "CMN_MDIED", 16); break;

			case 1: StringCopy(&Global_69934, "CMN_FDIED", 16); break;

			case 2: StringCopy(&Global_69934, "CMN_TDIED", 16); break;
			}
			StringCopy(&Global_69938, "", 16);
		}
		Global_91526 = 0;
		gameplay::set_bit(&Global_91491.f_20, 25);
	}
}

// Position - 0x12A29
void func_221(char *sParam0) {
	if (!gameplay::is_string_null_or_empty(sParam0)) {
		if (ui::get_length_of_literal_string(sParam0) <= 16) {
			StringCopy(&Global_69934, sParam0, 16);
			StringCopy(&Global_69938, "", 16);
			if (unk1::_is_recording()) {
				unk1::_stop_recording_and_save_clip();
			}
		}
	}
}

// Position - 0x12A69
void func_222() { Global_55829 = 0; }

// Position - 0x12A75
void func_223() {
	if (!entity::does_entity_exist(iLocal_3266)) {
		if (entity::does_entity_exist(iLocal_3258)) {
			if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
				if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
					if (vehicle::get_time_position_in_recording(iLocal_3258) > 30000f) {
						streaming::request_model(joaat("jet"));
						if (streaming::has_model_loaded(joaat("jet"))) {
							iLocal_3266 = vehicle::create_vehicle(joaat("jet"), -952.1345f, -2990.269f, 12.9451f,
																  240.7726f, 1, 1);
							vehicle::set_vehicle_livery(iLocal_3266, 2);
							vehicle::set_vehicle_is_considered_by_player(iLocal_3266, 0);
							entity::freeze_entity_position(iLocal_3266, 1);
							entity::set_entity_proofs(iLocal_3266, 1, 1, 1, 1, 1, 0, 0, 0);
							streaming::set_model_as_no_longer_needed(joaat("jet"));
							entity::set_entity_lod_dist(iLocal_3266, 500);
						}
					}
				}
			}
		}
	}
	func_311();
	if (ui::does_blip_exist(iLocal_3285)) {
		func_310(iLocal_3285, iLocal_3222, 300f, 0.9f, 0);
	}
	if (iLocal_3181 == 0) {
		if (iLocal_3182 < 2) {
			ped::set_ped_can_head_ik(player::player_ped_id(), 0);
		}
		func_309();
		func_277();
		if (iLocal_3402 == 0) {
			if (entity::does_entity_exist(iLocal_3121[20])) {
				if (vehicle::is_vehicle_driveable(iLocal_3121[20], 0)) {
					vehicle::set_vehicle_engine_on(iLocal_3121[20], 1, 1, 0);
					vehicle::set_heli_blades_full_speed(iLocal_3121[20]);
					iLocal_3402 = 1;
				}
			}
		}
		func_276();
		func_275();
		if (iLocal_3349 == 0) {
			if (entity::does_entity_exist(iLocal_3258)) {
				if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
						func_274(iLocal_3289, iLocal_3271, "BB_Chase", 1);
						iLocal_3349 = 1;
					}
				}
			}
		}
		else if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
			if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
				func_273(iLocal_3289, iLocal_3271, fLocal_3323);
				cam::set_cam_fov(iLocal_3289, 45f);
			}
		}
		if (iLocal_3337 == 0) {
			if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
				if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
					if (vehicle::get_time_position_in_recording(iLocal_3258) > 15000f &&
						vehicle::get_time_position_in_recording(iLocal_3258) < 125464f && func_271(1, 0, 0)) {
						iLocal_3352 = 1;
						if (iLocal_3437 == 0) {
							ui::clear_help(1);
							func_270("TRV4_HELP1", -1);
							func_265(1);
							func_186(&uLocal_28, 0, 0);
							cam::set_cinematic_button_active(0);
							iLocal_3337 = 1;
						}
					}
				}
			}
		}
		else if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
			if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
				if (graphics::has_scaleform_movie_loaded(iLocal_3293) && func_162(1, "BB_Chase")) {
					if (vehicle::get_time_position_in_recording(iLocal_3258) > 15000f &&
						vehicle::get_time_position_in_recording(iLocal_3258) < 125464f && iLocal_3437 == 0 &&
						ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						func_243();
					}
					if (vehicle::get_time_position_in_recording(iLocal_3258) > 125464f ||
						!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						if (iLocal_3336) {
							ui::clear_help(1);
							func_202(0, 1, 1, 0);
							cam::set_cam_active(iLocal_3289, 0);
							cam::render_script_cams(0, 0, 3000, 1, 0, 0);
							ui::display_radar(1);
							if (audio::is_audio_scene_active("SOL_3_CHOPPER_CAM")) {
								audio::stop_audio_scene("SOL_3_CHOPPER_CAM");
							}
							audio::stop_sound(iLocal_3219);
							func_222();
							audio::set_frontend_radio_active(1);
							iLocal_3365[2] = 0;
							iLocal_3336 = 0;
						}
					}
				}
			}
		}
		switch (iLocal_3182) {
		case 0:
			if (iLocal_3571[0] == 0) {
				if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
						if (vehicle::get_time_position_in_recording(iLocal_3258) > 44255f &&
							gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1),
																  -1187.3f, -2847.8f, 13.6f, 1) < 100f) {
							unk1::_0x293220DA1B46CEBC(10f, 1073741824, 3);
							iLocal_3571[0] = 1;
						}
					}
				}
			}
			if (iLocal_3571[1] == 0) {
				if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
						if (vehicle::get_time_position_in_recording(iLocal_3258) > 52875f &&
							gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1),
																  -1349f, -2720f, 14f, 1) < 50f) {
							unk1::_0x293220DA1B46CEBC(6f, 1073741824, 3);
							iLocal_3571[1] = 1;
						}
					}
				}
			}
			if (iLocal_3571[2] == 0) {
				if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
						if (vehicle::get_time_position_in_recording(iLocal_3258) > 87085f &&
							gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1),
																  -1507f, -2520f, 14f, 1) < 70f) {
							unk1::_0x293220DA1B46CEBC(10f, 1073741824, 3);
							iLocal_3571[2] = 1;
						}
					}
				}
			}
			func_242();
			func_241();
			if (!audio::is_audio_scene_active("SOL_3_PLANE_ON_FIRE")) {
				if (entity::does_entity_exist(iLocal_3258)) {
					if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
						if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
							if (vehicle::get_time_position_in_recording(iLocal_3258) > 64280f &&
								vehicle::get_time_position_in_recording(iLocal_3258) < 72000f) {
								if (gameplay::get_distance_between_coords(
										-1149.6f, -2323.7f, 22.5f,
										entity::get_entity_coords(player::player_ped_id(), 1), 1) < 130f) {
									audio::start_audio_scene("SOL_3_PLANE_ON_FIRE");
								}
							}
						}
					}
				}
			}
			else if (entity::does_entity_exist(iLocal_3258)) {
				if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
						if (vehicle::get_time_position_in_recording(iLocal_3258) > 72500f) {
							audio::stop_audio_scene("SOL_3_PLANE_ON_FIRE");
						}
					}
				}
			}
			if (!audio::is_audio_scene_active("SOL_3_EVENT_JET_LANDING")) {
				if (entity::does_entity_exist(iLocal_3258)) {
					if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
						if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
							if (vehicle::get_time_position_in_recording(iLocal_3258) > 78000f &&
								vehicle::get_time_position_in_recording(iLocal_3258) < 85000f) {
								audio::start_audio_scene("SOL_3_EVENT_JET_LANDING");
							}
						}
					}
				}
			}
			else if (entity::does_entity_exist(iLocal_3258)) {
				if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
						if (vehicle::get_time_position_in_recording(iLocal_3258) > 85500f) {
							audio::stop_audio_scene("SOL_3_EVENT_JET_LANDING");
						}
					}
				}
			}
			if (!audio::is_audio_scene_active("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION")) {
				if (entity::does_entity_exist(iLocal_3258)) {
					if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
						if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
							if (vehicle::get_time_position_in_recording(iLocal_3258) > 100000f &&
								vehicle::get_time_position_in_recording(iLocal_3258) < 107000f) {
								audio::start_audio_scene("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
							}
						}
					}
				}
			}
			else if (entity::does_entity_exist(iLocal_3258)) {
				if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
						if (vehicle::get_time_position_in_recording(iLocal_3258) > 107500f) {
							audio::stop_audio_scene("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
						}
					}
				}
			}
			if (entity::does_entity_exist(iLocal_3258)) {
				if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
						if (vehicle::get_time_position_in_recording(iLocal_3258) < 10000f) {
							func_240();
						}
					}
				}
			}
			if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
				if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
					if (vehicle::get_time_position_in_recording(iLocal_3258) < 30000f) {
						func_239(iLocal_3258, vehicle::get_time_position_in_recording(iLocal_3258));
					}
				}
			}
			if (iLocal_3440 == 0) {
				if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
						if (vehicle::get_time_position_in_recording(iLocal_3258) > 22000f) {
							audio::prepare_music_event("TRV4_AIRPORT_ENTERED");
							iLocal_3440 = 1;
						}
					}
				}
			}
			else if (iLocal_3441 == 0) {
				if (entity::is_entity_in_angled_area(player::player_ped_id(), -940.8253f, -2858.602f, 11.94482f,
													 -1001.272f, -2823.764f, 21.00674f, 5.75f, 0, 1, 0)) {
					audio::trigger_music_event("TRV4_AIRPORT_ENTERED");
					iLocal_3441 = 1;
				}
			}
			if (iLocal_3343 == 0) {
				if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
					if (func_16(iLocal_3258, player::player_ped_id(), 1) < 170f &&
						entity::is_entity_on_screen(iLocal_3258)) {
						if (ui::does_blip_exist(iLocal_3287)) {
							ui::remove_blip(&iLocal_3287);
						}
						if (audio::is_audio_scene_active("SOL_3_DRIVE_TO_AIRPORT")) {
							audio::stop_audio_scene("SOL_3_DRIVE_TO_AIRPORT");
						}
						if (!audio::is_audio_scene_active("SOL_3_MAIN_CHASE")) {
							audio::start_audio_scene("SOL_3_MAIN_CHASE");
						}
						if (!ui::does_blip_exist(iLocal_3285)) {
							if (!ped::is_ped_injured(iLocal_3222)) {
								iLocal_3285 = ui::add_blip_for_entity(iLocal_3222);
								ui::set_blip_as_friendly(iLocal_3285, 1);
							}
						}
						ui::_0x67EEDEA1B9BAFD94();
						if (!ui::is_message_being_displayed()) {
							func_20("TRV4_CHASE2", 7500, 1);
							func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
							audio::trigger_music_event("TRV4_CHASE");
							iLocal_3343 = 1;
						}
					}
				}
				if (entity::is_entity_in_angled_area(player::player_ped_id(), -536.0366f, -2102.793f, 5.672412f,
													 -464.5755f, -2165.133f, 14.75182f, 65.25f, 0, 1, 0)) {
					if (ui::does_blip_exist(iLocal_3287)) {
						ui::remove_blip(&iLocal_3287);
					}
					if (!ui::does_blip_exist(iLocal_3285)) {
						if (!ped::is_ped_injured(iLocal_3222)) {
							iLocal_3285 = ui::add_blip_for_entity(iLocal_3222);
							ui::set_blip_as_friendly(iLocal_3285, 1);
						}
					}
					ui::_0x67EEDEA1B9BAFD94();
					if (!ui::is_message_being_displayed()) {
						func_20("TRV4_CHASE2", 7500, 1);
						func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
						audio::trigger_music_event("TRV4_CHASE");
						iLocal_3343 = 1;
					}
				}
			}
			else if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
				if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
					if (vehicle::get_time_position_in_recording(iLocal_3258) < 15000f) {
					}
				}
			}
			if (iLocal_3328 == 0) {
				streaming::request_model(joaat("jet"));
				if (streaming::has_model_loaded(joaat("jet"))) {
					if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
						if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
							if (vehicle::get_time_position_in_recording(iLocal_3258) > 18490f) {
								uLocal_3260[1] = vehicle::create_vehicle(joaat("jet"), -441.3117f, -3435.736f,
																		 409.9454f, 148.3975f, 1, 1);
								vehicle::start_playback_recorded_vehicle(uLocal_3260[1], 2, "BB_Chase", 1);
								streaming::set_model_as_no_longer_needed(joaat("jet"));
								iLocal_3328 = 1;
							}
						}
					}
				}
			}
			else if (entity::does_entity_exist(uLocal_3260[1])) {
				if (vehicle::is_vehicle_driveable(uLocal_3260[1], 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(uLocal_3260[1])) {
						vehicle::set_playback_speed(uLocal_3260[1], fLocal_3323);
						if (vehicle::get_time_position_in_recording(uLocal_3260[1]) > 20000f) {
							if (func_16(player::player_ped_id(), uLocal_3260[1], 1) > 200f &&
								!entity::is_entity_on_screen(uLocal_3260[1])) {
								vehicle::stop_playback_recorded_vehicle(uLocal_3260[1]);
								if (entity::does_entity_exist(uLocal_3254[1])) {
									ped::delete_ped(&uLocal_3254[1]);
								}
								vehicle::delete_vehicle(&uLocal_3260[1]);
								iLocal_3207 = gameplay::get_game_timer() + 1000;
							}
						}
						if (entity::does_entity_exist(uLocal_3260[1])) {
							if (vehicle::get_time_position_in_recording(uLocal_3260[1]) > 31543f) {
								vehicle::stop_playback_recorded_vehicle(uLocal_3260[1]);
								entity::freeze_entity_position(uLocal_3260[1], 1);
							}
						}
					}
					else if (func_16(player::player_ped_id(), uLocal_3260[1], 1) > 200f &&
							 !entity::is_entity_on_screen(uLocal_3260[1])) {
						if (entity::does_entity_exist(uLocal_3254[1])) {
							ped::delete_ped(&uLocal_3254[1]);
						}
						vehicle::delete_vehicle(&uLocal_3260[1]);
						iLocal_3207 = gameplay::get_game_timer() + 1000;
					}
				}
			}
			if (iLocal_3487 == 0) {
				if (!entity::does_entity_exist(iLocal_3265)) {
					if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
						if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
							if (vehicle::get_time_position_in_recording(iLocal_3258) > 23000f) {
								streaming::request_model(joaat("tanker"));
								if (streaming::has_model_loaded(joaat("tanker"))) {
									iLocal_3265 =
										vehicle::create_vehicle(joaat("tanker"), -1325f, -2779f, 14f, 233.9563f, 1, 1);
									streaming::set_model_as_no_longer_needed(joaat("tanker"));
									vehicle::set_vehicle_colours(iLocal_3265, 57, 57);
									iLocal_3487 = 1;
								}
							}
						}
					}
				}
			}
			if (entity::does_entity_exist(iLocal_3121[1])) {
				if (vehicle::is_vehicle_driveable(iLocal_3121[1], 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(iLocal_3121[1])) {
						if (vehicle::get_time_position_in_recording(iLocal_3121[1]) > 13000f) {
							if (iLocal_3377 == 0) {
								fLocal_1173[1] = 0.5f;
								iLocal_3245 = vehicle::get_ped_in_vehicle_seat(iLocal_3121[1], -1, 0);
								iLocal_3377 = 1;
							}
						}
					}
				}
			}
			if (iLocal_3334 == 0) {
				streaming::request_additional_collision_at_coord(-1325f, -2779f, 14f);
				if (entity::does_entity_exist(iLocal_3121[1])) {
					if (iLocal_3363 == 0) {
						vehicle::set_vehicle_colours(iLocal_3121[1], 57, 57);
						iLocal_3363 = 1;
					}
					if (entity::does_entity_exist(iLocal_3265)) {
						if (!entity::is_entity_dead(iLocal_3121[1], 0)) {
							if (!entity::is_entity_dead(iLocal_3265, 0)) {
								if (vehicle::is_playback_going_on_for_vehicle(iLocal_3121[1])) {
									vehicle::attach_vehicle_to_trailer(iLocal_3121[1], iLocal_3265, 1065353216);
								}
							}
						}
					}
				}
				if (entity::does_entity_exist(iLocal_3265)) {
					if (entity::does_entity_exist(iLocal_3258)) {
						if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
							if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
								if (vehicle::get_time_position_in_recording(iLocal_3258) > 41430f) {
									entity::detach_entity(iLocal_3265, 1, 1);
									iLocal_3334 = 1;
								}
							}
						}
					}
				}
			}
			else if (iLocal_3380 == 0) {
				if (vehicle::is_vehicle_driveable(iLocal_3121[1], 0)) {
					if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
						if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
							if (vehicle::get_time_position_in_recording(iLocal_3258) > 42700f) {
								if (entity::does_entity_exist(iLocal_3245)) {
									if (!ped::is_ped_injured(iLocal_3245)) {
										entity::set_entity_health(iLocal_3245, 0);
									}
								}
								if (vehicle::is_playback_going_on_for_vehicle(iLocal_3121[1])) {
									vehicle::stop_playback_recorded_vehicle(iLocal_3121[1]);
									iLocal_3380 = 1;
								}
							}
						}
					}
				}
			}
			if (entity::does_entity_exist(iLocal_3258)) {
				if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
						if (iLocal_3551 == 0) {
							if (vehicle::get_time_position_in_recording(iLocal_3258) > 38000f) {
								if (entity::does_entity_exist(iLocal_3121[1]) &&
									vehicle::is_vehicle_driveable(iLocal_3121[1], 0)) {
									audio::play_sound_from_entity(-1, "Trevor_4_747_Tanker_Horn", iLocal_3121[1], 0, 0,
																  0);
									iLocal_3551 = 1;
								}
							}
						}
						if (iLocal_3365[1] == 0) {
							if (vehicle::get_time_position_in_recording(iLocal_3258) > 39000f) {
								if (!audio::is_audio_scene_active("SOL_3_EVENT_TANKER_CRASH")) {
									audio::start_audio_scene("SOL_3_EVENT_TANKER_CRASH");
								}
								if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
									entity::set_entity_proofs(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 0,
															  1, 1, 0, 0, 0, 0, 0);
								}
								iLocal_3365[1] = 1;
							}
						}
						if (iLocal_3435 == 0) {
							if (vehicle::get_time_position_in_recording(iLocal_3258) > 41611f) {
								if (entity::does_entity_exist(iLocal_3265)) {
									if (!entity::is_entity_dead(iLocal_3265, 0)) {
										if (entity::does_entity_exist(iLocal_3121[7])) {
											if (!entity::is_entity_dead(iLocal_3121[7], 0)) {
												audio::play_sound_from_entity(-1,
																			  "Trevor_4_747_Tanker_"
																			  "Explosion",
																			  iLocal_3265, 0, 0, 0);
												vehicle::stop_playback_recorded_vehicle(iLocal_3121[7]);
												vehicle::explode_vehicle(iLocal_3121[7], 1, 0);
												vehicle::explode_vehicle(iLocal_3265, 1, 0);
												fire::add_explosion(-1221f, -2852f, 17f, 14, 1f, 1, 0, 1f, 0);
												fire::add_explosion(-1212f, -2855f, 14.34f, 14, 1f, 1, 0, 1f, 0);
												entity::set_vehicle_as_no_longer_needed(&iLocal_3265);
												entity::set_vehicle_as_no_longer_needed(&iLocal_3121[1]);
												iLocal_3435 = 1;
											}
										}
									}
								}
							}
						}
						if (iLocal_3369[1] == 0) {
							if (vehicle::get_time_position_in_recording(iLocal_3258) > 43204f) {
								if (audio::is_audio_scene_active("SOL_3_EVENT_TANKER_CRASH")) {
									audio::stop_audio_scene("SOL_3_EVENT_TANKER_CRASH");
								}
								audio::release_named_script_audio_bank("SCRIPT\Trv_4_747_Tanker_Explosion");
								if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
									entity::set_entity_proofs(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 0,
															  0, 0, 0, 0, 0, 0, 0);
								}
								iLocal_3369[1] = 1;
							}
						}
					}
				}
			}
			if (!audio::is_audio_scene_active("SOL_3_HELI_TAKEOFF")) {
				if (entity::does_entity_exist(iLocal_3121[0])) {
					if (vehicle::is_vehicle_driveable(iLocal_3121[0], 0)) {
						if (entity::does_entity_exist(iLocal_3258)) {
							if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
								if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
									if (vehicle::get_time_position_in_recording(iLocal_3258) > 36000f &&
										vehicle::get_time_position_in_recording(iLocal_3258) < 40000f) {
										audio::start_audio_scene("SOL_3_HELI_TAKEOFF");
									}
								}
							}
						}
					}
				}
			}
			else if (entity::does_entity_exist(iLocal_3121[0])) {
				if (vehicle::is_vehicle_driveable(iLocal_3121[0], 0)) {
					if (entity::does_entity_exist(iLocal_3258)) {
						if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
							if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
								if (vehicle::get_time_position_in_recording(iLocal_3258) > 43204f) {
									audio::stop_audio_scene("SOL_3_HELI_TAKEOFF");
								}
							}
						}
					}
				}
			}
			if (iLocal_3327 == 0) {
				if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
						if (vehicle::get_time_position_in_recording(iLocal_3258) > 60500f) {
							streaming::request_model(joaat("jet"));
						}
						if (vehicle::get_time_position_in_recording(iLocal_3258) > 66500f) {
							if (streaming::has_model_loaded(joaat("jet"))) {
								uLocal_3260[0] = vehicle::create_vehicle(joaat("jet"), -1119.072f, -1864.548f, -8.2205f,
																		 148.3975f, 1, 1);
								entity::set_entity_invincible(uLocal_3260[0], 1);
								vehicle::set_vehicle_livery(uLocal_3260[0], 2);
								vehicle::start_playback_recorded_vehicle(uLocal_3260[0], 35, "BB_Chase", 1);
								vehicle::skip_time_in_playback_recorded_vehicle(uLocal_3260[0], 3491f);
								streaming::set_model_as_no_longer_needed(joaat("jet"));
								iLocal_3327 = 1;
							}
						}
					}
				}
			}
			else if (entity::does_entity_exist(uLocal_3260[0])) {
				if (vehicle::is_vehicle_driveable(uLocal_3260[0], 0)) {
					if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
						if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
							if (vehicle::is_playback_going_on_for_vehicle(uLocal_3260[0])) {
								vehicle::set_playback_speed(uLocal_3260[0], fLocal_3323);
								if (vehicle::get_time_position_in_recording(iLocal_3258) > 80000f) {
									if (func_16(uLocal_3260[0], player::player_ped_id(), 1) > 200f) {
										vehicle::stop_playback_recorded_vehicle(uLocal_3260[0]);
									}
								}
							}
							else if (vehicle::get_time_position_in_recording(iLocal_3258) > 80000f) {
								if (func_16(uLocal_3260[0], player::player_ped_id(), 1) > 200f &&
									!entity::is_entity_on_screen(uLocal_3260[0])) {
									if (entity::does_entity_exist(uLocal_3254[0])) {
										ped::delete_ped(&uLocal_3254[0]);
									}
									vehicle::delete_vehicle(&uLocal_3260[0]);
									iLocal_3207 = gameplay::get_game_timer() + 1000;
								}
							}
						}
					}
				}
			}
			if (iLocal_3399 == 0) {
				if (iLocal_3398 == 0) {
					if (entity::does_entity_exist(iLocal_3258)) {
						if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
							if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
								if (vehicle::get_time_position_in_recording(iLocal_3258) > 50000f) {
									streaming::request_model(joaat("s_m_y_airworker"));
									streaming::request_anim_dict("misstrevor4");
									if (streaming::has_model_loaded(joaat("s_m_y_airworker"))) {
										iLocal_3246 = ped::create_ped(26, joaat("s_m_y_airworker"), -1170.541f,
																	  -2507.111f, 12.9455f, 218.3035f, 1, 1);
										iLocal_3247 = ped::create_ped(26, joaat("s_m_y_airworker"), -1168.264f,
																	  -2508.715f, 12.9455f, 70.7735f, 1, 1);
										ped::set_blocking_of_non_temporary_events(iLocal_3246, 1);
										ped::set_blocking_of_non_temporary_events(iLocal_3247, 1);
										streaming::set_model_as_no_longer_needed(joaat("s_m_y_airworker"));
										iLocal_3398 = 1;
									}
								}
							}
						}
					}
				}
				else if (entity::does_entity_exist(iLocal_3258)) {
					if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
						if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
							if (vehicle::get_time_position_in_recording(iLocal_3258) > 58000f) {
								if (!ped::is_ped_injured(iLocal_3246)) {
									if (streaming::has_anim_dict_loaded("misstrevor4")) {
										if (!entity::is_entity_playing_anim(iLocal_3246, "misstrevor4",
																			"dive_clear_goon1", 3)) {
											ai::task_play_anim(iLocal_3246, "misstrevor4", "dive_clear_goon1", 8f, -8f,
															   -1, 0, 0, 0, 0, 0);
										}
									}
								}
								if (!ped::is_ped_injured(iLocal_3247)) {
									if (streaming::has_anim_dict_loaded("misstrevor4")) {
										if (!entity::is_entity_playing_anim(iLocal_3247, "misstrevor4",
																			"dive_clear_goon2", 3)) {
											ai::task_play_anim(iLocal_3247, "misstrevor4", "dive_clear_goon2", 8f, -8f,
															   -1, 0, 0, 0, 0, 0);
										}
									}
								}
								iLocal_3399 = 1;
							}
						}
					}
				}
			}
			else if (entity::does_entity_exist(iLocal_3246)) {
				if (!ped::is_ped_injured(iLocal_3246)) {
					if (!entity::is_entity_playing_anim(iLocal_3246, "misstrevor4", "dive_clear_goon1", 3)) {
						if (entity::does_entity_exist(iLocal_3247)) {
							if (!ped::is_ped_injured(iLocal_3247)) {
								if (!entity::is_entity_playing_anim(iLocal_3247, "misstrevor4", "dive_clear_goon2",
																	3)) {
									streaming::remove_anim_dict("misstrevor4");
									entity::set_ped_as_no_longer_needed(&iLocal_3246);
									entity::set_ped_as_no_longer_needed(&iLocal_3247);
								}
							}
						}
					}
				}
			}
			if (entity::does_entity_exist(iLocal_3121[8])) {
				if (vehicle::is_vehicle_driveable(iLocal_3121[8], 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(iLocal_3121[8])) {
						if (entity::does_entity_exist(iLocal_3258)) {
							if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
								if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
									if (vehicle::get_time_position_in_recording(iLocal_3258) > 50200f) {
										if (iLocal_3330 == 0) {
											vehicle::set_playback_speed(iLocal_3121[8], 1f);
											if (func_16(player::player_ped_id(), iLocal_3121[8], 1) < 100f) {
												gameplay::set_time_scale(0.3f);
												iLocal_3373 = 0;
												if (!audio::is_audio_scene_active("SOL_3_CAR_JET_"
																				  "ENGINE")) {
													audio::start_audio_scene("SOL_3_CAR_JET_ENGINE");
												}
												cam::set_gameplay_vehicle_hint(iLocal_3121[8], 0f, 0f, 0f, 1, 1500, 500,
																			   100);
											}
											entity::set_entity_load_collision_flag(iLocal_3121[8], 1);
											vehicle::set_vehicle_door_broken(iLocal_3121[8], 1, 0);
											audio::play_sound_from_entity(iLocal_3213, "Trevor_4_747_Flying_Car",
																		  iLocal_3121[8], 0, 0, 0);
											system::settimerb(0);
											iLocal_3330 = 1;
										}
									}
									if (iLocal_3330 == 1) {
										if (system::timerb() > 662) {
											if (audio::is_audio_scene_active("SOL_3_CAR_JET_ENGINE")) {
												audio::stop_audio_scene("SOL_3_CAR_JET_ENGINE");
											}
											gameplay::set_time_scale(1f);
											iLocal_3373 = 1;
										}
										if (system::timerb() > 1872) {
											vehicle::stop_playback_recorded_vehicle(iLocal_3121[8]);
										}
									}
								}
							}
						}
					}
					else if (entity::does_entity_exist(iLocal_3258)) {
						if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
							if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
								if (vehicle::get_time_position_in_recording(iLocal_3258) > 50200f) {
									if (!entity::is_entity_in_air(iLocal_3121[8])) {
										if (iLocal_3385 == 0) {
											audio::play_sound_from_entity(iLocal_3213, "Trevor_4_747_Carsplosion",
																		  iLocal_3121[8], 0, 0, 0);
											vehicle::explode_vehicle(iLocal_3121[8], 1, 0);
											iLocal_3385 = 1;
										}
									}
								}
							}
						}
					}
				}
				else if (iLocal_3373 == 0) {
					if (iLocal_3330 == 1) {
						if (system::timerb() > 662) {
							if (audio::is_audio_scene_active("SOL_3_CAR_JET_ENGINE")) {
								audio::stop_audio_scene("SOL_3_CAR_JET_ENGINE");
							}
							gameplay::set_time_scale(1f);
							iLocal_3373 = 1;
						}
					}
				}
			}
			else if (iLocal_3373 == 0) {
				if (iLocal_3330 == 1) {
					if (system::timerb() > 662) {
						if (audio::is_audio_scene_active("SOL_3_CAR_JET_ENGINE")) {
							audio::stop_audio_scene("SOL_3_CAR_JET_ENGINE");
						}
						gameplay::set_time_scale(1f);
						iLocal_3373 = 1;
					}
				}
			}
			if (entity::does_entity_exist(iLocal_3121[11])) {
				if (vehicle::is_vehicle_driveable(iLocal_3121[11], 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(iLocal_3121[11])) {
						if (entity::does_entity_exist(iLocal_3258)) {
							if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
								if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
									if (vehicle::get_time_position_in_recording(iLocal_3258) > 82683f) {
										if (iLocal_3331 == 0) {
											audio::play_sound_from_entity(iLocal_3215, "Trevor_4_747_Flying_Car",
																		  iLocal_3121[11], 0, 0, 0);
											iLocal_3331 = 1;
											system::settimerb(0);
										}
										if (iLocal_3331 == 1) {
											if (system::timerb() > 1872) {
												if (!entity::is_entity_in_air(iLocal_3121[11])) {
													vehicle::stop_playback_recorded_vehicle(iLocal_3121[11]);
												}
											}
										}
									}
								}
							}
						}
					}
					else if (iLocal_3331 == 1) {
						if (iLocal_3386 == 0) {
							if (!entity::is_entity_in_air(iLocal_3121[11])) {
								audio::play_sound_from_entity(iLocal_3215, "Trevor_4_747_Carsplosion", iLocal_3121[11],
															  0, 0, 0);
								vehicle::explode_vehicle(iLocal_3121[11], 1, 0);
								iLocal_3386 = 1;
							}
						}
					}
				}
			}
			if (entity::does_entity_exist(iLocal_3121[12])) {
				if (vehicle::is_vehicle_driveable(iLocal_3121[12], 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(iLocal_3121[12])) {
						if (entity::does_entity_exist(iLocal_3258)) {
							if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
								if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
									if (vehicle::get_time_position_in_recording(iLocal_3258) > 82463f) {
										if (iLocal_3332 == 0) {
											audio::play_sound_from_entity(iLocal_3216, "Trevor_4_747_Flying_Car",
																		  iLocal_3121[12], 0, 0, 0);
											iLocal_3332 = 1;
											system::settimerb(0);
										}
										if (iLocal_3332 == 1) {
											if (system::timerb() > 1000) {
												if (!entity::is_entity_in_air(iLocal_3121[12])) {
													vehicle::stop_playback_recorded_vehicle(iLocal_3121[12]);
												}
											}
										}
									}
								}
							}
						}
						if (iLocal_3541 == 0) {
							if (vehicle::is_playback_going_on_for_vehicle(iLocal_3121[12])) {
								if (vehicle::get_time_position_in_recording(iLocal_3121[12]) > 22216f &&
									func_16(iLocal_3259, iLocal_3121[12], 1) < 90f) {
									gameplay::set_time_scale(0.3f);
									cam::set_gameplay_vehicle_hint(iLocal_3121[12], 0f, 0f, 0f, 1, 2000, 1000, 500);
									iLocal_3203 = gameplay::get_game_timer();
									iLocal_3541 = 1;
								}
							}
						}
					}
					else if (iLocal_3332 == 1) {
						if (iLocal_3387 == 0) {
							if (!entity::is_entity_in_air(iLocal_3121[12])) {
								audio::play_sound_from_entity(iLocal_3216, "Trevor_4_747_Carsplosion", iLocal_3121[12],
															  0, 0, 0);
								vehicle::explode_vehicle(iLocal_3121[12], 1, 0);
								iLocal_3387 = 1;
							}
						}
					}
				}
			}
			if (iLocal_3541 == 1) {
			}
			if (iLocal_3540 == 0 && iLocal_3541 == 1) {
				if (entity::does_entity_exist(iLocal_3121[12])) {
					if (vehicle::is_vehicle_driveable(iLocal_3121[12], 0)) {
						vLocal_3315 = {entity::get_entity_coords(iLocal_3121[12], 1)};
					}
				}
				vLocal_3318 = {entity::get_entity_coords(player::player_ped_id(), 1)};
				if (gameplay::get_game_timer() > iLocal_3203 + 1579 || vLocal_3318.y < vLocal_3315.y) {
					gameplay::set_time_scale(1f);
					cam::stop_gameplay_hint(0);
					iLocal_3540 = 1;
				}
			}
			if (entity::does_entity_exist(iLocal_3258)) {
				if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
						if (vehicle::get_time_position_in_recording(iLocal_3258) > 105000f &&
							vehicle::get_time_position_in_recording(iLocal_3258) < 113000f) {
							streaming::request_additional_collision_at_coord(-1172.3f, -3027.5f, 13.3f);
						}
					}
				}
			}
			if (entity::does_entity_exist(iLocal_3121[13])) {
				if (vehicle::is_vehicle_driveable(iLocal_3121[13], 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(iLocal_3121[13])) {
						if (entity::does_entity_exist(iLocal_3258)) {
							if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
								if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
									if (vehicle::get_time_position_in_recording(iLocal_3258) > 108830f) {
										vehicle::set_vehicle_can_break(iLocal_3121[13], 0);
										entity::set_entity_load_collision_flag(iLocal_3121[13], 1);
										entity::_set_entity_register(iLocal_3121[13], 0);
										system::settimera(0);
										iLocal_3486 = 1;
									}
								}
							}
						}
					}
					else if (iLocal_3486 == 1) {
						entity::set_entity_health(iLocal_3121[13], 0);
						vehicle::set_vehicle_undriveable(iLocal_3121[13], 1);
						entity::set_entity_health(vehicle::get_ped_in_vehicle_seat(iLocal_3121[13], -1, 0), 0);
					}
				}
			}
			if (iLocal_3478 == 0) {
				if (entity::does_entity_exist(iLocal_3121[5])) {
					if (vehicle::is_vehicle_driveable(iLocal_3121[5], 0)) {
						vehicle::set_vehicle_livery(iLocal_3121[5], 0);
						entity::set_entity_invincible(iLocal_3121[5], 1);
						iLocal_3478 = 1;
					}
				}
			}
			if (entity::does_entity_exist(iLocal_3121[15])) {
				if (vehicle::is_vehicle_driveable(iLocal_3121[15], 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(iLocal_3121[15])) {
						if (entity::does_entity_exist(iLocal_3258)) {
							if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
								if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
									if (vehicle::get_time_position_in_recording(iLocal_3258) > 104989f) {
										vehicle::stop_playback_recorded_vehicle(iLocal_3121[15]);
										func_237(iLocal_3121[15], -0.04f, -2.21f, 0.887f, 0f, -1f, 0f, 5f, 1);
										func_237(iLocal_3121[15], 0.44f, -0.802f, 15.303f, 0f, 0f, 0f, 12f, 1);
										vehicle::explode_vehicle(iLocal_3121[15], 1, 0);
										unk1::_0x293220DA1B46CEBC(4f, 4f, 4);
										audio::play_sound_from_entity(-1, "Trevor_4_747_Carsplosion", iLocal_3121[15],
																	  0, 0, 0);
										audio::release_named_script_audio_bank("SCRIPT\Trv_4_747_Cop_Cars");
									}
								}
							}
						}
					}
				}
			}
			if (entity::does_entity_exist(iLocal_3258)) {
				if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
						if (vehicle::get_time_position_in_recording(iLocal_3258) > 112000f) {
							ai::request_waypoint_recording("BB_MOLLY_2");
							streaming::request_anim_dict("misssolomon_3");
							streaming::request_anim_dict("move_f@film_reel_arms");
							iLocal_3182 = 1;
						}
					}
				}
			}
			break;

		case 1:
			if (iLocal_3508 == 0) {
				if (entity::is_entity_in_angled_area(player::player_ped_id(), -887.1561f, -2957.106f, 12.46766f,
													 -848.108f, -2997.588f, 18.23435f, 5f, 0, 1, 0)) {
					iLocal_3508 = 1;
				}
			}
			if (entity::does_entity_exist(uLocal_3272[0])) {
				if (vehicle::is_vehicle_driveable(uLocal_3272[0], 0)) {
					audio::_0x18EB48CFC41F2EA0(uLocal_3272[0], 0);
					entity::set_vehicle_as_no_longer_needed(&uLocal_3272[0]);
				}
			}
			if (entity::does_entity_exist(uLocal_3251[0])) {
				if (!ped::is_ped_injured(uLocal_3251[0])) {
					ai::clear_ped_tasks(uLocal_3251[0]);
					entity::set_ped_as_no_longer_needed(&uLocal_3251[0]);
				}
			}
			if (iLocal_3401 == 0) {
				if (entity::does_entity_exist(iLocal_3258)) {
					if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
						if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
							if (vehicle::get_time_position_in_recording(iLocal_3258) > 115000f) {
								ai::request_waypoint_recording("Trev4_5");
								streaming::request_model(joaat("prop_cs_film_reel_01"));
								if (!streaming::is_new_load_scene_active()) {
									streaming::new_load_scene_start_sphere(-930.7f, -2916.9f, 13.4f, 10f, 0);
								}
								iLocal_3401 = 1;
							}
						}
					}
				}
			}
			if (iLocal_3437 == 0) {
				if (entity::does_entity_exist(iLocal_3258)) {
					if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
						if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
							if (vehicle::get_time_position_in_recording(iLocal_3258) > 120000f) {
								if (!audio::is_audio_scene_active("SOL_3_ARRIVE_AT_HANGAR")) {
									audio::start_audio_scene("SOL_3_ARRIVE_AT_HANGAR");
								}
								vehicle::request_vehicle_high_detail_model(iLocal_3258);
							}
							if (vehicle::get_time_position_in_recording(iLocal_3258) > 125513f) {
								vehicle::stop_playback_recorded_vehicle(iLocal_3258);
								entity::freeze_entity_position(iLocal_3258, 1);
								func_236();
								ped::clear_ped_non_creation_area();
								pathfind::set_ped_paths_in_area(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f,
																12.94f, 1, 0);
								audio::stop_audio_scene("TREVOR_4_MAIN_CHASE");
								if (!cam::does_cam_exist(iLocal_3291)) {
									iLocal_3291 = cam::create_cam("DEFAULT_SCRIPTED_CAMERA", 0);
								}
								if (!cam::does_cam_exist(iLocal_3290)) {
									iLocal_3290 = cam::create_cam("DEFAULT_SCRIPTED_CAMERA", 0);
								}
								iLocal_3194 = gameplay::get_game_timer();
								cam::set_cinematic_button_active(1);
								gameplay::_set_unk_map_flag(0);
								iLocal_3182 = 2;
							}
						}
					}
				}
			}
			break;

		case 2:
			vLocal_3318 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			vehicle::request_vehicle_high_detail_model(iLocal_3258);
			if (iLocal_3508 == 0) {
				if (entity::is_entity_in_angled_area(player::player_ped_id(), -887.1561f, -2957.106f, 12.46766f,
													 -848.108f, -2997.588f, 18.23435f, 5f, 0, 1, 0)) {
					iLocal_3508 = 1;
				}
			}
			if (iLocal_3437 == 0) {
				if (gameplay::get_distance_between_coords(vLocal_3318, -930.7f, -2916.9f, 13.4f, 1) < 45f) {
					iLocal_3182 = 3;
				}
				if (entity::does_entity_exist(iLocal_3258)) {
					if (entity::is_entity_on_screen(iLocal_3258)) {
						if (iLocal_3508 == 1) {
							iLocal_3182 = 3;
						}
					}
				}
				if (gameplay::get_game_timer() > iLocal_3194 + 5000 && iLocal_3508 == 1) {
					iLocal_3182 = 3;
				}
			}
			break;

		case 3:
			if (streaming::is_new_load_scene_active()) {
				streaming::new_load_scene_stop();
			}
			vehicle::request_vehicle_high_detail_model(iLocal_3258);
			if (!ped::is_ped_injured(iLocal_3222)) {
				if (entity::is_entity_playing_anim(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3)) {
				}
			}
			if (iLocal_3466 == 0) {
				if (entity::does_entity_exist(iLocal_3258)) {
					if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
						if (!vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
							if (streaming::has_anim_dict_loaded("misssolomon_3")) {
								if (!ped::is_ped_injured(iLocal_3222)) {
									if (!entity::does_entity_exist(iLocal_3283)) {
										if (streaming::has_model_loaded(joaat("prop_cs_film_reel_01"))) {
											iLocal_3283 = object::create_object(joaat("prop_cs_film_reel_01"), -929f,
																				-2917f, 13f, 1, 1, 0);
											entity::attach_entity_to_entity(iLocal_3283, iLocal_3222,
																			ped::get_ped_bone_index(iLocal_3222, 28422),
																			0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
										}
									}
									if (!entity::is_entity_playing_anim(iLocal_3222, "misssolomon_3",
																		"molly_escapes_car_mol", 3)) {
										entity::freeze_entity_position(iLocal_3258, 0);
										iLocal_3208 = ped::create_synchronized_scene(-929.492f, -2913.472f, 14.16f, 0f,
																					 0f, -28.96f, 2);
										entity::play_synchronized_entity_anim(iLocal_3258, iLocal_3208,
																			  "molly_escapes_car_car", "misssolomon_3",
																			  8f, -8f, 0, 1000f);
										ai::task_synchronized_scene(iLocal_3222, iLocal_3208, "misssolomon_3",
																	"molly_escapes_car_mol", 1000f, -1000f, 5, 0,
																	1148846080, 0);
										ped::_set_synchronized_scene_occlusion_portal(iLocal_3208, 0);
										audio::trigger_music_event("TRV4_EXIT_CARS");
									}
									else {
										iLocal_3466 = 1;
									}
								}
							}
						}
					}
				}
			}
			if (iLocal_3468 == 0) {
				if (iLocal_3466 == 1) {
					if (!ped::is_ped_injured(iLocal_3222)) {
						if (entity::is_entity_in_angled_area(iLocal_3222, -937.6656f, -2927.864f, 12.77007f, -934.8479f,
															 -2929.484f, 14.46523f, 1.5f, 0, 1, 0)) {
							if (entity::is_entity_playing_anim(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol",
															   3)) {
								entity::stop_synchronized_entity_anim(iLocal_3222, -1000f, 1);
							}
							ai::clear_ped_tasks_immediately(iLocal_3222);
							ped::set_blocking_of_non_temporary_events(iLocal_3222, 1);
							entity::set_entity_coords(iLocal_3222, -934.8388f, -2932.831f, 12.9649f, 1, 0, 0, 1);
							entity::set_entity_heading(iLocal_3222, 236.5739f);
							ai::task_follow_waypoint_recording(iLocal_3222, "BB_MOLLY_2", 1, 4, -1);
							if (streaming::has_anim_dict_loaded("move_f@film_reel_arms")) {
								ai::task_play_anim(iLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0,
												   0, 0);
							}
							iLocal_3468 = 1;
						}
					}
				}
			}
			if (iLocal_3437 == 0) {
				if (iLocal_3476 == 0) {
					if (iLocal_3475 == 0) {
						if (!ped::is_ped_injured(iLocal_3222)) {
							if (entity::is_entity_playing_anim(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol",
															   3)) {
								if (ped::get_synchronized_scene_phase(iLocal_3208) > 0.18f ||
									gameplay::get_distance_between_coords(
										entity::get_entity_coords(player::player_ped_id(), 1), -930.7f, -2916.9f, 13.4f,
										1) < 10f) {
									iLocal_3183 = 0;
									iLocal_3475 = 1;
								}
							}
						}
					}
					while (iLocal_3475 == 1) {
						unk1::_0x208784099002BC30("M_LegalTrouble", 0);
						switch (iLocal_3183) {
						case 0:
							cam::set_cam_params(iLocal_3291, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294743f,
												28.05799f, 34.66404f, 0, 1, 1, 2);
							cam::set_cam_params(iLocal_3290, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294742f,
												32.59915f, 34.66404f, 0, 1, 1, 2);
							cam::set_cam_active_with_interp(iLocal_3290, iLocal_3291, 4000, 1, 1);
							ui::display_radar(0);
							ui::display_hud(0);
							cam::render_script_cams(1, 0, 3000, 1, 0, 0);
							if (entity::does_entity_exist(iLocal_3271)) {
								vehicle::delete_vehicle(&iLocal_3271);
							}
							if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
								entity::set_entity_coords(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0),
														  -918.6157f, -2926.646f, 12.9667f, 1, 0, 0, 1);
								entity::set_entity_heading(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0),
														   47.9465f);
							}
							else {
								entity::set_entity_coords(player::player_ped_id(), -918.6157f, -2926.646f, 12.9667f, 1,
														  0, 0, 1);
								entity::set_entity_heading(player::player_ped_id(), 47.9465f);
							}
							if (!ped::is_ped_injured(iLocal_3222)) {
								func_17(&uLocal_3578, 2, iLocal_3222, "MOLLY", 0, 1);
								ped::_0x129466ED55140F8D(iLocal_3222, 1);
							}
							unk1::_0x293220DA1B46CEBC(4f, 0f, 3);
							unk1::_0x48621C9FCA3EBD28(4);
							player::set_player_control(player::player_id(), 0, 0);
							iLocal_3529 = 0;
							iLocal_3183++;
							break;

						case 1:
							if (!ped::is_ped_injured(iLocal_3222)) {
								if (entity::is_entity_playing_anim(iLocal_3222, "misssolomon_3",
																   "molly_escapes_car_mol", 3)) {
									if (iLocal_3529 == 0) {
										if (ped::get_synchronized_scene_phase(iLocal_3208) > 0.3f) {
											if (func_235(&uLocal_3578, "T1M4AUD", "SOL3_GETOUT", 7, 0, 0, 0)) {
												unk1::_0x293220DA1B46CEBC(6f, 7f, 4);
												iLocal_3529 = 1;
											}
										}
									}
									if (ped::get_synchronized_scene_phase(iLocal_3208) > 0.5f) {
										cam::set_cam_params(iLocal_3291, -926.0932f, -2916.891f, 14.47074f, -3.471637f,
															1.294743f, 125.8315f, 34.66404f, 0, 1, 1, 2);
										cam::set_cam_params(iLocal_3290, -926.0932f, -2916.891f, 14.47074f, -3.471636f,
															1.294743f, 135.4584f, 34.66404f, 0, 1, 1, 2);
										cam::set_cam_active_with_interp(iLocal_3290, iLocal_3291, 4000, 1, 1);
										iLocal_3206 = gameplay::get_game_timer();
										iLocal_3183++;
									}
								}
							}
							break;

						case 2:
							if (!ped::is_ped_injured(iLocal_3222)) {
								if (entity::is_entity_playing_anim(iLocal_3222, "misssolomon_3",
																   "molly_escapes_car_mol", 3)) {
									if (iLocal_3206 != -1 && cam::_0xEE778F8C7E1142E2(0) == 4 &&
										gameplay::get_game_timer() - iLocal_3206 >= 2230) {
										graphics::_start_screen_effect("CamPushInNeutral", 0, 0);
										audio::play_sound_frontend(-1, "1st_Person_Transition",
																   "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
										iLocal_3206 = -1;
									}
									if (ped::get_synchronized_scene_phase(iLocal_3208) > 0.85f) {
										ui::display_hud(1);
										ui::display_radar(1);
										cam::render_script_cams(0, 0, 3000, 1, 0, 0);
										cam::set_gameplay_cam_relative_heading(0f);
										iLocal_3220 = 346732587;
										object::add_door_to_system(iLocal_3220, joaat("v_ilev_ss_door5_r"), -935.641f,
																   -2927.185f, 14.0945f, 1, 1, 0);
										object::_set_door_ajar_angle(iLocal_3220, 1f, 0, 1);
										player::set_player_control(player::player_id(), 1, 0);
										if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
											ai::task_leave_vehicle(
												player::player_ped_id(),
												ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 0);
											if (cam::_0xEE778F8C7E1142E2(1) != 4 && cam::_0xEE778F8C7E1142E2(0) == 4) {
												ped::_0x2208438012482A1A(player::player_ped_id(), 1, 0);
											}
										}
										ped::_0x129466ED55140F8D(iLocal_3222, 0);
										unk1::_0x81CBAE94390F9F89();
										unk1::_0x293220DA1B46CEBC(0f, 4f, 3);
										iLocal_3195 = gameplay::get_game_timer();
										iLocal_3475 = 0;
										iLocal_3476 = 1;
										iLocal_3183++;
									}
								}
							}
							break;
						}
						system::wait(0);
					}
				}
			}
			if (iLocal_3476 == 1) {
				object::_set_door_acceleration_limit(iLocal_3220, 5, 0, 1);
				if (iLocal_3552 == 0) {
					if (entity::does_entity_exist(iLocal_3222)) {
						if (!ped::is_ped_injured(iLocal_3222)) {
							if (entity::is_entity_at_coord(iLocal_3222, -935.3f, -2927.3f, 13f, 1.5f, 1.5f, 2f, 0, 1,
														   0)) {
								audio::play_sound_from_coord(-1, "Trevor_4_747_Molly_Open_Doors", -935.1f, -2927.6f,
															 13.2f, 0, 0, 0, 0);
								iLocal_3552 = 1;
							}
						}
					}
				}
			}
			if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				if (audio::is_audio_scene_active("SOL_3_MAIN_CHASE")) {
					audio::stop_audio_scene("SOL_3_MAIN_CHASE");
				}
				if (audio::is_audio_scene_active("SOL_3_ARRIVE_AT_HANGAR")) {
					audio::stop_audio_scene("SOL_3_ARRIVE_AT_HANGAR");
				}
				if (!audio::is_audio_scene_active("SOL_3_ON_FOOT_CHASE")) {
					audio::start_audio_scene("SOL_3_ON_FOOT_CHASE");
				}
			}
			if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				func_224();
			}
			if (entity::is_entity_in_angled_area(player::player_ped_id(), -929.7908f, -2928.213f, 12.19499f, -935.7283f,
												 -2924.685f, 15.44832f, 4.75f, 0, 1, 1)) {
				if (iLocal_3468 == 0) {
					if (!ped::is_ped_injured(iLocal_3222)) {
						if (entity::is_entity_playing_anim(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3)) {
							entity::stop_synchronized_entity_anim(iLocal_3222, -1000f, 1);
						}
						ai::clear_ped_tasks_immediately(iLocal_3222);
						ped::set_blocking_of_non_temporary_events(iLocal_3222, 1);
						entity::set_entity_coords(iLocal_3222, -934.8388f, -2932.831f, 12.9649f, 1, 0, 0, 1);
						entity::set_entity_heading(iLocal_3222, 236.5739f);
						ai::task_follow_waypoint_recording(iLocal_3222, "BB_MOLLY_2", 1, 4, -1);
						if (streaming::has_anim_dict_loaded("move_f@film_reel_arms")) {
							ai::task_play_anim(iLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0,
											   0);
						}
						iLocal_3468 = 1;
					}
				}
				if (entity::does_entity_exist(iLocal_3266)) {
					vehicle::delete_vehicle(&iLocal_3266);
				}
				iLocal_3181 = 0;
				iLocal_3183 = 0;
				iLocal_3180 = 5;
			}
			break;
		}
	}
}

// Position - 0x14F3B
void func_224() {
	if (iLocal_3433 == 0) {
		if (entity::does_entity_exist(iLocal_3121[14])) {
			if (vehicle::is_vehicle_driveable(iLocal_3121[14], 0)) {
				iLocal_3248 = vehicle::get_ped_in_vehicle_seat(iLocal_3121[14], -1, 0);
				weapon::give_weapon_to_ped(iLocal_3248, joaat("weapon_pistol"), 1000, 1, 1);
				entity::set_entity_as_mission_entity(iLocal_3248, 1, 0);
				ped::set_blocking_of_non_temporary_events(iLocal_3248, 1);
				ped::set_ped_accuracy(iLocal_3248, 5);
				entity::set_entity_health(iLocal_3248, 150);
				func_17(&uLocal_3578, 3, iLocal_3248, "TREV4POLICE3", 0, 1);
			}
		}
		iLocal_3433 = 1;
	}
	else if (iLocal_3432 == 0) {
		if (entity::does_entity_exist(iLocal_3248)) {
			if (!ped::is_ped_injured(iLocal_3248)) {
				ai::clear_ped_tasks(iLocal_3248);
				ped::set_ped_sphere_defensive_area(iLocal_3248, entity::get_entity_coords(iLocal_3248, 1), 5f, 0, 0);
				ai::open_sequence_task(&iLocal_3292);
				ai::task_leave_any_vehicle(0, 0, 0);
				ai::task_seek_cover_from_ped(0, player::player_ped_id(), 5000, 1);
				ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
				ai::close_sequence_task(iLocal_3292);
				ai::task_perform_sequence(iLocal_3248, iLocal_3292);
				ai::clear_sequence_task(&iLocal_3292);
				iLocal_3432 = 1;
			}
		}
	}
	else if (iLocal_3489 == 0) {
		if (entity::does_entity_exist(iLocal_3248)) {
			if (!ped::is_ped_injured(iLocal_3248)) {
				if (!ped::is_ped_in_any_vehicle(iLocal_3248, 0) &&
					func_13(player::player_ped_id(), iLocal_3248) < 20f) {
					if (!func_234()) {
						if (!ui::is_message_being_displayed() || !ui::is_subtitle_preference_switched_on()) {
							func_17(&uLocal_3578, 4, iLocal_3248, "SOL3COP", 0, 1);
							if (func_225(&uLocal_3578, "T1M4AUD", "SOL3_MOLPOL", "SOL3_MOLPOL_2", 7, 0, 0)) {
								iLocal_3489 = 1;
							}
						}
					}
				}
			}
		}
	}
}

// Position - 0x150C4
bool func_225(var *uParam0, char *sParam1, char *sParam2, char *sParam3, int iParam4, int iParam5, int iParam6) {
	func_233(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7) {
		if (iParam4 < 12) {
			iParam4 = 7;
		}
	}
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 1;
	Global_16738 = 0;
	Global_16742 = 0;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_226(sParam2, iParam4, 0);
}

// Position - 0x15118
int func_226(char *sParam0, int iParam1, int iParam2) {
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2) {
		if (Global_15745 != 0) {
			if (iParam1 > Global_15747) {
				if (Global_15752 == 0) {
					audio::stop_scripted_conversation(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else {
					func_191();
					return 0;
				}
			}
			else {
				return 0;
			}
		}
		if (audio::is_scripted_conversation_ongoing()) {
			return 0;
		}
		if (func_232(8, -1)) {
			return 0;
		}
		Global_15821 = {Global_15815};
		func_231();
		Global_15034 = {Global_15199};
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = {Global_15776};
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = {Global_16749};
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751) {
			gameplay::clear_bit(&G_SleepModeOnOn25, 20);
			gameplay::clear_bit(&G_SleepModeOffOn11, 17);
			gameplay::clear_bit(&Global_2315, 0);
			if (iParam2) {
				func_230();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2) {
					if (iParam1 == 13) {
					}
					else {
						return 0;
					}
				}
				if (Global_14443.f_1 > 3) {
					return 0;
				}
			}
			if (Global_14409 == 1) {
				return 0;
			}
			if (player::is_player_playing(player::player_id())) {
				if (ped::is_ped_in_melee_combat(player::player_ped_id())) {
					return 0;
				}
				if (func_229()) {
					return 0;
				}
				if (ai::is_ped_sprinting(player::player_ped_id())) {
					return 0;
				}
				if (ped::is_ped_ragdoll(player::player_ped_id())) {
					return 0;
				}
				if (ped::is_ped_in_parachute_free_fall(player::player_ped_id())) {
					return 0;
				}
				if (weapon::get_is_ped_gadget_equipped(player::player_ped_id(), joaat("gadget_parachute"))) {
					return 0;
				}
				if (!Global_69702) {
					if (entity::is_entity_in_water(player::player_ped_id())) {
						return 0;
					}
					if (player::is_player_climbing(player::player_id())) {
						return 0;
					}
					if (ped::is_ped_planting_bomb(player::player_ped_id())) {
						return 0;
					}
					if (player::is_special_ability_active(player::player_id())) {
						return 0;
					}
				}
			}
			if (func_203()) {
				return 0;
			}
			else {
				switch (Global_14443.f_1) {
				case 7: return 0;

				case 8: return 0;

				case 9: break;

				case 10: break;

				default: break;
				}
				if (gameplay::is_bit_set(G_SleepModeOnOn25, 9)) {
					return 0;
				}
			}
			func_228();
			Global_15755 = iParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_227();
		return 1;
	}
	if (Global_15745 == 5) {
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747) {
		return 0;
	}
	if (iParam1 == 2) {
	}
	else {
		func_191();
	}
	return 0;
}

// Position - 0x153E4
void func_227() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69) {
		StringCopy(&Global_14613[iVar0 /*6*/], "", 24);
		iVar0++;
	}
	audio::stop_scripted_conversation(0);
	Global_15745 = 1;
}

// Position - 0x15416
void func_228() {
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = {Global_15827};
	Global_15845 = {Global_15833};
	Global_15800 = Global_15799;
	Global_15869 = {Global_15851};
	Global_15875 = {Global_15857};
	Global_15881 = {Global_15863};
	Global_15887 = {Global_15893};
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = {Global_15776};
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	gameplay::clear_bit(&G_SleepModeOffOn11, 16);
}

// Position - 0x154AB
bool func_229() {
	int iVar0;
	int iVar1;

	if (Global_69702) {
		iVar0 = 0;
		weapon::get_current_ped_weapon(player::player_ped_id(), &iVar1, 1);
		if (player::is_player_playing(player::player_id())) {
			if (iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper") ||
				iVar1 == joaat("weapon_remotesniper")) {
				iVar0 = 1;
			}
		}
		if (cam::is_aim_cam_active() && iVar0 == 1) {
			return true;
		}
		else {
			return false;
		}
	}
	if (player::is_player_playing(player::player_id())) {
		if (ped::get_ped_config_flag(player::player_ped_id(), 78, 1)) {
			return true;
		}
		else {
			return false;
		}
	}
	return true;
}

// Position - 0x15544
void func_230() {
	if (func_57(14)) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[0 /*29*/]) {
				Global_14443 = 0;
			}
			else if (entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[1 /*29*/]) {
				Global_14443 = 1;
			}
			else if (entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[2 /*29*/]) {
				Global_14443 = 2;
			}
			else {
				Global_14443 = 0;
			}
		}
	}
	else {
		Global_14443 = func_92();
		if (Global_14443 == 145) {
			Global_14443 = 3;
		}
		if (Global_69702) {
			Global_14443 = 3;
		}
		if (Global_14443 > 3) {
			Global_14443 = 3;
		}
	}
}

// Position - 0x155E6
void func_231() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 15) {
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&Global_15034[iVar0 /*10*/].f_1, "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = {0f, 0f, 0f};
}

// Position - 0x1563E
bool func_232(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x15679
void func_233(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5) {
	Global_15199 = {*uParam0};
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0) {
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else {
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0) {
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else {
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

// Position - 0x156CF
bool func_234() {
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return true;
	}
	return false;
}

// Position - 0x156F1
bool func_235(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_233(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7) {
		if (iParam3 < 12) {
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_226(sParam2, iParam3, 0);
}

// Position - 0x1573F
void func_236() {
	if (graphics::does_particle_fx_looped_exist(uLocal_3755[0])) {
		graphics::stop_particle_fx_looped(uLocal_3755[0], 0);
	}
	if (graphics::does_particle_fx_looped_exist(uLocal_3755[1])) {
		graphics::stop_particle_fx_looped(uLocal_3755[1], 0);
	}
	if (graphics::does_particle_fx_looped_exist(uLocal_3755[2])) {
		graphics::stop_particle_fx_looped(uLocal_3755[2], 0);
	}
	if (iLocal_3388 == 1) {
		audio::release_sound_id(iLocal_3217);
		iLocal_3396 = 0;
	}
}

// Position - 0x157A1
void func_237(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8) {
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (!entity::is_entity_dead(iParam0, 0)) {
		if (vehicle::is_playback_going_on_for_vehicle(iParam0)) {
			vehicle::stop_playback_recorded_vehicle(iParam0);
		}
		vVar3 = {entity::get_entity_coords(iParam0, 1)};
		if (iParam8) {
			vVar0 = {entity::get_offset_from_entity_in_world_coords(iParam0, vParam1)};
		}
		else {
			vVar0 = {vParam1};
		}
		vVar6 = {func_238(vVar0 - vVar3)};
		vVar6 = {vVar6 * FtoV(fParam7)};
		entity::apply_force_to_entity(iParam0, 3, vVar6, vParam4, 0, 0, 1, 1, 0, 1);
	}
}

// Position - 0x1581E
Vector3 func_238(vector3 vParam0) {
	float fVar0;
	float fVar1;

	fVar0 = system::vmag(vParam0);
	if (fVar0 != 0f) {
		fVar1 = 1f / fVar0;
		vParam0 = {vParam0 * FtoV(fVar1)};
	}
	else {
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

// Position - 0x1585D
void func_239(int iParam0, float fParam1) {
	var uVar0;
	vector3 vVar1;

	if (iLocal_1956 < 15) {
		if (iLocal_1956 == 0) {
			vLocal_2656 = {99999.9f, 99999.9f, 99999.9f};
			vLocal_2659 = {-99999.9f, -99999.9f, -99999.9f};
		}
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (vehicle::is_playback_going_on_for_vehicle(iParam0)) {
				uVar0 = vehicle::get_current_playback_for_vehicle(iParam0);
				vVar1 = {vehicle::_0x92523B76657A517D(uVar0, fParam1 + system::to_float(iLocal_1956 - 1) * 2000f)};
				if (vVar1.x < vLocal_2656.x) {
					vLocal_2656.x = vVar1.x;
				}
				if (vVar1.y < vLocal_2656.y) {
					vLocal_2656.y = vVar1.y;
				}
				if (vVar1.z < vLocal_2656.z) {
					vLocal_2656.z = vVar1.z;
				}
				if (vVar1.x > vLocal_2659.x) {
					vLocal_2659.x = vVar1.x;
				}
				if (vVar1.y > vLocal_2659.y) {
					vLocal_2659.y = vVar1.y;
				}
				if (vVar1.z > vLocal_2659.z) {
					vLocal_2659.z = vVar1.z;
				}
			}
		}
		iLocal_1956++;
	}
	else if (!iLocal_106) {
		pathfind::set_roads_back_to_original(-9999.9f, -9999.9f, -9999.9f, 9999.9f, 9999.9f, 9999.9f, 1);
		vLocal_2656 = {vLocal_2656 + Vector(fLocal_1293 * -1f, fLocal_1293 * -1f, fLocal_1293 * -1f)};
		vLocal_2659 = {vLocal_2659 + Vector(fLocal_1293, fLocal_1293, fLocal_1293)};
		vLocal_2650 = {vLocal_2656};
		vLocal_2653 = {vLocal_2659};
		pathfind::set_roads_in_area(vLocal_2650, vLocal_2653, 0, 0);
		iLocal_1956 = 0;
	}
}

// Position - 0x159D1
void func_240() { iLocal_89 = 1; }

// Position - 0x159DC
void func_241() {
	if (iLocal_3333 == 0) {
		if (entity::does_entity_exist(iLocal_3258)) {
			if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
				if (vehicle::get_time_position_in_recording(iLocal_3258) > 55000f) {
					streaming::request_model(joaat("firetruk"));
					streaming::request_model(joaat("s_m_y_fireman_01"));
					streaming::request_anim_dict("missheist_agency3aig_lift_waitped_a");
					if (streaming::has_model_loaded(joaat("firetruk")) &&
						streaming::has_model_loaded(joaat("s_m_y_fireman_01")) &&
						streaming::has_anim_dict_loaded("missheist_agency3aig_lift_waitped_a")) {
						if (!entity::does_entity_exist(iLocal_3264)) {
							gameplay::clear_area(-1129.566f, -2319.888f, 12.9445f, 10f, 0, 0, 0, 0);
							iLocal_3264 = vehicle::create_vehicle(joaat("firetruk"), -1129.566f, -2319.888f, 12.9445f,
																  16.5423f, 1, 1);
						}
						uLocal_3755[0] = graphics::start_particle_fx_looped_at_coord(
							"scr_trev4_trailer_fire", -1151f, -2311f, 15f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						if (iLocal_3388 == 0) {
							audio::play_sound_from_coord(iLocal_3217, "Trevor_4_747_Loud_Fire", -1151f, -2311f, 15f, 0,
														 0, 0, 0);
							iLocal_3388 = 1;
						}
						uLocal_3755[1] = graphics::start_particle_fx_looped_at_coord(
							"scr_trev4_trailer_fire", -1140f, -2328f, 18f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						uLocal_3755[2] = graphics::start_particle_fx_looped_at_coord(
							"scr_trev4_trailer_fire", -1150f, -2327f, 19f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						if (!entity::does_entity_exist(uLocal_3223[0])) {
							uLocal_3223[0] =
								ped::create_ped_inside_vehicle(iLocal_3264, 21, joaat("s_m_y_fireman_01"), -1, 1, 1);
							ped::set_blocking_of_non_temporary_events(uLocal_3223[0], 1);
							ped::set_ped_keep_task(uLocal_3223[0], 1);
							ai::task_vehicle_shoot_at_coord(uLocal_3223[0], -1147.07f, -2320.65f, 18.93f, 1101004800);
						}
						if (!entity::does_entity_exist(uLocal_3223[1])) {
							uLocal_3223[1] = ped::create_ped(21, joaat("s_m_y_fireman_01"), -1138.313f, -2313.277f,
															 12.9445f, 155.4271f, 1, 1);
							ai::task_play_anim(uLocal_3223[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 8f, -8f,
											   -1, 9, 0, 0, 0, 0);
							ped::set_blocking_of_non_temporary_events(uLocal_3223[1], 1);
							ped::set_ped_keep_task(uLocal_3223[1], 1);
						}
						if (!entity::does_entity_exist(uLocal_3223[2])) {
							uLocal_3223[2] = ped::create_ped(21, joaat("s_m_y_fireman_01"), -1145.362f, -2309.387f,
															 12.9445f, 96.0786f, 1, 1);
							ai::task_play_anim(uLocal_3223[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 8f, -8f,
											   -1, 9, 0, 0, 0, 0);
							ped::set_blocking_of_non_temporary_events(uLocal_3223[2], 1);
							ped::set_ped_keep_task(uLocal_3223[2], 1);
						}
						if (!entity::does_entity_exist(uLocal_3223[3])) {
							uLocal_3223[3] = ped::create_ped(21, joaat("s_m_y_fireman_01"), -1147.461f, -2314.511f,
															 13.1518f, 57.8707f, 1, 1);
							ai::task_play_anim(uLocal_3223[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 8f, -8f,
											   -1, 9, 0, 0, 0, 0);
							ped::set_blocking_of_non_temporary_events(uLocal_3223[3], 1);
							ped::set_ped_keep_task(uLocal_3223[3], 1);
						}
						streaming::set_model_as_no_longer_needed(joaat("s_m_y_fireman_01"));
						streaming::set_model_as_no_longer_needed(joaat("firetruk"));
						iLocal_3333 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3333 == 1) {
		if (iLocal_3543[0] == 0) {
			if (entity::does_entity_exist(uLocal_3223[1])) {
				if (!ped::is_ped_injured(uLocal_3223[1])) {
					if (iLocal_3547[0] == 0) {
						if (entity::is_entity_playing_anim(uLocal_3223[1], "missheist_agency3aig_lift_waitped_a",
														   "idle_b", 3)) {
							iLocal_3547[0] = 1;
						}
					}
					if (iLocal_3547[0] == 1) {
						if (!entity::is_entity_playing_anim(uLocal_3223[1], "missheist_agency3aig_lift_waitped_a",
															"idle_b", 3)) {
							ai::task_cower(uLocal_3223[1], -1);
							ped::set_ped_keep_task(uLocal_3223[1], 1);
							ped::set_blocking_of_non_temporary_events(uLocal_3223[1], 0);
							iLocal_3543[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3543[1] == 0) {
			if (entity::does_entity_exist(uLocal_3223[2])) {
				if (!ped::is_ped_injured(uLocal_3223[2])) {
					if (iLocal_3547[1] == 0) {
						if (entity::is_entity_playing_anim(uLocal_3223[2], "missheist_agency3aig_lift_waitped_a",
														   "idle_a", 3)) {
							iLocal_3547[1] = 1;
						}
					}
					if (iLocal_3547[1] == 1) {
						if (!entity::is_entity_playing_anim(uLocal_3223[2], "missheist_agency3aig_lift_waitped_a",
															"idle_a", 3)) {
							ai::task_cower(uLocal_3223[2], -1);
							ped::set_ped_keep_task(uLocal_3223[2], 1);
							ped::set_blocking_of_non_temporary_events(uLocal_3223[2], 0);
							iLocal_3543[1] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3543[2] == 0) {
			if (entity::does_entity_exist(uLocal_3223[3])) {
				if (!ped::is_ped_injured(uLocal_3223[3])) {
					if (iLocal_3547[2] == 0) {
						if (entity::is_entity_playing_anim(uLocal_3223[3], "missheist_agency3aig_lift_waitped_a",
														   "idle_c", 3)) {
							iLocal_3547[2] = 1;
						}
					}
					if (iLocal_3547[2] == 1) {
						if (!entity::is_entity_playing_anim(uLocal_3223[3], "missheist_agency3aig_lift_waitped_a",
															"idle_c", 3)) {
							ai::task_cower(uLocal_3223[3], -1);
							ped::set_ped_keep_task(uLocal_3223[3], 1);
							ped::set_blocking_of_non_temporary_events(uLocal_3223[3], 0);
							iLocal_3543[2] = 1;
						}
					}
				}
			}
		}
	}
}

// Position - 0x15EBC
void func_242() {
	if (iLocal_3434 == 0) {
		streaming::request_model(joaat("police3"));
		streaming::request_model(joaat("s_m_y_cop_01"));
		vehicle::request_vehicle_recording(1, "BB_AIChase");
		if (streaming::has_model_loaded(joaat("police3")) && streaming::has_model_loaded(joaat("s_m_y_cop_01"))) {
			if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
				if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
					if (vehicle::get_time_position_in_recording(iLocal_3258) > 15500f) {
						player::set_player_wanted_level(player::player_id(), 2, 0);
						player::set_player_wanted_level_now(player::player_id(), 0);
						uLocal_3272[0] = vehicle::create_vehicle(joaat("police3"), -847.2593f, -2379.987f, 15.9304f,
																 196.4921f, 1, 1);
						uLocal_3251[0] =
							ped::create_ped_inside_vehicle(uLocal_3272[0], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
						ped::set_blocking_of_non_temporary_events(uLocal_3251[0], 1);
						audio::_dynamic_mixer_related_fn(uLocal_3272[0], "SOL_3_POLICE_CARS_Group", 0);
						func_112(uLocal_3251[0], 0);
						vehicle::set_vehicle_engine_on(uLocal_3272[0], 1, 1, 0);
						vehicle::start_playback_recorded_vehicle(uLocal_3272[0], 1, "BB_AIChase", 1);
						weapon::give_weapon_to_ped(uLocal_3251[0], joaat("weapon_pistol"), 1000, 1, 1);
						vehicle::set_vehicle_siren(uLocal_3272[0], 1);
						streaming::set_model_as_no_longer_needed(joaat("police3"));
						streaming::set_model_as_no_longer_needed(joaat("s_m_y_cop_01"));
						iLocal_3434 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3434 == 1) {
		if (iLocal_3480[0] == 0) {
			if (entity::does_entity_exist(uLocal_3272[0])) {
				if (vehicle::is_vehicle_driveable(uLocal_3272[0], 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(uLocal_3272[0])) {
						vehicle::set_playback_speed(uLocal_3272[0], fLocal_3323);
						if (vehicle::get_time_position_in_recording(uLocal_3272[0]) > 13000f) {
							vehicle::stop_playback_recorded_vehicle(uLocal_3272[0]);
						}
					}
					else if (entity::does_entity_exist(uLocal_3251[0])) {
						if (!ped::is_ped_injured(uLocal_3251[0])) {
							ped::set_blocking_of_non_temporary_events(uLocal_3251[0], 1);
							if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
								ai::task_vehicle_chase(uLocal_3251[0], player::player_ped_id());
								ped::set_ped_keep_task(uLocal_3251[0], 1);
							}
							else {
								ai::task_combat_ped(uLocal_3251[0], player::player_ped_id(), 0, 16);
								ped::set_ped_keep_task(uLocal_3251[0], 1);
							}
							vehicle::remove_vehicle_recording(1, "BB_AIChase");
							iLocal_3196 = gameplay::get_game_timer();
							iLocal_3480[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3483[0] == 0) {
			if (iLocal_3480[0] == 1) {
				if (gameplay::get_game_timer() > iLocal_3196 + 500) {
					if (entity::does_entity_exist(uLocal_3251[0])) {
						if (!ped::is_ped_injured(uLocal_3251[0])) {
							if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
								ai::set_task_vehicle_chase_behavior_flag(uLocal_3251[0], 16, 1);
								ai::set_task_vehicle_chase_behavior_flag(uLocal_3251[0], 1, 1);
								iLocal_3483[0] = 1;
							}
							else {
								iLocal_3483[0] = 1;
							}
						}
					}
				}
			}
		}
	}
}

// Position - 0x16146
void func_243() {
	if (!iLocal_3335) {
		if (vehicle::is_vehicle_driveable(iLocal_3121[20], 0)) {
			iLocal_3289 = cam::create_cam("DEFAULT_SCRIPTED_CAMERA", 0);
			cam::set_cam_active(iLocal_3289, 1);
			iLocal_3336 = 0;
			iLocal_3335 = 1;
		}
	}
	else if (func_258(&uLocal_28, 1, 0, 0) && iLocal_3437 == 0) {
		if (ui::is_help_message_being_displayed()) {
			ui::clear_help(1);
		}
		if (func_234()) {
			ui::clear_prints();
			func_188();
		}
		if (iLocal_3365[2] == 0) {
			if (!audio::is_audio_scene_active("SOL_3_CHOPPER_CAM")) {
				audio::start_audio_scene("SOL_3_CHOPPER_CAM");
			}
			audio::play_sound_frontend(iLocal_3219, "Trevor_4_747_TV", 0, 1);
			iLocal_3365[2] = 1;
		}
		func_249(1, 1, 30, 5, 0);
		if (iLocal_3354 == 0) {
			graphics::_push_scaleform_movie_function(iLocal_3293, "SET_TEXT");
			func_248("TRV4_NEWS1");
			func_248("");
			graphics::_pop_scaleform_movie_function_void();
			iLocal_3354 = 1;
		}
		if (iLocal_3355 == 0) {
			graphics::_push_scaleform_movie_function(iLocal_3293, "SET_SCROLL_TEXT");
			graphics::_push_scaleform_movie_function_parameter_float(1f);
			graphics::_push_scaleform_movie_function_parameter_float(0f);
			func_248("TRV4_NEWS2");
			graphics::_pop_scaleform_movie_function_void();
			graphics::_push_scaleform_movie_function(iLocal_3293, "SET_SCROLL_TEXT");
			graphics::_push_scaleform_movie_function_parameter_float(0f);
			graphics::_push_scaleform_movie_function_parameter_float(0f);
			func_248("TRV4_NEWS6");
			graphics::_pop_scaleform_movie_function_void();
			graphics::_push_scaleform_movie_function(iLocal_3293, "SET_SCROLL_TEXT");
			graphics::_push_scaleform_movie_function_parameter_float(0f);
			graphics::_push_scaleform_movie_function_parameter_float(1f);
			func_248("TRV4_NEWS7");
			graphics::_pop_scaleform_movie_function_void();
			graphics::_push_scaleform_movie_function(iLocal_3293, "SET_SCROLL_TEXT");
			graphics::_push_scaleform_movie_function_parameter_float(0f);
			graphics::_push_scaleform_movie_function_parameter_float(2f);
			func_248("TRV4_NEWS8");
			graphics::_pop_scaleform_movie_function_void();
			graphics::_push_scaleform_movie_function(iLocal_3293, "SET_SCROLL_TEXT");
			graphics::_push_scaleform_movie_function_parameter_float(0f);
			graphics::_push_scaleform_movie_function_parameter_float(3f);
			func_248("TRV4_NEWS9");
			graphics::_pop_scaleform_movie_function_void();
			graphics::_push_scaleform_movie_function(iLocal_3293, "SET_SCROLL_TEXT");
			graphics::_push_scaleform_movie_function_parameter_float(0f);
			graphics::_push_scaleform_movie_function_parameter_float(4f);
			func_248("TRV4_NEWS10");
			graphics::_pop_scaleform_movie_function_void();
			graphics::_push_scaleform_movie_function(iLocal_3293, "DISPLAY_SCROLL_TEXT");
			graphics::_push_scaleform_movie_function_parameter_float(1f);
			graphics::_push_scaleform_movie_function_parameter_float(0f);
			graphics::_pop_scaleform_movie_function_void();
			iLocal_3201 = gameplay::get_game_timer() - 5000;
			iLocal_3355 = 1;
		}
		if (gameplay::get_game_timer() > iLocal_3201 + 5000) {
			func_247();
			iLocal_3201 = gameplay::get_game_timer();
		}
		if (iLocal_3356 == 0) {
			if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
				if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
					if (vehicle::get_time_position_in_recording(iLocal_3258) > 25000f &&
						vehicle::get_time_position_in_recording(iLocal_3258) < 50000f) {
						graphics::_push_scaleform_movie_function(iLocal_3293, "SET_SCROLL_TEXT");
						graphics::_push_scaleform_movie_function_parameter_float(1f);
						graphics::_push_scaleform_movie_function_parameter_float(1f);
						func_248("TRV4_NEWS5");
						graphics::_pop_scaleform_movie_function_void();
						graphics::_push_scaleform_movie_function(iLocal_3293, "DISPLAY_SCROLL_TEXT");
						graphics::_push_scaleform_movie_function_parameter_float(1f);
						graphics::_push_scaleform_movie_function_parameter_float(1f);
						graphics::_pop_scaleform_movie_function_void();
						iLocal_3356 = 1;
					}
				}
			}
		}
		if (iLocal_3357 == 0) {
			if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
				if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
					if (vehicle::get_time_position_in_recording(iLocal_3258) > 77600f &&
						vehicle::get_time_position_in_recording(iLocal_3258) < 115000f) {
						graphics::_push_scaleform_movie_function(iLocal_3293, "SET_SCROLL_TEXT");
						graphics::_push_scaleform_movie_function_parameter_float(1f);
						graphics::_push_scaleform_movie_function_parameter_float(2f);
						func_248("TRV4_NEWS3");
						graphics::_pop_scaleform_movie_function_void();
						graphics::_push_scaleform_movie_function(iLocal_3293, "DISPLAY_SCROLL_TEXT");
						graphics::_push_scaleform_movie_function_parameter_float(1f);
						graphics::_push_scaleform_movie_function_parameter_float(2f);
						graphics::_pop_scaleform_movie_function_void();
						iLocal_3357 = 1;
					}
				}
			}
		}
		if (iLocal_3358 == 0) {
			if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
				if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
					if (vehicle::get_time_position_in_recording(iLocal_3258) > 115000f) {
						graphics::_push_scaleform_movie_function(iLocal_3293, "SET_SCROLL_TEXT");
						graphics::_push_scaleform_movie_function_parameter_float(1f);
						graphics::_push_scaleform_movie_function_parameter_float(3f);
						func_248("TRV4_NEWS4");
						graphics::_pop_scaleform_movie_function_void();
						graphics::_push_scaleform_movie_function(iLocal_3293, "DISPLAY_SCROLL_TEXT");
						graphics::_push_scaleform_movie_function_parameter_float(1f);
						graphics::_push_scaleform_movie_function_parameter_float(3f);
						graphics::_pop_scaleform_movie_function_void();
						iLocal_3358 = 1;
					}
				}
			}
		}
		ui::set_text_render_id(iLocal_3184);
		graphics::draw_scaleform_movie_fullscreen(iLocal_3293, 255, 255, 255, 0, 0);
		if (iLocal_3336 == 0) {
			func_202(1, 1, 1, 0);
			cam::shake_cam(iLocal_3289, "ROAD_VIBRATION_SHAKE", 1f);
			cam::set_cam_active(iLocal_3289, 1);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			ui::display_radar(0);
			player::special_ability_deactivate(player::player_id());
			func_246();
			iLocal_3336 = 1;
		}
		func_244();
		ui::hide_hud_component_this_frame(6);
		ui::hide_hud_component_this_frame(7);
		ui::hide_hud_component_this_frame(8);
		ui::hide_hud_component_this_frame(9);
		ui::hide_hud_component_this_frame(1);
		ui::hide_hud_component_this_frame(2);
		ui::hide_hud_component_this_frame(15);
		ui::hide_hud_component_this_frame(3);
		controls::disable_control_action(0, 85, 1);
		audio::set_frontend_radio_active(0);
	}
	else if (iLocal_3336) {
		func_202(0, 1, 1, 0);
		cam::set_cam_active(iLocal_3289, 0);
		cam::render_script_cams(0, 0, 3000, 1, 0, 0);
		ui::display_radar(1);
		if (audio::is_audio_scene_active("SOL_3_CHOPPER_CAM")) {
			audio::stop_audio_scene("SOL_3_CHOPPER_CAM");
		}
		audio::stop_sound(iLocal_3219);
		func_222();
		audio::set_frontend_radio_active(1);
		iLocal_3365[2] = 0;
		iLocal_3336 = 0;
	}
}

// Position - 0x16586
void func_244() {
	unk1::_0xEB2D525B57F42B40();
	func_245();
}

// Position - 0x16596
void func_245() { Global_17151.f_134 = 1; }

// Position - 0x165A4
void func_246() { Global_55829 = 1; }

// Position - 0x165B0
void func_247() {
	if (iLocal_3186 > 4) {
		iLocal_3186 = 0;
	}
	graphics::_push_scaleform_movie_function(iLocal_3293, "DISPLAY_SCROLL_TEXT");
	graphics::_push_scaleform_movie_function_parameter_int(0);
	graphics::_push_scaleform_movie_function_parameter_int(iLocal_3186);
	graphics::_pop_scaleform_movie_function_void();
	iLocal_3186++;
}

// Position - 0x165E7
void func_248(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x165F9
void func_249(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	if (!func_257()) {
		func_257();
	}
	else if (iParam0) {
		if (iParam4 == 1) {
			if (iLocal_50 <= 225 && iLocal_44 == 0) {
				iLocal_50 += 30;
				if (iLocal_50 >= 225) {
					iLocal_44 = 1;
				}
			}
			else if (iLocal_50 >= 30) {
				iLocal_50 -= 30;
				if (iLocal_50 <= 30) {
					iLocal_44 = 0;
				}
			}
		}
		func_256(1, 200);
		if (iLocal_48 <= iParam2 && iLocal_43 == 0) {
			iLocal_48++;
			func_253(1, iLocal_48);
			if (iLocal_48 == iParam2) {
				iLocal_43 = 1;
				iLocal_49 = gameplay::get_random_int_in_range(iParam3, iParam2);
			}
		}
		else if (iLocal_48 > 0) {
			if (iLocal_48 > iLocal_49) {
				iLocal_48--;
				func_253(1, iLocal_48);
				if (iLocal_48 == iLocal_49) {
					iLocal_43 = 0;
				}
			}
		}
		if (iParam1) {
			func_250(1, 40, 1, 1, 1);
		}
	}
}

// Position - 0x166C7
void func_250(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	if (!func_257()) {
		func_257();
	}
	else if (iParam0) {
		if (iParam2) {
			if (!func_252(0)) {
				func_251(0);
			}
			else {
				graphics::draw_sprite("digitalOverlay", "nscuzz1", 0.5f, fLocal_51, 1f, 0.2f, 0f, 255, 255, 255,
									  iParam1, 0);
			}
			if (fLocal_51 < 1f) {
				fLocal_51 += 0.01f;
			}
			else {
				fLocal_51 = 0f;
			}
		}
		if (iParam3) {
			if (!func_252(1)) {
				func_251(1);
			}
			else {
				graphics::draw_sprite("digitalOverlay", "nscuzz2", 0.5f, fLocal_52, 1f, 0.2f, 0f, 255, 255, 255,
									  iParam1, 0);
			}
			if (fLocal_52 < 1f) {
				fLocal_52 += 0.02f;
			}
			else {
				fLocal_52 = 0f;
			}
		}
		if (iParam4) {
			if (!func_252(2)) {
				func_251(2);
			}
			else {
				graphics::draw_sprite("digitalOverlay", "nscuzz3", 0.5f, fLocal_53, 1f, 0.2f, 0f, 255, 255, 255,
									  iParam1, 0);
			}
			if (fLocal_53 < 1f) {
				fLocal_53 += 0.028f;
			}
			else {
				fLocal_53 = 0f;
			}
		}
	}
}

// Position - 0x167CE
void func_251(int iParam0) {
	if (iParam0 < 32) {
		gameplay::set_bit(&iLocal_54, iParam0);
	}
}

// Position - 0x167E8
int func_252(int iParam0) {
	if (gameplay::is_bit_set(iLocal_54, iParam0)) {
		return 1;
	}
	return 0;
}

// Position - 0x16800
void func_253(int iParam0, int iParam1) {
	if (!func_257()) {
		func_257();
	}
	else if (iParam0) {
		iLocal_46 = func_255(5);
		uLocal_45 = gameplay::get_random_int_in_range(0, 4);
		while (iLocal_47 == iLocal_46) {
			iLocal_46 = func_255(5);
		}
		if (iLocal_46 == 0) {
			if (!func_252(3)) {
				func_251(3);
			}
			else {
				graphics::draw_sprite("digitalOverlay", "Static1", 0.5f, 0.5f, 1f * func_254(iLocal_40),
									  1f * func_254(iLocal_41), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 1) {
			if (!func_252(4)) {
				func_251(4);
			}
			else {
				graphics::draw_sprite("digitalOverlay", "Static2", 0.5f, 0.5f, 1f * func_254(iLocal_40),
									  1f * func_254(iLocal_41), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 2) {
			if (!func_252(5)) {
				func_251(5);
			}
			else {
				graphics::draw_sprite("digitalOverlay", "Static3", 0.5f, 0.5f, 1f * func_254(iLocal_40),
									  1f * func_254(iLocal_41), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 3) {
			if (!func_252(6)) {
				func_251(6);
			}
			else {
				graphics::draw_sprite("digitalOverlay", "Static4", 0.5f, 0.5f, 1f * func_254(iLocal_40),
									  1f * func_254(iLocal_41), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 4) {
			if (!func_252(7)) {
				func_251(7);
			}
			else {
				graphics::draw_sprite("digitalOverlay", "Static5", 0.5f, 0.5f, 1f * func_254(iLocal_40),
									  1f * func_254(iLocal_41), 0f, 255, 255, 255, iParam1, 0);
			}
		}
	}
}

// Position - 0x16996
float func_254(int iParam0) {
	if (iParam0) {
		return -1f;
	}
	else {
		return 1f;
	}
	return 1f;
}

// Position - 0x169AF
var func_255(int iParam0) {
	if (gameplay::get_random_int_in_range(0, 50) > 25) {
		iLocal_40 = 1;
	}
	else {
		iLocal_40 = 0;
	}
	if (gameplay::get_random_int_in_range(0, 50) > 25) {
		iLocal_41 = 1;
	}
	else {
		iLocal_41 = 0;
	}
	return gameplay::get_random_int_in_range(0, iParam0);
}

// Position - 0x169E8
void func_256(int iParam0, int iParam1) {
	if (!func_257()) {
		func_257();
	}
	else if (iParam0) {
		if (iLocal_42) {
			if (!func_252(8)) {
				func_251(8);
			}
			else {
				graphics::draw_sprite("digitalOverlay", "nscanline1", 0.5f, 0.5f, 1f, 1f, 0f, 255, 255, 255, iParam1,
									  0);
			}
			iLocal_42 = 0;
		}
		else {
			if (!func_252(8)) {
				func_251(8);
			}
			else {
				graphics::draw_sprite("digitalOverlay", "nscanline1", 0.5f, 0.5f, -1f, -1f, 0f, 255, 255, 255, iParam1,
									  0);
			}
			iLocal_42 = 1;
		}
	}
}

// Position - 0x16A79
int func_257() {
	graphics::request_streamed_texture_dict("digitalOverlay", 0);
	if (graphics::has_streamed_texture_dict_loaded("digitalOverlay")) {
		return 1;
	}
	return 0;
}

// Position - 0x16A9A
int func_258(var *uParam0, int iParam1, int iParam2, int iParam3) {
	if (uParam0->f_1) {
		if (gameplay::get_game_timer() >= uParam0->f_8 + uParam0->f_9) {
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5) {
	case 0:
		uParam0->f_7 = 0;
		if (uParam0->f_6 == 0) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				if (func_264(iParam1, iParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (func_263(iParam1, iParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		else if (uParam0->f_6 == 1) {
			if (func_263(iParam1, iParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		else if (uParam0->f_6 == 2) {
			if (func_264(iParam1, iParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		if (func_262(uParam0)) {
			uParam0->f_7 = 1;
			uParam0->f_5 = 4;
		}
		break;

	case 1:
		if (gameplay::get_game_timer() - uParam0->f_4 <= 500) {
			if (uParam0->f_6 == 0) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
					if (!func_264(iParam1, iParam2, iParam3)) {
						uParam0->f_4 = gameplay::get_game_timer();
						uParam0->f_5 = 3;
					}
				}
				else if (!func_263(iParam1, iParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
			else if (uParam0->f_6 == 1) {
				if (!func_263(iParam1, iParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
			else if (uParam0->f_6 == 2) {
				if (!func_264(iParam1, iParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
		}
		else {
			uParam0->f_5 = 2;
		}
		break;

	case 2:
		if (uParam0->f_6 == 0) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				if (!func_264(iParam1, iParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (!func_263(iParam1, iParam2, iParam3)) {
				uParam0->f_5 = 0;
			}
		}
		else if (uParam0->f_6 == 1) {
			if (!func_263(iParam1, iParam2, iParam3) || ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				uParam0->f_5 = 0;
			}
		}
		else if (uParam0->f_6 == 2) {
			if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
				ai::get_is_task_active(player::player_ped_id(), 2)) {
				uParam0->f_5 = 0;
			}
			else if (!func_264(iParam1, iParam2, iParam3)) {
				uParam0->f_5 = 0;
			}
		}
		break;

	case 3:
		if (gameplay::get_game_timer() - uParam0->f_4 > 500) {
			if (uParam0->f_6 == 0) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
					if (func_261(iParam1, iParam2, iParam3)) {
						uParam0->f_5 = 0;
					}
				}
				else if (func_260(iParam1, iParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) || func_260(iParam1, iParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2) {
				if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
					ai::get_is_task_active(player::player_ped_id(), 2)) {
					uParam0->f_5 = 0;
				}
				else if (func_261(iParam1, iParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
		}
		break;

	case 4:
		if (!func_262(uParam0)) {
			uParam0->f_5 = 0;
		}
		break;
	}
	if (!func_271(iParam1, iParam2, iParam3)) {
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7) {
		func_259();
		return 1;
	}
	else {
		return 0;
	}
	return 0;
}

// Position - 0x16E06
void func_259() { gameplay::set_bit(&G_SleepModeOffOn11, 4); }

// Position - 0x16E16
bool func_260(int iParam0, int iParam1, int iParam2) {
	if (!func_271(iParam0, iParam1, iParam2)) {
		return false;
	}
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!player::is_player_targetting_anything(player::player_id())) {
			controls::disable_control_action(0, 140, 1);
			controls::disable_control_action(0, 80, 1);
			if (controls::is_disabled_control_just_released(0, 80)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x16E68
bool func_261(int iParam0, int iParam1, int iParam2) {
	if (!func_271(iParam0, iParam1, iParam2)) {
		return false;
	}
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		controls::disable_control_action(0, 80, 1);
		if (cam::is_follow_vehicle_cam_active()) {
			if (controls::is_disabled_control_just_released(0, 80)) {
				cam::set_cinematic_button_active(0);
				return true;
			}
		}
	}
	return false;
}

// Position - 0x16EB1
bool func_262(var *uParam0) {
	int iVar0;

	if (uParam0->f_2 > 0) {
		iVar0 = uParam0->f_10 / 2;
		if (uParam0->f_2 + iVar0 > gameplay::get_game_timer()) {
			return true;
		}
	}
	return false;
}

// Position - 0x16EDC
bool func_263(int iParam0, int iParam1, int iParam2) {
	if (!func_271(iParam0, iParam1, iParam2)) {
		return false;
	}
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!player::is_player_targetting_anything(player::player_id())) {
			controls::disable_control_action(0, 140, 1);
			controls::disable_control_action(0, 80, 1);
			if (controls::is_disabled_control_pressed(0, 80) && gameplay::get_game_timer() > Global_116) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x16F3B
bool func_264(int iParam0, int iParam1, int iParam2) {
	if (!func_271(iParam0, iParam1, iParam2)) {
		return false;
	}
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		controls::disable_control_action(0, 80, 1);
		if (cam::is_follow_vehicle_cam_active()) {
			if (controls::is_disabled_control_pressed(0, 80) && gameplay::get_game_timer() > Global_116) {
				cam::set_cinematic_button_active(0);
				return true;
			}
		}
	}
	return false;
}

// Position - 0x16F91
void func_265(int iParam0) {
	if (iParam0) {
		func_269();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
			gameplay::set_bit(&G_SleepModeOffOn11, 16);
		}
		Global_14443.f_1 = 1;
		if (func_268(0)) {
			func_266(0);
		}
	}
	else if (Global_14443.f_1 == 1) {
		if (Global_14443.f_1 != 0) {
			Global_14443.f_1 = 3;
		}
	}
}

// Position - 0x16FF4
void func_266(int iParam0) {
	if (Global_14604) {
		func_267(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
		gameplay::set_bit(&G_SleepModeOffOn11, 16);
	}
	if (audio::is_mobile_phone_call_ongoing()) {
		audio::stop_scripted_conversation(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1) {
		gameplay::set_bit(&G_SleepModeOnOn25, 30);
	}
	else {
		gameplay::clear_bit(&G_SleepModeOnOn25, 30);
	}
	if (!func_203()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x17064
void func_267(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_268(0)) {
			Global_14604 = 1;
			if (iParam1) {
				mobile::get_mobile_phone_position(&Global_14380);
			}
			Global_14371 = {Global_14389[Global_14388 /*3*/]};
			mobile::set_mobile_phone_position(Global_14371);
		}
	}
	else if (Global_14604 == 1) {
		Global_14604 = 0;
		Global_14371 = {Global_14396[Global_14388 /*3*/]};
		if (iParam1) {
			mobile::set_mobile_phone_position(Global_14380);
		}
		else {
			mobile::set_mobile_phone_position(Global_14371);
		}
	}
}

// Position - 0x170D8
bool func_268(int iParam0) {
	if (iParam0 == 1) {
		if (Global_14443.f_1 > 3) {
			if (gameplay::is_bit_set(G_SleepModeOnOn25, 14)) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) > 0) {
		return true;
	}
	if (Global_14443.f_1 > 3) {
		return true;
	}
	return false;
}

// Position - 0x17132
void func_269() {
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10) {
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

// Position - 0x1715B
void func_270(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x17172
int func_271(int iParam0, int iParam1, int iParam2) {
	if (iParam0) {
		if (!player::is_player_control_on(player::player_id())) {
			return 0;
		}
	}
	if (iParam2) {
		return 1;
	}
	if (streaming::is_player_switch_in_progress()) {
		return 0;
	}
	if (func_268(0)) {
		return 0;
	}
	if (func_272()) {
		return 0;
	}
	if (network::_network_is_text_chat_active()) {
		return 0;
	}
	if (G_DisableMessagesAndCalls2) {
		return 0;
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("appinternet")) > 0) {
		return 0;
	}
	if (Global_53003) {
		return 0;
	}
	if (iParam1) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
			if (ped::is_ped_in_any_boat(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(3) == 3 || cam::_0xEE778F8C7E1142E2(3) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_in_any_heli(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(6) == 3 || cam::_0xEE778F8C7E1142E2(6) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_in_any_plane(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(4) == 3 || cam::_0xEE778F8C7E1142E2(4) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_in_any_sub(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(5) == 3 || cam::_0xEE778F8C7E1142E2(5) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_on_any_bike(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(2) == 3 || cam::_0xEE778F8C7E1142E2(2) == 4) {
					return 0;
				}
			}
			else if (cam::get_follow_vehicle_cam_view_mode() == 3 || cam::get_follow_vehicle_cam_view_mode() == 4) {
				return 0;
			}
			if (cam::is_gameplay_cam_looking_behind()) {
				return 0;
			}
		}
	}
	return 1;
}

// Position - 0x172EE
bool func_272() { return gameplay::get_game_timer() <= Global_17290.f_5745 + 100; }

// Position - 0x17303
void func_273(int iParam0, int iParam1, float fParam2) {
	vector3 vVar0;
	vector3 vVar3;

	if (!entity::is_entity_dead(iParam1, 0)) {
		if (vehicle::is_playback_going_on_for_vehicle(iParam1)) {
			vehicle::set_playback_speed(iParam1, fParam2);
			vVar0 = {entity::get_entity_coords(iParam1, 1)};
			vVar3 = {entity::get_entity_rotation(iParam1, 2)};
			cam::set_cam_coord(iParam0, vVar0);
			cam::set_cam_rot(iParam0, vVar3, 2);
		}
	}
}

// Position - 0x17352
void func_274(int iParam0, int iParam1, char *sParam2, int iParam3) {
	vector3 vVar0;

	if (!entity::is_entity_dead(iParam1, 0)) {
		entity::set_entity_visible(iParam1, 0, 0);
		entity::set_entity_collision(iParam1, 0, 0);
		entity::set_entity_invincible(iParam1, 1);
		entity::set_entity_proofs(iParam1, 1, 1, 1, 1, 1, 0, 0, 0);
		vehicle::start_playback_recorded_vehicle(iParam1, iParam3, sParam2, 1);
		vVar0 = {entity::get_entity_coords(iParam1, 1)};
		cam::set_cam_coord(iParam0, vVar0);
		cam::set_cam_rot(iParam0, entity::get_entity_rotation(iParam1, 2), 2);
	}
}

// Position - 0x173BB
void func_275() {
	if (iLocal_3218 != -1) {
		if (iLocal_3389 == 1) {
			if (iLocal_3381 == 0) {
				audio::release_sound_id(iLocal_3218);
				iLocal_3391 = 0;
				iLocal_3381 = 1;
			}
		}
	}
	if (iLocal_3213 != -1) {
		if (iLocal_3385 == 1) {
			if (iLocal_3383 == 0) {
				audio::release_sound_id(iLocal_3213);
				iLocal_3392 = 0;
				iLocal_3383 = 1;
			}
		}
	}
	if (iLocal_3214 != -1) {
		if (iLocal_3390 == 1) {
			if (iLocal_3372 == 0) {
				audio::release_sound_id(iLocal_3214);
				iLocal_3393 = 0;
				iLocal_3372 = 1;
			}
		}
	}
	if (iLocal_3215 != -1) {
		if (iLocal_3386 == 1) {
			if (iLocal_3382 == 0) {
				audio::release_sound_id(iLocal_3215);
				iLocal_3394 = 0;
				iLocal_3382 = 1;
			}
		}
	}
	if (iLocal_3216 != -1) {
		if (iLocal_3387 == 1) {
			if (iLocal_3384 == 0) {
				audio::release_sound_id(iLocal_3216);
				iLocal_3395 = 0;
				iLocal_3384 = 1;
			}
		}
	}
}

// Position - 0x17477
void func_276() {
	if (entity::does_entity_exist(iLocal_3121[19])) {
		if (!entity::is_entity_dead(iLocal_3121[19], 0)) {
			if (!vehicle::is_vehicle_siren_on(iLocal_3121[19])) {
				vehicle::set_vehicle_siren(iLocal_3121[19], 1);
			}
		}
	}
	if (entity::does_entity_exist(iLocal_3121[7])) {
		if (!entity::is_entity_dead(iLocal_3121[7], 0)) {
			if (!vehicle::is_vehicle_siren_on(iLocal_3121[7])) {
				vehicle::set_vehicle_siren(iLocal_3121[7], 1);
			}
		}
	}
	if (entity::does_entity_exist(iLocal_3121[8])) {
		if (!entity::is_entity_dead(iLocal_3121[8], 0)) {
			if (!vehicle::is_vehicle_siren_on(iLocal_3121[8])) {
				vehicle::set_vehicle_siren(iLocal_3121[8], 1);
			}
		}
	}
	if (entity::does_entity_exist(iLocal_3121[9])) {
		if (!entity::is_entity_dead(iLocal_3121[9], 0)) {
			if (!vehicle::is_vehicle_siren_on(iLocal_3121[9])) {
				vehicle::set_vehicle_siren(iLocal_3121[9], 1);
			}
		}
	}
	if (entity::does_entity_exist(iLocal_3121[10])) {
		if (!entity::is_entity_dead(iLocal_3121[10], 0)) {
			if (!vehicle::is_vehicle_siren_on(iLocal_3121[10])) {
				vehicle::set_vehicle_siren(iLocal_3121[10], 1);
			}
		}
	}
	if (entity::does_entity_exist(iLocal_3121[11])) {
		if (!entity::is_entity_dead(iLocal_3121[11], 0)) {
			if (!vehicle::is_vehicle_siren_on(iLocal_3121[11])) {
				vehicle::set_vehicle_siren(iLocal_3121[11], 1);
			}
		}
	}
	if (entity::does_entity_exist(iLocal_3121[13])) {
		if (!entity::is_entity_dead(iLocal_3121[13], 0)) {
			if (!vehicle::is_vehicle_siren_on(iLocal_3121[13])) {
				vehicle::set_vehicle_siren(iLocal_3121[13], 1);
			}
		}
	}
	if (entity::does_entity_exist(iLocal_3121[14])) {
		if (!entity::is_entity_dead(iLocal_3121[14], 0)) {
			if (!vehicle::is_vehicle_siren_on(iLocal_3121[14])) {
				vehicle::set_vehicle_siren(iLocal_3121[14], 1);
			}
		}
	}
	if (entity::does_entity_exist(iLocal_3121[15])) {
		if (!entity::is_entity_dead(iLocal_3121[15], 0)) {
			if (!vehicle::is_vehicle_siren_on(iLocal_3121[15])) {
				vehicle::set_vehicle_siren(iLocal_3121[15], 1);
			}
		}
	}
	if (entity::does_entity_exist(iLocal_3121[16])) {
		if (!entity::is_entity_dead(iLocal_3121[16], 0)) {
			if (!vehicle::is_vehicle_siren_on(iLocal_3121[16])) {
				vehicle::set_vehicle_siren(iLocal_3121[16], 1);
			}
		}
	}
	if (entity::does_entity_exist(iLocal_3121[17])) {
		if (!entity::is_entity_dead(iLocal_3121[17], 0)) {
			if (!vehicle::is_vehicle_siren_on(iLocal_3121[17])) {
				vehicle::set_vehicle_siren(iLocal_3121[17], 1);
			}
		}
	}
}

// Position - 0x176EE
void func_277() {
	if (func_308()) {
		fLocal_3324 = 0.5f;
	}
	else if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (vehicle::_0x53AF99BAA671CA47(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0)) > 40f) {
			fLocal_3324 = 0.85f;
		}
		else {
			fLocal_3324 = 0.9f;
		}
	}
	else {
		fLocal_3324 = 0.9f;
	}
	if (!entity::is_entity_dead(iLocal_3258, 0)) {
		if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
			if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
				if (iLocal_3359 == 0) {
					if (vehicle::get_time_position_in_recording(iLocal_3258) < 10000f) {
						if (func_16(player::player_ped_id(), iLocal_3258, 1) < 100f ||
							entity::is_entity_on_screen(iLocal_3258)) {
							func_304(iLocal_3258, player::player_ped_id(), &fLocal_3323, 1f, 40f, 55f, 100f, 1.7f, 1f,
									 fLocal_3324, 0);
							vehicle::set_playback_speed(iLocal_3258, fLocal_3323);
							func_278(iLocal_3258, fLocal_3323);
						}
						else {
							func_304(iLocal_3258, player::player_ped_id(), &fLocal_3323, 0.6f, 40f, 50f, 60f, 1.7f, 1f,
									 fLocal_3324, 0);
							vehicle::set_playback_speed(iLocal_3258, fLocal_3323);
							func_278(iLocal_3258, fLocal_3323);
						}
					}
				}
				else if (func_16(player::player_ped_id(), iLocal_3258, 1) > 175f) {
					fLocal_3323 = 0.6f;
					vehicle::set_playback_speed(iLocal_3258, fLocal_3323);
					func_278(iLocal_3258, fLocal_3323);
				}
				else if (vehicle::get_time_position_in_recording(iLocal_3258) < 10000f) {
					func_304(iLocal_3258, player::player_ped_id(), &fLocal_3323, 1f, 25f, 40f, 180f, 1.7f, 1f,
							 fLocal_3324, 0);
					vehicle::set_playback_speed(iLocal_3258, fLocal_3323);
					func_278(iLocal_3258, fLocal_3323);
				}
				if (vehicle::get_time_position_in_recording(iLocal_3258) > 10000f &&
					vehicle::get_time_position_in_recording(iLocal_3258) < 23000f) {
					if (vehicle::is_vehicle_driveable(iLocal_3121[8], 0)) {
						func_304(iLocal_3121[8], player::player_ped_id(), &fLocal_3323, 1f, 25f, 30f, 50f, 1.7f, 0.5f,
								 fLocal_3324, 1);
						vehicle::set_playback_speed(iLocal_3258, fLocal_3323);
						func_278(iLocal_3258, fLocal_3323);
					}
					else {
						func_304(iLocal_3258, player::player_ped_id(), &fLocal_3323, 1f, 25f, 35f, 180f, 1.7f, 0.5f,
								 fLocal_3324, 1);
						vehicle::set_playback_speed(iLocal_3258, fLocal_3323);
						func_278(iLocal_3258, fLocal_3323);
					}
				}
				if (vehicle::get_time_position_in_recording(iLocal_3258) > 23000f &&
					vehicle::get_time_position_in_recording(iLocal_3258) < 32000f) {
					if (entity::does_entity_exist(iLocal_3121[7])) {
						if (vehicle::is_vehicle_driveable(iLocal_3121[7], 0)) {
							func_304(iLocal_3121[7], player::player_ped_id(), &fLocal_3323, 1f, 20f, 30f, 100f, 1.8f,
									 1f, fLocal_3324, 0);
							vehicle::set_playback_speed(iLocal_3258, fLocal_3323);
							func_278(iLocal_3258, fLocal_3323);
						}
						else if (entity::does_entity_exist(iLocal_3121[8])) {
							if (vehicle::is_vehicle_driveable(iLocal_3121[8], 0)) {
								func_304(iLocal_3121[8], player::player_ped_id(), &fLocal_3323, 1f, 10f, 20f, 40f, 1.8f,
										 1f, fLocal_3324, 0);
								vehicle::set_playback_speed(iLocal_3258, fLocal_3323);
								func_278(iLocal_3258, fLocal_3323);
							}
							else {
								func_304(iLocal_3258, player::player_ped_id(), &fLocal_3323, 1f, 25f, 40f, 100f, 1.8f,
										 1f, fLocal_3324, 0);
								vehicle::set_playback_speed(iLocal_3258, fLocal_3323);
								func_278(iLocal_3258, fLocal_3323);
							}
						}
						else {
							func_304(iLocal_3258, player::player_ped_id(), &fLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f,
									 fLocal_3324, 0);
							vehicle::set_playback_speed(iLocal_3258, fLocal_3323);
							func_278(iLocal_3258, fLocal_3323);
						}
					}
					else if (entity::does_entity_exist(iLocal_3121[8])) {
						if (vehicle::is_vehicle_driveable(iLocal_3121[8], 0)) {
							func_304(iLocal_3121[8], player::player_ped_id(), &fLocal_3323, 1f, 10f, 20f, 40f, 1.8f, 1f,
									 fLocal_3324, 0);
							vehicle::set_playback_speed(iLocal_3258, fLocal_3323);
							func_278(iLocal_3258, fLocal_3323);
						}
						else {
							func_304(iLocal_3258, player::player_ped_id(), &fLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f,
									 fLocal_3324, 0);
							vehicle::set_playback_speed(iLocal_3258, fLocal_3323);
							func_278(iLocal_3258, fLocal_3323);
						}
					}
					else {
						func_304(iLocal_3258, player::player_ped_id(), &fLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f,
								 fLocal_3324, 0);
						vehicle::set_playback_speed(iLocal_3258, fLocal_3323);
						func_278(iLocal_3258, fLocal_3323);
					}
				}
				if (vehicle::get_time_position_in_recording(iLocal_3258) > 32000f &&
					vehicle::get_time_position_in_recording(iLocal_3258) < 39000f) {
					if (entity::does_entity_exist(iLocal_3121[7])) {
						if (vehicle::is_vehicle_driveable(iLocal_3121[7], 0)) {
							func_304(iLocal_3121[7], player::player_ped_id(), &fLocal_3323, 1f, 22f, 25f, 100f, 1.8f,
									 0.5f, fLocal_3324, 1);
							vehicle::set_playback_speed(iLocal_3258, fLocal_3323);
							func_278(iLocal_3258, fLocal_3323);
						}
						else {
							func_304(iLocal_3258, player::player_ped_id(), &fLocal_3323, 1f, 25f, 35f, 150f, 1.8f, 0.5f,
									 fLocal_3324, 1);
							vehicle::set_playback_speed(iLocal_3258, fLocal_3323);
							func_278(iLocal_3258, fLocal_3323);
						}
					}
					else {
						func_304(iLocal_3258, player::player_ped_id(), &fLocal_3323, 1f, 25f, 35f, 150f, 1.8f, 0.5f,
								 fLocal_3324, 1);
						vehicle::set_playback_speed(iLocal_3258, fLocal_3323);
						func_278(iLocal_3258, fLocal_3323);
					}
				}
				if (vehicle::get_time_position_in_recording(iLocal_3258) > 39000f &&
					vehicle::get_time_position_in_recording(iLocal_3258) < 56000f) {
					if (vehicle::is_vehicle_driveable(iLocal_3121[8], 0)) {
						func_304(iLocal_3121[8], player::player_ped_id(), &fLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f,
								 fLocal_3324, 0);
						vehicle::set_playback_speed(iLocal_3258, fLocal_3323);
						func_278(iLocal_3258, fLocal_3323);
					}
					else {
						func_304(iLocal_3258, player::player_ped_id(), &fLocal_3323, 1f, 25f, 35f, 150f, 1.8f, 1f,
								 fLocal_3324, 0);
						vehicle::set_playback_speed(iLocal_3258, fLocal_3323);
						func_278(iLocal_3258, fLocal_3323);
					}
				}
				if (vehicle::get_time_position_in_recording(iLocal_3258) > 56000f &&
					vehicle::get_time_position_in_recording(iLocal_3258) < 65000f) {
					if (vehicle::is_vehicle_driveable(iLocal_3121[11], 0)) {
						func_304(iLocal_3121[11], player::player_ped_id(), &fLocal_3323, 1f, 25f, 30f, 100f, 1.8f, 1f,
								 fLocal_3324, 0);
						vehicle::set_playback_speed(iLocal_3258, fLocal_3323);
						func_278(iLocal_3258, fLocal_3323);
					}
					else {
						func_304(iLocal_3258, player::player_ped_id(), &fLocal_3323, 1f, 25f, 35f, 100f, 1.8f, 1f,
								 fLocal_3324, 0);
						vehicle::set_playback_speed(iLocal_3258, fLocal_3323);
						func_278(iLocal_3258, fLocal_3323);
					}
				}
				if (vehicle::get_time_position_in_recording(iLocal_3258) > 65000f &&
					vehicle::get_time_position_in_recording(iLocal_3258) < 90000f) {
					if (entity::does_entity_exist(iLocal_3121[13])) {
						if (vehicle::is_vehicle_driveable(iLocal_3121[13], 0)) {
							func_304(iLocal_3121[13], player::player_ped_id(), &fLocal_3323, 1f, 30f, 35f, 50f, 1.8f,
									 1f, fLocal_3324, 0);
							vehicle::set_playback_speed(iLocal_3258, fLocal_3323);
							func_278(iLocal_3258, fLocal_3323);
						}
						else {
							func_304(iLocal_3258, player::player_ped_id(), &fLocal_3323, 1f, 45f, 55f, 150f, 1.8f, 1f,
									 fLocal_3324, 0);
							vehicle::set_playback_speed(iLocal_3258, fLocal_3323);
							func_278(iLocal_3258, fLocal_3323);
						}
					}
					else {
						func_304(iLocal_3258, player::player_ped_id(), &fLocal_3323, 1f, 45f, 55f, 150f, 1.8f, 1f,
								 fLocal_3324, 0);
						vehicle::set_playback_speed(iLocal_3258, fLocal_3323);
						func_278(iLocal_3258, fLocal_3323);
					}
				}
				if (vehicle::get_time_position_in_recording(iLocal_3258) > 90000f &&
					vehicle::get_time_position_in_recording(iLocal_3258) < 110000f) {
					func_304(iLocal_3258, player::player_ped_id(), &fLocal_3323, 1f, 60f, 70f, 150f, 1.5f, 0.5f,
							 fLocal_3324, 1);
					vehicle::set_playback_speed(iLocal_3258, fLocal_3323);
					func_278(iLocal_3258, fLocal_3323);
				}
				if (vehicle::get_time_position_in_recording(iLocal_3258) > 110000f) {
					func_304(iLocal_3258, player::player_ped_id(), &fLocal_3323, 1f, 100f, 120f, 150f, 1.6f, 1f,
							 fLocal_3324, 0);
					vehicle::set_playback_speed(iLocal_3258, fLocal_3323);
					func_278(iLocal_3258, fLocal_3323);
				}
			}
		}
	}
}

// Position - 0x17FA5
void func_278(int iParam0, float fParam1) {
	float fVar0;
	vector3 vVar1;
	int iVar4;

	fVar0 = gameplay::get_frame_time();
	fVar0 *= 1000f;
	iLocal_106 = 0;
	if (!iLocal_88) {
		if (bLocal_87) {
			func_303();
			if (player::is_player_playing(player::player_id())) {
				vVar1 = {entity::get_entity_coords(player::player_ped_id(), 1)};
				gameplay::clear_area(vVar1, 1000f, 1, 0, 0, 0);
			}
			iLocal_88 = 1;
		}
	}
	else if (!bLocal_87) {
		func_185();
		iLocal_88 = 0;
	}
	if (bLocal_87) {
		fParam1 = 1f;
		vehicle::set_vehicle_density_multiplier_this_frame(0f);
	}
	if (!bLocal_81) {
		if (iLocal_76) {
			fLocal_1278 = 0f;
		}
		else {
			fLocal_1278 = 1f;
		}
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (vehicle::is_playback_going_on_for_vehicle(iParam0)) {
				if (player::is_player_playing(player::player_id())) {
					if (func_302(player::player_ped_id(), iParam0)) {
						iLocal_86 = 1;
					}
					else {
						iLocal_86 = 0;
					}
				}
				fLocal_1275 = vehicle::get_time_position_in_recording(iParam0);
				vehicle::set_playback_speed(iParam0, fParam1 * fLocal_1276 * fLocal_1278);
				if (bLocal_85) {
					func_301(iParam0, fLocal_1275);
					func_300(iParam0, fLocal_1285);
					if (fLocal_1280 > 1000f) {
						if (iLocal_1962 == 0) {
							func_299(iParam0, fLocal_1285);
						}
						fVar0 = fLocal_1275 + 4000f + system::to_float(iLocal_1962) * 2000f;
						func_298(iParam0, fVar0, fLocal_1279);
						iLocal_1962++;
						if (iLocal_1962 > 2) {
							fLocal_1280 = 0f;
						}
					}
					else {
						iLocal_1962 = 0;
						fLocal_1280 += gameplay::get_frame_time() * 1000f;
					}
				}
			}
		}
		iVar4 = 0;
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (vehicle::is_playback_going_on_for_vehicle(iParam0)) {
				iVar4 = 1;
			}
		}
		if (fLocal_1275 == 0f || cam::is_screen_faded_out()) {
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_93) {
			if (!iLocal_75) {
				func_295(iParam0, fParam1 * fLocal_1276 * fLocal_1278, 0);
				if (!iLocal_96) {
				}
				iLocal_96 = 0;
			}
			if (bLocal_78) {
				func_294(iParam0);
			}
			if (!iLocal_75) {
				func_281(iParam0, fParam1 * fLocal_1276 * fLocal_1278, 0);
			}
		}
		if (iLocal_83) {
			if (player::is_player_playing(player::player_id())) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
					iLocal_3164 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
					vLocal_2641 = {entity::get_entity_coords(iLocal_3164, 1)};
					entity::get_entity_quaternion(iLocal_3164, &fLocal_989, &fLocal_990, &fLocal_991, &fLocal_992);
				}
			}
			iLocal_83 = 0;
		}
		if (iLocal_82) {
			if (entity::does_entity_exist(iLocal_3164)) {
				func_177(iLocal_3165);
				iLocal_3165 = iLocal_3164;
			}
			if (vehicle::is_vehicle_driveable(iLocal_3165, 0)) {
				entity::set_entity_coords(iLocal_3165, vLocal_2641, 1, 0, 0, 1);
				entity::set_entity_quaternion(iLocal_3165, fLocal_989, fLocal_990, fLocal_991, fLocal_992);
			}
			fLocal_1274 = fLocal_1277;
			iLocal_75 = 1;
			iLocal_82 = 0;
		}
		if (iLocal_75) {
			while (!func_279(&iParam0, fLocal_1274)) {
				system::wait(0);
			}
			iLocal_76 = 1;
		}
		if (iLocal_89) {
			iLocal_89 = 0;
		}
	}
}

// Position - 0x18242
int func_279(int iParam0, float fParam1) {
	if (!iLocal_90) {
		iLocal_75 = 1;
		func_172();
		if (vehicle::is_vehicle_driveable(*iParam0, 0)) {
			if (vehicle::is_playback_going_on_for_vehicle(*iParam0)) {
				vehicle::stop_playback_recorded_vehicle(*iParam0);
				vehicle::set_vehicle_fixed(*iParam0);
			}
			if (iLocal_1949 != -1) {
				while (!func_280(iParam0, iLocal_1949, fParam1, 1, 0, 0, 0, 0)) {
					system::wait(0);
				}
				if (!bLocal_80) {
					iLocal_76 = 1;
					fLocal_1278 = 0f;
					iLocal_1950 = 0;
					iLocal_1952 = 0;
					iLocal_1951 = 0;
					iLocal_1946 = 0;
					iLocal_1947 = 0;
					iLocal_1948 = 0;
					iLocal_1953 = 0;
					iLocal_1954 = 0;
					iLocal_1955 = 0;
				}
			}
		}
		iLocal_90 = 1;
	}
	else {
		if (vehicle::is_vehicle_driveable(*iParam0, 0)) {
			if (vehicle::is_playback_going_on_for_vehicle(*iParam0)) {
				vehicle::set_playback_speed(*iParam0, 1f * fLocal_1276 * fLocal_1278);
				func_280(iParam0, iLocal_1949, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_1275 = fParam1;
		iLocal_1956 = 0;
		iLocal_1959 = 0;
		fLocal_1290 = 0f;
		fLocal_1289 = 0f;
		func_281(*iParam0, 1f * fLocal_1276 * fLocal_1278, 1);
		func_295(*iParam0, 1f * fLocal_1276 * fLocal_1278, 1);
		func_294(*iParam0);
		if (iLocal_1953 == 0 && iLocal_1954 == 0 && iLocal_1955 == 0) {
			iLocal_76 = 0;
			iLocal_75 = 0;
			iLocal_90 = 0;
			return 1;
		}
	}
	return 0;
}

// Position - 0x18374
bool func_280(var *uParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6,
			  int iParam7) {
	float fVar0;

	if (iParam1 > 0) {
		vehicle::request_vehicle_recording(iParam1, &cLocal_2668);
		if (vehicle::has_vehicle_recording_been_loaded(iParam1, &cLocal_2668)) {
			if (vehicle::is_vehicle_driveable(*uParam0, 0)) {
				if (!vehicle::is_playback_going_on_for_vehicle(*uParam0)) {
					entity::freeze_entity_position(*uParam0, 0);
					if (iParam4) {
						vehicle::start_playback_recorded_vehicle_using_ai(*uParam0, iParam1, &cLocal_2668, 10f, 786603);
					}
					else {
						if (iParam1 != iLocal_1957 && iParam1 != iLocal_1958) {
							if (iParam7) {
								vehicle::start_playback_recorded_vehicle_with_flags(*uParam0, iParam1, &cLocal_2668,
																					2 | 4, 0, 786603);
							}
							else if (iParam6) {
								vehicle::start_playback_recorded_vehicle_with_flags(*uParam0, iParam1, &cLocal_2668,
																					1 | 4, 0, 786603);
							}
							else {
								vehicle::start_playback_recorded_vehicle(*uParam0, iParam1, &cLocal_2668, 1);
							}
						}
						else {
							vehicle::start_playback_recorded_vehicle(*uParam0, iParam1, &cLocal_2668, 1);
						}
						vehicle::skip_time_in_playback_recorded_vehicle(*uParam0, fParam2);
						if (iParam5) {
							vehicle::_0x1F2E4E06DEA8992B(*uParam0, 1);
						}
						return true;
					}
				}
				else if (vehicle::get_current_playback_for_vehicle(*uParam0) ==
						 vehicle::get_vehicle_recording_id(iParam1, &cLocal_2668)) {
					fVar0 = vehicle::get_time_position_in_recording(*uParam0);
					vehicle::skip_time_in_playback_recorded_vehicle(*uParam0, fParam2 - fVar0);
					if (!iParam3) {
						vehicle::stop_playback_recorded_vehicle(*uParam0);
						vehicle::request_vehicle_recording(iParam1, &cLocal_2668);
					}
					if (iParam5) {
						vehicle::_0x1F2E4E06DEA8992B(*uParam0, 1);
					}
					return true;
				}
				else {
					vehicle::stop_playback_recorded_vehicle(*uParam0);
					entity::freeze_entity_position(*uParam0, 0);
					if (iParam4) {
						vehicle::start_playback_recorded_vehicle_using_ai(*uParam0, iParam1, &cLocal_2668, 10f, 786603);
					}
					else if (iParam1 != iLocal_1957 && iParam1 != iLocal_1958) {
						if (iParam7) {
							vehicle::start_playback_recorded_vehicle_with_flags(*uParam0, iParam1, &cLocal_2668, 2 | 4,
																				0, 786603);
						}
						else if (iParam6) {
							vehicle::start_playback_recorded_vehicle_with_flags(*uParam0, iParam1, &cLocal_2668, 1 | 4,
																				0, 786603);
						}
						else {
							vehicle::start_playback_recorded_vehicle(*uParam0, iParam1, &cLocal_2668, 1);
						}
					}
					else {
						vehicle::start_playback_recorded_vehicle(*uParam0, iParam1, &cLocal_2668, 1);
					}
					vehicle::skip_time_in_playback_recorded_vehicle(*uParam0, fParam2);
					if (iParam5) {
						vehicle::_0x1F2E4E06DEA8992B(*uParam0, 1);
					}
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0x1855A
void func_281(int iParam0, float fParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	bool bVar14;
	bool bVar15;
	var uVar16;
	var uVar17;
	int iVar18;
	int iVar19;
	int iVar20;

	bVar15 = player::is_player_playing(player::player_id());
	uVar16 = ped::can_create_random_driver();
	uVar17 = ped::can_create_random_bike_rider();
	iVar18 = 0;
	if (bVar15) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			iVar2 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
		}
		vVar9 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	}
	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		iVar0 = iLocal_1952;
		while (iVar0 < 35) {
			if (iLocal_1858[iVar0] != 99) {
				if (iLocal_1858[iVar0] == 0) {
					if (iLocal_1822[iVar0] > 0) {
						if (!iLocal_75) {
							if (fLocal_1275 > fLocal_1137[iVar0] - 7000f * fParam1) {
								if (func_293(iLocal_2877[iVar0])) {
									gameplay::set_bit(&iLocal_1894[iVar0], 0);
								}
								else if (vehicle::is_this_model_a_bike(iLocal_2877[iVar0])) {
									gameplay::set_bit(&iLocal_1894[iVar0], 2);
								}
								gameplay::clear_bit(&iLocal_1894[iVar0], 1);
								iLocal_1858[iVar0]++;
								iLocal_1954++;
							}
						}
						else {
							fVar12 = fLocal_1275 - fLocal_1137[iVar0];
							fVar12 *= fLocal_1173[iVar0];
							if (fVar12 >= 0f) {
								if (fVar12 < func_292(iLocal_1822[iVar0])) {
									if (func_293(iLocal_2877[iVar0])) {
										gameplay::set_bit(&iLocal_1894[iVar0], 0);
									}
									else if (vehicle::is_this_model_a_bike(iLocal_2877[iVar0])) {
										gameplay::set_bit(&iLocal_1894[iVar0], 2);
									}
									gameplay::clear_bit(&iLocal_1894[iVar0], 1);
									iLocal_1858[iVar0]++;
									iLocal_1954++;
								}
								else {
									iLocal_1858[iVar0] = 99;
								}
							}
						}
					}
					else {
						iLocal_1858[iVar0] = 99;
					}
				}
				else if (iLocal_1858[iVar0] == 1) {
					bVar14 = false;
					vehicle::request_vehicle_recording(iLocal_1822[iVar0], &cLocal_2668);
					if (gameplay::is_bit_set(iLocal_1894[iVar0], 0)) {
						streaming::request_model(func_181());
						bVar14 = streaming::has_model_loaded(func_181());
					}
					else if (!bLocal_102 && (!gameplay::is_bit_set(iLocal_1894[iVar0], 2) && uVar16 ||
											 gameplay::is_bit_set(iLocal_1894[iVar0], 2) && uVar17)) {
						bVar14 = true;
					}
					else {
						streaming::request_model(func_184());
						bVar14 = streaming::has_model_loaded(func_184());
					}
					if (bVar14) {
						if (!entity::does_entity_exist(iLocal_3121[iVar0])) {
							streaming::request_model(iLocal_2877[iVar0]);
							if (streaming::has_model_loaded(iLocal_2877[iVar0]) &&
								vehicle::has_vehicle_recording_been_loaded(iLocal_1822[iVar0], &cLocal_2668)) {
								if (fLocal_1275 >= fLocal_1137[iVar0] - fLocal_1288 * fParam1) {
									if (iLocal_89 || iParam2 ||
										!iLocal_106 && !func_291(vLocal_2535[iVar0 /*3*/], vVar9, 5f, fLocal_1286)) {
										if (bLocal_85) {
											func_290(vLocal_2535[iVar0 /*3*/], vVar9, fLocal_1279);
										}
										iLocal_3121[iVar0] = vehicle::create_vehicle(
											iLocal_2877[iVar0], vLocal_2535[iVar0 /*3*/], 0f, 0, 0);
										if (iLocal_2877[iVar0] == joaat("polmav")) {
											vehicle::set_vehicle_livery(iLocal_3121[iVar0], 0);
										}
										if (uLocal_98 && !gameplay::is_bit_set(iLocal_1894[iVar0], 0)) {
											func_289(iLocal_3121[iVar0]);
										}
										if (gameplay::is_bit_set(iLocal_1894[iVar0], 3)) {
											entity::_set_entity_register(iLocal_3121[iVar0], 1);
										}
										entity::set_entity_coords_no_offset(iLocal_3121[iVar0],
																			vLocal_2535[iVar0 /*3*/], 0, 0, 1);
										entity::set_entity_quaternion(iLocal_3121[iVar0], fLocal_993[iVar0],
																	  fLocal_1029[iVar0], fLocal_1065[iVar0],
																	  fLocal_1101[iVar0]);
										if (vehicle::is_this_model_a_car(iLocal_2877[iVar0]) ||
											vehicle::is_this_model_a_bike(iLocal_2877[iVar0])) {
											vehicle::set_vehicle_on_ground_properly(iLocal_3121[iVar0], 1084227584);
										}
										if (!gameplay::is_bit_set(iLocal_1894[iVar0], 0)) {
											vehicle::set_vehicle_engine_on(iLocal_3121[iVar0], 1, 1, 0);
											if (time::get_clock_hours() > 19 || time::get_clock_hours() < 7) {
												vehicle::set_vehicle_lights(iLocal_3121[iVar0], 3);
											}
										}
										entity::freeze_entity_position(iLocal_3121[iVar0], 1);
										streaming::set_model_as_no_longer_needed(iLocal_2877[iVar0]);
										iLocal_1954--;
										iLocal_1858[iVar0]++;
										iLocal_106 = 1;
									}
								}
							}
						}
						else if (!entity::is_entity_dead(iLocal_3121[iVar0], 0) &&
								 vehicle::is_vehicle_driveable(iLocal_3121[iVar0], 0)) {
							entity::set_entity_coords_no_offset(iLocal_3121[iVar0], vLocal_2535[iVar0 /*3*/], 0, 0, 1);
							entity::set_entity_quaternion(iLocal_3121[iVar0], fLocal_993[iVar0], fLocal_1029[iVar0],
														  fLocal_1065[iVar0], fLocal_1101[iVar0]);
							if (vehicle::is_this_model_a_car(iLocal_2877[iVar0]) ||
								vehicle::is_this_model_a_bike(iLocal_2877[iVar0])) {
								vehicle::set_vehicle_on_ground_properly(iLocal_3121[iVar0], 1084227584);
							}
							entity::freeze_entity_position(iLocal_3121[iVar0], 1);
							streaming::set_model_as_no_longer_needed(iLocal_2877[iVar0]);
							iLocal_1954--;
							iLocal_1858[iVar0]++;
						}
					}
				}
				else if (iLocal_1858[iVar0] == 2) {
					vehicle::request_vehicle_recording(iLocal_1822[iVar0], &cLocal_2668);
					if (!gameplay::is_bit_set(iLocal_1894[iVar0], 1)) {
						bVar14 = false;
						if (gameplay::is_bit_set(iLocal_1894[iVar0], 0)) {
							streaming::request_model(func_181());
							bVar14 = streaming::has_model_loaded(func_181());
							iVar19 = 2;
						}
						else if (!bLocal_102 && (!gameplay::is_bit_set(iLocal_1894[iVar0], 2) && uVar16 ||
												 gameplay::is_bit_set(iLocal_1894[iVar0], 2) && uVar17)) {
							bVar14 = true;
							iVar19 = 1;
						}
						else {
							streaming::request_model(func_184());
							bVar14 = streaming::has_model_loaded(func_184());
							iVar19 = 0;
						}
						if (!entity::is_entity_dead(iLocal_3121[iVar0], 0)) {
							if (!iLocal_106 && vehicle::is_vehicle_seat_free(iLocal_3121[iVar0], -1, 0)) {
								if (bVar14) {
									if (system::vdist2(entity::get_entity_coords(iLocal_3121[iVar0], 1), vVar9) <
											10000f ||
										iParam2 || iLocal_89) {
										func_287(&iLocal_3121[iVar0], iVar19, 1);
										gameplay::set_bit(&iLocal_1894[iVar0], 1);
									}
								}
							}
						}
					}
					if (vehicle::is_vehicle_driveable(iLocal_3121[iVar0], 0)) {
						if (fLocal_1275 >= fLocal_1137[iVar0]) {
							if (14 > iLocal_1947) {
								fVar12 = fLocal_1275 - fLocal_1137[iVar0];
								fVar12 *= fLocal_1173[iVar0];
								if (vehicle::has_vehicle_recording_been_loaded(iLocal_1822[iVar0], &cLocal_2668)) {
									if (fVar12 < vehicle::get_total_duration_of_vehicle_recording(iLocal_1822[iVar0],
																								  &cLocal_2668)) {
										vVar3 = {entity::get_entity_coords(iLocal_3121[iVar0], 1)};
										vVar6 = {vehicle::get_position_of_vehicle_recording_at_time(
											iLocal_1822[iVar0], fVar12, &cLocal_2668)};
										if (!func_291(vVar3, vVar9, 5f, fLocal_1286) &&
											func_291(vVar6, vVar9, 5f, fLocal_1286) && !iLocal_89 && !iParam2) {
											if (!gameplay::is_bit_set(iLocal_1894[iVar0], 1)) {
												func_287(&iLocal_3121[iVar0], iVar19, 1);
											}
											iLocal_1947++;
											iLocal_1858[iVar0]++;
										}
										else if (!iLocal_106 || gameplay::is_bit_set(iLocal_1894[iVar0], 1) ||
												 iLocal_89 || iParam2) {
											if (func_280(&iLocal_3121[iVar0], iLocal_1822[iVar0], fVar12, 1, 0, 0,
														 iLocal_104, bLocal_103)) {
												vehicle::set_playback_speed(iLocal_3121[iVar0],
																			fParam1 * fLocal_1173[iVar0]);
												if (vehicle::is_vehicle_driveable(iLocal_3121[iVar0], 0)) {
													if (gameplay::is_bit_set(iLocal_1894[iVar0], 0)) {
														vehicle::set_vehicle_engine_on(iLocal_3121[iVar0], 1, 1, 0);
														vehicle::set_vehicle_siren(iLocal_3121[iVar0], 1);
														vehicle::set_vehicle_lights(iLocal_3121[iVar0], 2);
														if (!vehicle::is_this_model_a_bike(iLocal_2877[iVar0])) {
															audio::set_siren_with_no_driver(iLocal_3121[iVar0], 1);
														}
													}
												}
												if (!gameplay::is_bit_set(iLocal_1894[iVar0], 1)) {
													func_287(&iLocal_3121[iVar0], iVar19, 1);
												}
												iLocal_1947++;
												iLocal_1858[iVar0]++;
											}
										}
									}
									else {
										if (!gameplay::is_bit_set(iLocal_1894[iVar0], 1)) {
											func_287(&iLocal_3121[iVar0], iVar19, 1);
										}
										iLocal_1947++;
										iLocal_1858[iVar0]++;
									}
								}
							}
							else {
								if (!gameplay::is_bit_set(iLocal_1894[iVar0], 1)) {
									func_287(&iLocal_3121[iVar0], iVar19, 1);
								}
								iLocal_1947++;
								iLocal_1858[iVar0]++;
							}
						}
					}
					else {
						if (!gameplay::is_bit_set(iLocal_1894[iVar0], 1)) {
							func_287(&iLocal_3121[iVar0], iVar19, 1);
						}
						iLocal_1947++;
						iLocal_1858[iVar0]++;
					}
				}
				else if (iLocal_1858[iVar0] == 3) {
					if (vehicle::is_vehicle_driveable(iLocal_3121[iVar0], 0)) {
						if (vehicle::is_playback_going_on_for_vehicle(iLocal_3121[iVar0])) {
							iVar1 = vehicle::get_ped_in_vehicle_seat(iLocal_3121[iVar0], -1, 0);
							if (!ped::is_ped_injured(iVar1)) {
								if (bVar15) {
									if (!bLocal_79 && !iLocal_76 && !iLocal_95 &&
										(!iLocal_104 && !bLocal_103 &&
											 entity::is_entity_touching_entity(player::player_ped_id(),
																			   iLocal_3121[iVar0]) ||
										 func_286(iLocal_3121[iVar0]))) {
										if (entity::does_entity_exist(iVar2)) {
											bVar14 = false;
											if (bLocal_97) {
												bVar14 = true;
											}
											else {
												fVar13 = entity::get_entity_speed(iVar2);
												if (fVar13 < 1f) {
													bVar14 = true;
												}
												else if (gameplay::absf(fVar13 - entity::get_entity_speed(
																					 iLocal_3121[iVar0])) > 15f) {
													bVar14 = true;
												}
												else if (!func_285(iLocal_3121[iVar0], iVar2, 45f)) {
													bVar14 = true;
												}
												else if (func_283(iVar2, iLocal_3121[iVar0], 0)) {
													bVar14 = true;
												}
											}
											if (bVar14) {
												func_282(iLocal_3121[iVar0]);
												iLocal_1858[iVar0]++;
											}
										}
									}
									else {
										vehicle::set_playback_speed(iLocal_3121[iVar0], fParam1 * fLocal_1173[iVar0]);
									}
								}
							}
							else {
								vehicle::stop_playback_recorded_vehicle(iLocal_3121[iVar0]);
							}
						}
						else {
							iLocal_1858[iVar0]++;
						}
					}
					else {
						iLocal_1858[iVar0]++;
					}
				}
				else if (iLocal_1858[iVar0] == 4) {
					if (vehicle::is_vehicle_driveable(iLocal_3121[iVar0], 0)) {
						if (!vehicle::is_playback_going_on_for_vehicle(iLocal_3121[iVar0])) {
							iLocal_1858[iVar0]++;
						}
						else {
							iVar1 = vehicle::get_ped_in_vehicle_seat(iLocal_3121[iVar0], -1, 0);
							if (!ped::is_ped_injured(iVar1)) {
								vehicle::set_playback_speed(iLocal_3121[iVar0], fParam1 * fLocal_1173[iVar0]);
							}
							else {
								vehicle::stop_playback_recorded_vehicle(iLocal_3121[iVar0]);
							}
							if (vehicle::has_vehicle_recording_been_loaded(iLocal_1822[iVar0], &cLocal_2668)) {
								if (fLocal_1275 > fLocal_1137[iVar0] + vehicle::get_total_duration_of_vehicle_recording(
																		   iLocal_1822[iVar0], &cLocal_2668)) {
									vehicle::stop_playback_recorded_vehicle(iLocal_3121[iVar0]);
								}
							}
							else {
								vehicle::stop_playback_recorded_vehicle(iLocal_3121[iVar0]);
							}
						}
					}
					else {
						iLocal_1858[iVar0]++;
					}
				}
				else if (iLocal_1858[iVar0] == 5) {
					if (iLocal_3121[iVar0] != iLocal_3166) {
						if (vehicle::is_vehicle_driveable(iLocal_3121[iVar0], 0)) {
							iVar1 = vehicle::get_ped_in_vehicle_seat(iLocal_3121[iVar0], -1, 0);
							if (!ped::is_ped_injured(iVar1)) {
								iVar20 = ai::get_script_task_status(iVar1, 242628503);
								if (iVar20 == 7) {
									fVar13 = entity::get_entity_speed(iLocal_3121[iVar0]);
									if (fVar13 < 8f) {
										fVar13 = 8f;
									}
									if (fVar13 > 62.9f) {
										fVar13 = 62.9f;
									}
									ai::set_drive_task_cruise_speed(iVar1, fVar13);
								}
							}
						}
						if (!bLocal_87 && !bLocal_100) {
							if (iLocal_1822[iVar0] > 0) {
								vehicle::remove_vehicle_recording(iLocal_1822[iVar0], &cLocal_2668);
							}
						}
						if (!bLocal_77) {
							if (!bLocal_105) {
								func_177(iLocal_3121[iVar0]);
							}
						}
						else if (entity::does_entity_exist(iLocal_3121[iVar0])) {
							vehicle::delete_vehicle(&iLocal_3121[iVar0]);
						}
					}
					iLocal_1947--;
					iLocal_1858[iVar0] = 99;
				}
				if (!iVar18) {
					iLocal_1952 = iVar0;
					iVar18 = 1;
				}
			}
			iVar0++;
		}
	}
	else {
		func_176();
	}
}

// Position - 0x1916A
void func_282(int iParam0) {
	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		func_178(iParam0);
		vehicle::set_playback_to_use_ai(iParam0, 786603);
	}
}

// Position - 0x1918C
bool func_283(int iParam0, int iParam1, int iParam2) {
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		vVar0 = {entity::get_entity_coords(iParam0, 1)};
	}
	if (vehicle::is_vehicle_driveable(iParam1, 0)) {
		vVar3 = {entity::get_entity_coords(iParam1, 1)};
		if (iParam2) {
			vVar15 = {entity::get_entity_velocity(iParam1)};
			vVar12 = {vVar15 / FtoV(system::vmag(vVar15))};
		}
		else {
			vVar6 = {entity::get_offset_from_entity_in_world_coords(iParam1, 0f, 5f, 0f)};
			vVar12 = {vVar6 - vVar3};
		}
	}
	vVar9 = {vVar3 - vVar0};
	vVar9.z = 0f;
	vVar12.z = 0f;
	if (func_284(vVar9, vVar12) < 0f) {
		return true;
	}
	return false;
}

// Position - 0x19229
float func_284(vector3 vParam0, vector3 vParam3) {
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

// Position - 0x1924A
int func_285(int iParam0, int iParam1, float fParam2) {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		vVar0 = {entity::get_entity_speed_vector(iParam0, 0)};
	}
	else {
		return 0;
	}
	if (vehicle::is_vehicle_driveable(iParam1, 0)) {
		vVar3 = {entity::get_entity_speed_vector(iParam1, 0)};
	}
	else {
		return 0;
	}
	vVar0.z = 0f;
	vVar3.z = 0f;
	fVar6 = func_284(vVar0, vVar3);
	if (fVar6 < 0f) {
		return 0;
	}
	fVar6 = gameplay::get_angle_between_2d_vectors(vVar0.x, vVar0.y, vVar3.x, vVar3.y);
	if (fVar6 >= fParam2) {
		return 0;
	}
	return 1;
}

// Position - 0x192CD
int func_286(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (bLocal_101) {
		iVar1 = player::get_players_last_vehicle();
		if (!entity::is_entity_dead(iVar1, 0)) {
			iVar2 = entity::get_entity_model(iVar1);
			if (iVar2 == joaat("phantom")) {
				if (vehicle::is_vehicle_attached_to_trailer(iVar1)) {
					if (vehicle::get_vehicle_trailer_vehicle(iVar1, &iVar0)) {
						if (vehicle::is_vehicle_driveable(iVar0, 0)) {
							if (entity::is_entity_touching_entity(iVar0, iParam0)) {
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

// Position - 0x1932B
int func_287(var *uParam0, int iParam1, int iParam2) {
	int iVar0;

	if (!entity::is_entity_dead(*uParam0, 0)) {
		if (vehicle::is_vehicle_seat_free(*uParam0, -1, 0)) {
			if (iParam1 == 2) {
				iVar0 = ped::create_ped_inside_vehicle(*uParam0, 6, func_181(), -1, 0, 0);
				ped::set_ped_relationship_group_hash(iVar0, iLocal_2684);
				streaming::set_model_as_no_longer_needed(func_181());
			}
			else if (iParam1 == 1) {
				iVar0 = ped::create_random_ped_as_driver(*uParam0, 1);
				if (vehicle::is_this_model_a_bike(entity::get_entity_model(*uParam0))) {
					ped::give_ped_helmet(iVar0, 1, 4096, -1);
				}
			}
			else {
				iVar0 = ped::create_ped_inside_vehicle(*uParam0, 4, func_184(), -1, 0, 0);
				if (bLocal_107) {
					streaming::set_model_as_no_longer_needed(func_184());
				}
			}
			if (iParam2) {
				entity::set_entity_only_damaged_by_player(iVar0, 1);
				ped::set_ped_suffers_critical_hits(iVar0, 0);
				ped::set_ped_config_flag(iVar0, 32, 0);
			}
			if (bLocal_108) {
				ped::set_ped_flee_attributes(iVar0, 8192, 1);
				ped::set_ped_flee_attributes(iVar0, 65536, 1);
				ped::set_ped_flee_attributes(iVar0, 2, 0);
				vehicle::_0x25367DE49D64CF16(*uParam0, 1);
			}
			ped::set_blocking_of_non_temporary_events(iVar0, 1);
			func_288(iVar0);
			iLocal_106 = 1;
			return 1;
		}
		else {
			return 1;
		}
	}
	return 0;
}

// Position - 0x19422
void func_288(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		entity::set_ped_as_no_longer_needed(&iParam0);
	}
}

// Position - 0x19439
void func_289(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = gameplay::get_random_int_in_range(0, 12);
	if (iLocal_2914 >= -1 && iLocal_2915 >= -1) {
		while (iVar0 == iLocal_2914 || iVar0 == iLocal_2915) {
			iVar0++;
		}
	}
	else if (iLocal_2914 >= -1) {
		if (iVar0 == iLocal_2914) {
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1) {
	case 0: vehicle::set_vehicle_colours(iParam0, 0, 0); break;

	case 1: vehicle::set_vehicle_colours(iParam0, 2, 2); break;

	case 2: vehicle::set_vehicle_colours(iParam0, 4, 4); break;

	case 3: vehicle::set_vehicle_colours(iParam0, 27, 27); break;

	case 4: vehicle::set_vehicle_colours(iParam0, 7, 7); break;

	case 5: vehicle::set_vehicle_colours(iParam0, 73, 73); break;

	case 6: vehicle::set_vehicle_colours(iParam0, 68, 68); break;

	case 7: vehicle::set_vehicle_colours(iParam0, 62, 62); break;

	case 8: vehicle::set_vehicle_colours(iParam0, 132, 132); break;

	case 9: vehicle::set_vehicle_colours(iParam0, 117, 0); break;

	case 10: vehicle::set_vehicle_colours(iParam0, 52, 52); break;

	case 11: vehicle::set_vehicle_colours(iParam0, 88, 88); break;

	case 12: vehicle::set_vehicle_colours(iParam0, 1, 1); break;

	case 13: vehicle::set_vehicle_colours(iParam0, 36, 36); break;

	case 14: vehicle::set_vehicle_colours(iParam0, 95, 95); break;

	default: vehicle::set_vehicle_colours(iParam0, 73, 73); break;
	}
}

// Position - 0x195B2
void func_290(vector3 vParam0, vector3 vParam3, float fParam6) {
	bool bVar0;
	int iVar1;

	bVar0 = true;
	if (!iLocal_88) {
		if (!func_291(vParam0, vParam3, fParam6, 200f)) {
			if (player::is_player_playing(player::player_id())) {
				iVar1 = player::get_players_last_vehicle();
				if (!entity::is_entity_dead(iVar1, 0)) {
					if (entity::is_entity_at_coord(iVar1, vParam0, fParam6, fParam6, fParam6, 0, 1, 0)) {
						bVar0 = false;
					}
				}
			}
			if (bVar0) {
				gameplay::clear_area_of_vehicles(vParam0, fParam6, 0, 0, 0, 0, 0);
			}
		}
	}
}

// Position - 0x19623
int func_291(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7) {
	if (!cam::is_screen_faded_out()) {
		if (!iLocal_88) {
			if (!iLocal_75) {
				if (system::vmag2(vParam3 - vParam0) - fParam6 < fParam7 * fParam7) {
					if (cam::is_sphere_visible(vParam0, fParam6)) {
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

// Position - 0x1966A
float func_292(int iParam0) {
	var uVar0;

	vehicle::request_vehicle_recording(iParam0, &cLocal_2668);
	while (!vehicle::has_vehicle_recording_been_loaded(iParam0, &cLocal_2668)) {
		system::wait(0);
	}
	uVar0 = vehicle::get_total_duration_of_vehicle_recording(iParam0, &cLocal_2668);
	vehicle::remove_vehicle_recording(iParam0, &cLocal_2668);
	return uVar0;
}

// Position - 0x196A6
bool func_293(int iParam0) {
	if (iParam0 == joaat("police") || iParam0 == joaat("police2") || iParam0 == joaat("police3") ||
		iParam0 == joaat("policeb") || iParam0 == joaat("policet") || iParam0 == joaat("polmav") ||
		iParam0 == joaat("pranger") || iParam0 == joaat("sheriff")) {
		return true;
	}
	return false;
}

// Position - 0x19720
void func_294(int iParam0) {
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;

	if (player::is_player_playing(player::player_id())) {
		vVar1 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	}
	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		iVar7 = 0;
		iVar8 = 0;
		iVar0 = iLocal_1951;
		while (iVar0 < 15) {
			switch (iLocal_1930[iVar0]) {
			case 0:
				if (iLocal_2861[iVar0] != 0) {
					if (entity::is_entity_at_coord(iParam0, vLocal_2489[iVar0 /*3*/], fLocal_1273, fLocal_1273,
												   fLocal_1273, 0, 1, 0)) {
						iLocal_1953++;
						iLocal_1930[iVar0]++;
					}
				}
				else {
					iLocal_1930[iVar0] = 99;
				}
				break;

			case 1:
				if (6 > iLocal_1948) {
					if (!entity::does_entity_exist(iLocal_3105[iVar0])) {
						streaming::request_model(iLocal_2861[iVar0]);
						if (streaming::has_model_loaded(iLocal_2861[iVar0])) {
							if (iLocal_75 || iLocal_89 ||
								!iLocal_106 && !func_291(vLocal_2489[iVar0 /*3*/], vVar1, 5f, fLocal_1286)) {
								if (bLocal_85) {
									func_290(vLocal_2489[iVar0 /*3*/], vVar1, fLocal_1279);
								}
								iLocal_3105[iVar0] =
									vehicle::create_vehicle(iLocal_2861[iVar0], vLocal_2489[iVar0 /*3*/], 0f, 0, 0);
								if (iLocal_2861[iVar0] == joaat("polmav")) {
									vehicle::set_vehicle_livery(iLocal_3105[iVar0], 0);
								}
								entity::set_entity_quaternion(iLocal_3105[iVar0], fLocal_1209[iVar0],
															  fLocal_1225[iVar0], fLocal_1241[iVar0],
															  fLocal_1257[iVar0]);
								streaming::set_model_as_no_longer_needed(iLocal_2861[iVar0]);
								if (vehicle::is_vehicle_model(iLocal_3105[iVar0], func_182())) {
									vehicle::set_vehicle_siren(iLocal_3105[iVar0], 1);
									if (!vehicle::is_this_model_a_bike(iLocal_2861[iVar0])) {
										audio::set_siren_with_no_driver(iLocal_3105[iVar0], 1);
									}
								}
								if (vehicle::is_vehicle_model(iLocal_3105[iVar0], func_183())) {
									vehicle::set_vehicle_colours(iLocal_3105[iVar0], 0, 0);
								}
								entity::_set_entity_register(iLocal_3105[iVar0], 1);
								iLocal_1953--;
								iLocal_1948++;
								iLocal_1930[iVar0]++;
								iLocal_106 = 1;
							}
						}
					}
					else {
						iLocal_1953--;
						iLocal_1948++;
						iLocal_1930[iVar0]++;
					}
				}
				break;

			case 2:
				if (!iVar7) {
					if (vehicle::is_vehicle_driveable(iLocal_3105[iVar0], 0)) {
						vVar4 = {entity::get_entity_coords(iLocal_3105[iVar0], 1)};
					}
					if (fLocal_1287 == 0f || system::vdist2(vVar1, vVar4) < fLocal_1287 * fLocal_1287) {
						if (!func_283(iLocal_3105[iVar0], iParam0, 0)) {
							if (!bLocal_77) {
								func_177(iLocal_3105[iVar0]);
							}
							else {
								vehicle::delete_vehicle(&iLocal_3105[iVar0]);
							}
							iLocal_1948--;
							iLocal_1930[iVar0] = 99;
							iVar7 = 1;
						}
					}
				}
				break;
			}
			if (iLocal_1930[iVar0] != 99) {
				if (!iVar8) {
					iLocal_1951 = iVar0;
					iVar8 = 1;
				}
			}
			iVar0++;
		}
	}
	else {
		func_179();
	}
}

// Position - 0x19A16
void func_295(int iParam0, float fParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	var uVar19;
	var uVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	bool bVar24;
	vector3 vVar25;

	iVar5 = 0;
	bVar18 = player::is_player_playing(player::player_id());
	uVar19 = ped::can_create_random_driver();
	uVar20 = ped::can_create_random_bike_rider();
	if (bVar18) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			iVar5 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
		}
		vVar12 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	}
	iVar1 = 0;
	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		if (vehicle::is_playback_going_on_for_vehicle(iParam0)) {
			fLocal_1275 = vehicle::get_time_position_in_recording(iParam0);
		}
		iVar22 = -1;
		iVar23 = 0;
		bVar24 = false;
		iVar0 = iLocal_1950;
		while (iVar0 < 175 && !iVar23) {
			if (iLocal_1470[iVar0] != 99) {
				if (iLocal_1470[iVar0] == 0) {
					if (iLocal_1294[iVar0] > 0 && iLocal_2685[iVar0] != 0) {
						if (!iLocal_75) {
							if (fLocal_1275 < fLocal_813[iVar0] + 20000f) {
								if (fLocal_1275 >= fLocal_813[iVar0] - 7000f * fParam1) {
									if (func_293(iLocal_2685[iVar0])) {
										gameplay::set_bit(&iLocal_1646[iVar0], 0);
									}
									else if (vehicle::is_this_model_a_bike(iLocal_2685[iVar0])) {
										gameplay::set_bit(&iLocal_1646[iVar0], 2);
									}
									gameplay::clear_bit(&iLocal_1646[iVar0], 1);
									iLocal_1955++;
									iLocal_1470[iVar0]++;
								}
								else if (iVar1 > 2) {
									iVar23 = 1;
								}
								else {
									iVar1++;
								}
							}
							else {
								func_297(iVar0, 1090519040);
							}
						}
						else {
							fVar15 = fLocal_1275 - fLocal_813[iVar0];
							if (fVar15 >= 0f) {
								if (fVar15 < func_292(iLocal_1294[iVar0])) {
									if (func_293(iLocal_2685[iVar0])) {
										gameplay::set_bit(&iLocal_1646[iVar0], 0);
									}
									else if (vehicle::is_this_model_a_bike(iLocal_2685[iVar0])) {
										gameplay::set_bit(&iLocal_1646[iVar0], 2);
									}
									gameplay::clear_bit(&iLocal_1646[iVar0], 1);
									iLocal_1955++;
									iLocal_1470[iVar0]++;
								}
								else {
									func_297(iVar0, 1090519040);
								}
							}
						}
					}
					else {
						func_297(iVar0, 1090519040);
					}
				}
				else if (iLocal_1470[iVar0] == 1) {
					vehicle::request_vehicle_recording(iLocal_1294[iVar0], &cLocal_2668);
					iVar17 = 0;
					if (gameplay::is_bit_set(iLocal_1646[iVar0], 0)) {
						streaming::request_model(func_181());
						if (streaming::has_model_loaded(func_181())) {
							iVar17 = 1;
						}
					}
					else if (!bLocal_102 && (!gameplay::is_bit_set(iLocal_1646[iVar0], 2) && uVar19 ||
											 gameplay::is_bit_set(iLocal_1646[iVar0], 2) && uVar20)) {
						iVar17 = 1;
					}
					else {
						streaming::request_model(func_184());
						iVar17 = streaming::has_model_loaded(func_184());
					}
					if (!entity::does_entity_exist(iLocal_2916[iVar0])) {
						streaming::request_model(iLocal_2685[iVar0]);
						if (streaming::has_model_loaded(iLocal_2685[iVar0]) &&
							vehicle::has_vehicle_recording_been_loaded(iLocal_1294[iVar0], &cLocal_2668) && iVar17) {
							if (fLocal_1275 >= fLocal_813[iVar0] - fLocal_1288 * fParam1) {
								if (iLocal_89 || iParam2 ||
									!iLocal_106 && !func_291(vLocal_1963[iVar0 /*3*/], vVar12, 5f, fLocal_1286)) {
									if (bLocal_85) {
										func_290(vLocal_1963[iVar0 /*3*/], vVar12, fLocal_1279);
									}
									iLocal_2916[iVar0] =
										vehicle::create_vehicle(iLocal_2685[iVar0], vLocal_1963[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_2685[iVar0] == joaat("polmav")) {
										vehicle::set_vehicle_livery(iLocal_2916[iVar0], 0);
									}
									if (uLocal_98 && !gameplay::is_bit_set(iLocal_1646[iVar0], 0)) {
										func_289(iLocal_2916[iVar0]);
									}
									entity::set_entity_coords_no_offset(iLocal_2916[iVar0], vLocal_1963[iVar0 /*3*/], 0,
																		0, 1);
									entity::set_entity_quaternion(iLocal_2916[iVar0], fLocal_109[iVar0],
																  fLocal_285[iVar0], fLocal_461[iVar0],
																  fLocal_637[iVar0]);
									if (vehicle::is_this_model_a_car(iLocal_2685[iVar0]) ||
										vehicle::is_this_model_a_bike(iLocal_2685[iVar0])) {
										vehicle::set_vehicle_on_ground_properly(iLocal_2916[iVar0], 1084227584);
									}
									if (gameplay::is_bit_set(iLocal_1646[iVar0], 3)) {
										entity::_set_entity_register(iLocal_2916[iVar0], 1);
									}
									if (!gameplay::is_bit_set(iLocal_1646[iVar0], 0)) {
										vehicle::set_vehicle_engine_on(iLocal_2916[iVar0], 1, 1, 0);
										if (time::get_clock_hours() > 19 || time::get_clock_hours() < 7) {
											vehicle::set_vehicle_lights(iLocal_2916[iVar0], 3);
										}
									}
									entity::freeze_entity_position(iLocal_2916[iVar0], 1);
									entity::set_entity_only_damaged_by_player(iLocal_2916[iVar0], 1);
									streaming::set_model_as_no_longer_needed(iLocal_2685[iVar0]);
									iLocal_1955--;
									iLocal_1470[iVar0]++;
									iLocal_106 = 1;
								}
								else if (fLocal_1275 > fLocal_813[iVar0]) {
									iLocal_1955--;
									func_297(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_1470[iVar0] == 2) {
					iVar17 = 0;
					if (iVar3 < 8 && (iVar0 > iLocal_1961 || iLocal_1961 == 0) || iLocal_89 || iParam2) {
						if (!gameplay::is_bit_set(iLocal_1646[iVar0], 1)) {
							if (gameplay::is_bit_set(iLocal_1646[iVar0], 0)) {
								streaming::request_model(func_181());
								iVar17 = streaming::has_model_loaded(func_181());
								iVar21 = 2;
							}
							else if (!bLocal_102 && (!gameplay::is_bit_set(iLocal_1646[iVar0], 2) && uVar19 ||
													 gameplay::is_bit_set(iLocal_1646[iVar0], 2) && uVar20)) {
								iVar17 = 1;
								iVar21 = 1;
							}
							else {
								streaming::request_model(func_184());
								iVar17 = streaming::has_model_loaded(func_184());
								iVar21 = 0;
							}
							if (!entity::is_entity_dead(iLocal_2916[iVar0], 0)) {
								if (!iLocal_106 && vehicle::is_vehicle_seat_free(iLocal_2916[iVar0], -1, 0)) {
									if (iVar17) {
										if (system::vdist2(entity::get_entity_coords(iLocal_2916[iVar0], 1), vVar12) <
												10000f ||
											iParam2 || iLocal_89) {
											func_287(&iLocal_2916[iVar0], iVar21, 0);
											gameplay::set_bit(&iLocal_1646[iVar0], 1);
										}
									}
								}
							}
						}
						if (vehicle::is_vehicle_driveable(iLocal_2916[iVar0], 0)) {
							vehicle::request_vehicle_recording(iLocal_1294[iVar0], &cLocal_2668);
							if (fLocal_1275 >= fLocal_813[iVar0]) {
								if (12 > iLocal_1946) {
									fVar15 = fLocal_1275 - fLocal_813[iVar0];
									if (vehicle::has_vehicle_recording_been_loaded(iLocal_1294[iVar0], &cLocal_2668)) {
										if (fVar15 < vehicle::get_total_duration_of_vehicle_recording(
														 iLocal_1294[iVar0], &cLocal_2668)) {
											vVar6 = {entity::get_entity_coords(iLocal_2916[iVar0], 1)};
											vVar9 = {vehicle::get_position_of_vehicle_recording_at_time(
												iLocal_1294[iVar0], fVar15, &cLocal_2668)};
											if (!func_291(vVar6, vVar12, 5f, fLocal_1286) &&
												func_291(vVar9, vVar12, 5f, fLocal_1286)) {
												if (!gameplay::is_bit_set(iLocal_1646[iVar0], 1)) {
													func_287(&iLocal_2916[iVar0], iVar21, 0);
												}
												func_297(iVar0, 1090519040);
											}
											else if (!iLocal_106 || gameplay::is_bit_set(iLocal_1646[iVar0], 1) ||
													 iLocal_89 || iParam2) {
												if (func_280(&iLocal_2916[iVar0], iLocal_1294[iVar0], fVar15, 1, 0, 0,
															 1, bLocal_103)) {
													if (!gameplay::is_bit_set(iLocal_1646[iVar0], 1)) {
														func_287(&iLocal_2916[iVar0], iVar21, 0);
													}
													entity::set_entity_collision(iLocal_2916[iVar0], 1, 0);
													vehicle::set_playback_speed(iLocal_2916[iVar0], fParam1);
													iLocal_1946++;
													iLocal_1470[iVar0]++;
												}
											}
										}
										else {
											if (!gameplay::is_bit_set(iLocal_1646[iVar0], 1)) {
												func_287(&iLocal_2916[iVar0], iVar21, 0);
											}
											func_297(iVar0, 1090519040);
										}
									}
									else if (fVar15 > vehicle::get_total_duration_of_vehicle_recording(
														  iLocal_1294[iVar0], &cLocal_2668)) {
										if (!gameplay::is_bit_set(iLocal_1646[iVar0], 1)) {
											func_287(&iLocal_2916[iVar0], iVar21, 0);
										}
										func_297(iVar0, 1090519040);
									}
								}
								else {
									if (!gameplay::is_bit_set(iLocal_1646[iVar0], 1)) {
										func_287(&iLocal_2916[iVar0], iVar21, 0);
									}
									func_297(iVar0, 1090519040);
								}
							}
							else if (iLocal_86 && !bLocal_94) {
								if (!gameplay::is_bit_set(iLocal_1646[iVar0], 1)) {
									func_287(&iLocal_2916[iVar0], iVar21, 0);
								}
								func_297(iVar0, 1090519040);
							}
						}
						else {
							if (!gameplay::is_bit_set(iLocal_1646[iVar0], 1)) {
								func_287(&iLocal_2916[iVar0], iVar21, 0);
							}
							func_297(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_1961 = iVar0;
					}
				}
				else if (iLocal_1470[iVar0] == 3) {
					if (vehicle::is_vehicle_driveable(iLocal_2916[iVar0], 0)) {
						if (vehicle::is_playback_going_on_for_vehicle(iLocal_2916[iVar0])) {
							iVar4 = vehicle::get_ped_in_vehicle_seat(iLocal_2916[iVar0], -1, 0);
							if (!ped::is_ped_injured(iVar4)) {
								if (bVar18) {
									bVar24 = false;
									if (!bLocal_84) {
										if (!bLocal_79 && !iLocal_76 && func_286(iLocal_2916[iVar0])) {
											if (iVar2 < 3 && (iVar0 > iLocal_1960 || iLocal_1960 == 0)) {
												if (!entity::is_entity_dead(iVar5, 0)) {
													iVar17 = 0;
													if (!func_296(iLocal_2916[iVar0], iVar5) ||
														func_283(iVar5, iLocal_2916[iVar0], 0)) {
														bVar24 = true;
													}
												}
												iLocal_1960 = iVar0;
												iVar2++;
											}
										}
										else if (!bLocal_99 && !gameplay::is_bit_set(iLocal_1646[iVar0], 4) &&
												 iVar2 < 3 && (iVar0 > iLocal_1960 || iLocal_1960 == 0)) {
											vVar25 = {entity::get_offset_from_entity_given_world_coords(
												iParam0, entity::get_entity_coords(iLocal_2916[iVar0], 1))};
											if (vVar25.y < 0f) {
												if (gameplay::absf(vVar25.y) > gameplay::absf(vVar25.x)) {
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_1960 = iVar0;
										}
									}
									if (bVar24) {
										func_282(iLocal_2916[iVar0]);
										iLocal_1470[iVar0]++;
									}
									else {
										vehicle::set_playback_speed(iLocal_2916[iVar0], fParam1);
									}
								}
							}
							else {
								vehicle::stop_playback_recorded_vehicle(iLocal_2916[iVar0]);
							}
						}
						else {
							iLocal_1470[iVar0]++;
						}
					}
					else {
						iLocal_1470[iVar0]++;
					}
				}
				else if (iLocal_1470[iVar0] == 4) {
					if (vehicle::is_vehicle_driveable(iLocal_2916[iVar0], 0)) {
						if (!vehicle::is_playback_going_on_for_vehicle(iLocal_2916[iVar0])) {
							iLocal_1470[iVar0]++;
						}
						else {
							iVar4 = vehicle::get_ped_in_vehicle_seat(iLocal_2916[iVar0], -1, 0);
							if (!ped::is_ped_injured(iVar4)) {
								vehicle::set_playback_speed(iLocal_2916[iVar0], fParam1);
							}
							else {
								vehicle::stop_playback_recorded_vehicle(iLocal_2916[iVar0]);
							}
							if (vehicle::has_vehicle_recording_been_loaded(iLocal_1294[iVar0], &cLocal_2668)) {
								if (fLocal_1275 > fLocal_813[iVar0] + vehicle::get_total_duration_of_vehicle_recording(
																		  iLocal_1294[iVar0], &cLocal_2668)) {
									vehicle::stop_playback_recorded_vehicle(iLocal_2916[iVar0]);
								}
							}
							else {
								vehicle::stop_playback_recorded_vehicle(iLocal_2916[iVar0]);
							}
						}
					}
					else {
						iLocal_1470[iVar0]++;
					}
				}
				else if (iLocal_1470[iVar0] == 5) {
					if (!entity::is_entity_dead(iLocal_2916[iVar0], 0)) {
						fVar16 = entity::get_entity_speed(iLocal_2916[iVar0]);
					}
					iLocal_1946--;
					func_297(iVar0, fVar16);
				}
				if (iVar22 == -1) {
					iVar22 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar22 != -1) {
			iLocal_1950 = iVar22;
		}
		if (iVar2 < 3) {
			iLocal_1960 = 0;
		}
		if (iVar3 < 8) {
			iLocal_1961 = 0;
		}
	}
	else {
		func_180();
	}
}

// Position - 0x1A589
int func_296(int iParam0, int iParam1) {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		vVar0 = {entity::get_entity_speed_vector(iParam0, 0)};
	}
	else {
		return 0;
	}
	if (vehicle::is_vehicle_driveable(iParam1, 0)) {
		vVar3 = {entity::get_entity_speed_vector(iParam1, 0)};
	}
	else {
		return 0;
	}
	vVar0.z = 0f;
	vVar3.z = 0f;
	fVar6 = func_284(vVar0, vVar3);
	if (fVar6 < 0f) {
		return 0;
	}
	return 1;
}

// Position - 0x1A5ED
void func_297(int iParam0, float fParam1) {
	int iVar0;

	if (iLocal_2685[iParam0] != 0) {
		streaming::set_model_as_no_longer_needed(iLocal_2685[iParam0]);
	}
	if (!entity::is_entity_dead(iLocal_2916[iParam0], 0)) {
		entity::set_entity_collision(iLocal_2916[iParam0], 1, 0);
		entity::freeze_entity_position(iLocal_2916[iParam0], 0);
		iVar0 = vehicle::get_ped_in_vehicle_seat(iLocal_2916[iParam0], -1, 0);
		if (!ped::is_ped_injured(iVar0) && iVar0 != player::player_ped_id()) {
			ped::set_blocking_of_non_temporary_events(iVar0, 0);
			if (fParam1 < 8f) {
				fParam1 = 8f;
			}
			if (fParam1 > 62.9f) {
				fParam1 = 62.9f;
			}
			ai::task_vehicle_mission(iVar0, iLocal_2916[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			ped::set_ped_flee_attributes(iVar0, 8192, 1);
			if (bLocal_108) {
				ped::set_ped_flee_attributes(iVar0, 65536, 1);
				ped::set_ped_flee_attributes(iVar0, 2, 0);
			}
			ped::set_ped_combat_attributes(iVar0, 6, 0);
			ai::set_drive_task_cruise_speed(iVar0, fParam1);
		}
	}
	if (!bLocal_77) {
		if (!bLocal_105) {
			func_288(iVar0);
			func_177(iLocal_2916[iParam0]);
		}
	}
	else {
		if (entity::does_entity_exist(iVar0)) {
			ped::delete_ped(&iVar0);
		}
		if (entity::does_entity_exist(iLocal_2916[iParam0])) {
			vehicle::delete_vehicle(&iLocal_2916[iParam0]);
		}
	}
	if (!bLocal_87 && !bLocal_100) {
		if (iLocal_1294[iParam0] > 0) {
			vehicle::remove_vehicle_recording(iLocal_1294[iParam0], &cLocal_2668);
		}
	}
	iLocal_1470[iParam0] = 99;
}

// Position - 0x1A748
void func_298(int iParam0, float fParam1, float fParam2) {
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;

	if (player::is_player_playing(player::player_id())) {
		vVar10 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	}
	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		if (vehicle::is_playback_going_on_for_vehicle(iParam0)) {
			uVar0 = vehicle::get_current_playback_for_vehicle(iParam0);
			vVar1 = {vehicle::_0x92523B76657A517D(uVar0, fParam1)};
			vVar4 = {entity::get_entity_coords(iParam0, 1)};
			vVar7 = {vVar4 - vVar1};
			fVar13 = system::vmag(vVar7);
			if (fVar13 > fParam2) {
				fVar13 = fParam2;
			}
			func_290(vVar1, vVar10, fVar13);
		}
	}
}

// Position - 0x1A7CB
void func_299(int iParam0, float fParam1) {
	if (!iLocal_88) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			if (player::is_player_playing(player::player_id())) {
				if (system::vdist2(entity::get_entity_coords(iParam0, 1),
								   entity::get_entity_coords(player::player_ped_id(), 1)) > fParam1 * fParam1) {
					streaming::set_vehicle_population_budget(1);
				}
				else {
					streaming::set_vehicle_population_budget(0);
				}
			}
		}
	}
}

// Position - 0x1A819
void func_300(int iParam0, float fParam1) {
	if (!iLocal_88) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			if (player::is_player_playing(player::player_id())) {
				if (system::vdist2(entity::get_entity_coords(iParam0, 1),
								   entity::get_entity_coords(player::player_ped_id(), 1)) > fParam1 * fParam1) {
					vehicle::set_vehicle_density_multiplier_this_frame(1f);
				}
				else {
					vehicle::set_vehicle_density_multiplier_this_frame(0f);
				}
			}
		}
	}
}

// Position - 0x1A867
void func_301(int iParam0, float fParam1) {
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;

	if (!entity::is_entity_dead(iParam0, 0) && vehicle::is_playback_going_on_for_vehicle(iParam0)) {
		fVar1 = fLocal_1289 + 2000f;
		fVar2 = fLocal_1290 + 2000f;
		iVar4 = 0;
		if (fVar1 < fParam1 + 25000f) {
			uVar0 = vehicle::get_current_playback_for_vehicle(iParam0);
			if (fVar1 <= vehicle::get_total_duration_of_vehicle_recording_id(uVar0)) {
				if (iLocal_1956 == 0) {
					vLocal_2656 = {vehicle::_0x92523B76657A517D(uVar0, fLocal_1289)};
					iLocal_1956++;
				}
				else if (iLocal_1956 == 1) {
					vLocal_2659 = {vehicle::_0x92523B76657A517D(uVar0, fVar1)};
					iLocal_1956++;
				}
				else if (!iLocal_106) {
					if (vLocal_2656.x > vLocal_2659.x) {
						fVar3 = vLocal_2656.x;
						vLocal_2656.x = vLocal_2659.x;
						vLocal_2659.x = fVar3;
					}
					if (vLocal_2656.y > vLocal_2659.y) {
						fVar3 = vLocal_2656.y;
						vLocal_2656.y = vLocal_2659.y;
						vLocal_2659.y = fVar3;
					}
					if (vLocal_2656.z > vLocal_2659.z) {
						fVar3 = vLocal_2656.z;
						vLocal_2656.z = vLocal_2659.z;
						vLocal_2659.z = fVar3;
					}
					vLocal_2656 = {vLocal_2656 - Vector(fLocal_1293, fLocal_1293, fLocal_1293)};
					vLocal_2659 = {vLocal_2659 + Vector(fLocal_1293, fLocal_1293, fLocal_1293)};
					pathfind::set_roads_in_area(vLocal_2656, vLocal_2659, 0, 0);
					fLocal_1289 = fVar1;
					iLocal_1956 = 0;
				}
			}
		}
		if (fVar2 < fParam1 - 8000f) {
			uVar0 = vehicle::get_current_playback_for_vehicle(iParam0);
			if (iLocal_1959 == 0) {
				vLocal_2662 = {vehicle::_0x92523B76657A517D(uVar0, fLocal_1290)};
				iLocal_1959++;
			}
			else if (iLocal_1959 == 1) {
				vLocal_2665 = {vehicle::_0x92523B76657A517D(uVar0, fVar2)};
				iLocal_1959++;
			}
			else if (!iLocal_106 && !iVar4) {
				if (vLocal_2662.x > vLocal_2665.x) {
					fVar3 = vLocal_2662.x;
					vLocal_2662.x = vLocal_2665.x;
					vLocal_2665.x = fVar3;
				}
				if (vLocal_2662.y > vLocal_2665.y) {
					fVar3 = vLocal_2662.y;
					vLocal_2662.y = vLocal_2665.y;
					vLocal_2665.y = fVar3;
				}
				if (vLocal_2662.z > vLocal_2665.z) {
					fVar3 = vLocal_2662.z;
					vLocal_2662.z = vLocal_2665.z;
					vLocal_2665.z = fVar3;
				}
				vLocal_2662 = {vLocal_2662 - Vector(fLocal_1293, fLocal_1293, fLocal_1293)};
				vLocal_2665 = {vLocal_2665 + Vector(fLocal_1293, fLocal_1293, fLocal_1293)};
				pathfind::set_roads_back_to_original(vLocal_2662, vLocal_2665, 1);
				fLocal_1290 = fVar2;
				iLocal_1959 = 0;
			}
		}
	}
}

// Position - 0x1AAB5
bool func_302(int iParam0, int iParam1) {
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;

	if (!ped::is_ped_injured(iParam0)) {
		if (!entity::is_entity_dead(iParam1, 0)) {
			if (ped::is_ped_in_vehicle(iParam0, iParam1, 0)) {
				return false;
			}
		}
	}
	if (!entity::is_entity_dead(iParam0, 0)) {
		vVar0 = {entity::get_entity_coords(iParam0, 1)};
	}
	if (vehicle::is_vehicle_driveable(iParam1, 0)) {
		vVar3 = {entity::get_entity_coords(iParam1, 1)};
		vVar6 = {entity::get_offset_from_entity_in_world_coords(iParam1, 0f, 5f, 0f)};
		vVar12 = {vVar6 - vVar3};
	}
	vVar9 = {vVar3 - vVar0};
	vVar9.z = 0f;
	vVar12.z = 0f;
	fVar15 = func_284(vVar9, vVar12);
	if (fVar15 < 0f) {
		return true;
	}
	return false;
}

// Position - 0x1AB58
void func_303() {
	vehicle::set_all_vehicle_generators_active_in_area(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0, 1);
	vehicle::set_number_of_parked_vehicles(0);
	vehicle::set_garbage_trucks(0);
	vehicle::set_all_low_priority_vehicle_generators_active(0);
	vehicle::set_vehicle_density_multiplier_this_frame(0f);
	streaming::set_vehicle_population_budget(0);
	streaming::set_ped_population_budget(3);
}

// Position - 0x1ABA2
void func_304(int iParam0, int iParam1, float *fParam2, float fParam3, float fParam4, float fParam5, float fParam6,
			  float fParam7, float fParam8, float fParam9, int iParam10) {
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;

	if (iLocal_91 == 0) {
		if (*fParam2 < fParam3) {
			*fParam2 = fParam3;
			iLocal_91 = 1;
		}
	}
	if (fParam8 < 0f) {
		fParam8 = fLocal_1284;
	}
	fVar0 = fParam3 * fParam7;
	if (fVar0 <= fParam3) {
		fVar0 = fParam3 + 0.1f;
	}
	fVar5 = fParam3 * fParam9;
	fVar6 = (fParam6 - fParam5) * 0.4f + fParam5;
	fVar2 = func_307(iParam0, iParam1);
	if (fVar2 < 0f) {
		fVar2 *= -1f;
	}
	fVar3 = fVar2;
	if (fVar3 < fParam4) {
		fVar3 = fParam4;
	}
	if (fVar3 > fVar6) {
		fVar3 = fVar6;
	}
	fVar4 = fParam3;
	if (!entity::is_entity_dead(iParam1, 0)) {
		if (func_302(iParam1, iParam0)) {
			if (ped::is_ped_in_any_vehicle(iParam1, 0)) {
				fVar4 = fVar0;
			}
			else if (fVar2 < 50f) {
				fVar4 = fParam3;
			}
			else {
				fVar4 = fVar0;
			}
		}
		else if (fVar2 < fParam5) {
			if (func_306(iParam0, iParam1) < fParam5) {
				fVar1 = func_305(iParam0, iParam1);
				fVar1 += -15f;
				if (fVar1 < 0f) {
					fVar1 = 0f;
				}
				if (fVar1 > 75f) {
					fVar1 = 75f;
				}
				fVar7 = (75f - fVar1) / 75f;
			}
			else {
				fVar7 = 1f;
			}
			fVar4 = (fParam5 - fParam4 - (fVar3 - fParam4)) / (fParam5 - fParam4) * (fVar0 - fParam3) * fVar7 + fParam3;
		}
		else if (fVar2 > fParam6) {
			fVar4 = fVar5;
			iLocal_92 = 1;
		}
		else if (iLocal_92) {
			if (fVar2 < fVar6) {
				fVar4 = fParam3;
				iLocal_92 = 0;
			}
			else {
				fVar4 = fVar5;
			}
		}
		else {
			fVar4 = fParam3;
		}
	}
	fVar1 = fVar4 - *fParam2;
	if (fVar1 > 0f) {
		fVar1 = gameplay::get_frame_time();
		fVar8 = fLocal_1291 * fParam3 * fVar1;
		fVar1 = fVar4 - *fParam2;
		if (fVar1 > fVar8) {
			fVar1 = fVar8;
		}
		*fParam2 += fVar1;
	}
	else {
		fVar1 = gameplay::get_frame_time();
		fVar8 = fLocal_1292 * fParam3 * fVar1;
		fVar1 = fVar4 - *fParam2;
		if (fVar1 < fVar8 * -1f) {
			fVar1 = fVar8 * -1f;
		}
		*fParam2 += fVar1;
	}
	if (iParam10) {
		if (!ped::is_ped_injured(iParam1)) {
			if (ped::is_ped_in_any_vehicle(iParam1, 0)) {
				iVar9 = ped::get_vehicle_ped_is_in(iParam1, 0);
				if (!entity::is_entity_dead(iVar9, 0)) {
					iVar10 = entity::get_entity_model(iVar9);
					if (vehicle::is_this_model_a_car(iVar10) || vehicle::is_this_model_a_bike(iVar10)) {
						if (vehicle::is_vehicle_driveable(iVar9, 0)) {
							fVar1 = fVar4;
							if (fVar1 < fParam3) {
								fVar1 = fParam3;
							}
							fVar1 -= fParam3;
							fVar1 /= (fVar0 - fParam3);
							fVar1 *= fParam8;
							fVar1 *= (fLocal_1282 - fLocal_1283);
							fVar1 += fLocal_1283;
							fLocal_1281 = fVar1;
							if (fLocal_1281 < fLocal_1283) {
								fLocal_1281 = fLocal_1283;
							}
							if (fLocal_1281 > fLocal_1282) {
								fLocal_1281 = fLocal_1282;
							}
							player::set_air_drag_multiplier_for_players_vehicle(player::player_id(), fLocal_1281);
						}
					}
				}
			}
		}
	}
}

// Position - 0x1AE59
var func_305(int iParam0, int iParam1) {
	struct<2> Var0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	var uVar12;
	int iVar13;

	if (!entity::is_entity_dead(iParam0, 0)) {
		Var0 = entity::get_entity_forward_x(iParam0);
		Var0.f_1 = entity::get_entity_forward_y(iParam0);
	}
	if (!entity::is_entity_dead(iParam1, 0)) {
		vVar3 = {entity::get_entity_coords(iParam1, 1)};
		if (ped::is_ped_in_any_vehicle(iParam1, 0)) {
			iVar13 = ped::get_vehicle_ped_is_in(iParam1, 0);
			vVar9.x = entity::get_entity_forward_x(iVar13);
			vVar9.y = entity::get_entity_forward_y(iVar13);
		}
		else {
			vVar6 = {entity::get_offset_from_entity_in_world_coords(iParam1, 0f, 5f, 0f)};
			vVar9 = {vVar6 - vVar3};
		}
	}
	uVar12 = gameplay::get_angle_between_2d_vectors(Var0, Var0.f_1, vVar9.x, vVar9.y);
	return uVar12;
}

// Position - 0x1AEEA
float func_306(int iParam0, int iParam1) {
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;

	if (!entity::is_entity_dead(iParam0, 0)) {
		vVar0 = {entity::get_entity_coords(iParam0, 1)};
	}
	if (!entity::is_entity_dead(iParam1, 0)) {
		vVar3 = {entity::get_entity_coords(iParam1, 1)};
	}
	vVar6 = {vVar3 - vVar0};
	vVar6.z = 0f;
	uVar9 = system::vmag(vVar6);
	return uVar9;
}

// Position - 0x1AF3C
float func_307(int iParam0, int iParam1) {
	struct<2> Var0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		Var0 = entity::get_entity_forward_x(iParam0);
		Var0.f_1 = entity::get_entity_forward_y(iParam0);
		vVar6 = {entity::get_entity_coords(iParam0, 1)};
	}
	if (!entity::is_entity_dead(iParam1, 0)) {
		vVar9 = {entity::get_entity_coords(iParam1, 1)};
	}
	vVar3 = {vVar9 - vVar6};
	fVar12 = gameplay::get_angle_between_2d_vectors(vVar3.x, vVar3.y, Var0, Var0.f_1);
	fVar12 += -90f;
	if (fVar12 < 0f) {
		fVar12 *= -1f;
	}
	vVar3.z = 0f;
	return system::vmag(vVar3) * system::sin(fVar12);
}

// Position - 0x1AFCB
bool func_308() {
	if (entity::does_entity_exist(iLocal_3258)) {
		if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
			if (!entity::is_entity_on_screen(iLocal_3258)) {
				iLocal_3403 = 1;
			}
			else {
				iLocal_3403 = 0;
			}
		}
		else {
			iLocal_3403 = 1;
		}
	}
	else {
		iLocal_3403 = 1;
	}
	iLocal_3190 = 0;
	while (iLocal_3190 <= 24) {
		if (entity::does_entity_exist(iLocal_3121[iLocal_3190])) {
			if (vehicle::is_vehicle_driveable(iLocal_3121[iLocal_3190], 0)) {
				if (!entity::is_entity_on_screen(iLocal_3121[iLocal_3190])) {
					iLocal_3404[iLocal_3190] = 1;
				}
				else {
					iLocal_3404[iLocal_3190] = 0;
				}
			}
			else {
				iLocal_3404[iLocal_3190] = 1;
			}
		}
		else {
			iLocal_3404[iLocal_3190] = 1;
		}
		iLocal_3190++;
	}
	if (iLocal_3403 == 1 && iLocal_3404[0] == 1 && iLocal_3404[1] == 1 && iLocal_3404[2] == 1 && iLocal_3404[3] == 1 &&
		iLocal_3404[4] == 1 && iLocal_3404[5] == 1 && iLocal_3404[6] == 1 && iLocal_3404[7] == 1 &&
		iLocal_3404[8] == 1 && iLocal_3404[9] == 1 && iLocal_3404[10] == 1 && iLocal_3404[11] == 1 &&
		iLocal_3404[12] == 1 && iLocal_3404[13] == 1 && iLocal_3404[14] == 1 && iLocal_3404[15] == 1 &&
		iLocal_3404[16] == 1 && iLocal_3404[17] == 1 && iLocal_3404[18] == 1 && iLocal_3404[19] == 1 &&
		iLocal_3404[20] == 1 && iLocal_3404[21] == 1 && iLocal_3404[22] == 1 && iLocal_3404[23] == 1 &&
		iLocal_3404[24] == 1) {
		return true;
	}
	return false;
}

// Position - 0x1B1E5
void func_309() {
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (entity::does_entity_exist(iLocal_3121[4])) {
		if (vehicle::is_vehicle_driveable(iLocal_3121[4], 0)) {
			if (vehicle::is_playback_going_on_for_vehicle(iLocal_3121[4])) {
				vLocal_3303 = {entity::get_entity_coords(player::player_ped_id(), 1)};
				vVar3 = {entity::get_entity_coords(iLocal_3121[4], 1)};
				if (vLocal_3303.x < vVar3.x - 10f && !entity::is_entity_on_screen(iLocal_3121[4])) {
					vehicle::stop_playback_recorded_vehicle(iLocal_3121[4]);
					entity::set_vehicle_as_no_longer_needed(&iLocal_3121[4]);
				}
			}
		}
	}
	if (entity::does_entity_exist(iLocal_3121[3])) {
		if (vehicle::is_vehicle_driveable(iLocal_3121[3], 0)) {
			if (vehicle::is_playback_going_on_for_vehicle(iLocal_3121[3])) {
				vLocal_3303 = {entity::get_entity_coords(player::player_ped_id(), 1)};
				vVar0 = {entity::get_entity_coords(iLocal_3121[3], 1)};
				if (vLocal_3303.x < vVar0.x - 10f && !entity::is_entity_on_screen(iLocal_3121[3])) {
					vehicle::stop_playback_recorded_vehicle(iLocal_3121[3]);
					entity::set_vehicle_as_no_longer_needed(&iLocal_3121[3]);
				}
			}
		}
	}
	if (entity::does_entity_exist(iLocal_3121[21])) {
		if (vehicle::is_vehicle_driveable(iLocal_3121[21], 0)) {
			if (vehicle::is_playback_going_on_for_vehicle(iLocal_3121[21])) {
				vLocal_3303 = {entity::get_entity_coords(player::player_ped_id(), 1)};
				vVar6 = {entity::get_entity_coords(iLocal_3121[21], 1)};
				if (vLocal_3303.x < vVar6.x - 10f && !entity::is_entity_on_screen(iLocal_3121[21])) {
					vehicle::stop_playback_recorded_vehicle(iLocal_3121[21]);
					entity::set_vehicle_as_no_longer_needed(&iLocal_3121[21]);
				}
			}
		}
	}
	if (entity::does_entity_exist(iLocal_3121[0])) {
		if (vehicle::is_vehicle_driveable(iLocal_3121[0], 0)) {
			if (entity::does_entity_exist(iLocal_3258)) {
				if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
						if (vehicle::get_time_position_in_recording(iLocal_3258) > 50000f &&
							!entity::is_entity_on_screen(iLocal_3121[0])) {
							if (vehicle::is_playback_going_on_for_vehicle(iLocal_3121[0])) {
								vehicle::stop_playback_recorded_vehicle(iLocal_3121[0]);
							}
							entity::set_vehicle_as_no_longer_needed(&iLocal_3121[0]);
						}
					}
				}
			}
		}
	}
	if (entity::does_entity_exist(iLocal_3264)) {
		if (vehicle::is_vehicle_driveable(iLocal_3264, 0)) {
			if (entity::does_entity_exist(iLocal_3258)) {
				if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
						if (vehicle::get_time_position_in_recording(iLocal_3258) > 90000f &&
							!entity::is_entity_on_screen(iLocal_3264)) {
							graphics::stop_particle_fx_looped(uLocal_3755[0], 0);
							graphics::stop_particle_fx_looped(uLocal_3755[1], 0);
							graphics::stop_particle_fx_looped(uLocal_3755[2], 0);
							if (entity::does_entity_exist(uLocal_3223[0])) {
								entity::set_ped_as_no_longer_needed(&uLocal_3223[0]);
							}
							if (entity::does_entity_exist(uLocal_3223[1])) {
								entity::set_ped_as_no_longer_needed(&uLocal_3223[1]);
							}
							if (entity::does_entity_exist(uLocal_3223[2])) {
								entity::set_ped_as_no_longer_needed(&uLocal_3223[2]);
							}
							if (entity::does_entity_exist(uLocal_3223[3])) {
								entity::set_ped_as_no_longer_needed(&uLocal_3223[3]);
							}
							entity::set_vehicle_as_no_longer_needed(&iLocal_3264);
							streaming::remove_anim_dict("missheist_agency3aig_lift_waitped_a");
						}
					}
				}
			}
		}
	}
}

// Position - 0x1B4B4
void func_310(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) {
	int iVar0;
	float fVar1;
	float fVar2;

	fVar2 = fParam2 * fParam3;
	if (ui::does_blip_exist(iParam0)) {
		if (entity::does_entity_exist(iParam1) && entity::does_entity_exist(player::player_ped_id()) &&
			!ped::is_ped_injured(player::player_ped_id())) {
			if (entity::is_entity_a_vehicle(iParam1)) {
				if (vehicle::is_vehicle_driveable(entity::get_vehicle_index_from_entity_index(iParam1), 0)) {
					fVar1 = gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1),
																  entity::get_entity_coords(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4) {
						iVar0 = system::round(255f * (fVar1 - fVar2) / (fParam2 - fVar2));
						if (iVar0 <= 0) {
							iVar0 = 0;
						}
						if (iVar0 >= 255) {
							iVar0 = 255;
						}
						ui::set_blip_flashes(iParam0, 1);
						ui::set_blip_alpha(iParam0, 255 - iVar0);
					}
					else {
						ui::set_blip_flashes(iParam0, 0);
						ui::set_blip_alpha(iParam0, 255);
					}
				}
			}
			else if (entity::is_entity_a_ped(iParam1)) {
				if (!ped::is_ped_injured(entity::get_ped_index_from_entity_index(iParam1))) {
					fVar1 = gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1),
																  entity::get_entity_coords(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4) {
						iVar0 = system::round(255f * (fVar1 - fVar2) / (fParam2 - fVar2));
						if (iVar0 <= 0) {
							iVar0 = 0;
						}
						if (iVar0 >= 255) {
							iVar0 = 255;
						}
						ui::set_blip_flashes(iParam0, 1);
						ui::set_blip_alpha(iParam0, 255 - iVar0);
					}
					else {
						ui::set_blip_flashes(iParam0, 0);
						ui::set_blip_alpha(iParam0, 255);
					}
				}
			}
		}
	}
}

// Position - 0x1B60D
void func_311() {
	if (entity::does_entity_exist(iLocal_3121[2])) {
		if (vehicle::is_vehicle_driveable(iLocal_3121[2], 0)) {
			if (entity::does_entity_exist(iLocal_3258)) {
				if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
						if (vehicle::get_time_position_in_recording(iLocal_3258) < 50530f) {
							if (!vehicle::get_is_vehicle_engine_running(iLocal_3121[2])) {
								vehicle::set_vehicle_engine_on(iLocal_3121[2], 1, 1, 0);
							}
						}
						else if (vehicle::get_is_vehicle_engine_running(iLocal_3121[2])) {
							vehicle::set_vehicle_engine_on(iLocal_3121[2], 0, 0, 0);
						}
					}
				}
			}
		}
	}
	if (entity::does_entity_exist(iLocal_3121[5])) {
		if (vehicle::is_vehicle_driveable(iLocal_3121[5], 0)) {
			if (!vehicle::get_is_vehicle_engine_running(iLocal_3121[5])) {
				vehicle::set_vehicle_engine_on(iLocal_3121[5], 1, 1, 0);
			}
		}
	}
	if (entity::does_entity_exist(uLocal_3260[0])) {
		if (vehicle::is_vehicle_driveable(uLocal_3260[0], 0)) {
			if (!vehicle::get_is_vehicle_engine_running(uLocal_3260[0])) {
				vehicle::set_vehicle_engine_on(uLocal_3260[0], 1, 1, 0);
			}
			if (vehicle::is_vehicle_seat_free(uLocal_3260[0], -1, 0)) {
				if (!entity::does_entity_exist(uLocal_3254[0])) {
					streaming::request_model(joaat("s_m_m_gentransport"));
					if (streaming::has_model_loaded(joaat("s_m_m_gentransport"))) {
						uLocal_3254[0] =
							ped::create_ped_inside_vehicle(uLocal_3260[0], 26, joaat("s_m_m_gentransport"), -1, 1, 1);
						streaming::set_model_as_no_longer_needed(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
	if (entity::does_entity_exist(uLocal_3260[1])) {
		if (vehicle::is_vehicle_driveable(uLocal_3260[1], 0)) {
			if (!vehicle::get_is_vehicle_engine_running(uLocal_3260[1])) {
				vehicle::set_vehicle_engine_on(uLocal_3260[1], 1, 1, 0);
			}
			if (vehicle::is_vehicle_seat_free(uLocal_3260[1], -1, 0)) {
				if (!entity::does_entity_exist(uLocal_3254[1])) {
					streaming::request_model(joaat("s_m_m_gentransport"));
					if (streaming::has_model_loaded(joaat("s_m_m_gentransport"))) {
						uLocal_3254[1] =
							ped::create_ped_inside_vehicle(uLocal_3260[1], 26, joaat("s_m_m_gentransport"), -1, 1, 1);
						streaming::set_model_as_no_longer_needed(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
}

// Position - 0x1B7E3
void func_312() {
	if (iLocal_3181 == 0) {
		audio::request_script_audio_bank("SCRIPT\Trv_4_747_Cop_Cars", 0, -1);
		audio::request_script_audio_bank("SCRIPT\Trv_4_747_Plane_Explosion", 0, -1);
		audio::request_script_audio_bank("SCRIPT\Trv_4_747_Tanker_Explosion", 0, -1);
		audio::request_script_audio_bank("SCRIPT\TV_Monitors", 0, -1);
		if (iLocal_3392 == 0) {
			iLocal_3213 = audio::get_sound_id();
			iLocal_3392 = 1;
		}
		if (iLocal_3393 == 0) {
			iLocal_3214 = audio::get_sound_id();
			iLocal_3393 = 1;
		}
		if (iLocal_3394 == 0) {
			iLocal_3215 = audio::get_sound_id();
			iLocal_3394 = 1;
		}
		if (iLocal_3395 == 0) {
			iLocal_3216 = audio::get_sound_id();
			iLocal_3395 = 1;
		}
		if (iLocal_3396 == 0) {
			iLocal_3217 = audio::get_sound_id();
			iLocal_3396 = 1;
		}
		if (iLocal_3391 == 0) {
			iLocal_3218 = audio::get_sound_id();
			iLocal_3391 = 1;
		}
		if (iLocal_3397 == 0) {
			iLocal_3219 = audio::get_sound_id();
			iLocal_3397 = 1;
		}
		if (iLocal_3345 == 1) {
			func_105();
			iLocal_3345 = 0;
		}
		if (!cam::does_cam_exist(iLocal_3289)) {
			iLocal_3289 = cam::create_cam("DEFAULT_SCRIPTED_CAMERA", 1);
			cam::set_cam_fov(iLocal_3289, 40f);
		}
		iLocal_3343 = 0;
		iLocal_3337 = 0;
		iLocal_3349 = 0;
		iLocal_3333 = 0;
		iLocal_3328 = 0;
		iLocal_3334 = 0;
		iLocal_3327 = 0;
		iLocal_3363 = 0;
		iLocal_3365[0] = 0;
		iLocal_3369[0] = 0;
		iLocal_3365[1] = 0;
		iLocal_3369[1] = 0;
		iLocal_3365[2] = 0;
		iLocal_3372 = 0;
		iLocal_3373 = 0;
		iLocal_3331 = 0;
		iLocal_3332 = 0;
		iLocal_3330 = 0;
		iLocal_3377 = 0;
		iLocal_3380 = 0;
		iLocal_3381 = 0;
		iLocal_3382 = 0;
		iLocal_3384 = 0;
		iLocal_3383 = 0;
		iLocal_3385 = 0;
		iLocal_3386 = 0;
		iLocal_3387 = 0;
		iLocal_3388 = 0;
		iLocal_3389 = 0;
		iLocal_3390 = 0;
		iLocal_3398 = 0;
		iLocal_3399 = 0;
		iLocal_3401 = 0;
		iLocal_3402 = 0;
		iLocal_3434 = 0;
		iLocal_3435 = 0;
		iLocal_3551 = 0;
		iLocal_3351 = 1;
		iLocal_3352 = 1;
		iLocal_3360 = 1;
		iLocal_3440 = 0;
		iLocal_3441 = 0;
		iLocal_3466 = 0;
		iLocal_3468 = 0;
		iLocal_3475 = 0;
		iLocal_3476 = 0;
		iLocal_3478 = 0;
		iLocal_3480[0] = 0;
		iLocal_3480[1] = 0;
		iLocal_3483[0] = 0;
		iLocal_3483[1] = 0;
		iLocal_3486 = 0;
		iLocal_3487 = 0;
		iLocal_3489 = 0;
		iLocal_3508 = 0;
		iLocal_3509 = 0;
		iLocal_3510 = 0;
		iLocal_3540 = 0;
		iLocal_3541 = 0;
		iLocal_3552 = 0;
		iLocal_3185 = 0;
		iLocal_3198 = 0;
		iLocal_3189 = 0;
		while (iLocal_3189 <= 2) {
			iLocal_3543[iLocal_3189] = 0;
			iLocal_3547[iLocal_3189] = 0;
			iLocal_3189++;
		}
		iLocal_3189 = 0;
		while (iLocal_3189 <= 2) {
			iLocal_3571[iLocal_3189] = 0;
			iLocal_3189++;
		}
		iLocal_3189 = 0;
		while (iLocal_3189 <= 6) {
			iLocal_3490[iLocal_3189] = 0;
			iLocal_3498[iLocal_3189] = 0;
			iLocal_3189++;
		}
		streaming::request_ptfx_asset();
		iLocal_89 = 1;
		iLocal_95 = 1;
		func_257();
		iLocal_3184 = ui::get_default_script_rendertarget_render_id();
		gameplay::clear_area(-823.71f, -2548.2f, 13.75f, 20f, 1, 0, 0, 0);
		ped::set_ped_non_creation_area(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f);
		pathfind::set_ped_paths_in_area(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, 0, 0);
		pathfind::set_roads_in_area(-482f, -2118f, 6f, -1072f, -2724f, 17f, 0, 1);
		func_111(2, 1);
		func_314("BB_Chase", 45, 0, 1);
		player::set_max_wanted_level(3);
		func_17(&uLocal_3578, 0, player::player_ped_id(), "MICHAEL", 0, 1);
		if (cam::is_screen_faded_out()) {
			if (!func_24()) {
				streaming::load_scene(entity::get_entity_coords(player::player_ped_id(), 1));
			}
			func_21(iLocal_3259, -1, 1);
		}
		iLocal_3182 = 0;
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1) {
		player::set_player_control(player::player_id(), 1, 0);
		func_313();
		iLocal_3181 = 2;
	}
	if (iLocal_3181 == 2) {
		if (!entity::does_entity_exist(iLocal_3271)) {
			iLocal_3271 = vehicle::create_vehicle(joaat("blista"), 0f, 0f, 1f, 0f, 1, 1);
		}
		while (!vehicle::has_vehicle_recording_been_loaded(45, "BB_Chase")) {
			system::wait(0);
		}
		if (cam::is_screen_faded_out()) {
			if (vehicle::is_vehicle_driveable(iLocal_3259, 0)) {
				vehicle::set_vehicle_engine_on(iLocal_3259, 1, 1, 0);
				vehicle::set_vehicle_forward_speed(iLocal_3259, 30f);
				player::set_player_control(player::player_id(), 1, 0);
			}
		}
		if (entity::does_entity_exist(iLocal_3258)) {
			if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
				vehicle::start_playback_recorded_vehicle(iLocal_3258, 45, "BB_Chase", 1);
				system::settimerb(0);
				func_240();
				gameplay::_set_unk_map_flag(2);
				if (entity::does_entity_exist(iLocal_3259)) {
					if (vehicle::is_vehicle_driveable(iLocal_3259, 0)) {
						entity::set_vehicle_as_no_longer_needed(&iLocal_3259);
					}
				}
				if (!cam::is_screen_faded_in()) {
					cam::do_screen_fade_in(800);
				}
				iLocal_3181 = 0;
				iLocal_3180 = 4;
			}
		}
	}
}

// Position - 0x1BC21
void func_313() {
	vLocal_2489[0 /*3*/] = {-583.6427f, -2157.497f, 5.7947f};
	fLocal_1209[0] = -0.0003f;
	fLocal_1225[0] = -0.0085f;
	fLocal_1241[0] = 0.9998f;
	fLocal_1257[0] = 0.0158f;
	iLocal_2861[0] = joaat("blista");
	vLocal_1963[4 /*3*/] = {-827.2035f, -2575.697f, 13.5688f};
	fLocal_109[4] = 0.0004f;
	fLocal_285[4] = -0.0003f;
	fLocal_461[4] = -0.2526f;
	fLocal_637[4] = 0.9676f;
	iLocal_1294[4] = 50;
	fLocal_813[4] = 20310f;
	iLocal_2685[4] = joaat("manana");
	vLocal_2489[1 /*3*/] = {-1033.717f, -2949.014f, 13.4922f};
	fLocal_1209[1] = 0.0032f;
	fLocal_1225[1] = -0.0003f;
	fLocal_1241[1] = -0.0255f;
	fLocal_1257[1] = 0.9997f;
	iLocal_2861[1] = joaat("bison2");
	vLocal_2535[0 /*3*/] = {-1178.365f, -2845.981f, 13.9027f};
	fLocal_993[0] = 0.0018f;
	fLocal_1029[0] = 0.0123f;
	fLocal_1065[0] = 0.9644f;
	fLocal_1101[0] = 0.2642f;
	iLocal_1822[0] = 9;
	fLocal_1137[0] = 22357f;
	fLocal_1173[0] = 1f;
	iLocal_2877[0] = joaat("buzzard");
	vLocal_2535[1 /*3*/] = {-1376.197f, -2755.167f, 14.0646f};
	fLocal_993[1] = -0.0012f;
	fLocal_1029[1] = 0.0013f;
	fLocal_1065[1] = 0.8439f;
	fLocal_1101[1] = -0.5365f;
	iLocal_1822[1] = 10;
	fLocal_1137[1] = 27135f;
	fLocal_1173[1] = 1f;
	iLocal_2877[1] = joaat("packer");
	vLocal_2535[2 /*3*/] = {-1342.543f, -2688.482f, 22.8254f};
	fLocal_993[2] = 0.0057f;
	fLocal_1029[2] = -0.0014f;
	fLocal_1065[2] = -0.2451f;
	fLocal_1101[2] = 0.9695f;
	iLocal_1822[2] = 11;
	fLocal_1137[2] = 35135f;
	fLocal_1173[2] = 1f;
	iLocal_2877[2] = joaat("jet");
	vLocal_2535[3 /*3*/] = {-898.3506f, -2698.965f, 20.159f};
	fLocal_993[3] = 0.0065f;
	fLocal_1029[3] = 0.0191f;
	fLocal_1065[3] = -0.2629f;
	fLocal_1101[3] = 0.9646f;
	iLocal_1822[3] = 3;
	fLocal_1137[3] = 6764f;
	fLocal_1173[3] = 1f;
	iLocal_2877[3] = joaat("bus");
	vLocal_2535[4 /*3*/] = {-576.655f, -2231.905f, 5.2834f};
	fLocal_993[4] = 0.0043f;
	fLocal_1029[4] = 0.0331f;
	fLocal_1065[4] = -0.3125f;
	fLocal_1101[4] = 0.9493f;
	iLocal_1822[4] = 4;
	fLocal_1137[4] = 2102f;
	fLocal_1173[4] = 1f;
	iLocal_2877[4] = joaat("bison");
	vLocal_2535[5 /*3*/] = {-994.9925f, -3154.125f, 23.1145f};
	fLocal_993[5] = 0.0056f;
	fLocal_1029[5] = 0.0029f;
	fLocal_1065[5] = 0.4915f;
	fLocal_1101[5] = 0.8708f;
	iLocal_1822[5] = 21;
	fLocal_1137[5] = 92500f;
	fLocal_1173[5] = 1f;
	iLocal_2877[5] = joaat("jet");
	vLocal_2535[7 /*3*/] = {-553.3315f, -2073.951f, 6.8909f};
	fLocal_993[7] = 0.0072f;
	fLocal_1029[7] = 0.0176f;
	fLocal_1065[7] = 0.9739f;
	fLocal_1101[7] = -0.2263f;
	iLocal_1822[7] = 54;
	fLocal_1137[7] = 0f;
	fLocal_1173[7] = 1f;
	iLocal_2877[7] = joaat("police3");
	vLocal_2535[8 /*3*/] = {-561.7264f, -2076.761f, 6.7664f};
	fLocal_993[8] = -0.027f;
	fLocal_1029[8] = 0.0016f;
	fLocal_1065[8] = 0.9169f;
	fLocal_1101[8] = -0.3981f;
	iLocal_1822[8] = 108;
	fLocal_1137[8] = 150f;
	fLocal_1173[8] = 1f;
	iLocal_2877[8] = joaat("police3");
	vLocal_2535[11 /*3*/] = {-1563.918f, -2745.409f, 13.5643f};
	fLocal_993[11] = -0.0022f;
	fLocal_1029[11] = -0.0019f;
	fLocal_1065[11] = 0.928f;
	fLocal_1101[11] = -0.3726f;
	iLocal_1822[11] = 111;
	fLocal_1137[11] = 36000f;
	fLocal_1173[11] = 1f;
	iLocal_2877[11] = joaat("police3");
	vLocal_2535[12 /*3*/] = {-1026.024f, -2336.396f, 13.5678f};
	fLocal_993[12] = -0.0083f;
	fLocal_1029[12] = -0.0054f;
	fLocal_1065[12] = 0.55f;
	fLocal_1101[12] = 0.8351f;
	iLocal_1822[12] = 112;
	fLocal_1137[12] = 60000f;
	fLocal_1173[12] = 1f;
	iLocal_2877[12] = joaat("police3");
	vLocal_2535[13 /*3*/] = {-1013.316f, -2340.457f, 13.5678f};
	fLocal_993[13] = -0.0086f;
	fLocal_1029[13] = -0.005f;
	fLocal_1065[13] = 0.5052f;
	fLocal_1101[13] = 0.8629f;
	iLocal_1822[13] = 113;
	fLocal_1137[13] = 60000f;
	fLocal_1173[13] = 1f;
	iLocal_2877[13] = joaat("police3");
	vLocal_2535[14 /*3*/] = {-1221.049f, -2731.169f, 13.5681f};
	fLocal_993[14] = -0.0083f;
	fLocal_1029[14] = -0.0057f;
	fLocal_1065[14] = 0.6469f;
	fLocal_1101[14] = 0.7625f;
	iLocal_1822[14] = 61;
	fLocal_1137[14] = 80000f;
	fLocal_1173[14] = 1f;
	iLocal_2877[14] = joaat("police3");
	vLocal_2535[15 /*3*/] = {-1227.203f, -2735.872f, 13.568f};
	fLocal_993[15] = -0.0041f;
	fLocal_1029[15] = -0.0091f;
	fLocal_1065[15] = 0.9133f;
	fLocal_1101[15] = 0.4072f;
	iLocal_1822[15] = 62;
	fLocal_1137[15] = 80000f;
	fLocal_1173[15] = 1f;
	iLocal_2877[15] = joaat("police3");
	vLocal_2535[19 /*3*/] = {-1240.048f, -2203.457f, 14.0347f};
	fLocal_993[19] = 0.0002f;
	fLocal_1029[19] = 0.0018f;
	fLocal_1065[19] = 0.9611f;
	fLocal_1101[19] = -0.2763f;
	iLocal_1822[19] = 66;
	fLocal_1137[19] = 55125f;
	fLocal_1173[19] = 1f;
	iLocal_2877[19] = joaat("firetruk");
	vLocal_2535[20 /*3*/] = {-438.0192f, -2060.751f, 73.6354f};
	fLocal_993[20] = -0.0005f;
	fLocal_1029[20] = 0.0018f;
	fLocal_1065[20] = 0.9559f;
	fLocal_1101[20] = 0.2938f;
	iLocal_1822[20] = 67;
	fLocal_1137[20] = 0f;
	fLocal_1173[20] = 1f;
	iLocal_2877[20] = joaat("maverick");
	vLocal_2535[21 /*3*/] = {-546.8047f, -2187.925f, 5.8819f};
	fLocal_993[21] = -0.0252f;
	fLocal_1029[21] = -0.0034f;
	fLocal_1065[21] = 0.9369f;
	fLocal_1101[21] = 0.3487f;
	iLocal_1822[21] = 5;
	fLocal_1137[21] = 3834f;
	fLocal_1173[21] = 1f;
	iLocal_2877[21] = joaat("blista");
	vLocal_2535[22 /*3*/] = {-1001.674f, -2947.732f, 13.3947f};
	fLocal_993[22] = 0.001f;
	fLocal_1029[22] = -0.0004f;
	fLocal_1065[22] = 0.8616f;
	fLocal_1101[22] = 0.5075f;
	iLocal_1822[22] = 6;
	fLocal_1137[22] = 20176f;
	fLocal_1173[22] = 1f;
	iLocal_2877[22] = joaat("airtug");
	vLocal_2535[23 /*3*/] = {-1249.588f, -2525.9f, 13.3942f};
	fLocal_993[23] = 0.001f;
	fLocal_1029[23] = -0.0001f;
	fLocal_1065[23] = 0.9749f;
	fLocal_1101[23] = -0.2228f;
	iLocal_1822[23] = 7;
	fLocal_1137[23] = 48538f;
	fLocal_1173[23] = 1f;
	iLocal_2877[23] = joaat("airtug");
	vLocal_2535[24 /*3*/] = {-1362.538f, -2625.609f, 13.3895f};
	fLocal_993[24] = -0.0001f;
	fLocal_1029[24] = 0.0018f;
	fLocal_1065[24] = 0.5344f;
	fLocal_1101[24] = 0.8452f;
	iLocal_1822[24] = 8;
	fLocal_1137[24] = 75112f;
	fLocal_1173[24] = 1f;
	iLocal_2877[24] = joaat("airtug");
}

// Position - 0x1C535
void func_314(char *sParam0, int iParam1, int iParam2, int iParam3) {
	vector3 vVar0;

	StringCopy(&cLocal_2668, sParam0, 64);
	bLocal_85 = true;
	iLocal_90 = 0;
	iLocal_1946 = 0;
	iLocal_1947 = 0;
	iLocal_1948 = 0;
	iLocal_1949 = iParam1;
	iLocal_1950 = 0;
	iLocal_1951 = 0;
	iLocal_1952 = 0;
	iLocal_1956 = 0;
	iLocal_1959 = 0;
	iLocal_1957 = -1;
	iLocal_1958 = -1;
	iLocal_1960 = 0;
	iLocal_1961 = 0;
	fLocal_1289 = 0f;
	fLocal_1290 = 0f;
	fLocal_1275 = 0f;
	iLocal_91 = 0;
	if (player::is_player_playing(player::player_id())) {
		vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
		vLocal_2644.x = vVar0.x - 100f;
		vLocal_2644.y = vVar0.y - 100f;
		vLocal_2644.z = vVar0.z - 100f;
		vLocal_2647.x = vVar0.x + 100f;
		vLocal_2647.y = vVar0.y + 100f;
		vLocal_2647.z = vVar0.z + 100f;
		pathfind::set_roads_in_area(vLocal_2644, vLocal_2647, 0, 0);
		if (iParam2) {
			gameplay::clear_area_of_vehicles(vVar0, 500f, 0, 0, 0, 0, 0);
		}
	}
	ped::add_relationship_group("rgh_traffic", &iLocal_2684);
	func_303();
	if (iParam3) {
		func_166(1);
	}
	if (player::is_player_playing(player::player_id())) {
		player::set_dispatch_cops_for_player(player::player_id(), 0);
		ped::set_create_random_cops(0);
	}
	func_171();
}

// Position - 0x1C656
void func_315() {
	if (iLocal_3181 == 0) {
		unk1::_0x293220DA1B46CEBC(0f, 14f, 4);
		if (iLocal_3345 == 1) {
			func_105();
			iLocal_3345 = 0;
		}
		iLocal_3359 = 0;
		iLocal_3360 = 0;
		iLocal_3362 = 0;
		iLocal_3364 = 0;
		iLocal_3379 = 0;
		iLocal_3327 = 0;
		iLocal_3328 = 0;
		iLocal_3331 = 0;
		iLocal_3333 = 0;
		iLocal_3334 = 0;
		iLocal_3335 = 0;
		iLocal_3336 = 0;
		iLocal_3337 = 0;
		iLocal_3338 = 0;
		iLocal_3343 = 0;
		iLocal_3352 = 0;
		iLocal_3350 = 0;
		iLocal_3439 = 0;
		iLocal_3442 = 0;
		iLocal_3523 = 0;
		iLocal_3378 = 0;
		iLocal_3351 = 1;
		iLocal_3185 = 0;
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			iLocal_3361 = 1;
		}
		else {
			iLocal_3361 = 0;
		}
		func_17(&uLocal_3578, 0, player::player_ped_id(), "MICHAEL", 0, 1);
		pathfind::set_ignore_no_gps_flag(1);
		pathfind::set_roads_in_area(-617f, -2274f, 0f, -406.01f, -2044f, 15f, 0, 1);
		iLocal_3188 = gameplay::get_game_timer();
		if (cam::is_screen_faded_out()) {
			if (!func_24()) {
				streaming::load_scene(entity::get_entity_coords(player::player_ped_id(), 1));
			}
			func_21(0, -1, 1);
			entity::set_vehicle_as_no_longer_needed(&iLocal_3259);
			entity::set_vehicle_as_no_longer_needed(&iLocal_3276);
			entity::set_vehicle_as_no_longer_needed(&iLocal_3277);
		}
		if (!cam::is_screen_faded_in()) {
			cam::do_screen_fade_in(800);
		}
		if (!ui::does_blip_exist(iLocal_3287)) {
			iLocal_3287 = func_320(vLocal_3300, 0);
		}
		audio::trigger_music_event("TRV4_GAMEPLAY_START");
		vLocal_3318 = {entity::get_entity_coords(player::player_ped_id(), 1)};
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1) {
		if (iLocal_3350 == 0 && iLocal_3364 == 1) {
			if (!func_234() || !ui::is_subtitle_preference_switched_on()) {
				func_20("TRV4_GO1", 7500, 1);
				iLocal_3350 = 1;
			}
		}
		if (iLocal_3378 == 0 && !func_319()) {
			if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1),
													  vLocal_3300, 1) < 800f) {
				iLocal_3187 = gameplay::get_random_int_in_range(0, 2);
				if (iLocal_3187 == 0) {
					audio::play_police_report("SCRIPTED_SCANNER_REPORT_Sol_3_01", 0f);
					unk1::_0x293220DA1B46CEBC(0f, 6f, 3);
					iLocal_3378 = 1;
				}
				if (iLocal_3187 == 1) {
					audio::play_police_report("SCRIPTED_SCANNER_REPORT_Sol_3_02", 0f);
					unk1::_0x293220DA1B46CEBC(0f, 6f, 3);
					iLocal_3378 = 1;
				}
			}
		}
		if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1), vLocal_3300,
												  1) < 600f) {
			if (!entity::does_entity_exist(iLocal_3258)) {
				streaming::request_model(joaat("cogcabrio"));
				if (streaming::has_model_loaded(joaat("cogcabrio"))) {
					iLocal_3258 =
						vehicle::create_vehicle(joaat("cogcabrio"), -428.0226f, -2153.558f, 9.2992f, 90.9098f, 1, 1);
					entity::set_entity_proofs(iLocal_3258, 0, 1, 1, 1, 0, 0, 0, 0);
					vehicle::set_vehicle_colours(iLocal_3258, 27, 27);
					streaming::set_model_as_no_longer_needed(joaat("cogcabrio"));
					audio::_dynamic_mixer_related_fn(iLocal_3258, "SOL_3_MOLLY_CAR_Group", 0);
				}
			}
			if (!entity::does_entity_exist(iLocal_3222)) {
				streaming::request_model(joaat("ig_molly"));
				if (streaming::has_model_loaded(joaat("ig_molly"))) {
					if (entity::does_entity_exist(iLocal_3258)) {
						if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
							iLocal_3222 = ped::create_ped_inside_vehicle(iLocal_3258, 26, joaat("ig_molly"), -1, 1, 1);
							entity::set_entity_invincible(iLocal_3222, 1);
							ped::set_ped_can_be_targetted(iLocal_3222, 0);
							streaming::set_model_as_no_longer_needed(joaat("cogcabrio"));
							streaming::set_model_as_no_longer_needed(joaat("ig_molly"));
							ped::set_ped_relationship_group_hash(iLocal_3222, 1862763509);
							iLocal_3360 = 1;
						}
					}
				}
			}
		}
		else {
			if (entity::does_entity_exist(iLocal_3222)) {
				ped::delete_ped(&iLocal_3222);
			}
			if (entity::does_entity_exist(iLocal_3258)) {
				vehicle::delete_vehicle(&iLocal_3258);
			}
		}
		if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1), vLocal_3300,
												  1) < 500f) {
			if (iLocal_3362 == 0) {
				iLocal_3293 = unk_0x67D02A194A2FC2BD("BREAKING_NEWS");
				streaming::request_model(joaat("police3"));
				streaming::request_model(joaat("maverick"));
				streaming::request_model(joaat("bison"));
				streaming::request_model(joaat("blista"));
				vehicle::request_vehicle_recording(45, "BB_Chase");
				vehicle::request_vehicle_recording(35, "BB_Chase");
				vehicle::request_vehicle_recording(2, "BB_Chase");
				vehicle::request_vehicle_recording(54, "BB_Chase");
				vehicle::request_vehicle_recording(55, "BB_Chase");
				vehicle::request_vehicle_recording(67, "BB_Chase");
				func_163(1, "BB_Chase");
				audio::prepare_music_event("TRV4_CHASE");
				iLocal_3362 = 1;
			}
		}
		else if (iLocal_3362 == 1) {
			streaming::set_model_as_no_longer_needed(joaat("police3"));
			streaming::set_model_as_no_longer_needed(joaat("maverick"));
			streaming::set_model_as_no_longer_needed(joaat("bison"));
			streaming::set_model_as_no_longer_needed(joaat("blista"));
			vehicle::remove_vehicle_recording(45, "BB_Chase");
			vehicle::remove_vehicle_recording(35, "BB_Chase");
			vehicle::remove_vehicle_recording(2, "BB_Chase");
			vehicle::remove_vehicle_recording(54, "BB_Chase");
			vehicle::remove_vehicle_recording(55, "BB_Chase");
			vehicle::remove_vehicle_recording(67, "BB_Chase");
			func_318(1, "BB_Chase");
			audio::cancel_music_event("TRV4_CHASE");
			iLocal_3362 = 0;
		}
		if (iLocal_3379 == 0) {
			if (gameplay::get_game_timer() > iLocal_3188 + 135000) {
				ui::clear_prints();
				func_20("TRV4_WARN1", 7500, 1);
				iLocal_3188 = gameplay::get_game_timer();
				iLocal_3379 = 1;
			}
		}
		if (iLocal_3379 == 1) {
			if (gameplay::get_game_timer() > iLocal_3188 + 135000) {
				func_212("TRV4_FAIL1");
			}
		}
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (!audio::is_audio_scene_active("SOL_3_DRIVE_TO_AIRPORT")) {
				audio::start_audio_scene("SOL_3_DRIVE_TO_AIRPORT");
			}
			if (iLocal_3439 == 0) {
				audio::trigger_music_event("TRV4_CAR_ENTERED");
				iLocal_3439 = 1;
			}
			if (!entity::does_entity_exist(iLocal_3259)) {
				iLocal_3259 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
				entity::set_entity_proofs(iLocal_3259, 0, 1, 0, 0, 0, 0, 0, 0);
				vehicle::add_vehicle_upsidedown_check(iLocal_3259);
				vehicle::set_vehicle_has_strong_axles(iLocal_3259, 1);
			}
		}
		else if (entity::does_entity_exist(iLocal_3259)) {
			if (vehicle::is_vehicle_driveable(iLocal_3259, 0)) {
				if (iLocal_3361 == 0) {
					entity::set_entity_proofs(iLocal_3259, 0, 0, 0, 0, 0, 0, 0, 0);
					iLocal_3361 = 1;
				}
				if (iLocal_3353 == 1) {
					vehicle::remove_vehicle_upsidedown_check(iLocal_3259);
					iLocal_3353 = 0;
				}
				if (entity::does_entity_belong_to_this_script(iLocal_3259, 1)) {
					entity::set_vehicle_as_no_longer_needed(&iLocal_3259);
				}
			}
		}
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (iLocal_3442 == 0) {
				ui::_0x3D3D15AF7BCAAF83(156, 1, 0);
				ui::_0xA905192A6781C41B(-244f, -1842.74f, 28.48f);
				ui::_0xA905192A6781C41B(-1.5f, -2014.4f, 11.5f);
				ui::_0xA905192A6781C41B(-498.7f, -2136.5f, 8.4f);
				ui::_0x3DDA37128DD1ACA8(1);
				iLocal_3442 = 1;
			}
		}
		else if (iLocal_3442 == 1) {
			ui::_0x3DDA37128DD1ACA8(0);
			iLocal_3442 = 0;
		}
		if (iLocal_3362 == 1 && entity::does_entity_exist(iLocal_3258) && entity::does_entity_exist(iLocal_3222)) {
			if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
				if (weapon::has_entity_been_damaged_by_weapon(iLocal_3258, func_317(player::player_ped_id()), 0)) {
					func_316();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
				if (player::is_player_free_aiming_at_entity(player::player_id(), iLocal_3258)) {
					func_316();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
				if (entity::is_entity_at_coord(player::player_ped_id(), entity::get_entity_coords(iLocal_3258, 1), 200f,
											   132f, 100f, 0, 1, 0)) {
					iLocal_3359 = 0;
					func_316();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
				if (entity::is_entity_at_coord(player::player_ped_id(), -577f, -2051.5f, 7f, 84f, 87.5f, 15f, 0, 1,
											   0)) {
					iLocal_3359 = 1;
					func_316();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
				if (entity::is_entity_at_coord(player::player_ped_id(), -703.5f, -1969.5f, 10f, 53.5f, 62.5f, 10f, 0, 1,
											   0)) {
					ui::_0x67EEDEA1B9BAFD94();
					pathfind::set_ignore_no_gps_flag(0);
					iLocal_3359 = 1;
					func_316();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
		}
	}
}

// Position - 0x1CD65
void func_316() {
	while (!streaming::has_model_loaded(joaat("police3")) || !streaming::has_model_loaded(joaat("maverick")) ||
		   !streaming::has_model_loaded(joaat("bison")) || !streaming::has_model_loaded(joaat("blista"))) {
		system::wait(0);
	}
	while (!vehicle::has_vehicle_recording_been_loaded(45, "BB_Chase") ||
		   !vehicle::has_vehicle_recording_been_loaded(35, "BB_Chase") ||
		   !vehicle::has_vehicle_recording_been_loaded(2, "BB_Chase") ||
		   !vehicle::has_vehicle_recording_been_loaded(54, "BB_Chase") ||
		   !vehicle::has_vehicle_recording_been_loaded(55, "BB_Chase") ||
		   !vehicle::has_vehicle_recording_been_loaded(67, "BB_Chase")) {
		system::wait(0);
	}
}

// Position - 0x1CE11
var func_317(int iParam0) {
	var uVar0;

	weapon::get_current_ped_weapon(iParam0, &uVar0, 1);
	return uVar0;
}

// Position - 0x1CE25
void func_318(int iParam0, char *sParam1) { vehicle::remove_vehicle_recording(iParam0, sParam1); }

// Position - 0x1CE35
int func_319() {
	if (Global_15745 == 4) {
		if (audio::is_mobile_phone_call_ongoing()) {
			return 1;
		}
		else {
			return 0;
		}
	}
	return 0;
}

// Position - 0x1CE5A
int func_320(vector3 vParam0, int iParam3) {
	int iVar0;

	iVar0 = ui::add_blip_for_coord(vParam0);
	ui::set_blip_scale(iVar0, func_209(network::network_is_game_in_progress(), 1f, 1f));
	ui::set_blip_route(iVar0, iParam3);
	return iVar0;
}

// Position - 0x1CE86
void func_321() {
	if (iLocal_3181 == 0) {
		iLocal_3338 = 1;
		iLocal_3467 = 0;
		iLocal_3488 = 0;
		iLocal_3506 = 0;
		while (iLocal_3338 == 1) {
			unk1::_0x208784099002BC30("M_LegalTrouble", 0);
			switch (iLocal_3183) {
			case 0:
				cutscene::request_cutscene("sol_3_int", 8);
				if (func_365()) {
					while (!func_337(61, &uLocal_3743, 0, 1, 0, 0, 0)) {
						system::wait(0);
					}
					iLocal_3438 = 0;
					player::set_player_control(player::player_id(), 0, 0);
					func_196(1, 1, 1, 0);
					cutscene::register_entity_for_cutscene(player::player_ped_id(), "Michael", 0, 0, 0);
					if (entity::does_entity_exist(Global_88321[0])) {
						if (vehicle::is_vehicle_driveable(Global_88321[0], 0)) {
							entity::set_entity_as_mission_entity(Global_88321[0], 1, 1);
							iLocal_3259 = Global_88321[0];
						}
					}
					if (entity::does_entity_exist(Global_88321[1])) {
						if (vehicle::is_vehicle_driveable(Global_88321[1], 0)) {
							entity::set_entity_as_mission_entity(Global_88321[1], 1, 1);
							iLocal_3276 = Global_88321[1];
						}
					}
					if (entity::does_entity_exist(Global_88321[2])) {
						if (vehicle::is_vehicle_driveable(Global_88321[2], 0)) {
							entity::set_entity_as_mission_entity(Global_88321[2], 1, 1);
							iLocal_3277 = Global_88321[2];
						}
					}
					if (entity::does_entity_exist(Global_88321[3])) {
						if (vehicle::is_vehicle_driveable(Global_88321[3], 0)) {
							entity::set_entity_as_mission_entity(Global_88321[3], 1, 1);
							iLocal_3278 = Global_88321[3];
						}
					}
					cutscene::start_cutscene(0);
					unk1::_0x48621C9FCA3EBD28(4);
					func_336();
					if (!cam::is_screen_faded_in()) {
						cam::do_screen_fade_in(250);
					}
					iLocal_3183++;
				}
				break;

			case 1:
				if (iLocal_3467 == 0) {
					if (cutscene::is_cutscene_active()) {
						if (iLocal_3506 == 0) {
							if (entity::does_entity_exist(iLocal_3278)) {
								if (vehicle::is_vehicle_driveable(iLocal_3278, 0)) {
									if (vehicle::is_this_model_a_heli(entity::get_entity_model(iLocal_3278))) {
										vehicle::control_landing_gear(iLocal_3278, 2);
										entity::set_entity_coords(iLocal_3278, -1048.722f, -506.8387f, 35.0386f, 1, 0,
																  0, 1);
										entity::set_entity_heading(iLocal_3278, 357.1288f);
										vehicle::set_vehicle_doors_shut(iLocal_3278, 1);
										vehicle::set_vehicle_on_ground_properly(iLocal_3278, 1084227584);
										func_326(-1048.722f, -506.8387f, 35.0386f, 357.1288f, 0, 145);
										iLocal_3506 = 1;
									}
									if (vehicle::is_this_model_a_car(entity::get_entity_model(iLocal_3278)) ||
										vehicle::is_this_model_a_bike(entity::get_entity_model(iLocal_3278)) ||
										vehicle::is_this_model_a_bicycle(entity::get_entity_model(iLocal_3278)) ||
										vehicle::is_this_model_a_quadbike(entity::get_entity_model(iLocal_3278))) {
										if (entity::get_entity_model(iLocal_3278) != joaat("bus") &&
											entity::get_entity_model(iLocal_3278) != joaat("pounder") &&
											entity::get_entity_model(iLocal_3278) != joaat("packer") &&
											entity::get_entity_model(iLocal_3278) != joaat("airbus") &&
											entity::get_entity_model(iLocal_3278) != joaat("ambulance") &&
											entity::get_entity_model(iLocal_3278) != joaat("barracks") &&
											entity::get_entity_model(iLocal_3278) != joaat("barracks2") &&
											entity::get_entity_model(iLocal_3278) != joaat("benson") &&
											entity::get_entity_model(iLocal_3278) != joaat("biff")) {
											entity::set_entity_coords(iLocal_3278, -1027.657f, -486.6945f, 35.9571f, 1,
																	  0, 0, 1);
											entity::set_entity_heading(iLocal_3278, 207.7515f);
											vehicle::set_vehicle_on_ground_properly(iLocal_3278, 1084227584);
											func_326(-1027.657f, -486.6945f, 35.9571f, 207.7515f, 0, 145);
											iLocal_3506 = 1;
										}
									}
									if (!vehicle::is_this_model_a_heli(entity::get_entity_model(iLocal_3278)) &&
										!vehicle::is_this_model_a_car(entity::get_entity_model(iLocal_3278)) &&
										!vehicle::is_this_model_a_bike(entity::get_entity_model(iLocal_3278)) &&
										!vehicle::is_this_model_a_bicycle(entity::get_entity_model(iLocal_3278)) &&
										!vehicle::is_this_model_a_quadbike(entity::get_entity_model(iLocal_3278))) {
										vehicle::delete_vehicle(&iLocal_3278);
										iLocal_3506 = 1;
									}
								}
							}
						}
						func_324(&uLocal_3743, 0, 0, 2000, 1, 1, 0, 1);
						iLocal_3467 = 1;
					}
				}
				if (iLocal_3438 == 0) {
					ped::add_relationship_group("SecGuards", &iLocal_3576);
					ped::set_relationship_between_groups(5, 1862763509, iLocal_3576);
					ped::set_relationship_between_groups(5, iLocal_3576, 1862763509);
					ui::request_additional_text("TREV4", 0);
					iLocal_3438 = 1;
				}
				if (iLocal_3488 == 0) {
					if (cutscene::is_cutscene_playing()) {
						ped::clear_ped_wetness(player::player_ped_id());
						ped::clear_ped_blood_damage(player::player_ped_id());
						ped::reset_ped_visible_damage(player::player_ped_id());
						if (cutscene::get_cutscene_time() > 120000) {
							audio::trigger_music_event("TRV4_START");
							iLocal_3488 = 1;
						}
					}
				}
				if (cutscene::can_set_exit_state_for_registered_entity("Michael", 0)) {
					entity::set_entity_coords(player::player_ped_id(), -1012.268f, -480.0742f, 38.9757f, 1, 0, 0, 1);
					entity::set_entity_heading(player::player_ped_id(), 121.4087f);
					player::simulate_player_input_gait(player::player_id(), 2f, 3000, 0, 1, 0);
					ped::_0x2208438012482A1A(player::player_ped_id(), 0, 0);
					ped::force_ped_motion_state(player::player_ped_id(), -530524, 0, 0, 0);
				}
				if (cutscene::can_set_exit_state_for_camera(0)) {
					cam::set_gameplay_cam_relative_heading(0f);
				}
				if (!cutscene::is_cutscene_active()) {
					func_323(61);
					if (iLocal_3488 == 0) {
						audio::trigger_music_event("TRV4_START_CS_SKIP");
						iLocal_3488 = 1;
					}
					unk1::_0x81CBAE94390F9F89();
					func_196(0, 1, 1, 0);
					iLocal_3183++;
				}
				break;

			case 2:
				player::set_player_control(player::player_id(), 1, 0);
				if (entity::does_entity_exist(iLocal_3259)) {
					if (vehicle::is_vehicle_driveable(iLocal_3259, 0)) {
						if (entity::does_entity_belong_to_this_script(iLocal_3259, 1)) {
							entity::set_vehicle_as_no_longer_needed(&iLocal_3259);
						}
					}
				}
				if (entity::does_entity_exist(iLocal_3276)) {
					if (vehicle::is_vehicle_driveable(iLocal_3276, 0)) {
						if (entity::does_entity_belong_to_this_script(iLocal_3276, 1)) {
							entity::set_vehicle_as_no_longer_needed(&iLocal_3276);
						}
					}
				}
				if (entity::does_entity_exist(iLocal_3277)) {
					if (vehicle::is_vehicle_driveable(iLocal_3277, 0)) {
						if (entity::does_entity_belong_to_this_script(iLocal_3277, 1)) {
							entity::set_vehicle_as_no_longer_needed(&iLocal_3277);
						}
					}
				}
				func_322();
				iLocal_3338 = 0;
				iLocal_3183 = 0;
				iLocal_3181 = 0;
				iLocal_3180 = 2;
				break;
			}
			system::wait(0);
		}
	}
}

// Position - 0x1D40E
void func_322() { Global_55828 = 0; }

// Position - 0x1D41A
void func_323(int iParam0) {
	if (Global_88746 != -1) {
		if (iParam0 == Global_88746) {
			Global_88750 = 1;
			return;
		}
	}
}

// Position - 0x1D43E
void func_324(var *uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) {
	int iVar0;

	if (iParam4 == 1) {
		player::set_player_control(player::player_id(), player::is_player_control_on(player::player_id()), 64);
	}
	if (!cutscene::is_cutscene_playing()) {
		player::set_player_control(player::player_id(), !iParam1, 0);
	}
	if (iParam7) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			ped::remove_ped_helmet(player::player_ped_id(), 1);
		}
	}
	if (!iParam1 && iParam6) {
		cam::_0xC819F3CBB62BF692(0, 0, 3, 0);
	}
	else {
		cam::render_script_cams(iParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (iParam1) {
		ui::clear_help(1);
	}
	else {
		if (cam::does_cam_exist(uParam0->f_4)) {
			if (cam::is_cam_active(uParam0->f_4)) {
				cam::set_cam_active(uParam0->f_4, 0);
			}
			cam::destroy_cam(uParam0->f_4, 1);
		}
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			entity::set_entity_visible(player::player_ped_id(), 1, 0);
		}
		iVar0 = player::get_players_last_vehicle();
		if (entity::does_entity_exist(iVar0)) {
			entity::set_entity_visible(iVar0, 1, 0);
		}
		audio::release_named_script_audio_bank("TIME_LAPSE");
		if (audio::is_audio_scene_active("TOD_SHIFT_SCENE")) {
			audio::stop_sound(uParam0->f_10);
			audio::release_named_script_audio_bank("TIME_LAPSE");
			audio::stop_audio_scene("TOD_SHIFT_SCENE");
		}
	}
	func_196(iParam1, 1, 0, 0);
	func_325();
	if (!iParam1 && iParam5) {
		if (uParam0->f_5) {
			time::set_clock_time(uParam0->f_7, 0, 0);
		}
		else {
			time::set_clock_time(uParam0->f_8, 0, 0);
		}
	}
	if (!iParam1) {
		if (cam::is_screen_faded_out()) {
			cam::do_screen_fade_in(250);
		}
	}
	if (!iParam1) {
		if (Global_101700.f_31389.f_4801 != -15) {
			Global_101700.f_31389.f_4801 = func_81();
		}
	}
}

// Position - 0x1D5AF
void func_325() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35) {
		ui::_remove_notification(Global_101700.f_13100[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

// Position - 0x1D5DB
void func_326(vector3 vParam0, float *fParam3, int iParam4, int iParam5) {
	vector3 vVar0;
	float *fVar3;

	if (entity::does_entity_exist(Global_93635.f_4)) {
		if (vehicle::is_vehicle_driveable(Global_93635.f_4, 0)) {
			if (func_335(24) != Global_93635.f_4) {
				if (iParam4 == 1) {
					if (func_332(entity::get_entity_coords(Global_93635.f_4, 1), iParam5, &vVar0, &fVar3)) {
						vParam0 = {vVar0};
						fParam3 = fVar3;
					}
				}
				func_327(Global_93635.f_4, vParam0, fParam3, 24, 0);
			}
		}
	}
}

// Position - 0x1D656
void func_327(int iParam0, vector3 vParam1, float *fParam4, int iParam5, int iParam6) {
	struct<60> Var0;

	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0)) {
		if (iParam5 != 24 && iParam5 != 25) {
			return;
		}
		if (iParam5 == 24) {
			if (entity::does_entity_exist(Global_68531.f_484[25]) &&
				vehicle::is_vehicle_driveable(Global_68531.f_484[25], 0)) {
				if (Global_68531.f_484[25] == iParam0) {
					return;
				}
			}
		}
		if (!iParam6) {
			if (vehicle::is_big_vehicle(iParam0) || entity::get_entity_model(iParam0) == joaat("bus") ||
				entity::get_entity_model(iParam0) == joaat("tourbus")) {
				return;
			}
		}
		func_331(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_39(iParam0, &Var0);
		if (func_68(vParam1, 0f, 0f, 0f, 0)) {
			vParam1 = {entity::get_entity_coords(iParam0, 1)};
			fParam4 = entity::get_entity_heading(iParam0);
		}
		if (iParam5 == 24) {
			if (gameplay::get_hash_key(script::get_this_script_name()) != joaat("vehicle_gen_controller")) {
				Global_69519 = gameplay::get_hash_key(script::get_this_script_name());
			}
		}
		func_329(iParam5, &Var0, vParam1, fParam4, func_34(iParam0));
		func_328(iParam5, iParam0, 0);
	}
}

// Position - 0x1D77F
void func_328(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam0 == -1) {
		return;
	}
	if (!func_144(&Global_68531.f_555[0 /*21*/], iParam0)) {
		return;
	}
	if (!gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 12) &&
		!gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 10)) {
		if (Global_68531.f_555[0 /*21*/].f_4 != entity::get_entity_model(iParam1)) {
			return;
		}
	}
	if (Global_69438 != -1 && Global_69438 != iParam0) {
		return;
	}
	if (entity::does_entity_exist(iParam1)) {
		if (vehicle::is_vehicle_driveable(iParam1, 0)) {
			if (!entity::is_entity_a_mission_entity(iParam1)) {
				entity::set_entity_as_mission_entity(iParam1, 1, 1);
			}
			if (iParam0 == 24) {
				Global_101700.f_31389.f_4801 = func_81();
			}
			if (iParam1 != Global_68531.f_139[iParam0]) {
				if (iParam0 == 24) {
					iVar0 = func_335(iParam0);
					if (entity::does_entity_exist(iVar0) && vehicle::is_vehicle_driveable(iVar0, 0) &&
						iParam1 != iVar0) {
						func_130(iVar0, 145);
					}
				}
				Global_69437 = iParam1;
				Global_69438 = iParam0;
				Global_69439 = iParam2;
			}
		}
	}
}

// Position - 0x1D89C
void func_329(int iParam0, var *uParam1, vector3 vParam2, var uParam5, int iParam6) {
	if (func_144(&Global_68531.f_555[0 /*21*/], iParam0)) {
		if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 10)) {
			func_330(iParam0);
			func_141(uParam1, &Global_101700.f_31389.f_69[Global_68531.f_555[0 /*21*/].f_14 /*78*/]);
			if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 11)) {
				Global_101700.f_31389.f_1864[Global_68531.f_555[0 /*21*/].f_14 /*3*/] = {vParam2};
				Global_101700.f_31389.f_1934[Global_68531.f_555[0 /*21*/].f_14] = uParam5;
			}
			else {
				Global_101700.f_31389.f_1864[Global_68531.f_555[0 /*21*/].f_14 /*3*/] = {0f, 0f, 0f};
				Global_101700.f_31389.f_1934[Global_68531.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_137(iParam0, 1);
		}
	}
}

// Position - 0x1D99B
void func_330(int iParam0) {
	if (iParam0 == -1) {
		return;
	}
	if (func_144(&Global_68531.f_555[0 /*21*/], iParam0)) {
		if (entity::does_entity_exist(Global_68531.f_139[iParam0])) {
			entity::set_entity_as_mission_entity(Global_68531.f_139[iParam0], 1, 1);
			entity::set_vehicle_as_no_longer_needed(&Global_68531.f_139[iParam0]);
			Global_68531.f_139[iParam0] = 0;
		}
		if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 13)) {
			func_137(iParam0, 0);
		}
	}
}

// Position - 0x1DA15
void func_331(int iParam0) {
	if (iParam0 != 24 && iParam0 != 25) {
	}
	func_330(iParam0);
	func_137(iParam0, 0);
}

// Position - 0x1DA3C
bool func_332(vector3 vParam0, int iParam3, var *uParam4, float *fParam5) {
	int iVar0;

	iVar0 = func_333(vParam0, iParam3, 1);
	switch (iVar0) {
	case 0:
		*uParam4 = {-827.351f, 157.785f, 68.2143f};
		*fParam5 = 85.1509f;
		return true;

	case 1:
	case 2:
		*uParam4 = {1992.523f, 3813.916f, 31.1008f};
		*fParam5 = 122.1498f;
		return true;

	case 3:
		*uParam4 = {-1184.258f, -1496.556f, 3.3895f};
		*fParam5 = 303.2098f;
		return true;

	case 4:
		*uParam4 = {118.1067f, -1325.906f, 28.3706f};
		*fParam5 = 123.5016f;
		return true;

	case 5:
		*uParam4 = {-18.118f, -1455.126f, 29.5004f};
		*fParam5 = 273.2822f;
		return true;

	case 6:
		*uParam4 = {1.5947f, 543.4017f, 173.4644f};
		*fParam5 = 310.7556f;
		return true;

	default: break;
	}
	return false;
}

// Position - 0x1DB52
int func_333(vector3 vParam0, int iParam3, int iParam4) {
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= 10 - 1) {
		if (Global_86862[iVar0 /*10*/].f_7 != 263) {
			if (Global_86862[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145) {
				if (func_334(iVar0) || iParam4 == 0) {
					fVar1 = gameplay::get_distance_between_coords(vParam0, Global_86862[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2) {
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

// Position - 0x1DBE1
var func_334(int iParam0) { return gameplay::is_bit_set(Global_101700.f_6188[iParam0], 0); }

// Position - 0x1DBF9
int func_335(int iParam0) {
	if (iParam0 == -1) {
		return 0;
	}
	return Global_68531.f_139[iParam0];
}

// Position - 0x1DC15
void func_336() { Global_55828 = 1; }

// Position - 0x1DC21
int func_337(int iParam0, var *uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	struct<2> Var0;

	func_364(iParam0, &Var0);
	func_363(iParam0, &Var0, &Var0.f_1);
	return func_338(uParam1, &Var0, iParam2, iParam3, iParam4, iParam5, iParam6);
}

// Position - 0x1DC4F
int func_338(var *uParam0, var *uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6) {
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;

	uParam0->f_7 = *uParam1;
	uParam0->f_8 = uParam1->f_1;
	if (func_396(0) && !bParam2 && !bParam4) {
		if (uParam0->f_5) {
			time::set_clock_time(uParam0->f_7, 0, 0);
		}
		else {
			time::set_clock_time(uParam0->f_8, 0, 0);
		}
		return 1;
	}
	if (uParam0->f_2 == 0) {
		if (uParam0->f_7 != -1 && uParam0->f_8 != -1) {
			if (bParam2 || !func_361(uParam0->f_8, uParam0->f_7)) {
				if (audio::request_ambient_audio_bank("TIME_LAPSE", 0, -1)) {
					uParam0->f_6 = 0;
					uParam0->f_2 = 1;
				}
			}
			else {
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else {
			uParam0->f_2 = -1;
			return 1;
		}
	}
	ui::hide_hud_and_radar_this_frame();
	ui::hide_hud_component_this_frame(7);
	ped::set_ped_density_multiplier_this_frame(0f);
	if (uParam0->f_2 == 1) {
		if (bParam2) {
			cam::destroy_cam(uParam0->f_4, 0);
			uParam0->f_4 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::add_cam_spline_node(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0) {
				cam::add_cam_spline_node(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else {
				cam::add_cam_spline_node(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			cam::set_cam_fov(uParam0->f_4, uParam1->f_14);
			cam::set_cam_active(uParam0->f_4, 1);
			if (!bParam6) {
				if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
					entity::set_entity_visible(player::player_ped_id(), 0, 0);
				}
				iVar0 = player::get_players_last_vehicle();
				if (entity::does_entity_exist(iVar0)) {
					if (!entity::is_entity_a_mission_entity(iVar0)) {
						entity::set_entity_as_mission_entity(iVar0, 1, 0);
					}
					entity::set_entity_visible(iVar0, 0, 0);
				}
			}
			fVar1 = cam::get_cam_far_clip(uParam0->f_4);
			interior::_0x23B59D8912F94246();
			gameplay::clear_area_of_cops(uParam1->f_2, fVar1, 0);
			graphics::remove_particle_fx_in_range(uParam1->f_2, fVar1);
			graphics::remove_decals_in_range(uParam1->f_2, fVar1);
			if (bParam3) {
				gameplay::clear_area(uParam1->f_2, 5000f, 1, 1, 0, 0);
			}
			func_360(&uParam0->f_1, 0, 0, 0, time::get_clock_day_of_month(), time::get_clock_month(),
					 time::get_clock_year());
			func_324(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else if (!func_361(uParam0->f_7, uParam0->f_8)) {
			if (uParam0->f_5) {
				cam::destroy_cam(uParam0->f_4, 0);
				uParam0->f_4 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
				cam::add_cam_spline_node(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				if (uParam1->f_17 < 0) {
					cam::add_cam_spline_node(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				}
				else {
					cam::add_cam_spline_node(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				}
				cam::set_cam_fov(uParam0->f_4, uParam1->f_14);
				cam::set_cam_active(uParam0->f_4, 1);
				if (!bParam6) {
					if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
						entity::set_entity_visible(player::player_ped_id(), 0, 0);
					}
					iVar2 = player::get_players_last_vehicle();
					if (entity::does_entity_exist(iVar2)) {
						if (!entity::is_entity_a_mission_entity(iVar2)) {
							entity::set_entity_as_mission_entity(iVar2, 1, 0);
						}
						entity::set_entity_visible(iVar2, 0, 0);
					}
				}
				fVar3 = cam::get_cam_far_clip(uParam0->f_4);
				interior::_0x23B59D8912F94246();
				gameplay::clear_area_of_cops(uParam1->f_2, fVar3, 0);
				graphics::remove_particle_fx_in_range(uParam1->f_2, fVar3);
				graphics::remove_decals_in_range(uParam1->f_2, fVar3);
				if (bParam3) {
					gameplay::clear_area(uParam1->f_2, 5000f, 1, 1, 0, 0);
				}
				func_360(&uParam0->f_1, 0, 0, 8, time::get_clock_day_of_month(), time::get_clock_month(),
						 time::get_clock_year());
				func_324(uParam0, 1, 0, 2000, 1, 1, 0, 1);
				uParam0->f_2 = 2;
			}
			else {
				audio::release_named_script_audio_bank("TIME_LAPSE");
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else if (!uParam0->f_5) {
			cam::destroy_cam(uParam0->f_4, 0);
			uParam0->f_4 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::add_cam_spline_node(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0) {
				cam::add_cam_spline_node(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else {
				cam::add_cam_spline_node(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			cam::set_cam_fov(uParam0->f_4, uParam1->f_14);
			cam::_0xD1B0F412F109EA5D(uParam0->f_4, 3);
			cam::set_cam_active(uParam0->f_4, 1);
			if (!bParam6) {
				if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
					entity::set_entity_visible(player::player_ped_id(), 0, 0);
				}
				iVar4 = player::get_players_last_vehicle();
				if (entity::does_entity_exist(iVar4)) {
					if (!entity::is_entity_a_mission_entity(iVar4)) {
						entity::set_entity_as_mission_entity(iVar4, 1, 0);
					}
					entity::set_entity_visible(iVar4, 0, 0);
				}
			}
			fVar5 = cam::get_cam_far_clip(uParam0->f_4);
			interior::_0x23B59D8912F94246();
			gameplay::clear_area_of_cops(uParam1->f_2, fVar5, 0);
			graphics::remove_particle_fx_in_range(uParam1->f_2, fVar5);
			graphics::remove_decals_in_range(uParam1->f_2, fVar5);
			if (bParam3) {
				gameplay::clear_area(uParam1->f_2, 5000f, 0, 1, 0, 0);
			}
			func_360(&uParam0->f_1, 0, 0, 0, time::get_clock_day_of_month(), time::get_clock_month(),
					 time::get_clock_year());
			func_324(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else {
			audio::release_named_script_audio_bank("TIME_LAPSE");
			uParam0->f_2 = -1;
			return 1;
		}
	}
	if (uParam0->f_2 == 2) {
		if (bParam3) {
			gameplay::clear_area(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (!uParam0->f_5) {
			if (func_341(uParam0->f_8, 0, &uParam1->f_18, &uParam1->f_22, uParam0, -1082130432, 0, 1, 1065353216)) {
				if (uParam1->f_17 < 0) {
					uParam0->f_9 = gameplay::get_game_timer();
					uParam0->f_2 = 3;
				}
				else {
					uParam0->f_4 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
					cam::add_cam_spline_node(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
					cam::add_cam_spline_node(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
					cam::set_cam_fov(uParam0->f_4, uParam1->f_14);
					cam::_0xD1B0F412F109EA5D(uParam0->f_4, 3);
					cam::set_cam_active(uParam0->f_4, 1);
					uParam0->f_9 = gameplay::get_game_timer();
					uParam0->f_2 = 22;
				}
			}
		}
		else if (func_341(uParam0->f_7, 0, &uParam1->f_18, &uParam1->f_22, uParam0, -1082130432, 0, 1, 1065353216)) {
			if (uParam1->f_17 < 0) {
				uParam0->f_9 = gameplay::get_game_timer();
				uParam0->f_2 = 3;
			}
			else {
				uParam0->f_4 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
				cam::add_cam_spline_node(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				cam::add_cam_spline_node(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				cam::set_cam_fov(uParam0->f_4, uParam1->f_14);
				cam::_0xD1B0F412F109EA5D(uParam0->f_4, 3);
				cam::set_cam_active(uParam0->f_4, 1);
				uParam0->f_9 = gameplay::get_game_timer();
				uParam0->f_2 = 22;
			}
		}
		if (!bParam5) {
			if (func_339(1000) || uParam0->f_6) {
				uParam0->f_6 = 1;
				if (!cam::is_screen_fading_out()) {
					cam::do_screen_fade_out(250);
				}
				if (!cam::is_screen_faded_out()) {
					ui::hide_hud_and_radar_this_frame();
					ui::hide_hud_component_this_frame(7);
					return 0;
				}
				if (uParam0->f_3 != 0) {
					func_341(uParam0->f_7, 0, &uParam1->f_18, &uParam1->f_22, uParam0, 1f, 0, 1, 1065353216);
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 22) {
		if (bParam3) {
			gameplay::clear_area(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (cam::does_cam_exist(uParam0->f_4) && cam::is_cam_interpolating(uParam0->f_4)) {
		}
		else {
			uParam0->f_9 = gameplay::get_game_timer();
			uParam0->f_2 = 3;
		}
		if (!bParam5) {
			if (func_339(1000) || uParam0->f_6) {
				uParam0->f_6 = 1;
				if (!cam::is_screen_fading_out()) {
					cam::do_screen_fade_out(250);
				}
				if (!cam::is_screen_faded_out()) {
					ui::hide_hud_and_radar_this_frame();
					ui::hide_hud_component_this_frame(7);
					return 0;
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 3) {
		if (bParam3) {
			gameplay::clear_area(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (uParam0->f_9 + 1000 > gameplay::get_game_timer()) {
			uParam0->f_2 = 4;
		}
	}
	if (uParam0->f_2 == 4) {
		uParam0->f_6 = 0;
		uParam0->f_2 = -1;
		return 1;
	}
	if (uParam0->f_2 == -1) {
		return 1;
	}
	return 0;
}

// Position - 0x1E402
int func_339(int iParam0) {
	if (cam::is_screen_faded_in()) {
		if (gameplay::get_game_timer() - Global_28 > iParam0) {
			Global_27 = gameplay::get_game_timer();
		}
		Global_28 = gameplay::get_game_timer();
		if (gameplay::get_game_timer() - Global_27 > iParam0) {
			if (func_340()) {
				Global_27 = gameplay::get_game_timer();
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x1E44C
bool func_340() {
	if (ui::is_pause_menu_active()) {
		return false;
	}
	if (controls::is_control_just_pressed(0, 18) || controls::is_control_just_pressed(2, 18)) {
		return true;
	}
	return false;
}

// Position - 0x1E47E
bool func_341(int iParam0, int iParam1, char *sParam2, char *sParam3, var *uParam4, float fParam5, int iParam6,
			  int iParam7, float fParam8) {
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int *iVar6;
	int *iVar7;
	int *iVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;

	fVar0 = -1f;
	switch (uParam4->f_3) {
	case 0:
		*uParam4 = func_81();
		iVar5 = func_81();
		func_89(&iVar5, iParam0);
		func_90(&iVar5, iParam1);
		func_91(&iVar5, 0);
		if (func_358(*uParam4, iVar5)) {
			func_357(&iVar5, 0, 0, 0, 1, 0, 0);
		}
		func_355(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &iVar6, &iVar7, &iVar8);
		uParam4->f_11 = iVar1 + iVar2 * 60 + iVar3 + iParam6 * 3600;
		func_348(system::to_float(uParam4->f_11) / 3600f);
		if (iParam7) {
			graphics::_0x5F0F3F56635809EF(0.6f);
			graphics::_set_far_shadows_suppressed(0);
			graphics::_0x0AE73D8DF3A762B2(0);
		}
		func_347();
		uParam4->f_10 = audio::get_sound_id();
		audio::play_sound_frontend(uParam4->f_10, "TIME_LAPSE_MASTER", 0, 1);
		audio::start_audio_scene("TOD_SHIFT_SCENE");
		func_325();
		uParam4->f_3++;
		break;

	case 1:
	case 2:
		if (cam::does_cam_exist(uParam4->f_4) && cam::is_cam_interpolating(uParam4->f_4) ||
			!(fParam5 >= 0.99f || fParam5 == -1f)) {
			if (cam::does_cam_exist(uParam4->f_4) && cam::is_cam_interpolating(uParam4->f_4)) {
				fVar0 = cam::get_cam_spline_phase(uParam4->f_4);
			}
			else if (!(fParam5 >= 0.99f || fParam5 == -1f)) {
				fVar0 = fParam5;
			}
			else {
				fVar0 = -1f;
			}
			if (fVar0 >= 0.5f) {
				if (uParam4->f_3 == 1) {
					if (gameplay::get_hash_key(sParam2) != 0) {
						gameplay::_set_weather_type_over_time(sParam2, fParam8);
					}
					if (gameplay::get_hash_key(sParam3) != 0) {
						gameplay::_clear_cloud_hat();
						gameplay::_set_cloud_hat_transition(sParam3, 0);
					}
					uParam4->f_3 = 2;
				}
			}
		}
		if (fVar0 >= 0.99f || fVar0 == -1f) {
			iVar5 = *uParam4;
			func_357(&iVar5, uParam4->f_11, 0, 0, 0, 0, 0);
			time::set_clock_time(func_346(iVar5), func_345(iVar5), func_344(iVar5));
			if (iParam7) {
				graphics::_0x03FC694AE06C5A20();
			}
			audio::stop_sound(uParam4->f_10);
			audio::release_named_script_audio_bank("TIME_LAPSE");
			if (iParam7) {
				graphics::_0x0AE73D8DF3A762B2(1);
				graphics::_set_far_shadows_suppressed(1);
			}
			return true;
		}
		fVar11 = fVar0;
		fVar9 = 0.1f;
		fVar10 = 0.9f;
		fVar12 = func_343((fVar11 - fVar9) / (fVar10 - fVar9), 0f, 1f);
		iVar4 = system::round(IntToFloat(uParam4->f_11) * fVar12);
		iVar5 = *uParam4;
		func_357(&iVar5, iVar4, 0, 0, 0, 0, 0);
		time::set_clock_time(func_346(iVar5), func_345(iVar5), func_344(iVar5));
		if (func_342(iVar5) != time::get_clock_day_of_month()) {
			time::set_clock_date(func_342(iVar5), func_88(iVar5), func_86(iVar5));
		}
		func_244();
		graphics::_0xE3E2C1B4C59DBC77(6);
		break;
	}
	return false;
}

// Position - 0x1E713
int func_342(int iParam0) { return system::shift_right(iParam0, 4) & 31; }

// Position - 0x1E725
float func_343(float fParam0, float fParam1, float fParam2) {
	if (fParam0 > fParam2) {
		return fParam2;
	}
	else if (fParam0 < fParam1) {
		return fParam1;
	}
	return fParam0;
}

// Position - 0x1E74C
int func_344(int iParam0) { return system::shift_right(iParam0, 20) & 63; }

// Position - 0x1E75F
int func_345(int iParam0) { return system::shift_right(iParam0, 14) & 63; }

// Position - 0x1E772
int func_346(int iParam0) { return system::shift_right(iParam0, 9) & 31; }

// Position - 0x1E785
int func_347() {
	int iVar0;

	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		return 0;
	}
	if (!ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
		return 0;
	}
	iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
	if (!entity::is_entity_dead(iVar0, 0)) {
		return 0;
	}
	audio::set_veh_radio_station(iVar0, "OFF");
	return 1;
}

// Position - 0x1E7D3
void func_348(float fParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 9) {
		if (func_354(&Global_101700.f_17062.f_175[iVar0 /*19*/].f_5)) {
			func_349(&Global_101700.f_17062.f_175[iVar0 /*19*/].f_5, fParam0 * 60f);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6) {
		if (func_354(&Global_101700.f_17062.f_362[iVar1 /*3*/])) {
			func_349(&Global_101700.f_17062.f_362[iVar1 /*3*/], fParam0 * 60f);
		}
		iVar1++;
	}
	audio::skip_radio_forward();
}

// Position - 0x1E864
void func_349(var *uParam0, float fParam1) {
	if (func_354(uParam0)) {
		func_350(uParam0, func_352(uParam0) + fParam1);
	}
}

// Position - 0x1E887
void func_350(int *iParam0, float fParam1) {
	uParam0->f_1 = func_351(gameplay::is_bit_set(*uParam0, 4)) - fParam1;
	gameplay::set_bit(uParam0, 1);
	gameplay::clear_bit(iParam0, 2);
	iParam0->f_2 = 0f;
}

// Position - 0x1E8B5
float func_351(bool bParam0) {
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	if (bParam0) {
		fVar0 = system::to_float(gameplay::get_game_timer());
		fVar1 = fVar0 / 1000f;
		return fVar1;
	}
	if (network::network_is_game_in_progress()) {
		iVar2 = network::get_network_time();
		fVar3 = system::to_float(iVar2);
		fVar4 = fVar3 / 1000f;
		return fVar4;
	}
	return system::to_float(gameplay::get_game_timer()) / 1000f;
}

// Position - 0x1E90D
float func_352(var *uParam0) {
	if (func_354(uParam0)) {
		if (func_353(uParam0)) {
			return uParam0->f_2;
		}
		else {
			return func_351(gameplay::is_bit_set(*uParam0, 4)) - uParam0->f_1;
		}
	}
	return uParam0->f_1;
}

// Position - 0x1E94C
bool func_353(var *uParam0) { return gameplay::is_bit_set(*uParam0, 2); }

// Position - 0x1E95C
bool func_354(var *uParam0) { return gameplay::is_bit_set(*uParam0, 1); }

// Position - 0x1E96C
void func_355(int iParam0, int iParam1, int *iParam2, int *iParam3, int *iParam4, int *iParam5, int *iParam6,
			  int *iParam7) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_358(iParam0, iParam1)) {
		iVar0 = func_88(iParam1);
		iVar1 = func_86(iParam0);
		iVar2 = func_86(iParam0) - func_86(iParam1);
		iVar3 = func_88(iParam0) - func_88(iParam1);
		iVar4 = func_342(iParam0) - func_342(iParam1);
		iVar5 = func_346(iParam0) - func_346(iParam1);
		iVar6 = func_345(iParam0) - func_345(iParam1);
		iVar7 = func_344(iParam0) - func_344(iParam1);
	}
	else {
		iVar0 = func_88(iParam0);
		iVar1 = func_86(iParam1);
		iVar2 = func_86(iParam1) - func_86(iParam0);
		iVar3 = func_88(iParam1) - func_88(iParam0);
		iVar4 = func_342(iParam1) - func_342(iParam0);
		iVar5 = func_346(iParam1) - func_346(iParam0);
		iVar6 = func_345(iParam1) - func_345(iParam0);
		iVar7 = func_344(iParam1) - func_344(iParam0);
	}
	while (iVar7 < 0) {
		iVar7 += 60;
		iVar6--;
	}
	while (iVar7 > 59) {
		iVar7 -= 60;
		iVar6++;
	}
	while (iVar6 < 0) {
		iVar6 += 60;
		iVar5--;
	}
	while (iVar6 > 59) {
		iVar6 -= 60;
		iVar5++;
	}
	while (iVar5 < 0) {
		iVar5 += 24;
		iVar4--;
	}
	while (iVar5 > 23) {
		iVar5 -= 24;
		iVar4++;
	}
	while (iVar4 < 0) {
		while (iVar3 < 0) {
			iVar3 += 12;
			iVar2--;
		}
		iVar4 += func_85(iVar0, iVar1);
		iVar3--;
		iVar0 = system::round(func_356(system::to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0) {
		iVar3 += 12;
		iVar2--;
	}
	while (iVar3 > 12) {
		iVar3 -= 12;
		iVar2++;
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

// Position - 0x1EB6D
float func_356(float fParam0, float fParam1, float fParam2) {
	float fVar0;

	if (fParam1 == fParam2) {
		return fParam1;
	}
	fVar0 = fParam2 - fParam1;
	fParam0 -= IntToFloat(system::round((fParam0 - fParam1) / fVar0)) * fVar0;
	if (fParam0 < fParam1) {
		fParam0 += fVar0;
	}
	return fParam0;
}

// Position - 0x1EBAF
void func_357(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_86(*iParam0);
	iVar1 = func_88(*iParam0);
	iVar2 = func_342(*iParam0);
	iVar3 = func_346(*iParam0);
	iVar4 = func_345(*iParam0);
	iVar5 = func_344(*iParam0);
	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0) {
		return;
	}
	if (iParam1 < 0) {
		return;
	}
	if (iParam2 < 0) {
		return;
	}
	if (iParam3 < 0) {
		return;
	}
	if (iParam4 < 0) {
		return;
	}
	if (iParam5 < 0) {
		return;
	}
	if (iParam6 < 0) {
		return;
	}
	iVar5 += iParam1;
	while (iVar5 >= 60) {
		iParam2++;
		iVar5 -= 60;
	}
	iVar4 += iParam2;
	while (iVar4 >= 60) {
		iParam3++;
		iVar4 -= 60;
	}
	iVar3 += iParam3;
	while (iVar3 >= 24) {
		iParam4++;
		iVar3 -= 24;
	}
	iVar2 += iParam4;
	iVar6 = func_85(iVar1, iVar0);
	while (iVar2 > iVar6) {
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11) {
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_85(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11) {
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_360(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

// Position - 0x1ED31
bool func_358(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (!func_359(iParam1) || !func_359(iParam0)) {
		return true;
	}
	iVar0 = func_86(iParam0);
	iVar1 = func_86(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_88(iParam0);
	iVar1 = func_88(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_342(iParam0);
	iVar1 = func_342(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_346(iParam0);
	iVar1 = func_346(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_345(iParam0);
	iVar1 = func_345(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_344(iParam0);
	iVar1 = func_344(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	return false;
}

// Position - 0x1EE3D
int func_359(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15) {
		return 0;
	}
	iVar0 = func_344(iParam0);
	if (iVar0 < 0 || iVar0 >= 60) {
		return 0;
	}
	iVar1 = func_345(iParam0);
	if (iVar1 < 0 || iVar1 >= 60) {
		return 0;
	}
	iVar2 = func_346(iParam0);
	if (iVar2 < 0 || iVar2 > 23) {
		return 0;
	}
	iVar3 = func_86(iParam0);
	if (iVar3 <= 0 || iVar3 > 2043 || iVar3 < 1979) {
		return 0;
	}
	iVar4 = func_88(iParam0);
	if (iVar4 < 0 || iVar4 > 11) {
		return 0;
	}
	iVar5 = func_342(iParam0);
	if (iVar5 < 1 || iVar5 > func_85(iVar4, iVar3)) {
		return 0;
	}
	return 1;
}

// Position - 0x1EF19
void func_360(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_91(iParam0, iParam1);
	func_90(iParam0, iParam2);
	func_89(iParam0, iParam3);
	func_83(iParam0, iParam5);
	func_84(iParam0, iParam4);
	func_82(iParam0, iParam6);
}

// Position - 0x1EF51
int func_361(int iParam0, int iParam1) { return func_362(time::get_clock_hours(), iParam0, iParam1); }

// Position - 0x1EF65
int func_362(int iParam0, int iParam1, int iParam2) {
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 24) {
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24) {
		return 0;
	}
	if (iParam2 == 24) {
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24) {
		return 0;
	}
	if (iParam1 == iParam2) {
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0) {
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2) {
		return 1;
	}
	if (!bVar0) {
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2) {
		return 1;
	}
	return 0;
}

// Position - 0x1F00E
void func_363(int iParam0, var *uParam1, var *uParam2) {
	switch (iParam0) {
	case 65:
		*uParam1 = 20;
		*uParam2 = 22;
		break;

	case 27:
		*uParam1 = 20;
		*uParam2 = 20;
		break;

	default:
		*uParam1 = Global_82612[iParam0 /*34*/].f_14;
		*uParam2 = Global_82612[iParam0 /*34*/].f_13;
		break;
	}
}

// Position - 0x1F060
void func_364(int iParam0, var *uParam1) {
	uParam1->f_17 = -1;
	switch (iParam0) {
	case 1:
	case 2:
		uParam1->f_2 = {-58.1338f, -1115.653f, 25.8856f};
		uParam1->f_5 = {18.4907f, 0f, 3.566f};
		uParam1->f_8 = {-58.3857f, -1115.083f, 26.0824f};
		uParam1->f_11 = {18.4907f, 0f, 2.0628f};
		uParam1->f_14 = 40.0256f;
		uParam1->f_15 = 4000;
		StringCopy(&uParam1->f_18, "EXTRASUNNY", 16);
		StringCopy(&uParam1->f_22, "cirrocumulus", 16);
		uParam1->f_16 = 0;
		break;

	case 17:
	case 18:
		uParam1->f_2 = {-830.1f, 171.4f, 71.5f};
		uParam1->f_5 = {17.5f, 0f, -76f};
		uParam1->f_8 = {-829.5f, 171.6f, 71.7f};
		uParam1->f_11 = {17.9f, 0f, -75.4f};
		uParam1->f_14 = 47.9931f;
		uParam1->f_15 = 6600;
		uParam1->f_16 = 0;
		StringCopy(&uParam1->f_18, "EXTRASUNNY", 16);
		StringCopy(&uParam1->f_22, "cirrocumulus", 16);
		break;

	case 21:
	case 22:
		uParam1->f_2 = {-776.5807f, 181.1033f, 72.2059f};
		uParam1->f_5 = {11.8135f, 0f, 95.7275f};
		uParam1->f_8 = {-776.8288f, 181.0926f, 72.2551f};
		uParam1->f_11 = {11.8134f, 0f, 95.7284f};
		uParam1->f_14 = 46.7255f;
		uParam1->f_15 = 5500;
		uParam1->f_16 = 0;
		StringCopy(&uParam1->f_18, "EXTRASUNNY", 16);
		StringCopy(&uParam1->f_22, "cirrocumulus", 16);
		break;

	case 20:
		switch (func_92()) {
		case 0:
			uParam1->f_2 = {-846.3013f, 186.777f, 72.0316f};
			uParam1->f_5 = {4.202026f, 0f, -111.2882f};
			uParam1->f_8 = {-846.1907f, 186.7339f, 72.0403f};
			uParam1->f_11 = {4.202f, 0f, -111.2882f};
			uParam1->f_14 = 47f;
			uParam1->f_15 = 5500;
			uParam1->f_16 = 0;
			break;

		case 2:
			uParam1->f_2 = {-846.3013f, 186.777f, 72.0316f};
			uParam1->f_5 = {4.202026f, 0f, -111.2882f};
			uParam1->f_8 = {-846.1907f, 186.7339f, 72.0403f};
			uParam1->f_11 = {4.202f, 0f, -111.2882f};
			uParam1->f_14 = 47f;
			uParam1->f_15 = 5500;
			uParam1->f_16 = 0;
			break;
		}
		break;

	case 40:
		uParam1->f_2 = {-8.0845f, -1450.367f, 36.8585f};
		uParam1->f_5 = {13.3776f, 0f, 4.513f};
		uParam1->f_8 = {-9.0519f, -1450.444f, 36.8585f};
		uParam1->f_11 = {13.3776f, 0f, 4.513f};
		uParam1->f_14 = 39.9659f;
		uParam1->f_15 = 7200;
		uParam1->f_16 = 0;
		break;

	case 27:
		uParam1->f_2 = {-1576.132f, 5160.888f, 24.1175f};
		uParam1->f_5 = {4.8389f, -0.011f, 92.1057f};
		uParam1->f_8 = {-1576.132f, 5160.888f, 24.1175f};
		uParam1->f_11 = {4.8389f, -0.011f, 92.1057f};
		uParam1->f_14 = 40f;
		uParam1->f_15 = 7200;
		uParam1->f_16 = 0;
		break;

	case 43:
		uParam1->f_2 = {-7.205f, -1471.656f, 31.1614f};
		uParam1->f_5 = {9.3776f, 0f, 11.4737f};
		uParam1->f_8 = {-7.2909f, -1471.232f, 31.2546f};
		uParam1->f_11 = {9.3776f, 0f, 11.4737f};
		uParam1->f_14 = 38.5265f;
		uParam1->f_15 = 5000;
		uParam1->f_16 = 0;
		break;

	case 61:
		uParam1->f_2 = {-1060.658f, -464.0052f, 44.994f};
		uParam1->f_5 = {5.6441f, 0f, -138.7474f};
		uParam1->f_8 = {-1060.658f, -464.0052f, 44.994f};
		uParam1->f_11 = {4.8242f, 0f, -118.3167f};
		uParam1->f_14 = 37f;
		uParam1->f_15 = 5000;
		uParam1->f_16 = 0;
		break;

	case 91:
	case 93:
		uParam1->f_2 = {1406.112f, 3590.231f, 34.4113f};
		uParam1->f_5 = {17.5005f, 0f, 55.9579f};
		uParam1->f_8 = {1405.673f, 3590.525f, 34.4113f};
		uParam1->f_11 = {18.4979f, 0f, 55.9579f};
		uParam1->f_14 = 56.3199f;
		uParam1->f_15 = 6000;
		uParam1->f_16 = 0;
		break;

	case 69:
	case 86:
	case 90:
		uParam1->f_2 = {739.1493f, -990.3961f, 29.85194f};
		uParam1->f_5 = {17.19917f, 0f, 44.21184f};
		uParam1->f_8 = {738.4197f, -989.6462f, 30.17581f};
		uParam1->f_11 = {17.19917f, 0f, 44.21184f};
		uParam1->f_14 = 47.56362f;
		uParam1->f_15 = 6000;
		StringCopy(&uParam1->f_18, "EXTRASUNNY", 16);
		StringCopy(&uParam1->f_22, "cirrocumulus", 16);
		uParam1->f_16 = 0;
		break;

	case 70:
		uParam1->f_2 = {2503.9f, -288.8f, 112.8f};
		uParam1->f_5 = {-0.2f, 0f, -169.6f};
		uParam1->f_8 = {2503.9f, -288.8f, 112.8f};
		uParam1->f_11 = {-0.2f, 0f, -169.6f};
		uParam1->f_14 = 47.6f;
		uParam1->f_15 = 5000;
		StringCopy(&uParam1->f_18, "EXTRASUNNY", 16);
		StringCopy(&uParam1->f_22, "cirrocumulus", 16);
		uParam1->f_16 = 1;
		break;

	case 45:
		uParam1->f_2 = {-458.5666f, 1010.097f, 316.3736f};
		uParam1->f_5 = {14.47186f, 0f, -18.28884f};
		uParam1->f_8 = {-457.3f, 1011.6f, 316.9f};
		uParam1->f_11 = {14.5f, 0f, -18.5f};
		uParam1->f_14 = 50f;
		uParam1->f_15 = 6000;
		uParam1->f_16 = 0;
		break;

	case 49:
		uParam1->f_2 = {-723.9982f, -155.7184f, 38.12362f};
		uParam1->f_5 = {30.12048f, 0f, -99.11243f};
		uParam1->f_8 = {-722.4385f, -155.7817f, 37.4443f};
		uParam1->f_11 = {2.0429f, 0f, -101.5132f};
		uParam1->f_14 = 45f;
		uParam1->f_15 = 6000;
		uParam1->f_16 = 0;
		break;

	case 9:
		switch (func_92()) {
		case 2:
			uParam1->f_2 = {416.3221f, -960.2586f, 30.6696f};
			uParam1->f_5 = {21.5747f, 0f, -135.2969f};
			uParam1->f_8 = {416.8894f, -960.832f, 30.9887f};
			uParam1->f_11 = {21.9916f, 0f, -135.2969f};
			uParam1->f_14 = 47.1057f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;

		case 1:
			uParam1->f_2 = {1393.363f, -2052.581f, 65.4054f};
			uParam1->f_5 = {2.5107f, 0f, 51.1167f};
			uParam1->f_8 = {1393.456f, -2052.656f, 68.146f};
			uParam1->f_11 = {2.5107f, 0f, 51.1167f};
			uParam1->f_14 = 35.9859f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		}
		break;

	case 30:
		uParam1->f_2 = {59.3f, -751.7f, 46.8f};
		uParam1->f_5 = {61.9f, 0f, -63.8f};
		uParam1->f_8 = {59.3f, -751.7f, 46.8f};
		uParam1->f_11 = {61.9f, 0f, -63.8f};
		uParam1->f_14 = 46.6f;
		uParam1->f_15 = 6000;
		uParam1->f_16 = 0;
		break;

	case 39:
		uParam1->f_2 = {3841.93f, 4464.658f, 2.6587f};
		uParam1->f_5 = {8.4859f, 0.0024f, 143.0775f};
		uParam1->f_8 = {3842.54f, 4464.184f, 2.6587f};
		uParam1->f_11 = {8.4859f, 0.0024f, 142.0089f};
		uParam1->f_14 = 34.1544f;
		uParam1->f_15 = 3000;
		uParam1->f_16 = 0;
		break;

	case 71:
		uParam1->f_2 = {-1193.1f, -1525.3f, 4.4f};
		uParam1->f_5 = {9.4f, 0f, -78.8f};
		uParam1->f_8 = {-1192.2f, -1525.1f, 4.4f};
		uParam1->f_11 = {9.4f, 0f, -78.5f};
		uParam1->f_14 = 30.4f;
		uParam1->f_15 = 6000;
		uParam1->f_16 = 0;
		break;

	case 74:
		uParam1->f_2 = {-24.2f, -2417.6f, 7.8f};
		uParam1->f_5 = {10.4f, 0f, 80.4f};
		uParam1->f_8 = {-23.8f, -2414.8f, 7.8f};
		uParam1->f_11 = {10.4f, 0f, 81.4f};
		uParam1->f_14 = 48.1095f;
		uParam1->f_15 = 6000;
		uParam1->f_16 = 0;
		break;

	case 84:
	case 85:
	case 65:
		uParam1->f_2 = {146.9733f, -1310.644f, 30.85177f};
		uParam1->f_5 = {16.26885f, -2.1E-05f, 45.00475f};
		uParam1->f_8 = {146.9733f, -1310.644f, 30.85177f};
		uParam1->f_11 = {16.26885f, -2.1E-05f, 45.00475f};
		uParam1->f_14 = 39.4027f;
		uParam1->f_15 = 6000;
		uParam1->f_16 = 0;
		break;

	case 62:
	case 15:
	case 16:
		uParam1->f_2 = {1998.215f, 3816.983f, 33.0117f};
		uParam1->f_5 = {5.9088f, 0f, 89.1989f};
		uParam1->f_8 = {1997.154f, 3817.004f, 33.1215f};
		uParam1->f_11 = {5.9088f, 0f, 89.1989f};
		uParam1->f_14 = 36.8186f;
		uParam1->f_15 = 6000;
		uParam1->f_16 = 0;
		if (iParam0 == 62) {
			if (func_92() != 2) {
				uParam1->f_2 = {0f, 0f, 0f};
				uParam1->f_5 = {0f, 0f, 0f};
				uParam1->f_8 = {0f, 0f, 0f};
				uParam1->f_11 = {0f, 0f, 0f};
				uParam1->f_14 = -1f;
				uParam1->f_15 = -1;
				uParam1->f_16 = 0;
			}
		}
		break;

	case 63:
		uParam1->f_2 = {1576f, 3363.9f, 55.5f};
		uParam1->f_5 = {0.5f, 0f, -123.8f};
		uParam1->f_8 = {1575.2f, 3364.4f, 49.2f};
		uParam1->f_11 = {-4.3f, 0f, -124.1f};
		uParam1->f_14 = 50f;
		uParam1->f_15 = 8000;
		uParam1->f_16 = 0;
		break;

	case 64:
		uParam1->f_2 = {1566f, 3378.8f, 42.8f};
		uParam1->f_5 = {-2.4f, 0f, -126.3f};
		uParam1->f_8 = {1567.6f, 3376.9f, 45f};
		uParam1->f_11 = {1.6f, 0f, -124.6f};
		uParam1->f_14 = 34.7f;
		uParam1->f_15 = 8000;
		uParam1->f_16 = 0;
		break;

	case 24:
		uParam1->f_2 = {1339.573f, -2550.873f, 56.28254f};
		uParam1->f_5 = {-2.348373f, -2.1E-05f, 159.736f};
		uParam1->f_8 = {1334.491f, -2549.345f, 47.69109f};
		uParam1->f_11 = {2.789334f, -2.1E-05f, -156.4397f};
		uParam1->f_14 = 25.66f;
		uParam1->f_15 = 8000;
		uParam1->f_16 = 0;
		break;

	case 25:
		uParam1->f_2 = {2383.651f, 2624.787f, 46.9527f};
		uParam1->f_5 = {14.6191f, 0f, 64.366f};
		uParam1->f_8 = {2383.929f, 2622.802f, 47.2707f};
		uParam1->f_11 = {33.17714f, -0.13073f, 12.31436f};
		uParam1->f_14 = 35.31843f;
		uParam1->f_15 = 6000;
		uParam1->f_16 = 0;
		break;

	case 26:
		uParam1->f_2 = {1755.519f, -1474.981f, 126.1743f};
		uParam1->f_5 = {4.5341f, 0f, 89.6405f};
		uParam1->f_8 = {1772.26f, -1475.085f, 125.9465f};
		uParam1->f_11 = {5.8327f, 0f, 89.6405f};
		uParam1->f_14 = 32.7f;
		uParam1->f_15 = 6500;
		uParam1->f_16 = 0;
		break;

	case 3:
		uParam1->f_2 = {-1514.257f, -947.7281f, 15.0253f};
		uParam1->f_5 = {-3.5807f, -0.0001f, -46.3209f};
		uParam1->f_8 = {-1512.601f, -949.2796f, 14.8827f};
		uParam1->f_11 = {-4.7682f, -0.0001f, -34.1393f};
		uParam1->f_14 = 29.9555f;
		uParam1->f_15 = 6000;
		uParam1->f_16 = 0;
		break;

	case 4:
		uParam1->f_2 = {-698.2578f, -934.4238f, 31.6909f};
		uParam1->f_5 = {-22.0467f, 0f, 32.1888f};
		uParam1->f_8 = {-697.8695f, -935.0406f, 31.9861f};
		uParam1->f_11 = {-20.6093f, 0f, 32.1888f};
		uParam1->f_14 = 30f;
		uParam1->f_15 = 6000;
		uParam1->f_16 = 0;
		break;

	case 5:
		uParam1->f_2 = {221.8613f, -830.6434f, 45.3154f};
		uParam1->f_5 = {-13.9263f, 0f, 140.7092f};
		uParam1->f_8 = {227.5233f, -832.8285f, 45.3154f};
		uParam1->f_11 = {-13.9263f, 0f, 140.7092f};
		uParam1->f_14 = 35f;
		uParam1->f_15 = 6000;
		uParam1->f_16 = 0;
		break;

	case 6:
		uParam1->f_2 = {-23.3747f, -120.3161f, 64.139f};
		uParam1->f_5 = {-5.7232f, 0f, 5.1015f};
		uParam1->f_8 = {-22.5824f, -122.52f, 64.139f};
		uParam1->f_11 = {-5.7232f, 0f, 6.6362f};
		uParam1->f_14 = 35f;
		uParam1->f_15 = 6000;
		uParam1->f_16 = 0;
		break;

	case 7:
		uParam1->f_2 = {803.5977f, -1075.869f, 37.1981f};
		uParam1->f_5 = {-10.7685f, 0f, -38.1705f};
		uParam1->f_8 = {803.5977f, -1075.869f, 32.7981f};
		uParam1->f_11 = {-10.7685f, 0f, -38.1705f};
		uParam1->f_14 = 35f;
		uParam1->f_15 = 6000;
		uParam1->f_16 = 0;
		break;

	default:
		uParam1->f_2 = {0f, 0f, 0f};
		uParam1->f_5 = {0f, 0f, 0f};
		uParam1->f_8 = {0f, 0f, 0f};
		uParam1->f_11 = {0f, 0f, 0f};
		uParam1->f_14 = -1f;
		uParam1->f_15 = -1;
		uParam1->f_16 = 0;
		break;
	}
	if (gameplay::get_hash_key("RAIN") == gameplay::get_prev_weather_type_hash_name()) {
		if (gameplay::is_string_null_or_empty(&uParam1->f_18)) {
			StringCopy(&uParam1->f_18, "EXTRASUNNY", 16);
		}
		if (gameplay::is_string_null_or_empty(&uParam1->f_22)) {
			StringCopy(&uParam1->f_22, "cirrocumulus", 16);
		}
	}
}

// Position - 0x1FF49
bool func_365() {
	bool bVar0;

	bVar0 = cutscene::has_cutscene_loaded();
	if (!Global_69701) {
		if (!bVar0) {
			Global_69701 = 1;
		}
	}
	return bVar0;
}

// Position - 0x1FF6C
void func_366() {
	player::set_player_control(player::player_id(), 1, 0);
	if (!func_23()) {
		if (func_396(0)) {
			player::set_player_wanted_level(player::player_id(), 0, 0);
			player::set_player_wanted_level_now(player::player_id(), 0);
			streaming::request_model(joaat("rapidgt"));
			streaming::request_model(joaat("surano"));
			streaming::request_model(joaat("carbonizzare"));
			while (!streaming::has_model_loaded(joaat("rapidgt")) || !streaming::has_model_loaded(joaat("surano")) ||
				   !streaming::has_model_loaded(joaat("carbonizzare"))) {
				system::wait(0);
			}
			if (!entity::does_entity_exist(iLocal_3259)) {
				gameplay::clear_area(vLocal_3294, 5f, 1, 0, 0, 0);
				iLocal_3259 = vehicle::create_vehicle(joaat("rapidgt"), vLocal_3294, fLocal_3321, 1, 1);
				vehicle::set_vehicle_colours(iLocal_3259, 112, 112);
				entity::set_entity_health(iLocal_3259, 3000);
				vehicle::set_vehicle_strong(iLocal_3259, 1);
				streaming::set_model_as_no_longer_needed(joaat("rapidgt"));
				vehicle::set_vehicle_model_is_suppressed(joaat("rapidgt"), 1);
				entity::_set_entity_register(iLocal_3259, 1);
				vehicle::set_vehicle_has_strong_axles(iLocal_3259, 1);
			}
			if (!entity::does_entity_exist(iLocal_3276)) {
				if (streaming::has_model_loaded(joaat("surano"))) {
					gameplay::clear_area(-1037.398f, -491.6539f, 35.5545f, 5f, 1, 0, 0, 0);
					iLocal_3276 =
						vehicle::create_vehicle(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, 1, 1);
					vehicle::set_vehicle_colours(iLocal_3276, 0, 0);
					entity::set_entity_health(iLocal_3276, 3000);
					vehicle::set_vehicle_strong(iLocal_3276, 1);
					streaming::set_model_as_no_longer_needed(joaat("surano"));
					vehicle::set_vehicle_model_is_suppressed(joaat("surano"), 1);
					vehicle::set_vehicle_has_strong_axles(iLocal_3276, 1);
				}
			}
			if (!entity::does_entity_exist(iLocal_3277)) {
				if (streaming::has_model_loaded(joaat("carbonizzare"))) {
					gameplay::clear_area(vLocal_3294, 5f, 1, 0, 0, 0);
					iLocal_3277 = vehicle::create_vehicle(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f,
														  207.1758f, 1, 1);
					vehicle::set_vehicle_colours(iLocal_3277, 89, 89);
					entity::set_entity_health(iLocal_3277, 3000);
					vehicle::set_vehicle_strong(iLocal_3277, 1);
					streaming::set_model_as_no_longer_needed(joaat("carbonizzare"));
					vehicle::set_vehicle_model_is_suppressed(joaat("carbonizzare"), 1);
					vehicle::set_vehicle_has_strong_axles(iLocal_3277, 1);
				}
			}
		}
		iLocal_3181 = 0;
		iLocal_3183 = 0;
		iLocal_3345 = 0;
		iLocal_3180 = 1;
	}
	else {
		ped::add_relationship_group("SecGuards", &iLocal_3576);
		ped::set_relationship_between_groups(5, 1862763509, iLocal_3576);
		ped::set_relationship_between_groups(5, iLocal_3576, 1862763509);
		if (Global_86001 == 1) {
			if (func_369() == 0) {
				func_368(vLocal_3312, fLocal_3325, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				audio::trigger_music_event("TRV4_START_RT");
				iLocal_3180 = 3;
			}
			if (func_369() == 1) {
				func_368(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				audio::trigger_music_event("TRV4_FOOT_CHASE_RT");
				iLocal_3180 = 5;
			}
			if (func_369() == 2) {
				func_368(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				audio::trigger_music_event("TRV4_EVADE_RT");
				iLocal_3180 = 8;
			}
			if (func_369() == 3) {
				func_368(-920.0547f, -2744.661f, 12.9322f, 357.1374f, 1, 0);
				func_367();
			}
		}
		else {
			if (func_369() == 0) {
				func_368(-1019.579f, -484.872f, 36.0795f, 93.7701f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				audio::trigger_music_event("TRV4_START_RT");
				iLocal_3180 = 2;
			}
			if (func_369() == 1) {
				func_368(vLocal_3312, fLocal_3325, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				audio::trigger_music_event("TRV4_START_RT");
				iLocal_3180 = 3;
			}
			if (func_369() == 2) {
				func_368(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				audio::trigger_music_event("TRV4_FOOT_CHASE_RT");
				iLocal_3180 = 5;
			}
			if (func_369() == 3) {
				func_368(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				audio::trigger_music_event("TRV4_EVADE_RT");
				iLocal_3180 = 8;
			}
		}
		ui::request_additional_text("TREV4", 0);
		while (!ui::has_additional_text_loaded(0)) {
			system::wait(0);
		}
	}
}

// Position - 0x20354
void func_367() {
	if (iLocal_3181 == 0) {
		gameplay::clear_area(-920.0547f, -2744.662f, 12.8434f, 20f, 1, 0, 0, 0);
		player::set_player_wanted_level(player::player_id(), 0, 0);
		player::set_player_wanted_level_now(player::player_id(), 0);
		iLocal_3181++;
	}
	if (iLocal_3181 == 1) {
		streaming::load_scene(-920.0547f, -2744.662f, 12.8434f);
		if (!cam::is_screen_faded_in()) {
			func_21(0, -1, 1);
			cam::do_screen_fade_in(800);
		}
		func_6();
	}
}

// Position - 0x203CE
void func_368(vector3 vParam0, float fParam3, int iParam4, int iParam5) {
	if (func_23()) {
		gameplay::set_this_script_can_be_paused(0);
		gameplay::clear_bit(&Global_91491.f_20, 2);
		gameplay::set_game_paused(1);
		if (player::is_player_playing(player::player_id())) {
			player::set_player_control(player::player_id(), 0, 0);
		}
		Global_91487 = {vParam0};
		Global_91490 = fParam3;
		Global_91486 = 1;
		if (iParam4 == 1) {
			gameplay::set_bit(&Global_91491.f_20, 14);
		}
		else {
			gameplay::clear_bit(&Global_91491.f_20, 14);
		}
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_91491.f_20, 24);
		}
		else {
			gameplay::clear_bit(&Global_91491.f_20, 24);
		}
		func_22(1);
	}
}

// Position - 0x20463
int func_369() {
	if (Global_91491 != 10 && Global_91491 != 9) {
		return 0;
	}
	return Global_91491.f_2;
}

// Position - 0x2048D
void func_370() {
	if (iLocal_3490[0] == 0) {
		if (entity::does_entity_exist(iLocal_3121[7])) {
			if (vehicle::is_vehicle_driveable(iLocal_3121[7], 0)) {
				audio::_dynamic_mixer_related_fn(iLocal_3121[7], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[0] = 1;
			}
		}
	}
	if (iLocal_3498[0] == 0) {
		if (iLocal_3490[0] == 1) {
			if (entity::does_entity_exist(iLocal_3121[7])) {
				if (!vehicle::is_vehicle_driveable(iLocal_3121[7], 0)) {
					audio::_0x18EB48CFC41F2EA0(iLocal_3121[7], 0);
					iLocal_3498[0] = 1;
				}
				else if (iLocal_3180 == 5) {
					audio::_0x18EB48CFC41F2EA0(iLocal_3121[7], 0);
					iLocal_3498[0] = 1;
				}
			}
			else {
				iLocal_3498[0] = 1;
			}
		}
	}
	if (iLocal_3490[1] == 0) {
		if (entity::does_entity_exist(iLocal_3121[8])) {
			if (vehicle::is_vehicle_driveable(iLocal_3121[8], 0)) {
				audio::_dynamic_mixer_related_fn(iLocal_3121[8], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[1] = 1;
			}
		}
	}
	if (iLocal_3498[1] == 0) {
		if (iLocal_3490[1] == 1) {
			if (entity::does_entity_exist(iLocal_3121[8])) {
				if (!vehicle::is_vehicle_driveable(iLocal_3121[8], 0)) {
					audio::_0x18EB48CFC41F2EA0(iLocal_3121[8], 0);
					iLocal_3498[1] = 1;
				}
				else if (iLocal_3180 == 5) {
					audio::_0x18EB48CFC41F2EA0(iLocal_3121[8], 0);
					iLocal_3498[1] = 1;
				}
			}
			else {
				iLocal_3498[1] = 1;
			}
		}
	}
	if (iLocal_3490[2] == 0) {
		if (entity::does_entity_exist(iLocal_3121[11])) {
			if (vehicle::is_vehicle_driveable(iLocal_3121[11], 0)) {
				audio::_dynamic_mixer_related_fn(iLocal_3121[11], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[2] = 1;
			}
		}
	}
	if (iLocal_3498[2] == 0) {
		if (iLocal_3490[2] == 1) {
			if (entity::does_entity_exist(iLocal_3121[11])) {
				if (!vehicle::is_vehicle_driveable(iLocal_3121[11], 0)) {
					audio::_0x18EB48CFC41F2EA0(iLocal_3121[11], 0);
					iLocal_3498[2] = 1;
				}
				else if (iLocal_3180 == 5) {
					audio::_0x18EB48CFC41F2EA0(iLocal_3121[11], 0);
					iLocal_3498[2] = 1;
				}
			}
			else {
				iLocal_3498[2] = 1;
			}
		}
	}
	if (iLocal_3490[3] == 0) {
		if (entity::does_entity_exist(iLocal_3121[12])) {
			if (vehicle::is_vehicle_driveable(iLocal_3121[12], 0)) {
				audio::_dynamic_mixer_related_fn(iLocal_3121[12], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[3] = 1;
			}
		}
	}
	if (iLocal_3498[3] == 0) {
		if (iLocal_3490[3] == 1) {
			if (entity::does_entity_exist(iLocal_3121[12])) {
				if (!vehicle::is_vehicle_driveable(iLocal_3121[12], 0)) {
					audio::_0x18EB48CFC41F2EA0(iLocal_3121[12], 0);
					iLocal_3498[3] = 1;
				}
				else if (iLocal_3180 == 5) {
					audio::_0x18EB48CFC41F2EA0(iLocal_3121[12], 0);
					iLocal_3498[3] = 1;
				}
			}
			else {
				iLocal_3498[3] = 1;
			}
		}
	}
	if (iLocal_3490[4] == 0) {
		if (entity::does_entity_exist(iLocal_3121[13])) {
			if (vehicle::is_vehicle_driveable(iLocal_3121[13], 0)) {
				audio::_dynamic_mixer_related_fn(iLocal_3121[13], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[4] = 1;
			}
		}
	}
	if (iLocal_3498[4] == 0) {
		if (iLocal_3490[4] == 1) {
			if (entity::does_entity_exist(iLocal_3121[13])) {
				if (!vehicle::is_vehicle_driveable(iLocal_3121[13], 0)) {
					audio::_0x18EB48CFC41F2EA0(iLocal_3121[13], 0);
					iLocal_3498[4] = 1;
				}
				else if (iLocal_3180 == 5) {
					audio::_0x18EB48CFC41F2EA0(iLocal_3121[13], 0);
					iLocal_3498[4] = 1;
				}
			}
			else {
				iLocal_3498[4] = 1;
			}
		}
	}
	if (iLocal_3490[5] == 0) {
		if (entity::does_entity_exist(iLocal_3121[14])) {
			if (vehicle::is_vehicle_driveable(iLocal_3121[14], 0)) {
				audio::_dynamic_mixer_related_fn(iLocal_3121[14], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[5] = 1;
			}
		}
	}
	if (iLocal_3498[5] == 0) {
		if (iLocal_3490[5] == 1) {
			if (entity::does_entity_exist(iLocal_3121[14])) {
				if (!vehicle::is_vehicle_driveable(iLocal_3121[14], 0)) {
					audio::_0x18EB48CFC41F2EA0(iLocal_3121[14], 0);
					iLocal_3498[5] = 1;
				}
				else if (iLocal_3180 == 5) {
					audio::_0x18EB48CFC41F2EA0(iLocal_3121[14], 0);
					iLocal_3498[5] = 1;
				}
			}
			else {
				iLocal_3498[5] = 1;
			}
		}
	}
	if (iLocal_3490[6] == 0) {
		if (entity::does_entity_exist(iLocal_3121[15])) {
			if (vehicle::is_vehicle_driveable(iLocal_3121[15], 0)) {
				audio::_dynamic_mixer_related_fn(iLocal_3121[15], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[6] = 1;
			}
		}
	}
	if (iLocal_3498[6] == 0) {
		if (iLocal_3490[6] == 1) {
			if (entity::does_entity_exist(iLocal_3121[15])) {
				if (!vehicle::is_vehicle_driveable(iLocal_3121[15], 0)) {
					audio::_0x18EB48CFC41F2EA0(iLocal_3121[15], 0);
					iLocal_3498[6] = 1;
				}
				else if (iLocal_3180 == 5) {
					audio::_0x18EB48CFC41F2EA0(iLocal_3121[15], 0);
					iLocal_3498[6] = 1;
				}
			}
			else {
				iLocal_3498[6] = 1;
			}
		}
	}
}

// Position - 0x20934
void func_371() {
	switch (iLocal_3180) {
	case 2:
		if (iLocal_3181 > 0) {
			if (iLocal_3185 == 0) {
				iLocal_3364 = 0;
				iLocal_3523 = 0;
				iLocal_3556 = 0;
				iLocal_3557 = 0;
				func_17(&uLocal_3578, 1, 0, "Devin", 0, 1);
				func_17(&uLocal_3578, 0, player::player_ped_id(), "Michael", 0, 1);
				iLocal_3185 = 1;
			}
			if (iLocal_3185 == 1) {
				if (iLocal_3364 == 0) {
					if (gameplay::get_distance_between_coords(
							vLocal_3318, entity::get_entity_coords(player::player_ped_id(), 1), 1) > 2f) {
						if (!ui::is_message_being_displayed() || !ui::is_subtitle_preference_switched_on()) {
							if (func_235(&uLocal_3578, "T1M4AUD", "T1M4_CHASE", 3, 0, 0, 0)) {
								iLocal_3364 = 1;
							}
						}
					}
				}
				if (iLocal_3523 == 0) {
					if (gameplay::get_distance_between_coords(
							vLocal_3318, entity::get_entity_coords(player::player_ped_id(), 1), 1) > 100f) {
						if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
							if (func_374(&uLocal_3578, 29, "T1M4AUD", "SOL3_DEVCALL", 7, 0, 0, 1)) {
								unk1::_0x293220DA1B46CEBC(4f, 10f, 4);
								iLocal_3523 = 1;
							}
						}
					}
				}
				if (iLocal_3556 == 0 && iLocal_3523 == 1) {
					if (func_373()) {
						if (!ui::is_message_being_displayed() || !ui::is_subtitle_preference_switched_on()) {
							if (func_235(&uLocal_3578, "T1M4AUD", "T1M4_REACT", 3, 0, 0, 0)) {
								iLocal_3556 = 1;
							}
						}
					}
				}
				if (iLocal_3557 == 0) {
					if (entity::does_entity_exist(iLocal_3258)) {
						if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
							if (func_16(player::player_ped_id(), iLocal_3258, 1) < 200f &&
								entity::is_entity_on_screen(iLocal_3258)) {
								if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
									if (!ui::is_message_being_displayed() ||
										!ui::is_subtitle_preference_switched_on()) {
										if (func_235(&uLocal_3578, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0)) {
											unk1::_0x293220DA1B46CEBC(3f, 12f, 4);
											iLocal_3557 = 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		break;

	case 4:
		if (iLocal_3181 >= 0) {
			if (iLocal_3185 == 0) {
				iLocal_3524[0] = 0;
				iLocal_3524[1] = 0;
				iLocal_3524[2] = 0;
				iLocal_3524[3] = 0;
				iLocal_3553 = 0;
				iLocal_3554 = 0;
				iLocal_3555 = 0;
				iLocal_3558 = 0;
				iLocal_3559 = 0;
				iLocal_3560 = 0;
				iLocal_3561 = 0;
				iLocal_3562 = 0;
				iLocal_3199 = gameplay::get_game_timer();
				func_17(&uLocal_3578, 0, player::player_ped_id(), "Michael", 0, 1);
				func_17(&uLocal_3578, 4, 0, "SOL3COP", 0, 1);
				iLocal_3185 = 1;
			}
			if (iLocal_3185 == 1) {
				if (iLocal_3557 == 0) {
					if (entity::does_entity_exist(iLocal_3258)) {
						if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
							if (func_16(player::player_ped_id(), iLocal_3258, 1) < 200f &&
								entity::is_entity_on_screen(iLocal_3258)) {
								if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
									if (!ui::is_message_being_displayed() ||
										!ui::is_subtitle_preference_switched_on()) {
										if (func_235(&uLocal_3578, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0)) {
											iLocal_3557 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (entity::does_entity_exist(iLocal_3258)) {
					if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
						if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
							if (iLocal_3524[0] == 0) {
								if (vehicle::is_vehicle_driveable(iLocal_3121[7], 0) ||
									vehicle::is_vehicle_driveable(iLocal_3121[8], 0)) {
									if (vehicle::get_time_position_in_recording(iLocal_3258) > 7000f &&
										vehicle::get_time_position_in_recording(iLocal_3258) < 28000f) {
										if (!func_234()) {
											if (!ui::is_message_being_displayed() ||
												!ui::is_subtitle_preference_switched_on()) {
												if (func_235(&uLocal_3578, "T1M4AUD", "T1M4_POLICE", 7, 0, 0, 0)) {
													iLocal_3524[0] = 1;
												}
											}
										}
									}
								}
							}
							if (iLocal_3524[1] == 0) {
								if (vehicle::is_vehicle_driveable(iLocal_3121[7], 0) ||
									vehicle::is_vehicle_driveable(iLocal_3121[8], 0)) {
									if (vehicle::get_time_position_in_recording(iLocal_3258) > 28000f &&
										vehicle::get_time_position_in_recording(iLocal_3258) < 34500f) {
										if (!func_234()) {
											if (!ui::is_message_being_displayed() ||
												!ui::is_subtitle_preference_switched_on()) {
												if (func_235(&uLocal_3578, "T1M4AUD", "T1M4_POLICE2", 7, 0, 0, 0)) {
													unk1::_0x293220DA1B46CEBC(4f, 4f, 4);
													iLocal_3524[1] = 1;
												}
											}
										}
									}
								}
							}
							if (iLocal_3524[2] == 0) {
								if (vehicle::is_vehicle_driveable(iLocal_3121[7], 0) ||
									vehicle::is_vehicle_driveable(iLocal_3121[8], 0)) {
									if (vehicle::get_time_position_in_recording(iLocal_3258) > 36000f &&
										vehicle::get_time_position_in_recording(iLocal_3258) < 41000f) {
										if (!func_234()) {
											if (!ui::is_message_being_displayed() ||
												!ui::is_subtitle_preference_switched_on()) {
												if (func_235(&uLocal_3578, "T1M4AUD", "T1M4_POLICE3", 7, 0, 0, 0)) {
													unk1::_0x293220DA1B46CEBC(2f, 4f, 4);
													iLocal_3524[2] = 1;
												}
											}
										}
									}
								}
							}
							if (iLocal_3554 == 0) {
								if (vehicle::get_time_position_in_recording(iLocal_3258) > 41000f &&
									vehicle::get_time_position_in_recording(iLocal_3258) < 43500f) {
									if (entity::does_entity_exist(iLocal_3265) &&
										entity::is_entity_on_screen(iLocal_3265)) {
										if (!func_234()) {
											if (!ui::is_message_being_displayed() ||
												!ui::is_subtitle_preference_switched_on()) {
												if (func_235(&uLocal_3578, "T1M4AUD", "T1M4_BOOM", 7, 0, 0, 0)) {
													unk1::_0x293220DA1B46CEBC(4f, 4f, 4);
													iLocal_3554 = 1;
												}
											}
										}
									}
								}
							}
							if (iLocal_3555 == 0) {
								if (vehicle::get_time_position_in_recording(iLocal_3258) > 50509f &&
									vehicle::get_time_position_in_recording(iLocal_3258) < 50872f) {
									if (entity::does_entity_exist(iLocal_3265) &&
										entity::is_entity_on_screen(iLocal_3265)) {
										if (!func_234()) {
											if (!ui::is_message_being_displayed() ||
												!ui::is_subtitle_preference_switched_on()) {
												if (func_235(&uLocal_3578, "T1M4AUD", "T1M4_BLOW", 7, 0, 0, 0)) {
													iLocal_3555 = 1;
												}
											}
										}
									}
								}
							}
							if (iLocal_3524[3] == 0) {
								if (vehicle::get_time_position_in_recording(iLocal_3258) > 58000f &&
									vehicle::get_time_position_in_recording(iLocal_3258) < 68000f) {
									if (!func_234()) {
										if (!ui::is_message_being_displayed() ||
											!ui::is_subtitle_preference_switched_on()) {
											if (func_235(&uLocal_3578, "T1M4AUD", "T1M4_POLICE4", 7, 0, 0, 0)) {
												iLocal_3524[3] = 1;
											}
										}
									}
								}
							}
							if (iLocal_3558 == 0 && iLocal_3524[3] == 1) {
								if (vehicle::get_time_position_in_recording(iLocal_3258) < 76000f) {
									if (!func_234()) {
										if (!ui::is_message_being_displayed() ||
											!ui::is_subtitle_preference_switched_on()) {
											if (func_235(&uLocal_3578, "T1M4AUD", "T1M4_CHASE3", 7, 0, 0, 0)) {
												iLocal_3558 = 1;
											}
										}
									}
								}
							}
							if (iLocal_3553 == 0) {
								if (vehicle::get_time_position_in_recording(iLocal_3258) > 80000f &&
									vehicle::get_time_position_in_recording(iLocal_3258) < 82000f) {
									if (entity::does_entity_exist(uLocal_3260[0])) {
										if (vehicle::is_vehicle_driveable(uLocal_3260[0], 0)) {
											if (entity::is_entity_on_screen(uLocal_3260[0])) {
												if (!func_234()) {
													if (!ui::is_message_being_displayed() ||
														!ui::is_subtitle_preference_switched_on()) {
														if (func_235(&uLocal_3578, "T1M4AUD", "T1M4_CHASE4", 7, 0, 0,
																	 0)) {
															unk1::_0x293220DA1B46CEBC(3f, 10f, 4);
															iLocal_3553 = 1;
														}
													}
												}
											}
										}
									}
								}
							}
							if (iLocal_3559 == 0) {
								if (vehicle::get_time_position_in_recording(iLocal_3258) > 82100f &&
									vehicle::get_time_position_in_recording(iLocal_3258) < 83500f) {
									if (entity::does_entity_exist(iLocal_3121[11])) {
										if (entity::is_entity_on_screen(iLocal_3121[11])) {
											if (!func_234()) {
												if (!ui::is_message_being_displayed() ||
													!ui::is_subtitle_preference_switched_on()) {
													if (func_235(&uLocal_3578, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0)) {
														iLocal_3559 = 1;
													}
												}
											}
										}
									}
									else if (entity::does_entity_exist(iLocal_3121[12])) {
										if (entity::is_entity_on_screen(iLocal_3121[12])) {
											if (!func_234()) {
												if (!ui::is_message_being_displayed() ||
													!ui::is_subtitle_preference_switched_on()) {
													if (func_235(&uLocal_3578, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0)) {
														iLocal_3559 = 1;
													}
												}
											}
										}
									}
								}
							}
							if (iLocal_3562 == 0) {
								if (vehicle::get_time_position_in_recording(iLocal_3258) > 101891f &&
									vehicle::get_time_position_in_recording(iLocal_3258) < 105000f &&
									entity::is_entity_on_screen(iLocal_3258)) {
									if (!func_234()) {
										if (!ui::is_message_being_displayed() ||
											!ui::is_subtitle_preference_switched_on()) {
											if (func_235(&uLocal_3578, "T1M4AUD", "T1M4_CHASE7", 7, 0, 0, 0)) {
												unk1::_0x293220DA1B46CEBC(3f, 10f, 4);
												iLocal_3562 = 1;
											}
										}
									}
								}
							}
							if (vehicle::get_time_position_in_recording(iLocal_3258) > 105500f &&
								vehicle::get_time_position_in_recording(iLocal_3258) < 119000f &&
								gameplay::get_game_timer() > iLocal_3199 + 7000 && iLocal_3561 == 0) {
								if (!func_234()) {
									if (!ui::is_message_being_displayed() ||
										!ui::is_subtitle_preference_switched_on()) {
										if (func_235(&uLocal_3578, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0)) {
											iLocal_3199 = gameplay::get_game_timer();
											iLocal_3561 = 1;
										}
									}
								}
							}
							if (iLocal_3560 == 0 && iLocal_3561 == 1) {
								if (!func_234()) {
									if (!ui::is_message_being_displayed() ||
										!ui::is_subtitle_preference_switched_on()) {
										if (func_235(&uLocal_3578, "T1M4AUD", "T1M4_CHASE6", 7, 0, 0, 0)) {
											iLocal_3560 = 1;
										}
									}
								}
							}
							if (vehicle::get_time_position_in_recording(iLocal_3258) > 105500f &&
								vehicle::get_time_position_in_recording(iLocal_3258) < 119000f &&
								gameplay::get_game_timer() > iLocal_3199 + 7000 && iLocal_3560 == 1) {
								if (!func_234()) {
									if (!ui::is_message_being_displayed() ||
										!ui::is_subtitle_preference_switched_on()) {
										if (func_235(&uLocal_3578, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0)) {
											iLocal_3199 = gameplay::get_game_timer();
										}
									}
								}
							}
						}
					}
				}
			}
		}
		break;

	case 5:
		if (iLocal_3181 > 0) {
			if (iLocal_3185 == 0) {
				iLocal_3530 = 0;
				iLocal_3563 = 0;
				iLocal_3569 = 0;
				iLocal_3564 = 1;
				iLocal_3204 = gameplay::get_game_timer();
				func_17(&uLocal_3578, 0, player::player_ped_id(), "Michael", 0, 1);
				if (!ped::is_ped_injured(iLocal_3222)) {
					func_17(&uLocal_3578, 2, iLocal_3222, "MOLLY", 0, 1);
				}
				iLocal_3185 = 1;
			}
			if (iLocal_3185 == 1) {
				if (iLocal_3569 == 0) {
					audio::_play_ambient_speech_at_coords("T1M4_BBAA", "AIRPORTANNO", -939.5f, -2932.2f, 16f,
														  "SPEECH_PARAMS_FORCE_FRONTEND");
					iLocal_3569 = 1;
				}
				if (iLocal_3564 == 1) {
					if (iLocal_3530 == 0) {
						if (!func_234()) {
							if (!ui::is_message_being_displayed() || !ui::is_subtitle_preference_switched_on()) {
								if (func_235(&uLocal_3578, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0)) {
									unk1::_0x293220DA1B46CEBC(4f, 6f, 4);
									iLocal_3200 = gameplay::get_game_timer();
									iLocal_3530 = 1;
									iLocal_3563 = 1;
									iLocal_3564 = 0;
								}
							}
						}
					}
					if (gameplay::get_game_timer() > iLocal_3200 + 5000) {
						if (!func_234()) {
							if (!ui::is_message_being_displayed() || !ui::is_subtitle_preference_switched_on()) {
								if (func_235(&uLocal_3578, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0)) {
									unk1::_0x293220DA1B46CEBC(4f, 6f, 4);
									iLocal_3200 = gameplay::get_game_timer();
								}
							}
						}
					}
				}
				if (iLocal_3563 == 1 && gameplay::get_game_timer() > iLocal_3204 + 4000) {
					if (!func_234()) {
						if (!ui::is_message_being_displayed() || !ui::is_subtitle_preference_switched_on()) {
							if (func_235(&uLocal_3578, "T1M4AUD", "T1M4_SHOUT1", 7, 0, 0, 0)) {
								unk1::_0x293220DA1B46CEBC(4f, 6f, 4);
								iLocal_3204 = gameplay::get_game_timer();
								iLocal_3564 = 1;
								iLocal_3563 = 0;
							}
						}
					}
				}
			}
		}
		break;

	case 6:
		if (iLocal_3181 > 0) {
			if (iLocal_3185 == 0) {
				iLocal_3531 = 0;
				iLocal_3532 = 0;
				iLocal_3533 = 0;
				iLocal_3565 = 0;
				iLocal_3566 = 0;
				func_17(&uLocal_3578, 0, player::player_ped_id(), "Michael", 0, 1);
				if (!ped::is_ped_injured(iLocal_3222)) {
					func_17(&uLocal_3578, 2, iLocal_3222, "MOLLY", 0, 1);
				}
				iLocal_3185 = 1;
			}
			if (iLocal_3185 == 1) {
				if (iLocal_3531 == 0) {
					if (!func_234()) {
						if (!ui::is_message_being_displayed() || !ui::is_subtitle_preference_switched_on()) {
							if (func_235(&uLocal_3578, "T1M4AUD", "SOL3_PAST", 7, 0, 0, 0)) {
								iLocal_3531 = 1;
							}
						}
					}
				}
				if (iLocal_3531 == 1 && iLocal_3533 == 0) {
					if (!func_234()) {
						if (!ui::is_message_being_displayed() || !ui::is_subtitle_preference_switched_on()) {
							if (func_235(&uLocal_3578, "T1M4AUD", "SOL3_WATCH", 7, 0, 0, 0)) {
								iLocal_3533 = 1;
							}
						}
					}
				}
				if (iLocal_3532 == 0) {
					if (entity::does_entity_exist(iLocal_3222)) {
						if (!ped::is_ped_injured(iLocal_3222)) {
							if (ped::is_synchronized_scene_running(iLocal_3209)) {
								if (ped::get_synchronized_scene_phase(iLocal_3209) > 0.65f &&
									ped::get_synchronized_scene_phase(iLocal_3209) < 0.835f) {
									if (!func_234()) {
										if (!ui::is_message_being_displayed() ||
											!ui::is_subtitle_preference_switched_on()) {
											if (func_235(&uLocal_3578, "T1M4AUD", "SOL3_SUCKS", 7, 0, 0, 0)) {
												unk1::_0x293220DA1B46CEBC(8f, 8f, 4);
												iLocal_3532 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_3565 == 0) {
					if (!entity::does_entity_exist(iLocal_3222)) {
						if (!func_234()) {
							if (!ui::is_message_being_displayed() || !ui::is_subtitle_preference_switched_on()) {
								if (func_235(&uLocal_3578, "T1M4AUD", "T1M4_SMUSH", 7, 0, 0, 0)) {
									iLocal_3565 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3565 == 1 && iLocal_3566 == 0) {
					if (!func_234()) {
						if (!ui::is_message_being_displayed() || !ui::is_subtitle_preference_switched_on()) {
							if (func_235(&uLocal_3578, "T1M4AUD", "T1M4_SMUSH2", 7, 0, 0, 0)) {
								iLocal_3566 = 1;
							}
						}
					}
				}
			}
		}
		break;

	case 8:
		if (iLocal_3181 > 0) {
			if (iLocal_3185 == 0) {
				iLocal_3567 = 0;
				iLocal_3205 = gameplay::get_game_timer();
				func_17(&uLocal_3578, 0, player::player_ped_id(), "Michael", 0, 1);
				iLocal_3185 = 1;
			}
			if (iLocal_3185 == 1) {
				if (iLocal_3567 == 0) {
					if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						iLocal_3257 = func_372(player::player_ped_id(), -1533126372, 0, 0, 28);
						if (entity::does_entity_exist(iLocal_3257)) {
							if (func_16(player::player_ped_id(), iLocal_3257, 1) < 40f) {
								if (!func_234()) {
									if (!ui::is_message_being_displayed() ||
										!ui::is_subtitle_preference_switched_on()) {
										if (func_235(&uLocal_3578, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0)) {
											iLocal_3567 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_3567 == 1 && gameplay::get_game_timer() > iLocal_3205 + 5000) {
					if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						iLocal_3257 = func_372(player::player_ped_id(), -1533126372, 0, 0, 28);
						if (entity::does_entity_exist(iLocal_3257)) {
							if (func_16(player::player_ped_id(), iLocal_3257, 1) < 40f) {
								if (!func_234()) {
									if (!ui::is_message_being_displayed() ||
										!ui::is_subtitle_preference_switched_on()) {
										if (func_235(&uLocal_3578, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0)) {
											iLocal_3205 = gameplay::get_game_timer();
										}
									}
								}
							}
						}
					}
				}
			}
		}
		break;
	}
}

// Position - 0x2174A
int func_372(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0[16];
	int iVar17;

	iVar17 = 0;
	if (!ped::is_ped_injured(iParam0)) {
		ped::get_ped_nearby_peds(iParam0, &iVar0, iParam4);
		iVar17 = 0;
		while (iVar17 <= iVar0 - 1) {
			if (entity::does_entity_exist(iVar0[iVar17])) {
				if (!ped::is_ped_injured(iVar0[iVar17])) {
					if (ped::get_ped_relationship_group_hash(iVar0[iVar17]) == iParam1) {
						if (iParam2 <= 0) {
							if (iParam3 == 1) {
								if (entity::is_entity_on_screen(iVar0[iVar17])) {
									return iVar0[iVar17];
								}
							}
							else {
								return iVar0[iVar17];
							}
						}
						else if (iVar17 + iParam2 <= iVar0 - 1) {
							if (entity::does_entity_exist(iVar0[iVar17 + iParam2])) {
								if (!ped::is_ped_injured(iVar0[iVar17 + iParam2])) {
									if (ped::get_ped_relationship_group_hash(iVar0[iVar17 + iParam2]) == iParam1) {
										if (iParam3 == 1) {
											if (entity::is_entity_on_screen(iVar0[iVar17 + iParam2])) {
												return iVar0[iVar17 + iParam2];
											}
										}
										else {
											return iVar0[iVar17 + iParam2];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar17++;
		}
	}
	return 0;
}

// Position - 0x21851
bool func_373() {
	if (Global_15745 == 0) {
		return true;
	}
	return false;
}

// Position - 0x21868
bool func_374(var *uParam0, int iParam1, char *sParam2, char *sParam3, int iParam4, int iParam5, int iParam6,
			  int iParam7) {
	func_233(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15793 = 1;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	Global_2621441 = 0;
	return func_226(sParam3, iParam4, iParam7);
}

// Position - 0x218B6
void func_375() {
	if (iLocal_3180 == 4 || iLocal_3180 == 5 || iLocal_3180 == 8 || iLocal_3180 == 6) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (func_376(entity::get_entity_coords(player::player_ped_id(), 1), 2, 200, 0)) {
				player::_0xDC64D2C53493ED12(player::player_id());
				player::_0x4669B3ED80F24B4E(player::player_id());
			}
		}
	}
	if (iLocal_3510 == 0) {
		if (iLocal_3180 == 4) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				if (func_376(entity::get_entity_coords(player::player_ped_id(), 1), 2, 200, 0)) {
					player::set_player_wanted_level(player::player_id(), 3, 0);
					player::set_player_wanted_level_now(player::player_id(), 0);
					iLocal_3510 = 1;
				}
			}
		}
	}
}

// Position - 0x2195D
bool func_376(vector3 vParam0, int iParam3, int iParam4, int iParam5) {
	vector3 vVar0[15];
	vector3 vVar46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;

	iVar110 = 0;
	switch (iParam3) {
	case 1:
		vVar0[0 /*3*/] = {-1332.211f, 100.4608f, 40.38437f};
		vVar46[0 /*3*/] = {-1094.238f, 148.4274f, 73f};
		fVar92[0] = 171.25f;
		vVar0[1 /*3*/] = {-999.7344f, -110.2231f, 25.25706f};
		vVar46[1 /*3*/] = {-1149.494f, 109.2558f, 73f};
		fVar92[1] = 132f;
		vVar0[2 /*3*/] = {-1035.113f, -84.95885f, 28.2746f};
		vVar46[2 /*3*/] = {-1261.103f, 50.08148f, 73f};
		fVar92[2] = 132f;
		iVar108 = 3;
		break;

	case 2:
		vVar0[0 /*3*/] = {-804.3439f, -3346.5f, 10f};
		vVar46[0 /*3*/] = {-1816.954f, -2768.893f, IntToFloat(250 + iParam4)};
		fVar92[0] = 247f;
		vVar0[1 /*3*/] = {-1911.488f, -2934.197f, 10f};
		vVar46[1 /*3*/] = {-968.6236f, -3477.748f, IntToFloat(250 + iParam4)};
		fVar92[1] = 149f;
		vVar0[2 /*3*/] = {-844.9433f, -2802.785f, 10f};
		vVar46[2 /*3*/] = {-1011.081f, -3086.904f, IntToFloat(250 + iParam4)};
		fVar92[2] = 185.5f;
		vVar0[3 /*3*/] = {-1021.086f, -2952.277f, 10f};
		vVar46[3 /*3*/] = {-1599.008f, -2616.271f, IntToFloat(250 + iParam4)};
		fVar92[3] = 250f;
		vVar0[4 /*3*/] = {-1027.136f, -2436.457f, 10f};
		vVar46[4 /*3*/] = {-1392.61f, -2226.763f, IntToFloat(250 + iParam4)};
		fVar92[4] = 193.5f;
		vVar0[5 /*3*/] = {-1497.549f, -2408.712f, 10f};
		vVar46[5 /*3*/] = {-1136.917f, -2617.955f, IntToFloat(250 + iParam4)};
		fVar92[5] = 234.5f;
		vVar0[6 /*3*/] = {-982.7924f, -2831.709f, 12.93313f};
		vVar46[6 /*3*/] = {-966.4677f, -2803.458f, 16.68313f};
		fVar92[6] = 16f;
		vVar0[7 /*3*/] = {-1110.083f, -3496.806f, 12f};
		vVar46[7 /*3*/] = {-1955.298f, -3010.431f, IntToFloat(250 + iParam4)};
		fVar92[7] = 80f;
		vVar0[8 /*3*/] = {-1886.899f, -3193.024f, 12f};
		vVar46[8 /*3*/] = {-1836.143f, -3105.268f, IntToFloat(250 + iParam4)};
		fVar92[8] = 142f;
		vVar0[9 /*3*/] = {-1134.337f, -3535.648f, 12f};
		vVar46[9 /*3*/] = {-1259.649f, -3463.486f, IntToFloat(250 + iParam4)};
		fVar92[9] = 30.75f;
		vVar0[10 /*3*/] = {-969.1279f, -3463.899f, 12f};
		vVar46[10 /*3*/] = {-896.3734f, -3505.715f, IntToFloat(250 + iParam4)};
		fVar92[10] = 150f;
		vVar0[11 /*3*/] = {-1369.491f, -2173.579f, 10f};
		vVar46[11 /*3*/] = {-1685.626f, -2720.364f, IntToFloat(250 + iParam4)};
		fVar92[11] = 29.25f;
		vVar0[12 /*3*/] = {-1010.926f, -3550.943f, 10f};
		vVar46[12 /*3*/] = {-1110.198f, -3493.617f, IntToFloat(250 + iParam4)};
		fVar92[12] = 43f;
		iVar108 = 13;
		break;

	case 3:
		vVar0[0 /*3*/] = {-1773.944f, 3287.334f, 30f};
		vVar46[0 /*3*/] = {-2029.776f, 2845.083f, IntToFloat(250 + iParam4)};
		fVar92[0] = 250f;
		vVar0[1 /*3*/] = {-2725.889f, 3291.099f, 30f};
		vVar46[1 /*3*/] = {-2009.182f, 2879.835f, IntToFloat(250 + iParam4)};
		fVar92[1] = 180f;
		vVar0[2 /*3*/] = {-2442.026f, 3326.699f, 30f};
		vVar46[2 /*3*/] = {-2033.928f, 3089.049f, IntToFloat(250 + iParam4)};
		fVar92[2] = 200f;
		vVar0[3 /*3*/] = {-1917.165f, 3374.209f, 30f};
		vVar46[3 /*3*/] = {-2016.791f, 3195.058f, IntToFloat(250 + iParam4)};
		fVar92[3] = 86.25f;
		vVar0[4 /*3*/] = {-2192.753f, 3373.278f, 30f};
		vVar46[4 /*3*/] = {-2191.544f, 3150.417f, IntToFloat(250 + iParam4)};
		fVar92[4] = 140.5f;
		vVar0[5 /*3*/] = {-2077.663f, 3344.514f, 30f};
		vVar46[5 /*3*/] = {-2191.544f, 3150.417f, IntToFloat(250 + iParam4)};
		fVar92[5] = 140.5f;
		vVar0[6 /*3*/] = {-2861.755f, 3352.661f, 30f};
		vVar46[6 /*3*/] = {-2715.871f, 3269.916f, IntToFloat(250 + iParam4)};
		fVar92[6] = 90f;
		vVar0[7 /*3*/] = {-2005.574f, 3364.533f, 30f};
		vVar46[7 /*3*/] = {-1977.569f, 3330.888f, IntToFloat(250 + iParam4)};
		fVar92[7] = 100f;
		vVar0[8 /*3*/] = {-1682.235f, 3004.285f, 30f};
		vVar46[8 /*3*/] = {-1942.747f, 2947.441f, IntToFloat(250 + iParam4)};
		fVar92[8] = 248.75f;
		vVar0[9 /*3*/] = {-2393.295f, 2936.406f, 31.6801f};
		vVar46[9 /*3*/] = {-2453.037f, 3006.863f, 52.31003f};
		fVar92[9] = 128f;
		vVar0[10 /*3*/] = {-2347.185f, 3023.83f, 31.56573f};
		vVar46[10 /*3*/] = {-2517.33f, 2989.063f, 49.95644f};
		fVar92[10] = 127.25f;
		vVar0[11 /*3*/] = {-2259.922f, 3358.04f, 29.99972f};
		vVar46[11 /*3*/] = {-2299.772f, 3385.79f, 38.06014f};
		fVar92[11] = 16f;
		vVar0[12 /*3*/] = {-2476.309f, 3363.914f, 31.67933f};
		vVar46[12 /*3*/] = {-2431.981f, 3287.669f, 39.97826f};
		fVar92[12] = 214.25f;
		vVar0[13 /*3*/] = {-2103.081f, 2797.783f, 29.37864f};
		vVar46[13 /*3*/] = {-2096.821f, 2874.423f, 57.80989f};
		fVar92[13] = 65.75f;
		if (iParam5) {
			iVar111 = iParam4;
		}
		else {
			iVar111 = 0;
		}
		vVar46[9 /*3*/].f_2 += IntToFloat(iVar111);
		vVar46[10 /*3*/].f_2 += IntToFloat(iVar111);
		vVar46[11 /*3*/].f_2 += IntToFloat(iVar111);
		vVar46[12 /*3*/].f_2 += IntToFloat(iVar111);
		vVar46[13 /*3*/].f_2 += IntToFloat(iVar111);
		iVar108 = 14;
		break;

	case 4:
		vVar0[0 /*3*/] = {1541.607f, 2527.555f, 40f};
		vVar46[0 /*3*/] = {1815.575f, 2535.06f, IntToFloat(150 + iParam4)};
		fVar92[0] = 114f;
		vVar0[1 /*3*/] = {1788.879f, 2445.727f, 40f};
		vVar46[1 /*3*/] = {1716.96f, 2502.957f, IntToFloat(150 + iParam4)};
		fVar92[1] = 88.5f;
		vVar0[2 /*3*/] = {1601.157f, 2436.244f, 40f};
		vVar46[2 /*3*/] = {1650.078f, 2515.923f, IntToFloat(150 + iParam4)};
		fVar92[2] = 133.25f;
		vVar0[3 /*3*/] = {1706.331f, 2407.597f, 40f};
		vVar46[3 /*3*/] = {1698.555f, 2460.208f, IntToFloat(150 + iParam4)};
		fVar92[3] = 104.5f;
		vVar0[4 /*3*/] = {1712.452f, 2756.218f, 40f};
		vVar46[4 /*3*/] = {1718.848f, 2589.162f, IntToFloat(150 + iParam4)};
		fVar92[4] = 121.75f;
		vVar0[5 /*3*/] = {1830.228f, 2661.24f, 40f};
		vVar46[5 /*3*/] = {1774.812f, 2679.419f, IntToFloat(150 + iParam4)};
		fVar92[5] = 84.5f;
		vVar0[6 /*3*/] = {1559.05f, 2632.22f, 40f};
		vVar46[6 /*3*/] = {1657.208f, 2595.484f, IntToFloat(150 + iParam4)};
		fVar92[6] = 103.75f;
		vVar0[7 /*3*/] = {1612.021f, 2716.869f, 40f};
		vVar46[7 /*3*/] = {1657.165f, 2669.721f, IntToFloat(150 + iParam4)};
		fVar92[7] = 104.25f;
		vVar0[8 /*3*/] = {1809.872f, 2729.827f, 40f};
		vVar46[8 /*3*/] = {1789.855f, 2705.037f, IntToFloat(150 + iParam4)};
		fVar92[8] = 91f;
		vVar0[9 /*3*/] = {1818.789f, 2605.948f, 40f};
		vVar46[9 /*3*/] = {1783.114f, 2606.783f, IntToFloat(150 + iParam4)};
		fVar92[9] = 51.25f;
		iVar108 = 10;
		break;

	case 5:
		vVar0[0 /*3*/] = {3411.002f, 3663.185f, 20f};
		vVar46[0 /*3*/] = {3615.583f, 3626.194f, IntToFloat(40 + iParam4)};
		fVar92[0] = 45.75f;
		vVar0[1 /*3*/] = {3426.66f, 3733.078f, 20f};
		vVar46[1 /*3*/] = {3643.801f, 3694.362f, IntToFloat(40 + iParam4)};
		fVar92[1] = 99f;
		vVar0[2 /*3*/] = {3446.036f, 3795.688f, 20f};
		vVar46[2 /*3*/] = {3650.914f, 3766.152f, IntToFloat(40 + iParam4)};
		fVar92[2] = 81.5f;
		iVar108 = 3;
		break;

	case 6:
		vVar0[0 /*3*/] = {526.053f, -3391.497f, -10f};
		vVar46[0 /*3*/] = {523.2289f, -3118.678f, IntToFloat(10 + iParam4)};
		fVar92[0] = 120f;
		vVar0[1 /*3*/] = {459.4397f, -3199.99f, 4.819676f};
		vVar46[1 /*3*/] = {593.8928f, -3199.998f, 30.06926f};
		fVar92[1] = 170f;
		vVar0[2 /*3*/] = {552.8467f, -3111.054f, 4.819394f};
		vVar46[2 /*3*/] = {585.3137f, -3111.844f, 17.56923f};
		fVar92[2] = 12.5f;
		vVar0[3 /*3*/] = {598.4666f, -3140.147f, 4.819257f};
		vVar46[3 /*3*/] = {597.4973f, -3117.063f, 17.31926f};
		fVar92[3] = 9.75f;
		iVar108 = 4;
		break;

	case 7:
		vVar0[0 /*3*/] = {-1108.55f, -570.8798f, 20f};
		vVar46[0 /*3*/] = {-1187.811f, -477.5037f, IntToFloat(50 + iParam4)};
		fVar92[0] = 162f;
		vVar0[1 /*3*/] = {-1201.378f, -485.9673f, 20f};
		vVar46[1 /*3*/] = {-1215.796f, -464.8281f, IntToFloat(50 + iParam4)};
		fVar92[1] = 124f;
		vVar0[2 /*3*/] = {-985.6311f, -525.4233f, 20f};
		vVar46[2 /*3*/] = {-1013.393f, -475.2057f, IntToFloat(50 + iParam4)};
		fVar92[2] = 55f;
		vVar0[3 /*3*/] = {-1055.849f, -477.8226f, 20f};
		vVar46[3 /*3*/] = {-1073.333f, -498.717f, IntToFloat(50 + iParam4)};
		fVar92[3] = 142f;
		iVar108 = 4;
		break;

	case 8:
		vVar0[0 /*3*/] = {461.5684f, -984.572f, 29.43951f};
		vVar46[0 /*3*/] = {471.17f, -984.4292f, 40.14212f};
		fVar92[0] = 7.75f;
		vVar0[1 /*3*/] = {457.3404f, -984.756f, 34.43951f};
		vVar46[1 /*3*/] = {457.2084f, -993.7189f, 29.38958f};
		fVar92[1] = 14.75f;
		vVar0[2 /*3*/] = {477.6227f, -986.6f, 40.00819f};
		vVar46[2 /*3*/] = {424.8687f, -986.3279f, 48.71241f};
		fVar92[2] = 31.5f;
		vVar0[3 /*3*/] = {474.3889f, -974.4613f, 39.55761f};
		vVar46[3 /*3*/] = {474.0358f, -1021.972f, 49.10033f};
		fVar92[3] = 30.5f;
		vVar0[4 /*3*/] = {442.1768f, -974.1888f, 29.68951f};
		vVar46[4 /*3*/] = {442.1855f, -979.8635f, 33.43951f};
		fVar92[4] = 6.75f;
		iVar108 = 5;
		break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108) {
		if (object::is_point_in_angled_area(vParam0, vVar0[iVar109 /*3*/], vVar46[iVar109 /*3*/], fVar92[iVar109],
											iVar110, 1)) {
			return true;
		}
		iVar109++;
	}
	return false;
}

// Position - 0x226B1
void func_377() {
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			iLocal_3259 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
		}
	}
}

// Position - 0x226DD
void func_378() {
	if (iLocal_3351 == 1) {
		if (iLocal_3180 == 4) {
			if (iLocal_3182 > 1 && iLocal_3475 == 0) {
				if (entity::is_entity_in_angled_area(player::player_ped_id(), -828.6987f, -2938.073f, 12.21745f,
													 -807.6911f, -2905.148f, 16.35626f, 28f, 0, 1, 0)) {
					func_212("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_3180 == 6) {
			if (entity::does_entity_exist(iLocal_3283)) {
				if (ui::does_blip_exist(iLocal_3288)) {
					if (func_16(player::player_ped_id(), iLocal_3283, 1) > 100f) {
						func_212("TRV4_FAIL6");
					}
				}
			}
		}
		if (iLocal_3180 == 4) {
			if (iLocal_3182 == 2) {
				if (gameplay::get_game_timer() > iLocal_3194 + 7000 && iLocal_3508 == 0) {
					func_212("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_3180 == 4) {
			if (entity::does_entity_exist(iLocal_3258)) {
				if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
						if (vehicle::get_time_position_in_recording(iLocal_3258) > 62000f &&
							vehicle::get_time_position_in_recording(iLocal_3258) < 77000f) {
							if (gameplay::get_distance_between_coords(
									entity::get_entity_coords(player::player_ped_id(), 1), -1219f, -2570f, 13f, 1) <
								210f) {
								if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
									if (entity::get_entity_heading(
											ped::get_vehicle_ped_is_in(player::player_ped_id(), 0)) < 200f &&
										entity::get_entity_heading(
											ped::get_vehicle_ped_is_in(player::player_ped_id(), 0)) > 125f) {
										if (iLocal_3507 == 0) {
											iLocal_3197 = gameplay::get_game_timer();
											iLocal_3507 = 1;
										}
										if (iLocal_3507 == 1 && gameplay::get_game_timer() > iLocal_3197 + 4000) {
											func_212("TRV4_FAIL1");
										}
									}
									else if (iLocal_3507 == 1) {
										iLocal_3507 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3180 == 5 || iLocal_3180 == 6) {
			if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1), -928.9f,
													  -2935f, 13f, 1) < 5f &&
				!player::is_player_control_on(player::player_id())) {
				func_212("TRV4_FAIL1");
			}
		}
		if (iLocal_3180 == 2 || iLocal_3180 == 4) {
			if (ped::is_ped_in_any_heli(player::player_ped_id()) || ped::is_ped_in_any_plane(player::player_ped_id())) {
				if (func_376(entity::get_entity_coords(player::player_ped_id(), 1), 2, 200, 0)) {
					func_212("TRV4_FAIL2");
				}
				else if (!func_187("TRV4_HELP3")) {
					func_381("TRV4_HELP3");
				}
			}
			else if (func_187("TRV4_HELP3")) {
				ui::clear_help(1);
			}
		}
		if (entity::does_entity_exist(iLocal_3258)) {
			if (!vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
				if (entity::does_entity_exist(iLocal_3222)) {
					if (!ped::is_ped_injured(iLocal_3222)) {
						entity::set_entity_invincible(iLocal_3222, 0);
						entity::set_entity_health(iLocal_3222, 0);
					}
				}
			}
		}
		if (iLocal_3360 == 1) {
			if (entity::does_entity_exist(iLocal_3222)) {
				if (ped::is_ped_injured(iLocal_3222)) {
					func_212("TRV4_FAIL3");
				}
			}
		}
		if (iLocal_3180 == 4) {
			if (iLocal_3352 == 1) {
				if (!ped::is_ped_injured(iLocal_3222)) {
					if (func_13(player::player_ped_id(), iLocal_3222) > 300f) {
						if (iLocal_3436 == 1) {
							ui::clear_prints();
							func_20("TRV4_WARN1", 7500, 1);
							iLocal_3436 = 0;
						}
					}
					else if (iLocal_3436 == 0) {
						iLocal_3436 = 1;
					}
					if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
						if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
							if (vehicle::get_time_position_in_recording(iLocal_3258) < 40000f) {
								if (func_13(player::player_ped_id(), iLocal_3222) > 400f) {
									func_212("TRV4_FAIL1");
								}
							}
							else if (func_13(player::player_ped_id(), iLocal_3222) > 350f) {
								func_212("TRV4_FAIL1");
							}
						}
					}
				}
			}
			if (iLocal_3182 == 3) {
				if (iLocal_3476 == 1) {
					if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1),
															  -934.4f, -2927.2f, 13.2f, 1) > 25f ||
						gameplay::get_game_timer() > iLocal_3195 + 12000) {
						func_212("TRV4_FAIL1");
					}
				}
			}
		}
		if (iLocal_3180 == 2 || iLocal_3180 == 4) {
			if (ped::is_ped_in_any_taxi(player::player_ped_id())) {
				func_212("TRV4_FAIL1");
			}
		}
		if (iLocal_3180 == 4) {
			if (vehicle::is_vehicle_driveable(iLocal_3258, 0)) {
				if (vehicle::is_playback_going_on_for_vehicle(iLocal_3258)) {
					if (vehicle::get_time_position_in_recording(iLocal_3258) > 111509f) {
						if (entity::is_entity_in_angled_area(player::player_ped_id(), -1070.838f, -2942.241f, 12.19534f,
															 -1009.038f, -2977.609f, 17.44443f, 89.5f, 0, 1, 0)) {
							func_212("TRV4_FAIL1");
						}
					}
					if (vehicle::get_time_position_in_recording(iLocal_3258) > 122000f) {
						if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
							if (entity::is_entity_upsidedown(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0))) {
								if (iLocal_3509 == 0) {
									iLocal_3198 = gameplay::get_game_timer();
									iLocal_3509 = 1;
								}
								if (iLocal_3509 == 1) {
									if (gameplay::get_game_timer() > iLocal_3198 + 4000) {
										func_212("TRV4_FAIL1");
									}
								}
							}
							else {
								iLocal_3509 = 0;
							}
						}
					}
				}
			}
		}
		if (iLocal_3180 == 2) {
			if (entity::is_entity_in_angled_area(player::player_ped_id(), -803.4108f, -2173.417f, -1.911488f,
												 -605.6846f, -2358.229f, 27.32842f, 250f, 0, 1, 0)) {
				func_212("TRV4_FAIL1");
			}
		}
		if (iLocal_3437 == 1) {
			if (func_380()) {
				func_379();
			}
		}
	}
}

// Position - 0x22BEB
void func_379() {
	func_387(player::player_ped_id(), 0);
	func_383();
}

// Position - 0x22C00
bool func_380() {
	if (Global_3) {
		return true;
	}
	if (Global_91491 == 7 || Global_91491 == 8) {
		return true;
	}
	return false;
}

// Position - 0x22C2D
void func_381(char *sParam0) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 1, 1, -1);
}

// Position - 0x22C43
void func_382(int iParam0) {
	if (iParam0) {
		StringCopy(&Global_100756, script::get_this_script_name(), 24);
		Global_100750 = 1;
	}
	else {
		StringCopy(&Global_100756, "NULL", 24);
		Global_100750 = 0;
	}
}

// Position - 0x22C6F
void func_383() {
	func_389(24, 1);
	audio::set_audio_flag("PoliceScannerDisabled", 0);
	vehicle::set_all_vehicle_generators_active_in_area(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 1, 1);
	func_384();
	func_186(&uLocal_28, 0, 0);
	gameplay::_set_unk_map_flag(0);
	pathfind::set_ignore_no_gps_flag(0);
	audio::release_script_audio_bank();
	if (entity::does_entity_exist(iLocal_3271)) {
		vehicle::delete_vehicle(&iLocal_3271);
	}
	func_382(0);
	if (pathfind::does_navmesh_blocking_object_exist(iLocal_3221)) {
		pathfind::remove_navmesh_blocking_object(iLocal_3221);
	}
	if (entity::does_entity_exist(iLocal_3222)) {
		if (!ped::is_ped_injured(iLocal_3222)) {
			ped::set_ped_keep_task(iLocal_3222, 1);
		}
		entity::set_ped_as_no_longer_needed(&iLocal_3222);
	}
	if (entity::does_entity_exist(iLocal_3228)) {
		if (!ped::is_ped_injured(iLocal_3228)) {
			ped::set_ped_keep_task(iLocal_3228, 1);
		}
		entity::set_ped_as_no_longer_needed(&iLocal_3228);
	}
	if (entity::does_entity_exist(iLocal_3245)) {
		if (!ped::is_ped_injured(iLocal_3245)) {
			ped::set_ped_keep_task(iLocal_3245, 1);
		}
		entity::set_ped_as_no_longer_needed(&iLocal_3245);
	}
	if (entity::does_entity_exist(iLocal_3246)) {
		if (!ped::is_ped_injured(iLocal_3246)) {
			ped::set_ped_keep_task(iLocal_3246, 1);
		}
		entity::set_ped_as_no_longer_needed(&iLocal_3246);
	}
	if (entity::does_entity_exist(iLocal_3247)) {
		if (!ped::is_ped_injured(iLocal_3247)) {
			ped::set_ped_keep_task(iLocal_3247, 1);
		}
		entity::set_ped_as_no_longer_needed(&iLocal_3247);
	}
	if (entity::does_entity_exist(iLocal_3248)) {
		if (!ped::is_ped_injured(iLocal_3248)) {
			ped::set_ped_keep_task(iLocal_3248, 1);
		}
		entity::set_ped_as_no_longer_needed(&iLocal_3248);
	}
	if (entity::does_entity_exist(iLocal_3249)) {
		if (!ped::is_ped_injured(iLocal_3249)) {
			ped::set_ped_keep_task(iLocal_3249, 1);
		}
		entity::set_ped_as_no_longer_needed(&iLocal_3249);
	}
	if (entity::does_entity_exist(iLocal_3250)) {
		if (!ped::is_ped_injured(iLocal_3250)) {
			ped::set_ped_keep_task(iLocal_3250, 1);
		}
		entity::set_ped_as_no_longer_needed(&iLocal_3250);
	}
	if (entity::does_entity_exist(uLocal_3223[0])) {
		if (!ped::is_ped_injured(uLocal_3223[0])) {
			ped::set_ped_keep_task(uLocal_3223[0], 1);
		}
		entity::set_ped_as_no_longer_needed(&uLocal_3223[0]);
	}
	if (entity::does_entity_exist(uLocal_3223[1])) {
		if (!ped::is_ped_injured(uLocal_3223[1])) {
			ped::set_ped_keep_task(uLocal_3223[1], 1);
		}
		entity::set_ped_as_no_longer_needed(&uLocal_3223[1]);
	}
	if (entity::does_entity_exist(uLocal_3223[2])) {
		if (!ped::is_ped_injured(uLocal_3223[2])) {
			ped::set_ped_keep_task(uLocal_3223[2], 1);
		}
		entity::set_ped_as_no_longer_needed(&uLocal_3223[2]);
	}
	if (entity::does_entity_exist(uLocal_3223[3])) {
		if (!ped::is_ped_injured(uLocal_3223[3])) {
			ped::set_ped_keep_task(uLocal_3223[3], 1);
		}
		entity::set_ped_as_no_longer_needed(&uLocal_3223[3]);
	}
	if (entity::does_entity_exist(uLocal_3229[0])) {
		if (!ped::is_ped_injured(uLocal_3229[0])) {
			ped::set_ped_keep_task(uLocal_3229[0], 1);
		}
		entity::set_ped_as_no_longer_needed(&uLocal_3229[0]);
	}
	if (entity::does_entity_exist(uLocal_3229[1])) {
		if (!ped::is_ped_injured(uLocal_3229[1])) {
			ped::set_ped_keep_task(uLocal_3229[1], 1);
		}
		entity::set_ped_as_no_longer_needed(&uLocal_3229[1]);
	}
	if (entity::does_entity_exist(uLocal_3229[2])) {
		if (!ped::is_ped_injured(uLocal_3229[2])) {
			ped::set_ped_keep_task(uLocal_3229[2], 1);
		}
		entity::set_ped_as_no_longer_needed(&uLocal_3229[2]);
	}
	if (entity::does_entity_exist(uLocal_3233[0])) {
		if (!ped::is_ped_injured(uLocal_3233[0])) {
			ped::set_ped_keep_task(uLocal_3233[0], 1);
		}
		entity::set_ped_as_no_longer_needed(&uLocal_3233[0]);
	}
	if (entity::does_entity_exist(uLocal_3233[1])) {
		if (!ped::is_ped_injured(uLocal_3233[1])) {
			ped::set_ped_keep_task(uLocal_3233[1], 1);
		}
		entity::set_ped_as_no_longer_needed(&uLocal_3233[1]);
	}
	if (entity::does_entity_exist(uLocal_3233[2])) {
		if (!ped::is_ped_injured(uLocal_3233[2])) {
			ped::set_ped_keep_task(uLocal_3233[2], 1);
		}
		entity::set_ped_as_no_longer_needed(&uLocal_3233[2]);
	}
	if (entity::does_entity_exist(uLocal_3233[3])) {
		if (!ped::is_ped_injured(uLocal_3233[3])) {
			ped::set_ped_keep_task(uLocal_3233[3], 1);
		}
		entity::set_ped_as_no_longer_needed(&uLocal_3233[3]);
	}
	if (entity::does_entity_exist(uLocal_3233[4])) {
		if (!ped::is_ped_injured(uLocal_3233[4])) {
			ped::set_ped_keep_task(uLocal_3233[4], 1);
		}
		entity::set_ped_as_no_longer_needed(&uLocal_3233[4]);
	}
	if (entity::does_entity_exist(uLocal_3233[5])) {
		if (!ped::is_ped_injured(uLocal_3233[5])) {
			ped::set_ped_keep_task(uLocal_3233[5], 1);
		}
		entity::set_ped_as_no_longer_needed(&uLocal_3233[5]);
	}
	if (entity::does_entity_exist(uLocal_3233[6])) {
		if (!ped::is_ped_injured(uLocal_3233[6])) {
			ped::set_ped_keep_task(uLocal_3233[6], 1);
		}
		entity::set_ped_as_no_longer_needed(&uLocal_3233[6]);
	}
	if (entity::does_entity_exist(uLocal_3233[7])) {
		if (!ped::is_ped_injured(uLocal_3233[7])) {
			ped::set_ped_keep_task(uLocal_3233[7], 1);
		}
		entity::set_ped_as_no_longer_needed(&uLocal_3233[7]);
	}
	if (entity::does_entity_exist(uLocal_3233[8])) {
		if (!ped::is_ped_injured(uLocal_3233[8])) {
			ped::set_ped_keep_task(uLocal_3233[8], 1);
		}
		entity::set_ped_as_no_longer_needed(&uLocal_3233[8]);
	}
	if (entity::does_entity_exist(uLocal_3233[9])) {
		if (!ped::is_ped_injured(uLocal_3233[9])) {
			ped::set_ped_keep_task(uLocal_3233[9], 1);
		}
		entity::set_ped_as_no_longer_needed(&uLocal_3233[9]);
	}
	if (entity::does_entity_exist(uLocal_3233[10])) {
		if (!ped::is_ped_injured(uLocal_3233[10])) {
			ped::set_ped_keep_task(uLocal_3233[10], 1);
		}
		entity::set_ped_as_no_longer_needed(&uLocal_3233[10]);
	}
	if (entity::does_entity_exist(uLocal_3251[0])) {
		if (!ped::is_ped_injured(uLocal_3251[0])) {
			ped::set_ped_keep_task(uLocal_3251[0], 1);
		}
		entity::set_ped_as_no_longer_needed(&uLocal_3251[0]);
	}
	if (entity::does_entity_exist(uLocal_3254[0])) {
		if (!ped::is_ped_injured(uLocal_3254[0])) {
			ped::set_ped_keep_task(uLocal_3254[0], 1);
		}
		entity::set_ped_as_no_longer_needed(&uLocal_3254[0]);
	}
	if (entity::does_entity_exist(uLocal_3254[1])) {
		if (!ped::is_ped_injured(uLocal_3254[1])) {
			ped::set_ped_keep_task(uLocal_3254[1], 1);
		}
		entity::set_ped_as_no_longer_needed(&uLocal_3254[1]);
	}
	if (entity::does_entity_exist(iLocal_3258)) {
		entity::set_vehicle_as_no_longer_needed(&iLocal_3258);
	}
	if (entity::does_entity_exist(iLocal_3259)) {
		if (entity::does_entity_belong_to_this_script(iLocal_3259, 0)) {
			entity::set_vehicle_as_no_longer_needed(&iLocal_3259);
		}
	}
	if (entity::does_entity_exist(iLocal_3264)) {
		entity::set_vehicle_as_no_longer_needed(&iLocal_3264);
	}
	if (entity::does_entity_exist(iLocal_3265)) {
		entity::set_vehicle_as_no_longer_needed(&iLocal_3265);
	}
	if (entity::does_entity_exist(iLocal_3266)) {
		entity::set_vehicle_as_no_longer_needed(&iLocal_3266);
	}
	if (entity::does_entity_exist(iLocal_3267)) {
		entity::set_vehicle_as_no_longer_needed(&iLocal_3267);
	}
	if (entity::does_entity_exist(iLocal_3271)) {
		entity::set_vehicle_as_no_longer_needed(&iLocal_3271);
	}
	if (entity::does_entity_exist(iLocal_3275)) {
		if (entity::does_entity_belong_to_this_script(iLocal_3275, 0)) {
			entity::set_vehicle_as_no_longer_needed(&iLocal_3275);
		}
	}
	if (entity::does_entity_exist(uLocal_3279[0])) {
		entity::set_vehicle_as_no_longer_needed(&uLocal_3279[0]);
	}
	if (entity::does_entity_exist(uLocal_3279[1])) {
		entity::set_vehicle_as_no_longer_needed(&uLocal_3279[1]);
	}
	if (entity::does_entity_exist(uLocal_3260[0])) {
		entity::set_vehicle_as_no_longer_needed(&uLocal_3260[0]);
	}
	if (entity::does_entity_exist(uLocal_3260[1])) {
		entity::set_vehicle_as_no_longer_needed(&uLocal_3260[1]);
	}
	if (entity::does_entity_exist(uLocal_3279[0])) {
		entity::set_vehicle_as_no_longer_needed(&uLocal_3279[0]);
	}
	if (entity::does_entity_exist(uLocal_3279[1])) {
		entity::set_vehicle_as_no_longer_needed(&uLocal_3279[1]);
	}
	if (entity::does_entity_exist(uLocal_3268[0])) {
		entity::set_vehicle_as_no_longer_needed(&uLocal_3268[0]);
	}
	if (entity::does_entity_exist(uLocal_3268[1])) {
		entity::set_vehicle_as_no_longer_needed(&uLocal_3268[1]);
	}
	if (entity::does_entity_exist(uLocal_3272[0])) {
		entity::set_vehicle_as_no_longer_needed(&uLocal_3272[0]);
	}
	if (entity::does_entity_exist(iLocal_3263)) {
		entity::set_vehicle_as_no_longer_needed(&iLocal_3263);
	}
	audio::cancel_music_event("TRV4_START");
	audio::cancel_music_event("TRV4_GAMEPLAY_START");
	audio::cancel_music_event("TRV4_START_CS_SKIP");
	audio::cancel_music_event("TRV4_START_RT");
	audio::cancel_music_event("TRV4_FOOT_CHASE_RT");
	audio::cancel_music_event("TRV4_EVADE_RT");
	audio::cancel_music_event("TRV4_CAR_ENTERED");
	audio::cancel_music_event("TRV4_AIRPORT_ENTERED");
	audio::cancel_music_event("TRV4_CHASE");
	audio::cancel_music_event("TRV4_JET_ENTERED");
	if (object::_does_door_exist(iLocal_3220)) {
		object::remove_door_from_system(iLocal_3220);
	}
	if (graphics::does_particle_fx_looped_exist(iLocal_3763)) {
		graphics::remove_particle_fx(iLocal_3763, 0);
	}
	ui::_0x67EEDEA1B9BAFD94();
	graphics::set_scaleform_movie_as_no_longer_needed(&iLocal_3293);
	graphics::set_streamed_texture_dict_as_no_longer_needed("digitalOverlay");
	pathfind::set_roads_in_area(-617f, -2274f, 0f, -406.01f, -2044f, 15f, 1, 1);
	pathfind::set_roads_in_area(-482f, -2118f, 6f, -1072f, -2724f, 17f, 1, 1);
	if (ai::get_is_waypoint_recording_loaded("Trev4_5")) {
		ai::use_waypoint_recording_as_assisted_movement_route("Trev4_5", 0, 0.5f, 1f);
	}
	player::set_player_control(player::player_id(), 1, 0);
	gameplay::set_time_scale(1f);
	ui::display_radar(1);
	ui::display_hud(1);
	streaming::remove_anim_dict("missheist_agency3aig_lift_waitped_a");
	func_265(0);
	cam::set_cinematic_button_active(1);
	if (func_19(2)) {
		func_18(2, 0);
	}
	script::terminate_this_thread();
}

// Position - 0x234A9
void func_384() {
	int iVar0;

	Global_55851 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64) {
		Global_55852[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

// Position - 0x234D3
void func_385() {
	int iVar0;

	if (script::has_script_loaded("buddyDeathResponse")) {
		system::start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_101700.f_8044 || func_396(0)) {
		if (!func_386()) {
			iVar0 = func_8();
			if (iVar0 != -1) {
				if (!func_215(iVar0)) {
					return;
				}
				gameplay::set_bit(&Global_82576[iVar0 /*5*/].f_1, 5);
				return;
			}
		}
		else {
			func_220();
		}
	}
}

// Position - 0x23544
int func_386() {
	if (Global_91491 == 13 || Global_91491 == 10 || Global_91491 == 11 || Global_91491 == 12) {
		return 0;
	}
	return 1;
}

// Position - 0x23582
void func_387(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	if (entity::does_entity_exist(iParam0)) {
		if (weapon::get_current_ped_weapon(iParam0, &iVar0, 0)) {
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed")) {
				if (!func_388(iParam1, iVar0)) {
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_91528 > 0) {
		Global_96040.f_21[iParam1] = iVar0;
	}
	else {
		Global_93635.f_21[iParam1] = iVar0;
	}
}

// Position - 0x235E8
int func_388(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	if (Global_91528 > 0) {
		iVar0 = 0;
		while (iVar0 < 44) {
			if (Global_96040.f_812[iParam0 /*284*/][iVar0 /*3*/] == iParam1) {
				if (Global_96040.f_812[iParam0 /*284*/][iVar0 /*3*/].f_1 > 0) {
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50) {
			if (Global_96040.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/] == iParam1) {
				if (Global_96040.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/].f_1 > 0) {
					return 1;
				}
			}
			iVar0++;
		}
	}
	else {
		iVar0 = 0;
		while (iVar0 < 44) {
			if (Global_93635.f_812[iParam0 /*284*/][iVar0 /*3*/] == iParam1) {
				if (Global_93635.f_812[iParam0 /*284*/][iVar0 /*3*/].f_1 > 0) {
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50) {
			if (Global_93635.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/] == iParam1) {
				if (Global_93635.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/].f_1 > 0) {
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

// Position - 0x2371B
void func_389(int iParam0, int iParam1) {
	char *sVar0;
	int iVar1;

	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_393(iParam0, &iVar1);
	if (!gameplay::are_strings_equal("NONE", sVar0) && iVar1 != 0) {
		if (iParam1) {
			if (interior::is_interior_disabled(iVar1)) {
				return;
			}
			if (interior::get_interior_from_entity(player::player_ped_id()) == iVar1) {
				func_392(iParam0, 1);
				return;
			}
		}
		else {
			if (!interior::is_interior_disabled(iVar1)) {
				return;
			}
			if (func_390(iParam0)) {
				func_392(iParam0, 0);
			}
		}
		interior::disable_interior(iVar1, iParam1);
		if (iParam1) {
		}
	}
}

// Position - 0x237A6
bool func_390(int iParam0) {
	struct<2> Var0;

	Var0 = {func_391(iParam0)};
	if (gameplay::is_bit_set(Global_31561[Var0.f_1], Var0)) {
		return true;
	}
	return false;
}

// Position - 0x237CF
struct<2> func_391(var uParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;

	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 5) {
		iVar2 += 32;
		if (iVar0 < iVar2) {
			Var3.f_1 = iVar1;
			Var3 = iVar0 - Var3.f_1 * 32;
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

//Position - 0x23821
void func_392(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = {func_391(iParam0)};
	if (iParam1) {
		gameplay::set_bit(&Global_31561[Var0.f_1], Var0);
	}
	else {
		gameplay::clear_bit(&Global_31561[Var0.f_1], Var0);
	}
}

// Position - 0x23859
var func_393(int iParam0, int iParam1) {
	struct<5> Var0;

	Var0 = {func_394(iParam0)};
	*iParam1 = interior::get_interior_at_coords_with_type(Var0, Var0.f_3);
	return Var0.f_4;
}

// Position - 0x2387E
struct<5> func_394(int iParam0) {
	struct<5> Var0;
	vector3 vVar5;

	switch (iParam0) {
	case 0:
		Var0 = {-447.4833f, 280.3197f, 77.5215f};
		Var0.f_3 = "v_comedy";
		Var0.f_4 = Var0.f_3;
		break;

	case 1:
		Var0 = {-1906.786f, -573.7576f, 19.0773f};
		Var0.f_3 = "v_psycheoffice";
		Var0.f_4 = Var0.f_3;
		break;

	case 2:
		Var0 = {1399.973f, 1148.756f, 113.3336f};
		Var0.f_3 = "v_ranch";
		Var0.f_4 = Var0.f_3;
		break;

	case 3:
		Var0 = {-598.6379f, -1608.399f, 26.0108f};
		Var0.f_3 = "v_recycle";
		Var0.f_4 = Var0.f_3;
		break;

	case 4:
		Var0 = {-556.5089f, 286.3181f, 81.1763f};
		Var0.f_3 = "v_rockclub";
		Var0.f_4 = Var0.f_3;
		break;

	case 5:
		Var0 = {-111.7116f, -11.912f, 69.5196f};
		Var0.f_3 = "v_janitor";
		Var0.f_4 = Var0.f_3;
		break;

	case 6:
		Var0 = {1274.934f, -1714.726f, 53.7715f};
		Var0.f_3 = "v_lesters";
		Var0.f_4 = Var0.f_3;
		break;

	case 7:
		Var0 = {147.433f, -2201.37f, 3.688f};
		Var0.f_3 = "v_torture";
		Var0.f_4 = Var0.f_3;
		break;

	case 8:
		Var0 = {320.9934f, 265.2515f, 82.1221f};
		Var0.f_3 = "v_cinema";
		Var0.f_4 = "v_cinema (Vinewood)";
		break;

	case 9:
		Var0 = {-1425.564f, -244.3f, 15.8053f};
		Var0.f_3 = "v_cinema";
		Var0.f_4 = "v_cinema (Morningwood)";
		break;

	case 10:
		Var0 = {377.153f, -717.567f, 10.0536f};
		Var0.f_3 = "v_cinema";
		Var0.f_4 = "v_cinema (Downtown)";
		break;

	case 11:
		Var0 = {245.1564f, 370.211f, 104.7382f};
		Var0.f_3 = "v_epsilonism";
		Var0.f_4 = Var0.f_3;
		break;

	case 12:
		Var0 = {173.1176f, -1003.279f, -99.9999f};
		Var0.f_3 = "v_garages";
		Var0.f_4 = Var0.f_3;
		break;

	case 13:
		Var0 = {199.9715f, -999.6678f, -100f};
		Var0.f_3 = "v_garagem";
		Var0.f_4 = Var0.f_3;
		break;

	case 14:
		Var0 = {228.6058f, -992.0537f, -99.9999f};
		Var0.f_3 = "v_garagel";
		Var0.f_3 = "hei_dlc_garage_high_new";
		Var0.f_4 = Var0.f_3;
		break;

	case 15:
		Var0 = {1854.254f, 3686.739f, 33.2671f};
		Var0.f_3 = "v_sheriff";
		Var0.f_4 = Var0.f_3;
		break;

	case 16:
		Var0 = {-444.8907f, 6013.587f, 30.7164f};
		Var0.f_3 = "v_sheriff2";
		Var0.f_4 = Var0.f_3;
		break;

	case 17:
		Var0 = {3522.845f, 3707.965f, 19.9918f};
		Var0.f_3 = "v_lab";
		Var0.f_4 = Var0.f_3;
		break;

	case 18:
		Var0 = {717.2994f, -974.4271f, 23.9142f};
		Var0.f_3 = "v_sweat";
		Var0.f_4 = Var0.f_3;
		break;

	case 19:
		Var0 = {717.299f, -974.4271f, 23.9142f};
		Var0.f_3 = "v_sweatempty";
		Var0.f_4 = Var0.f_3;
		break;

	case 20:
		Var0 = {2449.785f, 4983.825f, 45.8106f};
		Var0.f_3 = "v_farmhouse";
		Var0.f_4 = Var0.f_3;
		break;

	case 22:
		Var0 = {1087.195f, -1988.445f, 28.649f};
		Var0.f_3 = "v_foundry";
		Var0.f_4 = Var0.f_3;
		break;

	case 23:
		Var0 = {982.233f, -2160.382f, 28.4761f};
		Var0.f_3 = "v_abattoir";
		Var0.f_4 = Var0.f_3;
		break;

	case 21:
		Var0 = {479.0568f, -1316.825f, 28.2038f};
		Var0.f_3 = "v_chopshop";
		Var0.f_4 = Var0.f_3;
		break;

	case 24:
		Var0 = {-1005.663f, -478.3461f, 49.0265f};
		Var0.f_3 = "v_58_sol_office";
		Var0.f_4 = Var0.f_3;
		break;

	case 25:
		vVar5 = {func_395(1, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (1)";
		break;

	case 26:
		vVar5 = {func_395(2, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (2)";
		break;

	case 27:
		vVar5 = {func_395(3, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (3)";
		break;

	case 28:
		vVar5 = {func_395(4, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (4)";
		break;

	case 29:
		vVar5 = {func_395(5, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (5)";
		break;

	case 30:
		vVar5 = {func_395(6, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (6)";
		break;

	case 31:
		vVar5 = {func_395(7, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (7)";
		break;

	case 32:
		Var0 = {Global_1049427[34 /*1942*/].f_146.f_1517 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (8)";
		break;

	case 33:
		vVar5 = {func_395(35, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (9)";
		break;

	case 34:
		vVar5 = {func_395(36, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (10)";
		break;

	case 35:
		vVar5 = {func_395(37, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (11)";
		break;

	case 36:
		vVar5 = {func_395(38, 0)};
		Var0 = {-20.1f, -580.8f, 91.3f};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (12)";
		break;

	case 37:
		vVar5 = {func_395(39, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (13)";
		break;

	case 38:
		vVar5 = {func_395(40, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (14)";
		break;

	case 39:
		vVar5 = {func_395(41, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (15)";
		break;

	case 40:
		vVar5 = {func_395(42, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (16)";
		break;

	case 41:
		vVar5 = {func_395(43, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (17)";
		break;

	case 42:
		Var0 = {-470.3754f, -698.5207f, 51.5276f};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (18)";
		break;

	case 43:
		Var0 = {-460.6133f, -691.5562f, 69.9067f};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (19)";
		break;

	case 44:
		Var0 = {300.633f, -997.4288f, -99.9727f};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (20)";
		break;

	case 49:
		Var0 = {-171.3969f, 494.2671f, 134.4935f};
		Var0.f_3 = "apa_v_mp_stilts_b";
		Var0.f_4 = "apa_v_mp_stilts_b (1)";
		break;

	case 50:
		Var0 = {339.4982f, 434.0887f, 146.2206f};
		Var0.f_3 = "apa_v_mp_stilts_b";
		Var0.f_4 = "apa_v_mp_stilts_b (2)";
		break;

	case 51:
		Var0 = {-761.3884f, 615.7333f, 140.9805f};
		Var0.f_3 = "apa_v_mp_stilts_b";
		Var0.f_4 = "apa_v_mp_stilts_b (3)";
		break;

	case 52:
		Var0 = {-678.1752f, 591.0076f, 142.2196f};
		Var0.f_3 = "apa_v_mp_stilts_b";
		Var0.f_4 = "apa_v_mp_stilts_b (4)";
		break;

	case 53:
		Var0 = {120.0541f, 553.793f, 181.0943f};
		Var0.f_3 = "apa_v_mp_stilts_a";
		Var0.f_4 = "apa_v_mp_stilts_a (5)";
		break;

	case 54:
		Var0 = {-571.4039f, 655.2008f, 142.6293f};
		Var0.f_3 = "apa_v_mp_stilts_a";
		Var0.f_4 = "apa_v_mp_stilts_a (7)";
		break;

	case 55:
		Var0 = {-742.2565f, 587.6547f, 143.0577f};
		Var0.f_3 = "apa_v_mp_stilts_a";
		Var0.f_4 = "apa_v_mp_stilts_a (8)";
		break;

	case 56:
		Var0 = {-857.2222f, 685.051f, 149.6502f};
		Var0.f_3 = "apa_v_mp_stilts_a";
		Var0.f_4 = "apa_v_mp_stilts_a (10)";
		break;

	case 57:
		Var0 = {-1287.65f, 443.2707f, 94.6919f};
		Var0.f_3 = "apa_v_mp_stilts_a";
		Var0.f_4 = "apa_v_mp_stilts_a (12)";
		break;

	case 58:
		Var0 = {374.2012f, 416.9688f, 142.5991f};
		Var0.f_3 = "apa_v_mp_stilts_a";
		Var0.f_4 = "apa_v_mp_stilts_a (13)";
		break;

	case 45:
		Var0 = {-16.29585f, -684.0385f, 33.50832f};
		Var0.f_3 = "dt1_03_carpark";
		Var0.f_4 = "dt1_03_carpark";
		break;

	case 46:
		Var0 = {341.1f, -1000f, -99.2f};
		Var0.f_3 = "v_apart_midspaz";
		Var0.f_4 = "v_apart_midspaz";
		break;

	case 47:
		Var0 = {199.9716f, -1018.954f, -100f};
		Var0.f_3 = "v_garagem_sp";
		Var0.f_4 = Var0.f_3;
		break;

	case 48:
		Var0 = {-1388.001f, -618.4197f, 30.8196f};
		Var0.f_3 = "v_bahama";
		Var0.f_4 = Var0.f_3;
		break;
	}
	switch (iParam0) {
	case 59:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = "apa_v_mp_h_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 60:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = "apa_v_mp_h_02";
		Var0.f_4 = Var0.f_3;
		break;

	case 61:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = "apa_v_mp_h_03";
		Var0.f_4 = Var0.f_3;
		break;

	case 62:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = "apa_v_mp_h_04";
		Var0.f_4 = Var0.f_3;
		break;

	case 63:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = "apa_v_mp_h_05";
		Var0.f_4 = Var0.f_3;
		break;

	case 64:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = "apa_v_mp_h_06";
		Var0.f_4 = Var0.f_3;
		break;

	case 65:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = "apa_v_mp_h_07";
		Var0.f_4 = Var0.f_3;
		break;

	case 66:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = "apa_v_mp_h_08";
		Var0.f_4 = Var0.f_3;
		break;

	case 67:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = "apa_v_mp_h_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 68:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = "apa_v_mp_h_02";
		Var0.f_4 = Var0.f_3;
		break;

	case 69:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = "apa_v_mp_h_03";
		Var0.f_4 = Var0.f_3;
		break;

	case 70:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = "apa_v_mp_h_04";
		Var0.f_4 = Var0.f_3;
		break;

	case 71:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = "apa_v_mp_h_05";
		Var0.f_4 = Var0.f_3;
		break;

	case 72:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = "apa_v_mp_h_06";
		Var0.f_4 = Var0.f_3;
		break;

	case 73:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = "apa_v_mp_h_07";
		Var0.f_4 = Var0.f_3;
		break;

	case 74:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = "apa_v_mp_h_08";
		Var0.f_4 = Var0.f_3;
		break;

	case 75:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = "apa_v_mp_h_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 76:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = "apa_v_mp_h_02";
		Var0.f_4 = Var0.f_3;
		break;

	case 77:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = "apa_v_mp_h_03";
		Var0.f_4 = Var0.f_3;
		break;

	case 78:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = "apa_v_mp_h_04";
		Var0.f_4 = Var0.f_3;
		break;

	case 79:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = "apa_v_mp_h_05";
		Var0.f_4 = Var0.f_3;
		break;

	case 80:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = "apa_v_mp_h_06";
		Var0.f_4 = Var0.f_3;
		break;

	case 81:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = "apa_v_mp_h_07";
		Var0.f_4 = Var0.f_3;
		break;

	case 82:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = "apa_v_mp_h_08";
		Var0.f_4 = Var0.f_3;
		break;

	case 83:
		vVar5 = {func_395(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 84:
		vVar5 = {func_395(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 85:
		vVar5 = {func_395(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 86:
		vVar5 = {func_395(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 87:
		vVar5 = {func_395(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 88:
		vVar5 = {func_395(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 89:
		vVar5 = {func_395(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 90:
		vVar5 = {func_395(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 91:
		vVar5 = {func_395(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 92:
		vVar5 = {func_395(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 93:
		vVar5 = {func_395(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 94:
		vVar5 = {func_395(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 95:
		vVar5 = {func_395(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 96:
		vVar5 = {func_395(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 97:
		vVar5 = {func_395(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 98:
		vVar5 = {func_395(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 99:
		vVar5 = {func_395(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 100:
		vVar5 = {func_395(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 101:
		vVar5 = {func_395(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 102:
		vVar5 = {func_395(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 103:
		vVar5 = {func_395(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 104:
		vVar5 = {func_395(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 105:
		vVar5 = {func_395(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 106:
		vVar5 = {func_395(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 107:
		vVar5 = {func_395(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 108:
		vVar5 = {func_395(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 109:
		vVar5 = {func_395(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 110:
		vVar5 = {func_395(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 111:
		vVar5 = {func_395(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 112:
		vVar5 = {func_395(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 113:
		vVar5 = {func_395(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 114:
		vVar5 = {func_395(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 115:
		vVar5 = {func_395(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 116:
		vVar5 = {func_395(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 117:
		vVar5 = {func_395(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 118:
		vVar5 = {func_395(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 119:
		vVar5 = {func_395(91, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "bkr_biker_dlc_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 120:
		vVar5 = {func_395(97, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "bkr_biker_dlc_int_02";
		Var0.f_4 = Var0.f_3;
		break;

	case 121:
		vVar5 = {func_395(103, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 122:
		vVar5 = {func_395(104, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 123:
		vVar5 = {func_395(105, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 124:
		vVar5 = {func_395(106, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 125:
		vVar5 = {func_395(107, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 126:
		vVar5 = {func_395(108, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 127:
		vVar5 = {func_395(109, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 128:
		vVar5 = {func_395(110, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 129:
		vVar5 = {func_395(111, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 130:
		vVar5 = {func_395(112, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 131:
		vVar5 = {func_395(113, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 132:
		vVar5 = {func_395(114, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 133:
		vVar5 = {func_395(103, 1)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_imptexp_mod_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 134:
		vVar5 = {func_395(106, 1)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_imptexp_mod_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 135:
		vVar5 = {func_395(109, 1)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_imptexp_mod_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 136:
		vVar5 = {func_395(112, 1)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_imptexp_mod_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	default: break;
	}
	return Var0;
}

// Position - 0x2514D
struct<6>
func_395(int iParam0, int iParam1) {
	struct<6> Var0;

	switch (iParam0) {
	case -1:
		Var0 = {-794.9184f, 339.6266f, 200.4135f};
		Var0.f_3 = {0f, 0f, 180f};
		break;

	case 1:
		Var0 = {-794.9184f, 339.6266f, 200.4135f};
		Var0.f_3 = {0f, 0f, 180f};
		break;

	case 2:
		Var0 = {-761.0982f, 317.6259f, 169.5963f};
		Var0.f_3 = {0f, 0f, 0f};
		break;

	case 3:
		Var0 = {-761.1888f, 317.6295f, 216.0503f};
		Var0.f_3 = {0f, 0f, 0f};
		break;

	case 4:
		Var0 = {-795.3856f, 340.0188f, 152.7941f};
		Var0.f_3 = {0f, 0f, 180f};
		break;

	case 61:
		Var0 = {-778.5056f, 332.3779f, 212.1968f};
		Var0.f_3 = {0f, 0f, 90f};
		break;

	case 5:
		Var0 = {-258.1807f, -950.6853f, 70.0239f};
		Var0.f_3 = {0f, 0f, 70f};
		break;

	case 6:
		Var0 = {-285.0051f, -957.6552f, 85.3035f};
		Var0.f_3 = {0f, 0f, -110f};
		break;

	case 7:
		Var0 = {-1471.882f, -530.7484f, 62.34918f};
		Var0.f_3 = {0f, 0f, -145f};
		break;

	case 34:
		Var0 = {-1471.882f, -530.7484f, 49.72156f};
		Var0.f_3 = {0f, 0f, -145f};
		break;

	case 62:
		Var0 = {-1463.15f, -540.2369f, 74.2439f};
		Var0.f_3 = {0f, 0f, -145f};
		break;

	case 35:
		Var0 = {-885.3702f, -451.4775f, 119.327f};
		Var0.f_3 = {0f, 0f, 27.55617f};
		break;

	case 36:
		Var0 = {-913.0385f, -438.4284f, 114.3997f};
		Var0.f_3 = {0f, 0f, -153.3093f};
		break;

	case 37:
		Var0 = {-892.5499f, -430.4789f, 88.25368f};
		Var0.f_3 = {0f, 0f, 116.9193f};
		break;

	case 38:
		Var0 = {-35.0462f, -576.317f, 82.90739f};
		Var0.f_3 = {0f, 0f, 160f};
		break;

	case 39:
		Var0 = {-10.3788f, -590.7431f, 93.02542f};
		Var0.f_3 = {0f, 0f, 70f};
		break;

	case 65:
		Var0 = {-22.2487f, -589.1461f, 80.2305f};
		Var0.f_3 = {0f, 0f, 69.88f};
		break;

	case 40:
		Var0 = {-900.6311f, -376.7462f, 78.27306f};
		Var0.f_3 = {0f, 0f, 26.92611f};
		break;

	case 41:
		Var0 = {-929.483f, -374.5104f, 102.2329f};
		Var0.f_3 = {0f, 0f, -152.5531f};
		break;

	case 63:
		Var0 = {-914.4202f, -375.8189f, 114.4743f};
		Var0.f_3 = {0f, 0f, -63f};
		break;

	case 42:
		Var0 = {-617.1647f, 64.6042f, 100.8196f};
		Var0.f_3 = {0f, 0f, 180f};
		break;

	case 43:
		Var0 = {-584.2015f, 42.7133f, 86.4187f};
		Var0.f_3 = {0f, 0f, 0f};
		break;

	case 64:
		Var0 = {-609.5665f, 50.2203f, 98.3998f};
		Var0.f_3 = {0f, 0f, -90f};
		break;

	case 73:
		Var0 = {-171.3969f, 494.2671f, 134.4935f};
		Var0.f_3 = {0f, 0f, 11f};
		break;

	case 74:
		Var0 = {339.4982f, 434.0887f, 146.2206f};
		Var0.f_3 = {0f, 0f, -63.5f};
		break;

	case 75:
		Var0 = {-761.3884f, 615.7333f, 140.9805f};
		Var0.f_3 = {0f, 0f, -71.5f};
		break;

	case 76:
		Var0 = {-678.1752f, 591.0076f, 142.2196f};
		Var0.f_3 = {0f, 0f, 40.5f};
		break;

	case 77:
		Var0 = {120.0541f, 553.793f, 181.0943f};
		Var0.f_3 = {0f, 0f, 6f};
		break;

	case 78:
		Var0 = {-571.4039f, 655.2008f, 142.6293f};
		Var0.f_3 = {0f, 0f, -14.5f};
		break;

	case 79:
		Var0 = {-742.2565f, 587.6547f, 143.0577f};
		Var0.f_3 = {0f, 0f, -29f};
		break;

	case 80:
		Var0 = {-857.2222f, 685.051f, 149.6502f};
		Var0.f_3 = {0f, 0f, 4.5f};
		break;

	case 81:
		Var0 = {-1287.65f, 443.2707f, 94.6919f};
		Var0.f_3 = {0f, 0f, 0f};
		break;

	case 82:
		Var0 = {374.2012f, 416.9688f, 142.6977f};
		Var0.f_3 = {0f, 0f, -14f};
		break;

	case 83:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = {0f, 0f, 90f};
		break;

	case 84:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = {0f, 0f, 90f};
		break;

	case 85:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = {0f, 0f, -90f};
		break;

	case 86:
		Var0 = {-1573.098f, -4085.806f, 9.7851f};
		Var0.f_3 = {0f, 0f, 162f};
		break;

	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 66:
	case 67:
	case 68:
	case 69:
		Var0 = {342.8157f, -997.4288f, -100f};
		Var0.f_3 = {0f, 0f, 0f};
		break;

	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 70:
	case 71:
	case 72:
		Var0 = {260.3297f, -997.4288f, -100f};
		Var0.f_3 = {0f, 0f, 0f};
		break;

	case 87:
		Var0 = {-1572.187f, -570.8315f, 109.9879f};
		Var0.f_3 = {0f, 0f, -54f};
		break;

	case 88:
		Var0 = {-1383.954f, -476.7112f, 73.507f};
		Var0.f_3 = {0f, 0f, 8f};
		break;

	case 89:
		Var0 = {-138.0029f, -629.739f, 170.2854f};
		Var0.f_3 = {0f, 0f, -84f};
		break;

	case 90:
		Var0 = {-74.8895f, -817.6883f, 244.8508f};
		Var0.f_3 = {0f, 0f, 70f};
		break;

	case 91:
	case 92:
	case 93:
	case 94:
	case 95:
	case 96:
		Var0 = {1100.764f, -3159.384f, -34.9342f};
		Var0.f_3 = {0f, 0f, 0f};
		break;

	case 97:
	case 98:
	case 99:
	case 100:
	case 101:
	case 102:
		Var0 = {1005.806f, -3157.67f, -36.0897f};
		Var0.f_3 = {0f, 0f, 0f};
		break;

	case 103:
		if (!iParam1) {
			Var0 = {-1576.571f, -569.7595f, 85.5f};
			Var0.f_3 = {0f, 0f, 36.1f};
		}
		else {
			Var0 = {-1578.022f, -576.4251f, 104.2f};
			Var0.f_3 = {0f, 0f, -144.04f};
		}
		break;

	case 104:
		if (!iParam1) {
			Var0 = {-1571.254f, -566.5865f, 85.5f};
			Var0.f_3 = {0f, 0f, -53.9f};
		}
		else {
			Var0 = {-1578.022f, -576.4251f, 104.2f};
			Var0.f_3 = {0f, 0f, -144.04f};
		}
		break;

	case 105:
		if (!iParam1) {
			Var0 = {-1568.098f, -571.9171f, 85.5f};
			Var0.f_3 = {0f, 0f, -143.9f};
		}
		else {
			Var0 = {-1578.022f, -576.4251f, 104.2f};
			Var0.f_3 = {0f, 0f, -144.04f};
		}
		break;

	case 106:
		if (!iParam1) {
			Var0 = {-1384.518f, -475.8657f, 56.1f};
			Var0.f_3 = {0f, 0f, 98.7f};
		}
		else {
			Var0 = {-1391.245f, -473.9638f, 77.2f};
			Var0.f_3 = {0f, 0f, 98.86f};
		}
		break;

	case 107:
		if (!iParam1) {
			Var0 = {-1384.538f, -475.8829f, 48.1f};
			Var0.f_3 = {0f, 0f, 98.7f};
		}
		else {
			Var0 = {-1391.245f, -473.9638f, 77.2f};
			Var0.f_3 = {0f, 0f, 98.86f};
		}
		break;

	case 108:
		if (!iParam1) {
			Var0 = {-1378.994f, -477.2481f, 56.1f};
			Var0.f_3 = {0f, 0f, -81.1f};
		}
		else {
			Var0 = {-1391.245f, -473.9638f, 77.2f};
			Var0.f_3 = {0f, 0f, 98.86f};
		}
		break;

	case 109:
		if (!iParam1) {
			Var0 = {-186.5683f, -576.4624f, 135f};
			Var0.f_3 = {0f, 0f, 96.16f};
		}
		else {
			Var0 = {-146.6167f, -596.6301f, 166f};
			Var0.f_3 = {0f, 0f, -140f};
		}
		break;

	case 110:
		if (!iParam1) {
			Var0 = {-113.886f, -564.3862f, 135f};
			Var0.f_3 = {0f, 0f, 110.96f};
		}
		else {
			Var0 = {-146.6167f, -596.6301f, 166f};
			Var0.f_3 = {0f, 0f, -140f};
		}
		break;

	case 111:
		if (!iParam1) {
			Var0 = {-134.6568f, -635.1774f, 135f};
			Var0.f_3 = {0f, 0f, -9.04f};
		}
		else {
			Var0 = {-146.6167f, -596.6301f, 166f};
			Var0.f_3 = {0f, 0f, -140f};
		}
		break;

	case 112:
		if (!iParam1) {
			Var0 = {-79.0479f, -822.6393f, 221f};
			Var0.f_3 = {0f, 0f, 70f};
		}
		else {
			Var0 = {-73.904f, -821.6204f, 284f};
			Var0.f_3 = {0f, 0f, -110f};
		}
		break;

	case 113:
		if (!iParam1) {
			Var0 = {-70.3086f, -819.5784f, 221f};
			Var0.f_3 = {0f, 0f, 160f};
		}
		else {
			Var0 = {-73.904f, -821.6204f, 284f};
			Var0.f_3 = {0f, 0f, -110f};
		}
		break;

	case 114:
		if (!iParam1) {
			Var0 = {-79.9861f, -818.425f, 221f};
			Var0.f_3 = {0f, 0f, -20f};
		}
		else {
			Var0 = {-73.904f, -821.6204f, 284f};
			Var0.f_3 = {0f, 0f, -110f};
		}
		break;
	}
	return Var0;
}

//Position - 0x25D03
bool func_396(int iParam0)
{
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}
