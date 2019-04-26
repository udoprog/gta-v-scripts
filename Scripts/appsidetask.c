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
int iLocal_18[4] = {0, 0, 0, 0};
int iLocal_23 = 0;
int iLocal_24 = 0;
int iLocal_25 = 0;
int iLocal_26 = 0;
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
	fLocal_27 = 0.72f;
	fLocal_28 = 0.42f;
	fLocal_29 = 0f;
	fLocal_30 = 0f;
	gameplay::network_set_script_is_safe_for_network_game();
	Global_16811 = 0;
	Global_14603 = 0;
	func_18();
	Global_14443.f_1 = 7;
	func_17(Global_14424, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_16(Global_14424, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
	while (true) {
		system::wait(0);
		if (Global_14443.f_1 != 9) {
			switch (Global_14443.f_1) {
			case 7:
				if (Global_16811 == 0) {
					func_15();
					func_14();
					func_11();
				}
				break;

			case 8:
				if (Global_16811 == 1) {
					func_5();
				}
				break;

			case 3: script::terminate_this_thread(); break;

			default: break;
			}
			if (Global_16811 == 0) {
				if (func_4()) {
					func_3();
				}
			}
			else if (func_2(2, Global_14411, 0)) {
				Global_14421 = 1;
				Global_16811 = 0;
				Global_14443.f_1 = 7;
				func_18();
				func_17(Global_14424, "DISPLAY_VIEW", 14f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_16(Global_14424, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
			}
		}
		if (func_1()) {
			func_3();
		}
	}
}

// Position - 0x163
bool func_1() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 3 || Global_14443.f_1 == 0 || Global_14387 == 1) {
		Global_14430 = 1;
		return true;
	}
	return false;
}

// Position - 0x1A6
bool func_2(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x218
void func_3() { script::terminate_this_thread(); }

// Position - 0x224
bool func_4() {
	if (Global_2919 == 1 || Global_14443.f_1 < 7) {
		Global_14430 = 1;
		return true;
	}
	return false;
}

// Position - 0x24D
void func_5() {
	graphics::draw_rect(0.824f, 0.5f, 0.253f, 0.313f, 0, 0, 0, 155, 0);
	func_6();
}

// Position - 0x277
void func_6() {
	int iVar0;

	fLocal_29 = fLocal_27;
	fLocal_30 = fLocal_28;
	func_10(255, 255, 255, 205);
	func_9();
	func_8(fLocal_29, fLocal_30, &Global_101700.f_27009[Global_17033[iLocal_25 /*9*/] /*29*/].f_3, 0);
	fLocal_29 += 0.07f;
	func_10(255, 255, 255, 205);
	if (Global_17033[iLocal_25 /*9*/].f_2.f_1 < 10) {
		func_7(fLocal_29, fLocal_30, "CELL_506", Global_17033[iLocal_25 /*9*/].f_2.f_2,
			   Global_17033[iLocal_25 /*9*/].f_2.f_1);
	}
	else {
		func_7(fLocal_29, fLocal_30, "CELL_503", Global_17033[iLocal_25 /*9*/].f_2.f_2,
			   Global_17033[iLocal_25 /*9*/].f_2.f_1);
	}
	fLocal_29 += 0.07f;
	func_10(255, 255, 255, 205);
	func_7(fLocal_29, fLocal_30, "CELL_505", Global_17033[iLocal_25 /*9*/].f_2.f_3,
		   Global_17033[iLocal_25 /*9*/].f_2.f_4);
	fLocal_29 = fLocal_27;
	func_10(255, 255, 255, 205);
	fLocal_30 += 0.02f;
	if (Global_16864[Global_17033[iLocal_25 /*9*/].f_1 /*42*/].f_8 == 0) {
		func_9();
	}
	ui::set_text_wrap(0f, 0.93f);
	func_8(fLocal_29, fLocal_30, &Global_16864[Global_17033[iLocal_25 /*9*/].f_1 /*42*/].f_4, 0);
	fLocal_30 += 0.07f;
	iVar0 = 1;
	while (iVar0 <= Global_16864[Global_17033[iLocal_25 /*9*/].f_1 /*42*/].f_9) {
		func_10(255, 255, 255, 255);
		fLocal_30 += 0.04f;
		if (Global_16864[Global_17033[iLocal_25 /*9*/].f_1 /*42*/].f_32[iVar0] == -1) {
			func_8(fLocal_29, fLocal_30, &Global_16864[Global_17033[iLocal_25 /*9*/].f_1 /*42*/].f_10[iVar0 /*4*/], 0);
		}
		else {
			func_7(fLocal_29, fLocal_30, &Global_16864[Global_17033[iLocal_25 /*9*/].f_1 /*42*/].f_10[iVar0 /*4*/],
				   Global_16864[Global_17033[iLocal_25 /*9*/].f_1 /*42*/].f_27[iVar0],
				   Global_16864[Global_17033[iLocal_25 /*9*/].f_1 /*42*/].f_32[iVar0]);
		}
		iVar0++;
	}
}

// Position - 0x45C
void func_7(float fParam0, float fParam1, char *sParam2, int iParam3, int iParam4) {
	ui::begin_text_command_display_text(sParam2);
	ui::add_text_component_integer(iParam3);
	ui::add_text_component_integer(iParam4);
	ui::end_text_command_display_text(fParam0, fParam1, 0);
}

// Position - 0x47F
void func_8(float fParam0, float fParam1, char *sParam2, int iParam3) {
	ui::begin_text_command_display_text(sParam2);
	ui::end_text_command_display_text(fParam0, fParam1, iParam3);
}

// Position - 0x497
void func_9() {
	ui::set_text_scale(0.4f, 0.4f);
	ui::set_text_colour(255, 128, 0, 255);
	ui::set_text_dropshadow(1, 0, 78, 255, 255);
}

// Position - 0x4C1
void func_10(int iParam0, int iParam1, int iParam2, int iParam3) {
	ui::set_text_scale(0.3f, 0.3f);
	ui::set_text_dropshadow(0, 0, 0, 0, 0);
	ui::set_text_edge(1, 0, 0, 0, 205);
	ui::set_text_proportional(1);
	ui::set_text_font(0);
	ui::set_text_colour(iParam0, iParam1, iParam2, iParam3);
}

// Position - 0x500
void func_11() {
	if (func_2(2, Global_14412, 0)) {
		iLocal_25 = iLocal_18[iLocal_24];
		Global_16811 = 1;
		func_12(Global_14424, "SET_DATA_SLOT", 15f, 0f, -1f, -1f, -1f, "CELL_287", "CELL_280", "CELL_285", "CELL_284",
				0);
		func_17(Global_14424, "DISPLAY_VIEW", 15f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_16(Global_14424, "SET_HEADER", "CELL_4", 0, 0, 0, 0);
		Global_14443.f_1 = 8;
		Global_16811 = 1;
	}
}

// Position - 0x57E
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
		func_13(sParam7);
	}
	if (!gameplay::is_string_null_or_empty(sParam8)) {
		func_13(sParam8);
	}
	if (!gameplay::is_string_null_or_empty(sParam9)) {
		func_13(sParam9);
	}
	if (!gameplay::is_string_null_or_empty(sParam10)) {
		func_13(sParam10);
	}
	if (!gameplay::is_string_null_or_empty(sParam11)) {
		func_13(sParam11);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x631
void func_13(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x643
void func_14() {
	if (iLocal_31) {
		if (system::timera() > 50) {
			iLocal_31 = 0;
		}
	}
	if (controls::_is_input_disabled(2)) {
		if (func_2(2, 181, 0)) {
			if (iLocal_24 > 0) {
				iLocal_24--;
			}
		}
		if (func_2(2, 180, 0)) {
			iLocal_24++;
			if (iLocal_24 == iLocal_23) {
				iLocal_24 = 0;
			}
		}
	}
	if (iLocal_31 == 0) {
		if (func_2(2, Global_14419, 0)) {
			if (iLocal_24 > 0) {
				iLocal_24--;
			}
			iLocal_31 = 1;
			system::settimera(0);
		}
		if (func_2(2, Global_14420, 0)) {
			iLocal_24++;
			if (iLocal_24 == iLocal_23) {
				iLocal_24 = 0;
			}
			iLocal_31 = 1;
			system::settimera(0);
		}
	}
}

// Position - 0x6E0
void func_15() {
	int iVar0;

	iVar0 = 0;
	fLocal_29 = fLocal_27;
	fLocal_30 = fLocal_28;
	iLocal_26 = iLocal_23;
	while (iVar0 < iLocal_26) {
		func_10(255, 255, 255, 205);
		if (iVar0 == iLocal_24) {
			func_9();
		}
		func_8(fLocal_29, fLocal_30, &Global_101700.f_27009[Global_17033[iLocal_18[iVar0] /*9*/] /*29*/].f_3, 0);
		fLocal_29 += 0.07f;
		func_10(255, 255, 255, 205);
		if (Global_17033[iLocal_18[iVar0] /*9*/].f_2.f_1 < 10) {
			func_7(fLocal_29, fLocal_30, "CELL_506", Global_17033[iLocal_18[iVar0] /*9*/].f_2.f_2,
				   Global_17033[iLocal_18[iVar0] /*9*/].f_2.f_1);
		}
		else {
			func_7(fLocal_29, fLocal_30, "CELL_503", Global_17033[iLocal_18[iVar0] /*9*/].f_2.f_2,
				   Global_17033[iLocal_18[iVar0] /*9*/].f_2.f_1);
		}
		fLocal_29 += 0.07f;
		func_10(255, 255, 255, 205);
		func_7(fLocal_29, fLocal_30, "CELL_505", Global_17033[iLocal_18[iVar0] /*9*/].f_2.f_3,
			   Global_17033[iLocal_18[iVar0] /*9*/].f_2.f_4);
		fLocal_29 = fLocal_27;
		func_10(255, 255, 255, 205);
		if (iVar0 == iLocal_24) {
			func_9();
		}
		fLocal_30 += 0.02f;
		ui::set_text_wrap(0f, 0.93f);
		func_8(fLocal_29, fLocal_30, &Global_16864[Global_17033[iLocal_18[iVar0] /*9*/].f_1 /*42*/], 0);
		fLocal_30 += 0.05f;
		iVar0++;
	}
}

// Position - 0x847
void func_16(int iParam0, char *sParam1, char *sParam2, char *sParam3, char *sParam4, char *sParam5, char *sParam6) {
	graphics::_push_scaleform_movie_function(iParam0, sParam1);
	func_13(sParam2);
	if (!gameplay::is_string_null_or_empty(sParam3)) {
		func_13(sParam3);
	}
	if (!gameplay::is_string_null_or_empty(sParam4)) {
		func_13(sParam4);
	}
	if (!gameplay::is_string_null_or_empty(sParam5)) {
		func_13(sParam5);
	}
	if (!gameplay::is_string_null_or_empty(sParam6)) {
		func_13(sParam6);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x8A2
void func_17(int iParam0, char *sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6) {
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

// Position - 0x905
void func_18() {
	int iVar0[4];
	int iVar5;
	int iVar6;
	int iVar7;

	iLocal_23 = 0;
	iVar5 = 0;
	while (iVar5 < 4) {
		iVar6 = 0;
		iVar7 = 3;
		Global_17033[iVar7 /*9*/].f_2 = -1;
		Global_17033[iVar7 /*9*/].f_2.f_1 = 0;
		Global_17033[iVar7 /*9*/].f_2.f_2 = 0;
		Global_17033[iVar7 /*9*/].f_2.f_3 = 0;
		Global_17033[iVar7 /*9*/].f_2.f_5 = 0;
		while (iVar6 < 4) {
			if (iVar0[iVar6] == 0) {
				if (Global_17033[iVar6 /*9*/].f_8 != 0) {
					if (func_19(Global_17033[iVar6 /*9*/].f_2, Global_17033[iVar7 /*9*/].f_2)) {
						iVar7 = iVar6;
					}
				}
			}
			iVar6++;
		}
		iLocal_18[iVar5] = iVar7;
		iVar0[iVar7] = 1;
		if (Global_17033[iVar5 /*9*/].f_8 != 0) {
			iLocal_23++;
		}
		iVar5++;
	}
	func_12(Global_14424, "SET_DATA_SLOT", 14f, 0f, 25f, -1f, -1f, "CELL_287", "CELL_280", 0, 0, 0);
}

// Position - 0x9F0
bool func_19(struct<6> Param0, struct<6> Param6) {
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;

	if (Param0.f_5 < Param6.f_5) {
		return false;
	}
	if (Param0.f_5 > Param6.f_5) {
		return true;
	}
	if (Param0.f_5 == Param6.f_5) {
		if (Param0.f_4 < Param6.f_4) {
			return false;
		}
		if (Param0.f_4 > Param6.f_4) {
			return true;
		}
		if (Param0.f_4 == Param6.f_4) {
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = Param0.f_3 * 86400;
			iVar12 = Var0 + Var0.f_1 + Var0.f_2 + Var0.f_3;
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = Param6.f_3 * 86400;
			iVar13 = Var6 + Var6.f_1 + Var6.f_2 + Var6.f_3;
			if (iVar12 > iVar13 || iVar12 == iVar13) {
				return true;
			}
			else {
				return false;
			}
		}
	}
	return false;
}
