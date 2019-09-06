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
int iLocal_20 = 0;
int iLocal_21 = 0;
int iLocal_22 = 0;
int iLocal_23 = 0;
int iLocal_24 = 0;
float fLocal_25 = 0f;
int iLocal_26 = 0;
int iLocal_27 = 0;
float fLocal_28 = 0f;
int iLocal_29 = 0;
int iLocal_30 = 0;
float fLocal_31 = 0f;
int iLocal_32 = 0;
int iLocal_33 = 0;
float fLocal_34 = 0f;
int iLocal_35 = 0;
int iLocal_36 = 0;
float fLocal_37 = 0f;
int iLocal_38 = 0;
int iLocal_39 = 0;
float fLocal_40 = 0f;
int iLocal_41 = 0;
int iLocal_42 = 0;
float fLocal_43 = 0f;
int iLocal_44 = 0;
int iLocal_45 = 0;
float fLocal_46 = 0f;
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
	iLocal_20 = ui::add_blip_for_coord(100f, 100f, 30f);
	iLocal_22 = 1;
	fLocal_25 = 0f;
	fLocal_28 = 0f;
	fLocal_31 = 0f;
	fLocal_34 = 0f;
	fLocal_37 = 0f;
	fLocal_40 = 0f;
	fLocal_43 = 0f;
	fLocal_46 = 0f;
	if (cam::is_screen_faded_out()) {
		cam::do_screen_fade_in(500);
	}
	if (player::has_force_cleanup_occurred(3)) {
		func_2();
	}
	iLocal_18 = unk_0x67D02A194A2FC2BD("p_bubblegum");
	while (!graphics::has_scaleform_movie_loaded(iLocal_18)) {
		system::wait(0);
	}
	while (true) {
		if (iLocal_21 == 1) {
		}
		if (iLocal_22 == 1) {
			iLocal_22 = 0;
			iLocal_19 = cam::create_cam("DEFAULT_SCRIPTED_CAMERA", 1);
			if (cam::does_cam_exist(iLocal_19)) {
				cam::set_cam_params(iLocal_19, -160.6632f, -1072.144f, -1615.471f, -89.4999f, -0.2863f, 58.1189f, 45f,
									0, 1, 1, 2);
				cam::set_cam_near_clip(iLocal_19, 0.01f);
				cam::set_cam_far_clip(iLocal_19, 0.02f);
				cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			}
			ui::set_blip_sprite(iLocal_20, 66);
		}
		iLocal_21 = 1;
		graphics::draw_scaleform_movie(iLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(iLocal_18);
		system::wait(0);
	}
}

