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
struct<16> Local_69 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
int iLocal_85 = 0;
var uLocal_86 = 0;
vector3 vLocal_87 = {0f, 0f, 0f};
vector3 vLocal_90 = {0f, 0f, 0f};
float fLocal_93 = 0f;
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
vector3 vLocal_118 = {0f, 0f, 0f};
vector3 vLocal_121 = {0f, 0f, 0f};
int iLocal_124 = 0;
int iLocal_125 = 0;
int iLocal_126 = 0;
int iLocal_127 = 0;
int iLocal_128 = 0;
int iLocal_129 = 0;
int iLocal_130 = 0;
bool bLocal_131 = 0;
int iLocal_132 = 0;
int iLocal_133 = 0;
int iLocal_134 = 0;
int iLocal_135 = 0;
int iLocal_136[5] = {0, 0, 0, 0, 0};
var uLocal_142 = 0;
var uLocal_143 = 0;
var uLocal_144 = 0;
var uLocal_145 = 0;
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
	bLocal_131 = true;
	iLocal_133 = 1;
	iLocal_135 = -1;
	vLocal_90 = {ScriptParam_0.f_1[0 /*3*/]};
	vLocal_90 = {vLocal_90};
	uLocal_86 = uLocal_86;
	Local_69 = {Local_69};
	bVar0 = false;
	if (player::has_force_cleanup_occurred(82)) {
		func_123(1);
	}
	iLocal_85 = player::get_player_ped(player::player_id());
	iLocal_95 = 0;
	func_121(&Global_100353, 0);
	func_118();
	gameplay::_0x6F2135B6129620C1(1);
	if (func_117(iLocal_94, 1)) {
		iLocal_100 = 10;
	}
	else {
		iLocal_100 = 9;
	}
	while (!Global_31554) {
		system::wait(0);
	}
	if (!func_117(iLocal_94, 8)) {
		if (!func_115(iLocal_100)) {
			if (func_114(0, iLocal_99)) {
				func_123(0);
			}
			else {
				func_123(1);
			}
		}
	}
	if (iLocal_99 != -1) {
		if (!func_114(0, iLocal_99)) {
			func_123(1);
		}
	}
	if (func_117(iLocal_94, 8388608)) {
		func_123(1);
	}
	if (func_117(iLocal_94, 524288) && func_113() && !func_112()) {
		func_123(1);
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(script::get_hash_of_this_script_name()) > 1 &&
		!func_117(iLocal_94, 4194304)) {
		if (iLocal_105 != 263) {
			func_111(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_110(10);
	}
	while (true) {
		if (!func_117(iLocal_94, 268435456)) {
			fVar1 = 0f;
			if (gameplay::get_ground_z_for_3d_coord(ScriptParam_0.f_1[0 /*3*/], &fVar1, 0)) {
				if (fVar1 != 0f) {
					ScriptParam_0.f_1[0 /*3*/].f_2 = fVar1;
					func_109(&iLocal_94, 268435456);
				}
			}
		}
		iLocal_85 = player::get_player_ped(player::player_id());
		if (func_117(iLocal_94, 1048576)) {
			if (entity::is_entity_dead(iLocal_85, 0)) {
				func_123(1);
			}
		}
		if (entity::does_entity_exist(iLocal_85) && !entity::is_entity_dead(iLocal_85, 0)) {
			vLocal_87 = {entity::get_entity_coords(iLocal_85, 1)};
			fLocal_93 = system::vdist2(vLocal_87, ScriptParam_0.f_1[0 /*3*/]);
			fLocal_93 = fLocal_93;
			vLocal_111 = {vLocal_87};
			vLocal_114 = {ScriptParam_0.f_1[0 /*3*/]};
			vLocal_111.z = 0f;
			vLocal_114.z = 0f;
			fLocal_110 = system::vdist2(vLocal_111, vLocal_114);
			switch (iLocal_95) {
			case 0:
				if (func_115(iLocal_100) || func_117(iLocal_94, 16) && !func_117(iLocal_94, 524288)) {
					iLocal_98 = -1;
					func_108();
					func_110(1);
				}
				else {
					if (fLocal_110 > fLocal_102 * fLocal_102) {
						if (iLocal_105 != 263) {
							func_111(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_110(10);
					}
					if (vLocal_87.z - ScriptParam_0.f_1[0 /*3*/].f_2 > 500f) {
					}
				}
				break;

			case 1:
				if (func_107()) {
					iLocal_103 = iLocal_103;
					func_110(3);
				}
				else {
					func_108();
				}
				break;

			case 3:
				if (network::network_is_in_session()) {
					func_123(1);
					return;
				}
				if (!func_115(iLocal_100)) {
					if (!func_117(iLocal_94, 8)) {
						bVar2 = true;
						if (gameplay::are_strings_equal(&Global_91491.f_3, &Local_69)) {
							Local_69 = {Local_53};
							bVar2 = false;
						}
						if (bVar2) {
							func_123(0);
							break;
						}
					}
				}
				if (!func_117(iLocal_94, 4)) {
					func_102();
					func_109(&iLocal_94, 4);
				}
				if (fLocal_110 > fLocal_102 * fLocal_102 && !Global_91525) {
					if (iLocal_105 != 263) {
						if (func_101(6) && !func_100(iLocal_105)) {
						}
						else {
							func_111(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
					}
					func_110(10);
				}
				else {
					Local_69 = {Local_53};
					bVar3 = !func_117(iLocal_94, 64);
					func_121(&iLocal_94, 128);
					if (!func_99(3) && !Global_91525) {
						if (func_117(iLocal_94, 2097152)) {
							if ((!func_117(iLocal_94, 1) || !entity::does_entity_exist(func_98())) && !Global_91525) {
								func_110(10);
								break;
							}
						}
					}
					if (func_117(iLocal_94, 524288) && func_113() && !func_112()) {
						func_123(1);
					}
					if (func_97()) {
						func_123(1);
					}
					if (!func_89(6) || Global_100747 || func_88()) {
						bVar3 = false;
					}
					if (func_117(iLocal_94, 1)) {
						if (!func_87()) {
							func_85(&iLocal_94, 128);
							bVar3 = false;
						}
					}
					if (func_84(1)) {
						bVar3 = false;
					}
					if (Global_69702) {
						bVar3 = false;
					}
					if (func_83()) {
						bVar3 = false;
					}
					if (streaming::is_player_switch_in_progress()) {
						bVar3 = false;
					}
					if (func_82() || func_81(8, -1)) {
						bVar3 = false;
					}
					if (!player::can_player_start_mission(player::player_id())) {
						bVar3 = false;
					}
					if (!player::is_player_script_control_on(player::player_id())) {
						bVar3 = false;
					}
					if (func_80(0) || func_79()) {
						bVar3 = false;
					}
					if (bVar3) {
						if (!entity::is_entity_at_coord(iLocal_85, ScriptParam_0.f_1[0 /*3*/], fLocal_117, fLocal_117,
														2f, 0, 1, iLocal_103)) {
							bVar3 = false;
						}
						if (fLocal_93 < fLocal_117 * fLocal_117 + 4f) {
							if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
								func_85(&iLocal_94, 128);
								bVar3 = false;
								if (!func_117(iLocal_94, 1024)) {
									func_78("MG_GET_ON_FOOT", -1);
									func_85(&iLocal_94, 1024);
								}
							}
							else if (func_117(iLocal_94, 1024)) {
								func_121(&iLocal_94, 1024);
								ui::clear_this_print("MG_GET_ON_FOOT");
							}
						}
						else if (func_117(iLocal_94, 1024)) {
							func_121(&iLocal_94, 1024);
							ui::clear_this_print("MG_GET_ON_FOOT");
						}
						if (!player::is_player_control_on(player::player_id())) {
							bVar3 = false;
						}
						if (bVar3) {
							controls::set_input_exclusive(0, 51);
							if (func_77(uLocal_86)) {
								if (iLocal_96 == -1) {
									func_76(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
									func_85(&iLocal_94, 2048);
								}
								else if (!func_117(iLocal_94, 2048) || !ui::is_help_message_being_displayed()) {
									func_75(&iLocal_96);
									func_121(&iLocal_94, 2048);
								}
								if (func_73(iLocal_96, 1)) {
									sLocal_101 = sLocal_101;
									func_75(&iLocal_96);
									func_121(&iLocal_94, 2048);
									script::request_script(&Local_69);
									player::set_player_control(player::player_id(), 0, 56);
									func_110(5);
								}
							}
							else {
								sLocal_101 = sLocal_101;
								func_75(&iLocal_96);
								func_121(&iLocal_94, 2048);
								script::request_script(&Local_69);
								player::set_player_control(player::player_id(), 0, 56);
								func_110(5);
							}
						}
					}
					if (!bVar3) {
						if (iLocal_96 != -1) {
							func_75(&iLocal_96);
							func_121(&iLocal_94, 2048);
							ui::clear_help(0);
						}
					}
				}
				func_60();
				break;

			case 5:
				controls::set_input_exclusive(0, 51);
				if (script::has_script_loaded(&Local_69)) {
					if (iLocal_96 != -1) {
						func_75(&iLocal_96);
					}
					iVar4 = 2;
					bVar0 = false;
					if (func_117(iLocal_94, 1)) {
						if (func_101(6) || func_101(7)) {
							iVar4 = 1;
							bVar0 = true;
						}
					}
					if (iVar4 != 1) {
						iVar4 = func_57(&iLocal_98, 6, iLocal_100, 0, 0);
					}
					if (iVar4 == 1) {
						if (player::is_player_playing(player::player_id())) {
							player::clear_player_wanted_level(player::player_id());
						}
						func_56();
						if (Global_36912) {
							func_47(player::player_ped_id());
						}
						player::set_player_control(player::player_id(), 1, 56);
						iLocal_52 = func_46();
						func_121(&iLocal_94, 4);
						func_45();
						func_85(&iLocal_94, 2);
						func_110(6);
						func_41(&iLocal_107);
						if (iLocal_99 != -1) {
							func_40(iLocal_99);
							func_38(func_39(iLocal_99), 0, 0);
						}
					}
					else if (iVar4 == 2) {
						func_37();
					}
					else if (iVar4 == 0) {
						func_110(10);
					}
				}
				else {
					func_37();
				}
				break;

			case 6:
				if (!func_117(iLocal_94, 256)) {
					if (cam::is_screen_fading_out() || cam::is_screen_faded_in()) {
						controls::set_input_exclusive(0, 51);
					}
					else if (cam::is_screen_faded_out()) {
						func_85(&iLocal_94, 256);
					}
				}
				if (func_117(Global_100353, 262144)) {
					func_121(&Global_100353, 262144);
					func_36();
				}
				if (func_117(iLocal_94, 2097152)) {
					if (!func_99(3) && !script::is_thread_active(iLocal_52)) {
						func_110(10);
					}
				}
				if (!script::is_thread_active(iLocal_52)) {
					stats::playstats_oddjob_done(system::round(func_32(&iLocal_107) * 1000f), iLocal_99, 0);
					func_31(&iLocal_107);
					func_121(&iLocal_94, 256);
					func_30();
					if (bVar0) {
						func_121(&iLocal_94, 2);
					}
					else if (func_117(iLocal_94, 2)) {
						if (func_117(Global_100353, 0)) {
							func_29(&iLocal_98);
							iLocal_98 = -1;
							func_121(&iLocal_94, 2);
						}
						else {
							func_29(&iLocal_98);
							iLocal_98 = -1;
							func_121(&iLocal_94, 2);
						}
					}
					func_110(0);
					if (iLocal_99 != -1) {
						if (func_117(Global_100353, 0)) {
							stats::playstats_mission_checkpoint(func_39(iLocal_99), 0, Global_91528, 0);
							func_28(func_39(iLocal_99), 0, Global_91528, 1, 0);
						}
						else {
							stats::playstats_mission_checkpoint(func_39(iLocal_99), 0, Global_91528, 0);
							func_28(func_39(iLocal_99), 0, Global_91528, 0, 0);
						}
					}
					func_4();
					func_121(&Global_100353, 0);
					if (func_117(iLocal_94, 16777216)) {
						func_123(1);
					}
					if (iLocal_99 != -1) {
						if (Global_101700.f_8044) {
							if (!func_114(0, iLocal_99)) {
								func_123(1);
							}
						}
					}
				}
				func_3();
				break;

			case 8: func_110(0); break;

			case 10: func_123(1); break;

			case 9:
				if (fLocal_110 > fLocal_102 * fLocal_102) {
					if (iLocal_105 != 263) {
						func_111(iLocal_105, 1, 0);
						iLocal_105 = 263;
					}
					func_110(10);
				}
				break;

			case 7:
				func_2();
				if (iLocal_105 != 263) {
					func_111(iLocal_105, 0, 0);
				}
				if (iLocal_96 != -1) {
					func_75(&iLocal_96);
				}
				if (!gameplay::is_string_null_or_empty(sLocal_101)) {
					if (func_1(sLocal_101)) {
						ui::clear_help(1);
					}
				}
				func_110(4);
				break;

			case 4:
				if (iLocal_104 % 150 == 0) {
					if (!ped::is_ped_injured(player::player_ped_id())) {
						if (iLocal_106 == 2) {
							if (iLocal_106 == 2) {
								if (func_115(iLocal_100) && func_114(0, iLocal_99)) {
									func_118();
									if (iLocal_105 != 263) {
										func_111(iLocal_105, 1, 0);
									}
									func_110(0);
								}
							}
						}
						else if (iLocal_106 == 0) {
							if (fLocal_110 > fLocal_102 * fLocal_102) {
								if (iLocal_105 != 263) {
									func_111(iLocal_105, 1, 0);
									iLocal_105 = 263;
								}
								func_110(10);
							}
						}
						else if (iLocal_106 == 1) {
							if (fLocal_110 > (80f + 5f) * (80f + 5f)) {
								func_118();
								if (iLocal_105 != 263) {
									func_111(iLocal_105, 1, 0);
								}
								func_110(0);
							}
						}
					}
					else {
						func_111(iLocal_105, 1, 0);
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

// Position - 0xAE9
bool func_1(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0xAFC
void func_2() {}

// Position - 0xB04
void func_3() {}

// Position - 0xB0C
void func_4() {
	if (entity::does_entity_exist(iLocal_129)) {
		entity::set_entity_as_mission_entity(iLocal_129, 1, 1);
	}
	if (entity::does_entity_exist(iLocal_127)) {
		entity::set_entity_as_mission_entity(iLocal_127, 1, 1);
	}
	if (entity::does_entity_exist(iLocal_128)) {
		entity::set_entity_as_mission_entity(iLocal_128, 1, 1);
	}
	iLocal_130 = ped::add_scenario_blocking_area(vLocal_121.x - 3f, vLocal_121.y - 3f, vLocal_121.z - 3f,
												 vLocal_121.x + 3f, vLocal_121.y + 3f, vLocal_121.z + 3f, 0, 1, 1, 1);
	func_7();
	func_5();
}

// Position - 0xB7A
int func_5() {
	if (func_6(0)) {
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

// Position - 0xBC5
bool func_6(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0xBF0
void func_7() {
	if (func_117(Global_101700.f_18970.f_9, 1)) {
		func_121(&Global_101700.f_18970.f_9, 1);
		if (iLocal_135 == Global_101700.f_18970.f_8) {
			if (Global_101700.f_18970.f_8 != 2) {
				Global_101700.f_18970.f_8++;
				if (Global_101700.f_18970.f_8 == 1) {
					func_111(108, 1, 0);
					func_20(114, 1, 0, 1, 0);
				}
				else if (Global_101700.f_18970.f_8 == 2) {
					func_111(109, 1, 0);
					func_20(115, 1, 0, 1, 0);
				}
				if (iLocal_132 && Global_101700.f_18970.f_8 == 2) {
					func_19(62);
				}
				else {
					func_16("TRI_NEWRC", 0, 0, -1, 10000, 7, 0, 0, 0);
					func_15(62);
				}
			}
			if (iLocal_135 == 0) {
				func_14(107);
				func_10(108);
				func_9(107, 1);
				func_8(108, 1);
			}
			else if (iLocal_135 == 1) {
				func_14(107);
				func_14(108);
				func_10(109);
				func_9(107, 1);
				func_9(108, 1);
				func_8(109, 1);
			}
			else if (iLocal_135 == 2) {
				func_14(107);
				func_14(108);
				func_14(109);
				func_9(107, 1);
				func_9(108, 1);
				func_9(109, 1);
			}
		}
	}
}

// Position - 0xD3C
void func_8(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (iParam1 != gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 13)) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
	}
	if (iParam1) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 13);
	}
	else {
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 13);
	}
}

// Position - 0xDB3
void func_9(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (iParam1 == gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 20)) {
		return;
	}
	if (iParam1) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 20);
	}
	else {
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 20);
	}
	if (Global_25498 == 1) {
		Global_25499 = 1;
	}
	Global_25498 = 1;
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 20);
}

// Position - 0xE3C
void func_10(int iParam0) {
	func_13(iParam0, 1, 0);
	func_12(iParam0, 1);
	func_11(iParam0, 1);
}

// Position - 0xE5A
void func_11(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (iParam1 == gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 4)) {
		return;
	}
	if (iParam1) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 4);
	}
	else {
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 4);
	}
	if (Global_25498 == 1) {
		Global_25499 = 1;
	}
	Global_25498 = 1;
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
}

// Position - 0xEE0
void func_12(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (iParam1 == gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 5)) {
		return;
	}
	if (iParam1) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 5);
	}
	else {
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 5);
	}
	if (Global_25498 == 1) {
		Global_25499 = 1;
	}
	Global_25498 = 1;
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
}

