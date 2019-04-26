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
var uLocal_49[4] = {0, 0, 0, 0};
int iLocal_54 = 0;
var uLocal_55[4] = {0, 0, 0, 0};
int iLocal_60 = 0;
vector3 vLocal_61[4] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
vector3 vLocal_74 = {0f, 0f, 0f};
int iLocal_77 = 0;
bool bLocal_78 = 0;
int iLocal_79 = 0;
int iLocal_80 = 0;
int iLocal_81 = 0;
bool bLocal_82 = 0;
int iLocal_83 = 0;
int iLocal_84 = 0;
float fLocal_85 = 0f;
float fLocal_86 = 0f;
int iLocal_87 = 0;
int iLocal_88 = 0;
int iLocal_89 = 0;
int iLocal_90 = 0;
var uLocal_91 = 0;
var uLocal_92 = 0;
var uLocal_93 = 0;
var uLocal_94 = 0;
bool bLocal_95 = 0;
var uLocal_96 = 0;
int iLocal_97 = 0;
int iLocal_98 = 0;
int iLocal_99 = 0;
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
	bLocal_78 = true;
	iLocal_84 = joaat("s_m_m_pilot_01");
	iLocal_99 = 500;
	if (player::has_force_cleanup_occurred(3)) {
		func_12();
	}
	iLocal_97 = player::player_ped_id();
	while (true) {
		if (entity::is_entity_dead(iLocal_97, 0)) {
			iLocal_98 = 5;
		}
		switch (iLocal_98) {
		case 0: iLocal_98 = 1; break;

		case 1:
			func_11();
			iLocal_98 = 2;
			break;

		case 2:
			if (func_10()) {
				iLocal_98 = 3;
			}
			break;

		case 3:
			func_9();
			iLocal_98 = 4;
			break;

		case 4:
			if (Global_88752) {
				iLocal_98 = 5;
			}
			func_4();
			break;

		case 5:
			func_1();
			func_12();
			break;
		}
		system::wait(iLocal_99);
	}
}

// Position - 0x11A
void func_1() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4) {
		if (entity::does_entity_exist(uLocal_49[iVar0])) {
			if (entity::is_entity_occluded(uLocal_49[iVar0]) ||
				!entity::is_entity_dead(uLocal_49[iVar0], 0) && !entity::is_entity_visible(uLocal_49[iVar0])) {
				vehicle::delete_vehicle(&uLocal_49[iVar0]);
				ped::delete_ped(&uLocal_55[iVar0]);
			}
			else {
				if (iVar0 == 0 || iVar0 == 2) {
					func_3(1);
				}
				func_2(&uLocal_49[iVar0], &uLocal_55[iVar0]);
				entity::set_vehicle_as_no_longer_needed(&uLocal_49[iVar0]);
				entity::set_ped_as_no_longer_needed(&uLocal_55[iVar0]);
			}
		}
		iVar0++;
	}
	if (entity::does_entity_exist(iLocal_54)) {
		if (entity::is_entity_occluded(iLocal_54)) {
			vehicle::delete_vehicle(&iLocal_54);
			ped::delete_ped(&iLocal_60);
		}
		else {
			func_2(&iLocal_54, &iLocal_60);
			entity::set_vehicle_as_no_longer_needed(&iLocal_54);
			entity::set_ped_as_no_longer_needed(&iLocal_60);
		}
	}
	if (bLocal_82) {
		vehicle::remove_vehicle_recording(101, "AirportJetTakeOff");
		vehicle::remove_vehicle_recording(102, "AirportJetTakeOff");
		vehicle::remove_vehicle_recording(101, "AirportNew");
		vehicle::remove_vehicle_recording(102, "AirportNew");
		vehicle::remove_vehicle_recording(103, "AirplaneLandingRedux");
		vehicle::remove_vehicle_recording(104, "AirplaneLandingRedux");
		vehicle::remove_vehicle_recording(101, "EastWestFlight");
	}
}

// Position - 0x233
void func_2(int iParam0, var *uParam1) {
	if (entity::does_entity_exist(*iParam0) && entity::does_entity_exist(*uParam1) &&
		!entity::is_entity_dead(*iParam0, 0) && !entity::is_entity_dead(*uParam1, 0)) {
		if (entity::is_entity_in_air(*iParam0)) {
			if (vehicle::is_playback_going_on_for_vehicle(*iParam0)) {
				if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
					ai::task_plane_mission(*uParam1, *iParam0, 0, 0,
										   entity::get_entity_coords(player::player_ped_id(), 1), 8, 50f, -1f, 30f, 100,
										   50);
				}
			}
		}
	}
}

