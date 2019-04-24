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
int iLocal_18[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_39 = 0;
int iLocal_40 = 0;
var uLocal_41 = 0;
var uLocal_42 = 0;
int iLocal_43 = 0;
int iLocal_44 = 0;
int iLocal_45 = 0;
int iLocal_46 = 0;
int iLocal_47 = 0;
int iLocal_48 = 0;
int iLocal_49 = 0;
int iLocal_50 = 0;
int iLocal_51 = 0;
int iLocal_52 = 0;
int iLocal_53 = 0;
int iLocal_54 = 0;
int iLocal_55 = 0;
bool bLocal_56 = 0;
int iLocal_57 = 0;
float fLocal_58 = 0f;
float fLocal_59 = 0f;
float fLocal_60 = 0f;
float fLocal_61 = 0f;
int iLocal_62 = 0;
float fLocal_63 = 0f;
float fLocal_64 = 0f;
int iLocal_65 = 0;
int iLocal_66 = 0;
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
	fLocal_58 = 0.82f;
	fLocal_59 = 0.42f;
	fLocal_60 = 0f;
	fLocal_61 = 0f;
	gameplay::network_set_script_is_safe_for_network_game();
	func_45(Global_14424, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_44();
	if (Global_14388 == 0) {
		fLocal_63 = 0.75f;
		fLocal_64 = 0.8f;
	}
	else {
		fLocal_63 = 0.65f;
		fLocal_64 = 0.77f;
	}
	Global_3118[Global_14443 /*2811*/][2 /*281*/].f_259 = Global_101700.f_13010[Global_14443 /*20*/].f_6;
	Global_3118[Global_14443 /*2811*/][4 /*281*/].f_259 = Global_101700.f_13010[Global_14443 /*20*/].f_9;
	iVar0 = 0;
	while (iVar0 < 9) {
		if (Global_69702) {
			Global_3118[Global_14443 /*2811*/][1 /*281*/].f_259 = func_43(1193, -1, 0);
			Global_3118[Global_14443 /*2811*/][2 /*281*/].f_259 = func_43(2022, -1, 0);
			Global_3118[Global_14443 /*2811*/][4 /*281*/].f_259 = func_43(2021, -1, 0);
		}
		else if (gameplay::are_strings_equal(&Global_101700.f_13010[Global_14443 /*20*/].f_11,
											 &Global_3118[Global_14443 /*2811*/][1 /*281*/].f_144[iVar0 /*6*/])) {
			Global_3118[Global_14443 /*2811*/][1 /*281*/].f_259 = iVar0;
		}
		iVar0++;
	}
	if (Global_69702) {
		Global_101700.f_13010[3 /*20*/].f_10 = func_43(1192, -1, 0);
	}
	Global_3118[Global_14443 /*2811*/][3 /*281*/].f_259 = Global_101700.f_13010[Global_14443 /*20*/].f_10;
	func_42();
	if (Global_69702) {
		Global_3118[3 /*2811*/][0 /*281*/] = 190;
		Global_3118[3 /*2811*/][0 /*281*/].f_1 = 190;
		StringCopy(&Global_3118[3 /*2811*/][0 /*281*/].f_2, "CELL_701", 16);
		Global_3118[3 /*2811*/][0 /*281*/].f_6 = 19;
		Global_3118[3 /*2811*/][0 /*281*/].f_280 = 1;
		StringCopy(&Global_3118[3 /*2811*/][0 /*281*/].f_7[0 /*4*/], "CELL_704", 16);
		Global_3118[3 /*2811*/][0 /*281*/].f_124[0] = 1;
		Global_3118[3 /*2811*/][0 /*281*/].f_84[0] = 170;
		Global_3118[3 /*2811*/][0 /*281*/].f_104[0] = 19;
		StringCopy(&Global_3118[3 /*2811*/][0 /*281*/].f_7[1 /*4*/], "CELL_703", 16);
		Global_3118[3 /*2811*/][0 /*281*/].f_124[1] = 1;
		Global_3118[3 /*2811*/][0 /*281*/].f_84[1] = 175;
		Global_3118[3 /*2811*/][0 /*281*/].f_104[1] = 19;
		StringCopy(&Global_3118[3 /*2811*/][0 /*281*/].f_7[2 /*4*/], "CELL_801", 16);
		Global_3118[3 /*2811*/][0 /*281*/].f_124[2] = 0;
		Global_3118[3 /*2811*/][0 /*281*/].f_84[2] = 190;
		Global_3118[3 /*2811*/][0 /*281*/].f_104[2] = 26;
		if (func_43(2084, -1, 0) == 0) {
			Global_3118[3 /*2811*/][0 /*281*/].f_259 = 0;
		}
		else {
			Global_3118[3 /*2811*/][0 /*281*/].f_259 = 1;
		}
	}
	func_33();
	while (true) {
		system::wait(0);
		if (iLocal_50) {
			if (system::timerb() > 3500) {
				if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
					audio::stop_ped_ringtone(player::player_ped_id());
				}
				iLocal_50 = 0;
			}
		}
		if (Global_14443.f_1 != 9) {
			switch (Global_14443.f_1) {
			case 7:
				func_28();
				func_26();
				break;

			case 8:
				if (bLocal_56 || iLocal_57) {
					if (bLocal_56) {
						bLocal_56 = false;
						system::settimerb(0);
						Global_101700.f_13010.f_82 = 1;
						iLocal_57 = 1;
					}
					else if (system::timerb() > 7500) {
						iLocal_57 = 0;
						ui::clear_help(1);
					}
				}
				else {
					func_28();
					func_12();
					if (iLocal_53) {
						func_11();
					}
					if (func_10(2, Global_14411, 0)) {
						if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
							audio::stop_ped_ringtone(player::player_ped_id());
						}
						iLocal_53 = 0;
						func_9();
						Global_14421 = 1;
						func_45(Global_14424, "SET_DATA_SLOT_EMPTY", 13f, -1082130432, -1082130432, -1082130432,
								-1082130432);
						func_33();
						if (Global_14443.f_1 > 3) {
							Global_14443.f_1 = 7;
						}
					}
				}
				break;

			default: break;
			}
			if (func_8()) {
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

// Position - 0x44E
bool func_1() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 3 || Global_14443.f_1 == 0 || Global_14387 == 1) {
		Global_14430 = 1;
		return true;
	}
	return false;
}

// Position - 0x491
void func_2() {
	func_7();
	if (func_4(0)) {
		func_3();
	}
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		audio::stop_ped_ringtone(player::player_ped_id());
	}
	if (bLocal_56) {
		ui::clear_help(1);
	}
	if (Global_101700.f_13010.f_83 == 0 || Global_101700.f_13010.f_82 == 0) {
		func_3();
	}
	gameplay::set_game_paused(0);
	script::terminate_this_thread();
}

