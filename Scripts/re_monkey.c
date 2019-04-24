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
float fLocal_21 = 0f;
var uLocal_22 = 0;
var uLocal_23 = 0;
var uLocal_24 = 0;
float fLocal_25 = 0f;
float fLocal_26 = 0f;
var uLocal_27 = 0;
var uLocal_28 = 0;
var uLocal_29 = 0;
float fLocal_30 = 0f;
float fLocal_31 = 0f;
float fLocal_32 = 0f;
var uLocal_33 = 0;
var uLocal_34 = 0;
int iLocal_35 = 0;
var uLocal_36 = 0;
var uLocal_37 = 0;
var uLocal_38 = 0;
var uLocal_39 = 0;
int iLocal_40 = 0;
int iLocal_41 = 0;
int iLocal_42 = 0;
int iLocal_43 = 0;
vector3 vLocal_44 = {0f, 0f, 0f};
int iLocal_47 = 0;
int iLocal_48 = 0;
int iLocal_49 = 0;
int iLocal_50 = 0;
vector3 vLocal_51 = {0f, 0f, 0f};
float fLocal_54 = 0f;
int iLocal_55 = 0;
int iLocal_56 = 0;
int iLocal_57 = 0;
float fLocal_58 = 0f;
int iLocal_59 = 0;
int iLocal_60 = 0;
vector3 vLocal_61 = {0f, 0f, 0f};
var uLocal_64[4] = {0, 0, 0, 0};
vector3 vLocal_69 = {0f, 0f, 0f};
int iLocal_72 = 0;
char *sLocal_73 = NULL;
char *sLocal_74 = NULL;
char *sLocal_75 = NULL;
char *sLocal_76 = NULL;
char *sLocal_77 = NULL;
vector3 vLocal_78 = {0f, 0f, 0f};
int iLocal_81 = 0;
int iLocal_82 = 0;
int iLocal_83 = 0;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	vLocal_51 = {-336.6146f, -93.66808f, 46.0005f};
	fLocal_54 = 256.1257f;
	fLocal_58 = 0f;
	vLocal_69 = {-334.8087f, -85.713f, 47.4504f};
	sLocal_73 = "scr_lamgraff_paint_spray";
	sLocal_74 = "switch@franklin@lamar_tagging_wall";
	sLocal_75 = "lamar_tagging_wall_loop_lamar";
	sLocal_76 = "lamar_tagging_wall_exit_lamar";
	sLocal_77 = "lamar_tagging_exit_loop_lamar";
	vLocal_78 = {0f, 0f, 0f};
	if (player::has_force_cleanup_occurred(11)) {
		func_144();
	}
	func_79(ScriptParam_0.f_1[0 /*3*/]);
	while (true) {
		func_65();
		switch (iLocal_47) {
		case 0:
			if (func_49()) {
				func_46();
			}
			break;

		case 1:
			if (func_1()) {
				func_46();
			}
			break;
		}
		system::wait(0);
	}
}

// Position - 0x119
bool func_1() {
	if (iLocal_48 == 0) {
		return true;
	}
	else if (iLocal_48 == 1) {
		func_45();
		if (func_44(player::player_ped_id())) {
			func_43(player::player_ped_id(), -347.4067f, -93.5801f, 44.6639f, 306.0178f);
		}
		cam::set_gameplay_cam_relative_heading(0f);
		cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
		cam::do_screen_fade_in(250);
		return true;
	}
	else if (iLocal_48 == 2) {
		switch (iLocal_49) {
		case 0:
			func_35(-899711929);
			func_30();
			func_5(-1, 0);
			func_2();
			func_144();
			break;
		}
	}
	return false;
}

// Position - 0x1AE
void func_2() { func_3(); }