// Position - 0x2B3
void func_3(int iParam0) {
	if (bLocal_78) {
		if (entity::does_entity_exist(uLocal_49[0]) && !entity::is_entity_dead(uLocal_49[0], 0)) {
			if (entity::is_entity_in_air(uLocal_49[0])) {
				if (!vehicle::is_playback_going_on_for_vehicle(uLocal_49[0])) {
					if (!ped::is_ped_injured(player::player_ped_id()) && !entity::is_entity_dead(uLocal_55[0], 0) &&
						!entity::is_entity_dead(uLocal_49[0], 0)) {
						ai::task_plane_mission(uLocal_55[0], uLocal_49[0], 0, 0,
											   entity::get_entity_coords(player::player_ped_id(), 1), 8, 50f, -1f, 90f,
											   100, 50);
					}
				}
				else if (iParam0) {
					if (!ped::is_ped_injured(player::player_ped_id()) && !entity::is_entity_dead(uLocal_55[0], 0) &&
						!entity::is_entity_dead(uLocal_49[0], 0)) {
						ai::task_plane_mission(uLocal_55[0], uLocal_49[0], 0, 0,
											   entity::get_entity_coords(player::player_ped_id(), 1), 8, 50f, -1f, 90f,
											   100, 50);
					}
				}
			}
		}
		if (entity::does_entity_exist(uLocal_49[2]) && !entity::is_entity_dead(uLocal_49[2], 0)) {
			if (entity::is_entity_in_air(uLocal_49[2])) {
				if (!vehicle::is_playback_going_on_for_vehicle(uLocal_49[2])) {
					if (!ped::is_ped_injured(player::player_ped_id()) && !entity::is_entity_dead(uLocal_55[2], 0) &&
						!entity::is_entity_dead(uLocal_49[2], 0)) {
						ai::task_plane_mission(uLocal_55[2], uLocal_49[2], 0, 0,
											   entity::get_entity_coords(player::player_ped_id(), 1), 8, 50f, -1f, 90f,
											   100, 50);
					}
				}
				else if (iParam0) {
					if (!ped::is_ped_injured(player::player_ped_id()) && !entity::is_entity_dead(uLocal_55[2], 0) &&
						!entity::is_entity_dead(uLocal_49[2], 0)) {
						ai::task_plane_mission(uLocal_55[2], uLocal_49[2], 0, 0,
											   entity::get_entity_coords(player::player_ped_id(), 1), 8, 50f, -1f, 90f,
											   100, 50);
					}
				}
			}
		}
	}
}

