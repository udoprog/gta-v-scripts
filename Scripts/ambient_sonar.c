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
int iLocal_387 = 0;
int iLocal_388 = 0;
int iLocal_389 = 0;
int iLocal_390 = 0;
int *iLocal_391 = NULL;
int iLocal_392 = 0;
int *iLocal_393 = NULL;
int *iLocal_394 = NULL;
int iLocal_395[30] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
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
	bLocal_40 = true;
	bLocal_41 = true;
	iLocal_391 = -1;
	iLocal_392 = 5;
	if (player::has_force_cleanup_occurred(210)) {
		func_119();
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("ambient_sonar")) > 1) {
		script::terminate_this_thread();
	}
	func_118(13);
	func_117(0);
	while (true) {
		system::wait(0);
		func_116(player::player_ped_id());
		switch (iLocal_388) {
		case 0: func_110(); break;

		case 1: func_102(); break;

		case 2: func_1(); break;

		case 3: func_119(); break;
		}
	}
}

// Position - 0xEB
void func_1() {
	iLocal_389 = 0;
	if (func_101(player::player_ped_id())) {
		if (player::is_player_playing(player::player_id())) {
			if (func_67(&Local_42, &Local_55)) {
				func_28();
			}
			else if (ped::is_ped_in_any_sub(player::player_ped_id())) {
				iLocal_386 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
				func_117(1);
				func_13(0);
				if (func_101(player::player_ped_id())) {
					if (func_11(&Local_42, &Local_55, entity::get_entity_coords(player::player_ped_id(), 1),
								&iLocal_391)) {
						func_8();
					}
				}
				player::set_max_wanted_level(0);
				func_7();
				func_6(1);
			}
			else if (func_101(iLocal_386)) {
				if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1),
								   entity::get_entity_coords(iLocal_386, 1)) > 62500f) {
					func_5();
				}
				else if (!ui::does_blip_exist(iLocal_387)) {
					iLocal_387 = func_2(iLocal_386, 0, 0);
					ui::set_blip_sprite(iLocal_387, 308);
				}
			}
			else {
				func_7();
			}
		}
	}
}

// Position - 0x1CF
int func_2(int iParam0, int iParam1, int iParam2) { return func_3(iParam0, !iParam1, iParam2); }

