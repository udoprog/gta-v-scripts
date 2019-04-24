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
char *sLocal_19 = NULL;
var uLocal_20 = 0;
var uLocal_21 = 0;
float fLocal_22 = 0f;
var uLocal_23 = 0;
var uLocal_24 = 0;
var uLocal_25 = 0;
float fLocal_26 = 0f;
float fLocal_27 = 0f;
var uLocal_28 = 0;
int iLocal_29 = 0;
var uLocal_30 = 0;
var uLocal_31 = 0;
float fLocal_32 = 0f;
float fLocal_33 = 0f;
float fLocal_34 = 0f;
var uLocal_35 = 0;
var uLocal_36 = 0;
var uLocal_37 = 0;
var uLocal_38 = 0;
var uLocal_39 = 0;
int iLocal_40 = 0;
int iLocal_41 = 0;
int iLocal_42 = 0;
int iLocal_43 = 0;
var uLocal_44 = 0;
var uLocal_45 = 0;
var uLocal_46 = 0;
vector3 vLocal_47 = {0f, 0f, 0f};
vector3 vLocal_50 = {0f, 0f, 0f};
var uLocal_53 = 0;
int iLocal_54 = 0;
int iLocal_55 = 0;
int iLocal_56 = 0;
int iLocal_57 = 0;
int iLocal_58 = 0;
int iLocal_59 = 0;
int iLocal_60 = 0;
int iLocal_61 = 0;
int iLocal_62 = 0;
int iLocal_63 = 0;
int iLocal_64 = 0;
int iLocal_65 = 0;
int iLocal_66 = 0;
int iLocal_67 = 0;
int iLocal_68 = 0;
char *sLocal_69 = NULL;
float fLocal_70 = 0f;
int iLocal_71 = 0;
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
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_29 = 3;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_60 = -1;
	iLocal_61 = -1;
	fLocal_70 = 0f;
	iLocal_71 = 1;
	if (Global_69702) {
		script::terminate_this_thread();
	}
	gameplay::network_set_script_is_safe_for_network_game();
	iLocal_55 = func_73();
	ui::request_additional_text("email", 1);
	while (!ui::has_additional_text_loaded(1)) {
		system::wait(0);
	}
	Global_16778 = 0;
	Global_16779 = 0;
	Global_14443.f_1 = 8;
	Global_16779 = 1;
	Global_36915 = 1;
	if (Global_14425) {
		func_72(0);
		func_71(1);
		func_70(0);
	}
	system::settimerb(0);
	vLocal_47 = {Global_14396[Global_14388 /*3*/]};
	vLocal_50 = {vLocal_47};
	vLocal_50.x -= 10f;
	vLocal_50.y += 20f;
	while (true) {
		system::wait(0);
		if (Global_14443.f_1 != 9) {
			if (Global_16779 && !Global_16778) {
				func_68();
			}
			else if (Global_16778) {
				func_63();
			}
			if (!iLocal_56) {
				iLocal_56 = 1;
			}
			else if (Global_14425) {
				if (!iLocal_57) {
					iLocal_57 = 1;
					func_61(Global_14424, iLocal_55);
					func_60(Global_14424, "SET_HEADER", "EM_INBOX", 0, 0, 0, 0);
					func_59(Global_14424, "DISPLAY_VIEW", 8f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				else {
					if (Global_36916) {
						Global_36916 = 0;
						iLocal_58 = 1;
					}
					if (iLocal_58) {
						system::settimera(0);
						system::settimerb(0);
						if (iLocal_60 == -1) {
							if (iLocal_71) {
								iLocal_71 = 0;
								fLocal_70 = 0f;
							}
							func_59(Global_14424, "SET_DATA_SLOT_EMPTY", 8f, -1082130432, -1082130432, -1082130432,
									-1082130432);
							iVar0 = func_61(Global_14424, iLocal_55);
							func_60(Global_14424, "SET_HEADER", "EM_INBOX", 0, 0, 0, 0);
							iLocal_59 = 0;
							if (iVar0 > 0) {
								func_72(1);
							}
							else {
								func_72(0);
							}
							func_71(1);
							func_70(0);
							func_59(Global_14424, "DISPLAY_VIEW", 8f, fLocal_70, -1082130432, -1082130432, -1082130432);
						}
						else {
							func_59(Global_14424, "SET_DATA_SLOT_EMPTY", 21f, -1082130432, -1082130432, -1082130432,
									-1082130432);
							system::wait(0);
							func_59(Global_14424, "DISPLAY_VIEW", 21f, -1082130432, -1082130432, -1082130432,
									-1082130432);
							system::wait(0);
							func_71(1);
							func_58();
							if (iLocal_61 == -1) {
								func_56(iLocal_55, iLocal_60);
								func_51(Global_14424, iLocal_55, iLocal_60);
								Global_16805 = 0;
								iLocal_68 = func_49(iLocal_55, iLocal_60);
								if (iLocal_68) {
									sLocal_69 = func_46(iLocal_55, iLocal_60);
									if (!func_45(37)) {
										switch (func_43("AM_H_FLINK")) {
										case 2: func_40("AM_H_FLINK", 2, 0, 1000, 10000, 7, 0, 0, 0); break;

										case 1: func_39(37); break;
										}
									}
									else if (gameplay::is_pc_version()) {
										if (!gameplay::is_bit_set(Global_2595318, 17)) {
											gameplay::set_bit(&Global_2595318, 17);
											func_38("AM_H_FLINK", -1);
										}
									}
									func_70(1);
								}
								else {
									if (!func_45(38)) {
										switch (func_43("AM_H_SCROLL")) {
										case 2: func_40("AM_H_SCROLL", 2, 0, 1000, 10000, 7, 0, 0, 0); break;

										case 1: func_39(38); break;
										}
									}
									func_70(0);
								}
								func_59(Global_14424, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432,
										-1082130432);
							}
							else {
								func_59(Global_14424, "SET_DATA_SLOT_EMPTY", 21f, -1082130432, -1082130432, -1082130432,
										-1082130432);
								system::wait(0);
								func_59(Global_14424, "DISPLAY_VIEW", 21f, -1082130432, -1082130432, -1082130432,
										-1082130432);
								system::wait(0);
								func_59(Global_14424, "SET_DATA_SLOT_EMPTY", 9f, -1082130432, -1082130432, -1082130432,
										-1082130432);
								func_35(Global_14424, iLocal_55, iLocal_60);
								func_59(Global_14424, "DISPLAY_VIEW", 9f, -1082130432, -1082130432, -1082130432,
										-1082130432);
							}
						}
						iLocal_58 = 0;
					}
					else {
						func_13();
					}
				}
			}
			if (iLocal_55 != func_73()) {
				Global_36915 = 0;
				func_4();
			}
		}
		if (func_3()) {
			Global_16778 = 0;
			Global_16779 = 0;
			Global_36915 = 0;
			func_1(0);
			script::terminate_this_thread();
		}
	}
}

// Position - 0x492
void func_1(int iParam0) {
	if (func_2()) {
		if (iParam0 == 1) {
			mobile::_set_phone_lean(1);
		}
		else if (Global_14443.f_1 > 3) {
			mobile::_set_phone_lean(0);
		}
	}
}

// Position - 0x4BD
bool func_2() {
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

// Position - 0x504
bool func_3() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 3 || Global_14443.f_1 == 0 || Global_14387 == 1) {
		Global_14430 = 1;
		return true;
	}
	return false;
}

// Position - 0x547
void func_4() {
	if (Global_46224 != -1) {
		graphics::set_streamed_texture_dict_as_no_longer_needed(func_12(Global_46224));
		Global_46224 = -1;
	}
	Global_36915 = 0;
	if (Global_14443.f_1 > 4) {
		Global_14443.f_1 = 6;
		func_5();
	}
	script::terminate_this_thread();
}

