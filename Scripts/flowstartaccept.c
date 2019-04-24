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
int iLocal_22 = 0;
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
	if (player::has_force_cleanup_occurred(83)) {
		func_6();
	}
	if (!Global_1 && !gameplay::is_pc_version() && gameplay::_0x6FDDF453C0C756EC()) {
		script::set_no_loading_screen(1);
		if (!cam::is_screen_faded_out()) {
			if (!cam::is_screen_fading_out()) {
				cam::do_screen_fade_out(800);
			}
		}
		iLocal_20 = unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
		iLocal_21 = unk_0x67D02A194A2FC2BD("INSTRUCTIONAL_BUTTONS");
		while (!graphics::has_scaleform_movie_loaded(iLocal_20) || !graphics::has_scaleform_movie_loaded(iLocal_21)) {
			system::wait(0);
		}
		graphics::_push_scaleform_movie_function(iLocal_20, "SHOW_CENTERED_MP_MESSAGE");
		func_5("INSTALL_COMP");
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(iLocal_21, "SET_DATA_SLOT_EMPTY");
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(iLocal_21, "SET_DATA_SLOT");
		graphics::_push_scaleform_movie_function_parameter_int(0);
		func_4(controls::get_control_instructional_button(2, 201, 1));
		func_5("HUD_CONTINUE");
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(iLocal_21, "DRAW_INSTRUCTIONAL_BUTTONS");
		graphics::_push_scaleform_movie_function_parameter_bool(0);
		graphics::_pop_scaleform_movie_function_void();
		while (!cam::is_screen_faded_out()) {
			system::wait(0);
		}
		script::shutdown_loading_screen();
		while (!iLocal_22) {
			ui::hide_loading_on_fade_this_frame();
			graphics::_set_2d_layer(7);
			graphics::draw_scaleform_movie_fullscreen(iLocal_20, 255, 255, 255, 0, 0);
			graphics::draw_scaleform_movie_fullscreen(iLocal_21, 255, 255, 255, 0, 0);
			if (controls::is_control_pressed(2, 201)) {
				iLocal_22 = 1;
			}
			system::wait(0);
		}
		script::set_no_loading_screen(0);
		func_3(1, 1);
		func_1();
	}
	Global_69971.f_1 = 0;
	gameplay::set_bit(&Global_101700.f_8975.f_25, 0);
	func_6();
}

// Position - 0x17D
int func_1() {
	if (func_2(0)) {
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

// Position - 0x1C8
bool func_2(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x1F3
void func_3(int iParam0, int iParam1) {
	Global_91530.f_7 = iParam0;
	Global_91530.f_8 = iParam1;
}

// Position - 0x20B
void func_4(char *sParam0) { graphics::_0xE83A3E3557A56640(sParam0); }

// Position - 0x219
void func_5(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x22B
void func_6() {
	if (iLocal_20 != 0) {
		graphics::set_scaleform_movie_as_no_longer_needed(&iLocal_20);
	}
	if (iLocal_21 != 0) {
		graphics::set_scaleform_movie_as_no_longer_needed(&iLocal_21);
	}
	graphics::_set_2d_layer(4);
	script::set_no_loading_screen(0);
	script::terminate_this_thread();
}
