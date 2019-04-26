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
	iVar0 = func_13();
	if (player::has_force_cleanup_occurred(3)) {
		script::terminate_this_thread();
	}
	while (true) {
		if (graphics::has_scaleform_movie_loaded(iVar0)) {
			switch (iLocal_45) {
			case 0:
				func_11(&iVar0, "OFFR_BLIP_R5", 255, 0, 255, 255, 0);
				func_10(&iVar0);
				iLocal_46 = gameplay::get_game_timer();
				iLocal_45 = 1;
				break;

			case 1:
				if (gameplay::get_game_timer() - iLocal_46 > 3000) {
					func_9(&iVar0);
					iLocal_45 = 2;
				}
				break;
			}
			if (func_1(&iVar0, 0)) {
			}
		}
		system::wait(0);
	}
}

// Position - 0xEF
bool func_1(int iParam0, int iParam1) {
	if (!func_8(&iParam0->f_2)) {
		func_6(&iParam0->f_2);
	}
	ui::hide_hud_component_this_frame(14);
	graphics::_set_2d_layer(1);
	graphics::draw_scaleform_movie(*iParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
	if (iParam1) {
		if (controls::is_control_pressed(2, 201)) {
			return false;
		}
	}
	if (iParam0->f_1 == -1) {
		return true;
	}
	if (func_3(&iParam0->f_2) * 1000f > system::to_float(iParam0->f_1)) {
		func_2(&iParam0->f_2);
		return false;
	}
	return true;
}

// Position - 0x175
void func_2(int *iParam0) {
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

// Position - 0x18B
float func_3(var *uParam0) {
	if (func_8(uParam0)) {
		if (func_5(uParam0)) {
			return uParam0->f_2;
		}
		else {
			return func_4(gameplay::is_bit_set(*uParam0, 4)) - uParam0->f_1;
		}
	}
	return uParam0->f_1;
}

// Position - 0x1CA
float func_4(bool bParam0) {
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

// Position - 0x222
bool func_5(var *uParam0) { return gameplay::is_bit_set(*uParam0, 2); }

// Position - 0x232
void func_6(var *uParam0) { func_7(uParam0, 0f); }

// Position - 0x241
void func_7(int *iParam0, float fParam1) {
	uParam0->f_1 = func_4(gameplay::is_bit_set(*uParam0, 4)) - fParam1;
	gameplay::set_bit(uParam0, 1);
	gameplay::clear_bit(iParam0, 2);
	iParam0->f_2 = 0f;
}

// Position - 0x26F
bool func_8(var *uParam0) { return gameplay::is_bit_set(*uParam0, 1); }

// Position - 0x27F
void func_9(int iParam0) {
	iParam0->f_1 = 300;
	func_6(&iParam0->f_2);
	graphics::_push_scaleform_movie_function(*iParam0, "SPLASH_TEXT_TRANSITION_OUT");
	graphics::_push_scaleform_movie_function_parameter_int(300);
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x2AC
void func_10(int iParam0) {
	graphics::_push_scaleform_movie_function(*iParam0, "SPLASH_TEXT_TRANSITION_IN");
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x2C3
void func_11(int iParam0, char *sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	iParam0->f_1 = -1;
	graphics::_push_scaleform_movie_function(*iParam0, "SPLASH_TEXT_LABEL");
	func_12(sParam1);
	graphics::_push_scaleform_movie_function_parameter_int(iParam2);
	graphics::_push_scaleform_movie_function_parameter_int(iParam3);
	graphics::_push_scaleform_movie_function_parameter_int(iParam4);
	graphics::_push_scaleform_movie_function_parameter_int(iParam5);
	graphics::_pop_scaleform_movie_function_void();
	if (iParam6) {
		graphics::_push_scaleform_movie_function(*iParam0, "SPLASH_TEXT_TRANSITION_IN");
		graphics::_pop_scaleform_movie_function_void();
	}
}

// Position - 0x311
void func_12(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x323
var func_13() { return unk_0x67D02A194A2FC2BD("SPLASH_TEXT"); }
