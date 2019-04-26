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
struct<26> Local_20 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_46 = 0;
var uLocal_47 = 0;
var uLocal_48 = 0;
var uLocal_49 = 0;
var uLocal_50 = 0;
int iLocal_51 = 0;
char cLocal_52[32] = "";
var uLocal_56 = 0;
var uLocal_57 = 0;
var uLocal_58 = 0;
var uLocal_59 = 0;
int iLocal_60 = 0;
int iLocal_61 = 0;
int iLocal_62 = 0;
int iLocal_63 = 0;
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
	iLocal_51 = -99;
	StringCopy(&cLocal_52, "TRACKID", 32);
	gameplay::network_set_script_is_safe_for_network_game();
	ui::request_additional_text(&cLocal_52, 1);
	while (!ui::has_additional_text_loaded(1)) {
		system::wait(0);
	}
	func_15();
	func_14();
	func_11();
	system::settimera(0);
	while (true) {
		system::wait(0);
		if (iLocal_61) {
			if (iLocal_63 < 101) {
				if (system::timera() > 30) {
					iLocal_63++;
					graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
					graphics::_push_scaleform_movie_function_parameter_int(23);
					graphics::_push_scaleform_movie_function_parameter_int(0);
					graphics::_push_scaleform_movie_function_parameter_int(1);
					func_10("CELL_4005");
					graphics::_push_scaleform_movie_function_parameter_int(iLocal_63);
					graphics::_pop_scaleform_movie_function_void();
					func_9(Global_14424, "DISPLAY_VIEW", 23f, system::to_float(0), -1082130432, -1082130432,
						   -1082130432);
					system::settimera(0);
				}
			}
			else {
				graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
				graphics::_push_scaleform_movie_function_parameter_int(23);
				graphics::_push_scaleform_movie_function_parameter_int(0);
				graphics::_push_scaleform_movie_function_parameter_int(2);
				func_10("CELL_4006");
				func_10("CELL_4007");
				graphics::_pop_scaleform_movie_function_void();
				func_9(Global_14424, "DISPLAY_VIEW", 23f, system::to_float(0), -1082130432, -1082130432, -1082130432);
				iLocal_62 = 1;
				iLocal_61 = 0;
			}
		}
		if (Global_14443.f_1 != 9) {
			switch (Global_14443.f_1) {
			case 7:
				func_8();
				if (iLocal_60 == 0) {
					func_6();
				}
				break;

			case 8:
				if (func_5(2, Global_14411, 0)) {
					func_4();
					iLocal_61 = 0;
					iLocal_62 = 0;
					Global_14421 = 1;
					func_14();
					if (Global_14443.f_1 > 3) {
						Global_14443.f_1 = 7;
					}
				}
				break;

			default: break;
			}
			if (func_3()) {
				func_2();
			}
		}
		else {
			Global_14445 = 6;
			func_2();
		}
		if (func_1()) {
			func_2();
		}
	}
}

// Position - 0x1C6
bool func_1() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 3 || Global_14443.f_1 == 0 || Global_14387 == 1) {
		Global_14430 = 1;
		return true;
	}
	return false;
}

// Position - 0x209
void func_2() {
	iLocal_61 = 0;
	script::terminate_this_thread();
}

// Position - 0x218
bool func_3() {
	if (Global_2919 == 1 || Global_14443.f_1 < 7) {
		Global_14430 = 1;
		return true;
	}
	return false;
}

// Position - 0x241
void func_4() {
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		audio::play_sound_frontend(-1, "Menu_Back", &Global_14432, 1);
	}
}

// Position - 0x262
bool func_5(int iParam0, int iParam1, int iParam2) {
	if (controls::is_control_just_pressed(iParam0, iParam1) ||
		iParam2 == 1 && controls::is_disabled_control_just_pressed(iParam0, iParam1)) {
		if (gameplay::is_pc_version()) {
			if (gameplay::update_onscreen_keyboard() == 0 ||
				network::_network_is_text_chat_active() && controls::_is_input_disabled(2)) {
				return false;
			}
		}
		if (ui::is_pause_menu_active() || ui::is_warning_message_active()) {
			return false;
		}
		else {
			return true;
		}
	}
	return false;
}

