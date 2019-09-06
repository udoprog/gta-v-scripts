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
int iLocal_43 = 0;
int iLocal_44 = 0;
vector3 vLocal_45 = {0f, 0f, 0f};
vector3 vLocal_48 = {0f, 0f, 0f};
int iLocal_51 = 0;
int iLocal_52 = 0;
int iLocal_53 = 0;
int iLocal_54 = 0;
int iLocal_55 = 0;
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
	system::wait(0);
	vLocal_45 = {ScriptParam_0.f_1[0 /*3*/]};
	if (player::has_force_cleanup_occurred(11)) {
		func_22();
	}
	while (true) {
		system::wait(0);
		if (brain::is_world_point_within_brain_activation_range()) {
			if (func_3(3)) {
				switch (iLocal_43) {
				case 0:
					if (iLocal_44 == 1) {
						iLocal_43 = 1;
					}
					else {
						func_2();
					}
					break;

				case 1:
					if (iLocal_51 == 0) {
						func_1();
					}
					break;
				}
			}
			else {
				func_22();
			}
		}
		else {
			func_22();
		}
	}
}

// Position - 0xEC
void func_1() {
	if (system::timerb() > 7000) {
		if (!entity::is_entity_dead(iLocal_52, 0)) {
			if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_52, 10f, 10f, 10f, 0, 1, 0) &&
				iLocal_54 == 0) {
				system::settimerb(0);
				vLocal_48 = {entity::get_entity_coords(player::player_ped_id(), 1)};
				ai::open_sequence_task(&iLocal_55);
				ai::task_turn_ped_to_face_coord(0, vLocal_48, 0);
				ai::task_play_anim(0, "amb@PREACHER", "PREACH", 8f, -8f, -1, 1, 0, 0, 0, 0);
				ai::close_sequence_task(iLocal_55);
				if (!entity::is_entity_dead(iLocal_52, 0)) {
					ai::task_perform_sequence(iLocal_52, iLocal_55);
				}
				ai::clear_sequence_task(&iLocal_55);
				iLocal_54 = 1;
			}
			if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_52, 3f, 3f, 3f, 0, 1, 0) &&
				iLocal_53 == 0) {
				vLocal_48 = {entity::get_entity_coords(player::player_ped_id(), 1)};
				system::settimerb(0);
				ai::open_sequence_task(&iLocal_55);
				ai::task_turn_ped_to_face_coord(0, vLocal_48, 0);
				ai::task_play_anim(0, "amb@PREACHER", "PREACH", 8f, -8f, -1, 1, 0, 0, 0, 0);
				ai::close_sequence_task(iLocal_55);
				ai::task_perform_sequence(iLocal_52, iLocal_55);
			}
			ai::clear_sequence_task(&iLocal_55);
			iLocal_53 = 1;
		}
	}
}

// Position - 0x1FE
void func_2() {
	streaming::request_model(joaat("s_m_m_strpreach_01"));
	streaming::request_anim_dict("amb@PREACHER");
	while (!streaming::has_model_loaded(joaat("s_m_m_strpreach_01")) ||
		   !streaming::has_anim_dict_loaded("amb@PREACHER")) {
		system::wait(0);
	}
	vLocal_48.z = vLocal_45.z - 1f;
	iLocal_52 = ped::create_ped(19, joaat("s_m_m_strpreach_01"), vLocal_45.x, vLocal_45.y, vLocal_48.z, 0f, 1, 1);
	if (!entity::is_entity_dead(iLocal_52, 0)) {
		ai::open_sequence_task(&iLocal_55);
		ai::task_turn_ped_to_face_coord(0, vLocal_48, 0);
		ai::task_play_anim(0, "amb@PREACHER", "PREACH", 8f, -8f, -1, 1, 0, 0, 0, 0);
		ai::close_sequence_task(iLocal_55);
		ai::task_perform_sequence(iLocal_52, iLocal_55);
		ai::clear_sequence_task(&iLocal_55);
	}
	iLocal_44 = 1;
}

// Position - 0x2A7
bool func_3(int iParam0) {
	switch (iParam0) {
	case 0: return true;

	case 1:
		if (func_21(6) || func_21(7)) {
			return true;
		}
		else {
			return func_3(3);
		}
		break;

	case 2: return true;

	case 3:
		if (func_19(5)) {
			if (func_4(4)) {
				return true;
			}
		}
		break;
	}
	return false;
}

