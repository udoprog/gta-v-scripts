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
struct<2> Local_28 = {
	0, 0
};
struct<2> Local_30[94];
struct<4> ScriptParam_0 = {
	0, 0, 0, 0
};
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	if (Global_2621550) {
		if (script::_get_number_of_instances_of_script_with_name_hash(-43879923) == 0) {
			script::request_script_with_name_hash(-43879923);
			while (!script::has_script_with_name_hash_loaded(-43879923)) {
				system::wait(0);
			}
			system::start_new_script_with_name_hash_and_args(-43879923, &ScriptParam_0, 4, 1424);
		}
		script::terminate_this_thread();
	}
	else if (Global_2621549) {
		if (script::_get_number_of_instances_of_script_with_name_hash(1179280373) == 0) {
			script::request_script_with_name_hash(1179280373);
			while (!script::has_script_with_name_hash_loaded(1179280373)) {
				system::wait(0);
			}
			system::start_new_script_with_name_hash_and_args(1179280373, &ScriptParam_0, 4, 1424);
		}
		script::terminate_this_thread();
	}
	if (player::has_force_cleanup_occurred(2)) {
		script::terminate_this_thread();
	}
	switch (ScriptParam_0) {
	case 1:
		switch (ScriptParam_0.f_1) {
		case 75:
			if (ScriptParam_0.f_2 == 5) {
				func_81(1, 0, 1);
				func_80();
			}
			else if (ScriptParam_0.f_2 == 76) {
				func_80();
			}
			else {
				func_81(1, 1, 0);
			}
			break;

		case 133:
			if (ScriptParam_0.f_2 == 76) {
				func_80();
			}
			else {
				func_81(7, 1, 0);
			}
			break;

		case 76: func_32(ScriptParam_0.f_3, 0); break;

		case 52:
			if (ScriptParam_0.f_2 == 52) {
				ui::_0x0CF54F20DE43879C(ScriptParam_0.f_3);
			}
			break;

		default:
			func_31(1);
			if (ScriptParam_0.f_1 == 26 || ScriptParam_0.f_1 == 25) {
				func_29(0, 1);
				func_28(2, 0);
				func_80();
				Global_69951 = 0;
				func_27(-1);
			}
			else if (ScriptParam_0.f_1 == 5) {
				if (ScriptParam_0.f_2 == 75 || ScriptParam_0.f_2 == 133) {
				}
				else {
					func_29(0, 1);
				}
			}
			else {
				func_29(0, 1);
				func_28(2, 0);
				if (ScriptParam_0.f_1 != 52) {
					func_28(1, 0);
				}
				Global_69951 = 0;
				func_27(-1);
			}
			break;
		}
		break;

	case 2:
		switch (ScriptParam_0.f_1) {
		case 5:
			switch (Global_69951) {
			case 1: func_81(1, 1, 0); break;

			case 7: func_81(7, 1, 0); break;
			}
			break;

		case 75: func_2(1, 0); break;

		case 133: func_2(7, 0); break;

		case 76:
			if (Global_69968 != -1) {
				func_1(Global_69968, Global_69951);
				func_27(-1);
				ui::set_frontend_active(0);
				cam::do_screen_fade_out(0);
				unk2::_reset_editor_values();
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
					if (vehicle::is_vehicle_driveable(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 0)) {
						Global_69953 = {
							entity::get_entity_velocity(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0))};
					}
				}
				if (!ped::is_ped_injured(player::player_ped_id())) {
					entity::set_entity_invincible(player::player_ped_id(), 1);
				}
			}
			break;
		}
		break;
	}
	script::terminate_this_thread();
}

// Position - 0x2EC
void func_1(int iParam0, int iParam1) {
	Global_69948 = iParam0;
	Global_69948.f_1 = iParam1;
	if (iParam1 == 7) {
		if (iParam0 >= 0 && iParam0 < 63) {
			Global_100787[iParam0 /*10*/].f_3 = 1;
		}
	}
	gameplay::set_bit(&Global_69950, 0);
}

// Position - 0x32D
void func_2(int iParam0, int iParam1) {
	if (func_8() == -1) {
		if (func_5(iParam0)) {
			func_4(2);
			func_32(Global_69968, iParam1);
			func_3(1);
		}
	}
}

// Position - 0x361
void func_3(int iParam0) {
	func_28(1, iParam0);
	func_28(2, iParam0);
}

// Position - 0x377
int func_4(int iParam0) {
	ui::request_additional_text("MISHSTA", 8);
	if (!ui::has_additional_text_loaded(8)) {
		return 0;
	}
	iParam0++;
	return 1;
}

// Position - 0x39C
bool func_5(int iParam0) {
	switch (iParam0) {
	case 1: return func_7();

	case 7: return func_6();

	default: break;
	}
	return false;
}

// Position - 0x3CF
int func_6() {
	if (Global_101700.f_17533.f_380 > 0) {
		return 1;
	}
	return 0;
}

// Position - 0x3EA
int func_7() {
	if (Global_2621550) {
		if (Global_3145728.f_931.f_21 > 0) {
			return 1;
		}
		return 0;
	}
	else if (Global_2621549) {
		if (Global_3670016.f_931.f_21 > 0) {
			return 1;
		}
		return 0;
	}
	else if (Global_101700.f_8975.f_21 > 0) {
		return 1;
	}
	return 0;
}

// Position - 0x442
int func_8() {
	if (func_26()) {
		if (func_25(14)) {
			return 5;
		}
		return 0;
	}
	if (Global_69962 == 1) {
		return 0;
	}
	if (Global_2621550) {
		if (script::_get_number_of_instances_of_script_with_name_hash(-1516147206) > 0) {
			return 0;
		}
	}
	else if (Global_2621549) {
		if (script::_get_number_of_instances_of_script_with_name_hash(2006115718) > 0) {
			return 0;
		}
	}
	else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("mission_stat_watcher")) > 0) {
		return 0;
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("creator")) > 0) {
		return 1;
	}
	if (func_24(0)) {
		return 0;
	}
	if (func_23(Global_100725, 256)) {
		return 2;
	}
	if (func_22()) {
		return 2;
	}
	if (func_21()) {
		return 3;
	}
	if (func_20()) {
		return 3;
	}
	if (func_19()) {
		return 3;
	}
	if (func_10()) {
		return 3;
	}
	if (streaming::is_player_switch_in_progress() || func_9()) {
		return 2;
	}
	if (entity::does_entity_exist(player::player_ped_id())) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (entity::is_entity_in_angled_area(player::player_ped_id(), 207.4336f, -1019.795f, -100.4728f, 189.9338f,
												 -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) &&
				ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				return 3;
			}
		}
	}
	if (G_DisableMessagesAndCalls1) {
		return 2;
	}
	if (Global_68531.f_577) {
		return 4;
	}
	return -1;
}

// Position - 0x5A4
int func_9() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("player_timetable_scene")) > 0) {
		return 1;
	}
	return 0;
}

