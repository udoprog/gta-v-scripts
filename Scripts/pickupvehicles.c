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
int iLocal_29 = 0;
var *uLocal_30 = NULL;
int iLocal_31 = 0;
int iLocal_32 = 0;
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
	func_4(21);
	if (player::has_force_cleanup_occurred(18)) {
		if (player::get_cause_of_most_recent_force_cleanup() == 16) {
			func_3(21);
		}
		func_2();
	}
	while (true) {
		system::wait(0);
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("docks_setup")) == 0) {
			if (player::is_player_playing(player::player_id())) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
					iLocal_28 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
				}
				else {
					iLocal_28 = 0;
				}
			}
			if (entity::does_entity_exist(iLocal_28)) {
				if (vehicle::is_vehicle_driveable(iLocal_28, 0)) {
					if (vehicle::is_vehicle_model(iLocal_28, joaat("handler"))) {
						controls::set_input_exclusive(0, 51);
						if (!vehicle::_0x62CA17B74C435651(iLocal_28)) {
							if (iLocal_32 == 0) {
								if (!entity::does_entity_exist(iLocal_29) ||
									entity::does_entity_exist(iLocal_29) &&
										object::get_closest_object_of_type(entity::get_entity_coords(iLocal_28, 1), 15f,
																		   874602658, 1, 0, 1) != iLocal_29) {
									iLocal_29 = object::get_closest_object_of_type(
										entity::get_entity_coords(iLocal_28, 1), 15f, 874602658, 1, 0, 1);
								}
								if (entity::does_entity_exist(iLocal_29)) {
									if (func_1(&uLocal_30, 1000)) {
										if (vehicle::_0x89D630CF5EA96D23(iLocal_28, iLocal_29)) {
											if (controls::is_control_just_pressed(0, 51)) {
												vehicle::_0x6A98C2ECF57FA5D4(iLocal_28, iLocal_29);
												iLocal_31 = 1;
												iLocal_32 = 1;
											}
										}
									}
								}
							}
						}
						else {
							if (iLocal_31 == 1) {
								uLocal_30 = gameplay::get_game_timer();
								iLocal_31 = 0;
								iLocal_32 = 0;
							}
							if (controls::is_control_just_pressed(0, 51)) {
							}
						}
					}
				}
			}
		}
	}
}

// Position - 0x18E
bool func_1(var *uParam0, int iParam1) {
	int iVar0;

	iVar0 = gameplay::get_game_timer();
	if (iVar0 - *uParam0 > iParam1) {
		return true;
	}
	return false;
}

// Position - 0x1AC
void func_2() { script::terminate_this_thread(); }

// Position - 0x1B8
int func_3(int iParam0) {
	int iVar0;
	int iVar1;

	if (iParam0 <= 31) {
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else {
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}
	if (gameplay::is_bit_set(Global_101700.f_8044.f_99.f_219[iVar0], iVar1)) {
		gameplay::clear_bit(&Global_101700.f_8044.f_99.f_219[iVar0], iVar1);
		return 1;
	}
	return 0;
}

// Position - 0x212
int func_4(int iParam0) {
	int iVar0;
	int iVar1;

	if (iParam0 <= 31) {
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else {
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}
	if (gameplay::is_bit_set(Global_101700.f_8044.f_99.f_219[iVar0], iVar1)) {
		return 0;
	}
	gameplay::set_bit(&Global_101700.f_8044.f_99.f_219[iVar0], iVar1);
	return 1;
}
