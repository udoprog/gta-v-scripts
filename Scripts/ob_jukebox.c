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
var uLocal_21 = 0;
var uLocal_22 = 0;
float fLocal_23 = 0f;
float fLocal_24 = 0f;
float fLocal_25 = 0f;
var uLocal_26 = 0;
var uLocal_27 = 0;
int iLocal_28 = 0;
float fLocal_29 = 0f;
var uLocal_30 = 0;
var uLocal_31 = 0;
var uLocal_32 = 0;
float fLocal_33 = 0f;
float fLocal_34 = 0f;
var uLocal_35 = 0;
var uLocal_36 = 0;
var uLocal_37 = 0;
var uLocal_38 = 0;
var uLocal_39 = 0;
var uLocal_40 = 0;
int iLocal_41 = 0;
int iLocal_42 = 0;
int iLocal_43 = 0;
int iLocal_44 = 0;
var uLocal_45 = 0;
var uLocal_46 = 0;
var uLocal_47 = 0;
var uLocal_48 = 0;
var uLocal_49 = 0;
var uLocal_50 = 0;
var uLocal_51 = 0;
var uLocal_52 = 0;
var uLocal_53 = 0;
var uLocal_54 = 0;
var uLocal_55 = 0;
var uLocal_56 = 0;
var uLocal_57 = 10;
var uLocal_58 = 0;
var uLocal_59 = 0;
var uLocal_60 = 0;
var uLocal_61 = 0;
var uLocal_62 = 0;
var uLocal_63 = 0;
var uLocal_64 = 0;
var uLocal_65 = 0;
var uLocal_66 = 0;
var uLocal_67 = 0;
var uLocal_68 = 2;
var uLocal_69 = 0;
var uLocal_70 = 0;
var uLocal_71 = 8;
var uLocal_72 = 0;
var uLocal_73 = 0;
var uLocal_74 = 0;
var uLocal_75 = 0;
var uLocal_76 = 0;
var uLocal_77 = 0;
var uLocal_78 = 0;
var uLocal_79 = 0;
var uLocal_80 = 8;
var uLocal_81 = 0;
var uLocal_82 = 0;
var uLocal_83 = 0;
var uLocal_84 = 0;
var uLocal_85 = 0;
var uLocal_86 = 0;
var uLocal_87 = 0;
var uLocal_88 = 0;
var uLocal_89 = 0;
float fLocal_90 = 0f;
var uLocal_91 = 0;
var uLocal_92 = 0;
float fLocal_93 = 0f;
float fLocal_94 = 0f;
float fLocal_95 = 0f;
float fLocal_96 = 0f;
float fLocal_97 = 0f;
var uLocal_98 = 0;
var uLocal_99 = 0;
int iLocal_100 = 0;
int iLocal_101 = 0;
int iLocal_102 = 0;
int iLocal_103 = 0;
int iLocal_104 = 0;
int iLocal_105 = 0;
int iLocal_106 = 0;
int *iLocal_107 = NULL;
int iLocal_108 = 0;
int iLocal_109 = 0;
int iLocal_110 = 0;
int iLocal_111 = 0;
int iLocal_112 = 0;
int iLocal_113 = 0;
char *sLocal_114 = NULL;
int iLocal_115 = 0;
int iLocal_116 = 0;
var *uLocal_117 = NULL;
var uLocal_118 = 0;
var *uLocal_119 = NULL;
var uLocal_120 = 0;
var *uLocal_121 = NULL;
var uLocal_122 = 0;
vector3 vLocal_123 = {0f, 0f, 0f};
vector3 vLocal_126 = {0f, 0f, 0f};
vector3 vLocal_129 = {0f, 0f, 0f};
struct<4> Local_132 = {
	1, -1, -1, 0
};
struct<2> Local_136[32];
#pragma endregion //}

void __EntryFunction__() {
	struct<13> Var0;

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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	fLocal_90 = 0.05f + 0.275f - 0.01f;
	fLocal_93 = -0.05f;
	fLocal_94 = 0.92f;
	fLocal_95 = 1.94f;
	fLocal_96 = 2.99f;
	fLocal_97 = 3.7f;
	iLocal_103 = -1;
	iLocal_105 = -1;
	iLocal_107 = -1;
	sLocal_114 = "anim@amb@clubhouse@jukebox@";
	if (script::_get_number_of_instances_of_script_with_name_hash(gameplay::get_hash_key("ob_jukebox")) > 1) {
		func_165(0);
	}
	iLocal_105 = Global_1591201[player::player_id() /*602*/].f_258.f_15;
	func_164();
	func_157();
	if (player::has_force_cleanup_occurred(3) || Global_2494199.f_1714) {
		if (Global_2494199.f_1714) {
		}
		func_165(0);
	}
	func_156(player::player_id(), &Var0);
	if (func_155(Var0)) {
		if (network::network_is_gamer_in_my_session(&Var0)) {
			iLocal_101 = network::network_get_player_from_gamer_handle(&Var0);
		}
	}
	if (iLocal_101 == func_154()) {
		func_165(0);
	}
	if (network::network_is_host_of_this_script()) {
		if (Global_1591201[iLocal_101 /*602*/].f_258.f_208 != 4) {
			func_152(Global_1591201[iLocal_101 /*602*/].f_258.f_208);
			func_150(1);
			Local_132 = 1;
			Local_132.f_2 = iLocal_102;
			func_149();
		}
		else {
			func_150(0);
			Local_132 = 0;
		}
	}
	else {
		func_152(Local_132.f_2);
		func_150(func_148());
	}
	while (true) {
		func_164();
		if (iLocal_100 != 0 && !func_147(vLocal_129, 0f, 0f, 0f, 0)) {
			if (network::network_is_host_of_this_script()) {
				func_146();
			}
			func_20();
			func_18();
			func_5();
		}
		else if (iLocal_105 != -1 && iLocal_105 <= 115) {
			vLocal_123 = {func_1()};
			if (gameplay::get_frame_count() % 4 == 0) {
			}
			iLocal_100 = object::get_closest_object_of_type(vLocal_123, 2f, 598033448, 1, 0, 0);
			if (entity::does_entity_exist(iLocal_100)) {
				vLocal_126 = {entity::get_entity_coords(iLocal_100, 1) -
							  entity::get_entity_forward_vector(iLocal_100) * FtoV(0.6f)};
				vLocal_126.z += 0.5f;
				vLocal_129 = {entity::get_offset_from_entity_in_world_coords(iLocal_100, 0f, -0.12f, -0.0315f)};
			}
		}
		else {
			func_165(0);
		}
		system::wait(0);
	}
}

// Position - 0x25C
Vector3 func_1() {
	if (func_4(iLocal_105, -1)) {
		return func_2(iLocal_105);
	}
	return 0f, 0f, 0f;
}

// Position - 0x27A
Vector3 func_2(int iParam0) {
	if (func_3(iParam0) == 97) {
		return 1001.093f, -3171.051f, -35.0421f;
	}
	else if (func_3(iParam0) == 91) {
		return 1122.505f, -3152.994f, -38.0211f;
	}
	return 0f, 0f, 0f;
}

// Position - 0x2C2
int func_3(int iParam0) {
	switch (iParam0) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7: return 1;

	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 69:
	case 68:
	case 66:
	case 67: return 8;

	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 70:
	case 71:
	case 72: return 17;

	case 61:
	case 62:
	case 63:
	case 64:
	case 65: return 61;

	case 73:
	case 74:
	case 75:
	case 76: return 73;

	case 77:
	case 78:
	case 79:
	case 80:
	case 81:
	case 82: return 77;

	case 83:
	case 84:
	case 85: return 83;

	case 86: return 86;

	case 87:
	case 88:
	case 89:
	case 90: return 88;

	case 91:
	case 92:
	case 93:
	case 94:
	case 95:
	case 96: return 91;

	case 97:
	case 98:
	case 99:
	case 100:
	case 101:
	case 102: return 97;

	case 103:
	case 106:
	case 109:
	case 112:
	case 104:
	case 107:
	case 110:
	case 113:
	case 105:
	case 108:
	case 111:
	case 114: return 109;
	}
	return -1;
}

// Position - 0x4FF
bool func_4(int iParam0, int iParam1) {
	if (iParam1 == -1) {
		switch (iParam0) {
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102: return true;
		}
	}
	else if (iParam1 == 91) {
		switch (iParam0) {
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96: return true;
		}
	}
	else if (iParam1 == 97) {
		switch (iParam0) {
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102: return true;
		}
	}
	return false;
}

// Position - 0x5DC
void func_5() {
	if (iLocal_101 == player::player_id() && func_148()) {
		if (!func_17(&uLocal_121)) {
			func_16(&uLocal_121, 0, 0);
		}
		else if (func_15(&uLocal_121, 180000, 0)) {
			func_7(iLocal_102);
			func_6(&uLocal_121, 0, 0);
		}
	}
}

// Position - 0x628
void func_6(var *uParam0, int iParam1, int iParam2) {
	if (network::network_is_game_in_progress() && !iParam1) {
		if (!iParam2) {
			*uParam0 = network::get_network_time();
		}
		else {
			*uParam0 = network::_0x89023FBBF9200E9F();
		}
	}
	else {
		*uParam0 = gameplay::get_game_timer();
	}
	uParam0->f_1 = 1;
}

// Position - 0x665
void func_7(int iParam0) {
	int iVar0;
	int iVar1;

	if (iParam0 == 4) {
		return;
	}
	iVar0 = func_13(func_14(iParam0), -1, 0);
	iVar1 = network::_get_posix_time() - iLocal_111;
	func_10(func_14(iParam0), iVar0 + iVar1, -1, 1, 0);
	if (iLocal_112 < iVar0 + iVar1) {
		func_8(func_9());
	}
	iLocal_111 = network::_get_posix_time();
}

// Position - 0x6B7
void func_8(int iParam0) { Global_1591201[player::player_id() /*602*/].f_258.f_209 = iParam0; }

// Position - 0x6D1
int func_9() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 < 4) {
		iVar3 = func_13(func_14(iVar0), -1, 0);
		if (iVar3 > iVar2) {
			iVar2 = iVar3;
			iVar1 = iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

// Position - 0x70A
void func_10(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam4) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_11(iParam2)];
	if (iVar0 != 0) {
		stats::stat_set_int(iVar0, iParam1, iParam3);
	}
}

