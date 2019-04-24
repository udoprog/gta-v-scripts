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
var uLocal_19 = 0;
var uLocal_20 = 0;
char *sLocal_21 = NULL;
float fLocal_22 = 0f;
var uLocal_23 = 0;
var uLocal_24 = 0;
var uLocal_25 = 0;
float fLocal_26 = 0f;
float fLocal_27 = 0f;
var uLocal_28 = 0;
int iLocal_29 = 0;
int iLocal_30 = 0;
int iLocal_31 = 0;
int iLocal_32 = 0;
int iLocal_33 = 0;
int iLocal_34 = 0;
int iLocal_35 = 0;
int iLocal_36 = 0;
int iLocal_37 = 0;
vector3 vLocal_38[24] = "";
var uLocal_41 = 0;
var uLocal_42 = 0;
var uLocal_43 = 0;
vector3 vLocal_44[24] = "";
var uLocal_47 = 0;
var uLocal_48 = 0;
var uLocal_49 = 0;
char cLocal_50[64] = "";
var uLocal_58 = 0;
var uLocal_59 = 0;
var uLocal_60 = 0;
var uLocal_61 = 0;
var uLocal_62 = 0;
var uLocal_63 = 0;
var uLocal_64 = 0;
var uLocal_65 = 0;
vector3 vLocal_66[24] = "";
var uLocal_69 = 0;
var uLocal_70 = 0;
var uLocal_71 = 0;
char *sLocal_72 = NULL;
vector3 vLocal_73[24] = "";
var uLocal_76 = 0;
var uLocal_77 = 0;
var uLocal_78 = 0;
char *sLocal_79 = NULL;
char *sLocal_80 = NULL;
char *sLocal_81 = NULL;
int iLocal_82 = 0;
int iLocal_83 = 0;
int iLocal_84 = 0;
vector3 vLocal_85[24] = "";
var uLocal_88 = 0;
var uLocal_89 = 0;
var uLocal_90 = 0;
char *sLocal_91 = NULL;
int iLocal_92 = 0;
int iLocal_93 = 0;
int iLocal_94 = 0;
int iLocal_95 = 0;
int iLocal_96 = 0;
int iLocal_97 = 0;
int iLocal_98 = 0;
int iLocal_99 = 0;
int iLocal_100 = 0;
int iLocal_101 = 0;
int iLocal_102 = 0;
int iLocal_103 = 0;
int iLocal_104 = 0;
int iLocal_105 = 0;
int iLocal_106 = 0;
int iLocal_107 = 0;
int iLocal_108 = 0;
int iLocal_109 = 0;
int iLocal_110 = 0;
var *uLocal_111[30] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
					   NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
var *uLocal_142[30] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
					   NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
var *uLocal_173[30] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
					   NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
var *uLocal_204[30] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
					   NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
int iLocal_235 = 0;
var uLocal_236 = 0;
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
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	iLocal_34 = 5000;
	iLocal_35 = 5000;
	gameplay::network_set_script_is_safe_for_network_game();
	while (true) {
		system::wait(0);
		if (gameplay::is_bit_set(Global_2314, 1)) {
			if (!gameplay::is_bit_set(Global_2313, 20)) {
				if (audio::is_mobile_phone_call_ongoing()) {
					if (Global_14431) {
						func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
						if (Global_14386) {
							func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
						}
					}
					else {
						func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
					}
					gameplay::clear_bit(&Global_2314, 1);
				}
			}
		}
		if (gameplay::is_bit_set(Global_14611, 0)) {
			if (!func_105()) {
				if (!gameplay::is_bit_set(Global_14611, 1)) {
					gameplay::set_bit(&Global_14611, 1);
					if (network::network_is_game_in_progress()) {
						iLocal_106 = network::get_network_time();
					}
					else {
						iLocal_102 = gameplay::get_game_timer();
					}
				}
				if (network::network_is_game_in_progress()) {
					iLocal_108 = network::get_time_difference(network::get_network_time(), iLocal_106);
				}
				else {
					iLocal_103 = gameplay::get_game_timer();
					iLocal_108 = iLocal_103 - iLocal_102;
				}
				if (iLocal_108 < 3000) {
					if (func_103(&Global_15199, &Global_15815, &Global_15735, Global_15748, Global_16730, Global_16731,
								 0)) {
						Global_14611 = 0;
					}
				}
				else {
					Global_14611 = 0;
				}
			}
		}
		if (!player::is_player_playing(player::player_id()) && !gameplay::is_bit_set(Global_1633501.f_17, 4)) {
			if (Global_15745 != 0) {
				if (script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) == 0) {
					func_102();
				}
			}
		}
		if (iLocal_32 == 1) {
			func_98();
		}
		switch (Global_15745) {
		case 0: break;

		case 1:
			if (Global_15751) {
				if (Global_15741 == 0) {
					func_96();
				}
				else {
					func_95();
					func_96();
				}
			}
			else if (Global_15741 == 0) {
				func_85();
			}
			else {
				func_95();
				func_67();
			}
			break;

		case 2: func_61(); break;

		case 3: func_57(); break;

		case 4:
			if (Global_15751) {
				if (Global_15753) {
					func_56();
				}
				else {
					func_7();
				}
			}
			else {
				func_5();
			}
			break;

		case 5: func_4(); break;

		case 6: func_1(); break;

		default: break;
		}
	}
}

// Position - 0x24E
void func_1() {
	Global_15755 = 0;
	Global_14442 = 0;
	func_2();
}

// Position - 0x262
void func_2() {
	Global_2621441 = 0;
	Global_2621442 = 0;
	Global_15756 = 0;
	Global_15757 = 0;
	Global_15758 = 0;
	Global_15759 = 0;
	Global_15034.f_161 = -99;
	Global_15034.f_162 = {0f, 0f, 0f};
	Global_15749 = 0;
	Global_15750 = 0;
	Global_15792 = 0;
	Global_15793 = 0;
	Global_15796 = 0;
	Global_15798 = 0;
	Global_15797 = 0;
	Global_15800 = 0;
	Global_15799 = 0;
	Global_16762 = 0;
	Global_15802 = 0;
	if (Global_14443.f_1 == 10) {
	}
	else if (gameplay::is_bit_set(Global_2313, 11)) {
		func_3();
	}
	Global_15751 = 0;
	Global_15752 = 0;
	Global_15753 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16735 = 0;
	Global_16742 = 0;
	Global_16741 = 0;
	Global_16738 = 0;
	Global_16737 = 0;
	Global_16739 = 0;
	Global_16740 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	Global_15744 = 0;
	Global_16003 = 0;
	Global_16766 = 5000;
	Global_14426 = 0;
	gameplay::clear_bit(&Global_2313, 20);
	gameplay::clear_bit(&Global_2313, 24);
	gameplay::clear_bit(&Global_2314, 23);
	gameplay::clear_bit(&Global_2315, 0);
	gameplay::clear_bit(&Global_2314, 9);
	gameplay::clear_bit(&Global_2314, 31);
	gameplay::clear_bit(&Global_2314, 17);
	gameplay::clear_bit(&Global_2315, 5);
	Global_16729 = 0;
	Global_16728 = 0;
	if (audio::is_scripted_conversation_ongoing()) {
		Global_15745 = 4;
	}
	else {
		Global_15745 = 0;
		Global_16756 = 0;
		Global_16767 = gameplay::get_game_timer();
	}
}

// Position - 0x398
void func_3() {
	if (!Global_69702) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (gameplay::is_bit_set(Global_2313, 11)) {
				if (!Global_14386) {
					ai::task_use_mobile_phone(player::player_ped_id(), 0, 1);
				}
				if (Global_69702) {
					ped::set_ped_config_flag(player::player_ped_id(), 244, 1);
					ped::set_ped_config_flag(player::player_ped_id(), 243, 1);
					ped::set_ped_config_flag(player::player_ped_id(), 242, 1);
				}
				gameplay::clear_bit(&Global_2313, 11);
			}
		}
	}
}

// Position - 0x402
void func_4() {
	Global_15755 = 0;
	Global_14442 = 0;
	func_2();
}

// Position - 0x416
void func_5() {
	if (player::is_player_playing(player::player_id())) {
		if (ped::is_ped_swimming_under_water(player::player_ped_id())) {
			if (Global_15801 == 0) {
				func_6();
			}
		}
	}
	if (iLocal_33 == 1) {
		func_6();
		func_6();
	}
	if (Global_16737 == 0) {
		if (iLocal_31 == 0) {
			if (Global_16756 == 1) {
				audio::pause_scripted_conversation(1);
				iLocal_31 = 1;
			}
		}
		else if (Global_16756 == 0) {
			audio::restart_scripted_conversation();
			iLocal_31 = 0;
		}
	}
	else if (Global_16739 > 0) {
		iLocal_37 = gameplay::get_game_timer();
		if (iLocal_37 - iLocal_36 > Global_16739) {
			audio::start_preloaded_conversation();
			Global_16737 = 0;
		}
	}
	if (Global_16756 == 0) {
		if (!audio::is_scripted_conversation_ongoing()) {
			Global_15745 = 6;
		}
	}
}

// Position - 0x4B0
void func_6() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
	}
}

