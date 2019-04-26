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
vector3 vLocal_19 = {0f, 0f, 0f};
int iLocal_22 = 0;
int iScriptParam_0 = 0;
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
	if (network::network_is_game_in_progress()) {
		if (gameplay::is_bit_set(Global_1364290, 1)) {
			func_17();
		}
		else {
			network::network_set_this_script_is_network_script(32, 0, -1);
			func_14(0, -1, 0);
			gameplay::set_this_script_can_be_paused(0);
			iLocal_22 = 1;
		}
	}
	else if (player::has_force_cleanup_occurred(2)) {
		func_17();
	}
	while (true) {
		system::wait(0);
		if (iLocal_22 == 1) {
			if (func_3()) {
				func_17();
			}
		}
		if (entity::does_entity_exist(iScriptParam_0)) {
			if (brain::is_object_within_brain_activation_range(iScriptParam_0)) {
				switch (iLocal_18) {
				case 0:
					if (entity::does_entity_have_drawable(iScriptParam_0)) {
						vLocal_19 = {entity::get_entity_coords(iScriptParam_0, 1)};
						iLocal_18 = 1;
					}
					break;

				case 1:
					if (object::has_object_been_broken(iScriptParam_0) && entity::is_entity_visible(iScriptParam_0) &&
						!entity::is_entity_a_mission_entity(iScriptParam_0)) {
						func_1();
						iLocal_18 = 2;
					}
					break;

				case 2: break;
				}
			}
			else {
				func_17();
			}
		}
		else {
			func_17();
		}
	}
}

// Position - 0x113
void func_1() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = joaat("prop_money_bag_01");
	iVar1 = joaat("pickup_money_med_bag");
	iVar3 = gameplay::get_random_int_in_range(70, 121);
	if (network::network_is_game_in_progress()) {
		iVar0 = joaat("prop_cash_pile_01");
		iVar3 = gameplay::get_random_int_in_range(50, 101);
		iVar3 = func_2(iVar3, 1);
	}
	gameplay::set_bit(&iVar2, 3);
	gameplay::set_bit(&iVar2, 4);
	streaming::request_model(iVar0);
	while (!streaming::has_model_loaded(iVar0)) {
		system::wait(0);
	}
	object::create_pickup(iVar1, object::get_safe_pickup_coords(vLocal_19, 1067030938, 1069547520), iVar2, iVar3, 0,
						  iVar0);
}

// Position - 0x198
int func_2(int iParam0, int iParam1) {
	float fVar0;

	switch (iParam1) {
	case 0: break;

	case 1:
		if (iParam0 > 0) {
			fVar0 = system::to_float(iParam0) * Global_262145;
			iParam0 = system::round(fVar0);
		}
		break;

	default: break;
	}
	return iParam0;
}

// Position - 0x1D9
bool func_3() {
	bool bVar0;
	int *iVar1;

	func_10(&bVar0, &iVar1);
	if (bVar0) {
		return true;
	}
	if (Global_1315210 == 0) {
		if (!network::network_is_game_in_progress()) {
			return true;
		}
	}
	if (func_9()) {
		return true;
	}
	if (Global_2454747) {
		return true;
	}
	if (func_8()) {
		return true;
	}
	if (func_7(157)) {
		if (!func_6()) {
			return true;
		}
	}
	if (func_7(155)) {
		return true;
	}
	if (!network::network_is_signed_online()) {
		return true;
	}
	if (func_4() != 0) {
		if (script::_get_number_of_instances_of_script_with_name_hash(func_4()) == 0) {
			return true;
		}
	}
	return false;
}

// Position - 0x26E
int func_4() {
	switch (func_5()) {
	case 0: return joaat("freemode");

	case 2: return joaat("creator");
	}
	return 0;
}

// Position - 0x2A2
int func_5() { return Global_25190; }

// Position - 0x2AD
bool func_6() { return Global_2443134.f_577; }

// Position - 0x2BC
bool func_7(int iParam0) {
	if (script::get_event_exists(1, iParam0)) {
		return true;
	}
	return false;
}

// Position - 0x2D3
bool func_8() { return Global_2452525; }

// Position - 0x2DF
bool func_9() { return Global_2443134.f_572; }

// Position - 0x2EE
void func_10(int *iParam0, int *iParam1) {
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
			case 381: func_11(iVar0); break;

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

// Position - 0x36E
void func_11(int iParam0) {
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (script::get_event_data(1, iParam0, &vVar0, 3)) {
		if (func_13(vVar0.y, 1, 1)) {
			iVar3 = player::get_player_ped(vVar0.y);
			if (entity::does_entity_exist(iVar3)) {
				if (ped::is_ped_in_any_vehicle(iVar3, 0)) {
					iVar4 = ped::get_vehicle_ped_is_in(iVar3, 0);
					if (vehicle::is_vehicle_window_intact(iVar4, vVar0.z) &&
						network::network_get_this_script_is_network_script()) {
						if (func_12(iVar4, &bVar5)) {
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

// Position - 0x3EF
bool func_12(int iParam0, int *iParam1) {
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

// Position - 0x44E
bool func_13(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x498
int func_14(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = network::network_get_script_status();
	while (iVar0 != 2) {
		if (iVar0 == 3 || iVar0 == 4 || iVar0 == 5 || iVar0 == 6) {
			if (!iParam2) {
				func_16();
			}
			else {
				return 0;
			}
		}
		if (!func_15()) {
			if (iParam0 == 0) {
				if (!network::network_is_game_in_progress()) {
					if (!iParam2) {
						func_16();
					}
					else {
						return 0;
					}
				}
				if (func_9()) {
					if (!iParam2) {
						func_16();
					}
					else {
						return 0;
					}
				}
				if (func_7(155)) {
					if (!iParam2) {
						func_16();
					}
					else {
						return 0;
					}
				}
			}
			else if (!network::network_is_in_session()) {
				if (!iParam2) {
					func_16();
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
				func_16();
			}
			else {
				return 0;
			}
		}
	}
	else if (!network::network_is_in_session()) {
		if (!iParam2) {
			func_16();
		}
		else {
			return 0;
		}
	}
	return 1;
}

// Position - 0x5AD
bool func_15() { return Global_1315210; }

// Position - 0x5B9
void func_16() { script::terminate_this_thread(); }

// Position - 0x5C5
void func_17() { script::terminate_this_thread(); }
