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
vector3 vLocal_20 = {0f, 0f, 0f};
float fLocal_23 = 0f;
float fLocal_24 = 0f;
float fLocal_25 = 0f;
float fLocal_26 = 0f;
float fLocal_27 = 0f;
float fLocal_28 = 0f;
float fLocal_29 = 0f;
float fLocal_30 = 0f;
int iLocal_31 = 0;
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
	fLocal_27 = 9.99f;
	fLocal_28 = 0f;
	fLocal_29 = 0f;
	fLocal_30 = 0f;
	gameplay::network_set_script_is_safe_for_network_game();
	func_10();
	func_7();
	system::settimera(0);
	system::settimerb(0);
	while (true) {
		system::wait(0);
		if (Global_14443.f_1 != 9) {
			switch (Global_14443.f_1) {
			case 7:
				if (system::timera() > 125) {
					func_10();
					system::settimera(0);
				}
				if (system::timerb() > system::floor(fLocal_29) * 30 && system::timerb() > 150) {
					graphics::_push_scaleform_movie_function(Global_14424, "APP_FUNCTION");
					graphics::_push_scaleform_movie_function_parameter_int(1);
					graphics::_pop_scaleform_movie_function_void();
					system::settimerb(0);
				}
				if (system::timerb() > 2000) {
					graphics::_push_scaleform_movie_function(Global_14424, "APP_FUNCTION");
					graphics::_push_scaleform_movie_function_parameter_int(1);
					graphics::_pop_scaleform_movie_function_void();
					system::settimerb(0);
				}
				break;

			case 8:
				if (func_6(2, Global_14411, 0)) {
					func_5();
					Global_14421 = 1;
					func_10();
					func_7();
					if (Global_14443.f_1 > 3) {
						Global_14443.f_1 = 7;
					}
				}
				break;

			default: break;
			}
			if (func_4()) {
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

// Position - 0x144
bool func_1() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 3 || Global_14443.f_1 == 0 || Global_14387 == 1) {
		Global_14430 = 1;
		return true;
	}
	return false;
}

// Position - 0x187
void func_2() {
	func_3(0, 0);
	func_3(1, 0);
	func_3(2, 0);
	func_3(3, 0);
	func_3(4, 0);
	gameplay::clear_bit(&G_SleepModeOffOn11, 22);
	script::terminate_this_thread();
}

// Position - 0x1BA
void func_3(int iParam0, int iParam1) { Global_2595523[iParam0] = iParam1; }

// Position - 0x1CC
bool func_4() {
	if (Global_2919 == 1 || Global_14443.f_1 < 7) {
		Global_14430 = 1;
		return true;
	}
	return false;
}

// Position - 0x1F5
void func_5() {
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		audio::play_sound_frontend(-1, "Menu_Back", &Global_14432, 1);
	}
}

