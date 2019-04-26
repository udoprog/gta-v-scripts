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
var uLocal_20 = 0;
char *sLocal_21 = NULL;
var uLocal_22 = 0;
var uLocal_23 = 0;
float fLocal_24 = 0f;
var uLocal_25 = 0;
var uLocal_26 = 0;
var uLocal_27 = 0;
float fLocal_28 = 0f;
float fLocal_29 = 0f;
var uLocal_30 = 0;
var uLocal_31 = 0;
var uLocal_32 = 0;
float fLocal_33 = 0f;
float fLocal_34 = 0f;
float fLocal_35 = 0f;
var uLocal_36 = 0;
var uLocal_37 = 0;
int iLocal_38 = 0;
var uLocal_39 = 0;
bool bLocal_40 = 0;
bool bLocal_41 = 0;
struct<8> Local_42 = {
	0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_50 = 0;
var uLocal_51 = 0;
var uLocal_52 = 0;
var uLocal_53 = 0;
var uLocal_54 = 0;
struct<11> Local_55[50];
int iLocal_606 = 0;
int *iLocal_607 = NULL;
bool bLocal_608 = 0;
int *iLocal_609 = NULL;
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
	sLocal_21 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	bLocal_40 = true;
	bLocal_41 = true;
	iLocal_606 = 15;
	if (player::has_force_cleanup_occurred(210)) {
		func_54();
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("spaceshipparts")) > 1) {
		script::terminate_this_thread();
	}
	func_53(14);
	func_51();
	func_50(&Local_42, 0, joaat("prop_power_cell"), "SSHIP_COLLECT");
	func_48(&Local_42, joaat("num_hidden_packages_1"), 755, 50);
	while (true) {
		system::wait(0);
		func_47(player::player_ped_id());
		if (func_15(&Local_42, &Local_55) || func_14(107) == 1) {
			if (!bLocal_608) {
				bLocal_608 = func_10(367701416, 1, 2, 69, 5000, 10000, -1, 179, -1, 32, 1);
			}
			if (bLocal_608) {
				if (func_4() != 1) {
					func_1("SSHIP_SWITCH", 1, 0, 20000, 10000, 3, 0, 0, 0);
				}
				func_54();
			}
		}
	}
}

// Position - 0x12D
void func_1(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			int iParam8) {
	func_2(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x14E
void func_2(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			int iParam8, var uParam9) {
	int iVar0;

	if (gameplay::are_strings_equal(sParam0, "")) {
		return;
	}
	if (iParam3 < 0) {
		return;
	}
	if (iParam5 < 500 && iParam5 != -1) {
		return;
	}
	if (iParam4 < 0 && iParam4 != -1) {
		return;
	}
	if (iParam6 < 1 || iParam6 > 7) {
		return;
	}
	if (iParam7 == 235) {
		return;
	}
	if (iParam8 == 235) {
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145) {
		if (gameplay::are_strings_equal(&Global_101700.f_19369[iVar0 /*16*/], sParam0)) {
			return;
		}
		iVar0++;
	}
	if (Global_101700.f_19369.f_145 < 9) {
		StringCopy(&Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/], sParam0, 16);
		StringCopy(&Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_4, sParam1, 16);
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_8 = gameplay::get_game_timer() + iParam3;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_9 = iParam5;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_11 = iParam6;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_12 = uParam2;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_13 = iParam7;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_14 = iParam8;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1) {
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 =
				gameplay::get_game_timer() + iParam3 + iParam4;
		}
		else {
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 = -1;
		}
		Global_101700.f_19369.f_145++;
		func_3();
	}
}

