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
struct<563> Local_45 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0
};
var uLocal_608 = 0;
var uLocal_609 = 0;
var uLocal_610 = 0;
var uLocal_611 = 0;
var uLocal_612 = 0;
var uLocal_613 = 0;
var uLocal_614 = 0;
var uLocal_615 = 0;
var uLocal_616 = 0;
var uLocal_617 = 0;
var uLocal_618 = 0;
var uLocal_619 = 0;
var uLocal_620 = 0;
int iLocal_621 = 0;
int iLocal_622 = 0;
int iLocal_623 = 0;
int iLocal_624 = 0;
int iLocal_625 = 0;
int iLocal_626 = 0;
int iLocal_627 = 0;
int iLocal_628 = 0;
float fLocal_629 = 0f;
int iLocal_630 = 0;
int iLocal_631 = 0;
int iLocal_632 = 0;
int iLocal_633 = 0;
int iLocal_634 = 0;
#pragma endregion //}

void __EntryFunction__() {
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
	bool bVar11;

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
	iLocal_623 = iLocal_622;
	iLocal_624 = iLocal_623;
	fLocal_629 = 100f;
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("mission_stat_watcher")) > 1) {
		script::terminate_this_thread();
	}
	Global_55816 = 0;
	Global_55823 = 0;
	iVar0 = 1;
	if (player::has_force_cleanup_occurred(18)) {
		func_108();
		Global_67917 = 0;
		Global_55817 = 0;
		Global_55843 = 0;
		script::terminate_this_thread();
	}
	iVar1 = 0;
	system::wait(0);
	func_106();
	while (!Global_55815) {
		system::wait(200);
		if (Global_55823) {
			func_108();
			script::terminate_this_thread();
		}
	}
	Global_55830 = 0;
	Global_55817 = 1;
	while (!Global_55816) {
		if (Global_67917 > 0) {
			func_100();
			if (Global_55850 == -1) {
				Global_55850 = gameplay::get_game_timer();
			}
			else if (gameplay::get_game_timer() - Global_55850 > 1000) {
				func_99();
			}
		}
		if (Global_55823) {
			func_108();
			Global_55817 = 0;
			script::terminate_this_thread();
		}
		system::wait(0);
	}
	Global_55817 = 0;
	if (func_98()) {
		while (func_98()) {
			system::wait(0);
		}
	}
	iVar2 = 0;
	while (!iVar2) {
		if (Global_55818 != iLocal_631) {
			if (Global_55818) {
				system::settimerb(0);
				iLocal_621 = 0;
				Global_55833 = 0;
			}
			iLocal_631 = Global_55818;
		}
		while (Global_55822) {
			system::wait(1000);
		}
		if (Global_55816 && !Global_55823) {
			if (Global_55815 || iLocal_633) {
				Global_55820 = 0;
				if (iLocal_632) {
				}
				if (Global_55816) {
				}
				if (iLocal_632 != Global_55816) {
					func_97(&Local_45);
					Local_45.f_562 = 1;
					func_96();
					func_95();
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < Global_67917) {
						if (Global_67918[iVar3 /*9*/] > 0) {
							if (MissionObjectives[Global_67918[iVar3 /*9*/] /*13*/] == 4) {
								if (!MissionObjectives[Global_67918[iVar3 /*9*/] /*13*/].f_7) {
									if (MissionObjectives[Global_67918[iVar3 /*9*/] /*13*/].f_3) {
										if (Global_67918[iVar3 /*9*/].f_1 == 0) {
											Global_67918[iVar3 /*9*/].f_3 = 5;
										}
									}
								}
							}
						}
						iVar3++;
					}
					iVar4 = 0;
					if (Global_69962 && !Global_55812 || Global_55824) {
						iVar4 = 1;
					}
					iVar5 = 0;
					if (cam::is_screen_faded_in() || cam::is_screen_fading_in()) {
						iVar5 = 1;
					}
					else {
						if (Global_91530.f_8) {
							iVar5 = 1;
						}
						if (Global_55842) {
							iVar5 = 1;
						}
					}
					if (func_94(0)) {
						iVar5 = 1;
						Global_55842 = 1;
					}
					iVar6 = Global_68068;
					if (Global_55825) {
						func_91(Global_55826);
						iVar0 = 2;
						func_90(&Local_45, "HISHPA", &Global_55837, 0);
						if (iVar6 == 69 || iVar6 == 70) {
							func_89(&Local_45, 3, "ACTATAKE_AG", "", Global_101700.f_1.f_126[Global_55826 /*23*/], 0, 0,
									0);
						}
						else {
							func_89(&Local_45, 3, "POTATAKE", "", Global_101700.f_1.f_126[Global_55826 /*23*/], 0, 0,
									0);
						}
						iVar7 = 0;
						iVar7 = 0;
						while (iVar7 < Global_88054[Global_55826 /*38*/].f_37) {
							if (Global_88054[Global_55826 /*38*/].f_31[iVar7] > 0) {
								func_89(&Local_45, 3, func_88(Global_88054[Global_55826 /*38*/].f_25[iVar7]), "",
										-1 * Global_88054[Global_55826 /*38*/].f_31[iVar7], 0, 0, 0);
							}
							iVar7++;
						}
						if (Global_101700.f_1.f_126[Global_55826 /*23*/].f_2[0] > 0 || iVar6 == 74 || iVar6 == 75 ||
							iVar6 == 69 || iVar6 == 70) {
							func_89(&Local_45, 3, "ACTATAKE_M", "", Global_101700.f_1.f_126[Global_55826 /*23*/].f_2[0],
									0, 0, 0);
						}
						if (Global_101700.f_1.f_126[Global_55826 /*23*/].f_2[1] > 0 || iVar6 == 74 || iVar6 == 75) {
							func_89(&Local_45, 3, "ACTATAKE_F", "", Global_101700.f_1.f_126[Global_55826 /*23*/].f_2[1],
									0, 0, 0);
						}
						if (Global_101700.f_1.f_126[Global_55826 /*23*/].f_2[2] > 0 || iVar6 == 74 || iVar6 == 75) {
							func_89(&Local_45, 3, "ACTATAKE_T", "", Global_101700.f_1.f_126[Global_55826 /*23*/].f_2[2],
									0, 0, 0);
						}
						if (Global_88044.f_7 > 0) {
							func_89(&Local_45, 3, "ACTATAKE_L", "", Global_88044.f_7, 0, 0, 0);
						}
						iVar8 = func_86(func_87(Global_55826));
						iVar9 = 0;
						iVar10 = 0;
						iVar7 = 0;
						while (iVar7 < Global_87853[iVar8 /*19*/]) {
							if (!func_85(Global_101700.f_1.f_12[iVar8 /*6*/][iVar7])) {
								iVar9 += Global_101700.f_1.f_126[Global_55826 /*23*/].f_17[iVar7];
							}
							else {
								iVar10 += Global_101700.f_1.f_126[Global_55826 /*23*/].f_17[iVar7];
							}
							iVar7++;
						}
						if (iVar6 == 74 || iVar6 == 75) {
							func_89(&Local_45, 3, "LACKTAKE", "", iVar9, 0, 0, 0);
						}
						else {
							func_89(&Local_45, 3, "CREWTAKE", "", iVar9, 0, 0, 0);
						}
						if (iVar10 > 0) {
							if (!func_94(0)) {
								switch (iVar6) {
								case 90: stats::stat_set_int(joaat("hcs_penalty_jewel_funeral"), iVar10, 1); break;

								case 93: stats::stat_set_int(joaat("hcs_penalty_paleto_funeral"), iVar10, 1); break;

								case 69:
								case 70: stats::stat_set_int(joaat("hcs_penalty_bureau_funeral"), iVar10, 1); break;

								case 84:
								case 85: stats::stat_set_int(joaat("hcs_penalty_bigs_funeral"), iVar10, 1); break;
								}
							}
							func_89(&Local_45, 3, "HSTENDPFUN", "", iVar10, 0, 0, 0);
						}
					}
					else {
						func_90(&Local_45, "MISHPA", &Global_55837, 0);
					}
					if (Global_67917 > 0) {
						func_70(&Local_45);
					}
					if (!Global_55812) {
						func_64();
					}
					while (!iVar5) {
						if (cam::is_screen_faded_in() || cam::is_screen_fading_in()) {
							iVar5 = 1;
						}
						system::wait(0);
					}
					if ((iVar5 || Global_55842) && !iVar4) {
						if (!Global_55824) {
							func_60(&Local_45, 0, 0);
						}
						bVar11 = false;
						if (!Global_68067) {
							switch (Global_68068) {
							case 50:
							case 51:
							case 52:
								audio::set_audio_flag("HoldMissionCompleteWhenPrepared", 1);
								func_56(1);
								bVar11 = true;
								break;

							default:
								audio::set_audio_flag("HoldMissionCompleteWhenPrepared", 1);
								func_56(0);
								bVar11 = true;
								break;
							}
						}
						else {
							audio::set_audio_flag("HoldMissionCompleteWhenPrepared", 1);
							func_56(1);
							bVar11 = true;
						}
						iVar1 = func_55();
						ui::request_additional_text("MISHSTA", 3);
						while (!ui::has_additional_text_loaded(3)) {
							system::wait(0);
						}
						iLocal_634 = 1;
						while (cutscene::is_cutscene_playing()) {
							system::wait(0);
						}
						while (player::is_player_dead(player::get_player_index())) {
							system::wait(0);
						}
						func_60(&Local_45, 1, 0);
						audio::set_audio_flag("HoldMissionCompleteWhenPrepared", 0);
						if (bVar11) {
							while (!audio::_0x6F259F82D873B8B8()) {
								system::wait(0);
							}
						}
						audio::unregister_script_with_audio();
					}
					if (Global_55815) {
						iLocal_633 = 1;
						Global_55815 = 0;
					}
					system::settimera(0);
				}
				if (iLocal_634 && !Global_55823) {
					if (script::_get_number_of_instances_of_script_with_name_hash(joaat("appcamera")) > 0) {
						func_52(0);
					}
					if (Global_67917 > 0 || Global_55812) {
						if (Global_55842) {
							graphics::_set_2d_layer(7);
						}
						if (iVar1 && !Global_55812) {
							Global_36684 = 1;
						}
						if (!Global_55824) {
							if (func_21(&Local_45, 0, system::to_float(iVar0), 0, 0, 0)) {
								Global_55823 = 1;
							}
							func_20();
						}
						if (Global_55842) {
							graphics::_set_2d_layer(7);
						}
					}
					func_19(1);
					if (!cam::is_screen_faded_in()) {
						func_17();
					}
					if (!func_16(0)) {
						switch (func_14("AM_H_PASS")) {
						case 2: func_11("AM_H_PASS", 3, 2000, 2500, 10000, 7, 0, 0, 0); break;

						case 1: func_10(0); break;
						}
					}
				}
				iLocal_632 = Global_55816;
				if (Global_55813) {
				}
				else {
					player::is_player_dead(player::get_player_index());
					if (entity::get_entity_health(player::get_player_ped(player::get_player_index())) < 1) {
						Global_55824 = 1;
					}
					if (func_98() || func_9() || Global_55823 || G_TextMessageConfig || Global_55824 || !iLocal_634) {
						Global_55812 = 0;
						Global_55816 = 0;
						iLocal_633 = 0;
						Global_55819 = 0;
						Global_55820 = 0;
						Global_55830 = 0;
						Global_55833 = 0;
						func_19(0);
						func_2();
						Global_55823 = 0;
						iVar2 = 1;
					}
				}
			}
		}
		system::wait(0);
	}
	func_1(&Local_45);
	Global_25439 = 0;
	Global_55827 = 0;
	script::terminate_this_thread();
}