// Position - 0x4D1
void func_7() {
	int iVar0;
	int iVar1;
	int iVar2;

	if (audio::is_mobile_phone_call_ongoing()) {
		if (!gameplay::is_bit_set(Global_2313, 11)) {
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
					if (Global_69702 == 0) {
						func_54();
					}
				}
			}
		}
		else if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
				if (Global_69702 == 0) {
					func_3();
				}
			}
		}
	}
	if (Global_69702 == 0) {
		func_53();
	}
	if (iLocal_33 == 1) {
		func_50(0);
	}
	if (iLocal_31 == 0) {
		if (Global_16756 == 1) {
			if (Global_16757 == 1) {
				audio::pause_scripted_conversation(1);
				iLocal_31 = 1;
				Global_16757 = 0;
			}
		}
	}
	else if (Global_16756 == 0) {
		if (Global_16757 == 1) {
			audio::restart_scripted_conversation();
			iLocal_31 = 0;
			Global_16757 = 0;
		}
	}
	if (Global_15798 == 0) {
		if (!Global_15758) {
			if (!gameplay::is_bit_set(Global_2314, 31)) {
				if (!gameplay::is_bit_set(Global_2314, 27)) {
					if (func_49()) {
						if (Global_14443.f_1 > 6) {
							gameplay::set_bit(&Global_2314, 24);
							gameplay::set_bit(&Global_2314, 27);
							gameplay::clear_bit(&Global_2314, 26);
							gameplay::clear_bit(&Global_2314, 25);
						}
					}
				}
			}
		}
	}
	if (audio::is_mobile_phone_call_ongoing() == 0 && Global_15758 == 0) {
		if (Global_15798 == 1) {
			gameplay::set_bit(&Global_2314, 23);
		}
		else {
			gameplay::clear_bit(&Global_2314, 23);
		}
		if (Global_15802) {
			if (Global_15798 == 0) {
				Global_15364 = {Global_15803};
				Global_15821 = {Global_15809};
				Global_15755 = 0;
				Global_16762 = 6;
				func_48();
				return;
			}
		}
		if (!Global_15800) {
			while (Global_15798 == 1) {
				system::wait(0);
				if (Global_14443.f_1 < 6) {
					Global_15798 = 0;
				}
				else {
					if (iLocal_30 == 0) {
						func_47();
						if (Global_15800) {
							iLocal_30 = 1;
							Global_16760 = 1;
							func_106(Global_14424, "SET_DATA_SLOT", system::to_float(4), system::to_float(0),
									 system::to_float(4), -1f, -1f, &Global_15887,
									 &Global_101700.f_27009[Global_1628 /*29*/].f_7,
									 &Global_101700.f_27009[Global_1628 /*29*/].f_3,
									 &Global_101700.f_27009[Global_1628 /*29*/].f_3, 0);
							func_46(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432,
									-1082130432);
							if (Global_14431) {
								func_106(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, "CELL_604", 0, 0, 0, 0);
								func_106(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, "CELL_602", 0, 0, 0, 0);
								gameplay::set_bit(&Global_2313, 17);
								func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, "CELL_603", 0, 0, 0, 0);
							}
							else {
								func_106(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 17f, -1f, -1f, 0, 0, 0, 0, 0);
								func_106(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 18f, -1f, -1f, 0, 0, 0, 0, 0);
								gameplay::set_bit(&Global_2313, 17);
								func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 19f, -1f, -1f, 0, 0, 0, 0, 0);
							}
						}
						else {
							iLocal_30 = 1;
							Global_16758 = 1;
							if (Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] == 0) {
								func_106(Global_14424, "SET_DATA_SLOT", system::to_float(4), system::to_float(0),
										 system::to_float(4), -1f, -1f, &Global_15887, "CELL_300",
										 &Global_117[Global_1628 /*10*/].f_4, "CELL_195", 0);
								func_46(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432,
										-1082130432);
							}
							else {
								func_106(Global_14424, "SET_DATA_SLOT", system::to_float(4), system::to_float(0),
										 system::to_float(4), -1f, -1f, &Global_15887,
										 &Global_101700.f_27009[Global_1628 /*29*/].f_7,
										 &Global_101700.f_27009[Global_1628 /*29*/].f_3,
										 &Global_101700.f_27009[Global_1628 /*29*/].f_3, 0);
								func_46(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432,
										-1082130432);
							}
							if (Global_14431) {
								func_106(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
								func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
							}
							else {
								func_106(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
								func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
							}
							func_106(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
							gameplay::clear_bit(&Global_2313, 17);
						}
					}
					if (func_45(2, Global_14412, 0)) {
						func_43();
						Global_14369 = 0.19f;
						Global_15798 = 0;
						func_41();
						if (Global_15800) {
							Global_15364 = {Global_15881};
							Global_16762 = 5;
						}
						else if (Global_15743 > 0) {
							Global_16003 = 1;
							Global_15745 = 0;
							Global_16766 = 0;
							if (gameplay::is_bit_set(Global_2314, 9)) {
								iVar0 = 0;
								while (iVar0 < Global_16729 + 1) {
									uLocal_111[iVar0] = func_40(&Global_16004[iVar0 /*6*/]);
									uLocal_142[iVar0] = func_40(&Global_16366[iVar0 /*6*/]);
									iVar0++;
								}
								func_39(Global_16729, &Global_15034, Global_1628, &Global_15821, &uLocal_111,
										&uLocal_142, 9, 0, 0, 0, 0);
							}
							else if (Global_15743 == 2) {
								func_22(&Global_15034, Global_1628, &Global_15821, &Global_15899[0 /*6*/],
										&Global_15951[0 /*6*/], &Global_15899[1 /*6*/], &Global_15951[1 /*6*/], 9, 0, 0,
										0, 0);
							}
							Global_16762 = 1;
							Global_16758 = 0;
							Global_16760 = 0;
							Global_15755 = 0;
							func_21();
							return;
						}
						else {
							Global_15364 = {Global_15839};
							Global_16762 = 1;
						}
						Global_16758 = 0;
						Global_16760 = 0;
						Global_15755 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14413, 0) || gameplay::is_bit_set(Global_2313, 24)) {
						func_43();
						Global_14369 = 0.19f;
						Global_15798 = 0;
						func_41();
						if (Global_15800) {
							Global_15364 = {Global_15875};
							Global_16762 = 4;
						}
						else if (Global_15743 > 0) {
							Global_16003 = 1;
							Global_15745 = 0;
							Global_16766 = 0;
							if (gameplay::is_bit_set(Global_2314, 9)) {
								iVar1 = 0;
								while (iVar1 < Global_16728 + 1) {
									uLocal_173[iVar1] = func_40(&Global_16185[iVar1 /*6*/]);
									uLocal_204[iVar1] = func_40(&Global_16547[iVar1 /*6*/]);
									iVar1++;
								}
								func_39(Global_16728, &Global_15034, Global_1628, &Global_15821, &uLocal_173,
										&uLocal_204, 9, 0, 0, 0, 0);
							}
							else if (Global_15743 == 2) {
								func_22(&Global_15034, Global_1628, &Global_15821, &Global_15912[0 /*6*/],
										&Global_15964[0 /*6*/], &Global_15912[1 /*6*/], &Global_15964[1 /*6*/], 9, 0, 0,
										0, 0);
							}
							Global_16762 = 2;
							Global_16758 = 0;
							Global_16760 = 0;
							Global_15755 = 0;
							func_21();
							return;
						}
						else {
							Global_15364 = {Global_15845};
							Global_16762 = 2;
						}
						Global_16758 = 0;
						Global_16760 = 0;
						Global_15755 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14415, 0)) {
						if (Global_15800) {
							Global_14369 = 0.19f;
							Global_15798 = 0;
							func_41();
							func_43();
							Global_15364 = {Global_15869};
							Global_16762 = 3;
							Global_16758 = 0;
							Global_16760 = 0;
							Global_15755 = 0;
							func_21();
							func_48();
							return;
						}
					}
				}
			}
		}
		else {
			while (Global_15798) {
				system::wait(0);
				if (Global_14443.f_1 < 6) {
					Global_15798 = 0;
				}
				else {
					if (iLocal_30 == 0) {
						func_47();
						func_46(Global_14424, "SET_DATA_SLOT_EMPTY", 18f, -1082130432, -1082130432, -1082130432,
								-1082130432);
						func_106(Global_14424, "SET_DATA_SLOT", system::to_float(18), system::to_float(0),
								 system::to_float(0), -1f, -1f, "CELL_603", 0, 0, 0, 0);
						func_106(Global_14424, "SET_DATA_SLOT", system::to_float(18), system::to_float(1),
								 system::to_float(0), -1f, -1f, "CELL_602", 0, 0, 0, 0);
						func_106(Global_14424, "SET_DATA_SLOT", system::to_float(18), system::to_float(2),
								 system::to_float(0), -1f, -1f, "CELL_604", 0, 0, 0, 0);
						func_46(Global_14424, "DISPLAY_VIEW", 18f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_20(Global_14424, "SET_HEADER", "CELL_601", 0, 0, 0, 0);
						if (Global_14431) {
							func_106(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
						}
						else {
							func_106(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
						}
						func_106(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
						gameplay::clear_bit(&Global_2313, 17);
						iLocal_235 = 0;
						iLocal_30 = 1;
					}
					func_14();
					if (func_45(2, Global_14412, 0)) {
						func_43();
						Global_15798 = 0;
						func_41();
						graphics::_push_scaleform_movie_function(Global_14424, "GET_CURRENT_SELECTION");
						uLocal_236 = graphics::_pop_scaleform_movie_function();
						while (!graphics::_0x768FF8961BA904D6(uLocal_236)) {
							system::wait(0);
						}
						iVar2 = graphics::_0x2DE7EFA66B906036(uLocal_236);
						switch (iVar2) {
						case 0:
							Global_15364 = {Global_15875};
							Global_16762 = 4;
							break;

						case 1:
							Global_15364 = {Global_15869};
							Global_16762 = 3;
							break;

						case 2:
							Global_15364 = {Global_15881};
							Global_16762 = 5;
							break;
						}
						Global_16758 = 0;
						Global_16760 = 0;
						Global_15755 = 0;
						func_21();
						func_48();
						return;
					}
					if (func_45(2, Global_14413, 0)) {
						Global_15798 = 0;
						func_41();
					}
				}
			}
		}
		if (Global_15746 == 0) {
			audio::stop_scripted_conversation(0);
			system::settimera(0);
			while (system::timera() < 900 && Global_14443.f_1 == 9) {
				system::wait(0);
			}
			Global_15745 = 6;
		}
		audio::play_sound_frontend(-1, "Hang_Up", &Global_14432, 1);
		func_13();
		Global_14443.f_1 = Global_14445;
		func_8();
	}
	else if (Global_14604 == 0) {
		if (func_45(2, Global_14411, 0)) {
			if (player::is_player_playing(player::player_id())) {
				if (player::is_player_control_on(player::player_id())) {
					if (gameplay::is_bit_set(Global_2313, 20)) {
					}
					else {
						Global_14421 = 1;
						func_41();
						audio::stop_scripted_conversation(0);
						Global_15794 = 1;
						Global_15795 = 1;
						Global_15745 = 6;
						func_13();
						Global_14443.f_1 = Global_14445;
						func_8();
					}
				}
			}
		}
	}
}

// Position - 0xE40
void func_8() {
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
		func_46(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_11(Global_2918);
		if (Global_2918 == 1) {
			func_46(Global_14424, "DISPLAY_VIEW", 1f, system::to_float(Global_14447), -1082130432, -1082130432,
					-1082130432);
			Global_14423 = Global_14447;
		}
		else {
			func_46(Global_14424, "DISPLAY_VIEW", 1f, system::to_float(Global_14448), -1082130432, -1082130432,
					-1082130432);
			Global_14423 = Global_14448;
		}
		if (Global_14431) {
			func_106(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
			func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else {
			func_106(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_14606 == 0) {
			func_106(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			gameplay::clear_bit(&Global_2313, 17);
		}
		else if (Global_69702) {
			func_106(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			gameplay::clear_bit(&Global_2313, 17);
		}
		else {
			if (Global_14605 == 1) {
				if (Global_14431) {
					func_106(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else {
					func_106(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else if (Global_14431) {
				func_106(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else {
				func_106(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			gameplay::set_bit(&Global_2313, 17);
		}
		break;

	case 7: break;

	case 10:
		func_46(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_106(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		func_106(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		gameplay::clear_bit(&Global_2313, 17);
		if (gameplay::is_bit_set(Global_2313, 20)) {
			func_106(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		else if (Global_14431) {
			func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
			if (Global_14386) {
				func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else {
			func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		break;

	case 9:
		if (Global_14442 == 1) {
			func_10();
			func_46(Global_14424, "SET_THEME", system::to_float(Global_101700.f_13010[Global_14443 /*20*/].f_6),
					-1082130432, -1082130432, -1082130432, -1082130432);
			if (Global_15758) {
				graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
				graphics::_push_scaleform_movie_function_parameter_int(4);
				graphics::_push_scaleform_movie_function_parameter_int(0);
				graphics::_push_scaleform_movie_function_parameter_int(2);
				graphics::begin_text_command_scaleform_string("CELL_CONDFON");
				ui::add_text_component_substring_player_name(&Global_15760);
				graphics::end_text_command_scaleform_string();
				func_9("CELL_300");
				func_9("CELL_217");
				func_9("CELL_217");
				graphics::_pop_scaleform_movie_function_void();
			}
			else if (Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] == 0) {
				func_106(Global_14424, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(2),
						 -1f, -1f, &Global_117[Global_1628 /*10*/].f_4, "CELL_300", "CELL_217", "CELL_195", 0);
			}
			else {
				func_106(Global_14424, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(2),
						 -1f, -1f, &Global_101700.f_27009[Global_1628 /*29*/].f_3,
						 &Global_101700.f_27009[Global_1628 /*29*/].f_7, "CELL_217",
						 &Global_101700.f_27009[Global_1628 /*29*/].f_3, 0);
			}
			func_46(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else if (Global_15745 == 4 || Global_15745 == 3) {
			func_46(Global_14424, "SET_THEME", system::to_float(Global_101700.f_13010[Global_14443 /*20*/].f_6),
					-1082130432, -1082130432, -1082130432, -1082130432);
			func_10();
			if (Global_15758) {
				graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
				graphics::_push_scaleform_movie_function_parameter_int(4);
				graphics::_push_scaleform_movie_function_parameter_int(0);
				graphics::_push_scaleform_movie_function_parameter_int(2);
				graphics::begin_text_command_scaleform_string("CELL_CONDFON");
				ui::add_text_component_substring_player_name(&Global_15760);
				graphics::end_text_command_scaleform_string();
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
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
					func_46(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432,
							-1082130432);
					func_106(Global_14424, "SET_DATA_SLOT", system::to_float(4), system::to_float(0),
							 system::to_float(3), -1f, -1f, &Global_117[Global_1628 /*10*/].f_4, "CELL_300", &cVar0,
							 "CELL_195", 0);
				}
				else {
					func_46(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432,
							-1082130432);
					func_106(Global_14424, "SET_DATA_SLOT", system::to_float(4), system::to_float(0),
							 system::to_float(3), -1f, -1f, &Global_101700.f_27009[Global_1628 /*29*/].f_3,
							 &Global_101700.f_27009[Global_1628 /*29*/].f_7, &cVar0,
							 &Global_101700.f_27009[Global_1628 /*29*/].f_3, 0);
				}
			}
			func_46(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		func_21();
		break;

	default: break;
	}
}

// Position - 0x13D7
void func_9(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x13E9
void func_10() {
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

// Position - 0x1660
void func_11(int iParam0) {
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
		if (func_12(14)) {
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
								func_9(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(iVar2);
								graphics::_pop_scaleform_movie_function_void();
							}
							if (Global_2452520) {
								if (iVar1 == 14) {
									func_106(Global_14424, "SET_DATA_SLOT", system::to_float(1),
											 system::to_float(iVar0), system::to_float(Global_2320[iVar1 /*15*/].f_10),
											 system::to_float(Global_16808), -1f, &Global_2320[iVar1 /*15*/], 0, 0, 0,
											 0);
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
								func_106(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
										 system::to_float(Global_2320[iVar1 /*15*/].f_10),
										 system::to_float(Global_16813), -1f, &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
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
									func_106(Global_14424, "SET_DATA_SLOT", system::to_float(1),
											 system::to_float(iVar0), system::to_float(Global_2320[iVar1 /*15*/].f_10),
											 system::to_float(iVar4), -1f, &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
								}
								else {
									switch (Global_14443) {
									case 0: iVar6 = Global_36917; break;

									case 1: iVar6 = Global_36918; break;

									case 2: iVar6 = Global_36919; break;

									default: break;
									}
									func_106(Global_14424, "SET_DATA_SLOT", system::to_float(1),
											 system::to_float(iVar0), system::to_float(Global_2320[iVar1 /*15*/].f_10),
											 system::to_float(iVar6), -1f, &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14) {
								func_106(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
										 system::to_float(Global_2320[iVar1 /*15*/].f_10),
										 system::to_float(Global_16808), -1f, &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
							}
							else if (iVar1 == 20) {
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_9(&Global_2320[iVar1 /*15*/]);
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
								func_9(&Global_2320[iVar1 /*15*/]);
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
								func_9(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(iVar8);
								graphics::_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 8) {
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_9(&Global_2320[iVar1 /*15*/]);
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
								func_9(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(42);
								graphics::_pop_scaleform_movie_function_void();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23) {
								iVar9 = 0;
								iVar9 = Global_1618161.f_1;
								func_106(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
										 system::to_float(Global_2320[iVar1 /*15*/].f_10), system::to_float(iVar9), -1f,
										 &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
							}
							else {
								func_106(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
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

// Position - 0x1BF9
bool func_12(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x1C07
void func_13() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return;
	}
	switch (Global_14445) {
	case 5: Global_14445 = 6; break;

	case 6:
		if (gameplay::is_bit_set(Global_2314, 5)) {
			Global_14445 = 6;
			gameplay::clear_bit(&Global_2314, 5);
		}
		else {
			Global_14445 = 3;
		}
		break;

	case 7: Global_14445 = 3; break;

	case 3:
		if (gameplay::is_bit_set(Global_2314, 5)) {
			Global_14445 = 6;
			gameplay::clear_bit(&Global_2314, 5);
		}
		else {
			Global_14445 = 3;
		}
		break;

	default: Global_14445 = 3; break;
	}
}

// Position - 0x1CA0
void func_14() {
	if (iLocal_235) {
		if (system::timera() > 50) {
			iLocal_235 = 0;
		}
	}
	if (iLocal_235 == 0) {
		if (func_45(2, Global_14419, 0) || controls::is_control_just_pressed(2, 181)) {
			func_18();
			iLocal_235 = 1;
			system::settimera(0);
		}
		if (func_45(2, Global_14420, 0) || controls::is_control_just_pressed(2, 180)) {
			func_15();
			iLocal_235 = 1;
			system::settimera(0);
		}
	}
}

// Position - 0x1D09
void func_15() {
	func_46(Global_14424, "SET_INPUT_EVENT", system::to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	audio::play_sound_frontend(-1, "Menu_Navigate", &Global_14432, 1);
	func_16();
}

// Position - 0x1D46
void func_16() {
	if (func_17()) {
		if (Global_14609 == 0) {
			mobile::_move_finger(2);
		}
		else {
			mobile::_move_finger(1);
		}
	}
}

// Position - 0x1D69
bool func_17() {
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

// Position - 0x1DB0
void func_18() {
	func_46(Global_14424, "SET_INPUT_EVENT", system::to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	audio::play_sound_frontend(-1, "Menu_Navigate", &Global_14432, 1);
	func_19();
}

// Position - 0x1DED
void func_19() {
	if (func_17()) {
		if (Global_14609 == 0) {
			mobile::_move_finger(1);
		}
		else {
			mobile::_move_finger(2);
		}
	}
}

// Position - 0x1E10
void func_20(int iParam0, char *sParam1, char *sParam2, char *sParam3, char *sParam4, char *sParam5, char *sParam6) {
	graphics::_push_scaleform_movie_function(iParam0, sParam1);
	func_9(sParam2);
	if (!gameplay::is_string_null_or_empty(sParam3)) {
		func_9(sParam3);
	}
	if (!gameplay::is_string_null_or_empty(sParam4)) {
		func_9(sParam4);
	}
	if (!gameplay::is_string_null_or_empty(sParam5)) {
		func_9(sParam5);
	}
	if (!gameplay::is_string_null_or_empty(sParam6)) {
		func_9(sParam6);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x1E6B
void func_21() {
	if (graphics::has_scaleform_movie_loaded(Global_14424)) {
		if (Global_14442 == 1) {
			if (Global_14431) {
				func_106(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else {
				func_106(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15792) {
				func_106(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (gameplay::is_bit_set(Global_2313, 20)) {
				func_106(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431) {
				func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else {
				func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_106(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			gameplay::clear_bit(&Global_2313, 17);
		}
		else {
			func_106(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			gameplay::clear_bit(&Global_2313, 17);
			if (gameplay::is_bit_set(Global_2313, 20)) {
				func_106(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431) {
				func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14386) {
					func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else {
				func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

// Position - 0x1FE0
int func_22(var *uParam0, int iParam1, char *sParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7,
			int iParam8, int iParam9, int iParam10, int iParam11) {
	var *uVar0;
	var *uVar11;

	func_38(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	func_37();
	if (iParam8 == 1) {
		Global_15757 = 1;
	}
	else {
		Global_15757 = 0;
	}
	uVar0 = 10;
	uVar11 = 10;
	func_35(2, &uVar0, &uVar11, uParam3, uParam4, uParam5, uParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return func_23(&uVar0, &uVar11, iParam7, iParam11);
}

// Position - 0x203F
int func_23(var *uParam0, var *uParam1, int iParam2, bool bParam3) {
	int iVar0;

	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2) {
		if (Global_15745 != 0) {
			if (iParam2 > Global_15747) {
				if (bParam3 == 0) {
					audio::stop_scripted_conversation(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
				}
				else {
					func_102();
					return 0;
				}
			}
			else {
				return 0;
			}
		}
		if (audio::is_scripted_conversation_ongoing()) {
			return 0;
		}
		if (func_34(8, -1)) {
			return 0;
		}
		Global_15821 = {Global_15815};
		func_33();
		Global_15034 = {Global_15199};
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = {Global_15776};
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = {Global_16749};
		Global_16741 = Global_16742;
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15364.f_370 = Global_16734;
		Global_15741 = Global_15742;
		Global_15743 = Global_15744;
		if (Global_16003 == 0) {
			Global_15899[0 /*6*/] = {Global_15925[0 /*6*/]};
			Global_15899[1 /*6*/] = {Global_15925[1 /*6*/]};
			Global_15951[0 /*6*/] = {Global_15977[0 /*6*/]};
			Global_15951[1 /*6*/] = {Global_15977[1 /*6*/]};
			Global_15912[0 /*6*/] = {Global_15938[0 /*6*/]};
			Global_15912[1 /*6*/] = {Global_15938[1 /*6*/]};
			Global_15964[0 /*6*/] = {Global_15990[0 /*6*/]};
			Global_15964[1 /*6*/] = {Global_15990[1 /*6*/]};
		}
		if (Global_15751) {
			gameplay::clear_bit(&Global_2313, 20);
			gameplay::clear_bit(&Global_2314, 17);
			gameplay::clear_bit(&Global_2315, 0);
			if (bParam3) {
				func_27();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2) {
					if (iParam2 == 13) {
					}
					else {
						return 0;
					}
				}
				if (Global_14443.f_1 > 3) {
					return 0;
				}
			}
			if (Global_14409 == 1) {
				return 0;
			}
			if (player::is_player_playing(player::player_id())) {
				if (ped::is_ped_in_melee_combat(player::player_ped_id())) {
					return 0;
				}
				if (func_26()) {
					return 0;
				}
				if (ped::is_ped_ragdoll(player::player_ped_id())) {
					return 0;
				}
				if (ped::is_ped_in_parachute_free_fall(player::player_ped_id())) {
					return 0;
				}
				if (weapon::get_is_ped_gadget_equipped(player::player_ped_id(), joaat("gadget_parachute"))) {
					return 0;
				}
				if (!Global_69702) {
					if (Global_16003 == 0) {
						if (entity::is_entity_in_water(player::player_ped_id())) {
							return 0;
						}
						if (player::is_player_climbing(player::player_id())) {
							return 0;
						}
						if (ped::is_ped_planting_bomb(player::player_ped_id())) {
							return 0;
						}
						if (player::is_special_ability_active(player::player_id())) {
							return 0;
						}
					}
				}
			}
			if (func_25()) {
				return 0;
			}
			else {
				switch (Global_14443.f_1) {
				case 7: return 0;

				case 8: return 0;

				case 9: break;

				case 10: break;

				default: break;
				}
			}
			func_24();
			Global_15755 = bParam3;
		}
		Global_15747 = iParam2;
		if (Global_15741 > 0) {
			iVar0 = 0;
			while (iVar0 < Global_15741) {
				StringCopy(&Global_15364.f_6[iVar0 /*6*/], (*uParam0)[iVar0], 24);
				StringCopy(&Global_15364.f_187[iVar0 /*6*/], (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_14611 = 0;
		func_48();
		return 1;
	}
	if (Global_15745 == 5) {
		return 0;
	}
	if (iParam2 < Global_15747 || iParam2 == Global_15747) {
		return 0;
	}
	if (iParam2 == 2) {
	}
	else {
		func_102();
	}
	return 0;
}

// Position - 0x23A9
void func_24() {
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = {Global_15827};
	Global_15845 = {Global_15833};
	Global_15800 = Global_15799;
	Global_15869 = {Global_15851};
	Global_15875 = {Global_15857};
	Global_15881 = {Global_15863};
	Global_15887 = {Global_15893};
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = {Global_15776};
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	gameplay::clear_bit(&Global_2314, 16);
}

// Position - 0x243E
bool func_25() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return true;
	}
	return false;
}

// Position - 0x2465
bool func_26() {
	int iVar0;
	int iVar1;

	if (Global_69702) {
		iVar0 = 0;
		weapon::get_current_ped_weapon(player::player_ped_id(), &iVar1, 1);
		if (player::is_player_playing(player::player_id())) {
			if (iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper") ||
				iVar1 == joaat("weapon_remotesniper")) {
				iVar0 = 1;
			}
		}
		if (cam::is_aim_cam_active() && iVar0 == 1) {
			return true;
		}
		else {
			return false;
		}
	}
	if (player::is_player_playing(player::player_id())) {
		if (ped::get_ped_config_flag(player::player_ped_id(), 78, 1)) {
			return true;
		}
		else {
			return false;
		}
	}
	return true;
}

// Position - 0x24FE
void func_27() {
	if (func_12(14)) {
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
		Global_14443 = func_28();
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

// Position - 0x25A0
var func_28() {
	func_29();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x25B9
void func_29() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_32(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_31(player::player_ped_id());
			if (func_30(iVar0) && (!func_12(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_30(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x26B6
bool func_30(int iParam0) { return iParam0 < 3; }

// Position - 0x26C2
int func_31(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_32(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x26FF
int func_32(int iParam0) {
	if (func_30(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x2729
void func_33() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 15) {
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&Global_15034[iVar0 /*10*/].f_1, "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = {0f, 0f, 0f};
}

// Position - 0x2781
bool func_34(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x27BC
void func_35(int iParam0, var *uParam1, var *uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7,
			 int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14,
			 int iParam15, int iParam16) {
	func_36(iParam0);
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

// Position - 0x282C
void func_36(var uParam0) {
	Global_15742 = uParam0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
}

// Position - 0x2852
void func_37() {
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_15759 = 0;
	Global_16742 = 0;
	Global_15750 = 0;
	Global_15797 = 0;
	Global_15799 = 0;
	Global_2621441 = 0;
}

// Position - 0x288B
void func_38(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5) {
	Global_15199 = {*uParam0};
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0) {
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else {
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0) {
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else {
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

// Position - 0x28E1
int func_39(var uParam0, var *uParam1, int iParam2, char *sParam3, var *uParam4, var *uParam5, int iParam6, int iParam7,
			int iParam8, int iParam9, int iParam10) {
	func_38(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	func_37();
	if (iParam7 == 1) {
		Global_15757 = 1;
	}
	else {
		Global_15757 = 0;
	}
	func_36(uParam0);
	return func_23(uParam4, uParam5, iParam6, iParam10);
}

// Position - 0x291F
var func_40(var uParam0) { return uParam0; }

// Position - 0x2929
void func_41() {
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		audio::play_sound_frontend(-1, "Menu_Accept", &Global_14432, 1);
		func_42();
	}
}

// Position - 0x294F
void func_42() {
	if (func_17()) {
		mobile::_move_finger(5);
	}
}

// Position - 0x2963
void func_43() {
	if (func_44()) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				if (!Global_14386) {
					if (!gameplay::is_bit_set(Global_2313, 11)) {
						func_54();
					}
				}
			}
		}
	}
}

// Position - 0x29A3
bool func_44() {
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
		if (func_12(14)) {
			return false;
		}
		if (ped::is_ped_in_cover(player::player_ped_id(), 0)) {
			return false;
		}
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (!cam::_is_in_vehicle_cam_disabled()) {
				if (entity::is_entity_in_water(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0))) {
					return false;
				}
			}
		}
		if (ped::is_ped_swimming(player::player_ped_id()) ||
			ped::is_ped_swimming_under_water(player::player_ped_id()) ||
			player::is_player_climbing(player::player_id()) ||
			ped::is_ped_hanging_on_to_vehicle(player::player_ped_id())) {
			return false;
		}
		if (Global_100748) {
			return false;
		}
	}
	if (Global_69702) {
		return false;
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
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return true;
		}
	}
	return false;
}

// Position - 0x2BCA
bool func_45(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x2C3C
void func_46(int iParam0, char *sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6) {
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

// Position - 0x2C9F
void func_47() {
	if (func_44()) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				if (!Global_14386) {
					if (gameplay::is_bit_set(Global_2313, 11)) {
						func_3();
					}
				}
			}
		}
	}
}

// Position - 0x2CDE
void func_48() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69) {
		StringCopy(&Global_14613[iVar0 /*6*/], "", 24);
		iVar0++;
	}
	audio::stop_scripted_conversation(0);
	Global_15745 = 1;
}

// Position - 0x2D10
bool func_49() {
	if (network::network_is_game_in_progress()) {
		iLocal_108 = network::get_time_difference(network::get_network_time(), iLocal_107);
	}
	else {
		iLocal_105 = gameplay::get_game_timer();
		iLocal_108 = iLocal_105 - iLocal_104;
	}
	return false;
}

// Position - 0x2D3C
void func_50(int iParam0) {
	if (Global_14604) {
		func_51(0, 0);
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
	if (!func_25()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x2DAC
void func_51(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_52(0)) {
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

// Position - 0x2E20
bool func_52(int iParam0) {
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

// Position - 0x2E7A
void func_53() {
	if (func_45(2, Global_14420, 0)) {
		if (Global_16756 == 0) {
			if (Global_15751) {
				if (gameplay::is_bit_set(Global_2314, 17)) {
				}
				else {
					audio::skip_to_next_scripted_conversation_line();
				}
			}
		}
	}
}

// Position - 0x2EAE
void func_54() {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (func_55() && ped::is_ped_in_cover(player::player_ped_id(), 0)) {
			iVar1 = 1;
		}
	}
	if (!Global_69702) {
		if (!ped::is_ped_injured(player::player_ped_id()) && iVar1 == 0) {
			iVar2 = ped::get_ped_prop_index(player::player_ped_id(), 0);
			if (Global_69702) {
				if (iVar2 == 15 || iVar2 == 16 || iVar2 == 17 || iVar2 == 18 || iVar2 == 19 ||
					ped::is_ped_wearing_helmet(player::player_ped_id())) {
					iVar0 = 1;
				}
			}
			else if (ped::is_ped_wearing_helmet(player::player_ped_id())) {
				iVar0 = 1;
			}
			if (!Global_14386) {
				if (Global_1628 != 128) {
					if (iVar0 == 0) {
						if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
							if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
							}
							else {
								if (Global_69702) {
									ped::set_ped_config_flag(player::player_ped_id(), 244, 0);
									ped::set_ped_config_flag(player::player_ped_id(), 243, 0);
									ped::set_ped_config_flag(player::player_ped_id(), 242, 0);
								}
								gameplay::set_bit(&Global_2313, 11);
								ai::task_use_mobile_phone(player::player_ped_id(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

// Position - 0x2FD1
int func_55() {
	int iVar0;
	int iVar1;

	iVar0 = cam::_0x19CAFA3C87F7C2FF();
	iVar1 = cam::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4) {
		return 1;
	}
	return 0;
}

// Position - 0x2FF5
void func_56() {
	if (Global_69702 == 0) {
		func_53();
	}
	if (iLocal_33 == 1) {
		func_50(0);
	}
	if (iLocal_30 == 0) {
		iLocal_30 = 1;
		Global_16758 = 1;
		if (Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] == 0) {
			func_106(Global_14424, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(4), -1f,
					 -1f, &Global_15887, "CELL_300", "CELL_195", "CELL_195", 0);
			func_46(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else {
			func_106(Global_14424, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(4), -1f,
					 -1f, &Global_15887, &Global_101700.f_27009[Global_1628 /*29*/].f_7,
					 &Global_101700.f_27009[Global_1628 /*29*/].f_3, &Global_101700.f_27009[Global_1628 /*29*/].f_3, 0);
			func_46(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		Global_14369 = 0.2f;
		if (Global_14431) {
			func_106(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_212", 0, 0, 0, 0);
			func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
		}
		else {
			func_106(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		func_106(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		gameplay::clear_bit(&Global_2313, 17);
	}
	if (Global_15798 == 1) {
		if (Global_14443.f_1 < 6) {
			Global_15798 = 0;
		}
		else {
			if (Global_14383 == 0) {
				if (func_45(2, Global_14412, 0)) {
					Global_14369 = 0.19f;
					Global_15798 = 0;
					func_41();
					Global_16763 = 1;
					iLocal_32 = 1;
				}
			}
			if (func_45(2, Global_14413, 0)) {
				Global_14369 = 0.19f;
				Global_15798 = 0;
				func_41();
				Global_16763 = 2;
			}
		}
	}
	else if (Global_16763 == 2) {
		if (Global_15746 == 0) {
			audio::stop_scripted_conversation(0);
			Global_15745 = 6;
		}
		func_13();
		Global_14443.f_1 = Global_14445;
		func_8();
	}
	else if (!audio::is_mobile_phone_call_ongoing()) {
		iLocal_32 = 0;
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
		audio::play_sound_frontend(-1, "Hang_Up", &Global_14432, 1);
		func_13();
		Global_14443.f_1 = Global_14445;
		func_8();
	}
}

// Position - 0x3237
void func_57() {
	if (Global_14612 == 1) {
		if (audio::is_mobile_phone_call_ongoing()) {
			if (audio::_0xE73364DB90778FFA()) {
				Global_14612 = 0;
			}
		}
		if (!player::is_player_playing(player::player_id())) {
			Global_14612 = 0;
			audio::stop_scripted_conversation(0);
			Global_15745 = 6;
		}
	}
	if (system::timerb() > iLocal_35) {
		if (Global_14612 == 1) {
			Global_14612 = 0;
		}
	}
	if (system::timera() < Global_16766 || Global_14612 == 1) {
		if (func_45(2, Global_14411, 0)) {
			if (player::is_player_playing(player::player_id())) {
				if (player::is_player_control_on(player::player_id())) {
					if (gameplay::is_bit_set(Global_2313, 20)) {
					}
					else {
						Global_14421 = 1;
						func_41();
						audio::stop_scripted_conversation(0);
						Global_15794 = 1;
						Global_15745 = 6;
						gameplay::clear_bit(&Global_2313, 27);
						if (!Global_15756) {
							gameplay::set_bit(&Global_2314, 5);
						}
						func_13();
						Global_14443.f_1 = Global_14445;
						func_8();
					}
				}
			}
		}
	}
	else {
		gameplay::clear_bit(&Global_2313, 27);
		Global_15745 = 4;
		Global_15802 = 0;
		func_60();
		func_59();
		if (!Global_15758) {
			if (Global_16762 == 0) {
				if (!gameplay::is_bit_set(Global_2315, 5)) {
					audio::start_preloaded_conversation();
				}
				gameplay::clear_bit(&Global_2315, 5);
			}
			else {
				audio::start_script_phone_conversation(Global_15364.f_368, Global_15364.f_369);
			}
		}
		func_58();
	}
}

// Position - 0x3364
void func_58() {
	if (network::network_is_game_in_progress()) {
		iLocal_107 = network::get_network_time();
	}
	else {
		iLocal_104 = gameplay::get_game_timer();
	}
}

// Position - 0x3382
void func_59() {
	if (Global_15758) {
		if (Global_69702) {
			if (graphics::has_scaleform_movie_loaded(Global_14424)) {
				if (!gameplay::is_pc_version()) {
					func_106(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					gameplay::set_bit(&Global_2494199.f_1640, 15);
				}
			}
		}
	}
}

// Position - 0x33D0
void func_60() {
	if (graphics::has_scaleform_movie_loaded(Global_14424)) {
		if (!Global_15753) {
			func_106(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_106(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			gameplay::clear_bit(&Global_2313, 17);
			if (gameplay::is_bit_set(Global_2313, 20)) {
				func_106(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431) {
				func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14386) {
					func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else {
				func_106(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15758) {
				graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
				graphics::_push_scaleform_movie_function_parameter_int(4);
				graphics::_push_scaleform_movie_function_parameter_int(0);
				graphics::_push_scaleform_movie_function_parameter_int(2);
				graphics::begin_text_command_scaleform_string("CELL_CONDFON");
				ui::add_text_component_substring_player_name(&Global_15760);
				graphics::end_text_command_scaleform_string();
				func_9("CELL_300");
				func_9("CELL_219");
				func_9("CELL_219");
				graphics::_pop_scaleform_movie_function_void();
			}
			else if (Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] == 0) {
				func_106(Global_14424, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3),
						 -1f, -1f, &Global_117[Global_1628 /*10*/].f_4, "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else {
				func_106(Global_14424, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3),
						 -1f, -1f, &Global_101700.f_27009[Global_1628 /*29*/].f_3,
						 &Global_101700.f_27009[Global_1628 /*29*/].f_7, "CELL_219",
						 &Global_101700.f_27009[Global_1628 /*29*/].f_3, 0);
			}
		}
		func_46(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

// Position - 0x3583
void func_61() {
	if (network::network_is_game_in_progress()) {
		iLocal_109 = network::get_time_difference(network::get_network_time(), iLocal_95);
		iLocal_110 = network::get_time_difference(network::get_network_time(), iLocal_98);
	}
	else {
		iLocal_94 = gameplay::get_game_timer();
		iLocal_109 = iLocal_94 - iLocal_93;
		iLocal_97 = gameplay::get_game_timer();
		iLocal_110 = iLocal_97 - iLocal_96;
	}
	if (Global_15792 == 1) {
		if (func_44()) {
			if (iLocal_109 > 4000) {
				if (gameplay::is_bit_set(Global_2313, 14)) {
					if (graphics::has_scaleform_movie_loaded(Global_14424)) {
						func_41();
						Global_14442 = 2;
						func_60();
						func_59();
					}
				}
			}
		}
		else if (iLocal_109 > 2000) {
			if (gameplay::is_bit_set(Global_2313, 14)) {
				if (graphics::has_scaleform_movie_loaded(Global_14424)) {
					func_41();
					Global_14442 = 2;
					func_60();
					func_59();
				}
			}
		}
	}
	if (iLocal_110 > 10000) {
		Global_14442 = 3;
	}
	if (Global_14442 == 2) {
		iLocal_30 = 0;
		Global_15745 = 4;
		func_54();
		Global_15802 = 0;
		func_60();
		func_59();
		if (!Global_15758) {
			if (Global_16762 == 0) {
				audio::start_preloaded_conversation();
			}
			else {
				audio::start_script_phone_conversation(Global_15364.f_368, Global_15364.f_369);
			}
		}
		func_58();
		Global_16761 = 0;
	}
	if (Global_15792 == 0) {
		if (Global_14442 == 3) {
			if (Global_15758) {
				func_63();
				func_50(0);
			}
			else {
				func_62();
				Global_16761 = 1;
				audio::stop_scripted_conversation(0);
				Global_15745 = 6;
				func_13();
				Global_14443.f_1 = Global_14445;
				func_8();
			}
		}
	}
	else if (Global_14442 == 3) {
	}
}

// Position - 0x36D7
void func_62() {}

// Position - 0x36DF
void func_63() {
	Global_2499540.f_2 = 1;
	Global_2499540.f_38 = 1;
	if (network::network_is_signed_online()) {
		if (network::_0x855BC38818F6F684()) {
			while (network::_0xEF0912DDF7C4CB4B()) {
				system::wait(0);
			}
			network::network_session_voice_leave();
			Global_2499540 = 0;
			Global_2499540.f_2 = 0;
		}
		else if (func_66(Global_2499540.f_20)) {
			if (network::network_is_friend(&Global_2499540.f_20)) {
				if (!network::_0x87EB7A3FFCB314DB(&Global_2499540.f_20)) {
					func_64();
				}
			}
		}
		else {
			func_64();
		}
	}
	else {
		func_64();
	}
	if (Global_2499540.f_37) {
		func_50(0);
	}
	Global_2499540.f_37 = 0;
	Global_2499540.f_3 = 0;
}

// Position - 0x377F
void func_64() {
	Global_2499540.f_1 = 0;
	Global_2499540 = 0;
	Global_2499540.f_2 = 0;
	Global_2499540.f_33 = -1;
	Global_2499540.f_34 = -1;
	StringCopy(&Global_2499540.f_4, "", 64);
	StringCopy(&Global_2499540.f_39[0 /*16*/], "", 64);
	Global_2499540.f_38 = 0;
	Global_2499540.f_56 = 0;
	Global_2499540.f_57 = 0;
	Global_2499540.f_58 = -2;
	Global_2499540.f_3 = 0;
	func_65(&Global_2499540.f_20);
}

// Position - 0x37F2
void func_65(var *uParam0) {
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

// Position - 0x383A
bool func_66(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7,
			 var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) {
	return network::network_is_handle_valid(&uParam0, 13);
}

// Position - 0x384A
void func_67() {
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	iLocal_92 = 0;
	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	while (iLocal_92 < Global_15741) {
		func_84();
		func_83();
		func_82();
		iVar13 = 0;
		while (iVar2 < 70 && iLocal_29 == 0) {
			cLocal_44 = {Global_15364.f_6[iLocal_92 /*6*/]};
			StringConCat(&cLocal_44, "A", 24);
			Global_14613[iVar2 /*6*/] = {Global_15364.f_6[iLocal_92 /*6*/]};
			StringConCat(&Global_14613[iVar2 /*6*/], "_", 24);
			StringIntConCat(&Global_14613[iVar2 /*6*/], iVar1, 24);
			cLocal_38 = {Global_14613[iVar2 /*6*/]};
			StringConCat(&cLocal_38, "A", 24);
			if (ui::does_text_label_exist(&cLocal_38)) {
				StringCopy(&cLocal_50, ui::_get_label_text(&cLocal_38), 64);
				iVar3 = func_81(iVar13);
				iVar4 = func_80(iVar13);
				iVar5 = func_78(iVar13);
				iLocal_82 = func_77();
				iLocal_83 = func_76();
				iLocal_84 = func_75();
				iVar6 = func_74(iVar13);
				iVar7 = func_73(iVar13);
				iVar8 = func_72(iVar13);
				iVar12 = func_71(iVar13);
				iVar9 = func_70(iVar13);
				iVar10 = func_69(iVar13);
				iVar11 = func_68(iVar13);
				if (ui::does_text_label_exist(&Global_14613[iVar2 /*6*/])) {
					if (gameplay::are_strings_equal(&Global_14613[iVar2 /*6*/], &Global_15364.f_187[iLocal_92 /*6*/])) {
						if (iVar3 > 36 || iVar4 > 36) {
						}
						audio::add_line_to_conversation(iVar3, &cLocal_50, &Global_14613[iVar2 /*6*/], iVar4, iVar5, 0,
														iVar6, iVar7, iVar8, iVar12, iVar9, iVar10, iVar11);
					}
				}
				iVar1 += iVar0;
			}
			else if (ui::does_text_label_exist(&cLocal_44)) {
				StringCopy(&cLocal_50, ui::_get_label_text(&cLocal_44), 64);
				iVar3 = func_81(0);
				iVar4 = func_80(0);
				iVar5 = func_78(0);
				iLocal_82 = func_77();
				iLocal_83 = func_76();
				iLocal_84 = func_75();
				iVar6 = func_74(0);
				iVar7 = func_73(0);
				iVar8 = func_72(0);
				iVar12 = func_71(0);
				iVar9 = func_70(0);
				iVar10 = func_69(0);
				iVar11 = func_68(0);
				audio::add_line_to_conversation(iVar3, &cLocal_50, &Global_15364.f_6[iLocal_92 /*6*/], iVar4, iVar5, 1,
												iVar6, iVar7, iVar8, iVar12, iVar9, iVar10, iVar11);
				StringCopy(&Global_14613[iVar2 /*6*/], "END", 24);
				iLocal_29 = 1;
			}
			else {
				StringCopy(&Global_14613[iVar2 /*6*/], "END", 24);
				iLocal_29 = 1;
			}
			iVar2++;
			iVar13++;
			if (iVar2 == 70) {
			}
		}
		iLocal_92++;
		iLocal_29 = 0;
		iVar1 = 1;
		iVar13 = 0;
		iVar2 = 0;
	}
	if (Global_15751 == 0) {
		audio::_0x0B568201DD99F0EB(iLocal_83);
		audio::_0x61631F5DF50D1C34(iLocal_84);
		audio::start_script_conversation(Global_15364.f_368, Global_15364.f_369, Global_15364.f_370, iLocal_82);
		Global_15745 = 4;
	}
}

// Position - 0x3AC9
int func_68(int iParam0) {
	char *sVar0;

	sVar0 = ui::_get_text_substring(ui::_get_label_text(&cLocal_85), iParam0 * 7 + 6, iParam0 * 7 + 7);
	if (gameplay::are_strings_equal(sVar0, "0")) {
		return 0;
	}
	return 1;
}

// Position - 0x3AFE
int func_69(int iParam0) {
	char *sVar0;

	sVar0 = ui::_get_text_substring(ui::_get_label_text(&cLocal_85), iParam0 * 7 + 5, iParam0 * 7 + 6);
	if (gameplay::are_strings_equal(sVar0, "0")) {
		return 0;
	}
	return 1;
}

// Position - 0x3B33
int func_70(int iParam0) {
	char *sVar0;

	sVar0 = ui::_get_text_substring(ui::_get_label_text(&cLocal_85), iParam0 * 7 + 4, iParam0 * 7 + 5);
	if (gameplay::are_strings_equal(sVar0, "0")) {
		return 0;
	}
	return 1;
}

// Position - 0x3B68
int func_71(int iParam0) {
	char *sVar0;

	sVar0 = ui::_get_text_substring(ui::_get_label_text(&cLocal_85), iParam0 * 7 + 3, iParam0 * 7 + 4);
	if (gameplay::are_strings_equal(sVar0, "0")) {
		return 1;
	}
	if (gameplay::are_strings_equal(sVar0, "1")) {
		return 1;
	}
	if (gameplay::are_strings_equal(sVar0, "2")) {
		return 2;
	}
	if (gameplay::are_strings_equal(sVar0, "3")) {
		return 3;
	}
	if (gameplay::are_strings_equal(sVar0, "4")) {
		return 0;
	}
	return 0;
}

// Position - 0x3BDE
int func_72(int iParam0) {
	char *sVar0;

	sVar0 = ui::_get_text_substring(ui::_get_label_text(&cLocal_85), iParam0 * 7 + 2, iParam0 * 7 + 3);
	if (gameplay::are_strings_equal(sVar0, "0")) {
		return 0;
	}
	return 1;
}

// Position - 0x3C13
int func_73(int iParam0) {
	char *sVar0;

	sVar0 = ui::_get_text_substring(ui::_get_label_text(&cLocal_85), iParam0 * 7 + 1, iParam0 * 7 + 2);
	if (gameplay::are_strings_equal(sVar0, "0")) {
		return 0;
	}
	return 1;
}

// Position - 0x3C48
int func_74(int iParam0) {
	char *sVar0;

	sVar0 = ui::_get_text_substring(ui::_get_label_text(&cLocal_85), iParam0 * 7, iParam0 * 7 + 1);
	if (gameplay::are_strings_equal(sVar0, "0")) {
		return 0;
	}
	return 1;
}

// Position - 0x3C7B
int func_75() {
	char *sVar0;

	sVar0 = ui::_get_text_substring(ui::_get_label_text(&cLocal_73), 2, 3);
	if (gameplay::are_strings_equal(sVar0, "0")) {
		return 0;
	}
	return 1;
}

// Position - 0x3CA6
int func_76() {
	char *sVar0;

	sVar0 = ui::_get_text_substring(ui::_get_label_text(&cLocal_73), 1, 2);
	if (gameplay::are_strings_equal(sVar0, "0")) {
		return 0;
	}
	return 1;
}

// Position - 0x3CD1
int func_77() {
	char *sVar0;

	sVar0 = ui::_get_text_substring(ui::_get_label_text(&cLocal_73), 0, 1);
	if (gameplay::are_strings_equal(sVar0, "0")) {
		return 0;
	}
	return 1;
}

// Position - 0x3CFC
int func_78(int iParam0) {
	char *sVar0;

	sVar0 = ui::_get_text_substring(ui::_get_label_text(&cLocal_66), iParam0 * 3 + 2, iParam0 * 3 + 3);
	return func_79(sVar0);
}

// Position - 0x3D22
int func_79(char *sParam0) {
	if (gameplay::are_strings_equal(sParam0, "0")) {
		return 0;
	}
	if (gameplay::are_strings_equal(sParam0, "1")) {
		return 1;
	}
	if (gameplay::are_strings_equal(sParam0, "2")) {
		return 2;
	}
	if (gameplay::are_strings_equal(sParam0, "3")) {
		return 3;
	}
	if (gameplay::are_strings_equal(sParam0, "4")) {
		return 4;
	}
	if (gameplay::are_strings_equal(sParam0, "5")) {
		return 5;
	}
	if (gameplay::are_strings_equal(sParam0, "6")) {
		return 6;
	}
	if (gameplay::are_strings_equal(sParam0, "7")) {
		return 7;
	}
	if (gameplay::are_strings_equal(sParam0, "8")) {
		return 8;
	}
	if (gameplay::are_strings_equal(sParam0, "9")) {
		return 9;
	}
	if (gameplay::are_strings_equal(sParam0, "A")) {
		return 10;
	}
	if (gameplay::are_strings_equal(sParam0, "B")) {
		return 11;
	}
	if (gameplay::are_strings_equal(sParam0, "C")) {
		return 12;
	}
	if (gameplay::are_strings_equal(sParam0, "D")) {
		return 13;
	}
	if (gameplay::are_strings_equal(sParam0, "E")) {
		return 14;
	}
	if (gameplay::are_strings_equal(sParam0, "F")) {
		return 15;
	}
	if (gameplay::are_strings_equal(sParam0, "G")) {
		return 16;
	}
	if (gameplay::are_strings_equal(sParam0, "H")) {
		return 17;
	}
	if (gameplay::are_strings_equal(sParam0, "I")) {
		return 18;
	}
	if (gameplay::are_strings_equal(sParam0, "J")) {
		return 19;
	}
	if (gameplay::are_strings_equal(sParam0, "K")) {
		return 20;
	}
	if (gameplay::are_strings_equal(sParam0, "L")) {
		return 21;
	}
	if (gameplay::are_strings_equal(sParam0, "M")) {
		return 22;
	}
	if (gameplay::are_strings_equal(sParam0, "N")) {
		return 23;
	}
	if (gameplay::are_strings_equal(sParam0, "O")) {
		return 24;
	}
	if (gameplay::are_strings_equal(sParam0, "P")) {
		return 25;
	}
	if (gameplay::are_strings_equal(sParam0, "Q")) {
		return 26;
	}
	if (gameplay::are_strings_equal(sParam0, "R")) {
		return 27;
	}
	if (gameplay::are_strings_equal(sParam0, "S")) {
		return 28;
	}
	if (gameplay::are_strings_equal(sParam0, "T")) {
		return 29;
	}
	if (gameplay::are_strings_equal(sParam0, "U")) {
		return 30;
	}
	if (gameplay::are_strings_equal(sParam0, "V")) {
		return 31;
	}
	if (gameplay::are_strings_equal(sParam0, "W")) {
		return 32;
	}
	if (gameplay::are_strings_equal(sParam0, "X")) {
		return 33;
	}
	if (gameplay::are_strings_equal(sParam0, "Y")) {
		return 34;
	}
	if (gameplay::are_strings_equal(sParam0, "Z")) {
		return 35;
	}
	if (gameplay::are_strings_equal(sParam0, "z")) {
		return -1;
	}
	return -1;
}

// Position - 0x3FBF
int func_80(int iParam0) {
	char *sVar0;

	sVar0 = ui::_get_text_substring(ui::_get_label_text(&cLocal_66), iParam0 * 3 + 1, iParam0 * 3 + 2);
	return func_79(sVar0);
}

// Position - 0x3FE5
int func_81(int iParam0) {
	char *sVar0;

	sVar0 = ui::_get_text_substring(ui::_get_label_text(&cLocal_66), iParam0 * 3, iParam0 * 3 + 1);
	return func_79(sVar0);
}

// Position - 0x400B
void func_82() {
	cLocal_85 = {Global_15364.f_6[iLocal_92 /*6*/]};
	StringConCat(&cLocal_85, "LF", 24);
	if (ui::does_text_label_exist(&cLocal_85)) {
		sLocal_91 = ui::_get_label_text(&cLocal_85);
		if (gameplay::is_string_null(sLocal_91)) {
		}
	}
}

// Position - 0x4044
void func_83() {
	cLocal_73 = {Global_15364.f_6[iLocal_92 /*6*/]};
	StringConCat(&cLocal_73, "IF", 24);
	if (ui::does_text_label_exist(&cLocal_73)) {
		sLocal_79 = ui::_get_text_substring(ui::_get_label_text(&cLocal_73), 0, 1);
		if (gameplay::is_string_null(sLocal_79)) {
		}
		sLocal_80 = ui::_get_text_substring(ui::_get_label_text(&cLocal_73), 1, 2);
		if (gameplay::is_string_null(sLocal_80)) {
		}
		sLocal_81 = ui::_get_text_substring(ui::_get_label_text(&cLocal_73), 2, 3);
		if (gameplay::is_string_null(sLocal_81)) {
		}
	}
}

// Position - 0x40B1
void func_84() {
	cLocal_66 = {Global_15364.f_6[iLocal_92 /*6*/]};
	StringConCat(&cLocal_66, "SL", 24);
	if (ui::does_text_label_exist(&cLocal_66)) {
		sLocal_72 = ui::_get_label_text(&cLocal_66);
		if (gameplay::is_string_null(sLocal_72)) {
		}
	}
}

// Position - 0x40EA
void func_85() {
	func_86();
	audio::_0x0B568201DD99F0EB(iLocal_83);
	audio::_0x61631F5DF50D1C34(iLocal_84);
	if (Global_16737) {
		audio::preload_script_conversation(Global_15364.f_368, Global_15364.f_369, Global_15364.f_370, iLocal_82);
		iLocal_36 = gameplay::get_game_timer();
	}
	else {
		audio::start_script_conversation(Global_15364.f_368, Global_15364.f_369, Global_15364.f_370, iLocal_82);
	}
	Global_15745 = 4;
}

// Position - 0x4145
void func_86() {
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	iVar0 = 1;
	iVar1 = 1;
	iVar2 = 0;
	iLocal_29 = 0;
	iLocal_31 = 0;
	iLocal_33 = 0;
	if (ui::does_text_block_exist(&Global_15821)) {
		if (gameplay::are_strings_equal(&Global_15821, "CT_AUD")) {
			Global_2621442 = 1;
		}
		iVar13 = 0;
		if (gameplay::is_orbis_version() || gameplay::is_durango_version()) {
			if (Global_1573336 == 1) {
				iVar13 = 1;
			}
			else {
				iVar13 = 2;
			}
		}
		iVar14 = 0;
		if (Global_69702 || func_94()) {
			if (Global_1573336 == 0) {
				iVar14 = 1;
			}
		}
		else if (!func_92()) {
			iVar14 = 1;
		}
		if (func_91()) {
			iVar14 = 0;
			Global_2621442 = 0;
			iVar13 = 1;
		}
		if (Global_15747 < 5 || Global_15747 == 10 || Global_15747 == 12 || Global_15747 == 13) {
			if (iVar14 == 1 || Global_2621442 == 1 || iVar13 == 2) {
				ui::request_additional_text(&Global_15821, 7);
				while (!ui::has_additional_text_loaded(7)) {
					system::wait(0);
				}
			}
			else {
				ui::_request_additional_text_2(&Global_15821, 15);
				while (!ui::has_additional_text_loaded(15)) {
					system::wait(0);
				}
			}
		}
		else if (iVar14 == 1 || Global_2621442 == 1 || iVar13 == 2) {
			ui::request_additional_text(&Global_15821, 6);
			while (!ui::has_additional_text_loaded(6)) {
				system::wait(0);
			}
		}
		else {
			ui::_request_additional_text_2(&Global_15821, 14);
			while (!ui::has_additional_text_loaded(14)) {
				system::wait(0);
			}
		}
	}
	else {
		iLocal_33 = 1;
		return;
	}
	audio::create_new_scripted_conversation();
	func_90();
	func_89();
	func_88();
	func_87();
	Global_16755 = 0;
	while (iVar2 < 70 && iLocal_29 == 0) {
		cLocal_44 = {Global_15364};
		StringConCat(&cLocal_44, "A", 24);
		Global_14613[iVar2 /*6*/] = {Global_15364};
		StringConCat(&Global_14613[iVar2 /*6*/], "_", 24);
		StringIntConCat(&Global_14613[iVar2 /*6*/], iVar1, 24);
		cLocal_38 = {Global_14613[iVar2 /*6*/]};
		StringConCat(&cLocal_38, "A", 24);
		if (ui::does_text_label_exist(&cLocal_38)) {
			StringCopy(&cLocal_50, ui::_get_label_text(&cLocal_38), 64);
			iVar3 = func_81(iVar2);
			if (iVar3 == 9) {
				if (Global_2595506 == 0) {
				}
			}
			iVar4 = func_80(iVar2);
			iVar5 = func_78(iVar2);
			iLocal_82 = func_77();
			iLocal_83 = func_76();
			iLocal_84 = func_75();
			iVar6 = func_74(iVar2);
			iVar7 = func_73(iVar2);
			iVar8 = func_72(iVar2);
			iVar12 = func_71(iVar2);
			iVar9 = func_70(iVar2);
			iVar10 = func_69(iVar2);
			iVar11 = func_68(iVar2);
			if (ui::does_text_label_exist(&Global_14613[iVar2 /*6*/])) {
				if (Global_16735 == 0 && Global_16741 == 0) {
					if (iVar3 > 36 || iVar4 > 36) {
					}
					audio::add_line_to_conversation(iVar3, &cLocal_50, &Global_14613[iVar2 /*6*/], iVar4, iVar5, 0,
													iVar6, iVar7, iVar8, iVar12, iVar9, iVar10, iVar11);
				}
				else if (gameplay::are_strings_equal(&Global_14613[iVar2 /*6*/], &Global_16743)) {
					if (iVar3 > 36 || iVar4 > 36) {
					}
					audio::add_line_to_conversation(iVar3, &cLocal_50, &Global_14613[iVar2 /*6*/], iVar4, iVar5, 0,
													iVar6, iVar7, iVar8, iVar12, iVar9, iVar10, iVar11);
					Global_16755 = iVar2;
					if (Global_16741 == 1) {
						Global_16741 = 0;
					}
				}
			}
			else if (Global_16741 == 0 && Global_16735 == 0) {
				audio::add_line_to_conversation(iVar3, &cLocal_50, &cLocal_50, iVar4, iVar5, 0, iVar6, iVar7, iVar8,
												iVar12, iVar9, iVar10, iVar11);
			}
			iVar1 += iVar0;
		}
		else {
			if (ui::does_text_label_exist(&cLocal_44)) {
				StringCopy(&cLocal_50, ui::_get_label_text(&cLocal_44), 64);
				iVar3 = func_81(iVar2);
				iVar4 = func_80(iVar2);
				iVar5 = func_78(iVar2);
				iLocal_82 = func_77();
				iLocal_83 = func_76();
				iLocal_84 = func_75();
				iVar6 = func_74(iVar2);
				iVar7 = func_73(iVar2);
				iVar8 = func_72(iVar2);
				iVar12 = func_71(iVar2);
				iVar9 = func_70(iVar2);
				iVar10 = func_69(iVar2);
				iVar11 = func_68(iVar2);
				audio::add_line_to_conversation(iVar3, &cLocal_50, &Global_15364, iVar4, iVar5, 1, iVar6, iVar7, iVar8,
												iVar12, iVar9, iVar10, iVar11);
			}
			iLocal_29 = 1;
		}
		iVar2++;
		if (iVar2 == 70) {
		}
	}
}

// Position - 0x4549
void func_87() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 15) {
		if (Global_15034[iVar0 /*10*/].f_7 == 1) {
			if (entity::does_entity_exist(Global_15034[iVar0 /*10*/]) || Global_15034[iVar0 /*10*/] == 0) {
				audio::add_ped_to_conversation(iVar0, Global_15034[iVar0 /*10*/], &Global_15034[iVar0 /*10*/].f_1);
			}
			if (Global_15034.f_161 == iVar0) {
				if (Global_15034.f_162 != 0f && Global_15034.f_162.f_1 != 0f && Global_15034.f_162.f_2 != 0f) {
					system::wait(0);
					audio::_0x33E3C6C6F2F0B506(Global_15034.f_161, Global_15034.f_162);
				}
			}
		}
		iVar0++;
	}
	if (Global_2595506 == 1) {
		Global_2595506 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 19) {
			if (Global_2595325[iVar0 /*9*/].f_7 == 1) {
				if (entity::does_entity_exist(Global_2595325[iVar0 /*9*/]) || Global_2595325[iVar0 /*9*/] == 0) {
					audio::add_ped_to_conversation(Global_2595325[iVar0 /*9*/].f_8, Global_2595325[iVar0 /*9*/],
												   &Global_2595325[iVar0 /*9*/].f_1);
				}
			}
			iVar0++;
		}
	}
}

// Position - 0x4659
void func_88() {
	cLocal_85 = {Global_15364};
	StringConCat(&cLocal_85, "LF", 24);
	if (ui::does_text_label_exist(&cLocal_85)) {
		sLocal_91 = ui::_get_label_text(&cLocal_85);
		if (gameplay::is_string_null(sLocal_91)) {
		}
	}
}

// Position - 0x468C
void func_89() {
	cLocal_73 = {Global_15364};
	StringConCat(&cLocal_73, "IF", 24);
	if (ui::does_text_label_exist(&cLocal_73)) {
		sLocal_79 = ui::_get_text_substring(ui::_get_label_text(&cLocal_73), 0, 1);
		if (gameplay::is_string_null(sLocal_79)) {
		}
		sLocal_80 = ui::_get_text_substring(ui::_get_label_text(&cLocal_73), 1, 2);
		if (gameplay::is_string_null(sLocal_80)) {
		}
		sLocal_81 = ui::_get_text_substring(ui::_get_label_text(&cLocal_73), 2, 3);
		if (gameplay::is_string_null(sLocal_81)) {
		}
	}
}

// Position - 0x46F3
void func_90() {
	cLocal_66 = {Global_15364};
	StringConCat(&cLocal_66, "SL", 24);
	if (ui::does_text_label_exist(&cLocal_66)) {
		sLocal_72 = ui::_get_label_text(&cLocal_66);
		if (gameplay::is_string_null(sLocal_72)) {
		}
	}
}

// Position - 0x4726
bool func_91() {
	if (gameplay::are_strings_equal(&Global_15821, "APCUTAU") || gameplay::are_strings_equal(&Global_15821, "APAIR") ||
		gameplay::are_strings_equal(&Global_15821, "APCALAU") || gameplay::are_strings_equal(&Global_15821, "PBPAU") ||
		gameplay::are_strings_equal(&Global_15821, "EXPOWAU") ||
		gameplay::are_strings_equal(&Global_15821, "EXCALAU") ||
		gameplay::are_strings_equal(&Global_15821, "EXCPAAU") ||
		gameplay::are_strings_equal(&Global_15821, "EXHELAU") ||
		gameplay::are_strings_equal(&Global_15821, "BPLESAU") ||
		gameplay::are_strings_equal(&Global_15821, "BPMALAU") ||
		gameplay::are_strings_equal(&Global_15821, "LOWREAU") ||
		gameplay::are_strings_equal(&Global_15821, "IMTRAAU") ||
		gameplay::are_strings_equal(&Global_15821, "IMAMPAU") ||
		gameplay::are_strings_equal(&Global_15821, "IMWEDAU") ||
		gameplay::are_strings_equal(&Global_15821, "IMBUSAU") ||
		gameplay::are_strings_equal(&Global_15821, "IMROCAU") ||
		gameplay::are_strings_equal(&Global_15821, "IMFLIAU") ||
		gameplay::are_strings_equal(&Global_15821, "IMPAAUD") ||
		gameplay::are_strings_equal(&Global_15821, "IMDUNAU") ||
		gameplay::are_strings_equal(&Global_15821, "IMRUIAU") ||
		gameplay::are_strings_equal(&Global_15821, "IMMECAU") ||
		gameplay::are_strings_equal(&Global_15821, "IMARMAU") ||
		gameplay::are_strings_equal(&Global_15821, "IMBLZAU") ||
		gameplay::are_strings_equal(&Global_15821, "IMPHAAU") ||
		gameplay::are_strings_equal(&Global_15821, "IMTECAU") ||
		gameplay::are_strings_equal(&Global_15821, "IMVOLAU") ||
		gameplay::are_strings_equal(&Global_15821, "IMWASAU")) {
		return true;
	}
	return false;
}

// Position - 0x48FB
int func_92() {
	if (Global_2621550) {
		if (func_12(0)) {
			if (Global_3145728 || func_93(0)) {
				return 1;
			}
		}
	}
	if (Global_2621549) {
		if (func_12(0)) {
			if (Global_3670016 || func_93(0)) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x494E
int func_93(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return 1;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x4979
var func_94() { return Global_1315210; }

// Position - 0x4985
void func_95() {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (gameplay::is_orbis_version() || gameplay::is_durango_version()) {
		if (Global_1573336 == 1) {
			iVar0 = 1;
		}
		else {
			iVar0 = 2;
		}
	}
	iVar1 = 0;
	if (Global_69702) {
		if (Global_1573336 == 0) {
			iVar1 = 1;
		}
	}
	else if (!func_92()) {
		iVar1 = 1;
	}
	if (ui::does_text_block_exist(&Global_15821)) {
		if (gameplay::are_strings_equal(&Global_15821, "CT_AUD")) {
			Global_2621442 = 1;
		}
	}
	if (func_91()) {
		iVar1 = 0;
		Global_2621442 = 0;
		iVar0 = 1;
	}
	if (Global_15747 < 5 || Global_15747 == 10 || Global_15747 == 12 || Global_15747 == 13) {
		if (iVar1 == 1 || Global_2621442 == 1 || iVar0 == 2) {
			ui::request_additional_text(&Global_15821, 7);
			while (!ui::has_additional_text_loaded(7)) {
				system::wait(0);
			}
		}
		else {
			ui::_request_additional_text_2(&Global_15821, 15);
			while (!ui::has_additional_text_loaded(15)) {
				system::wait(0);
			}
		}
	}
	else if (iVar1 == 1 || Global_2621442 == 1 || iVar0 == 2) {
		ui::request_additional_text(&Global_15821, 6);
		while (!ui::has_additional_text_loaded(6)) {
			system::wait(0);
		}
	}
	else {
		ui::_request_additional_text_2(&Global_15821, 14);
		while (!ui::has_additional_text_loaded(14)) {
			system::wait(0);
		}
	}
	audio::create_new_scripted_conversation();
	func_87();
}

// Position - 0x4AE3
void func_96() {
	while (Global_14426 == 1 &&
		   script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) > 0) {
		system::wait(0);
	}
	Global_14426 = 0;
	if (gameplay::is_bit_set(Global_2313, 20)) {
		gameplay::set_bit(&Global_2314, 1);
	}
	else {
		gameplay::clear_bit(&Global_2314, 1);
	}
	Global_14427 = 0;
	if (Global_15741 == 0) {
		if (!Global_15758) {
			func_86();
		}
	}
	else {
		func_67();
	}
	Global_14612 = 0;
	if (Global_15755) {
		if (Global_16762 == 0) {
			if (Global_15758 == 0) {
				iLocal_34 = 5000;
				audio::preload_script_phone_conversation(Global_15364.f_368, Global_15364.f_369);
			}
			else {
				iLocal_34 = 0;
			}
		}
		else {
			iLocal_34 = 0;
		}
		Global_14612 = 1;
		system::settimerb(0);
		while (Global_14612 == 1 && Global_15745 == 1 && system::timerb() < iLocal_34) {
			system::wait(0);
			if (!player::is_player_playing(player::player_id())) {
				Global_14612 = 0;
				audio::stop_scripted_conversation(0);
				Global_15745 = 6;
			}
			if (audio::is_mobile_phone_call_ongoing()) {
				if (audio::_0xE73364DB90778FFA()) {
					Global_14612 = 0;
				}
			}
		}
		if (system::timerb() > iLocal_34) {
		}
		if (Global_15745 != 1) {
		}
		if (Global_14612 == 0) {
		}
	}
	Global_14612 = 0;
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0 || Global_15745 != 1 || Global_14409 == 1) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
	}
	else {
		if (Global_15753) {
			Global_16763 = 0;
			iLocal_32 = 0;
		}
		if (Global_15755 == 0) {
			if (Global_15796 == 0) {
				Global_14445 = Global_14443.f_1;
				Global_15796 = 1;
			}
			iLocal_30 = 0;
			if (Global_16762 == 0) {
				audio::preload_script_phone_conversation(Global_15364.f_368, Global_15364.f_369);
				system::wait(0);
				Global_15745 = 3;
				Global_14612 = 1;
				system::settimerb(0);
				gameplay::set_bit(&Global_2313, 27);
				system::settimera(0);
			}
			else {
				Global_14612 = 0;
				Global_15745 = 4;
			}
			Global_14442 = 0;
			if (Global_15756 == 1) {
				if (Global_14443.f_1 == 10) {
				}
				if (Global_14443.f_1 != 9) {
					if (Global_14443.f_1 > 4) {
						if (Global_14426 == 0) {
							Global_14443.f_1 = 9;
							func_8();
						}
					}
					else {
						Global_14443.f_1 = 4;
					}
				}
				else {
					func_8();
				}
			}
			else {
				while (Global_14443.f_1 == 4) {
					system::wait(0);
					if (Global_14612 == 1) {
						if (audio::is_mobile_phone_call_ongoing()) {
							if (audio::_0xE73364DB90778FFA()) {
								Global_14612 = 0;
							}
						}
					}
				}
				if (Global_14443.f_1 == 6) {
				}
				if (Global_14443.f_1 == 10) {
				}
				if (Global_14443.f_1 == 3) {
					audio::stop_scripted_conversation(0);
					Global_15745 = 6;
					Global_14427 = 1;
					return;
				}
				Global_14443.f_1 = 9;
				func_8();
			}
			if (network::network_is_game_in_progress()) {
				iLocal_101 = network::get_network_time();
			}
			else {
				iLocal_99 = gameplay::get_game_timer();
			}
			while (Global_14443.f_1 != 9 && Global_14426 == 0) {
				system::wait(0);
				if (Global_14612 == 1) {
					if (audio::is_mobile_phone_call_ongoing()) {
						if (audio::_0xE73364DB90778FFA()) {
							Global_14612 = 0;
						}
					}
				}
				if (network::network_is_game_in_progress()) {
					iLocal_108 = network::get_time_difference(network::get_network_time(), iLocal_101);
				}
				else {
					iLocal_100 = gameplay::get_game_timer();
					iLocal_108 = iLocal_100 - iLocal_99;
				}
				if (script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) == 0) {
					if (iLocal_108 > 15000) {
						Global_16761 = 1;
						Global_14426 = 1;
					}
				}
			}
			if (!gameplay::is_bit_set(Global_2313, 11)) {
				if (func_44() == 0) {
					func_54();
				}
			}
			if (Global_14426 == 0) {
				if (Global_16762 != 0) {
					Global_15802 = 0;
					func_60();
					func_59();
					if (!Global_15758) {
						if (Global_16762 == 0) {
							audio::start_preloaded_conversation();
						}
						else {
							audio::start_script_phone_conversation(Global_15364.f_368, Global_15364.f_369);
						}
					}
					func_58();
				}
			}
			else {
				func_97();
				Global_14427 = 1;
			}
		}
		else {
			Global_14442 = 1;
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
					if (Global_14443.f_1 == 3) {
					}
				}
				else {
					gameplay::clear_bit(&Global_2314, 21);
				}
			}
			if (Global_15796 == 0) {
				Global_14445 = Global_14443.f_1;
				Global_15796 = 1;
			}
			if (Global_14443.f_1 == 3) {
				Global_14443.f_1 = 4;
			}
			else {
				while (Global_14443.f_1 == 4) {
					system::wait(0);
				}
				if (Global_14443.f_1 == 6) {
				}
				Global_14443.f_1 = 9;
				func_8();
			}
			if (network::network_is_game_in_progress()) {
				iLocal_101 = network::get_network_time();
			}
			else {
				iLocal_99 = gameplay::get_game_timer();
			}
			while (Global_14443.f_1 != 9 && Global_14426 == 0) {
				system::wait(0);
				if (network::network_is_game_in_progress()) {
					iLocal_108 = network::get_time_difference(network::get_network_time(), iLocal_101);
				}
				else {
					iLocal_100 = gameplay::get_game_timer();
					iLocal_108 = iLocal_100 - iLocal_99;
				}
				if (script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) == 0) {
					if (iLocal_108 > 20000) {
						Global_16761 = 1;
						Global_14426 = 1;
						gameplay::clear_bit(&Global_2314, 21);
					}
				}
			}
			if (Global_14426 == 0) {
				Global_15745 = 2;
			}
			else {
				func_97();
				Global_14427 = 1;
			}
			if (network::network_is_game_in_progress()) {
				iLocal_95 = network::get_network_time();
				iLocal_98 = network::get_network_time();
			}
			else {
				iLocal_93 = gameplay::get_game_timer();
				iLocal_96 = gameplay::get_game_timer();
			}
		}
	}
}

// Position - 0x4F79
void func_97() {
	Global_14611 = 0;
	func_102();
}

// Position - 0x4F89
void func_98() {
	float fVar0;

	fVar0 = func_99(Global_14396[Global_14388 /*3*/], Global_14389[Global_14388 /*3*/], Global_14403, Global_14374,
					350f, 0);
	if (fVar0 >= 1f) {
		if (Global_16759 == 0) {
			ui::display_radar(1);
		}
		iLocal_32 = 0;
	}
}

// Position - 0x4FD1
float func_99(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, float fParam12, int iParam13) {
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
	if (func_44() && Global_2595533 == 0) {
		return 2f;
	}
	if (iLocal_18 == 0) {
		iLocal_18 = gameplay::get_game_timer();
	}
	fVar3 = func_101(system::to_float(gameplay::get_game_timer() - iLocal_18) / fParam12, 0f, 1f);
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
		Global_14371 = {func_100(vParam0, vParam3, fVar4)};
		Global_14374 = {func_100(vParam6, vParam9, fVar4)};
	}
	else {
		Global_14371 = {vParam3};
		Global_14374 = {vParam9};
	}
	mobile::set_mobile_phone_position(Global_14371);
	mobile::set_mobile_phone_rotation(Global_14374, 0);
	return fVar3;
}

// Position - 0x50E3
Vector3 func_100(vector3 vParam0, vector3 vParam3, float fParam6) {
	return vParam0 + vParam3 - vParam0 * FtoV(fParam6);
}

// Position - 0x50FD
float func_101(float fParam0, float fParam1, float fParam2) {
	if (fParam0 > fParam2) {
		return fParam2;
	}
	else if (fParam0 < fParam1) {
		return fParam1;
	}
	return fParam0;
}

// Position - 0x5124
void func_102() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_mobile_phone_call_ongoing() || Global_14443.f_1 == 9 || Global_14442 == 1) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(1);
		Global_15745 = 6;
		return;
	}
}

// Position - 0x517B
bool func_103(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7) {
		if (iParam3 < 12) {
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_104(sParam2, iParam3, 0);
}

// Position - 0x51C9
int func_104(char *sParam0, int iParam1, int iParam2) {
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2) {
		if (Global_15745 != 0) {
			if (iParam1 > Global_15747) {
				if (Global_15752 == 0) {
					audio::stop_scripted_conversation(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else {
					func_102();
					return 0;
				}
			}
			else {
				return 0;
			}
		}
		if (audio::is_scripted_conversation_ongoing()) {
			return 0;
		}
		if (func_34(8, -1)) {
			return 0;
		}
		Global_15821 = {Global_15815};
		func_33();
		Global_15034 = {Global_15199};
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = {Global_15776};
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = {Global_16749};
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751) {
			gameplay::clear_bit(&Global_2313, 20);
			gameplay::clear_bit(&Global_2314, 17);
			gameplay::clear_bit(&Global_2315, 0);
			if (iParam2) {
				func_27();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2) {
					if (iParam1 == 13) {
					}
					else {
						return 0;
					}
				}
				if (Global_14443.f_1 > 3) {
					return 0;
				}
			}
			if (Global_14409 == 1) {
				return 0;
			}
			if (player::is_player_playing(player::player_id())) {
				if (ped::is_ped_in_melee_combat(player::player_ped_id())) {
					return 0;
				}
				if (func_26()) {
					return 0;
				}
				if (ai::is_ped_sprinting(player::player_ped_id())) {
					return 0;
				}
				if (ped::is_ped_ragdoll(player::player_ped_id())) {
					return 0;
				}
				if (ped::is_ped_in_parachute_free_fall(player::player_ped_id())) {
					return 0;
				}
				if (weapon::get_is_ped_gadget_equipped(player::player_ped_id(), joaat("gadget_parachute"))) {
					return 0;
				}
				if (!Global_69702) {
					if (entity::is_entity_in_water(player::player_ped_id())) {
						return 0;
					}
					if (player::is_player_climbing(player::player_id())) {
						return 0;
					}
					if (ped::is_ped_planting_bomb(player::player_ped_id())) {
						return 0;
					}
					if (player::is_special_ability_active(player::player_id())) {
						return 0;
					}
				}
			}
			if (func_25()) {
				return 0;
			}
			else {
				switch (Global_14443.f_1) {
				case 7: return 0;

				case 8: return 0;

				case 9: break;

				case 10: break;

				default: break;
				}
				if (gameplay::is_bit_set(Global_2313, 9)) {
					return 0;
				}
			}
			func_24();
			Global_15755 = iParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_48();
		return 1;
	}
	if (Global_15745 == 5) {
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747) {
		return 0;
	}
	if (iParam1 == 2) {
	}
	else {
		func_102();
	}
	return 0;
}

// Position - 0x5495
int func_105() {
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return 1;
	}
	return 0;
}

// Position - 0x54B7
void func_106(int iParam0, char *sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6,
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
		func_9(sParam7);
	}
	if (!gameplay::is_string_null_or_empty(sParam8)) {
		func_9(sParam8);
	}
	if (!gameplay::is_string_null_or_empty(sParam9)) {
		func_9(sParam9);
	}
	if (!gameplay::is_string_null_or_empty(sParam10)) {
		func_9(sParam10);
	}
	if (!gameplay::is_string_null_or_empty(sParam11)) {
		func_9(sParam11);
	}
	graphics::_pop_scaleform_movie_function_void();
}
