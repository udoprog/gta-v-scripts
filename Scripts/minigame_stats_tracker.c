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
int iLocal_45 = 0;
int iLocal_46 = 0;
var *uLocal_47 = NULL;
var uLocal_48 = 0;
var uLocal_49 = 0;
struct<68> ScriptParam_0 = {
	0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, -1, 1092616192
};
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
	sLocal_20 = "NULL";
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
	if (player::has_force_cleanup_occurred(3)) {
		func_17();
	}
	while (true) {
		switch (iLocal_45) {
		case 0:
			iLocal_46 = unk_0x67D02A194A2FC2BD("mission_complete");
			iLocal_45 = 1;
			break;

		case 1:
			if (graphics::has_scaleform_movie_loaded(iLocal_46)) {
				iLocal_45 = 2;
			}
			break;

		case 2:
			graphics::_call_scaleform_movie_function_string_params(iLocal_46, "SET_MISSION_TITLE", ScriptParam_0,
																   ScriptParam_0.f_1, 0, 0, 0);
			graphics::_call_scaleform_movie_function_float_params(iLocal_46, "SET_MISSION_TITLE_COLOUR",
																  ScriptParam_0.f_2, ScriptParam_0.f_2,
																  ScriptParam_0.f_2, -1082130432, -1082130432);
			if (ScriptParam_0.f_5.f_1 != -1f && !gameplay::is_string_null(ScriptParam_0.f_5.f_2)) {
				graphics::_call_scaleform_movie_function_mixed_params(
					iLocal_46, "SET_TOTAL", system::to_float(ScriptParam_0.f_5), ScriptParam_0.f_5.f_1, -1f, -1f, -1f,
					ScriptParam_0.f_5.f_2, 0, 0, 0, 0);
			}
			graphics::_call_scaleform_movie_function_float_params(iLocal_46, "SET_MEDAL",
																  system::to_float(ScriptParam_0.f_5), -1082130432,
																  -1082130432, -1082130432, -1082130432);
			graphics::_call_scaleform_movie_function_float_params(iLocal_46, "SET_SOCIAL_CLUB_INFO", 0f, -1082130432,
																  -1082130432, -1082130432, -1082130432);
			iVar0 = 0;
			while (iVar0 < ScriptParam_0.f_66 + 1) {
				graphics::_push_scaleform_movie_function(iLocal_46, "SET_DATA_SLOT");
				graphics::_push_scaleform_movie_function_parameter_int(ScriptParam_0.f_9[iVar0 /*7*/]);
				graphics::_push_scaleform_movie_function_parameter_int(ScriptParam_0.f_9[iVar0 /*7*/].f_1);
				if (ScriptParam_0.f_9[iVar0 /*7*/].f_2 == 4) {
					graphics::_push_scaleform_movie_function_parameter_int(2);
					graphics::_push_scaleform_movie_function_parameter_int(0);
					graphics::_push_scaleform_movie_function_parameter_int(0);
					graphics::begin_text_command_scaleform_string("STRING");
					ui::add_text_component_substring_time(system::floor(ScriptParam_0.f_9[iVar0 /*7*/].f_3 * 1000f), 6);
					graphics::end_text_command_scaleform_string();
					if (!gameplay::is_string_null(ScriptParam_0.f_9[iVar0 /*7*/].f_5)) {
						func_16(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
					}
				}
				else if (ScriptParam_0.f_9[iVar0 /*7*/].f_2 == 8) {
					if (!gameplay::is_string_null(ScriptParam_0.f_9[iVar0 /*7*/].f_5) &&
						!gameplay::is_string_null(ScriptParam_0.f_9[iVar0 /*7*/].f_6)) {
						graphics::begin_text_command_scaleform_string(ScriptParam_0.f_9[iVar0 /*7*/].f_6);
						ui::add_text_component_substring_player_name(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
						graphics::end_text_command_scaleform_string();
					}
				}
				else {
					graphics::_push_scaleform_movie_function_parameter_int(ScriptParam_0.f_9[iVar0 /*7*/].f_2);
					if (ScriptParam_0.f_9[iVar0 /*7*/].f_3 % 1f == 0f) {
						graphics::_push_scaleform_movie_function_parameter_float(ScriptParam_0.f_9[iVar0 /*7*/].f_3);
					}
					else {
						graphics::begin_text_command_scaleform_string("NUMBER");
						ui::add_text_component_float(ScriptParam_0.f_9[iVar0 /*7*/].f_3, 2);
						graphics::end_text_command_scaleform_string();
					}
					if (ScriptParam_0.f_9[iVar0 /*7*/].f_4 % 1f == 0f) {
						graphics::_push_scaleform_movie_function_parameter_float(ScriptParam_0.f_9[iVar0 /*7*/].f_4);
					}
					else {
						graphics::begin_text_command_scaleform_string("NUMBER");
						ui::add_text_component_float(ScriptParam_0.f_9[iVar0 /*7*/].f_4, 2);
						graphics::end_text_command_scaleform_string();
					}
					if (!gameplay::is_string_null(ScriptParam_0.f_9[iVar0 /*7*/].f_5)) {
						func_16(ScriptParam_0.f_9[iVar0 /*7*/].f_5);
					}
					if (!gameplay::is_string_null(ScriptParam_0.f_9[iVar0 /*7*/].f_6)) {
						func_16(ScriptParam_0.f_9[iVar0 /*7*/].f_6);
					}
				}
				graphics::_pop_scaleform_movie_function_void();
				iVar0++;
			}
			if (ScriptParam_0.f_5 != 0 && !gameplay::is_string_null(ScriptParam_0.f_5.f_2)) {
				graphics::_push_scaleform_movie_function(iLocal_46, "SET_TOTAL");
				graphics::_push_scaleform_movie_function_parameter_int(ScriptParam_0.f_5);
				if (!gameplay::is_string_null(ScriptParam_0.f_5.f_3)) {
					func_16(ScriptParam_0.f_5.f_3);
				}
				else {
					graphics::_push_scaleform_movie_function_parameter_float(ScriptParam_0.f_5.f_1);
				}
				func_16(ScriptParam_0.f_5.f_2);
				graphics::_pop_scaleform_movie_function_void();
			}
			graphics::_push_scaleform_movie_function(iLocal_46, "DRAW_MENU_LIST");
			graphics::_pop_scaleform_movie_function_void();
			func_12(1);
			func_9(&uLocal_47);
			if (!func_8(Global_101700.f_18056, 4096)) {
				func_6(&Global_101700.f_18056, 4096);
			}
			iLocal_45 = 3;
			break;

		case 3:
			if (func_2(&uLocal_47) > ScriptParam_0.f_67 && ScriptParam_0.f_67 != -1f || cam::is_screen_faded_out() ||
				Global_25334) {
				func_17();
			}
			else {
				func_1(1);
				graphics::draw_scaleform_movie(iLocal_46, 0.1495f, 0.3159f, 0.2021f, 0.5111f, 255, 255, 255, 0, 0);
				if (ui::is_hud_component_active(10)) {
					ui::hide_hud_component_this_frame(10);
				}
			}
			break;
		}
		system::wait(0);
	}
	func_17();
}

// Position - 0x447
void func_1(int iParam0) {
	Global_69962 = iParam0;
	Global_69963 = iParam0;
}

// Position - 0x45B
float func_2(var *uParam0) {
	if (func_5(uParam0)) {
		if (func_4(uParam0)) {
			return uParam0->f_2;
		}
		else {
			return func_3(gameplay::is_bit_set(*uParam0, 4)) - uParam0->f_1;
		}
	}
	return uParam0->f_1;
}

// Position - 0x49A
float func_3(bool bParam0) {
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	if (bParam0) {
		fVar0 = system::to_float(gameplay::get_game_timer());
		fVar1 = fVar0 / 1000f;
		return fVar1;
	}
	if (network::network_is_game_in_progress()) {
		iVar2 = network::get_network_time();
		fVar3 = system::to_float(iVar2);
		fVar4 = fVar3 / 1000f;
		return fVar4;
	}
	return system::to_float(gameplay::get_game_timer()) / 1000f;
}

// Position - 0x4F2
bool func_4(var *uParam0) { return gameplay::is_bit_set(*uParam0, 2); }

// Position - 0x502
bool func_5(var *uParam0) { return gameplay::is_bit_set(*uParam0, 1); }

// Position - 0x512
void func_6(var *uParam0, int iParam1) { func_7(uParam0, iParam1); }

// Position - 0x522
void func_7(var *uParam0, var uParam1) { *uParam0 |= uParam1; }

// Position - 0x533
bool func_8(var uParam0, int iParam1) { return (uParam0 & iParam1) != 0; }

// Position - 0x542
void func_9(var *uParam0) {
	if (!func_5(uParam0)) {
		func_10(uParam0);
	}
}

// Position - 0x55A
void func_10(var *uParam0) { func_11(uParam0, 0f); }

// Position - 0x569
void func_11(int *iParam0, float fParam1) {
	uParam0->f_1 = func_3(gameplay::is_bit_set(*uParam0, 4)) - fParam1;
	gameplay::set_bit(uParam0, 1);
	gameplay::clear_bit(iParam0, 2);
	iParam0->f_2 = 0f;
}

// Position - 0x597
void func_12(int iParam0) {
	if (Global_14604) {
		func_14(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
		gameplay::set_bit(&G_SleepModeOffOn11, 16);
	}
	if (audio::is_mobile_phone_call_ongoing()) {
		audio::stop_scripted_conversation(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1) {
		gameplay::set_bit(&G_SleepModeOnOn25, 30);
	}
	else {
		gameplay::clear_bit(&G_SleepModeOnOn25, 30);
	}
	if (!func_13()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x607
int func_13() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x62E
void func_14(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_15(0)) {
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

// Position - 0x6A2
bool func_15(int iParam0) {
	if (iParam0 == 1) {
		if (Global_14443.f_1 > 3) {
			if (gameplay::is_bit_set(G_SleepModeOnOn25, 14)) {
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

// Position - 0x6FC
void func_16(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x70E
void func_17() {
	graphics::set_scaleform_movie_as_no_longer_needed(&iLocal_46);
	Global_25334 = 0;
	func_1(0);
	script::terminate_this_thread();
}