// Position - 0x5BE
bool func_10() {
	int iVar0;

	if (func_18()) {
		iVar0 = 0;
		while (iVar0 < 46) {
			if (func_11(iVar0)) {
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

// Position - 0x5EE
bool func_11(int iParam0) { return func_12(iParam0, 20, 1); }

// Position - 0x5FF
int func_12(int iParam0, int iParam1, int iParam2) {
	if (iParam2) {
		return gameplay::is_bit_set(Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_17() == 0) {
			return gameplay::is_bit_set(func_13(func_16(iParam0), -1, 0), iParam1);
		}
	}
	else {
		return gameplay::is_bit_set(Global_101700.f_668[iParam0], iParam1);
	}
	return 0;
}

// Position - 0x65F
int func_13(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_14(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x691
int func_14(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_15();
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

// Position - 0x6C5
var func_15() { return Global_1312735; }

// Position - 0x6D1
int func_16(int iParam0) {
	switch (iParam0) {
	case 0: return 822;

	case 1: return 823;

	case 2: return 824;

	case 3: return 825;

	case 4: return 826;

	case 5: return 827;

	case 6: return 828;

	case 7: return 829;

	case 8: return 830;

	case 9: return 831;

	case 10: return 832;

	case 11: return 833;

	case 12: return 834;

	case 13: return 835;

	case 14: return 836;

	case 15: return 838;

	case 16: return 839;

	case 17: return 840;

	case 18: return 841;

	case 19: return 842;

	case 20: return 843;

	case 21: return 844;

	case 22: return 845;

	case 23: return 846;

	case 24: return 847;

	case 25: return 848;

	case 26: return 849;

	case 27: return 850;

	case 28: return 851;

	case 29: return 852;

	case 30: return 853;

	case 31: return 854;

	case 32: return 855;

	case 33: return 856;

	case 34: return 857;

	case 35: return 858;

	case 36: return 859;

	case 37: return 860;

	case 38: return 861;

	case 39: return 862;

	case 40: return 866;

	case 41: return 867;

	case 42: return 868;

	case 43: return 869;

	case 44: return 5847;

	case 45: return 3780;

	default: break;
	}
	return 6022;
}

// Position - 0x998
int func_17() { return Global_25190; }

// Position - 0x9A3
bool func_18() { return Global_91543.f_303 > 0; }

// Position - 0x9B4
bool func_19() { return Global_91543.f_304 > 0; }

// Position - 0x9C5
bool func_20() { return gameplay::is_bit_set(Global_69950, 9); }

// Position - 0x9D7
bool func_21() { return gameplay::is_bit_set(Global_69950, 8); }

// Position - 0x9E9
bool func_22() {
	if (!entity::is_entity_dead(player::player_ped_id(), 0) && !ped::is_ped_injured(player::player_ped_id())) {
		if (entity::is_entity_playing_anim(player::player_ped_id(), "misshair_shop@barbers", "player_intro", 3) ||
			entity::is_entity_playing_anim(player::player_ped_id(), "misshair_shop@barbers", "player_base", 3) ||
			entity::is_entity_playing_anim(player::player_ped_id(), "misshair_shop@barbers", "player_enterchair", 3) ||
			entity::is_entity_playing_anim(player::player_ped_id(), "misshair_shop@barbers", "player_exitchair", 3) ||
			entity::is_entity_playing_anim(player::player_ped_id(), "misshair_shop@barbers", "player_idle_a", 3) ||
			entity::is_entity_playing_anim(player::player_ped_id(), "misshair_shop@barbers", "player_idle_b", 3) ||
			entity::is_entity_playing_anim(player::player_ped_id(), "misshair_shop@barbers", "player_idle_c", 3) ||
			entity::is_entity_playing_anim(player::player_ped_id(), "misshair_shop@barbers", "player_idle_d", 3) ||
			entity::is_entity_playing_anim(player::player_ped_id(), "misshair_shop@hair_dressers", "player_intro", 3) ||
			entity::is_entity_playing_anim(player::player_ped_id(), "misshair_shop@hair_dressers", "player_base", 3) ||
			entity::is_entity_playing_anim(player::player_ped_id(), "misshair_shop@hair_dressers", "player_enterchair",
										   3) ||
			entity::is_entity_playing_anim(player::player_ped_id(), "misshair_shop@hair_dressers", "player_exitchair",
										   3) ||
			entity::is_entity_playing_anim(player::player_ped_id(), "misshair_shop@hair_dressers", "player_idle_a",
										   3) ||
			entity::is_entity_playing_anim(player::player_ped_id(), "misshair_shop@hair_dressers", "player_idle_b",
										   3) ||
			entity::is_entity_playing_anim(player::player_ped_id(), "misshair_shop@hair_dressers", "player_idle_c",
										   3) ||
			entity::is_entity_playing_anim(player::player_ped_id(), "misshair_shop@hair_dressers", "player_idle_d",
										   3)) {
			return true;
		}
	}
	return false;
}

// Position - 0xB5E
bool func_23(var uParam0, int iParam1) { return (uParam0 & iParam1) != 0; }

// Position - 0xB6D
bool func_24(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0xB98
bool func_25(int iParam0) { return Global_35781 == iParam0; }

// Position - 0xBA6
bool func_26() {
	if (Global_35781 == 15) {
		return false;
	}
	return true;
}

// Position - 0xBBB
void func_27(int iParam0) { Global_69968 = iParam0; }

// Position - 0xBC9
void func_28(int iParam0, int iParam1) {
	if (iParam1 == 1) {
		func_29(0, 1);
	}
	graphics::_push_scaleform_movie_function_n("SHOW_COLUMN");
	graphics::_push_scaleform_movie_function_parameter_int(iParam0);
	graphics::_push_scaleform_movie_function_parameter_bool(iParam1);
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0xBF8
void func_29(int iParam0, int iParam1) {
	char *sVar0;
	char *sVar1;
	int iVar2;
	int iVar3;

	graphics::_push_scaleform_movie_function_n("SHOW_WARNING_MESSAGE");
	graphics::_push_scaleform_movie_function_parameter_bool(iParam0);
	iVar3 = func_8();
	if (iVar3 != -1) {
		iVar2 = 1;
		sVar1 = "PM_RP_HELPT";
		if (iParam1 == 1) {
			switch (iVar3) {
			case 0: sVar0 = "PM_RPB_SM_1"; break;

			case 2: sVar0 = "PM_RPB_SM_2"; break;

			case 3: sVar0 = "PM_RPB_SM_3"; break;

			case 1: sVar0 = "PM_RPB_SM_4"; break;

			case 4: sVar0 = "PM_RPB_SM_5"; break;

			case 5: sVar0 = "PM_RPB_SM_6"; break;

			default: break;
			}
		}
		else {
			switch (iVar3) {
			case 0: sVar0 = "PM_RPB_RC_1"; break;

			case 2: sVar0 = "PM_RPB_RC_2"; break;

			case 3: sVar0 = "PM_RPB_RC_3"; break;

			case 1: sVar0 = "PM_RPB_RC_4"; break;

			case 4: sVar0 = "PM_RPB_RC_5"; break;

			case 5: sVar0 = "PM_RPB_RC_6"; break;

			default: break;
			}
		}
	}
	else if (func_5(iParam1)) {
		iVar2 = 1;
		if (iParam1 == 1) {
			sVar1 = "PM_RP_HELPT";
			sVar0 = "PM_RP_HELP";
		}
		else {
			sVar1 = "PM_RP_HELPT3";
			sVar0 = "PM_RP_HELP3";
		}
	}
	else {
		iVar2 = 1;
		if (iParam1 == 1) {
			sVar1 = "PM_RP_HELPT1";
			sVar0 = "PM_RP_HELP1";
		}
		else {
			sVar1 = "PM_RP_HELPT3";
			sVar0 = "PM_RP_HELP4";
		}
	}
	graphics::_push_scaleform_movie_function_parameter_int(iVar2);
	graphics::_push_scaleform_movie_function_parameter_int(3 - iVar2);
	func_30(sVar0);
	func_30(sVar1);
	graphics::_push_scaleform_movie_function_parameter_int(0);
	func_30("");
	func_30("");
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0xD79
void func_30(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0xD8B
void func_31(int iParam0) {
	if (iParam0 == 1) {
		ui::object_decal_toggle(337714004);
	}
	else {
		ui::_add_frontend_menu_context(337714004);
	}
	ui::enable_deathblood_seethrough(0);
}

// Position - 0xDB3
void func_32(int iParam0, int iParam1) {
	if (func_8() == -1) {
		if (func_5(Global_69951)) {
			func_27(iParam0);
			func_46(iParam0);
			if (Global_69952 > 16) {
				if (iParam1 == 0) {
					func_35();
				}
				func_33(func_34(iParam0), Global_69952);
			}
		}
	}
}

// Position - 0xE01
void func_33(int iParam0, int iParam1) {
	graphics::_push_scaleform_movie_function_n("SET_COLUMN_SCROLL");
	graphics::_push_scaleform_movie_function_parameter_int(1);
	graphics::_push_scaleform_movie_function_parameter_int(iParam0);
	graphics::_push_scaleform_movie_function_parameter_int(iParam1);
	graphics::_push_scaleform_movie_function_parameter_int(-1);
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0xE2C
int func_34(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 94 - 1) {
		if (Local_30[iVar0 /*2*/] == iParam0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0xE5A
void func_35() {
	switch (Global_69951) {
	case 1: Global_69952 = func_36(&Local_30, 1, 0, 1); break;

	case 7: Global_69952 = func_36(&Local_30, 0, 1, 1); break;

	default: break;
	}
}

// Position - 0xE9A
int func_36(var *uParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	iVar0 = 0;
	if (iParam1 == 1) {
		if (iParam2 == 1) {
			func_37(uParam0, &iVar0, 1, iParam3, 0);
			func_37(uParam0, &iVar0, 7, iParam3, 0);
		}
		else {
			func_37(uParam0, &iVar0, 1, iParam3, 1);
		}
	}
	else if (iParam2 == 1) {
		func_37(uParam0, &iVar0, 7, iParam3, 1);
	}
	return iVar0;
}

// Position - 0xEF2
void func_37(var *uParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_45(iParam2);
	if (iParam4 == 0) {
		iVar1 = 0;
		while (iVar1 < iVar0) {
			if (func_42(iVar1, iParam2)) {
				iVar2 = func_41(iVar1, iParam2);
				if (iVar2 == -1) {
				}
				else {
					if (iParam3 == 0 || func_39(iVar1, iParam2) == 1) {
						(*uParam0)[iVar2 /*2*/] = iVar1;
						(*uParam0)[iVar2 /*2*/].f_1 = iParam2;
					}
					if (func_39(iVar1, iParam2) == 1) {
						*iParam1++;
					}
				}
			}
			iVar1++;
		}
	}
	else {
		iVar4 = 0;
		iVar3 = 0;
		while (iVar3 <= iVar0 - 1) {
			iVar5 = func_38(iVar4, iParam3, iParam2);
			if (iVar5 != -1) {
				iVar4 = func_41(iVar5, iParam2) + 1;
				(*uParam0)[iVar3 /*2*/] = iVar5;
				(*uParam0)[iVar3 /*2*/].f_1 = iParam2;
				if (func_39(iVar5, iParam2)) {
					*iParam1++;
				}
			}
			else {
				iVar3 = iVar0 + 1;
			}
			iVar3++;
		}
	}
}

// Position - 0xFE0
int func_38(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar4 = func_45(iParam2);
	iVar0 = 0;
	while (iVar0 < iVar4) {
		if (func_42(iVar0, iParam2) == 1) {
			if (iParam1 == 0 || func_39(iVar0, iParam2) == 1) {
				iVar3 = func_41(iVar0, iParam2);
				if (iVar3 >= iParam0) {
					if (iVar3 < iVar1 || iVar1 == -1) {
						iVar1 = iVar3;
						iVar2 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar2;
}

// Position - 0x105C
bool func_39(int iParam0, int iParam1) {
	switch (iParam1) {
	case 1: return !gameplay::is_bit_set(Global_82612[iParam0 /*34*/].f_15, 5);

	case 7: return func_40(iParam0);

	default: break;
	}
	return false;
}

// Position - 0x109D
int func_40(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 1: return 0;

	case 2: return 1;

	case 3: return 1;

	case 4: return 0;

	case 5: return 1;

	case 6: return 1;

	case 7: return 0;

	case 8: return 1;

	case 9: return 0;

	case 10: return 0;

	case 11: return 0;

	case 12: return 1;

	case 13: return 0;

	case 14: return 1;

	case 15: return 0;

	case 16: return 1;

	case 17: return 1;

	case 18: return 1;

	case 19: return 1;

	case 20: return 1;

	case 21: return 1;

	case 22: return 1;

	case 23: return 1;

	case 24: return 1;

	case 25: return 1;

	case 26: return 1;

	case 27: return 0;

	case 28: return 1;

	case 29: return 1;

	case 30: return 1;

	case 31: return 0;

	case 32: return 1;

	case 33: return 1;

	case 34: return 1;

	case 35: return 0;

	case 36: return 0;

	case 37: return 0;

	case 38: return 1;

	case 39: return 1;

	case 40: return 1;

	case 41: return 1;

	case 42: return 1;

	case 43: return 1;

	case 44: return 0;

	case 45: return 0;

	case 46: return 1;

	case 47: return 1;

	case 48: return 0;

	case 49: return 1;

	case 50: return 1;

	case 51: return 1;

	case 52: return 1;

	case 54: return 1;

	case 55: return 1;

	case 56: return 1;

	case 53: return 1;

	case 57: return 1;

	case 58: return 1;

	case 59: return 1;

	case 60: return 1;

	case 61: return 1;

	case 62: return 1;

	default: break;
	}
	return 0;
}

// Position - 0x13E3
int func_41(int iParam0, int iParam1) {
	switch (iParam1) {
	case 1: return Global_101700.f_8044.f_330[iParam0 /*6*/].f_3;

	case 7: return Global_101700.f_17533[iParam0 /*6*/].f_3;

	default: break;
	}
	return -1;
}

// Position - 0x142B
int func_42(int iParam0, int iParam1) {
	switch (iParam1) {
	case 1:
		if (func_44(iParam0)) {
			return func_43();
		}
		else {
			return Global_101700.f_8044.f_330[iParam0 /*6*/];
		}
		break;

	case 7: return gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 3);

	default: break;
	}
	return 0;
}

// Position - 0x1487
int func_43() {
	if (Global_101700.f_8044.f_330[24 /*6*/] == 1 || Global_101700.f_8044.f_330[25 /*6*/] == 1 ||
		Global_101700.f_8044.f_330[26 /*6*/] == 1 || Global_101700.f_8044.f_330[27 /*6*/] == 1) {
		return 1;
	}
	return 0;
}

// Position - 0x14E9
bool func_44(var uParam0) {
	int iVar0;

	iVar0 = uParam0;
	if (iVar0 == 24 || iVar0 == 25 || iVar0 == 26 || iVar0 == 27) {
		return true;
	}
	return false;
}

// Position - 0x1523
int func_45(int iParam0) {
	switch (iParam0) {
	case 1: return 94;

	case 7: return 63;

	default: break;
	}
	return -1;
}

// Position - 0x1552
void func_46(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	Local_28 = {func_77(iParam0, Global_69951)};
	if (!func_4(2)) {
		return;
	}
	func_76(2);
	graphics::_push_scaleform_movie_function_n("SET_COLUMN_TITLE");
	graphics::_push_scaleform_movie_function_parameter_int(2);
	func_30("MISSTA");
	func_30(&Local_28);
	graphics::_pop_scaleform_movie_function_void();
	iVar1 = -333;
	iVar2 = -333;
	iVar3 = 0;
	iVar4 = 0;
	iVar0 = 0;
	while (iVar0 < func_74(iParam0, Global_69951)) {
		iVar5 = func_72(iParam0, Global_69951, iVar0);
		iVar6 = 1;
		switch (iVar5) {
		case 42:
		case 55:
		case 85:
		case 70:
		case 101:
			iVar6 = 0;
			iVar2 = func_71(iVar5);
			if (iVar2 >= 2147483647) {
				iVar2 = 1;
			}
			break;

		case 84:
		case 100:
		case 69:
		case 41:
		case 54:
			iVar6 = 0;
			iVar1 = func_71(iVar5);
			if (iVar1 >= 2147483647) {
				iVar1 = 50;
			}
			break;
		}
		if (!MissionObjectives[iVar5 /*13*/].f_7 && iVar6) {
			if (func_53(iVar5, iVar3, 0)) {
				iVar4++;
			}
			iVar3++;
		}
		iVar0++;
	}
	func_52(iParam0, &iVar2);
	func_48(iVar4, iVar3, 0, iVar1, iVar2);
	func_47(2);
}

// Position - 0x1696
void func_47(int iParam0) {
	if (graphics::_push_scaleform_movie_function_n("DISPLAY_DATA_SLOT")) {
		graphics::_push_scaleform_movie_function_parameter_int(iParam0);
		graphics::_pop_scaleform_movie_function_void();
	}
}

// Position - 0x16B3
float func_48(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	float fVar0;
	int iVar1;

	fVar0 = func_51(iParam0, iParam1, 0);
	iVar1 = func_50(fVar0);
	if (iParam2) {
		fVar0 = 50f;
		iVar1 = 1;
	}
	if (iParam4 > -1) {
		iVar1 = iParam4;
	}
	if (iParam3 > -1) {
		fVar0 = system::to_float(iParam3);
	}
	if (iVar1 == 0) {
		graphics::_push_scaleform_movie_function_n("SET_DESCRIPTION");
		graphics::_push_scaleform_movie_function_parameter_int(2);
		graphics::_push_scaleform_movie_function_parameter_int(0);
		graphics::_push_scaleform_movie_function_parameter_float(fVar0);
		func_30("MTPHPER");
		graphics::_pop_scaleform_movie_function_void();
	}
	else {
		graphics::_push_scaleform_movie_function_n("SET_DESCRIPTION");
		graphics::_push_scaleform_movie_function_parameter_int(2);
		graphics::_push_scaleform_movie_function_parameter_int(func_49(iVar1));
		graphics::_push_scaleform_movie_function_parameter_float(fVar0);
		switch (func_49(iVar1)) {
		case 109: func_30("MTPHPER_G"); break;

		case 108: func_30("MTPHPER_S"); break;

		case 107: func_30("MTPHPER_B"); break;
		}
		graphics::_pop_scaleform_movie_function_void();
	}
	return fVar0;
}

// Position - 0x1785
int func_49(int iParam0) {
	int iVar0;

	iVar0 = 107;
	switch (iParam0) {
	case 3: iVar0 = 109; break;

	case 2: iVar0 = 108; break;

	case 1: iVar0 = 107; break;
	}
	return iVar0;
}

// Position - 0x17C1
int func_50(float fParam0) {
	if (fParam0 == 0f) {
		return 0;
	}
	if (fParam0 == 100f) {
		return 3;
	}
	else if (fParam0 > 50f) {
		return 2;
	}
	return 1;
}

// Position - 0x17F6
float func_51(int iParam0, int iParam1, int iParam2) {
	float fVar0;
	float fVar1;

	if (iParam2) {
		return 0f;
	}
	if (iParam0 == iParam1) {
		return 100f;
	}
	fVar0 = system::to_float(iParam0) / system::to_float(iParam1);
	fVar1 = 50f * fVar0 + 50f;
	fVar1 = system::to_float(system::ceil(fVar1));
	if (fVar1 > 100f) {
		fVar1 = 100f;
	}
	return fVar1;
}

// Position - 0x1855
void func_52(int iParam0, int *iParam1) {
	int iVar0;

	if (Global_69951 == 7) {
		iVar0 = iParam0;
		switch (iVar0) {
		case 52:
			*iParam1 = Global_101700.f_2084[0 /*2*/];
			if (*iParam1 == 0) {
				*iParam1 = 1;
			}
			break;

		case 53:
			*iParam1 = Global_101700.f_2084[1 /*2*/];
			if (*iParam1 == 0) {
				*iParam1 = 1;
			}
			break;

		case 54:
			*iParam1 = Global_101700.f_2084[2 /*2*/];
			if (*iParam1 == 0) {
				*iParam1 = 1;
			}
			break;

		case 55:
			*iParam1 = Global_101700.f_2084[3 /*2*/];
			if (*iParam1 == 0) {
				*iParam1 = 1;
			}
			break;

		case 56:
			*iParam1 = Global_101700.f_2084[4 /*2*/];
			if (*iParam1 == 0) {
				*iParam1 = 1;
			}
			break;
		}
	}
}

// Position - 0x1915
bool func_53(int iParam0, int iParam1, int iParam2) {
	struct<13> Var0;
	int iVar13;
	int iVar14;
	char *sVar15;

	if (iParam2 != 0) {
		if (!graphics::has_scaleform_movie_loaded(iParam2)) {
			return false;
		}
	}
	if (MissionObjectives[iParam0 /*13*/].f_7) {
		return true;
	}
	Var0 = {MissionObjectives[iParam0 /*13*/]};
	iVar13 = func_63(iParam0);
	switch (iParam0) {
	case 38:
	case 40:
	case 41:
	case 42:
	case 52:
	case 54:
	case 55:
	case 56:
	case 66:
	case 68:
	case 69:
	case 70:
	case 81:
	case 83:
	case 84:
	case 85:
	case 97:
	case 99:
	case 100:
	case 101: iVar13 = -1; break;
	}
	iVar14 = func_71(iParam0);
	sVar15 = func_62(iParam0);
	if (iVar14 == -1) {
		func_61(iVar14, iParam1, 0, sVar15, iParam0, iParam2);
		iVar13 = 0;
	}
	else {
		switch (Var0) {
		case 1: func_60(iVar14, iParam1, iVar13, "MTTIME", iParam0, iParam2); break;

		case 2: func_60(iVar14, iParam1, iVar13, sVar15, iParam0, iParam2); break;

		case 3: func_59(iParam1, iVar13, sVar15, iParam0, iParam2); break;

		case 17:
		case 4: func_60(iVar14, iParam1, iVar13, sVar15, iParam0, iParam2); break;

		case 5: func_58(iVar14, Var0.f_2, iParam1, iVar13, sVar15, iParam0, iParam2); break;

		case 6: func_59(iParam1, iVar13, sVar15, iParam0, iParam2); break;

		case 7: func_57(iVar14, Var0.f_2, iParam1, iVar13, sVar15, iParam0, iParam2); break;

		case 8: func_57(iVar14, Var0.f_2, iParam1, iVar13, sVar15, iParam0, iParam2); break;

		case 9: func_58(iVar14, 100, iParam1, iVar13, sVar15, iParam0, iParam2); break;

		case 16:
		case 10:
		case 14:
		case 15: func_56(iVar14, iParam1, iVar13, sVar15, iParam0, iParam2); break;

		case 11: func_58(iVar14, 100, iParam1, iVar13, sVar15, iParam0, iParam2); break;

		case 12:
		case 13: func_54(iVar14, iParam1, iVar13, sVar15, iParam0, iParam2); break;

		case 0: break;
		}
	}
	if (iVar13 == 0) {
		return false;
	}
	return true;
}

// Position - 0x1B7B
void func_54(int iParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
	if (iParam5 != 0) {
		graphics::_push_scaleform_movie_function(iParam5, "SET_DATA_SLOT");
	}
	else {
		graphics::_push_scaleform_movie_function_n("SET_DATA_SLOT");
		graphics::_push_scaleform_movie_function_parameter_int(2);
	}
	graphics::_push_scaleform_movie_function_parameter_int(iParam1);
	graphics::_push_scaleform_movie_function_parameter_int(iParam2);
	graphics::_push_scaleform_movie_function_parameter_int(6);
	graphics::_push_scaleform_movie_function_parameter_int(iParam0);
	if (iParam5 == 0) {
		graphics::begin_text_command_scaleform_string("PM_RP_STATD");
		ui::add_text_component_substring_text_label(sParam3);
		ui::add_text_component_substring_text_label(func_55(iParam4));
		graphics::end_text_command_scaleform_string();
	}
	else {
		func_30(sParam3);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x1BEB
char *func_55(int iParam0) {
	switch (iParam0) {
	case 0: return "MISHSTD0";

	case 9: return "MISHSTD1";

	case 10: return "MISHSTD2";

	case 21: return "MISHSTD3";

	case 22: return "MISHSTD4";

	case 338: return "MISHSTD5";

	case 339: return "MISHSTD6";

	case 196: return "MISHSTD7";

	case 197: return "MISHSTD8";

	case 205: return "MISHSTD9";

	case 206: return "MISHSTD10";

	case 207: return "MISHSTD11";

	case 218: return "MISHSTD12";

	case 217: return "MISHSTD13";

	case 384: return "MISHSTD14";

	case 385: return "MISHSTD15";

	case 372: return "MISHSTD16";

	case 373: return "MISHSTD17";

	case 375: return "MISHSTD18";

	case 374: return "MISHSTD19";

	default:
	}
	switch (iParam0) {
	case 486: return "MISHSTD20";

	case 487: return "MISHSTD21";

	case 488: return "MISHSTD22";

	case 489: return "MISHSTD23";

	case 490: return "MISHSTD24";

	case 499: return "MISHSTD25";

	case 500: return "MISHSTD26";

	case 501: return "MISHSTD27";

	case 502: return "MISHSTD28";

	case 515: return "MISHSTD25";

	case 516: return "MISHSTD30";

	case 517: return "MISHSTD19";

	case 518: return "MISHSTD32";

	case 137: return "MISHSTD19";

	case 136: return "MISHSTD34";

	case 148: return "MISHSTD17";

	case 149: return "MISHSTD19";

	case 150: return "MISHSTD37";

	case 229: return "MISHSTD38";

	default:
	}
	switch (iParam0) {
	case 230: return "MISHSTD39";

	case 273: return "MISHSTD40";

	case 274: return "MISHSTD41";

	case 275: return "MISHSTD42";

	case 276: return "MISHSTD43";

	case 277: return "MISHSTD19";

	case 283: return "MISHSTD45";

	case 284: return "MISHSTD16";

	case 285: return "MISHSTD17";

	case 346: return "MISHSTD48";

	case 239: return "MISHSTD49";

	case 240: return "MISHSTD50";

	case 241: return "MISHSTD51";

	case 242: return "MISHSTD52";

	case 294: return "MISHSTD53";

	case 295: return "MISHSTD54";

	case 296: return "MISHSTD55";

	case 297: return "MISHSTD56";

	case 298: return "MISHSTD57";

	default:
	}
	switch (iParam0) {
	case 308: return "MISHSTD58";

	case 102: return "MISHSTD59";

	case 115: return "MISHSTD60";

	case 114: return "MISHSTD22";

	case 111: return "MISHSTD62";

	case 112: return "MISHSTD63";

	case 113: return "MISHSTD64";

	case 396: return "MISHSTD65";

	case 393: return "MISHSTD66";

	case 394: return "MISHSTD67";

	case 395: return "MISHSTD68";

	case 120: return "MISHSTD69";

	case 121: return "MISHSTD70";

	case 122: return "MISHSTD71";

	case 123: return "MISHSTD72";

	case 124: return "MISHSTD73";

	case 161: return "MISHSTD74";

	case 172: return "MISHSTD40";

	case 173: return "MISHSTD76";

	default:
	}
	switch (iParam0) {
	case 174: return "MISHSTD77";

	case 175: return "MISHSTD78";

	case 185: return "MISHSTD79";

	case 186: return "MISHSTD66";

	case 187: return "MISHSTD81";

	case 326: return "MISHSTD82";

	case 129: return "MISHSTD22";

	case 130: return "MISHSTD84";

	case 466: return "MISHSTD85";

	case 400: return "MISHSTD86";

	case 401: return "MISHSTD87";

	case 413: return "MISHSTD88";

	case 414: return "MISHSTD40";

	case 415: return "MISHSTD17";

	case 416: return "MISHSTD91";

	case 417: return "MISHSTD92";

	case 249: return "MISHSTD18";

	case 474: return "MISHSTD12";

	case 257: return "MISHSTD95";

	default:
	}
	switch (iParam0) {
	case 527: return "MISHSTD96";

	case 528: return "MISHSTD97";

	case 529: return "MISHSTD76";

	case 534: return "MISHSTD99";

	case 709: return "MISHSTD100";

	case 576: return "MISHSTD101";

	case 577: return "MISHSTD102";

	case 578: return "MISHSTD103";

	case 579: return "MISHSTD104";

	case 742: return "MISHSTD105";

	case 741: return "MISHSTD19";

	case 743: return "MISHSTD107";

	case 745: return "MISHSTD108";

	case 748: return "MISHSTD109";

	case 747: return "MISHSTD110";

	case 749: return "MISHSTD111";

	case 750: return "MISHSTD112";

	case 751: return "MISHSTD113";

	case 754: return "MISHSTD114";

	default:
	}
	switch (iParam0) {
	case 753: return "MISHSTD115";

	case 757: return "MISHSTD116";

	case 756: return "MISHSTD117";

	case 755: return "MISHSTD118";

	case 759: return "MISHSTD119";

	case 758: return "MISHSTD120";

	case 761: return "MISHSTD121";

	case 760: return "MISHSTD122";

	case 762: return "MISHSTD123";

	case 763: return "MISHSTD124";

	case 766: return "MISHSTD124";

	case 769: return "MISHSTD126";

	case 768: return "MISHSTD127";

	case 767: return "MISHSTD128";

	case 771: return "MISHSTD129";

	case 770: return "MISHSTD130";

	case 773: return "MISHSTD131";

	case 772: return "MISHSTD132";

	case 775: return "MISHSTD133";

	default:
	}
	switch (iParam0) {
	case 774: return "MISHSTD134";

	case 777: return "MISHSTD135";

	case 776: return "MISHSTD136";

	case 779: return "MISHSTD137";

	case 778: return "MISHSTD138";

	case 782: return "MISHSTD139";

	case 780: return "MISHSTD140";

	case 781: return "MISHSTD141";

	case 784: return "MISHSTD142";

	case 783: return "MISHSTD143";

	case 786: return "MISHSTD144";

	case 785: return "MISHSTD145";

	case 788: return "MISHSTD146";

	case 787: return "MISHSTD147";

	case 789: return "MISHSTD148";

	case 792: return "MISHSTD149";

	case 791: return "MISHSTD150";

	case 790: return "MISHSTD151";

	case 793: return "MISHSTD152";

	default:
	}
	switch (iParam0) {
	case 794: return "MISHSTD153";

	case 795: return "MISHSTD154";

	case 796: return "MISHSTD155";

	case 797: return "MISHSTD156";

	case 798: return "MISHSTD157";

	case 799: return "MISHSTD158";

	case 800: return "MISHSTD159";

	case 801: return "MISHSTD160";

	case 802: return "MISHSTD161";

	case 803: return "MISHSTD162";

	case 804: return "MISHSTD163";

	case 805: return "MISHSTD164";

	case 806: return "MISHSTD165";

	case 807: return "MISHSTD166";

	case 808: return "MISHSTD167";

	case 809: return "MISHSTD168";

	case 429: return "MISHSTD48";

	case 441: return "MISHSTD1";

	case 4: return "MISHSTD171";

	default:
	}
	switch (iParam0) {
	case 13: return "MISHSTD172";

	case 341: return "MISHSTD173";

	case 5: return "MISHSTD174";

	case 6: return "MISHSTD175";

	case 20: return "MISHSTD40";

	case 169: return "MISHSTD177";

	case 731: return "MISHSTD178";

	case 737: return "MISHSTD179";

	case 145: return "MISHSTD180";

	case 159: return "MISHSTD74";

	case 353: return "MISHSTD40";

	case 357: return "MISHSTD21";

	case 605: return "MISHSTD21";

	case 606: return "MISHSTD74";

	case 613: return "MISHSTD186";

	case 616: return "MISHSTD187";

	case 628: return "MISHSTD188";

	case 309: return "MISHSTD21";

	case 310: return "MISHSTD16";

	default:
	}
	switch (iParam0) {
	case 313: return "MISHSTD191";

	case 477: return "MISHSTD192";

	case 482: return "MISHSTD193";

	case 484: return "MISHSTD194";

	case 715: return "MISHSTD195";

	case 570: return "MISHSTD40";

	case 566: return "MISHSTD87";

	case 565: return "MISHSTD198";

	case 572: return "MISHSTD199";

	case 574: return "MISHSTD200";

	case 431: return "MISHSTD201";

	case 443: return "MISHSTD202";

	case 446: return "MISHSTD21";

	case 452: return "MISHSTD204";

	case 364: return "MISHSTD201";

	case 365: return "MISHSTD40";

	case 369: return "MISHSTD207";

	case 668: return "MISHSTD87";

	case 670: return "MISHSTD209";

	default:
	}
	switch (iParam0) {
	case 678: return "MISHSTD87";

	case 265: return "MISHSTD87";

	case 266: return "MISHSTD40";

	case 270: return "MISHSTD213";

	case 271: return "MISHSTD214";

	case 272: return "MISHSTD215";

	case 765: return "MISHSTD216";

	case 764: return "MISHSTD217";

	case 330: return "MISHSTD218";

	case 331: return "MISHSTD40";

	case 643: return "MISHSTD220";

	case 644: return "MISHSTD221";

	case 645: return "MISHSTD222";

	case 646: return "MISHSTD223";

	case 404: return "MISHSTD74";

	case 721: return "MISHSTD25";

	case 752: return "MISHSTD226";

	case 147: return "MISHSTD227";

	case 336: return "MISHSTD228";

	default:
	}
	switch (iParam0) {
	case 371: return "MISHSTD228";

	case 557: return "MISHSTD230";

	case 575: return "MISHSTD231";

	case 629: return "MISHSTD232";

	case 647: return "MISHSTD86";

	case 685: return "MISHSTD234";

	case 693: return "MISHSTD235";

	case 738: return "MISHSTD234";

	case 650: return "MISHSTD237";

	case 649: return "MISHSTD238";

	case 825: return "MISHSTD239";

	case 824: return "MISHSTD240";

	case 821: return "MISHSTD241";

	case 820: return "MISHSTD242";

	case 319: return "MISHSTD243";

	case 318: return "MISHSTD244";

	case 317: return "MISHSTD3";

	case 322: return "MISHSTD85";

	case 323: return "MISHSTD247";

	default:
	}
	switch (iParam0) {
	case 324: return "MISHSTD248";

	case 816: return "MISHSTD249";

	case 815: return "MISHSTD250";

	case 814: return "MISHSTD251";

	case 746: return "MISHSTD252";

	case 514: return "MISHSTD253";

	case 744: return "MISHSTD254";

	case 841: return "MISHSTD255";

	case 840: return "MISHSTD3";

	case 838: return "MISHSTD255";

	case 828: return "MISHSTD3";

	case 829: return "MISHSTD255";

	case 831: return "MISHSTD12";

	case 832: return "MISHSTD255";

	case 834: return "MISHSTD48";

	case 835: return "MISHSTD255";

	case 837: return "MISHSTD264";

	case 739: return "MISHSTD265";

	case 619: return "MISHSTD266";

	default:
	}
	switch (iParam0) {
	case 560: return "MISHSTD267";

	case 559: return "MISHSTD268";

	case 558: return "MISHSTD269";

	case 673: return "MISHSTD16";

	case 688: return "MISHSTD16";

	case 687: return "MISHSTD272";

	case 844: return "MISHSTD273";

	case 845: return "MISHSTD274";

	case 843: return "MISHSTD275";

	case 236: return "MISHSTD276";

	case 29: return "MISHSTD277";

	case 109: return "MISHSTD278";

	case 108: return "MISHSTD279";

	case 135: return "MISHSTD280";

	case 227: return "MISHSTD281";

	case 852: return "MISHSTD282";

	case 846: return "MISHSTD283";

	case 440: return "MISHSTD284";

	case 864: return "MISHSTD285";

	default:
	}
	switch (iParam0) {
	case 863: return "MISHSTD286";

	case 861: return "MISHSTD287";

	case 862: return "MISHSTD288";

	case 870: return "MISHSTD289";

	case 544: return "MISHSTD290";

	case 543: return "MISHSTD291";

	case 593: return "MISHSTD292";

	case 592: return "MISHSTD14";

	case 603: return "MISHSTD12";

	case 899: return "MISHSTD295";

	case 900: return "MISHSTD296";

	case 883: return "MISHSTD297";

	case 891: return "MISHSTD297";

	case 657: return "MISHSTD299";

	case 875: return "MISHSTD297";

	case 906: return "MISHSTD193";

	case 706: return "MISHSTD302";

	case 699: return "MISHSTD303";

	case 726: return "MISHSTD304";

	default:
	}
	switch (iParam0) {
	case 237: return "MISHSTD305";

	case 658: return "MISHSTD3";

	case 877: return "MISHSTD307";

	case 885: return "MISHSTD307";

	case 893: return "MISHSTD307";

	case 694: return "MISHSTD310";

	case 881: return "MISHSTD311";

	case 889: return "MISHSTD312";

	case 897: return "MISHSTD311";

	case 633: return "MISHSTD314";

	case 632: return "MISHSTD315";

	case 38: return "MISHSTD316";

	case 41: return "MISHSTD317";

	case 39: return "MISHSTD318";

	case 40: return "MISHSTD319";

	case 42: return "MISHSTD320";

	case 56: return "MISHSTD319";

	case 52: return "MISHSTD316";

	case 53: return "MISHSTD323";

	default:
	}
	switch (iParam0) {
	case 54: return "MISHSTD317";

	case 55: return "MISHSTD320";

	case 70: return "MISHSTD320";

	case 69: return "MISHSTD317";

	case 67: return "MISHSTD328";

	case 68: return "MISHSTD319";

	case 66: return "MISHSTD316";

	case 81: return "MISHSTD316";

	case 82: return "MISHSTD332";

	case 84: return "MISHSTD317";

	case 83: return "MISHSTD319";

	case 85: return "MISHSTD320";

	case 97: return "MISHSTD316";

	case 98: return "MISHSTD337";

	case 100: return "MISHSTD317";

	case 99: return "MISHSTD319";

	case 101: return "MISHSTD320";

	default:
	}
	return "MISSING_MISSION_STAT_STRING";
}

// Position - 0x2DC6
void func_56(int iParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
	if (iParam5 != 0) {
		graphics::_push_scaleform_movie_function(iParam5, "SET_DATA_SLOT");
	}
	else {
		graphics::_push_scaleform_movie_function_n("SET_DATA_SLOT");
		graphics::_push_scaleform_movie_function_parameter_int(2);
	}
	graphics::_push_scaleform_movie_function_parameter_int(iParam1);
	graphics::_push_scaleform_movie_function_parameter_int(iParam2);
	graphics::_push_scaleform_movie_function_parameter_int(1);
	graphics::_push_scaleform_movie_function_parameter_int(iParam0);
	if (iParam5 == 0) {
		graphics::begin_text_command_scaleform_string("PM_RP_STATD");
		ui::add_text_component_substring_text_label(sParam3);
		ui::add_text_component_substring_text_label(func_55(iParam4));
		graphics::end_text_command_scaleform_string();
	}
	else {
		func_30(sParam3);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x2E36
void func_57(int iParam0, int iParam1, int iParam2, int iParam3, char *sParam4, int iParam5, int iParam6) {
	int iVar0;

	if (iParam6 != 0) {
		graphics::_push_scaleform_movie_function(iParam6, "SET_DATA_SLOT");
	}
	else {
		graphics::_push_scaleform_movie_function_n("SET_DATA_SLOT");
		graphics::_push_scaleform_movie_function_parameter_int(2);
	}
	iVar0 = iParam0;
	if (iVar0 > iParam1) {
		iVar0 = iParam1;
	}
	graphics::_push_scaleform_movie_function_parameter_int(iParam2);
	graphics::_push_scaleform_movie_function_parameter_int(iParam3);
	graphics::_push_scaleform_movie_function_parameter_int(5);
	graphics::_push_scaleform_movie_function_parameter_int(iVar0);
	graphics::_push_scaleform_movie_function_parameter_int(iParam1);
	if (iParam6 == 0) {
		graphics::begin_text_command_scaleform_string("PM_RP_STATD");
		ui::add_text_component_substring_text_label(sParam4);
		ui::add_text_component_substring_text_label(func_55(iParam5));
		graphics::end_text_command_scaleform_string();
	}
	else {
		func_30(sParam4);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x2EBB
void func_58(int iParam0, int iParam1, int iParam2, int iParam3, char *sParam4, int iParam5, int iParam6) {
	float fVar0;

	fVar0 = system::to_float(iParam0) / system::to_float(iParam1) * 100f;
	if (iParam6 != 0) {
		graphics::_push_scaleform_movie_function(iParam6, "SET_DATA_SLOT");
	}
	else {
		graphics::_push_scaleform_movie_function_n("SET_DATA_SLOT");
		graphics::_push_scaleform_movie_function_parameter_int(2);
	}
	graphics::_push_scaleform_movie_function_parameter_int(iParam2);
	graphics::_push_scaleform_movie_function_parameter_int(iParam3);
	graphics::_push_scaleform_movie_function_parameter_int(3);
	graphics::_push_scaleform_movie_function_parameter_int(system::ceil(fVar0));
	if (iParam6 == 0) {
		graphics::begin_text_command_scaleform_string("PM_RP_STATD");
		ui::add_text_component_substring_text_label(sParam4);
		ui::add_text_component_substring_text_label(func_55(iParam5));
		graphics::end_text_command_scaleform_string();
	}
	else {
		func_30(sParam4);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x2F44
void func_59(int iParam0, int iParam1, char *sParam2, int iParam3, int iParam4) {
	if (iParam4 != 0) {
		graphics::_push_scaleform_movie_function(iParam4, "SET_DATA_SLOT");
	}
	else {
		graphics::_push_scaleform_movie_function_n("SET_DATA_SLOT");
		graphics::_push_scaleform_movie_function_parameter_int(2);
	}
	graphics::_push_scaleform_movie_function_parameter_int(iParam0);
	graphics::_push_scaleform_movie_function_parameter_int(iParam1);
	if (iParam4 == 0) {
		graphics::begin_text_command_scaleform_string("PM_RP_STATD");
		ui::add_text_component_substring_text_label(sParam2);
		ui::add_text_component_substring_text_label(func_55(iParam3));
		graphics::end_text_command_scaleform_string();
	}
	else {
		func_30(sParam2);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x2FA9
void func_60(int iParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
	int iVar0;
	int iVar1;

	iVar0 = system::floor(system::to_float(iParam0) / 60000f);
	iVar1 = system::floor(system::to_float(iParam0) / 1000f) - iVar0 * 60;
	if (iParam5 != 0) {
		graphics::_push_scaleform_movie_function(iParam5, "SET_DATA_SLOT");
	}
	else {
		graphics::_push_scaleform_movie_function_n("SET_DATA_SLOT");
		graphics::_push_scaleform_movie_function_parameter_int(2);
	}
	graphics::_push_scaleform_movie_function_parameter_int(iParam1);
	graphics::_push_scaleform_movie_function_parameter_int(iParam2);
	graphics::_push_scaleform_movie_function_parameter_int(4);
	graphics::_push_scaleform_movie_function_parameter_int(iVar0);
	graphics::_push_scaleform_movie_function_parameter_int(iVar1);
	if (iParam5 == 0) {
		graphics::begin_text_command_scaleform_string("PM_RP_STATD");
		ui::add_text_component_substring_text_label(sParam3);
		ui::add_text_component_substring_text_label(func_55(iParam4));
		graphics::end_text_command_scaleform_string();
	}
	else {
		func_30(sParam3);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x3048
void func_61(int iParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
	if (iParam5 != 0) {
		graphics::_push_scaleform_movie_function(iParam5, "SET_DATA_SLOT");
	}
	else {
		graphics::_push_scaleform_movie_function_n("SET_DATA_SLOT");
		graphics::_push_scaleform_movie_function_parameter_int(2);
	}
	graphics::_push_scaleform_movie_function_parameter_int(iParam1);
	graphics::_push_scaleform_movie_function_parameter_int(iParam2);
	graphics::_push_scaleform_movie_function_parameter_int(0);
	graphics::_push_scaleform_movie_function_parameter_int(iParam0);
	if (iParam5 == 0) {
		graphics::begin_text_command_scaleform_string("PM_RP_STATD");
		ui::add_text_component_substring_text_label(sParam3);
		ui::add_text_component_substring_text_label(func_55(iParam4));
		graphics::end_text_command_scaleform_string();
	}
	else {
		func_30(sParam3);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x30B8
char *func_62(int iParam0) {
	switch (iParam0) {
	case 0: return "MISHSTA_0";

	case 9: return "MISHSTA_1";

	case 10: return "MISHSTA_2";

	case 21: return "MISHSTA_1";

	case 22: return "MISHSTA_3";

	case 338: return "MISHSTA_0";

	case 339: return "MISHSTA_4";

	case 196: return "MISHSTA_5";

	case 197: return "MISHSTA_0";

	case 205: return "MISHSTA_6";

	case 206: return "MISHSTA_7";

	case 207: return "MISHSTA_8";

	case 218: return "MISHSTA_1";

	case 217: return "MISHSTA_0";

	case 384: return "MISHSTA_1";

	case 385: return "MISHSTA_9";

	case 372: return "MISHSTA_10";

	case 373: return "MISHSTA_11";

	case 375: return "MISHSTA_1";

	case 374: return "MISHSTA_12";

	case 486: return "MISHSTA_13";

	case 487: return "MISHSTA_11";

	case 488: return "MISHSTA_1";

	case 489: return "MISHSTA_14";

	case 490: return "MISHSTA_15";

	case 499: return "MISHSTA_11";

	case 500: return "MISHSTA_1";

	case 501: return "MISHSTA_16";

	case 502: return "MISHSTA_17";

	case 515: return "MISHSTA_11";

	default:
	}
	switch (iParam0) {
	case 516: return "MISHSTA_18";

	case 517: return "MISHSTA_12";

	case 518: return "MISHSTA_19";

	case 137: return "MISHSTA_12";

	case 136: return "MISHSTA_20";

	case 148: return "MISHSTA_11";

	case 149: return "MISHSTA_12";

	case 150: return "MISHSTA_21";

	case 229: return "MISHSTA_6";

	case 230: return "MISHSTA_22";

	case 273: return "MISHSTA_10";

	case 274: return "MISHSTA_11";

	case 275: return "MISHSTA_1";

	case 276: return "MISHSTA_23";

	case 277: return "MISHSTA_12";

	case 283: return "MISHSTA_1";

	case 284: return "MISHSTA_10";

	case 285: return "MISHSTA_11";

	case 346: return "MISHSTA_1";

	case 239: return "MISHSTA_1";

	case 240: return "MISHSTA_24";

	case 241: return "MISHSTA_25";

	case 242: return "MISHSTA_26";

	case 294: return "MISHSTA_27";

	case 295: return "MISHSTA_28";

	case 296: return "MISHSTA_29";

	case 297: return "MISHSTA_30";

	case 298: return "MISHSTA_31";

	case 308: return "MISHSTA_32";

	case 102: return "MISHSTA_0";

	case 115: return "MISHSTA_33";

	default:
	}
	switch (iParam0) {
	case 114: return "MISHSTA_1";

	case 111: return "MISHSTA_34";

	case 112: return "MISHSTA_35";

	case 113: return "MISHSTA_36";

	case 396: return "MISHSTA_1";

	case 393: return "MISHSTA_37";

	case 394: return "MISHSTA_38";

	case 395: return "MISHSTA_39";

	case 120: return "MISHSTA_0";

	case 121: return "MISHSTA_6";

	case 122: return "MISHSTA_40";

	case 123: return "MISHSTA_41";

	case 124: return "MISHSTA_42";

	case 161: return "MISHSTA_43";

	case 172: return "MISHSTA_43";

	case 173: return "MISHSTA_1";

	case 174: return "MISHSTA_11";

	case 175: return "MISHSTA_44";

	case 185: return "MISHSTA_1";

	case 186: return "MISHSTA_6";

	case 187: return "MISHSTA_45";

	case 326: return "MISHSTA_46";

	case 129: return "MISHSTA_1";

	case 130: return "MISHSTA_0";

	case 466: return "MISHSTA_1";

	case 400: return "MISHSTA_1";

	case 401: return "MISHSTA_47";

	case 413: return "MISHSTA_48";

	case 414: return "MISHSTA_10";

	case 415: return "MISHSTA_11";

	case 416: return "MISHSTA_49";

	default:
	}
	switch (iParam0) {
	case 417: return "MISHSTA_50";

	case 249: return "MISHSTA_1";

	case 474: return "MISHSTA_1";

	case 257: return "MISHSTA_1";

	case 527: return "MISHSTA_51";

	case 528: return "MISHSTA_52";

	case 529: return "MISHSTA_53";

	case 534: return "MISHSTA_54";

	case 709: return "MISHSTA_55";

	case 576: return "MISHSTA_1";

	case 577: return "MISHSTA_56";

	case 578: return "MISHSTA_57";

	case 579: return "MISHSTA_58";

	case 742: return "MISHSTA_59";

	case 741: return "MISHSTA_60";

	case 743: return "MISHSTA_61";

	case 745: return "MISHSTA_62";

	case 748: return "MISHSTA_62";

	case 747: return "MISHSTA_63";

	case 749: return "MISHSTA_64";

	case 750: return "MISHSTA_65";

	case 751: return "MISHSTA_66";

	case 754: return "MISHSTA_67";

	case 753: return "MISHSTA_68";

	case 757: return "MISHSTA_69";

	case 756: return "MISHSTA_70";

	case 755: return "MISHSTA_71";

	case 759: return "MISHSTA_72";

	case 758: return "MISHSTA_73";

	case 761: return "MISHSTA_74";

	case 760: return "MISHSTA_75";

	default:
	}
	switch (iParam0) {
	case 762: return "MISHSTA_76";

	case 763: return "MISHSTA_77";

	case 766: return "MISHSTA_78";

	case 769: return "MISHSTA_79";

	case 768: return "MISHSTA_80";

	case 767: return "MISHSTA_81";

	case 771: return "MISHSTA_82";

	case 770: return "MISHSTA_83";

	case 773: return "MISHSTA_84";

	case 772: return "MISHSTA_85";

	case 775: return "MISHSTA_86";

	case 774: return "MISHSTA_87";

	case 777: return "MISHSTA_88";

	case 776: return "MISHSTA_89";

	case 779: return "MISHSTA_90";

	case 778: return "MISHSTA_91";

	case 782: return "MISHSTA_92";

	case 780: return "MISHSTA_93";

	case 781: return "MISHSTA_94";

	case 784: return "MISHSTA_95";

	case 783: return "MISHSTA_96";

	case 786: return "MISHSTA_97";

	case 785: return "MISHSTA_98";

	case 788: return "MISHSTA_99";

	case 787: return "MISHSTA_100";

	case 789: return "MISHSTA_101";

	case 792: return "MISHSTA_102";

	case 791: return "MISHSTA_103";

	case 790: return "MISHSTA_104";

	case 793: return "MISHSTA_105";

	case 794: return "MISHSTA_106";

	default:
	}
	switch (iParam0) {
	case 795: return "MISHSTA_0";

	case 796: return "MISHSTA_107";

	case 797: return "MISHSTA_108";

	case 798: return "MISHSTA_109";

	case 799: return "MISHSTA_110";

	case 800: return "MISHSTA_111";

	case 801: return "MISHSTA_112";

	case 802: return "MISHSTA_113";

	case 803: return "MISHSTA_114";

	case 804: return "MISHSTA_115";

	case 805: return "MISHSTA_116";

	case 806: return "MISHSTA_117";

	case 807: return "MISHSTA_118";

	case 808: return "MISHSTA_119";

	case 809: return "MISHSTA_120";

	case 429: return "MISHSTA_1";

	case 441: return "MISHSTA_1";

	case 4: return "MISHSTA_121";

	case 13: return "MISHSTA_11";

	case 341: return "MISHSTA_122";

	case 5: return "MISHSTA_123";

	case 6: return "MISHSTA_124";

	case 20: return "MISHSTA_10";

	case 169: return "MISHSTA_125";

	case 731: return "MISHSTA_126";

	case 737: return "MISHSTA_10";

	case 145: return "MISHSTA_127";

	case 159: return "MISHSTA_10";

	case 353: return "MISHSTA_10";

	case 357: return "MISHSTA_11";

	case 605: return "MISHSTA_11";

	default:
	}
	switch (iParam0) {
	case 606: return "MISHSTA_10";

	case 613: return "MISHSTA_128";

	case 616: return "MISHSTA_129";

	case 628: return "MISHSTA_130";

	case 309: return "MISHSTA_11";

	case 310: return "MISHSTA_10";

	case 313: return "MISHSTA_131";

	case 477: return "MISHSTA_37";

	case 482: return "MISHSTA_132";

	case 484: return "MISHSTA_133";

	case 715: return "MISHSTA_123";

	case 570: return "MISHSTA_10";

	case 566: return "MISHSTA_11";

	case 565: return "MISHSTA_134";

	case 572: return "MISHSTA_135";

	case 574: return "MISHSTA_136";

	case 431: return "MISHSTA_11";

	case 443: return "MISHSTA_137";

	case 446: return "MISHSTA_138";

	case 452: return "MISHSTA_139";

	case 364: return "MISHSTA_11";

	case 365: return "MISHSTA_10";

	case 369: return "MISHSTA_140";

	case 668: return "MISHSTA_11";

	case 670: return "MISHSTA_141";

	case 678: return "MISHSTA_11";

	case 265: return "MISHSTA_11";

	case 266: return "MISHSTA_10";

	case 270: return "MISHSTA_142";

	case 271: return "MISHSTA_143";

	case 272: return "MISHSTA_144";

	default:
	}
	switch (iParam0) {
	case 765: return "MISHSTA_145";

	case 764: return "MISHSTA_146";

	case 330: return "MISHSTA_11";

	case 331: return "MISHSTA_10";

	case 643: return "MISHSTA_147";

	case 644: return "MISHSTA_148";

	case 645: return "MISHSTA_149";

	case 646: return "MISHSTA_150";

	case 404: return "MISHSTA_10";

	case 721: return "MISHSTA_151";

	case 752: return "MISHSTA_152";

	case 147: return "MISHSTA_1";

	case 336: return "MISHSTA_1";

	case 371: return "MISHSTA_1";

	case 557: return "MISHSTA_1";

	case 575: return "MISHSTA_1";

	case 629: return "MISHSTA_1";

	case 647: return "MISHSTA_1";

	case 685: return "MISHSTA_1";

	case 693: return "MISHSTA_1";

	case 738: return "MISHSTA_1";

	case 650: return "MISHSTA_0";

	case 649: return "MISHSTA_153";

	case 825: return "MISHSTA_154";

	case 824: return "MISHSTA_155";

	case 821: return "MISHSTA_156";

	case 820: return "MISHSTA_157";

	case 319: return "MISHSTA_158";

	case 318: return "MISHSTA_159";

	case 317: return "MISHSTA_1";

	case 322: return "MISHSTA_1";

	default:
	}
	switch (iParam0) {
	case 323: return "MISHSTA_0";

	case 324: return "MISHSTA_160";

	case 816: return "MISHSTA_161";

	case 815: return "MISHSTA_162";

	case 814: return "MISHSTA_163";

	case 746: return "MISHSTA_164";

	case 514: return "MISHSTA_165";

	case 744: return "MISHSTA_166";

	case 841: return "MISHSTA_167";

	case 840: return "MISHSTA_1";

	case 838: return "MISHSTA_167";

	case 828: return "MISHSTA_1";

	case 829: return "MISHSTA_167";

	case 831: return "MISHSTA_1";

	case 832: return "MISHSTA_167";

	case 834: return "MISHSTA_1";

	case 835: return "MISHSTA_167";

	case 837: return "MISHSTA_1";

	case 739: return "MISHSTA_168";

	case 619: return "MISHSTA_169";

	case 560: return "MISHSTA_170";

	case 559: return "MISHSTA_171";

	case 558: return "MISHSTA_172";

	case 673: return "MISHSTA_10";

	case 688: return "MISHSTA_10";

	case 687: return "MISHSTA_173";

	case 844: return "MISHSTA_174";

	case 845: return "MISHSTA_175";

	case 843: return "MISHSTA_176";

	case 236: return "MISHSTA_177";

	case 29: return "MISHSTA_178";

	default:
	}
	switch (iParam0) {
	case 109: return "MISHSTA_179";

	case 108: return "MISHSTA_180";

	case 135: return "MISHSTA_181";

	case 227: return "MISHSTA_182";

	case 852: return "MISHSTA_183";

	case 846: return "MISHSTA_184";

	case 440: return "MISHSTA_185";

	case 864: return "MISHSTA_186";

	case 863: return "MISHSTA_187";

	case 861: return "MISHSTA_1";

	case 862: return "MISHSTA_188";

	case 870: return "MISHSTA_1";

	case 544: return "MISHSTA_0";

	case 543: return "MISHSTA_189";

	case 593: return "MISHSTA_190";

	case 592: return "MISHSTA_1";

	case 603: return "MISHSTA_1";

	case 899: return "MISHSTA_1";

	case 900: return "MISHSTA_191";

	case 883: return "MISHSTA_192";

	case 891: return "MISHSTA_192";

	case 657: return "MISHSTA_193";

	case 875: return "MISHSTA_192";

	case 906: return "MISHSTA_194";

	case 706: return "MISHSTA_195";

	case 699: return "MISHSTA_196";

	case 726: return "MISHSTA_197";

	case 237: return "MISHSTA_198";

	case 658: return "MISHSTA_1";

	case 877: return "MISHSTA_0";

	case 885: return "MISHSTA_0";

	default:
	}
	switch (iParam0) {
	case 893: return "MISHSTA_0";

	case 694: return "MISHSTA_110";

	case 881: return "MISHSTA_199";

	case 889: return "MISHSTA_199";

	case 897: return "MISHSTA_199";

	case 633: return "MISHSTA_200";

	case 632: return "MISHSTA_201";

	case 38: return "MISHSTA_202";

	case 41: return "MISHSTA_203";

	case 39: return "MISHSTA_204";

	case 40: return "MISHSTA_205";

	case 42: return "MISHSTA_206";

	case 56: return "MISHSTA_205";

	case 52: return "MISHSTA_202";

	case 53: return "MISHSTA_207";

	case 54: return "MISHSTA_203";

	case 55: return "MISHSTA_206";

	case 70: return "MISHSTA_206";

	case 69: return "MISHSTA_203";

	case 67: return "MISHSTA_132";

	case 68: return "MISHSTA_205";

	case 66: return "MISHSTA_202";

	case 81: return "MISHSTA_202";

	case 82: return "MISHSTA_208";

	case 84: return "MISHSTA_203";

	case 83: return "MISHSTA_205";

	case 85: return "MISHSTA_206";

	case 97: return "MISHSTA_202";

	case 98: return "MISHSTA_209";

	case 100: return "MISHSTA_203";

	case 99: return "MISHSTA_205";

	default:
	}
	switch (iParam0) {
	case 101: return "MISHSTA_206";

	default:
	}
	return "MISSING_MISSION_STAT_STRING";
}

// Position - 0x426B
int func_63(int iParam0) {
	if (func_64(iParam0, func_70(MissionObjectives[iParam0 /*13*/].f_4))) {
		return 1;
	}
	return 0;
}

// Position - 0x428E
bool func_64(int iParam0, int iParam1) {
	if (iParam1 < 0) {
		return false;
	}
	switch (MissionObjectives[iParam0 /*13*/]) {
	case 1:
	case 2:
	case 4:
	case 5:
	case 17:
		if (iParam1 < 1) {
			return false;
		}
		break;
	}
	if (iParam1 == 2147483647) {
		return false;
	}
	if (iParam0 == 881 || iParam0 == 889 || iParam0 == 897)
		&&Global_101700.f_23863[4 /*4*/] == func_65() { MissionObjectives[iParam0 /*13*/].f_2 = 0; }
	if (MissionObjectives[iParam0 /*13*/].f_3) {
		if (iParam1 < MissionObjectives[iParam0 /*13*/].f_2) {
			return true;
		}
	}
	else if (iParam1 >= MissionObjectives[iParam0 /*13*/].f_2) {
		return true;
	}
	return false;
}

// Position - 0x4358
int func_65() {
	func_66();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x4371
void func_66() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_69(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_68(player::player_ped_id());
			if (func_67(iVar0) && (!func_25(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_67(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x446E
bool func_67(int iParam0) { return iParam0 < 3; }

// Position - 0x447A
int func_68(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_69(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x44B7
int func_69(int iParam0) {
	if (func_67(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x44E1
int func_70(int iParam0) {
	int iVar0;

	if (iParam0 == 0) {
		return -1;
	}
	if (stats::stat_get_int(iParam0, &iVar0, -1)) {
		return iVar0 - 1;
	}
	return -1;
}

// Position - 0x450A
int func_71(int iParam0) {
	int iVar0;

	iVar0 = func_70(MissionObjectives[iParam0 /*13*/].f_4);
	if (iVar0 > -2) {
		return iVar0;
	}
	return 0;
}

// Position - 0x452F
int func_72(int iParam0, int iParam1, int iParam2) {
	switch (iParam1) {
	case 1: return Global_82612[iParam0 /*34*/].f_17[iParam2];

	case 7: return func_73(iParam0, iParam2);

	default: break;
	}
	return 914;
}

// Position - 0x4572
int func_73(int iParam0, int iParam1) {
	switch (iParam0) {
	case 2:
		switch (iParam1) {
		case 0: return 741;

		case 1: return 742;

		default:
		}
		return -1;

	case 3:
		switch (iParam1) {
		case 0: return 743;

		case 1: return 744;

		default:
		}
		return -1;

	case 5:
		switch (iParam1) {
		case 0: return 745;

		case 1: return 746;

		default:
		}
		return -1;

	case 6:
		switch (iParam1) {
		case 0: return 747;

		case 1: return 748;

		default:
		}
		return -1;

	case 8:
		switch (iParam1) {
		case 0: return 749;

		default:
		}
		return -1;

	case 12:
		switch (iParam1) {
		case 0: return 750;

		default:
		}
		return -1;

	case 14:
		switch (iParam1) {
		case 0: return 751;

		case 1: return 752;

		default:
		}
		return -1;

	case 16:
		switch (iParam1) {
		case 0: return 753;

		case 1: return 754;

		default:
		}
		return -1;

	case 17:
		switch (iParam1) {
		case 0: return 755;

		case 1: return 756;

		case 2: return 757;

		default:
		}
		return -1;

	case 18:
		switch (iParam1) {
		case 0: return 758;

		case 1: return 759;

		default:
		}
		return -1;

	case 19:
		switch (iParam1) {
		case 0: return 760;

		case 1: return 761;

		default:
		}
		return -1;

	case 20:
		switch (iParam1) {
		case 0: return 762;

		default:
		}
		return -1;

	case 21:
		switch (iParam1) {
		case 0: return 763;

		default:
		}
		return -1;

	case 22:
		switch (iParam1) {
		case 0: return 764;

		case 1: return 765;

		default:
		}
		return -1;

	case 23:
		switch (iParam1) {
		case 0: return 766;

		default:
		}
		return -1;

	case 25:
		switch (iParam1) {
		case 0: return 767;

		case 1: return 768;

		case 2: return 769;

		default:
		}
		return -1;

	case 26:
		switch (iParam1) {
		case 0: return 770;

		case 1: return 771;

		default:
		}
		return -1;

	case 28:
		switch (iParam1) {
		case 0: return 772;

		case 1: return 773;

		default:
		}
		return -1;

	case 29:
		switch (iParam1) {
		case 0: return 774;

		case 1: return 775;

		default:
		}
		return -1;

	case 30:
		switch (iParam1) {
		case 0: return 776;

		case 1: return 777;

		default:
		}
		return -1;

	case 32:
		switch (iParam1) {
		case 0: return 778;

		case 1: return 779;

		default:
		}
		return -1;

	default:
	}
	switch (iParam0) {
	case 33:
		switch (iParam1) {
		case 0: return 780;

		case 1: return 781;

		case 2: return 782;

		default:
		}
		return -1;

	case 34:
		switch (iParam1) {
		case 0: return 783;

		case 1: return 784;

		default:
		}
		return -1;

	case 38:
		switch (iParam1) {
		case 0: return 785;

		case 1: return 786;

		default:
		}
		return -1;

	case 39:
		switch (iParam1) {
		case 0: return 787;

		case 1: return 788;

		default:
		}
		return -1;

	case 40:
		switch (iParam1) {
		case 0: return 789;

		default:
		}
		return -1;

	case 41:
		switch (iParam1) {
		case 0: return 790;

		case 1: return 791;

		case 2: return 792;

		default:
		}
		return -1;

	case 42:
		switch (iParam1) {
		case 0: return 793;

		case 1: return 794;

		case 2: return 795;

		default:
		}
		return -1;

	case 43:
		switch (iParam1) {
		case 0: return 796;

		case 1: return 797;

		default:
		}
		return -1;

	case 46:
		switch (iParam1) {
		case 0: return 798;

		case 1: return 799;

		default:
		}
		return -1;

	case 47:
		switch (iParam1) {
		case 0: return 800;

		case 1: return 801;

		default:
		}
		return -1;

	case 49:
		switch (iParam1) {
		case 0: return 802;

		case 1: return 803;

		default:
		}
		return -1;

	case 50:
		switch (iParam1) {
		case 0: return 804;

		case 1: return 805;

		default:
		}
		return -1;

	case 51:
		switch (iParam1) {
		case 0: return 806;

		default:
		}
		return -1;

	case 57:
		switch (iParam1) {
		case 0: return 807;

		case 1: return 808;

		case 2: return 809;

		default:
		}
		return -1;

	case 58:
		switch (iParam1) {
		case 0: return 828;

		case 1: return 829;

		case 2: return 830;

		default:
		}
		return -1;

	case 59:
		switch (iParam1) {
		case 0: return 831;

		case 1: return 832;

		case 2: return 833;

		default:
		}
		return -1;

	case 60:
		switch (iParam1) {
		case 0: return 834;

		case 1: return 835;

		case 2: return 836;

		default:
		}
		return -1;

	case 61:
		switch (iParam1) {
		case 0: return 837;

		case 1: return 838;

		case 2: return 839;

		default:
		}
		return -1;

	case 62:
		switch (iParam1) {
		case 0: return 840;

		case 1: return 841;

		case 2: return 842;

		default:
		}
		return -1;

	case 24:
		switch (iParam1) {
		case 0: return 843;

		case 1: return 844;

		case 2: return 845;

		default:
		}
		return -1;

	default:
	}
	return -1;
}

// Position - 0x4C56
int func_74(int iParam0, int iParam1) {
	switch (iParam1) {
	case 1: return Global_82612[iParam0 /*34*/].f_16;

	case 7: return func_75(iParam0);

	default: break;
	}
	return 0;
}

// Position - 0x4C91
int func_75(int iParam0) {
	switch (iParam0) {
	case 2: return 2;

	case 3: return 2;

	case 5: return 2;

	case 6: return 2;

	case 8: return 1;

	case 12: return 1;

	case 14: return 2;

	case 16: return 2;

	case 17: return 3;

	case 18: return 2;

	case 19: return 2;

	case 20: return 1;

	case 21: return 1;

	case 22: return 2;

	case 23: return 1;

	case 25: return 3;

	case 26: return 2;

	case 28: return 2;

	case 29: return 2;

	case 30: return 2;

	case 32: return 2;

	default:
	}
	switch (iParam0) {
	case 33: return 3;

	case 34: return 2;

	case 38: return 2;

	case 39: return 2;

	case 40: return 1;

	case 41: return 3;

	case 42: return 3;

	case 43: return 2;

	case 46: return 2;

	case 47: return 2;

	case 49: return 2;

	case 50: return 2;

	case 51: return 1;

	case 57: return 3;

	case 58: return 3;

	case 59: return 3;

	case 60: return 3;

	case 61: return 3;

	case 62: return 3;

	case 24: return 3;

	default:
	}
	return 0;
}

// Position - 0x4E42
void func_76(int iParam0) {
	graphics::_push_scaleform_movie_function_n("SET_DATA_SLOT_EMPTY");
	graphics::_push_scaleform_movie_function_parameter_int(iParam0);
	graphics::_pop_scaleform_movie_function_void();
	if (iParam0 == 1) {
		func_80();
	}
}

// Position - 0x4E67
struct<2> func_77(int iParam0, int iParam1) {
	struct<2> Var0;

	StringCopy(&Var0, "", 8);
	switch (iParam1) {
	case 1:
		if (iParam0 == 80 || iParam0 == 81 || iParam0 == 82) {
			StringConCat(&Var0, &Global_82612[iParam0 /*34*/].f_8, 8);
			StringConCat(&Var0, "A", 8);
		}
		else {
			StringCopy(&Var0, "M_", 8);
			StringConCat(&Var0, &Global_82612[iParam0 /*34*/].f_8, 8);
			if (iParam0 == 90) {
				StringConCat(&Var0, "A", 8);
			}
		}
		break;

	case 7: Var0 = {func_78(iParam0)}; break;

	default: break;
	}
	return Var0;
}

// Position - 0x4EFD
struct<2>
func_78(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = {func_79(iParam0)};
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x4F35
struct<2>
func_79(int iParam0) {
	struct<2> Var0;

	StringCopy(&Var0, "", 8);
	switch (iParam0) {
	case 0: StringCopy(&Var0, "ABI1", 8); break;

	case 1: StringCopy(&Var0, "ABI2", 8); break;

	case 2: StringCopy(&Var0, "BA1", 8); break;

	case 3: StringCopy(&Var0, "BA2", 8); break;

	case 4: StringCopy(&Var0, "BA3", 8); break;

	case 5: StringCopy(&Var0, "BA3A", 8); break;

	case 6: StringCopy(&Var0, "BA3C", 8); break;

	case 7: StringCopy(&Var0, "BA4", 8); break;

	case 8: StringCopy(&Var0, "DRE1", 8); break;

	case 9: StringCopy(&Var0, "EPS1", 8); break;

	case 10: StringCopy(&Var0, "EPS2", 8); break;

	case 11: StringCopy(&Var0, "EPS3", 8); break;

	case 12: StringCopy(&Var0, "EPS4", 8); break;

	case 13: StringCopy(&Var0, "EPS5", 8); break;

	case 14: StringCopy(&Var0, "EPS6", 8); break;

	case 15: StringCopy(&Var0, "EPS7", 8); break;

	case 16: StringCopy(&Var0, "EPS8", 8); break;

	case 17: StringCopy(&Var0, "EXT1", 8); break;

	case 18: StringCopy(&Var0, "EXT2", 8); break;

	case 19: StringCopy(&Var0, "EXT3", 8); break;

	case 20: StringCopy(&Var0, "EXT4", 8); break;

	case 21: StringCopy(&Var0, "FAN1", 8); break;

	case 22: StringCopy(&Var0, "FAN2", 8); break;

	case 23: StringCopy(&Var0, "FAN3", 8); break;

	case 24: StringCopy(&Var0, "HAO1", 8); break;

	case 25: StringCopy(&Var0, "HUN1", 8); break;

	case 26: StringCopy(&Var0, "HUN2", 8); break;

	case 27: StringCopy(&Var0, "JOS1", 8); break;

	case 28: StringCopy(&Var0, "JOS2", 8); break;

	case 29: StringCopy(&Var0, "JOS3", 8); break;

	case 30: StringCopy(&Var0, "JOS4", 8); break;

	case 31: StringCopy(&Var0, "MAU1", 8); break;

	case 32: StringCopy(&Var0, "MIN1", 8); break;

	case 33: StringCopy(&Var0, "MIN2", 8); break;

	case 34: StringCopy(&Var0, "MIN3", 8); break;

	case 35: StringCopy(&Var0, "MRS1", 8); break;

	case 36: StringCopy(&Var0, "MRS2", 8); break;

	case 37: StringCopy(&Var0, "NI1", 8); break;

	case 38: StringCopy(&Var0, "NI1A", 8); break;

	case 39: StringCopy(&Var0, "NI1B", 8); break;

	case 40: StringCopy(&Var0, "NI1C", 8); break;

	case 41: StringCopy(&Var0, "NI1D", 8); break;

	case 42: StringCopy(&Var0, "NI2", 8); break;

	case 43: StringCopy(&Var0, "NI3", 8); break;

	case 44: StringCopy(&Var0, "OME1", 8); break;

	case 45: StringCopy(&Var0, "OME2", 8); break;

	case 46: StringCopy(&Var0, "PA1", 8); break;

	case 47: StringCopy(&Var0, "PA2", 8); break;

	case 48: StringCopy(&Var0, "PA3", 8); break;

	case 49: StringCopy(&Var0, "PA3A", 8); break;

	case 50: StringCopy(&Var0, "PA3B", 8); break;

	case 51: StringCopy(&Var0, "PA4", 8); break;

	case 52: StringCopy(&Var0, "RAM1", 8); break;

	case 53: StringCopy(&Var0, "RAM2", 8); break;

	case 54: StringCopy(&Var0, "RAM3", 8); break;

	case 55: StringCopy(&Var0, "RAM4", 8); break;

	case 56: StringCopy(&Var0, "RAM5", 8); break;

	case 57: StringCopy(&Var0, "SAS1", 8); break;

	case 58: StringCopy(&Var0, "TON1", 8); break;

	case 59: StringCopy(&Var0, "TON2", 8); break;

	case 60: StringCopy(&Var0, "TON3", 8); break;

	case 61: StringCopy(&Var0, "TON4", 8); break;

	case 62: StringCopy(&Var0, "TON5", 8); break;

	default: break;
	}
	return Var0;
}

//Position - 0x5382
void func_80()
{
	graphics::_push_scaleform_movie_function_n("SET_COLUMN_SCROLL");
	graphics::_push_scaleform_movie_function_parameter_int(1);
	graphics::_push_scaleform_movie_function_parameter_int(-1);
	graphics::_push_scaleform_movie_function_parameter_int(-1);
	graphics::_push_scaleform_movie_function_parameter_int(-1);
	func_30("");
	graphics::_push_scaleform_movie_function_parameter_bool(1);
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x53B8
void func_81(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = 0;
	if (Global_69951 != iParam0 || iParam2 == 1) {
		iVar0 = 1;
	}
	Global_69951 = iParam0;
	func_4(2);
	if (func_8() != -1 || !func_5(iParam0)) {
		if (iParam1 == 1) {
			func_31(0);
		}
		func_3(0);
		func_29(1, iParam0);
	}
	else {
		if (iVar0 == 1) {
			func_28(1, 0);
			func_28(2, 0);
			func_76(1);
			func_76(2);
			func_82();
			func_27(Local_30[0 /*2*/]);
		}
		if (iParam1 == 1) {
			func_31(1);
		}
		func_2(iParam0, iVar0);
	}
}

// Position - 0x5452
void func_82() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	func_35();
	if (Global_69952 > 16) {
		func_84();
		func_33(0, Global_69952);
	}
	else {
		func_80();
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 < Global_69952) {
		iVar2 = 0;
		iVar3 = 0;
		iVar8 = -1;
		iVar1 = Local_30[iVar0 /*2*/];
		Local_28 = {func_77(iVar1, Global_69951)};
		iVar7 = 0;
		while (iVar7 < func_74(iVar1, Global_69951)) {
			iVar4 = func_72(iVar1, Global_69951, iVar7);
			if (!MissionObjectives[iVar4 /*13*/].f_7) {
				if (func_63(iVar4) == 1) {
					iVar3++;
				}
				switch (iVar4) {
				case 42:
				case 55:
				case 85:
				case 70:
				case 101: iVar8 = func_71(iVar4); break;
				}
				iVar2++;
			}
			iVar7++;
		}
		func_52(iVar1, &iVar8);
		fVar5 = func_51(iVar3, iVar2, 0);
		iVar6 = func_50(fVar5);
		if (iVar8 > -1) {
			iVar6 = iVar8;
		}
		func_83(1, iVar0, 1076, iVar1, 1, &Local_28, func_49(iVar6));
		iVar0++;
	}
	func_47(1);
}

// Position - 0x5570
void func_83(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, char *sParam5, int iParam6) {
	if (graphics::_push_scaleform_movie_function_n("SET_DATA_SLOT")) {
		graphics::_push_scaleform_movie_function_parameter_int(iParam0);
		graphics::_push_scaleform_movie_function_parameter_int(iParam1);
		graphics::_push_scaleform_movie_function_parameter_int(iParam2);
		graphics::_push_scaleform_movie_function_parameter_int(iParam3);
		graphics::_push_scaleform_movie_function_parameter_int(3);
		graphics::_push_scaleform_movie_function_parameter_int(0);
		if (iParam4) {
			graphics::_push_scaleform_movie_function_parameter_int(1);
		}
		else {
			graphics::_push_scaleform_movie_function_parameter_int(0);
		}
		func_30(sParam5);
		graphics::_push_scaleform_movie_function_parameter_int(iParam6);
		graphics::_pop_scaleform_movie_function_void();
	}
}

// Position - 0x55C7
void func_84() {
	graphics::_push_scaleform_movie_function_n("INIT_COLUMN_SCROLL");
	graphics::_push_scaleform_movie_function_parameter_int(1);
	graphics::_push_scaleform_movie_function_parameter_bool(0);
	graphics::_push_scaleform_movie_function_parameter_int(1);
	graphics::_push_scaleform_movie_function_parameter_int(0);
	graphics::_push_scaleform_movie_function_parameter_int(2);
	graphics::_push_scaleform_movie_function_parameter_bool(1);
	graphics::_push_scaleform_movie_function_parameter_int(0);
	graphics::_push_scaleform_movie_function_parameter_bool(1);
	graphics::_pop_scaleform_movie_function_void();
}
