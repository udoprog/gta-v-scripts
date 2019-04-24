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
struct<13> Local_119 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
bool bLocal_132 = 0;
int iLocal_133 = 0;
vector3 vLocal_134 = {0f, 0f, 0f};
vector3 vLocal_137 = {0f, 0f, 0f};
int iLocal_140 = 0;
int iLocal_141 = 0;
int iLocal_142 = 0;
int iLocal_143 = 0;
int iLocal_144 = 0;
int iLocal_145 = 0;
bool bLocal_146 = 0;
int iLocal_147 = 0;
int iLocal_148 = 0;
struct<7> Local_149 = {
	0, 0, 0, 0, 0, 0, 0
};
int iLocal_156 = 0;
int iLocal_157 = 0;
int iLocal_158 = 0;
int iLocal_159 = 0;
int iLocal_160 = 0;
int iLocal_161 = 0;
var uLocal_162 = 0;
var uLocal_163 = 0;
var uLocal_164 = 0;
var uLocal_165 = 0;
int iScriptParam_0 = 0;
#pragma endregion //}

void __EntryFunction__() {
	struct<18> Var0;
	bool bVar23;
	float fVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;

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
	bLocal_132 = true;
	bLocal_146 = true;
	iLocal_147 = -1;
	Var0.f_1 = 5;
	Var0.f_17 = 5;
	if (entity::does_entity_exist(iScriptParam_0)) {
		vLocal_90 = {entity::get_entity_coords(iScriptParam_0, 1)};
		iLocal_156 = iScriptParam_0;
		Var0.f_1[0 /*3*/] = {vLocal_90};
		iLocal_118 = entity::get_entity_model(iLocal_156);
	}
	else {
		iLocal_156 = iScriptParam_0;
		Var0.f_1[0 /*3*/] = {vLocal_90};
	}
	uLocal_86 = uLocal_86;
	Local_69 = {Local_69};
	bVar23 = false;
	if (player::has_force_cleanup_occurred(82)) {
		func_118(1);
	}
	iLocal_85 = player::get_player_ped(player::player_id());
	iLocal_95 = 0;
	func_116(&Global_100353, 0);
	func_115();
	if (func_114(iLocal_94, 1)) {
		iLocal_100 = 10;
	}
	else {
		iLocal_100 = 9;
	}
	while (!Global_31554) {
		system::wait(0);
	}
	if (!func_114(iLocal_94, 8)) {
		if (!func_112(iLocal_100)) {
			if (func_111(0, iLocal_99)) {
				func_118(0);
			}
			else {
				func_118(1);
			}
		}
	}
	if (iLocal_99 != -1) {
		if (!func_111(0, iLocal_99)) {
			func_118(1);
		}
	}
	if (func_114(iLocal_94, 8388608)) {
		func_118(1);
	}
	if (func_114(iLocal_94, 524288) && func_110() && !func_109()) {
		func_118(1);
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(script::get_hash_of_this_script_name()) > 1 &&
		!func_114(iLocal_94, 4194304)) {
		if (iLocal_105 != 263) {
			func_108(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_107(10);
	}
	while (true) {
		if (!func_114(iLocal_94, 268435456)) {
			fVar24 = 0f;
			if (gameplay::get_ground_z_for_3d_coord(Var0.f_1[0 /*3*/], &fVar24, 0)) {
				if (fVar24 != 0f) {
					Var0.f_1[0 /*3*/].f_2 = fVar24;
					func_106(&iLocal_94, 268435456);
				}
			}
		}
		iLocal_85 = player::get_player_ped(player::player_id());
		if (func_114(iLocal_94, 1048576)) {
			if (entity::is_entity_dead(iLocal_85, 0)) {
				func_118(1);
			}
		}
		if (entity::does_entity_exist(iLocal_85) && !entity::is_entity_dead(iLocal_85, 0)) {
			vLocal_87 = {entity::get_entity_coords(iLocal_85, 1)};
			uLocal_93 = system::vdist2(vLocal_87, Var0.f_1[0 /*3*/]);
			uLocal_93 = uLocal_93;
			vLocal_111 = {vLocal_87};
			vLocal_114 = {Var0.f_1[0 /*3*/]};
			vLocal_111.z = 0f;
			vLocal_114.z = 0f;
			fLocal_110 = system::vdist2(vLocal_111, vLocal_114);
			switch (iLocal_95) {
			case 0:
				if (func_112(iLocal_100) || func_114(iLocal_94, 16) && !func_114(iLocal_94, 524288)) {
					iLocal_98 = -1;
					func_105();
					func_107(1);
				}
				else {
					if (fLocal_110 > fLocal_102 * fLocal_102) {
						if (iLocal_105 != 263) {
							func_108(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_107(10);
					}
					if (vLocal_87.z - Var0.f_1[0 /*3*/].f_2 > 500f) {
					}
				}
				break;

			case 1:
				if (func_104()) {
					iLocal_103 = iLocal_103;
					func_107(3);
				}
				else {
					func_105();
				}
				break;

			case 3:
				if (network::network_is_in_session()) {
					func_118(1);
					return;
				}
				if (!func_112(iLocal_100)) {
					if (!func_114(iLocal_94, 8)) {
						bVar25 = true;
						if (gameplay::are_strings_equal(&Global_91491.f_3, &Local_69)) {
							Local_69 = {Local_53};
							bVar25 = false;
						}
						if (bVar25) {
							func_118(0);
							break;
						}
					}
				}
				if (!func_114(iLocal_94, 4)) {
					func_101();
					func_106(&iLocal_94, 4);
				}
				if (fLocal_110 > fLocal_102 * fLocal_102 && !Global_91525) {
					if (iLocal_105 != 263) {
						if (func_100(6) && !func_99(iLocal_105)) {
						}
						else {
							func_108(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
					}
					func_107(10);
				}
				else {
					Local_69 = {Local_53};
					bVar26 = !func_114(iLocal_94, 64);
					func_116(&iLocal_94, 128);
					if (!func_98(3) && !Global_91525) {
						if (func_114(iLocal_94, 2097152)) {
							if ((!func_114(iLocal_94, 1) || !entity::does_entity_exist(func_97())) && !Global_91525) {
								func_107(10);
								break;
							}
						}
					}
					if (func_114(iLocal_94, 524288) && func_110() && !func_109()) {
						func_118(1);
					}
					if (func_96()) {
						func_118(1);
					}
					if (!func_88(6) || Global_100747 || func_87()) {
						bVar26 = false;
					}
					if (func_114(iLocal_94, 1)) {
						if (!func_86()) {
							func_84(&iLocal_94, 128);
							bVar26 = false;
						}
					}
					if (func_83(1)) {
						bVar26 = false;
					}
					if (Global_69702) {
						bVar26 = false;
					}
					if (func_82()) {
						bVar26 = false;
					}
					if (streaming::is_player_switch_in_progress()) {
						bVar26 = false;
					}
					if (func_81() || func_80(8, -1)) {
						bVar26 = false;
					}
					if (!player::can_player_start_mission(player::player_id())) {
						bVar26 = false;
					}
					if (!player::is_player_script_control_on(player::player_id())) {
						bVar26 = false;
					}
					if (func_79(0) || func_78()) {
						bVar26 = false;
					}
					if (bVar26) {
						if (!entity::is_entity_at_coord(iLocal_85, Var0.f_1[0 /*3*/], fLocal_117, fLocal_117, 2f, 0, 1,
														iLocal_103)) {
							bVar26 = false;
						}
						if (entity::is_entity_dead(iLocal_156, 0)) {
							iLocal_156 = object::get_closest_object_of_type(vLocal_90, 2f, iLocal_118, 1, 0, 1);
							func_84(&iLocal_94, 128);
							bVar26 = false;
						}
						else {
							vLocal_137 = {entity::get_offset_from_entity_in_world_coords(iLocal_156, vLocal_134)};
							if (func_77(&Local_119, vLocal_87, vLocal_137, iLocal_156)) {
								bLocal_132 = false;
							}
							else if (Local_119.f_12 == 1) {
								bLocal_132 = true;
							}
							if (bLocal_132) {
								bVar26 = false;
							}
						}
						if (!iLocal_133) {
							bVar26 = false;
						}
						if (interior::get_interior_from_entity(player::player_ped_id()) != iLocal_140) {
							bVar26 = false;
						}
						if (!player::is_player_control_on(player::player_id())) {
							bVar26 = false;
						}
						if (bVar26) {
							controls::set_input_exclusive(0, 51);
							if (func_76(uLocal_86)) {
								if (iLocal_96 == -1) {
									func_75(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
									func_84(&iLocal_94, 2048);
								}
								else if (!func_114(iLocal_94, 2048) || !ui::is_help_message_being_displayed()) {
									func_74(&iLocal_96);
									func_116(&iLocal_94, 2048);
								}
								if (func_72(iLocal_96, 1)) {
									sLocal_101 = sLocal_101;
									func_74(&iLocal_96);
									func_116(&iLocal_94, 2048);
									script::request_script(&Local_69);
									player::set_player_control(player::player_id(), 0, 56);
									func_107(5);
								}
							}
							else {
								sLocal_101 = sLocal_101;
								func_74(&iLocal_96);
								func_116(&iLocal_94, 2048);
								script::request_script(&Local_69);
								player::set_player_control(player::player_id(), 0, 56);
								func_107(5);
							}
						}
					}
					if (!bVar26) {
						if (iLocal_96 != -1) {
							func_74(&iLocal_96);
							func_116(&iLocal_94, 2048);
							ui::clear_help(0);
						}
					}
				}
				func_37();
				break;

			case 5:
				controls::set_input_exclusive(0, 51);
				if (script::has_script_loaded(&Local_69)) {
					if (iLocal_96 != -1) {
						func_74(&iLocal_96);
					}
					iVar27 = 2;
					bVar23 = false;
					if (func_114(iLocal_94, 1)) {
						if (func_100(6) || func_100(7)) {
							iVar27 = 1;
							bVar23 = true;
						}
					}
					if (iVar27 != 1) {
						iVar27 = func_34(&iLocal_98, 6, iLocal_100, 0, 0);
					}
					if (iVar27 == 1) {
						if (player::is_player_playing(player::player_id())) {
							player::clear_player_wanted_level(player::player_id());
						}
						func_33();
						if (Global_36912) {
							func_24(player::player_ped_id());
						}
						player::set_player_control(player::player_id(), 1, 56);
						iLocal_52 = func_23();
						func_84(&iLocal_94, 2);
						func_107(6);
						func_19(&iLocal_107);
						if (iLocal_99 != -1) {
							func_18(iLocal_99);
							func_15(func_17(iLocal_99), 0, 0);
						}
					}
					else if (iVar27 == 2) {
						func_14();
					}
					else if (iVar27 == 0) {
						func_107(10);
					}
				}
				else {
					func_14();
				}
				break;

			case 6:
				if (func_114(Global_100353, 262144)) {
					func_116(&Global_100353, 262144);
					func_13();
				}
				if (func_114(iLocal_94, 2097152)) {
					if (!func_98(3) && !script::is_thread_active(iLocal_52)) {
						func_107(10);
					}
				}
				if (!script::is_thread_active(iLocal_52)) {
					stats::playstats_oddjob_done(system::round(func_9(&iLocal_107) * 1000f), iLocal_99, 0);
					func_8(&iLocal_107);
					func_116(&iLocal_94, 256);
					func_7();
					if (bVar23) {
						func_116(&iLocal_94, 2);
					}
					else if (func_114(iLocal_94, 2)) {
						if (func_114(Global_100353, 0)) {
							func_6(&iLocal_98);
							iLocal_98 = -1;
							func_116(&iLocal_94, 2);
						}
						else {
							func_6(&iLocal_98);
							iLocal_98 = -1;
							func_116(&iLocal_94, 2);
						}
					}
					func_107(0);
					if (iLocal_99 != -1) {
						if (func_114(Global_100353, 0)) {
							stats::playstats_mission_checkpoint(func_17(iLocal_99), 0, Global_91528, 0);
							func_5(func_17(iLocal_99), 0, Global_91528, 1, 0);
						}
						else {
							stats::playstats_mission_checkpoint(func_17(iLocal_99), 0, Global_91528, 0);
							func_5(func_17(iLocal_99), 0, Global_91528, 0, 0);
						}
					}
					func_4();
					func_116(&Global_100353, 0);
					if (func_114(iLocal_94, 16777216)) {
						func_118(1);
					}
					if (iLocal_99 != -1) {
						if (Global_101700.f_8044) {
							if (!func_111(0, iLocal_99)) {
								func_118(1);
							}
						}
					}
				}
				func_3();
				break;

			case 8: func_107(0); break;

			case 10: func_118(1); break;

			case 9:
				if (fLocal_110 > fLocal_102 * fLocal_102) {
					if (iLocal_105 != 263) {
						func_108(iLocal_105, 1, 0);
						iLocal_105 = 263;
					}
					func_107(10);
				}
				break;

			case 7:
				func_2();
				if (iLocal_105 != 263) {
					func_108(iLocal_105, 0, 0);
				}
				if (iLocal_96 != -1) {
					func_74(&iLocal_96);
				}
				if (!gameplay::is_string_null_or_empty(sLocal_101)) {
					if (func_1(sLocal_101)) {
						ui::clear_help(1);
					}
				}
				func_107(4);
				break;

			case 4:
				if (iLocal_104 % 150 == 0) {
					if (!ped::is_ped_injured(player::player_ped_id())) {
						if (iLocal_106 == 2) {
							if (iLocal_106 == 2) {
								if (func_112(iLocal_100) && func_111(0, iLocal_99)) {
									func_115();
									if (iLocal_105 != 263) {
										func_108(iLocal_105, 1, 0);
									}
									func_107(0);
								}
							}
						}
						else if (iLocal_106 == 0) {
							if (fLocal_110 > fLocal_102 * fLocal_102) {
								if (iLocal_105 != 263) {
									func_108(iLocal_105, 1, 0);
									iLocal_105 = 263;
								}
								func_107(10);
							}
						}
						else if (iLocal_106 == 1) {
							if (fLocal_110 > (80f + 5f) * (80f + 5f)) {
								func_115();
								if (iLocal_105 != 263) {
									func_108(iLocal_105, 1, 0);
								}
								func_107(0);
							}
						}
					}
					else {
						func_108(iLocal_105, 1, 0);
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

// Position - 0xAD7
bool func_1(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0xAEA
void func_2() {
	if (bLocal_146) {
		if (iLocal_141 != 0) {
			streaming::set_model_as_no_longer_needed(iLocal_141);
		}
		if (iLocal_142 != 0) {
			streaming::set_model_as_no_longer_needed(iLocal_142);
		}
		streaming::set_model_as_no_longer_needed(joaat("prop_dart_1"));
	}
}

// Position - 0xB18
void func_3() {}

// Position - 0xB20
void func_4() {}

// Position - 0xB28
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

// Position - 0xB6C
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

// Position - 0xBA9
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

// Position - 0xBEB
void func_8(int *iParam0) {
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

// Position - 0xC01
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

// Position - 0xC40
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

// Position - 0xC98
bool func_11(var *uParam0) { return gameplay::is_bit_set(*uParam0, 2); }

// Position - 0xCA8
bool func_12(var *uParam0) { return gameplay::is_bit_set(*uParam0, 1); }

// Position - 0xCB8
int func_13() { return 1; }

// Position - 0xCC1
void func_14() {}

// Position - 0xCC9
void func_15(char *sParam0, int iParam1, int iParam2) {
	if (!gameplay::is_string_null_or_empty(&Global_88894)) {
		stats::playstats_mission_over(&Global_88894, 0, 0, 0, 1, 0);
		StringCopy(&Global_88894, "", 64);
	}
	StringCopy(&Global_88894, sParam0, 64);
	stats::playstats_mission_started(sParam0, iParam1, iParam2, func_16(0));
}

// Position - 0xD0A
int func_16(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return 1;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0xD35
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

// Position - 0xE73
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

// Position - 0xECA
void func_19(var *uParam0) {
	if (!func_12(uParam0)) {
		func_22(uParam0);
	}
	else {
		func_20(uParam0);
	}
}

// Position - 0xEEB
void func_20(var *uParam0) { func_21(uParam0, 0f); }

// Position - 0xEFA
void func_21(int *iParam0, float fParam1) {
	uParam0->f_1 = func_10(gameplay::is_bit_set(*uParam0, 4)) - fParam1;
	gameplay::set_bit(uParam0, 1);
	gameplay::clear_bit(iParam0, 2);
	iParam0->f_2 = 0f;
}

// Position - 0xF28
void func_22(var *uParam0) {
	if (!func_12(uParam0)) {
		func_20(uParam0);
	}
}

// Position - 0xF40
var func_23() {
	vector3 vVar0;
	var uVar3;

	vVar0 = {entity::get_entity_rotation(iLocal_156, 2)};
	Local_149 = {entity::get_entity_coords(iLocal_156, 1)};
	Local_149.f_3 = vVar0.z;
	Local_149.f_4 = iLocal_156;
	if (!gameplay::is_bit_set(Global_101661, 10)) {
		Local_149.f_6 = iLocal_142;
		Local_149.f_5 = iLocal_143;
	}
	else {
		Local_149.f_6 = iLocal_141;
		Local_149.f_5 = iLocal_144;
	}
	uVar3 = system::start_new_script_with_args(&Local_53, &Local_149, 7, iLocal_97);
	script::set_script_as_no_longer_needed(&Local_53);
	return uVar3;
}

// Position - 0xFAA
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

// Position - 0x1003
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

// Position - 0x1086
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

// Position - 0x10B7
void func_27(int iParam0, int iParam1, int iParam2) { func_28(iParam0, iParam1, iParam2, 0, 0); }

// Position - 0x10CB
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

// Position - 0x1142
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

// Position - 0x1173
bool func_30(int iParam0, int iParam1, int iParam2) {
	if (func_31(iParam0, iParam1, iParam2) == -1) {
		return false;
	}
	return true;
}

// Position - 0x118E
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

// Position - 0x11DA
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

// Position - 0x1223
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

// Position - 0x12A0
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
		if (!func_112(iParam2)) {
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

// Position - 0x13D7
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

// Position - 0x1426
bool func_36(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_112(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x1448
void func_37() {
	var uVar0[25];
	int iVar26;
	int iVar27;
	bool bVar28;
	vector3 vVar29;
	float fVar32;

	bVar28 = false;
	if (bLocal_146) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			vVar29 = {entity::get_entity_coords(player::player_ped_id(), 1)};
		}
		fVar32 = system::vdist2(vVar29, vLocal_90);
		if (iLocal_147 == 0) {
			if (fVar32 < 10f * 10f) {
				iLocal_147 = 1;
				if (!func_100(6) && !func_100(7)) {
					if (!entity::is_entity_dead(iLocal_143, 0)) {
						entity::freeze_entity_position(iLocal_143, 0);
						ai::task_look_at_entity(iLocal_143, iLocal_144, -1, 2049, 3);
						ai::task_start_scenario_in_place(iLocal_143, "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
					}
					if (!entity::is_entity_dead(iLocal_144, 0)) {
						entity::freeze_entity_position(iLocal_144, 0);
						ai::task_look_at_entity(iLocal_144, iLocal_143, -1, 2049, 3);
						ai::task_start_scenario_in_place(iLocal_144, "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
					}
				}
				else {
					if (!entity::is_entity_dead(iLocal_143, 0)) {
						entity::freeze_entity_position(iLocal_143, 0);
						if (ai::does_scenario_exist_in_area(1991.677f, 3044.957f, 46.21505f, 0.5f, 1)) {
							ai::task_use_nearest_scenario_to_coord(iLocal_143, 1991.677f, 3044.957f, 46.21505f, 0.5f,
																   0);
						}
						else {
							ai::task_follow_nav_mesh_to_coord(iLocal_143, 1991.677f, 3044.957f, 46.21505f, 1f, 20000,
															  1048576000, 0, 1193033728);
						}
						entity::set_ped_as_no_longer_needed(&iLocal_143);
					}
					if (!entity::is_entity_dead(iLocal_144, 0)) {
						entity::freeze_entity_position(iLocal_144, 0);
						if (ai::does_scenario_exist_in_area(1990.37f, 3045.121f, 46.21502f, 0.5f, 1)) {
							ai::task_use_nearest_scenario_to_coord(iLocal_144, 1990.37f, 3045.121f, 46.21502f, 0.5f, 0);
						}
						else {
							ai::task_follow_nav_mesh_to_coord(iLocal_144, 1990.37f, 3045.121f, 46.21502f, 1f, 20000,
															  1048576000, 0, 1193033728);
						}
						entity::set_ped_as_no_longer_needed(&iLocal_144);
					}
				}
			}
		}
		else if (iLocal_147 == 1) {
			if (fVar32 >= 10f * 10f) {
				iLocal_147 = 0;
				if (!func_100(6) && !func_100(7)) {
					if (!entity::is_entity_dead(iLocal_143, 0)) {
						ai::task_stand_still(iLocal_143, -1);
						if (!entity::is_entity_attached(iLocal_143)) {
							entity::freeze_entity_position(iLocal_143, 1);
						}
					}
					if (!entity::is_entity_dead(iLocal_144, 0)) {
						ai::task_stand_still(iLocal_144, -1);
						if (!entity::is_entity_attached(iLocal_144)) {
							entity::freeze_entity_position(iLocal_144, 1);
						}
					}
				}
				else {
					if (!entity::is_entity_dead(iLocal_143, 0)) {
						entity::set_entity_coords(iLocal_143, 1991.677f, 3044.957f, 46.21505f, 1, 0, 0, 1);
						ai::task_stand_still(iLocal_143, -1);
						if (!entity::is_entity_attached(iLocal_143)) {
							entity::freeze_entity_position(iLocal_143, 1);
						}
					}
					if (!entity::is_entity_dead(iLocal_144, 0)) {
						entity::set_entity_coords(iLocal_144, 1990.37f, 3045.121f, 46.21502f, 1, 0, 0, 1);
						ai::task_stand_still(iLocal_144, -1);
						if (!entity::is_entity_attached(iLocal_144)) {
							entity::freeze_entity_position(iLocal_144, 1);
						}
					}
				}
			}
		}
	}
	if (!iLocal_159) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (ped::is_ped_shooting(player::player_ped_id()) ||
				player::is_player_wanted_level_greater(player::get_player_index(), 0) ||
				ped::is_any_ped_shooting_in_area(937.0616f, -117.8927f, 72.9163f, 1021.849f, -120.5357f, 72.9163f, 1,
												 1) ||
				gameplay::is_projectile_in_area(1991.473f, 3045.98f, 49.532f, 1996.906f, 3052.17f, 46.3392f, 0)) {
				if (!entity::is_entity_dead(iLocal_143, 0)) {
					ai::task_smart_flee_ped(iLocal_143, player::player_ped_id(), 1000f, -1, 0, 0);
				}
				if (!entity::is_entity_dead(iLocal_144, 0)) {
					ai::task_smart_flee_ped(iLocal_144, player::player_ped_id(), 1000f, -1, 0, 0);
				}
				bVar28 = true;
			}
			else {
				iVar26 = ped::get_ped_nearby_peds(player::player_ped_id(), &uVar0, -1);
				iVar27 = 0;
				while (iVar27 < iVar26) {
					if (!ped::is_ped_injured(uVar0[iVar27])) {
						if (ped::is_ped_in_melee_combat(uVar0[iVar27]) ||
							player::is_player_targetting_entity(player::player_id(), uVar0[iVar27])) {
							if (!entity::is_entity_dead(iLocal_143, 0)) {
								ai::task_smart_flee_ped(iLocal_143, player::player_ped_id(), 1000f, -1, 0, 0);
							}
							if (!entity::is_entity_dead(iLocal_144, 0)) {
								ai::task_smart_flee_ped(iLocal_144, player::player_ped_id(), 1000f, -1, 0, 0);
							}
							bVar28 = true;
						}
					}
					iVar27++;
				}
			}
		}
		if (!func_100(6) && !func_100(7)) {
			if (!ped::is_ped_injured(iLocal_143) && !ped::is_ped_injured(iLocal_144)) {
				if (ped::is_ped_fleeing(iLocal_143) || ped::is_ped_fleeing(iLocal_144)) {
					bVar28 = true;
				}
			}
			else {
				bVar28 = true;
			}
		}
		if (bVar28) {
			if (func_99(func_69())) {
				iLocal_159 = 1;
				func_68(0);
			}
			if (iLocal_161) {
				streaming::remove_anim_dict("mini@dartsintro");
				streaming::remove_anim_dict("mini@dartsintro_alt1");
				iLocal_161 = 0;
				iLocal_133 = 0;
			}
		}
	}
	if (iLocal_148 == 1) {
		if (!interior::is_valid_interior(iLocal_157)) {
			iLocal_157 = interior::get_interior_at_coords(-573.3155f, 291.2963f, 79.5509f);
		}
		else if (iLocal_157 == interior::get_interior_from_entity(player::player_ped_id())) {
			func_38(140, 3);
			func_38(139, 3);
			if (!ped::is_ped_injured(iLocal_143) && !ped::is_ped_injured(iLocal_144)) {
				if (iLocal_160) {
					ped::set_blocking_of_non_temporary_events(iLocal_143, 0);
					ped::set_blocking_of_non_temporary_events(iLocal_144, 0);
					iLocal_160 = 0;
				}
			}
		}
		else if (!ped::is_ped_injured(iLocal_143) && !ped::is_ped_injured(iLocal_144)) {
			if (!iLocal_160) {
				ped::set_blocking_of_non_temporary_events(iLocal_143, 1);
				ped::set_blocking_of_non_temporary_events(iLocal_144, 1);
				iLocal_160 = 1;
			}
		}
	}
	else if (iLocal_148 == 2) {
		if (!interior::is_valid_interior(iLocal_158)) {
			iLocal_158 = interior::get_interior_at_coords(1995.614f, 3049.877f, 46.2153f);
		}
		else if (iLocal_158 == interior::get_interior_from_entity(player::player_ped_id())) {
			if (!ped::is_ped_injured(iLocal_143) && !ped::is_ped_injured(iLocal_144)) {
				if (iLocal_160) {
					ped::set_blocking_of_non_temporary_events(iLocal_143, 0);
					ped::set_blocking_of_non_temporary_events(iLocal_144, 0);
					iLocal_160 = 0;
				}
			}
			if (!iLocal_161) {
				streaming::request_anim_dict("mini@dartsintro");
				streaming::request_anim_dict("mini@dartsintro_alt1");
				iLocal_161 = 1;
			}
			if (iLocal_161) {
				if (!iLocal_133) {
					if (!streaming::has_anim_dict_loaded("mini@dartsintro") ||
						!streaming::has_anim_dict_loaded("mini@dartsintro_alt1")) {
					}
					else {
						iLocal_133 = 1;
					}
				}
			}
		}
		else {
			if (!ped::is_ped_injured(iLocal_143) && !ped::is_ped_injured(iLocal_144)) {
				if (!iLocal_160) {
					ped::set_blocking_of_non_temporary_events(iLocal_143, 1);
					ped::set_blocking_of_non_temporary_events(iLocal_144, 1);
					iLocal_160 = 1;
				}
			}
			if (iLocal_161) {
				streaming::remove_anim_dict("mini@dartsintro");
				streaming::remove_anim_dict("mini@dartsintro_alt1");
				iLocal_161 = 0;
				iLocal_133 = 0;
			}
		}
	}
}

// Position - 0x1A39
void func_38(int iParam0, int iParam1) {
	int iVar0;

	if (iParam0 != 226) {
		if (Global_69702) {
			iVar0 = Global_2433125.f_74[iParam0];
		}
		else {
			iVar0 = Global_101700.f_6220[iParam0];
		}
		if (iVar0 != iParam1 || gameplay::is_bit_set(Global_31569[iParam0 / 32], iParam0 % 32)) {
			if (iParam1 == 4 || iParam1 == 3 || iParam1 == 5 || iParam1 == 6 || iParam1 == 2) {
				gameplay::set_bit(&Global_31578[iParam0 / 32], iParam0 % 32);
				Global_32041[iParam0] = iParam1;
			}
			else if (Global_69702) {
				Global_2433125.f_74[iParam0] = iParam1;
			}
			else {
				Global_101700.f_6220[iParam0] = iParam1;
			}
			gameplay::set_bit(&Global_31569[iParam0 / 32], iParam0 % 32);
			func_40(iParam0);
			if (gameplay::is_bit_set(Global_31569[iParam0 / 32], iParam0 % 32)) {
				func_39(iParam0);
			}
		}
	}
}

// Position - 0x1B32
void func_39(int iParam0) {
	if (!gameplay::is_bit_set(Global_32512.f_228[iParam0 / 32], iParam0 % 23)) {
		gameplay::set_bit(&Global_32512.f_228[iParam0 / 32], iParam0 % 23);
		Global_32512[Global_32512.f_227] = iParam0;
		Global_32512.f_227++;
	}
}

// Position - 0x1B80
void func_40(int iParam0) {
	struct<7> Var0;
	bool bVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (!func_65()) {
		return;
	}
	if (ped::is_ped_injured(player::player_ped_id())) {
		return;
	}
	Var0 = {func_64(iParam0)};
	if (gameplay::is_bit_set(Var0.f_4, 2)) {
		func_50(iParam0, &Var0);
	}
	if (!object::_does_door_exist(Var0.f_5)) {
		if (cutscene::is_cutscene_playing()) {
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = gameplay::get_distance_between_coords(Var0, entity::get_entity_coords(player::player_ped_id(), 1), 1);
	if (gameplay::is_bit_set(Global_31578[iParam0 / 32], iParam0 % 32) && Global_32041[iParam0] == 2 && fVar10 > 210f) {
		gameplay::clear_bit(&Global_31578[iParam0 / 32], iParam0 % 32);
		Global_31587[iParam0] = 0;
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("startup_positioning")) == 0) {
		if (gameplay::is_bit_set(Global_31814[iParam0 / 32], iParam0 % 32)) {
			if (fVar10 < 25f) {
				if (Global_91543.f_301 == 0) {
					if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
						Global_91543.f_301 = interior::get_interior_from_entity(player::player_ped_id());
					}
				}
				iVar11 = Global_91543.f_301;
				iVar12 = interior::get_interior_at_coords(Var0);
				if (iVar11 == iVar12 && iVar11 != 0) {
					gameplay::set_bit(&Global_31578[iParam0 / 32], iParam0 % 32);
					Global_32041[iParam0] = 3;
					gameplay::set_bit(&Global_31569[iParam0 / 32], iParam0 % 32);
				}
			}
			gameplay::clear_bit(&Global_31814[iParam0 / 32], iParam0 % 32);
		}
	}
	if (gameplay::is_bit_set(Global_31578[iParam0 / 32], iParam0 % 32)) {
		iVar9 = Global_32041[iParam0];
	}
	else if (gameplay::is_bit_set(Var0.f_4, 0)) {
		if (Global_101700.f_8044) {
			iVar9 = func_47(iParam0);
		}
		else {
			iVar9 = 0;
		}
		if (func_100(14)) {
			iVar9 = 0;
		}
	}
	else if (gameplay::is_bit_set(Var0.f_4, 1) &&
			 script::_get_number_of_instances_of_script_with_name_hash(joaat("ambient_solomon")) == 0) {
		if (func_41()) {
			iVar9 = 0;
		}
		else {
			iVar9 = 1;
		}
	}
	else {
		iVar9 = Global_101700.f_6220[iParam0];
	}
	if (Global_32268[iParam0] != iVar9) {
		bVar7 = true;
	}
	if (gameplay::is_bit_set(Global_31569[iParam0 / 32], iParam0 % 32)) {
		if (!gameplay::is_bit_set(Global_31578[iParam0 / 32], iParam0 % 32) ||
			Global_31587[iParam0] == 0 && Global_32041[iParam0] != 2) {
			bVar7 = true;
		}
	}
	if (bVar7) {
		if (!Global_31568) {
		}
		else {
			if (!object::_does_door_exist(Var0.f_5)) {
				object::add_door_to_system(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar9) {
			case 1:
				if (gameplay::is_bit_set(Var0.f_4, 3)) {
					bVar13 = true;
				}
				else if (fVar10 > 3f || gameplay::absf(object::_0x65499865FCA6E5EC(Var0.f_5)) <= 0.015f) {
					iVar14 = interior::get_interior_from_entity(player::player_ped_id());
					iVar15 = interior::get_interior_at_coords(Var0);
					if (iVar14 != iVar15 || iVar14 == 0) {
						bVar13 = true;
					}
				}
				if (bVar13) {
					if (Var0.f_6 != 0f) {
						object::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					object::_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
				}
				break;

			case 4:
				if (Var0.f_6 != 0f) {
					object::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
				}
				object::_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
				bVar8 = true;
				break;

			case 2:
				if (Var0.f_6 != 0f) {
					object::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
				}
				object::_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
				bVar8 = true;
				break;

			case 0:
				if (Var0.f_6 != 0f) {
					object::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 1);
				}
				object::_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
				bVar8 = true;
				break;

			case 3:
				if (Var0.f_6 != 0f) {
					object::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
				}
				object::_set_door_acceleration_limit(Var0.f_5, 0, 0, 1);
				bVar8 = true;
				break;

			case 5:
				if (Var0.f_6 != 0f) {
					object::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
				}
				object::_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
				bVar8 = true;
				break;

			case 6:
				if (Var0.f_6 != 0f) {
					object::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
				}
				object::_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
				bVar8 = true;
				break;

			default:
				if (Var0.f_6 != 0f) {
					object::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
				}
				object::_set_door_acceleration_limit(Var0.f_5, iVar9, 0, 1);
				bVar8 = true;
				break;
			}
		}
		if (bVar8) {
			gameplay::clear_bit(&Global_31569[iParam0 / 32], iParam0 % 32);
			Global_32268[iParam0] = iVar9;
		}
	}
	if (gameplay::is_bit_set(Global_31578[iParam0 / 32], iParam0 % 32) && Global_32041[iParam0] != 2) {
		gameplay::set_bit(&Global_31569[iParam0 / 32], iParam0 % 32);
		func_39(iParam0);
		if (Global_31587[iParam0] < 2) {
			Global_31587[iParam0]++;
		}
	}
}

// Position - 0x2063
bool func_41() {
	if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
		return false;
	}
	switch (func_42()) {
	case 0:
		if (Global_101700.f_8044.f_99.f_58[65]) {
			return true;
		}
		break;

	case 1:
		if (Global_101700.f_8044.f_99.f_58[66]) {
			return true;
		}
		break;

	case 2:
		if (Global_101700.f_8044.f_99.f_58[65]) {
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x20E2
int func_42() {
	func_43();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x20FB
void func_43() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_46(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_45(player::player_ped_id());
			if (func_44(iVar0) && (!func_100(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_44(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x21F8
bool func_44(int iParam0) { return iParam0 < 3; }

// Position - 0x2204
int func_45(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_46(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x2241
int func_46(int iParam0) {
	if (func_44(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x226B
int func_47(int iParam0) {
	int iVar0;

	iVar0 = func_42();
	if (func_48(iParam0)) {
		return 1;
	}
	if (iParam0 == 49) {
		if (iVar0 == 1) {
			if (gameplay::is_bit_set(Global_101700.f_6188[5], 0) || gameplay::is_bit_set(Global_101700.f_6188[6], 0)) {
				return 0;
			}
		}
		if (func_44(iVar0)) {
			if (gameplay::is_bit_set(Global_86851[5], iVar0)) {
				return 0;
			}
		}
	}
	switch (iParam0) {
	case 38:
	case 39:
	case 40:
	case 41:
	case 42:
	case 43:
	case 44:
	case 45:
	case 46:
		if (iVar0 == 0) {
			if (gameplay::is_bit_set(Global_101700.f_6188[0], 0)) {
				return 0;
			}
		}
		if (func_44(iVar0)) {
			if (gameplay::is_bit_set(Global_86851[0], iVar0)) {
				if (iParam0 != 40) {
					return 0;
				}
				else {
					return 1;
				}
			}
		}
		break;

	case 47:
	case 48:
	case 49:
		if (iVar0 == 1) {
			if (gameplay::is_bit_set(Global_101700.f_6188[5], 0)) {
				return 0;
			}
		}
		if (func_44(iVar0)) {
			if (gameplay::is_bit_set(Global_86851[5], iVar0)) {
				return 0;
			}
		}
		break;

	case 50:
		if (iVar0 == 1) {
			if (gameplay::is_bit_set(Global_101700.f_6188[6], 0)) {
				return 0;
			}
		}
		if (func_44(iVar0)) {
			if (gameplay::is_bit_set(Global_86851[6], iVar0)) {
				return 0;
			}
		}
		break;

	case 51:
	case 52:
		if (iVar0 == 2) {
			if (gameplay::is_bit_set(Global_101700.f_6188[2], 0)) {
				return 0;
			}
			if (func_44(iVar0)) {
				if (gameplay::is_bit_set(Global_86851[2], iVar0)) {
					return 0;
				}
			}
		}
		else if (iVar0 == 0) {
			if (gameplay::is_bit_set(Global_101700.f_6188[1], 0)) {
				return 0;
			}
			if (func_44(iVar0)) {
				if (gameplay::is_bit_set(Global_86851[1], iVar0)) {
					return 0;
				}
			}
		}
		break;

	case 53:
		if (iVar0 == 2) {
			if (gameplay::is_bit_set(Global_101700.f_6188[3], 0)) {
				return 0;
			}
		}
		if (func_44(iVar0)) {
			if (gameplay::is_bit_set(Global_86851[3], iVar0)) {
				return 0;
			}
		}
		break;

	default: return 0;
	}
	return 1;
}

// Position - 0x24C0
bool func_48(int iParam0) {
	int iVar0;

	if (iParam0 == 40 || iParam0 == 49 || iParam0 == 52) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				iVar0 = entity::get_entity_model(func_49(ped::get_vehicle_ped_is_in(player::player_ped_id(), 1)));
				switch (iVar0) {
				case joaat("utillitruck"):
				case joaat("monster"): return true;
				}
			}
		}
	}
	return false;
}

// Position - 0x252C
var func_49(var uParam0) { return uParam0; }

// Position - 0x2536
void func_50(int iParam0, var *uParam1) {
	int iVar0;
	int iVar1;

	if (!gameplay::is_bit_set(uParam1->f_4, 2)) {
		return;
	}
	iVar0 = func_53();
	iVar1 = func_52(iVar0);
	switch (iParam0) {
	case 133:
	case 134:
	case 201:
	case 202:
		if (func_51(iParam0)) {
			if (iVar1 < 19) {
				if (iVar1 >= 7) {
					Global_101700.f_6220[iParam0] = 0;
					object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
				}
			}
			else {
				return;
			}
		}
		else if (iVar1 >= 19) {
			if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 0), *uParam1) >= 12f) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else if (iVar1 < 7) {
			if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 0), *uParam1) >= 12f) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 199:
	case 200:
	case 203:
	case 204:
		if (func_51(iParam0)) {
			if (iVar1 < 18) {
				if (iVar1 >= 7) {
					Global_101700.f_6220[iParam0] = 0;
					object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
				}
			}
			else {
				return;
			}
		}
		else if (iVar1 >= 18) {
			if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 0), *uParam1) >= 12f) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else if (iVar1 < 7) {
			if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 0), *uParam1) >= 12f) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 141:
	case 142:
		if (func_51(iParam0)) {
			if (script::_get_number_of_instances_of_script_with_name_hash(joaat("jewelry_heist")) == 0 &&
				script::_get_number_of_instances_of_script_with_name_hash(joaat("jewelry_setup1")) == 0 &&
				!Global_101700.f_8044.f_99.f_58[4]) {
				if (iVar1 < 21) {
					if (iVar1 >= 7) {
						Global_101700.f_6220[iParam0] = 0;
						object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
					}
				}
				else {
					return;
				}
			}
			else if (!Global_101700.f_8044.f_99.f_58[4]) {
				Global_101700.f_6220[iParam0] = 0;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else if (Global_101700.f_8044.f_99.f_58[4]) {
			Global_101700.f_6220[iParam0] = 1;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("jewelry_heist")) == 0 &&
				 script::_get_number_of_instances_of_script_with_name_hash(joaat("jewelry_setup1")) == 0) {
			if (iVar1 >= 21) {
				if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 0), *uParam1) >= 18f) {
					Global_101700.f_6220[iParam0] = 1;
					object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7) {
				if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 0), *uParam1) >= 18f) {
					Global_101700.f_6220[iParam0] = 1;
					object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
				}
			}
		}
		break;

	case 145:
	case 146:
	case 143:
	case 144:
		if (func_51(iParam0)) {
			if (iVar1 < 20) {
				if (iVar1 >= 9) {
					Global_101700.f_6220[iParam0] = 0;
					object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
				}
			}
			else {
				return;
			}
		}
		else if (iVar1 >= 20) {
			if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 0), *uParam1) >= 40f) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else if (iVar1 < 9) {
			if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 0), *uParam1) >= 40f) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 147:
	case 148:
		if (!func_51(iParam0)) {
			Global_101700.f_6220[iParam0] = 1;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		break;

	case 152:
	case 153:
	case 154:
	case 155:
	case 156:
	case 157:
		if (!func_51(iParam0)) {
			if (script::_get_number_of_instances_of_script_with_name_hash(joaat("assassin_valet")) == 0) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("assassin_valet")) > 0) {
			Global_101700.f_6220[iParam0] = 0;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		break;

	case 158:
	case 159:
		if (script::_get_number_of_instances_of_script_with_name_hash(Global_82612[70 /*34*/].f_6) == 0) {
			if (!func_51(iParam0)) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 160:
	case 161:
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("omega2")) == 0) {
			if (!func_51(iParam0)) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 70:
	case 71:
	case 72:
		if (!func_51(iParam0) &&
			script::_get_number_of_instances_of_script_with_name_hash(Global_82612[26 /*34*/].f_6) == 0) {
			Global_101700.f_6220[iParam0] = 1;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		else {
			return;
		}
		break;

	case 101:
	case 102:
	case 103:
	case 104:
		if (!func_51(iParam0)) {
			if (script::_get_number_of_instances_of_script_with_name_hash(Global_82612[43 /*34*/].f_6) == 0) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else {
			return;
		}
		break;

	case 190:
	case 191:
		if (!func_51(iParam0)) {
			Global_101700.f_6220[iParam0] = 1;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		break;

	case 193:
		if (!func_51(iParam0)) {
			if (script::_get_number_of_instances_of_script_with_name_hash(Global_82612[93 /*34*/].f_6) > 0) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else {
			return;
		}
		break;

	case 198:
		if (!func_51(iParam0)) {
			Global_101700.f_6220[iParam0] = 1;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		break;

	case 80:
		if (!func_51(iParam0)) {
			if (script::_get_number_of_instances_of_script_with_name_hash(Global_82612[8 /*34*/].f_6) == 0 &&
				script::_get_number_of_instances_of_script_with_name_hash(Global_82612[10 /*34*/].f_6) == 0) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else {
			return;
		}
		break;

	case 205:
	case 206:
		if (!func_51(iParam0)) {
			if (script::_get_number_of_instances_of_script_with_name_hash(Global_82612[47 /*34*/].f_6) == 0) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		else {
			return;
		}
		break;

	case 207:
		if (script::_get_number_of_instances_of_script_with_name_hash(Global_82612[70 /*34*/].f_6) == 0) {
			if (!func_51(iParam0)) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 208:
	case 209:
	case 211:
	case 210:
	case 212:
	case 213:
	case 214:
	case 215:
		if (script::_get_number_of_instances_of_script_with_name_hash(Global_82612[48 /*34*/].f_6) == 0) {
			if (!func_51(iParam0)) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 99:
	case 100:
		if (script::_get_number_of_instances_of_script_with_name_hash(Global_82612[39 /*34*/].f_6) == 0) {
			if (!func_51(iParam0)) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 216:
		if (!func_51(iParam0)) {
			Global_101700.f_6220[iParam0] = 1;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		break;

	case 217:
	case 218:
		if (!func_51(iParam0)) {
			Global_101700.f_6220[iParam0] = 1;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		break;

	case 219:
	case 220:
	case 221:
	case 222:
		if (func_51(iParam0)) {
			Global_101700.f_6220[iParam0] = 0;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		break;
	}
}

// Position - 0x2ED1
bool func_51(int iParam0) {
	struct<7> Var0;
	int iVar7;

	Var0 = {func_64(iParam0)};
	iVar7 = object::_0x160AA1B32F6139B8(Var0.f_5);
	return iVar7 == 1 || iVar7 == 4 || iVar7 == 2;
}

// Position - 0x2F05
int func_52(int iParam0) { return system::shift_right(iParam0, 9) & 31; }

// Position - 0x2F18
var func_53() {
	int *iVar0;

	func_63(&iVar0, time::get_clock_seconds());
	func_62(&iVar0, time::get_clock_minutes());
	func_61(&iVar0, time::get_clock_hours());
	func_56(&iVar0, time::get_clock_day_of_month());
	func_55(&iVar0, time::get_clock_month());
	func_54(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0x2F5E
void func_54(int *iParam0, int iParam1) {
	if (iParam1 <= 0) {
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979) {
		return;
	}
	*iParam0 -= (*iParam0 & 2080374784);
	if (iParam1 < 2011) {
		*iParam0 |= system::shift_left(2011 - iParam1, 26);
		*iParam0 |= -2147483648;
	}
	else {
		*iParam0 |= system::shift_left(iParam1 - 2011, 26);
		*iParam0 -= (*iParam0 & -2147483648);
	}
}

// Position - 0x2FE4
void func_55(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*uParam0 -= (*uParam0 & 15);
	*uParam0 |= iParam1;
}

// Position - 0x3017
void func_56(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_60(*uParam0);
	iVar1 = func_58(*uParam0);
	if (iParam1 < 1 || iParam1 > func_57(iVar0, iVar1)) {
		return;
	}
	*uParam0 -= (*uParam0 & 496);
	*uParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0x3068
int func_57(int iParam0, int iParam1) {
	if (iParam1 < 0) {
		iParam1 = 0;
	}
	switch (iParam0) {
	case 0:
	case 2:
	case 4:
	case 6:
	case 7:
	case 9:
	case 11: return 31;

	case 3:
	case 5:
	case 8:
	case 10: return 30;

	case 1:
		if (iParam1 % 4 == 0) {
			if (iParam1 % 100 != 0) {
				return 29;
			}
			else if (iParam1 % 400 == 0) {
				return 29;
			}
		}
		return 28;
	}
	return 30;
}

// Position - 0x310A
var func_58(int iParam0) {
	return (system::shift_right(iParam0, 26) & 31) * func_59(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x312F
int func_59(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x3146
int func_60(var uParam0) { return uParam0 & 15; }

// Position - 0x3153
void func_61(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*uParam0 -= (*uParam0 & 15872);
	*uParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0x318D
void func_62(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 1032192);
	*uParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0x31C8
void func_63(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 66060288);
	*uParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0x3204
struct<7> func_64(int iParam0) {
	struct<7> Var0;

	switch (iParam0) {
	case 0:
		Var0.f_3 = joaat("v_ilev_bs_door");
		Var0 = {133f, -1711f, 29f};
		Var0.f_5 = 1804701345;
		break;

	case 1:
		Var0.f_3 = joaat("v_ilev_bs_door");
		Var0 = {-1287.857f, -1115.742f, 7.1401f};
		Var0.f_5 = 1403601067;
		break;

	case 2:
		Var0.f_3 = joaat("v_ilev_bs_door");
		Var0 = {1932.952f, 3725.154f, 32.9944f};
		Var0.f_5 = -2031139496;
		break;

	case 3:
		Var0.f_3 = joaat("v_ilev_bs_door");
		Var0 = {1207.873f, -470.063f, 66.358f};
		Var0.f_5 = 1796834809;
		break;

	case 4:
		Var0.f_3 = joaat("v_ilev_bs_door");
		Var0 = {-29.8692f, -148.1571f, 57.2265f};
		Var0.f_5 = 96153298;
		break;

	case 5:
		Var0.f_3 = joaat("v_ilev_bs_door");
		Var0 = {-280.7851f, 6232.782f, 31.8455f};
		Var0.f_5 = -281080954;
		break;

	case 6:
		Var0.f_3 = joaat("v_ilev_hd_door_l");
		Var0 = {-824f, -187f, 38f};
		Var0 = {-823.2001f, -187.0831f, 37.819f};
		Var0.f_5 = 183249434;
		break;

	case 7:
		Var0.f_3 = joaat("v_ilev_hd_door_r");
		Var0 = {-823f, -188f, 38f};
		Var0 = {-822.4442f, -188.3924f, 37.819f};
		Var0.f_5 = 758345384;
		break;

	case 8:
		Var0.f_3 = joaat("v_ilev_cs_door01");
		Var0 = {82.3186f, -1392.752f, 29.5261f};
		Var0.f_5 = -1069262641;
		break;

	case 9:
		Var0.f_3 = joaat("v_ilev_cs_door01_r");
		Var0 = {82.3186f, -1390.476f, 29.5261f};
		Var0.f_5 = 1968521986;
		break;

	case 10:
		Var0.f_3 = joaat("v_ilev_cs_door01");
		Var0 = {1686.983f, 4821.741f, 42.2131f};
		Var0.f_5 = -2143706301;
		break;

	case 11:
		Var0.f_3 = joaat("v_ilev_cs_door01_r");
		Var0 = {1687.282f, 4819.484f, 42.2131f};
		Var0.f_5 = -1403421822;
		break;

	case 12:
		Var0.f_3 = joaat("v_ilev_cs_door01");
		Var0 = {418.637f, -806.457f, 29.6396f};
		Var0.f_5 = -1950137670;
		break;

	case 13:
		Var0.f_3 = joaat("v_ilev_cs_door01_r");
		Var0 = {418.637f, -808.733f, 29.6396f};
		Var0.f_5 = 1226259807;
		break;

	case 14:
		Var0.f_3 = joaat("v_ilev_cs_door01");
		Var0 = {-1096.661f, 2705.446f, 19.2578f};
		Var0.f_5 = 1090833557;
		break;

	case 15:
		Var0.f_3 = joaat("v_ilev_cs_door01_r");
		Var0 = {-1094.965f, 2706.964f, 19.2578f};
		Var0.f_5 = 897332612;
		break;

	case 16:
		Var0.f_3 = joaat("v_ilev_cs_door01");
		Var0 = {1196.825f, 2703.221f, 38.3726f};
		Var0.f_5 = 1095946640;
		break;

	case 17:
		Var0.f_3 = joaat("v_ilev_cs_door01_r");
		Var0 = {1199.101f, 2703.221f, 38.3726f};
		Var0.f_5 = 801975945;
		break;

	case 18:
		Var0.f_3 = joaat("v_ilev_cs_door01");
		Var0 = {-818.7642f, -1079.544f, 11.4781f};
		Var0.f_5 = -167996547;
		break;

	case 19:
		Var0.f_3 = joaat("v_ilev_cs_door01_r");
		Var0 = {-816.7932f, -1078.406f, 11.4781f};
		Var0.f_5 = -1935818563;
		break;

	case 20:
		Var0.f_3 = joaat("v_ilev_cs_door01");
		Var0 = {-0.0564f, 6517.461f, 32.0278f};
		Var0.f_5 = 1891185217;
		break;

	case 21:
		Var0.f_3 = joaat("v_ilev_cs_door01_r");
		Var0 = {-1.7253f, 6515.914f, 32.0278f};
		Var0.f_5 = 1236591681;
		break;

	case 22:
		Var0.f_3 = joaat("v_ilev_clothmiddoor");
		Var0 = {-1201.435f, -776.8566f, 17.9918f};
		Var0.f_5 = 1980808685;
		break;

	case 23:
		Var0.f_3 = joaat("v_ilev_clothmiddoor");
		Var0 = {617.2458f, 2751.022f, 42.7578f};
		Var0.f_5 = 1352749757;
		break;

	case 24:
		Var0.f_3 = joaat("v_ilev_clothmiddoor");
		Var0 = {127.8201f, -211.8274f, 55.2275f};
		Var0.f_5 = -566554453;
		break;

	case 25:
		Var0.f_3 = joaat("v_ilev_clothmiddoor");
		Var0 = {-3167.75f, 1055.536f, 21.5329f};
		Var0.f_5 = 1284749450;
		break;

	case 26:
		Var0.f_3 = joaat("v_ilev_ch_glassdoor");
		Var0 = {-716.6754f, -155.42f, 37.6749f};
		Var0.f_5 = 261851994;
		break;

	case 27:
		Var0.f_3 = joaat("v_ilev_ch_glassdoor");
		Var0 = {-715.6154f, -157.2561f, 37.6749f};
		Var0.f_5 = 217646625;
		break;

	case 28:
		Var0.f_3 = joaat("v_ilev_ch_glassdoor");
		Var0 = {-157.0924f, -306.4413f, 39.994f};
		Var0.f_5 = 1801139578;
		break;

	case 29:
		Var0.f_3 = joaat("v_ilev_ch_glassdoor");
		Var0 = {-156.4022f, -304.4366f, 39.994f};
		Var0.f_5 = -2123275866;
		break;

	case 30:
		Var0.f_3 = joaat("v_ilev_ch_glassdoor");
		Var0 = {-1454.782f, -231.7927f, 50.0565f};
		Var0.f_5 = 1312689981;
		break;

	case 31:
		Var0.f_3 = joaat("v_ilev_ch_glassdoor");
		Var0 = {-1456.201f, -233.3682f, 50.0565f};
		Var0.f_5 = -595055661;
		break;

	case 32:
		Var0.f_3 = joaat("v_ilev_ta_door");
		Var0 = {321.81f, 178.36f, 103.68f};
		Var0.f_5 = -265260897;
		break;

	case 33:
		Var0.f_3 = -1212951353;
		Var0 = {1859.89f, 3749.79f, 33.18f};
		Var0.f_5 = -1284867488;
		break;

	case 34:
		Var0.f_3 = -1212951353;
		Var0 = {-289.1752f, 6199.112f, 31.637f};
		Var0.f_5 = 302307081;
		break;

	case 35:
		Var0.f_3 = joaat("v_ilev_ta_door");
		Var0 = {-1155.454f, -1424.008f, 5.0461f};
		Var0.f_5 = -681886015;
		break;

	case 36:
		Var0.f_3 = joaat("v_ilev_ta_door");
		Var0 = {1321.286f, -1650.597f, 52.3663f};
		Var0.f_5 = -2086556500;
		break;

	case 37:
		Var0.f_3 = joaat("v_ilev_ta_door");
		Var0 = {-3167.789f, 1074.767f, 20.9209f};
		Var0.f_5 = -1496386696;
		break;

	case 38:
		Var0.f_3 = joaat("v_ilev_mm_doorm_l");
		Var0 = {-817f, 179f, 73f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = -2097039789;
		break;

	case 39:
		Var0.f_3 = joaat("v_ilev_mm_doorm_r");
		Var0 = {-816f, 178f, 73f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = -2127416656;
		break;

	case 40:
		Var0.f_3 = joaat("prop_ld_garaged_01");
		Var0 = {-815f, 186f, 73f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = -1986583853;
		Var0.f_6 = 6.5f;
		break;

	case 41:
		Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
		Var0 = {-797f, 177f, 73f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = 776026812;
		break;

	case 42:
		Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
		Var0 = {-795f, 178f, 73f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = 698422331;
		break;

	case 43:
		Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
		Var0 = {-793f, 181f, 73f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = 535076355;
		break;

	case 44:
		Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
		Var0 = {-794f, 183f, 73f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = 474675599;
		break;

	case 45:
		Var0.f_3 = joaat("prop_bh1_48_gate_1");
		Var0 = {-849f, 179f, 70f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = -1978427516;
		break;

	case 46:
		Var0.f_3 = joaat("v_ilev_mm_windowwc");
		Var0 = {-802.7333f, 167.5041f, 77.5824f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = -1700375831;
		break;

	case 47:
		Var0.f_3 = joaat("v_ilev_fa_frontdoor");
		Var0 = {-14f, -1441f, 31f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = 613961892;
		break;

	case 48:
		Var0.f_3 = joaat("v_ilev_fh_frntdoor");
		Var0 = {-15f, -1427f, 31f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = -272570634;
		break;

	case 49:
		Var0.f_3 = joaat("prop_sc1_21_g_door_01");
		Var0 = {-25.28f, -1431.06f, 30.84f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = -1040675994;
		break;

	case 50:
		Var0.f_3 = joaat("v_ilev_fh_frontdoor");
		Var0 = {7.52f, 539.53f, 176.18f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = 1201219326;
		break;

	case 51:
		Var0.f_3 = joaat("v_ilev_trevtraildr");
		Var0 = {1973f, 3815f, 34f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = 1736361794;
		break;

	case 52:
		Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
		Var0 = {1972.787f, 3824.554f, 32.5831f};
		Var0.f_5 = 1113956670;
		Var0.f_6 = 12f;
		break;

	case 53:
		Var0.f_3 = joaat("v_ilev_trev_doorfront");
		Var0 = {-1150f, -1521f, 11f};
		gameplay::set_bit(&Var0.f_4, 0);
		Var0.f_5 = -1361617046;
		break;
	}
	switch (iParam0) {
	case 54:
		Var0.f_3 = joaat("prop_com_ls_door_01");
		Var0 = {-1145.9f, -1991.14f, 14.18f};
		Var0.f_5 = -1871080926;
		Var0.f_6 = 25f;
		break;

	case 55:
		Var0.f_3 = joaat("prop_id2_11_gdoor");
		Var0 = {723.12f, -1088.83f, 23.28f};
		Var0.f_5 = 1168079979;
		Var0.f_6 = 25f;
		break;

	case 56:
		Var0.f_3 = joaat("prop_com_ls_door_01");
		Var0 = {-356.09f, -134.77f, 40.01f};
		Var0.f_5 = 1206354175;
		Var0.f_6 = 25f;
		break;

	case 57:
		Var0.f_3 = joaat("v_ilev_carmod3door");
		Var0 = {108.8502f, 6617.876f, 32.673f};
		Var0.f_5 = -1038180727;
		Var0.f_6 = 25f;
		break;

	case 58:
		Var0.f_3 = joaat("v_ilev_carmod3door");
		Var0 = {114.3206f, 6623.226f, 32.7161f};
		Var0.f_5 = 1200466273;
		Var0.f_6 = 25f;
		break;

	case 59:
		Var0.f_3 = joaat("v_ilev_carmod3door");
		Var0 = {1182.305f, 2645.242f, 38.807f};
		Var0.f_5 = 1391004277;
		Var0.f_6 = 25f;
		break;

	case 60:
		Var0.f_3 = joaat("v_ilev_carmod3door");
		Var0 = {1174.654f, 2645.242f, 38.6826f};
		Var0.f_5 = -459199009;
		Var0.f_6 = 25f;
		break;

	case 225:
		Var0.f_3 = -427498890;
		Var0 = {-205.7007f, -1310.692f, 30.2957f};
		Var0.f_5 = -288764223;
		Var0.f_6 = 25f;
		break;

	case 61:
		Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
		Var0 = {-107.5401f, -9.0258f, 70.6696f};
		Var0.f_5 = -252283844;
		break;

	case 62:
		Var0.f_3 = joaat("v_ilev_ss_door8");
		Var0 = {717f, -975f, 25f};
		Var0.f_5 = -826072862;
		break;

	case 63:
		Var0.f_3 = joaat("v_ilev_ss_door7");
		Var0 = {719f, -975f, 25f};
		Var0.f_5 = 763780711;
		break;

	case 64:
		Var0.f_3 = joaat("v_ilev_ss_door02");
		Var0 = {709.9813f, -963.5311f, 30.5453f};
		Var0.f_5 = -874851305;
		break;

	case 65:
		Var0.f_3 = joaat("v_ilev_ss_door03");
		Var0 = {709.9894f, -960.6675f, 30.5453f};
		Var0.f_5 = -1480820165;
		break;

	case 66:
		Var0.f_3 = joaat("v_ilev_store_door");
		Var0 = {707.8046f, -962.4564f, 30.5453f};
		Var0.f_5 = 949391213;
		break;

	case 67:
		Var0.f_3 = -1212951353;
		Var0 = {1393f, 3599f, 35f};
		Var0.f_5 = 212192855;
		break;

	case 68:
		Var0.f_3 = -1212951353;
		Var0 = {1395f, 3600f, 35f};
		Var0.f_5 = -126474752;
		break;

	case 69:
		Var0.f_3 = joaat("v_ilev_ss_door04");
		Var0 = {1387f, 3614f, 39f};
		Var0.f_5 = 1765671336;
		break;

	case 70:
		Var0.f_3 = joaat("prop_ron_door_01");
		Var0 = {1083.547f, -1975.435f, 31.6222f};
		Var0.f_5 = 792295685;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 71:
		Var0.f_3 = joaat("prop_ron_door_01");
		Var0 = {1065.237f, -2006.079f, 32.2329f};
		Var0.f_5 = 563273144;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 72:
		Var0.f_3 = joaat("prop_ron_door_01");
		Var0 = {1085.307f, -2018.561f, 41.6289f};
		Var0.f_5 = -726993043;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 73:
		Var0.f_3 = joaat("v_ilev_bank4door02");
		Var0 = {-111f, 6464f, 32f};
		Var0.f_5 = 178228075;
		break;

	case 74:
		Var0.f_3 = joaat("v_ilev_bank4door01");
		Var0 = {-110f, 6462f, 32f};
		Var0.f_5 = 1852297978;
		break;

	case 75:
		Var0.f_3 = joaat("v_ilev_lester_doorfront");
		Var0 = {1274f, -1721f, 55f};
		Var0.f_5 = -565026078;
		break;

	case 76:
		Var0.f_3 = joaat("v_ilev_lester_doorveranda");
		Var0 = {1271.89f, -1707.57f, 53.79f};
		Var0.f_5 = 1646172266;
		break;

	case 77:
		Var0.f_3 = joaat("v_ilev_lester_doorveranda");
		Var0 = {1270.77f, -1708.1f, 53.75f};
		Var0.f_5 = 204467342;
		break;

	case 78:
		Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
		Var0 = {-127.5f, -1456.18f, 37.94f};
		Var0.f_5 = 2047070410;
		break;

	case 79:
		Var0.f_3 = joaat("prop_com_gar_door_01");
		Var0 = {483.56f, -1316.08f, 32.18f};
		Var0.f_5 = 1417775309;
		break;

	case 80:
		Var0.f_3 = joaat("v_ilev_cs_door");
		Var0 = {483f, -1312f, 29f};
		Var0.f_5 = -106474626;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 81:
		Var0.f_3 = joaat("prop_strip_door_01");
		Var0 = {128f, -1299f, 29f};
		Var0.f_5 = 1840510598;
		break;

	case 82:
		Var0.f_3 = joaat("prop_magenta_door");
		Var0 = {96f, -1285f, 29f};
		Var0.f_5 = 1382825971;
		break;

	case 83:
		Var0.f_3 = joaat("prop_motel_door_09");
		Var0 = {549f, -1773f, 34f};
		Var0.f_5 = 232536303;
		break;

	case 84:
		Var0.f_3 = joaat("v_ilev_gangsafedoor");
		Var0 = {974f, -1839f, 36f};
		Var0.f_5 = 1267246609;
		gameplay::set_bit(&Var0.f_4, 3);
		break;

	case 85:
		Var0.f_3 = joaat("v_ilev_gangsafedoor");
		Var0 = {977f, -105f, 75f};
		Var0.f_5 = -1900237971;
		gameplay::set_bit(&Var0.f_4, 3);
		break;

	case 86:
		Var0.f_3 = joaat("v_ilev_ra_door1_l");
		Var0 = {1391f, 1163f, 114f};
		Var0.f_5 = 2077901353;
		break;

	case 87:
		Var0.f_3 = joaat("v_ilev_ra_door1_r");
		Var0 = {1391f, 1161f, 114f};
		Var0.f_5 = -2102079126;
		break;

	case 88:
		Var0.f_3 = joaat("prop_cs6_03_door_l");
		Var0 = {1396f, 1143f, 115f};
		Var0.f_5 = -1905793212;
		break;

	case 89:
		Var0.f_3 = joaat("prop_cs6_03_door_r");
		Var0 = {1396f, 1141f, 115f};
		Var0.f_5 = -1797032505;
		break;

	case 90:
		Var0.f_3 = joaat("v_ilev_ra_door1_l");
		Var0 = {1409f, 1146f, 114f};
		Var0.f_5 = -62235167;
		break;

	case 91:
		Var0.f_3 = joaat("v_ilev_ra_door1_r");
		Var0 = {1409f, 1148f, 114f};
		Var0.f_5 = -1727188163;
		break;

	case 92:
		Var0.f_3 = joaat("v_ilev_ra_door1_l");
		Var0 = {1408f, 1159f, 114f};
		Var0.f_5 = -562748873;
		break;

	case 93:
		Var0.f_3 = joaat("v_ilev_ra_door1_r");
		Var0 = {1408f, 1161f, 114f};
		Var0.f_5 = 1976429759;
		break;

	case 94:
		Var0.f_3 = joaat("prop_gar_door_01");
		Var0 = {-1067f, -1666f, 5f};
		Var0.f_5 = 1341041543;
		break;

	case 95:
		Var0.f_3 = joaat("prop_gar_door_02");
		Var0 = {-1065f, -1669f, 5f};
		Var0.f_5 = -1631467220;
		break;

	case 96:
		Var0.f_3 = joaat("prop_map_door_01");
		Var0 = {-1104.66f, -1638.48f, 4.68f};
		Var0.f_5 = -1788473129;
		break;

	case 97:
		Var0.f_3 = joaat("v_ilev_fib_door1");
		Var0 = {-31.72f, -1101.85f, 26.57f};
		Var0.f_5 = -1831288286;
		break;

	case 98:
		Var0.f_3 = joaat("v_ilev_tort_door");
		Var0 = {134.4f, -2204.1f, 7.52f};
		Var0.f_5 = 963876966;
		break;

	case 99:
		Var0.f_3 = joaat("v_ilev_bl_shutter2");
		Var0 = {3628f, 3747f, 28f};
		Var0.f_5 = 1773088812;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 100:
		Var0.f_3 = joaat("v_ilev_bl_shutter2");
		Var0 = {3621f, 3752f, 28f};
		Var0.f_5 = -1332101528;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 101:
		Var0.f_3 = joaat("v_ilev_rc_door3_l");
		Var0 = {-608.73f, -1610.32f, 27.16f};
		Var0.f_5 = -1811763714;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 102:
		Var0.f_3 = joaat("v_ilev_rc_door3_r");
		Var0 = {-611.32f, -1610.09f, 27.16f};
		Var0.f_5 = 1608500665;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 103:
		Var0.f_3 = joaat("v_ilev_rc_door3_l");
		Var0 = {-592.94f, -1631.58f, 27.16f};
		Var0.f_5 = -1456048340;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 104:
		Var0.f_3 = joaat("v_ilev_rc_door3_r");
		Var0 = {-592.71f, -1628.99f, 27.16f};
		Var0.f_5 = 943854909;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 105:
		Var0.f_3 = joaat("v_ilev_ss_door04");
		Var0 = {1991f, 3053f, 47f};
		Var0.f_5 = -89065356;
		break;

	case 106:
		Var0.f_3 = 479144380;
		Var0 = {1988.353f, 3054.411f, 47.3204f};
		Var0.f_5 = -925491840;
		break;

	case 107:
		Var0.f_3 = joaat("prop_epsilon_door_l");
		Var0 = {-700.17f, 47.31f, 44.3f};
		Var0.f_5 = 1999872275;
		break;

	case 108:
		Var0.f_3 = joaat("prop_epsilon_door_r");
		Var0 = {-697.94f, 48.35f, 44.3f};
		Var0.f_5 = 1999872275;
		break;

	case 109:
		Var0.f_3 = -1230442770;
		Var0 = {241.3574f, 361.0488f, 105.8963f};
		Var0.f_5 = 1538555582;
		break;

	case 110:
		Var0.f_3 = joaat("prop_ch2_09c_garage_door");
		Var0 = {-689.11f, 506.97f, 110.64f};
		Var0.f_5 = -961994186;
		break;

	case 111:
		Var0.f_3 = joaat("v_ilev_door_orangesolid");
		Var0 = {-1055.96f, -236.43f, 44.17f};
		Var0.f_5 = -1772472848;
		break;

	case 112:
		Var0.f_3 = joaat("prop_magenta_door");
		Var0 = {29f, 3661f, 41f};
		Var0.f_5 = -46374650;
		break;

	case 113:
		Var0.f_3 = joaat("prop_cs4_05_tdoor");
		Var0 = {32f, 3667f, 41f};
		Var0.f_5 = -358302761;
		break;

	case 114:
		Var0.f_3 = joaat("v_ilev_housedoor1");
		Var0 = {87f, -1959f, 21f};
		Var0.f_5 = -1237936041;
		break;

	case 115:
		Var0.f_3 = joaat("v_ilev_fh_frntdoor");
		Var0 = {0f, -1823f, 30f};
		Var0.f_5 = 1487374207;
		break;

	case 116:
		Var0.f_3 = joaat("p_cut_door_03");
		Var0 = {23.34f, -1897.6f, 23.05f};
		Var0.f_5 = -199126299;
		break;

	case 117:
		Var0.f_3 = joaat("p_cut_door_02");
		Var0 = {524.2f, 3081.14f, 41.16f};
		Var0.f_5 = -897071863;
		break;

	case 118:
		Var0.f_3 = joaat("v_ilev_po_door");
		Var0 = {-1910.58f, -576.01f, 19.25f};
		Var0.f_5 = -864465775;
		break;

	case 119:
		Var0.f_3 = joaat("prop_ss1_10_door_l");
		Var0 = {-720.39f, 256.86f, 80.29f};
		Var0.f_5 = -208439480;
		break;

	case 120:
		Var0.f_3 = joaat("prop_ss1_10_door_r");
		Var0 = {-718.42f, 257.79f, 80.29f};
		Var0.f_5 = -1001088805;
		break;

	case 121:
		Var0.f_3 = joaat("v_ilev_fibl_door02");
		Var0 = {106.38f, -742.7f, 46.18f};
		Var0.f_5 = 756894459;
		break;

	case 122:
		Var0.f_3 = joaat("v_ilev_fibl_door01");
		Var0 = {105.76f, -746.65f, 46.18f};
		Var0.f_5 = 476981677;
		break;

	case 123:
		Var0.f_3 = joaat("v_ilev_ct_door01");
		Var0 = {-2343.53f, 3265.37f, 32.96f};
		Var0.f_5 = 2081647379;
		break;

	case 124:
		Var0.f_3 = joaat("v_ilev_ct_door01");
		Var0 = {-2342.23f, 3267.62f, 32.96f};
		Var0.f_5 = 2081647379;
		break;

	case 125:
		Var0.f_3 = joaat("ap1_02_door_l");
		Var0 = {-1041.933f, -2748.167f, 22.0308f};
		Var0.f_5 = 169965357;
		break;

	case 126:
		Var0.f_3 = joaat("ap1_02_door_r");
		Var0 = {-1044.841f, -2746.489f, 22.0308f};
		Var0.f_5 = 311232516;
		break;

	case 128:
		Var0.f_3 = joaat("v_ilev_fb_doorshortl");
		Var0 = {-1045.12f, -232.004f, 39.4379f};
		Var0.f_5 = -1563127729;
		break;

	case 129:
		Var0.f_3 = joaat("v_ilev_fb_doorshortr");
		Var0 = {-1046.516f, -229.3581f, 39.4379f};
		Var0.f_5 = 759145763;
		break;

	case 130:
		Var0.f_3 = joaat("v_ilev_fb_door01");
		Var0 = {-1083.62f, -260.4167f, 38.1867f};
		Var0.f_5 = -84399179;
		break;

	case 131:
		Var0.f_3 = joaat("v_ilev_fb_door02");
		Var0 = {-1080.974f, -259.0204f, 38.1867f};
		Var0.f_5 = -461898059;
		break;

	case 127:
		Var0.f_3 = joaat("v_ilev_gtdoor");
		Var0 = {-1042.57f, -240.6f, 38.11f};
		Var0.f_5 = 1259065971;
		break;

	case 132:
		Var0.f_3 = joaat("prop_damdoor_01");
		Var0 = {1385.258f, -2079.949f, 52.7638f};
		Var0.f_5 = -884051216;
		break;

	case 133:
		Var0.f_3 = joaat("v_ilev_genbankdoor2");
		Var0 = {1656.57f, 4849.66f, 42.35f};
		Var0.f_5 = 243782214;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 134:
		Var0.f_3 = joaat("v_ilev_genbankdoor1");
		Var0 = {1656.25f, 4852.24f, 42.35f};
		Var0.f_5 = 714115627;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 135:
		Var0.f_3 = -1184516519;
		Var0 = {-1051.402f, -474.6847f, 36.6199f};
		Var0.f_5 = 1668106976;
		gameplay::set_bit(&Var0.f_4, 1);
		break;

	case 136:
		Var0.f_3 = -1184516519;
		Var0 = {-1049.285f, -476.6376f, 36.7584f};
		Var0.f_5 = 1382347031;
		gameplay::set_bit(&Var0.f_4, 1);
		break;

	case 137:
		Var0.f_3 = 1230099731;
		Var0 = {-1210.957f, -580.8765f, 27.2373f};
		Var0.f_5 = -966790948;
		gameplay::set_bit(&Var0.f_4, 1);
		break;

	case 138:
		Var0.f_3 = 1230099731;
		Var0 = {-1212.445f, -578.4401f, 27.2373f};
		Var0.f_5 = -2068750132;
		gameplay::set_bit(&Var0.f_4, 1);
		break;

	case 139:
		Var0.f_3 = joaat("v_ilev_roc_door4");
		Var0 = {-565.1712f, 276.6259f, 83.2863f};
		Var0.f_5 = -1716533184;
		break;

	case 140:
		Var0.f_3 = joaat("v_ilev_roc_door4");
		Var0 = {-561.2863f, 293.5043f, 87.7771f};
		Var0.f_5 = 2146505927;
		break;

	case 141:
		Var0.f_3 = joaat("p_jewel_door_l");
		Var0 = {-631.96f, -236.33f, 38.21f};
		Var0.f_5 = 1874948872;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 142:
		Var0.f_3 = joaat("p_jewel_door_r1");
		Var0 = {-630.43f, -238.44f, 38.21f};
		Var0.f_5 = -1965020851;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 145:
		Var0.f_3 = -1743257725;
		Var0 = {231.62f, 216.23f, 106.4f};
		Var0.f_5 = 1951546856;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 146:
		Var0.f_3 = -1743257725;
		Var0 = {232.72f, 213.88f, 106.4f};
		Var0.f_5 = -431382051;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 143:
		Var0.f_3 = 110411286;
		Var0 = {258.32f, 203.84f, 106.43f};
		Var0.f_5 = -293975210;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 144:
		Var0.f_3 = 110411286;
		Var0 = {260.76f, 202.95f, 106.43f};
		Var0.f_5 = -785215289;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 148:
		Var0.f_3 = -222270721;
		Var0 = {256.31f, 220.66f, 106.43f};
		Var0.f_5 = -366143778;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 147:
		Var0.f_3 = joaat("v_ilev_bk_door");
		Var0 = {266.36f, 217.57f, 110.43f};
		Var0.f_5 = 440819155;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 149:
		Var0.f_3 = joaat("v_ilev_shrf2door");
		Var0 = {-442.66f, 6015.222f, 31.8663f};
		Var0.f_5 = -588495243;
		break;

	case 150:
		Var0.f_3 = joaat("v_ilev_shrf2door");
		Var0 = {-444.4985f, 6017.06f, 31.8663f};
		Var0.f_5 = 1815504139;
		break;

	case 151:
		Var0.f_3 = joaat("v_ilev_shrfdoor");
		Var0 = {1855.685f, 3683.93f, 34.5928f};
		Var0.f_5 = 1344911780;
		break;

	case 152:
		Var0.f_3 = joaat("prop_bhhotel_door_l");
		Var0 = {-1223.35f, -172.41f, 39.98f};
		Var0.f_5 = -320891223;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 153:
		Var0.f_3 = joaat("prop_bhhotel_door_r");
		Var0 = {-1220.93f, -173.68f, 39.98f};
		Var0.f_5 = 1511747875;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 154:
		Var0.f_3 = joaat("prop_bhhotel_door_l");
		Var0 = {-1211.99f, -190.57f, 39.98f};
		Var0.f_5 = -1517722103;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 155:
		Var0.f_3 = joaat("prop_bhhotel_door_r");
		Var0 = {-1213.26f, -192.98f, 39.98f};
		Var0.f_5 = -1093199712;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 156:
		Var0.f_3 = joaat("prop_bhhotel_door_l");
		Var0 = {-1217.77f, -201.54f, 39.98f};
		Var0.f_5 = 1902048492;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 157:
		Var0.f_3 = joaat("prop_bhhotel_door_r");
		Var0 = {-1219.04f, -203.95f, 39.98f};
		Var0.f_5 = -444768985;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 158:
		Var0.f_3 = joaat("prop_ch3_04_door_01l");
		Var0 = {2514.32f, -317.34f, 93.32f};
		Var0.f_5 = 404057594;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 159:
		Var0.f_3 = joaat("prop_ch3_04_door_01r");
		Var0 = {2512.42f, -319.26f, 93.32f};
		Var0.f_5 = -1417472813;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 160:
		Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
		Var0 = {2333.23f, 2574.97f, 47.03f};
		Var0.f_5 = -1376084479;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 161:
		Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
		Var0 = {2329.65f, 2576.64f, 47.03f};
		Var0.f_5 = 457472151;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 162:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {16.1279f, -1114.605f, 29.9469f};
		Var0.f_5 = 1071759151;
		break;

	case 163:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {18.572f, -1115.495f, 29.9469f};
		Var0.f_5 = -2119023917;
		break;

	case 165:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {1698.176f, 3751.506f, 34.8553f};
		Var0.f_5 = -1488490473;
		break;

	case 166:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {1699.937f, 3753.42f, 34.8553f};
		Var0.f_5 = -511187813;
		break;

	case 167:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {244.7274f, -44.0791f, 70.91f};
		Var0.f_5 = -248569395;
		break;

	case 168:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {243.8379f, -46.5232f, 70.91f};
		Var0.f_5 = 989443413;
		break;

	case 169:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {845.3624f, -1024.539f, 28.3448f};
		Var0.f_5 = 2022251829;
		break;

	case 170:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {842.7684f, -1024.539f, 23.3448f};
		Var0.f_5 = 649820567;
		break;

	case 171:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {-326.1122f, 6075.27f, 31.6047f};
		Var0.f_5 = 537455378;
		break;

	case 172:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {-324.273f, 6077.109f, 31.6047f};
		Var0.f_5 = 1121431731;
		break;

	case 173:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {-665.2424f, -944.3256f, 21.9792f};
		Var0.f_5 = -1437380438;
		break;

	case 174:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {-662.6414f, -944.3256f, 21.9792f};
		Var0.f_5 = -946336965;
		break;

	case 175:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {-1313.826f, -389.1259f, 36.8457f};
		Var0.f_5 = 1893144650;
		break;

	case 176:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {-1314.465f, -391.6472f, 36.8457f};
		Var0.f_5 = 435841678;
		break;

	case 177:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {-1114.009f, 2689.77f, 18.7041f};
		Var0.f_5 = 948508314;
		break;

	case 178:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {-1112.071f, 2691.505f, 18.7041f};
		Var0.f_5 = -1796714665;
		break;

	case 179:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {-3164.845f, 1081.392f, 20.9887f};
		Var0.f_5 = -1155247245;
		break;

	case 180:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {-3163.812f, 1083.778f, 20.9887f};
		Var0.f_5 = 782482084;
		break;

	case 181:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {2570.905f, 303.3556f, 108.8848f};
		Var0.f_5 = -1194470801;
		break;

	case 182:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {2568.304f, 303.3556f, 108.8848f};
		Var0.f_5 = -2129698061;
		break;

	case 183:
		Var0.f_3 = joaat("v_ilev_gc_door04");
		Var0 = {813.1779f, -2148.27f, 29.7689f};
		Var0.f_5 = 1071759151;
		break;

	case 184:
		Var0.f_3 = joaat("v_ilev_gc_door03");
		Var0 = {810.5769f, -2148.27f, 29.7689f};
		Var0.f_5 = -2119023917;
		break;

	case 164:
		Var0.f_3 = joaat("v_ilev_gc_door01");
		Var0 = {6.8179f, -1098.209f, 29.9469f};
		Var0.f_5 = 1487704245;
		gameplay::set_bit(&Var0.f_4, 3);
		break;

	case 185:
		Var0.f_3 = joaat("v_ilev_gc_door01");
		Var0 = {827.5342f, -2160.493f, 29.7688f};
		Var0.f_5 = 1529812051;
		gameplay::set_bit(&Var0.f_4, 3);
		break;

	case 186:
		Var0.f_3 = joaat("prop_lrggate_01c_l");
		Var0 = {-1107.01f, 289.38f, 64.76f};
		Var0.f_5 = 904342475;
		break;

	case 187:
		Var0.f_3 = joaat("prop_lrggate_01c_r");
		Var0 = {-1101.62f, 290.36f, 64.76f};
		Var0.f_5 = -795418380;
		break;

	case 188:
		Var0.f_3 = joaat("prop_lrggate_01c_l");
		Var0 = {-1138.64f, 300.82f, 67.18f};
		Var0.f_5 = -1502457334;
		break;

	case 189:
		Var0.f_3 = joaat("prop_lrggate_01c_r");
		Var0 = {-1137.05f, 295.59f, 67.18f};
		Var0.f_5 = -1994188940;
		break;

	case 190:
		Var0.f_3 = joaat("v_ilev_bl_doorel_l");
		Var0 = {-2053.16f, 3239.49f, 30.5f};
		Var0.f_5 = -621770121;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 191:
		Var0.f_3 = joaat("v_ilev_bl_doorel_r");
		Var0 = {-2054.39f, 3237.23f, 30.5f};
		Var0.f_5 = 1018580481;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 192:
		Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
		Var0 = {-108.91f, 6469.11f, 31.91f};
		Var0.f_5 = 421926217;
		break;

	case 193:
		Var0.f_3 = joaat("prop_fnclink_03gate5");
		Var0 = {-182.91f, 6168.37f, 32.14f};
		Var0.f_5 = -1331552374;
		gameplay::set_bit(&Var0.f_4, 2);
		break;
	}
	switch (iParam0) {
	case 196:
		Var0.f_3 = joaat("v_ilev_csr_door_l");
		Var0 = {-59.89f, -1092.95f, 26.88f};
		Var0.f_5 = -293141277;
		break;

	case 197:
		Var0.f_3 = joaat("v_ilev_csr_door_r");
		Var0 = {-60.55f, -1094.75f, 26.89f};
		Var0.f_5 = 506750037;
		break;

	case 194:
		Var0.f_3 = joaat("v_ilev_csr_door_l");
		Var0 = {-39.13f, -1108.22f, 26.72f};
		Var0.f_5 = 1496005418;
		break;

	case 195:
		Var0.f_3 = joaat("v_ilev_csr_door_r");
		Var0 = {-37.33f, -1108.87f, 26.72f};
		Var0.f_5 = -1863079210;
		break;

	case 198:
		Var0.f_3 = joaat("prop_ron_door_01");
		Var0 = {1943.73f, 3803.63f, 32.31f};
		Var0.f_5 = -2018911784;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 199:
		Var0.f_3 = joaat("v_ilev_genbankdoor2");
		Var0 = {316.39f, -276.49f, 54.52f};
		Var0.f_5 = -93934272;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 200:
		Var0.f_3 = joaat("v_ilev_genbankdoor1");
		Var0 = {313.96f, -275.6f, 54.52f};
		Var0.f_5 = 667682830;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 201:
		Var0.f_3 = joaat("v_ilev_genbankdoor2");
		Var0 = {-2965.71f, 484.22f, 16.05f};
		Var0.f_5 = 1876735830;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 202:
		Var0.f_3 = joaat("v_ilev_genbankdoor1");
		Var0 = {-2965.82f, 481.63f, 16.05f};
		Var0.f_5 = -2112857171;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 205:
		Var0.f_3 = joaat("v_ilev_abbmaindoor");
		Var0 = {962.1f, -2183.83f, 31.06f};
		Var0.f_5 = 2046930518;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 206:
		Var0.f_3 = joaat("v_ilev_abbmaindoor2");
		Var0 = {961.79f, -2187.08f, 31.06f};
		Var0.f_5 = 1208502884;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 207:
		Var0.f_3 = joaat("prop_ch3_04_door_02");
		Var0 = {2508.43f, -336.63f, 115.76f};
		Var0.f_5 = 1986432421;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 208:
		Var0.f_3 = joaat("prop_ch1_07_door_01l");
		Var0 = {-2255.19f, 322.26f, 184.93f};
		Var0.f_5 = -722798986;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 209:
		Var0.f_3 = joaat("prop_ch1_07_door_01r");
		Var0 = {-2254.06f, 319.7f, 184.93f};
		Var0.f_5 = 204301578;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 210:
		Var0.f_3 = joaat("prop_ch1_07_door_01l");
		Var0 = {-2301.13f, 336.91f, 184.93f};
		Var0.f_5 = -320140460;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 211:
		Var0.f_3 = joaat("prop_ch1_07_door_01r");
		Var0 = {-2298.57f, 338.05f, 184.93f};
		Var0.f_5 = 65222916;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 212:
		Var0.f_3 = joaat("prop_ch1_07_door_01l");
		Var0 = {-2222.32f, 305.86f, 184.93f};
		Var0.f_5 = -920027322;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 213:
		Var0.f_3 = joaat("prop_ch1_07_door_01r");
		Var0 = {-2221.19f, 303.3f, 184.93f};
		Var0.f_5 = -58432001;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 214:
		Var0.f_3 = joaat("prop_ch1_07_door_01l");
		Var0 = {-2280.6f, 265.43f, 184.93f};
		Var0.f_5 = -2007378629;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 215:
		Var0.f_3 = joaat("prop_ch1_07_door_01r");
		Var0 = {-2278.04f, 266.57f, 184.93f};
		Var0.f_5 = 418772613;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 216:
		Var0.f_3 = joaat("prop_gar_door_04");
		Var0 = {778.31f, -1867.49f, 30.66f};
		Var0.f_5 = 1679064921;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 217:
		Var0.f_3 = joaat("prop_gate_tep_01_l");
		Var0 = {-721.35f, 91.01f, 56.68f};
		Var0.f_5 = 412198396;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 218:
		Var0.f_3 = joaat("prop_gate_tep_01_r");
		Var0 = {-728.84f, 88.64f, 56.68f};
		Var0.f_5 = -1053755588;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 219:
		Var0.f_3 = joaat("prop_artgallery_02_dr");
		Var0 = {-2287.62f, 363.9f, 174.93f};
		Var0.f_5 = -53446139;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 220:
		Var0.f_3 = joaat("prop_artgallery_02_dl");
		Var0 = {-2289.78f, 362.91f, 174.93f};
		Var0.f_5 = 1333960556;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 221:
		Var0.f_3 = joaat("prop_artgallery_02_dr");
		Var0 = {-2289.86f, 362.88f, 174.93f};
		Var0.f_5 = -41786493;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 222:
		Var0.f_3 = joaat("prop_artgallery_02_dl");
		Var0 = {-2292.01f, 361.89f, 174.93f};
		Var0.f_5 = 1750120734;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 223:
		Var0.f_3 = joaat("prop_fnclink_07gate1");
		Var0 = {1803.94f, 3929.01f, 33.72f};
		Var0.f_5 = 1661506222;
		break;

	case 203:
		Var0.f_3 = joaat("v_ilev_genbankdoor2");
		Var0 = {-348.81f, -47.26f, 49.39f};
		Var0.f_5 = -2116116146;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 204:
		Var0.f_3 = joaat("v_ilev_genbankdoor1");
		Var0 = {-351.26f, -46.41f, 49.39f};
		Var0.f_5 = -74083138;
		gameplay::set_bit(&Var0.f_4, 2);
		break;

	case 224:
		Var0.f_3 = joaat("prop_abat_slide");
		Var0 = {962.9084f, -2105.814f, 34.6432f};
		Var0.f_5 = -1670085357;
		break;
	}
	return Var0;
}

//Position - 0x5E10
int func_65()
{
	if ((func_67() == -1 || func_67() == 999) && func_66() != 0) {
		return 1;
	}
	return 0;
}

// Position - 0x5E40
int func_66() { return Global_25191; }

// Position - 0x5E4B
int func_67() { return Global_25190; }

// Position - 0x5E56
void func_68(int iParam0) {
	if (iParam0 == 2) {
	}
	else if (iParam0 == 0) {
	}
	iLocal_106 = iParam0;
	iLocal_104 = 0;
	iLocal_95 = 7;
}

// Position - 0x5E77
int func_69() {
	vector3 vVar0;
	float fVar3;
	float fVar4;
	int iVar5;

	if (!ped::is_ped_injured(player::player_ped_id())) {
		vVar0 = {vLocal_90};
		fVar3 = 999999f;
		iVar5 = 1;
		iVar5 = 0;
		while (iVar5 < func_71() + 1) {
			if (iVar5 > 0) {
				fVar4 = system::vdist2(vVar0, func_70(iVar5));
				if (fVar3 > fVar4) {
					fVar3 = fVar4;
				}
			}
			iVar5++;
		}
	}
	return 67;
}

// Position - 0x5ED8
Vector3 func_70(int iParam0) {
	switch (iParam0) {
	case 1: return -572.041f, 294.196f, 79.9374f;

	case 2: return 1992.27f, 3050.6f, 47.89f;

	default:
	}
	return 0f, 0f, 0f;
}

// Position - 0x5F1A
int func_71() { return 1; }

// Position - 0x5F23
bool func_72(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = func_73(iParam0);
	if (iVar0 == -1) {
		return false;
	}
	if (!player::is_player_playing(player::get_player_index())) {
		return false;
	}
	if (func_79(0)) {
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

// Position - 0x5FDB
int func_73(int iParam0) {
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

// Position - 0x6016
void func_74(int *iParam0) {
	int iVar0;

	if (*iParam0 == -1) {
		return;
	}
	iVar0 = func_73(*iParam0);
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

// Position - 0x606D
void func_75(int iParam0, int iParam1, char *sParam2, int iParam3, char *sParam4, int iParam5, int iParam6) {
	int iVar0;

	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("context_controller")) < 1) {
	}
	if (streaming::is_player_switch_in_progress()) {
		if (*iParam0 != -1) {
			func_74(iParam0);
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

// Position - 0x6198
bool func_76(var uParam0) { return true; }

// Position - 0x61A1
bool func_77(int *iParam0, vector3 vParam1, vector3 vParam4, int iParam7) {
	int iVar0;
	var uVar1;
	var uVar4;

	iParam0->f_12 = 0;
	iVar0 = 0;
	switch (*iParam0) {
	case 0:
		iParam0->f_2 = worldprobe::start_shape_test_los_probe(vParam1, vParam4, 19, iParam7, 7);
		*iParam0 = 1;
		break;

	case 1:
		if (worldprobe::get_shape_test_result(iParam0->f_2, &iParam0->f_9, &uVar1, &uVar4, &iVar0) == 2) {
			if (iParam0->f_9 == 0) {
				*iParam0 = 3;
				return true;
			}
			else {
				iParam0->f_12 = 1;
				*iParam0 = 0;
				return false;
			}
		}
		else if (worldprobe::get_shape_test_result(iParam0->f_2, &iParam0->f_9, &uVar1, &uVar4, &iVar0) == 0) {
			*iParam0 = 3;
		}
		break;

	case 3: *iParam0 = 0; break;
	}
	return false;
}

// Position - 0x6245
var func_78() { return Global_68131; }

// Position - 0x6251
bool func_79(int iParam0) {
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

// Position - 0x62AB
var func_80(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x62E6
bool func_81() { return gameplay::get_game_timer() <= Global_17290.f_5745 + 100; }

// Position - 0x62FB
bool func_82() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("player_timetable_scene")) > 0) {
		return true;
	}
	return false;
}

// Position - 0x6315
bool func_83(int iParam0) {
	if (iParam0) {
		return Global_17151.f_4 && Global_17151.f_104 == 4;
	}
	return Global_17151.f_4;
}

// Position - 0x633E
void func_84(int *iParam0, int iParam1) { func_85(iParam0, iParam1); }

// Position - 0x634E
void func_85(var *uParam0, var uParam1) { *uParam0 |= uParam1; }

// Position - 0x635F
int func_86() {
	if (func_100(6) || func_100(7)) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			return func_99(67);
		}
	}
	return 1;
}

// Position - 0x6391
bool func_87() {
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

// Position - 0x649B
bool func_88(int iParam0) {
	int iVar0;

	if (player::is_player_playing(player::player_id())) {
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				iVar0 = func_42();
				if (!func_44(iVar0)) {
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_95() || Global_100747 ||
						Global_25192 || func_94() || func_80(8, -1) || func_93() || func_92() || func_91() ||
						func_82() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 1:
					if (player::is_player_being_arrested(player::player_id(), 1) || func_95() || Global_25192 ||
						func_94() || func_80(8, -1) || func_91() || func_93() || func_92() || func_82() ||
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_95() || Global_100747 ||
						Global_25192 || func_94() || func_80(8, -1) || func_91() || func_93() || func_92() ||
						func_82() || Global_101700.f_6647.f_919[iVar0] == 5 || Global_36328 != -1) {
						return false;
					}
					break;

				case 3:
					if (ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_95() || Global_100747 ||
						Global_25192 || func_94() || func_80(8, -1) || func_93() || func_92() || func_82() ||
						Global_101700.f_6647.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 4:
					if (func_95() || player::get_player_wanted_level(player::player_id()) > 0 || func_80(8, -1) ||
						func_82() || func_90() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 5:
					if (func_80(8, -1) || func_93() || func_92() || func_90() || func_89()) {
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
							player::is_player_climbing(player::player_id()) || func_95() || Global_25192 || func_94() ||
							func_80(8, -1) || func_92() || func_91() || func_82() ||
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
						player::is_player_being_arrested(player::player_id(), 1) || func_95() || func_92() ||
						Global_100747 || Global_25192 || func_94() || Global_36912 || func_80(8, -1) || func_91() ||
						func_90() || func_82() || Global_101700.f_6647.f_919[iVar0] == 5) {
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
						player::is_player_climbing(player::player_id()) || func_95() || Global_100747 || Global_25192 ||
						func_94() || func_80(8, -1) || func_91() || func_90() || func_93() || func_92() || func_82()) {
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

// Position - 0x6BB8
var func_89() { return Global_91530.f_1; }

// Position - 0x6BC6
int func_90() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 13);
	}
	return 0;
}

// Position - 0x6BEC
int func_91() {
	if (Global_69962) {
		return 1;
	}
	else if (Global_55816 && !Global_55822) {
		return 1;
	}
	return 0;
}

// Position - 0x6C16
bool func_92() { return Global_91543.f_304 > 0; }

// Position - 0x6C27
bool func_93() { return Global_91543.f_303 > 0; }

// Position - 0x6C38
var func_94() { return Global_1315233; }

// Position - 0x6C44
int func_95() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0x6C60
bool func_96() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("stripperhome")) > 0) {
		return true;
	}
	return false;
}

// Position - 0x6C7A
var func_97() { return Global_87656; }

// Position - 0x6C86
int func_98(int iParam0) {
	switch (iParam0) {
	case 0: return 1;

	case 1:
		if (func_100(6) || func_100(7)) {
			return 1;
		}
		else {
			return func_98(3);
		}
		break;

	case 2: return 1;

	case 3:
		if (func_112(5)) {
			if (func_88(4)) {
				return 1;
			}
		}
		break;
	}
	return 0;
}

// Position - 0x6CF8
bool func_99(int iParam0) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return false;
	}
	return ui::does_blip_exist(Global_25501[iVar0 /*23*/].f_19);
}

// Position - 0x6D34
bool func_100(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x6D42
void func_101() {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	int iVar23;

	if (bLocal_146) {
		vVar0 = {func_70(iLocal_148)};
		vVar3 = {entity::get_entity_coords(player::player_ped_id(), 1)};
		fVar6 = system::vdist2(vVar3, vVar0);
		if (fVar6 > 45f || Global_101662)
			&&!entity::does_entity_exist(iLocal_143) {
				if (Global_101662) {
					Global_101662 = 0;
				}
				vVar7 = {-573.1373f, 294.0269f, 78.1765f};
				vVar10 = {-574.1169f, 292.7964f, 78.1766f};
				vVar13 = {1995.614f, 3049.877f, 46.2153f};
				vVar16 = {1995.488f, 3047.383f, 46.2153f};
				fVar19 = 172.6813f;
				fVar20 = 274.5094f;
				fVar21 = 142.6717f;
				fVar22 = 44.8785f;
				iVar23 = interior::get_interior_at_coords(func_70(iLocal_148));
				if (interior::is_valid_interior(iVar23)) {
					interior::_load_interior(iVar23);
					while (!interior::is_interior_ready(iVar23)) {
						system::wait(0);
					}
					interior::unpin_interior(iVar23);
				}
				iLocal_143 = ped::create_ped(26, iLocal_141, func_103(iLocal_148 == 1, vVar7, vVar13),
											 func_102(iLocal_148 == 1, fVar19, fVar21), 1, 1);
				iLocal_144 = ped::create_ped(26, iLocal_142, func_103(iLocal_148 == 1, vVar10, vVar16),
											 func_102(iLocal_148 == 1, fVar20, fVar22), 1, 1);
				entity::set_entity_as_mission_entity(iLocal_143, 1, 0);
				entity::set_entity_as_mission_entity(iLocal_144, 1, 0);
				ped::set_blocking_of_non_temporary_events(iLocal_143, 1);
				ped::set_blocking_of_non_temporary_events(iLocal_144, 1);
				iLocal_160 = 1;
				gameplay::clear_bit(&Global_101661, 10);
				iLocal_147 = -1;
				if (fVar6 < 20f * 20f) {
					iLocal_147 = 1;
					ai::task_start_scenario_in_place(iLocal_143, "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
					ai::task_start_scenario_in_place(iLocal_144, "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
				}
				else {
					iLocal_147 = 0;
					ai::task_stand_still(iLocal_143, -1);
					entity::freeze_entity_position(iLocal_143, 1);
					ai::task_stand_still(iLocal_144, -1);
					entity::freeze_entity_position(iLocal_144, 1);
				}
				iLocal_145 = 1;
			}
		else {
			if (fVar6 <= 45f) {
			}
			else if (entity::does_entity_exist(iLocal_143)) {
			}
			iLocal_145 = 0;
		}
	}
	else {
		iLocal_145 = 0;
	}
}

// Position - 0x6F2C
var func_102(bool bParam0, float fParam1, float fParam2) {
	if (bParam0) {
		return fParam1;
	}
	return fParam2;
}

// Position - 0x6F43
Vector3 func_103(bool bParam0, vector3 vParam1, vector3 vParam4) {
	if (bParam0) {
		return vParam1;
	}
	return vParam4;
}

// Position - 0x6F5E
bool func_104() {
	if (bLocal_146) {
		return streaming::has_model_loaded(iLocal_141) & streaming::has_model_loaded(iLocal_142) &
			   streaming::has_model_loaded(joaat("prop_dart_1"));
	}
	return true;
}

// Position - 0x6F8E
void func_105() {
	int iVar0;

	if (bLocal_146) {
		iVar0 = func_69();
		switch (iVar0) {
		case 66:
			switch (gameplay::get_random_int_in_range(0, 3)) {
			case 0: iLocal_141 = joaat("a_m_y_vinewood_01"); break;

			case 1: iLocal_141 = joaat("a_m_y_stlat_01"); break;

			case 2: iLocal_141 = joaat("a_m_y_vinewood_04"); break;
			}
			switch (gameplay::get_random_int_in_range(0, 2)) {
			case 0: iLocal_142 = joaat("a_m_y_stwhi_02"); break;

			case 1: iLocal_142 = joaat("a_m_y_vinewood_03"); break;
			}
			iLocal_148 = 1;
			break;

		case 67:
			switch (gameplay::get_random_int_in_range(0, 2)) {
			case 0:
				iLocal_141 = joaat("a_f_m_salton_01");
				iLocal_142 = joaat("a_f_o_salton_01");
				break;

			case 1:
				iLocal_141 = joaat("a_f_o_salton_01");
				iLocal_142 = joaat("a_f_m_salton_01");
				break;
			}
			iLocal_148 = 2;
			break;
		}
		streaming::request_model(iLocal_141);
		streaming::request_model(iLocal_142);
		streaming::request_model(joaat("prop_dart_1"));
		if (entity::does_entity_exist(iLocal_143)) {
			entity::set_entity_as_mission_entity(iLocal_143, 1, 0);
		}
		if (entity::does_entity_exist(iLocal_144)) {
			entity::set_entity_as_mission_entity(iLocal_144, 1, 0);
		}
	}
}

// Position - 0x7096
void func_106(int *iParam0, int iParam1) { *iParam0 |= iParam1; }

// Position - 0x70A7
void func_107(int iParam0) { iLocal_95 = iParam0; }

// Position - 0x70B3
void func_108(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x71BC
int func_109() {
	if (gameplay::is_pc_version()) {
		if (gameplay::_0xD10282B6E3751BA0() == 1f) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x71D9
int func_110() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 20);
	}
	return 0;
}

// Position - 0x71FF
bool func_111(int iParam0, int iParam1) {
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

// Position - 0x724C
bool func_112(int iParam0) { return func_113(iParam0, Global_35781); }

// Position - 0x725D
int func_113(int iParam0, int iParam1) {
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

// Position - 0x743E
bool func_114(int *iParam0, int iParam1) { return (iParam0 & iParam1) != 0; }

// Position - 0x744D
void func_115() {
	int iVar0;

	StringCopy(&Local_53, "Darts", 64);
	sLocal_101 = "PLAY_DARTS";
	iLocal_99 = 1;
	fLocal_117 = 2.5f;
	vLocal_134 = {0f, -0.5f, 0f};
	iLocal_105 = 67;
	iVar0 = 0;
	if (entity::is_entity_at_coord(player::player_ped_id(), func_70(2), 100f, 100f, 100f, 0, 0, 0)) {
		iVar0 = 1;
	}
	if (!iVar0) {
		func_68(0);
	}
	if (func_100(6) || func_100(7)) {
		iLocal_103 = 0;
	}
	iLocal_140 = interior::get_interior_at_coords(vLocal_90);
	func_106(&iLocal_94, 1);
	func_84(&iLocal_94, 524288);
	iLocal_97 = 20500;
}

// Position - 0x74E3
void func_116(int *iParam0, int iParam1) { func_117(iParam0, iParam1); }

// Position - 0x74F3
void func_117(int *iParam0, var uParam1) { *iParam0 -= (*iParam0 & uParam1); }

// Position - 0x7508
void func_118(int iParam0) {
	if (iParam0) {
		if (iLocal_105 != 263) {
			func_108(iLocal_105, 0, 0);
		}
	}
	func_74(&iLocal_96);
	if (func_114(iLocal_94, 2)) {
		func_4();
		func_116(&iLocal_94, 2);
		func_6(&iLocal_98);
	}
	iLocal_98 = -1;
	func_119();
	script::terminate_this_thread();
}

// Position - 0x7551
void func_119() {
	func_116(&iLocal_94, 4);
	func_120();
	if (script::is_thread_active(iLocal_52)) {
		player::force_cleanup_for_thread_with_this_id(iLocal_52, 3);
	}
	if (!gameplay::is_string_null(&Local_69)) {
		if (ui::get_length_of_literal_string(&Local_69) != 0) {
			script::set_script_as_no_longer_needed(&Local_69);
		}
	}
}

// Position - 0x758E
void func_120() {
	if (iLocal_159) {
		func_121(func_69());
	}
}

// Position - 0x75A3
void func_121(int iParam0) {
	if (iParam0 != 263) {
		func_108(iParam0, 1, 0);
	}
}
