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
int iLocal_28 = 0;
int iLocal_29 = 0;
bool bLocal_30 = 0;
bool bLocal_31 = 0;
bool bLocal_32 = 0;
bool bLocal_33 = 0;
bool bLocal_34 = 0;
int iLocal_35 = 0;
int iLocal_36 = 0;
bool bLocal_37 = 0;
bool bLocal_38 = 0;
int iLocal_39 = 0;
bool bLocal_40 = 0;
int iLocal_41 = 0;
int iLocal_42 = 0;
int iLocal_43 = 0;
int iLocal_44 = 0;
int iLocal_45 = 0;
bool bLocal_46 = 0;
bool bLocal_47 = 0;
bool bLocal_48 = 0;
int iLocal_49 = 0;
int iLocal_50 = 0;
var uLocal_51 = 0;
bool bLocal_52 = 0;
bool bLocal_53 = 0;
bool bLocal_54 = 0;
bool bLocal_55 = 0;
int iLocal_56 = 0;
int iLocal_57 = 0;
bool bLocal_58 = 0;
int iLocal_59 = 0;
bool bLocal_60 = 0;
bool bLocal_61 = 0;
float fLocal_62[40] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
					   0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_103[40] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_144[40] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_185[40] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_226[40] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f,
						0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_267 = 0f;
float fLocal_268 = 0f;
float fLocal_269 = 0f;
float fLocal_270 = 0f;
float fLocal_271[22] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_294[22] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_317[22] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_340[22] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_363[22] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_386[22] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_409[4] = {0f, 0f, 0f, 0f};
float fLocal_414[4] = {0f, 0f, 0f, 0f};
float fLocal_419[4] = {0f, 0f, 0f, 0f};
float fLocal_424[4] = {0f, 0f, 0f, 0f};
float fLocal_429 = 0f;
float fLocal_430 = 0f;
float fLocal_431 = 0f;
float fLocal_432 = 0f;
float fLocal_433 = 0f;
float fLocal_434 = 0f;
float fLocal_435 = 0f;
float fLocal_436 = 0f;
float fLocal_437 = 0f;
float fLocal_438 = 0f;
float fLocal_439 = 0f;
float fLocal_440 = 0f;
float fLocal_441 = 0f;
float fLocal_442 = 0f;
float fLocal_443 = 0f;
float fLocal_444 = 0f;
float fLocal_445 = 0f;
float fLocal_446 = 0f;
float fLocal_447 = 0f;
float fLocal_448 = 0f;
float fLocal_449 = 0f;
int iLocal_450[40] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_491[40] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_532[40] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_573[22] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_596[22] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_619[22] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_642[4] = {0, 0, 0, 0};
int iLocal_647 = 0;
int iLocal_648 = 0;
int iLocal_649 = 0;
int iLocal_650 = 0;
int iLocal_651 = 0;
int iLocal_652 = 0;
int iLocal_653 = 0;
int iLocal_654 = 0;
int iLocal_655 = 0;
int iLocal_656 = 0;
int iLocal_657 = 0;
int iLocal_658 = 0;
int iLocal_659 = 0;
int iLocal_660 = 0;
int iLocal_661 = 0;
int iLocal_662 = 0;
int iLocal_663 = 0;
vector3 vLocal_664[40] = {
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
vector3 vLocal_785[4] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
vector3 vLocal_798[22] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
						  {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
						  {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
						  {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
vector3 vLocal_865 = {0f, 0f, 0f};
vector3 vLocal_868 = {0f, 0f, 0f};
vector3 vLocal_871 = {0f, 0f, 0f};
var uLocal_874 = 0;
var uLocal_875 = 0;
var uLocal_876 = 0;
var uLocal_877 = 0;
var uLocal_878 = 0;
var uLocal_879 = 0;
vector3 vLocal_880 = {0f, 0f, 0f};
vector3 vLocal_883 = {0f, 0f, 0f};
vector3 vLocal_886 = {0f, 0f, 0f};
vector3 vLocal_889 = {0f, 0f, 0f};
char cLocal_892[64] = "";
var uLocal_900 = 0;
var uLocal_901 = 0;
var uLocal_902 = 0;
var uLocal_903 = 0;
var uLocal_904 = 0;
var uLocal_905 = 0;
var uLocal_906 = 0;
var uLocal_907 = 0;
int iLocal_908 = 0;
int iLocal_909[40] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_950[4] = {0, 0, 0, 0};
int iLocal_955[22] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_978 = 0;
int iLocal_979 = 0;
int iLocal_980 = 0;
int iLocal_981[40] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_1022[14] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_1037[4] = {0, 0, 0, 0};
int iLocal_1042[22] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_1065[4] = {0, 0, 0, 0};
int iLocal_1070 = 0;
int iLocal_1071 = 0;
int iLocal_1072 = 0;
var uLocal_1073 = 14;
var uLocal_1074 = 0;
var uLocal_1075 = 0;
var uLocal_1076 = 0;
var uLocal_1077 = 0;
var uLocal_1078 = 0;
var uLocal_1079 = 0;
var uLocal_1080 = 0;
var uLocal_1081 = 0;
var uLocal_1082 = 0;
var uLocal_1083 = 0;
var uLocal_1084 = 0;
var uLocal_1085 = 0;
var uLocal_1086 = 0;
var uLocal_1087 = 0;
int iLocal_1088 = 0;
var uLocal_1089 = 0;
var uLocal_1090 = 0;
float fLocal_1091 = 0f;
float fLocal_1092 = 0f;
float fLocal_1093 = 0f;
var uLocal_1094 = 0;
var uLocal_1095 = 0;
var uLocal_1096 = 0;
var uLocal_1097 = 0;
var uLocal_1098 = 0;
int iLocal_1099 = 0;
int iLocal_1100 = 0;
int iLocal_1101 = 0;
int iLocal_1102 = 0;
var uLocal_1103 = 0;
var uLocal_1104 = 0;
var uLocal_1105 = 0;
var uLocal_1106 = 0;
var uLocal_1107 = 0;
var uLocal_1108 = 0;
var uLocal_1109 = 0;
var uLocal_1110 = 0;
var uLocal_1111 = 0;
var uLocal_1112 = 0;
var uLocal_1113 = 0;
var uLocal_1114 = 0;
var uLocal_1115 = 0;
var uLocal_1116 = 0;
vector3 vLocal_1117 = {0f, 0f, 0f};
vector3 vLocal_1120 = {0f, 0f, 0f};
int iLocal_1123 = 0;
var uLocal_1124 = 0;
float fLocal_1125 = 0f;
int iLocal_1126 = 0;
int iLocal_1127[36] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_1164[3] = {0, 0, 0};
int iLocal_1168[3] = {0, 0, 0};
int iLocal_1172[4] = {0, 0, 0, 0};
struct<7> Local_1177 = {
	0, 0, 0, 0, 0, 0, 0
};
var uLocal_1184 = 0;
var uLocal_1185 = 0;
var uLocal_1186 = 0;
var uLocal_1187 = 0;
var uLocal_1188 = 0;
var uLocal_1189 = 0;
var uLocal_1190 = 0;
var uLocal_1191 = 0;
struct<10> Local_1192 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_1202 = 0;
var uLocal_1203 = 0;
var uLocal_1204 = 0;
var uLocal_1205 = 0;
var uLocal_1206 = 0;
struct<7> Local_1207 = {
	0, 0, 0, 0, 0, 0, 0
};
var uLocal_1214 = 0;
var uLocal_1215 = 0;
var uLocal_1216 = 0;
var uLocal_1217 = 0;
var uLocal_1218 = 0;
var uLocal_1219 = 0;
var uLocal_1220 = 0;
var uLocal_1221 = 0;
struct<15> Local_1222[14];
struct<15> Local_1433[2];
struct<14> Local_1464 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_1478 = 0;
struct<8> Local_1479 = {
	0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_1487 = 0;
var uLocal_1488 = 0;
var uLocal_1489 = 0;
var uLocal_1490 = 0;
var uLocal_1491 = 0;
var uLocal_1492 = 0;
var uLocal_1493 = 0;
struct<15> Local_1494[8];
struct<14> Local_1615 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_1629 = 0;
struct<7> Local_1630 = {
	0, 0, 0, 0, 0, 0, 0
};
var uLocal_1637 = 0;
var uLocal_1638 = 0;
var uLocal_1639 = 0;
var uLocal_1640 = 0;
var uLocal_1641 = 0;
var uLocal_1642 = 0;
var uLocal_1643 = 0;
var uLocal_1644 = 0;
struct<15> Local_1645 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_1660 = 0;
var uLocal_1661 = 0;
var uLocal_1662 = 0;
var uLocal_1663 = 0;
var uLocal_1664 = 0;
struct<15> Local_1665 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_1680 = 0;
var uLocal_1681 = 0;
var uLocal_1682 = 0;
var uLocal_1683 = 0;
var uLocal_1684 = 0;
struct<17> Local_1685 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_1702 = 0;
var uLocal_1703 = 0;
var uLocal_1704 = 0;
struct<17> Local_1705 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_1722 = 0;
var uLocal_1723 = 0;
var uLocal_1724 = 0;
struct<20> Local_1725[36];
struct<20> Local_2446[4];
struct<20> Local_2527[2];
struct<15> Local_2568 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_2583 = 0;
var uLocal_2584 = 0;
var uLocal_2585 = 0;
var uLocal_2586 = 0;
var uLocal_2587 = 0;
struct<11> Local_2588 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_2599 = 0;
var uLocal_2600 = 0;
var uLocal_2601 = 0;
var uLocal_2602 = 0;
var uLocal_2603 = 0;
var uLocal_2604 = 0;
var uLocal_2605 = 0;
var uLocal_2606 = 0;
var uLocal_2607 = 0;
struct<11> Local_2608 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_2619 = 0;
var uLocal_2620 = 0;
var uLocal_2621 = 0;
var uLocal_2622 = 0;
var uLocal_2623 = 0;
var uLocal_2624 = 0;
var uLocal_2625 = 0;
var uLocal_2626 = 0;
var uLocal_2627 = 0;
struct<16> Local_2628 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_2644 = 0;
var uLocal_2645 = 0;
var uLocal_2646 = 0;
var uLocal_2647 = 0;
struct<20> Local_2648[3];
struct<20> Local_2709[3];
struct<20> Local_2770[2];
int iLocal_2811 = 0;
struct<5> Local_2812[24];
struct<21> Local_2933 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_2954 = 0;
var uLocal_2955 = 0;
var uLocal_2956 = 0;
vector3 vLocal_2957 = {0f, 0f, 0f};
var uLocal_2960 = 0;
var uLocal_2961 = 0;
var uLocal_2962 = 0;
var uLocal_2963 = 0;
var uLocal_2964 = 0;
var uLocal_2965 = 0;
var uLocal_2966 = 0;
var uLocal_2967 = 0;
var uLocal_2968 = 0;
var uLocal_2969 = 0;
var uLocal_2970 = 0;
var uLocal_2971 = 0;
var uLocal_2972 = 0;
var uLocal_2973 = 0;
var uLocal_2974 = 0;
var uLocal_2975 = 0;
var uLocal_2976 = 0;
var uLocal_2977 = 0;
var uLocal_2978 = 0;
var uLocal_2979 = 0;
var uLocal_2980 = 0;
struct<13> Local_2981 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_2994 = 0;
var uLocal_2995 = 0;
var uLocal_2996 = 0;
var uLocal_2997 = 0;
var uLocal_2998 = 0;
var uLocal_2999 = 0;
var uLocal_3000 = 0;
var uLocal_3001 = 0;
var uLocal_3002 = 0;
var uLocal_3003 = 0;
var uLocal_3004 = 0;
vector3 vLocal_3005 = {0f, 0f, 0f};
var uLocal_3008 = 0;
var uLocal_3009 = 0;
var uLocal_3010 = 0;
var uLocal_3011 = 0;
var uLocal_3012 = 0;
var uLocal_3013 = 0;
var uLocal_3014 = 0;
var uLocal_3015 = 0;
var uLocal_3016 = 0;
var uLocal_3017 = 0;
var uLocal_3018 = 0;
var uLocal_3019 = 0;
var uLocal_3020 = 0;
var uLocal_3021 = 0;
var uLocal_3022 = 0;
var uLocal_3023 = 0;
var uLocal_3024 = 0;
var uLocal_3025 = 0;
var uLocal_3026 = 0;
var uLocal_3027 = 0;
var uLocal_3028 = 0;
struct<13> Local_3029 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_3042 = 0;
var uLocal_3043 = 0;
var uLocal_3044 = 0;
var uLocal_3045 = 0;
var uLocal_3046 = 0;
var uLocal_3047 = 0;
var uLocal_3048 = 0;
var uLocal_3049 = 0;
var uLocal_3050 = 0;
var uLocal_3051 = 0;
var uLocal_3052 = 0;
struct<10> Local_3053[2];
struct<6> Local_3074 = {
	0, 3, 0, 0, 0, 0
};
var uLocal_3080 = 0;
var uLocal_3081 = 1092616192;
var uLocal_3082 = 1101004800;
var uLocal_3083 = 0;
var uLocal_3084 = 0;
var uLocal_3085 = 0;
var uLocal_3086 = 0;
var uLocal_3087 = 0;
var uLocal_3088 = 0;
var uLocal_3089 = 0;
var uLocal_3090 = 0;
var uLocal_3091 = 3;
var uLocal_3092 = 0;
var uLocal_3093 = 0;
var uLocal_3094 = 0;
var uLocal_3095 = 0;
var uLocal_3096 = 0;
var uLocal_3097 = 0;
var uLocal_3098 = 0;
var *uLocal_3099 = NULL;
var uLocal_3100 = 0;
var uLocal_3101 = 0;
var uLocal_3102 = 0;
var uLocal_3103 = 0;
var uLocal_3104 = 0;
var uLocal_3105 = 0;
var uLocal_3106 = 0;
var uLocal_3107 = 4;
var uLocal_3108 = 0;
var uLocal_3109 = 0;
var uLocal_3110 = 0;
var uLocal_3111 = 0;
var uLocal_3112 = 4;
var uLocal_3113 = 0;
var uLocal_3114 = 0;
var uLocal_3115 = 0;
var uLocal_3116 = 0;
var uLocal_3117 = 4;
var uLocal_3118 = 0;
var uLocal_3119 = 0;
var uLocal_3120 = 0;
var uLocal_3121 = 0;
var uLocal_3122 = 0;
var uLocal_3123 = 4;
var uLocal_3124 = 0;
var uLocal_3125 = 0;
var uLocal_3126 = 0;
var uLocal_3127 = 0;
var uLocal_3128 = 4;
var uLocal_3129 = 0;
var uLocal_3130 = 0;
var uLocal_3131 = 0;
var uLocal_3132 = 0;
var uLocal_3133 = 4;
var uLocal_3134 = 0;
var uLocal_3135 = 0;
var uLocal_3136 = 0;
var uLocal_3137 = 0;
var uLocal_3138 = 0;
var uLocal_3139 = 0;
var uLocal_3140 = 0;
var uLocal_3141 = 0;
var uLocal_3142 = 0;
struct<20> Local_3143 = {
	8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_3163 = 0;
var uLocal_3164 = 0;
var uLocal_3165 = 0;
var uLocal_3166 = 0;
var uLocal_3167 = 0;
var uLocal_3168 = 0;
var uLocal_3169 = 0;
var uLocal_3170 = 0;
var uLocal_3171 = 0;
var uLocal_3172 = 0;
var uLocal_3173 = 0;
var uLocal_3174 = 0;
var uLocal_3175 = 0;
var uLocal_3176 = 0;
int iLocal_3177 = 0;
int iLocal_3178 = 0;
bool bLocal_3179 = 0;
bool bLocal_3180 = 0;
int iLocal_3181 = 0;
int iLocal_3182 = 0;
int iLocal_3183 = 0;
int iLocal_3184 = 0;
int iLocal_3185 = 0;
int iLocal_3186 = 0;
int iLocal_3187 = 0;
int iLocal_3188 = 0;
bool bLocal_3189 = 0;
int iLocal_3190 = 0;
int iLocal_3191 = 0;
int iLocal_3192 = 0;
int iLocal_3193 = 0;
bool bLocal_3194 = 0;
bool bLocal_3195 = 0;
int iLocal_3196 = 0;
bool bLocal_3197 = 0;
int iLocal_3198 = 0;
int iLocal_3199 = 0;
int iLocal_3200 = 0;
int iLocal_3201 = 0;
int iLocal_3202 = 0;
bool bLocal_3203 = 0;
bool bLocal_3204 = 0;
bool bLocal_3205 = 0;
bool bLocal_3206 = 0;
int iLocal_3207 = 0;
int iLocal_3208 = 0;
int iLocal_3209 = 0;
int iLocal_3210 = 0;
int iLocal_3211 = 0;
int iLocal_3212 = 0;
int iLocal_3213 = 0;
bool bLocal_3214 = 0;
int iLocal_3215 = 0;
int iLocal_3216 = 0;
int iLocal_3217 = 0;
bool bLocal_3218 = 0;
int iLocal_3219 = 0;
int iLocal_3220 = 0;
int iLocal_3221 = 0;
int iLocal_3222 = 0;
int iLocal_3223 = 0;
int iLocal_3224 = 0;
int iLocal_3225 = 0;
int iLocal_3226 = 0;
int iLocal_3227 = 0;
int iLocal_3228 = 0;
int iLocal_3229 = 0;
int iLocal_3230 = 0;
int iLocal_3231 = 0;
int iLocal_3232 = 0;
int iLocal_3233 = 0;
int iLocal_3234 = 0;
int iLocal_3235 = 0;
int iLocal_3236 = 0;
int iLocal_3237 = 0;
int iLocal_3238 = 0;
int iLocal_3239 = 0;
int iLocal_3240 = 0;
int iLocal_3241 = 0;
int iLocal_3242 = 0;
var *uLocal_3243 = NULL;
var *uLocal_3244 = NULL;
int iLocal_3245 = 0;
var *uLocal_3246 = NULL;
int iLocal_3247 = 0;
int iLocal_3248 = 0;
int iLocal_3249 = 0;
int iLocal_3250 = 0;
int iLocal_3251 = 0;
int iLocal_3252 = 0;
int iLocal_3253 = 0;
int iLocal_3254 = 0;
int iLocal_3255 = 0;
int iLocal_3256 = 0;
int iLocal_3257 = 0;
int iLocal_3258 = 0;
int iLocal_3259 = 0;
int iLocal_3260 = 0;
int iLocal_3261[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
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
int iLocal_3294 = 0;
int iLocal_3295 = 0;
int iLocal_3296 = 0;
int iLocal_3297 = 0;
int iLocal_3298 = 0;
var uLocal_3299 = 0;
int iLocal_3300 = 0;
int iLocal_3301 = 0;
int iLocal_3302 = 0;
int iLocal_3303 = 0;
var uLocal_3304 = 0;
int iLocal_3305 = 0;
int iLocal_3306 = 0;
int iLocal_3307 = 0;
int iLocal_3308 = 0;
int iLocal_3309 = 0;
int iLocal_3310 = 0;
int iLocal_3311 = 0;
int iLocal_3312 = 0;
int iLocal_3313 = 0;
int iLocal_3314 = 0;
int iLocal_3315 = 0;
int iLocal_3316 = 0;
int iLocal_3317 = 0;
int iLocal_3318[36] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					   0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
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
int iLocal_3365 = 0;
int iLocal_3366 = 0;
int iLocal_3367 = 0;
int iLocal_3368[2] = {0, 0};
int iLocal_3371 = 0;
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
int iLocal_3400 = 0;
int iLocal_3401 = 0;
int iLocal_3402[2] = {0, 0};
int iLocal_3405 = 0;
int iLocal_3406 = 0;
int iLocal_3407 = 0;
int iLocal_3408 = 0;
int iLocal_3409 = 0;
int iLocal_3410 = 0;
int iLocal_3411 = 0;
vector3 vLocal_3412 = {0f, 0f, 0f};
vector3 vLocal_3415 = {0f, 0f, 0f};
vector3 vLocal_3418 = {0f, 0f, 0f};
vector3 vLocal_3421 = {0f, 0f, 0f};
var uLocal_3424 = 0;
var uLocal_3425 = 0;
var uLocal_3426 = 0;
vector3 vLocal_3427 = {0f, 0f, 0f};
var uLocal_3430 = 0;
var uLocal_3431 = 0;
var uLocal_3432 = 0;
vector3 vLocal_3433 = {0f, 0f, 0f};
vector3 vLocal_3436[2] = {{0f, 0f, 0f}, {0f, 0f, 0f}};
float fLocal_3443 = 0f;
float fLocal_3444 = 0f;
float fLocal_3445 = 0f;
float fLocal_3446 = 0f;
char *sLocal_3447 = NULL;
char *sLocal_3448 = NULL;
int iLocal_3449 = 0;
int iLocal_3450 = 0;
int iLocal_3451 = 0;
int iLocal_3452 = 0;
int iLocal_3453 = 0;
int iLocal_3454 = 0;
int iLocal_3455 = 0;
int iLocal_3456 = 0;
int iLocal_3457 = 0;
int iLocal_3458 = 0;
int iLocal_3459 = 0;
int iLocal_3460 = 0;
int iLocal_3461 = 0;
int iLocal_3462 = 0;
var uLocal_3463 = 0;
int iLocal_3464 = 0;
int iLocal_3465 = 0;
int iLocal_3466 = 0;
int iLocal_3467 = 0;
int iLocal_3468 = 0;
int iLocal_3469 = 0;
int iLocal_3470 = 0;
int iLocal_3471 = 0;
int iLocal_3472 = 0;
struct<165> Local_3473[2];
var uLocal_3804 = 0;
int iLocal_3805 = 0;
int iLocal_3806 = 0;
int iLocal_3807 = 0;
vector3 vLocal_3808 = {0f, 0f, 0f};
var uLocal_3811 = 0;
var uLocal_3812 = 0;
var uLocal_3813 = 0;
var uLocal_3814 = 0;
var uLocal_3815 = 0;
var uLocal_3816 = 0;
var uLocal_3817 = 0;
var uLocal_3818 = 0;
var uLocal_3819 = 0;
var uLocal_3820 = 0;
var uLocal_3821 = 0;
var uLocal_3822 = 0;
var uLocal_3823 = 0;
var uLocal_3824 = 0;
var uLocal_3825 = 0;
var uLocal_3826 = 0;
var uLocal_3827 = 0;
var uLocal_3828 = 0;
int iLocal_3829 = 0;
int iLocal_3830 = 0;
int iLocal_3831 = 0;
int iLocal_3832 = 0;
int iLocal_3833 = 0;
int iLocal_3834 = 0;
int iLocal_3835 = 0;
int iLocal_3836 = 0;
float fLocal_3837 = 0f;
int iLocal_3838 = 0;
var *uLocal_3839 = NULL;
var uLocal_3840 = 0;
var uLocal_3841 = 0;
var uLocal_3842 = 0;
var uLocal_3843 = 2;
var uLocal_3844 = 0;
var uLocal_3845 = 0;
var uLocal_3846 = 2;
var uLocal_3847 = 0;
var uLocal_3848 = 0;
var uLocal_3849 = 20;
var uLocal_3850 = 0;
var uLocal_3851 = 0;
var uLocal_3852 = 0;
var uLocal_3853 = -1;
var uLocal_3854 = 0;
var uLocal_3855 = 0;
var uLocal_3856 = 0;
var uLocal_3857 = 0;
var uLocal_3858 = 0;
var uLocal_3859 = 0;
var uLocal_3860 = 0;
var uLocal_3861 = 0;
var uLocal_3862 = 0;
var uLocal_3863 = 0;
var uLocal_3864 = 0;
var uLocal_3865 = 0;
var uLocal_3866 = 0;
var uLocal_3867 = 0;
var uLocal_3868 = 0;
var uLocal_3869 = 0;
var uLocal_3870 = 0;
var uLocal_3871 = 0;
var uLocal_3872 = 0;
var uLocal_3873 = 0;
var uLocal_3874 = 0;
var uLocal_3875 = 0;
var uLocal_3876 = 0;
var uLocal_3877 = 0;
var uLocal_3878 = 0;
var uLocal_3879 = 0;
var uLocal_3880 = 0;
var uLocal_3881 = 0;
var uLocal_3882 = 0;
var uLocal_3883 = 1065353216;
var uLocal_3884 = 0;
var uLocal_3885 = 0;
var uLocal_3886 = 0;
var uLocal_3887 = 0;
var uLocal_3888 = 0;
var uLocal_3889 = 0;
var uLocal_3890 = 0;
var uLocal_3891 = 0;
var uLocal_3892 = 0;
var uLocal_3893 = 0;
var uLocal_3894 = 0;
var uLocal_3895 = 0;
var uLocal_3896 = 0;
var uLocal_3897 = 0;
var uLocal_3898 = 0;
var uLocal_3899 = 0;
var uLocal_3900 = 0;
var uLocal_3901 = 0;
var uLocal_3902 = 0;
var uLocal_3903 = 0;
var uLocal_3904 = 0;
var uLocal_3905 = 0;
var uLocal_3906 = 0;
var uLocal_3907 = 0;
var uLocal_3908 = 0;
var uLocal_3909 = 0;
var uLocal_3910 = -1;
var uLocal_3911 = 0;
var uLocal_3912 = 0;
var uLocal_3913 = 0;
var uLocal_3914 = 0;
var uLocal_3915 = 0;
var uLocal_3916 = 0;
var uLocal_3917 = 0;
var uLocal_3918 = 0;
var uLocal_3919 = 0;
var uLocal_3920 = 0;
var uLocal_3921 = 0;
var uLocal_3922 = 0;
var uLocal_3923 = 0;
var uLocal_3924 = 0;
var uLocal_3925 = 0;
var uLocal_3926 = 0;
var uLocal_3927 = 0;
var uLocal_3928 = 0;
var uLocal_3929 = 0;
var uLocal_3930 = 0;
var uLocal_3931 = 0;
var uLocal_3932 = 0;
var uLocal_3933 = 0;
var uLocal_3934 = 0;
var uLocal_3935 = 0;
var uLocal_3936 = 0;
var uLocal_3937 = 0;
var uLocal_3938 = 0;
var uLocal_3939 = 0;
var uLocal_3940 = 1065353216;
var uLocal_3941 = 0;
var uLocal_3942 = 0;
var uLocal_3943 = 0;
var uLocal_3944 = 0;
var uLocal_3945 = 0;
var uLocal_3946 = 0;
var uLocal_3947 = 0;
var uLocal_3948 = 0;
var uLocal_3949 = 0;
var uLocal_3950 = 0;
var uLocal_3951 = 0;
var uLocal_3952 = 0;
var uLocal_3953 = 0;
var uLocal_3954 = 0;
var uLocal_3955 = 0;
var uLocal_3956 = 0;
var uLocal_3957 = 0;
var uLocal_3958 = 0;
var uLocal_3959 = 0;
var uLocal_3960 = 0;
var uLocal_3961 = 0;
var uLocal_3962 = 0;
var uLocal_3963 = 0;
var uLocal_3964 = 0;
var uLocal_3965 = 0;
var uLocal_3966 = 0;
var uLocal_3967 = -1;
var uLocal_3968 = 0;
var uLocal_3969 = 0;
var uLocal_3970 = 0;
var uLocal_3971 = 0;
var uLocal_3972 = 0;
var uLocal_3973 = 0;
var uLocal_3974 = 0;
var uLocal_3975 = 0;
var uLocal_3976 = 0;
var uLocal_3977 = 0;
var uLocal_3978 = 0;
var uLocal_3979 = 0;
var uLocal_3980 = 0;
var uLocal_3981 = 0;
var uLocal_3982 = 0;
var uLocal_3983 = 0;
var uLocal_3984 = 0;
var uLocal_3985 = 0;
var uLocal_3986 = 0;
var uLocal_3987 = 0;
var uLocal_3988 = 0;
var uLocal_3989 = 0;
var uLocal_3990 = 0;
var uLocal_3991 = 0;
var uLocal_3992 = 0;
var uLocal_3993 = 0;
var uLocal_3994 = 0;
var uLocal_3995 = 0;
var uLocal_3996 = 0;
var uLocal_3997 = 1065353216;
var uLocal_3998 = 0;
var uLocal_3999 = 0;
var uLocal_4000 = 0;
var uLocal_4001 = 0;
var uLocal_4002 = 0;
var uLocal_4003 = 0;
var uLocal_4004 = 0;
var uLocal_4005 = 0;
var uLocal_4006 = 0;
var uLocal_4007 = 0;
var uLocal_4008 = 0;
var uLocal_4009 = 0;
var uLocal_4010 = 0;
var uLocal_4011 = 0;
var uLocal_4012 = 0;
var uLocal_4013 = 0;
var uLocal_4014 = 0;
var uLocal_4015 = 0;
var uLocal_4016 = 0;
var uLocal_4017 = 0;
var uLocal_4018 = 0;
var uLocal_4019 = 0;
var uLocal_4020 = 0;
var uLocal_4021 = 0;
var uLocal_4022 = 0;
var uLocal_4023 = 0;
var uLocal_4024 = -1;
var uLocal_4025 = 0;
var uLocal_4026 = 0;
var uLocal_4027 = 0;
var uLocal_4028 = 0;
var uLocal_4029 = 0;
var uLocal_4030 = 0;
var uLocal_4031 = 0;
var uLocal_4032 = 0;
var uLocal_4033 = 0;
var uLocal_4034 = 0;
var uLocal_4035 = 0;
var uLocal_4036 = 0;
var uLocal_4037 = 0;
var uLocal_4038 = 0;
var uLocal_4039 = 0;
var uLocal_4040 = 0;
var uLocal_4041 = 0;
var uLocal_4042 = 0;
var uLocal_4043 = 0;
var uLocal_4044 = 0;
var uLocal_4045 = 0;
var uLocal_4046 = 0;
var uLocal_4047 = 0;
var uLocal_4048 = 0;
var uLocal_4049 = 0;
var uLocal_4050 = 0;
var uLocal_4051 = 0;
var uLocal_4052 = 0;
var uLocal_4053 = 0;
var uLocal_4054 = 1065353216;
var uLocal_4055 = 0;
var uLocal_4056 = 0;
var uLocal_4057 = 0;
var uLocal_4058 = 0;
var uLocal_4059 = 0;
var uLocal_4060 = 0;
var uLocal_4061 = 0;
var uLocal_4062 = 0;
var uLocal_4063 = 0;
var uLocal_4064 = 0;
var uLocal_4065 = 0;
var uLocal_4066 = 0;
var uLocal_4067 = 0;
var uLocal_4068 = 0;
var uLocal_4069 = 0;
var uLocal_4070 = 0;
var uLocal_4071 = 0;
var uLocal_4072 = 0;
var uLocal_4073 = 0;
var uLocal_4074 = 0;
var uLocal_4075 = 0;
var uLocal_4076 = 0;
var uLocal_4077 = 0;
var uLocal_4078 = 0;
var uLocal_4079 = 0;
var uLocal_4080 = 0;
var uLocal_4081 = -1;
var uLocal_4082 = 0;
var uLocal_4083 = 0;
var uLocal_4084 = 0;
var uLocal_4085 = 0;
var uLocal_4086 = 0;
var uLocal_4087 = 0;
var uLocal_4088 = 0;
var uLocal_4089 = 0;
var uLocal_4090 = 0;
var uLocal_4091 = 0;
var uLocal_4092 = 0;
var uLocal_4093 = 0;
var uLocal_4094 = 0;
var uLocal_4095 = 0;
var uLocal_4096 = 0;
var uLocal_4097 = 0;
var uLocal_4098 = 0;
var uLocal_4099 = 0;
var uLocal_4100 = 0;
var uLocal_4101 = 0;
var uLocal_4102 = 0;
var uLocal_4103 = 0;
var uLocal_4104 = 0;
var uLocal_4105 = 0;
var uLocal_4106 = 0;
var uLocal_4107 = 0;
var uLocal_4108 = 0;
var uLocal_4109 = 0;
var uLocal_4110 = 0;
var uLocal_4111 = 1065353216;
var uLocal_4112 = 0;
var uLocal_4113 = 0;
var uLocal_4114 = 0;
var uLocal_4115 = 0;
var uLocal_4116 = 0;
var uLocal_4117 = 0;
var uLocal_4118 = 0;
var uLocal_4119 = 0;
var uLocal_4120 = 0;
var uLocal_4121 = 0;
var uLocal_4122 = 0;
var uLocal_4123 = 0;
var uLocal_4124 = 0;
var uLocal_4125 = 0;
var uLocal_4126 = 0;
var uLocal_4127 = 0;
var uLocal_4128 = 0;
var uLocal_4129 = 0;
var uLocal_4130 = 0;
var uLocal_4131 = 0;
var uLocal_4132 = 0;
var uLocal_4133 = 0;
var uLocal_4134 = 0;
var uLocal_4135 = 0;
var uLocal_4136 = 0;
var uLocal_4137 = 0;
var uLocal_4138 = -1;
var uLocal_4139 = 0;
var uLocal_4140 = 0;
var uLocal_4141 = 0;
var uLocal_4142 = 0;
var uLocal_4143 = 0;
var uLocal_4144 = 0;
var uLocal_4145 = 0;
var uLocal_4146 = 0;
var uLocal_4147 = 0;
var uLocal_4148 = 0;
var uLocal_4149 = 0;
var uLocal_4150 = 0;
var uLocal_4151 = 0;
var uLocal_4152 = 0;
var uLocal_4153 = 0;
var uLocal_4154 = 0;
var uLocal_4155 = 0;
var uLocal_4156 = 0;
var uLocal_4157 = 0;
var uLocal_4158 = 0;
var uLocal_4159 = 0;
var uLocal_4160 = 0;
var uLocal_4161 = 0;
var uLocal_4162 = 0;
var uLocal_4163 = 0;
var uLocal_4164 = 0;
var uLocal_4165 = 0;
var uLocal_4166 = 0;
var uLocal_4167 = 0;
var uLocal_4168 = 1065353216;
var uLocal_4169 = 0;
var uLocal_4170 = 0;
var uLocal_4171 = 0;
var uLocal_4172 = 0;
var uLocal_4173 = 0;
var uLocal_4174 = 0;
var uLocal_4175 = 0;
var uLocal_4176 = 0;
var uLocal_4177 = 0;
var uLocal_4178 = 0;
var uLocal_4179 = 0;
var uLocal_4180 = 0;
var uLocal_4181 = 0;
var uLocal_4182 = 0;
var uLocal_4183 = 0;
var uLocal_4184 = 0;
var uLocal_4185 = 0;
var uLocal_4186 = 0;
var uLocal_4187 = 0;
var uLocal_4188 = 0;
var uLocal_4189 = 0;
var uLocal_4190 = 0;
var uLocal_4191 = 0;
var uLocal_4192 = 0;
var uLocal_4193 = 0;
var uLocal_4194 = 0;
var uLocal_4195 = -1;
var uLocal_4196 = 0;
var uLocal_4197 = 0;
var uLocal_4198 = 0;
var uLocal_4199 = 0;
var uLocal_4200 = 0;
var uLocal_4201 = 0;
var uLocal_4202 = 0;
var uLocal_4203 = 0;
var uLocal_4204 = 0;
var uLocal_4205 = 0;
var uLocal_4206 = 0;
var uLocal_4207 = 0;
var uLocal_4208 = 0;
var uLocal_4209 = 0;
var uLocal_4210 = 0;
var uLocal_4211 = 0;
var uLocal_4212 = 0;
var uLocal_4213 = 0;
var uLocal_4214 = 0;
var uLocal_4215 = 0;
var uLocal_4216 = 0;
var uLocal_4217 = 0;
var uLocal_4218 = 0;
var uLocal_4219 = 0;
var uLocal_4220 = 0;
var uLocal_4221 = 0;
var uLocal_4222 = 0;
var uLocal_4223 = 0;
var uLocal_4224 = 0;
var uLocal_4225 = 1065353216;
var uLocal_4226 = 0;
var uLocal_4227 = 0;
var uLocal_4228 = 0;
var uLocal_4229 = 0;
var uLocal_4230 = 0;
var uLocal_4231 = 0;
var uLocal_4232 = 0;
var uLocal_4233 = 0;
var uLocal_4234 = 0;
var uLocal_4235 = 0;
var uLocal_4236 = 0;
var uLocal_4237 = 0;
var uLocal_4238 = 0;
var uLocal_4239 = 0;
var uLocal_4240 = 0;
var uLocal_4241 = 0;
var uLocal_4242 = 0;
var uLocal_4243 = 0;
var uLocal_4244 = 0;
var uLocal_4245 = 0;
var uLocal_4246 = 0;
var uLocal_4247 = 0;
var uLocal_4248 = 0;
var uLocal_4249 = 0;
var uLocal_4250 = 0;
var uLocal_4251 = 0;
var uLocal_4252 = -1;
var uLocal_4253 = 0;
var uLocal_4254 = 0;
var uLocal_4255 = 0;
var uLocal_4256 = 0;
var uLocal_4257 = 0;
var uLocal_4258 = 0;
var uLocal_4259 = 0;
var uLocal_4260 = 0;
var uLocal_4261 = 0;
var uLocal_4262 = 0;
var uLocal_4263 = 0;
var uLocal_4264 = 0;
var uLocal_4265 = 0;
var uLocal_4266 = 0;
var uLocal_4267 = 0;
var uLocal_4268 = 0;
var uLocal_4269 = 0;
var uLocal_4270 = 0;
var uLocal_4271 = 0;
var uLocal_4272 = 0;
var uLocal_4273 = 0;
var uLocal_4274 = 0;
var uLocal_4275 = 0;
var uLocal_4276 = 0;
var uLocal_4277 = 0;
var uLocal_4278 = 0;
var uLocal_4279 = 0;
var uLocal_4280 = 0;
var uLocal_4281 = 0;
var uLocal_4282 = 1065353216;
var uLocal_4283 = 0;
var uLocal_4284 = 0;
var uLocal_4285 = 0;
var uLocal_4286 = 0;
var uLocal_4287 = 0;
var uLocal_4288 = 0;
var uLocal_4289 = 0;
var uLocal_4290 = 0;
var uLocal_4291 = 0;
var uLocal_4292 = 0;
var uLocal_4293 = 0;
var uLocal_4294 = 0;
var uLocal_4295 = 0;
var uLocal_4296 = 0;
var uLocal_4297 = 0;
var uLocal_4298 = 0;
var uLocal_4299 = 0;
var uLocal_4300 = 0;
var uLocal_4301 = 0;
var uLocal_4302 = 0;
var uLocal_4303 = 0;
var uLocal_4304 = 0;
var uLocal_4305 = 0;
var uLocal_4306 = 0;
var uLocal_4307 = 0;
var uLocal_4308 = 0;
var uLocal_4309 = -1;
var uLocal_4310 = 0;
var uLocal_4311 = 0;
var uLocal_4312 = 0;
var uLocal_4313 = 0;
var uLocal_4314 = 0;
var uLocal_4315 = 0;
var uLocal_4316 = 0;
var uLocal_4317 = 0;
var uLocal_4318 = 0;
var uLocal_4319 = 0;
var uLocal_4320 = 0;
var uLocal_4321 = 0;
var uLocal_4322 = 0;
var uLocal_4323 = 0;
var uLocal_4324 = 0;
var uLocal_4325 = 0;
var uLocal_4326 = 0;
var uLocal_4327 = 0;
var uLocal_4328 = 0;
var uLocal_4329 = 0;
var uLocal_4330 = 0;
var uLocal_4331 = 0;
var uLocal_4332 = 0;
var uLocal_4333 = 0;
var uLocal_4334 = 0;
var uLocal_4335 = 0;
var uLocal_4336 = 0;
var uLocal_4337 = 0;
var uLocal_4338 = 0;
var uLocal_4339 = 1065353216;
var uLocal_4340 = 0;
var uLocal_4341 = 0;
var uLocal_4342 = 0;
var uLocal_4343 = 0;
var uLocal_4344 = 0;
var uLocal_4345 = 0;
var uLocal_4346 = 0;
var uLocal_4347 = 0;
var uLocal_4348 = 0;
var uLocal_4349 = 0;
var uLocal_4350 = 0;
var uLocal_4351 = 0;
var uLocal_4352 = 0;
var uLocal_4353 = 0;
var uLocal_4354 = 0;
var uLocal_4355 = 0;
var uLocal_4356 = 0;
var uLocal_4357 = 0;
var uLocal_4358 = 0;
var uLocal_4359 = 0;
var uLocal_4360 = 0;
var uLocal_4361 = 0;
var uLocal_4362 = 0;
var uLocal_4363 = 0;
var uLocal_4364 = 0;
var uLocal_4365 = 0;
var uLocal_4366 = -1;
var uLocal_4367 = 0;
var uLocal_4368 = 0;
var uLocal_4369 = 0;
var uLocal_4370 = 0;
var uLocal_4371 = 0;
var uLocal_4372 = 0;
var uLocal_4373 = 0;
var uLocal_4374 = 0;
var uLocal_4375 = 0;
var uLocal_4376 = 0;
var uLocal_4377 = 0;
var uLocal_4378 = 0;
var uLocal_4379 = 0;
var uLocal_4380 = 0;
var uLocal_4381 = 0;
var uLocal_4382 = 0;
var uLocal_4383 = 0;
var uLocal_4384 = 0;
var uLocal_4385 = 0;
var uLocal_4386 = 0;
var uLocal_4387 = 0;
var uLocal_4388 = 0;
var uLocal_4389 = 0;
var uLocal_4390 = 0;
var uLocal_4391 = 0;
var uLocal_4392 = 0;
var uLocal_4393 = 0;
var uLocal_4394 = 0;
var uLocal_4395 = 0;
var uLocal_4396 = 1065353216;
var uLocal_4397 = 0;
var uLocal_4398 = 0;
var uLocal_4399 = 0;
var uLocal_4400 = 0;
var uLocal_4401 = 0;
var uLocal_4402 = 0;
var uLocal_4403 = 0;
var uLocal_4404 = 0;
var uLocal_4405 = 0;
var uLocal_4406 = 0;
var uLocal_4407 = 0;
var uLocal_4408 = 0;
var uLocal_4409 = 0;
var uLocal_4410 = 0;
var uLocal_4411 = 0;
var uLocal_4412 = 0;
var uLocal_4413 = 0;
var uLocal_4414 = 0;
var uLocal_4415 = 0;
var uLocal_4416 = 0;
var uLocal_4417 = 0;
var uLocal_4418 = 0;
var uLocal_4419 = 0;
var uLocal_4420 = 0;
var uLocal_4421 = 0;
var uLocal_4422 = 0;
var uLocal_4423 = -1;
var uLocal_4424 = 0;
var uLocal_4425 = 0;
var uLocal_4426 = 0;
var uLocal_4427 = 0;
var uLocal_4428 = 0;
var uLocal_4429 = 0;
var uLocal_4430 = 0;
var uLocal_4431 = 0;
var uLocal_4432 = 0;
var uLocal_4433 = 0;
var uLocal_4434 = 0;
var uLocal_4435 = 0;
var uLocal_4436 = 0;
var uLocal_4437 = 0;
var uLocal_4438 = 0;
var uLocal_4439 = 0;
var uLocal_4440 = 0;
var uLocal_4441 = 0;
var uLocal_4442 = 0;
var uLocal_4443 = 0;
var uLocal_4444 = 0;
var uLocal_4445 = 0;
var uLocal_4446 = 0;
var uLocal_4447 = 0;
var uLocal_4448 = 0;
var uLocal_4449 = 0;
var uLocal_4450 = 0;
var uLocal_4451 = 0;
var uLocal_4452 = 0;
var uLocal_4453 = 1065353216;
var uLocal_4454 = 0;
var uLocal_4455 = 0;
var uLocal_4456 = 0;
var uLocal_4457 = 0;
var uLocal_4458 = 0;
var uLocal_4459 = 0;
var uLocal_4460 = 0;
var uLocal_4461 = 0;
var uLocal_4462 = 0;
var uLocal_4463 = 0;
var uLocal_4464 = 0;
var uLocal_4465 = 0;
var uLocal_4466 = 0;
var uLocal_4467 = 0;
var uLocal_4468 = 0;
var uLocal_4469 = 0;
var uLocal_4470 = 0;
var uLocal_4471 = 0;
var uLocal_4472 = 0;
var uLocal_4473 = 0;
var uLocal_4474 = 0;
var uLocal_4475 = 0;
var uLocal_4476 = 0;
var uLocal_4477 = 0;
var uLocal_4478 = 0;
var uLocal_4479 = 0;
var uLocal_4480 = -1;
var uLocal_4481 = 0;
var uLocal_4482 = 0;
var uLocal_4483 = 0;
var uLocal_4484 = 0;
var uLocal_4485 = 0;
var uLocal_4486 = 0;
var uLocal_4487 = 0;
var uLocal_4488 = 0;
var uLocal_4489 = 0;
var uLocal_4490 = 0;
var uLocal_4491 = 0;
var uLocal_4492 = 0;
var uLocal_4493 = 0;
var uLocal_4494 = 0;
var uLocal_4495 = 0;
var uLocal_4496 = 0;
var uLocal_4497 = 0;
var uLocal_4498 = 0;
var uLocal_4499 = 0;
var uLocal_4500 = 0;
var uLocal_4501 = 0;
var uLocal_4502 = 0;
var uLocal_4503 = 0;
var uLocal_4504 = 0;
var uLocal_4505 = 0;
var uLocal_4506 = 0;
var uLocal_4507 = 0;
var uLocal_4508 = 0;
var uLocal_4509 = 0;
var uLocal_4510 = 1065353216;
var uLocal_4511 = 0;
var uLocal_4512 = 0;
var uLocal_4513 = 0;
var uLocal_4514 = 0;
var uLocal_4515 = 0;
var uLocal_4516 = 0;
var uLocal_4517 = 0;
var uLocal_4518 = 0;
var uLocal_4519 = 0;
var uLocal_4520 = 0;
var uLocal_4521 = 0;
var uLocal_4522 = 0;
var uLocal_4523 = 0;
var uLocal_4524 = 0;
var uLocal_4525 = 0;
var uLocal_4526 = 0;
var uLocal_4527 = 0;
var uLocal_4528 = 0;
var uLocal_4529 = 0;
var uLocal_4530 = 0;
var uLocal_4531 = 0;
var uLocal_4532 = 0;
var uLocal_4533 = 0;
var uLocal_4534 = 0;
var uLocal_4535 = 0;
var uLocal_4536 = 0;
var uLocal_4537 = -1;
var uLocal_4538 = 0;
var uLocal_4539 = 0;
var uLocal_4540 = 0;
var uLocal_4541 = 0;
var uLocal_4542 = 0;
var uLocal_4543 = 0;
var uLocal_4544 = 0;
var uLocal_4545 = 0;
var uLocal_4546 = 0;
var uLocal_4547 = 0;
var uLocal_4548 = 0;
var uLocal_4549 = 0;
var uLocal_4550 = 0;
var uLocal_4551 = 0;
var uLocal_4552 = 0;
var uLocal_4553 = 0;
var uLocal_4554 = 0;
var uLocal_4555 = 0;
var uLocal_4556 = 0;
var uLocal_4557 = 0;
var uLocal_4558 = 0;
var uLocal_4559 = 0;
var uLocal_4560 = 0;
var uLocal_4561 = 0;
var uLocal_4562 = 0;
var uLocal_4563 = 0;
var uLocal_4564 = 0;
var uLocal_4565 = 0;
var uLocal_4566 = 0;
var uLocal_4567 = 1065353216;
var uLocal_4568 = 0;
var uLocal_4569 = 0;
var uLocal_4570 = 0;
var uLocal_4571 = 0;
var uLocal_4572 = 0;
var uLocal_4573 = 0;
var uLocal_4574 = 0;
var uLocal_4575 = 0;
var uLocal_4576 = 0;
var uLocal_4577 = 0;
var uLocal_4578 = 0;
var uLocal_4579 = 0;
var uLocal_4580 = 0;
var uLocal_4581 = 0;
var uLocal_4582 = 0;
var uLocal_4583 = 0;
var uLocal_4584 = 0;
var uLocal_4585 = 0;
var uLocal_4586 = 0;
var uLocal_4587 = 0;
var uLocal_4588 = 0;
var uLocal_4589 = 0;
var uLocal_4590 = 0;
var uLocal_4591 = 0;
var uLocal_4592 = 0;
var uLocal_4593 = 0;
var uLocal_4594 = -1;
var uLocal_4595 = 0;
var uLocal_4596 = 0;
var uLocal_4597 = 0;
var uLocal_4598 = 0;
var uLocal_4599 = 0;
var uLocal_4600 = 0;
var uLocal_4601 = 0;
var uLocal_4602 = 0;
var uLocal_4603 = 0;
var uLocal_4604 = 0;
var uLocal_4605 = 0;
var uLocal_4606 = 0;
var uLocal_4607 = 0;
var uLocal_4608 = 0;
var uLocal_4609 = 0;
var uLocal_4610 = 0;
var uLocal_4611 = 0;
var uLocal_4612 = 0;
var uLocal_4613 = 0;
var uLocal_4614 = 0;
var uLocal_4615 = 0;
var uLocal_4616 = 0;
var uLocal_4617 = 0;
var uLocal_4618 = 0;
var uLocal_4619 = 0;
var uLocal_4620 = 0;
var uLocal_4621 = 0;
var uLocal_4622 = 0;
var uLocal_4623 = 0;
var uLocal_4624 = 1065353216;
var uLocal_4625 = 0;
var uLocal_4626 = 0;
var uLocal_4627 = 0;
var uLocal_4628 = 0;
var uLocal_4629 = 0;
var uLocal_4630 = 0;
var uLocal_4631 = 0;
var uLocal_4632 = 0;
var uLocal_4633 = 0;
var uLocal_4634 = 0;
var uLocal_4635 = 0;
var uLocal_4636 = 0;
var uLocal_4637 = 0;
var uLocal_4638 = 0;
var uLocal_4639 = 0;
var uLocal_4640 = 0;
var uLocal_4641 = 0;
var uLocal_4642 = 0;
var uLocal_4643 = 0;
var uLocal_4644 = 0;
var uLocal_4645 = 0;
var uLocal_4646 = 0;
var uLocal_4647 = 0;
var uLocal_4648 = 0;
var uLocal_4649 = 0;
var uLocal_4650 = 0;
var uLocal_4651 = -1;
var uLocal_4652 = 0;
var uLocal_4653 = 0;
var uLocal_4654 = 0;
var uLocal_4655 = 0;
var uLocal_4656 = 0;
var uLocal_4657 = 0;
var uLocal_4658 = 0;
var uLocal_4659 = 0;
var uLocal_4660 = 0;
var uLocal_4661 = 0;
var uLocal_4662 = 0;
var uLocal_4663 = 0;
var uLocal_4664 = 0;
var uLocal_4665 = 0;
var uLocal_4666 = 0;
var uLocal_4667 = 0;
var uLocal_4668 = 0;
var uLocal_4669 = 0;
var uLocal_4670 = 0;
var uLocal_4671 = 0;
var uLocal_4672 = 0;
var uLocal_4673 = 0;
var uLocal_4674 = 0;
var uLocal_4675 = 0;
var uLocal_4676 = 0;
var uLocal_4677 = 0;
var uLocal_4678 = 0;
var uLocal_4679 = 0;
var uLocal_4680 = 0;
var uLocal_4681 = 1065353216;
var uLocal_4682 = 0;
var uLocal_4683 = 0;
var uLocal_4684 = 0;
var uLocal_4685 = 0;
var uLocal_4686 = 0;
var uLocal_4687 = 0;
var uLocal_4688 = 0;
var uLocal_4689 = 0;
var uLocal_4690 = 0;
var uLocal_4691 = 0;
var uLocal_4692 = 0;
var uLocal_4693 = 0;
var uLocal_4694 = 0;
var uLocal_4695 = 0;
var uLocal_4696 = 0;
var uLocal_4697 = 0;
var uLocal_4698 = 0;
var uLocal_4699 = 0;
var uLocal_4700 = 0;
var uLocal_4701 = 0;
var uLocal_4702 = 0;
var uLocal_4703 = 0;
var uLocal_4704 = 0;
var uLocal_4705 = 0;
var uLocal_4706 = 0;
var uLocal_4707 = 0;
var uLocal_4708 = -1;
var uLocal_4709 = 0;
var uLocal_4710 = 0;
var uLocal_4711 = 0;
var uLocal_4712 = 0;
var uLocal_4713 = 0;
var uLocal_4714 = 0;
var uLocal_4715 = 0;
var uLocal_4716 = 0;
var uLocal_4717 = 0;
var uLocal_4718 = 0;
var uLocal_4719 = 0;
var uLocal_4720 = 0;
var uLocal_4721 = 0;
var uLocal_4722 = 0;
var uLocal_4723 = 0;
var uLocal_4724 = 0;
var uLocal_4725 = 0;
var uLocal_4726 = 0;
var uLocal_4727 = 0;
var uLocal_4728 = 0;
var uLocal_4729 = 0;
var uLocal_4730 = 0;
var uLocal_4731 = 0;
var uLocal_4732 = 0;
var uLocal_4733 = 0;
var uLocal_4734 = 0;
var uLocal_4735 = 0;
var uLocal_4736 = 0;
var uLocal_4737 = 0;
var uLocal_4738 = 1065353216;
var uLocal_4739 = 0;
var uLocal_4740 = 0;
var uLocal_4741 = 0;
var uLocal_4742 = 0;
var uLocal_4743 = 0;
var uLocal_4744 = 0;
var uLocal_4745 = 0;
var uLocal_4746 = 0;
var uLocal_4747 = 0;
var uLocal_4748 = 0;
var uLocal_4749 = 0;
var uLocal_4750 = 0;
var uLocal_4751 = 0;
var uLocal_4752 = 0;
var uLocal_4753 = 0;
var uLocal_4754 = 0;
var uLocal_4755 = 0;
var uLocal_4756 = 0;
var uLocal_4757 = 0;
var uLocal_4758 = 0;
var uLocal_4759 = 0;
var uLocal_4760 = 0;
var uLocal_4761 = 0;
var uLocal_4762 = 0;
var uLocal_4763 = 0;
var uLocal_4764 = 0;
var uLocal_4765 = -1;
var uLocal_4766 = 0;
var uLocal_4767 = 0;
var uLocal_4768 = 0;
var uLocal_4769 = 0;
var uLocal_4770 = 0;
var uLocal_4771 = 0;
var uLocal_4772 = 0;
var uLocal_4773 = 0;
var uLocal_4774 = 0;
var uLocal_4775 = 0;
var uLocal_4776 = 0;
var uLocal_4777 = 0;
var uLocal_4778 = 0;
var uLocal_4779 = 0;
var uLocal_4780 = 0;
var uLocal_4781 = 0;
var uLocal_4782 = 0;
var uLocal_4783 = 0;
var uLocal_4784 = 0;
var uLocal_4785 = 0;
var uLocal_4786 = 0;
var uLocal_4787 = 0;
var uLocal_4788 = 0;
var uLocal_4789 = 0;
var uLocal_4790 = 0;
var uLocal_4791 = 0;
var uLocal_4792 = 0;
var uLocal_4793 = 0;
var uLocal_4794 = 0;
var uLocal_4795 = 1065353216;
var uLocal_4796 = 0;
var uLocal_4797 = 0;
var uLocal_4798 = 0;
var uLocal_4799 = 0;
var uLocal_4800 = 0;
var uLocal_4801 = 0;
var uLocal_4802 = 0;
var uLocal_4803 = 0;
var uLocal_4804 = 0;
var uLocal_4805 = 0;
var uLocal_4806 = 0;
var uLocal_4807 = 0;
var uLocal_4808 = 0;
var uLocal_4809 = 0;
var uLocal_4810 = 0;
var uLocal_4811 = 0;
var uLocal_4812 = 0;
var uLocal_4813 = 0;
var uLocal_4814 = 0;
var uLocal_4815 = 0;
var uLocal_4816 = 0;
var uLocal_4817 = 0;
var uLocal_4818 = 0;
var uLocal_4819 = 0;
var uLocal_4820 = 0;
var uLocal_4821 = 0;
var uLocal_4822 = -1;
var uLocal_4823 = 0;
var uLocal_4824 = 0;
var uLocal_4825 = 0;
var uLocal_4826 = 0;
var uLocal_4827 = 0;
var uLocal_4828 = 0;
var uLocal_4829 = 0;
var uLocal_4830 = 0;
var uLocal_4831 = 0;
var uLocal_4832 = 0;
var uLocal_4833 = 0;
var uLocal_4834 = 0;
var uLocal_4835 = 0;
var uLocal_4836 = 0;
var uLocal_4837 = 0;
var uLocal_4838 = 0;
var uLocal_4839 = 0;
var uLocal_4840 = 0;
var uLocal_4841 = 0;
var uLocal_4842 = 0;
var uLocal_4843 = 0;
var uLocal_4844 = 0;
var uLocal_4845 = 0;
var uLocal_4846 = 0;
var uLocal_4847 = 0;
var uLocal_4848 = 0;
var uLocal_4849 = 0;
var uLocal_4850 = 0;
var uLocal_4851 = 0;
var uLocal_4852 = 1065353216;
var uLocal_4853 = 0;
var uLocal_4854 = 0;
var uLocal_4855 = 0;
var uLocal_4856 = 0;
var uLocal_4857 = 0;
var uLocal_4858 = 0;
var uLocal_4859 = 0;
var uLocal_4860 = 0;
var uLocal_4861 = 0;
var uLocal_4862 = 0;
var uLocal_4863 = 0;
var uLocal_4864 = 0;
var uLocal_4865 = 0;
var uLocal_4866 = 0;
var uLocal_4867 = 0;
var uLocal_4868 = 0;
var uLocal_4869 = 0;
var uLocal_4870 = 0;
var uLocal_4871 = 0;
var uLocal_4872 = 0;
var uLocal_4873 = 0;
var uLocal_4874 = 0;
var uLocal_4875 = 0;
var uLocal_4876 = 0;
var uLocal_4877 = 0;
var uLocal_4878 = 0;
var uLocal_4879 = -1;
var uLocal_4880 = 0;
var uLocal_4881 = 0;
var uLocal_4882 = 0;
var uLocal_4883 = 0;
var uLocal_4884 = 0;
var uLocal_4885 = 0;
var uLocal_4886 = 0;
var uLocal_4887 = 0;
var uLocal_4888 = 0;
var uLocal_4889 = 0;
var uLocal_4890 = 0;
var uLocal_4891 = 0;
var uLocal_4892 = 0;
var uLocal_4893 = 0;
var uLocal_4894 = 0;
var uLocal_4895 = 0;
var uLocal_4896 = 0;
var uLocal_4897 = 0;
var uLocal_4898 = 0;
var uLocal_4899 = 0;
var uLocal_4900 = 0;
var uLocal_4901 = 0;
var uLocal_4902 = 0;
var uLocal_4903 = 0;
var uLocal_4904 = 0;
var uLocal_4905 = 0;
var uLocal_4906 = 0;
var uLocal_4907 = 0;
var uLocal_4908 = 0;
var uLocal_4909 = 1065353216;
var uLocal_4910 = 0;
var uLocal_4911 = 0;
var uLocal_4912 = 0;
var uLocal_4913 = 0;
var uLocal_4914 = 0;
var uLocal_4915 = 0;
var uLocal_4916 = 0;
var uLocal_4917 = 0;
var uLocal_4918 = 0;
var uLocal_4919 = 0;
var uLocal_4920 = 0;
var uLocal_4921 = 0;
var uLocal_4922 = 0;
var uLocal_4923 = 0;
var uLocal_4924 = 0;
var uLocal_4925 = 0;
var uLocal_4926 = 0;
var uLocal_4927 = 0;
var uLocal_4928 = 0;
var uLocal_4929 = 0;
var uLocal_4930 = 0;
var uLocal_4931 = 0;
var uLocal_4932 = 0;
var uLocal_4933 = 0;
var uLocal_4934 = 0;
var uLocal_4935 = 0;
var uLocal_4936 = -1;
var uLocal_4937 = 0;
var uLocal_4938 = 0;
var uLocal_4939 = 0;
var uLocal_4940 = 0;
var uLocal_4941 = 0;
var uLocal_4942 = 0;
var uLocal_4943 = 0;
var uLocal_4944 = 0;
var uLocal_4945 = 0;
var uLocal_4946 = 0;
var uLocal_4947 = 0;
var uLocal_4948 = 0;
var uLocal_4949 = 0;
var uLocal_4950 = 0;
var uLocal_4951 = 0;
var uLocal_4952 = 0;
var uLocal_4953 = 0;
var uLocal_4954 = 0;
var uLocal_4955 = 0;
var uLocal_4956 = 0;
var uLocal_4957 = 0;
var uLocal_4958 = 0;
var uLocal_4959 = 0;
var uLocal_4960 = 0;
var uLocal_4961 = 0;
var uLocal_4962 = 0;
var uLocal_4963 = 0;
var uLocal_4964 = 0;
var uLocal_4965 = 0;
var uLocal_4966 = 1065353216;
var uLocal_4967 = 0;
var uLocal_4968 = 0;
var uLocal_4969 = 0;
var uLocal_4970 = 0;
var uLocal_4971 = 0;
var uLocal_4972 = 0;
var uLocal_4973 = 0;
var uLocal_4974 = 0;
var uLocal_4975 = 0;
var uLocal_4976 = 0;
var uLocal_4977 = 0;
var uLocal_4978 = 0;
var uLocal_4979 = 0;
var uLocal_4980 = 0;
var uLocal_4981 = 0;
var uLocal_4982 = 0;
var uLocal_4983 = 0;
var uLocal_4984 = 0;
var uLocal_4985 = 0;
var uLocal_4986 = 0;
var uLocal_4987 = 0;
var uLocal_4988 = 0;
var uLocal_4989 = 0;
var uLocal_4990 = 16;
var uLocal_4991 = 0;
var uLocal_4992 = -1082130432;
var uLocal_4993 = 0;
var uLocal_4994 = -1082130432;
var uLocal_4995 = 0;
var uLocal_4996 = -1082130432;
var uLocal_4997 = 0;
var uLocal_4998 = -1082130432;
var uLocal_4999 = 0;
var uLocal_5000 = -1082130432;
var uLocal_5001 = 0;
var uLocal_5002 = -1082130432;
var uLocal_5003 = 0;
var uLocal_5004 = -1082130432;
var uLocal_5005 = 0;
var uLocal_5006 = -1082130432;
var uLocal_5007 = 0;
var uLocal_5008 = -1082130432;
var uLocal_5009 = 0;
var uLocal_5010 = -1082130432;
var uLocal_5011 = 0;
var uLocal_5012 = -1082130432;
var uLocal_5013 = 0;
var uLocal_5014 = -1082130432;
var uLocal_5015 = 0;
var uLocal_5016 = -1082130432;
var uLocal_5017 = 0;
var uLocal_5018 = -1082130432;
var uLocal_5019 = 0;
var uLocal_5020 = -1082130432;
var uLocal_5021 = 0;
var uLocal_5022 = -1082130432;
var uLocal_5023 = 16;
var uLocal_5024 = 0;
var uLocal_5025 = -1082130432;
var uLocal_5026 = 0;
var uLocal_5027 = -1082130432;
var uLocal_5028 = 0;
var uLocal_5029 = -1082130432;
var uLocal_5030 = 0;
var uLocal_5031 = -1082130432;
var uLocal_5032 = 0;
var uLocal_5033 = -1082130432;
var uLocal_5034 = 0;
var uLocal_5035 = -1082130432;
var uLocal_5036 = 0;
var uLocal_5037 = -1082130432;
var uLocal_5038 = 0;
var uLocal_5039 = -1082130432;
var uLocal_5040 = 0;
var uLocal_5041 = -1082130432;
var uLocal_5042 = 0;
var uLocal_5043 = -1082130432;
var uLocal_5044 = 0;
var uLocal_5045 = -1082130432;
var uLocal_5046 = 0;
var uLocal_5047 = -1082130432;
var uLocal_5048 = 0;
var uLocal_5049 = -1082130432;
var uLocal_5050 = 0;
var uLocal_5051 = -1082130432;
var uLocal_5052 = 0;
var uLocal_5053 = -1082130432;
var uLocal_5054 = 0;
var uLocal_5055 = -1082130432;
var uLocal_5056 = 0;
var uLocal_5057 = 0;
var uLocal_5058 = 0;
var uLocal_5059 = 0;
var uLocal_5060 = 0;
var uLocal_5061 = 0;
var uLocal_5062 = 0;
var uLocal_5063 = 0;
var uLocal_5064 = 0;
var uLocal_5065 = 0;
var uLocal_5066 = 0;
var uLocal_5067 = 0;
var uLocal_5068 = 0;
var uLocal_5069 = 0;
var uLocal_5070 = 0;
var uLocal_5071 = 0;
var uLocal_5072 = -1082130432;
var uLocal_5073 = -1082130432;
var uLocal_5074 = 1;
var uLocal_5075 = 1;
var uLocal_5076 = 1;
var uLocal_5077 = -1;
var uLocal_5078 = -1;
var uLocal_5079 = -1;
var *uLocal_5080 = NULL;
var uLocal_5081 = 0;
var uLocal_5082 = 0;
var uLocal_5083 = 0;
var uLocal_5084 = 2;
var uLocal_5085 = 0;
var uLocal_5086 = 0;
var uLocal_5087 = 2;
var uLocal_5088 = 0;
var uLocal_5089 = 0;
var uLocal_5090 = 20;
var uLocal_5091 = 0;
var uLocal_5092 = 0;
var uLocal_5093 = 0;
var uLocal_5094 = -1;
var uLocal_5095 = 0;
var uLocal_5096 = 0;
var uLocal_5097 = 0;
var uLocal_5098 = 0;
var uLocal_5099 = 0;
var uLocal_5100 = 0;
var uLocal_5101 = 0;
var uLocal_5102 = 0;
var uLocal_5103 = 0;
var uLocal_5104 = 0;
var uLocal_5105 = 0;
var uLocal_5106 = 0;
var uLocal_5107 = 0;
var uLocal_5108 = 0;
var uLocal_5109 = 0;
var uLocal_5110 = 0;
var uLocal_5111 = 0;
var uLocal_5112 = 0;
var uLocal_5113 = 0;
var uLocal_5114 = 0;
var uLocal_5115 = 0;
var uLocal_5116 = 0;
var uLocal_5117 = 0;
var uLocal_5118 = 0;
var uLocal_5119 = 0;
var uLocal_5120 = 0;
var uLocal_5121 = 0;
var uLocal_5122 = 0;
var uLocal_5123 = 0;
var uLocal_5124 = 1065353216;
var uLocal_5125 = 0;
var uLocal_5126 = 0;
var uLocal_5127 = 0;
var uLocal_5128 = 0;
var uLocal_5129 = 0;
var uLocal_5130 = 0;
var uLocal_5131 = 0;
var uLocal_5132 = 0;
var uLocal_5133 = 0;
var uLocal_5134 = 0;
var uLocal_5135 = 0;
var uLocal_5136 = 0;
var uLocal_5137 = 0;
var uLocal_5138 = 0;
var uLocal_5139 = 0;
var uLocal_5140 = 0;
var uLocal_5141 = 0;
var uLocal_5142 = 0;
var uLocal_5143 = 0;
var uLocal_5144 = 0;
var uLocal_5145 = 0;
var uLocal_5146 = 0;
var uLocal_5147 = 0;
var uLocal_5148 = 0;
var uLocal_5149 = 0;
var uLocal_5150 = 0;
var uLocal_5151 = -1;
var uLocal_5152 = 0;
var uLocal_5153 = 0;
var uLocal_5154 = 0;
var uLocal_5155 = 0;
var uLocal_5156 = 0;
var uLocal_5157 = 0;
var uLocal_5158 = 0;
var uLocal_5159 = 0;
var uLocal_5160 = 0;
var uLocal_5161 = 0;
var uLocal_5162 = 0;
var uLocal_5163 = 0;
var uLocal_5164 = 0;
var uLocal_5165 = 0;
var uLocal_5166 = 0;
var uLocal_5167 = 0;
var uLocal_5168 = 0;
var uLocal_5169 = 0;
var uLocal_5170 = 0;
var uLocal_5171 = 0;
var uLocal_5172 = 0;
var uLocal_5173 = 0;
var uLocal_5174 = 0;
var uLocal_5175 = 0;
var uLocal_5176 = 0;
var uLocal_5177 = 0;
var uLocal_5178 = 0;
var uLocal_5179 = 0;
var uLocal_5180 = 0;
var uLocal_5181 = 1065353216;
var uLocal_5182 = 0;
var uLocal_5183 = 0;
var uLocal_5184 = 0;
var uLocal_5185 = 0;
var uLocal_5186 = 0;
var uLocal_5187 = 0;
var uLocal_5188 = 0;
var uLocal_5189 = 0;
var uLocal_5190 = 0;
var uLocal_5191 = 0;
var uLocal_5192 = 0;
var uLocal_5193 = 0;
var uLocal_5194 = 0;
var uLocal_5195 = 0;
var uLocal_5196 = 0;
var uLocal_5197 = 0;
var uLocal_5198 = 0;
var uLocal_5199 = 0;
var uLocal_5200 = 0;
var uLocal_5201 = 0;
var uLocal_5202 = 0;
var uLocal_5203 = 0;
var uLocal_5204 = 0;
var uLocal_5205 = 0;
var uLocal_5206 = 0;
var uLocal_5207 = 0;
var uLocal_5208 = -1;
var uLocal_5209 = 0;
var uLocal_5210 = 0;
var uLocal_5211 = 0;
var uLocal_5212 = 0;
var uLocal_5213 = 0;
var uLocal_5214 = 0;
var uLocal_5215 = 0;
var uLocal_5216 = 0;
var uLocal_5217 = 0;
var uLocal_5218 = 0;
var uLocal_5219 = 0;
var uLocal_5220 = 0;
var uLocal_5221 = 0;
var uLocal_5222 = 0;
var uLocal_5223 = 0;
var uLocal_5224 = 0;
var uLocal_5225 = 0;
var uLocal_5226 = 0;
var uLocal_5227 = 0;
var uLocal_5228 = 0;
var uLocal_5229 = 0;
var uLocal_5230 = 0;
var uLocal_5231 = 0;
var uLocal_5232 = 0;
var uLocal_5233 = 0;
var uLocal_5234 = 0;
var uLocal_5235 = 0;
var uLocal_5236 = 0;
var uLocal_5237 = 0;
var uLocal_5238 = 1065353216;
var uLocal_5239 = 0;
var uLocal_5240 = 0;
var uLocal_5241 = 0;
var uLocal_5242 = 0;
var uLocal_5243 = 0;
var uLocal_5244 = 0;
var uLocal_5245 = 0;
var uLocal_5246 = 0;
var uLocal_5247 = 0;
var uLocal_5248 = 0;
var uLocal_5249 = 0;
var uLocal_5250 = 0;
var uLocal_5251 = 0;
var uLocal_5252 = 0;
var uLocal_5253 = 0;
var uLocal_5254 = 0;
var uLocal_5255 = 0;
var uLocal_5256 = 0;
var uLocal_5257 = 0;
var uLocal_5258 = 0;
var uLocal_5259 = 0;
var uLocal_5260 = 0;
var uLocal_5261 = 0;
var uLocal_5262 = 0;
var uLocal_5263 = 0;
var uLocal_5264 = 0;
var uLocal_5265 = -1;
var uLocal_5266 = 0;
var uLocal_5267 = 0;
var uLocal_5268 = 0;
var uLocal_5269 = 0;
var uLocal_5270 = 0;
var uLocal_5271 = 0;
var uLocal_5272 = 0;
var uLocal_5273 = 0;
var uLocal_5274 = 0;
var uLocal_5275 = 0;
var uLocal_5276 = 0;
var uLocal_5277 = 0;
var uLocal_5278 = 0;
var uLocal_5279 = 0;
var uLocal_5280 = 0;
var uLocal_5281 = 0;
var uLocal_5282 = 0;
var uLocal_5283 = 0;
var uLocal_5284 = 0;
var uLocal_5285 = 0;
var uLocal_5286 = 0;
var uLocal_5287 = 0;
var uLocal_5288 = 0;
var uLocal_5289 = 0;
var uLocal_5290 = 0;
var uLocal_5291 = 0;
var uLocal_5292 = 0;
var uLocal_5293 = 0;
var uLocal_5294 = 0;
var uLocal_5295 = 1065353216;
var uLocal_5296 = 0;
var uLocal_5297 = 0;
var uLocal_5298 = 0;
var uLocal_5299 = 0;
var uLocal_5300 = 0;
var uLocal_5301 = 0;
var uLocal_5302 = 0;
var uLocal_5303 = 0;
var uLocal_5304 = 0;
var uLocal_5305 = 0;
var uLocal_5306 = 0;
var uLocal_5307 = 0;
var uLocal_5308 = 0;
var uLocal_5309 = 0;
var uLocal_5310 = 0;
var uLocal_5311 = 0;
var uLocal_5312 = 0;
var uLocal_5313 = 0;
var uLocal_5314 = 0;
var uLocal_5315 = 0;
var uLocal_5316 = 0;
var uLocal_5317 = 0;
var uLocal_5318 = 0;
var uLocal_5319 = 0;
var uLocal_5320 = 0;
var uLocal_5321 = 0;
var uLocal_5322 = -1;
var uLocal_5323 = 0;
var uLocal_5324 = 0;
var uLocal_5325 = 0;
var uLocal_5326 = 0;
var uLocal_5327 = 0;
var uLocal_5328 = 0;
var uLocal_5329 = 0;
var uLocal_5330 = 0;
var uLocal_5331 = 0;
var uLocal_5332 = 0;
var uLocal_5333 = 0;
var uLocal_5334 = 0;
var uLocal_5335 = 0;
var uLocal_5336 = 0;
var uLocal_5337 = 0;
var uLocal_5338 = 0;
var uLocal_5339 = 0;
var uLocal_5340 = 0;
var uLocal_5341 = 0;
var uLocal_5342 = 0;
var uLocal_5343 = 0;
var uLocal_5344 = 0;
var uLocal_5345 = 0;
var uLocal_5346 = 0;
var uLocal_5347 = 0;
var uLocal_5348 = 0;
var uLocal_5349 = 0;
var uLocal_5350 = 0;
var uLocal_5351 = 0;
var uLocal_5352 = 1065353216;
var uLocal_5353 = 0;
var uLocal_5354 = 0;
var uLocal_5355 = 0;
var uLocal_5356 = 0;
var uLocal_5357 = 0;
var uLocal_5358 = 0;
var uLocal_5359 = 0;
var uLocal_5360 = 0;
var uLocal_5361 = 0;
var uLocal_5362 = 0;
var uLocal_5363 = 0;
var uLocal_5364 = 0;
var uLocal_5365 = 0;
var uLocal_5366 = 0;
var uLocal_5367 = 0;
var uLocal_5368 = 0;
var uLocal_5369 = 0;
var uLocal_5370 = 0;
var uLocal_5371 = 0;
var uLocal_5372 = 0;
var uLocal_5373 = 0;
var uLocal_5374 = 0;
var uLocal_5375 = 0;
var uLocal_5376 = 0;
var uLocal_5377 = 0;
var uLocal_5378 = 0;
var uLocal_5379 = -1;
var uLocal_5380 = 0;
var uLocal_5381 = 0;
var uLocal_5382 = 0;
var uLocal_5383 = 0;
var uLocal_5384 = 0;
var uLocal_5385 = 0;
var uLocal_5386 = 0;
var uLocal_5387 = 0;
var uLocal_5388 = 0;
var uLocal_5389 = 0;
var uLocal_5390 = 0;
var uLocal_5391 = 0;
var uLocal_5392 = 0;
var uLocal_5393 = 0;
var uLocal_5394 = 0;
var uLocal_5395 = 0;
var uLocal_5396 = 0;
var uLocal_5397 = 0;
var uLocal_5398 = 0;
var uLocal_5399 = 0;
var uLocal_5400 = 0;
var uLocal_5401 = 0;
var uLocal_5402 = 0;
var uLocal_5403 = 0;
var uLocal_5404 = 0;
var uLocal_5405 = 0;
var uLocal_5406 = 0;
var uLocal_5407 = 0;
var uLocal_5408 = 0;
var uLocal_5409 = 1065353216;
var uLocal_5410 = 0;
var uLocal_5411 = 0;
var uLocal_5412 = 0;
var uLocal_5413 = 0;
var uLocal_5414 = 0;
var uLocal_5415 = 0;
var uLocal_5416 = 0;
var uLocal_5417 = 0;
var uLocal_5418 = 0;
var uLocal_5419 = 0;
var uLocal_5420 = 0;
var uLocal_5421 = 0;
var uLocal_5422 = 0;
var uLocal_5423 = 0;
var uLocal_5424 = 0;
var uLocal_5425 = 0;
var uLocal_5426 = 0;
var uLocal_5427 = 0;
var uLocal_5428 = 0;
var uLocal_5429 = 0;
var uLocal_5430 = 0;
var uLocal_5431 = 0;
var uLocal_5432 = 0;
var uLocal_5433 = 0;
var uLocal_5434 = 0;
var uLocal_5435 = 0;
var uLocal_5436 = -1;
var uLocal_5437 = 0;
var uLocal_5438 = 0;
var uLocal_5439 = 0;
var uLocal_5440 = 0;
var uLocal_5441 = 0;
var uLocal_5442 = 0;
var uLocal_5443 = 0;
var uLocal_5444 = 0;
var uLocal_5445 = 0;
var uLocal_5446 = 0;
var uLocal_5447 = 0;
var uLocal_5448 = 0;
var uLocal_5449 = 0;
var uLocal_5450 = 0;
var uLocal_5451 = 0;
var uLocal_5452 = 0;
var uLocal_5453 = 0;
var uLocal_5454 = 0;
var uLocal_5455 = 0;
var uLocal_5456 = 0;
var uLocal_5457 = 0;
var uLocal_5458 = 0;
var uLocal_5459 = 0;
var uLocal_5460 = 0;
var uLocal_5461 = 0;
var uLocal_5462 = 0;
var uLocal_5463 = 0;
var uLocal_5464 = 0;
var uLocal_5465 = 0;
var uLocal_5466 = 1065353216;
var uLocal_5467 = 0;
var uLocal_5468 = 0;
var uLocal_5469 = 0;
var uLocal_5470 = 0;
var uLocal_5471 = 0;
var uLocal_5472 = 0;
var uLocal_5473 = 0;
var uLocal_5474 = 0;
var uLocal_5475 = 0;
var uLocal_5476 = 0;
var uLocal_5477 = 0;
var uLocal_5478 = 0;
var uLocal_5479 = 0;
var uLocal_5480 = 0;
var uLocal_5481 = 0;
var uLocal_5482 = 0;
var uLocal_5483 = 0;
var uLocal_5484 = 0;
var uLocal_5485 = 0;
var uLocal_5486 = 0;
var uLocal_5487 = 0;
var uLocal_5488 = 0;
var uLocal_5489 = 0;
var uLocal_5490 = 0;
var uLocal_5491 = 0;
var uLocal_5492 = 0;
var uLocal_5493 = -1;
var uLocal_5494 = 0;
var uLocal_5495 = 0;
var uLocal_5496 = 0;
var uLocal_5497 = 0;
var uLocal_5498 = 0;
var uLocal_5499 = 0;
var uLocal_5500 = 0;
var uLocal_5501 = 0;
var uLocal_5502 = 0;
var uLocal_5503 = 0;
var uLocal_5504 = 0;
var uLocal_5505 = 0;
var uLocal_5506 = 0;
var uLocal_5507 = 0;
var uLocal_5508 = 0;
var uLocal_5509 = 0;
var uLocal_5510 = 0;
var uLocal_5511 = 0;
var uLocal_5512 = 0;
var uLocal_5513 = 0;
var uLocal_5514 = 0;
var uLocal_5515 = 0;
var uLocal_5516 = 0;
var uLocal_5517 = 0;
var uLocal_5518 = 0;
var uLocal_5519 = 0;
var uLocal_5520 = 0;
var uLocal_5521 = 0;
var uLocal_5522 = 0;
var uLocal_5523 = 1065353216;
var uLocal_5524 = 0;
var uLocal_5525 = 0;
var uLocal_5526 = 0;
var uLocal_5527 = 0;
var uLocal_5528 = 0;
var uLocal_5529 = 0;
var uLocal_5530 = 0;
var uLocal_5531 = 0;
var uLocal_5532 = 0;
var uLocal_5533 = 0;
var uLocal_5534 = 0;
var uLocal_5535 = 0;
var uLocal_5536 = 0;
var uLocal_5537 = 0;
var uLocal_5538 = 0;
var uLocal_5539 = 0;
var uLocal_5540 = 0;
var uLocal_5541 = 0;
var uLocal_5542 = 0;
var uLocal_5543 = 0;
var uLocal_5544 = 0;
var uLocal_5545 = 0;
var uLocal_5546 = 0;
var uLocal_5547 = 0;
var uLocal_5548 = 0;
var uLocal_5549 = 0;
var uLocal_5550 = -1;
var uLocal_5551 = 0;
var uLocal_5552 = 0;
var uLocal_5553 = 0;
var uLocal_5554 = 0;
var uLocal_5555 = 0;
var uLocal_5556 = 0;
var uLocal_5557 = 0;
var uLocal_5558 = 0;
var uLocal_5559 = 0;
var uLocal_5560 = 0;
var uLocal_5561 = 0;
var uLocal_5562 = 0;
var uLocal_5563 = 0;
var uLocal_5564 = 0;
var uLocal_5565 = 0;
var uLocal_5566 = 0;
var uLocal_5567 = 0;
var uLocal_5568 = 0;
var uLocal_5569 = 0;
var uLocal_5570 = 0;
var uLocal_5571 = 0;
var uLocal_5572 = 0;
var uLocal_5573 = 0;
var uLocal_5574 = 0;
var uLocal_5575 = 0;
var uLocal_5576 = 0;
var uLocal_5577 = 0;
var uLocal_5578 = 0;
var uLocal_5579 = 0;
var uLocal_5580 = 1065353216;
var uLocal_5581 = 0;
var uLocal_5582 = 0;
var uLocal_5583 = 0;
var uLocal_5584 = 0;
var uLocal_5585 = 0;
var uLocal_5586 = 0;
var uLocal_5587 = 0;
var uLocal_5588 = 0;
var uLocal_5589 = 0;
var uLocal_5590 = 0;
var uLocal_5591 = 0;
var uLocal_5592 = 0;
var uLocal_5593 = 0;
var uLocal_5594 = 0;
var uLocal_5595 = 0;
var uLocal_5596 = 0;
var uLocal_5597 = 0;
var uLocal_5598 = 0;
var uLocal_5599 = 0;
var uLocal_5600 = 0;
var uLocal_5601 = 0;
var uLocal_5602 = 0;
var uLocal_5603 = 0;
var uLocal_5604 = 0;
var uLocal_5605 = 0;
var uLocal_5606 = 0;
var uLocal_5607 = -1;
var uLocal_5608 = 0;
var uLocal_5609 = 0;
var uLocal_5610 = 0;
var uLocal_5611 = 0;
var uLocal_5612 = 0;
var uLocal_5613 = 0;
var uLocal_5614 = 0;
var uLocal_5615 = 0;
var uLocal_5616 = 0;
var uLocal_5617 = 0;
var uLocal_5618 = 0;
var uLocal_5619 = 0;
var uLocal_5620 = 0;
var uLocal_5621 = 0;
var uLocal_5622 = 0;
var uLocal_5623 = 0;
var uLocal_5624 = 0;
var uLocal_5625 = 0;
var uLocal_5626 = 0;
var uLocal_5627 = 0;
var uLocal_5628 = 0;
var uLocal_5629 = 0;
var uLocal_5630 = 0;
var uLocal_5631 = 0;
var uLocal_5632 = 0;
var uLocal_5633 = 0;
var uLocal_5634 = 0;
var uLocal_5635 = 0;
var uLocal_5636 = 0;
var uLocal_5637 = 1065353216;
var uLocal_5638 = 0;
var uLocal_5639 = 0;
var uLocal_5640 = 0;
var uLocal_5641 = 0;
var uLocal_5642 = 0;
var uLocal_5643 = 0;
var uLocal_5644 = 0;
var uLocal_5645 = 0;
var uLocal_5646 = 0;
var uLocal_5647 = 0;
var uLocal_5648 = 0;
var uLocal_5649 = 0;
var uLocal_5650 = 0;
var uLocal_5651 = 0;
var uLocal_5652 = 0;
var uLocal_5653 = 0;
var uLocal_5654 = 0;
var uLocal_5655 = 0;
var uLocal_5656 = 0;
var uLocal_5657 = 0;
var uLocal_5658 = 0;
var uLocal_5659 = 0;
var uLocal_5660 = 0;
var uLocal_5661 = 0;
var uLocal_5662 = 0;
var uLocal_5663 = 0;
var uLocal_5664 = -1;
var uLocal_5665 = 0;
var uLocal_5666 = 0;
var uLocal_5667 = 0;
var uLocal_5668 = 0;
var uLocal_5669 = 0;
var uLocal_5670 = 0;
var uLocal_5671 = 0;
var uLocal_5672 = 0;
var uLocal_5673 = 0;
var uLocal_5674 = 0;
var uLocal_5675 = 0;
var uLocal_5676 = 0;
var uLocal_5677 = 0;
var uLocal_5678 = 0;
var uLocal_5679 = 0;
var uLocal_5680 = 0;
var uLocal_5681 = 0;
var uLocal_5682 = 0;
var uLocal_5683 = 0;
var uLocal_5684 = 0;
var uLocal_5685 = 0;
var uLocal_5686 = 0;
var uLocal_5687 = 0;
var uLocal_5688 = 0;
var uLocal_5689 = 0;
var uLocal_5690 = 0;
var uLocal_5691 = 0;
var uLocal_5692 = 0;
var uLocal_5693 = 0;
var uLocal_5694 = 1065353216;
var uLocal_5695 = 0;
var uLocal_5696 = 0;
var uLocal_5697 = 0;
var uLocal_5698 = 0;
var uLocal_5699 = 0;
var uLocal_5700 = 0;
var uLocal_5701 = 0;
var uLocal_5702 = 0;
var uLocal_5703 = 0;
var uLocal_5704 = 0;
var uLocal_5705 = 0;
var uLocal_5706 = 0;
var uLocal_5707 = 0;
var uLocal_5708 = 0;
var uLocal_5709 = 0;
var uLocal_5710 = 0;
var uLocal_5711 = 0;
var uLocal_5712 = 0;
var uLocal_5713 = 0;
var uLocal_5714 = 0;
var uLocal_5715 = 0;
var uLocal_5716 = 0;
var uLocal_5717 = 0;
var uLocal_5718 = 0;
var uLocal_5719 = 0;
var uLocal_5720 = 0;
var uLocal_5721 = -1;
var uLocal_5722 = 0;
var uLocal_5723 = 0;
var uLocal_5724 = 0;
var uLocal_5725 = 0;
var uLocal_5726 = 0;
var uLocal_5727 = 0;
var uLocal_5728 = 0;
var uLocal_5729 = 0;
var uLocal_5730 = 0;
var uLocal_5731 = 0;
var uLocal_5732 = 0;
var uLocal_5733 = 0;
var uLocal_5734 = 0;
var uLocal_5735 = 0;
var uLocal_5736 = 0;
var uLocal_5737 = 0;
var uLocal_5738 = 0;
var uLocal_5739 = 0;
var uLocal_5740 = 0;
var uLocal_5741 = 0;
var uLocal_5742 = 0;
var uLocal_5743 = 0;
var uLocal_5744 = 0;
var uLocal_5745 = 0;
var uLocal_5746 = 0;
var uLocal_5747 = 0;
var uLocal_5748 = 0;
var uLocal_5749 = 0;
var uLocal_5750 = 0;
var uLocal_5751 = 1065353216;
var uLocal_5752 = 0;
var uLocal_5753 = 0;
var uLocal_5754 = 0;
var uLocal_5755 = 0;
var uLocal_5756 = 0;
var uLocal_5757 = 0;
var uLocal_5758 = 0;
var uLocal_5759 = 0;
var uLocal_5760 = 0;
var uLocal_5761 = 0;
var uLocal_5762 = 0;
var uLocal_5763 = 0;
var uLocal_5764 = 0;
var uLocal_5765 = 0;
var uLocal_5766 = 0;
var uLocal_5767 = 0;
var uLocal_5768 = 0;
var uLocal_5769 = 0;
var uLocal_5770 = 0;
var uLocal_5771 = 0;
var uLocal_5772 = 0;
var uLocal_5773 = 0;
var uLocal_5774 = 0;
var uLocal_5775 = 0;
var uLocal_5776 = 0;
var uLocal_5777 = 0;
var uLocal_5778 = -1;
var uLocal_5779 = 0;
var uLocal_5780 = 0;
var uLocal_5781 = 0;
var uLocal_5782 = 0;
var uLocal_5783 = 0;
var uLocal_5784 = 0;
var uLocal_5785 = 0;
var uLocal_5786 = 0;
var uLocal_5787 = 0;
var uLocal_5788 = 0;
var uLocal_5789 = 0;
var uLocal_5790 = 0;
var uLocal_5791 = 0;
var uLocal_5792 = 0;
var uLocal_5793 = 0;
var uLocal_5794 = 0;
var uLocal_5795 = 0;
var uLocal_5796 = 0;
var uLocal_5797 = 0;
var uLocal_5798 = 0;
var uLocal_5799 = 0;
var uLocal_5800 = 0;
var uLocal_5801 = 0;
var uLocal_5802 = 0;
var uLocal_5803 = 0;
var uLocal_5804 = 0;
var uLocal_5805 = 0;
var uLocal_5806 = 0;
var uLocal_5807 = 0;
var uLocal_5808 = 1065353216;
var uLocal_5809 = 0;
var uLocal_5810 = 0;
var uLocal_5811 = 0;
var uLocal_5812 = 0;
var uLocal_5813 = 0;
var uLocal_5814 = 0;
var uLocal_5815 = 0;
var uLocal_5816 = 0;
var uLocal_5817 = 0;
var uLocal_5818 = 0;
var uLocal_5819 = 0;
var uLocal_5820 = 0;
var uLocal_5821 = 0;
var uLocal_5822 = 0;
var uLocal_5823 = 0;
var uLocal_5824 = 0;
var uLocal_5825 = 0;
var uLocal_5826 = 0;
var uLocal_5827 = 0;
var uLocal_5828 = 0;
var uLocal_5829 = 0;
var uLocal_5830 = 0;
var uLocal_5831 = 0;
var uLocal_5832 = 0;
var uLocal_5833 = 0;
var uLocal_5834 = 0;
var uLocal_5835 = -1;
var uLocal_5836 = 0;
var uLocal_5837 = 0;
var uLocal_5838 = 0;
var uLocal_5839 = 0;
var uLocal_5840 = 0;
var uLocal_5841 = 0;
var uLocal_5842 = 0;
var uLocal_5843 = 0;
var uLocal_5844 = 0;
var uLocal_5845 = 0;
var uLocal_5846 = 0;
var uLocal_5847 = 0;
var uLocal_5848 = 0;
var uLocal_5849 = 0;
var uLocal_5850 = 0;
var uLocal_5851 = 0;
var uLocal_5852 = 0;
var uLocal_5853 = 0;
var uLocal_5854 = 0;
var uLocal_5855 = 0;
var uLocal_5856 = 0;
var uLocal_5857 = 0;
var uLocal_5858 = 0;
var uLocal_5859 = 0;
var uLocal_5860 = 0;
var uLocal_5861 = 0;
var uLocal_5862 = 0;
var uLocal_5863 = 0;
var uLocal_5864 = 0;
var uLocal_5865 = 1065353216;
var uLocal_5866 = 0;
var uLocal_5867 = 0;
var uLocal_5868 = 0;
var uLocal_5869 = 0;
var uLocal_5870 = 0;
var uLocal_5871 = 0;
var uLocal_5872 = 0;
var uLocal_5873 = 0;
var uLocal_5874 = 0;
var uLocal_5875 = 0;
var uLocal_5876 = 0;
var uLocal_5877 = 0;
var uLocal_5878 = 0;
var uLocal_5879 = 0;
var uLocal_5880 = 0;
var uLocal_5881 = 0;
var uLocal_5882 = 0;
var uLocal_5883 = 0;
var uLocal_5884 = 0;
var uLocal_5885 = 0;
var uLocal_5886 = 0;
var uLocal_5887 = 0;
var uLocal_5888 = 0;
var uLocal_5889 = 0;
var uLocal_5890 = 0;
var uLocal_5891 = 0;
var uLocal_5892 = -1;
var uLocal_5893 = 0;
var uLocal_5894 = 0;
var uLocal_5895 = 0;
var uLocal_5896 = 0;
var uLocal_5897 = 0;
var uLocal_5898 = 0;
var uLocal_5899 = 0;
var uLocal_5900 = 0;
var uLocal_5901 = 0;
var uLocal_5902 = 0;
var uLocal_5903 = 0;
var uLocal_5904 = 0;
var uLocal_5905 = 0;
var uLocal_5906 = 0;
var uLocal_5907 = 0;
var uLocal_5908 = 0;
var uLocal_5909 = 0;
var uLocal_5910 = 0;
var uLocal_5911 = 0;
var uLocal_5912 = 0;
var uLocal_5913 = 0;
var uLocal_5914 = 0;
var uLocal_5915 = 0;
var uLocal_5916 = 0;
var uLocal_5917 = 0;
var uLocal_5918 = 0;
var uLocal_5919 = 0;
var uLocal_5920 = 0;
var uLocal_5921 = 0;
var uLocal_5922 = 1065353216;
var uLocal_5923 = 0;
var uLocal_5924 = 0;
var uLocal_5925 = 0;
var uLocal_5926 = 0;
var uLocal_5927 = 0;
var uLocal_5928 = 0;
var uLocal_5929 = 0;
var uLocal_5930 = 0;
var uLocal_5931 = 0;
var uLocal_5932 = 0;
var uLocal_5933 = 0;
var uLocal_5934 = 0;
var uLocal_5935 = 0;
var uLocal_5936 = 0;
var uLocal_5937 = 0;
var uLocal_5938 = 0;
var uLocal_5939 = 0;
var uLocal_5940 = 0;
var uLocal_5941 = 0;
var uLocal_5942 = 0;
var uLocal_5943 = 0;
var uLocal_5944 = 0;
var uLocal_5945 = 0;
var uLocal_5946 = 0;
var uLocal_5947 = 0;
var uLocal_5948 = 0;
var uLocal_5949 = -1;
var uLocal_5950 = 0;
var uLocal_5951 = 0;
var uLocal_5952 = 0;
var uLocal_5953 = 0;
var uLocal_5954 = 0;
var uLocal_5955 = 0;
var uLocal_5956 = 0;
var uLocal_5957 = 0;
var uLocal_5958 = 0;
var uLocal_5959 = 0;
var uLocal_5960 = 0;
var uLocal_5961 = 0;
var uLocal_5962 = 0;
var uLocal_5963 = 0;
var uLocal_5964 = 0;
var uLocal_5965 = 0;
var uLocal_5966 = 0;
var uLocal_5967 = 0;
var uLocal_5968 = 0;
var uLocal_5969 = 0;
var uLocal_5970 = 0;
var uLocal_5971 = 0;
var uLocal_5972 = 0;
var uLocal_5973 = 0;
var uLocal_5974 = 0;
var uLocal_5975 = 0;
var uLocal_5976 = 0;
var uLocal_5977 = 0;
var uLocal_5978 = 0;
var uLocal_5979 = 1065353216;
var uLocal_5980 = 0;
var uLocal_5981 = 0;
var uLocal_5982 = 0;
var uLocal_5983 = 0;
var uLocal_5984 = 0;
var uLocal_5985 = 0;
var uLocal_5986 = 0;
var uLocal_5987 = 0;
var uLocal_5988 = 0;
var uLocal_5989 = 0;
var uLocal_5990 = 0;
var uLocal_5991 = 0;
var uLocal_5992 = 0;
var uLocal_5993 = 0;
var uLocal_5994 = 0;
var uLocal_5995 = 0;
var uLocal_5996 = 0;
var uLocal_5997 = 0;
var uLocal_5998 = 0;
var uLocal_5999 = 0;
var uLocal_6000 = 0;
var uLocal_6001 = 0;
var uLocal_6002 = 0;
var uLocal_6003 = 0;
var uLocal_6004 = 0;
var uLocal_6005 = 0;
var uLocal_6006 = -1;
var uLocal_6007 = 0;
var uLocal_6008 = 0;
var uLocal_6009 = 0;
var uLocal_6010 = 0;
var uLocal_6011 = 0;
var uLocal_6012 = 0;
var uLocal_6013 = 0;
var uLocal_6014 = 0;
var uLocal_6015 = 0;
var uLocal_6016 = 0;
var uLocal_6017 = 0;
var uLocal_6018 = 0;
var uLocal_6019 = 0;
var uLocal_6020 = 0;
var uLocal_6021 = 0;
var uLocal_6022 = 0;
var uLocal_6023 = 0;
var uLocal_6024 = 0;
var uLocal_6025 = 0;
var uLocal_6026 = 0;
var uLocal_6027 = 0;
var uLocal_6028 = 0;
var uLocal_6029 = 0;
var uLocal_6030 = 0;
var uLocal_6031 = 0;
var uLocal_6032 = 0;
var uLocal_6033 = 0;
var uLocal_6034 = 0;
var uLocal_6035 = 0;
var uLocal_6036 = 1065353216;
var uLocal_6037 = 0;
var uLocal_6038 = 0;
var uLocal_6039 = 0;
var uLocal_6040 = 0;
var uLocal_6041 = 0;
var uLocal_6042 = 0;
var uLocal_6043 = 0;
var uLocal_6044 = 0;
var uLocal_6045 = 0;
var uLocal_6046 = 0;
var uLocal_6047 = 0;
var uLocal_6048 = 0;
var uLocal_6049 = 0;
var uLocal_6050 = 0;
var uLocal_6051 = 0;
var uLocal_6052 = 0;
var uLocal_6053 = 0;
var uLocal_6054 = 0;
var uLocal_6055 = 0;
var uLocal_6056 = 0;
var uLocal_6057 = 0;
var uLocal_6058 = 0;
var uLocal_6059 = 0;
var uLocal_6060 = 0;
var uLocal_6061 = 0;
var uLocal_6062 = 0;
var uLocal_6063 = -1;
var uLocal_6064 = 0;
var uLocal_6065 = 0;
var uLocal_6066 = 0;
var uLocal_6067 = 0;
var uLocal_6068 = 0;
var uLocal_6069 = 0;
var uLocal_6070 = 0;
var uLocal_6071 = 0;
var uLocal_6072 = 0;
var uLocal_6073 = 0;
var uLocal_6074 = 0;
var uLocal_6075 = 0;
var uLocal_6076 = 0;
var uLocal_6077 = 0;
var uLocal_6078 = 0;
var uLocal_6079 = 0;
var uLocal_6080 = 0;
var uLocal_6081 = 0;
var uLocal_6082 = 0;
var uLocal_6083 = 0;
var uLocal_6084 = 0;
var uLocal_6085 = 0;
var uLocal_6086 = 0;
var uLocal_6087 = 0;
var uLocal_6088 = 0;
var uLocal_6089 = 0;
var uLocal_6090 = 0;
var uLocal_6091 = 0;
var uLocal_6092 = 0;
var uLocal_6093 = 1065353216;
var uLocal_6094 = 0;
var uLocal_6095 = 0;
var uLocal_6096 = 0;
var uLocal_6097 = 0;
var uLocal_6098 = 0;
var uLocal_6099 = 0;
var uLocal_6100 = 0;
var uLocal_6101 = 0;
var uLocal_6102 = 0;
var uLocal_6103 = 0;
var uLocal_6104 = 0;
var uLocal_6105 = 0;
var uLocal_6106 = 0;
var uLocal_6107 = 0;
var uLocal_6108 = 0;
var uLocal_6109 = 0;
var uLocal_6110 = 0;
var uLocal_6111 = 0;
var uLocal_6112 = 0;
var uLocal_6113 = 0;
var uLocal_6114 = 0;
var uLocal_6115 = 0;
var uLocal_6116 = 0;
var uLocal_6117 = 0;
var uLocal_6118 = 0;
var uLocal_6119 = 0;
var uLocal_6120 = -1;
var uLocal_6121 = 0;
var uLocal_6122 = 0;
var uLocal_6123 = 0;
var uLocal_6124 = 0;
var uLocal_6125 = 0;
var uLocal_6126 = 0;
var uLocal_6127 = 0;
var uLocal_6128 = 0;
var uLocal_6129 = 0;
var uLocal_6130 = 0;
var uLocal_6131 = 0;
var uLocal_6132 = 0;
var uLocal_6133 = 0;
var uLocal_6134 = 0;
var uLocal_6135 = 0;
var uLocal_6136 = 0;
var uLocal_6137 = 0;
var uLocal_6138 = 0;
var uLocal_6139 = 0;
var uLocal_6140 = 0;
var uLocal_6141 = 0;
var uLocal_6142 = 0;
var uLocal_6143 = 0;
var uLocal_6144 = 0;
var uLocal_6145 = 0;
var uLocal_6146 = 0;
var uLocal_6147 = 0;
var uLocal_6148 = 0;
var uLocal_6149 = 0;
var uLocal_6150 = 1065353216;
var uLocal_6151 = 0;
var uLocal_6152 = 0;
var uLocal_6153 = 0;
var uLocal_6154 = 0;
var uLocal_6155 = 0;
var uLocal_6156 = 0;
var uLocal_6157 = 0;
var uLocal_6158 = 0;
var uLocal_6159 = 0;
var uLocal_6160 = 0;
var uLocal_6161 = 0;
var uLocal_6162 = 0;
var uLocal_6163 = 0;
var uLocal_6164 = 0;
var uLocal_6165 = 0;
var uLocal_6166 = 0;
var uLocal_6167 = 0;
var uLocal_6168 = 0;
var uLocal_6169 = 0;
var uLocal_6170 = 0;
var uLocal_6171 = 0;
var uLocal_6172 = 0;
var uLocal_6173 = 0;
var uLocal_6174 = 0;
var uLocal_6175 = 0;
var uLocal_6176 = 0;
var uLocal_6177 = -1;
var uLocal_6178 = 0;
var uLocal_6179 = 0;
var uLocal_6180 = 0;
var uLocal_6181 = 0;
var uLocal_6182 = 0;
var uLocal_6183 = 0;
var uLocal_6184 = 0;
var uLocal_6185 = 0;
var uLocal_6186 = 0;
var uLocal_6187 = 0;
var uLocal_6188 = 0;
var uLocal_6189 = 0;
var uLocal_6190 = 0;
var uLocal_6191 = 0;
var uLocal_6192 = 0;
var uLocal_6193 = 0;
var uLocal_6194 = 0;
var uLocal_6195 = 0;
var uLocal_6196 = 0;
var uLocal_6197 = 0;
var uLocal_6198 = 0;
var uLocal_6199 = 0;
var uLocal_6200 = 0;
var uLocal_6201 = 0;
var uLocal_6202 = 0;
var uLocal_6203 = 0;
var uLocal_6204 = 0;
var uLocal_6205 = 0;
var uLocal_6206 = 0;
var uLocal_6207 = 1065353216;
var uLocal_6208 = 0;
var uLocal_6209 = 0;
var uLocal_6210 = 0;
var uLocal_6211 = 0;
var uLocal_6212 = 0;
var uLocal_6213 = 0;
var uLocal_6214 = 0;
var uLocal_6215 = 0;
var uLocal_6216 = 0;
var uLocal_6217 = 0;
var uLocal_6218 = 0;
var uLocal_6219 = 0;
var uLocal_6220 = 0;
var uLocal_6221 = 0;
var uLocal_6222 = 0;
var uLocal_6223 = 0;
var uLocal_6224 = 0;
var uLocal_6225 = 0;
var uLocal_6226 = 0;
var uLocal_6227 = 0;
var uLocal_6228 = 0;
var uLocal_6229 = 0;
var uLocal_6230 = 0;
var uLocal_6231 = 16;
var uLocal_6232 = 0;
var uLocal_6233 = -1082130432;
var uLocal_6234 = 0;
var uLocal_6235 = -1082130432;
var uLocal_6236 = 0;
var uLocal_6237 = -1082130432;
var uLocal_6238 = 0;
var uLocal_6239 = -1082130432;
var uLocal_6240 = 0;
var uLocal_6241 = -1082130432;
var uLocal_6242 = 0;
var uLocal_6243 = -1082130432;
var uLocal_6244 = 0;
var uLocal_6245 = -1082130432;
var uLocal_6246 = 0;
var uLocal_6247 = -1082130432;
var uLocal_6248 = 0;
var uLocal_6249 = -1082130432;
var uLocal_6250 = 0;
var uLocal_6251 = -1082130432;
var uLocal_6252 = 0;
var uLocal_6253 = -1082130432;
var uLocal_6254 = 0;
var uLocal_6255 = -1082130432;
var uLocal_6256 = 0;
var uLocal_6257 = -1082130432;
var uLocal_6258 = 0;
var uLocal_6259 = -1082130432;
var uLocal_6260 = 0;
var uLocal_6261 = -1082130432;
var uLocal_6262 = 0;
var uLocal_6263 = -1082130432;
var uLocal_6264 = 16;
var uLocal_6265 = 0;
var uLocal_6266 = -1082130432;
var uLocal_6267 = 0;
var uLocal_6268 = -1082130432;
var uLocal_6269 = 0;
var uLocal_6270 = -1082130432;
var uLocal_6271 = 0;
var uLocal_6272 = -1082130432;
var uLocal_6273 = 0;
var uLocal_6274 = -1082130432;
var uLocal_6275 = 0;
var uLocal_6276 = -1082130432;
var uLocal_6277 = 0;
var uLocal_6278 = -1082130432;
var uLocal_6279 = 0;
var uLocal_6280 = -1082130432;
var uLocal_6281 = 0;
var uLocal_6282 = -1082130432;
var uLocal_6283 = 0;
var uLocal_6284 = -1082130432;
var uLocal_6285 = 0;
var uLocal_6286 = -1082130432;
var uLocal_6287 = 0;
var uLocal_6288 = -1082130432;
var uLocal_6289 = 0;
var uLocal_6290 = -1082130432;
var uLocal_6291 = 0;
var uLocal_6292 = -1082130432;
var uLocal_6293 = 0;
var uLocal_6294 = -1082130432;
var uLocal_6295 = 0;
var uLocal_6296 = -1082130432;
var uLocal_6297 = 0;
var uLocal_6298 = 0;
var uLocal_6299 = 0;
var uLocal_6300 = 0;
var uLocal_6301 = 0;
var uLocal_6302 = 0;
var uLocal_6303 = 0;
var uLocal_6304 = 0;
var uLocal_6305 = 0;
var uLocal_6306 = 0;
var uLocal_6307 = 0;
var uLocal_6308 = 0;
var uLocal_6309 = 0;
var uLocal_6310 = 0;
var uLocal_6311 = 0;
var uLocal_6312 = 0;
var uLocal_6313 = -1082130432;
var uLocal_6314 = -1082130432;
var uLocal_6315 = 1;
var uLocal_6316 = 1;
var uLocal_6317 = 1;
var uLocal_6318 = -1;
var uLocal_6319 = -1;
var uLocal_6320 = -1;
var *uLocal_6321 = NULL;
var uLocal_6322 = 0;
var uLocal_6323 = 0;
var uLocal_6324 = 0;
var uLocal_6325 = 2;
var uLocal_6326 = 0;
var uLocal_6327 = 0;
var uLocal_6328 = 2;
var uLocal_6329 = 0;
var uLocal_6330 = 0;
var uLocal_6331 = 20;
var uLocal_6332 = 0;
var uLocal_6333 = 0;
var uLocal_6334 = 0;
var uLocal_6335 = -1;
var uLocal_6336 = 0;
var uLocal_6337 = 0;
var uLocal_6338 = 0;
var uLocal_6339 = 0;
var uLocal_6340 = 0;
var uLocal_6341 = 0;
var uLocal_6342 = 0;
var uLocal_6343 = 0;
var uLocal_6344 = 0;
var uLocal_6345 = 0;
var uLocal_6346 = 0;
var uLocal_6347 = 0;
var uLocal_6348 = 0;
var uLocal_6349 = 0;
var uLocal_6350 = 0;
var uLocal_6351 = 0;
var uLocal_6352 = 0;
var uLocal_6353 = 0;
var uLocal_6354 = 0;
var uLocal_6355 = 0;
var uLocal_6356 = 0;
var uLocal_6357 = 0;
var uLocal_6358 = 0;
var uLocal_6359 = 0;
var uLocal_6360 = 0;
var uLocal_6361 = 0;
var uLocal_6362 = 0;
var uLocal_6363 = 0;
var uLocal_6364 = 0;
var uLocal_6365 = 1065353216;
var uLocal_6366 = 0;
var uLocal_6367 = 0;
var uLocal_6368 = 0;
var uLocal_6369 = 0;
var uLocal_6370 = 0;
var uLocal_6371 = 0;
var uLocal_6372 = 0;
var uLocal_6373 = 0;
var uLocal_6374 = 0;
var uLocal_6375 = 0;
var uLocal_6376 = 0;
var uLocal_6377 = 0;
var uLocal_6378 = 0;
var uLocal_6379 = 0;
var uLocal_6380 = 0;
var uLocal_6381 = 0;
var uLocal_6382 = 0;
var uLocal_6383 = 0;
var uLocal_6384 = 0;
var uLocal_6385 = 0;
var uLocal_6386 = 0;
var uLocal_6387 = 0;
var uLocal_6388 = 0;
var uLocal_6389 = 0;
var uLocal_6390 = 0;
var uLocal_6391 = 0;
var uLocal_6392 = -1;
var uLocal_6393 = 0;
var uLocal_6394 = 0;
var uLocal_6395 = 0;
var uLocal_6396 = 0;
var uLocal_6397 = 0;
var uLocal_6398 = 0;
var uLocal_6399 = 0;
var uLocal_6400 = 0;
var uLocal_6401 = 0;
var uLocal_6402 = 0;
var uLocal_6403 = 0;
var uLocal_6404 = 0;
var uLocal_6405 = 0;
var uLocal_6406 = 0;
var uLocal_6407 = 0;
var uLocal_6408 = 0;
var uLocal_6409 = 0;
var uLocal_6410 = 0;
var uLocal_6411 = 0;
var uLocal_6412 = 0;
var uLocal_6413 = 0;
var uLocal_6414 = 0;
var uLocal_6415 = 0;
var uLocal_6416 = 0;
var uLocal_6417 = 0;
var uLocal_6418 = 0;
var uLocal_6419 = 0;
var uLocal_6420 = 0;
var uLocal_6421 = 0;
var uLocal_6422 = 1065353216;
var uLocal_6423 = 0;
var uLocal_6424 = 0;
var uLocal_6425 = 0;
var uLocal_6426 = 0;
var uLocal_6427 = 0;
var uLocal_6428 = 0;
var uLocal_6429 = 0;
var uLocal_6430 = 0;
var uLocal_6431 = 0;
var uLocal_6432 = 0;
var uLocal_6433 = 0;
var uLocal_6434 = 0;
var uLocal_6435 = 0;
var uLocal_6436 = 0;
var uLocal_6437 = 0;
var uLocal_6438 = 0;
var uLocal_6439 = 0;
var uLocal_6440 = 0;
var uLocal_6441 = 0;
var uLocal_6442 = 0;
var uLocal_6443 = 0;
var uLocal_6444 = 0;
var uLocal_6445 = 0;
var uLocal_6446 = 0;
var uLocal_6447 = 0;
var uLocal_6448 = 0;
var uLocal_6449 = -1;
var uLocal_6450 = 0;
var uLocal_6451 = 0;
var uLocal_6452 = 0;
var uLocal_6453 = 0;
var uLocal_6454 = 0;
var uLocal_6455 = 0;
var uLocal_6456 = 0;
var uLocal_6457 = 0;
var uLocal_6458 = 0;
var uLocal_6459 = 0;
var uLocal_6460 = 0;
var uLocal_6461 = 0;
var uLocal_6462 = 0;
var uLocal_6463 = 0;
var uLocal_6464 = 0;
var uLocal_6465 = 0;
var uLocal_6466 = 0;
var uLocal_6467 = 0;
var uLocal_6468 = 0;
var uLocal_6469 = 0;
var uLocal_6470 = 0;
var uLocal_6471 = 0;
var uLocal_6472 = 0;
var uLocal_6473 = 0;
var uLocal_6474 = 0;
var uLocal_6475 = 0;
var uLocal_6476 = 0;
var uLocal_6477 = 0;
var uLocal_6478 = 0;
var uLocal_6479 = 1065353216;
var uLocal_6480 = 0;
var uLocal_6481 = 0;
var uLocal_6482 = 0;
var uLocal_6483 = 0;
var uLocal_6484 = 0;
var uLocal_6485 = 0;
var uLocal_6486 = 0;
var uLocal_6487 = 0;
var uLocal_6488 = 0;
var uLocal_6489 = 0;
var uLocal_6490 = 0;
var uLocal_6491 = 0;
var uLocal_6492 = 0;
var uLocal_6493 = 0;
var uLocal_6494 = 0;
var uLocal_6495 = 0;
var uLocal_6496 = 0;
var uLocal_6497 = 0;
var uLocal_6498 = 0;
var uLocal_6499 = 0;
var uLocal_6500 = 0;
var uLocal_6501 = 0;
var uLocal_6502 = 0;
var uLocal_6503 = 0;
var uLocal_6504 = 0;
var uLocal_6505 = 0;
var uLocal_6506 = -1;
var uLocal_6507 = 0;
var uLocal_6508 = 0;
var uLocal_6509 = 0;
var uLocal_6510 = 0;
var uLocal_6511 = 0;
var uLocal_6512 = 0;
var uLocal_6513 = 0;
var uLocal_6514 = 0;
var uLocal_6515 = 0;
var uLocal_6516 = 0;
var uLocal_6517 = 0;
var uLocal_6518 = 0;
var uLocal_6519 = 0;
var uLocal_6520 = 0;
var uLocal_6521 = 0;
var uLocal_6522 = 0;
var uLocal_6523 = 0;
var uLocal_6524 = 0;
var uLocal_6525 = 0;
var uLocal_6526 = 0;
var uLocal_6527 = 0;
var uLocal_6528 = 0;
var uLocal_6529 = 0;
var uLocal_6530 = 0;
var uLocal_6531 = 0;
var uLocal_6532 = 0;
var uLocal_6533 = 0;
var uLocal_6534 = 0;
var uLocal_6535 = 0;
var uLocal_6536 = 1065353216;
var uLocal_6537 = 0;
var uLocal_6538 = 0;
var uLocal_6539 = 0;
var uLocal_6540 = 0;
var uLocal_6541 = 0;
var uLocal_6542 = 0;
var uLocal_6543 = 0;
var uLocal_6544 = 0;
var uLocal_6545 = 0;
var uLocal_6546 = 0;
var uLocal_6547 = 0;
var uLocal_6548 = 0;
var uLocal_6549 = 0;
var uLocal_6550 = 0;
var uLocal_6551 = 0;
var uLocal_6552 = 0;
var uLocal_6553 = 0;
var uLocal_6554 = 0;
var uLocal_6555 = 0;
var uLocal_6556 = 0;
var uLocal_6557 = 0;
var uLocal_6558 = 0;
var uLocal_6559 = 0;
var uLocal_6560 = 0;
var uLocal_6561 = 0;
var uLocal_6562 = 0;
var uLocal_6563 = -1;
var uLocal_6564 = 0;
var uLocal_6565 = 0;
var uLocal_6566 = 0;
var uLocal_6567 = 0;
var uLocal_6568 = 0;
var uLocal_6569 = 0;
var uLocal_6570 = 0;
var uLocal_6571 = 0;
var uLocal_6572 = 0;
var uLocal_6573 = 0;
var uLocal_6574 = 0;
var uLocal_6575 = 0;
var uLocal_6576 = 0;
var uLocal_6577 = 0;
var uLocal_6578 = 0;
var uLocal_6579 = 0;
var uLocal_6580 = 0;
var uLocal_6581 = 0;
var uLocal_6582 = 0;
var uLocal_6583 = 0;
var uLocal_6584 = 0;
var uLocal_6585 = 0;
var uLocal_6586 = 0;
var uLocal_6587 = 0;
var uLocal_6588 = 0;
var uLocal_6589 = 0;
var uLocal_6590 = 0;
var uLocal_6591 = 0;
var uLocal_6592 = 0;
var uLocal_6593 = 1065353216;
var uLocal_6594 = 0;
var uLocal_6595 = 0;
var uLocal_6596 = 0;
var uLocal_6597 = 0;
var uLocal_6598 = 0;
var uLocal_6599 = 0;
var uLocal_6600 = 0;
var uLocal_6601 = 0;
var uLocal_6602 = 0;
var uLocal_6603 = 0;
var uLocal_6604 = 0;
var uLocal_6605 = 0;
var uLocal_6606 = 0;
var uLocal_6607 = 0;
var uLocal_6608 = 0;
var uLocal_6609 = 0;
var uLocal_6610 = 0;
var uLocal_6611 = 0;
var uLocal_6612 = 0;
var uLocal_6613 = 0;
var uLocal_6614 = 0;
var uLocal_6615 = 0;
var uLocal_6616 = 0;
var uLocal_6617 = 0;
var uLocal_6618 = 0;
var uLocal_6619 = 0;
var uLocal_6620 = -1;
var uLocal_6621 = 0;
var uLocal_6622 = 0;
var uLocal_6623 = 0;
var uLocal_6624 = 0;
var uLocal_6625 = 0;
var uLocal_6626 = 0;
var uLocal_6627 = 0;
var uLocal_6628 = 0;
var uLocal_6629 = 0;
var uLocal_6630 = 0;
var uLocal_6631 = 0;
var uLocal_6632 = 0;
var uLocal_6633 = 0;
var uLocal_6634 = 0;
var uLocal_6635 = 0;
var uLocal_6636 = 0;
var uLocal_6637 = 0;
var uLocal_6638 = 0;
var uLocal_6639 = 0;
var uLocal_6640 = 0;
var uLocal_6641 = 0;
var uLocal_6642 = 0;
var uLocal_6643 = 0;
var uLocal_6644 = 0;
var uLocal_6645 = 0;
var uLocal_6646 = 0;
var uLocal_6647 = 0;
var uLocal_6648 = 0;
var uLocal_6649 = 0;
var uLocal_6650 = 1065353216;
var uLocal_6651 = 0;
var uLocal_6652 = 0;
var uLocal_6653 = 0;
var uLocal_6654 = 0;
var uLocal_6655 = 0;
var uLocal_6656 = 0;
var uLocal_6657 = 0;
var uLocal_6658 = 0;
var uLocal_6659 = 0;
var uLocal_6660 = 0;
var uLocal_6661 = 0;
var uLocal_6662 = 0;
var uLocal_6663 = 0;
var uLocal_6664 = 0;
var uLocal_6665 = 0;
var uLocal_6666 = 0;
var uLocal_6667 = 0;
var uLocal_6668 = 0;
var uLocal_6669 = 0;
var uLocal_6670 = 0;
var uLocal_6671 = 0;
var uLocal_6672 = 0;
var uLocal_6673 = 0;
var uLocal_6674 = 0;
var uLocal_6675 = 0;
var uLocal_6676 = 0;
var uLocal_6677 = -1;
var uLocal_6678 = 0;
var uLocal_6679 = 0;
var uLocal_6680 = 0;
var uLocal_6681 = 0;
var uLocal_6682 = 0;
var uLocal_6683 = 0;
var uLocal_6684 = 0;
var uLocal_6685 = 0;
var uLocal_6686 = 0;
var uLocal_6687 = 0;
var uLocal_6688 = 0;
var uLocal_6689 = 0;
var uLocal_6690 = 0;
var uLocal_6691 = 0;
var uLocal_6692 = 0;
var uLocal_6693 = 0;
var uLocal_6694 = 0;
var uLocal_6695 = 0;
var uLocal_6696 = 0;
var uLocal_6697 = 0;
var uLocal_6698 = 0;
var uLocal_6699 = 0;
var uLocal_6700 = 0;
var uLocal_6701 = 0;
var uLocal_6702 = 0;
var uLocal_6703 = 0;
var uLocal_6704 = 0;
var uLocal_6705 = 0;
var uLocal_6706 = 0;
var uLocal_6707 = 1065353216;
var uLocal_6708 = 0;
var uLocal_6709 = 0;
var uLocal_6710 = 0;
var uLocal_6711 = 0;
var uLocal_6712 = 0;
var uLocal_6713 = 0;
var uLocal_6714 = 0;
var uLocal_6715 = 0;
var uLocal_6716 = 0;
var uLocal_6717 = 0;
var uLocal_6718 = 0;
var uLocal_6719 = 0;
var uLocal_6720 = 0;
var uLocal_6721 = 0;
var uLocal_6722 = 0;
var uLocal_6723 = 0;
var uLocal_6724 = 0;
var uLocal_6725 = 0;
var uLocal_6726 = 0;
var uLocal_6727 = 0;
var uLocal_6728 = 0;
var uLocal_6729 = 0;
var uLocal_6730 = 0;
var uLocal_6731 = 0;
var uLocal_6732 = 0;
var uLocal_6733 = 0;
var uLocal_6734 = -1;
var uLocal_6735 = 0;
var uLocal_6736 = 0;
var uLocal_6737 = 0;
var uLocal_6738 = 0;
var uLocal_6739 = 0;
var uLocal_6740 = 0;
var uLocal_6741 = 0;
var uLocal_6742 = 0;
var uLocal_6743 = 0;
var uLocal_6744 = 0;
var uLocal_6745 = 0;
var uLocal_6746 = 0;
var uLocal_6747 = 0;
var uLocal_6748 = 0;
var uLocal_6749 = 0;
var uLocal_6750 = 0;
var uLocal_6751 = 0;
var uLocal_6752 = 0;
var uLocal_6753 = 0;
var uLocal_6754 = 0;
var uLocal_6755 = 0;
var uLocal_6756 = 0;
var uLocal_6757 = 0;
var uLocal_6758 = 0;
var uLocal_6759 = 0;
var uLocal_6760 = 0;
var uLocal_6761 = 0;
var uLocal_6762 = 0;
var uLocal_6763 = 0;
var uLocal_6764 = 1065353216;
var uLocal_6765 = 0;
var uLocal_6766 = 0;
var uLocal_6767 = 0;
var uLocal_6768 = 0;
var uLocal_6769 = 0;
var uLocal_6770 = 0;
var uLocal_6771 = 0;
var uLocal_6772 = 0;
var uLocal_6773 = 0;
var uLocal_6774 = 0;
var uLocal_6775 = 0;
var uLocal_6776 = 0;
var uLocal_6777 = 0;
var uLocal_6778 = 0;
var uLocal_6779 = 0;
var uLocal_6780 = 0;
var uLocal_6781 = 0;
var uLocal_6782 = 0;
var uLocal_6783 = 0;
var uLocal_6784 = 0;
var uLocal_6785 = 0;
var uLocal_6786 = 0;
var uLocal_6787 = 0;
var uLocal_6788 = 0;
var uLocal_6789 = 0;
var uLocal_6790 = 0;
var uLocal_6791 = -1;
var uLocal_6792 = 0;
var uLocal_6793 = 0;
var uLocal_6794 = 0;
var uLocal_6795 = 0;
var uLocal_6796 = 0;
var uLocal_6797 = 0;
var uLocal_6798 = 0;
var uLocal_6799 = 0;
var uLocal_6800 = 0;
var uLocal_6801 = 0;
var uLocal_6802 = 0;
var uLocal_6803 = 0;
var uLocal_6804 = 0;
var uLocal_6805 = 0;
var uLocal_6806 = 0;
var uLocal_6807 = 0;
var uLocal_6808 = 0;
var uLocal_6809 = 0;
var uLocal_6810 = 0;
var uLocal_6811 = 0;
var uLocal_6812 = 0;
var uLocal_6813 = 0;
var uLocal_6814 = 0;
var uLocal_6815 = 0;
var uLocal_6816 = 0;
var uLocal_6817 = 0;
var uLocal_6818 = 0;
var uLocal_6819 = 0;
var uLocal_6820 = 0;
var uLocal_6821 = 1065353216;
var uLocal_6822 = 0;
var uLocal_6823 = 0;
var uLocal_6824 = 0;
var uLocal_6825 = 0;
var uLocal_6826 = 0;
var uLocal_6827 = 0;
var uLocal_6828 = 0;
var uLocal_6829 = 0;
var uLocal_6830 = 0;
var uLocal_6831 = 0;
var uLocal_6832 = 0;
var uLocal_6833 = 0;
var uLocal_6834 = 0;
var uLocal_6835 = 0;
var uLocal_6836 = 0;
var uLocal_6837 = 0;
var uLocal_6838 = 0;
var uLocal_6839 = 0;
var uLocal_6840 = 0;
var uLocal_6841 = 0;
var uLocal_6842 = 0;
var uLocal_6843 = 0;
var uLocal_6844 = 0;
var uLocal_6845 = 0;
var uLocal_6846 = 0;
var uLocal_6847 = 0;
var uLocal_6848 = -1;
var uLocal_6849 = 0;
var uLocal_6850 = 0;
var uLocal_6851 = 0;
var uLocal_6852 = 0;
var uLocal_6853 = 0;
var uLocal_6854 = 0;
var uLocal_6855 = 0;
var uLocal_6856 = 0;
var uLocal_6857 = 0;
var uLocal_6858 = 0;
var uLocal_6859 = 0;
var uLocal_6860 = 0;
var uLocal_6861 = 0;
var uLocal_6862 = 0;
var uLocal_6863 = 0;
var uLocal_6864 = 0;
var uLocal_6865 = 0;
var uLocal_6866 = 0;
var uLocal_6867 = 0;
var uLocal_6868 = 0;
var uLocal_6869 = 0;
var uLocal_6870 = 0;
var uLocal_6871 = 0;
var uLocal_6872 = 0;
var uLocal_6873 = 0;
var uLocal_6874 = 0;
var uLocal_6875 = 0;
var uLocal_6876 = 0;
var uLocal_6877 = 0;
var uLocal_6878 = 1065353216;
var uLocal_6879 = 0;
var uLocal_6880 = 0;
var uLocal_6881 = 0;
var uLocal_6882 = 0;
var uLocal_6883 = 0;
var uLocal_6884 = 0;
var uLocal_6885 = 0;
var uLocal_6886 = 0;
var uLocal_6887 = 0;
var uLocal_6888 = 0;
var uLocal_6889 = 0;
var uLocal_6890 = 0;
var uLocal_6891 = 0;
var uLocal_6892 = 0;
var uLocal_6893 = 0;
var uLocal_6894 = 0;
var uLocal_6895 = 0;
var uLocal_6896 = 0;
var uLocal_6897 = 0;
var uLocal_6898 = 0;
var uLocal_6899 = 0;
var uLocal_6900 = 0;
var uLocal_6901 = 0;
var uLocal_6902 = 0;
var uLocal_6903 = 0;
var uLocal_6904 = 0;
var uLocal_6905 = -1;
var uLocal_6906 = 0;
var uLocal_6907 = 0;
var uLocal_6908 = 0;
var uLocal_6909 = 0;
var uLocal_6910 = 0;
var uLocal_6911 = 0;
var uLocal_6912 = 0;
var uLocal_6913 = 0;
var uLocal_6914 = 0;
var uLocal_6915 = 0;
var uLocal_6916 = 0;
var uLocal_6917 = 0;
var uLocal_6918 = 0;
var uLocal_6919 = 0;
var uLocal_6920 = 0;
var uLocal_6921 = 0;
var uLocal_6922 = 0;
var uLocal_6923 = 0;
var uLocal_6924 = 0;
var uLocal_6925 = 0;
var uLocal_6926 = 0;
var uLocal_6927 = 0;
var uLocal_6928 = 0;
var uLocal_6929 = 0;
var uLocal_6930 = 0;
var uLocal_6931 = 0;
var uLocal_6932 = 0;
var uLocal_6933 = 0;
var uLocal_6934 = 0;
var uLocal_6935 = 1065353216;
var uLocal_6936 = 0;
var uLocal_6937 = 0;
var uLocal_6938 = 0;
var uLocal_6939 = 0;
var uLocal_6940 = 0;
var uLocal_6941 = 0;
var uLocal_6942 = 0;
var uLocal_6943 = 0;
var uLocal_6944 = 0;
var uLocal_6945 = 0;
var uLocal_6946 = 0;
var uLocal_6947 = 0;
var uLocal_6948 = 0;
var uLocal_6949 = 0;
var uLocal_6950 = 0;
var uLocal_6951 = 0;
var uLocal_6952 = 0;
var uLocal_6953 = 0;
var uLocal_6954 = 0;
var uLocal_6955 = 0;
var uLocal_6956 = 0;
var uLocal_6957 = 0;
var uLocal_6958 = 0;
var uLocal_6959 = 0;
var uLocal_6960 = 0;
var uLocal_6961 = 0;
var uLocal_6962 = -1;
var uLocal_6963 = 0;
var uLocal_6964 = 0;
var uLocal_6965 = 0;
var uLocal_6966 = 0;
var uLocal_6967 = 0;
var uLocal_6968 = 0;
var uLocal_6969 = 0;
var uLocal_6970 = 0;
var uLocal_6971 = 0;
var uLocal_6972 = 0;
var uLocal_6973 = 0;
var uLocal_6974 = 0;
var uLocal_6975 = 0;
var uLocal_6976 = 0;
var uLocal_6977 = 0;
var uLocal_6978 = 0;
var uLocal_6979 = 0;
var uLocal_6980 = 0;
var uLocal_6981 = 0;
var uLocal_6982 = 0;
var uLocal_6983 = 0;
var uLocal_6984 = 0;
var uLocal_6985 = 0;
var uLocal_6986 = 0;
var uLocal_6987 = 0;
var uLocal_6988 = 0;
var uLocal_6989 = 0;
var uLocal_6990 = 0;
var uLocal_6991 = 0;
var uLocal_6992 = 1065353216;
var uLocal_6993 = 0;
var uLocal_6994 = 0;
var uLocal_6995 = 0;
var uLocal_6996 = 0;
var uLocal_6997 = 0;
var uLocal_6998 = 0;
var uLocal_6999 = 0;
var uLocal_7000 = 0;
var uLocal_7001 = 0;
var uLocal_7002 = 0;
var uLocal_7003 = 0;
var uLocal_7004 = 0;
var uLocal_7005 = 0;
var uLocal_7006 = 0;
var uLocal_7007 = 0;
var uLocal_7008 = 0;
var uLocal_7009 = 0;
var uLocal_7010 = 0;
var uLocal_7011 = 0;
var uLocal_7012 = 0;
var uLocal_7013 = 0;
var uLocal_7014 = 0;
var uLocal_7015 = 0;
var uLocal_7016 = 0;
var uLocal_7017 = 0;
var uLocal_7018 = 0;
var uLocal_7019 = -1;
var uLocal_7020 = 0;
var uLocal_7021 = 0;
var uLocal_7022 = 0;
var uLocal_7023 = 0;
var uLocal_7024 = 0;
var uLocal_7025 = 0;
var uLocal_7026 = 0;
var uLocal_7027 = 0;
var uLocal_7028 = 0;
var uLocal_7029 = 0;
var uLocal_7030 = 0;
var uLocal_7031 = 0;
var uLocal_7032 = 0;
var uLocal_7033 = 0;
var uLocal_7034 = 0;
var uLocal_7035 = 0;
var uLocal_7036 = 0;
var uLocal_7037 = 0;
var uLocal_7038 = 0;
var uLocal_7039 = 0;
var uLocal_7040 = 0;
var uLocal_7041 = 0;
var uLocal_7042 = 0;
var uLocal_7043 = 0;
var uLocal_7044 = 0;
var uLocal_7045 = 0;
var uLocal_7046 = 0;
var uLocal_7047 = 0;
var uLocal_7048 = 0;
var uLocal_7049 = 1065353216;
var uLocal_7050 = 0;
var uLocal_7051 = 0;
var uLocal_7052 = 0;
var uLocal_7053 = 0;
var uLocal_7054 = 0;
var uLocal_7055 = 0;
var uLocal_7056 = 0;
var uLocal_7057 = 0;
var uLocal_7058 = 0;
var uLocal_7059 = 0;
var uLocal_7060 = 0;
var uLocal_7061 = 0;
var uLocal_7062 = 0;
var uLocal_7063 = 0;
var uLocal_7064 = 0;
var uLocal_7065 = 0;
var uLocal_7066 = 0;
var uLocal_7067 = 0;
var uLocal_7068 = 0;
var uLocal_7069 = 0;
var uLocal_7070 = 0;
var uLocal_7071 = 0;
var uLocal_7072 = 0;
var uLocal_7073 = 0;
var uLocal_7074 = 0;
var uLocal_7075 = 0;
var uLocal_7076 = -1;
var uLocal_7077 = 0;
var uLocal_7078 = 0;
var uLocal_7079 = 0;
var uLocal_7080 = 0;
var uLocal_7081 = 0;
var uLocal_7082 = 0;
var uLocal_7083 = 0;
var uLocal_7084 = 0;
var uLocal_7085 = 0;
var uLocal_7086 = 0;
var uLocal_7087 = 0;
var uLocal_7088 = 0;
var uLocal_7089 = 0;
var uLocal_7090 = 0;
var uLocal_7091 = 0;
var uLocal_7092 = 0;
var uLocal_7093 = 0;
var uLocal_7094 = 0;
var uLocal_7095 = 0;
var uLocal_7096 = 0;
var uLocal_7097 = 0;
var uLocal_7098 = 0;
var uLocal_7099 = 0;
var uLocal_7100 = 0;
var uLocal_7101 = 0;
var uLocal_7102 = 0;
var uLocal_7103 = 0;
var uLocal_7104 = 0;
var uLocal_7105 = 0;
var uLocal_7106 = 1065353216;
var uLocal_7107 = 0;
var uLocal_7108 = 0;
var uLocal_7109 = 0;
var uLocal_7110 = 0;
var uLocal_7111 = 0;
var uLocal_7112 = 0;
var uLocal_7113 = 0;
var uLocal_7114 = 0;
var uLocal_7115 = 0;
var uLocal_7116 = 0;
var uLocal_7117 = 0;
var uLocal_7118 = 0;
var uLocal_7119 = 0;
var uLocal_7120 = 0;
var uLocal_7121 = 0;
var uLocal_7122 = 0;
var uLocal_7123 = 0;
var uLocal_7124 = 0;
var uLocal_7125 = 0;
var uLocal_7126 = 0;
var uLocal_7127 = 0;
var uLocal_7128 = 0;
var uLocal_7129 = 0;
var uLocal_7130 = 0;
var uLocal_7131 = 0;
var uLocal_7132 = 0;
var uLocal_7133 = -1;
var uLocal_7134 = 0;
var uLocal_7135 = 0;
var uLocal_7136 = 0;
var uLocal_7137 = 0;
var uLocal_7138 = 0;
var uLocal_7139 = 0;
var uLocal_7140 = 0;
var uLocal_7141 = 0;
var uLocal_7142 = 0;
var uLocal_7143 = 0;
var uLocal_7144 = 0;
var uLocal_7145 = 0;
var uLocal_7146 = 0;
var uLocal_7147 = 0;
var uLocal_7148 = 0;
var uLocal_7149 = 0;
var uLocal_7150 = 0;
var uLocal_7151 = 0;
var uLocal_7152 = 0;
var uLocal_7153 = 0;
var uLocal_7154 = 0;
var uLocal_7155 = 0;
var uLocal_7156 = 0;
var uLocal_7157 = 0;
var uLocal_7158 = 0;
var uLocal_7159 = 0;
var uLocal_7160 = 0;
var uLocal_7161 = 0;
var uLocal_7162 = 0;
var uLocal_7163 = 1065353216;
var uLocal_7164 = 0;
var uLocal_7165 = 0;
var uLocal_7166 = 0;
var uLocal_7167 = 0;
var uLocal_7168 = 0;
var uLocal_7169 = 0;
var uLocal_7170 = 0;
var uLocal_7171 = 0;
var uLocal_7172 = 0;
var uLocal_7173 = 0;
var uLocal_7174 = 0;
var uLocal_7175 = 0;
var uLocal_7176 = 0;
var uLocal_7177 = 0;
var uLocal_7178 = 0;
var uLocal_7179 = 0;
var uLocal_7180 = 0;
var uLocal_7181 = 0;
var uLocal_7182 = 0;
var uLocal_7183 = 0;
var uLocal_7184 = 0;
var uLocal_7185 = 0;
var uLocal_7186 = 0;
var uLocal_7187 = 0;
var uLocal_7188 = 0;
var uLocal_7189 = 0;
var uLocal_7190 = -1;
var uLocal_7191 = 0;
var uLocal_7192 = 0;
var uLocal_7193 = 0;
var uLocal_7194 = 0;
var uLocal_7195 = 0;
var uLocal_7196 = 0;
var uLocal_7197 = 0;
var uLocal_7198 = 0;
var uLocal_7199 = 0;
var uLocal_7200 = 0;
var uLocal_7201 = 0;
var uLocal_7202 = 0;
var uLocal_7203 = 0;
var uLocal_7204 = 0;
var uLocal_7205 = 0;
var uLocal_7206 = 0;
var uLocal_7207 = 0;
var uLocal_7208 = 0;
var uLocal_7209 = 0;
var uLocal_7210 = 0;
var uLocal_7211 = 0;
var uLocal_7212 = 0;
var uLocal_7213 = 0;
var uLocal_7214 = 0;
var uLocal_7215 = 0;
var uLocal_7216 = 0;
var uLocal_7217 = 0;
var uLocal_7218 = 0;
var uLocal_7219 = 0;
var uLocal_7220 = 1065353216;
var uLocal_7221 = 0;
var uLocal_7222 = 0;
var uLocal_7223 = 0;
var uLocal_7224 = 0;
var uLocal_7225 = 0;
var uLocal_7226 = 0;
var uLocal_7227 = 0;
var uLocal_7228 = 0;
var uLocal_7229 = 0;
var uLocal_7230 = 0;
var uLocal_7231 = 0;
var uLocal_7232 = 0;
var uLocal_7233 = 0;
var uLocal_7234 = 0;
var uLocal_7235 = 0;
var uLocal_7236 = 0;
var uLocal_7237 = 0;
var uLocal_7238 = 0;
var uLocal_7239 = 0;
var uLocal_7240 = 0;
var uLocal_7241 = 0;
var uLocal_7242 = 0;
var uLocal_7243 = 0;
var uLocal_7244 = 0;
var uLocal_7245 = 0;
var uLocal_7246 = 0;
var uLocal_7247 = -1;
var uLocal_7248 = 0;
var uLocal_7249 = 0;
var uLocal_7250 = 0;
var uLocal_7251 = 0;
var uLocal_7252 = 0;
var uLocal_7253 = 0;
var uLocal_7254 = 0;
var uLocal_7255 = 0;
var uLocal_7256 = 0;
var uLocal_7257 = 0;
var uLocal_7258 = 0;
var uLocal_7259 = 0;
var uLocal_7260 = 0;
var uLocal_7261 = 0;
var uLocal_7262 = 0;
var uLocal_7263 = 0;
var uLocal_7264 = 0;
var uLocal_7265 = 0;
var uLocal_7266 = 0;
var uLocal_7267 = 0;
var uLocal_7268 = 0;
var uLocal_7269 = 0;
var uLocal_7270 = 0;
var uLocal_7271 = 0;
var uLocal_7272 = 0;
var uLocal_7273 = 0;
var uLocal_7274 = 0;
var uLocal_7275 = 0;
var uLocal_7276 = 0;
var uLocal_7277 = 1065353216;
var uLocal_7278 = 0;
var uLocal_7279 = 0;
var uLocal_7280 = 0;
var uLocal_7281 = 0;
var uLocal_7282 = 0;
var uLocal_7283 = 0;
var uLocal_7284 = 0;
var uLocal_7285 = 0;
var uLocal_7286 = 0;
var uLocal_7287 = 0;
var uLocal_7288 = 0;
var uLocal_7289 = 0;
var uLocal_7290 = 0;
var uLocal_7291 = 0;
var uLocal_7292 = 0;
var uLocal_7293 = 0;
var uLocal_7294 = 0;
var uLocal_7295 = 0;
var uLocal_7296 = 0;
var uLocal_7297 = 0;
var uLocal_7298 = 0;
var uLocal_7299 = 0;
var uLocal_7300 = 0;
var uLocal_7301 = 0;
var uLocal_7302 = 0;
var uLocal_7303 = 0;
var uLocal_7304 = -1;
var uLocal_7305 = 0;
var uLocal_7306 = 0;
var uLocal_7307 = 0;
var uLocal_7308 = 0;
var uLocal_7309 = 0;
var uLocal_7310 = 0;
var uLocal_7311 = 0;
var uLocal_7312 = 0;
var uLocal_7313 = 0;
var uLocal_7314 = 0;
var uLocal_7315 = 0;
var uLocal_7316 = 0;
var uLocal_7317 = 0;
var uLocal_7318 = 0;
var uLocal_7319 = 0;
var uLocal_7320 = 0;
var uLocal_7321 = 0;
var uLocal_7322 = 0;
var uLocal_7323 = 0;
var uLocal_7324 = 0;
var uLocal_7325 = 0;
var uLocal_7326 = 0;
var uLocal_7327 = 0;
var uLocal_7328 = 0;
var uLocal_7329 = 0;
var uLocal_7330 = 0;
var uLocal_7331 = 0;
var uLocal_7332 = 0;
var uLocal_7333 = 0;
var uLocal_7334 = 1065353216;
var uLocal_7335 = 0;
var uLocal_7336 = 0;
var uLocal_7337 = 0;
var uLocal_7338 = 0;
var uLocal_7339 = 0;
var uLocal_7340 = 0;
var uLocal_7341 = 0;
var uLocal_7342 = 0;
var uLocal_7343 = 0;
var uLocal_7344 = 0;
var uLocal_7345 = 0;
var uLocal_7346 = 0;
var uLocal_7347 = 0;
var uLocal_7348 = 0;
var uLocal_7349 = 0;
var uLocal_7350 = 0;
var uLocal_7351 = 0;
var uLocal_7352 = 0;
var uLocal_7353 = 0;
var uLocal_7354 = 0;
var uLocal_7355 = 0;
var uLocal_7356 = 0;
var uLocal_7357 = 0;
var uLocal_7358 = 0;
var uLocal_7359 = 0;
var uLocal_7360 = 0;
var uLocal_7361 = -1;
var uLocal_7362 = 0;
var uLocal_7363 = 0;
var uLocal_7364 = 0;
var uLocal_7365 = 0;
var uLocal_7366 = 0;
var uLocal_7367 = 0;
var uLocal_7368 = 0;
var uLocal_7369 = 0;
var uLocal_7370 = 0;
var uLocal_7371 = 0;
var uLocal_7372 = 0;
var uLocal_7373 = 0;
var uLocal_7374 = 0;
var uLocal_7375 = 0;
var uLocal_7376 = 0;
var uLocal_7377 = 0;
var uLocal_7378 = 0;
var uLocal_7379 = 0;
var uLocal_7380 = 0;
var uLocal_7381 = 0;
var uLocal_7382 = 0;
var uLocal_7383 = 0;
var uLocal_7384 = 0;
var uLocal_7385 = 0;
var uLocal_7386 = 0;
var uLocal_7387 = 0;
var uLocal_7388 = 0;
var uLocal_7389 = 0;
var uLocal_7390 = 0;
var uLocal_7391 = 1065353216;
var uLocal_7392 = 0;
var uLocal_7393 = 0;
var uLocal_7394 = 0;
var uLocal_7395 = 0;
var uLocal_7396 = 0;
var uLocal_7397 = 0;
var uLocal_7398 = 0;
var uLocal_7399 = 0;
var uLocal_7400 = 0;
var uLocal_7401 = 0;
var uLocal_7402 = 0;
var uLocal_7403 = 0;
var uLocal_7404 = 0;
var uLocal_7405 = 0;
var uLocal_7406 = 0;
var uLocal_7407 = 0;
var uLocal_7408 = 0;
var uLocal_7409 = 0;
var uLocal_7410 = 0;
var uLocal_7411 = 0;
var uLocal_7412 = 0;
var uLocal_7413 = 0;
var uLocal_7414 = 0;
var uLocal_7415 = 0;
var uLocal_7416 = 0;
var uLocal_7417 = 0;
var uLocal_7418 = -1;
var uLocal_7419 = 0;
var uLocal_7420 = 0;
var uLocal_7421 = 0;
var uLocal_7422 = 0;
var uLocal_7423 = 0;
var uLocal_7424 = 0;
var uLocal_7425 = 0;
var uLocal_7426 = 0;
var uLocal_7427 = 0;
var uLocal_7428 = 0;
var uLocal_7429 = 0;
var uLocal_7430 = 0;
var uLocal_7431 = 0;
var uLocal_7432 = 0;
var uLocal_7433 = 0;
var uLocal_7434 = 0;
var uLocal_7435 = 0;
var uLocal_7436 = 0;
var uLocal_7437 = 0;
var uLocal_7438 = 0;
var uLocal_7439 = 0;
var uLocal_7440 = 0;
var uLocal_7441 = 0;
var uLocal_7442 = 0;
var uLocal_7443 = 0;
var uLocal_7444 = 0;
var uLocal_7445 = 0;
var uLocal_7446 = 0;
var uLocal_7447 = 0;
var uLocal_7448 = 1065353216;
var uLocal_7449 = 0;
var uLocal_7450 = 0;
var uLocal_7451 = 0;
var uLocal_7452 = 0;
var uLocal_7453 = 0;
var uLocal_7454 = 0;
var uLocal_7455 = 0;
var uLocal_7456 = 0;
var uLocal_7457 = 0;
var uLocal_7458 = 0;
var uLocal_7459 = 0;
var uLocal_7460 = 0;
var uLocal_7461 = 0;
var uLocal_7462 = 0;
var uLocal_7463 = 0;
var uLocal_7464 = 0;
var uLocal_7465 = 0;
var uLocal_7466 = 0;
var uLocal_7467 = 0;
var uLocal_7468 = 0;
var uLocal_7469 = 0;
var uLocal_7470 = 0;
var uLocal_7471 = 0;
var uLocal_7472 = 16;
var uLocal_7473 = 0;
var uLocal_7474 = -1082130432;
var uLocal_7475 = 0;
var uLocal_7476 = -1082130432;
var uLocal_7477 = 0;
var uLocal_7478 = -1082130432;
var uLocal_7479 = 0;
var uLocal_7480 = -1082130432;
var uLocal_7481 = 0;
var uLocal_7482 = -1082130432;
var uLocal_7483 = 0;
var uLocal_7484 = -1082130432;
var uLocal_7485 = 0;
var uLocal_7486 = -1082130432;
var uLocal_7487 = 0;
var uLocal_7488 = -1082130432;
var uLocal_7489 = 0;
var uLocal_7490 = -1082130432;
var uLocal_7491 = 0;
var uLocal_7492 = -1082130432;
var uLocal_7493 = 0;
var uLocal_7494 = -1082130432;
var uLocal_7495 = 0;
var uLocal_7496 = -1082130432;
var uLocal_7497 = 0;
var uLocal_7498 = -1082130432;
var uLocal_7499 = 0;
var uLocal_7500 = -1082130432;
var uLocal_7501 = 0;
var uLocal_7502 = -1082130432;
var uLocal_7503 = 0;
var uLocal_7504 = -1082130432;
var uLocal_7505 = 16;
var uLocal_7506 = 0;
var uLocal_7507 = -1082130432;
var uLocal_7508 = 0;
var uLocal_7509 = -1082130432;
var uLocal_7510 = 0;
var uLocal_7511 = -1082130432;
var uLocal_7512 = 0;
var uLocal_7513 = -1082130432;
var uLocal_7514 = 0;
var uLocal_7515 = -1082130432;
var uLocal_7516 = 0;
var uLocal_7517 = -1082130432;
var uLocal_7518 = 0;
var uLocal_7519 = -1082130432;
var uLocal_7520 = 0;
var uLocal_7521 = -1082130432;
var uLocal_7522 = 0;
var uLocal_7523 = -1082130432;
var uLocal_7524 = 0;
var uLocal_7525 = -1082130432;
var uLocal_7526 = 0;
var uLocal_7527 = -1082130432;
var uLocal_7528 = 0;
var uLocal_7529 = -1082130432;
var uLocal_7530 = 0;
var uLocal_7531 = -1082130432;
var uLocal_7532 = 0;
var uLocal_7533 = -1082130432;
var uLocal_7534 = 0;
var uLocal_7535 = -1082130432;
var uLocal_7536 = 0;
var uLocal_7537 = -1082130432;
var uLocal_7538 = 0;
var uLocal_7539 = 0;
var uLocal_7540 = 0;
var uLocal_7541 = 0;
var uLocal_7542 = 0;
var uLocal_7543 = 0;
var uLocal_7544 = 0;
var uLocal_7545 = 0;
var uLocal_7546 = 0;
var uLocal_7547 = 0;
var uLocal_7548 = 0;
var uLocal_7549 = 0;
var uLocal_7550 = 0;
var uLocal_7551 = 0;
var uLocal_7552 = 0;
var uLocal_7553 = 0;
var uLocal_7554 = -1082130432;
var uLocal_7555 = -1082130432;
var uLocal_7556 = 1;
var uLocal_7557 = 1;
var uLocal_7558 = 1;
var uLocal_7559 = -1;
var uLocal_7560 = -1;
var uLocal_7561 = -1;
vector3 vLocal_7562 = {0f, 0f, 0f};
float fLocal_7565 = 0f;
int iLocal_7566 = 0;
float fLocal_7567 = 0f;
float fLocal_7568 = 0f;
float fLocal_7569 = 0f;
float fLocal_7570 = 0f;
int iLocal_7571 = 0;
int iLocal_7572 = 0;
int iLocal_7573 = 0;
int iLocal_7574 = 0;
int iLocal_7575 = 0;
int iLocal_7576 = 0;
float fLocal_7577 = 0f;
float fLocal_7578 = 0f;
int iLocal_7579 = 0;
float fLocal_7580 = 0f;
float fLocal_7581 = 0f;
float fLocal_7582 = 0f;
float fLocal_7583 = 0f;
float fLocal_7584 = 0f;
float fLocal_7585 = 0f;
int iLocal_7586 = 0;
int iLocal_7587 = 0;
int iLocal_7588 = 0;
int iLocal_7589 = 0;
int iLocal_7590 = 0;
int iLocal_7591 = 0;
int iLocal_7592 = 0;
int iLocal_7593 = 0;
int iLocal_7594 = 0;
int iLocal_7595 = 0;
int iLocal_7596 = 0;
int iLocal_7597 = 0;
int iLocal_7598 = 0;
int iLocal_7599 = 0;
char *sLocal_7600 = NULL;
char *sLocal_7601 = NULL;
float fLocal_7602 = 0f;
int iLocal_7603 = 0;
int iLocal_7604 = 0;
int iLocal_7605 = 0;
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
	bLocal_31 = true;
	bLocal_38 = true;
	bLocal_60 = true;
	fLocal_429 = 120f;
	fLocal_430 = 0f;
	fLocal_432 = 1f;
	fLocal_433 = 0f;
	fLocal_434 = 1f;
	fLocal_435 = 30f;
	fLocal_437 = 1f;
	fLocal_438 = 5f;
	fLocal_439 = 1f;
	fLocal_440 = 1f;
	fLocal_441 = 100f;
	fLocal_442 = 100f;
	fLocal_443 = 0f;
	fLocal_444 = 7000f;
	fLocal_445 = 0f;
	fLocal_446 = 0f;
	fLocal_447 = 0.3f;
	fLocal_448 = 0.5f;
	fLocal_449 = 50f;
	iLocal_650 = -1;
	iLocal_658 = -1;
	iLocal_659 = -1;
	iLocal_1088 = 3;
	fLocal_1091 = 80f;
	fLocal_1092 = 140f;
	fLocal_1093 = 180f;
	iLocal_1099 = 1;
	iLocal_1100 = 65;
	iLocal_1101 = 49;
	iLocal_1102 = 64;
	vLocal_1117 = {0f, 0f, 0f};
	vLocal_1120 = {0f, 0f, 0f};
	iLocal_1123 = -1;
	fLocal_1125 = 1f;
	iLocal_3300 = -1;
	iLocal_3410 = audio::get_sound_id();
	iLocal_3411 = audio::get_sound_id();
	fLocal_3443 = 0.6f;
	fLocal_3444 = 1f;
	fLocal_3445 = 1f;
	fLocal_3446 = 1f;
	fLocal_3837 = 0.05f;
	vLocal_7562 = {790.8106f, -2330.13f, 61.095f};
	fLocal_7565 = 137.22f;
	iLocal_7566 = -1;
	fLocal_7567 = 0.402f;
	fLocal_7568 = 0.54f;
	fLocal_7569 = 0.577f;
	fLocal_7570 = 0.808f;
	iLocal_7572 = 3;
	iLocal_7573 = 4;
	iLocal_7574 = 4250;
	iLocal_7575 = 3500;
	iLocal_7576 = 9250;
	fLocal_7577 = 11000f;
	fLocal_7578 = 19000f;
	iLocal_7579 = 0.575f;
	fLocal_7580 = 0.97f;
	fLocal_7581 = 0.8f;
	fLocal_7582 = 0.402f;
	fLocal_7583 = 0.454f;
	fLocal_7584 = 0.577f;
	fLocal_7585 = 0.663f;
	sLocal_7600 = "shake_cam_all@";
	sLocal_7601 = "fbi_4_binoculars";
	fLocal_7602 = 0f;
	gameplay::set_mission_flag(1);
	if (player::has_force_cleanup_occurred(3)) {
		func_977(1, 0, 1, 1, 0);
		func_974(player::player_ped_id(), func_976());
		func_973();
		func_970();
	}
	func_960();
	while (true) {
		system::wait(0);
		if (!iLocal_3177) {
			if (func_950()) {
				func_939();
			}
		}
		func_938();
		func_937();
		unk1::_0x208784099002BC30("M_BLITZ_PLAY", 0);
		switch (iLocal_1126) {
		case 0: func_922(); break;

		case 16: func_917(); break;

		case 1: func_861(); break;

		case 2: func_854(); break;

		case 3: func_848(); break;

		case 4: func_839(); break;

		case 5: func_831(); break;

		case 6: func_764(); break;

		case 7: func_746(); break;

		case 8: func_720(); break;

		case 9: func_704(); break;

		case 10: func_670(); break;

		case 11: func_602(); break;

		case 12: func_583(); break;

		case 17: func_561(); break;

		case 13: func_560(); break;

		case 14: func_285(); break;

		case 15: func_1(); break;
		}
	}
}

// Position - 0x342
void func_1() {
	if (func_284(&iLocal_3310, 7000)) {
		if (func_283()) {
			func_2();
		}
	}
}

// Position - 0x362
void func_2() {
	func_6(player::player_ped_id());
	func_3();
	gameplay::clear_area(1391.53f, -2063.67f, 52.79f, 10000f, 1, 0, 0, 0);
	func_977(1, 0, 1, 1, 0);
	func_970();
}

// Position - 0x39F
void func_3() {
	int iVar0;

	iVar0 = 0;
	gameplay::clear_area(1376.45f, -2083.29f, 55.51f, 10000f, 1, 0, 0, 0);
	if (entity::does_entity_exist(Local_1645)) {
		ped::delete_ped(&Local_1645);
	}
	if (entity::does_entity_exist(Local_1665)) {
		ped::delete_ped(&Local_1665);
	}
	if (entity::does_entity_exist(Local_1685)) {
		ped::delete_ped(&Local_1685);
	}
	if (entity::does_entity_exist(Local_1705)) {
		ped::delete_ped(&Local_1705);
	}
	iVar0 = 0;
	while (iVar0 <= Local_1725 - 1) {
		if (entity::does_entity_exist(Local_1725[iVar0 /*20*/])) {
			ped::delete_ped(&Local_1725[iVar0 /*20*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= Local_2446 - 1) {
		if (entity::does_entity_exist(Local_2446[iVar0 /*20*/])) {
			ped::delete_ped(&Local_2446[iVar0 /*20*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= Local_2527 - 1) {
		if (entity::does_entity_exist(Local_2527[iVar0 /*20*/])) {
			ped::delete_ped(&Local_2527[iVar0 /*20*/]);
		}
		iVar0++;
	}
	if (entity::does_entity_exist(Local_2568)) {
		ped::delete_ped(&Local_2568);
	}
	if (entity::does_entity_exist(Local_2588)) {
		ped::delete_ped(&Local_2588);
	}
	if (entity::does_entity_exist(Local_2608)) {
		ped::delete_ped(&Local_2608);
	}
	if (entity::does_entity_exist(Local_2628)) {
		ped::delete_ped(&Local_2628);
	}
	if (entity::does_entity_exist(uLocal_3099[0])) {
		ped::delete_ped(&uLocal_3099[0]);
	}
	if (entity::does_entity_exist(uLocal_3099[1])) {
		ped::delete_ped(&uLocal_3099[1]);
	}
	if (entity::does_entity_exist(uLocal_3099[2])) {
		ped::delete_ped(&uLocal_3099[2]);
	}
	func_4();
	if (entity::does_entity_exist(Local_2933)) {
		object::delete_object(&Local_2933);
	}
	iVar0 = 0;
	while (iVar0 <= Local_3053 - 1) {
		if (rope::does_rope_exist(&Local_3053[iVar0 /*10*/])) {
			rope::delete_rope(&Local_3053[iVar0 /*10*/]);
		}
		iVar0++;
	}
}

// Position - 0x564
void func_4() {
	int iVar0;

	iVar0 = 0;
	func_5(&Local_1177, 0);
	func_5(&Local_1192, 0);
	func_5(&Local_1207, 0);
	func_5(&Local_1464, 0);
	iVar0 = 0;
	while (iVar0 <= Local_1222 - 1) {
		func_5(&Local_1222[iVar0 /*15*/], 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= Local_1433 - 1) {
		func_5(&Local_1433[iVar0 /*15*/], 0);
		iVar0++;
	}
}

// Position - 0x5D3
void func_5(int *iParam0, int iParam1) {
	if (entity::does_entity_exist(*iParam0)) {
		if (vehicle::is_vehicle_driveable(*iParam0, 0)) {
			if (entity::is_entity_attached(*iParam0)) {
				entity::detach_entity(*iParam0, 1, 1);
			}
		}
		if (entity::is_entity_a_mission_entity(*iParam0) && entity::does_entity_belong_to_this_script(*iParam0, 0)) {
			if (player::is_player_playing(player::player_id())) {
				if (vehicle::is_vehicle_driveable(*iParam0, 0)) {
					if (!ped::is_ped_sitting_in_vehicle(player::player_ped_id(), *iParam0)) {
						if (iParam1) {
							vehicle::delete_vehicle(iParam0);
						}
						else {
							entity::set_vehicle_as_no_longer_needed(iParam0);
						}
					}
					else {
						entity::set_vehicle_as_no_longer_needed(iParam0);
					}
				}
				else {
					entity::set_vehicle_as_no_longer_needed(iParam0);
				}
			}
			else {
				entity::set_vehicle_as_no_longer_needed(iParam0);
			}
		}
	}
}

// Position - 0x66E
void func_6(int iParam0) {
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_282(iParam0);
	if (func_281(iVar0)) {
		if (!Global_91477[iVar0]) {
			if (Global_101700.f_2095.f_539.f_1619[iVar0] != 0) {
				if (func_280(iParam0) != Global_101700.f_2095.f_539.f_1619[iVar0]) {
					func_279(iVar0);
					Global_101700.f_2095.f_539.f_1619[iVar0] = func_280(iParam0);
				}
			}
		}
		func_109(iParam0, &Global_101700.f_2095.f_539[iVar0 /*65*/], 0, 0, 0);
		if (!Global_91477[iVar0]) {
			bVar2 = false;
			if (iVar0 == 0) {
				if (!func_108(49)) {
					iVar1 = func_94(iParam0, 12, -1);
					if (iVar1 == 16) {
						bVar2 = true;
					}
					func_7(func_93(0), 12, 16, 0, 0, 0, 0);
				}
				if (!func_108(44)) {
					iVar1 = func_94(iParam0, 3, -1);
					if (iVar1 == 70 || iVar1 == 71 || iVar1 == 72 || iVar1 == 73 || iVar1 == 74 || iVar1 == 75) {
						bVar2 = true;
					}
					iVar1 = func_94(iParam0, 4, -1);
					if (iVar1 == 41 || iVar1 == 42 || iVar1 == 43 || iVar1 == 44 || iVar1 == 45) {
						bVar2 = true;
					}
					func_7(func_93(0), 3, 70, 1, 0, 0, 0);
					func_7(func_93(0), 3, 71, 1, 0, 0, 0);
					func_7(func_93(0), 3, 72, 1, 0, 0, 0);
					func_7(func_93(0), 3, 73, 1, 0, 0, 0);
					func_7(func_93(0), 3, 74, 1, 0, 0, 0);
					func_7(func_93(0), 3, 75, 1, 0, 0, 0);
					func_7(func_93(0), 4, 41, 1, 0, 0, 0);
					func_7(func_93(0), 4, 42, 1, 0, 0, 0);
					func_7(func_93(0), 4, 43, 1, 0, 0, 0);
					func_7(func_93(0), 4, 44, 1, 0, 0, 0);
					func_7(func_93(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2) {
				iVar1 = func_94(iParam0, 4, -1);
				if (iVar1 == 93) {
					bVar2 = true;
				}
			}
			if (bVar2) {
				func_279(iVar0);
				func_109(iParam0, &Global_101700.f_2095.f_539[iVar0 /*65*/], 0, 0, 0);
			}
		}
		Global_91477[iVar0] = 1;
	}
}

// Position - 0x8C9
void func_7(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_92(iParam0, iParam1, iParam2, iParam3);
	func_81(iParam0, iParam1, iParam2, iParam4, 1);
	if (iParam5) {
		func_80(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1) {
		func_8(iParam0, iParam1, iParam2, 0);
	}
}

// Position - 0x90E
int func_8(int iParam0, int iParam1, int iParam2, int iParam3) {
	Global_69523[1 /*14*/] = {func_10(iParam0, iParam1, iParam2)};
	if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0) && !gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6)) {
		if (iParam3) {
			func_9(iParam1, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 2, Global_69523[1 /*14*/].f_1, 0,
				   1);
		}
		else {
			func_9(iParam1, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 2, Global_69523[1 /*14*/].f_1, 1,
				   0);
		}
		return 1;
	}
	return 0;
}

// Position - 0x9A9
bool func_9(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	if (iParam0 == 0) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/][iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/][iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return false;
}

// Position - 0x18C7
struct<14> func_10(int iParam0, int iParam1, int iParam2) {
	func_79();
	if (iParam0 == joaat("player_zero")) {
		func_61(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one")) {
		func_42(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two")) {
		func_11(iParam1, iParam2);
	}
	return Global_69523[0 /*14*/];
}

//Position - 0x1919
void func_11(int iParam0, int iParam1)
{
	switch (iParam0) {
	case 0: func_41(iParam1); break;

	case 2: func_40(iParam1); break;

	case 3: func_37(iParam1); break;

	case 4: func_36(iParam1); break;

	case 6: func_35(iParam1); break;

	case 5: func_34(iParam1); break;

	case 8: func_33(iParam1); break;

	case 9: func_32(iParam1); break;

	case 10: func_31(iParam1); break;

	case 1: func_30(iParam1); break;

	case 7: func_29(iParam1); break;

	case 11: func_28(iParam1); break;

	case 12: func_27(iParam1); break;

	case 13: func_26(iParam1); break;

	case 14: func_12(iParam1); break;
	}
}

// Position - 0x1A09
void func_12(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 7;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 8;
		break;

	case 154:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 2;
		break;

	case 88:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 10;
		break;

	case 89:
		StringCopy(&Var2, "PROPS_P2_E1", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 45;
		iVar8 = 10;
		break;

	case 90:
		StringCopy(&Var2, "PROPS_P2_E2", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 91:
		StringCopy(&Var2, "PROPS_P2_E2_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 10;
		break;

	case 92:
		StringCopy(&Var2, "PROPS_P2_E2_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 93:
		StringCopy(&Var2, "PROPS_P2_E2_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 52;
		iVar8 = 10;
		break;

	case 94:
		StringCopy(&Var2, "PROPS_P2_E2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 54;
		iVar8 = 10;
		break;

	case 95:
		StringCopy(&Var2, "PROPS_P2_E2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 54;
		iVar8 = 10;
		break;

	case 96:
		StringCopy(&Var2, "PROPS_P2_E2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 97:
		StringCopy(&Var2, "PROPS_P2_E2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 98:
		StringCopy(&Var2, "PROPS_P2_E2_8", 16);
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 99:
		StringCopy(&Var2, "PROPS_P2_E2_9", 16);
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 100:
		StringCopy(&Var2, "PROPS_P2_E3", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 101:
		StringCopy(&Var2, "PROPS_P2_E3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 102:
		StringCopy(&Var2, "PROPS_P2_E3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 103:
		StringCopy(&Var2, "PROPS_P2_E3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 104:
		StringCopy(&Var2, "PROPS_P2_E3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 105:
		StringCopy(&Var2, "PROPS_P2_E3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 106:
		StringCopy(&Var2, "PROPS_P2_E3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 107:
		StringCopy(&Var2, "PROPS_P2_E3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 108:
		StringCopy(&Var2, "PROPS_P2_E3_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 109:
		StringCopy(&Var2, "PROPS_P2_E3_9", 16);
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 110:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 111:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 112:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 113:
		StringCopy(&Var2, "PROPS_P2_E7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 114:
		StringCopy(&Var2, "PROPS_P2_E7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 10;
		break;

	case 115:
		StringCopy(&Var2, "PROPS_P2_E7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 50;
		iVar8 = 10;
		break;

	case 116:
		StringCopy(&Var2, "PROPS_P2_E7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 59;
		iVar8 = 10;
		break;

	case 117:
		StringCopy(&Var2, "PROPS_P2_E7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 118:
		StringCopy(&Var2, "PROPS_P2_E7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 119:
		StringCopy(&Var2, "PROPS_P2_E7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 120:
		StringCopy(&Var2, "PROPS_P2_E7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 59;
		iVar8 = 10;
		break;

	case 121:
		StringCopy(&Var2, "PROPS_P2_E7_8", 16);
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 79;
		iVar8 = 10;
		break;

	case 122:
		StringCopy(&Var2, "PROPS_P2_E7_9", 16);
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 79;
		iVar8 = 10;
		break;

	case 123:
		StringCopy(&Var2, "PROPS_P2_E8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 150;
		iVar8 = 10;
		break;

	case 124:
		StringCopy(&Var2, "PROPS_P2_E8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 150;
		iVar8 = 10;
		break;

	case 125:
		StringCopy(&Var2, "PROPS_P2_E8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 170;
		iVar8 = 10;
		break;

	case 126:
		StringCopy(&Var2, "PROPS_P2_E8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 127:
		StringCopy(&Var2, "PROPS_P2_E8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 180;
		iVar8 = 10;
		break;

	case 128:
		StringCopy(&Var2, "PROPS_P2_E8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 129:
		StringCopy(&Var2, "PROPS_P2_E8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 189;
		iVar8 = 10;
		break;

	case 130:
		StringCopy(&Var2, "PROPS_P2_E8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 195;
		iVar8 = 10;
		break;

	case 131:
		StringCopy(&Var2, "PROPS_P2_E8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 210;
		iVar8 = 10;
		break;

	case 132:
		StringCopy(&Var2, "PROPS_P2_E8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 215;
		iVar8 = 10;
		break;

	case 133:
		StringCopy(&Var2, "PROPS_P2_E9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 134:
		StringCopy(&Var2, "PROPS_P2_E9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 135:
		StringCopy(&Var2, "PROPS_P2_E9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 169;
		iVar8 = 10;
		break;

	case 136:
		StringCopy(&Var2, "PROPS_P2_E9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 169;
		iVar8 = 10;
		break;

	case 137:
		StringCopy(&Var2, "PROPS_P2_E9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 138:
		StringCopy(&Var2, "PROPS_P2_E9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 139:
		StringCopy(&Var2, "PROPS_P2_E9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 140:
		StringCopy(&Var2, "PROPS_P2_E9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 189;
		iVar8 = 10;
		break;

	case 141:
		StringCopy(&Var2, "PROPS_P2_E9_8", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 195;
		iVar8 = 10;
		break;

	case 142:
		StringCopy(&Var2, "PROPS_P2_E9_9", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 195;
		iVar8 = 10;
		break;

	case 143:
		StringCopy(&Var2, "PROPS_P2_E10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 49;
		iVar8 = 10;
		break;

	case 144:
		StringCopy(&Var2, "PROPS_P2_E10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 10;
		break;

	case 145:
		StringCopy(&Var2, "PROPS_P2_E10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 52;
		iVar8 = 10;
		break;

	case 146:
		StringCopy(&Var2, "PROPS_P2_E10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 147:
		StringCopy(&Var2, "PROPS_P2_E10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 148:
		StringCopy(&Var2, "PROPS_P2_E10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 149:
		StringCopy(&Var2, "PROPS_P2_E10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 150:
		StringCopy(&Var2, "PROPS_P2_E10_7", 16);
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 63;
		iVar8 = 10;
		break;

	case 151:
		StringCopy(&Var2, "PROPS_P2_E10_8", 16);
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 152:
		StringCopy(&Var2, "PROPS_P2_E10_9", 16);
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 153:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 100;
		iVar8 = 10;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 12:
		StringCopy(&Var2, "PROPS_P2_H2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 320;
		iVar8 = 0;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 17:
		StringCopy(&Var2, "PROPS_P2_H7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 18:
		StringCopy(&Var2, "PROPS_P2_H7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar8 = 0;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar8 = 0;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 10;
		iVar8 = 0;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 11;
		iVar8 = 0;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 12;
		iVar8 = 0;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 13;
		iVar8 = 0;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 14;
		iVar8 = 0;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 15;
		iVar8 = 0;
		break;

	case 36:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 37:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 38:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 39:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 41:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 42:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 43:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 44:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 47:
		StringCopy(&Var2, "PROPS_P1_H8_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 48:
		StringCopy(&Var2, "PROPS_P1_H8_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 49:
		StringCopy(&Var2, "PROPS_P1_H9_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 50:
		StringCopy(&Var2, "PROPS_P1_H9_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 51:
		StringCopy(&Var2, "PROPS_P1_H10_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 52:
		StringCopy(&Var2, "PROPS_P1_H10_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 53:
		StringCopy(&Var2, "PROPS_P1_H11_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 450;
		iVar8 = 0;
		break;

	case 54:
		StringCopy(&Var2, "PROPS_P1_H12_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 55:
		StringCopy(&Var2, "PROPS_P1_H12_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 56:
		StringCopy(&Var2, "PROPS_P1_H13_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 57:
		StringCopy(&Var2, "PROPS_P1_H13_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 58:
		StringCopy(&Var2, "PROPS_P1_H14_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 59:
		StringCopy(&Var2, "PROPS_P1_H14_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 60:
		StringCopy(&Var2, "PROPS_P1_H14_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 61:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 62:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 63:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 64:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 65:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 66:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 67:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 68:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 69:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 70:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 71:
		StringCopy(&Var2, "PROPS_P1_H26_0", 16);
		iVar6 = 26;
		iVar7 = 0;
		iVar1 = 20;
		iVar8 = 0;
		break;

	case 72:
		StringCopy(&Var2, "PROPS_P1_H26_1", 16);
		iVar6 = 26;
		iVar7 = 1;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 73:
		StringCopy(&Var2, "PROPS_P1_H26_2", 16);
		iVar6 = 26;
		iVar7 = 2;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 74:
		StringCopy(&Var2, "PROPS_P1_H26_3", 16);
		iVar6 = 26;
		iVar7 = 3;
		iVar1 = 22;
		iVar8 = 0;
		break;

	case 75:
		StringCopy(&Var2, "PROPS_P1_H26_4", 16);
		iVar6 = 26;
		iVar7 = 4;
		iVar1 = 20;
		iVar8 = 0;
		break;

	case 76:
		StringCopy(&Var2, "PROPS_P1_H26_5", 16);
		iVar6 = 26;
		iVar7 = 5;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 77:
		StringCopy(&Var2, "PROPS_P1_H26_6", 16);
		iVar6 = 26;
		iVar7 = 6;
		iVar1 = 28;
		iVar8 = 0;
		break;

	case 78:
		StringCopy(&Var2, "PROPS_P1_H26_7", 16);
		iVar6 = 26;
		iVar7 = 7;
		iVar1 = 24;
		iVar8 = 0;
		break;

	case 79:
		StringCopy(&Var2, "PROPS_P1_H26_8", 16);
		iVar6 = 26;
		iVar7 = 8;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 80:
		StringCopy(&Var2, "PROPS_P1_H26_9", 16);
		iVar6 = 26;
		iVar7 = 9;
		iVar1 = 22;
		iVar8 = 0;
		break;

	case 81:
		StringCopy(&Var2, "PROPS_P1_H26_10", 16);
		iVar6 = 26;
		iVar7 = 10;
		iVar1 = 18;
		iVar8 = 0;
		break;

	case 82:
		StringCopy(&Var2, "PROPS_P1_H26_11", 16);
		iVar6 = 26;
		iVar7 = 11;
		iVar1 = 20;
		iVar8 = 0;
		break;

	case 83:
		StringCopy(&Var2, "PROPS_P1_H26_12", 16);
		iVar6 = 26;
		iVar7 = 12;
		iVar1 = 24;
		iVar8 = 0;
		break;

	case 84:
		StringCopy(&Var2, "PROPS_P1_H26_13", 16);
		iVar6 = 26;
		iVar7 = 13;
		iVar1 = 22;
		iVar8 = 0;
		break;

	case 85:
		StringCopy(&Var2, "PROPS_P1_H26_14", 16);
		iVar6 = 26;
		iVar7 = 14;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 86:
		StringCopy(&Var2, "PROPS_P1_H26_15", 16);
		iVar6 = 26;
		iVar7 = 15;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 87:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar8 = 0;
		break;

	default: func_24(iVar10, iParam0, 155); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x2C34
void func_13(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9, int iParam10) {
	int iVar0;
	int iVar1;

	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = iParam2 % 32;
	uParam0->f_2 = iParam2 / 32;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&uParam0->f_8, sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_23(iParam8);
	if (uParam0->f_2 >= 10 && uParam0->f_5 >= 0 && uParam0->f_5 < 3) {
		if (!iParam10) {
		}
		uParam0->f_2 = 0;
	}
	if (gameplay::get_hash_key(sParam3) != gameplay::get_hash_key("NO_LABEL")) {
	}
	if (iParam7) {
		gameplay::set_bit(&uParam0->f_6, 3);
	}
	if (iParam10) {
		gameplay::set_bit(&uParam0->f_6, 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3) {
			gameplay::set_bit(&uParam0->f_6, 5);
		}
		gameplay::set_bit(&uParam0->f_6, 1);
		gameplay::set_bit(&uParam0->f_6, 2);
		gameplay::set_bit(&uParam0->f_6, 6);
		if (func_22(14)) {
			return;
		}
		if (iParam1 == 1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, 1827025211, 0)) {
				gameplay::set_bit(&uParam0->f_6, 7);
			}
		}
		if (iParam1 == 12) {
			if (!func_20(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_20(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
		else if (iParam1 == 13) {
		}
		else if (iParam1 == 14) {
			if (!func_20(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_20(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
		else {
			if (!func_20(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_20(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3) {
		gameplay::set_bit(&uParam0->f_6, 0);
		gameplay::set_bit(&uParam0->f_6, 5);
		if (func_9(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 1);
		}
		if (func_9(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 2);
		}
		if (!func_9(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 4);
		}
	}
	else {
		gameplay::set_bit(&uParam0->f_6, 0);
		if (iParam1 == 11 || iParam1 == 4 || iParam1 == 6 || iParam1 == 1 || iParam1 == 14 || iParam1 == 2 ||
			iParam1 == 8 || iParam1 == 9 || iParam1 == 10 || iParam1 == 7 || iParam1 == 12) {
			if (func_22(14)) {
				return;
			}
			iVar0 = func_16(func_19(iParam1, uParam0->f_2), Global_69521, 0);
			if (gameplay::is_bit_set(iVar0, uParam0->f_1)) {
				gameplay::set_bit(&uParam0->f_6, 1);
			}
			iVar0 = func_16(func_15(iParam1, uParam0->f_2), Global_69521, 0);
			if (gameplay::is_bit_set(iVar0, uParam0->f_1)) {
				gameplay::set_bit(&uParam0->f_6, 2);
			}
			if (func_14(iParam1, uParam0->f_2, &iVar1)) {
				iVar0 = func_16(iVar1, Global_69521, 0);
				if (!gameplay::is_bit_set(iVar0, uParam0->f_1)) {
					gameplay::set_bit(&uParam0->f_6, 4);
				}
			}
		}
		else {
			gameplay::set_bit(&uParam0->f_6, 1);
			gameplay::set_bit(&uParam0->f_6, 2);
		}
	}
	if (iParam1 == 14) {
		if (iParam4 == -1) {
			gameplay::set_bit(&uParam0->f_6, 1);
			gameplay::set_bit(&uParam0->f_6, 2);
		}
	}
}

// Position - 0x2FC4
bool func_14(int iParam0, int iParam1, int *iParam2) {
	*iParam2 = 973;
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 2: *iParam2 = 974; break;

		case 3: *iParam2 = 1424; break;

		case 4: *iParam2 = 990; break;

		case 6: *iParam2 = 998; break;

		case 8: *iParam2 = 1425; break;

		case 9: *iParam2 = 1433; break;

		case 10: *iParam2 = 1435; break;

		case 1: *iParam2 = 1006; break;

		case 7: *iParam2 = 1436; break;

		case 11: *iParam2 = 982; break;

		case 14: *iParam2 = 1014; break;

		case 12: *iParam2 = 1025; break;
		}
		break;

	case 1:
		switch (iParam0) {
		case 2: *iParam2 = 975; break;

		case 4: *iParam2 = 991; break;

		case 6: *iParam2 = 999; break;

		case 8: *iParam2 = 1426; break;

		case 9: *iParam2 = 1434; break;

		case 7: *iParam2 = 1437; break;

		case 11: *iParam2 = 983; break;

		case 14: *iParam2 = 1015; break;
		}
		break;

	case 2:
		switch (iParam0) {
		case 2: *iParam2 = 976; break;

		case 4: *iParam2 = 992; break;

		case 6: *iParam2 = 1000; break;

		case 8: *iParam2 = 1427; break;

		case 7: *iParam2 = 1438; break;

		case 11: *iParam2 = 984; break;

		case 14: *iParam2 = 1016; break;
		}
		break;

	case 3:
		switch (iParam0) {
		case 4: *iParam2 = 993; break;

		case 6: *iParam2 = 1001; break;

		case 8: *iParam2 = 1428; break;

		case 11: *iParam2 = 985; break;

		case 14: *iParam2 = 1017; break;
		}
		break;

	case 4:
		switch (iParam0) {
		case 4: *iParam2 = 994; break;

		case 6: *iParam2 = 1002; break;

		case 8: *iParam2 = 1429; break;

		case 11: *iParam2 = 986; break;

		case 14: *iParam2 = 1018; break;
		}
		break;

	case 5:
		switch (iParam0) {
		case 4: *iParam2 = 995; break;

		case 6: *iParam2 = 1003; break;

		case 8: *iParam2 = 1430; break;

		case 11: *iParam2 = 987; break;

		case 14: *iParam2 = 1019; break;
		}
		break;

	case 6:
		switch (iParam0) {
		case 4: *iParam2 = 996; break;

		case 6: *iParam2 = 1004; break;

		case 8: *iParam2 = 1431; break;

		case 11: *iParam2 = 988; break;

		case 14: *iParam2 = 1020; break;
		}
		break;

	case 7:
		switch (iParam0) {
		case 4: *iParam2 = 997; break;

		case 6: *iParam2 = 1005; break;

		case 8: *iParam2 = 1432; break;

		case 11: *iParam2 = 989; break;

		case 14: *iParam2 = 1021; break;
		}
		break;

	case 8:
		switch (iParam0) {
		case 14: *iParam2 = 1022; break;
		}
		break;

	case 9:
		switch (iParam0) {
		case 14: *iParam2 = 1023; break;
		}
		break;

	case 10:
		switch (iParam0) {
		case 14: *iParam2 = 1024; break;
		}
		break;
	}
	return *iParam2 != 973;
}

// Position - 0x33C9
int func_15(int iParam0, int iParam1) {
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 2: return 922;

		case 3: return 1409;

		case 4: return 938;

		case 6: return 946;

		case 8: return 1410;

		case 9: return 1418;

		case 10: return 1420;

		case 1: return 954;

		case 7: return 1421;

		case 11: return 930;

		case 14: return 962;

		case 12: return 973;
		}
		break;

	case 1:
		switch (iParam0) {
		case 2: return 923;

		case 4: return 939;

		case 6: return 947;

		case 8: return 1411;

		case 9: return 1419;

		case 7: return 1422;

		case 11: return 931;

		case 14: return 963;
		}
		break;

	case 2:
		switch (iParam0) {
		case 2: return 924;

		case 4: return 940;

		case 6: return 948;

		case 8: return 1412;

		case 7: return 1423;

		case 11: return 932;

		case 14: return 964;
		}
		break;

	case 3:
		switch (iParam0) {
		case 4: return 941;

		case 6: return 949;

		case 8: return 1413;

		case 11: return 933;

		case 14: return 965;
		}
		break;

	case 4:
		switch (iParam0) {
		case 4: return 942;

		case 6: return 950;

		case 8: return 1414;

		case 11: return 934;

		case 14: return 966;
		}
		break;

	case 5:
		switch (iParam0) {
		case 4: return 943;

		case 6: return 951;

		case 8: return 1415;

		case 11: return 935;

		case 14: return 967;
		}
		break;

	case 6:
		switch (iParam0) {
		case 4: return 944;

		case 6: return 952;

		case 8: return 1416;

		case 11: return 936;

		case 14: return 968;
		}
		break;

	case 7:
		switch (iParam0) {
		case 4: return 945;

		case 6: return 953;

		case 8: return 1417;

		case 11: return 937;

		case 14: return 969;
		}
		break;

	case 8:
		switch (iParam0) {
		case 14: return 970;
		}
		break;

	case 9:
		switch (iParam0) {
		case 14: return 971;
		}
		break;

	case 10:
		switch (iParam0) {
		case 14: return 972;
		}
		break;
	}
	return 930;
}

// Position - 0x37C4
int func_16(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_17(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x37F6
int func_17(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_18();
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

// Position - 0x382A
int func_18() { return Global_1312735; }

// Position - 0x3836
int func_19(int iParam0, int iParam1) {
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 2: return 870;

		case 3: return 1394;

		case 4: return 886;

		case 6: return 894;

		case 8: return 1395;

		case 9: return 1403;

		case 10: return 1405;

		case 1: return 902;

		case 7: return 1406;

		case 11: return 878;

		case 14: return 910;

		case 12: return 921;
		}
		break;

	case 1:
		switch (iParam0) {
		case 2: return 871;

		case 4: return 887;

		case 6: return 895;

		case 8: return 1396;

		case 9: return 1404;

		case 7: return 1407;

		case 11: return 879;

		case 14: return 911;
		}
		break;

	case 2:
		switch (iParam0) {
		case 2: return 872;

		case 4: return 888;

		case 6: return 896;

		case 8: return 1397;

		case 7: return 1408;

		case 11: return 880;

		case 14: return 912;
		}
		break;

	case 3:
		switch (iParam0) {
		case 4: return 889;

		case 6: return 897;

		case 8: return 1398;

		case 11: return 881;

		case 14: return 913;
		}
		break;

	case 4:
		switch (iParam0) {
		case 4: return 890;

		case 6: return 898;

		case 8: return 1399;

		case 11: return 882;

		case 14: return 914;
		}
		break;

	case 5:
		switch (iParam0) {
		case 4: return 891;

		case 6: return 899;

		case 8: return 1400;

		case 11: return 883;

		case 14: return 915;
		}
		break;

	case 6:
		switch (iParam0) {
		case 4: return 892;

		case 6: return 900;

		case 8: return 1401;

		case 11: return 884;

		case 14: return 916;
		}
		break;

	case 7:
		switch (iParam0) {
		case 4: return 893;

		case 6: return 901;

		case 8: return 1402;

		case 11: return 885;

		case 14: return 917;
		}
		break;

	case 8:
		switch (iParam0) {
		case 14: return 918;
		}
		break;

	case 9:
		switch (iParam0) {
		case 14: return 919;
		}
		break;

	case 10:
		switch (iParam0) {
		case 14: return 920;
		}
		break;
	}
	return 878;
}

// Position - 0x3C31
int func_20(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Global_69521;
	if (iParam4 != -1) {
		iVar0 = iParam4;
	}
	if (func_21(iParam0, iParam1, &iVar2, &iVar1, iParam2, iParam3)) {
		iVar3 = func_16(iVar2, iVar0, 0);
		return gameplay::is_bit_set(iVar3, iVar1);
	}
	return 0;
}

// Position - 0x3C73
bool func_21(int iParam0, int iParam1, int *iParam2, int *iParam3, bool bParam4, bool bParam5) {
	int iVar0;

	*iParam2 = 6022;
	if (bParam4 && Global_2592887 || !bParam4 && bParam5) {
		switch (iParam1) {
		case 1:
			switch (iParam0) {
			case 8886212:
			case -969630947:
				*iParam2 = 966;
				*iParam3 = 19;
				return true;

			case 1857811503:
			case -1198063650:
				*iParam2 = 966;
				*iParam3 = 20;
				return true;

			case 552556691:
			case -1596927918:
				*iParam2 = 966;
				*iParam3 = 21;
				return true;

			case 328711652:
			case 2093516866:
				*iParam2 = 966;
				*iParam3 = 22;
				return true;

			case 1194403102:
			case 1863511255:
				*iParam2 = 966;
				*iParam3 = 23;
				return true;

			case 1107630790:
			case 1503248869:
				*iParam2 = 966;
				*iParam3 = 24;
				return true;

			case 1807937089:
			case 1263478096:
				*iParam2 = 966;
				*iParam3 = 25;
				return true;

			case 1453442047:
			case 745170819:
				*iParam2 = 966;
				*iParam3 = 26;
				return true;

			case -1071423629:
			case -1382822784:
			case 385813134:
				*iParam2 = 930;
				*iParam3 = 0;
				return true;

			case -833094692:
			case -1731353868:
			case 675392787:
				*iParam2 = 930;
				*iParam3 = 1;
				return true;

			case -1836153782:
			case -1960638561:
			case -238272479:
				*iParam2 = 930;
				*iParam3 = 2;
				return true;

			case -1598414687:
			case 147161830:
			case 67757212:
				*iParam2 = 930;
				*iParam3 = 3;
				return true;

			case 123661793:
			case -92608943:
			case -536372072:
				*iParam2 = 930;
				*iParam3 = 4;
				return true;

			case 330958487:
			case -162931217:
			case -247578875:
				*iParam2 = 930;
				*iParam3 = 5;
				return true;

			case -142717408:
			case 1665087452:
			case -854821214:
				*iParam2 = 930;
				*iParam3 = 7;
				return true;

			case 1290696959:
			case 1012984348:
			case -1458295118:
				*iParam2 = 930;
				*iParam3 = 8;
				return true;

			case 2059568454:
			case 933072050:
			case -1454802604:
				*iParam2 = 930;
				*iParam3 = 11;
				return true;
			}
			break;

		case 2:
			switch (iParam0) {
			case 8886212:
			case -969630947:
				*iParam2 = 1018;
				*iParam3 = 19;
				return true;

			case 1857811503:
			case -1198063650:
				*iParam2 = 1018;
				*iParam3 = 20;
				return true;

			case 552556691:
			case -1596927918:
				*iParam2 = 1018;
				*iParam3 = 21;
				return true;

			case 328711652:
			case 2093516866:
				*iParam2 = 1018;
				*iParam3 = 22;
				return true;

			case 1194403102:
			case 1863511255:
				*iParam2 = 1018;
				*iParam3 = 23;
				return true;

			case 1107630790:
			case 1503248869:
				*iParam2 = 1018;
				*iParam3 = 24;
				return true;

			case 1807937089:
			case 1263478096:
				*iParam2 = 1018;
				*iParam3 = 25;
				return true;

			case 1453442047:
			case 745170819:
				*iParam2 = 1018;
				*iParam3 = 26;
				return true;
			}
			break;
		}
	}
	else {
		switch (iParam1) {
		case 1:
			switch (iParam0) {
			case -1795774903:
			case -379046860:
				*iParam2 = 966;
				*iParam3 = 19;
				return true;

			case 1655095722:
			case 472553912:
				*iParam2 = 966;
				*iParam3 = 20;
				return true;

			case -1951624263:
			case 147288818:
				*iParam2 = 966;
				*iParam3 = 21;
				return true;

			case -1586249913:
			case 1027988462:
				*iParam2 = 966;
				*iParam3 = 22;
				return true;

			case -1472181024:
			case 788217689:
				*iParam2 = 966;
				*iParam3 = 23;
				return true;

			case -1116178608:
			case 1338147047:
				*iParam2 = 966;
				*iParam3 = 24;
				return true;

			case -1028914761:
			case 1095820292:
				*iParam2 = 966;
				*iParam3 = 25;
				return true;

			case -654496167:
			case -1989217217:
				*iParam2 = 966;
				*iParam3 = 26;
				return true;
			}
			break;

		case 2:
			switch (iParam0) {
			case -1795774903:
			case -379046860:
				*iParam2 = 1018;
				*iParam3 = 19;
				return true;

			case 1655095722:
			case 472553912:
				*iParam2 = 1018;
				*iParam3 = 20;
				return true;

			case -1951624263:
			case 147288818:
				*iParam2 = 1018;
				*iParam3 = 21;
				return true;

			case -1586249913:
			case 1027988462:
				*iParam2 = 1018;
				*iParam3 = 22;
				return true;

			case -1472181024:
			case 788217689:
				*iParam2 = 1018;
				*iParam3 = 23;
				return true;

			case -1116178608:
			case 1338147047:
				*iParam2 = 1018;
				*iParam3 = 24;
				return true;

			case -1028914761:
			case 1095820292:
				*iParam2 = 1018;
				*iParam3 = 25;
				return true;

			case -654496167:
			case -1989217217:
				*iParam2 = 1018;
				*iParam3 = 26;
				return true;
			}
			break;
		}
	}
	iVar0 = -1;
	if (bParam4) {
		if (Global_2592887) {
			iVar0 = ped::_0x1E77FA7A62EE6C4C(iParam0);
		}
		else {
			iVar0 = ped::_0xF033419D1B81FAE8(iParam0);
		}
	}
	else if (bParam5) {
		iVar0 = ped::_0x1E77FA7A62EE6C4C(iParam0);
	}
	else {
		iVar0 = ped::_0xF033419D1B81FAE8(iParam0);
	}
	if (iVar0 == -1) {
		return false;
	}
	switch (iParam1) {
	case 1:
		switch (system::floor(system::to_float(iVar0) / 32f)) {
		case 0: *iParam2 = 1753; break;

		case 1: *iParam2 = 1754; break;

		case 2: *iParam2 = 1755; break;

		case 3: *iParam2 = 1756; break;

		case 4: *iParam2 = 1757; break;

		case 5: *iParam2 = 1758; break;

		case 6: *iParam2 = 1765; break;

		case 7: *iParam2 = 1766; break;

		case 8: *iParam2 = 1767; break;

		case 9: *iParam2 = 1768; break;

		case 10: *iParam2 = 1769; break;

		case 11: *iParam2 = 1770; break;

		case 12: *iParam2 = 1771; break;

		case 13: *iParam2 = 1779; break;

		case 14: *iParam2 = 1780; break;

		case 15: *iParam2 = 1881; break;

		case 16: *iParam2 = 1882; break;

		case 17: *iParam2 = 1913; break;

		case 18: *iParam2 = 1927; break;

		case 19: *iParam2 = 1928; break;

		case 20: *iParam2 = 1929; break;

		case 21: *iParam2 = 1930; break;

		case 22: *iParam2 = 1931; break;

		case 23: *iParam2 = 2035; break;

		case 24: *iParam2 = 2036; break;

		case 25: *iParam2 = 2062; break;

		case 26: *iParam2 = 2063; break;

		case 27: *iParam2 = 2064; break;

		case 28: *iParam2 = 2065; break;

		case 29: *iParam2 = 2066; break;

		case 30: *iParam2 = 2067; break;

		case 31: *iParam2 = 2068; break;

		case 32: *iParam2 = 2069; break;

		case 33: *iParam2 = 2070; break;

		case 34: *iParam2 = 2071; break;

		case 35: *iParam2 = 2318; break;

		case 36: *iParam2 = 2319; break;

		case 37: *iParam2 = 2371; break;

		case 38: *iParam2 = 2372; break;

		case 39: *iParam2 = 2373; break;

		case 40: *iParam2 = 2374; break;

		case 41: *iParam2 = 2433; break;

		case 42: *iParam2 = 2434; break;

		case 43: *iParam2 = 2435; break;

		case 44: *iParam2 = 2436; break;

		case 45: *iParam2 = 2437; break;

		case 46: *iParam2 = 2438; break;

		case 47: *iParam2 = 2439; break;

		case 48: *iParam2 = 2440; break;

		case 49: *iParam2 = 2441; break;

		case 50: *iParam2 = 2442; break;

		case 51: *iParam2 = 2571; break;

		case 52: *iParam2 = 2572; break;

		case 53: *iParam2 = 2573; break;

		case 54: *iParam2 = 2574; break;

		case 55: *iParam2 = 2575; break;

		case 56: *iParam2 = 2576; break;

		case 57: *iParam2 = 2577; break;

		case 58: *iParam2 = 2578; break;

		case 59: *iParam2 = 2579; break;

		case 60: *iParam2 = 2580; break;

		case 61: *iParam2 = 2581; break;

		case 62: *iParam2 = 3178; break;

		case 63: *iParam2 = 3179; break;

		case 64: *iParam2 = 3180; break;

		case 65: *iParam2 = 3181; break;

		case 66: *iParam2 = 3182; break;

		case 67: *iParam2 = 3183; break;

		case 68: *iParam2 = 3651; break;

		case 69: *iParam2 = 3652; break;

		case 70: *iParam2 = 3653; break;

		case 71: *iParam2 = 3654; break;

		case 72: *iParam2 = 3655; break;

		case 73: *iParam2 = 3656; break;

		case 74: *iParam2 = 3657; break;

		case 75: *iParam2 = 3658; break;

		case 76: *iParam2 = 3659; break;

		case 77: *iParam2 = 3660; break;

		case 78: *iParam2 = 3764; break;

		case 79: *iParam2 = 3765; break;

		case 80: *iParam2 = 3766; break;

		case 81: *iParam2 = 3767; break;

		case 82: *iParam2 = 3768; break;

		case 83: *iParam2 = 3769; break;

		case 84: *iParam2 = 3770; break;

		case 85: *iParam2 = 3771; break;

		case 86: *iParam2 = 3874; break;

		case 87: *iParam2 = 3875; break;

		case 88: *iParam2 = 3876; break;

		case 89: *iParam2 = 5309; break;

		case 90: *iParam2 = 5310; break;

		case 91: *iParam2 = 5311; break;

		case 92: *iParam2 = 5312; break;

		case 93: *iParam2 = 5313; break;

		case 94: *iParam2 = 5314; break;

		case 95: *iParam2 = 5315; break;

		case 96: *iParam2 = 5316; break;

		case 97: *iParam2 = 5317; break;

		case 98: *iParam2 = 5318; break;

		case 99: *iParam2 = 5319; break;

		case 100: *iParam2 = 5320; break;

		default: break;
		}
		break;

	case 2:
		switch (system::floor(system::to_float(iVar0) / 32f)) {
		case 0: *iParam2 = 1759; break;

		case 1: *iParam2 = 1760; break;

		case 2: *iParam2 = 1761; break;

		case 3: *iParam2 = 1762; break;

		case 4: *iParam2 = 1763; break;

		case 5: *iParam2 = 1764; break;

		case 6: *iParam2 = 1772; break;

		case 7: *iParam2 = 1773; break;

		case 8: *iParam2 = 1774; break;

		case 9: *iParam2 = 1775; break;

		case 10: *iParam2 = 1776; break;

		case 11: *iParam2 = 1777; break;

		case 12: *iParam2 = 1778; break;

		case 13: *iParam2 = 1781; break;

		case 14: *iParam2 = 1782; break;

		case 15: *iParam2 = 1883; break;

		case 16: *iParam2 = 1884; break;

		case 17: *iParam2 = 1914; break;

		case 18: *iParam2 = 1932; break;

		case 19: *iParam2 = 1933; break;

		case 20: *iParam2 = 1934; break;

		case 21: *iParam2 = 1935; break;

		case 22: *iParam2 = 1936; break;

		case 23: *iParam2 = 2037; break;

		case 24: *iParam2 = 2038; break;

		case 25: *iParam2 = 2072; break;

		case 26: *iParam2 = 2073; break;

		case 27: *iParam2 = 2074; break;

		case 28: *iParam2 = 2075; break;

		case 29: *iParam2 = 2076; break;

		case 30: *iParam2 = 2077; break;

		case 31: *iParam2 = 2078; break;

		case 32: *iParam2 = 2079; break;

		case 33: *iParam2 = 2080; break;

		case 34: *iParam2 = 2081; break;

		case 35: *iParam2 = 2320; break;

		case 36: *iParam2 = 2321; break;

		case 37: *iParam2 = 2375; break;

		case 38: *iParam2 = 2376; break;

		case 39: *iParam2 = 2377; break;

		case 40: *iParam2 = 2378; break;

		case 41: *iParam2 = 2443; break;

		case 42: *iParam2 = 2444; break;

		case 43: *iParam2 = 2445; break;

		case 44: *iParam2 = 2446; break;

		case 45: *iParam2 = 2447; break;

		case 46: *iParam2 = 2448; break;

		case 47: *iParam2 = 2449; break;

		case 48: *iParam2 = 2450; break;

		case 49: *iParam2 = 2451; break;

		case 50: *iParam2 = 2452; break;

		case 51: *iParam2 = 2582; break;

		case 52: *iParam2 = 2583; break;

		case 53: *iParam2 = 2584; break;

		case 54: *iParam2 = 2585; break;

		case 55: *iParam2 = 2586; break;

		case 56: *iParam2 = 2587; break;

		case 57: *iParam2 = 2588; break;

		case 58: *iParam2 = 2589; break;

		case 59: *iParam2 = 2590; break;

		case 60: *iParam2 = 2591; break;

		case 61: *iParam2 = 2592; break;

		case 62: *iParam2 = 3184; break;

		case 63: *iParam2 = 3185; break;

		case 64: *iParam2 = 3186; break;

		case 65: *iParam2 = 3187; break;

		case 66: *iParam2 = 3188; break;

		case 67: *iParam2 = 3189; break;

		case 68: *iParam2 = 3661; break;

		case 69: *iParam2 = 3662; break;

		case 70: *iParam2 = 3663; break;

		case 71: *iParam2 = 3664; break;

		case 72: *iParam2 = 3665; break;

		case 73: *iParam2 = 3666; break;

		case 74: *iParam2 = 3667; break;

		case 75: *iParam2 = 3668; break;

		case 76: *iParam2 = 3669; break;

		case 77: *iParam2 = 3670; break;

		case 78: *iParam2 = 3772; break;

		case 79: *iParam2 = 3773; break;

		case 80: *iParam2 = 3774; break;

		case 81: *iParam2 = 3775; break;

		case 82: *iParam2 = 3776; break;

		case 83: *iParam2 = 3777; break;

		case 84: *iParam2 = 3778; break;

		case 85: *iParam2 = 3779; break;

		case 86: *iParam2 = 3877; break;

		case 87: *iParam2 = 3878; break;

		case 88: *iParam2 = 3879; break;

		case 89: *iParam2 = 5321; break;

		case 90: *iParam2 = 5322; break;

		case 91: *iParam2 = 5323; break;

		case 92: *iParam2 = 5324; break;

		case 93: *iParam2 = 5325; break;

		case 94: *iParam2 = 5326; break;

		case 95: *iParam2 = 5327; break;

		case 96: *iParam2 = 5328; break;

		case 97: *iParam2 = 5329; break;

		case 98: *iParam2 = 5330; break;

		case 99: *iParam2 = 5331; break;

		case 100: *iParam2 = 5332; break;

		default: break;
		}
		break;
	}
	*iParam3 = iVar0 % 32;
	return *iParam2 != 6022;
}

// Position - 0x4E6A
bool func_22(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x4E78
int func_23(int iParam0) {
	switch (iParam0) {
	case -1: return 0;

	case 0: return 0;

	case 1: return 1;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 5: return 5;

	case 6: return 6;

	case 7: return 7;

	case 8: return 8;

	case 9: return 0;

	case 10: return 1;

	case 11: return 0;

	case 12: return 0;

	case 13: return 0;
	}
	return 0;
}

// Position - 0x4F4C
void func_24(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;

	iVar0 = iParam1 - iParam2;
	iVar0 = iVar0;
	if (iVar0 < 0) {
		return;
	}
	iVar1 = Global_69523[0 /*14*/].f_5;
	if (iParam0 == 12) {
		iVar18 = 0;
		iVar19 = dlc1::_0xF3FBE2D50A6A8C28(iVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19) {
			dlc1::get_shop_ped_query_outfit(iVar17, &Var2);
			if (!dlc1::_is_dlc_data_empty(Var2)) {
				if (iVar18 == iParam1 - iParam2) {
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_13(&Global_69523[0 /*14*/], iParam0, iParam1, &Var2.f_7, 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13) {
		func_13(&Global_69523[0 /*14*/], iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14) {
		dlc1::init_shop_ped_prop(&Var20);
		iVar39 = 0;
		iVar40 = dlc1::_get_num_props_from_outfit(iVar1, 6, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40) {
			dlc1::get_shop_ped_query_prop(iVar38, &Var20);
			if (!dlc1::_is_dlc_data_empty(Var20)) {
				if (iVar39 == iParam1 - iParam2) {
					if (Var20.f_6 == 0) {
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1) {
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2) {
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3) {
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4) {
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5) {
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6) {
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7) {
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8) {
						iVar37 = 8;
					}
					else {
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20;
					func_13(&Global_69523[0 /*14*/], iParam0, iParam1, &Var20.f_9, Var20.f_3, Var20.f_4, Var20.f_5,
							dlc1::_0x341DE7ED1D2A1BFD(Var20.f_1, -2050632586, 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else {
		dlc1::init_shop_ped_component(&Var41);
		iVar59 = 0;
		iVar60 = dlc1::_get_num_props_from_outfit(iVar1, 6, -1, 0, -1, func_25(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60) {
			dlc1::get_shop_ped_query_component(iVar58, &Var41);
			if (!dlc1::_is_dlc_data_empty(Var41)) {
				if (iVar59 == iParam1 - iParam2) {
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_13(&Global_69523[0 /*14*/], iParam0, iParam1, &Var41.f_9, Var41.f_3, Var41.f_4, Var41.f_5,
							dlc1::_0x341DE7ED1D2A1BFD(Var41.f_1, -2050632586, 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

// Position - 0x51C6
int func_25(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 6: return 6;

	case 5: return 5;

	case 8: return 8;

	case 9: return 9;

	case 10: return 10;

	case 1: return 1;

	case 7: return 7;

	case 11: return 11;
	}
	return 0;
}

// Position - 0x5276
void func_26(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_24(iVar10, iParam0, 9); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x53C2
void func_27(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "OUTFIT_P2_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "OUTFIT_P2_5", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "OUTFIT_P2_6", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "OUTFIT_P2_7", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "OUTFIT_P2_8", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "OUTFIT_P2_9", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "OUTFIT_P2_10", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "OUTFIT_P2_12", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 9:
		StringCopy(&Var2, "OUTFIT_P2_13", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "OUTFIT_P2_14", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 11:
		StringCopy(&Var2, "OUTFIT_P2_15", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 12:
		StringCopy(&Var2, "OUTFIT_P2_16", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "OUTFIT_P2_17", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 14:
		StringCopy(&Var2, "OUTFIT_P2_18", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 15:
		StringCopy(&Var2, "OUTFIT_P2_19", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 16:
		StringCopy(&Var2, "OUTFIT_P2_20", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "OUTFIT_P2_21", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 18:
		StringCopy(&Var2, "OUTFIT_P2_22", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 19:
		StringCopy(&Var2, "OUTFIT_P2_23", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 20:
		StringCopy(&Var2, "OUTFIT_P2_24", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 21:
		StringCopy(&Var2, "OUTFIT_P2_25", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 22:
		StringCopy(&Var2, "OUTFIT_P2_26", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 23:
		StringCopy(&Var2, "OUTFIT_P2_27", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 24:
		StringCopy(&Var2, "OUTFIT_P2_28", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 119;
		break;

	case 25:
		StringCopy(&Var2, "OUTFIT_P2_29", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 99;
		break;

	case 26:
		StringCopy(&Var2, "OUTFIT_P2_30", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 129;
		break;

	case 27:
		StringCopy(&Var2, "OUTFIT_P2_44", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 125;
		break;

	case 28:
		StringCopy(&Var2, "OUTFIT_P2_45", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 120;
		break;

	case 29:
		StringCopy(&Var2, "OUTFIT_P2_46", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 139;
		break;

	case 30:
		StringCopy(&Var2, "OUTFIT_P2_47", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 149;
		break;

	case 31:
		StringCopy(&Var2, "OUTFIT_P2_48", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 145;
		break;

	case 32:
		StringCopy(&Var2, "OUTFIT_P2_49", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 140;
		break;

	case 33:
		StringCopy(&Var2, "OUTFIT_P2_50", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 135;
		break;

	case 34:
		StringCopy(&Var2, "OUTFIT_P2_31", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 35:
		StringCopy(&Var2, "OUTFIT_P2_32", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 36:
		StringCopy(&Var2, "OUTFIT_P2_33", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 37:
		StringCopy(&Var2, "OUTFIT_P2_34", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 38:
		StringCopy(&Var2, "OUTFIT_P2_35", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 39:
		StringCopy(&Var2, "OUTFIT_P2_36", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 40:
		StringCopy(&Var2, "OUTFIT_P2_37", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5500;
		break;

	case 41:
		StringCopy(&Var2, "OUTFIT_P2_38", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 42:
		StringCopy(&Var2, "OUTFIT_P2_39", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 43:
		StringCopy(&Var2, "OUTFIT_P2_40", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 44:
		StringCopy(&Var2, "OUTFIT_P2_41", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "OUTFIT_P2_42", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 46:
		StringCopy(&Var2, "OUTFIT_P2_43", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 47:
		StringCopy(&Var2, "OUTFIT_P2_12", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_24(iVar10, iParam0, 48); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x58CE
void func_28(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_24(iVar10, iParam0, 1); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x5941
void func_29(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_24(iVar10, iParam0, 1); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x59B3
void func_30(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "BERD_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "BERD_P2_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "BERD_P2_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "BERD_P2_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "BERD_P2_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "BERD_P2_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	default: func_24(iVar10, iParam0, 6); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x5A99
void func_31(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 2;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 3;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 4;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 5;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 2;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 3;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 4;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 5;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 6;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 7;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 8;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 9;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 1;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 2;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 3;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 4;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 5;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 6;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 1;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 2;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 3;
		break;

	default: func_24(iVar10, iParam0, 33); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x5DDA
void func_32(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 2;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 3;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "SPEC2_P0_08_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 125;
		break;

	case 10:
		StringCopy(&Var2, "SPEC2_P0_08_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 150;
		break;

	case 11:
		StringCopy(&Var2, "SPEC2_P0_08_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 175;
		break;

	case 12:
		StringCopy(&Var2, "SPEC2_P0_08_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 85;
		break;

	case 13:
		StringCopy(&Var2, "SPEC2_P0_08_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 14:
		StringCopy(&Var2, "SPEC2_P0_08_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 175;
		break;

	case 15:
		StringCopy(&Var2, "PROPS_P1_H8_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 270;
		break;

	case 16:
		StringCopy(&Var2, "PROPS_P1_H8_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 270;
		break;

	default: func_24(iVar10, iParam0, 17); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x5FE1
void func_33(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "SPEC_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "SPEC_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_24(iVar10, iParam0, 18); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x6200
void func_34(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_24(iVar10, iParam0, 7); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x6308
void func_35(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "FEET_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "FEET_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 22;
		break;

	case 2:
		StringCopy(&Var2, "FEET_P2_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 45;
		break;

	case 3:
		StringCopy(&Var2, "FEET_P2_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 65;
		break;

	case 4:
		StringCopy(&Var2, "FEET_P2_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 58;
		break;

	case 5:
		StringCopy(&Var2, "FEET_P2_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 72;
		break;

	case 6:
		StringCopy(&Var2, "FEET_P2_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 68;
		break;

	case 7:
		StringCopy(&Var2, "FEET_P2_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 60;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "FEET_P2_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "FEET_P2_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "FEET_P2_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "FEET_P2_9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 680;
		break;

	case 18:
		StringCopy(&Var2, "FEET_P2_9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 19:
		StringCopy(&Var2, "FEET_P2_9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 670;
		break;

	case 20:
		StringCopy(&Var2, "FEET_P2_9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 700;
		break;

	case 21:
		StringCopy(&Var2, "FEET_P2_9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 680;
		break;

	case 22:
		StringCopy(&Var2, "FEET_P2_9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 720;
		break;

	case 23:
		StringCopy(&Var2, "FEET_P2_9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 740;
		break;

	case 24:
		StringCopy(&Var2, "FEET_P2_9_8", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 760;
		break;

	case 25:
		StringCopy(&Var2, "FEET_P2_9_9", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 780;
		break;

	case 26:
		StringCopy(&Var2, "FEET_P2_9_10", 16);
		iVar6 = 9;
		iVar7 = 10;
		iVar1 = 750;
		break;

	case 27:
		StringCopy(&Var2, "FEET_P2_9_11", 16);
		iVar6 = 9;
		iVar7 = 11;
		iVar1 = 700;
		break;

	case 28:
		StringCopy(&Var2, "FEET_P2_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		break;

	case 36:
		StringCopy(&Var2, "FEET_P2_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 790;
		break;

	case 37:
		StringCopy(&Var2, "FEET_P2_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 750;
		break;

	case 38:
		StringCopy(&Var2, "FEET_P2_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 860;
		break;

	case 39:
		StringCopy(&Var2, "FEET_P2_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 750;
		break;

	case 40:
		StringCopy(&Var2, "FEET_P2_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 790;
		break;

	case 41:
		StringCopy(&Var2, "FEET_P2_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 42:
		StringCopy(&Var2, "FEET_P2_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 820;
		break;

	case 43:
		StringCopy(&Var2, "FEET_P2_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 800;
		break;

	case 44:
		StringCopy(&Var2, "FEET_P2_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar1 = 850;
		break;

	case 45:
		StringCopy(&Var2, "FEET_P2_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar1 = 870;
		break;

	case 46:
		StringCopy(&Var2, "FEET_P2_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar1 = 720;
		break;

	case 47:
		StringCopy(&Var2, "FEET_P2_18_11", 16);
		iVar6 = 18;
		iVar7 = 11;
		iVar1 = 740;
		break;

	case 48:
		StringCopy(&Var2, "FEET_P2_18_12", 16);
		iVar6 = 18;
		iVar7 = 12;
		iVar1 = 800;
		break;

	case 49:
		StringCopy(&Var2, "FEET_P2_18_13", 16);
		iVar6 = 18;
		iVar7 = 13;
		iVar1 = 750;
		break;

	case 50:
		StringCopy(&Var2, "FEET_P2_18_14", 16);
		iVar6 = 18;
		iVar7 = 14;
		iVar1 = 770;
		break;

	case 51:
		StringCopy(&Var2, "FEET_P2_18_15", 16);
		iVar6 = 18;
		iVar7 = 15;
		iVar1 = 860;
		break;

	case 52:
		StringCopy(&Var2, "FEET_P2_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 850;
		break;

	case 53:
		StringCopy(&Var2, "FEET_P2_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 800;
		break;

	case 54:
		StringCopy(&Var2, "FEET_P2_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 780;
		break;

	case 55:
		StringCopy(&Var2, "FEET_P2_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 890;
		break;

	case 56:
		StringCopy(&Var2, "FEET_P2_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 820;
		break;

	case 57:
		StringCopy(&Var2, "FEET_P2_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 58:
		StringCopy(&Var2, "FEET_P2_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 870;
		break;

	case 59:
		StringCopy(&Var2, "FEET_P2_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 930;
		break;

	case 60:
		StringCopy(&Var2, "FEET_P2_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 880;
		break;

	case 61:
		StringCopy(&Var2, "FEET_P2_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 900;
		break;

	case 62:
		StringCopy(&Var2, "FEET_P2_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 920;
		break;

	case 63:
		StringCopy(&Var2, "FEET_P2_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 970;
		break;

	case 64:
		StringCopy(&Var2, "FEET_P2_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 990;
		break;

	case 65:
		StringCopy(&Var2, "FEET_P2_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 960;
		break;

	case 66:
		StringCopy(&Var2, "FEET_P2_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 980;
		break;

	case 67:
		StringCopy(&Var2, "FEET_P2_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 950;
		break;

	case 68:
		StringCopy(&Var2, "FEET_P2_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 110;
		break;

	case 69:
		StringCopy(&Var2, "FEET_P2_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 70:
		StringCopy(&Var2, "FEET_P2_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 120;
		break;

	case 71:
		StringCopy(&Var2, "FEET_P2_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 72:
		StringCopy(&Var2, "FEET_P2_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 125;
		break;

	case 73:
		StringCopy(&Var2, "FEET_P2_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 128;
		break;

	case 74:
		StringCopy(&Var2, "FEET_P2_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 135;
		break;

	case 75:
		StringCopy(&Var2, "FEET_P2_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 130;
		break;

	case 76:
		StringCopy(&Var2, "FEET_P2_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 145;
		break;

	case 77:
		StringCopy(&Var2, "FEET_P2_20_9", 16);
		iVar6 = 20;
		iVar7 = 9;
		iVar1 = 110;
		break;

	case 78:
		StringCopy(&Var2, "FEET_P2_20_10", 16);
		iVar6 = 20;
		iVar7 = 10;
		iVar1 = 120;
		break;

	case 79:
		StringCopy(&Var2, "FEET_P2_20_11", 16);
		iVar6 = 20;
		iVar7 = 11;
		iVar1 = 150;
		break;

	case 80:
		StringCopy(&Var2, "FEET_P2_20_12", 16);
		iVar6 = 20;
		iVar7 = 12;
		iVar1 = 125;
		break;

	case 81:
		StringCopy(&Var2, "FEET_P2_20_13", 16);
		iVar6 = 20;
		iVar7 = 13;
		iVar1 = 120;
		break;

	case 82:
		StringCopy(&Var2, "FEET_P2_20_14", 16);
		iVar6 = 20;
		iVar7 = 14;
		iVar1 = 130;
		break;

	case 83:
		StringCopy(&Var2, "FEET_P2_20_15", 16);
		iVar6 = 20;
		iVar7 = 15;
		iVar1 = 110;
		break;

	default: func_24(iVar10, iParam0, 84); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x6C99
void func_36(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "LEGS_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "LEGS_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 95;
		break;

	case 2:
		StringCopy(&Var2, "LEGS_P2_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 129;
		break;

	case 3:
		StringCopy(&Var2, "LEGS_P2_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 115;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "LEGS_P2_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "LEGS_P2_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 750;
		break;

	case 20:
		StringCopy(&Var2, "LEGS_P2_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 21:
		StringCopy(&Var2, "LEGS_P2_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 850;
		break;

	case 22:
		StringCopy(&Var2, "LEGS_P2_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 850;
		break;

	case 23:
		StringCopy(&Var2, "LEGS_P2_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 750;
		break;

	case 24:
		StringCopy(&Var2, "LEGS_P2_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 690;
		break;

	case 25:
		StringCopy(&Var2, "LEGS_P2_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 820;
		break;

	case 26:
		StringCopy(&Var2, "LEGS_P2_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 650;
		break;

	case 27:
		StringCopy(&Var2, "LEGS_P2_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 690;
		break;

	case 28:
		StringCopy(&Var2, "LEGS_P2_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 690;
		break;

	case 29:
		StringCopy(&Var2, "LEGS_P2_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 820;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "LEGS_P2_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 33:
		StringCopy(&Var2, "LEGS_P2_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 34:
		StringCopy(&Var2, "LEGS_P2_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "LEGS_P2_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 58;
		break;

	case 36:
		StringCopy(&Var2, "LEGS_P2_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar1 = 68;
		break;

	case 37:
		StringCopy(&Var2, "LEGS_P2_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		iVar1 = 65;
		break;

	case 38:
		StringCopy(&Var2, "LEGS_P2_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 60;
		break;

	case 39:
		StringCopy(&Var2, "LEGS_P2_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 65;
		break;

	case 40:
		StringCopy(&Var2, "LEGS_P2_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 63;
		break;

	case 41:
		StringCopy(&Var2, "LEGS_P2_17_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		iVar1 = 60;
		break;

	case 42:
		StringCopy(&Var2, "LEGS_P2_17_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		iVar1 = 58;
		break;

	case 43:
		StringCopy(&Var2, "LEGS_P2_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 44:
		StringCopy(&Var2, "LEGS_P2_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		break;

	case 45:
		StringCopy(&Var2, "LEGS_P2_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 99;
		break;

	case 46:
		StringCopy(&Var2, "LEGS_P2_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 105;
		break;

	case 47:
		StringCopy(&Var2, "LEGS_P2_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 110;
		break;

	case 48:
		StringCopy(&Var2, "LEGS_P2_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 110;
		break;

	case 49:
		StringCopy(&Var2, "LEGS_P2_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 99;
		break;

	case 50:
		StringCopy(&Var2, "LEGS_P2_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 110;
		break;

	case 51:
		StringCopy(&Var2, "LEGS_P2_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar1 = 110;
		break;

	case 52:
		StringCopy(&Var2, "LEGS_P2_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar1 = 105;
		break;

	case 53:
		StringCopy(&Var2, "LEGS_P2_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar1 = 105;
		break;

	case 54:
		StringCopy(&Var2, "LEGS_P2_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 15;
		break;

	case 55:
		StringCopy(&Var2, "LEGS_P2_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 15;
		break;

	case 56:
		StringCopy(&Var2, "LEGS_P2_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 15;
		break;

	case 57:
		StringCopy(&Var2, "LEGS_P2_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 15;
		break;

	case 58:
		StringCopy(&Var2, "LEGS_P2_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 15;
		break;

	case 59:
		StringCopy(&Var2, "LEGS_P2_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 15;
		break;

	case 60:
		StringCopy(&Var2, "LEGS_P2_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 15;
		break;

	case 61:
		StringCopy(&Var2, "LEGS_P2_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 15;
		break;

	case 62:
		StringCopy(&Var2, "LEGS_P2_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 600;
		break;

	case 63:
		StringCopy(&Var2, "LEGS_P2_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 600;
		break;

	case 64:
		StringCopy(&Var2, "LEGS_P2_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 600;
		break;

	case 65:
		StringCopy(&Var2, "LEGS_P2_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 600;
		break;

	case 66:
		StringCopy(&Var2, "LEGS_P2_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 600;
		break;

	case 67:
		StringCopy(&Var2, "LEGS_P2_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 600;
		break;

	case 68:
		StringCopy(&Var2, "LEGS_P2_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 600;
		break;

	case 69:
		StringCopy(&Var2, "LEGS_P2_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 600;
		break;

	case 70:
		StringCopy(&Var2, "LEGS_P2_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 600;
		break;

	case 71:
		StringCopy(&Var2, "LEGS_P2_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 80;
		break;

	case 72:
		StringCopy(&Var2, "LEGS_P2_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 80;
		break;

	case 73:
		StringCopy(&Var2, "LEGS_P2_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 80;
		break;

	case 74:
		StringCopy(&Var2, "LEGS_P2_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 80;
		break;

	case 75:
		StringCopy(&Var2, "LEGS_P2_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 80;
		break;

	case 76:
		StringCopy(&Var2, "LEGS_P2_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 80;
		break;

	case 77:
		StringCopy(&Var2, "LEGS_P2_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 80;
		break;

	case 78:
		StringCopy(&Var2, "LEGS_P2_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 80;
		break;

	case 79:
		StringCopy(&Var2, "LEGS_P2_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 80;
		break;

	case 80:
		StringCopy(&Var2, "LEGS_P2_21_9", 16);
		iVar6 = 21;
		iVar7 = 9;
		iVar1 = 80;
		break;

	case 81:
		StringCopy(&Var2, "LEGS_P2_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		break;

	case 82:
		StringCopy(&Var2, "LEGS_P2_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 12;
		break;

	case 83:
		StringCopy(&Var2, "LEGS_P2_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 12;
		break;

	case 84:
		StringCopy(&Var2, "LEGS_P2_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 22;
		break;

	case 85:
		StringCopy(&Var2, "LEGS_P2_22_4", 16);
		iVar6 = 22;
		iVar7 = 4;
		iVar1 = 18;
		break;

	case 86:
		StringCopy(&Var2, "LEGS_P2_22_5", 16);
		iVar6 = 22;
		iVar7 = 5;
		iVar1 = 20;
		break;

	case 87:
		StringCopy(&Var2, "LEGS_P2_22_6", 16);
		iVar6 = 22;
		iVar7 = 6;
		iVar1 = 30;
		break;

	case 88:
		StringCopy(&Var2, "LEGS_P2_22_7", 16);
		iVar6 = 22;
		iVar7 = 7;
		iVar1 = 30;
		break;

	case 89:
		StringCopy(&Var2, "LEGS_P2_22_8", 16);
		iVar6 = 22;
		iVar7 = 8;
		iVar1 = 30;
		break;

	case 90:
		StringCopy(&Var2, "LEGS_P2_22_9", 16);
		iVar6 = 22;
		iVar7 = 9;
		iVar1 = 30;
		break;

	case 91:
		StringCopy(&Var2, "LEGS_P2_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		break;

	case 92:
		StringCopy(&Var2, "LEGS_P2_24_0", 16);
		iVar6 = 24;
		iVar7 = 0;
		break;

	case 93:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 94:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 0;
		break;

	case 95:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 1;
		break;

	case 96:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 2;
		break;

	case 97:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 3;
		break;

	case 98:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 4;
		break;

	case 99:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 5;
		break;

	case 100:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 6;
		break;

	case 101:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 7;
		break;

	case 102:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 8;
		break;

	case 103:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 9;
		break;

	default: func_24(iVar10, iParam0, 104); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x77F0
void func_37(int iParam0) {
	if (iParam0 < 136) {
		func_39(iParam0);
	}
	else {
		func_38(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1) {
		func_24(3, iParam0, 242);
	}
}

// Position - 0x7824
void func_38(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 136:
		StringCopy(&Var2, "TORSO_P2_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 32;
		break;

	case 137:
		StringCopy(&Var2, "TORSO_P2_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 39;
		break;

	case 138:
		StringCopy(&Var2, "TORSO_P2_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 40;
		break;

	case 139:
		StringCopy(&Var2, "TORSO_P2_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 42;
		break;

	case 140:
		StringCopy(&Var2, "TORSO_P2_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 45;
		break;

	case 141:
		StringCopy(&Var2, "TORSO_P2_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 48;
		break;

	case 142:
		StringCopy(&Var2, "TORSO_P2_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 52;
		break;

	case 143:
		StringCopy(&Var2, "TORSO_P2_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 55;
		break;

	case 144:
		StringCopy(&Var2, "TORSO_P2_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar1 = 390;
		break;

	case 145:
		StringCopy(&Var2, "TORSO_P2_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 390;
		break;

	case 146:
		StringCopy(&Var2, "TORSO_P2_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 560;
		break;

	case 147:
		StringCopy(&Var2, "TORSO_P2_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 390;
		break;

	case 148:
		StringCopy(&Var2, "TORSO_P2_22_4", 16);
		iVar6 = 22;
		iVar7 = 4;
		iVar1 = 390;
		break;

	case 149:
		StringCopy(&Var2, "TORSO_P2_22_5", 16);
		iVar6 = 22;
		iVar7 = 5;
		iVar1 = 390;
		break;

	case 150:
		StringCopy(&Var2, "TORSO_P2_22_6", 16);
		iVar6 = 22;
		iVar7 = 6;
		iVar1 = 560;
		break;

	case 151:
		StringCopy(&Var2, "TORSO_P2_22_7", 16);
		iVar6 = 22;
		iVar7 = 7;
		iVar1 = 390;
		break;

	case 152:
		StringCopy(&Var2, "TORSO_P2_22_8", 16);
		iVar6 = 22;
		iVar7 = 8;
		iVar1 = 390;
		break;

	case 153:
		StringCopy(&Var2, "TORSO_P2_22_9", 16);
		iVar6 = 22;
		iVar7 = 9;
		iVar1 = 390;
		break;

	case 154:
		StringCopy(&Var2, "TORSO_P2_22_10", 16);
		iVar6 = 22;
		iVar7 = 10;
		iVar1 = 390;
		break;

	case 155:
		StringCopy(&Var2, "TORSO_P2_22_11", 16);
		iVar6 = 22;
		iVar7 = 11;
		iVar1 = 3950;
		break;

	case 156:
		StringCopy(&Var2, "TORSO_P2_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar1 = 150;
		break;

	case 157:
		StringCopy(&Var2, "TORSO_P2_23_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		break;

	case 158:
		StringCopy(&Var2, "TORSO_P2_23_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar1 = 150;
		break;

	case 159:
		StringCopy(&Var2, "TORSO_P2_23_3", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar1 = 150;
		break;

	case 160:
		StringCopy(&Var2, "TORSO_P2_23_4", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar1 = 160;
		break;

	case 161:
		StringCopy(&Var2, "TORSO_P2_23_5", 16);
		iVar6 = 23;
		iVar7 = 5;
		break;

	case 162:
		StringCopy(&Var2, "TORSO_P2_24_0", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar1 = 19;
		break;

	case 163:
		StringCopy(&Var2, "TORSO_P2_24_1", 16);
		iVar6 = 24;
		iVar7 = 1;
		iVar1 = 20;
		break;

	case 164:
		StringCopy(&Var2, "TORSO_P2_24_2", 16);
		iVar6 = 24;
		iVar7 = 2;
		iVar1 = 19;
		break;

	case 165:
		StringCopy(&Var2, "TORSO_P2_24_3", 16);
		iVar6 = 24;
		iVar7 = 3;
		iVar1 = 22;
		break;

	case 166:
		StringCopy(&Var2, "TORSO_P2_24_4", 16);
		iVar6 = 24;
		iVar7 = 4;
		iVar1 = 20;
		break;

	case 167:
		StringCopy(&Var2, "TORSO_P2_24_5", 16);
		iVar6 = 24;
		iVar7 = 5;
		iVar1 = 28;
		break;

	case 168:
		StringCopy(&Var2, "TORSO_P2_24_6", 16);
		iVar6 = 24;
		iVar7 = 6;
		iVar1 = 28;
		break;

	case 169:
		StringCopy(&Var2, "TORSO_P2_24_7", 16);
		iVar6 = 24;
		iVar7 = 7;
		iVar1 = 25;
		break;

	case 170:
		StringCopy(&Var2, "TORSO_P2_24_8", 16);
		iVar6 = 24;
		iVar7 = 8;
		iVar1 = 22;
		break;

	case 171:
		StringCopy(&Var2, "TORSO_P2_24_9", 16);
		iVar6 = 24;
		iVar7 = 9;
		iVar1 = 19;
		break;

	case 172:
		StringCopy(&Var2, "TORSO_P2_24_10", 16);
		iVar6 = 24;
		iVar7 = 10;
		iVar1 = 22;
		break;

	case 173:
		StringCopy(&Var2, "TORSO_P2_24_11", 16);
		iVar6 = 24;
		iVar7 = 11;
		iVar1 = 19;
		break;

	case 174:
		StringCopy(&Var2, "TORSO_P2_24_12", 16);
		iVar6 = 24;
		iVar7 = 12;
		iVar1 = 20;
		break;

	case 175:
		StringCopy(&Var2, "TORSO_P2_24_13", 16);
		iVar6 = 24;
		iVar7 = 13;
		iVar1 = 25;
		break;

	case 176:
		StringCopy(&Var2, "TORSO_P2_24_14", 16);
		iVar6 = 24;
		iVar7 = 14;
		iVar1 = 20;
		break;

	case 177:
		StringCopy(&Var2, "TORSO_P2_24_15", 16);
		iVar6 = 24;
		iVar7 = 15;
		iVar1 = 28;
		break;

	case 178:
		StringCopy(&Var2, "TORSO_P2_25_0", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar1 = 35;
		break;

	case 179:
		StringCopy(&Var2, "TORSO_P2_25_1", 16);
		iVar6 = 25;
		iVar7 = 1;
		iVar1 = 40;
		break;

	case 180:
		StringCopy(&Var2, "TORSO_P2_25_2", 16);
		iVar6 = 25;
		iVar7 = 2;
		iVar1 = 45;
		break;

	case 181:
		StringCopy(&Var2, "TORSO_P2_25_3", 16);
		iVar6 = 25;
		iVar7 = 3;
		iVar1 = 45;
		break;

	case 182:
		StringCopy(&Var2, "TORSO_P2_25_4", 16);
		iVar6 = 25;
		iVar7 = 4;
		iVar1 = 49;
		break;

	case 183:
		StringCopy(&Var2, "TORSO_P2_25_5", 16);
		iVar6 = 25;
		iVar7 = 5;
		iVar1 = 820;
		break;

	case 184:
		StringCopy(&Var2, "TORSO_P2_25_6", 16);
		iVar6 = 25;
		iVar7 = 6;
		iVar1 = 790;
		break;

	case 185:
		StringCopy(&Var2, "TORSO_P2_25_7", 16);
		iVar6 = 25;
		iVar7 = 7;
		iVar1 = 820;
		break;

	case 186:
		StringCopy(&Var2, "TORSO_P2_25_8", 16);
		iVar6 = 25;
		iVar7 = 8;
		iVar1 = 929;
		break;

	case 187:
		StringCopy(&Var2, "TORSO_P2_25_9", 16);
		iVar6 = 25;
		iVar7 = 9;
		iVar1 = 40;
		break;

	case 188:
		StringCopy(&Var2, "TORSO_P2_25_10", 16);
		iVar6 = 25;
		iVar7 = 10;
		iVar1 = 850;
		break;

	case 189:
		StringCopy(&Var2, "TORSO_P2_25_11", 16);
		iVar6 = 25;
		iVar7 = 11;
		iVar1 = 790;
		break;

	case 190:
		StringCopy(&Var2, "TORSO_P2_26_0", 16);
		iVar6 = 26;
		iVar7 = 0;
		break;

	case 191:
		StringCopy(&Var2, "TORSO_P2_26_1", 16);
		iVar6 = 26;
		iVar7 = 1;
		break;

	case 192:
		StringCopy(&Var2, "TORSO_P2_26_2", 16);
		iVar6 = 26;
		iVar7 = 2;
		break;

	case 193:
		StringCopy(&Var2, "TORSO_P2_26_3", 16);
		iVar6 = 26;
		iVar7 = 3;
		break;

	case 194:
		StringCopy(&Var2, "TORSO_P2_26_4", 16);
		iVar6 = 26;
		iVar7 = 4;
		break;

	case 195:
		StringCopy(&Var2, "TORSO_P2_26_5", 16);
		iVar6 = 26;
		iVar7 = 5;
		break;

	case 196:
		StringCopy(&Var2, "TORSO_P2_26_6", 16);
		iVar6 = 26;
		iVar7 = 6;
		break;

	case 197:
		StringCopy(&Var2, "TORSO_P2_26_7", 16);
		iVar6 = 26;
		iVar7 = 7;
		break;

	case 198:
		StringCopy(&Var2, "TORSO_P2_26_8", 16);
		iVar6 = 26;
		iVar7 = 8;
		break;

	case 199:
		StringCopy(&Var2, "TORSO_P2_26_9", 16);
		iVar6 = 26;
		iVar7 = 9;
		break;

	case 200:
		StringCopy(&Var2, "TORSO_P2_27_0", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar1 = 2200;
		break;

	case 201:
		StringCopy(&Var2, "TORSO_P2_27_1", 16);
		iVar6 = 27;
		iVar7 = 1;
		iVar1 = 2500;
		break;

	case 202:
		StringCopy(&Var2, "TORSO_P2_27_2", 16);
		iVar6 = 27;
		iVar7 = 2;
		iVar1 = 2500;
		break;

	case 203:
		StringCopy(&Var2, "TORSO_P2_27_3", 16);
		iVar6 = 27;
		iVar7 = 3;
		iVar1 = 2200;
		break;

	case 204:
		StringCopy(&Var2, "TORSO_P2_27_4", 16);
		iVar6 = 27;
		iVar7 = 4;
		iVar1 = 2500;
		break;

	case 205:
		StringCopy(&Var2, "TORSO_P2_27_5", 16);
		iVar6 = 27;
		iVar7 = 5;
		iVar1 = 2500;
		break;

	case 206:
		StringCopy(&Var2, "TORSO_P2_27_6", 16);
		iVar6 = 27;
		iVar7 = 6;
		iVar1 = 2200;
		break;

	case 207:
		StringCopy(&Var2, "TORSO_P2_28_0", 16);
		iVar6 = 28;
		iVar7 = 0;
		iVar1 = 1100;
		break;

	case 208:
		StringCopy(&Var2, "TORSO_P2_28_1", 16);
		iVar6 = 28;
		iVar7 = 1;
		iVar1 = 1200;
		break;

	case 209:
		StringCopy(&Var2, "TORSO_P2_28_2", 16);
		iVar6 = 28;
		iVar7 = 2;
		iVar1 = 1220;
		break;

	case 210:
		StringCopy(&Var2, "TORSO_P2_28_3", 16);
		iVar6 = 28;
		iVar7 = 3;
		iVar1 = 1250;
		break;

	case 211:
		StringCopy(&Var2, "TORSO_P2_28_4", 16);
		iVar6 = 28;
		iVar7 = 4;
		iVar1 = 1300;
		break;

	case 212:
		StringCopy(&Var2, "TORSO_P2_28_5", 16);
		iVar6 = 28;
		iVar7 = 5;
		iVar1 = 1360;
		break;

	case 213:
		StringCopy(&Var2, "TORSO_P2_28_6", 16);
		iVar6 = 28;
		iVar7 = 6;
		iVar1 = 35;
		break;

	case 214:
		StringCopy(&Var2, "TORSO_P2_28_7", 16);
		iVar6 = 28;
		iVar7 = 7;
		iVar1 = 38;
		break;

	case 215:
		StringCopy(&Var2, "TORSO_P2_28_8", 16);
		iVar6 = 28;
		iVar7 = 8;
		iVar1 = 40;
		break;

	case 216:
		StringCopy(&Var2, "TORSO_P2_28_9", 16);
		iVar6 = 28;
		iVar7 = 9;
		iVar1 = 42;
		break;

	case 217:
		StringCopy(&Var2, "TORSO_P2_28_10", 16);
		iVar6 = 28;
		iVar7 = 10;
		iVar1 = 50;
		break;

	case 218:
		StringCopy(&Var2, "TORSO_P2_28_11", 16);
		iVar6 = 28;
		iVar7 = 11;
		iVar1 = 45;
		break;

	case 219:
		StringCopy(&Var2, "TORSO_P2_28_12", 16);
		iVar6 = 28;
		iVar7 = 12;
		iVar1 = 45;
		break;

	case 220:
		StringCopy(&Var2, "TORSO_P2_28_13", 16);
		iVar6 = 28;
		iVar7 = 13;
		iVar1 = 44;
		break;

	case 221:
		StringCopy(&Var2, "TORSO_P2_28_14", 16);
		iVar6 = 28;
		iVar7 = 14;
		iVar1 = 46;
		break;

	case 222:
		StringCopy(&Var2, "TORSO_P2_28_15", 16);
		iVar6 = 28;
		iVar7 = 15;
		iVar1 = 52;
		break;

	case 223:
		StringCopy(&Var2, "TORSO_P2_29_0", 16);
		iVar6 = 29;
		iVar7 = 0;
		iVar1 = 3200;
		break;

	case 224:
		StringCopy(&Var2, "TORSO_P2_29_1", 16);
		iVar6 = 29;
		iVar7 = 1;
		iVar1 = 3200;
		break;

	case 225:
		StringCopy(&Var2, "TORSO_P2_29_2", 16);
		iVar6 = 29;
		iVar7 = 2;
		iVar1 = 2550;
		break;

	case 226:
		StringCopy(&Var2, "TORSO_P2_29_3", 16);
		iVar6 = 29;
		iVar7 = 3;
		iVar1 = 2750;
		break;

	case 227:
		StringCopy(&Var2, "TORSO_P2_29_4", 16);
		iVar6 = 29;
		iVar7 = 4;
		iVar1 = 2590;
		break;

	case 228:
		StringCopy(&Var2, "TORSO_P2_29_5", 16);
		iVar6 = 29;
		iVar7 = 5;
		iVar1 = 2750;
		break;

	case 229:
		StringCopy(&Var2, "TORSO_P2_29_6", 16);
		iVar6 = 29;
		iVar7 = 6;
		iVar1 = 2550;
		break;

	case 230:
		StringCopy(&Var2, "TORSO_P2_29_7", 16);
		iVar6 = 29;
		iVar7 = 7;
		iVar1 = 2590;
		break;

	case 231:
		StringCopy(&Var2, "TORSO_P2_29_8", 16);
		iVar6 = 29;
		iVar7 = 8;
		iVar1 = 2720;
		break;

	case 232:
		StringCopy(&Var2, "TORSO_P2_29_9", 16);
		iVar6 = 29;
		iVar7 = 9;
		iVar1 = 2750;
		break;

	case 233:
		StringCopy(&Var2, "TORSO_P2_30_0", 16);
		iVar6 = 30;
		iVar7 = 0;
		iVar1 = 3250;
		break;

	case 234:
		StringCopy(&Var2, "TORSO_P2_30_1", 16);
		iVar6 = 30;
		iVar7 = 1;
		iVar1 = 2950;
		break;

	case 235:
		StringCopy(&Var2, "TORSO_P2_30_2", 16);
		iVar6 = 30;
		iVar7 = 2;
		iVar1 = 3100;
		break;

	case 236:
		StringCopy(&Var2, "TORSO_P2_30_3", 16);
		iVar6 = 30;
		iVar7 = 3;
		iVar1 = 3150;
		break;

	case 237:
		StringCopy(&Var2, "TORSO_P2_30_4", 16);
		iVar6 = 30;
		iVar7 = 4;
		iVar1 = 3240;
		break;

	case 238:
		StringCopy(&Var2, "TORSO_P2_30_5", 16);
		iVar6 = 30;
		iVar7 = 5;
		iVar1 = 3350;
		break;

	case 239:
		StringCopy(&Var2, "TORSO_P2_30_6", 16);
		iVar6 = 30;
		iVar7 = 6;
		iVar1 = 3400;
		break;

	case 240:
		StringCopy(&Var2, "TORSO_P2_30_7", 16);
		iVar6 = 30;
		iVar7 = 7;
		iVar1 = 3280;
		break;

	case 241:
		StringCopy(&Var2, "TORSO_P2_31_0", 16);
		iVar6 = 31;
		iVar7 = 0;
		break;

	default: return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x842A
void func_39(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "TORSO_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "TORSO_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 25;
		break;

	case 2:
		StringCopy(&Var2, "TORSO_P2_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "TORSO_P2_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 15;
		break;

	case 4:
		StringCopy(&Var2, "TORSO_P2_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 25;
		break;

	case 5:
		StringCopy(&Var2, "TORSO_P2_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 25;
		break;

	case 6:
		StringCopy(&Var2, "TORSO_P2_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 22;
		break;

	case 7:
		StringCopy(&Var2, "TORSO_P2_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 22;
		break;

	case 8:
		StringCopy(&Var2, "TORSO_P2_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 20;
		break;

	case 9:
		StringCopy(&Var2, "TORSO_P2_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 20;
		break;

	case 10:
		StringCopy(&Var2, "TORSO_P2_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 24;
		break;

	case 11:
		StringCopy(&Var2, "TORSO_P2_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 26;
		break;

	case 12:
		StringCopy(&Var2, "TORSO_P2_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		iVar1 = 28;
		break;

	case 13:
		StringCopy(&Var2, "TORSO_P2_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		iVar1 = 29;
		break;

	case 14:
		StringCopy(&Var2, "TORSO_P2_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		iVar1 = 22;
		break;

	case 15:
		StringCopy(&Var2, "TORSO_P2_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		iVar1 = 20;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "TORSO_P2_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 35;
		break;

	case 19:
		StringCopy(&Var2, "TORSO_P2_3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 22;
		break;

	case 20:
		StringCopy(&Var2, "TORSO_P2_3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 25;
		break;

	case 21:
		StringCopy(&Var2, "TORSO_P2_3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 38;
		break;

	case 22:
		StringCopy(&Var2, "TORSO_P2_3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 40;
		break;

	case 23:
		StringCopy(&Var2, "TORSO_P2_3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 40;
		break;

	case 24:
		StringCopy(&Var2, "TORSO_P2_3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 40;
		break;

	case 25:
		StringCopy(&Var2, "TORSO_P2_3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 40;
		break;

	case 26:
		StringCopy(&Var2, "TORSO_P2_3_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 40;
		break;

	case 27:
		StringCopy(&Var2, "TORSO_P2_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 28:
		StringCopy(&Var2, "TORSO_P2_4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 500;
		break;

	case 29:
		StringCopy(&Var2, "TORSO_P2_4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 560;
		break;

	case 30:
		StringCopy(&Var2, "TORSO_P2_4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 600;
		break;

	case 31:
		StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 650;
		break;

	case 32:
		StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 500;
		break;

	case 33:
		StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 560;
		break;

	case 34:
		StringCopy(&Var2, "TORSO_P2_4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 500;
		break;

	case 35:
		StringCopy(&Var2, "TORSO_P2_4_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 650;
		break;

	case 36:
		StringCopy(&Var2, "TORSO_P2_4_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 540;
		break;

	case 37:
		StringCopy(&Var2, "TORSO_P2_4_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 690;
		break;

	case 38:
		StringCopy(&Var2, "TORSO_P2_4_11", 16);
		iVar6 = 4;
		iVar7 = 11;
		iVar1 = 560;
		break;

	case 39:
		StringCopy(&Var2, "TORSO_P2_4_12", 16);
		iVar6 = 4;
		iVar7 = 12;
		iVar1 = 590;
		break;

	case 40:
		StringCopy(&Var2, "TORSO_P2_4_13", 16);
		iVar6 = 4;
		iVar7 = 13;
		iVar1 = 690;
		break;

	case 41:
		StringCopy(&Var2, "TORSO_P2_4_14", 16);
		iVar6 = 4;
		iVar7 = 14;
		iVar1 = 540;
		break;

	case 42:
		StringCopy(&Var2, "TORSO_P2_4_15", 16);
		iVar6 = 4;
		iVar7 = 15;
		iVar1 = 500;
		break;

	case 43:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 44:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 47:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 48:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 49:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 50:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 51:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 52:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 53:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 54:
		StringCopy(&Var2, "TORSO_P2_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 55:
		StringCopy(&Var2, "TORSO_P2_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		break;

	case 56:
		StringCopy(&Var2, "TORSO_P2_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 25;
		break;

	case 57:
		StringCopy(&Var2, "TORSO_P2_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 27;
		break;

	case 58:
		StringCopy(&Var2, "TORSO_P2_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 22;
		break;

	case 59:
		StringCopy(&Var2, "TORSO_P2_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 350;
		break;

	case 60:
		StringCopy(&Var2, "TORSO_P2_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 27;
		break;

	case 61:
		StringCopy(&Var2, "TORSO_P2_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 370;
		break;

	case 62:
		StringCopy(&Var2, "TORSO_P2_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 25;
		break;

	case 63:
		StringCopy(&Var2, "TORSO_P2_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 22;
		break;

	case 64:
		StringCopy(&Var2, "TORSO_P2_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 25;
		break;

	case 65:
		StringCopy(&Var2, "TORSO_P2_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		break;

	case 66:
		StringCopy(&Var2, "TORSO_P2_11_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 22;
		break;

	case 67:
		StringCopy(&Var2, "TORSO_P2_11_13", 16);
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 27;
		break;

	case 68:
		StringCopy(&Var2, "TORSO_P2_11_14", 16);
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 25;
		break;

	case 69:
		StringCopy(&Var2, "TORSO_P2_11_15", 16);
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 27;
		break;

	case 70:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 1;
		break;

	case 71:
		StringCopy(&Var2, "TORSO_P2_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 72:
		StringCopy(&Var2, "TORSO_P2_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 39;
		break;

	case 73:
		StringCopy(&Var2, "TORSO_P2_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 42;
		break;

	case 74:
		StringCopy(&Var2, "TORSO_P2_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 49;
		break;

	case 75:
		StringCopy(&Var2, "TORSO_P2_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 35;
		break;

	case 76:
		StringCopy(&Var2, "TORSO_P2_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 50;
		break;

	case 77:
		StringCopy(&Var2, "TORSO_P2_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 50;
		break;

	case 78:
		StringCopy(&Var2, "TORSO_P2_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 50;
		break;

	case 79:
		StringCopy(&Var2, "TORSO_P2_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 80:
		StringCopy(&Var2, "TORSO_P2_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 88;
		break;

	case 81:
		StringCopy(&Var2, "TORSO_P2_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 60;
		break;

	case 82:
		StringCopy(&Var2, "TORSO_P2_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 80;
		break;

	case 83:
		StringCopy(&Var2, "TORSO_P2_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 70;
		break;

	case 84:
		StringCopy(&Var2, "TORSO_P2_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 80;
		break;

	case 85:
		StringCopy(&Var2, "TORSO_P2_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 70;
		break;

	case 86:
		StringCopy(&Var2, "TORSO_P2_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 90;
		break;

	case 87:
		StringCopy(&Var2, "TORSO_P2_14_8", 16);
		iVar6 = 14;
		iVar7 = 8;
		iVar1 = 95;
		break;

	case 88:
		StringCopy(&Var2, "TORSO_P2_14_9", 16);
		iVar6 = 14;
		iVar7 = 9;
		iVar1 = 105;
		break;

	case 89:
		StringCopy(&Var2, "TORSO_P2_14_10", 16);
		iVar6 = 14;
		iVar7 = 10;
		iVar1 = 95;
		break;

	case 90:
		StringCopy(&Var2, "TORSO_P2_14_11", 16);
		iVar6 = 14;
		iVar7 = 11;
		iVar1 = 110;
		break;

	case 91:
		StringCopy(&Var2, "TORSO_P2_14_12", 16);
		iVar6 = 14;
		iVar7 = 12;
		iVar1 = 98;
		break;

	case 92:
		StringCopy(&Var2, "TORSO_P2_14_13", 16);
		iVar6 = 14;
		iVar7 = 13;
		iVar1 = 88;
		break;

	case 93:
		StringCopy(&Var2, "TORSO_P2_14_14", 16);
		iVar6 = 14;
		iVar7 = 14;
		iVar1 = 98;
		break;

	case 94:
		StringCopy(&Var2, "TORSO_P2_14_15", 16);
		iVar6 = 14;
		iVar7 = 15;
		iVar1 = 110;
		break;

	case 95:
		StringCopy(&Var2, "TORSO_P2_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 96:
		StringCopy(&Var2, "TORSO_P2_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 97:
		StringCopy(&Var2, "TORSO_P2_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 98:
		StringCopy(&Var2, "TORSO_P2_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 99:
		StringCopy(&Var2, "TORSO_P2_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 520;
		break;

	case 100:
		StringCopy(&Var2, "TORSO_P2_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 490;
		break;

	case 101:
		StringCopy(&Var2, "TORSO_P2_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 450;
		break;

	case 102:
		StringCopy(&Var2, "TORSO_P2_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 420;
		break;

	case 103:
		StringCopy(&Var2, "TORSO_P2_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 420;
		break;

	case 104:
		StringCopy(&Var2, "TORSO_P2_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 85;
		break;

	case 105:
		StringCopy(&Var2, "TORSO_P2_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 85;
		break;

	case 106:
		StringCopy(&Var2, "TORSO_P2_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 75;
		break;

	case 107:
		StringCopy(&Var2, "TORSO_P2_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 68;
		break;

	case 108:
		StringCopy(&Var2, "TORSO_P2_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 68;
		break;

	case 109:
		StringCopy(&Var2, "TORSO_P2_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 78;
		break;

	case 110:
		StringCopy(&Var2, "TORSO_P2_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 85;
		break;

	case 111:
		StringCopy(&Var2, "TORSO_P2_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 68;
		break;

	case 112:
		StringCopy(&Var2, "TORSO_P2_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 75;
		break;

	case 113:
		StringCopy(&Var2, "TORSO_P2_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 75;
		break;

	case 114:
		StringCopy(&Var2, "TORSO_P2_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 78;
		break;

	case 115:
		StringCopy(&Var2, "TORSO_P2_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 75;
		break;

	case 116:
		StringCopy(&Var2, "TORSO_P2_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 75;
		break;

	case 117:
		StringCopy(&Var2, "TORSO_P2_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 75;
		break;

	case 118:
		StringCopy(&Var2, "TORSO_P2_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 78;
		break;

	case 119:
		StringCopy(&Var2, "TORSO_P2_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 78;
		break;

	case 120:
		StringCopy(&Var2, "TORSO_P2_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 40;
		break;

	case 121:
		StringCopy(&Var2, "TORSO_P2_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 32;
		break;

	case 122:
		StringCopy(&Var2, "TORSO_P2_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 32;
		break;

	case 123:
		StringCopy(&Var2, "TORSO_P2_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 32;
		break;

	case 124:
		StringCopy(&Var2, "TORSO_P2_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		break;

	case 125:
		StringCopy(&Var2, "TORSO_P2_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 38;
		break;

	case 126:
		StringCopy(&Var2, "TORSO_P2_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 35;
		break;

	case 127:
		StringCopy(&Var2, "TORSO_P2_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 38;
		break;

	case 128:
		StringCopy(&Var2, "TORSO_P2_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 29;
		break;

	case 129:
		StringCopy(&Var2, "TORSO_P2_20_9", 16);
		iVar6 = 20;
		iVar7 = 9;
		iVar1 = 32;
		break;

	case 130:
		StringCopy(&Var2, "TORSO_P2_20_10", 16);
		iVar6 = 20;
		iVar7 = 10;
		iVar1 = 29;
		break;

	case 131:
		StringCopy(&Var2, "TORSO_P2_20_11", 16);
		iVar6 = 20;
		iVar7 = 11;
		iVar1 = 35;
		break;

	case 132:
		StringCopy(&Var2, "TORSO_P2_20_12", 16);
		iVar6 = 20;
		iVar7 = 12;
		iVar1 = 32;
		break;

	case 133:
		StringCopy(&Var2, "TORSO_P2_20_13", 16);
		iVar6 = 20;
		iVar7 = 13;
		iVar1 = 35;
		break;

	case 134:
		StringCopy(&Var2, "TORSO_P2_20_14", 16);
		iVar6 = 20;
		iVar7 = 14;
		iVar1 = 32;
		break;

	case 135:
		StringCopy(&Var2, "TORSO_P2_20_15", 16);
		iVar6 = 20;
		iVar7 = 15;
		iVar1 = 40;
		break;

	default: return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x932A
void func_40(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "HAIR_P2_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "HAIR_P2_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "HAIR_P2_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "HAIR_P2_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "HAIR_P2_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "HAIR_P2_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "HAIR_P2_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "HAIR_P2_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "HAIR_P2_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	default: func_24(iVar10, iParam0, 9); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x9456
void func_41(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	default: func_24(iVar10, iParam0, 7); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x954C
void func_42(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: func_60(iParam1); break;

	case 2: func_59(iParam1); break;

	case 3: func_55(iParam1); break;

	case 4: func_54(iParam1); break;

	case 6: func_53(iParam1); break;

	case 5: func_52(iParam1); break;

	case 8: func_51(iParam1); break;

	case 9: func_50(iParam1); break;

	case 10: func_49(iParam1); break;

	case 1: func_48(iParam1); break;

	case 7: func_47(iParam1); break;

	case 11: func_46(iParam1); break;

	case 12: func_45(iParam1); break;

	case 13: func_44(iParam1); break;

	case 14: func_43(iParam1); break;
	}
}

// Position - 0x963C
void func_43(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 7;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 8;
		break;

	case 158:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 2;
		break;

	case 159:
		StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 4590;
		iVar8 = 2;
		break;

	case 160:
		StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 4100;
		iVar8 = 2;
		break;

	case 161:
		StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 3850;
		iVar8 = 2;
		break;

	case 162:
		StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 1850;
		iVar8 = 2;
		break;

	case 163:
		StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 5250;
		iVar8 = 2;
		break;

	case 164:
		StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 2700;
		iVar8 = 2;
		break;

	case 165:
		StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 3100;
		iVar8 = 2;
		break;

	case 166:
		StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 5050;
		iVar8 = 2;
		break;

	case 167:
		StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 2500;
		iVar8 = 2;
		break;

	case 168:
		StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 1950;
		iVar8 = 2;
		break;

	case 169:
		StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 3900;
		iVar8 = 2;
		break;

	case 170:
		StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 3550;
		iVar8 = 2;
		break;

	case 171:
		StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 4500;
		iVar8 = 2;
		break;

	case 172:
		StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 2700;
		iVar8 = 2;
		break;

	case 173:
		StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 3100;
		iVar8 = 2;
		break;

	case 174:
		StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 2950;
		iVar8 = 2;
		break;

	case 82:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 10;
		break;

	case 83:
		StringCopy(&Var2, "PROPS_P1_E1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 84:
		StringCopy(&Var2, "PROPS_P1_E1_1", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 85:
		StringCopy(&Var2, "PROPS_P1_E1_2", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 86:
		StringCopy(&Var2, "PROPS_P1_E1_3", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 87:
		StringCopy(&Var2, "PROPS_P1_E1_4", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 88:
		StringCopy(&Var2, "PROPS_P1_E1_5", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 89:
		StringCopy(&Var2, "PROPS_P1_E1_6", 16);
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 90:
		StringCopy(&Var2, "PROPS_P1_E1_7", 16);
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 91:
		StringCopy(&Var2, "PROPS_P1_E1_8", 16);
		iVar6 = 1;
		iVar7 = 8;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 92:
		StringCopy(&Var2, "PROPS_P1_E1_9", 16);
		iVar6 = 1;
		iVar7 = 9;
		iVar1 = 75;
		iVar8 = 10;
		break;

	case 93:
		StringCopy(&Var2, "PROPS_P1_E2", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 94:
		StringCopy(&Var2, "PROPS_P1_E3", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 110;
		iVar8 = 10;
		break;

	case 95:
		StringCopy(&Var2, "PROPS_P1_E4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 120;
		iVar8 = 10;
		break;

	case 96:
		StringCopy(&Var2, "PROPS_P1_E4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 128;
		iVar8 = 10;
		break;

	case 97:
		StringCopy(&Var2, "PROPS_P1_E4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 130;
		iVar8 = 10;
		break;

	case 98:
		StringCopy(&Var2, "PROPS_P1_E4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 140;
		iVar8 = 10;
		break;

	case 99:
		StringCopy(&Var2, "PROPS_P1_E4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 145;
		iVar8 = 10;
		break;

	case 100:
		StringCopy(&Var2, "PROPS_P1_E4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 135;
		iVar8 = 10;
		break;

	case 101:
		StringCopy(&Var2, "PROPS_P1_E4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 138;
		iVar8 = 10;
		break;

	case 102:
		StringCopy(&Var2, "PROPS_P1_E5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 110;
		iVar8 = 10;
		break;

	case 103:
		StringCopy(&Var2, "PROPS_P1_E5_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 112;
		iVar8 = 10;
		break;

	case 104:
		StringCopy(&Var2, "PROPS_P1_E5_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 115;
		iVar8 = 10;
		break;

	case 105:
		StringCopy(&Var2, "PROPS_P1_E5_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 118;
		iVar8 = 10;
		break;

	case 106:
		StringCopy(&Var2, "PROPS_P1_E5_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 120;
		iVar8 = 10;
		break;

	case 107:
		StringCopy(&Var2, "PROPS_P1_E5_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 125;
		iVar8 = 10;
		break;

	case 108:
		StringCopy(&Var2, "PROPS_P1_E5_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 128;
		iVar8 = 10;
		break;

	case 109:
		StringCopy(&Var2, "PROPS_P1_E5_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 138;
		iVar8 = 10;
		break;

	case 110:
		StringCopy(&Var2, "PROPS_P1_E5_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 140;
		iVar8 = 10;
		break;

	case 111:
		StringCopy(&Var2, "PROPS_P1_E5_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 155;
		iVar8 = 10;
		break;

	case 112:
		StringCopy(&Var2, "PROPS_P1_E6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 113:
		StringCopy(&Var2, "PROPS_P1_E6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 114:
		StringCopy(&Var2, "PROPS_P1_E6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 115:
		StringCopy(&Var2, "PROPS_P1_E6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 116:
		StringCopy(&Var2, "PROPS_P1_E6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 117:
		StringCopy(&Var2, "PROPS_P1_E6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 62;
		iVar8 = 10;
		break;

	case 118:
		StringCopy(&Var2, "PROPS_P1_E6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 119:
		StringCopy(&Var2, "PROPS_P1_E6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 120:
		StringCopy(&Var2, "PROPS_P1_E6_8", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 121:
		StringCopy(&Var2, "PROPS_P1_E6_9", 16);
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 72;
		iVar8 = 10;
		break;

	case 122:
		StringCopy(&Var2, "PROPS_P1_E7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 145;
		iVar8 = 10;
		break;

	case 123:
		StringCopy(&Var2, "PROPS_P1_E7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 149;
		iVar8 = 10;
		break;

	case 124:
		StringCopy(&Var2, "PROPS_P1_E7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 139;
		iVar8 = 10;
		break;

	case 125:
		StringCopy(&Var2, "PROPS_P1_E7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 149;
		iVar8 = 10;
		break;

	case 126:
		StringCopy(&Var2, "PROPS_P1_E7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 135;
		iVar8 = 10;
		break;

	case 127:
		StringCopy(&Var2, "PROPS_P1_E7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 138;
		iVar8 = 10;
		break;

	case 128:
		StringCopy(&Var2, "PROPS_P1_E7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 140;
		iVar8 = 10;
		break;

	case 129:
		StringCopy(&Var2, "PROPS_P1_E7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 145;
		iVar8 = 10;
		break;

	case 130:
		StringCopy(&Var2, "PROPS_P1_E7_8", 16);
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 159;
		iVar8 = 10;
		break;

	case 131:
		StringCopy(&Var2, "PROPS_P1_E7_9", 16);
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 155;
		iVar8 = 10;
		break;

	case 132:
		StringCopy(&Var2, "PROPS_P1_E8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 198;
		iVar8 = 10;
		break;

	case 133:
		StringCopy(&Var2, "PROPS_P1_E8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 210;
		iVar8 = 10;
		break;

	case 134:
		StringCopy(&Var2, "PROPS_P1_E8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 135:
		StringCopy(&Var2, "PROPS_P1_E8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 220;
		iVar8 = 10;
		break;

	case 136:
		StringCopy(&Var2, "PROPS_P1_E8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 190;
		iVar8 = 10;
		break;

	case 137:
		StringCopy(&Var2, "PROPS_P1_E8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 200;
		iVar8 = 10;
		break;

	case 138:
		StringCopy(&Var2, "PROPS_P1_E8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 208;
		iVar8 = 10;
		break;

	case 139:
		StringCopy(&Var2, "PROPS_P1_E8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 210;
		iVar8 = 10;
		break;

	case 140:
		StringCopy(&Var2, "PROPS_P1_E9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 141:
		StringCopy(&Var2, "PROPS_P1_E9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 142:
		StringCopy(&Var2, "PROPS_P1_E9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 190;
		iVar8 = 10;
		break;

	case 143:
		StringCopy(&Var2, "PROPS_P1_E9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 178;
		iVar8 = 10;
		break;

	case 144:
		StringCopy(&Var2, "PROPS_P1_E9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 180;
		iVar8 = 10;
		break;

	case 145:
		StringCopy(&Var2, "PROPS_P1_E9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 168;
		iVar8 = 10;
		break;

	case 146:
		StringCopy(&Var2, "PROPS_P1_E9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 170;
		iVar8 = 10;
		break;

	case 147:
		StringCopy(&Var2, "PROPS_P1_E9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 148:
		StringCopy(&Var2, "PROPS_P1_E9_8", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 170;
		iVar8 = 10;
		break;

	case 149:
		StringCopy(&Var2, "PROPS_P1_E9_9", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 178;
		iVar8 = 10;
		break;

	case 150:
		StringCopy(&Var2, "PROPS_P1_E10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 140;
		iVar8 = 10;
		break;

	case 151:
		StringCopy(&Var2, "PROPS_P1_E10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 145;
		iVar8 = 10;
		break;

	case 152:
		StringCopy(&Var2, "PROPS_P1_E10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 150;
		iVar8 = 10;
		break;

	case 153:
		StringCopy(&Var2, "PROPS_P1_E10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 154:
		StringCopy(&Var2, "PROPS_P1_E10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 168;
		iVar8 = 10;
		break;

	case 155:
		StringCopy(&Var2, "PROPS_P1_E10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 178;
		iVar8 = 10;
		break;

	case 156:
		StringCopy(&Var2, "PROPS_P1_E10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 160;
		iVar8 = 10;
		break;

	case 157:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 100;
		iVar8 = 10;
		break;

	case 10:
		StringCopy(&Var2, "PROPS_P1_H0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 320;
		iVar8 = 0;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 13:
		StringCopy(&Var2, "PROPS_P1_H3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar8 = 0;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 26:
		StringCopy(&Var2, "PROPS_P1_H8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 27:
		StringCopy(&Var2, "PROPS_P1_H8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 28:
		StringCopy(&Var2, "PROPS_P1_H9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 29:
		StringCopy(&Var2, "PROPS_P1_H9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 30:
		StringCopy(&Var2, "PROPS_P1_H10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 31:
		StringCopy(&Var2, "PROPS_P1_H10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 32:
		StringCopy(&Var2, "PROPS_P1_H11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 450;
		iVar8 = 0;
		break;

	case 33:
		StringCopy(&Var2, "PROPS_P1_H12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 34:
		StringCopy(&Var2, "PROPS_P1_H12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 35:
		StringCopy(&Var2, "PROPS_P1_H13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 36:
		StringCopy(&Var2, "PROPS_P1_H13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 37:
		StringCopy(&Var2, "PROPS_P1_H14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 38:
		StringCopy(&Var2, "PROPS_P1_H14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 39:
		StringCopy(&Var2, "PROPS_P1_H14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 41:
		StringCopy(&Var2, "PROPS_P1_H19_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 42:
		StringCopy(&Var2, "PROPS_P1_H19_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 43:
		StringCopy(&Var2, "PROPS_P1_H19_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 44:
		StringCopy(&Var2, "PROPS_P1_H19_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 45:
		StringCopy(&Var2, "PROPS_P1_H19_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 46:
		StringCopy(&Var2, "PROPS_P1_H19_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 47:
		StringCopy(&Var2, "PROPS_P1_H19_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 48:
		StringCopy(&Var2, "PROPS_P1_H19_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 49:
		StringCopy(&Var2, "PROPS_P1_H19_8", 16);
		iVar6 = 16;
		iVar7 = 8;
		iVar8 = 0;
		break;

	case 50:
		StringCopy(&Var2, "PROPS_P1_H19_9", 16);
		iVar6 = 16;
		iVar7 = 9;
		iVar8 = 0;
		break;

	case 51:
		StringCopy(&Var2, "PROPS_P1_H19_10", 16);
		iVar6 = 16;
		iVar7 = 10;
		iVar8 = 0;
		break;

	case 52:
		StringCopy(&Var2, "PROPS_P1_H19_11", 16);
		iVar6 = 16;
		iVar7 = 11;
		iVar8 = 0;
		break;

	case 53:
		StringCopy(&Var2, "PROPS_P1_H19_12", 16);
		iVar6 = 16;
		iVar7 = 12;
		iVar8 = 0;
		break;

	case 54:
		StringCopy(&Var2, "PROPS_P1_H19_13", 16);
		iVar6 = 16;
		iVar7 = 13;
		iVar8 = 0;
		break;

	case 55:
		StringCopy(&Var2, "PROPS_P1_H19_14", 16);
		iVar6 = 16;
		iVar7 = 14;
		iVar8 = 0;
		break;

	case 56:
		StringCopy(&Var2, "PROPS_P1_H19_15", 16);
		iVar6 = 16;
		iVar7 = 15;
		iVar8 = 0;
		break;

	case 57:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 58:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 59:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 60:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 61:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 62:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 63:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 64:
		StringCopy(&Var2, "PROPS_P1_H19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 30;
		iVar8 = 0;
		break;

	case 65:
		StringCopy(&Var2, "PROPS_P1_H19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 30;
		iVar8 = 0;
		break;

	case 66:
		StringCopy(&Var2, "PROPS_P1_H19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 32;
		iVar8 = 0;
		break;

	case 67:
		StringCopy(&Var2, "PROPS_P1_H19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 35;
		iVar8 = 0;
		break;

	case 68:
		StringCopy(&Var2, "PROPS_P1_H19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 38;
		iVar8 = 0;
		break;

	case 69:
		StringCopy(&Var2, "PROPS_P1_H19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 42;
		iVar8 = 0;
		break;

	case 70:
		StringCopy(&Var2, "PROPS_P1_H19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 42;
		iVar8 = 0;
		break;

	case 71:
		StringCopy(&Var2, "PROPS_P1_H19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 40;
		iVar8 = 0;
		break;

	case 72:
		StringCopy(&Var2, "PROPS_P1_H19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 45;
		iVar8 = 0;
		break;

	case 73:
		StringCopy(&Var2, "PROPS_P1_H19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 48;
		iVar8 = 0;
		break;

	case 74:
		StringCopy(&Var2, "PROPS_P1_H19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 75:
		StringCopy(&Var2, "PROPS_P1_H19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 25;
		iVar8 = 0;
		break;

	case 76:
		StringCopy(&Var2, "PROPS_P1_H19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 28;
		iVar8 = 0;
		break;

	case 77:
		StringCopy(&Var2, "PROPS_P1_H19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 28;
		iVar8 = 0;
		break;

	case 78:
		StringCopy(&Var2, "PROPS_P1_H19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 30;
		iVar8 = 0;
		break;

	case 79:
		StringCopy(&Var2, "PROPS_P1_H19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 35;
		iVar8 = 0;
		break;

	case 80:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 81:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar8 = 0;
		break;

	default: func_24(iVar10, iParam0, 175); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xAB08
void func_44(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_24(iVar10, iParam0, 9); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xAC4E
void func_45(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "OUTFIT_P1_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "OUTFIT_P1_2", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "OUTFIT_P1_4", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "OUTFIT_P1_7", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "OUTFIT_P1_10", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "OUTFIT_P1_11", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "OUTFIT_P1_12", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "OUTFIT_P1_13", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 9:
		StringCopy(&Var2, "OUTFIT_P1_15", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "OUTFIT_P1_16", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 11:
		StringCopy(&Var2, "OUTFIT_P1_17", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 12:
		StringCopy(&Var2, "OUTFIT_P1_18", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "OUTFIT_P1_19", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 14:
		StringCopy(&Var2, "OUTFIT_P1_20", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 15:
		StringCopy(&Var2, "OUTFIT_P1_21", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 16:
		StringCopy(&Var2, "OUTFIT_P1_22", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "OUTFIT_P1_23", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 18:
		StringCopy(&Var2, "OUTFIT_P1_24", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "OUTFIT_P1_25", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 20:
		StringCopy(&Var2, "OUTFIT_P1_26", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 21:
		StringCopy(&Var2, "OUTFIT_P1_27", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 22:
		StringCopy(&Var2, "OUTFIT_P1_28", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4000;
		break;

	case 23:
		StringCopy(&Var2, "OUTFIT_P1_29", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 24:
		StringCopy(&Var2, "OUTFIT_P1_30", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 25:
		StringCopy(&Var2, "OUTFIT_P1_31", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4650;
		break;

	case 26:
		StringCopy(&Var2, "OUTFIT_P1_32", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 27:
		StringCopy(&Var2, "OUTFIT_P1_33", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5000;
		break;

	case 28:
		StringCopy(&Var2, "OUTFIT_P1_34", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4750;
		break;

	case 29:
		StringCopy(&Var2, "OUTFIT_P1_35", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4750;
		break;

	case 30:
		StringCopy(&Var2, "OUTFIT_P1_36", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5200;
		break;

	case 31:
		StringCopy(&Var2, "OUTFIT_P1_37", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5200;
		break;

	case 32:
		StringCopy(&Var2, "OUTFIT_P1_38", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5500;
		break;

	case 33:
		StringCopy(&Var2, "OUTFIT_P1_39", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 34:
		StringCopy(&Var2, "OUTFIT_P1_40", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 35:
		StringCopy(&Var2, "OUTFIT_P1_41", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 36:
		StringCopy(&Var2, "OUTFIT_P1_42", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 37:
		StringCopy(&Var2, "OUTFIT_P1_43", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 38:
		StringCopy(&Var2, "OUTFIT_P1_47", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 3000;
		break;

	case 39:
		StringCopy(&Var2, "OUTFIT_P1_48", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 3000;
		break;

	case 40:
		StringCopy(&Var2, "OUTFIT_P1_49", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 3000;
		break;

	case 41:
		StringCopy(&Var2, "OUTFIT_P1_10", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 42:
		StringCopy(&Var2, "OUTFIT_P1_50", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 43:
		StringCopy(&Var2, "OUTFIT_P1_51", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 44:
		StringCopy(&Var2, "OUTFIT_P1_52", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "OUTFIT_P1_53", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 46:
		StringCopy(&Var2, "OUTFIT_P1_54", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_24(iVar10, iParam0, 47); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xB157
void func_46(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 2;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 3;
		break;

	case 5:
		StringCopy(&Var2, "JBIB_P1_1_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "JBIB_P1_1_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		break;

	case 7:
		StringCopy(&Var2, "JBIB_P1_1_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		break;

	case 8:
		StringCopy(&Var2, "JBIB_P1_1_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		break;

	case 9:
		StringCopy(&Var2, "JBIB_P1_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "JBIB_P1_3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		break;

	case 11:
		StringCopy(&Var2, "JBIB_P1_3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		break;

	case 12:
		StringCopy(&Var2, "JBIB_P1_3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		break;

	case 13:
		StringCopy(&Var2, "JBIB_P1_3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		break;

	case 14:
		StringCopy(&Var2, "JBIB_P1_3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		break;

	case 15:
		StringCopy(&Var2, "JBIB_P1_3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		break;

	case 16:
		StringCopy(&Var2, "JBIB_P1_3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		break;

	case 17:
		StringCopy(&Var2, "JBIB_P1_3_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		break;

	case 18:
		StringCopy(&Var2, "JBIB_P1_3_9", 16);
		iVar6 = 3;
		iVar7 = 9;
		break;

	case 19:
		StringCopy(&Var2, "JBIB_P1_3_10", 16);
		iVar6 = 3;
		iVar7 = 10;
		break;

	case 20:
		StringCopy(&Var2, "JBIB_P1_3_11", 16);
		iVar6 = 3;
		iVar7 = 11;
		break;

	case 21:
		StringCopy(&Var2, "JBIB_P1_3_12", 16);
		iVar6 = 3;
		iVar7 = 12;
		break;

	case 22:
		StringCopy(&Var2, "JBIB_P1_3_13", 16);
		iVar6 = 3;
		iVar7 = 13;
		break;

	case 23:
		StringCopy(&Var2, "JBIB_P1_3_14", 16);
		iVar6 = 3;
		iVar7 = 14;
		break;

	case 24:
		StringCopy(&Var2, "JBIB_P1_3_15", 16);
		iVar6 = 3;
		iVar7 = 15;
		break;

	case 25:
		StringCopy(&Var2, "JBIB_P1_3_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 26:
		StringCopy(&Var2, "JBIB_P1_3_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		break;

	case 27:
		StringCopy(&Var2, "JBIB_P1_3_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		break;

	case 28:
		StringCopy(&Var2, "JBIB_P1_3_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		break;

	case 29:
		StringCopy(&Var2, "JBIB_P1_3_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		break;

	case 30:
		StringCopy(&Var2, "JBIB_P1_3_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		break;

	case 31:
		StringCopy(&Var2, "JBIB_P1_3_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		break;

	case 32:
		StringCopy(&Var2, "JBIB_P1_3_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		break;

	case 33:
		StringCopy(&Var2, "JBIB_P1_3_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		break;

	case 34:
		StringCopy(&Var2, "JBIB_P1_3_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		break;

	case 35:
		StringCopy(&Var2, "JBIB_P1_3_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		break;

	case 36:
		StringCopy(&Var2, "JBIB_P1_3_11", 16);
		iVar6 = 4;
		iVar7 = 11;
		break;

	case 37:
		StringCopy(&Var2, "JBIB_P1_3_12", 16);
		iVar6 = 4;
		iVar7 = 12;
		break;

	case 38:
		StringCopy(&Var2, "JBIB_P1_3_13", 16);
		iVar6 = 4;
		iVar7 = 13;
		break;

	case 39:
		StringCopy(&Var2, "JBIB_P1_3_14", 16);
		iVar6 = 4;
		iVar7 = 14;
		break;

	case 40:
		StringCopy(&Var2, "JBIB_P1_3_15", 16);
		iVar6 = 4;
		iVar7 = 15;
		break;

	case 41:
		StringCopy(&Var2, "JBIB_P1_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 42:
		StringCopy(&Var2, "JBIB_P1_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 43:
		StringCopy(&Var2, "JBIB_P1_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		break;

	case 44:
		StringCopy(&Var2, "JBIB_P1_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "JBIB_P1_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 46:
		StringCopy(&Var2, "JBIB_P1_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 47:
		StringCopy(&Var2, "JBIB_P1_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 48:
		StringCopy(&Var2, "JBIB_P1_10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 48;
		break;

	case 49:
		StringCopy(&Var2, "JBIB_P1_10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 35;
		break;

	case 50:
		StringCopy(&Var2, "JBIB_P1_10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 32;
		break;

	case 51:
		StringCopy(&Var2, "JBIB_P1_10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 35;
		break;

	case 52:
		StringCopy(&Var2, "JBIB_P1_10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 48;
		break;

	case 53:
		StringCopy(&Var2, "JBIB_P1_10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 52;
		break;

	case 54:
		StringCopy(&Var2, "JBIB_P1_10_7", 16);
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 38;
		break;

	case 55:
		StringCopy(&Var2, "JBIB_P1_10_8", 16);
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 42;
		break;

	case 56:
		StringCopy(&Var2, "JBIB_P1_10_9", 16);
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 38;
		break;

	case 57:
		StringCopy(&Var2, "JBIB_P1_10_10", 16);
		iVar6 = 10;
		iVar7 = 10;
		iVar1 = 35;
		break;

	case 58:
		StringCopy(&Var2, "JBIB_P1_10_11", 16);
		iVar6 = 10;
		iVar7 = 11;
		iVar1 = 48;
		break;

	case 59:
		StringCopy(&Var2, "JBIB_P1_10_12", 16);
		iVar6 = 10;
		iVar7 = 12;
		iVar1 = 42;
		break;

	case 60:
		StringCopy(&Var2, "JBIB_P1_10_13", 16);
		iVar6 = 10;
		iVar7 = 13;
		iVar1 = 45;
		break;

	case 61:
		StringCopy(&Var2, "JBIB_P1_10_14", 16);
		iVar6 = 10;
		iVar7 = 14;
		iVar1 = 45;
		break;

	case 62:
		StringCopy(&Var2, "JBIB_P1_10_15", 16);
		iVar6 = 10;
		iVar7 = 15;
		iVar1 = 49;
		break;

	default: func_24(iVar10, iParam0, 63); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xB7BF
void func_47(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_24(iVar10, iParam0, 1); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xB831
void func_48(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "BERD_P1_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "BERD_P1_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "BERD_P1_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "BERD_P1_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "BERD_P1_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	default: func_24(iVar10, iParam0, 5); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xB900
void func_49(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 2;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 3;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 4;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 5;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 2;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 3;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 4;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 5;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 6;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 1;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 2;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 3;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 4;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 5;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 6;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 7;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 8;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 9;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 10;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 11;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 12;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 13;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 14;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 15;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 1;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 2;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 3;
		break;

	case 36:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 4;
		break;

	case 37:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 5;
		break;

	case 38:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 6;
		break;

	case 39:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 1;
		break;

	case 41:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 2;
		break;

	case 42:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 3;
		break;

	case 43:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 4;
		break;

	case 44:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 5;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 6;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 7;
		break;

	case 47:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 48:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 1;
		break;

	case 49:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 2;
		break;

	case 50:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 3;
		break;

	case 51:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 52:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	default: func_24(iVar10, iParam0, 53); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xBDFA
void func_50(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "SPEC2_P0_08_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 125;
		break;

	case 6:
		StringCopy(&Var2, "SPEC2_P0_08_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 150;
		break;

	case 7:
		StringCopy(&Var2, "SPEC2_P0_08_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 175;
		break;

	case 8:
		StringCopy(&Var2, "SPEC2_P0_08_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 85;
		break;

	case 9:
		StringCopy(&Var2, "SPEC2_P0_08_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 10:
		StringCopy(&Var2, "SPEC2_P0_08_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 175;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	default: func_24(iVar10, iParam0, 12); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xBF8A
void func_51(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "SPEC_P1_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "SPEC_P1_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 195;
		break;

	case 12:
		StringCopy(&Var2, "SPEC_P1_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 195;
		break;

	case 13:
		StringCopy(&Var2, "SPEC_P1_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 195;
		break;

	case 14:
		StringCopy(&Var2, "SPEC_P1_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 250;
		break;

	case 15:
		StringCopy(&Var2, "SPEC_P1_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 250;
		break;

	case 16:
		StringCopy(&Var2, "SPEC_P1_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 250;
		break;

	case 17:
		StringCopy(&Var2, "SPEC_P1_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 195;
		break;

	case 18:
		StringCopy(&Var2, "SPEC_P1_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 250;
		break;

	case 19:
		StringCopy(&Var2, "SPEC_P1_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 250;
		break;

	case 20:
		StringCopy(&Var2, "SPEC_P1_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 250;
		break;

	case 21:
		StringCopy(&Var2, "SPEC_P1_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 250;
		break;

	case 22:
		StringCopy(&Var2, "SPEC_P1_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 195;
		break;

	case 23:
		StringCopy(&Var2, "SPEC_P1_11_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 250;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 27:
		StringCopy(&Var2, "SPEC_P1_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 28:
		StringCopy(&Var2, "SPEC_P1_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		break;

	case 29:
		StringCopy(&Var2, "SPEC_P1_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		break;

	case 30:
		StringCopy(&Var2, "SPEC_P1_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		break;

	case 31:
		StringCopy(&Var2, "SPEC_P1_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		break;

	case 32:
		StringCopy(&Var2, "SPEC_P1_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		break;

	case 33:
		StringCopy(&Var2, "SPEC_P1_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		break;

	case 34:
		StringCopy(&Var2, "SPEC_P1_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		break;

	case 35:
		StringCopy(&Var2, "SPEC_P1_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		break;

	case 36:
		StringCopy(&Var2, "SPEC_P1_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		break;

	case 37:
		StringCopy(&Var2, "SPEC_P1_15_10", 16);
		iVar6 = 15;
		iVar7 = 10;
		break;

	case 38:
		StringCopy(&Var2, "SPEC_P1_15_11", 16);
		iVar6 = 15;
		iVar7 = 11;
		break;

	case 39:
		StringCopy(&Var2, "SPEC_P1_15_12", 16);
		iVar6 = 15;
		iVar7 = 12;
		break;

	case 40:
		StringCopy(&Var2, "SPEC_P1_15_13", 16);
		iVar6 = 15;
		iVar7 = 13;
		break;

	case 41:
		StringCopy(&Var2, "SPEC_P1_15_14", 16);
		iVar6 = 15;
		iVar7 = 14;
		break;

	case 42:
		StringCopy(&Var2, "SPEC_P1_15_15", 16);
		iVar6 = 15;
		iVar7 = 15;
		break;

	case 43:
		StringCopy(&Var2, "SPEC_P1_15_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 44:
		StringCopy(&Var2, "SPEC_P1_15_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		break;

	case 45:
		StringCopy(&Var2, "SPEC_P1_15_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		break;

	case 46:
		StringCopy(&Var2, "SPEC_P1_15_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		break;

	case 47:
		StringCopy(&Var2, "SPEC_P1_15_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		break;

	case 48:
		StringCopy(&Var2, "SPEC_P1_15_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		break;

	case 49:
		StringCopy(&Var2, "SPEC_P1_15_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		break;

	case 50:
		StringCopy(&Var2, "SPEC_P1_15_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		break;

	case 51:
		StringCopy(&Var2, "SPEC_P1_15_8", 16);
		iVar6 = 16;
		iVar7 = 8;
		break;

	case 52:
		StringCopy(&Var2, "SPEC_P1_15_9", 16);
		iVar6 = 16;
		iVar7 = 9;
		break;

	case 53:
		StringCopy(&Var2, "SPEC_P1_15_10", 16);
		iVar6 = 16;
		iVar7 = 10;
		break;

	case 54:
		StringCopy(&Var2, "SPEC_P1_15_11", 16);
		iVar6 = 16;
		iVar7 = 11;
		break;

	case 55:
		StringCopy(&Var2, "SPEC_P1_15_12", 16);
		iVar6 = 16;
		iVar7 = 12;
		break;

	case 56:
		StringCopy(&Var2, "SPEC_P1_15_13", 16);
		iVar6 = 16;
		iVar7 = 13;
		break;

	case 57:
		StringCopy(&Var2, "SPEC_P1_15_14", 16);
		iVar6 = 16;
		iVar7 = 14;
		break;

	case 58:
		StringCopy(&Var2, "SPEC_P1_15_15", 16);
		iVar6 = 16;
		iVar7 = 15;
		break;

	case 59:
		StringCopy(&Var2, "SPEC_P1_15_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		break;

	case 60:
		StringCopy(&Var2, "SPEC_P1_15_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		break;

	case 61:
		StringCopy(&Var2, "SPEC_P1_15_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		break;

	case 62:
		StringCopy(&Var2, "SPEC_P1_15_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		break;

	case 63:
		StringCopy(&Var2, "SPEC_P1_15_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		break;

	case 64:
		StringCopy(&Var2, "SPEC_P1_15_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		break;

	case 65:
		StringCopy(&Var2, "SPEC_P1_15_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		break;

	case 66:
		StringCopy(&Var2, "SPEC_P1_15_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		break;

	case 67:
		StringCopy(&Var2, "SPEC_P1_15_8", 16);
		iVar6 = 17;
		iVar7 = 8;
		break;

	case 68:
		StringCopy(&Var2, "SPEC_P1_15_9", 16);
		iVar6 = 17;
		iVar7 = 9;
		break;

	case 69:
		StringCopy(&Var2, "SPEC_P1_15_10", 16);
		iVar6 = 17;
		iVar7 = 10;
		break;

	case 70:
		StringCopy(&Var2, "SPEC_P1_15_11", 16);
		iVar6 = 17;
		iVar7 = 11;
		break;

	case 71:
		StringCopy(&Var2, "SPEC_P1_15_12", 16);
		iVar6 = 17;
		iVar7 = 12;
		break;

	case 72:
		StringCopy(&Var2, "SPEC_P1_15_13", 16);
		iVar6 = 17;
		iVar7 = 13;
		break;

	case 73:
		StringCopy(&Var2, "SPEC_P1_15_14", 16);
		iVar6 = 17;
		iVar7 = 14;
		break;

	case 74:
		StringCopy(&Var2, "SPEC_P1_15_15", 16);
		iVar6 = 17;
		iVar7 = 15;
		break;

	case 75:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 76:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 19;
		iVar7 = 0;
		break;

	default: func_24(iVar10, iParam0, 77); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xC7C6
void func_52(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_24(iVar10, iParam0, 7); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xC8CE
void func_53(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "FEET_P1_00_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "FEET_P1_00_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 80;
		break;

	case 2:
		StringCopy(&Var2, "FEET_P1_00_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 80;
		break;

	case 3:
		StringCopy(&Var2, "FEET_P1_00_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 89;
		break;

	case 4:
		StringCopy(&Var2, "FEET_P1_00_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 45;
		break;

	case 5:
		StringCopy(&Var2, "FEET_P1_00_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 35;
		break;

	case 6:
		StringCopy(&Var2, "FEET_P1_00_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 89;
		break;

	case 7:
		StringCopy(&Var2, "FEET_P1_00_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 95;
		break;

	case 8:
		StringCopy(&Var2, "FEET_P1_00_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 115;
		break;

	case 9:
		StringCopy(&Var2, "FEET_P1_00_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 40;
		break;

	case 10:
		StringCopy(&Var2, "FEET_P1_00_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 145;
		break;

	case 11:
		StringCopy(&Var2, "FEET_P1_00_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 145;
		break;

	case 12:
		StringCopy(&Var2, "FEET_P1_01_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 18:
		StringCopy(&Var2, "FEET_P1_06_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "FEET_P1_06_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 180;
		break;

	case 20:
		StringCopy(&Var2, "FEET_P1_06_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 80;
		break;

	case 21:
		StringCopy(&Var2, "FEET_P1_06_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 200;
		break;

	case 22:
		StringCopy(&Var2, "FEET_P1_06_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 220;
		break;

	case 23:
		StringCopy(&Var2, "FEET_P1_06_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 235;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 25:
		StringCopy(&Var2, "FEET_P1_08_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 870;
		break;

	case 26:
		StringCopy(&Var2, "FEET_P1_08_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 870;
		break;

	case 27:
		StringCopy(&Var2, "FEET_P1_08_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 870;
		break;

	case 28:
		StringCopy(&Var2, "FEET_P1_08_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 1275;
		break;

	case 29:
		StringCopy(&Var2, "FEET_P1_08_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 1275;
		break;

	case 30:
		StringCopy(&Var2, "FEET_P1_08_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 1275;
		break;

	case 31:
		StringCopy(&Var2, "FEET_P1_08_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 1275;
		break;

	case 32:
		StringCopy(&Var2, "FEET_P1_08_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 1275;
		break;

	case 33:
		StringCopy(&Var2, "FEET_P1_08_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 1275;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "FEET_P1_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 36:
		StringCopy(&Var2, "FEET_P1_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 37:
		StringCopy(&Var2, "FEET_P1_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 50;
		break;

	case 38:
		StringCopy(&Var2, "FEET_P1_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 50;
		break;

	case 39:
		StringCopy(&Var2, "FEET_P1_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 50;
		break;

	case 40:
		StringCopy(&Var2, "FEET_P1_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 50;
		break;

	case 41:
		StringCopy(&Var2, "FEET_P1_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 50;
		break;

	case 42:
		StringCopy(&Var2, "FEET_P1_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 50;
		break;

	case 43:
		StringCopy(&Var2, "FEET_P1_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 50;
		break;

	case 44:
		StringCopy(&Var2, "FEET_P1_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 50;
		break;

	case 45:
		StringCopy(&Var2, "FEET_P1_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 50;
		break;

	case 46:
		StringCopy(&Var2, "FEET_P1_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 50;
		break;

	case 47:
		StringCopy(&Var2, "FEET_P1_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 50;
		break;

	case 48:
		StringCopy(&Var2, "FEET_P1_11_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 50;
		break;

	case 49:
		StringCopy(&Var2, "FEET_P1_11_13", 16);
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 50;
		break;

	case 50:
		StringCopy(&Var2, "FEET_P1_11_14", 16);
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 50;
		break;

	case 51:
		StringCopy(&Var2, "FEET_P1_11_15", 16);
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 50;
		break;

	case 52:
		StringCopy(&Var2, "FEET_P1_12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		break;

	case 53:
		StringCopy(&Var2, "FEET_P1_12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 25;
		break;

	case 54:
		StringCopy(&Var2, "FEET_P1_12_2", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 20;
		break;

	case 55:
		StringCopy(&Var2, "FEET_P1_12_3", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 24;
		break;

	case 56:
		StringCopy(&Var2, "FEET_P1_12_4", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 25;
		break;

	case 57:
		StringCopy(&Var2, "FEET_P1_12_5", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 27;
		break;

	case 58:
		StringCopy(&Var2, "FEET_P1_12_6", 16);
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 29;
		break;

	case 59:
		StringCopy(&Var2, "FEET_P1_12_7", 16);
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 27;
		break;

	case 60:
		StringCopy(&Var2, "FEET_P1_12_8", 16);
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 25;
		break;

	case 61:
		StringCopy(&Var2, "FEET_P1_12_9", 16);
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 30;
		break;

	case 62:
		StringCopy(&Var2, "FEET_P1_12_10", 16);
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 28;
		break;

	case 63:
		StringCopy(&Var2, "FEET_P1_12_11", 16);
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 30;
		break;

	case 64:
		StringCopy(&Var2, "FEET_P1_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 65:
		StringCopy(&Var2, "FEET_P1_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 155;
		break;

	case 66:
		StringCopy(&Var2, "FEET_P1_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 155;
		break;

	case 67:
		StringCopy(&Var2, "FEET_P1_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 165;
		break;

	case 68:
		StringCopy(&Var2, "FEET_P1_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 170;
		break;

	case 69:
		StringCopy(&Var2, "FEET_P1_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 160;
		break;

	case 70:
		StringCopy(&Var2, "FEET_P1_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 165;
		break;

	case 71:
		StringCopy(&Var2, "FEET_P1_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 170;
		break;

	case 72:
		StringCopy(&Var2, "FEET_P1_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 160;
		break;

	case 73:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 74:
		StringCopy(&Var2, "FEET_P1_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 720;
		break;

	case 75:
		StringCopy(&Var2, "FEET_P1_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 680;
		break;

	case 76:
		StringCopy(&Var2, "FEET_P1_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 77:
		StringCopy(&Var2, "FEET_P1_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 670;
		break;

	case 78:
		StringCopy(&Var2, "FEET_P1_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 700;
		break;

	case 79:
		StringCopy(&Var2, "FEET_P1_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 680;
		break;

	case 80:
		StringCopy(&Var2, "FEET_P1_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 720;
		break;

	case 81:
		StringCopy(&Var2, "FEET_P1_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 740;
		break;

	case 82:
		StringCopy(&Var2, "FEET_P1_16_8", 16);
		iVar6 = 16;
		iVar7 = 8;
		iVar1 = 760;
		break;

	case 83:
		StringCopy(&Var2, "FEET_P1_16_9", 16);
		iVar6 = 16;
		iVar7 = 9;
		iVar1 = 780;
		break;

	case 84:
		StringCopy(&Var2, "FEET_P1_16_10", 16);
		iVar6 = 16;
		iVar7 = 10;
		iVar1 = 750;
		break;

	case 85:
		StringCopy(&Var2, "FEET_P1_16_11", 16);
		iVar6 = 16;
		iVar7 = 11;
		iVar1 = 700;
		break;

	case 86:
		StringCopy(&Var2, "FEET_P1_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 790;
		break;

	case 87:
		StringCopy(&Var2, "FEET_P1_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar1 = 750;
		break;

	case 88:
		StringCopy(&Var2, "FEET_P1_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		iVar1 = 860;
		break;

	case 89:
		StringCopy(&Var2, "FEET_P1_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 750;
		break;

	case 90:
		StringCopy(&Var2, "FEET_P1_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 790;
		break;

	case 91:
		StringCopy(&Var2, "FEET_P1_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 92:
		StringCopy(&Var2, "FEET_P1_17_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		iVar1 = 820;
		break;

	case 93:
		StringCopy(&Var2, "FEET_P1_17_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		iVar1 = 800;
		break;

	case 94:
		StringCopy(&Var2, "FEET_P1_17_8", 16);
		iVar6 = 17;
		iVar7 = 8;
		iVar1 = 850;
		break;

	case 95:
		StringCopy(&Var2, "FEET_P1_17_9", 16);
		iVar6 = 17;
		iVar7 = 9;
		iVar1 = 870;
		break;

	case 96:
		StringCopy(&Var2, "FEET_P1_17_10", 16);
		iVar6 = 17;
		iVar7 = 10;
		iVar1 = 720;
		break;

	case 97:
		StringCopy(&Var2, "FEET_P1_17_11", 16);
		iVar6 = 17;
		iVar7 = 11;
		iVar1 = 740;
		break;

	case 98:
		StringCopy(&Var2, "FEET_P1_17_12", 16);
		iVar6 = 17;
		iVar7 = 12;
		iVar1 = 800;
		break;

	case 99:
		StringCopy(&Var2, "FEET_P1_17_13", 16);
		iVar6 = 17;
		iVar7 = 13;
		iVar1 = 750;
		break;

	case 100:
		StringCopy(&Var2, "FEET_P1_17_14", 16);
		iVar6 = 17;
		iVar7 = 14;
		iVar1 = 770;
		break;

	case 101:
		StringCopy(&Var2, "FEET_P1_17_15", 16);
		iVar6 = 17;
		iVar7 = 15;
		iVar1 = 860;
		break;

	case 102:
		StringCopy(&Var2, "FEET_P1_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 850;
		break;

	case 103:
		StringCopy(&Var2, "FEET_P1_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 800;
		break;

	case 104:
		StringCopy(&Var2, "FEET_P1_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 780;
		break;

	case 105:
		StringCopy(&Var2, "FEET_P1_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 890;
		break;

	case 106:
		StringCopy(&Var2, "FEET_P1_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 820;
		break;

	case 107:
		StringCopy(&Var2, "FEET_P1_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 108:
		StringCopy(&Var2, "FEET_P1_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 870;
		break;

	case 109:
		StringCopy(&Var2, "FEET_P1_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 930;
		break;

	case 110:
		StringCopy(&Var2, "FEET_P1_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar1 = 880;
		break;

	case 111:
		StringCopy(&Var2, "FEET_P1_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar1 = 900;
		break;

	case 112:
		StringCopy(&Var2, "FEET_P1_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar1 = 920;
		break;

	case 113:
		StringCopy(&Var2, "FEET_P1_18_11", 16);
		iVar6 = 18;
		iVar7 = 11;
		iVar1 = 970;
		break;

	case 114:
		StringCopy(&Var2, "FEET_P1_18_12", 16);
		iVar6 = 18;
		iVar7 = 12;
		iVar1 = 990;
		break;

	case 115:
		StringCopy(&Var2, "FEET_P1_18_13", 16);
		iVar6 = 18;
		iVar7 = 13;
		iVar1 = 960;
		break;

	case 116:
		StringCopy(&Var2, "FEET_P1_18_14", 16);
		iVar6 = 18;
		iVar7 = 14;
		iVar1 = 980;
		break;

	case 117:
		StringCopy(&Var2, "FEET_P1_18_15", 16);
		iVar6 = 18;
		iVar7 = 15;
		iVar1 = 950;
		break;

	case 118:
		StringCopy(&Var2, "FEET_P1_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 110;
		break;

	case 119:
		StringCopy(&Var2, "FEET_P1_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 120:
		StringCopy(&Var2, "FEET_P1_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 120;
		break;

	case 121:
		StringCopy(&Var2, "FEET_P1_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 122:
		StringCopy(&Var2, "FEET_P1_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 125;
		break;

	case 123:
		StringCopy(&Var2, "FEET_P1_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 128;
		break;

	case 124:
		StringCopy(&Var2, "FEET_P1_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 135;
		break;

	case 125:
		StringCopy(&Var2, "FEET_P1_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 130;
		break;

	case 126:
		StringCopy(&Var2, "FEET_P1_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 145;
		break;

	case 127:
		StringCopy(&Var2, "FEET_P1_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 110;
		break;

	case 128:
		StringCopy(&Var2, "FEET_P1_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 120;
		break;

	case 129:
		StringCopy(&Var2, "FEET_P1_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 150;
		break;

	case 130:
		StringCopy(&Var2, "FEET_P1_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 125;
		break;

	case 131:
		StringCopy(&Var2, "FEET_P1_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 120;
		break;

	case 132:
		StringCopy(&Var2, "FEET_P1_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 130;
		break;

	case 133:
		StringCopy(&Var2, "FEET_P1_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 110;
		break;

	default: func_24(iVar10, iParam0, 134); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xD7F0
void func_54(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "LEGS_P1_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "LEGS_P1_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 32;
		break;

	case 2:
		StringCopy(&Var2, "LEGS_P1_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 38;
		break;

	case 3:
		StringCopy(&Var2, "LEGS_P1_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 44;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "LEGS_P1_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "LEGS_P1_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 15:
		StringCopy(&Var2, "LEGS_P1_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 690;
		break;

	case 16:
		StringCopy(&Var2, "LEGS_P1_6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 720;
		break;

	case 17:
		StringCopy(&Var2, "LEGS_P1_6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 850;
		break;

	case 18:
		StringCopy(&Var2, "LEGS_P1_6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 850;
		break;

	case 19:
		StringCopy(&Var2, "LEGS_P1_6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 740;
		break;

	case 20:
		StringCopy(&Var2, "LEGS_P1_6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 750;
		break;

	case 21:
		StringCopy(&Var2, "LEGS_P1_6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 790;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 24:
		StringCopy(&Var2, "LEGS_P1_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 25:
		StringCopy(&Var2, "LEGS_P1_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 145;
		break;

	case 26:
		StringCopy(&Var2, "LEGS_P1_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 140;
		break;

	case 27:
		StringCopy(&Var2, "LEGS_P1_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 148;
		break;

	case 28:
		StringCopy(&Var2, "LEGS_P1_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 29:
		StringCopy(&Var2, "LEGS_P1_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 154;
		break;

	case 30:
		StringCopy(&Var2, "LEGS_P1_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 158;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 33:
		StringCopy(&Var2, "LEGS_P1_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 820;
		break;

	case 34:
		StringCopy(&Var2, "LEGS_P1_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 820;
		break;

	case 35:
		StringCopy(&Var2, "LEGS_P1_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 850;
		break;

	case 36:
		StringCopy(&Var2, "LEGS_P1_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 850;
		break;

	case 37:
		StringCopy(&Var2, "LEGS_P1_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 920;
		break;

	case 38:
		StringCopy(&Var2, "LEGS_P1_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 950;
		break;

	case 39:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		break;

	case 40:
		StringCopy(&Var2, "LEGS_P1_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 41:
		StringCopy(&Var2, "LEGS_P1_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 45;
		break;

	case 42:
		StringCopy(&Var2, "LEGS_P1_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 48;
		break;

	case 43:
		StringCopy(&Var2, "LEGS_P1_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 45;
		break;

	case 44:
		StringCopy(&Var2, "LEGS_P1_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 48;
		break;

	case 45:
		StringCopy(&Var2, "LEGS_P1_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 52;
		break;

	case 46:
		StringCopy(&Var2, "LEGS_P1_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 55;
		break;

	case 47:
		StringCopy(&Var2, "LEGS_P1_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 58;
		break;

	case 48:
		StringCopy(&Var2, "LEGS_P1_13_8", 16);
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 60;
		break;

	case 49:
		StringCopy(&Var2, "LEGS_P1_13_9", 16);
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 58;
		break;

	case 50:
		StringCopy(&Var2, "LEGS_P1_13_10", 16);
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 62;
		break;

	case 51:
		StringCopy(&Var2, "LEGS_P1_13_11", 16);
		iVar6 = 13;
		iVar7 = 11;
		iVar1 = 65;
		break;

	case 52:
		StringCopy(&Var2, "LEGS_P1_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 53:
		StringCopy(&Var2, "LEGS_P1_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 54:
		StringCopy(&Var2, "LEGS_P1_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		break;

	case 55:
		StringCopy(&Var2, "LEGS_P1_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		break;

	case 56:
		StringCopy(&Var2, "LEGS_P1_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		break;

	case 57:
		StringCopy(&Var2, "LEGS_P1_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		break;

	case 58:
		StringCopy(&Var2, "LEGS_P1_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		break;

	case 59:
		StringCopy(&Var2, "LEGS_P1_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		break;

	case 60:
		StringCopy(&Var2, "LEGS_P1_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		break;

	case 61:
		StringCopy(&Var2, "LEGS_P1_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		break;

	case 62:
		StringCopy(&Var2, "LEGS_P1_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		break;

	case 63:
		StringCopy(&Var2, "LEGS_P1_15_10", 16);
		iVar6 = 15;
		iVar7 = 10;
		break;

	case 64:
		StringCopy(&Var2, "LEGS_P1_15_11", 16);
		iVar6 = 15;
		iVar7 = 11;
		break;

	case 65:
		StringCopy(&Var2, "LEGS_P1_15_12", 16);
		iVar6 = 15;
		iVar7 = 12;
		break;

	case 66:
		StringCopy(&Var2, "LEGS_P1_15_13", 16);
		iVar6 = 15;
		iVar7 = 13;
		break;

	case 67:
		StringCopy(&Var2, "LEGS_P1_15_14", 16);
		iVar6 = 15;
		iVar7 = 14;
		break;

	case 68:
		StringCopy(&Var2, "LEGS_P1_15_15", 16);
		iVar6 = 15;
		iVar7 = 15;
		break;

	case 69:
		StringCopy(&Var2, "LEGS_P1_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 70:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 71:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 72:
		StringCopy(&Var2, "LEGS_P1_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 73:
		StringCopy(&Var2, "LEGS_P1_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 160;
		break;

	case 74:
		StringCopy(&Var2, "LEGS_P1_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 180;
		break;

	case 75:
		StringCopy(&Var2, "LEGS_P1_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 180;
		break;

	case 76:
		StringCopy(&Var2, "LEGS_P1_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		break;

	case 77:
		StringCopy(&Var2, "LEGS_P1_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		break;

	case 78:
		StringCopy(&Var2, "LEGS_P1_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 79:
		StringCopy(&Var2, "LEGS_P1_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 118;
		break;

	case 80:
		StringCopy(&Var2, "LEGS_P1_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 120;
		break;

	case 81:
		StringCopy(&Var2, "LEGS_P1_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 128;
		break;

	case 82:
		StringCopy(&Var2, "LEGS_P1_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 128;
		break;

	case 83:
		StringCopy(&Var2, "LEGS_P1_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 130;
		break;

	case 84:
		StringCopy(&Var2, "LEGS_P1_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 145;
		break;

	case 85:
		StringCopy(&Var2, "LEGS_P1_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 138;
		break;

	case 86:
		StringCopy(&Var2, "LEGS_P1_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 132;
		break;

	case 87:
		StringCopy(&Var2, "LEGS_P1_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 148;
		break;

	case 88:
		StringCopy(&Var2, "LEGS_P1_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 118;
		break;

	case 89:
		StringCopy(&Var2, "LEGS_P1_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 118;
		break;

	case 90:
		StringCopy(&Var2, "LEGS_P1_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 118;
		break;

	case 91:
		StringCopy(&Var2, "LEGS_P1_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 129;
		break;

	case 92:
		StringCopy(&Var2, "LEGS_P1_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 135;
		break;

	case 93:
		StringCopy(&Var2, "LEGS_P1_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 135;
		break;

	case 94:
		StringCopy(&Var2, "LEGS_P1_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 118;
		break;

	case 95:
		StringCopy(&Var2, "LEGS_P1_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 118;
		break;

	case 96:
		StringCopy(&Var2, "LEGS_P1_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 118;
		break;

	case 97:
		StringCopy(&Var2, "LEGS_P1_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar1 = 55;
		break;

	case 98:
		StringCopy(&Var2, "LEGS_P1_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 55;
		break;

	case 99:
		StringCopy(&Var2, "LEGS_P1_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 59;
		break;

	case 100:
		StringCopy(&Var2, "LEGS_P1_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 59;
		break;

	case 101:
		StringCopy(&Var2, "LEGS_P1_22_4", 16);
		iVar6 = 22;
		iVar7 = 4;
		iVar1 = 65;
		break;

	case 102:
		StringCopy(&Var2, "LEGS_P1_22_5", 16);
		iVar6 = 22;
		iVar7 = 5;
		iVar1 = 65;
		break;

	case 103:
		StringCopy(&Var2, "LEGS_P1_22_6", 16);
		iVar6 = 22;
		iVar7 = 6;
		iVar1 = 69;
		break;

	case 104:
		StringCopy(&Var2, "LEGS_P1_22_7", 16);
		iVar6 = 22;
		iVar7 = 7;
		iVar1 = 69;
		break;

	case 105:
		StringCopy(&Var2, "LEGS_P1_22_8", 16);
		iVar6 = 22;
		iVar7 = 8;
		iVar1 = 75;
		break;

	case 106:
		StringCopy(&Var2, "LEGS_P1_22_9", 16);
		iVar6 = 22;
		iVar7 = 9;
		iVar1 = 75;
		break;

	case 107:
		StringCopy(&Var2, "LEGS_P1_22_10", 16);
		iVar6 = 22;
		iVar7 = 10;
		iVar1 = 65;
		break;

	case 108:
		StringCopy(&Var2, "LEGS_P1_22_11", 16);
		iVar6 = 22;
		iVar7 = 11;
		iVar1 = 65;
		break;

	case 109:
		StringCopy(&Var2, "LEGS_P1_22_12", 16);
		iVar6 = 22;
		iVar7 = 12;
		iVar1 = 65;
		break;

	case 110:
		StringCopy(&Var2, "LEGS_P1_22_13", 16);
		iVar6 = 22;
		iVar7 = 13;
		iVar1 = 65;
		break;

	case 111:
		StringCopy(&Var2, "LEGS_P1_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar1 = 38;
		break;

	case 112:
		StringCopy(&Var2, "LEGS_P1_23_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar1 = 38;
		break;

	case 113:
		StringCopy(&Var2, "LEGS_P1_23_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar1 = 28;
		break;

	case 114:
		StringCopy(&Var2, "LEGS_P1_23_3", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar1 = 34;
		break;

	case 115:
		StringCopy(&Var2, "LEGS_P1_23_4", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar1 = 36;
		break;

	case 116:
		StringCopy(&Var2, "LEGS_P1_23_5", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar1 = 32;
		break;

	default: func_24(iVar10, iParam0, 117); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xE49C
void func_55(int iParam0) {
	if (iParam0 < 107) {
		func_58(iParam0);
	}
	else if (iParam0 < 227) {
		func_57(iParam0);
	}
	else {
		func_56(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1) {
		func_24(3, iParam0, 318);
	}
}

// Position - 0xE4E1
void func_56(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 227:
		StringCopy(&Var2, "TORSO_P1_18_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 228:
		StringCopy(&Var2, "TORSO_P1_18_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar9 = 3;
		break;

	case 229:
		StringCopy(&Var2, "TORSO_P1_18_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar9 = 3;
		break;

	case 230:
		StringCopy(&Var2, "TORSO_P1_18_3", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar9 = 3;
		break;

	case 231:
		StringCopy(&Var2, "TORSO_P1_18_4", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar9 = 3;
		break;

	case 232:
		StringCopy(&Var2, "TORSO_P1_18_5", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar9 = 3;
		break;

	case 233:
		StringCopy(&Var2, "TORSO_P1_18_6", 16);
		iVar6 = 23;
		iVar7 = 6;
		iVar9 = 3;
		break;

	case 234:
		StringCopy(&Var2, "TORSO_P1_18_7", 16);
		iVar6 = 23;
		iVar7 = 7;
		iVar9 = 3;
		break;

	case 235:
		StringCopy(&Var2, "TORSO_P1_18_8", 16);
		iVar6 = 23;
		iVar7 = 8;
		iVar9 = 3;
		break;

	case 236:
		StringCopy(&Var2, "TORSO_P1_18_9", 16);
		iVar6 = 23;
		iVar7 = 9;
		iVar9 = 3;
		break;

	case 237:
		StringCopy(&Var2, "TORSO_P1_18_10", 16);
		iVar6 = 23;
		iVar7 = 10;
		iVar9 = 3;
		break;

	case 238:
		StringCopy(&Var2, "TORSO_P1_18_11", 16);
		iVar6 = 23;
		iVar7 = 11;
		iVar9 = 3;
		break;

	case 239:
		StringCopy(&Var2, "TORSO_P1_18_12", 16);
		iVar6 = 23;
		iVar7 = 12;
		iVar9 = 3;
		break;

	case 240:
		StringCopy(&Var2, "TORSO_P1_18_13", 16);
		iVar6 = 23;
		iVar7 = 13;
		iVar9 = 3;
		break;

	case 241:
		StringCopy(&Var2, "TORSO_P1_18_14", 16);
		iVar6 = 23;
		iVar7 = 14;
		iVar9 = 3;
		break;

	case 242:
		StringCopy(&Var2, "TORSO_P1_18_15", 16);
		iVar6 = 23;
		iVar7 = 15;
		iVar9 = 3;
		break;

	case 243:
		StringCopy(&Var2, "TORSO_P1_24_0", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 244:
		StringCopy(&Var2, "TORSO_P1_24_1", 16);
		iVar6 = 24;
		iVar7 = 1;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 245:
		StringCopy(&Var2, "TORSO_P1_24_2", 16);
		iVar6 = 24;
		iVar7 = 2;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 246:
		StringCopy(&Var2, "TORSO_P1_24_3", 16);
		iVar6 = 24;
		iVar7 = 3;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 247:
		StringCopy(&Var2, "TORSO_P1_24_4", 16);
		iVar6 = 24;
		iVar7 = 4;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 248:
		StringCopy(&Var2, "TORSO_P1_24_5", 16);
		iVar6 = 24;
		iVar7 = 5;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 249:
		StringCopy(&Var2, "TORSO_P1_24_6", 16);
		iVar6 = 24;
		iVar7 = 6;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 250:
		StringCopy(&Var2, "TORSO_P1_24_7", 16);
		iVar6 = 24;
		iVar7 = 7;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 251:
		StringCopy(&Var2, "TORSO_P1_24_8", 16);
		iVar6 = 24;
		iVar7 = 8;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 252:
		StringCopy(&Var2, "TORSO_P1_24_9", 16);
		iVar6 = 24;
		iVar7 = 9;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 253:
		StringCopy(&Var2, "TORSO_P1_24_10", 16);
		iVar6 = 24;
		iVar7 = 10;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 254:
		StringCopy(&Var2, "TORSO_P1_24_11", 16);
		iVar6 = 24;
		iVar7 = 11;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 255:
		StringCopy(&Var2, "TORSO_P1_24_12", 16);
		iVar6 = 24;
		iVar7 = 12;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 256:
		StringCopy(&Var2, "TORSO_P1_24_13", 16);
		iVar6 = 24;
		iVar7 = 13;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 257:
		StringCopy(&Var2, "TORSO_P1_24_14", 16);
		iVar6 = 24;
		iVar7 = 14;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 258:
		StringCopy(&Var2, "TORSO_P1_24_15", 16);
		iVar6 = 24;
		iVar7 = 15;
		iVar1 = 2200;
		iVar9 = 3;
		break;

	case 259:
		StringCopy(&Var2, "TORSO_P1_25_0", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 3;
		break;

	case 260:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 0;
		iVar9 = 1;
		break;

	case 261:
		StringCopy(&Var2, "TORSO_P1_27_0", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar1 = 150;
		break;

	case 262:
		StringCopy(&Var2, "TORSO_P1_27_1", 16);
		iVar6 = 27;
		iVar7 = 1;
		iVar1 = 160;
		break;

	case 263:
		StringCopy(&Var2, "TORSO_P1_27_2", 16);
		iVar6 = 27;
		iVar7 = 2;
		iVar1 = 150;
		break;

	case 264:
		StringCopy(&Var2, "TORSO_P1_27_3", 16);
		iVar6 = 27;
		iVar7 = 3;
		iVar1 = 150;
		break;

	case 265:
		StringCopy(&Var2, "TORSO_P1_27_4", 16);
		iVar6 = 27;
		iVar7 = 4;
		iVar1 = 160;
		break;

	case 266:
		StringCopy(&Var2, "TORSO_P1_27_5", 16);
		iVar6 = 27;
		iVar7 = 5;
		iVar1 = 160;
		break;

	case 267:
		StringCopy(&Var2, "TORSO_P1_28_0", 16);
		iVar6 = 28;
		iVar7 = 0;
		iVar1 = 88;
		break;

	case 268:
		StringCopy(&Var2, "TORSO_P1_28_1", 16);
		iVar6 = 28;
		iVar7 = 1;
		iVar1 = 60;
		break;

	case 269:
		StringCopy(&Var2, "TORSO_P1_28_2", 16);
		iVar6 = 28;
		iVar7 = 2;
		iVar1 = 70;
		break;

	case 270:
		StringCopy(&Var2, "TORSO_P1_28_3", 16);
		iVar6 = 28;
		iVar7 = 3;
		iVar1 = 80;
		break;

	case 271:
		StringCopy(&Var2, "TORSO_P1_28_4", 16);
		iVar6 = 28;
		iVar7 = 4;
		iVar1 = 90;
		break;

	case 272:
		StringCopy(&Var2, "TORSO_P1_28_5", 16);
		iVar6 = 28;
		iVar7 = 5;
		iVar1 = 80;
		break;

	case 273:
		StringCopy(&Var2, "TORSO_P1_28_6", 16);
		iVar6 = 28;
		iVar7 = 6;
		iVar1 = 70;
		break;

	case 274:
		StringCopy(&Var2, "TORSO_P1_28_7", 16);
		iVar6 = 28;
		iVar7 = 7;
		iVar1 = 95;
		break;

	case 275:
		StringCopy(&Var2, "TORSO_P1_28_8", 16);
		iVar6 = 28;
		iVar7 = 8;
		iVar1 = 105;
		break;

	case 276:
		StringCopy(&Var2, "TORSO_P1_28_9", 16);
		iVar6 = 28;
		iVar7 = 9;
		iVar1 = 95;
		break;

	case 277:
		StringCopy(&Var2, "TORSO_P1_28_10", 16);
		iVar6 = 28;
		iVar7 = 10;
		iVar1 = 110;
		break;

	case 278:
		StringCopy(&Var2, "TORSO_P1_28_11", 16);
		iVar6 = 28;
		iVar7 = 11;
		iVar1 = 98;
		break;

	case 279:
		StringCopy(&Var2, "TORSO_P1_28_12", 16);
		iVar6 = 28;
		iVar7 = 12;
		iVar1 = 88;
		break;

	case 280:
		StringCopy(&Var2, "TORSO_P1_28_13", 16);
		iVar6 = 28;
		iVar7 = 13;
		iVar1 = 98;
		break;

	case 281:
		StringCopy(&Var2, "TORSO_P1_28_14", 16);
		iVar6 = 28;
		iVar7 = 14;
		iVar1 = 110;
		break;

	case 282:
		StringCopy(&Var2, "TORSO_P1_28_15", 16);
		iVar6 = 28;
		iVar7 = 15;
		iVar1 = 98;
		break;

	case 283:
		StringCopy(&Var2, "TORSO_P1_29_0", 16);
		iVar6 = 29;
		iVar7 = 0;
		iVar1 = 250;
		break;

	case 284:
		StringCopy(&Var2, "TORSO_P1_29_1", 16);
		iVar6 = 29;
		iVar7 = 1;
		iVar1 = 270;
		break;

	case 285:
		StringCopy(&Var2, "TORSO_P1_29_2", 16);
		iVar6 = 29;
		iVar7 = 2;
		iVar1 = 280;
		break;

	case 286:
		StringCopy(&Var2, "TORSO_P1_29_3", 16);
		iVar6 = 29;
		iVar7 = 3;
		iVar1 = 275;
		break;

	case 287:
		StringCopy(&Var2, "TORSO_P1_29_4", 16);
		iVar6 = 29;
		iVar7 = 4;
		iVar1 = 290;
		break;

	case 288:
		StringCopy(&Var2, "TORSO_P1_29_5", 16);
		iVar6 = 29;
		iVar7 = 5;
		iVar1 = 35;
		break;

	case 289:
		StringCopy(&Var2, "TORSO_P1_29_6", 16);
		iVar6 = 29;
		iVar7 = 6;
		iVar1 = 35;
		break;

	case 290:
		StringCopy(&Var2, "TORSO_P1_29_7", 16);
		iVar6 = 29;
		iVar7 = 7;
		iVar1 = 35;
		break;

	case 291:
		StringCopy(&Var2, "TORSO_P1_29_8", 16);
		iVar6 = 29;
		iVar7 = 8;
		iVar1 = 295;
		break;

	case 292:
		StringCopy(&Var2, "TORSO_P1_29_9", 16);
		iVar6 = 29;
		iVar7 = 9;
		iVar1 = 35;
		break;

	case 293:
		StringCopy(&Var2, "TORSO_P1_29_10", 16);
		iVar6 = 29;
		iVar7 = 10;
		iVar1 = 35;
		break;

	case 294:
		StringCopy(&Var2, "TORSO_P1_29_11", 16);
		iVar6 = 29;
		iVar7 = 11;
		iVar1 = 35;
		break;

	case 295:
		StringCopy(&Var2, "TORSO_P1_29_12", 16);
		iVar6 = 29;
		iVar7 = 12;
		break;

	case 296:
		StringCopy(&Var2, "TORSO_P1_30_0", 16);
		iVar6 = 30;
		iVar7 = 0;
		iVar1 = 1750;
		break;

	case 297:
		StringCopy(&Var2, "TORSO_P1_30_1", 16);
		iVar6 = 30;
		iVar7 = 1;
		iVar1 = 1920;
		break;

	case 298:
		StringCopy(&Var2, "TORSO_P1_30_2", 16);
		iVar6 = 30;
		iVar7 = 2;
		iVar1 = 1890;
		break;

	case 299:
		StringCopy(&Var2, "TORSO_P1_30_3", 16);
		iVar6 = 30;
		iVar7 = 3;
		iVar1 = 1850;
		break;

	case 300:
		StringCopy(&Var2, "TORSO_P1_30_4", 16);
		iVar6 = 30;
		iVar7 = 4;
		iVar1 = 1750;
		break;

	case 301:
		StringCopy(&Var2, "TORSO_P1_30_5", 16);
		iVar6 = 30;
		iVar7 = 5;
		iVar1 = 1990;
		break;

	case 302:
		StringCopy(&Var2, "TORSO_P1_30_6", 16);
		iVar6 = 30;
		iVar7 = 6;
		iVar1 = 1820;
		break;

	case 303:
		StringCopy(&Var2, "TORSO_P1_30_7", 16);
		iVar6 = 30;
		iVar7 = 7;
		iVar1 = 1990;
		break;

	case 304:
		StringCopy(&Var2, "TORSO_P1_30_8", 16);
		iVar6 = 30;
		iVar7 = 8;
		iVar1 = 1920;
		break;

	case 305:
		StringCopy(&Var2, "TORSO_P1_30_9", 16);
		iVar6 = 30;
		iVar7 = 9;
		iVar1 = 1850;
		break;

	case 306:
		StringCopy(&Var2, "TORSO_P1_30_10", 16);
		iVar6 = 30;
		iVar7 = 10;
		iVar1 = 1990;
		break;

	case 307:
		StringCopy(&Var2, "TORSO_P1_30_11", 16);
		iVar6 = 30;
		iVar7 = 11;
		iVar1 = 1790;
		break;

	case 308:
		StringCopy(&Var2, "TORSO_P1_30_12", 16);
		iVar6 = 30;
		iVar7 = 12;
		iVar1 = 1790;
		break;

	case 309:
		StringCopy(&Var2, "TORSO_P1_31_0", 16);
		iVar6 = 31;
		iVar7 = 0;
		iVar1 = 69;
		break;

	case 310:
		StringCopy(&Var2, "TORSO_P1_31_1", 16);
		iVar6 = 31;
		iVar7 = 1;
		iVar1 = 75;
		break;

	case 311:
		StringCopy(&Var2, "TORSO_P1_31_2", 16);
		iVar6 = 31;
		iVar7 = 2;
		iVar1 = 75;
		break;

	case 312:
		StringCopy(&Var2, "TORSO_P1_31_3", 16);
		iVar6 = 31;
		iVar7 = 3;
		iVar1 = 79;
		break;

	case 313:
		StringCopy(&Var2, "TORSO_P1_31_4", 16);
		iVar6 = 31;
		iVar7 = 4;
		iVar1 = 79;
		break;

	case 314:
		StringCopy(&Var2, "TORSO_P1_31_5", 16);
		iVar6 = 31;
		iVar7 = 5;
		iVar1 = 89;
		break;

	case 315:
		StringCopy(&Var2, "TORSO_P1_31_6", 16);
		iVar6 = 31;
		iVar7 = 6;
		iVar1 = 85;
		break;

	case 316:
		StringCopy(&Var2, "TORSO_P1_31_7", 16);
		iVar6 = 31;
		iVar7 = 7;
		iVar1 = 85;
		break;

	case 317:
		StringCopy(&Var2, "TORSO_P1_31_8", 16);
		iVar6 = 31;
		iVar7 = 8;
		break;

	default: return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xEF85
void func_57(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 107:
		StringCopy(&Var2, "TORSO_P1_12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 195;
		break;

	case 108:
		StringCopy(&Var2, "TORSO_P1_12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 420;
		break;

	case 109:
		StringCopy(&Var2, "TORSO_P1_12_2", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 390;
		break;

	case 110:
		StringCopy(&Var2, "TORSO_P1_12_3", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 450;
		break;

	case 111:
		StringCopy(&Var2, "TORSO_P1_12_4", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 400;
		break;

	case 112:
		StringCopy(&Var2, "TORSO_P1_12_5", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 390;
		break;

	case 113:
		StringCopy(&Var2, "TORSO_P1_12_6", 16);
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 570;
		break;

	case 114:
		StringCopy(&Var2, "TORSO_P1_12_7", 16);
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 390;
		break;

	case 115:
		StringCopy(&Var2, "TORSO_P1_12_8", 16);
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 470;
		break;

	case 116:
		StringCopy(&Var2, "TORSO_P1_12_9", 16);
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 390;
		break;

	case 117:
		StringCopy(&Var2, "TORSO_P1_12_10", 16);
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 520;
		break;

	case 118:
		StringCopy(&Var2, "TORSO_P1_12_11", 16);
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 490;
		break;

	case 119:
		StringCopy(&Var2, "TORSO_P1_12_12", 16);
		iVar6 = 12;
		iVar7 = 12;
		iVar1 = 490;
		break;

	case 120:
		StringCopy(&Var2, "TORSO_P1_12_13", 16);
		iVar6 = 12;
		iVar7 = 13;
		iVar1 = 590;
		break;

	case 121:
		StringCopy(&Var2, "TORSO_P1_12_14", 16);
		iVar6 = 12;
		iVar7 = 14;
		iVar1 = 560;
		break;

	case 122:
		StringCopy(&Var2, "TORSO_P1_12_15", 16);
		iVar6 = 12;
		iVar7 = 15;
		iVar1 = 520;
		break;

	case 123:
		StringCopy(&Var2, "TORSO_P1_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 124:
		StringCopy(&Var2, "TORSO_P1_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		break;

	case 125:
		StringCopy(&Var2, "TORSO_P1_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		break;

	case 126:
		StringCopy(&Var2, "TORSO_P1_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 90;
		break;

	case 127:
		StringCopy(&Var2, "TORSO_P1_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 85;
		break;

	case 128:
		StringCopy(&Var2, "TORSO_P1_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 45;
		break;

	case 129:
		StringCopy(&Var2, "TORSO_P1_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 90;
		break;

	case 130:
		StringCopy(&Var2, "TORSO_P1_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 47;
		break;

	case 131:
		StringCopy(&Var2, "TORSO_P1_13_8", 16);
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 45;
		break;

	case 132:
		StringCopy(&Var2, "TORSO_P1_13_9", 16);
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 48;
		break;

	case 133:
		StringCopy(&Var2, "TORSO_P1_13_10", 16);
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 45;
		break;

	case 134:
		StringCopy(&Var2, "TORSO_P1_13_11", 16);
		iVar6 = 13;
		iVar7 = 11;
		iVar1 = 85;
		break;

	case 135:
		StringCopy(&Var2, "TORSO_P1_13_12", 16);
		iVar6 = 13;
		iVar7 = 12;
		iVar1 = 45;
		break;

	case 136:
		StringCopy(&Var2, "TORSO_P1_13_13", 16);
		iVar6 = 13;
		iVar7 = 13;
		iVar1 = 47;
		break;

	case 137:
		StringCopy(&Var2, "TORSO_P1_13_14", 16);
		iVar6 = 13;
		iVar7 = 14;
		iVar1 = 45;
		break;

	case 138:
		StringCopy(&Var2, "TORSO_P1_13_15", 16);
		iVar6 = 13;
		iVar7 = 15;
		iVar1 = 48;
		break;

	case 139:
		StringCopy(&Var2, "TORSO_P1_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 290;
		break;

	case 140:
		StringCopy(&Var2, "TORSO_P1_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 290;
		break;

	case 141:
		StringCopy(&Var2, "TORSO_P1_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 290;
		break;

	case 142:
		StringCopy(&Var2, "TORSO_P1_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 290;
		break;

	case 143:
		StringCopy(&Var2, "TORSO_P1_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 290;
		break;

	case 144:
		StringCopy(&Var2, "TORSO_P1_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 290;
		break;

	case 145:
		StringCopy(&Var2, "TORSO_P1_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 65;
		break;

	case 146:
		StringCopy(&Var2, "TORSO_P1_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 65;
		break;

	case 147:
		StringCopy(&Var2, "TORSO_P1_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 200;
		break;

	case 148:
		StringCopy(&Var2, "TORSO_P1_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 220;
		break;

	case 149:
		StringCopy(&Var2, "TORSO_P1_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 220;
		break;

	case 150:
		StringCopy(&Var2, "TORSO_P1_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 240;
		break;

	case 151:
		StringCopy(&Var2, "TORSO_P1_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		break;

	case 152:
		StringCopy(&Var2, "TORSO_P1_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 250;
		break;

	case 153:
		StringCopy(&Var2, "TORSO_P1_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 260;
		break;

	case 154:
		StringCopy(&Var2, "TORSO_P1_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 40;
		break;

	case 155:
		StringCopy(&Var2, "TORSO_P1_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		iVar1 = 50;
		break;

	case 156:
		StringCopy(&Var2, "TORSO_P1_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		iVar1 = 45;
		break;

	case 157:
		StringCopy(&Var2, "TORSO_P1_15_10", 16);
		iVar6 = 15;
		iVar7 = 10;
		iVar1 = 40;
		break;

	case 158:
		StringCopy(&Var2, "TORSO_P1_15_11", 16);
		iVar6 = 15;
		iVar7 = 11;
		iVar1 = 55;
		break;

	case 159:
		StringCopy(&Var2, "TORSO_P1_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 160:
		StringCopy(&Var2, "TORSO_P1_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 40;
		break;

	case 161:
		StringCopy(&Var2, "TORSO_P1_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar1 = 50;
		break;

	case 162:
		StringCopy(&Var2, "TORSO_P1_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		break;

	case 163:
		StringCopy(&Var2, "TORSO_P1_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 50;
		break;

	case 164:
		StringCopy(&Var2, "TORSO_P1_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 50;
		break;

	case 165:
		StringCopy(&Var2, "TORSO_P1_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 50;
		break;

	case 166:
		StringCopy(&Var2, "TORSO_P1_17_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		iVar1 = 50;
		break;

	case 167:
		StringCopy(&Var2, "TORSO_P1_17_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		iVar1 = 50;
		break;

	case 168:
		StringCopy(&Var2, "TORSO_P1_17_8", 16);
		iVar6 = 17;
		iVar7 = 8;
		iVar1 = 50;
		break;

	case 169:
		StringCopy(&Var2, "TORSO_P1_17_9", 16);
		iVar6 = 17;
		iVar7 = 9;
		iVar1 = 50;
		break;

	case 170:
		StringCopy(&Var2, "TORSO_P1_17_10", 16);
		iVar6 = 17;
		iVar7 = 10;
		iVar1 = 50;
		break;

	case 171:
		StringCopy(&Var2, "TORSO_P1_17_11", 16);
		iVar6 = 17;
		iVar7 = 11;
		iVar1 = 50;
		break;

	case 172:
		StringCopy(&Var2, "TORSO_P1_17_12", 16);
		iVar6 = 17;
		iVar7 = 12;
		iVar1 = 50;
		break;

	case 173:
		StringCopy(&Var2, "TORSO_P1_17_13", 16);
		iVar6 = 17;
		iVar7 = 13;
		iVar1 = 50;
		break;

	case 174:
		StringCopy(&Var2, "TORSO_P1_17_14", 16);
		iVar6 = 17;
		iVar7 = 14;
		iVar1 = 50;
		break;

	case 175:
		StringCopy(&Var2, "TORSO_P1_17_15", 16);
		iVar6 = 17;
		iVar7 = 15;
		iVar1 = 50;
		break;

	case 176:
		StringCopy(&Var2, "TORSO_P1_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 177:
		StringCopy(&Var2, "TORSO_P1_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar9 = 3;
		break;

	case 178:
		StringCopy(&Var2, "TORSO_P1_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar9 = 3;
		break;

	case 179:
		StringCopy(&Var2, "TORSO_P1_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar9 = 3;
		break;

	case 180:
		StringCopy(&Var2, "TORSO_P1_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar9 = 3;
		break;

	case 181:
		StringCopy(&Var2, "TORSO_P1_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar9 = 3;
		break;

	case 182:
		StringCopy(&Var2, "TORSO_P1_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar9 = 3;
		break;

	case 183:
		StringCopy(&Var2, "TORSO_P1_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar9 = 3;
		break;

	case 184:
		StringCopy(&Var2, "TORSO_P1_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar9 = 3;
		break;

	case 185:
		StringCopy(&Var2, "TORSO_P1_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar9 = 3;
		break;

	case 186:
		StringCopy(&Var2, "TORSO_P1_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar9 = 3;
		break;

	case 187:
		StringCopy(&Var2, "TORSO_P1_18_11", 16);
		iVar6 = 18;
		iVar7 = 11;
		iVar9 = 3;
		break;

	case 188:
		StringCopy(&Var2, "TORSO_P1_18_12", 16);
		iVar6 = 18;
		iVar7 = 12;
		iVar9 = 3;
		break;

	case 189:
		StringCopy(&Var2, "TORSO_P1_18_13", 16);
		iVar6 = 18;
		iVar7 = 13;
		iVar9 = 3;
		break;

	case 190:
		StringCopy(&Var2, "TORSO_P1_18_14", 16);
		iVar6 = 18;
		iVar7 = 14;
		iVar9 = 3;
		break;

	case 191:
		StringCopy(&Var2, "TORSO_P1_18_15", 16);
		iVar6 = 18;
		iVar7 = 15;
		iVar9 = 3;
		break;

	case 192:
		StringCopy(&Var2, "TORSO_P1_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 193:
		StringCopy(&Var2, "TORSO_P1_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 194:
		StringCopy(&Var2, "TORSO_P1_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 195:
		StringCopy(&Var2, "TORSO_P1_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 520;
		iVar9 = 3;
		break;

	case 196:
		StringCopy(&Var2, "TORSO_P1_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 197:
		StringCopy(&Var2, "TORSO_P1_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 198:
		StringCopy(&Var2, "TORSO_P1_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 199:
		StringCopy(&Var2, "TORSO_P1_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 200:
		StringCopy(&Var2, "TORSO_P1_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 201:
		StringCopy(&Var2, "TORSO_P1_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 202:
		StringCopy(&Var2, "TORSO_P1_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 203:
		StringCopy(&Var2, "TORSO_P1_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 480;
		iVar9 = 3;
		break;

	case 204:
		StringCopy(&Var2, "TORSO_P1_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 520;
		iVar9 = 3;
		break;

	case 205:
		StringCopy(&Var2, "TORSO_P1_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 520;
		iVar9 = 3;
		break;

	case 206:
		StringCopy(&Var2, "TORSO_P1_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 520;
		iVar9 = 3;
		break;

	case 207:
		StringCopy(&Var2, "TORSO_P1_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 440;
		iVar9 = 3;
		break;

	case 208:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 209:
		StringCopy(&Var2, "TORSO_P1_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 220;
		break;

	case 210:
		StringCopy(&Var2, "TORSO_P1_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 200;
		break;

	case 211:
		StringCopy(&Var2, "TORSO_P1_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 240;
		break;

	case 212:
		StringCopy(&Var2, "TORSO_P1_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 240;
		break;

	case 213:
		StringCopy(&Var2, "TORSO_P1_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 260;
		break;

	case 214:
		StringCopy(&Var2, "TORSO_P1_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 275;
		break;

	case 215:
		StringCopy(&Var2, "TORSO_P1_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 275;
		break;

	case 216:
		StringCopy(&Var2, "TORSO_P1_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 280;
		break;

	case 217:
		StringCopy(&Var2, "TORSO_P1_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 280;
		break;

	case 218:
		StringCopy(&Var2, "TORSO_P1_21_9", 16);
		iVar6 = 21;
		iVar7 = 9;
		iVar1 = 280;
		break;

	case 219:
		StringCopy(&Var2, "TORSO_P1_21_10", 16);
		iVar6 = 21;
		iVar7 = 10;
		iVar1 = 280;
		break;

	case 220:
		StringCopy(&Var2, "TORSO_P1_21_11", 16);
		iVar6 = 21;
		iVar7 = 11;
		iVar1 = 280;
		break;

	case 221:
		StringCopy(&Var2, "TORSO_P1_21_12", 16);
		iVar6 = 21;
		iVar7 = 12;
		iVar1 = 280;
		break;

	case 222:
		StringCopy(&Var2, "TORSO_P1_21_13", 16);
		iVar6 = 21;
		iVar7 = 13;
		iVar1 = 280;
		break;

	case 223:
		StringCopy(&Var2, "TORSO_P1_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar1 = 3100;
		iVar9 = 3;
		break;

	case 224:
		StringCopy(&Var2, "TORSO_P1_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 2800;
		iVar9 = 3;
		break;

	case 225:
		StringCopy(&Var2, "TORSO_P1_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 2500;
		iVar9 = 3;
		break;

	case 226:
		StringCopy(&Var2, "TORSO_P1_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 3000;
		iVar9 = 3;
		break;

	default: return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0xFD73
void func_58(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "TORSO_P1_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "TORSO_P1_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "TORSO_P1_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 180;
		break;

	case 3:
		StringCopy(&Var2, "TORSO_P1_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 22;
		break;

	case 4:
		StringCopy(&Var2, "TORSO_P1_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 20;
		break;

	case 5:
		StringCopy(&Var2, "TORSO_P1_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 18;
		break;

	case 6:
		StringCopy(&Var2, "TORSO_P1_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 19;
		break;

	case 7:
		StringCopy(&Var2, "TORSO_P1_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 22;
		break;

	case 8:
		StringCopy(&Var2, "TORSO_P1_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 20;
		break;

	case 9:
		StringCopy(&Var2, "TORSO_P1_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 19;
		break;

	case 10:
		StringCopy(&Var2, "TORSO_P1_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 19;
		break;

	case 11:
		StringCopy(&Var2, "TORSO_P1_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 18;
		break;

	case 12:
		StringCopy(&Var2, "TORSO_P1_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		iVar1 = 20;
		break;

	case 13:
		StringCopy(&Var2, "TORSO_P1_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		iVar1 = 22;
		break;

	case 14:
		StringCopy(&Var2, "TORSO_P1_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		iVar1 = 19;
		break;

	case 15:
		StringCopy(&Var2, "TORSO_P1_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		iVar1 = 22;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 22:
		StringCopy(&Var2, "TORSO_P1_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 3;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 1;
		break;

	case 24:
		StringCopy(&Var2, "TORSO_P1_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 20;
		iVar9 = 2;
		break;

	case 25:
		StringCopy(&Var2, "TORSO_P1_4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 22;
		iVar9 = 2;
		break;

	case 26:
		StringCopy(&Var2, "TORSO_P1_4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 20;
		iVar9 = 2;
		break;

	case 27:
		StringCopy(&Var2, "TORSO_P1_4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 25;
		iVar9 = 2;
		break;

	case 28:
		StringCopy(&Var2, "TORSO_P1_4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 23;
		iVar9 = 2;
		break;

	case 29:
		StringCopy(&Var2, "TORSO_P1_4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 25;
		iVar9 = 2;
		break;

	case 30:
		StringCopy(&Var2, "TORSO_P1_4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 28;
		iVar9 = 2;
		break;

	case 31:
		StringCopy(&Var2, "TORSO_P1_4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 26;
		iVar9 = 2;
		break;

	case 32:
		StringCopy(&Var2, "TORSO_P1_4_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 24;
		iVar9 = 2;
		break;

	case 33:
		StringCopy(&Var2, "TORSO_P1_4_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 27;
		iVar9 = 2;
		break;

	case 34:
		StringCopy(&Var2, "TORSO_P1_4_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 29;
		iVar9 = 2;
		break;

	case 35:
		StringCopy(&Var2, "TORSO_P1_4_11", 16);
		iVar6 = 4;
		iVar7 = 11;
		iVar1 = 28;
		iVar9 = 2;
		break;

	case 36:
		StringCopy(&Var2, "TORSO_P1_4_12", 16);
		iVar6 = 4;
		iVar7 = 12;
		iVar1 = 25;
		iVar9 = 2;
		break;

	case 37:
		StringCopy(&Var2, "TORSO_P1_4_13", 16);
		iVar6 = 4;
		iVar7 = 13;
		iVar1 = 22;
		iVar9 = 2;
		break;

	case 38:
		StringCopy(&Var2, "TORSO_P1_4_14", 16);
		iVar6 = 4;
		iVar7 = 14;
		iVar1 = 27;
		iVar9 = 2;
		break;

	case 39:
		StringCopy(&Var2, "TORSO_P1_4_15", 16);
		iVar6 = 4;
		iVar7 = 15;
		iVar1 = 29;
		iVar9 = 2;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		iVar9 = 4;
		break;

	case 41:
		StringCopy(&Var2, "TORSO_P1_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 42:
		StringCopy(&Var2, "TORSO_P1_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 1270;
		iVar9 = 3;
		break;

	case 43:
		StringCopy(&Var2, "TORSO_P1_6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 1270;
		iVar9 = 3;
		break;

	case 44:
		StringCopy(&Var2, "TORSO_P1_6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 1270;
		iVar9 = 3;
		break;

	case 45:
		StringCopy(&Var2, "TORSO_P1_6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 1090;
		iVar9 = 3;
		break;

	case 46:
		StringCopy(&Var2, "TORSO_P1_6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 1090;
		iVar9 = 3;
		break;

	case 47:
		StringCopy(&Var2, "TORSO_P1_6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 1120;
		iVar9 = 3;
		break;

	case 48:
		StringCopy(&Var2, "TORSO_P1_6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 1120;
		iVar9 = 3;
		break;

	case 49:
		StringCopy(&Var2, "TORSO_P1_6_8", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 1290;
		iVar9 = 3;
		break;

	case 50:
		StringCopy(&Var2, "TORSO_P1_6_9", 16);
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 1290;
		iVar9 = 3;
		break;

	case 51:
		StringCopy(&Var2, "TORSO_P1_6_10", 16);
		iVar6 = 6;
		iVar7 = 10;
		iVar1 = 1320;
		iVar9 = 3;
		break;

	case 52:
		StringCopy(&Var2, "TORSO_P1_6_11", 16);
		iVar6 = 6;
		iVar7 = 11;
		iVar1 = 1320;
		iVar9 = 3;
		break;

	case 53:
		StringCopy(&Var2, "TORSO_P1_6_12", 16);
		iVar6 = 6;
		iVar7 = 12;
		iVar1 = 1590;
		iVar9 = 3;
		break;

	case 54:
		StringCopy(&Var2, "TORSO_P1_6_13", 16);
		iVar6 = 6;
		iVar7 = 13;
		iVar1 = 1590;
		iVar9 = 3;
		break;

	case 55:
		StringCopy(&Var2, "TORSO_P1_6_14", 16);
		iVar6 = 6;
		iVar7 = 14;
		iVar1 = 1590;
		iVar9 = 3;
		break;

	case 56:
		StringCopy(&Var2, "TORSO_P1_6_15", 16);
		iVar6 = 6;
		iVar7 = 15;
		iVar1 = 1320;
		iVar9 = 3;
		break;

	case 57:
		StringCopy(&Var2, "TORSO_P1_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 98;
		break;

	case 58:
		StringCopy(&Var2, "TORSO_P1_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 98;
		break;

	case 59:
		StringCopy(&Var2, "TORSO_P1_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 110;
		break;

	case 60:
		StringCopy(&Var2, "TORSO_P1_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 61:
		StringCopy(&Var2, "TORSO_P1_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 118;
		break;

	case 62:
		StringCopy(&Var2, "TORSO_P1_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 120;
		break;

	case 63:
		StringCopy(&Var2, "TORSO_P1_7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 120;
		break;

	case 64:
		StringCopy(&Var2, "TORSO_P1_7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 129;
		break;

	case 65:
		StringCopy(&Var2, "TORSO_P1_7_8", 16);
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 125;
		break;

	case 66:
		StringCopy(&Var2, "TORSO_P1_7_9", 16);
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 125;
		break;

	case 67:
		StringCopy(&Var2, "TORSO_P1_7_10", 16);
		iVar6 = 7;
		iVar7 = 10;
		iVar1 = 129;
		break;

	case 68:
		StringCopy(&Var2, "TORSO_P1_7_11", 16);
		iVar6 = 7;
		iVar7 = 11;
		iVar1 = 129;
		break;

	case 69:
		StringCopy(&Var2, "TORSO_P1_7_12", 16);
		iVar6 = 7;
		iVar7 = 12;
		iVar1 = 135;
		break;

	case 70:
		StringCopy(&Var2, "TORSO_P1_7_13", 16);
		iVar6 = 7;
		iVar7 = 13;
		iVar1 = 139;
		break;

	case 71:
		StringCopy(&Var2, "TORSO_P1_7_14", 16);
		iVar6 = 7;
		iVar7 = 14;
		iVar1 = 145;
		break;

	case 72:
		StringCopy(&Var2, "TORSO_P1_7_15", 16);
		iVar6 = 7;
		iVar7 = 15;
		iVar1 = 145;
		break;

	case 73:
		StringCopy(&Var2, "TORSO_P1_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 74:
		StringCopy(&Var2, "TORSO_P1_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		break;

	case 75:
		StringCopy(&Var2, "TORSO_P1_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		break;

	case 76:
		StringCopy(&Var2, "TORSO_P1_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		break;

	case 77:
		StringCopy(&Var2, "TORSO_P1_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 30;
		break;

	case 78:
		StringCopy(&Var2, "TORSO_P1_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 38;
		break;

	case 79:
		StringCopy(&Var2, "TORSO_P1_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 32;
		break;

	case 80:
		StringCopy(&Var2, "TORSO_P1_8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 30;
		break;

	case 81:
		StringCopy(&Var2, "TORSO_P1_8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 33;
		break;

	case 82:
		StringCopy(&Var2, "TORSO_P1_8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 35;
		break;

	case 83:
		StringCopy(&Var2, "TORSO_P1_8_10", 16);
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 35;
		break;

	case 84:
		StringCopy(&Var2, "TORSO_P1_8_11", 16);
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 38;
		break;

	case 85:
		StringCopy(&Var2, "TORSO_P1_8_12", 16);
		iVar6 = 8;
		iVar7 = 12;
		iVar1 = 33;
		break;

	case 86:
		StringCopy(&Var2, "TORSO_P1_8_13", 16);
		iVar6 = 8;
		iVar7 = 13;
		iVar1 = 35;
		break;

	case 87:
		StringCopy(&Var2, "TORSO_P1_8_14", 16);
		iVar6 = 8;
		iVar7 = 14;
		iVar1 = 38;
		break;

	case 88:
		StringCopy(&Var2, "TORSO_P1_8_15", 16);
		iVar6 = 8;
		iVar7 = 15;
		iVar1 = 32;
		break;

	case 89:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 90:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 91:
		StringCopy(&Var2, "TORSO_P1_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 92:
		StringCopy(&Var2, "TORSO_P1_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 59;
		break;

	case 93:
		StringCopy(&Var2, "TORSO_P1_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		break;

	case 94:
		StringCopy(&Var2, "TORSO_P1_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 25;
		break;

	case 95:
		StringCopy(&Var2, "TORSO_P1_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 29;
		break;

	case 96:
		StringCopy(&Var2, "TORSO_P1_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 27;
		break;

	case 97:
		StringCopy(&Var2, "TORSO_P1_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 25;
		break;

	case 98:
		StringCopy(&Var2, "TORSO_P1_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 27;
		break;

	case 99:
		StringCopy(&Var2, "TORSO_P1_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 28;
		break;

	case 100:
		StringCopy(&Var2, "TORSO_P1_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 30;
		break;

	case 101:
		StringCopy(&Var2, "TORSO_P1_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 29;
		break;

	case 102:
		StringCopy(&Var2, "TORSO_P1_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 27;
		break;

	case 103:
		StringCopy(&Var2, "TORSO_P1_11_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 29;
		break;

	case 104:
		StringCopy(&Var2, "TORSO_P1_11_13", 16);
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 32;
		break;

	case 105:
		StringCopy(&Var2, "TORSO_P1_11_14", 16);
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 30;
		break;

	case 106:
		StringCopy(&Var2, "TORSO_P1_11_15", 16);
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 28;
		break;

	default: return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x10C18
void func_59(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "HAIR_P1_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "HAIR_P1_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "HAIR_P1_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "HAIR_P1_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar9 = 3;
		break;

	case 4:
		StringCopy(&Var2, "HAIR_P1_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar9 = 3;
		break;

	case 5:
		StringCopy(&Var2, "HAIR_P1_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar9 = 3;
		break;

	case 6:
		StringCopy(&Var2, "HAIR_P1_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar9 = 3;
		break;

	case 7:
		StringCopy(&Var2, "HAIR_P1_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar9 = 3;
		break;

	case 8:
		StringCopy(&Var2, "HAIR_P1_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar9 = 3;
		break;

	case 9:
		StringCopy(&Var2, "HAIR_P1_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar9 = 3;
		break;

	case 10:
		StringCopy(&Var2, "HAIR_P1_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar9 = 3;
		break;

	case 11:
		StringCopy(&Var2, "HAIR_P1_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar9 = 3;
		break;

	case 12:
		StringCopy(&Var2, "HAIR_P1_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		iVar9 = 3;
		break;

	case 13:
		StringCopy(&Var2, "HAIR_P1_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		break;

	case 14:
		StringCopy(&Var2, "HAIR_P1_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		iVar9 = 3;
		break;

	case 15:
		StringCopy(&Var2, "HAIR_P1_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		iVar9 = 3;
		break;

	case 16:
		StringCopy(&Var2, "HAIR_P1_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 17:
		StringCopy(&Var2, "HAIR_P1_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 18:
		StringCopy(&Var2, "HAIR_P1_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar9 = 3;
		break;

	case 19:
		StringCopy(&Var2, "HAIR_P1_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_24(iVar10, iParam0, 21); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x10E8F
void func_60(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 7;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 8;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 9;
		break;

	default: func_24(iVar10, iParam0, 10); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x10FCA
void func_61(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: func_78(iParam1); break;

	case 2: func_77(iParam1); break;

	case 3: func_74(iParam1); break;

	case 4: func_73(iParam1); break;

	case 6: func_72(iParam1); break;

	case 5: func_71(iParam1); break;

	case 8: func_70(iParam1); break;

	case 9: func_69(iParam1); break;

	case 10: func_68(iParam1); break;

	case 1: func_67(iParam1); break;

	case 7: func_66(iParam1); break;

	case 11: func_65(iParam1); break;

	case 12: func_64(iParam1); break;

	case 13: func_63(iParam1); break;

	case 14: func_62(iParam1); break;
	}
}

// Position - 0x110BA
void func_62(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 7;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 8;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 11:
		StringCopy(&Var2, "PROPS_P0_H1", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 12:
		StringCopy(&Var2, "PROPS_P0_H2", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 320;
		iVar8 = 11;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 0;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar8 = 0;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar8 = 0;
		break;

	case 29:
		StringCopy(&Var2, "PROPS_P0_H12", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 31:
		StringCopy(&Var2, "PROPS_P1_H8_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 32:
		StringCopy(&Var2, "PROPS_P1_H8_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 270;
		iVar8 = 0;
		break;

	case 33:
		StringCopy(&Var2, "PROPS_P1_H9_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 34:
		StringCopy(&Var2, "PROPS_P1_H9_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 200;
		iVar8 = 0;
		break;

	case 35:
		StringCopy(&Var2, "PROPS_P1_H10_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 36:
		StringCopy(&Var2, "PROPS_P1_H10_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 350;
		iVar8 = 0;
		break;

	case 37:
		StringCopy(&Var2, "PROPS_P1_H11_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 450;
		iVar8 = 0;
		break;

	case 38:
		StringCopy(&Var2, "PROPS_P1_H12_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 39:
		StringCopy(&Var2, "PROPS_P1_H12_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 500;
		iVar8 = 0;
		break;

	case 40:
		StringCopy(&Var2, "PROPS_P1_H13_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 41:
		StringCopy(&Var2, "PROPS_P1_H13_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 50;
		iVar8 = 0;
		break;

	case 42:
		StringCopy(&Var2, "PROPS_P1_H14_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 43:
		StringCopy(&Var2, "PROPS_P1_H14_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 44:
		StringCopy(&Var2, "PROPS_P1_H14_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 99;
		iVar8 = 0;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 47:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 48:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar8 = 0;
		break;

	case 49:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar8 = 0;
		break;

	case 50:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar8 = 0;
		break;

	case 51:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar8 = 0;
		break;

	case 52:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar8 = 0;
		break;

	case 53:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 54:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 55:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 56:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 57:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 28;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 58:
		StringCopy(&Var2, "PROPS_P0_E0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 45;
		iVar8 = 10;
		break;

	case 59:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 10;
		break;

	case 60:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 10;
		break;

	case 61:
		StringCopy(&Var2, "PROPS_P0_E3", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 55;
		iVar8 = 10;
		break;

	case 62:
		StringCopy(&Var2, "PROPS_P0_E4", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 58;
		iVar8 = 10;
		break;

	case 63:
		StringCopy(&Var2, "PROPS_P0_E4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 56;
		iVar8 = 10;
		break;

	case 64:
		StringCopy(&Var2, "PROPS_P0_E4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 60;
		iVar8 = 10;
		break;

	case 65:
		StringCopy(&Var2, "PROPS_P0_E4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 66:
		StringCopy(&Var2, "PROPS_P0_E4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 62;
		iVar8 = 10;
		break;

	case 67:
		StringCopy(&Var2, "PROPS_P0_E4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 68:
		StringCopy(&Var2, "PROPS_P0_E4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 69:
		StringCopy(&Var2, "PROPS_P0_E4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 68;
		iVar8 = 10;
		break;

	case 70:
		StringCopy(&Var2, "PROPS_P0_E5", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 65;
		iVar8 = 10;
		break;

	case 71:
		StringCopy(&Var2, "PROPS_P0_E5_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 72:
		StringCopy(&Var2, "PROPS_P0_E5_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 72;
		iVar8 = 10;
		break;

	case 73:
		StringCopy(&Var2, "PROPS_P0_E5_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 70;
		iVar8 = 10;
		break;

	case 74:
		StringCopy(&Var2, "PROPS_P0_E5_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 74;
		iVar8 = 10;
		break;

	case 75:
		StringCopy(&Var2, "PROPS_P0_E5_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 78;
		iVar8 = 10;
		break;

	case 76:
		StringCopy(&Var2, "PROPS_P0_E5_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 82;
		iVar8 = 10;
		break;

	case 77:
		StringCopy(&Var2, "PROPS_P0_E5_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 85;
		iVar8 = 10;
		break;

	case 78:
		StringCopy(&Var2, "PROPS_P0_E5_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 85;
		iVar8 = 10;
		break;

	case 79:
		StringCopy(&Var2, "PROPS_P0_E5_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar8 = 10;
		break;

	case 80:
		StringCopy(&Var2, "PROPS_P0_E6", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 81:
		StringCopy(&Var2, "PROPS_P0_E6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 82:
		StringCopy(&Var2, "PROPS_P0_E6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 83:
		StringCopy(&Var2, "PROPS_P0_E6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 84:
		StringCopy(&Var2, "PROPS_P0_E6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 85:
		StringCopy(&Var2, "PROPS_P0_E6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 86:
		StringCopy(&Var2, "PROPS_P0_E6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 87:
		StringCopy(&Var2, "PROPS_P0_E6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 88:
		StringCopy(&Var2, "PROPS_P0_E6_8", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 89:
		StringCopy(&Var2, "PROPS_P0_E6_9", 16);
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 69;
		iVar8 = 10;
		break;

	case 90:
		StringCopy(&Var2, "PROPS_P0_E7", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar8 = 10;
		break;

	case 91:
		StringCopy(&Var2, "PROPS_P0_E8", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 170;
		iVar8 = 10;
		break;

	case 92:
		StringCopy(&Var2, "PROPS_P0_E8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 93:
		StringCopy(&Var2, "PROPS_P0_E8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 180;
		iVar8 = 10;
		break;

	case 94:
		StringCopy(&Var2, "PROPS_P0_E8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 95:
		StringCopy(&Var2, "PROPS_P0_E8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 189;
		iVar8 = 10;
		break;

	case 96:
		StringCopy(&Var2, "PROPS_P0_E8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 195;
		iVar8 = 10;
		break;

	case 97:
		StringCopy(&Var2, "PROPS_P0_E8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 235;
		iVar8 = 10;
		break;

	case 98:
		StringCopy(&Var2, "PROPS_P0_E8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 245;
		iVar8 = 10;
		break;

	case 99:
		StringCopy(&Var2, "PROPS_P0_E8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 250;
		iVar8 = 10;
		break;

	case 100:
		StringCopy(&Var2, "PROPS_P0_E8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 275;
		iVar8 = 10;
		break;

	case 101:
		StringCopy(&Var2, "PROPS_P0_E8_10", 16);
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 280;
		iVar8 = 10;
		break;

	case 102:
		StringCopy(&Var2, "PROPS_P0_E8_11", 16);
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 295;
		iVar8 = 10;
		break;

	case 103:
		StringCopy(&Var2, "PROPS_P0_E9", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 179;
		iVar8 = 10;
		break;

	case 104:
		StringCopy(&Var2, "PROPS_P0_E9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 159;
		iVar8 = 10;
		break;

	case 105:
		StringCopy(&Var2, "PROPS_P0_E9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 165;
		iVar8 = 10;
		break;

	case 106:
		StringCopy(&Var2, "PROPS_P0_E9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 155;
		iVar8 = 10;
		break;

	case 107:
		StringCopy(&Var2, "PROPS_P0_E9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 175;
		iVar8 = 10;
		break;

	case 108:
		StringCopy(&Var2, "PROPS_P0_E9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 185;
		iVar8 = 10;
		break;

	case 109:
		StringCopy(&Var2, "PROPS_P0_E9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 189;
		iVar8 = 10;
		break;

	case 110:
		StringCopy(&Var2, "PROPS_P0_E9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 225;
		iVar8 = 10;
		break;

	case 111:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 100;
		iVar8 = 10;
		break;

	case 112:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		iVar8 = 2;
		break;

	default: func_24(iVar10, iParam0, 113); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x11E17
void func_63(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_24(iVar10, iParam0, 10); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x11F85
void func_64(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "OUTFIT_P0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		StringCopy(&Var2, "OUTFIT_P0_1", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "OUTFIT_P0_4", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "OUTFIT_P0_7", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "OUTFIT_P0_8", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "OUTFIT_P0_9", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "OUTFIT_P0_11", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 9:
		StringCopy(&Var2, "OUTFIT_P0_12", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 11:
		StringCopy(&Var2, "OUTFIT_P0_14", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 12:
		StringCopy(&Var2, "OUTFIT_P0_17", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 13:
		StringCopy(&Var2, "OUTFIT_P0_18", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 14:
		StringCopy(&Var2, "OUTFIT_P0_19", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 15:
		StringCopy(&Var2, "OUTFIT_P0_20", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 16:
		StringCopy(&Var2, "OUTFIT_P0_22", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 17:
		StringCopy(&Var2, "OUTFIT_P0_23", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 18:
		StringCopy(&Var2, "OUTFIT_P0_24", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "OUTFIT_P0_26", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 20:
		StringCopy(&Var2, "OUTFIT_P0_28", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 21:
		StringCopy(&Var2, "OUTFIT_P0_29", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 22:
		StringCopy(&Var2, "OUTFIT_P0_30", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 105;
		break;

	case 23:
		StringCopy(&Var2, "OUTFIT_P0_31", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 24:
		StringCopy(&Var2, "OUTFIT_P0_32", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 25:
		StringCopy(&Var2, "OUTFIT_P0_33", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 26:
		StringCopy(&Var2, "OUTFIT_P0_34", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 27:
		StringCopy(&Var2, "OUTFIT_P0_35", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 28:
		StringCopy(&Var2, "OUTFIT_P0_11", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 29:
		StringCopy(&Var2, "OUTFIT_P0_36", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 30:
		StringCopy(&Var2, "OUTFIT_P0_37", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 840;
		break;

	case 31:
		StringCopy(&Var2, "OUTFIT_P0_38", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 32:
		StringCopy(&Var2, "OUTFIT_P0_39", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 33:
		StringCopy(&Var2, "OUTFIT_P0_40", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 34:
		StringCopy(&Var2, "OUTFIT_P0_41", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 35:
		StringCopy(&Var2, "OUTFIT_P0_42", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 36:
		StringCopy(&Var2, "OUTFIT_P0_43", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 37:
		StringCopy(&Var2, "OUTFIT_P0_44", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 3900;
		break;

	case 38:
		StringCopy(&Var2, "OUTFIT_P0_45", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4000;
		break;

	case 39:
		StringCopy(&Var2, "OUTFIT_P0_46", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 40:
		StringCopy(&Var2, "OUTFIT_P0_47", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4600;
		break;

	case 41:
		StringCopy(&Var2, "OUTFIT_P0_48", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5500;
		break;

	case 42:
		StringCopy(&Var2, "OUTFIT_P0_49", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4400;
		break;

	case 43:
		StringCopy(&Var2, "OUTFIT_P0_50", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4400;
		break;

	case 44:
		StringCopy(&Var2, "OUTFIT_P0_51", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4900;
		break;

	case 45:
		StringCopy(&Var2, "OUTFIT_P0_52", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5500;
		break;

	case 46:
		StringCopy(&Var2, "OUTFIT_P0_53", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 4500;
		break;

	case 47:
		StringCopy(&Var2, "OUTFIT_P0_54", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5900;
		break;

	case 48:
		StringCopy(&Var2, "OUTFIT_P0_55", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 49:
		StringCopy(&Var2, "OUTFIT_P0_17", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 50:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 51:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 52:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_24(iVar10, iParam0, 53); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x124F5
void func_65(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "JBIB_P0_02_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "JBIB_P0_02_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		break;

	case 4:
		StringCopy(&Var2, "JBIB_P0_02_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		break;

	case 5:
		StringCopy(&Var2, "JBIB_P0_02_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		break;

	case 6:
		StringCopy(&Var2, "JBIB_P0_02_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		break;

	case 7:
		StringCopy(&Var2, "JBIB_P0_02_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		break;

	case 8:
		StringCopy(&Var2, "JBIB_P0_03_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 390;
		break;

	case 9:
		StringCopy(&Var2, "JBIB_P0_03_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 390;
		break;

	case 10:
		StringCopy(&Var2, "JBIB_P0_03_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 420;
		break;

	case 11:
		StringCopy(&Var2, "JBIB_P0_03_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 420;
		break;

	case 12:
		StringCopy(&Var2, "JBIB_P0_03_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 490;
		break;

	case 13:
		StringCopy(&Var2, "JBIB_P0_03_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 490;
		break;

	case 14:
		StringCopy(&Var2, "JBIB_P0_03_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 540;
		break;

	case 15:
		StringCopy(&Var2, "JBIB_P0_03_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 540;
		break;

	case 16:
		StringCopy(&Var2, "JBIB_P0_03_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 550;
		break;

	case 17:
		StringCopy(&Var2, "JBIB_P0_03_9", 16);
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 540;
		break;

	case 18:
		StringCopy(&Var2, "JBIB_P0_04_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 850;
		break;

	case 19:
		StringCopy(&Var2, "JBIB_P0_04_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 850;
		break;

	case 20:
		StringCopy(&Var2, "JBIB_P0_04_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 890;
		break;

	case 21:
		StringCopy(&Var2, "JBIB_P0_04_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 890;
		break;

	case 22:
		StringCopy(&Var2, "JBIB_P0_04_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 920;
		break;

	case 23:
		StringCopy(&Var2, "JBIB_P0_04_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 920;
		break;

	case 24:
		StringCopy(&Var2, "JBIB_P0_04_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 950;
		break;

	case 25:
		StringCopy(&Var2, "JBIB_P0_04_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 980;
		break;

	case 26:
		StringCopy(&Var2, "JBIB_P0_04_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 1050;
		break;

	case 27:
		StringCopy(&Var2, "JBIB_P0_04_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 1100;
		break;

	case 28:
		StringCopy(&Var2, "JBIB_P0_05_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 1890;
		break;

	case 29:
		StringCopy(&Var2, "JBIB_P0_05_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 1820;
		break;

	case 30:
		StringCopy(&Var2, "JBIB_P0_05_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 1820;
		break;

	case 31:
		StringCopy(&Var2, "JBIB_P0_05_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 1850;
		break;

	case 32:
		StringCopy(&Var2, "JBIB_P0_05_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 1850;
		break;

	case 33:
		StringCopy(&Var2, "JBIB_P0_05_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 1900;
		break;

	case 34:
		StringCopy(&Var2, "JBIB_P0_05_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 1920;
		break;

	case 35:
		StringCopy(&Var2, "JBIB_P0_05_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 1980;
		break;

	case 36:
		StringCopy(&Var2, "JBIB_P0_05_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 2100;
		break;

	case 37:
		StringCopy(&Var2, "JBIB_P0_05_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 2120;
		break;

	case 38:
		StringCopy(&Var2, "JBIB_P0_05_10", 16);
		iVar6 = 5;
		iVar7 = 10;
		iVar1 = 2000;
		break;

	case 39:
		StringCopy(&Var2, "JBIB_P0_05_11", 16);
		iVar6 = 5;
		iVar7 = 11;
		iVar1 = 2200;
		break;

	case 40:
		StringCopy(&Var2, "JBIB_P0_05_12", 16);
		iVar6 = 5;
		iVar7 = 12;
		iVar1 = 2280;
		break;

	case 41:
		StringCopy(&Var2, "JBIB_P0_05_13", 16);
		iVar6 = 5;
		iVar7 = 13;
		iVar1 = 2300;
		break;

	case 42:
		StringCopy(&Var2, "JBIB_P0_05_14", 16);
		iVar6 = 5;
		iVar7 = 14;
		iVar1 = 2350;
		break;

	case 43:
		StringCopy(&Var2, "JBIB_P0_05_15", 16);
		iVar6 = 5;
		iVar7 = 15;
		iVar1 = 2280;
		break;

	case 44:
		StringCopy(&Var2, "JBIB_P0_06_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	default: func_24(iVar10, iParam0, 45); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x12A1C
void func_66(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	default: func_24(iVar10, iParam0, 1); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x12A8E
void func_67(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "BERD_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "BERD_P0_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "BERD_P0_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "BERD_P0_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "BERD_P0_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	default: func_24(iVar10, iParam0, 5); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x12B5D
void func_68(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 2;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 3;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 4;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 5;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 6;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 7;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 2;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 3;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 4;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 5;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 1;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 2;
		break;

	case 24:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 3;
		break;

	case 25:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 4;
		break;

	case 26:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 5;
		break;

	case 27:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 6;
		break;

	case 28:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 29:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 1;
		break;

	case 30:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 2;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 3;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 4;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 5;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 6;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 7;
		break;

	case 36:
		StringCopy(&Var2, "DECL_P0_10_8", 16);
		iVar6 = 10;
		iVar7 = 8;
		break;

	case 37:
		StringCopy(&Var2, "DECL_P0_10_9", 16);
		iVar6 = 10;
		iVar7 = 9;
		break;

	case 38:
		StringCopy(&Var2, "DECL_P0_10_10", 16);
		iVar6 = 10;
		iVar7 = 10;
		break;

	case 39:
		StringCopy(&Var2, "DECL_P0_10_11", 16);
		iVar6 = 10;
		iVar7 = 11;
		break;

	case 40:
		StringCopy(&Var2, "DECL_P0_10_12", 16);
		iVar6 = 10;
		iVar7 = 12;
		break;

	case 41:
		StringCopy(&Var2, "DECL_P0_10_13", 16);
		iVar6 = 10;
		iVar7 = 13;
		break;

	case 42:
		StringCopy(&Var2, "DECL_P0_10_14", 16);
		iVar6 = 10;
		iVar7 = 14;
		break;

	case 43:
		StringCopy(&Var2, "DECL_P0_10_15", 16);
		iVar6 = 10;
		iVar7 = 15;
		break;

	case 44:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 1;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 2;
		break;

	case 47:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 3;
		break;

	default: func_24(iVar10, iParam0, 48); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1300C
void func_69(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "SPEC2_P0_08_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 125;
		break;

	case 10:
		StringCopy(&Var2, "SPEC2_P0_08_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 150;
		break;

	case 11:
		StringCopy(&Var2, "SPEC2_P0_08_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 175;
		break;

	case 12:
		StringCopy(&Var2, "SPEC2_P0_08_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 85;
		break;

	case 13:
		StringCopy(&Var2, "SPEC2_P0_08_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 14:
		StringCopy(&Var2, "SPEC2_P0_08_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 175;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_24(iVar10, iParam0, 20); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x13266
void func_70(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "SPEC_P0_10", 16);
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "SPEC_P0_16", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 23:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_24(iVar10, iParam0, 24); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x13525
void func_71(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	default: func_24(iVar10, iParam0, 14); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x136DF
void func_72(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "FEET_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "FEET_P0_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 665;
		break;

	case 2:
		StringCopy(&Var2, "FEET_P0_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 620;
		break;

	case 3:
		StringCopy(&Var2, "FEET_P0_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 540;
		break;

	case 4:
		StringCopy(&Var2, "FEET_P0_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 580;
		break;

	case 5:
		StringCopy(&Var2, "FEET_P0_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 650;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 7:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 8:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 9:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 12:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "FEET_P0_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 20:
		StringCopy(&Var2, "FEET_P0_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 21:
		StringCopy(&Var2, "FEET_P0_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 64;
		break;

	case 22:
		StringCopy(&Var2, "FEET_P0_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 56;
		break;

	case 23:
		StringCopy(&Var2, "FEET_P0_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 69;
		break;

	case 24:
		StringCopy(&Var2, "FEET_P0_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 59;
		break;

	case 25:
		StringCopy(&Var2, "FEET_P0_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 62;
		break;

	case 26:
		StringCopy(&Var2, "FEET_P0_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 74;
		break;

	case 27:
		StringCopy(&Var2, "FEET_P0_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 68;
		break;

	case 28:
		StringCopy(&Var2, "FEET_P0_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		iVar1 = 72;
		break;

	case 29:
		StringCopy(&Var2, "FEET_P0_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		iVar1 = 70;
		break;

	case 30:
		StringCopy(&Var2, "FEET_P0_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 48;
		break;

	case 31:
		StringCopy(&Var2, "FEET_P0_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 48;
		break;

	case 32:
		StringCopy(&Var2, "FEET_P0_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 55;
		break;

	case 33:
		StringCopy(&Var2, "FEET_P0_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 75;
		break;

	case 34:
		StringCopy(&Var2, "FEET_P0_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 65;
		break;

	case 35:
		StringCopy(&Var2, "FEET_P0_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 68;
		break;

	case 36:
		StringCopy(&Var2, "FEET_P0_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 58;
		break;

	case 37:
		StringCopy(&Var2, "FEET_P0_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 68;
		break;

	case 38:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 39:
		StringCopy(&Var2, "FEET_P0_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 790;
		break;

	case 40:
		StringCopy(&Var2, "FEET_P0_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 750;
		break;

	case 41:
		StringCopy(&Var2, "FEET_P0_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 860;
		break;

	case 42:
		StringCopy(&Var2, "FEET_P0_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 750;
		break;

	case 43:
		StringCopy(&Var2, "FEET_P0_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 790;
		break;

	case 44:
		StringCopy(&Var2, "FEET_P0_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 45:
		StringCopy(&Var2, "FEET_P0_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 820;
		break;

	case 46:
		StringCopy(&Var2, "FEET_P0_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 800;
		break;

	case 47:
		StringCopy(&Var2, "FEET_P0_18_8", 16);
		iVar6 = 18;
		iVar7 = 8;
		iVar1 = 850;
		break;

	case 48:
		StringCopy(&Var2, "FEET_P0_18_9", 16);
		iVar6 = 18;
		iVar7 = 9;
		iVar1 = 870;
		break;

	case 49:
		StringCopy(&Var2, "FEET_P0_18_10", 16);
		iVar6 = 18;
		iVar7 = 10;
		iVar1 = 720;
		break;

	case 50:
		StringCopy(&Var2, "FEET_P0_18_11", 16);
		iVar6 = 18;
		iVar7 = 11;
		iVar1 = 740;
		break;

	case 51:
		StringCopy(&Var2, "FEET_P0_18_12", 16);
		iVar6 = 18;
		iVar7 = 12;
		iVar1 = 800;
		break;

	case 52:
		StringCopy(&Var2, "FEET_P0_18_13", 16);
		iVar6 = 18;
		iVar7 = 13;
		iVar1 = 750;
		break;

	case 53:
		StringCopy(&Var2, "FEET_P0_18_14", 16);
		iVar6 = 18;
		iVar7 = 14;
		iVar1 = 770;
		break;

	case 54:
		StringCopy(&Var2, "FEET_P0_18_15", 16);
		iVar6 = 18;
		iVar7 = 15;
		iVar1 = 860;
		break;

	case 55:
		StringCopy(&Var2, "FEET_P0_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar1 = 850;
		break;

	case 56:
		StringCopy(&Var2, "FEET_P0_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 800;
		break;

	case 57:
		StringCopy(&Var2, "FEET_P0_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 780;
		break;

	case 58:
		StringCopy(&Var2, "FEET_P0_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 890;
		break;

	case 59:
		StringCopy(&Var2, "FEET_P0_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 820;
		break;

	case 60:
		StringCopy(&Var2, "FEET_P0_19_5", 16);
		iVar6 = 19;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 61:
		StringCopy(&Var2, "FEET_P0_19_6", 16);
		iVar6 = 19;
		iVar7 = 6;
		iVar1 = 870;
		break;

	case 62:
		StringCopy(&Var2, "FEET_P0_19_7", 16);
		iVar6 = 19;
		iVar7 = 7;
		iVar1 = 930;
		break;

	case 63:
		StringCopy(&Var2, "FEET_P0_19_8", 16);
		iVar6 = 19;
		iVar7 = 8;
		iVar1 = 880;
		break;

	case 64:
		StringCopy(&Var2, "FEET_P0_19_9", 16);
		iVar6 = 19;
		iVar7 = 9;
		iVar1 = 900;
		break;

	case 65:
		StringCopy(&Var2, "FEET_P0_19_10", 16);
		iVar6 = 19;
		iVar7 = 10;
		iVar1 = 920;
		break;

	case 66:
		StringCopy(&Var2, "FEET_P0_19_11", 16);
		iVar6 = 19;
		iVar7 = 11;
		iVar1 = 970;
		break;

	case 67:
		StringCopy(&Var2, "FEET_P0_19_12", 16);
		iVar6 = 19;
		iVar7 = 12;
		iVar1 = 990;
		break;

	case 68:
		StringCopy(&Var2, "FEET_P0_19_13", 16);
		iVar6 = 19;
		iVar7 = 13;
		iVar1 = 960;
		break;

	case 69:
		StringCopy(&Var2, "FEET_P0_19_14", 16);
		iVar6 = 19;
		iVar7 = 14;
		iVar1 = 980;
		break;

	case 70:
		StringCopy(&Var2, "FEET_P0_19_15", 16);
		iVar6 = 19;
		iVar7 = 15;
		iVar1 = 950;
		break;

	case 71:
		StringCopy(&Var2, "FEET_P0_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		iVar1 = 110;
		break;

	case 72:
		StringCopy(&Var2, "FEET_P0_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 73:
		StringCopy(&Var2, "FEET_P0_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 120;
		break;

	case 74:
		StringCopy(&Var2, "FEET_P0_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 75:
		StringCopy(&Var2, "FEET_P0_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 125;
		break;

	case 76:
		StringCopy(&Var2, "FEET_P0_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 128;
		break;

	case 77:
		StringCopy(&Var2, "FEET_P0_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 135;
		break;

	case 78:
		StringCopy(&Var2, "FEET_P0_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 130;
		break;

	case 79:
		StringCopy(&Var2, "FEET_P0_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 145;
		break;

	case 80:
		StringCopy(&Var2, "FEET_P0_20_9", 16);
		iVar6 = 20;
		iVar7 = 9;
		iVar1 = 110;
		break;

	case 81:
		StringCopy(&Var2, "FEET_P0_20_10", 16);
		iVar6 = 20;
		iVar7 = 10;
		iVar1 = 120;
		break;

	case 82:
		StringCopy(&Var2, "FEET_P0_20_11", 16);
		iVar6 = 20;
		iVar7 = 11;
		iVar1 = 150;
		break;

	case 83:
		StringCopy(&Var2, "FEET_P0_20_12", 16);
		iVar6 = 20;
		iVar7 = 12;
		iVar1 = 125;
		break;

	case 84:
		StringCopy(&Var2, "FEET_P0_20_13", 16);
		iVar6 = 20;
		iVar7 = 13;
		iVar1 = 120;
		break;

	case 85:
		StringCopy(&Var2, "FEET_P0_20_14", 16);
		iVar6 = 20;
		iVar7 = 14;
		iVar1 = 130;
		break;

	case 86:
		StringCopy(&Var2, "FEET_P0_20_15", 16);
		iVar6 = 20;
		iVar7 = 15;
		iVar1 = 110;
		break;

	case 87:
		StringCopy(&Var2, "FEET_P0_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 720;
		break;

	case 88:
		StringCopy(&Var2, "FEET_P0_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 680;
		break;

	case 89:
		StringCopy(&Var2, "FEET_P0_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 90:
		StringCopy(&Var2, "FEET_P0_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 670;
		break;

	case 91:
		StringCopy(&Var2, "FEET_P0_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 700;
		break;

	case 92:
		StringCopy(&Var2, "FEET_P0_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 680;
		break;

	case 93:
		StringCopy(&Var2, "FEET_P0_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 720;
		break;

	case 94:
		StringCopy(&Var2, "FEET_P0_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 740;
		break;

	case 95:
		StringCopy(&Var2, "FEET_P0_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 760;
		break;

	case 96:
		StringCopy(&Var2, "FEET_P0_21_9", 16);
		iVar6 = 21;
		iVar7 = 9;
		iVar1 = 780;
		break;

	case 97:
		StringCopy(&Var2, "FEET_P0_21_10", 16);
		iVar6 = 21;
		iVar7 = 10;
		iVar1 = 750;
		break;

	case 98:
		StringCopy(&Var2, "FEET_P0_21_11", 16);
		iVar6 = 21;
		iVar7 = 11;
		iVar1 = 700;
		break;

	default: func_24(iVar10, iParam0, 99); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x14225
void func_73(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "LEGS_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "LEGS_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "LEGS_P0_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "LEGS_P0_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "LEGS_P0_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "LEGS_P0_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "LEGS_P0_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	case 7:
		StringCopy(&Var2, "LEGS_P0_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		break;

	case 8:
		StringCopy(&Var2, "LEGS_P0_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		break;

	case 9:
		StringCopy(&Var2, "LEGS_P0_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		break;

	case 10:
		StringCopy(&Var2, "LEGS_P0_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		break;

	case 11:
		StringCopy(&Var2, "LEGS_P0_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		break;

	case 12:
		StringCopy(&Var2, "LEGS_P0_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		break;

	case 13:
		StringCopy(&Var2, "LEGS_P0_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		break;

	case 14:
		StringCopy(&Var2, "LEGS_P0_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		break;

	case 15:
		StringCopy(&Var2, "LEGS_P0_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 21:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 22:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 23:
		StringCopy(&Var2, "LEGS_P0_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 115;
		break;

	case 24:
		StringCopy(&Var2, "LEGS_P0_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 25:
		StringCopy(&Var2, "LEGS_P0_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 128;
		break;

	case 26:
		StringCopy(&Var2, "LEGS_P0_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 118;
		break;

	case 27:
		StringCopy(&Var2, "LEGS_P0_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 125;
		break;

	case 28:
		StringCopy(&Var2, "LEGS_P0_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 128;
		break;

	case 29:
		StringCopy(&Var2, "LEGS_P0_7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 128;
		break;

	case 30:
		StringCopy(&Var2, "LEGS_P0_7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 125;
		break;

	case 31:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 36:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 37:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 38:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 39:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 40:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 41:
		StringCopy(&Var2, "LEGS_P0_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 68;
		break;

	case 42:
		StringCopy(&Var2, "LEGS_P0_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 68;
		break;

	case 43:
		StringCopy(&Var2, "LEGS_P0_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 68;
		break;

	case 44:
		StringCopy(&Var2, "LEGS_P0_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 68;
		break;

	case 45:
		StringCopy(&Var2, "LEGS_P0_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 68;
		break;

	case 46:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 47:
		StringCopy(&Var2, "LEGS_P0_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		break;

	case 48:
		StringCopy(&Var2, "LEGS_P0_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 550;
		break;

	case 49:
		StringCopy(&Var2, "LEGS_P0_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 650;
		break;

	case 50:
		StringCopy(&Var2, "LEGS_P0_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 875;
		break;

	case 51:
		StringCopy(&Var2, "LEGS_P0_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 820;
		break;

	case 52:
		StringCopy(&Var2, "LEGS_P0_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 720;
		break;

	case 53:
		StringCopy(&Var2, "LEGS_P0_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 750;
		break;

	case 54:
		StringCopy(&Var2, "LEGS_P0_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 850;
		break;

	case 55:
		StringCopy(&Var2, "LEGS_P0_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 56:
		StringCopy(&Var2, "LEGS_P0_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 48;
		break;

	case 57:
		StringCopy(&Var2, "LEGS_P0_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 48;
		break;

	case 58:
		StringCopy(&Var2, "LEGS_P0_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 38;
		break;

	case 59:
		StringCopy(&Var2, "LEGS_P0_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 38;
		break;

	case 60:
		StringCopy(&Var2, "LEGS_P0_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 42;
		break;

	case 61:
		StringCopy(&Var2, "LEGS_P0_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 58;
		break;

	case 62:
		StringCopy(&Var2, "LEGS_P0_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 46;
		break;

	case 63:
		StringCopy(&Var2, "LEGS_P0_16_8", 16);
		iVar6 = 16;
		iVar7 = 8;
		iVar1 = 46;
		break;

	case 64:
		StringCopy(&Var2, "LEGS_P0_16_9", 16);
		iVar6 = 16;
		iVar7 = 9;
		iVar1 = 46;
		break;

	case 65:
		StringCopy(&Var2, "LEGS_P0_16_10", 16);
		iVar6 = 16;
		iVar7 = 10;
		iVar1 = 68;
		break;

	case 66:
		StringCopy(&Var2, "LEGS_P0_16_11", 16);
		iVar6 = 16;
		iVar7 = 11;
		iVar1 = 58;
		break;

	case 67:
		StringCopy(&Var2, "LEGS_P0_16_12", 16);
		iVar6 = 16;
		iVar7 = 12;
		iVar1 = 50;
		break;

	case 68:
		StringCopy(&Var2, "LEGS_P0_16_13", 16);
		iVar6 = 16;
		iVar7 = 13;
		iVar1 = 68;
		break;

	case 69:
		StringCopy(&Var2, "LEGS_P0_16_14", 16);
		iVar6 = 16;
		iVar7 = 14;
		iVar1 = 68;
		break;

	case 70:
		StringCopy(&Var2, "LEGS_P0_16_15", 16);
		iVar6 = 16;
		iVar7 = 15;
		iVar1 = 42;
		break;

	case 71:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 72:
		StringCopy(&Var2, "LEGS_P0_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		break;

	case 73:
		StringCopy(&Var2, "LEGS_P0_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 250;
		break;

	case 74:
		StringCopy(&Var2, "LEGS_P0_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 250;
		break;

	case 75:
		StringCopy(&Var2, "LEGS_P0_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 290;
		break;

	case 76:
		StringCopy(&Var2, "LEGS_P0_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 270;
		break;

	case 77:
		StringCopy(&Var2, "LEGS_P0_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 270;
		break;

	case 78:
		StringCopy(&Var2, "LEGS_P0_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 15;
		break;

	case 79:
		StringCopy(&Var2, "LEGS_P0_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 12;
		break;

	case 80:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 19;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 81:
		StringCopy(&Var2, "LEGS_P0_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		break;

	case 82:
		StringCopy(&Var2, "LEGS_P0_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 118;
		break;

	case 83:
		StringCopy(&Var2, "LEGS_P0_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 110;
		break;

	case 84:
		StringCopy(&Var2, "LEGS_P0_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 88;
		break;

	case 85:
		StringCopy(&Var2, "LEGS_P0_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 95;
		break;

	case 86:
		StringCopy(&Var2, "LEGS_P0_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 95;
		break;

	case 87:
		StringCopy(&Var2, "LEGS_P0_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 98;
		break;

	case 88:
		StringCopy(&Var2, "LEGS_P0_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		iVar1 = 140;
		break;

	case 89:
		StringCopy(&Var2, "LEGS_P0_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		break;

	case 90:
		StringCopy(&Var2, "LEGS_P0_23_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar1 = 150;
		break;

	case 91:
		StringCopy(&Var2, "LEGS_P0_23_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar1 = 130;
		break;

	case 92:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 93:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 94:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 26;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 95:
		StringCopy(&Var2, "LEGS_P0_27_0", 16);
		iVar6 = 27;
		iVar7 = 0;
		break;

	case 96:
		StringCopy(&Var2, "LEGS_P0_28_0", 16);
		iVar6 = 28;
		iVar7 = 0;
		iVar1 = 45;
		break;

	case 97:
		StringCopy(&Var2, "LEGS_P0_28_1", 16);
		iVar6 = 28;
		iVar7 = 1;
		iVar1 = 48;
		break;

	case 98:
		StringCopy(&Var2, "LEGS_P0_28_2", 16);
		iVar6 = 28;
		iVar7 = 2;
		iVar1 = 48;
		break;

	case 99:
		StringCopy(&Var2, "LEGS_P0_28_3", 16);
		iVar6 = 28;
		iVar7 = 3;
		iVar1 = 52;
		break;

	case 100:
		StringCopy(&Var2, "LEGS_P0_28_4", 16);
		iVar6 = 28;
		iVar7 = 4;
		iVar1 = 52;
		break;

	case 101:
		StringCopy(&Var2, "LEGS_P0_28_5", 16);
		iVar6 = 28;
		iVar7 = 5;
		iVar1 = 55;
		break;

	case 102:
		StringCopy(&Var2, "LEGS_P0_28_6", 16);
		iVar6 = 28;
		iVar7 = 6;
		iVar1 = 55;
		break;

	case 103:
		StringCopy(&Var2, "LEGS_P0_28_7", 16);
		iVar6 = 28;
		iVar7 = 7;
		iVar1 = 55;
		break;

	case 104:
		StringCopy(&Var2, "LEGS_P0_28_8", 16);
		iVar6 = 28;
		iVar7 = 8;
		iVar1 = 58;
		break;

	case 105:
		StringCopy(&Var2, "LEGS_P0_28_9", 16);
		iVar6 = 28;
		iVar7 = 9;
		iVar1 = 58;
		break;

	case 106:
		StringCopy(&Var2, "LEGS_P0_28_10", 16);
		iVar6 = 28;
		iVar7 = 10;
		iVar1 = 60;
		break;

	case 107:
		StringCopy(&Var2, "LEGS_P0_28_11", 16);
		iVar6 = 28;
		iVar7 = 11;
		iVar1 = 60;
		break;

	case 108:
		StringCopy(&Var2, "LEGS_P0_28_12", 16);
		iVar6 = 28;
		iVar7 = 12;
		iVar1 = 62;
		break;

	case 109:
		StringCopy(&Var2, "LEGS_P0_28_13", 16);
		iVar6 = 28;
		iVar7 = 13;
		iVar1 = 62;
		break;

	case 110:
		StringCopy(&Var2, "LEGS_P0_28_14", 16);
		iVar6 = 28;
		iVar7 = 14;
		iVar1 = 65;
		break;

	case 111:
		StringCopy(&Var2, "LEGS_P0_28_15", 16);
		iVar6 = 28;
		iVar7 = 15;
		iVar1 = 65;
		break;

	case 112:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 29;
		iVar7 = 0;
		break;

	default: func_24(iVar10, iParam0, 113); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x14E56
void func_74(int iParam0) {
	if (iParam0 < 60) {
		func_76(iParam0);
	}
	else {
		func_75(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1) {
		func_24(3, iParam0, 181);
	}
}

// Position - 0x14E8A
void func_75(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 60:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 61:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 62:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 63:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 64:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 65:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 66:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 67:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 68:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 69:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 70:
		StringCopy(&Var2, "TORSO_P0_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 120;
		break;

	case 71:
		StringCopy(&Var2, "TORSO_P0_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 120;
		break;

	case 72:
		StringCopy(&Var2, "TORSO_P0_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 120;
		break;

	case 73:
		StringCopy(&Var2, "TORSO_P0_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 120;
		break;

	case 74:
		StringCopy(&Var2, "TORSO_P0_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 120;
		break;

	case 75:
		StringCopy(&Var2, "TORSO_P0_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 120;
		break;

	case 76:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 77:
		StringCopy(&Var2, "TORSO_P0_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		break;

	case 78:
		StringCopy(&Var2, "TORSO_P0_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 20;
		break;

	case 79:
		StringCopy(&Var2, "TORSO_P0_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 24;
		break;

	case 80:
		StringCopy(&Var2, "TORSO_P0_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 22;
		break;

	case 81:
		StringCopy(&Var2, "TORSO_P0_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 25;
		break;

	case 82:
		StringCopy(&Var2, "TORSO_P0_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 25;
		break;

	case 83:
		StringCopy(&Var2, "TORSO_P0_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 22;
		break;

	case 84:
		StringCopy(&Var2, "TORSO_P0_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 27;
		break;

	case 85:
		StringCopy(&Var2, "TORSO_P0_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		break;

	case 86:
		StringCopy(&Var2, "TORSO_P0_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		break;

	case 87:
		StringCopy(&Var2, "TORSO_P0_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		break;

	case 88:
		StringCopy(&Var2, "TORSO_P0_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 48;
		break;

	case 89:
		StringCopy(&Var2, "TORSO_P0_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 40;
		break;

	case 90:
		StringCopy(&Var2, "TORSO_P0_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 45;
		break;

	case 91:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 92:
		StringCopy(&Var2, "TORSO_P0_19_0", 16);
		iVar6 = 19;
		iVar7 = 0;
		break;

	case 93:
		StringCopy(&Var2, "TORSO_P0_19_1", 16);
		iVar6 = 19;
		iVar7 = 1;
		iVar1 = 190;
		break;

	case 94:
		StringCopy(&Var2, "TORSO_P0_19_2", 16);
		iVar6 = 19;
		iVar7 = 2;
		iVar1 = 190;
		break;

	case 95:
		StringCopy(&Var2, "TORSO_P0_19_3", 16);
		iVar6 = 19;
		iVar7 = 3;
		iVar1 = 190;
		break;

	case 96:
		StringCopy(&Var2, "TORSO_P0_19_4", 16);
		iVar6 = 19;
		iVar7 = 4;
		iVar1 = 210;
		break;

	case 97:
		StringCopy(&Var2, "TORSO_P0_20_0", 16);
		iVar6 = 20;
		iVar7 = 0;
		break;

	case 98:
		StringCopy(&Var2, "TORSO_P0_20_1", 16);
		iVar6 = 20;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 99:
		StringCopy(&Var2, "TORSO_P0_20_2", 16);
		iVar6 = 20;
		iVar7 = 2;
		iVar1 = 55;
		break;

	case 100:
		StringCopy(&Var2, "TORSO_P0_20_3", 16);
		iVar6 = 20;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 101:
		StringCopy(&Var2, "TORSO_P0_20_4", 16);
		iVar6 = 20;
		iVar7 = 4;
		iVar1 = 99;
		break;

	case 102:
		StringCopy(&Var2, "TORSO_P0_20_5", 16);
		iVar6 = 20;
		iVar7 = 5;
		iVar1 = 49;
		break;

	case 103:
		StringCopy(&Var2, "TORSO_P0_20_6", 16);
		iVar6 = 20;
		iVar7 = 6;
		iVar1 = 120;
		break;

	case 104:
		StringCopy(&Var2, "TORSO_P0_20_7", 16);
		iVar6 = 20;
		iVar7 = 7;
		iVar1 = 45;
		break;

	case 105:
		StringCopy(&Var2, "TORSO_P0_20_8", 16);
		iVar6 = 20;
		iVar7 = 8;
		iVar1 = 115;
		break;

	case 106:
		StringCopy(&Var2, "TORSO_P0_20_9", 16);
		iVar6 = 20;
		iVar7 = 9;
		iVar1 = 105;
		break;

	case 107:
		StringCopy(&Var2, "TORSO_P0_20_10", 16);
		iVar6 = 20;
		iVar7 = 10;
		iVar1 = 90;
		break;

	case 108:
		StringCopy(&Var2, "TORSO_P0_20_11", 16);
		iVar6 = 20;
		iVar7 = 11;
		iVar1 = 95;
		break;

	case 109:
		StringCopy(&Var2, "TORSO_P0_20_12", 16);
		iVar6 = 20;
		iVar7 = 12;
		iVar1 = 39;
		break;

	case 110:
		StringCopy(&Var2, "TORSO_P0_20_13", 16);
		iVar6 = 20;
		iVar7 = 13;
		iVar1 = 95;
		break;

	case 111:
		StringCopy(&Var2, "TORSO_P0_20_14", 16);
		iVar6 = 20;
		iVar7 = 14;
		iVar1 = 35;
		break;

	case 112:
		StringCopy(&Var2, "TORSO_P0_20_15", 16);
		iVar6 = 20;
		iVar7 = 15;
		iVar1 = 95;
		break;

	case 113:
		StringCopy(&Var2, "TORSO_P0_21_0", 16);
		iVar6 = 21;
		iVar7 = 0;
		iVar1 = 88;
		break;

	case 114:
		StringCopy(&Var2, "TORSO_P0_21_1", 16);
		iVar6 = 21;
		iVar7 = 1;
		iVar1 = 60;
		break;

	case 115:
		StringCopy(&Var2, "TORSO_P0_21_2", 16);
		iVar6 = 21;
		iVar7 = 2;
		iVar1 = 70;
		break;

	case 116:
		StringCopy(&Var2, "TORSO_P0_21_3", 16);
		iVar6 = 21;
		iVar7 = 3;
		iVar1 = 80;
		break;

	case 117:
		StringCopy(&Var2, "TORSO_P0_21_4", 16);
		iVar6 = 21;
		iVar7 = 4;
		iVar1 = 90;
		break;

	case 118:
		StringCopy(&Var2, "TORSO_P0_21_5", 16);
		iVar6 = 21;
		iVar7 = 5;
		iVar1 = 80;
		break;

	case 119:
		StringCopy(&Var2, "TORSO_P0_21_6", 16);
		iVar6 = 21;
		iVar7 = 6;
		iVar1 = 70;
		break;

	case 120:
		StringCopy(&Var2, "TORSO_P0_21_7", 16);
		iVar6 = 21;
		iVar7 = 7;
		iVar1 = 95;
		break;

	case 121:
		StringCopy(&Var2, "TORSO_P0_21_8", 16);
		iVar6 = 21;
		iVar7 = 8;
		iVar1 = 105;
		break;

	case 122:
		StringCopy(&Var2, "TORSO_P0_21_9", 16);
		iVar6 = 21;
		iVar7 = 9;
		iVar1 = 95;
		break;

	case 123:
		StringCopy(&Var2, "TORSO_P0_21_10", 16);
		iVar6 = 21;
		iVar7 = 10;
		iVar1 = 110;
		break;

	case 124:
		StringCopy(&Var2, "TORSO_P0_21_11", 16);
		iVar6 = 21;
		iVar7 = 11;
		iVar1 = 98;
		break;

	case 125:
		StringCopy(&Var2, "TORSO_P0_21_12", 16);
		iVar6 = 21;
		iVar7 = 12;
		iVar1 = 88;
		break;

	case 126:
		StringCopy(&Var2, "TORSO_P0_21_13", 16);
		iVar6 = 21;
		iVar7 = 13;
		iVar1 = 98;
		break;

	case 127:
		StringCopy(&Var2, "TORSO_P0_21_14", 16);
		iVar6 = 21;
		iVar7 = 14;
		iVar1 = 110;
		break;

	case 128:
		StringCopy(&Var2, "TORSO_P0_21_15", 16);
		iVar6 = 21;
		iVar7 = 15;
		iVar1 = 98;
		break;

	case 129:
		StringCopy(&Var2, "TORSO_P0_22_0", 16);
		iVar6 = 22;
		iVar7 = 0;
		break;

	case 130:
		StringCopy(&Var2, "TORSO_P0_22_1", 16);
		iVar6 = 22;
		iVar7 = 1;
		iVar1 = 4950;
		break;

	case 131:
		StringCopy(&Var2, "TORSO_P0_22_2", 16);
		iVar6 = 22;
		iVar7 = 2;
		iVar1 = 4195;
		break;

	case 132:
		StringCopy(&Var2, "TORSO_P0_22_3", 16);
		iVar6 = 22;
		iVar7 = 3;
		iVar1 = 3195;
		break;

	case 133:
		StringCopy(&Var2, "TORSO_P0_22_4", 16);
		iVar6 = 22;
		iVar7 = 4;
		iVar1 = 2950;
		break;

	case 134:
		StringCopy(&Var2, "TORSO_P0_22_5", 16);
		iVar6 = 22;
		iVar7 = 5;
		iVar1 = 3950;
		break;

	case 135:
		StringCopy(&Var2, "TORSO_P0_23_0", 16);
		iVar6 = 23;
		iVar7 = 0;
		iVar1 = 3200;
		break;

	case 136:
		StringCopy(&Var2, "TORSO_P0_23_1", 16);
		iVar6 = 23;
		iVar7 = 1;
		iVar1 = 3200;
		break;

	case 137:
		StringCopy(&Var2, "TORSO_P0_23_2", 16);
		iVar6 = 23;
		iVar7 = 2;
		iVar1 = 3200;
		break;

	case 138:
		StringCopy(&Var2, "TORSO_P0_23_3", 16);
		iVar6 = 23;
		iVar7 = 3;
		iVar1 = 3200;
		break;

	case 139:
		StringCopy(&Var2, "TORSO_P0_23_4", 16);
		iVar6 = 23;
		iVar7 = 4;
		iVar1 = 3200;
		break;

	case 140:
		StringCopy(&Var2, "TORSO_P0_23_5", 16);
		iVar6 = 23;
		iVar7 = 5;
		iVar1 = 3200;
		break;

	case 141:
		StringCopy(&Var2, "TORSO_P0_23_6", 16);
		iVar6 = 23;
		iVar7 = 6;
		iVar1 = 3200;
		break;

	case 142:
		StringCopy(&Var2, "TORSO_P0_23_7", 16);
		iVar6 = 23;
		iVar7 = 7;
		iVar1 = 3200;
		break;

	case 143:
		StringCopy(&Var2, "TORSO_P0_23_8", 16);
		iVar6 = 23;
		iVar7 = 8;
		iVar1 = 3200;
		break;

	case 144:
		StringCopy(&Var2, "TORSO_P0_23_9", 16);
		iVar6 = 23;
		iVar7 = 9;
		iVar1 = 3200;
		break;

	case 145:
		StringCopy(&Var2, "TORSO_P0_23_10", 16);
		iVar6 = 23;
		iVar7 = 10;
		iVar1 = 3200;
		break;

	case 146:
		StringCopy(&Var2, "TORSO_P0_23_11", 16);
		iVar6 = 23;
		iVar7 = 11;
		iVar1 = 3200;
		break;

	case 147:
		StringCopy(&Var2, "TORSO_P0_23_12", 16);
		iVar6 = 23;
		iVar7 = 12;
		iVar1 = 3200;
		break;

	case 148:
		StringCopy(&Var2, "TORSO_P0_23_13", 16);
		iVar6 = 23;
		iVar7 = 13;
		iVar1 = 3200;
		break;

	case 149:
		StringCopy(&Var2, "TORSO_P0_23_14", 16);
		iVar6 = 23;
		iVar7 = 14;
		iVar1 = 3200;
		break;

	case 150:
		StringCopy(&Var2, "TORSO_P0_23_15", 16);
		iVar6 = 23;
		iVar7 = 15;
		iVar1 = 3200;
		break;

	case 151:
		StringCopy(&Var2, "TORSO_P0_24_0", 16);
		iVar6 = 24;
		iVar7 = 0;
		iVar1 = 1350;
		break;

	case 152:
		StringCopy(&Var2, "TORSO_P0_24_1", 16);
		iVar6 = 24;
		iVar7 = 1;
		iVar1 = 1400;
		break;

	case 153:
		StringCopy(&Var2, "TORSO_P0_24_2", 16);
		iVar6 = 24;
		iVar7 = 2;
		iVar1 = 1200;
		break;

	case 154:
		StringCopy(&Var2, "TORSO_P0_24_3", 16);
		iVar6 = 24;
		iVar7 = 3;
		iVar1 = 1250;
		break;

	case 155:
		StringCopy(&Var2, "TORSO_P0_24_4", 16);
		iVar6 = 24;
		iVar7 = 4;
		iVar1 = 1350;
		break;

	case 156:
		StringCopy(&Var2, "TORSO_P0_24_5", 16);
		iVar6 = 24;
		iVar7 = 5;
		iVar1 = 1300;
		break;

	case 157:
		StringCopy(&Var2, "TORSO_P0_24_6", 16);
		iVar6 = 24;
		iVar7 = 6;
		iVar1 = 1380;
		break;

	case 158:
		StringCopy(&Var2, "TORSO_P0_24_7", 16);
		iVar6 = 24;
		iVar7 = 7;
		iVar1 = 1340;
		break;

	case 159:
		StringCopy(&Var2, "TORSO_P0_24_8", 16);
		iVar6 = 24;
		iVar7 = 8;
		iVar1 = 1380;
		break;

	case 160:
		StringCopy(&Var2, "TORSO_P0_24_9", 16);
		iVar6 = 24;
		iVar7 = 9;
		iVar1 = 1250;
		break;

	case 161:
		StringCopy(&Var2, "TORSO_P0_25_0", 16);
		iVar6 = 25;
		iVar7 = 0;
		iVar1 = 840;
		break;

	case 162:
		StringCopy(&Var2, "TORSO_P0_25_1", 16);
		iVar6 = 25;
		iVar7 = 1;
		iVar1 = 840;
		break;

	case 163:
		StringCopy(&Var2, "TORSO_P0_25_2", 16);
		iVar6 = 25;
		iVar7 = 2;
		iVar1 = 840;
		break;

	case 164:
		StringCopy(&Var2, "TORSO_P0_25_3", 16);
		iVar6 = 25;
		iVar7 = 3;
		iVar1 = 840;
		break;

	case 165:
		StringCopy(&Var2, "TORSO_P0_25_4", 16);
		iVar6 = 25;
		iVar7 = 4;
		iVar1 = 840;
		break;

	case 166:
		StringCopy(&Var2, "TORSO_P0_25_5", 16);
		iVar6 = 25;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 167:
		StringCopy(&Var2, "TORSO_P0_25_6", 16);
		iVar6 = 25;
		iVar7 = 6;
		iVar1 = 840;
		break;

	case 168:
		StringCopy(&Var2, "TORSO_P0_25_7", 16);
		iVar6 = 25;
		iVar7 = 7;
		iVar1 = 840;
		break;

	case 169:
		StringCopy(&Var2, "TORSO_P0_26_0", 16);
		iVar6 = 26;
		iVar7 = 0;
		break;

	case 170:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 27;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 171:
		StringCopy(&Var2, "TORSO_P0_28_0", 16);
		iVar6 = 28;
		iVar7 = 0;
		break;

	case 172:
		StringCopy(&Var2, "TORSO_P0_28_1", 16);
		iVar6 = 28;
		iVar7 = 1;
		iVar1 = 130;
		break;

	case 173:
		StringCopy(&Var2, "TORSO_P0_28_2", 16);
		iVar6 = 28;
		iVar7 = 2;
		iVar1 = 110;
		break;

	case 174:
		StringCopy(&Var2, "TORSO_P0_29_0", 16);
		iVar6 = 29;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 175:
		StringCopy(&Var2, "TORSO_P0_30_0", 16);
		iVar6 = 30;
		iVar7 = 0;
		iVar1 = 290;
		break;

	case 176:
		StringCopy(&Var2, "TORSO_P0_30_1", 16);
		iVar6 = 30;
		iVar7 = 1;
		iVar1 = 320;
		break;

	case 177:
		StringCopy(&Var2, "TORSO_P0_31_0", 16);
		iVar6 = 31;
		iVar7 = 0;
		iVar1 = 59;
		break;

	case 178:
		StringCopy(&Var2, "TORSO_P0_31_1", 16);
		iVar6 = 31;
		iVar7 = 1;
		iVar1 = 55;
		break;

	case 179:
		StringCopy(&Var2, "TORSO_P0_31_2", 16);
		iVar6 = 31;
		iVar7 = 2;
		iVar1 = 59;
		break;

	case 180:
		StringCopy(&Var2, "TORSO_P0_31_3", 16);
		iVar6 = 31;
		iVar7 = 3;
		iVar1 = 49;
		break;

	default: return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x15C1D
void func_76(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "TORSO_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "TORSO_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "TORSO_P0_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 3500;
		break;

	case 3:
		StringCopy(&Var2, "TORSO_P0_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "TORSO_P0_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "TORSO_P0_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "TORSO_P0_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	case 7:
		StringCopy(&Var2, "TORSO_P0_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		break;

	case 8:
		StringCopy(&Var2, "TORSO_P0_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		break;

	case 9:
		StringCopy(&Var2, "TORSO_P0_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		break;

	case 10:
		StringCopy(&Var2, "TORSO_P0_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		break;

	case 11:
		StringCopy(&Var2, "TORSO_P0_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		break;

	case 12:
		StringCopy(&Var2, "TORSO_P0_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		break;

	case 13:
		StringCopy(&Var2, "TORSO_P0_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		break;

	case 14:
		StringCopy(&Var2, "TORSO_P0_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		break;

	case 15:
		StringCopy(&Var2, "TORSO_P0_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		break;

	case 16:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 17:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 20;
		break;

	case 18:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 18;
		break;

	case 19:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 22;
		break;

	case 20:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 25;
		break;

	case 21:
		StringCopy(&Var2, "TORSO_P0_2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 19;
		break;

	case 22:
		StringCopy(&Var2, "TORSO_P0_2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 20;
		break;

	case 23:
		StringCopy(&Var2, "TORSO_P0_2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 22;
		break;

	case 24:
		StringCopy(&Var2, "TORSO_P0_2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 18;
		break;

	case 25:
		StringCopy(&Var2, "TORSO_P0_2_8", 16);
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 39;
		break;

	case 26:
		StringCopy(&Var2, "TORSO_P0_2_9", 16);
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 32;
		break;

	case 27:
		StringCopy(&Var2, "TORSO_P0_2_10", 16);
		iVar6 = 2;
		iVar7 = 10;
		iVar1 = 35;
		break;

	case 28:
		StringCopy(&Var2, "TORSO_P0_2_11", 16);
		iVar6 = 2;
		iVar7 = 11;
		iVar1 = 35;
		break;

	case 29:
		StringCopy(&Var2, "TORSO_P0_2_12", 16);
		iVar6 = 2;
		iVar7 = 12;
		iVar1 = 210;
		break;

	case 30:
		StringCopy(&Var2, "TORSO_P0_2_13", 16);
		iVar6 = 2;
		iVar7 = 13;
		iVar1 = 250;
		break;

	case 31:
		StringCopy(&Var2, "TORSO_P0_2_14", 16);
		iVar6 = 2;
		iVar7 = 14;
		iVar1 = 290;
		break;

	case 32:
		StringCopy(&Var2, "TORSO_P0_2_15", 16);
		iVar6 = 2;
		iVar7 = 15;
		iVar1 = 310;
		break;

	case 33:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 34:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 36:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 37:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 38:
		StringCopy(&Var2, "TORSO_P0_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 150;
		break;

	case 39:
		StringCopy(&Var2, "TORSO_P0_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 160;
		break;

	case 40:
		StringCopy(&Var2, "TORSO_P0_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 150;
		break;

	case 41:
		StringCopy(&Var2, "TORSO_P0_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 150;
		break;

	case 42:
		StringCopy(&Var2, "TORSO_P0_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 160;
		break;

	case 43:
		StringCopy(&Var2, "TORSO_P0_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 160;
		break;

	case 44:
		StringCopy(&Var2, "TORSO_P0_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 45:
		StringCopy(&Var2, "TORSO_P0_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 52;
		break;

	case 46:
		StringCopy(&Var2, "TORSO_P0_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 52;
		break;

	case 47:
		StringCopy(&Var2, "TORSO_P0_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 55;
		break;

	case 48:
		StringCopy(&Var2, "TORSO_P0_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 55;
		break;

	case 49:
		StringCopy(&Var2, "TORSO_P0_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 58;
		break;

	case 50:
		StringCopy(&Var2, "TORSO_P0_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 58;
		break;

	case 51:
		StringCopy(&Var2, "TORSO_P0_8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 62;
		break;

	case 52:
		StringCopy(&Var2, "TORSO_P0_8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 65;
		break;

	case 53:
		StringCopy(&Var2, "TORSO_P0_8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 65;
		break;

	case 54:
		StringCopy(&Var2, "TORSO_P0_8_10", 16);
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 68;
		break;

	case 55:
		StringCopy(&Var2, "TORSO_P0_8_11", 16);
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 68;
		break;

	case 56:
		StringCopy(&Var2, "TORSO_P0_8_12", 16);
		iVar6 = 8;
		iVar7 = 12;
		iVar1 = 55;
		break;

	case 57:
		StringCopy(&Var2, "TORSO_P0_8_13", 16);
		iVar6 = 8;
		iVar7 = 13;
		iVar1 = 62;
		break;

	case 58:
		StringCopy(&Var2, "TORSO_P0_8_14", 16);
		iVar6 = 8;
		iVar7 = 14;
		iVar1 = 58;
		break;

	case 59:
		StringCopy(&Var2, "TORSO_P0_8_15", 16);
		iVar6 = 8;
		iVar7 = 15;
		iVar1 = 58;
		break;

	default: return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1629F
void func_77(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "HAIR_P0_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "HAIR_P0_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		StringCopy(&Var2, "HAIR_P0_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		StringCopy(&Var2, "HAIR_P0_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		StringCopy(&Var2, "HAIR_P0_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 5;
		iVar7 = 0;
		break;

	default: func_24(iVar10, iParam0, 6); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x16384
void func_78(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 1;
		break;

	case 2:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 2;
		break;

	case 3:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 3;
		break;

	case 4:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 4;
		break;

	case 5:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 5;
		break;

	case 6:
		StringCopy(&Var2, "NO_LABEL", 16);
		iVar6 = 0;
		iVar7 = 6;
		break;

	default: func_24(iVar10, iParam0, 7); return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x1647A
void func_79() {
	Global_69523[0 /*14*/].f_1 = -1;
	Global_69523[0 /*14*/].f_2 = -1;
	Global_69523[0 /*14*/].f_5 = -1;
	Global_69523[0 /*14*/].f_3 = -1;
	Global_69523[0 /*14*/].f_4 = -1;
	Global_69523[0 /*14*/].f_7 = 0;
	Global_69523[0 /*14*/].f_6 = 0;
	Global_69523[0 /*14*/].f_13 = -1;
	Global_69523[0 /*14*/].f_12 = 0;
	Global_69523[0 /*14*/] = 0;
	StringCopy(&Global_69523[0 /*14*/].f_8, "NO_LABEL", 16);
}

// Position - 0x164F2
void func_80(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam2 == -99) {
		return;
	}
	switch (iParam0) {
	case joaat("player_zero"):
		if (!iParam3 || gameplay::is_bit_set(Global_101700.f_6188[1], 0)) {
			gameplay::set_bit(&Global_101700.f_2095.f_539.f_3044[0 /*166*/][iParam1 /*11*/][iParam2 / 32],
							  iParam2 % 32);
		}
		break;

	case joaat("player_two"):
		if (!iParam3 || gameplay::is_bit_set(Global_101700.f_6188[3], 0)) {
			gameplay::set_bit(&Global_101700.f_2095.f_539.f_3044[1 /*166*/][iParam1 /*11*/][iParam2 / 32],
							  iParam2 % 32);
		}
		if (!iParam3 || gameplay::is_bit_set(Global_101700.f_6188[4], 0)) {
			gameplay::set_bit(&Global_101700.f_2095.f_539.f_3044[2 /*166*/][iParam1 /*11*/][iParam2 / 32],
							  iParam2 % 32);
		}
		break;
	}
}

// Position - 0x165DB
int func_81(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar20;
	int iVar30;

	Global_69523[1 /*14*/] = {func_10(iParam0, iParam1, iParam2)};
	if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0) && !gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6)) {
		if (iParam3) {
			func_9(iParam1, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 1, Global_69523[1 /*14*/].f_1, 1,
				   0);
			if (iParam1 == 12) {
				iVar0 = 1;
				if (iParam0 == joaat("player_zero")) {
					if (iParam2 == 31) {
						iVar0 = 0;
					}
				}
				if (iVar0 == 1) {
					uVar3 = {func_88(iParam0, iParam2)};
					iVar1 = 0;
					while (iVar1 <= 14) {
						if (uVar3[iVar1] != -99 && iVar1 != 12 && iVar1 != 14) {
							if (iVar1 != 13) {
								func_81(iParam0, iVar1, uVar3[iVar1], 1, 1);
								func_92(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else {
								uVar20 = {func_82(iParam0, uVar3[iVar1])};
								iVar2 = 0;
								while (iVar2 <= 8) {
									func_81(iParam0, 14, uVar20[iVar2], 1, 1);
									func_92(iParam0, 14, uVar20[iVar2], 1);
									iVar2++;
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		else {
			func_9(iParam1, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 1, Global_69523[1 /*14*/].f_1, 0,
				   1);
		}
		if (iParam4 == 1 && iParam3 == 1) {
			switch (iParam0) {
			case joaat("player_zero"): break;

			case joaat("player_one"):
				switch (iParam1) {
				case 3:
					if (iParam2 >= 176 && iParam2 <= 191) {
						iVar30 = 227 + Global_69523[1 /*14*/].f_4;
						func_81(iParam0, 3, iVar30, 1, 0);
					}
					else if (iParam2 >= 227 && iParam2 <= 242) {
						iVar30 = 176 + Global_69523[1 /*14*/].f_4;
						func_81(iParam0, 3, iVar30, 1, 0);
					}
					break;

				case 11:
					if (iParam2 >= 9 && iParam2 <= 24) {
						iVar30 = 25 + Global_69523[1 /*14*/].f_4;
						func_81(iParam0, 11, iVar30, 1, 0);
					}
					else if (iParam2 >= 25 && iParam2 <= 40) {
						iVar30 = 9 + Global_69523[1 /*14*/].f_4;
						func_81(iParam0, 11, iVar30, 1, 0);
					}
					break;

				case 8:
					if (iParam2 >= 27 && iParam2 <= 42) {
						iVar30 = 43 + Global_69523[1 /*14*/].f_4;
						func_81(iParam0, 8, iVar30, 1, 0);
						iVar30 = 59 + Global_69523[1 /*14*/].f_4;
						func_81(iParam0, 8, iVar30, 1, 0);
					}
					else if (iParam2 >= 43 && iParam2 <= 58) {
						iVar30 = 27 + Global_69523[1 /*14*/].f_4;
						func_81(iParam0, 8, iVar30, 1, 0);
						iVar30 = 59 + Global_69523[1 /*14*/].f_4;
						func_81(iParam0, 8, iVar30, 1, 0);
					}
					else if (iParam2 >= 59 && iParam2 <= 74) {
						iVar30 = 27 + Global_69523[1 /*14*/].f_4;
						func_81(iParam0, 8, iVar30, 1, 0);
						iVar30 = 43 + Global_69523[1 /*14*/].f_4;
						func_81(iParam0, 8, iVar30, 1, 0);
					}
					break;

				case 14:
					if (iParam2 >= 64 && iParam2 <= 79) {
						iVar30 = 41 + Global_69523[1 /*14*/].f_4;
						func_81(iParam0, 14, iVar30, 1, 0);
					}
					break;
				}
				break;

			case joaat("player_two"):
				switch (iParam1) {
				case 4:
					if (iParam2 >= 81 && iParam2 <= 90) {
						iVar30 = 94 + Global_69523[1 /*14*/].f_4;
						func_81(iParam0, 4, iVar30, 1, 0);
					}
					break;

				case 12:
					if (iParam2 == 2) {
						func_81(iParam0, 14, 17, 1, 0);
					}
					break;
				}
				break;
			}
		}
		return 1;
	}
	return 0;
}

// Position - 0x169C2
struct<10> func_82(int iParam0, int iParam1) {
	int iVar0;
	struct<10> Var1;

	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8) {
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 31: func_87(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_87(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_87(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_87(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_87(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_87(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8); break;

		case 5: func_87(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8); break;

		case 6: func_87(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_87(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_87(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_87(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8); break;

		default: func_83(&Var1, iParam0, iParam1, 10); break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 31: func_87(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_87(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_87(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8); break;

		case 2: func_87(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8); break;

		case 3: func_87(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_87(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_87(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_87(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_87(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_87(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_83(&Var1, iParam0, iParam1, 9); break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 31: func_87(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_87(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_87(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_87(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_87(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8); break;

		case 4: func_87(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8); break;

		case 5: func_87(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_87(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_87(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_87(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_83(&Var1, iParam0, iParam1, 9); break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 31: func_87(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_87(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_87(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_87(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_87(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_87(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_87(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_87(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_87(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_87(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_87(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8); break;

		case 10: func_87(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8); break;

		case 11: func_87(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8); break;

		case 12: func_87(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8); break;

		case 13: func_87(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8); break;

		case 14: func_87(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8); break;

		case 15: func_87(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8); break;

		case 16: func_87(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8); break;

		case 17: func_87(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8); break;

		case 18: func_87(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8); break;

		case 19: func_87(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8); break;

		case 20: func_87(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8); break;

		case 21: func_87(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8); break;

		case 22: func_87(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 23: func_87(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8); break;

		case 24: func_87(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_83(&Var1, iParam0, iParam1, 25); break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 31: func_87(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_87(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_87(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_87(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_87(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_87(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_87(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_87(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_87(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_87(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_87(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8); break;

		case 10: func_87(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8); break;

		case 11: func_87(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8); break;

		case 12: func_87(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8); break;

		case 13: func_87(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8); break;

		case 14: func_87(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8); break;

		case 15: func_87(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 16: func_87(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 17: func_87(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8); break;

		case 18: func_87(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8); break;

		case 19: func_87(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 20: func_87(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 21: func_87(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8); break;

		case 22: func_87(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8); break;

		case 23: func_87(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_83(&Var1, iParam0, iParam1, 25); break;
		}
		break;
	}
	return Var1;
}

//Position - 0x172F1
void func_83(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar16;
	int iVar19;

	if (iParam2 != 0 && iParam2 != -99) {
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero")) {
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one")) {
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two")) {
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01")) {
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01")) {
			iVar0 = 4;
		}
		dlc1::get_shop_ped_outfit(iParam2, &Var1);
		if (!dlc1::_is_dlc_data_empty(Var1)) {
			iVar19 = 0;
			while (iVar19 < Var1.f_3) {
				if (dlc1::_0xA9F9C2E0FDE11CBB(Var1.f_1, iVar19, &vVar16) && vVar16.z != -1) {
					if (vVar16.x != 0 && vVar16.x != -1 && vVar16.x != 1849449579) {
						(*iParam0)[vVar16.z] = func_84(iParam1, vVar16.x, 14, iVar0);
					}
					else if (vVar16.y != -1) {
						(*iParam0)[vVar16.z] = vVar16.y;
					}
				}
				iVar19++;
			}
		}
	}
}

// Position - 0x1741B
int func_84(int iParam0, int iParam1, int iParam2, int iParam3) {
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;

	if (iParam2 == 12) {
	}
	else if (iParam2 == 13) {
	}
	else if (iParam2 == 14) {
		dlc1::init_shop_ped_prop(&Var0);
		iVar18 = 0;
		iVar19 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19) {
			dlc1::get_shop_ped_query_prop(iVar17, &Var0);
			if (!dlc1::_is_dlc_data_empty(Var0)) {
				if (iParam1 == Var0.f_1) {
					return func_86(iParam0) + iVar18;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else {
		dlc1::init_shop_ped_component(&Var20);
		iVar38 = 0;
		iVar39 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_25(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39) {
			dlc1::get_shop_ped_query_component(iVar37, &Var20);
			if (!dlc1::_is_dlc_data_empty(Var20)) {
				if (iParam1 == Var20.f_1) {
					return func_85(iParam0, func_25(iParam2)) + iVar38;
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

// Position - 0x174FB
int func_85(int iParam0, int iParam1) {
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 0: return 7;

		case 1: return 5;

		case 2: return 6;

		case 3: return 181;

		case 4: return 113;

		case 5: return 14;

		case 6: return 99;

		case 7: return 1;

		case 8: return 24;

		case 9: return 20;

		case 10: return 48;

		case 11: return 45;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 5;

		case 2: return 21;

		case 3: return 318;

		case 4: return 117;

		case 5: return 7;

		case 6: return 134;

		case 7: return 1;

		case 8: return 77;

		case 9: return 12;

		case 10: return 53;

		case 11: return 63;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 0: return 7;

		case 1: return 6;

		case 2: return 9;

		case 3: return 242;

		case 4: return 104;

		case 5: return 7;

		case 6: return 84;

		case 7: return 1;

		case 8: return 18;

		case 9: return 17;

		case 10: return 33;

		case 11: return 1;
		}
		break;
	}
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0: return 0;

		case 1: return 26;

		case 2: return 91;

		case 3: return 16;

		case 4: return 256;

		case 5: return 9;

		case 6: return 256;

		case 7: return 92;

		case 8: return 241;

		case 9: return 46;

		case 10: return 7;

		case 11: return 237;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0: return 0;

		case 1: return 26;

		case 2: return 92;

		case 3: return 16;

		case 4: return 256;

		case 5: return 9;

		case 6: return 256;

		case 7: return 55;

		case 8: return 136;

		case 9: return 36;

		case 10: return 6;

		case 11: return 256;
		}
		break;
	}
	return -99;
}

// Position - 0x178A2
int func_86(int iParam0) {
	switch (iParam0) {
	case joaat("player_zero"): return 113;

	case joaat("player_one"): return 175;

	case joaat("player_two"): return 155;
	}
	switch (iParam0) {
	case joaat("mp_m_freemode_01"): return 327;

	case joaat("mp_f_freemode_01"): return 327;
	}
	return -99;
}

// Position - 0x17903
void func_87(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9) {
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

// Position - 0x1794B
struct<17> func_88(int iParam0, int iParam1) {
	int iVar0;
	struct<17> Var1;

	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14) {
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 0:
			if (Global_101700.f_8044.f_99.f_58[120]) {
				func_91(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
			}
			else {
				func_91(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
			}
			break;

		case 1: func_91(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0); break;

		case 2: func_91(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8); break;

		case 3: func_91(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31); break;

		case 4: func_91(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2); break;

		case 5:
			func_91(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[0], Global_101700.f_2095.f_539.f_200[0], 6, 3, 0,
					0, 0, -99, 0, 0, 3);
			break;

		case 6: func_91(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 7: func_91(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 8: func_91(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 9: func_91(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 10: func_91(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4); break;

		case 11: func_91(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5); break;

		case 12: func_91(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31); break;

		case 13: func_91(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 14: func_91(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6); break;

		case 15: func_91(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31); break;

		case 16: func_91(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31); break;

		case 17: func_91(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31); break;

		case 18: func_91(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7); break;

		case 19: func_91(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 20: func_91(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 21: func_91(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 22: func_91(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 23: func_91(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31); break;

		case 24: func_91(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31); break;

		case 25: func_91(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 26: func_91(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 27: func_91(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 28: func_91(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31); break;

		case 29: func_91(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 30: func_91(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 31: func_91(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31); break;

		case 32: func_91(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 33: func_91(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 34: func_91(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31); break;

		case 35: func_91(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 36: func_91(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 37: func_91(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 38: func_91(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 39: func_91(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 40: func_91(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 41: func_91(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 42: func_91(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 43: func_91(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 44: func_91(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 45: func_91(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 46: func_91(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 47: func_91(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 48: func_91(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31); break;

		case 49: func_91(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31); break;

		case 50: func_91(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9); break;

		case 51: func_91(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 52: func_91(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		default: func_89(&Var1, iParam0, iParam1, 53); break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 0: func_91(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 1: func_91(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31); break;

		case 2:
			func_91(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[1], Global_101700.f_2095.f_539.f_200[1], 17, 2,
					26, 0, 0, -99, 0, 45, 31);
			break;

		case 3: func_91(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1); break;

		case 4: func_91(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2); break;

		case 5: func_91(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31); break;

		case 6: func_91(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 7: func_91(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3); break;

		case 8: func_91(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5); break;

		case 9: func_91(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 10: func_91(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 11: func_91(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31); break;

		case 12: func_91(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 13: func_91(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 14: func_91(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 15: func_91(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 16: func_91(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 17: func_91(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 18: func_91(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31); break;

		case 19: func_91(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 20: func_91(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 21: func_91(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4); break;

		case 22: func_91(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31); break;

		case 23: func_91(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31); break;

		case 24: func_91(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31); break;

		case 25: func_91(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31); break;

		case 26: func_91(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31); break;

		case 27: func_91(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31); break;

		case 28: func_91(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31); break;

		case 29: func_91(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31); break;

		case 30: func_91(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31); break;

		case 31: func_91(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31); break;

		case 32: func_91(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31); break;

		case 33: func_91(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31); break;

		case 34: func_91(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31); break;

		case 35: func_91(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31); break;

		case 36: func_91(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31); break;

		case 37: func_91(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31); break;

		case 38: func_91(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 39: func_91(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 40: func_91(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 41: func_91(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31); break;

		case 42: func_91(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31); break;

		case 43: func_91(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6); break;

		case 44: func_91(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7); break;

		case 45: func_91(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8); break;

		case 46: func_91(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31); break;

		default: func_89(&Var1, iParam0, iParam1, 47); break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 0: func_91(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 1: func_91(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8); break;

		case 2: func_91(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1); break;

		case 3: func_91(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2); break;

		case 4:
			func_91(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[2], Global_101700.f_2095.f_539.f_200[2], 8, 0, 0,
					0, 0, -99, 0, 0, 31);
			break;

		case 5: func_91(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6); break;

		case 6: func_91(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3); break;

		case 7: func_91(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4); break;

		case 8: func_91(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31); break;

		case 9: func_91(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 10: func_91(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 11: func_91(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5); break;

		case 12: func_91(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31); break;

		case 13: func_91(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31); break;

		case 14: func_91(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31); break;

		case 15: func_91(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 16: func_91(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 17: func_91(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 18: func_91(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 19: func_91(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 20: func_91(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 21: func_91(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 22: func_91(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 23: func_91(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 24: func_91(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 25: func_91(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 26: func_91(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 27: func_91(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 28: func_91(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 29: func_91(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 30: func_91(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 31: func_91(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 32: func_91(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 33: func_91(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 34: func_91(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 35: func_91(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 36: func_91(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 37: func_91(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 38: func_91(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 39: func_91(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 40: func_91(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 41: func_91(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 42: func_91(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 43: func_91(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 44: func_91(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31); break;

		case 45: func_91(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7); break;

		case 46: func_91(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 47: func_91(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31); break;

		default: func_89(&Var1, iParam0, iParam1, 48); break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0: func_91(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31); break;

		case 1: func_91(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0); break;

		case 2: func_91(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1); break;

		case 3: func_91(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2); break;

		case 4: func_91(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3); break;

		case 5: func_91(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4); break;

		case 6: func_91(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5); break;

		case 7: func_91(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6); break;

		case 8: func_91(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7); break;

		case 9: func_91(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8); break;

		case 10: func_91(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9); break;

		case 11: func_91(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10); break;

		case 12: func_91(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11); break;

		case 13: func_91(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12); break;

		case 14: func_91(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13); break;

		case 15: func_91(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14); break;

		case 16: func_91(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15); break;

		case 17: func_91(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16); break;

		case 18: func_91(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17); break;

		case 19: func_91(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18); break;

		case 20: func_91(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19); break;

		case 21: func_91(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20); break;

		case 22: func_91(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21); break;

		case 23: func_91(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22); break;

		case 24: func_91(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23); break;

		case 25: func_91(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24); break;

		default: func_89(&Var1, iParam0, iParam1, 26); break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0: func_91(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31); break;

		case 1: func_91(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31); break;

		case 2: func_91(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0); break;

		case 3: func_91(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1); break;

		case 4: func_91(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2); break;

		case 5: func_91(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3); break;

		case 6: func_91(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4); break;

		case 7: func_91(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5); break;

		case 8: func_91(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6); break;

		case 9: func_91(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7); break;

		case 10: func_91(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8); break;

		case 11: func_91(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9); break;

		case 12: func_91(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10); break;

		case 13: func_91(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31); break;

		case 14: func_91(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11); break;

		case 15: func_91(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12); break;

		case 16: func_91(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13); break;

		case 17: func_91(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14); break;

		case 18: func_91(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15); break;

		case 19: func_91(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16); break;

		case 20: func_91(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17); break;

		case 21: func_91(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31); break;

		case 22: func_91(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18); break;

		case 23: func_91(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19); break;

		case 24: func_91(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20); break;

		case 25: func_91(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21); break;

		case 26: func_91(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22); break;

		case 27: func_91(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23); break;

		default: func_89(&Var1, iParam0, iParam1, 28); break;
		}
		break;
	}
	return Var1;
}

//Position - 0x19796
void func_89(var* uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar16;
	struct<2> Var19;
	int iVar36;

	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero")) {
		iVar0 = 0;
		(*uParam0)[13] = 10 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("player_one")) {
		iVar0 = 1;
		(*uParam0)[13] = 9 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("player_two")) {
		iVar0 = 2;
		(*uParam0)[13] = 9 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("mp_m_freemode_01")) {
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01")) {
		iVar0 = 4;
	}
	dlc1::_0xF3FBE2D50A6A8C28(iVar0, 0);
	dlc1::get_shop_ped_query_outfit(iParam2 - iParam3, &Var1);
	if (!dlc1::_is_dlc_data_empty(Var1)) {
		iVar36 = 0;
		while (iVar36 < Var1.f_4) {
			if (dlc1::_get_prop_from_outfit(Var1.f_1, iVar36, &vVar16)) {
				if (vVar16.x != 0 && vVar16.x != -1 && vVar16.x != 1849449579) {
					if (vVar16.z == 10) {
						dlc1::init_shop_ped_component(&Var19);
						dlc1::get_shop_ped_component(vVar16.x, &Var19);
						if (vVar16.x != Var19.f_1) {
							uParam0->f_16 = 1;
						}
					}
					if (vVar16.z == 10 && uParam0->f_16) {
						(*uParam0)[func_90(vVar16.z)] = vVar16.x;
						uParam0->f_16 = 1;
					}
					else {
						(*uParam0)[func_90(vVar16.z)] = func_84(iParam1, vVar16.x, func_90(vVar16.z), iVar0);
					}
				}
				else if (vVar16.y != -1) {
					(*uParam0)[func_90(vVar16.z)] = vVar16.y;
				}
			}
			iVar36++;
		}
		if (Var1.f_3 == 0) {
			(*uParam0)[13] = -99;
		}
		else {
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

// Position - 0x19980
int func_90(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 6: return 6;

	case 5: return 5;

	case 8: return 8;

	case 9: return 9;

	case 10: return 10;

	case 1: return 1;

	case 7: return 7;

	case 11: return 11;
	}
	return 0;
}

// Position - 0x19A30
void func_91(var *uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) {
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

// Position - 0x19AA1
int func_92(int iParam0, int iParam1, int iParam2, int iParam3) {
	Global_69523[1 /*14*/] = {func_10(iParam0, iParam1, iParam2)};
	if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0) && !gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6)) {
		if (iParam3) {
			func_9(iParam1, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 0, Global_69523[1 /*14*/].f_1, 1,
				   0);
		}
		else {
			func_9(iParam1, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 0, Global_69523[1 /*14*/].f_1, 0,
				   1);
		}
		return 1;
	}
	return 0;
}

// Position - 0x19B3C
int func_93(int iParam0) {
	if (func_281(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x19B66
int func_94(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (!ped::is_ped_injured(iParam0)) {
		if (iParam1 == 12) {
			iVar0 = 0;
			while (iVar0 <= 53) {
				if (func_101(iParam0, iParam1, iVar0)) {
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13) {
			iVar1 = 0;
			while (iVar1 <= 19) {
				if (func_101(iParam0, iParam1, iVar1)) {
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14) {
			if (iParam2 == -1) {
			}
			else {
				return func_97(iParam0, iParam2);
			}
		}
		else {
			return func_95(iParam0, iParam1);
		}
	}
	return -99;
}

// Position - 0x19C07
int func_95(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 12 || iParam1 == 13 || iParam1 == 14 || ped::is_ped_injured(iParam0)) {
		return -99;
	}
	iVar0 = func_25(iParam1);
	iVar1 = ped::get_ped_drawable_variation(iParam0, iVar0);
	iVar2 = ped::get_ped_texture_variation(iParam0, iVar0);
	return func_96(iParam0, iVar1, iVar2, iParam1);
}

// Position - 0x19C67
int func_96(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_25(iParam3);
	iVar1 = ped::get_number_of_ped_drawable_variations(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= iVar1 - 1) {
		iVar5 = ped::get_number_of_ped_texture_variations(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1) {
			iVar2 += iVar5;
		}
		else {
			iVar4 = 0;
			while (iVar4 <= iVar5 - 1) {
				if (iVar3 == iParam1 && iVar4 == iParam2) {
					return iVar2;
				}
				else {
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

// Position - 0x19CEB
int func_97(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (ped::is_ped_injured(iParam0)) {
		return -99;
	}
	iVar0 = ped::get_ped_prop_index(iParam0, iParam1);
	if (iVar0 == -1) {
		return func_100(iParam1);
	}
	iVar1 = ped::get_ped_prop_texture_index(iParam0, iParam1);
	return func_98(iParam0, iVar0, iVar1, iParam1);
}

// Position - 0x19D31
int func_98(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam1 == -1) {
		return func_100(iParam3);
	}
	iVar0 = entity::get_entity_model(iParam0);
	iVar1 = dlc1::get_hash_name_for_prop(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0) {
		if (iVar0 == joaat("mp_m_freemode_01")) {
			return func_84(entity::get_entity_model(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01")) {
			return func_84(entity::get_entity_model(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = ped::get_number_of_ped_prop_drawable_variations(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= iVar2 - 1) {
		iVar6 = ped::get_number_of_ped_prop_texture_variations(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1) {
			iVar3 += iVar6;
		}
		else {
			iVar5 = 0;
			while (iVar5 <= iVar6 - 1) {
				if (iVar4 == iParam1 && iVar5 == iParam2) {
					iVar3 += func_99(iParam0, iParam3);
					return iVar3;
				}
				else {
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_100(iParam3);
}

// Position - 0x19E2D
int func_99(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = entity::get_entity_model(iParam0);
	switch (iVar0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 58;

		case 2: return 112;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 82;

		case 2: return 158;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 88;

		case 2: return 154;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 155;

		case 6: return 319;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 155;

		case 6: return 319;
		}
		break;
	}
	return -99;
}

// Position - 0x19F6B
int func_100(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 1: return 1;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 5: return 5;

	case 6: return 6;

	case 7: return 7;

	case 8: return 8;
	}
	return 0;
}

// Position - 0x19FF1
bool func_101(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var *uVar5;
	var uVar22;
	int iVar32;
	var uVar33;

	if (ped::is_ped_injured(iParam0)) {
		return false;
	}
	iVar0 = entity::get_entity_model(iParam0);
	Global_69523[1 /*14*/] = {func_10(iVar0, iParam1, iParam2)};
	if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
		return false;
	}
	if (iParam1 == 12) {
		uVar5 = {func_88(iVar0, iParam2)};
		iVar2 = 0;
		while (iVar2 <= 14) {
			if (uVar5[iVar2] != -99 && iVar2 != 12 && iVar2 != 14) {
				if (!func_101(iParam0, iVar2, uVar5[iVar2])) {
					if (iVar2 == 13) {
						uVar22 = {func_82(iVar0, uVar5[iVar2])};
						iVar3 = 0;
						while (iVar3 <= 8) {
							if (!func_101(iParam0, 14, uVar22[iVar3])) {
								iVar4 = 0;
								while (iVar4 <= 19) {
									Global_69523[2 /*14*/] = {func_10(iVar0, 14, iVar4)};
									if (Global_69523[2 /*14*/].f_12 == iVar3) {
										if (func_101(iParam0, 14, iVar4)) {
											if (!func_102(iVar0, iParam2, 14, iVar4, &uVar5, &Global_69523[2 /*14*/])) {
												return false;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else {
						iVar1 = func_95(iParam0, iVar2);
						Global_69523[2 /*14*/] = {func_10(iVar0, iVar2, iVar1)};
						if (!func_102(iVar0, iParam2, iVar2, iVar1, &uVar5, &Global_69523[2 /*14*/])) {
							return false;
						}
					}
				}
			}
			iVar2++;
		}
		return true;
	}
	else if (iParam1 == 13) {
		uVar33 = {func_82(iVar0, iParam2)};
		iVar32 = 0;
		while (iVar32 <= 8) {
			if (!func_101(iParam0, 14, uVar33[iVar32])) {
				return false;
			}
			iVar32++;
		}
		return true;
	}
	else if (iParam1 == 14) {
		if (ped::get_ped_prop_index(iParam0, Global_69523[1 /*14*/].f_12) == Global_69523[1 /*14*/].f_3 &&
			(ped::get_ped_prop_texture_index(iParam0, Global_69523[1 /*14*/].f_12) == Global_69523[1 /*14*/].f_4 ||
			 Global_69523[1 /*14*/].f_3 == -1)) {
			return true;
		}
	}
	else if (Global_69523[1 /*14*/].f_3 == ped::get_ped_drawable_variation(iParam0, func_25(iParam1)) &&
			 Global_69523[1 /*14*/].f_4 == ped::get_ped_texture_variation(iParam0, func_25(iParam1))) {
		return true;
	}
	return false;
}

// Position - 0x1A249
bool func_102(int iParam0, int iParam1, int iParam2, int iParam3, var *uParam4, var *uParam5) {
	var uVar0;
	int iVar10;

	if ((*uParam4)[iParam2] == iParam3) {
		return true;
	}
	if ((*uParam4)[iParam2] == -99 && iParam2 != 14 && iParam2 != 13) {
		return true;
	}
	if (iParam2 == 13 || iParam2 == 14 && (*uParam4)[13] == 31) {
		if (iParam3 == 0 || iParam3 == 1 || iParam3 == 2 || iParam3 == 3 || iParam3 == 4 || iParam3 == 5 ||
			iParam3 == 6 || iParam3 == 7 || iParam3 == 8) {
			return true;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1) {
		return true;
	}
	if (iParam2 == 14) {
		uVar0 = {func_82(iParam0, (*uParam4)[13])};
		iVar10 = 0;
		while (iVar10 <= 8) {
			if (uVar0[iVar10] == iParam3) {
				return true;
			}
			iVar10++;
		}
	}
	if (func_107(iParam0, iParam2, iParam3)) {
		return true;
	}
	if (iParam0 == joaat("player_zero")) {
		if (func_106(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 10 || iParam1 == 11 || iParam1 == 12 || iParam1 == 18 ||
				iParam1 == 50) {
				return false;
			}
			return true;
		}
		else if (func_105(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 4 || iParam1 == 5 || iParam1 == 10 || iParam1 == 11 ||
				iParam1 == 12 || iParam1 == 14 || iParam1 == 18 || iParam1 == 50) {
				return false;
			}
			if (iParam2 == 8) {
				if ((*uParam4)[8] != 0) {
					return false;
				}
			}
			else if (iParam2 == 9) {
				if ((*uParam4)[9] != 0) {
					return false;
				}
			}
			return true;
		}
		else if (func_103(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 4 || iParam1 == 5 || iParam1 == 10 || iParam1 == 11 ||
				iParam1 == 12 || iParam1 == 14 || iParam1 == 18 || iParam1 == 50) {
				return false;
			}
			return true;
		}
	}
	else if (iParam0 == joaat("player_one")) {
		if (func_106(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 3 || iParam1 == 5 || iParam1 == 7) {
				return false;
			}
			return true;
		}
		else if (func_105(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 3 || iParam1 == 5 || iParam1 == 7 || iParam1 == 8 || iParam1 == 21) {
				if (iParam2 == 8) {
					if (iParam3 == 9) {
						if (iParam1 == 8 || iParam1 == 21) {
							return true;
						}
					}
					else {
						return false;
					}
				}
				else {
					return false;
				}
			}
			if (iParam2 == 8) {
				if ((*uParam4)[8] != 26) {
					return false;
				}
			}
			else if (iParam2 == 9) {
				if ((*uParam4)[9] != 0) {
					return false;
				}
				if (iParam1 == 43 || iParam1 == 44 || iParam1 == 45 || iParam1 == 46) {
					if (iParam3 >= 5 && iParam3 <= 10) {
						return false;
					}
				}
			}
			else if (iParam2 == 14) {
				if (iParam1 == 43 || iParam1 == 44 || iParam1 == 45 || iParam1 == 46) {
					if (iParam3 >= 26 && iParam3 <= 39) {
						return false;
					}
				}
			}
			return true;
		}
		else if (func_103(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 3 || iParam1 == 3 || iParam1 == 5 || iParam1 == 7 || iParam1 == 8 || iParam1 == 21) {
				return false;
			}
			return true;
		}
		else if (iParam2 == 14) {
			if (iParam3 >= 159 && iParam3 <= 174) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two")) {
		if (iParam1 == 2) {
			if (iParam2 == 14 && iParam3 == 0) {
				return true;
			}
		}
		if (func_106(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 6 || iParam1 == 8 || iParam1 == 45 || iParam1 == 12) {
				return false;
			}
			return true;
		}
		else if (func_105(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 3 || iParam1 == 6 || iParam1 == 8 || iParam1 == 11 ||
				iParam1 == 45 || iParam1 == 12) {
				return false;
			}
			if (iParam2 == 8) {
				if ((*uParam4)[8] != 15) {
					return false;
				}
			}
			else if (iParam2 == 9) {
				if ((*uParam4)[9] != 0) {
					return false;
				}
			}
			return true;
		}
		else if (func_103(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 3 || iParam1 == 6 || iParam1 == 8 || iParam1 == 11 ||
				iParam1 == 12) {
				return false;
			}
			return true;
		}
	}
	return false;
}

// Position - 0x1A84D
bool func_103(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 14:
			if (iParam2 == 16) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 14:
			if (iParam2 == 40 || iParam2 >= 41 && iParam2 <= 56 || iParam2 >= 64 && iParam2 <= 79) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 14:
			if (iParam2 >= 17 && iParam2 <= 18 || iParam2 >= 71 && iParam2 <= 86) {
				return true;
			}
			break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam2 >= 18 && iParam2 <= 130) {
				return true;
			}
			else if (iParam2 >= 10 && iParam2 <= 17) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_104(iParam0, iParam2, 14, 3);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 1) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_104(iParam0, iParam2, 14, 3), -1842686353, 1);
			}
			break;

		case 1:
			if (iParam2 >= 26) {
				if (iParam3 == -1) {
					iParam3 = func_104(iParam0, iParam2, 1, 3);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_104(iParam0, iParam2, 1, 3), -1842686353, 0);
			}
			break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam2 >= 18 && iParam2 <= 130) {
				return true;
			}
			else if (iParam2 >= 10 && iParam2 <= 17) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_104(iParam0, iParam2, 14, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 1) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_104(iParam0, iParam2, 14, 4), -1842686353, 1);
			}
			break;

		case 1:
			if (iParam2 >= 26) {
				if (iParam3 == -1) {
					iParam3 = func_104(iParam0, iParam2, 1, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_104(iParam0, iParam2, 1, 4), -1842686353, 0);
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x1AACA
int func_104(int iParam0, int iParam1, int iParam2, int iParam3) {
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;

	if (iParam2 == 12) {
	}
	else if (iParam2 == 13) {
	}
	else if (iParam2 == 14) {
		dlc1::init_shop_ped_prop(&Var0);
		iVar18 = 0;
		iVar19 = iParam1 - func_86(iParam0);
		if (iVar19 < 0) {
			return -1;
		}
		iVar20 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20) {
			dlc1::get_shop_ped_query_prop(iVar17, &Var0);
			if (!dlc1::_is_dlc_data_empty(Var0)) {
				if (iVar18 == iVar19) {
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else {
		dlc1::init_shop_ped_component(&Var21);
		iVar39 = 0;
		iVar40 = iParam1 - func_85(iParam0, func_25(iParam2));
		if (iVar40 < 0) {
			return -1;
		}
		if (iParam0 == Global_69645.f_26[iParam2] && iParam1 == Global_69645[iParam2] &&
			Global_69645.f_13[iParam2] != 0) {
			return Global_69645.f_13[iParam2];
		}
		iVar41 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_25(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41) {
			dlc1::get_shop_ped_query_component(iVar38, &Var21);
			if (!dlc1::_is_dlc_data_empty(Var21)) {
				if (iVar39 == iVar40) {
					Global_69645.f_13[iParam2] = Var21.f_1;
					Global_69645[iParam2] = iParam1;
					Global_69645.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

// Position - 0x1AC26
bool func_105(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0 == joaat("player_zero")) {
		if (iParam1 == 6) {
			if (iParam2 == 10) {
				return true;
			}
		}
		else if (iParam1 == 8) {
			if (iParam2 == 9 || iParam2 == 7 || iParam2 == 23) {
				return true;
			}
		}
		else if (iParam1 == 9) {
			if (iParam2 >= 9 && iParam2 <= 14) {
				return true;
			}
		}
		else if (iParam1 == 14) {
			if (iParam2 == 12 || iParam2 == 59 || iParam2 == 60 || iParam2 == 31 || iParam2 == 32 || iParam2 == 33 ||
				iParam2 == 34 || iParam2 == 35 || iParam2 == 36 || iParam2 == 37 || iParam2 == 38 || iParam2 == 39 ||
				iParam2 == 40 || iParam2 == 41 || iParam2 >= 42 && iParam2 <= 44 || iParam2 == 54 || iParam2 == 55) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_one")) {
		if (iParam1 == 2) {
			if (iParam2 == 20) {
				return true;
			}
		}
		else if (iParam1 == 8) {
			if (iParam2 == 3 || iParam2 == 5 || iParam2 == 9) {
				return true;
			}
		}
		else if (iParam1 == 9) {
			if (iParam2 >= 5 && iParam2 <= 10) {
				return true;
			}
		}
		else if (iParam1 == 14) {
			if (iParam2 == 82 || iParam2 == 10 || iParam2 == 26 || iParam2 == 27 || iParam2 == 28 || iParam2 == 29 ||
				iParam2 == 30 || iParam2 == 31 || iParam2 == 32 || iParam2 == 33 || iParam2 == 34 || iParam2 == 35 ||
				iParam2 == 36 || iParam2 >= 37 && iParam2 <= 39) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two")) {
		if (iParam1 == 8) {
			if (iParam2 == 14 || iParam2 == 7) {
				return true;
			}
		}
		else if (iParam1 == 9) {
			if (iParam2 == 8 || iParam2 >= 9 && iParam2 <= 14 || iParam2 == 15 || iParam2 == 16) {
				return true;
			}
		}
		else if (iParam1 == 14) {
			if (iParam2 == 88 || iParam2 == 12 || iParam2 == 47 || iParam2 == 48 || iParam2 == 49 || iParam2 == 50 ||
				iParam2 == 51 || iParam2 == 52 || iParam2 == 53 || iParam2 == 54 || iParam2 == 55 || iParam2 == 56 ||
				iParam2 == 57 || iParam2 >= 58 && iParam2 <= 60) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01")) {
		if (iParam1 == 1) {
			if (iParam2 > 0) {
				if (iParam2 >= 26) {
					if (iParam3 == -1) {
						iParam3 = func_104(iParam0, iParam2, 1, 3);
					}
					if (dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0)) {
						return false;
					}
				}
				return true;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		if (iParam1 == 1) {
			if (iParam2 > 0) {
				if (iParam2 >= 26) {
					if (iParam3 == -1) {
						iParam3 = func_104(iParam0, iParam2, 1, 4);
					}
					if (dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0)) {
						return false;
					}
				}
				return true;
			}
		}
	}
	return false;
}

// Position - 0x1B027
bool func_106(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("player_zero"):
		if (iParam1 == 14) {
			if (iParam2 == 58 || iParam2 == 61 || iParam2 >= 62 && iParam2 <= 69 || iParam2 >= 70 && iParam2 <= 79 ||
				iParam2 >= 80 && iParam2 <= 89 || iParam2 == 90 || iParam2 >= 91 && iParam2 <= 102 ||
				iParam2 >= 103 && iParam2 <= 110 || iParam2 == 111) {
				return true;
			}
		}
		break;

	case joaat("player_one"):
		if (iParam1 == 14) {
			if (iParam2 >= 83 && iParam2 <= 92 || iParam2 == 93 || iParam2 == 94 || iParam2 >= 95 && iParam2 <= 101 ||
				iParam2 >= 102 && iParam2 <= 111 || iParam2 >= 112 && iParam2 <= 121 ||
				iParam2 >= 122 && iParam2 <= 131 || iParam2 >= 132 && iParam2 <= 139 ||
				iParam2 >= 140 && iParam2 <= 149 || iParam2 >= 150 && iParam2 <= 156 || iParam2 == 157) {
				return true;
			}
		}
		break;

	case joaat("player_two"):
		if (iParam1 == 14) {
			if (iParam2 == 89 || iParam2 >= 90 && iParam2 <= 99 || iParam2 >= 100 && iParam2 <= 109 || iParam2 == 111 ||
				iParam2 == 112 || iParam2 >= 113 && iParam2 <= 122 || iParam2 >= 123 && iParam2 <= 132 ||
				iParam2 >= 133 && iParam2 <= 142 || iParam2 >= 143 && iParam2 <= 152 || iParam2 == 153) {
				return true;
			}
		}
		break;

	case joaat("mp_m_freemode_01"):
		if (iParam1 == 14) {
			if (iParam2 >= 155 && iParam2 <= 318) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_104(iParam0, iParam2, 14, 3);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
			}
		}
		break;

	case joaat("mp_f_freemode_01"):
		if (iParam1 == 14) {
			if (iParam2 >= 155 && iParam2 <= 318) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_104(iParam0, iParam2, 14, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
			}
		}
		break;
	}
	return false;
}

// Position - 0x1B31A
bool func_107(int iParam0, int iParam1, int iParam2) {
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 15) {
				return true;
			}
			break;

		case 9:
			if (iParam2 == 6) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 1 || iParam2 == 10) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 4) {
				return true;
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x1B3B3
bool func_108(int iParam0) { return Global_101700.f_8044.f_330[iParam0 /*6*/]; }

// Position - 0x1B3C9
void func_109(int iParam0, var *uParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = func_282(iParam0);
		iVar1 = entity::get_entity_model(iParam0);
		iVar3 = 0;
		while (iVar3 < 12) {
			if (iVar3 != 1 || iVar3 == 1 && !iParam2) {
				if (iParam4) {
					if (*uParam1)
						[iVar3] >= ped::get_number_of_ped_texture_variations(iParam0, iVar3, uParam1->f_13[iVar3]) {
							(*uParam1)[iVar3] = 0;
						}
				}
				ped::set_ped_component_variation(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3],
												 uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9) {
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255) {
				ped::set_ped_prop_index(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], 0);
			}
			else {
				ped::clear_ped_prop(iParam0, iVar3);
			}
			iVar3++;
		}
		if (func_281(iVar0)) {
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_278(iParam0, iVar1, &iVar2, 0)) {
				func_264(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_262(iParam0, iVar1, &iVar2)) {
				func_264(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (network::network_is_game_in_progress() &&
				 entity::get_entity_model(iParam0) == entity::get_entity_model(player::player_ped_id())) {
			iVar4 = func_261(iParam0);
			func_260(748, uParam1->f_60, Global_69521, 1, 0);
			func_260(749, uParam1->f_61, Global_69521, 1, 0);
			iVar5 = func_96(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_112(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_69521, iVar4, 0, 0);
			if (!iParam2) {
				iVar6 = func_96(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_112(iParam0, 1, iVar6, 0, -1, 0, 0, 0, -1, -1, Global_69521, iVar4, 0, 0);
			}
			if (!iParam3) {
				iVar7 = func_98(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_112(iParam0, 14, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_69521, iVar4, 0, 0);
			}
		}
		if (network::network_is_game_in_progress() && iParam0 == player::player_ped_id()) {
			func_260(747, uParam1->f_59, Global_69521, 1, 0);
			func_260(2045, uParam1->f_59, Global_69521, 1, 0);
			func_110(161, 1, -1, 1);
		}
	}
}

// Position - 0x1B693
void func_110(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	if (func_111()) {
		iVar0 = Global_2522581[iParam0 /*3*/][func_17(iParam2)];
		if (iVar0 != 0) {
			stats::stat_set_bool(iVar0, iParam1, iParam3);
		}
	}
}

// Position - 0x1B6C5
bool func_111() {
	return true;
	return false;
}

// Position - 0x1B6D2
int func_112(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int *iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar32;
	var uVar42;
	int iVar59;
	var uVar60;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;
	float fVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int *iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	var uVar117;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	var uVar122;
	int iVar123;
	int iVar124;
	int iVar125;
	int iVar126;
	var uVar127;
	int iVar128;
	int iVar129;
	int iVar130;
	int iVar131;
	var uVar132;
	int iVar133;
	int iVar134;
	int iVar135;
	int iVar136;
	int iVar137;

	if (!network::network_is_game_in_progress()) {
		if (Global_1315167 != 4 && Global_1315167 != 5 && Global_1315167 != 7) {
			return 0;
		}
	}
	if (ped::is_ped_injured(iParam0) || iParam2 == -99) {
		return 0;
	}
	if (iParam0 == player::player_ped_id() && Global_2421664[player::player_id() /*358*/].f_225 == 2) {
		if (!iParam12) {
			return 0;
		}
	}
	if (iParam10 == -1) {
		iParam10 = Global_69521;
	}
	Global_69522++;
	iVar5 = entity::get_entity_model(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0) {
		Global_69523[1 /*14*/] = {func_227(iVar5, iParam1, iParam2)};
		if (!func_226(iParam3)) {
			Global_69522--;
			return 0;
		}
		func_223(iVar5, iParam1, iParam2, 1);
	}
	if (iParam1 == 12) {
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		ped::clear_all_ped_props(iParam0);
		uVar15 = 15;
		if (iParam5 == 1) {
			uVar15 = {Global_69566};
		}
		else {
			uVar15 = {func_88(iVar5, iParam2)};
		}
		iVar0 = 0;
		while (iVar0 <= 14) {
			if (uVar15[iVar0] != -99) {
				if (iVar0 == 10 && uVar15.f_16) {
					Global_69523[1 /*14*/] = {func_227(iVar5, 10, 0)};
					if (iParam4 == -1) {
						ped::set_ped_component_variation(iParam0, func_25(iVar0), Global_69523[1 /*14*/].f_3,
														 Global_69523[1 /*14*/].f_4,
														 ped::get_ped_palette_variation(iParam0, func_25(iVar0)));
					}
					else {
						ped::set_ped_component_variation(iParam0, func_25(iVar0), Global_69523[1 /*14*/].f_3,
														 Global_69523[1 /*14*/].f_4, iParam4);
					}
					if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1)) {
						func_223(iVar5, 10, 0, 1);
					}
				}
				else {
					Global_69523[1 /*14*/] = {func_227(iVar5, iVar0, uVar15[iVar0])};
					if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0) || iVar0 == 13) {
						if (iVar0 == 13) {
							uVar32 = 9;
							if (iParam5 == 1) {
								uVar32 = {Global_69583};
							}
							else {
								uVar32 = {func_82(iVar5, uVar15[iVar0])};
							}
							iVar1 = 0;
							while (iVar1 <= 8) {
								Global_69523[1 /*14*/] = {func_227(iVar5, 14, uVar32[iVar1])};
								func_222(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3,
										 Global_69523[1 /*14*/].f_4);
								if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1)) {
									func_223(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12) {
							if (iVar0 != 1) {
								if (iParam4 == -1) {
									ped::set_ped_component_variation(
										iParam0, func_25(iVar0), Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4,
										ped::get_ped_palette_variation(iParam0, func_25(iVar0)));
								}
								else {
									ped::set_ped_component_variation(iParam0, func_25(iVar0),
																	 Global_69523[1 /*14*/].f_3,
																	 Global_69523[1 /*14*/].f_4, iParam4);
								}
							}
							else {
								func_112(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1)) {
								func_223(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14) {
				Global_69523[1 /*14*/] = {func_227(iVar5, iVar0, func_221(iParam0, iVar0, -1))};
				if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 3)) {
					uVar42 = {func_88(iVar5, 0)};
					func_112(iParam0, iVar0, uVar42[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0) {
			iVar59 = func_220();
			if (iVar59 != -1) {
				func_218(iVar59, 0, iParam10);
			}
			func_216(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13) {
		uVar60 = {func_82(iVar5, iParam2)};
		iVar1 = 0;
		while (iVar1 <= 8) {
			Global_69523[1 /*14*/] = {func_227(iVar5, 14, uVar60[iVar1])};
			func_222(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4);
			if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1)) {
				func_223(iVar5, 14, uVar60[iVar1], 1);
			}
			if (iParam5 == 0) {
				if (Global_69522 == 1) {
					iVar2 = 0;
					while (iVar2 < 15) {
						iVar3 = func_214(iParam0, iVar5, 14, uVar60[iVar1], iVar2, 0);
						if (iVar3 != -99) {
							func_112(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14) {
		func_222(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4);
		if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1)) {
			func_223(iVar5, iParam1, iParam2, 1);
		}
		if (Global_69523[1 /*14*/].f_12 == 0) {
			func_210(iParam0);
		}
		if (iParam5 == 0) {
			if (Global_69522 == 1) {
				iVar2 = 0;
				while (iVar2 < 15) {
					iVar3 = func_214(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99) {
						func_112(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
		}
	}
	else {
		if (iParam1 == 11) {
			if (iParam5 == 0) {
				iVar70 = -1;
				if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6) &&
					dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, -1996375172, 11)) {
					ped::_0xCC9682B8951C5229(iParam0, Global_1316390, Global_1316391, Global_1316392, 0);
					ped::_0xCC9682B8951C5229(iParam0, Global_1316390, Global_1316391, Global_1316392, 1);
					ped::_0xCC9682B8951C5229(iParam0, Global_1316390, Global_1316391, Global_1316392, 2);
					ped::_0xCC9682B8951C5229(iParam0, Global_1316390, Global_1316391, Global_1316392, 3);
				}
				iVar71 = func_95(iParam0, 11);
				iVar72 = func_95(iParam0, 8);
				iVar73 = func_95(iParam0, 4);
				iVar8 = dlc1::get_hash_name_for_component(iParam0, 8, ped::get_ped_drawable_variation(iParam0, 8),
														  ped::get_ped_texture_variation(iParam0, 8));
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar8, 240476421, 8)) {
					if (iVar5 == joaat("mp_m_freemode_01")) {
						iVar70 = func_104(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01")) {
						iVar70 = func_104(iVar5, iParam2, 11, 4);
					}
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar70, 320460654, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar70, -2017999390, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar70, -1410897066, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar70, -826135203, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar70, -1855618474, 0)) {
					}
					else {
						iVar9 = func_95(iParam0, 8);
					}
				}
				iVar74 = dlc1::get_hash_name_for_component(iParam0, 3, ped::get_ped_drawable_variation(iParam0, 3), 0);
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar74, -356646862, 0)) {
					iVar75 = func_209(iVar5, iVar72, iVar71, iVar73);
					if (iVar75 == -99) {
						iVar75 = func_214(iParam0, iVar5, 11, iVar71, 3, 0);
					}
					switch (iVar74) {
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar75 = 11;
						iVar70 = func_104(iVar5, iParam2, 11, 4);
						if (!dlc1::_0x341DE7ED1D2A1BFD(iVar70, -530089825, 0)) {
							iVar75 = -99;
						}
						break;
					}
					if (iVar75 != -99) {
						iVar76 = 0;
						while (iVar76 < 15) {
							if (func_208(iVar5, iVar75, iVar76) == iVar74) {
								iVar11 = iVar76;
								iVar12 = ped::get_ped_texture_variation(iParam0, 3);
							}
							iVar76++;
						}
					}
				}
				iVar70 = -1;
				if (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256 &&
					dlc1::_0x341DE7ED1D2A1BFD(func_104(iVar5, iParam2, 11, 4), -1200513218, 0)) {
					iVar71 = func_95(iParam0, 11);
					if (iVar71 >= 256) {
						iVar70 = func_104(iVar5, iVar71, 11, 4);
					}
					if (iVar71 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar70, 1965569012, 0)) {
						iVar77 = func_206(iVar5, iVar71, iParam2, ped::get_ped_texture_variation(iParam0, 11));
						if (iVar77 != -99) {
							func_112(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_69523[1 /*14*/] = {func_227(iVar5, iParam1, iParam2)};
						}
					}
				}
				else if (func_205(iVar5, iParam2)) {
					if (iVar5 == joaat("mp_m_freemode_01")) {
						if (iVar71 >= 237) {
							iVar70 = func_104(iVar5, iVar71, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01")) {
						if (iVar71 >= 256) {
							iVar70 = func_104(iVar5, iVar71, 11, 4);
						}
					}
					iVar9 = -99;
					if (!func_205(iVar5, iVar71)) {
						if (iVar5 == joaat("mp_f_freemode_01") && iVar71 >= 256 &&
							(dlc1::_0x341DE7ED1D2A1BFD(iVar70, -1200513218, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar70, 1965569012, 0))) {
						}
						else if (iVar5 == joaat("mp_f_freemode_01") && iVar71 >= 256 &&
								 (dlc1::_0x341DE7ED1D2A1BFD(iVar70, 684992453, 0) ||
								  dlc1::_0x341DE7ED1D2A1BFD(iVar70, 916636514, 0) ||
								  dlc1::_0x341DE7ED1D2A1BFD(iVar70, -1939378450, 0) ||
								  dlc1::_0x341DE7ED1D2A1BFD(iVar70, -820724897, 0) ||
								  dlc1::_0x341DE7ED1D2A1BFD(iVar70, 153792394, 0) ||
								  dlc1::_0x341DE7ED1D2A1BFD(iVar70, -872449705, 0) ||
								  dlc1::_0x341DE7ED1D2A1BFD(iVar70, 700658917, 0) ||
								  dlc1::_0x341DE7ED1D2A1BFD(iVar70, -549843760, 0) ||
								  dlc1::_0x341DE7ED1D2A1BFD(iVar70, 1830529185, 0))) {
						}
						else {
							iVar78 = func_206(iVar5, iVar71, iParam2, ped::get_ped_texture_variation(iParam0, 11));
							if (iVar78 != -99) {
								func_112(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_69523[1 /*14*/] = {func_227(iVar5, iParam1, iParam2)};
								iVar9 = -99;
							}
							else {
								if (iVar5 == joaat("mp_m_freemode_01")) {
									iVar79 = func_204(iVar5, 11, -1);
									Global_69523[1 /*14*/] = {func_227(iVar5, 11, iVar79)};
									iVar78 = func_206(iVar5, iVar79, iParam2, Global_69523[1 /*14*/].f_4);
									if (iVar78 == -99 ||
										dlc1::_0x341DE7ED1D2A1BFD(func_104(iVar5, iParam2, 11, 3), -1237899132, 0)) {
										iVar78 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01")) {
									if (dlc1::_0x341DE7ED1D2A1BFD(func_104(iVar5, iParam2, 11, 4), -1237899132, 0)) {
										iVar78 = 120;
									}
									else {
										iVar78 = 48;
									}
								}
								func_112(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_69523[1 /*14*/] = {func_227(iVar5, iParam1, iParam2)};
							}
						}
					}
					else {
						Global_69523[1 /*14*/] = {func_227(iVar5, 11, iVar71)};
						iVar80 = Global_69523[1 /*14*/].f_3;
						Global_69523[1 /*14*/] = {func_227(iVar5, 11, iParam2)};
						iVar81 = Global_69523[1 /*14*/].f_3;
						if (iVar80 != iVar81) {
							Global_69523[1 /*14*/] = {func_227(iVar5, 8, iVar72)};
							iVar82 = Global_69523[1 /*14*/].f_4;
							iVar83 = func_203(iVar5, iVar72, iVar82);
							if (iVar83 == -99) {
								iVar84 = iVar72;
								if (iVar5 == joaat("mp_m_freemode_01")) {
									iVar85 = func_104(iVar5, iParam2, 11, 3);
									if (iParam2 >= 96 && iParam2 <= 107 || func_202(iVar85) == 6 ||
										dlc1::_0x341DE7ED1D2A1BFD(iVar85, -1237899132, 0)) {
										iVar83 = func_204(iVar5, 11, -1);
										Global_69523[1 /*14*/] = {func_227(iVar5, 11, iVar83)};
										iVar84 = func_206(iVar5, iVar83, iParam2, Global_69523[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && (iVar72 == 32 || iVar72 == 33)) {
									if (!dlc1::_0x341DE7ED1D2A1BFD(func_104(iVar5, iParam2, 11, 4), -491588875, 0)) {
										iVar83 = func_204(iVar5, 11, -1);
										Global_69523[1 /*14*/] = {func_227(iVar5, 11, iVar83)};
										iVar84 = func_206(iVar5, iVar83, iParam2, Global_69523[1 /*14*/].f_4);
									}
								}
								iVar86 = -1;
								if (iVar5 == joaat("mp_m_freemode_01")) {
									iVar86 = func_104(iVar5, iVar72, 8, 3);
								}
								else if (iVar5 == joaat("mp_f_freemode_01")) {
									iVar86 = func_104(iVar5, iVar72, 8, 4);
								}
								if (dlc1::_0x341DE7ED1D2A1BFD(iVar86, -316495692, 0)) {
									iVar83 = func_204(iVar5, 11, -1);
									Global_69523[1 /*14*/] = {func_227(iVar5, 11, iVar83)};
									iVar84 = func_206(iVar5, iVar83, iParam2, Global_69523[1 /*14*/].f_4);
								}
							}
							else {
								iVar84 = func_206(iVar5, iVar83, iParam2, iVar82);
								if (iVar5 == joaat("mp_m_freemode_01")) {
									if (dlc1::_0x341DE7ED1D2A1BFD(func_104(iVar5, iParam2, 11, 3), -1719338724, 0)) {
										if (!func_201(iVar5, func_95(iParam0, 4), iVar83)) {
											iVar84 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01")) {
									if (dlc1::_0x341DE7ED1D2A1BFD(func_104(iVar5, iParam2, 11, 4), -1719338724, 0)) {
										if (!func_201(iVar5, func_95(iParam0, 4), iVar83)) {
											iVar84 = 48;
										}
									}
								}
							}
							if (iVar84 != -99) {
								func_112(iParam0, 8, iVar84, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01")) {
								iVar83 = func_204(iVar5, 11, -1);
								Global_69523[1 /*14*/] = {func_227(iVar5, 11, iVar83)};
								iVar84 = func_206(iVar5, iVar83, iParam2, Global_69523[1 /*14*/].f_4);
								if (iVar84 == -99) {
									iVar84 = 240;
								}
								func_112(iParam0, 8, iVar84, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01")) {
								func_112(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_69523[1 /*14*/] = {func_227(iVar5, iParam1, iParam2)};
						}
					}
				}
				else {
					func_198(iVar5, iParam2);
					if (!iParam13) {
						ped::set_ped_component_variation(iParam0, 10, 0, 0,
														 ped::get_ped_palette_variation(iParam0, 10));
					}
				}
			}
			func_216(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0) {
				iVar6 = func_209(iVar5, func_221(iParam0, 8, -1), iParam2, func_221(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2) {
			if (iParam5 == 0) {
				if (iParam8 == -1) {
					iParam8 = func_16(2145, iParam10, 0);
				}
				if (iParam9 == -1) {
					iParam9 = func_16(2152, iParam10, 0);
				}
				ped::_set_ped_hair_color(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0) {
				func_158(iParam0, iParam2, iParam10, iParam11);
			}
		}
		else if (iParam1 == 8) {
			func_216(iParam0, iParam1, iParam2, iParam6, 0);
			iVar87 = func_95(iParam0, 11);
			if (func_205(iVar5, iVar87)) {
				iVar88 = func_203(iVar5, iParam2, Global_69523[1 /*14*/].f_4);
				func_198(iVar5, iVar88);
			}
			if (iParam5 == 0) {
				iVar6 = func_209(iVar5, iParam2, func_95(iParam0, 11), func_95(iParam0, 4));
			}
		}
		else if (iParam1 == 9) {
			if (iParam2 >= 1 && iParam2 <= 41) {
				iVar89 = func_95(iParam0, 7);
				if (!func_155(iVar5, iVar89, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99)) {
					ped::set_ped_component_variation(iParam0, func_25(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1) {
			if (iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26 &&
					dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, -921710083, 0) ||
				iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26 &&
					dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, -921710083, 0)) {
				iVar90 = func_16(2092, iParam10, 0);
				iVar91 = func_16(2093, iParam10, 0);
				iVar92 = func_16(2094, iParam10, 0);
				fVar93 = func_154(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01")) {
					ped::set_ped_head_blend_data(iParam0, 0, 0, 0, iVar90, iVar91, iVar92, 0f, fVar93, 0f, 0);
				}
				else if (iVar5 == joaat("mp_f_freemode_01")) {
					ped::set_ped_head_blend_data(iParam0, 21, 0, 0, iVar90, iVar91, iVar92, 0f, fVar93, 0f, 0);
				}
				iVar94 = 0;
				while (iVar94 < 20) {
					ped::_set_ped_face_feature(iParam0, iVar94, 0f);
					iVar94++;
				}
			}
			else {
				func_138(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4) {
			iVar95 = func_95(iParam0, 11);
			iVar96 = func_95(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01")) {
				if (dlc1::_0x341DE7ED1D2A1BFD(func_104(iVar5, iVar95, 11, 3), -1719338724, 0)) {
					if (!func_201(iVar5, iParam2, func_203(iVar5, iVar96, 0))) {
						func_112(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_69523[1 /*14*/] = {func_227(iVar5, iParam1, iParam2)};
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01")) {
				if (dlc1::_0x341DE7ED1D2A1BFD(func_104(iVar5, iVar95, 11, 4), -1719338724, 0)) {
					if (!func_201(iVar5, iParam2, func_203(iVar5, iVar96, 0))) {
						func_112(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_69523[1 /*14*/] = {func_227(iVar5, iParam1, iParam2)};
					}
				}
			}
			if (iParam5 == 0) {
				iVar6 = func_209(iVar5, func_95(iParam0, 8), func_95(iParam0, 11), iParam2);
			}
			iVar97 = dlc1::get_hash_name_for_component(iParam0, 3, ped::get_ped_drawable_variation(iParam0, 3), 0);
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar97, -356646862, 0)) {
				iVar98 = func_209(iVar5, iVar96, iVar95, iParam2);
				if (iVar98 == -99) {
					iVar98 = func_214(iParam0, iVar5, 11, iVar95, 3, 0);
				}
				switch (iVar97) {
				case 1165919867:
				case 1606204151:
				case 1774276352:
				case 1934254610:
				case 980775017:
				case 399321881:
					iVar98 = 11;
					iVar99 = func_104(iVar5, iParam2, 11, 4);
					if (!dlc1::_0x341DE7ED1D2A1BFD(iVar99, -530089825, 0)) {
						iVar98 = -99;
					}
					break;
				}
				if (iVar98 != -99) {
					iVar100 = 0;
					while (iVar100 < 15) {
						if (func_208(iVar5, iVar98, iVar100) == iVar97) {
							iVar11 = iVar100;
							iVar12 = ped::get_ped_texture_variation(iParam0, 3);
						}
						iVar100++;
					}
				}
			}
		}
		if (iParam4 == -1) {
			ped::set_ped_component_variation(iParam0, func_25(iParam1), Global_69523[1 /*14*/].f_3,
											 Global_69523[1 /*14*/].f_4,
											 ped::get_ped_palette_variation(iParam0, func_25(iParam1)));
		}
		else {
			ped::set_ped_component_variation(iParam0, func_25(iParam1), Global_69523[1 /*14*/].f_3,
											 Global_69523[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0) {
			if (Global_69522 == 1) {
				iVar2 = 0;
				while (iVar2 < 15) {
					iVar3 = func_214(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99) {
						func_112(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3) {
							switch (Global_2621444) {
							case 1165919867:
							case 1606204151:
							case 1774276352:
							case 1934254610:
							case 980775017:
							case 399321881: iVar11 = -1; break;
							}
						}
						else if (iVar2 == 8) {
							if (iVar6 != -99) {
								iVar6 = func_209(iVar5, iVar3, func_95(iParam0, 11), func_95(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8) {
				if (func_137(iParam0)) {
					iVar101 = func_136(iVar5, iParam1, iParam2);
					if (iVar101 > 0) {
						iVar101 += ped::get_ped_texture_variation(iParam0, 9);
						if (!func_135(iParam0, 9, iVar101)) {
							func_112(iParam0, 9, iVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else {
						func_112(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar8 = dlc1::get_hash_name_for_component(iParam0, 8, ped::get_ped_drawable_variation(iParam0, 8),
															  ped::get_ped_texture_variation(iParam0, 8));
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar8, 240476421, 8)) {
						func_112(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
				iVar102 = func_16(2034, -1, 0);
				if (ped::get_ped_drawable_variation(iParam0, 5) != 0) {
					ped::set_ped_component_variation(iParam0, 5, func_131(iParam0, iVar102), func_130(iParam0, iVar102),
													 func_129(iParam0, iVar102));
				}
				if (iParam0 == player::player_ped_id()) {
					player::set_player_parachute_variation_override(player::player_id(), 5,
																	func_131(player::player_ped_id(), iVar102),
																	func_130(player::player_ped_id(), iVar102), 0);
					player::set_player_parachute_pack_tint_index(player::player_id(),
																 func_129(player::player_ped_id(), iVar102));
					func_126(player::player_id(), iVar102);
				}
			}
			if (iParam1 == 7) {
				if (iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92 ||
					iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55) {
					if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, -319568873, 0)) {
						func_112(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4)) {
				if (iParam1 == 11) {
					iVar103 = func_221(iParam0, 4, -1);
					iVar104 = iParam2;
				}
				else {
					iVar103 = iParam2;
					iVar104 = func_221(iParam0, 11, -1);
				}
				if (func_125(iVar5, 11, iVar104, -1)) {
					if (!func_124(iVar5, 4, iVar103, -1)) {
						if (func_123(iVar5, 4, iVar103, &iVar105)) {
							func_112(iParam0, 4, iVar105, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_124(iVar5, 4, iVar103, -1)) {
					if (func_122(iVar5, 4, iVar103, &iVar105)) {
						func_112(iParam0, 4, iVar105, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6) {
				iVar106 = ped::get_ped_drawable_variation(iParam0, 6);
				iVar107 = ped::get_ped_texture_variation(iParam0, 6);
				iVar108 = dlc1::get_hash_name_for_component(iParam0, 6, iVar106, iVar107);
				iVar109 = ped::get_ped_drawable_variation(iParam0, 4);
				iVar110 = ped::get_ped_texture_variation(iParam0, 4);
				iVar111 = dlc1::get_hash_name_for_component(iParam0, 4, iVar109, iVar110);
				iVar112 = func_95(iParam0, 4);
				iVar113 = func_95(iParam0, 6);
				if (func_121(iVar5, iVar108)) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar108, 1812005517, 0) != func_120(iVar5, iVar112, iVar108)) {
						iVar114 = dlc1::_0xC17AD0E5752BECDA(iVar108);
						iVar115 = 0;
						while (iVar115 < iVar114) {
							dlc1::get_variant_component(iVar108, iVar115, &iVar116, &uVar117, &iVar118);
							if (iVar118 == 6) {
								if (iVar116 != 0 && iVar116 != 1849449579) {
									if (iVar5 == joaat("mp_m_freemode_01")) {
										iVar113 = func_84(iVar5, iVar116, 6, 3);
										iVar108 = iVar116;
										func_112(iParam0, 6, iVar113, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01")) {
										iVar113 = func_84(iVar5, iVar116, 6, 4);
										iVar108 = iVar116;
										func_112(iParam0, 6, iVar113, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar115 = iVar114 + 1;
								}
							}
							iVar115++;
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar111, -2042643157, 0) != func_119(iVar5, iVar113, iVar111)) {
						iVar119 = dlc1::_0xC17AD0E5752BECDA(iVar111);
						iVar120 = 0;
						while (iVar120 < iVar119) {
							dlc1::get_variant_component(iVar111, iVar120, &iVar121, &uVar122, &iVar123);
							if (iVar123 == 4) {
								if (iVar121 != 0 && iVar121 != 1849449579) {
									if (iVar5 == joaat("mp_m_freemode_01")) {
										iVar112 = func_84(iVar5, iVar121, 4, 3);
										iVar111 = iVar121;
										func_112(iParam0, 4, iVar112, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01")) {
										iVar112 = func_84(iVar5, iVar121, 4, 4);
										iVar111 = iVar121;
										func_112(iParam0, 4, iVar112, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar120 = iVar119 + 1;
								}
							}
							iVar120++;
						}
					}
				}
				if (func_121(iVar5, iVar111)) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar111, -2042643157, 0) != func_119(iVar5, iVar113, iVar111)) {
						iVar124 = dlc1::_0xC17AD0E5752BECDA(iVar111);
						iVar125 = 0;
						while (iVar125 < iVar124) {
							dlc1::get_variant_component(iVar111, iVar125, &iVar126, &uVar127, &iVar128);
							if (iVar128 == 4) {
								if (iVar126 != 0 && iVar126 != 1849449579) {
									if (iVar5 == joaat("mp_m_freemode_01")) {
										iVar112 = func_84(iVar5, iVar126, 4, 3);
										iVar111 = iVar126;
										func_112(iParam0, 4, iVar112, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01")) {
										iVar112 = func_84(iVar5, iVar126, 4, 4);
										iVar111 = iVar126;
										func_112(iParam0, 4, iVar112, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar125 = iVar124 + 1;
								}
							}
							iVar125++;
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar108, 1812005517, 0) != func_120(iVar5, iVar112, iVar108)) {
						iVar129 = dlc1::_0xC17AD0E5752BECDA(iVar108);
						iVar130 = 0;
						while (iVar130 < iVar129) {
							dlc1::get_variant_component(iVar108, iVar130, &iVar131, &uVar132, &iVar133);
							if (iVar133 == 6) {
								if (iVar131 != 0 && iVar131 != 1849449579) {
									if (iVar5 == joaat("mp_m_freemode_01")) {
										iVar113 = func_84(iVar5, iVar131, 6, 3);
										iVar108 = iVar131;
										func_112(iParam0, 6, iVar113, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01")) {
										iVar113 = func_84(iVar5, iVar131, 6, 4);
										iVar108 = iVar131;
										func_112(iParam0, 6, iVar113, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar130 = iVar129 + 1;
								}
							}
							iVar130++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1) {
				func_210(iParam0);
				iVar134 = ped::get_ped_drawable_variation(iParam0, 1);
				iVar135 = ped::get_ped_texture_variation(iParam0, 1);
				iVar136 = dlc1::get_hash_name_for_component(iParam0, 1, iVar134, iVar135);
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar136, 838607662, 0)) {
					iVar3 = func_214(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99) {
						func_112(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_214(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99) {
						func_112(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2) {
		if (func_113(iParam0, &iVar4)) {
			func_112(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !iParam13) {
		func_112(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar9 != -99) {
		func_112(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99) {
		func_112(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar11 != -1) {
		iVar137 = func_208(iVar5, func_221(iParam0, 3, -1), iVar11);
		if (iVar137 != -1) {
			if (iVar5 == joaat("mp_m_freemode_01")) {
				iVar10 = func_84(iVar5, iVar137, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01")) {
				iVar10 = func_84(iVar5, iVar137, 3, 4);
			}
			if (iVar10 != -99) {
				iVar10 += iVar12;
				func_112(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_69522--;
	return 1;
}

// Position - 0x1D171
bool func_113(int iParam0, int *iParam1) {
	int iVar0;
	int iVar1;

	*iParam1 = func_221(player::player_ped_id(), 2, -1);
	if (func_16(748, Global_69521, 0) != -99 && func_116()) {
		if (func_115() == 4) {
			return true;
		}
		if (func_16(748, Global_69521, 0) == 0 && func_16(749, Global_69521, 0) == 0) {
			if (func_114(161, Global_69521)) {
				if (func_16(2045, Global_69521, 0) == 0) {
					return false;
				}
			}
			else if (func_16(747, Global_69521, 0) == 0) {
				return false;
			}
		}
		iVar0 = func_16(748, Global_69521, 0);
		iVar1 = func_16(749, Global_69521, 0);
		if (!func_135(iParam0, iVar1, iVar0)) {
			if (func_114(161, Global_69521)) {
				*iParam1 = func_16(2045, Global_69521, 0);
			}
			else {
				*iParam1 = func_16(747, Global_69521, 0);
			}
			func_260(748, -99, Global_69521, 1, 0);
			func_260(749, 2, Global_69521, 1, 0);
			return true;
		}
	}
	return false;
}

// Position - 0x1D285
bool func_114(int iParam0, int iParam1) {
	int iVar0;
	var uVar1;

	iVar0 = Global_2522581[iParam0 /*3*/][func_17(iParam1)];
	if (stats::stat_get_bool(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return false;
}

// Position - 0x1D2B1
int func_115() { return Global_1315167; }

// Position - 0x1D2BD
int func_116() {
	if (func_118() && func_117(0)) {
		return 1;
	}
	return 0;
}

// Position - 0x1D2DB
var func_117(int iParam0) { return Global_1312373[iParam0]; }

// Position - 0x1D2EB
var func_118() { return func_117(func_18() + 1); }

// Position - 0x1D2FD
int func_119(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = -1;
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		if (iParam1 >= 256) {
			iVar0 = func_104(iParam0, iParam1, 6, 3);
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iParam2, -56268180, 0)) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, -713698407, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 140732128, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 2106216756, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -849839091, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1446333198, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -269266203, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 201427653, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 967829025, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -685039259, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1266557933, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -364248070, 0)) {
				return 1;
			}
		}
		break;

	case joaat("mp_f_freemode_01"): break;
	}
	return 0;
	return 0;
}

// Position - 0x1D410
int func_120(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	iVar1 = -1;
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		if (iParam1 >= 256) {
			iVar0 = func_104(iParam0, iParam1, 4, 3);
			iVar1 = func_202(iVar0);
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iParam2, -364248070, 0) || dlc1::_0x341DE7ED1D2A1BFD(iParam2, -56268180, 0)) {
			iVar2 = 1;
			if (iParam1 >= 32 && iParam1 <= 47 || iParam1 >= 64 && iParam1 <= 79 || iParam1 >= 96 && iParam1 <= 111 ||
				iParam1 >= 176 && iParam1 <= 191 || iParam1 >= 192 && iParam1 <= 207 ||
				iParam1 >= 224 && iParam1 <= 239 || iParam1 >= 240 && iParam1 <= 255 || iVar1 == 2 || iVar1 == 4 ||
				iVar1 == 6 || iVar1 == 11 || iVar1 == 12 || iVar1 == 14 || iVar1 == 15 ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -269266203, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 201427653, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 967829025, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -685039259, 0)) {
				iVar2 = 0;
			}
			switch (iVar0) {
			case -439764935:
			case 1858824227:
			case -44268217:
			case 301706885:
			case 1283072893:
			case -1590178565:
			case 1995307108:
			case 1029014836:
			case -365568266:
			case -138446327:
			case -2034722819:
			case -1219513062:
			case 153704652:
			case 356276239:
			case 586511233:
			case 1558996842:
			case 1183988406:
			case 1000678684:
			case 761792674:
			case -145679239:
			case 686423978:
			case -763407658:
			case 74266289:
			case 987390769:
			case 1591372991:
			case 1834027448:
			case 913054691:
			case 1142372153:
			case -1698011990:
			case -1443101939:
			case 2133699953:
			case -1924511318:
			case -475531676:
			case -237137197:
			case 754461254:
			case -1155840382:
			case 629180074:
			case 859251223:
			case 1610316715:
			case 901392169:
			case -92983136:
			case 1346362420:
			case 485782942:
			case 312004063:
			case 6695290:
			case 1724446270:
			case -448105673:
			case -611098679:
			case -1111088081:
			case -1406369540:
			case -1912159043:
			case 2076516410:
			case 1919618438:
			case 45227112:
			case -2129094253:
			case -421370587:
			case -675363106: iVar2 = 0; break;
			}
			return iVar2;
		}
		break;

	case joaat("mp_f_freemode_01"):
		if (iParam1 >= 256) {
			iVar0 = func_104(iParam0, iParam1, 4, 4);
			iVar1 = func_202(iVar0);
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iParam2, -364248070, 0) || dlc1::_0x341DE7ED1D2A1BFD(iParam2, -56268180, 0)) {
			if (iParam1 >= 16 && iParam1 <= 31 || iParam1 >= 48 && iParam1 <= 63 || iParam1 >= 96 && iParam1 <= 111 ||
				iVar1 == 1 || iVar1 == 3 || iVar1 == 6 || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1863955539, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 2106216756, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -761463976, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 684992453, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 916636514, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1939378450, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 264959411, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1127835965, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1119232689, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1207283343, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -849839091, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -2088146832, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1446333198, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -430330349, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1103045158, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1055526375, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -2020757158, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1325813684, 0)) {
				return 1;
			}
		}
		break;
	}
	return 0;
}

// Position - 0x1D8F6
bool func_121(int iParam0, int iParam1) {
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		if (dlc1::_0x341DE7ED1D2A1BFD(iParam1, -364248070, 0) || dlc1::_0x341DE7ED1D2A1BFD(iParam1, -56268180, 0)) {
			return true;
		}
		break;

	case joaat("mp_f_freemode_01"):
		if (dlc1::_0x341DE7ED1D2A1BFD(iParam1, -364248070, 0) || dlc1::_0x341DE7ED1D2A1BFD(iParam1, -56268180, 0)) {
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x1D962
bool func_122(int iParam0, int iParam1, int iParam2, int *iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;

	switch (iParam0) {
	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 4:
			if (iParam2 >= 256) {
				iVar0 = func_104(iParam0, iParam2, iParam1, 4);
				if (iVar0 != -1) {
					iVar1 = dlc1::_0xC17AD0E5752BECDA(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1) {
						dlc1::get_variant_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 4) {
							if (iVar3 != 0 && iVar3 != 1849449579) {
								if (!dlc1::_0x341DE7ED1D2A1BFD(iVar3, -1100807313, 0)) {
									*iParam3 = func_84(iParam0, iVar3, iParam1, 4);
									return true;
								}
							}
						}
						iVar2++;
					}
				}
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x1DA0B
bool func_123(int iParam0, int iParam1, int iParam2, int *iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;

	switch (iParam0) {
	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 4:
			if (iParam2 >= 256) {
				iVar0 = func_104(iParam0, iParam2, iParam1, 4);
				if (iVar0 != -1) {
					iVar1 = dlc1::_0xC17AD0E5752BECDA(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1) {
						dlc1::get_variant_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 4) {
							if (iVar3 != 0 && iVar3 != 1849449579) {
								if (dlc1::_0x341DE7ED1D2A1BFD(iVar3, -1100807313, 0)) {
									*iParam3 = func_84(iParam0, iVar3, iParam1, 4);
									return true;
								}
							}
						}
						iVar2++;
					}
				}
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x1DAB3
bool func_124(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 4:
			if (iParam2 >= 256) {
				if (iParam3 == -1) {
					iParam3 = func_104(iParam0, iParam2, 4, 4);
				}
				if (dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1100807313, 0)) {
					return true;
				}
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x1DB09
bool func_125(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 11:
			if (iParam2 >= 256) {
				if (iParam3 == -1) {
					iParam3 = func_104(iParam0, iParam2, 11, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -530089825, 0);
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x1DB5C
void func_126(int iParam0, int iParam1) {
	if (func_128()) {
		if (iParam1 > 46) {
			player::set_player_parachute_pack_model_override(iParam0, 1766664132);
		}
		else if (iParam1 > 26) {
			player::set_player_parachute_pack_model_override(iParam0, 1277738372);
		}
		else if (iParam1 > 0) {
			player::set_player_parachute_pack_model_override(iParam0, 1269440357);
		}
		else {
			player::clear_player_parachute_pack_model_override(iParam0);
		}
	}
	else if (func_127()) {
		if (iParam1 > 0) {
			player::set_player_parachute_pack_model_override(iParam0, 1479397204);
		}
		else {
			player::clear_player_parachute_pack_model_override(iParam0);
		}
	}
}

// Position - 0x1DBD3
bool func_127() { return dlc2::is_dlc_present(1428761799); }

// Position - 0x1DBE4
bool func_128() { return dlc2::is_dlc_present(-1005876368); }

// Position - 0x1DBF5
int func_129(int iParam0, int iParam1) { return 0; }

// Position - 0x1DBFE
int func_130(int iParam0, int iParam1) {
	if (iParam1 > 62) {
		return iParam1 - 63;
	}
	if (iParam1 > 51) {
		return iParam1 - 52;
	}
	if (iParam1 > 46) {
		return iParam1 - 47;
	}
	if (iParam1 > 26) {
		return iParam1 - 27;
	}
	if (iParam1 > 0) {
		return iParam1 - 1;
	}
	return iParam1;
}

// Position - 0x1DC60
int func_131(int iParam0, int iParam1) {
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = ped::get_ped_drawable_variation(iParam0, 11);
	if (ped::get_ped_drawable_variation(iParam0, 9) != 0) {
		bVar1 = true;
	}
	iVar2 = entity::get_entity_model(iParam0);
	iVar3 = dlc1::get_hash_name_for_component(iParam0, 8, ped::get_ped_drawable_variation(iParam0, 8),
											  ped::get_ped_texture_variation(iParam0, 8));
	if (dlc1::_0x341DE7ED1D2A1BFD(iVar3, 240476421, 8)) {
		return func_134(iParam0, iParam1);
	}
	iVar4 = 0;
	if (iParam1 > 61) {
		iVar4 = 50;
	}
	else if (iParam1 > 51) {
		return iParam1;
	}
	else if (iParam1 > 46) {
		iVar4 = 30;
	}
	else if (iParam1 > 26) {
		iVar4 = 20;
	}
	else if (iParam1 > 0) {
		iVar4 = 9;
	}
	else {
		iVar4 = 0;
	}
	if (iVar0 > 15) {
		iVar5 = dlc1::get_hash_name_for_component(iParam0, 11, iVar0, ped::get_ped_texture_variation(iParam0, 11));
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 655081063, 0)) {
			if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -530089825, 0)) {
			if (bVar1) {
				return 6 + iVar4;
			}
			else {
				return 6 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -713698407, 0)) {
			if (iParam1 > 46) {
				return 39;
			}
			else if (iParam1 > 26) {
				return 29;
			}
			else if (iParam1 > 0) {
				return 18;
			}
			else {
				return 19;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1882920022, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 2 + iVar4;
				}
			}
			else if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -317649054, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 2 + iVar4;
				}
			}
			else if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1536649085, 0)) {
			iVar6 = func_133(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01")) {
				switch (iVar6) {
				case 0: return 2 + iVar4;

				case 2:
					if (iParam1 > 46) {
						return 39;
					}
					else if (iParam1 > 26) {
						return 29;
					}
					else if (iParam1 > 0) {
						return 18;
					}
					else {
						return 19;
					}
					break;

				default: iVar0 = func_202(iVar5); break;
				}
			}
			else {
				switch (iVar6) {
				case 2: return 7 + iVar4;

				default: iVar0 = func_202(iVar5); break;
				}
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 248194463, 0)) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1347486026, 0)) {
				return 3 + iVar4;
			}
			else {
				return 7 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 396458410, 0)) {
			iVar7 = func_132(iVar5, 0);
			switch (iVar7) {
			case 4:
				if (iParam1 > 46) {
					return 39;
				}
				else if (iParam1 > 26) {
					return 28;
				}
				else if (iParam1 > 0) {
					return 17;
				}
				else {
					return 8;
				}
				break;

			case 5:
				if (iVar2 == joaat("mp_m_freemode_01")) {
				}
				else {
					return 8 + iVar4;
				}
				break;

			case 6:
				if (iVar2 == joaat("mp_m_freemode_01")) {
				}
				else {
					return 8 + iVar4;
				}
				break;

			case 7:
				if (iVar2 == joaat("mp_m_freemode_01")) {
				}
				else {
					return 8 + iVar4;
				}
				break;

			case 11:
				if (iVar2 == joaat("mp_m_freemode_01")) {
				}
				else {
					return 8 + iVar4;
				}
				break;

			case 12:
				if (iVar2 == joaat("mp_m_freemode_01")) {
				}
				else {
					return 8 + iVar4;
				}
				break;

			case 14:
				if (iParam1 > 46) {
					return 39;
				}
				else if (iParam1 > 26) {
					return 29;
				}
				else if (iParam1 > 0) {
					return 18;
				}
				else {
					return 19;
				}
				break;

			default: iVar0 = func_202(iVar5); break;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -779835469, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 3 + iVar4;
				}
			}
			else if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1119232689, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -2102859770, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 2 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1784133476, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 2 + iVar4;
			}
			else if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1607949555, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1976716889, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 2099109084, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 2 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1488441032, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (iParam1 > 46) {
					return 39;
				}
				else if (iParam1 > 26) {
					return 29;
				}
				else if (iParam1 > 0) {
					return 18;
				}
				else {
					return 19;
				}
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1719167561, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1431529976, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1274099003, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1723403459, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 912543594, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1086258388, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar5, 103539798, 0) ||
				 dlc1::_0x341DE7ED1D2A1BFD(iVar5, -994703884, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 6 + iVar4;
				}
			}
			else if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 7 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 2044466679, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (iParam1 > 46) {
					return 39;
				}
				else if (iParam1 > 26) {
					return 29;
				}
				else if (iParam1 > 0) {
					return 18;
				}
				else {
					return 19;
				}
			}
			else if (bVar1) {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -2020757158, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1064262817, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 2 + iVar4;
				}
			}
			else if (bVar1) {
				return func_134(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1419806467, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 7 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1053842259, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 2 + iVar4;
				}
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1358888880, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -441291342, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -747583185, 0)) {
			if (iVar2 == joaat("mp_f_freemode_01")) {
				if (bVar1) {
					return func_134(iParam0, iParam1);
				}
				else {
					return 2 + iVar4;
				}
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1986415230, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -2088146832, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 6 + iVar4;
				}
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -785939537, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 3 + iVar4;
				}
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -872449705, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 2 + iVar4;
				}
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 700658917, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1714969731, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 2 + iVar4;
				}
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 745826556, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1055526375, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 144417099, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 492620493, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -416620954, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 3 + iVar4;
				}
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -102825006, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 2 + iVar4;
				}
			}
			else {
				return 7 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -733792105, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 7 + iVar4;
				}
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 137011325, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 3 + iVar4;
				}
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -641612092, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
			}
			else {
				return 6 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1351486939, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 2 + iVar4;
				}
			}
			else if (bVar1) {
				return func_134(iParam0, iParam1);
			}
			else {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -2119756144, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 3 + iVar4;
				}
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1507532917, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_134(iParam0, iParam1);
			}
			else {
				return 7 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 947651647, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1506370874, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1786447517, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1010805287, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1325813684, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else if (bVar1) {
				return func_134(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -549843760, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -828478571, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_134(iParam0, iParam1);
			}
			else if (bVar1) {
				return 55 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1690933245, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else if (bVar1) {
				return func_134(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1360588936, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 2136821028, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1830529185, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -269266203, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 201427653, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 967829025, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -685039259, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1266557933, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_134(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -979468724, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_134(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1813210391, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 263623295, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_134(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -309899747, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -89003918, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -747858475, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_134(iParam0, iParam1);
			}
			else {
				return func_134(iParam0, iParam1);
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 490219883, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_134(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1208450825, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_134(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 297865853, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_134(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 602650322, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_134(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 905042630, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_134(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1204125293, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_134(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 310055897, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_134(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 606713654, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_134(iParam0, iParam1);
			}
			else {
				return func_134(iParam0, iParam1);
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1831422288, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -838136846, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 655638019, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 970679185, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 83294665, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 382246252, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -99064836, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_134(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -697656159, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_134(iParam0, iParam1) + 15;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -398213037, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_134(iParam0, iParam1) + 15;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1380605304, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
			}
			else {
				return func_134(iParam0, iParam1);
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -306768813, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
			}
			else {
				return func_134(iParam0, iParam1) + 15;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -58412562, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
			}
			else {
				return func_134(iParam0, iParam1) + 15;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1711219157, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_134(iParam0, iParam1) + 15;
			}
			else {
				return func_134(iParam0, iParam1) + 15;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1466664110, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_134(iParam0, iParam1) + 15;
			}
			else {
				return func_134(iParam0, iParam1) + 15;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1968575702, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_134(iParam0, iParam1) + 15;
			}
			else {
				return func_134(iParam0, iParam1) + 15;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 245429010, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 48 + iVar4;
			}
			else {
				return func_134(iParam0, iParam1) + 15;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 15161247, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 48 + iVar4;
			}
			else {
				return 48 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1965569012, 0) && iVar2 == joaat("mp_f_freemode_01")) {
			if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 2026620439, 0) && iVar2 == joaat("mp_f_freemode_01")) {
			if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1410897066, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -2017999390, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar5, 320460654, 0) ||
				 dlc1::_0x341DE7ED1D2A1BFD(iVar5, -826135203, 0)) {
			return 7 + iVar4;
		}
		else {
			iVar0 = func_202(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01")) {
		switch (iVar0) {
		case 0:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 1:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 2:
			if (bVar1) {
				return 7 + iVar4;
			}
			else {
				return 7 + iVar4;
			}
			break;

		case 3:
			if (bVar1) {
				return 3 + iVar4;
			}
			else {
				return 3 + iVar4;
			}
			break;

		case 4:
			if (bVar1) {
				return 3 + iVar4;
			}
			else {
				return 3 + iVar4;
			}
			break;

		case 5:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 6:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
			break;

		case 7:
			if (bVar1) {
				return 3 + iVar4;
			}
			else {
				return 3 + iVar4;
			}
			break;

		case 8:
			if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 9:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 10:
			if (bVar1) {
				return 3 + iVar4;
			}
			else {
				return 3 + iVar4;
			}
			break;

		case 11:
			if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
			break;

		case 12:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 13:
			if (bVar1) {
				return 7 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
			break;

		case 14:
			if (bVar1) {
				return 6 + iVar4;
			}
			else {
				return 6 + iVar4;
			}
			break;

		case 15:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 5 + iVar4;
			}
			break;
		}
	}
	else {
		switch (iVar0) {
		case 0:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 1:
			if (bVar1) {
				return 7 + iVar4;
			}
			else {
				return 7 + iVar4;
			}
			break;

		case 2:
			if (bVar1) {
				return 4 + iVar4;
			}
			else {
				return 3 + iVar4;
			}
			break;

		case 3:
			if (bVar1) {
				return 6 + iVar4;
			}
			else {
				return 5 + iVar4;
			}
			break;

		case 4:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 5:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 6:
			if (bVar1) {
				return 7 + iVar4;
			}
			else {
				return 7 + iVar4;
			}
			break;

		case 7:
			if (bVar1) {
				return 7 + iVar4;
			}
			else {
				return 7 + iVar4;
			}
			break;

		case 8:
			if (bVar1) {
				return 7 + iVar4;
			}
			else {
				return 7 + iVar4;
			}
			break;

		case 9: return 2 + iVar4;

		case 10:
			if (bVar1) {
				return 7 + iVar4;
			}
			else {
				return 7 + iVar4;
			}
			break;

		case 11:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 12:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 13:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 14:
			if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 4 + iVar4;
			}
			break;

		case 15:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;
		}
	}
	return 1 + iVar4;
	return 0;
}

// Position - 0x1F6D9
int func_132(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = -1;
	if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 140732128, iParam1)) {
		iVar0 = 0;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1863955539, iParam1)) {
		iVar0 = 1;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 2106216756, iParam1)) {
		iVar0 = 2;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -761463976, iParam1)) {
		iVar0 = 3;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1627756587, iParam1)) {
		iVar0 = 4;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 684992453, iParam1)) {
		iVar0 = 5;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 916636514, iParam1)) {
		iVar0 = 6;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1939378450, iParam1)) {
		iVar0 = 7;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 441715397, iParam1)) {
		iVar0 = 8;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 264959411, iParam1)) {
		iVar0 = 9;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1127835965, iParam1)) {
		iVar0 = 10;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -820724897, iParam1)) {
		iVar0 = 11;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 153792394, iParam1)) {
		iVar0 = 12;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -672871169, iParam1)) {
		iVar0 = 13;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 572416369, iParam1)) {
		iVar0 = 14;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -196114988, iParam1)) {
		iVar0 = 15;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1322269404, iParam1)) {
		iVar0 = 16;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 548036233, iParam1)) {
		iVar0 = 17;
	}
	return iVar0;
}

// Position - 0x1F879
int func_133(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = -1;
	if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -870074461, iParam1)) {
		iVar0 = 0;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1174924468, iParam1)) {
		iVar0 = 1;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -868698159, iParam1)) {
		iVar0 = 2;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1177480446, iParam1)) {
		iVar0 = 3;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1347486026, iParam1)) {
		iVar0 = 4;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1655154167, iParam1)) {
		iVar0 = 5;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -2105858993, iParam1)) {
		iVar0 = 6;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1893564692, iParam1)) {
		iVar0 = 7;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1710451520, iParam1)) {
		iVar0 = 8;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1416808511, iParam1)) {
		iVar0 = 9;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1641506460, iParam1)) {
		iVar0 = 10;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 699233865, iParam1)) {
		iVar0 = 11;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 393400788, iParam1)) {
		iVar0 = 12;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 216120498, iParam1)) {
		iVar0 = 13;
	}
	return iVar0;
}

// Position - 0x1F9BD
int func_134(int iParam0, int iParam1) {
	if (iParam1 > 61) {
		return 61;
	}
	if (iParam1 > 51) {
		return 51;
	}
	if (iParam1 > 46) {
		return 51;
	}
	if (iParam1 > 26) {
		return 50;
	}
	if (iParam1 > 0) {
		return 49;
	}
	return 48;
}

// Position - 0x1FA11
bool func_135(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar25;
	int iVar35;
	var uVar36;
	int iVar46;
	int iVar47;
	var uVar48;
	var uVar49;
	int iVar50;
	struct<5> Var51;
	int *iVar68;

	if (ped::is_ped_injured(iParam0)) {
		return false;
	}
	iVar0 = entity::get_entity_model(iParam0);
	Global_69523[1 /*14*/] = {func_227(iVar0, iParam1, iParam2)};
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
		return false;
	}
	if (iParam1 == 12) {
		uVar8 = {func_88(iVar0, iParam2)};
		iVar7 = 0;
		while (iVar7 < 7) {
			switch (iVar7) {
			case 0: iVar4 = 1; break;

			case 1: iVar4 = 4; break;

			case 2: iVar4 = 6; break;

			case 3: iVar4 = 7; break;

			case 4: iVar4 = 8; break;

			case 5: iVar4 = 11; break;

			case 6: iVar4 = 13; break;
			}
			if (uVar8[iVar4] != -99) {
				if (!func_135(iParam0, iVar4, uVar8[iVar4])) {
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return false;
					if (iVar4 == 13) {
						uVar25 = {func_82(iVar0, uVar8[iVar4])};
						iVar5 = 0;
						while (iVar5 <= 8) {
							if (!func_135(iParam0, 14, uVar25[iVar5])) {
								iVar6 = 0;
								while (iVar6 <= 19) {
									Global_69523[2 /*14*/] = {func_227(iVar0, 14, iVar6)};
									if (Global_69523[2 /*14*/].f_12 == iVar5) {
										if (func_135(iParam0, 14, iVar6)) {
											if (!func_102(iVar0, iParam2, 14, iVar6, &uVar8, &Global_69523[2 /*14*/])) {
												Global_2621444 = uVar2;
												Global_2621445 = uVar3;
												return false;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else {
						iVar1 = func_95(iParam0, iVar4);
						Global_69523[2 /*14*/] = {func_227(iVar0, iVar4, iVar1)};
						if (!func_102(iVar0, iParam2, iVar4, iVar1, &uVar8, &Global_69523[2 /*14*/])) {
							Global_2621444 = uVar2;
							Global_2621445 = uVar3;
							return false;
						}
					}
				}
			}
			iVar7++;
		}
		if (uVar8[10] != 0 && uVar8[10] != 1849449579 && uVar8.f_16) {
			if (func_16(1751, Global_69521, 0) != uVar8[10]) {
				Global_2621444 = uVar2;
				Global_2621445 = uVar3;
				return false;
			}
		}
		Global_2621444 = uVar2;
		Global_2621445 = uVar3;
		return true;
	}
	else if (iParam1 == 13) {
		uVar36 = {func_82(iVar0, iParam2)};
		iVar35 = 0;
		while (iVar35 <= 8) {
			if (!func_135(iParam0, 14, uVar36[iVar35])) {
				return false;
			}
			iVar35++;
		}
		return true;
	}
	else if (iParam1 == 14) {
		if (ped::get_ped_prop_index(iParam0, Global_69523[1 /*14*/].f_12) == Global_69523[1 /*14*/].f_3 &&
			(ped::get_ped_prop_texture_index(iParam0, Global_69523[1 /*14*/].f_12) == Global_69523[1 /*14*/].f_4 ||
			 Global_69523[1 /*14*/].f_3 == -1)) {
			return true;
		}
		if (Global_69523[1 /*14*/].f_12 == 0 && gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6) &&
			dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, -1033433901, 1) && unk_0xD40AAC51E8E4C663(Global_2621444) > 0) {
			iVar50 = unk_0xD40AAC51E8E4C663(Global_2621444);
			iVar46 = 0;
			while (iVar46 < iVar50) {
				unk_0xD81B7F27BC773E66(Global_2621444, iVar46, &iVar47, &uVar48, &uVar49);
				if (iVar47 != 0 && iVar47 != 1849449579) {
					dlc1::init_shop_ped_prop(&Var51);
					dlc1::_0x5D5CAFF661DDF6FC(iVar47, &Var51);
					if (Var51.f_3 == ped::get_ped_prop_index(iParam0, Global_69523[1 /*14*/].f_12) &&
						Var51.f_4 == ped::get_ped_prop_texture_index(iParam0, Global_69523[1 /*14*/].f_12)) {
						return true;
					}
				}
				iVar46++;
			}
		}
	}
	else {
		if (Global_69523[1 /*14*/].f_3 == ped::get_ped_drawable_variation(iParam0, func_25(iParam1)) &&
			Global_69523[1 /*14*/].f_4 == ped::get_ped_texture_variation(iParam0, func_25(iParam1))) {
			return true;
		}
		if (iParam1 == 4) {
			if (func_125(iVar0, 11, func_95(iParam0, 11), -1)) {
				if (func_123(iVar0, 4, iParam2, &iVar68)) {
					return func_135(iParam0, 4, iVar68);
				}
			}
			else if (func_122(iVar0, 4, iParam2, &iVar68)) {
				return func_135(iParam0, 4, iVar68);
			}
		}
	}
	return false;
}

// Position - 0x1FE52
int func_136(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;

	if (iParam1 == 11) {
		if (iParam0 == joaat("mp_m_freemode_01")) {
			if (iParam2 >= 0 && iParam2 <= 15 || iParam2 >= 16 && iParam2 <= 31 || iParam2 >= 80 && iParam2 <= 95 ||
				iParam2 >= 140 && iParam2 <= 155 || iParam2 >= 188 && iParam2 <= 203) {
				return 1;
			}
			else if (iParam2 >= 32 && iParam2 <= 47) {
				return 6;
			}
			else if (iParam2 >= 48 && iParam2 <= 63 || iParam2 >= 64 && iParam2 <= 79 ||
					 iParam2 >= 108 && iParam2 <= 123) {
				return 11;
			}
			else if (iParam2 >= 96 && iParam2 <= 107) {
				return 41;
			}
			else if (iParam2 >= 156 && iParam2 <= 171) {
				return 36;
			}
			else if (iParam2 >= 172 && iParam2 <= 187) {
				return 31;
			}
			else if (iParam2 >= 204 && iParam2 <= 219) {
				return 16;
			}
			else if (iParam2 >= 220 && iParam2 <= 235 || iParam2 >= 124 && iParam2 <= 139) {
				return 26;
			}
			else if (iParam2 == 236) {
				return 21;
			}
			else if (iParam2 >= 237) {
				iVar0 = func_104(iParam0, iParam2, 11, 3);
				if (iVar0 != -1) {
					iVar1 = dlc1::_0xC17AD0E5752BECDA(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1) {
						dlc1::get_variant_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 9) {
							if (iVar3 != 0 && iVar3 != 1849449579) {
								return func_84(iParam0, iVar3, 9, 3);
							}
							else {
								return uVar4;
							}
						}
						iVar2++;
					}
				}
				return -99;
			}
		}
		else if (iParam0 == joaat("mp_f_freemode_01")) {
			if (iParam2 >= 0 && iParam2 <= 15 || iParam2 >= 64 && iParam2 <= 79 || iParam2 >= 176 && iParam2 <= 191 ||
				iParam2 >= 192 && iParam2 <= 207 || iParam2 >= 208 && iParam2 <= 223 ||
				iParam2 >= 240 && iParam2 <= 255) {
				return 1;
			}
			else if (iParam2 >= 16 && iParam2 <= 31 || iParam2 >= 112 && iParam2 <= 127 ||
					 iParam2 >= 128 && iParam2 <= 143) {
				return 16;
			}
			else if (iParam2 >= 32 && iParam2 <= 47) {
				return 6;
			}
			else if (iParam2 >= 48 && iParam2 <= 63) {
				return 11;
			}
			else if (iParam2 >= 96 && iParam2 <= 111 || iParam2 >= 160 && iParam2 <= 175) {
				return 21;
			}
			else if (iParam2 >= 224 && iParam2 <= 239) {
				return 26;
			}
			else if (iParam2 >= 144 && iParam2 <= 159) {
				return 0;
			}
			else if (iParam2 >= 80 && iParam2 <= 95) {
				return 31;
			}
			else if (iParam2 >= 256) {
				iVar6 = func_104(iParam0, iParam2, 11, 4);
				if (iVar6 != -1) {
					iVar7 = dlc1::_0xC17AD0E5752BECDA(iVar6);
					iVar8 = 0;
					while (iVar8 < iVar7) {
						dlc1::get_variant_component(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
						if (iVar11 == 9) {
							if (iVar9 != 0 && iVar9 != 1849449579) {
								return func_84(iParam0, iVar9, 9, 4);
							}
							else {
								return uVar10;
							}
						}
						iVar8++;
					}
				}
				return -99;
			}
		}
	}
	return -99;
}

// Position - 0x20255
bool func_137(int iParam0) {
	int iVar0;

	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = entity::get_entity_model(iParam0);
		if (iVar0 == joaat("mp_m_freemode_01")) {
			if (func_95(iParam0, 9) != 0) {
				return true;
			}
		}
		else if (iVar0 == joaat("mp_f_freemode_01")) {
			if (func_95(iParam0, 9) != 0) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x202A7
void func_138(int iParam0, int iParam1) {
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;
	int iVar20;

	if (!ped::has_ped_head_blend_finished(iParam0)) {
	}
	ped::_get_ped_head_blend_data(iParam0, &Var0);
	iVar10 = func_16(2089, iParam1, 0);
	iVar11 = func_16(2090, iParam1, 0);
	iVar12 = func_16(2091, iParam1, 0);
	iVar13 = func_16(2092, iParam1, 0);
	iVar14 = func_16(2093, iParam1, 0);
	iVar15 = func_16(2094, iParam1, 0);
	fVar16 = func_154(134, iParam1);
	fVar17 = func_154(135, iParam1);
	fVar18 = func_154(136, iParam1);
	iVar19 = func_114(160, iParam1);
	if (Var0 != iVar10 || Var0.f_1 != iVar11 || Var0.f_2 != iVar12 || Var0.f_3 != iVar13 || Var0.f_4 != iVar14 ||
		Var0.f_5 != iVar15 || Var0.f_6 != fVar16 || Var0.f_7 != fVar17 || Var0.f_8 != fVar18 || Var0.f_9 != iVar19) {
		ped::set_ped_head_blend_data(iParam0, iVar10, iVar11, iVar12, iVar13, iVar14, iVar15, fVar16, fVar17, fVar18,
									 iVar19);
		iVar20 = func_16(2095, iParam1, 0);
		if (iVar20 > 0) {
			func_139(iParam0, iParam1, 0);
		}
	}
}

// Position - 0x203E7
void func_139(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int *iVar15;

	iVar0 = 0;
	while (iVar0 < 20) {
		iVar1 = iVar0;
		iVar2 = func_153(iVar1);
		if (!iParam2) {
			fVar3 = func_154(iVar2, iParam1);
		}
		else {
			fVar3 = func_152(iVar2, iParam1);
		}
		ped::_set_ped_face_feature(iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13) {
		iVar5 = func_151(iVar4);
		iVar6 = func_150(iVar5);
		iVar7 = func_149(iVar5);
		if (iVar6 != -1 && iVar7 != -1) {
			if (!iParam2) {
				iVar10 = func_146(iVar6, iParam1, -1);
				fVar11 = func_154(iVar7, iParam1);
			}
			else {
				iVar10 = func_145(iVar6, iParam1);
				fVar11 = func_152(iVar7, iParam1);
			}
			ped::set_ped_head_overlay(iParam0, iVar5, iVar10, fVar11);
			iVar8 = func_144(iVar5);
			iVar9 = func_143(iVar5);
			if (iVar8 != -1) {
				if (!iParam2) {
					iVar13 = func_16(iVar8, iParam1, 0);
					iVar14 = func_16(iVar9, iParam1, 0);
				}
				else {
					iVar13 = func_142(iVar8, iParam1);
					iVar14 = func_142(iVar9, iParam1);
				}
				func_141(iVar13, &iVar12, &iVar15);
				ped::_set_ped_head_overlay_color(iParam0, iVar5, iVar15, iVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_140(&iParam0, iParam1, iParam2);
}

// Position - 0x20519
void func_140(int iParam0, int iParam1, bool bParam2) {
	float fVar0;

	if (!bParam2) {
		fVar0 = func_154(157, iParam1);
	}
	else {
		fVar0 = func_152(157, iParam1);
	}
	if (*iParam0 == player::player_ped_id()) {
	}
	ped::_set_ped_eye_color(*iParam0, system::round(fVar0));
}

// Position - 0x20558
void func_141(int iParam0, var *uParam1, int *iParam2) {
	int iVar0;

	*uParam1 = system::shift_right(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*iParam2 = iVar0;
}

// Position - 0x20579
int func_142(int iParam0, int iParam1) {
	int iVar0;
	var uVar1;

	iVar0 = Global_2503826[iParam0 /*3*/][func_17(iParam1)];
	if (ui::set_userids_uihidden(iVar0, &uVar1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x205A4
int func_143(int iParam0) {
	switch (iParam0) {
	case 2: return 2153;

	case 1: return 2154;

	case 5: return 2155;

	case 8: return 2156;

	case 10: return 2151;

	default:
	}
	return -1;
}

// Position - 0x205F0
int func_144(int iParam0) {
	switch (iParam0) {
	case 2: return 2146;

	case 1: return 2147;

	case 5: return 2148;

	case 8: return 2149;

	case 10: return 2150;

	default:
	}
	return -1;
}

// Position - 0x2063C
int func_145(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (iParam1 == -1) {
		iParam1 = func_18();
	}
	iVar1 = 0;
	iVar2 = 0;
	if (iParam0 >= 384 && iParam0 < 457) {
		iVar1 = stats::_get_pstat_int_hash(iParam0 - 384, 0, 1, iParam1);
		iVar2 = iParam0 - 384 - stats::_0x94F12ABF9C79E339(iParam0 - 384) * 8 * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513) {
		iVar1 = stats::_get_pstat_int_hash(iParam0 - 457, 1, 1, iParam1);
		iVar2 = iParam0 - 457 - stats::_0x94F12ABF9C79E339(iParam0 - 457) * 8 * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305) {
		iVar1 = stats::_get_pstat_int_hash(iParam0 - 1281, 0, 0, 0);
		iVar2 = iParam0 - 1281 - stats::_0x94F12ABF9C79E339(iParam0 - 1281) * 8 * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361) {
		iVar1 = stats::_get_pstat_int_hash(iParam0 - 1305, 1, 0, 0);
		iVar2 = iParam0 - 1305 - stats::_0x94F12ABF9C79E339(iParam0 - 1305) * 8 * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919) {
		iVar1 = stats::_get_tupstat_int_hash(iParam0 - 1393, 0, 1, iParam1);
		iVar2 = iParam0 - 1393 - stats::_0x94F12ABF9C79E339(iParam0 - 1393) * 8 * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393) {
		iVar1 = stats::_get_tupstat_int_hash(iParam0 - 1361, 0, 0, 0);
		iVar2 = iParam0 - 1361 - stats::_0x94F12ABF9C79E339(iParam0 - 1361) * 8 * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 3879, 0, 1, iParam1, "_NGPSTAT_INT");
		iVar2 = iParam0 - 3879 - stats::_0x94F12ABF9C79E339(iParam0 - 3879) * 8 * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 4143, 0, 0, 0, "_MP_NGPSTAT_INT");
		iVar2 = iParam0 - 4143 - stats::_0x94F12ABF9C79E339(iParam0 - 4143) * 8 * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 4399, 0, 1, iParam1, "_MP_LRPSTAT_INT");
		iVar2 = iParam0 - 4399 - stats::_0x94F12ABF9C79E339(iParam0 - 4399) * 8 * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 6413, 0, 1, iParam1, "_MP_APAPSTAT_INT");
		iVar2 = iParam0 - 6413 - stats::_0x94F12ABF9C79E339(iParam0 - 6413) * 8 * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 7262, 0, 1, iParam1, "_MP_LR2PSTAT_INT");
		iVar2 = iParam0 - 7262 - stats::_0x94F12ABF9C79E339(iParam0 - 7262) * 8 * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 7681, 0, 1, iParam1, "_MP_BIKEPSTAT_INT");
		iVar2 = iParam0 - 7681 - stats::_0x94F12ABF9C79E339(iParam0 - 7681) * 8 * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 9553, 0, 1, iParam1, "_MP_IMPEXPPSTAT_INT");
		iVar2 = iParam0 - 9553 - stats::_0x94F12ABF9C79E339(iParam0 - 9553) * 8 * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 7641, 0, 1, iParam1, "_NGDLCPSTAT_INT");
		iVar2 = iParam0 - 7641 - stats::_0x94F12ABF9C79E339(iParam0 - 7641) * 8 * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 7313, 0, 0, 0, "_MP_NGDLCPSTAT_INT");
		iVar2 = iParam0 - 7313 - stats::_0x94F12ABF9C79E339(iParam0 - 7313) * 8 * 8;
	}
	if (!ui::_0x90A6526CF0381030(iVar1, &iVar0, iVar2, 8)) {
		iVar0 = 0;
	}
	if (iParam0 == 384) {
	}
	return iVar0;
}

// Position - 0x20A34
int func_146(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == -1) {
		iParam1 = func_18();
	}
	iVar0 = 0;
	iVar1 = func_148(iParam0, iParam1);
	iVar2 = func_147(iParam0);
	if (0 != iVar1) {
		if (!stats::stat_get_masked_int(iVar1, &iVar0, iVar2, 8, iParam2)) {
			iVar0 = 0;
		}
	}
	return iVar0;
}

// Position - 0x20A7A
int func_147(int iParam0) {
	int iVar0;

	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457) {
		iVar0 = iParam0 - 384 - stats::_0x94F12ABF9C79E339(iParam0 - 384) * 8 * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513) {
		iVar0 = iParam0 - 457 - stats::_0x94F12ABF9C79E339(iParam0 - 457) * 8 * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305) {
		iVar0 = iParam0 - 1281 - stats::_0x94F12ABF9C79E339(iParam0 - 1281) * 8 * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361) {
		iVar0 = iParam0 - 1305 - stats::_0x94F12ABF9C79E339(iParam0 - 1305) * 8 * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393) {
		iVar0 = iParam0 - 1361 - stats::_0x94F12ABF9C79E339(iParam0 - 1361) * 8 * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919) {
		iVar0 = iParam0 - 1393 - stats::_0x94F12ABF9C79E339(iParam0 - 1393) * 8 * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207) {
		iVar0 = iParam0 - 4143 - stats::_0x94F12ABF9C79E339(iParam0 - 4143) * 8 * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143) {
		iVar0 = iParam0 - 3879 - stats::_0x94F12ABF9C79E339(iParam0 - 3879) * 8 * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028) {
		iVar0 = iParam0 - 4399 - stats::_0x94F12ABF9C79E339(iParam0 - 4399) * 8 * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262) {
		iVar0 = iParam0 - 6413 - stats::_0x94F12ABF9C79E339(iParam0 - 6413) * 8 * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313) {
		iVar0 = iParam0 - 7262 - stats::_0x94F12ABF9C79E339(iParam0 - 7262) * 8 * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361) {
		iVar0 = iParam0 - 7681 - stats::_0x94F12ABF9C79E339(iParam0 - 7681) * 8 * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265) {
		iVar0 = iParam0 - 9553 - stats::_0x94F12ABF9C79E339(iParam0 - 9553) * 8 * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321) {
		iVar0 = iParam0 - 7313 - stats::_0x94F12ABF9C79E339(iParam0 - 7313) * 8 * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681) {
		iVar0 = iParam0 - 7641 - stats::_0x94F12ABF9C79E339(iParam0 - 7641) * 8 * 8;
	}
	return iVar0;
}

// Position - 0x20D36
int func_148(int iParam0, int iParam1) {
	int iVar0;

	if (iParam1 == -1) {
		iParam1 = func_18();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457) {
		iVar0 = stats::_get_pstat_int_hash(iParam0 - 384, 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513) {
		iVar0 = stats::_get_pstat_int_hash(iParam0 - 457, 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305) {
		iVar0 = stats::_get_pstat_int_hash(iParam0 - 1281, 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361) {
		iVar0 = stats::_get_pstat_int_hash(iParam0 - 1305, 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393) {
		iVar0 = stats::_get_tupstat_int_hash(iParam0 - 1361, 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919) {
		iVar0 = stats::_get_tupstat_int_hash(iParam0 - 1393, 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 4143, 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 3879, 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 4399, 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 6413, 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 7262, 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 7681, 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 9553, 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 7313, 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 7641, 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

// Position - 0x20FB4
int func_149(int iParam0) {
	switch (iParam0) {
	case 3: return 90;

	case 7: return 93;

	case 0: return 87;

	case 6: return 92;

	case 2: return 89;

	case 1: return 88;

	case 4: return 91;

	case 8: return 158;

	case 9: return 159;

	case 5: return 160;

	case 10: return 163;

	case 11: return 161;

	case 12: return 162;

	default:
	}
	return -1;
}

// Position - 0x21053
int func_150(int iParam0) {
	switch (iParam0) {
	case 3: return 450;

	case 7: return 453;

	case 0: return 447;

	case 6: return 452;

	case 2: return 449;

	case 1: return 448;

	case 4: return 451;

	case 8: return 3940;

	case 9: return 3941;

	case 5: return 3942;

	case 10: return 3943;

	case 11: return 3944;

	case 12: return 3945;

	default:
	}
	return -1;
}

// Position - 0x210FF
int func_151(int iParam0) {
	switch (iParam0) {
	case 0: return 7;

	case 1: return 3;

	case 2: return 9;

	case 3: return 6;

	case 4: return 0;

	case 5: return 4;

	case 6: return 5;

	case 7: return 2;

	case 8: return 1;

	case 9: return 8;

	case 10: return 10;

	case 11: return 11;

	case 12: return 12;

	default:
	}
	return -1;
}

// Position - 0x21196
float func_152(int iParam0, int iParam1) {
	var uVar0;
	var uVar1;

	uVar0 = Global_2521893[iParam0 /*3*/][func_17(iParam1)];
	if (ui::_0x5FBD7095FE7AE57F(uVar0, &uVar1)) {
		return uVar1;
	}
	return 0f;
}

// Position - 0x211C1
int func_153(int iParam0) {
	switch (iParam0) {
	case 0: return 137;

	case 1: return 138;

	case 2: return 139;

	case 3: return 140;

	case 4: return 141;

	case 5: return 142;

	case 6: return 143;

	case 7: return 144;

	case 8: return 145;

	case 9: return 146;

	case 10: return 147;

	case 11: return 148;

	case 12: return 149;

	case 13: return 150;

	case 14: return 151;

	case 15: return 152;

	case 16: return 153;

	case 17: return 154;

	case 18: return 155;

	case 19: return 156;

	default:
	}
	return -1;
}

// Position - 0x212AD
float func_154(int iParam0, int iParam1) {
	int iVar0;
	var uVar1;

	iVar0 = Global_2521893[iParam0 /*3*/][func_17(iParam1)];
	if (stats::stat_get_float(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0f;
}

// Position - 0x212D9
int func_155(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9, int iParam10, int iParam11) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<7> Var15;
	int iVar32;

	if (iParam0 == joaat("mp_m_freemode_01")) {
		iVar1 = -1;
		iVar2 = -1;
		if (Global_2592910 == iParam1) {
			iVar2 = Global_2592909;
			iVar1 = Global_2592908;
		}
		else if (iParam1 >= 92) {
			iVar2 = func_104(iParam0, iParam1, 7, 3);
			iVar1 = func_202(iVar2);
			Global_2592910 = iParam1;
			Global_2592909 = iVar2;
			Global_2592908 = iVar1;
		}
		iVar3 = -1;
		iVar4 = -1;
		if (Global_2592913 == iParam3) {
			iVar4 = Global_2592912;
			iVar3 = Global_2592911;
		}
		else if (iParam3 >= 237) {
			iVar4 = func_104(iParam0, iParam3, 11, 3);
			iVar3 = func_202(iVar4);
			Global_2592913 = iParam3;
			Global_2592912 = iVar4;
			Global_2592911 = iVar3;
		}
		iVar5 = -1;
		iVar6 = -1;
		if (Global_2592916 == iParam4) {
			iVar6 = Global_2592915;
			iVar5 = Global_2592914;
		}
		else if (iParam4 >= 241) {
			iVar6 = func_104(iParam0, iParam4, 8, 3);
			iVar5 = func_202(iVar6);
			Global_2592916 = iParam4;
			Global_2592915 = iVar6;
			Global_2592914 = iVar5;
		}
		if (iParam3 != -99) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1855618474, 0)) {
				if (iParam1 != 0) {
					return 0;
				}
			}
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -120244486, 0)) {
			if (iParam9 != -99) {
				iVar7 = -1;
				if (iParam9 >= 327) {
					iVar7 = func_104(iParam0, iParam9, 14, 3);
				}
				if (iParam9 >= 27 && iParam9 <= 34 || iParam9 >= 75 && iParam9 <= 82 ||
					iParam9 >= 107 && iParam9 <= 114) {
					return 0;
				}
				switch (iVar7) {
				case 1411612772:
				case 1399488226:
				case 1103092621:
				case 798340921:
				case 495850282:
				case -1972900644:
				case 2016102499:
				case 1719477511:
				case 288210625:
				case -882756821:
				case -1242625979:
				case -1358792084:
				case -1854813796:
				case -1257185072:
				case -75666008:
				case -451657514:
				case -1339992339:
				case -1987638855:
				case 1148780446:
				case 1379309694:
				case 491826867:
				case 1855607109:
				case -1962767847:
				case -1654116636:
				case -1485356286:
				case -1178212449:
				case -766633809:
				case 665568109:
				case -288304716:
				case 1772824957:
				case 1533381874:
				case -2012223930:
				case 2008237453:
				case -1304118613:
				case -1543430620:
				case -854101936:
				case -1061103709:
				case -616035151:
				case 1307111925:
				case 1759289928: return 0;
				}
			}
		}
		if (iParam3 != -99) {
			if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1473812293, 0)) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1396865968, 0)) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -63750166, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -870074461, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -868698159, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1834446747, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1119232689, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -2102859770, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1784133476, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2099109084, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1488441032, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1719167561, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1274099003, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1410897066, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -826135203, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1431529976, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1723403459, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -2020757158, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1064262817, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1419806467, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1053842259, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1358888880, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -441291342, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -785939537, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1507532917, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1446333198, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 492620493, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -416620954, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -102825006, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 137011325, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1506370874, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1786447517, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1010805287, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1325813684, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -549843760, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1360588936, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1830529185, 0)) {
						return 0;
					}
					else if (func_157(iParam0, iParam3)) {
					}
					else {
						return 0;
					}
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -63750166, 0)) {
					return 0;
				}
				else if (func_157(iParam0, iParam3)) {
					return 0;
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -120244486, 0)) {
					if (iParam3 >= 188 && iParam3 <= 203 || iParam3 >= 220 && iParam3 <= 235 || iVar3 == 12 ||
						iVar3 == 14 || dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1127835965, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1506370874, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1786447517, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1010805287, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1325813684, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1360588936, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0)) {
						return 0;
					}
				}
			}
			if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -353070590, 0)) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -870074461, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -868698159, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1834446747, 0)) {
				}
				else {
					return 0;
				}
			}
		}
		if (iParam3 != -99) {
			if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, 654065530, 0)) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -7109286, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
		}
		if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, 596326873, 0)) {
			if (iParam3 != -99) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -319568873, 0)) {
					if (iParam3 >= 96 && iParam3 <= 107 || iVar3 == 6) {
						return 0;
					}
				}
				if (iParam3 == 236) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 525778571, 0)) {
						return 0;
					}
				}
				else if (iParam3 >= 172 && iParam3 <= 187 || iParam3 >= 188 && iParam3 <= 203 ||
						 iParam3 >= 204 && iParam3 <= 219 || iParam3 >= 220 && iParam3 <= 235 || iVar3 == 11 ||
						 iVar3 == 12 || iVar3 == 13 || iVar3 == 14 || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 974680318, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1625463492, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -713698407, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1843965488, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -779835469, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1086258388, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1627756587, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1021189127, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1939378450, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 441715397, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 264959411, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1127835965, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 153792394, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -672871169, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 572416369, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -196114988, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1322269404, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1655154167, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1607949555, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2099109084, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1488441032, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1719167561, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -2017999390, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1410897066, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -826135203, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1431529976, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1723403459, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1419806467, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1053842259, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1358888880, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -785939537, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -416620954, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -102825006, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 137011325, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1351486939, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -491588875, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1506370874, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1786447517, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1010805287, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1325813684, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -828478571, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0)) {
					return 0;
				}
				else if (!dlc1::_0x341DE7ED1D2A1BFD(iVar2, 525778571, 0)) {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 48 && iParam4 <= 63 || iParam4 >= 64 && iParam4 <= 79 ||
					iParam4 >= 96 && iParam4 <= 111 || iParam4 >= 112 && iParam4 <= 127 ||
					iParam4 >= 192 && iParam4 <= 207 || iParam4 >= 208 && iParam4 <= 223 || iVar5 == 3 || iVar5 == 4 ||
					iVar5 == 6 || iVar5 == 7 || iVar5 == 12 || iVar5 == 13 ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1786447517, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1010805287, 0)) {
					return 0;
				}
			}
		}
		if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -319568873, 0)) {
			if (iParam8 != -99) {
				return 0;
			}
		}
		if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -713698407, 0)) {
			if (iParam9 >= 327 && dlc1::_0x341DE7ED1D2A1BFD(func_104(iParam0, iParam9, 14, 3), -713698407, 1)) {
			}
			else if (iParam2 == 14 || iParam2 == 1 && iParam10 != 0) {
				return 0;
			}
		}
		else if (iParam9 >= 327 && dlc1::_0x341DE7ED1D2A1BFD(func_104(iParam0, iParam9, 14, 3), -713698407, 1) &&
				 iParam1 != 0) {
			return 0;
		}
		if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1119006951, 0)) {
			if (iParam3 != -99) {
				if (iParam3 >= 140 && iParam3 <= 155 || iParam3 >= 188 && iParam3 <= 203 ||
					iParam3 >= 204 && iParam3 <= 219 || iParam3 >= 220 && iParam3 <= 235 || iVar3 == 9 || iVar3 == 12 ||
					iVar3 == 13 || iVar3 == 14 || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 248194463, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 572350888, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1817355735, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -713698407, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1843965488, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 140732128, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1863955539, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1627756587, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 441715397, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 153792394, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 572416369, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2099109084, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1488441032, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1538937264, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1064262817, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1053842259, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1358888880, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -441291342, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -785939537, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1506370874, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1786447517, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1010805287, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1325813684, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -828478571, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1360588936, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 602650322, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -99064836, 0)) {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 48 && iParam4 <= 63 || iParam4 >= 64 && iParam4 <= 79 ||
					iParam4 >= 96 && iParam4 <= 111 || iParam4 >= 112 && iParam4 <= 127 ||
					iParam4 >= 144 && iParam4 <= 159 || iParam4 >= 160 && iParam4 <= 175 ||
					iParam4 >= 176 && iParam4 <= 191 || iParam4 >= 192 && iParam4 <= 207 ||
					iParam4 >= 208 && iParam4 <= 223 || iVar5 == 3 || iVar5 == 4 || iVar5 == 6 || iVar5 == 7 ||
					iVar5 == 9 || iVar5 == 10 || iVar5 == 11 || iVar5 == 12 || iVar5 == 13 ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1778265882, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1914383230, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, 1553766533, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0)) {
					return 0;
				}
			}
		}
		if (iParam1 >= 1 && iParam1 <= 3 || iVar1 == 1) {
			if (iParam5 != -99) {
				if (iParam5 != 15) {
					return 0;
				}
			}
			if (iParam3 != -99) {
				if (iParam3 != 236) {
					return 0;
				}
			}
			if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2066241403, 0)) {
				return 0;
			}
		}
		else if (iParam1 >= 4 && iParam1 <= 6 || iVar1 == 2) {
			if (iParam3 != -99) {
				if (iParam3 >= 0 && iParam3 <= 15 || iParam3 >= 16 && iParam3 <= 31 || iParam3 >= 32 && iParam3 <= 47 ||
					iParam3 >= 80 && iParam3 <= 95 || iParam3 >= 124 && iParam3 <= 139 || iVar3 == 0 || iVar3 == 1 ||
					iVar3 == 2 || iVar3 == 5 || iVar3 == 8) {
				}
				else {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 0 && iParam4 <= 15 || iParam4 >= 16 && iParam4 <= 31 || iParam4 >= 32 && iParam4 <= 47 ||
					iParam4 >= 80 && iParam4 <= 95 || iParam4 >= 128 && iParam4 <= 143 || iParam4 == 240 ||
					iVar5 == 0 || iVar5 == 1 || iVar5 == 2 || iVar5 == 5 || iVar5 == 8 || iVar5 == 15) {
				}
				else {
					return 0;
				}
			}
			else if (iParam8 != -99) {
				if (!(iParam8 >= 1 && iParam8 <= 41)) {
				}
				else {
					return 0;
				}
			}
		}
		else if (iParam1 >= 10 && iParam1 <= 25 || iVar1 == 4) {
			if (iParam3 != -99) {
				if (iParam3 >= 0 && iParam3 <= 15 || iParam3 >= 16 && iParam3 <= 31 || iParam3 >= 32 && iParam3 <= 47 ||
					iParam3 >= 80 && iParam3 <= 95 || iParam3 >= 124 && iParam3 <= 139 ||
					iParam3 >= 140 && iParam3 <= 155 || iParam3 >= 172 && iParam3 <= 187 ||
					iParam3 >= 204 && iParam3 <= 219 || iParam3 == 236 || iVar3 == 0 || iVar3 == 1 || iVar3 == 2 ||
					iVar3 == 5 || iVar3 == 8 || iVar3 == 9 || iVar3 == 11 || iVar3 == 13 || iVar3 == 15) {
				}
				else {
					return 0;
				}
			}
		}
		else if (iParam1 >= 32 && iParam1 <= 37 || iVar1 == 6) {
			if (iParam3 != -99) {
				if (iParam3 >= 96 && iParam3 <= 107 || iParam3 >= 156 && iParam3 <= 171 || iVar3 == 6 || iVar3 == 10) {
				}
				else {
					return 0;
				}
			}
		}
		else if (iParam1 >= 41 && iParam1 <= 56 || iParam1 >= 73 && iParam1 <= 88 || iVar1 == 10 || iVar1 == 12 ||
				 iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -920534092, 0)) {
			if (iParam3 != -99) {
				if (iParam3 >= 204 && iParam3 <= 219 || func_205(iParam0, iParam3) || iVar3 == 13) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1446333198, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 492620493, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1351486939, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -7109286, 0)) {
						return 0;
					}
				}
				else {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 160 && iParam4 <= 175 || iParam4 >= 208 && iParam4 <= 223 || iVar5 == 10 ||
					iVar5 == 13 || iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1778265882, 0) ||
					iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0)) {
				}
				else {
					iVar0 = func_95(iParam6, 11);
					if (iVar0 >= 204 && iVar0 <= 219 ||
						iVar0 >= 237 && func_202(func_104(iParam0, iVar0, 11, 3)) == 13) {
						return 1;
					}
					if (iParam7 == 1) {
						if (iParam4 >= 176 && iParam4 <= 191 || iVar5 == 11) {
							return 1;
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 57 && iParam1 <= 72 || iVar1 == 11) {
			if (iParam3 != -99) {
				if (iParam3 >= 204 && iParam3 <= 219 || iParam3 >= 172 && iParam3 <= 187 ||
					func_205(iParam0, iParam3) || iVar3 == 13 || iVar3 == 11) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1446333198, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 492620493, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -7109286, 0)) {
						return 0;
					}
				}
				else {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 64 && iParam4 <= 79 || iParam4 >= 96 && iParam4 <= 111 ||
					iParam4 >= 160 && iParam4 <= 175 || iParam4 >= 208 && iParam4 <= 223 || iVar5 == 4 || iVar5 == 6 ||
					iVar5 == 10 || iVar5 == 13 || iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1778265882, 0) ||
					iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0) ||
					iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0) ||
					iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, -893126917, 0) || iVar6 == 2018316953 || iVar6 == 1771468076 ||
					iVar6 == 1529567318 || iVar6 == 1299823859 || iVar6 == 1130047658) {
				}
				else {
					iVar0 = func_95(iParam6, 11);
					if (iVar0 >= 204 && iVar0 <= 219 ||
						iVar0 >= 237 && func_202(func_104(iParam0, iVar0, 11, 3)) == 13) {
						return 1;
					}
					if (iParam7 == 1) {
						if (iParam4 >= 48 && iParam4 <= 63 || iParam4 >= 112 && iParam4 <= 127 ||
							iParam4 >= 176 && iParam4 <= 191 || iVar5 == 3 || iVar5 == 7 || iVar5 == 11) {
							if (!dlc1::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0)) {
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1950939707, 0)) {
			if (iParam3 != -99) {
				if (iParam3 >= 172 && iParam3 <= 187 || iVar3 == 11 || iVar4 == -27166014 || iVar4 == -273228435 ||
					iVar4 == -2118057713 || iVar4 == -1809078812 || iVar4 == -1522415600 || iVar4 == -1212584705 ||
					iVar4 == -886664231 || iVar4 == -646500230 || iVar4 == -290891042 || iVar4 == 15400801 ||
					iVar4 == -485413449 || iVar4 == -254359230 || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0) ||
					iVar4 == 1343601766 || iVar4 == 567992305 || iVar4 == -192707261 || iVar4 == 1156347903 ||
					iVar4 == 1853344529 || iVar4 == 1597648022 || iVar4 == -1995669446) {
					if (!dlc1::_0x341DE7ED1D2A1BFD(iVar4, -7109286, 0)) {
					}
					else {
						return 0;
					}
				}
				else {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 64 && iParam4 <= 79 || iParam4 >= 96 && iParam4 <= 111 || iVar5 == 4 || iVar5 == 6 ||
					iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, -893126917, 0) || iVar6 == 2018316953 || iVar6 == 1771468076 ||
					iVar6 == 1529567318 || iVar6 == 1299823859 || iVar6 == 1130047658) {
				}
				else {
					if (iParam7 == 1) {
						if (iParam4 >= 48 && iParam4 <= 63 || iParam4 >= 112 && iParam4 <= 127 ||
							iParam4 >= 176 && iParam4 <= 191 || iVar5 == 3 || iVar5 == 7 || iVar5 == 11) {
							if (!dlc1::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0)) {
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1371423804, 0)) {
			if (iParam3 != -99) {
				if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1625463492, 0)) {
				}
				else {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0) &&
						dlc1::_0x341DE7ED1D2A1BFD(iVar2, -277681306, 0) ||
					iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0) &&
						!dlc1::_0x341DE7ED1D2A1BFD(iVar2, -277681306, 0)) {
				}
				else {
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -108328099, 0)) {
			if (iParam4 != -99) {
				if (iParam4 >= 48 && iParam4 <= 63 || iParam4 >= 112 && iParam4 <= 127 ||
					iParam4 >= 176 && iParam4 <= 191 || iVar6 == 2018316953 || iVar6 == 1771468076 ||
					iVar6 == 1529567318 || iVar6 == 1299823859 || iVar6 == 1130047658 || iVar6 == 936913256 ||
					iVar6 == -1891018679 || iVar6 == -1583940380 || iVar6 == -693410036 || iVar6 == -2129413154 ||
					iVar6 == -1280171750 || iVar6 == -971192849 || iVar6 == 389965873 || iVar6 == -1451291468 ||
					iVar6 == -50613332 || iVar6 == 318070129 || iVar6 == -1851794728 || iVar6 == 673515492 ||
					iVar6 == 889168281 || iVar6 == 1270009599 || iVar6 == 1866208765 || iVar6 == 1546649325 ||
					iVar6 == 1180816209 || iVar6 == -1305325922 || iVar6 == 242616108 || iVar6 == 1085565864 ||
					iVar6 == -1968210019 || iVar6 == 2028002304 || iVar6 == 830393657 || iVar6 == -473747009 ||
					iVar6 == 240453350 || iVar6 == 1083927410 || iVar6 == -374729298 || iVar6 == 399897093 ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, 684992453, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, 1458930564, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, 2048281121, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, 19149565, 0)) {
					if (!dlc1::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0)) {
					}
					else {
						return 0;
					}
				}
				else {
					if (iParam7 == 1) {
						if (iParam4 >= 64 && iParam4 <= 79 || iParam4 >= 96 && iParam4 <= 111 ||
							iParam4 >= 160 && iParam4 <= 175 || iVar5 == 4 || iVar5 == 6 || iVar5 == 10) {
							if (!dlc1::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0)) {
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -378906828, 0)) {
			if (iParam3 != -99) {
				if (iParam3 >= 64 && iParam3 <= 79 || iParam3 >= 156 && iParam3 <= 171 || iVar3 == 4 || iVar3 == 10 ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 470686834, 0)) {
				}
				else {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 176 && iParam4 <= 191 || iVar6 == 2018316953 || iVar6 == 1771468076 ||
					iVar6 == 1529567318 || iVar6 == 1299823859 || iVar6 == 1130047658 || iVar6 == 936913256 ||
					iVar6 == -1891018679 || iVar6 == -1583940380 || iVar6 == -693410036 || iVar6 == -2129413154 ||
					iVar6 == -1280171750 || iVar6 == -971192849 || iVar6 == 389965873 || iVar6 == -1451291468 ||
					iVar6 == -50613332 || iVar6 == 318070129 || iVar6 == -1851794728 || iVar6 == 673515492 ||
					iVar6 == 889168281 || iVar6 == 1270009599 || iVar6 == 1866208765 || iVar6 == 1546649325 ||
					iVar6 == 1180816209 || iVar6 == -374729298 || iVar6 == 399897093 ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, 684992453, 0)) {
					if (!dlc1::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0)) {
					}
					else {
						return 0;
					}
				}
				else {
					if (iParam7 == 1) {
						if (iParam4 >= 160 && iParam4 <= 175 || iVar5 == 10) {
							if (!dlc1::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0)) {
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -695703461, 0)) {
			if (iParam3 != -99) {
				if (iParam3 >= 64 && iParam3 <= 79 || iParam3 >= 188 && iParam3 <= 203 || iVar3 == 12 || iVar3 == 4 ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 470686834, 0)) {
				}
				else {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 192 && iParam4 <= 207 || func_156(iVar6) ||
					iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 310957510, 0)) {
				}
				else {
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1473812293, 0)) {
			if (iParam3 != -99) {
				if (iParam3 >= 172 && iParam3 <= 187 || iVar3 == 11) {
					return 0;
				}
				else if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1627756587, 0) ||
						 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1322269404, 0)) {
					return 0;
				}
				else if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -713698407, 0)) {
					return 0;
				}
			}
			if (iParam8 != -99) {
				if (!(iParam8 >= 1 && iParam8 <= 41)) {
				}
				else {
					return 0;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		iVar8 = -1;
		iVar9 = -1;
		if (iParam1 >= 55) {
			iVar9 = func_104(iParam0, iParam1, 7, 4);
			iVar8 = func_202(iVar9);
		}
		iVar10 = -1;
		iVar11 = -1;
		if (iParam3 >= 256) {
			iVar11 = func_104(iParam0, iParam3, 11, 4);
			iVar10 = func_202(iVar11);
		}
		iVar12 = -1;
		if (iParam9 >= 327) {
			iVar12 = func_104(iParam0, iParam9, 14, 4);
		}
		iVar13 = -1;
		iVar14 = -1;
		if (iParam4 >= 136) {
			iVar13 = func_104(iParam0, iParam4, 8, 4);
			iVar14 = func_202(iVar13);
		}
		if (iParam3 != -99) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1855618474, 0)) {
				if (iParam1 != 0) {
					return 0;
				}
			}
		}
		if (iVar9 == 281786684 || iVar9 == 653911448 || iVar9 == -1519558015) {
			if (iParam9 != -99) {
				switch (iVar12) {
				case 1446628467:
				case -1938048778:
				case 2041418586:
				case -1342898200:
				case 2026483804:
				case -1977527541:
				case -1670449242:
				case -1385031204:
				case -1088111295:
				case -1530918836:
				case -1221415631:
				case -629869643:
				case 530255864:
				case 38181873:
				case 319110510:
				case 482562282:
				case -1178170642:
				case -880726429:
				case -699776011:
				case -401873032:
				case -700496933:
				case -404429018:
				case -2134238990:
				case -2136376254:
				case 1861212367:
				case -789144321:
				case -223092615:
				case 763352592:
				case -549897852:
				case -1976889495:
				case -1410575637:
				case -428980242:
				case -1731482454:
				case -1390357480: return 0;
				}
			}
		}
		if (iParam3 != -99) {
			if (iVar9 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, -1473812293, 0)) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, 1396865968, 0)) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, -63750166, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1410897066, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, 320460654, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -826135203, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -747583185, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -416620954, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -733792105, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -641612092, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1507532917, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1360588936, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -549843760, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1830529185, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1506370874, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1786447517, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1010805287, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2136821028, 0)) {
						return 0;
					}
					else if (func_157(iParam0, iParam3)) {
					}
					else {
						return 0;
					}
				}
				else if (func_157(iParam0, iParam3)) {
					return 0;
				}
			}
			if (iVar9 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, -353070590, 0)) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, -870074461, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1174924468, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -868698159, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1769225721, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1834446747, 0)) {
				}
				else {
					return 0;
				}
			}
		}
		if (iVar9 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, -713698407, 0)) {
			if (iParam9 >= 327 && dlc1::_0x341DE7ED1D2A1BFD(func_104(iParam0, iParam9, 14, 4), -713698407, 1)) {
			}
			else if (iParam2 == 14 || iParam2 == 1 && iParam10 != 0) {
				return 0;
			}
		}
		else if (iParam9 >= 327 && dlc1::_0x341DE7ED1D2A1BFD(func_104(iParam0, iParam9, 14, 4), -713698407, 1) &&
				 iParam1 != 0) {
			return 0;
		}
		if (iVar9 != -1 &&
			(dlc1::_0x341DE7ED1D2A1BFD(iVar9, -920534092, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar9, 1537081084, 0))) {
			if (iParam2 == 11) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, 684992453, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 916636514, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1939378450, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -820724897, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 153792394, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -872449705, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1714969731, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1055526375, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 947651647, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -549843760, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1830529185, 0) || iParam3 >= 112 && iParam3 <= 127 ||
					iVar10 == 7) {
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, 700658917, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 745826556, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 144417099, 0)) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, 1537081084, 0)) {
					}
					else {
						return 0;
					}
				}
				else {
					return 0;
				}
			}
			else if (iParam2 == 8) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1553766533, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1914383230, 0)) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, -920534092, 0)) {
						if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, 441715397, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar13, 264959411, 0)) {
							if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, 1828206051, 0)) {
							}
							else {
								return 0;
							}
						}
						else if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, 1828206051, 0)) {
							return 0;
						}
					}
				}
				else {
					return 0;
				}
			}
		}
		if (iParam9 != -99) {
			if (iVar12 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar12, 1406402954, 1)) {
				if (iParam1 >= 1 && iParam1 <= 12 || iVar8 == 1 || iVar8 == 2 ||
					iVar9 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, 1406402954, 0)) {
					return 0;
				}
			}
		}
		if (iVar9 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, 596326873, 0)) {
			if (iParam3 != -99) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1358888880, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -102825006, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -733792105, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -641612092, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1507532917, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -828478571, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1360588936, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 974680318, 0)) {
					return 0;
				}
				else if (func_205(iParam0, iParam3)) {
				}
				else if (iParam3 >= 32 && iParam3 <= 47 || iParam3 >= 176 && iParam3 <= 191 || iVar10 == 2 ||
						 iVar10 == 11 || dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -761463976, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1347486026, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -939525357, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1119232689, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -2102859770, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1784133476, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1488441032, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2044466679, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -2020757158, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -430330349, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1351486939, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2030343924, 0) || iVar11 == 998321559 ||
						 iVar11 == 619380843) {
					if (!dlc1::_0x341DE7ED1D2A1BFD(iVar9, 525778571, 0)) {
						return 0;
					}
				}
				else if (iParam3 >= 48 && iParam3 <= 63 || iParam3 >= 144 && iParam3 <= 159 ||
						 iParam3 >= 224 && iParam3 <= 239 || iVar10 == 3 || iVar10 == 9 || iVar10 == 14 ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -530089825, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1965569012, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1200513218, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -713698407, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1843965488, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -55104292, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -779835469, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1086258388, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 140732128, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2106216756, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1627756587, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 441715397, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 264959411, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1127835965, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -672871169, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 572416369, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -196114988, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1607949555, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1976716889, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2099109084, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1488441032, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 320460654, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -2017999390, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1410897066, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -826135203, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1053842259, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1358888880, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -441291342, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -747583185, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1407863332, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1986415230, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -785939537, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1103045158, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -102825006, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -641612092, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1507532917, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1506370874, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1786447517, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1010805287, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2136821028, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1360588936, 0)) {
					return 0;
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, 525778571, 0)) {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 71 && iParam4 <= 86 || iVar14 == 11 ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1455992833, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 153792394, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -870074461, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1174924468, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -868698159, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1177480446, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1347486026, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1655154167, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -2105858993, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1893564692, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1710451520, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1416808511, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1641506460, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 699233865, 0) || iVar13 == -565297075 || iVar13 == 262349558 ||
					iVar13 == -917804055 || iVar13 == -1156067454 || iVar13 == -2124751863 || iVar13 == 1812836719 ||
					iVar13 == 1582116924 || iVar13 == 877452376 || iVar13 == 1117419763 || iVar13 == 732885188 ||
					iVar13 == -1037820496 || iVar13 == -79097863 || dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1119232689, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -2102859770, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1784133476, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1607949555, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1976716889, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 2099109084, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1488441032, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 2044466679, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -2020757158, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1064262817, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1419806467, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1053842259, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1358888880, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -849839091, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -2088146832, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -352447393, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -642551350, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -819569488, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -2020068325, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1786447517, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1010805287, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1325813684, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -549843760, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -269266203, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 201427653, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 967829025, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -685039259, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1266557933, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -979468724, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -58412562, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 974680318, 0)) {
					if (!dlc1::_0x341DE7ED1D2A1BFD(iVar9, 525778571, 0)) {
						return 0;
					}
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1965569012, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, 684992453, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, 916636514, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1939378450, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, 441715397, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, 264959411, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1353777856, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1207283343, 0)) {
					return 0;
				}
				else if (func_203(iParam0, iParam4, 0) != -99) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, 525778571, 0)) {
						return 0;
					}
				}
			}
			if (iParam8 != -99) {
				if (!(iParam8 >= 1 && iParam8 <= 31)) {
				}
				else {
					return 0;
				}
			}
		}
		if (iParam3 != -99) {
			if (iVar9 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, 654065530, 0)) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1351486939, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
		}
		if (iParam1 >= 13 && iParam1 <= 18 || iVar8 == 3 ||
			iVar9 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, -1320139576, 0)) {
			if (iParam3 != -99) {
				if (iParam3 >= 48 && iParam3 <= 63 || iParam3 >= 112 && iParam3 <= 127 ||
					iParam3 >= 160 && iParam3 <= 175 || iVar10 == 3 || iVar10 == 7 || iVar10 == 10 ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1882920022, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1147939952, 0)) {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 136 && dlc1::_0x341DE7ED1D2A1BFD(func_104(iParam0, iParam4, 8, 4), 1147939952, 0)) {
					return 0;
				}
			}
			else if (iParam9 != -99) {
				if (iVar12 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar12, -1320139576, 1)) {
					return 0;
				}
			}
		}
		else if (iParam1 >= 19 && iParam1 <= 24 || iVar8 == 4) {
			if (iParam3 != -99) {
				if (iParam3 >= 48 && iParam3 <= 63 || iParam3 >= 112 && iParam3 <= 127 ||
					iParam3 >= 160 && iParam3 <= 175 || iVar10 == 3 || iVar10 == 7 || iVar10 == 10 ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1882920022, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1147939952, 0)) {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 136 && dlc1::_0x341DE7ED1D2A1BFD(func_104(iParam0, iParam4, 8, 4), 1147939952, 0)) {
					return 0;
				}
			}
			else if (iParam9 != -99) {
				if (iVar12 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar12, -1320139576, 1)) {
					dlc1::_0x5D5CAFF661DDF6FC(iVar12, &Var15);
					if (Var15.f_6 == 7) {
						return 0;
					}
				}
			}
		}
		else if (iParam1 >= 25 && iParam1 <= 30 || iVar8 == 5) {
			if (iParam3 != -99) {
				if (iParam3 >= 48 && iParam3 <= 63 || iParam3 >= 112 && iParam3 <= 127 ||
					iParam3 >= 160 && iParam3 <= 175 || iVar10 == 3 || iVar10 == 7 || iVar10 == 10 ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1882920022, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1147939952, 0)) {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 136 && dlc1::_0x341DE7ED1D2A1BFD(func_104(iParam0, iParam4, 8, 4), 1147939952, 0)) {
					return 0;
				}
			}
			else if (iParam9 != -99) {
				if (iVar12 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar12, -1320139576, 1)) {
					return 0;
				}
			}
		}
		else if (iParam1 >= 31 && iParam1 <= 36 || iVar8 == 6) {
			if (iParam3 != -99) {
				if (iParam3 >= 48 && iParam3 <= 63 || iParam3 >= 144 && iParam3 <= 159 ||
					iParam3 >= 224 && iParam3 <= 239 || iVar10 == 3 || iVar10 == 9 || iVar10 == 14 ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1965569012, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1882920022, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 396458410, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -761463976, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 103539798, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1347486026, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -994703884, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1119232689, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 320460654, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -2017999390, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1410897066, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -826135203, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2044466679, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -2020757158, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1064262817, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1053842259, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1358888880, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -441291342, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -747583185, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1986415230, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -430330349, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -102825006, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -733792105, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -641612092, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1351486939, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1507532917, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2030343924, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -828478571, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1360588936, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1506370874, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1786447517, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1010805287, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2136821028, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 602650322, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 905042630, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1204125293, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1855618474, 0)) {
					return 0;
				}
			}
		}
		else if (iParam1 >= 37 && iParam1 <= 42 || iVar8 == 7 ||
				 iParam1 >= 55 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, 2083259958, 0)) {
			if (iParam3 != -99) {
				if (iParam3 >= 32 && iParam3 <= 47 || iParam3 >= 48 && iParam3 <= 63 ||
					iParam3 >= 144 && iParam3 <= 159 || iParam3 >= 224 && iParam3 <= 239 || iVar10 == 2 ||
					iVar10 == 3 || iVar10 == 9 || iVar10 == 14 ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1882920022, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 396458410, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -761463976, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 821147517, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 103539798, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1347486026, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -994703884, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1119232689, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1607949555, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 320460654, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -2017999390, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1410897066, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -826135203, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1965569012, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1064262817, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1053842259, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1358888880, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -441291342, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -747583185, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1986415230, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -430330349, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -102825006, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -733792105, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -641612092, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1351486939, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1507532917, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2030343924, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -828478571, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1360588936, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1506370874, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1786447517, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1010805287, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2136821028, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1831422288, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 974680318, 0)) {
					return 0;
				}
				else if (iParam3 >= 112 && iParam3 <= 127 || iParam3 >= 160 && iParam3 <= 175 ||
						 iParam3 >= 192 && iParam3 <= 207 || iVar10 == 7 || iVar10 == 10 || iVar10 == 12 ||
						 iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1147939952, 0) ||
						 iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1200513218, 0) ||
						 iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0) ||
						 iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1882920022, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -747583185, 0)) {
					if (iParam1 >= 55 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, 2083259958, 0)) {
						return 0;
					}
				}
			}
			else if (iParam4 != -99) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1965569012, 0)) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, 2083259958, 0)) {
						return 0;
					}
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1786447517, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1010805287, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1325813684, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -549843760, 0)) {
					return 0;
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1703203608, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1415000253, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -168336417, 0)) {
					return 0;
				}
			}
			else if (iParam9 != -99) {
				if (iVar12 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar12, -1320139576, 1)) {
					return 0;
				}
			}
		}
		else if (iParam1 >= 43 && iParam1 <= 48 || iVar8 == 8) {
			if (iParam3 != -99) {
				if (iParam3 >= 0 && iParam3 <= 15 || iParam3 >= 32 && iParam3 <= 47 || iParam3 >= 64 && iParam3 <= 79 ||
					iParam3 >= 80 && iParam3 <= 95 || iParam3 >= 144 && iParam3 <= 159 ||
					iParam3 >= 176 && iParam3 <= 191 || iParam3 >= 192 && iParam3 <= 207 ||
					iParam3 >= 208 && iParam3 <= 223 || iParam3 >= 240 && iParam3 <= 255 || iVar10 == 0 ||
					iVar10 == 2 || iVar10 == 4 || iVar10 == 5 || iVar10 == 9 || iVar10 == 11 || iVar10 == 12 ||
					iVar10 == 13 || iVar10 == 15 ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1200513218, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -530089825, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 103539798, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -994703884, 0)) {
				}
				else {
					return 0;
				}
			}
		}
		else if (iParam1 >= 49 && iParam1 <= 54 || iVar8 == 9) {
			if (iParam3 != -99) {
				if (iParam3 >= 0 && iParam3 <= 15 || iParam3 >= 64 && iParam3 <= 79 || iParam3 >= 80 && iParam3 <= 95 ||
					iParam3 >= 176 && iParam3 <= 191 || iParam3 >= 192 && iParam3 <= 207 ||
					iParam3 >= 208 && iParam3 <= 223 || iParam3 >= 240 && iParam3 <= 255 || iVar10 == 0 ||
					iVar10 == 4 || iVar10 == 5 || iVar10 == 11 || iVar10 == 12 || iVar10 == 13 || iVar10 == 15 ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1200513218, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -530089825, 0)) {
				}
				else {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, -7109286, 0)) {
					return 0;
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1786447517, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1010805287, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1325813684, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -549843760, 0)) {
					return 0;
				}
			}
			if (iParam8 != -99) {
				if (!(iParam8 >= 1 && iParam8 <= 31)) {
				}
				else {
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, 1716958480, 0)) {
			if (iParam3 != -99) {
				if (iVar11 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -747583185, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (iParam11 != -99) {
				iVar32 = -1;
				if (iParam11 >= 256) {
					iVar32 = func_104(iParam0, iParam11, 4, 4);
				}
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar32, -33031567, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
		}
	}
	return 1;
}

// Position - 0x25952
int func_156(int iParam0) {
	if (iParam0 != -1) {
		return 0;
	}
	switch (iParam0) {
	case -783649692:
	case 691352495:
	case 1313566316:
	case 451909412:
	case 1552550633:
	case -206550874:
	case 860928119:
	case -445797343:
	case 1107219923:
	case -173716332:
	case -2017140386:
	case -538304226:
	case -1235599732:
	case -592242000:
	case 1815489089:
	case -831095241:
	case 2062043045:
	case -1092100326:
	case -1065332020:
	case -1465994616:
	case -1516536717:
	case 507503642:
	case -1470397961:
	case -1392082519:
	case 264425668:
	case -88859389:
	case 560755735:
	case 157858412:
	case -593565059:
	case -513152401:
	case -286945526:
	case 2004948615: return 1;
	}
	return 0;
}

// Position - 0x25A33
bool func_157(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == joaat("mp_m_freemode_01")) {
		iVar0 = func_104(iParam0, iParam1, 11, 3);
		if (iVar0 != -1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1119232689, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -2102859770, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1784133476, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1976716889, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 2099109084, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1488441032, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1719167561, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1274099003, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1410897066, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -826135203, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1431529976, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1723403459, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 2044466679, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -2020757158, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1064262817, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1419806467, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1053842259, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1358888880, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -441291342, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -785939537, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1446333198, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 492620493, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1506370874, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1786447517, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1010805287, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1325813684, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1690933245, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1360588936, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 2136821028, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1603194928, 0)) {
				return true;
			}
		}
		if (iVar0 != -1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, -2017999390, 0)) {
				return true;
			}
		}
		return func_205(iParam0, iParam1);
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		iVar1 = func_104(iParam0, iParam1, 11, 4);
		iVar2 = -1;
		if (iVar1 != -1) {
			iVar2 = func_202(iVar1);
		}
		if (iParam1 >= 16 && iParam1 < 32 || iParam1 >= 48 && iParam1 < 64 || iParam1 >= 96 && iParam1 < 112 ||
			iParam1 >= 112 && iParam1 < 128 || iParam1 >= 128 && iParam1 < 144 || iParam1 >= 144 && iParam1 < 160 ||
			iParam1 >= 160 && iParam1 < 176 || iParam1 >= 224 && iParam1 < 240 || iVar2 == 1 || iVar2 == 3 ||
			iVar2 == 6 || iVar2 == 7 || iVar2 == 8 || iVar2 == 9 || iVar2 == 10 || iVar2 == 14 ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, -1393156190, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, 1843965488, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, 441715397, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, 264959411, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, -1410897066, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, 320460654, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, -2017999390, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, -826135203, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, -747583185, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, -102825006, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, -733792105, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, -641612092, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, -1507532917, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, -1506370874, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, -1786447517, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, -1010805287, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, -1325813684, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, 1690933245, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, 1360588936, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, 2136821028, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x25F3C
void func_158(int iParam0, int iParam1, int iParam2, bool bParam3) {
	int iVar0;
	int iVar1;

	iVar0 = entity::get_entity_model(iParam0);
	func_197(gameplay::get_hash_key("hairOverlay"), iParam0);
	iVar1 = func_196(iVar0, iParam1);
	if (iVar1 != -1) {
		if (iParam2 == -1) {
			iParam2 = Global_69521;
		}
		func_218(iVar1, 1, iParam2);
	}
	func_159(iParam0, bParam3, 0);
}

// Position - 0x25F88
void func_159(int iParam0, bool bParam1, int iParam2) {
	int iVar0;
	struct<9> Var1;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<8> Var21;
	int iVar36;

	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = Global_69521;
		ped::_clear_ped_facial_decorations(iParam0);
		iVar14 = func_195(iParam0);
		iVar15 = func_182(iParam0, 0);
		iVar16 = func_180(iParam0);
		iVar17 = func_179(iParam0);
		if (bParam1) {
			iVar16 = 1;
		}
		if (iParam2) {
			iVar16 = 0;
		}
		iVar18 = 0;
		while (iVar18 < 127) {
			if (func_172(iVar18, iVar0)) {
				if (func_164(&Var1, iVar18, iVar14, iParam0, -1)) {
					if (func_161(iParam0, &Var1, Var1.f_4, Var1.f_8, iVar15, iVar16, bParam1, iVar17)) {
						ped::_set_ped_decoration(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (func_172(123, iVar0)) {
			if (ped::_get_tattoo_zone(-1719270477, -1824026490) != 7) {
				ped::_set_ped_decoration(iParam0, -1719270477, -1824026490);
			}
		}
		iVar20 = dlc1::_get_num_decorations(iVar14);
		iVar19 = 0;
		while (iVar19 < iVar20) {
			if (dlc1::_0xFF56381874F82086(iVar14, iVar19, &Var21)) {
				if (!dlc1::_is_dlc_data_empty(Var21)) {
					iVar36 = 129 + iVar19;
					if (func_172(iVar36, iVar0)) {
						if (func_161(iParam0, &Var21.f_7, Var21.f_2, Var21.f_6, iVar15, iVar16, bParam1, iVar17)) {
							ped::_set_ped_decoration(iParam0, Var21.f_2, Var21.f_3);
							func_160(iParam0, Var21.f_2, Var21.f_3);
						}
					}
				}
			}
			iVar19++;
		}
	}
}

// Position - 0x260D8
void func_160(int iParam0, int iParam1, int iParam2) {
	switch (iParam1) {
	case -1194930348:
		switch (iParam2) {
		case -841238543: ped::_set_ped_decoration(iParam0, -1194930348, -441419962); break;

		case -1405854945: ped::_set_ped_decoration(iParam0, -1194930348, 1647997020); break;
		}
		break;

	case -777275782:
		switch (iParam2) {
		case 671171671: ped::_set_ped_decoration(iParam0, -777275782, 904519720); break;

		case 1911627074: ped::_set_ped_decoration(iParam0, -777275782, -607391498); break;
		}
		break;

	case 484754152:
		switch (iParam2) {
		case 266230635:
			ped::_set_ped_decoration(iParam0, 484754152, -588549683);
			ped::_set_ped_decoration(iParam0, 484754152, 464027076);
			break;

		case -1261787835:
			ped::_set_ped_decoration(iParam0, 484754152, -965491494);
			ped::_set_ped_decoration(iParam0, 484754152, 939374190);
			break;
		}
		break;
	}
}

// Position - 0x261CD
bool func_161(int iParam0, char *sParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6,
			  int iParam7) {
	int iVar0;
	int iVar1;

	iVar0 = entity::get_entity_model(iParam0);
	if (iParam3 == 0) {
		iVar1 = func_163(iVar0, sParam1, iParam3);
		iParam3 = gameplay::get_hash_key(func_162(iVar1));
	}
	if (iParam2 == 449512698) {
		return false;
	}
	switch (iParam3) {
	case -793495770:
	case -763917073:
	case -1409061796:
	case -2066166276:
	case 849089063:
	case 1192230427:
	case -454273031:
	case -1459967458:
	case 1548327796:
	case -1238079313:
	case 129912816:
	case -1469750959:
	case 1586504577:
	case 1753976524:
	case 1361645381:
	case -388268096:
		if (iParam4) {
			return false;
		}
		if (iParam3 == -793495770 || iParam3 == -1409061796 && iVar0 == joaat("mp_f_freemode_01") ||
			iParam3 == -2066166276 || iParam3 == 849089063 || iParam3 == 1192230427) {
			if (!iParam5) {
				if (Global_2593872 == -1) {
					if (!Global_91543.f_1456) {
						if (func_172(13, -1)) {
							return false;
						}
						else if (func_172(14, -1)) {
							return false;
						}
						else if (func_172(15, -1)) {
							return false;
						}
						else if (func_172(16, -1)) {
							return false;
						}
						else if (func_172(71, -1)) {
							return false;
						}
						else if (func_172(72, -1)) {
						}
					}
				}
				else if (Global_2593872 == 13) {
					return false;
				}
				else if (Global_2593872 == 14) {
					return false;
				}
				else if (Global_2593872 == 15) {
					return false;
				}
				else if (Global_2593872 == 16) {
					return false;
				}
				else if (Global_2593872 == 71) {
					return false;
				}
				else if (Global_2593872 == 72) {
				}
			}
		}
		else if (iParam3 == -763917073) {
			if (!iParam5) {
				if (Global_2593872 == -1) {
					if (!Global_91543.f_1456) {
						if (func_172(13, -1)) {
							return false;
						}
						else if (func_172(14, -1)) {
							return false;
						}
						else if (func_172(15, -1)) {
							return false;
						}
						else if (func_172(16, -1)) {
							return false;
						}
						else if (func_172(71, -1)) {
							return false;
						}
						else if (func_172(72, -1)) {
						}
					}
				}
				else if (Global_2593872 == 13) {
					return false;
				}
				else if (Global_2593872 == 14) {
					return false;
				}
				else if (Global_2593872 == 15) {
					return false;
				}
				else if (Global_2593872 == 16) {
					return false;
				}
				else if (Global_2593872 == 71) {
					return false;
				}
				else if (Global_2593872 == 72) {
				}
			}
		}
		else if (iParam3 == 129912816 || iParam3 == 1361645381 || iParam3 == -1469750959) {
			if (!iParam5) {
				if (Global_2593872 == -1) {
					if (!Global_91543.f_1456) {
						if (func_172(13, -1)) {
						}
						else if (func_172(14, -1)) {
							return false;
						}
						else if (func_172(15, -1)) {
							return false;
						}
						else if (func_172(16, -1)) {
						}
						else if (func_172(71, -1)) {
							return false;
						}
						else if (func_172(72, -1)) {
						}
					}
				}
				else if (Global_2593872 == 13) {
				}
				else if (Global_2593872 == 14) {
					return false;
				}
				else if (Global_2593872 == 15) {
					return false;
				}
				else if (Global_2593872 == 16) {
				}
				else if (Global_2593872 == 71) {
					return false;
				}
				else if (Global_2593872 == 72) {
				}
			}
		}
		break;

	case 1484379715:
	case 711089605:
	case 1206993109:
	case 32564956:
	case 1618133209:
	case 314326195:
	case 1928884106:
	case 1565386395:
	case 2107621060:
		if (iParam7) {
			return false;
		}
		if (!iParam5) {
			if (Global_2593872 == -1) {
				if (!Global_91543.f_1456) {
					if (func_172(13, -1)) {
					}
					else if (func_172(14, -1)) {
					}
					else if (func_172(15, -1)) {
						return false;
					}
					else if (func_172(16, -1)) {
					}
					else if (func_172(71, -1)) {
					}
					else if (func_172(72, -1)) {
						return false;
					}
				}
			}
			else if (Global_2593872 == 13) {
			}
			else if (Global_2593872 == 14) {
			}
			else if (Global_2593872 == 15) {
				return false;
			}
			else if (Global_2593872 == 16) {
			}
			else if (Global_2593872 == 71) {
			}
			else if (Global_2593872 == 72) {
				return false;
			}
		}
		break;

	case 1019352240:
		if (iParam7) {
			if (iVar0 == joaat("mp_m_freemode_01")) {
				if (Global_2593872 == -1) {
					if (!Global_91543.f_1456) {
						if (func_172(15, -1)) {
							return false;
						}
					}
				}
				else if (Global_2593872 == 15) {
					return false;
				}
			}
		}
		if (iParam5) {
			return false;
		}
		if (iParam4) {
			if (Global_2593872 == -1) {
				if (!Global_91543.f_1456) {
					if (func_172(13, -1)) {
						return false;
					}
					else if (func_172(14, -1)) {
						return false;
					}
					else if (func_172(15, -1)) {
						return false;
					}
					else if (func_172(16, -1)) {
					}
					else if (func_172(71, -1)) {
					}
					else if (func_172(72, -1)) {
					}
				}
			}
			else if (Global_2593872 == 13) {
				return false;
			}
			else if (Global_2593872 == 14) {
				return false;
			}
			else if (Global_2593872 == 15) {
				return false;
			}
			else if (Global_2593872 == 16) {
			}
			else if (Global_2593872 == 71) {
			}
			else if (Global_2593872 == 72) {
			}
		}
		break;

	case 0:
	case 2:
	case -518474626:
		if (iParam4) {
			if (!gameplay::is_string_null_or_empty(sParam1)) {
				switch (gameplay::get_hash_key(sParam1)) {
				case 1774176944:
				case 1363941829:
				case -328314869:
				case -1903783095:
				case -1674924399:
				case -106785870:
				case -344656041:
				case 1480281490:
				case -2097372400:
				case 118598456:
				case -1386676768:
				case 1464947154:
				case -1282504117:
				case -1877294236:
				case 736950162: return false;
				}
			}
		}
		if (iVar0 == joaat("mp_m_freemode_01")) {
		}
		else if (iVar0 == joaat("mp_f_freemode_01")) {
			if (!iParam5) {
				if (Global_2593872 == -1) {
					if (!Global_91543.f_1456) {
						if (func_172(13, -1)) {
						}
						else if (func_172(14, -1)) {
						}
						else if (func_172(15, -1)) {
						}
						else if (func_172(16, -1)) {
						}
						else if (func_172(71, -1)) {
						}
						else if (func_172(72, -1)) {
						}
					}
				}
				else if (Global_2593872 == 13) {
					return false;
				}
				else if (Global_2593872 == 14) {
				}
				else if (Global_2593872 == 15) {
					return false;
				}
				else if (Global_2593872 == 16) {
				}
				else if (Global_2593872 == 71) {
				}
				else if (Global_2593872 == 72) {
				}
			}
		}
		break;

	case 277073536:
		if (bParam6) {
			return false;
		}
		break;
	}
	return true;
}

// Position - 0x26914
char *func_162(int iParam0) {
	switch (iParam0) {
	case 0: return "ARM_LEFT_FULL_SLEEVE";

	case 1: return "ARM_LEFT_SHORT_SLEEVE";

	case 2: return "ARM_LEFT_LOWER_SLEEVE";

	case 3: return "ARM_LEFT_LOWER_INNER";

	case 4: return "ARM_LEFT_LOWER_OUTER";

	case 5: return "ARM_LEFT_WRIST";

	case 6: return "ARM_LEFT_UPPER_SLEEVE";

	case 7: return "ARM_LEFT_UPPER_TRICEP";

	case 8: return "ARM_LEFT_UPPER_SIDE";

	case 9: return "ARM_LEFT_UPPER_BICEP";

	case 10: return "ARM_LEFT_SHOULDER";

	case 11: return "ARM_LEFT_ELBOW";

	case 12: return "ARM_RIGHT_FULL_SLEEVE";

	case 13: return "ARM_RIGHT_SHORT_SLEEVE";

	case 14: return "ARM_RIGHT_LOWER_SLEEVE";

	case 15: return "ARM_RIGHT_LOWER_INNER";

	case 16: return "ARM_RIGHT_LOWER_OUTER";

	case 17: return "ARM_RIGHT_WRIST";

	case 18: return "ARM_RIGHT_UPPER_SLEEVE";

	case 19: return "ARM_RIGHT_UPPER_TRICEP";

	case 20: return "ARM_RIGHT_UPPER_SIDE";

	case 21: return "ARM_RIGHT_UPPER_BICEP";

	case 22: return "ARM_RIGHT_SHOULDER";

	case 23: return "ARM_RIGHT_ELBOW";

	case 24: return "HAND_LEFT";

	case 25: return "HAND_RIGHT";

	case 26: return "BACK_FULL";

	case 27: return "BACK_FULL_ARMS_FULL_BACK";

	case 28: return "BACK_FULL_SHORT";

	case 29: return "BACK_MID";

	case 30: return "BACK_UPPER";

	case 31: return "BACK_UPPER_LEFT";

	case 32: return "BACK_UPPER_RIGHT";

	case 33: return "BACK_LOWER";

	case 34: return "BACK_LOWER_LEFT";

	case 35: return "BACK_LOWER_MID";

	case 36: return "BACK_LOWER_RIGHT";

	case 37: return "CHEST_FULL";

	case 38: return "CHEST_STOM";

	case 39: return "CHEST_STOM_FULL";

	case 40: return "CHEST_LEFT";

	case 41: return "CHEST_UPPER_LEFT";

	case 42: return "CHEST_RIGHT";

	case 43: return "CHEST_UPPER_RIGHT";

	case 44: return "CHEST_MID";

	case 45: return "TORSO_SIDE_RIGHT";

	case 46: return "TORSO_SIDE_LEFT";

	case 47: return "STOMACH_FULL";

	case 48: return "STOMACH_UPPER";

	case 49: return "STOMACH_UPPER_LEFT";

	case 50: return "STOMACH_UPPER_RIGHT";

	case 51: return "STOMACH_LOWER";

	case 52: return "STOMACH_LOWER_LEFT";

	case 53: return "STOMACH_LOWER_RIGHT";

	case 54: return "STOMACH_LEFT";

	case 55: return "STOMACH_RIGHT";

	case 56: return "FACE";

	case 57: return "HEAD_LEFT";

	case 58: return "HEAD_RIGHT";

	case 59: return "NECK_FRONT";

	case 60: return "NECK_BACK";

	case 61: return "NECK_LEFT_FULL";

	case 62: return "NECK_LEFT_BACK";

	case 63: return "NECK_RIGHT_FULL";

	case 64: return "NECK_RIGHT_BACK";

	case 65: return "LEG_LEFT_FULL_SLEEVE";

	case 66: return "LEG_LEFT_FULL_FRONT";

	case 67: return "LEG_LEFT_FULL_BACK";

	case 68: return "LEG_LEFT_UPPER_SLEEVE";

	case 69: return "LEG_LEFT_UPPER_FRONT";

	case 70: return "LEG_LEFT_UPPER_BACK";

	case 71: return "LEG_LEFT_UPPER_OUTER";

	case 72: return "LEG_LEFT_UPPER_INNER";

	case 73: return "LEG_LEFT_LOWER_SLEEVE";

	case 74: return "LEG_LEFT_LOWER_FRONT";

	case 75: return "LEG_LEFT_LOWER_BACK";

	case 76: return "LEG_LEFT_LOWER_OUTER";

	case 77: return "LEG_LEFT_LOWER_INNER";

	case 78: return "LEG_LEFT_KNEE";

	case 79: return "LEG_LEFT_ANKLE";

	case 80: return "LEG_LEFT_CALF";

	case 81: return "LEG_RIGHT_FULL_SLEEVE";

	case 82: return "LEG_RIGHT_FULL_FRONT";

	case 83: return "LEG_RIGHT_FULL_BACK";

	case 84: return "LEG_RIGHT_UPPER_SLEEVE";

	case 85: return "LEG_RIGHT_UPPER_FRONT";

	case 86: return "LEG_RIGHT_UPPER_BACK";

	case 87: return "LEG_RIGHT_UPPER_OUTER";

	case 88: return "LEG_RIGHT_UPPER_INNER";

	case 89: return "LEG_RIGHT_LOWER_SLEEVE";

	case 90: return "LEG_RIGHT_LOWER_FRONT";

	case 91: return "LEG_RIGHT_LOWER_BACK";

	case 92: return "LEG_RIGHT_LOWER_OUTER";

	case 93: return "LEG_RIGHT_LOWER_INNER";

	case 94: return "LEG_RIGHT_KNEE";

	case 95: return "LEG_RIGHT_ANKLE";

	case 96: return "LEG_RIGHT_CALF";

	case 97: return "FOOT_LEFT";

	case 98: return "FOOT_RIGHT";
	}
	return "";
}

// Position - 0x26F57
int func_163(int iParam0, char *sParam1, int iParam2) {
	switch (iParam2) {
	case 1019352240:
	case 2140335355:
	case 277073536: return -1;
	}
	switch (iParam2) {
	case -1775023605: return 0;

	case 917950949: return 1;

	case -1684314297: return 2;

	case -1546663824: return 3;

	case -2119253768: return 4;

	case 1639951086: return 5;

	case 1372660034: return 6;

	case -1524227787: return 7;

	case -311742370: return 8;

	case -2057190659: return 9;

	case -686545645: return 10;

	case -80377674: return 11;

	case -1055976551: return 12;

	case 1963750528: return 13;

	case 796226384: return 14;

	case 123428314: return 15;

	case 1944550961: return 16;

	case 2136911405: return 17;

	case -1309595991: return 18;

	case 1470319061: return 19;

	case -1716562576: return 20;

	case -1940582056: return 21;

	case 1089807219: return 22;

	case -1073830579: return 23;

	case 1071134407: return 24;

	case 1455567330: return 25;

	case 711089605: return 26;

	case 1206993109: return 27;

	case 32564956: return 28;

	case 314326195: return 29;

	case 1928884106: return 30;

	case 1565386395: return 31;

	case 2107621060: return 32;

	case 1618133209: return 33;

	case -951899470: return 34;

	case 2048696626: return 35;

	case 74017048: return 36;

	case -793495770: return 37;

	case 849089063: return 38;

	case 1192230427: return 39;

	case -763917073: return 40;

	case 337552605: return 41;

	case -2066166276: return 42;

	case 100935796: return 43;

	case -1409061796: return 44;

	case 1548327796: return 45;

	case -1459967458: return 46;

	case 129912816: return 47;

	case 1387715942: return 48;

	case -1871804242: return 49;

	case 1603728616: return 50;

	case -742053244: return 51;

	case 1586504577: return 52;

	case 1753976524: return 53;

	case -1469750959: return 54;

	case -388268096: return 55;

	case -1538681432: return 56;

	case -737856380: return 57;

	case 1261643197: return 58;

	case 436139458: return 59;

	case 1012782925: return 60;

	case -277214012: return 61;

	case -484264198: return 62;

	case 1708200656: return 63;

	case 758827473: return 64;

	case 1039283199: return 65;

	case 325801797: return 66;

	case -1946435033: return 67;

	case -1917346117: return 68;

	case -382139768: return 69;

	case 1725561361: return 70;

	case -266913369: return 71;

	case 511433871: return 72;

	case -1399656601: return 73;

	case -1560441083: return 74;

	case 1034503747: return 75;

	case -1170681301: return 76;

	case 660577126: return 77;

	case -818089340: return 78;

	case 1052642087: return 79;

	case 134497037: return 80;

	case -624267373: return 81;

	case -1178847967: return 82;

	case -197292861: return 83;

	case 730193962: return 84;

	case 1469472731: return 85;

	case -1918884694: return 86;

	case -1670727628: return 87;

	case -1389296468: return 88;

	case -405262373: return 89;

	case -1619609833: return 90;

	case 2060550302: return 91;

	case -1202647020: return 92;

	case 12584588: return 93;

	case -1559605744: return 94;

	case -88374898: return 95;

	case -292219126: return 96;

	case -634232984: return 97;

	case -1259754598: return 98;
	}
	switch (gameplay::get_hash_key(sParam1)) {
	case 1948764112: return -1;

	case 1099734529: return 12;

	case 1875475066: return 12;

	case -2027116220:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 75;
		}
		else {
			return 65;
		}
		break;

	case 973279522: return 26;

	case -344656041: return 47;

	case 437243648: return 1;

	case -1636967950: return 75;

	case -1759426263: return 1;

	case 1702259548: return 89;

	case 1471205329: return 73;

	case -33154131: return 22;

	case -1364624791: return 91;

	case 2048169112: return 26;

	case -2132107540: return 73;

	case -2097372400: return 38;

	case -106785870:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 40;
		}
		else {
			return 42;
		}
		break;

	case 1116120433: return 31;

	case 118598456: return 42;

	case 1480281490: return 47;

	case -652292269: return 75;

	case -1179283327: return 20;

	case 860620540: return 32;

	case -880004050: return 14;

	case -1386676768: return 52;

	case 2104696341: return 30;

	case -1952728474: return 6;

	case 1464947154: return 80;

	case -1134718043: return 13;

	case -440373586:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 67;
		}
		else {
			return 75;
		}
		break;

	case -1282504117:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 40;
		}
		else {
			return 42;
		}
		break;

	case -1035884623: return 73;

	case -1877294236: return 47;

	case 1289632992: return 73;

	case 1152623695: return 10;

	case 1705208746: return 26;

	case 1774176944: return 42;

	case -2016202731: return 89;

	case 474241973: return 16;

	case 1549424756: return 91;

	case 1915520024: return 82;

	case -654914345: return 13;

	case -1745115353: return 75;

	case 1466027815: return 26;

	case -161772432: return 10;

	case 74131599: return 90;

	case 363383562: return 89;

	case 736950162: return 38;

	case 1291882802: return 20;

	case -281772534: return 26;

	case -837798134: return 18;

	case 62456: return 56;

	case -800320369: return 3;

	case 1363941829: return 47;

	case 1586377801:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 28;
		}
		else {
			return 26;
		}
		break;

	case -1514257748: return 89;

	case -1023836894: return 6;

	case -1974105125: return 33;

	case -558386018: return 16;

	case -328314869: return 40;

	case -1903783095: return 40;

	case -1674924399: return 40;

	case -252323802: return 33;

	case 11466648: return 6;

	case 927130819:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 28;
		}
		else {
			return 26;
		}
		break;

	case -978943608:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 28;
		}
		else {
			return 26;
		}
		break;

	case 452144164:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 28;
		}
		else {
			return 26;
		}
		break;

	case 691194019:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 28;
		}
		else {
			return 26;
		}
		break;

	case -1516865571: return 44;

	case 2130586285: return 32;

	case 386521802: return 3;

	case 579924440: return 33;

	case 741770527: return 31;

	case 1173403795: return 33;

	case -569087776: return 45;

	case -1344959389: return 89;

	case -211217527: return 64;

	case 86488838: return 53;

	case 705494964: return 52;

	case -137684175: return 30;

	case -979388709: return 41;

	case 324653646: return 43;

	case -518820414: return 52;

	case -1361737401: return 20;

	case 2010946386: return 8;

	case -894811920: return 10;

	case 165068612: return 28;

	case 1549427782: return 40;

	case -927613913: return 42;

	case 385144996: return 56;

	case -814626401: return 57;

	case -1248225809: return 52;

	case 1910378101: return 8;

	case -2124501642: return 91;

	case -1943747838: return 20;

	case -1570115700: return 75;

	case 931699147: return 62;

	case 1019520067: return 63;

	case -859358814: return 20;

	case -1157818866: return 58;

	case -247856505: return 47;

	case -1628534963: return 37;

	case -1051898870: return 33;

	case 1334929540: return 80;

	case 1097124907: return 64;

	case 747545215: return 62;

	case 61892743: return 96;

	case 501548332: return 15;

	case -244169717: return 48;

	case 421886905: return 37;

	case -1398791504: return 33;

	case -106152761: return 3;

	case 125491300: return 41;

	case -1576950557: return 52;

	case -1815115649: return 53;

	case -1043396870: return 59;

	case -1388618285: return 3;

	case -948484638: return 48;

	case 643387405: return 33;

	case 979630098: return 64;

	case 211688583: return 62;

	case 1343791995: return 60;

	case 576309246: return 20;

	case 949154944: return 40;

	case -622511834: return 42;

	case -275651969: return 11;

	case -1256283855: return 15;

	case 955525350: return 40;

	case 1252641873: return 22;

	case -2034766264: return 40;

	case 1748021562: return 22;

	case -657146050: return 30;

	case -955835485: return 19;

	case -1269959119: return 40;

	case -1478763187: return 4;

	case -1881592504: return 15;

	case 2115996117: return 62;

	case 1824417551: return 45;

	case 1502068898: return 24;

	case -2019287742: return 22;

	case -1780827729: return 80;

	case -1966497207: return 25;

	case -2126999769: return 30;

	case 2014772448: return 30;

	case 1705760778: return 44;

	case 497993745: return 15;

	case 1142887665: return 9;

	case 22777707: return 3;

	case 799173624: return 16;

	case -410297401: return 17;

	case 214410819: return 75;

	case -2098342992: return 23;

	case -1280920283: return 64;

	case -1501455653: return 16;

	case 2117454408: return 25;

	case -1945704982: return 32;

	case -1581870771: return 31;

	case -1350521631: return 10;

	case -954508266: return 5;

	case -716244867: return 4;

	case 185361399: return 52;

	case -1208107213: return 35;

	case -812421538: return 30;

	case -566096965: return 32;

	case -316757644: return 38;

	case -103496992: return 24;

	case 391708136: return 52;

	case 616667309: return 20;

	case 870102755: return 10;

	case 1093030262: return 92;

	case 1378218869: return 0;

	case 332555747: return 80;

	case 1077526193: return 34;

	case 1332632858: return 91;

	case 1556379590: return 10;

	case 1780093553: return 22;

	case 2001284303: return 14;

	case -2059941716: return 30;

	case -1759875983: return 40;

	case -1521153818: return 24;
	}
	if (iParam2 == 0 && gameplay::is_string_null_or_empty(sParam1)) {
		return -1;
	}
	switch (iParam2) {
	case -518474626: return -1;
	}
	return -1;
}

// Position - 0x27F89
bool func_164(var *uParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;

	func_171(uParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
	if (entity::does_entity_exist(iParam3) && !ped::is_ped_injured(iParam3)) {
		iVar0 = entity::get_entity_model(iParam3);
	}
	switch (iParam2) {
	case 0:
		switch (iParam1) {
		case 0:
			func_171(uParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
			break;

		case 1:
			func_171(uParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
			break;

		case 2:
			func_171(uParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
			break;

		case 3:
			func_171(uParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
			break;

		case 4:
			func_171(uParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
			break;

		case 5:
			func_171(uParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
			break;

		case 6:
			func_171(uParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
			break;

		case 7:
			func_171(uParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
			break;

		case 8:
			func_171(uParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
			break;

		case 9:
			if (func_170() || func_169()) {
				iVar1 = 400;
				if (func_168() && (func_167() || func_166())) {
					iVar1 = 0;
				}
				func_171(uParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1,
						 2);
			}
			break;

		case 10:
			func_171(uParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
			break;

		case 11:
			func_171(uParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
			break;

		case 12:
			func_171(uParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
			break;

		case 13:
			func_171(uParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
			break;

		case 14:
			func_171(uParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
			break;

		case 15:
			func_171(uParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
			break;

		case 16:
			func_171(uParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
			break;

		case 17:
			func_171(uParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
			break;

		case 18:
			func_171(uParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
			break;

		case 19:
			func_171(uParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
			break;

		case 20:
			func_171(uParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
			break;

		default: func_165(uParam0, iParam2, iParam1, 21); break;
		}
		break;

	case 1:
		switch (iParam1) {
		case 0:
			if (func_170() || func_169()) {
				iVar1 = 450;
				if (func_168() && (func_167() || func_166())) {
					iVar1 = 0;
				}
				func_171(uParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1,
						 0);
			}
			break;

		case 1:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
			break;

		case 2:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
			break;

		case 3:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
			break;

		case 4:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
			break;

		case 5:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
			break;

		case 6:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
			break;

		case 7:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
			break;

		case 8:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
			break;

		case 9:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
			break;

		case 10:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
			break;

		case 11:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
			break;

		case 12:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
			break;

		case 13:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
			break;

		case 14:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
			break;

		case 15:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
			break;

		case 16:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
			break;

		case 17:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
			break;

		case 18:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
			break;

		case 19:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
			break;

		case 20: break;

		case 21:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
			break;

		case 22:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
			break;

		case 23:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
			break;

		case 24:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
			break;

		case 25:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
			break;

		case 26:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
			break;

		case 27:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
			break;

		case 28:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
			break;

		case 29:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
			break;

		case 30:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
			break;

		case 31:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
			break;

		case 32:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
			break;

		case 33:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
			break;

		case 34:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
			break;

		case 35:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
			break;

		case 36:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
			break;

		case 37:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
			break;

		case 38:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
			break;

		case 39:
			func_171(uParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
			break;

		default: func_165(uParam0, iParam2, iParam1, 40); break;
		}
		break;

	case 2:
		switch (iParam1) {
		case 0:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
			break;

		case 1:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
			break;

		case 2:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
			break;

		case 3:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
			break;

		case 4:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
			break;

		case 5:
			if (func_170() || func_169()) {
				iVar1 = 380;
				if (func_168() && (func_167() || func_166())) {
					iVar1 = 0;
				}
				func_171(uParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1,
						 3);
			}
			break;

		case 6:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
			break;

		case 7:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
			break;

		case 8:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
			break;

		case 9:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
			break;

		case 10:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
			break;

		case 11:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
			break;

		case 12:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
			break;

		case 13:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
			break;

		case 14:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
			break;

		case 15:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
			break;

		case 16:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
			break;

		case 17:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
			break;

		case 18:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
			break;

		case 19:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
			break;

		case 20:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
			break;

		case 21:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
			break;

		case 22:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
			break;

		case 23:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
			break;

		case 24:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
			break;

		case 25:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
			break;

		case 26:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
			break;

		case 27:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
			break;

		case 28:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
			break;

		case 29:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
			break;

		case 30:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
			break;

		case 31:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
			break;

		case 32:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
			break;

		case 33:
			func_171(uParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
			break;

		default: func_165(uParam0, iParam2, iParam1, 34); break;
		}
		break;

	case 3:
	case 4:
		switch (iParam1) {
		case 0:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2,
					 system::round(system::to_float(20000) * Global_262145.f_2906), 0);
			break;

		case 1:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2,
					 system::round(system::to_float(1400) * Global_262145.f_2907), 2);
			break;

		case 2:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2,
					 system::round(system::to_float(9750) * Global_262145.f_2908), 3);
			break;

		case 3:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2,
					 system::round(system::to_float(2150) * Global_262145.f_2909), 0);
			break;

		case 4:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2,
					 system::round(system::to_float(10000) * Global_262145.f_2910), 0);
			break;

		case 54:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2,
					 system::round(system::to_float(12400) * Global_262145.f_2911), 1);
			break;

		case 5:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2,
					 system::round(system::to_float(3500) * Global_262145.f_2912), 0);
			break;

		case 6:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2,
					 system::round(system::to_float(4950) * Global_262145.f_2913), 2);
			break;

		case 55:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2,
					 system::round(system::to_float(1350) * Global_262145.f_2914), 1);
			break;

		case 7:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2,
					 system::round(system::to_float(1450) * Global_262145.f_2915), 0);
			break;

		case 8:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2,
					 system::round(system::to_float(2700) * Global_262145.f_2916), 7);
			break;

		case 9:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2,
					 system::round(system::to_float(1200) * Global_262145.f_2917), 0);
			break;

		case 10:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2,
					 system::round(system::to_float(1500) * Global_262145.f_2918), 0);
			break;

		case 11:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2,
					 system::round(system::to_float(2650) * Global_262145.f_2919), 0);
			break;

		case 56:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2,
					 system::round(system::to_float(1900) * Global_262145.f_2920), 1);
			break;

		case 12:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2,
					 system::round(system::to_float(4950) * Global_262145.f_2921), 2);
			break;

		case 57:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2,
					 system::round(system::to_float(2400) * Global_262145.f_2922), 1);
			break;

		case 58:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2,
					 system::round(system::to_float(5100) * Global_262145.f_2923), 1);
			break;

		case 59:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2,
					 system::round(system::to_float(7400) * Global_262145.f_2924), 1);
			break;

		case 60:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2,
					 system::round(system::to_float(10000) * Global_262145.f_2925), 1);
			break;

		case 17:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2,
					 system::round(system::to_float(2400) * Global_262145.f_2930), 2);
			break;

		case 18:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2,
					 system::round(system::to_float(5100) * Global_262145.f_2931), 2);
			break;

		case 19:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2,
					 system::round(system::to_float(3600) * Global_262145.f_2932), 2);
			break;

		case 20:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2,
					 system::round(system::to_float(10000) * Global_262145.f_2933), 3);
			break;

		case 21:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2,
					 system::round(system::to_float(12500) * Global_262145.f_2934), 3);
			break;

		case 22:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2,
					 system::round(system::to_float(10000) * Global_262145.f_2935), 3);
			break;

		case 23:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2,
					 system::round(system::to_float(5000) * Global_262145.f_2936), 3);
			break;

		case 24:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2,
					 system::round(system::to_float(7500) * Global_262145.f_2937), 3);
			break;

		case 25:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2,
					 system::round(system::to_float(3750) * Global_262145.f_2938), 2);
			break;

		case 26:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2,
					 system::round(system::to_float(3750) * Global_262145.f_2939), 3);
			break;

		case 27:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2,
					 system::round(system::to_float(4800) * Global_262145.f_2940), 3);
			break;

		case 28:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2,
					 system::round(system::to_float(3500) * Global_262145.f_2941), 3);
			break;

		case 61:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2,
					 system::round(system::to_float(12350) * Global_262145.f_2942), 1);
			break;

		case 62:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2,
					 system::round(system::to_float(1900) * Global_262145.f_2943), 1);
			break;

		case 63:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2,
					 system::round(system::to_float(4500) * Global_262145.f_2944), 1);
			break;

		case 64:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2,
					 system::round(system::to_float(12250) * Global_262145.f_2945), 1);
			break;

		case 65:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2,
					 system::round(system::to_float(12300) * Global_262145.f_2946), 1);
			break;

		case 29:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2,
					 system::round(system::to_float(2500) * Global_262145.f_2947), 0);
			break;

		case 30:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2,
					 system::round(system::to_float(10000) * Global_262145.f_2948), 0);
			break;

		case 31:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2,
					 system::round(system::to_float(10000) * Global_262145.f_2949), 0);
			break;

		case 66:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2,
					 system::round(system::to_float(7500) * Global_262145.f_2950), 1);
			break;

		case 32:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2,
					 system::round(system::to_float(5000) * Global_262145.f_2951), 2);
			break;

		case 33:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2,
					 system::round(system::to_float(7300) * Global_262145.f_2952), 3);
			break;

		case 34:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2,
					 system::round(system::to_float(7250) * Global_262145.f_2953), 2);
			break;

		case 35:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2,
					 system::round(system::to_float(11900) * Global_262145.f_2954), 0);
			break;

		case 36:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2,
					 system::round(system::to_float(2750) * Global_262145.f_2955), 0);
			break;

		case 37:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2,
					 system::round(system::to_float(1750) * Global_262145.f_2956), 0);
			break;

		case 38:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2,
					 system::round(system::to_float(7300) * Global_262145.f_2957), 3);
			break;

		case 39:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2,
					 system::round(system::to_float(3250) * Global_262145.f_2958), 2);
			break;

		case 40:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2,
					 system::round(system::to_float(1000) * Global_262145.f_2959), 0);
			break;

		case 67:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2,
					 system::round(system::to_float(5000) * Global_262145.f_2960), 1);
			break;

		case 41:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2,
					 system::round(system::to_float(7500) * Global_262145.f_2961), 2);
			break;

		case 68:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2,
					 system::round(system::to_float(5100) * Global_262145.f_2962), 1);
			break;

		case 42:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2,
					 system::round(system::to_float(5050) * Global_262145.f_2963), 0);
			break;

		case 43:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2,
					 system::round(system::to_float(2450) * Global_262145.f_2964), 2);
			break;

		case 44:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2,
					 system::round(system::to_float(4950) * Global_262145.f_2965), 0);
			break;

		case 45:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2,
					 system::round(system::to_float(5100) * Global_262145.f_2966), 0);
			break;

		case 46:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2,
					 system::round(system::to_float(12250) * Global_262145.f_2967), 0);
			break;

		case 47:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2,
					 system::round(system::to_float(1150) * Global_262145.f_2968), 3);
			break;

		case 48:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2,
					 system::round(system::to_float(7500) * Global_262145.f_2969), 3);
			break;

		case 49:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2,
					 system::round(system::to_float(7600) * Global_262145.f_2970), 3);
			break;

		case 50:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2,
					 system::round(system::to_float(2600) * Global_262145.f_2971), 2);
			break;

		case 51:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2,
					 system::round(system::to_float(2500) * Global_262145.f_2972), 3);
			break;

		case 52:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2,
					 system::round(system::to_float(7450) * Global_262145.f_2973), 3);
			break;

		case 53:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2,
					 system::round(system::to_float(7500) * Global_262145.f_2974), 0);
			break;

		case 69:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2,
					 system::round(system::to_float(10000) * Global_262145.f_2975), 1);
			break;

		case 70:
			func_171(uParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2,
					 system::round(system::to_float(2500) * Global_262145.f_2976), 2);
			break;
		}
		if (iVar0 == joaat("mp_m_freemode_01")) {
			switch (iParam1) {
			case 73:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 74:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 75:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 76:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 77:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 78:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 79:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 80:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 81:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 82:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 83:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 84:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 85:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 86:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 90:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 91:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 124:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 125:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 87:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000",
						 "torsoDecal", iParam2, system::round(system::to_float(100) * Global_262145.f_2977), 0);
				break;

			case 88:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001",
						 "torsoDecal", iParam2, system::round(system::to_float(100) * Global_262145.f_2978), 0);
				break;

			case 89:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002",
						 "torsoDecal", iParam2, system::round(system::to_float(100) * Global_262145.f_2979), 0);
				break;

			case 93:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 94:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 95:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 96:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 97:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 98:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 99:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 100:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 101:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 102:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 103:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 104:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 105:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 106:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 107:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 108:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000",
						 "hairOverlay", iParam2, 100, 0);
				break;

			case 109:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001",
						 "hairOverlay", iParam2, 100, 0);
				break;

			case 110:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000",
						 "hairOverlay", iParam2, 100, 0);
				break;

			case 111:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001",
						 "hairOverlay", iParam2, 100, 0);
				break;

			case 112:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000",
						 "hairOverlay", iParam2, 100, 0);
				break;

			case 113:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001",
						 "hairOverlay", iParam2, 100, 0);
				break;

			case 114:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000",
						 "hairOverlay", iParam2, 100, 0);
				break;

			case 115:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 116:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 117:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 123:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 13:
				func_171(uParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2,
						 system::round(system::to_float(5000) * Global_262145.f_2926), 0);
				break;

			case 14:
				func_171(uParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_B", "crewLogo", iParam2,
						 system::round(system::to_float(10000) * Global_262145.f_2927), 0);
				break;

			case 15:
				func_171(uParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_C", "crewLogo", iParam2,
						 system::round(system::to_float(10000) * Global_262145.f_2928), 2);
				break;

			case 16:
				func_171(uParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_D", "crewLogo", iParam2,
						 system::round(system::to_float(5000) * Global_262145.f_2929), 0);
				break;

			case 71:
				func_171(uParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_E", "crewLogo", iParam2,
						 system::round(system::to_float(10000) * Global_262145.f_2929), 0);
				break;

			case 72:
				func_171(uParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_F", "crewLogo", iParam2,
						 system::round(system::to_float(10000) * Global_262145.f_2929), 0);
				break;
			}
		}
		else if (iVar0 == joaat("mp_f_freemode_01")) {
			switch (iParam1) {
			case 73:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 74:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 75:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 76:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 77:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 78:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 79:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 80:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 81:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 82:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 83:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 84:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 85:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 92:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051",
						 "torsoDecal", iParam2, 100, 0);
				break;

			case 87:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000",
						 "torsoDecal", iParam2, system::round(system::to_float(100) * Global_262145.f_2977), 0);
				break;

			case 88:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001",
						 "torsoDecal", iParam2, system::round(system::to_float(100) * Global_262145.f_2978), 0);
				break;

			case 89:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002",
						 "torsoDecal", iParam2, system::round(system::to_float(100) * Global_262145.f_2979), 0);
				break;

			case 93:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 94:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 95:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 96:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 97:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 98:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 99:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 100:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 101:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 102:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 103:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 104:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 105:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 106:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 107:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 108:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000",
						 "hairOverlay", iParam2, 100, 0);
				break;

			case 109:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001",
						 "hairOverlay", iParam2, 100, 0);
				break;

			case 110:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000",
						 "hairOverlay", iParam2, 100, 0);
				break;

			case 111:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001",
						 "hairOverlay", iParam2, 100, 0);
				break;

			case 112:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000",
						 "hairOverlay", iParam2, 100, 0);
				break;

			case 113:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001",
						 "hairOverlay", iParam2, 100, 0);
				break;

			case 114:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000",
						 "hairOverlay", iParam2, 100, 0);
				break;

			case 115:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 116:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 117:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 118:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 119:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 120:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 121:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 122:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 123:
				func_171(uParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay",
						 iParam2, 100, 0);
				break;

			case 13:
				func_171(uParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2,
						 system::round(system::to_float(5000) * Global_262145.f_2926), 0);
				break;

			case 14:
				func_171(uParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_B", "crewLogo", iParam2,
						 system::round(system::to_float(5000) * Global_262145.f_2927), 0);
				break;

			case 15:
				func_171(uParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_C", "crewLogo", iParam2,
						 system::round(system::to_float(10000) * Global_262145.f_2928), 2);
				break;

			case 16:
				func_171(uParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_D", "crewLogo", iParam2,
						 system::round(system::to_float(10000) * Global_262145.f_2929), 0);
				break;
			}
		}
		break;
	}
	if ((iParam2 == 3 || iParam2 == 4) && iParam1 >= 129) {
		func_165(uParam0, iParam2, iParam1, 129);
	}
	if (iParam4 == 22) {
		uParam0->f_7 *= 2;
	}
	return uParam0->f_11 != -1;
}

// Position - 0x2B027
void func_165(var *uParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	struct<8> Var2;

	iVar0 = iParam2 - iParam3;
	iVar1 = dlc1::_get_num_decorations(iParam1);
	if (iVar1 > 0 && iVar0 < iVar1) {
		if (dlc1::_0xFF56381874F82086(iParam1, iVar0, &Var2)) {
			if (!dlc1::_is_dlc_data_empty(Var2)) {
				uParam0->f_11 = iParam2;
				MemCopy(uParam0, {Var2.f_7}, 4);
				uParam0->f_5 = Var2.f_3;
				uParam0->f_4 = Var2.f_2;
				uParam0->f_8 = Var2.f_6;
				uParam0->f_6 = iParam1;
				uParam0->f_7 = Var2.f_4;
				uParam0->f_9 = iParam2 / 32;
				uParam0->f_10 = iParam2 % 32;
				uParam0->f_12 = Var2.f_5;
			}
		}
	}
}

// Position - 0x2B0B9
int func_166() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (gameplay::is_bit_set(Global_25, 5)) {
		if (gameplay::is_bit_set(Global_25, 1) || gameplay::is_bit_set(Global_25, 3)) {
			return 1;
		}
		else {
			return 0;
		}
	}
	if (stats::stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1)) {
		if (gameplay::is_bit_set(iVar0, 5)) {
			if (gameplay::is_bit_set(iVar0, 1) || gameplay::is_bit_set(iVar0, 3)) {
				return 1;
			}
			else {
				return 0;
			}
		}
	}
	if (stats::stat_slot_is_loaded(0)) {
		if (Global_139180.f_3) {
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (stats::stat_get_int(iVar2, &iVar1, -1)) {
				if (gameplay::is_bit_set(iVar1, 5)) {
					return 1;
				}
			}
		}
	}
	if (gameplay::_0x5AA3BEFA29F03AD4()) {
		iVar3 = gameplay::get_profile_setting(866);
		if (gameplay::is_bit_set(iVar3, 1) || gameplay::is_bit_set(iVar3, 3)) {
			return 1;
		}
	}
	if (network::network_is_signed_in()) {
		if (network::_network_are_ros_available()) {
			if (network::_0x91B87C55093DE351()) {
				stats::stat_get_int(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				gameplay::set_bit(&iVar4, 1);
				gameplay::set_bit(&iVar4, 3);
				gameplay::set_bit(&iVar4, 5);
				gameplay::set_bit(&Global_25, 1);
				gameplay::set_bit(&Global_25, 3);
				gameplay::set_bit(&Global_25, 5);
				stats::stat_set_int(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (gameplay::_0x5AA3BEFA29F03AD4()) {
					iVar4 = gameplay::get_profile_setting(866);
					gameplay::set_bit(&iVar4, 1);
					gameplay::set_bit(&iVar4, 3);
					stats::_0xDAC073C7901F9E15(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x2B20D
int func_167() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (gameplay::is_bit_set(Global_25, 6)) {
		if (gameplay::is_bit_set(Global_25, 2) || gameplay::is_bit_set(Global_25, 4)) {
			return 1;
		}
		else {
			return 0;
		}
	}
	if (stats::stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1)) {
		if (gameplay::is_bit_set(iVar0, 6)) {
			if (gameplay::is_bit_set(iVar0, 2) || gameplay::is_bit_set(iVar0, 4)) {
				return 1;
			}
			else {
				return 0;
			}
		}
	}
	if (stats::stat_slot_is_loaded(0)) {
		if (Global_139180.f_3) {
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (stats::stat_get_int(iVar2, &iVar1, -1)) {
				if (gameplay::is_bit_set(iVar1, 8)) {
					return 1;
				}
			}
		}
	}
	if (gameplay::_0x5AA3BEFA29F03AD4()) {
		iVar3 = gameplay::get_profile_setting(866);
		if (gameplay::is_bit_set(iVar3, 2) || gameplay::is_bit_set(iVar3, 4)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x2B2DE
bool func_168() {
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

// Position - 0x2B399
int func_169() { return 1; }

// Position - 0x2B3A2
int func_170() { return 1; }

// Position - 0x2B3AB
void func_171(var *uParam0, int iParam1, int iParam2, char *sParam3, char *sParam4, char *sParam5, char *sParam6,
			  int iParam7, int iParam8, int iParam9) {
	char cVar0[32];

	uParam0->f_11 = iParam1;
	StringCopy(uParam0, sParam3, 16);
	uParam0->f_4 = gameplay::get_hash_key(sParam4);
	uParam0->f_5 = gameplay::get_hash_key(sParam5);
	uParam0->f_8 = gameplay::get_hash_key(sParam6);
	uParam0->f_6 = iParam7;
	uParam0->f_7 = iParam8;
	uParam0->f_9 = iParam1 / 32;
	uParam0->f_10 = iParam1 % 32;
	uParam0->f_12 = iParam9;
	if (entity::does_entity_exist(iParam2) && !ped::is_ped_injured(iParam2)) {
		if (uParam0->f_6 == 0 || uParam0->f_6 == 1 || uParam0->f_6 == 2) {
		}
		else if (uParam0->f_6 == 3 || uParam0->f_6 == 4) {
			StringCopy(&cVar0, "", 32);
			if (uParam0->f_11 == 13 || uParam0->f_11 == 14 || uParam0->f_11 == 15 || uParam0->f_11 == 16 ||
				uParam0->f_11 == 71 || uParam0->f_11 == 72) {
				StringConCat(&cVar0, "FM_", 32);
				StringConCat(&cVar0, "CREW_", 32);
				if (entity::get_entity_model(iParam2) == joaat("mp_m_freemode_01")) {
					StringConCat(&cVar0, "M_", 32);
				}
				else {
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			else if (gameplay::are_strings_equal(sParam6, "torsoDecal") ||
					 gameplay::are_strings_equal(sParam6, "hairOverlay")) {
				StringCopy(&cVar0, sParam5, 32);
			}
			else {
				if (uParam0->f_11 == 0 || uParam0->f_11 == 1 || uParam0->f_11 == 2 || uParam0->f_11 == 4 ||
					uParam0->f_11 == 3 || uParam0->f_11 == 54 || uParam0->f_11 == 5 || uParam0->f_11 == 6 ||
					uParam0->f_11 == 55 || uParam0->f_11 == 7 || uParam0->f_11 == 8 || uParam0->f_11 == 9 ||
					uParam0->f_11 == 10 || uParam0->f_11 == 11 || uParam0->f_11 == 56 || uParam0->f_11 == 12 ||
					uParam0->f_11 == 57 || uParam0->f_11 == 58 || uParam0->f_11 == 59 || uParam0->f_11 == 60) {
					StringConCat(&cVar0, "FM_Tat_Award_", 32);
				}
				else {
					StringConCat(&cVar0, "FM_Tat_", 32);
				}
				if (entity::get_entity_model(iParam2) == joaat("mp_m_freemode_01") || uParam0->f_11 == 20) {
					StringConCat(&cVar0, "M_", 32);
				}
				else {
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			uParam0->f_5 = gameplay::get_hash_key(&cVar0);
			if (ped::_get_tattoo_zone(uParam0->f_4, uParam0->f_5) == 7) {
				uParam0->f_11 = -1;
			}
		}
	}
}

// Position - 0x2B662
bool func_172(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (iParam0 == -1) {
		return false;
	}
	iVar0 = func_174(iParam0, iParam1);
	iVar1 = func_173(iParam0);
	if (iVar1 < 0 || iVar1 >= 32) {
		return false;
	}
	return gameplay::is_bit_set(iVar0, iVar1);
}

// Position - 0x2B6A4
int func_173(int iParam0) { return iParam0 % 32; }

// Position - 0x2B6B1
int func_174(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = func_16(func_175(iParam0), iParam1, 0);
	return iVar0;
}

// Position - 0x2B6CA
int func_175(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = func_178(iVar0);
	if (func_177() == 0 || func_176() == 0 || func_177() == 999 && func_176() == 999) {
		switch (iVar1) {
		case 0: return 1043;

		case 1: return 1044;

		case 2: return 1045;

		case 3: return 1046;

		case 4: return 1047;

		case 5: return 1048;

		case 6: return 1482;

		case 7: return 1483;

		case 8: return 1484;

		case 9: return 1485;

		case 10: return 1941;

		case 11: return 1942;

		case 12: return 1943;

		case 13: return 2405;

		case 14: return 2425;

		case 15: return 2428;

		case 16: return 2431;

		case 17: return 2594;

		case 18: return 2597;

		case 19: return 2600;

		case 20: return 3756;

		case 21: return 3759;

		case 22: return 3834;

		case 23: return 3837;

		case 24: return 3840;

		case 25: return 3843;

		case 26: return 5334;

		case 27: return 5337;
		}
	}
	return 6022;
}

// Position - 0x2B8B9
int func_176() { return Global_25191; }

// Position - 0x2B8C4
int func_177() { return Global_25190; }

// Position - 0x2B8CF
int func_178(int iParam0) { return iParam0 / 32; }

// Position - 0x2B8DC
int func_179(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!ped::is_ped_injured(iParam0)) {
		if (entity::get_entity_model(iParam0) == joaat("mp_m_freemode_01")) {
			iVar0 = ped::get_ped_drawable_variation(iParam0, 11);
			iVar2 = func_16(1751, -1, 0);
			if (iVar0 > 15) {
				iVar3 = func_221(iParam0, 11, -1);
				if (iVar3 >= 237) {
					iVar4 = func_104(joaat("mp_m_freemode_01"), iVar3, 11, 3);
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1113995558, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1467682989, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 362493804, 0)) {
						if (iVar2 == 671171671) {
							return 1;
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1393156190, 0) &&
							 !dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1237899132, 0)) {
						return 1;
					}
				}
			}
		}
		else if (entity::get_entity_model(iParam0) == joaat("mp_f_freemode_01")) {
			iVar0 = ped::get_ped_drawable_variation(iParam0, 11);
			iVar1 = ped::get_ped_texture_variation(iParam0, 11);
			iVar2 = func_16(1751, -1, 0);
			if (iVar0 == 3) {
				if (iVar1 == 14) {
					return 1;
				}
			}
			else if (iVar0 > 15) {
				iVar5 = func_221(iParam0, 11, -1);
				if (iVar5 >= 256) {
					iVar6 = func_104(joaat("mp_f_freemode_01"), iVar5, 11, 4);
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, 1113995558, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1467682989, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar6, 362493804, 0)) {
						if (iVar2 == 1911627074) {
							return 1;
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1393156190, 0) &&
							 !dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1237899132, 0)) {
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

// Position - 0x2BA7E
int func_180(int iParam0) {
	int iVar0;

	if (network::network_is_activity_session()) {
		iVar0 = Global_1591201[player::player_id() /*602*/].f_96.f_28;
		if (iVar0 != -1 && iVar0 < 4) {
			if (func_181(iVar0) != -1 && func_181(iVar0) != 0) {
				return 1;
			}
		}
	}
	if (!ped::is_ped_injured(iParam0)) {
		if (entity::get_entity_model(iParam0) == joaat("mp_m_freemode_01")) {
			if (ped::get_ped_drawable_variation(iParam0, 11) == 15) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x2BAFA
int func_181(int iParam0) {
	if (iParam0 <= -1 || iParam0 >= 4) {
		return -1;
	}
	return Global_2443905.f_5859[iParam0];
}

// Position - 0x2BB22
int func_182(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	if (!ped::is_ped_injured(iParam0)) {
		if (entity::get_entity_model(iParam0) == joaat("mp_m_freemode_01")) {
			iVar0 = ped::get_ped_drawable_variation(iParam0, 11);
			iVar1 = ped::get_ped_texture_variation(iParam0, 11);
			switch (iVar0) {
			case 0:
				switch (iVar1) {
				case 1:
				case 3:
				case 5:
				case 7:
				case 4:
				case 8:
				case 11: return 1;
				}
				break;

			case 1:
				switch (iVar1) {
				case 3:
				case 5:
				case 6:
				case 8:
				case 4:
				case 14: return 1;

				case 1:
				case 7:
				case 12:
					iVar2 = func_188(joaat("mp_m_freemode_01"), 11, func_221(iParam0, 11, -1), 0);
					if (iVar1 == 1 && iVar2 == 88 || iVar1 == 7 && iVar2 == 89 || iVar1 == 12 && iVar2 == 87) {
						return 1;
					}
					break;
				}
				break;

			case 2:
				switch (iVar1) {
				case 9: return 1;
				}
				break;

			case 5:
				if (!iParam1) {
					if (func_172(13, -1)) {
						return 1;
					}
					else if (func_172(14, -1)) {
						return 1;
					}
					else if (func_172(15, -1)) {
						return 1;
					}
					else if (func_172(16, -1)) {
						return 1;
					}
					else if (func_172(71, -1)) {
						return 1;
					}
					else if (func_172(72, -1)) {
					}
					else if (func_184(player::player_id(), 1) &&
							 Global_1619421[player::player_id() /*390*/].f_11.f_68.f_21 != 0) {
						return 1;
					}
				}
				break;

			default:
				if (iVar0 > 15) {
					iVar3 = func_221(iParam0, 11, -1);
					if (iVar3 >= 237) {
						iVar4 = func_104(joaat("mp_m_freemode_01"), iVar3, 11, 3);
						if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1113995558, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1467682989, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar4, 362493804, 0)) {
							return 1;
						}
					}
				}
				break;
			}
			iVar0 = ped::get_ped_drawable_variation(iParam0, 8);
			iVar1 = ped::get_ped_texture_variation(iParam0, 8);
			switch (iVar0) {
			case 0:
				switch (iVar1) {
				case 1:
				case 3:
				case 5:
				case 7:
				case 4:
				case 8:
				case 11: return 1;
				}
				break;

			case 1:
				switch (iVar1) {
				case 3:
				case 5:
				case 6:
				case 8:
				case 4:
				case 14:
				case 1:
				case 7:
				case 12: return 1;
				}
				break;

			case 2:
				switch (iVar1) {
				case 1:
				case 3:
				case 5:
				case 7:
				case 4:
				case 8:
				case 11: return 1;
				}
				break;

			case 14:
				switch (iVar1) {
				case 3:
				case 5:
				case 6:
				case 8:
				case 4:
				case 14:
				case 1:
				case 7:
				case 12: return 1;
				}
				break;

			default:
				if (iVar0 > 15) {
					iVar5 = func_221(iParam0, 8, -1);
					if (iVar5 >= 241) {
						iVar6 = func_104(joaat("mp_m_freemode_01"), iVar5, 8, 3);
						if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, 1113995558, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1467682989, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar6, 362493804, 0)) {
							return 1;
						}
					}
				}
				break;
			}
		}
		else if (entity::get_entity_model(iParam0) == joaat("mp_f_freemode_01")) {
			iVar0 = ped::get_ped_drawable_variation(iParam0, 11);
			iVar1 = ped::get_ped_texture_variation(iParam0, 11);
			switch (iVar0) {
			case 0:
				switch (iVar1) {
				case 1:
				case 2: return 1;

				case 7:
				case 4:
				case 9:
					iVar7 = func_188(joaat("mp_f_freemode_01"), 11, func_221(iParam0, 11, -1), 0);
					if (iVar1 == 7 && iVar7 == 88 || iVar1 == 4 && iVar7 == 89 || iVar1 == 9 && iVar7 == 87) {
						return 1;
					}
					break;
				}
				break;

			case 2:
				switch (iVar1) {
				case 0:
				case 1:
				case 2:
				case 3:
				case 4: return 1;
				}
				break;

			case 3:
				switch (iVar1) {
				case 14: return 1;
				}
				break;

			case 11:
				switch (iVar1) {
				case 10:
				case 11:
				case 15: return 1;
				}
				break;

			default:
				if (iVar0 > 15) {
					iVar8 = func_221(iParam0, 11, -1);
					if (iVar8 >= 256) {
						iVar9 = func_104(joaat("mp_f_freemode_01"), iVar8, 11, 4);
						if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, 1113995558, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar9, -1467682989, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar9, 362493804, 0)) {
							return 1;
						}
					}
				}
				break;
			}
			iVar0 = ped::get_ped_drawable_variation(iParam0, 8);
			iVar1 = ped::get_ped_texture_variation(iParam0, 8);
			switch (iVar0) {
			case 0:
				switch (iVar1) {
				case 1:
				case 2: return 1;

				case 7:
				case 4:
				case 9:
					iVar10 = func_188(joaat("mp_f_freemode_01"), 11, func_221(iParam0, 11, -1), 0);
					if (iVar1 == 7 && iVar10 == 88 || iVar1 == 4 && iVar10 == 89 || iVar1 == 9 && iVar10 == 87) {
						return 1;
					}
					break;
				}
				break;

			case 1:
				switch (iVar1) {
				case 1:
				case 2: return 1;

				case 7:
				case 4:
				case 9:
					iVar11 = func_188(joaat("mp_f_freemode_01"), 11, func_221(iParam0, 11, -1), 0);
					if (iVar1 == 7 && iVar11 == 88 || iVar1 == 4 && iVar11 == 89 || iVar1 == 9 && iVar11 == 87) {
						return 1;
					}
					break;
				}
				break;

			case 2:
				switch (iVar1) {
				case 1:
				case 3:
				case 5:
				case 7:
				case 4:
				case 8:
				case 11: return 1;
				}
				break;

			case 11:
				switch (iVar1) {
				case 10:
				case 11:
				case 15: return 1;
				}
				break;

			case 14:
				switch (iVar1) {
				case 3:
				case 5:
				case 6:
				case 8:
				case 4:
				case 14:
				case 1:
				case 7:
				case 12: return 1;
				}
				break;

			default:
				if (iVar0 > 15) {
					iVar12 = func_221(iParam0, 8, -1);
					if (iVar12 >= 136) {
						iVar13 = func_104(joaat("mp_f_freemode_01"), iVar12, 8, 4);
						if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1113995558, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1467682989, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar13, 362493804, 0)) {
							return 1;
						}
					}
				}
				break;
			}
		}
		if (func_183(iParam0)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x2C302
bool func_183(int iParam0) {
	struct<5> Var0;
	bool bVar17;
	int iVar18;
	int iVar19;

	bVar17 = entity::get_entity_model(iParam0) == joaat("mp_m_freemode_01");
	iVar18 = ped::get_ped_drawable_variation(iParam0, 11);
	iVar19 = ped::get_ped_texture_variation(iParam0, 11);
	if (bVar17) {
		dlc1::get_shop_ped_component(103980309, &Var0);
	}
	else {
		dlc1::get_shop_ped_component(-31075674, &Var0);
	}
	if (iVar18 == Var0.f_3 && iVar19 == Var0.f_4) {
		return true;
	}
	return false;
}

// Position - 0x2C365
int func_184(int iParam0, int iParam1) { return func_185(iParam0, iParam1, 1); }

// Position - 0x2C376
int func_185(int iParam0, bool bParam1, int iParam2) {
	int iVar0;

	if (iParam0 == func_187()) {
		return 0;
	}
	if (!bParam1) {
		if (func_186(iParam0, iParam2)) {
			return 0;
		}
	}
	iVar0 = Global_1619421[iParam0 /*390*/].f_11;
	if (iVar0 != func_187() && Global_1619421[iVar0 /*390*/].f_11.f_289 == iParam2) {
		return 1;
	}
	return 0;
}

// Position - 0x2C3D2
bool func_186(int iParam0, int iParam1) {
	if (iParam0 != func_187()) {
		if (Global_1619421[iParam0 /*390*/].f_11 != func_187()) {
			if (Global_1619421[iParam0 /*390*/].f_11 == iParam0 &&
				Global_1619421[iParam0 /*390*/].f_11.f_289 == iParam1) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x2C421
int func_187() { return -1; }

// Position - 0x2C42A
int func_188(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	int iVar23;

	if (iParam0 == joaat("mp_m_freemode_01")) {
		if (iParam1 == 11) {
			if (iParam2 == 1) {
				return 73;
			}
			else if (iParam2 == 3) {
				return 74;
			}
			else if (iParam2 == 5) {
				return 75;
			}
			else if (iParam2 == 7) {
				return 76;
			}
			else if (iParam2 == 4) {
				return 77;
			}
			else if (iParam2 == 8) {
				return 78;
			}
			else if (iParam2 == 11) {
				return 79;
			}
			else if (iParam2 == 19) {
				return 80;
			}
			else if (iParam2 == 21) {
				return 81;
			}
			else if (iParam2 == 22) {
				return 82;
			}
			else if (iParam2 == 24) {
				return 83;
			}
			else if (iParam2 == 20) {
				return 84;
			}
			else if (iParam2 == 30) {
				return 85;
			}
			else if (iParam2 == 23) {
				if (func_192(89, -1)) {
					return 89;
				}
			}
			else if (iParam2 == 17) {
				if (func_192(88, -1)) {
					return 88;
				}
			}
			else if (iParam2 == 28) {
				if (func_192(87, -1)) {
					return 87;
				}
			}
			else if (iParam2 == 41) {
				return 86;
			}
			else if (iParam2 >= 237) {
				iVar0 = func_104(iParam0, iParam2, 11, 3);
				if (iVar0 != -1) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1113995558, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar0, 362493804, 0)) {
						iVar1 = dlc1::_get_num_forced_components(iVar0);
						iVar2 = 0;
						while (iVar2 < iVar1) {
							dlc1::get_forced_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
							if (iVar5 == 10) {
								if (iVar3 != 0 && iVar3 != 1849449579) {
									return func_189(iVar3, 3);
								}
								else {
									return uVar4;
								}
							}
							iVar2++;
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1467682989, 0)) {
						if (iParam3 == 0) {
							iParam3 = func_16(1751, -1, 0);
						}
						return func_189(iParam3, 3);
					}
				}
			}
		}
		else if (iParam1 == 8) {
			if (iParam2 == 1) {
				return 73;
			}
			else if (iParam2 == 3) {
				return 74;
			}
			else if (iParam2 == 5) {
				return 75;
			}
			else if (iParam2 == 7) {
				return 76;
			}
			else if (iParam2 == 4) {
				return 77;
			}
			else if (iParam2 == 8) {
				return 78;
			}
			else if (iParam2 == 11) {
				return 79;
			}
			else if (iParam2 == 23) {
				if (func_192(89, -1)) {
					return 89;
				}
			}
			else if (iParam2 == 17) {
				if (func_192(88, -1)) {
					return 88;
				}
			}
			else if (iParam2 == 28) {
				if (func_192(87, -1)) {
					return 87;
				}
			}
			else if (iParam2 == 33) {
				return 73;
			}
			else if (iParam2 == 35) {
				return 74;
			}
			else if (iParam2 == 37) {
				return 75;
			}
			else if (iParam2 == 39) {
				return 76;
			}
			else if (iParam2 == 36) {
				return 77;
			}
			else if (iParam2 == 40) {
				return 78;
			}
			else if (iParam2 == 43) {
				return 79;
			}
			else if (iParam2 == 19) {
				return 80;
			}
			else if (iParam2 == 21) {
				return 81;
			}
			else if (iParam2 == 22) {
				return 82;
			}
			else if (iParam2 == 24) {
				return 83;
			}
			else if (iParam2 == 20) {
				return 84;
			}
			else if (iParam2 == 30) {
				return 85;
			}
			else if (iParam2 == 227) {
				return 80;
			}
			else if (iParam2 == 229) {
				return 81;
			}
			else if (iParam2 == 230) {
				return 82;
			}
			else if (iParam2 == 232) {
				return 83;
			}
			else if (iParam2 == 228) {
				return 84;
			}
			else if (iParam2 == 238) {
				return 85;
			}
			else if (iParam2 == 231) {
				if (func_192(89, -1)) {
					return 89;
				}
			}
			else if (iParam2 == 225) {
				if (func_192(88, -1)) {
					return 88;
				}
			}
			else if (iParam2 == 236) {
				if (func_192(87, -1)) {
					return 87;
				}
			}
			else if (iParam2 >= 241) {
				iVar6 = func_104(iParam0, iParam2, 8, 3);
				if (iVar6 != -1) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, 1113995558, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar6, 362493804, 0)) {
						iVar7 = dlc1::_get_num_forced_components(iVar6);
						iVar8 = 0;
						while (iVar8 < iVar7) {
							dlc1::get_forced_component(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
							if (iVar11 == 10) {
								if (iVar9 != 0 && iVar9 != 1849449579) {
									return func_189(iVar9, 3);
								}
								else {
									return uVar10;
								}
							}
							iVar8++;
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1467682989, 0)) {
						if (iParam3 == 0) {
							iParam3 = func_16(1751, -1, 0);
						}
						return func_189(iParam3, 3);
					}
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		if (iParam1 == 11) {
			if (iParam2 == 1) {
				return 75;
			}
			else if (iParam2 == 2) {
				return 77;
			}
			else if (iParam2 == 4) {
				if (func_192(89, -1)) {
					return 89;
				}
			}
			else if (iParam2 == 7) {
				if (func_192(88, -1)) {
					return 88;
				}
			}
			else if (iParam2 == 9) {
				if (func_192(87, -1)) {
					return 87;
				}
			}
			else if (iParam2 == 32) {
				return 78;
			}
			else if (iParam2 == 33) {
				return 79;
			}
			else if (iParam2 == 34) {
				return 80;
			}
			else if (iParam2 == 35) {
				return 81;
			}
			else if (iParam2 == 36) {
				return 82;
			}
			else if (iParam2 == 62) {
				return 76;
			}
			else if (iParam2 == 63) {
				return 83;
			}
			else if (iParam2 == 186) {
				return 84;
			}
			else if (iParam2 == 187) {
				return 85;
			}
			else if (iParam2 == 191) {
				return 74;
			}
			else if (iParam2 >= 256) {
				iVar12 = func_104(iParam0, iParam2, 11, 4);
				if (iVar12 != -1) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar12, 1113995558, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar12, 362493804, 0)) {
						iVar13 = dlc1::_get_num_forced_components(iVar12);
						iVar14 = 0;
						while (iVar14 < iVar13) {
							dlc1::get_forced_component(iVar12, iVar14, &iVar15, &uVar16, &iVar17);
							if (iVar17 == 10) {
								if (iVar15 != 0 && iVar15 != 1849449579) {
									return func_189(iVar15, 4);
								}
								else {
									return uVar16;
								}
							}
							iVar14++;
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar12, -1467682989, 0)) {
						if (iParam3 == 0) {
							iParam3 = func_16(1751, -1, 0);
						}
						return func_189(iParam3, 4);
					}
				}
			}
		}
		else if (iParam1 == 8) {
			if (iParam2 == 1) {
				return 75;
			}
			else if (iParam2 == 2) {
				return 77;
			}
			else if (iParam2 == 4) {
				if (func_192(89, -1)) {
					return 89;
				}
			}
			else if (iParam2 == 7) {
				if (func_192(88, -1)) {
					return 88;
				}
			}
			else if (iParam2 == 9) {
				if (func_192(87, -1)) {
					return 87;
				}
			}
			else if (iParam2 == 17) {
				return 75;
			}
			else if (iParam2 == 18) {
				return 77;
			}
			else if (iParam2 == 20) {
				if (func_192(89, -1)) {
					return 89;
				}
			}
			else if (iParam2 == 23) {
				if (func_192(88, -1)) {
					return 88;
				}
			}
			else if (iParam2 == 25) {
				if (func_192(87, -1)) {
					return 87;
				}
			}
			else if (iParam2 == 81) {
				return 84;
			}
			else if (iParam2 == 82) {
				return 85;
			}
			else if (iParam2 == 86) {
				return 74;
			}
			else if (iParam2 >= 136) {
				iVar18 = func_104(iParam0, iParam2, 8, 4);
				if (iVar18 != -1) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar18, 1113995558, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar18, 362493804, 0)) {
						iVar19 = dlc1::_get_num_forced_components(iVar18);
						iVar20 = 0;
						while (iVar20 < iVar19) {
							dlc1::get_forced_component(iVar18, iVar20, &iVar21, &uVar22, &iVar23);
							if (iVar23 == 10) {
								if (iVar21 != 0 && iVar21 != 1849449579) {
									return func_189(iVar21, 4);
								}
								else {
									return uVar22;
								}
							}
							iVar20++;
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar18, -1467682989, 0)) {
						if (iParam3 == 0) {
							iParam3 = func_16(1751, -1, 0);
						}
						return func_189(iParam3, 4);
					}
				}
			}
		}
	}
	return -1;
}

// Position - 0x2CC8A
int func_189(int iParam0, int iParam1) {
	int *iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	if (iParam1 == 3) {
		if (func_191(iParam0, &iVar0)) {
			return iVar0;
		}
	}
	else if (iParam1 == 4) {
		if (func_190(iParam0, &iVar0)) {
			return iVar0;
		}
	}
	iVar2 = dlc1::_get_num_decorations(iParam1);
	iVar1 = 0;
	while (iVar1 < iVar2) {
		if (dlc1::_0xFF56381874F82086(iParam1, iVar1, &Var3)) {
			if (iParam0 == Var3.f_3) {
				return 129 + iVar1;
			}
		}
		iVar1++;
	}
	return -1;
}

// Position - 0x2CCFB
bool func_190(int iParam0, int *iParam1) {
	int iVar0;

	iVar0 = -1;
	switch (iParam0) {
	case 497719213: iVar0 = 0; break;

	case -1575660783: iVar0 = 1; break;

	case -720631087: iVar0 = 2; break;

	case 2143620721: iVar0 = 3; break;

	case 2049754822: iVar0 = 4; break;

	case -1293749076: iVar0 = 5; break;

	case -1571403599: iVar0 = 6; break;

	case -711123906: iVar0 = 7; break;

	case 152801037: iVar0 = 8; break;

	case -1324018585: iVar0 = 9; break;

	case -481068829: iVar0 = 10; break;

	case -1486741196: iVar0 = 11; break;

	case 939412564: iVar0 = 12; break;

	case 1187637739: iVar0 = 13; break;

	case -1092669445: iVar0 = 14; break;

	case 1659530389: iVar0 = 15; break;

	case 996857777: iVar0 = 16; break;

	case 817476859: iVar0 = 17; break;

	case -17051268: iVar0 = 18; break;

	case 1293774274: iVar0 = 19; break;

	case 567121699: iVar0 = 20; break;

	case -1179302160: iVar0 = 21; break;

	case -949165473: iVar0 = 22; break;

	case 354975189: iVar0 = 23; break;

	case -489121482: iVar0 = 24; break;

	case -1636954018: iVar0 = 25; break;

	case -1277740240: iVar0 = 26; break;

	case -1047439708: iVar0 = 27; break;

	case -814026121: iVar0 = 28; break;

	case 1732157956: iVar0 = 29; break;

	case 1024282018: iVar0 = 30; break;

	case -2099685063: iVar0 = 31; break;

	case 1483932781: iVar0 = 32; break;

	case 1406925627: iVar0 = 33; break;

	case 698590923: iVar0 = 34; break;

	case 1869001296: iVar0 = 35; break;

	case 1169907450: iVar0 = 36; break;

	case 717727185: iVar0 = 37; break;

	case 1058197095: iVar0 = 38; break;

	case 434115743: iVar0 = 39; break;

	case 665432114: iVar0 = 40; break;

	case 1198780358: iVar0 = 41; break;

	case -2128873857: iVar0 = 42; break;

	case -148547780: iVar0 = 43; break;

	case 1819096318: iVar0 = 44; break;

	case 1051122042: iVar0 = 45; break;

	case -1350495965: iVar0 = 46; break;

	case -150859291: iVar0 = 47; break;

	case -1186193045: iVar0 = 48; break;

	case -1206837515: iVar0 = 49; break;

	case -1513653662: iVar0 = 50; break;

	case -543948331: iVar0 = 51; break;

	case -175559233: iVar0 = 52; break;

	case -131530830: iVar0 = 53; break;

	case -1816086813: iVar0 = 54; break;

	case -2113006722: iVar0 = 55; break;

	case -1101886458: iVar0 = 56; break;

	case -1398740829: iVar0 = 57; break;

	case 1939258347: iVar0 = 58; break;

	case -1004151544: iVar0 = 59; break;

	case -822873436: iVar0 = 60; break;

	case -1445222284: iVar0 = 61; break;

	case -63910623: iVar0 = 62; break;

	case 101834979: iVar0 = 63; break;

	case -673512330: iVar0 = 64; break;

	case -423845319: iVar0 = 65; break;

	case 963561372: iVar0 = 66; break;

	case 1384839636: iVar0 = 67; break;

	case -1712879828: iVar0 = 68; break;

	case -951688727: iVar0 = 69; break;

	case -1132639145: iVar0 = 70; break;

	case -513632731: iVar0 = 71; break;

	case 263680718: iVar0 = 72; break;

	case 36296627: iVar0 = 73; break;

	case 800240324: iVar0 = 74; break;

	case 614243480: iVar0 = 75; break;

	case 1408138043: iVar0 = 76; break;

	case 957564293: iVar0 = 77; break;

	case -1614279399: iVar0 = 78; break;

	case -1451286393: iVar0 = 79; break;

	case -1758069771: iVar0 = 80; break;

	case -1225475222: iVar0 = 81; break;

	case -1992892433: iVar0 = 82; break;

	case -1838157215: iVar0 = 83; break;

	case 1688803028: iVar0 = 84; break;

	case 1844259164: iVar0 = 85; break;

	case 1070943545: iVar0 = 86; break;

	case 1234460855: iVar0 = 87; break;

	case -753798460: iVar0 = 88; break;

	case -1453351072: iVar0 = 89; break;

	case -1308053326: iVar0 = 90; break;

	case -2083859401: iVar0 = 91; break;

	case 1586137527: iVar0 = 92; break;

	case 1884564810: iVar0 = 93; break;

	case 1092964089: iVar0 = 94; break;

	case 1264280421: iVar0 = 95; break;

	case 496601058: iVar0 = 96; break;

	case 861352797: iVar0 = 97; break;

	case 1418328330: iVar0 = 98; break;

	case 1784554566: iVar0 = 99; break;
	}
	switch (iParam0) {
	case 2081736627: iVar0 = 100; break;

	case -1897271971: iVar0 = 101; break;

	case -1666742056: iVar0 = 102; break;

	case -1282165072: iVar0 = 103; break;

	case -1052880379: iVar0 = 104; break;

	case -745474390: iVar0 = 105; break;

	case -515796465: iVar0 = 106; break;

	case -811206225: iVar0 = 107; break;

	case -1586815686: iVar0 = 108; break;

	case -1423429452: iVar0 = 109; break;

	case -1697869815: iVar0 = 110; break;

	case -1470846183: iVar0 = 111; break;

	case 1093884035: iVar0 = 112; break;

	case 861256904: iVar0 = 113; break;

	case 603201029: iVar0 = 114; break;

	case 1991426949: iVar0 = 115; break;

	case -135838228: iVar0 = 116; break;

	case 121616864: iVar0 = 117; break;

	case -834517002: iVar0 = 118; break;

	case -403932342: iVar0 = 119; break;

	case -1179738417: iVar0 = 120; break;

	case -1022250603: iVar0 = 121; break;

	case 558694786: iVar0 = 122; break;

	case 569279177: iVar0 = 123; break;

	case 544309199: iVar0 = 124; break;

	case 1190448341: iVar0 = 125; break;

	case 885139568: iVar0 = 126; break;

	case -1845683606: iVar0 = 127; break;

	case -1555317497: iVar0 = 128; break;

	case 1704673699: iVar0 = 129; break;

	case 1993401358: iVar0 = 130; break;

	case 1227065524: iVar0 = 131; break;

	case -533227790: iVar0 = 132; break;

	case 309459814: iVar0 = 133; break;

	case 77815753: iVar0 = 134; break;

	case -280939203: iVar0 = 135; break;

	case 1246882601: iVar0 = 136; break;

	case 314833986: iVar0 = 137; break;

	case -25635924: iVar0 = 138; break;

	case 351567983: iVar0 = 139; break;

	case -2027428652: iVar0 = 140; break;

	case 962677064: iVar0 = 141; break;

	case -105475497: iVar0 = 142; break;

	case 766835283: iVar0 = 143; break;

	case 471979821: iVar0 = 144; break;

	case 1122542778: iVar0 = 145; break;

	case 815530017: iVar0 = 146; break;

	case 1157900525: iVar0 = 147; break;

	case 859243859: iVar0 = 148; break;

	case 2032013608: iVar0 = 149; break;

	case 1471663700: iVar0 = 150; break;

	case -1679206722: iVar0 = 151; break;

	case -309397848: iVar0 = 152; break;

	case 534666054: iVar0 = 153; break;

	case -769376301: iVar0 = 154; break;

	case 1531057961: iVar0 = 155; break;

	case 1986678137: iVar0 = 156; break;

	case 2142789653: iVar0 = 157; break;

	case 7463306: iVar0 = 158; break;

	case 308053343: iVar0 = 159; break;

	case 753842819: iVar0 = 160; break;

	case 1052794406: iVar0 = 161; break;

	case -695726661: iVar0 = 162; break;

	case -1001821890: iVar0 = 163; break;

	case -1425459522: iVar0 = 164; break;

	case 1412653072: iVar0 = 165; break;

	case 1163510365: iVar0 = 166; break;

	case 933242602: iVar0 = 167; break;

	case -1347021116: iVar0 = 168; break;

	case 1297354841: iVar0 = 169; break;

	case -839806574: iVar0 = 170; break;

	case -542100209: iVar0 = 171; break;

	case 1472218269: iVar0 = 172; break;

	case 1783196079: iVar0 = 173; break;

	case 1007062314: iVar0 = 174; break;

	case -870732522: iVar0 = 175; break;

	case 547542627: iVar0 = 176; break;

	case 863894553: iVar0 = 177; break;

	case -2099242332: iVar0 = 178; break;

	case -1860028632: iVar0 = 179; break;

	case -560967165: iVar0 = 180; break;

	case -59437904: iVar0 = 181; break;

	case 757067269: iVar0 = 182; break;

	case 455625238: iVar0 = 183; break;

	case -1750514914: iVar0 = 184; break;

	case -983982466: iVar0 = 185; break;

	case -232228837: iVar0 = 186; break;

	case 1558269323: iVar0 = 187; break;

	case 2070579873: iVar0 = 188; break;

	case -1203181916: iVar0 = 189; break;

	case -2112587204: iVar0 = 190; break;

	case 1942412705: iVar0 = 191; break;

	case -1846437386: iVar0 = 192; break;

	case 61799795: iVar0 = 193; break;

	case -1388490611: iVar0 = 194; break;

	case -1627212776: iVar0 = 195; break;

	case 1525246127: iVar0 = 196; break;

	case -11341151: iVar0 = 197; break;

	case 516055815: iVar0 = 198; break;

	case -1034642040: iVar0 = 199; break;
	}
	switch (iParam0) {
	case 1022637316: iVar0 = 200; break;

	case -1677156418: iVar0 = 201; break;

	case -1130213300: iVar0 = 202; break;

	case 104062694: iVar0 = 203; break;

	case 869579299: iVar0 = 204; break;

	case 1201332655: iVar0 = 205; break;

	case 1028967715: iVar0 = 206; break;

	case -1651634800: iVar0 = 207; break;

	case -892278763: iVar0 = 208; break;

	case -1032005779: iVar0 = 209; break;

	case -255675400: iVar0 = 210; break;

	case 1890137027: iVar0 = 211; break;

	case -406805808: iVar0 = 212; break;

	case -592540500: iVar0 = 213; break;

	case 205417419: iVar0 = 214; break;

	case -2127276619: iVar0 = 215; break;

	case -1362677538: iVar0 = 216; break;

	case -1549722990: iVar0 = 217; break;

	case 3495990: iVar0 = 218; break;

	case -285526590: iVar0 = 219; break;

	case 1907377338: iVar0 = 220; break;

	case 2136399879: iVar0 = 221; break;

	case 1568410532: iVar0 = 222; break;

	case 1068879892: iVar0 = 223; break;

	case -1592750929: iVar0 = 224; break;

	case 772896404: iVar0 = 225; break;

	case -1999229916: iVar0 = 226; break;

	case -744701520: iVar0 = 227; break;

	case -425039925: iVar0 = 228; break;

	case -798409911: iVar0 = 229; break;

	case 1379974898: iVar0 = 230; break;

	case -1681436154: iVar0 = 231; break;

	case -1486919370: iVar0 = 232; break;

	case 2014677667: iVar0 = 233; break;

	case 325697857: iVar0 = 234; break;

	case -1188819501: iVar0 = 235; break;

	case -1765193438: iVar0 = 236; break;

	case -1416269126: iVar0 = 237; break;

	case -2111365154: iVar0 = 238; break;

	case -1880573087: iVar0 = 239; break;

	case 1421296887: iVar0 = 240; break;

	case 1655562468: iVar0 = 241; break;

	case 946048080: iVar0 = 242; break;

	case 1188768063: iVar0 = 243; break;

	case 498456313: iVar0 = 244; break;

	case 323007907: iVar0 = 245; break;

	case -1325371100: iVar0 = 246; break;

	case -829313978: iVar0 = 247; break;

	case -530624543: iVar0 = 248; break;

	case -299046020: iVar0 = 249; break;

	case 1812260650: iVar0 = 250; break;

	case 2043511487: iVar0 = 251; break;

	case -1753235933: iVar0 = 252; break;

	case -1525589690: iVar0 = 253; break;

	case 31003408: iVar0 = 254; break;

	case -1864998224: iVar0 = 255; break;

	case -2140814897: iVar0 = 256; break;

	case 223468453: iVar0 = 257; break;

	case -83970305: iVar0 = 258; break;

	case -406843262: iVar0 = 259; break;

	case -954740942: iVar0 = 260; break;

	case -1675526854: iVar0 = 261; break;

	case 2111717556: iVar0 = 262; break;

	case -415395003: iVar0 = 263; break;

	case 427521984: iVar0 = 264; break;

	case 1570178485: iVar0 = 265; break;

	case -1619850916: iVar0 = 266; break;

	case -713067148: iVar0 = 267; break;

	case 946477614: iVar0 = 268; break;

	case -1423343701: iVar0 = 269; break;

	case 445931457: iVar0 = 270; break;

	case 678558588: iVar0 = 271; break;

	case -854631987: iVar0 = 272; break;

	case -1707871209: iVar0 = 273; break;

	case 1675446188: iVar0 = 274; break;

	case 1911627074: iVar0 = 275; break;

	case -607391498: iVar0 = 276; break;

	case -1544625218: iVar0 = 277; break;

	case 1185175875: iVar0 = 278; break;

	case 155591269: iVar0 = 279; break;

	case -1057958846: iVar0 = 280; break;

	case -1853795495: iVar0 = 281; break;

	case -1860485560: iVar0 = 282; break;

	case 499288642: iVar0 = 283; break;

	case -7887054: iVar0 = 284; break;

	case -1553041502: iVar0 = 285; break;

	case -1080591445: iVar0 = 286; break;

	case -741060436: iVar0 = 287; break;

	case 645634644: iVar0 = 288; break;

	case -1096728771: iVar0 = 289; break;

	case 503268386: iVar0 = 290; break;

	case 109804153: iVar0 = 291; break;

	case 1410910279: iVar0 = 292; break;

	case 1501700194: iVar0 = 293; break;

	case -1793199216: iVar0 = 294; break;

	case 1405944575: iVar0 = 295; break;

	case 1731382556: iVar0 = 296; break;

	case 1743809026: iVar0 = 297; break;

	case 1589237530: iVar0 = 298; break;

	case -1558441108: iVar0 = 299; break;
	}
	switch (iParam0) {
	case 793815980: iVar0 = 303; break;

	case 87277824: iVar0 = 304; break;

	case 1305470790: iVar0 = 305; break;

	case 252924758: iVar0 = 306; break;

	case 1043745875: iVar0 = 307; break;

	case 24304530: iVar0 = 308; break;

	case 582246031: iVar0 = 309; break;

	case 1840225396: iVar0 = 310; break;

	case -47863515: iVar0 = 311; break;

	case 26968202: iVar0 = 312; break;

	case 1720638120: iVar0 = 313; break;

	case 1372737856: iVar0 = 314; break;

	case -675719916: iVar0 = 315; break;

	case -610888268: iVar0 = 316; break;

	case -129698248: iVar0 = 317; break;

	case 1060644905: iVar0 = 318; break;

	case 776078819: iVar0 = 319; break;

	case -1069464482: iVar0 = 320; break;

	case -1342875239: iVar0 = 321; break;

	case 1967892405: iVar0 = 322; break;

	case 642864781: iVar0 = 323; break;

	case 1270860039: iVar0 = 324; break;

	case -1290780406: iVar0 = 325; break;

	case 1127641545: iVar0 = 326; break;

	case -1221948530: iVar0 = 327; break;

	case 1954153055: iVar0 = 328; break;

	case 543727307: iVar0 = 329; break;

	case -1806626643: iVar0 = 330; break;

	case 1146362323: iVar0 = 331; break;

	case -1918158051: iVar0 = 332; break;

	case -1835082731: iVar0 = 333; break;

	case 1935907419: iVar0 = 334; break;

	case 961997868: iVar0 = 335; break;

	case -415246024: iVar0 = 336; break;

	case -2003529037: iVar0 = 337; break;

	case -1272951326: iVar0 = 338; break;

	case 837851491: iVar0 = 339; break;

	case -64649653: iVar0 = 340; break;

	case 1997623301: iVar0 = 341; break;

	case 1177835340: iVar0 = 342; break;

	case -1261787835: iVar0 = 343; break;

	case -965491494: iVar0 = 344; break;

	case 939374190: iVar0 = 345; break;

	case 149461503: iVar0 = 346; break;

	case -1117498985: iVar0 = 347; break;

	case 1184468662: iVar0 = 348; break;

	case -772488648: iVar0 = 349; break;

	case -1399171334: iVar0 = 350; break;

	case -963164512: iVar0 = 351; break;

	case -1284517669: iVar0 = 352; break;

	case 1613773443: iVar0 = 353; break;

	case 1963092516: iVar0 = 354; break;

	case -878642668: iVar0 = 355; break;

	case -1618544925: iVar0 = 356; break;

	case 1185417232: iVar0 = 357; break;

	case -1649044153: iVar0 = 358; break;

	case -1293956525: iVar0 = 359; break;

	case -84085370: iVar0 = 360; break;

	case -943861479: iVar0 = 361; break;

	case -1355455834: iVar0 = 362; break;

	case 711764191: iVar0 = 363; break;

	case 41616632: iVar0 = 364; break;

	case -2053984264: iVar0 = 365; break;

	case -522832741: iVar0 = 366; break;

	case 711940316: iVar0 = 367; break;

	case -1512107004: iVar0 = 368; break;

	case -273305505: iVar0 = 369; break;

	case -779122930: iVar0 = 370; break;

	case 565678099: iVar0 = 371; break;

	case 2130135469: iVar0 = 372; break;

	case 2142072717: iVar0 = 373; break;

	case -636638153: iVar0 = 374; break;

	case 289539239: iVar0 = 375; break;

	case -1040822561: iVar0 = 376; break;

	case 217486581: iVar0 = 377; break;

	case -2147244302: iVar0 = 378; break;

	case 830186237: iVar0 = 379; break;

	case -1902384566: iVar0 = 380; break;

	case 1471583453: iVar0 = 381; break;

	case 2007332931: iVar0 = 382; break;

	case 1104156493: iVar0 = 383; break;

	case 616400258: iVar0 = 384; break;

	case 511243162: iVar0 = 385; break;

	case -477451680: iVar0 = 386; break;

	case 743616295: iVar0 = 387; break;

	case 712215816: iVar0 = 388; break;

	case 1475570942: iVar0 = 389; break;

	case -1768978416: iVar0 = 390; break;

	case -2139711822: iVar0 = 391; break;

	case -1509236263: iVar0 = 392; break;

	case -1143383459: iVar0 = 393; break;

	case -1690206781: iVar0 = 394; break;

	case 1947095236: iVar0 = 395; break;

	case 300333876: iVar0 = 396; break;

	case 37732721: iVar0 = 397; break;

	case 959183706: iVar0 = 398; break;

	case -1542393224: iVar0 = 399; break;
	}
	switch (iParam0) {
	case 874488242: iVar0 = 400; break;

	case 1389335000: iVar0 = 401; break;

	case -366075547: iVar0 = 402; break;

	case -1125431584: iVar0 = 403; break;

	case -2000068963: iVar0 = 404; break;

	case 1497445248: iVar0 = 405; break;

	case 1989766704: iVar0 = 406; break;

	case -2086401979: iVar0 = 407; break;

	case -1846467361: iVar0 = 408; break;

	case -1325458477: iVar0 = 409; break;

	case -566725051: iVar0 = 410; break;

	case -787850263: iVar0 = 411; break;

	case -1885021085: iVar0 = 412; break;

	case 979307144: iVar0 = 413; break;

	case -473732439: iVar0 = 414; break;

	case 2062186390: iVar0 = 415; break;

	case -60867780: iVar0 = 416; break;

	case 926967912: iVar0 = 417; break;

	case -1886278590: iVar0 = 418; break;

	case -1314959708: iVar0 = 419; break;

	case -1696774529: iVar0 = 420; break;

	case -356446484: iVar0 = 421; break;

	case 857810380: iVar0 = 422; break;

	case -629676646: iVar0 = 423; break;

	case -1879530481: iVar0 = 424; break;

	case -1265847311: iVar0 = 425; break;

	case 32094424: iVar0 = 426; break;

	case 1969286744: iVar0 = 427; break;

	case 560620683: iVar0 = 428; break;

	case -148312642: iVar0 = 429; break;

	case -578277428: iVar0 = 430; break;

	case -718909970: iVar0 = 431; break;

	case -859026859: iVar0 = 432; break;

	case -839897805: iVar0 = 433; break;

	case 1676439910: iVar0 = 434; break;

	case -294157184: iVar0 = 435; break;

	case -1222200221: iVar0 = 436; break;

	case 874532672: iVar0 = 437; break;

	case -135929055: iVar0 = 438; break;

	case 1654917353: iVar0 = 439; break;

	case -13131391: iVar0 = 440; break;

	case 154845196: iVar0 = 441; break;

	case -1147884322: iVar0 = 442; break;

	case 291693311: iVar0 = 443; break;

	case -1401933531: iVar0 = 444; break;

	case 1820267020: iVar0 = 445; break;

	case 2134488961: iVar0 = 446; break;

	case -1861952745: iVar0 = 447; break;

	case 994458405: iVar0 = 448; break;

	case -1931715008: iVar0 = 449; break;

	case 1308745884: iVar0 = 450; break;

	case -1322955084: iVar0 = 451; break;

	case -816658183: iVar0 = 452; break;

	case -988307698: iVar0 = 453; break;

	case -1341411308: iVar0 = 454; break;

	case 1865570599: iVar0 = 455; break;

	case -549458010: iVar0 = 456; break;

	case -1328545177: iVar0 = 457; break;

	case -1361353619: iVar0 = 458; break;

	case 1103253806: iVar0 = 459; break;

	case -24183456: iVar0 = 460; break;

	case 436214104: iVar0 = 461; break;

	case 2072615278: iVar0 = 462; break;

	case -1131891426: iVar0 = 463; break;

	case 1392085456: iVar0 = 464; break;

	case 2035895234: iVar0 = 465; break;

	case 368784798: iVar0 = 466; break;

	case 1398938833: iVar0 = 467; break;

	case 1250040566: iVar0 = 468; break;

	case 2133228190: iVar0 = 469; break;

	case 675551540: iVar0 = 470; break;

	case -1826137848: iVar0 = 471; break;

	case -144105601: iVar0 = 472; break;

	case -748983650: iVar0 = 473; break;

	case 630291027: iVar0 = 474; break;

	case 293950434: iVar0 = 475; break;

	case 1857352111: iVar0 = 476; break;

	case -777671131: iVar0 = 477; break;

	case 221602924: iVar0 = 478; break;

	case 2039295216: iVar0 = 479; break;

	case 1800147054: iVar0 = 480; break;

	case -2019505897: iVar0 = 481; break;

	case 1647997020: iVar0 = 482; break;

	case -1405854945: iVar0 = 483; break;

	case -1171294997: iVar0 = 484; break;

	case -77076350: iVar0 = 485; break;

	case 775569873: iVar0 = 486; break;

	case 330569485: iVar0 = 487; break;

	case -1549217620: iVar0 = 488; break;

	case 1674429052: iVar0 = 489; break;

	case -254669596: iVar0 = 490; break;

	case 1802602254: iVar0 = 491; break;

	case -941072260: iVar0 = 492; break;

	case -1844749517: iVar0 = 493; break;

	case 82745424: iVar0 = 494; break;

	case -673460083: iVar0 = 495; break;

	case -99954496: iVar0 = 496; break;

	case 2078163456: iVar0 = 497; break;

	case 1362343227: iVar0 = 498; break;

	case 1176005743: iVar0 = 499; break;
	}
	switch (iParam0) {
	case -1504557219: iVar0 = 500; break;

	case 367912881: iVar0 = 501; break;

	case -836343280: iVar0 = 502; break;

	case -46521805: iVar0 = 503; break;

	case -743048780: iVar0 = 504; break;

	case 1294865118: iVar0 = 505; break;

	case -1479686374: iVar0 = 506; break;

	case 256017193: iVar0 = 507; break;

	case 1232443120: iVar0 = 508; break;

	case -803282271: iVar0 = 509; break;

	case 1788600442: iVar0 = 510; break;

	case 1439605343: iVar0 = 511; break;

	case -1094679264: iVar0 = 512; break;

	case 1230482241: iVar0 = 513; break;

	case 2054714291: iVar0 = 514; break;

	case 192117676: iVar0 = 515; break;

	case -2071204405: iVar0 = 516; break;

	case -1618181476: iVar0 = 517; break;

	case -1408253665: iVar0 = 518; break;

	case -134185391: iVar0 = 519; break;

	case -785783411: iVar0 = 520; break;

	case -633466710: iVar0 = 521; break;

	case -2072487372: iVar0 = 522; break;

	case 1211025296: iVar0 = 523; break;

	case 742659337: iVar0 = 524; break;

	case 1365533160: iVar0 = 525; break;

	case 1213205618: iVar0 = 526; break;

	case -164052103: iVar0 = 527; break;

	case -1306490297: iVar0 = 528; break;

	case -994802645: iVar0 = 529; break;

	case 637406209: iVar0 = 530; break;

	case -170855031: iVar0 = 531; break;

	case 1333098305: iVar0 = 532; break;

	case 119103934: iVar0 = 533; break;

	case -141369051: iVar0 = 534; break;

	case -593355218: iVar0 = 535; break;

	case 316832763: iVar0 = 536; break;

	case -393713544: iVar0 = 537; break;

	case -1876234625: iVar0 = 538; break;

	case -1453082334: iVar0 = 539; break;

	case -1397705983: iVar0 = 540; break;

	case -1278086171: iVar0 = 541; break;

	case -1510892268: iVar0 = 542; break;

	case 204876084: iVar0 = 543; break;

	case -988359492: iVar0 = 544; break;

	case 975745281: iVar0 = 545; break;

	case 591099372: iVar0 = 546; break;

	case -1014948306: iVar0 = 547; break;

	case -1866439788: iVar0 = 548; break;

	case -1265767186: iVar0 = 549; break;

	case 2070931859: iVar0 = 550; break;

	case 413611416: iVar0 = 551; break;

	case 765001063: iVar0 = 552; break;

	case -686624622: iVar0 = 553; break;

	case -937548349: iVar0 = 554; break;

	case 212584159: iVar0 = 555; break;

	case -328340062: iVar0 = 556; break;

	case 1657725123: iVar0 = 557; break;

	case -1517964336: iVar0 = 558; break;

	case -785490239: iVar0 = 559; break;

	case -11769229: iVar0 = 560; break;

	case 745912106: iVar0 = 561; break;

	case -2064265098: iVar0 = 562; break;

	case -1515892875: iVar0 = 563; break;

	case 1368234729: iVar0 = 564; break;

	case 1960230923: iVar0 = 565; break;

	case -860169810: iVar0 = 566; break;

	case -177882114: iVar0 = 567; break;

	case 661384509: iVar0 = 568; break;

	case 1221860095: iVar0 = 569; break;

	case 698192473: iVar0 = 570; break;

	case -817251083: iVar0 = 571; break;

	case -1108876323: iVar0 = 572; break;

	case 1274482696: iVar0 = 573; break;

	case 468009056: iVar0 = 574; break;

	case 2063732427: iVar0 = 575; break;

	case -764016411: iVar0 = 576; break;

	case -1530816149: iVar0 = 577; break;

	case 1189996018: iVar0 = 578; break;

	case -210110115: iVar0 = 579; break;

	case -207110256: iVar0 = 580; break;

	case 1801308144: iVar0 = 581; break;

	case 320631086: iVar0 = 582; break;

	case 1022560466: iVar0 = 583; break;

	case -952946041: iVar0 = 584; break;

	case 1321460664: iVar0 = 585; break;

	case -781625914: iVar0 = 586; break;

	case -1522247835: iVar0 = 587; break;

	case -1531245231: iVar0 = 588; break;

	case -1070472994: iVar0 = 589; break;

	case -2113341060: iVar0 = 590; break;

	case 965047293: iVar0 = 591; break;

	case 2114285045: iVar0 = 592; break;

	case -1635032213: iVar0 = 593; break;

	case 1310864345: iVar0 = 594; break;

	case -973977633: iVar0 = 595; break;

	case -1439643329: iVar0 = 596; break;

	case 434150104: iVar0 = 597; break;

	case 1243301688: iVar0 = 598; break;

	case -1233567982: iVar0 = 599; break;
	}
	switch (iParam0) {
	case 1262886680: iVar0 = 600; break;

	case 283135569: iVar0 = 601; break;

	case -548917969: iVar0 = 602; break;

	case 153465812: iVar0 = 603; break;

	case 1916093085: iVar0 = 604; break;

	case -701486200: iVar0 = 605; break;

	case 1951718630: iVar0 = 606; break;

	case -1981978861: iVar0 = 607; break;

	case -1998094267: iVar0 = 608; break;

	case -718445629: iVar0 = 609; break;

	case -35697399: iVar0 = 610; break;

	case -899081349: iVar0 = 611; break;

	case 1123547916: iVar0 = 612; break;

	case -1139893782: iVar0 = 613; break;

	case 1446511785: iVar0 = 614; break;

	case 1234256191: iVar0 = 615; break;

	case 413901048: iVar0 = 616; break;

	case 1527450164: iVar0 = 617; break;

	case -1786525476: iVar0 = 618; break;

	case 1439516635: iVar0 = 619; break;

	case 733800794: iVar0 = 620; break;

	case -399223540: iVar0 = 621; break;

	case -1894392230: iVar0 = 622; break;

	case 229993415: iVar0 = 623; break;

	case -620189683: iVar0 = 624; break;

	case 1846617794: iVar0 = 625; break;

	case -1142479347: iVar0 = 626; break;

	case -512960025: iVar0 = 627; break;

	case -759812557: iVar0 = 628; break;

	case 468661890: iVar0 = 629; break;

	case 1907925586: iVar0 = 630; break;

	case 646243571: iVar0 = 631; break;

	case 1953935161: iVar0 = 632; break;

	case 874867224: iVar0 = 633; break;

	case 1344008898: iVar0 = 634; break;

	case 1297781304: iVar0 = 635; break;

	case 1977233252: iVar0 = 636; break;

	case -194410344: iVar0 = 637; break;

	case 392012609: iVar0 = 638; break;

	case 705148450: iVar0 = 639; break;

	case 1677522529: iVar0 = 640; break;

	case -1362677538: iVar0 = 641; break;

	case 863458948: iVar0 = 642; break;

	case 9874621: iVar0 = 643; break;

	case 1809338990: iVar0 = 644; break;

	case -346939959: iVar0 = 645; break;

	case -934753544: iVar0 = 646; break;

	case 1604986209: iVar0 = 647; break;

	case -1514700421: iVar0 = 648; break;

	case 1177361060: iVar0 = 649; break;

	case -937529288: iVar0 = 650; break;

	case 547723644: iVar0 = 651; break;

	case 1750314531: iVar0 = 652; break;

	case -988332613: iVar0 = 653; break;

	case 80720443: iVar0 = 654; break;

	case -1220194634: iVar0 = 655; break;

	case -925735153: iVar0 = 656; break;

	case -1403745446: iVar0 = 657; break;

	case -1084626028: iVar0 = 658; break;

	case 2060572320: iVar0 = 659; break;

	case 1064377095: iVar0 = 660; break;

	case -1985597576: iVar0 = 661; break;

	case -2003189104: iVar0 = 662; break;

	case 1452329956: iVar0 = 663; break;

	case 1928573506: iVar0 = 664; break;

	case -185753722: iVar0 = 665; break;

	case -1580916109: iVar0 = 666; break;

	case -1077059973: iVar0 = 667; break;

	case 131755133: iVar0 = 668; break;

	case -253351038: iVar0 = 669; break;

	case 1332845224: iVar0 = 670; break;

	case -685051870: iVar0 = 671; break;

	case 2122847199: iVar0 = 672; break;

	case -149940744: iVar0 = 673; break;

	case -147741130: iVar0 = 674; break;

	case 302211868: iVar0 = 675; break;

	case -1361568592: iVar0 = 676; break;

	case -156600218: iVar0 = 677; break;

	case 1592739450: iVar0 = 678; break;

	case -633744004: iVar0 = 679; break;

	case -1467745952: iVar0 = 680; break;

	case 1129961041: iVar0 = 681; break;

	case -1221180772: iVar0 = 682; break;

	case 1957517559: iVar0 = 683; break;

	case -335233377: iVar0 = 684; break;

	case 2146762380: iVar0 = 685; break;

	case 427236107: iVar0 = 686; break;

	case -49636427: iVar0 = 687; break;

	case 1988133312: iVar0 = 688; break;

	case 40044091: iVar0 = 689; break;

	case -1189893809: iVar0 = 690; break;

	case 1182549017: iVar0 = 691; break;

	case 1403255481: iVar0 = 692; break;

	case 821579887: iVar0 = 693; break;

	case 1975948161: iVar0 = 694; break;

	case -953362234: iVar0 = 695; break;

	case 1521494915: iVar0 = 696; break;

	case 84635211: iVar0 = 697; break;

	case 2074655231: iVar0 = 698; break;

	case 1742494019: iVar0 = 699; break;
	}
	switch (iParam0) {
	case 1841934566: iVar0 = 700; break;

	case 1648222412: iVar0 = 701; break;

	case 1019312748: iVar0 = 702; break;

	case -1218730541: iVar0 = 703; break;

	case -88186884: iVar0 = 704; break;

	case 1428588096: iVar0 = 705; break;

	case -1788493673: iVar0 = 706; break;

	case -241894528: iVar0 = 707; break;

	case -1425414573: iVar0 = 708; break;

	case 1797163947: iVar0 = 709; break;

	case 823191231: iVar0 = 710; break;

	case 894133321: iVar0 = 711; break;

	case 1889485313: iVar0 = 712; break;
	}
	if (iVar0 != -1) {
		*iParam1 = 129 + iVar0;
		return true;
	}
	return false;
}

// Position - 0x2F31D
bool func_191(int iParam0, int *iParam1) {
	int iVar0;

	iVar0 = -1;
	switch (iParam0) {
	case -1917324065: iVar0 = 0; break;

	case 1056297333: iVar0 = 1; break;

	case 494620709: iVar0 = 2; break;

	case 800453786: iVar0 = 3; break;

	case -1082736975: iVar0 = 4; break;

	case -754981437: iVar0 = 5; break;

	case -1801855538: iVar0 = 6; break;

	case 459313194: iVar0 = 7; break;

	case 2007087579: iVar0 = 8; break;

	case 1987172386: iVar0 = 9; break;

	case 1801787829: iVar0 = 10; break;

	case -221624488: iVar0 = 11; break;

	case 25158851: iVar0 = 12; break;

	case 472458130: iVar0 = 13; break;

	case 164352862: iVar0 = 14; break;

	case -904148779: iVar0 = 15; break;

	case -694439771: iVar0 = 16; break;

	case -1469590466: iVar0 = 17; break;

	case -1511207100: iVar0 = 18; break;

	case -1352670678: iVar0 = 19; break;

	case -1960273476: iVar0 = 20; break;

	case -1657389609: iVar0 = 21; break;

	case 1826839858: iVar0 = 22; break;

	case 1989701788: iVar0 = 23; break;

	case 1213109257: iVar0 = 24; break;

	case 607407061: iVar0 = 25; break;

	case 875031480: iVar0 = 26; break;

	case 1487418552: iVar0 = 27; break;

	case 264053475: iVar0 = 28; break;

	case 99094329: iVar0 = 29; break;

	case -244193715: iVar0 = 30; break;

	case -540785934: iVar0 = 31; break;

	case -694833003: iVar0 = 32; break;

	case -852058665: iVar0 = 33; break;

	case -1512648940: iVar0 = 34; break;

	case -761354077: iVar0 = 35; break;

	case 1560551467: iVar0 = 36; break;

	case 827974775: iVar0 = 37; break;

	case 1595162603: iVar0 = 38; break;

	case 709663738: iVar0 = 39; break;

	case 990002533: iVar0 = 40; break;

	case 1860213958: iVar0 = 41; break;

	case 2119318441: iVar0 = 42; break;

	case -1953737187: iVar0 = 43; break;

	case 193320466: iVar0 = 44; break;

	case 1936646403: iVar0 = 45; break;

	case -1126042648: iVar0 = 46; break;

	case -1125022512: iVar0 = 47; break;

	case -1304369017: iVar0 = 48; break;

	case -2018143375: iVar0 = 49; break;

	case 224730392: iVar0 = 50; break;

	case 439629494: iVar0 = 51; break;

	case 736778786: iVar0 = 52; break;

	case 1048444745: iVar0 = 53; break;

	case 1988816738: iVar0 = 54; break;

	case 2140603469: iVar0 = 55; break;

	case 214245031: iVar0 = 56; break;

	case 1006238992: iVar0 = 57; break;

	case 689952604: iVar0 = 58; break;

	case -681528353: iVar0 = 59; break;

	case 1157448359: iVar0 = 60; break;

	case 43105745: iVar0 = 61; break;

	case -270395278: iVar0 = 62; break;

	case 505181414: iVar0 = 63; break;

	case 254662409: iVar0 = 64; break;

	case -982924414: iVar0 = 65; break;

	case -1156010272: iVar0 = 66; break;

	case 1885313391: iVar0 = 67; break;

	case -694786597: iVar0 = 68; break;

	case -1950199756: iVar0 = 69; break;

	case 384168721: iVar0 = 70; break;

	case -369452741: iVar0 = 71; break;

	case -89113946: iVar0 = 72; break;

	case 1836261422: iVar0 = 73; break;

	case -1004417654: iVar0 = 74; break;

	case -754095263: iVar0 = 75; break;

	case -1210698509: iVar0 = 76; break;

	case 1332405298: iVar0 = 77; break;

	case 552929095: iVar0 = 78; break;

	case 861154309: iVar0 = 79; break;

	case -1653801207: iVar0 = 80; break;

	case -87213624: iVar0 = 81; break;

	case 1285643631: iVar0 = 82; break;

	case 523240077: iVar0 = 83; break;

	case 823174734: iVar0 = 84; break;

	case -1248612522: iVar0 = 85; break;

	case 123359970: iVar0 = 86; break;

	case 369684543: iVar0 = 87; break;

	case -337142787: iVar0 = 88; break;

	case 1395583642: iVar0 = 89; break;

	case 1782520810: iVar0 = 90; break;

	case -660506451: iVar0 = 91; break;

	case -1092860637: iVar0 = 92; break;

	case 524387820: iVar0 = 93; break;

	case -1829180023: iVar0 = 94; break;

	case 2091368679: iVar0 = 95; break;

	case 1851597906: iVar0 = 96; break;

	case -434629734: iVar0 = 97; break;

	case 1415278623: iVar0 = 98; break;

	case 1252285617: iVar0 = 99; break;
	}
	switch (iParam0) {
	case 893595891: iVar0 = 100; break;

	case 423819507: iVar0 = 101; break;

	case -1433887872: iVar0 = 102; break;

	case -464613621: iVar0 = 103; break;

	case -301227387: iVar0 = 104; break;

	case -701762906: iVar0 = 105; break;

	case -890282963: iVar0 = 106; break;

	case -1188251480: iVar0 = 107; break;

	case 258827560: iVar0 = 108; break;

	case 965649655: iVar0 = 109; break;

	case 718800778: iVar0 = 110; break;

	case 1959959422: iVar0 = 111; break;

	case 1200177388: iVar0 = 112; break;

	case -1874439579: iVar0 = 113; break;

	case -1679505893: iVar0 = 114; break;

	case -1976229188: iVar0 = 115; break;

	case 2037875009: iVar0 = 116; break;

	case -235146664: iVar0 = 117; break;

	case -441853516: iVar0 = 118; break;

	case -664221443: iVar0 = 119; break;

	case -371627042: iVar0 = 120; break;

	case -1266220742: iVar0 = 121; break;

	case -968055611: iVar0 = 122; break;

	case 248100286: iVar0 = 123; break;

	case 551606764: iVar0 = 124; break;

	case 1805971315: iVar0 = 125; break;

	case -43642121: iVar0 = 126; break;

	case 1172251624: iVar0 = 127; break;

	case 1471989667: iVar0 = 128; break;

	case -2124702788: iVar0 = 129; break;

	case -1826734271: iVar0 = 130; break;

	case -900452940: iVar0 = 131; break;

	case -292194762: iVar0 = 132; break;

	case 637166847: iVar0 = 133; break;

	case -1204844181: iVar0 = 134; break;

	case 324779970: iVar0 = 135; break;

	case 329039940: iVar0 = 136; break;

	case 1854928425: iVar0 = 137; break;

	case 13179549: iVar0 = 138; break;

	case 1899823455: iVar0 = 139; break;

	case -2090490448: iVar0 = 140; break;

	case -1801467868: iVar0 = 141; break;

	case 953986562: iVar0 = 142; break;

	case 585335312: iVar0 = 143; break;

	case 489617063: iVar0 = 144; break;

	case 210195800: iVar0 = 145; break;

	case 1843402776: iVar0 = 146; break;

	case -1600520821: iVar0 = 147; break;

	case 1399087889: iVar0 = 148; break;

	case 1169344430: iVar0 = 149; break;

	case -2028647818: iVar0 = 150; break;

	case -1335845620: iVar0 = 151; break;

	case -1450406320: iVar0 = 152; break;

	case -1209849091: iVar0 = 153; break;

	case 2065609077: iVar0 = 154; break;

	case -664245241: iVar0 = 155; break;

	case 1676130538: iVar0 = 156; break;

	case -1730534702: iVar0 = 157; break;

	case -1767432596: iVar0 = 158; break;

	case -2016105604: iVar0 = 159; break;

	case 1971947238: iVar0 = 160; break;

	case -362811247: iVar0 = 161; break;

	case -668087251: iVar0 = 162; break;

	case -821282326: iVar0 = 163; break;

	case -1083467095: iVar0 = 164; break;

	case 550067555: iVar0 = 165; break;

	case 1439221609: iVar0 = 166; break;

	case 67412954: iVar0 = 167; break;

	case -1999360357: iVar0 = 168; break;

	case 1461537582: iVar0 = 169; break;

	case -1828273408: iVar0 = 170; break;

	case -1319239762: iVar0 = 171; break;

	case -1234400821: iVar0 = 172; break;

	case -992303449: iVar0 = 173; break;

	case -638398249: iVar0 = 174; break;

	case -41543683: iVar0 = 175; break;

	case -1934903018: iVar0 = 176; break;

	case 2132090345: iVar0 = 177; break;

	case 1751052413: iVar0 = 178; break;

	case 1519604966: iVar0 = 179; break;

	case -1964624525: iVar0 = 180; break;

	case 2006191823: iVar0 = 181; break;

	case 1633280603: iVar0 = 182; break;

	case 632918673: iVar0 = 183; break;

	case -190040148: iVar0 = 184; break;

	case 42936837: iVar0 = 185; break;

	case -1458541976: iVar0 = 186; break;

	case -606014753: iVar0 = 187; break;

	case -613376371: iVar0 = 188; break;

	case -446291501: iVar0 = 189; break;

	case 739308497: iVar0 = 190; break;

	case 495343292: iVar0 = 191; break;

	case -1686711653: iVar0 = 192; break;

	case 1187457341: iVar0 = 193; break;

	case 956403122: iVar0 = 194; break;

	case 1647042566: iVar0 = 195; break;

	case -461478743: iVar0 = 196; break;

	case -1883325653: iVar0 = 197; break;

	case -2114248796: iVar0 = 198; break;

	case 314228205: iVar0 = 199; break;
	}
	switch (iParam0) {
	case 1503775674: iVar0 = 200; break;

	case 1862399610: iVar0 = 201; break;

	case 708472048: iVar0 = 202; break;

	case -1207367545: iVar0 = 203; break;

	case 111650251: iVar0 = 204; break;

	case -28941494: iVar0 = 205; break;

	case -1827173138: iVar0 = 206; break;

	case -520681423: iVar0 = 207; break;

	case -209343154: iVar0 = 208; break;

	case -293579471: iVar0 = 209; break;

	case 20871853: iVar0 = 210; break;

	case -89823344: iVar0 = 211; break;

	case -1820191335: iVar0 = 212; break;

	case -1588547274: iVar0 = 213; break;

	case -1224287070: iVar0 = 214; break;

	case -994150383: iVar0 = 215; break;

	case -869824793: iVar0 = 216; break;

	case -633330920: iVar0 = 217; break;

	case -308131364: iVar0 = 218; break;

	case -38278649: iVar0 = 219; break;

	case 555692245: iVar0 = 220; break;

	case 929455459: iVar0 = 221; break;

	case -2092436411: iVar0 = 222; break;

	case 1904300216: iVar0 = 223; break;

	case -1599361268: iVar0 = 224; break;

	case -1897002095: iVar0 = 225; break;

	case -1011813098: iVar0 = 226; break;

	case -1316794181: iVar0 = 227; break;

	case -416105443: iVar0 = 228; break;

	case -47978497: iVar0 = 229; break;

	case -358202620: iVar0 = 230; break;

	case 547139312: iVar0 = 231; break;

	case 1124688073: iVar0 = 232; break;

	case 888521890: iVar0 = 233; break;

	case 665823766: iVar0 = 234; break;

	case 427888057: iVar0 = 235; break;

	case 1121411181: iVar0 = 236; break;

	case 890225886: iVar0 = 237; break;

	case 651012186: iVar0 = 238; break;

	case 422776101: iVar0 = 239; break;

	case 1630543134: iVar0 = 240; break;

	case -1945668916: iVar0 = 241; break;

	case -627999265: iVar0 = 242; break;

	case 1682346315: iVar0 = 243; break;

	case 1021952654: iVar0 = 244; break;

	case 1319396867: iVar0 = 245; break;

	case 560794517: iVar0 = 246; break;

	case 858697496: iVar0 = 247; break;

	case -30981230: iVar0 = 248; break;

	case -328032215: iVar0 = 249; break;

	case -1451681225: iVar0 = 250; break;

	case 267904819: iVar0 = 251; break;

	case 1570178485: iVar0 = 252; break;

	case -1619850916: iVar0 = 253; break;

	case -713067148: iVar0 = 254; break;

	case 946477614: iVar0 = 255; break;

	case -1423343701: iVar0 = 256; break;

	case 445931457: iVar0 = 257; break;

	case 678558588: iVar0 = 258; break;

	case -854631987: iVar0 = 259; break;

	case -1707871209: iVar0 = 260; break;

	case -863391184: iVar0 = 261; break;

	case 671171671: iVar0 = 262; break;

	case 904519720: iVar0 = 263; break;

	case 670952414: iVar0 = 264; break;

	case -282875325: iVar0 = 265; break;

	case 2079623104: iVar0 = 266; break;

	case 1088443427: iVar0 = 267; break;

	case 200001600: iVar0 = 268; break;

	case 1620729159: iVar0 = 269; break;

	case -1713274238: iVar0 = 270; break;

	case -1571590969: iVar0 = 271; break;

	case -457639374: iVar0 = 272; break;

	case 64160805: iVar0 = 273; break;

	case 1015325203: iVar0 = 274; break;

	case -1951778967: iVar0 = 275; break;

	case 1836042304: iVar0 = 276; break;

	case -421094621: iVar0 = 277; break;

	case 641062099: iVar0 = 278; break;

	case 597454468: iVar0 = 279; break;

	case 713758205: iVar0 = 280; break;

	case 1042267708: iVar0 = 281; break;

	case -637951661: iVar0 = 282; break;

	case 195911857: iVar0 = 283; break;

	case 903988957: iVar0 = 284; break;

	case 1068170761: iVar0 = 285; break;

	case -619065384: iVar0 = 286; break;

	case -497085955: iVar0 = 287; break;

	case 1138369002: iVar0 = 288; break;

	case -1957731308: iVar0 = 289; break;

	case -2063712125: iVar0 = 290; break;

	case 1773674262: iVar0 = 291; break;

	case 1027059614: iVar0 = 292; break;

	case 1366782677: iVar0 = 293; break;

	case 216134256: iVar0 = 294; break;

	case 810154442: iVar0 = 295; break;

	case 77285961: iVar0 = 296; break;

	case 1617489838: iVar0 = 297; break;

	case 1697138602: iVar0 = 298; break;

	case 711811694: iVar0 = 299; break;
	}
	switch (iParam0) {
	case -895106351: iVar0 = 300; break;

	case 875367934: iVar0 = 301; break;

	case -979867160: iVar0 = 302; break;

	case -1233816942: iVar0 = 303; break;

	case -866958715: iVar0 = 304; break;

	case -1303573005: iVar0 = 305; break;

	case 2085207152: iVar0 = 306; break;

	case 857137150: iVar0 = 307; break;

	case 535952639: iVar0 = 308; break;

	case -1974657401: iVar0 = 309; break;

	case 129909013: iVar0 = 310; break;

	case -1499060170: iVar0 = 311; break;

	case 412032123: iVar0 = 312; break;

	case 915049044: iVar0 = 313; break;

	case 456478679: iVar0 = 314; break;

	case 907364848: iVar0 = 315; break;

	case -1783721060: iVar0 = 316; break;

	case -1008363280: iVar0 = 317; break;

	case 1429817922: iVar0 = 318; break;

	case -938326281: iVar0 = 319; break;

	case -1073925235: iVar0 = 320; break;

	case 1498524677: iVar0 = 321; break;

	case 1525596308: iVar0 = 322; break;

	case 1232639216: iVar0 = 323; break;

	case 956061600: iVar0 = 324; break;

	case 816551665: iVar0 = 325; break;

	case 2049704410: iVar0 = 326; break;

	case -796818724: iVar0 = 327; break;

	case 1775476370: iVar0 = 328; break;

	case 266230635: iVar0 = 329; break;

	case -588549683: iVar0 = 330; break;

	case 464027076: iVar0 = 331; break;

	case 2122049260: iVar0 = 332; break;

	case 1049130700: iVar0 = 333; break;

	case -116952560: iVar0 = 334; break;

	case 1424723115: iVar0 = 335; break;

	case -1007272003: iVar0 = 336; break;

	case -644829701: iVar0 = 337; break;

	case -2103222497: iVar0 = 338; break;

	case -1589795073: iVar0 = 339; break;

	case -1689668067: iVar0 = 340; break;

	case -189814108: iVar0 = 341; break;

	case -1595292141: iVar0 = 342; break;

	case -1540940714: iVar0 = 343; break;

	case -2136471172: iVar0 = 344; break;

	case -666892434: iVar0 = 345; break;

	case -1001125323: iVar0 = 346; break;

	case 904104464: iVar0 = 347; break;

	case 690016265: iVar0 = 348; break;

	case 38190590: iVar0 = 349; break;

	case 2119761078: iVar0 = 350; break;

	case -1213131712: iVar0 = 351; break;

	case 990079224: iVar0 = 352; break;

	case -905045993: iVar0 = 353; break;

	case 2104378143: iVar0 = 354; break;

	case -666631800: iVar0 = 355; break;

	case 549954933: iVar0 = 356; break;

	case 1830069972: iVar0 = 357; break;

	case 859320876: iVar0 = 358; break;

	case -552358316: iVar0 = 359; break;

	case 1522216340: iVar0 = 360; break;

	case -1783296601: iVar0 = 361; break;

	case 283995288: iVar0 = 362; break;

	case -975534410: iVar0 = 363; break;

	case -2088194624: iVar0 = 364; break;

	case 1744801848: iVar0 = 365; break;

	case -481389646: iVar0 = 366; break;

	case -1781363036: iVar0 = 367; break;

	case 496009839: iVar0 = 368; break;

	case -667608820: iVar0 = 369; break;

	case 460475899: iVar0 = 370; break;

	case 1491168919: iVar0 = 371; break;

	case -1611478806: iVar0 = 372; break;

	case 523495612: iVar0 = 373; break;

	case -78008273: iVar0 = 374; break;

	case -762375847: iVar0 = 375; break;

	case 331482129: iVar0 = 376; break;

	case -2083628050: iVar0 = 377; break;

	case -468800117: iVar0 = 378; break;

	case 724819757: iVar0 = 379; break;

	case -1058761348: iVar0 = 380; break;

	case -546178212: iVar0 = 381; break;

	case -118052734: iVar0 = 382; break;

	case 1654466691: iVar0 = 383; break;

	case -1077553649: iVar0 = 384; break;

	case -886092159: iVar0 = 385; break;

	case -1406331536: iVar0 = 386; break;

	case -1968934850: iVar0 = 387; break;

	case 3741245: iVar0 = 388; break;

	case 1387838298: iVar0 = 389; break;

	case -1941058219: iVar0 = 390; break;

	case 955033120: iVar0 = 391; break;

	case 677119231: iVar0 = 392; break;

	case -1616214916: iVar0 = 393; break;

	case -841195297: iVar0 = 394; break;

	case -909289279: iVar0 = 395; break;

	case -239567341: iVar0 = 396; break;

	case -613592707: iVar0 = 397; break;

	case -988568374: iVar0 = 398; break;

	case -1090807654: iVar0 = 399; break;
	}
	switch (iParam0) {
	case 534771589: iVar0 = 400; break;

	case -1340139519: iVar0 = 401; break;

	case -849980761: iVar0 = 402; break;

	case -551553478: iVar0 = 403; break;

	case 386581472: iVar0 = 404; break;

	case 1466454525: iVar0 = 405; break;

	case 283190173: iVar0 = 406; break;

	case 1528527015: iVar0 = 407; break;

	case -1690029966: iVar0 = 408; break;

	case -1685994466: iVar0 = 409; break;

	case 255166927: iVar0 = 410; break;

	case -271257487: iVar0 = 411; break;

	case 1885215284: iVar0 = 412; break;

	case -1935156988: iVar0 = 413; break;

	case 1061465906: iVar0 = 414; break;

	case -871031729: iVar0 = 415; break;

	case -101171485: iVar0 = 416; break;

	case -1590298770: iVar0 = 417; break;

	case 303441856: iVar0 = 418; break;

	case -2049689650: iVar0 = 419; break;

	case 788520303: iVar0 = 420; break;

	case -859861445: iVar0 = 421; break;

	case 1045897298: iVar0 = 422; break;

	case 116964921: iVar0 = 423; break;

	case -1502257606: iVar0 = 424; break;

	case -546150284: iVar0 = 425; break;

	case -357466888: iVar0 = 426; break;

	case 718674880: iVar0 = 427; break;

	case -1529401172: iVar0 = 428; break;

	case 2088037441: iVar0 = 429; break;

	case 2048866271: iVar0 = 430; break;

	case -1565431690: iVar0 = 431; break;

	case -1528465573: iVar0 = 432; break;

	case 401532197: iVar0 = 433; break;

	case 826974918: iVar0 = 434; break;

	case -676067408: iVar0 = 435; break;

	case 1877289089: iVar0 = 436; break;

	case 859380017: iVar0 = 437; break;

	case 233098354: iVar0 = 438; break;

	case 566101858: iVar0 = 439; break;

	case 529460830: iVar0 = 440; break;

	case -1833118141: iVar0 = 441; break;

	case 422823598: iVar0 = 442; break;

	case 1450358661: iVar0 = 443; break;

	case 741089893: iVar0 = 444; break;

	case 1289848370: iVar0 = 445; break;

	case 616166430: iVar0 = 446; break;

	case 1489225316: iVar0 = 447; break;

	case 753969632: iVar0 = 448; break;

	case -1182831168: iVar0 = 449; break;

	case 1545103753: iVar0 = 450; break;

	case 2090080808: iVar0 = 451; break;

	case 903606896: iVar0 = 452; break;

	case 26759391: iVar0 = 453; break;

	case 1651885364: iVar0 = 454; break;

	case 729529407: iVar0 = 455; break;

	case 528802126: iVar0 = 456; break;

	case -1468003071: iVar0 = 457; break;

	case 1683696787: iVar0 = 458; break;

	case -726859160: iVar0 = 459; break;

	case 1209899578: iVar0 = 460; break;

	case 930604285: iVar0 = 461; break;

	case -308584186: iVar0 = 462; break;

	case -64129874: iVar0 = 463; break;

	case -1431204514: iVar0 = 464; break;

	case -1133334304: iVar0 = 465; break;

	case -1809784771: iVar0 = 466; break;

	case -1576934998: iVar0 = 467; break;

	case -1570929684: iVar0 = 468; break;

	case 1976578151: iVar0 = 469; break;

	case -441419962: iVar0 = 470; break;

	case -841238543: iVar0 = 471; break;

	case 1644315794: iVar0 = 472; break;

	case 1964334039: iVar0 = 473; break;

	case -1168614925: iVar0 = 474; break;

	case -56760095: iVar0 = 475; break;

	case -1006202521: iVar0 = 476; break;

	case -1834049539: iVar0 = 477; break;

	case -2060372580: iVar0 = 478; break;

	case 1057304170: iVar0 = 479; break;

	case 1421572640: iVar0 = 480; break;

	case 481259621: iVar0 = 481; break;

	case 1227497670: iVar0 = 482; break;

	case 319276780: iVar0 = 483; break;

	case 2070827921: iVar0 = 484; break;

	case 1433629991: iVar0 = 485; break;

	case -1712994650: iVar0 = 486; break;

	case 2125094286: iVar0 = 487; break;

	case 712298404: iVar0 = 488; break;

	case 1998072324: iVar0 = 489; break;

	case 1249206960: iVar0 = 490; break;

	case -621355603: iVar0 = 491; break;

	case 1570835960: iVar0 = 492; break;

	case -1254202543: iVar0 = 493; break;

	case -956136061: iVar0 = 494; break;

	case -1925480683: iVar0 = 495; break;

	case 220143168: iVar0 = 496; break;

	case -1021851577: iVar0 = 497; break;

	case -773345516: iVar0 = 498; break;

	case 1091795205: iVar0 = 499; break;
	}
	switch (iParam0) {
	case -1159824040: iVar0 = 500; break;

	case 1448723789: iVar0 = 501; break;

	case -488127340: iVar0 = 502; break;

	case -1964967283: iVar0 = 503; break;

	case -1635180127: iVar0 = 504; break;

	case -10501563: iVar0 = 505; break;

	case 933419071: iVar0 = 506; break;

	case 1362374839: iVar0 = 507; break;

	case 488078687: iVar0 = 508; break;

	case -1869054624: iVar0 = 509; break;

	case -1817642831: iVar0 = 510; break;

	case 482472119: iVar0 = 511; break;

	case -1736839817: iVar0 = 512; break;

	case 415527077: iVar0 = 513; break;

	case -907440189: iVar0 = 514; break;

	case -2099454789: iVar0 = 515; break;

	case -1719543542: iVar0 = 516; break;

	case 1848661824: iVar0 = 517; break;

	case -2018029706: iVar0 = 518; break;

	case -717212544: iVar0 = 519; break;

	case -594210450: iVar0 = 520; break;

	case 1520437442: iVar0 = 521; break;

	case 374349467: iVar0 = 522; break;

	case 1533123503: iVar0 = 523; break;

	case -1832780872: iVar0 = 524; break;

	case 130721536: iVar0 = 525; break;

	case 195356001: iVar0 = 526; break;

	case -556915722: iVar0 = 527; break;

	case -1930562696: iVar0 = 528; break;

	case 941227127: iVar0 = 529; break;

	case -842699589: iVar0 = 530; break;

	case 1654019571: iVar0 = 531; break;

	case 224191803: iVar0 = 532; break;

	case -1996796255: iVar0 = 533; break;

	case -1850715440: iVar0 = 534; break;

	case 1603163718: iVar0 = 535; break;

	case 1567227108: iVar0 = 536; break;

	case -1630649997: iVar0 = 537; break;

	case -25727072: iVar0 = 538; break;

	case -1363418653: iVar0 = 539; break;

	case 1878229535: iVar0 = 540; break;

	case 1531050226: iVar0 = 541; break;

	case 1246243345: iVar0 = 542; break;

	case 463561930: iVar0 = 543; break;

	case 1431846777: iVar0 = 544; break;

	case -460168116: iVar0 = 545; break;

	case -2015343582: iVar0 = 546; break;

	case 2051301469: iVar0 = 547; break;

	case 1887452986: iVar0 = 548; break;

	case -1551331969: iVar0 = 549; break;

	case 682382693: iVar0 = 550; break;

	case 765481743: iVar0 = 551; break;

	case 1094179010: iVar0 = 552; break;

	case 1906582382: iVar0 = 553; break;

	case 1923135102: iVar0 = 554; break;

	case -964908188: iVar0 = 555; break;

	case -1145896773: iVar0 = 556; break;

	case -776248682: iVar0 = 557; break;

	case 872613482: iVar0 = 558; break;

	case 1049060638: iVar0 = 559; break;

	case -927135334: iVar0 = 560; break;

	case -445820043: iVar0 = 561; break;

	case 1610045630: iVar0 = 562; break;

	case -1070800165: iVar0 = 563; break;

	case -589592162: iVar0 = 564; break;

	case 1723966869: iVar0 = 565; break;

	case 402539085: iVar0 = 566; break;

	case 873283678: iVar0 = 567; break;

	case -883161109: iVar0 = 568; break;

	case -1764919154: iVar0 = 569; break;

	case -2050352513: iVar0 = 570; break;

	case 1114188021: iVar0 = 571; break;

	case 1798282399: iVar0 = 572; break;

	case 1944820428: iVar0 = 573; break;

	case 100210893: iVar0 = 574; break;

	case -1699022511: iVar0 = 575; break;

	case 466917406: iVar0 = 576; break;

	case -349746245: iVar0 = 577; break;

	case 715904570: iVar0 = 578; break;

	case 281777035: iVar0 = 579; break;

	case 1511283406: iVar0 = 580; break;

	case -241337647: iVar0 = 581; break;

	case 748393780: iVar0 = 582; break;

	case 709511536: iVar0 = 583; break;

	case -652535466: iVar0 = 584; break;

	case -1148900842: iVar0 = 585; break;

	case -271863310: iVar0 = 586; break;

	case 35654857: iVar0 = 587; break;

	case 1894813304: iVar0 = 588; break;

	case 1184660438: iVar0 = 589; break;

	case -1461750963: iVar0 = 590; break;

	case 769964545: iVar0 = 591; break;

	case 1424500982: iVar0 = 592; break;

	case -1810785185: iVar0 = 593; break;

	case 837990279: iVar0 = 594; break;

	case -1357788003: iVar0 = 595; break;

	case -8210327: iVar0 = 596; break;

	case 1186553524: iVar0 = 597; break;

	case 1174934203: iVar0 = 598; break;

	case -984449089: iVar0 = 599; break;
	}
	switch (iParam0) {
	case -49570837: iVar0 = 600; break;

	case -1680371785: iVar0 = 601; break;

	case -1850912390: iVar0 = 602; break;

	case -1740038087: iVar0 = 603; break;

	case -619541947: iVar0 = 604; break;

	case 294240494: iVar0 = 605; break;

	case -765542196: iVar0 = 606; break;

	case -1420662645: iVar0 = 607; break;

	case 331918356: iVar0 = 608; break;

	case 204953755: iVar0 = 609; break;

	case 1764172461: iVar0 = 610; break;

	case 1462870109: iVar0 = 611; break;

	case -2071014467: iVar0 = 612; break;

	case 478439238: iVar0 = 613; break;

	case 796489219: iVar0 = 614; break;

	case 843279688: iVar0 = 615; break;

	case 1752551314: iVar0 = 616; break;

	case 735155845: iVar0 = 617; break;

	case 1863251462: iVar0 = 618; break;

	case -2142058763: iVar0 = 619; break;

	case -207591105: iVar0 = 620; break;

	case -932813887: iVar0 = 621; break;

	case -313503199: iVar0 = 622; break;

	case 718936417: iVar0 = 623; break;

	case -1107649605: iVar0 = 624; break;

	case 39090475: iVar0 = 625; break;

	case 1628251208: iVar0 = 626; break;

	case -311245907: iVar0 = 627; break;

	case -942031335: iVar0 = 628; break;

	case -1285040537: iVar0 = 629; break;

	case -606706891: iVar0 = 630; break;

	case -1719095858: iVar0 = 631; break;

	case 1725502681: iVar0 = 632; break;

	case 609583888: iVar0 = 633; break;

	case -1172383155: iVar0 = 634; break;

	case -3492404: iVar0 = 635; break;

	case -1006004645: iVar0 = 636; break;

	case -1937311482: iVar0 = 637; break;

	case -2065604094: iVar0 = 638; break;

	case 2028818254: iVar0 = 639; break;

	case 1624012067: iVar0 = 640; break;

	case -1877817141: iVar0 = 641; break;

	case -911576192: iVar0 = 642; break;

	case -2038013276: iVar0 = 643; break;

	case -901986542: iVar0 = 644; break;

	case 1792492176: iVar0 = 645; break;

	case -86485329: iVar0 = 646; break;

	case -1083434268: iVar0 = 647; break;

	case 613606704: iVar0 = 648; break;

	case -394853815: iVar0 = 649; break;

	case -1103127620: iVar0 = 650; break;

	case -1565650506: iVar0 = 651; break;

	case 1845793118: iVar0 = 652; break;

	case 105835401: iVar0 = 653; break;

	case 874268443: iVar0 = 654; break;

	case 2088424900: iVar0 = 655; break;

	case -786732051: iVar0 = 656; break;

	case 2054090970: iVar0 = 657; break;

	case 1878368697: iVar0 = 658; break;

	case 569662133: iVar0 = 659; break;

	case -792802958: iVar0 = 660; break;

	case 2006001399: iVar0 = 661; break;

	case 1785762805: iVar0 = 662; break;

	case 737220320: iVar0 = 663; break;

	case 1396060544: iVar0 = 664; break;

	case -1964728736: iVar0 = 665; break;

	case 1593302778: iVar0 = 666; break;

	case 84849272: iVar0 = 667; break;

	case -402776165: iVar0 = 668; break;

	case -221660734: iVar0 = 669; break;

	case 1648112645: iVar0 = 670; break;

	case 2066668749: iVar0 = 671; break;

	case -4424163: iVar0 = 672; break;

	case -173288591: iVar0 = 673; break;

	case 253771760: iVar0 = 674; break;

	case -1431574022: iVar0 = 675; break;

	case 959314664: iVar0 = 676; break;

	case 1670479428: iVar0 = 677; break;

	case 1779534675: iVar0 = 678; break;

	case -1268204471: iVar0 = 679; break;

	case -1937668252: iVar0 = 680; break;

	case -192802570: iVar0 = 681; break;

	case 1200380295: iVar0 = 682; break;

	case -644503216: iVar0 = 683; break;

	case 496410473: iVar0 = 684; break;

	case 462780886: iVar0 = 685; break;

	case 211198653: iVar0 = 686; break;

	case -504012739: iVar0 = 687; break;

	case 34276608: iVar0 = 688; break;

	case -2088223199: iVar0 = 689; break;

	case 2056773549: iVar0 = 690; break;

	case 962023066: iVar0 = 691; break;

	case 893288510: iVar0 = 692; break;

	case 1963590204: iVar0 = 693; break;

	case 919272855: iVar0 = 694; break;

	case 413754974: iVar0 = 695; break;

	case -1862916472: iVar0 = 696; break;

	case -1184732039: iVar0 = 697; break;

	case -143503455: iVar0 = 698; break;
	}
	if (iVar0 != -1) {
		*iParam1 = 129 + iVar0;
		return true;
	}
	return false;
}

// Position - 0x3189F
bool func_192(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (func_194(iParam0) == 6022) {
		return false;
	}
	iVar0 = func_193(iParam0, iParam1);
	iVar1 = iParam0;
	return gameplay::is_bit_set(iVar0, func_173(iVar1));
}

// Position - 0x318D1
int func_193(var uParam0, int iParam1) {
	int iVar0;

	iVar0 = func_16(func_194(uParam0), iParam1, 0);
	return iVar0;
}

// Position - 0x318EA
int func_194(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	iVar1 = func_178(iVar0);
	if (func_177() == 0 || func_176() == 0 || func_177() == 999 && func_176() == 999) {
		switch (iVar1) {
		case 0: return 1033;

		case 1: return 1034;

		case 2: return 1035;

		case 3: return 1036;

		case 4: return 1037;

		case 5: return 1497;

		case 6: return 1750;

		case 7: return 1944;

		case 8: return 1945;

		case 9: return 1946;

		case 10: return 1947;

		case 11: return 1948;

		case 12: return 1949;

		case 13: return 2404;

		case 14: return 2424;

		case 15: return 2427;

		case 16: return 2430;

		case 17: return 2593;

		case 18: return 2596;

		case 19: return 2599;

		case 20: return 3755;

		case 21: return 3758;

		case 22: return 3833;

		case 23: return 3836;

		case 24: return 3839;

		case 25: return 3842;

		case 26: return 5333;

		case 27: return 5336;
		}
	}
	return 6022;
}

// Position - 0x31ADC
int func_195(int iParam0) {
	switch (entity::get_entity_model(iParam0)) {
	case joaat("player_zero"): return 0;

	case joaat("player_one"): return 1;

	case joaat("player_two"): return 2;

	case joaat("mp_m_freemode_01"): return 3;

	case joaat("mp_f_freemode_01"): return 4;
	}
	return 0;
}

// Position - 0x31B31
int func_196(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;

	if (iParam0 == joaat("mp_m_freemode_01")) {
		if (iParam1 == 0) {
			return 123;
			return -1;
		}
		else if (iParam1 == 1) {
			return 93;
		}
		else if (iParam1 == 2) {
			return 93;
		}
		else if (iParam1 == 3) {
			return 93;
		}
		else if (iParam1 == 4) {
			return 93;
		}
		else if (iParam1 == 5) {
			return 93;
		}
		else if (iParam1 == 6) {
			return 93;
		}
		else if (iParam1 == 7) {
			return 94;
		}
		else if (iParam1 == 8) {
			return 94;
		}
		else if (iParam1 == 9) {
			return 94;
		}
		else if (iParam1 == 10) {
			return 94;
		}
		else if (iParam1 == 11) {
			return 94;
		}
		else if (iParam1 == 12) {
			return 94;
		}
		else if (iParam1 == 13) {
			return 95;
		}
		else if (iParam1 == 14) {
			return 95;
		}
		else if (iParam1 == 15) {
			return 95;
		}
		else if (iParam1 == 16) {
			return 95;
		}
		else if (iParam1 == 17) {
			return 95;
		}
		else if (iParam1 == 18) {
			return 95;
		}
		else if (iParam1 == 19) {
			return 96;
		}
		else if (iParam1 == 20) {
			return 96;
		}
		else if (iParam1 == 21) {
			return 96;
		}
		else if (iParam1 == 22) {
			return 96;
		}
		else if (iParam1 == 23) {
			return 96;
		}
		else if (iParam1 == 24) {
			return 96;
		}
		else if (iParam1 == 25) {
			return 96;
		}
		else if (iParam1 == 26) {
			return 97;
		}
		else if (iParam1 == 27) {
			return 97;
		}
		else if (iParam1 == 28) {
			return 97;
		}
		else if (iParam1 == 29) {
			return 97;
		}
		else if (iParam1 == 30) {
			return 97;
		}
		else if (iParam1 == 31) {
			return 97;
		}
		else if (iParam1 == 32) {
			return 98;
		}
		else if (iParam1 == 33) {
			return 98;
		}
		else if (iParam1 == 34) {
			return 98;
		}
		else if (iParam1 == 35) {
			return 98;
		}
		else if (iParam1 == 36) {
			return 98;
		}
		else if (iParam1 == 37) {
			return 98;
		}
		else if (iParam1 == 38) {
			return 99;
		}
		else if (iParam1 == 39) {
			return 99;
		}
		else if (iParam1 == 40) {
			return 99;
		}
		else if (iParam1 == 41) {
			return 99;
		}
		else if (iParam1 == 42) {
			return 99;
		}
		else if (iParam1 == 43) {
			return 99;
		}
		else if (iParam1 == 44) {
			return 99;
		}
		else if (iParam1 == 45) {
			return 100;
		}
		else if (iParam1 == 46) {
			return 100;
		}
		else if (iParam1 == 47) {
			return 100;
		}
		else if (iParam1 == 48) {
			return 100;
		}
		else if (iParam1 == 49) {
			return 100;
		}
		else if (iParam1 == 50) {
			return 101;
		}
		else if (iParam1 == 51) {
			return 101;
		}
		else if (iParam1 == 52) {
			return 101;
		}
		else if (iParam1 == 53) {
			return 101;
		}
		else if (iParam1 == 54) {
			return 101;
		}
		else if (iParam1 == 55) {
			return 101;
		}
		else if (iParam1 == 56) {
			return 101;
		}
		else if (iParam1 == 57) {
			return 102;
		}
		else if (iParam1 == 58) {
			return 102;
		}
		else if (iParam1 == 59) {
			return 102;
		}
		else if (iParam1 == 60) {
			return 102;
		}
		else if (iParam1 == 61) {
			return 102;
		}
		else if (iParam1 == 62) {
			return 102;
		}
		else if (iParam1 == 63) {
			return 103;
		}
		else if (iParam1 == 64) {
			return 103;
		}
		else if (iParam1 == 65) {
			return 103;
		}
		else if (iParam1 == 66) {
			return 103;
		}
		else if (iParam1 == 67) {
			return 103;
		}
		else if (iParam1 == 68) {
			return 103;
		}
		else if (iParam1 == 69) {
			return 104;
		}
		else if (iParam1 == 70) {
			return 104;
		}
		else if (iParam1 == 71) {
			return 104;
		}
		else if (iParam1 == 72) {
			return 104;
		}
		else if (iParam1 == 73) {
			return 104;
		}
		else if (iParam1 == 74) {
			return 105;
		}
		else if (iParam1 == 75) {
			return 105;
		}
		else if (iParam1 == 76) {
			return 105;
		}
		else if (iParam1 == 77) {
			return 105;
		}
		else if (iParam1 == 78) {
			return 105;
		}
		else if (iParam1 == 79) {
			return 105;
		}
		else if (iParam1 == 80) {
			return 106;
		}
		else if (iParam1 == 81) {
			return 106;
		}
		else if (iParam1 == 82) {
			return 106;
		}
		else if (iParam1 == 83) {
			return 106;
		}
		else if (iParam1 == 84) {
			return 106;
		}
		else if (iParam1 == 85) {
			return 107;
		}
		else if (iParam1 == 86) {
			return 107;
		}
		else if (iParam1 == 87) {
			return 107;
		}
		else if (iParam1 == 88) {
			return 107;
		}
		else if (iParam1 == 89) {
			return 107;
		}
		else if (iParam1 == 90) {
			return 107;
		}
		else if (iParam1 >= 91) {
			iVar0 = func_104(iParam0, iParam1, 2, 3);
			if (iVar0 != -1) {
				switch (iVar0) {
				case -1983429828:
				case 228608740:
				case 600995656:
				case 850728205:
				case 1093513726: return 108;

				case -457639650:
				case -94952354:
				case 144031963:
				case 533262145:
				case -1545668757: return 109;

				case -1625493211:
				case -1112723899:
				case -1432451032:
				case -647502406:
				case -925481833: return 110;

				case -1168328595:
				case -1421993424:
				case -576454917:
				case -438399124:
				case 271967258: return 111;

				case -1903246936:
				case 1155542604:
				case 2048071857:
				case -1605475033:
				case 100085859: return 112;

				case 745771948:
				case -1619297862:
				case -1878926649:
				case -485850917:
				case 558628189: return 113;

				case 1577121865:
				case 884057515:
				case 2055188806:
				case 1362452146:
				case -1761842625: return 114;
				}
				iVar1 = dlc1::_get_num_forced_components(iVar0);
				iVar2 = 0;
				while (iVar2 < iVar1) {
					dlc1::get_forced_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
					if (iVar5 == 10) {
						if (iVar3 != 0 && iVar3 != 1849449579) {
							return func_189(iVar3, 3);
						}
						else {
							return uVar4;
						}
					}
					iVar2++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		if (iParam1 == 0) {
			return 123;
			return -1;
		}
		else if (iParam1 == 1) {
			return 93;
		}
		else if (iParam1 == 2) {
			return 93;
		}
		else if (iParam1 == 3) {
			return 93;
		}
		else if (iParam1 == 4) {
			return 93;
		}
		else if (iParam1 == 5) {
			return 93;
		}
		else if (iParam1 == 6) {
			return 93;
		}
		else if (iParam1 == 7) {
			return 94;
		}
		else if (iParam1 == 8) {
			return 94;
		}
		else if (iParam1 == 9) {
			return 94;
		}
		else if (iParam1 == 10) {
			return 94;
		}
		else if (iParam1 == 11) {
			return 94;
		}
		else if (iParam1 == 12) {
			return 94;
		}
		else if (iParam1 == 13) {
			return 95;
		}
		else if (iParam1 == 14) {
			return 95;
		}
		else if (iParam1 == 15) {
			return 95;
		}
		else if (iParam1 == 16) {
			return 95;
		}
		else if (iParam1 == 17) {
			return 95;
		}
		else if (iParam1 == 18) {
			return 96;
		}
		else if (iParam1 == 19) {
			return 96;
		}
		else if (iParam1 == 20) {
			return 96;
		}
		else if (iParam1 == 21) {
			return 96;
		}
		else if (iParam1 == 22) {
			return 96;
		}
		else if (iParam1 == 23) {
			return 96;
		}
		else if (iParam1 == 24) {
			return 97;
		}
		else if (iParam1 == 25) {
			return 97;
		}
		else if (iParam1 == 26) {
			return 97;
		}
		else if (iParam1 == 27) {
			return 97;
		}
		else if (iParam1 == 28) {
			return 97;
		}
		else if (iParam1 == 29) {
			return 97;
		}
		else if (iParam1 == 30) {
			return 98;
		}
		else if (iParam1 == 31) {
			return 98;
		}
		else if (iParam1 == 32) {
			return 98;
		}
		else if (iParam1 == 33) {
			return 98;
		}
		else if (iParam1 == 34) {
			return 98;
		}
		else if (iParam1 == 35) {
			return 99;
		}
		else if (iParam1 == 36) {
			return 99;
		}
		else if (iParam1 == 37) {
			return 99;
		}
		else if (iParam1 == 38) {
			return 99;
		}
		else if (iParam1 == 39) {
			return 99;
		}
		else if (iParam1 == 40) {
			return 99;
		}
		else if (iParam1 == 41) {
			return 100;
		}
		else if (iParam1 == 42) {
			return 100;
		}
		else if (iParam1 == 43) {
			return 100;
		}
		else if (iParam1 == 44) {
			return 100;
		}
		else if (iParam1 == 45) {
			return 100;
		}
		else if (iParam1 == 46) {
			return 100;
		}
		else if (iParam1 == 47) {
			return 101;
		}
		else if (iParam1 == 48) {
			return 101;
		}
		else if (iParam1 == 49) {
			return 101;
		}
		else if (iParam1 == 50) {
			return 101;
		}
		else if (iParam1 == 51) {
			return 101;
		}
		else if (iParam1 == 52) {
			return 101;
		}
		else if (iParam1 == 53) {
			return 102;
		}
		else if (iParam1 == 54) {
			return 102;
		}
		else if (iParam1 == 55) {
			return 102;
		}
		else if (iParam1 == 56) {
			return 102;
		}
		else if (iParam1 == 57) {
			return 102;
		}
		else if (iParam1 == 58) {
			return 102;
		}
		else if (iParam1 == 59) {
			return 102;
		}
		else if (iParam1 == 60) {
			return 103;
		}
		else if (iParam1 == 61) {
			return 103;
		}
		else if (iParam1 == 62) {
			return 103;
		}
		else if (iParam1 == 63) {
			return 103;
		}
		else if (iParam1 == 64) {
			return 103;
		}
		else if (iParam1 == 65) {
			return 103;
		}
		else if (iParam1 == 66) {
			return 103;
		}
		else if (iParam1 == 67) {
			return 104;
		}
		else if (iParam1 == 68) {
			return 104;
		}
		else if (iParam1 == 69) {
			return 104;
		}
		else if (iParam1 == 70) {
			return 104;
		}
		else if (iParam1 == 71) {
			return 104;
		}
		else if (iParam1 == 72) {
			return 104;
		}
		else if (iParam1 == 73) {
			return 105;
		}
		else if (iParam1 == 74) {
			return 105;
		}
		else if (iParam1 == 75) {
			return 105;
		}
		else if (iParam1 == 76) {
			return 105;
		}
		else if (iParam1 == 77) {
			return 105;
		}
		else if (iParam1 == 78) {
			return 105;
		}
		else if (iParam1 == 79) {
			return func_189(-1261720761, 4);
		}
		else if (iParam1 == 80) {
			return func_189(-1261720761, 4);
		}
		else if (iParam1 == 81) {
			return func_189(-1261720761, 4);
		}
		else if (iParam1 == 82) {
			return func_189(-1261720761, 4);
		}
		else if (iParam1 == 83) {
			return func_189(-1261720761, 4);
		}
		else if (iParam1 == 84) {
			return func_189(-1261720761, 4);
		}
		else if (iParam1 == 85) {
			return 107;
		}
		else if (iParam1 == 86) {
			return 107;
		}
		else if (iParam1 == 87) {
			return 107;
		}
		else if (iParam1 == 88) {
			return 107;
		}
		else if (iParam1 == 89) {
			return 107;
		}
		else if (iParam1 == 90) {
			return 107;
		}
		else if (iParam1 == 91) {
			return 107;
		}
		else if (iParam1 >= 92) {
			iVar6 = func_104(iParam0, iParam1, 2, 4);
			if (iVar6 != -1) {
				switch (iVar6) {
				case -1238992735:
				case -1947261901:
				case -771018642:
				case -1486169302:
				case 1159796376: return 108;

				case 1389867525:
				case 1622396349:
				case 1851615504:
				case -2052614252:
				case -1818610823: return 109;

				case 1855226196:
				case 271139943:
				case -1099030254:
				case -307724442:
				case -637872117: return 110;

				case -663797501:
				case 2088667427:
				case 1779786837:
				case -1609936838:
				case -1880477702: return 111;

				case 1052499595:
				case 142438919:
				case 458495932:
				case -701723290:
				case -119221546: return 112;

				case 1245050198:
				case 1481937299:
				case 1754870300:
				case -2033029490:
				case 62318681: return 112;

				case 665775322:
				case 618391324:
				case 497473714:
				case 123808807:
				case -231538229: return 114;
				}
				iVar7 = dlc1::_get_num_forced_components(iVar6);
				iVar8 = 0;
				while (iVar8 < iVar7) {
					dlc1::get_forced_component(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
					if (iVar11 == 10) {
						if (iVar9 != 0 && iVar9 != 1849449579) {
							return func_189(iVar9, 4);
						}
						else {
							return uVar10;
						}
					}
					iVar8++;
				}
			}
		}
	}
	return -1;
}

// Position - 0x32932
void func_197(int iParam0, int iParam1) {
	struct<12> Var0;
	int iVar13;
	int iVar14;
	int iVar15;
	struct<7> Var16;
	int iVar31;
	int iVar32;
	struct<7> Var33;
	int iVar48;
	int iVar49;
	struct<7> Var50;
	int iVar65;
	int iVar66;
	struct<7> Var67;
	int iVar82;

	if (!ped::is_ped_injured(iParam1)) {
		iVar13 = func_195(iParam1);
		if (iParam0 != 0) {
			if (iVar13 == 3 || iVar13 == 4) {
				if (iParam0 == 1019352240) {
					func_218(13, 0, Global_69521);
					func_218(14, 0, Global_69521);
					func_218(15, 0, Global_69521);
					func_218(16, 0, Global_69521);
					func_218(71, 0, Global_69521);
					func_218(72, 0, Global_69521);
					return;
				}
				else if (iParam0 == 277073536) {
					if (iVar13 == 3) {
						func_218(73, 0, Global_69521);
						func_218(74, 0, Global_69521);
						func_218(75, 0, Global_69521);
						func_218(76, 0, Global_69521);
						func_218(77, 0, Global_69521);
						func_218(78, 0, Global_69521);
						func_218(79, 0, Global_69521);
						func_218(80, 0, Global_69521);
						func_218(81, 0, Global_69521);
						func_218(82, 0, Global_69521);
						func_218(83, 0, Global_69521);
						func_218(84, 0, Global_69521);
						func_218(85, 0, Global_69521);
						func_218(86, 0, Global_69521);
						func_218(90, 0, Global_69521);
						func_218(91, 0, Global_69521);
						func_218(124, 0, Global_69521);
						func_218(125, 0, Global_69521);
						func_218(87, 0, Global_69521);
						func_218(88, 0, Global_69521);
						func_218(89, 0, Global_69521);
						iVar15 = dlc1::_get_num_decorations(3);
						iVar14 = 0;
						while (iVar14 < iVar15) {
							if (dlc1::_0xFF56381874F82086(3, iVar14, &Var16)) {
								if (Var16.f_6 == 277073536) {
									func_218(129 + iVar14, 0, Global_69521);
								}
							}
							iVar14++;
						}
					}
					else {
						func_218(73, 0, Global_69521);
						func_218(74, 0, Global_69521);
						func_218(75, 0, Global_69521);
						func_218(76, 0, Global_69521);
						func_218(77, 0, Global_69521);
						func_218(78, 0, Global_69521);
						func_218(79, 0, Global_69521);
						func_218(80, 0, Global_69521);
						func_218(81, 0, Global_69521);
						func_218(82, 0, Global_69521);
						func_218(83, 0, Global_69521);
						func_218(84, 0, Global_69521);
						func_218(85, 0, Global_69521);
						func_218(92, 0, Global_69521);
						func_218(87, 0, Global_69521);
						func_218(88, 0, Global_69521);
						func_218(89, 0, Global_69521);
						iVar32 = dlc1::_get_num_decorations(4);
						iVar31 = 0;
						while (iVar31 < iVar32) {
							if (dlc1::_0xFF56381874F82086(4, iVar31, &Var33)) {
								if (Var33.f_6 == 277073536) {
									func_218(129 + iVar31, 0, Global_69521);
								}
							}
							iVar31++;
						}
					}
				}
				else if (iParam0 == 2140335355) {
					if (iVar13 == 3) {
						func_218(93, 0, Global_69521);
						func_218(94, 0, Global_69521);
						func_218(95, 0, Global_69521);
						func_218(96, 0, Global_69521);
						func_218(97, 0, Global_69521);
						func_218(98, 0, Global_69521);
						func_218(99, 0, Global_69521);
						func_218(100, 0, Global_69521);
						func_218(101, 0, Global_69521);
						func_218(102, 0, Global_69521);
						func_218(103, 0, Global_69521);
						func_218(104, 0, Global_69521);
						func_218(105, 0, Global_69521);
						func_218(106, 0, Global_69521);
						func_218(107, 0, Global_69521);
						func_218(108, 0, Global_69521);
						func_218(109, 0, Global_69521);
						func_218(110, 0, Global_69521);
						func_218(111, 0, Global_69521);
						func_218(112, 0, Global_69521);
						func_218(113, 0, Global_69521);
						func_218(114, 0, Global_69521);
						func_218(115, 0, Global_69521);
						func_218(116, 0, Global_69521);
						func_218(117, 0, Global_69521);
						func_218(123, 0, Global_69521);
						iVar49 = dlc1::_get_num_decorations(3);
						iVar48 = 0;
						while (iVar48 < iVar49) {
							if (dlc1::_0xFF56381874F82086(3, iVar48, &Var50)) {
								if (Var50.f_6 == 2140335355) {
									func_218(129 + iVar48, 0, Global_69521);
								}
							}
							iVar48++;
						}
					}
					else {
						func_218(93, 0, Global_69521);
						func_218(94, 0, Global_69521);
						func_218(95, 0, Global_69521);
						func_218(96, 0, Global_69521);
						func_218(97, 0, Global_69521);
						func_218(98, 0, Global_69521);
						func_218(99, 0, Global_69521);
						func_218(100, 0, Global_69521);
						func_218(101, 0, Global_69521);
						func_218(102, 0, Global_69521);
						func_218(103, 0, Global_69521);
						func_218(104, 0, Global_69521);
						func_218(105, 0, Global_69521);
						func_218(106, 0, Global_69521);
						func_218(107, 0, Global_69521);
						func_218(108, 0, Global_69521);
						func_218(109, 0, Global_69521);
						func_218(110, 0, Global_69521);
						func_218(111, 0, Global_69521);
						func_218(112, 0, Global_69521);
						func_218(113, 0, Global_69521);
						func_218(114, 0, Global_69521);
						func_218(115, 0, Global_69521);
						func_218(116, 0, Global_69521);
						func_218(117, 0, Global_69521);
						func_218(118, 0, Global_69521);
						func_218(119, 0, Global_69521);
						func_218(120, 0, Global_69521);
						func_218(121, 0, Global_69521);
						func_218(122, 0, Global_69521);
						func_218(123, 0, Global_69521);
						iVar66 = dlc1::_get_num_decorations(4);
						iVar65 = 0;
						while (iVar65 < iVar66) {
							if (dlc1::_0xFF56381874F82086(4, iVar65, &Var67)) {
								if (Var67.f_6 == 2140335355) {
									func_218(129 + iVar65, 0, Global_69521);
								}
							}
							iVar65++;
						}
					}
					return;
				}
			}
			iVar82 = 0;
			while (iVar82 < 127) {
				if (func_164(&Var0, iVar82, iVar13, iParam1, -1)) {
					if (Var0.f_8 == iParam0) {
						func_218(Var0.f_11, 0, Global_69521);
					}
				}
				iVar82++;
			}
		}
	}
}

// Position - 0x32F2F
int func_198(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = func_220();
	if (iVar0 != -1) {
		if (!func_199(iParam0, iParam1, iVar0)) {
			func_218(iVar0, 0, Global_69521);
			return 1;
		}
	}
	return 0;
}

// Position - 0x32F61
int func_199(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_205(iParam0, iParam1)) {
		if (iParam0 == joaat("mp_m_freemode_01")) {
			iVar0 = -1;
			iVar1 = -1;
			if (iParam1 >= 237) {
				iVar1 = func_104(iParam0, iParam1, 11, 3);
				iVar0 = func_202(iVar1);
			}
			if (iVar1 != -1 && func_133(iVar1, 0) != -1) {
				return 0;
			}
			if (iVar1 != -1 && func_200(iVar1, 0) != -1) {
				return 0;
			}
			if (iVar1 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar1, -497440475, 0)) {
				return 0;
			}
			if (iVar1 == -1198378836 || iVar1 == 968798999 || iVar1 == 1283250323) {
				return 0;
			}
			if (iParam1 >= 0 && iParam1 <= 15 || iParam1 >= 16 && iParam1 <= 31 || iParam1 >= 124 && iParam1 <= 139 ||
				iVar0 == 0 || iVar0 == 1 || iVar0 == 8) {
				if (iParam2 == 15) {
					return 1;
				}
				else if (iParam2 == 13 || iParam2 == 14) {
					if (func_188(iParam0, 11, iParam1, 0) == -1) {
						return 1;
					}
				}
			}
			else if (iParam1 >= 80 && iParam1 <= 95 || iVar0 == 5) {
				if (iParam2 == 16 || iParam2 == 71 || iParam2 == 72) {
					return 1;
				}
			}
			else if (iParam1 >= 140 && iParam1 <= 155 || iVar0 == 9) {
				if (iParam2 == 13 || iParam2 == 15) {
					return 1;
				}
			}
		}
		else if (iParam0 == joaat("mp_f_freemode_01")) {
			iVar2 = -1;
			iVar3 = -1;
			if (iParam1 >= 256) {
				iVar3 = func_104(iParam0, iParam1, 11, 4);
				iVar2 = func_202(iVar3);
			}
			if (iVar3 != -1 && func_133(iVar3, 0) != -1) {
				return 0;
			}
			if (iVar3 != -1 && func_200(iVar3, 0) != -1) {
				return 0;
			}
			if (iVar3 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar3, -497440475, 0)) {
				return 0;
			}
			if (iParam1 >= 0 && iParam1 <= 15 || iVar2 == 0) {
				if (iParam2 == 13 || iParam2 == 15) {
					if (func_188(iParam0, 11, iParam1, 0) == -1) {
						return 1;
					}
				}
			}
			else if (iParam1 >= 32 && iParam1 <= 47 || iVar2 == 2) {
				if (iParam2 == 13 || iParam2 == 16) {
					if (func_188(iParam0, 11, iParam1, 0) == -1) {
						return 1;
					}
				}
			}
			else if (iParam1 >= 64 && iParam1 <= 79 || iVar2 == 4) {
				if (iParam2 == 13) {
					return 1;
				}
				if (iParam2 == 15) {
					if (iVar2 != 4 || !dlc1::_0x341DE7ED1D2A1BFD(iVar3, 1113995558, 0)) {
						return 1;
					}
				}
			}
			else if (iParam1 >= 80 && iParam1 <= 95 || iVar2 == 5) {
				if (iParam2 == 13) {
					return 1;
				}
			}
			else if (iParam1 >= 144 && iParam1 <= 159 || iVar2 == 9) {
				if (iParam2 == 14) {
					return 1;
				}
			}
		}
	}
	return 0;
}

// Position - 0x332D2
int func_200(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = -1;
	if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1769225721, iParam1)) {
		iVar0 = 0;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1834446747, iParam1)) {
		iVar0 = 1;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -939525357, iParam1)) {
		iVar0 = 2;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 38465448, iParam1)) {
		iVar0 = 3;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1469891622, iParam1)) {
		iVar0 = 4;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -502321359, iParam1)) {
		iVar0 = 5;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -792359778, iParam1)) {
		iVar0 = 6;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 997614074, iParam1)) {
		iVar0 = 7;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 748799057, iParam1)) {
		iVar0 = 8;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 653048039, iParam1)) {
		iVar0 = 9;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1922736331, iParam1)) {
		iVar0 = 10;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1685128312, iParam1)) {
		iVar0 = 11;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1892460036, iParam1)) {
		iVar0 = 12;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -296738547, iParam1)) {
		iVar0 = 13;
	}
	return iVar0;
}

// Position - 0x33416
int func_201(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 == joaat("mp_m_freemode_01")) {
		iVar0 = -1;
		iVar1 = -1;
		if (iParam1 >= 256) {
			iVar0 = func_104(iParam0, iParam1, 4, 3);
			iVar1 = func_202(iVar0);
		}
		iVar2 = -1;
		iVar3 = -1;
		if (iParam2 >= 237) {
			iVar2 = func_104(iParam0, iParam2, 11, 3);
			iVar3 = func_202(iVar2);
		}
		if (iVar2 != -1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -826135203, 0)) {
				if (iVar0 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar0, -826135203, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, -826135203, 0)) {
				if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -826135203, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1855618474, 0)) {
				if (iVar0 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1855618474, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1855618474, 0)) {
				if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1855618474, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0)) {
				if (iVar0 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0)) {
				if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -2017999390, 0)) {
				if (iVar0 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar0, -2017999390, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, -2017999390, 0)) {
				if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -2017999390, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0)) {
				if (iVar0 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar0, 648481062, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, 648481062, 0)) {
				return 1;
			}
		}
		else if (iVar0 != -1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, 648481062, 0)) {
				return 1;
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, -826135203, 0)) {
				if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -826135203, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1855618474, 0)) {
				if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1855618474, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0)) {
				if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, -2017999390, 0)) {
				if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -2017999390, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
		}
		if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0)) {
			if (iParam1 >= 0 && iParam1 <= 15 || iParam1 >= 48 && iParam1 <= 63 || iParam1 >= 64 && iParam1 <= 79 ||
				iParam1 >= 112 && iParam1 <= 127 || iParam1 >= 128 && iParam1 <= 143 ||
				iParam1 >= 176 && iParam1 <= 191 || iParam1 >= 224 && iParam1 <= 239 || iVar1 == 0 || iVar1 == 3 ||
				iVar1 == 4 || iVar1 == 7 || iVar1 == 8 || iVar1 == 11 || iVar1 == 14 ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1627756587, 0)) {
				return 1;
			}
			else {
				return 0;
			}
		}
		switch (iVar0) {
		case 312004063:
		case 6695290:
		case 1724446270:
		case -448105673:
		case -611098679:
		case -1111088081:
		case -1406369540:
		case -1912159043:
		case 2076516410:
		case 1919618438:
		case 45227112:
		case -2129094253:
		case -421370587:
		case -675363106:
			if (iParam2 >= 204 && iParam2 <= 219 || iVar3 == 13) {
				return 0;
			}
			break;
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1021189127, 0)) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, 2044466679, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1325813684, 0)) {
				return 0;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		iVar4 = -1;
		iVar5 = -1;
		if (iParam1 >= 256) {
			iVar4 = func_104(iParam0, iParam1, 4, 4);
			iVar5 = func_202(iVar4);
		}
		iVar6 = -1;
		if (iParam2 >= 256) {
			iVar6 = func_104(iParam0, iParam2, 11, 4);
		}
		if (iVar6 != -1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, -826135203, 0)) {
				if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -826135203, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -826135203, 0)) {
				if (iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, -826135203, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1855618474, 0)) {
				if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1855618474, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1855618474, 0)) {
				if (iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1855618474, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, 320460654, 0)) {
				if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0)) {
				if (iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 320460654, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, -2017999390, 0)) {
				if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -2017999390, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -2017999390, 0)) {
				if (iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, -2017999390, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, -530089825, 0)) {
				if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -530089825, 0) ||
					iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1223513441, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -530089825, 0)) {
				if (iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, -530089825, 0) ||
					iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1223513441, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1200513218, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar6, -779835469, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1086258388, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1119232689, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1488441032, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar6, -868698159, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, 2044466679, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar6, -2020757158, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, -2088146832, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1446333198, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1351486939, 0)) {
				if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1223513441, 0) ||
					iParam1 >= 240 && iParam1 <= 255 || iVar5 == 15 || iVar4 == 1667217362 || iVar4 == 1956239942 ||
					iVar4 == -210905108 || iVar4 == 79690384 || iVar4 == 134611232 || iVar4 == 441755069 ||
					iVar4 == -1685936105 || iVar4 == -1379382110 || iVar4 == -788622578 || iVar4 == -481740893 ||
					iVar4 == -266743188 || iVar4 == 573421207 || iVar4 == -739668639 || iVar4 == -1126047902 ||
					iVar4 == -954797108 || iVar4 == -1858238438 || iVar4 == -1551291215 || iVar4 == -989872783 ||
					iVar4 == 2073733812 || iVar4 == -1596197578 || iVar4 == -942357733 || iVar4 == -40948081 ||
					iVar4 == -1262871322 || iVar4 == -495388573 || iVar4 == 1091483025 || iVar4 == 785649948 ||
					iVar4 == -313291240 || iVar4 == 495041640 || iVar4 == 749492925) {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, 821147517, 0)) {
				if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1223513441, 0) ||
					iParam1 >= 240 && iParam1 <= 255 || iVar5 == 15 || iVar4 == 1667217362 || iVar4 == 1956239942 ||
					iVar4 == -210905108 || iVar4 == 79690384 || iVar4 == 134611232 || iVar4 == 441755069 ||
					iVar4 == -1685936105 || iVar4 == -1379382110 || iVar4 == -788622578 || iVar4 == -481740893 ||
					iVar4 == -266743188 || iVar4 == 573421207 || iVar4 == -739668639 || iVar4 == -1126047902 ||
					iVar4 == -954797108 || iVar4 == -1858238438 || iVar4 == -1551291215 || iVar4 == -989872783 ||
					iVar4 == 2073733812 || iVar4 == -1596197578 || iVar4 == -942357733 || iVar4 == -40948081 ||
					iVar4 == -1262871322 || iVar4 == -495388573 || iVar4 == 1091483025 || iVar4 == 785649948 ||
					iVar4 == -313291240 || iVar4 == 495041640 || iVar4 == 749492925) {
					return 0;
				}
			}
		}
		if (iVar4 != -1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -826135203, 0)) {
				if (iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, -826135203, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1855618474, 0)) {
				if (iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1855618474, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0)) {
				if (iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 320460654, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -2017999390, 0)) {
				if (iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, -2017999390, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -530089825, 0)) {
				if (iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, -530089825, 0) ||
					iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1223513441, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -33031567, 0)) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, -2102859770, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, -747583185, 0)) {
				return 1;
			}
			else {
				return 0;
			}
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, -747583185, 0)) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -33031567, 0)) {
				return 1;
			}
			else {
				return 0;
			}
		}
		if (iParam1 >= 32 && iParam1 <= 47 || iVar5 == 2 || dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1325813684, 0)) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, 2026620439, 0)) {
				return 0;
			}
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, -2119756144, 0)) {
			if (iParam1 >= 32 && iParam1 <= 47 || iVar5 == 2 || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 264959411, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar4, 140732128, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1863955539, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar4, -849839091, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, -2088146832, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1055526375, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1882920022, 0)) {
				return 0;
			}
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, 947651647, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, -58412562, 0)) {
			if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1223513441, 0) || iParam1 >= 240 && iParam1 <= 255 ||
				iVar5 == 15 || iVar4 == 1667217362 || iVar4 == 1956239942 || iVar4 == -210905108 || iVar4 == 79690384 ||
				iVar4 == 134611232 || iVar4 == 441755069 || iVar4 == -1685936105 || iVar4 == -1379382110 ||
				iVar4 == -788622578 || iVar4 == -481740893 || iVar4 == -266743188 || iVar4 == 573421207 ||
				iVar4 == -739668639 || iVar4 == -1126047902 || iVar4 == -954797108 || iVar4 == -1858238438 ||
				iVar4 == -1551291215 || iVar4 == -989872783 || iVar4 == 2073733812 || iVar4 == -1596197578 ||
				iVar4 == -942357733 || iVar4 == -40948081 || iVar4 == -1262871322 || iVar4 == -495388573 ||
				iVar4 == 1091483025 || iVar4 == 785649948 || iVar4 == -313291240 || iVar4 == 495041640 ||
				iVar4 == 749492925) {
				return 0;
			}
		}
	}
	return 1;
}

// Position - 0x3444C
int func_202(int iParam0) {
	int iVar0;

	iVar0 = -1;
	if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 821147517, 0)) {
		iVar0 = 0;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 2055293595, 0)) {
		iVar0 = 1;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1992562672, 0)) {
		iVar0 = 2;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1458930564, 0)) {
		iVar0 = 3;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1046587084, 0)) {
		iVar0 = 4;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1943944625, 0)) {
		iVar0 = 5;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1999870067, 0)) {
		iVar0 = 6;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 2048281121, 0)) {
		iVar0 = 7;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -109983526, 0)) {
		iVar0 = 8;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1394888785, 0)) {
		iVar0 = 9;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -144826511, 0)) {
		iVar0 = 10;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 19149565, 0)) {
		iVar0 = 11;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 310957510, 0)) {
		iVar0 = 12;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 742787396, 0)) {
		iVar0 = 13;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1604914832, 0)) {
		iVar0 = 14;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1092211054, 0)) {
		iVar0 = 15;
	}
	return iVar0;
}

// Position - 0x345AE
int func_203(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = -99;
	if (iParam0 == joaat("mp_m_freemode_01")) {
		if (iParam1 <= 15) {
			iVar0 = 0;
		}
		else if (iParam1 <= 31) {
			iVar0 = 16;
		}
		else if (iParam1 <= 47) {
			iVar0 = 0;
		}
		else if (iParam1 <= 63) {
			iVar0 = -99;
		}
		else if (iParam1 <= 79) {
			iVar0 = -99;
		}
		else if (iParam1 <= 95) {
			iVar0 = 80;
		}
		else if (iParam1 <= 111) {
			iVar0 = -99;
		}
		else if (iParam1 <= 127) {
			iVar0 = -99;
		}
		else if (iParam1 <= 143) {
			iVar0 = 124;
		}
		else if (iParam1 <= 159) {
			iVar0 = 140;
		}
		else if (iParam1 <= 175) {
			iVar0 = -99;
		}
		else if (iParam1 <= 191) {
			iVar0 = -99;
		}
		else if (iParam1 <= 207) {
			iVar0 = 188;
		}
		else if (iParam1 <= 223) {
			iVar0 = 204;
		}
		else if (iParam1 <= 239) {
			iVar0 = 16;
		}
		else if (iParam1 <= 240) {
			iVar0 = 236;
		}
		else if (iParam1 >= 241) {
			iVar1 = func_104(iParam0, iParam1, 8, 3);
			if (iVar1 != -1) {
				iVar2 = dlc1::_0xC17AD0E5752BECDA(iVar1);
				iVar3 = 0;
				while (iVar3 < iVar2) {
					dlc1::get_variant_component(iVar1, iVar3, &iVar4, &iVar5, &iVar6);
					if (iVar6 == 11) {
						if (iVar4 != 0 && iVar4 != 1849449579) {
							iVar0 = func_84(iParam0, iVar4, 11, 3);
							return iVar0;
						}
						else {
							iVar0 = iVar5;
							return iVar0;
						}
					}
					iVar3++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		if (iParam1 <= 15) {
			iVar0 = 0;
		}
		else if (iParam1 <= 31) {
			iVar0 = 0;
		}
		else if (iParam1 <= 32) {
			iVar0 = -99;
		}
		else if (iParam1 <= 33) {
			iVar0 = -99;
		}
		else if (iParam1 <= 49) {
			iVar0 = 64;
		}
		else if (iParam1 <= 65) {
			iVar0 = 80;
		}
		else if (iParam1 <= 66) {
			iVar0 = -99;
		}
		else if (iParam1 <= 67) {
			iVar0 = -99;
		}
		else if (iParam1 <= 68) {
			iVar0 = -99;
		}
		else if (iParam1 <= 69) {
			iVar0 = -99;
		}
		else if (iParam1 <= 70) {
			iVar0 = -99;
		}
		else if (iParam1 <= 86) {
			iVar0 = 176;
		}
		else if (iParam1 <= 102) {
			iVar0 = 192;
		}
		else if (iParam1 <= 118) {
			iVar0 = 208;
		}
		else if (iParam1 <= 119) {
			iVar0 = -99;
		}
		else if (iParam1 <= 135) {
			iVar0 = 240;
		}
		else if (iParam1 >= 136) {
			iVar7 = func_104(iParam0, iParam1, 8, 4);
			if (iVar7 != -1) {
				iVar8 = dlc1::_0xC17AD0E5752BECDA(iVar7);
				iVar9 = 0;
				while (iVar9 < iVar8) {
					dlc1::get_variant_component(iVar7, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 11) {
						if (iVar10 != 0 && iVar10 != 1849449579) {
							iVar0 = func_84(iParam0, iVar10, 11, 4);
							return iVar0;
						}
						else {
							iVar0 = iVar11;
							return iVar0;
						}
					}
					iVar9++;
				}
			}
		}
	}
	if (iVar0 != -99) {
		iVar0 += iParam2;
	}
	return iVar0;
}

// Position - 0x348A5
int func_204(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam1 == 14) {
		iVar0 = iParam2;
		return func_100(iVar0);
	}
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 0: return 0;

		case 2: return Global_101700.f_2095.f_539[0 /*65*/].f_59;

		case 3:
			if (Global_101700.f_8044.f_99.f_58[120]) {
				return 1;
			}
			else {
				return 0;
			}
			break;

		case 4:
			if (Global_101700.f_8044.f_99.f_58[120]) {
				return 1;
			}
			else {
				return 0;
			}
			break;

		case 6: return 6;

		case 5: return 0;

		case 8: return 0;

		case 9: return 0;

		case 10: return 0;

		case 1: return 0;

		case 7: return 0;

		case 11: return 0;

		case 12: break;

		case 13: return 31;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 0: return 0;

		case 2: return Global_101700.f_2095.f_539[1 /*65*/].f_59;

		case 3: return 73;

		case 4: return 24;

		case 6: return 17;

		case 5: return 0;

		case 8: return 26;

		case 9: return 0;

		case 10: return 0;

		case 1: return 0;

		case 7: return 0;

		case 11: return 0;

		case 12: break;

		case 13: return 31;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 0: return 0;

		case 2: return Global_101700.f_2095.f_539[2 /*65*/].f_59;

		case 3: return 0;

		case 4: return 91;

		case 6: return 8;

		case 5: return 0;

		case 8: return 15;

		case 9: return 0;

		case 10: return 0;

		case 1: return 0;

		case 7: return 0;

		case 11: return 0;

		case 12: break;

		case 13: return 31;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0: break;

		case 2: break;

		case 3: return 0;

		case 4: return 80;

		case 6: return 10;

		case 5: break;

		case 8: return 0;

		case 9: return 0;

		case 10: return 0;

		case 1: return 0;

		case 7: return 0;

		case 11: return 2;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0: break;

		case 2: break;

		case 3: return 0;

		case 4: return 233;

		case 6: return 16;

		case 5: break;

		case 8: return 0;

		case 9: return 0;

		case 10: return 0;

		case 1: return 0;

		case 7: return 0;

		case 11: return 78;
		}
		break;

	default: break;
	}
	return -99;
}

// Position - 0x34CBF
bool func_205(int iParam0, int iParam1) {
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		if (iParam1 >= 48 && iParam1 < 64 || iParam1 >= 64 && iParam1 < 80 || iParam1 >= 96 && iParam1 < 108 ||
			iParam1 >= 108 && iParam1 < 124 || iParam1 >= 156 && iParam1 < 172 ||
			iParam1 >= 237 && dlc1::_0x341DE7ED1D2A1BFD(func_104(iParam0, iParam1, 11, 3), -1393156190, 0)) {
			return true;
		}
		break;

	case joaat("mp_f_freemode_01"):
		if (iParam1 >= 16 && iParam1 < 32 || iParam1 >= 96 && iParam1 < 112 || iParam1 >= 112 && iParam1 < 128 ||
			iParam1 >= 128 && iParam1 < 144 || iParam1 >= 160 && iParam1 < 176 ||
			iParam1 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(func_104(iParam0, iParam1, 11, 4), -1393156190, 0)) {
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x34E00
int func_206(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<10> Var13;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	struct<10> Var48;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	bool bVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	bool bVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;

	iVar0 = -99;
	iVar1 = 1;
	if (iParam0 == joaat("mp_m_freemode_01")) {
		iVar2 = -1;
		iVar3 = -1;
		if (iParam2 >= 237) {
			iVar2 = func_104(iParam0, iParam2, 11, 3);
			iVar3 = func_202(iVar2);
		}
		iVar4 = -1;
		iVar5 = -1;
		if (iParam1 >= 237) {
			iVar4 = func_104(iParam0, iParam1, 11, 3);
			iVar5 = func_202(iVar4);
		}
		if (iVar2 != -1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -491588875, 0)) {
				return -99;
			}
		}
		if (iVar2 != -1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1347486026, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1274099003, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1723403459, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1538937264, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar2, -549843760, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1830529185, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1813210391, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, -89003918, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar2, -747858475, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1208450825, 0)) {
				if (iParam1 >= 124 && iParam1 <= 139 || iParam1 >= 188 && iParam1 <= 235 || iVar5 == 8 || iVar5 == 12 ||
					iVar5 == 13 || iVar5 == 14) {
					return -99;
				}
				if (!dlc1::_0x341DE7ED1D2A1BFD(iVar2, -549843760, 0) &&
					!dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1830529185, 0) &&
					!dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1813210391, 0) &&
					!dlc1::_0x341DE7ED1D2A1BFD(iVar2, -89003918, 0) &&
					!dlc1::_0x341DE7ED1D2A1BFD(iVar2, -747858475, 0) &&
					!dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1208450825, 0)) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -828478571, 0)) {
						return -99;
					}
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1655154167, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1719167561, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1431529976, 0)) {
				return -99;
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1690933245, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1325813684, 0)) {
				return -99;
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1769225721, 0)) {
				if (iParam1 >= 80 && iParam1 <= 95 || iParam1 >= 124 && iParam1 <= 139 ||
					iParam1 >= 140 && iParam1 <= 155 || iParam1 >= 188 && iParam1 <= 235 || iVar5 == 5 || iVar5 == 8 ||
					iVar5 == 9 || iVar5 == 12 || iVar5 == 13 || iVar5 == 14) {
					return -99;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 264959411, 0)) {
				if (iParam1 >= 0 && iParam1 <= 15 || iParam1 >= 16 && iParam1 <= 31 || iParam1 >= 80 && iParam1 <= 95 ||
					iParam1 >= 236 && iParam1 <= 236 || iVar5 == 0 || iVar5 == 1 || iVar5 == 5 || iVar5 == 15) {
				}
				else {
					return -99;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0) && !dlc1::_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0)) {
				return -99;
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1719338724, 0)) {
				if (iParam1 >= 0 && iParam1 <= 15 || iParam1 >= 16 && iParam1 <= 31 || iParam1 >= 80 && iParam1 <= 95 ||
					iParam1 >= 124 && iParam1 <= 139 || iParam1 >= 236 && iParam1 <= 236 || iVar5 == 0 || iVar5 == 1 ||
					iVar5 == 5 || iVar5 == 8 || iVar5 == 15) {
				}
				else {
					return -99;
				}
			}
		}
		iVar6 = 0;
		bVar7 = false;
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1237899132, 0) && !dlc1::_0x341DE7ED1D2A1BFD(iVar2, -491588875, 0)) {
			if (iParam1 >= 0 && iParam1 <= 15) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -269266203, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar2, -685039259, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, 297865853, 0)) {
					switch (iParam1) {
					case 0: iVar0 = func_84(iParam0, -1071423629, 8, 3); break;

					case 1: iVar0 = func_84(iParam0, -833094692, 8, 3); break;

					case 2: iVar0 = func_84(iParam0, -1836153782, 8, 3); break;

					case 3: iVar0 = func_84(iParam0, -1598414687, 8, 3); break;

					case 4: iVar0 = func_84(iParam0, 123661793, 8, 3); break;

					case 5: iVar0 = func_84(iParam0, 330958487, 8, 3); break;

					case 7: iVar0 = func_84(iParam0, -646180324, 8, 3); break;

					case 8: iVar0 = func_84(iParam0, -142717408, 8, 3); break;

					case 11: iVar0 = func_84(iParam0, 1290696959, 8, 3); break;
					}
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 201427653, 0)) {
					switch (iParam1) {
					case 0: iVar0 = func_84(iParam0, -1382822784, 8, 3); break;

					case 1: iVar0 = func_84(iParam0, -1731353868, 8, 3); break;

					case 2: iVar0 = func_84(iParam0, -1960638561, 8, 3); break;

					case 3: iVar0 = func_84(iParam0, 147161830, 8, 3); break;

					case 4: iVar0 = func_84(iParam0, -92608943, 8, 3); break;

					case 5: iVar0 = func_84(iParam0, -162931217, 8, 3); break;

					case 7: iVar0 = func_84(iParam0, -537087659, 8, 3); break;

					case 8: iVar0 = func_84(iParam0, 1665087452, 8, 3); break;

					case 11: iVar0 = func_84(iParam0, 1012984348, 8, 3); break;
					}
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 967829025, 0)) {
					switch (iParam1) {
					case 0: iVar0 = func_84(iParam0, 385813134, 8, 3); break;

					case 1: iVar0 = func_84(iParam0, 675392787, 8, 3); break;

					case 2: iVar0 = func_84(iParam0, -238272479, 8, 3); break;

					case 3: iVar0 = func_84(iParam0, 67757212, 8, 3); break;

					case 4: iVar0 = func_84(iParam0, -536372072, 8, 3); break;

					case 5: iVar0 = func_84(iParam0, -247578875, 8, 3); break;

					case 7: iVar0 = func_84(iParam0, -1160588753, 8, 3); break;

					case 8: iVar0 = func_84(iParam0, -854821214, 8, 3); break;

					case 11: iVar0 = func_84(iParam0, -1458295118, 8, 3); break;
					}
				}
				return iVar0;
			}
			else if (iParam1 >= 236 && iParam1 <= 236) {
				iVar0 = 240;
				return iVar0;
			}
			else if (iParam1 >= 237) {
				bVar7 = true;
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -269266203, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar2, -685039259, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, 297865853, 0)) {
					iVar6 = 4;
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 201427653, 0)) {
					iVar6 = 5;
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 967829025, 0)) {
					iVar6 = 6;
				}
				else {
					iVar6 = -1;
				}
			}
			else {
				return iVar0;
			}
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0)) {
			bVar7 = true;
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 470686834, 0) && dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar2, -416620954, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1507532917, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1813210391, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, -89003918, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar2, -747858475, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1208450825, 0)) {
				iVar6 = 1;
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1410897066, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1351486939, 0)) {
				iVar6 = 0;
			}
			else {
				iVar6 = -1;
			}
		}
		if (bVar7) {
			if (iVar6 != -1) {
				iVar8 = dlc1::_0xC17AD0E5752BECDA(iVar4);
				iVar9 = 0;
				while (iVar9 < iVar8) {
					dlc1::get_variant_component(iVar4, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 8) {
						if (iVar6 == 6 && dlc1::_0x341DE7ED1D2A1BFD(iVar10, -168336417, 0) ||
							iVar6 == 5 && dlc1::_0x341DE7ED1D2A1BFD(iVar10, -1415000253, 0) ||
							iVar6 == 4 && dlc1::_0x341DE7ED1D2A1BFD(iVar10, -1703203608, 0) ||
							iVar6 == 3 && dlc1::_0x341DE7ED1D2A1BFD(iVar10, 1318819110, 0) ||
							iVar6 == 2 && dlc1::_0x341DE7ED1D2A1BFD(iVar10, -1138757583, 0) ||
							iVar6 == 1 && dlc1::_0x341DE7ED1D2A1BFD(iVar10, 647976134, 0) ||
							iVar6 == 0 && !dlc1::_0x341DE7ED1D2A1BFD(iVar10, 647976134, 0) &&
								!dlc1::_0x341DE7ED1D2A1BFD(iVar10, -1138757583, 0) &&
								!dlc1::_0x341DE7ED1D2A1BFD(iVar10, 1318819110, 0) &&
								!dlc1::_0x341DE7ED1D2A1BFD(iVar10, -1703203608, 0) &&
								!dlc1::_0x341DE7ED1D2A1BFD(iVar10, -1415000253, 0) &&
								!dlc1::_0x341DE7ED1D2A1BFD(iVar10, -168336417, 0)) {
							if (iVar10 != 0 && iVar10 != 1849449579) {
								iVar0 = func_84(iParam0, iVar10, 8, 3);
							}
							else {
								iVar0 = iVar11;
							}
							iVar9 = iVar8 + 1;
							iVar1 = 0;
							return iVar0;
						}
					}
					iVar9++;
				}
			}
			return -99;
		}
		if (iParam2 >= 96 && iParam2 <= 107 || iVar3 == 6) {
			if (iParam1 <= 15) {
				iVar0 = 32;
			}
			else if (iParam1 <= 31) {
				iVar0 = 224;
			}
			else if (iParam1 == 236) {
				iVar0 = 240;
			}
			else if (iParam1 >= 220 && iParam1 <= 235 && func_207() &&
					 !dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1266557933, 0)) {
				iVar0 = 34;
				iVar1 = 0;
				dlc1::init_shop_ped_component(&Var13);
				if (Global_2592891[1] != 0) {
					dlc1::_get_num_props_from_outfit(3, 6, -1, 0, -1, 8);
					dlc1::get_shop_ped_query_component(Global_2592888[1], &Var13);
					if (Var13.f_1 != Global_2592891[1]) {
						Global_2592891[1] = 0;
						Global_2592888[1] = 0;
					}
				}
				if (Global_2592891[1] == 0) {
					iVar31 = 0;
					iVar32 = dlc1::_get_num_props_from_outfit(3, 6, -1, 0, -1, 8);
					iVar30 = 0;
					while (iVar30 < iVar32) {
						dlc1::get_shop_ped_query_component(iVar30, &Var13);
						if (!dlc1::_is_dlc_data_empty(Var13)) {
							if (gameplay::get_hash_key(&Var13.f_9) == -1665616807 &&
								dlc1::_0x341DE7ED1D2A1BFD(Var13.f_1, 647976134, 0)) {
								Global_2592891[1] = Var13.f_1;
								Global_2592888[1] = iVar31;
								iVar30 = iVar32 + 1;
							}
							iVar31++;
						}
						iVar30++;
					}
				}
				if (Global_2592891[1] != 0) {
					iVar0 = func_85(iParam0, func_25(8)) + Global_2592888[1];
					iVar1 = 1;
				}
			}
			else {
				iVar0 = 34;
				iVar1 = 0;
				if (iParam1 >= 237) {
					iVar33 = func_104(iParam0, iParam1, 11, 3);
					if (iVar33 != -1 && !dlc1::_0x341DE7ED1D2A1BFD(iVar33, 310957510, 0) &&
						!dlc1::_0x341DE7ED1D2A1BFD(iVar33, -109983526, 0) &&
						!(dlc1::_0x341DE7ED1D2A1BFD(iVar2, 490219883, 0) &&
						  dlc1::_0x341DE7ED1D2A1BFD(iVar33, 1943944625, 0))) {
						iVar34 = dlc1::_0xC17AD0E5752BECDA(iVar33);
						iVar35 = 0;
						while (iVar35 < iVar34) {
							dlc1::get_variant_component(iVar33, iVar35, &iVar36, &iVar37, &iVar38);
							if (iVar38 == 8) {
								if (iVar36 != 0 && iVar36 != 1849449579) {
									if (!dlc1::_0x341DE7ED1D2A1BFD(iVar36, -1703203608, 0) &&
										!dlc1::_0x341DE7ED1D2A1BFD(iVar36, -1415000253, 0) &&
										!dlc1::_0x341DE7ED1D2A1BFD(iVar36, -168336417, 0)) {
										iVar0 = func_84(iParam0, iVar36, 8, 3);
									}
								}
								else {
									iVar0 = iVar37;
								}
							}
							iVar35++;
						}
					}
				}
			}
		}
		else if (iParam1 <= 15) {
			iVar0 = 0;
		}
		else if (iParam1 <= 31) {
			iVar0 = 16;
		}
		else if (iParam1 <= 47) {
			iVar0 = 2;
			iVar1 = 0;
		}
		else if (iParam1 <= 63) {
			iVar0 = -99;
		}
		else if (iParam1 <= 79) {
			iVar0 = -99;
		}
		else if (iParam1 <= 95) {
			iVar0 = 80;
		}
		else if (iParam1 <= 107) {
			iVar0 = -99;
		}
		else if (iParam1 <= 123) {
			iVar0 = -99;
		}
		else if (iParam1 <= 139) {
			iVar0 = 128;
		}
		else if (iParam1 <= 155) {
			iVar0 = 144;
		}
		else if (iParam1 <= 171) {
			iVar0 = -99;
		}
		else if (iParam1 <= 187) {
			iVar0 = 2;
			iVar1 = 0;
		}
		else if (iParam1 <= 203 || iVar5 == 12) {
			if (iParam2 >= 48 && iParam2 <= 63 || iParam2 >= 108 && iParam2 <= 123 || iVar3 == 3 || iVar3 == 7 ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1769225721, 0)) {
				iVar0 = 2;
				iVar1 = 0;
			}
			else {
				iVar39 = 0;
				if (iParam2 >= 236 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0)) {
					iVar39 = 1;
				}
				iVar40 = func_104(iParam0, iParam1, 11, 3);
				if (iVar40 != -1) {
					iVar41 = dlc1::_0xC17AD0E5752BECDA(iVar40);
					iVar42 = 0;
					while (iVar42 < iVar41) {
						dlc1::get_variant_component(iVar40, iVar42, &iVar43, &iVar44, &iVar45);
						if (iVar45 == 8 && iVar39 == dlc1::_0x341DE7ED1D2A1BFD(iVar43, 1680519719, 0)) {
							if (iVar43 != 0 && iVar43 != 1849449579) {
								iVar0 = func_84(iParam0, iVar43, 8, 3);
							}
							else {
								iVar0 = iVar44;
							}
							iVar42 = iVar41 + 1;
							iVar1 = 0;
						}
						iVar42++;
					}
				}
				else {
					iVar0 = func_84(iParam0, -1739646902, 8, 3);
					iVar1 = 1;
				}
			}
		}
		else if (iParam1 <= 219) {
			iVar0 = 208;
		}
		else if (iParam1 <= 235) {
			iVar0 = 2;
			iVar1 = 0;
			if (func_207()) {
				iVar46 = 0;
				iVar47 = 0;
				if (iParam2 >= 96 && iParam2 <= 107 ||
					iParam2 >= 236 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0)) {
					iVar46 = 1;
					iVar47 = 1;
				}
				dlc1::init_shop_ped_component(&Var48);
				if (Global_2592891[iVar47] != 0) {
					dlc1::_get_num_props_from_outfit(3, 6, -1, 0, -1, 8);
					dlc1::get_shop_ped_query_component(Global_2592888[iVar47], &Var48);
					if (Var48.f_1 != Global_2592891[iVar47]) {
						Global_2592891[iVar47] = 0;
						Global_2592888[iVar47] = 0;
					}
				}
				if (Global_2592891[iVar47] == 0) {
					iVar66 = 0;
					iVar67 = dlc1::_get_num_props_from_outfit(3, 6, -1, 0, -1, 8);
					iVar65 = 0;
					while (iVar65 < iVar67) {
						dlc1::get_shop_ped_query_component(iVar65, &Var48);
						if (!dlc1::_is_dlc_data_empty(Var48)) {
							if (gameplay::get_hash_key(&Var48.f_9) == -1665616807 &&
								iVar46 == dlc1::_0x341DE7ED1D2A1BFD(Var48.f_1, 647976134, 0)) {
								Global_2592891[iVar47] = Var48.f_1;
								Global_2592888[iVar47] = iVar66;
								iVar65 = iVar67 + 1;
							}
							iVar66++;
						}
						iVar65++;
					}
				}
				if (Global_2592891[iVar47] != 0) {
					iVar0 = func_85(iParam0, func_25(8)) + Global_2592888[iVar47];
					iVar1 = 1;
				}
			}
			if (iParam2 >= 237 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0) || iParam2 >= 108 && iParam2 <= 123 ||
				iVar3 == 7 || dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1769225721, 0)) {
				iVar0 = -99;
			}
		}
		else if (iParam1 <= 236) {
			iVar0 = 240;
		}
		else if (iParam1 >= 237) {
			iVar0 = 2;
			iVar1 = 0;
			iVar68 = 0;
			iVar69 = func_104(iParam0, iParam1, 11, 3);
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1351486939, 0)) {
				iVar68 = 1;
			}
			if (iVar69 != -1) {
				iVar70 = dlc1::_0xC17AD0E5752BECDA(iVar69);
				iVar71 = 0;
				while (iVar71 < iVar70) {
					dlc1::get_variant_component(iVar69, iVar71, &iVar72, &iVar73, &iVar74);
					if (iVar74 == 8) {
						if (iVar72 != 0 && iVar72 != 1849449579) {
							iVar0 = func_84(iParam0, iVar72, 8, 3);
							iVar1 = 0;
							if (!iVar68 || dlc1::_0x341DE7ED1D2A1BFD(iVar72, 647976134, 0)) {
								iVar71 = iVar70 + 1;
							}
						}
						else {
							iVar0 = iVar73;
							iVar71 = iVar70 + 1;
							iVar1 = 0;
						}
					}
					iVar71++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		iVar75 = -1;
		iVar76 = -1;
		if (iParam2 >= 256) {
			iVar75 = func_104(iParam0, iParam2, 11, 4);
			iVar76 = func_202(iVar75);
		}
		iVar77 = -1;
		iVar78 = -1;
		if (iParam1 >= 256) {
			iVar77 = func_104(iParam0, iParam1, 11, 4);
			iVar78 = func_202(iVar77);
		}
		if (iVar75 != -1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, -491588875, 0)) {
				return -99;
			}
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1813210391, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar75, -89003918, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar75, 1208450825, 0)) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar77, -828478571, 0)) {
				return -99;
			}
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1719338724, 0)) {
			if (iParam1 >= 0 && iParam1 <= 15 || iParam1 >= 32 && iParam1 <= 47 || iParam1 >= 64 && iParam1 <= 79 ||
				iParam1 >= 80 && iParam1 <= 95 || iParam1 >= 176 && iParam1 <= 191 ||
				iParam1 >= 192 && iParam1 <= 207 || iParam1 >= 208 && iParam1 <= 223 ||
				iParam1 >= 240 && iParam1 <= 255 || iVar78 == 0 || iVar78 == 2 || iVar78 == 4 || iVar78 == 5 ||
				iVar78 == 11 || iVar78 == 12 || iVar78 == 13 || iVar78 == 15 || iVar77 == -221826679 ||
				iVar77 == 1172264892 || iVar77 == 1474853838 || iVar77 == 278369420 || iVar77 == -310817200 ||
				iVar77 == -138976564 || iVar77 == -905541781 || iVar77 == 998321559 || iVar77 == 64401473) {
			}
			else {
				return -99;
			}
		}
		iVar79 = 0;
		bVar80 = false;
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar77, -761463976, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar77, -1347486026, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar77, -1119232689, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar77, 1784133476, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar77, 2044466679, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar77, -2020757158, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar77, 2030343924, 0)) {
			bVar80 = true;
			if (iParam2 >= 16 && iParam2 <= 31 || iParam2 >= 128 && iParam2 <= 143 || iVar76 == 1 || iVar76 == 8) {
				iVar79 = 2;
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, 1769225721, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1834446747, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -868698159, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1266557933, 0)) {
				iVar79 = 0;
			}
			else if (iParam2 >= 160 && iParam2 <= 175 || iVar76 == 10 ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 684992453, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 916636514, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1939378450, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -820724897, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 153792394, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -872449705, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 700658917, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 1714969731, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 745826556, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 1055526375, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 144417099, 0)) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar77, 1784133476, 0)) {
					iVar79 = 1;
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar77, -1119232689, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar77, 2044466679, 0)) {
					iVar79 = 1;
				}
				else {
					iVar79 = -1;
				}
			}
			else {
				iVar79 = 1;
			}
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar77, -1351486939, 0)) {
			bVar80 = true;
			if (iParam2 >= 112 && iParam2 <= 127 || iVar76 == 7 || dlc1::_0x341DE7ED1D2A1BFD(iVar75, 684992453, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar75, 916636514, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar75, -820724897, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar75, -872449705, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar75, -416620954, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar75, 947651647, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar75, -549843760, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar75, 1830529185, 0)) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, 1769225721, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1834446747, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1266557933, 0)) {
					iVar79 = 0;
				}
				else {
					iVar79 = 1;
				}
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, 153792394, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 1322269404, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 548036233, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 700658917, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1014753511, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1410897066, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -2119756144, 0)) {
				iVar79 = 0;
			}
			else {
				iVar79 = -1;
			}
		}
		switch (iVar77) {
		case -221826679:
		case 1172264892:
		case 1474853838:
		case 278369420:
		case -310817200:
		case -138976564:
		case -905541781:
		case 998321559:
		case 64401473:
		case 15269846:
		case -674026069:
		case -904392139:
		case -1135708510:
		case -1360241698:
		case -2130051046:
		case 1935434943:
		case 1704282417:
		case 1472114052:
		case 1169688951:
		case -1193832172:
		case -886884949:
		case -1669539745:
		case -1370260468:
		case -413962745:
		case -238779663:
			bVar80 = true;
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, 1769225721, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar75, -868698159, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1266557933, 0)) {
				iVar79 = 1;
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1834446747, 0)) {
				iVar79 = 2;
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, -870074461, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1719338724, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -416620954, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 947651647, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -549843760, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 1830529185, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1813210391, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -89003918, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -747858475, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 1208450825, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -58412562, 0)) {
				iVar79 = 3;
			}
			else if (iParam2 >= 16 && iParam2 <= 31 || iParam2 >= 128 && iParam2 <= 143 ||
					 iParam2 >= 112 && iParam2 <= 127 || iVar76 == 1 || iVar76 == 7 || iVar76 == 8) {
				iVar79 = 0;
			}
			else {
				iVar79 = -1;
			}
			break;

		case 619380843:
			bVar80 = true;
			if (iParam2 >= 16 && iParam2 <= 31 || iParam2 >= 128 && iParam2 <= 143 || iVar76 == 1 || iVar76 == 8) {
				iVar79 = 0;
			}
			else {
				iVar79 = -1;
			}
			break;
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1266557933, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar75, -979468724, 0)) {
			if (iParam1 >= 240 && iParam1 <= 255 || iVar78 == 15) {
				iVar0 = 120;
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(iVar77, 2044466679, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar77, -2020757158, 0)) {
				bVar80 = true;
				iVar79 = 0;
			}
			else {
				return iVar0;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1237899132, 0) &&
				 !dlc1::_0x341DE7ED1D2A1BFD(iVar75, -491588875, 0)) {
			if (iParam1 >= 64 && iParam1 <= 79 || iParam1 >= 80 && iParam1 <= 95 || iParam1 >= 176 && iParam1 <= 191 ||
				iParam1 >= 192 && iParam1 <= 207 || iParam1 >= 208 && iParam1 <= 223 ||
				iParam1 >= 240 && iParam1 <= 255 || iVar78 == 4 || iVar78 == 5 || iVar78 == 11 || iVar78 == 12 ||
				iVar78 == 13 || iVar78 == 15) {
				bVar80 = false;
			}
			else if (iParam1 >= 256) {
				bVar80 = true;
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, -269266203, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar75, -685039259, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar75, 297865853, 0)) {
					iVar79 = 4;
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, 201427653, 0)) {
					iVar79 = 5;
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, 967829025, 0)) {
					iVar79 = 6;
				}
				else {
					iVar79 = -1;
				}
			}
			else {
				return iVar0;
			}
		}
		if (bVar80) {
			if (iVar79 != -1) {
				iVar81 = dlc1::_0xC17AD0E5752BECDA(iVar77);
				iVar82 = 0;
				while (iVar82 < iVar81) {
					dlc1::get_variant_component(iVar77, iVar82, &iVar83, &iVar84, &iVar85);
					if (iVar85 == 8) {
						if (iVar79 == 6 && dlc1::_0x341DE7ED1D2A1BFD(iVar83, -168336417, 0) ||
							iVar79 == 5 && dlc1::_0x341DE7ED1D2A1BFD(iVar83, -1415000253, 0) ||
							iVar79 == 4 && dlc1::_0x341DE7ED1D2A1BFD(iVar83, -1703203608, 0) ||
							iVar79 == 3 && dlc1::_0x341DE7ED1D2A1BFD(iVar83, 1318819110, 0) ||
							iVar79 == 2 && dlc1::_0x341DE7ED1D2A1BFD(iVar83, -1138757583, 0) ||
							iVar79 == 1 && dlc1::_0x341DE7ED1D2A1BFD(iVar83, 647976134, 0) ||
							iVar79 == 0 && !dlc1::_0x341DE7ED1D2A1BFD(iVar83, 647976134, 0) &&
								!dlc1::_0x341DE7ED1D2A1BFD(iVar83, -1138757583, 0) &&
								!dlc1::_0x341DE7ED1D2A1BFD(iVar83, 1318819110, 0) &&
								!dlc1::_0x341DE7ED1D2A1BFD(iVar83, -1703203608, 0) &&
								!dlc1::_0x341DE7ED1D2A1BFD(iVar83, -1415000253, 0) &&
								!dlc1::_0x341DE7ED1D2A1BFD(iVar83, -168336417, 0)) {
							if (iVar83 != 0 && iVar83 != 1849449579) {
								iVar0 = func_84(iParam0, iVar83, 8, 4);
							}
							else {
								iVar0 = iVar84;
							}
							iVar82 = iVar81 + 1;
							iVar1 = 0;
							return iVar0;
						}
					}
					iVar82++;
				}
			}
			return -99;
		}
		if (iParam1 >= 192 && iParam1 <= 207 || iVar78 == 12)
			&&(iParam2 >= 96 && iParam2 <= 111 || iParam2 >= 112 && iParam2 <= 127 || iVar76 == 6 || iVar76 == 7) &&
				func_207() && !dlc1::_0x341DE7ED1D2A1BFD(iVar75, -416620954, 0) &&
				!dlc1::_0x341DE7ED1D2A1BFD(iVar75, 947651647, 0) && !dlc1::_0x341DE7ED1D2A1BFD(iVar75, -549843760, 0) &&
				!dlc1::_0x341DE7ED1D2A1BFD(iVar75, 1830529185, 0) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1813210391, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar75, -89003918, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar75, -747858475, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar75, 1208450825, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar75, -58412562, 0)) {
					return -99;
				}
				iVar86 = iVar77;
				if (iParam1 == 199) {
					iVar0 = func_84(iParam0, 331193219, 8, 4);
				}
				else if (iParam1 == 200) {
					iVar0 = func_84(iParam0, 1115060468, 8, 4);
				}
				else if (iParam1 == 201) {
					iVar0 = func_84(iParam0, 779636984, 8, 4);
				}
				else if (iVar86 == 948380380) {
					iVar0 = func_84(iParam0, -570249206, 8, 4);
				}
				else if (iVar86 == 708412993) {
					iVar0 = func_84(iParam0, -876115052, 8, 4);
				}
				else if (iVar86 == 1974869305) {
					iVar0 = func_84(iParam0, -108599534, 8, 4);
				}
				else if (iVar86 == 1197916315) {
					iVar0 = func_84(iParam0, 200575961, 8, 4);
				}
				else if (iVar86 == 587593690) {
					iVar0 = func_84(iParam0, 961930907, 8, 4);
				}
				else if (iVar86 == 323213398) {
					iVar0 = func_84(iParam0, -257698508, 8, 4);
				}
				else if (iVar86 == 1050193651) {
					iVar0 = func_84(iParam0, 516534659, 8, 4);
				}
				else if (iVar86 == 811438717) {
					iVar0 = func_84(iParam0, -1174312584, 8, 4);
				}
				else if (iVar86 == -877868759) {
					iVar0 = func_84(iParam0, -1192794304, 8, 4);
				}
				else if (iVar86 == -1108464212) {
					iVar0 = func_84(iParam0, -2027256889, 8, 4);
				}
				else if (iVar86 == -467866094) {
					iVar0 = func_84(iParam0, -1670074789, 8, 4);
				}
				else if (iVar86 == -673000034) {
					iVar0 = func_84(iParam0, -326349175, 8, 4);
				}
				else if (iVar86 == -1984939718) {
					iVar0 = func_84(iParam0, -796060021, 8, 4);
				}
				iVar1 = 0;
			}
		else if (iParam1 <= 15) {
			if (iParam2 >= 160 && iParam2 <= 175 || dlc1::_0x341DE7ED1D2A1BFD(iVar75, 1769225721, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar75, -868698159, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1266557933, 0)) {
				iVar0 = 16;
			}
			else {
				iVar0 = 0;
			}
		}
		else if (iParam1 <= 31) {
			iVar0 = -99;
		}
		else if (iParam1 <= 47) {
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 63) {
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 79) {
			iVar0 = 34;
		}
		else if (iParam1 <= 95) {
			iVar0 = 50;
		}
		else if (iParam1 <= 111) {
			iVar0 = -99;
		}
		else if (iParam1 <= 127) {
			iVar0 = -99;
		}
		else if (iParam1 <= 143) {
			iVar0 = -99;
		}
		else if (iParam1 <= 159) {
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 175) {
			iVar0 = -99;
		}
		else if (iParam1 <= 191) {
			iVar0 = 71;
		}
		else if (iParam1 <= 207) {
			iVar1 = 0;
			switch (iParam1) {
			case 199: iVar0 = 94; break;

			case 200: iVar0 = 95; break;

			case 201: iVar0 = 96; break;
			}
			if (iParam2 >= 160 && iParam2 <= 175 || iVar76 == 10) {
				return -99;
			}
		}
		else if (iParam1 <= 223) {
			iVar0 = 103;
		}
		else if (iParam1 <= 239) {
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 255) {
			iVar0 = 120;
		}
		else if (iParam1 >= 256) {
			iVar0 = 48;
			iVar1 = 0;
			if (iVar77 != -1) {
				bVar87 = true;
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar77, 1965569012, 0)) {
					bVar87 = false;
					if (iParam2 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1200513218, 0)) {
						bVar87 = true;
					}
				}
				if (bVar87) {
					iVar79 = 0;
					if (iParam2 >= 160 && iParam2 <= 175) {
						if (iVar78 == 12) {
							iVar79 = 1;
						}
					}
					iVar88 = dlc1::_0xC17AD0E5752BECDA(iVar77);
					iVar89 = 0;
					while (iVar89 < iVar88) {
						dlc1::get_variant_component(iVar77, iVar89, &iVar90, &iVar91, &iVar92);
						if (iVar92 == 8 && (iVar90 == 0 || iVar90 == 1849449579 ||
											iVar79 == 6 && dlc1::_0x341DE7ED1D2A1BFD(iVar90, -168336417, 0) ||
											iVar79 == 5 && dlc1::_0x341DE7ED1D2A1BFD(iVar90, -1415000253, 0) ||
											iVar79 == 4 && dlc1::_0x341DE7ED1D2A1BFD(iVar90, -1703203608, 0) ||
											iVar79 == 3 && dlc1::_0x341DE7ED1D2A1BFD(iVar90, 1318819110, 0) ||
											iVar79 == 2 && dlc1::_0x341DE7ED1D2A1BFD(iVar90, -1138757583, 0) ||
											iVar79 == 1 && dlc1::_0x341DE7ED1D2A1BFD(iVar90, 647976134, 0) ||
											iVar79 == 0 && !dlc1::_0x341DE7ED1D2A1BFD(iVar90, 647976134, 0) &&
												!dlc1::_0x341DE7ED1D2A1BFD(iVar90, -1138757583, 0) &&
												!dlc1::_0x341DE7ED1D2A1BFD(iVar90, 1318819110, 0) &&
												!dlc1::_0x341DE7ED1D2A1BFD(iVar90, -1703203608, 0) &&
												!dlc1::_0x341DE7ED1D2A1BFD(iVar90, -1415000253, 0) &&
												!dlc1::_0x341DE7ED1D2A1BFD(iVar90, -168336417, 0))) {
							if (iVar90 != 0 && iVar90 != 1849449579) {
								iVar0 = func_84(iParam0, iVar90, 8, 4);
							}
							else {
								iVar0 = iVar91;
							}
							iVar89 = iVar88 + 1;
							iVar1 = 0;
						}
						iVar89++;
					}
				}
			}
		}
	}
	if (iVar1 && iVar0 != -99) {
		iVar0 += iParam3;
	}
	return iVar0;
}

// Position - 0x371BD
bool func_207() { return dlc2::is_dlc_present(42019760); }

// Position - 0x371CE
int func_208(int iParam0, int iParam1, int iParam2) {
	switch (iParam0) {
	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 2131039487;

			case 3: return 717379468;

			case 4: return -331193181;

			case 5: return 73557144;

			case 6: return -887980266;

			case 7: return -306315670;

			case 8: return -1154048938;
			}
			break;

		case 1:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return -1301636615;

			case 3: return 1153996761;

			case 4: return -1315084792;

			case 5: return 1655884038;

			case 6: return 1489229833;

			case 7: return -1929503325;

			case 8: return -1189128367;
			}
			break;

		case 2:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 538171135;

			case 3: return -244985062;

			case 4: return 442977103;

			case 5: return -1385727891;

			case 6: return 1309989623;

			case 7: return 1191418696;

			case 8: return 189293242;
			}
			break;

		case 3:
			switch (iParam2) {
			case 0: return -1438684756;

			case 1: return 194146035;

			case 2: return -420901598;

			case 3: return 2107411814;

			case 4: return 1242686602;

			case 5: return -596540583;

			case 6: return -653786071;

			case 7: return 1460048630;

			case 8: return -2079589815;
			}
			break;

		case 4:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return -1947098483;

			case 3: return 569295621;

			case 4: return -208098559;

			case 5: return 1256246195;

			case 6: return 1605755939;

			case 7: return 874748698;

			case 8: return -137095372;
			}
			break;

		case 5:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 1950801119;

			case 3: return -1158564771;

			case 4: return -69929428;

			case 5: return 1957730707;

			case 6: return 374587029;

			case 7: return -210146735;

			case 8: return 336100633;
			}
			break;

		case 6:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return -1148238879;

			case 3: return -958872024;

			case 4: return 1353141306;

			case 5: return 394070886;

			case 6: return 255958050;

			case 7: return -521728710;

			case 8: return 1843470374;
			}
			break;

		case 7:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 670760190;

			case 3: return 799655540;

			case 4: return -99079306;

			case 5: return 1989760633;

			case 6: return 1157052274;

			case 7: return -1196262225;

			case 8: return -664356399;
			}
			break;

		case 8: break;

		case 9:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 1875496913;

			case 3: return -1978886808;

			case 4: return -1279403197;

			case 5: return -1459998821;

			case 6: return 1786467932;

			case 7: return -795005246;

			case 8: return -1147008986;
			}
			break;

		case 10: break;

		case 11:
		case 16:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return -1925009287;

			case 3: return -268733734;

			case 4: return -2124412821;

			case 5: return -360036697;

			case 6: return -926433555;

			case 7: return 985839403;

			case 8: return -234436397;

			case 9: return 1165919867;

			case 10: return 1606204151;

			case 11: return 1774276352;

			case 12: return 1934254610;

			case 13: return 980775017;

			case 14: return 399321881;
			}
			break;

		case 12:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 493536654;

			case 3: return -1759053005;

			case 4: return 630158551;

			case 5: return -707909514;

			case 6: return 1254885089;

			case 7: return 596977742;

			case 8: return 1861540342;
			}
			break;

		case 13: break;

		case 14:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return -840276017;

			case 3: return 756400133;

			case 4: return 1148630611;

			case 5: return -893909282;

			case 6: return 1485630477;

			case 7: return -934174767;

			case 8: return -1866981918;
			}
			break;

		case 15:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return -591418577;

			case 3: return -2029591494;

			case 4: return 1293565798;

			case 5: return 1230599348;

			case 6: return 80125466;

			case 7: return 768104686;

			case 8: return -1559755280;
			}
			break;

		case 352:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 1435783799;

			case 3: return -935552076;

			case 4: return 766407714;

			case 5: return 1509946582;

			case 6: return -2105033798;

			case 7: return 1608018857;

			case 8: return -1746944984;
			}
			break;

		case 353:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 640553446;

			case 3: return 376036624;

			case 4: return -51036152;

			case 5: return 1864144311;

			case 6: return 875934121;

			case 7: return -671105758;

			case 8: return -1439393512;
			}
			break;

		case 354:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return -1795808405;

			case 3: return -583173670;

			case 4: return 1309411930;

			case 5: return -1097003929;

			case 6: return 947491077;

			case 7: return -1021187095;

			case 8: return -1662421384;
			}
			break;

		case 391:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return -1866149930;

			case 3: return 169817082;

			case 4: return 876172205;

			case 5: return 2053608242;

			case 6: return 720468224;

			case 7: return -1755663855;

			case 8: return -277654310;
			}
			break;

		case 404:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return -1685192020;

			case 3: return 447714365;

			case 4: return -187478284;

			case 5: return 2101575193;

			case 6: return 1655151264;

			case 7: return -212448586;

			case 8: return -575494038;
			}
			break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return -414534788;

			case 3: return 185531215;

			case 4: return -775417853;

			case 5: return 1619085169;

			case 6: return 888176083;

			case 7: return -868636293;

			case 8: return -481241218;
			}
			break;

		case 1:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 982904848;

			case 3: return 1053086051;

			case 4: return 1565990968;

			case 5: return 869354244;

			case 6: return -1137668925;

			case 7: return -245327436;

			case 8: return -2092735770;
			}
			break;

		case 2:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 1286693086;

			case 3: return 443095479;

			case 4: return -2039335276;

			case 5: return 2083407994;

			case 6: return 533001127;

			case 7: return 1728875992;

			case 8: return -1665814217;
			}
			break;

		case 3: break;

		case 4:
			switch (iParam2) {
			case 0: return 1402439971;

			case 1: return -77210386;

			case 2: return 206640931;

			case 3: return 1434974169;

			case 4: return -2076303403;

			case 5: return 2073263245;

			case 6: return 229693395;

			case 7: return -981246739;

			case 8: return 2107613618;
			}
			break;

		case 5:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 1954830049;

			case 3: return 1793062342;

			case 4: return -2118725149;

			case 5: return -849747283;

			case 6: return 1582789248;

			case 7: return -1675687168;

			case 8: return -381889304;
			}
			break;

		case 6:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 1942207698;

			case 3: return -743369876;

			case 4: return 582693633;

			case 5: return -1280288284;

			case 6: return -1000105499;

			case 7: return -2147200029;

			case 8: return -1838714866;
			}
			break;

		case 7: break;

		case 8:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 1187050736;

			case 3: return -1420954963;

			case 4: return 232453794;

			case 5: return 406178867;

			case 6: return 739288468;

			case 7: return -252997160;

			case 8: return -2044888090;
			}
			break;

		case 9: break;

		case 10: break;

		case 11:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 1703311969;

			case 3: return 1875667738;

			case 4: return 1291347593;

			case 5: return -713453992;

			case 6: return 1417339152;

			case 7: return 587281350;

			case 8: return -86904022;
			}
			break;

		case 12:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return -1858518769;

			case 3: return 44044890;

			case 4: return -1131137757;

			case 5: return 213313570;

			case 6: return -233124949;

			case 7: return 171345846;

			case 8: return 1452902248;
			}
			break;

		case 13: break;

		case 14:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 747852506;

			case 3: return 216238268;

			case 4: return 404894315;

			case 5: return 950341895;

			case 6: return 1159773017;

			case 7: return -957185436;

			case 8: return -240960885;
			}
			break;

		case 15:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return -259688953;

			case 3: return -736534114;

			case 4: return -1673886961;

			case 5: return 976562040;

			case 6: return -1794803798;

			case 7: return -81887956;

			case 8: return 1689176064;
			}
			break;

		case 302:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return -1835438866;

			case 3: return -504887899;

			case 4: return -2062205969;

			case 5: return 1171204323;

			case 6: return 655612525;

			case 7: return -739019619;

			case 8: return 1371789707;
			}
			break;

		case 303:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 124374814;

			case 3: return 2119944607;

			case 4: return -1129482474;

			case 5: return 801728466;

			case 6: return 1764150402;

			case 7: return -43777;

			case 8: return -543743869;
			}
			break;

		case 304:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 1732443055;

			case 3: return 1991589117;

			case 4: return -1926802042;

			case 5: return -1879434956;

			case 6: return -582200001;

			case 7: return 498117603;

			case 8: return 1121585510;
			}
			break;
		}
		break;
	}
	return -1;
}

// Position - 0x385F5
int func_209(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	iVar0 = -99;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		if (iParam2 >= 237) {
			iVar2 = func_104(iParam0, iParam2, 11, 3);
			iVar1 = func_202(iVar2);
		}
		if (iParam1 >= 241) {
			iVar4 = func_104(iParam0, iParam1, 8, 3);
			iVar3 = func_202(iVar4);
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0)) {
			iVar0 = 14;
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -2017999390, 0)) {
			iVar0 = 6;
		}
		else if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1786447517, 0)) {
			iVar0 = 1;
		}
		else if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1010805287, 0)) {
			iVar0 = 4;
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1237899132, 0) && !dlc1::_0x341DE7ED1D2A1BFD(iVar2, -491588875, 0)) {
			if (iParam1 == 240) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -269266203, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar2, -685039259, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, 297865853, 0)) {
					iVar0 = func_84(iParam0, -189347783, 3, 3);
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 201427653, 0)) {
					iVar0 = func_84(iParam0, -2124259813, 3, 3);
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 967829025, 0)) {
					iVar0 = func_84(iParam0, 1522547645, 3, 3);
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -979468724, 0)) {
					iVar0 = 5;
				}
			}
			else {
				iVar0 = func_209(iParam0, -99, func_203(iParam0, iParam1, 0), iParam3);
				if (iVar0 == -99) {
					iVar0 = 0;
				}
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -316495692, 0)) {
			iVar0 = 12;
		}
		else if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -416620954, 0) ||
				 iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1507532917, 0) ||
				 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1813210391, 0)) {
			if (iParam1 == 240) {
				iVar0 = 14;
			}
			else if (iParam1 >= 80 && iParam1 <= 95 || iVar3 == 5) {
				iVar0 = 6;
			}
			else if (iParam1 >= 16 && iParam1 <= 31 || iVar3 == 1) {
				iVar0 = 1;
			}
			else {
				iVar0 = 4;
			}
		}
		else if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1719338724, 0)) {
			if (iParam1 == 240) {
				iVar0 = 14;
			}
			else if (iParam1 >= 80 && iParam1 <= 95 || iVar3 == 5) {
				iVar0 = 6;
			}
			else {
				iVar0 = 1;
			}
		}
		else if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1939378450, 0)) {
			if (iParam1 >= 192 && iParam1 <= 207 || iVar3 == 12) {
				iVar0 = 0;
			}
			else {
				iVar0 = 11;
			}
		}
		else if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, 264959411, 0)) {
			if (iParam1 >= 80 && iParam1 <= 95 || iVar3 == 5) {
				iVar0 = 6;
			}
			else if (iParam1 == 240) {
				iVar0 = 14;
			}
			else if (iParam1 >= 16 && iParam1 <= 31 || iVar3 == 1) {
				iVar0 = 1;
			}
		}
		else if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0)) {
			iVar0 = 12;
		}
		else if (iParam2 >= 0 && iParam2 <= 31 || iVar1 == 0 || iVar1 == 1) {
			iVar0 = 0;
		}
		else if (iParam2 >= 48 && iParam2 <= 63 || iParam2 >= 64 && iParam2 <= 79 || iParam2 >= 96 && iParam2 <= 107 ||
				 iParam2 >= 108 && iParam2 <= 123 || iParam2 >= 156 && iParam2 <= 171 || iVar1 == 3 || iVar1 == 4 ||
				 iVar1 == 6 || iVar1 == 7 || iVar1 == 10) {
			if (iParam1 >= 80 && iParam1 <= 95 || iVar3 == 5) {
				iVar0 = 6;
			}
			else if (iParam1 == 240 || iVar3 == 15) {
				iVar0 = 14;
			}
			else if (iParam1 >= 160 && iParam1 <= 175 || iVar3 == 10) {
				iVar0 = 4;
			}
			else if (iParam1 >= 176 && iParam1 <= 191 || iVar3 == 11) {
				iVar0 = 12;
			}
			else if (iParam1 >= 16 && iParam1 <= 31 || iParam1 >= 224 && iParam1 <= 239 || iVar3 == 1 || iVar3 == 14) {
				iVar0 = 1;
			}
			else if (iParam1 >= 80 && iParam1 <= 95 || iVar3 == 5) {
				iVar0 = 6;
			}
			else if (iParam1 >= 32 && iParam1 <= 47 || iVar3 == 2) {
				iVar0 = 4;
			}
			else if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1847239679, 0)) {
				if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1914383230, 0)) {
					iVar0 = 4;
				}
				else {
					iVar0 = 1;
				}
			}
			else if (iParam1 >= 144 && iParam1 <= 159 || iVar3 == 9) {
				iVar0 = 1;
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -849839091, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -2088146832, 0)) {
				iVar0 = 4;
			}
			else if (iParam1 >= 241) {
				if (iVar4 != -1) {
					iVar5 = dlc1::_get_num_forced_components(iVar4);
					iVar6 = 0;
					while (iVar6 < iVar5) {
						dlc1::get_forced_component(iVar4, iVar6, &iVar7, &iVar8, &iVar9);
						if (iVar9 == 3) {
							if (iVar7 != 0 && iVar7 != 1849449579) {
								iVar0 = func_84(iParam0, iVar7, 3, 3);
							}
							else {
								iVar0 = iVar8;
							}
							iVar6 = iVar5 + 1;
						}
						iVar6++;
					}
				}
			}
		}
		else if (iParam2 >= 172 && iParam2 <= 187 || iVar1 == 11) {
			if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -7109286, 0)) {
				iVar0 = 6;
			}
			else if (iParam1 >= 48 && iParam1 <= 63 || iParam1 >= 112 && iParam1 <= 127 || iVar3 == 3 || iVar3 == 7) {
				iVar0 = 11;
			}
			else if (iParam1 >= 96 && iParam1 <= 111 || iVar3 == 6) {
				iVar0 = 11;
			}
			else if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1147939952, 0)) {
				iVar0 = 12;
			}
			else if (iParam1 == 240) {
				iVar0 = 15;
			}
		}
		break;

	case joaat("mp_f_freemode_01"):
		if (iParam2 >= 256) {
			iVar2 = func_104(iParam0, iParam2, 11, 4);
			iVar1 = func_202(iVar2);
		}
		if (iParam1 >= 136) {
			iVar4 = func_104(iParam0, iParam1, 8, 4);
			iVar3 = func_202(iVar4);
			switch (iVar4) {
			case 327496660:
			case -63928837:
			case 695885966:
			case 525421628:
			case 1426634666:
			case 1160648693:
			case 1928065904:
			case 1748557322:
			case -1777223233:
			case -1991794649:
			case 917309067:
			case -1629661498: iVar3 = 15; break;

			case 587358117:
			case 742748715:
			case 490263574:
			case 682683142:
			case -1172927021:
			case -174365543:
			case -1450128251:
			case -1811439245:
			case 1578218888:
			case -1193481443:
			case 1549742623:
			case 1309119856:
			case 2143418596:
			case 1905745039:
			case 428026984:
			case 1547729071:
			case -1848319017: iVar3 = 13; break;
			}
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0)) {
			iVar0 = 0;
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1237899132, 0) && !dlc1::_0x341DE7ED1D2A1BFD(iVar2, -491588875, 0)) {
			if (iParam1 >= 34 && iParam1 <= 49 || iParam1 >= 50 && iParam1 <= 65 || iParam1 >= 71 && iParam1 <= 86 ||
				iParam1 >= 87 && iParam1 <= 102 || iParam1 >= 103 && iParam1 <= 118 ||
				iParam1 >= 120 && iParam1 <= 135 || iVar3 == 4 || iVar3 == 5 || iVar3 == 11 || iVar3 == 12 ||
				iVar3 == 13 || iVar3 == 15 || iVar4 == 1389091979 || iVar4 == 442100644 || iVar4 == -1406103725 ||
				iVar4 == -167304449 || iVar4 == 129353308 || iVar4 == 1943510702 || iVar4 == 1963041026 ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, -2020757158, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1064262817, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1419806467, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1053842259, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1358888880, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1208450825, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 297865853, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar4, 602650322, 0)) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -269266203, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar2, -685039259, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, 297865853, 0)) {
					iVar0 = func_84(iParam0, -405734992, 3, 4);
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 201427653, 0)) {
					iVar0 = func_84(iParam0, 1297919831, 3, 4);
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 967829025, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -979468724, 0)) {
					iVar0 = func_84(iParam0, 440926231, 3, 4);
				}
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -89003918, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -747858475, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 490219883, 0)) {
				iVar0 = 11;
			}
			else {
				iVar0 = func_209(iParam0, -99, func_203(iParam0, iParam1, 0), iParam3);
				if (iVar0 == -99) {
					iVar0 = 14;
				}
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -316495692, 0)) {
			iVar0 = 3;
		}
		else if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1965569012, 0) && !func_205(iParam0, iParam2) &&
				 !dlc1::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0)) {
			if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1147939952, 0)) {
				iVar0 = 3;
			}
			else {
				iVar0 = 0;
			}
		}
		else if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1353777856, 0)) {
			iVar0 = 7;
		}
		else if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -849839091, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -2088146832, 0)) {
			iVar0 = 3;
		}
		else if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -2102859770, 0)) {
			if (dlc1::_0x341DE7ED1D2A1BFD(func_104(iParam0, iParam3, 4, 4), -33031567, 0)) {
				iVar0 = 11;
			}
			else {
				iVar0 = 15;
			}
		}
		else if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1119232689, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1976716889, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1488441032, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1419806467, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1813210391, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 263623295, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -309899747, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -89003918, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -747858475, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 490219883, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1208450825, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 297865853, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 602650322, 0)) {
			if (iParam2 >= 16 && iParam2 <= 31 || iParam2 >= 96 && iParam2 <= 111 || iParam2 >= 128 && iParam2 <= 143 ||
				iVar1 == 1 || iVar1 == 6 || iVar1 == 8) {
				iVar0 = 1;
			}
			else if (iParam2 >= 112 && iParam2 <= 127 || iParam2 >= 160 && iParam2 <= 175 || iVar1 == 7 ||
					 iVar1 == 10 || dlc1::_0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, 916636514, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1322269404, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, 548036233, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -870074461, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1174924468, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -868698159, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1769225721, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1834446747, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1719338724, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -416620954, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, 947651647, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -549843760, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1830529185, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1266557933, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1813210391, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -89003918, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -747858475, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1208450825, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -58412562, 0)) {
				iVar0 = 3;
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1939378450, 0)) {
				iVar0 = 9;
			}
		}
		else if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -870074461, 0) ||
				 iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1813210391, 0) ||
				 iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -89003918, 0) ||
				 iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -747858475, 0) ||
				 iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1208450825, 0) ||
				 iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -58412562, 0)) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, 684992453, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 916636514, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1939378450, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 441715397, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar4, 264959411, 0)) {
				iVar0 = 1;
			}
			else {
				iVar0 = 6;
			}
		}
		else if (iParam2 >= 16 && iParam2 <= 31 || iVar1 == 1) {
			if (iParam1 >= 50 && iParam1 <= 65 || iParam1 >= 120 && iParam1 <= 135 || iVar3 == 5 || iVar3 == 15) {
				iVar0 = 5;
			}
			else if (iParam1 >= 136) {
				if (iVar4 != -1) {
					iVar10 = dlc1::_get_num_forced_components(iVar4);
					iVar11 = 0;
					while (iVar11 < iVar10) {
						dlc1::get_forced_component(iVar4, iVar11, &iVar12, &iVar13, &iVar14);
						if (iVar14 == 3) {
							if (iVar12 != 0 && iVar12 != 1849449579) {
								iVar0 = func_84(iParam0, iVar12, 3, 4);
							}
							else {
								iVar0 = iVar13;
							}
							iVar11 = iVar10 + 1;
						}
						iVar11++;
					}
				}
			}
		}
		else if (iParam2 >= 112 && iParam2 <= 127 || iVar1 == 7 || dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1719338724, 0)) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, 684992453, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 916636514, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1939378450, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 441715397, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar4, 264959411, 0)) {
				iVar0 = 3;
			}
			else {
				iVar0 = 6;
			}
		}
		break;
	}
	return iVar0;
}

// Position - 0x397E5
void func_210(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	int iVar15;
	struct<5> Var16;
	bool bVar33;

	iVar0 = entity::get_entity_model(iParam0);
	iVar1 = ped::get_ped_drawable_variation(iParam0, 11);
	iVar2 = ped::get_ped_texture_variation(iParam0, 11);
	iVar3 = ped::get_ped_drawable_variation(iParam0, 1);
	iVar4 = ped::get_ped_texture_variation(iParam0, 1);
	iVar5 = ped::get_ped_drawable_variation(iParam0, 8);
	iVar6 = ped::get_ped_texture_variation(iParam0, 8);
	iVar7 = ped::get_ped_drawable_variation(iParam0, 10);
	iVar8 = ped::get_ped_texture_variation(iParam0, 10);
	iVar9 = dlc1::get_hash_name_for_component(iParam0, 11, iVar1, iVar2);
	iVar10 = dlc1::get_hash_name_for_component(iParam0, 1, iVar3, iVar4);
	iVar11 = dlc1::get_hash_name_for_component(iParam0, 8, iVar5, iVar6);
	iVar12 = dlc1::get_hash_name_for_prop(iParam0, 0, ped::get_ped_prop_index(iParam0, 0),
										  ped::get_ped_prop_texture_index(iParam0, 0));
	iVar13 = dlc1::get_hash_name_for_component(iParam0, 10, iVar7, iVar8);
	if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, -317649054, 0)) {
		bVar14 = false;
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, 32905942, 0)) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar12, 605826125, 0)) {
				if (!dlc1::_0x341DE7ED1D2A1BFD(iVar9, -1889900289, 0)) {
					bVar14 = true;
				}
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, -1889900289, 0)) {
				bVar14 = true;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar10, 72391838, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar10, -1409448021, 0))
			&&!func_213(iVar0, 14, func_221(iParam0, 14, 0), -1) &&
				!dlc1::_0x341DE7ED1D2A1BFD(iVar12, -1821566288, 0) && !dlc1::_0x341DE7ED1D2A1BFD(iVar12, 208298959, 0) {
				if (!dlc1::_0x341DE7ED1D2A1BFD(iVar9, -1889900289, 0)) {
					bVar14 = true;
				}
			}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, -1889900289, 0)) {
			bVar14 = true;
		}
		if (bVar14) {
			if (func_212(iVar9, 11, &iVar15)) {
				dlc1::get_shop_ped_component(iVar15, &Var16);
				ped::set_ped_component_variation(iParam0, 11, Var16.f_3, Var16.f_4,
												 ped::get_ped_palette_variation(iParam0, 11));
				if (entity::get_entity_model(iParam0) == joaat("mp_m_freemode_01")) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1487683087, 0)) {
						if (dlc1::_0x341DE7ED1D2A1BFD(iVar15, -816428229, 0) && iVar13 != -1104282163) {
							dlc1::get_shop_ped_component(-1104282163, &Var16);
							ped::set_ped_component_variation(iParam0, 10, Var16.f_3, Var16.f_4, 0);
						}
						else if (dlc1::_0x341DE7ED1D2A1BFD(iVar15, -521539998, 0) && iVar13 != 326501576) {
							dlc1::get_shop_ped_component(326501576, &Var16);
							ped::set_ped_component_variation(iParam0, 10, Var16.f_3, Var16.f_4, 0);
						}
					}
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1487683087, 0)) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar15, -816428229, 0)) {
						if (iVar13 != 1349944895) {
							dlc1::get_shop_ped_component(1349944895, &Var16);
							ped::set_ped_component_variation(iParam0, 10, Var16.f_3, Var16.f_4, 0);
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar15, -521539998, 0)) {
						if (iVar13 != -521200785) {
							dlc1::get_shop_ped_component(-521200785, &Var16);
							ped::set_ped_component_variation(iParam0, 10, Var16.f_3, Var16.f_4, 0);
						}
					}
				}
				ped::set_ped_component_variation(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	bVar33 = false;
	if (iVar0 == joaat("mp_m_freemode_01")) {
		if (!dlc1::_0x341DE7ED1D2A1BFD(iVar9, 572416369, 0)) {
			bVar33 = true;
		}
		switch (iVar10) {
		case -486726551:
		case 219052171:
		case -1032068249:
		case -728660078:
		case -850691818:
		case -544072285:
		case -1811183977:
		case -1111303675:
		case 116190296:
		case -1282673470:
		case -936108522:
		case -671236695:
		case 1520550639:
		case 1816684092:
		case 2102823000:
		case -1866059977:
		case 1250403007:
		case 476038764:
		case 1863871456:
		case 351755390:
		case 1058844872:
		case 1549134650:
		case 1317097361:
		case -829567064:
		case -130604290:
		case -380009149:
		case 596212130:
		case 2140942786:
		case 1901696317:
		case -1797925843:
		case 790890703:
		case 1633873228:
		case 1272234544:
		case -672409000:
		case -1976713507:
		case -1902280196:
		case -115943475:
		case 1684425644:
		case 1983115079: bVar33 = true; break;
		}
	}
	else {
		if (!dlc1::_0x341DE7ED1D2A1BFD(iVar9, -196114988, 0)) {
			bVar33 = true;
		}
		switch (iVar10) {
		case -1615510302:
		case 1527692182:
		case -2083484391:
		case -1372200477:
		case 761684042:
		case 534496565:
		case 303671729:
		case 39193130:
		case -162598372:
		case -393062749:
		case 2063387500:
		case 1633785910:
		case -874910415:
		case -1240415841:
		case 4970004:
		case -1695478944:
		case -450420789:
		case 257455149:
		case 1098963073:
		case -204554982:
		case 1027252245:
		case 1482249810:
		case 1657236270:
		case 633729300:
		case 461560974:
		case 39856713:
		case -130673163:
		case 1595499458:
		case 1424510816:
		case -1686217589:
		case 415037286:
		case 1095714954:
		case -1384675744:
		case -603364477:
		case 423419373:
		case -945505606:
		case -188672778:
		case 578089053:
		case 1418122368:
		case 39432231:
		case 998548092:
		case -539458143:
		case 1285512993:
		case 1384673675:
		case 207316274:
		case 924498608:
		case 1626705513:
		case -1951407139:
		case 1109577920:
		case 1943254053:
		case -706250677:
		case -933962458:
		case 2065187502:
		case 2143125494:
		case -728857530:
		case 113895612:
		case -106672527:
		case -1674341487:
		case -1426640612:
		case -1616110970:
		case -825558845:
		case -1062773636:
		case 1680712586:
		case 731446975:
		case -1441694810:
		case 1076144086:
		case 1291534723:
		case 1653763249:
		case -402884741:
		case 1982600156:
		case -1955185040:
		case -1722820061:
		case 519431533:
		case 1338441322:
		case -97470603:
		case -1293080337:
		case -1531999116:
		case 762322431:
		case 1318477899:
		case 199940853:
		case 1034403438:
		case 1715572641:
		case -2013146335:
		case 1085654154:
		case 962496867:
		case 1611716295:
		case 637461160:
		case -1137111266:
		case 316882033:
		case 590699797:
		case -385914710:
		case -1897876374:
		case -861786128:
		case -633615581:
		case -1298728310:
		case 2019526172:
		case -156630377:
		case 99852586:
		case 1543589216:
		case 1783097837:
		case -1876706754:
		case -1647782520:
		case -1394117691:
		case 977702533:
		case -670092377:
		case -908093624:
		case 1219695857:
		case 1919117393:
		case -534990310:
		case 445654672:
		case 329262298:
		case 22970455:
		case -476401343:
		case -706275878:
		case 1876083388:
		case -1114385357:
		case -840010097:
		case -2048003518:
		case 286623891:
		case 1792195596:
		case 1992938490:
		case -1364343871:
		case 721974080:
		case -45508669:
		case 1998385862:
		case 1222776401: bVar33 = true; break;
		}
	}
	if (bVar33) {
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1889900289, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1569775397, 0)) {
			if (iVar0 == joaat("mp_m_freemode_01")) {
				iVar5 = 15;
				iVar6 = 0;
			}
			else {
				iVar5 = 14;
				iVar6 = 0;
			}
		}
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iVar10, -1409448021, 0) && !func_213(iVar0, 14, func_221(iParam0, 14, 0), -1)) {
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1569775397, 0)) {
			iVar5++;
		}
		else {
			iVar5 = func_211(iParam0, 1);
			iVar6 = iVar2;
		}
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1889900289, 0)) {
		iVar5--;
	}
	else {
		iVar5 = func_211(iParam0, 0);
		iVar6 = iVar2;
	}
	ped::set_ped_component_variation(iParam0, 8, iVar5, iVar6, ped::get_ped_palette_variation(iParam0, 8));
}

// Position - 0x39FB8
var func_211(int iParam0, int iParam1) {
	struct<4> Var0;
	bool bVar17;

	bVar17 = entity::get_entity_model(iParam0) == joaat("mp_m_freemode_01");
	Var0.f_3 = -1;
	if (bVar17) {
		if (iParam1) {
			dlc1::get_shop_ped_component(-367850957, &Var0);
		}
		else {
			dlc1::get_shop_ped_component(1241116144, &Var0);
		}
	}
	else if (iParam1) {
		dlc1::get_shop_ped_component(555191698, &Var0);
	}
	else {
		dlc1::get_shop_ped_component(-972757995, &Var0);
	}
	return Var0.f_3;
}

// Position - 0x3A01B
bool func_212(int iParam0, int iParam1, var *uParam2) {
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;

	iVar0 = dlc1::_0xC17AD0E5752BECDA(iParam0);
	iVar1 = 0;
	while (iVar1 < iVar0) {
		dlc1::get_variant_component(iParam0, iVar1, uParam2, &uVar2, &iVar3);
		if (iVar3 == iParam1) {
			if (*uParam2 != 0 && *uParam2 != 1849449579) {
				return true;
			}
		}
		iVar1++;
	}
	return false;
}

// Position - 0x3A06E
bool func_213(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam3 == -1) {
				iParam3 = func_104(iParam0, iParam2, 14, 3);
			}
			if (iParam2 >= 131 && iParam2 <= 154 ||
				iParam2 >= 327 && dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1033433901, 1)) {
				return true;
			}
			break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam3 == -1) {
				iParam3 = func_104(iParam0, iParam2, 14, 4);
			}
			if (iParam2 >= 131 && iParam2 <= 154 ||
				iParam2 >= 327 && dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1033433901, 1)) {
				return true;
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x3A13C
int func_214(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	bool bVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	bool bVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	int iVar117;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	int iVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	int iVar129;
	int iVar130;
	int iVar131;
	int iVar132;
	int iVar133;
	int iVar134;
	int iVar135;
	int iVar136;
	int iVar137;
	int iVar138;
	int iVar139;
	int iVar140;
	int iVar141;
	int iVar142;
	int iVar143;
	int iVar144;
	int iVar145;
	int iVar146;
	int iVar147;
	int iVar148;
	bool bVar149;
	int iVar150;
	int iVar151;
	int iVar152;
	int iVar153;
	int iVar154;
	int iVar155;
	int iVar156;
	int iVar157;
	int iVar158;
	int iVar159;
	int iVar160;
	int iVar161;
	int iVar162;
	int iVar163;
	int iVar164;
	int iVar165;
	int iVar166;
	int iVar167;
	int iVar168;
	int iVar169;
	int iVar170;
	int iVar171;
	int iVar172;
	int iVar173;
	int iVar174;
	int iVar175;
	int iVar176;
	int iVar177;
	int iVar178;
	int iVar179;
	int iVar180;
	int iVar181;
	int iVar182;
	int iVar183;
	int iVar184;
	int iVar185;
	int iVar186;
	int iVar187;
	int iVar188;
	int iVar189;
	int iVar190;
	int iVar191;
	int iVar192;
	int iVar193;
	int iVar194;
	int iVar195;
	int iVar196;
	int iVar197;
	int iVar198;
	int iVar199;
	int iVar200;
	int iVar201;
	int iVar202;
	int iVar203;
	int iVar204;
	int iVar205;
	int iVar206;
	int iVar207;
	int iVar208;

	iVar0 = -99;
	if (iParam4 == 2) {
		func_215(iParam0, iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam1 == joaat("mp_m_freemode_01")) {
		if (iParam4 == 3) {
			if (iParam2 == 11) {
				if (iParam3 <= 15) {
					iVar0 = 0;
				}
				else if (iParam3 <= 31) {
					iVar0 = 0;
				}
				else if (iParam3 <= 47) {
					iVar0 = 2;
				}
				else if (iParam3 <= 63) {
					iVar0 = 1;
				}
				else if (iParam3 <= 79) {
					iVar0 = 1;
				}
				else if (iParam3 <= 95) {
					iVar0 = 5;
				}
				else if (iParam3 <= 107) {
					iVar0 = 12;
				}
				else if (iParam3 <= 123) {
					iVar0 = 1;
				}
				else if (iParam3 <= 139) {
					iVar0 = 8;
				}
				else if (iParam3 <= 155) {
					iVar0 = 0;
				}
				else if (iParam3 <= 171) {
					iVar0 = 1;
				}
				else if (iParam3 <= 187) {
					iVar2 = func_95(iParam0, 8);
					iVar3 = func_104(iParam1, iVar2, 8, 3);
					iVar4 = func_202(iVar3);
					if (iVar2 >= 96 && iVar2 <= 111 || iVar2 >= 112 && iVar2 <= 127 || iVar2 >= 241 && iVar4 == 6 ||
						iVar2 >= 241 && iVar4 == 7 || iVar2 >= 241 && dlc1::_0x341DE7ED1D2A1BFD(iVar3, 1965569012, 0)) {
						iVar0 = -99;
					}
					else {
						iVar0 = 11;
					}
				}
				else if (iParam3 <= 203) {
					iVar0 = 12;
				}
				else if (iParam3 <= 219) {
					iVar0 = 11;
				}
				else if (iParam3 <= 235) {
					iVar0 = 4;
				}
				else if (iParam3 == 236) {
					iVar0 = 15;
				}
				else if (iParam3 >= 237) {
					iVar5 = func_104(iParam1, iParam3, 11, 3);
					if (iVar5 != -1) {
						bVar6 = true;
						if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 19149565, 0)) {
							iVar2 = func_95(iParam0, 8);
							iVar7 = func_104(iParam1, iVar2, 8, 3);
							iVar8 = func_202(iVar7);
							if (iVar2 >= 96 && iVar2 <= 111 || iVar2 >= 112 && iVar2 <= 127 ||
								iVar2 >= 241 && iVar8 == 6 || iVar2 >= 241 && iVar8 == 7 ||
								iVar2 >= 241 && dlc1::_0x341DE7ED1D2A1BFD(iVar7, 1965569012, 0)) {
								bVar6 = false;
							}
						}
						if (bVar6) {
							iVar9 = dlc1::_get_num_forced_components(iVar5);
							iVar10 = 0;
							while (iVar10 < iVar9) {
								dlc1::get_forced_component(iVar5, iVar10, &iVar11, &iVar12, &iVar13);
								if (iVar13 == 3) {
									if (iVar11 != 0 && iVar11 != 1849449579) {
										iVar0 = func_84(iParam1, iVar11, 3, 3);
									}
									else {
										iVar0 = iVar12;
									}
									iVar10 = iVar9 + 1;
								}
								iVar10++;
							}
						}
					}
				}
			}
			else if (iParam2 == 8) {
				if (iParam3 <= 15) {
					iVar0 = 1;
				}
				else if (iParam3 <= 31) {
					iVar0 = 1;
				}
				else if (iParam3 <= 47) {
					iVar0 = -99;
				}
				else if (iParam3 <= 63) {
					iVar0 = 12;
				}
				else if (iParam3 <= 79) {
					iVar0 = 12;
				}
				else if (iParam3 <= 95) {
					iVar0 = 6;
				}
				else if (iParam3 <= 111) {
					iVar0 = 11;
				}
				else if (iParam3 <= 127) {
					iVar0 = 11;
				}
				else if (iParam3 <= 143) {
					iVar0 = 1;
				}
				else if (iParam3 <= 159) {
					iVar0 = 1;
				}
				else if (iParam3 <= 175) {
					iVar0 = 4;
				}
				else if (iParam3 <= 191) {
					iVar0 = 12;
				}
				else if (iParam3 <= 207) {
					iVar0 = 1;
				}
				else if (iParam3 <= 223) {
					iVar0 = 1;
				}
				else if (iParam3 <= 239) {
					iVar0 = -99;
				}
				else if (iParam3 == 240) {
					iVar0 = 14;
				}
				else if (iParam3 >= 241) {
					iVar14 = func_104(iParam1, iParam3, 8, 3);
					if (iVar14 != -1) {
						iVar15 = dlc1::_get_num_forced_components(iVar14);
						iVar16 = 0;
						while (iVar16 < iVar15) {
							dlc1::get_forced_component(iVar14, iVar16, &iVar17, &iVar18, &iVar19);
							if (iVar19 == 3) {
								if (iVar17 != 0 && iVar17 != 1849449579) {
									iVar0 = func_84(iParam1, iVar17, 3, 3);
								}
								else {
									iVar0 = iVar18;
									iVar16 = iVar15 + 1;
								}
							}
							iVar16++;
						}
					}
				}
			}
			else if (iParam2 == 10) {
				if (iParam3 >= 7) {
					iVar20 = func_104(iParam1, iParam3, 10, 3);
					if (iVar20 != -1) {
						iVar21 = dlc1::_get_num_forced_components(iVar20);
						iVar22 = 0;
						while (iVar22 < iVar21) {
							dlc1::get_forced_component(iVar20, iVar22, &iVar23, &iVar24, &iVar25);
							if (iVar25 == 3) {
								if (iVar23 != 0 && iVar23 != 1849449579) {
									iVar0 = func_84(iParam1, iVar23, 3, 3);
								}
								else {
									iVar0 = iVar24;
									iVar22 = iVar21 + 1;
								}
							}
							iVar22++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8) {
			if (iParam2 == 11) {
				iVar26 = -1;
				if (iParam3 >= 237) {
					iVar26 = func_202(func_104(iParam1, iParam3, 11, 3));
				}
				if (iParam3 <= 15) {
					iVar0 = 240;
				}
				else if (iParam3 <= 31) {
					iVar0 = 240;
				}
				else if (iParam3 <= 47) {
					iVar0 = 240;
				}
				else if (iParam3 <= 63) {
					iVar0 = -99;
				}
				else if (iParam3 <= 79) {
					iVar0 = -99;
				}
				else if (iParam3 <= 95) {
					iVar0 = 240;
				}
				else if (iParam3 <= 107) {
					iVar0 = -99;
				}
				else if (iParam3 <= 123) {
					iVar0 = -99;
				}
				else if (iParam3 <= 139) {
					iVar0 = 240;
				}
				else if (iParam3 <= 155) {
					iVar0 = 240;
				}
				else if (iParam3 <= 171) {
					iVar0 = -99;
				}
				else if (iParam3 <= 187 || iVar26 == 11) {
					iVar2 = func_95(iParam0, 8);
					iVar27 = func_104(iParam1, iVar2, 8, 3);
					iVar28 = func_202(iVar27);
					if (iVar2 >= 96 && iVar2 <= 111 || iVar2 >= 112 && iVar2 <= 127 || iVar2 >= 241 && iVar28 == 6 ||
						iVar2 >= 241 && iVar28 == 7 ||
						iVar2 >= 241 && dlc1::_0x341DE7ED1D2A1BFD(iVar27, 1965569012, 0)) {
					}
					else {
						iVar0 = 112;
					}
				}
				else if (iParam3 <= 203) {
					iVar0 = 240;
				}
				else if (iParam3 <= 219) {
					iVar0 = 240;
				}
				else if (iParam3 <= 235) {
					iVar0 = 240;
				}
				else if (iParam3 <= 236) {
					iVar0 = 240;
				}
				else if (iParam3 >= 237) {
					iVar29 = func_104(iParam1, iParam3, 11, 3);
					if (iVar29 != -1) {
						iVar30 = dlc1::_get_num_forced_components(iVar29);
						iVar31 = 0;
						while (iVar31 < iVar30) {
							dlc1::get_forced_component(iVar29, iVar31, &iVar32, &iVar33, &iVar34);
							if (iVar34 == 8) {
								if (iVar32 != 0 && iVar32 != 1849449579) {
									iVar0 = func_84(iParam1, iVar32, 8, 3);
								}
								else {
									iVar0 = iVar33;
									iVar31 = iVar30 + 1;
								}
							}
							iVar31++;
						}
					}
				}
			}
			else if (iParam2 == 7) {
				iVar35 = -1;
				iVar36 = -1;
				if (iParam3 >= 92) {
					iVar36 = func_104(iParam1, iParam3, 7, 3);
					iVar35 = func_202(iVar36);
				}
				if (iParam3 >= 41 && iParam3 <= 56 || iParam3 >= 57 && iParam3 <= 72 ||
					iParam3 >= 73 && iParam3 <= 88 || iVar35 == 10 || iVar35 == 11 || iVar35 == 12 ||
					iParam3 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar36, -1950939707, 0) ||
					iParam3 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar36, -1371423804, 0) ||
					iParam3 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar36, -920534092, 0)) {
					iVar2 = func_95(iParam0, 8);
					if (iVar2 >= 48 && iVar2 <= 63) {
						iVar1 = iVar2 - 48;
						iVar0 = 64 + iVar1;
					}
					else if (iVar2 >= 112 && iVar2 <= 127) {
						iVar1 = iVar2 - 112;
						iVar0 = 96 + iVar1;
					}
					else if (iVar2 >= 176 && iVar2 <= 191) {
						iVar1 = iVar2 - 176;
						iVar0 = 160 + iVar1;
					}
					else if (iVar2 >= 241) {
						iVar37 = func_104(iParam1, iVar2, 8, 3);
						iVar38 = func_202(iVar37);
						bVar39 = dlc1::_0x341DE7ED1D2A1BFD(iVar37, 651155766, 0);
						if (iVar38 == 3 || iVar38 == 7 || iVar38 == 11 ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar37, 1553766533, 0)) {
							if (iVar37 != -1) {
								iVar40 = dlc1::_0xC17AD0E5752BECDA(iVar37);
								iVar41 = 0;
								while (iVar41 < iVar40) {
									dlc1::get_variant_component(iVar37, iVar41, &iVar42, &iVar43, &iVar44);
									if (iVar44 == 8 && !bVar39 || iVar44 == 10 && bVar39) {
										if (iVar42 != 0 && iVar42 != 1849449579) {
											iVar0 = func_84(iParam1, iVar42, 8, 3);
										}
										else {
											iVar0 = iVar43;
										}
										iVar41 = iVar40 + 1;
									}
									iVar41++;
								}
							}
						}
					}
				}
				else if (iParam3 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar36, -378906828, 0) ||
						 iParam3 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar36, -695703461, 0) ||
						 iParam3 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar36, -108328099, 0)) {
					iVar45 = func_104(iParam1, iVar2, 8, 3);
					iVar46 = func_202(iVar45);
					bVar47 = dlc1::_0x341DE7ED1D2A1BFD(iVar45, 651155766, 0);
					if (iVar46 == 3 || iVar46 == 7 || iVar46 == 11 ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar45, 1553766533, 0)) {
						if (iVar45 != -1) {
							iVar48 = dlc1::_0xC17AD0E5752BECDA(iVar45);
							iVar49 = 0;
							while (iVar49 < iVar48) {
								dlc1::get_variant_component(iVar45, iVar49, &iVar50, &iVar51, &iVar52);
								if (iVar52 == 8 && !bVar47 || iVar52 == 10 && bVar47) {
									if (iVar50 != 0 && iVar50 != 1849449579) {
										iVar0 = func_84(iParam1, iVar50, 8, 3);
									}
									else {
										iVar0 = iVar51;
									}
									iVar49 = iVar48 + 1;
								}
								iVar49++;
							}
						}
					}
				}
				else if (iParam3 >= 92) {
					iVar53 = func_104(iParam1, iParam3, 7, 3);
					if (iVar53 != -1) {
						iVar54 = dlc1::_get_num_forced_components(iVar53);
						iVar55 = 0;
						while (iVar55 < iVar54) {
							dlc1::get_forced_component(iVar53, iVar55, &iVar56, &iVar57, &iVar58);
							if (iVar58 == 8) {
								if (iVar56 != 0 && iVar56 != 1849449579) {
									iVar0 = func_84(iParam1, iVar56, 8, 3);
								}
								else {
									iVar0 = iVar57;
									iVar55 = iVar54 + 1;
								}
							}
							iVar55++;
						}
					}
				}
			}
			else if (iParam2 == 10) {
				if (iParam3 >= 7) {
					iVar59 = func_104(iParam1, iParam3, 10, 3);
					if (iVar59 != -1) {
						iVar60 = dlc1::_get_num_forced_components(iVar59);
						iVar61 = 0;
						while (iVar61 < iVar60) {
							dlc1::get_forced_component(iVar59, iVar61, &iVar62, &iVar63, &iVar64);
							if (iVar64 == 8) {
								if (iVar62 != 0 && iVar62 != 1849449579) {
									iVar0 = func_84(iParam1, iVar62, 8, 3);
								}
								else {
									iVar0 = iVar63;
									iVar61 = iVar60 + 1;
								}
							}
							iVar61++;
						}
					}
				}
			}
		}
		else if (iParam4 == 11) {
			if (iParam2 == 7) {
				iVar65 = -1;
				iVar66 = -1;
				if (iParam3 >= 92) {
					iVar66 = func_104(iParam1, iParam3, 7, 3);
					iVar65 = func_202(iVar66);
				}
				if (iParam3 >= 41 && iParam3 <= 56 || iParam3 >= 57 && iParam3 <= 72 ||
					iParam3 >= 73 && iParam3 <= 88 || iVar65 == 10 || iVar65 == 11 || iVar65 == 12 ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar66, -920534092, 0)) {
					iVar67 = func_95(iParam0, 11);
					if (iVar67 >= 237) {
						iVar68 = func_104(iParam1, iVar67, 11, 3);
						if (dlc1::_0x341DE7ED1D2A1BFD(iVar68, 1847239679, 0) &&
							dlc1::_0x341DE7ED1D2A1BFD(iVar68, 1553766533, 0)) {
							if (iVar68 != -1) {
								iVar69 = dlc1::_0xC17AD0E5752BECDA(iVar68);
								iVar70 = 0;
								while (iVar70 < iVar69) {
									dlc1::get_variant_component(iVar68, iVar70, &iVar71, &iVar72, &iVar73);
									if (iVar73 == 11) {
										if (iVar71 != 0 && iVar71 != 1849449579) {
											iVar0 = func_84(iParam1, iVar71, 11, 3);
										}
										else {
											iVar0 = iVar72;
										}
										iVar70 = iVar69 + 1;
									}
									iVar70++;
								}
							}
						}
					}
				}
			}
			else if (iParam2 == 10) {
				if (iParam3 >= 7) {
					iVar74 = func_104(iParam1, iParam3, 10, 3);
					if (iVar74 != -1) {
						iVar75 = dlc1::_get_num_forced_components(iVar74);
						iVar76 = 0;
						while (iVar76 < iVar75) {
							dlc1::get_forced_component(iVar74, iVar76, &iVar77, &iVar78, &iVar79);
							if (iVar79 == 11) {
								if (iVar77 != 0 && iVar77 != 1849449579) {
									iVar0 = func_84(iParam1, iVar77, 11, 3);
								}
								else {
									iVar0 = iVar78;
									iVar76 = iVar75 + 1;
								}
							}
							iVar76++;
						}
					}
				}
			}
		}
		else if (iParam4 == 7) {
			if (iParam2 == 11) {
				iVar80 = func_95(iParam0, 11);
				if (iVar80 >= 237) {
					iVar81 = func_104(iParam1, iVar80, 11, 3);
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar81, 1847239679, 0) &&
						dlc1::_0x341DE7ED1D2A1BFD(iVar81, 1553766533, 0)) {
						iVar81 = func_104(iParam1, iParam3, 11, 3);
						if (iVar81 != -1) {
							iVar82 = dlc1::_get_num_forced_components(iVar81);
							iVar83 = 0;
							while (iVar83 < iVar82) {
								dlc1::get_forced_component(iVar81, iVar83, &iVar84, &iVar85, &iVar86);
								if (iVar86 == 7) {
									if (iVar84 != 0 && iVar84 != 1849449579) {
										iVar0 = func_84(iParam1, iVar84, 7, 3);
									}
									else {
										iVar0 = iVar85;
										iVar83 = iVar82 + 1;
									}
								}
								iVar83++;
							}
						}
					}
				}
			}
			else if (iParam2 == 14) {
				if (iParam3 >= 327) {
					iVar87 = func_104(iParam1, iParam3, 14, 3);
					if (iVar87 != -1) {
						iVar88 = dlc1::_get_num_forced_components(iVar87);
						iVar89 = 0;
						while (iVar89 < iVar88) {
							dlc1::get_forced_component(iVar87, iVar89, &iVar90, &iVar91, &iVar92);
							if (iVar92 == 7) {
								if (iVar90 != 0 && iVar90 != 1849449579) {
									iVar0 = func_84(iParam1, iVar90, 7, 3);
								}
								else {
									iVar0 = iVar91;
									iVar89 = iVar88 + 1;
								}
							}
							iVar89++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4) {
			if (iParam2 == 11) {
				if (iParam3 >= 237) {
					iVar93 = func_104(iParam1, iParam3, 11, 3);
					if (iVar93 != -1) {
						iVar94 = dlc1::_get_num_forced_components(iVar93);
						iVar95 = 0;
						while (iVar95 < iVar94) {
							dlc1::get_forced_component(iVar93, iVar95, &iVar96, &iVar97, &iVar98);
							if (iVar98 == 4) {
								if (iVar96 != 0 && iVar96 != 1849449579) {
									iVar0 = func_84(iParam1, iVar96, 4, 3);
								}
								else {
									iVar0 = iVar97;
									iVar95 = iVar94 + 1;
								}
							}
							iVar95++;
						}
					}
				}
			}
		}
		else if (iParam4 == 10) {
			if (iParam2 == 11) {
				if (iParam3 >= 237) {
					iVar99 = func_104(iParam1, iParam3, 11, 3);
					if (iVar99 != -1) {
						iVar100 = dlc1::_get_num_forced_components(iVar99);
						iVar101 = 0;
						while (iVar101 < iVar100) {
							dlc1::get_forced_component(iVar99, iVar101, &iVar102, &iVar103, &iVar104);
							if (iVar104 == 10) {
								if (iVar102 != 0 && iVar102 != 1849449579) {
									iVar0 = func_84(iParam1, iVar102, 10, 3);
								}
								else {
									iVar0 = iVar103;
									iVar101 = iVar100 + 1;
								}
							}
							iVar101++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6) {
			if (iParam2 == 4) {
				if (iParam3 >= 256) {
					iVar105 = func_104(iParam1, iParam3, 4, 3);
					if (iVar105 != -1) {
						iVar106 = dlc1::_get_num_forced_components(iVar105);
						iVar107 = 0;
						while (iVar107 < iVar106) {
							dlc1::get_forced_component(iVar105, iVar107, &iVar108, &iVar109, &iVar110);
							if (iVar110 == 6) {
								if (iVar108 != 0 && iVar108 != 1849449579) {
									iVar0 = func_84(iParam1, iVar108, 6, 3);
								}
								else {
									iVar0 = iVar109;
									iVar107 = iVar106 + 1;
								}
							}
							iVar107++;
						}
					}
				}
			}
			else if (iParam2 == 11) {
				if (iParam3 >= 237) {
					iVar111 = func_104(iParam1, iParam3, 11, 3);
					if (iVar111 != -1) {
						iVar112 = dlc1::_get_num_forced_components(iVar111);
						iVar113 = 0;
						while (iVar113 < iVar112) {
							dlc1::get_forced_component(iVar111, iVar113, &iVar114, &iVar115, &iVar116);
							if (iVar116 == 6) {
								if (iVar114 != 0 && iVar114 != 1849449579) {
									iVar0 = func_84(iParam1, iVar114, 6, 3);
								}
								else {
									iVar0 = iVar115;
									iVar113 = iVar112 + 1;
								}
							}
							iVar113++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14) {
			if (iParam2 == 1) {
				if (iParam3 >= 26) {
					iVar117 = func_104(iParam1, iParam3, 1, 3);
					if (iVar117 != -1) {
						iVar118 = dlc1::_0x017568A8182D98A6(iVar117);
						iVar119 = 0;
						while (iVar119 < iVar118) {
							dlc1::_0xE1CA84EBF72E691D(iVar117, iVar119, &iVar120, &iVar121, &iVar122);
							if (iVar122 == iParam5) {
								if (iVar120 != 0 && iVar120 != 1849449579) {
									iVar0 = func_84(iParam1, iVar120, 14, 3);
									iVar119 = iVar118 + 1;
								}
								else {
									iVar0 = iVar121;
									iVar119 = iVar118 + 1;
								}
							}
							iVar119++;
						}
					}
				}
			}
			else if (iParam2 == 11) {
				if (iParam3 >= 237) {
					iVar123 = func_104(iParam1, iParam3, 11, 3);
					if (iVar123 != -1) {
						iVar124 = dlc1::_0x017568A8182D98A6(iVar123);
						iVar125 = 0;
						while (iVar125 < iVar124) {
							dlc1::_0xE1CA84EBF72E691D(iVar123, iVar125, &iVar126, &iVar127, &iVar128);
							if (iVar128 == iParam5) {
								if (iVar126 != 0 && iVar126 != 1849449579) {
									iVar0 = func_84(iParam1, iVar126, 14, 3);
									iVar125 = iVar124 + 1;
								}
								else {
									iVar0 = iVar127;
									iVar125 = iVar124 + 1;
								}
							}
							iVar125++;
						}
					}
				}
			}
		}
	}
	else if (iParam1 == joaat("mp_f_freemode_01")) {
		if (iParam4 == 3) {
			if (iParam2 == 11) {
				if (iParam3 <= 15) {
					iVar0 = 0;
				}
				else if (iParam3 <= 31) {
					iVar0 = 5;
				}
				else if (iParam3 <= 47) {
					iVar0 = 2;
				}
				else if (iParam3 <= 63) {
					iVar0 = 3;
				}
				else if (iParam3 <= 79) {
					iVar0 = 4;
				}
				else if (iParam3 <= 95) {
					iVar0 = 4;
				}
				else if (iParam3 <= 111) {
					iVar0 = 5;
				}
				else if (iParam3 <= 127) {
					iVar0 = 6;
				}
				else if (iParam3 <= 143) {
					iVar0 = 5;
				}
				else if (iParam3 <= 159) {
					iVar0 = 9;
				}
				else if (iParam3 <= 175) {
					iVar0 = 7;
				}
				else if (iParam3 <= 191) {
					iVar0 = 11;
				}
				else if (iParam3 <= 207) {
					iVar0 = 12;
				}
				else if (iParam3 <= 223) {
					iVar0 = 4;
				}
				else if (iParam3 <= 239) {
					iVar0 = 14;
				}
				else if (iParam3 <= 255) {
					iVar0 = 15;
				}
				else if (iParam3 >= 256) {
					iVar129 = func_104(iParam1, iParam3, 11, 4);
					if (iVar129 != -1) {
						iVar130 = dlc1::_get_num_forced_components(iVar129);
						iVar131 = 0;
						while (iVar131 < iVar130) {
							dlc1::get_forced_component(iVar129, iVar131, &iVar132, &iVar133, &iVar134);
							if (iVar134 == 3) {
								if (iVar132 != 0 && iVar132 != 1849449579) {
									iVar0 = func_84(iParam1, iVar132, 3, 4);
								}
								else {
									iVar0 = iVar133;
									iVar131 = iVar130 + 1;
								}
							}
							iVar131++;
						}
					}
				}
			}
			else if (iParam2 == 10) {
				if (iParam3 >= 6) {
					iVar135 = func_104(iParam1, iParam3, 10, 4);
					if (iVar135 != -1) {
						iVar136 = dlc1::_get_num_forced_components(iVar135);
						iVar137 = 0;
						while (iVar137 < iVar136) {
							dlc1::get_forced_component(iVar135, iVar137, &iVar138, &iVar139, &iVar140);
							if (iVar140 == 3) {
								if (iVar138 != 0 && iVar138 != 1849449579) {
									iVar0 = func_84(iParam1, iVar138, 3, 4);
								}
								else {
									iVar0 = iVar139;
									iVar137 = iVar136 + 1;
								}
							}
							iVar137++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8) {
			if (iParam2 == 11) {
				if (iParam3 <= 15) {
					iVar0 = 33;
				}
				else if (iParam3 <= 31) {
					iVar0 = -99;
				}
				else if (iParam3 <= 47) {
					iVar0 = 33;
				}
				else if (iParam3 <= 63) {
					iVar0 = 33;
				}
				else if (iParam3 <= 79) {
					iVar0 = 33;
				}
				else if (iParam3 <= 95) {
					iVar0 = 33;
				}
				else if (iParam3 <= 111) {
					iVar0 = -99;
				}
				else if (iParam3 <= 127) {
					iVar0 = -99;
				}
				else if (iParam3 <= 143) {
					iVar0 = -99;
				}
				else if (iParam3 <= 159) {
					iVar0 = 33;
				}
				else if (iParam3 <= 175) {
					iVar0 = -99;
				}
				else if (iParam3 <= 191) {
					iVar0 = 33;
				}
				else if (iParam3 <= 207) {
					iVar0 = 33;
				}
				else if (iParam3 <= 223) {
					iVar1 = iParam3 - 208;
					iVar0 = 103 + iVar1;
				}
				else if (iParam3 <= 239) {
					iVar0 = 33;
				}
				else if (iParam3 <= 255) {
					iVar0 = 33;
				}
				else if (iParam3 >= 256) {
					iVar141 = func_104(iParam1, iParam3, 11, 4);
					if (iVar141 != -1) {
						iVar142 = dlc1::_get_num_forced_components(iVar141);
						iVar143 = 0;
						while (iVar143 < iVar142) {
							dlc1::get_forced_component(iVar141, iVar143, &iVar144, &iVar145, &iVar146);
							if (iVar146 == 8) {
								if (iVar144 != 0 && iVar144 != 1849449579) {
									iVar0 = func_84(iParam1, iVar144, 8, 4);
								}
								else {
									iVar0 = iVar145;
									iVar143 = iVar142 + 1;
								}
							}
							iVar143++;
						}
					}
				}
			}
			else if (iParam2 == 7) {
				iVar147 = -1;
				if (iParam3 >= 55) {
					iVar147 = func_104(iParam1, iParam3, 7, 4);
				}
				if (iVar147 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar147, -920534092, 0) ||
					iVar147 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar147, 1537081084, 0)) {
					iVar148 = dlc1::get_hash_name_for_component(iParam0, 8, ped::get_ped_drawable_variation(iParam0, 8),
																ped::get_ped_texture_variation(iParam0, 8));
					bVar149 = false;
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar147, -378906828, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar147, -108328099, 0)) {
						if (dlc1::_0x341DE7ED1D2A1BFD(iVar148, -1914383230, 0)) {
							bVar149 = true;
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar148, 1553766533, 0)) {
						bVar149 = true;
					}
					if (bVar149) {
						iVar150 = dlc1::_0xC17AD0E5752BECDA(iVar148);
						iVar151 = 0;
						while (iVar151 < iVar150) {
							dlc1::get_variant_component(iVar148, iVar151, &iVar152, &iVar153, &iVar154);
							if (iVar154 == 8) {
								if (iVar152 != 0 && iVar152 != 1849449579) {
									iVar0 = func_84(iParam1, iVar152, 8, 4);
								}
								else {
									iVar0 = iVar153;
								}
								iVar151 = iVar150 + 1;
							}
							iVar151++;
						}
					}
				}
			}
			else if (iParam2 == 10) {
				if (iParam3 >= 6) {
					iVar155 = func_104(iParam1, iParam3, 10, 4);
					if (iVar155 != -1) {
						iVar156 = dlc1::_get_num_forced_components(iVar155);
						iVar157 = 0;
						while (iVar157 < iVar156) {
							dlc1::get_forced_component(iVar155, iVar157, &iVar158, &iVar159, &iVar160);
							if (iVar160 == 8) {
								if (iVar158 != 0 && iVar158 != 1849449579) {
									iVar0 = func_84(iParam1, iVar158, 8, 4);
								}
								else {
									iVar0 = iVar159;
									iVar157 = iVar156 + 1;
								}
							}
							iVar157++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6) {
			if (iParam2 == 4) {
				if (iParam3 >= 256) {
					iVar161 = func_104(iParam1, iParam3, 4, 4);
					if (iVar161 != -1) {
						iVar162 = dlc1::_get_num_forced_components(iVar161);
						iVar163 = 0;
						while (iVar163 < iVar162) {
							dlc1::get_forced_component(iVar161, iVar163, &iVar164, &iVar165, &iVar166);
							if (iVar166 == 6) {
								if (iVar164 != 0 && iVar164 != 1849449579) {
									iVar0 = func_84(iParam1, iVar164, 6, 4);
								}
								else {
									iVar0 = iVar165;
									iVar163 = iVar162 + 1;
								}
							}
							iVar163++;
						}
					}
				}
			}
			else if (iParam2 == 11) {
				if (iParam3 >= 256) {
					iVar167 = func_104(iParam1, iParam3, 11, 4);
					if (iVar167 != -1) {
						iVar168 = dlc1::_get_num_forced_components(iVar167);
						iVar169 = 0;
						while (iVar169 < iVar168) {
							dlc1::get_forced_component(iVar167, iVar169, &iVar170, &iVar171, &iVar172);
							if (iVar172 == 6) {
								if (iVar170 != 0 && iVar170 != 1849449579) {
									iVar0 = func_84(iParam1, iVar170, 6, 4);
								}
								else {
									iVar0 = iVar171;
									iVar169 = iVar168 + 1;
								}
							}
							iVar169++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4) {
			if (iParam2 == 11) {
				if (iParam3 >= 256) {
					iVar173 = func_104(iParam1, iParam3, 11, 4);
					if (iVar173 != -1) {
						iVar174 = dlc1::_get_num_forced_components(iVar173);
						iVar175 = 0;
						while (iVar175 < iVar174) {
							dlc1::get_forced_component(iVar173, iVar175, &iVar176, &iVar177, &iVar178);
							if (iVar178 == 4) {
								if (iVar176 != 0 && iVar176 != 1849449579) {
									iVar0 = func_84(iParam1, iVar176, 4, 4);
								}
								else {
									iVar0 = iVar177;
									iVar175 = iVar174 + 1;
								}
							}
							iVar175++;
						}
					}
				}
			}
		}
		else if (iParam4 == 10) {
			if (iParam2 == 11) {
				if (iParam3 >= 256) {
					iVar179 = func_104(iParam1, iParam3, 11, 4);
					if (iVar179 != -1) {
						iVar180 = dlc1::_get_num_forced_components(iVar179);
						iVar181 = 0;
						while (iVar181 < iVar180) {
							dlc1::get_forced_component(iVar179, iVar181, &iVar182, &iVar183, &iVar184);
							if (iVar184 == 10) {
								if (iVar182 != 0 && iVar182 != 1849449579) {
									iVar0 = func_84(iParam1, iVar182, 10, 4);
								}
								else {
									iVar0 = iVar183;
									iVar181 = iVar180 + 1;
								}
							}
							iVar181++;
						}
					}
				}
			}
		}
		else if (iParam4 == 11) {
			if (iParam2 == 10) {
				if (iParam3 >= 6) {
					iVar185 = func_104(iParam1, iParam3, 10, 4);
					if (iVar185 != -1) {
						iVar186 = dlc1::_get_num_forced_components(iVar185);
						iVar187 = 0;
						while (iVar187 < iVar186) {
							dlc1::get_forced_component(iVar185, iVar187, &iVar188, &iVar189, &iVar190);
							if (iVar190 == 11) {
								if (iVar188 != 0 && iVar188 != 1849449579) {
									iVar0 = func_84(iParam1, iVar188, 11, 4);
								}
								else {
									iVar0 = iVar189;
									iVar187 = iVar186 + 1;
								}
							}
							iVar187++;
						}
					}
				}
			}
		}
		else if (iParam4 == 7) {
			if (iParam2 == 14) {
				if (iParam3 >= 327) {
					iVar191 = func_104(iParam1, iParam3, 14, 4);
					if (iVar191 != -1) {
						iVar192 = dlc1::_get_num_forced_components(iVar191);
						iVar193 = 0;
						while (iVar193 < iVar192) {
							dlc1::get_forced_component(iVar191, iVar193, &iVar194, &iVar195, &iVar196);
							if (iVar196 == 7) {
								if (iVar194 != 0 && iVar194 != 1849449579) {
									iVar0 = func_84(iParam1, iVar194, 7, 4);
								}
								else {
									iVar0 = iVar195;
									iVar193 = iVar192 + 1;
								}
							}
							iVar193++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14) {
			if (iParam2 == 1) {
				if (iParam3 >= 26) {
					iVar197 = func_104(iParam1, iParam3, 1, 4);
					if (iVar197 != -1) {
						iVar198 = dlc1::_0x017568A8182D98A6(iVar197);
						iVar199 = 0;
						while (iVar199 < iVar198) {
							dlc1::_0xE1CA84EBF72E691D(iVar197, iVar199, &iVar200, &iVar201, &iVar202);
							if (iVar202 == iParam5) {
								if (iVar200 != 0 && iVar200 != 1849449579) {
									iVar0 = func_84(iParam1, iVar200, 14, 4);
									iVar199 = iVar198 + 1;
								}
								else {
									iVar0 = iVar201;
									iVar199 = iVar198 + 1;
								}
							}
							iVar199++;
						}
					}
				}
			}
			else if (iParam2 == 11) {
				if (iParam3 >= 256) {
					iVar203 = func_104(iParam1, iParam3, 11, 4);
					if (iVar203 != -1) {
						iVar204 = dlc1::_0x017568A8182D98A6(iVar203);
						iVar205 = 0;
						while (iVar205 < iVar204) {
							dlc1::_0xE1CA84EBF72E691D(iVar203, iVar205, &iVar206, &iVar207, &iVar208);
							if (iVar208 == iParam5) {
								if (iVar206 != 0 && iVar206 != 1849449579) {
									iVar0 = func_84(iParam1, iVar206, 14, 4);
									iVar205 = iVar204 + 1;
								}
								else {
									iVar0 = iVar207;
									iVar205 = iVar204 + 1;
								}
							}
							iVar205++;
						}
					}
				}
			}
		}
	}
	return iVar0;
}

// Position - 0x3BB9A
int func_215(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	int iVar13;

	*iParam4 = -99;
	switch (iParam1) {
	case joaat("mp_m_freemode_01"):
		switch (iParam2) {
		case 1:
			if (iParam3 >= 1 && iParam3 <= 4 || iParam3 >= 5 && iParam3 <= 8 || iParam3 == 9 ||
				iParam3 >= 14 && iParam3 <= 17 || iParam3 >= 22 && iParam3 <= 25) {
				*iParam4 = 0;
			}
			if (iParam3 >= func_85(iParam1, 1)) {
				func_227(iParam1, 1, iParam3);
				if (Global_2621445 == -1751726434) {
					*iParam4 = 0;
				}
			}
			iVar0 = func_95(iParam0, 1);
			if (iVar0 >= 26) {
				iVar1 = func_104(iParam1, iVar0, 1, 3);
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar1, -1188154325, 0)) {
					iVar1 = func_104(iParam1, iParam3, 1, 3);
					if (iVar1 != -1) {
						iVar2 = dlc1::_get_num_forced_components(iVar1);
						iVar3 = 0;
						while (iVar3 < iVar2) {
							dlc1::get_forced_component(iVar1, iVar3, &iVar4, &uVar5, &iVar6);
							if (iVar6 == 2) {
								if (iVar4 != 0 && iVar4 != 1849449579) {
									*iParam4 = func_84(iParam1, iVar4, 2, 3);
								}
								else {
									*iParam4 = uVar5;
									iVar3 = iVar2 + 1;
								}
							}
							iVar3++;
						}
					}
				}
			}
			break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam2) {
		case 1:
			if (iParam3 >= 1 && iParam3 <= 4 || iParam3 >= 5 && iParam3 <= 8 || iParam3 == 9 ||
				iParam3 >= 14 && iParam3 <= 17 || iParam3 >= 22 && iParam3 <= 25) {
				*iParam4 = 0;
			}
			if (iParam3 >= func_85(iParam1, 1)) {
				func_227(iParam1, 1, iParam3);
				if (Global_2621445 == -1751726434) {
					*iParam4 = 0;
				}
			}
			iVar7 = func_95(iParam0, 1);
			if (iVar7 >= 26) {
				iVar8 = func_104(iParam1, iVar7, 1, 4);
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar8, -1188154325, 0)) {
					iVar8 = func_104(iParam1, iParam3, 1, 4);
					if (iVar8 != -1) {
						iVar9 = dlc1::_get_num_forced_components(iVar8);
						iVar10 = 0;
						while (iVar10 < iVar9) {
							dlc1::get_forced_component(iVar8, iVar10, &iVar11, &uVar12, &iVar13);
							if (iVar13 == 2) {
								if (iVar11 != 0 && iVar11 != 1849449579) {
									*iParam4 = func_84(iParam1, iVar11, 2, 4);
								}
								else {
									*iParam4 = uVar12;
									iVar10 = iVar9 + 1;
								}
							}
							iVar10++;
						}
					}
				}
			}
			break;
		}
		break;
	}
	if (*iParam4 != -99) {
		func_260(748, iParam3, Global_69521, 1, 0);
		func_260(749, iParam2, Global_69521, 1, 0);
		return 1;
	}
	return 0;
}

// Position - 0x3BE63
void func_216(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ped::is_ped_injured(iParam0)) {
		if (func_261(iParam0)) {
			return;
		}
		if (iParam1 == 11 || iParam1 == 8) {
			iVar0 = entity::get_entity_model(iParam0);
			if (iParam1 == 11) {
				if (func_205(iVar0, iParam2)) {
					iParam1 = 8;
					iParam2 = func_95(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8) {
				iVar1 = func_95(iParam0, 11);
				if (!func_205(iVar0, iVar1)) {
					return;
				}
			}
			func_197(gameplay::get_hash_key("torsoDecal"), iParam0);
			if (iParam1 == 11) {
				if (!func_199(iVar0, iParam2, 13) && !func_199(iVar0, iParam2, 14) && !func_199(iVar0, iParam2, 15) &&
					!func_199(iVar0, iParam2, 16) && !func_199(iVar0, iParam2, 71) && !func_199(iVar0, iParam2, 72)) {
					func_197(gameplay::get_hash_key("crewLogo"), iParam0);
				}
			}
			iVar2 = func_188(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1) {
				if (iParam3 == 1) {
					func_217(iParam0, iVar2, 0);
				}
				else {
					func_218(iVar2, 1, Global_69521);
				}
			}
		}
	}
}

// Position - 0x3BF91
void func_217(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	struct<6> Var1;

	if (!ped::is_ped_injured(iParam0)) {
		if (iParam1 != -1) {
			iVar0 = func_195(iParam0);
			if (!func_172(iParam1, -1) || iParam2) {
				if (func_164(&Var1, iParam1, iVar0, iParam0, -1)) {
					ped::_set_ped_decoration(iParam0, Var1.f_4, Var1.f_5);
					func_160(iParam0, Var1.f_4, Var1.f_5);
				}
			}
		}
	}
}

// Position - 0x3BFF0
void func_218(int iParam0, int iParam1, int iParam2) {
	if (iParam1) {
		if (!func_172(iParam0, iParam2)) {
			func_219(iParam0, 1, iParam2);
		}
	}
	else if (func_172(iParam0, iParam2)) {
		func_219(iParam0, 0, iParam2);
	}
}

// Position - 0x3C02B
void func_219(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	iVar0 = func_174(iParam0, iParam2);
	iVar1 = iParam0;
	if (iVar1 > -1) {
		if (iParam1) {
			gameplay::set_bit(&iVar0, func_173(iVar1));
		}
		else {
			gameplay::clear_bit(&iVar0, func_173(iVar1));
		}
		func_260(func_175(iParam0), iVar0, iParam2, 1, 0);
	}
}

// Position - 0x3C07A
int func_220() {
	int iVar0;

	iVar0 = Global_69521;
	if (func_172(13, iVar0)) {
		return 13;
	}
	if (func_172(14, iVar0)) {
		return 14;
	}
	if (func_172(15, iVar0)) {
		return 15;
	}
	if (func_172(16, iVar0)) {
		return 16;
	}
	if (func_172(71, iVar0)) {
		return 71;
	}
	if (func_172(72, iVar0)) {
		return 72;
	}
	return -1;
}

// Position - 0x3C0E9
int func_221(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (!ped::is_ped_injured(iParam0)) {
		if (iParam1 == 12) {
			iVar0 = 0;
			while (iVar0 <= 53) {
				if (func_135(iParam0, iParam1, iVar0)) {
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13) {
			iVar1 = 0;
			while (iVar1 <= 19) {
				if (func_135(iParam0, iParam1, iVar1)) {
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14) {
			if (iParam2 == -1) {
			}
			else {
				return func_97(iParam0, iParam2);
			}
		}
		else {
			return func_95(iParam0, iParam1);
		}
	}
	return -99;
}

// Position - 0x3C18A
void func_222(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	if (iParam2 == -1) {
		ped::clear_ped_prop(iParam0, iParam1);
		if (iParam1 == 0) {
			ped::set_ped_config_flag(iParam0, 34, 0);
			ped::set_ped_config_flag(iParam0, 36, 0);
		}
	}
	else {
		ped::set_ped_prop_index(iParam0, iParam1, iParam2, iParam3, network::network_is_game_in_progress());
		if (iParam1 == 0) {
			iVar0 = func_98(iParam0, iParam2, iParam3, iParam1);
			if (func_213(entity::get_entity_model(iParam0), 14, iVar0,
						 dlc1::get_hash_name_for_prop(iParam0, 0, iParam2, iParam3))) {
				ped::set_ped_config_flag(iParam0, 34, 1);
				ped::set_ped_config_flag(iParam0, 36, 1);
			}
			else {
				ped::set_ped_config_flag(iParam0, 34, 0);
				ped::set_ped_config_flag(iParam0, 36, 0);
			}
		}
	}
}

// Position - 0x3C222
void func_223(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10[2];
	struct<2> Var13;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	struct<2> Var34;
	int iVar51;
	int iVar52;
	int iVar53;

	if (network::network_is_game_in_progress()) {
		if (Global_69521 != func_18() || iParam2 == -99) {
			return;
		}
		Global_69523[2 /*14*/] = {func_227(iParam0, iParam1, iParam2)};
		if (gameplay::is_bit_set(Global_69523[2 /*14*/].f_6, 1) &&
			gameplay::is_bit_set(Global_69523[2 /*14*/].f_6, 6)) {
			if (iParam1 == 12) {
				func_225(Global_2621444, 2, 1, 1, -1);
			}
			else if (iParam1 == 13) {
			}
			else if (iParam1 == 14) {
				func_225(Global_2621444, 2, 1, 1, -1);
			}
			else {
				func_225(Global_2621444, 2, 1, 1, -1);
			}
			if (iParam3) {
				iVar0 = dlc1::_0xC17AD0E5752BECDA(Global_2621444);
				iVar5 = 0;
				iVar1 = 0;
				while (iVar1 < iVar0) {
					if (iVar5 < Global_2592918) {
						Global_2592918[iVar5] = -1;
						Global_2592929[iVar5] = -1;
					}
					dlc1::get_variant_component(Global_2621444, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar4 != 10 && iVar4 != 9) {
						if (iParam1 == 4 && dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, -1223513441, 0)) {
						}
						else if (iVar2 != 0 && iVar2 != 1849449579) {
							func_225(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_2592918) {
								Global_2592918[iVar5] = iVar2;
								Global_2592929[iVar5] = iVar4;
								iVar5++;
							}
						}
						else {
							func_223(iParam0, func_90(iVar4), uVar3, 0);
						}
					}
					iVar1++;
				}
				Global_2592917++;
				if (Global_2592917 < 2) {
					iVar1 = 0;
					while (iVar1 < iVar5) {
						if (iVar1 < Global_2592918) {
							if (Global_2592918[iVar1] != -1) {
								if (iParam0 == joaat("mp_m_freemode_01")) {
									func_223(iParam0, func_90(Global_2592929[iVar1]),
											 func_84(iParam0, Global_2592918[iVar1], func_90(Global_2592929[iVar1]), 3),
											 1);
								}
								else {
									func_223(iParam0, func_90(Global_2592929[iVar1]),
											 func_84(iParam0, Global_2592918[iVar1], func_90(Global_2592929[iVar1]), 4),
											 1);
								}
							}
						}
						iVar1++;
					}
				}
				Global_2592917--;
			}
			return;
		}
		if (gameplay::is_bit_set(Global_69523[2 /*14*/].f_6, 1) &&
			!gameplay::is_bit_set(Global_69523[2 /*14*/].f_6, 6)) {
			if (func_14(iParam1, Global_69523[1 /*14*/].f_2, &iVar6)) {
				iVar7 = func_16(iVar6, Global_69521, 0);
				gameplay::set_bit(&iVar7, Global_69523[2 /*14*/].f_1);
				func_260(iVar6, iVar7, Global_69521, 1, 0);
			}
			if (iParam3 == 1) {
				if (iParam0 == joaat("mp_m_freemode_01")) {
					if (iParam1 == 14) {
						if (iParam2 >= 83 && iParam2 <= 90) {
							iVar8 = 75 + Global_69523[2 /*14*/].f_4;
							func_223(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82) {
							iVar8 = 83 + Global_69523[2 /*14*/].f_4;
							func_223(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8) {
						if (iParam2 >= 48 && iParam2 <= 63) {
							iVar8 = 64 + Global_69523[2 /*14*/].f_4;
							func_223(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79) {
							iVar8 = 48 + Global_69523[2 /*14*/].f_4;
							func_223(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111) {
							iVar8 = 112 + Global_69523[2 /*14*/].f_4;
							func_223(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127) {
							iVar8 = 96 + Global_69523[2 /*14*/].f_4;
							func_223(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191) {
							iVar8 = 160 + Global_69523[2 /*14*/].f_4;
							func_223(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175) {
							iVar8 = 176 + Global_69523[2 /*14*/].f_4;
							func_223(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47) {
							iVar8 = 0 + Global_69523[2 /*14*/].f_4;
							func_223(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239) {
							iVar8 = 16 + Global_69523[2 /*14*/].f_4;
							func_223(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11) {
						if (iParam2 >= 0 && iParam2 <= 15) {
							iVar8 = 32 + Global_69523[2 /*14*/].f_4;
							func_223(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31) {
							iVar8 = 224 + Global_69523[2 /*14*/].f_4;
							func_223(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235) {
							switch (iParam2) {
							case 220:
								iVar10[0] = 691352495;
								iVar10[1] = 691352495;
								break;

							case 221:
								iVar10[0] = 451909412;
								iVar10[1] = 451909412;
								break;

							case 222:
								iVar10[0] = -206550874;
								iVar10[1] = -206550874;
								break;

							case 223:
								iVar10[0] = -445797343;
								iVar10[1] = -445797343;
								break;

							case 224:
								iVar10[0] = -173716332;
								iVar10[1] = -173716332;
								break;

							case 225:
								iVar10[0] = -538304226;
								iVar10[1] = -538304226;
								break;

							case 226:
								iVar10[0] = -592242000;
								iVar10[1] = -592242000;
								break;

							case 227:
								iVar10[0] = -831095241;
								iVar10[1] = -831095241;
								break;

							case 228:
								iVar10[0] = -1092100326;
								iVar10[1] = -1092100326;
								break;

							case 229:
								iVar10[0] = -1465994616;
								iVar10[1] = -1465994616;
								break;

							case 230:
								iVar10[0] = 507503642;
								iVar10[1] = 507503642;
								break;

							case 231:
								iVar10[0] = -1392082519;
								iVar10[1] = -1392082519;
								break;

							case 232:
								iVar10[0] = -88859389;
								iVar10[1] = -88859389;
								break;

							case 233:
								iVar10[0] = 157858412;
								iVar10[1] = 157858412;
								break;

							case 234:
								iVar10[0] = -513152401;
								iVar10[1] = -513152401;
								break;

							case 235:
								iVar10[0] = 2004948615;
								iVar10[1] = 2004948615;
								break;
							}
							dlc1::init_shop_ped_component(&Var13);
							iVar32 = dlc1::_get_num_props_from_outfit(3, 6, -1, 0, -1, 8);
							iVar30 = 0;
							while (iVar30 < iVar32) {
								dlc1::get_shop_ped_query_component(iVar30, &Var13);
								if (!dlc1::_is_dlc_data_empty(Var13)) {
									if (Var13.f_1 == iVar10[0] || Var13.f_1 == iVar10[1]) {
										func_223(iParam0, 8, 241 + iVar31, 0);
										iVar30 = iVar32 + 1;
									}
									iVar31++;
								}
								iVar30++;
							}
						}
					}
					else if (iParam1 == 7) {
						if (iParam2 >= 41 && iParam2 <= 56) {
							switch (Global_69523[2 /*14*/].f_4) {
							case 0:
								func_223(iParam0, 7, func_84(iParam0, -1893758670, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, 221276858, 7, 3), 0);
								break;

							case 1:
								func_223(iParam0, 7, func_84(iParam0, -1596052305, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, 576886046, 7, 3), 0);
								break;

							case 2:
								func_223(iParam0, 7, func_84(iParam0, 1233059274, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, -392978047, 7, 3), 0);
								break;

							case 3:
								func_223(iParam0, 7, func_84(iParam0, 232228476, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, -33764269, 7, 3), 0);
								break;

							case 4:
								func_223(iParam0, 7, func_84(iParam0, -454445919, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, 1510704243, 7, 3), 0);
								break;

							case 5:
								func_223(iParam0, 7, func_84(iParam0, 925653285, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, 1800939276, 7, 3), 0);
								break;

							case 6:
								func_223(iParam0, 7, func_84(iParam0, -2104856604, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, 833565623, 7, 3), 0);
								break;

							case 7:
								func_223(iParam0, 7, func_84(iParam0, 1657483366, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, 1201823645, 7, 3), 0);
								break;

							case 8:
								func_223(iParam0, 7, func_84(iParam0, 501294735, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, 2132496022, 7, 3), 0);
								break;

							case 9:
								func_223(iParam0, 7, func_84(iParam0, 1882573627, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, -1939019463, 7, 3), 0);
								break;

							case 10:
								func_223(iParam0, 7, func_84(iParam0, 206035418, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, 1713491273, 7, 3), 0);
								break;

							case 11:
								func_223(iParam0, 7, func_84(iParam0, -642943834, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, -156668318, 7, 3), 0);
								break;

							case 12:
								func_223(iParam0, 7, func_84(iParam0, -388295935, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, 106696135, 7, 3), 0);
								break;

							case 13:
								func_223(iParam0, 7, func_84(iParam0, 927641567, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, -802905767, 7, 3), 0);
								break;

							case 14:
								func_223(iParam0, 7, func_84(iParam0, 1147226636, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, -505527092, 7, 3), 0);
								break;

							case 15:
								func_223(iParam0, 7, func_84(iParam0, 312665744, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, -1144129332, 7, 3), 0);
								break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88) {
							switch (Global_69523[2 /*14*/].f_4) {
							case 0:
								func_223(iParam0, 7, func_84(iParam0, -335266079, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, -925989020, 7, 3), 0);
								break;

							case 1:
								func_223(iParam0, 7, func_84(iParam0, -1379548555, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, 244486895, 7, 3), 0);
								break;

							case 2:
								func_223(iParam0, 7, func_84(iParam0, -1402159165, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, 1095104597, 7, 3), 0);
								break;

							case 3:
								func_223(iParam0, 7, func_84(iParam0, 1357351098, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, 1787874026, 7, 3), 0);
								break;

							case 4:
								func_223(iParam0, 7, func_84(iParam0, -1097178082, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, 476163725, 7, 3), 0);
								break;

							case 5:
								func_223(iParam0, 7, func_84(iParam0, -179482237, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, 1223952305, 7, 3), 0);
								break;

							case 6:
								func_223(iParam0, 7, func_84(iParam0, -750514831, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, 2049796643, 7, 3), 0);
								break;

							case 7:
								func_223(iParam0, 7, func_84(iParam0, -1724573356, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, -1013547784, 7, 3), 0);
								break;

							case 8:
								func_223(iParam0, 7, func_84(iParam0, 94106144, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, 1456972664, 7, 3), 0);
								break;

							case 9:
								func_223(iParam0, 7, func_84(iParam0, 1070524041, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, -1670762848, 7, 3), 0);
								break;

							case 10:
								func_223(iParam0, 7, func_84(iParam0, -1644577318, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, 1428867383, 7, 3), 0);
								break;

							case 11:
								func_223(iParam0, 7, func_84(iParam0, 1865900118, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, -1664165762, 7, 3), 0);
								break;

							case 12:
								func_223(iParam0, 7, func_84(iParam0, 1611776523, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, -1962101510, 7, 3), 0);
								break;

							case 13:
								func_223(iParam0, 7, func_84(iParam0, 1381115532, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, -1270511757, 7, 3), 0);
								break;

							case 14:
								func_223(iParam0, 7, func_84(iParam0, 1636484345, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, -1571626106, 7, 3), 0);
								break;

							case 15:
								func_223(iParam0, 7, func_84(iParam0, 1422633851, 7, 3), 0);
								func_223(iParam0, 7, func_84(iParam0, -698332248, 7, 3), 0);
								break;
							}
						}
					}
				}
				else if (iParam0 == joaat("mp_f_freemode_01")) {
					if (iParam1 == 11) {
						if (iParam2 >= 0 && iParam2 <= 15) {
							iVar8 = 16 + Global_69523[2 /*14*/].f_4;
							func_223(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_69523[2 /*14*/] = {func_227(iParam0, iParam1, iParam2)};
				if (iParam1 == 11) {
					iVar9 = func_224(iParam0, iParam2, Global_69523[2 /*14*/].f_4);
					if (iVar9 != -99) {
						func_223(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203) {
						switch (iParam2) {
						case 199: iVar33 = 331193219; break;

						case 200: iVar33 = 1115060468; break;

						case 201: iVar33 = 779636984; break;
						}
						dlc1::init_shop_ped_component(&Var34);
						iVar53 = dlc1::_get_num_props_from_outfit(4, 6, -1, 0, -1, 8);
						iVar51 = 0;
						while (iVar51 < iVar53) {
							dlc1::get_shop_ped_query_component(iVar51, &Var34);
							if (!dlc1::_is_dlc_data_empty(Var34)) {
								if (Var34.f_1 == iVar33) {
									func_223(iParam0, 8, 136 + iVar52, 0);
									iVar51 = iVar53 + 1;
								}
								iVar52++;
							}
							iVar51++;
						}
					}
				}
				else if (iParam1 == 8) {
					iVar9 = func_203(iParam0, iParam2, Global_69523[2 /*14*/].f_4);
					if (iVar9 != -99) {
						func_223(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

// Position - 0x3D150
int func_224(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = -99;
	if (iParam0 == joaat("mp_m_freemode_01")) {
		if (iParam1 <= 15) {
			iVar0 = 0;
		}
		else if (iParam1 <= 31) {
			iVar0 = 16;
		}
		else if (iParam1 <= 47) {
			iVar0 = -99;
		}
		else if (iParam1 <= 63) {
			iVar0 = -99;
		}
		else if (iParam1 <= 79) {
			iVar0 = -99;
		}
		else if (iParam1 <= 95) {
			iVar0 = 80;
		}
		else if (iParam1 <= 107) {
			iVar0 = -99;
		}
		else if (iParam1 <= 123) {
			iVar0 = -99;
		}
		else if (iParam1 <= 139) {
			iVar0 = 128;
		}
		else if (iParam1 <= 155) {
			iVar0 = 144;
		}
		else if (iParam1 <= 171) {
			iVar0 = -99;
		}
		else if (iParam1 <= 187) {
			iVar0 = -99;
		}
		else if (iParam1 <= 203) {
			iVar0 = 192;
		}
		else if (iParam1 <= 219) {
			iVar0 = 208;
		}
		else if (iParam1 <= 235) {
			iVar0 = -99;
		}
		else if (iParam1 <= 236) {
			iVar0 = 240;
		}
		else if (iParam1 >= 237) {
			iVar1 = func_104(iParam0, iParam1, 11, 3);
			if (iVar1 != -1) {
				iVar2 = dlc1::_0xC17AD0E5752BECDA(iVar1);
				iVar3 = 0;
				while (iVar3 < iVar2) {
					dlc1::get_variant_component(iVar1, iVar3, &iVar4, &iVar5, &iVar6);
					if (iVar6 == 8) {
						if (iVar4 != 0 && iVar4 != 1849449579) {
							iVar0 = func_84(iParam0, iVar4, 8, 3);
						}
						else {
							iVar0 = iVar5;
						}
						iVar3 = iVar2 + 1;
					}
					iVar3++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		if (iParam1 <= 15) {
			iVar0 = 0;
		}
		else if (iParam1 <= 31) {
			iVar0 = -99;
		}
		else if (iParam1 <= 47) {
			iVar0 = -99;
		}
		else if (iParam1 <= 63) {
			iVar0 = -99;
		}
		else if (iParam1 <= 79) {
			iVar0 = 34;
		}
		else if (iParam1 <= 95) {
			iVar0 = 50;
		}
		else if (iParam1 <= 111) {
			iVar0 = -99;
		}
		else if (iParam1 <= 127) {
			iVar0 = -99;
		}
		else if (iParam1 <= 143) {
			iVar0 = -99;
		}
		else if (iParam1 <= 159) {
			iVar0 = -99;
		}
		else if (iParam1 <= 175) {
			iVar0 = -99;
		}
		else if (iParam1 <= 191) {
			iVar0 = 71;
		}
		else if (iParam1 <= 207) {
			iVar0 = 87;
		}
		else if (iParam1 <= 223) {
			iVar0 = 103;
		}
		else if (iParam1 <= 239) {
			iVar0 = -99;
		}
		else if (iParam1 <= 255) {
			iVar0 = 120;
		}
		else if (iParam1 >= 256) {
			iVar7 = func_104(iParam0, iParam1, 11, 4);
			if (iVar7 != -1) {
				iVar8 = dlc1::_0xC17AD0E5752BECDA(iVar7);
				iVar9 = 0;
				while (iVar9 < iVar8) {
					dlc1::get_variant_component(iVar7, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 8) {
						if (iVar10 != 0 && iVar10 != 1849449579) {
							iVar0 = func_84(iParam0, iVar10, 8, 4);
						}
						else {
							iVar0 = iVar11;
						}
						iVar9 = iVar8 + 1;
					}
					iVar9++;
				}
			}
		}
	}
	if (iVar0 != -99) {
		iVar0 += iParam2;
	}
	return iVar0;
}

// Position - 0x3D445
void func_225(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Global_69521;
	if (iParam4 != -1) {
		iVar0 = iParam4;
	}
	if (func_21(iParam0, iParam1, &iVar2, &iVar1, iParam2, iParam3)) {
		iVar3 = func_16(iVar2, iVar0, 0);
		gameplay::set_bit(&iVar3, iVar1);
		func_260(iVar2, iVar3, iVar0, 1, 0);
	}
}

// Position - 0x3D48F
int func_226(int iParam0) {
	if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
		return 0;
	}
	if (iParam0 == 1) {
		if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1)) {
			return 0;
		}
		if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 2)) {
			return 0;
		}
	}
	return 1;
}

// Position - 0x3D4E0
struct<14> func_227(int iParam0, int iParam1, int iParam2) {
	func_79();
	if (iParam0 == joaat("mp_m_freemode_01")) {
		func_244(iParam1, iParam2);
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		func_228(iParam1, iParam2);
	}
	return Global_69523[0 /*14*/];
}

//Position - 0x3D51D
void func_228(int iParam0, int iParam1)
{
	switch (iParam0) {
	case 2: func_243(iParam1); break;

	case 11: func_242(iParam1); break;

	case 8: func_241(iParam1); break;

	case 9: func_240(iParam1); break;

	case 3: func_239(iParam1); break;

	case 4: func_238(iParam1); break;

	case 6: func_237(iParam1); break;

	case 1: func_236(iParam1); break;

	case 7: func_235(iParam1); break;

	case 10: func_234(iParam1); break;

	case 14: func_233(iParam1); break;

	case 12: func_232(iParam1); break;

	case 5: func_231(iParam1); break;

	case 0: func_230(iParam1); break;

	case 13: func_229(iParam1); break;
	}
}

// Position - 0x3D60D
void func_229(int iParam0) {
	int iVar0;
	int iVar1;
	char *sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0) {
	case 31:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 0:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 3:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 4:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 6:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 9:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 10:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 11:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 12:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 13:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 14:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 15:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 16:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 17:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 18:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 19:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 20:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 21:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 22:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 23:
		iVar6 = 0;
		iVar7 = 0;
		break;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x3D7C8
void func_230(int iParam0) {
	int iVar0;

	iVar0 = 0;
	Global_69523[0 /*14*/].f_5 = 4;
	func_24(iVar0, iParam0, 0);
}

// Position - 0x3D7E6
void func_231(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 6:
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 7:
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 8:
		iVar6 = 8;
		iVar7 = 0;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 4;
		func_24(iVar10, iParam0, 9);
		return;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x3D8E7
void func_232(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_S1", 16);
		break;

	case 2:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_S2", 16);
		break;

	case 3:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_S3", 16);
		break;

	case 4:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_S4", 16);
		break;

	case 5:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_S5", 16);
		break;

	case 6:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_S6", 16);
		break;

	case 7:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_S7", 16);
		break;

	case 8:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_S8", 16);
		break;

	case 9:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P1", 16);
		break;

	case 10:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P2", 16);
		break;

	case 11:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P3", 16);
		break;

	case 12:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P4", 16);
		break;

	case 13:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P5", 16);
		break;

	case 14:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P6", 16);
		break;

	case 15:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P7", 16);
		break;

	case 16:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P8", 16);
		break;

	case 17:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P9", 16);
		break;

	case 18:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P10", 16);
		break;

	case 19:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B1", 16);
		break;

	case 20:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B2", 16);
		break;

	case 21:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B3", 16);
		break;

	case 22:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B4", 16);
		break;

	case 23:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B5", 16);
		break;

	case 24:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B6", 16);
		break;

	case 25:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B7", 16);
		break;

	case 26:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B8", 16);
		break;

	case 27:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B9", 16);
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 4;
		func_24(iVar10, iParam0, 28);
		return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x3DBC4
void func_233(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0) {
	case 0:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		break;

	case 1:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		break;

	case 2:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 2;
		break;

	case 3:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 3;
		break;

	case 4:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 4;
		break;

	case 5:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 5;
		break;

	case 6:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		break;

	case 7:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 7;
		break;

	case 8:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 8;
		break;

	case 10:
		StringCopy(&Var2, "HT_FMF_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 11:
		StringCopy(&Var2, "HT_FMF_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 12:
		StringCopy(&Var2, "HT_FMF_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 85;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 13:
		StringCopy(&Var2, "HT_FMF_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 75;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 14:
		StringCopy(&Var2, "HT_FMF_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 235;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 15:
		StringCopy(&Var2, "HT_FMF_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 80;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 16:
		StringCopy(&Var2, "HT_FMF_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 85;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 17:
		StringCopy(&Var2, "HT_FMF_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 90;
		iVar8 = 0;
		iVar11 = 1;
		break;
	}
	switch (iParam0) {
	case 18:
		StringCopy(&Var2, "HT_FMF_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 19:
		StringCopy(&Var2, "HT_FMF_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 20:
		StringCopy(&Var2, "HT_FMF_2_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 5000;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 21:
		StringCopy(&Var2, "HT_FMF_2_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 22:
		StringCopy(&Var2, "HT_FMF_2_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 23:
		StringCopy(&Var2, "HT_FMF_2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 24:
		StringCopy(&Var2, "HT_FMF_2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 25:
		StringCopy(&Var2, "HT_FMF_2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 26:
		StringCopy(&Var2, "HT_FMF_2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 27:
		StringCopy(&Var2, "HT_FMF_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 28:
		StringCopy(&Var2, "HT_FMF_3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 29:
		StringCopy(&Var2, "HT_FMF_3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 30:
		StringCopy(&Var2, "HT_FMF_3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 31:
		StringCopy(&Var2, "HT_FMF_3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "HT_FMF_3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 33:
		StringCopy(&Var2, "HT_FMF_3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 34:
		StringCopy(&Var2, "HT_FMF_3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 120;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 35:
		StringCopy(&Var2, "HT_FMF_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 400;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 36:
		StringCopy(&Var2, "HT_FMF_4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 37:
		StringCopy(&Var2, "HT_FMF_4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 375;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 38:
		StringCopy(&Var2, "HT_FMF_4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 75;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 39:
		StringCopy(&Var2, "HT_FMF_4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 40:
		StringCopy(&Var2, "HT_FMF_4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 41:
		StringCopy(&Var2, "HT_FMF_4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 85;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 42:
		StringCopy(&Var2, "HT_FMF_4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 325;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 43:
		StringCopy(&Var2, "HT_FMF_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 35;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 44:
		StringCopy(&Var2, "HT_FMF_5_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 30;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 45:
		StringCopy(&Var2, "HT_FMF_5_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 35;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 46:
		StringCopy(&Var2, "HT_FMF_5_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 40;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 47:
		StringCopy(&Var2, "HT_FMF_5_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 35;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 48:
		StringCopy(&Var2, "HT_FMF_5_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 30;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 49:
		StringCopy(&Var2, "HT_FMF_5_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 35;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 50:
		StringCopy(&Var2, "HT_FMF_5_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 255;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 51:
		StringCopy(&Var2, "HT_FMF_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 360;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 52:
		StringCopy(&Var2, "HT_FMF_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 195;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 53:
		StringCopy(&Var2, "HT_FMF_6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 3970;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 54:
		StringCopy(&Var2, "HT_FMF_6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 135;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 55:
		StringCopy(&Var2, "HT_FMF_6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 1355;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 56:
		StringCopy(&Var2, "HT_FMF_6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 110;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 57:
		StringCopy(&Var2, "HT_FMF_6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 140;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 58:
		StringCopy(&Var2, "HT_FMF_6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 130;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 59:
		StringCopy(&Var2, "HT_FMF_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 230;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 60:
		StringCopy(&Var2, "HT_FMF_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 195;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 61:
		StringCopy(&Var2, "HT_FMF_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 515;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 62:
		StringCopy(&Var2, "HT_FMF_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 545;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 63:
		StringCopy(&Var2, "HT_FMF_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 195;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 64:
		StringCopy(&Var2, "HT_FMF_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 155;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 65:
		StringCopy(&Var2, "HT_FMF_7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 155;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 66:
		StringCopy(&Var2, "HT_FMF_7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 1440;
		iVar8 = 0;
		iVar11 = 1;
		break;
	}
	switch (iParam0) {
	case 67:
		StringCopy(&Var2, "HT_FMF_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 68:
		StringCopy(&Var2, "HT_FMF_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 69:
		StringCopy(&Var2, "HT_FMF_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 70:
		StringCopy(&Var2, "HT_FMF_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 71:
		StringCopy(&Var2, "HT_FMF_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 72:
		StringCopy(&Var2, "HT_FMF_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 73:
		StringCopy(&Var2, "HT_FMF_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 74:
		StringCopy(&Var2, "HT_FMF_8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 75:
		StringCopy(&Var2, "HT_FMF_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 35;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 76:
		StringCopy(&Var2, "HT_FMF_9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 25;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 77:
		StringCopy(&Var2, "HT_FMF_9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 30;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 78:
		StringCopy(&Var2, "HT_FMF_9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 25;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 79:
		StringCopy(&Var2, "HT_FMF_9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 50;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 80:
		StringCopy(&Var2, "HT_FMF_9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 40;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 81:
		StringCopy(&Var2, "HT_FMF_9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 575;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 82:
		StringCopy(&Var2, "HT_FMF_9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 605;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 83:
		StringCopy(&Var2, "HT_FMF_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 84:
		StringCopy(&Var2, "HT_FMF_10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 85:
		StringCopy(&Var2, "HT_FMF_10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 86:
		StringCopy(&Var2, "HT_FMF_10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 87:
		StringCopy(&Var2, "HT_FMF_10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 88:
		StringCopy(&Var2, "HT_FMF_10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 89:
		StringCopy(&Var2, "HT_FMF_10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 90:
		StringCopy(&Var2, "HT_FMF_10_7", 16);
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 285;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 91:
		StringCopy(&Var2, "HT_FMF_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 92:
		StringCopy(&Var2, "HT_FMF_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 2125;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 93:
		StringCopy(&Var2, "HT_FMF_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 94:
		StringCopy(&Var2, "HT_FMF_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 95:
		StringCopy(&Var2, "HT_FMF_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 96:
		StringCopy(&Var2, "HT_FMF_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 97:
		StringCopy(&Var2, "HT_FMF_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 98:
		StringCopy(&Var2, "HT_FMF_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 99:
		StringCopy(&Var2, "HT_FMF_12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 75;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 100:
		StringCopy(&Var2, "HT_FMF_12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 101:
		StringCopy(&Var2, "HT_FMF_12_2", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 102:
		StringCopy(&Var2, "HT_FMF_12_3", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 103:
		StringCopy(&Var2, "HT_FMF_12_4", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 104:
		StringCopy(&Var2, "HT_FMF_12_5", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 105:
		StringCopy(&Var2, "HT_FMF_12_6", 16);
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 75;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 106:
		StringCopy(&Var2, "HT_FMF_12_7", 16);
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 295;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 107:
		StringCopy(&Var2, "HT_FMF_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 195;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 108:
		StringCopy(&Var2, "HT_FMF_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 200;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 109:
		StringCopy(&Var2, "HT_FMF_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 160;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 110:
		StringCopy(&Var2, "HT_FMF_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 855;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 111:
		StringCopy(&Var2, "HT_FMF_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 1615;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 112:
		StringCopy(&Var2, "HT_FMF_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 1130;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 113:
		StringCopy(&Var2, "HT_FMF_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 165;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 114:
		StringCopy(&Var2, "HT_FMF_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 215;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 115:
		StringCopy(&Var2, "HT_FMF_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 145;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 116:
		StringCopy(&Var2, "HT_FMF_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 250;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 117:
		StringCopy(&Var2, "HT_FMF_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 110;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 118:
		StringCopy(&Var2, "HT_FMF_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 145;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 119:
		StringCopy(&Var2, "HT_FMF_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 105;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 120:
		StringCopy(&Var2, "HT_FMF_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 105;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 121:
		StringCopy(&Var2, "HT_FMF_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 115;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 122:
		StringCopy(&Var2, "HT_FMF_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 115;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 123:
		StringCopy(&Var2, "HT_FMF_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 390;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 124:
		StringCopy(&Var2, "HT_FMF_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 395;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 125:
		StringCopy(&Var2, "HT_FMF_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 595;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 126:
		StringCopy(&Var2, "HT_FMF_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 425;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 127:
		StringCopy(&Var2, "HT_FMF_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 600;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 128:
		StringCopy(&Var2, "HT_FMF_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 590;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 129:
		StringCopy(&Var2, "HT_FMF_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 595;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 130:
		StringCopy(&Var2, "HT_FMF_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 555;
		iVar8 = 0;
		iVar11 = 1;
		break;
	}
	switch (iParam0) {
	case 131:
		StringCopy(&Var2, "HE_FMF_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 1060;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 132:
		StringCopy(&Var2, "HE_FMF_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 1400;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 133:
		StringCopy(&Var2, "HE_FMF_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 1315;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 134:
		StringCopy(&Var2, "HE_FMF_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 1230;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 135:
		StringCopy(&Var2, "HE_FMF_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 1145;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 136:
		StringCopy(&Var2, "HE_FMF_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 8450;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 137:
		StringCopy(&Var2, "HE_FMF_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 675;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 138:
		StringCopy(&Var2, "HE_FMF_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 8750;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 139:
		StringCopy(&Var2, "HE_FMF_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 975;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 140:
		StringCopy(&Var2, "HE_FMF_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar1 = 750;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 141:
		StringCopy(&Var2, "HE_FMF_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		iVar1 = 865;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 142:
		StringCopy(&Var2, "HE_FMF_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 890;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 143:
		StringCopy(&Var2, "HE_FMF_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 730;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 144:
		StringCopy(&Var2, "HE_FMF_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 650;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 145:
		StringCopy(&Var2, "HE_FMF_17_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		iVar1 = 645;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 146:
		StringCopy(&Var2, "HE_FMF_17_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		iVar1 = 755;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 147:
		StringCopy(&Var2, "HE_FMF_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 13850;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 148:
		StringCopy(&Var2, "HE_FMF_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 2900;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 149:
		StringCopy(&Var2, "HE_FMF_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 2895;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 150:
		StringCopy(&Var2, "HE_FMF_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 12500;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 151:
		StringCopy(&Var2, "HE_FMF_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 15000;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 152:
		StringCopy(&Var2, "HE_FMF_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 14750;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 153:
		StringCopy(&Var2, "HE_FMF_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 13150;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 154:
		StringCopy(&Var2, "HE_FMF_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 2925;
		iVar8 = 0;
		iVar11 = 2;
		break;
	}
	switch (iParam0) {
	case 155:
		StringCopy(&Var2, "G_FMF_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 65;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 156:
		StringCopy(&Var2, "G_FMF_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 65;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 157:
		StringCopy(&Var2, "G_FMF_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 85;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 158:
		StringCopy(&Var2, "G_FMF_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 75;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 159:
		StringCopy(&Var2, "G_FMF_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 85;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 160:
		StringCopy(&Var2, "G_FMF_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 80;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 161:
		StringCopy(&Var2, "G_FMF_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 85;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 162:
		StringCopy(&Var2, "G_FMF_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 90;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 163:
		StringCopy(&Var2, "CLO_EXF_G_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 820;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 164:
		StringCopy(&Var2, "CLO_EXF_G_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 435;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 165:
		StringCopy(&Var2, "CLO_EXF_G_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 500;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 166:
		StringCopy(&Var2, "G_FMF_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 160;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 167:
		StringCopy(&Var2, "G_FMF_1_1", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 165;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 168:
		StringCopy(&Var2, "G_FMF_1_2", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 170;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 169:
		StringCopy(&Var2, "G_FMF_1_3", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 135;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 170:
		StringCopy(&Var2, "G_FMF_1_4", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 120;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 171:
		StringCopy(&Var2, "G_FMF_1_5", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 110;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 172:
		StringCopy(&Var2, "G_FMF_1_6", 16);
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 140;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 173:
		StringCopy(&Var2, "G_FMF_1_7", 16);
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 130;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 174:
		StringCopy(&Var2, "CLO_EXF_G_1_8", 16);
		iVar6 = 1;
		iVar7 = 8;
		iVar1 = 970;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 175:
		StringCopy(&Var2, "CLO_EXF_G_1_9", 16);
		iVar6 = 1;
		iVar7 = 9;
		iVar1 = 585;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 176:
		StringCopy(&Var2, "CLO_EXF_G_1_10", 16);
		iVar6 = 1;
		iVar7 = 10;
		iVar1 = 650;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 177:
		StringCopy(&Var2, "G_FMF_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 180;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 178:
		StringCopy(&Var2, "G_FMF_2_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 110;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 179:
		StringCopy(&Var2, "G_FMF_2_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 115;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 180:
		StringCopy(&Var2, "G_FMF_2_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 120;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 181:
		StringCopy(&Var2, "G_FMF_2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 595;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 182:
		StringCopy(&Var2, "G_FMF_2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 160;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 183:
		StringCopy(&Var2, "G_FMF_2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 545;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 184:
		StringCopy(&Var2, "G_FMF_2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 590;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 185:
		StringCopy(&Var2, "CLO_EXF_G_2_8", 16);
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 1125;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 186:
		StringCopy(&Var2, "CLO_EXF_G_2_9", 16);
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 740;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 187:
		StringCopy(&Var2, "CLO_EXF_G_2_10", 16);
		iVar6 = 2;
		iVar7 = 10;
		iVar1 = 805;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 188:
		StringCopy(&Var2, "G_FMF_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 6250;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 189:
		StringCopy(&Var2, "G_FMF_3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 4065;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 190:
		StringCopy(&Var2, "G_FMF_3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 3585;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 191:
		StringCopy(&Var2, "G_FMF_3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 4075;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 192:
		StringCopy(&Var2, "G_FMF_3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 4935;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 193:
		StringCopy(&Var2, "G_FMF_3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 130;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 194:
		StringCopy(&Var2, "G_FMF_3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 5600;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 195:
		StringCopy(&Var2, "G_FMF_3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 4790;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 196:
		StringCopy(&Var2, "CLO_EXF_G_3_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 2315;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 197:
		StringCopy(&Var2, "CLO_EXF_G_3_9", 16);
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 1930;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 198:
		StringCopy(&Var2, "CLO_EXF_G_3_10", 16);
		iVar6 = 3;
		iVar7 = 10;
		iVar1 = 1995;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 199:
		StringCopy(&Var2, "G_FMF_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 2245;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 200:
		StringCopy(&Var2, "G_FMF_4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 250;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 201:
		StringCopy(&Var2, "G_FMF_4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 210;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 202:
		StringCopy(&Var2, "G_FMF_4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 245;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 203:
		StringCopy(&Var2, "G_FMF_4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 1205;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 204:
		StringCopy(&Var2, "G_FMF_4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 205;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 205:
		StringCopy(&Var2, "G_FMF_4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 2215;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 206:
		StringCopy(&Var2, "G_FMF_4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 215;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 207:
		StringCopy(&Var2, "CLO_EXF_G_4_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 2835;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 208:
		StringCopy(&Var2, "CLO_EXF_G_4_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 2450;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 209:
		StringCopy(&Var2, "CLO_EXF_G_4_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 2515;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 210:
		StringCopy(&Var2, "G_FMF_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 211:
		StringCopy(&Var2, "G_FMF_5_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 212:
		StringCopy(&Var2, "G_FMF_5_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 213:
		StringCopy(&Var2, "G_FMF_5_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 214:
		StringCopy(&Var2, "G_FMF_5_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 215:
		StringCopy(&Var2, "G_FMF_5_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 216:
		StringCopy(&Var2, "G_FMF_5_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 217:
		StringCopy(&Var2, "G_FMF_5_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 218:
		StringCopy(&Var2, "G_FMF_5_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 50;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 219:
		StringCopy(&Var2, "G_FMF_5_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 50;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 220:
		StringCopy(&Var2, "G_FMF_5_10", 16);
		iVar6 = 5;
		iVar7 = 10;
		iVar1 = 50;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 221:
		StringCopy(&Var2, "G_FMF_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 5000;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 222:
		StringCopy(&Var2, "G_FMF_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 223:
		StringCopy(&Var2, "G_FMF_6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 224:
		StringCopy(&Var2, "G_FMF_6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 225:
		StringCopy(&Var2, "G_FMF_6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 226:
		StringCopy(&Var2, "G_FMF_6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 227:
		StringCopy(&Var2, "G_FMF_6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 228:
		StringCopy(&Var2, "G_FMF_6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 229:
		StringCopy(&Var2, "CLO_EXF_G_6_8", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 2820;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 230:
		StringCopy(&Var2, "CLO_EXF_G_6_9", 16);
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 2435;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 231:
		StringCopy(&Var2, "CLO_EXF_G_6_10", 16);
		iVar6 = 6;
		iVar7 = 10;
		iVar1 = 2500;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 232:
		StringCopy(&Var2, "G_FMF_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 4815;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 233:
		StringCopy(&Var2, "G_FMF_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 4795;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 234:
		StringCopy(&Var2, "G_FMF_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 4305;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 235:
		StringCopy(&Var2, "G_FMF_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 4305;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 236:
		StringCopy(&Var2, "G_FMF_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 4965;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 237:
		StringCopy(&Var2, "G_FMF_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 480;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 238:
		StringCopy(&Var2, "G_FMF_7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 465;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 239:
		StringCopy(&Var2, "G_FMF_7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 4320;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 240:
		StringCopy(&Var2, "CLO_EXF_G_7_8", 16);
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 2390;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 241:
		StringCopy(&Var2, "CLO_EXF_G_7_9", 16);
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 2005;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 242:
		StringCopy(&Var2, "CLO_EXF_G_7_10", 16);
		iVar6 = 7;
		iVar7 = 10;
		iVar1 = 2070;
		iVar8 = 1;
		iVar11 = 3;
		break;
	}
	switch (iParam0) {
	case 243:
		StringCopy(&Var2, "G_FMF_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 500;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 244:
		StringCopy(&Var2, "G_FMF_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 245:
		StringCopy(&Var2, "G_FMF_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 246:
		StringCopy(&Var2, "G_FMF_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 247:
		StringCopy(&Var2, "G_FMF_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 248:
		StringCopy(&Var2, "G_FMF_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 249:
		StringCopy(&Var2, "G_FMF_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 250:
		StringCopy(&Var2, "G_FMF_8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 251:
		StringCopy(&Var2, "CLO_EXF_G_8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 645;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 252:
		StringCopy(&Var2, "CLO_EXF_G_8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 260;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 253:
		StringCopy(&Var2, "CLO_EXF_G_8_10", 16);
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 325;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 254:
		StringCopy(&Var2, "G_FMF_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 70;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 255:
		StringCopy(&Var2, "G_FMF_9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 60;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 256:
		StringCopy(&Var2, "G_FMF_9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 65;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 257:
		StringCopy(&Var2, "G_FMF_9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 570;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 258:
		StringCopy(&Var2, "G_FMF_9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 525;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 259:
		StringCopy(&Var2, "G_FMF_9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 75;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 260:
		StringCopy(&Var2, "G_FMF_9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 75;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 261:
		StringCopy(&Var2, "G_FMF_9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 90;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 262:
		StringCopy(&Var2, "CLO_EXF_G_9_8", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 645;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 263:
		StringCopy(&Var2, "CLO_EXF_G_9_9", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 260;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 264:
		StringCopy(&Var2, "CLO_EXF_G_9_10", 16);
		iVar6 = 9;
		iVar7 = 10;
		iVar1 = 325;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 265:
		StringCopy(&Var2, "G_FMF_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 4065;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 266:
		StringCopy(&Var2, "G_FMF_10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 65;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 267:
		StringCopy(&Var2, "G_FMF_10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 85;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 268:
		StringCopy(&Var2, "G_FMF_10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 4275;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 269:
		StringCopy(&Var2, "G_FMF_10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 85;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 270:
		StringCopy(&Var2, "G_FMF_10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 80;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 271:
		StringCopy(&Var2, "G_FMF_10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 85;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 272:
		StringCopy(&Var2, "G_FMF_10_7", 16);
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 90;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 273:
		StringCopy(&Var2, "CLO_EXF_G_10_8", 16);
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 2315;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 274:
		StringCopy(&Var2, "CLO_EXF_G_10_9", 16);
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 1930;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 275:
		StringCopy(&Var2, "CLO_EXF_G_10_10", 16);
		iVar6 = 10;
		iVar7 = 10;
		iVar1 = 1995;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 276:
		StringCopy(&Var2, "G_FMF_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 3660;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 277:
		StringCopy(&Var2, "G_FMF_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 4165;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 278:
		StringCopy(&Var2, "G_FMF_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 3670;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 279:
		StringCopy(&Var2, "G_FMF_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 135;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 280:
		StringCopy(&Var2, "G_FMF_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 3620;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 281:
		StringCopy(&Var2, "G_FMF_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 3610;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 282:
		StringCopy(&Var2, "G_FMF_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 4140;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 283:
		StringCopy(&Var2, "G_FMF_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 130;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 284:
		StringCopy(&Var2, "G_FMF_12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 285:
		StringCopy(&Var2, "G_FMF_12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 286:
		StringCopy(&Var2, "G_FMF_12_2", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 287:
		StringCopy(&Var2, "G_FMF_12_3", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 288:
		StringCopy(&Var2, "G_FMF_12_4", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 289:
		StringCopy(&Var2, "G_FMF_12_5", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 290:
		StringCopy(&Var2, "G_FMF_12_6", 16);
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 291:
		StringCopy(&Var2, "G_FMF_12_7", 16);
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 292:
		StringCopy(&Var2, "G_FMF_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 293:
		StringCopy(&Var2, "G_FMF_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 294:
		StringCopy(&Var2, "G_FMF_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 295:
		StringCopy(&Var2, "G_FMF_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 296:
		StringCopy(&Var2, "G_FMF_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 297:
		StringCopy(&Var2, "G_FMF_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 298:
		StringCopy(&Var2, "G_FMF_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 299:
		StringCopy(&Var2, "G_FMF_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 300:
		StringCopy(&Var2, "G_FMF_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 325;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 301:
		StringCopy(&Var2, "G_FMF_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 110;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 302:
		StringCopy(&Var2, "G_FMF_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 115;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 303:
		StringCopy(&Var2, "G_FMF_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 120;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 304:
		StringCopy(&Var2, "G_FMF_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 135;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 305:
		StringCopy(&Var2, "G_FMF_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 110;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 306:
		StringCopy(&Var2, "G_FMF_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 115;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 307:
		StringCopy(&Var2, "G_FMF_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 120;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 308:
		StringCopy(&Var2, "CLO_EXF_G_14_8", 16);
		iVar6 = 14;
		iVar7 = 8;
		iVar1 = 1490;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 309:
		StringCopy(&Var2, "CLO_EXF_G_14_9", 16);
		iVar6 = 14;
		iVar7 = 9;
		iVar1 = 1105;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 310:
		StringCopy(&Var2, "CLO_EXF_G_14_10", 16);
		iVar6 = 14;
		iVar7 = 10;
		iVar1 = 1170;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 311:
		StringCopy(&Var2, "G_FMF_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 312:
		StringCopy(&Var2, "G_FMF_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 313:
		StringCopy(&Var2, "G_FMF_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 314:
		StringCopy(&Var2, "G_FMF_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 315:
		StringCopy(&Var2, "G_FMF_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 316:
		StringCopy(&Var2, "G_FMF_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 317:
		StringCopy(&Var2, "G_FMF_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 318:
		StringCopy(&Var2, "G_FMF_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 319:
		StringCopy(&Var2, "W_FMF_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 320:
		StringCopy(&Var2, "W_FMF_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 321:
		StringCopy(&Var2, "W_FMF_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 322:
		StringCopy(&Var2, "W_FMF_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 323:
		StringCopy(&Var2, "W_FMF_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 825;
		iVar8 = 6;
		iVar11 = 4;
		break;

	case 324:
		StringCopy(&Var2, "W_FMF_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 325:
		StringCopy(&Var2, "W_FMF_1_1", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 326:
		StringCopy(&Var2, "W_FMF_1_2", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;
	}
	if (iVar11 == 1) {
		iVar12 = iParam0 - 10;
		if (iVar12 >= 0 && iVar12 < 121) {
			if (iVar12 > 8) {
				iVar12--;
			}
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2043[iVar12] * Global_279980.f_26);
		}
	}
	else if (iVar11 == 2) {
		iVar13 = iParam0 - 131;
		if (iVar13 >= 0 && iVar13 < 24) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2164[iVar13] * Global_279980.f_27);
		}
	}
	else if (iVar11 == 3) {
		iVar14 = iParam0 - 155;
		if (iVar14 >= 0 && iVar14 < 128) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2189[iVar14] * Global_279980.f_56);
		}
	}
	else if (iVar11 == 4) {
		iVar15 = iParam0 - 319;
		if (iVar15 >= 0 && iVar15 < 10) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2318[iVar15] * Global_279980.f_28);
		}
	}
	if (iParam0 >= 327) {
		Global_69523[0 /*14*/].f_5 = 4;
		func_24(iVar10, iParam0, 327);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, -1757550583, 1)) {
				Global_69523[0 /*14*/].f_7 =
					system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_26);
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, 97230661, 1)) {
				Global_69523[0 /*14*/].f_7 =
					system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_56);
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, 1147826474, 1)) {
				Global_69523[0 /*14*/].f_7 =
					system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_28);
			}
		}
	}
	else {
		func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

// Position - 0x40A32
void func_234(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "D_FMM_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 0;
		break;

	case 1:
		StringCopy(&Var2, "D_FMM_2_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 2:
		StringCopy(&Var2, "D_FMM_1_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 5000;
		break;

	case 3:
		StringCopy(&Var2, "D_FMM_2_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 4:
		StringCopy(&Var2, "D_FMM_1_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 5000;
		break;

	case 5:
		StringCopy(&Var2, "D_FMM_2_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 4;
		func_24(iVar10, iParam0, 6);
		return;
	}
	func_13(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x40B3B
void func_235(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 0;
		break;

	case 1:
		iVar6 = 1;
		iVar7 = 0;
		if (Global_262145.f_4140 != -1) {
			iVar1 = Global_262145.f_4140;
		}
		else {
			iVar1 = 310;
		}
		break;

	case 2:
		iVar6 = 1;
		iVar7 = 1;
		if (Global_262145.f_4141 != -1) {
			iVar1 = Global_262145.f_4141;
		}
		else {
			iVar1 = 125;
		}
		break;

	case 3:
		iVar6 = 1;
		iVar7 = 2;
		if (Global_262145.f_4142 != -1) {
			iVar1 = Global_262145.f_4142;
		}
		else {
			iVar1 = 145;
		}
		break;

	case 4:
		iVar6 = 1;
		iVar7 = 3;
		if (Global_262145.f_4143 != -1) {
			iVar1 = Global_262145.f_4143;
		}
		else {
			iVar1 = 130;
		}
		break;

	case 5:
		iVar6 = 1;
		iVar7 = 4;
		if (Global_262145.f_4144 != -1) {
			iVar1 = Global_262145.f_4144;
		}
		else {
			iVar1 = 265;
		}
		break;

	case 6:
		iVar6 = 1;
		iVar7 = 5;
		if (Global_262145.f_4145 != -1) {
			iVar1 = Global_262145.f_4145;
		}
		else {
			iVar1 = 280;
		}
		break;

	case 7:
		iVar6 = 2;
		iVar7 = 0;
		if (Global_262145.f_4146 != -1) {
			iVar1 = Global_262145.f_4146;
		}
		else {
			iVar1 = 295;
		}
		break;

	case 8:
		iVar6 = 2;
		iVar7 = 1;
		if (Global_262145.f_4147 != -1) {
		}
