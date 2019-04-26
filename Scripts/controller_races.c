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
	if (player::has_force_cleanup_occurred(82)) {
		func_30();
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("controller_races")) > 1) {
		script::terminate_this_thread();
	}
	while (script::_get_number_of_instances_of_script_with_name_hash(joaat("initial")) > 0) {
		system::wait(0);
	}
	func_29();
	while (true) {
		if (func_26(9) || Global_88744) {
			func_30();
		}
		if (player::is_player_playing(player::player_id())) {
			if (func_24()) {
				func_22();
				func_18();
				if (func_12() == 1) {
					switch (iLocal_28) {
					case 1: break;

					case 2: func_1(); break;
					}
				}
			}
		}
		system::wait(1000);
	}
}

// Position - 0xE5
void func_1() {
	int iVar0;
	int iVar1;
	float fVar2;

	if (func_11(8)) {
		iVar0 = 0;
		while (iVar0 <= 5 - 1) {
			iVar1 = func_10(iVar0);
			if (gameplay::is_bit_set(Global_101700.f_23938.f_1, iVar0)) {
				if (gameplay::is_bit_set(Global_101700.f_23938.f_3, iVar0)) {
					fVar2 = system::vdist2(func_9(player::player_id()), func_8(iVar1, 0));
					if (fVar2 > 43681f) {
						if (!func_7(iVar1)) {
							if (!Global_101674[iVar0]) {
								func_3(iVar1);
								func_2(iVar1, 1, 1);
								gameplay::clear_bit(&Global_101700.f_23938.f_3, iVar0);
							}
							else if (gameplay::get_game_timer() - Global_101680[iVar0] > 60000) {
								Global_101674[iVar0] = 0;
								Global_101680[iVar0] = gameplay::get_game_timer();
								func_3(iVar1);
								func_2(iVar1, 1, 1);
								gameplay::clear_bit(&Global_101700.f_23938.f_3, iVar0);
							}
						}
						else {
							gameplay::clear_bit(&Global_101700.f_23938.f_3, iVar0);
						}
					}
					else if (func_7(iVar1)) {
						func_2(iVar1, 0, 1);
					}
				}
				else if (!func_7(iVar1)) {
					if (!Global_101674[iVar0]) {
						func_3(iVar1);
						func_2(iVar1, 1, 1);
					}
					else if (gameplay::get_game_timer() - Global_101680[iVar0] > 60000) {
						Global_101674[iVar0] = 0;
						Global_101680[iVar0] = gameplay::get_game_timer();
						func_3(iVar1);
						func_2(iVar1, 1, 1);
					}
				}
			}
			iVar0++;
		}
	}
}

// Position - 0x259
void func_2(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (!iParam2) {
		iVar1 = gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 15);
		if (iVar1 == iParam1) {
			return;
		}
	}
	if (iParam1 != gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 0)) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
		if (Global_25498 == 1) {
			Global_25499 = 1;
		}
		Global_25498 = 1;
	}
	if (iParam1) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 0);
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 15);
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 3);
	}
	else {
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 0);
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 15);
	}
	if (!gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 0)) {
		if (ui::does_blip_exist(Global_25501[iVar0 /*23*/].f_19)) {
			gameplay::set_this_script_can_remove_blips_created_by_any_script(1);
			ui::remove_blip(&Global_25501[iVar0 /*23*/].f_19);
			gameplay::set_this_script_can_remove_blips_created_by_any_script(0);
		}
	}
}

// Position - 0x362
void func_3(int iParam0) {
	func_6(iParam0, 0, 0);
	func_5(iParam0, 1);
	func_4(iParam0, 1);
}

// Position - 0x380
void func_4(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (iParam1 == gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 4)) {
		return;
	}
	if (iParam1) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 4);
	}
	else {
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 4);
	}
	if (Global_25498 == 1) {
		Global_25499 = 1;
	}
	Global_25498 = 1;
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
}

// Position - 0x406
void func_5(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (iParam1 == gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 5)) {
		return;
	}
	if (iParam1) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 5);
	}
	else {
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 5);
	}
	if (Global_25498 == 1) {
		Global_25499 = 1;
	}
	Global_25498 = 1;
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
}

// Position - 0x48C
void func_6(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (iParam1 == gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 6)) {
		return;
	}
	if (iParam1) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 6);
	}
	else {
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 6);
	}
	if (iParam2) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 11);
	}
	else {
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 11);
	}
	if (Global_25498 == 1) {
		Global_25499 = 1;
	}
	Global_25498 = 1;
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
}

// Position - 0x538
bool func_7(int iParam0) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return false;
	}
	return ui::does_blip_exist(Global_25501[iVar0 /*23*/].f_19);
}

// Position - 0x574
Vector3 func_8(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return 0f, 0f, 0f;
	}
	return Global_25501[iVar0 /*23*/][iParam1 /*3*/];
}

// Position - 0x5B2
Vector3 func_9(int iParam0) { return entity::get_entity_coords(player::get_player_ped(iParam0), 0); }

