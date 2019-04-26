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
bool bLocal_40 = 0;
bool bLocal_41 = 0;
int iLocal_42 = 0;
int iLocal_43 = 0;
struct<8> Local_44 = {
	0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_52 = 0;
var uLocal_53 = 0;
var uLocal_54 = 0;
var uLocal_55 = 0;
var uLocal_56 = 0;
struct<11> Local_57[50];
int iLocal_608 = 0;
char *sLocal_609 = NULL;
int *iLocal_610 = NULL;
int *iLocal_611 = NULL;
int iLocal_612 = 0;
int iLocal_613 = 0;
char *sLocal_614[4] = {NULL, NULL, NULL, NULL};
int iLocal_619 = 0;
var uLocal_620 = 0;
int iLocal_621 = 0;
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
	bLocal_40 = true;
	bLocal_41 = true;
	iLocal_608 = 4;
	sLocal_609 = "id1_11_tunnel6_int";
	if (player::has_force_cleanup_occurred(210)) {
		func_73();
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("letterscraps")) > 1) {
		script::terminate_this_thread();
	}
	func_72(12);
	if (func_71(106) == 1) {
		func_70(12);
		func_67(287, 0, 0);
		func_66(106, 1);
		func_65(168, 0);
		func_73();
	}
	while (true) {
		system::wait(0);
		func_64(player::player_ped_id());
		switch (iLocal_42) {
		case 0: func_19(); break;

		case 1: func_1(); break;
		}
	}
}

// Position - 0xF8
void func_1() {
	switch (iLocal_43) {
	case 0:
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("startup_positioning")) > 0) {
			iLocal_43 = 2;
		}
		else if (!ped::is_ped_injured(player::player_ped_id())) {
			if (cam::is_screen_faded_in()) {
				if (!func_18()) {
					if (!audio::is_mobile_phone_call_ongoing() && !func_12() && !func_11() && !func_10()) {
						iLocal_619 = 0;
						iLocal_613 = 0;
						sLocal_614[0] = "LETTERS_PAGE_ONE";
						sLocal_614[1] = "LETTERS_PAGE_TWO";
						sLocal_614[2] = "LETTERS_PAGE_THREE";
						sLocal_614[3] = "LETTERS_PAGE_FOUR";
						iLocal_612 = unk_0x67D02A194A2FC2BD("LETTER_SCRAPS");
						while (!graphics::has_scaleform_movie_loaded(iLocal_612)) {
							system::wait(0);
						}
						graphics::_push_scaleform_movie_function(iLocal_612, "SET_LETTER_TEXT");
						func_9(sLocal_614[0]);
						graphics::_pop_scaleform_movie_function_void();
						graphics::_0xC6372ECD45D73BCD(1);
						func_6(1);
						func_5(1, 1, 1, 0);
						ui::display_help_text_this_frame("LETTERS_HELP2", 0);
						gameplay::set_game_paused(1);
						ui::display_radar(0);
						iLocal_43 = 1;
					}
				}
			}
		}
		break;

	case 1:
		func_3();
		ui::disable_frontend_this_frame();
		graphics::_0xC6372ECD45D73BCD(1);
		graphics::_set_2d_layer(1);
		if (iLocal_613 < 4) {
			if (!iLocal_619) {
				if (controls::is_control_pressed(2, 190)) {
					if (iLocal_613 >= 0 && iLocal_613 < 3) {
						iLocal_613++;
						graphics::_push_scaleform_movie_function(iLocal_612, "SET_LETTER_TEXT");
						func_9(sLocal_614[iLocal_613]);
						graphics::_pop_scaleform_movie_function_void();
					}
					iLocal_619 = 1;
				}
				else if (controls::is_control_pressed(2, 189)) {
					if (iLocal_613 > 0 && iLocal_613 < 4) {
						iLocal_613--;
						graphics::_push_scaleform_movie_function(iLocal_612, "SET_LETTER_TEXT");
						func_9(sLocal_614[iLocal_613]);
						graphics::_pop_scaleform_movie_function_void();
					}
					iLocal_619 = 1;
				}
				else if (controls::is_control_just_released(2, 202)) {
					iLocal_43 = 2;
				}
			}
			else if (!func_2()) {
				iLocal_619 = 0;
			}
			graphics::draw_scaleform_movie_fullscreen(iLocal_612, 255, 255, 255, 255, 0);
		}
		else {
			iLocal_43 = 2;
		}
		break;

	case 2:
		ui::display_radar(1);
		ui::clear_help(1);
		func_5(0, 1, 1, 0);
		func_70(12);
		func_73();
		break;
	}
}

// Position - 0x303
int func_2() {
	if (controls::is_control_pressed(2, 190) || controls::is_control_pressed(2, 189) ||
		controls::is_control_pressed(2, 202)) {
		return 1;
	}
	return 0;
}

// Position - 0x334
void func_3() {
	if (Global_14443.f_1 != 1) {
		if (func_4(0)) {
			func_6(0);
		}
		gameplay::set_bit(&Global_2314, 2);
	}
}