// Position - 0x48E
void func_4() {
	int iVar0;

	switch (iLocal_88) {
	case 0:
		vLocal_61[0 /*3*/] = {-1542.113f, -3023.802f, 23.2538f};
		vLocal_61[1 /*3*/] = {-3089.888f, -1960.075f, 313.559f};
		vLocal_61[2 /*3*/] = {-1037.638f, -3316.12f, 23.2475f};
		vLocal_61[3 /*3*/] = {451.174f, -4009.46f, 135.1171f};
		vLocal_74 = {-1612.174f, -2688.442f, 12.9444f};
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (ped::is_ped_in_any_heli(player::player_ped_id()) || ped::is_ped_in_any_plane(player::player_ped_id()) ||
				player::is_player_wanted_level_greater(player::player_id(), 0)) {
				bLocal_78 = false;
			}
			else {
				bLocal_78 = true;
			}
		}
		iLocal_88 = 1;
		break;

	case 1:
		streaming::request_model(joaat("jet"));
		streaming::request_model(iLocal_84);
		vehicle::request_vehicle_recording(101, "AirportJetTakeOff");
		vehicle::request_vehicle_recording(103, "AirplaneLandingRedux");
		vehicle::request_vehicle_recording(101, "EastWestFlight");
		vehicle::request_vehicle_recording(101, "AirportNew");
		vehicle::request_vehicle_recording(104, "AirplaneLandingRedux");
		iLocal_88 = 2;
		break;

	case 2:
		if (!bLocal_82) {
			if (streaming::has_model_loaded(joaat("jet")) && streaming::has_model_loaded(iLocal_84) &&
				vehicle::has_vehicle_recording_been_loaded(101, "AirportJetTakeOff") &&
				vehicle::has_vehicle_recording_been_loaded(103, "AirplaneLandingRedux") &&
				vehicle::has_vehicle_recording_been_loaded(101, "AirportNew") &&
				vehicle::has_vehicle_recording_been_loaded(104, "AirplaneLandingRedux") &&
				vehicle::has_vehicle_recording_been_loaded(101, "EastWestFlight")) {
				bLocal_82 = true;
			}
			else {
				streaming::request_model(joaat("jet"));
				streaming::request_model(iLocal_84);
				vehicle::request_vehicle_recording(101, "AirportJetTakeOff");
				vehicle::request_vehicle_recording(102, "AirportJetTakeOff");
				vehicle::request_vehicle_recording(101, "AirportNew");
				vehicle::request_vehicle_recording(102, "AirportNew");
				vehicle::request_vehicle_recording(101, "EastWestFlight");
			}
		}
		if (bLocal_82) {
			if (!cam::is_sphere_visible(vLocal_61[0 /*3*/], 50f) && !cam::is_sphere_visible(vLocal_74, 50f)) {
				iLocal_88 = 3;
			}
			else {
				if (cam::is_sphere_visible(vLocal_61[0 /*3*/], 50f)) {
				}
				if (cam::is_sphere_visible(vLocal_74, 50f)) {
				}
			}
		}
		break;

	case 3:
		uLocal_49[0] = vehicle::create_vehicle(joaat("jet"), vLocal_61[0 /*3*/], 0f, 1, 1);
		entity::set_entity_heading(uLocal_49[0], 240.3179f);
		vehicle::_0x279D50DE5652D935(uLocal_49[0], 0);
		uLocal_49[1] = vehicle::create_vehicle(joaat("jet"), vLocal_61[1 /*3*/], 0f, 1, 1);
		vehicle::_0x279D50DE5652D935(uLocal_49[1], 0);
		uLocal_49[2] = vehicle::create_vehicle(joaat("jet"), vLocal_61[2 /*3*/], 0f, 1, 1);
		vehicle::_0x279D50DE5652D935(uLocal_49[2], 0);
		uLocal_49[3] = vehicle::create_vehicle(joaat("jet"), vLocal_61[3 /*3*/], 0f, 1, 1);
		vehicle::_0x279D50DE5652D935(uLocal_49[3], 0);
		iVar0 = 0;
		while (iVar0 < 4) {
			if (entity::does_entity_exist(uLocal_49[iVar0])) {
				uLocal_55[iVar0] = ped::create_ped_inside_vehicle(uLocal_49[iVar0], 4, iLocal_84, -1, 1, 1);
				entity::set_entity_lod_dist(uLocal_49[iVar0], 1000);
				vehicle::set_vehicle_engine_on(uLocal_49[iVar0], 1, 1, 0);
				ped::set_blocking_of_non_temporary_events(uLocal_55[iVar0], 1);
			}
			iVar0++;
		}
		func_8(&uLocal_49[1], &uLocal_55[1]);
		func_8(&uLocal_49[2], &uLocal_55[2]);
		func_8(&uLocal_49[3], &uLocal_55[3]);
		if (bLocal_78) {
			if (entity::does_entity_exist(uLocal_49[0])) {
				if (vehicle::has_vehicle_recording_been_loaded(101, "AirportJetTakeOff")) {
					vehicle::start_playback_recorded_vehicle_with_flags(uLocal_49[0], 101, "AirportJetTakeOff", 2, 5,
																		786603);
					iLocal_77 = 1;
				}
				else {
					vehicle::request_vehicle_recording(101, "AirportJetTakeOff");
				}
			}
		}
		iLocal_88 = 4;
		break;

	case 4:
		if (iLocal_81) {
			if (entity::does_entity_exist(uLocal_49[3]) && !entity::is_entity_dead(uLocal_49[3], 0)) {
				if (entity::is_entity_occluded(uLocal_49[3])) {
					if (!iLocal_79) {
						func_8(&uLocal_49[3], &uLocal_55[3]);
						iLocal_79 = 1;
					}
				}
			}
		}
		func_3(0);
		func_7();
		switch (iLocal_87) {
		case 0:
			if (!iLocal_77) {
				if (bLocal_78) {
					if (entity::does_entity_exist(uLocal_49[0]) && !entity::is_entity_dead(uLocal_49[0], 0)) {
						if (entity::is_entity_occluded(uLocal_49[0]) &&
							!cam::is_sphere_visible(vLocal_61[0 /*3*/], 50f)) {
							if (vehicle::has_vehicle_recording_been_loaded(101, "AirportJetTakeOff")) {
								vehicle::start_playback_recorded_vehicle_with_flags(uLocal_49[0], 101,
																					"AirportJetTakeOff", 2, 5, 786603);
								iLocal_77 = 1;
							}
							else {
								vehicle::request_vehicle_recording(101, "AirportJetTakeOff");
							}
						}
					}
				}
			}
			if (iLocal_77) {
				if (entity::does_entity_exist(uLocal_49[0]) && !entity::is_entity_dead(uLocal_49[0], 0)) {
					if (vehicle::is_playback_going_on_for_vehicle(uLocal_49[0])) {
						fLocal_85 = vehicle::get_position_in_recording(uLocal_49[0]);
					}
				}
				if (fLocal_85 > 1100f) {
					iLocal_87 = 1;
				}
			}
			break;

		case 1:
			if (entity::does_entity_exist(uLocal_49[1]) && !entity::is_entity_dead(uLocal_49[1], 0)) {
				if (bLocal_78) {
					if (entity::is_entity_occluded(uLocal_49[1])) {
						if (iLocal_81) {
							if (iLocal_79) {
								func_6(&uLocal_49[1], &uLocal_55[1]);
								if (vehicle::has_vehicle_recording_been_loaded(103, "AirplaneLandingRedux")) {
									vehicle::start_playback_recorded_vehicle_with_flags(
										uLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
									iLocal_80 = 0;
									iLocal_87 = 2;
								}
								else {
									vehicle::request_vehicle_recording(103, "AirplaneLandingRedux");
								}
							}
						}
						else {
							func_6(&uLocal_49[1], &uLocal_55[1]);
							if (vehicle::has_vehicle_recording_been_loaded(103, "AirplaneLandingRedux")) {
								vehicle::start_playback_recorded_vehicle_with_flags(
									uLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
								iLocal_80 = 0;
								iLocal_87 = 2;
							}
							else {
								vehicle::request_vehicle_recording(103, "AirplaneLandingRedux");
							}
						}
					}
				}
			}
			break;

		case 2:
			if (entity::does_entity_exist(uLocal_49[1]) && !entity::is_entity_dead(uLocal_49[1], 0)) {
				if (!vehicle::is_playback_going_on_for_vehicle(uLocal_49[1])) {
					iLocal_87 = 3;
				}
			}
			break;

		case 3:
			if (entity::does_entity_exist(uLocal_49[2]) && !entity::is_entity_dead(uLocal_49[2], 0)) {
				if (vehicle::has_vehicle_recording_been_loaded(101, "AirportNew")) {
					if (!cam::is_sphere_visible(vLocal_61[2 /*3*/], 50f)) {
						if (!vehicle::is_playback_going_on_for_vehicle(uLocal_49[2])) {
							func_6(&uLocal_49[2], &uLocal_55[2]);
							vehicle::start_playback_recorded_vehicle(uLocal_49[2], 101, "AirportNew", 1);
							iLocal_87 = 4;
						}
					}
				}
			}
			break;

		case 4:
			if (entity::does_entity_exist(uLocal_49[2]) && !entity::is_entity_dead(uLocal_49[2], 0)) {
				if (vehicle::is_playback_going_on_for_vehicle(uLocal_49[2])) {
					fLocal_86 = vehicle::get_position_in_recording(uLocal_49[2]);
				}
			}
			if (entity::does_entity_exist(uLocal_49[1]) && !entity::is_entity_dead(uLocal_49[1], 0)) {
				if (!vehicle::is_playback_going_on_for_vehicle(uLocal_49[1])) {
					if (entity::is_entity_occluded(uLocal_49[1])) {
						func_8(&uLocal_49[1], &uLocal_55[1]);
						iLocal_80 = 1;
					}
				}
			}
			if (fLocal_86 > 1100f) {
				if (entity::does_entity_exist(uLocal_49[3]) && !entity::is_entity_dead(uLocal_49[3], 0)) {
					if (vehicle::has_vehicle_recording_been_loaded(104, "AirplaneLandingRedux")) {
						if (!cam::is_sphere_visible(vLocal_61[3 /*3*/], 50f)) {
							if (!vehicle::is_playback_going_on_for_vehicle(uLocal_49[3]) && iLocal_80) {
								func_6(&uLocal_49[3], &uLocal_55[3]);
								vehicle::start_playback_recorded_vehicle(uLocal_49[3], 104, "AirplaneLandingRedux", 1);
								iLocal_87 = 5;
							}
						}
					}
				}
			}
			break;

		case 5:
			if (entity::does_entity_exist(uLocal_49[3]) && !entity::is_entity_dead(uLocal_49[3], 0)) {
				if (!vehicle::is_playback_going_on_for_vehicle(uLocal_49[3])) {
					func_5();
					iLocal_87 = 0;
				}
			}
			break;
		}
		break;
	}
}

// Position - 0xBAA
void func_5() {
	fLocal_85 = 0f;
	iLocal_77 = 0;
	iLocal_81 = 1;
	iLocal_79 = 0;
}

// Position - 0xBBE
void func_6(var *uParam0, var *uParam1) {
	entity::set_entity_visible(*uParam0, 1, 0);
	entity::set_entity_visible(*uParam1, 1, 0);
	entity::set_entity_collision(*uParam0, 1, 0);
	entity::freeze_entity_position(*uParam0, 0);
}

// Position - 0xBE9
void func_7() {
	vector3 vVar0;

	switch (iLocal_83) {
	case 0:
		if (!entity::does_entity_exist(iLocal_54)) {
			iLocal_54 = vehicle::create_vehicle(joaat("jet"), -65.3177f, 15.4603f, 703.106f, 0f, 1, 1);
			entity::set_entity_lod_dist(iLocal_54, 1000);
			vehicle::set_vehicle_engine_on(iLocal_54, 1, 1, 0);
			vehicle::_0x279D50DE5652D935(iLocal_54, 0);
			iLocal_60 = ped::create_ped_inside_vehicle(iLocal_54, 4, iLocal_84, -1, 1, 1);
			ped::set_blocking_of_non_temporary_events(iLocal_60, 1);
			iLocal_83 = 1;
		}
		break;

	case 1:
		if (entity::does_entity_exist(iLocal_54) && !entity::is_entity_dead(iLocal_54, 0)) {
			if (vehicle::has_vehicle_recording_been_loaded(101, "EastWestFlight")) {
				if (!vehicle::is_playback_going_on_for_vehicle(iLocal_54)) {
					vehicle::start_playback_recorded_vehicle_with_flags(iLocal_54, 101, "EastWestFlight", 2, 5, 786603);
					iLocal_83 = 2;
				}
			}
		}
		break;

	case 2:
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
		}
		if (entity::does_entity_exist(iLocal_54) && !entity::is_entity_dead(iLocal_54, 0)) {
			if (!vehicle::is_playback_going_on_for_vehicle(iLocal_54)) {
				if (entity::is_entity_occluded(iLocal_54) &&
					!cam::is_sphere_visible(-1602.086f, -2674.039f, 12.9444f, 50f) &&
					system::vdist2(vVar0, entity::get_entity_coords(iLocal_54, 1)) > 62500f) {
					iLocal_83 = 1;
				}
			}
		}
		break;
	}
}

