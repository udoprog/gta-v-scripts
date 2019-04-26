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
var uLocal_40 = 0;
var uLocal_41 = 0;
var uLocal_42 = 0;
var uLocal_43 = 0;
int iLocal_44 = 0;
int iLocal_45 = 0;
int iLocal_46 = 0;
int iLocal_47 = 0;
var uLocal_48 = 0;
var uLocal_49 = 0;
var uLocal_50 = 0;
var uLocal_51 = 0;
var uLocal_52 = 0;
var uLocal_53 = 0;
var uLocal_54 = 0;
var uLocal_55 = 0;
var uLocal_56 = 0;
var uLocal_57 = 0;
var uLocal_58 = 0;
var uLocal_59 = 0;
vector3 vLocal_60 = {0f, 0f, 0f};
float fLocal_63 = 0f;
vector3 vLocal_64 = {0f, 0f, 0f};
vector3 vLocal_67 = {0f, 0f, 0f};
int iLocal_70 = 0;
int iLocal_71 = 0;
int iLocal_72 = 0;
int iLocal_73 = 0;
vector3 vLocal_74[2] = {{0f, 0f, 0f}, {0f, 0f, 0f}};
bool bLocal_81 = 0;
float fLocal_82 = 0f;
float fLocal_83 = 0f;
float fLocal_84 = 0f;
float fLocal_85 = 0f;
float fLocal_86 = 0f;
int iLocal_87 = 0;
int *iLocal_88 = NULL;
int iLocal_89 = 0;
int iLocal_90 = 0;
int iLocal_91 = 0;
int iLocal_92 = 0;
int iLocal_93 = 0;
int iLocal_94 = 0;
int iLocal_95 = 0;
int iLocal_96 = 0;
int *iLocal_97 = NULL;
int *iLocal_98 = NULL;
bool bLocal_99 = 0;
bool bLocal_100 = 0;
#pragma endregion //}

void __EntryFunction__() {
	int iVar0;

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
	iLocal_44 = 1;
	iLocal_45 = 65;
	iLocal_46 = 49;
	iLocal_47 = 64;
	vLocal_60 = {-1124.392f, -514.7001f, 33.21493f};
	fLocal_63 = 200f;
	vLocal_64 = {2490f, 3777f, 2402.879f};
	vLocal_67 = {-2052f, 3237f, 1450.078f};
	iLocal_70 = -1;
	iLocal_72 = -1;
	bLocal_81 = true;
	fLocal_82 = 10f;
	fLocal_83 = 90f;
	fLocal_84 = 35f;
	fLocal_85 = 60f;
	fLocal_86 = 275f;
	iLocal_87 = 1500;
	iLocal_88 = -1;
	iLocal_90 = 3000;
	iLocal_91 = 708;
	iLocal_92 = 377;
	iLocal_93 = 1000;
	iLocal_94 = 2093;
	iLocal_97 = -1;
	iLocal_98 = -1;
	bLocal_99 = true;
	bLocal_100 = true;
	if (player::has_force_cleanup_occurred(3)) {
		func_12();
	}
	while (cam::is_screen_faded_out()) {
		system::wait(0);
	}
	if (!streaming::is_ipl_active("ufo")) {
		streaming::request_ipl("ufo");
	}
	vLocal_74[0 /*3*/] = {vLocal_64};
	vLocal_74[1 /*3*/] = {vLocal_67};
	while (true) {
		func_11(player::player_ped_id());
		if (Global_25194 == 1) {
			func_12();
		}
		if (bLocal_81) {
			if (!func_10(player::player_ped_id(), vLocal_74[0 /*3*/], 290f + 50f)) {
				if (!func_10(player::player_ped_id(), vLocal_74[1 /*3*/], 290f + 50f)) {
					func_12();
				}
			}
			if (iLocal_73 != 0) {
				if (!func_10(player::player_ped_id(), vLocal_74[0 /*3*/], fLocal_86 + 50f)) {
					if (!func_10(player::player_ped_id(), vLocal_74[1 /*3*/], fLocal_86 + 50f)) {
						audio::set_ambient_zone_state_persistent("AZ_SPECIAL_UFO_01", 0, 1);
						audio::set_ambient_zone_state_persistent("AZ_SPECIAL_UFO_02", 0, 1);
						iLocal_73 = 0;
						iLocal_72 = -1;
					}
				}
			}
		}
		func_8();
		switch (iLocal_73) {
		case 0:
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < vLocal_74.x) {
				if (func_10(player::player_ped_id(), vLocal_74[iVar0 /*3*/], fLocal_86)) {
					iLocal_72 = iVar0;
					iLocal_73 = 1;
					audio::set_ambient_zone_state_persistent("AZ_SPECIAL_UFO_01", 1, 1);
					audio::set_ambient_zone_state_persistent("AZ_SPECIAL_UFO_02", 1, 1);
				}
				iVar0++;
			}
			break;

		case 1:
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < vLocal_74.x) {
				if (func_10(player::player_ped_id(), vLocal_74[iVar0 /*3*/], fLocal_83)) {
					iLocal_72 = iVar0;
					iLocal_73 = 2;
				}
				iVar0++;
			}
			break;

		case 2:
			if (iLocal_72 == -1) {
				iLocal_73 = 1;
			}
			else {
				iLocal_70 = gameplay::get_game_timer();
				iLocal_71 = 0;
				iLocal_73 = 3;
			}
			break;

		case 3:
			if (func_10(player::player_ped_id(), vLocal_74[iLocal_72 /*3*/], fLocal_83)) {
				iLocal_71 = gameplay::get_game_timer() - iLocal_70;
				if (iLocal_71 >= iLocal_87) {
					iLocal_73 = 4;
					iLocal_88 = audio::get_sound_id();
					iLocal_89 = gameplay::get_game_timer();
					if (iLocal_72 == 0) {
						audio::play_sound_from_coord(iLocal_88, "SPECIAL_EVIL_UFO_DEATH_RAY",
													 vLocal_74[iLocal_72 /*3*/], 0, 0, 0, 0);
					}
					else {
						audio::play_sound_from_coord(iLocal_88, "SPECIAL_EVIL_UFO_DEATH_RAY_3",
													 vLocal_74[iLocal_72 /*3*/], 0, 0, 0, 0);
					}
					func_7();
					func_6();
				}
			}
			else {
				iLocal_73 = 1;
			}
			break;

		case 4:
			func_5();
			func_7();
			func_6();
			if (gameplay::get_game_timer() > iLocal_89 + iLocal_90) {
				func_4(&iLocal_88);
			}
			if (!func_10(player::player_ped_id(), vLocal_74[iLocal_72 /*3*/], fLocal_86)) {
				func_1();
				iLocal_72 = -1;
				iLocal_73 = 0;
				func_4(&iLocal_98);
				func_4(&iLocal_97);
				audio::set_ambient_zone_state_persistent("AZ_SPECIAL_UFO_01", 0, 1);
				audio::set_ambient_zone_state_persistent("AZ_SPECIAL_UFO_02", 0, 1);
			}
			break;
		}
		system::wait(0);
	}
}

