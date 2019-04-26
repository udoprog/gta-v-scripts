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
char *sLocal_18 = NULL;
var uLocal_19 = 0;
var uLocal_20 = 0;
int iLocal_21 = 0;
float fLocal_22 = 0f;
var uLocal_23 = 0;
var uLocal_24 = 0;
var uLocal_25 = 0;
float fLocal_26 = 0f;
float fLocal_27 = 0f;
var uLocal_28 = 0;
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
var uLocal_39 = 0;
int iLocal_40 = 0;
int iLocal_41 = 0;
int iLocal_42 = 0;
int iLocal_43 = 0;
var uLocal_44 = 0;
var uLocal_45 = 0;
var uLocal_46 = 0;
var uLocal_47 = 0;
var uLocal_48 = 0;
var uLocal_49 = 0;
int iLocal_50 = 0;
int iLocal_51 = 0;
int iLocal_52 = 0;
int iLocal_53 = 0;
int iLocal_54 = 0;
int iLocal_55 = 0;
bool bLocal_56 = 0;
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
int iLocal_69 = 0;
int iLocal_70 = 0;
int iLocal_71 = 0;
int iLocal_72 = 0;
int iLocal_73 = 0;
int iLocal_74 = 0;
int iLocal_75 = 0;
int iLocal_76 = 0;
int iLocal_77 = 0;
int iLocal_78 = 0;
int iLocal_79 = 0;
int iLocal_80 = 0;
int iLocal_81 = 0;
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
	sLocal_18 = "NULL";
	iLocal_21 = 3;
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_50 = 3;
	gameplay::network_set_script_is_safe_for_network_game();
	if (player::has_force_cleanup_occurred(32)) {
		script::terminate_this_thread();
	}
	while (true) {
		func_100();
		switch (iLocal_51) {
		case 0: func_95(); break;

		case 1:
			func_86();
			func_2();
			Global_89108 = 0;
			break;

		case 2: func_1(); break;
		}
		system::wait(0);
	}
}

// Position - 0xCC
void func_1() { iLocal_51 = 0; }

// Position - 0xD7
void func_2() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int *iVar6;
	int iVar7;
	int iVar8;
	int *iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	bool bVar16;

	if (iLocal_57) {
		iLocal_57 = 0;
	}
	else {
		iLocal_52++;
	}
	bLocal_56 = false;
	if (network::network_is_game_in_progress()) {
		iVar0 = 3;
	}
	else {
		iVar0 = func_82();
	}
	if (iVar0 != iLocal_55) {
		iLocal_55 = iVar0;
		bLocal_56 = true;
		iLocal_63 = 0;
		iLocal_64 = 0;
		iLocal_71 = 0;
		iLocal_77 = 0;
	}
	if (iLocal_55 == 145) {
		return;
	}
	iVar1 = 0;
	if (iLocal_52 == 6 && func_81(64) ||
		iLocal_52 == 5 && script::_get_number_of_instances_of_script_with_name_hash(joaat("pilot_school")) > 0) {
		iVar1 = 1;
		iLocal_57 = 1;
	}
	func_75();
	if (Global_89106 || Global_89107 && !func_72(0)) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			iVar2 = 0;
			while (iVar2 < 8) {
				func_71(iLocal_55, iVar2);
				iVar2++;
			}
			Global_89106 = 0;
		}
	}
	if (!iVar1) {
		if (ped::is_ped_injured(player::player_ped_id()) ||
			!network::network_is_game_in_progress() && !func_70(iLocal_55) ||
			streaming::is_player_switch_in_progress() || func_69() || cutscene::is_cutscene_playing() ||
			cam::is_screen_faded_out() || !player::is_player_control_on(player::player_id()) || Global_69700 ||
			Global_89108 || iLocal_58) {
			iLocal_79 = 1;
			iLocal_80 = gameplay::get_game_timer();
			if (network::network_is_game_in_progress()) {
				iLocal_81 = network::get_network_time();
			}
			return;
		}
		if (iLocal_79) {
			if (!network::network_is_game_in_progress() && gameplay::get_game_timer() - iLocal_80 > 3000 ||
				network::network_is_game_in_progress() &&
					network::is_time_more_than(network::get_network_time(),
											   network::get_time_offset(iLocal_81, 3000))) {
				iLocal_79 = 0;
			}
			else {
				return;
			}
		}
	}
	if (!network::network_is_game_in_progress() && gameplay::get_game_timer() - iLocal_53 > 2000 ||
		network::network_is_game_in_progress() &&
			network::is_time_more_than(network::get_network_time(), network::get_time_offset(iLocal_54, 2000)) ||
		bLocal_56) {
		if (iLocal_52 >= 8) {
			iLocal_52 = 0;
			iLocal_53 = gameplay::get_game_timer();
			if (network::network_is_game_in_progress()) {
				iLocal_54 = network::get_network_time();
			}
		}
		iVar11 = 1;
		if (bLocal_56) {
			iVar11 = 8;
		}
		iVar12 = 0;
		while (iVar12 < iVar11) {
			bVar13 = true;
			if (bLocal_56) {
				iVar8 = iVar12;
			}
			else {
				iVar8 = iLocal_52;
			}
			func_68(iLocal_55, iVar8, &iVar6, &iVar7);
			if (network::network_is_game_in_progress()) {
				iVar3 = func_67(iVar7, -1, 0);
			}
			else if (iVar8 == 0) {
				iVar3 = Global_101700.f_2095.f_539.f_1615[iLocal_55];
			}
			else {
				stats::stat_get_int(iVar6, &iVar3, -1);
			}
			iVar5 = iVar3;
			iVar3 = func_66(iVar3, 0, 100);
			if (func_53(iLocal_55, iVar8, iVar3, &iVar4)) {
				if (network::network_is_game_in_progress()) {
					func_52(iVar7, iVar4, -1, 1, 0);
				}
				else if (iVar8 == 0) {
					if (Global_101700.f_2095.f_539.f_1615[iLocal_55] == 0) {
						bVar13 = false;
					}
					Global_101700.f_2095.f_539.f_1615[iLocal_55] = iVar4;
				}
				else {
					stats::stat_set_int(iVar6, iVar4, 1);
				}
				if (iVar4 > func_50(iLocal_55, iVar8, -1)) {
					if (network::network_is_game_in_progress()) {
					}
					else if (!Global_101700.f_8044 && !func_49(0) ||
							 !gameplay::is_bit_set(Global_101700.f_8044.f_2[27 /*3*/], 2)) {
						bVar13 = false;
					}
					iVar14 = iVar4;
					iVar15 = iVar14 - iVar14 % func_48(iLocal_55, iVar8);
					if (iVar14 % func_48(iLocal_55, iVar8) >= 0) {
						iVar15 += func_48(iLocal_55, iVar8);
					}
					if (iVar14 >= iVar15) {
						iVar14 = iVar15;
					}
					else {
						iVar14 = iVar15 - func_48(iLocal_55, iVar8);
					}
					if (iVar4 > iVar14) {
						bVar13 = false;
					}
					if (func_42()) {
						bVar13 = false;
					}
					if (bVar13) {
						if (!bLocal_56) {
							if (network::network_is_game_in_progress()) {
								if (func_41(117, -1) == 0) {
									if (!ui::is_help_message_being_displayed() && func_9()) {
										func_8("STAT_HELP2", -1);
										func_4(117, 1, -1, 1);
									}
								}
							}
							iLocal_58 = 1;
							iLocal_61 = iVar4 - iVar3;
							iLocal_61 += iVar3 % func_48(iLocal_55, iVar8);
							iLocal_62 = iVar4;
							iLocal_59 = iLocal_55;
							iLocal_60 = iVar8;
						}
					}
					if (iVar4 >= 100) {
						if (func_3(iLocal_55, iVar8, &iVar9)) {
							if (iLocal_55 == 0) {
								stats::stat_get_int(joaat("sp0_total_playing_time"), &iVar10, -1);
								stats::stat_set_int(iVar9, iVar10, 1);
							}
							else if (iLocal_55 == 1) {
								stats::stat_get_int(joaat("sp1_total_playing_time"), &iVar10, -1);
								stats::stat_set_int(iVar9, iVar10, 1);
							}
							else if (iLocal_55 == 2) {
								stats::stat_get_int(joaat("sp2_total_playing_time"), &iVar10, -1);
								stats::stat_set_int(iVar9, iVar10, 1);
							}
							else if (iLocal_55 == 3) {
							}
						}
					}
				}
				func_71(iLocal_55, iVar8);
			}
			else if (iVar4 < iVar5) {
				bVar16 = true;
				if (network::network_is_game_in_progress()) {
					func_52(iVar7, iVar4, -1, 1, 0);
				}
				else if (iVar8 == 0) {
					Global_101700.f_2095.f_539.f_1615[iLocal_55] = iVar4;
					bVar16 = false;
				}
				else {
					stats::stat_set_int(iVar6, iVar4, 1);
				}
				if (bVar16) {
					func_71(iLocal_55, iVar8);
				}
			}
			iVar12++;
		}
	}
	else {
		iLocal_57 = 1;
	}
}

