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
vector3 vLocal_21 = {0f, 0f, 0f};
struct<18> Local_24 = {
	16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16
};
var uLocal_42 = 0;
var uLocal_43 = 0;
var uLocal_44 = 0;
var uLocal_45 = 0;
var uLocal_46 = 0;
var uLocal_47 = 0;
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
int iLocal_58 = 0;
int iLocal_59[29] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_89 = 0;
struct<178> Local_90[27];
var uLocal_4897 = 0;
struct<24> Local_4898[30];
var uLocal_5619 = 0;
struct<24> Local_5620[24];
var uLocal_6197 = 0;
var uLocal_6198 = 0;
float fLocal_6199 = 0f;
float fLocal_6200 = 0f;
int iLocal_6201 = 0;
int iLocal_6202 = 0;
int iLocal_6203 = 0;
int iLocal_6204 = 0;
bool bLocal_6205 = 0;
bool bLocal_6206 = 0;
int iLocal_6207 = 0;
int iLocal_6208 = 0;
int iLocal_6209 = 0;
int *iLocal_6210 = NULL;
var uLocal_6211 = 0;
var uLocal_6212 = 0;
int iLocal_6213 = 0;
bool bLocal_6214 = 0;
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
	iLocal_89 = 29;
	fLocal_6199 = 0.075f;
	fLocal_6200 = 0.725f;
	iLocal_6207 = 1;
	iLocal_6208 = 1;
	bLocal_6214 = true;
	gameplay::set_mission_flag(1);
	if (player::has_force_cleanup_occurred(3)) {
		func_40();
	}
	bLocal_6214 = false;
	cam::do_screen_fade_out(0);
	graphics::set_debug_lines_and_spheres_drawing_active(1);
	func_35(1);
	cutscene::request_cutscene("FOS_EP_1_P6", 8);
	func_18(0);
	func_8(1, 1, 1, 0);
	while (true) {
		vehicle::set_vehicle_density_multiplier_this_frame(0f);
		ped::set_ped_density_multiplier_this_frame(0f);
		func_7(player::player_ped_id());
		if (func_2()) {
			func_40();
		}
		if (bLocal_6206) {
			ui::set_text_scale(0.5f, 0.5f);
			func_1(0.1f, 0.1f, "NUMBER", 1, 0);
		}
		system::wait(0);
	}
}

// Position - 0xDF
void func_1(float fParam0, float fParam1, char *sParam2, int iParam3, int iParam4) {
	ui::begin_text_command_display_text(sParam2);
	ui::add_text_component_integer(iParam3);
	ui::end_text_command_display_text(fParam0, fParam1, iParam4);
}

