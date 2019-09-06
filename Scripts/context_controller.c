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
var uLocal_21 = 0;
var uLocal_22 = 0;
float fLocal_23 = 0f;
float fLocal_24 = 0f;
float fLocal_25 = 0f;
var uLocal_26 = 0;
var uLocal_27 = 0;
float fLocal_28 = 0f;
var uLocal_29 = 0;
var uLocal_30 = 0;
var uLocal_31 = 0;
float fLocal_32 = 0f;
float fLocal_33 = 0f;
var uLocal_34 = 0;
var uLocal_35 = 0;
int iLocal_36 = 0;
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
var uLocal_50 = 0;
var uLocal_51 = 0;
var uLocal_52 = 0;
var uLocal_53 = 0;
var uLocal_54 = 0;
var uLocal_55 = 0;
var uLocal_56 = 10;
var uLocal_57 = 0;
var uLocal_58 = 0;
var uLocal_59 = 0;
var uLocal_60 = 0;
var uLocal_61 = 0;
var uLocal_62 = 0;
var uLocal_63 = 0;
var uLocal_64 = 0;
var uLocal_65 = 0;
var uLocal_66 = 0;
var uLocal_67 = 2;
var uLocal_68 = 0;
var uLocal_69 = 0;
var uLocal_70 = 8;
var uLocal_71 = 0;
var uLocal_72 = 0;
var uLocal_73 = 0;
var uLocal_74 = 0;
var uLocal_75 = 0;
var uLocal_76 = 0;
var uLocal_77 = 0;
var uLocal_78 = 0;
var uLocal_79 = 8;
var uLocal_80 = 0;
var uLocal_81 = 0;
var uLocal_82 = 0;
var uLocal_83 = 0;
var uLocal_84 = 0;
var uLocal_85 = 0;
var uLocal_86 = 0;
var uLocal_87 = 0;
var uLocal_88 = 0;
var uLocal_89 = 0;
float fLocal_90 = 0f;
var uLocal_91 = 0;
var uLocal_92 = 0;
float fLocal_93 = 0f;
float fLocal_94 = 0f;
float fLocal_95 = 0f;
float fLocal_96 = 0f;
float fLocal_97 = 0f;
var uLocal_98 = 0;
int iLocal_99 = 0;
bool bLocal_100 = 0;
bool bLocal_101 = 0;
struct<4> Local_102 = {
	0, 0, 0, 0
};
struct<16> Local_106 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
int iLocal_122 = 0;
int iLocal_123 = 0;
#pragma endregion //}