// Position - 0x8BD
void func_1(var *uParam0) {
	if (uParam0->f_1 != 0) {
		graphics::set_scaleform_movie_as_no_longer_needed(&uParam0->f_1);
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0) {
		if (gameplay::is_pc_version()) {
			graphics::_push_scaleform_movie_function(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			graphics::_push_scaleform_movie_function_parameter_bool(0);
			graphics::_pop_scaleform_movie_function_void();
		}
		graphics::set_scaleform_movie_as_no_longer_needed(&uParam0->f_4);
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564) {
		script::set_no_loading_screen(0);
		uParam0->f_564 = 0;
	}
	if (!Global_69970) {
		if (!player::is_player_dead(player::get_player_index())) {
			if (!G_TextMessageConfig) {
				if (cam::is_screen_faded_out() && !func_94(0)) {
					cam::do_screen_fade_in(800);
				}
			}
		}
	}
	func_19(0);
}

// Position - 0x963
void func_2() {
	if (Global_55822) {
		return;
	}
	Global_55831 = 0;
	Global_67917 = 0;
	Global_55833 = 0;
	if (Global_55830) {
	}
	Global_55830 = 0;
	func_19(0);
	func_8();
	Global_68069 = 0;
	Global_55821 = 1;
	func_6();
	func_5();
	func_4();
	func_3();
	Global_55812 = 0;
	Global_55842 = 0;
	Global_55850 = -1;
}

// Position - 0x9B9
void func_3() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4) {
		Global_68104[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_68113 = 0;
}

// Position - 0x9E6
void func_4() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		Global_68070[iVar0 /*2*/] = 0;
		Global_68070[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_68103 = 0;
}

// Position - 0xA1D
void func_5() { Global_55981 = 0; }

// Position - 0xA29
void func_6() {
	Global_55841 = 0;
	Global_55845 = func_7(joaat("sp0_shots"));
	Global_55844 = func_7(joaat("sp0_hits"));
	Global_55847 = func_7(joaat("sp1_shots"));
	Global_55846 = func_7(joaat("sp1_hits"));
	Global_55849 = func_7(joaat("sp2_shots"));
	Global_55848 = func_7(joaat("sp2_hits"));
}

// Position - 0xA7D
int func_7(int iParam0) {
	var uVar0;

	stats::stat_get_int(iParam0, &uVar0, -1);
	return uVar0;
}

// Position - 0xA91
void func_8() {
	int iVar0;

	Global_55851 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64) {
		Global_55852[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

// Position - 0xABB
var func_9() { return Global_1315233; }

// Position - 0xAC7
void func_10(int iParam0) {
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

// Position - 0xB09
void func_11(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8) {
	func_12(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0xB2A
void func_12(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
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
		func_13();
	}
}

// Position - 0xCFD
void func_13() {
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

// Position - 0xE1D
int func_14(char *sParam0) {
	if (gameplay::are_strings_equal(sParam0, &Global_100345)) {
		return 1;
	}
	if (func_15(sParam0)) {
		return 0;
	}
	return 2;
}

// Position - 0xE44
bool func_15(char *sParam0) {
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

// Position - 0xE7F
int func_16(int iParam0) {
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

// Position - 0xEC2
void func_17() {
	unk1::_0xEB2D525B57F42B40();
	func_18();
}

// Position - 0xED2
void func_18() { Global_17151.f_134 = 1; }

// Position - 0xEE0
void func_19(int iParam0) {
	Global_69962 = iParam0;
	Global_69963 = iParam0;
}

// Position - 0xEF4
void func_20() { Global_17151.f_6 = 1; }

// Position - 0xF02
bool func_21(var *uParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;

	if (gameplay::get_frame_count() == uParam0->f_574) {
		return uParam0->f_575;
	}
	uParam0->f_574 = gameplay::get_frame_count();
	if (!network::network_is_game_in_progress()) {
		if (ped::is_ped_dead_or_dying(player::get_player_ped(player::get_player_index()), 1)) {
			uParam0->f_575 = 1;
			return true;
		}
		if (ai::is_ped_being_arrested(player::get_player_ped(player::get_player_index()))) {
			uParam0->f_575 = 1;
			return true;
		}
	}
	if (!uParam0->f_564) {
		if (cam::is_screen_faded_out() || cam::is_screen_fading_out()) {
			script::set_no_loading_screen(1);
			uParam0->f_564 = 1;
		}
	}
	if (player::is_player_playing(player::player_id())) {
		if (!network::network_is_game_in_progress()) {
			if (player::is_special_ability_active(player::player_id())) {
				player::special_ability_deactivate(player::player_id());
			}
		}
	}
	ui::hide_hud_component_this_frame(7);
	ui::hide_hud_component_this_frame(8);
	ui::hide_hud_component_this_frame(9);
	ui::hide_hud_component_this_frame(6);
	ui::hide_hud_component_this_frame(19);
	controls::disable_control_action(2, 19, 1);
	controls::disable_control_action(0, 37, 1);
	controls::disable_control_action(0, 21, 1);
	controls::disable_control_action(0, 28, 1);
	controls::disable_control_action(0, 29, 1);
	controls::disable_control_action(0, 171, 1);
	func_50();
	if (controls::_is_input_disabled(2)) {
		if (player::_is_player_cam_control_disabled() || cam::is_screen_faded_out() && !cam::is_screen_fading_in()) {
			ui::_show_cursor_this_frame();
		}
	}
	Global_36331 = 1;
	if (!uParam0->f_563) {
		switch (func_47(player::get_player_ped(player::get_player_index()))) {
		case 1: graphics::_start_screen_effect("SuccessFranklin", 1000, 0); break;

		case 2: graphics::_start_screen_effect("SuccessTrevor", 1000, 0); break;

		default: graphics::_start_screen_effect("SuccessMichael", 1000, 0); break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0) {
		uParam0->f_558 = uParam0->f_572 + system::floor(15000f * fParam2);
	}
	if (iParam4 && uParam0->f_572 >= uParam0->f_558 - 1500) {
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f) {
		uParam0->f_560 += func_46(30f);
		uParam0->f_560 += IntToFloat(uParam0->f_56) * func_46(25f);
		if (uParam0->f_56 > 0) {
			uParam0->f_560 += func_46(25f * 0.5f);
		}
		if (uParam0->f_549) {
			uParam0->f_560 += func_46(30f) - func_46(2f);
		}
	}
	iVar0 = 1;
	while (iVar0) {
		func_19(1);
		uParam0->f_572 += system::round(0f + 1000f * system::timestep());
		func_26(uParam0, fParam2, iParam3);
		if (IntToFloat(uParam0->f_572) > IntToFloat(uParam0->f_558 + 666) - 15000f * fParam2) {
			if (uParam0->f_30 < 1f) {
				uParam0->f_30 += 0f + 1f / 0.225f * system::timestep();
			}
		}
		uParam0->f_30 = func_25(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > uParam0->f_558 - 333) {
			if (!uParam0->f_561) {
				if (uParam0->f_565) {
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					graphics::_push_scaleform_movie_function(uParam0->f_1, "ROLL_UP_BACKGROUND");
					graphics::_pop_scaleform_movie_function_void();
				}
				uParam0->f_547 -= (0f + 1f / 1.215f * system::timestep());
			}
		}
		uParam0->f_547 = func_25(uParam0->f_547, 0f, 1f);
		if (uParam0->f_547 <= 0.7f && !uParam0->f_545 && uParam0->f_1 != 0) {
			graphics::_push_scaleform_movie_function(uParam0->f_1, "TRANSITION_OUT");
			graphics::_pop_scaleform_movie_function_void();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > uParam0->f_558 - 333) {
			if (!uParam0->f_561) {
				if (uParam0->f_548 < 1f) {
					uParam0->f_548 += 0f + 1f / 0.3f * system::timestep();
				}
			}
		}
		uParam0->f_548 = func_25(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562) {
			if (controls::_0x6CD79468A1E595C6(2)) {
				if (graphics::has_scaleform_movie_loaded(uParam0->f_4)) {
					if (!uParam0->f_567) {
						func_22(uParam0, !uParam0->f_565 && uParam0->f_56 > 0);
					}
				}
			}
		}
		if (controls::is_control_just_pressed(2, 216) && uParam0->f_558 > uParam0->f_572 + 333) {
			if (!uParam0->f_566 && uParam0->f_56 != 0 && graphics::has_scaleform_movie_loaded(uParam0->f_4) &&
				IntToFloat(uParam0->f_572) > IntToFloat(uParam0->f_558 + 1165) - 15000f * fParam2) {
				if (!uParam0->f_565) {
					graphics::_push_scaleform_movie_function(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					graphics::_pop_scaleform_movie_function_void();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > uParam0->f_558 - 5000) {
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (iParam5) {
					graphics::_push_scaleform_movie_function(uParam0->f_1, "ROLL_UP_BACKGROUND");
					graphics::_pop_scaleform_movie_function_void();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_22(uParam0, !uParam0->f_565 && uParam0->f_56 > 0);
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0) {
			if (IntToFloat(uParam0->f_572) > IntToFloat(uParam0->f_558 + 1165) - 15000f * fParam2) {
				if (uParam0->f_566 && !uParam0->f_565) {
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					graphics::_push_scaleform_movie_function(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					graphics::_pop_scaleform_movie_function_void();
				}
				uParam0->f_559 = func_25(uParam0->f_559 + 1f / 0.3f * uParam0->f_573 * system::timestep(), 0f, 1f);
				uParam0->f_573 = func_25(uParam0->f_573 + 0.07f, 0.75f, 1.15f);
			}
		}
		else {
			uParam0->f_559 = func_25(uParam0->f_559 - 1f / 0.3f * uParam0->f_573 * 0.01f * system::timestep(), 0f, 1f);
			uParam0->f_573 = func_25(uParam0->f_573 + 0.07f, 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558) {
			if (uParam0->f_561) {
				if (!uParam0->f_567) {
					if (controls::is_control_just_pressed(2, 215)) {
						uParam0->f_561 = 0;
					}
				}
			}
			else if (uParam0->f_572 - uParam0->f_546 > 1000 && uParam0->f_545) {
				iVar0 = 0;
			}
		}
		uParam0->f_575 = !iVar0;
		if (iParam1) {
			system::wait(0);
		}
		else {
			if (!iVar0) {
				func_19(0);
			}
			return !iVar0;
		}
	}
	func_19(0);
	return true;
}

// Position - 0x1554
void func_22(var *uParam0, int iParam1) {
	graphics::_push_scaleform_movie_function(uParam0->f_4, "CLEAR_ALL");
	graphics::_pop_scaleform_movie_function_void();
	if (gameplay::is_pc_version()) {
		graphics::_push_scaleform_movie_function(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		graphics::_push_scaleform_movie_function_parameter_bool(1);
		graphics::_pop_scaleform_movie_function_void();
	}
	graphics::_push_scaleform_movie_function(uParam0->f_4, "SET_DATA_SLOT");
	graphics::_push_scaleform_movie_function_parameter_int(0);
	func_24(controls::get_control_instructional_button(2, 215, 1));
	func_23("ES_HELP");
	if (gameplay::is_pc_version()) {
		graphics::_push_scaleform_movie_function_parameter_bool(1);
		graphics::_push_scaleform_movie_function_parameter_int(215);
	}
	graphics::_pop_scaleform_movie_function_void();
	if (iParam1) {
		graphics::_push_scaleform_movie_function(uParam0->f_4, "SET_DATA_SLOT");
		graphics::_push_scaleform_movie_function_parameter_int(1);
		func_24(controls::get_control_instructional_button(2, 216, 1));
		func_23("ES_XPAND");
		if (gameplay::is_pc_version()) {
			graphics::_push_scaleform_movie_function_parameter_bool(1);
			graphics::_push_scaleform_movie_function_parameter_int(216);
		}
		graphics::_pop_scaleform_movie_function_void();
	}
	graphics::_push_scaleform_movie_function(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x1617
void func_23(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x1629
void func_24(char *sParam0) { graphics::_0xE83A3E3557A56640(sParam0); }

// Position - 0x1637
float func_25(float fParam0, float fParam1, float fParam2) {
	if (fParam0 > fParam2) {
		return fParam2;
	}
	else if (fParam0 < fParam1) {
		return fParam1;
	}
	return fParam0;
}

// Position - 0x165E
void func_26(var *uParam0, float fParam1, int iParam2) {
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float *fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar27[32];
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;

	iVar0 = system::round(uParam0->f_547 * 255f);
	fVar1 = func_45() * 0.25f;
	if (graphics::has_scaleform_movie_loaded(uParam0->f_1)) {
		if (uParam0->f_30 >= 0f) {
			if (!uParam0->f_2) {
				graphics::_push_scaleform_movie_function(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_23(&uParam0->f_5);
				func_23(&uParam0->f_13);
				if (network::network_is_game_in_progress()) {
					graphics::_push_scaleform_movie_function_parameter_int(150);
				}
				else {
					graphics::_push_scaleform_movie_function_parameter_int(100);
				}
				graphics::_push_scaleform_movie_function_parameter_bool(1);
				graphics::_push_scaleform_movie_function_parameter_int(uParam0->f_56);
				graphics::_push_scaleform_movie_function_parameter_bool(iParam2);
				graphics::_push_scaleform_movie_function_parameter_int(69);
				graphics::_pop_scaleform_movie_function_void();
				uParam0->f_2 = 1;
			}
			if (uParam0->f_56 > 0 && !uParam0->f_3 && uParam0->f_572 > 600) {
				graphics::_push_scaleform_movie_function(uParam0->f_1, "TRANSITION_UP");
				graphics::_push_scaleform_movie_function_parameter_float(0.15f);
				graphics::_push_scaleform_movie_function_parameter_bool(1);
				graphics::_pop_scaleform_movie_function_void();
				uParam0->f_3 = 1;
			}
		}
		func_44();
		graphics::draw_scaleform_movie_fullscreen(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = uParam0->f_560 * uParam0->f_559 * (1f - uParam0->f_548);
	fVar3 = 0f;
	if (uParam0->f_567) {
		fVar3 = (0.1388889f + func_46(2f * 2f)) * uParam0->f_568 * (1f - uParam0->f_548);
		fVar2 += 3f * fVar3;
	}
	if (uParam0->f_548 != 0f) {
		fVar4 = 0f;
		if (fVar2 < fVar4) {
			fVar2 = fVar4;
		}
	}
	else {
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f) {
			if (fVar2 < fVar5) {
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = 0.3f * func_45();
	if (uParam0->f_12) {
		fVar1 = 0.5f;
	}
	fVar6 = *uParam0 * 2f;
	fVar7 = func_43(&uParam0->f_13);
	if (fVar6 < fVar7) {
		fVar6 = fVar7 + 3f * 0.006f;
	}
	if (graphics::_get_aspect_ratio(0) < 1.4f) {
		fVar6 *= 1.3f;
	}
	fVar7 = func_43(&uParam0->f_550);
	fVar8 = (0.119f + 0.05f) / func_45() / 2.5f;
	if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0) {
		if (fVar6 < fVar7 + 2.6f * fVar8) {
			fVar6 = fVar7 + 2.6f * fVar8;
		}
	}
	else if (uParam0->f_556 == 3) {
		if (fVar6 < fVar7 + 2.6f * fVar8) {
			fVar6 = fVar7 + 2.6f * fVar8;
		}
	}
	else if (fVar6 < fVar7 + 1.9f * fVar8) {
		fVar6 = fVar7 + 2f * fVar8;
	}
	fVar9 = 0.499f - fVar6 / 2f + 0.006f;
	fVar10 = 0.499f + fVar6 / 2f - 0.006f;
	controls::set_input_exclusive(2, 215);
	controls::set_input_exclusive(2, 216);
	controls::set_input_exclusive(2, 200);
	controls::disable_control_action(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567) {
		if (IntToFloat(uParam0->f_558) - 14000f * fParam1 < IntToFloat(uParam0->f_572) ||
			uParam0->f_567 && uParam0->f_559 > 0.95f && uParam0->f_558 - 10000 < uParam0->f_572) {
			if (uParam0->f_567) {
				if (uParam0->f_570 < 0) {
					uParam0->f_570 *= -1;
					uParam0->f_570 = uParam0->f_572 + uParam0->f_570;
				}
				if (uParam0->f_570 > 0) {
					if (uParam0->f_570 - uParam0->f_572 > 0) {
						func_40(uParam0->f_570 - uParam0->f_572, "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0,
								0, 0);
					}
					else {
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f) {
					uParam0->f_568 += 0f + 1f / 0.166f * system::timestep();
					if (uParam0->f_568 > 1f) {
						uParam0->f_568 = 1f;
					}
				}
			}
			if (cam::is_screen_faded_out()) {
				ui::hide_loading_on_fade_this_frame();
			}
			if (uParam0->f_4 != 0 && uParam0->f_548 < 0.1f && uParam0->f_572 <= uParam0->f_558) {
				ui::hide_hud_component_this_frame(7);
				ui::hide_hud_component_this_frame(8);
				ui::hide_hud_component_this_frame(9);
				ui::hide_hud_component_this_frame(6);
				graphics::draw_scaleform_movie_fullscreen(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567) {
				controls::disable_control_action(0, 140, 1);
				controls::disable_control_action(0, 141, 1);
				controls::disable_control_action(0, 142, 1);
				controls::disable_control_action(2, 188, 1);
				if (controls::is_disabled_control_just_pressed(2, 188)) {
					audio::play_sound_frontend(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					audio::play_sound_frontend(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				controls::disable_control_action(2, 187, 1);
				if (controls::is_disabled_control_just_pressed(2, 187)) {
					audio::play_sound_frontend(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					audio::play_sound_frontend(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				controls::disable_control_action(2, 202, 1);
				if (controls::is_disabled_control_just_pressed(2, 202)) {
					audio::play_sound_frontend(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					audio::play_sound_frontend(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562) {
				ui::hide_hud_component_this_frame(7);
				ui::hide_hud_component_this_frame(8);
				ui::hide_hud_component_this_frame(9);
				ui::hide_hud_component_this_frame(6);
				controls::disable_control_action(0, 140, 1);
				controls::disable_control_action(0, 141, 1);
				controls::disable_control_action(0, 142, 1);
				if (controls::is_control_just_pressed(2, 215) || controls::is_disabled_control_just_pressed(2, 200)) {
					audio::play_sound_frontend(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					audio::play_sound_frontend(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	ui::get_hud_colour(1, &iVar13, &iVar14, &iVar15, &iVar16);
	ui::set_text_colour(iVar13, iVar14, iVar15, iVar0);
	ui::set_text_wrap(fVar9, fVar10);
	ui::set_text_justification(0);
	ui::set_text_scale(1f, 0.4f);
	fVar1 -= func_46(6f);
	fVar1 += func_46(30f) - func_46(2f * 2f);
	fVar11 = fVar2 - func_46(2f * 14f);
	if (fVar11 >= 0f) {
		fVar12 = func_25(fVar11 / (0.6f * func_46(25f)), 0f, 1f);
		func_44();
		graphics::draw_rect(0.5f, fVar1 - (func_46(2f - 0.5f) - 0.001388889f), fVar6, func_39(1f), iVar13, iVar14,
							iVar15, system::round(fVar12 * IntToFloat(iVar16)), 0);
	}
	else {
		return;
	}
	fVar1 += func_46(2f * 0.3f);
	if (uParam0->f_56 > 0) {
		fVar1 += func_46(25f * 0.2f);
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56) {
		fVar11 = fVar2 - (fVar1 - 0.3f * func_45());
		if (fVar11 >= 0f) {
			fVar12 = func_25(fVar11 / (0.8f * func_46(25f)), 0f, 1f);
			func_36(uParam0, iVar17, fVar1 + func_46(2f), fVar9, fVar10, system::round(IntToFloat(iVar0) * fVar12));
		}
		else {
			return;
		}
		fVar1 += func_46(25f);
		iVar17++;
	}
	if (uParam0->f_56 > 0) {
		fVar1 += func_46(25f * 0.2f);
		fVar11 = fVar2 - (fVar1 - 0.3f * func_45());
		if (fVar11 >= 0f) {
			fVar1 += func_46(2f);
			fVar12 = func_25(fVar11 / (0.6f * func_46(25f)), 0f, 1f);
			func_44();
			graphics::draw_rect(0.5f, fVar1 + func_46(2f * 0.5f), fVar6, func_39(1f), iVar13, iVar14, iVar15,
								system::round(fVar12 * IntToFloat(iVar16)), 0);
		}
	}
	if (uParam0->f_549) {
		fVar1 += func_46(25f * 0.2f);
		fVar11 = fVar2 - (fVar1 - 0.3f * func_45());
		if (fVar11 >= 0f) {
			fVar12 = func_25(fVar11 / (0.8f * func_46(25f)), 0f, 1f);
			ui::set_text_colour(iVar13, iVar14, iVar15, system::round(fVar12 * IntToFloat(iVar0)));
			func_29(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk::_get_current_language_id() == 0) {
				fVar20 = fVar9 + 0.119f / func_45() / 2.5f;
				fVar21 = fVar10 - 0.119f / func_45() / 2.5f;
				if (uParam0->f_556 == 1) {
					fVar20 = fVar9 + (0.119f + 0.05f) / func_45() / 2.5f;
					fVar21 = fVar10 - (0.119f + 0.05f) / func_45() / 2.5f;
				}
			}
			if (uParam0->f_557 == 0) {
				fVar20 += (fVar18 * 0.28f + 0.006f) / 2f;
				fVar21 += (fVar18 * 0.28f + 0.006f) / 2f;
			}
			ui::set_text_wrap(fVar20, fVar21);
			ui::set_text_justification(1);
			ui::set_text_scale(1f, 0.4f);
			func_28(&uParam0->f_550, fVar20, fVar1 + func_46(2f * 2f), 0, 0, 0);
			ui::set_text_wrap(fVar20, fVar21);
			ui::set_text_justification(2);
			ui::set_text_scale(1f, 0.4f);
			ui::set_text_centre(0);
			func_44();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 -= (fVar18 * 0.28f + 0.006f);
			ui::set_text_wrap(fVar20, fVar22);
			ui::set_text_colour(iVar13, iVar14, iVar15, system::round(fVar12 * IntToFloat(iVar0)));
			switch (uParam0->f_556) {
			case 0:
				ui::begin_text_command_display_text("PERCENTAGE");
				ui::add_text_component_integer(uParam0->f_554);
				ui::end_text_command_display_text(fVar20, fVar1 + func_46(2f * 2f), 0);
				break;

			case 1:
				ui::begin_text_command_display_text("FO_TWO_NUM");
				ui::add_text_component_integer(uParam0->f_554);
				ui::add_text_component_integer(uParam0->f_555);
				ui::end_text_command_display_text(fVar20, fVar1 + func_46(2f * 2f), 0);
				break;

			case 2:
				ui::begin_text_command_display_text("MTPHPER_XPNO");
				ui::add_text_component_integer(uParam0->f_554);
				ui::end_text_command_display_text(fVar20, fVar1 + func_46(2f * 2f), 0);
				break;

			case 3:
				ui::begin_text_command_display_text("ESDOLLA");
				ui::add_text_component_formatted_integer(uParam0->f_554, 1);
				ui::end_text_command_display_text(fVar20, fVar1 + func_46(2f * 2f), 0);
				break;
			}
			if (uParam0->f_557 != 0) {
				iVar35 = 255;
				iVar36 = 255;
				iVar37 = 255;
				iVar38 = iVar0;
				switch (uParam0->f_557) {
				case 1: ui::get_hud_colour(107, &iVar35, &iVar36, &iVar37, &iVar38); break;

				case 3: ui::get_hud_colour(109, &iVar35, &iVar36, &iVar37, &iVar38); break;

				case 2: ui::get_hud_colour(108, &iVar35, &iVar36, &iVar37, &iVar38); break;
				}
				fVar39 = 0.001388889f * 5f;
				fVar40 = 0.00078125f * 16f * 2f;
				fVar41 = 0.001388889f * 16f * 2f;
				fVar42 = fVar21 + func_27(4f) - 0.006f;
				fVar43 = fVar1 + func_46(10f) + fVar39;
				if (uParam0->f_556 == -1) {
					fVar42 -= 0.006f * 6f;
				}
				fVar40 *= 0.65f;
				fVar41 *= 0.65f;
				graphics::draw_sprite(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37,
									  system::round(fVar12 * IntToFloat(iVar0)), 0);
			}
			fVar1 += func_46(30f) - 2f;
		}
	}
}

// Position - 0x21B0
float func_27(float fParam0) { return fParam0 * 0.00078125f; }

// Position - 0x21C0
void func_28(char *sParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) {
	ui::set_text_centre(iParam3);
	ui::set_text_font(iParam5);
	func_44();
	if (iParam4) {
		ui::begin_text_command_display_text("STRING");
		ui::add_text_component_substring_player_name(sParam0);
	}
	else {
		ui::begin_text_command_display_text(sParam0);
	}
	ui::end_text_command_display_text(fParam1, fParam2, 0);
}

// Position - 0x21FD
int func_29(int iParam0, int iParam1, int iParam2, float fParam3, float *fParam4, int iParam5) {
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;

	StringCopy(&cVar0, func_35(iParam0), 64);
	StringCopy(&cVar16, func_32(iParam0, iParam1), 64);
	if (gameplay::get_hash_key(&cVar16) != 0) {
		fVar34 = 1f;
		if (iParam5) {
			graphics::_get_active_screen_resolution(&iVar32, &iVar33);
			fVar35 = graphics::_get_aspect_ratio(0);
			if (func_31()) {
				iVar32 = system::round(system::to_float(iVar33) * fVar35);
			}
			fVar36 = system::to_float(iVar32) / system::to_float(iVar33);
			fVar34 = fVar36 / fVar35;
			if (func_31()) {
				fVar34 = 1f;
			}
			if (script::_get_number_of_instances_of_script_with_name_hash(joaat("director_mode")) > 0) {
				graphics::get_screen_resolution(&iVar32, &iVar33);
			}
			iVar32 = system::round(system::to_float(iVar32) / fVar34);
			iVar33 = system::round(system::to_float(iVar33) / fVar34);
		}
		else {
			graphics::get_screen_resolution(&iVar32, &iVar33);
		}
		vVar37 = {graphics::get_texture_resolution(&cVar0, &cVar16)};
		vVar37.x *= func_30(iParam0) / fVar34;
		vVar37.y *= func_30(iParam0) / fVar34;
		if (!iParam2) {
			vVar37.x -= 2f;
			vVar37.y -= 2f;
		}
		if (iParam0 == 30) {
			vVar37.x = 288f;
			vVar37.y = 106f;
		}
		if (iParam0 == 29 && gameplay::get_hash_key(&Global_17290.f_6703[29 /*16*/]) == -1487683087) {
			vVar37.x = 106f;
			vVar37.y = 106f;
		}
		*fParam3 = vVar37.x / IntToFloat(iVar32) * IntToFloat(iVar32 / iVar33);
		*fParam4 = vVar37.y / IntToFloat(iVar33) / (vVar37.x / IntToFloat(iVar32)) * *fParam3;
		if (!iParam5) {
			if (!graphics::get_is_widescreen() && iParam0 != 30) {
				*fParam3 *= 1.33f;
			}
		}
		if (iParam0 == 29) {
			if (*fParam3 > Global_17289) {
				*fParam4 *= Global_17289 / *fParam3;
				*fParam3 = Global_17289;
			}
		}
		return 1;
	}
	return 0;
}

// Position - 0x23AE
float func_30(int iParam0) {
	switch (iParam0) {
	case 33:
	case 4:
	case 11:
	case 31:
	case 20:
	case 15:
	case 10:
	case 12:
	case 13:
	case 32:
	case 9:
	case 5:
	case 6:
	case 7:
	case 14:
	case 18:
	case 19:
	case 17:
	case 28:
	case 26:
	case 27:
	case 49: return 0.5f;
	}
	return 1f;
}

// Position - 0x244D
bool func_31() {
	int iVar0;
	int iVar1;
	float fVar2;

	graphics::_get_active_screen_resolution(&iVar0, &iVar1);
	fVar2 = system::to_float(iVar0) / system::to_float(iVar1);
	if (fVar2 > 3.5f) {
		return true;
	}
	return false;
}

// Position - 0x247F
var func_32(int iParam0, int iParam1) {
	char *sVar0[2];
	var uVar3;
	struct<13> Var19;

	if (!gameplay::is_string_null_or_empty(&Global_17290.f_6703[iParam0 /*16*/])) {
		if (gameplay::get_hash_key(&Global_17290.f_6703[iParam0 /*16*/]) == -1487683087) {
			Var19 = {func_34(player::player_id())};
			if (network::_0x5835D9CD92E83184(&Var19, &uVar3)) {
				return func_33(&uVar3);
			}
		}
		else {
			return func_33(&Global_17290.f_6703[iParam0 /*16*/]);
		}
	}
	switch (iParam0) {
	case 3:
		sVar0[0] = "MP_hostCrown";
		sVar0[1] = "MP_hostCrown";
		break;

	case 21:
		sVar0[0] = "MP_SpecItem_Coke";
		sVar0[1] = "MP_SpecItem_Coke";
		break;

	case 22:
		sVar0[0] = "MP_SpecItem_Heroin";
		sVar0[1] = "MP_SpecItem_Heroin";
		break;

	case 23:
		sVar0[0] = "MP_SpecItem_Weed";
		sVar0[1] = "MP_SpecItem_Weed";
		break;

	case 24:
		sVar0[0] = "MP_SpecItem_Meth";
		sVar0[1] = "MP_SpecItem_Meth";
		break;

	case 25:
		sVar0[0] = "MP_SpecItem_Cash";
		sVar0[1] = "MP_SpecItem_Cash";
		break;

	case 1:
		sVar0[0] = "shop_NEW_Star";
		sVar0[1] = "shop_NEW_Star";
		break;

	case 2:
		sVar0[0] = "shop_NEW_Star";
		sVar0[1] = "shop_NEW_Star";
		break;

	case 4:
		sVar0[0] = "Shop_Tick_Icon";
		sVar0[1] = "Shop_Tick_Icon";
		break;

	case 6:
		sVar0[0] = "Shop_Box_CrossB";
		sVar0[1] = "Shop_Box_Cross";
		break;

	case 7:
		sVar0[0] = "Shop_Box_BlankB";
		sVar0[1] = "Shop_Box_Blank";
		break;

	case 5:
		sVar0[0] = "Shop_Box_TickB";
		sVar0[1] = "Shop_Box_Tick";
		break;

	case 8:
		sVar0[0] = "shop_NEW_Star";
		sVar0[1] = "shop_NEW_Star";
		break;

	case 9:
		sVar0[0] = "Shop_Clothing_Icon_B";
		sVar0[1] = "Shop_Clothing_Icon_A";
		break;

	case 10:
		sVar0[0] = "Shop_GunClub_Icon_B";
		sVar0[1] = "Shop_GunClub_Icon_A";
		break;

	case 17:
		sVar0[0] = "Shop_Ammo_Icon_B";
		sVar0[1] = "Shop_Ammo_Icon_A";
		break;

	case 18:
		sVar0[0] = "Shop_Armour_Icon_B";
		sVar0[1] = "Shop_Armour_Icon_A";
		break;

	case 19:
		sVar0[0] = "Shop_Health_Icon_B";
		sVar0[1] = "Shop_Health_Icon_A";
		break;

	case 20:
		sVar0[0] = "Shop_MakeUp_Icon_B";
		sVar0[1] = "Shop_MakeUp_Icon_A";
		break;

	case 11:
		sVar0[0] = "Shop_Tattoos_Icon_B";
		sVar0[1] = "Shop_Tattoos_Icon_A";
		break;

	case 12:
		sVar0[0] = "Shop_Garage_Icon_B";
		sVar0[1] = "Shop_Garage_Icon_A";
		break;

	case 13:
		sVar0[0] = "Shop_Garage_Bike_Icon_B";
		sVar0[1] = "Shop_Garage_Bike_Icon_A";
		break;

	case 14:
		sVar0[0] = "Shop_Barber_Icon_B";
		sVar0[1] = "Shop_Barber_Icon_A";
		break;

	case 15:
		sVar0[0] = "shop_Lock";
		sVar0[1] = "shop_Lock";
		break;

	case 16:
		sVar0[0] = "Shop_Tick_Icon";
		sVar0[1] = "Shop_Tick_Icon";
		break;

	case 26:
		sVar0[0] = "arrowleft";
		sVar0[1] = "arrowleft";
		break;

	case 27:
		sVar0[0] = "arrowright";
		sVar0[1] = "arrowright";
		break;

	case 28:
		sVar0[0] = "MP_AlertTriangle";
		sVar0[1] = "MP_AlertTriangle";
		break;

	case 29:
		sVar0[0] = "shop_NEW_Star";
		sVar0[1] = "shop_NEW_Star";
		break;

	case 31:
		sVar0[0] = "Shop_Michael_Icon_B";
		sVar0[1] = "Shop_Michael_Icon_A";
		break;

	case 32:
		sVar0[0] = "Shop_Franklin_Icon_B";
		sVar0[1] = "Shop_Franklin_Icon_A";
		break;

	case 33:
		sVar0[0] = "Shop_Trevor_Icon_B";
		sVar0[1] = "Shop_Trevor_Icon_A";
		break;

	case 48:
		sVar0[0] = "SaleIcon";
		sVar0[1] = "SaleIcon";
		break;

	case 49:
		sVar0[0] = "Shop_Tick_Icon";
		sVar0[1] = "Shop_Tick_Icon";
		break;

	case 0:
		sVar0[0] = "";
		sVar0[1] = "";
		break;
	}
	if (iParam1) {
		return sVar0[0];
	}
	return sVar0[1];
}

// Position - 0x28B4
var func_33(var uParam0) { return uParam0; }

// Position - 0x28BE
struct<13> func_34(int iParam0) {
	struct<13> Var0;

	network::network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

// Position - 0x28D5
char *
func_35(int iParam0) {
	var uVar0;
	struct<13> Var16;

	if (!gameplay::is_string_null_or_empty(&Global_17290.f_5886[iParam0 /*16*/])) {
		if (gameplay::get_hash_key(&Global_17290.f_5886[iParam0 /*16*/]) == -1487683087) {
			Var16 = {func_34(player::player_id())};
			network::_0x5835D9CD92E83184(&Var16, &uVar0);
			return func_33(&uVar0);
		}
		else {
			return func_33(&Global_17290.f_5886[iParam0 /*16*/]);
		}
	}
	if (iParam0 == 48) {
		return "MPShopSale";
	}
	return "CommonMenu";
}

// Position - 0x294A
void func_36(var *uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5) {
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	ui::get_hud_colour(1, &iVar0, &iVar1, &iVar2, &uVar3);
	ui::set_text_colour(iVar0, iVar1, iVar2, iParam5);
	ui::set_text_wrap(fParam3, fParam4);
	ui::set_text_justification(1);
	ui::set_text_scale(1f, func_38(14f));
	ui::set_text_centre(0);
	ui::set_text_font(0);
	func_44();
	if (uParam0->f_531[iParam1]) {
		ui::begin_text_command_display_text("STRING");
		ui::add_text_component_substring_player_name(&uParam0->f_71[iParam1 /*16*/]);
	}
	else {
		ui::begin_text_command_display_text(&uParam0->f_71[iParam1 /*16*/]);
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17) {
			ui::add_text_component_integer(uParam0->f_489[iParam1]);
		}
	}
	ui::end_text_command_display_text(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1]) {
	case 0: break;

	case 1:
		func_29(7, 0, 1, &fVar5, &fVar6, 0);
		graphics::draw_sprite("CommonMenu", func_32(7, 0), fParam4 - 0.006f, fParam2 + func_46(2f) + 0.25f * fVar6,
							  fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
		fVar4 -= (fVar5 * 0.38f + 0.006f);
		break;

	case 2:
		func_29(5, 0, 1, &fVar5, &fVar6, 0);
		graphics::draw_sprite("CommonMenu", func_32(5, 0), fParam4 - 0.006f, fParam2 + func_46(2f) + 0.25f * fVar6,
							  fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
		fVar4 -= (fVar5 * 0.38f + 0.006f);
		break;

	case 3:
		func_29(6, 0, 1, &fVar5, &fVar6, 0);
		graphics::draw_sprite("CommonMenu", func_32(6, 0), fParam4 - 0.006f, fParam2 + func_46(2f) + 0.25f * fVar6,
							  fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
		fVar4 -= (fVar5 * 0.38f + 0.006f);
		break;
	}
	if (uParam0->f_57[iParam1] == 0) {
		return;
	}
	if (uParam0->f_57[iParam1] == 15) {
		ui::set_text_justification(1);
	}
	else {
		ui::set_text_justification(2);
	}
	ui::set_text_scale(1f, func_38(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4) {
		ui::set_text_wrap(fParam3, fVar4 - 0.00078125f * 3f);
	}
	else {
		ui::set_text_wrap(fParam3, fVar4 + 0.00078125f * 2f);
	}
	ui::set_text_colour(iVar0, iVar1, iVar2, iParam5);
	func_37(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &uParam0->f_280[iParam1 /*16*/],
			uParam0->f_57[iParam1]);
}

// Position - 0x2BD5
void func_37(int iParam0, int iParam1, float fParam2, float fParam3, char *sParam4, int iParam5) {
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = 1;
	ui::set_text_centre(0);
	ui::set_text_font(0);
	func_44();
	fVar1 = 0f;
	fVar2 = 8f * 0.00078125f;
	fVar3 = 16f * 0.001388889f;
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4) {
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5) {
	case 4:
	case 5:
		ui::set_text_scale(1f, func_38(18f));
		ui::set_text_font(4);
		if (iParam0 < 0) {
			ui::_begin_text_command_width("ESMINDOLLA");
			ui::add_text_component_formatted_integer(-1 * iParam0, 1);
			fVar1 = ui::_end_text_command_get_width(0);
		}
		else {
			ui::_begin_text_command_width("ESDOLLA");
			ui::add_text_component_formatted_integer(iParam0, 1);
			fVar1 = ui::_end_text_command_get_width(0);
		}
		fVar1 -= fVar1 % 0.00078125f;
		graphics::draw_sprite("CommonMenu", "BettingBox_Left", fParam2 - fVar1,
							  fParam3 + fVar3 * 0.6f + 0.001388889f * 2f, fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255,
							  0);
		graphics::draw_sprite("CommonMenu", "BettingBox_Centre", fParam2 - fVar1 * 0.5f - 0.00078125f * 2f,
							  fParam3 + fVar3 * 0.6f + 0.001388889f * 2f, fVar1 - fVar2 * 0.5f, fVar3, 0f, iVar4, iVar5,
							  iVar6, 255, 0);
		graphics::draw_sprite("CommonMenu", "BettingBox_Right", fParam2 - 0.00078125f * 4f,
							  fParam3 + fVar3 * 0.6f + 0.001388889f * 2f, fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255,
							  0);
		ui::set_text_scale(1f, func_38(14f));
		break;
	}
	ui::_set_notification_color_next(iVar0);
	switch (iParam5) {
	case 11:
		ui::begin_text_command_display_text("PERCENTAGE");
		ui::add_text_component_integer(iParam0);
		break;

	case 1:
		ui::set_text_font(5);
		ui::begin_text_command_display_text("FO_NUM");
		ui::add_text_component_integer(iParam0);
		break;

	case 2:
		ui::set_text_font(5);
		ui::begin_text_command_display_text("FO_TWO_NUM");
		ui::add_text_component_integer(iParam0);
		ui::add_text_component_integer(iParam1);
		break;

	case 4:
	case 5: ui::set_text_scale(1f, func_38(18f));

	case 3:
		if (iParam0 < 0) {
			ui::begin_text_command_display_text("ESMINDOLLA");
			ui::add_text_component_formatted_integer(-1 * iParam0, 1);
		}
		else {
			ui::begin_text_command_display_text("ESDOLLA");
			ui::add_text_component_formatted_integer(iParam0, 1);
		}
		break;

	case 6: ui::begin_text_command_display_text(sParam4); break;

	case 7:
		ui::begin_text_command_display_text("STRING");
		ui::add_text_component_substring_player_name(sParam4);
		break;

	case 8:
		ui::set_text_font(5);
		ui::begin_text_command_display_text("STRING");
		ui::add_text_component_substring_time(iParam0, 14);
		break;

	case 9:
		ui::set_text_font(5);
		ui::begin_text_command_display_text("STRING");
		ui::add_text_component_substring_time(iParam0, 6);
		break;

	case 10:
		ui::set_text_font(5);
		ui::begin_text_command_display_text("STRING");
		ui::add_text_component_substring_time(iParam0, 2055);
		break;

	case 18:
		ui::set_text_font(5);
		ui::begin_text_command_display_text("STRING");
		ui::add_text_component_substring_time(iParam0, 2055);
		break;

	case 12:
		ui::begin_text_command_display_text("AHD_DIST");
		ui::add_text_component_integer(iParam0);
		break;

	case 13:
		ui::begin_text_command_display_text(sParam4);
		ui::add_text_component_integer(iParam0);
		ui::add_text_component_integer(iParam1);
		break;

	case 15:
	case 14:
		ui::begin_text_command_display_text(sParam4);
		ui::add_text_component_integer(iParam0);
		ui::add_text_component_integer(iParam1);
		break;

	case 16:
		ui::begin_text_command_display_text(sParam4);
		ui::add_text_component_integer(iParam1);
		break;
	}
	if (iParam5 != 17) {
		if (iParam5 == 4 || iParam5 == 5) {
			ui::end_text_command_display_text(fParam2 - 0.00078125f * 4f, fParam3, 0);
			ui::set_text_scale(1f, func_38(14f));
		}
		else {
			ui::end_text_command_display_text(fParam2, fParam3, 0);
		}
	}
}

// Position - 0x2F4E
float func_38(float fParam0) { return fParam0 * 0.025f; }

// Position - 0x2F5E
float func_39(float fParam0) { return fParam0 * 0.0009259259f; }

// Position - 0x2F6E
void func_40(int iParam0, char *sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14,
			 int iParam15, int iParam16) {
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9) {
		if (iVar0 == -1) {
			if (func_42(7, iVar1) == 0) {
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1) {
		Global_1354542.f_1 = 1;
		func_41(7, iVar0);
		Global_1354542.f_4282[iVar0] = iParam0;
		StringCopy(&Global_1354542.f_4282.f_11[iVar0 /*16*/], sParam1, 64);
		Global_1354542.f_4282.f_172[iVar0] = iParam2;
		Global_1354542.f_4282.f_216[iVar0] = iParam3;
		Global_1354542.f_4282.f_183[iVar0] = iParam4;
		Global_1354542.f_4282.f_194[iVar0] = iParam5;
		Global_1354542.f_4282.f_249[iVar0] = iParam6;
		Global_1354542.f_4282.f_260[iVar0] = iParam7;
		Global_1354542.f_4282.f_205[iVar0] = iParam8;
		Global_1354542.f_4282.f_314[iVar0] = iParam9;
		Global_1354542.f_4282.f_325[iVar0] = iParam10;
		Global_1354542.f_4282.f_357[iVar0] = iParam11;
		Global_1354542.f_4282.f_238[iVar0] = iParam12;
		Global_1354542.f_4282.f_271[iVar0] = iParam13;
		Global_1354542.f_4282.f_368[iVar0] = iParam14;
		Global_1354542.f_4282.f_379[iVar0] = iParam15;
		Global_1354542.f_4282.f_390[iVar0] = iParam16;
	}
}

// Position - 0x30BC
void func_41(int iParam0, int iParam1) { gameplay::set_bit(&Global_1354542.f_5703[iParam0], iParam1); }

// Position - 0x30D5
int func_42(int iParam0, int iParam1) { return gameplay::is_bit_set(Global_1354542.f_5703[iParam0], iParam1); }

// Position - 0x30EE
float func_43(char *sParam0) {
	ui::_begin_text_command_width(sParam0);
	return ui::_end_text_command_get_width(1) / 2f;
}

// Position - 0x3103
void func_44() {
	graphics::_set_2d_layer(1);
	if (cam::is_screen_fading_out() || cam::is_screen_faded_out()) {
		graphics::_set_2d_layer(7);
	}
	graphics::_0xC6372ECD45D73BCD(0);
}

// Position - 0x312B
float func_45() {
	float fVar0;

	fVar0 = 1f;
	if (gameplay::is_pc_version()) {
	}
	return fVar0;
}

// Position - 0x313F
float func_46(float fParam0) { return fParam0 * 0.001388889f; }

// Position - 0x314F
int func_47(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_48(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x318C
int func_48(int iParam0) {
	if (func_49(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x31B6
bool func_49(int iParam0) { return iParam0 < 3; }

// Position - 0x31C2
void func_50() {
	if (Global_14443.f_1 != 1) {
		if (func_51(0)) {
			func_52(0);
		}
		gameplay::set_bit(&G_SleepModeOffOn11, 2);
	}
}

// Position - 0x31EA
bool func_51(int iParam0) {
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

// Position - 0x3244
void func_52(int iParam0) {
	if (Global_14604) {
		func_54(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
		gameplay::set_bit(&G_SleepModeOffOn11, 16);
	}
	if (audio::is_mobile_phone_call_ongoing()) {
		audio::stop_scripted_conversation(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1) {
		gameplay::set_bit(&G_SleepModeOnOn25, 30);
	}
	else {
		gameplay::clear_bit(&G_SleepModeOnOn25, 30);
	}
	if (!func_53()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x32B4
int func_53() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x32DB
void func_54(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_51(0)) {
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

// Position - 0x334F
int func_55() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67917) {
		if (Global_67918[iVar0 /*9*/] > 0) {
			if (MissionObjectives[Global_67918[iVar0 /*9*/] /*13*/].f_7 == 0) {
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x3393
void func_56(int iParam0) {
	char *sVar0;

	audio::register_script_with_audio(0);
	switch (func_57()) {
	case 0:
		if (iParam0) {
			sVar0 = "MICHAEL_SMALL_01";
		}
		else {
			sVar0 = "MICHAEL_BIG_01";
		}
		break;

	case 1:
		if (iParam0) {
			sVar0 = "FRANKLIN_SMALL_01";
		}
		else {
			sVar0 = "FRANKLIN_BIG_01";
		}
		break;

	case 2:
		if (iParam0) {
			sVar0 = "TREVOR_SMALL_01";
		}
		else {
			sVar0 = "TREVOR_BIG_01";
		}
		break;
	}
	audio::play_mission_complete_audio(sVar0);
}

// Position - 0x3406
int func_57() {
	func_58();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x341F
void func_58() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_48(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_47(player::player_ped_id());
			if (func_49(iVar0) && (!func_59(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_49(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x351C
bool func_59(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x352A
int func_60(var *uParam0, int iParam1, int iParam2) {
	uParam0->f_12 = iParam2;
	func_63(uParam0);
	func_62(uParam0);
	if (gameplay::are_strings_equal(&uParam0->f_550, "SPR_RESULT") ||
		gameplay::are_strings_equal(&uParam0->f_550, "") && uParam0->f_56 > 0) {
		uParam0->f_566 = 1;
	}
	if (network::network_is_game_in_progress()) {
		graphics::request_streamed_texture_dict("MPHud", 0);
	}
	if (uParam0->f_1 == 0) {
		graphics::request_streamed_texture_dict("CommonMenu", 0);
		graphics::request_streamed_texture_dict("MPLeaderboard", 0);
		graphics::request_streamed_texture_dict("MPHud", 0);
		uParam0->f_1 = unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = graphics::request_scaleform_movie_instance("INSTRUCTIONAL_BUTTONS");
	if (iParam1) {
		while (!graphics::has_scaleform_movie_loaded(uParam0->f_1) ||
			   !graphics::has_streamed_texture_dict_loaded("CommonMenu") ||
			   !graphics::has_streamed_texture_dict_loaded("MPLeaderboard") ||
			   !graphics::has_streamed_texture_dict_loaded("MPHud")) {
			system::wait(0);
		}
		if (uParam0->f_562 || uParam0->f_567) {
			while (!graphics::has_scaleform_movie_loaded(uParam0->f_4)) {
				system::wait(0);
			}
		}
	}
	else {
		if (!graphics::has_scaleform_movie_loaded(uParam0->f_1) ||
			!graphics::has_streamed_texture_dict_loaded("CommonMenu") ||
			!graphics::has_streamed_texture_dict_loaded("MPLeaderboard") ||
			!graphics::has_streamed_texture_dict_loaded("MPHud")) {
			return 0;
		}
		if (uParam0->f_562) {
			if (!graphics::has_scaleform_movie_loaded(uParam0->f_4)) {
				return 0;
			}
		}
	}
	if (uParam0->f_562) {
		if (uParam0->f_567) {
			func_61(uParam0);
		}
		else if (uParam0->f_56 != 0) {
			func_22(uParam0, 1);
		}
		else {
			func_22(uParam0, 0);
		}
	}
	Global_69963 = 1;
	return 1;
}

// Position - 0x36C9
void func_61(var *uParam0) {
	graphics::_push_scaleform_movie_function(uParam0->f_4, "CLEAR_ALL");
	graphics::_pop_scaleform_movie_function_void();
	if (gameplay::is_pc_version()) {
		graphics::_push_scaleform_movie_function(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		graphics::_push_scaleform_movie_function_parameter_bool(1);
		graphics::_pop_scaleform_movie_function_void();
	}
	graphics::_push_scaleform_movie_function(uParam0->f_4, "SET_DATA_SLOT");
	graphics::_push_scaleform_movie_function_parameter_int(2);
	func_24(controls::get_control_instructional_button(2, 188, 1));
	func_23("ES_HELP_TU");
	graphics::_pop_scaleform_movie_function_void();
	graphics::_push_scaleform_movie_function(uParam0->f_4, "SET_DATA_SLOT");
	graphics::_push_scaleform_movie_function_parameter_int(1);
	func_24(controls::get_control_instructional_button(2, 187, 1));
	func_23("ES_HELP_TD");
	graphics::_pop_scaleform_movie_function_void();
	graphics::_push_scaleform_movie_function(uParam0->f_4, "SET_DATA_SLOT");
	graphics::_push_scaleform_movie_function_parameter_int(0);
	func_24(controls::get_control_instructional_button(2, 202, 1));
	func_23("ES_HELP_AB");
	graphics::_pop_scaleform_movie_function_void();
	graphics::_push_scaleform_movie_function(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x378D
void func_62(float *fParam0) {
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	fVar0 = 0f;
	ui::set_text_justification(0);
	ui::set_text_scale(1f, func_38(16f));
	if (fParam0->f_31 == 0) {
		if (fParam0->f_29) {
			ui::_begin_text_command_width("STRING");
			ui::add_text_component_substring_player_name(&fParam0->f_13);
			fVar0 = ui::_end_text_command_get_width(1);
		}
		else {
			ui::_begin_text_command_width(&fParam0->f_13);
			fVar0 = ui::_end_text_command_get_width(1);
		}
	}
	else {
		ui::_begin_text_command_width("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < fParam0->f_31) {
			switch (fParam0->f_32[iVar3]) {
			case 0:
				ui::add_text_component_integer(fParam0->f_53[iVar1]);
				iVar1++;
				break;

			case 1:
				ui::add_text_component_substring_text_label(&fParam0->f_36[iVar2 /*16*/]);
				iVar2++;
				break;

			case 2:
				ui::add_text_component_substring_player_name(&fParam0->f_36[iVar2 /*16*/]);
				iVar2++;
				break;
			}
			iVar3++;
		}
		fVar0 = ui::_end_text_command_get_width(1);
	}
	if (fVar0 > 0.1125f * 2f - 0.006f * 2f) {
		*fParam0 = fVar0 / 2f + 0.006f * 2f;
	}
}

// Position - 0x3895
void func_63(var *uParam0) {
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

// Position - 0x3914
void func_64() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	var uVar6;
	float fVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	vector3 vVar80;

	if (Global_67917 == 0) {
		return;
	}
	if (Global_68068 == -1) {
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67917) {
		if (Global_67918[iVar0 /*9*/].f_3 != 0) {
			return;
		}
		iVar0++;
	}
	iVar1 = 0;
	iVar0 = 0;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67917) {
		iVar3 = Global_67918[iVar0 /*9*/];
		bVar4 = !MissionObjectives[iVar3 /*13*/].f_7;
		bVar5 = MissionObjectives[iVar3 /*13*/].f_8;
		uVar6 = MissionObjectives[iVar3 /*13*/].f_12;
		fVar7 = MissionObjectives[iVar3 /*13*/].f_9;
		bVar8 = false;
		bVar8 = false;
		if (func_69(iVar3, Global_67918[iVar0 /*9*/].f_1)) {
			bVar8 = true;
		}
		if (bVar4) {
			if (bVar8) {
				iVar1 += 100000000;
			}
		}
		if (bVar5) {
			iVar9 = Global_67918[iVar0 /*9*/].f_1;
			iVar10 = system::floor(IntToFloat(iVar9) * fVar7);
			iVar2 += iVar10;
			iVar1 += iVar10;
		}
		iVar0++;
	}
	Global_68063 = iVar1;
	Global_68064 = iVar2;
	if (network::network_is_signed_online()) {
		if (Global_68067 == 0) {
			iVar11 = Global_68068;
			if (iVar11 == 90) {
				if (Global_101700.f_8044.f_99.f_205[func_68(0)] == 2) {
					vVar12.f_2.f_1 = 4;
					vVar12.x = 716;
					stats::leaderboards2_write_data(&vVar12);
					stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
					stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
					stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
					stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
					stats::_0x0BCA1D2C47B0D269(135, func_67(810), 0f);
					stats::_0x0BCA1D2C47B0D269(136, func_67(811), 0f);
					stats::_0x0BCA1D2C47B0D269(132, func_67(812), 0f);
					stats::_0x0BCA1D2C47B0D269(2, func_67(813), 0f);
					stats::_0x0BCA1D2C47B0D269(141, func_67(814), 0f);
					stats::_0x0BCA1D2C47B0D269(127, func_67(815), 0f);
					stats::_0x0BCA1D2C47B0D269(137, func_67(816), 0f);
					stats::_0x0BCA1D2C47B0D269(7, func_67(817), 0f);
					stats::_0x0BCA1D2C47B0D269(133, func_67(818), 0f);
					stats::_0x0BCA1D2C47B0D269(90, func_67(819), 0f);
					vVar12.x = 717;
					stats::leaderboards2_write_data(&vVar12);
					stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
					stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
					stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
					stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
					stats::_0x0BCA1D2C47B0D269(135, func_67(810), 0f);
					stats::_0x0BCA1D2C47B0D269(136, func_67(811), 0f);
					stats::_0x0BCA1D2C47B0D269(132, func_67(812), 0f);
					stats::_0x0BCA1D2C47B0D269(2, func_67(813), 0f);
					stats::_0x0BCA1D2C47B0D269(141, func_67(814), 0f);
					stats::_0x0BCA1D2C47B0D269(127, func_67(815), 0f);
					stats::_0x0BCA1D2C47B0D269(137, func_67(816), 0f);
					stats::_0x0BCA1D2C47B0D269(7, func_67(817), 0f);
					stats::_0x0BCA1D2C47B0D269(133, func_67(818), 0f);
					stats::_0x0BCA1D2C47B0D269(90, func_67(819), 0f);
				}
				else {
					func_66(iVar11);
				}
			}
			else if (iVar11 == 47) {
				vVar80.f_2.f_1 = 4;
				vVar80.x = 673;
				stats::leaderboards2_write_data(&vVar80);
				stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
				stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
				stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
				stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
				stats::_0x0BCA1D2C47B0D269(142, func_67(413), 0f);
				stats::_0x0BCA1D2C47B0D269(1, func_67(414), 0f);
				stats::_0x0BCA1D2C47B0D269(87, func_67(415), 0f);
				stats::_0x0BCA1D2C47B0D269(138, func_67(416), 0f);
				stats::_0x0BCA1D2C47B0D269(133, func_67(417), 0f);
				stats::_0x0BCA1D2C47B0D269(7, func_67(418), 0f);
				stats::_0x0BCA1D2C47B0D269(90, func_67(419), 0f);
				stats::_0x0BCA1D2C47B0D269(92, func_67(420), 0f);
				stats::_0x0BCA1D2C47B0D269(5, func_67(421), 0f);
				stats::_0x0BCA1D2C47B0D269(127, func_67(422), 0f);
				stats::_0x0BCA1D2C47B0D269(139, func_67(423), 0f);
				stats::_0x0BCA1D2C47B0D269(134, func_67(424), 0f);
				stats::_0x0BCA1D2C47B0D269(141, func_67(425), 0f);
				stats::_0x0BCA1D2C47B0D269(137, func_67(426), 0f);
				stats::_0x0BCA1D2C47B0D269(132, func_67(427), 0f);
				stats::_0x0BCA1D2C47B0D269(2, func_67(428), 0f);
				stats::_0x0BCA1D2C47B0D269(140, 0, 0f);
				vVar80.x = 672;
				stats::leaderboards2_write_data(&vVar80);
				stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
				stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
				stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
				stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
				stats::_0x0BCA1D2C47B0D269(142, func_67(413), 0f);
				stats::_0x0BCA1D2C47B0D269(1, func_67(414), 0f);
				stats::_0x0BCA1D2C47B0D269(87, func_67(415), 0f);
				stats::_0x0BCA1D2C47B0D269(138, func_67(416), 0f);
				stats::_0x0BCA1D2C47B0D269(133, func_67(417), 0f);
				stats::_0x0BCA1D2C47B0D269(7, func_67(418), 0f);
				stats::_0x0BCA1D2C47B0D269(90, func_67(419), 0f);
				stats::_0x0BCA1D2C47B0D269(92, func_67(420), 0f);
				stats::_0x0BCA1D2C47B0D269(5, func_67(421), 0f);
				stats::_0x0BCA1D2C47B0D269(127, func_67(422), 0f);
				stats::_0x0BCA1D2C47B0D269(139, func_67(423), 0f);
				stats::_0x0BCA1D2C47B0D269(134, func_67(424), 0f);
				stats::_0x0BCA1D2C47B0D269(141, func_67(425), 0f);
				stats::_0x0BCA1D2C47B0D269(135, func_67(426), 0f);
				stats::_0x0BCA1D2C47B0D269(132, func_67(427), 0f);
				stats::_0x0BCA1D2C47B0D269(2, func_67(428), 0f);
				stats::_0x0BCA1D2C47B0D269(140, 0, 0f);
			}
			else {
				func_66(iVar11);
			}
			Global_101700.f_8044.f_330[iVar11 /*6*/].f_4 = Global_68063;
		}
		else {
			func_65(Global_68068);
		}
	}
}

// Position - 0x3E4E
void func_65(var uParam0) {
	var uVar0;

	uVar0 = uParam0;
	uVar0 = uVar0;
}

// Position - 0x3E5E
void func_66(int iParam0) {
	vector3 vVar0;
	struct<13> Var68;
	var uVar81;

	vVar0.f_2.f_1 = 4;
	if (!network::network_is_signed_online()) {
		return;
	}
	if (network::_network_player_is_in_clan()) {
		Var68 = {func_34(player::player_id())};
		if (network::network_clan_player_is_active(&Var68)) {
			if (network::network_clan_player_get_desc(&uVar81, 35, &Var68)) {
				vVar0.y = uVar81;
			}
		}
	}
	switch (iParam0) {
	case 0:
		vVar0.x = 577;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(0), 0f);
		stats::_0x0BCA1D2C47B0D269(148, func_67(1), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(2), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(3), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(4), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(5), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(6), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(7), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(8), 0f);
		vVar0.x = 913;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(0), 0f);
		stats::_0x0BCA1D2C47B0D269(148, func_67(1), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(2), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(3), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(4), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(5), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(6), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(7), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(8), 0f);
		return;

	case 1:
		vVar0.x = 576;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(9), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(10), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(11), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(12), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(13), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(14), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(15), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(16), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(17), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(18), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(19), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(20), 0f);
		vVar0.x = 575;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(9), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(10), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(11), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(12), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(13), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(14), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(15), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(16), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(17), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(18), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(19), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(20), 0f);
		return;

	case 2:
		vVar0.x = 579;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(21), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(22), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(23), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(24), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(25), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(26), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(27), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(28), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(29), 0f);
		vVar0.x = 578;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(21), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(22), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(23), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(24), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(25), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(26), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(27), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(28), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(29), 0f);
		return;

	case 3:
		vVar0.x = 797;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(30), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(31), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(32), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(33), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(34), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(35), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(36), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(37), 0f);
		vVar0.x = 796;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(30), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(31), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(32), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(33), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(34), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(35), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(36), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(37), 0f);
		return;

	case 4:
		vVar0.x = 799;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(43), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(44), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(45), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(46), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(47), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(48), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(49), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(50), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(51), 0f);
		vVar0.x = 798;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(43), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(44), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(45), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(46), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(47), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(48), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(49), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(50), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(51), 0f);
		return;

	case 5:
		vVar0.x = 801;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(57), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(58), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(59), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(60), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(61), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(62), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(63), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(64), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(65), 0f);
		vVar0.x = 800;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(57), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(58), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(59), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(60), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(61), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(62), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(63), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(64), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(65), 0f);
		return;

	case 6:
		vVar0.x = 803;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(71), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(72), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(73), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(74), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(75), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(76), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(77), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(78), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(79), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(80), 0f);
		vVar0.x = 802;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(71), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(72), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(73), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(74), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(75), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(76), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(77), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(78), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(79), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(80), 0f);
		return;

	case 7:
		vVar0.x = 805;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(86), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(87), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(88), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(89), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(90), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(91), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(92), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(93), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(94), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(95), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(96), 0f);
		vVar0.x = 804;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(86), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(87), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(88), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(89), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(90), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(91), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(92), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(93), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(94), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(95), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(96), 0f);
		return;

	case 9:
		vVar0.x = 639;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(102), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(103), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(104), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(105), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(106), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(107), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(108), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(109), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(110), 0f);
		vVar0.x = 638;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(102), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(103), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(104), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(105), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(106), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(107), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(108), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(109), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(110), 0f);
		return;

	case 8:
		vVar0.x = 641;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(111), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(112), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(113), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(114), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(115), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(116), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(117), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(118), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(119), 0f);
		vVar0.x = 640;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(111), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(112), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(113), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(114), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(115), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(116), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(117), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(118), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(119), 0f);
		return;

	case 10:
		vVar0.x = 646;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(120), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(121), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(122), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(123), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(124), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(125), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(126), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(127), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(128), 0f);
		vVar0.x = 645;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(120), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(121), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(122), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(123), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(124), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(125), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(126), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(127), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(128), 0f);
		return;

	case 11:
		vVar0.x = 671;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(129), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(130), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(131), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(132), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(133), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(134), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(135), 0f);
		vVar0.x = 670;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(129), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(130), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(131), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(132), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(133), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(134), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(135), 0f);
		return;

	case 12:
		vVar0.x = 603;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(136), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(137), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(138), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(139), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(140), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(141), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(142), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(143), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(144), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(145), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(146), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(147), 0f);
		vVar0.x = 602;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(136), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(137), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(138), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(139), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(140), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(141), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(142), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(143), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(144), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(145), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(146), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(147), 0f);
		return;

	case 13:
		vVar0.x = 605;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(148), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(149), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(150), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(151), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(152), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(153), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(154), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(155), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(156), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(157), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(158), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(159), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(160), 0f);
		vVar0.x = 604;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(148), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(149), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(150), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(151), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(152), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(153), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(154), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(155), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(156), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(157), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(158), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(159), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(160), 0f);
		return;

	case 14:
		vVar0.x = 648;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(161), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(162), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(163), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(164), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(165), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(166), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(167), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(168), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(169), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(170), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(171), 0f);
		vVar0.x = 647;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(161), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(162), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(163), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(164), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(165), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(166), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(167), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(168), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(169), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(170), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(171), 0f);
		return;

	case 15:
		vVar0.x = 650;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(172), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(173), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(174), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(175), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(176), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(177), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(178), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(179), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(180), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(181), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(182), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(183), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(184), 0f);
		vVar0.x = 649;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(172), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(173), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(174), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(175), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(176), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(177), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(178), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(179), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(180), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(181), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(182), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(183), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(184), 0f);
		return;

	case 16:
		vVar0.x = 656;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(185), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(186), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(187), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(188), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(189), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(190), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(191), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(192), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(193), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(194), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(195), 0f);
		vVar0.x = 655;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(185), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(186), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(187), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(188), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(189), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(190), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(191), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(192), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(193), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(194), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(195), 0f);
		return;

	case 17:
		vVar0.x = 583;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(196), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(197), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(198), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(199), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(200), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(201), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(202), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(203), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(204), 0f);
		vVar0.x = 582;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(196), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(197), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(198), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(199), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(200), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(201), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(202), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(203), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(204), 0f);
		return;

	case 18:
		vVar0.x = 585;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(205), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(206), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(207), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(208), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(209), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(210), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(211), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(212), 0f);
		stats::_0x0BCA1D2C47B0D269(140, func_67(213), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(214), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(215), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(216), 0f);
		vVar0.x = 584;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(205), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(206), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(207), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(208), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(209), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(210), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(211), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(212), 0f);
		stats::_0x0BCA1D2C47B0D269(140, func_67(213), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(214), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(215), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(216), 0f);
		return;

	case 19:
		vVar0.x = 587;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(217), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(218), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(219), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(220), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(221), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(222), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(223), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(224), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(225), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(226), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(227), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(228), 0f);
		vVar0.x = 586;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(217), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(218), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(219), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(220), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(221), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(222), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(223), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(224), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(225), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(226), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(227), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(228), 0f);
		return;

	case 20:
		vVar0.x = 609;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(229), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(230), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(231), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(232), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(233), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(234), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(235), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(236), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(237), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(238), 0f);
		vVar0.x = 608;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(229), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(230), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(231), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(232), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(233), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(234), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(235), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(236), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(237), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(238), 0f);
		return;

	case 21:
		vVar0.x = 621;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(239), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(240), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(241), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(242), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(243), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(244), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(245), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(246), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(247), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(248), 0f);
		vVar0.x = 620;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(239), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(240), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(241), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(242), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(243), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(244), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(245), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(246), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(247), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(248), 0f);
		return;

	case 22:
		vVar0.x = 675;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(249), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(250), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(251), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(252), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(253), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(254), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(255), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(256), 0f);
		vVar0.x = 674;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(249), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(250), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(251), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(252), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(253), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(254), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(255), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(256), 0f);
		return;

	case 26:
		vVar0.x = 712;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(257), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(258), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(259), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(260), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(261), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(262), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(263), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(264), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(265), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(266), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(267), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(268), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(269), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(270), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(271), 0f);
		stats::_0x0BCA1D2C47B0D269(103, func_67(272), 0f);
		vVar0.x = 711;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(257), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(258), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(259), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(260), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(261), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(262), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(263), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(264), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(265), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(266), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(267), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(268), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(269), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(270), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(271), 0f);
		stats::_0x0BCA1D2C47B0D269(103, func_67(272), 0f);
		return;

	case 29:
		vVar0.x = 611;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(273), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(274), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(275), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(276), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(277), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(278), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(279), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(280), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(281), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(282), 0f);
		vVar0.x = 610;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(273), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(274), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(275), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(276), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(277), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(278), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(279), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(280), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(281), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(282), 0f);
		return;

	default:
	}
	switch (iParam0) {
	case 30:
		vVar0.x = 615;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(283), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(284), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(285), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(286), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(287), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(288), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(289), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(290), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(291), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(292), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(293), 0f);
		vVar0.x = 614;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(283), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(284), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(285), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(286), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(287), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(288), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(289), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(290), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(291), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(292), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(293), 0f);
		return;

	case 31:
		vVar0.x = 623;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(294), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(295), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(296), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(297), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(298), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(299), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(300), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(301), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(302), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(303), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(304), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(305), 0f);
		vVar0.x = 622;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(294), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(295), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(296), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(297), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(298), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(299), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(300), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(301), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(302), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(303), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(304), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(305), 0f);
		return;

	case 38:
		vVar0.x = 627;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(306), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(307), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(308), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(309), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(310), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(311), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(312), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(313), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(314), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(315), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(316), 0f);
		vVar0.x = 626;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(306), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(307), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(308), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(309), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(310), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(311), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(312), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(313), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(314), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(315), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(316), 0f);
		return;

	case 33:
		vVar0.x = 741;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(317), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(318), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(319), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(320), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(321), 0f);
		vVar0.x = 740;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(317), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(318), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(319), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(320), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(321), 0f);
		return;

	case 34:
		vVar0.x = 745;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(322), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(323), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(324), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(325), 0f);
		vVar0.x = 742;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(322), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(323), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(324), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(325), 0f);
		return;

	case 39:
		vVar0.x = 658;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(326), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(327), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(328), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(329), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(330), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(331), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(332), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(333), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(334), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(335), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(336), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(337), 0f);
		vVar0.x = 657;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(326), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(327), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(328), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(329), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(330), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(331), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(332), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(333), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(334), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(335), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(336), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(337), 0f);
		return;

	case 40:
		vVar0.x = 581;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(338), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(339), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(340), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(341), 0f);
		stats::_0x0BCA1D2C47B0D269(140, func_67(342), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(343), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(344), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(345), 0f);
		vVar0.x = 580;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(338), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(339), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(340), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(341), 0f);
		stats::_0x0BCA1D2C47B0D269(140, func_67(342), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(343), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(344), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(345), 0f);
		return;

	case 41:
		vVar0.x = 619;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(346), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(347), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(348), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(349), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(350), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(351), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(352), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(353), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(354), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(355), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(356), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(357), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(358), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(359), 0f);
		vVar0.x = 618;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(346), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(347), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(348), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(349), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(350), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(351), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(352), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(353), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(354), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(355), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(356), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(357), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(358), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(359), 0f);
		return;

	case 42:
		vVar0.x = 704;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(360), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(361), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(362), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(363), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(364), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(365), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(366), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(367), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(368), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(369), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(370), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(371), 0f);
		vVar0.x = 703;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(360), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(361), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(362), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(363), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(364), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(365), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(366), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(367), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(368), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(369), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(370), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(371), 0f);
		return;

	case 43:
		vVar0.x = 593;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(372), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(373), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(374), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(375), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(376), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(377), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(378), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(379), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(380), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(381), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(382), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(383), 0f);
		vVar0.x = 592;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(372), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(373), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(374), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(375), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(376), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(377), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(378), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(379), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(380), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(381), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(382), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(383), 0f);
		return;

	case 44:
		vVar0.x = 589;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(384), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(385), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(386), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(387), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(388), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(389), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(390), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(391), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(392), 0f);
		vVar0.x = 588;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(384), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(385), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(386), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(387), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(388), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(389), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(390), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(391), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(392), 0f);
		return;

	case 45:
		vVar0.x = 635;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(393), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(394), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(395), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(396), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(397), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(398), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(399), 0f);
		vVar0.x = 634;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(393), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(394), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(395), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(396), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(397), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(398), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(399), 0f);
		return;

	case 46:
		vVar0.x = 669;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(400), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(401), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(402), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(403), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(404), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(405), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(406), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(407), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(408), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(409), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(410), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(411), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(412), 0f);
		vVar0.x = 668;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(400), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(401), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(402), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(403), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(404), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(405), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(406), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(407), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(408), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(409), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(410), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(411), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(412), 0f);
		return;

	case 47:
		vVar0.x = 673;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(413), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(414), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(415), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(416), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(417), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(418), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(419), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(420), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(421), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(422), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(423), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(424), 0f);
		stats::_0x0BCA1D2C47B0D269(141, func_67(425), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(426), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(427), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(428), 0f);
		vVar0.x = 672;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(413), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(414), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(415), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(416), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(417), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(418), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(419), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(420), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(421), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(422), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(423), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(424), 0f);
		stats::_0x0BCA1D2C47B0D269(141, func_67(425), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(426), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(427), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(428), 0f);
		return;

	case 48:
		vVar0.x = 694;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(429), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(430), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(431), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(432), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(433), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(434), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(435), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(436), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(437), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(438), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(439), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(440), 0f);
		vVar0.x = 693;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(429), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(430), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(431), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(432), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(433), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(434), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(435), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(436), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(437), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(438), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(439), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(440), 0f);
		return;

	case 49:
		vVar0.x = 702;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(441), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(442), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(443), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(444), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(445), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(446), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(447), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(448), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(449), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(450), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(451), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(452), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(453), 0f);
		vVar0.x = 701;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(441), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(442), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(443), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(444), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(445), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(446), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(447), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(448), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(449), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(450), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(451), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(452), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(453), 0f);
		return;

	case 53:
		vVar0.x = 714;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(454), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(455), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(456), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(457), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(458), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(459), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(460), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(461), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(462), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(463), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(464), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(465), 0f);
		vVar0.x = 713;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(454), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(455), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(456), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(457), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(458), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(459), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(460), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(461), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(462), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(463), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(464), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(465), 0f);
		return;

	case 60:
		vVar0.x = 809;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(466), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(467), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(468), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(469), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(470), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(471), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(472), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(473), 0f);
		vVar0.x = 808;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(466), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(467), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(468), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(469), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(470), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(471), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(472), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(473), 0f);
		return;

	case 61:
		vVar0.x = 637;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(474), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(475), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(476), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(477), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(478), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(479), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(480), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(481), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(482), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(483), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(484), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(485), 0f);
		vVar0.x = 636;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(474), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(475), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(476), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(477), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(478), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(479), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(480), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(481), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(482), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(483), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(484), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(485), 0f);
		return;

	case 62:
		vVar0.x = 599;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(486), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(487), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(488), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(489), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(490), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(491), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(492), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(493), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(494), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(495), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(496), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(497), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(498), 0f);
		vVar0.x = 598;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(486), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(487), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(488), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(489), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(490), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(491), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(492), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(493), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(494), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(495), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(496), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(497), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(498), 0f);
		return;

	case 63:
		vVar0.x = 601;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(499), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(500), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(501), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(502), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(503), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(504), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(505), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(506), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(507), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(508), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(509), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(510), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(511), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(512), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(513), 0f);
		stats::_0x0BCA1D2C47B0D269(9, func_67(514), 0f);
		vVar0.x = 600;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(499), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(500), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(501), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(502), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(503), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(504), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(505), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(506), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(507), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(508), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(509), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(510), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(511), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(512), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(513), 0f);
		stats::_0x0BCA1D2C47B0D269(9, func_67(514), 0f);
		return;

	case 64:
		vVar0.x = 607;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(515), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(516), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(517), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(518), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(519), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(520), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(521), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(522), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(523), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(524), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(525), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(526), 0f);
		vVar0.x = 606;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(515), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(516), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(517), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(518), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(519), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(520), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(521), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(522), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(523), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(524), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(525), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(526), 0f);
		return;

	case 66:
		vVar0.x = 680;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(527), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(528), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(529), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(530), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(531), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(532), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(533), 0f);
		vVar0.x = 676;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(527), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(528), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(529), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(530), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(531), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(532), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(533), 0f);
		return;

	case 67:
		vVar0.x = 679;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(534), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(535), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(536), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(537), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(538), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(539), 0f);
		vVar0.x = 678;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(534), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(535), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(536), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(537), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(538), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(539), 0f);
		return;

	case 68:
		vVar0.x = 725;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(540), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(541), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(542), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(543), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(544), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(545), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(546), 0f);
		vVar0.x = 724;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(540), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(541), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(542), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(543), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(544), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(545), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(546), 0f);
		return;

	default:
	}
	switch (iParam0) {
	case 69:
		vVar0.x = 686;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(547), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(548), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(549), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(550), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(551), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(552), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(553), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(554), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(555), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(556), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(557), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(558), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(559), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(560), 0f);
		vVar0.x = 681;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(547), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(548), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(549), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(550), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(551), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(552), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(553), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(554), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(555), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(556), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(557), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(558), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(559), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(560), 0f);
		return;

	case 70:
		vVar0.x = 721;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(561), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(562), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(563), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(564), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(565), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(566), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(567), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(568), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(569), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(570), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(571), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(572), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(573), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(574), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(575), 0f);
		vVar0.x = 720;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(561), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(562), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(563), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(564), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(565), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(566), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(567), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(568), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(569), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(570), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(571), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(572), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(573), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(574), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(575), 0f);
		return;

	case 71:
		vVar0.x = 617;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(576), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(577), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(578), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(579), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(580), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(581), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(582), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(583), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(584), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(585), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(586), 0f);
		vVar0.x = 616;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(576), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(577), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(578), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(579), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(580), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(581), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(582), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(583), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(584), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(585), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(586), 0f);
		return;

	case 72:
		vVar0.x = 727;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(587), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(588), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(589), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(590), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(591), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(592), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(593), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(594), 0f);
		vVar0.x = 726;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(587), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(588), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(589), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(590), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(591), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(592), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(593), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(594), 0f);
		return;

	case 73:
		vVar0.x = 729;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(595), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(596), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(597), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(598), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(599), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(600), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(601), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(602), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(603), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(604), 0f);
		vVar0.x = 728;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(595), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(596), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(597), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(598), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(599), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(600), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(601), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(602), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(603), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(604), 0f);
		return;

	case 74:
		vVar0.x = 625;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(605), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(606), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(607), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(608), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(609), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(610), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(611), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(612), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(613), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(614), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(615), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(616), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(617), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(618), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(619), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(620), 0f);
		vVar0.x = 624;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(605), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(606), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(607), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(608), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(609), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(610), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(611), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(612), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(613), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(614), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(615), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(616), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(617), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(618), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(619), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(620), 0f);
		return;

	case 75:
		vVar0.x = 719;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(621), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(622), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(623), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(624), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(625), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(626), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(627), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(628), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(629), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(630), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(631), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(632), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(633), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(634), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(635), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(636), 0f);
		vVar0.x = 718;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(621), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(622), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(623), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(624), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(625), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(626), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(627), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(628), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(629), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(630), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(631), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(632), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(633), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(634), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(635), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(636), 0f);
		return;

	case 76:
		vVar0.x = 667;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(637), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(638), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(639), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(640), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(641), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(642), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(643), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(644), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(645), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(646), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(647), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(648), 0f);
		vVar0.x = 666;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(637), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(638), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(639), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(640), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(641), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(642), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(643), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(644), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(645), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(646), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(647), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(648), 0f);
		return;

	case 78:
		vVar0.x = 735;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(649), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(650), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(651), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(652), 0f);
		vVar0.x = 734;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(649), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(650), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(651), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(652), 0f);
		return;

	case 79:
		vVar0.x = 737;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(653), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(654), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(655), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(656), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(657), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(658), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(659), 0f);
		vVar0.x = 736;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(653), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(654), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(655), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(656), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(657), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(658), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(659), 0f);
		return;

	case 84:
		vVar0.x = 706;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(660), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(661), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(662), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(663), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(664), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(665), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(666), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(667), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(668), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(669), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(670), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(671), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(672), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(673), 0f);
		vVar0.x = 705;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(660), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(661), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(662), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(663), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(664), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(665), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(666), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(667), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(668), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(669), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(670), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(671), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(672), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(673), 0f);
		return;

	case 85:
		vVar0.x = 723;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(674), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(675), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(676), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(677), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(678), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(679), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(680), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(681), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(682), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(683), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(684), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(685), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(686), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(687), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(688), 0f);
		vVar0.x = 722;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(674), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(675), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(676), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(677), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(678), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(679), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(680), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(681), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(682), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(683), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(684), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(685), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(686), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(687), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(688), 0f);
		return;

	case 86:
		vVar0.x = 595;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(689), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(690), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(691), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(692), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(693), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(694), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(695), 0f);
		vVar0.x = 594;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(689), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(690), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(691), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(692), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(693), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(694), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(695), 0f);
		return;

	case 87:
		vVar0.x = 731;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(696), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(697), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(698), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(699), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(700), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(701), 0f);
		vVar0.x = 730;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(696), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(697), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(698), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(699), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(700), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(701), 0f);
		return;

	case 88:
		vVar0.x = 733;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(702), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(703), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(704), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(705), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(706), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(707), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(708), 0f);
		vVar0.x = 732;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(702), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(703), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(704), 0f);
		stats::_0x0BCA1D2C47B0D269(139, func_67(705), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(706), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(707), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(708), 0f);
		return;

	case 91:
		vVar0.x = 652;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(709), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(710), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(711), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(712), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(713), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(714), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(715), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(716), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(717), 0f);
		vVar0.x = 651;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(709), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(710), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(711), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(712), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(713), 0f);
		stats::_0x0BCA1D2C47B0D269(142, func_67(714), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(715), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(716), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(717), 0f);
		return;

	case 92:
		vVar0.x = 739;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(718), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(719), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(720), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(721), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(722), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(723), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(724), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(725), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(726), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(727), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(728), 0f);
		vVar0.x = 738;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(718), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(719), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(720), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(721), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(722), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(723), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(724), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(725), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(726), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(727), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(728), 0f);
		return;

	case 93:
		vVar0.x = 654;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(729), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(730), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(731), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(732), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(733), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(734), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(735), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(736), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(737), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(738), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(739), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(740), 0f);
		vVar0.x = 653;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(729), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(730), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(731), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(732), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(733), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(734), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(735), 0f);
		stats::_0x0BCA1D2C47B0D269(87, func_67(736), 0f);
		stats::_0x0BCA1D2C47B0D269(1, func_67(737), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(738), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(739), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(740), 0f);
		return;

	case 90:
		vVar0.x = 597;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(810), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(811), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(812), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(813), 0f);
		stats::_0x0BCA1D2C47B0D269(141, func_67(814), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(815), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(816), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(817), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(818), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(819), 0f);
		vVar0.x = 596;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(810), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(811), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(812), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(813), 0f);
		stats::_0x0BCA1D2C47B0D269(141, func_67(814), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(815), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(816), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(817), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(818), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(819), 0f);
		return;

	case 36:
		vVar0.x = 831;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(820), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(821), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(822), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(823), 0f);
		vVar0.x = 832;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(820), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(821), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(822), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(823), 0f);
		return;

	case 37:
		vVar0.x = 833;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(824), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(825), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(826), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(827), 0f);
		vVar0.x = 834;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(824), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(825), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(826), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(827), 0f);
		return;

	case 24:
		vVar0.x = 848;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(846), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(847), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(848), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(849), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(850), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(851), 0f);
		vVar0.x = 847;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(846), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(847), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(848), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(849), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(850), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(851), 0f);
		return;

	case 25:
		vVar0.x = 846;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(852), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(853), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(854), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(855), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(856), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(857), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(858), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(859), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(860), 0f);
		vVar0.x = 845;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(852), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(853), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(854), 0f);
		stats::_0x0BCA1D2C47B0D269(5, func_67(855), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(856), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(857), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(858), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(859), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(860), 0f);
		return;

	case 59:
		vVar0.x = 807;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(861), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(862), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(863), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(864), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(865), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(866), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(867), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(868), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(869), 0f);
		vVar0.x = 806;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(861), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(862), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(863), 0f);
		stats::_0x0BCA1D2C47B0D269(135, func_67(864), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(865), 0f);
		stats::_0x0BCA1D2C47B0D269(136, func_67(866), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(867), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(868), 0f);
		stats::_0x0BCA1D2C47B0D269(137, func_67(869), 0f);
		return;

	case 65:
		vVar0.x = 838;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(870), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(871), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(872), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(873), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(874), 0f);
		vVar0.x = 837;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(870), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(871), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(872), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(873), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(874), 0f);
		return;

	default:
	}
	switch (iParam0) {
	case 80:
		vVar0.x = 917;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(875), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(876), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(877), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(878), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(879), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(880), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(881), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(882), 0f);
		vVar0.x = 916;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(875), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(876), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(877), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(878), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(879), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(880), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(881), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(882), 0f);
		return;

	case 81:
		vVar0.x = 919;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(883), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(884), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(885), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(886), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(887), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(888), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(889), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(890), 0f);
		vVar0.x = 918;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(883), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(884), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(885), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(886), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(887), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(888), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(889), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(890), 0f);
		return;

	case 82:
		vVar0.x = 921;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(891), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(892), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(893), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(894), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(895), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(896), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(897), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(898), 0f);
		vVar0.x = 920;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(891), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(892), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(893), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(894), 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(895), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(896), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(897), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(898), 0f);
		return;

	case 83:
		vVar0.x = 923;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(899), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(900), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(901), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(902), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(903), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(904), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(905), 0f);
		vVar0.x = 922;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(899), 0f);
		stats::_0x0BCA1D2C47B0D269(134, func_67(900), 0f);
		stats::_0x0BCA1D2C47B0D269(92, func_67(901), 0f);
		stats::_0x0BCA1D2C47B0D269(133, func_67(902), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(903), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(904), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(905), 0f);
		return;

	case 89:
		vVar0.x = 925;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(906), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(907), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(908), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(909), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(910), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(911), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(912), 0f);
		vVar0.x = 924;
		stats::leaderboards2_write_data(&vVar0);
		stats::_0x0BCA1D2C47B0D269(131, Global_68063, 0f);
		stats::_0x0BCA1D2C47B0D269(162, Global_68064, 0f);
		stats::_0x0BCA1D2C47B0D269(126, 1, 0f);
		stats::_0x0BCA1D2C47B0D269(161, Global_68066, 0f);
		stats::_0x0BCA1D2C47B0D269(138, func_67(906), 0f);
		stats::_0x0BCA1D2C47B0D269(2, func_67(907), 0f);
		stats::_0x0BCA1D2C47B0D269(7, func_67(908), 0f);
		stats::_0x0BCA1D2C47B0D269(127, func_67(909), 0f);
		stats::_0x0BCA1D2C47B0D269(95, func_67(910), 0f);
		stats::_0x0BCA1D2C47B0D269(90, func_67(911), 0f);
		stats::_0x0BCA1D2C47B0D269(132, func_67(912), 0f);
		return;

	default:
	}
}