// Position - 0x39B
void func_1() {
	int iVar0;

	if (func_11(player::player_ped_id())) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
			if (func_2(iVar0)) {
				vehicle::set_vehicle_engine_on(iVar0, 1, 0, 0);
			}
		}
	}
}

// Position - 0x3D7
bool func_2(int iParam0) {
	if (func_3(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (!fire::is_entity_on_fire(iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x401
bool func_3(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x422
void func_4(int *iParam0) {
	if (*iParam0 != -1) {
		audio::stop_sound(*iParam0);
		audio::release_sound_id(*iParam0);
		*iParam0 = -1;
	}
}

// Position - 0x443
void func_5() {
	int iVar0;

	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
		if (func_2(iVar0)) {
			vehicle::set_vehicle_engine_on(iVar0, 0, 0, 0);
			entity::apply_force_to_entity(iVar0, 2, 0f, 0f, -fLocal_82, 0f, 1f, 0f, 0, 0, 1, 1, 0, 1);
		}
	}
}

// Position - 0x489
void func_6() {
	if (bLocal_100) {
		if (gameplay::get_game_timer() > iLocal_95) {
			if (iLocal_97 != -1) {
				func_4(&iLocal_97);
				iLocal_95 = gameplay::get_game_timer() + iLocal_94;
			}
			else {
				iLocal_97 = audio::get_sound_id();
				audio::play_sound(iLocal_97, "ent_amb_elec_crackle", 0, 0, 0, 1);
				iLocal_95 = gameplay::get_game_timer() + iLocal_92;
			}
		}
	}
}

// Position - 0x4D3
void func_7() {
	if (bLocal_99) {
		if (gameplay::get_game_timer() > iLocal_96) {
			if (iLocal_98 != -1) {
				func_4(&iLocal_98);
				iLocal_96 = gameplay::get_game_timer() + iLocal_93;
			}
			else {
				iLocal_98 = audio::get_sound_id();
				audio::play_sound(iLocal_98, "spl_stun_npc_master", 0, 0, 0, 1);
				iLocal_96 = gameplay::get_game_timer() + iLocal_91;
			}
		}
	}
}

// Position - 0x51D
void func_8() {
	vector3 vVar0;

	if (iLocal_72 == -1) {
		return;
	}
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		return;
	}
	if (!func_10(player::player_ped_id(), vLocal_74[iLocal_72 /*3*/], fLocal_84)) {
		return;
	}
	vVar0 = {func_9(entity::get_entity_coords(player::player_ped_id(), 1) - vLocal_74[iLocal_72 /*3*/]) *
			 FtoV(fLocal_85)};
	entity::apply_force_to_entity(player::player_ped_id(), 2, vVar0, 0f, 0f, 0f, 0, 0, 1, 1, 0, 1);
}

// Position - 0x58A
Vector3 func_9(vector3 vParam0) {
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

// Position - 0x5C9
bool func_10(int iParam0, vector3 vParam1, float fParam4) {
	return system::vdist2(entity::get_entity_coords(iParam0, 1), vParam1) <= fParam4 * fParam4;
}

// Position - 0x5E6
bool func_11(int iParam0) {
	if (!entity::does_entity_exist(iParam0)) {
		return false;
	}
	return !entity::is_entity_dead(iParam0, 0);
}

// Position - 0x604
void func_12() {
	if (streaming::is_ipl_active("ufo")) {
		streaming::remove_ipl("ufo");
	}
	func_4(&iLocal_98);
	func_4(&iLocal_97);
	func_4(&iLocal_88);
	audio::set_ambient_zone_state_persistent("AZ_SPECIAL_UFO_01", 0, 1);
	audio::set_ambient_zone_state_persistent("AZ_SPECIAL_UFO_02", 0, 1);
	func_1();
	script::terminate_this_thread();
}