// Position - 0x13F
void func_1(int iParam0) {
	if (Global_14422 == 0) {
		if (controls::is_control_pressed(2, 189) || controls::is_control_pressed(2, 190)) {
			Global_14422 = 1;
			system::settimera(0);
		}
	}
	else if (system::timera() > 50) {
		Global_14422 = 0;
	}
	if (Global_14422 == 0) {
		if (controls::is_control_just_pressed(2, 189)) {
			iLocal_23 = 1;
			fLocal_25 = 1f;
		}
		if (controls::is_control_pressed(2, 189)) {
			iLocal_23 = 1;
			fLocal_25 = 1f;
		}
		if (!controls::is_control_pressed(2, 189)) {
			iLocal_23 = 0;
			fLocal_25 = 0f;
		}
		if (!iLocal_23 == iLocal_24) {
			iLocal_24 = iLocal_23;
			graphics::_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			graphics::_push_scaleform_movie_function_parameter_int(10);
			graphics::_push_scaleform_movie_function_parameter_float(fLocal_25);
			graphics::_pop_scaleform_movie_function_void();
		}
		if (controls::is_control_just_pressed(2, 190)) {
			iLocal_26 = 1;
			fLocal_28 = 1f;
		}
		if (controls::is_control_pressed(2, 190)) {
			iLocal_26 = 1;
			fLocal_28 = 1f;
		}
		if (!controls::is_control_pressed(2, 190)) {
			iLocal_26 = 0;
			fLocal_28 = 0f;
		}
		if (!iLocal_26 == iLocal_27) {
			iLocal_27 = iLocal_26;
			graphics::_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			graphics::_push_scaleform_movie_function_parameter_int(11);
			graphics::_push_scaleform_movie_function_parameter_float(fLocal_28);
			graphics::_pop_scaleform_movie_function_void();
		}
		if (controls::is_control_just_pressed(2, 188)) {
			iLocal_29 = 1;
			fLocal_31 = 1f;
		}
		if (controls::is_control_pressed(2, 188)) {
			iLocal_29 = 1;
			fLocal_31 = 1f;
		}
		if (!controls::is_control_pressed(2, 188)) {
			iLocal_29 = 0;
			fLocal_31 = 0f;
		}
		if (!iLocal_29 == iLocal_30) {
			iLocal_30 = iLocal_29;
			graphics::_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			graphics::_push_scaleform_movie_function_parameter_int(8);
			graphics::_push_scaleform_movie_function_parameter_float(fLocal_31);
			graphics::_pop_scaleform_movie_function_void();
		}
		if (controls::is_control_just_pressed(2, 187)) {
			iLocal_32 = 1;
			fLocal_34 = 1f;
		}
		if (controls::is_control_pressed(2, 187)) {
			iLocal_32 = 1;
			fLocal_34 = 1f;
		}
		if (!controls::is_control_pressed(2, 187)) {
			iLocal_32 = 0;
			fLocal_34 = 0f;
		}
		if (!iLocal_32 == iLocal_33) {
			iLocal_33 = iLocal_32;
			graphics::_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			graphics::_push_scaleform_movie_function_parameter_int(9);
			graphics::_push_scaleform_movie_function_parameter_float(fLocal_34);
			graphics::_pop_scaleform_movie_function_void();
		}
		if (controls::is_control_just_pressed(2, 202)) {
			iLocal_35 = 1;
			fLocal_37 = 1f;
		}
		if (controls::is_control_pressed(2, 202)) {
			iLocal_35 = 1;
			fLocal_37 = 1f;
		}
		if (!controls::is_control_pressed(2, 202)) {
			iLocal_35 = 0;
			fLocal_37 = 0f;
		}
		if (!iLocal_35 == iLocal_36) {
			iLocal_36 = iLocal_35;
			graphics::_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			graphics::_push_scaleform_movie_function_parameter_int(17);
			graphics::_push_scaleform_movie_function_parameter_float(fLocal_37);
			graphics::_pop_scaleform_movie_function_void();
		}
		if (controls::is_control_just_pressed(2, 204)) {
			iLocal_38 = 1;
			fLocal_40 = 1f;
		}
		if (controls::is_control_pressed(2, 204)) {
			iLocal_38 = 1;
			fLocal_40 = 1f;
		}
		if (!controls::is_control_pressed(2, 204)) {
			iLocal_38 = 0;
			fLocal_40 = 0f;
		}
		if (!iLocal_38 == iLocal_39) {
			iLocal_39 = iLocal_38;
			graphics::_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			graphics::_push_scaleform_movie_function_parameter_int(15);
			graphics::_push_scaleform_movie_function_parameter_float(fLocal_40);
			graphics::_pop_scaleform_movie_function_void();
		}
		if (controls::is_control_just_pressed(2, 201)) {
			iLocal_41 = 1;
			fLocal_43 = 1f;
		}
		if (controls::is_control_pressed(2, 201)) {
			iLocal_41 = 1;
			fLocal_43 = 1f;
		}
		if (!controls::is_control_pressed(2, 201)) {
			iLocal_41 = 0;
			fLocal_43 = 0f;
		}
		if (!iLocal_41 == iLocal_42) {
			iLocal_42 = iLocal_41;
			graphics::_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			graphics::_push_scaleform_movie_function_parameter_int(16);
			graphics::_push_scaleform_movie_function_parameter_float(fLocal_43);
			graphics::_pop_scaleform_movie_function_void();
		}
		if (controls::is_control_just_pressed(2, 203)) {
			iLocal_44 = 1;
			fLocal_46 = 1f;
		}
		if (controls::is_control_pressed(2, 203)) {
			iLocal_44 = 1;
			fLocal_46 = 1f;
		}
		if (!controls::is_control_pressed(2, 203)) {
			iLocal_44 = 0;
			fLocal_46 = 0f;
		}
		if (!iLocal_44 == iLocal_45) {
			iLocal_45 = iLocal_44;
			graphics::_push_scaleform_movie_function(iParam0, "SET_INPUT_EVENT");
			graphics::_push_scaleform_movie_function_parameter_int(14);
			graphics::_push_scaleform_movie_function_parameter_float(fLocal_46);
			graphics::_pop_scaleform_movie_function_void();
		}
	}
}

// Position - 0x43D
void func_2() {
	if (cam::does_cam_exist(iLocal_19)) {
		cam::destroy_cam(iLocal_19, 0);
	}
	cam::render_script_cams(0, 0, 3000, 1, 0, 0);
	func_3(0);
	gameplay::set_game_paused(0);
	ui::clear_help(1);
	graphics::set_scaleform_movie_as_no_longer_needed(&iLocal_18);
	script::terminate_this_thread();
}

// Position - 0x47A
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

// Position - 0x4DD
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

// Position - 0x54D
int func_5() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x574
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

// Position - 0x5E8
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

// Position - 0x642
void func_8() {
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10) {
		Global_15798 = 0;
		Global_15794 = 1;
	}
}
