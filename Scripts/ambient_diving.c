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
var uLocal_20 = 0;
char *sLocal_21 = NULL;
var uLocal_22 = 0;
var uLocal_23 = 0;
float fLocal_24 = 0f;
var uLocal_25 = 0;
var uLocal_26 = 0;
var uLocal_27 = 0;
float fLocal_28 = 0f;
float fLocal_29 = 0f;
var uLocal_30 = 0;
var uLocal_31 = 0;
var uLocal_32 = 0;
float fLocal_33 = 0f;
float fLocal_34 = 0f;
float fLocal_35 = 0f;
var uLocal_36 = 0;
var uLocal_37 = 0;
int iLocal_38 = 0;
var uLocal_39 = 0;
bool bLocal_40 = 0;
bool bLocal_41 = 0;
struct<8> Local_42 = {
	0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_50 = 0;
var uLocal_51 = 0;
var uLocal_52 = 0;
var uLocal_53 = 0;
var uLocal_54 = 0;
struct<11> Local_55[30];
int iLocal_386 = 0;
int *iLocal_387 = NULL;
int iLocal_388 = 0;
int *iLocal_389 = NULL;
int iLocal_390 = 0;
int iLocal_391 = 0;
int iLocal_392 = 0;
var uLocal_393[4] = {0, 0, 0, 0};
float fLocal_398[4] = {0f, 0f, 0f, 0f};
float fLocal_403 = 0f;
float fLocal_404 = 0f;
float fLocal_405 = 0f;
int iLocal_406 = 0;
int iLocal_407 = 0;
int iLocal_408 = 0;
int iLocal_409 = 0;
int iLocal_410 = 0;
int iLocal_411 = 0;
int iLocal_412 = 0;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	bLocal_40 = true;
	bLocal_41 = true;
	iLocal_388 = -1;
	iLocal_406 = 1;
	iLocal_408 = audio::get_sound_id();
	if (player::has_force_cleanup_occurred(210)) {
		func_77(1);
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("ambient_diving")) > 1) {
		script::terminate_this_thread();
	}
	func_76(27);
	while (true) {
		system::wait(0);
		if (func_73(0)) {
			if (!iLocal_412) {
				func_77(0);
				iLocal_412 = 1;
			}
		}
		else {
			iLocal_412 = 0;
			func_72(player::player_ped_id());
			switch (iLocal_386) {
			case 0: func_67(); break;

			case 1:
				func_64();
				func_55();
				func_1();
				break;

			case 2: func_55(); break;

			case 3: func_77(1); break;
			}
		}
	}
}

// Position - 0x116
void func_1() {
	if (func_18(&Local_42, &Local_55) || func_17(110) == 1) {
		if (func_16()) {
			func_15(0);
		}
		func_8(298, 0, 0);
		if (!func_17(110)) {
			if (!iLocal_407) {
				iLocal_407 = func_3(1303349750, 1, 1, 16, 3, 1000, 10000, 1256519626, -1, 163, -1, 0);
			}
		}
		func_2(2);
	}
}

// Position - 0x183
void func_2(int iParam0) { iLocal_386 = iParam0; }

