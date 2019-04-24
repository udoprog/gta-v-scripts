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
struct<24> Local_40[2];
var *uLocal_89 = NULL;
var uLocal_90 = 0;
var uLocal_91 = 0;
var uLocal_92 = 0;
var uLocal_93 = 0;
var uLocal_94 = 0;
var uLocal_95 = 0;
var uLocal_96 = 0;
var uLocal_97 = 0;
var uLocal_98 = 0;
var uLocal_99 = 0;
var uLocal_100 = 0;
var uLocal_101 = -1;
var uLocal_102 = 0;
var uLocal_103 = 0;
var uLocal_104 = 0;
var uLocal_105 = 0;
bool bLocal_106 = 0;
vector3 vLocal_107[2] = {{0f, 0f, 0f}, {0f, 0f, 0f}};
var uLocal_114[2] = {0, 0};
int iLocal_117[2] = {0, 0};
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
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

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
	vVar2 = {ScriptParam_0.f_1[0 /*3*/]};
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("launcher_carwash")) > 1) {
		script::terminate_this_thread();
	}
	if (network::network_is_game_in_progress()) {
		gameplay::network_set_script_is_safe_for_network_game();
		gameplay::set_this_script_can_be_paused(0);
	}
	else if (player::has_force_cleanup_occurred(99)) {
		func_70();
	}
	if (Global_2621550) {
		if (script::_get_number_of_instances_of_script_with_name_hash(-949873222) == 0) {
			script::request_script_with_name_hash(-949873222);
			while (!script::has_script_with_name_hash_loaded(-949873222)) {
				system::wait(0);
			}
			system::start_new_script_with_name_hash_and_args(-949873222, &ScriptParam_0, 23, 1424);
		}
		script::terminate_this_thread();
	}
	if (func_69(player::player_ped_id())) {
	}
	func_63();
	while (true) {
		func_69(player::player_ped_id());
		if (func_62(player::player_ped_id(), vVar2, 0) > 100f + 20f) {
			func_70();
		}
		iVar0 = 0;
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			iVar1 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
			iVar0 = func_59(iVar1) | func_58(iVar1);
			bLocal_106 = vehicle::does_vehicle_have_roof(iVar1);
			func_57(bLocal_106);
		}
		iVar5 = 0;
		while (iVar5 < Local_40) {
			func_56(iVar5);
			iVar5++;
		}
		if (func_1(&Local_40, &uLocal_89, iVar0, 0, 1, 1424)) {
			func_70();
		}
		system::wait(0);
	}
}

