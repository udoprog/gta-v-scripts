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
int *iLocal_40 = NULL;
int *iLocal_41 = NULL;
int *iLocal_42 = NULL;
int iLocal_43 = 0;
char *sLocal_44 = NULL;
char *sLocal_45 = NULL;
int iLocal_46 = 0;
int iLocal_47 = 0;
int iLocal_48 = 0;
vector3 vLocal_49 = {0f, 0f, 0f};
vector3 vLocal_52 = {0f, 0f, 0f};
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
	sLocal_44 = "RCMBarryLeadInOut";
	sLocal_45 = "idle";
	vLocal_49 = {189.5964f, -956.0344f, 29.5771f};
	vLocal_52 = {190.2424f, -956.379f, 28.63f};
	controls::disable_control_action(0, 26, 1);
	if (func_24(player::player_ped_id())) {
		if (player::get_player_wanted_level(player::player_id()) != 0) {
			player::set_player_wanted_level(player::player_id(), 0, 0);
		}
	}
	if (player::has_force_cleanup_occurred(83)) {
		func_21(0);
	}
	streaming::request_anim_dict(sLocal_44);
	ui::request_additional_text("BARY1", 7);
	while (!streaming::has_anim_dict_loaded(sLocal_44) || !ui::has_additional_text_loaded(7)) {
		controls::disable_control_action(0, 26, 1);
		system::wait(0);
	}
	controls::disable_control_action(0, 26, 1);
	func_24(player::player_ped_id());
	iLocal_46 = gameplay::get_game_timer() + 13000;
	iLocal_47 = gameplay::get_random_int_in_range(0, 5);
	func_18();
	while (!func_13(&iLocal_43, 49, vLocal_52, func_17(1.12f), 0)) {
		controls::disable_control_action(0, 26, 1);
		system::wait(0);
	}
	controls::disable_control_action(0, 26, 1);
	func_12();
	iLocal_48 = gameplay::get_game_timer() + 1000;
	controls::disable_control_action(0, 26, 1);
	while (true) {
		func_24(player::player_ped_id());
		if (gameplay::get_game_timer() < iLocal_48) {
			controls::disable_control_action(0, 26, 1);
		}
		func_11();
		if (!func_24(iLocal_43)) {
			func_21(0);
		}
		if (func_3()) {
		}
		if (func_2(player::player_ped_id(), vLocal_52, 1) > 70f) {
			func_1(&iLocal_40, 0);
			func_1(&iLocal_41, 0);
			func_1(&iLocal_42, 0);
			func_21(0);
		}
		system::wait(0);
	}
}

// Position - 0x1D9
void func_1(int *iParam0, int iParam1) {
	if (entity::does_entity_exist(*iParam0)) {
		if (entity::is_entity_attached_to_any_ped(*iParam0)) {
			entity::detach_entity(*iParam0, 1, 1);
		}
		if (!iParam1) {
			entity::set_object_as_no_longer_needed(iParam0);
		}
		else {
			object::_mark_object_for_deletion(*iParam0);
		}
	}
}

// Position - 0x214
float func_2(int iParam0, vector3 vParam1, int iParam4) {
	vector3 vVar0;

	if (!entity::is_entity_dead(iParam0, 0)) {
		vVar0 = {entity::get_entity_coords(iParam0, 1)};
	}
	else {
		vVar0 = {entity::get_entity_coords(iParam0, 0)};
	}
	return gameplay::get_distance_between_coords(vVar0, vParam1, iParam4);
}

// Position - 0x24E
bool func_3() {
	var *uVar0;

	if (func_10(player::player_ped_id()) && func_10(iLocal_43) && !func_9() && gameplay::get_game_timer() > iLocal_46 &&
		func_8(player::player_ped_id(), iLocal_43, 1) < 20f && !gameplay::get_mission_flag()) {
		uVar0 = 16;
		func_7(&uVar0, 0, iLocal_43, "BARRY", 0, 1);
		func_4(&uVar0, "BARY1AU", func_6(), 7, 0, 0);
		iLocal_46 = gameplay::get_game_timer() + gameplay::get_random_int_in_range(12000, 18000);
		return true;
	}
	return false;
}