void __EntryFunction__() {
	int iVar0;
	int iVar1;
	int *iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_90 = 0.05f + 0.275f - 0.01f;
	fLocal_93 = -0.05f;
	fLocal_94 = 0.92f;
	fLocal_95 = 1.94f;
	fLocal_96 = 2.99f;
	fLocal_97 = 3.7f;
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("context_controller")) > 1) {
		script::terminate_this_thread();
	}
	gameplay::network_set_script_is_safe_for_network_game();
	iVar0 = 0;
	iVar1 = iVar0;
	system::settimera(0);
	Global_36678 = 0;
	func_37();
	StringCopy(&Global_36679, "CC_SUBSTR", 16);
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	iVar7 = -1;
	iVar8 = Global_69702;
	while (true) {
		if (Global_69702) {
			func_34();
		}
		else {
			func_32();
		}
		func_26();
		if (Global_69702 != iVar8) {
			func_25();
			func_37();
			iVar2 = -1;
			iVar8 = Global_69702;
			while (streaming::is_player_switch_in_progress()) {
				system::wait(2000);
			}
		}
		if (Global_36684) {
			if (Global_36686 > -1) {
				if (!Global_36484[Global_36686 /*32*/].f_6) {
					if (!func_23(Global_36686, 1)) {
						Global_36686 = -1;
					}
				}
			}
		}
		if (func_19()) {
			iVar2 = -1;
			func_25();
		}
		if (iVar2 > -1) {
			if (!Global_36684) {
				if (Global_36686 != iVar2) {
					if (func_18(Global_36686)) {
						func_25();
						if (!Global_36484[iVar2 /*32*/].f_5 && Global_36484[iVar2 /*32*/]) {
							if (!func_19()) {
								if (!Global_36484[iVar2 /*32*/].f_7) {
									if (!Global_36484[iVar2 /*32*/].f_6) {
										if (!Global_36484[iVar2 /*32*/].f_12) {
											func_17(Global_36484[iVar2 /*32*/].f_8, Global_36484[iVar2 /*32*/].f_3);
										}
										else {
											func_16(Global_36484[iVar2 /*32*/].f_8, Global_36484[iVar2 /*32*/].f_13,
													Global_36484[iVar2 /*32*/].f_3, Global_36484[iVar2 /*32*/].f_30);
										}
										Global_36686 = iVar2;
									}
								}
							}
						}
					}
				}
			}
			else {
				func_25();
			}
		}
		else {
			func_25();
		}
		switch (iVar0) {
		case 0:
			iVar2 = func_15();
			if (controls::is_control_released(2, 51)) {
				iVar6 = 1;
			}
			if (!func_19()) {
				if (iVar2 > -1 && iVar6) {
					if (controls::is_control_just_pressed(2, 51)) {
						Global_36484[iVar2 /*32*/].f_4 = 1;
						Global_36484[iVar2 /*32*/].f_29 = 0;
						iVar7 = Global_36484[iVar2 /*32*/].f_1;
						iVar0 = 1;
						Global_36677 = 0;
					}
				}
			}
			else {
				iVar2 = -1;
			}
			if (iVar3 != iVar2) {
				if (iVar2 != -1) {
					if (!ped::is_ped_dead_or_dying(player::get_player_ped(player::get_player_index()), 1)) {
						if (ped::is_ped_in_any_vehicle(player::get_player_ped(player::get_player_index()), 0)) {
							if (controls::is_control_enabled(0, 101)) {
								iVar5 = 1;
								controls::disable_control_action(0, 101, 1);
							}
							if (controls::is_control_enabled(0, 74)) {
								iVar4 = 1;
								controls::disable_control_action(0, 74, 1);
							}
						}
					}
				}
				else {
					if (iVar5) {
						controls::enable_control_action(0, 101, 1);
						iVar5 = 0;
					}
					if (iVar4) {
						controls::enable_control_action(0, 74, 1);
						iVar4 = 0;
					}
				}
				iVar3 = iVar2;
			}
			break;

		case 1:
			if (iVar2 < 0 || func_14() == 0) {
				iVar0 = 0;
			}
			else {
				if (system::timera() > 5000) {
					Global_36484[iVar2 /*32*/].f_7 = 1;
					iVar0 = 0;
				}
				else if (func_13(iVar2)) {
					iVar0 = 2;
				}
				if (iVar7 != Global_36484[iVar2 /*32*/].f_1) {
					iVar0 = 0;
				}
				if (Global_36484[iVar2 /*32*/].f_7 || Global_36484[iVar2 /*32*/] == 0) {
					iVar0 = 0;
				}
			}
			break;

		case 2:
			if (Global_36677) {
				func_25();
			}
			if (controls::is_control_just_pressed(2, 51)) {
				if (iVar2 > -1) {
					Global_36484[iVar2 /*32*/].f_29 = 0;
				}
			}
			if (Global_36678) {
				Global_36678 = 0;
				iVar0 = 0;
			}
			else if (iVar2 > -1) {
				if (!(Global_36484[iVar2 /*32*/].f_4 || Global_36484[iVar2 /*32*/].f_7)) {
					Global_36678 = 0;
					iVar2 = -1;
				}
			}
			if (iVar2 > -1) {
				if (Global_36484[iVar2 /*32*/].f_7 || Global_36484[iVar2 /*32*/] == 0) {
					iVar2 = -1;
				}
			}
			if (iVar2 == -1) {
				iVar0 = 0;
				iVar6 = 0;
			}
			break;
		}
		if (iVar2 > -1) {
			controls::disable_control_action(0, 46, 1);
			controls::disable_control_action(0, 54, 1);
		}
		if (iVar0 != iVar1) {
			iVar1 = iVar0;
			system::settimera(0);
			iVar6 = 0;
		}
		func_12();
		func_10(&iVar2);
		Global_36683 = 0;
		Global_36684 = 0;
		func_1();
		system::wait(0);
	}
}