// Position - 0x319
bool func_4(int iParam0) {
	int iVar0;

	if (player::is_player_playing(player::player_id())) {
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				iVar0 = func_15();
				if (!func_14(iVar0)) {
					return false;
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_13() || Global_100747 ||
						Global_25192 || func_12() || func_11(8, -1) || func_10() || func_9() || func_8() || func_7() ||
						G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 1:
					if (player::is_player_being_arrested(player::player_id(), 1) || func_13() || Global_25192 ||
						func_12() || func_11(8, -1) || func_8() || func_10() || func_9() || func_7() ||
						G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 2:
					if (!player::is_player_ready_for_cutscene(player::player_id()) ||
						entity::is_entity_in_air(player::player_ped_id()) ||
						ped::is_ped_getting_into_a_vehicle(player::player_ped_id()) ||
						ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						player::is_player_climbing(player::player_id()) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_13() || Global_100747 ||
						Global_25192 || func_12() || func_11(8, -1) || func_8() || func_10() || func_9() || func_7() ||
						G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5 || LastDispatchedMessageOrCall != -1) {
						return false;
					}
					break;

				case 3:
					if (ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_13() || Global_100747 ||
						Global_25192 || func_12() || func_11(8, -1) || func_10() || func_9() || func_7() ||
						G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 4:
					if (func_13() || player::get_player_wanted_level(player::player_id()) > 0 || func_11(8, -1) ||
						func_7() || func_6() || G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 5:
					if (func_11(8, -1) || func_10() || func_9() || func_6() || func_5()) {
						return false;
					}
					if (streaming::is_player_switch_in_progress() && streaming::get_player_switch_type() != 3 &&
						streaming::get_player_switch_state() < 8) {
						return false;
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
							player::is_player_climbing(player::player_id()) || func_13() || Global_25192 || func_12() ||
							func_11(8, -1) || func_9() || func_8() || func_7() ||
							G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
							return false;
						}
					}
					break;

				case 7:
					if (ped::is_ped_in_combat(player::player_ped_id(), 0) ||
						!player::is_player_control_on(player::player_id()) ||
						!player::is_player_ready_for_cutscene(player::player_id()) || !cam::is_screen_faded_in() ||
						entity::is_entity_in_air(player::player_ped_id()) ||
						ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) || func_13() || func_9() ||
						Global_100747 || Global_25192 || func_12() || Global_36912 || func_11(8, -1) || func_8() ||
						func_6() || func_7() || G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
						return false;
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
						player::is_player_climbing(player::player_id()) || func_13() || Global_100747 || Global_25192 ||
						func_12() || func_11(8, -1) || func_8() || func_6() || func_10() || func_9() || func_7()) {
						return false;
					}
					break;
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
	else {
		return false;
	}
	return true;
}

// Position - 0xA36
var func_5() { return Global_91530.f_1; }

// Position - 0xA44
int func_6() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 13);
	}
	return 0;
}

// Position - 0xA6A
int func_7() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("player_timetable_scene")) > 0) {
		return 1;
	}
	return 0;
}

// Position - 0xA84
int func_8() {
	if (Global_69962) {
		return 1;
	}
	else if (Global_55816 && !Global_55822) {
		return 1;
	}
	return 0;
}

// Position - 0xAAE
bool func_9() { return Global_91543.f_304 > 0; }

// Position - 0xABF
bool func_10() { return Global_91543.f_303 > 0; }

// Position - 0xAD0
var func_11(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0xB0B
var func_12() { return Global_1315233; }

// Position - 0xB17
int func_13() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0xB33
bool func_14(int iParam0) { return iParam0 < 3; }

// Position - 0xB3F
var func_15() {
	func_16();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0xB58
void func_16() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_18(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_17(player::player_ped_id());
			if (func_14(iVar0) && (!func_21(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_14(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0xC55
int func_17(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_18(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0xC92
int func_18(int iParam0) {
	if (func_14(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0xCBC
bool func_19(int iParam0) { return func_20(iParam0, Global_35781); }

// Position - 0xCCD
int func_20(int iParam0, int iParam1) {
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

// Position - 0xEAE
bool func_21(int iParam0) { return Global_35781 == iParam0; }

// Position - 0xEBC
void func_22() { script::terminate_this_thread(); }
