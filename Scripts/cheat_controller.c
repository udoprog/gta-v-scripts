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
int iLocal_46 = 0;
int iLocal_47 = 0;
int iLocal_48 = 0;
int iLocal_49 = 0;
int iLocal_50 = 0;
int iLocal_51 = 0;
int iLocal_52 = 0;
int iLocal_53 = 0;
int iLocal_54 = 0;
int iLocal_55 = 0;
int iLocal_56 = 0;
int iLocal_57 = 0;
int iLocal_58 = 0;
int iLocal_59 = 0;
int iLocal_60 = 0;
int iLocal_61 = 0;
int iLocal_62 = 0;
int iLocal_63 = 0;
int iLocal_64 = 0;
int iLocal_65 = 0;
int iLocal_66 = 0;
int iLocal_67 = 0;
int iLocal_68 = 0;
int iLocal_69 = 0;
char *sLocal_70 = NULL;
int iLocal_71 = 0;
int iLocal_72 = 0;
int iLocal_73 = 0;
int iLocal_74 = 0;
int iLocal_75 = 0;
int iLocal_76 = 0;
int iLocal_77 = 0;
float fLocal_78 = 0f;
int iLocal_79 = 0;
int iLocal_80[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_91 = 0;
int iLocal_92 = 0;
int iLocal_93 = 0;
int iLocal_94 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = 1;
	iLocal_47 = 1;
	iLocal_48 = 1;
	iLocal_49 = 1;
	iLocal_50 = 1;
	iLocal_51 = 1;
	iLocal_52 = 1;
	iLocal_53 = 1;
	iLocal_54 = 1;
	iLocal_55 = 1;
	iLocal_56 = 1;
	iLocal_57 = 1;
	iLocal_58 = 1;
	iLocal_59 = 1;
	iLocal_60 = 1;
	iLocal_61 = 1;
	iLocal_62 = 1;
	iLocal_63 = 1;
	iLocal_64 = 1;
	iLocal_65 = 1;
	iLocal_66 = 1;
	iLocal_67 = joaat("bmx");
	iLocal_73 = 300000;
	fLocal_78 = 1f;
	if (player::has_force_cleanup_occurred(34)) {
		func_111();
	}
	Global_25435 = 0;
	Global_25434 = 0;
	Global_25436 = 0;
	Global_25437 = 0;
	Global_25439 = 0;
	Global_25438 = 0;
	func_110();
	while (true) {
		func_1();
		system::wait(0);
	}
}

// Position - 0xF9
void func_1() {
	func_86();
	func_66();
	func_20();
	func_2(iLocal_67);
}

// Position - 0x113
void func_2(int iParam0) {
	switch (iLocal_46) {
	case 0: break;

	case 1: break;

	case 2:
		if (interior::is_interior_scene()) {
			func_19("CHEAT_VEHICLE_SPAWN_DENIED");
			iLocal_46 = 1;
		}
		else {
			func_18(iParam0);
		}
		break;

	case 4: func_3(iParam0); break;

	default: break;
	}
}

// Position - 0x168
void func_3(int iParam0) {
	vector3 vVar0;
	float fVar3;
	int iVar4;

	iVar4 = 0;
	if (streaming::has_model_loaded(iParam0)) {
		if (player::is_player_playing(player::player_id())) {
			if (entity::does_entity_exist(iLocal_68)) {
				if (!entity::is_entity_dead(iLocal_68, 0)) {
					if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_68, 0)) {
						vVar0 = {entity::get_entity_coords(iLocal_68, 1)};
						fVar3 = entity::get_entity_heading(iLocal_68);
						entity::set_entity_coords(player::player_ped_id(), vVar0.x, vVar0.y, vVar0.z + 4f, 1, 0, 0, 1);
						iVar4 = 1;
					}
				}
				vehicle::delete_vehicle(&iLocal_68);
			}
			if (!iVar4) {
				if (iParam0 == joaat("duster") || iParam0 == joaat("stunt")) {
					vVar0 = {entity::get_offset_from_entity_in_world_coords(player::player_ped_id(), -1.5f, 3.5f, 1f)};
				}
				else if (iParam0 == joaat("buzzard")) {
					vVar0 = {entity::get_offset_from_entity_in_world_coords(player::player_ped_id(), 0f, 6f, 2f)};
				}
				else {
					vVar0 = {entity::get_offset_from_entity_in_world_coords(player::player_ped_id(), 0f, 3.5f, 1f)};
				}
				fVar3 = entity::get_entity_heading(player::player_ped_id()) + 90f;
			}
			if (func_16(iParam0, vVar0, fVar3)) {
				iLocal_68 = vehicle::create_vehicle(iParam0, vVar0, fVar3, 0, 1);
				vehicle::set_vehicle_on_ground_properly(iLocal_68, 1084227584);
				streaming::set_model_as_no_longer_needed(iParam0);
				entity::set_vehicle_as_no_longer_needed(&iLocal_68);
				func_14(sLocal_70);
				func_4(20);
			}
			else {
				streaming::set_model_as_no_longer_needed(iParam0);
				func_19("CHEAT_VEHICLE_SPAWN_DENIED");
			}
			iLocal_46 = 1;
		}
	}
}

// Position - 0x2AA
void func_4(int iParam0) {
	if (!func_13(14) && !func_12("")) {
		gameplay::set_bit(&Global_25436, iParam0);
		Global_25439 = 1;
		func_5();
	}
}

// Position - 0x2DD
void func_5() {
	int iVar0;

	iVar0 = func_7();
	switch (iVar0) {
	case 0: func_6(joaat("sp0_times_cheated"), 1); break;

	case 1: func_6(joaat("sp1_times_cheated"), 1); break;

	case 2: func_6(joaat("sp2_times_cheated"), 1); break;
	}
}