// Position - 0x5B8
bool func_3(int iParam0, int iParam1, int *iParam2) {
	*iParam2 = joaat("last_playing_time");
	switch (iParam0) {
	case 0:
		switch (iParam1) {
		case 0: *iParam2 = joaat("sp0_special_ability_maxed"); break;

		case 1: *iParam2 = joaat("sp0_stamina_maxed"); break;

		case 3: *iParam2 = joaat("sp0_lung_capacity_maxed"); break;

		case 2: *iParam2 = joaat("sp0_strength_maxed"); break;

		case 4: *iParam2 = joaat("sp0_wheelie_ability_maxed"); break;

		case 5: *iParam2 = joaat("sp0_flying_ability_maxed"); break;

		case 6: *iParam2 = joaat("sp0_shooting_ability_maxed"); break;

		case 7: *iParam2 = joaat("sp0_stealth_ability_maxed"); break;
		}
		break;

	case 1:
		switch (iParam1) {
		case 0: *iParam2 = joaat("sp1_special_ability_maxed"); break;

		case 1: *iParam2 = joaat("sp1_stamina_maxed"); break;

		case 3: *iParam2 = joaat("sp1_lung_capacity_maxed"); break;

		case 2: *iParam2 = joaat("sp1_strength_maxed"); break;

		case 4: *iParam2 = joaat("sp1_wheelie_ability_maxed"); break;

		case 5: *iParam2 = joaat("sp1_flying_ability_maxed"); break;

		case 6: *iParam2 = joaat("sp1_shooting_ability_maxed"); break;

		case 7: *iParam2 = joaat("sp1_stealth_ability_maxed"); break;
		}
		break;

	case 2:
		switch (iParam1) {
		case 0: *iParam2 = joaat("sp2_special_ability_maxed"); break;

		case 1: *iParam2 = joaat("sp2_stamina_maxed"); break;

		case 3: *iParam2 = joaat("sp2_lung_capacity_maxed"); break;

		case 2: *iParam2 = joaat("sp2_strength_maxed"); break;

		case 4: *iParam2 = joaat("sp2_wheelie_ability_maxed"); break;

		case 5: *iParam2 = joaat("sp2_flying_ability_maxed"); break;

		case 6: *iParam2 = joaat("sp2_shooting_ability_maxed"); break;

		case 7: *iParam2 = joaat("sp2_stealth_ability_maxed"); break;
		}
		break;
	}
	return *iParam2 != joaat("last_playing_time");
}

// Position - 0x7A0
void func_4(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	if (func_7()) {
		iVar0 = Global_2522581[iParam0 /*3*/][func_5(iParam2)];
		if (iVar0 != 0) {
			stats::stat_set_bool(iVar0, iParam1, iParam3);
		}
	}
}

