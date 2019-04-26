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
int iLocal_45 = 0;
int iLocal_46 = 0;
vector3 vLocal_47 = {0f, 0f, 0f};
vector3 vLocal_50 = {0f, 0f, 0f};
int iLocal_53 = 0;
int iLocal_54 = 0;
int iLocal_55 = 0;
int iLocal_56 = 0;
int iLocal_57 = 0;
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
	vLocal_47 = {ScriptParam_0.f_1[0 /*3*/]};
	iLocal_44 = gameplay::get_random_int_in_range(0, 2);
	func_27();
	if (player::has_force_cleanup_occurred(11)) {
		func_27();
	}
	while (true) {
		system::wait(0);
		if (brain::is_world_point_within_brain_activation_range()) {
			if (func_8(3)) {
				switch (iLocal_43) {
				case 0:
					if (iLocal_45 == 1) {
						iLocal_43 = 1;
					}
					else {
						func_7();
					}
					break;

				case 1:
					if (!entity::is_entity_dead(iLocal_54, 0)) {
						if (iLocal_46 == 0) {
							if (func_2(iLocal_54, 0, 1056964608, 0, 0, 0)) {
								iLocal_46 = 1;
							}
						}
					}
					if (iLocal_56 == 0) {
						func_1();
					}
					break;
				}
			}
			else {
				func_27();
			}
		}
		else {
			func_27();
		}
	}
}

// Position - 0x119
void func_1() {
	if (system::timerb() > 10000) {
		if (entity::is_entity_at_coord(player::player_ped_id(), vLocal_47, 10f, 10f, 10f, 0, 1, 0) &&
			!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			system::settimerb(0);
			if (!entity::is_entity_dead(iLocal_54, 0)) {
				if (iLocal_44 == 0) {
					if (iLocal_46 == 0) {
					}
					ai::open_sequence_task(&iLocal_57);
					ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
					ai::task_play_anim(0, "amb@drug_dealer", "beckon_03", 8f, -8f, -1, 0, 0, 0, 0, 0);
					ai::close_sequence_task(iLocal_57);
					ai::task_perform_sequence(iLocal_54, iLocal_57);
					ai::clear_sequence_task(&iLocal_57);
				}
				else if (!entity::is_entity_dead(iLocal_55, 0)) {
					ai::task_turn_ped_to_face_entity(iLocal_54, iLocal_55, 0);
					if (iLocal_46 == 0) {
					}
					ai::task_wander_standard(iLocal_55, 1193033728, 0);
					iLocal_44 = 0;
				}
			}
		}
	}
}