// Position - 0x196
bool func_1(int iParam0, var *uParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;

	if (uParam1->f_10) {
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *iParam0) {
			func_51(&(*iParam0)[iVar0 /*24*/]);
			iVar0++;
		}
	}
	switch (uParam1->f_13) {
	case 0:
		iVar0 = 0;
		if (func_44(uParam1->f_16)) {
			iVar0 = 0;
			while (iVar0 < *iParam0) {
				if (func_41(&(*iParam0)[iVar0 /*24*/]) && (*iParam0)[iVar0 /*24*/]) {
					uParam1->f_12 = iVar0;
					if ((*iParam0)[iVar0 /*24*/].f_7 || gameplay::get_mission_flag() && uParam1->f_16 == 0) {
						func_40(uParam1, 6);
					}
					else if (player::get_player_wanted_level(player::player_id()) > 0) {
						func_40(uParam1, 8);
					}
					else if (iParam2) {
						func_40(uParam1, 3);
					}
					else if ((*iParam0)[iVar0 /*24*/].f_8) {
						func_40(uParam1, 2);
					}
					else if (func_30() < (*iParam0)[uParam1->f_12 /*24*/].f_9) {
						func_40(uParam1, 1);
					}
					else if (func_25()) {
						func_40(uParam1, 7);
					}
					else {
						func_40(uParam1, 4);
					}
				}
				iVar0++;
			}
		}
		else {
			func_24(uParam1);
		}
		break;

	case 2:
		if (!uParam1->f_9) {
			func_22(uParam1, uParam1->f_6);
		}
		if (func_18(&(*iParam0)[uParam1->f_12 /*24*/]) || (*iParam0)[iVar0 /*24*/].f_8 == 0) {
			func_40(uParam1, 0);
			return false;
		}
		break;

	case 1:
		if (!uParam1->f_9) {
			func_13(uParam1, uParam1->f_2, (*iParam0)[uParam1->f_12 /*24*/].f_9);
		}
		if (func_18(&(*iParam0)[uParam1->f_12 /*24*/]) || func_30() >= (*iParam0)[uParam1->f_12 /*24*/].f_9) {
			func_40(uParam1, 0);
			return false;
		}
		break;

	case 6:
		if (!uParam1->f_9) {
			func_22(uParam1, uParam1->f_1);
		}
		if (func_18(&(*iParam0)[uParam1->f_12 /*24*/]) || !func_44(uParam1->f_16)) {
			func_40(uParam1, 0);
			return false;
		}
		break;

	case 3:
		if (!uParam1->f_9) {
			func_22(uParam1, uParam1->f_3);
		}
		if (func_18(&(*iParam0)[uParam1->f_12 /*24*/]) || iParam2 == 0 || !func_44(uParam1->f_16)) {
			func_40(uParam1, 0);
			return false;
		}
		break;

	case 7:
		if (!uParam1->f_9) {
			func_22(uParam1, uParam1->f_5);
		}
		if (func_18(&(*iParam0)[uParam1->f_12 /*24*/]) || !func_44(uParam1->f_16)) {
			func_40(uParam1, 0);
			return false;
		}
		break;

	case 8:
		if (!uParam1->f_9) {
			func_22(uParam1, uParam1->f_4);
		}
		if (func_18(&(*iParam0)[uParam1->f_12 /*24*/]) || player::get_player_wanted_level(player::player_id()) == 0) {
			func_40(uParam1, 0);
			return false;
		}
		break;

	case 9:
		if (!uParam1->f_9) {
			if (func_12()) {
				func_22(uParam1, uParam1->f_7);
			}
			else {
				func_22(uParam1, uParam1->f_8);
			}
		}
		if (func_18(&(*iParam0)[uParam1->f_12 /*24*/]) || func_9(&(*iParam0)[uParam1->f_12 /*24*/])) {
			func_40(uParam1, 0);
			return false;
		}
		break;

	case 4:
		controls::set_input_exclusive(2, 51);
		controls::disable_control_action(0, 101, 1);
		func_8();
		if (player::get_player_wanted_level(player::player_id()) > 0) {
			func_40(uParam1, 8);
			return false;
		}
		if ((*iParam0)[uParam1->f_12 /*24*/].f_8) {
			func_40(uParam1, 2);
			return false;
		}
		if (func_18(&(*iParam0)[uParam1->f_12 /*24*/]) || !func_44(uParam1->f_16)) {
			func_40(uParam1, 0);
			return false;
		}
		if (Global_68131) {
			return false;
		}
		if (func_5(1)) {
			return false;
		}
		if ((*iParam0)[uParam1->f_12 /*24*/].f_6 == 1) {
			if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) || func_4(player::player_ped_id(), 0) != -1) {
				func_40(uParam1, 0);
				return false;
			}
		}
		if ((*iParam0)[uParam1->f_12 /*24*/].f_7 || gameplay::get_mission_flag() && uParam1->f_16 == 0) {
			func_40(uParam1, 6);
			return false;
		}
		if (func_25()) {
			func_40(uParam1, 7);
			return false;
		}
		if (func_30() < (*iParam0)[uParam1->f_12 /*24*/].f_9) {
			func_40(uParam1, 1);
			return false;
		}
		if (!uParam1->f_9) {
			func_13(uParam1, *uParam1, (*iParam0)[uParam1->f_12 /*24*/].f_9);
		}
		if ((*iParam0)[uParam1->f_12 /*24*/].f_6 == 1) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) &&
				!ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
				return false;
			}
		}
		if (ui::is_pause_menu_active() || player::is_system_ui_being_displayed()) {
			return false;
		}
		if (ped::is_ped_on_foot(player::player_ped_id())) {
			if (ped::is_ped_falling(player::player_ped_id()) || ped::is_ped_jumping(player::player_ped_id()) ||
				ped::is_ped_jumping_out_of_vehicle(player::player_ped_id())) {
				return false;
			}
			if (ped::is_ped_running_ragdoll_task(player::player_ped_id()) ||
				ped::is_ped_ragdoll(player::player_ped_id()) || ai::is_ped_getting_up(player::player_ped_id())) {
				return false;
			}
			if (ped::is_ped_climbing(player::player_ped_id())) {
				return false;
			}
			if (ped::is_ped_ducking(player::player_ped_id()) || ped::is_ped_swimming(player::player_ped_id())) {
				return false;
			}
			if (entity::get_entity_speed(player::player_ped_id()) > 0.05f) {
				return false;
			}
		}
		if (controls::is_control_just_pressed(2, 51) && uParam1->f_9 == 1) {
			if (!func_9(&(*iParam0)[uParam1->f_12 /*24*/])) {
				func_40(uParam1, 9);
			}
			else {
				func_40(uParam1, 5);
			}
		}
		break;

	case 5:
		func_24(uParam1);
		(*iParam0)[uParam1->f_12 /*24*/].f_8 = 0;
		if (!iParam4) {
			func_40(uParam1, 0);
			return true;
		}
		ui::clear_help(1);
		gameplay::clear_area_of_projectiles(entity::get_entity_coords(player::player_ped_id(), 1), 20f, 0);
		if (!gameplay::is_string_null_or_empty((*iParam0)[uParam1->f_12 /*24*/].f_5)) {
			script::request_script((*iParam0)[uParam1->f_12 /*24*/].f_5);
			while (!script::has_script_loaded((*iParam0)[uParam1->f_12 /*24*/].f_5)) {
				func_8();
				if (func_69(player::player_ped_id())) {
					if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) && !Global_69702) {
						func_2(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 2f, 1, 1056964608, 0, 1, 0);
						vehicle::set_vehicle_brake_lights(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 0);
					}
				}
				controls::set_input_exclusive(2, 51);
				script::request_script((*iParam0)[uParam1->f_12 /*24*/].f_5);
				controls::disable_control_action(0, 101, 1);
				controls::disable_control_action(0, 75, 1);
				controls::disable_control_action(0, 23, 1);
				system::wait(0);
			}
			if (iParam3) {
				cam::do_screen_fade_out(250);
			}
			if (script::has_script_loaded((*iParam0)[uParam1->f_12 /*24*/].f_5)) {
				if (iParam3) {
					while (!cam::is_screen_faded_out()) {
						if (func_69(player::player_ped_id())) {
							if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) && !Global_69702) {
								func_2(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 2f, 1, 1056964608, 0, 1,
									   0);
								vehicle::set_vehicle_brake_lights(
									ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 0);
							}
						}
						controls::set_input_exclusive(2, 51);
						controls::disable_control_action(0, 101, 1);
						controls::disable_control_action(0, 75, 1);
						controls::disable_control_action(0, 23, 1);
						func_8();
						system::wait(0);
					}
				}
				system::start_new_script((*iParam0)[uParam1->f_12 /*24*/].f_5, iParam5);
				script::set_script_as_no_longer_needed((*iParam0)[uParam1->f_12 /*24*/].f_5);
				return true;
			}
		}
		break;
	}
	return false;
}