// Position - 0x4F4
void func_3() {
	if (Global_3118[0 /*2811*/][0 /*281*/].f_259 == 2) {
		Global_3118[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3118[1 /*2811*/][0 /*281*/].f_259 == 2) {
		Global_3118[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3118[2 /*2811*/][0 /*281*/].f_259 == 2) {
		Global_3118[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	gameplay::clear_bit(&Global_2313, 25);
	gameplay::set_bit(&Global_2314, 11);
}

// Position - 0x571
bool func_4(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_5(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x593
bool func_5(int iParam0) { return func_6(iParam0, Global_35781); }

// Position - 0x5A4
int func_6(int iParam0, int iParam1) {
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

// Position - 0x785
void func_7() {
	func_44();
	Global_3118[Global_14443 /*2811*/][0 /*281*/].f_124[2] = 1;
}

// Position - 0x7A4
bool func_8() {
	if (Global_2919 == 1 || Global_14443.f_1 < 7) {
		Global_14430 = 1;
		return true;
	}
	return false;
}

// Position - 0x7CD
void func_9() {
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		audio::play_sound_frontend(-1, "Menu_Back", &Global_14432, 1);
	}
}

// Position - 0x7EE
bool func_10(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x860
void func_11() {
	int iVar0;

	iLocal_54 = gameplay::get_game_timer();
	iVar0 = iLocal_54 - iLocal_55;
	if (iVar0 % 600 <= 300 && iVar0 < 3000) {
		controls::set_pad_shake(0, 100, 100);
	}
}

// Position - 0x895
void func_12() {
	int iVar0;
	var uVar1;
	struct<13> Var17;
	int iVar30;

	if (iLocal_43 == 1) {
		if (iLocal_52) {
			iLocal_54 = gameplay::get_game_timer();
			if (iLocal_54 - iLocal_55 > 1000) {
				iLocal_51 = 1;
				iLocal_52 = 0;
			}
		}
		if (controls::_is_input_disabled(2)) {
			if (controls::is_control_just_pressed(2, 180)) {
				iLocal_65 = 1;
				iLocal_66 = 0;
			}
			if (controls::is_control_just_pressed(2, 181)) {
				iLocal_65 = 0;
				iLocal_66 = 1;
			}
		}
		if (func_10(2, Global_14419, 0) || func_10(2, Global_14420, 0) || iLocal_51 || iLocal_65 == 1 ||
			iLocal_66 == 1) {
			iLocal_65 = 0;
			iLocal_66 = 0;
			iLocal_51 = 0;
			iLocal_52 = 0;
			system::settimerb(0);
			iLocal_50 = 1;
			graphics::_push_scaleform_movie_function(Global_14424, "GET_CURRENT_SELECTION");
			uLocal_41 = graphics::_pop_scaleform_movie_function();
			while (!graphics::_0x768FF8961BA904D6(uLocal_41)) {
				system::wait(0);
			}
			iLocal_47 = iLocal_18[graphics::_0x2DE7EFA66B906036(uLocal_41)];
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				audio::stop_ped_ringtone(player::player_ped_id());
				system::wait(100);
				if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
					if (!audio::is_ped_ringtone_playing(player::player_ped_id())) {
						if (gameplay::are_strings_equal(
								&Global_3118[Global_14443 /*2811*/][1 /*281*/].f_144[iLocal_47 /*6*/],
								"Silent Ringtone Dummy")) {
						}
						else {
							audio::play_ped_ringtone(
								&Global_3118[Global_14443 /*2811*/][1 /*281*/].f_144[iLocal_47 /*6*/],
								player::player_ped_id(), 1);
						}
					}
				}
			}
		}
	}
	if (Global_14421 == 0) {
		if (func_10(2, Global_14412, 0)) {
			func_23();
			Global_14421 = 1;
			graphics::_push_scaleform_movie_function(Global_14424, "GET_CURRENT_SELECTION");
			uLocal_41 = graphics::_pop_scaleform_movie_function();
			while (!graphics::_0x768FF8961BA904D6(uLocal_41)) {
				system::wait(0);
			}
			iLocal_46 = graphics::_0x2DE7EFA66B906036(uLocal_41);
			if (iLocal_46 < 0) {
				iLocal_46 = 0;
			}
			Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
			if (iLocal_43 == 2) {
				iVar0 = Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/].f_259;
				Global_101700.f_13010[Global_14443 /*20*/].f_6 =
					Global_3118[Global_14443 /*2811*/][2 /*281*/].f_260[iVar0];
				func_45(Global_14424, "SET_THEME", system::to_float(Global_101700.f_13010[Global_14443 /*20*/].f_6),
						-1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_69702) {
					Global_2595530 = Global_3118[3 /*2811*/][2 /*281*/].f_259;
					func_20(2022, Global_3118[3 /*2811*/][2 /*281*/].f_259, -1, 1, 0);
					func_45(Global_14424, "SET_THEME", system::to_float(Global_2595530), -1082130432, -1082130432,
							-1082130432, -1082130432);
				}
				else {
					func_45(Global_14424, "SET_THEME", system::to_float(Global_101700.f_13010[Global_14443 /*20*/].f_6),
							-1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_19();
				func_18(Global_14424, "SET_DATA_SLOT", system::to_float(22), system::to_float(iLocal_45),
						system::to_float(23), -1f, -1f,
						&Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_45] /*4*/], 0, 0, 0,
						0);
				func_18(Global_14424, "SET_DATA_SLOT", system::to_float(22), system::to_float(iLocal_46),
						system::to_float(48), -1f, -1f,
						&Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_46] /*4*/], 0, 0, 0,
						0);
				iLocal_45 = iLocal_46;
				func_45(Global_14424, "DISPLAY_VIEW", 22f, system::to_float(iLocal_46), -1082130432, -1082130432,
						-1082130432);
			}
			if (iLocal_43 == 4) {
				Global_101700.f_13010[Global_14443 /*20*/].f_9 =
					Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/].f_259;
				if (Global_69702) {
					Global_2595531 = Global_3118[3 /*2811*/][4 /*281*/].f_259;
					func_20(2021, Global_3118[3 /*2811*/][4 /*281*/].f_259, -1, 1, 0);
					if (Global_2595531 == 0) {
						Var17 = {func_17(player::player_id())};
						iVar30 = 0;
						if (network::_0x72D918C99BCACC54(0) == 0) {
						}
						if (network::network_clan_player_is_active(&Var17) && network::_0x72D918C99BCACC54(0) &&
							Global_2595534 == 0) {
							system::settimera(0);
							while (!network::_0x5835D9CD92E83184(&Var17, &uVar1) && system::timera() < 3000) {
								system::wait(0);
								if (system::timera() > 2999) {
									iVar30 = 1;
								}
							}
							if (iVar30 == 0) {
								graphics::_push_scaleform_movie_function(Global_14424, "SET_BACKGROUND_CREW_IMAGE");
								graphics::begin_text_command_scaleform_string("CELL_2000");
								ui::add_text_component_substring_player_name(&uVar1);
								graphics::end_text_command_scaleform_string();
								graphics::_pop_scaleform_movie_function_void();
							}
						}
						else {
							func_45(Global_14424, "SET_BACKGROUND_IMAGE", system::to_float(0), -1082130432, -1082130432,
									-1082130432, -1082130432);
						}
					}
					else {
						func_45(Global_14424, "SET_BACKGROUND_IMAGE", system::to_float(Global_2595531), -1082130432,
								-1082130432, -1082130432, -1082130432);
					}
				}
				else {
					func_45(Global_14424, "SET_BACKGROUND_IMAGE",
							system::to_float(Global_101700.f_13010[Global_14443 /*20*/].f_9), -1082130432, -1082130432,
							-1082130432, -1082130432);
				}
				func_18(Global_14424, "SET_DATA_SLOT", system::to_float(22), system::to_float(iLocal_45),
						system::to_float(23), -1f, -1f,
						&Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_45] /*4*/], 0, 0, 0,
						0);
				func_18(Global_14424, "SET_DATA_SLOT", system::to_float(22), system::to_float(iLocal_46),
						system::to_float(48), -1f, -1f,
						&Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_46] /*4*/], 0, 0, 0,
						0);
				iLocal_45 = iLocal_46;
				func_45(Global_14424, "DISPLAY_VIEW", 22f, system::to_float(iLocal_46), -1082130432, -1082130432,
						-1082130432);
			}
			if (iLocal_43 == 1) {
				Global_101700.f_13010[Global_14443 /*20*/].f_11 = {
					Global_3118[Global_14443 /*2811*/][1 /*281*/]
						.f_144[Global_3118[Global_14443 /*2811*/][1 /*281*/].f_259 /*6*/]};
				if (Global_69702) {
					func_20(1193, Global_3118[3 /*2811*/][1 /*281*/].f_259, -1, 1, 0);
				}
				func_18(Global_14424, "SET_DATA_SLOT", system::to_float(22), system::to_float(iLocal_45),
						system::to_float(18), -1f, -1f,
						&Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_45] /*4*/], 0, 0, 0,
						0);
				func_18(Global_14424, "SET_DATA_SLOT", system::to_float(22), system::to_float(iLocal_46),
						system::to_float(48), -1f, -1f,
						&Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_46] /*4*/], 0, 0, 0,
						0);
				iLocal_45 = iLocal_46;
				func_45(Global_14424, "DISPLAY_VIEW", 22f, system::to_float(iLocal_46), -1082130432, -1082130432,
						-1082130432);
			}
			if (iLocal_43 == 3) {
				Global_101700.f_13010[Global_14443 /*20*/].f_10 =
					Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/].f_259;
				if (Global_69702) {
					func_20(1192, Global_101700.f_13010[3 /*20*/].f_10, -1, 1, 0);
				}
				if (Global_101700.f_13010[Global_14443 /*20*/].f_10 == 1) {
					iLocal_53 = 1;
					iLocal_55 = gameplay::get_game_timer();
				}
				else {
					iLocal_53 = 0;
				}
			}
			if (iLocal_43 == 0) {
				if (Global_69702 == 1) {
					Global_3118[3 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
					func_18(Global_14424, "SET_DATA_SLOT", system::to_float(22), system::to_float(iLocal_45),
							system::to_float(19), -1f, -1f,
							&Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_45] /*4*/], 0,
							0, 0, 0);
					func_18(Global_14424, "SET_DATA_SLOT", system::to_float(22), system::to_float(iLocal_46),
							system::to_float(48), -1f, -1f,
							&Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/].f_7[iLocal_18[iLocal_46] /*4*/], 0,
							0, 0, 0);
					iLocal_45 = iLocal_46;
					func_45(Global_14424, "DISPLAY_VIEW", 22f, system::to_float(iLocal_46), -1082130432, -1082130432,
							-1082130432);
					func_20(2084, Global_3118[3 /*2811*/][iLocal_43 /*281*/].f_259, -1, 1, 0);
				}
				else {
					Global_3118[0 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
					Global_3118[1 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
					Global_3118[2 /*2811*/][iLocal_43 /*281*/].f_259 = iLocal_18[iLocal_46];
					if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2) {
						if (Global_35781 == 15) {
							if (Global_101700.f_13010.f_82 == 0) {
								ui::clear_help(1);
								func_16("CELL_7050");
								if (fLocal_63 == fLocal_64) {
								}
								bLocal_56 = true;
							}
							else {
								func_45(Global_14424, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432,
										-1082130432);
								gameplay::set_bit(&Global_2313, 25);
								gameplay::set_bit(&Global_2314, 11);
								if (Global_101700.f_13010.f_83 == 0) {
									ui::clear_help(1);
									func_15("CELL_7051", -1);
									Global_101700.f_13010.f_83 = 1;
								}
							}
						}
					}
					else {
						func_45(Global_14424, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
						gameplay::clear_bit(&Global_2313, 25);
						gameplay::set_bit(&Global_2314, 11);
					}
				}
			}
			func_13(Global_14424, "SET_HEADER",
					&Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/]
						 .f_7[Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/].f_259 /*4*/],
					0, 0, 0, 0);
			if (func_4(0)) {
				func_3();
			}
		}
	}
}

