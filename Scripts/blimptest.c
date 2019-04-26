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
int *iLocal_42 = NULL;
int iLocal_43 = 0;
int iLocal_44 = 0;
int iLocal_45 = 0;
int iLocal_46 = 0;
int iLocal_47 = 0;
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
	iLocal_41 = joaat("blimp");
	iLocal_44 = joaat("s_m_m_pilot_02");
	iLocal_46 = joaat("buzzard");
	if (cam::is_screen_faded_out()) {
		cam::do_screen_fade_in(500);
	}
	if (player::has_force_cleanup_occurred(18)) {
		func_18();
	}
	player::set_max_wanted_level(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true) {
		ui::set_text_colour(255, 255, 255, 255);
		ui::set_text_scale(0.75f, 0.9f);
		ui::set_text_wrap(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		ui::set_text_colour(255, 255, 255, 255);
		ui::set_text_scale(0.4f, 0.45f);
		ui::set_text_wrap(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		system::wait(0);
	}
}

// Position - 0x116
void func_1() {
	vector3 vVar0;

	if (entity::does_entity_exist(iLocal_40)) {
		if (entity::is_entity_dead(iLocal_40, 0) || entity::get_entity_health(iLocal_40) <= 0 ||
			vehicle::get_vehicle_engine_health(iLocal_40) <= 0f) {
			func_9(&iLocal_42);
			if (vehicle::is_playback_going_on_for_vehicle(iLocal_40)) {
				vehicle::stop_playback_recorded_vehicle(iLocal_40);
			}
			if (iLocal_47 == 1) {
				vVar0 = {entity::get_entity_coords(iLocal_40, 0)};
				func_8(vVar0);
			}
			if (iLocal_47 == 1) {
				func_7(&iLocal_43);
				func_4(&iLocal_40);
			}
			else {
				func_3(&iLocal_43, 1, 0, 1);
				func_2(&iLocal_40);
			}
		}
		else if (vehicle::is_playback_going_on_for_vehicle(iLocal_40)) {
			vehicle::set_playback_speed(iLocal_40, 0.25f);
		}
	}
}

// Position - 0x1B6
void func_2(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		entity::is_entity_dead(*iParam0, 0);
		if (entity::is_entity_a_mission_entity(*iParam0) && entity::does_entity_belong_to_this_script(*iParam0, 1)) {
			entity::set_vehicle_as_no_longer_needed(iParam0);
		}
	}
}

// Position - 0x1EE
void func_3(int iParam0, int iParam1, int iParam2, int iParam3) {
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

// Position - 0x23D
void func_4(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		if (!entity::is_entity_a_mission_entity(*iParam0)) {
			entity::set_entity_as_mission_entity(*iParam0, 1, 0);
		}
		if (func_6(*iParam0)) {
			if (entity::is_entity_a_mission_entity(*iParam0) &&
				entity::does_entity_belong_to_this_script(*iParam0, 1)) {
				if (func_5(player::player_ped_id())) {
					if (ped::is_ped_in_vehicle(player::player_ped_id(), *iParam0, 0)) {
						entity::set_vehicle_as_no_longer_needed(iParam0);
						return;
					}
				}
				vehicle::delete_vehicle(iParam0);
			}
		}
		else {
			if (func_5(player::player_ped_id())) {
				if (ped::is_ped_in_vehicle(player::player_ped_id(), *iParam0, 0)) {
					entity::set_vehicle_as_no_longer_needed(iParam0);
					return;
				}
			}
			vehicle::delete_vehicle(iParam0);
		}
	}
}