// Position - 0x8D8
int func_2(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6) {
	controls::disable_control_action(0, 71, 1);
	controls::disable_control_action(0, 72, 1);
	controls::disable_control_action(0, 76, 1);
	controls::disable_control_action(0, 73, 1);
	controls::disable_control_action(0, 59, 1);
	controls::disable_control_action(0, 60, 1);
	if (iParam5) {
		controls::disable_control_action(0, 75, 1);
	}
	controls::disable_control_action(0, 80, 1);
	if (!iParam6) {
		controls::disable_control_action(0, 69, 1);
		controls::disable_control_action(0, 70, 1);
		controls::disable_control_action(0, 68, 1);
	}
	controls::disable_control_action(0, 74, 1);
	controls::disable_control_action(0, 86, 1);
	controls::disable_control_action(0, 81, 1);
	controls::disable_control_action(0, 82, 1);
	controls::disable_control_action(0, 138, 1);
	controls::disable_control_action(0, 136, 1);
	controls::disable_control_action(0, 114, 1);
	controls::disable_control_action(0, 107, 1);
	controls::disable_control_action(0, 110, 1);
	controls::disable_control_action(0, 89, 1);
	controls::disable_control_action(0, 89, 1);
	controls::disable_control_action(0, 87, 1);
	controls::disable_control_action(0, 88, 1);
	controls::disable_control_action(0, 113, 1);
	controls::disable_control_action(0, 115, 1);
	controls::disable_control_action(0, 116, 1);
	controls::disable_control_action(0, 117, 1);
	controls::disable_control_action(0, 118, 1);
	controls::disable_control_action(0, 119, 1);
	controls::disable_control_action(0, 131, 1);
	controls::disable_control_action(0, 132, 1);
	controls::disable_control_action(0, 123, 1);
	controls::disable_control_action(0, 126, 1);
	controls::disable_control_action(0, 129, 1);
	controls::disable_control_action(0, 130, 1);
	controls::disable_control_action(0, 133, 1);
	controls::disable_control_action(0, 134, 1);
	cam::_0x17FCA7199A530203();
	func_3(iParam0);
	if (gameplay::get_game_timer() - Global_29 > 500) {
		vehicle::_set_vehicle_halt(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = gameplay::get_game_timer();
	if (!entity::is_entity_dead(iParam0, 0)) {
		if (gameplay::absf(entity::get_entity_speed(iParam0)) <= fParam3) {
			return 1;
		}
	}
	return 0;
}

// Position - 0xA67
void func_3(int iParam0) {
	if (vehicle::_get_has_vehicle_got_rocket_boost(iParam0)) {
		if (vehicle::_is_vehicle_rocket_boost_active(iParam0)) {
			vehicle::_set_rocket_boost_active(iParam0, 0);
		}
	}
}

// Position - 0xA88
int func_4(int iParam0, int iParam1) {
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

// Position - 0xB0A
bool func_5(int iParam0) {
	if (iParam0) {
		if (func_7()) {
			return true;
		}
	}
	if (func_6(14)) {
		return true;
	}
	return false;
}

// Position - 0xB30
bool func_6(int iParam0) { return Global_35781 == iParam0; }

// Position - 0xB3E
bool func_7() {
	if (Global_100647) {
		return true;
	}
	if (!func_6(14) && script::_get_number_of_instances_of_script_with_name_hash(joaat("director_mode")) > 0) {
		return true;
	}
	return false;
}

// Position - 0xB70
void func_8() { Global_17151.f_6 = 1; }

// Position - 0xB7E
int func_9(var *uParam0) {
	vector3 vVar0;
	int iVar3;
	int iVar4;

	iVar4 = player::player_ped_id();
	if (uParam0->f_15 == 360f) {
		return 1;
	}
	if (func_11(uParam0->f_12)) {
		return 1;
	}
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		iVar3 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
		if (func_69(iVar3)) {
			vVar0 = {entity::get_entity_rotation(iVar3, 2)};
			if (vVar0.y > 45f || vVar0.y < -45f) {
				return 0;
			}
			iVar4 = iVar3;
		}
	}
	vVar0 = {entity::get_entity_forward_vector(iVar4)};
	if (func_10(uParam0->f_12, vVar0) > system::cos(uParam0->f_15)) {
		return 1;
	}
	return 0;
}

// Position - 0xC27
float func_10(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5) {
	return Param0 * Param3 + Param0.f_1 * Param3.f_1;
}

// Position - 0xC3E
bool func_11(vector3 vParam0) {
	if (vParam0.x == 0f && vParam0.y == 0f && vParam0.z == 0f) {
		return true;
	}
	return false;
}

// Position - 0xC68
bool func_12() {
	int iVar0;

	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
		return entity::is_entity_upright(iVar0, 1119092736);
	}
	return entity::is_entity_upright(player::player_ped_id(), 1119092736);
}

// Position - 0xCA2
int func_13(var *uParam0, char *sParam1, int iParam2) {
	if (gameplay::is_string_null_or_empty(sParam1)) {
		return 0;
	}
	if (func_15(uParam0) || !ui::is_help_message_being_displayed()) {
		ui::clear_help(1);
		func_14(sParam1, iParam2);
		uParam0->f_14 = sParam1;
		uParam0->f_15 = iParam2;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

// Position - 0xCEE
void func_14(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::add_text_component_integer(iParam1);
	ui::end_text_command_display_help(0, 1, 1, -1);
}

// Position - 0xD0A
bool func_15(var *uParam0) {
	if (gameplay::is_string_null_or_empty(uParam0->f_14)) {
		return false;
	}
	if (!ui::is_help_message_being_displayed()) {
		return false;
	}
	if (gameplay::are_strings_equal(*uParam0, uParam0->f_14) ||
		gameplay::are_strings_equal(uParam0->f_2, uParam0->f_14)) {
		return func_17(uParam0->f_14, uParam0->f_15);
	}
	return func_16(uParam0->f_14);
}

// Position - 0xD64
var func_16(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0xD77
var func_17(char *sParam0, int iParam1) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	ui::add_text_component_integer(iParam1);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0xD90
bool func_18(var *uParam0) {
	struct<8> Var0;

	Var0 = 2;
	if (uParam0->f_6 == 0) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			return true;
		}
	}
	else if (uParam0->f_6 == 1) {
		if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			return true;
		}
		if (func_4(player::player_ped_id(), 0) != -1) {
			return true;
		}
	}
	if (uParam0->f_11 == 0) {
		return !func_21(player::player_ped_id(), uParam0->f_1, uParam0->f_10 + 2f);
	}
	Var0 = {func_19(uParam0->f_16, 2f)};
	return !entity::is_entity_in_angled_area(player::player_ped_id(), Var0[0 /*3*/], Var0[1 /*3*/], Var0.f_7, 0, 1, 0);
}

// Position - 0xE33
struct<8> func_19(struct<8> Param0, float fParam8) {
	struct<8> Var0;
	vector3 vVar8;

	Var0 = 2;
	vVar8 = {func_20(Param0[1 /*3*/] - Param0[0 /*3*/]) * FtoV(fParam8)};
	Var0[0 /*3*/] = {Param0[0 /*3*/] - vVar8};
	Var0[1 /*3*/] = {Param0[1 /*3*/] + vVar8};
	Var0.f_7 = Param0.f_7 + fParam8 * 2f;
	return Var0;
}

// Position - 0xE95
Vector3
func_20(vector3 vParam0) {
	float fVar0;
	float fVar1;

	fVar0 = system::vmag(vParam0);
	if (fVar0 != 0f) {
		fVar1 = 1f / fVar0;
		vParam0 = {vParam0 * FtoV(fVar1)};
	}
	else {
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

// Position - 0xED4
bool func_21(int iParam0, vector3 vParam1, float fParam4) {
	return system::vdist2(entity::get_entity_coords(iParam0, 1), vParam1) <= fParam4 * fParam4;
}

// Position - 0xEF1
int func_22(var *uParam0, char *sParam1) {
	if (gameplay::is_string_null_or_empty(sParam1)) {
		return 0;
	}
	if (func_15(uParam0) || !ui::is_help_message_being_displayed()) {
		ui::clear_help(1);
		func_23(sParam1);
		uParam0->f_14 = sParam1;
		uParam0->f_15 = 0;
		uParam0->f_9 = 1;
		return 1;
	}
	return 0;
}

// Position - 0xF3A
void func_23(char *sParam0) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 1, 1, -1);
}

// Position - 0xF50
void func_24(var *uParam0) {
	if (func_15(uParam0)) {
		ui::clear_help(1);
	}
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	if (uParam0->f_9 == 1) {
		uParam0->f_9 = 0;
	}
}

// Position - 0xF7D
bool func_25() {
	int iVar0;

	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		return false;
	}
	iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
	if (fire::is_entity_on_fire(iVar0)) {
		return true;
	}
	if (func_29(iVar0)) {
		return true;
	}
	if (func_26(iVar0, 3)) {
		return true;
	}
	return !vehicle::is_vehicle_driveable(iVar0, 0);
}