// Position - 0x216
bool func_6(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x288
void func_7() {
	if (Global_14431) {
		func_8(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_8(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else {
		func_8(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_8(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_8(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	gameplay::clear_bit(&G_SleepModeOnOn25, 17);
}

// Position - 0x31A
void func_8(int iParam0, char *sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6,
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
		func_9(sParam7);
	}
	if (!gameplay::is_string_null_or_empty(sParam8)) {
		func_9(sParam8);
	}
	if (!gameplay::is_string_null_or_empty(sParam9)) {
		func_9(sParam9);
	}
	if (!gameplay::is_string_null_or_empty(sParam10)) {
		func_9(sParam10);
	}
	if (!gameplay::is_string_null_or_empty(sParam11)) {
		func_9(sParam11);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x3CD
void func_9(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x3DF
void func_10() {
	int iVar0;
	bool bVar1;

	if (func_18() == 0) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			vLocal_20 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			fLocal_23 = entity::get_entity_heading(player::player_ped_id());
			func_17();
			func_16();
			func_15();
			fLocal_24 = 360f - fLocal_23;
			fLocal_27 -= fLocal_24;
			if (fLocal_27 < 0f) {
				fLocal_27 += 360f;
			}
			if (iLocal_31 == 0) {
				graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
				graphics::_push_scaleform_movie_function_parameter_int(23);
				graphics::_push_scaleform_movie_function_parameter_int(0);
				if (gameplay::is_bit_set(G_SleepModeOffOn11, 30)) {
					graphics::_push_scaleform_movie_function_parameter_int(-99);
					graphics::_push_scaleform_movie_function_parameter_int(0);
				}
				else {
					graphics::_push_scaleform_movie_function_parameter_int(system::floor(fLocal_27));
					graphics::_push_scaleform_movie_function_parameter_int(system::floor(fLocal_28));
				}
				graphics::_push_scaleform_movie_function_parameter_int(100);
				if (gameplay::is_bit_set(G_SleepModeOffOn11, 22)) {
					graphics::_push_scaleform_movie_function_parameter_int(1);
				}
				else {
					graphics::_push_scaleform_movie_function_parameter_int(0);
				}
				if (gameplay::is_bit_set(G_SleepModeOffOn11, 29)) {
					graphics::_push_scaleform_movie_function_parameter_bool(0);
				}
				else {
					graphics::_push_scaleform_movie_function_parameter_bool(1);
				}
				if (gameplay::is_bit_set(Global_2315, 1)) {
					graphics::_push_scaleform_movie_function_parameter_float(fLocal_30);
				}
				graphics::_pop_scaleform_movie_function_void();
			}
			if (fLocal_23 == fLocal_23) {
			}
			func_14(Global_14424, "DISPLAY_VIEW", 23f, system::to_float(1), -1082130432, -1082130432, -1082130432);
		}
	}
	else if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		vLocal_20 = {entity::get_entity_coords(player::player_ped_id(), 1)};
		fLocal_23 = entity::get_entity_heading(player::player_ped_id());
		if (Global_2595529 > 5) {
		}
		iVar0 = 0;
		while (iVar0 < Global_2595529) {
			func_13(iVar0);
			func_12(iVar0);
			func_11(iVar0);
			fLocal_24 = 360f - fLocal_23;
			fLocal_27 -= fLocal_24;
			if (fLocal_27 < 0f) {
				fLocal_27 += 360f;
			}
			if (iLocal_31 == 0) {
				graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
				graphics::_push_scaleform_movie_function_parameter_int(23);
				graphics::_push_scaleform_movie_function_parameter_int(iVar0);
				bVar1 = false;
				switch (iVar0) {
				case 0:
					if (gameplay::is_bit_set(Global_2595318, 5)) {
						bVar1 = true;
					}
					break;

				case 1:
					if (gameplay::is_bit_set(Global_2595318, 6)) {
						bVar1 = true;
					}
					break;

				case 2:
					if (gameplay::is_bit_set(Global_2595318, 7)) {
						bVar1 = true;
					}
					break;

				case 3:
					if (gameplay::is_bit_set(Global_2595318, 8)) {
						bVar1 = true;
					}
					break;
				}
				if (bVar1) {
					graphics::_push_scaleform_movie_function_parameter_int(-99);
					graphics::_push_scaleform_movie_function_parameter_int(0);
				}
				else {
					graphics::_push_scaleform_movie_function_parameter_int(system::floor(fLocal_27));
					graphics::_push_scaleform_movie_function_parameter_int(system::floor(fLocal_28));
				}
				graphics::_push_scaleform_movie_function_parameter_int(100);
				if (gameplay::is_bit_set(G_SleepModeOffOn11, 22)) {
					graphics::_push_scaleform_movie_function_parameter_bool(1);
				}
				else {
					graphics::_push_scaleform_movie_function_parameter_bool(1);
				}
				if (gameplay::is_bit_set(G_SleepModeOffOn11, 29)) {
					graphics::_push_scaleform_movie_function_parameter_bool(0);
				}
				else {
					graphics::_push_scaleform_movie_function_parameter_bool(1);
				}
				graphics::_push_scaleform_movie_function_parameter_float(fLocal_30);
				graphics::_push_scaleform_movie_function_parameter_int(Global_2595523[iVar0]);
				graphics::_pop_scaleform_movie_function_void();
			}
			if (fLocal_23 == fLocal_23) {
			}
			func_14(Global_14424, "DISPLAY_VIEW", 23f, system::to_float(1), -1082130432, -1082130432, -1082130432);
			iVar0++;
		}
	}
}

// Position - 0x6AB
float func_11(int iParam0) {
	fLocal_25 = Global_2595507[iParam0 /*3*/] - vLocal_20.x;
	fLocal_26 = system::cos(3.14159f / 180f * vLocal_20.x) * (Global_2595507[iParam0 /*3*/].f_1 - vLocal_20.y);
	fLocal_27 = gameplay::atan2(fLocal_25, fLocal_26);
	if (fLocal_27 < 0f) {
		fLocal_27 += 360f;
	}
	return fLocal_27;
}

// Position - 0x701
float func_12(int iParam0) {
	fLocal_29 = system::sqrt(system::vdist2(Global_2595507[iParam0 /*3*/], vLocal_20));
	fLocal_30 = Global_2595507[iParam0 /*3*/].f_2 - vLocal_20.z;
	return fLocal_29;
}

// Position - 0x734
float func_13(int iParam0) {
	fLocal_28 = system::sqrt(
		(Global_2595507[iParam0 /*3*/] - vLocal_20.x) * (Global_2595507[iParam0 /*3*/] - vLocal_20.x) +
		(Global_2595507[iParam0 /*3*/].f_1 - vLocal_20.y) * (Global_2595507[iParam0 /*3*/].f_1 - vLocal_20.y));
	return fLocal_28;
}

// Position - 0x77B
void func_14(int iParam0, char *sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6) {
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

// Position - 0x7DE
float func_15() {
	fLocal_25 = Global_16851 - vLocal_20.x;
	fLocal_26 = system::cos(3.14159f / 180f * vLocal_20.x) * (Global_16851.f_1 - vLocal_20.y);
	fLocal_27 = gameplay::atan2(fLocal_25, fLocal_26);
	if (fLocal_27 < 0f) {
		fLocal_27 += 360f;
	}
	return fLocal_27;
}

// Position - 0x82A
float func_16() {
	fLocal_29 = system::sqrt(system::vdist2(Global_16851, vLocal_20));
	fLocal_30 = Global_16851.f_2 - vLocal_20.z;
	return fLocal_29;
}

// Position - 0x853
float func_17() {
	fLocal_28 = system::sqrt((Global_16851 - vLocal_20.x) * (Global_16851 - vLocal_20.x) +
							 (Global_16851.f_1 - vLocal_20.y) * (Global_16851.f_1 - vLocal_20.y));
	return fLocal_28;
}

// Position - 0x886
int func_18() {
	if (Global_69702 == 1) {
		return 1;
	}
	return 0;
}