// Position - 0x1E2
int func_3(int iParam0, int iParam1, bool bParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	iVar0 = ui::add_blip_for_entity(iParam0);
	if (entity::is_entity_a_vehicle(iParam0)) {
		ui::set_blip_scale(iVar0, func_4(network::network_is_game_in_progress(), 1f, 1f));
		if (!bParam2) {
			ui::set_blip_as_friendly(iVar0, iParam1);
		}
		else {
			ui::set_blip_colour(iVar0, 2);
		}
	}
	else if (entity::is_entity_a_ped(iParam0)) {
		ui::set_blip_scale(iVar0, func_4(network::network_is_game_in_progress(), 0.7f, 0.7f));
		ui::set_blip_as_friendly(iVar0, iParam1);
	}
	else if (entity::is_entity_an_object(iParam0)) {
		ui::set_blip_scale(iVar0, func_4(network::network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

// Position - 0x286
var func_4(bool bParam0, float fParam1, float fParam2) {
	if (bParam0) {
		return fParam1;
	}
	return fParam2;
}

// Position - 0x29D
void func_5() {
	func_7();
	if (entity::does_entity_exist(iLocal_386)) {
		entity::set_vehicle_as_no_longer_needed(&iLocal_386);
	}
}

// Position - 0x2BA
void func_6(int iParam0) { iLocal_388 = iParam0; }

// Position - 0x2C7
void func_7() {
	if (ui::does_blip_exist(iLocal_387)) {
		ui::remove_blip(&iLocal_387);
	}
}

// Position - 0x2E0
void func_8() {
	func_9(func_10(iLocal_391), 1, 1);
	iLocal_390 = 1;
}

// Position - 0x2F9
void func_9(vector3 vParam0, int iParam3, int iParam4) {
	Global_16851 = {vParam0};
	gameplay::clear_bit(&Global_2314, 30);
	if (iParam3) {
		gameplay::set_bit(&Global_2314, 29);
	}
	else {
		gameplay::clear_bit(&Global_2314, 29);
	}
	if (iParam4) {
		gameplay::set_bit(&Global_2315, 1);
	}
	else {
		gameplay::clear_bit(&Global_2315, 1);
	}
}

// Position - 0x345
Vector3 func_10(int iParam0) {
	switch (iParam0) {
	case 0: return -1435.61f, 5781.12f, -29.87f;

	case 1: return -1956.54f, -1125.07f, -37.21f;

	case 2: return 2752.88f, -1212.78f, -22.41f;

	case 3: return 3188.04f, -1668.19f, -146.88f;

	case 4: return 2555.04f, -2372.47f, -112.01f;

	case 5: return 2945.9f, 6537.41f, -27.36f;

	case 6: return -1266.69f, 6261.75f, -34.17f;

	case 7: return 3034.72f, 6550.42f, -35.2f;

	case 8: return 1694.53f, 6991.69f, -137.62f;

	case 9: return 1233.43f, 7081.15f, -141.72f;

	case 10: return -3413.73f, 830.23f, -12.95f;

	case 11: return 1422.5f, 6854.67f, -38.2f;

	case 12: return -3345.1f, 3547.8f, -59.1f;

	case 13: return -3437.93f, 3069.57f, -54.85f;

	case 14: return -2909.28f, 4204.32f, -111.62f;

	case 15: return -3179.12f, 2151.28f, -31.86f;

	case 16: return 4146.09f, 3825.86f, -40.96f;

	case 17: return 2716.61f, 6956.91f, -157.17f;

	case 18: return 2487.5f, 7001.69f, -143.56f;

	case 19: return -3043.23f, -212.16f, -23.48f;

	case 20: return -2871.1f, 4268.19f, -152.47f;

	case 21: return -777.21f, 6726.71f, -30.89f;

	case 22: return -3008.33f, 2877.73f, -27.76f;

	case 23: return -1843.12f, -1260.67f, -22.17f;

	case 24: return -2591.62f, -470.34f, -30.4f;

	case 25: return 3824.99f, 3729.17f, -16.17f;

	case 26: return 3885.44f, 3797.19f, -24.26f;

	case 27: return 2153.9f, -2826.37f, -50.76f;

	case 28: return 1873.5f, -3012.6f, -47f;

	case 29: return -2325.06f, -1046.7f, -70.67f;
	}
	return 0f, 0f, 0f;
}

// Position - 0x681
bool func_11(var *uParam0, int iParam1, vector3 vParam2, int *iParam5) {
	int iVar0;
	float fVar1;
	float fVar2;

	iVar0 = 0;
	fVar1 = 0f;
	fVar2 = -1f;
	iVar0 = 0;
	while (iVar0 < *iParam1) {
		if (!func_12(&uParam0->f_1, iVar0)) {
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

// Position - 0x6E8
bool func_12(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 64) {
		return false;
	}
	if (iParam1 <= 31) {
		return gameplay::is_bit_set(*uParam0, iParam1);
	}
	return gameplay::is_bit_set(uParam0->f_1, iParam1 - 32);
}

// Position - 0x726
int func_13(int iParam0) {
	if (func_14(17, 0, 1, 0)) {
		if (iParam0 == 1) {
			gameplay::set_bit(&Global_2314, 22);
		}
		else {
			gameplay::clear_bit(&Global_2314, 22);
		}
		return 1;
	}
	return 0;
}

// Position - 0x75D
bool func_14(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (Global_69702) {
		if (iParam0 != 17 && iParam0 != 3 && iParam0 != 23) {
			return false;
		}
		if (!gameplay::is_bit_set(Global_2595318, 14)) {
			if (iParam0 == 17) {
				gameplay::set_bit(&Global_2595318, 14);
				gameplay::set_bit(&Global_2595318, 16);
			}
			if (iParam0 == 3) {
				gameplay::set_bit(&Global_2595318, 14);
				gameplay::set_bit(&Global_2595318, 15);
			}
			if (iParam0 == 23) {
				gameplay::set_bit(&Global_2595318, 14);
				gameplay::set_bit(&Global_2595318, 27);
			}
		}
		if (Global_2320[iParam0 /*15*/].f_9 == 0) {
			func_26();
		}
		if (script::_get_number_of_instances_of_script_with_name_hash(Global_2320[iParam0 /*15*/].f_9) > 0) {
			gameplay::clear_bit(&Global_2595318, 14);
			gameplay::clear_bit(&Global_2595318, 16);
			gameplay::clear_bit(&Global_2595318, 15);
			gameplay::clear_bit(&Global_2595318, 27);
			return true;
		}
		else {
			return false;
		}
	}
	func_20();
	if (Global_14443.f_1 == 9) {
		return false;
	}
	if (iParam2 == 0) {
		if (func_19(0) == 1) {
			return false;
		}
	}
	if (Global_14409 == 1) {
		return false;
	}
	if (Global_14443.f_1 == 7) {
		return false;
	}
	if (iParam1 == 1) {
	}
	if (!script::is_thread_active(Global_14440)) {
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) == 0) {
			if (Global_14443.f_1 < 4) {
				func_18("cellphone_flashhand");
				if (script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) == 0) {
					Global_14440 = system::start_new_script("cellphone_flashhand", 1424);
				}
				script::set_script_as_no_longer_needed("cellphone_flashhand");
			}
		}
	}
	while (!Global_14425) {
		system::wait(0);
	}
	func_26();
	func_15();
	if (script::_get_number_of_instances_of_script_with_name_hash(Global_2320[iParam0 /*15*/].f_9) == 0) {
		Global_2919 = 0;
		Global_14443.f_1 = 7;
		func_18(&Global_2320[iParam0 /*15*/].f_5);
		if (iParam3) {
			if (script::_get_number_of_instances_of_script_with_name_hash(Global_2320[iParam0 /*15*/].f_9) == 0) {
				Global_14441 = system::start_new_script(&Global_2320[iParam0 /*15*/].f_5, 4000);
			}
		}
		else if (script::_get_number_of_instances_of_script_with_name_hash(Global_2320[iParam0 /*15*/].f_9) == 0) {
			Global_14441 = system::start_new_script(&Global_2320[iParam0 /*15*/].f_5, 2552);
		}
		script::set_script_as_no_longer_needed(&Global_2320[iParam0 /*15*/].f_5);
		return true;
	}
	return true;
}

// Position - 0x96E
void func_15() {
	if (Global_69702 == 0) {
		Global_2320[14 /*15*/].f_4 = -99;
		Global_2320[4 /*15*/].f_4 = -99;
		if (Global_2452520) {
			if (func_17(14)) {
				func_16(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_16(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else {
				func_16(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else {
			func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

// Position - 0x9F2
void func_16(int iParam0, char *sParam1, int iParam2, char *sParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8) {
	StringCopy(&Global_2320[iParam0 /*15*/], sParam1, 16);
	Global_2320[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&Global_2320[iParam0 /*15*/].f_5, sParam3, 16);
	Global_2320[iParam0 /*15*/].f_9 = gameplay::get_hash_key(sParam3);
	Global_2320[iParam0 /*15*/].f_10 = iParam4;
	Global_2320[iParam0 /*15*/].f_11 = iParam5;
	Global_2320[iParam0 /*15*/].f_12 = iParam6;
	Global_2320[iParam0 /*15*/].f_13 = iParam7;
	Global_2320[iParam0 /*15*/].f_14 = iParam8;
	if (Global_2320[iParam0 /*15*/].f_12 == 0) {
		Global_2320[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_2320[iParam0 /*15*/].f_13 == 0) {
		Global_2320[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_2320[iParam0 /*15*/].f_14 == 0) {
		Global_2320[iParam0 /*15*/].f_14 = 0;
	}
}

// Position - 0xAA8
bool func_17(int iParam0) { return Global_35781 == iParam0; }

// Position - 0xAB6
void func_18(char *sParam0) {
	script::request_script(sParam0);
	while (!script::has_script_loaded(sParam0)) {
		system::wait(0);
	}
}

// Position - 0xAD6
int func_19(int iParam0) {
	if (iParam0 == 1) {
		if (Global_14443.f_1 > 3) {
			if (gameplay::is_bit_set(Global_2313, 14)) {
				return 1;
			}
			else {
				return 0;
			}
		}
		else {
			return 0;
		}
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) > 0) {
		return 1;
	}
	if (Global_14443.f_1 > 3) {
		return 1;
	}
	return 0;
}

// Position - 0xB30
void func_20() {
	if (func_17(14)) {
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
		Global_14443 = func_21();
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

// Position - 0xBD2
var func_21() {
	func_22();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0xBEB
void func_22() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_25(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_24(player::player_ped_id());
			if (func_23(iVar0) && (!func_17(14) || Global_100652)) {
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

// Position - 0xCE8
bool func_23(int iParam0) { return iParam0 < 3; }

// Position - 0xCF4
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

// Position - 0xD31
int func_25(int iParam0) {
	if (func_23(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0xD5B
void func_26() {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 34) {
		Global_2320[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_69702 == 0) {
		iVar1 = 0;
		while (iVar2 < 150) {
			if (Global_101700.f_27009[iVar2 /*29*/].f_19[Global_14443] == 1) {
				iVar1 = 1;
			}
			iVar2++;
		}
		func_16(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if (Global_35781 == 15 && func_27(0) == 0 && Global_2318 == 0) {
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14607 = 0;
			Global_2319 = 255;
		}
		else {
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14607 = 1;
			Global_2319 = 42;
		}
		if (iVar1 == 1) {
			func_16(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else {
			func_16(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_16(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_101700.f_13010.f_89 == 1) {
			func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_101700.f_13010.f_88 == 1) {
			func_16(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_16(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_16(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else {
		func_16(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_16(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_16(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_16(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_16(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (gameplay::is_bit_set(Global_2595318, 4) == 1) {
			func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_16(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_16(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_16(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_16(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_16(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_16(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_16(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_16(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_16(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_16(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!gameplay::is_bit_set(Global_2595318, 4) == 1) {
			if (Global_1573849) {
				func_16(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (gameplay::is_bit_set(Global_2595318, 20) == 1) {
				func_16(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (gameplay::is_bit_set(Global_2595318, 22) == 1) {
				func_16(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (gameplay::is_bit_set(Global_2595318, 26) == 1) {
				func_16(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if (gameplay::is_bit_set(Global_2595318, 4) == 0 && Global_1573849 == 0 &&
			gameplay::is_bit_set(Global_2595318, 20) == 0 && gameplay::is_bit_set(Global_2595318, 22) == 0 &&
			gameplay::is_bit_set(Global_2595318, 26) == 0) {
			func_16(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

// Position - 0x1277
int func_27(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return 1;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x12A2
void func_28() {
	func_51(3, 250000);
	func_44(299, 0, 0);
	func_31(20, 1);
	func_29();
	func_6(3);
}

// Position - 0x12CD
void func_29() {
	int iVar0;

	iVar0 = func_30(65);
	Global_2413052[iVar0 /*83*/] = 65;
	StringCopy(&Global_2413052[iVar0 /*83*/].f_18[0 /*16*/], "", 64);
}

// Position - 0x12FA
int func_30(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19) {
		if (Global_2413052[iVar1 /*83*/] == iParam0) {
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2413052[iVar1 /*83*/] == 0) {
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

// Position - 0x1347
int func_31(int iParam0, int iParam1) {
	if (iParam0 >= 70) {
		return 0;
	}
	return func_32(iParam0, iParam1);
}

// Position - 0x1362
int func_32(int iParam0, int iParam1) {
	if (func_17(14) && !func_43(iParam0)) {
		return 0;
	}
	if (player::has_achievement_been_passed(iParam0) && iParam1 == 1) {
		return 0;
	}
	if (Global_25436 != 0 && !Global_69702) {
		return 0;
	}
	if (func_42(&Global_2595550)) {
		if (func_40(&Global_2595550, iParam0)) {
			return 0;
		}
		if (func_33(&Global_2595550, iParam0)) {
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

// Position - 0x13FF
bool func_33(var *uParam0, int iParam1) {
	int iVar0;
	var *uVar1[70];

	if (player::has_achievement_been_passed(iParam1)) {
		return false;
	}
	if (func_17(14) && !func_43(iParam1)) {
		return false;
	}
	if (func_40(uParam0, iParam1)) {
		return false;
	}
	if (func_39(uParam0) < 0f) {
		func_38(uParam0, 0);
	}
	func_36(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1) {
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_34(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

// Position - 0x14B0
int func_34(var *uParam0, int iParam1) {
	int iVar0;

	if (player::has_achievement_been_passed(iParam1)) {
		return 0;
	}
	if (func_17(14) && !func_43(iParam1)) {
		return 0;
	}
	if (func_40(uParam0, iParam1)) {
		return 0;
	}
	if (func_39(uParam0) < 0f) {
		func_38(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if (func_35(uParam0, iVar0)) {
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x152B
bool func_35(var *uParam0, int iParam1) { return (*uParam0)[iParam1] == 70; }

// Position - 0x153C
void func_36(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		func_37(uParam0, iVar0);
		iVar0++;
	}
	func_38(uParam0, Global_2595549 - 0.5f);
}

// Position - 0x1570
void func_37(var *uParam0, int iParam1) { (*uParam0)[iParam1] = 70; }

// Position - 0x1580
void func_38(var *uParam0, float fParam1) {
	if (fParam1 == 0f) {
		uParam0->f_72 = 0f;
	}
	else {
		uParam0->f_72 = fParam1;
	}
}

// Position - 0x159D
float func_39(var *uParam0) { return uParam0->f_72; }

// Position - 0x15A9
bool func_40(var *uParam0, int iParam1) { return func_41(uParam0, iParam1) != -1; }

// Position - 0x15BB
int func_41(var *uParam0, int iParam1) {
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

// Position - 0x15E8
bool func_42(var *uParam0) { return uParam0->f_71 == 1; }

// Position - 0x15F6
int func_43(int iParam0) {
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

// Position - 0x1646
void func_44(int iParam0, int iParam1, int iParam2) {
	bool bVar0;

	if (iParam0 < 0) {
	}
	if (iParam0 == 321 || iParam0 > 321) {
	}
	else {
		func_49(891 + iParam0, 1, -1, 1);
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
		func_45();
	}
}

// Position - 0x172E
void func_45() {
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
		func_48(13, system::floor(Global_101700.f_9153.f_3853));
	}
	if (!datafile::datafile_is_save_pending()) {
		if (!Global_69702) {
			if (func_47() == 2 == 0 && !network::network_is_game_in_progress()) {
				if (network::network_is_cloud_available()) {
					Global_101434 = 0;
				}
				if (!Global_55822) {
					func_46();
				}
			}
		}
	}
}

// Position - 0x1BEF
int func_46() {
	if (func_27(0)) {
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

// Position - 0x1C3A
int func_47() { return Global_25190; }

// Position - 0x1C45
int func_48(int iParam0, int iParam1) {
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

// Position - 0x1C96
int func_49(int iParam0, int iParam1, int iParam2, int iParam3) {
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
		iParam2 = func_50();
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

// Position - 0x202A
var func_50() { return Global_1312735; }

// Position - 0x2036
void func_51(int iParam0, int iParam1) {
	int iVar0;

	func_53(Global_101700.f_23863[iParam0 /*4*/], func_66(iParam0), iParam1, 0, 0);
	switch (iParam0) {
	case 3: Global_101700.f_23863.f_69 += iParam1; break;

	case 2: Global_101700.f_23863.f_70 += iParam1; break;

	case 0: Global_101700.f_23863.f_71 += iParam1; break;
	}
	stats::stat_get_int(func_52(iParam0, 1), &iVar0, -1);
	iVar0 += iParam1;
	stats::stat_set_int(func_52(iParam0, 1), iVar0, 1);
}

// Position - 0x20DD
int func_52(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0:
		switch (iParam1) {
		case 0: return joaat("prop_bought_towi");

		case 1: return joaat("prop_earned_towi");
		}
		break;

	case 1:
		switch (iParam1) {
		case 0: return joaat("prop_bought_taxi");

		case 1: return joaat("prop_earned_taxi");

		case 2: return joaat("prop_missions_taxi");
		}
		break;

	case 2:
		switch (iParam1) {
		case 0: return joaat("prop_bought_traf");

		case 1: return joaat("prop_earned_traf");
		}
		break;

	case 3:
		switch (iParam1) {
		case 0: return joaat("prop_bought_soco");

		case 1: return joaat("prop_earned_soco");
		}
		break;

	case 4:
		switch (iParam1) {
		case 0: return joaat("prop_bought_cmsh");

		case 1: return joaat("prop_earned_cmsh");
		}
		break;

	case 5:
		switch (iParam1) {
		case 0: return joaat("prop_bought_cinv");

		case 1: return joaat("prop_earned_cinv");

		case 2: return joaat("prop_missions_cinv");
		}
		break;

	case 6:
		switch (iParam1) {
		case 0: return joaat("prop_bought_cind");

		case 1: return joaat("prop_earned_cind");

		case 2: return joaat("prop_missions_cind");
		}
		break;

	case 7:
		switch (iParam1) {
		case 0: return joaat("prop_bought_cinm");

		case 1: return joaat("prop_earned_cinm");

		case 2: return joaat("prop_missions_cinm");
		}
		break;

	case 8:
		switch (iParam1) {
		case 0: return joaat("prop_bought_golf");

		case 1: return joaat("prop_earned_golf");
		}
		break;

	case 9:
		switch (iParam1) {
		case 0: return joaat("prop_bought_cscr");

		case 1: return joaat("prop_earned_cscr");

		case 2: return joaat("prop_missions_cscr");
		}
		break;

	case 10:
		switch (iParam1) {
		case 0: return joaat("prop_bought_weed");

		case 1: return joaat("prop_earned_weed");

		case 2: return joaat("prop_missions_weed");
		}
		break;

	case 11:
		switch (iParam1) {
		case 0: return joaat("prop_bought_barte");

		case 1: return joaat("prop_earned_barte");

		case 2: return joaat("prop_missions_barte");
		}
		break;

	case 12:
		switch (iParam1) {
		case 0: return joaat("prop_bought_barpi");

		case 1: return joaat("prop_earned_barpi");

		case 2: return joaat("prop_missions_barpi");
		}
		break;

	case 13:
		switch (iParam1) {
		case 0: return joaat("prop_bought_barhe");

		case 1: return joaat("prop_earned_barhe");

		case 2: return joaat("prop_missions_barhe");
		}
		break;

	case 14:
		switch (iParam1) {
		case 0: return joaat("prop_bought_barho");

		case 1: return joaat("prop_earned_barho");

		case 2: return joaat("prop_missions_barho");
		}
		break;

	case 15:
		switch (iParam1) {
		case 0: return joaat("prop_bought_strip");

		case 1: return joaat("prop_earned_strip");
		}
		break;
	}
	return joaat("prop_bought_towi");
}

// Position - 0x24BB
void func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;

	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 3) {
		return;
	}
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 4) {
		return;
	}
	func_54(Global_101700.f_27009[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (iParam3) {
		iVar0 = 0;
		if (iParam4) {
			switch (iParam0) {
			case 0: iVar1 = joaat("sp0_money_made_from_random_peds"); break;

			case 1: iVar1 = joaat("sp1_money_made_from_random_peds"); break;

			case 2: iVar1 = joaat("sp2_money_made_from_random_peds"); break;

			default: return;
			}
		}
		else {
			switch (iParam0) {
			case 0: iVar1 = joaat("sp0_money_made_from_missions"); break;

			case 1: iVar1 = joaat("sp1_money_made_from_missions"); break;

			case 2: iVar1 = joaat("sp2_money_made_from_missions"); break;

			default: return;
			}
		}
		stats::stat_get_int(iVar1, &iVar0, -1);
		iVar0 += iParam2;
		stats::stat_set_int(iVar1, iVar0, 1);
	}
}

// Position - 0x25A2
int func_54(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_65();
	if (iParam3 < 1) {
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 0:
			func_64(99, 1);
			func_63(joaat("sp0_money_total_spent"), iParam3);
			break;

		case 1: func_63(joaat("sp1_money_total_spent"), iParam3); break;

		case 2: func_63(joaat("sp2_money_total_spent"), iParam3); break;
		}
		func_62(0);
		switch (iParam2) {
		case 126:
		case 128:
		case 124:
		case 125:
		case 127:
			if (func_61(5)) {
				fVar0 = 0.9f;
				iVar1 = 5;
			}
			break;

		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
			switch (iParam0) {
			case 0: func_63(joaat("sp0_money_spent_on_tattoos"), iParam3); break;

			case 1: func_63(joaat("sp1_money_spent_on_tattoos"), iParam3); break;

			case 2: func_63(joaat("sp2_money_spent_on_tattoos"), iParam3); break;
			}
			if (func_61(1)) {
				fVar0 = 0f;
				iVar1 = 1;
			}
			break;

		case 21:
			switch (iParam0) {
			case 0: func_63(joaat("sp0_money_spent_on_taxis"), iParam3); break;

			case 1: func_63(joaat("sp1_money_spent_on_taxis"), iParam3); break;

			case 2: func_63(joaat("sp2_money_spent_on_taxis"), iParam3); break;
			}
			break;

		case 25:
			switch (iParam0) {
			case 0: func_63(joaat("sp0_money_spent_in_strip_clubs"), iParam3); break;

			case 1: func_63(joaat("sp1_money_spent_in_strip_clubs"), iParam3); break;

			case 2: func_63(joaat("sp2_money_spent_in_strip_clubs"), iParam3); break;
			}
			break;

		case 98:
		case 99:
		case 100:
		case 101:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
			switch (iParam0) {
			case 0: func_63(joaat("sp0_money_spent_property"), iParam3); break;

			case 1: func_63(joaat("sp1_money_spent_property"), iParam3); break;

			case 2: func_63(joaat("sp2_money_spent_property"), iParam3); break;
			}
			break;

		default:
			switch (script::get_hash_of_this_script_name()) {
			case joaat("clothes_shop_sp"):
				switch (iParam0) {
				case 0: func_63(joaat("sp0_money_spent_in_clothes"), iParam3); break;

				case 1: func_63(joaat("sp1_money_spent_in_clothes"), iParam3); break;

				case 2: func_63(joaat("sp2_money_spent_in_clothes"), iParam3); break;
				}
				break;

			case joaat("hairdo_shop_sp"):
				switch (iParam0) {
				case 0: func_63(joaat("sp0_money_spent_on_hairdos"), iParam3); break;

				case 1: func_63(joaat("sp1_money_spent_on_hairdos"), iParam3); break;

				case 2: func_63(joaat("sp2_money_spent_on_hairdos"), iParam3); break;
				}
				if (func_61(0)) {
					fVar0 = 0f;
					iVar1 = 0;
				}
				break;

			case joaat("gunclub_shop"):
				switch (iParam0) {
				case 0: func_63(joaat("sp0_money_spent_in_buying_guns"), iParam3); break;

				case 1: func_63(joaat("sp1_money_spent_in_buying_guns"), iParam3); break;

				case 2: func_63(joaat("sp2_money_spent_in_buying_guns"), iParam3); break;
				}
				break;

			case joaat("carmod_shop"):
				switch (iParam0) {
				case 0: func_63(joaat("sp0_money_spent_car_mods"), iParam3); break;

				case 1: func_63(joaat("sp1_money_spent_car_mods"), iParam3); break;

				case 2: func_63(joaat("sp2_money_spent_car_mods"), iParam3); break;
				}
				func_60(iParam3);
				break;
			}
			break;
		}
		break;

	case 1:
		switch (iParam0) {
		case 0: func_64(95, iParam3); break;

		case 1: func_64(97, iParam3); break;

		case 2: func_64(96, iParam3); break;
		}
		func_64(98, iParam3);
		break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor(fVar0 * system::to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f) {
		func_57(iVar1);
		return 1;
	}
	else if (fVar0 != 1f) {
		func_57(iVar1);
	}
	iVar5 = Global_52996[iVar2] + iParam3;
	switch (iParam1) {
	case 1:
		if (Global_52996[iVar2] >= 0 && iParam3 > 0) {
			if (iVar5 <= 0) {
				Global_52996[iVar2] = 2147483647;
			}
			else {
				Global_52996[iVar2] += iParam3;
			}
		}
		switch (iParam0) {
		case 0: func_63(joaat("sp0_total_cash_earned"), iParam3); break;

		case 1: func_63(joaat("sp1_total_cash_earned"), iParam3); break;

		case 2: func_63(joaat("sp2_total_cash_earned"), iParam3); break;
		}
		break;

	case 0:
		if (!iParam4) {
			if (Global_52996[iVar2] - iParam3 < 0) {
				return 0;
			}
		}
		iVar3 = Global_52996[iVar2];
		Global_52996[iVar2] -= iParam3;
		if (iParam4) {
			iVar4 = iVar3;
		}
		break;
	}
	if (iParam2 == 1) {
		if (iVar4 > 20) {
		}
	}
	else {
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 =
			iParam2;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 =
			iParam3;
		Global_101700.f_19523.f_233[iVar2 /*69*/]++;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_1++;
		if (Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 > 10) {
			Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_56(iParam0);
	if (Global_35781 == 15) {
		func_55(0);
	}
	return 1;
}

// Position - 0x2BA1
void func_55(int iParam0) {
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

// Position - 0x2E23
void func_56(int iParam0) {
	int iVar0;

	iVar0 = Global_52996[iParam0];
	switch (iParam0) {
	case 0: stats::stat_set_int(joaat("sp0_total_cash"), iVar0, 1); break;

	case 1: stats::stat_set_int(joaat("sp1_total_cash"), iVar0, 1); break;

	case 2: stats::stat_set_int(joaat("sp2_total_cash"), iVar0, 1); break;
	}
}

// Position - 0x2E7D
void func_57(int iParam0) {
	bool bVar0;
	char cVar1[64];

	bVar0 = false;
	if (!network::network_is_game_in_progress()) {
		if (gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0)) {
			bVar0 = true;
			gameplay::clear_bit(&Global_101700.f_19523.f_471, iParam0);
		}
	}
	else if (gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0) ||
			 gameplay::is_bit_set(Global_2097152[func_59() /*10758*/].f_7546.f_10, iParam0)) {
		bVar0 = true;
		gameplay::clear_bit(&Global_101700.f_19523.f_471, iParam0);
		gameplay::clear_bit(&Global_2097152[func_59() /*10758*/].f_7546.f_10, iParam0);
	}
	if (bVar0) {
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		ui::_set_notification_text_entry("COUP_RED");
		ui::add_text_component_substring_text_label(func_58(iParam0));
		ui::_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

// Position - 0x2F40
char *func_58(int iParam0) {
	switch (iParam0) {
	case 0: return "COUP_HAIRC";

	case 1: return "COUP_TATTOO";

	case 2: return "COUP_WARSTOCK";

	case 3: return "COUP_MOSPORT";

	case 4: return "COUP_ELITAS";

	case 5: return "COUP_MEDSPENS";

	case 6: return "COUP_SPRUNK";

	case 7: return "COUP_RESPRAY";

	default:
	}
	return "";
}

// Position - 0x2FBB
int func_59() {
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

// Position - 0x2FC8
void func_60(int iParam0) {
	func_64(93, iParam0);
	func_64(29, iParam0);
	func_64(30, iParam0);
}

// Position - 0x2FE8
bool func_61(int iParam0) {
	if (!network::network_is_game_in_progress()) {
		return gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0);
	}
	return gameplay::is_bit_set(Global_2097152[func_59() /*10758*/].f_7546.f_10, iParam0);
}

// Position - 0x3024
int func_62(int iParam0) {
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
	if (iParam0) {
	}
	iVar2 = 0;
	stats::stat_get_int(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && iVar2 / 2000000 != iVar1 / 2000000) {
		stats::stat_set_int(joaat("num_cash_spent"), iVar1, 1);
		func_48(27, iVar1);
	}
	if (iVar1 < 200000000) {
		return 0;
	}
	func_31(27, 1);
	return 1;
}

// Position - 0x30DB
void func_63(int iParam0, int iParam1) {
	int iVar0;

	stats::stat_get_int(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	stats::stat_set_int(iParam0, iVar0, 1);
}

// Position - 0x30FE
void func_64(int iParam0, int iParam1) {
	int iVar0;

	if (iParam1 < 1) {
		return;
	}
	if (Global_51564[iParam0 /*7*/].f_2) {
		return;
	}
	if (network::network_is_game_in_progress()) {
		return;
	}
	if (Global_51564[iParam0 /*7*/]) {
		stats::stat_get_int(Global_51564[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 += iParam1;
		stats::stat_set_int(Global_51564[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

// Position - 0x315B
void func_65() {
	int iVar0;

	if (network::network_is_signed_in()) {
		stats::stat_get_int(joaat("sp0_total_cash"), &iVar0, -1);
		if (Global_52996[0] != iVar0) {
			Global_52996[0] = iVar0;
		}
		stats::stat_get_int(joaat("sp1_total_cash"), &iVar0, -1);
		if (Global_52996[1] != iVar0) {
			Global_52996[1] = iVar0;
		}
		stats::stat_get_int(joaat("sp2_total_cash"), &iVar0, -1);
		if (Global_52996[2] != iVar0) {
			Global_52996[2] = iVar0;
		}
	}
}

// Position - 0x31D0
int func_66(int iParam0) {
	switch (iParam0) {
	case 0: return 98;

	case 1: return 99;

	case 2: return 100;

	case 3: return 101;

	case 4: return 102;

	case 5: return 103;

	case 6: return 104;

	case 7: return 105;

	case 8: return 106;

	case 9: return 107;

	case 10: return 108;

	case 11: return 109;

	case 12: return 110;

	case 13: return 111;

	case 14: return 112;

	case 15: return 25;
	}
	return 0;
}

// Position - 0x32C0
bool func_67(var *uParam0, int iParam1) {
	int iVar0;
	vector3 vVar1;
	int iVar4;

	ped::is_ped_injured(player::player_ped_id());
	vVar1 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	iVar0 = 0;
	while (iVar0 < iLocal_392) {
		iVar4 = func_12(&uParam0->f_1, uParam0->f_10);
		if (!(*iParam1)[uParam0->f_10 /*11*/].f_10) {
			if (!iVar4) {
				if (!func_100((*iParam1)[uParam0->f_10 /*11*/].f_6, 0f, 0f, 0f, 0)) {
					func_98(&(*iParam1)[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 0);
				}
				else {
					func_98(&(*iParam1)[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!iVar4) {
			if (func_85(uParam0, iParam1, vVar1)) {
				if (func_11(uParam0, iParam1, vVar1, &iLocal_391)) {
					func_51(3, 23000);
					func_8();
				}
			}
		}
		func_82(uParam0->f_10, iVar4);
		uParam0->f_10++;
		if (uParam0->f_10 >= *iParam1) {
			uParam0->f_10 = 0;
		}
		iVar0++;
	}
	if (!Global_69962) {
		func_72(&uParam0->f_11, &uParam0->f_12, &uParam0->f_9, 3, &iLocal_393, &iLocal_394, "SUBM_TITLE",
				"SUBM_COLLECT");
	}
	if (uParam0->f_1.f_4 >= uParam0->f_1.f_3) {
		func_71();
		func_117(0);
		func_68(0);
	}
	if (!uParam0->f_12 && !uParam0->f_11) {
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return false;
}

// Position - 0x3422
void func_68(int iParam0) {
	if (Global_14604) {
		func_70(0, 0);
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
	if (!func_69()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x3492
int func_69() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x34B9
void func_70(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_19(0)) {
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

// Position - 0x352D
void func_71() { gameplay::set_bit(&Global_2314, 30); }

// Position - 0x353E
void func_72(int *iParam0, int *iParam1, var *uParam2, int iParam3, int *iParam4, int *iParam5, char *sParam6,
			 char *sParam7) {
	int iVar0;

	func_81(0);
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
			ui::add_text_component_integer(func_74(iParam3));
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
			else if (!func_73()) {
				if (graphics::has_scaleform_movie_loaded(*iParam5)) {
					func_81(1);
					graphics::draw_scaleform_movie_fullscreen(*iParam5, 100, 100, 100, 255, 0);
				}
			}
			break;

		case 3:
			if (gameplay::get_game_timer() - *uParam2 > 7500) {
				*iParam4++;
			}
			else if (!func_73()) {
				if (graphics::has_scaleform_movie_loaded(*iParam5)) {
					func_81(1);
					graphics::draw_scaleform_movie_fullscreen(*iParam5, 100, 100, 100, 255, 0);
				}
			}
			break;

		case 4:
			if (graphics::has_scaleform_movie_loaded(*iParam5)) {
				graphics::set_scaleform_movie_as_no_longer_needed(iParam5);
			}
			func_81(0);
			*iParam1 = 0;
			*iParam0 = 0;
			*iParam4 = 0;
			break;
		}
	}
}

// Position - 0x36C8
int func_73() {
	if (Global_69962) {
		return 1;
	}
	else if (Global_55816 && !Global_55822) {
		return 1;
	}
	return 0;
}

// Position - 0x36F2
int func_74(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2) {
		iVar1 = 0;
		while (iVar1 < func_80(iParam0)) {
			if (gameplay::is_bit_set(Global_101700.f_9008.f_108, func_79(func_80(iParam0), iVar1))) {
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
		while (iVar1 < func_80(iParam0)) {
			iVar2 = func_78(iParam0) + iVar1;
			if (func_75(iVar2, -1, -1)) {
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

// Position - 0x37BA
bool func_75(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (iParam1 == -1) {
		iParam1 = func_50();
	}
	iVar1 = func_77(iParam0, iParam1);
	iVar2 = func_76(iParam0);
	if (0 != iVar1) {
		iVar0 = stats::stat_get_bool_masked(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

// Position - 0x37F7
int func_76(int iParam0) {
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

// Position - 0x3A07
int func_77(int iParam0, int iParam1) {
	int iVar0;

	if (iParam1 == -1) {
		iParam1 = func_50();
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

// Position - 0x3BFD
int func_78(int iParam0) {
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

// Position - 0x3C44
int func_79(int iParam0, int iParam1) {
	if (iParam1 < 32) {
		return iParam1;
	}
	return iParam0 - iParam1;
}

// Position - 0x3C60
int func_80(int iParam0) {
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

// Position - 0x3CB0
void func_81(int iParam0) {
	if (Global_69969 != iParam0) {
		Global_69969 = iParam0;
	}
}

// Position - 0x3CCA
void func_82(int iParam0, int iParam1) {
	int *iVar0;

	if (func_84(iParam0) == 0) {
		return;
	}
	if (iLocal_395[iParam0] == -1) {
		if (!iParam1 && !entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1), Local_55[iParam0 /*11*/].f_3) <
				100f * 100f) {
				if (func_83(&iVar0)) {
					graphics::_0xAE51BC858F32BA66(iVar0, Local_55[iParam0 /*11*/].f_3, 8f);
					iLocal_395[iParam0] = iVar0;
				}
			}
		}
	}
	else if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1), Local_55[iParam0 /*11*/].f_3) >
			105f * 105f) {
			if (iLocal_395[iParam0] >= 0 && iLocal_395[iParam0] < 8) {
				graphics::_0x649C97D52332341A(iLocal_395[iParam0]);
				iLocal_395[iParam0] = -1;
			}
		}
	}
}

// Position - 0x3DB0
bool func_83(int *iParam0) {
	*iParam0 = 0;
	*iParam0 = 0;
	while (*iParam0 < 8) {
		if (!graphics::_0x2C42340F916C5930(*iParam0)) {
			return true;
		}
		*iParam0++;
	}
	*iParam0 = -1;
	return false;
}

// Position - 0x3DE7
int func_84(int iParam0) {
	if (iParam0 == 23) {
		return 0;
	}
	return 1;
}

// Position - 0x3DFB
bool func_85(var *uParam0, var *uParam1, vector3 vParam2) {
	int iVar0;

	iVar0 = uParam0->f_10;
	if ((*uParam1)[iVar0 /*11*/].f_10) {
		if ((*uParam1)[iVar0 /*11*/].f_1 != 0) {
			if (object::has_pickup_been_collected((*uParam1)[iVar0 /*11*/].f_1) ||
				func_97((*uParam1)[iVar0 /*11*/].f_1)) {
				func_87(uParam0, uParam1, iVar0);
				return true;
			}
		}
	}
	if (object::does_pickup_exist((*uParam1)[iVar0 /*11*/].f_1)) {
		if (system::vdist2(vParam2, object::get_pickup_coords((*uParam1)[iVar0 /*11*/].f_1)) > 60f * 60f ||
			func_17(13) || func_17(14)) {
			func_86(&(*uParam1)[iVar0 /*11*/].f_1);
			(*uParam1)[iVar0 /*11*/].f_1 = 0;
			(*uParam1)[iVar0 /*11*/].f_10 = 0;
		}
	}
	return false;
}

// Position - 0x3EB8
void func_86(var *uParam0) {
	if (object::does_pickup_exist(*uParam0)) {
		object::remove_pickup(*uParam0);
	}
}

// Position - 0x3ED1
void func_87(var *uParam0, var *uParam1, int iParam2) {
	int iVar0;

	iVar0 = func_78(*uParam0) + iParam2;
	func_86(&(*uParam1)[iParam2 /*11*/].f_1);
	func_96(&(*uParam1)[iParam2 /*11*/].f_2);
	(*uParam1)[iParam2 /*11*/].f_1 = 0;
	(*uParam1)[iParam2 /*11*/].f_10 = 0;
	func_95(&uParam0->f_1, iParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0) {
		func_94(*uParam0, iParam2, 1);
	}
	controls::set_pad_shake(0, 200, 250);
	stats::stat_increment(uParam0->f_6, 1f);
	if (bLocal_41) {
		func_93(&uParam0->f_1, iParam2);
	}
	else {
		func_91(&uParam0->f_1);
	}
	func_89();
	stats::_0x79AB33F0FBFAC40C(iVar0);
	func_88(1, 0);
	func_46();
	uParam0->f_11 = 1;
}

// Position - 0x3F7C
void func_88(int iParam0, int iParam1) {
	Global_91530.f_7 = iParam0;
	Global_91530.f_8 = iParam1;
}

// Position - 0x3F94
void func_89() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = 0;
	stats::stat_get_int(func_90(0), &iVar0, -1);
	iVar1 += iVar0;
	if (iVar0 > 0) {
		func_48(18, iVar0);
	}
	stats::stat_get_int(func_90(1), &iVar0, -1);
	iVar1 += iVar0;
	if (iVar0 > 0) {
		func_48(19, iVar0);
	}
	stats::stat_get_int(func_90(3), &iVar0, -1);
	iVar1 += iVar0;
	if (iVar0 > 0) {
		func_48(20, iVar0);
	}
	iVar2 = func_80(0) + func_80(1) + func_80(3);
	if (iVar2 > 0) {
		iVar3 = iVar1 * 100 / iVar2;
	}
	stats::stat_set_int(joaat("percent_hidden_packages"), iVar3, 1);
}

// Position - 0x4039
int func_90(int iParam0) {
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

// Position - 0x408A
void func_91(var *uParam0) {
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
		if (func_12(uParam0, iVar0)) {
			iVar1++;
			func_49(uParam0->f_2 + iVar0, 1, -1, 1);
			if (bLocal_40) {
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40) {
	}
	if (iVar1 == uParam0->f_3 && uParam0->f_2 == 705) {
		func_92(168, 0);
	}
}

// Position - 0x410D
void func_92(int iParam0, int iParam1) {
	if (iParam0 == 235 || iParam0 == 0) {
		return;
	}
	Global_101700.f_7572[iParam0] = 1;
	Global_101700.f_7572.f_236[iParam0] = gameplay::get_game_timer() + iParam1;
}

// Position - 0x414A
void func_93(var *uParam0, int iParam1) {
	if (uParam0->f_3 <= 0) {
	}
	if (uParam0->f_2 <= 0) {
	}
	if (bLocal_40) {
	}
	if (iParam1 >= uParam0->f_3) {
	}
	if (func_12(uParam0, iParam1)) {
		uParam0->f_4++;
		func_49(uParam0->f_2 + iParam1, 1, -1, 1);
		if (bLocal_40) {
		}
	}
	if (bLocal_40) {
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705) {
		func_92(168, 0);
	}
}

// Position - 0x41BE
void func_94(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x42AA
void func_95(int *iParam0, int iParam1, int iParam2) {
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

// Position - 0x430B
void func_96(int *iParam0) {
	if (ui::does_blip_exist(*iParam0)) {
		ui::set_blip_route(*iParam0, 0);
		ui::remove_blip(iParam0);
	}
}

// Position - 0x432B
int func_97(var *uParam0) {
	int iVar0;
	int iVar1;

	if (!object::does_pickup_exist(uParam0)) {
		return 0;
	}
	if (func_101(player::player_ped_id())) {
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

// Position - 0x43B7
void func_98(var *uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;

	if (!uParam0->f_10) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (!func_17(13) && !func_17(14)) {
				if (!object::does_pickup_exist(uParam0->f_1)) {
					if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1), uParam0->f_3) <=
						50f * 50f) {
						streaming::request_model(iParam1);
						while (!streaming::has_model_loaded(iParam1)) {
							streaming::request_model(iParam1);
							system::wait(0);
						}
						if (iParam3) {
							func_99(uParam0->f_3);
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

// Position - 0x44D0
void func_99(vector3 vParam0) {
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

// Position - 0x450E
bool func_100(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x4555
bool func_101(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x4576
void func_102() {
	if (func_101(player::player_ped_id())) {
		if (!ped::is_ped_in_any_sub(player::player_ped_id())) {
			func_117(0);
			func_68(0);
			player::set_max_wanted_level(5);
			func_6(2);
		}
		else {
			if (!func_109(15)) {
				func_106("SUBM_HELP1", 1, 0, -1, 10000, 7, 0, 0, 0);
				func_105(15);
			}
			if (!func_104()) {
				func_117(1);
				if (!iLocal_389 && Local_42.f_1.f_4 < Local_42.f_1.f_3) {
					func_106("SUBM_TRKHELP", 1, 0, -1, 10000, 7, 0, 0, 0);
					iLocal_389 = 1;
				}
			}
			func_103();
			if (func_67(&Local_42, &Local_55)) {
				func_28();
			}
		}
	}
}

// Position - 0x461E
void func_103() {
	iLocal_390++;
	if (iLocal_390 % 30 == 0 || iLocal_391 == -1) {
		if (func_11(&Local_42, &Local_55, entity::get_entity_coords(player::player_ped_id(), 1), &iLocal_391)) {
			func_8();
		}
	}
}

// Position - 0x465F
int func_104() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("apptrackify")) > 0) {
		return 1;
	}
	return 0;
}

// Position - 0x467C
void func_105(int iParam0) {
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

// Position - 0x46BE
void func_106(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8) {
	func_107(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x46E0
void func_107(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6,
			  int iParam7, int iParam8, var uParam9) {
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
		func_108();
	}
}

// Position - 0x48B4
void func_108() {
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

// Position - 0x49D4
int func_109(int iParam0) {
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

// Position - 0x4A17
void func_110() {
	iLocal_393 = 0;
	func_114();
	func_113(&Local_42, 3, joaat("prop_rad_waste_barrel_01"), "SUBM_COLLECT");
	func_111(&Local_42, joaat("num_hidden_packages_3"), 815, 30);
	if (func_101(player::player_ped_id())) {
		if (ped::is_ped_in_any_sub(player::player_ped_id())) {
			player::set_max_wanted_level(0);
			func_6(1);
		}
		else {
			player::set_max_wanted_level(5);
			func_6(2);
		}
	}
}

// Position - 0x4A74
void func_111(var *uParam0, int iParam1, int iParam2, int iParam3) {
	uParam0->f_6 = iParam1;
	func_112(&uParam0->f_1, iParam2, iParam3);
}

// Position - 0x4A8E
void func_112(var *uParam0, var uParam1, var uParam2) {
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
		if (func_75(uParam0->f_2 + iVar0, -1, -1)) {
			iVar1++;
			func_95(uParam0, iVar0, 1);
			if (bLocal_40) {
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40) {
	}
}

// Position - 0x4AF7
void func_113(var *uParam0, int iParam1, int iParam2, char *sParam3) {
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_10 = 0;
}

// Position - 0x4B15
void func_114() {
	int iVar0;

	Local_55[0 /*11*/].f_3 = {func_10(0)};
	Local_55[0 /*11*/].f_9 = 179.47f;
	Local_55[1 /*11*/].f_3 = {func_10(1)};
	Local_55[1 /*11*/].f_9 = 104f;
	Local_55[2 /*11*/].f_3 = {func_10(2)};
	Local_55[2 /*11*/].f_9 = 321.5f;
	Local_55[3 /*11*/].f_3 = {func_10(3)};
	Local_55[3 /*11*/].f_9 = -29.79f;
	Local_55[4 /*11*/].f_3 = {func_10(4)};
	Local_55[4 /*11*/].f_9 = -165.6f;
	Local_55[5 /*11*/].f_3 = {func_10(5)};
	Local_55[5 /*11*/].f_9 = 116f;
	Local_55[6 /*11*/].f_3 = {func_10(6)};
	Local_55[6 /*11*/].f_9 = -68.65f;
	Local_55[7 /*11*/].f_3 = {func_10(7)};
	Local_55[7 /*11*/].f_9 = 40f;
	Local_55[8 /*11*/].f_3 = {func_10(8)};
	Local_55[8 /*11*/].f_9 = 40f;
	Local_55[9 /*11*/].f_3 = {func_10(9)};
	Local_55[9 /*11*/].f_9 = 40f;
	Local_55[10 /*11*/].f_3 = {func_10(10)};
	Local_55[10 /*11*/].f_9 = 40f;
	Local_55[11 /*11*/].f_3 = {func_10(11)};
	Local_55[11 /*11*/].f_9 = 27.04f;
	Local_55[12 /*11*/].f_3 = {func_10(12)};
	Local_55[12 /*11*/].f_9 = 40f;
	Local_55[13 /*11*/].f_3 = {func_10(13)};
	Local_55[13 /*11*/].f_9 = 40f;
	Local_55[14 /*11*/].f_3 = {func_10(14)};
	Local_55[14 /*11*/].f_9 = 40f;
	Local_55[15 /*11*/].f_3 = {func_10(15)};
	Local_55[15 /*11*/].f_9 = 40f;
	Local_55[16 /*11*/].f_3 = {func_10(16)};
	Local_55[16 /*11*/].f_6 = {89.94f, 61.93f, 90.94f};
	Local_55[17 /*11*/].f_3 = {func_10(17)};
	Local_55[17 /*11*/].f_9 = 40f;
	Local_55[18 /*11*/].f_3 = {func_10(18)};
	Local_55[18 /*11*/].f_9 = 40f;
	Local_55[19 /*11*/].f_3 = {func_10(19)};
	Local_55[19 /*11*/].f_9 = 40f;
	Local_55[20 /*11*/].f_3 = {func_10(20)};
	Local_55[20 /*11*/].f_9 = 40f;
	Local_55[21 /*11*/].f_3 = {func_10(21)};
	Local_55[21 /*11*/].f_9 = 40f;
	Local_55[22 /*11*/].f_3 = {func_10(22)};
	Local_55[22 /*11*/].f_9 = 40f;
	Local_55[23 /*11*/].f_3 = {func_10(23)};
	Local_55[23 /*11*/].f_9 = 40f;
	Local_55[24 /*11*/].f_3 = {func_10(24)};
	Local_55[24 /*11*/].f_9 = 40f;
	Local_55[25 /*11*/].f_3 = {func_10(25)};
	Local_55[25 /*11*/].f_9 = 198f;
	Local_55[26 /*11*/].f_3 = {func_10(26)};
	Local_55[26 /*11*/].f_9 = 198f;
	Local_55[27 /*11*/].f_3 = {func_10(27)};
	Local_55[27 /*11*/].f_9 = 198f;
	Local_55[28 /*11*/].f_3 = {func_10(28)};
	Local_55[28 /*11*/].f_9 = 198f;
	Local_55[29 /*11*/].f_3 = {func_10(29)};
	Local_55[29 /*11*/].f_9 = -109.43f;
	func_115(&Local_55);
	iVar0 = 0;
	while (iVar0 < 30) {
		iLocal_395[iVar0] = -1;
		iVar0++;
	}
}

// Position - 0x4E98
void func_115(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0) {
		(*iParam0)[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
}

// Position - 0x4EBD
bool func_116(int iParam0) {
	if (!entity::does_entity_exist(iParam0)) {
		return false;
	}
	return !entity::is_entity_dead(iParam0, 0);
}

// Position - 0x4EDB
void func_117(int iParam0) {
	if (iParam0) {
		Global_101700.f_13010.f_89 = 1;
	}
	else {
		Global_101700.f_13010.f_89 = 0;
	}
}

// Position - 0x4EFF
int func_118(int iParam0) {
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

// Position - 0x4F59
void func_119() {
	int iVar0;

	player::set_max_wanted_level(5);
	func_5();
	iVar0 = 0;
	while (iVar0 < Local_55) {
		func_96(&Local_55[iVar0 /*11*/].f_2);
		func_86(&Local_55[iVar0 /*11*/].f_1);
		if (iLocal_395[iVar0] >= 0 && iLocal_395[iVar0] < 8) {
			graphics::_0x649C97D52332341A(iLocal_395[iVar0]);
		}
		iVar0++;
	}
	if (func_121(&Local_42.f_1)) {
		func_120(13);
	}
	func_71();
	func_117(0);
	func_68(0);
	streaming::set_model_as_no_longer_needed(Local_42.f_7);
	script::terminate_this_thread();
}

// Position - 0x4FE7
int func_120(int iParam0) {
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

// Position - 0x5041
bool func_121(var *uParam0) {
	if (uParam0->f_3 <= 0) {
	}
	return uParam0->f_4 >= uParam0->f_3;
}