// Position - 0xFD1
bool func_26(int iParam0, int iParam1) {
	int iVar0;

	if (func_27(iParam0)) {
		iVar0 = 0;
		if (vehicle::is_vehicle_tyre_burst(iParam0, 0, 0) && vehicle::is_vehicle_tyre_burst(iParam0, 1, 0)) {
			return true;
		}
		if (vehicle::is_vehicle_tyre_burst(iParam0, 4, 0) && vehicle::is_vehicle_tyre_burst(iParam0, 5, 0)) {
			return true;
		}
		if (vehicle::is_vehicle_tyre_burst(iParam0, 0, 0)) {
			iVar0++;
		}
		if (vehicle::is_vehicle_tyre_burst(iParam0, 1, 0)) {
			iVar0++;
		}
		if (vehicle::is_vehicle_tyre_burst(iParam0, 4, 0)) {
			iVar0++;
		}
		if (vehicle::is_vehicle_tyre_burst(iParam0, 5, 0)) {
			iVar0++;
		}
		if (iVar0 >= iParam1) {
			return true;
		}
	}
	return false;
}

// Position - 0x106D
bool func_27(int iParam0) {
	if (func_28(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (!fire::is_entity_on_fire(iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x1097
bool func_28(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x10B8
bool func_29(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
		else if (!vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (!fire::is_entity_on_fire(iParam0)) {
				return true;
			}
		}
	}
	else {
		return true;
	}
	return false;
}

// Position - 0x10FB
int func_30() {
	if (network::network_is_game_in_progress()) {
		return func_37(player::player_id());
	}
	switch (func_32()) {
	case 2: return func_31(2);

	case 0: return func_31(0);

	case 1: return func_31(1);

	default:
	}
	return 0;
}

// Position - 0x1149
var func_31(int iParam0) { return Global_52996[iParam0]; }

// Position - 0x1158
int func_32() {
	func_33();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x1171
void func_33() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_36(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_35(player::player_ped_id());
			if (func_34(iVar0) && (!func_6(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_34(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x126E
bool func_34(int iParam0) { return iParam0 < 3; }

// Position - 0x127A
int func_35(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_36(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x12B7
int func_36(int iParam0) {
	if (func_34(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x12E1
int func_37(int iParam0) {
	int iVar0;

	iVar0 = func_38(iParam0);
	return iVar0;
}

// Position - 0x12F3
int func_38(int iParam0) {
	if (iParam0 > -1) {
		if (iParam0 == player::player_id()) {
			return networkcash::network_get_vc_wallet_balance(-1);
		}
		else if (func_39(iParam0)) {
			return Global_1591201[iParam0 /*602*/].f_203.f_3;
		}
		else {
			return 0;
		}
	}
	return 0;
}

// Position - 0x1336
bool func_39(int iParam0) {
	if (iParam0 == -1) {
		return false;
	}
	else {
		return gameplay::is_bit_set(Global_2433125.f_1, iParam0);
	}
	return true;
}

// Position - 0x135B
void func_40(var *uParam0, int iParam1) {
	uParam0->f_13 = iParam1;
	func_24(uParam0);
}

// Position - 0x136F
bool func_41(var *uParam0) {
	func_69(player::player_ped_id());
	if (*uParam0 == 0) {
		return false;
	}
	if (func_43(0)) {
		return false;
	}
	if (func_42()) {
		return false;
	}
	if (uParam0->f_6 == 0) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			return false;
		}
	}
	else if (uParam0->f_6 == 1) {
		if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			return false;
		}
		if (func_4(player::player_ped_id(), 0) != -1) {
			return false;
		}
	}
	if (uParam0->f_11 == 1) {
		return entity::is_entity_in_angled_area(player::player_ped_id(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/],
												uParam0->f_16.f_7, 0, 1, 0);
	}
	return func_21(player::player_ped_id(), uParam0->f_1, uParam0->f_10);
}

// Position - 0x1427
bool func_42() { return gameplay::get_game_timer() <= Global_17290.f_5745 + 100; }

// Position - 0x143C
bool func_43(int iParam0) {
	if (iParam0) {
		return Global_17151.f_4 && Global_17151.f_104 == 4;
	}
	return Global_17151.f_4;
}

// Position - 0x1465
bool func_44(int iParam0) {
	if (iParam0 == 0) {
		if (func_50()) {
			return false;
		}
	}
	if (ui::is_pause_menu_active()) {
		return false;
	}
	if (player::is_system_ui_being_displayed()) {
		return false;
	}
	if (func_42()) {
		return false;
	}
	if (Global_55816) {
		return false;
	}
	if (func_43(0)) {
		return false;
	}
	if (func_49(0)) {
		return false;
	}
	if (func_45(player::player_id())) {
		return false;
	}
	return true;
}

// Position - 0x14D1
bool func_45(int iParam0) {
	if (func_48(iParam0)) {
		return true;
	}
	if (func_46(iParam0)) {
		return true;
	}
	return false;
}

// Position - 0x14F4
bool func_46(int iParam0) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1) {
		return func_47(iParam0, 9);
	}
	return false;
}

// Position - 0x1512
var func_47(int iParam0, int iParam1) {
	return gameplay::is_bit_set(Global_1619421[iParam0 /*390*/].f_11.f_4, iParam1);
}

// Position - 0x152D
bool func_48(var uParam0) {
	int iVar0;

	iVar0 = uParam0;
	if (iVar0 != -1) {
		return gameplay::is_bit_set(Global_1619421[iVar0 /*390*/].f_1, 0);
	}
	return false;
}

// Position - 0x1553
bool func_49(int iParam0) {
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

// Position - 0x15AD
bool func_50() {
	if (Global_35781 == 15) {
		return false;
	}
	return true;
}

// Position - 0x15C2
void func_51(var *uParam0) {
	if (uParam0->f_11 == 1) {
		func_53(&uParam0->f_16, 255, 100, 0, 100);
	}
	else {
		func_52(uParam0->f_1, uParam0->f_10, 0, 0, 255, 255, 32);
	}
}

// Position - 0x15F7
void func_52(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) {
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;

	fVar1 = 360f / system::to_float(iParam8);
	vVar2 = {vParam0};
	vVar5 = {vParam0};
	fVar8 = 0f;
	vVar2 = {vParam0};
	vVar2.x += system::sin(fVar8 - fVar1) * fParam3;
	vVar2.y += system::cos(fVar8 - fVar1) * fParam3;
	iVar0 = 0;
	while (iVar0 <= iParam8) {
		vVar5 = {vParam0};
		vVar5.x += system::sin(fVar8) * fParam3;
		vVar5.y += system::cos(fVar8) * fParam3;
		unk_0x0A25F80D5BADC013(vVar2, vVar5, iParam4, iParam5, iParam6, iParam7);
		vVar2 = {vVar5};
		fVar8 += fVar1;
		iVar0++;
	}
}

// Position - 0x16AC
void func_53(var *uParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	func_54((*uParam0)[0 /*3*/], (*uParam0)[1 /*3*/], uParam0->f_7, iParam1, iParam2, iParam3, iParam4);
}

// Position - 0x16D2
void func_54(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10) {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13[8];
	int iVar38;

	if (fParam6 == 0f) {
		return;
	}
	vVar0 = {func_20(vParam3 - vParam0)};
	vVar3 = {func_55(vVar0, 0f, 0f, 1f)};
	fVar6 = fParam6 / 2f;
	vVar7 = {vParam0};
	vVar10 = {vParam3};
	vVar10.z = vParam0.z;
	vVar13[0 /*3*/] = {vVar7 - vVar3 * FtoV(fVar6)};
	vVar13[1 /*3*/] = {vVar7 + vVar3 * FtoV(fVar6)};
	vVar13[2 /*3*/] = {vVar10 + vVar3 * FtoV(fVar6)};
	vVar13[3 /*3*/] = {vVar10 - vVar3 * FtoV(fVar6)};
	unk_0x0A25F80D5BADC013(vVar13[0 /*3*/], vVar13[1 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x0A25F80D5BADC013(vVar13[1 /*3*/], vVar13[2 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x0A25F80D5BADC013(vVar13[2 /*3*/], vVar13[3 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x0A25F80D5BADC013(vVar13[3 /*3*/], vVar13[0 /*3*/], iParam7, iParam8, iParam9, iParam10);
	iVar38 = 0;
	while (iVar38 <= 3) {
		vVar13[4 + iVar38 /*3*/] = {vVar13[iVar38 /*3*/]};
		vVar13[4 + iVar38 /*3*/].f_2 = vParam3.z;
		iVar38++;
	}
	unk_0x0A25F80D5BADC013(vVar13[4 /*3*/], vVar13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x0A25F80D5BADC013(vVar13[5 /*3*/], vVar13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x0A25F80D5BADC013(vVar13[6 /*3*/], vVar13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x0A25F80D5BADC013(vVar13[7 /*3*/], vVar13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x0A25F80D5BADC013(vVar13[0 /*3*/], vVar13[4 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x0A25F80D5BADC013(vVar13[1 /*3*/], vVar13[5 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x0A25F80D5BADC013(vVar13[2 /*3*/], vVar13[6 /*3*/], iParam7, iParam8, iParam9, iParam10);
	unk_0x0A25F80D5BADC013(vVar13[3 /*3*/], vVar13[7 /*3*/], iParam7, iParam8, iParam9, iParam10);
}

// Position - 0x18E2
Vector3 func_55(vector3 vParam0, vector3 vParam3) {
	return vParam0.y * vParam3.z - vParam0.z * vParam3.y, vParam0.z * vParam3.x - vParam0.x * vParam3.z,
		   vParam0.x * vParam3.y - vParam0.y * vParam3.x;
}

// Position - 0x191B
void func_56(int iParam0) {
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar5;
	int iVar8;

	if (!func_41(&Local_40[iParam0 /*24*/])) {
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_117[iParam0] = 0;
		return;
	}
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		Local_40[iParam0 /*24*/].f_8 = 0;
		iLocal_117[iParam0] = 0;
		return;
	}
	if (iLocal_117[iParam0] == 0) {
		if (gameplay::get_game_timer() > uLocal_114[iParam0]) {
			iLocal_117[iParam0] = worldprobe::_0xE6AC6C45FBE83004(
				vLocal_107[iParam0 /*3*/], vLocal_107[iParam0 /*3*/] + Vector(1f, 0f, 0f), 2f, 2,
				ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 4);
		}
	}
	else {
		iVar0 = worldprobe::get_shape_test_result(iLocal_117[iParam0], &iVar8, &uVar2, &uVar5, &iVar1);
		if (iVar0 == 2) {
			Local_40[iParam0 /*24*/].f_8 = 0;
			if (iVar8 > 0) {
				if (entity::does_entity_exist(iVar1)) {
					if (entity::is_entity_a_vehicle(iVar1)) {
						Local_40[iParam0 /*24*/].f_8 = 1;
					}
				}
			}
			iLocal_117[iParam0] = 0;
		}
		if (iVar0 == 0) {
			iLocal_117[iParam0] = 0;
		}
		uLocal_114[iParam0] = gameplay::get_game_timer() + 250;
	}
}

// Position - 0x1A0C
void func_57(bool bParam0) {
	if (bParam0) {
	}
}

// Position - 0x1A19
int func_58(int iParam0) {
	if (!vehicle::is_this_model_a_car(entity::get_entity_model(iParam0))) {
		return 1;
	}
	if (vehicle::is_vehicle_door_damaged(iParam0, 0)) {
		return 1;
	}
	if (vehicle::is_vehicle_door_damaged(iParam0, 1)) {
		return 1;
	}
	if (vehicle::is_vehicle_door_damaged(iParam0, 2)) {
		return 1;
	}
	if (vehicle::is_vehicle_door_damaged(iParam0, 3)) {
		return 1;
	}
	if (vehicle::is_vehicle_a_convertible(iParam0, 1)) {
		if (vehicle::get_convertible_roof_state(iParam0) == 6) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x1A84
int func_59(int iParam0) {
	vector3 vVar0;
	vector3 vVar3;

	if (!func_28(iParam0)) {
		return 0;
	}
	if (!vehicle::does_vehicle_have_roof(iParam0)) {
		return 1;
	}
	if (vehicle::is_vehicle_attached_to_trailer(iParam0)) {
		return 1;
	}
	if (!vehicle::is_this_model_a_car(entity::get_entity_model(iParam0))) {
		return 1;
	}
	if (fire::is_entity_on_fire(iParam0)) {
		return 1;
	}
	if (func_60(iParam0)) {
		return 1;
	}
	gameplay::get_model_dimensions(entity::get_entity_model(iParam0), &vVar0, &vVar3);
	if (gameplay::absf(vVar3.x - vVar0.x) > 3.4f) {
		return 1;
	}
	if (gameplay::absf(vVar3.z - vVar0.z) > 2.9f) {
		return 1;
	}
	if (Global_69702) {
		if (!network::network_has_control_of_entity(iParam0)) {
			return 0;
		}
	}
	if (vehicle::is_vehicle_a_convertible(iParam0, 1) && !vehicle::does_vehicle_have_roof(iParam0)) {
		return 1;
	}
	if (!vehicle::is_vehicle_a_convertible(iParam0, 1) && !vehicle::does_vehicle_have_roof(iParam0)) {
		return 1;
	}
	if (entity::get_entity_model(iParam0) == joaat("btype") || entity::get_entity_model(iParam0) == joaat("btype3")) {
		if (func_28(vehicle::get_ped_in_vehicle_seat(iParam0, 3, 0)) ||
			func_28(vehicle::get_ped_in_vehicle_seat(iParam0, 4, 0)) ||
			func_28(vehicle::get_ped_in_vehicle_seat(iParam0, 5, 0)) ||
			func_28(vehicle::get_ped_in_vehicle_seat(iParam0, 6, 0)) ||
			func_28(vehicle::get_ped_in_vehicle_seat(iParam0, 7, 0)) ||
			func_28(vehicle::get_ped_in_vehicle_seat(iParam0, 8, 0))) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x1BF9
bool func_60(int iParam0) {
	int iVar0;

	iVar0 = entity::get_entity_model(iParam0);
	if (func_61(iVar0)) {
		return true;
	}
	if (iVar0 == joaat("regina")) {
		if (vehicle::is_vehicle_extra_turned_on(iParam0, 2)) {
			return true;
		}
		if (vehicle::is_vehicle_extra_turned_on(iParam0, 3) && vehicle::is_vehicle_extra_turned_on(iParam0, 4)) {
			return true;
		}
	}
	if (iVar0 == joaat("banshee") && vehicle::is_vehicle_extra_turned_on(iParam0, 1)) {
		return true;
	}
	if (iVar0 == joaat("peyote") && vehicle::is_vehicle_extra_turned_on(iParam0, 1)) {
		return true;
	}
	if (iVar0 == joaat("coquette") && !vehicle::does_vehicle_have_roof(iParam0)) {
		return true;
	}
	if (iVar0 == joaat("manana") && vehicle::is_vehicle_extra_turned_on(iParam0, 1)) {
		return true;
	}
	if (iVar0 == joaat("mesa") && !vehicle::is_vehicle_extra_turned_on(iParam0, 1)) {
		return true;
	}
	if (iVar0 == joaat("voltic") && vehicle::is_vehicle_extra_turned_on(iParam0, 1)) {
		return true;
	}
	if (iVar0 == joaat("bobcatxl") && !vehicle::is_vehicle_extra_turned_on(iParam0, 1)) {
		return true;
	}
	if (iVar0 == joaat("ruiner")) {
		if (vehicle::is_vehicle_extra_turned_on(iParam0, 3) && !vehicle::is_vehicle_extra_turned_on(iParam0, 7)) {
			return false;
		}
		return true;
	}
	return false;
}

// Position - 0x1D31
bool func_61(int iParam0) {
	if (!vehicle::is_this_model_a_car(iParam0)) {
		return true;
	}
	switch (iParam0) {
	case joaat("ambulance"):
	case joaat("armytrailer"):
	case joaat("airtug"):
	case joaat("bifta"):
	case joaat("bison2"):
	case joaat("bison3"):
	case joaat("bodhi2"):
	case joaat("boxville"):
	case joaat("boxville2"):
	case joaat("boxville3"):
	case joaat("bulldozer"):
	case joaat("caddy"):
	case joaat("caddy2"):
	case joaat("cutter"):
	case joaat("dilettante2"):
	case joaat("dubsta3"):
	case joaat("dump"):
	case joaat("dune"):
	case joaat("dloader"):
	case joaat("forklift"):
	case joaat("guardian"):
	case joaat("graintrailer"):
	case joaat("handler"):
	case joaat("insurgent"):
	case joaat("insurgent2"):
	case joaat("kalahari"):
	case joaat("mesa3"):
	case joaat("mixer"):
	case joaat("mixer2"):
	case joaat("mower"):
	case joaat("packer"):
	case joaat("pbus"):
	case joaat("ratloader"):
	case joaat("rentalbus"):
	case joaat("rhino"):
	case joaat("ripley"):
	case joaat("riot"):
	case joaat("sadler"):
	case joaat("sadler2"):
	case joaat("sandking"):
	case joaat("sandking2"):
	case joaat("scrap"):
	case joaat("stockade"):
	case joaat("stockade3"):
	case joaat("technical"):
	case joaat("tractor"):
	case joaat("tractor2"):
	case joaat("tornado4"):
	case joaat("tourbus"):
	case joaat("limo2"):
	case joaat("raptor"):
	case joaat("ratloader2"):
	case joaat("dune4"):
	case joaat("dune5"): return true;

	default:
	}
	return false;
}

// Position - 0x1E97
float func_62(int iParam0, vector3 vParam1, int iParam4) {
	vector3 vVar0;

	if (!entity::is_entity_dead(iParam0, 0)) {
		vVar0 = {entity::get_entity_coords(iParam0, 1)};
	}
	else {
		vVar0 = {entity::get_entity_coords(iParam0, 0)};
	}
	return gameplay::get_distance_between_coords(vVar0, vParam1, iParam4);
}

// Position - 0x1ED1
void func_63() {
	func_67(&Local_40[0 /*24*/], 1, "Carwash1", func_68(156), 15, "", 0, 4f);
	func_67(&Local_40[1 /*24*/], 1, "Carwash2", func_68(157), 15, "", 0, 4f);
	func_65(&Local_40[0 /*24*/], -1f, 0f, 0f, 360f);
	func_65(&Local_40[1 /*24*/], 0f, -1f, 0f, 360f);
	func_64(&uLocal_89, 0);
	vLocal_107[0 /*3*/] = {47.6f, -1392f, 29.4f};
	vLocal_107[1 /*3*/] = {-700f, -925.3f, 19f};
}

// Position - 0x1F5F
void func_64(var *uParam0, int iParam1) {
	*uParam0 = "CWASH_RIDEHLP";
	uParam0->f_1 = "";
	uParam0->f_3 = "CWASH_NOWAY";
	uParam0->f_4 = "CWASH_WANTED";
	uParam0->f_5 = "CWASH_CARBROKE";
	uParam0->f_6 = "CWASH_BLOCKED";
	uParam0->f_7 = "CWASH_WRONGWAY";
	uParam0->f_8 = "CWASH_UPSIDEDO";
	uParam0->f_16 = iParam1;
	if (!Global_69702) {
		uParam0->f_2 = "CWASH_NOMONEY";
		return;
	}
	if (gameplay::is_ps3_version() || gameplay::is_orbis_version()) {
		uParam0->f_2 = "CWASH_POOR_PSN";
	}
	else if (gameplay::is_xbox360_version() || gameplay::is_durango_version()) {
		uParam0->f_2 = "CWASH_POOR_XBX";
	}
	else {
		uParam0->f_2 = "CWASH_POOR_STD";
	}
}

// Position - 0x1FF3
void func_65(var *uParam0, vector3 vParam1, float fParam4) {
	uParam0->f_12 = {func_20(vParam1 * FtoV(5f))};
	uParam0->f_15 = func_66(fParam4, 0f, 360f);
}

// Position - 0x201C
float func_66(float fParam0, float fParam1, float fParam2) {
	if (fParam0 > fParam2) {
		return fParam2;
	}
	else if (fParam0 < fParam1) {
		return fParam1;
	}
	return fParam0;
}

// Position - 0x2043
void func_67(var *uParam0, int iParam1, char *sParam2, vector3 vParam3, int iParam6, char *sParam7, int iParam8,
			 float fParam9) {
	uParam0->f_5 = sParam2;
	uParam0->f_1 = {vParam3};
	uParam0->f_4 = sParam7;
	uParam0->f_9 = iParam6;
	uParam0->f_7 = iParam8;
	uParam0->f_6 = iParam1;
	uParam0->f_11 = 0;
	*uParam0 = 1;
	uParam0->f_12 = {0f, 0f, 0f};
	uParam0->f_15 = 360f;
	if (iParam1 == 0) {
		uParam0->f_10 = 2.75f;
	}
	else {
		uParam0->f_10 = 2.75f * 2f;
	}
	if (fParam9 > 0f) {
		uParam0->f_10 = fParam9;
	}
}

// Position - 0x20B8
Vector3 func_68(int iParam0) {
	int iVar0;

	iVar0 = iParam0;
	return Global_25501[iVar0 /*23*/][0 /*3*/];
}

// Position - 0x20D0
bool func_69(int iParam0) {
	if (!entity::does_entity_exist(iParam0)) {
		return false;
	}
	return !entity::is_entity_dead(iParam0, 0);
}

// Position - 0x20EE
void func_70() {
	func_71(&Local_40);
	func_24(&uLocal_89);
	script::terminate_this_thread();
}

// Position - 0x2106
void func_71(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		func_72(&(*uParam0)[iVar0 /*24*/]);
		iVar0++;
	}
}

// Position - 0x212F
void func_72(int *iParam0) { *iParam0 = 0; }
