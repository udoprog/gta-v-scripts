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
		func_2();
	}
	iLocal_18 = unk_0x67D02A194A2FC2BD("graphic_design");
	while (!graphics::has_scaleform_movie_loaded(iLocal_18)) {
		system::wait(0);
	}
	while (true) {
		graphics::draw_scaleform_movie(iLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(iLocal_18);
		system::wait(0);
	}
}

// Position - 0x93
void func_1(int iParam0) {
	if (Global_14422 == 0) {
		if (controls::is_control_pressed(2, 189) || controls::is_control_pressed(2, 190) ||
			controls::is_control_pressed(2, 188) || controls::is_control_pressed(2, 187) ||
			controls::is_control_pressed(2, 205) || controls::is_control_pressed(2, 206) ||
			controls::is_control_pressed(2, 201) || controls::is_control_pressed(2, 202)) {
			Global_14422 = 1;
			system::settimera(0);
		}
	}
	else if (system::timera() > 50) {
		Global_14422 = 0;
	}
	if (Global_14422 == 0) {
		if (controls::is_control_pressed(2, 189)) {
			graphics::_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			graphics::_push_scaleform_movie_function_parameter_int(10);
			graphics::_pop_scaleform_movie_function_void();
		}
		if (controls::is_control_pressed(2, 190)) {
			graphics::_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			graphics::_push_scaleform_movie_function_parameter_int(11);
			graphics::_pop_scaleform_movie_function_void();
		}
		if (controls::is_control_pressed(2, 205)) {
			graphics::_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			graphics::_push_scaleform_movie_function_parameter_int(4);
			graphics::_pop_scaleform_movie_function_void();
		}
		if (controls::is_control_pressed(2, 206)) {
			graphics::_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			graphics::_push_scaleform_movie_function_parameter_int(6);
			graphics::_pop_scaleform_movie_function_void();
		}
		if (controls::is_control_pressed(2, 188)) {
			graphics::_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			graphics::_push_scaleform_movie_function_parameter_int(8);
			graphics::_pop_scaleform_movie_function_void();
		}
		if (controls::is_control_pressed(2, 187)) {
			graphics::_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			graphics::_push_scaleform_movie_function_parameter_int(9);
			graphics::_pop_scaleform_movie_function_void();
		}
		if (controls::is_control_pressed(2, 201)) {
			graphics::_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			graphics::_push_scaleform_movie_function_parameter_int(16);
			graphics::_pop_scaleform_movie_function_void();
		}
		if (controls::is_control_pressed(2, 202)) {
			graphics::_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			graphics::_push_scaleform_movie_function_parameter_int(17);
			graphics::_pop_scaleform_movie_function_void();
		}
	}
}

// Position - 0x215
void func_2() {
	func_3(0);
	gameplay::set_game_paused(0);
	graphics::set_scaleform_movie_as_no_longer_needed(&iLocal_18);
	script::terminate_this_thread();
}

// Position - 0x231
void func_3(int iParam0) {
	if (iParam0) {
		func_8();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
			gameplay::set_bit(&G_SleepModeOffOn11, 16);
		}
		Global_14443.f_1 = 1;
		if (func_7(0)) {
			func_4(0);
		}
	}
	else if (Global_14443.f_1 == 1) {
		if (Global_14443.f_1 != 0) {
			Global_14443.f_1 = 3;
		}
	}
}

// Position - 0x294
void func_4(int iParam0) {
	if (Global_14604) {
		func_6(0, 0);
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
	if (!func_5()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x304
int func_5() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x32B
void func_6(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_7(0)) {
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

// Position - 0x39F
bool func_7(int iParam0) {
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

// Position - 0x3F9
void func_8() {
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10) {
		Global_15798 = 0;
		Global_15794 = 1;
	}
}