// Position - 0x2D4
void func_6() {
	if (system::timera() > 2200) {
		if (Global_14431) {
			func_7(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		else {
			func_7(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		iLocal_60 = 1;
	}
}

// Position - 0x324
void func_7(int iParam0, char *sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6,
			char *sParam7, char *sParam8, char *sParam9, char *sParam10, char *sParam11) {
	graphics::_push_scaleform_movie_function(iParam0, sParam1);
	graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam2));
	if (fParam3 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam3));
	}
	if (fParam4 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam4));
	}
	if (fParam5 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam5));
	}
	if (fParam6 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam6));
	}
	if (!gameplay::is_string_null_or_empty(sParam7)) {
		func_10(sParam7);
	}
	if (!gameplay::is_string_null_or_empty(sParam8)) {
		func_10(sParam8);
	}
	if (!gameplay::is_string_null_or_empty(sParam9)) {
		func_10(sParam9);
	}
	if (!gameplay::is_string_null_or_empty(sParam10)) {
		func_10(sParam10);
	}
	if (!gameplay::is_string_null_or_empty(sParam11)) {
		func_10(sParam11);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x3D7
void func_8() {
	if (Global_14421 == 0) {
		if (func_5(2, Global_14412, 0)) {
			if (iLocal_60 && iLocal_62 == 0 && iLocal_61 == 0) {
				iLocal_63 = 0;
				graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
				graphics::_push_scaleform_movie_function_parameter_int(23);
				graphics::_push_scaleform_movie_function_parameter_int(0);
				graphics::_push_scaleform_movie_function_parameter_int(1);
				func_10("CELL_4005");
				graphics::_push_scaleform_movie_function_parameter_int(iLocal_63);
				graphics::_pop_scaleform_movie_function_void();
				func_9(Global_14424, "DISPLAY_VIEW", 23f, system::to_float(0), -1082130432, -1082130432, -1082130432);
				if (Global_14431) {
					func_7(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					func_7(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
				}
				else {
					func_7(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
					func_7(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				func_7(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				gameplay::clear_bit(&Global_2313, 17);
				iLocal_61 = 1;
				system::settimera(0);
			}
		}
	}
}

// Position - 0x4ED
void func_9(int iParam0, char *sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6) {
	graphics::_push_scaleform_movie_function(iParam0, sParam1);
	graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam2));
	if (fParam3 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam3));
	}
	if (fParam4 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam4));
	}
	if (fParam5 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam5));
	}
	if (fParam6 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam6));
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x550
void func_10(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x562
void func_11() {
	int iVar0;

	func_13(134, 1);
	iVar0 = audio::get_player_radio_station_index();
	switch (func_12(iVar0)) {
	case 1: func_13(82, 1); break;

	case 2: func_13(81, 1); break;

	default: func_13(83, 1); break;
	}
}

// Position - 0x5AC
int func_12(int iParam0) {
	switch (iParam0) {
	case 1:
	case 2:
	case 3:
	case 4: return 3;

	case 5:
	case 6:
	case 7:
	case 8: return 4;

	case 9:
	case 10:
	case 11:
	case 12: return 1;

	case 13:
	case 14:
	case 15:
	case 16: return 2;
	}
	return 0;
}

// Position - 0x638
void func_13(int iParam0, int iParam1) {
	int iVar0;

	if (iParam1 < 1) {
		return;
	}
	if (Global_51564[iParam0 /*7*/].f_2) {
		return;
	}
	if (network::network_is_game_in_progress()) {
		return;
	}
	if (Global_51564[iParam0 /*7*/]) {
		stats::stat_get_int(Global_51564[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 += iParam1;
		stats::stat_set_int(Global_51564[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

// Position - 0x695
void func_14() {
	graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
	graphics::_push_scaleform_movie_function_parameter_int(23);
	graphics::_push_scaleform_movie_function_parameter_int(0);
	graphics::_push_scaleform_movie_function_parameter_int(0);
	func_10("CELL_4001");
	func_10(&Local_20);
	func_10(&Local_20.f_16);
	func_10("CELL_4002");
	graphics::_push_scaleform_movie_function_parameter_int(Local_20.f_24);
	func_10("CELL_4003");
	func_10(&Local_20.f_25);
	func_10("CELL_4004");
	graphics::_pop_scaleform_movie_function_void();
	func_9(Global_14424, "DISPLAY_VIEW", 23f, system::to_float(0), -1082130432, -1082130432, -1082130432);
	if (Global_14431) {
		if (iLocal_60) {
			func_7(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		else {
			func_7(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		}
		func_7(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else {
		if (iLocal_60) {
			func_7(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		else {
			func_7(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_7(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_7(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	gameplay::clear_bit(&Global_2313, 17);
}

// Position - 0x7E5
void func_15() {
	iLocal_51 = audio::get_audible_music_track_text_id();
	StringCopy(&Local_20, "", 64);
	StringIntConCat(&Local_20, iLocal_51, 64);
	StringConCat(&Local_20, "S", 64);
	StringCopy(&Local_20.f_16, "", 32);
	StringIntConCat(&Local_20.f_16, iLocal_51, 32);
	StringConCat(&Local_20.f_16, "A", 32);
	StringCopy(&Local_20.f_25, audio::get_player_radio_station_name(), 24);
	if (!ui::does_text_label_exist(&Local_20)) {
		StringCopy(&Local_20, "CELL_195", 64);
	}
	if (!ui::does_text_label_exist(&Local_20.f_16)) {
		StringCopy(&Local_20.f_16, "CELL_195", 32);
		StringCopy(&Local_20.f_25, "CELL_195", 24);
	}
}