// Position - 0x2DE
void func_4(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5) {
	func_5(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7) {
		if (iParam3 < 12) {
			iParam3 = 7;
		}
	}
	gameplay::set_bit(&Global_14611, 0);
	Global_15748 = iParam3;
	StringCopy(&Global_15735, sParam2, 24);
}

// Position - 0x319
void func_5(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5) {
	Global_15199 = {*uParam0};
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0) {
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else {
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0) {
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else {
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

// Position - 0x36F
char *func_6() {
	char *sVar0;

	switch (iLocal_47) {
	case 0: sVar0 = "BARY1_RCMLI1"; break;

	case 1: sVar0 = "BARY1_RCMLI2"; break;

	case 2: sVar0 = "BARY1_RCMLI3"; break;

	case 3: sVar0 = "BARY1_RCMLI4"; break;

	case 4: sVar0 = "BARY1_RCMLI5"; break;
	}
	iLocal_47++;
	if (iLocal_47 > 4) {
		iLocal_47 = 0;
	}
	return sVar0;
}

// Position - 0x3D5
void func_7(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
	if ((*uParam0)[iParam1 /*10*/].f_7 == 1) {
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&(*uParam0)[iParam1 /*10*/].f_1, sParam3, 24);
	(*uParam0)[iParam1 /*10*/].f_7 = 1;
	(*uParam0)[iParam1 /*10*/].f_8 = iParam4;
	(*uParam0)[iParam1 /*10*/].f_9 = iParam5;
	if (!Global_69702) {
		if (!ped::is_ped_injured(iParam2)) {
			if ((*uParam0)[iParam1 /*10*/].f_8 == 0) {
				ped::set_ped_can_play_ambient_anims(iParam2, 0);
			}
			else {
				ped::set_ped_can_play_ambient_anims(iParam2, 1);
			}
		}
		if (!ped::is_ped_injured(iParam2)) {
			if ((*uParam0)[iParam1 /*10*/].f_9 == 0) {
				ped::set_ped_can_use_auto_conversation_lookat(iParam2, 0);
			}
			else {
				ped::set_ped_can_use_auto_conversation_lookat(iParam2, 1);
			}
		}
	}
}

// Position - 0x470
float func_8(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x4CE
int func_9() {
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return 1;
	}
	return 0;
}

// Position - 0x4F0
bool func_10(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x511
void func_11() {
	if (fire::is_explosion_in_sphere(-1, vLocal_52, 5f)) {
		if (func_10(iLocal_43)) {
			entity::freeze_entity_position(iLocal_43, 0);
			ped::apply_damage_to_ped(iLocal_43, 1000, 1);
		}
		if (func_10(iLocal_41)) {
			entity::freeze_entity_position(iLocal_41, 0);
		}
		if (func_10(iLocal_40)) {
			entity::freeze_entity_position(iLocal_40, 0);
		}
	}
}

// Position - 0x560
void func_12() {
	if (func_10(iLocal_43)) {
		if (!entity::is_entity_a_mission_entity(iLocal_43)) {
			entity::set_entity_as_mission_entity(iLocal_43, 1, 0);
		}
		ped::set_ped_prop_index(iLocal_43, 1, 0, 0, 0);
		ped::set_blocking_of_non_temporary_events(iLocal_43, 1);
		ped::set_ped_money(iLocal_43, 0);
		ped::set_ped_can_be_targetted(iLocal_43, 0);
		ped::set_ped_name_debug(iLocal_43, "POSTBARRY");
		ped::set_ped_relationship_group_hash(iLocal_43, 1862763509);
		entity::set_entity_collision(iLocal_43, 0, 0);
		entity::freeze_entity_position(iLocal_43, 1);
		entity::set_entity_coords(iLocal_43, vLocal_52, 1, 0, 0, 1);
		entity::set_entity_heading(iLocal_43, func_17(1.12f));
		entity::freeze_entity_position(iLocal_43, 1);
		ai::task_play_anim(iLocal_43, sLocal_44, sLocal_45, 8f, -8f, -1, 9, 0, 0, 0, 0);
		ai::task_look_at_entity(iLocal_43, player::player_ped_id(), -1, 0, 2);
	}
}

// Position - 0x611
int func_13(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6) {
	int iVar0;

	if (!func_16(iParam1)) {
		iVar0 = func_15(iParam1);
		streaming::request_model(iVar0);
		if (streaming::has_model_loaded(iVar0)) {
			if (entity::does_entity_exist(*iParam0)) {
				ped::delete_ped(iParam0);
			}
			*iParam0 = ped::create_ped(26, iVar0, vParam2, fParam5, 0, 0);
			ped::set_ped_default_component_variation(*iParam0);
			if (iVar0 == joaat("ig_lamardavis")) {
				if (ped::get_ped_drawable_variation(*iParam0, 3) == 0) {
					ped::set_ped_component_variation(*iParam0, 5, 2, 0, 0);
				}
			}
			func_14(*iParam0, iParam1);
			if (iParam6) {
				streaming::set_model_as_no_longer_needed(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

// Position - 0x69F
int func_14(var uParam0, int iParam1) {
	int iVar0;

	iVar0 = 7;
	if (iParam1 == 19) {
		iVar0 = 3;
	}
	else if (iParam1 == 14) {
		iVar0 = 4;
	}
	else if (iParam1 == 17) {
		iVar0 = 5;
	}
	else {
		iVar0 = 7;
		return 0;
	}
	Global_87658[iVar0 - 3] = uParam0;
	return 1;
}

// Position - 0x6E5
int func_15(int iParam0) {
	if (!func_16(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x710
bool func_16(int iParam0) { return iParam0 < 3; }

// Position - 0x71C
float func_17(float fParam0) { return fParam0 * 57.29578f; }

// Position - 0x72C
void func_18() {
	if (object::does_object_of_type_exist_at_coords(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0)) {
		iLocal_41 =
			object::get_closest_object_of_type(190.56f, -956.4f, 28.63f, 20f, joaat("prop_protest_table_01"), 0, 0, 1);
		if (func_24(iLocal_41)) {
			if (!entity::is_entity_a_mission_entity(iLocal_41)) {
				entity::set_entity_as_mission_entity(iLocal_41, 1, 0);
			}
			vLocal_49 = {189.5964f, -956.0344f, 29.54f};
			entity::set_entity_coords(iLocal_41, vLocal_49, 1, 0, 0, 1);
			entity::set_entity_heading(iLocal_41, func_17(-2.01f));
			entity::freeze_entity_position(iLocal_41, 1);
		}
	}
	if (object::does_object_of_type_exist_at_coords(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0)) {
		iLocal_40 = object::get_closest_object_of_type(190.56f, -956.4f, 28.63f, 20f, joaat("prop_chair_08"), 0, 0, 1);
		if (func_24(iLocal_40)) {
			if (!entity::is_entity_a_mission_entity(iLocal_40)) {
				entity::set_entity_as_mission_entity(iLocal_40, 1, 0);
			}
			vLocal_49 = {190.2574f, -956.3513f, 29.621f};
			entity::set_entity_coords(iLocal_40, vLocal_49, 1, 0, 0, 1);
			entity::set_entity_heading(iLocal_40, func_17(-1.68f));
			entity::freeze_entity_position(iLocal_40, 1);
		}
	}
	else {
		vLocal_49 = {190.2574f, -956.3513f, 29.621f};
		func_19(&iLocal_40, joaat("prop_chair_08"), vLocal_49, func_17(-1.68f));
		entity::set_entity_coords(iLocal_40, vLocal_49, 1, 0, 0, 1);
		entity::set_entity_heading(iLocal_40, func_17(-1.68f));
		entity::freeze_entity_position(iLocal_40, 1);
	}
	vLocal_49 = {192.4462f, -953.5946f, 29.0919f};
	if (object::does_object_of_type_exist_at_coords(vLocal_49, 25f, joaat("prop_protest_sign_01"), 0)) {
		iLocal_42 = object::get_closest_object_of_type(vLocal_49, 25f, joaat("prop_protest_sign_01"), 0, 0, 1);
		if (func_24(iLocal_42)) {
			if (!entity::is_entity_a_mission_entity(iLocal_42)) {
				entity::set_entity_as_mission_entity(iLocal_42, 1, 0);
			}
			vLocal_49.z = 29.603f;
			entity::set_entity_coords(iLocal_42, vLocal_49, 1, 0, 0, 1);
			entity::set_entity_heading(iLocal_42, 23.45f);
		}
	}
	else {
		func_19(&iLocal_42, joaat("prop_protest_sign_01"), vLocal_49, 23.45f);
		entity::set_entity_coords(iLocal_42, vLocal_49, 1, 0, 0, 1);
		entity::set_entity_heading(iLocal_42, 23.45f);
	}
}

// Position - 0x95D
void func_19(int iParam0, int iParam1, vector3 vParam2, float fParam5) {
	func_20(iParam0);
	*iParam0 = object::create_object(iParam1, vParam2, 1, 1, 0);
	entity::set_entity_heading(*iParam0, fParam5);
}

// Position - 0x984
void func_20(int *iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		if (entity::is_entity_attached_to_any_ped(*iParam0)) {
			entity::detach_entity(*iParam0, 1, 1);
		}
		object::delete_object(iParam0);
	}
}

// Position - 0x9AF
void func_21(int iParam0) {
	if (iParam0) {
		func_23(&iLocal_43);
	}
	else {
		func_22(&iLocal_43, 1, 0, 1);
	}
	if (func_10(iLocal_41)) {
		entity::freeze_entity_position(iLocal_41, 0);
	}
	if (func_10(iLocal_40)) {
		entity::freeze_entity_position(iLocal_40, 0);
	}
	if (iParam0) {
		func_20(&iLocal_40);
		func_20(&iLocal_41);
		func_20(&iLocal_42);
	}
	else {
		func_1(&iLocal_40, 0);
		func_1(&iLocal_41, 0);
		func_1(&iLocal_42, 0);
	}
	streaming::remove_anim_dict(sLocal_44);
	ui::clear_additional_text(7, 0);
	script::terminate_this_thread();
}

// Position - 0xA2D
void func_22(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (entity::does_entity_exist(*iParam0)) {
		if (!ped::is_ped_injured(*iParam0)) {
			entity::set_entity_load_collision_flag(*iParam0, 0);
			if (iParam3 == 0) {
				ai::clear_ped_secondary_task(*iParam0);
			}
			ped::set_ped_keep_task(*iParam0, iParam1);
			if (iParam2 == 1) {
				ped::set_blocking_of_non_temporary_events(*iParam0, 0);
			}
		}
		entity::set_ped_as_no_longer_needed(iParam0);
	}
}

// Position - 0xA7C
void func_23(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		if (!entity::is_entity_dead(*iParam0, 0)) {
			entity::set_entity_load_collision_flag(*iParam0, 0);
		}
		if (!entity::is_entity_a_mission_entity(*iParam0)) {
			entity::set_entity_as_mission_entity(*iParam0, 1, 0);
		}
		ped::delete_ped(iParam0);
	}
}

// Position - 0xABC
bool func_24(int iParam0) {
	if (!entity::does_entity_exist(iParam0)) {
		return false;
	}
	return !entity::is_entity_dead(iParam0, 0);
}
