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
char *sLocal_18 = NULL;
var uLocal_19 = 0;
var uLocal_20 = 0;
int iLocal_21 = 0;
float fLocal_22 = 0f;
var uLocal_23 = 0;
var uLocal_24 = 0;
var uLocal_25 = 0;
float fLocal_26 = 0f;
float fLocal_27 = 0f;
var uLocal_28 = 0;
var uLocal_29 = 0;
float fLocal_30 = 0f;
float fLocal_31 = 0f;
float fLocal_32 = 0f;
var uLocal_33 = 0;
var uLocal_34 = 0;
var uLocal_35 = 0;
var uLocal_36 = 0;
var uLocal_37 = 0;
var uLocal_38 = 0;
var uLocal_39 = 0;
int iLocal_40 = 0;
int iLocal_41 = 0;
int iLocal_42 = 0;
int iLocal_43 = 0;
var uLocal_44 = 0;
var uLocal_45 = 0;
var uLocal_46 = 0;
var uLocal_47 = 0;
var uLocal_48 = 0;
var uLocal_49 = 0;
int iLocal_50 = 0;
float fLocal_51 = 0f;
float fLocal_52 = 0f;
float fLocal_53 = 0f;
float fLocal_54 = 0f;
float fLocal_55 = 0f;
var uLocal_56 = 0;
int iLocal_57 = 0;
int iLocal_58 = 0;
int iLocal_59 = 0;
int *iLocal_60 = NULL;
var uLocal_61 = 0;
var uLocal_62 = 0;
int iLocal_63 = 0;
int iLocal_64 = 0;
float fLocal_65 = 0f;
int iLocal_66 = 0;
int iLocal_67 = 0;
int iLocal_68 = 0;
var *uLocal_69 = NULL;
var uLocal_70 = 0;
var uLocal_71 = 0;
bool bLocal_72 = 0;
int iLocal_73 = 0;
int iLocal_74 = 0;
#pragma endregion //}

void __EntryFunction__() {
	int iVar0;

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
	sLocal_18 = "NULL";
	iLocal_21 = 3;
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_51 = -0.05f;
	fLocal_52 = 0.92f;
	fLocal_53 = 1.94f;
	fLocal_54 = 2.99f;
	fLocal_55 = 3.7f;
	iLocal_63 = 1000;
	iLocal_64 = 3333;
	fLocal_65 = 0f;
	bLocal_72 = true;
	gameplay::network_set_script_is_safe_for_network_game();
	if (player::has_force_cleanup_occurred(32)) {
		script::terminate_this_thread();
	}
	iLocal_58 = gameplay::get_game_timer();
	iLocal_67 = 0;
	func_153(iLocal_68);
	func_152();
	func_150(&Global_2595550);
	func_149(&Global_2595550, 1);
	func_147(&uLocal_69);
	while (true) {
		if (Global_25436 != iLocal_67) {
			if (iLocal_67 == 0 && Global_25436 != 0) {
				if (gameplay::is_ps3_version() || gameplay::is_orbis_version()) {
					func_146("CHEAT_TROPHIE", -1);
				}
				else {
					func_146("CHEAT_ACHIEVE", -1);
				}
			}
			if (iLocal_67 != 0 && Global_25436 == 0) {
			}
		}
		iLocal_67 = Global_25436;
		if (!func_145(14)) {
			if (!player::has_achievement_been_passed(24)) {
				func_136();
			}
			if (!player::has_achievement_been_passed(25)) {
				func_134();
			}
			if (Global_25199) {
				if (!player::has_achievement_been_passed(12)) {
					iVar0 = func_119(1);
					if (iVar0 > 0) {
						func_118(12, iVar0);
						stats::stat_set_int(joaat("num_gold_medals_obtained"), iVar0, 1);
					}
					if (iVar0 >= 70) {
						func_112(12, 1);
					}
				}
				Global_25199 = 0;
			}
			if (entity::does_entity_exist(player::player_ped_id())) {
				if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
					iLocal_68++;
					if (gameplay::get_game_timer() > iLocal_58) {
						func_101(0);
						iLocal_58 = gameplay::get_game_timer() + iLocal_63;
					}
					if (gameplay::get_game_timer() > iLocal_59) {
						if (!player::has_achievement_been_passed(14) || iLocal_66 == 1) {
							if (func_100(53)) {
								func_99();
							}
						}
						iLocal_59 = gameplay::get_game_timer() + iLocal_64;
					}
				}
			}
			func_91(&Global_2595550);
			func_1();
		}
		else {
			func_91(&Global_2595550);
			func_1();
		}
		system::wait(0);
	}
}

// Position - 0x22D
void func_1() {
	var uVar0;
	int iVar1;

	if (!func_90(&Global_2595550)) {
		return;
	}
	if (!Global_69702) {
		if (iLocal_74) {
			iLocal_74 = 0;
		}
		return;
	}
	if (!func_87()) {
		return;
	}
	if (bLocal_72) {
		if (!func_85(3, -1)) {
			return;
		}
		if (!func_85(5, -1)) {
			return;
		}
	}
	if (iLocal_74) {
		return;
	}
	uVar0 = socialclub::_0x225798743970412B(&iVar1);
	if (iVar1 == -1 && iLocal_73 == 0) {
	}
	if (uVar0 && iVar1 == 0) {
		func_84();
		iLocal_74 = 1;
	}
	else {
		func_2();
	}
}

// Position - 0x2BD
void func_2() {
	int iVar0;

	if (!player::has_achievement_been_passed(33)) {
		if (func_81()) {
			func_112(33, 1);
		}
	}
	if (!player::has_achievement_been_passed(29)) {
		if (func_77(&uLocal_69) > 5f) {
			func_19(player::player_ped_id());
			func_147(&uLocal_69);
		}
	}
	iVar0 = func_17(func_18(-1), 0);
	if (iVar0 >= 100) {
		if (!player::has_achievement_been_passed(36)) {
			func_112(36, 1);
		}
	}
	if (iVar0 >= 50) {
		if (!player::has_achievement_been_passed(35)) {
			func_112(35, 1);
		}
	}
	if (iVar0 >= 25) {
		if (!player::has_achievement_been_passed(34)) {
			func_112(34, 1);
		}
	}
	if (!player::has_achievement_been_passed(37)) {
		func_15(0);
	}
	if (!player::has_achievement_been_passed(38)) {
		if (func_14(joaat("mpply_total_custom_races_won")) >= 5) {
			func_112(38, 1);
		}
	}
	if (!player::has_achievement_been_passed(39)) {
		if (func_13(48, -1) >= 10) {
			func_112(39, 1);
		}
	}
	if (!player::has_achievement_been_passed(40)) {
		if (func_13(52, -1) > 0) {
			func_112(40, 1);
		}
	}
	if (!player::has_achievement_been_passed(41)) {
		if (gameplay::is_bit_set(Global_2494199.f_2087.f_18, 1)) {
			func_112(41, 1);
		}
	}
	if (!player::has_achievement_been_passed(43)) {
		if (func_12(750, -1, 0) >= 30) {
			func_112(43, 1);
		}
	}
	if (!player::has_achievement_been_passed(44)) {
		if (func_13(14, -1) >= 20) {
			func_112(44, 1);
		}
	}
	if (!player::has_achievement_been_passed(45)) {
		func_10(0);
	}
	if (!player::has_achievement_been_passed(48)) {
		if (func_7(11, -1, -1)) {
			func_112(48, 1);
		}
	}
	if (!player::has_achievement_been_passed(49)) {
		func_3(0);
	}
}

// Position - 0x460
int func_3(int iParam0) {
	if (!func_87()) {
		return 0;
	}
	if (!Global_69702) {
		return 0;
	}
	if (player::has_achievement_been_passed(49)) {
		return 0;
	}
	if (iParam0 == 1) {
	}
	if (!func_4(100, -1)) {
		if (iParam0 == 1) {
		}
		return 0;
	}
	if (!func_4(102, -1)) {
		if (iParam0 == 1) {
		}
		return 0;
	}
	if (!func_4(101, -1)) {
		if (iParam0 == 1) {
		}
		return 0;
	}
	func_112(49, 1);
	return 1;
}