// Position - 0x5C5
int func_10(int iParam0) {
	switch (iParam0) {
	case 0: return 86;

	case 1: return 87;

	case 2: return 88;

	case 3: return 89;

	case 4: return 90;
	}
	return 86;
}

// Position - 0x61C
bool func_11(int iParam0) { return gameplay::is_bit_set(Global_101700.f_8044.f_99.f_219[0], iParam0); }

// Position - 0x638
int func_12() {
	func_13();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x651
void func_13() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_17(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_16(player::player_ped_id());
			if (func_15(iVar0) && (!func_14(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_15(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x74E
bool func_14(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x75C
bool func_15(int iParam0) { return iParam0 < 3; }

// Position - 0x768
int func_16(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_17(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x7A5
int func_17(int iParam0) {
	if (func_15(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x7CF
void func_18() {
	int iVar0;
	int iVar1;
	float fVar2;

	if (func_11(7)) {
		iVar0 = 0;
		while (iVar0 <= 4 - 1) {
			iVar1 = func_21(iVar0);
			if (gameplay::is_bit_set(Global_101700.f_23935.f_2, iVar0)) {
				fVar2 = system::vdist2(func_9(player::player_id()), func_8(iVar1, 0));
				if (fVar2 > 43681f) {
					if (!func_7(iVar1)) {
						if (!Global_101664[iVar0]) {
							func_3(iVar1);
							func_2(iVar1, 1, 1);
							gameplay::clear_bit(&Global_101700.f_23935.f_2, iVar0);
						}
						else if (gameplay::get_game_timer() - Global_101669[iVar0] > 60000) {
							Global_101664[iVar0] = 0;
							Global_101669[iVar0] = gameplay::get_game_timer();
							func_3(iVar1);
							func_2(iVar1, 1, 1);
							gameplay::clear_bit(&Global_101700.f_23935.f_2, iVar0);
						}
					}
				}
				else if (func_7(iVar1)) {
					func_2(iVar1, 0, 1);
				}
			}
			else if (!func_7(iVar1)) {
				if (!Global_101664[iVar0]) {
					func_3(iVar1);
					func_2(iVar1, 1, 1);
				}
				else if (gameplay::get_game_timer() - Global_101669[iVar0] > 60000) {
					Global_101664[iVar0] = 0;
					Global_101669[iVar0] = gameplay::get_game_timer();
					func_3(iVar1);
					func_2(iVar1, 1, 1);
				}
			}
			else if (!Global_101700.f_23935) {
				if (iVar1 == 82) {
					func_20(82);
					func_19(65, 1000);
					Global_101700.f_23935 = 1;
				}
			}
			iVar0++;
		}
	}
}

// Position - 0x94A
void func_19(int iParam0, int iParam1) {
	if (iParam0 == 235 || iParam0 == 0) {
		return;
	}
	Global_101700.f_7572[iParam0] = 1;
	Global_101700.f_7572.f_236[iParam0] = gameplay::get_game_timer() + iParam1;
}

// Position - 0x987
void func_20(int iParam0) {
	func_6(iParam0, 1, 0);
	func_5(iParam0, 1);
	func_4(iParam0, 1);
}

// Position - 0x9A5
int func_21(int iParam0) {
	switch (iParam0) {
	case 0: return 82;

	case 1: return 83;

	case 2: return 84;

	case 3: return 85;
	}
	return 82;
}

// Position - 0x9EE
void func_22() {
	switch (iLocal_28) {
	case 0:
		if (time::get_clock_hours() < 20 && time::get_clock_hours() >= 5) {
			func_23();
			iLocal_28 = 1;
		}
		else {
			iLocal_28 = 2;
		}
		break;

	case 1:
		if (time::get_clock_hours() >= 20 || time::get_clock_hours() < 5) {
			iLocal_28 = 2;
		}
		break;

	case 2:
		if (time::get_clock_hours() < 20 && time::get_clock_hours() >= 5) {
			func_23();
			iLocal_28 = 1;
		}
		break;
	}
}

// Position - 0xA6F
void func_23() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 5 - 1) {
		func_2(func_10(iVar0), 0, 0);
		iVar0++;
	}
}

// Position - 0xA97
bool func_24() {
	if (func_26(9)) {
		return false;
	}
	if (func_25()) {
		return false;
	}
	if (player::get_player_wanted_level(player::player_id()) > 0) {
		return false;
	}
	if (streaming::is_player_switch_in_progress()) {
		return false;
	}
	return true;
}

// Position - 0xAD3
bool func_25() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("player_timetable_scene")) > 0) {
		return true;
	}
	return false;
}

// Position - 0xAED
bool func_26(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_27(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0xB0F
bool func_27(int iParam0) { return func_28(iParam0, Global_35781); }

// Position - 0xB20
int func_28(int iParam0, int iParam1) {
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

// Position - 0xD01
void func_29() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4 - 1) {
		Global_101664[iVar0] = 0;
		Global_101669[iVar0] = gameplay::get_game_timer();
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5 - 1) {
		Global_101674[iVar0] = 0;
		iVar0++;
	}
}

// Position - 0xD4F
void func_30() { script::terminate_this_thread(); }