// Position - 0xB578
int func_67(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	switch (iParam0) {
	case 665:
	case 676:
		iVar0 = 0;
		while (iVar0 < 5) {
			if (Global_101700.f_1.f_126[Global_55826 /*23*/].f_11[iVar0] == 1) {
				iVar1 += Global_101700.f_1.f_126[Global_55826 /*23*/].f_17[iVar0];
			}
			iVar0++;
		}
		return iVar1;

	default:
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67917) {
		if (Global_67918[iVar0 /*9*/] == iParam0) {
			return Global_67918[iVar0 /*9*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0xB612
int func_68(int iParam0) {
	switch (iParam0) {
	case 0: return 7;

	case 1: return 8;

	case 2: return 9;

	case 3: return 10;

	case 4: return 11;
	}
	return -1;
}

// Position - 0xB667
bool func_69(int iParam0, int iParam1) {
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
		&&Global_101700.f_23863[4 /*4*/] == func_57() { MissionObjectives[iParam0 /*13*/].f_2 = 0; }
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

// Position - 0xB731
void func_70(var *uParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (Global_55812) {
		Global_55827 = 0;
		return;
	}
	iLocal_622 = 0;
	iLocal_623 = 0;
	iVar0 = 0;
	if (func_94(0)) {
		gameplay::clear_replay_stats();
		Global_55814 = 1;
		gameplay::begin_replay_stats(33, 33);
	}
	iVar1 = -1;
	iLocal_627 = 0;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67917) {
		switch (Global_67918[iVar0 /*9*/]) {
		case 852:
		case 846: Global_67918[iVar0 /*9*/].f_1 = 1; break;
		}
		if (func_81(uParam0, iVar0)) {
		}
		if (Global_67918[iVar0 /*9*/] >= 0) {
			if (!MissionObjectives[Global_67918[iVar0 /*9*/] /*13*/].f_7) {
				iLocal_623++;
				if (Global_67918[iVar0 /*9*/].f_3 == 2) {
					iVar2 = 1;
				}
			}
		}
		switch (Global_67918[iVar0 /*9*/]) {
		case 84:
		case 100:
		case 69:
		case 41:
		case 54: iVar1 = Global_67918[iVar0 /*9*/].f_1; break;
		}
		iVar0++;
	}
	Global_68066 = iLocal_622;
	fVar3 = func_76(uParam0, iLocal_622, iLocal_623, iVar2);
	if (func_94(0)) {
		gameplay::_0x69FE6DC87BD2A5E9(Global_68068);
		gameplay::_0x69FE6DC87BD2A5E9(system::round(fVar3));
		if (iVar2) {
			gameplay::_0x69FE6DC87BD2A5E9(1);
		}
		else {
			gameplay::_0x69FE6DC87BD2A5E9(0);
		}
		if (Global_68067) {
			gameplay::_0x69FE6DC87BD2A5E9(1);
		}
		else {
			gameplay::_0x69FE6DC87BD2A5E9(0);
		}
		gameplay::end_replay_stats();
		Global_55814 = 0;
	}
	Global_55827 = 0;
	if (iVar1 > -1) {
		fVar3 = system::to_float(iVar1);
	}
	func_71(fVar3, iVar2);
}

// Position - 0xB8A4
void func_71(float fParam0, int iParam1) {
	float fVar0;
	int iVar1;
	int iVar2;

	if (Global_68067) {
		iVar1 = Global_68068;
		fVar0 = func_75(iVar1);
		if (fVar0 < 100f) {
			if (fParam0 >= 100f) {
				Global_101700.f_8975.f_22++;
			}
		}
		if (fParam0 >= fVar0) {
			func_74(iVar1, fParam0, iParam1);
		}
	}
	else if (Global_68068 == -1) {
	}
	else {
		iVar2 = Global_68068;
		fVar0 = func_73(iVar2);
		if (fVar0 < 100f) {
			if (fParam0 >= 100f) {
				Global_101700.f_8975.f_22++;
			}
		}
		if (fParam0 >= fVar0) {
			func_72(iVar2, fParam0, iParam1);
		}
	}
}

// Position - 0xB955
void func_72(int iParam0, float fParam1, bool bParam2) {
	if (bParam2) {
		Global_101700.f_8044.f_330[iParam0 /*6*/].f_5 = 50f;
	}
	else {
		Global_101700.f_8044.f_330[iParam0 /*6*/].f_5 = fParam1;
	}
	Global_25199 = 1;
}

// Position - 0xB990
var func_73(int iParam0) { return Global_101700.f_8044.f_330[iParam0 /*6*/].f_5; }

// Position - 0xB9A8
void func_74(int iParam0, float fParam1, bool bParam2) {
	if (bParam2) {
		Global_101700.f_17533[iParam0 /*6*/].f_5 = 50f;
	}
	else {
		Global_101700.f_17533[iParam0 /*6*/].f_5 = fParam1;
	}
	Global_25199 = 1;
}

// Position - 0xB9DD
var func_75(int iParam0) { return Global_101700.f_17533[iParam0 /*6*/].f_5; }

// Position - 0xB9F2
float func_76(var *uParam0, int iParam1, int iParam2, int iParam3) {
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = func_80(iParam1, iParam2, 0);
	iVar1 = func_79(fVar0);
	if (iParam3) {
		fVar0 = 50f;
		iVar1 = 1;
	}
	if (fVar0 == 0f) {
		func_78(uParam0, 1, "MTPHPER", 0, 0, 0, 0);
		return fVar0;
	}
	iVar2 = 0;
	switch (func_77(iVar1)) {
	case 109: iVar2 = 3; break;

	case 108: iVar2 = 2; break;

	case 107: iVar2 = 1; break;
	}
	switch (func_77(iVar1)) {
	case 109: func_78(uParam0, 1, "MTPHPER", system::round(fVar0), 0, 0, iVar2); break;

	case 108: func_78(uParam0, 1, "MTPHPER", system::round(fVar0), 0, 0, iVar2); break;

	case 107: func_78(uParam0, 1, "MTPHPER", system::round(fVar0), 0, 0, iVar2); break;
	}
	return fVar0;
}

// Position - 0xBAD0
int func_77(int iParam0) {
	int iVar0;

	iVar0 = 107;
	switch (iParam0) {
	case 3: iVar0 = 109; break;

	case 2: iVar0 = 108; break;

	case 1: iVar0 = 107; break;
	}
	return iVar0;
}

// Position - 0xBB0C
void func_78(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	uParam0->f_549 = iParam1;
	StringCopy(&uParam0->f_550, sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
}

// Position - 0xBB40
int func_79(float fParam0) {
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

// Position - 0xBB75
float func_80(int iParam0, int iParam1, int iParam2) {
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

// Position - 0xBBD4
bool func_81(var *uParam0, int iParam1) {
	float fVar0;
	float fVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	char *sVar19;
	char *sVar20;
	int iVar21;

	fVar0 = 0f;
	fVar1 = 0f;
	if (Global_67918[iParam1 /*9*/] >= 0) {
	}
	else {
		return false;
	}
	Var2 = {MissionObjectives[Global_67918[iParam1 /*9*/] /*13*/]};
	if (Var2 == 15) {
		Global_67918[iParam1 /*9*/].f_1 = iLocal_630;
	}
	if (Var2 == 9) {
		Global_67918[iParam1 /*9*/].f_2 = fLocal_629;
	}
	if (Var2 == 14) {
		Global_67918[iParam1 /*9*/].f_1 = system::floor(Global_67918[iParam1 /*9*/].f_2);
	}
	if (func_69(Global_67918[iParam1 /*9*/], Global_67918[iParam1 /*9*/].f_1)) {
		fVar0 = 1f;
	}
	if (Global_67918[iParam1 /*9*/].f_3 != 0) {
		fVar0 = 0f;
	}
	if (Var2.f_2 != 0) {
		fVar1 = system::to_float(
			system::floor(system::to_float(Global_67918[iParam1 /*9*/].f_1) / system::to_float(Var2.f_2) * 100f));
		if (fVar1 > 100f) {
			fVar1 = 100f;
		}
	}
	iVar15 = func_84(Var2.f_4);
	iVar16 = 0;
	switch (Global_67918[iParam1 /*9*/]) {
	case 42:
	case 55:
	case 85:
	case 70:
	case 101: iVar16 = 1; break;

	case 84:
	case 100:
	case 69:
	case 41:
	case 54: iVar16 = 1; break;
	}
	if (Global_67918[iParam1 /*9*/].f_3 == 0 || iVar16) {
		if (Var2.f_3) {
			if (iVar15 > Global_67918[iParam1 /*9*/].f_1 || iVar15 < 0 || iVar15 == -1) {
				func_83(Global_67918[iParam1 /*9*/].f_1, Global_67918[iParam1 /*9*/]);
			}
		}
		else if (Global_67918[iParam1 /*9*/].f_1 > iVar15 || iVar15 < 0 || iVar15 == -1) {
			func_83(Global_67918[iParam1 /*9*/].f_1, Global_67918[iParam1 /*9*/]);
		}
	}
	iVar17 = Global_67918[iParam1 /*9*/].f_1;
	if (Var2.f_7) {
		return true;
	}
	iVar18 = 1;
	if (fVar0 == 1f) {
		iLocal_622++;
		iVar18 = 2;
	}
	sVar19 = func_82(Global_67918[iParam1 /*9*/]);
	if (Global_67918[iParam1 /*9*/].f_3 != 0) {
		if (!func_94(0)) {
			func_83(-1, Global_67918[iParam1 /*9*/]);
		}
		sVar20 = "MTPHPERRET";
		switch (Global_67918[iParam1 /*9*/].f_3) {
		case 4: sVar20 = "MTPHPERCHE"; break;

		case 2: sVar20 = "MTPHPERSKI"; break;

		case 3: sVar20 = "MTPHPERTAX"; break;

		case 5: sVar20 = "MTPHPERNOREC"; break;
		}
		if (iLocal_627 == Global_67918[iParam1 /*9*/].f_3) {
			sVar20 = "";
		}
		iLocal_627 = Global_67918[iParam1 /*9*/].f_3;
		func_89(uParam0, 6, sVar19, sVar20, Global_67918[iParam1 /*9*/].f_1, 0, 3, 0);
	}
	else {
		iLocal_627 = 0;
		switch (Var2) {
		case 1: func_89(uParam0, 8, sVar19, "", Global_67918[iParam1 /*9*/].f_1, 0, iVar18, 0); break;

		case 2: func_89(uParam0, 9, sVar19, "", Global_67918[iParam1 /*9*/].f_1, 0, iVar18, 0); break;

		case 3: func_89(uParam0, 0, sVar19, "", Global_67918[iParam1 /*9*/].f_1, 0, iVar18, 0); break;

		case 4:
		case 17: func_89(uParam0, 9, sVar19, "", Global_67918[iParam1 /*9*/].f_1, 0, iVar18, 0); break;

		case 5:
			func_89(uParam0, 11, sVar19, "",
					system::ceil(system::to_float(Global_67918[iParam1 /*9*/].f_1) / system::to_float(Var2.f_2) * 100f),
					0, iVar18, 0);
			break;

		case 6: func_89(uParam0, 0, sVar19, "", Global_67918[iParam1 /*9*/].f_1, 0, iVar18, 0); break;

		case 7:
			if (iVar17 > Var2.f_2) {
				iVar17 = Var2.f_2;
			}
			func_89(uParam0, 2, sVar19, "", iVar17, Var2.f_2, iVar18, 0);
			break;

		case 8:
			iVar21 = Global_67918[iParam1 /*9*/].f_1;
			if (iVar21 > Var2.f_2) {
				iVar21 = Var2.f_2;
			}
			func_89(uParam0, 2, sVar19, "", iVar21, Var2.f_2, iVar18, 0);
			break;

		case 9: func_89(uParam0, 11, sVar19, "", system::round(Global_67918[iParam1 /*9*/].f_2), 0, iVar18, 0); break;

		case 10:
		case 15:
		case 16: func_89(uParam0, 1, sVar19, "", Global_67918[iParam1 /*9*/].f_1, 0, iVar18, 0); break;

		case 11: func_89(uParam0, 11, sVar19, "", Global_67918[iParam1 /*9*/].f_1, 0, iVar18, 0); break;

		case 14: func_89(uParam0, 12, sVar19, "", Global_67918[iParam1 /*9*/].f_1, 0, iVar18, 0); break;

		case 12:
		case 13: func_89(uParam0, 3, sVar19, "", Global_67918[iParam1 /*9*/].f_1, 0, iVar18, 0); break;

		default: break;
		}
	}
	return false;
}

// Position - 0xC0D5
char *func_82(int iParam0) {
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

// Position - 0xD286
void func_83(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = MissionObjectives[iParam1 /*13*/].f_4;
	if (iVar0 == 0) {
		return;
	}
	MissionObjectives[iParam1 /*13*/].f_1 = iParam0;
	iVar1 = iParam0 + 1;
	stats::stat_set_int(iVar0, iVar1, 1);
	if (func_94(0) && Global_55814) {
		gameplay::_0x69FE6DC87BD2A5E9(iVar0);
		gameplay::_0x69FE6DC87BD2A5E9(iParam0);
		gameplay::_0x69FE6DC87BD2A5E9(iParam1);
	}
}

// Position - 0xD2DF
int func_84(int iParam0) {
	int iVar0;

	if (iParam0 == 0) {
		return -1;
	}
	if (stats::stat_get_int(iParam0, &iVar0, -1)) {
		return iVar0 - 1;
	}
	return -1;
}

// Position - 0xD308
bool func_85(int iParam0) { return gameplay::is_bit_set(Global_101700.f_1.f_118, iParam0); }

// Position - 0xD31E
int func_86(int iParam0) {
	if (iParam0 == 13 || iParam0 == -1) {
		return 0;
	}
	return Global_101700.f_8044.f_99.f_205[iParam0];
}

// Position - 0xD34B
int func_87(int iParam0) {
	int iVar0;

	switch (iParam0) {
	case 0: iVar0 = 7; break;

	case 1: iVar0 = 8; break;

	case 2: iVar0 = 9; break;

	case 3: iVar0 = 10; break;

	case 4: iVar0 = 11; break;
	}
	return iVar0;
}

// Position - 0xD39C
char *func_88(int iParam0) {
	switch (iParam0) {
	case 1: return "JCSLMVANR";

	case 2: return "JCHMDRAZ";

	case 3: return "HSTAGNCUT";

	case 4: return "UNSELLWEAP";

	case 0: return "HSTECUT";

	case 5: return "HSTSLWLD";

	case 6: return "HSTCASECUT";

	default:
	}
	return "UNSET_HEISTPENALTY";
}

// Position - 0xD40A
void func_89(var *uParam0, int iParam1, char *sParam2, char *sParam3, int iParam4, int iParam5, int iParam6,
			 int iParam7) {
	int iVar0;

	if (uParam0->f_56 == 13) {
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&uParam0->f_71[iVar0 /*16*/], sParam2, 64);
	StringCopy(&uParam0->f_280[iVar0 /*16*/], sParam3, 64);
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

// Position - 0xD47D
void func_90(var *uParam0, char *sParam1, char *sParam2, int iParam3) {
	StringCopy(&uParam0->f_5, sParam1, 16);
	StringCopy(&uParam0->f_13, sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

// Position - 0xD4A0
void func_91(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	if (Global_88044.f_3) {
		return;
	}
	switch (iParam0) {
	case 4:
		Global_101700.f_1.f_126[iParam0 /*23*/].f_1 = 201600000;
		Global_101700.f_1.f_126[iParam0 /*23*/] = 201600000;
		break;

	case 3:
		Global_101700.f_1.f_126[iParam0 /*23*/].f_1 = 331985;
		Global_101700.f_1.f_126[iParam0 /*23*/] = 331985;
		break;

	case 1:
		Global_101700.f_1.f_126[iParam0 /*23*/] = 20000000;
		Global_101700.f_1.f_126[iParam0 /*23*/].f_1 = 20000000;
		break;
	}
	iVar0 = func_86(func_68(iParam0));
	iVar1 = Global_101700.f_1.f_126[iParam0 /*23*/].f_1;
	switch (iParam0) {
	case 0: func_93(iParam0, 2, 2500000); break;

	case 1: func_93(iParam0, 4, 20000000); break;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5) {
		Global_101700.f_1.f_126[iParam0 /*23*/].f_17[iVar2] = 0;
		iVar2++;
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar2 = 0;
	while (iVar2 < Global_88054[iParam0 /*38*/].f_37) {
		if (Global_88054[iParam0 /*38*/].f_31[iVar2] > 0) {
			iVar3 += Global_88054[iParam0 /*38*/].f_31[iVar2];
			Global_101700.f_1.f_126[iParam0 /*23*/].f_1 -= Global_88054[iParam0 /*38*/].f_31[iVar2];
		}
		iVar2++;
	}
	iVar1 -= iVar3;
	if (iParam0 == 2) {
		iVar4 = system::floor(system::to_float(Global_101700.f_1.f_126[iParam0 /*23*/].f_1) * 0.78f);
		func_93(iParam0, 3, iVar4);
		Global_101700.f_1.f_126[iParam0 /*23*/].f_1 -= iVar4;
		iVar1 -= iVar4;
	}
	iVar2 = 0;
	while (iVar2 < 5) {
		iVar5 = Global_101700.f_1.f_12[iVar0 /*6*/][iVar2];
		switch (Global_101700.f_1.f_126[iParam0 /*23*/].f_11[iVar2]) {
		case 1:
		case 2:
		case 0:
			Global_101700.f_1.f_126[iParam0 /*23*/].f_17[iVar2] =
				system::ceil(system::to_float(Global_87699[iVar5 /*5*/].f_1) * 0.01f *
							 IntToFloat(Global_101700.f_1.f_126[iParam0 /*23*/].f_1));
			break;

		case 3:
			Global_101700.f_1.f_126[iParam0 /*23*/].f_17[iVar2] =
				system::ceil(system::to_float(Global_87699[iVar5 /*5*/].f_1) * 0.015f *
							 IntToFloat(Global_101700.f_1.f_126[iParam0 /*23*/].f_1));
			break;
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_87853[iVar0 /*19*/]) {
		iVar1 -= Global_101700.f_1.f_126[iParam0 /*23*/].f_17[iVar2];
		iVar2++;
	}
	Global_101700.f_1.f_126[0 /*23*/].f_2[0] = 0;
	Global_101700.f_1.f_126[0 /*23*/].f_2[1] = 0;
	Global_101700.f_1.f_126[0 /*23*/].f_2[2] = 0;
	Global_88044.f_7 = 0;
	switch (iParam0) {
	case 0:
		Global_101700.f_1.f_126[0 /*23*/].f_6[0] = 0f;
		Global_101700.f_1.f_126[0 /*23*/].f_6[1] = 0f;
		Global_101700.f_1.f_126[0 /*23*/].f_6[2] = -1f;
		Global_101700.f_1.f_126[0 /*23*/].f_2[1] =
			system::ceil(0.12f * IntToFloat(Global_101700.f_1.f_126[iParam0 /*23*/].f_1));
		iVar1 -= Global_101700.f_1.f_126[0 /*23*/].f_2[1];
		Global_88044.f_7 = system::ceil(0.14f * IntToFloat(Global_101700.f_1.f_126[iParam0 /*23*/].f_1));
		iVar1 -= Global_88044.f_7;
		Global_88044.f_6 = 14f;
		Global_101700.f_1.f_126[0 /*23*/].f_2[0] = iVar1;
		break;

	case 1:
		Global_101700.f_1.f_126[1 /*23*/].f_6[0] = 0f;
		Global_101700.f_1.f_126[1 /*23*/].f_6[1] = 0f;
		Global_101700.f_1.f_126[1 /*23*/].f_6[2] = 0f;
		Global_101700.f_1.f_126[1 /*23*/].f_2[0] = 0;
		Global_101700.f_1.f_126[1 /*23*/].f_2[1] = 0;
		Global_101700.f_1.f_126[1 /*23*/].f_2[2] = 0;
		Global_88044.f_6 = -1f;
		break;

	case 2:
		Global_101700.f_1.f_126[2 /*23*/].f_6[0] = 0f;
		Global_101700.f_1.f_126[2 /*23*/].f_6[1] = 0f;
		Global_101700.f_1.f_126[2 /*23*/].f_6[2] = 0f;
		Global_88044.f_7 = system::ceil(0.12f * IntToFloat(Global_101700.f_1.f_126[iParam0 /*23*/].f_1));
		iVar1 -= Global_88044.f_7;
		Global_88044.f_6 = 12f;
		Global_101700.f_1.f_126[2 /*23*/].f_2[0] = iVar1 / 3;
		Global_101700.f_1.f_126[2 /*23*/].f_2[1] = iVar1 / 3;
		Global_101700.f_1.f_126[2 /*23*/].f_2[2] = iVar1 / 3;
		Global_88044.f_6 = 0f;
		break;

	case 3:
		Global_101700.f_1.f_126[3 /*23*/].f_6[0] = -1f;
		Global_101700.f_1.f_126[3 /*23*/].f_6[1] = 0f;
		Global_101700.f_1.f_126[3 /*23*/].f_6[2] = 0f;
		Global_88044.f_7 = system::ceil(0.12f * IntToFloat(Global_101700.f_1.f_126[iParam0 /*23*/].f_1));
		iVar1 -= Global_88044.f_7;
		Global_88044.f_6 = 12f;
		Global_101700.f_1.f_126[3 /*23*/].f_2[1] = iVar1;
		break;

	case 4:
		Global_101700.f_1.f_126[4 /*23*/].f_6[0] = 0f;
		Global_101700.f_1.f_126[4 /*23*/].f_6[1] = 0f;
		Global_101700.f_1.f_126[4 /*23*/].f_6[2] = 0f;
		Global_88044.f_7 = system::ceil(0.12f * IntToFloat(Global_101700.f_1.f_126[iParam0 /*23*/].f_1));
		iVar1 -= Global_88044.f_7;
		Global_88044.f_6 = 12f;
		Global_101700.f_1.f_126[4 /*23*/].f_2[0] = iVar1 / 3;
		Global_101700.f_1.f_126[4 /*23*/].f_2[1] = iVar1 / 3;
		Global_101700.f_1.f_126[4 /*23*/].f_2[2] = iVar1 / 3;
		Global_88044.f_6 = 0f;
		break;
	}
	iVar6 = Global_101700.f_1.f_126[iParam0 /*23*/].f_1;
	if (Global_101700.f_1.f_126[iParam0 /*23*/].f_6[0] != -1f) {
		Global_101700.f_1.f_126[iParam0 /*23*/].f_6[0] =
			system::to_float(Global_101700.f_1.f_126[iParam0 /*23*/].f_2[0]) / system::to_float(iVar6) * 100f;
	}
	if (Global_101700.f_1.f_126[iParam0 /*23*/].f_6[1] != -1f) {
		Global_101700.f_1.f_126[iParam0 /*23*/].f_6[1] =
			system::to_float(Global_101700.f_1.f_126[iParam0 /*23*/].f_2[1]) / system::to_float(iVar6) * 100f;
	}
	if (Global_101700.f_1.f_126[iParam0 /*23*/].f_6[2] != -1f) {
		Global_101700.f_1.f_126[iParam0 /*23*/].f_6[2] =
			system::to_float(Global_101700.f_1.f_126[iParam0 /*23*/].f_2[2]) / system::to_float(iVar6) * 100f;
	}
	if (Global_88044.f_6 != -1f) {
		Global_88044.f_6 = system::to_float(Global_88044.f_7) / system::to_float(iVar6) * 100f;
	}
	switch (iParam0) {
	case 0: stats::stat_set_int(joaat("jewel_heist_raw_take"), Global_101700.f_1.f_126[iParam0 /*23*/], 1); break;
	}
	iVar7 = 0;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 3) {
		iVar7 += Global_101700.f_1.f_126[iParam0 /*23*/].f_2[iVar8];
		iVar8++;
	}
	switch (iParam0) {
	case 0:
		func_92(810, Global_101700.f_1.f_126[iParam0 /*23*/].f_1, 1);
		func_92(811, iVar7, 1);
		break;

	case 1:
		switch (func_86(8)) {
		case 3:
			func_92(610, Global_101700.f_1.f_126[iParam0 /*23*/].f_1, 1);
			func_92(611, iVar7, 1);
			break;

		case 4:
			func_92(622, Global_101700.f_1.f_126[iParam0 /*23*/].f_1, 1);
			func_92(623, iVar7, 1);
			break;
		}
		break;

	case 2:
		func_92(734, Global_101700.f_1.f_126[iParam0 /*23*/].f_1, 1);
		func_92(735, iVar7, 1);
		break;

	case 3:
		switch (func_86(10)) {
		case 6: break;

		case 7: break;
		}
		break;

	case 4:
		switch (func_86(11)) {
		case 8:
			func_92(664, Global_101700.f_1.f_126[iParam0 /*23*/].f_1, 1);
			func_92(671, iVar7, 1);
			break;

		case 9:
			func_92(674, Global_101700.f_1.f_126[iParam0 /*23*/].f_1, 1);
			func_92(682, iVar7, 1);
			break;
		}
		break;
	}
	Global_88044.f_3 = 1;
	Global_55822 = 0;
}

// Position - 0xDDA1
void func_92(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67917) {
		if (Global_67918[iVar0 /*9*/] == iParam0) {
			if (iParam2) {
				Global_67918[iVar0 /*9*/].f_1 = iParam1;
			}
			else {
				Global_67918[iVar0 /*9*/].f_1 += iParam1;
			}
			return;
		}
		iVar0++;
	}
	if (Global_67918[iVar0 /*9*/] != -1) {
		if (MissionObjectives[Global_67918[iVar0 /*9*/] /*13*/] == 3) {
			if (Global_67918[iVar0 /*9*/].f_1 > 1) {
				Global_67918[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_67918[iVar0 /*9*/].f_1 < 0) {
				Global_67918[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

// Position - 0xDE4B
void func_93(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (iParam2 == 0) {
		return;
	}
	iVar0 = iParam2;
	if (iVar0 < 0) {
		iVar0 *= -1;
	}
	bVar1 = false;
	if (Global_88054[iParam0 /*38*/].f_37 == 5) {
		bVar1 = true;
	}
	iVar2 = Global_88054[iParam0 /*38*/].f_37;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2) {
		if (Global_88054[iParam0 /*38*/].f_25[iVar3] == iParam1) {
			Global_88054[iParam0 /*38*/].f_25[iVar3] = iParam1;
			Global_88054[iParam0 /*38*/].f_31[iVar3] = iVar0;
			return;
		}
		iVar3++;
	}
	if (bVar1) {
		return;
	}
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 0: stats::stat_set_int(joaat("hcs_penalty_jewel_drop_money"), iParam2, 1); break;

		case 2: stats::stat_set_int(joaat("hcs_penalty_paleto_drop_money"), iParam2, 1); break;

		case 4: stats::stat_set_int(joaat("hcs_penalty_bigs_drop_money"), iParam2, 1); break;
		}
		break;

	case 1: stats::stat_set_int(joaat("hcs_penalty_jewel_drop_money"), iParam2, 1); break;

	case 2: stats::stat_set_int(joaat("hcs_penalty_jewel_madr_house"), iParam2, 1); break;

	case 4: stats::stat_set_int(joaat("hcs_penalty_docks_unsell_wpn"), iParam2, 1); break;

	case 3: stats::stat_set_int(joaat("hcs_penalty_paleto_agent_cut"), iParam2, 1); break;

	case 5: stats::stat_set_int(joaat("hcs_penalty_bigs_slow_loading"), iParam2, 1); break;

	case 6: stats::stat_set_int(joaat("hcs_penalty_bigs_hostage_gift"), iParam2, 1); break;
	}
	Global_88054[iParam0 /*38*/].f_25[Global_88054[iParam0 /*38*/].f_37] = iParam1;
	Global_88054[iParam0 /*38*/].f_31[Global_88054[iParam0 /*38*/].f_37] = iVar0;
	Global_88054[iParam0 /*38*/].f_37++;
}

// Position - 0xE003
bool func_94(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0xE02E
void func_95() {
	int iVar0;
	int iVar1;

	if (Global_67917 > 16) {
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67917) {
		if (Global_67918[iVar0 /*9*/].f_1 == 0) {
			if (Global_67918[iVar0 /*9*/].f_2 != 0f) {
				Global_67918[iVar0 /*9*/].f_1 = system::floor(Global_67918[iVar0 /*9*/].f_2);
			}
		}
		iVar1 = Global_67918[iVar0 /*9*/];
		if (iVar1 > 0) {
			if (MissionObjectives[iVar1 /*13*/] == 9) {
				Global_67918[iVar0 /*9*/].f_1 = system::round(fLocal_629);
			}
			if (MissionObjectives[iVar1 /*13*/] == 15) {
				Global_67918[iVar0 /*9*/].f_1 = iLocal_630;
			}
		}
		iVar0++;
	}
}

// Position - 0xE0D5
void func_96() {
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (Global_55841) {
		return;
	}
	Global_55841 = 1;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = func_7(joaat("sp0_shots")) - Global_55845;
	iVar1 = func_7(joaat("sp0_hits")) - Global_55844;
	iVar0 += func_7(joaat("sp1_shots")) - Global_55847;
	iVar1 += func_7(joaat("sp1_hits")) - Global_55846;
	iVar0 += func_7(joaat("sp2_shots")) - Global_55849;
	iVar1 += func_7(joaat("sp2_hits")) - Global_55848;
	system::wait(0);
	fVar2 = 100f;
	if (iVar0 != 0) {
		fVar3 = system::to_float(iVar0);
		fVar4 = system::to_float(iVar1);
		fVar2 = system::to_float(system::floor(fVar4 / fVar3 * 100f));
		if (fVar2 > 100f) {
			fVar2 = 100f;
		}
	}
	fLocal_629 = fVar2;
	iLocal_630 = iVar0;
}

// Position - 0xE1AB
void func_97(var *uParam0) {
	func_63(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

// Position - 0xE1D5
bool func_98() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return false;
}

// Position - 0xE1F1
void func_99() {
	int iVar0;

	if (Global_25435 == 0 && !Global_25439) {
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67917) {
		Global_67918[iVar0 /*9*/].f_3 = 4;
		iVar0++;
	}
}

// Position - 0xE230
void func_100() {
	bool bVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	int iVar4;

	func_101();
	if (Global_55828 && player::is_player_playing(player::get_player_index()) && !cutscene::is_cutscene_active() &&
		!ui::is_pause_menu_active()) {
		Global_55828 = 0;
	}
	if (Global_55821) {
		Global_55821 = 0;
		iLocal_621 = 0;
	}
	bVar0 = true;
	bVar1 = true;
	if (ui::is_pause_menu_active()) {
		bVar0 = false;
	}
	if (!cutscene::has_cutscene_finished()) {
		bVar0 = false;
		bVar1 = false;
	}
	if (Global_55828) {
		bVar0 = false;
		bVar1 = false;
	}
	if (!player::is_player_control_on(player::get_player_index())) {
		bVar0 = false;
		bVar1 = false;
	}
	if (bVar0) {
		iLocal_621 = system::round(gameplay::get_frame_time() * 1000f);
	}
	iVar2 = 0;
	fVar3 = 0f;
	iVar2 = 0;
	while (iVar2 < Global_67917) {
		if (Global_67918[iVar2 /*9*/] >= 0) {
			iVar4 = MissionObjectives[Global_67918[iVar2 /*9*/] /*13*/];
			switch (iVar4) {
			case 6:
				if (Global_67918[iVar2 /*9*/].f_6 != 0) {
					if (Global_67918[iVar2 /*9*/].f_7 == 1) {
						Global_67918[iVar2 /*9*/].f_8 = 0;
						Global_67918[iVar2 /*9*/].f_1 = 0;
						Global_67918[iVar2 /*9*/].f_7 = 0;
					}
					else if (entity::does_entity_exist(Global_67918[iVar2 /*9*/].f_6)) {
						if (!entity::is_entity_dead(Global_67918[iVar2 /*9*/].f_6, 0)) {
							iLocal_625 = Global_67918[iVar2 /*9*/].f_8;
							iLocal_624 = entity::get_entity_health(Global_67918[iVar2 /*9*/].f_6);
							iLocal_626 = iLocal_625 - iLocal_624;
							if (iLocal_626 > 0) {
								Global_67918[iVar2 /*9*/].f_1 += iLocal_626;
								if (Global_67918[iVar2 /*9*/].f_1 < 0) {
									Global_67918[iVar2 /*9*/].f_1 *= -1;
								}
							}
							Global_67918[iVar2 /*9*/].f_8 = iLocal_624;
						}
					}
					else {
						Global_67918[iVar2 /*9*/].f_6 = 0;
					}
				}
				break;

			case 1: Global_67918[iVar2 /*9*/].f_1 += iLocal_621; break;

			case 2:
				if (Global_55829) {
					Global_67918[iVar2 /*9*/].f_1 += iLocal_621;
				}
				break;

			case 3: break;

			case 4:
				if (Global_55830) {
					if (Global_55832 == -1 || Global_67918[iVar2 /*9*/] == Global_55832) {
						if (Global_67918[iVar2 /*9*/] == 339 || Global_67918[iVar2 /*9*/] == 179 ||
							Global_67918[iVar2 /*9*/] == 342 || Global_67918[iVar2 /*9*/] == 234) {
							Global_67918[iVar2 /*9*/].f_1 += system::round(gameplay::get_frame_time() * 1000f);
						}
						else {
							Global_67918[iVar2 /*9*/].f_1 += iLocal_621;
						}
					}
				}
				break;

			case 5:
				if (bVar1) {
					if (Global_55834 == -1 || Global_55834 == Global_67918[iVar2 /*9*/]) {
						if (Global_55833 != 0) {
							if (entity::does_entity_exist(Global_55833)) {
								if (!entity::is_entity_dead(Global_55833, 0)) {
									if (entity::is_entity_a_vehicle(Global_55833)) {
										fVar3 = entity::get_entity_speed(Global_55833);
										if (fVar3 > Global_67918[iVar2 /*9*/].f_2) {
											Global_67918[iVar2 /*9*/].f_2 = fVar3;
										}
									}
								}
							}
						}
					}
				}
				break;

			case 7: break;

			case 8: break;

			case 9: break;

			case 13: break;

			case 12: break;

			case 10:
			case 11:
			case 14: break;

			case 16: break;

			case 17:
				if (func_49(func_57())) {
					if (player::is_special_ability_active(player::get_player_index()) &&
						player::is_special_ability_enabled(player::get_player_index())) {
						Global_67918[iVar2 /*9*/].f_1 += iLocal_621;
					}
				}
				break;

			case 15: break;

			default: break;
			}
		}
		iVar2++;
	}
}

// Position - 0xE609
void func_101() {
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
	int iVar15;

	if (Global_68113 == 0 && Global_68103 == 0 && Global_55981 == 0 && Global_55851 == 0 && !Global_68069) {
		return;
	}
	iVar10 = 0;
	if (Global_55851 > 0) {
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 64) {
			if (Global_55852[iVar0 /*2*/] != 0) {
				if (!entity::does_entity_exist(Global_55852[iVar0 /*2*/])) {
					Global_55852[iVar0 /*2*/] = 0;
					Global_55851--;
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < script::get_number_of_events(0)) {
		iVar3 = script::get_event_at_index(0, iVar0);
		switch (iVar3) {
		case 140:
			script::get_event_data(0, iVar0, &iVar4, 1);
			if (entity::does_entity_exist(iVar4)) {
				entity::is_entity_dead(iVar4, 0);
				if (Global_55981 > 0) {
					iVar7 = entity::get_entity_model(iVar4);
					iVar1 = 0;
					iVar1 = 0;
					while (iVar1 < Global_55981) {
						if (Global_55982[iVar1 /*2*/] == iVar7) {
							iVar10 += Global_55982[iVar1 /*2*/].f_1;
						}
						iVar1++;
					}
				}
				if (entity::is_entity_a_ped(iVar4) &&
					entity::get_ped_index_from_entity_index(iVar4) != player::player_ped_id()) {
					iVar5 = ped::get_ped_source_of_death(entity::get_ped_index_from_entity_index(iVar4));
					iVar14 = 0;
					if (entity::does_entity_exist(iVar5)) {
						if (entity::is_entity_a_vehicle(iVar5)) {
							if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
								iVar15 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
							}
							else {
								iVar15 = player::get_players_last_vehicle();
							}
							if (entity::does_entity_exist(iVar15) &&
								entity::get_vehicle_index_from_entity_index(iVar5) == iVar15) {
								iVar14 = 1;
							}
						}
					}
					if (entity::is_entity_a_ped(iVar5) && player::get_player_ped(player::get_player_index()) ==
															  entity::get_ped_index_from_entity_index(iVar5) ||
						iVar14) {
						if (entity::is_entity_a_ped(iVar5)) {
							iVar6 = ped::get_ped_cause_of_death(entity::get_ped_index_from_entity_index(iVar4));
							if (Global_55851 > 0) {
								iVar11 = func_105(iVar4);
								if (iVar11 != -1) {
									ped::get_ped_last_damage_bone(
										entity::get_ped_index_from_entity_index(Global_55852[iVar11 /*2*/]),
										&iLocal_628);
									if (iLocal_628 == 31086 || iLocal_628 == 39317) {
										if (iVar6 != 0 && iVar6 != joaat("weapon_unarmed")) {
											func_104();
											Global_55852[iVar11 /*2*/] = 0;
											Global_55851--;
										}
									}
								}
							}
							if (Global_68113 > 0) {
								iVar1 = 0;
								iVar1 = 0;
								while (iVar1 < Global_68113) {
									if (Global_68104[iVar1 /*2*/] == iVar6) {
										func_92(Global_68104[iVar1 /*2*/].f_1, 1, 0);
									}
									iVar1++;
								}
							}
						}
						if (Global_68069) {
							iVar12 = entity::get_ped_index_from_entity_index(iVar4);
							iVar13 = ped::get_ped_type(iVar12);
							if (!entity::is_entity_a_mission_entity(iVar4) && iVar13 != 22 && iVar13 != 19 &&
								iVar13 != 17 && iVar13 != 18 && iVar13 != 27 && iVar13 != 29 && iVar13 != 28) {
								iVar9 = ped::get_relationship_between_peds(
									player::get_player_ped(player::get_player_index()),
									entity::get_ped_index_from_entity_index(iVar4));
								switch (iVar9) {
								case 255:
								case 0:
								case 1:
								case 2:
									if (ped::is_ped_human(entity::get_ped_index_from_entity_index(iVar4))) {
										func_103();
									}
									break;

								default: break;
								}
							}
						}
						if (Global_68103 > 0) {
							iVar1 = 0;
							iVar2 = Global_68103;
							iVar8 = 0;
							while (!iVar8) {
								if (Global_68070[iVar1 /*2*/] != 0) {
									if (entity::does_entity_exist(Global_68070[iVar1 /*2*/])) {
										if (entity::is_entity_dead(Global_68070[iVar1 /*2*/], 0)) {
											if (Global_68070[iVar1 /*2*/] == iVar4) {
												func_92(Global_68070[iVar1 /*2*/].f_1, 1, 0);
												Global_68070[iVar1 /*2*/] = 0;
											}
										}
									}
									else {
										Global_68070[iVar1 /*2*/] = 0;
									}
									iVar2--;
								}
								iVar1++;
								if (iVar1 == 16 || iVar2 == 0) {
									iVar8 = 1;
								}
							}
							if (Global_68103 > 0) {
								while (Global_68070[Global_68103 - 1 /*2*/] == 0 && Global_68103 > 1) {
									if (Global_68103 > 1) {
										Global_68103--;
									}
								}
							}
						}
					}
				}
			}
			break;
		}
		iVar0++;
	}
	if (iVar10 > 0) {
		func_102(iVar10);
	}
}

// Position - 0xEA12
void func_102(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67917) {
		iVar1 = Global_67918[iVar0 /*9*/];
		if (MissionObjectives[iVar1 /*13*/] == 13) {
			Global_67918[iVar0 /*9*/].f_1 += iParam0;
		}
		iVar0++;
	}
}

// Position - 0xEA5F
void func_103() {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67917) {
		iVar1 = Global_67918[iVar0 /*9*/];
		if (MissionObjectives[iVar1 /*13*/] == 16) {
			Global_67918[iVar0 /*9*/].f_1++;
		}
		iVar0++;
	}
}

// Position - 0xEAAB
void func_104() {
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_55851 == 0) {
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Global_67917) {
		iVar2 = Global_67918[iVar1 /*9*/];
		if (MissionObjectives[iVar2 /*13*/] == 7) {
			Global_67918[iVar1 /*9*/].f_1++;
			iVar0 = 1;
		}
		iVar1++;
	}
	if (!iVar0) {
	}
}

// Position - 0xEB09
int func_105(int iParam0) {
	int iVar0;

	if (Global_55851 == 0) {
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64) {
		if (Global_55852[iVar0 /*2*/] == iParam0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0xEB44
void func_106() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	var uVar13;

	if (gameplay::_0xD642319C54AADEB6()) {
		if (gameplay::_0x5B1F2E327B6B6FE1() == 33) {
			if (gameplay::_0x2B626A0150E4D449() == 33) {
				iVar0 = gameplay::_0xDC9274A7EF6B2867();
				iVar1 = -1;
				iVar2 = iVar0 - 4;
				if ((iVar0 - 4) % 3 == 0) {
					iVar0 = (iVar0 - 4) / 3;
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < iVar0) {
						iVar4 = gameplay::_0x8098C8D6597AAE18(iVar3 * 3 + 1);
						iVar5 = gameplay::_0x8098C8D6597AAE18(iVar3 * 3 + 2);
						switch (iVar5) {
						case 84:
						case 100:
						case 69:
						case 41:
						case 54: iVar1 = iVar4; break;
						}
						func_83(iVar4, iVar5);
						iVar3++;
					}
					uVar6 = gameplay::_0x8098C8D6597AAE18(iVar2);
					iVar7 = gameplay::_0x8098C8D6597AAE18(iVar2 + 1);
					iVar8 = 0;
					if (gameplay::_0x8098C8D6597AAE18(iVar2 + 2) > 0) {
						iVar8 = 1;
					}
					iVar9 = 0;
					if (gameplay::_0x8098C8D6597AAE18(iVar2 + 3) > 0) {
						iVar9 = 1;
					}
					Global_68067 = iVar9;
					Global_68068 = uVar6;
					if (iVar1 == -1) {
						func_71(system::to_float(iVar7), iVar8);
					}
					else {
						func_71(system::to_float(iVar1), iVar8);
					}
				}
				func_107();
			}
		}
		if (gameplay::_0x5B1F2E327B6B6FE1() == 13) {
			if (gameplay::_0x2B626A0150E4D449() == 37) {
				iVar10 = gameplay::_0xDC9274A7EF6B2867();
				if (iVar10 == 3) {
					iVar11 = gameplay::_0x8098C8D6597AAE18(0);
					uVar12 = gameplay::_0x8098C8D6597AAE18(1);
					uVar13 = gameplay::_0x8098C8D6597AAE18(2);
					Global_101700.f_2084[iVar11 /*2*/] = uVar12;
					Global_101700.f_2084[iVar11 /*2*/].f_1 = uVar13;
					func_107();
				}
			}
		}
	}
}

// Position - 0xECA4
int func_107() {
	if (func_94(0)) {
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

// Position - 0xECEF
void func_108() {
	Global_69962 = 0;
	Global_69963 = 0;
	Global_55822 = 0;
	system::settimera(0);
	system::settimerb(0);
	ui::_0xE1CD1E48E025E661();
	iLocal_621 = 0;
	Global_55818 = 0;
	Global_55832 = -1;
	iLocal_631 = 0;
	Global_55816 = 0;
	Global_55815 = 0;
	iLocal_633 = 0;
	Global_55833 = 0;
	Global_55831 = 0;
	Global_55812 = 0;
	Global_68113 = 0;
	Global_68103 = 0;
	func_4();
	func_3();
	if (iLocal_634) {
		func_1(&Local_45);
		iLocal_634 = 0;
	}
	if (Global_3) {
		script::terminate_this_thread();
	}
	Global_55827 = 0;
	Global_55823 = 0;
}
