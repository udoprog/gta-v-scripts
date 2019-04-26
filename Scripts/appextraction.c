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
int iLocal_20 = 0;
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
	gameplay::network_set_script_is_safe_for_network_game();
	if (iLocal_20 == 0) {
		func_11();
		func_10();
		iLocal_20 = 1;
		system::settimera(0);
	}
	while (true) {
		system::wait(0);
		if (Global_14443.f_1 != 9) {
			switch (Global_14443.f_1) {
			case 7:
				if (iLocal_20 == 1 && system::timera() > 1500) {
					func_6();
					system::settimera(0);
				}
				break;

			case 8:
				if (func_5(2, Global_14411, 0)) {
					func_4();
					Global_14421 = 1;
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

// Position - 0xE5
bool func_1() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 3 || Global_14443.f_1 == 0 || Global_14387 == 1) {
		Global_14430 = 1;
		return true;
	}
	return false;
}

// Position - 0x128
void func_2() { script::terminate_this_thread(); }

// Position - 0x134
bool func_3() {
	if (Global_2919 == 1 || Global_14443.f_1 < 7) {
		Global_14430 = 1;
		return true;
	}
	return false;
}

// Position - 0x15D
void func_4() {
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		audio::play_sound_frontend(-1, "Menu_Back", &Global_14432, 1);
	}
}

// Position - 0x17D
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

// Position - 0x1EF
void func_6() { func_7(); }

// Position - 0x1FB
void func_7() {
	func_9(Global_14424, "SET_DATA_SLOT_EMPTY", 24f, -1082130432, -1082130432, -1082130432, -1082130432);
	graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
	graphics::_push_scaleform_movie_function_parameter_int(24);
	graphics::_push_scaleform_movie_function_parameter_int(0);
	if (gameplay::is_bit_set(Global_2595318, 23)) {
		graphics::_push_scaleform_movie_function_parameter_bool(0);
		func_8("CELL_EXTBYOU");
		graphics::_push_scaleform_movie_function_parameter_int(Global_2595319);
		graphics::_push_scaleform_movie_function_parameter_int(system::floor(Global_2595535));
		graphics::_push_scaleform_movie_function_parameter_int(Global_2595320);
		graphics::_push_scaleform_movie_function_parameter_int(system::floor(Global_2595535.f_1));
		graphics::_push_scaleform_movie_function_parameter_int(Global_2595321);
		graphics::_push_scaleform_movie_function_parameter_int(system::floor(Global_2595535.f_2));
		func_8("CELL_BODYG");
		graphics::_push_scaleform_movie_function_parameter_int(Global_2595322);
		graphics::_push_scaleform_movie_function_parameter_int(system::floor(Global_2595538));
		graphics::_push_scaleform_movie_function_parameter_int(Global_2595323);
		graphics::_push_scaleform_movie_function_parameter_int(system::floor(Global_2595538.f_1));
		graphics::_push_scaleform_movie_function_parameter_int(Global_2595324);
		graphics::_push_scaleform_movie_function_parameter_int(system::floor(Global_2595538.f_2));
	}
	else {
		graphics::_push_scaleform_movie_function_parameter_bool(0);
		func_8("CELL_EXTBYOU");
		graphics::_push_scaleform_movie_function_parameter_int(Global_2595322);
		graphics::_push_scaleform_movie_function_parameter_int(system::floor(Global_2595538));
		graphics::_push_scaleform_movie_function_parameter_int(Global_2595323);
		graphics::_push_scaleform_movie_function_parameter_int(system::floor(Global_2595538.f_1));
		graphics::_push_scaleform_movie_function_parameter_int(Global_2595324);
		graphics::_push_scaleform_movie_function_parameter_int(system::floor(Global_2595538.f_2));
		func_8("CELL_EXTBTARG");
		graphics::_push_scaleform_movie_function_parameter_int(Global_2595319);
		graphics::_push_scaleform_movie_function_parameter_int(system::floor(Global_2595535));
		graphics::_push_scaleform_movie_function_parameter_int(Global_2595320);
		graphics::_push_scaleform_movie_function_parameter_int(system::floor(Global_2595535.f_1));
		graphics::_push_scaleform_movie_function_parameter_int(Global_2595321);
		graphics::_push_scaleform_movie_function_parameter_int(system::floor(Global_2595535.f_2));
	}
	graphics::_pop_scaleform_movie_function_void();
	func_9(Global_14424, "DISPLAY_VIEW", 24f, system::to_float(1), -1082130432, -1082130432, -1082130432);
}

// Position - 0x399
void func_8(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x3AB
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

// Position - 0x40E
void func_10() { func_7(); }

// Position - 0x41A
void func_11() {
	if (Global_14431) {
		func_12(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_12(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else {
		func_12(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_12(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_12(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	gameplay::clear_bit(&Global_2313, 17);
}

// Position - 0x4AC
void func_12(int iParam0, char *sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6,
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
		func_8(sParam7);
	}
	if (!gameplay::is_string_null_or_empty(sParam8)) {
		func_8(sParam8);
	}
	if (!gameplay::is_string_null_or_empty(sParam9)) {
		func_8(sParam9);
	}
	if (!gameplay::is_string_null_or_empty(sParam10)) {
		func_8(sParam10);
	}
	if (!gameplay::is_string_null_or_empty(sParam11)) {
		func_8(sParam11);
	}
	graphics::_pop_scaleform_movie_function_void();
}