// Position - 0x2D9
bool func_5(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x2FA
bool func_6(int iParam0) {
	if (func_5(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (!fire::is_entity_on_fire(iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x324
void func_7(int iParam0) {
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

// Position - 0x364
void func_8(vector3 vParam0) {
	int iVar0;
	int iVar1;
	vector3 vVar2[12];

	iVar1 = 12;
	vVar2[0 /*3*/] = {5f, 0f, 0f};
	vVar2[1 /*3*/] = {0f, 5f, 0f};
	vVar2[2 /*3*/] = {0f, 0f, 5f};
	vVar2[3 /*3*/] = {5f, 5f, 0f};
	vVar2[4 /*3*/] = {5f, 0f, 5f};
	vVar2[5 /*3*/] = {0f, 5f, 5f};
	vVar2[6 /*3*/] = {20f, 0f, 0f};
	vVar2[7 /*3*/] = {0f, 20f, 0f};
	vVar2[8 /*3*/] = {0f, 0f, 20f};
	vVar2[9 /*3*/] = {20f, 20f, 0f};
	vVar2[10 /*3*/] = {20f, 0f, 20f};
	vVar2[11 /*3*/] = {0f, 20f, 20f};
	fire::add_explosion(vParam0, 8, 1f, 1, 0, 1f, 0);
	iVar0 = 0;
	while (iVar0 <= iVar1 - 1) {
		fire::add_explosion(vParam0 + vVar2[iVar0 /*3*/], 8, 1f, 1, 0, 1f, 0);
		iVar0++;
	}
}

// Position - 0x45A
void func_9(int *iParam0) {
	if (ui::does_blip_exist(*iParam0)) {
		ui::set_blip_route(*iParam0, 0);
		ui::remove_blip(iParam0);
	}
}

// Position - 0x47A
void func_10(float fParam0, float fParam1, char *sParam2, int iParam3) {
	ui::begin_text_command_display_text(sParam2);
	ui::end_text_command_display_text(fParam0, fParam1, iParam3);
}

// Position - 0x492
void func_11() {
	func_2(&iLocal_45);
	streaming::request_model(iLocal_46);
	while (!streaming::has_model_loaded(iLocal_46)) {
		system::wait(0);
	}
	if (func_6(iLocal_40)) {
		iLocal_45 = vehicle::create_vehicle(
			iLocal_46, entity::get_offset_from_entity_in_world_coords(iLocal_40, 50f, 0f, 15f), 0f, 1, 1);
		vehicle::set_heli_blades_full_speed(iLocal_45);
		func_12(iLocal_45, iLocal_40);
		if (func_5(player::player_ped_id())) {
			ped::set_ped_into_vehicle(player::player_ped_id(), iLocal_45, -1);
			cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
			cam::set_gameplay_cam_relative_heading(0f);
			gameplay::clear_area(entity::get_entity_coords(player::player_ped_id(), 1), 500f, 1, 0, 0, 0);
		}
	}
	streaming::set_model_as_no_longer_needed(iLocal_46);
}

// Position - 0x52C
void func_12(int iParam0, int iParam1) {
	float fVar0;

	fVar0 = func_13(entity::get_entity_coords(iParam0, 1), entity::get_entity_coords(iParam1, 1), 1);
	entity::set_entity_heading(iParam0, fVar0);
}

// Position - 0x551
float func_13(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5, int iParam6) {
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = Param3 - Param0;
	fVar2 = Param3.f_1 - Param0.f_1;
	if (fVar2 != 0f) {
		fVar0 = gameplay::atan2(fVar1, fVar2);
	}
	else if (fVar1 < 0f) {
		fVar0 = -90f;
	}
	else {
		fVar0 = 90f;
	}
	if (iParam6 == 1) {
		fVar0 *= -1f;
		if (fVar0 < 0f) {
			fVar0 += 360f;
		}
	}
	return fVar0;
}

// Position - 0x5B6
void func_14() {
	func_9(&iLocal_42);
	if (func_6(iLocal_40)) {
		iLocal_42 = func_15(iLocal_40, 1, 5);
	}
}

// Position - 0x5D7
int func_15(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = 0;
	if (func_5(iParam0)) {
		iVar0 = ui::add_blip_for_entity(iParam0);
		ui::set_blip_as_friendly(iVar0, iParam1);
		ui::set_blip_priority(iVar0, iParam2);
		ui::set_blip_scale(iVar0, 1f);
	}
	return iVar0;
}

// Position - 0x60C
void func_16() {
	streaming::request_model(iLocal_44);
	while (!streaming::has_model_loaded(iLocal_44)) {
		system::wait(0);
	}
	if (func_6(iLocal_40)) {
		iLocal_43 = ped::create_ped_inside_vehicle(iLocal_40, 26, iLocal_44, -1, 1, 1);
		if (func_5(iLocal_43)) {
			ped::set_blocking_of_non_temporary_events(iLocal_43, 1);
			ped::set_ped_config_flag(iLocal_43, 118, 0);
			ped::set_ped_config_flag(iLocal_43, 29, 0);
			ped::set_ped_config_flag(iLocal_43, 116, 0);
		}
	}
	if (func_6(iLocal_40)) {
		vehicle::start_playback_recorded_vehicle(iLocal_40, 1, "Blimp_City", 1);
	}
	streaming::set_model_as_no_longer_needed(iLocal_44);
}

// Position - 0x689
void func_17() {
	vector3 vVar0;

	if (func_6(iLocal_40) && vehicle::is_playback_going_on_for_vehicle(iLocal_40)) {
		vehicle::stop_playback_recorded_vehicle(iLocal_40);
	}
	func_9(&iLocal_42);
	func_7(&iLocal_43);
	func_4(&iLocal_40);
	streaming::request_model(iLocal_41);
	vehicle::request_vehicle_recording(1, "Blimp_City");
	while (!streaming::has_model_loaded(iLocal_41) || !vehicle::has_vehicle_recording_been_loaded(1, "Blimp_City")) {
		system::wait(0);
	}
	vVar0 = {vehicle::_0xF0F2103EFAF8CBA7(vehicle::get_vehicle_recording_id(1, "Blimp_City"), 0f)};
	iLocal_40 = vehicle::create_vehicle(
		iLocal_41, vehicle::_0x92523B76657A517D(vehicle::get_vehicle_recording_id(1, "Blimp_City"), 0f), vVar0.z, 1, 1);
	streaming::set_model_as_no_longer_needed(iLocal_41);
}

// Position - 0x71E
void func_18() {
	if (func_6(iLocal_40) && vehicle::is_playback_going_on_for_vehicle(iLocal_40)) {
		vehicle::stop_playback_recorded_vehicle(iLocal_40);
	}
	vehicle::remove_vehicle_recording(1, "Blimp_city");
	func_9(&iLocal_42);
	func_3(&iLocal_43, 1, 0, 1);
	func_2(&iLocal_40);
	func_2(&iLocal_45);
	streaming::set_model_as_no_longer_needed(iLocal_44);
	streaming::set_model_as_no_longer_needed(iLocal_41);
	streaming::set_model_as_no_longer_needed(iLocal_46);
	player::set_max_wanted_level(6);
	script::terminate_this_thread();
}
