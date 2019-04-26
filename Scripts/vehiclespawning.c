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
var uLocal_21 = 0;
var uLocal_22 = 0;
float fLocal_23 = 0f;
float fLocal_24 = 0f;
float fLocal_25 = 0f;
var uLocal_26 = 0;
var uLocal_27 = 0;
int iLocal_28 = 0;
float fLocal_29 = 0f;
var uLocal_30 = 0;
var uLocal_31 = 0;
var uLocal_32 = 0;
float fLocal_33 = 0f;
float fLocal_34 = 0f;
var uLocal_35[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_56 = 0;
int iLocal_57 = 0;
int iLocal_58 = 0;
int iLocal_59 = 0;
int iLocal_60 = 0;
int iLocal_61 = 0;
var uLocal_62 = 0;
float fLocal_63 = 0f;
int iLocal_64 = 0;
vector3 vLocal_65 = {0f, 0f, 0f};
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	fLocal_63 = 277.7314f;
	vLocal_65 = {-196.045f, -580.13f, 135.0004f};
	cam::do_screen_fade_out(800);
	func_19();
	while (true) {
		graphics::_0x3669F1B198DCAA4F();
		func_18();
		if (func_7() || uLocal_62) {
			func_3();
		}
		if (!iLocal_58) {
			if (!iLocal_57 && cam::is_screen_faded_out()) {
				entity::set_entity_coords(player::player_ped_id(), vLocal_65, 1, 0, 0, 1);
				entity::set_entity_heading(player::player_ped_id(), fLocal_63);
				streaming::new_load_scene_start_sphere(vLocal_65, 2500f, 0);
				cam::set_gameplay_cam_relative_heading(0f);
				iLocal_57 = 1;
			}
			else if (streaming::is_new_load_scene_active()) {
				if (!iLocal_61) {
					iLocal_61 = func_2();
				}
				else if (!iLocal_59) {
					iLocal_59 = func_1();
				}
				else {
					cam::do_screen_fade_in(800);
					iLocal_58 = 1;
				}
			}
		}
	}
}

// Position - 0x121
int func_1() {
	if (!interior::_is_interior_prop_enabled(iLocal_64, "garage_decor_01")) {
		interior::_enable_interior_prop(iLocal_64, "garage_decor_01");
	}
	else {
		interior::refresh_interior(iLocal_64);
		return 1;
	}
	return 0;
}

// Position - 0x14B
int func_2() {
	iLocal_64 = interior::get_interior_from_entity(player::player_ped_id());
	if (interior::is_valid_interior(iLocal_64)) {
		if (!iLocal_60) {
			interior::_load_interior(iLocal_64);
			iLocal_60 = 1;
		}
		else if (interior::is_interior_ready(iLocal_64)) {
			interior::unpin_interior(iLocal_64);
			return 1;
		}
	}
	return 0;
}

// Position - 0x18C
void func_3() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_56) {
		func_5(iVar0);
		iVar0++;
	}
	func_4();
}

// Position - 0x1B1
void func_4() { script::terminate_this_thread(); }

// Position - 0x1BD
void func_5(int iParam0) {
	func_6(&uLocal_35[iParam0]);
	network::reserve_network_mission_vehicles(network::get_num_reserved_mission_vehicles(0) - 1);
}

// Position - 0x1DA
void func_6(var *uParam0) {
	var uVar0;

	if (network::network_does_network_id_exist(*uParam0)) {
		if (!network::network_has_control_of_network_id(*uParam0)) {
		}
	}
	if (network::network_does_entity_exist_with_network_id(*uParam0)) {
		uVar0 = network::net_to_ent(*uParam0);
		entity::delete_entity(&uVar0);
	}
}

