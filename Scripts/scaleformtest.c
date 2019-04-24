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
int iLocal_18 = 0;
int iLocal_19 = 0;
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
	if (cam::is_screen_faded_out()) {
		cam::do_screen_fade_in(500);
	}
	if (player::has_force_cleanup_occurred(3)) {
		func_5();
	}
	iLocal_19 = unk_0x67D02A194A2FC2BD("instructional_buttons");
	while (!graphics::has_scaleform_movie_loaded(iLocal_19)) {
		system::wait(0);
	}
	while (true) {
		graphics::draw_scaleform_movie_fullscreen(iLocal_19, 255, 255, 255, 0, 0);
		func_4();
		func_1(iLocal_18, iLocal_19);
		system::wait(0);
	}
}

// Position - 0x8D
void func_1(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0:
		graphics::_push_scaleform_movie_function(iParam1, "CLEAR_ALL");
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(iParam1, "SET_CLEAR_SPACE");
		graphics::_push_scaleform_movie_function_parameter_int(200);
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(iParam1, "SET_DATA_SLOT");
		graphics::_push_scaleform_movie_function_parameter_int(0);
		func_3(controls::get_control_instructional_button(2, 191, 1));
		func_2("PRESS A");
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(iParam1, "SET_DATA_SLOT");
		graphics::_push_scaleform_movie_function_parameter_int(1);
		func_3(controls::get_control_instructional_button(2, 194, 1));
		func_2("PRESS B");
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(iParam1, "SET_DATA_SLOT");
		graphics::_push_scaleform_movie_function_parameter_int(2);
		func_3(controls::get_control_instructional_button(2, 193, 1));
		func_2("PRESS X");
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(iParam1, "SET_DATA_SLOT");
		graphics::_push_scaleform_movie_function_parameter_int(3);
		func_3(controls::get_control_instructional_button(2, 192, 1));
		func_2("PRESS Y");
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(iParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(iParam1, "SET_BACKGROUND_COLOUR");
		graphics::_push_scaleform_movie_function_parameter_int(0);
		graphics::_push_scaleform_movie_function_parameter_int(0);
		graphics::_push_scaleform_movie_function_parameter_int(0);
		graphics::_push_scaleform_movie_function_parameter_int(80);
		graphics::_pop_scaleform_movie_function_void();
		iLocal_18 = -1;
		break;

	case 1:
		graphics::_push_scaleform_movie_function(iParam1, "CLEAR_ALL");
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(iParam1, "SET_CLEAR_SPACE");
		graphics::_push_scaleform_movie_function_parameter_int(200);
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(iParam1, "SET_DATA_SLOT");
		graphics::_push_scaleform_movie_function_parameter_int(0);
		func_3(controls::get_control_instructional_button(2, 187, 1));
		func_2("DOWN");
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(iParam1, "SET_DATA_SLOT");
		graphics::_push_scaleform_movie_function_parameter_int(1);
		func_3(controls::get_control_instructional_button(2, 188, 1));
		func_2("UP");
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(iParam1, "SET_DATA_SLOT");
		graphics::_push_scaleform_movie_function_parameter_int(2);
		func_3(controls::get_control_instructional_button(2, 190, 1));
		func_2("LEFT");
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(iParam1, "SET_DATA_SLOT");
		graphics::_push_scaleform_movie_function_parameter_int(3);
		func_3(controls::get_control_instructional_button(2, 189, 1));
		func_2("RIGHT");
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(iParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(iParam1, "SET_BACKGROUND_COLOUR");
		graphics::_push_scaleform_movie_function_parameter_int(0);
		graphics::_push_scaleform_movie_function_parameter_int(0);
		graphics::_push_scaleform_movie_function_parameter_int(0);
		graphics::_push_scaleform_movie_function_parameter_int(80);
		graphics::_pop_scaleform_movie_function_void();
		iLocal_18 = -1;
		break;

	case 2:
		graphics::_push_scaleform_movie_function(iParam1, "CLEAR_ALL");
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(iParam1, "SET_CLEAR_SPACE");
		graphics::_push_scaleform_movie_function_parameter_int(200);
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(iParam1, "SET_DATA_SLOT");
		graphics::_push_scaleform_movie_function_parameter_int(0);
		func_3(controls::get_control_instructional_button(2, 202, 1));
		func_2("BACK");
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(iParam1, "DRAW_INSTRUCTIONAL_BUTTONS");
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(iParam1, "SET_BACKGROUND_COLOUR");
		graphics::_push_scaleform_movie_function_parameter_int(0);
		graphics::_push_scaleform_movie_function_parameter_int(0);
		graphics::_push_scaleform_movie_function_parameter_int(0);
		graphics::_push_scaleform_movie_function_parameter_int(80);
		graphics::_pop_scaleform_movie_function_void();
		iLocal_18 = -1;
		break;

	default: break;
	}
}

// Position - 0x312
void func_2(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x324
void func_3(char *sParam0) { graphics::_0xE83A3E3557A56640(sParam0); }

// Position - 0x332
void func_4() {
	if (Global_14422 == 0) {
		if (controls::is_control_pressed(2, 189) || controls::is_control_pressed(2, 190) ||
			controls::is_control_pressed(2, 188) || controls::is_control_pressed(2, 187) ||
			controls::is_control_pressed(2, 205) || controls::is_control_pressed(2, 206) ||
			controls::is_control_pressed(2, 207) || controls::is_control_pressed(2, 208) ||
			controls::is_control_pressed(2, 201) || controls::is_control_pressed(2, 202)) {
			Global_14422 = 1;
			system::settimera(0);
		}
	}
	else if (system::timera() > 50) {
		Global_14422 = 0;
	}
	if (Global_14422 == 0) {
		if (controls::is_control_pressed(2, 217)) {
			iLocal_18 = 1;
		}
		if (controls::is_control_pressed(2, 189)) {
			iLocal_18 = 2;
		}
		if (controls::is_control_pressed(2, 190)) {
			iLocal_18 = 2;
		}
		if (controls::is_control_pressed(2, 205)) {
		}
		if (controls::is_control_pressed(2, 206)) {
		}
		if (controls::is_control_pressed(2, 207)) {
		}
		if (controls::is_control_pressed(2, 208)) {
		}
		if (controls::is_control_pressed(2, 188)) {
			iLocal_18 = 2;
		}
		if (controls::is_control_pressed(2, 187)) {
			iLocal_18 = 2;
		}
		if (controls::is_control_pressed(2, 201)) {
			iLocal_18 = 1;
		}
		if (controls::is_control_pressed(2, 202)) {
			iLocal_18 = 0;
		}
		if (controls::is_control_pressed(2, 203)) {
			iLocal_18 = 1;
		}
		if (controls::is_control_pressed(2, 204)) {
			iLocal_18 = 1;
		}
	}
}

// Position - 0x47D
void func_5() {
	func_6(0);
	gameplay::set_game_paused(0);
	graphics::set_scaleform_movie_as_no_longer_needed(&iLocal_19);
	script::terminate_this_thread();
}

// Position - 0x499
void func_6(int iParam0) {
	if (iParam0) {
		func_11();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
			gameplay::set_bit(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_10(0)) {
			func_7(0);
		}
	}
	else if (Global_14443.f_1 == 1) {
		if (Global_14443.f_1 != 0) {
			Global_14443.f_1 = 3;
		}
	}
}

// Position - 0x4FC
void func_7(int iParam0) {
	if (Global_14604) {
		func_9(0, 0);
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
	if (!func_8()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x56C
int func_8() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x593
void func_9(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_10(0)) {
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

// Position - 0x607
bool func_10(int iParam0) {
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

// Position - 0x661
void func_11() {
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10) {
		Global_15798 = 0;
		Global_15794 = 1;
	}
}