// Position - 0x580
void func_5() {
	vector3 vVar0[24];

	if (Global_14426 == 1) {
		return;
	}
	if (Global_14443.f_1 < 4) {
		return;
	}
	while (!graphics::has_scaleform_movie_loaded(Global_14424)) {
		system::wait(0);
	}
	switch (Global_14443.f_1) {
	case 6:
		func_59(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_10(Global_2918);
		if (Global_2918 == 1) {
			func_59(Global_14424, "DISPLAY_VIEW", 1f, system::to_float(Global_14447), -1082130432, -1082130432,
					-1082130432);
			Global_14423 = Global_14447;
		}
		else {
			func_59(Global_14424, "DISPLAY_VIEW", 1f, system::to_float(Global_14448), -1082130432, -1082130432,
					-1082130432);
			Global_14423 = Global_14448;
		}
		if (Global_14431) {
			func_9(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
			func_9(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else {
			func_9(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_9(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_14606 == 0) {
			func_9(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			gameplay::clear_bit(&Global_2313, 17);
		}
		else if (Global_69702) {
			func_9(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			gameplay::clear_bit(&Global_2313, 17);
		}
		else {
			if (Global_14605 == 1) {
				if (Global_14431) {
					func_9(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else {
					func_9(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else if (Global_14431) {
				func_9(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else {
				func_9(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			gameplay::set_bit(&Global_2313, 17);
		}
		break;

	case 7: break;

	case 10:
		func_59(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_9(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		func_9(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		gameplay::clear_bit(&Global_2313, 17);
		if (gameplay::is_bit_set(Global_2313, 20)) {
			func_9(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		else if (Global_14431) {
			func_9(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
			if (Global_14386) {
				func_9(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else {
			func_9(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		break;

	case 9:
		if (Global_14442 == 1) {
			func_8();
			func_59(Global_14424, "SET_THEME", system::to_float(Global_101700.f_13010[Global_14443 /*20*/].f_6),
					-1082130432, -1082130432, -1082130432, -1082130432);
			if (Global_15758) {
				graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
				graphics::_push_scaleform_movie_function_parameter_int(4);
				graphics::_push_scaleform_movie_function_parameter_int(0);
				graphics::_push_scaleform_movie_function_parameter_int(2);
				graphics::begin_text_command_scaleform_string("CELL_CONDFON");
				ui::add_text_component_substring_player_name(&Global_15760);
				graphics::end_text_command_scaleform_string();
				func_7("CELL_300");
				func_7("CELL_217");
				func_7("CELL_217");
				graphics::_pop_scaleform_movie_function_void();
			}
			else if (Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] == 0) {
				func_9(Global_14424, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(2),
					   -1f, -1f, &Global_117[Global_1628 /*10*/].f_4, "CELL_300", "CELL_217", "CELL_195", 0);
			}
			else {
				func_9(Global_14424, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(2),
					   -1f, -1f, &Global_101700.f_27009[Global_1628 /*29*/].f_3,
					   &Global_101700.f_27009[Global_1628 /*29*/].f_7, "CELL_217",
					   &Global_101700.f_27009[Global_1628 /*29*/].f_3, 0);
			}
			func_59(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else if (Global_15745 == 4 || Global_15745 == 3) {
			func_59(Global_14424, "SET_THEME", system::to_float(Global_101700.f_13010[Global_14443 /*20*/].f_6),
					-1082130432, -1082130432, -1082130432, -1082130432);
			func_8();
			if (Global_15758) {
				graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
				graphics::_push_scaleform_movie_function_parameter_int(4);
				graphics::_push_scaleform_movie_function_parameter_int(0);
				graphics::_push_scaleform_movie_function_parameter_int(2);
				graphics::begin_text_command_scaleform_string("CELL_CONDFON");
				ui::add_text_component_substring_player_name(&Global_15760);
				graphics::end_text_command_scaleform_string();
				func_7("CELL_300");
				func_7("CELL_219");
				func_7("CELL_219");
				graphics::_pop_scaleform_movie_function_void();
			}
			else {
				if (Global_16003) {
					StringCopy(&cVar0, "CELL_219", 24);
				}
				else {
					StringCopy(&cVar0, "CELL_211", 24);
				}
				if (Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] == 0) {
					func_59(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432,
							-1082130432);
					func_9(Global_14424, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3),
						   -1f, -1f, &Global_117[Global_1628 /*10*/].f_4, "CELL_300", &cVar0, "CELL_195", 0);
				}
				else {
					func_59(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432,
							-1082130432);
					func_9(Global_14424, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3),
						   -1f, -1f, &Global_101700.f_27009[Global_1628 /*29*/].f_3,
						   &Global_101700.f_27009[Global_1628 /*29*/].f_7, &cVar0,
						   &Global_101700.f_27009[Global_1628 /*29*/].f_3, 0);
				}
			}
			func_59(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		func_6();
		break;

	default: break;
	}
}

// Position - 0xB26
void func_6() {
	if (graphics::has_scaleform_movie_loaded(Global_14424)) {
		if (Global_14442 == 1) {
			if (Global_14431) {
				func_9(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else {
				func_9(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15792) {
				func_9(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (gameplay::is_bit_set(Global_2313, 20)) {
				func_9(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431) {
				func_9(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else {
				func_9(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_9(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			gameplay::clear_bit(&Global_2313, 17);
		}
		else {
			func_9(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_9(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			gameplay::clear_bit(&Global_2313, 17);
			if (gameplay::is_bit_set(Global_2313, 20)) {
				func_9(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431) {
				func_9(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14386) {
					func_9(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else {
				func_9(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

// Position - 0xCA6
void func_7(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0xCB8
void func_8() {
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

// Position - 0xF2F
void func_9(int iParam0, char *sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6,
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
		func_7(sParam7);
	}
	if (!gameplay::is_string_null_or_empty(sParam8)) {
		func_7(sParam8);
	}
	if (!gameplay::is_string_null_or_empty(sParam9)) {
		func_7(sParam9);
	}
	if (!gameplay::is_string_null_or_empty(sParam10)) {
		func_7(sParam10);
	}
	if (!gameplay::is_string_null_or_empty(sParam11)) {
		func_7(sParam11);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0xFE2
void func_10(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	Global_16813 = 0;
	Global_2918 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9) {
		Global_2882[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9) {
		iVar1 = 0;
		if (func_11(14)) {
			while (iVar1 < 34) {
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11) {
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4) {
						if (Global_2882[iVar0] == 0) {
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 3) {
								if (gameplay::is_bit_set(Global_2314, 3)) {
									iVar2 = 42;
									Global_14608 = 1;
								}
								else {
									iVar2 = 255;
									Global_14608 = 0;
								}
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_7(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(iVar2);
								graphics::_pop_scaleform_movie_function_void();
							}
							if (Global_2452520) {
								if (iVar1 == 14) {
									func_9(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
										   system::to_float(Global_2320[iVar1 /*15*/].f_10),
										   system::to_float(Global_16808), -1f, &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
								}
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else {
			while (iVar1 < 34) {
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11) {
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4) {
						if (Global_2882[iVar0] == 0) {
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 1) {
								iVar3 = 0;
								while (iVar3 < 35) {
									if (Global_101700.f_13100[iVar3 /*104*/].f_24 != 0) {
										if (Global_101700.f_13100[iVar3 /*104*/].f_28 == 0) {
											if (Global_101700.f_13100[iVar3 /*104*/].f_99[Global_14443] == 1) {
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_9(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
									   system::to_float(Global_2320[iVar1 /*15*/].f_10), system::to_float(Global_16813),
									   -1f, &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
							}
							else if (iVar1 == 7) {
								if (Global_69702) {
									iVar4 = 0;
									iVar4 = Global_2594052;
									iVar5 = 0;
									while (iVar5 < 12) {
										if (Global_2594053[iVar5 /*104*/].f_24 != 0) {
											if (Global_2594053[iVar5 /*104*/].f_28 == 0) {
												if (Global_2594053[iVar5 /*104*/
												]
														.f_99[Global_14443] == 1) {
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_9(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
										   system::to_float(Global_2320[iVar1 /*15*/].f_10), system::to_float(iVar4),
										   -1f, &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
								}
								else {
									switch (Global_14443) {
									case 0: iVar6 = Global_36917; break;

									case 1: iVar6 = Global_36918; break;

									case 2: iVar6 = Global_36919; break;

									default: break;
									}
									func_9(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
										   system::to_float(Global_2320[iVar1 /*15*/].f_10), system::to_float(iVar6),
										   -1f, &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14) {
								func_9(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
									   system::to_float(Global_2320[iVar1 /*15*/].f_10), system::to_float(Global_16808),
									   -1f, &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
							}
							else if (iVar1 == 20) {
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_7(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2319);
								graphics::_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 2) {
								if (gameplay::is_bit_set(Global_2314, 6)) {
									iVar7 = 42;
								}
								else {
									iVar7 = 255;
								}
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_7(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(iVar7);
								graphics::_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 3) {
								if (gameplay::is_bit_set(Global_2314, 3)) {
									iVar8 = 42;
									Global_14608 = 1;
								}
								else {
									iVar8 = 255;
									Global_14608 = 0;
								}
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_7(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(iVar8);
								graphics::_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 8) {
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_7(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(42);
								graphics::_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 23 &&
									 gameplay::are_strings_equal(&Global_2320[iVar1 /*15*/], "CELL_BENWEB") &&
									 gameplay::is_bit_set(Global_2314, 6)) {
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_7(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(42);
								graphics::_pop_scaleform_movie_function_void();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23) {
								iVar9 = 0;
								iVar9 = Global_1618161.f_1;
								func_9(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
									   system::to_float(Global_2320[iVar1 /*15*/].f_10), system::to_float(iVar9), -1f,
									   &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
							}
							else {
								func_9(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
									   system::to_float(Global_2320[iVar1 /*15*/].f_10), system::to_float(0), -1f,
									   &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

// Position - 0x157A
bool func_11(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x1588
char *func_12(int iParam0) {
	switch (iParam0) {
	case 0: return "Epsilon_Cars";

	case 1: return "Epsilon_Cars";

	case 2: return "Epsilon_Cars";

	case 3: return "Epsilon_Cars";

	case 4: return "Epsilon_Cars";

	case 5: return "Epsilon_Cars";

	case 6: return "Epsilon_Cars";

	case 12: return "Assassinations";

	case 13: return "Assassinations";

	case 14: return "Assassinations";

	case 15: return "Assassinations";

	case 64: return "BSPBadHacker";

	case 65: return "BPDGoodHacker";

	case 66: return "BPSMedHacker";

	case 75: return "email_quarry_bail_bond";

	case 76: return "email_abandonedfarm_bail_bond";

	case 77: return "email_mountain_bail_bond";

	case 78: return "email_hobocamp_bail_bond";

	case 80: return "email_quarry_bail_bond";

	case 81: return "email_abandonedfarm_bail_bond";

	case 82: return "email_mountain_bail_bond";

	case 83: return "email_hobocamp_bail_bond";

	case 205: return "hush_foxymama21";

	case 209: return "hush_alterego";

	case 212: return "hush_michael";

	case 238: return "hush_trevor";

	default:
	}
	return "NULL";
}

// Position - 0x16E4
void func_13() {
	bool bVar0;

	if (Global_16805) {
		iLocal_60 = 0;
		fLocal_70 = system::to_float(iLocal_60);
		if (func_34(iLocal_55) == 0) {
			iLocal_60 = -1;
		}
		if (iLocal_60 != -1) {
			Global_14443.f_1 = 8;
			iLocal_58 = 1;
			system::settimerb(0);
			func_32();
		}
		return;
	}
	if (Global_68131) {
		return;
	}
	if (Global_16778) {
		return;
	}
	if (!iLocal_64) {
		if (controls::is_control_just_pressed(2, 172) || controls::is_control_just_pressed(2, 181)) {
			iLocal_64 = 1;
			graphics::_push_scaleform_movie_function(Global_14424, "SET_INPUT_EVENT");
			graphics::_push_scaleform_movie_function_parameter_int(1);
			graphics::_pop_scaleform_movie_function_void();
			audio::play_sound_frontend(-1, "Menu_Navigate", &Global_14432, 1);
			system::settimera(0);
			iLocal_71 = 1;
		}
	}
	else if (controls::is_control_pressed(2, 172) || controls::is_control_pressed(2, 181)) {
		if (system::timera() > 100 && iLocal_60 != -1) {
			graphics::_push_scaleform_movie_function(Global_14424, "SET_INPUT_EVENT");
			graphics::_push_scaleform_movie_function_parameter_int(1);
			graphics::_pop_scaleform_movie_function_void();
			system::settimera(0);
			iLocal_71 = 1;
		}
	}
	else {
		iLocal_64 = 0;
	}
	if (!iLocal_65) {
		if (controls::is_control_just_pressed(2, 173) || controls::is_control_just_pressed(2, 180)) {
			iLocal_65 = 1;
			graphics::_push_scaleform_movie_function(Global_14424, "SET_INPUT_EVENT");
			graphics::_push_scaleform_movie_function_parameter_int(3);
			graphics::_pop_scaleform_movie_function_void();
			audio::play_sound_frontend(-1, "Menu_Navigate", &Global_14432, 1);
			system::settimerb(0);
			iLocal_71 = 1;
		}
	}
	else if (controls::is_control_pressed(2, 173) || controls::is_control_pressed(2, 180)) {
		if (system::timerb() > 100 && iLocal_60 != -1) {
			graphics::_push_scaleform_movie_function(Global_14424, "SET_INPUT_EVENT");
			graphics::_push_scaleform_movie_function_parameter_int(3);
			graphics::_pop_scaleform_movie_function_void();
			system::settimerb(0);
			iLocal_71 = 1;
		}
	}
	else {
		iLocal_65 = 0;
	}
	if (!iLocal_66) {
		if (controls::is_control_pressed(2, 174)) {
			iLocal_66 = 1;
			graphics::_push_scaleform_movie_function(Global_14424, "SET_INPUT_EVENT");
			graphics::_push_scaleform_movie_function_parameter_int(4);
			graphics::_pop_scaleform_movie_function_void();
			audio::play_sound_frontend(-1, "Menu_Navigate", &Global_14432, 1);
		}
	}
	else if (!controls::is_control_pressed(2, 174)) {
		iLocal_66 = 0;
	}
	if (!iLocal_67) {
		if (controls::is_control_pressed(2, 175)) {
			iLocal_67 = 1;
			graphics::_push_scaleform_movie_function(Global_14424, "SET_INPUT_EVENT");
			graphics::_push_scaleform_movie_function_parameter_int(2);
			graphics::_pop_scaleform_movie_function_void();
			audio::play_sound_frontend(-1, "Menu_Navigate", &Global_14432, 1);
		}
	}
	else if (!controls::is_control_pressed(2, 175)) {
		iLocal_67 = 0;
	}
	if (!iLocal_63) {
		if (controls::is_control_pressed(2, 176) && system::timerb() > 100) {
			if (iLocal_60 == -1) {
				graphics::_push_scaleform_movie_function(Global_14424, "GET_CURRENT_SELECTION");
				uLocal_53 = graphics::_pop_scaleform_movie_function();
				while (!graphics::_0x768FF8961BA904D6(uLocal_53)) {
					system::wait(0);
				}
				iLocal_54 = graphics::_0x2DE7EFA66B906036(uLocal_53);
				iLocal_60 = iLocal_54;
				if (func_34(iLocal_55) == 0) {
					iLocal_60 = -1;
				}
				if (iLocal_60 != -1) {
					if (iLocal_71 == 1) {
						fLocal_70 = system::to_float(iLocal_60);
						iLocal_71 = 0;
					}
					Global_14443.f_1 = 8;
					iLocal_58 = 1;
					system::settimerb(0);
					func_32();
				}
			}
			else if (iLocal_61 == -1) {
				if (func_30(iLocal_55, iLocal_60) && !iLocal_59) {
					iLocal_61 = 0;
					iLocal_58 = 1;
					system::settimerb(0);
					func_32();
				}
			}
			else {
				iLocal_61 = 0;
				func_18(iLocal_55, iLocal_60, iLocal_61);
				iLocal_59 = 1;
				iLocal_61 = -1;
				iLocal_58 = 1;
				func_32();
				system::settimerb(0);
			}
			iLocal_63 = 1;
		}
	}
	else {
		iLocal_63 = 0;
	}
	if (system::timerb() > 100) {
		if (controls::is_control_pressed(2, 177)) {
			bVar0 = false;
			if (iLocal_62 == 0) {
				if (iLocal_60 != -1) {
					if (iLocal_61 == -1) {
						iLocal_60 = system::round(fLocal_70);
						iLocal_68 = 0;
						system::settimerb(0);
						bVar0 = true;
						func_17();
					}
					else {
						system::settimerb(0);
						iLocal_61 = -1;
						func_17();
					}
					iLocal_58 = 1;
				}
				else {
					if (func_43("AM_H_FLINK") == 0) {
						func_39(37);
					}
					if (func_43("AM_H_SCROLL") == 0) {
						func_39(38);
					}
					if (Global_16779 == 0 && !Global_16778) {
						func_17();
						Global_16778 = 1;
						Global_36915 = 0;
					}
				}
				iLocal_62 = 1;
			}
			if (bVar0) {
				iLocal_60 = -1;
			}
		}
		else {
			iLocal_62 = 0;
		}
	}
	if (controls::is_control_pressed(2, 179)) {
		if (iLocal_68) {
			if (func_43("AM_H_FLINK") == 0) {
				func_39(37);
			}
			if (func_43("AM_H_SCROLL") == 0) {
				func_39(38);
			}
			StringCopy(&Global_68115, sLocal_69, 64);
			func_14(7, 0, 0, 0);
			iLocal_68 = 0;
			func_32();
		}
	}
}

// Position - 0x1ACA
void func_14(int iParam0, int iParam1, int iParam2, int iParam3) {
	Global_68192 = iParam0;
	switch (Global_68192) {
	case 3: Global_68190 = 0; break;

	case 4: Global_68190 = 3; break;
	}
	if (iParam1) {
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("appsecuroserv")) > 0) {
			return;
		}
	}
	else if (iParam2) {
		if (script::_get_number_of_instances_of_script_with_name_hash(1476056117) > 0) {
			return;
		}
	}
	else if (iParam3) {
		if (script::_get_number_of_instances_of_script_with_name_hash(290327540) > 0) {
			return;
		}
	}
	else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("appinternet")) > 0) {
		return;
	}
	if (Global_69702 && func_16()) {
		return;
	}
	if (!Global_69702 && func_15()) {
		return;
	}
	if (iParam1) {
		if (!script::has_script_loaded("appSecuroServ")) {
			script::request_script("appSecuroServ");
		}
		while (!script::has_script_loaded("appSecuroServ")) {
			system::wait(0);
		}
		system::start_new_script("appSecuroServ", 4592);
		script::set_script_as_no_longer_needed("appSecuroServ");
	}
	else if (iParam2) {
		if (!script::has_script_loaded("appBikerBusiness")) {
			script::request_script("appBikerBusiness");
		}
		while (!script::has_script_loaded("appBikerBusiness")) {
			system::wait(0);
		}
		system::start_new_script("appBikerBusiness", 4592);
		script::set_script_as_no_longer_needed("appBikerBusiness");
	}
	else if (iParam3) {
		if (!script::has_script_loaded("appImportExport")) {
			script::request_script("appImportExport");
		}
		while (!script::has_script_loaded("appImportExport")) {
			system::wait(0);
		}
		system::start_new_script("appImportExport", 4592);
		script::set_script_as_no_longer_needed("appImportExport");
	}
	else {
		if (!script::has_script_loaded("appInternet")) {
			script::request_script("appInternet");
		}
		while (!script::has_script_loaded("appInternet")) {
			system::wait(0);
		}
		system::start_new_script("appInternet", 4592);
		script::set_script_as_no_longer_needed("appInternet");
	}
}

// Position - 0x1C84
var func_15() { return Global_68132; }

// Position - 0x1C90
var func_16() { return Global_1751495; }

// Position - 0x1C9C
void func_17() {
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		audio::play_sound_frontend(-1, "Menu_Back", &Global_14432, 1);
	}
}

// Position - 0x1CBE
void func_18(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = -1;
	switch (iParam0) {
	case 0: iVar0 = 0; break;

	case 1: iVar0 = 1; break;

	case 2: iVar0 = 2; break;
	}
	if (iVar0 < -1 && iVar0 > 3) {
		return;
	}
	iVar1 = Global_45863[iVar0 /*120*/] - 1 - iParam1;
	while (iVar1 >= 16) {
		iVar1 -= 16;
	}
	iVar2 = iVar1;
	iVar3 = Global_45863[iVar0 /*120*/].f_18[iVar2];
	iVar4 = Global_45863[iVar0 /*120*/].f_1[iVar2];
	if (iVar4 < 0 || iVar3 < 0 || iVar4 >= 9 || iVar3 >= 122) {
		return;
	}
	iVar5 = Global_40250[iVar3 /*46*/].f_32[iVar4];
	if (Global_36925[iVar5 /*12*/].f_4 == 0) {
		return;
	}
	Global_45863[iVar0 /*120*/].f_35[iVar2] = 1;
	Global_45863[iVar0 /*120*/].f_52[iVar2] = iParam2;
	func_19(iVar3, iParam2);
}

// Position - 0x1DB8
void func_19(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!Global_40250[iParam0 /*46*/] && !Global_40250[iParam0 /*46*/].f_1) {
		return;
	}
	iVar0 = Global_40250[iParam0 /*46*/].f_42 - 1;
	if (iVar0 < 0) {
		return;
	}
	iVar1 = Global_40250[iParam0 /*46*/].f_32[iVar0];
	if (iParam1 >= Global_36925[iVar1 /*12*/].f_4) {
		return;
	}
	iVar2 = Global_36925[iVar1 /*12*/].f_5[iParam1 /*4*/].f_1;
	iVar3 = 0;
	if (Global_40250[iParam0 /*46*/].f_31 < Global_40250[iParam0 /*46*/].f_30 - 1) {
		iVar4 = Global_40250[iParam0 /*46*/].f_8[Global_40250[iParam0 /*46*/].f_31];
		if (iVar2 == iVar4) {
			iVar3 = 1;
		}
	}
	if (!iVar3) {
		if (iVar2 > -1) {
			func_29(iParam0, iVar2);
			iVar5 = Global_40250[iParam0 /*46*/].f_2;
			iVar6 = 0;
			iVar7 = Global_36925[iVar2 /*12*/].f_2;
			iVar6 = 0;
			while (iVar6 < iVar5) {
				if (iVar6 != iVar7) {
					func_23(Global_40250[iParam0 /*46*/].f_3[iVar6], iParam0, 0, 0, 0);
				}
				iVar6++;
			}
		}
	}
	if (Global_36925[iVar1 /*12*/].f_5[iParam1 /*4*/].f_3 > -1) {
		func_20(Global_36925[iVar1 /*12*/].f_5[iParam1 /*4*/].f_3, 0);
	}
	if (Global_36925[iVar1 /*12*/].f_5[iParam1 /*4*/].f_2) {
		Global_40250[iParam0 /*46*/].f_1 = 1;
	}
	else if (iVar2 > -1) {
		Global_40250[iParam0 /*46*/].f_45 = Global_36925[iVar2 /*12*/].f_10;
		Global_40250[iParam0 /*46*/].f_43 = Global_36925[iVar2 /*12*/].f_11;
	}
	else {
		Global_40250[iParam0 /*46*/].f_45 = 0;
	}
	if (Global_40250[iParam0 /*46*/].f_43 < 30000) {
		Global_40250[iParam0 /*46*/].f_43 = 30000;
	}
}

// Position - 0x1F5B
void func_20(int iParam0, int iParam1) {
	Global_36916 = 1;
	if (!Global_40250[iParam0 /*46*/] && !Global_40250[iParam0 /*46*/].f_1) {
		Global_40250[iParam0 /*46*/] = 1;
		func_22(iParam0, iParam1);
	}
	else {
		func_21(iParam0);
		func_20(iParam0, iParam1);
	}
}

// Position - 0x1FA2
void func_21(int iParam0) {
	Global_40250[iParam0 /*46*/] = 0;
	Global_40250[iParam0 /*46*/].f_31 = 0;
	Global_40250[iParam0 /*46*/].f_42 = 0;
	Global_40250[iParam0 /*46*/].f_45 = 0;
	Global_40250[iParam0 /*46*/].f_43 = 0;
	Global_40250[iParam0 /*46*/].f_1 = 0;
}

// Position - 0x1FE4
void func_22(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!Global_40250[iParam0 /*46*/] && !Global_40250[iParam0 /*46*/].f_1) {
		return;
	}
	if (Global_40250[iParam0 /*46*/].f_31 == Global_40250[iParam0 /*46*/].f_30) {
		iVar0 = Global_40250[iParam0 /*46*/].f_42 - 1;
		if (iVar0 < 0) {
			return;
		}
		if (Global_36925[Global_40250[iParam0 /*46*/].f_32[iVar0] /*12*/].f_4 == 0) {
			Global_40250[iParam0 /*46*/].f_1 = 1;
		}
		return;
	}
	if (Global_40250[iParam0 /*46*/].f_1) {
		return;
	}
	iVar1 = Global_40250[iParam0 /*46*/].f_8[Global_40250[iParam0 /*46*/].f_31];
	Global_40250[iParam0 /*46*/].f_31++;
	func_29(iParam0, iVar1);
	Global_40250[iParam0 /*46*/].f_45 = Global_36925[iVar1 /*12*/].f_10;
	Global_40250[iParam0 /*46*/].f_43 = Global_36925[iVar1 /*12*/].f_11;
	iVar2 = Global_40250[iParam0 /*46*/].f_2;
	func_23(Global_36925[iVar1 /*12*/].f_3, iParam0, 0, 0, iParam1);
	iVar3 = 0;
	while (iVar3 < iVar2) {
		if (Global_40250[iParam0 /*46*/].f_3[iVar3] != Global_36925[iVar1 /*12*/].f_2 &&
			Global_40250[iParam0 /*46*/].f_3[iVar3] != Global_36925[iVar1 /*12*/].f_3) {
			func_23(Global_40250[iParam0 /*46*/].f_3[iVar3], iParam0, 0, 0, iParam1);
		}
		iVar3++;
	}
	if (Global_40250[iParam0 /*46*/].f_31 == Global_40250[iParam0 /*46*/].f_30) {
		if (Global_36925[Global_40250[iParam0 /*46*/].f_32[Global_40250[iParam0 /*46*/].f_42 - 1] /*12*/].f_4 == 0) {
			Global_40250[iParam0 /*46*/].f_1 = 1;
			return;
		}
	}
}

// Position - 0x2180
void func_23(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;

	if (iParam0 >= 3) {
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!iParam2) {
		iVar19 = Global_40250[iParam1 /*46*/].f_42 - 1;
		if (iVar19 < 0) {
			return;
		}
		iVar20 = Global_40250[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = {func_28(Global_36925[iVar20 /*12*/].f_1)};
		if (Global_36925[iVar20 /*12*/].f_2 == iParam0 && Global_36925[iVar20 /*12*/].f_3 != iParam0) {
			return;
		}
		iVar1 = Global_36925[iVar20 /*12*/].f_2;
		iVar0 = Global_45863[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16) {
			iVar0 -= 16;
			bVar21 = true;
		}
		if (bVar21) {
			if (!Global_45863[iParam0 /*120*/].f_69[iVar0]) {
				switch (iParam0) {
				case 0:
					Global_36917--;
					if (Global_36917 < 0) {
						Global_36917 = 0;
					}
					break;

				case 1:
					Global_36918--;
					if (Global_36918 < 0) {
						Global_36918 = 0;
					}
					break;

				case 2:
					Global_36919--;
					if (Global_36919 < 0) {
						Global_36919 = 0;
					}
					break;
				}
			}
		}
		Global_45863[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_45863[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_45863[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45863[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_45863[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45863[iParam0 /*120*/]++;
	}
	else {
		iVar0 = Global_45863[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16) {
			iVar0 -= 16;
			bVar22 = true;
		}
		if (bVar22) {
			if (!Global_45863[iParam0 /*120*/].f_69[iVar0]) {
				switch (iParam0) {
				case 0:
					Global_36917--;
					if (Global_36917 < 0) {
						Global_36917 = 0;
					}
					break;

				case 1:
					Global_36918--;
					if (Global_36918 < 0) {
						Global_36918 = 0;
					}
					break;

				case 2:
					Global_36919--;
					if (Global_36919 < 0) {
						Global_36919 = 0;
					}
					break;
				}
			}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7) {
			if (Global_46225[iVar24 /*203*/].f_1 == iParam1 && Global_46225[iVar24 /*203*/].f_9 > 0) {
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1) {
			return;
		}
		Global_45863[iParam0 /*120*/].f_18[iVar0] = Global_46225[iVar23 /*203*/].f_1;
		Global_45863[iParam0 /*120*/].f_1[iVar0] = Global_46225[iVar23 /*203*/].f_9 - 1;
		Global_45863[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45863[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_45863[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45863[iParam0 /*120*/]++;
		iVar25 = Global_45863[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_46225[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_36925[iVar26 /*12*/].f_2;
		if (Global_46225[iVar23 /*203*/].f_10[Global_46225[iVar23 /*203*/].f_9 - 1 /*48*/].f_1) {
			MemCopy(&Var3, {Global_46225[iVar23 /*203*/].f_10[Global_46225[iVar23 /*203*/].f_9 - 1 /*48*/].f_2}, 16);
		}
		else {
			Var3 = {func_28(Global_36925[iVar26 /*12*/].f_1)};
		}
	}
	if (!iParam4) {
		if (!Global_45863[iParam0 /*120*/].f_69[iVar0] && !iParam3) {
			switch (iParam0) {
			case 0: func_24(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); break;

			case 1:
				if (iVar2 == 249) {
					func_24(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				else {
					func_24(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				break;

			case 2: func_24(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); break;
			}
		}
	}
}

// Position - 0x2555
void func_24(int iParam0, int iParam1, int iParam2, char *sParam3, char *sParam4, char *sParam5, char *sParam6,
			 char *sParam7, char *sParam8, char *sParam9, char *sParam10, char *sParam11, char *sParam12,
			 char *sParam13) {
	int iVar0;
	bool bVar1;
	char cVar2[64];

	if (cutscene::is_cutscene_playing()) {
		return;
	}
	iVar0 = func_73();
	bVar1 = false;
	StringCopy(&cVar2, func_27(iParam1, &bVar1), 64);
	if (iVar0 == iParam0) {
		switch (iParam2) {
		case 72: ui::_set_notification_text_entry("PROPR_INCEMAIL1"); break;

		case 73: ui::_set_notification_text_entry("PROPR_INCEMAIL3"); break;

		case 74: ui::_set_notification_text_entry("PROPR_INCEMAIL2"); break;

		default:
			ui::_set_notification_text_entry(sParam3);
			if (!gameplay::is_string_null_or_empty(sParam4)) {
				ui::add_text_component_substring_text_label(sParam4);
			}
			if (!gameplay::is_string_null_or_empty(sParam5)) {
				ui::add_text_component_substring_text_label(sParam5);
			}
			if (!gameplay::is_string_null_or_empty(sParam6)) {
				ui::add_text_component_substring_text_label(sParam6);
			}
			if (!gameplay::is_string_null_or_empty(sParam7)) {
				ui::add_text_component_substring_text_label(sParam7);
			}
			if (!gameplay::is_string_null_or_empty(sParam8)) {
				ui::add_text_component_substring_text_label(sParam8);
			}
			if (!gameplay::is_string_null_or_empty(sParam9)) {
				ui::add_text_component_substring_text_label(sParam9);
			}
			if (!gameplay::is_string_null_or_empty(sParam10)) {
				ui::add_text_component_substring_text_label(sParam10);
			}
			if (!gameplay::is_string_null_or_empty(sParam11)) {
				ui::add_text_component_substring_text_label(sParam11);
			}
			if (!gameplay::is_string_null_or_empty(sParam12)) {
				ui::add_text_component_substring_text_label(sParam12);
			}
			if (!gameplay::is_string_null_or_empty(sParam13)) {
				ui::add_text_component_substring_text_label(sParam13);
			}
			break;
		}
		if (bVar1) {
			func_25(ui::_set_notification_message(&cVar2, &cVar2, 0, 2, ui::_get_label_text(func_26(iParam1)), 0));
		}
		else {
			func_25(ui::_set_notification_message("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2,
												  ui::_get_label_text(func_26(iParam1)), 0));
		}
		switch (Global_14443) {
		case 0:
			StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
			Global_36917++;
			if (Global_36917 > 16) {
				Global_36917 = 16;
			}
			break;

		case 2:
			StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
			Global_36919++;
			if (Global_36919 > 16) {
				Global_36919 = 16;
			}
			break;

		case 1:
			StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
			Global_36918++;
			if (Global_36918 > 16) {
				Global_36918 = 16;
			}
			break;

		default: StringCopy(&Global_14432, "Phone_SoundSet_Default", 24); break;
		}
		audio::play_sound_frontend(-1, "Notification", &Global_14432, 1);
	}
}

// Position - 0x273D
void func_25(var uParam0) {
	Global_36920[Global_36924] = uParam0;
	Global_16803 = 1;
	Global_16802 = uParam0;
	Global_36924++;
	if (Global_36924 == 3) {
		Global_36924 = 0;
	}
}

// Position - 0x276B
char *func_26(int iParam0) {
	switch (iParam0) {
	case 0: return "EMSTR_0";

	case 3: return "EMSTR_3";

	case 1: return "EMSTR_6";

	case 2: return "EMSTR_9";

	case 4: return "EMSTR_12";

	case 5: return "EMSTR_29";

	case 6: return "EMSTR_36";

	case 7: return "EMSTR_39";

	case 8: return "EMSTR_52";

	case 9: return "EMSTR_55";

	case 10: return "EMSTR_58";

	case 11: return "EMSTR_78";

	case 12: return "EMSTR_81";

	case 13: return "EMSTR_84";

	case 14: return "EMSTR_87";

	case 15: return "EMSTR_106";

	case 16: return "EMSTR_114";

	case 17: return "EMSTR_142";

	case 18: return "EMSTR_145";

	case 19: return "EMSTR_152";

	case 20: return "EMSTR_157";

	case 21: return "EMSTR_163";

	case 22: return "EMSTR_182";

	case 23: return "EMSTR_187";

	case 24: return "EMSTR_190";

	case 25: return "EMSTR_206";

	case 26: return "EMSTR_219";

	case 27: return "EMSTR_226";

	case 28: return "EMSTR_233";

	case 29: return "EMSTR_242";

	case 30: return "EMSTR_249";

	case 31: return "EMSTR_262";

	case 32: return "EMSTR_269";

	case 33: return "EMSTR_319";

	case 34: return "EMSTR_340";

	case 35: return "EMSTR_348";

	case 36: return "EMSTR_182";

	case 37: return "EMSTR_357";

	case 38: return "EMSTR_360";

	case 39: return "EMSTR_369";

	case 40: return "EMSTR_376";

	case 41: return "EMSTR_379";

	case 42: return "EMSTR_382";

	case 43: return "EMSTR_384";

	case 44: return "EMSTR_387";

	case 45: return "EMSTR_390";

	case 46: return "EMSTR_393";

	case 47: return "EMSTR_396";

	case 48: return "EMSTR_399";

	case 49: return "EMSTR_402";

	case 50: return "EMSTR_405";

	case 51: return "EMSTR_408";

	case 52: return "EMSTR_411";

	case 53: return "EMSTR_414";

	case 54: return "EMSTR_465";

	case 55: return "EMSTR_468";

	case 56: return "EMSTR_489";

	case 57: return "EMSTR_492";

	case 58: return "EMSTR_495";

	case 59: return "EMSTR_498";

	case 60: return "EMSTR_501";

	case 61: return "EMSTR_504";

	case 62: return "EMSTR_507";

	case 63: return "EMSTR_640";

	case 64: return "EMSTR_643";

	case 65: return "EMSTR_652";

	default:
	}
	return "NULL";
}

// Position - 0x2AD6
char *func_27(int iParam0, int *iParam1) {
	*iParam1 = 1;
	switch (iParam0) {
	case 0: return ui::_get_label_text(&Global_101700.f_27009[0 /*29*/].f_7);

	case 1: return ui::_get_label_text(&Global_101700.f_27009[1 /*29*/].f_7);

	case 2: return ui::_get_label_text(&Global_101700.f_27009[2 /*29*/].f_7);

	case 7: return ui::_get_label_text(&Global_101700.f_27009[12 /*29*/].f_7);

	case 4: return ui::_get_label_text(&Global_101700.f_27009[60 /*29*/].f_7);

	case 6: return ui::_get_label_text(&Global_101700.f_27009[62 /*29*/].f_7);

	case 3: return ui::_get_label_text(&Global_101700.f_27009[14 /*29*/].f_7);

	case 16: return ui::_get_label_text(&Global_101700.f_27009[97 /*29*/].f_7);

	case 19: return ui::_get_label_text(&Global_101700.f_27009[99 /*29*/].f_7);

	case 15: return ui::_get_label_text(&Global_101700.f_27009[96 /*29*/].f_7);

	case 63: return "CHAR_CARSITE2";

	case 64: return "CHAR_BOATSITE";

	case 8: return "CHAR_BANK_MAZE";

	case 9: return "CHAR_BANK_FLEECA";

	case 10: return "CHAR_BANK_BOL";

	case 21: return "CHAR_MINOTAUR";

	case 25: return ui::_get_label_text(&Global_101700.f_27009[15 /*29*/].f_7);

	case 26: return ui::_get_label_text(&Global_101700.f_27009[30 /*29*/].f_7);

	case 27: return ui::_get_label_text(&Global_101700.f_27009[17 /*29*/].f_7);

	case 29: return ui::_get_label_text(&Global_101700.f_27009[20 /*29*/].f_7);

	case 30: return ui::_get_label_text(&Global_101700.f_27009[43 /*29*/].f_7);

	case 31: return ui::_get_label_text(&Global_101700.f_27009[44 /*29*/].f_7);

	case 32: return ui::_get_label_text(&Global_101700.f_27009[19 /*29*/].f_7);

	case 34: return ui::_get_label_text(&Global_101700.f_27009[40 /*29*/].f_7);

	case 36: return ui::_get_label_text("CELL_E_381");

	case 38: return ui::_get_label_text(&Global_101700.f_27009[64 /*29*/].f_7);

	case 5: return "CHAR_EPSILON";

	case 13: return "CHAR_MILSITE";

	case 11: return "CHAR_CARSITE";

	case 14: return "CHAR_BOATSITE";

	case 12: return "CHAR_PLANESITE";

	case 24: return "CHAR_DR_FRIEDLANDER";

	case 55: return "CHAR_CARSITE2";

	case 54: return "CHAR_BIKESITE";

	case 39: return ui::_get_label_text(&Global_101700.f_27009[122 /*29*/].f_7);

	case 40: return ui::_get_label_text(&Global_101700.f_27009[125 /*29*/].f_7);

	case 41: return ui::_get_label_text(&Global_101700.f_27009[113 /*29*/].f_7);

	case 42: return ui::_get_label_text(&Global_101700.f_27009[126 /*29*/].f_7);

	case 43: return ui::_get_label_text(&Global_101700.f_27009[127 /*29*/].f_7);

	case 44: return ui::_get_label_text(&Global_101700.f_27009[124 /*29*/].f_7);

	case 45: return ui::_get_label_text(&Global_101700.f_27009[114 /*29*/].f_7);

	case 46: return ui::_get_label_text(&Global_101700.f_27009[115 /*29*/].f_7);

	case 47: return ui::_get_label_text(&Global_101700.f_27009[116 /*29*/].f_7);

	case 48: return ui::_get_label_text(&Global_101700.f_27009[123 /*29*/].f_7);

	case 49: return ui::_get_label_text(&Global_101700.f_27009[117 /*29*/].f_7);

	case 50: return ui::_get_label_text(&Global_101700.f_27009[118 /*29*/].f_7);

	case 51: return ui::_get_label_text(&Global_101700.f_27009[119 /*29*/].f_7);

	case 52: return ui::_get_label_text(&Global_101700.f_27009[120 /*29*/].f_7);

	case 53: return ui::_get_label_text(&Global_101700.f_27009[121 /*29*/].f_7);

	default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

// Position - 0x2F29
struct<16> func_28(int iParam0) {
	struct<16> Var0;
	struct<16> Var16;

	if (iParam0 > -1) {
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var16, "FAIL", 64);
	return Var16;
}

//Position - 0x2F5A
int func_29(int iParam0, int iParam1)
{
	if (Global_40250[iParam0 /*46*/].f_42 >= 9) {
		return 0;
	}
	Global_40250[iParam0 /*46*/].f_32[Global_40250[iParam0 /*46*/].f_42] = iParam1;
	Global_40250[iParam0 /*46*/].f_42++;
	return 1;
}

// Position - 0x2F9F
int func_30(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = -1;
	switch (iParam0) {
	case 0: iVar0 = 0; break;

	case 1: iVar0 = 1; break;

	case 2: iVar0 = 2; break;
	}
	if (iVar0 == -1) {
		return 0;
	}
	iVar1 = Global_45863[iVar0 /*120*/] - 1 - iParam1;
	while (iVar1 >= 16) {
		iVar1 -= 16;
	}
	iVar2 = iVar1;
	if (!Global_45863[iVar0 /*120*/].f_86[iVar2]) {
		iVar3 = Global_45863[iVar0 /*120*/].f_18[iVar2];
		iVar4 = Global_45863[iVar0 /*120*/].f_1[iVar2];
		iVar5 = Global_40250[iVar3 /*46*/].f_32[iVar4];
		if (Global_36925[iVar5 /*12*/].f_4 == 0) {
			return 0;
		}
		if (Global_45863[iVar0 /*120*/].f_35[iVar2] == 1) {
			return 0;
		}
		if (!func_31(iVar0, iVar2)) {
			return 0;
		}
		return 1;
	}
	return 0;
}

// Position - 0x307E
int func_31(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 >= 3) {
		return 0;
	}
	iVar0 = Global_45863[iParam0 /*120*/].f_1[iParam1];
	iVar1 = Global_45863[iParam0 /*120*/].f_18[iParam1];
	if (!(Global_40250[iVar1 /*46*/] && !Global_40250[iVar1 /*46*/].f_1)) {
		return 0;
	}
	if (iVar0 != Global_40250[iVar1 /*46*/].f_42 - 1) {
		return 0;
	}
	iVar2 = Global_40250[iVar1 /*46*/].f_32[Global_40250[iVar1 /*46*/].f_42 - 1];
	if (Global_36925[iVar2 /*12*/].f_4 > 0) {
		return 1;
	}
	return 0;
}

// Position - 0x310E
void func_32() {
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		audio::play_sound_frontend(-1, "Menu_Accept", &Global_14432, 1);
		func_33();
	}
}

// Position - 0x3134
void func_33() {
	if (func_2()) {
		mobile::_move_finger(5);
	}
}

// Position - 0x3148
int func_34(int iParam0) {
	int iVar0;

	iVar0 = -1;
	switch (iParam0) {
	case 0: iVar0 = 0; break;

	case 1: iVar0 = 1; break;

	case 2: iVar0 = 2; break;
	}
	return Global_45863[iVar0 /*120*/];
}

// Position - 0x3185
void func_35(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<16> Var9;
	struct<16> Var25;

	iVar0 = -1;
	switch (iParam1) {
	case 0: iVar0 = 0; break;

	case 1: iVar0 = 1; break;

	case 2: iVar0 = 2; break;
	}
	if (iVar0 == -1) {
		return;
	}
	iVar1 = Global_45863[iVar0 /*120*/] - 1 - iParam2;
	while (iVar1 >= 16) {
		iVar1 -= 16;
	}
	iVar2 = iVar1;
	if (!Global_45863[iVar0 /*120*/].f_86[iVar2]) {
		iVar3 = Global_45863[iVar0 /*120*/].f_18[iVar2];
		iVar4 = Global_45863[iVar0 /*120*/].f_1[iVar2];
		iVar5 = Global_40250[iVar3 /*46*/].f_32[iVar4];
		if (Global_36925[iVar5 /*12*/].f_4 == 0) {
			return;
		}
		iVar6 = 0;
		iVar7 = Global_36925[iVar5 /*12*/].f_4;
		if (iVar7 > 1) {
			iVar7 = 1;
		}
		iVar6 = 0;
		while (iVar6 < iVar7) {
			iVar8 = Global_36925[iVar5 /*12*/].f_5[iVar6 /*4*/].f_1;
			Var9 = {func_28(Global_36925[iVar8 /*12*/].f_1)};
			Var25 = {func_28(Global_36925[iVar8 /*12*/].f_1)};
			graphics::_push_scaleform_movie_function(iParam0, "SET_DATA_SLOT");
			graphics::_push_scaleform_movie_function_parameter_int(9);
			graphics::_push_scaleform_movie_function_parameter_int(0);
			func_7("");
			func_7("");
			func_7("EM_RESPONSE_NEW");
			func_7(&Var25);
			func_7(func_37(Global_36925[iVar8 /*12*/].f_2));
			func_36(iVar8, Global_36925[iVar8 /*12*/].f_2);
			graphics::_pop_scaleform_movie_function_void();
			iVar6++;
		}
	}
}

// Position - 0x32EE
void func_36(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0) {
	case 55:
	case 57:
	case 58:
	case 59:
	case 62:
	case 63:
	case 40:
	case 41:
	case 42:
		graphics::_push_scaleform_movie_function_parameter_string("EmailAds_Elitas_Travel");
		graphics::_push_scaleform_movie_function_parameter_bool(1);
		return;

	case 37:
	case 38:
	case 39:
	case 60:
	case 61:
	case 56:
		graphics::_push_scaleform_movie_function_parameter_string("EmailAds_Dock_Tease");
		graphics::_push_scaleform_movie_function_parameter_bool(1);
		return;

	case 34:
	case 35:
	case 36:
		graphics::_push_scaleform_movie_function_parameter_string("EmailAds_Warstock");
		graphics::_push_scaleform_movie_function_parameter_bool(1);
		return;

	case 31:
	case 32:
	case 33:
		graphics::_push_scaleform_movie_function_parameter_string("EmailAds_Legendary_Motorsport");
		graphics::_push_scaleform_movie_function_parameter_bool(1);
		return;

	default:
	}
	switch (iParam1) {
	case 13:
		graphics::_push_scaleform_movie_function_parameter_string("EmailAds_Warstock");
		graphics::_push_scaleform_movie_function_parameter_bool(1);
		return;

	case 15:
		graphics::_push_scaleform_movie_function_parameter_string("EmailAds_LS_Customs");
		graphics::_push_scaleform_movie_function_parameter_bool(1);
		return;

	case 19:
		graphics::_push_scaleform_movie_function_parameter_string("EmailAds_LS_Tourist_Info");
		graphics::_push_scaleform_movie_function_parameter_bool(1);
		return;

	default:
	}
}

// Position - 0x3408
char *func_37(int iParam0) {
	switch (iParam0) {
	case 0: return "EMSTR_2";

	case 3: return "EMSTR_5";

	case 1: return "EMSTR_8";

	case 2: return "EMSTR_11";

	case 4: return "EMSTR_14";

	case 5: return "EMSTR_31";

	case 6: return "EMSTR_38";

	case 7: return "EMSTR_41";

	case 8: return "EMSTR_54";

	case 9: return "EMSTR_57";

	case 10: return "EMSTR_60";

	case 11: return "EMSTR_80";

	case 12: return "EMSTR_83";

	case 13: return "EMSTR_86";

	case 14: return "EMSTR_89";

	case 15: return "EMSTR_106";

	case 16: return "EMSTR_116";

	case 17: return "EMSTR_144";

	case 18: return "EMSTR_147";

	case 19: return "EMSTR_154";

	case 20: return "EMSTR_159";

	case 21: return "EMSTR_165";

	case 22: return "EMSTR_184";

	case 23: return "EMSTR_189";

	case 24: return "EMSTR_192";

	case 25: return "EMSTR_208";

	case 26: return "EMSTR_221";

	case 27: return "EMSTR_228";

	case 28: return "EMSTR_235";

	case 29: return "EMSTR_244";

	case 30: return "EMSTR_251";

	case 31: return "EMSTR_264";

	case 32: return "EMSTR_271";

	case 33: return "EMSTR_321";

	case 34: return "EMSTR_342";

	case 35: return "EMSTR_350";

	case 36: return "EMSTR_354";

	case 37: return "EMSTR_359";

	case 38: return "EMSTR_362";

	case 39: return "EMSTR_371";

	case 40: return "EMSTR_378";

	case 41: return "EMSTR_381";

	case 42: return "EMSTR_382";

	case 43: return "EMSTR_386";

	case 44: return "EMSTR_389";

	case 45: return "EMSTR_392";

	case 46: return "EMSTR_395";

	case 47: return "EMSTR_398";

	case 48: return "EMSTR_401";

	case 49: return "EMSTR_404";

	case 50: return "EMSTR_407";

	case 51: return "EMSTR_410";

	case 52: return "EMSTR_413";

	case 53: return "EMSTR_416";

	case 54: return "EMSTR_467";

	case 55: return "EMSTR_470";

	case 56: return "EMSTR_491";

	case 57: return "EMSTR_494";

	case 58: return "EMSTR_497";

	case 59: return "EMSTR_500";

	case 60: return "EMSTR_503";

	case 61: return "EMSTR_506";

	case 62: return "EMSTR_509";

	case 63: return "EMSTR_642";

	case 64: return "EMSTR_645";

	case 65: return "EMSTR_654";

	default:
	}
	return "NULL";
}

// Position - 0x3773
void func_38(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x378A
void func_39(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31) {
		iVar0 -= 32;
		iVar1++;
	}
	if (iVar1 < 3) {
		gameplay::set_bit(&Global_101700.f_19369.f_150[iVar1], iVar0);
	}
}

// Position - 0x37CC
void func_40(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8) {
	func_41(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x37EE
void func_41(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
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
		func_42();
	}
}

// Position - 0x39C2
void func_42() {
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

// Position - 0x3AE2
int func_43(char *sParam0) {
	if (gameplay::are_strings_equal(sParam0, &Global_100345)) {
		return 1;
	}
	if (func_44(sParam0)) {
		return 0;
	}
	return 2;
}

// Position - 0x3B09
bool func_44(char *sParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145) {
		if (gameplay::are_strings_equal(sParam0, &Global_101700.f_19369[iVar0 /*16*/])) {
			return true;
		}
		iVar0++;
	}
	return false;
}

// Position - 0x3B44
int func_45(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31) {
		iVar0 -= 32;
		iVar1++;
	}
	if (iVar1 < 3) {
		return gameplay::is_bit_set(Global_101700.f_19369.f_150[iVar1], iVar0);
	}
	return 0;
}

// Position - 0x3B87
char *func_46(int iParam0, int iParam1) {
	int iVar0;
	var *uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	iVar0 = -1;
	switch (iParam0) {
	case 0: iVar0 = 0; break;

	case 1: iVar0 = 1; break;

	case 2: iVar0 = 2; break;
	}
	if (iVar0 == -1) {
		return "";
	}
	iVar4 = func_48(iVar0, iParam1, &iVar2, &iVar3, &uVar1);
	uVar1 = uVar1;
	iVar5 = -1;
	bVar6 = Global_45863[iVar0 /*120*/].f_86[iVar4];
	if (!bVar6) {
		iVar5 = Global_40250[iVar2 /*46*/].f_32[iVar3];
	}
	else {
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7) {
			if (Global_46225[iVar8 /*203*/].f_1 == iVar2) {
				iVar7 = iVar8;
			}
			iVar8++;
		}
		iVar5 = Global_46225[iVar7 /*203*/].f_10[iVar3 /*48*/];
	}
	return func_47(iVar5);
}

// Position - 0x3C47
char *func_47(int iParam0) {
	switch (iParam0) {
	case 7: return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";

	case 8: return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";

	case 9: return "WWW_EPSILONPROGRAM_COM_S_STORE";

	case 10: return "WWW_EPSILONPROGRAM_COM";

	case 11: return "WWW_EPSILONPROGRAM_COM";

	case 16: return "WWW_EPSILONPROGRAM_COM";

	case 17: return "WWW_MAZE_D_BANK_COM";

	case 18: return "WWW_FLEECA_COM";

	case 19: return "WWW_MAZE_D_BANK_COM";

	case 20: return "WWW_MAZE_D_BANK_COM";

	case 21: return "WWW_MAZE_D_BANK_COM";

	case 22: return "WWW_MAZE_D_BANK_COM";

	case 23: return "WWW_THEBANKOFLIBERTY_COM";

	case 24: return "WWW_FLEECA_COM";

	case 25: return "WWW_FLEECA_COM";

	case 26: return "WWW_FLEECA_COM";

	case 27: return "WWW_FLEECA_COM";

	case 28: return "WWW_THEBANKOFLIBERTY_COM";

	case 29: return "WWW_THEBANKOFLIBERTY_COM";

	case 30: return "WWW_THEBANKOFLIBERTY_COM";

	case 43: return "WWW_LCN_D_EXCHANGE_COM";

	case 47: return "WWW_AMMUNATION_NET";

	case 48: return "WWW_AMMUNATION_NET";

	case 49: return "WWW_AMMUNATION_NET";

	case 50: return "WWW_AMMUNATION_NET";

	case 51: return "WWW_AMMUNATION_NET";

	case 52: return "WWW_AMMUNATION_NET";

	case 53: return "WWW_AMMUNATION_NET";

	case 54: return "WWW_AMMUNATION_NET";

	case 55: return "WWW_ELITASTRAVEL_COM";

	case 56: return "WWW_DOCKTEASE_COM";

	case 57: return "WWW_ELITASTRAVEL_COM";

	case 58: return "WWW_ELITASTRAVEL_COM";

	case 59: return "WWW_ELITASTRAVEL_COM";

	case 60: return "WWW_DOCKTEASE_COM";

	case 61: return "WWW_DOCKTEASE_COM";

	case 62: return "WWW_ELITASTRAVEL_COM";

	case 63: return "WWW_ELITASTRAVEL_COM";

	case 68: return "WWW_AMMUNATION_NET";

	case 84: return "WWW_EPSILONPROGRAM_COM_S_TRACT";

	case 155: return "WWW_LEGENDARYMOTORSPORT_NET";

	case 156: return "WWW_LEGENDARYMOTORSPORT_NET";

	case 157: return "WWW_LEGENDARYMOTORSPORT_NET";

	case 181: return "WWW_EPSILONPROGRAM_COM_S_MAKEDONATION";

	case 194: return "WWW_HUSHSMUSH_COM";

	case 195: return "WWW_HUSHSMUSH_COM";

	case 196: return "WWW_HUSHSMUSH_COM";

	case 197: return "WWW_HUSHSMUSH_COM";

	case 198: return "WWW_HUSHSMUSH_COM";

	case 244: return "WWW_MYDIVINEWITHIN_COM";

	case 245: return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";

	case 246: return "WWW_THECHILDRENOFTHEMOUNTAIN_COM";

	case 270: return "WWW_AMMUNATION_NET";

	case 271: return "WWW_AMMUNATION_NET";

	case 272: return "WWW_AMMUNATION_NET";

	case 273: return "WWW_AMMUNATION_NET";

	case 274: return "WWW_AMMUNATION_NET";

	case 275: return "WWW_AMMUNATION_NET";

	case 276: return "WWW_AMMUNATION_NET";

	default:
	}
	return "NULL";
}

// Position - 0x3F57
int func_48(int iParam0, int iParam1, var *uParam2, var *uParam3, var *uParam4) {
	int iVar0;
	int iVar1;

	iVar0 = Global_45863[iParam0 /*120*/] - 1 - iParam1;
	while (iVar0 >= 16) {
		iVar0 -= 16;
	}
	iVar1 = iVar0;
	*uParam2 = Global_45863[iParam0 /*120*/].f_18[iVar1];
	*uParam3 = Global_45863[iParam0 /*120*/].f_1[iVar1];
	*uParam4 = Global_45863[iParam0 /*120*/].f_35[iVar1];
	return iVar1;
}

// Position - 0x3FB4
int func_49(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	var *uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	iVar0 = -1;
	switch (iParam0) {
	case 0: iVar0 = 0; break;

	case 1: iVar0 = 1; break;

	case 2: iVar0 = 2; break;
	}
	if (iVar0 == -1) {
		return 0;
	}
	iVar4 = func_48(iVar0, iParam1, &iVar1, &iVar2, &uVar3);
	uVar3 = uVar3;
	iVar5 = -1;
	bVar6 = Global_45863[iVar0 /*120*/].f_86[iVar4];
	if (!bVar6) {
		iVar5 = Global_40250[iVar1 /*46*/].f_32[iVar2];
	}
	else {
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7) {
			if (Global_46225[iVar8 /*203*/].f_1 == iVar1) {
				iVar7 = iVar8;
			}
			iVar8++;
		}
		iVar5 = Global_46225[iVar7 /*203*/].f_10[iVar2 /*48*/];
	}
	return func_50(iVar5);
}

// Position - 0x4072
int func_50(int iParam0) {
	switch (iParam0) {
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
	case 43:
	case 47:
	case 48:
	case 49:
	case 50:
	case 51:
	case 52:
	case 53:
	case 54:
	case 55:
	case 56:
	case 57:
	case 58:
	case 59:
	case 60:
	case 61:
	case 62:
	case 63:
	case 68:
	case 84:
	case 155:
	case 156:
	case 157:
	case 181:
	case 194:
	case 195:
	case 196:
	case 197:
	case 198:
	case 244:
	case 245:
	case 246:
	case 270:
	case 271:
	case 272:
	case 273:
	case 274:
	case 275:
	case 276: return 1;

	default:
	}
	return 0;
}

// Position - 0x41E8
void func_51(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	struct<16> Var7;
	struct<16> Var23;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	struct<16> Var47;
	struct<16> Var63;
	int iVar79;
	int iVar80;

	graphics::_push_scaleform_movie_function(iParam0, "SET_DATA_SLOT_EMPTY");
	graphics::_push_scaleform_movie_function_parameter_int(9);
	graphics::_pop_scaleform_movie_function_void();
	iVar0 = -1;
	switch (iParam1) {
	case 0: iVar0 = 0; break;

	case 1: iVar0 = 1; break;

	case 2: iVar0 = 2; break;
	}
	if (iVar0 == -1) {
		return;
	}
	iVar4 = func_48(iVar0, iParam2, &iVar2, &iVar3, &bVar1);
	bVar5 = Global_45863[iVar0 /*120*/].f_86[iVar4];
	if (!Global_45863[iVar0 /*120*/].f_69[iVar4]) {
		func_55(-1);
	}
	Global_45863[iVar0 /*120*/].f_69[iVar4] = 1;
	if (!bVar5) {
		iVar6 = Global_40250[iVar2 /*46*/].f_32[iVar3];
		Var7 = {func_28(Global_36925[iVar6 /*12*/])};
		Var23 = {func_28(Global_36925[iVar6 /*12*/].f_1)};
		graphics::_push_scaleform_movie_function(iParam0, "SET_DATA_SLOT");
		graphics::_push_scaleform_movie_function_parameter_int(9);
		graphics::_push_scaleform_movie_function_parameter_int(0);
		func_7(func_54(Global_36925[iVar6 /*12*/].f_3));
		func_7(func_54(Global_36925[iVar6 /*12*/].f_2));
		func_7(&Var7);
		func_7(&Var23);
		func_7(func_37(Global_36925[iVar6 /*12*/].f_2));
		func_36(iVar6, Global_36925[iVar6 /*12*/].f_2);
		graphics::_pop_scaleform_movie_function_void();
		if (Global_36925[iVar6 /*12*/].f_4 == 0) {
			func_72(0);
		}
		else if (bVar1 || !func_31(iVar0, iVar4)) {
			func_72(0);
		}
		else {
			func_72(1);
		}
		if (Global_40250[iVar2 /*46*/].f_42 > 1) {
			iVar39 = iVar3;
			iVar40 = iVar3 - 1;
			iVar41 = 0;
			iVar41 = 0;
			while (iVar41 < iVar39) {
				iVar6 = Global_40250[iVar2 /*46*/].f_32[iVar40];
				Var7 = {func_28(Global_36925[iVar6 /*12*/])};
				Var23 = {func_28(Global_36925[iVar6 /*12*/].f_1)};
				iVar42 = func_53(iParam1, Global_36925[iVar6 /*12*/].f_3);
				graphics::_push_scaleform_movie_function(iParam0, "SET_DATA_SLOT");
				graphics::_push_scaleform_movie_function_parameter_int(9);
				graphics::_push_scaleform_movie_function_parameter_int(iVar41 + 1);
				func_7(func_54(iVar42));
				func_7(func_54(Global_36925[iVar6 /*12*/].f_2));
				func_7(&Var7);
				func_7(&Var23);
				func_7(func_37(Global_36925[iVar6 /*12*/].f_2));
				func_36(iVar6, Global_36925[iVar6 /*12*/].f_2);
				graphics::_pop_scaleform_movie_function_void();
				iVar40--;
				iVar41++;
			}
		}
	}
	else {
		iVar43 = -1;
		iVar44 = 0;
		iVar44 = 0;
		while (iVar44 < 7) {
			if (Global_46225[iVar44 /*203*/].f_1 == iVar2) {
				iVar43 = iVar44;
			}
			iVar44++;
		}
		if (iVar43 == -1) {
			return;
		}
		else {
			iVar45 = Global_46225[iVar43 /*203*/].f_10[iVar3 /*48*/];
			iVar46 = Global_46225[iVar43 /*203*/].f_10[iVar3 /*48*/];
			Var47 = {func_28(Global_36925[iVar45 /*12*/])};
			Var63 = {func_28(Global_36925[iVar45 /*12*/].f_1)};
			if (Global_46225[iVar43 /*203*/].f_10[iVar3 /*48*/].f_1) {
				MemCopy(&Var63, {Global_46225[iVar43 /*203*/].f_10[iVar3 /*48*/].f_2}, 16);
			}
			if (Global_36925[iVar45 /*12*/].f_4 == 0) {
				func_72(0);
			}
			else if (bVar1) {
				func_72(0);
			}
			else {
				func_72(1);
			}
			iVar79 = 0;
			iVar79 = func_52(iParam0, Global_46225[iVar43 /*203*/].f_1, iVar3, iVar46);
			if (!iVar79) {
				graphics::_push_scaleform_movie_function(iParam0, "SET_DATA_SLOT");
				graphics::_push_scaleform_movie_function_parameter_int(9);
				graphics::_push_scaleform_movie_function_parameter_int(0);
				func_7(func_54(Global_36925[iVar45 /*12*/].f_3));
				func_7(func_54(Global_36925[iVar45 /*12*/].f_2));
				func_7(&Var47);
				if (Global_46225[iVar43 /*203*/].f_10[iVar3 /*48*/].f_6 > 0) {
					graphics::begin_text_command_scaleform_string(&Var63);
					iVar80 = 0;
					iVar80 = 0;
					while (iVar80 < Global_46225[iVar43 /*203*/].f_10[iVar3 /*48*/].f_6) {
						ui::add_text_component_substring_text_label(
							&Global_46225[iVar43 /*203*/].f_10[iVar3 /*48*/].f_7[iVar80 /*4*/]);
						iVar80++;
					}
					graphics::end_text_command_scaleform_string();
				}
				else {
					func_7(&Var63);
				}
				func_7(func_37(Global_36925[iVar45 /*12*/].f_2));
				func_36(iVar45, Global_36925[iVar45 /*12*/].f_2);
				graphics::_pop_scaleform_movie_function_void();
			}
		}
	}
}

// Position - 0x45D5
int func_52(int iParam0, var uParam1, int iParam2, int iParam3) {
	int iVar0;
	var uVar1;
	int iVar2;
	struct<16> Var3;
	struct<8> Var19;
	int iVar35;
	int iVar36;
	bool bVar37;
	char *sVar38;

	iVar0 = 0;
	uVar1 = uParam1;
	uVar1 = iParam2;
	uVar1 = uVar1;
	iVar2 = 0;
	graphics::_push_scaleform_movie_function(iParam0, "SET_DATA_SLOT_EMPTY");
	graphics::_pop_scaleform_movie_function_void();
	Var3 = {func_28(Global_36925[iParam3 /*12*/])};
	switch (iParam3) {
	case 72: StringCopy(&Var19, "PROPR_INCEMAIL1", 64); break;

	case 73: StringCopy(&Var19, "PROPR_INCEMAIL3", 64); break;

	case 74: StringCopy(&Var19, "PROPR_INCEMAIL2", 64); break;
	}
	graphics::_push_scaleform_movie_function(iParam0, "SET_DATA_SLOT");
	graphics::_push_scaleform_movie_function_parameter_int(9);
	graphics::_push_scaleform_movie_function_parameter_int(iVar2);
	func_7(func_54(Global_36925[iParam3 /*12*/].f_3));
	func_7(func_54(Global_36925[iParam3 /*12*/].f_2));
	func_7(&Var3);
	func_7(&Var19);
	func_7(func_37(Global_36925[iParam3 /*12*/].f_2));
	func_7("");
	graphics::_push_scaleform_movie_function_parameter_int(0);
	graphics::_push_scaleform_movie_function_parameter_bool(1);
	graphics::_pop_scaleform_movie_function_void();
	iVar2++;
	iVar35 = 0;
	while (iVar35 < 16) {
		iVar36 = iVar35;
		bVar37 = false;
		switch (iParam3) {
		case 72:
			if (Global_101700.f_23863[iVar36 /*4*/] == 0) {
				bVar37 = true;
			}
			break;

		case 73:
			if (Global_101700.f_23863[iVar36 /*4*/] == 1) {
				bVar37 = true;
			}
			break;

		case 74:
			if (Global_101700.f_23863[iVar36 /*4*/] == 2) {
				bVar37 = true;
			}
			break;
		}
		if (bVar37) {
			switch (iVar36) {
			case 0: sVar38 = "ACCNA_TOWING"; break;

			case 1: sVar38 = "ACCNA_TAXI_LOT"; break;

			case 2: sVar38 = "ACCNA_ARMS"; break;

			case 3: sVar38 = "ACCNA_SONAR"; break;

			case 4: sVar38 = "ACCNA_CARMOD"; break;

			case 5: sVar38 = "ACCNA_VCINEMA"; break;

			case 6: sVar38 = "ACCNA_DCINEMA"; break;

			case 7: sVar38 = "ACCNA_MCINEMA"; break;

			case 8: sVar38 = "ACCNA_GOLF"; break;

			case 9: sVar38 = "ACCNA_CSCRAP"; break;

			case 10: sVar38 = "ACCNA_SMOKE"; break;

			case 11: sVar38 = "ACCNA_TEQUILA"; break;

			case 12: sVar38 = "ACCNA_PITCHERS"; break;

			case 13: sVar38 = "ACCNA_HEN"; break;

			case 14: sVar38 = "ACCNA_HOOKIES"; break;

			case 15: sVar38 = "ACCNA_STRP"; break;
			}
			graphics::_push_scaleform_movie_function(iParam0, "SET_DATA_SLOT");
			graphics::_push_scaleform_movie_function_parameter_int(9);
			graphics::_push_scaleform_movie_function_parameter_int(iVar2);
			graphics::begin_text_command_scaleform_string("PROPR_INCEMAIL4");
			ui::add_text_component_substring_text_label(sVar38);
			ui::add_text_component_integer(Global_101700.f_23863[iVar36 /*4*/].f_3);
			graphics::end_text_command_scaleform_string();
			graphics::_pop_scaleform_movie_function_void();
			iVar2++;
			iVar0 = 1;
		}
		iVar35++;
	}
	return iVar0;
}

// Position - 0x486E
int func_53(int iParam0, int iParam1) {
	if (iParam1 == 0) {
		if (iParam0 == 1) {
			return 1;
		}
		else if (iParam0 == 2) {
			return 2;
		}
	}
	return iParam1;
}

// Position - 0x4895
char *func_54(int iParam0) {
	switch (iParam0) {
	case 0: return "EMSTR_1";

	case 3: return "EMSTR_4";

	case 1: return "EMSTR_7";

	case 2: return "EMSTR_10";

	case 4: return "EMSTR_13";

	case 5: return "EMSTR_30";

	case 6: return "EMSTR_37";

	case 7: return "EMSTR_40";

	case 8: return "EMSTR_53";

	case 9: return "EMSTR_56";

	case 10: return "EMSTR_59";

	case 11: return "EMSTR_79";

	case 12: return "EMSTR_82";

	case 13: return "EMSTR_85";

	case 14: return "EMSTR_88";

	case 15: return "EMSTR_107";

	case 16: return "EMSTR_115";

	case 17: return "EMSTR_143";

	case 18: return "EMSTR_146";

	case 19: return "EMSTR_153";

	case 20: return "EMSTR_158";

	case 21: return "EMSTR_164";

	case 22: return "EMSTR_183";

	case 23: return "EMSTR_188";

	case 24: return "EMSTR_191";

	case 25: return "EMSTR_207";

	case 26: return "EMSTR_220";

	case 27: return "EMSTR_227";

	case 28: return "EMSTR_234";

	case 29: return "EMSTR_243";

	case 30: return "EMSTR_250";

	case 31: return "EMSTR_263";

	case 32: return "EMSTR_270";

	case 33: return "EMSTR_320";

	case 34: return "EMSTR_341";

	case 35: return "EMSTR_349";

	case 36: return "EMSTR_353";

	case 37: return "EMSTR_358";

	case 38: return "EMSTR_361";

	case 39: return "EMSTR_370";

	case 40: return "EMSTR_377";

	case 41: return "EMSTR_380";

	case 42: return "EMSTR_383";

	case 43: return "EMSTR_385";

	case 44: return "EMSTR_388";

	case 45: return "EMSTR_391";

	case 46: return "EMSTR_394";

	case 47: return "EMSTR_397";

	case 48: return "EMSTR_400";

	case 49: return "EMSTR_403";

	case 50: return "EMSTR_406";

	case 51: return "EMSTR_409";

	case 52: return "EMSTR_412";

	case 53: return "EMSTR_415";

	case 54: return "EMSTR_466";

	case 55: return "EMSTR_469";

	case 56: return "EMSTR_490";

	case 57: return "EMSTR_493";

	case 58: return "EMSTR_496";

	case 59: return "EMSTR_499";

	case 60: return "EMSTR_502";

	case 61: return "EMSTR_505";

	case 62: return "EMSTR_508";

	case 63: return "EMSTR_641";

	case 64: return "EMSTR_644";

	case 65: return "EMSTR_653";

	default:
	}
	return "NULL";
}

// Position - 0x4C00
void func_55(int iParam0) {
	switch (func_73()) {
	case 0:
		Global_36917 += iParam0;
		if (Global_36917 < 0) {
			Global_36917 = 0;
		}
		break;

	case 2:
		Global_36919 += iParam0;
		if (Global_36919 < 0) {
			Global_36919 = 0;
		}
		break;

	case 1:
		Global_36918 += iParam0;
		if (Global_36918 < 0) {
			Global_36918 = 0;
		}
		break;

	default: break;
	}
}

// Position - 0x4C6B
void func_56(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	iVar0 = -1;
	switch (iParam0) {
	case 0: iVar0 = 0; break;

	case 1: iVar0 = 1; break;

	case 2: iVar0 = 2; break;
	}
	if (iVar0 == -1) {
		return;
	}
	iVar1 = Global_45863[iVar0 /*120*/] - 1 - iParam1;
	while (iVar1 >= 16) {
		iVar1 -= 16;
	}
	iVar2 = iVar1;
	iVar3 = Global_45863[iVar0 /*120*/].f_18[iVar2];
	iVar4 = Global_45863[iVar0 /*120*/].f_1[iVar2];
	iVar5 = -1;
	bVar6 = Global_45863[iVar0 /*120*/].f_86[iVar2];
	if (!bVar6) {
		iVar5 = Global_40250[iVar3 /*46*/].f_32[iVar4];
	}
	else {
		iVar7 = -1;
		iVar8 = 0;
		iVar8 = 0;
		while (iVar8 < 7) {
			if (Global_46225[iVar8 /*203*/].f_1 == iVar3) {
				iVar7 = iVar8;
			}
			iVar8++;
		}
		if (iVar7 == -1) {
			return;
		}
		iVar5 = Global_46225[iVar7 /*203*/].f_10[iVar4 /*48*/];
	}
	if (!func_57(iVar5)) {
		return;
	}
	if (Global_46224 != -1) {
		graphics::set_streamed_texture_dict_as_no_longer_needed(func_12(Global_46224));
	}
	Global_46224 = iVar5;
	graphics::request_streamed_texture_dict(func_12(iVar5), 0);
	while (!graphics::has_streamed_texture_dict_loaded(func_12(iVar5))) {
		system::wait(100);
	}
}

// Position - 0x4D9D
int func_57(int iParam0) {
	switch (iParam0) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 12:
	case 13:
	case 14:
	case 15:
	case 64:
	case 65:
	case 66:
	case 75:
	case 76:
	case 77:
	case 78:
	case 80:
	case 81:
	case 82:
	case 83:
	case 205:
	case 209:
	case 212:
	case 238: return 1;

	default:
	}
	return 0;
}

// Position - 0x4E4D
void func_58() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3) {
		if (Global_36920[iVar0] != -1) {
			ui::_remove_notification(Global_36920[iVar0]);
			Global_36920[iVar0] = -1;
		}
		iVar0++;
	}
	Global_36924 = 0;
}

// Position - 0x4E8C
void func_59(int iParam0, char *sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6) {
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

// Position - 0x4EEF
void func_60(int iParam0, char *sParam1, char *sParam2, char *sParam3, char *sParam4, char *sParam5, char *sParam6) {
	graphics::_push_scaleform_movie_function(iParam0, sParam1);
	func_7(sParam2);
	if (!gameplay::is_string_null_or_empty(sParam3)) {
		func_7(sParam3);
	}
	if (!gameplay::is_string_null_or_empty(sParam4)) {
		func_7(sParam4);
	}
	if (!gameplay::is_string_null_or_empty(sParam5)) {
		func_7(sParam5);
	}
	if (!gameplay::is_string_null_or_empty(sParam6)) {
		func_7(sParam6);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x4F4A
int func_61(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char *sVar8;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	struct<16> Var18;

	func_62(iParam1);
	iVar0 = -1;
	switch (iParam1) {
	case 0: iVar0 = 0; break;

	case 1: iVar0 = 1; break;

	case 2: iVar0 = 2; break;
	}
	if (iVar0 == -1) {
		return 0;
	}
	graphics::_push_scaleform_movie_function(iParam0, "SET_DATA_SLOT_EMPTY");
	graphics::_push_scaleform_movie_function_parameter_int(8);
	graphics::_pop_scaleform_movie_function_void();
	if (Global_45863[iVar0 /*120*/] < 1) {
		return 0;
	}
	iVar1 = Global_45863[iVar0 /*120*/] - 1;
	while (iVar1 >= 16) {
		iVar1 -= 16;
	}
	iVar2 = Global_45863[iVar0 /*120*/];
	if (iVar2 > 16) {
		iVar2 = 16;
	}
	if (iVar1 < 0 || iVar1 > 15) {
		return 0;
	}
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2) {
		if (!Global_45863[iVar0 /*120*/].f_86[iVar1]) {
			iVar4 = Global_45863[iVar0 /*120*/].f_18[iVar1];
			iVar5 = Global_45863[iVar0 /*120*/].f_1[iVar1];
			iVar6 = Global_40250[iVar4 /*46*/].f_32[iVar5];
			iVar7 = 0;
			if (Global_45863[iVar0 /*120*/].f_69[iVar1]) {
				iVar7 = 1;
			}
			if (iVar7 == 1) {
				if (Global_36925[iVar6 /*12*/].f_4 > 0) {
					if (Global_45863[iVar0 /*120*/].f_35[iVar1] == 0) {
						iVar7 = 2;
					}
				}
			}
			MemCopy(&sVar8, {func_28(Global_36925[iVar6 /*12*/])}, 4);
			graphics::_push_scaleform_movie_function(iParam0, "SET_DATA_SLOT");
			graphics::_push_scaleform_movie_function_parameter_int(8);
			graphics::_push_scaleform_movie_function_parameter_int(iVar3);
			graphics::_push_scaleform_movie_function_parameter_int(iVar7);
			graphics::_push_scaleform_movie_function_parameter_int(0);
			func_7(func_54(Global_36925[iVar6 /*12*/].f_2));
			func_7(&sVar8);
			graphics::_pop_scaleform_movie_function_void();
		}
		else {
			iVar12 = Global_45863[iVar0 /*120*/].f_18[iVar1];
			iVar13 = -1;
			iVar14 = 0;
			iVar14 = 0;
			while (iVar14 < 7) {
				if (Global_46225[iVar14 /*203*/].f_1 == iVar12) {
					iVar13 = iVar14;
				}
				iVar14++;
			}
			if (iVar13 == -1) {
				return 1;
			}
			else {
				iVar15 = Global_45863[iVar0 /*120*/].f_1[iVar1];
				iVar16 = 0;
				if (Global_45863[iVar0 /*120*/].f_69[iVar1]) {
					iVar16 = 1;
				}
				iVar17 = Global_46225[iVar13 /*203*/].f_10[iVar15 /*48*/];
				if (iVar16 == 1) {
					if (Global_36925[iVar17 /*12*/].f_4 > 0) {
						if (Global_45863[iVar0 /*120*/].f_35[iVar1] == 0) {
							iVar16 = 2;
						}
					}
				}
				Var18 = {func_28(Global_36925[iVar17 /*12*/])};
				graphics::_push_scaleform_movie_function(iParam0, "SET_DATA_SLOT");
				graphics::_push_scaleform_movie_function_parameter_int(8);
				graphics::_push_scaleform_movie_function_parameter_int(iVar3);
				graphics::_push_scaleform_movie_function_parameter_int(iVar16);
				graphics::_push_scaleform_movie_function_parameter_int(0);
				func_7(func_54(Global_36925[iVar17 /*12*/].f_2));
				func_7(&Var18);
				graphics::_pop_scaleform_movie_function_void();
			}
		}
		iVar1--;
		if (iVar1 < 0) {
			iVar1 = 15;
		}
		iVar3++;
	}
	return iVar2;
}

// Position - 0x51D9
void func_62(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<104> Var4;
	int iVar124;
	bool bVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	int iVar129;

	iVar0 = -1;
	switch (iParam0) {
	case 0: iVar0 = 0; break;

	case 1: iVar0 = 1; break;

	case 2: iVar0 = 2; break;
	}
	if (iVar0 == -1) {
		return;
	}
	if (Global_45863[iVar0 /*120*/] < 1) {
		return;
	}
	iVar1 = Global_45863[iVar0 /*120*/] - 1;
	while (iVar1 >= 16) {
		iVar1 -= 16;
	}
	iVar2 = Global_45863[iVar0 /*120*/];
	if (iVar2 > 16) {
		iVar2 = 16;
	}
	if (iVar1 < 0 || iVar1 > 15) {
		return;
	}
	iVar3 = iVar1 - (iVar2 - 1);
	if (iVar3 < 0) {
		iVar3 = 16 + iVar3;
	}
	Var4.f_1 = 16;
	Var4.f_18 = 16;
	Var4.f_35 = 16;
	Var4.f_52 = 16;
	Var4.f_69 = 16;
	Var4.f_86 = 16;
	Var4.f_103 = 16;
	iVar124 = 0;
	while (iVar124 < iVar2) {
		bVar125 = true;
		if (Global_45863[iVar0 /*120*/].f_103[iVar3]) {
			bVar125 = false;
		}
		if (Global_45863[iVar0 /*120*/].f_86[iVar3]) {
			iVar126 = Global_45863[iVar0 /*120*/].f_18[iVar3];
			iVar127 = -1;
			iVar128 = 0;
			iVar128 = 0;
			while (iVar128 < 7) {
				if (Global_46225[iVar128 /*203*/].f_1 == iVar126) {
					iVar127 = iVar128;
				}
				iVar128++;
			}
			if (iVar127 == -1) {
				bVar125 = false;
			}
		}
		if (bVar125) {
			iVar129 = Var4;
			Var4.f_1[iVar129] = Global_45863[iVar0 /*120*/].f_1[iVar3];
			Var4.f_18[iVar129] = Global_45863[iVar0 /*120*/].f_18[iVar3];
			Var4.f_35[iVar129] = Global_45863[iVar0 /*120*/].f_35[iVar3];
			Var4.f_52[iVar129] = Global_45863[iVar0 /*120*/].f_52[iVar3];
			Var4.f_69[iVar129] = Global_45863[iVar0 /*120*/].f_69[iVar3];
			Var4.f_86[iVar129] = Global_45863[iVar0 /*120*/].f_86[iVar3];
			Var4++;
		}
		iVar3++;
		if (iVar3 == 16) {
			iVar3 = 0;
		}
		iVar124++;
	}
	Global_45863[iVar0 /*120*/] = Var4;
	iVar124 = 0;
	while (iVar124 < 16) {
		Global_45863[iVar0 /*120*/].f_103[iVar124] = 0;
		Global_45863[iVar0 /*120*/].f_1[iVar124] = Var4.f_1[iVar124];
		Global_45863[iVar0 /*120*/].f_18[iVar124] = Var4.f_18[iVar124];
		Global_45863[iVar0 /*120*/].f_35[iVar124] = Var4.f_35[iVar124];
		Global_45863[iVar0 /*120*/].f_52[iVar124] = Var4.f_52[iVar124];
		Global_45863[iVar0 /*120*/].f_69[iVar124] = Var4.f_69[iVar124];
		Global_45863[iVar0 /*120*/].f_86[iVar124] = Var4.f_86[iVar124];
		iVar124++;
	}
}

// Position - 0x5475
void func_63() {
	float fVar0;

	fVar0 = func_64(vLocal_50, vLocal_47, -90f, 0f, 90f, Global_14403, 350f, 0);
	if (Global_3117 == 0) {
		mobile::set_mobile_phone_scale(500f + 75f * (1f - fVar0));
	}
	if (fVar0 >= 1f) {
		Global_16778 = 0;
		func_1(0);
		func_4();
		iLocal_18 = 0;
	}
}

// Position - 0x54D3
float func_64(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, float fParam12, int iParam13) {
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;

	if (Global_2595533 == 0) {
		if (gameplay::is_bit_set(Global_2313, 14) && Global_14443.f_1 < 4) {
			mobile::get_mobile_phone_position(&Var0);
			if (Global_14396[Global_14388 /*3*/].f_1 == Var0.f_1) {
				Global_2595533 = 1;
			}
		}
	}
	if (func_67() && Global_2595533 == 0) {
		return 2f;
	}
	if (iLocal_18 == 0) {
		iLocal_18 = gameplay::get_game_timer();
	}
	fVar3 = func_66(system::to_float(gameplay::get_game_timer() - iLocal_18) / fParam12, 0f, 1f);
	if (fVar3 < 1f) {
		fVar4 = fVar3;
		if (iParam13) {
			fVar4--;
			fVar5 = 0.670158f;
			fVar4 *= fVar4 * ((fVar5 + 1f) * fVar4 + fVar5) + 1f;
		}
		else {
			fVar4 = system::sin(fVar3 * 90f);
		}
		Global_14371 = {func_65(vParam0, vParam3, fVar4)};
		Global_14374 = {func_65(vParam6, vParam9, fVar4)};
	}
	else {
		Global_14371 = {vParam3};
		Global_14374 = {vParam9};
	}
	mobile::set_mobile_phone_position(Global_14371);
	mobile::set_mobile_phone_rotation(Global_14374, 0);
	return fVar3;
}

// Position - 0x55E5
Vector3 func_65(vector3 vParam0, vector3 vParam3, float fParam6) { return vParam0 + vParam3 - vParam0 * FtoV(fParam6); }

// Position - 0x55FF
float func_66(float fParam0, float fParam1, float fParam2) {
	if (fParam0 > fParam2) {
		return fParam2;
	}
	else if (fParam0 < fParam1) {
		return fParam1;
	}
	return fParam0;
}

// Position - 0x5626
int func_67() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
			if (Global_14386 == 0) {
				if (Global_1628 != 128) {
					if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						if (Global_15745 != 2) {
						}
					}
				}
			}
		}
		if (func_11(14)) {
			return 0;
		}
		if (ped::is_ped_in_cover(player::player_ped_id(), 0)) {
			return 0;
		}
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (!cam::_is_in_vehicle_cam_disabled()) {
				if (entity::is_entity_in_water(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0))) {
					return 0;
				}
			}
		}
		if (ped::is_ped_swimming(player::player_ped_id()) ||
			ped::is_ped_swimming_under_water(player::player_ped_id()) ||
			player::is_player_climbing(player::player_id()) ||
			ped::is_ped_hanging_on_to_vehicle(player::player_ped_id())) {
			return 0;
		}
		if (Global_100748) {
			return 0;
		}
	}
	if (Global_69702) {
		return 0;
	}
	iVar2 = 0;
	iVar0 = cam::_0x19CAFA3C87F7C2FF();
	iVar1 = cam::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || cam::_is_in_vehicle_cam_disabled())) {
		iVar2 = 1;
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				iVar3 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
				if (vehicle::is_this_model_a_bike(entity::get_entity_model(iVar3)) ||
					vehicle::is_this_model_a_bicycle(entity::get_entity_model(iVar3)) ||
					vehicle::is_this_model_a_quadbike(entity::get_entity_model(iVar3)) ||
					entity::get_entity_model(iVar3) == joaat("seashark") ||
					entity::get_entity_model(iVar3) == joaat("seashark2") ||
					entity::get_entity_model(iVar3) == joaat("rhino") ||
					entity::get_entity_model(iVar3) == joaat("submersible") ||
					entity::get_entity_model(iVar3) == joaat("submersible2") ||
					entity::get_entity_model(iVar3) == joaat("toro")) {
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2595532 || iVar2 == 1) {
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("apptrackify")) > 0 ||
			Global_101700.f_13010.f_89) {
			if (script::_get_number_of_instances_of_script_with_name_hash(joaat("michael2")) > 0) {
				return 1;
			}
			else {
				return 0;
			}
		}
		else {
			return 1;
		}
	}
	return 0;
}

// Position - 0x584D
void func_68() {
	float fVar0;

	fVar0 = func_64(vLocal_47, vLocal_50, Global_14403, -90f, 0f, 90f, 350f, 0);
	if (Global_3117 == 0) {
		if (gameplay::is_pc_version()) {
			if (!func_69()) {
				mobile::set_mobile_phone_scale(500f + 75f * fVar0);
			}
		}
		else {
			mobile::set_mobile_phone_scale(500f + 75f * fVar0);
		}
	}
	if (fVar0 >= 1f) {
		func_1(1);
		Global_16779 = 0;
		iLocal_18 = 0;
	}
}

// Position - 0x58C9
int func_69() {
	int iVar0;
	int iVar1;

	iVar0 = cam::_0x19CAFA3C87F7C2FF();
	iVar1 = cam::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4) {
		return 1;
	}
	return 0;
}

// Position - 0x58ED
void func_70(int iParam0) {
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	if (gameplay::is_xbox360_version() || gameplay::is_durango_version()) {
		ui::get_hud_colour(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else {
		ui::get_hud_colour(126, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (iParam0) {
		graphics::_push_scaleform_movie_function(Global_14424, "SET_SOFT_KEYS");
		graphics::_push_scaleform_movie_function_parameter_int(1);
		graphics::_push_scaleform_movie_function_parameter_bool(1);
		graphics::_push_scaleform_movie_function_parameter_int(16);
		graphics::_pop_scaleform_movie_function_void();
	}
	else {
		graphics::_push_scaleform_movie_function(Global_14424, "SET_SOFT_KEYS");
		graphics::_push_scaleform_movie_function_parameter_int(1);
		graphics::_push_scaleform_movie_function_parameter_bool(0);
		graphics::_push_scaleform_movie_function_parameter_int(16);
		graphics::_pop_scaleform_movie_function_void();
	}
}

// Position - 0x596B
void func_71(int iParam0) {
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	if (gameplay::is_xbox360_version() || gameplay::is_durango_version()) {
		ui::get_hud_colour(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else {
		ui::get_hud_colour(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (iParam0) {
		graphics::_push_scaleform_movie_function(Global_14424, "SET_SOFT_KEYS");
		graphics::_push_scaleform_movie_function_parameter_int(3);
		graphics::_push_scaleform_movie_function_parameter_bool(1);
		graphics::_push_scaleform_movie_function_parameter_int(4);
		graphics::_pop_scaleform_movie_function_void();
	}
	else {
		graphics::_push_scaleform_movie_function(Global_14424, "SET_SOFT_KEYS");
		graphics::_push_scaleform_movie_function_parameter_int(3);
		graphics::_push_scaleform_movie_function_parameter_bool(0);
		graphics::_push_scaleform_movie_function_parameter_int(4);
		graphics::_pop_scaleform_movie_function_void();
	}
}

// Position - 0x59E5
void func_72(int iParam0) {
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;

	if (gameplay::is_xbox360_version() || gameplay::is_durango_version()) {
		ui::get_hud_colour(18, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else {
		ui::get_hud_colour(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (iParam0) {
		graphics::_push_scaleform_movie_function(Global_14424, "SET_SOFT_KEYS");
		graphics::_push_scaleform_movie_function_parameter_int(2);
		graphics::_push_scaleform_movie_function_parameter_bool(1);
		graphics::_push_scaleform_movie_function_parameter_int(2);
		graphics::_pop_scaleform_movie_function_void();
	}
	else {
		graphics::_push_scaleform_movie_function(Global_14424, "SET_SOFT_KEYS");
		graphics::_push_scaleform_movie_function_parameter_int(2);
		graphics::_push_scaleform_movie_function_parameter_bool(0);
		graphics::_push_scaleform_movie_function_parameter_int(2);
		graphics::_pop_scaleform_movie_function_void();
	}
}

// Position - 0x5A61
int func_73() {
	func_74();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x5A7A
void func_74() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_77(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_76(player::player_ped_id());
			if (func_75(iVar0) && (!func_11(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_75(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x5B77
bool func_75(int iParam0) { return iParam0 < 3; }

// Position - 0x5B83
int func_76(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_77(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x5BC0
int func_77(int iParam0) {
	if (func_75(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}