// Position - 0xFD
bool func_2() {
	time::set_clock_time(vLocal_21.x, vLocal_21.y, vLocal_21.z);
	gameplay::set_wind(-1f);
	switch (iLocal_6209) {
	case 0:
		cam::do_screen_fade_in(0);
		func_6();
		cam::do_screen_fade_in(500);
		cutscene::start_cutscene(0);
		iLocal_6209++;
		break;

	case 1:
		if (!cutscene::has_cutscene_finished()) {
			if (bLocal_6214) {
				func_4();
			}
			ui::set_text_render_id(iLocal_6203);
			graphics::draw_scaleform_movie(iLocal_6201, 0.2f, 0.34f, 0.410001f, 0.69f, 100, 100, 100, 255, 0);
			ui::set_text_render_id(iLocal_6204);
			if (bLocal_6205) {
				graphics::_push_scaleform_movie_function(iLocal_6202, "SET_TEXT");
				func_3("KEYNOTE_NAME");
				func_3("KEYNOTE_TITLE");
				graphics::_pop_scaleform_movie_function_void();
				graphics::draw_scaleform_movie(iLocal_6202, 0.5f, 0.5f, 1f, 1f, 100, 100, 100, 255, 0);
			}
		}
		else {
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x1D6
void func_3(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x1E8
void func_4() {
	int iVar0;
	int iVar1;

	iVar0 = cutscene::get_cutscene_time();
	iVar1 = 0;
	while (iVar1 <= 16 - 1) {
		if (Local_24[iVar1] != -1) {
			if (!gameplay::is_bit_set(iLocal_58, iVar1) && iVar0 >= Local_24[iVar1] && iVar0 < Local_24.f_17[iVar1]) {
				func_5();
				gameplay::set_bit(&iLocal_58, iVar1);
			}
		}
		iVar1++;
	}
}

// Position - 0x24B
void func_5() {}

// Position - 0x253
void func_6() {}

// Position - 0x25B
bool func_7(int iParam0) {
	if (!entity::does_entity_exist(iParam0)) {
		return false;
	}
	return !entity::is_entity_dead(iParam0, 0);
}

// Position - 0x279
void func_8(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0) {
		player::special_ability_deactivate_fast(player::player_id());
		player::set_all_random_peds_flee(player::player_id(), 1);
		player::set_police_ignore_player(player::player_id(), 1);
		func_17(1);
		ui::_0xA8FDB297A8D25FBA();
		ui::_0xFDB423997FA30340();
		if (Global_14443.f_1 > 3) {
			if (audio::is_mobile_phone_call_ongoing()) {
				audio::stop_scripted_conversation(0);
			}
			if (!func_16()) {
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_15(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		Global_69700 = 1;
	}
	else {
		func_17(0);
		ui::_0xE1CD1E48E025E661();
		Global_55828 = 0;
		if (iParam1) {
			graphics::_0x03FC694AE06C5A20();
		}
		player::set_all_random_peds_flee(player::player_id(), 0);
		player::set_police_ignore_player(player::player_id(), 0);
		func_15(0, iParam3, iParam2, 0);
		if (network::network_is_game_in_progress()) {
			if (!ped::is_ped_injured(player::player_ped_id()) && !func_13(player::player_id()) &&
				!func_10(player::player_id(), 0) && !func_9()) {
				entity::set_entity_invincible(player::player_ped_id(), 0);
			}
		}
		else if (!ped::is_ped_injured(player::player_ped_id()) && !func_13(player::player_id())) {
			entity::set_entity_invincible(player::player_ped_id(), 0);
		}
		Global_69700 = 0;
	}
}

// Position - 0x392
bool func_9() { return gameplay::is_bit_set(Global_1591201[player::player_id() /*602*/].f_39.f_18, 14); }

// Position - 0x3AF
bool func_10(int iParam0, int iParam1) {
	bool bVar0;

	if (iParam0 == player::player_id()) {
		bVar0 = func_11(-1, 0) == 8;
	}
	else {
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1) {
		if (network::network_is_player_active(iParam0)) {
			bVar0 = player::get_player_team(iParam0) == 8;
		}
	}
	return bVar0;
}

// Position - 0x3FA
int func_11(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1) {
		iVar1 = func_12();
	}
	if (Global_1315213[iVar1] == 1) {
		if (iParam1) {
		}
		iVar0 = 8;
	}
	else {
		iVar0 = Global_1312729[iVar1];
		if (iParam1) {
		}
	}
	return iVar0;
}

// Position - 0x43B
var func_12() { return Global_1312735; }

// Position - 0x447
int func_13(int iParam0) {
	if (func_10(iParam0, 0)) {
		return 1;
	}
	if (func_14()) {
		if (iParam0 == player::player_id()) {
			return 1;
		}
	}
	if (gameplay::is_bit_set(Global_2421664[iParam0 /*358*/].f_198, 2)) {
		return 1;
	}
	return 0;
}

// Position - 0x489
bool func_14() { return gameplay::is_bit_set(Global_2359301, 3); }

// Position - 0x49A
int func_15(int iParam0, int iParam1, var uParam2, int iParam3) {
	int iVar0;

	iVar0 = 0;
	if (gameplay::is_pc_version()) {
		if (cutscene::_0xA0FE76168A189DDB() != iParam0 && uParam2) {
			cutscene::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

// Position - 0x4CD
int func_16() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x4F4
void func_17(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_2313, 13);
	}
	else {
		gameplay::clear_bit(&Global_2313, 13);
	}
}

// Position - 0x517
void func_18(int iParam0) {
	int iVar0;

	if (func_7(player::player_ped_id())) {
		entity::set_entity_coords(player::player_ped_id(), 689.1f, 586.5f, 130.5f, 1, 0, 0, 1);
		gameplay::clear_area_of_peds(689.1f, 586.5f, 130.5f, 500f, 0);
		weapon::remove_all_ped_weapons(player::player_ped_id(), 1);
	}
	func_34(0);
	func_33(&iLocal_6213, 0);
	streaming::new_load_scene_start_sphere(689.1f, 586.5f, 130.5f, 80f, 0);
	while (!streaming::is_new_load_scene_loaded()) {
		system::wait(0);
	}
	streaming::new_load_scene_stop();
	if (iParam0) {
		streaming::request_ipl("LInvader");
		while (!streaming::is_ipl_active("LInvader")) {
			system::wait(0);
		}
	}
	gameplay::set_weather_type_now_persist("EXTRASUNNY");
	iLocal_59[0] = joaat("a_m_y_hipster_01");
	iLocal_59[1] = joaat("a_m_y_hipster_02");
	iLocal_59[2] = joaat("a_m_y_hipster_03");
	iLocal_59[3] = joaat("a_f_y_hipster_01");
	iLocal_59[4] = joaat("a_f_y_hipster_02");
	iLocal_59[5] = joaat("a_f_y_hipster_03");
	iLocal_59[6] = joaat("a_f_y_hipster_04");
	iLocal_59[7] = joaat("a_f_y_bevhills_01");
	iLocal_59[8] = joaat("a_m_m_business_01");
	iLocal_59[9] = joaat("a_m_m_bevhills_02");
	iLocal_59[10] = joaat("a_m_m_skater_01");
	iLocal_59[11] = joaat("a_m_y_beachvesp_01");
	iLocal_59[12] = joaat("a_m_y_bevhills_01");
	iLocal_59[13] = joaat("a_f_m_bevhills_01");
	iLocal_59[14] = joaat("a_m_m_ktown_01");
	iLocal_59[15] = joaat("a_m_y_busicas_01");
	iLocal_59[16] = joaat("a_m_y_business_02");
	iLocal_59[17] = joaat("a_m_y_gay_01");
	iLocal_59[18] = joaat("a_m_y_ktown_02");
	iLocal_59[19] = joaat("a_m_m_bevhills_02");
	iLocal_59[20] = joaat("a_m_y_business_03");
	iLocal_59[21] = joaat("a_m_y_gay_02");
	iLocal_59[22] = joaat("a_m_m_malibu_01");
	iLocal_59[22] = joaat("a_m_y_gay_02");
	iLocal_59[23] = joaat("a_m_y_eastsa_02");
	iLocal_59[24] = joaat("a_m_y_soucent_02");
	iLocal_59[25] = joaat("a_m_y_vinewood_01");
	iLocal_59[26] = joaat("a_m_y_vinewood_02");
	iLocal_59[27] = joaat("a_m_y_vinewood_03");
	iLocal_59[28] = joaat("a_m_y_vinewood_04");
	iVar0 = 0;
	while (iVar0 <= 12) {
		func_31(func_32(iVar0), 1);
		iVar0++;
	}
	func_31("misslester1b_crowdlow@14@", 1);
	func_31("misslester1b_crowdlow@24@", 1);
	func_30("BREAKING_NEWS", &iLocal_6202, 1);
	func_30("lifeinvader_presentation", &iLocal_6201, 1);
	func_29("LEST1", 0, 1, 0);
	iVar0 = 0;
	while (iVar0 <= 26) {
		func_23(&Local_90[iVar0 /*178*/], iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29) {
		func_22(&Local_4898[iVar0 /*24*/], iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 23) {
		func_21(&Local_5620[iVar0 /*24*/], iVar0);
		iVar0++;
	}
	graphics::_set_2d_layer(1);
	ui::register_named_rendertarget("Big_Disp", 0);
	ui::link_named_rendertarget(joaat("prop_huge_display_01"));
	ui::link_named_rendertarget(joaat("prop_huge_display_02"));
	iLocal_6203 = ui::get_named_rendertarget_render_id("Big_Disp");
	iLocal_6204 = ui::get_default_script_rendertarget_render_id();
	while (entity::is_entity_waiting_for_world_collision(player::player_ped_id())) {
		system::wait(0);
	}
	while (!cutscene::has_cutscene_loaded()) {
		system::wait(0);
	}
	system::wait(2000);
	iLocal_6209 = 0;
	vLocal_21.x = 12;
	vLocal_21.y = 0;
	vLocal_21.z = 0;
	iVar0 = 0;
	while (iVar0 <= 16 - 1) {
		func_19(iVar0);
		iVar0++;
	}
	if (bLocal_6206) {
	}
}

// Position - 0x84B
void func_19(int iParam0) {
	switch (iParam0) {
	case 0: func_20(iParam0, 0, 10000); break;

	case 1: func_20(iParam0, 9000, 10000); break;

	case 2: func_20(iParam0, 27000, 32000); break;

	case 3: func_20(iParam0, 32000, 42000); break;

	case 4: func_20(iParam0, 51000, 63000); break;

	case 5: func_20(iParam0, 63600, 69000); break;

	case 6: func_20(iParam0, 66000, 70200); break;

	case 7: func_20(iParam0, 69600, 79200); break;

	case 8: func_20(iParam0, 77400, 84000); break;

	case 12: func_20(iParam0, 81000, 93600); break;

	case 9: func_20(iParam0, -1, -1); break;

	case 11: func_20(iParam0, 90000, 154200); break;

	case 10: func_20(iParam0, 129600, 133200); break;

	case 13: func_20(iParam0, 144600, 154200); break;

	case 14: func_20(iParam0, 152700, 154200); break;

	case 15: func_20(iParam0, 154200, 154200); break;
	}
}

// Position - 0x9BB
void func_20(int iParam0, int iParam1, int iParam2) {
	Local_24[iParam0] = iParam1;
	Local_24.f_17[iParam0] = iParam2;
}

// Position - 0x9D5
void func_21(var *uParam0, int iParam1) {
	uParam0->f_22 = 0;
	gameplay::clear_bit(&uLocal_6197, iParam1);
	if (iParam1 == 0 && uParam0->f_22 == 0) {
	}
}

// Position - 0x9FD
void func_22(var *uParam0, int iParam1) {
	uParam0->f_22 = 0;
	gameplay::clear_bit(&uLocal_5619, iParam1);
	if (iParam1 == 0 && uParam0->f_22 == 0) {
	}
}

// Position - 0xA25
void func_23(var *uParam0, int iParam1) {
	vector3 vVar0;

	func_28(uParam0);
	gameplay::clear_bit(&uLocal_4897, iParam1);
	switch (iParam1) {
	case 0:
		vVar0 = {0f, 0f, func_27(-4.29f) + 180f};
		func_25(uParam0, 82047830, 667.319f, 572.133f, 128.521f, vVar0, 6, 0, 0);
		func_25(uParam0, 83248680, 666.312f, 571.675f, 128.521f, vVar0, 6, 1, 0);
		func_25(uParam0, 71526810, 665.235f, 571.183f, 128.521f, vVar0, 6, 2, 0);
		func_25(uParam0, 49826530, 664.124f, 570.679f, 128.521f, vVar0, 6, 0, 0);
		func_25(uParam0, 78575440, 663.029f, 570.181f, 128.521f, vVar0, 6, 1, 0);
		func_25(uParam0, 12133230, 661.937f, 569.685f, 128.521f, vVar0, 6, 2, 0);
		func_25(uParam0, 89665750, 660.839f, 569.194f, 128.521f, vVar0, 6, 0, 0);
		func_25(uParam0, 65990810, 659.537f, 569.392f, 128.521f, vVar0, 6, 1, 0);
		func_25(uParam0, 21233450, 658.187f, 569.572f, 128.523f, vVar0, 4, 0, 1f);
		func_24(&uParam0->f_155[0 /*11*/], 659.867f, 571.539f, 128.531f, vVar0, 0, 0.5f, -1.5f);
		func_24(&uParam0->f_155[1 /*11*/], 660.646f, 567.108f, 128.521f, vVar0, 0, 0.5f, -1.5f);
		break;

	case 1:
		vVar0 = {0f, 0f, func_27(-3.98f) + 180f};
		func_25(uParam0, 21091970, 670.312f, 568.023f, 128.521f, vVar0, 5, 0, 0.5f);
		func_25(uParam0, 97482490, 669.189f, 567.502f, 128.522f, vVar0, 6, 1, 0);
		func_25(uParam0, 66764240, 668.28f, 566.688f, 128.522f, vVar0, 6, 0, 0);
		func_25(uParam0, 82832850, 667.384f, 565.885f, 128.522f, vVar0, 6, 2, 0);
		func_25(uParam0, 33636100, 666.491f, 565.085f, 128.522f, vVar0, 6, 0, 0);
		func_25(uParam0, 22769640, 665.595f, 564.282f, 128.522f, vVar0, 6, 1, 0);
		break;

	case 2:
		vVar0 = {0f, 0f, func_27(-3.78f) + 180f};
		func_25(uParam0, 91480760, 673.7f, 564.799f, 128.521f, vVar0, 6, 0, 0);
		func_25(uParam0, 64996320, 672.996f, 563.847f, 128.521f, vVar0, 6, 1, 0);
		func_25(uParam0, 30855220, 672.271f, 562.865f, 128.521f, vVar0, 6, 2, 0);
		func_25(uParam0, 98921990, 671.557f, 561.897f, 128.521f, vVar0, 6, 0, 0);
		func_25(uParam0, 73357200, 670.258f, 561.366f, 128.522f, vVar0, 6, 1, 0);
		func_24(&uParam0->f_155[0 /*11*/], 669.564f, 563.469f, 128.521f, vVar0, 2, -1.5f, -1.5f);
		func_24(&uParam0->f_155[1 /*11*/], 672.34f, 559.914f, 128.522f, vVar0, 2, -1.5f, -1.5f);
		break;

	case 3:
		vVar0 = {0f, 0f, func_27(-3.38f) + 180f};
		func_25(uParam0, 89689390, 681.517f, 555.801f, 128.522f, vVar0, 6, 0, 0);
		func_25(uParam0, 71057000, 681.796f, 556.967f, 128.522f, vVar0, 6, 1, 0);
		func_25(uParam0, 26206390, 682.076f, 558.137f, 128.522f, vVar0, 6, 2, 0);
		func_25(uParam0, 58207860, 682.36f, 559.342f, 128.522f, vVar0, 6, 0, 0);
		func_25(uParam0, 43622440, 682.635f, 560.475f, 128.522f, vVar0, 6, 1, 0);
		break;

	case 4:
		vVar0 = {0f, 0f, func_27(-3.17f) + 180f};
		func_25(uParam0, 78555440, 687.841f, 559.785f, 128.522f, vVar0, 6, 0, 0);
		func_25(uParam0, 12324420, 687.807f, 558.602f, 128.522f, vVar0, 6, 1, 0);
		func_25(uParam0, 4083210, 687.771f, 557.382f, 128.522f, vVar0, 6, 2, 0);
		func_25(uParam0, 2021980, 688.465f, 556.159f, 128.522f, vVar0, 6, 0, 0);
		func_25(uParam0, 21091970, 688.431f, 554.961f, 128.521f, vVar0, 6, 1, 0);
		func_24(&uParam0->f_155[0 /*11*/], 685.931f, 556.306f, 128.522f, vVar0, 0, 0.5f, -1.5f);
		func_24(&uParam0->f_155[1 /*11*/], 685.897f, 555.108f, 128.521f, vVar0, 1, -1.5f, -1.5f);
		break;

	case 5:
		vVar0 = {0f, 0f, func_27(-2.97f) + 180f};
		func_25(uParam0, 31491440, 692.632f, 559.992f, 128.522f, vVar0, 5, 2, -0.5f);
		func_25(uParam0, 34393340, 693.189f, 558.886f, 128.522f, vVar0, 6, 0, 0);
		func_25(uParam0, 94762900, 693.396f, 557.684f, 128.522f, vVar0, 6, 1, 0);
		func_25(uParam0, 95283980, 693.6f, 556.498f, 128.522f, vVar0, 6, 2, 0);
		func_25(uParam0, 92416940, 693.803f, 555.317f, 128.522f, vVar0, 6, 0, 0);
		func_25(uParam0, 53597080, 694.007f, 554.131f, 128.522f, vVar0, 6, 1, 0);
		break;

	case 6:
		vVar0 = {0f, 0f, func_27(-2.7f) + 180f};
		func_25(uParam0, 86170110, 697.492f, 561.188f, 128.522f, vVar0, 6, 0, 0);
		func_25(uParam0, 62247860, 697.964f, 560.188f, 128.522f, vVar0, 6, 1, 0);
		func_25(uParam0, 43665230, 698.467f, 559.116f, 128.522f, vVar0, 6, 2, 0);
		func_25(uParam0, 32906070, 698.988f, 558.013f, 128.522f, vVar0, 6, 0, 0);
		func_25(uParam0, 70836820, 699.502f, 556.925f, 128.522f, vVar0, 6, 1, 0);
		func_25(uParam0, 67800350, 700.014f, 555.841f, 128.522f, vVar0, 6, 2, 0);
		func_25(uParam0, 41115560, 701.184f, 555.063f, 128.521f, vVar0, 6, 0, 0);
		func_25(uParam0, 98430790, 701.005f, 553.758f, 128.522f, vVar0, 6, 1, 0);
		func_24(&uParam0->f_155[0 /*11*/], 698.861f, 554.048f, 128.521f, vVar0, 0, 0.5f, -1.5f);
		func_24(&uParam0->f_155[1 /*11*/], 703.267f, 554.91f, 128.522f, vVar0, 0, 0.5f, -1.5f);
		break;

	case 7:
		vVar0 = {0f, 0f, func_27(-3.99f) + 180f};
		func_25(uParam0, 13168530, 652.833f, 570.052f, 128.529f, vVar0, 6, 0, 0);
		func_25(uParam0, 92127780, 652.006f, 569.319f, 128.528f, vVar0, 6, 1, 0);
		func_25(uParam0, 51664260, 651.136f, 568.538f, 128.729f, vVar0, 6, 2, 0);
		func_25(uParam0, 35914010, 650.242f, 567.746f, 128.729f, vVar0, 6, 0, 0);
		func_25(uParam0, 43076060, 649.661f, 566.94f, 128.929f, vVar0, 6, 1, 0);
		func_25(uParam0, 21755390, 648.426f, 566.137f, 128.929f, vVar0, 6, 2, 0);
		break;

	case 8:
		vVar0 = {0f, 0f, func_27(-3.9f) + 180f};
		func_25(uParam0, 20501110, 656.955f, 565.868f, 128.53f, vVar0, 6, 0, 0);
		func_25(uParam0, 10114780, 656.193f, 565.067f, 128.53f, vVar0, 6, 1, 0);
		func_25(uParam0, 12664730, 655.358f, 564.19f, 128.73f, vVar0, 6, 2, 0);
		func_25(uParam0, 32956570, 654.534f, 563.324f, 128.73f, vVar0, 6, 0, 0);
		func_25(uParam0, 11862860, 653.696f, 562.443f, 128.93f, vVar0, 6, 1, 0);
		func_25(uParam0, 87809290, 652.862f, 561.566f, 128.93f, vVar0, 6, 2, 0);
		break;

	case 9:
		vVar0 = {0f, 0f, func_27(-3.76f) + 180f};
		func_25(uParam0, 75170110, 662.947f, 560.965f, 128.529f, vVar0, 6, 0, 0);
		func_25(uParam0, 62246860, 662.306f, 560.065f, 128.529f, vVar0, 6, 1, 0);
		func_25(uParam0, 83665250, 661.603f, 559.079f, 128.73f, vVar0, 6, 2, 0);
		func_25(uParam0, 22016170, 660.91f, 558.106f, 128.73f, vVar0, 6, 0, 0);
		func_25(uParam0, 41846840, 660.204f, 557.116f, 128.929f, vVar0, 6, 1, 0);
		func_25(uParam0, 10000350, 659.502f, 556.13f, 128.929f, vVar0, 6, 2, 0);
		break;

	case 10:
		vVar0 = {0f, 0f, func_27(-3.68f) + 180f};
		func_25(uParam0, 86878180, 667.872f, 557.785f, 128.53f, vVar0, 6, 0, 0);
		func_25(uParam0, 22242820, 667.31f, 556.833f, 128.53f, vVar0, 6, 1, 0);
		func_25(uParam0, 93969290, 666.693f, 555.791f, 128.73f, vVar0, 6, 2, 0);
		func_25(uParam0, 12101010, 666.086f, 554.762f, 128.73f, vVar0, 6, 0, 0);
		func_25(uParam0, 20232220, 665.467f, 553.715f, 128.93f, vVar0, 6, 1, 0);
		func_25(uParam0, 57707370, 664.852f, 552.673f, 128.93f, vVar0, 6, 2, 0);
		break;

	case 11:
		vVar0 = {0f, 0f, func_27(-3.53f) + 180f};
		func_25(uParam0, 13130110, 674.882f, 554.326f, 128.529f, vVar0, 6, 0, 0);
		func_25(uParam0, 97845810, 674.46f, 553.305f, 128.529f, vVar0, 6, 1, 0);
		func_25(uParam0, 12345670, 673.997f, 552.186f, 128.73f, vVar0, 6, 2, 0);
		func_25(uParam0, 89101110, 673.541f, 551.081f, 128.73f, vVar0, 6, 0, 0);
		func_25(uParam0, 12131410, 673.076f, 549.958f, 128.929f, vVar0, 6, 1, 0);
		func_25(uParam0, 51617180, 672.613f, 548.839f, 128.929f, vVar0, 6, 2, 0);
		break;

	case 12:
		vVar0 = {0f, 0f, func_27(-3.45f) + 180f};
		func_25(uParam0, 60616260, 680.396f, 552.335f, 128.53f, vVar0, 6, 0, 0);
		func_25(uParam0, 36465660, 680.063f, 551.281f, 128.53f, vVar0, 6, 1, 0);
		func_25(uParam0, 67686970, 679.697f, 550.127f, 128.73f, vVar0, 6, 2, 0);
		func_25(uParam0, 71727370, 679.336f, 548.988f, 128.73f, vVar0, 6, 0, 0);
		func_25(uParam0, 47576770, 678.969f, 547.829f, 128.93f, vVar0, 6, 1, 0);
		func_25(uParam0, 78798080, 678.603f, 546.674f, 128.93f, vVar0, 6, 2, 0);
		break;

	case 13:
		vVar0 = {0f, 0f, func_27(-3.31f) + 180f};
		func_25(uParam0, 11511610, 688.034f, 550.483f, 128.529f, vVar0, 6, 0, 0);
		func_25(uParam0, 17118110, 687.853f, 549.393f, 128.529f, vVar0, 6, 1, 0);
		func_25(uParam0, 91201210, 687.653f, 548.199f, 128.73f, vVar0, 6, 2, 0);
		func_25(uParam0, 12212310, 687.457f, 547.02f, 128.73f, vVar0, 6, 0, 0);
		func_25(uParam0, 23124120, 687.257f, 545.821f, 128.929f, vVar0, 6, 1, 0);
		func_25(uParam0, 51261270, 687.058f, 544.627f, 128.929f, vVar0, 6, 2, 0);
		break;

	case 14:
		vVar0 = {0f, 0f, func_27(-3.22f) + 180f};
		func_25(uParam0, 15515610, 693.855f, 549.783f, 128.53f, vVar0, 6, 0, 0);
		func_25(uParam0, 57158150, 693.767f, 548.682f, 128.53f, vVar0, 6, 1, 0);
		func_25(uParam0, 91601610, 693.67f, 547.474f, 128.73f, vVar0, 6, 2, 0);
		func_25(uParam0, 16216310, 693.575f, 546.283f, 128.73f, vVar0, 6, 0, 0);
		func_25(uParam0, 64165160, 693.478f, 545.071f, 128.93f, vVar0, 6, 1, 0);
		func_25(uParam0, 61671680, 693.381f, 543.865f, 128.93f, vVar0, 6, 2, 0);
		break;

	case 15:
		vVar0 = {0f, 0f, func_27(-3.08f) + 180f};
		func_25(uParam0, 19920020, 701.652f, 549.708f, 128.529f, vVar0, 6, 0, 0);
		func_25(uParam0, 1202200, 701.721f, 548.605f, 128.529f, vVar0, 6, 1, 0);
		func_25(uParam0, 32042050, 701.795f, 547.396f, 128.729f, vVar0, 6, 2, 0);
		func_25(uParam0, 20620720, 701.869f, 546.203f, 128.729f, vVar0, 6, 0, 0);
		func_25(uParam0, 8209210, 701.944f, 544.99f, 128.929f, vVar0, 6, 1, 0);
		func_25(uParam0, 2112120, 702.019f, 543.781f, 128.929f, vVar0, 6, 2, 0);
		break;

	case 16:
		vVar0 = {0f, 0f, func_27(-2.99f) + 180f};
		func_25(uParam0, 24024120, 707.482f, 550.335f, 128.53f, vVar0, 6, 0, 0);
		func_25(uParam0, 43244240, 707.644f, 549.242f, 128.53f, vVar0, 6, 1, 0);
		func_25(uParam0, 42452460, 707.821f, 548.044f, 128.73f, vVar0, 6, 2, 0);
		func_25(uParam0, 24724820, 707.996f, 546.862f, 128.73f, vVar0, 6, 0, 0);
		func_25(uParam0, 48249250, 708.174f, 545.659f, 128.929f, vVar0, 6, 1, 0);
		func_25(uParam0, 2512520, 708.351f, 544.461f, 128.929f, vVar0, 6, 2, 0);
		break;

	case 17:
		vVar0 = {0f, 0f, func_27(-3.98f) + 180f};
		func_25(uParam0, 46779100, 646.434f, 564.522f, 128.927f, vVar0, 6, 0, 0);
		func_25(uParam0, 93643160, 645.612f, 563.784f, 128.927f, vVar0, 6, 1, 0);
		func_25(uParam0, 34729570, 644.71f, 562.975f, 129.127f, vVar0, 6, 2, 0);
		func_25(uParam0, 28556490, 643.821f, 562.177f, 129.127f, vVar0, 6, 0, 0);
		func_25(uParam0, 75335160, 642.916f, 561.365f, 129.327f, vVar0, 6, 1, 0);
		func_25(uParam0, 84872300, 642.015f, 560.557f, 129.327f, vVar0, 6, 2, 0);
		break;

	case 18:
		vVar0 = {0f, 0f, func_27(-3.91f) + 180f};
		func_25(uParam0, 65187100, 651.092f, 559.707f, 128.926f, vVar0, 6, 0, 0);
		func_25(uParam0, 87514460, 650.325f, 558.912f, 128.926f, vVar0, 6, 1, 0);
		func_25(uParam0, 46165810, 649.483f, 558.04f, 128.127f, vVar0, 6, 2, 0);
		func_25(uParam0, 12560720, 648.654f, 557.18f, 129.127f, vVar0, 6, 0, 0);
		func_25(uParam0, 27854880, 647.809f, 556.306f, 129.326f, vVar0, 6, 1, 0);
		func_25(uParam0, 97601360, 646.968f, 555.435f, 129.326f, vVar0, 6, 2, 0);
		break;

	case 19:
		vVar0 = {0f, 0f, func_27(-3.75f) + 180f};
		func_25(uParam0, 55178130, 657.925f, 554.108f, 128.927f, vVar0, 6, 0, 0);
		func_25(uParam0, 75148880, 657.29f, 553.204f, 128.927f, vVar0, 6, 1, 0);
		func_25(uParam0, 88865540, 656.593f, 552.213f, 129.127f, vVar0, 6, 2, 0);
		func_25(uParam0, 64916770, 655.906f, 551.235f, 129.127f, vVar0, 6, 0, 0);
		func_25(uParam0, 70536220, 655.207f, 550.241f, 129.327f, vVar0, 6, 1, 0);
		func_25(uParam0, 17101310, 654.512f, 549.25f, 129.327f, vVar0, 6, 2, 0);
		break;

	case 20:
		vVar0 = {0f, 0f, func_27(-3.68f) + 180f};
		func_25(uParam0, 76870120, 663.545f, 550.463f, 128.926f, vVar0, 6, 0, 0);
		func_25(uParam0, 32147850, 662.977f, 549.515f, 128.926f, vVar0, 6, 1, 0);
		func_25(uParam0, 97662220, 662.353f, 548.477f, 129.127f, vVar0, 6, 2, 0);
		func_25(uParam0, 12107070, 661.738f, 547.453f, 129.127f, vVar0, 6, 0, 0);
		func_25(uParam0, 60841880, 661.111f, 546.411f, 129.326f, vVar0, 6, 1, 0);
		func_25(uParam0, 27803350, 660.489f, 545.373f, 129.326f, vVar0, 6, 2, 0);
		break;

	case 21:
		vVar0 = {0f, 0f, func_27(-3.53f) + 180f};
		func_25(uParam0, 19202120, 671.531f, 546.515f, 128.927f, vVar0, 6, 0, 0);
		func_25(uParam0, 22232420, 671.116f, 545.491f, 128.927f, vVar0, 6, 1, 0);
		func_25(uParam0, 52627280, 670.66f, 544.369f, 129.127f, vVar0, 6, 2, 0);
		func_25(uParam0, 29303130, 670.211f, 543.262f, 129.127f, vVar0, 6, 0, 0);
		func_25(uParam0, 23334350, 669.753f, 542.135f, 129.327f, vVar0, 6, 1, 0);
		func_25(uParam0, 36373830, 669.298f, 541.014f, 129.327f, vVar0, 6, 2, 0);
		break;

	case 22:
		vVar0 = {0f, 0f, func_27(-3.46f) + 180f};
		func_25(uParam0, 18283840, 677.828f, 544.227f, 128.926f, vVar0, 6, 0, 0);
		func_25(uParam0, 85858680, 677.487f, 543.176f, 128.926f, vVar0, 6, 1, 0);
		func_25(uParam0, 78889900, 677.112f, 542.024f, 129.127f, vVar0, 6, 2, 0);
		func_25(uParam0, 91929390, 676.744f, 540.888f, 129.127f, vVar0, 6, 0, 0);
		func_25(uParam0, 49596970, 676.368f, 539.731f, 129.326f, vVar0, 6, 1, 0);
		func_25(uParam0, 98991000, 675.994f, 538.58f, 129.326f, vVar0, 6, 2, 0);
		break;

	case 23:
		vVar0 = {0f, 0f, func_27(-3.3f) + 180f};
		func_25(uParam0, 12812910, 686.526f, 542.118f, 128.927f, vVar0, 6, 0, 0);
		func_25(uParam0, 30131130, 686.352f, 541.027f, 128.927f, vVar0, 6, 1, 0);
		func_25(uParam0, 21331340, 686.16f, 539.831f, 129.127f, vVar0, 6, 1, 0);
		func_25(uParam0, 13513610, 685.972f, 538.652f, 129.127f, vVar0, 6, 0, 0);
		func_25(uParam0, 37138130, 685.779f, 537.451f, 129.327f, vVar0, 6, 1, 0);
		func_25(uParam0, 91401410, 685.588f, 536.256f, 129.327f, vVar0, 6, 2, 0);
		break;

	case 24:
		vVar0 = {0f, 0f, func_27(-3.23f) + 180f};
		func_25(uParam0, 16917010, 693.176f, 541.306f, 128.926f, vVar0, 6, 0, 0);
		func_25(uParam0, 71172170, 693.08f, 540.205f, 128.926f, vVar0, 6, 1, 0);
		func_25(uParam0, 31741750, 692.975f, 538.998f, 129.127f, vVar0, 6, 2, 0);
		func_25(uParam0, 17617810, 692.871f, 537.808f, 129.127f, vVar0, 6, 0, 0);
		func_25(uParam0, 79180180, 692.765f, 536.597f, 129.326f, vVar0, 6, 1, 0);
		func_25(uParam0, 21831840, 692.66f, 535.391f, 129.326f, vVar0, 6, 2, 0);
		break;

	case 25:
		vVar0 = {0f, 0f, func_27(-3.07f) + 180f};
		func_25(uParam0, 21321420, 702.065f, 541.218f, 128.927f, vVar0, 6, 0, 0);
		func_25(uParam0, 15216210, 702.14f, 540.116f, 128.927f, vVar0, 6, 1, 0);
		func_25(uParam0, 72182190, 702.223f, 538.907f, 129.127f, vVar0, 6, 2, 0);
		func_25(uParam0, 22022120, 702.304f, 537.715f, 129.127f, vVar0, 6, 0, 0);
		func_25(uParam0, 22223220, 702.387f, 536.502f, 129.327f, vVar0, 6, 1, 0);
		func_25(uParam0, 42252260, 703.116f, 526.841f, 129.618f, vVar0, 6, 2, 0);
		break;

	case 26:
		vVar0 = {0f, 0f, func_27(-3f) + 180f};
		func_25(uParam0, 25325420, 708.727f, 541.922f, 128.926f, vVar0, 6, 0, 0);
		func_25(uParam0, 55256250, 709.881f, 539.828f, 128.926f, vVar0, 6, 1, 0);
		func_25(uParam0, 72582590, 709.05f, 539.628f, 129.127f, vVar0, 6, 2, 0);
		func_25(uParam0, 26026120, 709.217f, 538.445f, 129.127f, vVar0, 6, 0, 0);
		func_25(uParam0, 62263260, 709.386f, 537.241f, 129.326f, vVar0, 6, 1, 0);
		func_25(uParam0, 42652650, 709.555f, 536.043f, 129.326f, vVar0, 6, 2, 0);
		break;

	default: break;
	}
}

// Position - 0x23CA
void func_24(var *uParam0, vector3 vParam1, vector3 vParam4, int iParam7, float fParam8, float fParam9) {
	uParam0->f_1 = {vParam1};
	uParam0->f_4 = {vParam4};
	uParam0->f_7 = iParam7;
	*uParam0 = 1;
	uParam0->f_8 = fParam8;
	uParam0->f_9 = fParam9;
}

// Position - 0x23FC
void func_25(var *uParam0, int iParam1, vector3 vParam2, vector3 vParam5, int iParam8, int iParam9, int iParam10) {
	if (uParam0->f_154 >= *uParam0) {
		return;
	}
	func_26(&(*uParam0)[uParam0->f_154 /*17*/], iParam1, vParam2, vParam5, iParam8, iParam9, iParam10);
	uParam0->f_154++;
}

// Position - 0x2437
void func_26(var *uParam0, var uParam1, vector3 vParam2, vector3 vParam5, var uParam8, var uParam9, var uParam10) {
	*uParam0 = {vParam2};
	uParam0->f_3 = {vParam5};
	uParam0->f_6 = uParam8;
	uParam0->f_7 = uParam1;
	uParam0->f_8 = uParam9;
	uParam0->f_9 = uParam10;
}

// Position - 0x2469
float func_27(float fParam0) { return fParam0 * 57.29578f; }

// Position - 0x2479
void func_28(var *uParam0) {
	uParam0->f_154 = 0;
	uParam0->f_155[0 /*11*/] = 0;
	uParam0->f_155[1 /*11*/] = 0;
}

// Position - 0x2496
int func_29(char *sParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	iVar0 = gameplay::get_game_timer() + 7500;
	ui::request_additional_text(sParam0, iParam1);
	if (ui::has_additional_text_loaded(iParam1) && !iParam3) {
		return 1;
	}
	if (iParam2 == 0) {
		return 1;
	}
	while (!ui::has_additional_text_loaded(iParam1)) {
		system::wait(0);
		if (gameplay::get_game_timer() > iVar0 && !ui::has_additional_text_loaded(iParam1)) {
			return 0;
		}
	}
	return 1;
}

// Position - 0x24FB
int func_30(char *sParam0, var *uParam1, int iParam2) {
	int iVar0;

	iVar0 = gameplay::get_game_timer() + 7500;
	if (*uParam1 == 0) {
		*uParam1 = unk_0x67D02A194A2FC2BD(sParam0);
	}
	if (graphics::has_scaleform_movie_loaded(*uParam1)) {
		return 1;
	}
	if (iParam2 == 0) {
		return 1;
	}
	while (!graphics::has_scaleform_movie_loaded(*uParam1)) {
		system::wait(0);
		if (gameplay::get_game_timer() > iVar0 && !graphics::has_scaleform_movie_loaded(*uParam1)) {
			return 0;
		}
	}
	return 1;
}

// Position - 0x2563
int func_31(char *sParam0, int iParam1) {
	int iVar0;

	iVar0 = gameplay::get_game_timer() + 7500;
	streaming::request_anim_dict(sParam0);
	if (streaming::has_anim_dict_loaded(sParam0)) {
		return 1;
	}
	if (iParam1 == 0) {
		return 1;
	}
	while (!streaming::has_anim_dict_loaded(sParam0)) {
		system::wait(0);
		if (gameplay::get_game_timer() > iVar0 && !streaming::has_anim_dict_loaded(sParam0)) {
			return 0;
		}
	}
	return 1;
}

// Position - 0x25BE
char *func_32(int iParam0) {
	char *sVar0;

	switch (iParam0) {
	case 0: sVar0 = "misslester1b_crowd@a_"; break;

	case 1: sVar0 = "misslester1b_crowd@b_"; break;

	case 2: sVar0 = "misslester1b_crowd@c_"; break;

	case 3: sVar0 = "misslester1b_crowd@d_"; break;

	case 4: sVar0 = "misslester1b_crowd@e_"; break;

	case 5: sVar0 = "misslester1b_crowd@f_"; break;

	case 6: sVar0 = "misslester1b_crowd@g_"; break;

	case 7: sVar0 = "misslester1b_crowd@h_"; break;

	case 8: sVar0 = "misslester1b_crowd@i_"; break;

	case 9: sVar0 = "misslester1b_crowd@j_"; break;

	case 10: sVar0 = "misslester1b_crowd@k_"; break;

	case 11: sVar0 = "misslester1b_crowd@l_"; break;

	case 12: sVar0 = "misslester1b_crowd@m_"; break;
	}
	return sVar0;
}

// Position - 0x268E
void func_33(int iParam0, int iParam1) {
	streaming::set_ped_population_budget(0);
	streaming::set_reduce_ped_model_budget(1);
	streaming::set_vehicle_population_budget(0);
	streaming::set_reduce_vehicle_model_budget(1);
	player::set_dispatch_cops_for_player(player::player_id(), 0);
	ped::set_create_random_cops(0);
	vehicle::_0xE6C0C80B8C867537(1);
	*iParam0 = ped::add_scenario_blocking_area(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0, 1, 1, 1);
	ai::set_scenario_type_enabled("DRIVE", 0);
	vehicle::set_all_vehicle_generators_active_in_area(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0, 1);
	vehicle::remove_vehicles_from_generators_in_area(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 0);
	if (func_7(player::player_ped_id()) && iParam1 == 1) {
		gameplay::clear_area_of_peds(entity::get_entity_coords(player::player_ped_id(), 1), 500f, 0);
	}
}

// Position - 0x275D
void func_34(int iParam0) {
	gameplay::enable_dispatch_service(2, iParam0);
	gameplay::enable_dispatch_service(3, iParam0);
	gameplay::enable_dispatch_service(4, iParam0);
	gameplay::enable_dispatch_service(5, iParam0);
	gameplay::enable_dispatch_service(6, iParam0);
	gameplay::enable_dispatch_service(7, iParam0);
	gameplay::enable_dispatch_service(8, iParam0);
	gameplay::enable_dispatch_service(9, iParam0);
	gameplay::enable_dispatch_service(10, iParam0);
	gameplay::enable_dispatch_service(11, iParam0);
	gameplay::enable_dispatch_service(12, iParam0);
}

// Position - 0x27B7
void func_35(int iParam0) {
	if (iParam0) {
		func_39();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
			gameplay::set_bit(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_38(0)) {
			func_36(0);
		}
	}
	else if (Global_14443.f_1 == 1) {
		if (Global_14443.f_1 != 0) {
			Global_14443.f_1 = 3;
		}
	}
}

// Position - 0x281A
void func_36(int iParam0) {
	if (Global_14604) {
		func_37(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
		gameplay::set_bit(&Global_2314, 16);
	}
	if (audio::is_mobile_phone_call_ongoing()) {
		audio::stop_scripted_conversation(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_2313, 30);
	}
	else {
		gameplay::clear_bit(&Global_2313, 30);
	}
	if (!func_16()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x288A
void func_37(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_38(0)) {
			Global_14604 = 1;
			if (iParam1) {
				mobile::get_mobile_phone_position(&Global_14380);
			}
			Global_14371 = {Global_14389[Global_14388 /*3*/]};
			mobile::set_mobile_phone_position(Global_14371);
		}
	}
	else if (Global_14604 == 1) {
		Global_14604 = 0;
		Global_14371 = {Global_14396[Global_14388 /*3*/]};
		if (iParam1) {
			mobile::set_mobile_phone_position(Global_14380);
		}
		else {
			mobile::set_mobile_phone_position(Global_14371);
		}
	}
}

// Position - 0x28FE
bool func_38(int iParam0) {
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

// Position - 0x2958
void func_39() {
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10) {
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

// Position - 0x2981
void func_40() {
	func_41();
	func_8(0, 1, 1, 0);
	script::terminate_this_thread();
}

// Position - 0x2999
void func_41() {
	int iVar0;

	if (cutscene::is_cutscene_active()) {
		if (cutscene::is_cutscene_playing()) {
			cutscene::stop_cutscene_immediately();
		}
		cutscene::remove_cutscene();
	}
	func_51(&iLocal_6210);
	ui::release_named_rendertarget("Big_Disp");
	streaming::remove_ipl("LInvader");
	graphics::set_scaleform_movie_as_no_longer_needed(&iLocal_6201);
	graphics::set_scaleform_movie_as_no_longer_needed(&iLocal_6202);
	gameplay::clear_weather_type_persist();
	iVar0 = 0;
	while (iVar0 < Local_90) {
		func_48(&Local_90[iVar0 /*178*/]);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_4898) {
		func_45(&Local_4898[iVar0 /*24*/]);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_5620) {
		func_45(&Local_5620[iVar0 /*24*/]);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_59) {
		func_44(iLocal_59[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 12) {
		func_43(func_32(iVar0));
		iVar0++;
	}
	func_42(iLocal_6213);
	func_8(0, 1, 1, 0);
}

// Position - 0x2A8C
void func_42(int iParam0) {
	streaming::set_reduce_ped_model_budget(0);
	streaming::set_ped_population_budget(3);
	streaming::set_reduce_vehicle_model_budget(0);
	streaming::set_vehicle_population_budget(3);
	player::set_dispatch_cops_for_player(player::player_id(), 1);
	ped::set_create_random_cops(1);
	vehicle::_0xE6C0C80B8C867537(0);
	ped::remove_scenario_blocking_area(iParam0, 0);
	ai::set_scenario_type_enabled("DRIVE", 1);
	vehicle::set_all_vehicle_generators_active_in_area(-7000f, -7000f, -100f, 7000f, 7000f, 315f, 1, 1);
}

// Position - 0x2AEF
void func_43(char *sParam0) { streaming::remove_anim_dict(sParam0); }

// Position - 0x2AFD
void func_44(int iParam0) {
	if (iParam0 != 0) {
		streaming::set_model_as_no_longer_needed(iParam0);
	}
}

// Position - 0x2B11
void func_45(var *uParam0) {
	int iVar0;
	char *sVar1;
	char *sVar2;

	sVar1 = func_47(uParam0->f_16);
	sVar2 = func_46(uParam0->f_16);
	iVar0 = 0;
	while (iVar0 < uParam0->f_17) {
		if (entity::does_entity_exist(uParam0->f_17[iVar0]) && !entity::is_entity_dead(uParam0->f_17[iVar0], 0)) {
			entity::stop_entity_anim(uParam0->f_17[iVar0], sVar2, sVar1, -1000f);
		}
		func_51(&uParam0->f_17[iVar0]);
		iVar0++;
	}
}

// Position - 0x2B86
char *func_46(int iParam0) {
	char *sVar0;

	if (iParam0 == 0) {
	}
	sVar0 = "001077_01_14";
	return sVar0;
}

// Position - 0x2B9C
char *func_47(int iParam0) {
	char *sVar0;

	if (iParam0 == 0) {
	}
	sVar0 = "misslester1b_crowdlow@14@";
	return sVar0;
}

// Position - 0x2BB1
void func_48(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		func_50(&(*uParam0)[iVar0 /*17*/]);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_155) {
		func_49(&uParam0->f_155[iVar0 /*11*/].f_10);
		iVar0++;
	}
}

// Position - 0x2BFD
void func_49(int iParam0) {
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

// Position - 0x2C3D
void func_50(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_10) {
		func_49(&uParam0->f_10[iVar0]);
		iVar0++;
	}
}

// Position - 0x2C66
void func_51(int *iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		if (entity::is_entity_attached_to_any_ped(*iParam0)) {
			entity::detach_entity(*iParam0, 1, 1);
		}
		object::delete_object(iParam0);
	}
}
