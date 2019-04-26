#pragma region Local Var //{
int iLocal_0 = 0;
var uLocal_1 = 0;
var uLocal_2 = 0;
int iLocal_3 = 0;
int iLocal_4 = 0;
int iLocal_5 = 0;
int iLocal_6 = 0;
int iLocal_7 = 0;
int iLocal_8 = 0;
int iLocal_9 = 0;
int iLocal_10 = 0;
int iLocal_11 = 0;
int iLocal_12 = 0;
var uLocal_13 = 0;
var uLocal_14 = 0;
float fLocal_15 = 0f;
var uLocal_16 = 0;
var uLocal_17 = 0;
int iLocal_18 = 0;
var uLocal_19 = 0;
var uLocal_20 = 0;
char *sLocal_21 = NULL;
float fLocal_22 = 0f;
var uLocal_23 = 0;
var uLocal_24 = 0;
var uLocal_25 = 0;
float fLocal_26 = 0f;
float fLocal_27 = 0f;
var uLocal_28 = 0;
var uLocal_29 = 0;
var uLocal_30 = 0;
float fLocal_31 = 0f;
float fLocal_32 = 0f;
float fLocal_33 = 0f;
var uLocal_34 = 0;
var uLocal_35 = 0;
var uLocal_36 = 0;
var uLocal_37 = 0;
var uLocal_38 = 0;
int iLocal_39 = 0;
int iLocal_40 = 0;
int iLocal_41 = 0;
int iLocal_42 = 0;
vector3 vLocal_43 = {0f, 0f, 0f};
var uLocal_46 = 0;
int iLocal_47 = 0;
int iLocal_48 = 0;
struct<5> Local_49[8];
struct<4> Local_90[8];
vector3 vLocal_123 = {0f, 0f, 0f};
vector3 vLocal_126 = {0f, 0f, 0f};
vector3 vLocal_129 = {0f, 0f, 0f};
vector3 vLocal_132 = {0f, 0f, 0f};
vector3 vLocal_135 = {0f, 0f, 0f};
vector3 vLocal_138 = {0f, 0f, 0f};
vector3 vLocal_141 = {0f, 0f, 0f};
var uLocal_144 = 0;
vector3 vLocal_145 = {0f, 0f, 0f};
float fLocal_148 = 0f;
int iLocal_149 = 0;
var *uLocal_150 = NULL;
var *uLocal_151 = NULL;
var *uLocal_152 = NULL;
var *uLocal_153 = NULL;
var *uLocal_154 = NULL;
int iLocal_155 = 0;
int iLocal_156 = 0;
int iLocal_157 = 0;
int iLocal_158 = 0;
int iLocal_159 = 0;
int iLocal_160 = 0;
int iLocal_161 = 0;
int iLocal_162 = 0;
int iLocal_163 = 0;
float fLocal_164 = 0f;
int iLocal_165 = 0;
int iLocal_166 = 0;
int iLocal_167 = 0;
int iLocal_168 = 0;
int iLocal_169 = 0;
int iLocal_170 = 0;
int iLocal_171 = 0;
int iLocal_172 = 0;
int iLocal_173 = 0;
struct<2> ScriptParam_0 = {
	0, 5
};
var uScriptParam_2 = 0;
var uScriptParam_3 = 0;
var uScriptParam_4 = 0;
var uScriptParam_5 = 0;
var uScriptParam_6 = 0;
var uScriptParam_7 = 0;
var uScriptParam_8 = 0;
var uScriptParam_9 = 0;
var uScriptParam_10 = 0;
var uScriptParam_11 = 0;
var uScriptParam_12 = 0;
var uScriptParam_13 = 0;
var uScriptParam_14 = 0;
var uScriptParam_15 = 0;
var uScriptParam_16 = 0;
var uScriptParam_17 = 5;
var uScriptParam_18 = 0;
var uScriptParam_19 = 0;
var uScriptParam_20 = 0;
var uScriptParam_21 = 0;
var uScriptParam_22 = 0;
#pragma endregion //}

void __EntryFunction__() {
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_123 = {0f, 0f, 0f};
	vLocal_129 = {1064.871f, 2670.857f, 38.5511f};
	vLocal_132 = {926.3422f, 2708.926f, 39.5394f};
	vLocal_135 = {1140.03f, 2698.027f, 37.1568f};
	vLocal_138 = {vLocal_123};
	fLocal_164 = 0f;
	iLocal_165 = joaat("dukes2");
	iLocal_166 = joaat("phantom");
	iLocal_167 = joaat("trailers2");
	iLocal_168 = joaat("rancherxl");
	iLocal_169 = joaat("a_m_m_hillbilly_01");
	iLocal_170 = joaat("a_m_m_hillbilly_02");
	iLocal_173 = 3;
	vLocal_126 = {ScriptParam_0.f_1[0 /*3*/]};
	if (player::has_force_cleanup_occurred(11)) {
		if (func_223(Local_90[0 /*4*/])) {
			vehicle::set_vehicle_doors_locked(Local_90[0 /*4*/], 2);
		}
		func_196(1, 0);
	}
	if (func_154(vLocal_126, 31, 0, 0, 0)) {
		func_151(31);
	}
	else {
		script::terminate_this_thread();
	}
	while (true) {
		if (brain::is_world_point_within_brain_activation_range() || func_150(1) || iLocal_155 > 2) {
			if (func_150(13)) {
				func_119();
			}
			switch (iLocal_47) {
			case 0: func_57(); break;

			case 1: func_1(); break;
			}
		}
		else {
			if (func_223(Local_90[0 /*4*/])) {
				vehicle::set_vehicle_doors_locked(Local_90[0 /*4*/], 2);
			}
			func_196(1, 0);
		}
		system::wait(0);
	}
}

// Position - 0x1AD
void func_1() {
	switch (iLocal_48) {
	case 0: iLocal_48 = 1; break;

	case 1:
		switch (iLocal_155) {
		case 0: iLocal_48 = 2; break;
		}
		break;

	case 2: func_2(); break;
	}
}

// Position - 0x1F1
void func_2() {
	func_54(64, 1);
	func_54(65, 1);
	func_31(Local_90[0 /*4*/], 145);
	func_6(-1, 0);
	func_3();
	func_196(1, 0);
}

// Position - 0x222
void func_3() { func_4(); }

// Position - 0x22F
int func_4() {
	if (func_5(0)) {
		return 0;
	}
	if (Global_91530.f_8) {
		if (Global_91530.f_10 > 0) {
			return 0;
		}
	}
	else if (Global_91530.f_10 > 1) {
		return 0;
	}
	Global_91530.f_10++;
	return 1;
}

// Position - 0x27A
bool func_5(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x2A5
void func_6(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		iParam0 = func_29();
	}
	if (iParam0 == -1) {
		return;
	}
	if (iParam1 <= func_28(iParam0)) {
		func_27(iParam0, iParam1);
		if (!func_26(51)) {
			func_17("RE_REWARD", 1, 0, 4000, 10000, func_20(), 0, 138, 0);
			func_16(51);
		}
		if (func_15(iParam0)) {
			Global_101700.f_23954.f_2 = 3;
		}
		if (func_14(iParam0, iParam1) != 322) {
			func_8(func_14(iParam0, iParam1), vLocal_43.x, vLocal_43.y);
		}
		Global_101688 = iParam1;
		if (Global_101686 == 0) {
			if (Global_101689 == 1 || Global_101689 == 5 || Global_101689 == 11 || Global_101689 == 25) {
				func_7(2);
			}
			else if (Global_101689 == 26 || Global_101689 == 8 || Global_101689 == 17) {
				func_7(7);
			}
			else {
				func_7(1);
			}
		}
	}
}

// Position - 0x3A7
void func_7(int iParam0) { Global_101686 = iParam0; }