// Position - 0x1E1
bool func_2(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5) {
	float fVar0;

	if (iParam4 == 2) {
		fVar0 = 150f;
	}
	else if (iParam4 == 1) {
		fVar0 = 100f;
	}
	else if (iParam4 == 0) {
		fVar0 = 40f;
	}
	switch (iParam3) {
	case 2:
		if (func_3(iParam0, func_6(iParam1, 2, fParam2), fVar0, fParam2, iParam5)) {
			return true;
		}
		if (func_3(iParam0, func_6(iParam1, 3, fParam2), fVar0, fParam2, iParam5)) {
			return true;
		}
		if (func_3(iParam0, func_6(iParam1, 5, fParam2), fVar0, fParam2, iParam5)) {
			return true;
		}
		if (func_3(iParam0, func_6(iParam1, 6, fParam2), fVar0, fParam2, iParam5)) {
			return true;
		}
		if (func_3(iParam0, func_6(iParam1, 7, fParam2), fVar0, fParam2, iParam5)) {
			return true;
		}
		if (func_3(iParam0, func_6(iParam1, 8, fParam2), fVar0, fParam2, iParam5)) {
			return true;
		}

	case 1:
		if (func_3(iParam0, func_6(iParam1, 1, fParam2), fVar0, fParam2, iParam5)) {
			return true;
		}

	case 0:
		if (func_3(iParam0, func_6(iParam1, 0, fParam2), fVar0, fParam2, iParam5)) {
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x314
bool func_3(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6) {
	float fVar0;
	vector3 vVar1;

	if (fParam5 < 1f) {
		fVar0 = 1f + 0.5f;
	}
	else {
		fVar0 = fParam5 + 0.5f;
	}
	vVar1 = {fParam5 + 0.2f, fParam5 + 0.2f, fVar0};
	if (!ped::is_ped_injured(iParam0)) {
		if (entity::is_entity_at_coord(player::player_ped_id(),
									   entity::get_offset_from_entity_in_world_coords(iParam0, vParam1), vVar1, 0, 1,
									   0) &&
			ped::_0xFCF37A457CB96DC0(player::player_ped_id(), entity::get_entity_coords(iParam0, 1), fParam4) &&
			func_5(bParam6) && !ped::is_ped_ragdoll(iParam0) && !ai::is_ped_getting_up(iParam0)) {
			func_4(iParam0, 1);
			return true;
		}
		else {
			func_4(iParam0, 0);
		}
	}
	return false;
}

// Position - 0x3C7
void func_4(int iParam0, int iParam1) {
	if (iParam1) {
	}
	if (!entity::is_entity_dead(iParam0, 0)) {
	}
}

// Position - 0x3DF
int func_5(bool bParam0) {
	if (player::is_player_control_on(player::player_id())) {
		if (bParam0) {
			if (ai::get_ped_desired_move_blend_ratio(player::player_ped_id()) == 1f ||
				ai::get_ped_desired_move_blend_ratio(player::player_ped_id()) == 0f) {
				return 1;
			}
		}
		else if (ai::get_ped_desired_move_blend_ratio(player::player_ped_id()) == 1f) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x42D
Vector3 func_6(int iParam0, int iParam1, float fParam2) {
	vector3 vVar0;

	switch (iParam1) {
	case 0:
		if (iParam0 == 0) {
			vVar0 = {0f, fParam2, 0f};
		}
		else if (iParam0 == 1) {
			vVar0 = {fParam2, 0f, 0f};
		}
		else if (iParam0 == 3) {
			vVar0 = {0f, -fParam2, 0f};
		}
		else if (iParam0 == 2) {
			vVar0 = {-fParam2, 0f, 0f};
		}
		break;

	case 1:
		if (iParam0 == 3) {
			vVar0 = {0f, fParam2, 0f};
		}
		else if (iParam0 == 2) {
			vVar0 = {fParam2, 0f, 0f};
		}
		else if (iParam0 == 0) {
			vVar0 = {0f, -fParam2, 0f};
		}
		else if (iParam0 == 1) {
			vVar0 = {-fParam2, 0f, 0f};
		}
		break;

	case 2:
		if (iParam0 == 2) {
			vVar0 = {0f, fParam2, 0f};
		}
		else if (iParam0 == 3) {
			vVar0 = {fParam2, 0f, 0f};
		}
		else if (iParam0 == 1) {
			vVar0 = {0f, -fParam2, 0f};
		}
		else if (iParam0 == 0) {
			vVar0 = {-fParam2, 0f, 0f};
		}
		break;

	case 3:
		if (iParam0 == 1) {
			vVar0 = {0f, fParam2, 0f};
		}
		else if (iParam0 == 0) {
			vVar0 = {fParam2, 0f, 0f};
		}
		else if (iParam0 == 2) {
			vVar0 = {0f, -fParam2, 0f};
		}
		else if (iParam0 == 3) {
			vVar0 = {-fParam2, 0f, 0f};
		}
		break;

	case 5:
		if (iParam0 == 1) {
			vVar0 = {fParam2, fParam2, 0f};
		}
		else if (iParam0 == 0) {
			vVar0 = {-fParam2, fParam2, 0f};
		}
		else if (iParam0 == 3) {
			vVar0 = {fParam2, -fParam2, 0f};
		}
		else if (iParam0 == 2) {
			vVar0 = {-fParam2, -fParam2, 0f};
		}
		break;

	case 6:
		if (iParam0 == 0) {
			vVar0 = {fParam2, fParam2, 0f};
		}
		else if (iParam0 == 2) {
			vVar0 = {-fParam2, fParam2, 0f};
		}
		else if (iParam0 == 1) {
			vVar0 = {fParam2, -fParam2, 0f};
		}
		else if (iParam0 == 3) {
			vVar0 = {-fParam2, -fParam2, 0f};
		}
		break;

	case 7:
		if (iParam0 == 3) {
			vVar0 = {fParam2, fParam2, 0f};
		}
		else if (iParam0 == 1) {
			vVar0 = {-fParam2, fParam2, 0f};
		}
		else if (iParam0 == 2) {
			vVar0 = {fParam2, -fParam2, 0f};
		}
		else if (iParam0 == 0) {
			vVar0 = {-fParam2, -fParam2, 0f};
		}
		break;

	case 8:
		if (iParam0 == 2) {
			vVar0 = {fParam2, fParam2, 0f};
		}
		else if (iParam0 == 3) {
			vVar0 = {-fParam2, fParam2, 0f};
		}
		else if (iParam0 == 0) {
			vVar0 = {fParam2, -fParam2, 0f};
		}
		else if (iParam0 == 1) {
			vVar0 = {-fParam2, -fParam2, 0f};
		}
		break;
	}
	if (fParam2 < 0f) {
		fParam2 *= -1f;
	}
	return vVar0;
}

// Position - 0x6C5
void func_7() {
	if (entity::is_entity_at_coord(player::player_ped_id(), vLocal_47, 50f, 50f, 50f, 0, 1, 0)) {
		streaming::request_model(joaat("a_m_o_tramp_01"));
		streaming::request_model(joaat("g_m_y_strpunk_01"));
		streaming::request_anim_dict("amb@drug_dealer");
		while (!streaming::has_model_loaded(joaat("a_m_o_tramp_01")) ||
			   !streaming::has_model_loaded(joaat("g_m_y_strpunk_01")) ||
			   !streaming::has_anim_dict_loaded("amb@drug_dealer")) {
			system::wait(0);
		}
		ped::add_relationship_group("homeless", &iLocal_53);
		vLocal_50.z = vLocal_47.z - 1f;
		iLocal_54 = ped::create_ped(19, joaat("a_m_o_tramp_01"), vLocal_47.x, vLocal_47.y, vLocal_50.z, 0f, 1, 1);
		ped::set_ped_relationship_group_hash(iLocal_54, iLocal_53);
		if (iLocal_44 == 1) {
			vLocal_50 = {entity::get_offset_from_entity_in_world_coords(iLocal_54, 0.8f, 0.8f, -1f)};
			iLocal_55 = ped::create_ped(5, joaat("g_m_y_strpunk_01"), vLocal_50, 0f, 1, 1);
			ped::add_relationship_group("homeless", &iLocal_53);
			ped::set_ped_relationship_group_hash(iLocal_55, iLocal_53);
			if (!entity::is_entity_dead(iLocal_54, 0)) {
				ai::open_sequence_task(&iLocal_57);
				ai::task_turn_ped_to_face_coord(0, vLocal_50, 0);
				ai::task_play_anim(0, "amb@drug_dealer", "beckon_01", 8f, -8f, -1, 0, 0, 0, 0, 0);
				ai::close_sequence_task(iLocal_57);
				ai::task_perform_sequence(iLocal_54, iLocal_57);
				ai::clear_sequence_task(&iLocal_57);
			}
			if (!entity::is_entity_dead(iLocal_55, 0)) {
				ai::open_sequence_task(&iLocal_57);
				ai::task_turn_ped_to_face_coord(0, vLocal_47, 0);
				ai::task_play_anim(0, "amb@drug_dealer", "beckon_02", 8f, -8f, -1, 0, 0, 0, 0, 0);
				ai::close_sequence_task(iLocal_57);
				ai::task_perform_sequence(iLocal_55, iLocal_57);
				ai::clear_sequence_task(&iLocal_57);
			}
		}
		iLocal_45 = 1;
	}
}

// Position - 0x843
bool func_8(int iParam0) {
	switch (iParam0) {
	case 0: return true;

	case 1:
		if (func_26(6) || func_26(7)) {
			return true;
		}
		else {
			return func_8(3);
		}
		break;

	case 2: return true;

	case 3:
		if (func_24(5)) {
			if (func_9(4)) {
				return true;
			}
		}
		break;
	}
	return false;
}

// Position - 0x8B5
bool func_9(int iParam0) {
	int iVar0;

	if (player::is_player_playing(player::player_id())) {
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				iVar0 = func_20();
				if (!func_19(iVar0)) {
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_18() || Global_100747 ||
						Global_25192 || func_17() || func_16(8, -1) || func_15() || func_14() || func_13() ||
						func_12() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 1:
					if (player::is_player_being_arrested(player::player_id(), 1) || func_18() || Global_25192 ||
						func_17() || func_16(8, -1) || func_13() || func_15() || func_14() || func_12() ||
						Global_101700.f_6647.f_919[iVar0] == 5) {
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_18() || Global_100747 ||
						Global_25192 || func_17() || func_16(8, -1) || func_13() || func_15() || func_14() ||
						func_12() || Global_101700.f_6647.f_919[iVar0] == 5 || Global_36328 != -1) {
						return false;
					}
					break;

				case 3:
					if (ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_18() || Global_100747 ||
						Global_25192 || func_17() || func_16(8, -1) || func_15() || func_14() || func_12() ||
						Global_101700.f_6647.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 4:
					if (func_18() || player::get_player_wanted_level(player::player_id()) > 0 || func_16(8, -1) ||
						func_12() || func_11() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 5:
					if (func_16(8, -1) || func_15() || func_14() || func_11() || func_10()) {
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
							player::is_player_climbing(player::player_id()) || func_18() || Global_25192 || func_17() ||
							func_16(8, -1) || func_14() || func_13() || func_12() ||
							Global_101700.f_6647.f_919[iVar0] == 5) {
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
						player::is_player_being_arrested(player::player_id(), 1) || func_18() || func_14() ||
						Global_100747 || Global_25192 || func_17() || Global_36912 || func_16(8, -1) || func_13() ||
						func_11() || func_12() || Global_101700.f_6647.f_919[iVar0] == 5) {
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
						player::is_player_climbing(player::player_id()) || func_18() || Global_100747 || Global_25192 ||
						func_17() || func_16(8, -1) || func_13() || func_11() || func_15() || func_14() || func_12()) {
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

// Position - 0xFD2
var func_10() { return Global_91530.f_1; }

// Position - 0xFE0
int func_11() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 13);
	}
	return 0;
}

// Position - 0x1006
int func_12() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("player_timetable_scene")) > 0) {
		return 1;
	}
	return 0;
}

// Position - 0x1020
int func_13() {
	if (Global_69962) {
		return 1;
	}
	else if (Global_55816 && !Global_55822) {
		return 1;
	}
	return 0;
}

// Position - 0x104A
bool func_14() { return Global_91543.f_304 > 0; }

// Position - 0x105B
bool func_15() { return Global_91543.f_303 > 0; }

// Position - 0x106C
var func_16(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x10A7
var func_17() { return Global_1315233; }

// Position - 0x10B3
int func_18() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0x10CF
bool func_19(int iParam0) { return iParam0 < 3; }

// Position - 0x10DB
var func_20() {
	func_21();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x10F4
void func_21() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_23(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_22(player::player_ped_id());
			if (func_19(iVar0) && (!func_26(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_19(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x11F1
int func_22(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_23(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x122E
int func_23(int iParam0) {
	if (func_19(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x1258
bool func_24(int iParam0) { return func_25(iParam0, Global_35781); }

// Position - 0x1269
int func_25(int iParam0, int iParam1) {
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

// Position - 0x144A
bool func_26(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x1458
void func_27() { script::terminate_this_thread(); }