// Position - 0x321
void func_3() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		Global_101700.f_19369.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145) {
		if (gameplay::is_bit_set(Global_101700.f_19369[iVar0 /*16*/].f_11, 0)) {
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[0]) {
				Global_101700.f_19369.f_146[0] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (gameplay::is_bit_set(Global_101700.f_19369[iVar0 /*16*/].f_11, 1)) {
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[1]) {
				Global_101700.f_19369.f_146[1] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (gameplay::is_bit_set(Global_101700.f_19369[iVar0 /*16*/].f_11, 2)) {
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[2]) {
				Global_101700.f_19369.f_146[2] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

// Position - 0x441
int func_4() {
	func_5();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x45A
void func_5() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_9(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_8(player::player_ped_id());
			if (func_7(iVar0) && (!func_6(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_7(Global_101700.f_2095.f_539.f_3549)) {
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else {
			if (Global_101700.f_2095.f_539.f_3549 != 145) {
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

// Position - 0x557
bool func_6(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x565
bool func_7(int iParam0) { return iParam0 < 3; }

// Position - 0x571
int func_8(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_9(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x5AE
int func_9(int iParam0) {
	if (func_7(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x5D8
int func_10(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			int iParam8, int iParam9, int iParam10) {
	struct<14> Var0;

	if (func_13(0)) {
		return 0;
	}
	if (iParam4 < 0) {
		return 0;
	}
	if (iParam5 < 0) {
		return 0;
	}
	if (iParam6 == 76) {
		return 0;
	}
	if (iParam7 == 235) {
		return 0;
	}
	if (iParam3 < 3) {
		if (gameplay::is_bit_set(iParam2, iParam3)) {
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7) {
		return 0;
	}
	if (Global_101700.f_6647.f_764 < 8) {
		Var0 = iParam0;
		Var0.f_3 = func_12(iParam1);
		Var0.f_4 = gameplay::get_game_timer() + iParam4;
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_13 = iParam10;
		gameplay::clear_bit(&Var0.f_1, 0);
		Global_101700.f_6647.f_651[Global_101700.f_6647.f_764 /*14*/] = {Var0};
		Global_101700.f_6647.f_764++;
		func_11(0);
		func_11(1);
		func_11(2);
		return 1;
	}
	return 0;
}

// Position - 0x6F3
void func_11(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (!func_7(iParam0)) {
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_136) {
		if (gameplay::is_bit_set(Global_101700.f_6647[iVar0 /*15*/].f_2, iParam0)) {
			if (Global_101700.f_6647[iVar0 /*15*/].f_3 > iVar1) {
				iVar1 = Global_101700.f_6647[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_101700.f_6647.f_764) {
		if (gameplay::is_bit_set(Global_101700.f_6647.f_651[iVar2 /*14*/].f_2, iParam0)) {
			if (Global_101700.f_6647.f_651[iVar2 /*14*/].f_3 == 5) {
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_101700.f_6647.f_919[iParam0] = iVar1;
}

// Position - 0x7B7
int func_12(int iParam0) {
	switch (iParam0) {
	case 0:
	case 4: return 5;

	case 7: return 4;

	case 2: return 3;

	case 1: return 2;

	case 3: return 1;

	case 5:
	case 6: return 0;
	}
	return 7;
}

// Position - 0x821
bool func_13(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x84C
int func_14(int iParam0) {
	if (iParam0 == 146 || iParam0 == -1) {
		return 0;
	}
	return Global_101700.f_8044.f_99.f_58[iParam0];
}

// Position - 0x879
int func_15(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (!func_6(14) && !cam::is_screen_faded_out()) {
		ped::is_ped_injured(player::player_ped_id());
		vVar2 = {entity::get_entity_coords(player::player_ped_id(), 1)};
		iVar0 = 0;
		while (iVar0 < 1) {
			iVar1 = func_46(&uParam0->f_1, uParam0->f_10);
			if (!(*iParam1)[uParam0->f_10 /*11*/].f_10) {
				if (!iVar1) {
					if (uParam0->f_10 == iLocal_606) {
						func_44(&(*iParam1)[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 1, 0,
								2);
						if (object::does_pickup_exist((*iParam1)[uParam0->f_10 /*11*/].f_1)) {
							interior::add_pickup_to_interior_room_by_name((*iParam1)[uParam0->f_10 /*11*/].f_1,
																		  "GtaMloRoomTun5");
						}
					}
					else if (uParam0->f_10 == 6 || uParam0->f_10 == 14 || uParam0->f_10 == 21 || uParam0->f_10 == 34 ||
							 uParam0->f_10 == 39) {
						func_44(&(*iParam1)[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1,
								2);
					}
					else {
						func_44(&(*iParam1)[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 0,
								2);
					}
				}
			}
			else if (!iVar1) {
				func_27(uParam0, iParam1, vVar2);
			}
			uParam0->f_10++;
			if (uParam0->f_10 >= *iParam1) {
				uParam0->f_10 = 0;
			}
			iVar0++;
		}
		if (!Global_69962) {
			func_16(&uParam0->f_11, &uParam0->f_12, &uParam0->f_9, 0, &iLocal_607, &iLocal_609, "SSHIP_TITLE",
					"SSHIP_COLLECT");
		}
		if (!bLocal_608) {
			if (uParam0->f_1.f_4 >= uParam0->f_1.f_3) {
				bLocal_608 = func_10(367701416, 1, 2, 69, 5000, 10000, -1, 179, -1, 32, 1);
			}
		}
		if (!uParam0->f_12 && !uParam0->f_11) {
			return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
		}
	}
	return 0;
}

// Position - 0xA42
void func_16(int *iParam0, int *iParam1, var *uParam2, int iParam3, int *iParam4, int *iParam5, char *sParam6,
			 char *sParam7) {
	int iVar0;

	func_26(0);
	if (*iParam0) {
		switch (*iParam4) {
		case 0:
			*iParam5 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
			if (graphics::has_scaleform_movie_loaded(*iParam5)) {
				iVar0 = audio::get_sound_id();
				if (iParam3 == 6) {
					audio::play_sound_frontend(iVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
				}
				else {
					audio::play_sound_frontend(iVar0, "COLLECTED", "HUD_AWARDS", 1);
				}
				*iParam4++;
			}
			break;

		case 1:
			graphics::_push_scaleform_movie_function(*iParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
			graphics::begin_text_command_scaleform_string(sParam6);
			graphics::end_text_command_scaleform_string();
			graphics::begin_text_command_scaleform_string(sParam7);
			ui::add_text_component_integer(func_18(iParam3));
			graphics::end_text_command_scaleform_string();
			graphics::_pop_scaleform_movie_function_void();
			*uParam2 = gameplay::get_game_timer();
			*iParam4++;
			break;

		case 2:
			if (gameplay::get_game_timer() - *uParam2 > 7000) {
				graphics::_push_scaleform_movie_function(*iParam5, "SHARD_ANIM_OUT");
				graphics::_push_scaleform_movie_function_parameter_int(1);
				graphics::_push_scaleform_movie_function_parameter_float(0.33f);
				graphics::_pop_scaleform_movie_function_void();
				*iParam4++;
			}
			else if (!func_17()) {
				if (graphics::has_scaleform_movie_loaded(*iParam5)) {
					func_26(1);
					graphics::draw_scaleform_movie_fullscreen(*iParam5, 100, 100, 100, 255, 0);
				}
			}
			break;

		case 3:
			if (gameplay::get_game_timer() - *uParam2 > 7500) {
				*iParam4++;
			}
			else if (!func_17()) {
				if (graphics::has_scaleform_movie_loaded(*iParam5)) {
					func_26(1);
					graphics::draw_scaleform_movie_fullscreen(*iParam5, 100, 100, 100, 255, 0);
				}
			}
			break;

		case 4:
			if (graphics::has_scaleform_movie_loaded(*iParam5)) {
				graphics::set_scaleform_movie_as_no_longer_needed(iParam5);
			}
			func_26(0);
			*iParam1 = 0;
			*iParam0 = 0;
			*iParam4 = 0;
			break;
		}
	}
}

// Position - 0xBC5
int func_17() {
	if (Global_69962) {
		return 1;
	}
	else if (Global_55816 && !Global_55822) {
		return 1;
	}
	return 0;
}

// Position - 0xBEF
int func_18(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2) {
		iVar1 = 0;
		while (iVar1 < func_25(iParam0)) {
			if (gameplay::is_bit_set(Global_101700.f_9008.f_108, func_24(func_25(iParam0), iVar1))) {
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6) {
		stats::stat_get_int(joaat("num_hidden_packages_5"), &iVar0, -1);
	}
	else if (iParam0 == 7) {
		stats::stat_get_int(joaat("num_hidden_packages_7"), &iVar0, -1);
	}
	else if (iParam0 == 8) {
		stats::stat_get_int(joaat("num_hidden_packages_6"), &iVar0, -1);
	}
	else {
		iVar1 = 0;
		while (iVar1 < func_25(iParam0)) {
			iVar2 = func_23(iParam0) + iVar1;
			if (func_19(iVar2, -1, -1)) {
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

// Position - 0xCB7
bool func_19(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (iParam1 == -1) {
		iParam1 = func_22();
	}
	iVar1 = func_21(iParam0, iParam1);
	iVar2 = func_20(iParam0);
	if (0 != iVar1) {
		iVar0 = stats::stat_get_bool_masked(iVar1, iVar2, iParam2);
	}
	return iVar0;
}

// Position - 0xCF4
int func_20(int iParam0) {
	int iVar0;

	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192) {
		iVar0 = iParam0 - 0 - stats::_0xF4D8E7AC2A27758C(iParam0 - 0) * 64;
	}
	else if (iParam0 >= 192 && iParam0 < 384) {
		iVar0 = iParam0 - 192 - stats::_0xF4D8E7AC2A27758C(iParam0 - 192) * 64;
	}
	else if (iParam0 >= 513 && iParam0 < 705) {
		iVar0 = iParam0 - 513 - stats::_0xF4D8E7AC2A27758C(iParam0 - 513) * 64;
	}
	else if (iParam0 >= 705 && iParam0 < 1281) {
		iVar0 = iParam0 - 705 - stats::_0xF4D8E7AC2A27758C(iParam0 - 705) * 64;
	}
	else if (iParam0 >= 2919 && iParam0 < 3111) {
		iVar0 = iParam0 - 2919 - stats::_0xF4D8E7AC2A27758C(iParam0 - 2919) * 64;
	}
	else if (iParam0 >= 3111 && iParam0 < 3879) {
		iVar0 = iParam0 - 3111 - stats::_0xF4D8E7AC2A27758C(iParam0 - 3111) * 64;
	}
	else if (iParam0 >= 4335 && iParam0 < 4399) {
		iVar0 = iParam0 - 4335 - stats::_0xF4D8E7AC2A27758C(iParam0 - 4335) * 64;
	}
	else if (iParam0 >= 4207 && iParam0 < 4335) {
		iVar0 = iParam0 - 4207 - stats::_0xF4D8E7AC2A27758C(iParam0 - 4207) * 64;
	}
	else if (iParam0 >= 6029 && iParam0 < 6413) {
		iVar0 = iParam0 - 6029 - stats::_0xF4D8E7AC2A27758C(iParam0 - 6029) * 64;
	}
	else if (iParam0 >= 7385 && iParam0 < 7641) {
		iVar0 = iParam0 - 7385 - stats::_0xF4D8E7AC2A27758C(iParam0 - 7385) * 64;
	}
	else if (iParam0 >= 7321 && iParam0 < 7385) {
		iVar0 = iParam0 - 7321 - stats::_0xF4D8E7AC2A27758C(iParam0 - 7321) * 64;
	}
	else if (iParam0 >= 9361 && iParam0 < 9553) {
		iVar0 = iParam0 - 9361 - stats::_0xF4D8E7AC2A27758C(iParam0 - 9361) * 64;
	}
	return iVar0;
}

// Position - 0xF04
int func_21(int iParam0, int iParam1) {
	int iVar0;

	if (iParam1 == -1) {
		iParam1 = func_22();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192) {
		iVar0 = stats::_get_pstat_bool_hash(iParam0 - 0, 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384) {
		iVar0 = stats::_get_pstat_bool_hash(iParam0 - 192, 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705) {
		iVar0 = stats::_get_pstat_bool_hash(iParam0 - 513, 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281) {
		iVar0 = stats::_get_pstat_bool_hash(iParam0 - 705, 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111) {
		iVar0 = stats::_get_tupstat_bool_hash(iParam0 - 2919, 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879) {
		iVar0 = stats::_get_tupstat_bool_hash(iParam0 - 3111, 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399) {
		iVar0 = stats::_get_ngstat_bool_hash(iParam0 - 4335, 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335) {
		iVar0 = stats::_get_ngstat_bool_hash(iParam0 - 4207, 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413) {
		iVar0 = stats::_get_ngstat_bool_hash(iParam0 - 6029, 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385) {
		iVar0 = stats::_get_ngstat_bool_hash(iParam0 - 7321, 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641) {
		iVar0 = stats::_get_ngstat_bool_hash(iParam0 - 7385, 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553) {
		iVar0 = stats::_get_ngstat_bool_hash(iParam0 - 9361, 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	return iVar0;
}

// Position - 0x10F4
var func_22() { return Global_1312735; }

// Position - 0x1100
int func_23(int iParam0) {
	if (iParam0 == 3) {
		return 815;
	}
	if (iParam0 == 5) {
		return 845;
	}
	if (iParam0 == 1) {
		return 705;
	}
	if (iParam0 == 0) {
		return 755;
	}
	return 805;
}

// Position - 0x1147
int func_24(int iParam0, int iParam1) {
	if (iParam1 < 32) {
		return iParam1;
	}
	return iParam0 - iParam1;
}

// Position - 0x1163
int func_25(int iParam0) {
	if (iParam0 == 3) {
		return 30;
	}
	if (iParam0 == 1) {
		return 50;
	}
	if (iParam0 == 0) {
		return 50;
	}
	if (iParam0 == 4) {
		return 10;
	}
	if (iParam0 == 5) {
		return 30;
	}
	return 15;
}

// Position - 0x11B3
void func_26(int iParam0) {
	if (Global_69969 != iParam0) {
		Global_69969 = iParam0;
	}
}

// Position - 0x11CD
int func_27(var *uParam0, var *uParam1, vector3 vParam2) {
	int iVar0;

	iVar0 = uParam0->f_10;
	if ((*uParam1)[iVar0 /*11*/].f_10) {
		if ((*uParam1)[iVar0 /*11*/].f_1 != 0) {
			if (object::has_pickup_been_collected((*uParam1)[iVar0 /*11*/].f_1) ||
				func_42((*uParam1)[iVar0 /*11*/].f_1)) {
				func_29(uParam0, uParam1, iVar0);
				return 1;
			}
		}
	}
	if (object::does_pickup_exist((*uParam1)[iVar0 /*11*/].f_1)) {
		if (system::vdist2(vParam2, object::get_pickup_coords((*uParam1)[iVar0 /*11*/].f_1)) > 60f * 60f ||
			func_6(13) || func_6(14)) {
			func_28(&(*uParam1)[iVar0 /*11*/].f_1);
			(*uParam1)[iVar0 /*11*/].f_1 = 0;
			(*uParam1)[iVar0 /*11*/].f_10 = 0;
		}
	}
	return 0;
}

// Position - 0x128A
void func_28(var *uParam0) {
	if (object::does_pickup_exist(*uParam0)) {
		object::remove_pickup(*uParam0);
	}
}

// Position - 0x12A3
void func_29(var *uParam0, var *uParam1, int iParam2) {
	int iVar0;

	iVar0 = func_23(*uParam0) + iParam2;
	func_28(&(*uParam1)[iParam2 /*11*/].f_1);
	func_41(&(*uParam1)[iParam2 /*11*/].f_2);
	(*uParam1)[iParam2 /*11*/].f_1 = 0;
	(*uParam1)[iParam2 /*11*/].f_10 = 0;
	func_40(&uParam0->f_1, iParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0) {
		func_39(*uParam0, iParam2, 1);
	}
	controls::set_pad_shake(0, 200, 250);
	stats::stat_increment(uParam0->f_6, 1f);
	if (bLocal_41) {
		func_38(&uParam0->f_1, iParam2);
	}
	else {
		func_35(&uParam0->f_1);
	}
	func_32();
	stats::_0x79AB33F0FBFAC40C(iVar0);
	func_31(1, 0);
	func_30();
	uParam0->f_11 = 1;
}

// Position - 0x134E
int func_30() {
	if (func_13(0)) {
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

// Position - 0x1399
void func_31(int iParam0, int iParam1) {
	Global_91530.f_7 = iParam0;
	Global_91530.f_8 = iParam1;
}

// Position - 0x13B1
void func_32() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = 0;
	stats::stat_get_int(func_34(0), &iVar0, -1);
	iVar1 += iVar0;
	if (iVar0 > 0) {
		func_33(18, iVar0);
	}
	stats::stat_get_int(func_34(1), &iVar0, -1);
	iVar1 += iVar0;
	if (iVar0 > 0) {
		func_33(19, iVar0);
	}
	stats::stat_get_int(func_34(3), &iVar0, -1);
	iVar1 += iVar0;
	if (iVar0 > 0) {
		func_33(20, iVar0);
	}
	iVar2 = func_25(0) + func_25(1) + func_25(3);
	if (iVar2 > 0) {
		iVar3 = iVar1 * 100 / iVar2;
	}
	stats::stat_set_int(joaat("percent_hidden_packages"), iVar3, 1);
}

// Position - 0x1454
int func_33(int iParam0, int iParam1) {
	int iVar0;

	if (iParam0 < 0) {
		return 0;
	}
	if (iParam0 > 70) {
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100) {
		return 0;
	}
	iVar0 = player::_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0) {
		return player::_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

// Position - 0x14A5
int func_34(int iParam0) {
	if (iParam0 == 3) {
		return joaat("num_hidden_packages_3");
	}
	if (iParam0 == 1) {
		return joaat("num_hidden_packages_0");
	}
	if (iParam0 == 0) {
		return joaat("num_hidden_packages_1");
	}
	if (iParam0 == 5) {
		return joaat("num_hidden_packages_4");
	}
	return joaat("num_hidden_packages_2");
}

// Position - 0x14F6
void func_35(var *uParam0) {
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (uParam0->f_3 <= 0) {
	}
	if (uParam0->f_2 <= 0) {
	}
	if (bLocal_40) {
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3) {
		if (func_46(uParam0, iVar0)) {
			iVar1++;
			func_37(uParam0->f_2 + iVar0, 1, -1, 1);
			if (bLocal_40) {
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40) {
	}
	if (iVar1 == uParam0->f_3 && uParam0->f_2 == 705) {
		func_36(168, 0);
	}
}

// Position - 0x1579
void func_36(int iParam0, int iParam1) {
	if (iParam0 == 235 || iParam0 == 0) {
		return;
	}
	Global_101700.f_7572[iParam0] = 1;
	Global_101700.f_7572.f_236[iParam0] = gameplay::get_game_timer() + iParam1;
}

// Position - 0x15B6
int func_37(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;

	if (iParam2 == -1) {
		iParam2 = func_22();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192) {
		uVar2 = stats::_get_pstat_bool_hash(iParam0 - 0, 0, 1, iParam2);
		iVar1 = iParam0 - 0 - stats::_0xF4D8E7AC2A27758C(iParam0 - 0) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384) {
		uVar3 = stats::_get_pstat_bool_hash(iParam0 - 192, 1, 1, iParam2);
		iVar1 = iParam0 - 192 - stats::_0xF4D8E7AC2A27758C(iParam0 - 192) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705) {
		uVar4 = stats::_get_pstat_bool_hash(iParam0 - 513, 0, 0, 0);
		iVar1 = iParam0 - 513 - stats::_0xF4D8E7AC2A27758C(iParam0 - 513) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281) {
		uVar5 = stats::_get_pstat_bool_hash(iParam0 - 705, 1, 0, 0);
		iVar1 = iParam0 - 705 - stats::_0xF4D8E7AC2A27758C(iParam0 - 705) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879) {
		uVar6 = stats::_get_tupstat_bool_hash(iParam0 - 3111, 0, 1, iParam2);
		iVar1 = iParam0 - 3111 - stats::_0xF4D8E7AC2A27758C(iParam0 - 3111) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111) {
		uVar7 = stats::_get_tupstat_bool_hash(iParam0 - 2919, 0, 0, 0);
		iVar1 = iParam0 - 2919 - stats::_0xF4D8E7AC2A27758C(iParam0 - 2919) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335) {
		uVar8 = stats::_get_ngstat_bool_hash(iParam0 - 4207, 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4207 - stats::_0xF4D8E7AC2A27758C(iParam0 - 4207) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399) {
		uVar9 = stats::_get_ngstat_bool_hash(iParam0 - 4335, 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4335 - stats::_0xF4D8E7AC2A27758C(iParam0 - 4335) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413) {
		uVar10 = stats::_get_ngstat_bool_hash(iParam0 - 6029, 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = iParam0 - 6029 - stats::_0xF4D8E7AC2A27758C(iParam0 - 6029) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641) {
		uVar11 = stats::_get_ngstat_bool_hash(iParam0 - 7385, 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7385 - stats::_0xF4D8E7AC2A27758C(iParam0 - 7385) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385) {
		uVar12 = stats::_get_ngstat_bool_hash(iParam0 - 7321, 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7321 - stats::_0xF4D8E7AC2A27758C(iParam0 - 7321) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553) {
		uVar13 = stats::_get_ngstat_bool_hash(iParam0 - 9361, 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = iParam0 - 9361 - stats::_0xF4D8E7AC2A27758C(iParam0 - 9361) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar13, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

// Position - 0x1944
void func_38(var *uParam0, int iParam1) {
	if (uParam0->f_3 <= 0) {
	}
	if (uParam0->f_2 <= 0) {
	}
	if (bLocal_40) {
	}
	if (iParam1 >= uParam0->f_3) {
	}
	if (func_46(uParam0, iParam1)) {
		uParam0->f_4++;
		func_37(uParam0->f_2 + iParam1, 1, -1, 1);
		if (bLocal_40) {
		}
	}
	if (bLocal_40) {
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705) {
		func_36(168, 0);
	}
}

// Position - 0x19B8
void func_39(int iParam0, int iParam1, int iParam2) {
	if (iParam1 < 0 || iParam1 >= 64) {
		return;
	}
	if (iParam0 == 1) {
		if (iParam1 <= 31) {
			if (iParam2) {
				gameplay::set_bit(&Global_101700.f_9008.f_122, iParam1);
			}
			else {
				gameplay::clear_bit(&Global_101700.f_9008.f_122, iParam1);
			}
			return;
		}
		if (iParam2) {
			gameplay::set_bit(&Global_101700.f_9008.f_122.f_1, iParam1 - 32);
		}
		else {
			gameplay::clear_bit(&Global_101700.f_9008.f_122.f_1, iParam1 - 32);
		}
	}
	else if (iParam0 == 0) {
		if (iParam1 <= 31) {
			if (iParam2) {
				gameplay::set_bit(&Global_101700.f_9008.f_125, iParam1);
			}
			else {
				gameplay::clear_bit(&Global_101700.f_9008.f_125, iParam1);
			}
			return;
		}
		if (iParam2) {
			gameplay::set_bit(&Global_101700.f_9008.f_125.f_1, iParam1 - 32);
		}
		else {
			gameplay::clear_bit(&Global_101700.f_9008.f_125.f_1, iParam1 - 32);
		}
	}
}

// Position - 0x1AA4
void func_40(int *iParam0, int iParam1, int iParam2) {
	if (iParam1 < 0 || iParam1 >= 64) {
		return;
	}
	if (iParam1 <= 31) {
		if (iParam2) {
			gameplay::set_bit(uParam0, iParam1);
		}
		else {
			gameplay::clear_bit(iParam0, iParam1);
		}
		return;
	}
	if (iParam2) {
		gameplay::set_bit(&iParam0->f_1, iParam1 - 32);
	}
	else {
		gameplay::clear_bit(&iParam0->f_1, iParam1 - 32);
	}
}

// Position - 0x1B05
void func_41(int *iParam0) {
	if (ui::does_blip_exist(*iParam0)) {
		ui::set_blip_route(*iParam0, 0);
		ui::remove_blip(iParam0);
	}
}

// Position - 0x1B25
int func_42(var *uParam0) {
	int iVar0;
	int iVar1;

	if (!object::does_pickup_exist(uParam0)) {
		return 0;
	}
	if (func_43(player::player_ped_id())) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
			iVar1 = entity::get_entity_model(iVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2")) {
				if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1),
								   object::get_pickup_coords(uParam0)) < 5f * 5f ||
					entity::is_entity_touching_entity(player::player_ped_id(), object::get_pickup_object(uParam0))) {
					return 1;
				}
			}
		}
	}
	return 0;
}

// Position - 0x1BB1
bool func_43(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x1BD2
void func_44(var *uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;

	if (!uParam0->f_10) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (!func_6(13) && !func_6(14)) {
				if (!object::does_pickup_exist(uParam0->f_1)) {
					if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1), uParam0->f_3) <=
						50f * 50f) {
						streaming::request_model(iParam1);
						while (!streaming::has_model_loaded(iParam1)) {
							streaming::request_model(iParam1);
							system::wait(0);
						}
						if (iParam3) {
							func_45(uParam0->f_3);
						}
						gameplay::clear_area(uParam0->f_3, 2.5f, 0, 0, 0, 0);
						if (iParam4) {
							gameplay::set_bit(&iVar0, 1);
							uParam0->f_1 = object::create_pickup_rotate(joaat("pickup_custom_script"), uParam0->f_3,
																		uParam0->f_6, iVar0, -1, iParam5, 1, iParam1);
						}
						else {
							gameplay::set_bit(&iVar0, 3);
							gameplay::set_bit(&iVar0, 4);
							gameplay::set_bit(&iVar0, 8);
							gameplay::set_bit(&iVar0, 1);
							uParam0->f_1 = object::create_pickup(iParam2, uParam0->f_3, iVar0, -1, 1, iParam1);
						}
						streaming::set_model_as_no_longer_needed(iParam1);
					}
				}
			}
			if (object::does_pickup_exist(uParam0->f_1)) {
				uParam0->f_10 = 1;
			}
		}
	}
}

// Position - 0x1CEB
void func_45(vector3 vParam0) {
	int iVar0;

	iVar0 = interior::get_interior_at_coords(vParam0);
	if (interior::is_valid_interior(iVar0)) {
		interior::_load_interior(iVar0);
		while (!interior::is_interior_ready(iVar0)) {
			system::wait(0);
		}
		system::wait(0);
		interior::unpin_interior(iVar0);
	}
}

// Position - 0x1D29
bool func_46(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 64) {
		return false;
	}
	if (iParam1 <= 31) {
		return gameplay::is_bit_set(*uParam0, iParam1);
	}
	return gameplay::is_bit_set(uParam0->f_1, iParam1 - 32);
}

// Position - 0x1D67
bool func_47(int iParam0) {
	if (!entity::does_entity_exist(iParam0)) {
		return false;
	}
	return !entity::is_entity_dead(iParam0, 0);
}

// Position - 0x1D85
void func_48(var *uParam0, int iParam1, int iParam2, int iParam3) {
	uParam0->f_6 = iParam1;
	func_49(&uParam0->f_1, iParam2, iParam3);
}

// Position - 0x1D9F
void func_49(var *uParam0, var uParam1, var uParam2) {
	int iVar0;
	int iVar1;

	iVar1 = 0;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
	if (bLocal_40) {
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3) {
		if (func_19(uParam0->f_2 + iVar0, -1, -1)) {
			iVar1++;
			func_40(uParam0, iVar0, 1);
			if (bLocal_40) {
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_40) {
	}
}

// Position - 0x1E08
void func_50(var *uParam0, int iParam1, int iParam2, char *sParam3) {
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_10 = 0;
}

// Position - 0x1E26
void func_51() {
	int iVar0;

	iLocal_607 = 0;
	Global_101700.f_9008.f_125.f_2 = 1;
	iVar0 = 0;
	while (iVar0 < 50) {
		Local_55[iVar0 /*11*/].f_3 = {func_52(iVar0, 0)};
		Local_55[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	Local_55[0 /*11*/].f_9 = 179.4746f;
	Local_55[1 /*11*/].f_9 = 198f;
	Local_55[2 /*11*/].f_9 = 104f;
	Local_55[3 /*11*/].f_9 = 321.5f;
	Local_55[4 /*11*/].f_9 = 256.25f;
	Local_55[5 /*11*/].f_9 = 286.5f;
	Local_55[6 /*11*/].f_9 = 0f;
	Local_55[6 /*11*/].f_6 = {0f, 0f, 1f};
	Local_55[7 /*11*/].f_9 = -165.6051f;
	Local_55[8 /*11*/].f_9 = 91.5f;
	Local_55[9 /*11*/].f_9 = 116f;
	Local_55[10 /*11*/].f_9 = 15f;
	Local_55[11 /*11*/].f_9 = 305.5f;
	Local_55[12 /*11*/].f_9 = 0f;
	Local_55[13 /*11*/].f_9 = 95f;
	Local_55[14 /*11*/].f_9 = 40f;
	Local_55[15 /*11*/].f_9 = 40f;
	Local_55[16 /*11*/].f_9 = 40f;
	Local_55[17 /*11*/].f_9 = 40f;
	Local_55[18 /*11*/].f_9 = 40f;
	Local_55[19 /*11*/].f_9 = 40f;
	Local_55[20 /*11*/].f_9 = 40f;
	Local_55[21 /*11*/].f_6 = {90f, 0f, 57f};
	Local_55[22 /*11*/].f_9 = 40f;
	Local_55[23 /*11*/].f_9 = 40f;
	Local_55[24 /*11*/].f_9 = 40f;
	Local_55[25 /*11*/].f_9 = 40f;
	Local_55[26 /*11*/].f_9 = 40f;
	Local_55[27 /*11*/].f_9 = 40f;
	Local_55[28 /*11*/].f_9 = 40f;
	Local_55[29 /*11*/].f_9 = 40f;
	Local_55[29 /*11*/].f_6 = {-24.35f, 15.74f, 14.31f};
	Local_55[30 /*11*/].f_9 = 40f;
	Local_55[31 /*11*/].f_9 = 40f;
	Local_55[32 /*11*/].f_9 = 40f;
	Local_55[33 /*11*/].f_9 = 40f;
	Local_55[34 /*11*/].f_6 = {0f, 0f, -15f};
	Local_55[35 /*11*/].f_9 = 40f;
	Local_55[36 /*11*/].f_9 = 40f;
	Local_55[37 /*11*/].f_9 = 40f;
	Local_55[38 /*11*/].f_9 = 40f;
	Local_55[38 /*11*/].f_6 = {20.18f, -0.87f, 20.46f};
	Local_55[39 /*11*/].f_6 = {0f, 0f, -4.39f};
	Local_55[40 /*11*/].f_9 = 40f;
	Local_55[41 /*11*/].f_9 = 80f;
	Local_55[42 /*11*/].f_9 = 198f;
	Local_55[43 /*11*/].f_9 = 198f;
	Local_55[44 /*11*/].f_9 = 198f;
	Local_55[45 /*11*/].f_9 = 198f;
	Local_55[46 /*11*/].f_9 = 198f;
	Local_55[47 /*11*/].f_9 = 198f;
	Local_55[48 /*11*/].f_9 = 198f;
	Local_55[49 /*11*/].f_9 = 198f;
}

// Position - 0x2133
Vector3 func_52(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: return -1219f, -3495.9f, 12.9448f;

	case 1:
		if (iParam1 == 1) {
			return 606.8925f, -3250.188f, 5.06951f;
		}
		else {
			return 634.5865f, -3232.79f, -16.5774f;
		}
		break;

	case 2: return 1590.6f, -2810.174f, 3.4494f;

	case 3:
		if (iParam1 == 1) {
			return 327.99f, -2757.61f, 4.99f;
		}
		else {
			return 338.4039f, -2762.106f, 42.6543f;
		}
		break;

	case 4:
		if (iParam1 == 1) {
			return 1134.422f, -2607.024f, 14.77071f;
		}
		else {
			return 1133.688f, -2605.073f, 14.9729f;
		}
		break;

	case 5:
		if (iParam1 == 1) {
			return 368.9316f, -2118.533f, 15.40341f;
		}
		else {
			return 369.945f, -2116.756f, 16.1688f;
		}
		break;

	case 6:
		if (iParam1 == 1) {
			return 1741.82f, -1623.85f, 111.41f;
		}
		else {
			return 1742.024f, -1618.777f, 111.8313f;
		}
		break;

	case 7: return 287.7294f, -1444.4f, 45.5095f;

	case 8: return 17.5926f, -1213.207f, 28.3678f;

	case 9:
		if (iParam1 == 1) {
			return -910.0172f, -1147.44f, 1.06785f;
		}
		else {
			return -900.3597f, -1165.551f, 31.8047f;
		}
		break;

	case 10:
		if (iParam1 == 1) {
			return 1237.728f, -1099.15f, 37.52579f;
		}
		else {
			return 1231.973f, -1102.308f, 34.4289f;
		}
		break;

	case 11:
		if (iParam1 == 1) {
			return 87.69075f, 810.3736f, 210.1258f;
		}
		else {
			return 81.2213f, 814.0283f, 213.2917f;
		}
		break;

	case 12:
		if (iParam1 == 1) {
			return -1900.951f, 1389.582f, 218.1509f;
		}
		else {
			return -1907.515f, 1388.69f, 217.9728f;
		}
		break;

	case 13:
		if (iParam1 == 1) {
			return 467.369f, -730.7552f, 26.36373f;
		}
		else {
			return 469.8529f, -730.8f, 26.3985f;
		}
		break;

	case 14: return 202.1081f, -569.7198f, 128.18f;

	case 15:
		if (iParam1 == 1) {
			return 163.0531f, -566.3394f, 21.029f;
		}
		else {
			return 159.39f, -563.82f, 21f;
		}
		break;

	case 16:
		if (iParam1 == 1) {
			return -1183.152f, -518.5386f, 38.53018f;
		}
		else {
			return -1182.538f, -525.5859f, 39.9114f;
		}
		break;

	case 17: return -228.0476f, -236.4184f, 49.1361f;

	case 18: return -407.7026f, -151.7918f, 63.5505f;

	case 19:
		if (iParam1 == 1) {
			return -1169.397f, -56.76701f, 44.45705f;
		}
		else {
			return -1175.488f, -65.4649f, 44.6563f;
		}
		break;

	case 20:
		if (iParam1 == 1) {
			return 1679.056f, 39.44059f, 160.7736f;
		}
		else {
			return 1684.664f, 40.7142f, 153.4074f;
		}
		break;

	case 21:
		if (iParam1 == 1) {
			return 1964.25f, 553.68f, 160.72f;
		}
		else {
			return 1965.58f, 555.99f, 160.79f;
		}
		break;

	case 22:
		if (iParam1 == 1) {
			return 24.21706f, 637.1212f, 206.3897f;
		}
		else {
			return 22.4492f, 638.8155f, 189.6085f;
		}
		break;

	case 23: return 2901.204f, 796.1192f, 3.3556f;

	case 24:
		if (iParam1 == 1) {
			return -1531.895f, 870.3203f, 180.6775f;
		}
		else {
			return -1529.722f, 871.4257f, 180.6421f;
		}
		break;

	case 25: return -404.3191f, 1100.889f, 331.535f;

	case 26: return -2809.354f, 1449.643f, 99.928f;

	case 27:
		if (iParam1 == 1) {
			return 3144.045f, 2184.413f, -5.2961f;
		}
		else {
			return 3144.045f, 2184.413f, -5.2961f;
		}
		break;

	case 28: return 815.7574f, 1850.879f, 120.1796f;

	case 29: return -1944.24f, 1941.07f, 162.8f;

	case 30:
		if (iParam1 == 1) {
			return -1452.23f, 2127.41f, 42.84f;
		}
		else {
			return -1436.87f, 2130.22f, 26.78f;
		}
		break;

	case 31: return 1367.413f, 2180.632f, 96.6914f;

	case 32:
		if (iParam1 == 1) {
			return 170.1652f, 2217.637f, 89.30811f;
		}
		else {
			return 172.1426f, 2220.131f, 89.7842f;
		}
		break;

	case 33: return 889.3209f, 2870.052f, 55.2834f;

	case 34:
		if (iParam1 == 1) {
			return 1980.2f, 2914.79f, 45.48f;
		}
		else {
			return 1963.55f, 2922.81f, 57.76f;
		}
		break;

	case 35: return -390.384f, 2963.26f, 18.2713f;

	case 36: return 71.6642f, 3279.368f, 30.3918f;

	case 37: return 1924.186f, 3471.256f, 50.3238f;

	case 38: return -583.1569f, 3580.375f, 266.2471f;

	case 39:
		if (iParam1 == 1) {
			return 2514.302f, 3789.519f, 52.077f;
		}
		else {
			return 2516.98f, 3789.35f, 53.79f;
		}
		break;

	case 40:
		if (iParam1 == 1) {
			return 1517.613f, 3803.926f, 30.95605f;
		}
		else {
			return 1486.047f, 3857.217f, 22.2905f;
		}
		break;

	case 41:
		if (iParam1 == 1) {
			return -530.2739f, 4474.358f, 59.45993f;
		}
		else {
			return -528.8246f, 4440.644f, 31.7384f;
		}
		break;

	case 42:
		if (iParam1 == 1) {
			return 3815.055f, 4447.343f, 2.06631f;
		}
		else {
			return 3820.813f, 4441.683f, 1.8007f;
		}
		break;

	case 43:
		if (iParam1 == 1) {
			return -1946.95f, 4584.36f, 56.06f;
		}
		else {
			return -1943.055f, 4585.194f, 46.6362f;
		}
		break;

	case 44: return 2437.545f, 4779.959f, 33.5101f;

	case 45: return -1441.495f, 5414.888f, 23.3f;

	case 46: return 2196.251f, 5599.034f, 52.7129f;

	case 47:
		if (iParam1 == 1) {
			return -503.95f, 5673.55f, 51.24f;
		}
		else {
			return -503.2193f, 5665.61f, 48.8487f;
		}
		break;

	case 48:
		if (iParam1 == 1) {
			return -378.4192f, 6080.782f, 30.44296f;
		}
		else {
			return -381.291f, 6086.949f, 38.6147f;
		}
		break;

	case 49: return 440.9546f, 6459.642f, 27.7432f;
	}
	return 0f, 0f, 0f;
}

// Position - 0x297F
int func_53(int iParam0) {
	int iVar0;
	int iVar1;

	if (iParam0 <= 31) {
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else {
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}
	if (gameplay::is_bit_set(Global_101700.f_8044.f_99.f_219[iVar0], iVar1)) {
		return 0;
	}
	gameplay::set_bit(&Global_101700.f_8044.f_99.f_219[iVar0], iVar1);
	return 1;
}

// Position - 0x29D9
void func_54() {
	int iVar0;

	Global_101700.f_9008.f_125.f_2 = 0;
	iVar0 = 0;
	while (iVar0 < Local_55) {
		func_41(&Local_55[iVar0 /*11*/].f_2);
		func_28(&Local_55[iVar0 /*11*/].f_1);
		iVar0++;
	}
	if (func_59(&Local_42.f_1) || func_14(107) == 1) {
		func_58(107, 1);
		func_56();
		func_55(14);
	}
	streaming::set_model_as_no_longer_needed(Local_42.f_7);
	script::terminate_this_thread();
}

// Position - 0x2A4F
int func_55(int iParam0) {
	int iVar0;
	int iVar1;

	if (iParam0 <= 31) {
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else {
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}
	if (gameplay::is_bit_set(Global_101700.f_8044.f_99.f_219[iVar0], iVar1)) {
		gameplay::clear_bit(&Global_101700.f_8044.f_99.f_219[iVar0], iVar1);
		return 1;
	}
	return 0;
}

// Position - 0x2AA9
void func_56() {
	int iVar0;

	iVar0 = func_57(63);
	Global_2413052[iVar0 /*83*/] = 63;
	StringCopy(&Global_2413052[iVar0 /*83*/].f_18[0 /*16*/], "", 64);
}

// Position - 0x2AD5
int func_57(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19) {
		if (Global_2413052[iVar1 /*83*/] == iParam0) {
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2413052[iVar1 /*83*/] == 0) {
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

// Position - 0x2B22
void func_58(int iParam0, int iParam1) {
	if (iParam0 == 146 || iParam0 == -1) {
		return;
	}
	if (Global_101700.f_8044.f_99.f_58[iParam0] == iParam1) {
		return;
	}
	Global_101700.f_8044.f_99.f_58[iParam0] = iParam1;
}

// Position - 0x2B67
bool func_59(var *uParam0) {
	if (uParam0->f_3 <= 0) {
	}
	return uParam0->f_4 >= uParam0->f_3;
}