// Position - 0x477
void func_1() {
	int iVar0;

	if (!iLocal_99) {
		return;
	}
	iVar0 = 1;
	if (iLocal_122 == 1) {
		iVar0 = 0;
	}
	if (bLocal_100) {
		if (bLocal_101) {
			ui::add_next_message_to_previous_briefs(0);
		}
		ui::begin_text_command_display_help(&Local_102);
		if (bLocal_101) {
			ui::add_text_component_substring_player_name(&Local_106);
		}
		else {
			ui::add_text_component_substring_text_label(&Global_36679);
			ui::add_text_component_substring_text_label(&Local_106);
		}
		ui::end_text_command_display_help(0, 0, iVar0, 50);
	}
	else {
		ui::begin_text_command_display_help(&Local_102);
		ui::add_text_component_substring_text_label(&Global_36679);
		ui::end_text_command_display_help(0, 0, iVar0, 50);
	}
	switch (iLocal_122) {
	case 0: break;

	case 1: func_9(0); break;

	case 2: func_2(0); break;
	}
}

// Position - 0x514
void func_2(int iParam0) {
	char *sVar0;

	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_4(1)) {
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_3()) {
		audio::play_sound_frontend(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

// Position - 0x548
bool func_3() { return Global_2433125.f_2199[0 /*76*/].f_1 != 0; }

// Position - 0x55E
bool func_4(int iParam0) { return func_5(player::player_id(), iParam0); }

// Position - 0x570
int func_5(int iParam0, bool bParam1) { return func_6(iParam0, bParam1, 1); }

// Position - 0x581
int func_6(int iParam0, bool bParam1, int iParam2) {
	int iVar0;

	if (iParam0 == func_8()) {
		return 0;
	}
	if (!bParam1) {
		if (func_7(iParam0, iParam2)) {
			return 0;
		}
	}
	iVar0 = Global_1619421[iParam0 /*390*/].f_11;
	if (iVar0 != func_8() && Global_1619421[iVar0 /*390*/].f_11.f_289 == iParam2) {
		return 1;
	}
	return 0;
}

// Position - 0x5DD
bool func_7(int iParam0, int iParam1) {
	if (iParam0 != func_8()) {
		if (Global_1619421[iParam0 /*390*/].f_11 != func_8()) {
			if (Global_1619421[iParam0 /*390*/].f_11 == iParam0 &&
				Global_1619421[iParam0 /*390*/].f_11.f_289 == iParam1) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x62C
int func_8() { return -1; }

// Position - 0x635
void func_9(int iParam0) {
	unk_0xB9C362BABECDDC7A(3, 21, 200, 0, 0);
	if (iParam0 && !func_3()) {
		audio::play_sound_frontend(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

// Position - 0x662
void func_10(int *iParam0) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6) {
		if (Global_36484[iVar0 /*32*/] && Global_36484[iVar0 /*32*/].f_4) {
			if (Global_36484[iVar0 /*32*/].f_31 != 0) {
				if (!script::is_thread_active(Global_36484[iVar0 /*32*/].f_31)) {
					if (*iParam0 > -1) {
						func_11();
					}
					Global_36484[iVar0 /*32*/] = 0;
					Global_36484[iVar0 /*32*/].f_31 = 0;
					Global_36484[iVar0 /*32*/] = 0;
					Global_36484[iVar0 /*32*/].f_4 = 0;
					Global_36484[iVar0 /*32*/].f_5 = 0;
					Global_36484[iVar0 /*32*/].f_2 = 0;
					Global_36484[iVar0 /*32*/].f_7 = 0;
					Global_36484[iVar0 /*32*/].f_6 = 0;
					Global_36484[iVar0 /*32*/].f_3 = 0;
					*iParam0 = -1;
				}
			}
		}
		iVar0++;
	}
}

// Position - 0x71A
void func_11() {
	if (Global_36686 != -1 || iLocal_99) {
		iLocal_99 = 0;
		Global_36686 = -1;
	}
}

// Position - 0x739
void func_12() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6) {
		if (Global_36484[iVar0 /*32*/].f_7) {
			if (iVar0 == Global_36686) {
				func_25();
			}
			Global_36484[iVar0 /*32*/].f_31 = 0;
			Global_36484[iVar0 /*32*/] = 0;
			Global_36484[iVar0 /*32*/].f_4 = 0;
			Global_36484[iVar0 /*32*/].f_5 = 0;
			Global_36484[iVar0 /*32*/].f_2 = 0;
			Global_36484[iVar0 /*32*/].f_7 = 0;
			Global_36484[iVar0 /*32*/].f_6 = 0;
			Global_36484[iVar0 /*32*/].f_1 = -1;
			Global_36484[iVar0 /*32*/].f_3 = 0;
		}
		iVar0++;
	}
}

// Position - 0x7C6
bool func_13(int iParam0) {
	if (iParam0 < 0) {
		return false;
	}
	if (Global_36484[iParam0 /*32*/].f_5) {
		return true;
	}
	return false;
}

// Position - 0x7E9
int func_14() {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6) {
		if (Global_36484[iVar0 /*32*/] == 1) {
			if (Global_36484[iVar0 /*32*/].f_4 == 0) {
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 == 0) {
		func_25();
	}
	return iVar1;
}

// Position - 0x833
int func_15() {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 6) {
		if (Global_36484[iVar0 /*32*/]) {
			if (Global_36484[iVar0 /*32*/].f_2 > iVar1) {
				iVar2 = iVar0;
				iVar1 = Global_36484[iVar0 /*32*/].f_2;
			}
		}
		iVar0++;
	}
	return iVar2;
}

// Position - 0x87F
void func_16(struct<4> Param0, struct<16> Param4, var uParam20, var uParam21) {
	Local_102 = {Param0};
	Local_106 = {Param4};
	iLocal_99 = 1;
	bLocal_100 = true;
	iLocal_122 = uParam20;
	bLocal_101 = uParam21;
}

// Position - 0x8A7
void func_17(struct<4> Param0, var uParam4) {
	Local_102 = {Param0};
	iLocal_99 = 1;
	bLocal_100 = false;
	iLocal_122 = uParam4;
}

// Position - 0x8C1
bool func_18(int iParam0) {
	int iVar0;

	if (Global_88753 && Global_88752) {
		return false;
	}
	if (iParam0 > 0) {
		if (func_23(iParam0, 1) || iLocal_99) {
			return true;
		}
	}
	if (ui::is_help_message_being_displayed() && !ui::_0x214CD562A939246A()) {
		iVar0 = 0;
		while (iVar0 < 6) {
			if (func_23(iVar0, 1)) {
				return true;
			}
			iVar0++;
		}
		return false;
	}
	return true;
}

// Position - 0x92F
bool func_19() {
	if (G_DisableMessagesAndCalls2) {
		return true;
	}
	if (!player::is_player_playing(player::get_player_index())) {
		return true;
	}
	if (func_22(0)) {
		return true;
	}
	if (cutscene::is_cutscene_playing()) {
		return true;
	}
	if (Global_36683) {
		return true;
	}
	if (ui::is_hud_component_active(19)) {
		return true;
	}
	if (func_21(1)) {
		return true;
	}
	if (streaming::is_player_switch_in_progress()) {
		return true;
	}
	if (func_20(8, -1)) {
		return true;
	}
	return false;
}

// Position - 0x9A6
bool func_20(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x9E1
bool func_21(int iParam0) {
	if (iParam0) {
		return Global_17151.f_4 && Global_17151.f_104 == 4;
	}
	return Global_17151.f_4;
}

// Position - 0xA0A
bool func_22(int iParam0) {
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

// Position - 0xA64
bool func_23(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_24(iParam0);
	if (iParam1 == 0) {
		if (iVar0 == -1) {
			return false;
		}
	}
	else {
		iVar0 = iParam0;
	}
	if (iVar0 < 0) {
		return false;
	}
	if (Global_36484[iVar0 /*32*/].f_6) {
		return false;
	}
	iVar1 = 0;
	if (!Global_36484[iVar0 /*32*/].f_12) {
		ui::begin_text_command_is_this_help_message_being_displayed(&Global_36484[iVar0 /*32*/].f_8);
		ui::add_text_component_substring_text_label(&Global_36679);
		iVar1 = ui::end_text_command_is_this_help_message_being_displayed(0);
	}
	else {
		ui::begin_text_command_is_this_help_message_being_displayed(&Global_36484[iVar0 /*32*/].f_8);
		ui::add_text_component_substring_text_label(&Global_36679);
		if (Global_36484[iVar0 /*32*/].f_30) {
			ui::add_text_component_substring_player_name(&Global_36484[iVar0 /*32*/].f_13);
		}
		else {
			ui::add_text_component_substring_text_label(&Global_36484[iVar0 /*32*/].f_13);
		}
		iVar1 = ui::end_text_command_is_this_help_message_being_displayed(0);
	}
	return iVar1;
}

// Position - 0xB19
int func_24(int iParam0) {
	int iVar0;

	if (iParam0 < 0) {
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6) {
		if (Global_36484[iVar0 /*32*/].f_1 == iParam0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0xB54
void func_25() {
	func_11();
	Global_36686 = -1;
}

// Position - 0xB64
void func_26() {
	if (!streaming::is_player_switch_in_progress() && !G_DisableMessagesAndCalls2) {
		if (func_31(0)) {
			if (!gameplay::is_string_null_or_empty(&Global_2443134.f_662.f_12)) {
				func_30();
				func_27(6, 0, 0, 0);
			}
		}
	}
}

// Position - 0xBA3
void func_27(int iParam0, int iParam1, int iParam2, int iParam3) {
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
	if (Global_69702 && func_29()) {
		return;
	}
	if (!Global_69702 && func_28()) {
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

// Position - 0xD49
var func_28() { return Global_68132; }

// Position - 0xD55
var func_29() { return Global_1751495; }

// Position - 0xD61
void func_30() { Global_2443134.f_662.f_28 = 0; }

// Position - 0xD73
bool func_31(int iParam0) {
	if (iParam0) {
		return Global_2443134.f_662.f_28 &&
			   gameplay::get_hash_key(script::get_this_script_name()) == Global_2443134.f_662.f_31;
	}
	return Global_2443134.f_662.f_28;
}

// Position - 0xDAF
void func_32() {
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 3) {
		if (Global_52996[iVar1] < 0) {
			Global_52996[iVar1] = 0;
			bVar0 = true;
		}
		iVar1++;
	}
	if (bVar0) {
		func_33(0);
		func_33(1);
		func_33(2);
	}
}

// Position - 0xDF9
void func_33(int iParam0) {
	int iVar0;

	iVar0 = Global_52996[iParam0];
	switch (iParam0) {
	case 0: stats::stat_set_int(joaat("sp0_total_cash"), iVar0, 1); break;

	case 1: stats::stat_set_int(joaat("sp1_total_cash"), iVar0, 1); break;

	case 2: stats::stat_set_int(joaat("sp2_total_cash"), iVar0, 1); break;
	}
}

// Position - 0xE53
void func_34() {
	struct<13> Var0;

	if (Global_1573296 != -1) {
		Var0 = Global_1573297[0];
		Var0.f_1 = Global_1573297[1];
		Var0.f_2 = Global_1573297[2];
		Var0.f_3 = Global_1573297[3];
		Var0.f_4 = Global_1573297[4];
		Var0.f_5 = Global_1573297[5];
		Var0.f_6 = Global_1573297[6];
		Var0.f_7 = Global_1573297[7];
		Var0.f_8 = Global_1573297[8];
		Var0.f_9 = Global_1573297[9];
		Var0.f_10 = Global_1573297[10];
		Var0.f_11 = Global_1573297[11];
		Var0.f_12 = Global_1573297[12];
		if (gameplay::is_xbox360_version() || gameplay::is_durango_version()) {
			if (!iLocal_123) {
				if (network::network_gamertag_from_handle_start(&Var0)) {
					iLocal_123 = 1;
				}
			}
			if (iLocal_123) {
				if (network::network_gamertag_from_handle_pending()) {
				}
				else {
					if (network::network_gamertag_from_handle_succeeded()) {
						StringCopy(&Global_2097152[func_36() /*10758*/].f_10581.f_18[Global_1573296 /*6*/],
								   network::network_get_gamertag_from_handle(&Var0), 24);
					}
					Global_1573296 = -1;
					iLocal_123 = 0;
				}
			}
		}
		else if (gameplay::is_ps3_version() || gameplay::is_orbis_version()) {
			if (func_35(Var0)) {
				StringCopy(&Global_2097152[func_36() /*10758*/].f_10581.f_18[Global_1573296 /*6*/],
						   network::network_get_gamertag_from_handle(&Var0), 24);
			}
			Global_1573296 = -1;
			iLocal_123 = 0;
		}
		else {
			if (func_35(Var0)) {
				StringCopy(&Global_2097152[func_36() /*10758*/].f_10581.f_18[Global_1573296 /*6*/],
						   network::network_member_id_from_gamer_handle(&Var0), 24);
			}
			Global_1573296 = -1;
			iLocal_123 = 0;
		}
	}
}

// Position - 0xFCF
bool func_35(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7,
			 var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) {
	return network::network_is_handle_valid(&uParam0, 13);
}

// Position - 0xFDF
int func_36() {
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

// Position - 0xFEC
void func_37() {
	int iVar0;

	Global_36677 = 0;
	Global_36683 = 0;
	Global_36684 = 0;
	Global_36685 = 1;
	Global_36686 = -1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6) {
		Global_36484[iVar0 /*32*/] = 0;
		iVar0++;
	}
}