// Position - 0xF66
void func_13(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (iParam1 == gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 6)) {
		return;
	}
	if (iParam1) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 6);
	}
	else {
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 6);
	}
	if (iParam2) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 11);
	}
	else {
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 11);
	}
	if (Global_25498 == 1) {
		Global_25499 = 1;
	}
	Global_25498 = 1;
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
}

// Position - 0x1012
void func_14(int iParam0) {
	func_13(iParam0, 0, 0);
	func_12(iParam0, 1);
	func_11(iParam0, 1);
}

// Position - 0x1030
void func_15(int iParam0) {
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

// Position - 0x1072
void func_16(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8) {
	func_17(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x1093
void func_17(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
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
		func_18();
	}
}

// Position - 0x1266
void func_18() {
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

// Position - 0x1386
void func_19(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31) {
		iVar0 -= 32;
		iVar1++;
	}
	if (iVar1 < 3) {
		gameplay::clear_bit(&Global_101700.f_19369.f_150[iVar1], iVar0);
		gameplay::clear_bit(&Global_101700.f_19369.f_150[iVar1], iVar0);
	}
}

// Position - 0x13DB
void func_20(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	if (iParam0 != 198) {
		if (Global_69702) {
			Global_2433125.f_74.f_227[iParam0] = iParam1;
		}
		else {
			Global_101700.f_6220.f_227[iParam0] = iParam1;
		}
		Global_32749[iParam0] = iParam2;
		Global_32948[iParam0] = 1;
		func_23(iParam0, iParam3, iParam4, 0);
		func_21(iParam0, iParam1);
	}
}

// Position - 0x1436
void func_21(int iParam0, int iParam1) {
	switch (iParam0) {
	case 12:
		if (iParam1 == 0) {
			audio::set_ambient_zone_state_persistent("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
		}
		else {
			audio::set_ambient_zone_state_persistent("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
		}
		break;

	case 71:
		if (iParam1 != 1) {
			audio::set_ambient_zone_list_state_persistent("HEIST_SWEATSHOP_ZONES", 0, 0);
		}
		else {
			audio::set_ambient_zone_list_state_persistent("HEIST_SWEATSHOP_ZONES", 1, 0);
		}
		break;

	case 65:
		if (iParam1 == 1) {
			func_22(0, 0);
		}
		else {
			func_22(0, 1);
		}
		break;

	case 6:
		if (iParam1 == 1) {
			audio::set_ambient_zone_state_persistent("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
		}
		else {
			audio::set_ambient_zone_state_persistent("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
		}
		break;

	case 174:
		if (iParam1 == 2) {
			audio::_0xB4BBFD9CD8B3922B("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
		}
		break;

	case 37:
		if (iParam1 == 1) {
			audio::set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
			audio::set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
			audio::set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
			audio::set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
		}
		break;
	}
}

// Position - 0x1515
void func_22(int iParam0, int iParam1) {
	if (iParam1) {
		gameplay::set_bit(&Global_100340, iParam0);
	}
	else {
		gameplay::clear_bit(&Global_100340, iParam0);
	}
	Global_100339 = 1;
}

// Position - 0x153E
bool func_23(int iParam0, bool bParam1, int iParam2, int iParam3) {
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar98;
	bool bVar99;
	int iVar100;

	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_27(&Var3, iParam0);
	if (func_24()) {
		iVar1 = Global_101700.f_6220.f_227[iParam0];
	}
	else {
		iVar1 = Global_2433125.f_74.f_227[iParam0];
	}
	iVar2 = Global_33147[iParam0];
	if (ped::is_ped_injured(player::player_ped_id()) && !iParam3) {
	}
	else {
		bVar99 = true;
		if (gameplay::get_hash_key(script::get_this_script_name()) != gameplay::get_hash_key("standard_global_reg")) {
			if (iParam2 == 0) {
				if (Global_32749[iParam0] &&
					gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 0), Var3,
														  1) < 200f) {
					bVar99 = false;
				}
				if (!player::is_player_playing(player::player_id()) ||
					ai::is_ped_being_arrested(player::player_ped_id())) {
					if (!cam::is_screen_faded_out()) {
						bVar99 = false;
					}
				}
			}
		}
		if (streaming::is_new_load_scene_active() &&
			(!streaming::is_player_switch_in_progress() || streaming::get_player_switch_state() != 5)) {
			bVar99 = false;
		}
		if (bVar99) {
			switch (Var3.f_3) {
			case 0:
				if (iVar1 == 2) {
				}
				else {
					if (Var3.f_4[iVar1] != 0) {
						entity::remove_model_hide(Var3, 10f, Var3.f_4[iVar1], 0);
					}
					if (Var3.f_4[iVar2] != 0) {
						entity::create_model_hide(Var3, 10f, Var3.f_4[iVar2], 1);
					}
					Global_34343[iParam0] = 1;
				}
				bVar0 = true;
				break;

			case 1:
				if (iVar1 == 0) {
					if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[1 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[1 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES") &&
						gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[2 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[2 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("")) {
						if (!streaming::is_ipl_active(&Var3.f_8[0 /*8*/])) {
							streaming::request_ipl(&Var3.f_8[0 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_34) != gameplay::get_hash_key("")) {
						if (!streaming::is_ipl_active(&Var3.f_34)) {
							streaming::request_ipl(&Var3.f_34);
						}
					}
				}
				else if (iVar1 == 1) {
					if (gameplay::get_hash_key(&Var3.f_34) != gameplay::get_hash_key("")) {
						if (streaming::is_ipl_active(&Var3.f_34)) {
							streaming::remove_ipl(&Var3.f_34);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[0 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[0 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES") &&
						gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[2 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[2 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("")) {
						if (!streaming::is_ipl_active(&Var3.f_8[1 /*8*/])) {
							streaming::request_ipl(&Var3.f_8[1 /*8*/]);
						}
					}
				}
				else if (iVar1 == 2) {
					if (gameplay::get_hash_key(&Var3.f_34) != gameplay::get_hash_key("")) {
						if (streaming::is_ipl_active(&Var3.f_34)) {
							streaming::remove_ipl(&Var3.f_34);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[0 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[0 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
						if (streaming::is_ipl_active(&Var3.f_8[1 /*8*/])) {
							streaming::remove_ipl(&Var3.f_8[1 /*8*/]);
						}
					}
					if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
						gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES")) {
						if (!streaming::is_ipl_active(&Var3.f_8[2 /*8*/])) {
							streaming::request_ipl(&Var3.f_8[2 /*8*/]);
						}
					}
				}
				Global_34144[iParam0] = 1;
				Global_34343[iParam0] = 1;
				bVar0 = true;
				break;

			case 2:
				iVar100 = interior::get_interior_at_coords_with_type(Var3, &Var3.f_42);
				if (iVar100 != 0) {
					if (gameplay::get_hash_key(&Var3.f_50) != gameplay::get_hash_key("")) {
						if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_50)) {
							interior::_disable_interior_prop(iVar100, &Var3.f_50);
						}
					}
					if (iVar1 == 0) {
						if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("")) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[1 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[1 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
							gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES") &&
							gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) !=
								gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[2 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[2 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("")) {
							if (!interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[0 /*8*/])) {
								interior::_enable_interior_prop(iVar100, &Var3.f_8[0 /*8*/]);
							}
						}
					}
					else if (iVar1 == 1) {
						if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("")) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[0 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[0 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
							gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES") &&
							gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) !=
								gameplay::get_hash_key(&Var3.f_8[iVar1 /*8*/])) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[2 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[2 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("")) {
							if (!interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[1 /*8*/])) {
								interior::_enable_interior_prop(iVar100, &Var3.f_8[1 /*8*/]);
							}
						}
					}
					else if (iVar1 == 2) {
						if (gameplay::get_hash_key(&Var3.f_8[0 /*8*/]) != gameplay::get_hash_key("")) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[0 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[0 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[1 /*8*/]) != gameplay::get_hash_key("")) {
							if (interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[1 /*8*/])) {
								interior::_disable_interior_prop(iVar100, &Var3.f_8[1 /*8*/]);
							}
						}
						if (gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("") &&
							gameplay::get_hash_key(&Var3.f_8[2 /*8*/]) != gameplay::get_hash_key("REMOVE_ALL_STATES")) {
							if (!interior::_is_interior_prop_enabled(iVar100, &Var3.f_8[2 /*8*/])) {
								interior::_enable_interior_prop(iVar100, &Var3.f_8[2 /*8*/]);
							}
						}
					}
					if (bParam1) {
						interior::refresh_interior(iVar100);
					}
				}
				Global_34343[iParam0] = 1;
				Global_34144[iParam0] = 1;
				bVar0 = true;
				break;

			case 3:
				if (gameplay::get_distance_between_coords(Var3, entity::get_entity_coords(player::player_ped_id(), 0),
														  1) < 250f) {
					uVar98 = object::_get_des_object(Var3, 25f, &Var3.f_8[0 /*8*/]);
					if (object::_does_des_object_exist(uVar98)) {
						if (iVar1 == 0) {
							object::_set_des_object_state(uVar98, 3);
							Global_34343[iParam0] = 1;
							bVar0 = true;
						}
						else if (iVar1 == 1) {
							if (object::_get_des_object_state(uVar98) != 6 &&
								object::_get_des_object_state(uVar98) != 7 &&
								object::_get_des_object_state(uVar98) != 8) {
								object::_set_des_object_state(uVar98, 10);
								Global_34343[iParam0] = 1;
								bVar0 = true;
							}
						}
						else if (iVar1 == 2) {
							bVar0 = true;
						}
					}
				}
				break;

			case 4:
				if (iVar1 == 0) {
					entity::remove_model_swap(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
					gameplay::clear_bit(&Global_32495[iParam0 / 32], iParam0 % 32);
				}
				else if (iVar1 == 1) {
					entity::create_model_swap(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
					gameplay::set_bit(&Global_32495[iParam0 / 32], iParam0 % 32);
				}
				bVar0 = true;
				break;
			}
			if (bVar0) {
				Global_32948[iParam0] = 0;
				Global_33147[iParam0] = iVar1;
				if (!func_24()) {
					if (!Global_33744[iParam0]) {
						Global_33744[iParam0] = 1;
						Global_33943++;
					}
				}
			}
		}
	}
	return bVar0;
}

// Position - 0x1E63
bool func_24() {
	if ((func_26() == -1 || func_26() == 999) && func_25() != 0) {
		return true;
	}
	return false;
}

// Position - 0x1E93
int func_25() { return Global_25191; }

// Position - 0x1E9E
int func_26() { return Global_25190; }

// Position - 0x1EA9
int func_27(var *uParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		uParam0->f_4[iVar0] = 0;
		StringCopy(&uParam0->f_8[iVar0 /*8*/], "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = {0f, 0f, 0f};
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&uParam0->f_34, "", 32);
	StringCopy(&uParam0->f_42, "", 32);
	StringCopy(&uParam0->f_50, "", 32);
	uParam0->f_58 = {0f, 0f, 0f};
	uParam0->f_61 = {0f, 0f, 0f};
	uParam0->f_68 = {0f, 0f, 0f};
	uParam0->f_71 = {0f, 0f, 0f};
	uParam0->f_74 = 0f;
	uParam0->f_79 = {0f, 0f, 0f};
	uParam0->f_82 = {0f, 0f, 0f};
	uParam0->f_85 = {0f, 0f, 0f};
	uParam0->f_88 = {0f, 0f, 0f};
	switch (iParam1) {
	case 3:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "TRV1_Trail_start", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "TRV1_Trail_end", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "TRV1_Trail_Finish", 32);
		uParam0->f_33 = 1;
		*uParam0 = {-24.685f, 3032.92f, 40.331f};
		break;

	case 4:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "CS3_05_water_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS3_05_water_grp2", 32);
		*uParam0 = {-24.685f, 3032.92f, 40.331f};
		break;

	case 0:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "gasstation_ipl_group1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "gasstation_ipl_group2", 32);
		*uParam0 = {-93.4f, 6410.9f, 36.8f};
		break;

	case 1:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DES_Smash2_startimap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DES_Smash2_endimap", 32);
		*uParam0 = {890.3647f, -2367.289f, 28.10582f};
		break;

	case 2:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DES_StiltHouse_imapstart", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DES_StiltHouse_imapend", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "des_stilthouse_rebuild", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-1020.5f, 663.41f, 154.75f};
		uParam0->f_58 = {-1018.913f, 603.2904f, 105.6611f};
		uParam0->f_61 = {-1038.913f, 639.2904f, 135.6611f};
		uParam0->f_64[0] = 1;
		uParam0->f_64[1] = 0;
		break;

	case 5:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "bnkheist_apt_norm", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "bnkheist_apt_dest", 32);
		break;

	case 196:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "bnkheist_apt_dest_vfx", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
		uParam0->f_33 = 1;
		break;

	case 6:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "crashed_cargoplane", 32);
		break;

	case 7:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "prop_jb700_covered", 32);
		*uParam0 = {490.8999f, -1334.068f, 28.3298f};
		break;

	case 8:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "prop_entityXF_covered", 32);
		*uParam0 = {490.8999f, -1334.068f, 28.3298f};
		break;

	case 9:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "prop_cheetah_covered", 32);
		*uParam0 = {490.8999f, -1334.068f, 28.3298f};
		break;

	case 10:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "prop_ztype_covered", 32);
		*uParam0 = {490.8999f, -1334.068f, 28.3298f};
		break;

	case 11:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "BH1_48_Killed_Michael", 32);
		break;

	case 12:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "cargoship", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "sunkcargoship", 32);
		uParam0->f_68 = {-162.8918f, -2365.769f, 0f};
		uParam0->f_71 = {190.75f, 31.25f, 21f};
		uParam0->f_74 = 0f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		break;

	case 13:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "ship_occ_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "ship_occ_grp2", 32);
		break;

	case 14:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "smboat", 32);
		break;

	case 15:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "gasparticle_grp2", 32);
		*uParam0 = {-95.2f, 6411.3f, 31.5f};
		break;

	case 16:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "CS1_02_cf_offmission", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission1", 32);
		*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
		break;

	case 17:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission2", 32);
		*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
		break;

	case 18:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission3", 32);
		*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
		break;

	case 19:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission4", 32);
		*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
		break;

	case 20:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "jetstealtunnel", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {801.7f, -1810.8f, 23.3f};
		break;

	case 21:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "Jetsteal_ipl_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Jetsteal_ipl_grp2", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
		uParam0->f_33 = 1;
		*uParam0 = {787.3967f, -1808.858f, 29.8532f};
		uParam0->f_58 = {814f, -1750f, 20f};
		uParam0->f_61 = {790f, -1899f, 35f};
		uParam0->f_64[0] = 1;
		uParam0->f_64[1] = 0;
		uParam0->f_64[2] = 0;
		break;

	case 22:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "BH1_47_JoshHse_UnBurnt", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "BH1_47_JoshHse_Burnt", 32);
		break;

	case 23:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "bh1_47_joshhse_firevfx", 32);
		break;

	case 24:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "SC1_30_Keep_Closed", 32);
		break;

	case 25:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "triathlon2_VBprops", 32);
		break;

	case 26:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DT1_05_REQUEST", 32);
		*uParam0 = {163.4f, -745.7f, 251f};
		break;

	case 27:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "FBI_colPLUG", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {74.29f, -736.05f, 46.76f};
		break;

	case 28:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "FBI_repair", 32);
		*uParam0 = {74.29f, -736.05f, 46.76f};
		break;

	case 29:
		uParam0->f_3 = 4;
		uParam0->f_4[0] = joaat("dt1_05_build1_h");
		uParam0->f_4[1] = joaat("dt1_05_build1_damage");
		*uParam0 = {136.004f, -749.287f, 153.302f};
		break;

	case 30:
		uParam0->f_3 = 4;
		uParam0->f_4[0] = -112041596;
		uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
		*uParam0 = {136.004f, -749.287f, 153.302f};
		break;

	case 31:
		uParam0->f_3 = 4;
		uParam0->f_4[0] = -186270611;
		uParam0->f_4[1] = joaat("dt1_05_damage_slod");
		*uParam0 = {178.534f, -668.835f, 37.2113f};
		break;

	case 32:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "FIB_heist_lights", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {136.004f, -749.287f, 153.302f};
		break;

	case 33:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "FIB_heist_dmg", 32);
		*uParam0 = {136.004f, -749.287f, 153.302f};
		break;

	case 34:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DT1_05_rubble", 32);
		*uParam0 = {74.29f, -736.05f, 46.76f};
		break;

	case 35:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "FIBlobbyfake", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "FIBlobby", 32);
		*uParam0 = {105.4557f, -745.4835f, 44.7548f};
		break;

	case 36:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_05_HC_REMOVE", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DT1_05_HC_REQ", 32);
		*uParam0 = {169f, -670.3f, 41.9f};
		break;

	case 37:
		uParam0->f_3 = 1;
		*uParam0 = {50.2f, 3743.9f, 40.9f};
		uParam0->f_79 = {16.9757f, 3614.307f, 30.0677f};
		uParam0->f_82 = {145.2451f, 3748.912f, 49.6958f};
		uParam0->f_85 = {16.9757f, 3614.307f, 30.0677f};
		uParam0->f_88 = {145.2451f, 3748.912f, 49.6958f};
		uParam0->f_91[0] = 0;
		uParam0->f_91[1] = 1;
		break;

	case 38:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "trailerparkA_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "trailerparkA_grp2", 32);
		*uParam0 = {50.2f, 3743.9f, 40.9f};
		break;

	case 39:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_trailerA_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {50.2f, 3743.9f, 40.9f};
		break;

	case 40:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "trailerparkB_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "trailerparkB_grp2", 32);
		*uParam0 = {106.7f, 3732.1f, 40.8f};
		break;

	case 41:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_trailerB_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {106.7f, 3732.1f, 40.8f};
		break;

	case 42:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "trailerparkC_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "trailerparkC_grp2", 32);
		*uParam0 = {72.7f, 3695.4f, 42f};
		break;

	case 43:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_trailerC_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {72.7f, 3695.4f, 42f};
		break;

	case 44:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "trailerparkD_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "trailerparkD_grp2", 32);
		*uParam0 = {43.8f, 3699.7f, 41.3f};
		break;

	case 45:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_trailerD_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {43.8f, 3699.7f, 41.3f};
		break;

	case 46:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "trailerparkE_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "trailerparkE_grp2", 32);
		*uParam0 = {28.5f, 3668f, 40.4f};
		break;

	case 47:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_trailerE_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {28.5f, 3668f, 40.4f};
		break;

	case 48:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_34, "des_methtrailer", 32);
		StringCopy(&uParam0->f_8[0 /*8*/], "methtrailer_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "methtrailer_grp2", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "methtrailer_grp3", 32);
		uParam0->f_33 = 1;
		*uParam0 = {29.4838f, 3735.593f, 38.688f};
		uParam0->f_68 = {31.134f, 3738.783f, 39.062f};
		uParam0->f_71 = {13.6f, 20f, 8.9f};
		uParam0->f_74 = 48f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		uParam0->f_75[2] = 1;
		break;

	case 49:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "occl_meth_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {29.4838f, 3735.593f, 38.688f};
		break;

	case 50:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "des_farmhs_startimap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "des_farmhs_endimap", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
		uParam0->f_33 = 1;
		*uParam0 = {2450.595f, 4959.929f, 44.2575f};
		uParam0->f_79 = {2383.756f, 4929.988f, 39.52461f};
		uParam0->f_82 = {2505.756f, 5023.988f, 67.52461f};
		break;

	case 55:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "des_farmhs_start_occl", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "des_farmhs_end_occl", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		*uParam0 = {2450.595f, 4959.929f, 44.2575f};
		break;

	case 51:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "farm", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "farm", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "farm_burnt", 32);
		uParam0->f_33 = 1;
		*uParam0 = {2444.8f, 4976.4f, 50.5f};
		break;

	case 52:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "farm_props", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "farm_burnt_props", 32);
		uParam0->f_33 = 1;
		*uParam0 = {2447.9f, 4973.4f, 47.7f};
		break;

	case 53:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "des_farmhouse", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "des_farmhouse", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
		uParam0->f_33 = 1;
		*uParam0 = {2447.9f, 4973.4f, 47.7f};
		break;

	case 54:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "farmint_cap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "farmint", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		*uParam0 = {2447.9f, 4973.4f, 47.7f};
		break;

	case 56:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "tankerexp_grp0", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "tankerexp_grp3", 32);
		*uParam0 = {1676.415f, -1626.37f, 111.4848f};
		break;

	case 57:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "tankerexp_grp1", 32);
		*uParam0 = {1676.415f, -1626.37f, 111.4848f};
		break;

	case 58:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "tankerexp_grp2", 32);
		*uParam0 = {1676.415f, -1626.37f, 111.4848f};
		break;

	case 59:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DES_tankerexp", 32);
		*uParam0 = {1676.415f, -1626.37f, 111.4848f};
		break;

	case 60:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "dockcrane1", 32);
		*uParam0 = {889.3f, -2910.9f, 40f};
		break;

	case 61:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "CanyonRvrShallow", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CanyonRvrDeep", 32);
		*uParam0 = {-1600.619f, 4443.457f, 0.725f};
		break;

	case 62:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Garage_door_locked", 32);
		*uParam0 = {966.1f, -114.8f, 75.2f};
		break;

	case 63:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "ch1_02_closed", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "ch1_02_open", 32);
		*uParam0 = {-3086.428f, 339.2523f, 6.3717f};
		break;

	case 64:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "ferris_finale_Anim", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {-1675.178f, -1143.605f, 12.0175f};
		break;

	case 65:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "railing_start", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "railing_end", 32);
		*uParam0 = {-532.1309f, 4526.187f, 88.7955f};
		break;

	case 66:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "canyonriver01", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "canyonriver01_traincrash", 32);
		*uParam0 = {-532.1309f, 4526.187f, 88.7955f};
		break;

	case 67:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_05_WOFFM", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DT1_05_FIB2_Mission", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "DT1_05_WOFFM", 32);
		*uParam0 = {131.29f, -631.22f, 261.85f};
		break;

	case 68:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "coronertrash", 32);
		*uParam0 = {233.9f, -1355f, 30.3f};
		break;

	case 69:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "Coroner_Int_off", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Coroner_Int_on", 32);
		*uParam0 = {234.4f, -1355.6f, 40.5f};
		break;

	case 70:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "id2_14_pre_no_int", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {716.84f, -962.05f, 31.59f};
		break;

	case 71:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "id2_14_during1", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "id2_14_during2", 32);
		*uParam0 = {716.84f, -962.05f, 31.59f};
		break;

	case 72:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "id2_14_on_fire", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "id2_14_post_no_int", 32);
		*uParam0 = {716.84f, -962.05f, 31.59f};
		break;

	case 73:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "id2_14_during_door", 32);
		*uParam0 = {716.84f, -962.05f, 31.59f};
		break;

	case 74:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "burnt_switch_off", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {716.84f, -962.05f, 31.59f};
		break;

	case 75:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "RC12B_Default", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "RC12B_Destroyed", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "RC12B_Fixed", 32);
		uParam0->f_33 = 0;
		*uParam0 = {330.4596f, -584.8196f, 42.3174f};
		break;

	case 76:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "RC12B_HospitalInterior", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {330.4596f, -584.8196f, 42.3174f};
		break;

	case 105:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "SM_15_BldGRAF1", 32);
		*uParam0 = {330.4596f, -584.8196f, 42.3174f};
		break;

	case 106:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CH3_RD2_BishopsChickenGraffiti", 32);
		*uParam0 = {1861.28f, 2402.11f, 58.53f};
		break;

	case 107:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "FruitBB", 32);
		*uParam0 = {-1327.46f, -274.82f, 54.25f};
		break;

	case 108:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS5_04_MazeBillboardGraffiti", 32);
		*uParam0 = {2697.32f, 3162.18f, 58.1f};
		break;

	case 109:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS5_Roads_RonOilGraffiti", 32);
		*uParam0 = {2119.12f, 3058.21f, 53.25f};
		break;

	case 110:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "ap1_03_bbrd_dcl", 32);
		*uParam0 = {-804.25f, -2276.88f, 23.59f};
		break;

	case 111:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "HW1_02_OldBill", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "HW1_02_NewBill", 32);
		*uParam0 = {296.5f, 173.3f, 100.4f};
		break;

	case 112:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "HW1_Emissive_OldBill", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "HW1_Emissive_NewBill", 32);
		*uParam0 = {296.5f, 173.3f, 100.4f};
		break;

	case 77:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 1;
		*uParam0 = {480.9554f, -1321.21f, 28.2037f};
		uParam0->f_85 = {508.3f, -1299.3f, 39.4f};
		uParam0->f_88 = {459.9f, -1363.2f, 21.4f};
		uParam0->f_91[0] = 0;
		uParam0->f_91[1] = 1;
		uParam0->f_91[2] = 0;
		break;

	case 78:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "TrevorsTrailer", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "TrevorsTrailerTrash", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "TrevorsTrailerTidy", 32);
		*uParam0 = {1973f, 3815f, 34f};
		uParam0->f_33 = 0;
		break;

	case 79:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "scafstartimap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "scafendimap", 32);
		*uParam0 = {-1088.6f, -1650.6f, 6.4f};
		break;

	case 80:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "chop_props", 32);
		*uParam0 = {-13.83f, -1455.45f, 31.81f};
		break;

	case 113:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "AP1_04_TriAf01", 32);
		*uParam0 = {-1277.629f, -2030.913f, 1.2823f};
		break;

	case 114:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS2_06_TriAf02", 32);
		*uParam0 = {2384.969f, 4277.583f, 30.379f};
		break;

	case 115:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS4_04_TriAf03", 32);
		*uParam0 = {1577.881f, 3836.107f, 30.7717f};
		break;

	case 87:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_21_prop_lift_on", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {-180.5771f, -1016.928f, 28.2893f};
		break;

	case 88:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "jewel2fake", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "post_hiest_unload", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "bh1_16_refurb", 32);
		*uParam0 = {-630.4205f, -236.7843f, 37.057f};
		uParam0->f_79 = {-623.6868f - 11f, -231.935f - 11f, 40.30703f - 3.25f};
		uParam0->f_82 = {-623.6868f + 11f, -231.935f + 11f, 40.30703f + 3.25f};
		break;

	case 89:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "bh1_16_doors_shut", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "refit_unload", 32);
		*uParam0 = {-583.1606f, -282.3967f, 35.394f};
		break;

	case 90:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "v_tunnel_hole_swap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "v_tunnel_hole", 32);
		*uParam0 = {-14.651f, -604.3639f, 25.1823f};
		break;

	case 91:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "cs5_4_trains", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {2773.61f, 2835.327f, 35.1903f};
		break;

	case 94:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "airfield", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {1743.682f, 3286.251f, 40.0875f};
		break;

	case 95:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
		uParam0->f_33 = 1;
		*uParam0 = {1222.9f, 1877.9f, 79.9f};
		uParam0->f_58 = {1206.8f, 1803f, 43.9f};
		uParam0->f_61 = {1329f, 2060.4f, 143.9f};
		uParam0->f_64[0] = 0;
		uParam0->f_64[1] = 1;
		uParam0->f_64[2] = 0;
		break;

	case 104:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "SC1_01_OldBill", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "SC1_01_NewBill", 32);
		*uParam0 = {-351f, -1324f, 44.02f};
		break;

	case 103:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_17_OldBill", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "DT1_17_NewBill", 32);
		*uParam0 = {391.81f, -962.71f, 41.97f};
		break;

	case 102:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "SC1_14_OldBill", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "SC1_14_NewBill", 32);
		*uParam0 = {424.2f, -1944.31f, 33.09f};
		break;

	case 92:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "ld_rail_01_track", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {2626.374f, 2949.869f, 39.1409f};
		break;

	case 93:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "ld_rail_02_track", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {2626.374f, 2949.869f, 39.1409f};
		break;

	case 118:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_Michael_M_items", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_M_moved", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-811.2679f, 179.3344f, 75.7408f};
		break;

	case 116:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_Michael_D_items", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_D_Moved", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-802.0311f, 172.9131f, 75.7408f};
		break;

	case 117:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_Michael_S_items", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_S_items_swap", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-808.033f, 172.1309f, 75.7406f};
		break;

	case 119:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_Michael_L_Items", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_L_Moved", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-808.033f, 172.1309f, 75.7406f};
		break;

	case 120:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_M_items_swap", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-808.033f, 172.1309f, 75.7406f};
		break;

	case 122:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_FameShame", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-802.0311f, 172.9131f, 75.7408f};
		break;

	case 121:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_JewelHeist", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-813.3f, 177.5f, 75.76f};
		break;

	case 123:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Michael_premier", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-813.3f, 177.5f, 75.76f};
		break;

	case 124:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_plane_ticket", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-813.3f, 177.5f, 75.76f};
		break;

	case 170:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "burgershot_yoga", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-813.3f, 177.5f, 75.76f};
		break;

	case 171:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_Scuba", 32);
		StringCopy(&uParam0->f_42, "V_Michael_Garage", 32);
		*uParam0 = {-810.5301f, 187.7868f, 71.4786f};
		break;

	case 125:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_Michael_bed_tidy", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_Michael_bed_Messy", 32);
		StringCopy(&uParam0->f_42, "V_Michael", 32);
		*uParam0 = {-811.2679f, 179.3344f, 75.7408f};
		break;

	case 164:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Jewel_Gasmasks", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 165:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_53_Agency _Overalls", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 166:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_53_Agency_Blueprint", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 167:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_35_KitBag", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 168:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_35_Body_Armour", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 169:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_35_Fireman", 32);
		StringCopy(&uParam0->f_42, "V_Sweat", 32);
		*uParam0 = {707.2563f, -965.147f, 29.4179f};
		break;

	case 126:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet1", 32);
		StringCopy(&uParam0->f_42, "V_Trailer", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 127:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet3", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTRASH", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 128:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet2", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTidy", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 129:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase1", 32);
		StringCopy(&uParam0->f_42, "V_Trailer", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 130:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase3", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTRASH", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 131:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase2", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTidy", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 132:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay1", 32);
		StringCopy(&uParam0->f_42, "V_Trailer", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 133:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay3", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTRASH", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 134:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay2", 32);
		StringCopy(&uParam0->f_42, "V_TrailerTidy", 32);
		*uParam0 = {1973.805f, 3818.555f, 32.4363f};
		break;

	case 179:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "shutter_open", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "shutter_closed", 32);
		StringCopy(&uParam0->f_42, "v_carshowroom", 32);
		*uParam0 = {-30.8793f, -1088.336f, 25.4221f};
		uParam0->f_68 = {-29.3f, -1086.35f, 25.57f};
		uParam0->f_71 = {5.5f, 3f, 2f};
		uParam0->f_74 = -10f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		break;

	case 174:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "csr_beforeMission", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "csr_afterMissionA", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "csr_afterMissionB", 32);
		StringCopy(&uParam0->f_50, "csr_inMission", 32);
		uParam0->f_33 = 0;
		StringCopy(&uParam0->f_42, "v_carshowroom", 32);
		*uParam0 = {-59.7936f, -1098.784f, 27.2612f};
		break;

	case 175:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_carshowroom", 32);
		*uParam0 = {-49.21f, -1090.28f, 25.42f};
		uParam0->f_68 = {-49.21f, -1090.28f, 25.42f};
		uParam0->f_71 = {2.5f, 3f, 3f};
		uParam0->f_74 = 0f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		uParam0->f_75[2] = 0;
		break;

	case 176:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_carshowroom", 32);
		*uParam0 = {-49.28f, -1092.66f, 25.42f};
		uParam0->f_68 = {-49.28f, -1092.66f, 25.42f};
		uParam0->f_71 = {3f, 1f, 3f};
		uParam0->f_74 = 0f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		uParam0->f_75[2] = 0;
		break;

	case 177:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_carshowroom", 32);
		*uParam0 = {-53.07f, -1096.73f, 25.5f};
		uParam0->f_68 = {-53.07f, -1096.73f, 25.5f};
		uParam0->f_71 = {1f, 3f, 2f};
		uParam0->f_74 = -45f;
		uParam0->f_75[0] = 0;
		uParam0->f_75[1] = 1;
		uParam0->f_75[2] = 0;
		break;

	case 178:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "carshowroom_broken", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "carshowroom_boarded", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-59.7936f, -1098.784f, 27.2612f};
		break;

	case 173:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "shr_int", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "fakeint", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-59.7936f, -1098.784f, 27.2612f};
		break;

	case 180:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_03_Shutter", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "", 32);
		*uParam0 = {23.9346f, -669.7552f, 30.8853f};
		break;

	case 181:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "Hospitaldoorsanim", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "Hospitaldoorsfixed", 32);
		StringCopy(&uParam0->f_42, "v_hospital", 32);
		uParam0->f_33 = 0;
		*uParam0 = {300.9423f, -586.1784f, 42.2919f};
		break;

	case 135:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "swap_clean_apt", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_mess_A", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 136:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_mess_B", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 137:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_mess_C", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 138:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_sextoys_a", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 139:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_wade_shit", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 140:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "swap_wade_sofa_A", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 141:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "layer_debra_pic", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 142:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_torture", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 143:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "swap_sofa_A", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "swap_sofa_B", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 144:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "layer_whiskey", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 145:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "swap_mrJam_A", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "swap_mrJam_B", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 146:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "swap_mrJam_C", 32);
		StringCopy(&uParam0->f_42, "v_trevors", 32);
		*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
		break;

	case 147:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "vb_30_emissive", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "vb_30_murder", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-1150.039f, -1521.761f, 9.6331f};
		break;

	case 148:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "vb_30_crimetape", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-1150.039f, -1521.761f, 9.6331f};
		break;

	case 149:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "sheriff_cap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {1856.029f, 3682.998f, 33.2675f};
		break;

	case 150:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "CS1_16_Sheriff_Cap", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-440.5073f, 6018.766f, 30.49f};
		break;

	case 151:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "ufo", 32);
		uParam0->f_33 = 0;
		*uParam0 = {487.31f, 5588.386f, 793.0532f};
		break;

	case 152:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "ufo_eye", 32);
		uParam0->f_33 = 0;
		*uParam0 = {487.31f, 5588.386f, 793.0532f};
		break;

	case 153:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "V_57_FranklinStuff", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_57_Franklin_LEFT", 32);
		StringCopy(&uParam0->f_42, "v_franklins", 32);
		*uParam0 = {-13.9623f, -1440.614f, 30.1015f};
		break;

	case 154:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_57_GangBandana", 32);
		StringCopy(&uParam0->f_42, "v_franklins", 32);
		*uParam0 = {-13.9623f, -1440.614f, 30.1015f};
		break;

	case 155:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_57_Safari", 32);
		StringCopy(&uParam0->f_42, "v_franklins", 32);
		*uParam0 = {-13.9623f, -1440.614f, 30.1015f};
		break;

	case 172:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "V_19_Trevor_Mess", 32);
		StringCopy(&uParam0->f_42, "v_strip3", 32);
		*uParam0 = {96.4811f, -1291.294f, 28.2688f};
		break;

	case 182:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {139.5795f, -3092.962f, 8.64631f};
		uParam0->f_79 = {Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f)};
		uParam0->f_82 = {Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f)};
		uParam0->f_85 = {Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f)};
		uParam0->f_88 = {Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f)};
		uParam0->f_91[0] = 0;
		uParam0->f_91[1] = 1;
		uParam0->f_91[2] = 1;
		break;

	case 183:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {203.7784f, -3131.767f, 7.041344f};
		uParam0->f_79 = {Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f)};
		uParam0->f_82 = {Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f)};
		break;

	case 184:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {144.7706f, -2982.659f, 7.952507f};
		uParam0->f_79 = {Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f)};
		uParam0->f_82 = {Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f)};
		break;

	case 185:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 1;
		*uParam0 = {-1154.965f, -1520.983f, 9.132731f};
		uParam0->f_79 = {-1154.965f, -1520.983f, 9.132731f};
		uParam0->f_82 = {-1158.965f, -1524.983f, 11.63273f};
		break;

	case 187:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 1;
		*uParam0 = {-1052.204f, 371.9537f, 67.914f};
		uParam0->f_79 = {-1052.204f, 371.9537f, 67.914f};
		uParam0->f_82 = {-1048.064f, 368.0221f, 70.9128f};
		break;

	case 186:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 1;
		*uParam0 = {1954.984f, 3792.991f, 30.3086f};
		uParam0->f_79 = {1954.984f, 3792.991f, 30.3086f};
		uParam0->f_82 = {1983.45f, 3830.78f, 36.2726f};
		break;

	case 188:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 1;
		*uParam0 = {-1122.202f, 48.5724f, 51.4652f};
		uParam0->f_79 = {-1122.202f, 48.5724f, 51.4652f};
		uParam0->f_82 = {-1076.233f, 92.1041f, 60.0617f};
		break;

	case 81:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "KorizTempWalls", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-2199.138f, 223.4648f, 181.1118f};
		break;

	case 82:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "mic3_chopper_debris", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {-2242.785f, 263.4779f, 173.6154f};
		break;

	case 83:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "chemgrill_grp1", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {3832.9f, 3665.5f, -23.4f};
		break;

	case 84:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Plane_crash_trench", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		uParam0->f_33 = 0;
		*uParam0 = {2814.7f, 4758.5f, 47.9f};
		break;

	case 85:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "golfflags", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {-1096.505f, 4.5754f, 49.8103f};
		break;

	case 86:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "yogagame", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {-781.6566f, 186.8937f, 71.8352f};
		break;

	case 189:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "Carwash_with_spinners", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "Carwash_without_spinners", 32);
		uParam0->f_33 = 0;
		*uParam0 = {55.7f, -1391.3f, 30.5f};
		break;

	case 190:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "KT_CarWash", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "KT_CarWash_NoBrush", 32);
		uParam0->f_33 = 0;
		*uParam0 = {700.091f, -933.641f, 20.308f};
		break;

	case 191:
		uParam0->f_3 = 1;
		*uParam0 = {-1096.381f, -836.17f, 36.6755f};
		uParam0->f_85 = {*uParam0 - Vector(25f, 25f, 15f)};
		uParam0->f_88 = {*uParam0 + Vector(25f, 25f, 15f)};
		uParam0->f_91[0] = 1;
		uParam0->f_91[1] = 0;
		break;

	case 192:
		uParam0->f_3 = 1;
		*uParam0 = {449.6558f, -980.1375f, 42.6918f};
		uParam0->f_85 = {*uParam0 - Vector(25f, 25f, 15f)};
		uParam0->f_88 = {*uParam0 + Vector(25f, 25f, 15f)};
		uParam0->f_91[0] = 1;
		uParam0->f_91[1] = 0;
		break;

	case 193:
		uParam0->f_3 = 1;
		*uParam0 = {363.0175f, -1598.079f, 35.9502f};
		uParam0->f_85 = {*uParam0 - Vector(25f, 25f, 15f)};
		uParam0->f_88 = {*uParam0 + Vector(25f, 25f, 15f)};
		uParam0->f_91[0] = 1;
		uParam0->f_91[1] = 0;
		break;

	case 194:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "CS3_07_MPGates", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "", 32);
		*uParam0 = {-1601.424f, 2808.213f, 16.2598f};
		break;

	case 97:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "DT1_03_Gr_Closed", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "", 32);
		*uParam0 = {23.7318f, -647.2123f, 37.9549f};
		break;

	case 98:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "FINBANK", 32);
		*uParam0 = {12.9689f, -648.4698f, 9.7693f};
		break;

	case 99:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "PAPER1_RCM_ALT", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "PAPER1_RCM", 32);
		*uParam0 = {-1459.127f, 486.1281f, 115.2016f};
		break;

	case 100:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "SP1_10_fake_interior", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "SP1_10_real_interior", 32);
		*uParam0 = {-248.4916f, -2010.509f, 34.5743f};
		break;

	case 101:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "facelobbyfake", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "facelobby", 32);
		*uParam0 = {-1081.347f, -263.1502f, 38.7152f};
		break;

	case 195:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "atriumglstatic", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "atriumglmission", 32);
		StringCopy(&uParam0->f_8[2 /*8*/], "atriumglcut", 32);
		*uParam0 = {136.1795f, -750.701f, 262.0516f};
		break;

	case 197:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "racetrack01", 32);
		*uParam0 = {2096f, 3168.7f, 42.9f};
		break;
	}
	switch (iParam1) {
	case 156:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "showhome_only", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 157:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "franklin_unpacking", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 158:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "franklin_settled", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 163:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "progress_tshirt", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 159:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "bong_and_wine", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 161:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "progress_flyer", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 162:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "progress_tux", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 160:
		uParam0->f_3 = 2;
		StringCopy(&uParam0->f_8[0 /*8*/], "locked", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "unlocked", 32);
		StringCopy(&uParam0->f_42, "v_franklinshouse", 32);
		*uParam0 = {7.0256f, 537.3075f, 175.0281f};
		break;

	case 96:
		uParam0->f_3 = 1;
		StringCopy(&uParam0->f_8[0 /*8*/], "", 32);
		StringCopy(&uParam0->f_8[1 /*8*/], "chophillskennel", 32);
		*uParam0 = {19.0568f, 536.4818f, 169.6277f};
		break;
	}
	return 1;
}