// Position - 0x73A
int func_11(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_12();
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

// Position - 0x76E
var func_12() { return Global_1312735; }

// Position - 0x77A
int func_13(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_11(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x7AC
int func_14(int iParam0) {
	switch (iParam0) {
	case 0: return 6002;

	case 1: return 6003;

	case 2: return 6004;

	case 3: return 6005;

	default:
	}
	return 6002;
}

// Position - 0x7EE
bool func_15(var *uParam0, int iParam1, int iParam2) {
	if (iParam1 == -1) {
		return true;
	}
	func_16(uParam0, iParam2, 0);
	if (network::network_is_game_in_progress() && !iParam2) {
		if (gameplay::absi(network::get_time_difference(network::get_network_time(), *uParam0)) >= iParam1) {
			return true;
		}
	}
	else if (gameplay::absi(network::get_time_difference(gameplay::get_game_timer(), *uParam0)) >= iParam1) {
		return true;
	}
	return false;
}

// Position - 0x84C
void func_16(var *uParam0, int iParam1, int iParam2) {
	if (uParam0->f_1 == 0) {
		if (network::network_is_game_in_progress() && !iParam1) {
			if (!iParam2) {
				*uParam0 = network::get_network_time();
			}
			else {
				*uParam0 = network::_0x89023FBBF9200E9F();
			}
		}
		else {
			*uParam0 = gameplay::get_game_timer();
		}
		uParam0->f_1 = 1;
	}
}

// Position - 0x891
bool func_17(var *uParam0) { return uParam0->f_1; }

// Position - 0x89D
void func_18() {
	int iVar0;

	iVar0 = func_148();
	if (Local_132.f_2 != iLocal_102) {
		func_152(Local_132.f_2);
		if (iLocal_101 == player::player_id() && Local_132.f_3) {
			func_19(9355, iLocal_102, -1, 1);
			Global_1591201[iLocal_101 /*602*/].f_258.f_208 = iLocal_102;
		}
	}
	if (gameplay::is_bit_set(iLocal_110, 6) != iVar0) {
		func_150(iVar0);
		if (iLocal_101 == player::player_id() && Local_132.f_3 && !iVar0) {
			func_19(9355, 4, -1, 1);
			Global_1591201[iLocal_101 /*602*/].f_258.f_208 = 4;
		}
	}
}

// Position - 0x932
var func_19(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	var uVar2;

	if (iParam2 == -1) {
		iParam2 = func_12();
	}
	if (iParam1 < 0) {
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457) {
		iVar0 = stats::_get_pstat_int_hash(iParam0 - 384, 0, 1, iParam2);
		iVar1 = iParam0 - 384 - stats::_0x94F12ABF9C79E339(iParam0 - 384) * 8 * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513) {
		iVar0 = stats::_get_pstat_int_hash(iParam0 - 457, 1, 1, iParam2);
		iVar1 = iParam0 - 457 - stats::_0x94F12ABF9C79E339(iParam0 - 457) * 8 * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305) {
		iVar0 = stats::_get_pstat_int_hash(iParam0 - 1281, 0, 0, 0);
		iVar1 = iParam0 - 1281 - stats::_0x94F12ABF9C79E339(iParam0 - 1281) * 8 * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361) {
		iVar0 = stats::_get_pstat_int_hash(iParam0 - 1305, 1, 0, 0);
		iVar1 = iParam0 - 1305 - stats::_0x94F12ABF9C79E339(iParam0 - 1305) * 8 * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919) {
		iVar0 = stats::_get_tupstat_int_hash(iParam0 - 1393, 0, 1, iParam2);
		iVar1 = iParam0 - 1393 - stats::_0x94F12ABF9C79E339(iParam0 - 1393) * 8 * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393) {
		iVar0 = stats::_get_tupstat_int_hash(iParam0 - 1361, 0, 0, 0);
		iVar1 = iParam0 - 1361 - stats::_0x94F12ABF9C79E339(iParam0 - 1361) * 8 * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 3879, 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = iParam0 - 3879 - stats::_0x94F12ABF9C79E339(iParam0 - 3879) * 8 * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 4143, 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = iParam0 - 4143 - stats::_0x94F12ABF9C79E339(iParam0 - 4143) * 8 * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 4399, 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = iParam0 - 4399 - stats::_0x94F12ABF9C79E339(iParam0 - 4399) * 8 * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 6413, 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = iParam0 - 6413 - stats::_0x94F12ABF9C79E339(iParam0 - 6413) * 8 * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 7262, 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = iParam0 - 7262 - stats::_0x94F12ABF9C79E339(iParam0 - 7262) * 8 * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 7681, 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = iParam0 - 7681 - stats::_0x94F12ABF9C79E339(iParam0 - 7681) * 8 * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 9553, 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = iParam0 - 9553 - stats::_0x94F12ABF9C79E339(iParam0 - 9553) * 8 * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 7641, 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = iParam0 - 7641 - stats::_0x94F12ABF9C79E339(iParam0 - 7641) * 8 * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 7313, 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = iParam0 - 7313 - stats::_0x94F12ABF9C79E339(iParam0 - 7313) * 8 * 8;
	}
	uVar2 = stats::stat_set_masked_int(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

// Position - 0xD1D
void func_20() {
	int iVar0;

	switch (iLocal_116) {
	case 0:
		if (func_143() && func_142()) {
			func_140();
			if (iLocal_107 == -1) {
				func_139(&iLocal_107, 4, "JBOX_INTERACT", 0, 0, 0, 0);
			}
			else if (iLocal_107 != -1 && func_138(iLocal_107, 1) && !ai::is_ped_running(player::player_ped_id())) {
				func_137(2);
				func_135(&iLocal_107);
				gameplay::set_bit(&Local_136[player::player_id() /*2*/], 0);
				gameplay::set_bit(&Global_2482201, 4);
			}
			gameplay::set_bit(&Global_2482201, 3);
		}
		else if (iLocal_107 != -1) {
			func_135(&iLocal_107);
			gameplay::clear_bit(&Global_2482201, 3);
		}
		else if (!func_142() && func_143()) {
			func_134("JBOX_NO_MONEY");
			gameplay::clear_bit(&Global_2482201, 3);
		}
		else {
			func_140();
			gameplay::clear_bit(&Global_2482201, 3);
		}
		break;

	case 2:
		if (Local_132.f_1 == player::player_id() && func_132()) {
			iLocal_108 = 0;
			func_137(1);
			gameplay::clear_bit(&Local_136[player::player_id() /*2*/], 0);
			gameplay::set_bit(&Local_136[player::player_id() /*2*/], 1);
			func_127(player::player_id(), 0, 256);
			func_126(&uLocal_119);
		}
		else if (Local_132.f_1 != -1 || !func_132()) {
			func_137(0);
			gameplay::clear_bit(&Local_136[player::player_id() /*2*/], 0);
			gameplay::clear_bit(&Global_2482201, 4);
		}
		break;

	case 1:
		if (func_120()) {
			iLocal_104 = 0;
			gameplay::set_bit(&iLocal_110, 1);
			func_137(3);
			if (networkcash::network_get_vc_wallet_balance(-1) < 1) {
				iLocal_115 = 1;
			}
		}
		break;

	case 3:
		if (gameplay::is_bit_set(iLocal_110, 4)) {
			if (func_119()) {
				gameplay::clear_bit(&iLocal_110, 4);
			}
		}
		func_37();
		break;

	case 4:
		if (gameplay::is_bit_set(iLocal_110, 3)) {
			gameplay::clear_bit(&iLocal_110, 3);
			func_34(1, -1);
		}
		iVar0 = network::_network_unlink_networked_synchronised_scene(iLocal_109);
		if (!entity::is_entity_playing_anim(player::player_ped_id(), sLocal_114, "EXIT", 3)) {
			func_27(gameplay::is_bit_set(iLocal_110, 5));
			if (iLocal_103 != -1) {
				if (entity::is_entity_playing_anim(player::player_ped_id(), sLocal_114, "INSERT_COINS", 3) &&
						ped::get_synchronized_scene_phase(iVar0) >= 0.82f ||
					!gameplay::is_bit_set(iLocal_110, 5)) {
					func_26(iLocal_103);
				}
			}
		}
		else if (ped::get_synchronized_scene_phase(iVar0) >= 0.96f) {
			gameplay::clear_bit(&iLocal_110, 5);
			gameplay::clear_bit(&iLocal_110, 4);
			gameplay::clear_bit(&Local_136[player::player_id() /*2*/], 1);
			gameplay::clear_bit(&Local_136[player::player_id() /*2*/], 2);
			func_127(player::player_id(), 1, 0);
			gameplay::clear_bit(&Global_2482201, 4);
			iLocal_115 = 0;
			iLocal_113 = Global_1591201[iLocal_101 /*602*/].f_258.f_208;
			unk_0x8989CBD7B4E82534(func_24(func_25()), func_23(func_25()), func_22(), func_21(), 4, iLocal_113, 0);
			func_137(0);
		}
		break;
	}
}

// Position - 0xFD2
int func_21() {
	if (Global_1763183.f_3 != 0) {
		return Global_1763183.f_3;
	}
	return -1;
}

// Position - 0xFEE
int func_22() {
	if (Global_1763183.f_2 != 0) {
		return Global_1763183.f_2;
	}
	return -1;
}

// Position - 0x100A
int func_23(int iParam0) {
	if (iParam0 == func_154()) {
		return -1;
	}
	return Global_1619421[iParam0 /*390*/].f_11.f_7[1];
}

// Position - 0x102F
int func_24(int iParam0) {
	if (iParam0 == func_154()) {
		return -1;
	}
	return Global_1619421[iParam0 /*390*/].f_11.f_7[0];
}

// Position - 0x1054
int func_25() { return Global_1619421[player::player_id() /*390*/].f_11; }

// Position - 0x1069
void func_26(int iParam0) {
	Local_136[player::player_id() /*2*/].f_1 = iParam0;
	gameplay::set_bit(&Local_136[player::player_id() /*2*/], 2);
}

// Position - 0x108A
int func_27(bool bParam0) {
	if (!bParam0) {
		iLocal_108 = 1;
	}
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		switch (iLocal_108) {
		case 0:
			if (func_33("INSERT_COINS", 1, 0)) {
				iLocal_108 = 1;
			}
			break;

		case 1:
			if (func_33("EXIT", !bParam0, 0)) {
				streaming::remove_anim_dict(sLocal_114);
				iLocal_108 = 0;
				return 1;
			}
			break;
		}
	}
	func_28();
	return 0;
}

// Position - 0x10F3
void func_28() {
	if (Global_14443.f_1 != 1) {
		if (func_32(0)) {
			func_29(0);
		}
		gameplay::set_bit(&Global_2314, 2);
	}
}

// Position - 0x111B
void func_29(int iParam0) {
	if (Global_14604) {
		func_31(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
		gameplay::set_bit(&Global_2314, 16);
	}
	if (audio::is_mobile_phone_call_ongoing()) {
		audio::stop_scripted_conversation(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_2313, 30);
	}
	else {
		gameplay::clear_bit(&Global_2313, 30);
	}
	if (!func_30()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x118B
int func_30() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x11B2
void func_31(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_32(0)) {
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

// Position - 0x1226
bool func_32(int iParam0) {
	if (iParam0 == 1) {
		if (Global_14443.f_1 > 3) {
			if (gameplay::is_bit_set(Global_2313, 14)) {
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

// Position - 0x1280
bool func_33(char *sParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = network::_network_unlink_networked_synchronised_scene(iLocal_109);
	streaming::request_anim_dict(sLocal_114);
	if (streaming::has_anim_dict_loaded(sLocal_114)) {
		if (!ped::is_synchronized_scene_running(iVar0) || ped::get_synchronized_scene_phase(iVar0) >= 0.96f ||
			iParam1) {
			if (ped::is_synchronized_scene_running(iLocal_109)) {
				ped::detach_synchronized_scene(iLocal_109);
				iLocal_109 = -1;
			}
			iLocal_109 = network::network_create_synchronised_scene(
				vLocal_129, entity::get_entity_rotation(iLocal_100, 2), 2, 0, iParam2, 1065353216, 0, 1065353216);
			network::network_add_ped_to_synchronised_scene(player::player_ped_id(), iLocal_109, sLocal_114, sParam0, 4f,
														   -2f, 5, 0, 1148846080, 0);
			network::network_start_synchronised_scene(iLocal_109);
			return true;
		}
	}
	return false;
}

// Position - 0x131C
void func_34(int iParam0, int iParam1) {
	int iVar0;

	if (!func_36(&iVar0, 0, iParam1)) {
		return;
	}
	if (Global_17290.f_7899) {
		ui::reset_hud_component_values(15);
		Global_17290.f_7899 = 0;
	}
	ui::_0x55598D21339CB998(0f);
	if (Global_17290.f_5498[iVar0]) {
		ui::clear_additional_text(9, 0);
		Global_17290.f_5498[iVar0] = 0;
	}
	if (Global_17290.f_5484[iVar0]) {
		graphics::set_streamed_texture_dict_as_no_longer_needed("CommonMenu");
		Global_17290.f_5484[iVar0] = 0;
	}
	if (Global_17290.f_5491[iVar0]) {
		graphics::set_streamed_texture_dict_as_no_longer_needed("MPShopSale");
		Global_17290.f_5491[iVar0] = 0;
	}
	if (iParam0) {
		func_35(&Global_17290.f_5530[iVar0 /*10*/]);
		Global_17290.f_5591[iVar0] = 0;
	}
	else {
		Global_17290.f_5591[iVar0] = 0;
	}
}

// Position - 0x13D8
void func_35(int *iParam0) {
	if (uParam0->f_9 != 0) {
		if (graphics::has_scaleform_movie_loaded(*uParam0)) {
			graphics::set_scaleform_movie_as_no_longer_needed(uParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

// Position - 0x1401
int func_36(int *iParam0, int iParam1, int iParam2) {
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;

	if (iParam2 == -1) {
		if (network::network_is_game_in_progress() && network::network_get_this_script_is_network_script()) {
			iParam2 = network::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, script::get_this_script_name(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = gameplay::get_hash_key(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6) {
		if (Global_17290.f_5591[iVar17] == iVar16) {
			*iParam0 = iVar17;
			return 1;
		}
		else if (Global_17290.f_5591[iVar17] == 0) {
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (iParam1) {
		if (iVar18 != -1) {
			Global_17290.f_5591[iVar18] = iVar16;
			*iParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

// Position - 0x149E
void func_37() {
	if (!func_118()) {
		func_92();
		if (func_90("SNK_MNU", -1, 1)) {
			if (gameplay::is_bit_set(iLocal_110, 1)) {
				func_76();
				gameplay::clear_bit(&iLocal_110, 1);
			}
			else {
				func_75(iLocal_104, 1, 1);
			}
			func_70();
			func_39(1, -1, 1, 0, 1, -1082130432, 0, 0);
			func_38();
			gameplay::set_bit(&iLocal_110, 3);
		}
	}
}

// Position - 0x14FD
void func_38() {
	ui::hide_hud_and_radar_this_frame();
	ui::hide_scripted_hud_component_this_frame(19);
}

// Position - 0x150F
void func_39(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7) {
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
	bool bVar31;
	bool bVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float *fVar36;
	vector3 vVar37;
	bool bVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	int *iVar46;
	int *iVar47;
	int *iVar48;
	float fVar49;
	int iVar50;
	int iVar51;
	bool bVar52;
	int iVar53;
	int iVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	int iVar59;
	int iVar60;
	float fVar61;
	float fVar62;
	float fVar63;
	char cVar64[64];
	char cVar80[64];
	float fVar96;
	int iVar97;
	float fVar98;
	float fVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;

	if (!func_36(&iVar0, 0, iParam1)) {
		return;
	}
	if (iVar0 == -1) {
	}
	if (!func_67(0, iParam6)) {
		return;
	}
	graphics::_set_screen_draw_position(76, 84);
	graphics::_screen_draw_position_ratio(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_17290) {
		if (func_65(29, 1, 1, &fVar35, &fVar36, iParam7)) {
			fVar56 = fVar36;
			fVar57 = fVar35;
			fVar56 += 0f;
		}
		else {
			Global_17290 = 0;
		}
	}
	if (gameplay::get_hash_key(&Global_17290.f_1) == gameplay::get_hash_key("HIDE")) {
		fVar58 = Global_17288;
	}
	else {
		fVar58 = Global_17288 + fVar56 + 0.034722f + 0f;
	}
	if (fParam5 == -1f) {
		fParam5 = Global_17289;
	}
	fVar61 = 1f;
	if (iParam7) {
		graphics::_get_active_screen_resolution(&iVar59, &iVar60);
		fVar62 = graphics::_get_aspect_ratio(0);
		if (func_64()) {
			iVar59 = system::round(system::to_float(iVar60) * fVar62);
		}
		fVar63 = system::to_float(iVar59) / system::to_float(iVar60);
		fVar61 = fVar63 / fVar62;
		if (func_64()) {
			fVar61 = 1f;
		}
		iVar59 = system::round(system::to_float(iVar59) / fVar61);
		iVar60 = system::round(system::to_float(iVar60) / fVar61);
	}
	else {
		graphics::get_screen_resolution(&iVar59, &iVar60);
	}
	iVar5 = 0;
	while (iVar5 < 2) {
		if (iVar5 == 1 && Global_17290.f_5598) {
			if (gameplay::get_hash_key(&Global_17290.f_1) == gameplay::get_hash_key("HIDE")) {
				fVar49 = Global_17288;
			}
			else {
				if (Global_17290) {
					StringCopy(&cVar64, func_63(29), 64);
					StringCopy(&cVar80, func_60(29, 1), 64);
					if (gameplay::get_hash_key(&Global_17290.f_6703[29 /*16*/]) == -1487683087) {
						func_59(Global_17287, Global_17288, fParam5, fVar56 - 0f, 0, 0, 0, 255);
						graphics::draw_sprite(&cVar64, &cVar80, Global_17287 + fParam5 * 0.5f,
											  Global_17288 + (fVar56 - 0f) * 0.5f, fVar57, fVar56 - 0f, 0f, 255, 255,
											  255, 255, 0);
					}
					else {
						graphics::draw_sprite(&cVar64, &cVar80, Global_17287 + fParam5 * 0.5f,
											  Global_17288 + (fVar56 - 0f) * 0.5f, fParam5, fVar56 - 0f, 0f, 255, 255,
											  255, 255, 0);
					}
				}
				if (Global_17290.f_7869) {
					iVar1 = Global_17290.f_7865;
					iVar2 = Global_17290.f_7866;
					iVar3 = Global_17290.f_7867;
					iVar4 = Global_17290.f_7868;
				}
				else {
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_59(Global_17287, Global_17288 + fVar56, fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = Global_17288 + fVar56 + 0.034722f + 0f;
				if (gameplay::get_hash_key(&Global_17290.f_1) != 0) {
					func_58();
					ui::begin_text_command_display_text(&Global_17290.f_1);
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17290.f_68) {
						if (Global_17290.f_5[iVar14] == 2) {
							ui::add_text_component_integer(Global_17290.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17290.f_5[iVar14] == 3) {
							ui::add_text_component_float(Global_17290.f_14[iVar16], Global_17290.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17290.f_5[iVar14] == 1) {
							ui::add_text_component_substring_text_label(&Global_17290.f_22[iVar17 /*4*/]);
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 8) {
							ui::add_text_component_substring_text_label(&Global_17290.f_22[iVar17 /*4*/]);
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 5) {
							ui::add_text_component_substring_player_name(&Global_17290.f_35[iVar18 /*16*/]);
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 6) {
							ui::add_text_component_substring_text_label(&Global_17290.f_35[iVar18 /*16*/]);
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 7) {
							ui::add_text_component_substring_player_name(&Global_17290.f_35[iVar18 /*16*/]);
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 9) {
							ui::add_text_component_substring_player_name(&Global_17290.f_35[iVar18 /*16*/]);
							iVar18++;
						}
						iVar14++;
					}
					ui::end_text_command_display_text(Global_17287 + 0.00390625f, Global_17288 + fVar56 + 0.00416664f,
													  0);
				}
				if (Global_17290.f_5601 > Global_17290.f_5095) {
					if (Global_17290.f_5604 != 0) {
						func_58();
						func_56(Global_17287 + fParam5 - 0.00390625f -
									func_57("CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603),
								Global_17288 + fVar56 + 0.00416664f, "CM_ITEM_COUNT", Global_17290.f_5604,
								Global_17290.f_5603);
					}
				}
			}
			iVar6 = Global_17290.f_5605;
			iVar9 = 0;
			fVar96 = fVar49;
			if (Global_17290.f_7879) {
				iVar1 = Global_17290.f_7875;
				iVar2 = Global_17290.f_7876;
				iVar3 = Global_17290.f_7877;
				iVar4 = Global_17290.f_7878;
			}
			else {
				ui::get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17290.f_5095 && iVar6 <= Global_17290.f_5088) {
				if (iVar6 >= 0) {
					if (Global_17290.f_5355[iVar6]) {
						if (Global_17290.f_5226[iVar6] && iVar6 != Global_17290.f_5605) {
							fVar49 += 0.00277776f;
						}
						fVar55 = 0.034722f;
						if (Global_17290.f_5612[iVar6] != 0f) {
							fVar55 = Global_17290.f_5612[iVar6];
						}
						fVar49 += fVar55;
						iVar9++;
					}
				}
				iVar6++;
			}
			if (iParam3) {
				if (iVar9 <= 1) {
					fVar55 = 0.034722f;
					fVar49 += fVar55;
					iVar9++;
					if (Global_17290.f_5088 <= 1) {
						Global_17290.f_5088++;
					}
					iVar53 = 1;
				}
			}
			graphics::draw_sprite("CommonMenu", "Gradient_Bgd", Global_17287 + fParam5 * 0.5f,
								  fVar96 + (fVar49 - fVar96) * 0.5f - 0.00138888f, fParam5, fVar49 - fVar96, 0f, 255,
								  255, 255, 255, 0);
			if (Global_17290.f_5601 > Global_17290.f_5095) {
				if (Global_17290.f_7884) {
					iVar1 = Global_17290.f_7880;
					iVar2 = Global_17290.f_7881;
					iVar3 = Global_17290.f_7882;
					iVar4 = Global_17290.f_7883;
				}
				else {
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_59(Global_17287, fVar49 + 0f, fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar37 = {graphics::get_texture_resolution("CommonMenu", "shop_arrows_upANDdown")};
				vVar37.x *= 0.5f / fVar61;
				vVar37.y *= 0.5f / fVar61;
				if (Global_17290.f_7897) {
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else {
					ui::get_hud_colour(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				graphics::draw_sprite("CommonMenu", "shop_arrows_upANDdown", Global_17287 + fParam5 * 0.5f,
									  fVar49 + 0f + 0.034722f * 0.5f, vVar37.x / 1280f * fVar61,
									  vVar37.y / 720f * fVar61, 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 += 0f + 0.034722f;
			}
			if (gameplay::get_hash_key(&Global_17290.f_4562) != 0 && Global_17290.f_4636 != -1) {
				fVar49 += 0.00277776f * 2f;
				fVar41 = Global_17287 + 0.0046875f;
				if (Global_17290.f_4638 != 0) {
					func_65(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, iParam7);
					fVar41 = Global_17287 + fVar35 + 0.00078125f * 4f - 0.00078125f * 1f;
				}
				func_55(fVar41);
				ui::_begin_text_command_line_count(&Global_17290.f_4562);
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632) {
					if (Global_17290.f_4566[iVar14] == 2) {
						ui::add_text_component_integer(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3) {
						ui::add_text_component_float(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1) {
						ui::add_text_component_substring_text_label(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6) {
						ui::add_text_component_substring_text_label(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = ui::_end_text_command_get_line_count(fVar41, fVar49 + 0.00277776f);
				ui::get_hud_colour(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_59(Global_17287, fVar49 - 0.00277776f, fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7889) {
					iVar1 = Global_17290.f_7885;
					iVar2 = Global_17290.f_7886;
					iVar3 = Global_17290.f_7887;
					iVar4 = Global_17290.f_7888;
				}
				else {
					ui::get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				graphics::draw_sprite("CommonMenu", "Gradient_Bgd", Global_17287 + fParam5 * 0.5f,
									  fVar49 +
										  (ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) +
										   0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1)) *
											  0.5f -
										  0.00138888f,
									  fParam5,
									  ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f +
										  0.00138888f * 5f * IntToFloat(iVar6 - 1),
									  0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_55(fVar41);
				ui::begin_text_command_display_text(&Global_17290.f_4562);
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632) {
					if (Global_17290.f_4566[iVar14] == 2) {
						ui::add_text_component_integer(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3) {
						ui::add_text_component_float(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1) {
						ui::add_text_component_substring_text_label(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6) {
						ui::add_text_component_substring_text_label(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 8) {
						ui::add_text_component_substring_text_label(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					iVar14++;
				}
				ui::end_text_command_display_text(fVar41, fVar49 + 0.00277776f, 0);
				if (Global_17290.f_4638 != 0) {
					func_65(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, iParam7);
					func_54(Global_17290.f_4638, 1, &iVar46, &iVar47, &iVar48);
					graphics::draw_sprite(func_63(Global_17290.f_4638), func_60(Global_17290.f_4638, 1),
										  Global_17287 + fVar35 * 0.5f + 0.00078125f * 2f,
										  fVar49 + fVar36 * 0.5f - 0.00138888f * 4f, fVar35, fVar36, 0f, iVar46, iVar47,
										  iVar48, 255, 0);
				}
				fVar49 += ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f +
						  0.00138888f * 5f * IntToFloat(iVar6 - 1);
				if (Global_17290.f_4636 > 0) {
					if (gameplay::get_game_timer() - Global_17290.f_4637 > Global_17290.f_4636) {
						StringCopy(&Global_17290.f_4562, "", 16);
						Global_17290.f_4636 = -1;
					}
				}
			}
			if (gameplay::get_hash_key(&Global_2593974.f_21) != 0 && Global_2593974.f_65 != -1) {
				fVar49 += 0.00277776f * 2f;
				fVar41 = Global_17287 + 0.0046875f;
				if (Global_2593974.f_67 != 0) {
					func_65(Global_2593974.f_67, 1, 1, &fVar35, &fVar36, iParam7);
					fVar41 = Global_17287 + fVar35 + 0.00078125f * 4f - 0.00078125f * 1f;
				}
				func_55(fVar41);
				ui::_begin_text_command_line_count(&Global_2593974.f_21);
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2593974.f_61) {
					if (Global_2593974.f_25[iVar14] == 2) {
						ui::add_text_component_integer(Global_2593974.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2593974.f_25[iVar14] == 3) {
						ui::add_text_component_float(Global_2593974.f_34[iVar16], Global_2593974.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2593974.f_25[iVar14] == 1) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 5) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 6) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 7) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 9) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 8) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = ui::_end_text_command_get_line_count(fVar41, fVar49 + 0.00277776f);
				ui::get_hud_colour(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_59(Global_17287, fVar49 - 0.00277776f, fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7889) {
					iVar1 = Global_17290.f_7885;
					iVar2 = Global_17290.f_7886;
					iVar3 = Global_17290.f_7887;
					iVar4 = Global_17290.f_7888;
				}
				else {
					ui::get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				graphics::draw_sprite("CommonMenu", "Gradient_Bgd", Global_17287 + fParam5 * 0.5f,
									  fVar49 +
										  (ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) +
										   0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1)) *
											  0.5f -
										  0.00138888f,
									  fParam5,
									  ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f +
										  0.00138888f * 5f * IntToFloat(iVar6 - 1),
									  0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_55(fVar41);
				ui::begin_text_command_display_text(&Global_2593974.f_21);
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2593974.f_61) {
					if (Global_2593974.f_25[iVar14] == 2) {
						ui::add_text_component_integer(Global_2593974.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2593974.f_25[iVar14] == 3) {
						ui::add_text_component_float(Global_2593974.f_34[iVar16], Global_2593974.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2593974.f_25[iVar14] == 1) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 8) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 5) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 6) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 7) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 9) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					iVar14++;
				}
				ui::end_text_command_display_text(fVar41, fVar49 + 0.00277776f, 0);
				if (Global_2593974.f_67 != 0) {
					func_65(Global_2593974.f_67, 1, 1, &fVar35, &fVar36, iParam7);
					func_54(Global_2593974.f_67, 1, &iVar46, &iVar47, &iVar48);
					graphics::draw_sprite(func_63(Global_2593974.f_67), func_60(Global_2593974.f_67, 1),
										  Global_17287 + fVar35 * 0.5f + 0.00078125f * 2f,
										  fVar49 + fVar36 * 0.5f - 0.00138888f * 4f, fVar35, fVar36, 0f, iVar46, iVar47,
										  iVar48, 255, 0);
				}
				fVar49 += ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f +
						  0.00138888f * 5f * IntToFloat(iVar6 - 1);
				if (Global_2593974.f_65 > 0) {
					if (gameplay::get_game_timer() - Global_2593974.f_66 > Global_2593974.f_65) {
						StringCopy(&Global_2593974.f_21, "", 16);
						Global_2593974.f_65 = -1;
					}
				}
			}
			func_47(iVar59, iParam1, 0, 0, 0, 0, iParam4, 1, 0);
			graphics::_set_screen_draw_position(76, 84);
			graphics::_screen_draw_position_ratio(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17290.f_5598) {
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar97 = Global_17290.f_5088;
			if (Global_17290.f_5599) {
				iVar97 = Global_17290.f_5602 - 1;
			}
			fVar98 = 0f;
			fVar99 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar97) {
				fVar55 = 0.034722f;
				if (Global_17290.f_5612[iVar6] != 0f) {
					fVar55 = Global_17290.f_5612[iVar6];
				}
				if (Global_17290.f_5599) {
					iVar6 = Global_17290.f_7520[iVar7];
				}
				else {
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17290.f_5605 && iVar9 < Global_17290.f_5095) {
					bVar32 = true;
					if (Global_17290.f_5606 == iVar6) {
						fVar99 = fVar98;
					}
					if (Global_17290.f_5226[iVar6]) {
						iVar12++;
					}
					fVar34 = fVar58 + fVar98 + 0.00277776f * IntToFloat(iVar12) + 0.00277776f;
				}
				Global_17290.f_5746[iVar6] = fVar34;
				fVar33 = Global_17287 + 0.0046875f;
				bVar40 = false;
				bVar31 = Global_17290.f_5606 == iVar6;
				if (bVar31 && iVar5 == 1 && bVar32) {
					iVar100 = 255;
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					if (Global_17290.f_7891) {
						ui::get_hud_colour(Global_17290.f_7890, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					else {
						ui::get_hud_colour(1, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					graphics::draw_sprite("CommonMenu", "Gradient_Nav", Global_17287 + fParam5 * 0.5f,
										  fVar58 + fVar99 + 0.00277776f * IntToFloat(iVar12) + fVar55 * 0.5f, fParam5,
										  fVar55, 0f, iVar100, iVar101, iVar102, iVar103, 0);
					Global_17290.f_5744 = fVar34;
				}
				if (iVar53 && iVar7 == iVar97) {
					func_45(bVar31, 1, 0, 0, 0, 0, 0);
					ui::begin_text_command_display_text("DFLT_MNU_OPT");
					ui::end_text_command_display_text(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else {
					iVar8 = 0;
					while (iVar8 < Global_17290.f_5096) {
						if (gameplay::is_bit_set(Global_17290.f_4959[iVar6], iVar8) ||
							Global_17290.f_4926[iVar8] == 5) {
							if (Global_17290.f_5599) {
								iVar19 = Global_17290.f_7536[iVar9 * Global_17290.f_5096 + iVar8];
								iVar20 = Global_17290.f_7577[iVar9 * Global_17290.f_5096 + iVar8];
								iVar21 = Global_17290.f_7618[iVar9 * Global_17290.f_5096 + iVar8];
								iVar22 = Global_17290.f_7659[iVar9 * Global_17290.f_5096 + iVar8];
								iVar23 = Global_17290.f_7700[iVar9 * Global_17290.f_5096 + iVar8];
							}
							else {
								Global_17290.f_7536[iVar9 * Global_17290.f_5096 + iVar8] = iVar19;
								Global_17290.f_7577[iVar9 * Global_17290.f_5096 + iVar8] = iVar20;
								Global_17290.f_7618[iVar9 * Global_17290.f_5096 + iVar8] = iVar21;
								Global_17290.f_7659[iVar9 * Global_17290.f_5096 + iVar8] = iVar22;
								Global_17290.f_7700[iVar9 * Global_17290.f_5096 + iVar8] = iVar23;
							}
							iVar104 = 0;
							iVar54 = 0;
							if (Global_17290.f_5878[0] != -1) {
								if (iVar6 * 5 + iVar8 == Global_17290.f_5875[0]) {
									iVar54 = 1;
									iVar104 = 0;
								}
							}
							if (Global_17290.f_5878[1] != -1) {
								if (iVar6 * 5 + iVar8 == Global_17290.f_5875[1]) {
									iVar54 = 1;
									iVar104 = 1;
								}
							}
							if (Global_17290.f_4932[iVar8] != -1f) {
								fVar33 = Global_17287 + 0.0046875f + Global_17290.f_4932[iVar8];
							}
							if (iVar8 < 4 && Global_17290.f_4932[iVar8 + 1] != -1f &&
								fVar33 < Global_17290.f_4932[iVar8 + 1]) {
								fVar45 = Global_17290.f_4932[iVar8 + 1] - fVar33;
							}
							else {
								fVar45 = Global_17287 + Global_17289 - 0.0046875f - fVar33;
							}
							if (Global_17290.f_4945[iVar8] && Global_17290.f_5741 && bVar31) {
								bVar52 = true;
							}
							else {
								bVar52 = false;
							}
							switch (Global_17290.f_4926[iVar8]) {
							case 0: break;

							case 1:
								iVar24 = iVar19;
								if (iVar5 == 1 && bVar32) {
									if (!Global_17290.f_5599) {
										fVar42 = 0f;
										fVar43 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
											iVar50 = 0;
											iVar51 = 0;
											iVar14 = 0;
											while (iVar14 < 4) {
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 ||
													Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8) {
													iVar51 = 1;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9) {
													iVar50 = 1;
												}
												iVar14++;
											}
											func_45(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24],
													iVar54, iVar104, iVar51, iVar50);
											ui::_begin_text_command_width(&Global_17290.f_73[iVar24 /*6*/]);
										}
										iVar14 = 0;
										while (iVar14 < 4) {
											if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1) {
												iVar25++;
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_text_label(
														&Global_17290.f_73[iVar24 + iVar25 /*6*/]);
												}
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8) {
												iVar25++;
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_text_label(
														&Global_17290.f_73[iVar24 + iVar25 /*6*/]);
												}
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_player_name(
														&Global_2453058[iVar23 + iVar29 /*16*/]);
												}
												iVar29++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_text_label(
														&Global_2453058[iVar23 + iVar29 /*16*/]);
												}
												iVar29++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_player_name(
														&Global_2453058[iVar23 + iVar29 /*16*/]);
												}
												iVar29++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_player_name(
														&Global_2453058[iVar23 + iVar29 /*16*/]);
												}
												iVar29++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_integer(
														Global_17290.f_3918[iVar20 + iVar26]);
												}
												iVar26++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_float(Global_17290.f_4175[iVar21 + iVar27],
																				 Global_17290.f_4304[iVar21 + iVar27]);
												}
												iVar27++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4) {
												iVar28++;
											}
											iVar14++;
										}
										if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
											fVar42 = ui::_end_text_command_get_width(1);
										}
										if (iVar28 > 0) {
											iVar14 = 0;
											while (iVar14 < iVar28) {
												if (func_65(Global_17290.f_4433[iVar22 + iVar14], bVar31, 0, &fVar35,
															&fVar36, iParam7)) {
													fVar43 += fVar35;
													if (iVar14 > 0) {
														fVar43 -= 0.00078125f * 4f;
													}
													if (Global_17290.f_4433[iVar22 + iVar14] == 2 ||
														Global_17290.f_4433[iVar22 + iVar14] == 48) {
														fVar43 -= 0.00078125f * 5f;
													}
												}
												iVar14++;
											}
										}
										fVar41 = 0f;
										if (Global_17290.f_4953[iVar8] == 2) {
											fVar41 += fVar45 - (fVar42 + fVar43) + 0.00078125f * 1f;
										}
										else if (Global_17290.f_4953[iVar8] == 0) {
											fVar41 += (fVar45 - fVar33) * 0.5f - (fVar42 + fVar43) * 0.5f;
										}
										Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8] = fVar41;
										Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8] = fVar42;
										Global_17290.f_7823[iVar9 * Global_17290.f_5096 + iVar8] = fVar43;
									}
									else {
										fVar41 = Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8];
										fVar42 = Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8];
										fVar43 = Global_17290.f_7823[iVar9 * Global_17290.f_5096 + iVar8];
									}
									if (bVar52) {
										if (func_65(26, 1, 0, &fVar35, &fVar36, iParam7)) {
											if (Global_17290.f_4953[iVar8] == 2) {
												fVar41 -= fVar35 * 2f;
											}
											fVar44 = fVar35 * 0.5f;
											if (func_65(26, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_54(26, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_63(26), func_60(26, 1),
																	  fVar33 + fVar41 + fVar44,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
										if (func_65(27, 1, 0, &fVar35, &fVar36, iParam7)) {
											fVar41 += fVar35;
											fVar44 = fVar35 * 0.5f;
											if (func_65(27, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_54(27, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_63(27), func_60(27, 1),
																	  fVar33 + fVar41 + fVar44 + fVar42 + fVar43,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar30 = 0;
									if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
										iVar50 = 0;
										iVar51 = 0;
										iVar14 = 0;
										while (iVar14 < 4) {
											if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 ||
												Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8) {
												iVar51 = 1;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9) {
												iVar50 = 1;
											}
											iVar14++;
										}
										func_45(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24],
												iVar54, 0, iVar51, iVar50);
										if (Global_17290.f_7895 && Global_17290.f_7896 == iVar6) {
											func_44(bVar31);
										}
										ui::begin_text_command_display_text(&Global_17290.f_73[iVar24 /*6*/]);
									}
									iVar14 = 0;
									while (iVar14 < 4) {
										if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1) {
											iVar25++;
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_text_label(
													&Global_17290.f_73[iVar24 + iVar25 /*6*/]);
											}
											iVar30 = 1;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8) {
											iVar25++;
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_text_label(
													&Global_17290.f_73[iVar24 + iVar25 /*6*/]);
											}
											iVar30 = 8;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_player_name(
													&Global_2453058[iVar23 + iVar29 /*16*/]);
											}
											iVar29++;
											iVar30 = 5;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_text_label(
													&Global_2453058[iVar23 + iVar29 /*16*/]);
											}
											iVar29++;
											iVar30 = 6;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_player_name(
													&Global_2453058[iVar23 + iVar29 /*16*/]);
											}
											iVar29++;
											iVar30 = 7;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_player_name(
													&Global_2453058[iVar23 + iVar29 /*16*/]);
											}
											iVar29++;
											iVar30 = 9;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_integer(Global_17290.f_3918[iVar20 + iVar26]);
											}
											iVar26++;
											iVar30 = 2;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_float(Global_17290.f_4175[iVar21 + iVar27],
																			 Global_17290.f_4304[iVar21 + iVar27]);
											}
											iVar27++;
											iVar30 = 3;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4) {
											if (Global_17290.f_4433[iVar22 + iVar28] == 2 ||
												Global_17290.f_4433[iVar22 + iVar28] == 48) {
												if (func_65(Global_17290.f_4433[iVar22 + iVar28], bVar31, 0, &fVar35,
															&fVar36, iParam7)) {
													fVar41 += fVar35 * 0.5f;
													if (func_65(Global_17290.f_4433[iVar22 + iVar28], bVar31, 1,
																&fVar35, &fVar36, iParam7)) {
														func_54(Global_17290.f_4433[iVar22 + iVar28], bVar31, &iVar46,
																&iVar47, &iVar48);
														if (Global_17290.f_4953[iVar8] == 2) {
															graphics::draw_sprite(
																func_63(Global_17290.f_4433[iVar22 + iVar28]),
																func_60(Global_17290.f_4433[iVar22 + iVar28], bVar31),
																fVar33 + fVar41 - 0.00078125f * 8f + 0.00078125f * 4f,
																fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35, fVar36,
																0f, iVar46, iVar47, iVar48, 255, 0);
														}
														else {
															graphics::draw_sprite(
																func_63(Global_17290.f_4433[iVar22 + iVar28]),
																func_60(Global_17290.f_4433[iVar22 + iVar28], bVar31),
																fVar33 + fVar41 - 0.00078125f * 8f,
																fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35, fVar36,
																0f, iVar46, iVar47, iVar48, 255, 0);
														}
														fVar41 += 0.00078125f * 3f;
													}
												}
											}
											iVar28++;
											iVar30 = 4;
										}
										iVar14++;
									}
									if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
										if (iVar30 == 4 && Global_17290.f_4953[iVar8] == 2) {
											ui::end_text_command_display_text(fVar33 + fVar41 + 0.00078125f * 7f,
																			  fVar34, 0);
										}
										else {
											ui::end_text_command_display_text(fVar33 + fVar41, fVar34, 0);
										}
									}
									if (iVar28 > 0) {
										fVar41 += 6f * 0.00078125f;
										iVar14 = 0;
										while (iVar14 < iVar28) {
											if (Global_17290.f_4433[iVar22 + iVar14] != 2 &&
												Global_17290.f_4433[iVar22 + iVar14] != 48) {
												if (func_65(Global_17290.f_4433[iVar22 + iVar14], bVar31, 0, &fVar35,
															&fVar36, iParam7)) {
													fVar41 += fVar35 * 0.5f;
													if (func_65(Global_17290.f_4433[iVar22 + iVar14], bVar31, 1,
																&fVar35, &fVar36, iParam7)) {
														func_54(Global_17290.f_4433[iVar22 + iVar14], bVar31, &iVar46,
																&iVar47, &iVar48);
														if (Global_17290.f_4433[iVar22 + iVar14] == 30) {
															graphics::draw_sprite(
																func_63(Global_17290.f_4433[iVar22 + iVar14]),
																func_60(Global_17290.f_4433[iVar22 + iVar14], bVar31),
																Global_17287 + fVar35 * 0.5f,
																fVar34 + 0.00277776f + fVar36 * 0.5f -
																	0.00078125f * 11f,
																fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
														}
														else if (Global_17290.f_4953[iVar8] == 2) {
															graphics::draw_sprite(
																func_63(Global_17290.f_4433[iVar22 + iVar14]),
																func_60(Global_17290.f_4433[iVar22 + iVar14], bVar31),
																fVar33 + fVar41 + fVar42 - 0.00078125f * 8f +
																	0.00078125f * 4f,
																fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35, fVar36,
																0f, iVar46, iVar47, iVar48, 255, 0);
														}
														else {
															graphics::draw_sprite(
																func_63(Global_17290.f_4433[iVar22 + iVar14]),
																func_60(Global_17290.f_4433[iVar22 + iVar14], bVar31),
																fVar33 + fVar41 + fVar42 - 0.00078125f * 12f,
																fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35, fVar36,
																0f, iVar46, iVar47, iVar48, 255, 0);
														}
													}
													fVar41 += 12f * 0.00078125f;
												}
											}
											iVar14++;
										}
									}
								}
								bVar40 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4) {
									if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1) {
										iVar19++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8) {
										iVar19++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2) {
										iVar20++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3) {
										iVar21++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4) {
										iVar22++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5) {
										iVar23++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6) {
										iVar23++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7) {
										iVar23++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9) {
										iVar23++;
									}
									iVar14++;
								}
								break;

							case 2:
								if (iVar5 == 1 && bVar32) {
									if (!Global_17290.f_5599) {
										func_45(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24],
												iVar54, 0, 0, 0);
										if (Global_17290.f_7895 && Global_17290.f_7896 == iVar6) {
											func_44(bVar31);
										}
										ui::_begin_text_command_width("NUMBER");
										ui::add_text_component_integer(Global_17290.f_3918[iVar20]);
										fVar42 = ui::_end_text_command_get_width(1);
										fVar41 = 0f;
										if (Global_17290.f_4953[iVar8] == 2) {
											fVar41 += fVar45 - fVar42 + 0.00078125f * 1f;
										}
										else if (Global_17290.f_4953[iVar8] == 0) {
											fVar41 += (fVar45 - fVar33) * 0.5f - fVar42 * 0.5f;
										}
										Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8] = fVar41;
										Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8] = fVar42;
									}
									else {
										fVar41 = Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8];
										fVar42 = Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8];
									}
									if (bVar52) {
										if (func_65(26, 1, 0, &fVar35, &fVar36, iParam7)) {
											if (Global_17290.f_4953[iVar8] == 2) {
												fVar41 -= fVar35 * 2f;
											}
											fVar44 = fVar35 * 0.5f;
											if (func_65(26, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_54(26, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_63(26), func_60(26, 1),
																	  fVar33 + fVar41 + fVar44,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
										if (func_65(27, 1, 0, &fVar35, &fVar36, iParam7)) {
											fVar41 += fVar35;
											fVar44 = fVar35 * 0.5f;
											if (func_65(27, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_54(27, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_63(27), func_60(27, 1),
																	  fVar33 + fVar41 + fVar44 + fVar42 + fVar43,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									func_45(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], iVar54, 0,
											0, 0);
									func_43(fVar33 + fVar41, fVar34, "NUMBER", Global_17290.f_3918[iVar20], 0);
								}
								bVar40 = true;
								iVar20++;
								break;

							case 3:
								if (iVar5 == 1 && bVar32) {
									if (!Global_17290.f_5599) {
										func_45(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24],
												iVar54, 0, 0, 0);
										if (Global_17290.f_7895 && Global_17290.f_7896 == iVar6) {
											func_44(bVar31);
										}
										ui::_begin_text_command_width("NUMBER");
										ui::add_text_component_float(Global_17290.f_4175[iVar21],
																	 Global_17290.f_4304[iVar21]);
										fVar42 = ui::_end_text_command_get_width(1);
										fVar41 = 0f;
										if (Global_17290.f_4953[iVar8] == 2) {
											fVar41 += fVar45 - fVar42 + 0.00078125f * 1f;
										}
										else if (Global_17290.f_4953[iVar8] == 0) {
											fVar41 += (fVar45 - fVar33) * 0.5f - fVar42 * 0.5f;
										}
										Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8] = fVar41;
										Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8] = fVar42;
									}
									else {
										fVar41 = Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8];
										fVar42 = Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8];
									}
									if (bVar52) {
										if (func_65(26, 1, 0, &fVar35, &fVar36, 0)) {
											if (Global_17290.f_4953[iVar8] == 2) {
												fVar41 -= fVar35 * 2f;
											}
											fVar44 = fVar35 * 0.5f;
											if (func_65(26, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_54(26, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_63(26), func_60(26, 1),
																	  fVar33 + fVar41 + fVar44,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
										if (func_65(27, 1, 0, &fVar35, &fVar36, iParam7)) {
											fVar41 += fVar35;
											fVar44 = fVar35 * 0.5f;
											if (func_65(27, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_54(27, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_63(27), func_60(27, 1),
																	  fVar33 + fVar41 + fVar44 + fVar42 + fVar43,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									func_45(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], iVar54, 0,
											0, 0);
									func_42(fVar33 + fVar41, fVar34, "NUMBER", Global_17290.f_4175[iVar21],
											Global_17290.f_4304[iVar21]);
								}
								bVar40 = true;
								iVar21++;
								break;

							case 4:
								if (iVar5 == 1 && bVar32) {
									if (func_65(Global_17290.f_4433[iVar22], bVar31, 0, &fVar35, &fVar36, iParam7)) {
										if (!Global_17290.f_5599) {
											fVar43 = fVar35;
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2) {
												fVar41 += fVar45 - fVar43 + 0.00078125f * 1f;
											}
											else if (Global_17290.f_4953[iVar8] == 0) {
												fVar41 += (fVar45 - fVar33) * 0.5f - fVar43 * 0.5f;
											}
											Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8] = fVar41;
											Global_17290.f_7823[iVar9 * Global_17290.f_5096 + iVar8] = fVar43;
										}
										else {
											fVar41 = Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8];
											fVar43 = Global_17290.f_7823[iVar9 * Global_17290.f_5096 + iVar8];
										}
										if (bVar52) {
											if (func_65(26, 1, 0, &fVar35, &fVar36, iParam7)) {
												if (Global_17290.f_4953[iVar8] == 2) {
													fVar41 -= fVar35 * 2f;
												}
												fVar44 = fVar35 * 0.5f;
												if (func_65(26, 1, 1, &fVar35, &fVar36, iParam7)) {
													func_54(26, 1, &iVar46, &iVar47, &iVar48);
													graphics::draw_sprite(func_63(26), func_60(26, 1),
																		  fVar33 + fVar41 + fVar44,
																		  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																		  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_65(27, 1, 0, &fVar35, &fVar36, iParam7)) {
												fVar41 += fVar35;
												fVar44 = fVar35 * 0.5f;
												if (func_65(27, 1, 1, &fVar35, &fVar36, iParam7)) {
													func_54(27, 1, &iVar46, &iVar47, &iVar48);
													graphics::draw_sprite(func_63(27), func_60(27, 1),
																		  fVar33 + fVar41 + fVar44 + fVar42 + fVar43,
																		  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																		  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										if (func_65(Global_17290.f_4433[iVar22], bVar31, 1, &fVar35, &fVar36,
													iParam7)) {
											func_54(Global_17290.f_4433[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
											graphics::draw_sprite(func_63(Global_17290.f_4433[iVar22]),
																  func_60(Global_17290.f_4433[iVar22], bVar31),
																  fVar33 + fVar41 + fVar35 * 0.5f,
																  fVar34 - 0.00277776f + fVar55 * 0.5f,
																  fVar35 * func_41(Global_17290.f_4433[iVar22]),
																  fVar36 * func_41(Global_17290.f_4433[iVar22]), 0f,
																  iVar46, iVar47, iVar48, 255, 0);
										}
									}
								}
								bVar40 = true;
								iVar22++;
								break;

							case 5: bVar40 = true; break;
							}
							if (Global_17290.f_4926[iVar8] == 5) {
								if (Global_17290.f_4938[iVar8] > 0.05f) {
									fVar33 += Global_17290.f_4938[iVar8];
								}
								else {
									fVar33 += 0.05f;
								}
							}
							else {
								fVar33 += Global_17290.f_4938[iVar8];
								if (Global_17290.f_4945[iVar8]) {
									if (func_65(26, 1, 1, &fVar35, &fVar36, iParam7)) {
										fVar33 -= fVar35;
									}
								}
							}
						}
						else {
							fVar33 += Global_17290.f_4938[iVar8];
						}
						iVar8++;
					}
				}
				if (bVar40) {
					if (bVar32) {
						Global_17290.f_7520[iVar9] = iVar6;
						Global_17290.f_5607 = iVar6;
						iVar9++;
						if (Global_17290.f_5226[iVar6]) {
							iVar13++;
						}
						if (Global_17290.f_5612[iVar6] != 0f) {
							fVar98 += Global_17290.f_5612[iVar6];
						}
						else {
							fVar98 += 0.034722f;
						}
					}
					if (!Global_17290.f_5598) {
						Global_17290.f_5355[iVar6] = 1;
						if (Global_17290.f_5097[iVar6]) {
							if (bVar31) {
								Global_17290.f_5604 = 0;
							}
						}
						else {
							iVar11++;
							if (bVar31) {
								Global_17290.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17290.f_5598) {
				Global_17290.f_5600 = fVar58 + fVar98 + 0.00277776f * IntToFloat(iVar12);
				Global_17290.f_5603 = iVar11;
				Global_17290.f_5601 = iVar10;
				Global_17290.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17290.f_5599) {
		Global_17290.f_5602 = iVar9;
		Global_17290.f_5599 = 1;
	}
	Global_17290.f_5743 = fVar49;
	Global_17290.f_5745 = gameplay::get_game_timer();
	ui::_0x55598D21339CB998(Global_17290.f_5743);
	if (!Global_17290.f_7864) {
		func_28();
	}
	Global_17290.f_7864 = 0;
	if (iParam2) {
		ui::hide_hud_component_this_frame(10);
	}
	ui::hide_hud_component_this_frame(6);
	ui::hide_hud_component_this_frame(7);
	ui::hide_hud_component_this_frame(9);
	ui::hide_hud_component_this_frame(8);
	if (iParam0) {
		func_40(1);
	}
	graphics::_screen_draw_position_end();
}

// Position - 0x4069
void func_40(int iParam0) { Global_1354542.f_995 = iParam0; }

// Position - 0x407A
float func_41(int iParam0) {
	switch (iParam0) {
	case 35:
	case 34:
	case 47:
	case 46:
	case 42:
	case 36:
	case 37:
	case 39:
	case 40:
	case 38:
	case 50:
	case 43:
	case 44:
	case 45: return 0.85f;
	}
	return 1f;
}

// Position - 0x40E9
void func_42(float fParam0, float fParam1, char *sParam2, float fParam3, int iParam4) {
	ui::begin_text_command_display_text(sParam2);
	ui::add_text_component_float(fParam3, iParam4);
	ui::end_text_command_display_text(fParam0, fParam1, 0);
}

// Position - 0x4108
void func_43(float fParam0, float fParam1, char *sParam2, int iParam3, int iParam4) {
	ui::begin_text_command_display_text(sParam2);
	ui::add_text_component_integer(iParam3);
	ui::end_text_command_display_text(fParam0, fParam1, iParam4);
}

// Position - 0x4126
void func_44(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (iParam0) {
		ui::get_hud_colour(Global_17290.f_7892[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else {
		ui::get_hud_colour(Global_17290.f_7892[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	ui::set_text_colour(iVar0, iVar1, iVar2, 255);
}

// Position - 0x416C
void func_45(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam2) {
		if (iParam3) {
			func_46(Global_17290.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if (iVar0 < 20 && iVar1 < 20 && iVar2 < 20) {
				if (iParam0 == 0) {
					ui::get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if (iVar0 > 230 && iVar1 > 230 && iVar2 > 230) {
				if (iParam0) {
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			ui::set_text_colour(iVar0, iVar1, iVar2, 255);
		}
		else if (iParam1) {
			if (iParam0) {
				ui::get_hud_colour(14, &iVar0, &iVar1, &iVar2, &iVar3);
				ui::set_text_colour(iVar0, iVar1, iVar2, 255);
			}
			else {
				ui::get_hud_colour(12, &iVar0, &iVar1, &iVar2, &iVar3);
				ui::set_text_colour(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (iParam0) {
			ui::set_text_colour(155, 155, 155, 255);
		}
		else {
			ui::set_text_colour(155, 155, 155, 255);
		}
	}
	else if (iParam1) {
		if (iParam0) {
			ui::set_text_colour(0, 0, 0, system::floor(255f * 0.8f));
		}
		else {
			ui::get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
			ui::set_text_colour(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (iParam0) {
		ui::set_text_colour(155, 155, 155, 255);
	}
	else {
		ui::set_text_colour(155, 155, 155, 255);
	}
	ui::set_text_scale(0f, 0.35f);
	ui::set_text_justification(1);
	if (iParam5) {
		ui::set_text_scale(0f, 0.425f);
		ui::set_text_font(4);
	}
	else if (iParam6) {
		ui::set_text_scale(0f, 0.425f);
		ui::set_text_font(6);
	}
	else {
		ui::set_text_font(0);
	}
	ui::set_text_wrap(0f, 1f);
	ui::set_text_centre(0);
	ui::set_text_dropshadow(0, 0, 0, 0, 0);
	ui::set_text_edge(0, 0, 0, 0, 0);
}

// Position - 0x431A
void func_46(int iParam0, int *iParam1, int *iParam2, int *iParam3) {
	switch (iParam0) {
	case 0:
		*iParam1 = 8;
		*iParam2 = 8;
		*iParam3 = 8;
		break;

	case 1:
		*iParam1 = 37;
		*iParam2 = 37;
		*iParam3 = 39;
		break;

	case 22:
		*iParam1 = 140;
		*iParam2 = 146;
		*iParam3 = 154;
		break;

	case 23:
		*iParam1 = 91;
		*iParam2 = 93;
		*iParam3 = 94;
		break;

	case 6:
		*iParam1 = 81;
		*iParam2 = 84;
		*iParam3 = 89;
		break;

	case 111:
		*iParam1 = 240;
		*iParam2 = 240;
		*iParam3 = 240;
		break;

	case 28:
		*iParam1 = 150;
		*iParam2 = 8;
		*iParam3 = 0;
		break;

	case 34:
		*iParam1 = 38;
		*iParam2 = 3;
		*iParam3 = 6;
		break;

	case 88:
		*iParam1 = 245;
		*iParam2 = 137;
		*iParam3 = 15;
		break;

	case 45:
		*iParam1 = 74;
		*iParam2 = 22;
		*iParam3 = 7;
		break;

	case 56:
		*iParam1 = 45;
		*iParam2 = 58;
		*iParam3 = 53;
		break;

	case 58:
		*iParam1 = 71;
		*iParam2 = 120;
		*iParam3 = 60;
		break;

	case 54:
		*iParam1 = 77;
		*iParam2 = 98;
		*iParam3 = 104;
		break;

	case 73:
		*iParam1 = 14;
		*iParam2 = 49;
		*iParam3 = 109;
		break;

	case 68:
		*iParam1 = 22;
		*iParam2 = 34;
		*iParam3 = 72;
		break;

	case 140:
		*iParam1 = 0;
		*iParam2 = 174;
		*iParam3 = 239;
		break;

	case 131:
		*iParam1 = 255;
		*iParam2 = 183;
		*iParam3 = 0;
		break;

	case 90:
		*iParam1 = 142;
		*iParam2 = 140;
		*iParam3 = 70;
		break;

	case 97:
		*iParam1 = 156;
		*iParam2 = 141;
		*iParam3 = 113;
		break;

	case 89:
		*iParam1 = 145;
		*iParam2 = 115;
		*iParam3 = 71;
		break;

	case 105:
		*iParam1 = 98;
		*iParam2 = 68;
		*iParam3 = 40;
		break;

	case 100:
		*iParam1 = 124;
		*iParam2 = 27;
		*iParam3 = 68;
		break;

	case 99:
		*iParam1 = 114;
		*iParam2 = 42;
		*iParam3 = 63;
		break;

	case 136:
		*iParam1 = 246;
		*iParam2 = 151;
		*iParam3 = 153;
		break;

	case 49:
		*iParam1 = 32;
		*iParam2 = 32;
		*iParam3 = 44;
		break;

	case 146:
		*iParam1 = 26;
		*iParam2 = 1;
		*iParam3 = 23;
		break;

	default:
		*iParam1 = 255;
		*iParam2 = 255;
		*iParam3 = 255;
		break;
	}
}

// Position - 0x45A4
void func_47(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7,
			 int iParam8) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_36(&iVar0, 0, iParam1)) {
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_67(iParam4, iParam8)) {
		return;
	}
	if (func_52()) {
		return;
	}
	if (network::_network_is_text_chat_active()) {
		return;
	}
	if (iParam7 == 0) {
		if (func_50(player::player_id(), 0)) {
			return;
		}
	}
	if (gameplay::is_pc_version()) {
		if (gameplay::update_onscreen_keyboard() == 0 || network::_network_is_text_chat_active()) {
			return;
		}
	}
	if (Global_17290.f_4639 != 0) {
		if (controls::_0x6CD79468A1E595C6(2)) {
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639) {
				if (Global_17290.f_4896[iVar1] != 353) {
					StringCopy(&Global_17290.f_4641[iVar1 /*16*/],
							   controls::get_control_instructional_button(2, Global_17290.f_4896[iVar1], 1), 64);
				}
				else if (Global_17290.f_4909[iVar1] != 32) {
					StringCopy(&Global_17290.f_4641[iVar1 /*16*/],
							   controls::_0x80C2FD58D720C801(2, Global_17290.f_4909[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17290.f_4640 = 0;
		}
		if (!Global_17290.f_4640) {
			graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			graphics::_pop_scaleform_movie_function_void();
			graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			graphics::_push_scaleform_movie_function_parameter_float(1f - Global_17290.f_4951 / 100f);
			graphics::_pop_scaleform_movie_function_void();
			if (gameplay::is_pc_version()) {
				graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				graphics::_push_scaleform_movie_function_parameter_bool(1);
				graphics::_pop_scaleform_movie_function_void();
			}
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639) {
				if (gameplay::get_hash_key(&Global_17290.f_4834[iVar1 /*4*/]) != gameplay::get_hash_key("PREV")) {
					graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					graphics::_push_scaleform_movie_function_parameter_int(iVar1);
					func_49(&Global_17290.f_4641[iVar1 /*16*/]);
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && gameplay::get_hash_key(&Global_17290.f_4834[iVar2 /*4*/]) ==
											 gameplay::get_hash_key("PREV")) {
						func_49(&Global_17290.f_4641[iVar2 /*16*/]);
						iVar2++;
					}
					if (Global_17290.f_4883[iVar1] == -1) {
						func_48(&Global_17290.f_4834[iVar1 /*4*/]);
					}
					else {
						graphics::begin_text_command_scaleform_string(&Global_17290.f_4834[iVar1 /*4*/]);
						if (iParam5) {
							ui::add_text_component_substring_time(iParam2, 70);
						}
						else {
							ui::add_text_component_integer(iParam2);
						}
						graphics::end_text_command_scaleform_string();
					}
					if (gameplay::is_pc_version()) {
						if (Global_17290.f_4896[iVar1] != 353 && gameplay::is_bit_set(Global_17290.f_4922, iVar1)) {
							graphics::_push_scaleform_movie_function_parameter_bool(1);
							graphics::_push_scaleform_movie_function_parameter_int(Global_17290.f_4896[iVar1]);
						}
						else {
							graphics::_push_scaleform_movie_function_parameter_bool(0);
							graphics::_push_scaleform_movie_function_parameter_int(353);
						}
					}
					graphics::_pop_scaleform_movie_function_void();
				}
				iVar1++;
			}
			if (gameplay::get_hash_key(&Global_2593974.f_16) != gameplay::get_hash_key("")) {
				graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				graphics::_push_scaleform_movie_function_parameter_int(Global_17290.f_4639);
				func_49(&Global_2593974);
				if (Global_2593974.f_20 == -1) {
					func_48(&Global_2593974.f_16);
				}
				else {
					graphics::begin_text_command_scaleform_string(&Global_2593974.f_16);
					if (iParam5) {
						ui::add_text_component_substring_time(iParam2, 70);
					}
					else {
						ui::add_text_component_integer(iParam2);
					}
					graphics::end_text_command_scaleform_string();
				}
				graphics::_pop_scaleform_movie_function_void();
			}
			graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			graphics::_push_scaleform_movie_function_parameter_int(0);
			graphics::_push_scaleform_movie_function_parameter_int(0);
			graphics::_push_scaleform_movie_function_parameter_int(0);
			graphics::_push_scaleform_movie_function_parameter_int(80);
			graphics::_pop_scaleform_movie_function_void();
			graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17290.f_4952) {
				graphics::_push_scaleform_movie_function_parameter_int(1);
			}
			else {
				graphics::_push_scaleform_movie_function_parameter_int(0);
			}
			graphics::_pop_scaleform_movie_function_void();
			Global_17290.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17290.f_4639) {
			if (Global_17290.f_4883[iVar1] != -1) {
				if (iParam2 > 0) {
					graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/],
															 "OVERRIDE_RESPAWN_TEXT");
					graphics::_push_scaleform_movie_function_parameter_int(iVar1);
					graphics::begin_text_command_scaleform_string(&Global_17290.f_4834[iVar1 /*4*/]);
					if (iParam5) {
						ui::add_text_component_substring_time(iParam2, 70);
					}
					else {
						ui::add_text_component_integer(iParam2);
					}
					graphics::end_text_command_scaleform_string();
					graphics::_pop_scaleform_movie_function_void();
				}
			}
			iVar1++;
		}
		if (Global_2593974.f_20 != -1) {
			if (iParam2 > 0) {
				graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				graphics::_push_scaleform_movie_function_parameter_int(iVar1);
				graphics::begin_text_command_scaleform_string(&Global_2593974.f_16);
				if (iParam5) {
					ui::add_text_component_substring_time(iParam2, 70);
				}
				else {
					ui::add_text_component_integer(iParam2);
				}
				graphics::end_text_command_scaleform_string();
				graphics::_pop_scaleform_movie_function_void();
			}
		}
		graphics::_set_screen_draw_position(76, 66);
		graphics::_screen_draw_position_ratio(0f, 0f, 0f, 0f);
		if (bParam6) {
			if (!Global_17290.f_7899) {
				ui::set_hud_component_position(15, 0f, -0.0375f);
				Global_17290.f_7899 = 1;
			}
		}
		else if (Global_17290.f_7899) {
			ui::reset_hud_component_values(15);
			Global_17290.f_7899 = 0;
		}
		graphics::_screen_draw_position_end();
		if (Global_17290.f_4925) {
			graphics::_set_screen_draw_position(82, 66);
			graphics::_screen_draw_position_ratio(0f, 0f, 0f, 0f);
			graphics::draw_scaleform_movie(Global_17290.f_5530[iVar0 /*10*/], Global_17290.f_4923, Global_17290.f_4924,
										   1f, 1f, 255, 255, 255, 255, 0);
			graphics::_screen_draw_position_end();
		}
		else {
			graphics::draw_scaleform_movie_fullscreen(Global_17290.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

// Position - 0x4A80
void func_48(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x4A92
void func_49(char *sParam0) { graphics::_0xE83A3E3557A56640(sParam0); }

// Position - 0x4AA0
bool func_50(int iParam0, int iParam1) {
	bool bVar0;

	if (iParam0 == player::player_id()) {
		bVar0 = func_51(-1, 0) == 8;
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

// Position - 0x4AEB
int func_51(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1) {
		iVar1 = func_12();
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

// Position - 0x4B2C
bool func_52() {
	vector3 vVar0;

	if (Global_14443.f_1 > 3) {
		return true;
	}
	if (func_53()) {
		vVar0 = {0f, -500f, 0f};
		mobile::get_mobile_phone_position(&vVar0);
		if (Global_14388 == 0) {
			if (vVar0.y > -119f) {
				return true;
			}
			else {
				return false;
			}
		}
		else if (vVar0.y > -101f) {
			return true;
		}
		else {
			return false;
		}
	}
	return false;
}

// Position - 0x4B9A
bool func_53() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) > 0) {
		return true;
	}
	return false;
}

// Position - 0x4BB4
void func_54(int iParam0, int iParam1, int *iParam2, int *iParam3, int *iParam4) {
	var uVar0;

	ui::get_hud_colour(1, iParam2, iParam3, iParam4, &uVar0);
	switch (iParam0) {
	case 28:
		*iParam2 = 194;
		*iParam3 = 80;
		*iParam4 = 80;
		break;

	case 15:
	case 4:
	case 16:
	case 26:
	case 27:
	case 35:
	case 34:
	case 47:
	case 46:
	case 42:
	case 36:
	case 37:
	case 50:
	case 39:
	case 40:
	case 38:
	case 43:
	case 44:
	case 45:
	case 49:
		if (iParam1) {
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 0;
		}
		break;
	}
}

// Position - 0x4C74
void func_55(float fParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	ui::get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
	ui::set_text_font(0);
	ui::set_text_scale(0f, 0.35f);
	ui::set_text_leading(2);
	ui::set_text_colour(iVar0, iVar1, iVar2, iVar3);
	ui::set_text_wrap(fParam0, Global_17287 + Global_17289 - 0.0046875f);
	ui::set_text_centre(0);
	ui::set_text_dropshadow(0, 0, 0, 0, 0);
	ui::set_text_edge(0, 0, 0, 0, 0);
}

// Position - 0x4CD3
void func_56(float fParam0, float fParam1, char *sParam2, int iParam3, int iParam4) {
	ui::begin_text_command_display_text(sParam2);
	ui::add_text_component_integer(iParam3);
	ui::add_text_component_integer(iParam4);
	ui::end_text_command_display_text(fParam0, fParam1, 0);
}

// Position - 0x4CF6
float func_57(char *sParam0, int iParam1, int iParam2) {
	if (!gameplay::is_string_null(sParam0)) {
		if (gameplay::get_hash_key(sParam0) == 0) {
			return 0f;
		}
	}
	else {
		return 0f;
	}
	func_58();
	ui::_begin_text_command_width(sParam0);
	ui::add_text_component_integer(iParam1);
	ui::add_text_component_integer(iParam2);
	return ui::_end_text_command_get_width(1);
}

// Position - 0x4D38
void func_58() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	ui::get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17290.f_7874) {
		iVar0 = Global_17290.f_7870;
		iVar1 = Global_17290.f_7871;
		iVar2 = Global_17290.f_7872;
		iVar3 = Global_17290.f_7873;
	}
	ui::set_text_font(0);
	ui::set_text_scale(0f, 0.35f);
	ui::set_text_colour(iVar0, iVar1, iVar2, iVar3);
	ui::set_text_wrap(Global_17287 + 0.0046875f, Global_17287 + Global_17289 - 0.0046875f);
	ui::set_text_centre(0);
	ui::set_text_dropshadow(0, 0, 0, 0, 0);
	ui::set_text_edge(0, 0, 0, 0, 0);
}

// Position - 0x4DC2
void func_59(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6,
			 int iParam7) {
	graphics::draw_rect(fParam0 + fParam2 * 0.5f, fParam1 + fParam3 * 0.5f, fParam2, fParam3, iParam4, iParam5, iParam6,
						iParam7, 0);
}

// Position - 0x4DF1
var func_60(int iParam0, int iParam1) {
	char *sVar0[2];
	var uVar3;
	struct<13> Var19;

	if (!gameplay::is_string_null_or_empty(&Global_17290.f_6703[iParam0 /*16*/])) {
		if (gameplay::get_hash_key(&Global_17290.f_6703[iParam0 /*16*/]) == -1487683087) {
			Var19 = {func_62(player::player_id())};
			if (network::_0x5835D9CD92E83184(&Var19, &uVar3)) {
				return func_61(&uVar3);
			}
		}
		else {
			return func_61(&Global_17290.f_6703[iParam0 /*16*/]);
		}
	}
	switch (iParam0) {
	case 3:
		sVar0[0] = "MP_hostCrown";
		sVar0[1] = "MP_hostCrown";
		break;

	case 21:
		sVar0[0] = "MP_SpecItem_Coke";
		sVar0[1] = "MP_SpecItem_Coke";
		break;

	case 22:
		sVar0[0] = "MP_SpecItem_Heroin";
		sVar0[1] = "MP_SpecItem_Heroin";
		break;

	case 23:
		sVar0[0] = "MP_SpecItem_Weed";
		sVar0[1] = "MP_SpecItem_Weed";
		break;

	case 24:
		sVar0[0] = "MP_SpecItem_Meth";
		sVar0[1] = "MP_SpecItem_Meth";
		break;

	case 25:
		sVar0[0] = "MP_SpecItem_Cash";
		sVar0[1] = "MP_SpecItem_Cash";
		break;

	case 1:
		sVar0[0] = "shop_NEW_Star";
		sVar0[1] = "shop_NEW_Star";
		break;

	case 2:
		sVar0[0] = "shop_NEW_Star";
		sVar0[1] = "shop_NEW_Star";
		break;

	case 4:
		sVar0[0] = "Shop_Tick_Icon";
		sVar0[1] = "Shop_Tick_Icon";
		break;

	case 6:
		sVar0[0] = "Shop_Box_CrossB";
		sVar0[1] = "Shop_Box_Cross";
		break;

	case 7:
		sVar0[0] = "Shop_Box_BlankB";
		sVar0[1] = "Shop_Box_Blank";
		break;

	case 5:
		sVar0[0] = "Shop_Box_TickB";
		sVar0[1] = "Shop_Box_Tick";
		break;

	case 8:
		sVar0[0] = "shop_NEW_Star";
		sVar0[1] = "shop_NEW_Star";
		break;

	case 9:
		sVar0[0] = "Shop_Clothing_Icon_B";
		sVar0[1] = "Shop_Clothing_Icon_A";
		break;

	case 10:
		sVar0[0] = "Shop_GunClub_Icon_B";
		sVar0[1] = "Shop_GunClub_Icon_A";
		break;

	case 17:
		sVar0[0] = "Shop_Ammo_Icon_B";
		sVar0[1] = "Shop_Ammo_Icon_A";
		break;

	case 18:
		sVar0[0] = "Shop_Armour_Icon_B";
		sVar0[1] = "Shop_Armour_Icon_A";
		break;

	case 19:
		sVar0[0] = "Shop_Health_Icon_B";
		sVar0[1] = "Shop_Health_Icon_A";
		break;

	case 20:
		sVar0[0] = "Shop_MakeUp_Icon_B";
		sVar0[1] = "Shop_MakeUp_Icon_A";
		break;

	case 11:
		sVar0[0] = "Shop_Tattoos_Icon_B";
		sVar0[1] = "Shop_Tattoos_Icon_A";
		break;

	case 12:
		sVar0[0] = "Shop_Garage_Icon_B";
		sVar0[1] = "Shop_Garage_Icon_A";
		break;

	case 13:
		sVar0[0] = "Shop_Garage_Bike_Icon_B";
		sVar0[1] = "Shop_Garage_Bike_Icon_A";
		break;

	case 14:
		sVar0[0] = "Shop_Barber_Icon_B";
		sVar0[1] = "Shop_Barber_Icon_A";
		break;

	case 15:
		sVar0[0] = "shop_Lock";
		sVar0[1] = "shop_Lock";
		break;

	case 16:
		sVar0[0] = "Shop_Tick_Icon";
		sVar0[1] = "Shop_Tick_Icon";
		break;

	case 26:
		sVar0[0] = "arrowleft";
		sVar0[1] = "arrowleft";
		break;

	case 27:
		sVar0[0] = "arrowright";
		sVar0[1] = "arrowright";
		break;

	case 28:
		sVar0[0] = "MP_AlertTriangle";
		sVar0[1] = "MP_AlertTriangle";
		break;

	case 29:
		sVar0[0] = "shop_NEW_Star";
		sVar0[1] = "shop_NEW_Star";
		break;

	case 31:
		sVar0[0] = "Shop_Michael_Icon_B";
		sVar0[1] = "Shop_Michael_Icon_A";
		break;

	case 32:
		sVar0[0] = "Shop_Franklin_Icon_B";
		sVar0[1] = "Shop_Franklin_Icon_A";
		break;

	case 33:
		sVar0[0] = "Shop_Trevor_Icon_B";
		sVar0[1] = "Shop_Trevor_Icon_A";
		break;

	case 48:
		sVar0[0] = "SaleIcon";
		sVar0[1] = "SaleIcon";
		break;

	case 49:
		sVar0[0] = "Shop_Tick_Icon";
		sVar0[1] = "Shop_Tick_Icon";
		break;

	case 0:
		sVar0[0] = "";
		sVar0[1] = "";
		break;
	}
	if (iParam1) {
		return sVar0[0];
	}
	return sVar0[1];
}

// Position - 0x5228
var func_61(var uParam0) { return uParam0; }

// Position - 0x5232
struct<13> func_62(int iParam0) {
	struct<13> Var0;

	network::network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

// Position - 0x5249
char *
func_63(int iParam0) {
	var uVar0;
	struct<13> Var16;

	if (!gameplay::is_string_null_or_empty(&Global_17290.f_5886[iParam0 /*16*/])) {
		if (gameplay::get_hash_key(&Global_17290.f_5886[iParam0 /*16*/]) == -1487683087) {
			Var16 = {func_62(player::player_id())};
			network::_0x5835D9CD92E83184(&Var16, &uVar0);
			return func_61(&uVar0);
		}
		else {
			return func_61(&Global_17290.f_5886[iParam0 /*16*/]);
		}
	}
	if (iParam0 == 48) {
		return "MPShopSale";
	}
	return "CommonMenu";
}

// Position - 0x52BC
bool func_64() {
	int iVar0;
	int iVar1;
	float fVar2;

	graphics::_get_active_screen_resolution(&iVar0, &iVar1);
	fVar2 = system::to_float(iVar0) / system::to_float(iVar1);
	if (fVar2 > 3.5f) {
		return true;
	}
	return false;
}

// Position - 0x52EE
bool func_65(int iParam0, int iParam1, int iParam2, float fParam3, float *fParam4, int iParam5) {
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;

	StringCopy(&cVar0, func_63(iParam0), 64);
	StringCopy(&cVar16, func_60(iParam0, iParam1), 64);
	if (gameplay::get_hash_key(&cVar16) != 0) {
		fVar34 = 1f;
		if (iParam5) {
			graphics::_get_active_screen_resolution(&iVar32, &iVar33);
			fVar35 = graphics::_get_aspect_ratio(0);
			if (func_64()) {
				iVar32 = system::round(system::to_float(iVar33) * fVar35);
			}
			fVar36 = system::to_float(iVar32) / system::to_float(iVar33);
			fVar34 = fVar36 / fVar35;
			if (func_64()) {
				fVar34 = 1f;
			}
			if (script::_get_number_of_instances_of_script_with_name_hash(joaat("director_mode")) > 0) {
				graphics::get_screen_resolution(&iVar32, &iVar33);
			}
			iVar32 = system::round(system::to_float(iVar32) / fVar34);
			iVar33 = system::round(system::to_float(iVar33) / fVar34);
		}
		else {
			graphics::get_screen_resolution(&iVar32, &iVar33);
		}
		vVar37 = {graphics::get_texture_resolution(&cVar0, &cVar16)};
		vVar37.x *= func_66(iParam0) / fVar34;
		vVar37.y *= func_66(iParam0) / fVar34;
		if (!iParam2) {
			vVar37.x -= 2f;
			vVar37.y -= 2f;
		}
		if (iParam0 == 30) {
			vVar37.x = 288f;
			vVar37.y = 106f;
		}
		if (iParam0 == 29 && gameplay::get_hash_key(&Global_17290.f_6703[29 /*16*/]) == -1487683087) {
			vVar37.x = 106f;
			vVar37.y = 106f;
		}
		*fParam3 = vVar37.x / IntToFloat(iVar32) * IntToFloat(iVar32 / iVar33);
		*fParam4 = vVar37.y / IntToFloat(iVar33) / (vVar37.x / IntToFloat(iVar32)) * *fParam3;
		if (!iParam5) {
			if (!graphics::get_is_widescreen() && iParam0 != 30) {
				*fParam3 *= 1.33f;
			}
		}
		if (iParam0 == 29) {
			if (*fParam3 > Global_17289) {
				*fParam4 *= Global_17289 / *fParam3;
				*fParam3 = Global_17289;
			}
		}
		return true;
	}
	return false;
}

// Position - 0x549F
float func_66(int iParam0) {
	switch (iParam0) {
	case 33:
	case 4:
	case 11:
	case 31:
	case 20:
	case 15:
	case 10:
	case 12:
	case 13:
	case 32:
	case 9:
	case 5:
	case 6:
	case 7:
	case 14:
	case 18:
	case 19:
	case 17:
	case 28:
	case 26:
	case 27:
	case 49: return 0.5f;
	}
	return 1f;
}

// Position - 0x553E
int func_67(int iParam0, bool bParam1) {
	if (Global_2433125.f_1385.f_688 != 0) {
		return 1;
	}
	if (!cam::is_screen_faded_in() || func_69(8, -1) && func_68() != 64 ||
		ui::get_pause_menu_state() != 0 && !bParam1 || streaming::is_player_switch_in_progress() && !iParam0 ||
		network::_0x2EAC52B4019E2782() || Global_69962 || Global_17290.f_7898 || ui::is_warning_message_active() ||
		Global_91543.f_1361) {
		return 0;
	}
	return 1;
}

// Position - 0x55DB
int func_68() { return Global_1315168; }

// Position - 0x55E7
var func_69(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x5622
void func_70() {
	switch (iLocal_115) {
	case 1: func_74(); break;

	case 0: func_73(); break;

	case 2: func_71(); break;
	}
}

// Position - 0x5658
void func_71() {
	if (!func_148()) {
		if (iLocal_104 == 0) {
			func_72("JBOX_CONF_ON", 0, 0);
		}
		else {
			func_72("JBOX_CANC_PUR", 0, 0);
		}
	}
	else if (iLocal_103 == 4) {
		if (iLocal_104 == 0) {
			func_72("JBOX_CONF_OFF", 0, 0);
		}
		else {
			func_72("JBOX_CANC_PUR", 0, 0);
		}
	}
	else if (iLocal_104 == 0) {
		func_72("JBOX_CONF_PUR", 0, 0);
	}
	else {
		func_72("JBOX_CANC_PUR", 0, 0);
	}
}

// Position - 0x56CB
void func_72(char *sParam0, int iParam1, int iParam2) {
	int iVar0;

	StringCopy(&Global_17290.f_4562, sParam0, 16);
	Global_17290.f_4632 = 0;
	Global_17290.f_4633 = 0;
	Global_17290.f_4634 = 0;
	Global_17290.f_4635 = 0;
	Global_17290.f_4636 = iParam1;
	Global_17290.f_4637 = gameplay::get_game_timer();
	Global_17290.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4) {
		Global_17290.f_4566[iVar0] = 0;
		iVar0++;
	}
}

// Position - 0x5730
void func_73() {
	struct<2> Var0;

	if (iLocal_104 == Local_132.f_2 && func_148()) {
		func_72("JBOX_PLIST_PLY", 0, 0);
	}
	else if (iLocal_104 == 4) {
		func_72("JBOX_TOFF", 0, 0);
	}
	else {
		StringCopy(&Var0, "JBOX_PLIST_D_", 16);
		StringIntConCat(&Var0, iLocal_104, 16);
		func_72(&Var0, 0, 0);
	}
}

// Position - 0x5781
void func_74() { func_72("JBOX_TOFF_NM", 0, 0); }

// Position - 0x5793
void func_75(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	Global_17290.f_5606 = iParam0;
	Global_17290.f_5741 = iParam2;
	if (Global_17290.f_5606 < Global_17290.f_5605) {
		Global_17290.f_5605 = Global_17290.f_5606;
	}
	else if (Global_17290.f_5599 && Global_17290.f_5606 > Global_17290.f_5607 ||
			 !Global_17290.f_5599 && Global_17290.f_5606 >= Global_17290.f_5605 + Global_17290.f_5095) {
		iVar0 = Global_17290.f_5605;
		while (iVar0 <= Global_17290.f_5606) {
			if (iVar0 >= 0 && iVar0 < 127) {
				if (Global_17290.f_4959[iVar0] != 0) {
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17290.f_5095 && Global_17290.f_5605 < 128) {
			Global_17290.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17290.f_5605;
			while (iVar0 <= Global_17290.f_5606) {
				if (iVar0 >= 0 && iVar0 < 127) {
					if (Global_17290.f_4959[iVar0] != 0) {
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17290.f_5598 = 0;
	Global_17290.f_5599 = 0;
	if (iParam1) {
		StringCopy(&Global_17290.f_4562, "", 16);
		StringCopy(&Global_2593974.f_21, "", 16);
	}
}

// Position - 0x58E5
void func_76() {
	switch (iLocal_115) {
	case 1: func_89(); break;

	case 0: func_88(); break;

	case 2: func_77(); break;
	}
}

// Position - 0x591B
void func_77() {
	func_83("JBOX_CONF_T");
	func_79(0, "JBOX_MENU_0", 0, 1, 0, 0);
	func_79(1, "JBOX_MENU_1", 0, 1, 0, 0);
	func_75(iLocal_104, 1, 1);
	func_78(201, "ITEM_SELECT", -1, 0);
	func_78(202, "ITEM_BACK", -1, 0);
}

// Position - 0x5965
void func_78(int iParam0, char *sParam1, int iParam2, int iParam3) {
	char *sVar0;

	sVar0 = controls::get_control_instructional_button(2, iParam0, 1);
	if (Global_17290.f_4639 >= 12) {
		StringCopy(&Global_2593974, sVar0, 64);
		StringCopy(&Global_2593974.f_16, sParam1, 16);
		Global_2593974.f_20 = iParam2;
		return;
		return;
	}
	if (!iParam3) {
		gameplay::set_bit(&Global_17290.f_4922, Global_17290.f_4639);
	}
	StringCopy(&Global_17290.f_4641[Global_17290.f_4639 /*16*/], sVar0, 64);
	StringCopy(&Global_17290.f_4834[Global_17290.f_4639 /*4*/], sParam1, 16);
	Global_17290.f_4883[Global_17290.f_4639] = iParam2;
	Global_17290.f_4896[Global_17290.f_4639] = iParam0;
	Global_17290.f_4909[Global_17290.f_4639] = 32;
	Global_17290.f_4639++;
}

// Position - 0x5A1A
void func_79(int iParam0, char *sParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;
	float fVar1;
	float fVar2;
	float *fVar3;
	float fVar4;

	if (Global_17290.f_5088 > iParam0) {
		return;
	}
	if (Global_17290.f_5088 >= 128) {
		return;
	}
	if (Global_17290.f_5090 >= 256) {
		return;
	}
	if (Global_17290.f_5610 < Global_17290.f_5608) {
		return;
	}
	if (Global_17290.f_5088 != iParam0) {
		Global_17290.f_5088 = iParam0;
		Global_17290.f_5089 = 0;
	}
	iVar0 = Global_17290.f_4926[Global_17290.f_5089];
	if (iVar0 != 1) {
		while (Global_17290.f_5089 < 4 && iVar0 != 1) {
			Global_17290.f_5089++;
			iVar0 = Global_17290.f_4926[Global_17290.f_5089];
		}
		if (iVar0 != 1) {
			return;
		}
	}
	StringCopy(&Global_17290.f_73[Global_17290.f_5090 /*6*/], sParam1, 24);
	if (!gameplay::is_string_null_or_empty(sParam1) && !ui::does_text_label_exist(sParam1)) {
	}
	Global_17290.f_1610[Global_17290.f_5090] = iParam3;
	Global_17290.f_1867[Global_17290.f_5090] = iParam4;
	Global_17290.f_5090++;
	if (!iParam3) {
		func_82(Global_17290.f_5088, 1);
	}
	else {
		func_82(Global_17290.f_5088, 0);
	}
	if (iParam2 == 0) {
		fVar1 = func_81(&Global_17290.f_73[Global_17290.f_5090 /*6*/]);
		if (Global_17290.f_4945[Global_17290.f_5089]) {
			func_65(26, 1, 0, &fVar2, &fVar3, 0);
			fVar1 += fVar2 * 2f;
		}
		if (fVar1 > Global_17290.f_4938[Global_17290.f_5089]) {
			Global_17290.f_4938[Global_17290.f_5089] = fVar1;
		}
	}
	if (iParam5) {
		if (iParam2 == 0) {
			fVar4 = func_80(&Global_17290.f_73[Global_17290.f_5090 /*6*/]);
			if (fVar4 > Global_17290.f_5612[iParam0]) {
				Global_17290.f_5612[iParam0] = fVar4;
			}
		}
	}
	gameplay::set_bit(&Global_17290.f_4959[iParam0], Global_17290.f_5089);
	Global_17290.f_5089++;
	Global_17290.f_5611 = 1;
	Global_17290.f_5609 = Global_17290.f_5090 - 1;
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = iParam2;
}

// Position - 0x5C26
var func_80(char *sParam0) {
	if (!ui::does_text_label_exist(sParam0)) {
	}
	return ui::_get_text_scale_height(0.35f, 0);
}

// Position - 0x5C42
float func_81(char *sParam0) {
	if (!gameplay::is_string_null(sParam0)) {
		if (gameplay::get_hash_key(sParam0) == 0) {
			return 0f;
		}
	}
	else {
		return 0f;
	}
	func_45(0, 1, 0, 0, 0, 0, 0);
	ui::_begin_text_command_width(sParam0);
	return ui::_end_text_command_get_width(1);
}

// Position - 0x5C7F
void func_82(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = system::floor(system::to_float(iParam0) / 32f);
	if (iParam1) {
		gameplay::set_bit(&Global_17290.f_5881[iVar0], iParam0 - iVar0 * 32);
	}
	else {
		gameplay::clear_bit(&Global_17290.f_5881[iVar0], iParam0 - iVar0 * 32);
	}
}

// Position - 0x5CCB
void func_83(char *sParam0) {
	func_87(0);
	func_86(sParam0);
	func_85(1, 2, 1, 1, 1);
	func_84(1, 1, 0, 0, 0);
}

// Position - 0x5CF0
void func_84(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	Global_17290.f_4926[0] = iParam0;
	Global_17290.f_4926[1] = iParam1;
	Global_17290.f_4926[2] = iParam2;
	Global_17290.f_4926[3] = iParam3;
	Global_17290.f_4926[4] = iParam4;
	Global_17290.f_5096 = 0;
	if (iParam0 != 0) {
		Global_17290.f_5096++;
	}
	if (iParam1 != 0) {
		Global_17290.f_5096++;
	}
	if (iParam2 != 0) {
		Global_17290.f_5096++;
	}
	if (iParam3 != 0) {
		Global_17290.f_5096++;
	}
	if (iParam4 != 0) {
		Global_17290.f_5096++;
	}
}

// Position - 0x5D9A
void func_85(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	Global_17290.f_4953[0] = iParam0;
	Global_17290.f_4953[1] = iParam1;
	Global_17290.f_4953[2] = iParam2;
	Global_17290.f_4953[3] = iParam3;
	Global_17290.f_4953[4] = iParam4;
}

// Position - 0x5DD9
void func_86(char *sParam0) {
	int iVar0;

	StringCopy(&Global_17290.f_1, sParam0, 16);
	Global_17290.f_68 = 0;
	Global_17290.f_69 = 0;
	Global_17290.f_70 = 0;
	Global_17290.f_71 = 0;
	Global_17290.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4) {
		Global_17290.f_5[iVar0] = 0;
		iVar0++;
	}
}

// Position - 0x5E24
void func_87(int iParam0) {
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = 0;
	while (iVar0 < 256) {
		StringCopy(&Global_17290.f_73[iVar0 /*6*/], "", 24);
		iVar1 = 0;
		while (iVar1 < 4) {
			Global_17290.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32) {
		StringCopy(&Global_2453058[iVar0 /*16*/], "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256) {
		Global_17290.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128) {
		Global_17290.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128) {
		Global_17290.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128) {
		Global_17290.f_4959[iVar0] = 0;
		Global_17290.f_5097[iVar0] = 0;
		Global_17290.f_5226[iVar0] = 0;
		Global_17290.f_5746[iVar0] = 0f;
		Global_17290.f_5355[iVar0] = 0;
		Global_17290.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5) {
		Global_17290.f_4926[iVar0] = 0;
		Global_17290.f_4938[iVar0] = 0f;
		Global_17290.f_4932[iVar0] = -1f;
		Global_17290.f_4945[iVar0] = 0;
		Global_17290.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12) {
		StringCopy(&Global_17290.f_4834[iVar0 /*4*/], "", 16);
		Global_17290.f_4883[iVar0] = -1;
		Global_17290.f_4896[iVar0] = 353;
		Global_17290.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 51) {
		StringCopy(&Global_17290.f_5886[iVar0 /*16*/], "", 64);
		StringCopy(&Global_17290.f_6703[iVar0 /*16*/], "", 64);
		iVar0++;
	}
	StringCopy(&Global_2593974.f_16, "", 16);
	Global_2593974.f_20 = -1;
	Global_17290 = 0;
	Global_17290.f_5088 = 0;
	Global_17290.f_5089 = 0;
	Global_17290.f_5090 = 0;
	Global_17290.f_5092 = 0;
	Global_17290.f_5093 = 0;
	Global_17290.f_5094 = 0;
	Global_17290.f_5091 = 0;
	Global_17290.f_5741 = 0;
	Global_17290.f_5606 = 0;
	Global_17290.f_5605 = 0;
	Global_17290.f_5607 = 0;
	StringCopy(&Global_17290.f_4562, "", 16);
	Global_17290.f_4632 = 0;
	Global_17290.f_4633 = 0;
	Global_17290.f_4634 = 0;
	Global_17290.f_4635 = 0;
	Global_17290.f_4636 = 0;
	Global_17290.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4) {
		Global_17290.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_4638 = 0;
	StringCopy(&Global_2593974.f_21, "", 16);
	Global_2593974.f_61 = 0;
	Global_2593974.f_62 = 0;
	Global_2593974.f_63 = 0;
	Global_2593974.f_64 = 0;
	Global_2593974.f_65 = 0;
	Global_2593974.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4) {
		Global_2593974.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2593974.f_67 = 0;
	StringCopy(&Global_17290.f_1, "", 16);
	Global_17290.f_4944 = 0f;
	Global_17290.f_68 = 0;
	Global_17290.f_69 = 0;
	Global_17290.f_70 = 0;
	Global_17290.f_71 = 0;
	Global_17290.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4) {
		Global_17290.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_5611 = 0;
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = 0;
	Global_17290.f_5609 = 0;
	Global_17290.f_4639 = 0;
	Global_17290.f_4640 = 0;
	Global_17290.f_5095 = 10;
	Global_17290.f_5096 = 0;
	Global_17290.f_5743 = 0f;
	Global_17290.f_5744 = 0f;
	Global_17290.f_5598 = 0;
	Global_17290.f_5599 = 0;
	Global_17290.f_5600 = 0f;
	Global_17290.f_5601 = 0;
	Global_17290.f_5603 = 0;
	Global_17290.f_5602 = 0;
	Global_17290.f_5604 = 0;
	Global_17290.f_7895 = 0;
	iVar0 = 0;
	while (iVar0 < 2) {
		Global_17290.f_5875[iVar0] = -1;
		Global_17290.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17290.f_4951 = 0f;
	Global_17290.f_4922 = 0;
	Global_17290.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17290.f_5881) {
		Global_17290.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_7874 = 0;
	Global_17290.f_7869 = 0;
	Global_17290.f_7879 = 0;
	Global_17290.f_7884 = 0;
	Global_17290.f_7889 = 0;
	Global_17290.f_7891 = 0;
	Global_17290.f_7897 = 0;
	Global_17287 = 0.05f;
	Global_17288 = 0.05f;
	Global_17289 = 0.225f;
	fVar2 = graphics::_get_aspect_ratio(0);
	if (iParam0) {
		Global_17289 = 0.225f * 16f / 9f / fVar2;
	}
	else if (fVar2 < 1.77777f) {
		Global_17289 = 0.225f * 16f / 9f / fVar2;
	}
	else {
		Global_17289 = 0.225f;
	}
}

// Position - 0x62E2
void func_88() {
	int iVar0;
	struct<2> Var1;
	int iVar5;

	func_83("JBOX_MENU_T");
	iVar0 = 0;
	while (iVar0 < 4) {
		StringCopy(&Var1, "JBOX_PLIST_", 16);
		iVar5 = iVar0 != Local_132.f_2;
		if (!func_148()) {
			iVar5 = 1;
		}
		StringIntConCat(&Var1, iVar0, 16);
		func_79(iVar0, &Var1, 0, iVar5, 0, 0);
		if (iVar5) {
			func_79(iVar0, "JBOX_CHARGE", 0, iVar5, 0, 0);
		}
		iVar0++;
	}
	if (func_148()) {
		func_79(iVar0, "JBOX_M_OFF", 0, 1, 0, 0);
	}
	func_75(iLocal_104, 1, 1);
	func_78(201, "ITEM_SELECT", -1, 0);
	func_78(202, "ITEM_BACK", -1, 0);
}

// Position - 0x637C
void func_89() {
	func_83("JBOX_MENU_T");
	func_79(0, "JBOX_M_OFF", 0, 1, 0, 0);
	func_75(iLocal_104, 1, 1);
	func_78(201, "ITEM_SELECT", -1, 0);
	func_78(202, "ITEM_BACK", -1, 0);
}

// Position - 0x63B9
bool func_90(char *sParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_36(&iVar0, 1, iParam1)) {
		return false;
	}
	iVar1 = 1;
	StringCopy(&Global_17290.f_5505[iVar0 /*4*/], sParam0, 16);
	if (!gameplay::is_string_null_or_empty(&Global_17290.f_5505[iVar0 /*4*/])) {
		ui::request_additional_text(&Global_17290.f_5505[iVar0 /*4*/], 9);
		Global_17290.f_5498[iVar0] = 1;
		if (!ui::has_this_additional_text_loaded(&Global_17290.f_5505[iVar0 /*4*/], 9)) {
			iVar1 = 0;
		}
	}
	graphics::request_streamed_texture_dict("CommonMenu", 0);
	Global_17290.f_5484[iVar0] = 1;
	if (!graphics::has_streamed_texture_dict_loaded("CommonMenu")) {
		iVar1 = 0;
	}
	if (iParam2) {
		graphics::request_streamed_texture_dict("MPShopSale", 0);
		Global_17290.f_5491[iVar0] = 1;
		if (!graphics::has_streamed_texture_dict_loaded("MPShopSale")) {
			iVar1 = 0;
		}
	}
	iVar2 = 0;
	StringCopy(&Global_17290.f_5530[iVar0 /*10*/].f_1, "instructional_buttons", 24);
	iVar2 = func_91(&Global_17290.f_5530[iVar0 /*10*/]);
	if (!iVar1 || !iVar2) {
	}
	return iVar1 & iVar2;
}

// Position - 0x64AB
bool func_91(var *uParam0) {
	switch (uParam0->f_9) {
	case 0:
		if (!graphics::has_scaleform_movie_loaded(*uParam0)) {
			*uParam0 = unk_0x67D02A194A2FC2BD(&uParam0->f_1);
			uParam0->f_9 = 1;
			if (uParam0->f_7) {
				if (graphics::has_scaleform_movie_loaded(*uParam0)) {
					uParam0->f_8 = gameplay::get_game_timer();
					uParam0->f_9 = 2;
				}
			}
		}
		else {
			uParam0->f_8 = gameplay::get_game_timer();
			uParam0->f_9 = 2;
		}
		break;

	case 1:
		if (graphics::has_scaleform_movie_loaded(*uParam0)) {
			uParam0->f_8 = gameplay::get_game_timer();
			uParam0->f_9 = 2;
		}
		break;

	case 2:
		if (!graphics::has_scaleform_movie_loaded(*uParam0)) {
			uParam0->f_9 = 0;
		}
		break;
	}
	return uParam0->f_9 == 2;
}

// Position - 0x654D
void func_92() {
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	iVar1 = 150;
	if (controls::_is_input_just_disabled(2)) {
		iVar1 = 110;
	}
	func_115();
	controls::enable_control_action(2, 195, 1);
	controls::enable_control_action(2, 196, 1);
	controls::enable_control_action(2, 201, 1);
	controls::enable_control_action(2, 188, 1);
	controls::enable_control_action(2, 187, 1);
	bVar4 = controls::is_control_just_pressed(2, 201);
	bVar5 = controls::is_control_just_pressed(2, 202) | controls::is_disabled_control_just_pressed(2, 202);
	iVar0 = controls::get_control_value(2, 196);
	if (!gameplay::is_bit_set(iLocal_110, 0)) {
		if (controls::_is_input_just_disabled(2)) {
			func_106(&bVar2, &bVar3, &bVar4, &bVar5);
		}
		else {
			bVar2 = iVar0 < 100 || controls::is_control_pressed(2, 188);
			bVar3 = iVar0 > 150 || controls::is_control_pressed(2, 187);
		}
		if (bVar2 || bVar3) {
			func_16(&uLocal_117, 0, 0);
			gameplay::set_bit(&iLocal_110, 0);
		}
	}
	else if (func_15(&uLocal_117, iVar1, 0)) {
		func_126(&uLocal_117);
		gameplay::clear_bit(&iLocal_110, 0);
	}
	if (bVar3) {
		iLocal_104++;
		if (iLocal_104 > func_105()) {
			iLocal_104 = 0;
		}
		audio::play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
	}
	if (bVar2) {
		iLocal_104--;
		if (iLocal_104 < 0) {
			iLocal_104 = func_105();
		}
		audio::play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
	}
	if (bVar4) {
		bVar6 = false;
		switch (iLocal_115) {
		case 1:
			iLocal_115 = 0;
			iLocal_104 = 0;
			iLocal_103 = 4;
			func_137(4);
			gameplay::clear_bit(&iLocal_110, 5);
			break;

		case 0:
			if (iLocal_104 != Local_132.f_2 || !func_148()) {
				iLocal_103 = iLocal_104;
				iLocal_115 = 2;
				iLocal_104 = 0;
				gameplay::set_bit(&iLocal_110, 1);
				gameplay::set_bit(&iLocal_110, 4);
			}
			else {
				bVar6 = true;
			}
			break;

		case 2:
			if (iLocal_104 == 0) {
				iLocal_108 = 0;
				func_137(4);
				if (iLocal_103 != 4) {
					gameplay::set_bit(&iLocal_110, 5);
					func_93(iLocal_103);
				}
			}
			else {
				iLocal_115 = 0;
				iLocal_104 = 0;
				gameplay::set_bit(&iLocal_110, 1);
			}
			break;
		}
		if (bVar6) {
			audio::play_sound_frontend(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		}
		else {
			audio::play_sound_frontend(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		}
	}
	if (bVar5) {
		audio::play_sound_frontend(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		switch (iLocal_115) {
		case 0:
			iLocal_115 = 0;
			iLocal_103 = -1;
			func_137(4);
			gameplay::clear_bit(&iLocal_110, 5);
			break;

		case 1:
			iLocal_104 = 0;
			iLocal_103 = -1;
			func_137(4);
			gameplay::clear_bit(&iLocal_110, 5);
			break;

		case 2:
			iLocal_115 = 0;
			iLocal_104 = 0;
			iLocal_103 = -1;
			gameplay::set_bit(&iLocal_110, 1);
			break;
		}
	}
}

// Position - 0x67B5
void func_93(int iParam0) {
	var uVar0;
	int iVar1;

	if (func_4(iLocal_105, -1)) {
		uVar0 = gameplay::get_hash_key(func_104(iParam0));
	}
	if (func_103()) {
		func_94(1976384368, 1, &iVar1, 0, 0, 1);
		Global_2590252[iVar1 /*76*/].f_8 = uVar0;
	}
	else {
		unk_0x5BCDE0F640C773D2(1, uVar0, 0, 0);
	}
}

// Position - 0x6801
void func_94(int iParam0, int iParam1, int *iParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;

	if (!func_103()) {
		return;
	}
	iVar0 = 1;
	if (iParam4) {
		iVar0 = 4;
	}
	else if (iParam3) {
		iVar0 = 2;
	}
	else if (iParam5) {
		iVar0 = 8;
	}
	switch (iParam0) {
	case -1645229221:
	case -585718395:
	case -1359375127:
	case 454359403:
	case -982394051:
	case 1643659499:
	case -2072289654:
	case 650665123:
	case 1654961868:
	case -876847842:
	case 68030260:
	case -2122299283:
	case 366672791:
	case 283351220:
	case 291576838:
	case 1182673174:
	case -516219046:
	case 1036455748:
	case 277665518:
	case 2043854386:
	case 1839532116:
	case 1022400740:
	case 1940862352:
	case -1389227906:
	case 711665950:
	case 1704445500:
	case 1515774909:
	case 1173654533:
	case -899802304:
	case -663944335:
	case 1208553146:
	case -613221010:
	case -671062876:
	case -407201236:
	case -754024203:
	case -1885444887:
	case 1931729587:
	case 1064954035:
	case -180141073:
	case 2131324797:
	case 1612072658:
	case -517447402:
	case 1948102096:
	case 1108628223:
	case -1834046564:
	case -1239008812:
	case -222363842:
	case -1276678868:
	case 1564537328:
	case -96593501:
	case 742499889:
	case 2050093329:
	case -1752488069:
	case 634375935:
	case 1850983186:
	case 763367758:
	case 1941570214:
	case 665109499:
	case -1330755006:
	case 1976384368:
	case 268924934:
	case 1869490922:
	case -336803850:
	case -1412692765:
	case 618167454:
	case 980623936:
	case 437291904:
	case -135813048:
		if (iParam1 > 0) {
			func_95(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
		}
		break;

	case -31156877:
	case -1027218631:
	case -1398318418:
	case 1652884147:
	case -57868256:
	case -1216489292:
	case -46622315:
	case -352356931:
	case -990286235:
	case 563463121:
	case 1734805203:
	case 941287179:
	case -1186079845:
	case -1985150258:
	case -1127021384:
	case -109201286:
	case 312105838:
	case 1982688246:
	case -661030418:
	case 1301046174:
	case -1586170317:
	case 393059668:
	case 23796958:
	case -1077156170:
	case 1780666425:
	case -2043695058:
	case -1922554349:
	case 1287308202:
	case 691372038:
	case 1480707108:
	case 1512499951:
	case 562283735:
	case -154732333:
	case -1362660491:
	case 645708827:
	case 767907967:
	case -1970151306:
	case 718859568:
	case -1955564771:
	case 892388724:
	case -1426920838:
	case 1349151477:
	case 1620609399:
	case 1961641934:
	case 210955503:
	case -59668082:
	case 1736933716:
	case -1468524125:
	case 111573502:
	case 1525644423:
	case 968073639:
	case 1577781788:
	case -934465332:
	case -1194253122:
	case -212607085:
	case -815546555:
	case 1048226110:
	case 569170531:
	case -856006867:
	case 848090538:
	case -47546905:
	case -293060240: func_95(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7); break;
	}
}

// Position - 0x6B8F
int func_95(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) {
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar0 = false;
	if (!func_103()) {
		bVar0 = true;
	}
	if (!bVar0) {
		if (!unk3::_network_shop_get_transactions_enabled_for_character(func_12()) ||
			unk3::_network_shop_get_transactions_disabled()) {
			Global_2590762 = 1;
			return 0;
		}
		if (Global_2453677) {
			if (iParam3 == 1067618600 || iParam3 == -1303831698) {
				Global_2590763 = 1;
				return 0;
			}
		}
	}
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 5) {
		if (Global_2590252[iVar1 /*76*/].f_2 == 0) {
			iVar2 = 1;
		}
		iVar1++;
	}
	if (!iVar2) {
		return 0;
	}
	*iParam0 = 5;
	iVar3 = 2147483647;
	if (bVar0 || unk3::_network_shop_begin_service(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6)) {
		if (bVar0 || unk3::_network_shop_checkout_start(iVar3)) {
			*iParam0 = func_102(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0) {
				if (*iParam0 != -1) {
					Global_2590252[*iParam0 /*76*/].f_69 = 1;
				}
			}
			Global_2590752 = 1;
			return 1;
		}
	}
	else {
		if ((iParam7 & 2) != 0) {
			Global_2590761 = 1;
			Global_2590764 = iParam4;
			Global_2590766 = iParam3;
			Global_2590767 = 1;
			Global_2590765 = iParam5;
		}
		if ((iParam7 & 8) != 0) {
			Global_2590764 = iParam4;
			Global_2590766 = iParam3;
			Global_2590767 = 1;
			Global_2590765 = iParam5;
		}
		bVar4 = false;
		if (bVar4) {
			func_101(1, iParam4);
			Global_2590761 = 0;
		}
		if ((iParam7 & 4) != 0) {
			func_96(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

// Position - 0x6D03
void func_96(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	switch (iParam1) {
	case 1704445500: gameplay::set_bit(&Global_2421664[player::player_id() /*358*/].f_125.f_71, 0); break;
	}
	if (iParam0 != -1) {
		func_97(iParam0);
	}
}

// Position - 0x6D3B
void func_97(int iParam0) {
	int iVar0;

	iVar0 = 0;
	if (!func_103()) {
		iVar0 = 1;
	}
	if (iParam0 != -1) {
		if (func_100(iParam0)) {
			if (!iVar0) {
				unk3::_0xFA336E7F40C0A0D0();
			}
		}
		else if (!iVar0) {
			unk3::_network_shop_end_service(Global_2590252[iParam0 /*76*/]);
		}
		func_98(&Global_2590252[iParam0 /*76*/]);
	}
}

// Position - 0x6D8D
void func_98(var *uParam0) {
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_99(&uParam0->f_8.f_3);
	func_99(&uParam0->f_8.f_16);
	StringCopy(&uParam0->f_8.f_29, "", 32);
	StringCopy(&uParam0->f_8.f_37, "", 24);
	StringCopy(&uParam0->f_8.f_43, "", 16);
	StringCopy(&uParam0->f_8.f_47, "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
}

// Position - 0x6E78
void func_99(var *uParam0) {
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

// Position - 0x6EC0
bool func_100(int iParam0) {
	if (iParam0 >= 0 && iParam0 < 5) {
		return Global_2590252[iParam0 /*76*/].f_5 == 1;
	}
	return false;
}

// Position - 0x6EE8
void func_101(int iParam0, int iParam1) {
	Global_2454840 = iParam1;
	Global_2454839 = iParam0;
}

// Position - 0x6EFC
int func_102(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 var uParam8) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5) {
		if (Global_2590252[iVar0 /*76*/].f_2 == 0) {
			if (!func_103()) {
				iParam0 = iVar0 + 900;
			}
			Global_2590252[iVar0 /*76*/].f_2 = 1;
			Global_2590252[iVar0 /*76*/].f_1 = iParam5;
			Global_2590252[iVar0 /*76*/].f_3 = uParam1;
			Global_2590252[iVar0 /*76*/].f_4 = iParam2;
			Global_2590252[iVar0 /*76*/].f_7 = iParam3;
			Global_2590252[iVar0 /*76*/].f_5 = 0;
			Global_2590252[iVar0 /*76*/] = iParam0;
			Global_2590252[iVar0 /*76*/].f_6 = iParam4;
			Global_2590252[iVar0 /*76*/].f_72 = uParam8;
			Global_2590252[iVar0 /*76*/].f_71 = iParam7;
			Global_2590252[iVar0 /*76*/].f_75 = 0;
			Global_2590752 = 0;
			if (iParam6) {
				Global_2590252[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x6FD0
bool func_103() {
	if (gameplay::is_pc_version()) {
		return true;
	}
	return false;
}

// Position - 0x6FE4
char *func_104(int iParam0) {
	switch (iParam0) {
	case 0: return "HIDDEN_RADIO_BIKER_CLASSIC_ROCK";

	case 1: return "HIDDEN_RADIO_BIKER_MODERN_ROCK";

	case 2: return "HIDDEN_RADIO_BIKER_HIP_HOP";

	case 3: return "HIDDEN_RADIO_BIKER_PUNK";

	default:
	}
	return "HIDDEN_RADIO_BIKER_CLASSIC_ROCK";
}

// Position - 0x702B
int func_105() {
	switch (iLocal_115) {
	case 2: return 1;

	case 0:
		if (func_148()) {
			return 4;
		}
		else {
			return 3;
		}
		break;

	case 1: return 0;
	}
	return 0;
}

// Position - 0x706A
void func_106(int *iParam0, int *iParam1, int *iParam2, int *iParam3) {
	if (gameplay::is_pc_version() && !network::_network_is_text_chat_active()) {
		if (controls::_is_input_just_disabled(2)) {
			controls::disable_control_action(0, 1, 1);
			controls::disable_control_action(0, 2, 1);
			controls::disable_control_action(2, 200, 1);
			controls::enable_control_action(0, 237, 1);
			controls::enable_control_action(0, 238, 1);
			controls::enable_control_action(0, 241, 1);
			controls::enable_control_action(0, 242, 1);
			if (Global_2594050 == -1 || Global_2594050 == -4 || Global_2594050 == -6) {
				controls::enable_control_action(1, 1, 1);
				controls::enable_control_action(1, 2, 1);
			}
			else {
				controls::disable_control_action(1, 1, 1);
				controls::disable_control_action(1, 2, 1);
			}
			func_112(0, 0, 0, 1);
			func_111(0, -1, 1);
		}
		if (func_110()) {
			if (Global_2594050 == iLocal_104) {
				*iParam2 = 1;
			}
			else {
				iLocal_104 = Global_2594050;
				func_75(iLocal_104, 1, 1);
			}
		}
		if (func_109()) {
			*iParam3 = 1;
		}
		if (func_108(0, 0, 0) || controls::is_control_pressed(2, 188)) {
			*iParam0 = 1;
		}
		if (func_107(0, 0, 0) || controls::is_control_pressed(2, 187)) {
			*iParam1 = 1;
		}
	}
}

// Position - 0x717B
int func_107(int iParam0, int iParam1, int iParam2) {
	if (controls::_is_input_disabled(2)) {
		if (Global_2594050 == -3) {
			if (controls::is_control_pressed(2, 237) && iParam0 || controls::is_control_just_pressed(2, 237)) {
				return 1;
			}
		}
		if (iParam2 == 0) {
			if (controls::is_control_pressed(2, 242) || controls::is_disabled_control_pressed(2, 242) && iParam1) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x71E0
int func_108(int iParam0, int iParam1, int iParam2) {
	if (controls::_is_input_disabled(2)) {
		if (Global_2594050 == -2) {
			if (controls::is_control_pressed(2, 237) && iParam0 || controls::is_control_just_pressed(2, 237)) {
				return 1;
			}
		}
		if (iParam2 == 0) {
			if (controls::is_control_pressed(2, 241) || controls::is_disabled_control_pressed(2, 241) && iParam1) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x7245
bool func_109() {
	if (controls::_is_input_disabled(2)) {
		if (controls::is_control_just_pressed(2, 238)) {
			return true;
		}
	}
	return false;
}

// Position - 0x7264
bool func_110() {
	if (controls::_is_input_disabled(2)) {
		if (Global_2594050 > -1) {
			if (controls::is_control_just_pressed(2, 237)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x728B
int func_111(int iParam0, int iParam1, int iParam2) {
	if (!controls::_is_input_disabled(2)) {
		return 0;
	}
	if (ui::is_pause_menu_active() || ui::is_warning_message_active()) {
		return 0;
	}
	if (iParam2) {
		ui::_show_cursor_this_frame();
	}
	if (Global_2594050 == -6) {
		ui::_set_cursor_sprite(4);
		if (iParam0 && controls::is_control_pressed(2, 237)) {
			return 1;
		}
		else {
			Global_2594050 = -1;
			return 0;
		}
	}
	if (Global_2594050 > -1 || Global_2594050 == -3 || Global_2594050 == -2 || ui::_0x3D9ACB1EB139E702()) {
		ui::_set_cursor_sprite(1);
		return 0;
	}
	if (Global_2594050 == -1 && iParam0) {
		if (controls::is_control_pressed(2, 237)) {
			ui::_set_cursor_sprite(4);
			Global_2594050 = -6;
			return 1;
		}
		else {
			ui::_set_cursor_sprite(3);
			return 0;
		}
	}
	ui::_set_cursor_sprite(1);
	return 0;
}

// Position - 0x736B
void func_112(int iParam0, int iParam1, int iParam2, int iParam3) {
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	fVar6 = 0.034722f / 2f;
	iVar13 = -1;
	if (!controls::_is_input_disabled(2)) {
		Global_2594050 = -1;
		return;
	}
	controls::_0x5B73C77D9EB66E24(1);
	fVar0 = Global_17287;
	fVar2 = fVar0 + Global_17289;
	fVar3 = Global_17290.f_5600;
	fVar1 = Global_17290.f_5600 - IntToFloat(Global_17290.f_5602) * 0.034722f;
	if (iParam2) {
		fVar3 += 0.034722f;
		fVar1 += 0.034722f;
	}
	if (Global_17290.f_5602 < 1) {
		fVar1 = Global_17290.f_5600 - 0.034722f;
	}
	graphics::_set_screen_draw_position(76, 84);
	graphics::_screen_draw_position_ratio(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	graphics::_0x6DD8F5AA635EB4B2(fVar0, fVar1, &fVar0, &fVar1);
	graphics::_0x6DD8F5AA635EB4B2(fVar2, fVar3, &fVar2, &fVar3);
	graphics::_screen_draw_position_end();
	func_114();
	if (Global_2594050 == -6) {
		return;
	}
	Global_2594050 = -1;
	fVar7 = Global_2594044;
	fVar8 = Global_2594045;
	if (Global_17290.f_5603 > Global_17290.f_5602) {
		if (Global_2594044 >= fVar0 && Global_2594044 <= fVar2 && Global_2594045 >= fVar3 &&
			Global_2594045 < fVar3 + fVar6) {
			Global_2594050 = -2;
			if (iParam3) {
				func_113(0);
			}
			return;
		}
		if (Global_2594044 >= fVar0 && Global_2594044 <= fVar2 && Global_2594045 >= fVar3 + fVar6 &&
			Global_2594045 < fVar3 + 0.034722f) {
			Global_2594050 = -3;
			if (iParam3) {
				func_113(0);
			}
			return;
		}
	}
	if (fVar7 >= fVar0 && fVar7 <= fVar2 && fVar8 >= fVar1 && fVar8 <= fVar3) {
		fVar9 = fVar8 - fVar1;
		iVar13 = system::floor(fVar9 / 0.034722f);
		if (Global_17290.f_5603 == -1) {
			Global_2594050 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = iVar11 / Global_17290.f_5602;
		iVar10 = 32 + iVar11 - iVar12 * iVar13;
		if (iParam3) {
			if (!iParam1 || iVar13 != 0) {
				graphics::_set_screen_draw_position(76, 84);
				graphics::_screen_draw_position_ratio(-0.05f, -0.05f, 0f, 0f);
				func_59(fVar4, fVar5 + IntToFloat(iVar13) * 0.034722f, Global_17289, 0.034722f - 0.0015f, 255, 255, 255,
						iVar10);
				graphics::_screen_draw_position_end();
			}
		}
		Global_2594050 = Global_17290.f_7520[iVar13];
		return;
	}
	if (!iParam0) {
		if (fVar7 < fVar2) {
			Global_2594050 = -4;
			return;
		}
		if (fVar8 > 0.9f) {
			Global_2594050 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < fVar3 + 0.25f) {
		Global_2594050 = -4;
		return;
	}
	Global_2594050 = -1;
}

// Position - 0x7617
void func_113(int iParam0) {
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 0.034722f / 2f;
	if (iParam0) {
		iVar3 = 48;
	}
	else {
		iVar3 = 210;
	}
	fVar0 = Global_17287;
	fVar1 = Global_17290.f_5600;
	graphics::_set_screen_draw_position(76, 84);
	graphics::_screen_draw_position_ratio(-0.05f, -0.05f, 0f, 0f);
	if (Global_2594050 == -2) {
		func_59(fVar0, fVar1, Global_17289, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2594050 == -3) {
		func_59(fVar0, fVar1 + fVar2, Global_17289, fVar2, 255, 255, 255, iVar3);
	}
	graphics::_screen_draw_position_end();
}

// Position - 0x76A0
void func_114() {
	Global_2594046 = Global_2594044;
	Global_2594047 = Global_2594045;
	Global_2594044 = controls::get_disabled_control_normal(2, 239);
	Global_2594045 = controls::get_disabled_control_normal(2, 240);
	Global_2594048 = Global_2594044 - Global_2594046;
	Global_2594049 = Global_2594045 - Global_2594047;
}

// Position - 0x76E8
void func_115() {
	func_116(1);
	func_29(1);
	if (!player::is_system_ui_being_displayed() && !ui::is_pause_menu_active()) {
		controls::disable_all_control_actions(0);
		controls::enable_all_control_actions(1);
		controls::disable_control_action(2, 200, 1);
	}
}

// Position - 0x771E
void func_116(int iParam0) {
	if (iParam0) {
		if (func_117()) {
			Global_2443134.f_27 = 1;
		}
	}
	else {
		Global_2443134.f_27 = 0;
	}
}

// Position - 0x7743
bool func_117() { return gameplay::is_bit_set(Global_2443134.f_2, 11); }

// Position - 0x7757
bool func_118() { return ui::get_pause_menu_state() != 0; }

// Position - 0x7765
bool func_119() {
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		switch (iLocal_108) {
		case 0:
			if (func_33("SELECT_TRACK", 1, 0)) {
				iLocal_108 = 1;
			}
			break;

		case 1:
			if (func_33("IDLE", 0, 1)) {
				iLocal_108 = 0;
				return true;
			}
			break;
		}
	}
	func_28();
	return false;
}

// Position - 0x77BF
bool func_120() {
	vector3 vVar0;

	func_115();
	switch (iLocal_108) {
	case 0:
		func_28();
		vVar0 = {entity::get_offset_from_entity_in_world_coords(iLocal_100, 0.06f, -0.8958f, 0.2f)};
		if (!func_17(&uLocal_119)) {
			func_16(&uLocal_119, 0, 0);
		}
		else if (func_15(&uLocal_119, 2000, 0)) {
			iLocal_108 = 1;
		}
		if (!func_125(entity::get_entity_coords(player::player_ped_id(), 1), vVar0, 0.55f, 0) ||
			!func_124(entity::get_entity_heading(player::player_ped_id()), entity::get_entity_heading(iLocal_100),
					  15f)) {
			if (!func_121(player::player_ped_id(), 2106541073)) {
				ai::task_go_straight_to_coord(player::player_ped_id(), vVar0, 1f, 4000,
											  entity::get_entity_heading(iLocal_100), 0.125f);
			}
		}
		else {
			iLocal_108 = 1;
		}
		break;

	case 1:
		if (func_33("ENTER", 1, 0)) {
			func_126(&uLocal_119);
			iLocal_108 = 2;
		}
		break;

	case 2:
		if (func_33("IDLE", 0, 1)) {
			iLocal_108 = 0;
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x78C5
int func_121(int iParam0, int iParam1) {
	if (func_122(iParam0)) {
		if (ai::get_script_task_status(iParam0, iParam1) == 1 || ai::get_script_task_status(iParam0, iParam1) == 0) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x78F8
bool func_122(int iParam0) {
	if (func_123(iParam0)) {
		if (!ped::is_ped_injured(iParam0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x7918
bool func_123(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x7939
int func_124(float fParam0, float fParam1, float fParam2) {
	float fVar0;
	float fVar1;

	fVar1 = fParam1 - fParam2;
	if (fVar1 < 0f) {
		fVar1 += 360f;
	}
	fVar0 = fParam1 + fParam2;
	if (fVar0 >= 360f) {
		fVar0 -= 360f;
	}
	if (fVar0 > fVar1) {
		if (fParam0 < fVar0 && fParam0 > fVar1) {
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1) {
		return 1;
	}
	return 0;
}

// Position - 0x79AE
int func_125(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7) {
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

// Position - 0x7A29
void func_126(var *uParam0) { uParam0->f_1 = 0; }

// Position - 0x7A36
void func_127(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;

	if (iParam1) {
		if (script::_get_no_loading_screen()) {
			script::set_no_loading_screen(0);
		}
	}
	if (!network::network_is_game_in_progress()) {
		iVar0 = iParam2;
		player::set_player_control(iParam0, iParam1, iVar0);
	}
	else {
		bVar1 = (iParam2 & 2) != false;
		bVar2 = (iParam2 & 4) != false;
		bVar3 = (iParam2 & 8) != false;
		bVar4 = (iParam2 & 16) != false;
		bVar5 = (iParam2 & 32) != false;
		bVar6 = (iParam2 & 64) != false;
		bVar7 = (iParam2 & 128) != false;
		bVar8 = (iParam2 & 256) != false;
		bVar9 = (iParam2 & 512) != false;
		bVar10 = (iParam2 & 1024) != false;
		bVar11 = (iParam2 & 2048) != false;
		bVar12 = (iParam2 & 4096) != false;
		bVar13 = (iParam2 & 8192) != false;
		bVar14 = (iParam2 & 16384) != false;
		iVar15 = (iParam2 & 32768) != 0;
		iVar16 = (iParam2 & 65536) != 0;
		bVar17 = (iParam2 & 131072) != false;
		bVar18 = (iParam2 & 262144) != false;
		bVar19 = (iParam2 & 524288) != false;
		bVar20 = (iParam2 & 1048576) != false;
		bVar21 = (iParam2 & 2097152) != false;
		bVar22 = (iParam2 & 4194304) != false;
		bVar23 = (iParam2 & 8388608) != false;
		if (!func_132()) {
			bVar24 = false;
			if (iParam1 == 1) {
				bVar24 = true;
			}
			if (iVar15 == 0 && !bVar20) {
				bVar24 = true;
			}
			if (bVar9 == 1) {
				bVar24 = true;
			}
			if (bVar24) {
				return;
			}
		}
		if (bVar17) {
		}
		if (network::network_is_player_active(iParam0) && player::is_player_playing(iParam0)) {
			iVar25 = player::get_player_ped(iParam0);
			if (!bVar19) {
				if (bVar18 && iParam1 == 0 && network::network_is_game_in_progress()) {
					network::fade_out_local_player(1);
				}
				else {
					entity::set_entity_visible(iVar25, !bVar13, 0);
				}
				if (!bVar13) {
					if (network::network_is_game_in_progress() && !bVar18) {
						network::fade_out_local_player(0);
					}
					Global_2421664[iParam0 /*358*/].f_247 = 0;
				}
			}
			if (iParam1) {
				if (!func_131(iVar25) && !entity::is_entity_attached_to_any_vehicle(iVar25)) {
					if (!bVar21) {
						entity::set_entity_collision(iVar25, 1, 0);
					}
				}
				if (!entity::is_entity_attached(iVar25)) {
					if (!bVar20) {
						entity::freeze_entity_position(iVar25, 0);
					}
					entity::_set_entity_register(iVar25, 1);
				}
				else if (!bVar20) {
					entity::freeze_entity_position(iVar25, 0);
				}
				ped::set_ped_can_be_targetted(iVar25, 1);
				player::set_player_invincible(iParam0, 0);
				ped::_0x4668D80430D6C299(iVar25);
				ped::set_ped_can_ragdoll(iVar25, 1);
				func_130();
				func_129();
				if (player::is_player_teleport_active()) {
					if (!bVar22) {
					}
				}
				if (streaming::is_new_load_scene_active()) {
				}
				Global_2421664[iParam0 /*358*/].f_248 = 0;
				if (!bVar23) {
					bVar2 = true;
				}
			}
			else {
				if (!func_131(iVar25) && !entity::is_entity_attached_to_any_vehicle(iVar25)) {
					if (!bVar21) {
						entity::set_entity_collision(iVar25, !bVar14, 0);
					}
					if (!entity::is_entity_attached(iVar25)) {
						if (!bVar20) {
							entity::freeze_entity_position(iVar25, iVar15);
						}
						if (!iVar15) {
							entity::_set_entity_register(iVar25, 1);
						}
					}
					if (func_128(Global_1633501.f_107548)) {
						entity::freeze_entity_position(iVar25, 1);
					}
				}
				if (bVar9) {
					player::set_player_invincible(iParam0, 0);
				}
				else {
					player::set_player_invincible(iParam0, 1);
				}
				ped::set_ped_can_be_targetted(iVar25, iVar16);
				if (bVar2) {
					if (!ped::is_ped_fatally_injured(iVar25) && !ped::is_ped_in_any_vehicle(iVar25, 0)) {
						ai::clear_ped_tasks_immediately(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1) {
				iVar26 |= 2;
			}
			if (bVar2) {
				iVar26 |= 4;
			}
			if (bVar3) {
				iVar26 |= 8;
			}
			if (bVar4) {
				iVar26 |= 16;
			}
			if (bVar5) {
				iVar26 |= 32;
			}
			if (bVar6) {
				iVar26 |= 64;
			}
			if (bVar7) {
				iVar26 |= 128;
			}
			if (bVar8) {
				iVar26 |= 256;
			}
			if (bVar9) {
				iVar26 |= 512;
			}
			if (bVar10) {
				iVar26 |= 1024;
			}
			if (bVar11) {
				iVar26 |= 2048;
			}
			if (bVar12) {
				iVar26 |= 4096;
			}
			player::set_player_control(iParam0, iParam1, iVar26);
		}
	}
}

// Position - 0x7DED
bool func_128(int iParam0) { return iParam0 == 17; }

// Position - 0x7DFA
void func_129() {
	struct<2> Var0;

	Global_2433125.f_731 = 0;
	Global_2433125.f_732 = 0;
	Global_2433125.f_733 = {9999.9f, 9999.9f, 9999.9f};
	Global_2404994.f_2220 = {Var0};
}

// Position - 0x7E37
void func_130() {
	Global_2404994.f_644 = 0;
	Global_2404994.f_2261 = 0;
	Global_2404994.f_501 = 0;
	Global_2404994.f_576 = 0;
	Global_2421664[player::player_id() /*358*/].f_210 = 0;
}

// Position - 0x7E6D
int func_131(int iParam0) {
	int iVar0;

	if (ped::is_ped_in_any_vehicle(iParam0, 1)) {
		return 1;
	}
	else {
		iVar0 = ai::get_script_task_status(iParam0, -1794415470);
		if (iVar0 == 0) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x7E9E
int func_132() {
	if (func_133() == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x7EB3
int func_133() { return Global_1312466.f_18; }

// Position - 0x7EC1
void func_134(char *sParam0) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 1, 1, -1);
}

// Position - 0x7ED7
void func_135(int *iParam0) {
	int iVar0;

	if (*iParam0 == -1) {
		return;
	}
	iVar0 = func_136(*iParam0);
	if (iVar0 == -1) {
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6) {
		if (Global_36484[iVar0 /*32*/]) {
			Global_36484[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

// Position - 0x7F2E
int func_136(int iParam0) {
	int iVar0;

	if (iParam0 < 0) {
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6) {
		if (Global_36484[iVar0 /*32*/].f_1 == iParam0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x7F69
void func_137(int iParam0) { iLocal_116 = iParam0; }

// Position - 0x7F75
int func_138(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = func_136(iParam0);
	if (iVar0 == -1) {
		return 0;
	}
	if (!player::is_player_playing(player::get_player_index())) {
		return 0;
	}
	if (func_32(0)) {
		return 0;
	}
	if (cutscene::is_cutscene_playing()) {
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6) {
		if (Global_36484[iVar0 /*32*/] == 1 && Global_36484[iVar0 /*32*/].f_4 == 1) {
			if (iParam1) {
				if (Global_36484[iVar0 /*32*/].f_29) {
					return 0;
				}
			}
			Global_36484[iVar0 /*32*/].f_5 = 1;
			Global_36484[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else {
			if (Global_36484[iVar0 /*32*/] == 0) {
			}
			if (Global_36484[iVar0 /*32*/].f_7) {
			}
		}
	}
	return 0;
}

// Position - 0x802E
void func_139(int iParam0, int iParam1, char *sParam2, int iParam3, char *sParam4, int iParam5, int iParam6) {
	int iVar0;

	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("context_controller")) < 1) {
	}
	if (streaming::is_player_switch_in_progress()) {
		if (*iParam0 != -1) {
			func_135(iParam0);
		}
		return;
	}
	if (*iParam0 != -1) {
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6) {
		if (!Global_36484[iVar0 /*32*/]) {
			Global_36484[iVar0 /*32*/] = 1;
			Global_36484[iVar0 /*32*/].f_1 = Global_36685;
			Global_36685++;
			Global_36484[iVar0 /*32*/].f_4 = 0;
			Global_36484[iVar0 /*32*/].f_29 = 0;
			Global_36484[iVar0 /*32*/].f_5 = 0;
			Global_36484[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&Global_36484[iVar0 /*32*/].f_8, sParam2, 16);
			Global_36484[iVar0 /*32*/].f_6 = iParam3;
			Global_36484[iVar0 /*32*/].f_31 = script::get_id_of_this_thread();
			Global_36484[iVar0 /*32*/].f_7 = 0;
			Global_36484[iVar0 /*32*/].f_3 = iParam5;
			if (!gameplay::is_string_null_or_empty(sParam4)) {
				Global_36484[iVar0 /*32*/].f_12 = 1;
				StringCopy(&Global_36484[iVar0 /*32*/].f_13, sParam4, 64);
				Global_36484[iVar0 /*32*/].f_30 = iParam6;
			}
			else {
				Global_36484[iVar0 /*32*/].f_12 = 0;
				Global_36484[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36484[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

// Position - 0x8159
void func_140() {
	if (ui::is_help_message_being_displayed() && func_141("JBOX_NO_MONEY")) {
		ui::clear_help(1);
	}
}

// Position - 0x8179
var func_141(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0x818C
int func_142() {
	if (func_148() || networkcash::network_get_vc_wallet_balance(-1) > 0) {
		return 1;
	}
	return 0;
}

// Position - 0x81AD
int func_143() {
	if (!gameplay::is_bit_set(Global_2482201, 5) && Global_2452551 == -1 && !func_32(0) && !Global_68131 &&
		!ped::is_ped_in_cover(player::player_ped_id(), 0) &&
		interior::get_room_key_from_entity(player::player_ped_id()) == interior::get_room_key_from_entity(iLocal_100) &&
		entity::is_entity_at_coord(player::player_ped_id(), vLocal_126, 0.55f, 0.8f, 1.5f, 0, 1, 1) &&
		!entity::is_entity_playing_anim(player::player_ped_id(), sLocal_114, "EXIT", 3) &&
		!func_145(player::player_id()) && !func_144()) {
		return 1;
	}
	return 0;
}

// Position - 0x8259
bool func_144() {
	if (Local_132.f_1 != -1) {
		return true;
	}
	return false;
}

// Position - 0x826E
int func_145(int iParam0) {
	if (gameplay::is_bit_set(Global_1591201[iParam0 /*602*/].f_258.f_13, 14)) {
		return 1;
	}
	if (gameplay::is_bit_set(Global_1591201[iParam0 /*602*/].f_258.f_13, 11)) {
		return 1;
	}
	return 0;
}

// Position - 0x82AD
void func_146() {
	if (func_144()) {
		if (gameplay::is_bit_set(Local_136[Local_132.f_1 /*2*/], 2)) {
			if (Local_136[Local_132.f_1 /*2*/].f_1 == 4) {
				if (func_148()) {
					Local_132 = 0;
					Local_132.f_2 = 4;
					if (iLocal_101 == Local_132.f_1) {
						Local_132.f_3 = 1;
					}
				}
			}
			else if (Local_132.f_2 != Local_136[Local_132.f_1 /*2*/].f_1) {
				Local_132.f_2 = Local_136[Local_132.f_1 /*2*/].f_1;
				if (iLocal_101 == Local_132.f_1) {
					Local_132.f_3 = 1;
				}
				Local_132 = 1;
			}
		}
		if (!gameplay::is_bit_set(Local_136[Local_132.f_1 /*2*/], 1) &&
			!gameplay::is_bit_set(Local_136[Local_132.f_1 /*2*/], 0)) {
			Local_132.f_1 = -1;
		}
	}
	else if (gameplay::is_bit_set(Local_136[iLocal_106 /*2*/], 0)) {
		if (!func_144()) {
			Local_132.f_1 = iLocal_106;
		}
	}
	if (!func_144()) {
		if (Global_1591201[iLocal_101 /*602*/].f_258.f_208 == Local_132.f_2 && !func_148() &&
			Global_1591201[iLocal_101 /*602*/].f_258.f_208 == 4) {
			Local_132.f_3 = 0;
		}
	}
	iLocal_106++;
	if (iLocal_106 == 32) {
		iLocal_106 = 0;
	}
}

// Position - 0x83C4
bool func_147(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x840B
bool func_148() { return Local_132 == 1; }

// Position - 0x8417
void func_149() {
	int iVar0;

	iVar0 = func_9();
	iLocal_111 = network::_get_posix_time();
	iLocal_112 = func_13(func_14(iVar0), -1, 0);
}

// Position - 0x8439
void func_150(int iParam0) {
	if (iParam0) {
		gameplay::set_bit(&iLocal_110, 6);
	}
	else {
		gameplay::clear_bit(&iLocal_110, 6);
	}
	if (func_4(iLocal_105, -1)) {
		func_151(iLocal_105, iParam0);
	}
}

// Position - 0x846C
void func_151(int iParam0, int iParam1) {
	if (func_3(iParam0) == 97) {
		audio::set_static_emitter_enabled("SE_bkr_biker_dlc_int_02_REC", iParam1);
		audio::set_static_emitter_enabled("SE_bkr_biker_dlc_int_02_GRG", iParam1);
		return;
	}
	else if (func_3(iParam0) == 91) {
		audio::set_static_emitter_enabled("SE_bkr_biker_dlc_int_01_BAR", iParam1);
		audio::set_static_emitter_enabled("SE_bkr_biker_dlc_int_01_GRG", iParam1);
		audio::set_static_emitter_enabled("SE_bkr_biker_dlc_int_01_REC", iParam1);
		return;
	}
}

// Position - 0x84C5
void func_152(int iParam0) {
	if (func_4(iLocal_105, -1)) {
		if (iParam0 != 4 && iParam0 != -1) {
			if (iLocal_101 == player::player_id() && iLocal_111 != 0) {
				func_7(iLocal_102);
			}
			func_153(iLocal_105, iParam0);
		}
		if (iParam0 != -1) {
			iLocal_102 = iParam0;
		}
	}
}

// Position - 0x8515
void func_153(int iParam0, int iParam1) {
	char *sVar0;

	sVar0 = func_104(iParam1);
	if (func_3(iParam0) == 97) {
		audio::set_emitter_radio_station("SE_bkr_biker_dlc_int_02_REC", sVar0);
		audio::set_emitter_radio_station("SE_bkr_biker_dlc_int_02_GRG", sVar0);
		return;
	}
	else if (func_3(iParam0) == 91) {
		audio::set_emitter_radio_station("SE_bkr_biker_dlc_int_01_BAR", sVar0);
		audio::set_emitter_radio_station("SE_bkr_biker_dlc_int_01_GRG", sVar0);
		audio::set_emitter_radio_station("SE_bkr_biker_dlc_int_01_REC", sVar0);
		return;
	}
}

// Position - 0x8576
int func_154() { return -1; }

// Position - 0x857F
bool func_155(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7,
			  var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) {
	return network::network_is_handle_valid(&uParam0, 13);
}

// Position - 0x858F
void func_156(int iParam0, var *uParam1) { *uParam1 = {Global_1591201[iParam0 /*602*/].f_258.f_52}; }

// Position - 0x85AD
void func_157() {
	int iVar0;

	if (network::network_is_game_in_progress() && !gameplay::is_bit_set(iLocal_110, 2)) {
		iVar0 = Global_1048576.f_846;
		gameplay::network_set_script_is_safe_for_network_game();
		network::network_set_this_script_is_network_script(32, 0, iVar0);
		func_161(0, -1, 0);
		gameplay::set_this_script_can_be_paused(0);
		network::network_register_host_broadcast_variables(&Local_132, 4);
		network::network_register_player_broadcast_variables(&Local_136, 65);
		if (!func_158()) {
			func_165(0);
		}
		gameplay::set_bit(&iLocal_110, 2);
	}
}

// Position - 0x860F
int func_158() {
	int iVar0;

	iVar0 = 0;
	while (true) {
		iVar0++;
		if (!network::network_is_game_in_progress()) {
			return 0;
		}
		if (network::_0x5D10B3795F3FC886()) {
			return 1;
		}
		if (func_160()) {
			return 0;
		}
		if (func_159(155)) {
			return 0;
		}
		if (iVar0 >= 3600) {
			return 0;
		}
		system::wait(0);
	}
	return 0;
}

// Position - 0x8668
bool func_159(int iParam0) {
	if (script::get_event_exists(1, iParam0)) {
		return true;
	}
	return false;
}

// Position - 0x867F
bool func_160() { return Global_2443134.f_572; }

// Position - 0x868E
int func_161(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = network::network_get_script_status();
	while (iVar0 != 2) {
		if (iVar0 == 3 || iVar0 == 4 || iVar0 == 5 || iVar0 == 6) {
			if (!iParam2) {
				func_163();
			}
			else {
				return 0;
			}
		}
		if (!func_162()) {
			if (iParam0 == 0) {
				if (!network::network_is_game_in_progress()) {
					if (!iParam2) {
						func_163();
					}
					else {
						return 0;
					}
				}
				if (func_160()) {
					if (!iParam2) {
						func_163();
					}
					else {
						return 0;
					}
				}
				if (func_159(155)) {
					if (!iParam2) {
						func_163();
					}
					else {
						return 0;
					}
				}
			}
			else if (!network::network_is_in_session()) {
				if (!iParam2) {
					func_163();
				}
				else {
					return 0;
				}
			}
		}
		system::wait(0);
		iVar0 = network::network_get_script_status();
	}
	if (iParam1 > -1) {
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0) {
		if (!network::network_is_game_in_progress()) {
			if (!iParam2) {
				func_163();
			}
			else {
				return 0;
			}
		}
	}
	else if (!network::network_is_in_session()) {
		if (!iParam2) {
			func_163();
		}
		else {
			return 0;
		}
	}
	return 1;
}

// Position - 0x87A3
bool func_162() { return Global_1315210; }

// Position - 0x87AF
void func_163() { script::terminate_this_thread(); }

// Position - 0x87BB
void func_164() {
	if (gameplay::is_bit_set(Global_1591201[player::player_id() /*602*/].f_258.f_13, 14)) {
		func_165(0);
	}
	else if (!network::network_is_game_in_progress()) {
		func_165(0);
	}
	else if (entity::is_entity_dead(player::player_ped_id(), 0)) {
		func_165(0);
	}
	else if (gameplay::is_bit_set(Global_2482201, 1)) {
		gameplay::clear_bit(&Global_2482201, 1);
		func_165(0);
	}
	else if (Global_3934104) {
		if (iLocal_116 != 0) {
			if (gameplay::is_bit_set(iLocal_110, 3)) {
				gameplay::clear_bit(&iLocal_110, 3);
				func_34(1, -1);
			}
			gameplay::clear_bit(&iLocal_110, 5);
			gameplay::clear_bit(&iLocal_110, 4);
			gameplay::clear_bit(&Local_136[player::player_id() /*2*/], 1);
			gameplay::clear_bit(&Local_136[player::player_id() /*2*/], 2);
			gameplay::clear_bit(&Local_136[player::player_id() /*2*/], 0);
			gameplay::clear_bit(&Global_2482201, 4);
			iLocal_115 = 0;
			func_137(0);
		}
	}
	else if (iLocal_105 != Global_1591201[player::player_id() /*602*/].f_258.f_15) {
		func_165(0);
	}
}

// Position - 0x88AC
void func_165(int iParam0) {
	func_167(0);
	if (gameplay::is_bit_set(iLocal_110, 3)) {
		func_34(1, -1);
	}
	gameplay::set_bit(&Global_2482201, 2);
	if (iLocal_107 != -1) {
		func_135(&iLocal_107);
	}
	if (iLocal_101 == player::player_id()) {
		func_7(iLocal_102);
	}
	if (ui::is_help_message_being_displayed() && func_141("JBOX_NO_MONEY")) {
		ui::clear_help(1);
	}
	ui::_0xE1CD1E48E025E661();
	func_166();
	if (iParam0) {
		func_127(player::player_id(), 1, 0);
	}
	script::terminate_this_thread();
}

// Position - 0x8920
void func_166() {
	if (entity::does_entity_exist(player::player_ped_id()) && !entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (entity::is_entity_playing_anim(player::player_ped_id(), sLocal_114, "IDLE", 3) ||
			entity::is_entity_playing_anim(player::player_ped_id(), sLocal_114, "EXIT", 3) ||
			entity::is_entity_playing_anim(player::player_ped_id(), sLocal_114, "INSERT_COINS", 3) ||
			entity::is_entity_playing_anim(player::player_ped_id(), sLocal_114, "SELECT_TRACK", 3)) {
			ai::clear_ped_tasks_immediately(player::player_ped_id());
		}
	}
}

// Position - 0x8999
void func_167(int iParam0) {
	if (iParam0) {
		func_168();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
			gameplay::set_bit(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_32(0)) {
			func_29(0);
		}
	}
	else if (Global_14443.f_1 == 1) {
		if (Global_14443.f_1 != 0) {
			Global_14443.f_1 = 3;
		}
	}
}

// Position - 0x89FC
void func_168() {
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10) {
		Global_15798 = 0;
		Global_15794 = 1;
	}
}
