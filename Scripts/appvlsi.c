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
int iLocal_21 = 0;
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
	iLocal_21 = 0;
	if (iLocal_20 == 0) {
		func_10();
		func_9();
		iLocal_20 = 1;
	}
	while (true) {
		system::wait(0);
		if (Global_14443.f_1 != 9) {
			switch (Global_14443.f_1) {
			case 7:
				if (iLocal_21 == 1) {
					if (func_8(2, Global_14412, 0)) {
						audio::play_sound_frontend(-1, "Lester_Laugh_Phone", "DLC_HEIST_HACKING_SNAKE_SOUNDS", 1);
						Global_14421 = 1;
						func_10();
						func_5();
						system::settimera(0);
						system::settimerb(0);
					}
				}
				if (iLocal_21 == 2) {
					if (system::timerb() > 499) {
						system::settimerb(0);
					}
					if (system::timera() > 2200) {
						iLocal_21 = 3;
					}
				}
				if (iLocal_21 == 3) {
					Global_1573850 = 1;
				}
				break;

			case 8:
				if (func_8(2, Global_14411, 0)) {
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

// Position - 0x126
bool func_1() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 3 || Global_14443.f_1 == 0 || Global_14387 == 1) {
		Global_14430 = 1;
		return true;
	}
	return false;
}

// Position - 0x169
void func_2() {
	audio::release_named_script_audio_bank("DLC_MPHEIST/HEIST_HACK_SNAKE");
	script::terminate_this_thread();
}

// Position - 0x17C
bool func_3() {
	if (Global_2919 == 1 || Global_14443.f_1 < 7) {
		Global_14430 = 1;
		return true;
	}
	return false;
}

// Position - 0x1A5
void func_4() {
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		audio::play_sound_frontend(-1, "Menu_Back", &Global_14432, 1);
	}
}

// Position - 0x1C6
void func_5() {
	if (Global_14431) {
		func_6(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_6(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else {
		func_6(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	gameplay::clear_bit(&G_SleepModeOnOn25, 17);
}

// Position - 0x258
void func_6(int iParam0, char *sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6,
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
		func_7(sParam7);
	}
	if (!gameplay::is_string_null_or_empty(sParam8)) {
		func_7(sParam8);
	}
	if (!gameplay::is_string_null_or_empty(sParam9)) {
		func_7(sParam9);
	}
	if (!gameplay::is_string_null_or_empty(sParam10)) {
		func_7(sParam10);
	}
	if (!gameplay::is_string_null_or_empty(sParam11)) {
		func_7(sParam11);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x30B
void func_7(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x31D
bool func_8(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x38F
void func_9() {
	if (Global_14431) {
		func_6(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_6(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else {
		func_6(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	gameplay::clear_bit(&G_SleepModeOnOn25, 17);
}

// Position - 0x421
void func_10() {
	if (iLocal_21 == 0) {
		audio::request_script_audio_bank("DLC_MPHEIST/HEIST_HACK_SNAKE", 0, -1);
		while (audio::request_script_audio_bank("DLC_MPHEIST/HEIST_HACK_SNAKE", 0, -1) == 0) {
			system::wait(0);
		}
		func_11(Global_14424, "SET_DATA_SLOT_EMPTY", 23f, -1082130432, -1082130432, -1082130432, -1082130432);
		graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
		graphics::_push_scaleform_movie_function_parameter_int(23);
		graphics::_push_scaleform_movie_function_parameter_int(0);
		graphics::_push_scaleform_movie_function_parameter_int(-99);
		graphics::_push_scaleform_movie_function_parameter_int(0);
		graphics::_push_scaleform_movie_function_parameter_int(100);
		graphics::_push_scaleform_movie_function_parameter_int(2);
		graphics::_push_scaleform_movie_function_parameter_bool(0);
		if (gameplay::is_bit_set(Global_2315, 1)) {
			graphics::_push_scaleform_movie_function_parameter_float(0f);
		}
		graphics::_pop_scaleform_movie_function_void();
		func_11(Global_14424, "DISPLAY_VIEW", 23f, system::to_float(1), -1082130432, -1082130432, -1082130432);
		iLocal_21 = 1;
	}
	else if (iLocal_21 == 1) {
		func_11(Global_14424, "SET_DATA_SLOT_EMPTY", 23f, -1082130432, -1082130432, -1082130432, -1082130432);
		graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
		graphics::_push_scaleform_movie_function_parameter_int(23);
		graphics::_push_scaleform_movie_function_parameter_int(0);
		graphics::_push_scaleform_movie_function_parameter_int(-99);
		graphics::_push_scaleform_movie_function_parameter_int(0);
		graphics::_push_scaleform_movie_function_parameter_int(100);
		graphics::_push_scaleform_movie_function_parameter_int(3);
		graphics::_push_scaleform_movie_function_parameter_bool(0);
		if (gameplay::is_bit_set(Global_2315, 1)) {
			graphics::_push_scaleform_movie_function_parameter_float(0f);
		}
		graphics::_pop_scaleform_movie_function_void();
		func_11(Global_14424, "DISPLAY_VIEW", 23f, system::to_float(1), -1082130432, -1082130432, -1082130432);
		iLocal_21 = 2;
	}
}

// Position - 0x575
void func_11(int iParam0, char *sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6) {
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
