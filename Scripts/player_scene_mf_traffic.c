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
var uLocal_43 = 0;
var uLocal_44 = 0;
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
vector3 vLocal_57 = {0f, 0f, 0f};
vector3 vLocal_60 = {0f, 0f, 0f};
int iLocal_63 = 0;
var uLocal_64 = 0;
int iLocal_65 = 0;
int iLocal_66 = 0;
int iLocal_67 = 0;
int iLocal_68[4] = {0, 0, 0, 0};
int iLocal_73[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_86[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
vector3 vLocal_99[12] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
						 {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
var *uLocal_136[12] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
int iLocal_149[4] = {0, 0, 0, 0};
int iLocal_154[4] = {0, 0, 0, 0};
vector3 vLocal_159[4] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
var *uLocal_172[4] = {NULL, NULL, NULL, NULL};
int iLocal_177[4] = {0, 0, 0, 0};
int iLocal_182[4] = {0, 0, 0, 0};
vector3 vLocal_187[4] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
var *uLocal_200[4] = {NULL, NULL, NULL, NULL};
int iLocal_205[4] = {0, 0, 0, 0};
int iLocal_210[4] = {0, 0, 0, 0};
vector3 vLocal_215[4] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
var *uLocal_228[4] = {NULL, NULL, NULL, NULL};
vector3 vLocal_233 = {0f, 0f, 0f};
float fLocal_236 = 0f;
var *uLocal_237 = NULL;
var uLocal_238 = 0;
var uLocal_239 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_57 = {0f, 0f, 0f};
	vLocal_60 = {0f, 0f, 0f};
	iLocal_63 = -1;
	iLocal_66 = 318;
	iLocal_67 = 1;
	if (player::has_force_cleanup_occurred(3)) {
		func_55();
	}
	system::wait(0);
	func_36();
	func_32();
	func_28();
	while (iLocal_67 && func_20(3, 0)) {
		if (func_16()) {
			func_55();
		}
		system::wait(0);
		switch (iLocal_65) {
		case 0:
			if (func_11()) {
				streaming::set_vehicle_population_budget(2);
				iLocal_65 = 1;
			}
			break;

		case 1:
			if (func_2()) {
				iLocal_65 = 2;
			}
			break;

		case 2: func_1(); break;
		}
	}
	func_55();
}

// Position - 0x10D
void func_1() { iLocal_67 = 0; }

// Position - 0x118
bool func_2() {
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	if (func_5(&uLocal_237, 0f)) {
		iVar0 = gameplay::get_random_int_in_range(0, 12);
		if (!entity::is_entity_dead(iLocal_73[iVar0], 0)) {
			iVar1 = vehicle::get_ped_in_vehicle_seat(iLocal_73[iVar0], -1, 0);
			if (!ped::is_ped_injured(iVar1)) {
				fVar2 = gameplay::get_random_float_in_range(0.5f, 1f);
				fVar3 = gameplay::get_random_float_in_range(0f, 0.5f);
				vehicle::start_vehicle_horn(iLocal_73[iVar0], system::round(fVar2 * 1000f), 0, 0);
				func_3(&uLocal_237, fVar3);
			}
		}
	}
	if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1), vLocal_233, 1) >
		100f) {
		return true;
	}
	return false;
}

// Position - 0x1B2
void func_3(int *iParam0, float fParam1) {
	uParam0->f_1 = func_4(gameplay::is_bit_set(*uParam0, 4)) + fParam1;
	gameplay::set_bit(uParam0, 1);
	gameplay::clear_bit(iParam0, 2);
	iParam0->f_2 = 0f;
}