// Position - 0x4DB
int func_4(int iParam0, int iParam1) {
	int iVar0;
	var uVar1;

	iVar0 = Global_2522581[iParam0 /*3*/][func_5(iParam1)];
	if (stats::stat_get_bool(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x507
int func_5(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_6();
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

// Position - 0x53B
int func_6() { return Global_1312735; }

// Position - 0x547
bool func_7(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (iParam1 == -1) {
		iParam1 = func_6();
	}
	iVar1 = func_9(iParam0, iParam1);
	iVar2 = func_8(iParam0);
	if (0 != iVar1) {
		iVar0 = stats::stat_get_bool_masked(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

// Position - 0x584
int func_8(int iParam0) {
	int iVar0;

	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192) {
		iVar0 = iParam0 - 0 - stats::_0xF4D8E7AC2A27758C(iParam0 - 0) * 64;
	}
	else if (iParam0 >= 192 && iParam0 < 384) {
		iVar0 = iParam0 - 192 - stats::_0xF4D8E7AC2A27758C(iParam0 - 192) * 64;
	}
	else if (iParam0 >= 513 && iParam0 < 705) {
		iVar0 = iParam0 - 513 - stats::_0xF4D8E7AC2A27758C(iParam0 - 513) * 64;
	}
	else if (iParam0 >= 705 && iParam0 < 1281) {
		iVar0 = iParam0 - 705 - stats::_0xF4D8E7AC2A27758C(iParam0 - 705) * 64;
	}
	else if (iParam0 >= 2919 && iParam0 < 3111) {
		iVar0 = iParam0 - 2919 - stats::_0xF4D8E7AC2A27758C(iParam0 - 2919) * 64;
	}
	else if (iParam0 >= 3111 && iParam0 < 3879) {
		iVar0 = iParam0 - 3111 - stats::_0xF4D8E7AC2A27758C(iParam0 - 3111) * 64;
	}
	else if (iParam0 >= 4335 && iParam0 < 4399) {
		iVar0 = iParam0 - 4335 - stats::_0xF4D8E7AC2A27758C(iParam0 - 4335) * 64;
	}
	else if (iParam0 >= 4207 && iParam0 < 4335) {
		iVar0 = iParam0 - 4207 - stats::_0xF4D8E7AC2A27758C(iParam0 - 4207) * 64;
	}
	else if (iParam0 >= 6029 && iParam0 < 6413) {
		iVar0 = iParam0 - 6029 - stats::_0xF4D8E7AC2A27758C(iParam0 - 6029) * 64;
	}
	else if (iParam0 >= 7385 && iParam0 < 7641) {
		iVar0 = iParam0 - 7385 - stats::_0xF4D8E7AC2A27758C(iParam0 - 7385) * 64;
	}
	else if (iParam0 >= 7321 && iParam0 < 7385) {
		iVar0 = iParam0 - 7321 - stats::_0xF4D8E7AC2A27758C(iParam0 - 7321) * 64;
	}
	else if (iParam0 >= 9361 && iParam0 < 9553) {
		iVar0 = iParam0 - 9361 - stats::_0xF4D8E7AC2A27758C(iParam0 - 9361) * 64;
	}
	return iVar0;
}

// Position - 0x794
int func_9(int iParam0, int iParam1) {
	int iVar0;

	if (iParam1 == -1) {
		iParam1 = func_6();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192) {
		iVar0 = stats::_get_pstat_bool_hash(iParam0 - 0, 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384) {
		iVar0 = stats::_get_pstat_bool_hash(iParam0 - 192, 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705) {
		iVar0 = stats::_get_pstat_bool_hash(iParam0 - 513, 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281) {
		iVar0 = stats::_get_pstat_bool_hash(iParam0 - 705, 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111) {
		iVar0 = stats::_get_tupstat_bool_hash(iParam0 - 2919, 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879) {
		iVar0 = stats::_get_tupstat_bool_hash(iParam0 - 3111, 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399) {
		iVar0 = stats::_get_ngstat_bool_hash(iParam0 - 4335, 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335) {
		iVar0 = stats::_get_ngstat_bool_hash(iParam0 - 4207, 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413) {
		iVar0 = stats::_get_ngstat_bool_hash(iParam0 - 6029, 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385) {
		iVar0 = stats::_get_ngstat_bool_hash(iParam0 - 7321, 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641) {
		iVar0 = stats::_get_ngstat_bool_hash(iParam0 - 7385, 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553) {
		iVar0 = stats::_get_ngstat_bool_hash(iParam0 - 9361, 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	return iVar0;
}

// Position - 0x984
int func_10(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_87()) {
		return 0;
	}
	if (player::has_achievement_been_passed(45)) {
		return 0;
	}
	if (!Global_69702) {
		return 0;
	}
	iVar2 = func_12(751, -1, 0);
	iVar0 = 0;
	while (iVar0 < 9) {
		if (func_11(iVar2, iVar0, iParam0)) {
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 9) {
		func_112(45, 1);
		return 1;
	}
	return 0;
}

// Position - 0x9F6
bool func_11(int iParam0, int iParam1, bool bParam2) {
	var uVar0;

	uVar0 = gameplay::is_bit_set(iParam0, iParam1);
	if (!bParam2) {
		return uVar0;
	}
	switch (iParam1) {
	case 0: return uVar0;

	case 1: return uVar0;

	case 2: return uVar0;

	case 3: return uVar0;

	case 4: return uVar0;

	case 5: return uVar0;

	case 6: return uVar0;

	case 7: return uVar0;

	case 8: return uVar0;

	default:
	}
	return false;
}

// Position - 0xA7E
int func_12(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_5(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0xAB0
int func_13(int iParam0, int iParam1) {
	int iVar0;
	var uVar1;

	iVar0 = Global_2523863[iParam0 /*3*/][func_5(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0xADC
int func_14(int iParam0) {
	int iVar0;
	var uVar1;

	iVar0 = iParam0;
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0xAFA
int func_15(int iParam0) {
	int iVar0;

	if (player::has_achievement_been_passed(37)) {
		return 0;
	}
	if (!func_87()) {
		return 0;
	}
	if (!Global_69702) {
		return 0;
	}
	if (iParam0) {
		iVar0 = func_13(21, -1);
		iVar0 -= func_13(58, -1);
		iVar0 -= func_13(57, -1);
	}
	if (func_16(8, -1)) {
		func_112(37, 1);
		return 1;
	}
	return 0;
}

// Position - 0xB64
bool func_16(int iParam0, int iParam1) {
	int iVar0;
	var uVar1;

	iVar0 = Global_2524131[iParam0 /*3*/][func_5(iParam1)];
	if (stats::stat_get_bool(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return false;
}

// Position - 0xB90
int func_17(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	if (iParam1 == 0) {
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = (iVar1 - iVar2) / 2;
	iVar0 = 0;
	while (iVar0 <= 100) {
		if (iVar1 == iVar2) {
			iVar0 = 8000;
			if (iVar3 == 0) {
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_280048[iVar3] == iParam0) {
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_280048[iVar3] < iParam0) {
			if (iVar2 == iVar3) {
				iVar2++;
			}
			else {
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3) {
			iVar1--;
		}
		else {
			iVar1 = iVar3;
		}
		fVar4 = (system::to_float(iVar1) - system::to_float(iVar2)) / 2f + system::to_float(iVar2);
		iVar3 = system::round(fVar4);
		iVar0++;
	}
	return 8000;
}

// Position - 0xC4F
int func_18(int iParam0) { return Global_1363273[func_5(iParam0)]; }

// Position - 0xC63
void func_19(int iParam0) {
	int iVar0;
	struct<134> Var1;

	Var1 = 44;
	Var1.f_133 = 50;
	if (player::has_achievement_been_passed(29)) {
		return;
	}
	func_73(iParam0, &Var1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Var1) {
		if (func_20(iParam0, Var1[iVar0 /*3*/])) {
			func_112(29, 1);
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Var1.f_133) {
		if (func_20(iParam0, Var1.f_133[iVar0 /*3*/])) {
			func_112(29, 1);
			return;
		}
		iVar0++;
	}
}

// Position - 0xCF2
bool func_20(int iParam0, int iParam1) {
	var *uVar0;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	struct<6> Var45;

	if (iParam1 == -61829581) {
		return false;
	}
	if (iParam1 == joaat("weapon_knuckle")) {
		return false;
	}
	if (ped::is_ped_injured(iParam0)) {
		return false;
	}
	if (!weapon::has_ped_got_weapon(iParam0, iParam1, 0)) {
		return false;
	}
	iVar39 = func_72(iParam1, &uVar0);
	if (iParam1 != joaat("weapon_pistol") && iParam1 != joaat("weapon_appistol") &&
		iParam1 != joaat("weapon_combatpistol") && iParam1 != joaat("weapon_microsmg") &&
		iParam1 != joaat("weapon_smg") && iParam1 != joaat("weapon_pumpshotgun") &&
		iParam1 != joaat("weapon_assaultshotgun") && iParam1 != joaat("weapon_sawnoffshotgun") &&
		iParam1 != joaat("weapon_assaultrifle") && iParam1 != joaat("weapon_carbinerifle") &&
		iParam1 != joaat("weapon_advancedrifle") && iParam1 != joaat("weapon_sniperrifle") &&
		iParam1 != joaat("weapon_heavysniper") && iParam1 != joaat("weapon_mg") &&
		iParam1 != joaat("weapon_combatmg") && iParam1 != joaat("weapon_grenadelauncher") && iParam1 != -572349828 &&
		iParam1 != joaat("weapon_assaultsmg") && iParam1 != 392730790 && iParam1 != -947031628 &&
		iParam1 != joaat("weapon_bullpupshotgun") && iParam1 != joaat("weapon_pistol50") &&
		(iVar39 == -1 || dlc1::get_num_dlc_weapon_components(iVar39) < 3)) {
		return false;
	}
	iVar40 = 0;
	iVar41 = 0;
	iVar42 = 0;
	iVar43 = 0;
	iVar44 = 0;
	while (func_21(&Var45, iParam1, iVar44, 0)) {
		if (Var45.f_4 == joaat("WAPClip")) {
			iVar41++;
		}
		if (Var45.f_4 == joaat("WAPScop")) {
			iVar40++;
		}
		if (weapon::has_ped_got_weapon_component(iParam0, iParam1, Var45)) {
			if (Var45.f_4 == joaat("WAPClip")) {
				iVar43 = Var45.f_5;
			}
			else if (Var45.f_4 == joaat("WAPScop")) {
				iVar42 = Var45.f_5;
			}
		}
		else if (Var45.f_4 == joaat("WAPClip") || Var45.f_4 == joaat("WAPScop") || Var45.f_4 == joaat("WAPRail") ||
				 Var45.f_4 == joaat("gun_root")) {
		}
		else {
			return false;
		}
		iVar44++;
	}
	if (iVar40 > iVar42) {
		return false;
	}
	if (iVar41 > iVar43) {
		return false;
	}
	if (weapon::get_weapon_tint_count(iParam1) > 0 && weapon::get_ped_weapon_tint_index(iParam0, iParam1) == 0) {
		return false;
	}
	return true;
}

// Position - 0xF6F
bool func_21(var *uParam0, int iParam1, int iParam2, int iParam3) {
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
	var *uVar12;
	struct<4> Var51;

	func_71(uParam0, 0, 989182658, 0, 0);
	switch (iParam1) {
	case joaat("weapon_pistol"):
		switch (iParam2) {
		case 0: func_71(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1); break;

		case 1: func_71(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0); break;

		case 2: func_71(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0); break;

		case 3: func_71(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0); break;

		case 4: func_71(uParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 1, 0); break;
		}
		break;

	case joaat("weapon_combatpistol"):
		switch (iParam2) {
		case 0: func_71(uParam0, joaat("component_combatpistol_clip_01"), joaat("WAPClip"), 1, 1); break;

		case 1: func_71(uParam0, joaat("component_combatpistol_clip_02"), joaat("WAPClip"), 2, 0); break;

		case 2: func_71(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0); break;

		case 3: func_71(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0); break;

		case 4: func_71(uParam0, joaat("component_combatpistol_varmod_lowrider"), joaat("gun_root"), 1, 0); break;
		}
		break;

	case joaat("weapon_appistol"):
		switch (iParam2) {
		case 0: func_71(uParam0, joaat("component_appistol_clip_01"), joaat("WAPClip"), 1, 1); break;

		case 1: func_71(uParam0, joaat("component_appistol_clip_02"), joaat("WAPClip"), 2, 0); break;

		case 2: func_71(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0); break;

		case 3: func_71(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0); break;

		case 4: func_71(uParam0, joaat("component_appistol_varmod_luxe"), joaat("gun_root"), 1, 0); break;
		}
		break;

	case joaat("weapon_microsmg"):
		switch (iParam2) {
		case 0: func_71(uParam0, joaat("component_microsmg_clip_01"), joaat("WAPClip"), 1, 1); break;

		case 1: func_71(uParam0, joaat("component_microsmg_clip_02"), joaat("WAPClip"), 2, 0); break;

		case 2: func_71(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0); break;

		case 3: func_71(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0); break;

		case 4: func_71(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0); break;

		case 5: func_71(uParam0, joaat("component_microsmg_varmod_luxe"), joaat("gun_root"), 1, 0); break;
		}
		break;

	case joaat("weapon_smg"):
		switch (iParam2) {
		case 0: func_71(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1); break;

		case 1: func_71(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0); break;

		case 2: func_71(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0); break;

		case 3: func_71(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0); break;

		case 4: func_71(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0); break;

		case 5: func_71(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0); break;

		case 6: func_71(uParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 1, 0); break;
		}
		break;

	case joaat("weapon_assaultrifle"):
		switch (iParam2) {
		case 0: func_71(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1); break;

		case 1: func_71(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0); break;

		case 2: func_71(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0); break;

		case 3: func_71(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0); break;

		case 4: func_71(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0); break;

		case 5: func_71(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0); break;

		case 6: func_71(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0); break;

		case 7: func_71(uParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 1, 0); break;
		}
		break;

	case joaat("weapon_carbinerifle"):
		switch (iParam2) {
		case 0: func_71(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1); break;

		case 1: func_71(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0); break;

		case 2: func_71(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0); break;

		case 3: func_71(uParam0, joaat("component_at_railcover_01"), joaat("WAPRail"), 1, 0); break;

		case 4: func_71(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0); break;

		case 5: func_71(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0); break;

		case 6: func_71(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0); break;

		case 7: func_71(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0); break;

		case 8: func_71(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 1, 0); break;
		}
		break;

	case joaat("weapon_advancedrifle"):
		switch (iParam2) {
		case 0: func_71(uParam0, joaat("component_advancedrifle_clip_01"), joaat("WAPClip"), 1, 1); break;

		case 1: func_71(uParam0, joaat("component_advancedrifle_clip_02"), joaat("WAPClip"), 2, 0); break;

		case 2: func_71(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0); break;

		case 3: func_71(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0); break;

		case 4: func_71(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0); break;

		case 5: func_71(uParam0, joaat("component_advancedrifle_varmod_luxe"), joaat("gun_root"), 1, 0); break;
		}
		break;

	case joaat("weapon_mg"):
		switch (iParam2) {
		case 0: func_71(uParam0, joaat("component_mg_clip_01"), joaat("WAPClip"), 1, 1); break;

		case 1: func_71(uParam0, joaat("component_mg_clip_02"), joaat("WAPClip"), 2, 0); break;

		case 2: func_71(uParam0, joaat("component_at_scope_small_02"), joaat("WAPScop"), 1, 0); break;

		case 3: func_71(uParam0, joaat("component_mg_varmod_lowrider"), joaat("gun_root"), 1, 0); break;
		}
		break;

	case joaat("weapon_combatmg"):
		switch (iParam2) {
		case 0: func_71(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1); break;

		case 1: func_71(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0); break;

		case 2: func_71(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0); break;

		case 3: func_71(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0); break;

		case 4: func_71(uParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 1, 0); break;
		}
		break;

	case joaat("weapon_pumpshotgun"):
		switch (iParam2) {
		case 0: func_71(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0); break;

		case 1: func_71(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0); break;

		case 2: func_71(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0); break;
		}
		break;

	case joaat("weapon_assaultshotgun"):
		switch (iParam2) {
		case 0: func_71(uParam0, joaat("component_assaultshotgun_clip_01"), joaat("WAPClip"), 1, 1); break;

		case 1: func_71(uParam0, joaat("component_assaultshotgun_clip_02"), joaat("WAPClip"), 2, 0); break;

		case 2: func_71(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0); break;

		case 3: func_71(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0); break;

		case 4: func_71(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0); break;
		}
		break;

	case joaat("weapon_sniperrifle"):
		switch (iParam2) {
		case 0: func_71(uParam0, joaat("component_sniperrifle_clip_01"), joaat("WAPClip"), 1, 1); break;

		case 1: func_71(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0); break;

		case 2: func_71(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1); break;

		case 3: func_71(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0); break;

		case 4: func_71(uParam0, joaat("component_sniperrifle_varmod_luxe"), joaat("gun_root"), 1, 0); break;
		}
		break;

	case joaat("weapon_heavysniper"):
		switch (iParam2) {
		case 0: func_71(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1); break;

		case 1: func_71(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1); break;

		case 2: func_71(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0); break;
		}
		break;

	case joaat("weapon_grenadelauncher"):
		switch (iParam2) {
		case 0: func_71(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0); break;

		case 1: func_71(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0); break;

		case 2: func_71(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0); break;
		}
		break;

	case joaat("weapon_minigun"):
		switch (iParam2) {
		case 0: func_71(uParam0, joaat("component_minigun_clip_01"), joaat("WAPClip"), 1, 1); break;
		}
		break;

	case joaat("weapon_assaultsmg"):
		switch (iParam2) {
		case 0: func_71(uParam0, joaat("component_assaultsmg_clip_01"), joaat("WAPClip"), 1, 1); break;

		case 1: func_71(uParam0, joaat("component_assaultsmg_clip_02"), joaat("WAPClip"), 2, 0); break;

		case 2: func_71(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0); break;

		case 3: func_71(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0); break;

		case 4: func_71(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0); break;

		case 5: func_71(uParam0, joaat("component_assaultsmg_varmod_lowrider"), joaat("gun_root"), 1, 0); break;
		}
		break;

	case joaat("weapon_bullpupshotgun"):
		switch (iParam2) {
		case 0: func_71(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0); break;

		case 1: func_71(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0); break;

		case 2: func_71(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0); break;
		}
		break;

	case joaat("weapon_pistol50"):
		switch (iParam2) {
		case 0: func_71(uParam0, joaat("component_pistol50_clip_01"), joaat("WAPClip"), 1, 1); break;

		case 1: func_71(uParam0, joaat("component_pistol50_clip_02"), joaat("WAPClip"), 2, 0); break;

		case 2: func_71(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0); break;

		case 3: func_71(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0); break;

		case 4: func_71(uParam0, joaat("component_pistol50_varmod_luxe"), joaat("gun_root"), 1, 0); break;
		}
		break;

	case joaat("weapon_sawnoffshotgun"):
		switch (iParam2) {
		case 0: func_71(uParam0, joaat("component_sawnoffshotgun_varmod_luxe"), joaat("gun_root"), 1, 0); break;
		}
		break;

	default:
		iVar10 = func_72(iParam1, &uVar12);
		if (iVar10 != -1) {
			iVar11 = 0;
			while (iVar11 < dlc1::get_num_dlc_weapon_components(iVar10)) {
				if (dlc1::get_dlc_weapon_component_data(iVar10, iVar11, &Var51)) {
					if (Var51 == joaat("WAPClip") || Var51 == joaat("WAPClip_2")) {
						iVar1++;
					}
					else if (Var51 == joaat("WAPFlshLasr") || Var51 == joaat("WAPFlshLasr_2")) {
						iVar2++;
					}
					else if (Var51 == joaat("WAPScop") || Var51 == joaat("WAPScop_2")) {
						iVar3++;
					}
					else if (Var51 == joaat("WAPRail") || Var51 == joaat("WAPRail_2")) {
						iVar4++;
					}
					else if (Var51 == joaat("WAPGrip") || Var51 == joaat("WAPGrip_2")) {
						iVar5++;
					}
					else if (Var51 == joaat("WAPSupp") || Var51 == joaat("WAPSupp_2")) {
						iVar6++;
					}
					else if (Var51 == 1731751835) {
						iVar7++;
					}
					else if (Var51 == joaat("gun_root")) {
						iVar8++;
					}
					else {
						iVar9++;
					}
					if (iVar11 == iParam2) {
						if (Var51 == joaat("WAPClip") || Var51 == joaat("WAPClip_2")) {
							iVar0 = iVar1;
						}
						else if (Var51 == joaat("WAPFlshLasr") || Var51 == joaat("WAPFlshLasr_2")) {
							iVar0 = iVar2;
						}
						else if (Var51 == joaat("WAPScop") || Var51 == joaat("WAPScop_2")) {
							iVar0 = iVar3;
						}
						else if (Var51 == joaat("WAPRail") || Var51 == joaat("WAPRail_2")) {
							iVar0 = iVar4;
						}
						else if (Var51 == joaat("WAPGrip") || Var51 == joaat("WAPGrip_2")) {
							iVar0 = iVar5;
						}
						else if (Var51 == joaat("WAPSupp") || Var51 == joaat("WAPSupp_2")) {
							iVar0 = iVar6;
						}
						else if (Var51 == 1731751835) {
							iVar0 = iVar7;
						}
						else if (Var51 == joaat("gun_root")) {
							iVar0 = iVar8;
						}
						else {
							iVar0 = iVar9;
						}
						func_71(uParam0, Var51.f_3, Var51, iVar0, Var51.f_1);
					}
				}
				iVar11++;
			}
		}
		break;
	}
	if (iParam3) {
		uParam0->f_2 = func_22(iParam1, *uParam0);
	}
	return uParam0->f_4 != 989182658;
}

// Position - 0x1D1B
int func_22(int iParam0, int iParam1) {
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var *uVar4;
	struct<6> Var43;
	int iVar65;
	int iVar66;
	var *uVar67;
	struct<6> Var106;
	char *sVar128;
	struct<4> Var144;
	float fVar148;

	iVar0 = 0;
	fVar1 = 2.5f;
	if (!network::network_is_game_in_progress()) {
		fVar1 = 2.5f;
		switch (iParam0) {
		case joaat("weapon_pistol"):
			switch (iParam1) {
			case joaat("component_pistol_clip_01"): iVar0 = 120; break;

			case joaat("component_pistol_clip_02"): iVar0 = 155; break;

			case joaat("component_at_pi_flsh"): iVar0 = 189; break;

			case joaat("component_at_pi_supp_02"): iVar0 = 729; break;

			case joaat("component_pistol_varmod_luxe"): iVar0 = 18600; break;
			}
			break;

		case joaat("weapon_combatpistol"):
			switch (iParam1) {
			case joaat("component_combatpistol_clip_01"): iVar0 = 136; break;

			case joaat("component_combatpistol_clip_02"): iVar0 = 159; break;

			case joaat("component_at_pi_flsh"): iVar0 = 189; break;

			case joaat("component_at_pi_supp"): iVar0 = 735; break;

			case joaat("component_combatpistol_varmod_lowrider"): iVar0 = 14500; break;
			}
			break;

		case joaat("weapon_appistol"):
			switch (iParam1) {
			case joaat("component_appistol_clip_01"): iVar0 = 145; break;

			case joaat("component_appistol_clip_02"): iVar0 = 165; break;

			case joaat("component_at_pi_flsh"): iVar0 = 185; break;

			case joaat("component_at_pi_supp"): iVar0 = 730; break;

			case joaat("component_appistol_varmod_luxe"): iVar0 = 15800; break;
			}
			break;

		case joaat("weapon_microsmg"):
			switch (iParam1) {
			case joaat("component_microsmg_clip_01"): iVar0 = 120; break;

			case joaat("component_microsmg_clip_02"): iVar0 = 137; break;

			case joaat("component_at_pi_flsh"): iVar0 = 190; break;

			case joaat("component_at_scope_macro"): iVar0 = 549; break;

			case joaat("component_at_ar_supp_02"): iVar0 = 775; break;

			case joaat("component_microsmg_varmod_luxe"): iVar0 = 15100; break;
			}
			break;

		case joaat("weapon_smg"):
			switch (iParam1) {
			case joaat("component_smg_clip_01"): iVar0 = 119; break;

			case joaat("component_smg_clip_02"): iVar0 = 134; break;

			case joaat("component_smg_clip_03"): iVar0 = -1; break;

			case joaat("component_at_ar_flsh"): iVar0 = 210; break;

			case joaat("component_at_scope_macro_02"): iVar0 = 549; break;

			case joaat("component_at_pi_supp"): iVar0 = 815; break;

			case joaat("component_smg_varmod_luxe"): iVar0 = 19300; break;
			}
			break;

		case joaat("weapon_assaultrifle"):
			switch (iParam1) {
			case joaat("component_assaultrifle_clip_01"): iVar0 = 120; break;

			case joaat("component_assaultrifle_clip_02"): iVar0 = 129; break;

			case joaat("component_assaultrifle_clip_03"): iVar0 = -1; break;

			case joaat("component_at_ar_afgrip"): iVar0 = 159; break;

			case joaat("component_at_ar_flsh"): iVar0 = 189; break;

			case joaat("component_at_scope_macro"): iVar0 = 565; break;

			case joaat("component_at_ar_supp_02"): iVar0 = 810; break;

			case joaat("component_assaultrifle_varmod_luxe"): iVar0 = 14400; break;
			}
			break;

		case joaat("weapon_carbinerifle"):
			switch (iParam1) {
			case joaat("component_carbinerifle_clip_01"): iVar0 = 99; break;

			case joaat("component_carbinerifle_clip_02"): iVar0 = 105; break;

			case joaat("component_carbinerifle_clip_03"): iVar0 = -1; break;

			case joaat("component_at_railcover_01"): iVar0 = -1; break;

			case joaat("component_at_ar_afgrip"): iVar0 = 132; break;

			case joaat("component_at_ar_flsh"): iVar0 = 150; break;

			case joaat("component_at_scope_medium"): iVar0 = 450; break;

			case joaat("component_at_ar_supp"): iVar0 = 815; break;

			case joaat("component_carbinerifle_varmod_luxe"): iVar0 = 17900; break;
			}
			break;

		case joaat("weapon_advancedrifle"):
			switch (iParam1) {
			case joaat("component_advancedrifle_clip_01"): iVar0 = 110; break;

			case joaat("component_advancedrifle_clip_02"): iVar0 = 124; break;

			case joaat("component_at_ar_flsh"): iVar0 = 159; break;

			case joaat("component_at_scope_small"): iVar0 = 450; break;

			case joaat("component_at_ar_supp"): iVar0 = 812; break;

			case joaat("component_advancedrifle_varmod_luxe"): iVar0 = 16500; break;
			}
			break;

		case joaat("weapon_mg"):
			switch (iParam1) {
			case joaat("component_mg_clip_01"): iVar0 = 135; break;

			case joaat("component_mg_clip_02"): iVar0 = 145; break;

			case joaat("component_at_scope_small_02"): iVar0 = 450; break;

			case joaat("component_mg_varmod_lowrider"): iVar0 = 15600; break;
			}
			break;

		case joaat("weapon_combatmg"):
			switch (iParam1) {
			case joaat("component_combatmg_clip_01"): iVar0 = 119; break;

			case joaat("component_combatmg_clip_02"): iVar0 = 126; break;

			case joaat("component_at_ar_afgrip"): iVar0 = 129; break;

			case joaat("component_at_scope_medium"): iVar0 = 559; break;

			case joaat("component_combatmg_varmod_lowrider"): iVar0 = 14000; break;
			}
			break;

		case joaat("weapon_pumpshotgun"):
			switch (iParam1) {
			case joaat("component_at_ar_flsh"): iVar0 = 189; break;

			case joaat("component_at_sr_supp"): iVar0 = 975; break;

			case joaat("component_pumpshotgun_varmod_lowrider"): iVar0 = 16900; break;
			}
			break;

		case joaat("weapon_assaultshotgun"):
			switch (iParam1) {
			case joaat("component_assaultshotgun_clip_01"): iVar0 = 129; break;

			case joaat("component_assaultshotgun_clip_02"): iVar0 = 139; break;

			case joaat("component_at_ar_afgrip"): iVar0 = 150; break;

			case joaat("component_at_ar_flsh"): iVar0 = 225; break;

			case joaat("component_at_ar_supp"): iVar0 = 899; break;
			}
			break;

		case joaat("weapon_sniperrifle"):
			switch (iParam1) {
			case joaat("component_sniperrifle_clip_01"): iVar0 = -1; break;

			case joaat("component_at_scope_large"): iVar0 = 559; break;

			case joaat("component_at_scope_max"): iVar0 = 975; break;

			case joaat("component_at_ar_supp_02"): iVar0 = 920; break;

			case joaat("component_sniperrifle_varmod_luxe"): iVar0 = 13000; break;
			}
			break;

		case joaat("weapon_heavysniper"):
			switch (iParam1) {
			case joaat("component_heavysniper_clip_01"): iVar0 = -1; break;

			case joaat("component_at_scope_large"): iVar0 = 575; break;

			case joaat("component_at_scope_max"): iVar0 = 999; break;
			}
			break;

		case joaat("weapon_grenadelauncher"):
			switch (iParam1) {
			case joaat("component_at_ar_afgrip"): iVar0 = 128; break;

			case joaat("component_at_ar_flsh"): iVar0 = 185; break;

			case joaat("component_at_scope_small"): iVar0 = 525; break;
			}
			break;

		case joaat("weapon_minigun"):
			switch (iParam1) {
			case joaat("component_minigun_clip_01"): iVar0 = -1; break;
			}
			break;

		case joaat("weapon_assaultsmg"):
			switch (iParam1) {
			case joaat("component_assaultsmg_clip_01"): iVar0 = 110; break;

			case joaat("component_assaultsmg_clip_02"): iVar0 = 9700; break;

			case joaat("component_at_ar_flsh"): iVar0 = 2275; break;

			case joaat("component_at_scope_macro"): iVar0 = 10875; break;

			case joaat("component_at_ar_supp_02"): iVar0 = 12400; break;

			case joaat("component_assaultsmg_varmod_lowrider"): iVar0 = 17600; break;
			}
			if (func_70() && (func_69() || func_68())) {
				iVar0 = 0;
			}
			break;

		case joaat("weapon_bullpupshotgun"):
			switch (iParam1) {
			case joaat("component_at_ar_afgrip"): iVar0 = 4100; break;

			case joaat("component_at_ar_flsh"): iVar0 = 2300; break;

			case joaat("component_at_ar_supp_02"): iVar0 = 12450; break;
			}
			if (func_70() && (func_69() || func_68())) {
				iVar0 = 0;
			}
			break;

		case joaat("weapon_pistol50"):
			switch (iParam1) {
			case joaat("component_pistol50_clip_01"): iVar0 = 0; break;

			case joaat("component_pistol50_clip_02"): iVar0 = 9500; break;

			case joaat("component_at_pi_flsh"): iVar0 = 2000; break;

			case joaat("component_at_ar_supp_02"): iVar0 = 12250; break;

			case joaat("component_pistol50_varmod_luxe"): iVar0 = 20000; break;
			}
			if (func_70() && (func_69() || func_68())) {
				iVar0 = 0;
			}
			break;

		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1) {
			case joaat("component_sawnoffshotgun_varmod_luxe"): iVar0 = 13700; break;
			}
			break;

		case joaat("weapon_marksmanrifle"):
			switch (iParam1) {
			case joaat("component_marksmanrifle_clip_01"): iVar0 = 0; break;

			case joaat("component_marksmanrifle_clip_02"): iVar0 = 3612; break;

			case joaat("component_at_scope_large_fixed_zoom"): iVar0 = 0; break;

			case joaat("component_at_ar_flsh"): iVar0 = 1020; break;

			case joaat("component_at_ar_supp"): iVar0 = 5000; break;

			case joaat("component_at_ar_afgrip"): iVar0 = 1760; break;

			case joaat("component_marksmanrifle_varmod_luxe"): iVar0 = 17200; break;
			}
			break;

		case joaat("weapon_heavypistol"):
			switch (iParam1) {
			case joaat("component_heavypistol_clip_01"): iVar0 = 0; break;

			case joaat("component_heavypistol_clip_02"): iVar0 = 3680; break;

			case joaat("component_at_pi_flsh"): iVar0 = 710; break;

			case joaat("component_at_pi_supp"): iVar0 = 4800; break;

			case joaat("component_heavypistol_varmod_luxe"): iVar0 = 12000; break;
			}
			break;

		case joaat("weapon_knuckle"):
			switch (iParam1) {
			case joaat("component_knuckle_varmod_pimp"): iVar0 = 4900; break;

			case joaat("component_knuckle_varmod_ballas"): iVar0 = 5600; break;

			case joaat("component_knuckle_varmod_dollar"): iVar0 = 5500; break;

			case joaat("component_knuckle_varmod_diamond"): iVar0 = 5200; break;

			case joaat("component_knuckle_varmod_hate"): iVar0 = 4600; break;

			case joaat("component_knuckle_varmod_love"): iVar0 = 4700; break;

			case joaat("component_knuckle_varmod_player"): iVar0 = 4800; break;

			case joaat("component_knuckle_varmod_king"): iVar0 = 4300; break;

			case joaat("component_knuckle_varmod_vagos"): iVar0 = 4000; break;
			}
			break;

		case joaat("weapon_bullpuprifle"):
			switch (iParam1) {
			case joaat("component_bullpuprifle_clip_01"): iVar0 = 108; break;

			case joaat("component_bullpuprifle_clip_02"): iVar0 = 9950; break;

			case joaat("component_at_ar_flsh"): iVar0 = 2575; break;

			case joaat("component_at_scope_macro"): iVar0 = 11350; break;

			case joaat("component_at_ar_supp_02"): iVar0 = 12500; break;

			case joaat("component_at_ar_afgrip"): iVar0 = 4275; break;

			case joaat("component_bullpuprifle_varmod_low"): iVar0 = 16600; break;
			}
			break;

		case joaat("weapon_snspistol"):
			switch (iParam1) {
			case joaat("component_snspistol_clip_01"): iVar0 = 29; break;

			case joaat("component_snspistol_clip_02"): iVar0 = 9150; break;

			case joaat("component_snspistol_varmod_lowrider"): iVar0 = 13900; break;
			}
			break;

		case joaat("weapon_specialcarbine"):
			switch (iParam1) {
			case joaat("component_specialcarbine_clip_01"): iVar0 = 108; break;

			case joaat("component_specialcarbine_clip_02"): iVar0 = 9975; break;

			case joaat("component_specialcarbine_clip_03"): iVar0 = -1; break;

			case joaat("component_at_ar_flsh"): iVar0 = 2525; break;

			case joaat("component_at_scope_medium"): iVar0 = 11550; break;

			case joaat("component_at_ar_supp_02"): iVar0 = 12500; break;

			case joaat("component_specialcarbine_varmod_lowrider"): iVar0 = 18000; break;
			}
			break;

		case joaat("weapon_machinepistol"):
			switch (iParam1) {
			case joaat("component_machinepistol_clip_01"): iVar0 = 0; break;

			case joaat("component_machinepistol_clip_02"): iVar0 = 3680; break;

			case joaat("component_machinepistol_clip_03"): iVar0 = -1; break;

			case joaat("component_at_pi_supp"): iVar0 = 4840; break;
			}
			break;

		default:
			iVar2 = func_72(iParam0, &uVar4);
			if (iVar2 != -1) {
				iVar3 = 0;
				while (iVar3 < dlc1::get_num_dlc_weapon_components(iVar2)) {
					if (dlc1::get_dlc_weapon_component_data(iVar2, iVar3, &Var43)) {
						if (Var43.f_3 == iParam1) {
							fVar1 = 1f;
							if (!func_67(iParam1)) {
								Var43.f_5 = -1;
							}
							if (Var43.f_5 == -1) {
								iVar0 = -1;
							}
							else {
								iVar0 = Var43.f_5;
							}
							if (iParam0 == joaat("weapon_hammer")) {
								if (func_70() && (func_69() || func_68())) {
									iVar0 = 0;
								}
							}
						}
					}
					iVar3++;
				}
			}
			break;
		}
	}
	else {
		fVar1 = 2.5f;
		switch (iParam0) {
		case joaat("weapon_pistol"):
			switch (iParam1) {
			case joaat("component_pistol_clip_01"): iVar0 = 120; break;

			case joaat("component_pistol_clip_02"):
				iVar0 = 9175;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_2884);
				break;

			case joaat("component_at_pi_flsh"):
				iVar0 = 1675;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4336);
				break;

			case joaat("component_at_pi_supp_02"):
				iVar0 = 12050;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4337);
				break;

			case joaat("component_pistol_varmod_luxe"):
				iVar0 = Global_262145.f_9205;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4414);
				break;
			}
			break;

		case joaat("weapon_combatpistol"):
			switch (iParam1) {
			case joaat("component_combatpistol_clip_01"): iVar0 = 136; break;

			case joaat("component_combatpistol_clip_02"):
				iVar0 = 9250;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_2885);
				break;

			case joaat("component_at_pi_flsh"):
				iVar0 = 1825;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4338);
				break;

			case joaat("component_at_pi_supp"):
				iVar0 = 12100;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4339);
				break;

			case joaat("component_combatpistol_varmod_lowrider"):
				iVar0 = Global_262145.f_10576;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4409);
				break;
			}
			break;

		case joaat("weapon_appistol"):
			switch (iParam1) {
			case joaat("component_appistol_clip_01"): iVar0 = 145; break;

			case joaat("component_appistol_clip_02"):
				iVar0 = 9400;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_2887);
				break;

			case joaat("component_at_pi_flsh"):
				iVar0 = 1975;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4340);
				break;

			case joaat("component_at_pi_supp"):
				iVar0 = 12200;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4341);
				break;

			case joaat("component_appistol_varmod_luxe"):
				iVar0 = Global_262145.f_9204;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4403);
				break;
			}
			break;

		case joaat("weapon_microsmg"):
			switch (iParam1) {
			case joaat("component_microsmg_clip_01"): iVar0 = 120; break;

			case joaat("component_microsmg_clip_02"):
				iVar0 = 9325;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_2888);
				break;

			case joaat("component_at_pi_flsh"):
				iVar0 = 1900;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4344);
				break;

			case joaat("component_at_scope_macro"):
				iVar0 = 10800;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4346);
				break;

			case joaat("component_at_ar_supp_02"):
				iVar0 = 12150;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4345);
				break;

			case joaat("component_microsmg_varmod_luxe"):
				iVar0 = Global_262145.f_9208;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4413);
				break;
			}
			break;

		case joaat("weapon_smg"):
			switch (iParam1) {
			case joaat("component_smg_clip_01"): iVar0 = 119; break;

			case joaat("component_smg_clip_02"):
				iVar0 = 9475;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_2889);
				break;

			case joaat("component_smg_clip_03"): iVar0 = Global_262145.f_14247; break;

			case joaat("component_at_ar_flsh"):
				iVar0 = 2050;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4347);
				break;

			case joaat("component_at_scope_macro_02"):
				iVar0 = 10825;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4349);
				break;

			case joaat("component_at_pi_supp"):
				iVar0 = 12250;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4348);
				break;

			case joaat("component_smg_varmod_luxe"):
				iVar0 = Global_262145.f_9207;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4418);
				break;
			}
			break;

		case joaat("weapon_assaultrifle"):
			switch (iParam1) {
			case joaat("component_assaultrifle_clip_01"): iVar0 = 120; break;

			case joaat("component_assaultrifle_clip_02"):
				iVar0 = 9550;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_2891);
				break;

			case joaat("component_assaultrifle_clip_03"): iVar0 = Global_262145.f_14242; break;

			case joaat("component_at_ar_afgrip"):
				iVar0 = 4200;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4357);
				break;

			case joaat("component_at_ar_flsh"):
				iVar0 = 2125;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4354);
				break;

			case joaat("component_at_scope_macro"):
				iVar0 = 10850;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4356);
				break;

			case joaat("component_at_ar_supp_02"):
				iVar0 = 12300;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4355);
				break;

			case joaat("component_assaultrifle_varmod_luxe"):
				iVar0 = Global_262145.f_9201;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4404);
				break;
			}
			break;

		case joaat("weapon_carbinerifle"):
			switch (iParam1) {
			case joaat("component_carbinerifle_clip_01"): iVar0 = 99; break;

			case joaat("component_carbinerifle_clip_02"):
				iVar0 = 9775;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_2892);
				break;

			case joaat("component_carbinerifle_clip_03"): iVar0 = Global_262145.f_14241; break;

			case joaat("component_at_railcover_01"): iVar0 = -1; break;

			case joaat("component_at_ar_afgrip"):
				iVar0 = 4350;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4365);
				break;

			case joaat("component_at_ar_flsh"):
				iVar0 = 2350;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4362);
				break;

			case joaat("component_at_scope_medium"):
				iVar0 = 10900;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4364);
				break;

			case joaat("component_at_ar_supp"):
				iVar0 = 12450;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4363);
				break;

			case joaat("component_carbinerifle_varmod_luxe"):
				iVar0 = Global_262145.f_9203;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4407);
				break;
			}
			break;

		case joaat("weapon_advancedrifle"):
			switch (iParam1) {
			case joaat("component_advancedrifle_clip_01"): iVar0 = 110; break;

			case joaat("component_advancedrifle_clip_02"):
				iVar0 = 9925;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_2894);
				break;

			case joaat("component_at_ar_flsh"):
				iVar0 = 2425;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4367);
				break;

			case joaat("component_at_scope_small"):
				iVar0 = 10950;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4369);
				break;

			case joaat("component_at_ar_supp"):
				iVar0 = 12500;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4368);
				break;

			case joaat("component_advancedrifle_varmod_luxe"):
				iVar0 = Global_262145.f_9202;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4402);
				break;
			}
			break;

		case joaat("weapon_mg"):
			switch (iParam1) {
			case joaat("component_mg_clip_01"): iVar0 = 135; break;

			case joaat("component_mg_clip_02"):
				iVar0 = 9850;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_2895);
				break;

			case joaat("component_at_scope_small_02"): iVar0 = 10925; break;

			case joaat("component_mg_varmod_lowrider"):
				iVar0 = Global_262145.f_10577;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4412);
				break;
			}
			break;

		case joaat("weapon_combatmg"):
			switch (iParam1) {
			case joaat("component_combatmg_clip_01"): iVar0 = 119; break;

			case joaat("component_combatmg_clip_02"):
				iVar0 = 10000;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_2896);
				break;

			case joaat("component_at_ar_afgrip"):
				iVar0 = 4425;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4392);
				break;

			case joaat("component_at_scope_medium"):
				iVar0 = 10975;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4393);
				break;

			case joaat("component_combatmg_varmod_lowrider"):
				iVar0 = Global_262145.f_10578;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4408);
				break;
			}
			break;

		case joaat("weapon_pumpshotgun"):
			switch (iParam1) {
			case joaat("component_at_ar_flsh"):
				iVar0 = 1750;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4374);
				break;

			case joaat("component_at_sr_supp"):
				iVar0 = 12350;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4375);
				break;

			case joaat("component_pumpshotgun_varmod_lowrider"):
				iVar0 = Global_262145.f_10573;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4416);
				break;
			}
			break;

		case joaat("weapon_assaultshotgun"):
			switch (iParam1) {
			case joaat("component_assaultshotgun_clip_01"): iVar0 = 129; break;

			case joaat("component_assaultshotgun_clip_02"):
				iVar0 = 9625;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_2898);
				break;

			case joaat("component_at_ar_afgrip"):
				iVar0 = 4275;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4378);
				break;

			case joaat("component_at_ar_flsh"):
				iVar0 = 2200;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4379);
				break;

			case joaat("component_at_ar_supp"):
				iVar0 = 12350;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4380);
				break;
			}
			break;

		case joaat("weapon_sniperrifle"):
			switch (iParam1) {
			case joaat("component_sniperrifle_clip_01"): iVar0 = -1; break;

			case joaat("component_at_scope_large"):
				iVar0 = 12400;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4381);
				break;

			case joaat("component_at_scope_max"):
				iVar0 = 12500;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4382);
				break;

			case joaat("component_at_ar_supp_02"):
				iVar0 = 12050;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4383);
				break;

			case joaat("component_sniperrifle_varmod_luxe"):
				iVar0 = Global_262145.f_9210;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4419);
				break;
			}
			break;

		case joaat("weapon_heavysniper"):
			switch (iParam1) {
			case joaat("component_heavysniper_clip_01"): iVar0 = -1; break;

			case joaat("component_at_scope_large"):
				iVar0 = 99;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4384);
				break;

			case joaat("component_at_scope_max"):
				iVar0 = 12500;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4385);
				break;
			}
			break;

		case joaat("weapon_grenadelauncher"):
			switch (iParam1) {
			case joaat("component_at_ar_afgrip"):
				iVar0 = 4500;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4394);
				break;

			case joaat("component_at_ar_flsh"):
				iVar0 = 2500;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4390);
				break;

			case joaat("component_at_scope_small"):
				iVar0 = 11000;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4391);
				break;
			}
			break;

		case joaat("weapon_minigun"):
			switch (iParam1) {
			case joaat("component_minigun_clip_01"): iVar0 = -1; break;
			}
			break;

		case joaat("weapon_assaultsmg"):
			switch (iParam1) {
			case joaat("component_assaultsmg_clip_01"): iVar0 = 110; break;

			case joaat("component_assaultsmg_clip_02"):
				iVar0 = 9700;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_2890);
				break;

			case joaat("component_at_ar_flsh"):
				iVar0 = 2275;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4350);
				break;

			case joaat("component_at_scope_macro"):
				iVar0 = 10875;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4353);
				break;

			case joaat("component_at_ar_supp_02"):
				iVar0 = 12400;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4351);
				break;

			case joaat("component_assaultsmg_varmod_lowrider"):
				iVar0 = Global_262145.f_10574;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4352);
				break;
			}
			break;

		case joaat("weapon_gusenberg"):
			switch (iParam1) {
			case joaat("component_gusenberg_clip_01"): iVar0 = 0; break;

			case joaat("component_gusenberg_clip_02"): iVar0 = Global_262145.f_5508; break;
			}
			break;

		case joaat("weapon_snspistol"):
			switch (iParam1) {
			case joaat("component_snspistol_clip_01"): iVar0 = 0; break;

			case joaat("component_snspistol_clip_02"): iVar0 = Global_262145.f_6087; break;

			case joaat("component_snspistol_varmod_lowrider"): iVar0 = Global_262145.f_10575; break;
			}
			break;

		case joaat("weapon_specialcarbine"):
			switch (iParam1) {
			case joaat("component_specialcarbine_clip_01"): iVar0 = 0; break;

			case joaat("component_specialcarbine_clip_02"): iVar0 = Global_262145.f_6092; break;

			case joaat("component_specialcarbine_clip_03"): iVar0 = Global_262145.f_14244; break;

			case joaat("component_at_ar_flsh"): iVar0 = Global_262145.f_6095; break;

			case joaat("component_at_scope_medium"): iVar0 = Global_262145.f_6091; break;

			case joaat("component_at_ar_supp_02"): iVar0 = Global_262145.f_6089; break;

			case joaat("component_at_ar_afgrip"): iVar0 = Global_262145.f_6094; break;

			case joaat("component_specialcarbine_varmod_lowrider"): iVar0 = Global_262145.f_10579; break;
			}
			break;

		case joaat("weapon_heavypistol"):
			switch (iParam1) {
			case joaat("component_heavypistol_clip_01"): iVar0 = 0; break;

			case joaat("component_heavypistol_clip_02"): iVar0 = Global_262145.f_6093; break;

			case joaat("component_at_pi_flsh"): iVar0 = Global_262145.f_6097; break;

			case joaat("component_at_pi_supp"): iVar0 = Global_262145.f_6090; break;

			case joaat("component_heavypistol_varmod_luxe"): iVar0 = Global_262145.f_6117; break;
			}
			break;

		case joaat("weapon_bullpuprifle"):
			switch (iParam1) {
			case joaat("component_bullpuprifle_clip_01"): iVar0 = 0; break;

			case joaat("component_bullpuprifle_clip_02"): iVar0 = Global_262145.f_6100; break;

			case joaat("component_at_ar_flsh"): iVar0 = Global_262145.f_6103; break;

			case joaat("component_at_ar_supp"): iVar0 = Global_262145.f_6098; break;

			case joaat("component_at_scope_small"): iVar0 = Global_262145.f_6099; break;

			case joaat("component_at_ar_afgrip"): iVar0 = Global_262145.f_6101; break;

			case joaat("component_bullpuprifle_varmod_low"): iVar0 = Global_262145.f_10580; break;
			}
			break;

		case joaat("weapon_vintagepistol"):
			switch (iParam1) {
			case joaat("component_vintagepistol_clip_01"): iVar0 = 0; break;

			case joaat("component_vintagepistol_clip_02"): iVar0 = Global_262145.f_6573; break;

			case joaat("component_at_pi_supp"): iVar0 = Global_262145.f_6574; break;
			}
			break;

		case joaat("weapon_heavyshotgun"):
			switch (iParam1) {
			case joaat("component_heavyshotgun_clip_01"): iVar0 = 0; break;

			case joaat("component_heavyshotgun_clip_02"): iVar0 = Global_262145.f_7230; break;

			case joaat("component_heavyshotgun_clip_03"): iVar0 = Global_262145.f_14248; break;

			case joaat("component_at_ar_flsh"): iVar0 = Global_262145.f_7231; break;

			case joaat("component_at_ar_supp_02"): iVar0 = Global_262145.f_7232; break;

			case joaat("component_at_ar_afgrip"): iVar0 = Global_262145.f_7233; break;
			}
			break;

		case joaat("weapon_marksmanrifle"):
			switch (iParam1) {
			case joaat("component_marksmanrifle_clip_01"): iVar0 = 0; break;

			case joaat("component_marksmanrifle_clip_02"): iVar0 = Global_262145.f_7236; break;

			case joaat("component_at_ar_flsh"): iVar0 = Global_262145.f_7237; break;

			case joaat("component_at_ar_supp"): iVar0 = Global_262145.f_7239; break;

			case joaat("component_at_ar_afgrip"): iVar0 = Global_262145.f_7240; break;

			case joaat("component_marksmanrifle_varmod_luxe"): iVar0 = Global_262145.f_7241; break;
			}
			break;

		case joaat("weapon_bullpupshotgun"):
			switch (iParam1) {
			case joaat("component_at_ar_afgrip"):
				iVar0 = 4100;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_12742);
				break;

			case joaat("component_at_ar_flsh"):
				iVar0 = 2300;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4376);
				break;

			case joaat("component_at_ar_supp_02"):
				iVar0 = 12450;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4377);
				break;
			}
			if (func_70() && (func_69() || func_68())) {
				iVar0 = 0;
			}
			break;

		case joaat("weapon_pistol50"):
			switch (iParam1) {
			case joaat("component_pistol50_clip_01"): iVar0 = 0; break;

			case joaat("component_pistol50_clip_02"):
				iVar0 = 9500;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_2886);
				break;

			case joaat("component_at_pi_flsh"):
				iVar0 = 2000;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4342);
				break;

			case joaat("component_at_ar_supp_02"):
				iVar0 = 12250;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4343);
				break;

			case joaat("component_pistol50_varmod_luxe"):
				iVar0 = Global_262145.f_9206;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4415);
				break;
			}
			if (func_70() && (func_69() || func_68())) {
				iVar0 = 0;
			}
			break;

		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1) {
			case joaat("component_sawnoffshotgun_varmod_luxe"):
				iVar0 = Global_262145.f_9209;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4417);
				break;
			}
			break;

		case joaat("weapon_knuckle"):
			switch (iParam1) {
			case joaat("component_knuckle_varmod_pimp"):
				iVar0 = Global_262145.f_9521;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4422);
				break;

			case joaat("component_knuckle_varmod_ballas"):
				iVar0 = Global_262145.f_9522;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4423);
				break;

			case joaat("component_knuckle_varmod_dollar"):
				iVar0 = Global_262145.f_9523;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4424);
				break;

			case joaat("component_knuckle_varmod_diamond"):
				iVar0 = Global_262145.f_9524;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4425);
				break;

			case joaat("component_knuckle_varmod_hate"):
				iVar0 = Global_262145.f_9525;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4426);
				break;

			case joaat("component_knuckle_varmod_love"):
				iVar0 = Global_262145.f_9526;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4427);
				break;

			case joaat("component_knuckle_varmod_player"):
				iVar0 = Global_262145.f_9527;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4428);
				break;

			case joaat("component_knuckle_varmod_king"):
				iVar0 = Global_262145.f_9528;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4429);
				break;

			case joaat("component_knuckle_varmod_vagos"):
				iVar0 = Global_262145.f_9529;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4430);
				break;
			}
			break;

		case joaat("weapon_machinepistol"):
			switch (iParam1) {
			case joaat("component_machinepistol_clip_01"): iVar0 = 0; break;

			case joaat("component_machinepistol_clip_02"):
				iVar0 = Global_262145.f_9546;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4432);
				break;

			case joaat("component_machinepistol_clip_03"): iVar0 = Global_262145.f_14246; break;

			case joaat("component_at_pi_supp"):
				iVar0 = Global_262145.f_9547;
				iVar0 = system::floor(system::to_float(iVar0) * Global_262145.f_4433);
				break;
			}
			break;

		case joaat("weapon_switchblade"):
			switch (iParam1) {
			case joaat("component_switchblade_varmod_base"): iVar0 = 0; break;

			case joaat("component_switchblade_varmod_var1"): iVar0 = Global_262145.f_11421; break;

			case joaat("component_switchblade_varmod_var2"): iVar0 = Global_262145.f_11422; break;
			}
			break;

		case joaat("weapon_revolver"):
			switch (iParam1) {
			case joaat("component_revolver_clip_01"): iVar0 = 0; break;

			case joaat("component_revolver_varmod_boss"): iVar0 = Global_262145.f_11479; break;

			case joaat("component_revolver_varmod_goon"): iVar0 = Global_262145.f_11420; break;
			}
			break;

		case joaat("weapon_compactrifle"):
			switch (iParam1) {
			case joaat("component_compactrifle_clip_01"): iVar0 = 0; break;

			case joaat("component_compactrifle_clip_02"): iVar0 = Global_262145.f_12672; break;

			case joaat("component_compactrifle_clip_03"): iVar0 = Global_262145.f_14243; break;
			}
			break;

		case joaat("weapon_dbshotgun"):
			switch (iParam1) {
			case joaat("component_dbshotgun_clip_01"): iVar0 = 0; break;
			}
			break;

		case -1121678507:
			switch (iParam1) {
			case -2067221805: iVar0 = 0; break;

			case -1820405577: iVar0 = Global_262145.f_16681; break;
			}
			break;

		case joaat("weapon_combatpdw"):
			switch (iParam1) {
			case joaat("component_combatpdw_clip_01"): iVar0 = 0; break;

			case joaat("component_combatpdw_clip_02"): iVar0 = 9950; break;

			case joaat("component_combatpdw_clip_03"): iVar0 = Global_262145.f_14245; break;

			case joaat("component_at_ar_flsh"): iVar0 = 11350; break;

			case joaat("component_at_scope_small"): iVar0 = 11350; break;

			case joaat("component_at_ar_afgrip"): iVar0 = 2400; break;
			}
			break;

		default:
			iVar65 = func_72(iParam0, &uVar67);
			if (iVar65 != -1) {
				iVar66 = 0;
				while (iVar66 < dlc1::get_num_dlc_weapon_components(iVar65)) {
					if (dlc1::get_dlc_weapon_component_data(iVar65, iVar66, &Var106)) {
						if (Var106.f_3 == iParam1) {
							fVar1 = 1f;
							if (Var106.f_5 == -1) {
								iVar0 = -1;
							}
							else {
								iVar0 = Var106.f_5;
							}
						}
					}
					iVar66++;
				}
			}
			break;
		}
	}
	if (network::network_is_game_in_progress() && func_65()) {
		StringCopy(&Var144, func_63(iParam1, iParam0), 16);
		func_60(&sVar128, Var144, entity::get_entity_model(player::player_ped_id()), 3, 1, func_61(iParam0), -1, -1, 0);
		if (mobile::_network_shop_is_item_unlocked(&sVar128)) {
			iVar0 = unk3::_network_shop_get_price(gameplay::get_hash_key(&sVar128), 1671640801, 1);
		}
	}
	if (iVar0 > 0) {
		fVar148 = func_23(iParam0, &iVar0, fVar1);
		if (fVar148 != 1f) {
		}
	}
	return iVar0;
}