// Position - 0x1BB
int func_3() {
	if (func_4(0)) {
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

// Position - 0x206
bool func_4(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x231
void func_5(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		iParam0 = func_28();
	}
	if (iParam0 == -1) {
		return;
	}
	if (iParam1 <= func_27(iParam0)) {
		func_26(iParam0, iParam1);
		if (!func_25(51)) {
			func_16("RE_REWARD", 1, 0, 4000, 10000, func_19(), 0, 138, 0);
			func_15(51);
		}
		if (func_14(iParam0)) {
			Global_101700.f_23954.f_2 = 3;
		}
		if (func_13(iParam0, iParam1) != 322) {
			func_7(func_13(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_101688 = iParam1;
		if (Global_101686 == 0) {
			if (Global_101689 == 1 || Global_101689 == 5 || Global_101689 == 11 || Global_101689 == 25) {
				func_6(2);
			}
			else if (Global_101689 == 26 || Global_101689 == 8 || Global_101689 == 17) {
				func_6(7);
			}
			else {
				func_6(1);
			}
		}
	}
}

// Position - 0x334
void func_6(int iParam0) { Global_101686 = iParam0; }

// Position - 0x342
void func_7(int iParam0, var uParam1, var uParam2) {
	bool bVar0;

	if (iParam0 < 0) {
	}
	if (iParam0 == 321 || iParam0 > 321) {
	}
	else {
		func_11(891 + iParam0, 1, -1, 1);
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
		func_8();
	}
}

// Position - 0x42A
void func_8() {
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
		func_10(13, system::floor(Global_101700.f_9153.f_3853));
	}
	if (!datafile::datafile_is_save_pending()) {
		if (!Global_69702) {
			if (func_9() == 2 == 0 && !network::network_is_game_in_progress()) {
				if (network::network_is_cloud_available()) {
					Global_101434 = 0;
				}
				if (!Global_55822) {
					func_3();
				}
			}
		}
	}
}

// Position - 0x8EB
int func_9() { return Global_25190; }

// Position - 0x8F6
int func_10(int iParam0, int iParam1) {
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

// Position - 0x947
int func_11(int iParam0, int iParam1, int iParam2, int iParam3) {
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
		iParam2 = func_12();
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

// Position - 0xCD5
var func_12() { return Global_1312735; }

// Position - 0xCE1
int func_13(int iParam0, int iParam1) {
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

// Position - 0x1055
bool func_14(int iParam0) {
	switch (iParam0) {
	case 29:
	case 30:
	case 2:
	case 18: return false;
	}
	return true;
}

// Position - 0x1084
void func_15(int iParam0) {
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

// Position - 0x10C6
void func_16(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8) {
	func_17(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x10E7
void func_17(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
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
		func_18();
	}
}

// Position - 0x12BA
void func_18() {
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

// Position - 0x13DA
int func_19() {
	func_20();
	switch (Global_101700.f_2095.f_539.f_3549) {
	case 0: return 1;

	case 1: return 2;

	case 2: return 4;
	}
	return 0;
}

// Position - 0x1420
void func_20() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_24(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_23(player::player_ped_id());
			if (func_22(iVar0) && (!func_21(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_22(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x151D
bool func_21(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x152B
bool func_22(int iParam0) { return iParam0 < 3; }

// Position - 0x1537
int func_23(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_24(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x1574
int func_24(int iParam0) {
	if (func_22(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x159E
int func_25(int iParam0) {
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

// Position - 0x15E1
void func_26(int iParam0, int iParam1) { gameplay::set_bit(&Global_101700.f_23954.f_8[iParam0], iParam1); }

// Position - 0x15FC
int func_27(int iParam0) {
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

// Position - 0x16AD
int func_28() {
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, script::get_this_script_name(), 64);
	iVar16 = func_29(Var0);
	return iVar16;
}

// Position - 0x16CA
int func_29(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5,
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

// Position - 0x18A4
void func_30() { func_31(1751306471, 6, func_34(), 133, 30000, 10000, -1, 0, -1, 0, 0); }

// Position - 0x18C8
int func_31(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			int iParam8, int iParam9, int iParam10) {
	struct<14> Var0;

	if (func_4(0)) {
		return 0;
	}
	if (iParam4 < 0) {
		return 0;
	}
	if (iParam5 < 0) {
		return 0;
	}
	if (iParam6 == 76) {
		return 0;
	}
	if (iParam7 == 235) {
		return 0;
	}
	if (iParam3 < 3) {
		if (gameplay::is_bit_set(iParam2, iParam3)) {
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7) {
		return 0;
	}
	if (Global_101700.f_6647.f_764 < 8) {
		Var0 = iParam0;
		Var0.f_3 = func_33(iParam1);
		Var0.f_4 = gameplay::get_game_timer() + iParam4;
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_13 = iParam10;
		gameplay::clear_bit(&Var0.f_1, 0);
		Global_101700.f_6647.f_651[Global_101700.f_6647.f_764 /*14*/] = {Var0};
		Global_101700.f_6647.f_764++;
		func_32(0);
		func_32(1);
		func_32(2);
		return 1;
	}
	return 0;
}

// Position - 0x19E3
void func_32(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (!func_22(iParam0)) {
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_136) {
		if (gameplay::is_bit_set(Global_101700.f_6647[iVar0 /*15*/].f_2, iParam0)) {
			if (Global_101700.f_6647[iVar0 /*15*/].f_3 > iVar1) {
				iVar1 = Global_101700.f_6647[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_101700.f_6647.f_764) {
		if (gameplay::is_bit_set(Global_101700.f_6647.f_651[iVar2 /*14*/].f_2, iParam0)) {
			if (Global_101700.f_6647.f_651[iVar2 /*14*/].f_3 == 5) {
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_101700.f_6647.f_919[iParam0] = iVar1;
}

// Position - 0x1AA7
int func_33(int iParam0) {
	switch (iParam0) {
	case 0:
	case 4: return 5;

	case 7: return 4;

	case 2: return 3;

	case 1: return 2;

	case 3: return 1;

	case 5:
	case 6: return 0;
	}
	return 7;
}

// Position - 0x1B11
int func_34() {
	int iVar0;

	iVar0 = entity::get_entity_model(player::player_ped_id());
	switch (iVar0) {
	case joaat("player_zero"): return 1;

	case joaat("player_one"): return 2;

	case joaat("player_two"): return 4;

	default:
	}
	return -1;
}

// Position - 0x1B49
int func_35(int iParam0) {
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_136) {
		if (Global_101700.f_6647[iVar0 /*15*/] == iParam0) {
			if (Global_36328 != iVar0) {
				func_42(iVar0);
				func_39(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_198) {
		if (Global_101700.f_6647.f_137[iVar0 /*15*/] == iParam0) {
			func_39(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_650) {
		if (Global_101700.f_6647.f_199[iVar0 /*15*/] == iParam0) {
			func_38(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_764) {
		if (Global_101700.f_6647.f_651[iVar0 /*14*/] == iParam0) {
			func_37(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_866) {
		if (Global_101700.f_6647.f_765[iVar0 /*10*/] == iParam0) {
			func_36(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

// Position - 0x1C70
void func_36(int iParam0) {
	int iVar0;
	struct<10> Var1;

	if (iParam0 < 0 || iParam0 >= Global_101700.f_6647.f_866) {
		return;
	}
	if (Global_101700.f_6647.f_866 > 1) {
		iVar0 = iParam0;
		while (iVar0 <= Global_101700.f_6647.f_866 - 2) {
			Global_101700.f_6647.f_765[iVar0 /*10*/] = {Global_101700.f_6647.f_765[iVar0 + 1 /*10*/]};
			iVar0++;
		}
	}
	if (Global_101700.f_6647.f_866 > 0) {
		Global_101700.f_6647.f_765[Global_101700.f_6647.f_866 - 1 /*10*/] = {Var1};
		Global_101700.f_6647.f_866--;
	}
}

// Position - 0x1D29
void func_37(int iParam0) {
	int iVar0;
	struct<14> Var1;

	if (iParam0 < 0 || iParam0 >= Global_101700.f_6647.f_764) {
		return;
	}
	if (Global_101700.f_6647.f_764 > 1) {
		iVar0 = iParam0;
		while (iVar0 <= Global_101700.f_6647.f_764 - 2) {
			Global_101700.f_6647.f_651[iVar0 /*14*/] = {Global_101700.f_6647.f_651[iVar0 + 1 /*14*/]};
			iVar0++;
		}
	}
	if (Global_101700.f_6647.f_764 > 0) {
		Global_101700.f_6647.f_651[Global_101700.f_6647.f_764 - 1 /*14*/] = {Var1};
		Global_101700.f_6647.f_764--;
	}
	func_32(0);
	func_32(1);
	func_32(2);
}

// Position - 0x1DF1
void func_38(int iParam0) {
	struct<15> Var0;
	int iVar15;
	int iVar16;

	iVar15 = 0;
	while (iVar15 < Global_101700.f_6647.f_650) {
		if (Global_101700.f_6647.f_199[iVar15 /*15*/] == iParam0) {
			iVar16 = iVar15;
			while (iVar16 <= Global_101700.f_6647.f_650 - 2) {
				Global_101700.f_6647.f_199[iVar16 /*15*/] = {Global_101700.f_6647.f_199[iVar16 + 1 /*15*/]};
				iVar16++;
			}
			Global_101700.f_6647.f_199[Global_101700.f_6647.f_650 - 1 /*15*/] = {Var0};
			Global_101700.f_6647.f_650--;
			return;
		}
		iVar15++;
	}
}

// Position - 0x1E9E
void func_39(int iParam0) {
	struct<15> Var0;
	int iVar15;
	int iVar16;

	iVar15 = 0;
	while (iVar15 < Global_101700.f_6647.f_198) {
		if (Global_101700.f_6647.f_137[iVar15 /*15*/] == iParam0) {
			func_40(Global_101700.f_6647.f_137[iVar15 /*15*/].f_6);
			iVar16 = iVar15;
			while (iVar16 <= Global_101700.f_6647.f_198 - 2) {
				Global_101700.f_6647.f_137[iVar16 /*15*/] = {Global_101700.f_6647.f_137[iVar16 + 1 /*15*/]};
				iVar16++;
			}
			Global_101700.f_6647.f_137[Global_101700.f_6647.f_198 - 1 /*15*/] = {Var0};
			Global_101700.f_6647.f_198--;
			return;
		}
		iVar15++;
	}
}

// Position - 0x1F5A
int func_40(int iParam0) {
	int iVar0;

	if (Global_117[iParam0 /*10*/].f_8 != 140) {
		if (Global_101700.f_27009[iParam0 /*29*/].f_19[Global_14443] == 1) {
			Global_101700.f_27009[iParam0 /*29*/].f_19[Global_14443] = 0;
			if (Global_101700.f_27009[iParam0 /*29*/].f_24[Global_14443] == 0) {
				iVar0 = Global_14443;
				func_41(iParam0, iVar0);
			}
			return 1;
		}
		else {
			return 0;
		}
	}
	return 0;
}

// Position - 0x1FCB
void func_41(int iParam0, int iParam1) {
	if (Global_117[iParam0 /*10*/].f_8 != 140) {
		if (iParam1 > 3) {
		}
		else {
			Global_101700.f_27009[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_101700.f_27009[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

// Position - 0x200E
void func_42(int iParam0) {
	int iVar0;
	int iVar1;
	struct<15> Var2;

	if (iParam0 < 0 || iParam0 >= Global_101700.f_6647.f_136) {
		return;
	}
	iVar1 = Global_101700.f_6647[iParam0 /*15*/].f_2;
	if (Global_101700.f_6647.f_136 > 1) {
		iVar0 = iParam0;
		while (iVar0 <= Global_101700.f_6647.f_136 - 2) {
			Global_101700.f_6647[iVar0 /*15*/] = {Global_101700.f_6647[iVar0 + 1 /*15*/]};
			iVar0++;
		}
	}
	if (Global_101700.f_6647.f_136 > 0) {
		Global_101700.f_6647[Global_101700.f_6647.f_136 - 1 /*15*/] = {Var2};
		Global_101700.f_6647.f_136--;
	}
	iVar0 = 0;
	while (iVar0 < 3) {
		if (gameplay::is_bit_set(iVar1, iVar0)) {
			func_32(iVar0);
		}
		iVar0++;
	}
}

// Position - 0x20E9
void func_43(int iParam0, vector3 vParam1, float fParam4) {
	entity::set_entity_coords(iParam0, vParam1, 1, 0, 0, 1);
	entity::set_entity_heading(iParam0, fParam4);
}

// Position - 0x2107
bool func_44(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x2128
void func_45() {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4) {
		iVar1 = iVar0;
		switch (iVar1) {
		case 0: break;

		case 1:
			uLocal_64[iVar1] = object::create_object(joaat("prop_paints_can02"), -335.66f, -95.24f, 46.16f, 1, 1, 0);
			entity::set_entity_coords_no_offset(uLocal_64[iVar1], -335.66f, -95.24f, 46.16f, 0, 0, 1);
			entity::set_entity_rotation(uLocal_64[iVar1], -2.32f, 0.66f, -0.8f, 2, 1);
			break;

		case 2:
			uLocal_64[iVar1] = object::create_object(joaat("prop_paint_brush05"), -336.04f, -94.9f, 46.02f, 1, 1, 0);
			entity::set_entity_coords_no_offset(uLocal_64[iVar1], -336.04f, -94.9f, 46.02f, 0, 0, 1);
			entity::set_entity_rotation(uLocal_64[iVar1], 0.01f, 3.85f, 2.72f, 2, 1);
			break;

		case 3:
			uLocal_64[iVar1] = object::create_object(joaat("prop_paint_spray01b"), -336.34f, -95.66f, 46.02f, 1, 1, 0);
			entity::set_entity_coords_no_offset(uLocal_64[iVar1], -336.34f, -95.66f, 46.02f, 0, 0, 1);
			entity::set_entity_rotation(uLocal_64[iVar1], -2.86f, 0.76f, 28.89f, 2, 1);
			break;
		}
		iVar0++;
	}
}

// Position - 0x2279
void func_46() {
	if (iLocal_48 == 2) {
		func_48();
		iLocal_49 = 0;
	}
	func_47();
}

// Position - 0x2292
void func_47() {
	switch (iLocal_48) {
	case 0: iLocal_48 = 2; break;

	case 1: iLocal_48 = 2; break;

	case 2: iLocal_48 = 0; break;
	}
}

// Position - 0x22C5
void func_48() {
	int iVar0;

	iVar0 = iLocal_47 + 1;
	if (iVar0 >= 0 && iVar0 < 2) {
		iLocal_47 = iVar0;
	}
}

// Position - 0x22E7
bool func_49() {
	if (iLocal_48 == 0) {
		return true;
	}
	else if (iLocal_48 == 1) {
		if (func_44(player::player_ped_id())) {
			func_43(player::player_ped_id(), -366.6139f, -79.7531f, 44.6616f, 230.7299f);
		}
		cam::set_gameplay_cam_relative_heading(0f);
		cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
		cam::do_screen_fade_in(250);
		return true;
	}
	else if (iLocal_48 == 2) {
		if (entity::does_entity_exist(iLocal_50)) {
			if (ped::is_ped_dead_or_dying(iLocal_50, 1)) {
				func_144();
			}
		}
		else if (iLocal_49 > 0) {
			if (iLocal_56) {
				return true;
			}
			else {
				func_144();
			}
		}
		switch (iLocal_49) {
		case 0:
			if (func_51()) {
				func_45();
				iLocal_49++;
			}
			break;

		case 1:
			if (func_50()) {
				if (func_44(iLocal_50)) {
					if (cam::_0x89215EC747DF244A(30f, 31086, 0.8f, 0.7f, 0.25f, 1090519040, 1051361018, 31086, 24818) ==
						iLocal_50) {
						iLocal_83 = gameplay::get_game_timer() + 2000;
						iLocal_49++;
					}
				}
			}
			break;

		case 2:
			if (iLocal_83 < gameplay::get_game_timer()) {
				iLocal_56 = 1;
				iLocal_49++;
			}
			break;
		}
	}
	return false;
}

// Position - 0x2410
bool func_50() {
	if (Global_16781) {
		return true;
	}
	return false;
}

// Position - 0x2426
bool func_51() {
	if (entity::does_entity_exist(iLocal_50)) {
		return true;
	}
	else {
		streaming::request_model(1813637474);
		if (streaming::has_model_loaded(1813637474)) {
			iLocal_50 = ped::create_ped(26, 1813637474, vLocal_51, fLocal_54, 1, 1);
			streaming::set_model_as_no_longer_needed(1813637474);
			uLocal_64[0] = object::create_object(joaat("prop_cs_spray_can"), vLocal_69, 1, 1, 0);
			entity::attach_entity_to_entity(uLocal_64[0], iLocal_50, ped::get_ped_bone_index(iLocal_50, 28422), 0f,
											-0.01f, -0.02f, vLocal_78, 1, 1, 0, 0, 2, 1);
			ped::set_ped_keep_task(iLocal_50, 1);
			ped::set_ped_config_flag(iLocal_50, 42, 1);
			iLocal_57 = func_62(iLocal_50, 0, 145);
			func_52(1);
			ped::set_ped_relationship_group_hash(iLocal_50, 1862763509);
			ped::set_ped_lod_multiplier(iLocal_50, 2.5f);
		}
	}
	return false;
}

// Position - 0x24E7
int func_52(int iParam0) {
	if (func_56()) {
		Global_101690 = 1;
		Global_101687 = gameplay::get_game_timer();
		if (func_14(Global_101689)) {
			func_53(0);
		}
		ui::set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_14(Global_101689)) {
			ui::flash_minimap_display();
		}
		return 1;
	}
	return 0;
}

// Position - 0x2539
void func_53(int iParam0) {
	switch (iParam0) {
	case 0:
		if (Global_101700.f_23954.f_2 < 3) {
			if (!ui::is_help_message_on_screen()) {
				func_54(func_55(iParam0), -1);
				Global_101700.f_23954.f_2++;
				gameplay::set_bit(&Global_101696, 0);
			}
		}
		break;

	case 1:
		if (!gameplay::is_bit_set(Global_101696, 1)) {
			if (!ui::is_help_message_on_screen()) {
				func_54(func_55(iParam0), -1);
				Global_101700.f_23954.f_3++;
				gameplay::set_bit(&Global_101696, 1);
			}
		}
		break;

	case 2:
		if (!gameplay::is_bit_set(Global_101696, 2)) {
			if (!ui::is_help_message_on_screen()) {
				func_54(func_55(iParam0), -1);
				Global_101700.f_23954.f_4++;
				gameplay::set_bit(&Global_101696, 2);
			}
		}
		break;
	}
}

// Position - 0x261A
void func_54(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x2631
char *func_55(int iParam0) {
	char *sVar0;

	sVar0 = "";
	switch (iParam0) {
	case 0: sVar0 = "AM_H_REFS"; break;

	case 1: sVar0 = "RE_FLASHBLIP"; break;

	case 2: sVar0 = "RE_HANDOVER"; break;
	}
	return sVar0;
}

// Position - 0x2672
bool func_56() {
	switch (func_57(&Global_25249, 0, 5, 0, script::get_id_of_this_thread())) {
	case 1: return true;

	case 0: return true;
	}
	return false;
}

// Position - 0x26A8
int func_57(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
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
		if (func_61(0)) {
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
		if (!func_59(iParam2)) {
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
			func_58(iParam0, iParam4);
		}
	}
	return 2;
}

// Position - 0x27DF
void func_58(int *iParam0, int iParam1) {
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

// Position - 0x282E
bool func_59(int iParam0) { return func_60(iParam0, Global_35781); }

// Position - 0x283F
int func_60(int iParam0, int iParam1) {
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

// Position - 0x2A20
bool func_61(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_59(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x2A42
int func_62(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = func_63(iParam0, !iParam1, 0);
	if (iParam2 != 145 && ui::does_blip_exist(iVar0) &&
		ui::does_text_label_exist(&Global_101700.f_27009[iParam2 /*29*/].f_3)) {
		ui::set_blip_name_from_text_file(iVar0, &Global_101700.f_27009[iParam2 /*29*/].f_3);
	}
	return iVar0;
}

// Position - 0x2A94
int func_63(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	iVar0 = ui::add_blip_for_entity(iParam0);
	if (entity::is_entity_a_vehicle(iParam0)) {
		ui::set_blip_scale(iVar0, func_64(network::network_is_game_in_progress(), 1f, 1f));
		if (!iParam2) {
			ui::set_blip_as_friendly(iVar0, iParam1);
		}
		else {
			ui::set_blip_colour(iVar0, 2);
		}
	}
	else if (entity::is_entity_a_ped(iParam0)) {
		ui::set_blip_scale(iVar0, func_64(network::network_is_game_in_progress(), 0.7f, 0.7f));
		ui::set_blip_as_friendly(iVar0, iParam1);
	}
	else if (entity::is_entity_an_object(iParam0)) {
		ui::set_blip_scale(iVar0, func_64(network::network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

// Position - 0x2B38
var func_64(bool bParam0, float fParam1, float fParam2) {
	if (bParam0) {
		return fParam1;
	}
	return fParam2;
}

// Position - 0x2B4F
void func_65() {
	func_66();
	if (!brain::is_world_point_within_brain_activation_range() && iLocal_55 < 3) {
		func_144();
	}
}

// Position - 0x2B70
void func_66() {
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	float fVar14;
	int iVar15;
	var uVar16;
	var uVar19;
	var uVar22;
	int iVar23;

	if (func_44(iLocal_50)) {
		bVar0 = func_44(iLocal_50);
		bVar1 = func_44(player::player_ped_id());
		vVar2 = {entity::get_entity_coords(iLocal_50, 0)};
		fVar8 = 7.5f;
		vVar9 = {fVar8, fVar8, fVar8};
		if (bVar1) {
			vVar5 = {entity::get_entity_coords(player::player_ped_id(), 0)};
			bVar12 = ped::is_ped_in_any_vehicle(player::player_ped_id(), 0);
			bVar13 = ped::is_ped_in_any_heli(player::player_ped_id());
		}
		if (iLocal_55 < 3) {
			if (gameplay::is_bullet_in_area(vVar2, fVar8, 0) ||
				gameplay::is_projectile_in_area(vVar2 - vVar9, vVar2 + vVar9, 0)) {
				iLocal_55 = 3;
			}
		}
		switch (iLocal_55) {
		case 0:
			streaming::request_anim_dict(sLocal_74);
			if (streaming::has_anim_dict_loaded(sLocal_74)) {
				ped::set_blocking_of_non_temporary_events(iLocal_50, 1);
				ai::task_play_anim(iLocal_50, sLocal_74, sLocal_75, 1000f, -8f, -1, 8193, 0, 0, 0, 0);
				iLocal_55++;
			}
			break;

		case 1:
			if (func_77(-2017877118)) {
				iLocal_55 = 5;
			}
			if (func_76(player::player_ped_id(), iLocal_50, 35f)) {
				ai::open_sequence_task(&iLocal_82);
				ai::task_play_anim(0, sLocal_74, sLocal_76, 8f, -8f, -1, 8192, 0, 0, 0, 0);
				ai::task_play_anim(0, sLocal_74, sLocal_77, 8f, -2f, -1, 8193, 0, 0, 0, 0);
				ai::close_sequence_task(iLocal_82);
				ai::task_perform_sequence(iLocal_50, iLocal_82);
				ai::clear_sequence_task(&iLocal_82);
				streaming::remove_anim_dict(sLocal_74);
				iLocal_55++;
			}
			break;

		case 2:
			if (func_77(242628503)) {
				iLocal_55 = 5;
			}
			if (bVar13) {
				fVar14 = 30f;
			}
			else if (bVar12) {
				fVar14 = 17.5f;
			}
			else {
				fVar14 = 5f;
			}
			if (bVar0 && bVar1 && func_76(player::player_ped_id(), iLocal_50, fVar14)) {
				iLocal_55 = 3;
			}
			if (iLocal_56) {
				iLocal_55 = 3;
			}
			if (func_75()) {
				iLocal_55 = 3;
			}
			if (bVar1 && func_74(vVar5, vVar2)) {
				iLocal_55 = 3;
			}
			func_72();
			break;

		case 3:
			if (func_67()) {
				iLocal_55++;
			}
			break;

		case 4:
			ped::set_ped_flee_attributes(iLocal_50, 8, 1);
			ped::set_ped_flee_attributes(iLocal_50, 32, 1);
			ai::open_sequence_task(&iLocal_82);
			ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 800);
			ai::task_smart_flee_ped(0, player::player_ped_id(), 9999f, -1, 1, 0);
			ai::close_sequence_task(iLocal_82);
			ai::task_perform_sequence(iLocal_50, iLocal_82);
			ai::clear_sequence_task(&iLocal_82);
			iLocal_55++;
			break;

		case 5:
			if (func_77(242628503)) {
				iLocal_55 = 5;
			}
			if (!entity::is_entity_on_screen(iLocal_50) &&
				system::vdist2(vVar2, entity::get_entity_coords(player::player_ped_id(), 0)) > 2500f) {
				iLocal_81 = worldprobe::start_shape_test_los_probe(vVar5, vVar2, 1, 0, 7);
				iLocal_55++;
			}
			break;

		case 6:
			if (func_77(242628503)) {
				iLocal_55 = 5;
			}
			iVar23 = worldprobe::get_shape_test_result(iLocal_81, &iVar15, &uVar16, &uVar19, &uVar22);
			if (iVar23 == 2) {
				if (iVar15 == 1) {
					iLocal_55++;
				}
				else {
					iLocal_55--;
				}
			}
			else if (iVar23 == 0) {
				iLocal_55++;
			}
			break;

		case 7: ped::delete_ped(&iLocal_50); break;
		}
	}
	else if (entity::does_entity_exist(iLocal_50)) {
		entity::freeze_entity_position(iLocal_50, 0);
	}
}

// Position - 0x2E97
bool func_67() {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	vector3 vVar11;

	vVar0 = {-335.71f, -93.39f, 46f};
	vVar3 = {-336.7188f, -93.5128f, 46f};
	switch (iLocal_60) {
	case 0:
		if (entity::is_entity_playing_anim(iLocal_50, sLocal_74, sLocal_77, 3)) {
			fLocal_58 = 0.349f;
			iLocal_59 = 900;
			vLocal_61 = {vVar0};
			iLocal_60 = 1;
		}
		else if (entity::is_entity_playing_anim(iLocal_50, sLocal_74, sLocal_76, 3)) {
			fLocal_58 = entity::get_entity_anim_current_time(iLocal_50, sLocal_74, sLocal_76);
			fLocal_58 = func_71(fLocal_58, 0.2f, 0.349f);
			if (fLocal_58 != 0.2f) {
				fVar6 = 1f / (0.349f - 0.161f) * system::to_float(900);
				iLocal_59 = system::round((fLocal_58 - 0.161f) * fVar6);
				vLocal_61 = {entity::get_entity_coords(iLocal_50, 0) - Vector(1f, 0f, 0f)};
				iLocal_60 = 1;
			}
			else {
				iLocal_60 = 3;
			}
		}
		else {
			iLocal_60 = 3;
		}
		break;

	case 1:
		entity::freeze_entity_position(iLocal_50, 1);
		ai::task_play_anim(iLocal_50, sLocal_74, sLocal_76, 4f, -8f, -1, 0, fLocal_58, 1, 0, 0);
		iLocal_83 = gameplay::get_game_timer();
		func_70(&iLocal_57);
		func_69();
		if (entity::does_entity_exist(uLocal_64[0])) {
			entity::detach_entity(uLocal_64[0], 1, 1);
		}
		iLocal_60++;
		break;

	case 2:
		if (entity::is_entity_playing_anim(iLocal_50, sLocal_74, sLocal_76, 3)) {
			iVar7 = gameplay::get_game_timer() - iLocal_83;
			fVar8 = system::to_float(iVar7) / system::to_float(iLocal_59);
			fVar9 = fLocal_58 - (fLocal_58 - 0.161f) * fVar8;
			fVar9 = func_71(fVar9, 0.161f, fLocal_58);
			entity::set_entity_anim_current_time(iLocal_50, sLocal_74, sLocal_76, fVar9);
			fVar10 = fVar8 - 0.12f;
			fVar10 = func_71(fVar10, 0f, 0.8f);
			vVar11 = {func_68(vLocal_61, vVar3, fVar10)};
			entity::set_entity_coords(iLocal_50, vVar11, 0, 1, 0, 1);
			if (fVar9 == 0.161f) {
				entity::freeze_entity_position(iLocal_50, 0);
				return true;
			}
		}
		break;

	case 3:
		func_70(&iLocal_57);
		func_69();
		if (entity::does_entity_exist(uLocal_64[0])) {
			entity::detach_entity(uLocal_64[0], 1, 1);
		}
		return true;
	}
	return false;
}

// Position - 0x30A5
Vector3 func_68(vector3 vParam0, vector3 vParam3, float fParam6) {
	return FtoV(1f - fParam6) * vParam0 + FtoV(fParam6) * vParam3;
}

// Position - 0x30C0
void func_69() {
	if (iLocal_72 != 0) {
		graphics::stop_particle_fx_looped(iLocal_72, 0);
		iLocal_72 = 0;
	}
}

// Position - 0x30D8
void func_70(int *iParam0) {
	if (ui::does_blip_exist(*iParam0)) {
		ui::set_blip_route(*iParam0, 0);
		ui::remove_blip(iParam0);
	}
}

// Position - 0x30F8
float func_71(float fParam0, float fParam1, float fParam2) {
	if (fParam0 > fParam2) {
		return fParam2;
	}
	else if (fParam0 < fParam1) {
		return fParam1;
	}
	return fParam0;
}

// Position - 0x311F
void func_72() {
	float fVar0;

	if (entity::is_entity_playing_anim(iLocal_50, sLocal_74, sLocal_76, 3)) {
		fVar0 = entity::get_entity_anim_current_time(iLocal_50, sLocal_74, sLocal_76);
		if (fVar0 < 0.383793f) {
			func_69();
		}
		else if (fVar0 < 0.612112f) {
			func_73();
		}
		else if (fVar0 < 1f) {
			func_69();
		}
	}
	else if (entity::is_entity_playing_anim(iLocal_50, sLocal_74, sLocal_77, 3)) {
		fVar0 = entity::get_entity_anim_current_time(iLocal_50, sLocal_74, sLocal_77);
		if (fVar0 < 0.1124f) {
			func_69();
		}
		else if (fVar0 < 0.5566f) {
			func_73();
		}
		else if (fVar0 < 0.7546f) {
			func_69();
		}
		else if (fVar0 < 0.9f) {
			func_73();
		}
		else if (fVar0 < 1f) {
			func_69();
		}
	}
}

// Position - 0x31E0
void func_73() {
	if (iLocal_72 == 0) {
		iLocal_72 = graphics::start_particle_fx_looped_on_entity(sLocal_73, uLocal_64[0], vLocal_78, vLocal_78,
																 1065353216, 0, 0, 0);
		graphics::set_particle_fx_looped_colour(iLocal_72, 1f, 1f, 1f, 0);
		graphics::set_particle_fx_looped_alpha(iLocal_72, 0.2f);
	}
}

// Position - 0x3220
bool func_74(vector3 vParam0, vector3 vParam3) {
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	fVar0 = player::get_player_current_stealth_noise(player::player_id());
	fVar1 = func_71(fVar0 / 14f, 0f, 1f);
	fVar2 = system::vdist(vParam0, vParam3);
	fVar3 = func_71(30f - fVar2, 0f, 30f) / 30f;
	fVar4 = fVar1 * fVar3;
	return fVar4 > 0.25f;
}

// Position - 0x3279
bool func_75() {
	return entity::is_entity_in_angled_area(player::player_ped_id(), -334.4651f, -93.42171f, 48.57328f, -332.2641f,
											-82.78552f, 45.8103f, 3f, 0, 1, 0) &&
		   !entity::is_entity_in_angled_area(player::player_ped_id(), -329.1134f, -83.87273f, 45.79989f, -331.0937f,
											 -88.05348f, 48.71878f, 3f, 0, 1, 0);
}

// Position - 0x32DB
bool func_76(int iParam0, int iParam1, float fParam2) {
	float fVar0;

	if (entity::does_entity_exist(iParam0) && entity::does_entity_exist(iParam1)) {
		fVar0 = fParam2 * fParam2;
		return system::vdist2(entity::get_entity_coords(iParam0, 0), entity::get_entity_coords(iParam1, 0)) <= fVar0;
	}
	return false;
}

// Position - 0x3317
bool func_77(int iParam0) {
	if (!func_78(iLocal_50, iParam0) && !func_78(iLocal_50, 1805844857)) {
		func_70(&iLocal_57);
		ai::task_smart_flee_ped(iLocal_50, player::player_ped_id(), 9999f, -1, 1, 0);
		return true;
	}
	return false;
}

// Position - 0x3359
bool func_78(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = ai::get_script_task_status(iParam0, iParam1);
	return iVar0 == 1 || iVar0 == 0;
}

// Position - 0x3379
void func_79(vector3 vParam0) {
	if (func_83(vParam0)) {
		func_80(33);
	}
	else {
		func_144();
	}
	streaming::request_ptfx_asset();
}

// Position - 0x339D
void func_80(int iParam0) {
	if (iParam0 == -1) {
		iParam0 = func_28();
	}
	if (iParam0 == -1) {
		return;
	}
	func_82(iParam0);
	gameplay::_0x65D2EBB47E1CEC21(0);
	gameplay::set_random_event_flag(1);
	Global_101686 = 0;
	func_81();
}

// Position - 0x33D3
void func_81() {
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			vehicle::set_vehicle_model_is_suppressed(
				entity::get_entity_model(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0)), 1);
		}
		ped::set_ped_config_flag(player::player_ped_id(), 32, 0);
	}
}

// Position - 0x3410
void func_82(int iParam0) { Global_101689 = iParam0; }

// Position - 0x341E
bool func_83(vector3 vParam0) {
	if (func_89(vParam0, 33, 0, 0, 0)) {
		if (func_88(58)) {
			if (func_85()) {
				if (func_84()) {
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0x3452
bool func_84() {
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

// Position - 0x350D
bool func_85() { return func_86(func_87(), 5); }

// Position - 0x351E
int func_86(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return 0;
	}
	return gameplay::is_bit_set(Global_101700.f_31389[iParam0], iParam1);
}

// Position - 0x3541
int func_87() {
	int iVar0;

	iVar0 = entity::get_entity_model(player::player_ped_id());
	switch (iVar0) {
	case joaat("player_zero"): return 21;

	case joaat("player_one"): return 22;

	case joaat("player_two"): return 23;

	default:
	}
	return -1;
}

// Position - 0x357C
bool func_88(int iParam0) {
	if (iParam0 == 63 || iParam0 == -1) {
		return false;
	}
	return gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 3);
}

// Position - 0x35AA
bool func_89(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;

	if (!Global_138924) {
		return false;
	}
	if (iParam3 == -1) {
		iParam3 = func_28();
	}
	if (iParam3 == -1) {
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32) {
		if (!func_84()) {
			return false;
		}
	}
	vLocal_44 = {vParam0};
	iVar0 = 0;
	if (!iVar0) {
		if (player::is_player_playing(player::player_id()) && !ped::is_ped_injured(player::player_ped_id())) {
			vVar1 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			if (system::vmag2(entity::get_entity_velocity(player::player_ped_id())) > 1369f && !func_143()) {
				return false;
			}
		}
		if (!Global_101700.f_8044) {
			return false;
		}
		if (func_4(0)) {
			return false;
		}
		if (func_139()) {
			return false;
		}
		if (func_138()) {
			return false;
		}
		if (Global_101689 != -1) {
			return false;
		}
		if (func_22(func_137())) {
			if (func_131(100f, 1) != -1) {
				return false;
			}
		}
		if (player::is_player_playing(player::player_id()) && !iParam6) {
			if (vVar1.z - vLocal_44.z > 50f) {
				return false;
			}
		}
		if (!func_130(iParam3)) {
			return false;
		}
		if (func_22(func_137())) {
			if (func_129(func_137()) == 4 || func_129(func_137()) == 5) {
				return false;
			}
		}
		if (func_22(func_137())) {
			if (!func_128(iParam3, iParam4, 145)) {
				return false;
			}
		}
		if (!func_127(Global_101700.f_23954.f_43[iParam3])) {
			return false;
		}
		if (gameplay::get_game_timer() - Global_101691 < 150000) {
			if (iParam3 != 30) {
				return false;
			}
		}
		if (func_125()) {
			return false;
		}
		if (gameplay::get_mission_flag()) {
			return false;
		}
		if (gameplay::get_random_event_flag()) {
			return false;
		}
		if (!func_115(4)) {
			return false;
		}
		if (!func_59(5)) {
			return false;
		}
		if (func_114(iParam3, iParam4) && !iParam5) {
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
		if (iParam3 == 9 && (iParam4 == 2 || iParam4 == 5) && !func_114(0, 0)) {
			return false;
		}
		if (Global_25336) {
			return false;
		}
		if (func_130(30) && !func_114(30, 0)) {
			if (iParam3 != 30) {
				if (system::vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f) {
					return false;
				}
			}
		}
		if (func_22(func_137())) {
			iVar4 = 0;
			while (iVar4 < 3) {
				vVar5 = {Global_101700.f_2095.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101700.f_2095.f_539.f_1524[iVar4];
				if (func_113(iVar8)) {
					if (func_91(iVar4)) {
						if (!func_90(vVar5, 0f, 0f, 0f, 0)) {
							if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 0), vVar5) <
								210f * 210f) {
								if (func_137() != iVar4) {
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

// Position - 0x3944
bool func_90(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x398B
bool func_91(int iParam0) {
	int iVar0;

	iVar0 = Global_101700.f_2095.f_539.f_1524[iParam0];
	return func_92(iVar0);
}

// Position - 0x39AC
int func_92(int iParam0) { return func_93(iParam0, 1); }

// Position - 0x39BB
int func_93(int iParam0, int iParam1) {
	int *iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_113(iParam0)) {
		return 0;
	}
	func_94(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (iVar5 > 0 || iVar4 > 0 || iVar3 > 0 || iVar2 >= iParam1) {
		return 1;
	}
	return 0;
}

// Position - 0x3A0E
void func_94(int iParam0, int *iParam1, int *iParam2, int *iParam3, int *iParam4, int *iParam5, int *iParam6) {
	func_95(func_106(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

// Position - 0x3A2C
void func_95(int iParam0, int iParam1, int *iParam2, int *iParam3, int *iParam4, int *iParam5, int *iParam6,
			 int *iParam7) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_105(iParam0, iParam1)) {
		iVar0 = func_104(iParam1);
		iVar1 = func_102(iParam0);
		iVar2 = func_102(iParam0) - func_102(iParam1);
		iVar3 = func_104(iParam0) - func_104(iParam1);
		iVar4 = func_101(iParam0) - func_101(iParam1);
		iVar5 = func_100(iParam0) - func_100(iParam1);
		iVar6 = func_99(iParam0) - func_99(iParam1);
		iVar7 = func_98(iParam0) - func_98(iParam1);
	}
	else {
		iVar0 = func_104(iParam0);
		iVar1 = func_102(iParam1);
		iVar2 = func_102(iParam1) - func_102(iParam0);
		iVar3 = func_104(iParam1) - func_104(iParam0);
		iVar4 = func_101(iParam1) - func_101(iParam0);
		iVar5 = func_100(iParam1) - func_100(iParam0);
		iVar6 = func_99(iParam1) - func_99(iParam0);
		iVar7 = func_98(iParam1) - func_98(iParam0);
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
		iVar4 += func_97(iVar0, iVar1);
		iVar3--;
		iVar0 = system::round(func_96(system::to_float(iVar0 + 1), 0f, 12f));
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

// Position - 0x3C2D
float func_96(float fParam0, float fParam1, float fParam2) {
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

// Position - 0x3C6F
int func_97(int iParam0, int iParam1) {
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

// Position - 0x3D11
int func_98(int iParam0) { return system::shift_right(iParam0, 20) & 63; }

// Position - 0x3D24
int func_99(int iParam0) { return system::shift_right(iParam0, 14) & 63; }

// Position - 0x3D37
int func_100(int iParam0) { return system::shift_right(iParam0, 9) & 31; }

// Position - 0x3D4A
int func_101(int iParam0) { return system::shift_right(iParam0, 4) & 31; }

// Position - 0x3D5C
int func_102(int iParam0) {
	return (system::shift_right(iParam0, 26) & 31) * func_103(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x3D81
int func_103(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x3D98
int func_104(int iParam0) { return iParam0 & 15; }

// Position - 0x3DA5
bool func_105(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (!func_113(iParam1) || !func_113(iParam0)) {
		return true;
	}
	iVar0 = func_102(iParam0);
	iVar1 = func_102(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_104(iParam0);
	iVar1 = func_104(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_101(iParam0);
	iVar1 = func_101(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_100(iParam0);
	iVar1 = func_100(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_99(iParam0);
	iVar1 = func_99(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_98(iParam0);
	iVar1 = func_98(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	return false;
}

// Position - 0x3EB1
int func_106() {
	int *iVar0;

	func_112(&iVar0, time::get_clock_seconds());
	func_111(&iVar0, time::get_clock_minutes());
	func_110(&iVar0, time::get_clock_hours());
	func_109(&iVar0, time::get_clock_day_of_month());
	func_108(&iVar0, time::get_clock_month());
	func_107(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0x3EF7
void func_107(int *iParam0, int iParam1) {
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

// Position - 0x3F7D
void func_108(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*uParam0 -= (*uParam0 & 15);
	*uParam0 |= iParam1;
}

// Position - 0x3FB0
void func_109(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_104(*uParam0);
	iVar1 = func_102(*uParam0);
	if (iParam1 < 1 || iParam1 > func_97(iVar0, iVar1)) {
		return;
	}
	*uParam0 -= (*uParam0 & 496);
	*uParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0x4003
void func_110(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*uParam0 -= (*uParam0 & 15872);
	*uParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0x403D
void func_111(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 1032192);
	*uParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0x4078
void func_112(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 66060288);
	*uParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0x40B4
bool func_113(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15) {
		return false;
	}
	iVar0 = func_98(iParam0);
	if (iVar0 < 0 || iVar0 >= 60) {
		return false;
	}
	iVar1 = func_99(iParam0);
	if (iVar1 < 0 || iVar1 >= 60) {
		return false;
	}
	iVar2 = func_100(iParam0);
	if (iVar2 < 0 || iVar2 > 23) {
		return false;
	}
	iVar3 = func_102(iParam0);
	if (iVar3 <= 0 || iVar3 > 2043 || iVar3 < 1979) {
		return false;
	}
	iVar4 = func_104(iParam0);
	if (iVar4 < 0 || iVar4 > 11) {
		return false;
	}
	iVar5 = func_101(iParam0);
	if (iVar5 < 1 || iVar5 > func_97(iVar4, iVar3)) {
		return false;
	}
	return true;
}

// Position - 0x4190
int func_114(int iParam0, int iParam1) {
	if (gameplay::is_bit_set(Global_101700.f_23954.f_8[iParam0], iParam1)) {
		return 1;
	}
	return 0;
}

// Position - 0x41B3
int func_115(int iParam0) {
	int iVar0;

	if (player::is_player_playing(player::player_id())) {
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				iVar0 = func_137();
				if (!func_22(iVar0)) {
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_124() || Global_100747 ||
						Global_25192 || func_123() || func_122(8, -1) || func_121() || func_120() || func_119() ||
						func_118() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 1:
					if (player::is_player_being_arrested(player::player_id(), 1) || func_124() || Global_25192 ||
						func_123() || func_122(8, -1) || func_119() || func_121() || func_120() || func_118() ||
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_124() || Global_100747 ||
						Global_25192 || func_123() || func_122(8, -1) || func_119() || func_121() || func_120() ||
						func_118() || Global_101700.f_6647.f_919[iVar0] == 5 || Global_36328 != -1) {
						return 0;
					}
					break;

				case 3:
					if (ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_124() || Global_100747 ||
						Global_25192 || func_123() || func_122(8, -1) || func_121() || func_120() || func_118() ||
						Global_101700.f_6647.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 4:
					if (func_124() || player::get_player_wanted_level(player::player_id()) > 0 || func_122(8, -1) ||
						func_118() || func_117() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 5:
					if (func_122(8, -1) || func_121() || func_120() || func_117() || func_116()) {
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
							player::is_player_climbing(player::player_id()) || func_124() || Global_25192 ||
							func_123() || func_122(8, -1) || func_120() || func_119() || func_118() ||
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
						player::is_player_being_arrested(player::player_id(), 1) || func_124() || func_120() ||
						Global_100747 || Global_25192 || func_123() || Global_36912 || func_122(8, -1) || func_119() ||
						func_117() || func_118() || Global_101700.f_6647.f_919[iVar0] == 5) {
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
						player::is_player_climbing(player::player_id()) || func_124() || Global_100747 ||
						Global_25192 || func_123() || func_122(8, -1) || func_119() || func_117() || func_121() ||
						func_120() || func_118()) {
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

// Position - 0x48D0
var func_116() { return Global_91530.f_1; }

// Position - 0x48DE
int func_117() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 13);
	}
	return 0;
}

// Position - 0x4904
int func_118() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("player_timetable_scene")) > 0) {
		return 1;
	}
	return 0;
}

// Position - 0x491E
int func_119() {
	if (Global_69962) {
		return 1;
	}
	else if (Global_55816 && !Global_55822) {
		return 1;
	}
	return 0;
}

// Position - 0x4948
bool func_120() { return Global_91543.f_304 > 0; }

// Position - 0x4959
bool func_121() { return Global_91543.f_303 > 0; }

// Position - 0x496A
var func_122(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x49A5
var func_123() { return Global_1315233; }

// Position - 0x49B1
int func_124() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0x49CD
bool func_125() {
	func_126();
	if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2) {
		return true;
	}
	return false;
}

// Position - 0x49F5
void func_126() {
	if (func_21(14)) {
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
		Global_14443 = func_137();
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

// Position - 0x4A97
int func_127(int iParam0) { return func_105(func_106(), iParam0); }

// Position - 0x4AA9
int func_128(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_137();
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

// Position - 0x4B8D
int func_129(int iParam0) {
	if (!func_22(iParam0)) {
		return 7;
	}
	return Global_101700.f_6647.f_919[iParam0];
}

// Position - 0x4BB1
int func_130(int iParam0) {
	int iVar0;
	var uVar1;

	if (iParam0 == 31 || iParam0 == 32) {
		if (!func_84()) {
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

// Position - 0x4C0F
int func_131(float fParam0, int iParam1) {
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
		if (func_22(func_137())) {
			iVar36 = func_19();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63) {
				iVar32 = iVar37;
				if (gameplay::is_bit_set(Global_101700.f_17533[iVar32 /*6*/], 2) &&
					!gameplay::is_bit_set(Global_101700.f_17533[iVar32 /*6*/], 3)) {
					func_132(iVar32, &Var0);
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

// Position - 0x4CC6
void func_132(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0:
		func_133(uParam1, "Abigail1", func_135(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0,
				 "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_134(iParam0), 1, 0);
		break;

	case 1:
		func_133(uParam1, "Abigail2", func_135(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0,
				 -1, 4, 1, 0, 2359, func_134(iParam0), 1, 0);
		break;

	case 2:
		func_133(uParam1, "Barry1", func_135(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1,
				 4, 1, 0, 2359, func_134(iParam0), 1, 0);
		break;

	case 3:
		func_133(uParam1, "Barry2", func_135(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1,
				 4, 4, 0, 2359, func_134(iParam0), 1, 1);
		break;

	case 4:
		func_133(uParam1, "Barry3", func_135(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2,
				 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 5:
		func_133(uParam1, "Barry3A", func_135(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0,
				 "", 166, 0, 7, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 6:
		func_133(uParam1, "Barry3C", func_135(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0,
				 7, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 7:
		func_133(uParam1, "Barry4", func_135(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0,
				 "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_134(iParam0), 0, 0);
		break;

	case 8:
		func_133(uParam1, "Dreyfuss1", func_135(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106,
				 0, "", 0, 0, -1, 4, 2, 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 9:
		func_133(uParam1, "Epsilon1", func_135(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1,
				 10, 4, 1, 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 10:
		func_133(uParam1, "Epsilon2", func_135(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0,
				 11, 4, 1, 0, 2359, func_134(iParam0), 1, 0);
		break;

	case 11:
		func_133(uParam1, "Epsilon3", func_135(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars",
				 0, 0, 12, 4, 1, 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 12:
		func_133(uParam1, "Epsilon4", func_135(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16,
				 "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 13:
		func_133(uParam1, "Epsilon5", func_135(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16,
				 "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_134(iParam0), 1, 0);
		break;

	case 14:
		func_133(uParam1, "Epsilon6", func_135(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0,
				 15, 4, 1, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 15:
		func_133(uParam1, "Epsilon7", func_135(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16,
				 "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 16:
		func_133(uParam1, "Epsilon8", func_135(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16,
				 "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_134(iParam0), 1, 0);
		break;

	case 17:
		func_133(uParam1, "Extreme1", func_135(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1,
				 18, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 18:
		func_133(uParam1, "Extreme2", func_135(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171,
				 0, 19, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 19:
		func_133(uParam1, "Extreme3", func_135(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20,
				 4, 2, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 20:
		func_133(uParam1, "Extreme4", func_135(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 21:
		func_133(uParam1, "Fanatic1", func_135(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0,
				 1, -1, 4, 1, 700, 2000, func_134(iParam0), 1, 0);
		break;

	case 22:
		func_133(uParam1, "Fanatic2", func_135(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1,
				 -1, 4, 4, 700, 2000, func_134(iParam0), 1, 0);
		break;

	case 23:
		func_133(uParam1, "Fanatic3", func_135(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1,
				 4, 2, 700, 2000, func_134(iParam0), 0, 1);
		break;

	case 24:
		func_133(uParam1, "Hao1", func_135(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0,
				 "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_134(iParam0), 0, 1);
		break;

	case 25:
		func_133(uParam1, "Hunting1", func_135(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1,
				 26, 4, 4, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 26:
		func_133(uParam1, "Hunting2", func_135(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0,
				 -1, 4, 4, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 27:
		func_133(uParam1, "Josh1", func_135(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns",
				 0, 1, 28, 4, 4, 0, 2359, func_134(iParam0), 1, 0);
		break;

	case 28:
		func_133(uParam1, "Josh2", func_135(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0,
				 29, 4, 4, 0, 2359, func_134(iParam0), 1, 1);
		break;

	case 29:
		func_133(uParam1, "Josh3", func_135(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0,
				 30, 4, 4, 0, 2359, func_134(iParam0), 1, 1);
		break;

	case 30:
		func_133(uParam1, "Josh4", func_135(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1,
				 4, 4, 0, 2359, func_134(iParam0), 1, 0);
		break;

	case 31:
		func_133(uParam1, "Maude1", func_135(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0,
				 "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 32:
		func_133(uParam1, "Minute1", func_135(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33,
				 4, 4, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 33:
		func_133(uParam1, "Minute2", func_135(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4,
				 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 34:
		func_133(uParam1, "Minute3", func_135(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0,
				 -1, 4, 4, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 35:
		func_133(uParam1, "MrsPhilips1", func_135(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0,
				 "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 36:
		func_133(uParam1, "MrsPhilips2", func_135(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0,
				 2359, func_134(iParam0), 0, 0);
		break;

	case 37:
		func_133(uParam1, "Nigel1", func_135(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1,
				 -1, 1, 4, 0, 2359, func_134(iParam0), 1, 0);
		break;

	case 38:
		func_133(uParam1, "Nigel1A", func_135(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0,
				 "", 0, 0, 42, 4, 4, 0, 2359, func_134(iParam0), 1, 1);
		break;

	case 39:
		func_133(uParam1, "Nigel1B", func_135(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_134(iParam0), 1, 1);
		break;

	case 40:
		func_133(uParam1, "Nigel1C", func_135(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_134(iParam0), 1, 1);
		break;

	case 41:
		func_133(uParam1, "Nigel1D", func_135(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_134(iParam0), 1, 1);
		break;

	case 42:
		func_133(uParam1, "Nigel2", func_135(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0,
				 43, 4, 4, 0, 2359, func_134(iParam0), 1, 1);
		break;

	case 43:
		func_133(uParam1, "Nigel3", func_135(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16,
				 "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_134(iParam0), 1, 1);
		break;

	case 44:
		func_133(uParam1, "Omega1", func_135(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0,
				 "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 45:
		func_133(uParam1, "Omega2", func_135(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 46:
		func_133(uParam1, "Paparazzo1", func_135(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1,
				 47, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 47:
		func_133(uParam1, "Paparazzo2", func_135(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0,
				 0, 48, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 48:
		func_133(uParam1, "Paparazzo3", func_135(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183,
				 1, -1, 2, 2, 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 49:
		func_133(uParam1, "Paparazzo3A", func_135(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102,
				 0, "", 0, 0, 51, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 50:
		func_133(uParam1, "Paparazzo3B", func_135(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "",
				 0, 0, 51, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 51:
		func_133(uParam1, "Paparazzo4", func_135(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1,
				 -1, 4, 2, 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 52:
		func_133(uParam1, "Rampage1", func_135(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4,
				 4, 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 54:
		func_133(uParam1, "Rampage3", func_135(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55,
				 4, 4, 0, 2359, func_134(iParam0), 1, 0);
		break;

	case 55:
		func_133(uParam1, "Rampage4", func_135(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4,
				 4, 0, 2359, func_134(iParam0), 1, 0);
		break;

	case 56:
		func_133(uParam1, "Rampage5", func_135(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0,
				 53, 4, 4, 0, 2359, func_134(iParam0), 0, 0);
		break;

	case 53:
		func_133(uParam1, "Rampage2", func_135(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0,
				 "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_134(iParam0), 1, 0);
		break;

	case 57:
		func_133(uParam1, "TheLastOne", func_135(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "",
				 0, 1, -1, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 58:
		func_133(uParam1, "Tonya1", func_135(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0,
				 "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 59:
		func_133(uParam1, "Tonya2", func_135(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48,
				 "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
		break;

	case 60:
		func_133(uParam1, "Tonya3", func_135(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0,
				 2359, func_134(iParam0), 0, 1);
		break;

	case 61:
		func_133(uParam1, "Tonya4", func_135(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359,
				 func_134(iParam0), 0, 1);
		break;

	case 62:
		func_133(uParam1, "Tonya5", func_135(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
		break;

	default: break;
	}
}

// Position - 0x5E7B
void func_133(var *uParam0, char *sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7,
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

// Position - 0x5F0C
int func_134(int iParam0) {
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

// Position - 0x6252
struct<2> func_135(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = {func_136(iParam0)};
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x6289
struct<2>
func_136(int iParam0) {
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

//Position - 0x66D5
int func_137()
{
	func_20();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x66EE
bool func_138() {
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

// Position - 0x6732
bool func_139() {
	if (func_142() && !func_143()) {
		return true;
	}
	if (func_141() && func_140()) {
		return true;
	}
	return false;
}

// Position - 0x6764
bool func_140() { return Global_101418 > 0; }

// Position - 0x6772
int func_141() {
	if (Global_88746 != -1) {
		return 1;
	}
	return 0;
}

// Position - 0x6787
int func_142() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 20);
	}
	return 0;
}

// Position - 0x67AD
int func_143() {
	if (gameplay::is_pc_version()) {
		if (gameplay::_0xD10282B6E3751BA0() == 1f) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x67CA
void func_144() {
	streaming::remove_ptfx_asset();
	func_70(&iLocal_57);
	func_145(-1);
	script::terminate_this_thread();
}

// Position - 0x67E5
void func_145(int iParam0) {
	char cVar0[64];

	if (iParam0 == -1) {
		iParam0 = func_28();
	}
	if (iParam0 == -1) {
		return;
	}
	if (func_156()) {
		func_149(iParam0);
		ui::set_mission_name(0, 0);
		Global_101691 = gameplay::get_game_timer();
		func_148(30000);
		StringCopy(&cVar0, func_147(Global_101689, 1), 64);
		if (func_27(Global_101689) > 0) {
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101688, 64);
		}
		stats::_0x71862B1D855F32E1(&cVar0, Global_101686, gameplay::get_game_timer() - Global_101687, 0);
	}
	else if (gameplay::is_bit_set(Global_101696, 0) && Global_101700.f_23954.f_2 < 3) {
		gameplay::clear_bit(&Global_101696, 0);
	}
	func_146(&Global_25249);
	Global_101690 = 0;
	func_82(-1);
}

// Position - 0x689A
void func_146(int *iParam0) {
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

// Position - 0x68D7
char *func_147(int iParam0, int iParam1) {
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

// Position - 0x6B20
void func_148(int iParam0) { Global_36332 = gameplay::get_game_timer() + iParam0; }

// Position - 0x6B32
void func_149(int iParam0) { func_150(iParam0, 0, func_155(iParam0)); }

// Position - 0x6B47
void func_150(int iParam0, int iParam1, int iParam2) {
	int *iVar0;
	struct<16> Var1;

	iVar0 = func_106();
	func_153(&iVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_152(iParam0, &iVar0);
	Var1 = {func_151(&iVar0)};
}

// Position - 0x6B76
struct<16> func_151(int *iParam0) {
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, "", 64);
	iVar16 = func_100(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_99(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_98(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_101(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_104(*iParam0);
	if (iVar16 < 9) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_102(*iParam0), 64);
	return Var0;
}

//Position - 0x6C46
void func_152(int iParam0, int* iParam1)
{
	Global_101700.f_23954.f_43[iParam0] = *iParam1;
}

// Position - 0x6C5E
void func_153(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_102(*iParam0);
	iVar1 = func_104(*iParam0);
	iVar2 = func_101(*iParam0);
	iVar3 = func_100(*iParam0);
	iVar4 = func_99(*iParam0);
	iVar5 = func_98(*iParam0);
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
	iVar6 = func_97(iVar1, iVar0);
	while (iVar2 > iVar6) {
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11) {
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_97(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11) {
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_154(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

// Position - 0x6DE0
void func_154(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_112(iParam0, iParam1);
	func_111(iParam0, iParam2);
	func_110(iParam0, iParam3);
	func_108(iParam0, iParam5);
	func_109(iParam0, iParam4);
	func_107(iParam0, iParam6);
}

// Position - 0x6E18
int func_155(int iParam0) {
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

// Position - 0x6FBB
bool func_156() {
	if (Global_101689 == func_28() && gameplay::get_random_event_flag() && Global_101690) {
		return true;
	}
	return false;
}
