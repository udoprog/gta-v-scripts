#pragma region Local Var //{
int iLocal_0 = 0;
int iLocal_1 = 0;
int iLocal_2 = 0;
#pragma endregion //}

void __EntryFunction__() {
	if (player::has_force_cleanup_occurred(83)) {
		func_10();
	}
	streaming::set_game_pauses_for_streaming(0);
	gameplay::clear_bit(&Global_101700.f_8975.f_25, 1);
	func_7();
	script::set_no_loading_screen(1);
	if (!cam::is_screen_faded_out()) {
		cam::do_screen_fade_out(0);
	}
	iLocal_0 = unk_0x67D02A194A2FC2BD("OPENING_CREDITS");
	while (!graphics::has_scaleform_movie_loaded(iLocal_0)) {
		func_7();
		system::wait(0);
	}
	while (!cam::is_screen_faded_out()) {
		func_7();
		system::wait(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = gameplay::get_game_timer() + 8000 + system::round(2f * 1000f);
	while (!cutscene::is_cutscene_playing()) {
		func_7();
		if (!gameplay::is_bit_set(Global_101700.f_8975.f_25, 1)) {
			graphics::draw_scaleform_movie_fullscreen(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2) {
				if (gameplay::get_game_timer() > iLocal_1) {
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = gameplay::get_game_timer() + system::round(2f * 1000f);
				}
			}
			else if (gameplay::get_game_timer() > iLocal_1) {
				gameplay::set_bit(&Global_101700.f_8975.f_25, 1);
				if (gameplay::_0x6FDDF453C0C756EC() || gameplay::is_pc_version()) {
					func_4(1, 1);
					func_2();
				}
				else {
					func_1();
				}
			}
		}
		system::wait(0);
	}
	func_10();
}

// Position - 0x13E
void func_1() { Global_91530 = 1; }

// Position - 0x14B
int func_2() {
	if (func_3(0)) {
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

// Position - 0x196
bool func_3(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x1C1
void func_4(int iParam0, int iParam1) {
	Global_91530.f_7 = iParam0;
	Global_91530.f_8 = iParam1;
}

// Position - 0x1D9
void func_5(char *sParam0) {
	graphics::_push_scaleform_movie_function(iLocal_0, "HIDE_LOGO");
	graphics::begin_text_command_scaleform_string("STRING");
	ui::add_text_component_substring_player_name(sParam0);
	graphics::end_text_command_scaleform_string();
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x200
void func_6(char *sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6,
			float fParam7) {
	graphics::_push_scaleform_movie_function(iLocal_0, "SHOW_LOGO");
	graphics::begin_text_command_scaleform_string("STRING");
	ui::add_text_component_substring_player_name(sParam0);
	graphics::end_text_command_scaleform_string();
	graphics::_push_scaleform_movie_function_parameter_float(fParam1);
	graphics::_push_scaleform_movie_function_parameter_float(fParam2);
	graphics::_push_scaleform_movie_function_parameter_float(fParam3);
	graphics::_push_scaleform_movie_function_parameter_float(fParam4);
	graphics::_push_scaleform_movie_function_parameter_float(fParam5);
	graphics::_push_scaleform_movie_function_parameter_float(fParam6);
	graphics::_push_scaleform_movie_function_parameter_float(fParam7);
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x251
void func_7() {
	ui::hide_loading_on_fade_this_frame();
	controls::disable_control_action(2, 199, 1);
	graphics::_set_2d_layer(7);
	func_8();
}

// Position - 0x26E
void func_8() {
	unk1::_0xEB2D525B57F42B40();
	func_9();
}

// Position - 0x27E
void func_9() { Global_17151.f_134 = 1; }

// Position - 0x28C
void func_10() {
	gameplay::set_bit(&Global_101700.f_8975.f_25, 1);
	if (iLocal_0 != 0) {
		graphics::set_scaleform_movie_as_no_longer_needed(&iLocal_0);
	}
	graphics::_set_2d_layer(4);
	script::set_no_loading_screen(0);
	streaming::set_game_pauses_for_streaming(1);
	script::terminate_this_thread();
}