// Position - 0x3B5
void func_8(int iParam0, var uParam1, var uParam2) {
	bool bVar0;

	if (iParam0 < 0) {
	}
	if (iParam0 == 321 || iParam0 > 321) {
	}
	else {
		func_12(891 + iParam0, 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101700.f_9153[iParam0 /*12*/].f_5 == 1) {
		if (Global_101700.f_9153[iParam0 /*12*/].f_6 == 11 || Global_101700.f_9153[iParam0 /*12*/].f_6 == 12) {
			bVar0 = false;
		}
	}
	else {
		Global_101700.f_9153[iParam0 /*12*/].f_5 = 1;
		Global_101700.f_9153[iParam0 /*12*/].f_10 = uParam1;
		Global_101700.f_9153[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287) {
			stats::_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286) {
			stats::_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299) {
			stats::_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0) {
		func_9();
	}
}

// Position - 0x49D
void func_9() {
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;

	iVar0 = 0;
	Global_101436 = 0;
	Global_101437 = 0;
	Global_101438 = 0;
	Global_101439 = 0;
	Global_101440 = 0;
	Global_101441 = 0;
	Global_101442 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101700.f_9153.f_3853;
	Global_101700.f_9153.f_3853 = 0f;
	while (iVar0 < 321) {
		if (Global_101700.f_9153[iVar0 /*12*/].f_5 == 1) {
			switch (Global_101700.f_9153[iVar0 /*12*/].f_6) {
			case 1:
				Global_101436++;
				fVar1 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 3:
				Global_101437++;
				fVar2 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 5:
				Global_101438++;
				fVar3 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 7:
				Global_101439++;
				fVar4 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 9:
				Global_101440++;
				fVar5 += Global_101700.f_9153[iVar0 /*12*/].f_4 * 4f;
				break;

			case 11:
				Global_101441++;
				fVar6 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 13:
				Global_101442++;
				fVar7 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			default: break;
			}
		}
		iVar0++;
	}
	if (Global_101419 > 0) {
		if (Global_101436 == Global_101419) {
			fVar1 = 55f;
		}
	}
	if (Global_101420 > 0) {
		if (Global_101437 == Global_101420) {
			fVar2 = 10f;
		}
	}
	if (Global_101421 > 0) {
		if (Global_101438 == Global_101421) {
			fVar3 = 0f;
		}
	}
	if (Global_101422 > 0) {
		if (Global_101439 == Global_101422) {
			fVar4 = 10f;
		}
	}
	if (Global_101423 > 0) {
		if (Global_101440 == Global_101423 || Global_101423 * 10 / Global_101440 < 41 ||
			Global_101440 > Global_101426 || Global_101440 == Global_101426) {
			if (!gameplay::is_bit_set(Global_101700.f_9153.f_3856, 14)) {
				if (Global_101440 == Global_101423) {
					stats::_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_101423, 0);
					gameplay::set_bit(&Global_101700.f_9153.f_3856, 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101424 > 0) {
		if (Global_101441 == Global_101424) {
			fVar6 = 15f;
		}
	}
	if (Global_101425 > 0) {
		if (Global_101442 == Global_101425) {
			fVar7 = 5f;
		}
	}
	Global_101700.f_9153.f_3853 = fVar1 + fVar2 + fVar3 + fVar4 + fVar5 + fVar6 + fVar7;
	if (Global_101440 > Global_101426 || Global_101440 == Global_101426) {
		iVar9 = Global_101426;
	}
	else {
		iVar9 = Global_101440;
	}
	stats::stat_set_int(joaat("num_missions_completed"), Global_101436, 1);
	stats::stat_set_int(joaat("num_missions_available"), Global_101419, 1);
	stats::stat_set_int(joaat("num_minigames_completed"), Global_101437, 1);
	stats::stat_set_int(joaat("num_minigames_available"), Global_101420, 1);
	stats::stat_set_int(joaat("num_oddjobs_completed"), Global_101438, 1);
	stats::stat_set_int(joaat("num_oddjobs_available"), Global_101421, 1);
	stats::stat_set_int(joaat("num_rndpeople_completed"), Global_101439, 1);
	stats::stat_set_int(joaat("num_rndpeople_available"), Global_101422, 1);
	stats::stat_set_int(joaat("num_rndevents_completed"), iVar9, 1);
	stats::stat_set_int(joaat("num_rndevents_available"), Global_101426, 1);
	stats::stat_set_int(joaat("num_misc_completed"), Global_101442 + Global_101441, 1);
	stats::stat_set_int(joaat("num_misc_available"), Global_101425 + Global_101424, 1);
	Global_101443 = Global_101436 * 100 / Global_101419;
	Global_101445 = Global_101438 + Global_101437 * 100 / (Global_101421 + Global_101420);
	Global_101444 = Global_101439 + iVar9 * 100 / (Global_101422 + Global_101426);
	Global_101446 = Global_101441 + Global_101442 * 100 / (Global_101424 + Global_101425);
	stats::stat_set_float(joaat("total_progress_made"), Global_101700.f_9153.f_3853, 1);
	stats::stat_set_int(joaat("percent_story_missions"), Global_101443, 1);
	stats::stat_set_int(joaat("percent_ambient_missions"), Global_101444, 1);
	stats::stat_set_int(joaat("percent_oddjobs"), Global_101445, 1);
	if (fVar8 > 0f && system::floor(fVar8) < system::floor(Global_101700.f_9153.f_3853)) {
		func_11(13, system::floor(Global_101700.f_9153.f_3853));
	}
	if (!datafile::datafile_is_save_pending()) {
		if (!Global_69702) {
			if (func_10() == 2 == 0 && !network::network_is_game_in_progress()) {
				if (network::network_is_cloud_available()) {
					Global_101434 = 0;
				}
				if (!Global_55822) {
					func_4();
				}
			}
		}
	}
}

// Position - 0x95E
int func_10() { return Global_25190; }

// Position - 0x969
int func_11(int iParam0, int iParam1) {
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

// Position - 0x9BA
int func_12(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;

	if (iParam2 == -1) {
		iParam2 = func_13();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192) {
		uVar2 = stats::_get_pstat_bool_hash(iParam0 - 0, 0, 1, iParam2);
		iVar1 = iParam0 - 0 - stats::_0xF4D8E7AC2A27758C(iParam0 - 0) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384) {
		uVar3 = stats::_get_pstat_bool_hash(iParam0 - 192, 1, 1, iParam2);
		iVar1 = iParam0 - 192 - stats::_0xF4D8E7AC2A27758C(iParam0 - 192) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705) {
		uVar4 = stats::_get_pstat_bool_hash(iParam0 - 513, 0, 0, 0);
		iVar1 = iParam0 - 513 - stats::_0xF4D8E7AC2A27758C(iParam0 - 513) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281) {
		uVar5 = stats::_get_pstat_bool_hash(iParam0 - 705, 1, 0, 0);
		iVar1 = iParam0 - 705 - stats::_0xF4D8E7AC2A27758C(iParam0 - 705) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879) {
		uVar6 = stats::_get_tupstat_bool_hash(iParam0 - 3111, 0, 1, iParam2);
		iVar1 = iParam0 - 3111 - stats::_0xF4D8E7AC2A27758C(iParam0 - 3111) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111) {
		uVar7 = stats::_get_tupstat_bool_hash(iParam0 - 2919, 0, 0, 0);
		iVar1 = iParam0 - 2919 - stats::_0xF4D8E7AC2A27758C(iParam0 - 2919) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335) {
		uVar8 = stats::_get_ngstat_bool_hash(iParam0 - 4207, 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4207 - stats::_0xF4D8E7AC2A27758C(iParam0 - 4207) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399) {
		uVar9 = stats::_get_ngstat_bool_hash(iParam0 - 4335, 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4335 - stats::_0xF4D8E7AC2A27758C(iParam0 - 4335) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413) {
		uVar10 = stats::_get_ngstat_bool_hash(iParam0 - 6029, 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = iParam0 - 6029 - stats::_0xF4D8E7AC2A27758C(iParam0 - 6029) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641) {
		uVar11 = stats::_get_ngstat_bool_hash(iParam0 - 7385, 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7385 - stats::_0xF4D8E7AC2A27758C(iParam0 - 7385) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385) {
		uVar12 = stats::_get_ngstat_bool_hash(iParam0 - 7321, 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7321 - stats::_0xF4D8E7AC2A27758C(iParam0 - 7321) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553) {
		uVar13 = stats::_get_ngstat_bool_hash(iParam0 - 9361, 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = iParam0 - 9361 - stats::_0xF4D8E7AC2A27758C(iParam0 - 9361) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar13, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

// Position - 0xD48
var func_13() { return Global_1312735; }

// Position - 0xD54
int func_14(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: return 250;

	case 1: return 226;

	case 2: return 243;

	case 3: return 256;

	case 4: return 259;

	case 5:
		if (iParam1 == 1) {
			return 281;
		}
		if (iParam1 == 2) {
			return 282;
		}
		break;

	case 6: return 265;

	case 7: return 218;

	case 9:
		if (iParam1 == 1) {
			return 271;
		}
		if (iParam1 == 2) {
			return 272;
		}
		if (iParam1 == 3) {
			return 273;
		}
		if (iParam1 == 4) {
			return 274;
		}
		if (iParam1 == 5) {
			return 275;
		}
		if (iParam1 == 6) {
			return 276;
		}
		if (iParam1 == 7) {
			return 277;
		}
		if (iParam1 == 8) {
			return 278;
		}
		if (iParam1 == 9) {
			return 279;
		}
		if (iParam1 == 10) {
			return 280;
		}
		break;

	case 10: return 219;

	case 11:
		if (iParam1 == 1) {
			return 246;
		}
		if (iParam1 == 2) {
			return 247;
		}
		if (iParam1 == 3) {
			return 248;
		}
		if (iParam1 == 4) {
			return 249;
		}
		break;

	case 12: return 254;

	case 13:
		if (iParam1 == 1) {
			return 260;
		}
		if (iParam1 == 2) {
			return 261;
		}
		if (iParam1 == 3) {
			return 262;
		}
		if (iParam1 == 4) {
			return 264;
		}
		break;

	case 14: return 283;

	case 15:
		if (iParam1 == 1) {
			return 224;
		}
		if (iParam1 == 2) {
			return 225;
		}
		break;

	case 16: return 252;

	case 17:
		if (iParam1 == 1) {
			return 244;
		}
		if (iParam1 == 2) {
			return 245;
		}
		break;

	case 18: return 253;

	case 19: return 215;

	case 20: return 216;

	case 21: return 251;

	case 22:
		if (iParam1 == 1) {
			return 221;
		}
		if (iParam1 == 2) {
			return 222;
		}
		break;

	case 23:
		if (iParam1 == 1) {
			return 213;
		}
		if (iParam1 == 2) {
			return 214;
		}
		break;

	case 24: return 242;

	case 25:
		if (iParam1 == 1) {
			return 267;
		}
		if (iParam1 == 2) {
			return 268;
		}
		if (iParam1 == 3) {
			return 269;
		}
		break;

	case 8: return 255;

	case 26:
		if (iParam1 == 1) {
			return 227;
		}
		if (iParam1 == 2) {
			return 228;
		}
		break;

	case 27:
		if (iParam1 == 1) {
			return 257;
		}
		if (iParam1 == 2) {
			return 258;
		}
		break;

	case 28: return 217;

	case 29:
		if (iParam1 == 1) {
			return 229;
		}
		if (iParam1 == 2) {
			return 230;
		}
		if (iParam1 == 3) {
			return 231;
		}
		break;

	case 30: return 285;

	case 31: return 318;

	case 32: return 319;

	case 33: return 320;
	}
	return 322;
}

// Position - 0x10C8
bool func_15(int iParam0) {
	switch (iParam0) {
	case 29:
	case 30:
	case 2:
	case 18: return false;
	}
	return true;
}

// Position - 0x10F7
void func_16(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31) {
		iVar0 -= 32;
		iVar1++;
	}
	if (iVar1 < 3) {
		gameplay::set_bit(&Global_101700.f_19369.f_150[iVar1], iVar0);
	}
}

// Position - 0x1139
void func_17(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8) {
	func_18(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x115A
void func_18(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, var uParam9) {
	int iVar0;

	if (gameplay::are_strings_equal(sParam0, "")) {
		return;
	}
	if (iParam3 < 0) {
		return;
	}
	if (iParam5 < 500 && iParam5 != -1) {
		return;
	}
	if (iParam4 < 0 && iParam4 != -1) {
		return;
	}
	if (iParam6 < 1 || iParam6 > 7) {
		return;
	}
	if (iParam7 == 235) {
		return;
	}
	if (iParam8 == 235) {
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145) {
		if (gameplay::are_strings_equal(&Global_101700.f_19369[iVar0 /*16*/], sParam0)) {
			return;
		}
		iVar0++;
	}
	if (Global_101700.f_19369.f_145 < 9) {
		StringCopy(&Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/], sParam0, 16);
		StringCopy(&Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_4, sParam1, 16);
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_8 = gameplay::get_game_timer() + iParam3;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_9 = iParam5;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_11 = iParam6;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_12 = uParam2;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_13 = iParam7;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_14 = iParam8;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1) {
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 =
				gameplay::get_game_timer() + iParam3 + iParam4;
		}
		else {
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 = -1;
		}
		Global_101700.f_19369.f_145++;
		func_19();
	}
}

// Position - 0x132D
void func_19() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		Global_101700.f_19369.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145) {
		if (gameplay::is_bit_set(Global_101700.f_19369[iVar0 /*16*/].f_11, 0)) {
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[0]) {
				Global_101700.f_19369.f_146[0] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (gameplay::is_bit_set(Global_101700.f_19369[iVar0 /*16*/].f_11, 1)) {
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[1]) {
				Global_101700.f_19369.f_146[1] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (gameplay::is_bit_set(Global_101700.f_19369[iVar0 /*16*/].f_11, 2)) {
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[2]) {
				Global_101700.f_19369.f_146[2] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

// Position - 0x144D
int func_20() {
	func_21();
	switch (Global_101700.f_2095.f_539.f_3549) {
	case 0: return 1;

	case 1: return 2;

	case 2: return 4;
	}
	return 0;
}

// Position - 0x1493
void func_21() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_25(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_24(player::player_ped_id());
			if (func_23(iVar0) && (!func_22(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_23(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x1590
bool func_22(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x159E
bool func_23(int iParam0) { return iParam0 < 3; }

// Position - 0x15AA
int func_24(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_25(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x15E7
int func_25(int iParam0) {
	if (func_23(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x1611
int func_26(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31) {
		iVar0 -= 32;
		iVar1++;
	}
	if (iVar1 < 3) {
		return gameplay::is_bit_set(Global_101700.f_19369.f_150[iVar1], iVar0);
	}
	return 0;
}

// Position - 0x1654
void func_27(int iParam0, int iParam1) { gameplay::set_bit(&Global_101700.f_23954.f_8[iParam0], iParam1); }

// Position - 0x166F
int func_28(int iParam0) {
	int iVar0;

	iVar0 = 1;
	switch (iParam0) {
	case 1: iVar0 = 5; break;

	case 5: iVar0 = 2; break;

	case 9: iVar0 = 10; break;

	case 11: iVar0 = 4; break;

	case 13: iVar0 = 4; break;

	case 15: iVar0 = 2; break;

	case 17: iVar0 = 2; break;

	case 22: iVar0 = 2; break;

	case 23: iVar0 = 2; break;

	case 25: iVar0 = 3; break;

	case 26: iVar0 = 2; break;

	case 27: iVar0 = 2; break;

	case 29: iVar0 = 3; break;
	}
	return iVar0;
}

// Position - 0x1720
int func_29() {
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, script::get_this_script_name(), 64);
	iVar16 = func_30(Var0);
	return iVar16;
}

// Position - 0x173D
int func_30(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5,
			char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11,
			char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15) {
	switch (gameplay::get_hash_key(&cParam0)) {
	case joaat("re_abandonedcar"): return 23;

	case joaat("re_accident"): return 0;

	case joaat("re_arrests"): return 15;

	case joaat("re_atmrobbery"): return 1;

	case joaat("re_bikethief"): return 26;

	case joaat("re_border"): return 29;

	case joaat("re_burials"): return 24;

	case joaat("re_bus_tours"): return 2;

	case joaat("re_cartheft"): return 17;

	case joaat("re_chasethieves"): return 11;

	case joaat("re_crashrescue"): return 16;

	case joaat("re_cultshootout"): return 18;

	case joaat("re_dealgonewrong"): return 12;

	case joaat("re_domestic"): return 3;

	case joaat("re_drunkdriver"): return 27;

	case joaat("re_gang_intimidation"): return 20;

	case joaat("re_gangfight"): return 19;

	case joaat("re_getaway_driver"): return 4;

	case joaat("re_hitch_lift"): return 13;

	case joaat("re_homeland_security"): return 28;

	case joaat("re_lured"): return 7;

	case joaat("re_muggings"): return 25;

	case joaat("re_paparazzi"): return 10;

	case joaat("re_prisonerlift"): return 22;

	case joaat("re_prisonvanbreak"): return 21;

	case joaat("re_securityvan"): return 9;

	case joaat("re_shoprobbery"): return 5;

	case joaat("re_snatched"): return 6;

	case joaat("re_stag_do"): return 14;

	case joaat("re_yetarian"): return 30;

	case joaat("re_duel"): return 31;

	case joaat("re_seaplane"): return 32;

	case joaat("re_monkey"): return 33;
	}
	return -1;
}

// Position - 0x1917
void func_31(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_36(iParam0)) {
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
	func_32(iParam0, &Global_101700.f_31389.f_5510);
}

// Position - 0x1B19
void func_32(int iParam0, var *uParam1) {
	int iVar0;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		func_35(uParam1);
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
		func_34(&iParam0, &uParam1->f_9, &uParam1->f_59);
		iVar0 = 0;
		while (iVar0 <= 11) {
			if (vehicle::is_vehicle_extra_turned_on(iParam0, iVar0 + 1)) {
				gameplay::set_bit(&uParam1->f_77, func_33(iVar0 + 1));
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

// Position - 0x1DC3
int func_33(int iParam0) {
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

// Position - 0x1E73
int func_34(int iParam0, var *uParam1, var *uParam2) {
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

// Position - 0x1F4D
void func_35(var *uParam0) {
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

// Position - 0x1FFD
int func_36(int iParam0) {
	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0) || func_52(iParam0, 0, 0) ||
		func_52(iParam0, 1, 0) || func_52(iParam0, 2, 0) || func_51(iParam0) != 145 || func_50(iParam0) ||
		func_49(iParam0) || func_48(iParam0) || func_47(iParam0) || !func_37(entity::get_entity_model(iParam0))) {
		if (func_49(iParam0)) {
		}
		if (func_49(iParam0)) {
		}
		if (func_52(iParam0, 0, 0)) {
		}
		if (func_52(iParam0, 1, 0)) {
		}
		if (func_52(iParam0, 2, 0)) {
		}
		if (func_51(iParam0) != 145) {
		}
		return 0;
	}
	return 1;
}

// Position - 0x20DA
int func_37(int iParam0) {
	if (iParam0 == 0) {
		return 0;
	}
	if (!func_38(iParam0, 0)) {
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

// Position - 0x228B
int func_38(int iParam0, int iParam1) {
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
		if (!func_46()) {
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
		if (!func_45() && !func_44() && !func_43() && !func_42() && !func_46()) {
			return 0;
		}
	}
	if (iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs") || iParam0 == joaat("khamelion")) {
		if (gameplay::is_durango_version() || gameplay::is_pc_version() || gameplay::is_orbis_version()) {
		}
		else if (!func_43()) {
			return 0;
		}
	}
	if (iParam1) {
		if (!func_41(iParam0)) {
			return 0;
		}
	}
	if (!func_39(iParam0)) {
		return 0;
	}
	return 1;
}

// Position - 0x2419
int func_39(int iParam0) {
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_40()) {
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

// Position - 0x24DD
int func_40() {
	if (gameplay::is_pc_version()) {
		return 1;
	}
	return 0;
}

// Position - 0x24F1
int func_41(int iParam0) {
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

// Position - 0x3234
int func_42() { return 0; }

// Position - 0x323D
int func_43() { return 1; }

// Position - 0x3246
int func_44() { return 1; }

// Position - 0x324F
int func_45() {
	if (dlc2::is_dlc_present(-1226939934)) {
		return 1;
	}
	return 0;
}

// Position - 0x3268
int func_46() {
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

// Position - 0x3323
int func_47(int iParam0) {
	int iVar0;
	char *sVar1;

	iVar0 = entity::get_entity_model(iParam0);
	sVar1 = vehicle::get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && gameplay::are_strings_equal(sVar1, "LAMAR G ")) {
		return 1;
	}
	if (!func_38(iVar0, 0)) {
		return 1;
	}
	return 0;
}

// Position - 0x3368
int func_48(int iParam0) {
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

// Position - 0x33A3
bool func_49(int iParam0) {
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

// Position - 0x341F
int func_50(int iParam0) {
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

// Position - 0x3507
int func_51(int iParam0) {
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

// Position - 0x356A
bool func_52(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	char *sVar1;
	int iVar9;

	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0)) {
		return false;
	}
	iVar0 = 0;
	while (func_53(iParam1, iVar0, &sVar1, &iVar9)) {
		if (!iParam2 || gameplay::is_bit_set(Global_101700.f_6188[iVar9], 0)) {
			if (vehicle::is_vehicle_in_garage_area(&sVar1, iParam0)) {
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0x35DB
bool func_53(int iParam0, int iParam1, char *sParam2, int *iParam3) {
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

// Position - 0x36B2
void func_54(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return;
	}
	if (iParam1) {
		if (!func_56(iParam0, 0)) {
			func_55(iParam0, 1, 0);
			func_55(iParam0, 2, 0);
			func_55(iParam0, 3, 0);
			func_55(iParam0, 4, 0);
			func_55(iParam0, 0, 1);
			Global_68531[iParam0] = 1;
		}
	}
	else {
		func_55(iParam0, 0, 0);
	}
}

// Position - 0x370F
void func_55(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x374A
int func_56(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return 0;
	}
	return gameplay::is_bit_set(Global_101700.f_31389[iParam0], iParam1);
}

// Position - 0x376D
void func_57() {
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	int iVar15;
	float fVar16;
	var uVar17;
	var uVar18;
	int iVar19;

	switch (iLocal_48) {
	case 0:
		func_108();
		func_107(13);
		streaming::request_model(iLocal_165);
		iLocal_48 = 1;
		break;

	case 1:
		switch (iLocal_155) {
		case 0:
			if (streaming::has_model_loaded(iLocal_165)) {
				func_103(0, vLocal_123, -1f, 1);
				streaming::set_model_as_no_longer_needed(iLocal_165);
				streaming::request_model(iLocal_166);
				streaming::request_model(iLocal_169);
				streaming::request_model(iLocal_167);
				func_93(1);
				iLocal_155++;
			}
			break;

		case 1:
			if (streaming::has_model_loaded(iLocal_166) && streaming::has_model_loaded(iLocal_169) &&
				streaming::has_model_loaded(iLocal_167)) {
				func_107(9);
				iLocal_155++;
			}
			break;

		case 2:
			if (func_223(Local_90[3 /*4*/]) && func_223(Local_49[0 /*5*/]) && func_92()) {
				vVar0 = {entity::get_offset_from_entity_given_world_coords(
					Local_90[3 /*4*/], entity::get_entity_coords(player::player_ped_id(), 1))};
				if (vVar0.x <= 0f &&
					entity::is_entity_in_angled_area(player::player_ped_id(), 953.5052f, 2665.587f, 38.61237f,
													 955.0941f, 2716.872f, 50.67046f, 71f, 0, 1, 0)) {
					if (func_91(entity::get_offset_from_entity_in_world_coords(Local_90[3 /*4*/], 0f, 10f, 0f),
								1.25f) ||
						func_91(entity::get_offset_from_entity_in_world_coords(Local_90[3 /*4*/], 0f, 12.5f, 0f),
								1.5f) ||
						func_91(entity::get_offset_from_entity_in_world_coords(Local_90[3 /*4*/], 0f, 15f, 0f),
								1.75f) ||
						func_91(entity::get_offset_from_entity_in_world_coords(Local_90[3 /*4*/], 0f, 17.5f, 0f), 2f) ||
						func_91(entity::get_offset_from_entity_in_world_coords(Local_90[3 /*4*/], 0f, 20f, 0f),
								2.25f)) {
						func_86(3, 0, 4, 1);
						iLocal_155 = 4;
					}
				}
			}
			if (!func_150(8) && func_223(Local_90[4 /*4*/]) && func_223(Local_49[1 /*5*/]) && func_92()) {
				vVar0 = {entity::get_offset_from_entity_given_world_coords(
					Local_90[4 /*4*/], entity::get_entity_coords(player::player_ped_id(), 1))};
				if (vVar0.x >= 0f &&
					entity::is_entity_in_angled_area(player::player_ped_id(), 1110.712f, 2695.67f, 36.77993f, 1109.166f,
													 2665.531f, 48.50355f, 71f, 0, 1, 0)) {
					if (func_91(entity::get_offset_from_entity_in_world_coords(Local_90[4 /*4*/], 0f, 10f, 0f), 1.5f) ||
						func_91(entity::get_offset_from_entity_in_world_coords(Local_90[4 /*4*/], 0f, 12.5f, 0f),
								1.75f) ||
						func_91(entity::get_offset_from_entity_in_world_coords(Local_90[4 /*4*/], 0f, 15f, 0f), 2f) ||
						func_91(entity::get_offset_from_entity_in_world_coords(Local_90[4 /*4*/], 0f, 17.5f, 0f),
								2.25f) ||
						func_91(entity::get_offset_from_entity_in_world_coords(Local_90[4 /*4*/], 0f, 20f, 0f), 2.5f)) {
						func_86(4, 1, 3, 0);
						iLocal_155 = 4;
					}
				}
			}
			if (!func_150(8) && func_84()) {
				func_107(6);
				if (func_223(Local_49[0 /*5*/])) {
					ped::set_blocking_of_non_temporary_events(Local_49[0 /*5*/], 0);
					ai::task_combat_ped(Local_49[0 /*5*/], player::player_ped_id(), 0, 16);
					Local_49[0 /*5*/].f_3 = 3;
				}
				if (func_223(Local_49[1 /*5*/])) {
					ped::set_blocking_of_non_temporary_events(Local_49[1 /*5*/], 0);
					ai::task_combat_ped(Local_49[1 /*5*/], player::player_ped_id(), 0, 16);
					Local_49[1 /*5*/].f_3 = 3;
				}
				if (func_223(Local_90[3 /*4*/])) {
					vehicle::set_vehicle_doors_locked(Local_90[3 /*4*/], 1);
				}
				if (func_223(Local_90[4 /*4*/])) {
					vehicle::set_vehicle_doors_locked(Local_90[4 /*4*/], 1);
				}
				iLocal_155++;
			}
			break;

		case 3:
			if (!func_223(Local_49[0 /*5*/]) || ui::does_blip_exist(Local_49[0 /*5*/].f_1))
				&&(!func_223(Local_49[1 /*5*/]) || ui::does_blip_exist(Local_49[1 /*5*/].f_1)) { iLocal_155++; }
			break;

		case 4:
			ped::set_relationship_between_groups(5, 1862763509, iLocal_171);
			ped::set_relationship_between_groups(5, iLocal_171, 1862763509);
			if (func_223(Local_90[3 /*4*/])) {
				vehicle::set_vehicle_doors_locked(Local_90[3 /*4*/], 1);
			}
			if (func_223(Local_90[4 /*4*/])) {
				vehicle::set_vehicle_doors_locked(Local_90[4 /*4*/], 1);
			}
			streaming::request_model(iLocal_168);
			system::settimera(0);
			iLocal_155++;
			break;

		case 5:
			if (streaming::has_model_loaded(iLocal_168)) {
				streaming::request_model(iLocal_169);
				iLocal_155++;
			}
			break;

		case 6:
			if (streaming::has_model_loaded(iLocal_169)) {
				streaming::request_model(iLocal_170);
				iLocal_155++;
			}
			break;

		case 7:
			if (streaming::has_model_loaded(iLocal_168) && streaming::has_model_loaded(iLocal_169) &&
				streaming::has_model_loaded(iLocal_170)) {
				func_103(5, vLocal_123, -1082130432, 0);
				func_103(6, vLocal_123, -1082130432, 0);
				func_103(7, vLocal_123, -1082130432, 0);
				streaming::set_model_as_no_longer_needed(iLocal_168);
				func_79(2, 0, vLocal_123, -1082130432);
				func_79(3, 0, vLocal_123, -1082130432);
				func_79(4, 0, vLocal_123, -1082130432);
				func_79(5, 0, vLocal_123, -1082130432);
				func_79(6, 0, vLocal_123, -1082130432);
				func_79(7, 0, vLocal_123, -1082130432);
				if (func_150(10) && func_150(11)) {
					streaming::set_model_as_no_longer_needed(iLocal_169);
				}
				streaming::set_model_as_no_longer_needed(iLocal_170);
				iLocal_155++;
			}
			break;

		case 8:
			if (!func_223(Local_49[0 /*5*/]) && !func_223(Local_49[1 /*5*/])) {
				if (system::timera() < 16000) {
					system::settimera(16000);
				}
			}
			if (system::timera() > 20000 && func_78(player::player_ped_id(), vLocal_129, 1) >= 150f) {
				iLocal_155++;
			}
			break;

		case 9:
			if (func_92() ||
				func_223(Local_90[0 /*4*/]) && func_77(player::player_ped_id(), Local_90[0 /*4*/], 1) <= 35f) {
				vVar3 = {entity::get_entity_coords(player::player_ped_id(), 1)};
				iVar15 = gameplay::get_random_int_in_range(6, 10);
				if (pathfind::get_nth_closest_vehicle_node(vVar3, iVar15, &vVar6, 1, 5f, 0f)) {
					pathfind::get_vehicle_node_properties(vVar6, &uVar17, &uVar18);
					if (uVar18 & 4)
						== 0 && (!func_76() || (uVar18 & 8) == 0) && (func_75() || (uVar18 & 1) == 0) &&
							!func_74(vVar6, 1084227584) {
							fVar16 = func_73(vVar6, entity::get_entity_coords(player::player_ped_id(), 1));
							vVar9 = {object::_get_object_offset_from_coords(vVar6, fVar16, 6f, -6f, 0f)};
							vVar12 = {object::_get_object_offset_from_coords(vVar6, fVar16, -6f, -6f, 0f)};
							if (!cam::is_sphere_visible(vVar6, 7f) && !cam::is_sphere_visible(vVar9, 7f) &&
								!cam::is_sphere_visible(vVar12, 7f) && !func_74(vVar9, 1084227584) &&
								!func_74(vVar12, 1084227584)) {
								func_72(Local_90[5 /*4*/], vVar6);
								func_72(Local_90[6 /*4*/], vVar9);
								func_72(Local_90[7 /*4*/], vVar12);
								iLocal_149 = gameplay::get_game_timer();
								iVar19 = 2;
								while (iVar19 <= 7) {
									if (func_223(Local_49[iVar19 /*5*/])) {
										Local_49[iVar19 /*5*/].f_1 = func_69(Local_49[iVar19 /*5*/], 1, 145);
										if (ped::is_ped_in_any_vehicle(Local_49[iVar19 /*5*/], 0)) {
											if (func_68(Local_49[iVar19 /*5*/], 0) == -1) {
												ui::set_blip_scale(Local_49[iVar19 /*5*/].f_1, 1f);
											}
											else {
												ui::set_blip_alpha(Local_49[iVar19 /*5*/].f_1, 0);
												ui::_0x54318C915D27E4CE(Local_49[iVar19 /*5*/].f_1, 1);
											}
										}
									}
									iVar19++;
								}
								func_107(2);
								func_107(7);
								iLocal_159 = gameplay::get_game_timer() + 60000;
								func_67(6);
								iLocal_155++;
							}
						}
				}
			}
			break;

		case 10:
			if (func_223(Local_49[2 /*5*/]) || func_223(Local_49[3 /*5*/]) || func_223(Local_49[4 /*5*/]) ||
				func_223(Local_49[5 /*5*/]) || func_223(Local_49[6 /*5*/]) || func_223(Local_49[7 /*5*/])) {
				if (func_150(7)) {
					if (func_223(Local_90[5 /*4*/])) {
						func_60(5, ped::get_vehicle_ped_is_using(player::player_ped_id()), &uLocal_150);
					}
					if (func_223(Local_90[6 /*4*/])) {
						func_60(6, ped::get_vehicle_ped_is_using(player::player_ped_id()), &uLocal_151);
					}
					if (func_223(Local_90[7 /*4*/])) {
						func_60(7, ped::get_vehicle_ped_is_using(player::player_ped_id()), &uLocal_152);
					}
				}
			}
			else if (!func_223(Local_49[0 /*5*/]) && !func_223(Local_49[1 /*5*/])) {
				if (func_223(Local_90[0 /*4*/])) {
					iLocal_48 = 2;
				}
				else {
					func_59();
				}
			}
			break;
		}
		break;

	case 2: func_58(1); break;
	}
}

// Position - 0x4034
void func_58(int iParam0) {
	iLocal_155 = 0;
	iLocal_48 = 0;
	iLocal_47 = iParam0;
}

// Position - 0x4046
void func_59() {
	if (func_223(Local_90[0 /*4*/])) {
		vehicle::set_vehicle_doors_locked(Local_90[0 /*4*/], 2);
	}
	func_196(1, 0);
}

// Position - 0x406A
void func_60(int iParam0, int iParam1, var *uParam2) {
	float fVar0;
	float fVar1;
	int iVar2;

	if (vehicle::is_vehicle_driveable(Local_90[iParam0 /*4*/], 0)) {
		if (entity::does_entity_exist(iParam1) && Local_90[iParam0 /*4*/] != iParam1 &&
			!vehicle::is_this_model_a_boat(entity::get_entity_model(iParam1)) &&
			!vehicle::is_this_model_a_plane(entity::get_entity_model(iParam1)) &&
			!vehicle::is_this_model_a_heli(entity::get_entity_model(iParam1)) &&
			!vehicle::is_this_model_a_train(entity::get_entity_model(iParam1)) && func_66(Local_90[iParam0 /*4*/])) {
			if (iParam0 == 3 || iParam0 == 4) {
				fVar0 = 50f;
				fVar1 = 35f;
				iVar2 = 1500;
			}
			else {
				fVar0 = 75f;
				fVar1 = 50f;
				iVar2 = 3000;
			}
			if (func_78(iParam1, vLocal_141, 1) >= fVar0 && vehicle::is_vehicle_on_all_wheels(iParam1)) {
				vLocal_145 = {vLocal_141};
				fLocal_148 = uLocal_144;
				vLocal_141 = {entity::get_entity_coords(iParam1, 1)};
				uLocal_144 = entity::get_entity_heading(iParam1);
			}
			if (!entity::is_entity_occluded(Local_90[iParam0 /*4*/])) {
				*uParam2 = gameplay::get_game_timer();
			}
			else if (gameplay::get_game_timer() - *uParam2 > iVar2 && gameplay::get_game_timer() - iLocal_149 > 1500 &&
					 func_77(Local_90[iParam0 /*4*/], iParam1, 1) > func_78(iParam1, vLocal_145, 1) &&
					 func_65(iParam0) && func_78(iParam1, vLocal_145, 1) >= fVar0 &&
					 func_77(Local_90[iParam0 /*4*/], iParam1, 1) >= fVar1 &&
					 func_64(Local_90[iParam0 /*4*/], vLocal_145, 1153138688) &&
					 func_63(Local_90[iParam0 /*4*/], iParam1, vLocal_145) && !func_62(vLocal_145) &&
					 !cam::is_sphere_visible(vLocal_145, 4f) && !func_74(vLocal_145, 1084227584)) {
				gameplay::clear_area_of_peds(vLocal_145, 1.5f, 0);
				gameplay::clear_area_of_vehicles(vLocal_145, 5f, 0, 0, 0, 0, 0);
				if (iParam0 == 3 || iParam0 == 4) {
					vehicle::detach_vehicle_from_trailer(Local_90[iParam0 /*4*/]);
					if (iParam0 == 3) {
						func_61(0, 3);
					}
					else {
						func_61(1, 3);
					}
				}
				entity::set_entity_coords(Local_90[iParam0 /*4*/], vLocal_145, 1, 0, 0, 1);
				vehicle::set_vehicle_on_ground_properly(Local_90[iParam0 /*4*/], 1084227584);
				entity::set_entity_heading(Local_90[iParam0 /*4*/], fLocal_148);
				vehicle::set_vehicle_engine_on(Local_90[iParam0 /*4*/], 1, 1, 0);
				vehicle::set_vehicle_forward_speed(Local_90[iParam0 /*4*/], entity::get_entity_speed(iParam1) * 1.2f);
				*uParam2 = gameplay::get_game_timer();
				Local_90[iParam0 /*4*/].f_2 = gameplay::get_game_timer();
				iLocal_149 = gameplay::get_game_timer();
			}
		}
		else {
			*uParam2 = gameplay::get_game_timer();
		}
	}
}

// Position - 0x42FF
void func_61(int iParam0, int iParam1) { gameplay::set_bit(&Local_49[iParam0 /*5*/].f_2, iParam1); }

// Position - 0x4315
int func_62(vector3 vParam0) {
	if (vParam0.x == 0f && vParam0.y == 0f && vParam0.z == 0f) {
		return 1;
	}
	return 0;
}

// Position - 0x433F
int func_63(int iParam0, int iParam1, vector3 vParam2) {
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = {entity::get_offset_from_entity_given_world_coords(iParam1, entity::get_entity_coords(iParam0, 1))};
	vVar3 = {entity::get_offset_from_entity_given_world_coords(iParam1, vParam2)};
	if (vVar0.y > 0f && vVar3.y > 0f || vVar0.y < 0f && vVar3.y < 0f) {
		return 1;
	}
	if (iParam0 == Local_90[3 /*4*/] && !ui::does_blip_exist(Local_49[0 /*5*/].f_1)) {
		return 1;
	}
	if (iParam0 == Local_90[4 /*4*/] && !ui::does_blip_exist(Local_49[1 /*5*/].f_1)) {
		return 1;
	}
	return 0;
}

// Position - 0x43D6
int func_64(int iParam0, vector3 vParam1, float fParam4) {
	if (func_78(iParam0, vParam1, 1) <= fParam4) {
		return 1;
	}
	if (iParam0 == Local_90[3 /*4*/] && !ui::does_blip_exist(Local_49[0 /*5*/].f_1)) {
		return 1;
	}
	if (iParam0 == Local_90[4 /*4*/] && !ui::does_blip_exist(Local_49[1 /*5*/].f_1)) {
		return 1;
	}
	return 0;
}

// Position - 0x4434
int func_65(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;

	if (func_150(6)) {
		iVar0 = 3;
	}
	else {
		iVar0 = 5;
	}
	if (func_150(7)) {
		iVar1 = 7;
	}
	else if (func_150(6)) {
		iVar1 = 4;
	}
	else {
		iVar1 = 5;
	}
	iVar3 = -1;
	fVar5 = -1f;
	iVar2 = iVar0;
	while (iVar2 <= iVar1) {
		if (func_223(Local_90[iVar2 /*4*/])) {
			if (IntToFloat(iVar3) == -1f || gameplay::get_game_timer() - Local_90[iVar2 /*4*/].f_2 > iVar3) {
				iVar3 = gameplay::get_game_timer() - Local_90[iVar2 /*4*/].f_2;
				iVar4 = iVar2;
			}
			if (fVar5 == -1f || func_77(Local_90[iVar2 /*4*/], player::player_ped_id(), 1) > fVar5) {
				fVar5 = func_77(Local_90[iVar2 /*4*/], player::player_ped_id(), 1);
				iVar6 = iVar2;
			}
		}
		iVar2++;
	}
	if (iParam0 == iVar4 || iParam0 == iVar6) {
		return 1;
	}
	return 0;
}

// Position - 0x4513
int func_66(int iParam0) {
	int iVar0;

	if (func_223(iParam0) && !vehicle::is_vehicle_seat_free(iParam0, -1, 0)) {
		iVar0 = vehicle::get_ped_in_vehicle_seat(iParam0, -1, 0);
		if (func_223(iVar0)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x454A
void func_67(int iParam0) { gameplay::clear_bit(&iLocal_156, iParam0); }

// Position - 0x455A
int func_68(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ped::is_ped_injured(iParam0)) {
		if (ped::is_ped_in_any_vehicle(iParam0, iParam1)) {
			iVar0 = ped::get_vehicle_ped_is_in(iParam0, iParam1);
			if (entity::does_entity_exist(iVar0)) {
				if (!entity::is_entity_dead(iVar0, 0)) {
					iVar1 = vehicle::get_vehicle_model_number_of_seats(entity::get_entity_model(iVar0));
					iVar2 = 0;
					while (iVar2 < iVar1) {
						iVar3 = iVar2 - 1;
						if (!vehicle::is_vehicle_seat_free(iVar0, iVar3, 0)) {
							if (vehicle::get_ped_in_vehicle_seat(iVar0, iVar3, 0) == iParam0) {
								return iVar3;
							}
						}
						iVar2++;
					}
				}
			}
		}
	}
	return iVar3;
}

// Position - 0x45DC
int func_69(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = func_70(iParam0, !iParam1, 0);
	if (iParam2 != 145 && ui::does_blip_exist(iVar0) &&
		ui::does_text_label_exist(&Global_101700.f_27009[iParam2 /*29*/].f_3)) {
		ui::set_blip_name_from_text_file(iVar0, &Global_101700.f_27009[iParam2 /*29*/].f_3);
	}
	return iVar0;
}

// Position - 0x462E
int func_70(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	iVar0 = ui::add_blip_for_entity(iParam0);
	if (entity::is_entity_a_vehicle(iParam0)) {
		ui::set_blip_scale(iVar0, func_71(network::network_is_game_in_progress(), 1f, 1f));
		if (!iParam2) {
			ui::set_blip_as_friendly(iVar0, iParam1);
		}
		else {
			ui::set_blip_colour(iVar0, 2);
		}
	}
	else if (entity::is_entity_a_ped(iParam0)) {
		ui::set_blip_scale(iVar0, func_71(network::network_is_game_in_progress(), 0.7f, 0.7f));
		ui::set_blip_as_friendly(iVar0, iParam1);
	}
	else if (entity::is_entity_an_object(iParam0)) {
		ui::set_blip_scale(iVar0, func_71(network::network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

// Position - 0x46D2
var func_71(bool bParam0, float fParam1, float fParam2) {
	if (bParam0) {
		return fParam1;
	}
	return fParam2;
}

// Position - 0x46E9
void func_72(int iParam0, vector3 vParam1) {
	if (func_223(iParam0)) {
		entity::freeze_entity_position(iParam0, 0);
		gameplay::clear_area_of_peds(vParam1, 1.5f, 0);
		gameplay::clear_area_of_vehicles(vParam1, 3f, 0, 0, 0, 0, 0);
		entity::set_entity_coords(iParam0, vParam1, 1, 0, 0, 1);
		vehicle::set_vehicle_on_ground_properly(iParam0, 1084227584);
		entity::set_entity_heading(iParam0, func_73(entity::get_entity_coords(iParam0, 1),
													entity::get_entity_coords(player::player_ped_id(), 1)));
		if (func_223(vehicle::get_ped_in_vehicle_seat(iParam0, -1, 0))) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				ai::task_vehicle_chase(vehicle::get_ped_in_vehicle_seat(iParam0, -1, 0), player::player_ped_id());
			}
			else {
				ai::task_vehicle_mission_ped_target(vehicle::get_ped_in_vehicle_seat(iParam0, -1, 0), iParam0,
													player::player_ped_id(), 2, 100f, 786469, -1f, -1f, 1);
			}
		}
		vehicle::set_vehicle_forward_speed(iParam0, entity::get_entity_speed(player::player_ped_id()) * 1.2f);
	}
}

// Position - 0x47B2
var func_73(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5) {
	return gameplay::get_heading_from_vector_2d(Param3 - Param0, Param3.f_1 - Param0.f_1);
}

// Position - 0x47CC
int func_74(vector3 vParam0, float fParam3) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 8) {
		if (entity::does_entity_exist(Local_90[iVar1 /*4*/]) &&
			entity::is_entity_at_coord(Local_90[iVar1 /*4*/], vParam0, fParam3, fParam3, fParam3, 0, 1, 0)) {
			iVar0 = 1;
		}
		iVar1++;
	}
	return iVar0;
}

// Position - 0x4818
int func_75() {
	vector3 vVar0;
	var uVar3;
	var uVar4;

	if (pathfind::get_closest_vehicle_node(entity::get_entity_coords(player::player_ped_id(), 1), &vVar0, 1, 1077936128,
										   0)) {
		if (pathfind::get_vehicle_node_properties(vVar0, &uVar4, &uVar3)) {
			return (uVar3 & 1) == 1;
		}
	}
	return 0;
}

// Position - 0x4852
int func_76() {
	vector3 vVar0;
	var uVar3;
	var uVar4;

	if (pathfind::get_closest_vehicle_node(entity::get_entity_coords(player::player_ped_id(), 1), &vVar0, 1, 1077936128,
										   0)) {
		if (pathfind::get_vehicle_node_properties(vVar0, &uVar4, &uVar3)) {
			return (uVar3 & 8) == 0;
		}
	}
	return 0;
}

// Position - 0x488D
float func_77(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x48EB
float func_78(int iParam0, vector3 vParam1, int iParam4) {
	vector3 vVar0;

	if (!entity::is_entity_dead(iParam0, 0)) {
		vVar0 = {entity::get_entity_coords(iParam0, 1)};
	}
	else {
		vVar0 = {entity::get_entity_coords(iParam0, 0)};
	}
	return gameplay::get_distance_between_coords(vVar0, vParam1, iParam4);
}

// Position - 0x4925
int func_79(int iParam0, int iParam1, vector3 vParam2, float fParam5) {
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	vector3 vVar12;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	float fVar26;
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
	int iVar39;
	bool bVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
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
	bool bVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	char *sVar71;

	if (!entity::does_entity_exist(Local_49[iParam0 /*5*/])) {
		iVar5 = joaat("weapon_unarmed");
		iVar6 = 0;
		iVar7 = -1;
		vVar9 = {vLocal_123};
		vVar12 = {vLocal_123};
		iVar15 = 0;
		iVar16 = 1;
		iVar17 = 0;
		iVar18 = 0;
		iVar19 = 10;
		fVar20 = 0f;
		fVar21 = 0f;
		fVar22 = 60f;
		fVar23 = 5f;
		fVar24 = 120f;
		fVar25 = -90f;
		fVar26 = 90f;
		iVar27 = iLocal_171;
		iVar28 = 1;
		iVar29 = 1;
		iVar30 = 0;
		iVar31 = 1;
		iVar32 = 1;
		iVar33 = 1;
		iVar34 = 0;
		iVar35 = 1;
		iVar36 = 0;
		iVar37 = 1;
		iVar38 = 1;
		iVar39 = 0;
		bVar40 = false;
		iVar41 = 1;
		iVar42 = 0;
		iVar43 = 1;
		iVar44 = 1;
		iVar45 = 0;
		iVar46 = 1;
		iVar47 = 1;
		iVar48 = 1;
		iVar49 = 0;
		iVar50 = 0;
		iVar51 = 0;
		iVar52 = 0;
		iVar53 = 0;
		iVar54 = 0;
		iVar55 = 1;
		iVar56 = 0;
		iVar57 = 0;
		iVar58 = 0;
		iVar59 = 1;
		iVar60 = 1;
		iVar61 = 0;
		iVar62 = 0;
		iVar63 = 0;
		bVar64 = false;
		iVar65 = 0;
		iVar66 = 0;
		iVar67 = 0;
		iVar68 = 1;
		iVar69 = 1;
		iVar70 = 0;
		switch (iParam0) {
		case 0:
			iVar4 = iLocal_169;
			iVar6 = Local_90[3 /*4*/];
			iVar5 = joaat("weapon_pistol");
			iVar36 = 1;
			iVar33 = 0;
			iVar34 = 1;
			iVar70 = 1;
			break;

		case 1:
			iVar4 = iLocal_169;
			iVar6 = Local_90[4 /*4*/];
			iVar5 = joaat("weapon_pistol");
			iVar36 = 1;
			iVar33 = 0;
			iVar34 = 1;
			iVar70 = 1;
			break;

		case 2:
			iVar4 = iLocal_170;
			iVar6 = Local_90[5 /*4*/];
			iVar5 = joaat("weapon_pistol");
			iVar36 = 1;
			iVar33 = 0;
			break;

		case 3:
			iVar4 = iLocal_169;
			iVar6 = Local_90[5 /*4*/];
			iVar7 = 0;
			iVar5 = joaat("weapon_pistol");
			iVar36 = 1;
			iVar33 = 0;
			break;

		case 4:
			iVar4 = iLocal_169;
			iVar6 = Local_90[6 /*4*/];
			iVar5 = joaat("weapon_pistol");
			iVar36 = 1;
			iVar33 = 0;
			break;

		case 5:
			iVar4 = iLocal_170;
			iVar6 = Local_90[6 /*4*/];
			iVar7 = 0;
			iVar5 = joaat("weapon_pistol");
			iVar36 = 1;
			iVar33 = 0;
			break;

		case 6:
			iVar4 = iLocal_170;
			iVar6 = Local_90[7 /*4*/];
			iVar5 = joaat("weapon_pistol");
			iVar36 = 1;
			iVar33 = 0;
			break;

		case 7:
			iVar4 = iLocal_170;
			iVar6 = Local_90[7 /*4*/];
			iVar7 = 0;
			iVar5 = joaat("weapon_pistol");
			iVar36 = 1;
			iVar33 = 0;
			break;

		default: break;
		}
		if (!streaming::has_model_loaded(iVar4)) {
			return 0;
		}
		if (!func_83(vParam2, vLocal_123, 0)) {
			if (!entity::does_entity_exist(iVar8)) {
				vVar0 = {vParam2};
			}
			else {
				vVar9 = {vParam2};
			}
		}
		if (fParam5 != -1f) {
			fVar3 = fParam5;
		}
		if (func_223(iVar6)) {
			Local_49[iParam0 /*5*/] = ped::create_ped_inside_vehicle(iVar6, 26, iVar4, iVar7, 1, 1);
		}
		else {
			Local_49[iParam0 /*5*/] = ped::create_ped(26, iVar4, vVar0, fVar3, 1, 1);
			entity::set_entity_collision(Local_49[iParam0 /*5*/], iVar41, 0);
			entity::_0x9EBC85ED0FFFE51C(Local_49[iParam0 /*5*/], !iVar65, 0);
		}
		if (bVar40) {
			entity::set_entity_coords_no_offset(Local_49[iParam0 /*5*/], vVar0, 0, 0, 1);
		}
		if (iParam1) {
			if (iVar27 == iLocal_171) {
				Local_49[iParam0 /*5*/].f_1 = func_69(Local_49[iParam0 /*5*/], 1, 145);
			}
			else {
				Local_49[iParam0 /*5*/].f_1 = func_69(Local_49[iParam0 /*5*/], 0, 145);
			}
		}
		weapon::set_ped_drops_weapons_when_dead(Local_49[iParam0 /*5*/], iVar59);
		ped::set_ped_config_flag(Local_49[iParam0 /*5*/], 213, iVar28);
		ped::set_ped_config_flag(Local_49[iParam0 /*5*/], 212, iVar29);
		ped::set_blocking_of_non_temporary_events(Local_49[iParam0 /*5*/], iVar30);
		ped::set_ped_keep_task(Local_49[iParam0 /*5*/], iVar31);
		ped::set_ped_dies_when_injured(Local_49[iParam0 /*5*/], iVar32);
		ped::set_ped_config_flag(Local_49[iParam0 /*5*/], 188, iVar55);
		ped::set_ped_config_flag(Local_49[iParam0 /*5*/], 42, !iVar33);
		ped::set_ped_combat_attributes(Local_49[iParam0 /*5*/], 9, iVar35);
		ped::set_ped_combat_attributes(Local_49[iParam0 /*5*/], 3, iVar37);
		ped::set_ped_config_flag(Local_49[iParam0 /*5*/], 342, iVar57);
		entity::set_entity_load_collision_flag(Local_49[iParam0 /*5*/], iVar36);
		ped::set_ped_armour(Local_49[iParam0 /*5*/], iVar18);
		ped::set_ped_combat_attributes(Local_49[iParam0 /*5*/], 8, iVar39);
		entity::set_entity_visible(Local_49[iParam0 /*5*/], iVar38, 0);
		entity::set_entity_invincible(Local_49[iParam0 /*5*/], iVar42);
		weapon::give_weapon_to_ped(Local_49[iParam0 /*5*/], iVar5, -1, iVar34, iVar34);
		ped::set_ped_combat_attributes(Local_49[iParam0 /*5*/], 2, iVar43);
		ped::set_ped_combat_attributes(Local_49[iParam0 /*5*/], 1, iVar44);
		ped::set_ped_combat_attributes(Local_49[iParam0 /*5*/], 52, iVar45);
		ped::set_ped_combat_attributes(Local_49[iParam0 /*5*/], 13, iVar68);
		ped::set_ped_suffers_critical_hits(Local_49[iParam0 /*5*/], iVar46);
		ped::set_ped_can_be_targetted(Local_49[iParam0 /*5*/], iVar47);
		ped::set_ped_config_flag(Local_49[iParam0 /*5*/], 118, iVar48);
		ped::set_ped_config_flag(Local_49[iParam0 /*5*/], 115, iVar49);
		ped::set_ped_combat_attributes(Local_49[iParam0 /*5*/], 12, iVar50);
		ped::set_ped_combat_attributes(Local_49[iParam0 /*5*/], 36, iVar51);
		ped::set_ped_combat_attributes(Local_49[iParam0 /*5*/], 35, iVar52);
		ped::set_ped_combat_attributes(Local_49[iParam0 /*5*/], 29, iVar53);
		ped::set_ped_config_flag(Local_49[iParam0 /*5*/], 185, iVar54);
		ped::set_ped_to_load_cover(Local_49[iParam0 /*5*/], iVar56);
		ped::set_ped_combat_attributes(Local_49[iParam0 /*5*/], 17, iVar62);
		audio::disable_ped_pain_audio(Local_49[iParam0 /*5*/], iVar63);
		audio::stop_ped_speaking(Local_49[iParam0 /*5*/], iVar58);
		func_82(Local_49[iParam0 /*5*/], fVar22, fVar23, fVar24, fVar25, fVar26);
		entity::freeze_entity_position(Local_49[iParam0 /*5*/], iVar66);
		ped::set_ped_config_flag(Local_49[iParam0 /*5*/], 203, iVar67);
		ped::_0xA9B61A329BFDCBEA(Local_49[iParam0 /*5*/], !iVar67);
		ped::set_ped_config_flag(Local_49[iParam0 /*5*/], 366, iVar69);
		ped::set_ped_config_flag(Local_49[iParam0 /*5*/], 134, iVar70);
		if (!iVar60) {
			func_61(iParam0, 2);
		}
		if (!gameplay::is_string_null_or_empty(sVar71)) {
			ai::task_start_scenario_in_place(Local_49[iParam0 /*5*/], sVar71, -1, 0);
		}
		if (iVar17 > 0) {
			if (iVar17 > entity::get_entity_max_health(Local_49[iParam0 /*5*/]) || iVar61) {
				entity::set_entity_max_health(Local_49[iParam0 /*5*/], iVar17);
			}
			entity::set_entity_health(Local_49[iParam0 /*5*/], iVar17);
		}
		if (iVar19 > 0) {
			ped::set_ped_accuracy(Local_49[iParam0 /*5*/], iVar19);
		}
		if (fVar20 > 0f || fVar21 > 0f) {
			weapon::set_ped_chance_of_firing_blanks(Local_49[iParam0 /*5*/], fVar20, fVar21);
		}
		ped::set_ped_relationship_group_hash(Local_49[iParam0 /*5*/], iVar27);
		if (entity::does_entity_exist(iVar8)) {
			entity::attach_entity_to_entity(Local_49[iParam0 /*5*/], iVar8, -1, vVar9, vVar12, 1, 1, 1, 0, 2, 1);
			ped::set_ped_can_ragdoll(Local_49[iParam0 /*5*/], 0);
			func_61(iParam0, 1);
		}
		func_81(iParam0);
		func_80(iParam0);
		if (iVar15 != 0) {
			weapon::give_weapon_component_to_ped(Local_49[iParam0 /*5*/], iVar5, iVar15);
			weapon::set_current_ped_weapon(Local_49[iParam0 /*5*/], iVar5, 1);
		}
		ped::set_ped_combat_ability(Local_49[iParam0 /*5*/], iVar16);
		if (bVar64) {
			ped::set_ped_stealth_movement(Local_49[iParam0 /*5*/], 1, "DEFAULT_ACTION");
		}
		return 1;
	}
	return 0;
}

// Position - 0x4F5D
void func_80(int iParam0) {
	if (func_223(Local_49[iParam0 /*5*/])) {
		switch (iParam0) {
		case 2: break;
		}
	}
}

// Position - 0x4F82
void func_81(int iParam0) {
	if (func_223(Local_49[iParam0 /*5*/])) {
		switch (iParam0) {
		case 0:
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 0, 0, 0, 0);
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 2, 0, 0, 0);
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 3, 0, 0, 0);
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 4, 0, 0, 0);
			break;

		case 1:
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 0, 0, 1, 0);
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 2, 1, 1, 0);
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 3, 1, 1, 0);
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 4, 1, 1, 0);
			break;

		case 2:
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 0, 0, 1, 0);
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 2, 0, 0, 0);
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 3, 0, 0, 0);
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 4, 0, 0, 0);
			break;

		case 3:
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 0, 0, 1, 0);
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 2, 0, 1, 0);
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 3, 1, 0, 0);
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 4, 0, 2, 0);
			break;

		case 4:
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 0, 0, 2, 0);
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 2, 1, 2, 0);
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 3, 0, 2, 0);
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 4, 0, 2, 0);
			break;

		case 5:
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 0, 1, 2, 0);
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 2, 1, 0, 0);
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 3, 1, 1, 0);
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 4, 0, 1, 0);
			break;

		case 6:
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 0, 1, 1, 0);
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 2, 2, 0, 0);
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 3, 2, 2, 0);
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 4, 0, 1, 0);
			break;

		case 7:
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 0, 0, 2, 0);
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 2, 0, 0, 0);
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 3, 1, 2, 0);
			ped::set_ped_component_variation(Local_49[iParam0 /*5*/], 4, 0, 0, 0);
			break;
		}
	}
}

// Position - 0x51A6
void func_82(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5) {
	if (!ped::is_ped_injured(iParam0)) {
		ped::set_ped_seeing_range(iParam0, fParam1);
		ped::set_ped_visual_field_peripheral_range(iParam0, fParam2);
		ped::set_ped_visual_field_center_angle(iParam0, fParam3 / 2f);
		ped::set_ped_visual_field_min_angle(iParam0, fParam4);
		ped::set_ped_visual_field_max_angle(iParam0, fParam5);
	}
}

// Position - 0x51E2
bool func_83(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x5229
int func_84() {
	int iVar0;
	int iVar1;
	var uVar2;

	if (func_223(Local_49[0 /*5*/]) && func_77(player::player_ped_id(), Local_49[0 /*5*/], 1) >= 200f &&
		func_223(Local_49[1 /*5*/]) && func_77(player::player_ped_id(), Local_49[1 /*5*/], 1) >= 200f) {
		return 1;
	}
	if (func_150(10) && !func_223(Local_49[0 /*5*/]) || func_150(11) && !func_223(Local_49[1 /*5*/])) {
		return 1;
	}
	if (func_223(Local_49[0 /*5*/]) && (ped::is_ped_in_combat(Local_49[0 /*5*/], player::player_ped_id()) ||
										!ped::is_ped_in_any_vehicle(Local_49[0 /*5*/], 0)) ||
		func_223(Local_49[1 /*5*/]) && (ped::is_ped_in_combat(Local_49[1 /*5*/], player::player_ped_id()) ||
										!ped::is_ped_in_any_vehicle(Local_49[1 /*5*/], 0))) {
		return 1;
	}
	if (func_223(Local_90[1 /*4*/]) &&
			entity::has_entity_been_damaged_by_entity(Local_90[1 /*4*/], player::player_ped_id(), 1) ||
		func_223(Local_90[2 /*4*/]) &&
			entity::has_entity_been_damaged_by_entity(Local_90[2 /*4*/], player::player_ped_id(), 1)) {
		return 1;
	}
	if (func_85(Local_90[3 /*4*/]) || func_85(Local_90[4 /*4*/])) {
		return 1;
	}
	iVar0 = player::get_players_last_vehicle();
	if (func_223(iVar0)) {
		fLocal_164 = entity::get_entity_speed(iVar0);
	}
	else {
		fLocal_164 = 0f;
	}
	if (ped::is_ped_trying_to_enter_a_locked_vehicle(player::player_ped_id())) {
		uVar2 = ped::get_vehicle_ped_is_trying_to_enter(player::player_ped_id());
		iVar1 = uVar2;
		if (iVar1 == Local_90[3 /*4*/] && func_223(Local_49[0 /*5*/]) ||
			iVar1 == Local_90[4 /*4*/] && func_223(Local_49[1 /*5*/])) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x53F1
int func_85(int iParam0) {
	int iVar0;
	float fVar1;

	iVar0 = player::get_players_last_vehicle();
	if (func_223(iParam0) && func_223(iVar0) && fLocal_164 != 0f && fLocal_164 >= 9f) {
		fVar1 = entity::get_entity_speed(iVar0);
		if (entity::is_entity_touching_entity(iParam0, iVar0) && fVar1 <= fLocal_164 * 0.5f) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x5451
void func_86(int iParam0, int iParam1, int iParam2, int iParam3) {
	func_107(8);
	vehicle::set_vehicle_forward_speed(Local_90[iParam0 /*4*/], 5f);
	Local_49[iParam1 /*5*/].f_1 = func_69(Local_49[iParam1 /*5*/], 1, 145);
	ped::set_blocking_of_non_temporary_events(Local_49[iParam1 /*5*/], 1);
	func_90();
	ai::task_vehicle_drive_to_coord(
		0, Local_90[iParam0 /*4*/],
		entity::get_offset_from_entity_in_world_coords(Local_90[iParam0 /*4*/], 0f, 20f, 0f), 30f, 0, 0, 262144, 4f,
		-1f);
	ai::task_set_blocking_of_non_temporary_events(0, 0);
	ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
	func_89(Local_49[iParam1 /*5*/]);
	func_87(Local_49[iParam1 /*5*/], "GENERIC_INSULT_HIGH", 13);
	Local_49[iParam1 /*5*/].f_3 = 3;
	if (func_223(Local_90[iParam2 /*4*/])) {
		if (iParam0 == 3) {
			vLocal_138 = {1031.986f, 2693.441f, 38.6861f};
		}
		else {
			vLocal_138 = {1027.001f, 2686.89f, 37.8987f};
		}
		iLocal_161 = gameplay::get_game_timer() + 1000;
		if (func_223(Local_49[iParam3 /*5*/])) {
			ped::set_blocking_of_non_temporary_events(Local_49[iParam3 /*5*/], 1);
			ai::task_vehicle_mission(Local_49[iParam3 /*5*/], Local_90[iParam2 /*4*/], Local_90[0 /*4*/], 2, 30f,
									 262144, -1f, -1f, 1);
		}
		Local_49[iParam3 /*5*/].f_3++;
	}
	ped::set_relationship_between_groups(5, 1862763509, iLocal_171);
	ped::set_relationship_between_groups(5, iLocal_171, 1862763509);
}

// Position - 0x5595
void func_87(int iParam0, char *sParam1, int iParam2) {
	audio::_play_ambient_speech1(iParam0, sParam1, func_88(iParam2), 1);
}

// Position - 0x55AC
int func_88(int iParam0) {
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

// Position - 0x57A1
void func_89(int iParam0) {
	if (func_150(0)) {
		ai::close_sequence_task(iLocal_172);
		func_67(0);
	}
	ai::task_perform_sequence(iParam0, iLocal_172);
	ai::clear_sequence_task(&iLocal_172);
}

// Position - 0x57CA
void func_90() {
	if (!func_150(0)) {
		ai::clear_sequence_task(&iLocal_172);
		ai::open_sequence_task(&iLocal_172);
		func_107(0);
	}
}

// Position - 0x57EC
int func_91(vector3 vParam0, float fParam3) {
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;

	fVar0 = entity::get_entity_speed(player::player_ped_id());
	fVar1 = func_78(player::player_ped_id(), vParam0, 1);
	vVar2 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	vVar5 = {vVar2 + entity::get_entity_velocity(player::player_ped_id())};
	if (fVar1 / fVar0 <= fParam3 && gameplay::get_distance_between_coords(vVar5, vParam0, 1) <
										gameplay::get_distance_between_coords(vVar2, vParam0, 1)) {
		return 1;
	}
	return 0;
}

// Position - 0x585E
bool func_92() {
	return func_223(Local_90[0 /*4*/]) & ped::is_ped_in_vehicle(player::player_ped_id(), Local_90[0 /*4*/], 0);
}

// Position - 0x5882
int func_93(int iParam0) {
	if (func_97()) {
		Global_101690 = 1;
		Global_101687 = gameplay::get_game_timer();
		if (func_15(Global_101689)) {
			func_94(0);
		}
		ui::set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_15(Global_101689)) {
			ui::flash_minimap_display();
		}
		return 1;
	}
	return 0;
}

// Position - 0x58D5
void func_94(int iParam0) {
	switch (iParam0) {
	case 0:
		if (Global_101700.f_23954.f_2 < 3) {
			if (!ui::is_help_message_on_screen()) {
				func_95(func_96(iParam0), -1);
				Global_101700.f_23954.f_2++;
				gameplay::set_bit(&Global_101696, 0);
			}
		}
		break;

	case 1:
		if (!gameplay::is_bit_set(Global_101696, 1)) {
			if (!ui::is_help_message_on_screen()) {
				func_95(func_96(iParam0), -1);
				Global_101700.f_23954.f_3++;
				gameplay::set_bit(&Global_101696, 1);
			}
		}
		break;

	case 2:
		if (!gameplay::is_bit_set(Global_101696, 2)) {
			if (!ui::is_help_message_on_screen()) {
				func_95(func_96(iParam0), -1);
				Global_101700.f_23954.f_4++;
				gameplay::set_bit(&Global_101696, 2);
			}
		}
		break;
	}
}

// Position - 0x59B6
void func_95(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x59CD
char *func_96(int iParam0) {
	char *sVar0;

	sVar0 = "";
	switch (iParam0) {
	case 0: sVar0 = "AM_H_REFS"; break;

	case 1: sVar0 = "RE_FLASHBLIP"; break;

	case 2: sVar0 = "RE_HANDOVER"; break;
	}
	return sVar0;
}

// Position - 0x5A10
bool func_97() {
	switch (func_98(&Global_25249, 0, 5, 0, script::get_id_of_this_thread())) {
	case 1: return true;

	case 0: return true;
	}
	return false;
}

// Position - 0x5A46
int func_98(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam1 == 7) {
		return 0;
	}
	if (!iParam3) {
		if (Global_89302.f_44 == 1) {
			return 2;
		}
	}
	if (iParam1 == 0) {
		if (func_102(0)) {
			return 0;
		}
		Global_35745++;
		*iParam0 = Global_35745;
		player::set_player_invincible(player::get_player_index(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5) {
			player::force_cleanup(8);
		}
		Global_35781 = iParam2;
		Global_35743 = *iParam0;
		Global_35744 = iParam4;
		Global_35742 = 0;
		return 1;
	}
	if (*iParam0 != -1) {
		if (Global_35742 > 0) {
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35742) {
				if (Global_35748[iVar0 /*4*/] == *iParam0) {
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35743 == *iParam0) {
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1) {
		if (!func_100(iParam2)) {
			return 0;
		}
		if (Global_35742 == 8) {
			return 0;
		}
		Global_35745++;
		*iParam0 = Global_35745;
		Global_35748[Global_35742 /*4*/] = Global_35745;
		Global_35748[Global_35742 /*4*/].f_1 = iParam1;
		Global_35748[Global_35742 /*4*/].f_2 = iParam2;
		Global_35748[Global_35742 /*4*/].f_3 = 0;
		Global_35742++;
		if (iParam4 != 0) {
			func_99(iParam0, iParam4);
		}
	}
	return 2;
}

// Position - 0x5B7D
void func_99(int *iParam0, int iParam1) {
	int iVar0;

	if (Global_35742 == 0) {
		return;
	}
	if (*iParam0 == -1) {
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35742) {
		if (Global_35748[iVar0 /*4*/] == *iParam0) {
			Global_35748[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*iParam0 = -1;
}

// Position - 0x5BCC
bool func_100(int iParam0) { return func_101(iParam0, Global_35781); }

// Position - 0x5BDD
int func_101(int iParam0, int iParam1) {
	if (iParam1 == 15) {
		return 1;
	}
	if (iParam0 == 15) {
		return 0;
	}
	switch (iParam0) {
	case 16:
		switch (iParam1) {
		case 9:
		case 10:
		case 7:
		case 13:
		case 14: return 0;
		}
		return 1;

	case 0:
		switch (iParam1) {
		case 5:
		case 17: return 1;
		}
		break;

	case 2:
	case 3:
		switch (iParam1) {
		case 5:
		case 6:
		case 8:
		case 17: return 1;
		}
		break;

	case 4:
		if (iParam1 == 17) {
			return 1;
		}
		break;

	case 5: break;

	case 6:
	case 8:
		if (iParam1 == 5) {
			return 1;
		}
		break;

	case 7:
		if (iParam1 == 6) {
			return 1;
		}
		break;

	case 9:
		if (iParam1 == 5) {
			return 1;
		}
		break;

	case 10:
		switch (iParam1) {
		case 5:
		case 6:
		case 17: return 1;
		}
		break;

	case 11:
		if (iParam1 == 5) {
			return 1;
		}
		break;

	case 17:
		switch (iParam1) {
		case 17:
		case 12:
		case 5: return 1;
		}
		break;

	case 18:
	case 12:
		switch (iParam1) {
		case 5:
		case 6:
		case 8: return 1;
		}
		break;

	case 13:
		switch (iParam1) {
		case 5: return 1;
		}
		break;

	case 14:
		switch (iParam1) {
		case 5: return 1;
		}
		break;
	}
	return 0;
}

// Position - 0x5DBE
bool func_102(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_100(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x5DE0
int func_103(int iParam0, vector3 vParam1, float fParam4, int iParam5) {
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
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
	float fVar23;
	float fVar24;
	float fVar25;
	int iVar26;
	vector3 vVar27;
	vector3 vVar30;
	char *sVar33;

	if (!entity::does_entity_exist(Local_90[iParam0 /*4*/])) {
		iVar5 = 0;
		iVar6 = 1;
		iVar7 = 1;
		iVar8 = 0;
		iVar9 = 0;
		iVar10 = 0;
		bVar11 = false;
		iVar12 = 1;
		iVar13 = 0;
		iVar14 = 0;
		iVar15 = 0;
		iVar16 = 0;
		iVar17 = 0;
		iVar18 = 1;
		iVar19 = 0;
		iVar20 = 1;
		iVar21 = 0;
		iVar22 = 0;
		fVar24 = -1f;
		fVar25 = -1f;
		switch (iParam0) {
		case 0:
			vVar0 = {vLocal_129};
			fVar3 = 89.7263f;
			iVar4 = iLocal_165;
			iVar12 = 0;
			iVar17 = 1;
			iVar18 = 0;
			iVar21 = 1;
			iVar8 = 1;
			iVar20 = 0;
			iVar5 = 7;
			break;

		case 3:
			vVar0 = {vLocal_132};
			fVar3 = 175.3714f;
			iVar4 = iLocal_166;
			iVar10 = 1;
			iVar17 = 1;
			iVar18 = 0;
			sVar33 = "96NWO218";
			iVar5 = 2;
			break;

		case 4:
			vVar0 = {vLocal_135};
			fVar3 = 171f;
			iVar4 = iLocal_166;
			iVar10 = 1;
			iVar17 = 1;
			iVar18 = 0;
			sVar33 = "01DTS039";
			iVar5 = 2;
			break;

		case 1:
			vVar0 = {930.46f, 2719.65f, 42.41f};
			fVar3 = 180.53f;
			iVar4 = iLocal_167;
			break;

		case 2:
			vVar0 = {1141.17f, 2711.97f, 40.04f};
			fVar3 = 176.67f;
			iVar4 = iLocal_167;
			break;

		case 5:
			vVar0 = {514.5844f, -649.9937f, 23.7512f};
			fVar3 = 182.0097f;
			iVar4 = iLocal_168;
			iVar9 = 1;
			iVar10 = 1;
			iVar20 = 0;
			sVar33 = "18NJM316";
			break;

		case 6:
			vVar0 = {507.3959f, -653.6174f, 23.7512f};
			fVar3 = 177.8055f;
			iVar4 = iLocal_168;
			iVar9 = 1;
			iVar10 = 1;
			iVar20 = 0;
			sVar33 = "28HDT291";
			break;

		case 7:
			vVar0 = {1200.547f, -1553.607f, 38.4019f};
			fVar3 = 0.0001f;
			iVar4 = iLocal_168;
			iVar9 = 1;
			iVar10 = 1;
			iVar20 = 0;
			sVar33 = "23DJT162";
			break;

		default: break;
		}
		if (!streaming::has_model_loaded(iVar4)) {
			return 0;
		}
		if (!func_83(vParam1, vLocal_123, 0)) {
			vVar0 = {vParam1};
		}
		if (fParam4 != -1f) {
			fVar3 = fParam4;
		}
		Local_90[iParam0 /*4*/] = vehicle::create_vehicle(iVar4, vVar0, fVar3, 1, 1);
		func_106(iParam0);
		func_105(iParam0);
		entity::set_entity_visible(Local_90[iParam0 /*4*/], iVar7, 0);
		if (entity::does_entity_exist(iVar26)) {
			entity::attach_entity_to_entity(Local_90[iParam0 /*4*/], iVar26, -1, vVar27, vVar30, 0, 0, 0, 0, 2, 1);
		}
		else {
			entity::set_entity_collision(Local_90[iParam0 /*4*/], iVar6, 0);
		}
		vehicle::set_vehicle_strong(Local_90[iParam0 /*4*/], iVar8);
		entity::freeze_entity_position(Local_90[iParam0 /*4*/], iVar9);
		vehicle::set_vehicle_engine_on(Local_90[iParam0 /*4*/], iVar10, 1, 0);
		entity::set_entity_invincible(Local_90[iParam0 /*4*/], iVar13);
		entity::set_entity_load_collision_flag(Local_90[iParam0 /*4*/], iVar14);
		vehicle::set_vehicle_can_be_targetted(Local_90[iParam0 /*4*/], iVar15);
		vehicle::_0x4D9D109F63FEE1D4(Local_90[iParam0 /*4*/], iVar16);
		vehicle::set_vehicle_automatically_attaches(Local_90[iParam0 /*4*/], iVar18, 0);
		vehicle::_0x2B6747FAA9DB9D6B(Local_90[iParam0 /*4*/], iVar17);
		entity::set_entity_only_damaged_by_player(Local_90[iParam0 /*4*/], iVar19);
		vehicle::set_vehicle_tyres_can_burst(Local_90[iParam0 /*4*/], iVar20);
		vehicle::set_vehicle_needs_to_be_hotwired(Local_90[iParam0 /*4*/], iVar21);
		entity::_0x9EBC85ED0FFFE51C(Local_90[iParam0 /*4*/], !iVar22, 0);
		if (!gameplay::is_string_null_or_empty(sVar33)) {
			vehicle::set_vehicle_number_plate_text(Local_90[iParam0 /*4*/], sVar33);
		}
		if (fVar23 > 0f) {
			vehicle::set_vehicle_forward_speed(Local_90[iParam0 /*4*/], fVar23);
		}
		if (bVar11) {
			vehicle::set_heli_blades_full_speed(Local_90[iParam0 /*4*/]);
		}
		if (fVar24 >= 0f) {
			vehicle::_0xAD2D28A1AFDFF131(Local_90[iParam0 /*4*/], fVar24);
		}
		if (fVar25 >= 0f) {
			vehicle::_0xE6F13851780394DA(Local_90[iParam0 /*4*/], fVar25);
		}
		if (iVar5 != 0) {
			vehicle::set_vehicle_doors_locked(Local_90[iParam0 /*4*/], iVar5);
		}
		if (iParam5) {
			Local_90[iParam0 /*4*/].f_1 = func_104(Local_90[iParam0 /*4*/], iVar12, 0);
		}
	}
	return 1;
}

// Position - 0x6179
int func_104(int iParam0, int iParam1, int iParam2) { return func_70(iParam0, !iParam1, iParam2); }

// Position - 0x618C
void func_105(int iParam0) {
	if (func_223(Local_90[iParam0 /*4*/])) {
		switch (iParam0) {
		case 5:
		case 6:
		case 7:
		case 3:
		case 4: vehicle::set_vehicle_dirt_level(Local_90[iParam0 /*4*/], 15f); break;
		}
	}
}

// Position - 0x61D8
void func_106(int iParam0) {
	if (func_223(Local_90[iParam0 /*4*/])) {
		switch (iParam0) {
		case 5:
			vehicle::set_vehicle_colours(Local_90[iParam0 /*4*/], 48, 48);
			vehicle::set_vehicle_extra_colours(Local_90[iParam0 /*4*/], 8, 156);
			break;

		case 6:
			vehicle::set_vehicle_colours(Local_90[iParam0 /*4*/], 58, 58);
			vehicle::set_vehicle_extra_colours(Local_90[iParam0 /*4*/], 8, 156);
			break;

		case 7:
			vehicle::set_vehicle_colours(Local_90[iParam0 /*4*/], 94, 94);
			vehicle::set_vehicle_extra_colours(Local_90[iParam0 /*4*/], 8, 156);
			break;

		case 3:
		case 4:
			vehicle::set_vehicle_colours(Local_90[iParam0 /*4*/], 0, 0);
			vehicle::set_vehicle_extra_colours(Local_90[iParam0 /*4*/], 61, 156);
			break;
		}
	}
}

// Position - 0x6285
void func_107(int iParam0) { gameplay::set_bit(&iLocal_156, iParam0); }

// Position - 0x6295
void func_108() {
	if (player::is_player_playing(player::player_id())) {
		player::set_player_control(player::player_id(), 1, 0);
	}
	func_118(1);
	audio::register_script_with_audio(1);
	ped::add_relationship_group("ENEMIES", &iLocal_171);
	ped::set_relationship_between_groups(1, 1862763509, 1862763509);
	ped::set_relationship_between_groups(255, 1862763509, iLocal_171);
	ped::set_relationship_between_groups(1, iLocal_171, iLocal_171);
	ped::set_relationship_between_groups(255, iLocal_171, 1862763509);
	ped::set_ped_relationship_group_hash(player::player_ped_id(), 1862763509);
	func_109(1);
}

// Position - 0x630B
void func_109(int iParam0) {
	func_110(39, iParam0);
	func_110(40, iParam0);
	func_110(41, iParam0);
	func_110(42, iParam0);
	func_110(43, iParam0);
	func_110(44, iParam0);
}

// Position - 0x6343
void func_110(int iParam0, bool bParam1) {
	if (bParam1) {
		if (!func_117(iParam0, 2, 1)) {
			func_116(iParam0, 2, 1);
		}
	}
	else if (func_117(iParam0, 2, 1)) {
		func_111(iParam0, 2, 1);
	}
}

// Position - 0x637A
void func_111(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam2) {
		gameplay::clear_bit(&Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_10() == 0) {
			iVar0 = func_114(func_115(iParam0), -1, 0);
			gameplay::clear_bit(&iVar0, iParam1);
			func_112(func_115(iParam0), iVar0, -1, 1, 0);
		}
	}
	else {
		gameplay::clear_bit(&Global_101700.f_668[iParam0], iParam1);
	}
}

// Position - 0x63E3
void func_112(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam4) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_113(iParam2)];
	if (iVar0 != 0) {
		stats::stat_set_int(iVar0, iParam1, iParam3);
	}
}

// Position - 0x6413
int func_113(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_13();
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

// Position - 0x6447
int func_114(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_113(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x6479
int func_115(int iParam0) {
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

// Position - 0x6740
void func_116(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam2) {
		gameplay::set_bit(&Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_10() == 0) {
			iVar0 = func_114(func_115(iParam0), -1, 0);
			gameplay::set_bit(&iVar0, iParam1);
			func_112(func_115(iParam0), iVar0, -1, 1, 0);
		}
	}
	else {
		gameplay::set_bit(&Global_101700.f_668[iParam0], iParam1);
	}
}

// Position - 0x67A9
bool func_117(int iParam0, int iParam1, int iParam2) {
	if (iParam2) {
		return gameplay::is_bit_set(Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_10() == 0) {
			return gameplay::is_bit_set(func_114(func_115(iParam0), -1, 0), iParam1);
		}
	}
	else {
		return gameplay::is_bit_set(Global_101700.f_668[iParam0], iParam1);
	}
	return false;
}

// Position - 0x6809
void func_118(int iParam0) {
	vehicle::set_vehicle_model_is_suppressed(iLocal_168, iParam0);
	vehicle::set_vehicle_model_is_suppressed(iLocal_166, iParam0);
}

// Position - 0x6821
void func_119() {
	if (!func_149()) {
		if (func_136()) {
			func_196(1, 0);
		}
	}
	unk1::_0x208784099002BC30("RE_DUEL", 0);
	func_134();
	func_129();
	func_125();
	func_120();
	if (func_150(5) && func_223(Local_90[iLocal_173 /*4*/]) && gameplay::get_game_timer() < iLocal_157) {
		audio::_sound_vehicle_horn_this_frame(Local_90[iLocal_173 /*4*/]);
	}
	if (func_150(6)) {
		if (iLocal_158 == 0) {
			if (func_78(player::player_ped_id(), vLocal_129, 1) >= 150f) {
				iLocal_158 = gameplay::get_game_timer() + 30000;
			}
		}
		else if (gameplay::get_game_timer() >= iLocal_158) {
			func_67(6);
		}
	}
	if (func_150(7)) {
		if (gameplay::get_game_timer() >= iLocal_159) {
			func_67(7);
		}
	}
	if (func_150(9) && func_223(Local_90[0 /*4*/]) && func_77(player::player_ped_id(), Local_90[0 /*4*/], 1) <= 35f) {
		if (!func_150(10)) {
			if (!cam::is_sphere_visible(vLocal_132, 7f)) {
				if (gameplay::get_game_timer() - iLocal_162 >= 1000 && !func_74(vLocal_132, 7f) &&
					func_78(player::player_ped_id(), vLocal_132, 1) >= 50f) {
					gameplay::clear_area(vLocal_132, 7f, 1, 0, 0, 0);
					func_103(3, vLocal_123, -1082130432, 0);
					func_103(1, vLocal_123, -1082130432, 0);
					vehicle::attach_vehicle_to_trailer(Local_90[3 /*4*/], Local_90[1 /*4*/], 1065353216);
					func_79(0, 0, vLocal_123, -1082130432);
					func_107(10);
					if (iLocal_155 > 2) {
						ped::set_blocking_of_non_temporary_events(Local_49[0 /*5*/], 0);
						ai::task_combat_ped(Local_49[0 /*5*/], player::player_ped_id(), 0, 16);
						Local_49[0 /*5*/].f_3 = 3;
					}
				}
			}
			else {
				iLocal_162 = gameplay::get_game_timer();
			}
		}
		if (!func_150(11)) {
			if (!cam::is_sphere_visible(vLocal_135, 7f)) {
				if (gameplay::get_game_timer() - iLocal_163 >= 1000 && !func_74(vLocal_135, 7f) &&
					func_78(player::player_ped_id(), vLocal_135, 1) >= 50f) {
					gameplay::clear_area(vLocal_135, 7f, 1, 0, 0, 0);
					func_103(4, vLocal_123, -1082130432, 0);
					func_103(2, vLocal_123, -1082130432, 0);
					vehicle::attach_vehicle_to_trailer(Local_90[4 /*4*/], Local_90[2 /*4*/], 1065353216);
					func_79(1, 0, vLocal_123, -1082130432);
					func_107(11);
					if (iLocal_155 > 2) {
						ped::set_blocking_of_non_temporary_events(Local_49[1 /*5*/], 0);
						ai::task_combat_ped(Local_49[1 /*5*/], player::player_ped_id(), 0, 16);
						Local_49[1 /*5*/].f_3 = 3;
					}
				}
			}
			else {
				iLocal_163 = gameplay::get_game_timer();
			}
		}
		if (func_150(10) && func_150(11)) {
			func_67(9);
			streaming::set_model_as_no_longer_needed(iLocal_166);
			streaming::set_model_as_no_longer_needed(iLocal_167);
			streaming::set_model_as_no_longer_needed(iLocal_169);
		}
	}
	if (func_150(8)) {
		if (iLocal_160 == 0) {
			iLocal_160 = gameplay::get_game_timer() + 3500;
		}
		else if (gameplay::get_game_timer() >= iLocal_160) {
			func_67(8);
			func_107(6);
		}
	}
}

// Position - 0x6B09
void func_120() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8) {
		if (entity::does_entity_exist(Local_49[iVar0 /*5*/]) && ui::does_blip_exist(Local_49[iVar0 /*5*/].f_1)) {
			if (ped::is_ped_in_any_vehicle(Local_49[iVar0 /*5*/], 0)) {
				if (!func_124(iVar0, 0)) {
					ui::set_blip_scale(Local_49[iVar0 /*5*/].f_1, 1f);
					func_61(iVar0, 0);
				}
				if (func_68(Local_49[iVar0 /*5*/], 0) != -1) {
					if (func_123(iVar0)) {
						if (ui::get_blip_alpha(Local_49[iVar0 /*5*/].f_1) > 0) {
							ui::set_blip_alpha(Local_49[iVar0 /*5*/].f_1, 0);
							ui::_0x54318C915D27E4CE(Local_49[iVar0 /*5*/].f_1, 1);
						}
					}
					else if (ui::get_blip_alpha(Local_49[iVar0 /*5*/].f_1) == 0) {
						ui::set_blip_alpha(Local_49[iVar0 /*5*/].f_1, 255);
						ui::_0x54318C915D27E4CE(Local_49[iVar0 /*5*/].f_1, 0);
					}
				}
			}
			else if (func_124(iVar0, 0)) {
				ui::set_blip_scale(Local_49[iVar0 /*5*/].f_1, 0.7f);
				func_122(iVar0, 0);
				if (ui::get_blip_alpha(Local_49[iVar0 /*5*/].f_1) == 0) {
					ui::set_blip_alpha(Local_49[iVar0 /*5*/].f_1, 255);
					ui::_0x54318C915D27E4CE(Local_49[iVar0 /*5*/].f_1, 0);
				}
			}
			if (ped::is_ped_injured(Local_49[iVar0 /*5*/])) {
				func_121(&Local_49[iVar0 /*5*/].f_1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8) {
		if (entity::does_entity_exist(Local_90[iVar0 /*4*/]) && ui::does_blip_exist(Local_90[iVar0 /*4*/].f_1)) {
			if (!vehicle::is_vehicle_driveable(Local_90[iVar0 /*4*/], 0)) {
				func_121(&Local_90[iVar0 /*4*/].f_1);
			}
		}
		iVar0++;
	}
}

// Position - 0x6C94
void func_121(int *iParam0) {
	if (ui::does_blip_exist(*iParam0)) {
		ui::set_blip_route(*iParam0, 0);
		ui::remove_blip(iParam0);
	}
}

// Position - 0x6CB4
void func_122(int iParam0, int iParam1) { gameplay::clear_bit(&Local_49[iParam0 /*5*/].f_2, iParam1); }

// Position - 0x6CCA
bool func_123(int iParam0) {
	if (iParam0 == 3) {
		if (!func_223(Local_49[2 /*5*/])) {
			return false;
		}
	}
	if (iParam0 == 5) {
		if (!func_223(Local_49[4 /*5*/])) {
			return false;
		}
	}
	if (iParam0 == 7) {
		if (!func_223(Local_49[6 /*5*/])) {
			return false;
		}
	}
	return true;
}

// Position - 0x6D18
bool func_124(int iParam0, int iParam1) { return gameplay::is_bit_set(Local_49[iParam0 /*5*/].f_2, iParam1); }

// Position - 0x6D2E
void func_125() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8) {
		if (entity::does_entity_exist(Local_90[iVar0 /*4*/])) {
			func_126(iVar0);
		}
		iVar0++;
	}
}

// Position - 0x6D5C
void func_126(int iParam0) {
	if (func_223(Local_90[iParam0 /*4*/])) {
		switch (iParam0) {
		case 5:
			if (!func_223(Local_49[2 /*5*/]) && !func_223(Local_49[3 /*5*/]) ||
				!vehicle::is_vehicle_driveable(Local_90[iParam0 /*4*/], 0)) {
				func_127(iParam0, 0);
			}
			break;

		case 6:
			if (!func_223(Local_49[4 /*5*/]) && !func_223(Local_49[5 /*5*/]) ||
				!vehicle::is_vehicle_driveable(Local_90[iParam0 /*4*/], 0)) {
				func_127(iParam0, 0);
			}
			break;

		case 7:
			if (!func_223(Local_49[6 /*5*/]) && !func_223(Local_49[7 /*5*/]) ||
				!vehicle::is_vehicle_driveable(Local_90[iParam0 /*4*/], 0)) {
				func_127(iParam0, 0);
			}
			break;

		case 3:
			if (!func_223(Local_49[0 /*5*/]) || !vehicle::is_vehicle_driveable(Local_90[iParam0 /*4*/], 0)) {
				if (func_77(player::player_ped_id(), Local_90[iParam0 /*4*/], 1) >= 50f) {
					func_127(iParam0, 0);
				}
			}
			if (func_150(6)) {
				func_60(iParam0, ped::get_vehicle_ped_is_using(player::player_ped_id()), &uLocal_153);
			}
			break;

		case 4:
			if (!func_223(Local_49[1 /*5*/]) || !vehicle::is_vehicle_driveable(Local_90[iParam0 /*4*/], 0)) {
				if (func_77(player::player_ped_id(), Local_90[iParam0 /*4*/], 1) >= 50f) {
					func_127(iParam0, 0);
				}
			}
			if (func_150(6)) {
				func_60(iParam0, ped::get_vehicle_ped_is_using(player::player_ped_id()), &uLocal_154);
			}
			break;

		case 1:
			if (!func_223(Local_90[3 /*4*/]) || func_77(Local_90[3 /*4*/], Local_90[iParam0 /*4*/], 1) >= 150f) {
				func_127(iParam0, 0);
			}
			break;

		case 2:
			if (!func_223(Local_90[4 /*4*/]) || func_77(Local_90[4 /*4*/], Local_90[iParam0 /*4*/], 1) >= 150f) {
				func_127(iParam0, 0);
			}
			break;

		case 0:
			switch (Local_90[iParam0 /*4*/].f_3) {
			case 0:
				if (func_92()) {
					func_107(1);
					func_121(&Local_90[iParam0 /*4*/].f_1);
					Local_90[iParam0 /*4*/].f_3++;
				}
				break;
			}
			break;
		}
	}
	else if (entity::is_entity_visible(Local_90[iParam0 /*4*/])) {
		func_127(iParam0, 0);
	}
	else {
		func_127(iParam0, 1);
	}
}

// Position - 0x6FCC
void func_127(int iParam0, int iParam1) {
	if (entity::does_entity_exist(Local_90[iParam0 /*4*/])) {
		func_121(&Local_90[iParam0 /*4*/].f_1);
		if (vehicle::is_playback_going_on_for_vehicle(Local_90[iParam0 /*4*/])) {
			vehicle::stop_playback_recorded_vehicle(Local_90[iParam0 /*4*/]);
		}
		if (func_128(&Local_90[iParam0 /*4*/])) {
			if (iParam1) {
				vehicle::delete_vehicle(&Local_90[iParam0 /*4*/]);
			}
			else {
				entity::set_vehicle_as_no_longer_needed(&Local_90[iParam0 /*4*/]);
			}
		}
		Local_90[iParam0 /*4*/] = 0;
		Local_90[iParam0 /*4*/].f_2 = 0;
		Local_90[iParam0 /*4*/].f_3 = 0;
	}
}

// Position - 0x7046
bool func_128(var *uParam0) {
	if (ped::is_ped_in_vehicle(player::player_ped_id(), *uParam0, 0)) {
		return false;
	}
	return true;
}

// Position - 0x7062
void func_129() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8) {
		if (entity::does_entity_exist(Local_49[iVar0 /*5*/])) {
			func_130(iVar0);
		}
		iVar0++;
	}
}

// Position - 0x7090
void func_130(int iParam0) {
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	float fVar6;

	if (func_223(Local_49[iParam0 /*5*/])) {
		switch (iParam0) {
		case 0:
		case 1:
			if (iParam0 == 0) {
				iVar0 = 3;
				iVar1 = 4;
			}
			else {
				iVar0 = 4;
				iVar1 = 3;
			}
			switch (Local_49[iParam0 /*5*/].f_3) {
			case 0:
				Local_49[iParam0 /*5*/].f_4 = gameplay::get_game_timer();
				if (func_77(Local_49[iParam0 /*5*/], player::player_ped_id(), 1) <= 15f) {
					ped::set_ik_target(Local_49[iParam0 /*5*/], 1, player::player_ped_id(), 31086, vLocal_123, 0, -1,
									   -1);
				}
				break;

			case 1:
				if (func_223(Local_90[iVar0 /*4*/])) {
					vehicle::_0x88BC673CA9E0AE99(Local_90[iVar0 /*4*/], 1);
					if (func_223(Local_90[0 /*4*/]) &&
						!entity::is_entity_touching_entity(Local_90[iVar0 /*4*/], Local_90[0 /*4*/])) {
						if (gameplay::get_game_timer() >= iLocal_161 && !func_150(12) &&
							!entity::is_entity_at_coord(Local_90[iVar0 /*4*/], vLocal_138, 7f, 7f, 7f, 0, 1, 0) &&
							func_78(player::player_ped_id(), vLocal_138, 1) <
								func_77(Local_90[iVar0 /*4*/], player::player_ped_id(), 1) &&
							!cam::is_sphere_visible(vLocal_138, 7f) &&
							!cam::is_sphere_visible(entity::get_entity_coords(Local_90[iVar0 /*4*/], 1), 7f) &&
							!func_74(vLocal_138, 8f)) {
							fVar5 = func_73(vLocal_138, entity::get_entity_coords(player::player_ped_id(), 1));
							gameplay::clear_area_of_vehicles(vLocal_138, 8f, 0, 0, 0, 0, 0);
							gameplay::clear_area_of_vehicles(
								object::_get_object_offset_from_coords(vLocal_138, fVar5, 0f, -8f, 0f), 8f, 0, 0, 0, 0,
								0);
							entity::set_entity_coords(Local_90[iVar0 /*4*/], vLocal_138, 1, 0, 0, 1);
							vehicle::set_vehicle_on_ground_properly(Local_90[iVar0 /*4*/], 1084227584);
							entity::set_entity_heading(Local_90[iVar0 /*4*/], fVar5);
							vehicle::set_vehicle_engine_on(Local_90[iVar0 /*4*/], 1, 1, 0);
							vehicle::set_vehicle_forward_speed(Local_90[iVar0 /*4*/], 30f);
							func_107(5);
							iLocal_173 = iVar0;
							iLocal_157 = gameplay::get_game_timer() + 5000;
						}
						if (!func_150(12) &&
							entity::is_entity_at_coord(Local_90[iVar0 /*4*/], vLocal_138, 7f, 7f, 7f, 0, 1, 0)) {
							func_107(12);
						}
						if (gameplay::get_game_timer() >= iLocal_161 &&
							entity::is_entity_occluded(Local_90[iVar0 /*4*/]) && func_223(Local_90[iVar1 /*4*/]) &&
							func_77(Local_90[iVar0 /*4*/], Local_90[iVar1 /*4*/], 1) >= 20f) {
							vVar2 = {entity::get_offset_from_entity_given_world_coords(
								Local_90[iVar0 /*4*/], entity::get_entity_coords(player::player_ped_id(), 1))};
							if (vVar2.x < -3.5f || vVar2.x > 3.5f) {
								fVar6 = entity::get_entity_speed(Local_90[iVar0 /*4*/]);
								fVar6 = func_133(fVar6, 20f, 50f);
								entity::set_entity_heading(
									Local_90[iVar0 /*4*/],
									func_73(entity::get_entity_coords(Local_90[iVar0 /*4*/], 1),
											entity::get_entity_coords(player::player_ped_id(), 1)));
								vehicle::set_vehicle_forward_speed(Local_90[iVar0 /*4*/], fVar6);
							}
						}
						if (func_124(iParam0, 3) ||
							func_77(Local_49[iParam0 /*5*/], player::player_ped_id(), 1) <= 15f ||
							func_223(Local_90[iVar1 /*4*/]) &&
								func_77(Local_90[iVar0 /*4*/], Local_90[iVar1 /*4*/], 1) <= 15f) {
							if (func_77(Local_49[iParam0 /*5*/], player::player_ped_id(), 1) <= 15f) {
								if (!ui::does_blip_exist(Local_49[iParam0 /*5*/].f_1)) {
									Local_49[iParam0 /*5*/].f_1 = func_69(Local_49[iParam0 /*5*/], 1, 145);
									func_87(Local_49[iParam0 /*5*/], "GENERIC_INSULT_HIGH", 13);
								}
							}
							Local_49[iParam0 /*5*/].f_3++;
						}
					}
					else {
						if (!ui::does_blip_exist(Local_49[iParam0 /*5*/].f_1)) {
							Local_49[iParam0 /*5*/].f_1 = func_69(Local_49[iParam0 /*5*/], 1, 145);
							func_87(Local_49[iParam0 /*5*/], "GENERIC_INSULT_HIGH", 13);
						}
						Local_49[iParam0 /*5*/].f_3++;
					}
				}
				break;

			case 2:
				if (func_223(Local_90[iVar0 /*4*/])) {
					ped::set_blocking_of_non_temporary_events(Local_49[iParam0 /*5*/], 0);
					ai::task_combat_ped(Local_49[iParam0 /*5*/], player::player_ped_id(), 0, 16);
					Local_49[iParam0 /*5*/].f_3++;
				}
				break;

			case 3:
				if (!ui::does_blip_exist(Local_49[iParam0 /*5*/].f_1)) {
					if (func_77(player::player_ped_id(), Local_49[iParam0 /*5*/], 1) <= 85f) {
						Local_49[iParam0 /*5*/].f_1 = func_69(Local_49[iParam0 /*5*/], 1, 145);
					}
				}
				if (func_150(6) || func_150(8)) {
					if (!ped::is_ped_in_any_vehicle(Local_49[iParam0 /*5*/], 0) &&
						func_77(Local_49[iParam0 /*5*/], player::player_ped_id(), 1) >= 250f) {
						func_132(iParam0, 0);
					}
				}
				else if (func_77(Local_49[iParam0 /*5*/], player::player_ped_id(), 1) >= 250f) {
					func_132(iParam0, 0);
				}
				break;
			}
			break;

		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (func_150(7)) {
				if (!ped::is_ped_in_combat(Local_49[iParam0 /*5*/], player::player_ped_id()) &&
					!func_131(Local_49[iParam0 /*5*/], 579380604, 1)) {
					ai::task_combat_ped(Local_49[iParam0 /*5*/], player::player_ped_id(), 0, 16);
				}
			}
			if (func_150(7)) {
				if (!ped::is_ped_in_any_vehicle(Local_49[iParam0 /*5*/], 0) &&
					func_77(Local_49[iParam0 /*5*/], player::player_ped_id(), 1) >= 250f) {
					func_132(iParam0, 0);
				}
			}
			else if (func_150(2) && func_77(Local_49[iParam0 /*5*/], player::player_ped_id(), 1) >= 250f) {
				func_132(iParam0, 0);
			}
			break;
		}
	}
	else {
		if (func_124(iParam0, 1)) {
			ped::set_ped_can_ragdoll(Local_49[iParam0 /*5*/], 1);
			entity::detach_entity(Local_49[iParam0 /*5*/], 1, 0);
			func_122(iParam0, 1);
		}
		if (!func_124(iParam0, 2)) {
			if (entity::is_entity_visible(Local_49[iParam0 /*5*/])) {
				func_132(iParam0, 0);
			}
			else {
				func_132(iParam0, 1);
			}
		}
	}
}

// Position - 0x7682
int func_131(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = ai::get_script_task_status(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0) {
		return 1;
	}
	else if (!iParam2) {
		if (iVar0 == 2 || iVar0 == 3) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x76C8
void func_132(int iParam0, int iParam1) {
	if (entity::does_entity_exist(Local_49[iParam0 /*5*/])) {
		func_121(&Local_49[iParam0 /*5*/].f_1);
		if (func_223(Local_49[iParam0 /*5*/]) && entity::is_entity_attached(Local_49[iParam0 /*5*/]) &&
			!ped::is_ped_in_any_vehicle(Local_49[iParam0 /*5*/], 1) &&
			!ped::is_ped_sitting_in_any_vehicle(Local_49[iParam0 /*5*/]) &&
			!ped::is_ped_getting_into_a_vehicle(Local_49[iParam0 /*5*/])) {
			entity::detach_entity(Local_49[iParam0 /*5*/], 1, 1);
		}
		if (iParam1) {
			ped::delete_ped(&Local_49[iParam0 /*5*/]);
		}
		else {
			entity::set_ped_as_no_longer_needed(&Local_49[iParam0 /*5*/]);
		}
		Local_49[iParam0 /*5*/].f_2 = 0;
	}
}

// Position - 0x7767
float func_133(float fParam0, float fParam1, float fParam2) {
	if (fParam0 > fParam2) {
		return fParam2;
	}
	else if (fParam0 < fParam1) {
		return fParam1;
	}
	return fParam0;
}

// Position - 0x778E
void func_134() {
	if (func_150(1) || iLocal_155 > 2)
		&&func_135() {
			if (func_223(Local_90[0 /*4*/]) && func_77(player::player_ped_id(), Local_90[0 /*4*/], 1) >= 250f) {
				func_59();
			}
		}
	if (func_135()) {
		if (entity::does_entity_exist(Local_90[0 /*4*/]) && !func_223(Local_90[0 /*4*/])) {
			func_59();
		}
	}
}

// Position - 0x7800
bool func_135() {
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 8) {
		if (func_223(Local_49[iVar1 /*5*/]) && ui::does_blip_exist(Local_49[iVar1 /*5*/].f_1)) {
			iVar0 = 0;
			iVar1 = 8;
		}
		iVar1++;
	}
	return iVar0;
}

// Position - 0x7845
bool func_136() {
	if (!func_100(5)) {
		return true;
	}
	if (func_145()) {
		return true;
	}
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (system::vmag2(entity::get_entity_velocity(player::player_ped_id())) > 1369f && !func_144()) {
			return false;
		}
	}
	if (func_137(100f, 1) != -1) {
		return true;
	}
	return false;
}

// Position - 0x78A7
int func_137(float fParam0, int iParam1) {
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;

	iVar33 = -1;
	fVar34 = fParam0;
	if (player::is_player_playing(player::player_id())) {
		if (func_23(func_143())) {
			iVar36 = func_20();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63) {
				iVar32 = iVar37;
				if (gameplay::is_bit_set(Global_101700.f_17533[iVar32 /*6*/], 2) &&
					!gameplay::is_bit_set(Global_101700.f_17533[iVar32 /*6*/], 3)) {
					func_138(iVar32, &Var0);
					fVar35 = gameplay::get_distance_between_coords(
						entity::get_entity_coords(player::player_ped_id(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34) {
						bVar38 = true;
						if (iParam1) {
							if (iVar36 != Var0.f_26) {
								bVar38 = false;
							}
						}
						if (bVar38) {
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

// Position - 0x795E
void func_138(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0:
		func_139(uParam1, "Abigail1", func_141(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0,
				 "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
		break;

	case 1:
		func_139(uParam1, "Abigail2", func_141(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0,
				 -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
		break;

	case 2:
		func_139(uParam1, "Barry1", func_141(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1,
				 4, 1, 0, 2359, func_140(iParam0), 1, 0);
		break;

	case 3:
		func_139(uParam1, "Barry2", func_141(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1,
				 4, 4, 0, 2359, func_140(iParam0), 1, 1);
		break;

	case 4:
		func_139(uParam1, "Barry3", func_141(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2,
				 0, 2359, func_140(iParam0), 0, 0);
		break;

	case 5:
		func_139(uParam1, "Barry3A", func_141(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0,
				 "", 166, 0, 7, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
		break;

	case 6:
		func_139(uParam1, "Barry3C", func_141(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0,
				 7, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
		break;

	case 7:
		func_139(uParam1, "Barry4", func_141(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0,
				 "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_140(iParam0), 0, 0);
		break;

	case 8:
		func_139(uParam1, "Dreyfuss1", func_141(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106,
				 0, "", 0, 0, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
		break;

	case 9:
		func_139(uParam1, "Epsilon1", func_141(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1,
				 10, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
		break;

	case 10:
		func_139(uParam1, "Epsilon2", func_141(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0,
				 11, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
		break;

	case 11:
		func_139(uParam1, "Epsilon3", func_141(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars",
				 0, 0, 12, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
		break;

	case 12:
		func_139(uParam1, "Epsilon4", func_141(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16,
				 "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
		break;

	case 13:
		func_139(uParam1, "Epsilon5", func_141(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16,
				 "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
		break;

	case 14:
		func_139(uParam1, "Epsilon6", func_141(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0,
				 15, 4, 1, 0, 2359, func_140(iParam0), 0, 1);
		break;

	case 15:
		func_139(uParam1, "Epsilon7", func_141(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16,
				 "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_140(iParam0), 0, 0);
		break;

	case 16:
		func_139(uParam1, "Epsilon8", func_141(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16,
				 "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_140(iParam0), 1, 0);
		break;

	case 17:
		func_139(uParam1, "Extreme1", func_141(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1,
				 18, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
		break;

	case 18:
		func_139(uParam1, "Extreme2", func_141(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171,
				 0, 19, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
		break;

	case 19:
		func_139(uParam1, "Extreme3", func_141(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20,
				 4, 2, 0, 2359, func_140(iParam0), 0, 1);
		break;

	case 20:
		func_139(uParam1, "Extreme4", func_141(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
		break;

	case 21:
		func_139(uParam1, "Fanatic1", func_141(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0,
				 1, -1, 4, 1, 700, 2000, func_140(iParam0), 1, 0);
		break;

	case 22:
		func_139(uParam1, "Fanatic2", func_141(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1,
				 -1, 4, 4, 700, 2000, func_140(iParam0), 1, 0);
		break;

	case 23:
		func_139(uParam1, "Fanatic3", func_141(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1,
				 4, 2, 700, 2000, func_140(iParam0), 0, 1);
		break;

	case 24:
		func_139(uParam1, "Hao1", func_141(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0,
				 "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_140(iParam0), 0, 1);
		break;

	case 25:
		func_139(uParam1, "Hunting1", func_141(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1,
				 26, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
		break;

	case 26:
		func_139(uParam1, "Hunting2", func_141(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0,
				 -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
		break;

	case 27:
		func_139(uParam1, "Josh1", func_141(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns",
				 0, 1, 28, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
		break;

	case 28:
		func_139(uParam1, "Josh2", func_141(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0,
				 29, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
		break;

	case 29:
		func_139(uParam1, "Josh3", func_141(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0,
				 30, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
		break;

	case 30:
		func_139(uParam1, "Josh4", func_141(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1,
				 4, 4, 0, 2359, func_140(iParam0), 1, 0);
		break;

	case 31:
		func_139(uParam1, "Maude1", func_141(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0,
				 "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
		break;

	case 32:
		func_139(uParam1, "Minute1", func_141(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33,
				 4, 4, 0, 2359, func_140(iParam0), 0, 1);
		break;

	case 33:
		func_139(uParam1, "Minute2", func_141(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4,
				 0, 2359, func_140(iParam0), 0, 1);
		break;

	case 34:
		func_139(uParam1, "Minute3", func_141(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0,
				 -1, 4, 4, 0, 2359, func_140(iParam0), 0, 1);
		break;

	case 35:
		func_139(uParam1, "MrsPhilips1", func_141(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0,
				 "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
		break;

	case 36:
		func_139(uParam1, "MrsPhilips2", func_141(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0,
				 2359, func_140(iParam0), 0, 0);
		break;

	case 37:
		func_139(uParam1, "Nigel1", func_141(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1,
				 -1, 1, 4, 0, 2359, func_140(iParam0), 1, 0);
		break;

	case 38:
		func_139(uParam1, "Nigel1A", func_141(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0,
				 "", 0, 0, 42, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
		break;

	case 39:
		func_139(uParam1, "Nigel1B", func_141(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
		break;

	case 40:
		func_139(uParam1, "Nigel1C", func_141(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
		break;

	case 41:
		func_139(uParam1, "Nigel1D", func_141(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_140(iParam0), 1, 1);
		break;

	case 42:
		func_139(uParam1, "Nigel2", func_141(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0,
				 43, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
		break;

	case 43:
		func_139(uParam1, "Nigel3", func_141(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16,
				 "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 1);
		break;

	case 44:
		func_139(uParam1, "Omega1", func_141(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0,
				 "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
		break;

	case 45:
		func_139(uParam1, "Omega2", func_141(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
		break;

	case 46:
		func_139(uParam1, "Paparazzo1", func_141(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1,
				 47, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
		break;

	case 47:
		func_139(uParam1, "Paparazzo2", func_141(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0,
				 0, 48, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
		break;

	case 48:
		func_139(uParam1, "Paparazzo3", func_141(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183,
				 1, -1, 2, 2, 0, 2359, func_140(iParam0), 0, 0);
		break;

	case 49:
		func_139(uParam1, "Paparazzo3A", func_141(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102,
				 0, "", 0, 0, 51, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
		break;

	case 50:
		func_139(uParam1, "Paparazzo3B", func_141(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "",
				 0, 0, 51, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
		break;

	case 51:
		func_139(uParam1, "Paparazzo4", func_141(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1,
				 -1, 4, 2, 0, 2359, func_140(iParam0), 0, 0);
		break;

	case 52:
		func_139(uParam1, "Rampage1", func_141(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4,
				 4, 0, 2359, func_140(iParam0), 0, 0);
		break;

	case 54:
		func_139(uParam1, "Rampage3", func_141(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55,
				 4, 4, 0, 2359, func_140(iParam0), 1, 0);
		break;

	case 55:
		func_139(uParam1, "Rampage4", func_141(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4,
				 4, 0, 2359, func_140(iParam0), 1, 0);
		break;

	case 56:
		func_139(uParam1, "Rampage5", func_141(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0,
				 53, 4, 4, 0, 2359, func_140(iParam0), 0, 0);
		break;

	case 53:
		func_139(uParam1, "Rampage2", func_141(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0,
				 "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_140(iParam0), 1, 0);
		break;

	case 57:
		func_139(uParam1, "TheLastOne", func_141(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "",
				 0, 1, -1, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
		break;

	case 58:
		func_139(uParam1, "Tonya1", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0,
				 "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
		break;

	case 59:
		func_139(uParam1, "Tonya2", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48,
				 "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
		break;

	case 60:
		func_139(uParam1, "Tonya3", func_141(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0,
				 2359, func_140(iParam0), 0, 1);
		break;

	case 61:
		func_139(uParam1, "Tonya4", func_141(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359,
				 func_140(iParam0), 0, 1);
		break;

	case 62:
		func_139(uParam1, "Tonya5", func_141(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_140(iParam0), 0, 1);
		break;

	default: break;
	}
}

// Position - 0x8B14
void func_139(var *uParam0, char *sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7,
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

// Position - 0x8BA5
int func_140(int iParam0) {
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

// Position - 0x8EEB
struct<2> func_141(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = {func_142(iParam0)};
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x8F22
struct<2>
func_142(int iParam0) {
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

//Position - 0x936E
int func_143()
{
	func_21();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x9387
int func_144() {
	if (gameplay::is_pc_version()) {
		if (gameplay::_0xD10282B6E3751BA0() == 1f) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x93A4
bool func_145() {
	if (func_148() && !func_144()) {
		return true;
	}
	if (func_147() && func_146()) {
		return true;
	}
	return false;
}

// Position - 0x93D6
bool func_146() { return Global_101418 > 0; }

// Position - 0x93E4
int func_147() {
	if (Global_88746 != -1) {
		return 1;
	}
	return 0;
}

// Position - 0x93F9
int func_148() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 20);
	}
	return 0;
}

// Position - 0x941F
bool func_149() {
	if (Global_101689 == func_29() && gameplay::get_random_event_flag() && Global_101690) {
		return true;
	}
	return false;
}

// Position - 0x944A
bool func_150(int iParam0) { return gameplay::is_bit_set(iLocal_156, iParam0); }

// Position - 0x945A
void func_151(int iParam0) {
	if (iParam0 == -1) {
		iParam0 = func_29();
	}
	if (iParam0 == -1) {
		return;
	}
	func_153(iParam0);
	gameplay::_0x65D2EBB47E1CEC21(0);
	gameplay::set_random_event_flag(1);
	Global_101686 = 0;
	func_152();
}

// Position - 0x9490
void func_152() {
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			vehicle::set_vehicle_model_is_suppressed(
				entity::get_entity_model(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0)), 1);
		}
		ped::set_ped_config_flag(player::player_ped_id(), 32, 0);
	}
}

// Position - 0x94CD
void func_153(int iParam0) { Global_101689 = iParam0; }

// Position - 0x94DB
bool func_154(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;

	if (!Global_138924) {
		return false;
	}
	if (iParam3 == -1) {
		iParam3 = func_29();
	}
	if (iParam3 == -1) {
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32) {
		if (!func_46()) {
			return false;
		}
	}
	vLocal_43 = {vParam0};
	iVar0 = 0;
	if (!iVar0) {
		if (player::is_player_playing(player::player_id()) && !ped::is_ped_injured(player::player_ped_id())) {
			vVar1 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			if (system::vmag2(entity::get_entity_velocity(player::player_ped_id())) > 1369f && !func_144()) {
				return false;
			}
		}
		if (!Global_101700.f_8044) {
			return false;
		}
		if (func_5(0)) {
			return false;
		}
		if (func_145()) {
			return false;
		}
		if (func_195()) {
			return false;
		}
		if (Global_101689 != -1) {
			return false;
		}
		if (func_23(func_143())) {
			if (func_137(100f, 1) != -1) {
				return false;
			}
		}
		if (player::is_player_playing(player::player_id()) && !iParam6) {
			if (vVar1.z - vLocal_43.z > 50f) {
				return false;
			}
		}
		if (!func_194(iParam3)) {
			return false;
		}
		if (func_23(func_143())) {
			if (func_193(func_143()) == 4 || func_193(func_143()) == 5) {
				return false;
			}
		}
		if (func_23(func_143())) {
			if (!func_192(iParam3, iParam4, 145)) {
				return false;
			}
		}
		if (!func_191(Global_101700.f_23954.f_43[iParam3])) {
			return false;
		}
		if (gameplay::get_game_timer() - Global_101691 < 150000) {
			if (iParam3 != 30) {
				return false;
			}
		}
		if (func_189()) {
			return false;
		}
		if (gameplay::get_mission_flag()) {
			return false;
		}
		if (gameplay::get_random_event_flag()) {
			return false;
		}
		if (!func_179(4)) {
			return false;
		}
		if (!func_100(5)) {
			return false;
		}
		if (func_178(iParam3, iParam4) && !iParam5) {
			return false;
		}
		if (Global_3 && iParam3 != 10) {
			return false;
		}
		if (interior::is_valid_interior(interior::get_interior_from_entity(player::player_ped_id()))) {
			if (interior::get_interior_from_entity(player::player_ped_id()) ==
					interior::get_interior_at_coords(377.153f, -717.567f, 10.0536f) ||
				interior::get_interior_from_entity(player::player_ped_id()) ==
					interior::get_interior_at_coords(320.9934f, 265.2515f, 82.1221f) ||
				interior::get_interior_from_entity(player::player_ped_id()) ==
					interior::get_interior_at_coords(-1425.564f, -244.3f, 15.8053f)) {
				return false;
			}
		}
		if (iParam3 == 9 && (iParam4 == 2 || iParam4 == 5) && !func_178(0, 0)) {
			return false;
		}
		if (Global_25336) {
			return false;
		}
		if (func_194(30) && !func_178(30, 0)) {
			if (iParam3 != 30) {
				if (system::vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f) {
					return false;
				}
			}
		}
		if (func_23(func_143())) {
			iVar4 = 0;
			while (iVar4 < 3) {
				vVar5 = {Global_101700.f_2095.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101700.f_2095.f_539.f_1524[iVar4];
				if (func_177(iVar8)) {
					if (func_155(iVar4)) {
						if (!func_83(vVar5, 0f, 0f, 0f, 0)) {
							if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 0), vVar5) <
								210f * 210f) {
								if (func_143() != iVar4) {
									return false;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return true;
}

// Position - 0x9875
bool func_155(int iParam0) {
	int iVar0;

	iVar0 = Global_101700.f_2095.f_539.f_1524[iParam0];
	return func_156(iVar0);
}

// Position - 0x9896
int func_156(int iParam0) { return func_157(iParam0, 1); }

// Position - 0x98A5
int func_157(int iParam0, int iParam1) {
	int *iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_177(iParam0)) {
		return 0;
	}
	func_158(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (iVar5 > 0 || iVar4 > 0 || iVar3 > 0 || iVar2 >= iParam1) {
		return 1;
	}
	return 0;
}

// Position - 0x98F8
void func_158(int iParam0, int *iParam1, int *iParam2, int *iParam3, int *iParam4, int *iParam5, int *iParam6) {
	func_159(func_170(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

// Position - 0x9916
void func_159(int iParam0, int iParam1, int *iParam2, int *iParam3, int *iParam4, int *iParam5, int *iParam6,
			  int *iParam7) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_169(iParam0, iParam1)) {
		iVar0 = func_168(iParam1);
		iVar1 = func_166(iParam0);
		iVar2 = func_166(iParam0) - func_166(iParam1);
		iVar3 = func_168(iParam0) - func_168(iParam1);
		iVar4 = func_165(iParam0) - func_165(iParam1);
		iVar5 = func_164(iParam0) - func_164(iParam1);
		iVar6 = func_163(iParam0) - func_163(iParam1);
		iVar7 = func_162(iParam0) - func_162(iParam1);
	}
	else {
		iVar0 = func_168(iParam0);
		iVar1 = func_166(iParam1);
		iVar2 = func_166(iParam1) - func_166(iParam0);
		iVar3 = func_168(iParam1) - func_168(iParam0);
		iVar4 = func_165(iParam1) - func_165(iParam0);
		iVar5 = func_164(iParam1) - func_164(iParam0);
		iVar6 = func_163(iParam1) - func_163(iParam0);
		iVar7 = func_162(iParam1) - func_162(iParam0);
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
		iVar4 += func_161(iVar0, iVar1);
		iVar3--;
		iVar0 = system::round(func_160(system::to_float(iVar0 + 1), 0f, 12f));
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

// Position - 0x9B17
float func_160(float fParam0, float fParam1, float fParam2) {
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

// Position - 0x9B59
int func_161(int iParam0, int iParam1) {
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

// Position - 0x9BFB
int func_162(int iParam0) { return system::shift_right(iParam0, 20) & 63; }

// Position - 0x9C0E
int func_163(int iParam0) { return system::shift_right(iParam0, 14) & 63; }

// Position - 0x9C21
int func_164(int iParam0) { return system::shift_right(iParam0, 9) & 31; }

// Position - 0x9C34
int func_165(int iParam0) { return system::shift_right(iParam0, 4) & 31; }

// Position - 0x9C46
int func_166(int iParam0) {
	return (system::shift_right(iParam0, 26) & 31) * func_167(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x9C6B
int func_167(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x9C82
int func_168(int iParam0) { return iParam0 & 15; }

// Position - 0x9C8F
bool func_169(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (!func_177(iParam1) || !func_177(iParam0)) {
		return true;
	}
	iVar0 = func_166(iParam0);
	iVar1 = func_166(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_168(iParam0);
	iVar1 = func_168(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_165(iParam0);
	iVar1 = func_165(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_164(iParam0);
	iVar1 = func_164(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_163(iParam0);
	iVar1 = func_163(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_162(iParam0);
	iVar1 = func_162(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	return false;
}

// Position - 0x9D9B
int func_170() {
	int *iVar0;

	func_176(&iVar0, time::get_clock_seconds());
	func_175(&iVar0, time::get_clock_minutes());
	func_174(&iVar0, time::get_clock_hours());
	func_173(&iVar0, time::get_clock_day_of_month());
	func_172(&iVar0, time::get_clock_month());
	func_171(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0x9DE1
void func_171(int *iParam0, int iParam1) {
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

// Position - 0x9E67
void func_172(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*uParam0 -= (*uParam0 & 15);
	*uParam0 |= iParam1;
}

// Position - 0x9E9A
void func_173(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_168(*uParam0);
	iVar1 = func_166(*uParam0);
	if (iParam1 < 1 || iParam1 > func_161(iVar0, iVar1)) {
		return;
	}
	*uParam0 -= (*uParam0 & 496);
	*uParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0x9EEB
void func_174(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*uParam0 -= (*uParam0 & 15872);
	*uParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0x9F25
void func_175(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 1032192);
	*uParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0x9F60
void func_176(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 66060288);
	*uParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0x9F9C
bool func_177(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15) {
		return false;
	}
	iVar0 = func_162(iParam0);
	if (iVar0 < 0 || iVar0 >= 60) {
		return false;
	}
	iVar1 = func_163(iParam0);
	if (iVar1 < 0 || iVar1 >= 60) {
		return false;
	}
	iVar2 = func_164(iParam0);
	if (iVar2 < 0 || iVar2 > 23) {
		return false;
	}
	iVar3 = func_166(iParam0);
	if (iVar3 <= 0 || iVar3 > 2043 || iVar3 < 1979) {
		return false;
	}
	iVar4 = func_168(iParam0);
	if (iVar4 < 0 || iVar4 > 11) {
		return false;
	}
	iVar5 = func_165(iParam0);
	if (iVar5 < 1 || iVar5 > func_161(iVar4, iVar3)) {
		return false;
	}
	return true;
}

// Position - 0xA078
int func_178(int iParam0, int iParam1) {
	if (gameplay::is_bit_set(Global_101700.f_23954.f_8[iParam0], iParam1)) {
		return 1;
	}
	return 0;
}

// Position - 0xA09B
int func_179(int iParam0) {
	int iVar0;

	if (player::is_player_playing(player::player_id())) {
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				iVar0 = func_143();
				if (!func_23(iVar0)) {
					return 0;
				}
				switch (iParam0) {
				case 9:
				case 0:
					if (!player::is_player_ready_for_cutscene(player::player_id()) ||
						entity::is_entity_in_air(player::player_ped_id()) ||
						ped::is_ped_getting_into_a_vehicle(player::player_ped_id()) ||
						ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						player::is_player_climbing(player::player_id()) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_188() || Global_100747 ||
						Global_25192 || func_187() || func_186(8, -1) || func_185() || func_184() || func_183() ||
						func_182() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 1:
					if (player::is_player_being_arrested(player::player_id(), 1) || func_188() || Global_25192 ||
						func_187() || func_186(8, -1) || func_183() || func_185() || func_184() || func_182() ||
						Global_101700.f_6647.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 2:
					if (!player::is_player_ready_for_cutscene(player::player_id()) ||
						entity::is_entity_in_air(player::player_ped_id()) ||
						ped::is_ped_getting_into_a_vehicle(player::player_ped_id()) ||
						ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						player::is_player_climbing(player::player_id()) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_188() || Global_100747 ||
						Global_25192 || func_187() || func_186(8, -1) || func_183() || func_185() || func_184() ||
						func_182() || Global_101700.f_6647.f_919[iVar0] == 5 || Global_36328 != -1) {
						return 0;
					}
					break;

				case 3:
					if (ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_188() || Global_100747 ||
						Global_25192 || func_187() || func_186(8, -1) || func_185() || func_184() || func_182() ||
						Global_101700.f_6647.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 4:
					if (func_188() || player::get_player_wanted_level(player::player_id()) > 0 || func_186(8, -1) ||
						func_182() || func_181() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 5:
					if (func_186(8, -1) || func_185() || func_184() || func_181() || func_180()) {
						return 0;
					}
					if (streaming::is_player_switch_in_progress() && streaming::get_player_switch_type() != 3 &&
						streaming::get_player_switch_state() < 8) {
						return 0;
					}
					break;

				case 6:
					if (entity::does_entity_exist(player::player_ped_id())) {
						if (ped::is_ped_in_combat(player::player_ped_id(), 0) ||
							player::get_player_wanted_level(player::player_id()) > 0 ||
							entity::is_entity_in_air(player::player_ped_id()) ||
							ped::is_ped_ragdoll(player::player_ped_id()) ||
							ped::is_ped_falling(player::player_ped_id()) ||
							player::is_player_being_arrested(player::player_id(), 1) ||
							player::is_player_climbing(player::player_id()) || func_188() || Global_25192 ||
							func_187() || func_186(8, -1) || func_184() || func_183() || func_182() ||
							Global_101700.f_6647.f_919[iVar0] == 5) {
							return 0;
						}
					}
					break;

				case 7:
					if (ped::is_ped_in_combat(player::player_ped_id(), 0) ||
						!player::is_player_control_on(player::player_id()) ||
						!player::is_player_ready_for_cutscene(player::player_id()) || !cam::is_screen_faded_in() ||
						entity::is_entity_in_air(player::player_ped_id()) ||
						ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) || func_188() || func_184() ||
						Global_100747 || Global_25192 || func_187() || Global_36912 || func_186(8, -1) || func_183() ||
						func_181() || func_182() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 8:
					if (ped::is_ped_in_combat(player::player_ped_id(), 0) ||
						!player::is_player_control_on(player::player_id()) ||
						!player::is_player_ready_for_cutscene(player::player_id()) || !cam::is_screen_faded_in() ||
						player::is_player_wanted_level_greater(player::player_id(), 0) ||
						entity::is_entity_in_air(player::player_ped_id()) ||
						ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
						ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						ped::is_ped_swimming(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						player::is_player_climbing(player::player_id()) || func_188() || Global_100747 ||
						Global_25192 || func_187() || func_186(8, -1) || func_183() || func_181() || func_185() ||
						func_184() || func_182()) {
						return 0;
					}
					break;
				}
			}
			else {
				return 0;
			}
		}
		else {
			return 0;
		}
	}
	else {
		return 0;
	}
	return 1;
}

// Position - 0xA7B8
var func_180() { return Global_91530.f_1; }

// Position - 0xA7C6
int func_181() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 13);
	}
	return 0;
}

// Position - 0xA7EC
int func_182() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("player_timetable_scene")) > 0) {
		return 1;
	}
	return 0;
}

// Position - 0xA806
int func_183() {
	if (Global_69962) {
		return 1;
	}
	else if (Global_55816 && !Global_55822) {
		return 1;
	}
	return 0;
}

// Position - 0xA830
bool func_184() { return Global_91543.f_304 > 0; }

// Position - 0xA841
bool func_185() { return Global_91543.f_303 > 0; }

// Position - 0xA852
var func_186(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0xA88D
var func_187() { return Global_1315233; }

// Position - 0xA899
int func_188() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0xA8B5
bool func_189() {
	func_190();
	if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2) {
		return true;
	}
	return false;
}

// Position - 0xA8DD
void func_190() {
	if (func_22(14)) {
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
		Global_14443 = func_143();
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

// Position - 0xA97F
int func_191(int iParam0) { return func_169(func_170(), iParam0); }

// Position - 0xA991
int func_192(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_143();
	if (iParam2 != 145 && (iParam2 == 0 || iParam2 == 1 || iParam2 == 2)) {
		iVar1 = iParam2;
	}
	switch (iParam0) {
	case 18:
		if (iVar1 == 2) {
			iVar0 = 1;
		}
		break;

	case 19:
		if (iVar1 != 2) {
			iVar0 = 1;
		}
		break;

	case 20:
		if (iVar1 != 1) {
			iVar0 = 1;
		}
		break;

	case 28:
		if (iVar1 != 2) {
			iVar0 = 1;
		}
		break;

	case 13:
		if (iVar1 == 0) {
			if (iParam1 == 2) {
				iVar0 = 0;
			}
			else {
				iVar0 = 1;
			}
		}
		else {
			iVar0 = 1;
		}
		break;

	case 22:
		if (iParam1 == 2 || iVar1 != 2) {
			iVar0 = 1;
		}
		break;

	case 30:
		if (iVar1 != 2) {
			iVar0 = 1;
		}
		break;

	default: iVar0 = 1; break;
	}
	return iVar0;
}

// Position - 0xAA75
int func_193(int iParam0) {
	if (!func_23(iParam0)) {
		return 7;
	}
	return Global_101700.f_6647.f_919[iParam0];
}

// Position - 0xAA99
int func_194(int iParam0) {
	int iVar0;
	var uVar1;

	if (iParam0 == 31 || iParam0 == 32) {
		if (!func_46()) {
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31) {
		uVar1 = gameplay::is_bit_set(Global_101700.f_23954, iVar0);
	}
	else {
		iVar0 -= 31;
		uVar1 = gameplay::is_bit_set(Global_101700.f_23954.f_1, iVar0);
	}
	return uVar1;
}

// Position - 0xAAF7
bool func_195() {
	int iVar0;

	if (Global_25340) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
			if (vehicle::is_vehicle_driveable(iVar0, 0)) {
				if (!ped::is_ped_injured(vehicle::get_ped_in_vehicle_seat(iVar0, 0, 0))) {
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0xAB3B
void func_196(int iParam0, int iParam1) {
	func_222();
	func_221();
	func_118(0);
	func_219(1, 1, 1, 0);
	func_217(0);
	graphics::clear_timecycle_modifier();
	ui::display_radar(1);
	pathfind::set_ignore_no_gps_flag(0);
	func_216();
	func_215();
	func_214();
	if (func_223(Local_90[0 /*4*/])) {
		vehicle::set_vehicle_tyres_can_burst(Local_90[0 /*4*/], 1);
	}
	func_213(iParam1);
	func_212(iParam1);
	ped::remove_relationship_group(iLocal_171);
	func_210();
	func_208();
	func_109(0);
	cam::destroy_all_cams(0);
	cam::render_script_cams(0, 0, 3000, 1, 0, 0);
	vehicle::set_random_trains(1);
	if (iParam0) {
		func_197(-1);
		script::terminate_this_thread();
	}
}

// Position - 0xABD0
void func_197(int iParam0) {
	char cVar0[64];

	if (iParam0 == -1) {
		iParam0 = func_29();
	}
	if (iParam0 == -1) {
		return;
	}
	if (func_149()) {
		func_201(iParam0);
		ui::set_mission_name(0, 0);
		Global_101691 = gameplay::get_game_timer();
		func_200(30000);
		StringCopy(&cVar0, func_199(Global_101689, 1), 64);
		if (func_28(Global_101689) > 0) {
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101688, 64);
		}
		stats::_0x71862B1D855F32E1(&cVar0, Global_101686, gameplay::get_game_timer() - Global_101687, 0);
	}
	else if (gameplay::is_bit_set(Global_101696, 0) && Global_101700.f_23954.f_2 < 3) {
		gameplay::clear_bit(&Global_101696, 0);
	}
	func_198(&Global_25249);
	Global_101690 = 0;
	func_153(-1);
}

// Position - 0xAC85
void func_198(int *iParam0) {
	if (*iParam0 == -1) {
		return;
	}
	if (*iParam0 != Global_35743) {
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_35742 = 0;
	Global_35744 = 0;
	Global_35781 = 15;
	Global_55819 = 0;
	Global_55820 = 0;
}

// Position - 0xACC2
char *func_199(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: return "RE_ACCIDENT";

	case 1: return "RE_ATMROBBERY";

	case 2: return "RE_BUSTOUR";

	case 3: return "RE_DOMESTIC";

	case 4: return "RE_GETAWAYDRIVER";

	case 5: return "RE_SHOPROBBERY";

	case 6: return "RE_SNATCHED";

	case 7: return "RE_LURED";

	case 8: return "RE_BIKETHIEFSTAMP";

	case 9: return "RE_SECURITYVAN";

	case 10: return "RE_PAPARAZZI";

	case 11: return "RE_CHASETHIEVES";

	case 12: return "RE_DEALGONEWRONG";

	case 13: return "RE_HITCHLIFT";

	case 14: return "RE_STAG";

	case 15: return "RE_ARREST";

	case 16: return "RE_CRASHRESCUE";

	case 17: return "RE_CARTHEFT";

	case 18: return "RE_CULTSHOOTOUT";

	case 19: return "RE_GANGFIGHT";

	case 20: return "RE_GANGINTIMIDATION";

	case 21: return "RE_PRISONVANBREAK";

	case 22: return "RE_PRISONERLIFT";

	case 23: return "RE_ABANDONEDCAR";

	case 24: return "RE_BURIAL";

	case 25: return "RE_MUGGING";

	case 26: return "RE_BIKETHIEF";

	case 27: return "RE_DRUNKDRIVER";

	case 28: return "RE_HOMELANDSECURITY";

	case 29: return "RE_BORDERPATROL";

	case 30: return "RE_SIMEONYETARIAN";

	case 31: return "RE_DUEL";

	case 32: return "RE_SEAPLANE";

	case 33: return "RE_MONKEYPHOTO";

	case -1: return "RE_NONE";
	}
	if (!iParam1) {
	}
	return "UNKNOWN";
}

// Position - 0xAF0B
void func_200(int iParam0) { Global_36332 = gameplay::get_game_timer() + iParam0; }

// Position - 0xAF1D
void func_201(int iParam0) { func_202(iParam0, 0, func_207(iParam0)); }

// Position - 0xAF32
void func_202(int iParam0, int iParam1, int iParam2) {
	int *iVar0;
	struct<16> Var1;

	iVar0 = func_170();
	func_205(&iVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_204(iParam0, &iVar0);
	Var1 = {func_203(&iVar0)};
}

// Position - 0xAF61
struct<16> func_203(int *iParam0) {
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, "", 64);
	iVar16 = func_164(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_163(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_162(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_165(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_168(*iParam0);
	if (iVar16 < 9) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_166(*iParam0), 64);
	return Var0;
}

//Position - 0xB031
void func_204(int iParam0, int* iParam1)
{
	Global_101700.f_23954.f_43[iParam0] = *iParam1;
}

// Position - 0xB049
void func_205(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_166(*iParam0);
	iVar1 = func_168(*iParam0);
	iVar2 = func_165(*iParam0);
	iVar3 = func_164(*iParam0);
	iVar4 = func_163(*iParam0);
	iVar5 = func_162(*iParam0);
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
	iVar6 = func_161(iVar1, iVar0);
	while (iVar2 > iVar6) {
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11) {
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_161(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11) {
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_206(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

// Position - 0xB1CB
void func_206(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_176(iParam0, iParam1);
	func_175(iParam0, iParam2);
	func_174(iParam0, iParam3);
	func_172(iParam0, iParam5);
	func_173(iParam0, iParam4);
	func_171(iParam0, iParam6);
}

// Position - 0xB203
int func_207(int iParam0) {
	int iVar0;

	switch (iParam0) {
	case 23: iVar0 = 30; break;

	case 0: iVar0 = 30; break;

	case 15: iVar0 = 30; break;

	case 1: iVar0 = 200; break;

	case 26: iVar0 = 30; break;

	case 8: iVar0 = 30; break;

	case 29: iVar0 = 30; break;

	case 24: iVar0 = 30; break;

	case 2: iVar0 = 0; break;

	case 17: iVar0 = 30; break;

	case 11: iVar0 = 30; break;

	case 16: iVar0 = 30; break;

	case 18: iVar0 = 30; break;

	case 12: iVar0 = 120; break;

	case 3: iVar0 = 60; break;

	case 27: iVar0 = 60; break;

	case 19: iVar0 = 30; break;

	case 20: iVar0 = 30; break;

	case 4: iVar0 = 60; break;

	case 28: iVar0 = 30; break;

	case 13: iVar0 = 35; break;

	case 7: iVar0 = 30; break;

	case 25: iVar0 = 40; break;

	case 10: iVar0 = 30; break;

	case 22: iVar0 = 30; break;

	case 21: iVar0 = 30; break;

	case 5: iVar0 = 30; break;

	case 30: iVar0 = 60; break;

	case 9: iVar0 = 60; break;

	case 6: iVar0 = 40; break;

	case 14: iVar0 = 40; break;
	}
	return iVar0;
}

// Position - 0xB3A6
void func_208() {
	Global_14611 = 0;
	func_209();
}

// Position - 0xB3B6
void func_209() {
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

// Position - 0xB40D
void func_210() {
	Global_14611 = 0;
	func_211();
}

// Position - 0xB41D
void func_211() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
	}
}

// Position - 0xB43E
void func_212(bool bParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8) {
		func_127(iVar0, bParam0);
		iVar0++;
	}
}

// Position - 0xB461
void func_213(bool bParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8) {
		func_132(iVar0, bParam0);
		iVar0++;
	}
}

// Position - 0xB484
void func_214() {}

// Position - 0xB48C
void func_215() {}

// Position - 0xB494
void func_216() {}

// Position - 0xB49C
void func_217(int iParam0) {
	if (iParam0) {
		player::set_player_wanted_level(player::player_id(), 0, 0);
		player::set_max_wanted_level(0);
		player::set_player_wanted_level_now(player::player_id(), 0);
		player::set_wanted_level_multiplier(0f);
		player::set_dispatch_cops_for_player(player::player_id(), 0);
		ped::set_create_random_cops(0);
		gameplay::enable_dispatch_service(3, 0);
		gameplay::enable_dispatch_service(1, 0);
		gameplay::enable_dispatch_service(8, 0);
		gameplay::enable_dispatch_service(2, 0);
		gameplay::enable_dispatch_service(6, 0);
		gameplay::enable_dispatch_service(4, 0);
		gameplay::enable_dispatch_service(12, 0);
		gameplay::enable_dispatch_service(5, 0);
		func_218(9, 1);
		func_218(8, 1);
	}
	else {
		player::set_max_wanted_level(5);
		player::set_wanted_level_multiplier(1f);
		player::set_dispatch_cops_for_player(player::player_id(), 1);
		ped::set_create_random_cops(1);
		gameplay::enable_dispatch_service(3, 1);
		gameplay::enable_dispatch_service(1, 1);
		gameplay::enable_dispatch_service(8, 1);
		gameplay::enable_dispatch_service(2, 1);
		gameplay::enable_dispatch_service(6, 1);
		gameplay::enable_dispatch_service(4, 1);
		gameplay::enable_dispatch_service(12, 1);
		gameplay::enable_dispatch_service(5, 1);
		func_218(9, 0);
		func_218(8, 0);
	}
}

// Position - 0xB56F
void func_218(int iParam0, int iParam1) {
	if (iParam1) {
		gameplay::set_bit(&Global_25434, iParam0);
	}
	else {
		gameplay::clear_bit(&Global_25434, iParam0);
	}
}

// Position - 0xB591
void func_219(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0) {
		func_208();
	}
	if (iParam1) {
		if (!func_220() || iParam0 && !iParam3) {
			ui::clear_prints();
		}
		ui::clear_reminder_message();
	}
	if (iParam2) {
		ui::clear_help(1);
	}
}

// Position - 0xB5D1
int func_220() {
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return 1;
	}
	return 0;
}

// Position - 0xB5F3
void func_221() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8) {
		func_121(&Local_49[iVar0 /*5*/].f_1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8) {
		func_121(&Local_90[iVar0 /*4*/].f_1);
		iVar0++;
	}
}

// Position - 0xB639
void func_222() {
	iLocal_47 = 0;
	iLocal_48 = 0;
	iLocal_155 = 0;
	iLocal_156 = 0;
}

// Position - 0xB64D
bool func_223(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}
