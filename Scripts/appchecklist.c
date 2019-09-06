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
int iLocal_20[94] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_115 = 0;
int iLocal_116 = 0;
int iLocal_117 = 0;
int iLocal_118 = 0;
int iLocal_119 = 0;
int iLocal_120[5] = {0, 0, 0, 0, 0};
int iLocal_126 = 0;
int iLocal_127 = 0;
int iLocal_128 = 0;
var uLocal_129 = 0;
bool bLocal_130 = 0;
struct<6> Local_131[5];
int iLocal_162[5] = {0, 0, 0, 0, 0};
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
	func_33(Global_14424, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_31();
	func_30();
	while (true) {
		system::wait(0);
		if (Global_14443.f_1 != 9) {
			switch (Global_14443.f_1) {
			case 7:
				func_25();
				if (iLocal_119 == 0) {
					func_15();
				}
				break;

			case 8:
				if (iLocal_119 == 2) {
					func_25();
					if (bLocal_130) {
						func_10();
					}
				}
				if (iLocal_119 == 1) {
					func_25();
				}
				if (func_9(2, Global_14411, 0)) {
					func_8();
					Global_14421 = 1;
					if (iLocal_119 == 2 || iLocal_119 == 1) {
						func_33(Global_14424, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432,
								-1082130432);
						func_30();
						if (Global_14443.f_1 > 3) {
							Global_14443.f_1 = 7;
						}
					}
					if (iLocal_119 == 3) {
						func_33(Global_14424, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432,
								-1082130432);
						func_4();
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

// Position - 0x16A
bool func_1() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 3 || Global_14443.f_1 == 0 || Global_14387 == 1) {
		Global_14430 = 1;
		return true;
	}
	return false;
}

// Position - 0x1AD
void func_2() { script::terminate_this_thread(); }

// Position - 0x1B9
bool func_3() {
	if (Global_2919 == 1 || Global_14443.f_1 < 7) {
		Global_14430 = 1;
		return true;
	}
	return false;
}

// Position - 0x1E2
void func_4() {
	int iVar0;
	int iVar1;
	int iVar2;

	bLocal_130 = false;
	func_31();
	iLocal_115 = 0;
	func_33(Global_14424, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	iVar0 = 0;
	if (Global_14439 == 0) {
		while (iVar0 < 5) {
			func_7(Global_14424, "SET_DATA_SLOT", system::to_float(18), system::to_float(iLocal_115),
				   system::to_float(0), -1f, -1f, &Local_131[iVar0 /*6*/], 0, 0, 0, 0);
			iLocal_120[iLocal_115] = iVar0;
			iLocal_115++;
			iVar0++;
		}
	}
	if (Global_14439 == 1) {
		iVar1 = 0;
		iVar2 = 0;
		while (iVar2 < 5) {
			iLocal_162[iVar2] = 0;
			iVar2++;
		}
		iVar1 = 5 - 1;
		while (iVar0 < 5) {
			if (Local_131[iVar1 /*6*/].f_5 > 0) {
				if (iLocal_162[iVar1] == 0) {
					func_7(Global_14424, "SET_DATA_SLOT", system::to_float(18), system::to_float(iLocal_115),
						   system::to_float(0), -1f, -1f, &Local_131[iVar1 /*6*/], 0, 0, 0, 0);
					iLocal_120[iLocal_115] = iVar1;
					iLocal_115++;
					iLocal_162[iVar1] = 1;
				}
			}
			if (iVar1 > 0) {
				iVar1--;
			}
			iVar0++;
		}
	}
	if (iLocal_115 == 0) {
		func_7(Global_14424, "SET_DATA_SLOT", system::to_float(18), system::to_float(0), system::to_float(0), -1f, -1f,
			   "CELL_3092", 0, 0, 0, 0);
	}
	else {
		bLocal_130 = true;
	}
	func_33(Global_14424, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_5(Global_14424, "SET_HEADER", "CELL_23", 0, 0, 0, 0);
	if (Global_14431) {
		func_7(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_7(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		func_7(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227", 0, 0, 0, 0);
		gameplay::set_bit(&G_SleepModeOnOn25, 17);
	}
	else {
		func_7(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
		gameplay::set_bit(&G_SleepModeOnOn25, 17);
	}
	iLocal_119 = 2;
}

// Position - 0x400
void func_5(int iParam0, char *sParam1, char *sParam2, char *sParam3, char *sParam4, char *sParam5, char *sParam6) {
	graphics::_push_scaleform_movie_function(iParam0, sParam1);
	func_6(sParam2);
	if (!gameplay::is_string_null_or_empty(sParam3)) {
		func_6(sParam3);
	}
	if (!gameplay::is_string_null_or_empty(sParam4)) {
		func_6(sParam4);
	}
	if (!gameplay::is_string_null_or_empty(sParam5)) {
		func_6(sParam5);
	}
	if (!gameplay::is_string_null_or_empty(sParam6)) {
		func_6(sParam6);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x45B
void func_6(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x46D
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
		func_6(sParam7);
	}
	if (!gameplay::is_string_null_or_empty(sParam8)) {
		func_6(sParam8);
	}
	if (!gameplay::is_string_null_or_empty(sParam9)) {
		func_6(sParam9);
	}
	if (!gameplay::is_string_null_or_empty(sParam10)) {
		func_6(sParam10);
	}
	if (!gameplay::is_string_null_or_empty(sParam11)) {
		func_6(sParam11);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x520
void func_8() {
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		audio::play_sound_frontend(-1, "Menu_Back", &Global_14432, 1);
	}
}

// Position - 0x541
bool func_9(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x5B3
void func_10() {
	int iVar0;

	if (Global_14421 == 0) {
		if (func_9(2, Global_14412, 0)) {
			func_12();
			Global_14421 = 1;
			graphics::_push_scaleform_movie_function(Global_14424, "GET_CURRENT_SELECTION");
			uLocal_129 = graphics::_pop_scaleform_movie_function();
			while (!graphics::_0x768FF8961BA904D6(uLocal_129)) {
				system::wait(0);
			}
			iVar0 = graphics::_0x2DE7EFA66B906036(uLocal_129);
			iLocal_117 = iLocal_120[iVar0];
			if (Global_14443.f_1 > 3) {
				Global_14443.f_1 = 8;
			}
			func_33(Global_14424, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
			if (iLocal_117 == 1) {
			}
			func_11();
			graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
			graphics::_push_scaleform_movie_function_parameter_int(18);
			graphics::_push_scaleform_movie_function_parameter_int(0);
			graphics::_push_scaleform_movie_function_parameter_int(0);
			graphics::begin_text_command_scaleform_string("CELL_3206");
			ui::add_text_component_integer(iLocal_126);
			graphics::end_text_command_scaleform_string();
			graphics::_pop_scaleform_movie_function_void();
			graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
			graphics::_push_scaleform_movie_function_parameter_int(18);
			graphics::_push_scaleform_movie_function_parameter_int(1);
			graphics::_push_scaleform_movie_function_parameter_int(0);
			graphics::begin_text_command_scaleform_string("CELL_3101");
			ui::add_text_component_integer(iLocal_127);
			graphics::end_text_command_scaleform_string();
			graphics::_pop_scaleform_movie_function_void();
			func_33(Global_14424, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_5(Global_14424, "SET_HEADER", &Local_131[iLocal_117 /*6*/], 0, 0, 0, 0);
			func_7(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_7(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			gameplay::clear_bit(&G_SleepModeOnOn25, 17);
			if (Global_14431) {
				func_7(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else {
				func_7(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			iLocal_119 = 3;
		}
	}
}

// Position - 0x743
void func_11() {
	switch (iLocal_117) {
	case 0:
		iLocal_126 = Global_101419;
		iLocal_127 = Global_101436;
		break;

	case 1:
		iLocal_126 = Global_101420 + Global_101421;
		iLocal_127 = Global_101437 + Global_101438;
		break;

	case 2:
		iLocal_126 = Global_101422;
		iLocal_127 = Global_101439;
		break;

	case 3:
		iLocal_126 = Global_101423;
		iLocal_127 = Global_101440;
		break;

	case 4:
		iLocal_126 = Global_101424 + Global_101425;
		iLocal_127 = Global_101441 + Global_101442;
		break;

	default:
		iLocal_126 = 0;
		iLocal_127 = 0;
		break;
	}
}

// Position - 0x7D8
void func_12() {
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		audio::play_sound_frontend(-1, "Menu_Accept", &Global_14432, 1);
		func_13();
	}
}

// Position - 0x7FD
void func_13() {
	if (func_14()) {
		mobile::_move_finger(5);
	}
}

// Position - 0x811
bool func_14() {
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_69702) {
		return false;
	}
	iVar2 = 0;
	iVar0 = cam::_0x19CAFA3C87F7C2FF();
	iVar1 = cam::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4) {
		iVar2 = 1;
	}
	if (Global_2595532 || iVar2) {
		return true;
	}
	return true;
}

// Position - 0x858
void func_15() {
	if (Global_14421 == 0) {
		if (func_9(2, Global_14412, 0)) {
			func_12();
			Global_14421 = 1;
			graphics::_push_scaleform_movie_function(Global_14424, "GET_CURRENT_SELECTION");
			uLocal_129 = graphics::_pop_scaleform_movie_function();
			while (!graphics::_0x768FF8961BA904D6(uLocal_129)) {
				system::wait(0);
			}
			iLocal_128 = graphics::_0x2DE7EFA66B906036(uLocal_129);
			if (Global_14443.f_1 > 3) {
				Global_14443.f_1 = 8;
				if (iLocal_128 == 0) {
					iLocal_119 = 1;
					func_16();
				}
				else {
					iLocal_119 = 2;
					func_4();
				}
			}
		}
	}
}

// Position - 0x8CD
void func_16() {
	int iVar0;

	iLocal_115 = 0;
	func_20();
	iVar0 = 0;
	func_33(Global_14424, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (func_17(0)) {
		func_7(Global_14424, "SET_DATA_SLOT", system::to_float(18), system::to_float(iVar0), system::to_float(0), -1f,
			   -1f, "CELL_229", 0, 0, 0, 0);
	}
	else {
		while (iVar0 < Global_86825) {
			func_7(Global_14424, "SET_DATA_SLOT", system::to_float(18), system::to_float(iVar0), system::to_float(0),
				   -1f, -1f, &Global_86616[iVar0 /*4*/], 0, 0, 0, 0);
			iLocal_115++;
			iLocal_20[iVar0] = iVar0;
			iVar0++;
		}
	}
	if (iLocal_20[1] == 99) {
	}
	func_33(Global_14424, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_5(Global_14424, "SET_HEADER", "CELL_3301", 0, 0, 0, 0);
	if (func_17(0) || Global_86825 == 0) {
		func_7(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		gameplay::clear_bit(&G_SleepModeOnOn25, 17);
		func_7(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		gameplay::clear_bit(&G_SleepModeOnOn25, 17);
		if (Global_14431) {
			func_7(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else {
			func_7(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
	else if (Global_14431) {
		func_7(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_7(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		func_7(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227", 0, 0, 0, 0);
	}
	else {
		func_7(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	iLocal_119 = 1;
}

// Position - 0xACD
bool func_17(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_18(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0xAEF
bool func_18(int iParam0) { return func_19(iParam0, Global_35781); }

// Position - 0xB00
int func_19(int iParam0, int iParam1) {
	if (iParam1 == 15) {
		return 1;
	}
	if (iParam0 == 15) {
		return 0;
	}
	switch (iParam0) {
	case 16:
		switch (iParam1) {
		case 9:
		case 10:
		case 7:
		case 13:
		case 14: return 0;
		}
		return 1;

	case 0:
		switch (iParam1) {
		case 5:
		case 17: return 1;
		}
		break;

	case 2:
	case 3:
		switch (iParam1) {
		case 5:
		case 6:
		case 8:
		case 17: return 1;
		}
		break;

	case 4:
		if (iParam1 == 17) {
			return 1;
		}
		break;

	case 5: break;

	case 6:
	case 8:
		if (iParam1 == 5) {
			return 1;
		}
		break;

	case 7:
		if (iParam1 == 6) {
			return 1;
		}
		break;

	case 9:
		if (iParam1 == 5) {
			return 1;
		}
		break;

	case 10:
		switch (iParam1) {
		case 5:
		case 6:
		case 17: return 1;
		}
		break;

	case 11:
		if (iParam1 == 5) {
			return 1;
		}
		break;

	case 17:
		switch (iParam1) {
		case 17:
		case 12:
		case 5: return 1;
		}
		break;

	case 18:
	case 12:
		switch (iParam1) {
		case 5:
		case 6:
		case 8: return 1;
		}
		break;

	case 13:
		switch (iParam1) {
		case 5: return 1;
		}
		break;

	case 14:
		switch (iParam1) {
		case 5: return 1;
		}
		break;
	}
	return 0;
}

// Position - 0xCE1
void func_20() {
	int iVar0;
	int iVar1;

	Global_86825 = 0;
	iVar0 = 0;
	while (iVar0 < 7) {
		if (Global_82576[iVar0 /*5*/] != -1) {
			if (Global_86825 < 52) {
				iVar1 = Global_69971.f_109[Global_82576[iVar0 /*5*/] /*4*/];
				MemCopy(&Global_86616[Global_86825 /*4*/], {func_24(iVar1)}, 4);
				Global_86825++;
			}
			else {
				return;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63) {
		if (gameplay::is_bit_set(Global_101700.f_17533[iVar0 /*6*/], 0) &&
			gameplay::is_bit_set(Global_101700.f_17533[iVar0 /*6*/], 1) &&
			!gameplay::is_bit_set(Global_101700.f_17533[iVar0 /*6*/], 3)) {
			if (Global_86825 < 52) {
				MemCopy(&Global_86616[Global_86825 /*4*/], {func_22(iVar0)}, 4);
				Global_86825++;
			}
			else {
				return;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20) {
		if (gameplay::is_bit_set(Global_101700.f_8044.f_99.f_219[0], iVar0)) {
			if (Global_86825 < 52) {
				StringCopy(&Global_86616[Global_86825 /*4*/], func_21(iVar0), 16);
				Global_86825++;
			}
			else {
				return;
			}
		}
		iVar0++;
	}
}

// Position - 0xE1C
char *func_21(int iParam0) {
	switch (iParam0) {
	case 0: return "MG_BJUM";

	case 1: return "MG_DART";

	case 2: return "MG_GOLF";

	case 3: return "MG_HUNT";

	case 4: return "MG_OFFR";

	case 5: return "MG_PILO";

	case 6: return "MG_RMPG";

	case 7: return "MG_SERA";

	case 8: return "MG_SRAC";

	case 9: return "MG_STRP";

	case 10: return "MG_STNT";

	case 11: return "MG_SHTR";

	case 12: return "MG_TAXI";

	case 13: return "MG_TENN";

	case 14: return "MG_TOWI";

	case 15: return "MG_TRFA";

	case 16: return "MG_TRFG";

	case 17: return "MG_TRIA";

	case 18: return "MG_YOGA";

	case 19: return "MG_CRCE";
	}
	return "INVALID!";
}

// Position - 0xF68
struct<2> func_22(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = {func_23(iParam0)};
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0xFA0
struct<2>
func_23(int iParam0) {
	struct<2> Var0;

	StringCopy(&Var0, "", 8);
	switch (iParam0) {
	case 0: StringCopy(&Var0, "ABI1", 8); break;

	case 1: StringCopy(&Var0, "ABI2", 8); break;

	case 2: StringCopy(&Var0, "BA1", 8); break;

	case 3: StringCopy(&Var0, "BA2", 8); break;

	case 4: StringCopy(&Var0, "BA3", 8); break;

	case 5: StringCopy(&Var0, "BA3A", 8); break;

	case 6: StringCopy(&Var0, "BA3C", 8); break;

	case 7: StringCopy(&Var0, "BA4", 8); break;

	case 8: StringCopy(&Var0, "DRE1", 8); break;

	case 9: StringCopy(&Var0, "EPS1", 8); break;

	case 10: StringCopy(&Var0, "EPS2", 8); break;

	case 11: StringCopy(&Var0, "EPS3", 8); break;

	case 12: StringCopy(&Var0, "EPS4", 8); break;

	case 13: StringCopy(&Var0, "EPS5", 8); break;

	case 14: StringCopy(&Var0, "EPS6", 8); break;

	case 15: StringCopy(&Var0, "EPS7", 8); break;

	case 16: StringCopy(&Var0, "EPS8", 8); break;

	case 17: StringCopy(&Var0, "EXT1", 8); break;

	case 18: StringCopy(&Var0, "EXT2", 8); break;

	case 19: StringCopy(&Var0, "EXT3", 8); break;

	case 20: StringCopy(&Var0, "EXT4", 8); break;

	case 21: StringCopy(&Var0, "FAN1", 8); break;

	case 22: StringCopy(&Var0, "FAN2", 8); break;

	case 23: StringCopy(&Var0, "FAN3", 8); break;

	case 24: StringCopy(&Var0, "HAO1", 8); break;

	case 25: StringCopy(&Var0, "HUN1", 8); break;

	case 26: StringCopy(&Var0, "HUN2", 8); break;

	case 27: StringCopy(&Var0, "JOS1", 8); break;

	case 28: StringCopy(&Var0, "JOS2", 8); break;

	case 29: StringCopy(&Var0, "JOS3", 8); break;

	case 30: StringCopy(&Var0, "JOS4", 8); break;

	case 31: StringCopy(&Var0, "MAU1", 8); break;

	case 32: StringCopy(&Var0, "MIN1", 8); break;

	case 33: StringCopy(&Var0, "MIN2", 8); break;

	case 34: StringCopy(&Var0, "MIN3", 8); break;

	case 35: StringCopy(&Var0, "MRS1", 8); break;

	case 36: StringCopy(&Var0, "MRS2", 8); break;

	case 37: StringCopy(&Var0, "NI1", 8); break;

	case 38: StringCopy(&Var0, "NI1A", 8); break;

	case 39: StringCopy(&Var0, "NI1B", 8); break;

	case 40: StringCopy(&Var0, "NI1C", 8); break;

	case 41: StringCopy(&Var0, "NI1D", 8); break;

	case 42: StringCopy(&Var0, "NI2", 8); break;

	case 43: StringCopy(&Var0, "NI3", 8); break;

	case 44: StringCopy(&Var0, "OME1", 8); break;

	case 45: StringCopy(&Var0, "OME2", 8); break;

	case 46: StringCopy(&Var0, "PA1", 8); break;

	case 47: StringCopy(&Var0, "PA2", 8); break;

	case 48: StringCopy(&Var0, "PA3", 8); break;

	case 49: StringCopy(&Var0, "PA3A", 8); break;

	case 50: StringCopy(&Var0, "PA3B", 8); break;

	case 51: StringCopy(&Var0, "PA4", 8); break;

	case 52: StringCopy(&Var0, "RAM1", 8); break;

	case 53: StringCopy(&Var0, "RAM2", 8); break;

	case 54: StringCopy(&Var0, "RAM3", 8); break;

	case 55: StringCopy(&Var0, "RAM4", 8); break;

	case 56: StringCopy(&Var0, "RAM5", 8); break;

	case 57: StringCopy(&Var0, "SAS1", 8); break;

	case 58: StringCopy(&Var0, "TON1", 8); break;

	case 59: StringCopy(&Var0, "TON2", 8); break;

	case 60: StringCopy(&Var0, "TON3", 8); break;

	case 61: StringCopy(&Var0, "TON4", 8); break;

	case 62: StringCopy(&Var0, "TON5", 8); break;

	default: break;
	}
	return Var0;
}

// Position - 0x13ED
struct<2>
func_24(int iParam0) {
	struct<2> Var0;

	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &Global_82612[iParam0 /*34*/].f_8, 8);
	if (iParam0 == 90) {
		switch (Global_101700.f_8044.f_99.f_205[7]) {
		case 1: StringConCat(&Var0, "A", 8); break;

		case 2: StringConCat(&Var0, "B", 8); break;

		default: StringConCat(&Var0, "A", 8); break;
		}
	}
	return Var0;
}

//Position - 0x1456
void func_25()
{
	if (iLocal_118) {
		if (system::timera() > 50) {
			iLocal_118 = 0;
		}
	}
	if (controls::_is_input_disabled(2)) {
		if (func_9(2, 181, 0)) {
			if (iLocal_116 > 0) {
				iLocal_116--;
			}
			func_28();
		}
		if (func_9(2, 180, 0)) {
			iLocal_116++;
			if (iLocal_116 == iLocal_115) {
				iLocal_116 = 0;
			}
			func_26();
		}
	}
	if (iLocal_118 == 0) {
		if (func_9(2, Global_14419, 0)) {
			if (iLocal_116 > 0) {
				iLocal_116--;
			}
			func_28();
			iLocal_118 = 1;
			system::settimera(0);
		}
		if (func_9(2, Global_14420, 0)) {
			iLocal_116++;
			if (iLocal_116 == iLocal_115) {
				iLocal_116 = 0;
			}
			func_26();
			iLocal_118 = 1;
			system::settimera(0);
		}
	}
}

// Position - 0x1503
void func_26() {
	func_33(Global_14424, "SET_INPUT_EVENT", system::to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	audio::play_sound_frontend(-1, "Menu_Navigate", &Global_14432, 1);
	func_27();
}

// Position - 0x1540
void func_27() {
	if (func_14()) {
		if (Global_14609 == 0) {
			mobile::_move_finger(2);
		}
		else {
			mobile::_move_finger(1);
		}
	}
}

// Position - 0x1563
void func_28() {
	func_33(Global_14424, "SET_INPUT_EVENT", system::to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	audio::play_sound_frontend(-1, "Menu_Navigate", &Global_14432, 1);
	func_29();
}

// Position - 0x15A0
void func_29() {
	if (func_14()) {
		if (Global_14609 == 0) {
			mobile::_move_finger(1);
		}
		else {
			mobile::_move_finger(2);
		}
	}
}

// Position - 0x15C3
void func_30() {
	func_33(Global_14424, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_7(Global_14424, "SET_DATA_SLOT", system::to_float(18), system::to_float(0), system::to_float(0), -1f, -1f,
		   "CELL_3301", 0, 0, 0, 0);
	func_7(Global_14424, "SET_DATA_SLOT", system::to_float(18), system::to_float(1), system::to_float(0), -1f, -1f,
		   "CELL_3302", 0, 0, 0, 0);
	iLocal_115 = 2;
	func_33(Global_14424, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_5(Global_14424, "SET_HEADER", "CELL_23", 0, 0, 0, 0);
	if (Global_14431) {
		func_7(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_7(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		func_7(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, "CELL_227", 0, 0, 0, 0);
	}
	else {
		func_7(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		func_7(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 15f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	iLocal_119 = 0;
}

// Position - 0x16FD
void func_31() {
	func_32(0, "CELL_3001", 1, Global_101436);
	func_32(1, "CELL_3008", 3, Global_101436);
	func_32(2, "CELL_3004", 7, Global_101439);
	func_32(3, "CELL_3005", 9, Global_101440);
	func_32(4, "CELL_3007", 11, Global_101441);
}

// Position - 0x174D
void func_32(int iParam0, char *sParam1, int iParam2, var uParam3) {
	StringCopy(&Local_131[iParam0 /*6*/], sParam1, 16);
	Local_131[iParam0 /*6*/].f_4 = iParam2;
	Local_131[iParam0 /*6*/].f_5 = uParam3;
	if (Local_131[0 /*6*/].f_4 == 1) {
	}
}

// Position - 0x177E
void func_33(int iParam0, char *sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6) {
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
