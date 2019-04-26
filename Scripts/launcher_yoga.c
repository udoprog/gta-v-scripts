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
vector3 vLocal_45 = {0f, 0f, 0f};
var uLocal_48 = 0;
var uLocal_49 = 0;
var uLocal_50 = 0;
var uLocal_51 = 0;
int iLocal_52 = 0;
struct<16> Local_53 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
char cLocal_69[64] = "";
var uLocal_77 = 0;
var uLocal_78 = 0;
var uLocal_79 = 0;
var uLocal_80 = 0;
var uLocal_81 = 0;
var uLocal_82 = 0;
var uLocal_83 = 0;
var uLocal_84 = 0;
int iLocal_85 = 0;
var uLocal_86 = 0;
vector3 vLocal_87 = {0f, 0f, 0f};
vector3 vLocal_90 = {0f, 0f, 0f};
var uLocal_93 = 0;
int *iLocal_94 = NULL;
int iLocal_95 = 0;
int *iLocal_96 = NULL;
int iLocal_97 = 0;
int iLocal_98 = 0;
int iLocal_99 = 0;
int iLocal_100 = 0;
char *sLocal_101 = NULL;
float fLocal_102 = 0f;
int iLocal_103 = 0;
int iLocal_104 = 0;
int iLocal_105 = 0;
int iLocal_106 = 0;
int *iLocal_107 = NULL;
var uLocal_108 = 0;
var uLocal_109 = 0;
float fLocal_110 = 0f;
vector3 vLocal_111 = {0f, 0f, 0f};
vector3 vLocal_114 = {0f, 0f, 0f};
float fLocal_117 = 0f;
int iLocal_118 = 0;
int iLocal_119 = 0;
struct<6> Local_120 = {
	0, 0, 0, 0, 0, 0
};
var uLocal_126 = 0;
var uLocal_127 = 0;
var uLocal_128 = 0;
var uLocal_129 = 0;
var uLocal_130 = 0;
var uLocal_131 = 0;
struct<2> ScriptParam_0 = {
	0, 5
};
var uScriptParam_2 = 0;
var uScriptParam_3 = 0;
var uScriptParam_4 = 0;
var uScriptParam_5 = 0;
var uScriptParam_6 = 0;
var uScriptParam_7 = 0;
var uScriptParam_8 = 0;
var uScriptParam_9 = 0;
var uScriptParam_10 = 0;
var uScriptParam_11 = 0;
var uScriptParam_12 = 0;
var uScriptParam_13 = 0;
var uScriptParam_14 = 0;
var uScriptParam_15 = 0;
var uScriptParam_16 = 0;
var uScriptParam_17 = 5;
var uScriptParam_18 = 0;
var uScriptParam_19 = 0;
var uScriptParam_20 = 0;
var uScriptParam_21 = 0;
var uScriptParam_22 = 0;
#pragma endregion //}