// Position - 0xD27
void func_8(var *uParam0, var *uParam1) {
	entity::set_entity_visible(*uParam0, 0, 0);
	entity::set_entity_visible(*uParam1, 0, 0);
	entity::set_entity_collision(*uParam0, 0, 0);
	entity::freeze_entity_position(*uParam0, 1);
}

// Position - 0xD52
void func_9() {}

// Position - 0xD5A
bool func_10() { return true; }

// Position - 0xD63
void func_11() {}

// Position - 0xD6B
void func_12() {
	func_1();
	func_13();
	script::terminate_this_thread();
}

// Position - 0xD7F
void func_13() {
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (entity::does_entity_exist(iLocal_89)) {
		if (entity::is_entity_occluded(iLocal_89)) {
			vehicle::delete_vehicle(&iLocal_89);
		}
		else if (!entity::is_entity_dead(iLocal_89, 0) && !ped::is_ped_injured(iLocal_90)) {
			vehicle::stop_playback_recorded_vehicle(iLocal_89);
			ped::set_ped_keep_task(iLocal_90, 1);
			vVar0 = {entity::get_entity_coords(iLocal_89, 1)};
			fVar9 = entity::get_entity_heading(iLocal_89);
			vVar3 = {0f, 500f, 50f};
			vVar6 = {object::_get_object_offset_from_coords(vVar0, fVar9, vVar3)};
			ai::task_heli_mission(iLocal_90, iLocal_89, 0, 0, vVar6, 4, 50f, -1f, 0f, 100, 50, -1f, 0);
		}
	}
	if (bLocal_95) {
		vehicle::remove_vehicle_recording(102, "HelicopterTakeOff");
	}
}