// Position - 0x35C
bool func_4(int iParam0) {
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

// Position - 0x3B6
int func_5(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	iVar0 = 0;
	if (gameplay::is_pc_version()) {
		if (cutscene::_0xA0FE76168A189DDB() != iParam0 && iParam2) {
			cutscene::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

// Position - 0x3E9
void func_6(int iParam0) {
	if (Global_14604) {
		func_8(0, 0);
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
	if (!func_7()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x459
int func_7() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x480
void func_8(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_4(0)) {
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

// Position - 0x4F4
void func_9(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x506
bool func_10() { return Global_1318016; }

// Position - 0x512
int func_11() {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 9) {
		if (Global_2452429[iVar1] != 0) {
			Global_1318017 = iVar1;
			iVar0 = 1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

// Position - 0x54B
int func_12() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_100354) {
		if (func_13(iVar0)) {
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x579
bool func_13(int iParam0) {
	int iVar0;

	iVar0 = iParam0;
	if (!gameplay::are_strings_equal(&Global_100354[iParam0 /*28*/], "") &&
		!gameplay::is_string_null(&Global_100354[iParam0 /*28*/])) {
		if (gameplay::is_bit_set(Global_100354[iParam0 /*28*/].f_27, 1)) {
			if (gameplay::is_bit_set(Global_100354[iParam0 /*28*/].f_27, 2)) {
				return func_17(iVar0, &Global_100354[iParam0 /*28*/], &Global_100354[iParam0 /*28*/].f_4,
							   Global_100354[iParam0 /*28*/].f_20);
			}
			else {
				return func_16(iVar0, &Global_100354[iParam0 /*28*/], &Global_100354[iParam0 /*28*/].f_4);
			}
		}
		else if (gameplay::is_bit_set(Global_100354[iParam0 /*28*/].f_27, 2)) {
			return func_15(iVar0, &Global_100354[iParam0 /*28*/], Global_100354[iParam0 /*28*/].f_20);
		}
		else {
			return func_14(iVar0, &Global_100354[iParam0 /*28*/]);
		}
	}
	return false;
}

// Position - 0x656
var func_14(int iParam0, char *sParam1) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam1);
	return ui::end_text_command_is_this_help_message_being_displayed(1 + iParam0);
}

// Position - 0x66C
var func_15(int iParam0, char *sParam1, int iParam2) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam1);
	ui::add_text_component_integer(iParam2);
	return ui::end_text_command_is_this_help_message_being_displayed(1 + iParam0);
}

// Position - 0x688
var func_16(int iParam0, char *sParam1, char *sParam2) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam1);
	ui::add_text_component_substring_text_label(sParam2);
	return ui::end_text_command_is_this_help_message_being_displayed(1 + iParam0);
}

// Position - 0x6A4
var func_17(int iParam0, char *sParam1, char *sParam2, int iParam3) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam1);
	ui::add_text_component_substring_text_label(sParam2);
	ui::add_text_component_integer(iParam3);
	return ui::end_text_command_is_this_help_message_being_displayed(1 + iParam0);
}

// Position - 0x6C6
int func_18() {
	if (Global_35781 == 15) {
		return 0;
	}
	return 1;
}

// Position - 0x6DB
void func_19() {
	switch (iLocal_43) {
	case 0:
		func_62();
		func_61(&Local_44, 1, joaat("prop_ld_scrap"), "LETTERS_COLLECT");
		func_59(&Local_44, joaat("num_hidden_packages_0"), 705, 50);
		iLocal_43 = 1;
		iLocal_621 = 1;
		break;

	case 1:
		if (!func_58(14) && !cam::is_screen_faded_out()) {
			if (func_21(&Local_44, &Local_57) || uLocal_620) {
				iLocal_43 = 2;
			}
			if (Local_44.f_1.f_4 == Local_44.f_1.f_3) {
				if (func_71(106) == 0) {
					func_66(106, 1);
					func_65(168, 0);
				}
			}
		}
		break;

	case 2:
		func_66(106, 1);
		func_65(168, 0);
		func_20(1);
		break;
	}
}

// Position - 0x794
void func_20(int iParam0) {
	iLocal_42 = iParam0;
	iLocal_43 = 0;
}

// Position - 0x7A3
int func_21(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;

	bVar5 = !func_18() && !func_18();
	ped::is_ped_injured(player::player_ped_id());
	vVar2 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	iVar0 = 0;
	while (iVar0 < 1) {
		iVar1 = func_57(&uParam0->f_1, uParam0->f_10);
		if (!(*iParam1)[uParam0->f_10 /*11*/].f_10) {
			if (!iVar1) {
				if (uParam0->f_10 == 1 || uParam0->f_10 == 5 || uParam0->f_10 == 7 || uParam0->f_10 == 13 ||
					uParam0->f_10 == 18 || uParam0->f_10 == 20 || uParam0->f_10 == 37 || uParam0->f_10 == 42) {
					func_55(&(*iParam1)[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 2);
				}
				else if (uParam0->f_10 == iLocal_608) {
					func_55(&(*iParam1)[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 2);
					if (object::does_pickup_exist((*iParam1)[uParam0->f_10 /*11*/].f_1)) {
						interior::add_pickup_to_interior_room_by_name((*iParam1)[uParam0->f_10 /*11*/].f_1, sLocal_609);
					}
				}
				else {
					func_55(&(*iParam1)[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!iVar1) {
			if (func_38(uParam0, iParam1, vVar2)) {
				if (bVar5) {
					if (!func_37(33)) {
						func_34("LETTERS_FIRST", 1, 0, -1, 10000, 7, 0, 0, 0);
						func_33(33);
					}
				}
			}
		}
		uParam0->f_10++;
		if (uParam0->f_10 >= *iParam1) {
			uParam0->f_10 = 0;
		}
		iVar0++;
	}
	if (uParam0->f_11) {
		if (!Global_69962) {
			func_22(&uParam0->f_11, &uParam0->f_12, &uParam0->f_9, 1, &iLocal_610, &iLocal_611, "LETTERS_TITLE",
					"LETTERS_COLLECT");
		}
	}
	if (!uParam0->f_12 && !uParam0->f_11) {
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0;
}

// Position - 0x98B
void func_22(int *iParam0, int *iParam1, var *uParam2, int iParam3, int *iParam4, int *iParam5, char *sParam6,
			 char *sParam7) {
	int iVar0;

	func_32(0);
	if (*iParam0) {
		switch (*iParam4) {
		case 0:
			*iParam5 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
			if (graphics::has_scaleform_movie_loaded(*iParam5)) {
				iVar0 = audio::get_sound_id();
				if (iParam3 == 6) {
					audio::play_sound_frontend(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
				}
				else {
					audio::play_sound_frontend(iVar0, "COLLECTED", "HUD_AWARDS", 1);
				}
				*iParam4++;
			}
			break;

		case 1:
			graphics::_push_scaleform_movie_function(*iParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
			graphics::begin_text_command_scaleform_string(sParam6);
			graphics::end_text_command_scaleform_string();
			graphics::begin_text_command_scaleform_string(sParam7);
			ui::add_text_component_integer(func_24(iParam3));
			graphics::end_text_command_scaleform_string();
			graphics::_pop_scaleform_movie_function_void();
			*uParam2 = gameplay::get_game_timer();
			*iParam4++;
			break;

		case 2:
			if (gameplay::get_game_timer() - *uParam2 > 7000) {
				graphics::_push_scaleform_movie_function(*iParam5, "SHARD_ANIM_OUT");
				graphics::_push_scaleform_movie_function_parameter_int(1);
				graphics::_push_scaleform_movie_function_parameter_float(0.33f);
				graphics::_pop_scaleform_movie_function_void();
				*iParam4++;
			}
			else if (!func_23()) {
				if (graphics::has_scaleform_movie_loaded(*iParam5)) {
					func_32(1);
					graphics::draw_scaleform_movie_fullscreen(*iParam5, 100, 100, 100, 255, 0);
				}
			}
			break;

		case 3:
			if (gameplay::get_game_timer() - *uParam2 > 7500) {
				*iParam4++;
			}
			else if (!func_23()) {
				if (graphics::has_scaleform_movie_loaded(*iParam5)) {
					func_32(1);
					graphics::draw_scaleform_movie_fullscreen(*iParam5, 100, 100, 100, 255, 0);
				}
			}
			break;

		case 4:
			if (graphics::has_scaleform_movie_loaded(*iParam5)) {
				graphics::set_scaleform_movie_as_no_longer_needed(iParam5);
			}
			func_32(0);
			*iParam1 = 0;
			*iParam0 = 0;
			*iParam4 = 0;
			break;
		}
	}
}

// Position - 0xB0F
int func_23() {
	if (Global_69962) {
		return 1;
	}
	else if (Global_55816 && !Global_55822) {
		return 1;
	}
	return 0;
}

// Position - 0xB39
int func_24(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2) {
		iVar1 = 0;
		while (iVar1 < func_31(iParam0)) {
			if (gameplay::is_bit_set(Global_101700.f_9008.f_108, func_30(func_31(iParam0), iVar1))) {
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6) {
		stats::stat_get_int(joaat("num_hidden_packages_5"), &iVar0, -1);
	}
	else if (iParam0 == 7) {
		stats::stat_get_int(joaat("num_hidden_packages_7"), &iVar0, -1);
	}
	else if (iParam0 == 8) {
		stats::stat_get_int(joaat("num_hidden_packages_6"), &iVar0, -1);
	}
	else {
		iVar1 = 0;
		while (iVar1 < func_31(iParam0)) {
			iVar2 = func_29(iParam0) + iVar1;
			if (func_25(iVar2, -1, -1)) {
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

// Position - 0xC01
bool func_25(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (iParam1 == -1) {
		iParam1 = func_28();
	}
	iVar1 = func_27(iParam0, iParam1);
	iVar2 = func_26(iParam0);
	if (0 != iVar1) {
		iVar0 = stats::stat_get_bool_masked(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

// Position - 0xC3E
int func_26(int iParam0) {
	int iVar0;

	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192) {
		iVar0 = iParam0 - 0 - stats::_0xF4D8E7AC2A27758C(iParam0 - 0) * 64;
	}
	else if (iParam0 >= 192 && iParam0 < 384) {
		iVar0 = iParam0 - 192 - stats::_0xF4D8E7AC2A27758C(iParam0 - 192) * 64;
	}
	else if (iParam0 >= 513 && iParam0 < 705) {
		iVar0 = iParam0 - 513 - stats::_0xF4D8E7AC2A27758C(iParam0 - 513) * 64;
	}
	else if (iParam0 >= 705 && iParam0 < 1281) {
		iVar0 = iParam0 - 705 - stats::_0xF4D8E7AC2A27758C(iParam0 - 705) * 64;
	}
	else if (iParam0 >= 2919 && iParam0 < 3111) {
		iVar0 = iParam0 - 2919 - stats::_0xF4D8E7AC2A27758C(iParam0 - 2919) * 64;
	}
	else if (iParam0 >= 3111 && iParam0 < 3879) {
		iVar0 = iParam0 - 3111 - stats::_0xF4D8E7AC2A27758C(iParam0 - 3111) * 64;
	}
	else if (iParam0 >= 4335 && iParam0 < 4399) {
		iVar0 = iParam0 - 4335 - stats::_0xF4D8E7AC2A27758C(iParam0 - 4335) * 64;
	}
	else if (iParam0 >= 4207 && iParam0 < 4335) {
		iVar0 = iParam0 - 4207 - stats::_0xF4D8E7AC2A27758C(iParam0 - 4207) * 64;
	}
	else if (iParam0 >= 6029 && iParam0 < 6413) {
		iVar0 = iParam0 - 6029 - stats::_0xF4D8E7AC2A27758C(iParam0 - 6029) * 64;
	}
	else if (iParam0 >= 7385 && iParam0 < 7641) {
		iVar0 = iParam0 - 7385 - stats::_0xF4D8E7AC2A27758C(iParam0 - 7385) * 64;
	}
	else if (iParam0 >= 7321 && iParam0 < 7385) {
		iVar0 = iParam0 - 7321 - stats::_0xF4D8E7AC2A27758C(iParam0 - 7321) * 64;
	}
	else if (iParam0 >= 9361 && iParam0 < 9553) {
		iVar0 = iParam0 - 9361 - stats::_0xF4D8E7AC2A27758C(iParam0 - 9361) * 64;
	}
	return iVar0;
}

// Position - 0xE4E
int func_27(int iParam0, int iParam1) {
	int iVar0;

	if (iParam1 == -1) {
		iParam1 = func_28();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192) {
		iVar0 = stats::_get_pstat_bool_hash(iParam0 - 0, 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384) {
		iVar0 = stats::_get_pstat_bool_hash(iParam0 - 192, 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705) {
		iVar0 = stats::_get_pstat_bool_hash(iParam0 - 513, 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281) {
		iVar0 = stats::_get_pstat_bool_hash(iParam0 - 705, 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111) {
		iVar0 = stats::_get_tupstat_bool_hash(iParam0 - 2919, 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879) {
		iVar0 = stats::_get_tupstat_bool_hash(iParam0 - 3111, 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399) {
		iVar0 = stats::_get_ngstat_bool_hash(iParam0 - 4335, 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335) {
		iVar0 = stats::_get_ngstat_bool_hash(iParam0 - 4207, 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413) {
		iVar0 = stats::_get_ngstat_bool_hash(iParam0 - 6029, 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385) {
		iVar0 = stats::_get_ngstat_bool_hash(iParam0 - 7321, 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641) {
		iVar0 = stats::_get_ngstat_bool_hash(iParam0 - 7385, 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553) {
		iVar0 = stats::_get_ngstat_bool_hash(iParam0 - 9361, 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	return iVar0;
}

// Position - 0x1044
var func_28() { return Global_1312735; }

// Position - 0x1050
int func_29(int iParam0) {
	if (iParam0 == 3) {
		return 815;
	}
	if (iParam0 == 5) {
		return 845;
	}
	if (iParam0 == 1) {
		return 705;
	}
	if (iParam0 == 0) {
		return 755;
	}
	return 805;
}

// Position - 0x1097
int func_30(int iParam0, int iParam1) {
	if (iParam1 < 32) {
		return iParam1;
	}
	return iParam0 - iParam1;
}

// Position - 0x10B3
int func_31(int iParam0) {
	if (iParam0 == 3) {
		return 30;
	}
	if (iParam0 == 1) {
		return 50;
	}
	if (iParam0 == 0) {
		return 50;
	}
	if (iParam0 == 4) {
		return 10;
	}
	if (iParam0 == 5) {
		return 30;
	}
	return 15;
}

// Position - 0x1103
void func_32(int iParam0) {
	if (Global_69969 != iParam0) {
		Global_69969 = iParam0;
	}
}

// Position - 0x111D
void func_33(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31) {
		iVar0 -= 32;
		iVar1++;
	}
	if (iVar1 < 3) {
		gameplay::set_bit(&Global_101700.f_19369.f_150[iVar1], iVar0);
	}
}

// Position - 0x115F
void func_34(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8) {
	func_35(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x1180
void func_35(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, var uParam9) {
	int iVar0;

	if (gameplay::are_strings_equal(sParam0, "")) {
		return;
	}
	if (iParam3 < 0) {
		return;
	}
	if (iParam5 < 500 && iParam5 != -1) {
		return;
	}
	if (iParam4 < 0 && iParam4 != -1) {
		return;
	}
	if (iParam6 < 1 || iParam6 > 7) {
		return;
	}
	if (iParam7 == 235) {
		return;
	}
	if (iParam8 == 235) {
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145) {
		if (gameplay::are_strings_equal(&Global_101700.f_19369[iVar0 /*16*/], sParam0)) {
			return;
		}
		iVar0++;
	}
	if (Global_101700.f_19369.f_145 < 9) {
		StringCopy(&Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/], sParam0, 16);
		StringCopy(&Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_4, sParam1, 16);
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_8 = gameplay::get_game_timer() + iParam3;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_9 = iParam5;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_11 = iParam6;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_12 = uParam2;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_13 = iParam7;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_14 = iParam8;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1) {
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 =
				gameplay::get_game_timer() + iParam3 + iParam4;
		}
		else {
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 = -1;
		}
		Global_101700.f_19369.f_145++;
		func_36();
	}
}

// Position - 0x1353
void func_36() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		Global_101700.f_19369.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145) {
		if (gameplay::is_bit_set(Global_101700.f_19369[iVar0 /*16*/].f_11, 0)) {
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[0]) {
				Global_101700.f_19369.f_146[0] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (gameplay::is_bit_set(Global_101700.f_19369[iVar0 /*16*/].f_11, 1)) {
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[1]) {
				Global_101700.f_19369.f_146[1] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (gameplay::is_bit_set(Global_101700.f_19369[iVar0 /*16*/].f_11, 2)) {
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[2]) {
				Global_101700.f_19369.f_146[2] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

// Position - 0x1473
int func_37(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31) {
		iVar0 -= 32;
		iVar1++;
	}
	if (iVar1 < 3) {
		return gameplay::is_bit_set(Global_101700.f_19369.f_150[iVar1], iVar0);
	}
	return 0;
}

// Position - 0x14B6
bool func_38(var *uParam0, var *uParam1, vector3 vParam2) {
	int iVar0;

	iVar0 = uParam0->f_10;
	if ((*uParam1)[iVar0 /*11*/].f_10) {
		if ((*uParam1)[iVar0 /*11*/].f_1 != 0) {
			if (object::has_pickup_been_collected((*uParam1)[iVar0 /*11*/].f_1) ||
				func_53((*uParam1)[iVar0 /*11*/].f_1)) {
				func_40(uParam0, uParam1, iVar0);
				return true;
			}
		}
	}
	if (object::does_pickup_exist((*uParam1)[iVar0 /*11*/].f_1)) {
		if (system::vdist2(vParam2, object::get_pickup_coords((*uParam1)[iVar0 /*11*/].f_1)) > 60f * 60f ||
			func_58(13) || func_58(14)) {
			func_39(&(*uParam1)[iVar0 /*11*/].f_1);
			(*uParam1)[iVar0 /*11*/].f_1 = 0;
			(*uParam1)[iVar0 /*11*/].f_10 = 0;
		}
	}
	return false;
}

// Position - 0x1573
void func_39(var *uParam0) {
	if (object::does_pickup_exist(*uParam0)) {
		object::remove_pickup(*uParam0);
	}
}

// Position - 0x158C
void func_40(var *uParam0, var *uParam1, int iParam2) {
	int iVar0;

	iVar0 = func_29(*uParam0) + iParam2;
	func_39(&(*uParam1)[iParam2 /*11*/].f_1);
	func_52(&(*uParam1)[iParam2 /*11*/].f_2);
	(*uParam1)[iParam2 /*11*/].f_1 = 0;
	(*uParam1)[iParam2 /*11*/].f_10 = 0;
	func_51(&uParam0->f_1, iParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0) {
		func_50(*uParam0, iParam2, 1);
	}
	controls::set_pad_shake(0, 200, 250);
	stats::stat_increment(uParam0->f_6, 1f);
	if (bLocal_41) {
		func_49(&uParam0->f_1, iParam2);
	}
	else {
		func_47(&uParam0->f_1);
	}
	func_44();
	stats::_0x79AB33F0FBFAC40C(iVar0);
	func_43(1, 0);
	func_41();
	uParam0->f_11 = 1;
}

// Position - 0x1637
int func_41() {
	if (func_42(0)) {
		return 0;
	}
	if (Global_91530.f_8) {
		if (Global_91530.f_10 > 0) {
			return 0;
		}
	}
	else if (Global_91530.f_10 > 1) {
		return 0;
	}
	Global_91530.f_10++;
	return 1;
}

// Position - 0x1682
bool func_42(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x16AD
void func_43(int iParam0, int iParam1) {
	Global_91530.f_7 = iParam0;
	Global_91530.f_8 = iParam1;
}

// Position - 0x16C5
void func_44() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = 0;
	stats::stat_get_int(func_46(0), &iVar0, -1);
	iVar1 += iVar0;
	if (iVar0 > 0) {
		func_45(18, iVar0);
	}
	stats::stat_get_int(func_46(1), &iVar0, -1);
	iVar1 += iVar0;
	if (iVar0 > 0) {
		func_45(19, iVar0);
	}
	stats::stat_get_int(func_46(3), &iVar0, -1);
	iVar1 += iVar0;
	if (iVar0 > 0) {
		func_45(20, iVar0);
	}
	iVar2 = func_31(0) + func_31(1) + func_31(3);
	if (iVar2 > 0) {
		iVar3 = iVar1 * 100 / iVar2;
	}
	stats::stat_set_int(joaat("percent_hidden_packages"), iVar3, 1);
}

// Position - 0x1768
int func_45(int iParam0, int iParam1) {
	int iVar0;

	if (iParam0 < 0) {
		return 0;
	}
	if (iParam0 > 70) {
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100) {
		return 0;
	}
	iVar0 = player::_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0) {
		return player::_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

// Position - 0x17B9
int func_46(int iParam0) {
	if (iParam0 == 3) {
		return joaat("num_hidden_packages_3");
	}
	if (iParam0 == 1) {
		return joaat("num_hidden_packages_0");
	}
	if (iParam0 == 0) {
		return joaat("num_hidden_packages_1");
	}
	if (iParam0 == 5) {
		return joaat("num_hidden_packages_4");
	}
	return joaat("num_hidden_packages_2");
}

// Position - 0x180A
void func_47(var *uParam0) {
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (uParam0->f_3 <= 0) {
	}
	if (uParam0->f_2 <= 0) {
	}
	if (bLocal_40) {
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3) {
		if (func_57(uParam0, iVar0)) {
			iVar1++;
			func_48(uParam0->f_2 + iVar0, 1, -1, 1);
			if (bLocal_40) {
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40) {
	}
	if (iVar1 == uParam0->f_3 && uParam0->f_2 == 705) {
		func_65(168, 0);
	}
}

// Position - 0x188D
int func_48(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;

	if (iParam2 == -1) {
		iParam2 = func_28();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192) {
		uVar2 = stats::_get_pstat_bool_hash(iParam0 - 0, 0, 1, iParam2);
		iVar1 = iParam0 - 0 - stats::_0xF4D8E7AC2A27758C(iParam0 - 0) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384) {
		uVar3 = stats::_get_pstat_bool_hash(iParam0 - 192, 1, 1, iParam2);
		iVar1 = iParam0 - 192 - stats::_0xF4D8E7AC2A27758C(iParam0 - 192) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705) {
		uVar4 = stats::_get_pstat_bool_hash(iParam0 - 513, 0, 0, 0);
		iVar1 = iParam0 - 513 - stats::_0xF4D8E7AC2A27758C(iParam0 - 513) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281) {
		uVar5 = stats::_get_pstat_bool_hash(iParam0 - 705, 1, 0, 0);
		iVar1 = iParam0 - 705 - stats::_0xF4D8E7AC2A27758C(iParam0 - 705) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879) {
		uVar6 = stats::_get_tupstat_bool_hash(iParam0 - 3111, 0, 1, iParam2);
		iVar1 = iParam0 - 3111 - stats::_0xF4D8E7AC2A27758C(iParam0 - 3111) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111) {
		uVar7 = stats::_get_tupstat_bool_hash(iParam0 - 2919, 0, 0, 0);
		iVar1 = iParam0 - 2919 - stats::_0xF4D8E7AC2A27758C(iParam0 - 2919) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335) {
		uVar8 = stats::_get_ngstat_bool_hash(iParam0 - 4207, 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4207 - stats::_0xF4D8E7AC2A27758C(iParam0 - 4207) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399) {
		uVar9 = stats::_get_ngstat_bool_hash(iParam0 - 4335, 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4335 - stats::_0xF4D8E7AC2A27758C(iParam0 - 4335) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413) {
		uVar10 = stats::_get_ngstat_bool_hash(iParam0 - 6029, 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = iParam0 - 6029 - stats::_0xF4D8E7AC2A27758C(iParam0 - 6029) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641) {
		uVar11 = stats::_get_ngstat_bool_hash(iParam0 - 7385, 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7385 - stats::_0xF4D8E7AC2A27758C(iParam0 - 7385) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385) {
		uVar12 = stats::_get_ngstat_bool_hash(iParam0 - 7321, 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7321 - stats::_0xF4D8E7AC2A27758C(iParam0 - 7321) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553) {
		uVar13 = stats::_get_ngstat_bool_hash(iParam0 - 9361, 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = iParam0 - 9361 - stats::_0xF4D8E7AC2A27758C(iParam0 - 9361) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar13, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

// Position - 0x1C21
void func_49(var *uParam0, int iParam1) {
	if (uParam0->f_3 <= 0) {
	}
	if (uParam0->f_2 <= 0) {
	}
	if (bLocal_40) {
	}
	if (iParam1 >= uParam0->f_3) {
	}
	if (func_57(uParam0, iParam1)) {
		uParam0->f_4++;
		func_48(uParam0->f_2 + iParam1, 1, -1, 1);
		if (bLocal_40) {
		}
	}
	if (bLocal_40) {
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705) {
		func_65(168, 0);
	}
}

// Position - 0x1C95
void func_50(int iParam0, int iParam1, int iParam2) {
	if (iParam1 < 0 || iParam1 >= 64) {
		return;
	}
	if (iParam0 == 1) {
		if (iParam1 <= 31) {
			if (iParam2) {
				gameplay::set_bit(&Global_101700.f_9008.f_122, iParam1);
			}
			else {
				gameplay::clear_bit(&Global_101700.f_9008.f_122, iParam1);
			}
			return;
		}
		if (iParam2) {
			gameplay::set_bit(&Global_101700.f_9008.f_122.f_1, iParam1 - 32);
		}
		else {
			gameplay::clear_bit(&Global_101700.f_9008.f_122.f_1, iParam1 - 32);
		}
	}
	else if (iParam0 == 0) {
		if (iParam1 <= 31) {
			if (iParam2) {
				gameplay::set_bit(&Global_101700.f_9008.f_125, iParam1);
			}
			else {
				gameplay::clear_bit(&Global_101700.f_9008.f_125, iParam1);
			}
			return;
		}
		if (iParam2) {
			gameplay::set_bit(&Global_101700.f_9008.f_125.f_1, iParam1 - 32);
		}
		else {
			gameplay::clear_bit(&Global_101700.f_9008.f_125.f_1, iParam1 - 32);
		}
	}
}

// Position - 0x1D81
void func_51(int *iParam0, int iParam1, int iParam2) {
	if (iParam1 < 0 || iParam1 >= 64) {
		return;
	}
	if (iParam1 <= 31) {
		if (iParam2) {
			gameplay::set_bit(uParam0, iParam1);
		}
		else {
			gameplay::clear_bit(iParam0, iParam1);
		}
		return;
	}
	if (iParam2) {
		gameplay::set_bit(&iParam0->f_1, iParam1 - 32);
	}
	else {
		gameplay::clear_bit(&iParam0->f_1, iParam1 - 32);
	}
}

// Position - 0x1DE2
void func_52(int *iParam0) {
	if (ui::does_blip_exist(*iParam0)) {
		ui::set_blip_route(*iParam0, 0);
		ui::remove_blip(iParam0);
	}
}

// Position - 0x1E02
int func_53(var *uParam0) {
	int iVar0;
	int iVar1;

	if (!object::does_pickup_exist(uParam0)) {
		return 0;
	}
	if (func_54(player::player_ped_id())) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
			iVar1 = entity::get_entity_model(iVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2")) {
				if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1),
								   object::get_pickup_coords(uParam0)) < 5f * 5f ||
					entity::is_entity_touching_entity(player::player_ped_id(), object::get_pickup_object(uParam0))) {
					return 1;
				}
			}
		}
	}
	return 0;
}

// Position - 0x1E8E
bool func_54(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x1EAF
void func_55(var *uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;

	if (!uParam0->f_10) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (!func_58(13) && !func_58(14)) {
				if (!object::does_pickup_exist(uParam0->f_1)) {
					if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1), uParam0->f_3) <=
						50f * 50f) {
						streaming::request_model(iParam1);
						while (!streaming::has_model_loaded(iParam1)) {
							streaming::request_model(iParam1);
							system::wait(0);
						}
						if (iParam3) {
							func_56(uParam0->f_3);
						}
						gameplay::clear_area(uParam0->f_3, 2.5f, 0, 0, 0, 0);
						if (iParam4) {
							gameplay::set_bit(&iVar0, 1);
							uParam0->f_1 = object::create_pickup_rotate(joaat("pickup_custom_script"), uParam0->f_3,
																		uParam0->f_6, iVar0, -1, iParam5, 1, iParam1);
						}
						else {
							gameplay::set_bit(&iVar0, 3);
							gameplay::set_bit(&iVar0, 4);
							gameplay::set_bit(&iVar0, 8);
							gameplay::set_bit(&iVar0, 1);
							uParam0->f_1 = object::create_pickup(iParam2, uParam0->f_3, iVar0, -1, 1, iParam1);
						}
						streaming::set_model_as_no_longer_needed(iParam1);
					}
				}
			}
			if (object::does_pickup_exist(uParam0->f_1)) {
				uParam0->f_10 = 1;
			}
		}
	}
}

// Position - 0x1FC8
void func_56(vector3 vParam0) {
	int iVar0;

	iVar0 = interior::get_interior_at_coords(vParam0);
	if (interior::is_valid_interior(iVar0)) {
		interior::_load_interior(iVar0);
		while (!interior::is_interior_ready(iVar0)) {
			system::wait(0);
		}
		system::wait(0);
		interior::unpin_interior(iVar0);
	}
}

// Position - 0x2006
bool func_57(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 64) {
		return false;
	}
	if (iParam1 <= 31) {
		return gameplay::is_bit_set(*uParam0, iParam1);
	}
	return gameplay::is_bit_set(uParam0->f_1, iParam1 - 32);
}

// Position - 0x2044
bool func_58(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x2052
void func_59(var *uParam0, int iParam1, int iParam2, int iParam3) {
	uParam0->f_6 = iParam1;
	func_60(&uParam0->f_1, iParam2, iParam3);
}

// Position - 0x206C
void func_60(var *uParam0, var uParam1, var uParam2) {
	int iVar0;
	int iVar1;

	iVar1 = 0;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
	if (bLocal_40) {
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3) {
		if (func_25(uParam0->f_2 + iVar0, -1, -1)) {
			iVar1++;
			func_51(uParam0, iVar0, 1);
			if (bLocal_40) {
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40) {
	}
}

// Position - 0x20D5
void func_61(var *uParam0, int iParam1, int iParam2, char *sParam3) {
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_10 = 0;
}

// Position - 0x20F3
void func_62() {
	int iVar0;

	Global_101700.f_9008.f_122.f_2 = 1;
	iVar0 = 0;
	while (iVar0 < 50) {
		Local_57[iVar0 /*11*/].f_3 = {func_63(iVar0, 0)};
		Local_57[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	iLocal_610 = 0;
	Local_57[0 /*11*/].f_9 = 179.4746f;
	Local_57[1 /*11*/].f_6 = {0f, 0f, 198f};
	Local_57[2 /*11*/].f_9 = 104f;
	Local_57[3 /*11*/].f_9 = 321.5f;
	Local_57[4 /*11*/].f_6 = {0f, 0f, 49f};
	Local_57[5 /*11*/].f_6 = {0f, 0f, 286.5f};
	Local_57[6 /*11*/].f_9 = 278.0092f;
	Local_57[7 /*11*/].f_6 = {5.3f, -1801.4f, 15.57f};
	Local_57[8 /*11*/].f_9 = 80.5f;
	Local_57[9 /*11*/].f_9 = 116f;
	Local_57[10 /*11*/].f_9 = 15f;
	Local_57[11 /*11*/].f_9 = 305.5f;
	Local_57[12 /*11*/].f_9 = 0f;
	Local_57[13 /*11*/].f_9 = 95f;
	Local_57[13 /*11*/].f_6 = {-0.91f, -0.03f, -0.81f};
	Local_57[14 /*11*/].f_9 = 40f;
	Local_57[15 /*11*/].f_9 = 40f;
	Local_57[16 /*11*/].f_9 = 40f;
	Local_57[17 /*11*/].f_9 = 90f;
	Local_57[17 /*11*/].f_6 = {-0.55f, 0f, 0.78f};
	Local_57[18 /*11*/].f_6 = {0f, 0f, 0f};
	Local_57[19 /*11*/].f_9 = 40f;
	Local_57[20 /*11*/].f_6 = {0f, 2f, 15f};
	Local_57[21 /*11*/].f_9 = 40f;
	Local_57[22 /*11*/].f_9 = 40f;
	Local_57[23 /*11*/].f_9 = 40f;
	Local_57[24 /*11*/].f_9 = 40f;
	Local_57[25 /*11*/].f_9 = 40f;
	Local_57[26 /*11*/].f_9 = 40f;
	Local_57[26 /*11*/].f_6 = {-6f, 10f, 0f};
	Local_57[27 /*11*/].f_9 = 40f;
	Local_57[27 /*11*/].f_6 = {-4.66f, 8.7f, 67.03f};
	Local_57[28 /*11*/].f_9 = 40f;
	Local_57[28 /*11*/].f_6 = {1.54f, -8.31f, -19.94f};
	Local_57[29 /*11*/].f_9 = 40f;
	Local_57[30 /*11*/].f_9 = 40f;
	Local_57[30 /*11*/].f_6 = {27.21f, -3.11f, -2.09f};
	Local_57[31 /*11*/].f_9 = 40f;
	Local_57[32 /*11*/].f_9 = 40f;
	Local_57[33 /*11*/].f_9 = 40f;
	Local_57[33 /*11*/].f_6 = {-9.89f, 0.3f, -0.01f};
	Local_57[34 /*11*/].f_9 = 40f;
	Local_57[35 /*11*/].f_9 = 40f;
	Local_57[36 /*11*/].f_9 = 40f;
	Local_57[36 /*11*/].f_6 = {6.5f, -4.41f, -0.62f};
	Local_57[37 /*11*/].f_6 = {-9f, 5.3f, -2f};
	Local_57[38 /*11*/].f_9 = 40f;
	Local_57[38 /*11*/].f_6 = {-13.32f, -0.57f, -0.15f};
	Local_57[39 /*11*/].f_9 = 40f;
	Local_57[39 /*11*/].f_6 = {4.71f, -21.26f, -0.06f};
	Local_57[40 /*11*/].f_9 = 40f;
	Local_57[41 /*11*/].f_9 = 80f;
	Local_57[42 /*11*/].f_6 = {-2f, 9f, 1f};
	Local_57[43 /*11*/].f_9 = 198f;
	Local_57[44 /*11*/].f_9 = 198f;
	Local_57[44 /*11*/].f_6 = {0f, -20f, 0f};
	Local_57[45 /*11*/].f_9 = 198f;
	Local_57[46 /*11*/].f_9 = 198f;
	Local_57[47 /*11*/].f_9 = 198f;
	Local_57[48 /*11*/].f_9 = 198f;
	Local_57[49 /*11*/].f_9 = 198f;
}

// Position - 0x24E9
Vector3 func_63(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0:
		if (iParam1 == 1) {
			return 1034.274f, -3026.275f, 4.90197f;
		}
		else {
			return 1026.705f, -3026.052f, 13.3323f;
		}
		break;

	case 1:
		if (iParam1 == 1) {
			return -1040.979f, -2743.509f, 12.94983f;
		}
		else {
			return -1048.604f, -2734.218f, 12.8895f;
		}
		break;

	case 2:
		if (iParam1 == 1) {
			return -93.9012f, -2711.314f, 5.01752f;
		}
		else {
			return -81.1199f, -2726.511f, 7.74f;
		}
		break;

	case 3: return -917.6909f, -2527.384f, 22.3218f;

	case 4:
		if (iParam1 == 1) {
			return 746.45f, -2310.32f, 26.03f;
		}
		else {
			return 748.922f, -2298.114f, 19.624f;
		}
		break;

	case 5:
		if (iParam1 == 1) {
			return 1509.742f, -2126.038f, 75.21973f;
		}
		else {
			return 1509.099f, -2120.551f, 75.61f;
		}
		break;

	case 6: return 76.0032f, -1970.475f, 20.1302f;

	case 7:
		if (iParam1 == 1) {
			return -1.82327f, -1732.614f, 28.29367f;
		}
		else {
			return 0.067f, -1734.027f, 30.606f;
		}
		break;

	case 8:
		if (iParam1 == 1) {
			return -1377.766f, -1409.837f, 4.63205f;
		}
		else {
			return -1380.491f, -1404.374f, 1.7273f;
		}
		break;

	case 9: return 2864.808f, -1372.84f, 1.3151f;

	case 10: return -1035.812f, -1273.077f, 0.8919f;

	case 11: return -1821.136f, -1201.36f, 18.1698f;

	case 12: return 643.0116f, -1035.65f, 35.8891f;

	case 13: return -119.0616f, -977.2228f, 303.23f;

	case 14:
		if (iParam1 == 1) {
			return -1243.104f, -507.8057f, 30.10775f;
		}
		else {
			return -1238.766f, -506.7138f, 37.6019f;
		}
		break;

	case 15:
		if (iParam1 == 1) {
			return 83.79993f, -431.9302f, 36.55315f;
		}
		else {
			return 86.4f, -433.9f, 36f;
		}
		break;

	case 16: return 1095.953f, -210.4642f, 54.9477f;

	case 17: return -1724.522f, -196f, 57.2387f;

	case 18: return 265.374f, -199.546f, 60.795f;

	case 19:
		if (iParam1 == 1) {
			return -3020.475f, 36.55431f, 9.11777f;
		}
		else {
			return -3021.4f, 38f, 10.2945f;
		}
		break;

	case 20:
		if (iParam1 == 1) {
			return -347.5277f, 53.37161f, 52.97814f;
		}
		else {
			return -347.3f, 54.865f, 53.921f;
		}
		break;

	case 21: return 1052.248f, 167.611f, 87.7406f;

	case 22: return -2303.798f, 217.4301f, 166.6017f;

	case 23: return -138.9423f, 868.3885f, 231.6956f;

	case 24:
		if (iParam1 == 1) {
			return 688.1073f, 1204.671f, 323.3438f;
		}
		else {
			return 682.4505f, 1204.928f, 344.3322f;
		}
		break;

	case 25: return -1548.763f, 1380.173f, 125.3728f;

	case 26:
		if (iParam1 == 1) {
			return -432.14f, 1598.46f, 355.73f;
		}
		else {
			return -432.0034f, 1597.129f, 356.613f;
		}
		break;

	case 27: return 3081.93f, 1648.29f, 2.42f;

	case 28: return -594.38f, 2092f, 130.57f;

	case 29:
		if (iParam1 == 1) {
			return 3069.213f, 2160.988f, 1.1327f;
		}
		else {
			return 3063.583f, 2212.63f, 2.5863f;
		}
		break;

	case 30: return 180.21f, 2263.83f, 91.87f;

	case 31:
		if (iParam1 == 1) {
			return 926.96f, 2445.36f, 49.09f;
		}
		else {
			return 929.6946f, 2444.115f, 48.43f;
		}
		break;

	case 32:
		if (iParam1 == 1) {
			return -2380.212f, 2655.176f, 0.832f;
		}
		else {
			return -2379.948f, 2656.953f, 1.4906f;
		}
		break;

	case 33: return -861.38f, 2753.3f, 12.867f;

	case 34: return -289.0195f, 2848.853f, 53.331f;

	case 35:
		if (iParam1 == 1) {
			return 288.8409f, 2871.912f, 42.6422f;
		}
		else {
			return 265.7415f, 2866.416f, 73.19f;
		}
		break;

	case 36:
		if (iParam1 == 1) {
			return 1297.378f, 2988.71f, 40.11787f;
		}
		else {
			return 1294.2f, 3001.9f, 57.7f;
		}
		break;

	case 37: return 1568.65f, 3572.8f, 32.294f;

	case 38: return -1608.62f, 4274.25f, 102.95f;

	case 39:
		if (iParam1 == 1) {
			return -3.51812f, 4332.451f, 31.21602f;
		}
		else {
			return -1.9585f, 4334.787f, 32.3702f;
		}
		break;

	case 40: return 1336.737f, 4307.2f, 37.1325f;

	case 41:
		if (iParam1 == 1) {
			return -1007.103f, 4836.936f, 268.5488f;
		}
		else {
			return -1001.48f, 4851.322f, 273.6112f;
		}
		break;

	case 42: return 1877.09f, 5078.98f, 50.49f;

	case 43:
		if (iParam1 == 1) {
			return 3366.099f, 5182.461f, 0.68317f;
		}
		else {
			return 3436.453f, 5176.911f, 6.386f;
		}
		break;

	case 44:
		if (iParam1 == 1) {
			return -576.12f, 5472.24f, 59.28f;
		}
		else {
			return -578.8057f, 5470.164f, 59.0295f;
		}
		break;

	case 45: return 444.6518f, 5571.781f, 780.1888f;

	case 46: return -402.9948f, 6319.279f, 31.2256f;

	case 47: return 1439.599f, 6335.208f, 22.9485f;

	case 48:
		if (iParam1 == 1) {
			return 1466.109f, 6552.266f, 12.95773f;
		}
		else {
			return 1469.632f, 6552.174f, 13.6854f;
		}
		break;

	case 49:
		if (iParam1 == 1) {
			return 66.19278f, 6668.888f, 30.80633f;
		}
		else {
			return 66.7136f, 6663.198f, 30.7821f;
		}
		break;
	}
	return 0f, 0f, 0f;
}

// Position - 0x2CC9
bool func_64(int iParam0) {
	if (!entity::does_entity_exist(iParam0)) {
		return false;
	}
	return !entity::is_entity_dead(iParam0, 0);
}

// Position - 0x2CE7
void func_65(int iParam0, int iParam1) {
	if (iParam0 == 235 || iParam0 == 0) {
		return;
	}
	Global_101700.f_7572[iParam0] = 1;
	Global_101700.f_7572.f_236[iParam0] = gameplay::get_game_timer() + iParam1;
}

// Position - 0x2D24
void func_66(int iParam0, int iParam1) {
	if (iParam0 == 146 || iParam0 == -1) {
		return;
	}
	if (Global_101700.f_8044.f_99.f_58[iParam0] == iParam1) {
		return;
	}
	Global_101700.f_8044.f_99.f_58[iParam0] = iParam1;
}

// Position - 0x2D69
void func_67(int iParam0, int iParam1, int iParam2) {
	bool bVar0;

	if (iParam0 < 0) {
	}
	if (iParam0 == 321 || iParam0 > 321) {
	}
	else {
		func_48(891 + iParam0, 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101700.f_9153[iParam0 /*12*/].f_5 == 1) {
		if (Global_101700.f_9153[iParam0 /*12*/].f_6 == 11 || Global_101700.f_9153[iParam0 /*12*/].f_6 == 12) {
			bVar0 = false;
		}
	}
	else {
		Global_101700.f_9153[iParam0 /*12*/].f_5 = 1;
		Global_101700.f_9153[iParam0 /*12*/].f_10 = iParam1;
		Global_101700.f_9153[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287) {
			stats::_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286) {
			stats::_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299) {
			stats::_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0) {
		func_68();
	}
}

// Position - 0x2E51
void func_68() {
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;

	iVar0 = 0;
	Global_101436 = 0;
	Global_101437 = 0;
	Global_101438 = 0;
	Global_101439 = 0;
	Global_101440 = 0;
	Global_101441 = 0;
	Global_101442 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101700.f_9153.f_3853;
	Global_101700.f_9153.f_3853 = 0f;
	while (iVar0 < 321) {
		if (Global_101700.f_9153[iVar0 /*12*/].f_5 == 1) {
			switch (Global_101700.f_9153[iVar0 /*12*/].f_6) {
			case 1:
				Global_101436++;
				fVar1 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 3:
				Global_101437++;
				fVar2 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 5:
				Global_101438++;
				fVar3 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 7:
				Global_101439++;
				fVar4 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 9:
				Global_101440++;
				fVar5 += Global_101700.f_9153[iVar0 /*12*/].f_4 * 4f;
				break;

			case 11:
				Global_101441++;
				fVar6 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 13:
				Global_101442++;
				fVar7 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			default: break;
			}
		}
		iVar0++;
	}
	if (Global_101419 > 0) {
		if (Global_101436 == Global_101419) {
			fVar1 = 55f;
		}
	}
	if (Global_101420 > 0) {
		if (Global_101437 == Global_101420) {
			fVar2 = 10f;
		}
	}
	if (Global_101421 > 0) {
		if (Global_101438 == Global_101421) {
			fVar3 = 0f;
		}
	}
	if (Global_101422 > 0) {
		if (Global_101439 == Global_101422) {
			fVar4 = 10f;
		}
	}
	if (Global_101423 > 0) {
		if (Global_101440 == Global_101423 || Global_101423 * 10 / Global_101440 < 41 ||
			Global_101440 > Global_101426 || Global_101440 == Global_101426) {
			if (!gameplay::is_bit_set(Global_101700.f_9153.f_3856, 14)) {
				if (Global_101440 == Global_101423) {
					stats::_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_101423, 0);
					gameplay::set_bit(&Global_101700.f_9153.f_3856, 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101424 > 0) {
		if (Global_101441 == Global_101424) {
			fVar6 = 15f;
		}
	}
	if (Global_101425 > 0) {
		if (Global_101442 == Global_101425) {
			fVar7 = 5f;
		}
	}
	Global_101700.f_9153.f_3853 = fVar1 + fVar2 + fVar3 + fVar4 + fVar5 + fVar6 + fVar7;
	if (Global_101440 > Global_101426 || Global_101440 == Global_101426) {
		iVar9 = Global_101426;
	}
	else {
		iVar9 = Global_101440;
	}
	stats::stat_set_int(joaat("num_missions_completed"), Global_101436, 1);
	stats::stat_set_int(joaat("num_missions_available"), Global_101419, 1);
	stats::stat_set_int(joaat("num_minigames_completed"), Global_101437, 1);
	stats::stat_set_int(joaat("num_minigames_available"), Global_101420, 1);
	stats::stat_set_int(joaat("num_oddjobs_completed"), Global_101438, 1);
	stats::stat_set_int(joaat("num_oddjobs_available"), Global_101421, 1);
	stats::stat_set_int(joaat("num_rndpeople_completed"), Global_101439, 1);
	stats::stat_set_int(joaat("num_rndpeople_available"), Global_101422, 1);
	stats::stat_set_int(joaat("num_rndevents_completed"), iVar9, 1);
	stats::stat_set_int(joaat("num_rndevents_available"), Global_101426, 1);
	stats::stat_set_int(joaat("num_misc_completed"), Global_101442 + Global_101441, 1);
	stats::stat_set_int(joaat("num_misc_available"), Global_101425 + Global_101424, 1);
	Global_101443 = Global_101436 * 100 / Global_101419;
	Global_101445 = Global_101438 + Global_101437 * 100 / (Global_101421 + Global_101420);
	Global_101444 = Global_101439 + iVar9 * 100 / (Global_101422 + Global_101426);
	Global_101446 = Global_101441 + Global_101442 * 100 / (Global_101424 + Global_101425);
	stats::stat_set_float(joaat("total_progress_made"), Global_101700.f_9153.f_3853, 1);
	stats::stat_set_int(joaat("percent_story_missions"), Global_101443, 1);
	stats::stat_set_int(joaat("percent_ambient_missions"), Global_101444, 1);
	stats::stat_set_int(joaat("percent_oddjobs"), Global_101445, 1);
	if (fVar8 > 0f && system::floor(fVar8) < system::floor(Global_101700.f_9153.f_3853)) {
		func_45(13, system::floor(Global_101700.f_9153.f_3853));
	}
	if (!datafile::datafile_is_save_pending()) {
		if (!Global_69702) {
			if (func_69() == 2 == 0 && !network::network_is_game_in_progress()) {
				if (network::network_is_cloud_available()) {
					Global_101434 = 0;
				}
				if (!Global_55822) {
					func_41();
				}
			}
		}
	}
}

// Position - 0x3312
int func_69() { return Global_25190; }

// Position - 0x331D
int func_70(int iParam0) {
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

// Position - 0x3377
int func_71(int iParam0) {
	if (iParam0 == 146 || iParam0 == -1) {
		return 0;
	}
	return Global_101700.f_8044.f_99.f_58[iParam0];
}

// Position - 0x33A4
int func_72(int iParam0) {
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

// Position - 0x33FE
void func_73() {
	int iVar0;

	graphics::_0xC6372ECD45D73BCD(0);
	graphics::set_scaleform_movie_as_no_longer_needed(&iLocal_612);
	gameplay::set_game_paused(0);
	Global_101700.f_9008.f_122.f_2 = 0;
	iVar0 = 0;
	while (iVar0 < Local_57) {
		func_52(&Local_57[iVar0 /*11*/].f_2);
		func_39(&Local_57[iVar0 /*11*/].f_1);
		Local_57[iVar0 /*11*/].f_1 = 0;
		iVar0++;
	}
	if (func_71(106) == 1) {
		func_66(106, 1);
		func_75();
		func_70(12);
	}
	else if (func_74(&Local_44.f_1)) {
		func_66(106, 1);
		func_75();
		func_70(12);
	}
	else {
		func_72(12);
	}
	if (iLocal_621) {
		streaming::set_model_as_no_longer_needed(Local_44.f_7);
	}
	script::terminate_this_thread();
}

// Position - 0x34AF
bool func_74(var *uParam0) {
	if (uParam0->f_3 <= 0) {
	}
	return uParam0->f_4 >= uParam0->f_3;
}

// Position - 0x34C8
void func_75() {
	int iVar0;

	iVar0 = func_76(64);
	Global_2413052[iVar0 /*83*/] = 64;
	StringCopy(&Global_2413052[iVar0 /*83*/].f_18[0 /*16*/], "", 64);
}

// Position - 0x34F4
int func_76(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19) {
		if (Global_2413052[iVar1 /*83*/] == iParam0) {
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2413052[iVar1 /*83*/] == 0) {
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}