// Position - 0x3AFB
float func_23(int iParam0, int iParam1, float fParam2) {
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 0f;
	fVar1 = 0f;
	if (network::network_is_game_in_progress() && func_65()) {
		return 1f;
	}
	if (!network::network_is_game_in_progress()) {
		*iParam1 = system::floor(system::to_float(*iParam1) * fParam2);
	}
	if (!Global_69702) {
		if (*iParam1 != 0) {
			iVar2 = func_52(iParam0);
			if (iVar2 == 3) {
				fVar1 = 0.1f;
			}
			else if (iVar2 == 2) {
				fVar1 = 0.15f;
			}
			else if (iVar2 == 1) {
				fVar1 = 0.25f;
			}
		}
	}
	if (iLocal_50 == 1) {
		if (network::network_is_game_in_progress()) {
			*iParam1 = system::floor(system::to_float(*iParam1) * Global_262145.f_76);
			fVar1 += system::to_float(Global_262145.f_121) / 100f;
		}
	}
	if (iLocal_50 == 0) {
		if (network::network_is_game_in_progress()) {
			*iParam1 = system::floor(system::to_float(*iParam1) * Global_262145.f_76);
			if (func_24()) {
				fVar1 += system::to_float(Global_262145.f_121) / 100f;
				iLocal_50 = 1;
			}
			else {
				iLocal_50 = -1;
			}
		}
	}
	fVar0 = 1f - fVar1;
	*iParam1 = system::floor(system::to_float(*iParam1) * fVar0);
	return fVar0;
}