// Position - 0x5648
void func_28(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	if (gameplay::is_string_null_or_empty(&Global_88894)) {
		return;
	}
	if (gameplay::compare_strings(sParam0, &Global_88894, 0, -1) != 0) {
		return;
	}
	stats::playstats_mission_over(sParam0, iParam1, iParam2, iParam3, iParam4, Global_86001);
	StringCopy(&Global_88894, "", 64);
}

// Position - 0x568C
void func_29(int *iParam0) {
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

// Position - 0x56C9
void func_30() {
	vector3 vVar0[24];

	if (gameplay::is_xbox360_version() || gameplay::is_durango_version()) {
		network::network_set_rich_presence(StackVal, 0, 0, 0);
	}
	else if (gameplay::is_ps3_version() || gameplay::is_orbis_version()) {
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		network::_0x3E200C2BCF4164EB(0, &cVar0);
	}
}

// Position - 0x570C
void func_31(int *iParam0) {
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

// Position - 0x5722
float func_32(var *uParam0) {
	if (func_35(uParam0)) {
		if (func_34(uParam0)) {
			return uParam0->f_2;
		}
		else {
			return func_33(gameplay::is_bit_set(*uParam0, 4)) - uParam0->f_1;
		}
	}
	return uParam0->f_1;
}

// Position - 0x5761
float func_33(bool bParam0) {
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

// Position - 0x57B9
bool func_34(var *uParam0) { return gameplay::is_bit_set(*uParam0, 2); }

// Position - 0x57C9
bool func_35(var *uParam0) { return gameplay::is_bit_set(*uParam0, 1); }

// Position - 0x57D9
int func_36() {
	func_7();
	return 1;
}

// Position - 0x57E6
void func_37() {}

// Position - 0x57EE
void func_38(char *sParam0, int iParam1, int iParam2) {
	if (!gameplay::is_string_null_or_empty(&Global_88894)) {
		stats::playstats_mission_over(&Global_88894, 0, 0, 0, 1, 0);
		StringCopy(&Global_88894, "", 64);
	}
	StringCopy(&Global_88894, sParam0, 64);
	stats::playstats_mission_started(sParam0, iParam1, iParam2, func_6(0));
}

// Position - 0x582F
char *func_39(int iParam0) {
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

// Position - 0x5982
void func_40(int iParam0) {
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

// Position - 0x59DB
void func_41(var *uParam0) {
	if (!func_35(uParam0)) {
		func_44(uParam0);
	}
	else {
		func_42(uParam0);
	}
}

// Position - 0x59FC
void func_42(var *uParam0) { func_43(uParam0, 0f); }

// Position - 0x5A0B
void func_43(int *iParam0, float fParam1) {
	uParam0->f_1 = func_33(gameplay::is_bit_set(*uParam0, 4)) - fParam1;
	gameplay::set_bit(uParam0, 1);
	gameplay::clear_bit(iParam0, 2);
	iParam0->f_2 = 0f;
}

// Position - 0x5A39
void func_44(var *uParam0) {
	if (!func_35(uParam0)) {
		func_42(uParam0);
	}
}

// Position - 0x5A51
void func_45() {
	int iVar0;

	if (bLocal_131) {
		iVar0 = 0;
		while (iVar0 < iLocal_136) {
			if (pathfind::does_navmesh_blocking_object_exist(iLocal_136[iVar0])) {
				pathfind::remove_navmesh_blocking_object(iLocal_136[iVar0]);
			}
			iVar0++;
		}
		ai::reset_exclusive_scenario_group();
	}
}

// Position - 0x5A8C
var func_46() {
	struct<8> Var0;
	var uVar8;

	ui::clear_help(1);
	Var0 = iLocal_135;
	Var0.f_1 = {vLocal_118};
	Var0.f_4 = iLocal_125;
	Var0.f_5 = iLocal_129;
	Var0.f_6 = iLocal_127;
	Var0.f_7 = iLocal_128;
	uVar8 = system::start_new_script_with_args(&Local_53, &Var0, 8, iLocal_97);
	script::set_script_as_no_longer_needed(&Local_53);
	return uVar8;
}

// Position - 0x5AD5
void func_47(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 0) {
		return;
	}
	if (!entity::does_entity_exist(iParam0)) {
		return;
	}
	iVar0 = func_55(iParam0);
	if (iVar0 != -1) {
		iVar1 = Global_36715[iVar0 /*5*/];
		func_50(1, iVar1, 1);
		return;
	}
	iVar2 = func_49(iParam0);
	if (iVar2 == -1) {
		return;
	}
	func_48(iVar2);
}

// Position - 0x5B2E
void func_48(int iParam0) {
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

// Position - 0x5BB1
int func_49(int iParam0) {
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

// Position - 0x5BE2
void func_50(int iParam0, int iParam1, int iParam2) { func_51(iParam0, iParam1, iParam2, 0, 0); }

// Position - 0x5BF6
void func_51(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
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
	if (func_53(iParam0, iParam1, iParam2)) {
		return;
	}
	iVar0 = func_52();
	if (iVar0 == -1) {
		return;
	}
	Global_36796[iVar0 /*5*/] = iParam0;
	Global_36796[iVar0 /*5*/].f_1 = iParam1;
	Global_36796[iVar0 /*5*/].f_2 = iParam2;
	Global_36796[iVar0 /*5*/].f_3 = iParam3;
	Global_36796[iVar0 /*5*/].f_4 = iParam4;
}

// Position - 0x5C6D
int func_52() {
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

// Position - 0x5C9E
bool func_53(int iParam0, int iParam1, int iParam2) {
	if (func_54(iParam0, iParam1, iParam2) == -1) {
		return false;
	}
	return true;
}

// Position - 0x5CB9
int func_54(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x5D05
int func_55(int iParam0) {
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

// Position - 0x5D4E
void func_56() {
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

// Position - 0x5DCB
int func_57(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
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
		if (func_59(0)) {
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
		if (!func_115(iParam2)) {
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
			func_58(iParam0, iParam4);
		}
	}
	return 2;
}

// Position - 0x5F02
void func_58(int *iParam0, int iParam1) {
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

// Position - 0x5F51
bool func_59(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_115(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x5F73
void func_60() {
	int iVar0;

	if (iLocal_135 == 2 && iLocal_132) {
		func_72(iLocal_105);
	}
	else if (ped::is_ped_injured(iLocal_129) ||
			 decisionevent::is_shocking_event_in_sphere(89, entity::get_entity_coords(iLocal_129, 1), 40f) ||
			 decisionevent::is_shocking_event_in_sphere(116, entity::get_entity_coords(iLocal_129, 1), 40f)) {
		func_78("TRI_DEATH", -1);
		iVar0 = iLocal_105;
		func_72(iLocal_105);
		iLocal_105 = iVar0;
	}
	else if (!iLocal_132) {
		if (func_71() || func_69()) {
		}
		else {
			iLocal_132 = 1;
		}
	}
	if (entity::does_entity_exist(iLocal_129)) {
		if (!entity::is_entity_dead(iLocal_129, 0) && !entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (system::vdist2(entity::get_entity_coords(iLocal_129, 1),
							   entity::get_entity_coords(player::player_ped_id(), 1)) <= 144f) {
				if (ai::get_script_task_status(iLocal_129, 150319005) != 1) {
					ai::task_look_at_entity(iLocal_129, player::player_ped_id(), -1, 0, 2);
				}
			}
			else if (ai::get_script_task_status(iLocal_129, 150319005) == 1) {
				ai::task_clear_look_at(iLocal_129);
			}
		}
	}
	if (bLocal_131) {
		func_61();
	}
}

// Position - 0x607F
void func_61() {
	int iVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;
	int iVar15;
	struct<4> Var16;

	if (gameplay::get_game_timer() > iLocal_134 && fLocal_93 < 30f * 30f) {
		iLocal_134 = gameplay::get_game_timer() + 10000;
		if (gameplay::get_random_float_in_range(0f, 1f) <= 0.5f) {
			iVar1 = func_64();
			if (iVar1 == 0) {
				iVar0 = 0;
			}
			else if (iVar1 == 1) {
				iVar0 = 1;
			}
			else if (iVar1 == 2) {
				iVar0 = 3;
			}
			ped::set_scenario_peds_to_be_returned_by_next_command(1);
			iVar13 = ped::get_ped_nearby_peds(player::player_ped_id(), &uVar2, iVar0);
			iVar15 = 0;
			while (iVar15 < iVar13) {
				if (!ped::is_ped_injured(uVar2[iVar15]) && !entity::does_entity_exist(iVar14)) {
					if (entity::get_entity_model(uVar2[iVar15]) == joaat("a_m_y_roadcyc_01")) {
						iVar14 = uVar2[iVar15];
					}
				}
				iVar15++;
			}
			if (entity::does_entity_exist(iVar14) && !ped::is_ped_injured(iVar14)) {
				StringCopy(&Var16, "A_M_Y_TRIATHLON_01_MINI_0", 32);
				StringIntConCat(&Var16, gameplay::get_random_int_in_range(1, 5), 32);
				func_62(iVar14, "TRIATHLON_WARMUP", &Var16, 6);
			}
		}
	}
}

// Position - 0x617B
void func_62(int iParam0, char *sParam1, char *sParam2, int iParam3) {
	audio::_play_ambient_speech_with_voice(iParam0, sParam1, sParam2, func_63(iParam3), 0);
}

// Position - 0x6194
int func_63(int iParam0) {
	int iVar0;

	switch (iParam0) {
	case 0: return "SPEECH_PARAMS_STANDARD";

	case 1: return "SPEECH_PARAMS_ALLOW_REPEAT";

	case 2: return "SPEECH_PARAMS_BEAT";

	case 3: return "SPEECH_PARAMS_FORCE";

	case 4: return "SPEECH_PARAMS_FORCE_FRONTEND";

	case 5: return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";

	case 6: return "SPEECH_PARAMS_FORCE_NORMAL";

	case 7: return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";

	case 8: return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";

	case 9: return "SPEECH_PARAMS_FORCE_SHOUTED";

	case 10: return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";

	case 11: return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";

	case 12: return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";

	case 13: return "SPEECH_PARAMS_MEGAPHONE";

	case 14: return "SPEECH_PARAMS_HELI";

	case 15: return "SPEECH_PARAMS_FORCE_MEGAPHONE";

	case 16: return "SPEECH_PARAMS_FORCE_HELI";

	case 17: return "SPEECH_PARAMS_INTERRUPT";

	case 18: return "SPEECH_PARAMS_INTERRUPT_SHOUTED";

	case 19: return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";

	case 20: return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";

	case 21: return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";

	case 22: return "SPEECH_PARAMS_INTERRUPT_FRONTEND";

	case 23: return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";

	case 24: return "SPEECH_PARAMS_ADD_BLIP";

	case 25: return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";

	case 26: return "SPEECH_PARAMS_ADD_BLIP_FORCE";

	case 27: return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";

	case 28: return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";

	case 29: return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";

	case 30: return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";

	case 31: return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";

	case 32: return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";

	case 33: return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";

	case 34: return "SPEECH_PARAMS_SHOUTED";

	case 35: return "SPEECH_PARAMS_SHOUTED_CLEAR";

	case 36: return "SPEECH_PARAMS_SHOUTED_CRITICAL";

	default:
	}
	iVar0 = 0;
	return iVar0;
}

// Position - 0x6389
var func_64() {
	func_65();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x63A2
void func_65() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_68(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_67(player::player_ped_id());
			if (func_66(iVar0) && (!func_101(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_66(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x649F
bool func_66(int iParam0) { return iParam0 < 3; }

// Position - 0x64AB
int func_67(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_68(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x64E8
int func_68(int iParam0) {
	if (func_66(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x6512
int func_69() {
	if (func_70(131)) {
		return 1;
	}
	return 0;
}

// Position - 0x6528
bool func_70(int iParam0) {
	if (iParam0 == 146 || iParam0 == -1) {
		return false;
	}
	return Global_101700.f_8044.f_99.f_58[iParam0];
}

// Position - 0x6555
int func_71() {
	if (!func_70(130)) {
		return 1;
	}
	return 0;
}

// Position - 0x656C
void func_72(int iParam0) {
	if (iLocal_95 < 5) {
		if (iParam0 != 263) {
			if (iParam0 < 0 || iParam0 >= 263) {
			}
			func_111(iParam0, 0, 0);
		}
		iLocal_105 = 263;
		func_75(&iLocal_96);
		iLocal_95 = 9;
	}
}

// Position - 0x65AF
bool func_73(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = func_74(iParam0);
	if (iVar0 == -1) {
		return false;
	}
	if (!player::is_player_playing(player::get_player_index())) {
		return false;
	}
	if (func_80(0)) {
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

// Position - 0x6667
int func_74(int iParam0) {
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

// Position - 0x66A2
void func_75(int *iParam0) {
	int iVar0;

	if (*iParam0 == -1) {
		return;
	}
	iVar0 = func_74(*iParam0);
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

// Position - 0x66F9
void func_76(int iParam0, int iParam1, char *sParam2, int iParam3, char *sParam4, int iParam5, int iParam6) {
	int iVar0;

	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("context_controller")) < 1) {
	}
	if (streaming::is_player_switch_in_progress()) {
		if (*iParam0 != -1) {
			func_75(iParam0);
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

// Position - 0x6824
bool func_77(var uParam0) { return true; }

// Position - 0x682D
void func_78(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x6844
var func_79() { return Global_68131; }

// Position - 0x6850
bool func_80(int iParam0) {
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

// Position - 0x68AA
var func_81(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x68E5
bool func_82() { return gameplay::get_game_timer() <= Global_17290.f_5745 + 100; }

// Position - 0x68FA
bool func_83() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("player_timetable_scene")) > 0) {
		return true;
	}
	return false;
}

// Position - 0x6914
bool func_84(int iParam0) {
	if (iParam0) {
		return Global_17151.f_4 && Global_17151.f_104 == 4;
	}
	return Global_17151.f_4;
}

// Position - 0x693D
void func_85(int *iParam0, int iParam1) { func_86(iParam0, iParam1); }

// Position - 0x694D
void func_86(var *uParam0, var uParam1) { *uParam0 |= uParam1; }

// Position - 0x695E
int func_87() { return 1; }

// Position - 0x6967
bool func_88() {
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

// Position - 0x6A71
bool func_89(int iParam0) {
	int iVar0;

	if (player::is_player_playing(player::player_id())) {
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				iVar0 = func_64();
				if (!func_66(iVar0)) {
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_96() || Global_100747 ||
						Global_25192 || func_95() || func_81(8, -1) || func_94() || func_93() || func_92() ||
						func_83() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 1:
					if (player::is_player_being_arrested(player::player_id(), 1) || func_96() || Global_25192 ||
						func_95() || func_81(8, -1) || func_92() || func_94() || func_93() || func_83() ||
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_96() || Global_100747 ||
						Global_25192 || func_95() || func_81(8, -1) || func_92() || func_94() || func_93() ||
						func_83() || Global_101700.f_6647.f_919[iVar0] == 5 || Global_36328 != -1) {
						return false;
					}
					break;

				case 3:
					if (ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_96() || Global_100747 ||
						Global_25192 || func_95() || func_81(8, -1) || func_94() || func_93() || func_83() ||
						Global_101700.f_6647.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 4:
					if (func_96() || player::get_player_wanted_level(player::player_id()) > 0 || func_81(8, -1) ||
						func_83() || func_91() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 5:
					if (func_81(8, -1) || func_94() || func_93() || func_91() || func_90()) {
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
							player::is_player_climbing(player::player_id()) || func_96() || Global_25192 || func_95() ||
							func_81(8, -1) || func_93() || func_92() || func_83() ||
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
						player::is_player_being_arrested(player::player_id(), 1) || func_96() || func_93() ||
						Global_100747 || Global_25192 || func_95() || Global_36912 || func_81(8, -1) || func_92() ||
						func_91() || func_83() || Global_101700.f_6647.f_919[iVar0] == 5) {
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
						player::is_player_climbing(player::player_id()) || func_96() || Global_100747 || Global_25192 ||
						func_95() || func_81(8, -1) || func_92() || func_91() || func_94() || func_93() || func_83()) {
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

// Position - 0x718E
var func_90() { return Global_91530.f_1; }

// Position - 0x719C
int func_91() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 13);
	}
	return 0;
}

// Position - 0x71C2
int func_92() {
	if (Global_69962) {
		return 1;
	}
	else if (Global_55816 && !Global_55822) {
		return 1;
	}
	return 0;
}

// Position - 0x71EC
bool func_93() { return Global_91543.f_304 > 0; }

// Position - 0x71FD
bool func_94() { return Global_91543.f_303 > 0; }

// Position - 0x720E
var func_95() { return Global_1315233; }

// Position - 0x721A
int func_96() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0x7236
bool func_97() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("stripperhome")) > 0) {
		return true;
	}
	return false;
}

// Position - 0x7250
var func_98() { return Global_87656; }

// Position - 0x725C
int func_99(int iParam0) {
	switch (iParam0) {
	case 0: return 1;

	case 1:
		if (func_101(6) || func_101(7)) {
			return 1;
		}
		else {
			return func_99(3);
		}
		break;

	case 2: return 1;

	case 3:
		if (func_115(5)) {
			if (func_89(4)) {
				return 1;
			}
		}
		break;
	}
	return 0;
}

// Position - 0x72CE
int func_100(int iParam0) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return 0;
	}
	return ui::does_blip_exist(Global_25501[iVar0 /*23*/].f_19);
}

// Position - 0x730A
bool func_101(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x7318
void func_102() {
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	vector3 vVar11;
	vector3 vVar14;
	float *fVar17;
	int iVar18;

	if (bLocal_131) {
		gameplay::clear_area_of_objects(vLocal_118, 25f, 0);
		if (ai::does_scenario_group_exist("Triathlon_1_Start") && iLocal_135 == 1) {
			ai::set_scenario_group_enabled("Triathlon_1_Start", 1);
		}
		if (ai::does_scenario_group_exist("Triathlon_2_Start") && iLocal_135 == 0) {
			ai::set_scenario_group_enabled("Triathlon_2_Start", 1);
		}
		if (ai::does_scenario_group_exist("Triathlon_3_Start") && iLocal_135 == 2) {
			ai::set_scenario_group_enabled("Triathlon_3_Start", 1);
		}
		if (!entity::does_entity_exist(iLocal_125)) {
			vVar1 = {func_106(iLocal_135 == 1, 2434.162f, 4282.774f, 35.5112f,
							  func_106(iLocal_135 == 0, -1231.203f, -2051.531f, 12.9317f,
									   func_106(iLocal_135 == 2, 1591.099f, 3814.026f, 33.2697f, 0f, 0f, 0f)))};
			fVar0 = func_105(iLocal_135 == 1, 264.0724f,
							 func_105(iLocal_135 == 0, 256.2876f, func_105(iLocal_135 == 2, 222.6197f, 0f)));
			iLocal_125 = object::create_object(joaat("prop_tri_table_01"), vVar1, 1, 1, 0);
			entity::set_entity_heading(iLocal_125, fVar0);
			entity::freeze_entity_position(iLocal_125, 1);
			streaming::set_model_as_no_longer_needed(joaat("prop_tri_table_01"));
		}
		if (!entity::does_entity_exist(iLocal_126)) {
			vLocal_121 = {func_106(iLocal_135 == 1, 2434.955f, 4282.711f, 35.5333f,
								   func_106(iLocal_135 == 0, -1230.361f, -2051.761f, 12.918f,
											func_106(iLocal_135 == 2, 1591.686f, 3813.401f, 33.3371f, 0f, 0f, 0f)))};
			fVar0 = func_105(iLocal_135 == 1, 264.3256f,
							 func_105(iLocal_135 == 0, 253.044f, func_105(iLocal_135 == 2, 220.7912f, 0f)));
			iLocal_126 = object::create_object(joaat("prop_chair_08"), vLocal_121, 1, 1, 0);
			entity::set_entity_heading(iLocal_126, fVar0);
			entity::freeze_entity_position(iLocal_126, 1);
			streaming::set_model_as_no_longer_needed(joaat("prop_chair_08"));
		}
		if (!entity::does_entity_exist(iLocal_127)) {
			vVar1.z += 0.54f;
			iLocal_127 = object::create_object(joaat("p_cs_clipboard"), vVar1, 1, 1, 0);
			entity::set_entity_rotation(iLocal_127, -90f, 0f, 90f, 2, 0);
			rope::activate_physics(iLocal_127);
			streaming::set_model_as_no_longer_needed(joaat("p_cs_clipboard"));
		}
		if (!entity::does_entity_exist(iLocal_129)) {
			fVar0 = func_105(iLocal_135 == 1, 79.9315f,
							 func_105(iLocal_135 == 0, 77.5972f, func_105(iLocal_135 == 2, 47.2081f, 0f)));
			iLocal_129 = ped::create_ped(4, joaat("a_m_y_roadcyc_01"), vLocal_121, fVar0, 1, 1);
			ped::set_ped_component_variation(iLocal_129, 0, 1, 0, 0);
			ped::set_ped_component_variation(iLocal_129, 4, 0, 3, 0);
			ped::set_ped_component_variation(iLocal_129, 3, 0, 2, 0);
			streaming::set_model_as_no_longer_needed(joaat("a_m_y_roadcyc_01"));
		}
		if (!entity::does_entity_exist(iLocal_128)) {
			if (iLocal_135 == 1) {
				vVar4 = {2433.74f, 4283.08f, 36.235f};
			}
			else if (iLocal_135 == 0) {
				vVar4 = {-1231.47f, -2051.23f, 13.68f};
			}
			else if (iLocal_135 == 2) {
				vVar4 = {1591.11f, 3814.46f, 33.99f};
			}
			iLocal_128 = object::create_object(joaat("prop_pencil_01"), vVar4, 1, 1, 0);
			streaming::set_model_as_no_longer_needed(joaat("prop_pencil_01"));
		}
		if (!ped::is_ped_injured(iLocal_129)) {
			if (ai::does_scenario_exist_in_area(vLocal_121, 3f, 1)) {
				ai::task_use_nearest_scenario_to_coord_warp(iLocal_129, vLocal_121, 2f, 0);
			}
			else {
				switch (iLocal_135) {
				case 0:
					vVar7 = {-1230.37f, -2051.766f, 13.4441f};
					fVar10 = 69.8085f;
					break;

				case 1:
					vVar7 = {2435.042f, 4282.716f, 36.0357f};
					fVar10 = 83.5805f;
					break;

				case 2:
					vVar7 = {1591.71f, 3813.355f, 33.8383f};
					fVar10 = 41.0251f;
					break;
				}
				ai::task_start_scenario_at_position(iLocal_129, "PROP_HUMAN_SEAT_CHAIR", vVar7, fVar10, -1, 0, 1);
			}
		}
		iVar18 = 0;
		while (iVar18 < iLocal_136) {
			func_104(iLocal_135, iVar18, &vVar11, &vVar14, &fVar17);
			if (!func_103(vVar11)) {
				iLocal_136[iVar18] = pathfind::add_navmesh_blocking_object(vVar11, vVar14, fVar17, 0, 7);
			}
			iVar18++;
		}
	}
}

// Position - 0x7707
int func_103(vector3 vParam0) {
	if (vParam0.x == 0f && vParam0.y == 0f && vParam0.z == 0f) {
		return 1;
	}
	return 0;
}

// Position - 0x7731
void func_104(int iParam0, int iParam1, var *uParam2, var *uParam3, float *fParam4) {
	switch (iParam0) {
	case 0:
		switch (iParam1) {
		case 0:
			*uParam2 = {-1285.288f, -2039.943f, 1.60045f};
			*uParam3 = {4f, 10.2f, 10f};
			*fParam4 = 2.3168f;
			break;

		case 1:
			*uParam2 = {-1268.667f, -2024.78f, 1.5678f};
			*uParam3 = {4f, 10.2f, 10f};
			*fParam4 = 2.4f;
			break;

		case 2:
			*uParam2 = {-1227.085f, -2053.458f, 12.98837f};
			*uParam3 = {5f, 14f, 10f};
			*fParam4 = 2.6f;
			break;

		case 3:
			*uParam2 = {-1210.865f, -2052.289f, 13f};
			*uParam3 = {1.96f, 3f, 10f};
			*fParam4 = 2.865f;
			break;

		case 4:
			*uParam2 = {-1215.452f, -2065.881f, 13f};
			*uParam3 = {1.63f, 2.9f, 10f};
			*fParam4 = 2.685f;
			break;
		}
		break;

	case 1:
		switch (iParam1) {
		case 0:
			*uParam2 = {2384.317f, 4268.876f, 30.44363f};
			*uParam3 = {4f, 10f, 10f};
			*fParam4 = 6.047f;
			break;

		case 1:
			*uParam2 = {2384.975f, 4289.719f, 30.32816f};
			*uParam3 = {4f, 10f, 10f};
			*fParam4 = 3.238f;
			break;

		case 2:
			*uParam2 = {2436.907f, 4282.85f, 35.5872f};
			*uParam3 = {4.5f, 13f, 10f};
			*fParam4 = 3.019f;
			break;

		case 3:
			*uParam2 = {2411.25f, 4298.006f, 34.98311f};
			*uParam3 = {2.1f, 3.2f, 10f};
			*fParam4 = 1.19f;
			break;

		case 4:
			*uParam2 = {0f, 0f, 0f};
			*uParam3 = {1.63f, 2.9f, 0f};
			*fParam4 = 2.685f;
			break;
		}
		break;

	case 2:
		switch (iParam1) {
		case 0:
			*uParam2 = {1568.879f, 3829.782f, 30.95098f};
			*uParam3 = {4f, 9.9f, 10f};
			*fParam4 = 2.107f;
			break;

		case 1:
			*uParam2 = {1586.192f, 3842.765f, 30.538f};
			*uParam3 = {4f, 9.9f, 10f};
			*fParam4 = 2.295f;
			break;

		case 2:
			*uParam2 = {1594.002f, 3810.718f, 33.55904f};
			*uParam3 = {4f, 12f, 10f};
			*fParam4 = 2.251f;
			break;

		case 3:
			*uParam2 = {1604.679f, 3828.308f, 33.82485f};
			*uParam3 = {1.96f, 3f, 10f};
			*fParam4 = 0.876f;
			break;

		case 4:
			*uParam2 = {1607.135f, 3824.388f, 33.06039f};
			*uParam3 = {1.63f, 2.9f, 0f};
			*fParam4 = 0f;
			break;
		}
		break;
	}
}

// Position - 0x7A69
float func_105(bool bParam0, float fParam1, float fParam2) {
	if (bParam0) {
		return fParam1;
	}
	return fParam2;
}

// Position - 0x7A80
Vector3 func_106(bool bParam0, vector3 vParam1, vector3 vParam4) {
	if (bParam0) {
		return vParam1;
	}
	return vParam4;
}

// Position - 0x7A9B
bool func_107() {
	if (bLocal_131) {
		if (!streaming::has_model_loaded(joaat("prop_tri_table_01"))) {
			return false;
		}
		if (!streaming::has_model_loaded(joaat("prop_chair_08"))) {
			return false;
		}
		if (!streaming::has_model_loaded(joaat("a_m_y_roadcyc_01"))) {
			return false;
		}
		if (!streaming::has_anim_dict_loaded("amb@prop_human_seat_chair@male@generic@idle_a")) {
			return false;
		}
		if (!streaming::has_model_loaded(joaat("p_cs_clipboard"))) {
			return false;
		}
		if (!streaming::has_model_loaded(joaat("prop_pencil_01"))) {
			return false;
		}
	}
	return true;
}

// Position - 0x7B0E
void func_108() {
	if (bLocal_131) {
		streaming::request_model(joaat("prop_tri_table_01"));
		streaming::request_model(joaat("prop_chair_08"));
		streaming::request_model(joaat("a_m_y_roadcyc_01"));
		streaming::request_model(joaat("p_cs_clipboard"));
		streaming::request_model(joaat("prop_pencil_01"));
		streaming::request_anim_dict("amb@prop_human_seat_chair@male@generic@idle_a");
		switch (iLocal_135) {
		case 0:
			if (!streaming::is_ipl_active("AP1_04_TriAf01")) {
				streaming::request_ipl("AP1_04_TriAf01");
			}
			break;

		case 1:
			if (!streaming::is_ipl_active("CS2_06_TriAf02")) {
				streaming::request_ipl("CS2_06_TriAf02");
			}
			break;

		case 2:
			if (!streaming::is_ipl_active("CS4_04_TriAf03")) {
				streaming::request_ipl("CS4_04_TriAf03");
			}
			break;
		}
	}
}

// Position - 0x7BAE
void func_109(int *iParam0, int iParam1) { *iParam0 |= iParam1; }

// Position - 0x7BBF
void func_110(int iParam0) { iLocal_95 = iParam0; }

// Position - 0x7BCB
void func_111(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x7CD4
int func_112() {
	if (gameplay::is_pc_version()) {
		if (gameplay::_0xD10282B6E3751BA0() == 1f) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x7CF1
int func_113() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 20);
	}
	return 0;
}

// Position - 0x7D17
bool func_114(int iParam0, int iParam1) {
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

// Position - 0x7D64
bool func_115(int iParam0) { return func_116(iParam0, Global_35781); }

// Position - 0x7D75
int func_116(int iParam0, int iParam1) {
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

// Position - 0x7F56
bool func_117(int *iParam0, int iParam1) { return (iParam0 & iParam1) != 0; }

// Position - 0x7F65
void func_118() {
	StringCopy(&Local_53, "TriathlonSP", 64);
	sLocal_101 = "PLAY_TRIATH";
	iLocal_99 = 17;
	func_85(&iLocal_94, 4194304);
	iLocal_97 = 20500;
	bLocal_131 = true;
	if (!entity::is_entity_dead(player::get_player_ped(player::get_player_index()), 0)) {
	}
	iLocal_135 = func_119(vLocal_90, &vLocal_118);
	if (func_71() || func_69()) {
	}
	else {
		iLocal_132 = 1;
	}
	switch (iLocal_135) {
	case 0: iLocal_105 = 107; break;

	case 1: iLocal_105 = 108; break;

	case 2:
		iLocal_105 = 109;
		if (iLocal_132) {
			func_85(&iLocal_94, 8388608);
			func_72(iLocal_105);
		}
		break;
	}
	if (Global_101700.f_18970.f_8 == -1) {
		Global_101700.f_18970.f_8 = 0;
	}
	if (Global_101700.f_18970.f_8 < iLocal_135) {
		func_85(&iLocal_94, 8388608);
	}
}

// Position - 0x8039
int func_119(vector3 vParam0, var *uParam3) {
	int iVar0;
	vector3 vVar1[3];
	float fVar11;
	int iVar12;
	float fVar13;

	iVar0 = 0;
	vVar1[1 /*3*/] = {func_120(1)};
	vVar1[0 /*3*/] = {func_120(0)};
	vVar1[2 /*3*/] = {func_120(2)};
	fVar11 = system::vdist2(vVar1[0 /*3*/], vParam0);
	fVar13 = 0f;
	iVar12 = 1;
	while (iVar12 <= 3 - 1) {
		fVar13 = system::vdist2(vParam0, vVar1[iVar12 /*3*/]);
		if (fVar13 < fVar11) {
			iVar0 = iVar12;
			fVar11 = fVar13;
		}
		iVar12++;
	}
	*uParam3 = {vVar1[iVar0 /*3*/]};
	return iVar0;
}

// Position - 0x80C5
Vector3 func_120(int iParam0) {
	if (iParam0 >= 3 || iParam0 <= -1) {
		return 0f, 0f, 0f;
	}
	switch (iParam0) {
	case 1: return 2434.415f, 4284.25f, 35.5059f;

	case 0: return -1230.622f, -2049.97f, 12.8882f;

	case 2: return 1591.686f, 3813.401f, 33.3371f;
	}
	return 0f, 0f, 0f;
}

// Position - 0x8139
void func_121(int *iParam0, int iParam1) { func_122(iParam0, iParam1); }

// Position - 0x8149
void func_122(int *iParam0, var uParam1) { *iParam0 -= (*iParam0 & uParam1); }

// Position - 0x815E
void func_123(int iParam0) {
	if (iParam0) {
		if (iLocal_105 != 263) {
			func_111(iLocal_105, 0, 0);
		}
	}
	func_75(&iLocal_96);
	if (func_117(iLocal_94, 2)) {
		func_4();
		func_121(&iLocal_94, 2);
		func_29(&iLocal_98);
	}
	iLocal_98 = -1;
	func_124();
	script::terminate_this_thread();
}

// Position - 0x81A7
void func_124() {
	func_121(&iLocal_94, 4);
	func_125();
	if (script::is_thread_active(iLocal_52)) {
		player::force_cleanup_for_thread_with_this_id(iLocal_52, 3);
	}
	if (!gameplay::is_string_null(&Local_69)) {
		if (ui::get_length_of_literal_string(&Local_69) != 0) {
			script::set_script_as_no_longer_needed(&Local_69);
		}
	}
}

// Position - 0x81E4
void func_125() {
	int iVar0;

	if (fLocal_110 > fLocal_102 * fLocal_102) {
		if (entity::does_entity_exist(iLocal_124)) {
			object::delete_object(&iLocal_124);
		}
	}
	func_126(1, -1);
	iVar0 = 0;
	while (iVar0 < iLocal_136) {
		if (pathfind::does_navmesh_blocking_object_exist(iLocal_136[iVar0])) {
			pathfind::remove_navmesh_blocking_object(iLocal_136[iVar0]);
		}
		iVar0++;
	}
	ped::remove_scenario_blocking_area(iLocal_130, 0);
	if (!iLocal_133) {
		cam::stop_gameplay_hint(0);
		iLocal_133 = 1;
	}
}

// Position - 0x824B
void func_126(int iParam0, int iParam1) {
	int iVar0;

	if (!func_128(&iVar0, 0, iParam1)) {
		return;
	}
	if (Global_17290.f_7899) {
		ui::reset_hud_component_values(15);
		Global_17290.f_7899 = 0;
	}
	ui::_0x55598D21339CB998(0f);
	if (Global_17290.f_5498[iVar0]) {
		ui::clear_additional_text(9, 0);
		Global_17290.f_5498[iVar0] = 0;
	}
	if (Global_17290.f_5484[iVar0]) {
		graphics::set_streamed_texture_dict_as_no_longer_needed("CommonMenu");
		Global_17290.f_5484[iVar0] = 0;
	}
	if (Global_17290.f_5491[iVar0]) {
		graphics::set_streamed_texture_dict_as_no_longer_needed("MPShopSale");
		Global_17290.f_5491[iVar0] = 0;
	}
	if (iParam0) {
		func_127(&Global_17290.f_5530[iVar0 /*10*/]);
		Global_17290.f_5591[iVar0] = 0;
	}
	else {
		Global_17290.f_5591[iVar0] = 0;
	}
}

// Position - 0x8309
void func_127(int *iParam0) {
	if (uParam0->f_9 != 0) {
		if (graphics::has_scaleform_movie_loaded(*uParam0)) {
			graphics::set_scaleform_movie_as_no_longer_needed(uParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

// Position - 0x8332
int func_128(int *iParam0, int iParam1, int iParam2) {
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;

	if (iParam2 == -1) {
		if (network::network_is_game_in_progress() && network::network_get_this_script_is_network_script()) {
			iParam2 = network::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, script::get_this_script_name(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = gameplay::get_hash_key(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6) {
		if (Global_17290.f_5591[iVar17] == iVar16) {
			*iParam0 = iVar17;
			return 1;
		}
		else if (Global_17290.f_5591[iVar17] == 0) {
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (iParam1) {
		if (iVar18 != -1) {
			Global_17290.f_5591[iVar18] = iVar16;
			*iParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}