// Position - 0x7D2
int func_5(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_6();
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

// Position - 0x806
var func_6() { return Global_1312735; }

// Position - 0x812
bool func_7() {
	return true;
	return false;
}

// Position - 0x81F
void func_8(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x836
int func_9() {
	if (ui::is_hud_hidden() && ui::is_radar_hidden()) {
		return 0;
	}
	if (Global_1751174 == 1) {
		return 0;
	}
	if (Global_1751032 == 1) {
		return 0;
	}
	if (gameplay::is_stunt_jump_message_showing()) {
		return 0;
	}
	if (Global_1574275 == 1) {
		return 0;
	}
	if (gameplay::is_stunt_jump_in_progress()) {
		return 0;
	}
	if (Global_979733) {
		return 0;
	}
	if (Global_1591201[player::player_id() /*602*/].f_510 == 1) {
		return 0;
	}
	if (func_40()) {
		return 0;
	}
	if (func_39()) {
		return 0;
	}
	if (func_38()) {
		if (!func_39()) {
			if (!func_37(3, -1)) {
				if (func_35(&Global_2454822, 300000, 0) == 1) {
					func_34(&Global_2454820);
					func_32(3, -1);
				}
				else if (func_35(&Global_2454820, 7000, 0) == 0) {
					return 0;
				}
			}
		}
		else {
			return 0;
		}
	}
	if (func_31()) {
		return 0;
	}
	if (func_30()) {
		return 0;
	}
	if (func_28()) {
		return 0;
	}
	if (func_27()) {
		return 0;
	}
	if (func_26()) {
		return 0;
	}
	if (func_25()) {
		return 0;
	}
	if (network::network_is_in_mp_cutscene()) {
		return 0;
	}
	if (ui::is_pause_menu_active()) {
		return 0;
	}
	if (cam::is_first_person_aim_cam_active()) {
		if (func_24(player::player_ped_id()) == joaat("weapon_sniperrifle") ||
			func_24(player::player_ped_id()) == joaat("weapon_heavysniper")) {
			return 0;
		}
	}
	if (cam::is_screen_faded_out()) {
		return 0;
	}
	if (func_23(8, -1)) {
		return 0;
	}
	if (func_22(12, -1)) {
		return 0;
	}
	if (ui::is_hud_component_active(19)) {
		return 0;
	}
	if (func_21()) {
		return 0;
	}
	if (func_20()) {
		return 0;
	}
	if (Global_1591201[player::player_id() /*602*/].f_35) {
		return 0;
	}
	if (Global_1574109) {
		return 0;
	}
	if (Global_1574113) {
		return 0;
	}
	if (Global_1574115) {
		return 0;
	}
	if (Global_2433125.f_3357.f_39) {
		return 0;
	}
	if (func_19(0)) {
		return 0;
	}
	if (func_18()) {
		return 0;
	}
	if (Global_2494199.f_3829) {
		return 0;
	}
	if (Global_2433125.f_3223) {
		return 0;
	}
	if (!func_17(player::player_id(), 1, 0)) {
		return 0;
	}
	if (func_16(player::player_id())) {
		return 0;
	}
	if (Global_2433125.f_3357.f_39 == 1) {
		return 0;
	}
	if (Global_2443905.f_2842.f_25 == 1) {
		return 0;
	}
	if (func_15(1)) {
		return 0;
	}
	if (func_13()) {
		return 0;
	}
	if (ui::is_hud_component_active(16)) {
		return 0;
	}
	if (func_12()) {
		return 0;
	}
	if (func_11()) {
		return 0;
	}
	if (ui::is_help_message_on_screen()) {
		if (func_10("FHU_HELP3")) {
			return 0;
		}
	}
	if (Global_1591201[player::player_id() /*602*/].f_493) {
		return 0;
	}
	return 1;
}

// Position - 0xB0E
bool func_10(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0xB21
bool func_11() { return Global_2433125.f_1385.f_688 != 0; }

// Position - 0xB35
bool func_12() { return Global_2433125.f_2506.f_577; }

// Position - 0xB47
bool func_13() { return func_14(); }

// Position - 0xB53
bool func_14() { return Global_1346673.f_40 == 3; }

// Position - 0xB63
bool func_15(int iParam0) {
	if (iParam0) {
		return Global_17151.f_4 && Global_17151.f_104 == 4;
	}
	return Global_17151.f_4;
}

// Position - 0xB8C
bool func_16(int iParam0) { return gameplay::is_bit_set(Global_1618300[iParam0 /*35*/].f_13, 0); }

// Position - 0xBA3
int func_17(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1) {
		if (network::network_is_player_active(iParam0)) {
			if (iParam1) {
				if (!player::is_player_playing(iParam0)) {
					return 0;
				}
			}
			if (iParam2) {
				if (!Global_2433125.f_3[iVar0]) {
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

// Position - 0xBED
bool func_18() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("appcamera")) > 0) {
		return true;
	}
	return false;
}

// Position - 0xC0A
bool func_19(int iParam0) {
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

// Position - 0xC64
bool func_20() { return Global_1353070.f_112; }

// Position - 0xC72
bool func_21() { return Global_2433125.f_2199[0 /*76*/].f_1 != 0; }

// Position - 0xC88
bool func_22(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			if (Global_1353070.f_137[iParam1]) {
				return true;
			}
			if (Global_1353070.f_170[iParam1]) {
				return true;
			}
		}
		break;

	default:
		if (gameplay::is_bit_set(Global_1353070.f_1013, iParam0)) {
			return true;
		}
		if (gameplay::is_bit_set(Global_1353070.f_1014, iParam0)) {
			return true;
		}
		break;
	}
	return false;
}

// Position - 0xCF4
bool func_23(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0xD2F
int func_24(int iParam0) {
	var uVar0;

	weapon::get_current_ped_weapon(iParam0, &uVar0, 1);
	return uVar0;
}

// Position - 0xD43
bool func_25() { return Global_2443134.f_571; }

// Position - 0xD52
bool func_26() { return gameplay::is_bit_set(Global_970912.f_8, 13); }

// Position - 0xD66
bool func_27() { return Global_2443134.f_570; }

// Position - 0xD75
bool func_28() {
	if (func_29() == 1 || func_29() == 4) {
		return true;
	}
	return false;
}

// Position - 0xD97
int func_29() { return Global_1312466.f_18; }

// Position - 0xDA5
bool func_30() {
	if (func_29() == 3 || func_29() == 2) {
		return true;
	}
	return false;
}

// Position - 0xDC7
bool func_31() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("maintransition")) > 0) {
		return true;
	}
	return false;
}

// Position - 0xDE1
void func_32(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (iParam1 == -1) {
		iParam1 = func_6();
	}
	Global_1363152 = 0;
	if (gameplay::_0x5AA3BEFA29F03AD4() == 0) {
		return;
	}
	switch (iParam0) {
	case 0:
		stats::_0x0D01D20616FC73FB(0, iParam1);
		iVar1 = func_33(iParam1);
		iVar0 = gameplay::get_profile_setting(iVar1);
		break;

	default:
		iVar1 = func_33(iParam1);
		iVar0 = gameplay::get_profile_setting(iVar1);
		if (!gameplay::is_bit_set(iVar0, iParam0)) {
			gameplay::set_bit(&iVar0, iParam0);
			stats::_0x0D01D20616FC73FB(iVar0, iParam1);
		}
		break;
	}
	switch (iParam0) {
	case 0:
		func_4(120, 0, iParam1, 1);
		func_4(124, 0, iParam1, 1);
		func_4(115, 0, iParam1, 1);
		func_4(119, 0, iParam1, 1);
		func_4(121, 0, iParam1, 1);
		func_4(122, 0, iParam1, 1);
		func_4(125, 0, iParam1, 1);
		func_52(1298, 0, iParam1, 1, 0);
		break;
	}
}

// Position - 0xEC0
int func_33(int iParam0) {
	int iVar0;

	if (iParam0 == -1) {
		iParam0 = func_6();
	}
	switch (iParam0) {
	case 0: iVar0 = 914; break;

	case 1: iVar0 = 915; break;

	case 2: iVar0 = 916; break;

	case 3: iVar0 = 917; break;

	case 4: iVar0 = 918; break;
	}
	return iVar0;
}

// Position - 0xF23
void func_34(var *uParam0) { uParam0->f_1 = 0; }

// Position - 0xF30
int func_35(var *uParam0, int iParam1, int iParam2) {
	if (iParam1 == -1) {
		return 1;
	}
	func_36(uParam0, iParam2, 0);
	if (network::network_is_game_in_progress() && !iParam2) {
		if (gameplay::absi(network::get_time_difference(network::get_network_time(), *uParam0)) >= iParam1) {
			func_34(uParam0);
			return 1;
		}
	}
	else if (gameplay::absi(network::get_time_difference(gameplay::get_game_timer(), *uParam0)) >= iParam1) {
		func_34(uParam0);
		return 1;
	}
	return 0;
}

// Position - 0xF9A
void func_36(var *uParam0, bool bParam1, int iParam2) {
	if (uParam0->f_1 == 0) {
		if (network::network_is_game_in_progress() && !bParam1) {
			if (!iParam2) {
				*uParam0 = network::get_network_time();
			}
			else {
				*uParam0 = network::_0x89023FBBF9200E9F();
			}
		}
		else {
			*uParam0 = gameplay::get_game_timer();
		}
		uParam0->f_1 = 1;
	}
}

// Position - 0xFDF
bool func_37(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (iParam1 == -1) {
		iParam1 = func_6();
	}
	iVar0 = func_33(iParam1);
	iVar1 = gameplay::get_profile_setting(iVar0);
	return gameplay::is_bit_set(iVar1, iParam0);
}

// Position - 0x100B
bool func_38() {
	int iVar0;

	if (network::network_is_signed_in()) {
		if (network::_network_are_ros_available()) {
			if (network::_0x593570C289A77688()) {
				stats::stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				gameplay::set_bit(&iVar0, 2);
				gameplay::set_bit(&iVar0, 4);
				gameplay::set_bit(&iVar0, 6);
				gameplay::set_bit(&Global_25, 2);
				gameplay::set_bit(&Global_25, 4);
				gameplay::set_bit(&Global_25, 6);
				stats::stat_set_int(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (gameplay::_0x5AA3BEFA29F03AD4()) {
					iVar0 = gameplay::get_profile_setting(866);
					gameplay::set_bit(&iVar0, 0);
					stats::_0xDAC073C7901F9E15(iVar0);
				}
				return true;
			}
		}
	}
	if (Global_139179 == 2) {
		return true;
	}
	else if (Global_139179 == 3) {
		return false;
	}
	if (gameplay::_0x5AA3BEFA29F03AD4()) {
		if (gameplay::is_bit_set(gameplay::get_profile_setting(866), 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x10C6
bool func_39() { return Global_1315233; }

// Position - 0x10D2
bool func_40() { return Global_1591201[player::player_id() /*602*/].f_188 != 0; }

// Position - 0x10E9
int func_41(int iParam0, int iParam1) {
	int iVar0;
	var uVar1;

	iVar0 = Global_2522581[iParam0 /*3*/][func_5(iParam1)];
	if (stats::stat_get_bool(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x1115
bool func_42() {
	if (!func_46(1)) {
		return false;
	}
	if (func_43()) {
		return false;
	}
	return Global_1763170;
}

// Position - 0x1139
bool func_43() { return func_44(player::player_id()); }

// Position - 0x1149
bool func_44(int iParam0) {
	if (iParam0 != func_45()) {
		if (Global_1619421[iParam0 /*390*/].f_11 != func_45()) {
			return Global_1619421[iParam0 /*390*/].f_11 == iParam0;
		}
	}
	return false;
}

// Position - 0x117E
int func_45() { return -1; }

// Position - 0x1187
bool func_46(int iParam0) { return func_47(player::player_id(), iParam0); }

// Position - 0x1199
bool func_47(int iParam0, bool bParam1) {
	if (!bParam1) {
		if (func_44(iParam0)) {
			return false;
		}
	}
	return Global_1619421[iParam0 /*390*/].f_11 != func_45();
}

// Position - 0x11C4
int func_48(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0:
		switch (iParam1) {
		case 0: return 20;

		case 1: return 20;

		case 3: return 20;

		case 2: return 20;

		case 4: return 20;

		case 5: return 20;

		case 6: return 20;

		case 7: return 20;
		}
		break;

	case 1:
		switch (iParam1) {
		case 0: return 20;

		case 1: return 20;

		case 3: return 20;

		case 2: return 20;

		case 4: return 20;

		case 5: return 20;

		case 6: return 20;

		case 7: return 20;
		}
		break;

	case 2:
		switch (iParam1) {
		case 0: return 20;

		case 1: return 20;

		case 3: return 20;

		case 2: return 20;

		case 4: return 20;

		case 5: return 20;

		case 6: return 20;

		case 7: return 20;
		}
		break;

	case 3:
		switch (iParam1) {
		case 0: return 20;

		case 1: return 20;

		case 3: return 20;

		case 2: return 20;

		case 4: return 20;

		case 5: return 20;

		case 6: return 20;

		case 7: return 20;
		}
		break;
	}
	return 1;
}

// Position - 0x13D4
int func_49(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return 1;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x13FF
int func_50(int iParam0, int iParam1, int iParam2) {
	if (!network::network_is_game_in_progress()) {
		if (func_51(14)) {
			return 100;
		}
	}
	switch (iParam0) {
	case 0:
		switch (iParam1) {
		case 0: return 0;

		case 1: return 47;

		case 3: return 22;

		case 2: return 21;

		case 4: return 54;

		case 5: return 31;

		case 6: return 79;

		case 7: return 81;
		}
		break;

	case 1:
		switch (iParam1) {
		case 0: return 0;

		case 1: return 51;

		case 3: return 46;

		case 2: return 49;

		case 4: return 71;

		case 5: return 19;

		case 6: return 24;

		case 7: return 21;
		}
		break;

	case 2:
		switch (iParam1) {
		case 0: return 0;

		case 1: return 23;

		case 3: return 28;

		case 2: return 79;

		case 4: return 31;

		case 5: return 82;

		case 6: return 69;

		case 7: return 49;
		}
		break;

	case 3:
		switch (iParam1) {
		case 1: return func_67(1219, iParam2, 0);

		case 3: return func_67(1225, iParam2, 0);

		case 2: return func_67(1221, iParam2, 0);

		case 4: return func_67(1224, iParam2, 0);

		case 5: return func_67(1223, iParam2, 0);

		case 6: return func_67(1220, iParam2, 0);

		case 7: return func_67(1222, iParam2, 0);
		}
		break;
	}
	return 0;
}

// Position - 0x164C
bool func_51(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x165A
void func_52(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam4) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_5(iParam2)];
	if (iVar0 != 0) {
		stats::stat_set_int(iVar0, iParam1, iParam3);
	}
}

// Position - 0x168A
bool func_53(int iParam0, int iParam1, int iParam2, int *iParam3) {
	*iParam3 = func_54(iParam0, iParam1, 0, -1);
	if (*iParam3 > iParam2) {
		return true;
	}
	return false;
}

// Position - 0x16AC
int func_54(int iParam0, int iParam1, int iParam2, int iParam3) {
	float fVar0;
	float fVar1;
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
	float fVar12;

	iVar2 = 0;
	switch (iParam1) {
	case 0:
		if (iParam0 == 0) {
			stats::stat_get_int(joaat("sp0_special_ability_unlocked"), &iVar3, -1);
			fVar0 = system::to_float(iVar3);
		}
		else if (iParam0 == 1) {
			stats::stat_get_int(joaat("sp1_special_ability_unlocked"), &iVar3, -1);
			fVar0 = system::to_float(iVar3);
		}
		else if (iParam0 == 2) {
			stats::stat_get_int(joaat("sp2_special_ability_unlocked"), &iVar3, -1);
			fVar0 = system::to_float(iVar3);
		}
		else if (iParam0 == 3) {
			fVar0 = system::to_float(func_67(64, iParam3, 0));
		}
		break;

	case 1:
		if (iParam0 == 0) {
			stats::stat_get_float(joaat("sp0_dist_running"), &fVar1, -1);
			fVar0 = (fVar1 - Global_101700.f_2095.f_539.f_1583[iParam0]) / 175f;
		}
		else if (iParam0 == 1) {
			stats::stat_get_float(joaat("sp1_dist_running"), &fVar1, -1);
			fVar0 = (fVar1 - Global_101700.f_2095.f_539.f_1583[iParam0]) / 175f;
		}
		else if (iParam0 == 2) {
			stats::stat_get_float(joaat("sp2_dist_running"), &fVar1, -1);
			fVar0 = (fVar1 - Global_101700.f_2095.f_539.f_1583[iParam0]) / 175f;
		}
		else if (iParam0 == 3) {
			fVar0 = func_65(20, iParam3) / 175f;
			func_62(&fVar0);
		}
		if (iParam0 == 0) {
			fVar0 += system::to_float(func_61(joaat("sp0_time_swimming")));
		}
		else if (iParam0 == 1) {
			fVar0 += system::to_float(func_61(joaat("sp1_time_swimming")));
		}
		else if (iParam0 == 2) {
			fVar0 += system::to_float(func_61(joaat("sp2_time_swimming")));
		}
		else if (iParam0 == 3) {
			fVar0 += system::to_float(func_61(func_60(50, iParam3)));
			func_62(&fVar0);
		}
		if (iParam0 == 0) {
			fVar0 += system::to_float(func_61(joaat("sp0_time_driving_bicycle")));
		}
		else if (iParam0 == 1) {
			fVar0 += system::to_float(func_61(joaat("sp1_time_driving_bicycle")));
		}
		else if (iParam0 == 2) {
			fVar0 += system::to_float(func_61(joaat("sp2_time_driving_bicycle")));
		}
		else if (iParam0 == 3) {
			fVar0 += system::to_float(func_61(func_60(47, iParam3)));
			func_62(&fVar0);
		}
		if (iParam0 == 3) {
			fVar0 *= 0.25f;
		}
		break;

	case 3:
		if (iParam0 == 0) {
			fVar0 = system::to_float(func_59(joaat("sp0_time_underwater"))) / 30f;
		}
		else if (iParam0 == 1) {
			fVar0 = system::to_float(func_59(joaat("sp1_time_underwater"))) / 30f;
		}
		else if (iParam0 == 2) {
			fVar0 = system::to_float(func_59(joaat("sp2_time_underwater"))) / 30f;
		}
		else if (iParam0 == 3) {
			fVar0 = system::to_float(func_59(func_60(52, iParam3))) / 30f;
			func_62(&fVar0);
		}
		break;

	case 2:
		if (iParam0 == 0) {
			stats::stat_get_int(joaat("sp0_unarmed_hits"), &iVar3, -1);
			fVar0 = system::to_float(iVar3 - Global_101700.f_2095.f_539.f_1587[iParam0]) / 20f;
		}
		else if (iParam0 == 1) {
			stats::stat_get_int(joaat("sp1_unarmed_hits"), &iVar3, -1);
			fVar0 = system::to_float(iVar3 - Global_101700.f_2095.f_539.f_1587[iParam0]) / 20f;
		}
		else if (iParam0 == 2) {
			stats::stat_get_int(joaat("sp2_unarmed_hits"), &iVar3, -1);
			fVar0 = system::to_float(iVar3 - Global_101700.f_2095.f_539.f_1587[iParam0]) / 20f;
		}
		else if (iParam0 == 3) {
			fVar0 = system::to_float(func_67(1494, iParam3, 0)) / 20f;
			func_62(&fVar0);
		}
		break;

	case 4:
		if (iParam0 == 0) {
			stats::stat_get_int(joaat("sp0_number_near_miss"), &iVar3, -1);
			fVar0 += system::to_float(iVar3 - Global_101700.f_2095.f_539.f_1591[iParam0]) / 50f;
		}
		else if (iParam0 == 1) {
			stats::stat_get_int(joaat("sp1_number_near_miss"), &iVar3, -1);
			fVar0 += system::to_float(iVar3 - Global_101700.f_2095.f_539.f_1591[iParam0]) / 50f;
		}
		else if (iParam0 == 2) {
			stats::stat_get_int(joaat("sp2_number_near_miss"), &iVar3, -1);
			fVar0 += system::to_float(iVar3 - Global_101700.f_2095.f_539.f_1591[iParam0]) / 50f;
		}
		else if (iParam0 == 3) {
			fVar0 += IntToFloat(func_67(107, iParam3, 0) / 50);
			func_62(&fVar0);
		}
		break;

	case 5:
		if (iParam0 == 0) {
			fVar0 = system::to_float(func_61(joaat("sp0_time_driving_plane"))) / 10f;
		}
		else if (iParam0 == 1) {
			fVar0 = system::to_float(func_61(joaat("sp1_time_driving_plane"))) / 10f;
		}
		else if (iParam0 == 2) {
			fVar0 = system::to_float(func_61(joaat("sp2_time_driving_plane"))) / 10f;
		}
		else if (iParam0 == 3) {
			fVar0 = system::to_float(func_61(func_60(43, iParam3))) / 10f;
		}
		if (iParam0 == 0) {
			fVar0 += system::to_float(func_61(joaat("sp0_time_driving_heli"))) / 10f;
		}
		else if (iParam0 == 1) {
			fVar0 += system::to_float(func_61(joaat("sp1_time_driving_heli"))) / 10f;
		}
		else if (iParam0 == 2) {
			fVar0 += system::to_float(func_61(joaat("sp2_time_driving_heli"))) / 10f;
		}
		else if (iParam0 == 3) {
			fVar0 += system::to_float(func_61(func_60(45, iParam3))) / 10f;
		}
		if (iParam0 == 0) {
			stats::stat_get_int(joaat("sp0_plane_landings"), &iVar3, -1);
			fVar0 += system::to_float(iVar3);
		}
		else if (iParam0 == 1) {
			stats::stat_get_int(joaat("sp1_plane_landings"), &iVar3, -1);
			fVar0 += system::to_float(iVar3);
		}
		else if (iParam0 == 2) {
			stats::stat_get_int(joaat("sp2_plane_landings"), &iVar3, -1);
			fVar0 += system::to_float(iVar3);
		}
		else if (iParam0 == 3) {
			fVar0 += IntToFloat(func_67(61, iParam3, 0));
			func_62(&fVar0);
		}
		if (iParam0 == 0 || iParam0 == 1 || iParam0 == 2) {
			iVar4 = func_58(iParam0, 0);
			if (iParam0 == 2) {
				if (iVar4 == 3) {
					fVar0 += 10f;
				}
				else if (iVar4 == 2) {
					fVar0 += 7f;
				}
				else if (iVar4 == 1) {
					fVar0 += 5f;
				}
			}
			else if (iVar4 == 3) {
				fVar0 += 12f;
			}
			else if (iVar4 == 2) {
				fVar0 += 9f;
			}
			else if (iVar4 == 1) {
				fVar0 += 7f;
			}
			iVar4 = func_58(iParam0, 1);
			if (iParam0 == 2) {
				if (iVar4 == 3) {
					fVar0 += 10f;
				}
				else if (iVar4 == 2) {
					fVar0 += 7f;
				}
				else if (iVar4 == 1) {
					fVar0 += 5f;
				}
			}
			else if (iVar4 == 3) {
				fVar0 += 12f;
			}
			else if (iVar4 == 2) {
				fVar0 += 9f;
			}
			else if (iVar4 == 1) {
				fVar0 += 7f;
			}
			iVar4 = func_58(iParam0, 2);
			if (iVar4 == 3) {
				fVar0 += 12f;
			}
			else if (iVar4 == 2) {
				fVar0 += 9f;
			}
			else if (iVar4 == 1) {
				fVar0 += 7f;
			}
			iVar4 = func_58(iParam0, 3);
			if (iVar4 == 3) {
				fVar0 += 12f;
			}
			else if (iVar4 == 2) {
				fVar0 += 9f;
			}
			else if (iVar4 == 1) {
				fVar0 += 7f;
			}
			iVar4 = func_58(iParam0, 6);
			if (iVar4 == 3) {
				fVar0 += 12f;
			}
			else if (iVar4 == 2) {
				fVar0 += 9f;
			}
			else if (iVar4 == 1) {
				fVar0 += 7f;
			}
			iVar4 = func_58(iParam0, 4);
			if (iVar4 == 3) {
				fVar0 += 5f;
			}
			else if (iVar4 == 2) {
				fVar0 += 3f;
			}
			else if (iVar4 == 1) {
				fVar0 += 2f;
			}
			iVar4 = func_58(iParam0, 5);
			if (iVar4 == 3) {
				fVar0 += 12f;
			}
			else if (iVar4 == 2) {
				fVar0 += 9f;
			}
			else if (iVar4 == 1) {
				fVar0 += 7f;
			}
			iVar4 = func_58(iParam0, 7);
			if (iVar4 == 3) {
				fVar0 += 12f;
			}
			else if (iVar4 == 2) {
				fVar0 += 9f;
			}
			else if (iVar4 == 1) {
				fVar0 += 7f;
			}
			iVar4 = func_58(iParam0, 8);
			if (iVar4 == 3) {
				fVar0 += 12f;
			}
			else if (iVar4 == 2) {
				fVar0 += 9f;
			}
			else if (iVar4 == 1) {
				fVar0 += 7f;
			}
			iVar4 = func_58(iParam0, 11);
			if (iVar4 == 3) {
				fVar0 += 12f;
			}
			else if (iVar4 == 2) {
				fVar0 += 9f;
			}
			else if (iVar4 == 1) {
				fVar0 += 7f;
			}
		}
		break;

	case 7:
		if (iParam0 == 0) {
			stats::stat_get_float(joaat("sp0_dist_walk_st"), &fVar1, -1);
			fVar0 = (fVar1 - Global_101700.f_2095.f_539.f_1595[iParam0]) / 45f;
		}
		else if (iParam0 == 1) {
			stats::stat_get_float(joaat("sp1_dist_walk_st"), &fVar1, -1);
			fVar0 = (fVar1 - Global_101700.f_2095.f_539.f_1595[iParam0]) / 45f;
		}
		else if (iParam0 == 2) {
			stats::stat_get_float(joaat("sp2_dist_walk_st"), &fVar1, -1);
			fVar0 = (fVar1 - Global_101700.f_2095.f_539.f_1595[iParam0]) / 45f;
		}
		else if (iParam0 == 3) {
			fVar0 = func_65(19, iParam3) / 45f;
		}
		if (iParam0 == 0) {
			stats::stat_get_int(joaat("sp0_kills_stealth"), &iVar3, -1);
			fVar0 += system::to_float(iVar3 - Global_101700.f_2095.f_539.f_1599[iParam0]) / 2f * 1.5f;
		}
		else if (iParam0 == 1) {
			stats::stat_get_int(joaat("sp1_kills_stealth"), &iVar3, -1);
			fVar0 += system::to_float(iVar3 - Global_101700.f_2095.f_539.f_1599[iParam0]) / 2f * 1.5f;
		}
		else if (iParam0 == 2) {
			stats::stat_get_int(joaat("sp2_kills_stealth"), &iVar3, -1);
			fVar0 += system::to_float(iVar3 - Global_101700.f_2095.f_539.f_1599[iParam0]) / 2f * 1.5f;
		}
		else if (iParam0 == 3) {
			iVar3 = func_67(34, iParam3, 0);
			fVar0 += system::to_float(iVar3) / 2f * 1.5f;
			func_62(&fVar0);
		}
		break;

	case 6:
		if (iParam0 == 0) {
			stats::stat_get_int(joaat("sp0_hits_mission"), &iVar5, -1);
			stats::stat_get_int(joaat("sp0_hits_peds_vehicles"), &iVar6, -1);
			iVar6 -= iVar5;
			fVar0 = system::to_float(iVar5 - Global_101700.f_2095.f_539.f_1603[iParam0]) / 40f;
			fVar0 += system::to_float(iVar6 - Global_101700.f_2095.f_539.f_1607[iParam0]) / 80f;
		}
		else if (iParam0 == 1) {
			stats::stat_get_int(joaat("sp1_hits_mission"), &iVar5, -1);
			stats::stat_get_int(joaat("sp1_hits_peds_vehicles"), &iVar6, -1);
			iVar6 -= iVar5;
			fVar0 = system::to_float(iVar5 - Global_101700.f_2095.f_539.f_1603[iParam0]) / 40f;
			fVar0 += system::to_float(iVar6 - Global_101700.f_2095.f_539.f_1607[iParam0]) / 80f;
		}
		else if (iParam0 == 2) {
			stats::stat_get_int(joaat("sp2_hits_mission"), &iVar5, -1);
			stats::stat_get_int(joaat("sp2_hits_peds_vehicles"), &iVar6, -1);
			iVar6 -= iVar5;
			fVar0 = system::to_float(iVar5 - Global_101700.f_2095.f_539.f_1603[iParam0]) / 40f;
			fVar0 += system::to_float(iVar6 - Global_101700.f_2095.f_539.f_1607[iParam0]) / 80f;
		}
		else if (iParam0 == 3) {
			iVar6 = func_67(166, iParam3, 0);
			fVar0 += system::to_float(iVar6) / 80f;
		}
		if (iParam0 == 0 || iParam0 == 1 || iParam0 == 2) {
			iVar7 = 0;
			while (iVar7 < 22) {
				switch (func_57(iVar7, iParam0)) {
				case 3: iVar8++; break;

				case 2: iVar9++; break;

				case 1: iVar10++; break;
				}
				iVar7++;
			}
			fVar0 += IntToFloat(iVar8 * 3);
			fVar0 += IntToFloat(iVar9 * 2);
			fVar0 += IntToFloat(iVar10 * 1);
		}
		else if (iParam0 == 3) {
			fVar0 += IntToFloat(func_56(joaat("mpply_shootingrange_wins")) * 1);
			func_62(&fVar0);
		}
		break;
	}
	if (iParam1 != 0) {
		iVar11 = func_50(iParam0, iParam1, iParam3);
		fVar0 += IntToFloat(iVar11);
		fVar0 += IntToFloat(func_55(iParam0, iParam1, iParam3));
	}
	if (iParam2) {
		fVar12 = fVar0 - fVar0 % IntToFloat(func_48(iParam0, iParam1));
		if (fVar0 % IntToFloat(func_48(iParam0, iParam1)) >= 0f) {
			fVar12 += IntToFloat(func_48(iParam0, iParam1));
		}
		if (fVar0 >= fVar12) {
			fVar0 = fVar12;
		}
		else {
			fVar0 = fVar12 - IntToFloat(func_48(iParam0, iParam1));
		}
	}
	iVar2 = system::floor(fVar0);
	iVar2 = func_66(iVar2, 0, 100);
	return iVar2;
}

// Position - 0x23A0
int func_55(int iParam0, int iParam1, int iParam2) {
	switch (iParam0) {
	case 0:
	case 1:
	case 2:
		switch (iParam1) {
		case 1:
		case 3:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7: return Global_101700.f_2095.f_539.f_1475[iParam1 /*4*/][iParam0];
		}
		break;

	case 3:
		switch (iParam1) {
		case 1: return func_67(72, iParam2, 0);

		case 3: return func_67(74, iParam2, 0);

		case 2: return func_67(73, iParam2, 0);

		case 4: return func_67(75, iParam2, 0);

		case 5: return func_67(76, iParam2, 0);

		case 6: return func_67(77, iParam2, 0);

		case 7: return func_67(78, iParam2, 0);
		}
		break;
	}
	return 0;
}

// Position - 0x24B4
int func_56(int iParam0) {
	int iVar0;
	var uVar1;

	iVar0 = iParam0;
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x24D2
int func_57(int iParam0, int iParam1) { return Global_101700.f_18106[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3; }

// Position - 0x24EE
int func_58(int iParam0, int iParam1) {
	if (iParam0 < 0 || iParam0 > 2) {
		return 0;
	}
	return Global_101700.f_1720[iParam0 /*121*/][iParam1 /*10*/].f_8;
}

// Position - 0x251C
int func_59(int iParam0) {
	int iVar0;

	iVar0 = 0;
	iVar0 += stats::stat_get_number_of_days(iParam0) * 86400;
	iVar0 += stats::stat_get_number_of_hours(iParam0) * 3600;
	iVar0 += stats::stat_get_number_of_minutes(iParam0) * 60;
	iVar0 += stats::stat_get_number_of_seconds(iParam0);
	return iVar0;
}

// Position - 0x255F
int func_60(int iParam0, int iParam1) { return Global_2503826[iParam0 /*3*/][func_5(iParam1)]; }

// Position - 0x2577
int func_61(int iParam0) {
	int iVar0;

	iVar0 = 0;
	iVar0 += stats::stat_get_number_of_days(iParam0) * 1440;
	iVar0 += stats::stat_get_number_of_hours(iParam0) * 60;
	iVar0 += stats::stat_get_number_of_minutes(iParam0);
	return iVar0;
}

// Position - 0x25AA
var func_62(float *fParam0) {
	if (func_42()) {
		if (func_63() < Global_262145.f_11315) {
			if (*fParam0 + IntToFloat(func_63()) * Global_262145.f_11314 <= IntToFloat(Global_262145.f_11324)) {
				*fParam0 += IntToFloat(func_63()) * Global_262145.f_11314;
			}
		}
		return *fParam0;
	}
	return *fParam0;
}

// Position - 0x2604
int func_63() {
	if (func_46(1)) {
		return Global_1591201[func_64() /*602*/].f_203.f_6;
	}
	return 0;
}

// Position - 0x262A
int func_64() { return Global_1619421[player::player_id() /*390*/].f_11; }

// Position - 0x263F
float func_65(int iParam0, int iParam1) {
	int iVar0;
	var uVar1;

	iVar0 = Global_2521893[iParam0 /*3*/][func_5(iParam1)];
	if (stats::stat_get_float(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0f;
}

// Position - 0x266B
int func_66(int iParam0, int iParam1, int iParam2) {
	if (iParam0 > iParam2) {
		return iParam2;
	}
	else if (iParam0 < iParam1) {
		return iParam1;
	}
	return iParam0;
}

// Position - 0x2690
int func_67(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_5(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x26C2
void func_68(int iParam0, int iParam1, int *iParam2, int *iParam3) {
	switch (iParam0) {
	case 0:
		switch (iParam1) {
		case 0: *iParam2 = joaat("sp0_special_ability_unlocked"); break;

		case 1: *iParam2 = joaat("sp0_stamina"); break;

		case 3: *iParam2 = joaat("sp0_lung_capacity"); break;

		case 2: *iParam2 = joaat("sp0_strength"); break;

		case 4: *iParam2 = joaat("sp0_wheelie_ability"); break;

		case 5: *iParam2 = joaat("sp0_flying_ability"); break;

		case 6: *iParam2 = joaat("sp0_shooting_ability"); break;

		case 7: *iParam2 = joaat("sp0_stealth_ability"); break;
		}
		break;

	case 1:
		switch (iParam1) {
		case 0: *iParam2 = joaat("sp1_special_ability_unlocked"); break;

		case 1: *iParam2 = joaat("sp1_stamina"); break;

		case 3: *iParam2 = joaat("sp1_lung_capacity"); break;

		case 2: *iParam2 = joaat("sp1_strength"); break;

		case 4: *iParam2 = joaat("sp1_wheelie_ability"); break;

		case 5: *iParam2 = joaat("sp1_flying_ability"); break;

		case 6: *iParam2 = joaat("sp1_shooting_ability"); break;

		case 7: *iParam2 = joaat("sp1_stealth_ability"); break;
		}
		break;

	case 2:
		switch (iParam1) {
		case 0: *iParam2 = joaat("sp2_special_ability_unlocked"); break;

		case 1: *iParam2 = joaat("sp2_stamina"); break;

		case 3: *iParam2 = joaat("sp2_lung_capacity"); break;

		case 2: *iParam2 = joaat("sp2_strength"); break;

		case 4: *iParam2 = joaat("sp2_wheelie_ability"); break;

		case 5: *iParam2 = joaat("sp2_flying_ability"); break;

		case 6: *iParam2 = joaat("sp2_shooting_ability"); break;

		case 7: *iParam2 = joaat("sp2_stealth_ability"); break;
		}
		break;

	case 3:
		switch (iParam1) {
		case 0: *iParam3 = 64; break;

		case 1: *iParam3 = 65; break;

		case 3: *iParam3 = 67; break;

		case 2: *iParam3 = 66; break;

		case 4: *iParam3 = 68; break;

		case 5: *iParam3 = 69; break;

		case 6: *iParam3 = 70; break;

		case 7: *iParam3 = 71; break;
		}
		break;
	}
}

// Position - 0x2919
int func_69() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0x2935
bool func_70(int iParam0) { return iParam0 < 3; }

// Position - 0x2941
void func_71(int iParam0, int iParam1) {
	int iVar0;
	float fVar1;
	int *iVar2;
	int iVar3;

	if (iParam0 != 0 || iParam0 != 1 || iParam0 != 2 || iParam0 != 3) {
		return;
	}
	func_68(iParam0, iParam1, &iVar2, &iVar3);
	if (network::network_is_game_in_progress()) {
		iVar0 = func_67(iVar3, -1, 0);
	}
	else {
		stats::stat_get_int(iVar2, &iVar0, -1);
	}
	switch (iParam1) {
	case 2:
		fVar1 = 0.8f + 0.4f * system::to_float(iVar0) / 100f;
		player::set_player_melee_weapon_damage_modifier(player::player_id(), fVar1, 1);
		break;

	case 7:
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("armenian3")) != 0 ||
			script::_get_number_of_instances_of_script_with_name_hash(joaat("trevor3")) != 0) {
			Global_89107 = 1;
		}
		else {
			fVar1 = 1f - system::to_float(iVar0) / 100f;
			player::set_player_noise_multiplier(player::player_id(), fVar1);
			player::set_player_sneaking_noise_multiplier(player::player_id(), fVar1);
			player::set_player_stealth_perception_modifier(player::player_id(), fVar1);
		}
		break;
	}
}

// Position - 0x2A2E
int func_72(int iParam0) {
	if (Global_35781 == 15) {
		return 0;
	}
	if (func_73(iParam0)) {
		return 0;
	}
	return 1;
}

// Position - 0x2A50
bool func_73(int iParam0) { return func_74(iParam0, Global_35781); }

// Position - 0x2A61
int func_74(int iParam0, int iParam1) {
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

// Position - 0x2C42
void func_75() {
	func_80();
	func_79();
	func_76();
}

// Position - 0x2C56
void func_76() {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!iLocal_77) {
		if (iLocal_55 == 3) {
			if (Global_2097152[func_78() /*10758*/].f_7546.f_7) {
				iLocal_74 = func_59(func_60(142, -1));
				Global_2097152[func_78() /*10758*/].f_7546.f_7 = 0;
			}
			else {
				iLocal_74 = Global_2097152[func_78() /*10758*/].f_7546.f_6;
			}
			if (Global_2097152[func_78() /*10758*/].f_7546.f_4 == 0) {
				Global_2097152[func_78() /*10758*/].f_7546.f_4 = network::_get_posix_time();
			}
			iLocal_76 = Global_2097152[func_78() /*10758*/].f_7546.f_4;
			iLocal_75 = Global_2097152[func_78() /*10758*/].f_7546.f_5;
		}
		else {
			if (Global_101700.f_2095.f_539.f_1520[iLocal_55]) {
				switch (iLocal_55) {
				case 0: iLocal_74 = func_59(joaat("sp0_total_wheelie_time")); break;

				case 1: iLocal_74 = func_59(joaat("sp1_total_wheelie_time")); break;

				case 2: iLocal_74 = func_59(joaat("sp2_total_wheelie_time")); break;
				}
				Global_101700.f_2095.f_539.f_1520[iLocal_55] = 0;
			}
			else {
				iLocal_74 = Global_101700.f_2095.f_539.f_1516[iLocal_55];
			}
			if (Global_101700.f_2095.f_539.f_1508[iLocal_55] == 0) {
				Global_101700.f_2095.f_539.f_1508[iLocal_55] = network::_get_posix_time();
			}
			iLocal_76 = Global_101700.f_2095.f_539.f_1508[iLocal_55];
			iLocal_75 = Global_101700.f_2095.f_539.f_1512[iLocal_55];
		}
		iLocal_77 = 1;
		iLocal_78 = 1;
	}
	else if (network::_get_posix_time() - iLocal_76 > 86400) {
		iLocal_77 = 0;
		iLocal_78 = 0;
		iLocal_76 = network::_get_posix_time();
		iLocal_75 = 0;
		if (iLocal_55 == 3) {
			Global_2097152[func_78() /*10758*/].f_7546.f_7 = 1;
		}
		else {
			Global_101700.f_2095.f_539.f_1520[iLocal_55] = 1;
		}
	}
	if (iLocal_78) {
		switch (iLocal_55) {
		case 0: iVar0 = func_59(joaat("sp0_total_wheelie_time")); break;

		case 1: iVar0 = func_59(joaat("sp1_total_wheelie_time")); break;

		case 2: iVar0 = func_59(joaat("sp2_total_wheelie_time")); break;

		case 3: iVar0 = func_59(func_60(142, -1)); break;
		}
		iVar1 = iVar0 - iLocal_74;
		iVar2 = system::floor(system::to_float(iVar1) / 15f) - iLocal_75;
		if (iVar2 > 0) {
			func_77(iLocal_55, 4, iVar2);
			iLocal_75 += iVar2;
		}
		if (iVar0 > iLocal_74 + time::get_milliseconds_per_game_minute() / 1000 * 60) {
			iLocal_78 = 0;
		}
	}
	if (iLocal_55 == 3) {
		Global_2097152[func_78() /*10758*/].f_7546.f_4 = iLocal_76;
		Global_2097152[func_78() /*10758*/].f_7546.f_5 = iLocal_75;
	}
	else {
		Global_101700.f_2095.f_539.f_1508[iLocal_55] = iLocal_76;
		Global_101700.f_2095.f_539.f_1512[iLocal_55] = iLocal_75;
	}
}

// Position - 0x2F18
void func_77(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	switch (iParam0) {
	case 0:
	case 1:
	case 2: Global_101700.f_2095.f_539.f_1475[iParam1 /*4*/][iParam0] += iParam2; break;

	case 3:
		iVar1 = 6022;
		switch (iParam1) {
		case 1: iVar1 = 72; break;

		case 3: iVar1 = 74; break;

		case 2: iVar1 = 73; break;

		case 4: iVar1 = 75; break;

		case 5: iVar1 = 76; break;

		case 6: iVar1 = 77; break;

		case 7: iVar1 = 78; break;
		}
		if (iVar1 != 6022) {
			iVar0 = func_67(iVar1, -1, 0);
			iVar0 += iParam2;
			if (iVar0 > 100) {
				iVar0 = 100;
			}
			func_52(iVar1, iVar0, -1, 1, 0);
		}
		break;
	}
}

// Position - 0x3008
int func_78() {
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

// Position - 0x3015
void func_79() {
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iLocal_71) {
		bVar0 = true;
		if (!ped::is_ped_injured(player::player_ped_id()) && ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			iVar1 = ped::get_vehicle_ped_is_using(player::player_ped_id());
			if (entity::does_entity_exist(iVar1) && vehicle::is_vehicle_driveable(iVar1, 0) &&
				!entity::is_entity_in_air(iVar1) &&
				vehicle::get_ped_in_vehicle_seat(iVar1, -1, 0) == player::player_ped_id() &&
				(vehicle::is_this_model_a_bike(entity::get_entity_model(iVar1)) ||
				 vehicle::is_this_model_a_car(entity::get_entity_model(iVar1)))) {
				bVar0 = false;
				if (entity::get_entity_speed(iVar1) >= 53f) {
					func_77(iLocal_55, 4, 2);
					bVar0 = true;
				}
			}
		}
		if (bVar0) {
			iLocal_71 = 0;
			iLocal_72 = gameplay::get_game_timer();
			if (network::network_is_game_in_progress()) {
				iLocal_73 = network::get_network_time();
			}
		}
	}
	else if (!ped::is_ped_injured(player::player_ped_id()) && ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		iVar2 = ped::get_vehicle_ped_is_using(player::player_ped_id());
		if (entity::does_entity_exist(iVar2) && vehicle::is_vehicle_driveable(iVar2, 0) &&
			entity::get_entity_speed(iVar2) < 20f && !entity::is_entity_in_air(iVar2)) {
			if (!network::network_is_game_in_progress() && gameplay::get_game_timer() - iLocal_72 > 10000 ||
				network::network_is_game_in_progress() &&
					network::is_time_more_than(network::get_network_time(),
											   network::get_time_offset(iLocal_73, 10000))) {
				iLocal_71 = 1;
			}
		}
	}
}

// Position - 0x3167
void func_80() {
	bool bVar0;
	int iVar1;
	char cVar2[64];

	bVar0 = false;
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		iVar1 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
		if (entity::does_entity_exist(iVar1) && vehicle::is_vehicle_driveable(iVar1, 0) &&
			vehicle::get_ped_in_vehicle_seat(iVar1, -1, 0) == player::player_ped_id() &&
			(vehicle::is_this_model_a_car(entity::get_entity_model(iVar1)) ||
			 vehicle::is_this_model_a_bike(entity::get_entity_model(iVar1)) ||
			 vehicle::is_this_model_a_bicycle(entity::get_entity_model(iVar1)) ||
			 vehicle::is_this_model_a_quadbike(entity::get_entity_model(iVar1)))) {
			if (iLocal_63) {
				if (!entity::is_entity_in_air(iVar1)) {
					if (!network::network_is_game_in_progress() && gameplay::get_game_timer() - iLocal_65 > 1500 ||
						network::network_is_game_in_progress() &&
							network::is_time_more_than(network::get_network_time(),
													   network::get_time_offset(iLocal_66, 1500))) {
						iLocal_67 = gameplay::get_game_timer();
						if (network::network_is_game_in_progress()) {
							iLocal_68 = network::get_network_time();
						}
						iLocal_64 = 1;
					}
					iLocal_63 = 0;
				}
			}
			if (iLocal_64) {
				if (!entity::is_entity_in_air(iVar1)) {
					if (vehicle::is_vehicle_on_all_wheels(iVar1)) {
						if (!network::network_is_game_in_progress() && gameplay::get_game_timer() - iLocal_67 > 20 ||
							!network::network_is_game_in_progress() && gameplay::get_game_timer() - iLocal_67 == 0 ||
							network::network_is_game_in_progress() &&
								network::is_time_more_than(network::get_network_time(),
														   network::get_time_offset(iLocal_68, 20)) ||
							network::network_is_game_in_progress() &&
								network::is_time_equal_to(network::get_network_time(), iLocal_68)) {
						}
						else {
							func_77(iLocal_55, 4, 1);
						}
						StringCopy(&cVar2, "Player landed on all wheels in ", 64);
						StringIntConCat(&cVar2, gameplay::get_game_timer() - iLocal_67, 64);
						StringConCat(&cVar2, "ms", 64);
						bVar0 = true;
					}
				}
				else {
					bVar0 = true;
				}
			}
			if (!iLocal_63 && !iLocal_64) {
				if (!network::network_is_game_in_progress() && gameplay::get_game_timer() - iLocal_69 > 1000 ||
					network::network_is_game_in_progress() &&
						network::is_time_more_than(network::get_network_time(),
												   network::get_time_offset(iLocal_70, 1000))) {
					if (entity::is_entity_in_air(iVar1)) {
						if (!iLocal_63) {
							iLocal_65 = gameplay::get_game_timer();
							if (network::network_is_game_in_progress()) {
								iLocal_66 = network::get_network_time();
							}
							iLocal_63 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_63 || iLocal_64) {
			bVar0 = true;
		}
	}
	else if (iLocal_63 || iLocal_64) {
		bVar0 = true;
	}
	if (bVar0) {
		iLocal_69 = gameplay::get_game_timer();
		if (network::network_is_game_in_progress()) {
			iLocal_70 = network::get_network_time();
		}
		iLocal_63 = 0;
		iLocal_64 = 0;
	}
}

// Position - 0x33AB
bool func_81(int iParam0) { return (Global_100785 & iParam0) != 0; }

// Position - 0x33BC
var func_82() {
	func_83();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x33D5
void func_83() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_85(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_84(player::player_ped_id());
			if (func_70(iVar0) && (!func_51(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_70(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x34D2
int func_84(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_85(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x350F
int func_85(int iParam0) {
	if (func_70(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x3539
void func_86() {
	char *sVar0;
	int iVar1;

	if (iLocal_58) {
		if (iLocal_59 != iLocal_55) {
			iLocal_58 = 0;
			return;
		}
		sVar0 = "CHAR_DEFAULT";
		switch (iLocal_59) {
		case 0: sVar0 = "CHAR_MICHAEL"; break;

		case 1: sVar0 = "CHAR_FRANKLIN"; break;

		case 2: sVar0 = "CHAR_TREVOR"; break;

		case 3:
			iVar1 = func_89(player::player_id());
			if (iVar1 == 0) {
				return;
			}
			else {
				sVar0 = ped::get_pedheadshot_txd_string(iVar1);
			}
			break;
		}
		ui::_set_notification_text_entry("PS_UPDATE");
		ui::add_text_component_integer(iLocal_62);
		ui::_set_notification_message_2(func_88(iLocal_60), func_87(iLocal_60), iLocal_61, iLocal_62 - iLocal_61, 0,
										sVar0, sVar0);
		iLocal_79 = 1;
		iLocal_80 = gameplay::get_game_timer() + 5000;
		if (network::network_is_game_in_progress()) {
			iLocal_81 = network::get_time_offset(network::get_network_time(), 5000);
		}
		iLocal_58 = 0;
	}
}

// Position - 0x35FD
int func_87(int iParam0) {
	switch (iParam0) {
	case 0: return 23;

	case 1: return 2;

	case 3: return 24;

	case 2: return 25;

	case 4: return 14;

	case 5: return 27;

	case 6: return 17;

	case 7: return 28;
	}
	return -1;
}

// Position - 0x367C
char *func_88(int iParam0) {
	switch (iParam0) {
	case 0: return "PSF_SPEC_AB";

	case 1: return "PSF_STAMINA";

	case 3: return "PSF_LUNG";

	case 2: return "PSF_STRENGTH";

	case 4: return "PSF_DRIVING";

	case 5: return "PSF_FLYING";

	case 6: return "PSF_SHOOTING";

	case 7: return "PSF_STEALTH";
	}
	return "ERROR";
}

// Position - 0x3706
int func_89(int iParam0) {
	int iVar0;

	iVar0 = func_92(iParam0);
	if (iVar0 == -1) {
		func_90(iParam0, 1);
		return 0;
	}
	Global_1364072[iVar0 /*5*/].f_4 = 1;
	return Global_1364072[iVar0 /*5*/].f_2;
}

// Position - 0x373C
void func_90(int iParam0, int iParam1) {
	if (!func_17(iParam0, 0, 1)) {
		return;
	}
	if (func_92(iParam0) != -1) {
		return;
	}
	if (Global_1364235) {
		if (iParam0 == Global_1364235.f_1) {
			return;
		}
	}
	if (func_91(iParam0)) {
		return;
	}
	if (Global_1364273 >= 32) {
		return;
	}
	Global_1364240[Global_1364273] = iParam0;
	Global_1364273++;
	if (iParam1) {
	}
}

// Position - 0x37A8
bool func_91(int iParam0) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1364273) {
		if (Global_1364240[iVar0] == iParam0) {
			return true;
		}
		iVar0++;
	}
	return false;
}

// Position - 0x37DA
int func_92(int iParam0) {
	int iVar0;

	if (!func_17(iParam0, 0, 1)) {
		return -1;
	}
	if (Global_1364233 == 0) {
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1364233) {
		if (Global_1364072[iVar0 /*5*/].f_1 == iParam0) {
			if (ped::is_pedheadshot_valid(Global_1364072[iVar0 /*5*/].f_2) &&
				ped::is_pedheadshot_ready(Global_1364072[iVar0 /*5*/].f_2)) {
				return iVar0;
			}
			func_93(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x3859
void func_93(int iParam0) {
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;

	if (iParam0 >= Global_1364233) {
		return;
	}
	if (ped::is_pedheadshot_valid(Global_1364072[iParam0 /*5*/].f_2)) {
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1364072[iParam0 /*5*/].f_2 != 0) {
			StringCopy(&cVar16, ped::get_pedheadshot_txd_string(Global_1364072[iParam0 /*5*/].f_2), 64);
			ui::_0x317EBA71D7543F52(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		ped::unregister_pedheadshot(Global_1364072[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1364233) {
		Global_1364072[iVar32 /*5*/] = {Global_1364072[iVar33 /*5*/]};
		iVar32++;
		iVar33++;
	}
	func_94(&Global_1364072[iVar32 /*5*/]);
	Global_1364233--;
}

// Position - 0x390E
void func_94(var *uParam0) {
	*uParam0 = 0;
	uParam0->f_1 = func_45();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (network::network_is_game_in_progress()) {
		uParam0->f_3 = network::get_network_time();
	}
}

// Position - 0x393B
void func_95() {
	float fVar0;
	int iVar1;

	if (gameplay::get_index_of_current_level() != 1) {
		return;
	}
	if (network::network_is_game_in_progress()) {
		if (!func_99(player::player_id())) {
			return;
		}
		if (func_98() != 0) {
			return;
		}
	}
	if (network::network_is_game_in_progress()) {
		if (func_98() == 0) {
			iLocal_50 = 2;
		}
	}
	else {
		iLocal_50 = 0;
	}
	if (!func_97()) {
		func_96();
	}
	iLocal_52 = 0;
	iLocal_53 = 0;
	if (network::network_is_game_in_progress()) {
		iLocal_54 = network::get_network_time();
	}
	iLocal_69 = gameplay::get_game_timer();
	if (network::network_is_game_in_progress()) {
		iLocal_70 = network::get_network_time();
	}
	if (network::network_is_game_in_progress()) {
		if (!gameplay::is_bit_set(Global_2097152[func_78() /*10758*/].f_7546.f_1016, 2)) {
			fVar0 = system::to_float(func_67(187, -1, 0)) / 20f;
			iVar1 = system::floor(fVar0);
			iVar1 = func_66(iVar1, 0, 100);
			func_77(3, 2, iVar1);
			gameplay::set_bit(&Global_2097152[func_78() /*10758*/].f_7546.f_1016, 2);
		}
	}
	bLocal_56 = true;
	iLocal_51 = 1;
}

// Position - 0x3A25
void func_96() {
	int iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int *iVar5;
	int *iVar6;

	if (network::network_is_game_in_progress()) {
		iVar0 = 0;
		while (iVar0 < 8) {
			if (iVar0 != 0) {
				func_68(3, iVar0, &iVar1, &iVar2);
				func_52(iVar2, func_50(3, iVar0, -1), -1, 1, 0);
			}
			iVar0++;
		}
		func_4(0, 1, -1, 1);
		Global_89106 = 1;
	}
	else {
		iVar3 = 0;
		while (iVar3 < 3) {
			iVar4 = 0;
			while (iVar4 < 8) {
				if (iVar4 != 0) {
					func_68(iVar3, iVar4, &iVar5, &iVar6);
					stats::stat_set_int(iVar5, func_50(iVar3, iVar4, -1), 1);
				}
				iVar4++;
			}
			iVar3++;
		}
		Global_101700.f_2095.f_539.f_1615[0] = func_50(0, 0, -1);
		Global_101700.f_2095.f_539.f_1615[1] = func_50(1, 0, -1);
		Global_101700.f_2095.f_539.f_1615[2] = func_50(2, 0, -1);
		Global_101700.f_2095.f_539.f_1582 = 1;
		Global_89106 = 1;
	}
}

// Position - 0x3B19
int func_97() {
	if (network::network_is_game_in_progress()) {
		return 1;
	}
	return Global_101700.f_2095.f_539.f_1582;
}

// Position - 0x3B3C
int func_98() { return Global_25190; }

// Position - 0x3B47
int func_99(int iParam0) {
	if (iParam0 == -1) {
		return 0;
	}
	else {
		return gameplay::is_bit_set(Global_2433125.f_1, iParam0);
	}
	return 1;
}

// Position - 0x3B6C
void func_100() {
	if (iLocal_51 != 0 && iLocal_50 != 3) {
		if (iLocal_50 == 0) {
			if (network::network_is_game_in_progress()) {
				iLocal_50 = 3;
			}
			if (!func_97()) {
				iLocal_50 = 3;
			}
		}
		else if (iLocal_50 == 2) {
			if (!network::network_is_game_in_progress() || !func_99(player::player_id()) || func_98() != 0) {
				iLocal_50 = 3;
			}
		}
		if (iLocal_50 == 3) {
			iLocal_51 = 2;
		}
	}
}