// Position - 0x32B
void func_6(int iParam0, int iParam1) {
	int iVar0;

	stats::stat_get_int(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	stats::stat_set_int(iParam0, iVar0, 1);
}

// Position - 0x34E
int func_7() {
	func_8();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x367
void func_8() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_11(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_10(player::player_ped_id());
			if (func_9(iVar0) && (!func_13(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_9(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x464
bool func_9(int iParam0) { return iParam0 < 3; }

// Position - 0x470
int func_10(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_11(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x4AD
int func_11(int iParam0) {
	if (func_9(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x4D7
bool func_12(char *sParam0) {
	if (iLocal_94 != 0) {
		if (func_13(14) && cam::is_screen_faded_in()) {
			if (gameplay::are_strings_equal(sParam0, "CHEAT_SUPER_JUMP") && interior::is_interior_scene()) {
				return false;
			}
			if (gameplay::are_strings_equal(sParam0, "CHEAT_GRAVITY_MOON") &&
				!entity::is_entity_dead(player::player_ped_id(), 0) &&
				entity::is_entity_in_water(player::player_ped_id())) {
				return false;
			}
		}
		return true;
	}
	return false;
}

// Position - 0x541
bool func_13(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x54F
void func_14(char *sParam0) {
	if (func_12("")) {
	}
	else {
		ui::_set_notification_text_entry("CHEAT_ACTIVATED");
		ui::add_text_component_substring_text_label(sParam0);
		func_15(ui::_draw_notification(0, 1));
		stats::playstats_cheat_applied(sParam0);
	}
}

// Position - 0x581
void func_15(int iParam0) {
	iLocal_80[iLocal_91] = iParam0;
	iLocal_91++;
	if (iLocal_91 >= 10) {
		iLocal_91 = 0;
	}
}

// Position - 0x5A1
bool func_16(int iParam0, vector3 vParam1, float fParam4) {
	vector3 vVar0[9];
	vector3 vVar28;
	vector3 vVar31;
	vector3 vVar34;
	var uVar37;
	var uVar40;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	var uVar51;

	gameplay::get_model_dimensions(iParam0, &vVar28, &vVar31);
	vVar34.x = gameplay::absf(vVar31.x - vVar28.x) / 2f;
	vVar34.y = gameplay::absf(vVar31.y - vVar28.y) / 2f;
	vVar34.z = gameplay::absf(vVar31.z - vVar28.z) / 2f;
	vVar0[0 /*3*/] = {vParam1};
	vVar0[1 /*3*/] = {object::_get_object_offset_from_coords(vParam1, fParam4, -vVar34.x, -vVar34.y, -vVar34.z)};
	vVar0[2 /*3*/] = {object::_get_object_offset_from_coords(vParam1, fParam4, vVar34.x, -vVar34.y, -vVar34.z)};
	vVar0[3 /*3*/] = {object::_get_object_offset_from_coords(vParam1, fParam4, vVar34.x, vVar34.y, -vVar34.z)};
	vVar0[4 /*3*/] = {object::_get_object_offset_from_coords(vParam1, fParam4, -vVar34.x, vVar34.y, -vVar34.z)};
	vVar0[5 /*3*/] = {object::_get_object_offset_from_coords(vParam1, fParam4, -vVar34.x, -vVar34.y, vVar34.z)};
	vVar0[6 /*3*/] = {object::_get_object_offset_from_coords(vParam1, fParam4, vVar34.x, -vVar34.y, vVar34.z)};
	vVar0[7 /*3*/] = {object::_get_object_offset_from_coords(vParam1, fParam4, vVar34.x, vVar34.y, vVar34.z)};
	vVar0[8 /*3*/] = {object::_get_object_offset_from_coords(vParam1, fParam4, -vVar34.x, vVar34.y, vVar34.z)};
	if (!interior::_are_coords_colliding_with_exterior(vParam1)) {
		return false;
	}
	iVar50 = worldprobe::_start_shape_test_ray(func_17(player::player_id()) + Vector(1f, 0f, 0f), vParam1, 87,
											   player::player_ped_id(), 0);
	worldprobe::get_shape_test_result(iVar50, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0) {
		return false;
	}
	iVar44 = worldprobe::_start_shape_test_ray(vVar0[1 /*3*/], vVar0[3 /*3*/], 87, player::player_ped_id(), 0);
	worldprobe::get_shape_test_result(iVar44, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0) {
		return false;
	}
	iVar45 = worldprobe::_start_shape_test_ray(vVar0[2 /*3*/], vVar0[4 /*3*/], 87, player::player_ped_id(), 0);
	worldprobe::get_shape_test_result(iVar45, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0) {
		return false;
	}
	iVar46 = worldprobe::_start_shape_test_ray(vVar0[5 /*3*/], vVar0[7 /*3*/], 87, player::player_ped_id(), 0);
	worldprobe::get_shape_test_result(iVar46, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0) {
		return false;
	}
	iVar47 = worldprobe::_start_shape_test_ray(vVar0[6 /*3*/], vVar0[8 /*3*/], 87, player::player_ped_id(), 0);
	worldprobe::get_shape_test_result(iVar47, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0) {
		return false;
	}
	iVar48 = worldprobe::_start_shape_test_ray(vVar0[1 /*3*/], vVar0[8 /*3*/], 87, player::player_ped_id(), 0);
	worldprobe::get_shape_test_result(iVar48, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0) {
		return false;
	}
	iVar49 = worldprobe::_start_shape_test_ray(vVar0[2 /*3*/], vVar0[7 /*3*/], 87, player::player_ped_id(), 0);
	worldprobe::get_shape_test_result(iVar49, &iVar43, &uVar37, &uVar40, &uVar51);
	if (iVar43 != 0) {
		return false;
	}
	return true;
}

// Position - 0x85D
Vector3 func_17(int iParam0) { return entity::get_entity_coords(player::get_player_ped(iParam0), 0); }

// Position - 0x870
void func_18(int iParam0) {
	if (streaming::is_model_in_cdimage(iParam0)) {
		streaming::request_model(iParam0);
		if (streaming::has_model_loaded(iParam0)) {
			iLocal_46 = 4;
		}
	}
}

// Position - 0x893
void func_19(char *sParam0) {
	if (!func_13(14)) {
		ui::_set_notification_text_entry("CHEAT_DENIED");
		ui::add_text_component_substring_text_label(sParam0);
		func_15(ui::_draw_notification(0, 1));
	}
}

// Position - 0x8BF
void func_20() {
	func_63();
	func_62();
	func_43();
	func_42();
	func_41();
	func_37();
	func_34();
	func_30();
	func_21();
}

// Position - 0x8EB
void func_21() {
	switch (iLocal_66) {
	case 1: break;

	case 4:
		func_29(19, 1);
		func_28();
		break;

	case 5:
		if (!player::is_player_playing(player::player_id()) || func_26() || func_25(23) || func_25(21) || func_25(19)) {
			iLocal_66 = 9;
			return;
		}
		func_23();
		break;

	case 9:
		func_22("CHEAT_AIM_SLOW_MO");
		func_29(19, 0);
		gameplay::set_time_scale(1f);
		iLocal_77 = 0;
		iLocal_66 = 1;
		break;

	default: break;
	}
}

// Position - 0x98A
void func_22(char *sParam0) {
	if (func_12(sParam0)) {
	}
	else {
		ui::_set_notification_text_entry("CHEAT_DEACTIVATED");
		ui::add_text_component_substring_text_label(sParam0);
		func_15(ui::_draw_notification(0, 1));
	}
}

// Position - 0x9B5
void func_23() {
	if (ped::is_ped_on_foot(player::player_ped_id())) {
		if (controls::is_control_pressed(2, 25)) {
			if (func_24(player::player_ped_id()) != joaat("weapon_unarmed") &&
				func_24(player::player_ped_id()) != joaat("object")) {
				gameplay::set_time_scale(fLocal_78);
			}
			else {
				gameplay::set_time_scale(1f);
			}
		}
		else {
			gameplay::set_time_scale(1f);
		}
	}
}

// Position - 0xA0C
int func_24(int iParam0) {
	var uVar0;

	weapon::get_current_ped_weapon(iParam0, &uVar0, 1);
	return uVar0;
}

// Position - 0xA20
int func_25(int iParam0) {
	if (gameplay::is_bit_set(Global_25434, iParam0)) {
		return 1;
	}
	return 0;
}

// Position - 0xA39
bool func_26() {
	if (func_13(0) || func_13(11) || func_13(4) || func_13(9) || func_13(10) || func_13(3) || func_13(2) ||
		func_27(35)) {
		return true;
	}
	return false;
}

// Position - 0xA9F
int func_27(int iParam0) {
	if (iParam0 == 146 || iParam0 == -1) {
		return 0;
	}
	return Global_101700.f_8044.f_99.f_58[iParam0];
}

// Position - 0xACC
void func_28() {
	iLocal_77++;
	if (iLocal_77 > 3) {
		iLocal_77 = 0;
		iLocal_66 = 9;
		return;
	}
	switch (iLocal_77) {
	case 1:
		func_14("CHEAT_AIM_SLOW_MO1");
		fLocal_78 = 0.6f;
		break;

	case 2:
		func_14("CHEAT_AIM_SLOW_MO2");
		fLocal_78 = 0.4f;
		break;

	case 3:
		func_14("CHEAT_AIM_SLOW_MO3");
		fLocal_78 = 0.2f;
		break;

	default: break;
	}
	iLocal_66 = 5;
}

// Position - 0xB3C
void func_29(int iParam0, int iParam1) {
	if (iParam1) {
		gameplay::set_bit(&Global_25435, iParam0);
		func_4(iParam0);
	}
	else {
		gameplay::clear_bit(&Global_25435, iParam0);
	}
}

// Position - 0xB64
void func_30() {
	switch (iLocal_63) {
	case 1: break;

	case 4:
		func_29(16, 1);
		func_33();
		break;

	case 5:
		controls::disable_control_action(2, 37, 1);
		controls::disable_control_action(2, 19, 1);
		if (!player::is_player_playing(player::player_id()) || func_26() || func_32() || func_31(1) ||
			controls::is_disabled_control_just_pressed(2, 37) || controls::is_disabled_control_just_pressed(2, 19) ||
			func_25(23) || func_25(21) || func_25(16)) {
			iLocal_63 = 9;
		}
		break;

	case 9:
		controls::disable_control_action(2, 37, 1);
		controls::disable_control_action(2, 19, 1);
		func_22("CHEAT_SLOW_MO");
		func_29(16, 0);
		iLocal_76 = 0;
		gameplay::set_time_scale(1f);
		iLocal_63 = 1;
		break;

	default: break;
	}
}

// Position - 0xC4B
bool func_31(int iParam0) {
	if (iParam0) {
		return Global_17151.f_4 && Global_17151.f_104 == 4;
	}
	return Global_17151.f_4;
}

// Position - 0xC74
int func_32() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0xC90
void func_33() {
	iLocal_76++;
	if (iLocal_76 > 3) {
		iLocal_63 = 9;
		return;
	}
	switch (iLocal_76) {
	case 1:
		func_14("CHEAT_SLOW_MO1");
		gameplay::set_time_scale(0.6f);
		break;

	case 2:
		func_14("CHEAT_SLOW_MO2");
		gameplay::set_time_scale(0.4f);
		break;

	case 3:
		func_14("CHEAT_SLOW_MO3");
		gameplay::set_time_scale(0.2f);
		break;

	default: break;
	}
	iLocal_63 = 5;
}

// Position - 0xD03
void func_34() {
	vector3 vVar0;
	float fVar3;
	float fVar4;

	switch (iLocal_64) {
	case 1: break;

	case 2:
		func_29(17, 1);
		entity::freeze_entity_position(player::player_ped_id(), 1);
		player::set_player_invincible(player::player_id(), 1);
		entity::set_entity_proofs(player::player_ped_id(), 1, 1, 1, 1, 1, 0, 0, 0);
		weapon::give_weapon_to_ped(player::player_ped_id(), joaat("gadget_parachute"), 1, 0, 1);
		vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
		fVar3 = entity::get_entity_heading(player::player_ped_id());
		gameplay::get_ground_z_for_3d_coord(vVar0, &fVar4, 0);
		fVar4 += 500f;
		entity::set_entity_coords(player::player_ped_id(), vVar0.x, vVar0.y, fVar4, 1, 0, 0, 1);
		entity::set_entity_heading(player::player_ped_id(), fVar3);
		iLocal_72 = gameplay::get_game_timer();
		cam::do_screen_fade_out(0);
		iLocal_64 = 3;
		break;

	case 3:
		if (func_36(1000, iLocal_72)) {
			entity::freeze_entity_position(player::player_ped_id(), 0);
			player::set_player_control(player::player_id(), 1, 0);
			iLocal_72 = gameplay::get_game_timer();
			iLocal_64 = 4;
		}
		break;

	case 4:
		if (func_36(1000, iLocal_72)) {
			controls::disable_control_action(0, 144, 1);
			controls::disable_control_action(0, 149, 1);
			if (func_7() == 0) {
				ped::set_ped_component_variation(player::player_ped_id(), 9, 0, 0, 0);
			}
			else {
				ped::set_ped_component_variation(player::player_ped_id(), 8, 0, 0, 0);
			}
			cam::do_screen_fade_in(250);
			iLocal_72 = gameplay::get_game_timer();
			func_14("CHEAT_SKYFALL");
			gameplay::_set_unk_map_flag(2);
			iLocal_64 = 5;
		}
		break;

	case 5:
		if (!player::is_player_playing(player::player_id()) || func_26() || func_25(23) || func_25(21) || func_25(17)) {
			iLocal_64 = 9;
			break;
		}
		controls::disable_control_action(0, 144, 1);
		ui::hide_hud_component_this_frame(2);
		if (ped::is_ped_in_parachute_free_fall(player::player_ped_id())) {
			entity::apply_force_to_entity(player::player_ped_id(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 1);
			if (entity::has_entity_collided_with_anything(player::player_ped_id())) {
				iLocal_64 = 9;
			}
		}
		else {
			iLocal_64 = 9;
		}
		break;

	case 9:
		func_35();
		func_22("CHEAT_SKYFALL");
		func_29(17, 0);
		iLocal_64 = 1;
		break;

	default: break;
	}
}

// Position - 0xF02
void func_35() {
	if (!ped::is_ped_injured(player::player_ped_id())) {
		weapon::remove_weapon_from_ped(player::player_ped_id(), joaat("gadget_parachute"));
	}
	if (iLocal_62 != 5) {
		player::set_player_invincible(player::player_id(), 0);
		entity::set_entity_proofs(player::player_ped_id(), 0, 0, 0, 0, 0, 0, 0, 0);
	}
	gameplay::_set_unk_map_flag(0);
}

// Position - 0xF47
bool func_36(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = gameplay::get_game_timer();
	iVar1 = iVar0 - iParam0;
	if (iVar1 > iParam1) {
		return true;
	}
	return false;
}

// Position - 0xF68
void func_37() {
	vector3 vVar0;

	switch (iLocal_62) {
	case 1: break;

	case 4:
		func_14("CHEAT_INVINCIBILITY");
		func_29(15, 1);
		iLocal_62 = 5;
		iLocal_74 = gameplay::get_game_timer();
		player::set_player_invincible(player::player_id(), 1);
		entity::set_entity_proofs(player::player_ped_id(), 1, 1, 1, 1, 1, 0, 0, 0);
		break;

	case 5:
		if (!player::is_player_playing(player::player_id()) || ped::is_ped_injured(player::player_ped_id())) {
			iLocal_62 = 9;
			return;
		}
		vVar0 = {func_17(player::player_id())};
		if (func_26() || func_32() || func_25(23) || func_25(21) || func_25(15) || vVar0.z <= -170f) {
			iLocal_62 = 9;
			return;
		}
		iLocal_75 = gameplay::get_game_timer() - iLocal_74;
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("appinternet")) == 0) {
			func_38(iLocal_73 - iLocal_75, "CHEAT_INV", 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
		}
		if (iLocal_75 >= iLocal_73 - 1000) {
			iLocal_62 = 9;
			return;
		}
		player::set_player_invincible(player::player_id(), 1);
		entity::set_entity_proofs(player::player_ped_id(), 1, 1, 1, 1, 1, 0, 0, 0);
		stats::_0x047CBED6F6F8B63C();
		break;

	case 9:
		func_22("CHEAT_INVINCIBILITY_OFF");
		func_29(15, 0);
		iLocal_62 = 1;
		if (!ped::is_ped_injured(player::player_ped_id())) {
			player::set_player_invincible(player::player_id(), 0);
			entity::set_entity_proofs(player::player_ped_id(), 0, 0, 0, 0, 0, 0, 0, 0);
		}
		break;

	default: break;
	}
}

// Position - 0x10E2
void func_38(int iParam0, char *sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14,
			 int iParam15, int iParam16) {
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9) {
		if (iVar0 == -1) {
			if (func_40(7, iVar1) == 0) {
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1) {
		Global_1354542.f_1 = 1;
		func_39(7, iVar0);
		Global_1354542.f_4282[iVar0] = iParam0;
		StringCopy(&Global_1354542.f_4282.f_11[iVar0 /*16*/], sParam1, 64);
		Global_1354542.f_4282.f_172[iVar0] = iParam2;
		Global_1354542.f_4282.f_216[iVar0] = iParam3;
		Global_1354542.f_4282.f_183[iVar0] = iParam4;
		Global_1354542.f_4282.f_194[iVar0] = iParam5;
		Global_1354542.f_4282.f_249[iVar0] = iParam6;
		Global_1354542.f_4282.f_260[iVar0] = iParam7;
		Global_1354542.f_4282.f_205[iVar0] = iParam8;
		Global_1354542.f_4282.f_314[iVar0] = iParam9;
		Global_1354542.f_4282.f_325[iVar0] = iParam10;
		Global_1354542.f_4282.f_357[iVar0] = iParam11;
		Global_1354542.f_4282.f_238[iVar0] = iParam12;
		Global_1354542.f_4282.f_271[iVar0] = iParam13;
		Global_1354542.f_4282.f_368[iVar0] = iParam14;
		Global_1354542.f_4282.f_379[iVar0] = iParam15;
		Global_1354542.f_4282.f_390[iVar0] = iParam16;
	}
}

// Position - 0x1230
void func_39(int iParam0, int iParam1) { gameplay::set_bit(&Global_1354542.f_5703[iParam0], iParam1); }

// Position - 0x1249
int func_40(int iParam0, int iParam1) { return gameplay::is_bit_set(Global_1354542.f_5703[iParam0], iParam1); }

// Position - 0x1262
void func_41() {
	switch (iLocal_59) {
	case 1: break;

	case 4:
		func_14("CHEAT_FLAMING_BULLETS");
		func_29(12, 1);
		iLocal_59 = 5;
		break;

	case 5:
		if (!player::is_player_playing(player::player_id()) || func_25(23) || func_25(21) || func_25(12)) {
			iLocal_59 = 9;
			return;
		}
		if (func_26()) {
			iLocal_59 = 9;
			return;
		}
		gameplay::set_fire_ammo_this_frame(player::player_id());
		break;

	case 9:
		func_22("CHEAT_FLAMING_BULLETS");
		func_29(12, 0);
		iLocal_59 = 1;
		break;

	default: break;
	}
}

// Position - 0x1309
void func_42() {
	switch (iLocal_60) {
	case 1: break;

	case 4:
		func_14("CHEAT_EXPLOSIVE_MELEE");
		func_29(13, 1);
		iLocal_60 = 5;
		break;

	case 5:
		if (!player::is_player_playing(player::player_id()) || func_25(23) || func_25(21) || func_25(13) || func_26()) {
			iLocal_60 = 9;
			return;
		}
		gameplay::set_explosive_melee_this_frame(player::player_id());
		break;

	case 9:
		func_22("CHEAT_EXPLOSIVE_MELEE");
		func_29(13, 0);
		iLocal_60 = 1;
		break;

	default: break;
	}
}

// Position - 0x13AC
void func_43() {
	switch (iLocal_65) {
	case 1: break;

	case 4:
		func_14("CHEAT_DRUNK");
		func_29(18, 1);
		func_58(player::player_ped_id());
		func_56(30000, 1050253722, 1065353216, 0);
		iLocal_65 = 5;
		break;

	case 5:
		if (func_26() || !player::is_player_playing(player::player_id()) || func_25(23) || func_25(21) || func_25(18)) {
			iLocal_65 = 9;
		}
		break;

	case 9:
		func_22("CHEAT_DRUNK");
		func_29(18, 0);
		func_47(player::player_ped_id());
		func_46(1000);
		iLocal_65 = 1;
		break;

	case 10:
		func_44(1);
		func_29(18, 0);
		iLocal_65 = 1;
		break;

	default: break;
	}
}

// Position - 0x1486
void func_44(int iParam0) {
	cam::custom_menu_coordinates(0f);
	cam::_0x0225778816FDC28C(0f);
	cam::set_gameplay_cam_shake_amplitude(0f);
	cam::stop_gameplay_cam_shaking(1);
	cam::set_cinematic_cam_shake_amplitude(0f);
	cam::stop_cinematic_cam_shaking(1);
	audio::_0x12561FCBB62D5B9C(0);
	if (audio::is_audio_scene_active("SAFEHOUSE_STONED_MICHAEL")) {
		audio::stop_audio_scene("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!gameplay::is_string_null_or_empty(&Global_36890)) {
		if (audio::is_audio_scene_active(&Global_36890)) {
			audio::stop_audio_scene(&Global_36890);
		}
	}
	if (cam::does_cam_exist(Global_36879)) {
		if (cam::is_cam_shaking(Global_36879)) {
			cam::set_cam_shake_amplitude(Global_36879, 0f);
			cam::stop_cam_shaking(Global_36879, 1);
		}
	}
	if (cam::is_script_global_shaking()) {
		cam::stop_script_global_shaking(0);
	}
	if (iParam0) {
		if (graphics::get_timecycle_modifier_index() != -1 || graphics::_0x459FD2C8D0AB78BC() != -1) {
			graphics::clear_timecycle_modifier();
		}
		else if (streaming::is_player_switch_in_progress()) {
			graphics::clear_timecycle_modifier();
		}
	}
	Global_36885 = 0f;
	StringCopy(&Global_36886, "", 16);
	StringCopy(&Global_36890, "", 64);
	StringCopy(&Global_36906, "", 16);
	func_45();
}

// Position - 0x1562
void func_45() {
	Global_36878 = 0;
	Global_36879 = 0;
	Global_36880 = 0;
	Global_36881 = 30000;
	Global_36882 = 0f;
	Global_36884 = 0f;
	Global_36883 = 0f;
	Global_36885 = 0f;
	StringCopy(&Global_36886, "", 16);
}

// Position - 0x1594
void func_46(int iParam0) {
	int iVar0;

	if (!Global_36878) {
		return;
	}
	iVar0 = gameplay::get_game_timer();
	Global_36880 = iVar0 + iParam0;
	Global_36881 = iParam0;
}

// Position - 0x15B9
void func_47(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 0) {
		return;
	}
	if (!entity::does_entity_exist(iParam0)) {
		return;
	}
	iVar0 = func_55(iParam0);
	if (iVar0 != -1) {
		iVar1 = Global_36715[iVar0 /*5*/];
		func_50(1, iVar1, 1);
		return;
	}
	iVar2 = func_49(iParam0);
	if (iVar2 == -1) {
		return;
	}
	func_48(iVar2);
}

// Position - 0x1612
void func_48(int iParam0) {
	if (iParam0 < 0 || iParam0 >= 5) {
		return;
	}
	if (Global_36689[iParam0 /*5*/].f_1 != 0) {
		if (Global_36689[iParam0 /*5*/].f_1 == player::player_ped_id()) {
			Global_36910 = 0;
		}
	}
	Global_36689[iParam0 /*5*/] = 13;
	Global_36689[iParam0 /*5*/].f_1 = 0;
	Global_36689[iParam0 /*5*/].f_2 = 0;
	Global_36689[iParam0 /*5*/].f_3 = 0;
	Global_36689[iParam0 /*5*/].f_4 = 0;
	Global_36688--;
	if (Global_36688 < 0) {
		Global_36688 = 0;
	}
}

// Position - 0x1695
int func_49(int iParam0) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5) {
		if (Global_36689[iVar0 /*5*/].f_1 == iParam0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x16C6
void func_50(int iParam0, int iParam1, int iParam2) { func_51(iParam0, iParam1, iParam2, 0, 0); }

// Position - 0x16DA
void func_51(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam0 == -1) {
		return;
	}
	if (iParam1 == -1) {
		return;
	}
	if (iParam2 == 6) {
		return;
	}
	if (func_53(iParam0, iParam1, iParam2)) {
		return;
	}
	iVar0 = func_52();
	if (iVar0 == -1) {
		return;
	}
	Global_36796[iVar0 /*5*/] = iParam0;
	Global_36796[iVar0 /*5*/].f_1 = iParam1;
	Global_36796[iVar0 /*5*/].f_2 = iParam2;
	Global_36796[iVar0 /*5*/].f_3 = iParam3;
	Global_36796[iVar0 /*5*/].f_4 = iParam4;
}

// Position - 0x1751
int func_52() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		if (Global_36796[iVar0 /*5*/].f_2 == 6) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x1782
bool func_53(int iParam0, int iParam1, int iParam2) {
	if (func_54(iParam0, iParam1, iParam2) == -1) {
		return false;
	}
	return true;
}

// Position - 0x179D
int func_54(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		if (iParam2 == Global_36796[iVar0 /*5*/].f_2) {
			if (iParam0 == Global_36796[iVar0 /*5*/]) {
				if (iParam1 == Global_36796[iVar0 /*5*/].f_1) {
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x17E9
int func_55(int iParam0) {
	int iVar0;

	if (iParam0 == 0) {
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		if (Global_36715[iVar0 /*5*/] != -1) {
			if (iParam0 == Global_36715[iVar0 /*5*/].f_1) {
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x1832
void func_56(int iParam0, float fParam1, float fParam2, int iParam3) {
	func_57(-1, iParam0, fParam1, fParam2, iParam3, 1);
}

// Position - 0x1848
void func_57(int iParam0, var uParam1, float fParam2, float fParam3, int iParam4, int iParam5) {
	int iVar0;

	if (Global_3) {
		return;
	}
	if (Global_36878) {
		return;
	}
	if (!iParam5) {
		if (iParam0 < 0) {
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f) {
		return;
	}
	if (!cam::is_gameplay_cam_shaking()) {
		cam::shake_gameplay_cam("DRUNK_SHAKE", fParam3);
	}
	if (!cam::is_cinematic_cam_shaking()) {
		cam::shake_cinematic_cam("DRUNK_SHAKE", fParam3 * Global_36877);
	}
	if (cam::does_cam_exist(iParam4)) {
		cam::shake_cam(iParam4, "DRUNK_SHAKE", fParam3);
		Global_36879 = iParam4;
	}
	else {
		Global_36879 = 0;
	}
	Global_36878 = 1;
	iVar0 = gameplay::get_game_timer();
	Global_36880 = iVar0 + iParam0;
	if (iParam5) {
		if (iParam0 == -1) {
			Global_36880 = -1;
		}
	}
	Global_36881 = uParam1;
	Global_36882 = fParam2;
	Global_36884 = fParam3;
	Global_36883 = fParam3;
}

// Position - 0x1903
int func_58(int iParam0) { return func_59(iParam0, -1, 1); }

// Position - 0x1913
int func_59(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 0) {
		return 0;
	}
	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	iVar0 = func_61(iParam0);
	if (iVar0 != -1) {
		return 1;
	}
	iVar1 = func_49(iParam0);
	if (iVar1 != -1) {
		return 1;
	}
	if (!iParam2) {
		if (iParam1 == 0 || iParam1 < 0) {
			return 0;
		}
	}
	iVar2 = func_60();
	if (iVar2 == -1) {
		return 0;
	}
	Global_36689[iVar2 /*5*/] = 0;
	Global_36689[iVar2 /*5*/].f_1 = iParam0;
	Global_36689[iVar2 /*5*/].f_2 = iParam1;
	Global_36689[iVar2 /*5*/].f_3 = iParam1;
	Global_36689[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == player::player_ped_id()) {
		Global_36910 = 1;
	}
	Global_36688++;
	return 1;
}

// Position - 0x19CF
int func_60() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5) {
		if (Global_36689[iVar0 /*5*/] == 13) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x19FE
int func_61(int iParam0) {
	int iVar0;

	if (iParam0 == 0) {
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		if (iParam0 == Global_36715[iVar0 /*5*/].f_1) {
			return Global_36715[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x1A3F
void func_62() {
	switch (iLocal_58) {
	case 1: break;

	case 4:
		func_14("CHEAT_BANG_BANG");
		func_29(11, 1);
		iLocal_58 = 5;
		break;

	case 5:
		if (!player::is_player_playing(player::player_id()) || func_25(23) || func_25(21) || func_25(11)) {
			iLocal_58 = 9;
			return;
		}
		if (func_26()) {
			iLocal_58 = 9;
			return;
		}
		gameplay::set_explosive_ammo_this_frame(player::player_id());
		break;

	case 9:
		func_22("CHEAT_BANG_BANG");
		func_29(11, 0);
		iLocal_58 = 1;
		break;

	default: break;
	}
}

// Position - 0x1AE6
void func_63() {
	switch (iLocal_61) {
	case 1: break;

	case 4:
		func_4(14);
		func_29(14, 1);
		func_65();
		break;

	case 5:
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (!player::is_player_playing(player::player_id()) || func_26() || func_25(23) || func_25(21) ||
				func_25(14) || func_64(17) || entity::is_entity_in_water(player::player_ped_id())) {
				iLocal_61 = 9;
			}
		}
		else {
			iLocal_61 = 9;
		}
		break;

	case 9:
		func_22("CHEAT_GRAVITY_MOON");
		func_29(14, 0);
		gameplay::set_gravity_level(0);
		iLocal_79 = 0;
		iLocal_61 = 1;
		break;

	default: break;
	}
}

// Position - 0x1BB1
int func_64(int iParam0) {
	if (gameplay::is_bit_set(Global_25435, iParam0)) {
		return 1;
	}
	return 0;
}

// Position - 0x1BCA
void func_65() {
	iLocal_79++;
	if (iLocal_79 > 1) {
		iLocal_61 = 9;
		return;
	}
	switch (iLocal_79) {
	case 1:
		func_14("CHEAT_GRAVITY_MOON");
		gameplay::set_gravity_level(1);
		break;

	default: break;
	}
	iLocal_61 = 5;
}

// Position - 0x1C07
void func_66() {
	func_85();
	func_79();
	func_78();
	func_77();
	func_76();
	func_75();
	func_74();
	func_72();
	func_71();
	func_70();
	func_67();
}

// Position - 0x1C3B
void func_67() {
	if (iLocal_57 == 4) {
		iLocal_57 = 1;
		if (func_25(23) || func_25(22) || func_25(10)) {
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68()) {
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (player::is_player_playing(player::player_id())) {
			func_14("CHEAT_GIVE_PARACHUTE");
			weapon::give_weapon_to_ped(player::player_ped_id(), joaat("gadget_parachute"), 1, 1, 1);
			func_4(10);
		}
	}
}

// Position - 0x1CB3
bool func_68() {
	if (iLocal_93) {
		iLocal_93 = 0;
		return false;
	}
	if (func_69(0)) {
		return true;
	}
	return false;
}

// Position - 0x1CD4
bool func_69(int iParam0) {
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

// Position - 0x1D2E
void func_70() {
	int iVar0;

	if (iLocal_56 == 4) {
		iLocal_56 = 1;
		if (func_25(23) || func_25(22) || func_25(9)) {
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68()) {
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (player::is_player_playing(player::player_id())) {
			if (player::get_max_wanted_level() == 0) {
				func_19("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = player::get_player_wanted_level(player::player_id());
			if (iVar0 > 0) {
				func_14("CHEAT_WANTED_DOWN");
				player::set_player_wanted_level(player::player_id(), iVar0 - 1, 0);
				func_4(9);
			}
			else {
				func_19("CHEAT_WANTED_DOWN_DENIED");
			}
		}
	}
}

// Position - 0x1DD1
void func_71() {
	int iVar0;

	if (iLocal_55 == 4) {
		iLocal_55 = 1;
		if (func_25(23) || func_25(22) || func_25(8)) {
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68()) {
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (player::is_player_playing(player::player_id())) {
			if (player::get_max_wanted_level() == 0) {
				func_19("CHEAT_NOT_NOW");
				return;
			}
			iVar0 = player::get_player_wanted_level(player::player_id());
			if (iVar0 < player::get_max_wanted_level()) {
				player::set_player_wanted_level(player::player_id(), iVar0 + 1, 0);
				player::set_player_wanted_level_now(player::player_id(), 0);
				func_14("CHEAT_WANTED_UP");
				func_4(8);
			}
			else {
				func_19("CHEAT_WANTED_UP_DENIED");
			}
		}
	}
}

// Position - 0x1E80
void func_72() {
	if (iLocal_54 == 4) {
		iLocal_54 = 1;
		if (func_25(23) || func_25(22) || func_25(7) || func_13(9) || func_13(10) ||
			!player::is_special_ability_unlocked(func_73()) ||
			!player::is_special_ability_enabled(player::player_id())) {
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68()) {
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (player::is_player_playing(player::player_id())) {
			player::special_ability_fill_meter(player::player_id(), 1);
			func_14("CHEAT_SPECIAL_ABILITY");
			func_4(7);
		}
	}
}

// Position - 0x1F25
var func_73() { return entity::get_entity_model(player::player_ped_id()); }

// Position - 0x1F35
void func_74() {
	int iVar0;

	if (iLocal_53 == 4) {
		iLocal_53 = 1;
		if (func_25(23) || func_25(22) || func_25(6) || func_13(9) || func_13(10)) {
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68()) {
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (player::is_player_playing(player::player_id())) {
			func_14("CHEAT_HEALTH_ARMOR");
			func_4(6);
			entity::set_entity_health(player::player_ped_id(), entity::get_entity_max_health(player::player_ped_id()));
			ped::add_armour_to_ped(player::player_ped_id(), player::get_player_max_armour(player::player_id()) -
																ped::get_ped_armour(player::player_ped_id()));
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				iVar0 = ped::get_vehicle_ped_is_using(player::player_ped_id());
				if (entity::does_entity_exist(iVar0)) {
					if (!entity::is_entity_dead(iVar0, 0)) {
						vehicle::set_vehicle_fixed(iVar0);
					}
				}
			}
		}
	}
}

// Position - 0x200C
void func_75() {
	if (iLocal_52 == 4) {
		iLocal_52 = 1;
		if (func_25(23) || func_25(22) || func_25(5)) {
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68()) {
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		func_4(5);
		switch (iLocal_71) {
		case 0: iLocal_71 = 1;

		case 1:
			gameplay::set_weather_type_now_persist("EXTRASUNNY");
			gameplay::clear_weather_type_persist();
			func_14("CHEAT_ADVANCE_WEATHER_EXTRA_SUNNY");
			iLocal_71 = 2;
			break;

		case 2:
			gameplay::set_weather_type_now_persist("CLEAR");
			gameplay::clear_weather_type_persist();
			func_14("CHEAT_ADVANCE_WEATHER_CLEAR");
			iLocal_71 = 3;
			break;

		case 3:
			gameplay::set_weather_type_now_persist("CLOUDS");
			gameplay::clear_weather_type_persist();
			func_14("CHEAT_ADVANCE_WEATHER_CLOUDY");
			iLocal_71 = 4;
			break;

		case 4:
			gameplay::set_weather_type_now_persist("SMOG");
			gameplay::clear_weather_type_persist();
			func_14("CHEAT_ADVANCE_WEATHER_SMOGGY");
			iLocal_71 = 6;
			break;

		case 6:
			gameplay::set_weather_type_now_persist("OVERCAST");
			gameplay::clear_weather_type_persist();
			func_14("CHEAT_ADVANCE_WEATHER_OVERCAST");
			iLocal_71 = 7;
			break;

		case 7:
			gameplay::set_weather_type_now_persist("RAIN");
			gameplay::clear_weather_type_persist();
			func_14("CHEAT_ADVANCE_WEATHER_RAIN");
			func_29(5, 1);
			iLocal_71 = 8;
			break;

		case 8:
			gameplay::set_weather_type_now_persist("THUNDER");
			gameplay::clear_weather_type_persist();
			func_14("CHEAT_ADVANCE_WEATHER_THUNDER");
			iLocal_71 = 9;
			break;

		case 9:
			gameplay::set_weather_type_now_persist("CLEARING");
			gameplay::clear_weather_type_persist();
			func_14("CHEAT_ADVANCE_WEATHER_CLEARING");
			iLocal_71 = 11;
			break;

		case 11:
			gameplay::set_weather_type_now_persist("XMAS");
			gameplay::clear_weather_type_persist();
			func_14("CHEAT_ADVANCE_WEATHER_SNOW");
			iLocal_71 = 0;
			break;

		default: break;
		}
	}
}

// Position - 0x219B
void func_76() {
	if (iLocal_51 == 4) {
		iLocal_51 = 1;
		if (func_25(23) || func_25(22) || func_25(4)) {
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68()) {
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		func_14("CHEAT_GIVE_WEAPONS");
		func_4(4);
		if (player::is_player_playing(player::player_id())) {
			weapon::give_delayed_weapon_to_ped(player::player_ped_id(), joaat("weapon_knife"), -1, 0);
			weapon::give_delayed_weapon_to_ped(player::player_ped_id(), joaat("weapon_smg"), 300, 0);
			weapon::give_delayed_weapon_to_ped(player::player_ped_id(), joaat("weapon_assaultrifle"), 300, 1);
			weapon::give_delayed_weapon_to_ped(player::player_ped_id(), joaat("weapon_pumpshotgun"), 150, 0);
			weapon::give_delayed_weapon_to_ped(player::player_ped_id(), joaat("weapon_sniperrifle"), 30, 0);
			weapon::give_delayed_weapon_to_ped(player::player_ped_id(), joaat("weapon_grenade"), 5, 0);
			weapon::give_delayed_weapon_to_ped(player::player_ped_id(), joaat("weapon_rpg"), 5, 0);
		}
	}
}

// Position - 0x2270
void func_77() {
	switch (iLocal_50) {
	case 1: break;

	case 4:
		func_14("CHEAT_FAST_SWIM");
		func_29(3, 1);
		iLocal_50 = 5;
		break;

	case 5:
		if (!player::is_player_playing(player::player_id()) || func_25(23) || func_25(22) || func_25(3)) {
			iLocal_50 = 9;
		}
		else {
			player::set_swim_multiplier_for_player(player::player_id(), 1.49f);
			stats::_0x047CBED6F6F8B63C();
		}
		break;

	case 9:
		player::set_swim_multiplier_for_player(player::player_id(), 1f);
		func_22("CHEAT_FAST_SWIM");
		func_29(3, 0);
		iLocal_50 = 1;
		break;

	default: break;
	}
}

// Position - 0x2318
void func_78() {
	switch (iLocal_49) {
	case 1: break;

	case 4:
		func_14("CHEAT_FAST_RUN");
		func_29(2, 1);
		iLocal_49 = 5;
		break;

	case 5:
		if (!player::is_player_playing(player::player_id()) || ped::is_ped_injured(player::player_ped_id()) ||
			func_25(23) || func_25(22) || func_25(2)) {
			iLocal_49 = 9;
		}
		else {
			if (ai::is_ped_running(player::player_ped_id()) ||
				ai::is_ped_sprinting(player::player_ped_id()) &&
					!ped::is_ped_getting_into_a_vehicle(player::player_ped_id())) {
				player::set_run_sprint_multiplier_for_player(player::player_id(), 1.49f);
			}
			else {
				player::set_run_sprint_multiplier_for_player(player::player_id(), 1f);
			}
			stats::_0x047CBED6F6F8B63C();
		}
		break;

	case 9:
		player::set_run_sprint_multiplier_for_player(player::player_id(), 1f);
		func_22("CHEAT_FAST_RUN");
		func_29(2, 0);
		iLocal_49 = 1;
		break;

	default: break;
	}
}

// Position - 0x2401
void func_79() {
	int iVar0;

	switch (iLocal_48) {
	case 1: break;

	case 4:
		func_14("CHEAT_SLIDEY_CARS");
		func_29(1, 1);
		iLocal_48 = 5;
		break;

	case 5:
		if (!player::is_player_playing(player::player_id()) || func_25(23) || func_25(22) || func_25(1)) {
			iLocal_48 = 9;
		}
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
			if (!entity::is_entity_dead(iVar0, 0)) {
				if (vehicle::get_ped_in_vehicle_seat(iVar0, -1, 0) == player::player_ped_id()) {
					if (iLocal_69 == 0) {
						iLocal_69 = iVar0;
						if (!entity::is_entity_dead(iLocal_69, 0)) {
							if (func_80(1)) {
								vehicle::set_vehicle_reduce_grip(iLocal_69, 1);
							}
							else {
								iLocal_69 = 0;
							}
						}
					}
					else if (iLocal_69 != iVar0) {
						if (!entity::is_entity_dead(iLocal_69, 0)) {
							vehicle::set_vehicle_reduce_grip(iLocal_69, 0);
						}
						iLocal_69 = 0;
					}
				}
			}
		}
		break;

	case 9:
		func_22("CHEAT_SLIDEY_CARS");
		iLocal_48 = 10;
		break;

	case 10:
		if (!entity::is_entity_dead(iLocal_69, 0)) {
			vehicle::set_vehicle_reduce_grip(iLocal_69, 0);
			iLocal_69 = 0;
		}
		func_29(1, 0);
		iLocal_48 = 1;
		break;

	default: break;
	}
}

// Position - 0x2528
bool func_80(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	char *sVar4;

	if (!ped::is_ped_injured(player::player_ped_id())) {
		iVar0 = player::get_players_last_vehicle();
		if (entity::does_entity_exist(iVar0)) {
			if (vehicle::is_vehicle_driveable(iVar0, 0)) {
				iVar1 = entity::get_entity_model(iVar0);
				iVar2 = func_7();
				if ((iParam0 & 1) != 0) {
					if (!vehicle::is_this_model_a_car(iVar1)) {
						return false;
					}
				}
				if ((iParam0 & 2) != 0) {
					if (!vehicle::is_this_model_a_bike(iVar1)) {
						return false;
					}
				}
				if ((iParam0 & 4) != 0) {
					if (!vehicle::is_this_model_a_heli(iVar1)) {
						return false;
					}
				}
				if ((iParam0 & 8) != 0) {
					if (!vehicle::is_this_model_a_boat(iVar1)) {
						return false;
					}
				}
				if ((iParam0 & 16) != 0) {
					if (entity::get_entity_bone_index_by_name(iVar0, "door_dside_r") != -1 ||
						entity::get_entity_bone_index_by_name(iVar0, "door_pside_r") != -1) {
						return false;
					}
				}
				if ((iParam0 & 32) != 0) {
					if (entity::get_entity_bone_index_by_name(iVar0, "door_dside_r") == -1 ||
						entity::get_entity_bone_index_by_name(iVar0, "door_pside_r") == -1) {
						return false;
					}
				}
				if ((iParam0 & 64) != 0) {
					if (vehicle::is_this_model_a_bike(iVar1)) {
						if (entity::get_entity_bone_index_by_name(iVar0, "seat_r") == -1) {
							return false;
						}
					}
					else if (entity::get_entity_bone_index_by_name(iVar0, "seat_dside_r") != -1 ||
							 entity::get_entity_bone_index_by_name(iVar0, "seat_pside_r") != -1) {
						return false;
					}
				}
				if ((iParam0 & 128) != 0) {
					if (entity::get_entity_bone_index_by_name(iVar0, "seat_dside_r") == -1 ||
						entity::get_entity_bone_index_by_name(iVar0, "seat_pside_r") == -1) {
						return false;
					}
				}
				if ((iParam0 & 256) != 0) {
					if (!func_9(iVar2)) {
						return false;
					}
					if (func_83(iVar2, 0) != iVar1) {
						return false;
					}
				}
				if ((iParam0 & 512) != 0) {
					if (!vehicle::is_this_model_a_car(iVar1) && !vehicle::is_this_model_a_bike(iVar1)) {
						return false;
					}
					if (vehicle::is_big_vehicle(iVar0)) {
						return false;
					}
					sVar4 = entity::get_entity_script(iVar0, &uVar3);
					if (!gameplay::is_string_null_or_empty(sVar4)) {
						if (gameplay::get_hash_key(sVar4) == gameplay::get_hash_key("taxiService")) {
							return false;
						}
					}
					if (func_81(iVar0, iVar2, 0)) {
						return false;
					}
				}
				return true;
			}
		}
	}
	return false;
}

// Position - 0x2729
bool func_81(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	char *sVar1;
	int iVar9;

	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0)) {
		return false;
	}
	iVar0 = 0;
	while (func_82(iParam1, iVar0, &sVar1, &iVar9)) {
		if (!iParam2 || gameplay::is_bit_set(Global_101700.f_6188[iVar9], 0)) {
			if (vehicle::is_vehicle_in_garage_area(&sVar1, iParam0)) {
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0x279A
bool func_82(int iParam0, int iParam1, char *sParam2, int *iParam3) {
	StringCopy(sParam2, "", 32);
	switch (iParam0) {
	case 0:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Michael - Beverly Hills", 32);
			*iParam3 = 0;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Trevor - Countryside", 32);
			*iParam3 = 1;
			return true;
		}
		break;

	case 1:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Franklin - Aunt", 32);
			*iParam3 = 5;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Franklin - Hills", 32);
			*iParam3 = 6;
			return true;
		}
		break;

	case 2:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Trevor - Countryside", 32);
			*iParam3 = 2;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Trevor - City", 32);
			*iParam3 = 3;
			return true;
		}
		else if (iParam1 == 2) {
			StringCopy(sParam2, "Trevor - Stripclub", 32);
			*iParam3 = 4;
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x2872
int func_83(int iParam0, int iParam1) {
	struct<82> Var0;

	if (func_9(iParam0)) {
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_84(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x28B4
void func_84(int iParam0, var *uParam1, int iParam2) {
	int iVar0;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0) {
	case 0:
		iVar0 = joaat("tailgater");
		if (Global_101700.f_8044.f_99.f_58[128] && !Global_101700.f_8044.f_99.f_58[131]) {
			iVar0 = joaat("premier");
		}
		switch (iVar0) {
		case joaat("tailgater"):
			*uParam1 = iVar0;
			uParam1->f_2 = 3f;
			uParam1->f_4 = 0;
			uParam1->f_9 = 1;
			uParam1->f_11[0] = 1;
			StringCopy(&uParam1->f_27, "5MDS003", 16);
			break;

		case joaat("premier"):
			*uParam1 = iVar0;
			uParam1->f_2 = 14.9f;
			uParam1->f_5 = 43;
			uParam1->f_6 = 43;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_9 = 0;
			StringCopy(&uParam1->f_27, "880HS955", 16);
			break;
		}
		break;

	case 2:
		iVar0 = joaat("bodhi2");
		switch (iVar0) {
		case joaat("bodhi2"):
			*uParam1 = iVar0;
			uParam1->f_2 = 14f;
			uParam1->f_5 = 32;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			StringCopy(&uParam1->f_27, "BETTY 32", 16);
			if (Global_101700.f_8044.f_99.f_58[119]) {
				uParam1->f_11[1] = 1;
			}
			break;
		}
		break;

	case 1:
		if (iParam2 == 1) {
			iVar0 = joaat("buffalo2");
		}
		else if (iParam2 == 2) {
			iVar0 = joaat("bagger");
		}
		else if (Global_101700.f_8044.f_99.f_58[118]) {
			iVar0 = joaat("bagger");
		}
		else {
			iVar0 = joaat("buffalo2");
		}
		switch (iVar0) {
		case joaat("bagger"):
			*uParam1 = iVar0;
			uParam1->f_2 = 6f;
			uParam1->f_5 = 53;
			uParam1->f_6 = 0;
			uParam1->f_7 = 59;
			uParam1->f_8 = 156;
			StringCopy(&uParam1->f_27, "FC88", 16);
			break;

		case joaat("buffalo2"):
			*uParam1 = iVar0;
			uParam1->f_2 = 0f;
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_10 = 1;
			StringCopy(&uParam1->f_27, "FC1988", 16);
			uParam1->f_11[0] = 1;
			uParam1->f_11[1] = 1;
			uParam1->f_11[2] = 1;
			uParam1->f_11[3] = 1;
			uParam1->f_11[4] = 1;
			uParam1->f_11[5] = 1;
			uParam1->f_11[6] = 1;
			uParam1->f_11[7] = 1;
			uParam1->f_11[8] = 1;
			break;
		}
		break;

	default: break;
	}
}

// Position - 0x2B10
void func_85() {
	switch (iLocal_47) {
	case 1: break;

	case 4:
		func_14("CHEAT_SUPER_JUMP");
		func_29(0, 1);
		iLocal_47 = 5;
		break;

	case 5:
		if (!player::is_player_playing(player::player_id()) || func_25(23) || func_25(22) || func_25(0) ||
			interior::is_interior_scene()) {
			iLocal_47 = 9;
			return;
		}
		gameplay::set_super_jump_this_frame(player::player_id());
		ped::set_ped_reset_flag(player::player_ped_id(), 217, 1);
		break;

	case 9:
		func_22("CHEAT_SUPER_JUMP");
		func_29(0, 0);
		iLocal_47 = 1;
		break;

	default: break;
	}
}

// Position - 0x2BB9
void func_86() {
	if (func_109() || iLocal_94 != 0 || func_13(14)) {
		controls::disable_control_action(2, 243, 1);
	}
	func_108();
	if (ped::is_ped_injured(player::player_ped_id())) {
		return;
	}
	if (ai::is_ped_being_arrested(player::player_ped_id())) {
		return;
	}
	if (!player::is_player_playing(player::player_id())) {
		return;
	}
	if (!player::is_player_control_on(player::player_id())) {
		return;
	}
	if (func_32() || streaming::is_player_switch_in_progress()) {
		return;
	}
	if (func_107()) {
		if (!iLocal_92) {
			func_106();
			iLocal_92 = 1;
		}
		return;
	}
	iLocal_92 = 0;
	iLocal_93 = 0;
	if (func_105(988027572, 12) || gameplay::_has_cheat_string_just_been_entered(joaat("buzzoff")) ||
		func_104(20, joaat("buzzard"))) {
		func_101(joaat("buzzard"), "CHEAT_SPAWN_VEH1");
	}
	if (func_105(-1134279030, 11) || gameplay::_has_cheat_string_just_been_entered(joaat("bandit")) ||
		func_104(20, joaat("bmx"))) {
		func_101(joaat("bmx"), "CHEAT_SPAWN_VEH2");
	}
	if (func_105(971352167, 10) || gameplay::_has_cheat_string_just_been_entered(joaat("holein1")) ||
		func_104(20, joaat("caddy"))) {
		func_101(joaat("caddy"), "CHEAT_SPAWN_VEH3");
	}
	if (func_105(-269863225, 10) || gameplay::_has_cheat_string_just_been_entered(joaat("comet")) ||
		func_104(20, joaat("comet2"))) {
		func_101(joaat("comet2"), "CHEAT_SPAWN_VEH4");
	}
	if (func_105(458579068, 12) || gameplay::_has_cheat_string_just_been_entered(joaat("flyspray")) ||
		func_104(20, joaat("duster"))) {
		func_101(joaat("duster"), "CHEAT_SPAWN_VEH5");
	}
	if (func_105(-666513193, 12) || gameplay::_has_cheat_string_just_been_entered(joaat("rocket")) ||
		func_104(20, joaat("pcj"))) {
		func_101(joaat("pcj"), "CHEAT_SPAWN_VEH6");
	}
	if (func_105(-1245984749, 10) || gameplay::_has_cheat_string_just_been_entered(joaat("rapidgt")) ||
		func_104(20, joaat("rapidgt"))) {
		func_101(joaat("rapidgt"), "CHEAT_SPAWN_VEH7");
	}
	if (func_105(2076774618, 12) || gameplay::_has_cheat_string_just_been_entered(joaat("offroad")) ||
		func_104(20, joaat("sanchez"))) {
		func_101(joaat("sanchez"), "CHEAT_SPAWN_VEH8");
	}
	if (func_105(855685457, 9) || gameplay::_has_cheat_string_just_been_entered(joaat("vinewood")) ||
		func_104(20, joaat("stretch"))) {
		func_101(joaat("stretch"), "CHEAT_SPAWN_VEH9");
	}
	if (func_105(-591395876, 12) || gameplay::_has_cheat_string_just_been_entered(joaat("barnstorm")) ||
		func_104(20, joaat("stunt"))) {
		func_101(joaat("stunt"), "CHEAT_SPAWN_VEH10");
	}
	if (func_105(-1399217582, 10) || gameplay::_has_cheat_string_just_been_entered(joaat("trashed")) ||
		func_104(20, joaat("trash"))) {
		func_101(joaat("trash"), "CHEAT_SPAWN_VEH11");
	}
	if (func_100()) {
		if (func_105(-375917581, 10) || gameplay::_has_cheat_string_just_been_entered(joaat("extinct")) ||
			func_104(20, joaat("dodo"))) {
			func_101(joaat("dodo"), "CHEAT_SPAWN_VEH12");
		}
		if (func_105(-2124307881, 10) || gameplay::_has_cheat_string_just_been_entered(joaat("deathcar")) ||
			func_104(20, joaat("dukes2"))) {
			func_101(joaat("dukes2"), "CHEAT_SPAWN_VEH13");
		}
		if (func_105(1028964594, 9) || gameplay::_has_cheat_string_just_been_entered(joaat("bubbles")) ||
			func_104(20, joaat("submersible2"))) {
			func_101(joaat("submersible2"), "CHEAT_SPAWN_VEH14");
		}
	}
	if (func_105(-393416581, 11) || gameplay::_has_cheat_string_just_been_entered(joaat("hoptoit")) || func_104(0, 0)) {
		func_99();
	}
	if (func_105(-296509791, 8) || gameplay::_has_cheat_string_just_been_entered(joaat("snowday")) || func_104(1, 0)) {
		func_98();
	}
	if (func_105(1120820643, 7) || gameplay::_has_cheat_string_just_been_entered(joaat("catchme")) || func_104(2, 0)) {
		func_97();
	}
	if (func_105(-421458016, 9) || gameplay::_has_cheat_string_just_been_entered(joaat("gotgills")) || func_104(3, 0)) {
		func_96();
	}
	if (func_105(372390926, 12) || gameplay::_has_cheat_string_just_been_entered(joaat("toolup")) || func_104(4, 0)) {
		iLocal_51 = 4;
	}
	if (func_105(606506837, 8) || gameplay::_has_cheat_string_just_been_entered(joaat("makeitrain")) ||
		func_104(5, 0)) {
		iLocal_52 = 4;
	}
	if (func_105(453014206, 12) || gameplay::_has_cheat_string_just_been_entered(joaat("turtle")) || func_104(6, 0)) {
		iLocal_53 = 4;
	}
	if (func_105(1773187142, 9) || gameplay::_has_cheat_string_just_been_entered(joaat("powerup")) || func_104(7, 0)) {
		iLocal_54 = 4;
	}
	if (func_105(1173296014, 10) || gameplay::_has_cheat_string_just_been_entered(joaat("fugitive")) ||
		func_104(8, 0)) {
		iLocal_55 = 4;
	}
	if (func_105(-381269753, 10) || gameplay::_has_cheat_string_just_been_entered(joaat("lawyerup")) ||
		func_104(9, 0)) {
		iLocal_56 = 4;
	}
	if (func_105(-2023988698, 11) || gameplay::_has_cheat_string_just_been_entered(joaat("skydive")) ||
		func_104(10, 0)) {
		iLocal_57 = 4;
	}
	if (func_105(-835863906, 12) || gameplay::_has_cheat_string_just_been_entered(joaat("highex")) || func_104(11, 0)) {
		func_95();
	}
	if (func_105(1958387485, 12) || gameplay::_has_cheat_string_just_been_entered(joaat("incendiary")) ||
		func_104(12, 0)) {
		func_94();
	}
	if (func_105(-903985180, 9) || gameplay::_has_cheat_string_just_been_entered(joaat("hothands")) ||
		func_104(13, 0)) {
		func_93();
	}
	if (func_105(2087642905, 9) || gameplay::_has_cheat_string_just_been_entered(joaat("floater")) || func_104(14, 0)) {
		func_92();
	}
	if (func_105(1257820019, 10) || gameplay::_has_cheat_string_just_been_entered(joaat("painkiller")) ||
		func_104(15, 0)) {
		func_91();
	}
	if (func_105(1540206179, 7) || gameplay::_has_cheat_string_just_been_entered(joaat("slowmo")) || func_104(16, 0)) {
		func_90();
	}
	if (func_105(115565392, 16) || gameplay::_has_cheat_string_just_been_entered(joaat("skyfall")) || func_104(17, 0)) {
		func_89();
	}
	if (func_105(-1276513277, 8) || gameplay::_has_cheat_string_just_been_entered(joaat("liquor")) || func_104(18, 0)) {
		func_88();
	}
	if (func_105(2040433593, 9) || gameplay::_has_cheat_string_just_been_entered(joaat("deadeye")) || func_104(19, 0)) {
		func_87();
	}
}

// Position - 0x331D
void func_87() {
	if (func_26()) {
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_68()) {
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (func_25(23) || func_25(21) || func_25(16)) {
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_63 != 1) {
		func_19("CHEAT_NOT_NOW");
	}
	else {
		iLocal_66 = 4;
	}
}

// Position - 0x3389
void func_88() {
	if (func_26()) {
		func_19("CHEAT_MISSION_DENIED");
		iLocal_65 = 1;
		return;
	}
	if (func_68()) {
		func_19("CHEAT_PHONE_DENIED");
		iLocal_65 = 1;
		return;
	}
	if (func_25(23) || func_25(21) || func_25(18)) {
		func_19("CHEAT_NOT_NOW");
		iLocal_65 = 1;
		return;
	}
	if (iLocal_65 == 1) {
		iLocal_65 = 4;
	}
	else if (iLocal_65 == 5) {
		iLocal_65 = 9;
	}
}

// Position - 0x3400
void func_89() {
	if (func_26()) {
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_68()) {
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (interior::is_interior_scene()) {
		func_19("CHEAT_NOT_HERE");
		return;
	}
	if (iLocal_64 != 1) {
		func_19("CHEAT_ALREADY_ACTIVE");
		return;
	}
	if (func_25(23) || func_25(21) || func_25(17) || func_64(0) ||
		ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) || !cam::is_gameplay_cam_rendering()) {
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (ped::is_ped_injured(player::player_ped_id()) || player::is_player_being_arrested(player::player_id(), 0) ||
		script::_get_number_of_instances_of_script_with_name_hash(joaat("respawn_controller")) > 0) {
		func_19("CHEAT_NOT_NOW");
		return;
	}
	iLocal_64 = 2;
}

// Position - 0x34D9
void func_90() {
	if (func_26()) {
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_68()) {
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (func_25(23) || func_25(21) || func_25(16)) {
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_66 != 1) {
		func_19("CHEAT_NOT_NOW");
	}
	else {
		iLocal_63 = 4;
	}
}

// Position - 0x3545
void func_91() {
	vector3 vVar0;

	vVar0 = {func_17(player::player_id())};
	if (func_26()) {
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_68()) {
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (func_25(23) || func_25(21) || func_25(15) || vVar0.z <= -170f) {
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (iLocal_62 == 1) {
		iLocal_62 = 4;
	}
	else if (iLocal_62 == 5) {
		iLocal_62 = 9;
	}
}

// Position - 0x35CF
void func_92() {
	if (func_26()) {
		func_19("CHEAT_MISSION_DENIED");
		return;
	}
	if (func_68()) {
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (func_25(23) || func_25(21) || func_25(14) || func_64(17) ||
		entity::is_entity_in_water(player::player_ped_id())) {
		func_19("CHEAT_NOT_NOW");
		return;
	}
	iLocal_61 = 4;
}

// Position - 0x3644
void func_93() {
	if (func_26()) {
		func_19("CHEAT_MISSION_DENIED");
		iLocal_60 = 1;
		return;
	}
	if (func_68()) {
		func_19("CHEAT_PHONE_DENIED");
		iLocal_60 = 1;
		return;
	}
	if (func_25(23) || func_25(21) || func_25(13)) {
		func_19("CHEAT_NOT_NOW");
		iLocal_60 = 1;
		return;
	}
	if (iLocal_60 == 1) {
		iLocal_60 = 4;
	}
	else if (iLocal_60 == 5) {
		iLocal_60 = 9;
	}
}

// Position - 0x36BB
void func_94() {
	if (func_26()) {
		func_19("CHEAT_MISSION_DENIED");
		iLocal_59 = 1;
		return;
	}
	if (func_68()) {
		func_19("CHEAT_PHONE_DENIED");
		iLocal_59 = 1;
		return;
	}
	if (func_25(23) || func_25(21) || func_25(12)) {
		func_19("CHEAT_NOT_NOW");
		iLocal_59 = 1;
		return;
	}
	if (iLocal_59 == 1) {
		iLocal_59 = 4;
	}
	else if (iLocal_59 == 5) {
		iLocal_59 = 9;
	}
}

// Position - 0x3732
void func_95() {
	if (func_26()) {
		func_19("CHEAT_MISSION_DENIED");
		iLocal_58 = 1;
		return;
	}
	if (func_68()) {
		func_19("CHEAT_PHONE_DENIED");
		iLocal_58 = 1;
		return;
	}
	if (func_25(23) || func_25(21) || func_25(11)) {
		func_19("CHEAT_NOT_NOW");
		iLocal_58 = 1;
		return;
	}
	if (iLocal_58 == 1) {
		iLocal_58 = 4;
	}
	else if (iLocal_58 == 5) {
		iLocal_58 = 9;
	}
}

// Position - 0x37A9
void func_96() {
	if (func_25(23) || func_25(22) || func_25(3) || func_13(9) || func_13(10)) {
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_68()) {
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_50 == 1) {
		iLocal_50 = 4;
	}
	else if (iLocal_50 == 5) {
		iLocal_50 = 9;
	}
}

// Position - 0x381C
void func_97() {
	if (func_25(23) || func_25(22) || func_25(2) || func_13(9) || func_13(10)) {
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_68()) {
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_49 == 1) {
		iLocal_49 = 4;
	}
	else if (iLocal_49 == 5) {
		iLocal_49 = 9;
	}
}

// Position - 0x388F
void func_98() {
	if (func_25(23) || func_25(22) || func_25(1)) {
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_68()) {
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_48 == 1) {
		iLocal_48 = 4;
	}
	else if (iLocal_48 == 5) {
		iLocal_48 = 9;
	}
}

// Position - 0x38EA
void func_99() {
	if (func_25(23) || func_25(22) || func_25(0) || interior::is_interior_scene()) {
		func_19("CHEAT_NOT_NOW");
		return;
	}
	if (func_68()) {
		func_19("CHEAT_PHONE_DENIED");
		return;
	}
	if (iLocal_47 == 1) {
		iLocal_47 = 4;
	}
	else if (iLocal_47 == 5) {
		iLocal_47 = 9;
	}
}

// Position - 0x394F
bool func_100() {
	int iVar0;

	if (network::network_is_signed_in()) {
		if (network::_network_are_ros_available()) {
			if (network::_0x593570C289A77688()) {
				stats::stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				gameplay::set_bit(&iVar0, 2);
				gameplay::set_bit(&iVar0, 4);
				gameplay::set_bit(&iVar0, 6);
				gameplay::set_bit(&Global_25, 2);
				gameplay::set_bit(&Global_25, 4);
				gameplay::set_bit(&Global_25, 6);
				stats::stat_set_int(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (gameplay::_0x5AA3BEFA29F03AD4()) {
					iVar0 = gameplay::get_profile_setting(866);
					gameplay::set_bit(&iVar0, 0);
					stats::_0xDAC073C7901F9E15(iVar0);
				}
				return true;
			}
		}
	}
	if (Global_139179 == 2) {
		return true;
	}
	else if (Global_139179 == 3) {
		return false;
	}
	if (gameplay::_0x5AA3BEFA29F03AD4()) {
		if (gameplay::is_bit_set(gameplay::get_profile_setting(866), 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x3A0A
void func_101(int iParam0, char *sParam1) {
	if (iLocal_46 == 1) {
		if (func_13(9) || script::_get_number_of_instances_of_script_with_name_hash(joaat("barry1")) > 0 ||
			script::_get_number_of_instances_of_script_with_name_hash(joaat("tennis")) > 0 || func_25(23) ||
			func_25(22) || func_25(20)) {
			func_19("CHEAT_NOT_NOW");
			return;
		}
		if (func_68()) {
			func_19("CHEAT_PHONE_DENIED");
			return;
		}
		if (!func_102(iParam0)) {
			func_19("CHEAT_VEHICLE_LOCKED_DENIED");
			return;
		}
		iLocal_67 = iParam0;
		sLocal_70 = sParam1;
		iLocal_46 = 2;
	}
}

// Position - 0x3AA4
int func_102(int iParam0) {
	switch (iParam0) {
	case joaat("dodo"):
		if (func_103(66, 0) == 0) {
			return 0;
		}
		break;

	case joaat("dukes2"):
		if (func_103(64, 0) == 0) {
			return 0;
		}
		break;

	case joaat("submersible2"):
		if (func_103(63, 0) == 0) {
			return 0;
		}
		break;
	}
	return 1;
}

// Position - 0x3AFC
int func_103(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return 0;
	}
	return gameplay::is_bit_set(Global_101700.f_31389[iParam0], iParam1);
}

// Position - 0x3B1F
int func_104(int iParam0, int iParam1) {
	if (gameplay::is_bit_set(Global_25437, iParam0)) {
		if (iParam1 != 0) {
			if (iParam1 == Global_25438) {
				gameplay::clear_bit(&Global_25437, iParam0);
				iLocal_93 = 1;
				return 1;
			}
			else {
				return 0;
			}
		}
		else {
			gameplay::clear_bit(&Global_25437, iParam0);
			iLocal_93 = 1;
			return 1;
		}
	}
	return 0;
}

// Position - 0x3B6C
int func_105(int iParam0, int iParam1) {
	if (!func_13(14)) {
		return gameplay::_has_button_combination_just_been_entered(iParam0, iParam1);
	}
	return 0;
}

// Position - 0x3B8A
void func_106() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10) {
		if (iLocal_80[iVar0] != -1) {
			ui::_remove_notification(iLocal_80[iVar0]);
			iLocal_80[iVar0] = -1;
		}
		iVar0++;
	}
}

// Position - 0x3BC0
bool func_107() {
	if (Global_91491 == 13 || Global_91491 == 10 || Global_91491 == 11 || Global_91491 == 12) {
		return false;
	}
	return true;
}

// Position - 0x3BFE
void func_108() {
	if (func_13(14) || !cam::is_screen_faded_in() && iLocal_94 != 0) {
		iLocal_94 = gameplay::get_game_timer();
	}
	if (iLocal_94 != 0) {
		if (!func_13(14)) {
			if (gameplay::get_game_timer() - iLocal_94 > 1000) {
				iLocal_94 = 0;
			}
		}
	}
}

// Position - 0x3C49
int func_109() {
	if (Global_69962) {
		return 1;
	}
	else if (Global_55816 && !Global_55822) {
		return 1;
	}
	return 0;
}

// Position - 0x3C73
void func_110() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10) {
		iLocal_80[iVar0] = -1;
		iVar0++;
	}
	iLocal_92 = 0;
	iLocal_91 = 0;
}

// Position - 0x3C9B
void func_111() {
	gameplay::_0x2587A48BC88DFADF(0);
	if (iLocal_64 == 5) {
		func_35();
	}
	if (iLocal_65 == 5) {
		func_44(1);
	}
	if (iLocal_63 == 5 || iLocal_66 == 5) {
		gameplay::set_time_scale(1f);
	}
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (iLocal_62 == 5) {
			player::set_player_invincible(player::player_id(), 0);
			entity::set_entity_proofs(player::player_ped_id(), 0, 0, 0, 0, 0, 0, 0, 0);
		}
		player::set_run_sprint_multiplier_for_player(player::player_id(), 1f);
		player::set_swim_multiplier_for_player(player::player_id(), 1f);
	}
	gameplay::set_gravity_level(0);
	Global_25435 = 0;
	Global_25434 = 0;
	Global_25436 = 0;
	Global_25437 = 0;
	Global_25439 = 0;
	Global_25438 = 0;
	script::terminate_this_thread();
}