// Position - 0x1E0
float func_4(bool bParam0) {
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

// Position - 0x238
bool func_5(var *uParam0, float fParam1) {
	if (func_9(uParam0)) {
		if (func_6(uParam0) < fParam1) {
			return true;
		}
	}
	return false;
}

// Position - 0x25A
float func_6(var *uParam0) {
	if (func_9(uParam0)) {
		if (func_7(uParam0)) {
			return uParam0->f_2;
		}
		else {
			return uParam0->f_1 - func_4(gameplay::is_bit_set(*uParam0, 4));
		}
	}
	return uParam0->f_1;
}

// Position - 0x299
bool func_7(var *uParam0) { return func_8(uParam0); }

// Position - 0x2A7
var func_8(var *uParam0) { return gameplay::is_bit_set(*uParam0, 2); }

// Position - 0x2B7
bool func_9(var *uParam0) { return func_10(uParam0); }

// Position - 0x2C5
var func_10(var *uParam0) { return gameplay::is_bit_set(*uParam0, 1); }

// Position - 0x2D5
bool func_11() {
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	if (func_5(&uLocal_237, 0f)) {
		iVar0 = gameplay::get_random_int_in_range(0, 12);
		if (!entity::is_entity_dead(iLocal_73[iVar0], 0)) {
			iVar1 = vehicle::get_ped_in_vehicle_seat(iLocal_73[iVar0], -1, 0);
			if (!ped::is_ped_injured(iVar1)) {
				fVar2 = gameplay::get_random_float_in_range(0.5f, 1f) * 2f;
				fVar3 = gameplay::get_random_float_in_range(0f, 0.5f) * 2f;
				vehicle::start_vehicle_horn(iLocal_73[iVar0], system::round(fVar2 * 1000f), 0, 0);
				func_3(&uLocal_237, fVar3);
			}
		}
	}
	if (!func_15()) {
		func_13();
		func_12(&uLocal_237, gameplay::get_random_float_in_range(1.75f, 2.25f));
		return true;
	}
	if (!func_9(&uLocal_237)) {
		func_12(&uLocal_237, gameplay::get_random_float_in_range(1.75f, 2.25f) * 2f);
	}
	return false;
}

// Position - 0x398
void func_12(var *uParam0, float fParam1) {
	if (!func_9(uParam0)) {
		func_3(uParam0, fParam1);
	}
}

// Position - 0x3B2
void func_13() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 12) {
		if (!entity::is_entity_dead(iLocal_73[iVar0], 0)) {
			iVar1 = vehicle::get_ped_in_vehicle_seat(iLocal_73[iVar0], -1, 0);
			if (!ped::is_ped_injured(iVar1)) {
				func_14(iVar1, iLocal_73[iVar0], 10f, 786603);
				ped::set_ped_keep_task(iVar1, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4) {
		if (!entity::is_entity_dead(iLocal_149[iVar0], 0)) {
			iVar2 = vehicle::get_ped_in_vehicle_seat(iLocal_149[iVar0], -1, 0);
			if (!ped::is_ped_injured(iVar2)) {
				func_14(iVar2, iLocal_149[iVar0], 5f, 786603);
				ped::set_ped_keep_task(iVar2, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4) {
		if (!entity::is_entity_dead(iLocal_177[iVar0], 0)) {
			iVar3 = vehicle::get_ped_in_vehicle_seat(iLocal_177[iVar0], -1, 0);
			if (!ped::is_ped_injured(iVar3)) {
				func_14(iVar3, iLocal_177[iVar0], 5f, 786603);
				ped::set_ped_keep_task(iVar3, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4) {
		if (!entity::is_entity_dead(iLocal_205[iVar0], 0)) {
			iVar4 = vehicle::get_ped_in_vehicle_seat(iLocal_205[iVar0], -1, 0);
			if (!ped::is_ped_injured(iVar4)) {
				func_14(iVar4, iLocal_205[iVar0], 5f, 786603);
				ped::set_ped_keep_task(iVar4, 1);
			}
		}
		iVar0++;
	}
}

// Position - 0x503
void func_14(int iParam0, int iParam1, float fParam2, int iParam3) {
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;

	vVar0 = {0f, fParam2, 0f};
	vVar3 = {entity::get_offset_from_entity_in_world_coords(iParam1, vVar0)};
	ai::open_sequence_task(&iVar6);
	ai::task_vehicle_drive_to_coord(0, iParam1, vVar3, fParam2, 0, entity::get_entity_model(iParam1), iParam3, 2f, 5f);
	ai::task_vehicle_drive_wander(0, iParam1, fParam2, iParam3);
	ai::close_sequence_task(iVar6);
	ai::task_perform_sequence(iParam0, iVar6);
	ai::clear_sequence_task(&iVar6);
}

// Position - 0x55E
int func_15() {
	if (!streaming::is_player_switch_in_progress() || streaming::get_player_switch_type() == 3) {
		return 0;
	}
	if (streaming::get_player_switch_state() > 8) {
		if (streaming::get_player_switch_state() != 11) {
			return 0;
		}
		if (streaming::get_player_switch_state() == 11) {
			if (streaming::set_player_inverted_up() > 0) {
				if (streaming::_0x5B48A06DD0E792A5() > 100) {
					return 0;
				}
			}
		}
	}
	return 1;
}

// Position - 0x5B3
bool func_16() {
	int iVar0;

	if (Global_3) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
				if (vehicle::is_vehicle_driveable(iVar0, 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(iVar0)) {
						return false;
					}
				}
			}
		}
	}
	if (func_19(0) || func_19(3) || func_19(2)) {
		if (!streaming::is_player_switch_in_progress() && !func_18()) {
			return true;
		}
	}
	if (func_17(8, -1)) {
		return true;
	}
	if (Global_2433125.f_73) {
		return true;
	}
	if (Global_89302.f_44 == 1) {
		if (Global_89302.f_46 == 0) {
			return true;
		}
	}
	if (streaming::is_player_switch_in_progress()) {
		if (streaming::get_player_switch_type() != 3) {
			if (streaming::get_player_switch_state() <= 2 && streaming::get_player_switch_state() != 1) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x68A
bool func_17(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x6C5
int func_18() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("player_timetable_scene")) > 0) {
		return 1;
	}
	return 0;
}

// Position - 0x6DF
bool func_19(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x6ED
int func_20(int iParam0, int iParam1) {
	vector3 vVar0;
	float fVar3;

	if (streaming::is_player_switch_in_progress()) {
		if (streaming::get_player_switch_type() != 3) {
			if (streaming::get_player_switch_state() <= 2 && streaming::get_player_switch_state() != 1) {
				return 1;
			}
		}
	}
	if (!streaming::is_player_switch_in_progress()) {
		if (func_19(14)) {
			return 0;
		}
		if (gameplay::_0x9689123E3F213AA5()) {
			return 0;
		}
		if (!func_22(iParam0, func_23())) {
			return 0;
		}
		if (entity::does_entity_exist(iParam1)) {
			vVar0 = {entity::get_entity_coords(iParam1, 0)};
			fVar3 = system::vdist(entity::get_entity_coords(player::player_ped_id(), 0), vVar0);
			if (fVar3 > 250f) {
				if (!entity::is_entity_dead(iParam1, 0)) {
					if (!entity::is_entity_on_screen(iParam1)) {
						return 0;
					}
				}
				else if (!cam::is_sphere_visible(vVar0, 1.5f)) {
					return 0;
				}
			}
		}
		else if (iParam1 == func_21(Global_91277) && iParam1 != 0) {
			Global_91277 = 0;
		}
	}
	return 1;
}

// Position - 0x7D1
int func_21(var uParam0) { return uParam0; }

// Position - 0x7DB
bool func_22(var uParam0, int iParam1) { return (uParam0 & iParam1) != 0; }

// Position - 0x7EA
int func_23() {
	func_24();
	switch (Global_101700.f_2095.f_539.f_3549) {
	case 0: return 1;

	case 1: return 2;

	case 2: return 4;
	}
	return 0;
}

// Position - 0x830
void func_24() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_27(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_26(player::player_ped_id());
			if (func_25(iVar0) && (!func_19(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_25(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x92D
bool func_25(int iParam0) { return iParam0 < 3; }

// Position - 0x939
int func_26(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_27(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x976
int func_27(int iParam0) {
	if (func_25(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x9A0
void func_28() {
	if (!streaming::is_player_switch_in_progress()) {
		if (cam::is_screen_faded_out()) {
			func_31();
		}
		return;
	}
	if (streaming::get_player_switch_type() == 3) {
		func_31();
		return;
	}
	func_29();
	if (Global_91279 > 0) {
		return;
	}
	streaming::_0x74DE2E8739086740();
}

// Position - 0x9E0
void func_29() { func_30(Global_91279 - 1); }

// Position - 0x9F2
void func_30(int iParam0) { Global_91279 = iParam0; }

// Position - 0xA00
void func_31() { func_30(0); }

// Position - 0xA0D
void func_32() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	streaming::set_vehicle_population_budget(1);
	iVar0 = 0;
	while (iVar0 < iLocal_68) {
		streaming::request_model(iLocal_68[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_86) {
		streaming::request_model(iLocal_86[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_154) {
		streaming::request_model(iLocal_154[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_182) {
		streaming::request_model(iLocal_182[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_210) {
		streaming::request_model(iLocal_210[iVar0]);
		iVar0++;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (!iVar2 && iVar1 < 400) {
		iVar2 = 1;
		iVar0 = 0;
		while (iVar0 < iLocal_68) {
			if (!streaming::has_model_loaded(iLocal_68[iVar0])) {
				streaming::request_model(iLocal_68[iVar0]);
				iVar2 = 0;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 12) {
			if (!entity::does_entity_exist(iLocal_73[iVar0])) {
				if (!streaming::has_model_loaded(iLocal_86[iVar0])) {
					streaming::request_model(iLocal_86[iVar0]);
					iVar2 = 0;
				}
				else {
					gameplay::clear_area(vLocal_233 + vLocal_99[iVar0 /*3*/], 10f, 1, 0, 0, 0);
					iLocal_73[iVar0] = vehicle::create_vehicle(iLocal_86[iVar0], vLocal_233 + vLocal_99[iVar0 /*3*/],
															   fLocal_236 + uLocal_136[iVar0], 1, 1);
					entity::set_entity_lod_dist(iLocal_73[iVar0], 250);
					vehicle::set_vehicle_lod_multiplier(iLocal_73[iVar0], 2f);
					entity::_set_entity_register(iLocal_73[iVar0], 1);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4) {
			if (!entity::does_entity_exist(iLocal_149[iVar0])) {
				if (!streaming::has_model_loaded(iLocal_154[iVar0])) {
					streaming::request_model(iLocal_154[iVar0]);
					iVar2 = 0;
				}
				else {
					gameplay::clear_area(vLocal_233 + vLocal_159[iVar0 /*3*/], 10f, 1, 0, 0, 0);
					iLocal_149[iVar0] = vehicle::create_vehicle(iLocal_154[iVar0], vLocal_233 + vLocal_159[iVar0 /*3*/],
																fLocal_236 + uLocal_172[iVar0], 1, 1);
					entity::set_entity_lod_dist(iLocal_149[iVar0], 250);
					vehicle::set_vehicle_lod_multiplier(iLocal_149[iVar0], 2f);
					entity::_set_entity_register(iLocal_149[iVar0], 1);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4) {
			if (!entity::does_entity_exist(iLocal_177[iVar0])) {
				if (!streaming::has_model_loaded(iLocal_182[iVar0])) {
					streaming::request_model(iLocal_182[iVar0]);
					iVar2 = 0;
				}
				else {
					gameplay::clear_area(vLocal_233 + vLocal_187[iVar0 /*3*/], 10f, 1, 0, 0, 0);
					iLocal_177[iVar0] = vehicle::create_vehicle(iLocal_182[iVar0], vLocal_233 + vLocal_187[iVar0 /*3*/],
																fLocal_236 + uLocal_200[iVar0], 1, 1);
					entity::set_entity_lod_dist(iLocal_177[iVar0], 250);
					vehicle::set_vehicle_lod_multiplier(iLocal_177[iVar0], 2f);
					entity::_set_entity_register(iLocal_177[iVar0], 1);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4) {
			if (!entity::does_entity_exist(iLocal_205[iVar0])) {
				if (!streaming::has_model_loaded(iLocal_210[iVar0])) {
					streaming::request_model(iLocal_210[iVar0]);
					iVar2 = 0;
				}
				else {
					gameplay::clear_area(vLocal_233 + vLocal_215[iVar0 /*3*/], 10f, 1, 0, 0, 0);
					iLocal_205[iVar0] = vehicle::create_vehicle(iLocal_210[iVar0], vLocal_233 + vLocal_215[iVar0 /*3*/],
																fLocal_236 + uLocal_228[iVar0], 1, 1);
					entity::set_entity_lod_dist(iLocal_205[iVar0], 250);
					vehicle::set_vehicle_lod_multiplier(iLocal_205[iVar0], 2f);
					entity::_set_entity_register(iLocal_205[iVar0], 1);
				}
			}
			iVar0++;
		}
		if (!iVar2) {
			iVar1++;
		}
		system::wait(0);
	}
	iVar0 = 0;
	while (iVar0 < 12) {
		if (!entity::is_entity_dead(iLocal_73[iVar0], 0)) {
			iVar3 = ped::create_ped_inside_vehicle(iLocal_73[iVar0], 4, iLocal_68[func_35()], -1, 1, 1);
			func_33(iVar3);
			entity::_set_entity_register(iLocal_73[iVar0], 1);
			entity::_set_entity_register(iVar3, 1);
			streaming::set_model_as_no_longer_needed(iLocal_86[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4) {
		if (!entity::is_entity_dead(iLocal_149[iVar0], 0)) {
			if (vehicle::get_vehicle_max_number_of_passengers(iLocal_149[iVar0]) > 0) {
				iVar4 = ped::create_ped_inside_vehicle(iLocal_149[iVar0], 4, iLocal_68[func_35()], -1, 1, 1);
				func_33(iVar4);
				entity::_set_entity_register(iLocal_73[iVar0], 1);
				entity::_set_entity_register(iVar4, 1);
				streaming::set_model_as_no_longer_needed(iLocal_154[iVar0]);
			}
		}
		iVar0++;
	}
	if (vehicle::get_vehicle_max_number_of_passengers(iLocal_149[2]) <= 0) {
		vehicle::attach_vehicle_to_trailer(iLocal_149[0], iLocal_149[2], 1065353216);
	}
	if (vehicle::get_vehicle_max_number_of_passengers(iLocal_149[3]) <= 0) {
		vehicle::attach_vehicle_to_trailer(iLocal_149[1], iLocal_149[3], 1065353216);
	}
	iVar0 = 0;
	while (iVar0 < 4) {
		if (!entity::is_entity_dead(iLocal_177[iVar0], 0)) {
			if (vehicle::get_vehicle_max_number_of_passengers(iLocal_177[iVar0]) > 0) {
				iVar5 = ped::create_ped_inside_vehicle(iLocal_177[iVar0], 4, iLocal_68[func_35()], -1, 1, 1);
				func_33(iVar5);
				entity::_set_entity_register(iLocal_73[iVar0], 1);
				entity::_set_entity_register(iVar5, 1);
				streaming::set_model_as_no_longer_needed(iLocal_182[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4) {
		if (!entity::is_entity_dead(iLocal_205[iVar0], 0)) {
			if (vehicle::get_vehicle_max_number_of_passengers(iLocal_205[iVar0]) > 0) {
				iVar6 = ped::create_ped_inside_vehicle(iLocal_205[iVar0], 4, iLocal_68[func_35()], -1, 1, 1);
				func_33(iVar6);
				entity::_set_entity_register(iLocal_73[iVar0], 1);
				entity::_set_entity_register(iVar6, 1);
				streaming::set_model_as_no_longer_needed(iLocal_210[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_68) {
		streaming::set_model_as_no_longer_needed(iLocal_68[iVar0]);
		iVar0++;
	}
}

// Position - 0xF88
void func_33(int iParam0) {
	ped::set_ped_random_component_variation(iParam0, 0);
	if (entity::get_entity_model(iParam0) == joaat("a_m_m_salton_01")) {
		if (ped::get_ped_drawable_variation(iParam0, 3) == 1) {
			if (func_34()) {
				ped::set_ped_component_variation(iParam0, 3, 0, ped::get_ped_texture_variation(iParam0, 3), 0);
			}
			else {
				ped::set_ped_component_variation(iParam0, 3, 2, ped::get_ped_texture_variation(iParam0, 3), 0);
			}
		}
	}
}

// Position - 0xFDA
bool func_34() {
	if (gameplay::is_bit_set(gameplay::get_random_int_in_range(0, 65535), 0)) {
		return true;
	}
	return false;
}

// Position - 0xFFB
int func_35() {
	int iVar0;
	var uVar1[4];
	int iVar6;
	int iVar7;

	iVar0 = gameplay::get_random_int_in_range(0, iLocal_68);
	if (streaming::has_model_loaded(iLocal_68[iVar0])) {
		return iVar0;
	}
	iVar7 = 0;
	iVar6 = 0;
	while (iVar6 < iLocal_68) {
		if (streaming::has_model_loaded(iLocal_68[iVar6])) {
			uVar1[iVar7] = iLocal_68[iVar6];
			iVar7++;
		}
		iVar6++;
	}
	if (iVar7 <= 0) {
		return 0;
	}
	iVar0 = gameplay::get_random_int_in_range(0, iVar7);
	iVar6 = 0;
	while (iVar6 < iLocal_68) {
		if (uVar1[iVar0] == iLocal_68[iVar6]) {
			return iVar6;
		}
		iVar6++;
	}
	return iVar0;
}

// Position - 0x1094
void func_36() {
	char[] cVar0[8];

	iLocal_66 = Global_90959;
	func_48(iLocal_66, &vLocal_233, &fLocal_236, &cVar0);
	func_37(iLocal_66, &iLocal_68, &iLocal_86, &vLocal_99, &uLocal_136, &iLocal_154, &vLocal_159, &uLocal_172,
			&iLocal_182, &vLocal_187, &uLocal_200, &iLocal_210, &vLocal_215, &uLocal_228);
}

// Position - 0x10CF
void func_37(int iParam0, int iParam1, int iParam2, var *uParam3, var *uParam4, int iParam5, var *uParam6, var *uParam7,
			 int iParam8, var *uParam9, var *uParam10, int iParam11, var *uParam12, var *uParam13) {
	vector3 vVar0;
	float fVar3;
	char[] cVar4[8];
	vector3 vVar12;
	float fVar15;
	char[] cVar16[8];
	int iVar24;

	switch (iParam0) {
	case 105:
		func_47(uParam3, uParam4, uParam6, uParam7, uParam9, uParam10);
		func_46(iParam1, iParam2, iParam5, iParam8, iParam11);
		func_48(iParam0, &vVar0, &fVar3, &cVar4);
		(*uParam12)[0 /*3*/] = {Vector(38.0807f, -1565.916f, -453.6f) - vVar0};
		(*uParam13)[0] = 171.8581f - fVar3;
		(*uParam12)[1 /*3*/] = {Vector(38.094f, -1599.477f, -467.9528f) - vVar0};
		(*uParam13)[1] = 151.2346f - fVar3;
		(*uParam12)[2 /*3*/] = {Vector(38.1786f, -1566.734f, -442.0422f) - vVar0};
		(*uParam13)[2] = 170.751f - fVar3;
		(*uParam12)[3 /*3*/] = {Vector(32.4872f, -1614.501f, -486.7076f) - vVar0};
		(*uParam13)[3] = 146.9473f - fVar3;
		break;

	case 106:
		func_45(uParam3, uParam4, uParam6, uParam7, uParam9, uParam10);
		func_46(iParam1, iParam2, iParam5, iParam8, iParam11);
		(*uParam12)[0 /*3*/] = {Vector(0f, 0f, -7.5f) + func_44(-1090519040, 1056964608)};
		(*uParam13)[0] = 0f + gameplay::get_random_float_in_range(-5f, 5f);
		(*uParam12)[1 /*3*/] = {Vector(12f, -21.6f, 0f) + func_44(-1090519040, 1056964608)};
		(*uParam13)[1] = -8.1f + gameplay::get_random_float_in_range(-5f, 5f);
		(*uParam12)[2 /*3*/] = {Vector(0f, -6.3f, 2.4f) + func_44(-1090519040, 1056964608)};
		(*uParam13)[2] = 0f + gameplay::get_random_float_in_range(-5f, 5f);
		(*uParam12)[3 /*3*/] = {Vector(0f, -5.4f, 9.3f) + func_44(-1090519040, 1056964608)};
		(*uParam13)[3] = 0f + gameplay::get_random_float_in_range(-5f, 5f);
		break;

	case 107:
		func_43(uParam3, uParam4, uParam6, uParam7, uParam9, uParam10);
		func_42(iParam1, iParam2, iParam5, iParam8, iParam11);
		(*uParam12)[0 /*3*/] = {Vector(0f, -18.7658f, 17.4294f) + func_44(-1090519040, 1056964608)};
		(*uParam13)[0] = -82.86f + gameplay::get_random_float_in_range(-5f, 5f);
		(*uParam12)[1 /*3*/] = {Vector(0f, -0.2185f, -8.4f) + func_44(-1090519040, 1056964608)};
		(*uParam13)[1] = 326.88f + gameplay::get_random_float_in_range(-5f, 5f);
		(*uParam12)[2 /*3*/] = {Vector(0f, 11.1031f, -1.0773f) + func_44(-1090519040, 1056964608)};
		(*uParam13)[2] = -16.56f + gameplay::get_random_float_in_range(-5f, 5f);
		(*uParam12)[3 /*3*/] = {Vector(0f, 6.6924f, 3.6826f) + func_44(-1090519040, 1056964608)};
		(*uParam13)[3] = -21.4898f + gameplay::get_random_float_in_range(-5f, 5f);
		break;

	case 208:
	case 23:
		func_47(uParam3, uParam4, uParam6, uParam7, uParam9, uParam10);
		func_46(iParam1, iParam2, iParam5, iParam8, iParam11);
		func_48(iParam0, &vVar12, &fVar15, &cVar16);
		(*uParam12)[0 /*3*/] = {Vector(38.0807f, -1565.916f, -453.6f) - vVar12};
		(*uParam13)[0] = 171.8581f - fVar15;
		(*uParam12)[1 /*3*/] = {Vector(38.094f, -1599.477f, -467.9528f) - vVar12};
		(*uParam13)[1] = 151.2346f - fVar15;
		(*uParam12)[2 /*3*/] = {Vector(38.1786f, -1566.734f, -442.0422f) - vVar12};
		(*uParam13)[2] = 170.751f - fVar15;
		(*uParam12)[3 /*3*/] = {Vector(32.4872f, -1614.501f, -486.7076f) - vVar12};
		(*uParam13)[3] = 146.9473f - fVar15;
		break;

	case 209:
		func_41(uParam3, uParam4, uParam6, uParam7, uParam9, uParam10);
		func_40(iParam1, iParam2, iParam5, iParam8, iParam11);
		(*uParam12)[0 /*3*/] = {Vector(0f, -18.4198f, 12.4248f) + func_44(-1090519040, 1056964608)};
		(*uParam13)[0] = -42.9526f + gameplay::get_random_float_in_range(-5f, 5f);
		(*uParam12)[1 /*3*/] = {Vector(0f, 6.1436f, -6.4904f) + func_44(-1090519040, 1056964608)};
		(*uParam13)[1] = 0f + gameplay::get_random_float_in_range(-5f, 5f);
		(*uParam12)[2 /*3*/] = {Vector(0f, -46.6f, 15.2f) + func_44(-1090519040, 1056964608)};
		(*uParam13)[2] = 74.0878f + gameplay::get_random_float_in_range(-5f, 5f);
		(*uParam12)[3 /*3*/] = {Vector(0f, -43.7f, 9f) + func_44(-1090519040, 1056964608)};
		(*uParam13)[3] = -102.24f + gameplay::get_random_float_in_range(-5f, 5f);
		break;

	case 210:
		func_39(uParam3, uParam4, uParam6, uParam7, uParam9, uParam10);
		func_38(iParam1, iParam2, iParam5, iParam8, iParam11);
		(*uParam12)[0 /*3*/] = {Vector(0f, -8.466f, -3.4877f) + func_44(-1090519040, 1056964608)};
		(*uParam13)[0] = -10.26f + gameplay::get_random_float_in_range(-5f, 5f);
		(*uParam12)[1 /*3*/] = {Vector(0f, 5.6192f, -2.7229f) + func_44(-1090519040, 1056964608)};
		(*uParam13)[1] = 2.3194f + gameplay::get_random_float_in_range(-5f, 5f);
		(*uParam12)[2 /*3*/] = {Vector(0f, 5.1081f, 6.8717f) + func_44(-1090519040, 1056964608)};
		(*uParam13)[2] = 350.1767f + gameplay::get_random_float_in_range(-5f, 5f);
		(*uParam12)[3 /*3*/] = {Vector(0f, -9.6576f, 0.997f) + func_44(-1090519040, 1056964608)};
		(*uParam13)[3] = 349.0776f + gameplay::get_random_float_in_range(-5f, 5f);
		break;

	default:
		func_47(uParam3, uParam4, uParam6, uParam7, uParam9, uParam10);
		func_46(iParam1, iParam2, iParam5, iParam8, iParam11);
		iVar24 = 0;
		while (iVar24 < *uParam12) {
			(*iParam11)[iVar24] = 0;
			(*uParam12)[iVar24 /*3*/] = {0f, 0f, 0f};
			(*uParam13)[iVar24] = gameplay::get_random_float_in_range(0f, 360f);
			iVar24++;
		}
		break;
	}
}

// Position - 0x16CB
void func_38(var *uParam0, var *uParam1, var *uParam2, var *uParam3, var *uParam4) {
	int iVar0;
	int iVar1;
	int iVar2;

	(*uParam0)[0] = joaat("a_m_m_salton_01");
	(*uParam0)[1] = joaat("a_m_m_prolhost_01");
	(*uParam0)[2] = (*uParam0)[1];
	(*uParam0)[3] = (*uParam0)[2];
	(*uParam1)[0] = joaat("taxi");
	(*uParam1)[2] = joaat("issi2");
	(*uParam1)[3] = joaat("washington");
	(*uParam1)[7] = joaat("peyote");
	(*uParam1)[8] = joaat("surge");
	(*uParam1)[11] = joaat("adder");
	switch (gameplay::get_random_int_in_range(0, 3)) {
	case 0: iVar0 = joaat("carbonizzare"); break;

	case 1: iVar0 = joaat("rocoto"); break;

	case 2: iVar0 = joaat("asterope"); break;
	}
	switch (gameplay::get_random_int_in_range(0, 3)) {
	case 0: iVar1 = joaat("fq2"); break;

	case 1: iVar1 = joaat("landstalker"); break;

	case 2: iVar1 = joaat("emperor"); break;
	}
	(*uParam1)[10] = iVar0;
	(*uParam1)[9] = iVar0;
	(*uParam1)[1] = iVar0;
	(*uParam1)[6] = iVar1;
	(*uParam1)[4] = iVar1;
	(*uParam1)[5] = iVar1;
	(*uParam2)[0] = joaat("stretch");
	(*uParam2)[1] = joaat("boxville2");
	(*uParam2)[2] = joaat("bus");
	(*uParam2)[3] = joaat("trash");
	(*uParam3)[0] = (*uParam1)[gameplay::get_random_int_in_range(0, *uParam1)];
	(*uParam3)[1] = (*uParam1)[gameplay::get_random_int_in_range(0, *uParam1)];
	(*uParam3)[2] = (*uParam1)[gameplay::get_random_int_in_range(0, *uParam1)];
	(*uParam3)[3] = (*uParam1)[gameplay::get_random_int_in_range(0, *uParam1)];
	iVar2 = 0;
	while (iVar2 < *uParam4) {
		(*uParam4)[iVar2] = (*uParam1)[gameplay::get_random_int_in_range(0, *uParam1)];
		iVar2++;
	}
}

// Position - 0x186D
void func_39(var *uParam0, var *uParam1, var *uParam2, var *uParam3, var *uParam4, var *uParam5) {
	(*uParam0)[0 /*3*/] = {16.332f, -30.08f, 0f};
	(*uParam1)[0] = -90.4349f;
	(*uParam0)[1 /*3*/] = {22.782f, -37.68f, 0f};
	(*uParam1)[1] = -90.4349f;
	(*uParam0)[2 /*3*/] = {28.272f, -29.22f, 0f};
	(*uParam1)[2] = -90.7451f;
	(*uParam0)[3 /*3*/] = {22.282f, -32.05f, 0f};
	(*uParam1)[3] = -97.2851f;
	(*uParam0)[4 /*3*/] = {15.012f, -34.53f, 0f};
	(*uParam1)[4] = -94.9851f;
	(*uParam0)[5 /*3*/] = {-14.088f, -53.31f, 0f};
	(*uParam1)[5] = 174.4849f;
	(*uParam0)[6 /*3*/] = {-8.618f, -54.68f, 0f};
	(*uParam1)[6] = 176.0549f;
	(*uParam0)[7 /*3*/] = {4.432f, -2.42f, 0f};
	(*uParam1)[7] = -4.3151f;
	(*uParam0)[8 /*3*/] = {1.422f, 5.53f, 0f};
	(*uParam1)[8] = -4.3151f;
	(*uParam0)[9 /*3*/] = {28.922f, -34.42f, 0f};
	(*uParam1)[9] = -96.0151f;
	(*uParam0)[10 /*3*/] = {34.012f, -36.51f, 0f};
	(*uParam1)[10] = -99.9451f;
	(*uParam0)[11 /*3*/] = {-4.888f, -0.68f, 0f};
	(*uParam1)[11] = -5.7f;
	(*uParam2)[0 /*3*/] = {-0.818f, -16.7f, 0f};
	(*uParam3)[0] = 7.2f;
	(*uParam2)[1 /*3*/] = {21.212f, -26.79f, 0f};
	(*uParam3)[1] = -97.2851f;
	(*uParam2)[2 /*3*/] = {-31.208f, -27.73f, 0f};
	(*uParam3)[2] = 83.7149f;
	(*uParam2)[3 /*3*/] = {36.182f, -32.35f, 0f};
	(*uParam3)[3] = -99.9451f;
	(*uParam4)[0 /*3*/] = {-8.798f, -15.99f, 0f};
	(*uParam5)[0] = -54.0451f;
	(*uParam4)[1 /*3*/] = {-16.408f, -17.59f, 0f};
	(*uParam5)[1] = -96.0451f;
	(*uParam4)[2 /*3*/] = {-18.108f, -12.54f, 0f};
	(*uParam5)[2] = -88.5451f;
	(*uParam4)[3 /*3*/] = {52.11f, -3.18f, 0f};
	(*uParam5)[3] = -86.76f;
}

// Position - 0x1AAD
void func_40(var *uParam0, var *uParam1, var *uParam2, var *uParam3, var *uParam4) {
	int iVar0;
	int iVar1;
	int iVar2;

	(*uParam0)[0] = joaat("a_m_m_salton_01");
	(*uParam0)[1] = joaat("a_m_m_prolhost_01");
	(*uParam0)[2] = joaat("a_m_m_afriamer_01");
	(*uParam0)[3] = (*uParam0)[2];
	(*uParam1)[0] = joaat("camper");
	(*uParam1)[2] = joaat("futo");
	(*uParam1)[3] = joaat("blista");
	(*uParam1)[4] = joaat("regina");
	(*uParam1)[7] = joaat("sadler");
	(*uParam1)[9] = joaat("manana");
	switch (gameplay::get_random_int_in_range(0, 3)) {
	case 0: iVar0 = joaat("dilettante"); break;

	case 1: iVar0 = joaat("surfer"); break;

	case 2: iVar0 = joaat("sultan"); break;
	}
	switch (gameplay::get_random_int_in_range(0, 3)) {
	case 0: iVar1 = joaat("asterope"); break;

	case 1: iVar1 = joaat("phoenix"); break;

	case 2: iVar1 = joaat("picador"); break;
	}
	(*uParam1)[1] = iVar0;
	(*uParam1)[8] = iVar0;
	(*uParam1)[5] = iVar0;
	(*uParam1)[6] = iVar1;
	(*uParam1)[11] = iVar1;
	(*uParam1)[10] = iVar1;
	(*uParam2)[0] = joaat("benson");
	(*uParam2)[1] = joaat("bus");
	(*uParam2)[2] = joaat("coach");
	(*uParam2)[3] = joaat("mule");
	(*uParam3)[0] = (*uParam1)[gameplay::get_random_int_in_range(0, *uParam1)];
	(*uParam3)[1] = (*uParam1)[gameplay::get_random_int_in_range(0, *uParam1)];
	(*uParam3)[2] = (*uParam1)[gameplay::get_random_int_in_range(0, *uParam1)];
	(*uParam3)[3] = (*uParam1)[gameplay::get_random_int_in_range(0, *uParam1)];
	iVar2 = 0;
	while (iVar2 < *uParam4) {
		(*uParam4)[iVar2] = (*uParam1)[gameplay::get_random_int_in_range(0, *uParam1)];
		iVar2++;
	}
}

// Position - 0x1C4F
void func_41(var *uParam0, var *uParam1, var *uParam2, var *uParam3, var *uParam4, var *uParam5) {
	(*uParam0)[0 /*3*/] = {1.34f, -37.14f, 0f};
	(*uParam1)[0] = -91.57f;
	(*uParam0)[1 /*3*/] = {7.99f, -38.55f, 0f};
	(*uParam1)[1] = -91.57f;
	(*uParam0)[2 /*3*/] = {11.35f, -25.5f, 0f};
	(*uParam1)[2] = -87.74f;
	(*uParam0)[3 /*3*/] = {19.16f, -25.28f, 0f};
	(*uParam1)[3] = -94.86f;
	(*uParam0)[4 /*3*/] = {40.1f, -8.519f, 0f};
	(*uParam1)[4] = -108.59f;
	(*uParam0)[5 /*3*/] = {35.52f, -12.35f, 0f};
	(*uParam1)[5] = -108.59f;
	(*uParam0)[6 /*3*/] = {23.22f, -21.68f, 0f};
	(*uParam1)[6] = -105.31f;
	(*uParam0)[7 /*3*/] = {21.56f, -38.68f, 0f};
	(*uParam1)[7] = 90.43f;
	(*uParam0)[8 /*3*/] = {12.05f, -10.24f, 0f};
	(*uParam1)[8] = -4.32f;
	(*uParam0)[9 /*3*/] = {6.32f, -5.309f, 0f};
	(*uParam1)[9] = -4.32f;
	(*uParam0)[10 /*3*/] = {51.94f, -36.66f, 0f};
	(*uParam1)[10] = -177.9f;
	(*uParam0)[11 /*3*/] = {57.47f, -41.3f, 0f};
	(*uParam1)[11] = -177.9f;
	(*uParam2)[0 /*3*/] = {29.53f, -17.97f, 0f};
	(*uParam3)[0] = -103.07f;
	(*uParam2)[1 /*3*/] = {35.68f, 0.27f, 0f};
	(*uParam3)[1] = -66.81f;
	(*uParam2)[2 /*3*/] = {11.74f, -31.94f, 0f};
	(*uParam3)[2] = -126.95f;
	(*uParam2)[3 /*3*/] = {45.13f, -2.58f, 0f};
	(*uParam3)[3] = -89.89f;
	(*uParam4)[0 /*3*/] = {26.69f, -41.23f, 0f};
	(*uParam5)[0] = 87.02f;
	(*uParam4)[1 /*3*/] = {22.21f, -46.2f, 0f};
	(*uParam5)[1] = 90.07f;
	(*uParam4)[2 /*3*/] = {45.62f, -10.14f, 0f};
	(*uParam5)[2] = -86.76f;
	(*uParam4)[3 /*3*/] = {52.11f, -3.18f, 0f};
	(*uParam5)[3] = -86.76f;
}

// Position - 0x1E8F
void func_42(var *uParam0, var *uParam1, var *uParam2, var *uParam3, var *uParam4) {
	int iVar0;

	(*uParam0)[0] = joaat("a_m_m_salton_02");
	(*uParam0)[1] = (*uParam0)[0];
	(*uParam0)[2] = joaat("a_m_m_prolhost_01");
	(*uParam0)[3] = joaat("a_m_m_afriamer_01");
	(*uParam1)[0] = joaat("camper");
	(*uParam1)[1] = joaat("dilettante");
	(*uParam1)[2] = joaat("futo");
	(*uParam1)[3] = joaat("blista");
	(*uParam1)[4] = joaat("regina");
	(*uParam1)[5] = joaat("sultan");
	(*uParam1)[6] = joaat("asterope");
	(*uParam1)[7] = joaat("sadler");
	(*uParam1)[8] = joaat("surfer");
	(*uParam1)[9] = joaat("dubsta");
	(*uParam1)[10] = joaat("picador");
	(*uParam1)[11] = joaat("phoenix");
	(*uParam2)[0] = joaat("bus");
	(*uParam2)[1] = joaat("boxville");
	(*uParam2)[2] = joaat("bus");
	(*uParam2)[3] = joaat("boxville2");
	(*uParam3)[0] = (*uParam1)[gameplay::get_random_int_in_range(0, *uParam1)];
	(*uParam3)[1] = (*uParam1)[gameplay::get_random_int_in_range(0, *uParam1)];
	(*uParam3)[2] = (*uParam1)[gameplay::get_random_int_in_range(0, *uParam1)];
	(*uParam3)[3] = (*uParam1)[gameplay::get_random_int_in_range(0, *uParam1)];
	iVar0 = 0;
	while (iVar0 < *uParam4) {
		(*uParam4)[iVar0] = (*uParam1)[gameplay::get_random_int_in_range(0, *uParam1)];
		iVar0++;
	}
}

// Position - 0x1FCD
void func_43(var *uParam0, var *uParam1, var *uParam2, var *uParam3, var *uParam4, var *uParam5) {
	(*uParam0)[0 /*3*/] = {-29.899f, -48.6f, 0f};
	(*uParam1)[0] = 296f;
	(*uParam0)[1 /*3*/] = {-17.809f, -40.73f, 0f};
	(*uParam1)[1] = 274.46f;
	(*uParam0)[2 /*3*/] = {-18.339f, -26.16f, 0f};
	(*uParam1)[2] = 309.22f;
	(*uParam0)[3 /*3*/] = {-12.76f, -37.72f, 0f};
	(*uParam1)[3] = 273f;
	(*uParam0)[4 /*3*/] = {-7.669f, -34.99f, 0f};
	(*uParam1)[4] = 270f;
	(*uParam0)[5 /*3*/] = {4.461f, -23.85f, 0f};
	(*uParam1)[5] = 270f;
	(*uParam0)[6 /*3*/] = {-2.609f, -32.32f, 0f};
	(*uParam1)[6] = 270f;
	(*uParam0)[7 /*3*/] = {3.591f, -30.44f, 0f};
	(*uParam1)[7] = 266f;
	(*uParam0)[8 /*3*/] = {9.701f, -22.01f, 0f};
	(*uParam1)[8] = 259f;
	(*uParam0)[9 /*3*/] = {34.851f, -18.68f, 0f};
	(*uParam1)[9] = 259f;
	(*uParam0)[10 /*3*/] = {2.311f, -7.35f, 0f};
	(*uParam1)[10] = 353.49f;
	(*uParam0)[11 /*3*/] = {7.721f, -5.22f, 0f};
	(*uParam1)[11] = 353.49f;
	(*uParam2)[0 /*3*/] = {-21.429f, -36.16f, 0f};
	(*uParam3)[0] = -40.2806f;
	(*uParam2)[1 /*3*/] = {-32.949f, -44.24f, 0f};
	(*uParam3)[1] = 296f;
	(*uParam2)[2 /*3*/] = {-5.419f, -28.52f, 0f};
	(*uParam3)[2] = 268.79f;
	(*uParam2)[3 /*3*/] = {-16.149f, -34.45f, 0f};
	(*uParam3)[3] = 269.44f;
	(*uParam4)[0 /*3*/] = {9.911f, -27.02f, 0f};
	(*uParam5)[0] = 265f;
	(*uParam4)[1 /*3*/] = {15.671f, -24.5f, 0f};
	(*uParam5)[1] = 262f;
	(*uParam4)[2 /*3*/] = {20.341f, -22.64f, 0f};
	(*uParam5)[2] = 260f;
	(*uParam4)[3 /*3*/] = {28.061f, -20.67f, 0f};
	(*uParam5)[3] = 269f;
}

// Position - 0x220D
Vector3 func_44(float fParam0, float fParam1) {
	return gameplay::get_random_float_in_range(fParam0, fParam1), gameplay::get_random_float_in_range(fParam0, fParam1),
		   0f;
}

// Position - 0x2226
void func_45(var *uParam0, var *uParam1, var *uParam2, var *uParam3, var *uParam4, var *uParam5) {
	(*uParam0)[0 /*3*/] = {-38.3005f, 8.5562f, 0f};
	(*uParam1)[0] = -16.0462f;
	(*uParam0)[1 /*3*/] = {-29.9505f, 8.6162f, 0f};
	(*uParam1)[1] = -18.0565f;
	(*uParam0)[2 /*3*/] = {-23.7805f, 13.1962f, 0f};
	(*uParam1)[2] = -18.3452f;
	(*uParam0)[3 /*3*/] = {-29.6605f, 16.1762f, 0f};
	(*uParam1)[3] = -21.835f;
	(*uParam0)[4 /*3*/] = {-14.3505f, 6.5462f, 0f};
	(*uParam1)[4] = -20.3657f;
	(*uParam0)[5 /*3*/] = {-18.3605f, 0.5062f, 0f};
	(*uParam1)[5] = -18.8008f;
	(*uParam0)[6 /*3*/] = {-29.4805f, 2.2262f, 0f};
	(*uParam1)[6] = -20.524f;
	(*uParam0)[7 /*3*/] = {-24.1905f, 4.6262f, 0f};
	(*uParam1)[7] = -21.9109f;
	(*uParam0)[8 /*3*/] = {-24.3405f, -2.2238f, 0f};
	(*uParam1)[8] = -17.9999f;
	(*uParam0)[9 /*3*/] = {-13.5805f, -4.2538f, 0f};
	(*uParam1)[9] = -17.9017f;
	(*uParam0)[10 /*3*/] = {-19.6705f, -6.3938f, 0f};
	(*uParam1)[10] = -15.6317f;
	(*uParam0)[11 /*3*/] = {-15.2805f, -10.5438f, 0f};
	(*uParam1)[11] = -21.7654f;
	(*uParam2)[0 /*3*/] = {-47.51f, 23.097f, 0f};
	(*uParam3)[0] = -50.2806f;
	(*uParam2)[1 /*3*/] = {-44.64f, 28.267f, 0f};
	(*uParam3)[1] = -8.5494f;
	(*uParam2)[2 /*3*/] = {-43.8405f, 19.3262f, 0f};
	(*uParam3)[2] = -15.1402f;
	(*uParam2)[3 /*3*/] = {-8.2179f, -30.6764f, 0f};
	(*uParam3)[3] = -21.3636f;
	(*uParam4)[0 /*3*/] = {-7.25f, -9.213f, 0f};
	(*uParam5)[0] = 2.174f;
	(*uParam4)[1 /*3*/] = {-9.14f, -15.643f, 0f};
	(*uParam5)[1] = -8.9755f;
	(*uParam4)[2 /*3*/] = {1.83f, -16.063f, 0f};
	(*uParam5)[2] = -29.2004f;
	(*uParam4)[3 /*3*/] = {-3.76f, -20.593f, 0f};
	(*uParam5)[3] = -27.8686f;
}

// Position - 0x2466
void func_46(var *uParam0, var *uParam1, var *uParam2, var *uParam3, var *uParam4) {
	int iVar0;

	(*uParam0)[0] = joaat("a_m_m_salton_02");
	(*uParam0)[1] = (*uParam0)[0];
	(*uParam0)[2] = joaat("a_m_m_prolhost_01");
	(*uParam0)[3] = joaat("a_m_m_afriamer_01");
	(*uParam1)[0] = joaat("camper");
	(*uParam1)[1] = joaat("dilettante");
	(*uParam1)[2] = joaat("futo");
	(*uParam1)[3] = joaat("blista");
	(*uParam1)[4] = joaat("regina");
	(*uParam1)[5] = joaat("sultan");
	(*uParam1)[6] = joaat("asterope");
	(*uParam1)[7] = joaat("sadler");
	(*uParam1)[8] = joaat("surfer");
	(*uParam1)[9] = joaat("dubsta");
	(*uParam1)[10] = joaat("picador");
	(*uParam1)[11] = joaat("phoenix");
	(*uParam2)[0] = joaat("packer");
	(*uParam2)[1] = joaat("hauler");
	(*uParam2)[2] = joaat("tanker");
	(*uParam2)[3] = joaat("trailerlogs");
	(*uParam3)[0] = (*uParam1)[gameplay::get_random_int_in_range(0, *uParam1)];
	(*uParam3)[1] = (*uParam1)[gameplay::get_random_int_in_range(0, *uParam1)];
	(*uParam3)[2] = (*uParam1)[gameplay::get_random_int_in_range(0, *uParam1)];
	(*uParam3)[3] = (*uParam1)[gameplay::get_random_int_in_range(0, *uParam1)];
	iVar0 = 0;
	while (iVar0 < *uParam4) {
		(*uParam4)[iVar0] = (*uParam1)[gameplay::get_random_int_in_range(0, *uParam1)];
		iVar0++;
	}
}

// Position - 0x25A4
void func_47(var *uParam0, var *uParam1, var *uParam2, var *uParam3, var *uParam4, var *uParam5) {
	vector3 vVar0;
	int iVar3;

	vVar0 = {Vector(0f, 7f, 5f) * FtoV(0.7f)};
	(*uParam0)[0 /*3*/] = {Vector(0f, -22.7769f, -9.2247f) + func_44(-1090519040, 1056964608)};
	(*uParam0)[1 /*3*/] = {Vector(0f, -21.4697f, -0.889f) + func_44(-1090519040, 1056964608)};
	iVar3 = 2;
	while (iVar3 <= *uParam0 - 1) {
		(*uParam0)[iVar3 /*3*/] = {(*uParam0)[iVar3 - 2 /*3*/]};
		(*uParam0)[iVar3 /*3*/] = {(*uParam0)[iVar3 /*3*/] +
								   vVar0 * FtoV(1f + system::to_float(iVar3) / system::to_float(*uParam0 + 1 - 2))};
		(*uParam0)[iVar3 /*3*/] = {(*uParam0)[iVar3 /*3*/] + func_44(-1090519040, 1056964608)};
		(*uParam1)[iVar3] = gameplay::get_random_float_in_range(-22f, -15f);
		iVar3++;
	}
	(*uParam2)[0 /*3*/] = {-19.4623f, -36.7339f, 0f};
	(*uParam2)[1 /*3*/] = {-11.7179f, -35.5764f, 0f};
	(*uParam2)[2 /*3*/] = {(*uParam2)[0 /*3*/] + vVar0};
	(*uParam2)[3 /*3*/] = {(*uParam2)[1 /*3*/] + vVar0};
	(*uParam4)[0 /*3*/] = {Vector(0f, 8.1f, 2.1f) + func_44(-1090519040, 1056964608)};
	(*uParam4)[1 /*3*/] = {Vector(0f, 15.3f, 4.4f) + func_44(-1090519040, 1056964608)};
	(*uParam4)[2 /*3*/] = {Vector(-11.4f, -15.3f, -23.7f) + func_44(-1090519040, 1056964608)};
	(*uParam4)[3 /*3*/] = {Vector(-12.7f, -10.9f, -13.4f) + func_44(-1090519040, 1056964608)};
	(*uParam1)[0] = gameplay::get_random_float_in_range(-22f, -15f);
	(*uParam1)[1] = gameplay::get_random_float_in_range(-22f, -15f);
	(*uParam1)[2] = gameplay::get_random_float_in_range(-22f, -15f);
	(*uParam1)[3] = gameplay::get_random_float_in_range(-22f, -15f);
	(*uParam1)[4] = gameplay::get_random_float_in_range(-22f, -15f);
	(*uParam1)[5] = gameplay::get_random_float_in_range(-22f, -15f);
	(*uParam1)[6] = gameplay::get_random_float_in_range(-22f, -15f);
	(*uParam3)[0] = gameplay::get_random_float_in_range(-22f, -15f);
	(*uParam3)[1] = gameplay::get_random_float_in_range(-22f, -15f);
	(*uParam3)[2] = gameplay::get_random_float_in_range(-22f, -15f);
	(*uParam3)[3] = gameplay::get_random_float_in_range(-22f, -15f);
	(*uParam5)[0] = gameplay::get_random_float_in_range(-6f, 4f);
	(*uParam5)[1] = gameplay::get_random_float_in_range(-16f, -6f);
	(*uParam5)[2] = gameplay::get_random_float_in_range(-38f, -28f);
	(*uParam5)[3] = gameplay::get_random_float_in_range(-28f, -18f);
}

// Position - 0x2871
int func_48(int iParam0, var *uParam1, var *uParam2, char *sParam3) {
	int iVar0;

	if (func_51(iParam0, uParam2, sParam3)) {
		switch (iParam0) {
		case 0: return 0;

		case 1:
			func_49(&iVar0);
			if (iVar0 < 5) {
				*uParam1 = {Global_87027[iVar0 /*9*/].f_3};
				*uParam2 = Global_87027[iVar0 /*9*/].f_6;
				StringCopy(sParam3, "", 32);
				return 1;
			}
			else {
				*uParam1 = {Global_87027[0 /*9*/].f_3};
				*uParam2 = Global_87027[0 /*9*/].f_6;
				StringCopy(sParam3, "", 32);
				return 1;
			}
			break;

		case 2:
			*uParam1 = {Global_89667[0 /*109*/].f_4};
			*uParam2 = Global_89667[0 /*109*/].f_7;
			StringCopy(sParam3, "", 32);
			return 1;

		case 3:
			*uParam1 = {Global_89667[1 /*109*/].f_4};
			*uParam2 = Global_89667[1 /*109*/].f_7;
			StringCopy(sParam3, "", 32);
			return 1;

		case 4:
			*uParam1 = {Global_89667[2 /*109*/].f_4};
			*uParam2 = Global_89667[2 /*109*/].f_7;
			StringCopy(sParam3, "", 32);
			return 1;

		case 5:
			*uParam1 = {Global_101700.f_2095.f_539.f_1528[0 /*3*/] + Vector(-1f, 0f, 0f)};
			*uParam2 = Global_101700.f_2095.f_539.f_1538[0];
			StringCopy(sParam3, "", 32);
			return 1;

		case 6:
			*uParam1 = {Global_101700.f_2095.f_539.f_1528[1 /*3*/] + Vector(-1f, 0f, 0f)};
			*uParam2 = Global_101700.f_2095.f_539.f_1538[1];
			StringCopy(sParam3, "", 32);
			return 1;

		case 7:
			*uParam1 = {Global_101700.f_2095.f_539.f_1528[2 /*3*/] + Vector(-1f, 0f, 0f)};
			*uParam2 = Global_101700.f_2095.f_539.f_1538[2];
			StringCopy(sParam3, "", 32);
			return 1;
		}
		*uParam1 = {Global_Switch_Positions[iParam0 /*3*/]};
		return 1;
	}
	return 0;
}

// Position - 0x2A5C
bool func_49(int *iParam0) {
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	vector3 vVar6;
	float fVar9;

	iVar0 = Global_101700.f_2095.f_539.f_3551;
	vVar1 = {Global_101700.f_2095.f_539.f_1528[iVar0 /*3*/]};
	if (func_50(vVar1, 0f, 0f, 0f, 0)) {
		vVar1 = {entity::get_entity_coords(player::player_ped_id(), 0)};
	}
	*iParam0 = 5;
	fVar4 = 9999999f;
	iVar5 = 0;
	while (iVar5 < 5) {
		if (gameplay::is_bit_set(Global_101700.f_6188.f_11[iVar5], 0)) {
			vVar6 = {Global_87027[iVar5 /*9*/].f_3};
			fVar9 = system::vdist(vVar1, vVar6);
			if (fVar9 > 150f) {
				if (fVar9 < fVar4) {
					*iParam0 = iVar5;
					fVar4 = fVar9;
				}
			}
		}
		iVar5++;
	}
	return *iParam0 != 5;
}

// Position - 0x2B17
bool func_50(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x2B5E
bool func_51(int iParam0, float *fParam1, char *sParam2) {
	vector3 vVar0;
	int iVar3;
	var *uVar4;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	vector3 vVar17;

	switch (iParam0) {
	case 0: return false;

	case 1:
		func_49(&iVar3);
		if (iVar3 < 5) {
			*fParam1 = Global_87027[iVar3 /*9*/].f_6;
			StringCopy(sParam2, "", 32);
			return true;
		}
		else {
			*fParam1 = Global_87027[0 /*9*/].f_6;
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 2:
		*fParam1 = Global_89667[0 /*109*/].f_7;
		StringCopy(sParam2, "", 32);
		return true;

	case 3:
		*fParam1 = Global_89667[1 /*109*/].f_7;
		StringCopy(sParam2, "", 32);
		return true;

	case 4:
		*fParam1 = Global_89667[2 /*109*/].f_7;
		StringCopy(sParam2, "", 32);
		return true;

	case 5:
		*fParam1 = Global_101700.f_2095.f_539.f_1538[0];
		StringCopy(sParam2, func_54(Global_101700.f_2095.f_539.f_1542[0]), 32);
		return true;

	case 6:
		*fParam1 = Global_101700.f_2095.f_539.f_1538[1];
		StringCopy(sParam2, func_54(Global_101700.f_2095.f_539.f_1542[1]), 32);
		return true;

	case 7:
		*fParam1 = Global_101700.f_2095.f_539.f_1538[2];
		StringCopy(sParam2, func_54(Global_101700.f_2095.f_539.f_1542[2]), 32);
		return true;

	case 11:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "v_strip3", 32);
			return true;
		}
		break;

	case 8:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 9: return func_51(8, fParam1, sParam2);

	case 10: return func_51(8, fParam1, sParam2);

	case 13:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 14:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 15:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 12:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 16:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 17:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 18:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 19:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 20:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 21:
		*fParam1 = 0f;
		StringCopy(sParam2, "", 32);
		return false;

	case 22:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 74:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 23: return func_51(208, fParam1, sParam2);

	case 24:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 67:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 25:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 26:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 27:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 28:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 29:
		*fParam1 = 0f;
		StringCopy(sParam2, "", 32);
		return false;

	case 30:
		*fParam1 = 0f;
		StringCopy(sParam2, "", 32);
		return false;

	case 31:
		*fParam1 = 0f;
		StringCopy(sParam2, "", 32);
		return false;

	case 32:
		*fParam1 = 0f;
		StringCopy(sParam2, "", 32);
		return false;

	case 33:
		*fParam1 = 0f;
		StringCopy(sParam2, "", 32);
		return false;

	case 34:
		*fParam1 = 0f;
		StringCopy(sParam2, "", 32);
		return false;

	case 35:
		*fParam1 = 0f;
		StringCopy(sParam2, "", 32);
		return false;

	case 36:
		*fParam1 = 0f;
		StringCopy(sParam2, "", 32);
		return false;

	case 37:
		*fParam1 = 0f;
		StringCopy(sParam2, "", 32);
		return false;

	case 58:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 59:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 60:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 38:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 39:
		*fParam1 = 0f;
		StringCopy(sParam2, "", 32);
		return false;

	case 40:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "v_trailer", 32);
			return true;
		}
		break;

	case 41:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 42:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 43:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 44:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 45:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 46:
		*fParam1 = 0f;
		StringCopy(sParam2, "", 32);
		return false;

	case 47:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 49:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 48:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 124:
		vVar0 = {-803.734f, 168.148f, 76.3542f};
		*fParam1 = 105f;
		StringCopy(sParam2, "v_michael", 32);
		return true;

	case 50:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 51:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 52:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 66:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 53:
		*fParam1 = 0f;
		StringCopy(sParam2, "", 32);
		return false;

	case 54:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 55:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 56:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 57:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 61:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 62:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 63:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 68:
		*fParam1 = 0f;
		StringCopy(sParam2, "", 32);
		return false;

	case 69:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 64:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 65:
		if (func_53(iParam0, &vVar0, fParam1)) {
			StringCopy(sParam2, "", 32);
			return true;
		}
		break;

	case 70:
		*fParam1 = 0f;
		StringCopy(sParam2, "", 32);
		return false;

	case 71:
		*fParam1 = 0f;
		StringCopy(sParam2, "", 32);
		return false;

	case 72:
		*fParam1 = 0f;
		StringCopy(sParam2, "", 32);
		return false;

	case 73:
		*fParam1 = 0f;
		StringCopy(sParam2, "", 32);
		return false;

	case 234:
		*fParam1 = 122.69f;
		StringCopy(sParam2, "v_trailer", 32);
		return true;

	case 316:
		*fParam1 = -60.31f;
		StringCopy(sParam2, "v_trailer", 32);
		return true;

	case 315:
		*fParam1 = 41.654f - 180f;
		StringCopy(sParam2, "v_trailer", 32);
		return true;

	case 75:
		*fParam1 = -172.697f;
		StringCopy(sParam2, "", 32);
		return true;

	case 76:
		*fParam1 = 181.8927f - 180f;
		StringCopy(sParam2, "", 32);
		return true;

	case 77:
		*fParam1 = -158f;
		StringCopy(sParam2, "v_michael", 32);
		return true;

	case 78:
		*fParam1 = -152f;
		StringCopy(sParam2, "v_michael", 32);
		return true;

	case 79:
		*fParam1 = 20.353f;
		StringCopy(sParam2, "v_michael", 32);
		return true;

	case 80:
		*fParam1 = -48.53f + 180f;
		StringCopy(sParam2, "", 32);
		return true;

	case 81:
		*fParam1 = -45f;
		StringCopy(sParam2, "", 32);
		return true;

	case 82:
		*fParam1 = -113.748f;
		StringCopy(sParam2, "v_michael", 32);
		return true;

	case 83:
		*fParam1 = -173.748f;
		StringCopy(sParam2, "v_michael", 32);
		return true;

	case 84:
		*fParam1 = 32.7938f;
		StringCopy(sParam2, "v_trailer", 32);
		return true;

	case 85:
		*fParam1 = -56f;
		StringCopy(sParam2, "v_michael", 32);
		return true;

	case 86:
		*fParam1 = 13f;
		StringCopy(sParam2, "v_michael", 32);
		return true;

	case 87:
		*fParam1 = 166.32f;
		StringCopy(sParam2, "", 32);
		return true;

	case 88:
		*fParam1 = 21f;
		*fParam1 = -132f;
		StringCopy(sParam2, "", 32);
		return true;

	case 89:
		*fParam1 = -84.8108f;
		StringCopy(sParam2, "", 32);
		return true;

	case 90:
		*fParam1 = -90.5046f;
		StringCopy(sParam2, "", 32);
		return true;

	case 91:
		*fParam1 = 105.0795f;
		StringCopy(sParam2, "", 32);
		return true;

	case 92:
		*fParam1 = -54.347f;
		StringCopy(sParam2, "", 32);
		return true;

	case 93:
		*fParam1 = 117f;
		StringCopy(sParam2, "", 32);
		return true;

	case 94:
		*fParam1 = -36f;
		StringCopy(sParam2, "", 32);
		return true;

	case 95:
		*fParam1 = 70f;
		StringCopy(sParam2, "", 32);
		return true;

	case 96:
		*fParam1 = 34.621f;
		StringCopy(sParam2, "", 32);
		return true;

	case 97:
		*fParam1 = -45f;
		StringCopy(sParam2, "", 32);
		return true;

	case 98:
		*fParam1 = -150.6148f + 0.0095f;
		*fParam1 += 0.0004f;
		*fParam1 += 0.0015f;
		*fParam1 += 0.0002f;
		*fParam1 += -0.0009f;
		StringCopy(sParam2, "", 32);
		return true;

	case 99:
		*fParam1 = -57f;
		StringCopy(sParam2, "", 32);
		return true;

	case 100:
		*fParam1 = 84.6073f;
		StringCopy(sParam2, "", 32);
		return true;

	case 101:
		*fParam1 = 249.0753f;
		StringCopy(sParam2, "", 32);
		return true;

	case 102:
		*fParam1 = 69f;
		StringCopy(sParam2, "", 32);
		return true;

	case 103:
		*fParam1 = 143.4931f;
		StringCopy(sParam2, "", 32);
		return true;

	case 104:
		*fParam1 = 123f;
		StringCopy(sParam2, "", 32);
		return true;

	case 105:
		*fParam1 = 168f;
		StringCopy(sParam2, "", 32);
		return true;

	case 106:
		*fParam1 = 63.4995f;
		StringCopy(sParam2, "", 32);
		return true;

	case 107:
		*fParam1 = -159f;
		StringCopy(sParam2, "", 32);
		return true;

	case 108:
		*fParam1 = -6f;
		StringCopy(sParam2, "", 32);
		return true;

	case 109:
		*fParam1 = 99f;
		StringCopy(sParam2, "", 32);
		return true;

	case 110:
		*fParam1 = 133f;
		StringCopy(sParam2, "", 32);
		return true;

	case 111:
		*fParam1 = 33f;
		StringCopy(sParam2, "", 32);
		return true;

	case 112:
		*fParam1 = -162.311f;
		StringCopy(sParam2, "", 32);
		return true;

	case 113:
		*fParam1 = 172f;
		StringCopy(sParam2, "", 32);
		return true;

	case 135:
		*fParam1 = -59.25f;
		StringCopy(sParam2, "", 32);
		return true;

	case 136:
		*fParam1 = 82.254f;
		StringCopy(sParam2, "", 32);
		return true;

	case 137:
		*fParam1 = -152.965f;
		StringCopy(sParam2, "", 32);
		return true;

	case 138:
		*fParam1 = -10.099f;
		StringCopy(sParam2, "", 32);
		return true;

	case 139:
		*fParam1 = 158.5974f;
		StringCopy(sParam2, "", 32);
		return true;

	case 140:
		*fParam1 = 99.18f;
		StringCopy(sParam2, "", 32);
		return true;

	case 141:
		*fParam1 = 218.4774f;
		StringCopy(sParam2, "", 32);
		return true;

	case 142:
		*fParam1 = 125.6193f;
		StringCopy(sParam2, "", 32);
		return true;

	case 143:
		*fParam1 = 142.373f;
		StringCopy(sParam2, "", 32);
		return true;

	case 144:
		*fParam1 = -34.878f;
		StringCopy(sParam2, "", 32);
		return true;

	case 145:
		*fParam1 = -172.419f;
		StringCopy(sParam2, "", 32);
		return true;

	case 146:
		*fParam1 = -107.439f;
		StringCopy(sParam2, "", 32);
		return true;

	case 147:
		*fParam1 = 157.311f;
		StringCopy(sParam2, "", 32);
		return true;

	case 148:
		*fParam1 = -68.812f;
		StringCopy(sParam2, "", 32);
		return true;

	case 149:
		*fParam1 = 4.693f;
		StringCopy(sParam2, "", 32);
		return true;

	case 150:
		*fParam1 = 78.65f;
		StringCopy(sParam2, "v_trailer", 32);
		return true;

	case 114:
		*fParam1 = 8f;
		StringCopy(sParam2, "", 32);
		return true;

	case 115:
		*fParam1 = 69f;
		StringCopy(sParam2, "", 32);
		return true;

	case 116:
		*fParam1 = 0f;
		StringCopy(sParam2, "", 32);
		return true;

	case 117:
		*fParam1 = -74.7818f;
		StringCopy(sParam2, "", 32);
		return true;

	case 118:
		*fParam1 = -48.36f;
		StringCopy(sParam2, "", 32);
		return true;

	case 119:
		*fParam1 = 144.178f;
		StringCopy(sParam2, "", 32);
		return true;

	case 120:
		*fParam1 = 288f;
		StringCopy(sParam2, "", 32);
		return true;

	case 121:
		*fParam1 = 101.5f;
		StringCopy(sParam2, "", 32);
		return true;

	case 122:
		*fParam1 = 99.72f;
		StringCopy(sParam2, "v_michael", 32);
		return true;

	case 123:
		*fParam1 = 120f;
		StringCopy(sParam2, "", 32);
		return true;

	case 125:
		*fParam1 = -3f;
		StringCopy(sParam2, "", 32);
		return true;

	case 126:
		*fParam1 = -158.0894f;
		StringCopy(sParam2, "", 32);
		return true;

	case 127:
		*fParam1 = -76.3681f;
		StringCopy(sParam2, "", 32);
		return true;

	case 128:
		*fParam1 = 30f + 180f;
		StringCopy(sParam2, "v_trailer", 32);
		return true;

	case 129:
		*fParam1 = -80.6f;
		StringCopy(sParam2, "", 32);
		return true;

	case 130:
		*fParam1 = -9.1673f;
		StringCopy(sParam2, "v_trailer", 32);
		return true;

	case 131:
		*fParam1 = -86.0894f;
		StringCopy(sParam2, "", 32);
		return true;

	case 132:
		*fParam1 = -161.0894f;
		StringCopy(sParam2, "v_trailer", 32);
		return true;

	case 133:
		*fParam1 = 226.5579f - 270f;
		StringCopy(sParam2, "", 32);
		return true;

	case 134:
		*fParam1 = -33.128f;
		StringCopy(sParam2, "", 32);
		return true;

	case 151:
		*fParam1 = -6f;
		StringCopy(sParam2, "", 32);
		return true;

	case 152:
		*fParam1 = 72f;
		StringCopy(sParam2, "", 32);
		return true;

	case 153:
		*fParam1 = -176.25f;
		StringCopy(sParam2, "", 32);
		return true;

	case 154:
		*fParam1 = -147.192f;
		StringCopy(sParam2, "", 32);
		return true;

	case 155:
		*fParam1 = 59.082f;
		StringCopy(sParam2, "", 32);
		return true;

	case 156:
		*fParam1 = 26.087f;
		StringCopy(sParam2, "v_michael", 32);
		return true;

	case 157:
		*fParam1 = 37.27f;
		StringCopy(sParam2, "", 32);
		return true;

	case 158:
		*fParam1 = -13.8153f;
		StringCopy(sParam2, "", 32);
		return true;

	case 159:
		*fParam1 = -62.5f;
		StringCopy(sParam2, "", 32);
		return true;

	case 160:
		*fParam1 = 119f;
		StringCopy(sParam2, "", 32);
		return true;

	case 161:
		*fParam1 = 86.3776f;
		StringCopy(sParam2, "", 32);
		return true;

	case 162:
		*fParam1 = 117f;
		StringCopy(sParam2, "", 32);
		return true;

	case 163:
		*fParam1 = -164f;
		StringCopy(sParam2, "v_michael", 32);
		return true;

	case 164:
		*fParam1 = 88f;
		StringCopy(sParam2, "", 32);
		return true;

	case 165:
		*fParam1 = -144.622f;
		StringCopy(sParam2, "", 32);
		return true;

	case 166:
		*fParam1 = -61.2262f;
		StringCopy(sParam2, "", 32);
		return true;

	case 167:
		*fParam1 = -22.32f;
		StringCopy(sParam2, "", 32);
		return true;

	case 168:
		if (func_52(0, 25, &uVar4, &fVar7)) {
			*fParam1 = fVar7 + 222.8314f;
			StringCopy(sParam2, "v_michael", 32);
			return true;
		}
		break;

	case 169:
		*fParam1 = 112.841f;
		StringCopy(sParam2, "v_michael", 32);
		return true;

	case 170:
		*fParam1 = -103.8158f + 180f;
		StringCopy(sParam2, "", 32);
		return true;

	case 171:
		*fParam1 = -28.0926f;
		StringCopy(sParam2, "", 32);
		return true;

	case 173:
		*fParam1 = -0.0301f;
		StringCopy(sParam2, "", 32);
		return true;

	case 172:
		*fParam1 = -30.185f;
		*fParam1 += 0.003f;
		StringCopy(sParam2, "", 32);
		return true;

	case 174:
		*fParam1 = 14.98f;
		StringCopy(sParam2, "v_michael", 32);
		return true;
	}
	switch (iParam0) {
	case 175:
		*fParam1 = -179.653f;
		StringCopy(sParam2, "v_franklins", 32);
		return true;

	case 176:
		*fParam1 = -147f;
		StringCopy(sParam2, "v_franklinshouse", 32);
		return true;

	case 177:
		*fParam1 = -81f;
		StringCopy(sParam2, "v_franklinshouse", 32);
		return true;

	case 178:
		*fParam1 = -95.4016f;
		StringCopy(sParam2, "v_franklinshouse", 32);
		return true;

	case 179:
		*fParam1 = -16.0627f + 180f;
		StringCopy(sParam2, "v_franklins", 32);
		return true;

	case 180:
		*fParam1 = 129f;
		StringCopy(sParam2, "v_franklinshouse", 32);
		return true;

	case 181:
		*fParam1 = -86.613f;
		StringCopy(sParam2, "v_franklins", 32);
		return true;

	case 182:
		*fParam1 = -63f;
		StringCopy(sParam2, "", 32);
		return true;

	case 183:
		*fParam1 = 111.688f;
		StringCopy(sParam2, "", 32);
		return true;

	case 184:
		*fParam1 = 143.7974f;
		StringCopy(sParam2, "", 32);
		return true;

	case 185:
		*fParam1 = 143.792f;
		StringCopy(sParam2, "", 32);
		return true;

	case 186:
		*fParam1 = 4.6834f;
		StringCopy(sParam2, "v_franklinshouse", 32);
		return true;

	case 187:
		*fParam1 = -108f;
		StringCopy(sParam2, "v_franklinshouse", 32);
		return true;

	case 188:
		*fParam1 = 69f;
		StringCopy(sParam2, "v_franklinshouse", 32);
		return true;

	case 189:
		*fParam1 = -172.2207f;
		StringCopy(sParam2, "v_franklinshouse", 32);
		return true;

	case 190:
		*fParam1 = 0f;
		StringCopy(sParam2, "v_franklinshouse", 32);
		return true;

	case 191:
		*fParam1 = -12.5158f;
		StringCopy(sParam2, "v_franklinshouse", 32);
		return true;

	case 196:
		*fParam1 = -1.5f;
		StringCopy(sParam2, "v_franklins", 32);
		return true;

	case 197:
		*fParam1 = 27f;
		StringCopy(sParam2, "v_franklinshouse", 32);
		return true;

	case 192:
		*fParam1 = 107.981f;
		StringCopy(sParam2, "", 32);
		return true;

	case 193:
		*fParam1 = 172.9187f;
		StringCopy(sParam2, "", 32);
		return true;

	case 194:
		*fParam1 = -67.608f;
		StringCopy(sParam2, "", 32);
		return true;

	case 195:
		*fParam1 = 74.1158f;
		StringCopy(sParam2, "", 32);
		return true;

	case 198:
		*fParam1 = 1.0411f;
		StringCopy(sParam2, "", 32);
		return true;

	case 199:
		*fParam1 = -152.203f;
		StringCopy(sParam2, "", 32);
		return true;

	case 200:
		*fParam1 = 310.879f - 180f;
		StringCopy(sParam2, "", 32);
		return true;

	case 201:
		*fParam1 = 130.879f;
		StringCopy(sParam2, "", 32);
		return true;

	case 202:
		*fParam1 = 35.604f;
		StringCopy(sParam2, "", 32);
		return true;

	case 203:
		*fParam1 = -93f;
		StringCopy(sParam2, "", 32);
		return true;

	case 204:
		*fParam1 = -119.3944f;
		StringCopy(sParam2, "", 32);
		return true;

	case 205:
		*fParam1 = 121.9322f;
		StringCopy(sParam2, "", 32);
		return true;

	case 206:
		*fParam1 = -36f;
		StringCopy(sParam2, "", 32);
		return true;

	case 207:
		*fParam1 = -95.588f;
		StringCopy(sParam2, "", 32);
		return true;

	case 208:
		*fParam1 = 168f;
		StringCopy(sParam2, "", 32);
		return true;

	case 209:
		*fParam1 = 230.78f;
		StringCopy(sParam2, "", 32);
		return true;

	case 210:
		*fParam1 = 165.7751f;
		StringCopy(sParam2, "", 32);
		return true;

	case 211:
		*fParam1 = -179f;
		StringCopy(sParam2, "", 32);
		return true;

	case 212:
		*fParam1 = 1.2709f;
		StringCopy(sParam2, "", 32);
		return true;

	case 213:
		*fParam1 = 84f;
		StringCopy(sParam2, "", 32);
		return true;

	case 214:
		*fParam1 = -117.03f;
		StringCopy(sParam2, "", 32);
		return true;

	case 215:
		*fParam1 = -49.0324f;
		StringCopy(sParam2, "", 32);
		return true;

	case 216:
		*fParam1 = -45f;
		StringCopy(sParam2, "", 32);
		return true;

	case 217:
		*fParam1 = 153f;
		StringCopy(sParam2, "", 32);
		return true;

	case 221:
		*fParam1 = 84.96f;
		StringCopy(sParam2, "", 32);
		return true;

	case 222:
		*fParam1 = -59.3848f;
		StringCopy(sParam2, "v_chopshop", 32);
		return true;

	case 223:
		*fParam1 = 43.82f;
		StringCopy(sParam2, "v_chopshop", 32);
		return true;

	case 224: return func_51(222, fParam1, sParam2);

	case 226:
		*fParam1 = 160f;
		StringCopy(sParam2, "", 32);
		return true;

	case 227:
		*fParam1 = -14.749f;
		StringCopy(sParam2, "", 32);
		return true;

	case 228:
		*fParam1 = -150f;
		StringCopy(sParam2, "", 32);
		return true;

	case 229:
		*fParam1 = 96.0116f;
		StringCopy(sParam2, "", 32);
		return true;

	case 230:
		*fParam1 = -43.6661f;
		StringCopy(sParam2, "", 32);
		return true;

	case 218:
		*fParam1 = -70.4124f;
		StringCopy(sParam2, "", 32);
		return true;

	case 219:
		*fParam1 = -12f;
		StringCopy(sParam2, "", 32);
		return true;

	case 220:
		*fParam1 = -117.356f;
		StringCopy(sParam2, "", 32);
		return true;

	case 225:
		*fParam1 = -83.8f;
		StringCopy(sParam2, "", 32);
		return true;

	case 231:
		*fParam1 = 350.3382f;
		StringCopy(sParam2, "", 32);
		return true;

	case 232:
		*fParam1 = 109.0206f;
		StringCopy(sParam2, "", 32);
		return true;

	case 233:
		*fParam1 = 109.0206f;
		StringCopy(sParam2, "", 32);
		return true;

	case 235:
		*fParam1 = -112f;
		StringCopy(sParam2, "v_strip3", 32);
		return true;

	case 236:
		*fParam1 = 114f;
		StringCopy(sParam2, "v_strip3", 32);
		return true;

	case 237:
		*fParam1 = 30f;
		StringCopy(sParam2, "", 32);
		return true;

	case 238:
		*fParam1 = -164f;
		StringCopy(sParam2, "", 32);
		return true;

	case 239:
		*fParam1 = -122f;
		StringCopy(sParam2, "", 32);
		return true;

	case 240:
		*fParam1 = -4.124f;
		StringCopy(sParam2, "", 32);
		return true;

	case 241:
		*fParam1 = 108f;
		StringCopy(sParam2, "", 32);
		return true;

	case 242:
		*fParam1 = 13.7207f;
		StringCopy(sParam2, "", 32);
		return true;

	case 245:
		*fParam1 = 27.746f;
		StringCopy(sParam2, "v_trailer", 32);
		return true;

	case 243:
		*fParam1 = 18f;
		StringCopy(sParam2, "", 32);
		return true;

	case 244:
		*fParam1 = -51f;
		StringCopy(sParam2, "", 32);
		return true;

	case 246:
		*fParam1 = -165f;
		StringCopy(sParam2, "", 32);
		return true;

	case 247:
		*fParam1 = 133f;
		StringCopy(sParam2, "", 32);
		return true;

	case 248:
		*fParam1 = 10.77f;
		StringCopy(sParam2, "", 32);
		return true;

	case 249:
		*fParam1 = 138f - 180f;
		StringCopy(sParam2, "", 32);
		return true;

	case 250:
		*fParam1 = 87f;
		StringCopy(sParam2, "", 32);
		return true;

	case 251:
		*fParam1 = -42.8529f;
		StringCopy(sParam2, "", 32);
		return true;

	case 252:
		*fParam1 = 2.6497f;
		StringCopy(sParam2, "", 32);
		return true;

	case 253:
		*fParam1 = 135f;
		StringCopy(sParam2, "", 32);
		return true;

	case 254:
		*fParam1 = -40f;
		StringCopy(sParam2, "", 32);
		return true;

	case 255:
		*fParam1 = 30.24f;
		StringCopy(sParam2, "", 32);
		return true;

	case 264:
		*fParam1 = -90f;
		StringCopy(sParam2, "", 32);
		return true;

	case 265:
		*fParam1 = -144.274f;
		StringCopy(sParam2, "", 32);
		return true;

	case 266:
		*fParam1 = 68.8227f;
		StringCopy(sParam2, "", 32);
		return true;

	case 267:
		*fParam1 = 56.2037f;
		StringCopy(sParam2, "", 32);
		return true;

	case 268:
		*fParam1 = 33f;
		StringCopy(sParam2, "", 32);
		return true;

	case 269:
		*fParam1 = -106.6605f;
		StringCopy(sParam2, "", 32);
		return true;

	case 270:
		*fParam1 = -102f;
		StringCopy(sParam2, "", 32);
		return true;

	case 271:
		*fParam1 = 26.3597f;
		StringCopy(sParam2, "", 32);
		return true;

	case 272:
		*fParam1 = -83.3175f;
		StringCopy(sParam2, "", 32);
		return true;

	case 273:
		*fParam1 = -153f;
		StringCopy(sParam2, "", 32);
		return true;

	case 274:
		*fParam1 = 9f;
		StringCopy(sParam2, "", 32);
		return true;

	case 275:
		*fParam1 = 277.613f - 360f;
		StringCopy(sParam2, "", 32);
		return true;

	case 276:
		*fParam1 = -4.7459f;
		StringCopy(sParam2, "", 32);
		return true;

	case 277:
		*fParam1 = -98.56f;
		StringCopy(sParam2, "", 32);
		return true;

	case 278:
		*fParam1 = -33.77f;
		StringCopy(sParam2, "", 32);
		return true;

	case 279:
		*fParam1 = 155.68f;
		StringCopy(sParam2, "", 32);
		return true;

	case 280:
		*fParam1 = -49.56f;
		StringCopy(sParam2, "", 32);
		return true;

	case 281:
		*fParam1 = -5.8739f;
		StringCopy(sParam2, "", 32);
		return true;

	case 282:
		*fParam1 = 70.1627f;
		StringCopy(sParam2, "", 32);
		return true;

	case 283:
		*fParam1 = 158.979f;
		StringCopy(sParam2, "", 32);
		return true;

	case 284:
		*fParam1 = -67.1851f;
		StringCopy(sParam2, "", 32);
		return true;

	case 285:
		*fParam1 = 47.054f;
		StringCopy(sParam2, "", 32);
		return true;

	case 256:
		*fParam1 = 120f;
		StringCopy(sParam2, "", 32);
		return true;

	case 257:
		*fParam1 = 171.253f;
		StringCopy(sParam2, "", 32);
		return true;

	case 258:
		*fParam1 = 10.247f;
		StringCopy(sParam2, "", 32);
		return true;

	case 259:
		*fParam1 = -32.488f;
		StringCopy(sParam2, "", 32);
		return true;

	case 260:
		*fParam1 = -29.093f;
		StringCopy(sParam2, "", 32);
		return true;

	case 261:
		*fParam1 = 229.6085f;
		StringCopy(sParam2, "", 32);
		return true;

	case 286:
		*fParam1 = -150f;
		StringCopy(sParam2, "", 32);
		return true;

	case 287:
		*fParam1 = -81f;
		StringCopy(sParam2, "", 32);
		return true;

	case 288:
		*fParam1 = 12f;
		StringCopy(sParam2, "", 32);
		return true;

	case 262:
		*fParam1 = -90f;
		StringCopy(sParam2, "", 32);
		return true;

	case 263:
		*fParam1 = -171f;
		StringCopy(sParam2, "", 32);
		return true;

	case 289:
		*fParam1 = -11.5018f;
		StringCopy(sParam2, "", 32);
		return true;

	case 290:
		*fParam1 = -129f;
		StringCopy(sParam2, "v_strip3", 32);
		return true;

	case 291:
		*fParam1 = -147f;
		StringCopy(sParam2, "v_Trevors", 32);
		return true;

	case 292:
		*fParam1 = 28.7271f;
		StringCopy(sParam2, "v_Trevors", 32);
		return true;

	case 293:
		*fParam1 = 28.7271f;
		StringCopy(sParam2, "v_Trevors", 32);
		return true;

	case 294: return func_51(293, fParam1, sParam2);

	case 295: return func_51(292, fParam1, sParam2);

	case 299:
		*fParam1 = 34.661f;
		StringCopy(sParam2, "v_Trevors", 32);
		return true;

	case 300: return func_51(303, fParam1, sParam2);

	case 301: return func_51(303, fParam1, sParam2);

	case 302: return func_51(303, fParam1, sParam2);

	case 303:
		*fParam1 = 32f;
		StringCopy(sParam2, "v_Trevors", 32);
		return true;

	case 296:
		*fParam1 = 116.742f;
		StringCopy(sParam2, "v_Trevors", 32);
		return true;

	case 297:
		*fParam1 = 100.46f;
		StringCopy(sParam2, "v_Trevors", 32);
		return true;

	case 298:
		*fParam1 = 102f;
		StringCopy(sParam2, "v_Trevors", 32);
		return true;

	case 304:
		*fParam1 = -152.0894f;
		StringCopy(sParam2, "", 32);
		return true;

	case 305:
		*fParam1 = 122.5269f;
		StringCopy(sParam2, "v_methlab", 32);
		return true;

	case 306:
		vVar8 = {-7.4998f, 7.4995f, -0.5258f};
		*fParam1 = gameplay::get_heading_from_vector_2d(-vVar8.x, -vVar8.y);
		StringCopy(sParam2, "", 32);
		return true;

	case 307:
		vVar11 = {10.6345f, 0.7246f, 1.2508f};
		*fParam1 = gameplay::get_heading_from_vector_2d(-vVar11.x, -vVar11.y);
		StringCopy(sParam2, "", 32);
		return true;

	case 308:
		vVar14 = {-3.4271f, -13.6787f, -1.4107f};
		*fParam1 = gameplay::get_heading_from_vector_2d(-vVar14.x, -vVar14.y);
		StringCopy(sParam2, "", 32);
		return true;

	case 309:
		vVar17 = {-19.6582f, 7.896f, 0.1334f};
		*fParam1 = gameplay::get_heading_from_vector_2d(-vVar17.x, -vVar17.y);
		StringCopy(sParam2, "", 32);
		return true;

	case 310:
		*fParam1 = -87.7215f;
		StringCopy(sParam2, "", 32);
		return true;

	case 311:
		*fParam1 = -145f;
		StringCopy(sParam2, "v_trailer", 32);
		return true;

	case 312:
		*fParam1 = (103.2841f + 88.7571f) / 2f;
		StringCopy(sParam2, "", 32);
		return true;

	case 313:
		*fParam1 = -177f + 180f;
		StringCopy(sParam2, "", 32);
		return true;

	case 314:
		*fParam1 = 327.7746f;
		StringCopy(sParam2, "", 32);
		return true;
	}
	*fParam1 = 0f;
	StringCopy(sParam2, "", 32);
	return false;
}

// Position - 0x4F49
bool func_52(int iParam0, int iParam1, var *uParam2, var *uParam3) {
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 0:
			*uParam2 = {13.904f, 1.193f, 0.7f};
			*uParam3 = -144f;
			return true;

		case 1:
			if (func_52(0, iParam1, uParam2, uParam3)) {
				*uParam2 = {*uParam2 + Vector(0f, -1.1731f, 0.809f)};
				*uParam3 += 456.7661f - 360f;
				return true;
			}
			break;

		case 2:
			*uParam2 = {Vector(71.8356f, 180.5483f, -796.9911f) - Vector(71.1531f, 179.5117f, -812.0607f)};
			*uParam3 = 16f - 222.8314f + 360f;
			return true;
		}
		return false;

	case 1:
		switch (iParam0) {
		case 0:
			*uParam2 = {10.9793f, -5.9f, 4.6f};
			*uParam3 = 163.0716f;
			return true;

		case 1:
			if (func_52(0, iParam1, uParam2, uParam3)) {
				*uParam2 = {*uParam2 + Vector(0f, 0.25f, -0.6f)};
				*uParam3 += 0f;
				return true;
			}
			break;

		case 2:
			if (func_52(0, iParam1, uParam2, uParam3)) {
				*uParam2 = {*uParam2 + Vector(0f, -0.5f, -1.2f)};
				*uParam3 += 0f;
				return true;
			}
			break;
		}
		break;

	case 2:
	case 3:
		switch (iParam0) {
		case 0:
		case 1:
		case 2:
			*uParam2 = {Vector(71.835f, 180.548f, -796.991f) - Vector(71.1531f, 179.5117f, -812.0607f)};
			*uParam3 = 16f + 90f - 222.8314f + 360f;
			return true;
		}
		break;

	case 4:
		switch (iParam0) {
		case 0:
		case 1:
		case 2:
			*uParam2 = {6.8878f, -5.5247f, 1.5228f};
			*uParam3 = 160f;
			return true;
		}
		break;

	case 18:
		switch (iParam0) {
		case 0:
			*uParam2 = {4.1937f, -9.0309f, 4.5877f};
			*uParam3 = 255f;
			return true;
		}
		break;

	case 9:
		switch (iParam0) {
		case 0:
			*uParam2 = {4.4577f, -9.6399f, 4.5876f};
			*uParam3 = 252f;
			return true;
		}
		break;

	case 5:
		switch (iParam0) {
		case 0:
			*uParam2 = {3.799f, -9.41f, 4.5877f};
			*uParam3 = 273f;
			return true;
		}
		break;

	case 21:
		switch (iParam0) {
		case 0:
			if (func_52(0, 5, uParam2, uParam3)) {
				*uParam2 = {*uParam2 + Vector(0f, 0f, 0f)};
				*uParam3 += 0f;
				return true;
			}
			break;
		}
		break;

	case 6:
		switch (iParam0) {
		case 0:
			*uParam2 = {12.552f, 4.373f, 4.6f + 1f};
			*uParam3 = 318f;
			return true;
		}
		break;

	case 7:
		switch (iParam0) {
		case 0:
			*uParam2 = {-0.4395f, -11.0022f, 0.0747f};
			*uParam3 = 306f;
			return true;
		}
		break;

	case 8:
		switch (iParam0) {
		case 0:
			*uParam2 = {5.5001f, -12.4406f, 4.6f};
			*uParam3 = 0f;
			return true;
		}
		break;

	case 10:
		switch (iParam0) {
		case 0:
			*uParam2 = {3.5f, -9.1f, 4.6f};
			*uParam3 = 330f;
			return true;
		}
		break;

	case 11:
		switch (iParam0) {
		case 0:
			*uParam2 = {0.849f, 1.575f, 0f};
			*uParam3 = 272.857f;
			return true;
		}
		break;

	case 12:
		switch (iParam0) {
		case 0:
		case 1:
			*uParam2 = {8.183f, -3.0467f, 5.5876f};
			*uParam3 = 158f;
			return true;
		}
		break;

	case 13:
		switch (iParam0) {
		case 0:
		case 1:
			*uParam2 = {9.383f, -3.3887f, 5.73f};
			*uParam3 = 339f;
			return true;
		}
		break;

	case 14:
		switch (iParam0) {
		case 0:
		case 1:
			*uParam2 = {Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f)};
			*uParam3 = -159.23f - 222.8314f + 360f;
			return true;
		}
		break;

	case 15:
		switch (iParam0) {
		case 0:
		case 1:
			*uParam2 = {Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f)};
			*uParam3 = -159.23f - 222.8314f + 360f;
			return true;
		}
		break;

	case 16:
		switch (iParam0) {
		case 0:
			*uParam2 = {4.488f, -9.098f, 5.4864f};
			*uParam3 = 147f;
			return true;
		}
		break;

	case 17:
		switch (iParam0) {
		case 0:
			*uParam2 = {9.04f, 5.71f, 1.44f};
			*uParam3 = 159.3182f;
			return true;
		}
		break;

	case 20:
		switch (iParam0) {
		case 0:
			*uParam2 = {3.25f, -9.53f, 4.588f};
			*uParam3 = 333f;
			return true;
		}
		break;

	case 22:
		switch (iParam0) {
		case 0:
			*uParam2 = {Vector(0f, -11.0022f, -0.4395f) + Vector(0f, gameplay::get_random_float_in_range(-0.5f, 0.5f),
																 gameplay::get_random_float_in_range(-0.5f, 0.5f))};
			*uParam3 = 306f + gameplay::get_random_float_in_range(10f, 10f);
			return true;
		}
		break;

	case 23:
		switch (iParam0) {
		case 0:
			*uParam2 = {Vector(60.2063f, 141.5129f, -863.5425f) - Vector(71.1531f, 179.5117f, -812.0607f) -
						Vector(1f, 0f, 0f)};
			*uParam2 = {*uParam2 * FtoV(0.95f)};
			*uParam3 = gameplay::get_heading_from_vector_2d(*uParam2, uParam2->f_1);
			return true;
		}
		break;

	case 24:
		switch (iParam0) {
		case 0:
			*uParam2 = {Vector(71.8266f, 180.4725f, -796.7593f) - Vector(71.1531f, 179.5117f, -812.0607f)};
			*uParam3 = 26.087f - 222.8314f + 360f;
			return true;
		}
		break;

	case 19:
		switch (iParam0) {
		case 0:
			*uParam2 = {Vector(72.6876f, 173.987f, -805.173f) - Vector(71.1531f, 179.5117f, -812.0607f)};
			*uParam3 = 13f - 222.8314f + 360f;
			return true;
		}
		break;

	case 25:
		switch (iParam0) {
		case 0:
		case 1:
			*uParam2 = {Vector(72.8447f, 172.4196f, -803.1823f) - Vector(71.1531f, 179.5117f, -812.0607f)};
			*uParam3 = -28.7112f - 222.8314f + 360f;
			return true;
		}
		break;

	case 26:
		switch (iParam0) {
		case 1:
			*uParam2 = {27.9648f, 8.3766f, 0.7f};
			*uParam3 = 319f;
			return true;
		}
		break;

	case 32:
		switch (iParam0) {
		case 1:
			*uParam2 = {Vector(0.6f, -6.5f, 10.3f) + Vector(0.1f, 0f, 0f)};
			*uParam3 = 78f;
			return true;
		}
		break;

	case 27:
		switch (iParam0) {
		case 1:
			*uParam2 = {-0.3142f, -10.9926f, 0.0747f};
			*uParam3 = 304.1026f;
			return true;
		}
		break;

	case 41:
		switch (iParam0) {
		case 1:
			*uParam2 = {10.3f, -6.5f, 4.6f};
			*uParam3 = 180f;
			return true;
		}
		break;

	case 33:
		switch (iParam0) {
		case 1:
			if (func_52(1, 32, uParam2, uParam3)) {
				*uParam2 = {*uParam2 + Vector(0f, 0f, 0f)};
				*uParam3 += 0f;
				return true;
			}
			break;
		}
		break;

	case 38:
		switch (iParam0) {
		case 1:
			*uParam2 = {8.505f, -10.9717f, 4.6019f};
			*uParam3 = 228f;
			return true;
		}
		break;

	case 31:
		switch (iParam0) {
		case 1:
			*uParam2 = {12.7165f, 4.7109f, 4.6f + 1f};
			*uParam3 = 310.6696f;
			return true;
		}
		break;

	case 34:
		switch (iParam0) {
		case 1:
			*uParam2 = {9.0529f, -8.9175f, 1.6907f};
			*uParam3 = 102.156f;
			return true;
		}
		break;

	case 35:
		switch (iParam0) {
		case 1:
			*uParam2 = {8.4799f, -7.5315f, 0.682f};
			*uParam3 = 264f;
			return true;
		}
		break;

	case 37:
		switch (iParam0) {
		case 1:
			*uParam2 = {9.352f, -3.356f, 5.7338f};
			*uParam3 = 338f;
			return true;
		}
		break;

	case 39:
		switch (iParam0) {
		case 1:
			*uParam2 = {8.3003f, -10.3127f, 4.5874f};
			*uParam3 = 262.789f;
			return true;
		}
		break;

	case 40:
		switch (iParam0) {
		case 1:
			*uParam2 = {10.76f, -5.95f, 4.59f};
			*uParam3 = 177.6766f;
			return true;
		}
		break;

	case 36:
		switch (iParam0) {
		case 1:
			*uParam2 = {9.6691f, -7.6405f, 0.6817f};
			*uParam3 = 159.156f;
			return true;
		}
		break;

	case 28:
		switch (iParam0) {
		case 1:
			*uParam2 = {1.228f, 4.044f, 0.7665f};
			*uParam3 = 165f;
			return true;
		}
		break;

	case 42:
		switch (iParam0) {
		case 1:
			*uParam2 = {10.2365f, -7.6073f, 6.2761f};
			*uParam3 = 157.0716f;
			return true;
		}
		break;

	case 43:
		switch (iParam0) {
		case 1:
			*uParam2 = {8.161f, -7.562f, 2.17f};
			*uParam3 = 78f;
			return true;
		}
		break;

	case 29:
	case 30:
	case 44:
		switch (iParam0) {
		case 1:
			*uParam2 = {10.7668f, -7.8757f, 5.5559f};
			*uParam3 = 144.6939f;
			return true;
		}
		break;

	case 45:
		switch (iParam0) {
		case 1:
			*uParam2 = {10.6257f, -9.4927f, 5.5876f};
			*uParam3 = 257.4583f;
			return true;
		}
		break;

	case 46: return func_52(iParam0, 26, uParam2, uParam3);

	case 47:
		switch (iParam0) {
		case 2:
		case 3:
			*uParam2 = {8.4451f, 3.1568f, 1.47f};
			*uParam3 = 159f;
			return true;
		}
		break;

	case 48:
	case 68:
		switch (iParam0) {
		case 2:
			*uParam2 = {9.0477f, -7.9397f, 0.6817f};
			*uParam3 = 88.5686f;
			return true;
		}
		break;

	case 49:
		switch (iParam0) {
		case 2:
			*uParam2 = {0f, 0f, 0f};
			*uParam3 = 0f;
			return false;
		}
		break;

	case 50:
	case 69:
		switch (iParam0) {
		case 2:
			*uParam2 = {21.7f, 9f, 1.7029f};
			*uParam3 = 0f;
			return true;
		}
		break;

	case 51:
		switch (iParam0) {
		case 2:
			*uParam2 = {1.3278f, 1.534f, 0f};
			*uParam3 = 159.72f;
			return true;
		}
		break;

	case 52:
	case 67:
		switch (iParam0) {
		case 2:
			*uParam2 = {-3.0265f, 1.7627f, 0.1273f};
			*uParam3 = 338.5f;
			return true;
		}
		break;

	case 53:
		switch (iParam0) {
		case 2:
			*uParam2 = {15.2374f, 8.723f, 1.4495f};
			*uParam3 = 205.677f;
			return true;
		}
		break;

	case 54:
	case 70:
		switch (iParam0) {
		case 2:
			*uParam2 = {28.7f, 8.8241f, 0.6f};
			*uParam3 = 39f;
			return true;
		}
		break;

	case 55:
	case 71:
		switch (iParam0) {
		case 2:
			*uParam2 = {Vector(1.1936f, -9.0107f, 9.0567f) + Vector(0.03f - 0.02f, 0f, 0f)};
			*uParam3 = 94.2086f;
			return true;
		}
		break;

	case 64:
		switch (iParam0) {
		case 2:
			*uParam2 = {Vector(5.2891f, 2.0403f, -2.8213f) + Vector(0.03f - 0.05f, 0f, 0f)};
			*uParam3 = 336f;
			return true;
		}
		break;

	case 56:
		switch (iParam0) {
		case 2:
		case 0:
			*uParam2 = {5.5782f, 5.7755f, 3.84f};
			*uParam3 = 311.4f;
			return true;
		}
		break;

	case 57:
		switch (iParam0) {
		case 2:
		case 0:
			*uParam2 = {5.5782f, 5.7755f, 3.8418f};
			*uParam3 = 306.6f;
			return true;
		}
		break;

	case 58:
		switch (iParam0) {
		case 2:
		case 1:
			*uParam2 = {5.8092f, 5.7965f, 3.85f};
			*uParam3 = 337.4f;
			return true;
		}
		break;

	case 59:
	case 72:
		switch (iParam0) {
		case 2:
			*uParam2 = {13.3221f, 0.0684f, 0.6817f};
			*uParam3 = 277.317f;
			return true;
		}
		break;

	case 60:
		if (func_52(iParam0, 59, uParam2, uParam3)) {
			*uParam2 = {*uParam2 + Vector(0f, gameplay::get_random_float_in_range(-1f, 1f),
										  gameplay::get_random_float_in_range(-1f, 1f))};
			*uParam3 += gameplay::get_random_float_in_range(-10f, 10f);
			return true;
		}
		break;

	case 61:
	case 62:
	case 63:
		switch (iParam0) {
		case 2:
			*uParam2 = {-2.235f, 1.725f, 4.5877f};
			*uParam3 = 172.714f;
			return true;
		}
		break;

	case 65:
		switch (iParam0) {
		case 2:
			*uParam2 = {Vector(75.7407f, 181.264f, -814.246f) - Vector(71.1531f, 179.5117f, -812.0607f)};
			*uParam3 = -158f - 222.8314f + 360f;
			return true;
		}
		break;

	case 66:
		switch (iParam0) {
		case 2:
			*uParam2 = {Vector(76.7233f, 181.114f, -812.896f) - Vector(71.1531f, 179.5117f, -812.0607f)};
			*uParam3 = -164f - 222.8314f + 360f;
			return true;
		}
		break;

	case 73:
		switch (iParam0) {
		case 2:
			*uParam2 = {7.394f, 5.368f, 1.451f};
			*uParam3 = 235.0656f;
			return true;
		}
		break;

	case 74:
		switch (iParam0) {
		case 2:
		case 1:
			*uParam2 = {1.0704f, -1.4624f, 0.999f};
			*uParam3 = 157.44f;
			return true;
		}
		break;

	case 75:
	case 84:
		switch (iParam0) {
		case 3:
			*uParam2 = {14.8186f, 6.8253f, 0.5f};
			*uParam3 = 87.3368f;
			return true;
		}
		break;

	case 76:
	case 78:
	case 85:
		switch (iParam0) {
		case 3:
			*uParam2 = {13.6486f, 6.2253f, 0.45f};
			*uParam3 = 262.32f;
			return true;
		}
		break;

	case 77:
		if (func_52(iParam0, 47, uParam2, uParam3)) {
			*uParam2 = {*uParam2 + Vector(0f, 0f, 0f)};
			*uParam3 += 0f;
			return true;
		}
		break;

	case 79:
	case 86:
		switch (iParam0) {
		case 3:
			*uParam2 = {16.319f, -1.375f, 0.6817f};
			*uParam3 = 334.126f;
			return true;
		}
		break;

	case 80:
		switch (iParam0) {
		case 3:
			*uParam2 = {-0.39f, 3.27f, 0f};
			*uParam3 = 154.126f;
			return true;
		}
		break;

	case 81:
		switch (iParam0) {
		case 3:
			*uParam2 = {15.0213f, 6.9622f, 1.39f};
			*uParam3 = 142.889f;
			return true;
		}
		break;

	case 82:
	case 83:
		switch (iParam0) {
		case 3:
			*uParam2 = {15.128f, 6.842f, 0.4524f};
			*uParam3 = 54f;
			return true;
		}
		break;

	case 87:
		switch (iParam0) {
		case 4:
			*uParam2 = {-10.9019f, -23.8349f, -2.1f};
			*uParam3 = 339f;
			return true;
		}
		break;

	case 88:
		switch (iParam0) {
		case 4:
			*uParam2 = {-10.9937f, -24.9005f, -2.18f};
			*uParam3 = 314.2132f;
			return true;
		}
		break;

	case 89:
		switch (iParam0) {
		case 4:
			*uParam2 = {31.7401f, -1.0943f, 0.6822f};
			*uParam3 = 147f;
			return true;
		}
		break;

	case 90:
		switch (iParam0) {
		case 4:
			*uParam2 = {-27.1728f, -3.75f, -1.626f};
			*uParam3 = 147f + 90f;
			return true;
		}
		break;

	case 91:
		switch (iParam0) {
		case 4:
			*uParam2 = {14.7722f, -10.9336f, -0.537f};
			*uParam3 = 110.8505f;
			return true;
		}
		break;

	case 92:
		switch (iParam0) {
		case 4:
			*uParam2 = {-17.2536f, 2.451f, -0.6f};
			*uParam3 = 0f;
			return true;
		}
		break;

	case 93:
		switch (iParam0) {
		case 4:
			*uParam2 = {23.9716f, -20.3533f, -3.18f};
			*uParam3 = 324f;
			return true;
		}
		break;

	case 94:
		switch (iParam0) {
		case 5:
			*uParam2 = {3.1416f, -2.0799f, -0.0145f};
			*uParam3 = 33f;
			return true;
		}
		break;

	case 95:
		switch (iParam0) {
		case 5:
			*uParam2 = {3.2746f, -4.1995f, -0.0144f};
			*uParam3 = 69f;
			return true;
		}
		break;

	case 96:
	case 98:
		switch (iParam0) {
		case 5:
			*uParam2 = {2.983f, -4.094f, 0.4629f};
			*uParam3 = 33f;
			return true;
		}
		break;

	case 97:
		switch (iParam0) {
		case 5:
			*uParam2 = {5.5235f, 2.9133f, 0.7288f};
			*uParam3 = 71f;
			return true;
		}
		break;

	case 99:
		switch (iParam0) {
		case 6:
			*uParam2 = {Vector(30.7131f, -1454.676f, -42.2059f) - Vector(30.116f, -1435.997f, -14.3064f)};
			*uParam3 = 84.7009f - 188.5817f;
			return true;

		case 7:
			*uParam2 = {Vector(30.6803f, -1455.848f, -40.7478f) - Vector(30.116f, -1435.997f, -14.3064f)};
			*uParam3 = 90.6417f - 188.5817f;
			return true;
		}
		break;

	case 100:
		switch (iParam0) {
		case 10:
			*uParam2 = {2.0126f, 0.3422f, -0.0086f};
			*uParam3 = 354f;
			return true;
		}
		break;

	case 101:
		switch (iParam0) {
		case 10:
			*uParam2 = {1.2931f, 1.4476f, 1.0127f};
			*uParam3 = 61.7525f;
			return true;
		}
		break;

	case 102:
	case 103:
		switch (iParam0) {
		case 10:
			*uParam2 = {0.0158f, 1.4182f, 0.9913f};
			*uParam3 = 119.008f;
			return true;
		}
		break;

	case 104:
		switch (iParam0) {
		case 10:
			*uParam2 = {-3.467f, 0.074f, 0f};
			*uParam3 = 30f;
			return true;
		}
		break;

	case 105:
		switch (iParam0) {
		case 10:
			*uParam2 = {-2.1014f, -5.4089f, -0.013f};
			*uParam3 = 123.753f;
			return true;
		}
		break;

	case 106:
		switch (iParam0) {
		case 10:
			*uParam2 = {-2.802f, -6.3295f, -0.01f};
			*uParam3 = 42.757f;
			return true;
		}
		break;

	case 107:
		switch (iParam0) {
		case 8:
			*uParam2 = {-2.156f, -4.9564f, 1.4886f};
			*uParam3 = 136.309f;
			return true;
		}
		break;

	case 108:
		switch (iParam0) {
		case 8:
			*uParam2 = {7.2656f, 3.022f, -0.9061f};
			*uParam3 = 92.8891f;
			return true;
		}
		break;

	case 109:
		switch (iParam0) {
		case 8:
			*uParam2 = {0.5066f, 1.6992f, 0.0168f};
			*uParam3 = 115.77f;
			return true;
		}
		break;

	case 110:
	case 111:
		switch (iParam0) {
		case 8:
			*uParam2 = {-0.2121f, -6.2791f, -0.0089f};
			*uParam3 = 114.3391f;
			return true;
		}
		break;

	case 116:
		switch (iParam0) {
		case 9:
		case 11:
			*uParam2 = {8.2458f, -0.7136f, -0.2503f};
			*uParam3 = 252.2687f;
			return true;
		}
		break;

	case 117:
		switch (iParam0) {
		case 9:
		case 11:
			*uParam2 = {2.334f, 1.6889f, 0.586f};
			*uParam3 = 109f;
			return true;
		}
		break;

	case 112:
		switch (iParam0) {
		case 9:
			*uParam2 = {-0.6331f, 1.2093f, -0.0086f};
			*uParam3 = 137.1861f;
			return true;
		}
		break;

	case 113:
		switch (iParam0) {
		case 9:
			*uParam2 = {-3.887f, -0.166f, 0f};
			*uParam3 = 30f;
			return true;
		}
		break;

	case 114:
		switch (iParam0) {
		case 9:
			*uParam2 = {3.5179f, 9.1355f, -1f};
			*uParam3 = 141.79f;
			return true;
		}
		break;

	case 115:
		switch (iParam0) {
		case 9:
			*uParam2 = {Vector(0.15f, -1.9326f, -6.013f) + Vector(1f, 0f, 0f)};
			*uParam3 = 121.6591f;
			return true;
		}
		break;

	case 118:
		switch (iParam0) {
		case 10:
			*uParam2 = {10.2823f, 2.2595f, -1.0742f};
			*uParam3 = 170.2796f - 180f;
			return true;
		}
		break;

	case 119:
		switch (iParam0) {
		case 10:
			*uParam2 = {1.077f, -5.1446f, 0.9904f};
			*uParam3 = 107.1399f;
			return true;
		}
		break;

	case 120:
		switch (iParam0) {
		case 10:
			*uParam2 = {-12.903f, -6.623f, -0.0406f};
			*uParam3 = 63.48f;
			return true;
		}
		break;

	case 121:
		switch (iParam0) {
		case 10:
			*uParam2 = {10.5514f, 5.393f, -0.0998f};
			*uParam3 = 327.483f;
			return true;
		}
		break;

	case 122:
		switch (iParam0) {
		case 11:
			*uParam2 = {0.9794f, -0.3043f, 0f};
			*uParam3 = 179.7612f;
			return true;
		}
		break;

	case 123:
		switch (iParam0) {
		case 11:
			*uParam2 = {11.9759f, 1f, -1.0728f};
			*uParam3 = 238.9422f;
			return true;
		}
		break;

	case 124:
		switch (iParam0) {
		case 11:
		case 8:
			*uParam2 = {-0.576f, 1.671f, 0.601f};
			*uParam3 = 296f;
			return true;
		}
		break;

	case 125:
		switch (iParam0) {
		case 12:
			*uParam2 = {-0.6532f, 0.9556f, -0.0087f};
			*uParam3 = 121.0556f;
			return true;
		}
		break;

	case 126:
		switch (iParam0) {
		case 13:
			*uParam2 = {-0.18f, -4.173f, 0.9981f};
			*uParam3 = 216.61f;
			return true;
		}
		break;

	case 127:
		switch (iParam0) {
		case 13:
			*uParam2 = {6.5937f, 0.3521f, 1f};
			*uParam3 = 119.4f;
			return true;
		}
		break;

	case 128:
		switch (iParam0) {
		case 13:
			if (Global_101700.f_17492[2] == 299) {
				*uParam2 = {Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f)};
				*uParam3 = 34.661f - 90.6729f;
				return true;
			}
			else if (Global_101700.f_17492[2] == 300 || Global_101700.f_17492[2] == 301 ||
					 Global_101700.f_17492[2] == 302 || Global_101700.f_17492[2] == 303) {
				*uParam2 = {Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f)};
				*uParam3 = 32f - 90.6729f;
				return true;
			}
			if (func_34()) {
				*uParam2 = {Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f)};
				*uParam3 = 34.661f - 90.6729f;
				return true;
			}
			else {
				*uParam2 = {Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f)};
				*uParam3 = 32f - 90.6729f;
				return true;
			}
			break;
		}
		break;

	case 129:
		switch (iParam0) {
		case 13:
			*uParam2 = {Vector(10.6327f, -1519.561f, -1156.422f) - Vector(9.6346f, -1517.601f, -1152.571f)};
			*uParam3 = 102f - 90.6729f;
			return true;
		}
		break;

	case 130:
		switch (iParam0) {
		case 13:
			*uParam2 = {-2.8352f, 0.0552f, 0f};
			*uParam3 = 334.44f;
			return true;
		}
		break;

	case 131:
		switch (iParam0) {
		case 13:
			if (func_52(iParam0, 130, uParam2, uParam3)) {
				*uParam2 = {*uParam2 + Vector(0f, gameplay::get_random_float_in_range(-1f, 1f),
											  gameplay::get_random_float_in_range(-1f, 1f))};
				*uParam3 += gameplay::get_random_float_in_range(-10f, 10f);
				return true;
			}
			break;
		}
		break;

	case 132:
		switch (iParam0) {
		case 13:
			*uParam2 = {-7.213f, -1.4536f, 0.9981f};
			*uParam3 = 42.6f;
			return true;
		}
		break;

	case 133:
		switch (iParam0) {
		case 13:
			*uParam2 = {Vector(9.6327f + 1f, -1518.736f, -1148.466f) - Vector(9.6346f, -1517.601f, -1152.571f)};
			*uParam3 = gameplay::get_random_float_in_range(0f, 360f);
			return true;
		}
		break;

	case 134:
		switch (iParam0) {
		case 13:
			*uParam2 = {5.24f, 6.217f, 0.998f};
			*uParam3 = 315.72f;
			return true;
		}
		break;

	case 135:
		switch (iParam0) {
		case 13:
			*uParam2 = {6.6447f, 0.7635f, 1.0507f};
			*uParam3 = 296.683f;
			return true;
		}
		break;

	case 136:
		switch (iParam0) {
		case 13:
			*uParam2 = {3.968f, -1.04f, 0f};
			*uParam3 = 214.92f;
			return true;

		case 14:
			*uParam2 = {4.617f, -1.1314f, 0f};
			*uParam3 = 39.4085f;
			return true;
		}
		break;

	case 137:
	case 138:
		*uParam2 = {0f, 0f, 0f};
		*uParam3 = 0f;
		return false;

	case 140:
	case 141:
		*uParam2 = {0f, 0f, 0f};
		*uParam3 = 0f;
		return false;

	default:
		*uParam2 = {gameplay::get_random_float_in_range(-10f, 10f), gameplay::get_random_float_in_range(-10f, 10f), 0f};
		*uParam3 = gameplay::get_random_float_in_range(0f, 360f);
		return false;
	}
	*uParam2 = {gameplay::get_random_float_in_range(-10f, 10f), gameplay::get_random_float_in_range(-10f, 10f), 0f};
	*uParam3 = gameplay::get_random_float_in_range(0f, 360f);
	return false;
}

// Position - 0x6E96
bool func_53(int iParam0, var *uParam1, float *fParam2) {
	switch (iParam0) {
	case 11:
		*uParam1 = {115.1569f, -1286.684f, 28.2613f};
		*fParam2 = 111f;
		return true;

	case 8:
		*uParam1 = {-90.0089f, -1324.195f, 28.3203f};
		*fParam2 = 194.1887f;
		return true;

	case 9: return func_53(8, uParam1, fParam2);

	case 10: return func_53(8, uParam1, fParam2);

	case 13:
		*uParam1 = {-807.2979f, -48.4004f, 36.8173f};
		*fParam2 = 201.6328f;
		return true;

	case 14:
		*uParam1 = {1432.34f, -1887.383f, 70.5768f};
		*fParam2 = 350.0509f;
		return true;

	case 15:
		*uParam1 = {1666.204f, 1967.25f, 143.3213f};
		*fParam2 = 0.7896f;
		return true;

	case 12:
		*uParam1 = {-1440.22f, -127.02f, 50f};
		*fParam2 = 42f;
		return true;

	case 16:
		*uParam1 = {135.055f, -1759.64f, 27.8957f};
		*fParam2 = -129f;
		return true;

	case 17:
		*uParam1 = {687.6992f, -1744.03f, 28.3624f};
		*fParam2 = 267.1409f;
		return true;

	case 18:
		*uParam1 = {56.5117f, -744.6122f, 43.1356f};
		*fParam2 = 340.0526f;
		return true;

	case 19:
		*uParam1 = {506.485f, -1884.967f, 24.764f};
		*fParam2 = 22.9566f;
		return true;

	case 20:
		*uParam1 = {1555.958f, 953.6136f, 77.2063f};
		*fParam2 = 152.8118f;
		return true;

	case 21:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 22:
		*uParam1 = {220.72f, -64.4177f, 68.2922f};
		*fParam2 = 250.4535f - 360f;
		return true;

	case 74:
		*uParam1 = {2048.07f, 3840.84f, 34.2238f};
		*fParam2 = 119.603f;
		return true;

	case 23:
		*uParam1 = {-464.22f, -1592.98f, 38.73f};
		*fParam2 = 168f;
		return true;

	case 24:
		*uParam1 = {744.79f + 0.0186f, -465.86f - 0.0114f, 36.6399f};
		*fParam2 = 51.7279f;
		return true;

	case 67:
		*uParam1 = {-9f, 508.1f, 173.6278f};
		*fParam2 = 151.2504f;
		return true;

	case 25:
		*uParam1 = {72.2278f, -1464.68f, 28.2915f};
		*fParam2 = 156.8827f;
		return true;

	case 27:
		*uParam1 = {763f, -906f, 24.2312f};
		*fParam2 = 7.2736f;
		return true;

	case 26:
		*uParam1 = {257.9167f, -1120.786f, 28.3684f};
		*fParam2 = 97.2736f;
		return true;

	case 28:
		*uParam1 = {422.5858f, -978.6332f, 69.7073f};
		*fParam2 = 4f;
		return true;

	case 29:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 30:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 31:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 32:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 33:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 34:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 35:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 36:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 37:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 58:
		*uParam1 = {294.8521f, 882.9366f, 197.8527f};
		*fParam2 = 162.693f;
		return true;

	case 59:
		*uParam1 = {-1771.802f, 794.4316f, 138.4211f};
		*fParam2 = 128.9946f;
		return true;

	case 60:
		*uParam1 = {1495.595f, -1848.821f, 70.2075f};
		*fParam2 = 32.2721f;
		return true;

	case 38:
		*uParam1 = {2897.554f, 4032.241f, 50.1419f};
		*fParam2 = 192.8091f;
		return true;

	case 39:
		*uParam1 = {1973.355f, 3818.204f, 32.005f};
		*fParam2 = 32f;
		return true;

	case 40:
		*uParam1 = {1973.355f, 3818.204f, 32.005f};
		*fParam2 = 32f;
		return true;

	case 41:
		*uParam1 = {1397f, 3725.8f, 33.0673f};
		*fParam2 = -3.7534f;
		return true;

	case 42:
		*uParam1 = {Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f)};
		*fParam2 = 90f;
		return true;

	case 43:
		*uParam1 = {709.0244f, -2916.479f, 5.0589f};
		*fParam2 = 355.326f;
		return true;

	case 44:
		*uParam1 = {643.5248f, -2917.325f, 5.1337f};
		*fParam2 = 334.1068f;
		return true;

	case 45:
		*uParam1 = {595.2742f, -2819.183f, 5.0559f};
		*fParam2 = 46.8853f;
		return true;

	case 46:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 47:
		*uParam1 = {314.4171f, 965.207f, 208.4024f};
		*fParam2 = 165.9421f;
		return true;

	case 49:
		*uParam1 = {3321.537f, 4975.455f, 25.9097f};
		*fParam2 = 221.228f;
		return true;

	case 48:
		*uParam1 = {-111.1318f, 6316.479f, 30.4904f};
		*fParam2 = 42f + 180f;
		return true;

	case 50:
		*uParam1 = {-731.3261f, 106.68f, 54.7169f};
		*fParam2 = 98.9764f;
		return true;

	case 51:
		*uParam1 = {-1257.5f, -526.9999f, 30.2361f};
		*fParam2 = 220.9554f;
		return true;

	case 52:
		*uParam1 = {736.9869f, -2050.678f, 28.2718f};
		*fParam2 = 83.9922f;
		return true;

	case 66:
		*uParam1 = {262.5499f, -2540.15f, 4.8433f};
		*fParam2 = -64.1366f;
		return true;

	case 53:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 55:
		*uParam1 = {-315.7789f, 6201.355f, 30.4322f};
		*fParam2 = 127.7547f;
		return true;

	case 56:
		*uParam1 = {118.0988f, -1264.916f, 32.3637f};
		*fParam2 = -63f;
		return true;

	case 57:
		*uParam1 = {37.5988f, -1351.52f, 28.2954f};
		*fParam2 = 90.0339f;
		return true;

	case 61:
		*uParam1 = {-558.2693f, 261.1167f, 82.07f};
		*fParam2 = 84.6231f;
		return true;

	case 62:
		*uParam1 = {-196.9999f, 507.9999f, 132.477f};
		*fParam2 = 99.6049f;
		return true;

	case 63:
		*uParam1 = {1312.01f, -1645.87f, 51.2f};
		*fParam2 = 120f;
		return true;

	case 68:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 69:
		*uParam1 = {-818.7374f, 6.4824f, 41.2432f};
		*fParam2 = 211.8223f;
		return true;

	case 64:
		*uParam1 = {2091.258f, 4714.852f, 40.1936f};
		*fParam2 = 136.0867f;
		return true;

	case 54:
		*uParam1 = {1762.59f, 3247.212f, 40.735f};
		*fParam2 = 27.0648f;
		return true;

	case 65:
		*uParam1 = {1764.013f, 3252.902f, 40.735f};
		*fParam2 = 27.0648f;
		return true;

	case 70:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 71:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 72:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	case 73:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return true;

	default: break;
	}
	return false;
}

// Position - 0x7805
char *func_54(int iParam0) {
	switch (iParam0) {
	case 2014101067: return "v_chopshop";

	case 551019620: return "v_franklins";

	case 223682799: return "v_franklinshouse";

	case 2081281344: return "v_methlab";

	case -1021412233: return "v_michael";

	case 1314234446: return "v_strip3";

	case 1681413451: return "v_trailer";

	case 1724779208: return "v_Trevors";
	}
	return "";
}

// Position - 0x788D
void func_55() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_73) {
		entity::set_vehicle_as_no_longer_needed(&iLocal_73[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_149) {
		entity::set_vehicle_as_no_longer_needed(&iLocal_149[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_177) {
		entity::set_vehicle_as_no_longer_needed(&iLocal_177[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_205) {
		entity::set_vehicle_as_no_longer_needed(&iLocal_205[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_68) {
		streaming::set_model_as_no_longer_needed(iLocal_68[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_86) {
		streaming::set_model_as_no_longer_needed(iLocal_86[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_154) {
		streaming::set_model_as_no_longer_needed(iLocal_154[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_182) {
		streaming::set_model_as_no_longer_needed(iLocal_182[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_210) {
		streaming::set_model_as_no_longer_needed(iLocal_210[iVar0]);
		iVar0++;
	}
	streaming::set_vehicle_population_budget(3);
	gameplay::set_game_paused(0);
	script::terminate_this_thread();
}