void __EntryFunction__() {
	bool bVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

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
	vLocal_45 = {500f, 500f, 500f};
	iLocal_96 = -1;
	iLocal_97 = 2050;
	iLocal_98 = -1;
	iLocal_99 = -1;
	sLocal_101 = "CC_SUBSTR";
	fLocal_102 = 125f;
	iLocal_103 = 1;
	iLocal_105 = 263;
	fLocal_117 = 4f;
	iLocal_118 = -1;
	vLocal_90 = {ScriptParam_0.f_1[0 /*3*/]};
	vLocal_90 = {vLocal_90};
	uLocal_86 = uLocal_86;
	cLocal_69 = {cLocal_69};
	bVar0 = false;
	if (player::has_force_cleanup_occurred(82)) {
		func_88(1);
	}
	iLocal_85 = player::get_player_ped(player::player_id());
	iLocal_95 = 0;
	func_86(&Global_100353, 0);
	func_84();
	if (func_83(iLocal_94, 1)) {
		iLocal_100 = 10;
	}
	else {
		iLocal_100 = 9;
	}
	while (!Global_31554) {
		system::wait(0);
	}
	if (!func_83(iLocal_94, 8)) {
		if (!func_81(iLocal_100)) {
			if (func_80(0, iLocal_99)) {
				func_88(0);
			}
			else {
				func_88(1);
			}
		}
	}
	if (iLocal_99 != -1) {
		if (!func_80(0, iLocal_99)) {
			func_88(1);
		}
	}
	if (func_83(iLocal_94, 8388608)) {
		func_88(1);
	}
	if (func_83(iLocal_94, 524288) && func_79() && !func_78()) {
		func_88(1);
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(script::get_hash_of_this_script_name()) > 1 &&
		!func_83(iLocal_94, 4194304)) {
		if (iLocal_105 != 263) {
			func_77(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_76(10);
	}
	while (true) {
		if (!func_83(iLocal_94, 268435456)) {
			fVar1 = 0f;
			if (gameplay::get_ground_z_for_3d_coord(ScriptParam_0.f_1[0 /*3*/], &fVar1, 0)) {
				if (fVar1 != 0f) {
					ScriptParam_0.f_1[0 /*3*/].f_2 = fVar1;
					func_75(&iLocal_94, 268435456);
				}
			}
		}
		iLocal_85 = player::get_player_ped(player::player_id());
		if (func_83(iLocal_94, 1048576)) {
			if (entity::is_entity_dead(iLocal_85, 0)) {
				func_88(1);
			}
		}
		if (entity::does_entity_exist(iLocal_85) && !entity::is_entity_dead(iLocal_85, 0)) {
			vLocal_87 = {entity::get_entity_coords(iLocal_85, 1)};
			uLocal_93 = system::vdist2(vLocal_87, ScriptParam_0.f_1[0 /*3*/]);
			uLocal_93 = uLocal_93;
			vLocal_111 = {vLocal_87};
			vLocal_114 = {ScriptParam_0.f_1[0 /*3*/]};
			vLocal_111.z = 0f;
			vLocal_114.z = 0f;
			fLocal_110 = system::vdist2(vLocal_111, vLocal_114);
			switch (iLocal_95) {
			case 0:
				if (func_81(iLocal_100) || func_83(iLocal_94, 16) && !func_83(iLocal_94, 524288)) {
					iLocal_98 = -1;
					func_74();
					func_76(1);
				}
				else {
					if (fLocal_110 > fLocal_102 * fLocal_102) {
						if (iLocal_105 != 263) {
							func_77(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_76(10);
					}
					if (vLocal_87.z - ScriptParam_0.f_1[0 /*3*/].f_2 > 500f) {
					}
				}
				break;

			case 1:
				if (func_73()) {
					iLocal_103 = iLocal_103;
					func_76(3);
				}
				else {
					func_74();
				}
				break;

			case 3:
				if (network::network_is_in_session()) {
					func_88(1);
					return;
				}
				if (!func_81(iLocal_100)) {
					if (!func_83(iLocal_94, 8)) {
						bVar2 = true;
						if (gameplay::are_strings_equal(&Global_91491.f_3, &cLocal_69)) {
							cLocal_69 = {Local_53};
							bVar2 = false;
						}
						if (bVar2) {
							func_88(0);
							break;
						}
					}
				}
				if (!func_83(iLocal_94, 4)) {
					func_72();
					func_75(&iLocal_94, 4);
				}
				if (fLocal_110 > fLocal_102 * fLocal_102 && !Global_91525) {
					if (iLocal_105 != 263) {
						if (func_71(6) && !func_70(iLocal_105)) {
						}
						else {
							func_77(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
					}
					func_76(10);
				}
				else {
					cLocal_69 = {Local_53};
					bVar3 = !func_83(iLocal_94, 64);
					func_86(&iLocal_94, 128);
					if (!func_69(3) && !Global_91525) {
						if (func_83(iLocal_94, 2097152)) {
							if ((!func_83(iLocal_94, 1) || !entity::does_entity_exist(func_68())) && !Global_91525) {
								func_76(10);
								break;
							}
						}
					}
					if (func_83(iLocal_94, 524288) && func_79() && !func_78()) {
						func_88(1);
					}
					if (func_67()) {
						func_88(1);
					}
					if (!func_58(6) || Global_100747 || func_57()) {
						bVar3 = false;
					}
					if (func_83(iLocal_94, 1)) {
						if (!func_56()) {
							func_54(&iLocal_94, 128);
							bVar3 = false;
						}
					}
					if (func_53(1)) {
						bVar3 = false;
					}
					if (Global_69702) {
						bVar3 = false;
					}
					if (func_52()) {
						bVar3 = false;
					}
					if (streaming::is_player_switch_in_progress()) {
						bVar3 = false;
					}
					if (func_51() || func_50(8, -1)) {
						bVar3 = false;
					}
					if (!player::can_player_start_mission(player::player_id())) {
						bVar3 = false;
					}
					if (!player::is_player_script_control_on(player::player_id())) {
						bVar3 = false;
					}
					if (func_49(0) || func_48()) {
						bVar3 = false;
					}
					if (bVar3) {
						if (!func_43(iLocal_118)) {
							func_54(&iLocal_94, 128);
							bVar3 = false;
						}
						if (!entity::is_entity_at_coord(iLocal_85, ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117,
														2f, 0, 1, iLocal_103)) {
							bVar3 = false;
						}
						if (!player::is_player_control_on(player::player_id())) {
							bVar3 = false;
						}
						if (bVar3) {
							controls::set_input_exclusive(0, 51);
							if (func_42(uLocal_86)) {
								if (iLocal_96 == -1) {
									func_41(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
									func_54(&iLocal_94, 2048);
								}
								else if (!func_83(iLocal_94, 2048) || !ui::is_help_message_being_displayed()) {
									func_40(&iLocal_96);
									func_86(&iLocal_94, 2048);
								}
								if (func_38(iLocal_96, 1)) {
									sLocal_101 = sLocal_101;
									func_40(&iLocal_96);
									func_86(&iLocal_94, 2048);
									script::request_script(&cLocal_69);
									player::set_player_control(player::player_id(), 0, 56);
									func_76(5);
								}
							}
							else {
								sLocal_101 = sLocal_101;
								func_40(&iLocal_96);
								func_86(&iLocal_94, 2048);
								script::request_script(&cLocal_69);
								player::set_player_control(player::player_id(), 0, 56);
								func_76(5);
							}
						}
					}
					if (!bVar3) {
						if (iLocal_96 != -1) {
							func_40(&iLocal_96);
							func_86(&iLocal_94, 2048);
							ui::clear_help(0);
						}
					}
				}
				func_37();
				break;

			case 5:
				controls::set_input_exclusive(0, 51);
				if (script::has_script_loaded(&cLocal_69)) {
					if (iLocal_96 != -1) {
						func_40(&iLocal_96);
					}
					iVar4 = 2;
					bVar0 = false;
					if (func_83(iLocal_94, 1)) {
						if (func_71(6) || func_71(7)) {
							iVar4 = 1;
							bVar0 = true;
						}
					}
					if (iVar4 != 1) {
						iVar4 = func_34(&iLocal_98, 6, iLocal_100, 0, 0);
					}
					if (iVar4 == 1) {
						if (player::is_player_playing(player::player_id())) {
							player::clear_player_wanted_level(player::player_id());
						}
						func_33();
						if (Global_36912) {
							func_24(player::player_ped_id());
						}
						player::set_player_control(player::player_id(), 1, 56);
						iLocal_52 = system::start_new_script(&cLocal_69, iLocal_97);
						script::set_script_as_no_longer_needed(&cLocal_69);
						Local_53 = {cLocal_69};
						StringCopy(&cLocal_69, "", 64);
						func_86(&iLocal_94, 4);
						func_23();
						func_54(&iLocal_94, 2);
						func_76(6);
						func_19(&iLocal_107);
						if (iLocal_99 != -1) {
							func_18(iLocal_99);
							func_15(func_17(iLocal_99), 0, 0);
						}
					}
					else if (iVar4 == 2) {
						func_14();
					}
					else if (iVar4 == 0) {
						func_76(10);
					}
				}
				else {
					func_14();
				}
				break;

			case 6:
				if (!func_83(iLocal_94, 256)) {
					if (cam::is_screen_fading_out() || cam::is_screen_faded_in()) {
						controls::set_input_exclusive(0, 51);
					}
					else if (cam::is_screen_faded_out()) {
						func_54(&iLocal_94, 256);
					}
				}
				if (func_83(Global_100353, 262144)) {
					func_86(&Global_100353, 262144);
					func_13();
				}
				if (func_83(iLocal_94, 2097152)) {
					if (!func_69(3) && !script::is_thread_active(iLocal_52)) {
						func_76(10);
					}
				}
				if (!script::is_thread_active(iLocal_52)) {
					stats::playstats_oddjob_done(system::round(func_9(&iLocal_107) * 1000f), iLocal_99, 0);
					func_8(&iLocal_107);
					func_86(&iLocal_94, 256);
					func_7();
					if (bVar0) {
						func_86(&iLocal_94, 2);
					}
					else if (func_83(iLocal_94, 2)) {
						if (func_83(Global_100353, 0)) {
							func_6(&iLocal_98);
							iLocal_98 = -1;
							func_86(&iLocal_94, 2);
						}
						else {
							func_6(&iLocal_98);
							iLocal_98 = -1;
							func_86(&iLocal_94, 2);
						}
					}
					func_76(0);
					if (iLocal_99 != -1) {
						if (func_83(Global_100353, 0)) {
							stats::playstats_mission_checkpoint(func_17(iLocal_99), 0, Global_91528, 0);
							func_5(func_17(iLocal_99), 0, Global_91528, 1, 0);
						}
						else {
							stats::playstats_mission_checkpoint(func_17(iLocal_99), 0, Global_91528, 0);
							func_5(func_17(iLocal_99), 0, Global_91528, 0, 0);
						}
					}
					func_4();
					func_86(&Global_100353, 0);
					if (func_83(iLocal_94, 16777216)) {
						func_88(1);
					}
					if (iLocal_99 != -1) {
						if (Global_101700.f_8044) {
							if (!func_80(0, iLocal_99)) {
								func_88(1);
							}
						}
					}
				}
				func_3();
				break;

			case 8: func_76(0); break;

			case 10: func_88(1); break;

			case 9:
				if (fLocal_110 > fLocal_102 * fLocal_102) {
					if (iLocal_105 != 263) {
						func_77(iLocal_105, 1, 0);
						iLocal_105 = 263;
					}
					func_76(10);
				}
				break;

			case 7:
				func_2();
				if (iLocal_105 != 263) {
					func_77(iLocal_105, 0, 0);
				}
				if (iLocal_96 != -1) {
					func_40(&iLocal_96);
				}
				if (!gameplay::is_string_null_or_empty(sLocal_101)) {
					if (func_1(sLocal_101)) {
						ui::clear_help(1);
					}
				}
				func_76(4);
				break;

			case 4:
				if (iLocal_104 % 150 == 0) {
					if (!ped::is_ped_injured(player::player_ped_id())) {
						if (iLocal_106 == 2) {
							if (iLocal_106 == 2) {
								if (func_81(iLocal_100) && func_80(0, iLocal_99)) {
									func_84();
									if (iLocal_105 != 263) {
										func_77(iLocal_105, 1, 0);
									}
									func_76(0);
								}
							}
						}
						else if (iLocal_106 == 0) {
							if (fLocal_110 > fLocal_102 * fLocal_102) {
								if (iLocal_105 != 263) {
									func_77(iLocal_105, 1, 0);
									iLocal_105 = 263;
								}
								func_76(10);
							}
						}
						else if (iLocal_106 == 1) {
							if (fLocal_110 > (80f + 5f) * (80f + 5f)) {
								func_84();
								if (iLocal_105 != 263) {
									func_77(iLocal_105, 1, 0);
								}
								func_76(0);
							}
						}
					}
					else {
						func_77(iLocal_105, 1, 0);
					}
				}
				else {
					iLocal_104++;
				}
				break;
			}
		}
		system::wait(0);
	}
}

// Position - 0xA8E
bool func_1(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0xAA1
void func_2() {}

// Position - 0xAA9
void func_3() {}

// Position - 0xAB1
void func_4() {}

// Position - 0xAB9
void func_5(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	if (gameplay::is_string_null_or_empty(&Global_88894)) {
		return;
	}
	if (gameplay::compare_strings(sParam0, &Global_88894, 0, -1) != 0) {
		return;
	}
	stats::playstats_mission_over(sParam0, iParam1, iParam2, iParam3, iParam4, Global_86001);
	StringCopy(&Global_88894, "", 64);
}

// Position - 0xAFD
void func_6(int *iParam0) {
	if (*iParam0 == -1) {
		return;
	}
	if (*iParam0 != Global_35743) {
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_35742 = 0;
	Global_35744 = 0;
	Global_35781 = 15;
	Global_55819 = 0;
	Global_55820 = 0;
}

// Position - 0xB3A
void func_7() {
	vector3 vVar0[24];

	if (gameplay::is_xbox360_version() || gameplay::is_durango_version()) {
		network::network_set_rich_presence(StackVal, 0, 0, 0);
	}
	else if (gameplay::is_ps3_version() || gameplay::is_orbis_version()) {
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		network::_0x3E200C2BCF4164EB(0, &cVar0);
	}
}

// Position - 0xB7C
void func_8(int *iParam0) {
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

// Position - 0xB92
float func_9(var *uParam0) {
	if (func_12(uParam0)) {
		if (func_11(uParam0)) {
			return uParam0->f_2;
		}
		else {
			return func_10(gameplay::is_bit_set(*uParam0, 4)) - uParam0->f_1;
		}
	}
	return uParam0->f_1;
}

// Position - 0xBD1
float func_10(bool bParam0) {
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

// Position - 0xC29
bool func_11(var *uParam0) { return gameplay::is_bit_set(*uParam0, 2); }

// Position - 0xC39
bool func_12(var *uParam0) { return gameplay::is_bit_set(*uParam0, 1); }

// Position - 0xC49
int func_13() { return 1; }

// Position - 0xC52
void func_14() {}

// Position - 0xC5A
void func_15(char *sParam0, int iParam1, int iParam2) {
	if (!gameplay::is_string_null_or_empty(&Global_88894)) {
		stats::playstats_mission_over(&Global_88894, 0, 0, 0, 1, 0);
		StringCopy(&Global_88894, "", 64);
	}
	StringCopy(&Global_88894, sParam0, 64);
	stats::playstats_mission_started(sParam0, iParam1, iParam2, func_16(0));
}

// Position - 0xC9B
int func_16(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return 1;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0xCC6
char *func_17(int iParam0) {
	switch (iParam0) {
	case 0: return "OJBJ";

	case 1: return "MGDT";

	case 2: return "MGGF";

	case 3: return "OJHU";

	case 4: return "MGOR";

	case 5: return "MGPS";

	case 6: return "MGRP";

	case 7: return "MGSEA";

	case 8: return "MGSTR";

	case 9: return "MGSC";

	case 10: return "MGSP";

	case 11: return "MGSRm";

	case 12: return "OJTX";

	case 13: return "MGTN";

	case 14: return "OJTW";

	case 15: return "OJDA";

	case 16: return "OJDG";

	case 17: return "MGTR";

	case 18: return "MGYG";

	case 19: return "MGCR";
	}
	return "INVALID!";
}

// Position - 0xE04
void func_18(int iParam0) {
	var uVar0;
	vector3 vVar1[24];

	if (gameplay::is_xbox360_version() || gameplay::is_durango_version()) {
		uVar0 = iParam0;
		network::network_set_rich_presence(8, &uVar0, 1, 1);
	}
	else if (gameplay::is_ps3_version() || gameplay::is_orbis_version()) {
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		network::_0x3E200C2BCF4164EB(8, &cVar1);
	}
}

// Position - 0xE5B
void func_19(var *uParam0) {
	if (!func_12(uParam0)) {
		func_22(uParam0);
	}
	else {
		func_20(uParam0);
	}
}

// Position - 0xE7C
void func_20(var *uParam0) { func_21(uParam0, 0f); }

// Position - 0xE8B
void func_21(int *iParam0, float fParam1) {
	uParam0->f_1 = func_10(gameplay::is_bit_set(*uParam0, 4)) - fParam1;
	gameplay::set_bit(uParam0, 1);
	gameplay::clear_bit(iParam0, 2);
	iParam0->f_2 = 0f;
}

// Position - 0xEB9
void func_22(var *uParam0) {
	if (!func_12(uParam0)) {
		func_20(uParam0);
	}
}

// Position - 0xED1
void func_23() {
	streaming::set_model_as_no_longer_needed(Local_120.f_1);
	if (entity::does_entity_exist(Local_120)) {
		entity::set_object_as_no_longer_needed(&Local_120);
	}
}

// Position - 0xEF0
void func_24(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 0) {
		return;
	}
	if (!entity::does_entity_exist(iParam0)) {
		return;
	}
	iVar0 = func_32(iParam0);
	if (iVar0 != -1) {
		iVar1 = Global_36715[iVar0 /*5*/];
		func_27(1, iVar1, 1);
		return;
	}
	iVar2 = func_26(iParam0);
	if (iVar2 == -1) {
		return;
	}
	func_25(iVar2);
}

// Position - 0xF49
void func_25(int iParam0) {
	if (iParam0 < 0 || iParam0 >= 5) {
		return;
	}
	if (Global_36689[iParam0 /*5*/].f_1 != 0) {
		if (Global_36689[iParam0 /*5*/].f_1 == player::player_ped_id()) {
			Global_36910 = 0;
		}
	}
	Global_36689[iParam0 /*5*/] = 13;
	Global_36689[iParam0 /*5*/].f_1 = 0;
	Global_36689[iParam0 /*5*/].f_2 = 0;
	Global_36689[iParam0 /*5*/].f_3 = 0;
	Global_36689[iParam0 /*5*/].f_4 = 0;
	Global_36688--;
	if (Global_36688 < 0) {
		Global_36688 = 0;
	}
}

// Position - 0xFCC
int func_26(int iParam0) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5) {
		if (Global_36689[iVar0 /*5*/].f_1 == iParam0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0xFFD
void func_27(int iParam0, int iParam1, int iParam2) { func_28(iParam0, iParam1, iParam2, 0, 0); }

// Position - 0x1011
void func_28(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam0 == -1) {
		return;
	}
	if (iParam1 == -1) {
		return;
	}
	if (iParam2 == 6) {
		return;
	}
	if (func_30(iParam0, iParam1, iParam2)) {
		return;
	}
	iVar0 = func_29();
	if (iVar0 == -1) {
		return;
	}
	Global_36796[iVar0 /*5*/] = iParam0;
	Global_36796[iVar0 /*5*/].f_1 = iParam1;
	Global_36796[iVar0 /*5*/].f_2 = iParam2;
	Global_36796[iVar0 /*5*/].f_3 = iParam3;
	Global_36796[iVar0 /*5*/].f_4 = iParam4;
}

// Position - 0x1088
int func_29() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		if (Global_36796[iVar0 /*5*/].f_2 == 6) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x10B9
bool func_30(int iParam0, int iParam1, int iParam2) {
	if (func_31(iParam0, iParam1, iParam2) == -1) {
		return false;
	}
	return true;
}

// Position - 0x10D4
int func_31(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		if (iParam2 == Global_36796[iVar0 /*5*/].f_2) {
			if (iParam0 == Global_36796[iVar0 /*5*/]) {
				if (iParam1 == Global_36796[iVar0 /*5*/].f_1) {
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x1120
int func_32(int iParam0) {
	int iVar0;

	if (iParam0 == 0) {
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		if (Global_36715[iVar0 /*5*/] != -1) {
			if (iParam0 == Global_36715[iVar0 /*5*/].f_1) {
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x1169
void func_33() {
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

// Position - 0x11E6
int func_34(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam1 == 7) {
		return 0;
	}
	if (!iParam3) {
		if (Global_89302.f_44 == 1) {
			return 2;
		}
	}
	if (iParam1 == 0) {
		if (func_36(0)) {
			return 0;
		}
		Global_35745++;
		*iParam0 = Global_35745;
		player::set_player_invincible(player::get_player_index(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5) {
			player::force_cleanup(8);
		}
		Global_35781 = iParam2;
		Global_35743 = *iParam0;
		Global_35744 = iParam4;
		Global_35742 = 0;
		return 1;
	}
	if (*iParam0 != -1) {
		if (Global_35742 > 0) {
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35742) {
				if (Global_35748[iVar0 /*4*/] == *iParam0) {
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35743 == *iParam0) {
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1) {
		if (!func_81(iParam2)) {
			return 0;
		}
		if (Global_35742 == 8) {
			return 0;
		}
		Global_35745++;
		*iParam0 = Global_35745;
		Global_35748[Global_35742 /*4*/] = Global_35745;
		Global_35748[Global_35742 /*4*/].f_1 = iParam1;
		Global_35748[Global_35742 /*4*/].f_2 = iParam2;
		Global_35748[Global_35742 /*4*/].f_3 = 0;
		Global_35742++;
		if (iParam4 != 0) {
			func_35(iParam0, iParam4);
		}
	}
	return 2;
}

// Position - 0x131D
void func_35(int *iParam0, int iParam1) {
	int iVar0;

	if (Global_35742 == 0) {
		return;
	}
	if (*iParam0 == -1) {
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35742) {
		if (Global_35748[iVar0 /*4*/] == *iParam0) {
			Global_35748[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*iParam0 = -1;
}

// Position - 0x136C
bool func_36(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_81(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x138E
void func_37() {
	if (iLocal_119 == 1) {
		if (ai::is_scenario_type_enabled("WORLD_MOUNTAIN_LION_WANDER")) {
			ai::set_scenario_type_enabled("WORLD_MOUNTAIN_LION_WANDER", 0);
			ped::set_ped_model_is_suppressed(joaat("a_c_mtlion"), 1);
		}
	}
}

// Position - 0x13B8
bool func_38(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = func_39(iParam0);
	if (iVar0 == -1) {
		return false;
	}
	if (!player::is_player_playing(player::get_player_index())) {
		return false;
	}
	if (func_49(0)) {
		return false;
	}
	if (cutscene::is_cutscene_playing()) {
		return false;
	}
	if (iVar0 > -1 && iVar0 < 6) {
		if (Global_36484[iVar0 /*32*/] == 1 && Global_36484[iVar0 /*32*/].f_4 == 1) {
			if (iParam1) {
				if (Global_36484[iVar0 /*32*/].f_29) {
					return false;
				}
			}
			Global_36484[iVar0 /*32*/].f_5 = 1;
			Global_36484[iVar0 /*32*/].f_29 = 1;
			return true;
		}
		else {
			if (Global_36484[iVar0 /*32*/] == 0) {
			}
			if (Global_36484[iVar0 /*32*/].f_7) {
			}
		}
	}
	return false;
}

// Position - 0x1470
int func_39(int iParam0) {
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

// Position - 0x14AB
void func_40(int *iParam0) {
	int iVar0;

	if (*iParam0 == -1) {
		return;
	}
	iVar0 = func_39(*iParam0);
	if (iVar0 == -1) {
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6) {
		if (Global_36484[iVar0 /*32*/]) {
			Global_36484[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

// Position - 0x1502
void func_41(int iParam0, int iParam1, char *sParam2, int iParam3, char *sParam4, int iParam5, int iParam6) {
	int iVar0;

	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("context_controller")) < 1) {
	}
	if (streaming::is_player_switch_in_progress()) {
		if (*iParam0 != -1) {
			func_40(iParam0);
		}
		return;
	}
	if (*iParam0 != -1) {
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6) {
		if (!Global_36484[iVar0 /*32*/]) {
			Global_36484[iVar0 /*32*/] = 1;
			Global_36484[iVar0 /*32*/].f_1 = Global_36685;
			Global_36685++;
			Global_36484[iVar0 /*32*/].f_4 = 0;
			Global_36484[iVar0 /*32*/].f_29 = 0;
			Global_36484[iVar0 /*32*/].f_5 = 0;
			Global_36484[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&Global_36484[iVar0 /*32*/].f_8, sParam2, 16);
			Global_36484[iVar0 /*32*/].f_6 = iParam3;
			Global_36484[iVar0 /*32*/].f_31 = script::get_id_of_this_thread();
			Global_36484[iVar0 /*32*/].f_7 = 0;
			Global_36484[iVar0 /*32*/].f_3 = iParam5;
			if (!gameplay::is_string_null_or_empty(sParam4)) {
				Global_36484[iVar0 /*32*/].f_12 = 1;
				StringCopy(&Global_36484[iVar0 /*32*/].f_13, sParam4, 64);
				Global_36484[iVar0 /*32*/].f_30 = iParam6;
			}
			else {
				Global_36484[iVar0 /*32*/].f_12 = 0;
				Global_36484[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36484[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

// Position - 0x162D
bool func_42(var uParam0) { return true; }

// Position - 0x1636
bool func_43(int iParam0) {
	func_44();
	return iParam0 == Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x1652
void func_44() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_47(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_46(player::player_ped_id());
			if (func_45(iVar0) && (!func_71(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_45(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x174F
bool func_45(int iParam0) { return iParam0 < 3; }

// Position - 0x175B
int func_46(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_47(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x1798
int func_47(int iParam0) {
	if (func_45(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x17C2
var func_48() { return Global_68131; }

// Position - 0x17CE
bool func_49(int iParam0) {
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

// Position - 0x1828
var func_50(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x1863
bool func_51() { return gameplay::get_game_timer() <= Global_17290.f_5745 + 100; }

// Position - 0x1878
bool func_52() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("player_timetable_scene")) > 0) {
		return true;
	}
	return false;
}

// Position - 0x1892
bool func_53(int iParam0) {
	if (iParam0) {
		return Global_17151.f_4 && Global_17151.f_104 == 4;
	}
	return Global_17151.f_4;
}

// Position - 0x18BB
void func_54(int *iParam0, int iParam1) { func_55(iParam0, iParam1); }

// Position - 0x18CB
void func_55(var *uParam0, var uParam1) { *uParam0 |= uParam1; }

// Position - 0x18DC
int func_56() { return 1; }

// Position - 0x18E5
bool func_57() {
	int iVar0;
	bool bVar1;

	if (ped::is_ped_injured(player::player_ped_id())) {
		return false;
	}
	weapon::get_current_ped_weapon(player::player_ped_id(), &iVar0, 1);
	if (iVar0 == 0 || iVar0 == joaat("weapon_unarmed") || iVar0 == joaat("weapon_electric_fence") ||
		iVar0 == joaat("gadget_parachute")) {
		bVar1 = false;
	}
	else {
		bVar1 = true;
	}
	if (bVar1) {
	}
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		return bVar1 && controls::is_control_pressed(0, 69) || bVar1 && controls::is_control_pressed(0, 70) ||
			   bVar1 && controls::is_control_pressed(0, 68) ||
			   player::is_player_targetting_anything(player::player_id());
	}
	return bVar1 && controls::is_control_pressed(0, 24) || bVar1 && controls::is_control_pressed(0, 25) ||
		   bVar1 && controls::is_control_pressed(0, 47) || ped::_0xDCCA191DF9980FD7(player::player_ped_id()) ||
		   player::is_player_targetting_anything(player::player_id());
}

// Position - 0x19EF
bool func_58(int iParam0) {
	int iVar0;

	if (player::is_player_playing(player::player_id())) {
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				iVar0 = func_66();
				if (!func_45(iVar0)) {
					return false;
				}
				switch (iParam0) {
				case 9:
				case 0:
					if (!player::is_player_ready_for_cutscene(player::player_id()) ||
						entity::is_entity_in_air(player::player_ped_id()) ||
						ped::is_ped_getting_into_a_vehicle(player::player_ped_id()) ||
						ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						player::is_player_climbing(player::player_id()) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_65() || Global_100747 ||
						Global_25192 || func_64() || func_50(8, -1) || func_63() || func_62() || func_61() ||
						func_52() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 1:
					if (player::is_player_being_arrested(player::player_id(), 1) || func_65() || Global_25192 ||
						func_64() || func_50(8, -1) || func_61() || func_63() || func_62() || func_52() ||
						Global_101700.f_6647.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 2:
					if (!player::is_player_ready_for_cutscene(player::player_id()) ||
						entity::is_entity_in_air(player::player_ped_id()) ||
						ped::is_ped_getting_into_a_vehicle(player::player_ped_id()) ||
						ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						player::is_player_climbing(player::player_id()) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_65() || Global_100747 ||
						Global_25192 || func_64() || func_50(8, -1) || func_61() || func_63() || func_62() ||
						func_52() || Global_101700.f_6647.f_919[iVar0] == 5 || Global_36328 != -1) {
						return false;
					}
					break;

				case 3:
					if (ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_65() || Global_100747 ||
						Global_25192 || func_64() || func_50(8, -1) || func_63() || func_62() || func_52() ||
						Global_101700.f_6647.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 4:
					if (func_65() || player::get_player_wanted_level(player::player_id()) > 0 || func_50(8, -1) ||
						func_52() || func_60() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 5:
					if (func_50(8, -1) || func_63() || func_62() || func_60() || func_59()) {
						return false;
					}
					if (streaming::is_player_switch_in_progress() && streaming::get_player_switch_type() != 3 &&
						streaming::get_player_switch_state() < 8) {
						return false;
					}
					break;

				case 6:
					if (entity::does_entity_exist(player::player_ped_id())) {
						if (ped::is_ped_in_combat(player::player_ped_id(), 0) ||
							player::get_player_wanted_level(player::player_id()) > 0 ||
							entity::is_entity_in_air(player::player_ped_id()) ||
							ped::is_ped_ragdoll(player::player_ped_id()) ||
							ped::is_ped_falling(player::player_ped_id()) ||
							player::is_player_being_arrested(player::player_id(), 1) ||
							player::is_player_climbing(player::player_id()) || func_65() || Global_25192 || func_64() ||
							func_50(8, -1) || func_62() || func_61() || func_52() ||
							Global_101700.f_6647.f_919[iVar0] == 5) {
							return false;
						}
					}
					break;

				case 7:
					if (ped::is_ped_in_combat(player::player_ped_id(), 0) ||
						!player::is_player_control_on(player::player_id()) ||
						!player::is_player_ready_for_cutscene(player::player_id()) || !cam::is_screen_faded_in() ||
						entity::is_entity_in_air(player::player_ped_id()) ||
						ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) || func_65() || func_62() ||
						Global_100747 || Global_25192 || func_64() || Global_36912 || func_50(8, -1) || func_61() ||
						func_60() || func_52() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 8:
					if (ped::is_ped_in_combat(player::player_ped_id(), 0) ||
						!player::is_player_control_on(player::player_id()) ||
						!player::is_player_ready_for_cutscene(player::player_id()) || !cam::is_screen_faded_in() ||
						player::is_player_wanted_level_greater(player::player_id(), 0) ||
						entity::is_entity_in_air(player::player_ped_id()) ||
						ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
						ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						ped::is_ped_swimming(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						player::is_player_climbing(player::player_id()) || func_65() || Global_100747 || Global_25192 ||
						func_64() || func_50(8, -1) || func_61() || func_60() || func_63() || func_62() || func_52()) {
						return false;
					}
					break;
				}
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
	return true;
}

// Position - 0x210C
var func_59() { return Global_91530.f_1; }

// Position - 0x211A
int func_60() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 13);
	}
	return 0;
}

// Position - 0x2140
int func_61() {
	if (Global_69962) {
		return 1;
	}
	else if (Global_55816 && !Global_55822) {
		return 1;
	}
	return 0;
}

// Position - 0x216A
bool func_62() { return Global_91543.f_304 > 0; }

// Position - 0x217B
bool func_63() { return Global_91543.f_303 > 0; }

// Position - 0x218C
var func_64() { return Global_1315233; }

// Position - 0x2198
int func_65() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0x21B4
var func_66() {
	func_44();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x21CD
bool func_67() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("stripperhome")) > 0) {
		return true;
	}
	return false;
}

// Position - 0x21E7
var func_68() { return Global_87656; }

// Position - 0x21F3
int func_69(int iParam0) {
	switch (iParam0) {
	case 0: return 1;

	case 1:
		if (func_71(6) || func_71(7)) {
			return 1;
		}
		else {
			return func_69(3);
		}
		break;

	case 2: return 1;

	case 3:
		if (func_81(5)) {
			if (func_58(4)) {
				return 1;
			}
		}
		break;
	}
	return 0;
}

// Position - 0x2265
int func_70(int iParam0) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return 0;
	}
	return ui::does_blip_exist(Global_25501[iVar0 /*23*/].f_19);
}

// Position - 0x22A1
bool func_71(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x22AF
void func_72() {
	if (!entity::does_entity_exist(Local_120)) {
		Local_120 = object::create_object(Local_120.f_1, Local_120.f_2, 1, 1, 0);
		entity::set_entity_coords_no_offset(Local_120, Local_120.f_2, 0, 0, 1);
		entity::set_entity_rotation(Local_120, Local_120.f_5, 2, 1);
		entity::freeze_entity_position(Local_120, 1);
	}
}

// Position - 0x22F8
bool func_73() {
	if (!streaming::is_model_valid(Local_120.f_1)) {
		return false;
	}
	return streaming::has_model_loaded(Local_120.f_1);
}

// Position - 0x2318
void func_74() {
	if (!streaming::is_model_valid(Local_120.f_1)) {
		return;
	}
	streaming::request_model(Local_120.f_1);
}

// Position - 0x2337
void func_75(int *iParam0, int iParam1) { *iParam0 |= iParam1; }

// Position - 0x2348
void func_76(int iParam0) { iLocal_95 = iParam0; }

// Position - 0x2354
void func_77(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (!iParam2) {
		iVar1 = gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 15);
		if (iVar1 == iParam1) {
			return;
		}
	}
	if (iParam1 != gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 0)) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
		if (Global_25498 == 1) {
			Global_25499 = 1;
		}
		Global_25498 = 1;
	}
	if (iParam1) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 0);
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 15);
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 3);
	}
	else {
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 0);
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 15);
	}
	if (!gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 0)) {
		if (ui::does_blip_exist(Global_25501[iVar0 /*23*/].f_19)) {
			gameplay::set_this_script_can_remove_blips_created_by_any_script(1);
			ui::remove_blip(&Global_25501[iVar0 /*23*/].f_19);
			gameplay::set_this_script_can_remove_blips_created_by_any_script(0);
		}
	}
}

// Position - 0x245D
int func_78() {
	if (gameplay::is_pc_version()) {
		if (gameplay::_0xD10282B6E3751BA0() == 1f) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x247A
int func_79() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 20);
	}
	return 0;
}

// Position - 0x24A0
bool func_80(int iParam0, int iParam1) {
	var uVar0;

	if (iParam0 == 11 || iParam0 == -1) {
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 32) {
		return false;
	}
	uVar0 = gameplay::is_bit_set(Global_101700.f_8044.f_99.f_219[iParam0], iParam1);
	return uVar0;
}

// Position - 0x24ED
bool func_81(int iParam0) { return func_82(iParam0, Global_35781); }

// Position - 0x24FE
int func_82(int iParam0, int iParam1) {
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

// Position - 0x26DF
bool func_83(int *iParam0, int iParam1) { return (iParam0 & iParam1) != 0; }

// Position - 0x26EE
void func_84() {
	StringCopy(&Local_53, "Yoga", 64);
	sLocal_101 = "PLAY_YOGA";
	iLocal_99 = 18;
	fLocal_117 = 2.5f;
	fLocal_102 = 20f;
	iLocal_97 = 20500;
	iLocal_119 = func_85();
	if (iLocal_119 == 0) {
		iLocal_105 = 110;
		Local_120.f_2 = {-791.0036f, 186.3552f, 71.8295f};
		Local_120.f_5 = {0f, 0f, -87.1403f};
		Local_120.f_1 = joaat("prop_yoga_mat_03");
	}
	else if (iLocal_119 == 1) {
		iLocal_105 = 111;
		Local_120.f_2 = {2861.47f, 5945.9f, 357.06f};
		Local_120.f_5 = {0f, -0.5f, 70f};
		Local_120.f_1 = joaat("prop_yoga_mat_03");
	}
	iLocal_118 = 0;
}

// Position - 0x2796
int func_85() {
	vector3 vVar0;
	vector3 vVar3[2];
	var uVar10[2];

	if (player::is_player_playing(player::player_id())) {
		vVar0 = {entity::get_entity_coords(player::get_player_ped(player::player_id()), 1)};
		vVar3[0 /*3*/] = {-790.906f, 186.293f, 71.835f};
		vVar3[1 /*3*/] = {2862.15f, 5945.49f, 357.11f};
		uVar10[0] = system::vdist2(vVar0, vVar3[0 /*3*/]);
		uVar10[1] = system::vdist2(vVar0, vVar3[1 /*3*/]);
		if (uVar10[0] < uVar10[1]) {
			return 0;
		}
		else {
			return 1;
		}
	}
	return 2;
}

// Position - 0x2832
void func_86(int *iParam0, int iParam1) { func_87(iParam0, iParam1); }

// Position - 0x2842
void func_87(int *iParam0, var uParam1) { *iParam0 -= (*iParam0 & uParam1); }

// Position - 0x2857
void func_88(int iParam0) {
	if (iParam0) {
		if (iLocal_105 != 263) {
			func_77(iLocal_105, 0, 0);
		}
	}
	func_40(&iLocal_96);
	if (func_83(iLocal_94, 2)) {
		func_4();
		func_86(&iLocal_94, 2);
		func_6(&iLocal_98);
	}
	iLocal_98 = -1;
	func_89();
	script::terminate_this_thread();
}

// Position - 0x28A0
void func_89() {
	func_86(&iLocal_94, 4);
	func_90();
	if (script::is_thread_active(iLocal_52)) {
		player::force_cleanup_for_thread_with_this_id(iLocal_52, 3);
	}
	if (!gameplay::is_string_null(&cLocal_69)) {
		if (ui::get_length_of_literal_string(&cLocal_69) != 0) {
			script::set_script_as_no_longer_needed(&cLocal_69);
		}
	}
}

// Position - 0x28DD
void func_90() {
	if (!ai::is_scenario_type_enabled("WORLD_MOUNTAIN_LION_WANDER")) {
		ai::set_scenario_type_enabled("WORLD_MOUNTAIN_LION_WANDER", 1);
		ped::set_ped_model_is_suppressed(joaat("a_c_mtlion"), 0);
	}
}