// Position - 0x213
int func_7() {
	bool bVar0;
	int *iVar1;

	func_14(&bVar0, &iVar1);
	if (bVar0) {
		return 1;
	}
	if (Global_1315210 == 0) {
		if (!network::network_is_game_in_progress()) {
			return 1;
		}
	}
	if (func_13()) {
		return 1;
	}
	if (Global_2454747) {
		return 1;
	}
	if (func_12()) {
		return 1;
	}
	if (func_11(157)) {
		if (!func_10()) {
			return 1;
		}
	}
	if (func_11(155)) {
		return 1;
	}
	if (!network::network_is_signed_online()) {
		return 1;
	}
	if (func_8() != 0) {
		if (script::_get_number_of_instances_of_script_with_name_hash(func_8()) == 0) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x2A8
int func_8() {
	switch (func_9()) {
	case 0: return joaat("freemode");

	case 2: return joaat("creator");
	}
	return 0;
}

// Position - 0x2DC
int func_9() { return Global_25190; }

// Position - 0x2E7
bool func_10() { return Global_2443134.f_577; }

// Position - 0x2F6
bool func_11(int iParam0) {
	if (script::get_event_exists(1, iParam0)) {
		return true;
	}
	return false;
}

// Position - 0x30D
bool func_12() { return Global_2452525; }

// Position - 0x319
bool func_13() { return Global_2443134.f_572; }

// Position - 0x328
void func_14(int *iParam0, int *iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < script::get_number_of_events(1)) {
		iVar1 = script::get_event_at_index(1, iVar0);
		if (iVar1 == 171) {
			script::get_event_data(1, iVar0, &iVar2, 2);
			switch (iVar2) {
			case 381: func_15(iVar0); break;

			case 2:
				script::get_event_data(1, iVar0, &vVar4, 3);
				if (vVar4.z == 55) {
					*iParam0 = 1;
				}
				else if (vVar4.z == 32) {
					*iParam1 = 1;
				}
				break;
			}
		}
		iVar0++;
	}
}

// Position - 0x3A8
void func_15(int iParam0) {
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (script::get_event_data(1, iParam0, &vVar0, 3)) {
		if (func_17(vVar0.y, 1, 1)) {
			iVar3 = player::get_player_ped(vVar0.y);
			if (entity::does_entity_exist(iVar3)) {
				if (ped::is_ped_in_any_vehicle(iVar3, 0)) {
					iVar4 = ped::get_vehicle_ped_is_in(iVar3, 0);
					if (vehicle::is_vehicle_window_intact(iVar4, vVar0.z) &&
						network::network_get_this_script_is_network_script()) {
						if (func_16(iVar4, &bVar5)) {
							vehicle::remove_vehicle_window(iVar4, vVar0.z);
						}
						if (bVar5) {
							entity::set_vehicle_as_no_longer_needed(&iVar4);
						}
					}
				}
			}
		}
	}
}

// Position - 0x429
bool func_16(int iParam0, int *iParam1) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_a_mission_entity(iParam0)) {
			if (network::network_get_entity_is_local(iParam0)) {
				if (!vehicle::is_this_model_a_train(entity::get_entity_model(iParam0))) {
					entity::set_entity_as_mission_entity(iParam0, 0, 1);
					*iParam1 = 1;
				}
			}
		}
		if (entity::does_entity_belong_to_this_script(iParam0, 0)) {
			if (network::network_has_control_of_entity(iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x488
bool func_17(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1) {
		if (network::network_is_player_active(iParam0)) {
			if (iParam1) {
				if (!player::is_player_playing(iParam0)) {
					return false;
				}
			}
			if (iParam2) {
				if (!Global_2433125.f_3[iVar0]) {
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

// Position - 0x4D2
void func_18() { system::wait(0); }

// Position - 0x4DF
void func_19() {
	network::network_set_this_script_is_network_script(32, 0, -1);
	func_21(0, -1, 0);
	network::network_register_host_broadcast_variables(&uLocal_35, 21);
	if (!func_20()) {
		func_3();
	}
	gameplay::set_this_script_can_be_paused(0);
	if (!streaming::is_ipl_active("imp_dt1_02_cargarage_a")) {
		streaming::request_ipl("imp_dt1_02_cargarage_a");
	}
}

// Position - 0x522
int func_20() {
	int iVar0;

	iVar0 = 0;
	while (true) {
		iVar0++;
		if (!network::network_is_game_in_progress()) {
			return 0;
		}
		if (network::_0x5D10B3795F3FC886()) {
			return 1;
		}
		if (func_13()) {
			return 0;
		}
		if (func_11(155)) {
			return 0;
		}
		if (iVar0 >= 3600) {
			return 0;
		}
		system::wait(0);
	}
	return 0;
}

// Position - 0x57B
int func_21(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = network::network_get_script_status();
	while (iVar0 != 2) {
		if (iVar0 == 3 || iVar0 == 4 || iVar0 == 5 || iVar0 == 6) {
			if (!iParam2) {
				func_4();
			}
			else {
				return 0;
			}
		}
		if (!func_22()) {
			if (iParam0 == 0) {
				if (!network::network_is_game_in_progress()) {
					if (!iParam2) {
						func_4();
					}
					else {
						return 0;
					}
				}
				if (func_13()) {
					if (!iParam2) {
						func_4();
					}
					else {
						return 0;
					}
				}
				if (func_11(155)) {
					if (!iParam2) {
						func_4();
					}
					else {
						return 0;
					}
				}
			}
			else if (!network::network_is_in_session()) {
				if (!iParam2) {
					func_4();
				}
				else {
					return 0;
				}
			}
		}
		system::wait(0);
		iVar0 = network::network_get_script_status();
	}
	if (iParam1 > -1) {
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0) {
		if (!network::network_is_game_in_progress()) {
			if (!iParam2) {
				func_4();
			}
			else {
				return 0;
			}
		}
	}
	else if (!network::network_is_in_session()) {
		if (!iParam2) {
			func_4();
		}
		else {
			return 0;
		}
	}
	return 1;
}

// Position - 0x690
bool func_22() { return Global_1315210; }