// Position - 0x1152
void func_13(int iParam0, char *sParam1, char *sParam2, char *sParam3, char *sParam4, char *sParam5, char *sParam6) {
	graphics::_push_scaleform_movie_function(iParam0, sParam1);
	func_14(sParam2);
	if (!gameplay::is_string_null_or_empty(sParam3)) {
		func_14(sParam3);
	}
	if (!gameplay::is_string_null_or_empty(sParam4)) {
		func_14(sParam4);
	}
	if (!gameplay::is_string_null_or_empty(sParam5)) {
		func_14(sParam5);
	}
	if (!gameplay::is_string_null_or_empty(sParam6)) {
		func_14(sParam6);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x11AD
void func_14(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x11BF
void func_15(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x11D6
void func_16(char *sParam0) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 1, 1, -1);
}

// Position - 0x11EC
struct<13> func_17(int iParam0) {
	struct<13> Var0;

	network::network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

//Position - 0x1203
void func_18(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
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
		func_14(sParam7);
	}
	if (!gameplay::is_string_null_or_empty(sParam8)) {
		func_14(sParam8);
	}
	if (!gameplay::is_string_null_or_empty(sParam9)) {
		func_14(sParam9);
	}
	if (!gameplay::is_string_null_or_empty(sParam10)) {
		func_14(sParam10);
	}
	if (!gameplay::is_string_null_or_empty(sParam11)) {
		func_14(sParam11);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x12B6
void func_19() {
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (Global_14443 == 0) {
			switch (Global_101700.f_13010[Global_14443 /*20*/].f_6) {
			case 1: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 0); break;

			case 2: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 1); break;

			case 3: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 2); break;

			case 4: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 3); break;

			case 5: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 4); break;

			case 6: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 5); break;

			case 7: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 6); break;

			default: break;
			}
		}
		if (Global_14443 == 1) {
			switch (Global_101700.f_13010[Global_14443 /*20*/].f_6) {
			case 1: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 6); break;

			case 2: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 0); break;

			case 3: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 1); break;

			case 4: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 2); break;

			case 5: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 3); break;

			case 6: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 4); break;

			case 7: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 5); break;

			default: break;
			}
		}
		if (Global_14443 == 2) {
			switch (Global_101700.f_13010[Global_14443 /*20*/].f_6) {
			case 1: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 5); break;

			case 2: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 6); break;

			case 3: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 1); break;

			case 4: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 0); break;

			case 5: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 2); break;

			case 6: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 3); break;

			case 7: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 4); break;

			default: break;
			}
		}
		if (Global_14443 == 3) {
			switch (Global_2595530) {
			case 1: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 0); break;

			case 2: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 1); break;

			case 3: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 2); break;

			case 4: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 3); break;

			case 5: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 4); break;

			case 6: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 5); break;

			case 7: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 6); break;

			default: break;
			}
		}
	}
}