// Position - 0x3C11
bool func_24() {
	int iVar0;
	int iVar1;
	float fVar2;

	if (gameplay::is_pc_version()) {
		return false;
	}
	if (func_87()) {
		if (func_27()) {
			iVar0 = func_26();
			iVar1 = func_25();
			fVar2 = system::to_float(iVar1) / system::to_float(iVar0) * 100f;
			if (fVar2 > IntToFloat(Global_262145.f_120) && iVar0 >= 8) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x3C6F
int func_25() {
	int iVar0;

	iVar0 += Global_1363164;
	iVar0 += Global_1363167;
	return iVar0;
}

// Position - 0x3C8B
int func_26() {
	int iVar0;

	iVar0 += Global_1363165;
	iVar0 += Global_1363166;
	iVar0 += Global_1363164;
	iVar0 += Global_1363167;
	iVar0 += Global_1363169;
	iVar0 += Global_1363168;
	iVar0 += func_14(joaat("mpply_exploits"));
	iVar0 += func_14(joaat("mpply_vc_annoyingme"));
	iVar0 += func_14(joaat("mpply_vc_hate"));
	iVar0 += func_14(joaat("mpply_bad_crew_name"));
	iVar0 += func_14(joaat("mpply_bad_crew_motto"));
	iVar0 += func_14(joaat("mpply_bad_crew_status"));
	iVar0 += func_14(joaat("mpply_bad_crew_emblem"));
	iVar0 += func_14(joaat("mpply_playermade_title"));
	iVar0 += func_14(joaat("mpply_playermade_desc"));
	return iVar0;
}

// Position - 0x3D49
bool func_27() {
	struct<7> Var0;
	struct<7> Var7;

	time::get_posix_time(&Var0, &Var0.f_1, &Var0.f_2, &Var0.f_3, &Var0.f_4, &Var0.f_5);
	Var7 = {func_51(joaat("mpply_started_mp"))};
	if (func_28(Var7, Var0, 7)) {
		return true;
	}
	return false;
}

// Position - 0x3D8D
bool func_28(struct<7> Param0, struct<7> Param7, int iParam14) {
	int iVar0;
	int iVar1;

	iVar0 = func_49(Param7);
	iVar1 = func_39(Param0, iParam14);
	if (iVar1 == -15) {
		return false;
	}
	if (func_29(iVar0, iVar1) == 1) {
		return true;
	}
	return false;
}

// Position - 0x3DC8
int func_29(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (!func_37(iParam1) || !func_37(iParam0)) {
		return 1;
	}
	iVar0 = func_35(iParam0);
	iVar1 = func_35(iParam1);
	if (iVar0 > iVar1) {
		return 1;
	}
	else if (iVar0 < iVar1) {
		return 0;
	}
	iVar0 = func_34(iParam0);
	iVar1 = func_34(iParam1);
	if (iVar0 > iVar1) {
		return 1;
	}
	else if (iVar0 < iVar1) {
		return 0;
	}
	iVar0 = func_33(iParam0);
	iVar1 = func_33(iParam1);
	if (iVar0 > iVar1) {
		return 1;
	}
	else if (iVar0 < iVar1) {
		return 0;
	}
	iVar0 = func_32(iParam0);
	iVar1 = func_32(iParam1);
	if (iVar0 > iVar1) {
		return 1;
	}
	else if (iVar0 < iVar1) {
		return 0;
	}
	iVar0 = func_31(iParam0);
	iVar1 = func_31(iParam1);
	if (iVar0 > iVar1) {
		return 1;
	}
	else if (iVar0 < iVar1) {
		return 0;
	}
	iVar0 = func_30(iParam0);
	iVar1 = func_30(iParam1);
	if (iVar0 > iVar1) {
		return 1;
	}
	return 0;
}

// Position - 0x3ED4
int func_30(int iParam0) { return system::shift_right(iParam0, 20) & 63; }

// Position - 0x3EE7
int func_31(int iParam0) { return system::shift_right(iParam0, 14) & 63; }

// Position - 0x3EFA
int func_32(int iParam0) { return system::shift_right(iParam0, 9) & 31; }

// Position - 0x3F0D
int func_33(int iParam0) { return system::shift_right(iParam0, 4) & 31; }

// Position - 0x3F1F
int func_34(int iParam0) { return iParam0 & 15; }

// Position - 0x3F2C
var func_35(int iParam0) {
	return (system::shift_right(iParam0, 26) & 31) * func_36(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x3F51
int func_36(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x3F68
int func_37(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15) {
		return 0;
	}
	iVar0 = func_30(iParam0);
	if (iVar0 < 0 || iVar0 >= 60) {
		return 0;
	}
	iVar1 = func_31(iParam0);
	if (iVar1 < 0 || iVar1 >= 60) {
		return 0;
	}
	iVar2 = func_32(iParam0);
	if (iVar2 < 0 || iVar2 > 23) {
		return 0;
	}
	iVar3 = func_35(iParam0);
	if (iVar3 <= 0 || iVar3 > 2043 || iVar3 < 1979) {
		return 0;
	}
	iVar4 = func_34(iParam0);
	if (iVar4 < 0 || iVar4 > 11) {
		return 0;
	}
	iVar5 = func_33(iParam0);
	if (iVar5 < 1 || iVar5 > func_38(iVar4, iVar3)) {
		return 0;
	}
	return 1;
}

// Position - 0x4046
int func_38(int iParam0, int iParam1) {
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

// Position - 0x40E8
var func_39(struct<7> Param0, int iParam7) {
	var uVar0;
	int *iVar1;
	var uVar2;

	if (func_48(Param0) == 0) {
		uVar0 = func_49(Param0);
		iVar1 = uVar0;
		func_40(&iVar1, 0, 0, 0, iParam7, 0, 0);
		if (iParam7 == 0) {
			iVar1 = uVar0;
		}
		return iVar1;
	}
	return uVar2;
}

// Position - 0x4128
void func_40(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_35(*iParam0);
	iVar1 = func_34(*iParam0);
	iVar2 = func_33(*iParam0);
	iVar3 = func_32(*iParam0);
	iVar4 = func_31(*iParam0);
	iVar5 = func_30(*iParam0);
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
	iVar6 = func_38(iVar1, iVar0);
	while (iVar2 > iVar6) {
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11) {
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_38(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11) {
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_41(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

// Position - 0x42AA
void func_41(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_47(iParam0, iParam1);
	func_46(iParam0, iParam2);
	func_45(iParam0, iParam3);
	func_44(iParam0, iParam5);
	func_43(iParam0, iParam4);
	func_42(iParam0, iParam6);
}

// Position - 0x42E2
void func_42(int *iParam0, int iParam1) {
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

// Position - 0x4368
void func_43(int *iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_34(*iParam0);
	iVar1 = func_35(*iParam0);
	if (iParam1 < 1 || iParam1 > func_38(iVar0, iVar1)) {
		return;
	}
	*iParam0 -= (*iParam0 & 496);
	*iParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0x43B9
void func_44(int *iParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*iParam0 -= (*iParam0 & 15);
	*iParam0 |= iParam1;
}

// Position - 0x43EC
void func_45(int *iParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*iParam0 -= (*iParam0 & 15872);
	*iParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0x4426
void func_46(int *iParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*iParam0 -= (*iParam0 & 1032192);
	*iParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0x4461
void func_47(int *iParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*iParam0 -= (*iParam0 & 66060288);
	*iParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0x449D
int func_48(struct<7> Param0) {
	if (Param0 == 0 && Param0.f_1 == 0 && Param0.f_2 == 0 && Param0.f_3 == 0 && Param0.f_4 == 0 && Param0.f_5 == 0 &&
		Param0.f_6 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x44F3
var func_49(struct<6> Param0, var uParam6) {
	int *iVar0;

	if (Param0 > 0) {
		func_42(&iVar0, Param0);
	}
	if (Param0.f_1 > 0) {
		func_44(&iVar0, func_50(Param0.f_1));
	}
	if (Param0.f_2 > 0) {
		func_43(&iVar0, Param0.f_2);
	}
	if (Param0.f_3 > 0) {
		func_45(&iVar0, Param0.f_3);
	}
	if (Param0.f_4 > 0) {
		func_46(&iVar0, Param0.f_4);
	}
	if (Param0.f_5 > 0) {
		func_47(&iVar0, Param0.f_5);
	}
	return iVar0;
}

// Position - 0x4569
int func_50(int iParam0) {
	if (iParam0 < 1) {
		return 0;
	}
	if (iParam0 > 12) {
		return 0;
	}
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

	case 10: return 9;

	case 11: return 10;

	case 12: return 11;
	}
	return 0;
}

// Position - 0x462E
struct<7> func_51(int iParam0) {
	var uVar0;
	struct<7> Var1;
	struct<7> Var8;

	uVar0 = iParam0;
	if (stats::stat_get_date(uVar0, &Var8, 7, -1)) {
		return Var8;
	}
	return Var1;
}

//Position - 0x4652
int func_52(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[6];
	int iVar10;

	iVar0 = func_56();
	if (iParam0 == 0 || !func_55(iVar0)) {
		return -1;
	}
	iVar1 = 7;
	switch (iParam0) {
	case joaat("weapon_unarmed"): break;

	case joaat("gadget_parachute"): break;

	case joaat("weapon_microsmg"): iVar1 = 1; break;

	case joaat("weapon_smg"): iVar1 = 1; break;

	case joaat("weapon_sawnoffshotgun"): iVar1 = 3; break;

	case joaat("weapon_pumpshotgun"): iVar1 = 3; break;

	case joaat("weapon_assaultshotgun"): iVar1 = 3; break;

	case joaat("weapon_assaultrifle"): iVar1 = 2; break;

	case joaat("weapon_carbinerifle"): iVar1 = 2; break;

	case joaat("weapon_advancedrifle"): iVar1 = 2; break;

	case joaat("weapon_sniperrifle"): break;

	case joaat("weapon_heavysniper"): break;

	case joaat("weapon_mg"): iVar1 = 4; break;

	case joaat("weapon_combatmg"): iVar1 = 4; break;

	case joaat("weapon_rpg"): break;

	case joaat("weapon_grenadelauncher"): break;

	case joaat("weapon_minigun"): iVar1 = 5; break;

	case joaat("weapon_knife"): break;

	case joaat("weapon_nightstick"): break;

	case joaat("weapon_petrolcan"): break;

	case joaat("weapon_stungun"): break;

	case joaat("weapon_appistol"): iVar1 = 0; break;

	case joaat("weapon_combatpistol"): iVar1 = 0; break;

	case joaat("weapon_pistol"): iVar1 = 0; break;

	case joaat("weapon_smokegrenade"): break;

	case joaat("weapon_grenade"): break;

	case joaat("weapon_stickybomb"): break;
	}
	if (iVar1 != 7) {
		switch (func_53(iVar1, iVar0)) {
		case 1: return 3;

		case 2: return 2;

		case 3: return 1;
		}
	}
	else {
		iVar3[0] = func_53(1, iVar0);
		iVar3[1] = func_53(3, iVar0);
		iVar3[2] = func_53(2, iVar0);
		iVar3[3] = func_53(4, iVar0);
		iVar3[4] = func_53(5, iVar0);
		iVar3[5] = func_53(0, iVar0);
		iVar10 = 0;
		iVar2 = 0;
		while (iVar2 < 6) {
			if (iVar3[iVar2] < 3) {
				iVar10 = 1;
			}
			iVar2++;
		}
		if (!iVar10) {
			return 1;
		}
		iVar10 = 0;
		iVar2 = 0;
		while (iVar2 < 6) {
			if (iVar3[iVar2] < 2) {
				iVar10 = 1;
			}
			iVar2++;
		}
		if (!iVar10) {
			return 2;
		}
		iVar10 = 0;
		iVar2 = 0;
		while (iVar2 < 6) {
			if (iVar3[iVar2] < 1) {
				iVar10 = 1;
			}
			iVar2++;
		}
		if (!iVar10) {
			return 3;
		}
	}
	return -1;
}

// Position - 0x48AE
int func_53(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (iParam0 == 0) {
		iVar0 = 0;
		iVar1 = 1;
		iVar2 = 2;
		iVar3 = -1;
	}
	else if (iParam0 == 1) {
		iVar0 = 3;
		iVar1 = 4;
		iVar2 = 5;
		iVar3 = -1;
	}
	else if (iParam0 == 2) {
		iVar0 = 9;
		iVar1 = 10;
		iVar2 = 11;
		iVar3 = -1;
	}
	else if (iParam0 == 3) {
		iVar0 = 6;
		iVar1 = 7;
		iVar2 = 8;
		iVar3 = -1;
	}
	else if (iParam0 == 4) {
		iVar0 = 12;
		iVar1 = 13;
		iVar2 = 14;
		iVar3 = -1;
	}
	else if (iParam0 == 5) {
		iVar0 = 15;
		iVar1 = 16;
		iVar2 = 17;
		iVar3 = -1;
	}
	else if (iParam0 == 6) {
		iVar0 = 18;
		iVar1 = 19;
		iVar2 = 20;
		iVar3 = 21;
	}
	else {
		return 0;
	}
	iVar4 = func_54(iVar0, iParam1);
	if (func_54(iVar1, iParam1) < iVar4) {
		iVar4 = func_54(iVar1, iParam1);
	}
	if (func_54(iVar2, iParam1) < iVar4) {
		iVar4 = func_54(iVar2, iParam1);
	}
	if (iVar3 != -1) {
		if (func_54(iVar3, iParam1) < iVar4) {
			iVar4 = func_54(iVar3, iParam1);
		}
	}
	return iVar4;
}

// Position - 0x49B2
int func_54(int iParam0, int iParam1) { return Global_101700.f_18106[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3; }

// Position - 0x49CE
bool func_55(int iParam0) { return iParam0 < 3; }

// Position - 0x49DA
int func_56() {
	func_57();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x49F3
void func_57() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_59(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_58(player::player_ped_id());
			if (func_55(iVar0) && (!func_145(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_55(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x4AF0
int func_58(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_59(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x4B2D
int func_59(int iParam0) {
	if (func_55(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x4B57
void func_60(char *sParam0, char[8] cParam1, char[4] cParam3, char[4] cParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9, int iParam10, int iParam11) {
	switch (gameplay::get_hash_key(&cParam1)) {
	case 64715401:
	case -2016195117: StringCopy(&cParam1, "GSA_TYPE_R", 16); break;

	case -414529079:
	case -1253005183: StringCopy(&cParam1, "GSA_TYPE_C", 16); break;

	case 336264847:
	case -1119195824: StringCopy(&cParam1, "GSA_TYPE_RO", 16); break;

	case 531395379:
	case -672224483: StringCopy(&cParam1, "GSA_TYPE_CH", 16); break;

	case 1034118160:
	case 600999375: StringCopy(&cParam1, "GSA_TYPE_G", 16); break;

	case -218834291:
	case -859056265: StringCopy(&cParam1, "GSA_TYPE_B", 16); break;

	case 1779531303:
	case 82051787: StringCopy(&cParam1, "GSA_TYPE_FW", 16); break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam6) {
	case 0:
		if (iParam5 == joaat("mp_m_freemode_01")) {
			StringCopy(sParam0, "M", 64);
		}
		else if (iParam5 == joaat("mp_f_freemode_01")) {
			StringCopy(sParam0, "F", 64);
		}
		StringConCat(sParam0, "_HA_", 64);
		StringConCat(sParam0, &cParam1, 64);
		StringConCat(sParam0, "_t", 64);
		StringIntConCat(sParam0, iParam7, 64);
		StringConCat(sParam0, "_v", 64);
		StringIntConCat(sParam0, iParam8, 64);
		break;

	case 1:
		if (iParam5 == joaat("mp_m_freemode_01")) {
			StringCopy(sParam0, "M", 64);
		}
		else if (iParam5 == joaat("mp_f_freemode_01")) {
			StringCopy(sParam0, "F", 64);
		}
		StringConCat(sParam0, "_CL_", 64);
		if (iParam7 == 12) {
			StringConCat(sParam0, "OUTFIT_", 64);
		}
		StringConCat(sParam0, &cParam1, 64);
		if (iParam9 != -1) {
			StringConCat(sParam0, "_n", 64);
			StringIntConCat(sParam0, iParam9, 64);
		}
		StringConCat(sParam0, "_t", 64);
		StringIntConCat(sParam0, iParam7, 64);
		StringConCat(sParam0, "_v", 64);
		StringIntConCat(sParam0, iParam8, 64);
		break;

	case 2:
		if (iParam5 == joaat("mp_m_freemode_01")) {
			StringCopy(sParam0, "M", 64);
		}
		else if (iParam5 == joaat("mp_f_freemode_01")) {
			StringCopy(sParam0, "F", 64);
		}
		StringConCat(sParam0, "_TA_", 64);
		StringConCat(sParam0, &cParam1, 64);
		StringConCat(sParam0, "_t", 64);
		StringIntConCat(sParam0, iParam7, 64);
		StringConCat(sParam0, "_v", 64);
		StringIntConCat(sParam0, iParam8, 64);
		break;

	case 3:
		StringConCat(sParam0, "WP_", 64);
		StringConCat(sParam0, &cParam1, 64);
		StringConCat(sParam0, "_t", 64);
		StringIntConCat(sParam0, iParam7, 64);
		StringConCat(sParam0, "_v", 64);
		StringIntConCat(sParam0, iParam8, 64);
		break;

	case 4:
		if (iParam5 == Global_68114) {
			StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
		}
		else if (iParam5 == 0) {
			StringConCat(sParam0, "VEM_", 64);
			if (iParam7 == 24 || iParam7 == 25) {
				if (iParam9 == 1) {
					StringConCat(sParam0, "COLOUR_1_", 64);
				}
				else if (iParam9 == 2) {
					StringConCat(sParam0, "COLOUR_2_", 64);
				}
				else if (iParam9 == 3) {
					StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
				}
				if (iParam10 == 5) {
					StringConCat(sParam0, "MCT_CHROME_", 64);
				}
				else if (iParam10 == 1) {
					StringConCat(sParam0, "MCT_CLASSIC_", 64);
				}
				else if (iParam10 == 0) {
					StringConCat(sParam0, "MCT_METALLIC_", 64);
				}
				else if (iParam10 == 4) {
					StringConCat(sParam0, "MCT_METALS_", 64);
				}
				else if (iParam10 == 3) {
					StringConCat(sParam0, "MCT_MATTE_", 64);
				}
				else if (iParam10 == 2) {
					StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
				}
				else if (iParam10 == 6) {
					StringConCat(sParam0, "MCT_NONE_", 64);
				}
				iParam9 = -1;
			}
			else if (iParam7 == 38) {
				StringConCat(sParam0, "COLOUR_5_", 64);
			}
			else if (iParam7 == 65) {
				StringConCat(sParam0, "COLOUR_6_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam9 != -1) {
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
		}
		else if (iParam7 == 22) {
			StringCopy(&cParam1, vehicle::get_display_name_from_vehicle_model(iParam5), 16);
			if (gameplay::is_string_null_or_empty(&cParam1) || gameplay::get_hash_key(&cParam1) == -515263000) {
				return;
			}
			StringConCat(sParam0, "VEM_INSURANCE_", 64);
			StringConCat(sParam0, &cParam1, 64);
			if (!iParam11) {
				switch (iParam5) {
				case joaat("dubsta2"):
				case joaat("cavalcade2"):
				case joaat("mesa2"):
				case joaat("rapidgt2"):
				case joaat("emperor2"): StringConCat(sParam0, "2", 64); break;

				case joaat("mesa3"):
				case joaat("emperor3"):
				case joaat("burrito3"):
				case joaat("mule3"): StringConCat(sParam0, "3", 64); break;

				case joaat("tornado4"): StringConCat(sParam0, "4", 64); break;
				}
			}
		}
		else if (iParam7 == 40) {
			if (iParam5 == joaat("fcr2")) {
				StringCopy(&cParam1, "FCR2", 16);
			}
			else if (iParam5 == joaat("diablous2")) {
				StringCopy(&cParam1, "DIABLOUS2", 16);
			}
			else if (iParam5 == joaat("comet3")) {
				StringCopy(&cParam1, "COMET3", 16);
			}
			else {
				StringCopy(&cParam1, vehicle::get_display_name_from_vehicle_model(iParam5), 16);
				if (gameplay::is_string_null_or_empty(&cParam1)) {
					return;
				}
			}
			StringConCat(sParam0, "VEU_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t0_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
		}
		else {
			StringConCat(sParam0, "VE_", 64);
			StringConCat(sParam0, &cParam1, 64);
			if (!iParam11) {
				switch (iParam5) {
				case joaat("dubsta2"):
				case joaat("cavalcade2"):
				case joaat("mesa2"):
				case joaat("rapidgt2"):
				case joaat("emperor2"): StringConCat(sParam0, "2", 64); break;

				case joaat("mesa3"):
				case joaat("emperor3"):
				case joaat("burrito3"):
				case joaat("mule3"): StringConCat(sParam0, "3", 64); break;

				case joaat("tornado4"): StringConCat(sParam0, "4", 64); break;
				}
			}
			if (iParam9 != -1) {
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
		}
		break;
	}
}

// Position - 0x5067
int func_61(int iParam0) { return func_62(iParam0); }

// Position - 0x5075
int func_62(int iParam0) {
	switch (iParam0) {
	case joaat("weapon_unarmed"): return 0;

	case joaat("weapon_pistol"): return 1;

	case joaat("weapon_combatpistol"): return 2;

	case joaat("weapon_appistol"): return 3;

	case joaat("weapon_pistol50"): return 4;

	case joaat("weapon_smg"): return 5;

	case joaat("weapon_assaultsmg"): return 6;

	case joaat("weapon_microsmg"): return 7;

	case joaat("weapon_assaultrifle"): return 8;

	case joaat("weapon_carbinerifle"): return 9;

	case -947031628: return 10;

	case joaat("weapon_advancedrifle"): return 11;

	case joaat("weapon_mg"): return 12;

	case joaat("weapon_combatmg"): return 13;

	case -572349828: return 14;

	case joaat("weapon_stickybomb"): return 15;

	case joaat("weapon_grenade"): return 16;

	case joaat("weapon_smokegrenade"): return 17;

	case joaat("weapon_remotesniper"): return 18;

	case 392730790: return 19;

	case joaat("weapon_sniperrifle"): return 20;

	case joaat("weapon_heavysniper"): return 21;

	case joaat("weapon_pumpshotgun"): return 22;

	case joaat("weapon_bullpupshotgun"): return 23;

	case joaat("weapon_assaultshotgun"): return 24;

	case joaat("weapon_sawnoffshotgun"): return 25;

	case joaat("weapon_grenadelauncher"): return 26;

	case joaat("weapon_rpg"): return 27;

	case joaat("weapon_minigun"): return 28;

	case -344484024: return 29;

	case -1887867191: return 30;

	case joaat("weapon_stungun"): return 31;

	case -837150131: return 32;

	case joaat("gadget_parachute"): return 33;

	case joaat("weapon_knife"): return 34;

	case joaat("weapon_nightstick"): return 35;

	case joaat("weapon_hammer"): return 36;

	case joaat("weapon_bat"): return 37;

	case joaat("weapon_crowbar"): return 38;

	case joaat("weapon_golfclub"): return 39;

	case joaat("weapon_grenadelauncher_smoke"): return 40;

	case joaat("weapon_molotov"): return 41;

	case joaat("weapon_fireextinguisher"): return 42;

	case joaat("weapon_petrolcan"): return 43;

	case joaat("weapon_digiscanner"): return 44;

	case joaat("weapon_bottle"): return 45;

	case joaat("weapon_specialcarbine"): return 46;

	case joaat("weapon_snspistol"): return 47;

	case joaat("weapon_heavypistol"): return 49;

	case joaat("weapon_bullpuprifle"): return 48;

	case joaat("weapon_gusenberg"): return 50;

	case joaat("weapon_dagger"): return 51;

	case joaat("weapon_vintagepistol"): return 52;

	case joaat("weapon_flaregun"): return 57;

	case joaat("weapon_musket"): return 53;

	case joaat("weapon_firework"): return 54;

	case joaat("weapon_marksmanrifle"): return 56;

	case joaat("weapon_heavyshotgun"): return 55;

	case joaat("weapon_proxmine"): return 60;

	case joaat("weapon_hominglauncher"): return 61;

	case joaat("weapon_hatchet"): return 58;

	case joaat("weapon_railgun"): return 59;

	case joaat("weapon_combatpdw"): return 64;

	case joaat("weapon_knuckle"): return 62;

	case joaat("weapon_marksmanpistol"): return 63;

	case joaat("weapon_machete"): return 65;

	case joaat("weapon_machinepistol"): return 68;

	case joaat("weapon_dbshotgun"): return 66;

	case joaat("weapon_compactrifle"): return 67;

	case joaat("weapon_flashlight"): return 69;

	case joaat("weapon_revolver"): return 70;

	case joaat("weapon_switchblade"): return 71;

	case 317205821: return 72;

	case -1121678507: return 73;

	case 125959754: return 74;

	case -853065399: return 75;

	case -1169823560: return 76;

	case -1810795771: return 77;

	case 419712736: return 78;
	}
	return 0;
}

// Position - 0x54CF
char *func_63(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	var *uVar2;
	struct<7> Var41;

	if (iParam1 == joaat("weapon_knuckle")) {
		switch (iParam0) {
		case joaat("component_knuckle_varmod_base"): return "WT_KNUCKLE";

		case joaat("component_knuckle_varmod_pimp"): return "WCT_KNUCK_02";

		case joaat("component_knuckle_varmod_ballas"): return "WCT_KNUCK_BG";

		case joaat("component_knuckle_varmod_dollar"): return "WCT_KNUCK_DLR";

		case joaat("component_knuckle_varmod_diamond"): return "WCT_KNUCK_DMD";

		case joaat("component_knuckle_varmod_hate"): return "WCT_KNUCK_HT";

		case joaat("component_knuckle_varmod_love"): return "WCT_KNUCK_LV";

		case joaat("component_knuckle_varmod_player"): return "WCT_KNUCK_PC";

		case joaat("component_knuckle_varmod_king"): return "WCT_KNUCK_SLG";

		case joaat("component_knuckle_varmod_vagos"): return "WCT_KNUCK_VG";
		}
	}
	switch (iParam0) {
	case 0: return "WCT_INVALID";

	case joaat("component_at_railcover_01"): return "WCT_RAIL";

	case joaat("component_at_ar_afgrip"): return "WCT_GRIP";

	case joaat("component_at_pi_flsh"): return "WCT_FLASH";

	case joaat("component_at_ar_flsh"): return "WCT_FLASH";

	case joaat("component_at_scope_macro"): return "WCT_SCOPE_MAC";

	case joaat("component_at_scope_macro_02"): return "WCT_SCOPE_MAC";

	case joaat("component_at_scope_small"): return "WCT_SCOPE_SML";

	case joaat("component_at_scope_small_02"): return "WCT_SCOPE_SML";

	case joaat("component_at_scope_medium"): return "WCT_SCOPE_MED";

	case joaat("component_at_scope_large"): return "WCT_SCOPE_LRG";

	case joaat("component_at_scope_max"): return "WCT_SCOPE_MAX";

	case joaat("component_at_pi_supp"): return "WCT_SUPP";

	case joaat("component_at_ar_supp"): return "WCT_SUPP";

	case joaat("component_at_ar_supp_02"): return "WCT_SUPP";

	case joaat("component_at_sr_supp"): return "WCT_SUPP";

	case joaat("component_pistol_clip_01"): return "WCT_CLIP1";

	case joaat("component_pistol_clip_02"): return "WCT_CLIP2";

	case joaat("component_combatpistol_clip_01"): return "WCT_CLIP1";

	case joaat("component_combatpistol_clip_02"): return "WCT_CLIP2";

	case joaat("component_appistol_clip_01"): return "WCT_CLIP1";

	case joaat("component_appistol_clip_02"): return "WCT_CLIP2";

	case joaat("component_microsmg_clip_01"): return "WCT_CLIP1";

	case joaat("component_microsmg_clip_02"): return "WCT_CLIP2";

	case joaat("component_smg_clip_01"): return "WCT_CLIP1";

	case joaat("component_smg_clip_02"): return "WCT_CLIP2";

	case joaat("component_assaultrifle_clip_01"): return "WCT_CLIP1";

	case joaat("component_assaultrifle_clip_02"): return "WCT_CLIP2";

	case joaat("component_carbinerifle_clip_01"): return "WCT_CLIP1";

	case joaat("component_carbinerifle_clip_02"): return "WCT_CLIP2";

	case joaat("component_advancedrifle_clip_01"): return "WCT_CLIP1";

	case joaat("component_advancedrifle_clip_02"): return "WCT_CLIP2";

	case joaat("component_mg_clip_01"): return "WCT_CLIP1";

	case joaat("component_mg_clip_02"): return "WCT_CLIP2";

	case joaat("component_combatmg_clip_01"): return "WCT_CLIP1";

	case joaat("component_combatmg_clip_02"): return "WCT_CLIP2";

	case joaat("component_assaultshotgun_clip_01"): return "WCT_CLIP1";

	case joaat("component_assaultshotgun_clip_02"): return "WCT_CLIP2";

	case joaat("component_sniperrifle_clip_01"): return "WCT_CLIP1";

	case joaat("component_heavysniper_clip_01"): return "WCT_CLIP1";

	case joaat("component_minigun_clip_01"): return "WCT_CLIP2";

	case joaat("component_assaultsmg_clip_01"): return "WCT_CLIP1";

	case joaat("component_assaultsmg_clip_02"): return "WCT_CLIP2";

	case joaat("component_pistol50_clip_01"): return "WCT_CLIP1";

	case joaat("component_pistol50_clip_02"): return "WCT_CLIP2";

	case 195735895: return "WCT_CLIP1";

	case 1525977990: return "WCT_CLIP1";

	case 1824470811: return "WCT_CLIP2";

	case -890514874: return "WCT_CLIP1";

	case -507117574: return "WCT_CLIP2";

	case -124428919: return "WCT_CLIP1";

	case 1048471894: return "WCT_CLIP2";

	case joaat("component_snspistol_clip_01"): return "WCT_CLIP1";

	case joaat("component_snspistol_clip_02"): return "WCT_CLIP2";

	case joaat("component_vintagepistol_clip_01"): return "WCT_CLIP1";

	case joaat("component_vintagepistol_clip_02"): return "WCT_CLIP2";

	case joaat("component_heavyshotgun_clip_01"): return "WCT_CLIP1";

	case joaat("component_marksmanrifle_clip_01"): return "WCT_CLIP1";

	case joaat("component_heavyshotgun_clip_02"): return "WCT_CLIP2";

	case joaat("component_marksmanrifle_clip_02"): return "WCT_CLIP2";

	case joaat("component_at_scope_large_fixed_zoom"): return "WCT_SCOPE_LRG";

	case joaat("component_at_pi_supp_02"): return "WCT_SUPP";

	case joaat("component_combatpdw_clip_01"): return "WCT_CLIP1";

	case joaat("component_combatpdw_clip_02"): return "WCT_CLIP2";

	case joaat("component_marksmanpistol_clip_01"): return "WCT_CLIP1";

	case joaat("component_machinepistol_clip_01"): return "WCT_CLIP1";

	case joaat("component_machinepistol_clip_02"): return "WCT_CLIP2";

	case joaat("component_assaultrifle_varmod_luxe"): return "WCT_VAR_GOLD";

	case joaat("component_advancedrifle_varmod_luxe"): return "WCT_VAR_METAL";

	case joaat("component_carbinerifle_varmod_luxe"): return "WCT_VAR_GOLD";

	case joaat("component_appistol_varmod_luxe"): return "WCT_VAR_METAL";

	case joaat("component_pistol_varmod_luxe"): return "WCT_VAR_GOLD";

	case joaat("component_pistol50_varmod_luxe"): return "WCT_VAR_SIL";

	case joaat("component_heavypistol_varmod_luxe"): return "WCT_VAR_WOOD";

	case joaat("component_smg_varmod_luxe"): return "WCT_VAR_GOLD";

	case joaat("component_microsmg_varmod_luxe"): return "WCT_VAR_GOLD";

	case joaat("component_sawnoffshotgun_varmod_luxe"): return "WCT_VAR_METAL";

	case joaat("component_sniperrifle_varmod_luxe"): return "WCT_VAR_WOOD";

	case joaat("component_marksmanrifle_varmod_luxe"): return "WCT_VAR_GOLD";

	case joaat("component_assaultsmg_varmod_lowrider"): return "WCT_VAR_GOLD";

	case joaat("component_bullpuprifle_varmod_low"): return "WCT_VAR_METAL";

	case joaat("component_combatmg_varmod_lowrider"): return "WCT_VAR_ETCHM";

	case joaat("component_combatpistol_varmod_lowrider"): return "WCT_VAR_GOLD";

	case joaat("component_mg_varmod_lowrider"): return "WCT_VAR_GOLD";

	case joaat("component_pumpshotgun_varmod_lowrider"): return "WCT_VAR_GOLD";

	case joaat("component_snspistol_varmod_lowrider"): return "WCT_VAR_WOOD";

	case joaat("component_specialcarbine_varmod_lowrider"): return "WCT_VAR_ETCHM";

	case joaat("component_switchblade_varmod_base"): return "WCT_SB_BASE";

	case joaat("component_switchblade_varmod_var1"): return "WCT_SB_VAR1";

	case joaat("component_switchblade_varmod_var2"): return "WCT_SB_VAR2";

	case joaat("component_revolver_clip_01"): return "WCT_CLIP1";

	case joaat("component_revolver_varmod_boss"): return "WCT_REV_VARB";

	case joaat("component_revolver_varmod_goon"): return "WCT_REV_VARG";

	case joaat("component_smg_clip_03"): return "WCT_CLIP_DRM";

	case joaat("component_carbinerifle_clip_03"): return "WCT_CLIP_BOX";

	case joaat("component_assaultrifle_clip_03"): return "WCT_CLIP_DRM";

	case joaat("component_heavyshotgun_clip_03"): return "WCT_CLIP_DRM";

	default:
		if (iParam1 != 0) {
			iVar0 = func_72(iParam1, &uVar2);
			if (iVar0 != -1) {
				iVar1 = 0;
				while (iVar1 < dlc1::get_num_dlc_weapon_components(iVar0)) {
					if (dlc1::get_dlc_weapon_component_data(iVar0, iVar1, &Var41)) {
						if (Var41.f_3 == iParam0) {
							return func_64(&Var41.f_6);
						}
					}
					iVar1++;
				}
			}
		}
		break;
	}
	return "WCT_INVALID";
}

// Position - 0x5BF4
var func_64(var uParam0) { return uParam0; }

// Position - 0x5BFE
int func_65() {
	if (network::network_is_game_in_progress() && func_66()) {
		return 1;
	}
	return 0;
}

// Position - 0x5C1B
int func_66() {
	if (gameplay::is_pc_version()) {
		return 1;
	}
	return 0;
}

// Position - 0x5C2F
int func_67(int iParam0) {
	if (!network::network_is_game_in_progress()) {
		switch (iParam0) {
		case joaat("component_assaultrifle_clip_03"):
		case joaat("component_carbinerifle_clip_03"):
		case joaat("component_combatpdw_clip_03"):
		case joaat("component_compactrifle_clip_03"):
		case joaat("component_heavyshotgun_clip_03"):
		case joaat("component_machinepistol_clip_03"):
		case joaat("component_smg_clip_03"):
		case joaat("component_specialcarbine_clip_03"): return 0;
		}

	default:
	}
	return 1;
}

// Position - 0x5C7B
int func_68() {
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

// Position - 0x5D4C
int func_69() {
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

// Position - 0x5EA0
int func_70() {
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
				return 1;
			}
		}
	}
	if (Global_139179 == 2) {
		return 1;
	}
	else if (Global_139179 == 3) {
		return 0;
	}
	if (gameplay::_0x5AA3BEFA29F03AD4()) {
		if (gameplay::is_bit_set(gameplay::get_profile_setting(866), 0)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x5F5B
void func_71(var *uParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_5 = iParam3;
	uParam0->f_1 = iParam4;
}

// Position - 0x5F7A
int func_72(int iParam0, var *uParam1) {
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

// Position - 0x5FB5
void func_73(int iParam0, var *uParam1) {
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
			iVar3 = func_76(iVar0);
			if (iVar3 != 0) {
				vVar4.x = weapon::get_ped_weapontype_in_slot(iParam0, func_76(iVar0));
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
					iVar2 = func_75(vVar4.x, iVar1);
					while (iVar2 != 0) {
						if (weapon::has_ped_got_weapon_component(iParam0, vVar4.x, iVar2)) {
							gameplay::set_bit(&vVar4.f_2, iVar1);
						}
						iVar1++;
						iVar2 = func_75(vVar4.x, iVar1);
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
			if (dlc1::get_dlc_weapon_data(iVar7, &Var9) && !func_74(Var9.f_1) && iVar70 < 50) {
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

// Position - 0x6219
int func_74(int iParam0) {
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

// Position - 0x6387
int func_75(int iParam0, int iParam1) {
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
			iVar1 = func_72(iParam0, &uVar2);
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

// Position - 0x6E73
int func_76(int iParam0) {
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

// Position - 0x70E7
float func_77(var *uParam0) {
	if (func_80(uParam0)) {
		if (func_79(uParam0)) {
			return uParam0->f_2;
		}
		else {
			return func_78(gameplay::is_bit_set(*uParam0, 4)) - uParam0->f_1;
		}
	}
	return uParam0->f_1;
}

// Position - 0x7126
float func_78(bool bParam0) {
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

// Position - 0x717E
bool func_79(int *iParam0) { return gameplay::is_bit_set(*iParam0, 2); }

// Position - 0x718E
bool func_80(int *iParam0) { return gameplay::is_bit_set(*iParam0, 1); }

// Position - 0x719E
bool func_81() {
	if (Global_1312446) {
		return true;
	}
	if (func_83()) {
		return true;
	}
	if (func_82()) {
		return true;
	}
	return func_4(124, -1);
}

// Position - 0x71CE
bool func_82() { return Global_1315221; }

// Position - 0x71DA
bool func_83() { return Global_1315223; }

// Position - 0x71E6
void func_84() {
	int iVar0;

	iVar0 = 1;
	while (iVar0 <= 49) {
		if (!player::has_achievement_been_passed(iVar0)) {
			if (socialclub::_0x418DC16FAE452C1C(iVar0)) {
				func_112(iVar0, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 51;
	while (iVar0 <= 59) {
		if (!player::has_achievement_been_passed(iVar0)) {
			if (socialclub::_0x418DC16FAE452C1C(iVar0)) {
				func_112(iVar0, 1);
			}
		}
		iVar0++;
	}
}

// Position - 0x724B
bool func_85(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (iParam1 == -1) {
		iParam1 = func_6();
	}
	iVar0 = func_86(iParam1);
	iVar1 = gameplay::get_profile_setting(iVar0);
	return gameplay::is_bit_set(iVar1, iParam0);
}

// Position - 0x7277
int func_86(int iParam0) {
	int iVar0;

	if (iParam0 == -1) {
		iParam0 = func_6();
	}
	switch (iParam0) {
	case 0: iVar0 = 914; break;

	case 1: iVar0 = 915; break;

	case 2: iVar0 = 916; break;

	case 3: iVar0 = 917; break;

	case 4: iVar0 = 918; break;
	}
	return iVar0;
}

// Position - 0x72DA
bool func_87() {
	if (func_89() && func_88(0)) {
		return true;
	}
	return false;
}

// Position - 0x72F8
var func_88(int iParam0) { return Global_1312373[iParam0]; }

// Position - 0x7308
var func_89() { return func_88(func_6() + 1); }

// Position - 0x731A
bool func_90(var *uParam0) { return uParam0->f_71 == 1; }

// Position - 0x7328
void func_91(var *uParam0) {
	float fVar0;

	fVar0 = Global_2595549;
	uParam0->f_72 += gameplay::get_frame_time();
	if (!func_90(uParam0)) {
		return;
	}
	if (func_98(uParam0) < 0f) {
		func_97(uParam0, 0);
		return;
	}
	if (func_145(14)) {
		fVar0 = 10f;
	}
	if (func_98(uParam0) < fVar0) {
		return;
	}
	if (func_96(uParam0, 0)) {
		return;
	}
	if (func_94((*uParam0)[0])) {
		func_93(uParam0);
		func_92(uParam0);
		func_97(uParam0, 0);
	}
}

// Position - 0x73B0
void func_92(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if (func_96(uParam0, iVar0)) {
			iVar0 = *uParam0 + 100;
		}
		iVar0++;
	}
}

// Position - 0x73E1
void func_93(var *uParam0) {
	int iVar0;

	iVar0 = 1;
	if (func_96(uParam0, 0)) {
		return;
	}
	while (iVar0 < *uParam0) {
		(*uParam0)[iVar0 - 1] = (*uParam0)[iVar0];
		iVar0++;
	}
}

// Position - 0x7418
bool func_94(int iParam0) {
	if (player::has_achievement_been_passed(iParam0)) {
		return false;
	}
	if (func_145(14) && !func_95(iParam0)) {
		return false;
	}
	if (!player::give_achievement_to_player(iParam0)) {
		return false;
	}
	if (player::has_achievement_been_passed(iParam0)) {
		return true;
	}
	return false;
}

// Position - 0x7462
int func_95(int iParam0) {
	switch (iParam0) {
	case 60:
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
	case 66:
	case 67:
	case 68:
	case 69: return 1;

	default:
	}
	return 0;
}

// Position - 0x74B2
bool func_96(var *uParam0, int iParam1) { return (*uParam0)[iParam1] == 70; }

// Position - 0x74C3
void func_97(var *uParam0, float fParam1) {
	if (fParam1 == 0f) {
		uParam0->f_72 = 0f;
	}
	else {
		uParam0->f_72 = fParam1;
	}
}

// Position - 0x74E0
float func_98(var *uParam0) { return uParam0->f_72; }

// Position - 0x74EC
int func_99() {
	float fVar0;

	if (network::network_is_game_in_progress() || Global_69702) {
		return 0;
	}
	if (player::is_player_playing(player::player_id())) {
		if (player::is_player_control_on(player::player_id())) {
			fVar0 = ui::_0xE0130B41D3CF4574();
			if (fVar0 > 0.01f && gameplay::is_pc_version()) {
				func_118(14, system::floor(fVar0 * 100f));
			}
			if (fVar0 >= 0.975f) {
				func_112(14, 1);
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x7564
bool func_100(int iParam0) {
	if (iParam0 == 94 || iParam0 == -1) {
		return false;
	}
	return Global_101700.f_8044.f_330[iParam0 /*6*/];
}

// Position - 0x7590
void func_101(int iParam0) {
	if (Global_69702) {
		if (iParam0) {
			func_10(iParam0);
		}
		func_3(iParam0);
		func_15(iParam0);
		if (iParam0) {
		}
	}
	func_111(iParam0);
	func_104(iParam0);
	func_103();
	func_102();
	if (iParam0) {
		if (func_80(&iLocal_60)) {
		}
	}
}

// Position - 0x75E4
int func_102() {
	int iVar0;
	int iVar1;

	if (player::has_achievement_been_passed(50)) {
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 += stats::stat_get_number_of_days(joaat("first_person_cam_time")) * 24;
	iVar0 += stats::stat_get_number_of_hours(joaat("first_person_cam_time"));
	iVar1 += stats::stat_get_number_of_days(joaat("mp_first_person_cam_time")) * 24;
	iVar1 += stats::stat_get_number_of_hours(joaat("mp_first_person_cam_time"));
	if (iVar0 + iVar1 >= 15) {
		func_112(50, 1);
		return 1;
	}
	return 0;
}

// Position - 0x7652
int func_103() {
	int iVar0;

	if (player::has_achievement_been_passed(22)) {
		return 0;
	}
	iVar0 = gameplay::_0x996DD1E1E02F1008();
	if (iVar0 > 0) {
		if (Global_25451 < iVar0) {
			if (Global_25451 >= 0) {
				func_118(22, iVar0);
			}
			Global_25451 = iVar0;
		}
	}
	if (gameplay::_0x996DD1E1E02F1008() >= 50) {
		func_112(22, 1);
		return 1;
	}
	return 0;
}

// Position - 0x76A9
int func_104(bool bParam0) {
	int iVar0[6];
	int iVar7;
	int iVar8;
	int iVar9;

	if (player::has_achievement_been_passed(17)) {
		return 0;
	}
	iVar0[0] = func_110();
	iVar0[1] = func_109();
	iVar0[2] = func_108();
	iVar0[3] = func_107();
	iVar0[4] = func_106();
	iVar0[5] = func_105();
	iVar7 = 0;
	iVar8 = 0;
	while (iVar8 < 6) {
		if (iVar0[iVar8]) {
			iVar7++;
		}
		iVar8++;
	}
	stats::stat_get_int(joaat("num_discipline_gold_earned"), &iVar9, -1);
	if (iVar7 > iVar9 && iVar7 > 0) {
		stats::stat_set_int(joaat("num_discipline_gold_earned"), iVar7, 1);
		func_118(17, iVar7);
	}
	if (bParam0) {
	}
	if (!iVar0[0]) {
		if (bParam0) {
		}
		return 0;
	}
	if (!iVar0[1]) {
		if (bParam0) {
		}
		return 0;
	}
	if (!iVar0[2]) {
		if (bParam0) {
		}
		return 0;
	}
	if (!iVar0[3]) {
		if (bParam0) {
		}
		return 0;
	}
	if (!iVar0[4]) {
		if (bParam0) {
		}
		return 0;
	}
	if (!iVar0[5]) {
		if (bParam0) {
		}
		return 0;
	}
	func_112(17, 1);
	return 1;
}

// Position - 0x77CB
int func_105() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12) {
		if (Global_101700.f_1720[0 /*121*/][iVar0 /*10*/].f_8 == 3) {
			return 1;
		}
		else if (Global_101700.f_1720[1 /*121*/][iVar0 /*10*/].f_8 == 3) {
			return 1;
		}
		else if (Global_101700.f_1720[2 /*121*/][iVar0 /*10*/].f_8 == 3) {
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x7838
int func_106() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 22) {
		if (Global_101700.f_18106[0 /*271*/].f_3[iVar0 /*12*/].f_3 == 3) {
			return 1;
		}
		else if (Global_101700.f_18106[1 /*271*/].f_3[iVar0 /*12*/].f_3 == 3) {
			return 1;
		}
		else if (Global_101700.f_18106[2 /*271*/].f_3[iVar0 /*12*/].f_3 == 3) {
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x78AE
int func_107() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4) {
		if (gameplay::is_bit_set(Global_101700.f_23935.f_1, iVar0)) {
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x78E2
int func_108() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5) {
		if (gameplay::is_bit_set(Global_101700.f_23938.f_2, iVar0)) {
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x7916
int func_109() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7) {
		if (Global_101700.f_17975.f_19[iVar0] == 1) {
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x7949
int func_110() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3) {
		if (Global_101700.f_18970[iVar0] == 1) {
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x797A
int func_111(bool bParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (player::has_achievement_been_passed(27)) {
		return 0;
	}
	if (stats::stat_get_int(joaat("sp0_money_total_spent"), &iVar0, -1)) {
		iVar1 += iVar0;
	}
	if (stats::stat_get_int(joaat("sp1_money_total_spent"), &iVar0, -1)) {
		iVar1 += iVar0;
	}
	if (stats::stat_get_int(joaat("sp2_money_total_spent"), &iVar0, -1)) {
		iVar1 += iVar0;
	}
	if (bParam0) {
	}
	iVar2 = 0;
	stats::stat_get_int(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && iVar2 / 2000000 != iVar1 / 2000000) {
		stats::stat_set_int(joaat("num_cash_spent"), iVar1, 1);
		func_118(27, iVar1);
	}
	if (iVar1 < 200000000) {
		return 0;
	}
	func_112(27, 1);
	return 1;
}

// Position - 0x7A31
int func_112(int iParam0, int iParam1) {
	if (iParam0 >= 70) {
		return 0;
	}
	return func_113(iParam0, iParam1);
}

// Position - 0x7A4C
int func_113(int iParam0, int iParam1) {
	if (func_145(14) && !func_95(iParam0)) {
		return 0;
	}
	if (player::has_achievement_been_passed(iParam0) && iParam1 == 1) {
		return 0;
	}
	if (Global_25436 != 0 && !Global_69702) {
		return 0;
	}
	if (func_90(&Global_2595550)) {
		if (func_116(&Global_2595550, iParam0)) {
			return 0;
		}
		if (func_114(&Global_2595550, iParam0)) {
			return 1;
		}
	}
	else {
		if (!player::give_achievement_to_player(iParam0)) {
			return 0;
		}
		if (player::has_achievement_been_passed(iParam0)) {
			return 1;
		}
		return 0;
	}
	return 0;
}

// Position - 0x7AE9
bool func_114(var *uParam0, int iParam1) {
	int iVar0;
	var *uVar1[70];

	if (player::has_achievement_been_passed(iParam1)) {
		return false;
	}
	if (func_145(14) && !func_95(iParam1)) {
		return false;
	}
	if (func_116(uParam0, iParam1)) {
		return false;
	}
	if (func_98(uParam0) < 0f) {
		func_97(uParam0, 0);
	}
	func_150(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1) {
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_115(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

// Position - 0x7B9A
int func_115(var *uParam0, int iParam1) {
	int iVar0;

	if (player::has_achievement_been_passed(iParam1)) {
		return 0;
	}
	if (func_145(14) && !func_95(iParam1)) {
		return 0;
	}
	if (func_116(uParam0, iParam1)) {
		return 0;
	}
	if (func_98(uParam0) < 0f) {
		func_97(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if (func_96(uParam0, iVar0)) {
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x7C15
bool func_116(var *uParam0, int iParam1) { return func_117(uParam0, iParam1) != -1; }

// Position - 0x7C27
int func_117(var *uParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if ((*uParam0)[iVar0] == iParam1) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x7C54
int func_118(int iParam0, int iParam1) {
	int iVar0;

	if (iParam0 < 0) {
		return 0;
	}
	if (iParam0 > 70) {
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100) {
		return 0;
	}
	iVar0 = player::_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0) {
		return player::_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

// Position - 0x7CA5
int func_119(int iParam0) {
	int iVar0;

	iVar0 = func_132(iParam0) + func_120(iParam0);
	if (iParam0) {
	}
	return iVar0;
}

// Position - 0x7CC3
int func_120(bool bParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	iVar3 = 0;
	iVar4 = 0;
	if (bParam0) {
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_17533) {
		if (Global_101700.f_17533[iVar0 /*6*/].f_3 != -1 && func_130(iVar0, 7)) {
			iVar3 = 0;
			iVar4 = 0;
			iVar5 = 0;
			while (iVar5 < func_128(iVar0, 7)) {
				iVar7 = func_126(iVar0, 7, iVar5);
				if (!MissionObjectives[iVar7 /*13*/].f_7) {
					if (func_123(iVar7) == 1) {
						iVar4++;
					}
					iVar3++;
				}
				iVar5++;
			}
			fVar6 = func_122(iVar4, iVar3, 0);
			iVar2 = func_121(fVar6);
			if (iVar0 >= 52 && iVar0 <= 56) {
				if (bParam0) {
				}
				iVar2 = Global_101700.f_2084[iVar0 - 52 /*2*/];
				fVar6 = 0f;
			}
			if (fVar6 >= 100f || iVar2 == 3) {
				iVar1++;
			}
		}
		iVar0++;
	}
	if (bParam0) {
	}
	return iVar1;
}

// Position - 0x7DB7
int func_121(float fParam0) {
	if (fParam0 == 0f) {
		return 0;
	}
	if (fParam0 == 100f) {
		return 3;
	}
	else if (fParam0 > 50f) {
		return 2;
	}
	return 1;
}

// Position - 0x7DEC
float func_122(int iParam0, int iParam1, int iParam2) {
	float fVar0;
	float fVar1;

	if (iParam2) {
		return 0f;
	}
	if (iParam0 == iParam1) {
		return 100f;
	}
	fVar0 = system::to_float(iParam0) / system::to_float(iParam1);
	fVar1 = 50f * fVar0 + 50f;
	fVar1 = system::to_float(system::ceil(fVar1));
	if (fVar1 > 100f) {
		fVar1 = 100f;
	}
	return fVar1;
}

// Position - 0x7E4B
int func_123(int iParam0) {
	if (func_124(iParam0, func_125(MissionObjectives[iParam0 /*13*/].f_4))) {
		return 1;
	}
	return 0;
}

// Position - 0x7E6E
bool func_124(int iParam0, int iParam1) {
	if (iParam1 < 0) {
		return false;
	}
	switch (MissionObjectives[iParam0 /*13*/]) {
	case 1:
	case 2:
	case 4:
	case 5:
	case 17:
		if (iParam1 < 1) {
			return false;
		}
		break;
	}
	if (iParam1 == 2147483647) {
		return false;
	}
	if (iParam0 == 881 || iParam0 == 889 || iParam0 == 897)
		&&Global_101700.f_23863[4 /*4*/] == func_56() { MissionObjectives[iParam0 /*13*/].f_2 = 0; }
	if (MissionObjectives[iParam0 /*13*/].f_3) {
		if (iParam1 < MissionObjectives[iParam0 /*13*/].f_2) {
			return true;
		}
	}
	else if (iParam1 >= MissionObjectives[iParam0 /*13*/].f_2) {
		return true;
	}
	return false;
}

// Position - 0x7F38
int func_125(int iParam0) {
	int iVar0;

	if (iParam0 == 0) {
		return -1;
	}
	if (stats::stat_get_int(iParam0, &iVar0, -1)) {
		return iVar0 - 1;
	}
	return -1;
}

// Position - 0x7F61
int func_126(int iParam0, int iParam1, int iParam2) {
	switch (iParam1) {
	case 1: return Global_82612[iParam0 /*34*/].f_17[iParam2];

	case 7: return func_127(iParam0, iParam2);

	default: break;
	}
	return 914;
}

// Position - 0x7FA4
int func_127(int iParam0, int iParam1) {
	switch (iParam0) {
	case 2:
		switch (iParam1) {
		case 0: return 741;

		case 1: return 742;

		default:
		}
		return -1;

	case 3:
		switch (iParam1) {
		case 0: return 743;

		case 1: return 744;

		default:
		}
		return -1;

	case 5:
		switch (iParam1) {
		case 0: return 745;

		case 1: return 746;

		default:
		}
		return -1;

	case 6:
		switch (iParam1) {
		case 0: return 747;

		case 1: return 748;

		default:
		}
		return -1;

	case 8:
		switch (iParam1) {
		case 0: return 749;

		default:
		}
		return -1;

	case 12:
		switch (iParam1) {
		case 0: return 750;

		default:
		}
		return -1;

	case 14:
		switch (iParam1) {
		case 0: return 751;

		case 1: return 752;

		default:
		}
		return -1;

	case 16:
		switch (iParam1) {
		case 0: return 753;

		case 1: return 754;

		default:
		}
		return -1;

	case 17:
		switch (iParam1) {
		case 0: return 755;

		case 1: return 756;

		case 2: return 757;

		default:
		}
		return -1;

	case 18:
		switch (iParam1) {
		case 0: return 758;

		case 1: return 759;

		default:
		}
		return -1;

	case 19:
		switch (iParam1) {
		case 0: return 760;

		case 1: return 761;

		default:
		}
		return -1;

	case 20:
		switch (iParam1) {
		case 0: return 762;

		default:
		}
		return -1;

	case 21:
		switch (iParam1) {
		case 0: return 763;

		default:
		}
		return -1;

	case 22:
		switch (iParam1) {
		case 0: return 764;

		case 1: return 765;

		default:
		}
		return -1;

	case 23:
		switch (iParam1) {
		case 0: return 766;

		default:
		}
		return -1;

	case 25:
		switch (iParam1) {
		case 0: return 767;

		case 1: return 768;

		case 2: return 769;

		default:
		}
		return -1;

	case 26:
		switch (iParam1) {
		case 0: return 770;

		case 1: return 771;

		default:
		}
		return -1;

	case 28:
		switch (iParam1) {
		case 0: return 772;

		case 1: return 773;

		default:
		}
		return -1;

	case 29:
		switch (iParam1) {
		case 0: return 774;

		case 1: return 775;

		default:
		}
		return -1;

	case 30:
		switch (iParam1) {
		case 0: return 776;

		case 1: return 777;

		default:
		}
		return -1;

	case 32:
		switch (iParam1) {
		case 0: return 778;

		case 1: return 779;

		default:
		}
		return -1;

	default:
	}
	switch (iParam0) {
	case 33:
		switch (iParam1) {
		case 0: return 780;

		case 1: return 781;

		case 2: return 782;

		default:
		}
		return -1;

	case 34:
		switch (iParam1) {
		case 0: return 783;

		case 1: return 784;

		default:
		}
		return -1;

	case 38:
		switch (iParam1) {
		case 0: return 785;

		case 1: return 786;

		default:
		}
		return -1;

	case 39:
		switch (iParam1) {
		case 0: return 787;

		case 1: return 788;

		default:
		}
		return -1;

	case 40:
		switch (iParam1) {
		case 0: return 789;

		default:
		}
		return -1;

	case 41:
		switch (iParam1) {
		case 0: return 790;

		case 1: return 791;

		case 2: return 792;

		default:
		}
		return -1;

	case 42:
		switch (iParam1) {
		case 0: return 793;

		case 1: return 794;

		case 2: return 795;

		default:
		}
		return -1;

	case 43:
		switch (iParam1) {
		case 0: return 796;

		case 1: return 797;

		default:
		}
		return -1;

	case 46:
		switch (iParam1) {
		case 0: return 798;

		case 1: return 799;

		default:
		}
		return -1;

	case 47:
		switch (iParam1) {
		case 0: return 800;

		case 1: return 801;

		default:
		}
		return -1;

	case 49:
		switch (iParam1) {
		case 0: return 802;

		case 1: return 803;

		default:
		}
		return -1;

	case 50:
		switch (iParam1) {
		case 0: return 804;

		case 1: return 805;

		default:
		}
		return -1;

	case 51:
		switch (iParam1) {
		case 0: return 806;

		default:
		}
		return -1;

	case 57:
		switch (iParam1) {
		case 0: return 807;

		case 1: return 808;

		case 2: return 809;

		default:
		}
		return -1;

	case 58:
		switch (iParam1) {
		case 0: return 828;

		case 1: return 829;

		case 2: return 830;

		default:
		}
		return -1;

	case 59:
		switch (iParam1) {
		case 0: return 831;

		case 1: return 832;

		case 2: return 833;

		default:
		}
		return -1;

	case 60:
		switch (iParam1) {
		case 0: return 834;

		case 1: return 835;

		case 2: return 836;

		default:
		}
		return -1;

	case 61:
		switch (iParam1) {
		case 0: return 837;

		case 1: return 838;

		case 2: return 839;

		default:
		}
		return -1;

	case 62:
		switch (iParam1) {
		case 0: return 840;

		case 1: return 841;

		case 2: return 842;

		default:
		}
		return -1;

	case 24:
		switch (iParam1) {
		case 0: return 843;

		case 1: return 844;

		case 2: return 845;

		default:
		}
		return -1;

	default:
	}
	return -1;
}

// Position - 0x86DD
int func_128(int iParam0, int iParam1) {
	switch (iParam1) {
	case 1: return Global_82612[iParam0 /*34*/].f_16;

	case 7: return func_129(iParam0);

	default: break;
	}
	return 0;
}

// Position - 0x8718
int func_129(int iParam0) {
	switch (iParam0) {
	case 2: return 2;

	case 3: return 2;

	case 5: return 2;

	case 6: return 2;

	case 8: return 1;

	case 12: return 1;

	case 14: return 2;

	case 16: return 2;

	case 17: return 3;

	case 18: return 2;

	case 19: return 2;

	case 20: return 1;

	case 21: return 1;

	case 22: return 2;

	case 23: return 1;

	case 25: return 3;

	case 26: return 2;

	case 28: return 2;

	case 29: return 2;

	case 30: return 2;

	case 32: return 2;

	default:
	}
	switch (iParam0) {
	case 33: return 3;

	case 34: return 2;

	case 38: return 2;

	case 39: return 2;

	case 40: return 1;

	case 41: return 3;

	case 42: return 3;

	case 43: return 2;

	case 46: return 2;

	case 47: return 2;

	case 49: return 2;

	case 50: return 2;

	case 51: return 1;

	case 57: return 3;

	case 58: return 3;

	case 59: return 3;

	case 60: return 3;

	case 61: return 3;

	case 62: return 3;

	case 24: return 3;

	default:
	}
	return 0;
}

// Position - 0x88C9
int func_130(int iParam0, int iParam1) {
	switch (iParam1) {
	case 1: return !gameplay::is_bit_set(Global_82612[iParam0 /*34*/].f_15, 5);

	case 7: return func_131(iParam0);

	default: break;
	}
	return 0;
}

// Position - 0x890A
int func_131(int iParam0) {
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

// Position - 0x8C50
int func_132(bool bParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	int iVar8;

	iVar3 = 0;
	iVar4 = 0;
	if (bParam0) {
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_8044.f_330) {
		if (Global_101700.f_8044.f_330[iVar0 /*6*/].f_3 != -1 && func_130(iVar0, 1)) {
			iVar3 = 0;
			iVar4 = 0;
			iVar8 = -1;
			iVar5 = 0;
			while (iVar5 < func_128(iVar0, 1)) {
				iVar7 = func_126(iVar0, 1, iVar5);
				if (!MissionObjectives[iVar7 /*13*/].f_7) {
					if (func_123(iVar7) == 1) {
						iVar4++;
					}
					switch (iVar7) {
					case 42:
					case 55:
					case 85:
					case 70:
					case 101:
						iVar8 = func_133(iVar7);
						if (iVar8 >= 2147483647) {
							iVar8 = 1;
						}
						break;
					}
					iVar3++;
				}
				iVar5++;
			}
			fVar6 = func_122(iVar4, iVar3, 0);
			iVar2 = func_121(fVar6);
			if (iVar8 > -1) {
				iVar2 = iVar8;
			}
			if (fVar6 >= 100f || iVar2 == 3) {
				iVar1++;
			}
		}
		iVar0++;
	}
	if (bParam0) {
	}
	return iVar1;
}

// Position - 0x8D6A
int func_133(int iParam0) {
	int iVar0;

	iVar0 = func_125(MissionObjectives[iParam0 /*13*/].f_4);
	if (iVar0 > -2) {
		return iVar0;
	}
	return 0;
}

// Position - 0x8D8F
void func_134() {
	int iVar0;
	int iVar1;

	entity::is_entity_dead(player::player_ped_id(), 0);
	if (!entity::is_entity_in_water(player::player_ped_id())) {
		return;
	}
	if (entity::is_entity_playing_anim(player::player_ped_id(), "creatures@shark@move", "attack_player", 3)) {
		func_112(25, 1);
		return;
	}
	if (entity::is_entity_dead(player::player_ped_id(), 0)) {
		iVar0 = ped::get_ped_source_of_death(player::player_ped_id());
		if (entity::is_entity_a_ped(iVar0)) {
			iVar1 = entity::get_ped_index_from_entity_index(iVar0);
			if (func_135(iVar1)) {
				if (entity::get_entity_model(iVar1) == joaat("a_c_sharktiger")) {
					func_112(25, 1);
					return;
				}
			}
		}
	}
}

// Position - 0x8E18
bool func_135(int iParam0) {
	if (!entity::does_entity_exist(iParam0)) {
		return false;
	}
	return !entity::is_entity_dead(iParam0, 0);
}

// Position - 0x8E36
void func_136() {
	switch (iLocal_57) {
	case 0:
		fLocal_65 = 0f;
		if (!entity::does_entity_exist(player::player_ped_id())) {
			return;
		}
		if (entity::is_entity_dead(player::player_ped_id(), 0)) {
			return;
		}
		if (player::get_player_wanted_level(player::player_id()) >= 3 && gameplay::get_mission_flag() == 0) {
			if (func_141() == 2) {
				func_147(&iLocal_60);
				iLocal_57++;
			}
		}
		break;

	case 1:
		if (func_140() || streaming::is_player_switch_in_progress()) {
			return;
		}
		if (player::get_player_wanted_level(player::player_id()) < 3) {
			func_139(&iLocal_60);
			iLocal_57 = 0;
			return;
		}
		if (gameplay::get_mission_flag() == 1) {
			func_139(&iLocal_60);
			iLocal_57 = 0;
			return;
		}
		if (func_141() < 2) {
			func_139(&iLocal_60);
			iLocal_57 = 0;
			return;
		}
		if (entity::is_entity_dead(player::player_ped_id(), 0)) {
			func_139(&iLocal_60);
			iLocal_57 = 0;
			return;
		}
		fLocal_65 = func_138(&iLocal_60);
		if (fLocal_65 >= 180f) {
			func_112(24, 1);
			func_137(&iLocal_60);
			iLocal_57++;
		}
		break;

	case 2: iLocal_57++; break;
	}
}

// Position - 0x8F46
void func_137(int *iParam0) {
	if (func_80(iParam0)) {
		if (!func_79(iParam0)) {
			iParam0->f_2 = func_78(gameplay::is_bit_set(*iParam0, 4)) - iParam0->f_1;
			gameplay::set_bit(iParam0, 2);
		}
	}
}

// Position - 0x8F80
float func_138(int *iParam0) {
	if (func_80(iParam0)) {
		if (func_79(iParam0)) {
			return iParam0->f_2;
		}
		else {
			return func_78(gameplay::is_bit_set(*iParam0, 4)) - iParam0->f_1;
		}
	}
	return 0f;
}

// Position - 0x8FBC
void func_139(int *iParam0) {
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

// Position - 0x8FD2
int func_140() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0x8FEE
int func_141() {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_143(2);
	if (func_142(iVar1, 0) || gameplay::is_bit_set(Global_87675, 2)) {
		iVar0++;
	}
	iVar1 = func_143(1);
	if (func_142(iVar1, 0) || gameplay::is_bit_set(Global_87675, 1)) {
		iVar0++;
	}
	iVar1 = func_143(0);
	if (func_142(iVar1, 0) || gameplay::is_bit_set(Global_87675, 0)) {
		iVar0++;
	}
	return iVar0;
}

// Position - 0x906D
int func_142(int iParam0, int iParam1) {
	int iVar0;

	return 0;
	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = func_58(iParam0);
		if (iVar0 > 3) {
			return 0;
		}
		if (func_143(iVar0) != iParam0) {
			return 0;
		}
		if (iParam1 == 0) {
			if (iParam0 == player::player_ped_id()) {
				return 0;
			}
		}
		if (gameplay::is_bit_set(Global_87677, iVar0)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x90C9
int func_143(int iParam0) {
	if (iParam0 > 3) {
		return 0;
	}
	if (iParam0 == func_56()) {
		return player::player_ped_id();
	}
	return Global_89302[func_144(iParam0)];
}

// Position - 0x90FA
int func_144(int iParam0) {
	if (iParam0 == 0) {
		return 0;
	}
	else if (iParam0 == 2) {
		return 2;
	}
	else if (iParam0 == 1) {
		return 1;
	}
	else if (iParam0 == 145) {
		return 3;
	}
	return 4;
}

// Position - 0x9135
bool func_145(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x9143
void func_146(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x915A
void func_147(var *uParam0) { func_148(uParam0, 0f); }

// Position - 0x9169
void func_148(int *iParam0, float fParam1) {
	uParam0->f_1 = func_78(gameplay::is_bit_set(*uParam0, 4)) - fParam1;
	gameplay::set_bit(uParam0, 1);
	gameplay::clear_bit(iParam0, 2);
	iParam0->f_2 = 0f;
}

// Position - 0x9197
void func_149(var *uParam0, int iParam1) {
	uParam0->f_71 = iParam1;
	if (uParam0->f_71) {
		func_97(uParam0, 0);
	}
}

// Position - 0x91B3
void func_150(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		func_151(uParam0, iVar0);
		iVar0++;
	}
	func_97(uParam0, Global_2595549 - 0.5f);
}

// Position - 0x91E7
void func_151(var *uParam0, int iParam1) { (*uParam0)[iParam1] = 70; }

// Position - 0x91F7
void func_152() {
	int iVar0;
	int iVar1;

	iVar1 = 70;
	iVar0 = 1;
	while (iVar0 <= iVar1 - 1) {
		if (player::has_achievement_been_passed(iVar0)) {
		}
		iVar0++;
	}
}

// Position - 0x9221
void func_153(int iParam0) {
	if (iParam0 > 0) {
	}
}
