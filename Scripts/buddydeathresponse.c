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
int iLocal_18 = 0;
int iLocal_19 = 0;
int iLocal_20 = 0;
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
	if (player::has_force_cleanup_occurred(2) || unk2::_is_interior_rendering_disabled()) {
		script::terminate_this_thread();
	}
	func_1();
}

// Position - 0x4F
void func_1() {
	vector3 vVar0;
	int iVar3;

	while (!func_8(&iLocal_20)) {
		system::wait(0);
	}
	if (!ped::is_ped_injured(iLocal_20)) {
		if (!Global_88319) {
			entity::set_entity_as_mission_entity(iLocal_20, 1, 1);
			if (ai::get_script_task_status(iLocal_20, 1435919172) != 7) {
				ai::clear_ped_tasks(iLocal_20);
			}
			vVar0 = {entity::get_entity_coords(player::player_ped_id(), 0)};
			ped::set_blocking_of_non_temporary_events(iLocal_20, 1);
			ai::open_sequence_task(&iVar3);
			if (!ped::is_ped_in_any_vehicle(iLocal_20, 0)) {
				if (!ped::is_ped_in_combat(iLocal_20, 0) && !ped::is_ped_in_any_vehicle(iLocal_20, 0)) {
					ai::task_turn_ped_to_face_coord(0, vVar0, 6000);
				}
			}
			ai::task_look_at_coord(0, vVar0, 6000, 0, 2);
			ai::close_sequence_task(iVar3);
			ai::task_perform_sequence(iLocal_20, iVar3);
		}
		func_2(iLocal_20);
	}
	while (!cam::is_screen_faded_out()) {
		system::wait(0);
	}
	if (entity::does_entity_exist(iLocal_20)) {
		if (!ped::is_ped_injured(iLocal_20)) {
			ped::set_ped_keep_task(iLocal_20, 1);
		}
		entity::set_ped_as_no_longer_needed(&iLocal_20);
	}
	Global_88319 = 0;
	script::terminate_this_thread();
}

// Position - 0x13C
void func_2(int iParam0) {
	int iVar0;

	iVar0 = gameplay::get_game_timer() + 1000;
	while (gameplay::get_game_timer() < iVar0 && !cam::is_screen_faded_out()) {
		system::wait(0);
	}
	if (!ped::is_ped_injured(iParam0)) {
		if (iLocal_19 == 1) {
			switch (func_5(player::player_ped_id())) {
			case 2: func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "FRANKLIN_NORMAL", 3); break;

			case 0: func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "FRANKLIN_NORMAL", 3); break;
			}
		}
		else if (iLocal_19 == 2) {
			switch (func_5(player::player_ped_id())) {
			case 1: func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "TREVOR_NORMAL", 3); break;

			case 0: func_3(iParam0, "BUDDY_SEES_MICHAEL_DEATH", "TREVOR_NORMAL", 3); break;
			}
		}
		else if (iLocal_19 == 0) {
			switch (func_5(player::player_ped_id())) {
			case 2: func_3(iParam0, "BUDDY_SEES_TREVOR_DEATH", "MICHAEL_NORMAL", 3); break;

			case 1: func_3(iParam0, "BUDDY_SEES_FRANKLIN_DEATH", "MICHAEL_NORMAL", 3); break;
			}
		}
	}
}

// Position - 0x234
void func_3(int iParam0, char *sParam1, char *sParam2, int iParam3) {
	audio::_play_ambient_speech_with_voice(iParam0, sParam1, sParam2, func_4(iParam3), 0);
}

// Position - 0x24D
int func_4(int iParam0) {
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

// Position - 0x43C
int func_5(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_6(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x479
int func_6(int iParam0) {
	if (func_7(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x4A3
bool func_7(int iParam0) { return iParam0 < 3; }

// Position - 0x4AF
int func_8(var *uParam0) {
	int iVar0;

	iLocal_18 = 0;
	while (iLocal_18 < 9) {
		if (entity::does_entity_exist(Global_89193[iLocal_18]) && !ped::is_ped_injured(Global_89193[iLocal_18])) {
			if (Global_89193[iLocal_18] != player::player_ped_id()) {
				if (!entity::is_entity_a_mission_entity(Global_89193[iLocal_18])) {
					if (ped::is_ped_in_any_vehicle(Global_89193[iLocal_18], 0) ||
						!entity::is_entity_attached(Global_89193[iLocal_18])) {
						if (gameplay::get_distance_between_coords(entity::get_entity_coords(Global_89193[iLocal_18], 1),
																  entity::get_entity_coords(player::player_ped_id(), 0),
																  1) < 10f) {
							iLocal_19 = func_5(Global_89193[iLocal_18]);
							if (iLocal_19 == 0 || iLocal_19 == 2 || iLocal_19 == 1) {
								if (iLocal_19 != func_9()) {
									if (entity::has_entity_clear_los_to_entity(Global_89193[iLocal_18],
																			   player::player_ped_id(), 17)) {
										if (ped::is_ped_in_any_vehicle(Global_89193[iLocal_18], 0)) {
											iVar0 = ped::get_vehicle_ped_is_in(Global_89193[iLocal_18], 0);
										}
										if (entity::does_entity_exist(iVar0) &&
												vehicle::is_vehicle_driveable(iVar0, 0) ||
											!entity::does_entity_exist(iVar0)) {
											*uParam0 = Global_89193[iLocal_18];
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_18++;
	}
	if (cam::is_screen_faded_out()) {
		return 1;
	}
	return 0;
}

// Position - 0x5F4
int func_9() {
	func_10();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x60D
void func_10() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_6(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_5(player::player_ped_id());
			if (func_7(iVar0) && (!func_11(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_7(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x70A
bool func_11(int iParam0) { return Global_35781 == iParam0; }