// Position - 0x152D
void func_20(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam4) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_21(iParam2)];
	if (iVar0 != 0) {
		stats::stat_set_int(iVar0, iParam1, iParam3);
	}
}

// Position - 0x155D
int func_21(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_22();
		if (iVar1 > -1) {
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else {
			iVar0 = 0;
			Global_2503539 = 1;
		}
	}
	return iVar0;
}

// Position - 0x1591
var func_22() { return Global_1312735; }

// Position - 0x159D
void func_23() {
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		audio::play_sound_frontend(-1, "Menu_Accept", &Global_14432, 1);
		func_24();
	}
}

// Position - 0x15C2
void func_24() {
	if (func_25()) {
		mobile::_move_finger(5);
	}
}

// Position - 0x15D6
bool func_25() {
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

// Position - 0x161D
void func_26() {
	if (Global_14421 == 0) {
		if (func_10(2, Global_14412, 0)) {
			func_23();
			Global_14421 = 1;
			graphics::_push_scaleform_movie_function(Global_14424, "GET_CURRENT_SELECTION");
			uLocal_41 = graphics::_pop_scaleform_movie_function();
			while (!graphics::_0x768FF8961BA904D6(uLocal_41)) {
				system::wait(0);
			}
			iLocal_44 = graphics::_0x2DE7EFA66B906036(uLocal_41);
			iLocal_43 = iLocal_18[iLocal_44];
			switch (iLocal_43) {
			case 0:
				if (Global_69702 == 0) {
					if (Global_35781 == 15) {
						if (Global_101700.f_13010.f_82 == 0) {
							ui::clear_help(1);
							func_16("CELL_7050");
							if (fLocal_63 == fLocal_64) {
							}
							bLocal_56 = true;
						}
					}
				}
				break;

			case 1: break;

			case 2: break;

			case 3: break;
			}
			if (Global_14443.f_1 > 3) {
				Global_14443.f_1 = 8;
			}
			func_27();
			iLocal_52 = 1;
			iLocal_55 = gameplay::get_game_timer();
		}
	}
}

// Position - 0x16EF
void func_27() {
	int iVar0[19];
	int iVar20;
	struct<13> Var21;
	int iVar34;
	int iVar35;

	func_45(Global_14424, "SET_DATA_SLOT_EMPTY", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_39 = 0;
	iVar20 = 0;
	if (Global_69702) {
		StringCopy(&Global_3118[3 /*2811*/][4 /*281*/].f_7[0 /*4*/], "CELL_CREWEMB", 16);
		Var21 = {func_17(player::player_id())};
		if (!network::network_clan_player_is_active(&Var21)) {
			StringCopy(&Global_3118[3 /*2811*/][4 /*281*/].f_7[0 /*4*/], "CELL_840", 16);
		}
	}
	while (iVar20 < 19) {
		iVar34 = 0;
		iVar35 = 18;
		Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/].f_84[iVar35] = 5000;
		while (iVar34 < 19) {
			if (Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/].f_124[iVar34] == 1) {
				if (iVar0[iVar34] == 0) {
					if (Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/].f_84[iVar34] <
						Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/].f_84[iVar35]) {
						iVar35 = iVar34;
						func_18(Global_14424, "SET_DATA_SLOT", system::to_float(22), system::to_float(iVar20),
								system::to_float(Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/].f_104[iVar35]),
								-1f, -1f, &Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/].f_7[iVar35 /*4*/], 0,
								0, 0, 0);
					}
				}
			}
			iVar34++;
		}
		iLocal_18[iVar20] = iVar35;
		iVar0[iVar35] = 1;
		if (gameplay::are_strings_equal(&Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/]
											 .f_7[Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/].f_259 /*4*/],
										&Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/].f_7[iVar35 /*4*/])) {
			iLocal_48 = iVar20;
			if (iLocal_48 < 0) {
				iLocal_48 = 0;
			}
			if (iLocal_43 == 1 || iLocal_43 == 4 || iLocal_43 == 2) {
				func_18(Global_14424, "SET_DATA_SLOT", system::to_float(22), system::to_float(iVar20),
						system::to_float(48), -1f, -1f,
						&Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/].f_7[iVar35 /*4*/], 0, 0, 0, 0);
				iLocal_45 = iVar20;
			}
			if (iLocal_43 == 0 && Global_69702 == 1) {
				func_18(Global_14424, "SET_DATA_SLOT", system::to_float(22), system::to_float(iVar20),
						system::to_float(48), -1f, -1f,
						&Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/].f_7[iVar35 /*4*/], 0, 0, 0, 0);
				iLocal_45 = iVar20;
			}
		}
		if (Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/].f_124[iVar20] == 1) {
			iLocal_39++;
		}
		iVar20++;
	}
	func_45(Global_14424, "DISPLAY_VIEW", 22f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_14424, "SET_HEADER",
			&Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/]
				 .f_7[Global_3118[Global_14443 /*2811*/][iLocal_43 /*281*/].f_259 /*4*/],
			0, 0, 0, 0);
	if (Global_14431) {
		func_18(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else {
		func_18(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	gameplay::clear_bit(&Global_2313, 17);
}

// Position - 0x1A34
void func_28() {
	if (iLocal_62) {
		if (system::timera() > 50) {
			iLocal_62 = 0;
		}
	}
	if (controls::_is_input_disabled(2)) {
		if (func_10(2, 181, 0)) {
			if (iLocal_40 > 0) {
				iLocal_40--;
			}
			func_31();
		}
		if (func_10(2, 180, 0)) {
			iLocal_40++;
			if (iLocal_40 == iLocal_39) {
				iLocal_40 = 0;
			}
			func_29();
		}
	}
	if (iLocal_62 == 0) {
		if (func_10(2, Global_14419, 0)) {
			if (iLocal_40 > 0) {
				iLocal_40--;
			}
			func_31();
			iLocal_62 = 1;
			system::settimera(0);
		}
		if (func_10(2, Global_14420, 0)) {
			iLocal_40++;
			if (iLocal_40 == iLocal_39) {
				iLocal_40 = 0;
			}
			func_29();
			iLocal_62 = 1;
			system::settimera(0);
		}
	}
}

// Position - 0x1AE1
void func_29() {
	func_45(Global_14424, "SET_INPUT_EVENT", system::to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	audio::play_sound_frontend(-1, "Menu_Navigate", &Global_14432, 1);
	func_30();
}

// Position - 0x1B1E
void func_30() {
	if (func_25()) {
		if (Global_14609 == 0) {
			mobile::_move_finger(2);
		}
		else {
			mobile::_move_finger(1);
		}
	}
}

// Position - 0x1B41
void func_31() {
	func_45(Global_14424, "SET_INPUT_EVENT", system::to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	audio::play_sound_frontend(-1, "Menu_Navigate", &Global_14432, 1);
	func_32();
}

// Position - 0x1B7E
void func_32() {
	if (func_25()) {
		if (Global_14609 == 0) {
			mobile::_move_finger(1);
		}
		else {
			mobile::_move_finger(2);
		}
	}
}

// Position - 0x1BA1
void func_33() {
	int iVar0[20];
	int iVar21;
	int iVar22;
	int iVar23;

	iLocal_39 = 0;
	iVar21 = 0;
	while (iVar21 < 9) {
		iVar22 = 0;
		iVar23 = 9;
		Global_3118[Global_14443 /*2811*/][iVar23 /*281*/] = 5000;
		if (gameplay::get_profile_setting(2) == 0) {
			Global_3118[Global_14443 /*2811*/][3 /*281*/].f_280 = 0;
		}
		else {
			Global_3118[Global_14443 /*2811*/][3 /*281*/].f_280 = 1;
		}
		while (iVar22 < 9) {
			if (Global_3118[Global_14443 /*2811*/][iVar22 /*281*/].f_280 == 1) {
				if (iVar0[iVar22] == 0) {
					if (Global_3118[Global_14443 /*2811*/][iVar22 /*281*/] <
						Global_3118[Global_14443 /*2811*/][iVar23 /*281*/]) {
						if (Global_69702) {
							if (iVar22 == 0) {
								iVar23 = iVar22;
								func_41(iVar22, iVar23);
								func_18(Global_14424, "SET_DATA_SLOT", system::to_float(13), system::to_float(iVar21),
										system::to_float(iLocal_49), -1f, -1f,
										&Global_3118[Global_14443 /*2811*/][iVar23 /*281*/].f_2, 0, 0, 0, 0);
							}
							else {
								iVar23 = iVar22;
								func_41(iVar22, iVar23);
								func_18(Global_14424, "SET_DATA_SLOT", system::to_float(13), system::to_float(iVar21),
										system::to_float(iLocal_49), -1f, -1f,
										&Global_3118[Global_14443 /*2811*/][iVar23 /*281*/].f_2, 0, 0, 0, 0);
							}
						}
						else if (func_34() == 2) {
							if (iVar22 == 4 || iVar22 == 5) {
							}
							else {
								iVar23 = iVar22;
								func_41(iVar22, iVar23);
								func_18(Global_14424, "SET_DATA_SLOT", system::to_float(13), system::to_float(iVar21),
										system::to_float(iLocal_49), -1f, -1f,
										&Global_3118[Global_14443 /*2811*/][iVar23 /*281*/].f_2, 0, 0, 0, 0);
							}
						}
						else if (iVar22 == 5) {
						}
						else {
							iVar23 = iVar22;
							func_41(iVar22, iVar23);
							func_18(Global_14424, "SET_DATA_SLOT", system::to_float(13), system::to_float(iVar21),
									system::to_float(iLocal_49), -1f, -1f,
									&Global_3118[Global_14443 /*2811*/][iVar23 /*281*/].f_2, 0, 0, 0, 0);
						}
					}
				}
			}
			iVar22++;
		}
		iLocal_18[iVar21] = iVar23;
		iVar0[iVar23] = 1;
		if (Global_3118[Global_14443 /*2811*/][iVar21 /*281*/].f_280 == 1) {
			iLocal_39++;
		}
		iVar21++;
	}
	func_45(Global_14424, "DISPLAY_VIEW", 13f, system::to_float(iLocal_44), -1082130432, -1082130432, -1082130432);
	func_13(Global_14424, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_14431) {
		func_18(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_18(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else {
		func_18(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_18(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_18(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	gameplay::clear_bit(&Global_2313, 17);
}

// Position - 0x1E6D
int func_34() {
	if (Global_69702) {
		Global_14443 = 3;
	}
	else {
		Global_14443 = func_35();
	}
	if (Global_14443 > 3) {
		Global_14443 = 3;
	}
	return Global_101700.f_13010[Global_14443 /*20*/].f_7;
}

// Position - 0x1EA3
var func_35() {
	func_36();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x1EBC
void func_36() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_40(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_39(player::player_ped_id());
			if (func_38(iVar0) && (!func_37(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_38(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x1FB9
bool func_37(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x1FC7
bool func_38(int iParam0) { return iParam0 < 3; }

// Position - 0x1FD3
int func_39(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_40(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x2010
int func_40(int iParam0) {
	if (func_38(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x203A
void func_41(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0:
		if (Global_69702) {
			iLocal_49 = 19;
		}
		else if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2) {
			iLocal_49 = 26;
		}
		else {
			iLocal_49 = 25;
		}
		break;

	case 3:
		if (Global_3118[Global_14443 /*2811*/][3 /*281*/].f_259 == 1) {
			iLocal_49 = 20;
		}
		else {
			iLocal_49 = 21;
		}
		break;

	default: iLocal_49 = Global_3118[Global_14443 /*2811*/][iParam1 /*281*/].f_6; break;
	}
}

// Position - 0x20BC
void func_42() {
	if (Global_35781 != 15) {
		func_44();
		Global_3118[Global_14443 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}

// Position - 0x20E3
int func_43(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_21(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x2115
void func_44() {
	if (func_37(14)) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[0 /*29*/]) {
				Global_14443 = 0;
			}
			else if (entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[1 /*29*/]) {
				Global_14443 = 1;
			}
			else if (entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[2 /*29*/]) {
				Global_14443 = 2;
			}
			else {
				Global_14443 = 0;
			}
		}
	}
	else {
		Global_14443 = func_35();
		if (Global_14443 == 145) {
			Global_14443 = 3;
		}
		if (Global_69702) {
			Global_14443 = 3;
		}
		if (Global_14443 > 3) {
			Global_14443 = 3;
		}
	}
}

// Position - 0x21B7
void func_45(int iParam0, char *sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6) {
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