// Position - 0x190
int func_3(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
		   int iParam8, int iParam9, int iParam10, int iParam11) {
	struct<15> Var0;
	int iVar15;

	if (func_7(0)) {
		return 0;
	}
	if (iParam5 < 0) {
		return 0;
	}
	if (iParam6 < 0) {
		return 0;
	}
	if (iParam8 == 76) {
		return 0;
	}
	if (iParam9 == 235) {
		return 0;
	}
	if (iParam3 < 3) {
		if (gameplay::is_bit_set(iParam2, iParam3)) {
			return 0;
		}
	}
	if (iParam4 < 3) {
		if (iParam4 != iParam3) {
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7) {
		return 0;
	}
	if (Global_101700.f_6647.f_136 < 9) {
		Var0 = iParam0;
		if (Global_101700.f_6647.f_911 == Var0) {
			Global_101700.f_6647.f_911 = -1;
		}
		Var0.f_3 = func_6(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = gameplay::get_game_timer() + iParam5;
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		gameplay::clear_bit(&Var0.f_1, 1);
		gameplay::clear_bit(&Var0.f_1, 0);
		if (iParam7 != -1) {
			gameplay::set_bit(&Var0.f_1, 11);
		}
		else if (iParam1 == 0) {
			gameplay::set_bit(&Var0.f_1, 10);
		}
		Global_101700.f_6647[Global_101700.f_6647.f_136 /*15*/] = {Var0};
		Global_101700.f_6647.f_136++;
		iVar15 = 0;
		while (iVar15 < 3) {
			if (gameplay::is_bit_set(iParam2, iVar15)) {
				func_4(iVar15);
			}
			iVar15++;
		}
		return 1;
	}
	return 0;
}

// Position - 0x310
void func_4(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (!func_5(iParam0)) {
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

// Position - 0x3D4
bool func_5(int iParam0) { return iParam0 < 3; }

// Position - 0x3E0
int func_6(int iParam0) {
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

// Position - 0x44A
bool func_7(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x475
void func_8(int iParam0, int iParam1, int iParam2) {
	bool bVar0;

	if (iParam0 < 0) {
	}
	if (iParam0 == 321 || iParam0 > 321) {
	}
	else {
		func_13(891 + iParam0, 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101700.f_9153[iParam0 /*12*/].f_5 == 1) {
		if (Global_101700.f_9153[iParam0 /*12*/].f_6 == 11 || Global_101700.f_9153[iParam0 /*12*/].f_6 == 12) {
			bVar0 = false;
		}
	}
	else {
		Global_101700.f_9153[iParam0 /*12*/].f_5 = 1;
		Global_101700.f_9153[iParam0 /*12*/].f_10 = iParam1;
		Global_101700.f_9153[iParam0 /*12*/].f_11 = iParam2;
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

// Position - 0x55D
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
		func_12(13, system::floor(Global_101700.f_9153.f_3853));
	}
	if (!datafile::datafile_is_save_pending()) {
		if (!Global_69702) {
			if (func_11() == 2 == 0 && !network::network_is_game_in_progress()) {
				if (network::network_is_cloud_available()) {
					Global_101434 = 0;
				}
				if (!Global_55822) {
					func_10();
				}
			}
		}
	}
}

// Position - 0xA1E
int func_10() {
	if (func_7(0)) {
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

// Position - 0xA69
int func_11() { return Global_25190; }

// Position - 0xA74
int func_12(int iParam0, int iParam1) {
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

// Position - 0xAC5
int func_13(int iParam0, int iParam1, int iParam2, int iParam3) {
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
		iParam2 = func_14();
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

// Position - 0xE51
var func_14() { return Global_1312735; }

// Position - 0xE5D
void func_15(int iParam0) {
	if (iParam0) {
		Global_101700.f_13010.f_89 = 1;
	}
	else {
		Global_101700.f_13010.f_89 = 0;
	}
}

// Position - 0xE81
bool func_16() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("apptrackify")) > 0) {
		return true;
	}
	return false;
}

// Position - 0xE9E
int func_17(int iParam0) {
	if (iParam0 == 146 || iParam0 == -1) {
		return 0;
	}
	return Global_101700.f_8044.f_99.f_58[iParam0];
}

// Position - 0xECB
int func_18(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;

	ped::is_ped_injured(player::player_ped_id());
	vVar2 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	iVar0 = 0;
	while (iVar0 < 1) {
		iVar1 = func_54(&uParam0->f_1, uParam0->f_10);
		if (!(*iParam1)[uParam0->f_10 /*11*/].f_10) {
			if (!iVar1) {
				if (!func_53((*iParam1)[uParam0->f_10 /*11*/].f_6, 0f, 0f, 0f, 0)) {
					func_51(&(*iParam1)[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 0);
				}
				else {
					func_51(&(*iParam1)[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!iVar1) {
			func_36(uParam0, iParam1, vVar2);
		}
		uParam0->f_10++;
		if (uParam0->f_10 >= *iParam1) {
			uParam0->f_10 = 0;
		}
		iVar0++;
	}
	if (uParam0->f_11) {
		if (!Global_69962) {
			func_26(&uParam0->f_11, &uParam0->f_12, &uParam0->f_9, 5, &iLocal_389, &iLocal_387, "DIVING_TITLE",
					"DIVING_COLLECT");
		}
		if (!func_25(44)) {
			vVar5 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			if (func_24(&Local_42, &Local_55, vVar5, &iVar8)) {
				if (gameplay::get_distance_between_coords(func_23(iVar8), vVar5, 0) > 200f) {
					func_20("DIVING_HELP4", 1, 7500, -1, 10000, 7, 0, 0, 0);
					func_19(44);
				}
			}
		}
	}
	if (!iLocal_407) {
		if (uParam0->f_1.f_4 >= uParam0->f_1.f_3) {
			iLocal_407 = func_3(1303349750, 1, 1, 16, 3, 1000, 10000, 1256519626, -1, 163, -1, 0);
		}
	}
	if (!uParam0->f_12 && !uParam0->f_11) {
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0;
}

// Position - 0x1079
void func_19(int iParam0) {
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

// Position - 0x10BB
void func_20(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8) {
	func_21(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x10DC
void func_21(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
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
		func_22();
	}
}

// Position - 0x12AF
void func_22() {
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

// Position - 0x13CF
Vector3 func_23(int iParam0) {
	switch (iParam0) {
	case 0: return -1036.73f, 6735.72f, -100.52f;

	case 1: return -908.86f, 6655.98f, -34.35f;

	case 2: return -985.14f, 6697.71f, -41.57f;

	case 3: return 1825.73f, -2920.67f, -36.82f;

	case 4: return 1772.11f, -2967.72f, -46.81f;

	case 5: return 3198.59f, -385.05f, -31.49f;

	case 6: return 3170.43f, -302.21f, -25.99f;

	case 7: return 3157.44f, -268.54f, -28.07f;

	case 8: return -3180.2f, 3010.9f, -37.6f;

	case 9: return -3178.3f, 3044.86f, -39.96f;

	case 10: return 910.48f, -3471.21f, -17.57f;

	case 11: return 1338.76f, -3041.59f, -19.23f;

	case 12: return 1153.38f, -2864.51f, -18.96f;

	case 13: return 958.56f, -2847.78f, -22.05f;

	case 14: return 782.28f, -2872.81f, -9.577f;

	case 15: return 581.28f, -2471.5f, -9.44f;

	case 16: return 636.56f, -2214.49f, -7.87f;

	case 17: return 371.06f, -3226.67f, -19.6f;

	case 18: return 689.69f, -3451.07f, -27.85f;

	case 19: return 180.17f, -2255.91f, -2.54f;

	case 20: return -691.64f, -2836.86f, -15.67f;

	case 21: return -3397.5f, 3717.52f, -86.14f;

	case 22: return -3357.11f, 3710.79f, -96.14f;

	case 23: return -3282.21f, 3682.6f, -82.87f;

	case 24: return -3256.66f, 3672.29f, -35.06f;

	case 25: return -3142.19f, 3625.95f, -26.31f;

	case 26: return 3271.34f, 6420.78f, -50.78f;

	case 27: return 3237.83f, 6487.44f, -43.9f;

	case 28: return 1772.1f, -2997.12f, -50.44f;

	case 29: return 3207f, -415.17f, -32.01f;
	}
	return 0f, 0f, 0f;
}

// Position - 0x170B
bool func_24(var *uParam0, int iParam1, vector3 vParam2, int *iParam5) {
	int iVar0;
	float fVar1;
	float fVar2;

	iVar0 = 0;
	fVar1 = 0f;
	fVar2 = -1f;
	iVar0 = 0;
	while (iVar0 < *iParam1) {
		if (!func_54(&uParam0->f_1, iVar0)) {
			fVar1 = system::vdist2(vParam2, (*iParam1)[iVar0 /*11*/].f_3);
			if (fVar2 == -1f || fVar1 < fVar2) {
				*iParam5 = iVar0;
				fVar2 = fVar1;
			}
		}
		iVar0++;
	}
	return *iParam5 != -1;
}

// Position - 0x1772
bool func_25(int iParam0) {
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
	return false;
}

// Position - 0x17B5
void func_26(int *iParam0, int *iParam1, var *uParam2, int iParam3, int *iParam4, int *iParam5, char *sParam6,
			 char *sParam7) {
	int iVar0;

	func_35(0);
	if (*iParam0) {
		switch (*iParam4) {
		case 0:
			*iParam5 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
			if (graphics::has_scaleform_movie_loaded(*iParam5)) {
				iVar0 = audio::get_sound_id();
				if (iParam3 == 6) {
					audio::play_sound_frontend(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
				}
				else {
					audio::play_sound_frontend(iVar0, "COLLECTED", "HUD_AWARDS", 1);
				}
				*iParam4++;
			}
			break;

		case 1:
			graphics::_push_scaleform_movie_function(*iParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
			graphics::begin_text_command_scaleform_string(sParam6);
			graphics::end_text_command_scaleform_string();
			graphics::begin_text_command_scaleform_string(sParam7);
			ui::add_text_component_integer(func_28(iParam3));
			graphics::end_text_command_scaleform_string();
			graphics::_pop_scaleform_movie_function_void();
			*uParam2 = gameplay::get_game_timer();
			*iParam4++;
			break;

		case 2:
			if (gameplay::get_game_timer() - *uParam2 > 7000) {
				graphics::_push_scaleform_movie_function(*iParam5, "SHARD_ANIM_OUT");
				graphics::_push_scaleform_movie_function_parameter_int(1);
				graphics::_push_scaleform_movie_function_parameter_float(0.33f);
				graphics::_pop_scaleform_movie_function_void();
				*iParam4++;
			}
			else if (!func_27()) {
				if (graphics::has_scaleform_movie_loaded(*iParam5)) {
					func_35(1);
					graphics::draw_scaleform_movie_fullscreen(*iParam5, 100, 100, 100, 255, 0);
				}
			}
			break;

		case 3:
			if (gameplay::get_game_timer() - *uParam2 > 7500) {
				*iParam4++;
			}
			else if (!func_27()) {
				if (graphics::has_scaleform_movie_loaded(*iParam5)) {
					func_35(1);
					graphics::draw_scaleform_movie_fullscreen(*iParam5, 100, 100, 100, 255, 0);
				}
			}
			break;

		case 4:
			if (graphics::has_scaleform_movie_loaded(*iParam5)) {
				graphics::set_scaleform_movie_as_no_longer_needed(iParam5);
			}
			func_35(0);
			*iParam1 = 0;
			*iParam0 = 0;
			*iParam4 = 0;
			break;
		}
	}
}

// Position - 0x1938
int func_27() {
	if (Global_69962) {
		return 1;
	}
	else if (Global_55816 && !Global_55822) {
		return 1;
	}
	return 0;
}

// Position - 0x1962
int func_28(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2) {
		iVar1 = 0;
		while (iVar1 < func_34(iParam0)) {
			if (gameplay::is_bit_set(Global_101700.f_9008.f_108, func_33(func_34(iParam0), iVar1))) {
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6) {
		stats::stat_get_int(joaat("num_hidden_packages_5"), &iVar0, -1);
	}
	else if (iParam0 == 7) {
		stats::stat_get_int(joaat("num_hidden_packages_7"), &iVar0, -1);
	}
	else if (iParam0 == 8) {
		stats::stat_get_int(joaat("num_hidden_packages_6"), &iVar0, -1);
	}
	else {
		iVar1 = 0;
		while (iVar1 < func_34(iParam0)) {
			iVar2 = func_32(iParam0) + iVar1;
			if (func_29(iVar2, -1, -1)) {
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

// Position - 0x1A2A
bool func_29(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (iParam1 == -1) {
		iParam1 = func_14();
	}
	iVar1 = func_31(iParam0, iParam1);
	iVar2 = func_30(iParam0);
	if (0 != iVar1) {
		iVar0 = stats::stat_get_bool_masked(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

// Position - 0x1A67
int func_30(int iParam0) {
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

// Position - 0x1C77
int func_31(int iParam0, int iParam1) {
	int iVar0;

	if (iParam1 == -1) {
		iParam1 = func_14();
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

// Position - 0x1E65
int func_32(int iParam0) {
	if (iParam0 == 3) {
		return 815;
	}
	if (iParam0 == 5) {
		return 845;
	}
	if (iParam0 == 1) {
		return 705;
	}
	if (iParam0 == 0) {
		return 755;
	}
	return 805;
}

// Position - 0x1EAC
int func_33(int iParam0, int iParam1) {
	if (iParam1 < 32) {
		return iParam1;
	}
	return iParam0 - iParam1;
}

// Position - 0x1EC8
int func_34(int iParam0) {
	if (iParam0 == 3) {
		return 30;
	}
	if (iParam0 == 1) {
		return 50;
	}
	if (iParam0 == 0) {
		return 50;
	}
	if (iParam0 == 4) {
		return 10;
	}
	if (iParam0 == 5) {
		return 30;
	}
	return 15;
}

// Position - 0x1F18
void func_35(int iParam0) {
	if (Global_69969 != iParam0) {
		Global_69969 = iParam0;
	}
}

// Position - 0x1F32
int func_36(var *uParam0, var *uParam1, vector3 vParam2) {
	int iVar0;

	iVar0 = uParam0->f_10;
	if ((*uParam1)[iVar0 /*11*/].f_10) {
		if ((*uParam1)[iVar0 /*11*/].f_1 != 0) {
			if (object::has_pickup_been_collected((*uParam1)[iVar0 /*11*/].f_1) ||
				func_49((*uParam1)[iVar0 /*11*/].f_1)) {
				func_39(uParam0, uParam1, iVar0);
				return 1;
			}
		}
	}
	if (object::does_pickup_exist((*uParam1)[iVar0 /*11*/].f_1)) {
		if (system::vdist2(vParam2, object::get_pickup_coords((*uParam1)[iVar0 /*11*/].f_1)) > 60f * 60f ||
			func_38(13) || func_38(14)) {
			func_37(&(*uParam1)[iVar0 /*11*/].f_1);
			(*uParam1)[iVar0 /*11*/].f_1 = 0;
			(*uParam1)[iVar0 /*11*/].f_10 = 0;
		}
	}
	return 0;
}

// Position - 0x1FEF
void func_37(var *uParam0) {
	if (object::does_pickup_exist(*uParam0)) {
		object::remove_pickup(*uParam0);
	}
}

// Position - 0x2008
bool func_38(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x2016
void func_39(var *uParam0, var *uParam1, int iParam2) {
	int iVar0;

	iVar0 = func_32(*uParam0) + iParam2;
	func_37(&(*uParam1)[iParam2 /*11*/].f_1);
	func_48(&(*uParam1)[iParam2 /*11*/].f_2);
	(*uParam1)[iParam2 /*11*/].f_1 = 0;
	(*uParam1)[iParam2 /*11*/].f_10 = 0;
	func_47(&uParam0->f_1, iParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0) {
		func_46(*uParam0, iParam2, 1);
	}
	controls::set_pad_shake(0, 200, 250);
	stats::stat_increment(uParam0->f_6, 1f);
	if (bLocal_41) {
		func_45(&uParam0->f_1, iParam2);
	}
	else {
		func_43(&uParam0->f_1);
	}
	func_41();
	stats::_0x79AB33F0FBFAC40C(iVar0);
	func_40(1, 0);
	func_10();
	uParam0->f_11 = 1;
}

// Position - 0x20C1
void func_40(int iParam0, int iParam1) {
	Global_91530.f_7 = iParam0;
	Global_91530.f_8 = iParam1;
}

// Position - 0x20D9
void func_41() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = 0;
	stats::stat_get_int(func_42(0), &iVar0, -1);
	iVar1 += iVar0;
	if (iVar0 > 0) {
		func_12(18, iVar0);
	}
	stats::stat_get_int(func_42(1), &iVar0, -1);
	iVar1 += iVar0;
	if (iVar0 > 0) {
		func_12(19, iVar0);
	}
	stats::stat_get_int(func_42(3), &iVar0, -1);
	iVar1 += iVar0;
	if (iVar0 > 0) {
		func_12(20, iVar0);
	}
	iVar2 = func_34(0) + func_34(1) + func_34(3);
	if (iVar2 > 0) {
		iVar3 = iVar1 * 100 / iVar2;
	}
	stats::stat_set_int(joaat("percent_hidden_packages"), iVar3, 1);
}

// Position - 0x217C
int func_42(int iParam0) {
	if (iParam0 == 3) {
		return joaat("num_hidden_packages_3");
	}
	if (iParam0 == 1) {
		return joaat("num_hidden_packages_0");
	}
	if (iParam0 == 0) {
		return joaat("num_hidden_packages_1");
	}
	if (iParam0 == 5) {
		return joaat("num_hidden_packages_4");
	}
	return joaat("num_hidden_packages_2");
}

// Position - 0x21CD
void func_43(var *uParam0) {
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (uParam0->f_3 <= 0) {
	}
	if (uParam0->f_2 <= 0) {
	}
	if (bLocal_40) {
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3) {
		if (func_54(uParam0, iVar0)) {
			iVar1++;
			func_13(uParam0->f_2 + iVar0, 1, -1, 1);
			if (bLocal_40) {
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40) {
	}
	if (iVar1 == uParam0->f_3 && uParam0->f_2 == 705) {
		func_44(168, 0);
	}
}

// Position - 0x2250
void func_44(int iParam0, int iParam1) {
	if (iParam0 == 235 || iParam0 == 0) {
		return;
	}
	Global_101700.f_7572[iParam0] = 1;
	Global_101700.f_7572.f_236[iParam0] = gameplay::get_game_timer() + iParam1;
}

// Position - 0x228D
void func_45(var *uParam0, int iParam1) {
	if (uParam0->f_3 <= 0) {
	}
	if (uParam0->f_2 <= 0) {
	}
	if (bLocal_40) {
	}
	if (iParam1 >= uParam0->f_3) {
	}
	if (func_54(uParam0, iParam1)) {
		uParam0->f_4++;
		func_13(uParam0->f_2 + iParam1, 1, -1, 1);
		if (bLocal_40) {
		}
	}
	if (bLocal_40) {
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705) {
		func_44(168, 0);
	}
}

// Position - 0x2301
void func_46(int iParam0, int iParam1, int iParam2) {
	if (iParam1 < 0 || iParam1 >= 64) {
		return;
	}
	if (iParam0 == 1) {
		if (iParam1 <= 31) {
			if (iParam2) {
				gameplay::set_bit(&Global_101700.f_9008.f_122, iParam1);
			}
			else {
				gameplay::clear_bit(&Global_101700.f_9008.f_122, iParam1);
			}
			return;
		}
		if (iParam2) {
			gameplay::set_bit(&Global_101700.f_9008.f_122.f_1, iParam1 - 32);
		}
		else {
			gameplay::clear_bit(&Global_101700.f_9008.f_122.f_1, iParam1 - 32);
		}
	}
	else if (iParam0 == 0) {
		if (iParam1 <= 31) {
			if (iParam2) {
				gameplay::set_bit(&Global_101700.f_9008.f_125, iParam1);
			}
			else {
				gameplay::clear_bit(&Global_101700.f_9008.f_125, iParam1);
			}
			return;
		}
		if (iParam2) {
			gameplay::set_bit(&Global_101700.f_9008.f_125.f_1, iParam1 - 32);
		}
		else {
			gameplay::clear_bit(&Global_101700.f_9008.f_125.f_1, iParam1 - 32);
		}
	}
}

// Position - 0x23ED
void func_47(int *iParam0, int iParam1, int iParam2) {
	if (iParam1 < 0 || iParam1 >= 64) {
		return;
	}
	if (iParam1 <= 31) {
		if (iParam2) {
			gameplay::set_bit(uParam0, iParam1);
		}
		else {
			gameplay::clear_bit(iParam0, iParam1);
		}
		return;
	}
	if (iParam2) {
		gameplay::set_bit(&iParam0->f_1, iParam1 - 32);
	}
	else {
		gameplay::clear_bit(&iParam0->f_1, iParam1 - 32);
	}
}

// Position - 0x244E
void func_48(int *iParam0) {
	if (ui::does_blip_exist(*iParam0)) {
		ui::set_blip_route(*iParam0, 0);
		ui::remove_blip(iParam0);
	}
}

// Position - 0x246E
int func_49(var *uParam0) {
	int iVar0;
	int iVar1;

	if (!object::does_pickup_exist(uParam0)) {
		return 0;
	}
	if (func_50(player::player_ped_id())) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
			iVar1 = entity::get_entity_model(iVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2")) {
				if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1),
								   object::get_pickup_coords(uParam0)) < 5f * 5f ||
					entity::is_entity_touching_entity(player::player_ped_id(), object::get_pickup_object(uParam0))) {
					return 1;
				}
			}
		}
	}
	return 0;
}

// Position - 0x24FA
bool func_50(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x251B
void func_51(var *uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;

	if (!uParam0->f_10) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (!func_38(13) && !func_38(14)) {
				if (!object::does_pickup_exist(uParam0->f_1)) {
					if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1), uParam0->f_3) <=
						50f * 50f) {
						streaming::request_model(iParam1);
						while (!streaming::has_model_loaded(iParam1)) {
							streaming::request_model(iParam1);
							system::wait(0);
						}
						if (iParam3) {
							func_52(uParam0->f_3);
						}
						gameplay::clear_area(uParam0->f_3, 2.5f, 0, 0, 0, 0);
						if (iParam4) {
							gameplay::set_bit(&iVar0, 1);
							uParam0->f_1 = object::create_pickup_rotate(joaat("pickup_custom_script"), uParam0->f_3,
																		uParam0->f_6, iVar0, -1, iParam5, 1, iParam1);
						}
						else {
							gameplay::set_bit(&iVar0, 3);
							gameplay::set_bit(&iVar0, 4);
							gameplay::set_bit(&iVar0, 8);
							gameplay::set_bit(&iVar0, 1);
							uParam0->f_1 = object::create_pickup(iParam2, uParam0->f_3, iVar0, -1, 1, iParam1);
						}
						streaming::set_model_as_no_longer_needed(iParam1);
					}
				}
			}
			if (object::does_pickup_exist(uParam0->f_1)) {
				uParam0->f_10 = 1;
			}
		}
	}
}

// Position - 0x2634
void func_52(vector3 vParam0) {
	int iVar0;

	iVar0 = interior::get_interior_at_coords(vParam0);
	if (interior::is_valid_interior(iVar0)) {
		interior::_load_interior(iVar0);
		while (!interior::is_interior_ready(iVar0)) {
			system::wait(0);
		}
		system::wait(0);
		interior::unpin_interior(iVar0);
	}
}

// Position - 0x2672
bool func_53(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x26B9
bool func_54(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 64) {
		return false;
	}
	if (iParam1 <= 31) {
		return gameplay::is_bit_set(*uParam0, iParam1);
	}
	return gameplay::is_bit_set(uParam0->f_1, iParam1 - 32);
}

// Position - 0x26F7
void func_55() {
	float fVar0;

	switch (iLocal_411) {
	case 0:
		if (func_62()) {
			if (func_50(iLocal_409)) {
				func_61();
				vehicle::set_boat_anchor(iLocal_409, 0);
				iLocal_411 = 1;
				if (iLocal_386 == 2) {
					func_2(3);
				}
			}
		}
		else if (func_50(iLocal_409) && func_50(player::player_ped_id())) {
			if (entity::is_entity_in_water(player::player_ped_id())) {
				fVar0 = 500f;
			}
			else {
				fVar0 = 250f;
			}
			if (func_60(player::player_ped_id(), iLocal_409, 0) > fVar0) {
				func_59();
				if (iLocal_386 == 2) {
					func_2(3);
				}
			}
		}
		else {
			func_61();
			if (iLocal_386 == 2) {
				func_2(3);
			}
		}
		break;

	case 1:
		if (iLocal_386 == 2) {
			func_2(3);
		}
		if (!func_62()) {
			if (func_50(iLocal_409)) {
				if (!ui::does_blip_exist(iLocal_410)) {
					iLocal_410 = func_56(iLocal_409, 0, 0);
				}
				vehicle::set_vehicle_engine_on(iLocal_409, 0, 1, 0);
				if (vehicle::is_this_model_a_boat(entity::get_entity_model(iLocal_409))) {
					if (!entity::has_entity_collided_with_anything(iLocal_409)) {
						vehicle::set_boat_anchor(iLocal_409, 1);
					}
				}
				iLocal_411 = 0;
			}
		}
		break;
	}
}

// Position - 0x2818
int func_56(int iParam0, int iParam1, int iParam2) { return func_57(iParam0, !iParam1, iParam2); }

// Position - 0x282B
int func_57(int iParam0, int iParam1, bool bParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	iVar0 = ui::add_blip_for_entity(iParam0);
	if (entity::is_entity_a_vehicle(iParam0)) {
		ui::set_blip_scale(iVar0, func_58(network::network_is_game_in_progress(), 1f, 1f));
		if (!bParam2) {
			ui::set_blip_as_friendly(iVar0, iParam1);
		}
		else {
			ui::set_blip_colour(iVar0, 2);
		}
	}
	else if (entity::is_entity_a_ped(iParam0)) {
		ui::set_blip_scale(iVar0, func_58(network::network_is_game_in_progress(), 0.7f, 0.7f));
		ui::set_blip_as_friendly(iVar0, iParam1);
	}
	else if (entity::is_entity_an_object(iParam0)) {
		ui::set_blip_scale(iVar0, func_58(network::network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

// Position - 0x28CF
var func_58(bool bParam0, float fParam1, float fParam2) {
	if (bParam0) {
		return fParam1;
	}
	return fParam2;
}

// Position - 0x28E6
void func_59() {
	func_61();
	if (func_50(iLocal_409)) {
		if (vehicle::is_this_model_a_boat(entity::get_entity_model(iLocal_409))) {
			vehicle::set_boat_anchor(iLocal_409, 0);
		}
		entity::set_entity_records_collisions(iLocal_409, 0);
		if (entity::is_entity_a_mission_entity(iLocal_409)) {
			entity::set_vehicle_as_no_longer_needed(&iLocal_409);
		}
	}
}

// Position - 0x292B
float func_60(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x2989
void func_61() {
	if (ui::does_blip_exist(iLocal_410)) {
		ui::remove_blip(&iLocal_410);
	}
}

// Position - 0x29A2
bool func_62() {
	if (func_50(player::player_ped_id())) {
		if (func_50(iLocal_409)) {
			if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_409, 0)) {
				return true;
			}
		}
		else if (func_63()) {
			iLocal_409 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
			if (entity::does_entity_exist(iLocal_409)) {
				entity::set_entity_as_mission_entity(iLocal_409, 1, 1);
				entity::set_entity_records_collisions(iLocal_409, 1);
				return true;
			}
		}
	}
	return false;
}

// Position - 0x2A08
bool func_63() {
	int iVar0;

	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
		if (entity::does_entity_exist(iVar0)) {
			if (entity::get_entity_model(iVar0) == joaat("dinghy") ||
				entity::get_entity_model(iVar0) == joaat("dinghy2")) {
				return true;
			}
			else {
				return false;
			}
		}
	}
	return false;
}

// Position - 0x2A5D
void func_64() {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	int iVar7;

	vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	if (func_24(&Local_42, &Local_55, vVar0, &iLocal_388)) {
		vVar3 = {func_23(iLocal_388)};
		fVar6 = gameplay::get_distance_between_coords(vVar3, vVar0, 0);
		if (fVar6 > 200f) {
			func_66();
			if (!iLocal_406) {
				iLocal_406 = 1;
			}
			if (func_63()) {
				if (!func_25(41)) {
					func_20("DIVING_HELP1", 1, 0, -1, 10000, 7, 0, 0, 0);
					func_19(41);
				}
				if (iLocal_388 != iLocal_391) {
					if (ui::does_blip_exist(iLocal_390)) {
						ui::remove_blip(&iLocal_390);
					}
				}
				if (!ui::does_blip_exist(iLocal_390)) {
					iLocal_390 = ui::add_blip_for_radius(vVar3, 200f);
					ui::set_blip_alpha(iLocal_390, 128);
					ui::set_blip_colour(iLocal_390, 2);
					ui::_0x54318C915D27E4CE(iLocal_390, 0);
					ui::set_blip_name_from_text_file(iLocal_390, "B_WRE");
					ui::_0x75A16C3DA34F1245(iLocal_390, 0);
					iLocal_391 = iLocal_388;
				}
			}
			else if (ui::does_blip_exist(iLocal_390)) {
				ui::remove_blip(&iLocal_390);
			}
		}
		else {
			if (func_63()) {
				if (!func_25(42)) {
					func_20("DIVING_HELP2", 1, 0, -1, 10000, 7, 0, 0, 0);
					func_19(42);
				}
			}
			if (func_25(42)) {
				if (!func_25(43)) {
					if (entity::is_entity_in_water(player::player_ped_id()) &&
						!ped::is_ped_swimming_under_water(player::player_ped_id())) {
						func_20("DIVING_HELP3", 1, 2000, -1, 10000, 7, 0, 0, 0);
						func_19(43);
					}
				}
			}
			if (ui::does_blip_exist(iLocal_390)) {
				ui::remove_blip(&iLocal_390);
			}
			if (iLocal_388 != iLocal_391) {
				func_66();
				iLocal_391 = iLocal_388;
				iLocal_406 = 1;
			}
			if (Local_42.f_1.f_4 < Local_42.f_1.f_3) {
				if (iLocal_406) {
					fLocal_403 = 0f;
					fLocal_404 = fVar6;
					if (func_63()) {
						fLocal_404 = func_65(fLocal_404, 20f, 200f);
					}
					else {
						fLocal_404 = func_65(fLocal_404, 10f, 200f);
					}
					fLocal_405 = fLocal_404 * 0.025f;
					iLocal_406 = 0;
					if (func_63()) {
						audio::play_sound_from_coord(iLocal_408, "SINGLE_BLIP_FROM_BOAT", vVar3,
													 "ABIGAIL_SONAR_SOUNDSET", 0, 0, 0);
					}
					else {
						audio::play_sound_from_coord(iLocal_408, "SCRIPT_TRIGGERED_FROM_PROP", vVar0,
													 "ABIGAIL_SONAR_SOUNDSET", 0, 0, 0);
					}
				}
				else {
					fLocal_403 += fLocal_405;
					fLocal_403 = func_65(fLocal_403, 0f, fLocal_404);
					if (!ui::does_blip_exist(iLocal_392)) {
						iLocal_392 = ui::add_blip_for_radius(vVar3, fLocal_403);
						ui::set_blip_alpha(iLocal_392, 255);
						ui::set_blip_colour(iLocal_392, 4);
						ui::set_blip_as_short_range(iLocal_392, 1);
						ui::_0x25615540D894B814(iLocal_392, 1);
						ui::_0x75A16C3DA34F1245(iLocal_392, 0);
					}
					else {
						ui::set_blip_scale(iLocal_392, fLocal_403);
					}
					iVar7 = 0;
					if (func_63()) {
						iVar7 = 0;
						while (iVar7 <= 3) {
							if (!ui::does_blip_exist(uLocal_393[iVar7])) {
								uLocal_393[iVar7] = ui::add_blip_for_radius(vVar3, fLocal_403 + fLocal_398[iVar7]);
								ui::set_blip_alpha(uLocal_393[iVar7], 255);
								ui::set_blip_colour(uLocal_393[iVar7], 4);
								ui::set_blip_as_short_range(uLocal_393[iVar7], 1);
								ui::_0x25615540D894B814(uLocal_393[iVar7], 1);
								ui::_0x75A16C3DA34F1245(uLocal_393[iVar7], 0);
							}
							else {
								ui::set_blip_scale(uLocal_393[iVar7], fLocal_403 + fLocal_398[iVar7]);
							}
							iVar7++;
						}
					}
					else {
						iVar7 = 0;
						while (iVar7 <= 3) {
							if (ui::does_blip_exist(uLocal_393[iVar7])) {
								ui::set_blip_scale(uLocal_393[iVar7], fLocal_403);
							}
							iVar7++;
						}
					}
					if (fLocal_403 >= fLocal_404) {
						iLocal_406 = 1;
					}
				}
			}
			else {
				func_66();
			}
		}
	}
}

// Position - 0x2DD3
float func_65(float fParam0, float fParam1, float fParam2) {
	if (fParam0 > fParam2) {
		return fParam2;
	}
	else if (fParam0 < fParam1) {
		return fParam1;
	}
	return fParam0;
}

// Position - 0x2DFA
void func_66() {
	int iVar0;

	if (ui::does_blip_exist(iLocal_392)) {
		ui::remove_blip(&iLocal_392);
	}
	iVar0 = 0;
	while (iVar0 <= 3) {
		if (ui::does_blip_exist(uLocal_393[iVar0])) {
			ui::remove_blip(&uLocal_393[iVar0]);
		}
		iVar0++;
	}
}

// Position - 0x2E3E
void func_67() {
	iLocal_389 = 0;
	if (func_62()) {
		iLocal_411 = 1;
	}
	else {
		iLocal_411 = 0;
	}
	func_71();
	func_70(&Local_42, 5, joaat("prop_sub_chunk_01"), "DIVING_COLLECT");
	func_68(&Local_42, joaat("num_hidden_packages_4"), 845, 30);
	func_2(1);
	fLocal_398[0] = 0.25f;
	fLocal_398[1] = 0.5f;
	fLocal_398[2] = 0.75f;
	fLocal_398[3] = 1f;
}

// Position - 0x2EAC
void func_68(var *uParam0, int iParam1, int iParam2, int iParam3) {
	uParam0->f_6 = iParam1;
	func_69(&uParam0->f_1, iParam2, iParam3);
}

// Position - 0x2EC6
void func_69(var *uParam0, var uParam1, var uParam2) {
	int iVar0;
	int iVar1;

	iVar1 = 0;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
	if (bLocal_40) {
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3) {
		if (func_29(uParam0->f_2 + iVar0, -1, -1)) {
			iVar1++;
			func_47(uParam0, iVar0, 1);
			if (bLocal_40) {
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40) {
	}
}

// Position - 0x2F2F
void func_70(var *uParam0, int iParam1, int iParam2, char *sParam3) {
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_10 = 0;
}

// Position - 0x2F4D
void func_71() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30) {
		Local_55[iVar0 /*11*/].f_3 = {func_23(iVar0)};
		Local_55[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	Local_55[0 /*11*/].f_6 = {-16.4f, 78.53f, -146.67f};
	Local_55[1 /*11*/].f_6 = {0f, 45f, 10f};
	Local_55[2 /*11*/].f_6 = {0.72f, 65.2f, -50.26f};
	Local_55[3 /*11*/].f_6 = {0f, 15f, -132.16f};
	Local_55[4 /*11*/].f_6 = {166.37f, -40f, 168.81f};
	Local_55[5 /*11*/].f_6 = {90f, 56.2f, 90f};
	Local_55[6 /*11*/].f_6 = {-20f, 0f, 89.95f};
	Local_55[7 /*11*/].f_6 = {4.08f, 54.9f, -65.35f};
	Local_55[8 /*11*/].f_6 = {174.15f, -58.2f, -144.66f};
	Local_55[9 /*11*/].f_6 = {-28.22f, 36.11f, -90.22f};
	Local_55[10 /*11*/].f_6 = {-5f, 44f, 65f};
	Local_55[11 /*11*/].f_6 = {0f, -108f, 45.36f};
	Local_55[12 /*11*/].f_6 = {-10.9f, 43.12f, 131.52f};
	Local_55[13 /*11*/].f_6 = {12.37f, 49.66f, 126.88f};
	Local_55[14 /*11*/].f_6 = {4.35f, 10.22f, 27.51f};
	Local_55[15 /*11*/].f_6 = {0f, 10f, 60.73f};
	Local_55[16 /*11*/].f_6 = {150.56f, -78.67f, -174.35f};
	Local_55[17 /*11*/].f_6 = {0f, 50f, 46.41f};
	Local_55[18 /*11*/].f_6 = {6.26f, 44.65f, 8.88f};
	Local_55[19 /*11*/].f_6 = {90f, 78.5f, 16.04f};
	Local_55[20 /*11*/].f_6 = {-1.36f, 6.53f, -70.94f};
	Local_55[21 /*11*/].f_6 = {-61.86f, 78.61f, 126.5f};
	Local_55[22 /*11*/].f_6 = {-10f, -80.71f, 69.7f};
	Local_55[23 /*11*/].f_6 = {-76.43f, -70.02f, 29.74f};
	Local_55[24 /*11*/].f_6 = {-28f, -70f, 107.53f};
	Local_55[25 /*11*/].f_6 = {4.19f, 6.46f, 110.43f};
	Local_55[26 /*11*/].f_6 = {-3.19f, 60.6f, 25f};
	Local_55[27 /*11*/].f_6 = {0f, -81.68f, -20.16f};
	Local_55[28 /*11*/].f_6 = {7.39f, 44.52f, 19.65f};
	Local_55[29 /*11*/].f_6 = {89.74f, 80.95f, 151.74f};
}

// Position - 0x324B
bool func_72(int iParam0) {
	if (!entity::does_entity_exist(iParam0)) {
		return false;
	}
	return !entity::is_entity_dead(iParam0, 0);
}

// Position - 0x3269
bool func_73(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_74(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x328B
bool func_74(int iParam0) { return func_75(iParam0, Global_35781); }

// Position - 0x329C
int func_75(int iParam0, int iParam1) {
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

// Position - 0x347D
int func_76(int iParam0) {
	int iVar0;
	int iVar1;

	if (iParam0 <= 31) {
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else {
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}
	if (gameplay::is_bit_set(Global_101700.f_8044.f_99.f_219[iVar0], iVar1)) {
		return 0;
	}
	gameplay::set_bit(&Global_101700.f_8044.f_99.f_219[iVar0], iVar1);
	return 1;
}

// Position - 0x34D7
void func_77(int iParam0) {
	int iVar0;

	if (ui::does_blip_exist(iLocal_390)) {
		ui::remove_blip(&iLocal_390);
	}
	func_66();
	if (!audio::has_sound_finished(iLocal_408)) {
		audio::stop_sound(iLocal_408);
	}
	func_59();
	iVar0 = 0;
	while (iVar0 < Local_55) {
		func_48(&Local_55[iVar0 /*11*/].f_2);
		func_37(&Local_55[iVar0 /*11*/].f_1);
		Local_55[iVar0 /*11*/].f_1 = 0;
		iVar0++;
	}
	if (iParam0) {
		if (func_79(&Local_42.f_1) || func_17(110) == 1) {
			func_78(27);
		}
		streaming::set_model_as_no_longer_needed(Local_42.f_7);
		script::terminate_this_thread();
	}
	else {
		iLocal_386 = 0;
	}
}

// Position - 0x3576
int func_78(int iParam0) {
	int iVar0;
	int iVar1;

	if (iParam0 <= 31) {
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else {
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}
	if (gameplay::is_bit_set(Global_101700.f_8044.f_99.f_219[iVar0], iVar1)) {
		gameplay::clear_bit(&Global_101700.f_8044.f_99.f_219[iVar0], iVar1);
		return 1;
	}
	return 0;
}

// Position - 0x35D0
bool func_79(var *uParam0) {
	if (uParam0->f_3 <= 0) {
	}
	return uParam0->f_4 >= uParam0->f_3;
}
