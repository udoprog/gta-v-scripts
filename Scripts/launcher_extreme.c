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
var uLocal_28 = 0;
var uLocal_29 = 0;
float fLocal_30 = 0f;
float fLocal_31 = 0f;
float fLocal_32 = 0f;
var uLocal_33 = 0;
var uLocal_34 = 0;
int iLocal_35 = 0;
var uLocal_36 = 0;
struct<4> Local_37[10];
bool bLocal_78 = 0;
var uLocal_79 = 0;
var uLocal_80 = 0;
var uLocal_81 = 0;
int iLocal_82 = 0;
int iLocal_83 = 0;
int iLocal_84 = 0;
int iLocal_85 = 0;
var uLocal_86 = 0;
var uLocal_87 = 0;
var uLocal_88 = 0;
var uLocal_89 = 0;
var uLocal_90 = 0;
int iLocal_91 = 0;
int iLocal_92 = 0;
int iLocal_93 = 0;
int *iLocal_94 = NULL;
int iLocal_95 = 0;
int iLocal_96 = 0;
int iLocal_97 = 0;
int *iLocal_98 = NULL;
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
	struct<42> Var0;
	vector3 vVar61;
	int iVar64[4];
	vector3 vVar69;

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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_82 = 1;
	iLocal_83 = 65;
	iLocal_84 = 49;
	iLocal_85 = 64;
	uLocal_89 = ui::_0x4A9923385BDB9DAD();
	uLocal_90 = ui::_get_blip_info_id_iterator();
	iLocal_92 = func_271(52);
	iLocal_93 = joaat("a_c_retriever");
	iLocal_94 = -1;
	iLocal_96 = audio::get_sound_id();
	gameplay::_0x6F2135B6129620C1(1);
	func_270();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	vVar61 = {0f, 0f, 0f};
	func_269(&Var0);
	vVar61 = {ScriptParam_0.f_1[0 /*3*/]};
	iVar64[0] = 17;
	iVar64[1] = 18;
	iVar64[2] = 19;
	iVar64[3] = 20;
	if (player::has_force_cleanup_occurred(83)) {
		func_268("Force cleanup [TERMINATING]");
		if (Var0 != -1) {
			if (Global_100787[Var0 /*10*/].f_9 != -1) {
				func_268("Relinquishing candidate id...");
				func_267(&Global_100787[Var0 /*10*/].f_9);
			}
		}
		func_255(&Var0, 1);
	}
	if (!func_252(&iVar64, &Var0, vVar61, 1f)) {
		func_251();
		func_268("SCRIPT TERMINATED");
		script::terminate_this_thread();
	}
	if (!func_243(Var0)) {
		func_251();
		func_268("SCRIPT TERMINATED");
		script::terminate_this_thread();
	}
	if (func_242(Var0)) {
		func_251();
		func_268("SCRIPT TERMINATED");
		script::terminate_this_thread();
	}
	while (!func_226(&Var0)) {
		system::wait(0);
		if (!brain::is_world_point_within_brain_activation_range()) {
			func_268("Player out of range [TERMINATING]");
			func_255(&Var0, 1);
		}
	}
	if (Var0 == 17) {
		iLocal_97 =
			ped::add_scenario_blocking_area(vVar61 - Vector(40f, 40f, 40f), vVar61 + Vector(40f, 40f, 40f), 0, 1, 1, 1);
		ai::set_scenario_type_enabled("WORLD_VEHICLE_SALTON_DIRT_BIKE", 0);
	}
	else if (Var0 == 18) {
		iLocal_97 = ped::add_scenario_blocking_area(-1040f, -2870f, 0f, -910f, -2740f, 50f, 0, 0, 1, 1);
	}
	gameplay::clear_area(vVar61, Var0.f_15, 1, 0, 0, 0);
	while (true) {
		system::wait(0);
		if (!func_188(&Var0, 1)) {
			func_255(&Var0, 1);
		}
		func_187(Var0);
		func_180(&iLocal_94, &Var0.f_9, vVar61);
		if (Var0 == 18) {
			func_179(&Var0);
			func_174(&Var0, vVar61, "EXT2AU", "EXT2_AMB", 3, "DOM", 5000, 1101004800);
		}
		else if (Var0 == 19) {
			func_179(&Var0);
			if (audio::has_sound_finished(iLocal_96)) {
				func_174(&Var0, vVar61, "EXT3AUD", "EXT_AMB", 3, "DOM", 8000, 1101004800);
			}
			if (!func_173() && func_172(Var0.f_28[0]) && !audio::is_any_speech_playing(Var0.f_28[0]) &&
				audio::has_sound_finished(iLocal_96) && audio::request_script_audio_bank("EXTREME_04_DOM_A", 0, -1) &&
				audio::request_script_audio_bank("EXTREME_04_DOM_B", 0, -1) &&
				audio::request_script_audio_bank("EXTREME_04_DOM_C", 0, -1)) {
				audio::play_sound_from_entity(iLocal_96, "DOM_BREATHING", Var0.f_28[0], "EXTREME_03_SOUNDSET", 0, 0);
			}
			if (iLocal_95 == 0 && func_172(player::player_ped_id()) &&
				entity::is_entity_at_coord(player::player_ped_id(), vVar61, Var0.f_15, Var0.f_15, Var0.f_15, 0, 0, 0)) {
				vVar69 = {entity::get_entity_coords(player::player_ped_id(), 1)};
				if (vVar69.z < 100f) {
					iLocal_95 = 1;
					func_171("TOPMAZE_HELP", -1);
					func_268("Player below mission start location so "
							 "displaying help text TOPMAZE_HELP");
				}
			}
		}
		if (func_156(&Var0, 0) || func_154(&Var0)) {
			if (func_153(Var0)) {
				func_150(Var0, &iLocal_98);
			}
			if (!func_2(&Var0)) {
				func_255(&Var0, 1);
			}
			else if (Var0 == 19) {
				audio::stop_sound(iLocal_96);
			}
			if (func_1(&Var0)) {
				func_255(&Var0, 0);
			}
		}
	}
}

// Position - 0x3EA
bool func_1(int iParam0) {
	while (!Global_100787[*iParam0 /*10*/]) {
		system::wait(0);
	}
	return true;
}

// Position - 0x408
int func_2(int iParam0) {
	struct<4> Var0;
	char *sVar32;

	if (!func_149()) {
		while (!func_140(*iParam0)) {
			if (func_139(*iParam0)) {
				func_130();
			}
			if (!func_188(iParam0, *iParam0 != 2)) {
				func_268("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() "
						 "[TERMINATING]");
				return 0;
			}
			system::wait(0);
		}
	}
	if (func_173()) {
		func_128();
	}
	if (!func_98(iParam0)) {
		func_268("STEP_7_COMMON_LaunchMission - Trying to launch a null script "
				 "string name");
		return 0;
	}
	func_95(*iParam0, &Var0);
	MemCopy(&sVar32, {func_94(*iParam0)}, 4);
	func_92(&sVar32, Var0.f_3, 0);
	func_91(*iParam0);
	if (!func_149()) {
		if (iParam0->f_16 == 2) {
			func_22(&iParam0->f_1, 0);
		}
		else {
			func_22(&iParam0->f_1, 1);
		}
	}
	func_3(*iParam0, Var0);
	return 1;
}

// Position - 0x4CB
void func_3(int iParam0, char *sParam1) {
	func_21(sParam1);
	gameplay::clear_bit(&Global_101700.f_17533[iParam0 /*6*/], 5);
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("mission_stat_watcher")) > 0) {
		while (script::_get_number_of_instances_of_script_with_name_hash(joaat("mission_stat_watcher")) > 0) {
			func_19();
			system::wait(0);
		}
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("mission_stat_watcher")) < 1) {
		Global_55823 = 0;
		script::request_script("mission_stat_watcher");
		while (!script::has_script_loaded("mission_stat_watcher")) {
			system::wait(0);
		}
		system::start_new_script("mission_stat_watcher", 1828);
		script::set_script_as_no_longer_needed("mission_stat_watcher");
	}
	while (!gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 5)) {
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("mission_stat_watcher")) > 0) {
			gameplay::set_bit(&Global_101700.f_17533[iParam0 /*6*/], 5);
		}
	}
	func_4(iParam0);
}

// Position - 0x58A
void func_4(int iParam0) {
	int iVar0;
	int iVar1;

	if (Global_55820 == 1) {
		func_18();
		Global_55820 = 0;
		if (Global_55815) {
			return;
		}
	}
	if (Global_3) {
		Global_55823 = 1;
		func_10();
		return;
	}
	MemCopy(&Global_55837, {func_9(iParam0)}, 4);
	Global_55825 = 0;
	Global_55824 = 0;
	switch (iParam0) {
	case 1:
	case 9:
		Global_55812 = 1;
		Global_55815 = 1;
		Global_55818 = 1;
		break;

	case 0:
	case 4:
	case 7:
	case 10:
	case 11:
	case 13:
	case 15:
	case 27:
	case 31:
	case 35:
	case 36:
	case 37:
	case 48:
	case 44:
	case 45:
	case 52:
	case 53:
	case 54:
	case 55:
	case 56:
		Global_55823 = 1;
		Global_55824 = 1;
		func_10();
		func_19();
		return;
	}
	iVar0 = Global_68067;
	Global_68067 = 1;
	iVar1 = Global_68068;
	Global_68068 = iParam0;
	if (!Global_55812) {
		if (Global_68068 != iVar1 || Global_67917 == 0 || iVar0 != Global_68067) {
			Global_25439 = 0;
			func_10();
			func_6(iParam0);
		}
		else {
			Global_55815 = 1;
		}
	}
	Global_55850 = gameplay::get_game_timer();
	func_5();
	Global_55822 = 0;
}

// Position - 0x6E4
void func_5() {
	int iVar0;

	if (!Global_55819) {
		return;
	}
	if (Global_67917 == 0) {
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67917) {
		switch (Global_56047[Global_67918[iVar0 /*9*/] /*13*/]) {
		case 1:
		case 9: Global_67918[iVar0 /*9*/].f_3 = 1; break;

		case 4:
			if (Global_55830) {
				Global_67918[iVar0 /*9*/].f_3 = 1;
			}
			break;

		case 6:
			if (Global_56047[Global_67918[iVar0 /*9*/] /*13*/].f_3) {
				if (Global_67918[iVar0 /*9*/].f_1 != 0) {
					Global_67918[iVar0 /*9*/].f_3 = 1;
				}
			}
			break;
		}
		iVar0++;
	}
	Global_55819 = 0;
}

// Position - 0x797
void func_6(int iParam0) {
	switch (iParam0) {
	case 2:
		func_7(741);
		func_7(742);
		return;

	case 3:
		func_7(743);
		func_7(744);
		return;

	case 5:
		func_7(745);
		func_7(746);
		return;

	case 6:
		func_7(747);
		func_7(748);
		return;

	case 8: func_7(749); return;

	case 12: func_7(750); return;

	case 14:
		func_7(751);
		func_7(752);
		return;

	case 16:
		func_7(753);
		func_7(754);
		return;

	case 17:
		func_7(755);
		func_7(756);
		func_7(757);
		return;

	case 18:
		func_7(758);
		func_7(759);
		return;

	case 19:
		func_7(760);
		func_7(761);
		return;

	case 20: func_7(762); return;

	case 21: func_7(763); return;

	case 22:
		func_7(764);
		func_7(765);
		return;

	case 23: func_7(766); return;

	case 25:
		func_7(767);
		func_7(768);
		func_7(769);
		return;

	case 26:
		func_7(770);
		func_7(771);
		return;

	case 28:
		func_7(772);
		func_7(773);
		return;

	case 29:
		func_7(774);
		func_7(775);
		return;

	case 30:
		func_7(776);
		func_7(777);
		return;

	case 32:
		func_7(778);
		func_7(779);
		return;

	case 33:
		func_7(780);
		func_7(781);
		func_7(782);
		return;

	case 34:
		func_7(783);
		func_7(784);
		return;

	case 38:
		func_7(785);
		func_7(786);
		return;

	case 39:
		func_7(787);
		func_7(788);
		return;

	case 40: func_7(789); return;

	case 41:
		func_7(790);
		func_7(791);
		func_7(792);
		return;

	case 42:
		func_7(793);
		func_7(794);
		func_7(795);
		return;

	case 43:
		func_7(796);
		func_7(797);
		return;

	case 46:
		func_7(798);
		func_7(799);
		return;

	default:
	}
	switch (iParam0) {
	case 47:
		func_7(800);
		func_7(801);
		return;

	case 49:
		func_7(802);
		func_7(803);
		return;

	case 50:
		func_7(804);
		func_7(805);
		return;

	case 51: func_7(806); return;

	case 57:
		func_7(807);
		func_7(808);
		func_7(809);
		return;

	case 58:
		func_7(828);
		func_7(829);
		func_7(830);
		return;

	case 59:
		func_7(831);
		func_7(832);
		func_7(833);
		return;

	case 60:
		func_7(834);
		func_7(835);
		func_7(836);
		return;

	case 61:
		func_7(837);
		func_7(838);
		func_7(839);
		return;

	case 62:
		func_7(840);
		func_7(841);
		func_7(842);
		return;

	case 24:
		func_7(843);
		func_7(844);
		func_7(845);
		return;

	default:
	}
}

// Position - 0xB7F
void func_7(int iParam0) {
	Global_55815 = 1;
	Global_55818 = 1;
	if (Global_67917 > 15) {
		return;
	}
	func_8(Global_67917);
	Global_67918[Global_67917 /*9*/] = iParam0;
	Global_67917++;
	if (Global_56047[iParam0 /*13*/] == 16) {
		Global_68069 = 1;
	}
}

// Position - 0xBCA
void func_8(int iParam0) {
	Global_67918[iParam0 /*9*/].f_1 = 0;
	Global_67918[iParam0 /*9*/].f_2 = 0f;
	Global_67918[iParam0 /*9*/].f_3 = 0;
	Global_67918[iParam0 /*9*/].f_4 = 0;
}

// Position - 0xBFE
struct<2> func_9(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = {func_94(iParam0)};
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

//Position - 0xC36
void func_10()
{
	if (Global_55822) {
		return;
	}
	Global_55831 = 0;
	Global_67917 = 0;
	Global_55833 = 0;
	if (Global_55830) {
	}
	Global_55830 = 0;
	func_17(0);
	func_16();
	Global_68069 = 0;
	Global_55821 = 1;
	func_14();
	func_13();
	func_12();
	func_11();
	Global_55812 = 0;
	Global_55842 = 0;
	Global_55850 = -1;
}

// Position - 0xC8C
void func_11() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4) {
		Global_68104[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_68113 = 0;
}

// Position - 0xCB9
void func_12() {
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

// Position - 0xCF0
void func_13() { Global_55981 = 0; }

// Position - 0xCFC
void func_14() {
	Global_55841 = 0;
	Global_55845 = func_15(joaat("sp0_shots"));
	Global_55844 = func_15(joaat("sp0_hits"));
	Global_55847 = func_15(joaat("sp1_shots"));
	Global_55846 = func_15(joaat("sp1_hits"));
	Global_55849 = func_15(joaat("sp2_shots"));
	Global_55848 = func_15(joaat("sp2_hits"));
}

// Position - 0xD50
var func_15(int iParam0) {
	var uVar0;

	stats::stat_get_int(iParam0, &uVar0, -1);
	return uVar0;
}

// Position - 0xD64
void func_16() {
	int iVar0;

	Global_55851 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64) {
		Global_55852[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

// Position - 0xD8E
void func_17(int iParam0) {
	Global_69962 = iParam0;
	Global_69963 = iParam0;
}

// Position - 0xDA2
void func_18() {
	int iVar0;

	Global_55820 = 1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67917) {
		Global_67918[iVar0 /*9*/].f_3 = 2;
		iVar0++;
	}
	if (Global_55830) {
	}
	Global_55830 = 0;
}

// Position - 0xDDB
void func_19() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("mission_stat_watcher")) > 0) {
		if (func_20()) {
			if (Global_55817 && !Global_55816) {
				Global_55817 = 0;
				gameplay::terminate_all_scripts_with_this_name("mission_stat_watcher");
			}
		}
		else {
			gameplay::terminate_all_scripts_with_this_name("mission_stat_watcher");
		}
	}
}

// Position - 0xE1D
bool func_20() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("mission_stat_watcher")) < 1) {
		return false;
	}
	if (!Global_55815) {
		return false;
	}
	return Global_55827;
}

// Position - 0xE47
void func_21(char *sParam0) {
	if (gameplay::are_strings_equal(sParam0, sParam0)) {
	}
}

// Position - 0xE5A
void func_22(char[4] cParam0, int iParam1) {
	gameplay::clear_bit(&Global_91491.f_20, 17);
	func_23(cParam0, iParam1, 0);
}

// Position - 0xE77
void func_23(char[4] cParam0, int iParam1, int iParam2) {
	if (Global_91491 != 10 && Global_91491 != 9) {
		StringCopy(&Global_93627, cParam0, 32);
		func_25(&Global_93635, cParam0, 0, "Start", iParam1, iParam2);
		func_24();
		Global_86002 = 0;
	}
}

// Position - 0xEBC
void func_24() {
	int iVar0;
	int iVar1;

	Global_96040 = Global_93635;
	Global_96040.f_1 = Global_93635.f_1;
	Global_96040.f_6 = Global_93635.f_6;
	Global_96040.f_7 = Global_93635.f_7;
	Global_96040.f_8 = Global_93635.f_8;
	Global_96040.f_2 = Global_93635.f_2;
	Global_96040.f_3 = Global_93635.f_3;
	Global_96040.f_4 = Global_93635.f_4;
	Global_96040.f_5 = Global_93635.f_5;
	iVar1 = 0;
	while (iVar1 < 3) {
		Global_96040.f_9[iVar1] = Global_93635.f_9[iVar1];
		Global_96040.f_13[iVar1] = Global_93635.f_13[iVar1];
		Global_96040.f_17[iVar1] = Global_93635.f_17[iVar1];
		Global_96040.f_21[iVar1] = Global_93635.f_21[iVar1];
		Global_96040.f_25[0 /*295*/][iVar1 /*98*/] = {Global_93635.f_25[0 /*295*/][iVar1 /*98*/]};
		Global_96040.f_25[1 /*295*/][iVar1 /*98*/] = {Global_93635.f_25[1 /*295*/][iVar1 /*98*/]};
		iVar0 = 0;
		while (iVar0 < 12) {
			Global_96040.f_616[iVar1 /*65*/][iVar0] = Global_93635.f_616[iVar1 /*65*/][iVar0];
			Global_96040.f_616[iVar1 /*65*/].f_13[iVar0] = Global_93635.f_616[iVar1 /*65*/].f_13[iVar0];
			Global_96040.f_616[iVar1 /*65*/].f_26[iVar0] = Global_93635.f_616[iVar1 /*65*/].f_26[iVar0];
			iVar0++;
		}
		Global_96040.f_616[iVar1 /*65*/].f_59 = Global_93635.f_616[iVar1 /*65*/].f_59;
		Global_96040.f_616[iVar1 /*65*/].f_60 = Global_93635.f_616[iVar1 /*65*/].f_60;
		Global_96040.f_616[iVar1 /*65*/].f_61 = Global_93635.f_616[iVar1 /*65*/].f_61;
		Global_96040.f_616[iVar1 /*65*/].f_62 = Global_93635.f_616[iVar1 /*65*/].f_62;
		Global_96040.f_616[iVar1 /*65*/].f_63 = Global_93635.f_616[iVar1 /*65*/].f_63;
		Global_96040.f_616[iVar1 /*65*/].f_64 = Global_93635.f_616[iVar1 /*65*/].f_64;
		iVar0 = 0;
		while (iVar0 < 9) {
			Global_96040.f_616[iVar1 /*65*/].f_39[iVar0] = Global_93635.f_616[iVar1 /*65*/].f_39[iVar0];
			Global_96040.f_616[iVar1 /*65*/].f_49[iVar0] = Global_93635.f_616[iVar1 /*65*/].f_49[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44) {
			Global_96040.f_812[iVar1 /*284*/][iVar0 /*3*/] = {Global_93635.f_812[iVar1 /*284*/][iVar0 /*3*/]};
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50) {
			Global_96040.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = {
				Global_93635.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/]};
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4) {
			Global_96040.f_1665[iVar1 /*32*/][iVar0] = Global_93635.f_1665[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10) {
			Global_96040.f_1665[iVar1 /*32*/].f_5[iVar0] = Global_93635.f_1665[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15) {
			Global_96040.f_1665[iVar1 /*32*/].f_16[iVar0] = Global_93635.f_1665[iVar1 /*32*/].f_16[iVar0];
			iVar0++;
		}
		Global_96040.f_1762[iVar1] = Global_93635.f_1762[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3) {
			Global_96040.f_2259[iVar1 /*15*/][iVar0] = Global_93635.f_2259[iVar1 /*15*/][iVar0];
			Global_96040.f_2259[iVar1 /*15*/].f_5[iVar0] = Global_93635.f_2259[iVar1 /*15*/].f_5[iVar0];
			Global_96040.f_2259[iVar1 /*15*/].f_10[iVar0] = Global_93635.f_2259[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2) {
			Global_96040.f_1766[iVar1 /*164*/][iVar0] = Global_93635.f_1766[iVar1 /*164*/][iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_4[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_4[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_8[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_8[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_12[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_12[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_16[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_16[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_20[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_20[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_24[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_24[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_28[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_28[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_32[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_32[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_36[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_36[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_40[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_40[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_44[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_44[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_48[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_48[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_52[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_52[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_56[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_56[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_60[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_60[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_64[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_64[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_68[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_68[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_72[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_72[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_76[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_76[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_80[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_80[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_84[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_84[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_88[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_88[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_92[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_92[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_96[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_96[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_100[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_100[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_104[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_104[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_108[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_108[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_112[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_112[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_116[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_116[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_120[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_120[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_124[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_124[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_128[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_128[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_132[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_132[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_136[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_136[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_140[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_140[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_144[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_144[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_148[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_148[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_152[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_152[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_156[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_156[iVar0];
			Global_96040.f_1766[iVar1 /*164*/].f_160[iVar0] = Global_93635.f_1766[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_96040.f_2305 = {Global_93635.f_2305};
	Global_96040.f_2305.f_3 = Global_93635.f_2305.f_3;
	Global_96040.f_2311 = {Global_93635.f_2311};
	Global_96040.f_2311.f_3 = {Global_93635.f_2311.f_3};
	Global_96040.f_2311.f_6 = Global_93635.f_2311.f_6;
	Global_96040.f_2311.f_8 = Global_96040.f_2311.f_8;
	Global_96040.f_2311.f_7 = Global_93635.f_2311.f_7;
	Global_96040.f_2311.f_9 = Global_93635.f_2311.f_9;
	Global_96040.f_2311.f_11 = Global_93635.f_2311.f_11;
	Global_96040.f_2311.f_10 = Global_93635.f_2311.f_10;
	Global_96040.f_2311.f_12 = Global_93635.f_2311.f_12;
	Global_96040.f_2311.f_12.f_1 = {Global_93635.f_2311.f_12.f_1};
	Global_96040.f_2311.f_12.f_5 = Global_93635.f_2311.f_12.f_5;
	Global_96040.f_2311.f_12.f_6 = Global_93635.f_2311.f_12.f_6;
	Global_96040.f_2311.f_12.f_7 = Global_93635.f_2311.f_12.f_7;
	Global_96040.f_2311.f_12.f_8 = Global_93635.f_2311.f_12.f_8;
	Global_96040.f_2311.f_12.f_9 = {Global_93635.f_2311.f_12.f_9};
	Global_96040.f_2311.f_12.f_59 = {Global_93635.f_2311.f_12.f_59};
	Global_96040.f_2311.f_12.f_62 = Global_93635.f_2311.f_12.f_62;
	Global_96040.f_2311.f_12.f_63 = Global_93635.f_2311.f_12.f_63;
	Global_96040.f_2311.f_12.f_64 = Global_93635.f_2311.f_12.f_64;
	Global_96040.f_2311.f_12.f_65 = Global_93635.f_2311.f_12.f_65;
	Global_96040.f_2311.f_12.f_77 = Global_93635.f_2311.f_12.f_77;
	Global_96040.f_2311.f_12.f_66 = Global_93635.f_2311.f_12.f_66;
	Global_96040.f_2311.f_12.f_67 = Global_93635.f_2311.f_12.f_67;
	Global_96040.f_2311.f_12.f_68 = Global_93635.f_2311.f_12.f_68;
	Global_96040.f_2311.f_12.f_69 = Global_93635.f_2311.f_12.f_69;
	Global_96040.f_2311.f_12.f_71 = Global_93635.f_2311.f_12.f_71;
	Global_96040.f_2311.f_12.f_72 = Global_93635.f_2311.f_12.f_72;
	Global_96040.f_2311.f_12.f_73 = Global_93635.f_2311.f_12.f_73;
	Global_96040.f_2311.f_12.f_74 = Global_93635.f_2311.f_12.f_74;
	Global_96040.f_2311.f_12.f_75 = Global_93635.f_2311.f_12.f_75;
	Global_96040.f_2311.f_12.f_76 = Global_93635.f_2311.f_12.f_76;
	Global_96040.f_2401 = Global_93635.f_2401;
	Global_96040.f_2401.f_1 = Global_93635.f_2401.f_1;
	Global_96040.f_2401.f_2 = Global_93635.f_2401.f_2;
	Global_96040.f_2401.f_3 = Global_93635.f_2401.f_3;
}

// Position - 0x1B50
void func_25(var *uParam0, char *sParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
	int iVar0;
	int iVar1;

	*uParam0 = func_90();
	uParam0->f_1 = func_79();
	gameplay::_get_weather_type_transition(&uParam0->f_6, &uParam0->f_7, &uParam0->f_8);
	if (!ped::is_ped_injured(player::player_ped_id())) {
		func_63(&uParam0->f_2305, 0);
		func_62(player::player_ped_id());
		func_56(player::player_ped_id(), 0);
		weapon::get_current_ped_weapon(player::player_ped_id(), &uParam0->f_2, 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object")) {
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3) {
		uParam0->f_17[iVar1] = Global_101700.f_2095.f_539.f_294[iVar1];
		if (iVar1 == func_53()) {
			func_46(player::player_ped_id(), &uParam0->f_616[iVar1 /*65*/], 1);
		}
		else {
			iVar0 = 0;
			while (iVar0 < 12) {
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_91281[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_91281[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_91281[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_91281[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_91281[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_91281[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_91281[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_91281[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9) {
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_91281[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_91281[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44) {
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = {Global_101700.f_2095.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/]};
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50) {
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = {
				Global_101700.f_2095.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/]};
			iVar0++;
		}
		switch (iVar1) {
		case 0:
			stats::stat_get_int(joaat("sp0_weap_purch_0"), &uParam0->f_1665[iVar1 /*32*/][0], -1);
			stats::stat_get_int(joaat("sp0_weap_purch_1"), &uParam0->f_1665[iVar1 /*32*/][1], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_5[0], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_5[1], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_5[2], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_5[3], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_5[4], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_16[0], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_16[1], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_16[2], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_16[3], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_16[4], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_5"), &uParam0->f_1665[iVar1 /*32*/].f_16[5], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_6"), &uParam0->f_1665[iVar1 /*32*/].f_16[6], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_7"), &uParam0->f_1665[iVar1 /*32*/].f_16[7], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_8"), &uParam0->f_1665[iVar1 /*32*/].f_16[8], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_9"), &uParam0->f_1665[iVar1 /*32*/].f_16[9], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_10"), &uParam0->f_1665[iVar1 /*32*/].f_16[10], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_11"), &uParam0->f_1665[iVar1 /*32*/].f_16[11], -1);
			break;

		case 1:
			stats::stat_get_int(joaat("sp1_weap_purch_0"), &uParam0->f_1665[iVar1 /*32*/][0], -1);
			stats::stat_get_int(joaat("sp1_weap_purch_1"), &uParam0->f_1665[iVar1 /*32*/][1], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_5[0], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_5[1], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_5[2], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_5[3], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_5[4], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_16[0], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_16[1], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_16[2], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_16[3], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_16[4], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_5"), &uParam0->f_1665[iVar1 /*32*/].f_16[5], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_6"), &uParam0->f_1665[iVar1 /*32*/].f_16[6], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_7"), &uParam0->f_1665[iVar1 /*32*/].f_16[7], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_8"), &uParam0->f_1665[iVar1 /*32*/].f_16[8], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_9"), &uParam0->f_1665[iVar1 /*32*/].f_16[9], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_10"), &uParam0->f_1665[iVar1 /*32*/].f_16[10], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_11"), &uParam0->f_1665[iVar1 /*32*/].f_16[11], -1);
			break;

		case 2:
			stats::stat_get_int(joaat("sp2_weap_purch_0"), &uParam0->f_1665[iVar1 /*32*/][0], -1);
			stats::stat_get_int(joaat("sp2_weap_purch_1"), &uParam0->f_1665[iVar1 /*32*/][1], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_5[0], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_5[1], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_5[2], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_5[3], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_5[4], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_16[0], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_16[1], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_16[2], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_16[3], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_16[4], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_5"), &uParam0->f_1665[iVar1 /*32*/].f_16[5], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_6"), &uParam0->f_1665[iVar1 /*32*/].f_16[6], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_7"), &uParam0->f_1665[iVar1 /*32*/].f_16[7], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_8"), &uParam0->f_1665[iVar1 /*32*/].f_16[8], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_9"), &uParam0->f_1665[iVar1 /*32*/].f_16[9], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_10"), &uParam0->f_1665[iVar1 /*32*/].f_16[10], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_11"), &uParam0->f_1665[iVar1 /*32*/].f_16[11], -1);
			break;
		}
		uParam0->f_9[iVar1] = Global_101700.f_19523.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_52996[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = {Global_101700.f_2095.f_539.f_1635[0 /*295*/][iVar1 /*98*/]};
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = {Global_101700.f_2095.f_539.f_1635[1 /*295*/][iVar1 /*98*/]};
		iVar0 = 0;
		while (iVar0 <= 3) {
			uParam0->f_2259[iVar1 /*15*/][iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2) {
			uParam0->f_1766[iVar1 /*164*/][iVar0] = Global_101700.f_2095[iVar1 /*164*/][iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	stats::stat_get_int(joaat("sp0_special_ability"), &uParam0->f_1762[0], -1);
	stats::stat_get_int(joaat("sp1_special_ability"), &uParam0->f_1762[1], -1);
	stats::stat_get_int(joaat("sp2_special_ability"), &uParam0->f_1762[2], -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1) {
		func_27(&uParam0->f_2311, uParam0, iParam5, 1, 1, 0);
	}
	func_26(&uParam0->f_2401);
	sParam3 = sParam3;
	iParam2 = iParam2;
}

// Position - 0x29D8
int func_26(var *uParam0) {
	*uParam0 = Global_87673;
	uParam0->f_1 = Global_87674;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

// Position - 0x29FA
void func_27(var *uParam0, var *uParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;

	if (iParam2 == 0) {
		iParam2 = player::player_ped_id();
	}
	if (entity::does_entity_exist(iParam2)) {
		uParam1->f_5 = func_44(iParam2);
	}
	if (func_41(iParam2, &iVar0, iParam3, iParam5)) {
		func_28(uParam0, uParam1, iVar0, iParam4);
	}
	else if (entity::does_entity_exist(iVar0)) {
		if (!entity::is_entity_dead(iVar0, 0)) {
			if (vehicle::is_vehicle_model(iVar0, joaat("skylift")) &&
				ped::is_ped_in_vehicle(player::player_ped_id(), iVar0, 0)) {
				func_28(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

// Position - 0x2A82
int func_28(var *uParam0, var *uParam1, int iParam2, int iParam3) {
	if (vehicle::is_vehicle_driveable(iParam2, 0)) {
		func_30(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_29(iParam2)) {
			uParam1->f_3 = 1;
		}
		else {
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

// Position - 0x2AC2
bool func_29(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6) {
		if (Global_91491.f_22[iVar0] == iParam0) {
			return true;
		}
		iVar0++;
	}
	return false;
}

// Position - 0x2AF0
void func_30(var *uParam0, int iParam1, int iParam2) {
	func_37(iParam1, &uParam0->f_12);
	uParam0->f_7 = func_33(iParam1, 145, 0);
	uParam0->f_11 = func_32(iParam1);
	if (!uParam0->f_7) {
		if (!uParam0->f_10) {
			uParam0->f_10 = func_31(iParam1);
		}
	}
	if (iParam2 == 1) {
		*uParam0 = {entity::get_entity_coords(iParam1, 1)};
		uParam0->f_6 = entity::get_entity_heading(iParam1);
		uParam0->f_3 = {entity::get_entity_velocity(iParam1)};
		if (entity::is_entity_in_angled_area(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f,
											 6.374244f, 13f, 0, 1, 0)) {
			*uParam0 = {-1160.095f, -1515.407f, 3.1496f};
			uParam0->f_6 = 305.6424f;
		}
		if (Global_69436 == iParam1) {
			uParam0->f_9 = 1;
		}
	}
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		uParam0->f_8 = 1;
	}
	else {
		uParam0->f_8 = 0;
	}
}

// Position - 0x2BCC
int func_31(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68) {
		if (entity::does_entity_exist(Global_68531.f_484[iVar0])) {
			if (iParam0 == Global_68531.f_484[iVar0]) {
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x2C0E
int func_32(int iParam0) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 145;
	}
	if (!vehicle::is_vehicle_driveable(iParam0, 0)) {
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9) {
		if (entity::does_entity_exist(Global_89155[iVar0])) {
			if (Global_89155[iVar0] == iParam0) {
				return Global_89165[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

// Position - 0x2C71
int func_33(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	if (!vehicle::is_vehicle_driveable(iParam0, 0)) {
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9) {
		if (entity::does_entity_exist(Global_89155[iVar0])) {
			if (Global_89155[iVar0] == iParam0) {
				if (iParam1 == 145 || iParam1 == Global_89165[iVar0]) {
					if (iParam2 == 0 || entity::get_entity_model(iParam0) == func_34(iParam1, iParam2)) {
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x2CFF
int func_34(int iParam0, int iParam1) {
	struct<82> Var0;

	if (func_36(iParam0)) {
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_35(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x2D41
void func_35(int iParam0, var *uParam1, int iParam2) {
	int iVar0;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0) {
	case 0:
		iVar0 = joaat("tailgater");
		if (Global_101700.f_8044.f_99.f_58[128] && !Global_101700.f_8044.f_99.f_58[131]) {
			iVar0 = joaat("premier");
		}
		switch (iVar0) {
		case joaat("tailgater"):
			*uParam1 = iVar0;
			uParam1->f_2 = 3f;
			uParam1->f_4 = 0;
			uParam1->f_9 = 1;
			uParam1->f_11[0] = 1;
			StringCopy(&uParam1->f_27, "5MDS003", 16);
			break;

		case joaat("premier"):
			*uParam1 = iVar0;
			uParam1->f_2 = 14.9f;
			uParam1->f_5 = 43;
			uParam1->f_6 = 43;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_9 = 0;
			StringCopy(&uParam1->f_27, "880HS955", 16);
			break;
		}
		break;

	case 2:
		iVar0 = joaat("bodhi2");
		switch (iVar0) {
		case joaat("bodhi2"):
			*uParam1 = iVar0;
			uParam1->f_2 = 14f;
			uParam1->f_5 = 32;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			StringCopy(&uParam1->f_27, "BETTY 32", 16);
			if (Global_101700.f_8044.f_99.f_58[119]) {
				uParam1->f_11[1] = 1;
			}
			break;
		}
		break;

	case 1:
		if (iParam2 == 1) {
			iVar0 = joaat("buffalo2");
		}
		else if (iParam2 == 2) {
			iVar0 = joaat("bagger");
		}
		else if (Global_101700.f_8044.f_99.f_58[118]) {
			iVar0 = joaat("bagger");
		}
		else {
			iVar0 = joaat("buffalo2");
		}
		switch (iVar0) {
		case joaat("bagger"):
			*uParam1 = iVar0;
			uParam1->f_2 = 6f;
			uParam1->f_5 = 53;
			uParam1->f_6 = 0;
			uParam1->f_7 = 59;
			uParam1->f_8 = 156;
			StringCopy(&uParam1->f_27, "FC88", 16);
			break;

		case joaat("buffalo2"):
			*uParam1 = iVar0;
			uParam1->f_2 = 0f;
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_10 = 1;
			StringCopy(&uParam1->f_27, "FC1988", 16);
			uParam1->f_11[0] = 1;
			uParam1->f_11[1] = 1;
			uParam1->f_11[2] = 1;
			uParam1->f_11[3] = 1;
			uParam1->f_11[4] = 1;
			uParam1->f_11[5] = 1;
			uParam1->f_11[6] = 1;
			uParam1->f_11[7] = 1;
			uParam1->f_11[8] = 1;
			break;
		}
		break;

	default: break;
	}
}

// Position - 0x2F9D
bool func_36(int iParam0) { return iParam0 < 3; }

// Position - 0x2FA9
void func_37(int iParam0, var *uParam1) {
	int iVar0;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		func_40(uParam1);
		uParam1->f_66 = entity::get_entity_model(iParam0);
		StringCopy(&uParam1->f_1, vehicle::get_vehicle_number_plate_text(iParam0), 16);
		*uParam1 = vehicle::get_vehicle_number_plate_text_index(iParam0);
		vehicle::get_vehicle_colours(iParam0, &uParam1->f_5, &uParam1->f_6);
		vehicle::get_vehicle_extra_colours(iParam0, &uParam1->f_7, &uParam1->f_8);
		vehicle::get_vehicle_tyre_smoke_color(iParam0, &uParam1->f_62, &uParam1->f_63, &uParam1->f_64);
		uParam1->f_65 = vehicle::get_vehicle_window_tint(iParam0);
		uParam1->f_67 = vehicle::get_vehicle_livery(iParam0);
		uParam1->f_69 = vehicle::get_vehicle_wheel_type(iParam0);
		uParam1->f_70 = vehicle::get_vehicle_door_lock_status(iParam0);
		vehicle::get_vehicle_custom_secondary_colour(iParam0, &uParam1->f_71, &uParam1->f_72, &uParam1->f_73);
		vehicle::_get_vehicle_neon_lights_colour(iParam0, &uParam1->f_74, &uParam1->f_75, &uParam1->f_76);
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 2)) {
			gameplay::set_bit(&uParam1->f_77, 28);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 3)) {
			gameplay::set_bit(&uParam1->f_77, 29);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 0)) {
			gameplay::set_bit(&uParam1->f_77, 30);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 1)) {
			gameplay::set_bit(&uParam1->f_77, 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger")) {
			uParam1->f_65 = 0;
		}
		if (vehicle::is_vehicle_a_convertible(iParam0, 0)) {
			uParam1->f_68 = vehicle::get_convertible_roof_state(iParam0);
		}
		if (vehicle::is_this_model_a_plane(uParam1->f_66)) {
			if (vehicle::_vehicle_has_landing_gear(iParam0)) {
				switch (vehicle::get_landing_gear_state(iParam0)) {
				case 2:
				case 0:
					gameplay::clear_bit(&uParam1->f_77, 23);
					gameplay::set_bit(&uParam1->f_77, 22);
					break;

				case 3:
				case 1:
					gameplay::clear_bit(&uParam1->f_77, 23);
					gameplay::clear_bit(&uParam1->f_77, 22);
					break;

				case 4: gameplay::set_bit(&uParam1->f_77, 23); break;
				}
			}
			else {
				gameplay::set_bit(&uParam1->f_77, 23);
			}
		}
		if (!vehicle::get_vehicle_tyres_can_burst(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 9);
		}
		if (vehicle::is_vehicle_stolen(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 10);
		}
		if (vehicle::get_is_vehicle_primary_colour_custom(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 13);
			vehicle::get_vehicle_custom_primary_colour(iParam0, &uParam1->f_71, &uParam1->f_72, &uParam1->f_73);
		}
		if (vehicle::get_is_vehicle_secondary_colour_custom(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 12);
		}
		func_39(&iParam0, &uParam1->f_9, &uParam1->f_59);
		iVar0 = 0;
		while (iVar0 <= 11) {
			if (vehicle::is_vehicle_extra_turned_on(iParam0, iVar0 + 1)) {
				gameplay::set_bit(&uParam1->f_77, func_38(iVar0 + 1));
			}
			iVar0++;
		}
		if (graphics::_does_vehicle_have_decal(iParam0, 0)) {
			gameplay::set_bit(&uParam1->f_77, 11);
		}
		else {
			gameplay::clear_bit(&uParam1->f_77, 11);
		}
		if (decorator::decor_exist_on(iParam0, "IgnoredByQuickSave") &&
			decorator::decor_get_bool(iParam0, "IgnoredByQuickSave")) {
			gameplay::set_bit(&uParam1->f_77, 27);
		}
		else {
			gameplay::clear_bit(&uParam1->f_77, 27);
		}
	}
}

// Position - 0x3255
int func_38(int iParam0) {
	switch (iParam0) {
	case 1: return 0;

	case 2: return 1;

	case 3: return 2;

	case 4: return 3;

	case 5: return 4;

	case 6: return 5;

	case 7: return 6;

	case 8: return 7;

	case 9: return 8;

	case 10: return 24;

	case 11: return 25;

	case 12: return 26;
	}
	return 0;
}

// Position - 0x3305
int func_39(int iParam0, var *uParam1, var *uParam2) {
	int iVar0;
	int iVar1;

	if (!vehicle::is_vehicle_driveable(*iParam0, 0)) {
		return 0;
	}
	if (vehicle::get_num_mod_kits(*iParam0) == 0) {
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1) {
		iVar1 = iVar0;
		if (iVar1 == 17 || iVar1 == 18 || iVar1 == 19 || iVar1 == 20 || iVar1 == 21 || iVar1 == 22) {
			(*uParam1)[iVar0] = 0;
			if (vehicle::is_toggle_mod_on(*iParam0, iVar1)) {
				(*uParam1)[iVar0] = 1;
			}
		}
		else {
			(*uParam1)[iVar0] = vehicle::get_vehicle_mod(*iParam0, iVar0) + 1;
			if (iVar0 == 23) {
				(*uParam2)[0] = vehicle::get_vehicle_mod_variation(*iParam0, iVar0);
			}
			else if (iVar0 == 24) {
				(*uParam2)[1] = vehicle::get_vehicle_mod_variation(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

// Position - 0x33DF
void func_40(var *uParam0) {
	int iVar0;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&uParam0->f_1, "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49) {
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2) {
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

// Position - 0x3490
bool func_41(int iParam0, var *uParam1, int iParam2, int iParam3) {
	char *sVar0;

	if (entity::does_entity_exist(iParam0)) {
		if (!ped::is_ped_injured(iParam0)) {
			if (iParam0 == player::player_ped_id()) {
				*uParam1 = player::get_players_last_vehicle();
			}
			else {
				*uParam1 = ped::get_vehicle_ped_is_in(iParam0, 1);
			}
			if (entity::does_entity_exist(*uParam1)) {
				if (vehicle::is_vehicle_driveable(*uParam1, 0)) {
					if (iParam2 == 0 ||
						gameplay::get_distance_between_coords(entity::get_entity_coords(*uParam1, 1),
															  entity::get_entity_coords(iParam0, 1), 1) < 100f) {
						if (vehicle::is_vehicle_model(*uParam1, joaat("taxi"))) {
							if (vehicle::get_ped_in_vehicle_seat(*uParam1, -1, 0) != iParam0 &&
								vehicle::get_ped_in_vehicle_seat(*uParam1, -1, 0) != 0) {
								return false;
							}
						}
						if (func_42(*uParam1, func_90(), 1)) {
							sVar0 = script::get_this_script_name();
							if (!gameplay::are_strings_equal(sVar0, "save_anywhere")) {
								return false;
							}
							else if (!ped::is_ped_in_any_vehicle(iParam0, 1)) {
								return false;
							}
						}
						if (iParam3 == 1) {
							if (decorator::decor_exist_on(*uParam1, "IgnoredByQuickSave")) {
								if (decorator::decor_get_bool(*uParam1, "IgnoredByQuickSave")) {
									return false;
								}
							}
						}
						else if (vehicle::is_vehicle_model(*uParam1, joaat("blimp"))) {
							return false;
						}
						return true;
					}
				}
			}
		}
	}
	return false;
}

// Position - 0x35BF
bool func_42(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	char *sVar1;
	int iVar9;

	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0)) {
		return false;
	}
	iVar0 = 0;
	while (func_43(iParam1, iVar0, &sVar1, &iVar9)) {
		if (!iParam2 || gameplay::is_bit_set(Global_101700.f_6188[iVar9], 0)) {
			if (vehicle::is_vehicle_in_garage_area(&sVar1, iParam0)) {
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0x3630
bool func_43(int iParam0, int iParam1, char *sParam2, int *iParam3) {
	StringCopy(sParam2, "", 32);
	switch (iParam0) {
	case 0:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Michael - Beverly Hills", 32);
			*iParam3 = 0;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Trevor - Countryside", 32);
			*iParam3 = 1;
			return true;
		}
		break;

	case 1:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Franklin - Aunt", 32);
			*iParam3 = 5;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Franklin - Hills", 32);
			*iParam3 = 6;
			return true;
		}
		break;

	case 2:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Trevor - Countryside", 32);
			*iParam3 = 2;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Trevor - City", 32);
			*iParam3 = 3;
			return true;
		}
		else if (iParam1 == 2) {
			StringCopy(sParam2, "Trevor - Stripclub", 32);
			*iParam3 = 4;
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x3709
int func_44(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_45(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x3746
int func_45(int iParam0) {
	if (func_36(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x3770
void func_46(int iParam0, var *uParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = func_44(iParam0);
		iVar1 = 0;
		while (iVar1 < 12) {
			func_52(iParam0, iVar1, &uParam1->f_13[iVar1], &(*uParam1)[iVar1], &uParam1->f_26[iVar1], iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9) {
			func_51(iParam0, iVar1, &uParam1->f_39[iVar1], &uParam1->f_49[iVar1], iParam2, 145);
			iVar1++;
		}
		if (func_36(iVar0)) {
			uParam1->f_59 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_64;
		}
		else if (network::network_is_game_in_progress() &&
				 entity::get_entity_model(iParam0) == entity::get_entity_model(player::player_ped_id())) {
			if (func_50(161, -1)) {
				uParam1->f_59 = func_47(2045, Global_69521, 0);
			}
			else {
				uParam1->f_59 = func_47(747, Global_69521, 0);
			}
			uParam1->f_60 = func_47(748, Global_69521, 0);
			uParam1->f_61 = func_47(749, Global_69521, 0);
		}
		if (network::network_is_game_in_progress() && iParam0 == player::player_ped_id()) {
			if (func_50(161, -1)) {
				uParam1->f_59 = func_47(2045, Global_69521, 0);
			}
			else {
				uParam1->f_59 = func_47(747, Global_69521, 0);
			}
		}
	}
}

// Position - 0x391A
int func_47(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_48(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x394C
int func_48(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_49();
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

// Position - 0x3980
var func_49() { return Global_1312735; }

// Position - 0x398C
bool func_50(int iParam0, int iParam1) {
	int iVar0;
	var uVar1;

	iVar0 = Global_2522581[iParam0 /*3*/][func_48(iParam1)];
	if (stats::stat_get_bool(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return false;
}

// Position - 0x39B8
void func_51(int iParam0, int iParam1, int *iParam2, int *iParam3, int iParam4, int iParam5) {
	int iVar0;

	iVar0 = func_44(iParam0);
	if (iParam0 != 0) {
		*iParam2 = ped::get_ped_prop_index(iParam0, iParam1);
		*iParam3 = ped::get_ped_prop_texture_index(iParam0, iParam1);
	}
	else {
		iVar0 = iParam5;
	}
	if (iParam4 == 0) {
		return;
	}
	if (iParam1 == 0) {
		if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
			if (iParam0 != 0) {
				if (ped::is_ped_wearing_helmet(iParam0) && ped::_0x451294E859ECC018(iParam0) != -1) {
					*iParam2 = ped::_0x451294E859ECC018(iParam0);
					*iParam3 = ped::_0x9D728C1E12BF5518(iParam0);
				}
			}
		}
	}
	switch (iVar0) {
	case 0:
		if (iParam1 == 0) {
			if (*iParam2 == 7) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 11) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 21) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 16) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 23) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 27) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 28) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 >= 14 && *iParam2 <= 20) {
				if ((iParam4 & 2) != 0 || (iParam4 & 4) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
		}
		else if (iParam1 == 1) {
			if (*iParam2 == 1) {
				if ((iParam4 & 2) != 0 || (iParam4 & 64) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
		}
		break;

	case 1:
		if (iParam1 == 0) {
			if (*iParam2 == 2) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 4) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 16) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 6) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 17) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 20) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 21) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 >= 8 && *iParam2 <= 14) {
				if ((iParam4 & 2) != 0 || (iParam4 & 4) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
		}
		break;

	case 2:
		if (iParam1 == 0) {
			if (*iParam2 == 9) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 11) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 12) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 21) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 23) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 27) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 >= 14 && *iParam2 <= 20 || *iParam2 == 2) {
				if ((iParam4 & 2) != 0 || (iParam4 & 4) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
		}
		break;
	}
}

// Position - 0x3F00
void func_52(int iParam0, int iParam1, int *iParam2, int *iParam3, var *uParam4, int iParam5, int iParam6) {
	int iVar0;

	iVar0 = func_44(iParam0);
	if (iParam0 != 0) {
		*iParam2 = ped::get_ped_drawable_variation(iParam0, iParam1);
		*iParam3 = ped::get_ped_texture_variation(iParam0, iParam1);
		*uParam4 = ped::get_ped_palette_variation(iParam0, iParam1);
	}
	else {
		iVar0 = iParam6;
	}
	if (iParam5 == 0) {
		return;
	}
	switch (iVar0) {
	case 0:
		if (iParam1 == 8) {
			if ((iParam5 & 1) != 0 || (iParam5 & 2) != 0 || (iParam5 & 32) != 0) {
				if (*iParam2 == 15) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
			if ((iParam5 & 2) != 0 || (iParam5 & 64) != 0) {
				if (*iParam2 == 3 || *iParam2 == 22) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
		}
		else if (iParam1 == 9) {
			if ((iParam5 & 1) != 0 || (iParam5 & 2) != 0 || (iParam5 & 32) != 0) {
				if (*iParam2 == 5) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
			if ((iParam5 & 2) != 0 || (iParam5 & 4) != 0) {
				if (*iParam2 == 8) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
		}
		break;

	case 1:
		if (iParam1 == 8) {
			if ((iParam5 & 1) != 0 || (iParam5 & 2) != 0 || (iParam5 & 32) != 0) {
				if (*iParam2 == 1 || *iParam2 == 10) {
					*iParam2 = 14;
					*iParam3 = 0;
				}
			}
			if ((iParam5 & 2) != 0 || (iParam5 & 64) != 0) {
				if (*iParam2 == 19) {
					*iParam2 = 14;
					*iParam3 = 0;
				}
			}
		}
		else if (iParam1 == 9) {
			if ((iParam5 & 2) != 0 || (iParam5 & 4) != 0) {
				if (*iParam2 == 5) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
		}
		break;

	case 2:
		if (iParam1 == 8) {
			if ((iParam5 & 1) != 0 || (iParam5 & 2) != 0 || (iParam5 & 32) != 0) {
				if (*iParam2 == 3) {
					*iParam2 = 14;
					*iParam3 = 0;
				}
			}
		}
		else if (iParam1 == 9) {
			if (*iParam2 >= 5 && *iParam2 <= 7) {
				if ((iParam5 & 2) != 0 || (iParam5 & 4) != 0) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
		}
		break;
	}
}

// Position - 0x4142
int func_53() {
	func_54();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x415B
void func_54() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_45(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_44(player::player_ped_id());
			if (func_36(iVar0) && (!func_55(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_36(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x4258
bool func_55(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x4266
void func_56(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_44(iParam0);
	if (func_36(iVar0) && !ped::is_ped_injured(iParam0)) {
		if (iParam0 == player::player_ped_id()) {
			func_57(iParam0, &Global_101700.f_2095.f_539.f_298[iVar0 /*284*/]);
			iVar2 = 0;
			while (iVar2 <= 8 - 1) {
				Global_101700.f_2095.f_539.f_1151[iVar2 /*4*/][iVar0] = ui::_0xA13E93403F26C812(iVar2);
				if (iParam1) {
					iVar1 = ui::_0xA48931185F0536FE();
					if (Global_101700.f_2095.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1) {
						Global_101700.f_2095.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			player::get_player_parachute_pack_tint_index(player::player_id(), &iVar3);
			if (iVar0 == 0) {
				stats::stat_set_int(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1) {
				stats::stat_set_int(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2) {
				stats::stat_set_int(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

// Position - 0x4359
void func_57(int iParam0, var *uParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;

	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = 0;
		while (iVar0 <= 44 - 1) {
			(*uParam1)[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 44 - 1) {
			iVar3 = func_61(iVar0);
			if (iVar3 != 0) {
				vVar4.x = weapon::get_ped_weapontype_in_slot(iParam0, func_61(iVar0));
				vVar4.y = 0;
				vVar4.z = 0;
				if (vVar4.x != 0 && vVar4.x != joaat("weapon_unarmed")) {
					vVar4.y = weapon::get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (vVar4.x == joaat("gadget_parachute")) {
						vVar4.y = 1;
					}
					gameplay::set_bit(&vVar4.f_2, 20 + weapon::get_ped_weapon_tint_index(iParam0, vVar4.x));
					if (vVar4.y == -1) {
						if (!weapon::get_max_ammo(iParam0, vVar4.x, &vVar4.f_1)) {
							vVar4.y = 0;
						}
					}
					(*uParam1)[iVar0 /*3*/].f_1 = vVar4.y;
					iVar1 = 0;
					iVar2 = func_59(vVar4.x, iVar1);
					while (iVar2 != 0) {
						if (weapon::has_ped_got_weapon_component(iParam0, vVar4.x, iVar2)) {
							gameplay::set_bit(&vVar4.f_2, iVar1);
						}
						iVar1++;
						iVar2 = func_59(vVar4.x, iVar1);
					}
				}
				(*uParam1)[iVar0 /*3*/] = {vVar4};
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50 - 1) {
			uParam1->f_133[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar8 = dlc1::get_num_dlc_weapons();
		iVar7 = 0;
		while (iVar7 < iVar8) {
			if (dlc1::get_dlc_weapon_data(iVar7, &Var9) && !func_58(Var9.f_1) && iVar70 < 50) {
				if (!dlc1::_is_dlc_data_empty(Var9)) {
					vVar4.x = Var9.f_1;
					vVar4.y = 0;
					vVar4.z = 0;
					vVar4.y = weapon::get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (weapon::has_ped_got_weapon(iParam0, vVar4.x, 0)) {
						gameplay::set_bit(&vVar4.f_2, 20 + weapon::get_ped_weapon_tint_index(iParam0, vVar4.x));
					}
					else {
						gameplay::set_bit(&vVar4.f_2, 20);
					}
					if (vVar4.y == -1) {
						if (!weapon::get_max_ammo(iParam0, vVar4.x, &vVar4.f_1)) {
							vVar4.y = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = vVar4.y;
					iVar1 = 0;
					while (iVar1 < dlc1::get_num_dlc_weapon_components(iVar7)) {
						if (dlc1::get_dlc_weapon_component_data(iVar7, iVar1, &Var48)) {
							if (weapon::has_ped_got_weapon_component(iParam0, vVar4.x, Var48.f_3)) {
								gameplay::set_bit(&vVar4.f_2, iVar1);
							}
						}
						iVar1++;
					}
				}
				if (vVar4.x != 0) {
					if (!weapon::has_ped_got_weapon(iParam0, vVar4.x, 0)) {
						vVar4.x = 0;
						vVar4.y = 0;
					}
				}
				uParam1->f_133[iVar70 /*3*/] = {vVar4};
				iVar70++;
			}
			iVar7++;
		}
	}
}

// Position - 0x45BD
int func_58(int iParam0) {
	if (network::network_is_game_in_progress()) {
	}
	else {
		switch (iParam0) {
		case joaat("weapon_pistol50"):
		case joaat("weapon_bullpupshotgun"):
		case joaat("weapon_assaultsmg"): return 0;

		case joaat("weapon_bottle"):
		case joaat("weapon_snspistol"):
		case joaat("weapon_gusenberg"): return 0;

		case joaat("weapon_heavypistol"):
		case joaat("weapon_specialcarbine"): return 0;

		case joaat("weapon_bullpuprifle"): return 0;

		case joaat("weapon_dagger"):
		case joaat("weapon_vintagepistol"): return 0;

		case joaat("weapon_firework"):
		case joaat("weapon_musket"): return 0;

		case joaat("weapon_heavyshotgun"):
		case joaat("weapon_marksmanrifle"): return 0;

		case joaat("weapon_hominglauncher"):
		case joaat("weapon_proxmine"): return 0;

		case joaat("weapon_combatpdw"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_marksmanpistol"): return 0;

		case -947031628:
		case -572349828:
		case 392730790:
		case -1523701417:
		case -2112826155:
		case -664359727:
		case -1887867191:
		case -837150131:
		case -344484024:
		case joaat("weapon_flaregun"):
		case joaat("weapon_handcuffs"):
		case joaat("weapon_snowball"):
		case joaat("weapon_garbagebag"):
		case joaat("weapon_flashlight"):
		case joaat("weapon_switchblade"):
		case joaat("weapon_revolver"):
		case joaat("weapon_dbshotgun"):
		case joaat("weapon_compactrifle"):
		case 317205821:
		case -1121678507:
		case 125959754:
		case -853065399:
		case -1169823560:
		case -1810795771:
		case 419712736: return 1;
		}
	}
	return 0;
}

// Position - 0x472B
int func_59(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	var *uVar2;
	struct<4> Var41;

	iVar0 = 0;
	switch (iParam0) {
	case joaat("weapon_pistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_pistol_clip_01"); break;

		case 1: iVar0 = joaat("component_pistol_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_pi_supp_02"); break;

		case 4: iVar0 = joaat("component_pistol_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_combatpistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_combatpistol_clip_01"); break;

		case 1: iVar0 = joaat("component_combatpistol_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_pi_supp"); break;

		case 4: iVar0 = joaat("component_combatpistol_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_appistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_appistol_clip_01"); break;

		case 1: iVar0 = joaat("component_appistol_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_pi_supp"); break;

		case 4: iVar0 = joaat("component_appistol_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_microsmg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_microsmg_clip_01"); break;

		case 1: iVar0 = joaat("component_microsmg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_macro"); break;

		case 4: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 5: iVar0 = joaat("component_microsmg_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_smg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_smg_clip_01"); break;

		case 1: iVar0 = joaat("component_smg_clip_02"); break;

		case 2: iVar0 = joaat("component_smg_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_pi_supp"); break;

		case 5: iVar0 = joaat("component_at_scope_macro_02"); break;

		case 6: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 7: iVar0 = joaat("component_smg_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_assaultrifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_assaultrifle_clip_01"); break;

		case 1: iVar0 = joaat("component_assaultrifle_clip_02"); break;

		case 2: iVar0 = joaat("component_assaultrifle_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 4: iVar0 = joaat("component_at_ar_flsh"); break;

		case 5: iVar0 = joaat("component_at_scope_macro"); break;

		case 6: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 7: iVar0 = joaat("component_assaultrifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_carbinerifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_carbinerifle_clip_01"); break;

		case 1: iVar0 = joaat("component_carbinerifle_clip_02"); break;

		case 2: iVar0 = joaat("component_carbinerifle_clip_03"); break;

		case 3: iVar0 = joaat("component_at_railcover_01"); break;

		case 4: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 5: iVar0 = joaat("component_at_ar_flsh"); break;

		case 6: iVar0 = joaat("component_at_scope_medium"); break;

		case 7: iVar0 = joaat("component_at_ar_supp"); break;

		case 8: iVar0 = joaat("component_carbinerifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_advancedrifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_advancedrifle_clip_01"); break;

		case 1: iVar0 = joaat("component_advancedrifle_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_small"); break;

		case 4: iVar0 = joaat("component_at_ar_supp"); break;

		case 5: iVar0 = joaat("component_advancedrifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_mg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_mg_clip_01"); break;

		case 1: iVar0 = joaat("component_mg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_scope_small_02"); break;

		case 3: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 4: iVar0 = joaat("component_mg_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_combatmg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_combatmg_clip_01"); break;

		case 1: iVar0 = joaat("component_combatmg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 3: iVar0 = joaat("component_at_scope_medium"); break;

		case 4: iVar0 = joaat("component_combatmg_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_pumpshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_at_sr_supp"); break;

		case 1: iVar0 = joaat("component_at_ar_flsh"); break;

		case 2: iVar0 = joaat("component_pumpshotgun_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_assaultshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_assaultshotgun_clip_01"); break;

		case 1: iVar0 = joaat("component_assaultshotgun_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_ar_supp"); break;
		}
		break;

	case joaat("weapon_sniperrifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_sniperrifle_clip_01"); break;

		case 1: iVar0 = joaat("component_at_scope_large"); break;

		case 2: iVar0 = joaat("component_at_scope_max"); break;

		case 3: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 4: iVar0 = joaat("component_sniperrifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_heavysniper"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_heavysniper_clip_01"); break;

		case 1: iVar0 = joaat("component_at_scope_large"); break;

		case 2: iVar0 = joaat("component_at_scope_max"); break;
		}
		break;

	case joaat("weapon_grenadelauncher"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 1: iVar0 = joaat("component_at_ar_flsh"); break;

		case 2: iVar0 = joaat("component_at_scope_small"); break;
		}
		break;

	case joaat("weapon_minigun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_minigun_clip_01"); break;
		}
		break;

	case joaat("weapon_assaultsmg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_assaultsmg_clip_01"); break;

		case 1: iVar0 = joaat("component_assaultsmg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_macro"); break;

		case 4: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 5: iVar0 = joaat("component_assaultsmg_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_bullpupshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 1: iVar0 = joaat("component_at_ar_flsh"); break;

		case 2: iVar0 = joaat("component_at_ar_supp_02"); break;
		}
		break;

	case joaat("weapon_pistol50"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_pistol50_clip_01"); break;

		case 1: iVar0 = joaat("component_pistol50_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 4: iVar0 = joaat("component_pistol50_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_combatpdw"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_combatpdw_clip_01"); break;

		case 1: iVar0 = joaat("component_combatpdw_clip_02"); break;

		case 2: iVar0 = joaat("component_combatpdw_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_scope_small"); break;

		case 5: iVar0 = joaat("component_at_ar_afgrip"); break;
		}
		break;

	case joaat("weapon_sawnoffshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_sawnoffshotgun_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_bullpuprifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_bullpuprifle_clip_01"); break;

		case 1: iVar0 = joaat("component_bullpuprifle_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_small"); break;

		case 4: iVar0 = joaat("component_at_ar_supp"); break;

		case 5: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 6: iVar0 = joaat("component_bullpuprifle_varmod_low"); break;
		}
		break;

	case joaat("weapon_snspistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_snspistol_clip_01"); break;

		case 1: iVar0 = joaat("component_snspistol_clip_02"); break;

		case 2: iVar0 = joaat("component_snspistol_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_specialcarbine"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_specialcarbine_clip_01"); break;

		case 1: iVar0 = joaat("component_specialcarbine_clip_02"); break;

		case 2: iVar0 = joaat("component_specialcarbine_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_scope_medium"); break;

		case 5: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 6: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 7: iVar0 = joaat("component_specialcarbine_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_knuckle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_knuckle_varmod_pimp"); break;

		case 1: iVar0 = joaat("component_knuckle_varmod_ballas"); break;

		case 2: iVar0 = joaat("component_knuckle_varmod_dollar"); break;

		case 3: iVar0 = joaat("component_knuckle_varmod_diamond"); break;

		case 4: iVar0 = joaat("component_knuckle_varmod_hate"); break;

		case 5: iVar0 = joaat("component_knuckle_varmod_love"); break;

		case 6: iVar0 = joaat("component_knuckle_varmod_player"); break;

		case 7: iVar0 = joaat("component_knuckle_varmod_king"); break;

		case 8: iVar0 = joaat("component_knuckle_varmod_vagos"); break;
		}
		break;

	case joaat("weapon_machinepistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_machinepistol_clip_01"); break;

		case 1: iVar0 = joaat("component_machinepistol_clip_02"); break;

		case 2: iVar0 = joaat("component_machinepistol_clip_03"); break;

		case 3: iVar0 = joaat("component_at_pi_supp"); break;
		}
		break;

	case joaat("weapon_switchblade"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_switchblade_varmod_var1"); break;

		case 1: iVar0 = joaat("component_switchblade_varmod_var2"); break;
		}
		break;

	case joaat("weapon_revolver"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_revolver_clip_01"); break;

		case 1: iVar0 = joaat("component_revolver_varmod_boss"); break;

		case 2: iVar0 = joaat("component_revolver_varmod_goon"); break;
		}
		break;

	case -1121678507:
		switch (iParam1) {
		case 0: iVar0 = -2067221805; break;

		case 1: iVar0 = -1820405577; break;
		}
		break;

	default:
		if (iParam0 != 0) {
			iVar1 = func_60(iParam0, &uVar2);
			if (iVar1 != -1) {
				if (iParam1 < dlc1::get_num_dlc_weapon_components(iVar1)) {
					if (dlc1::get_dlc_weapon_component_data(iVar1, iParam1, &Var41)) {
						return Var41.f_3;
					}
				}
			}
		}
		break;
	}
	return iVar0;
}

// Position - 0x5217
int func_60(int iParam0, var *uParam1) {
	int iVar0;
	int iVar1;

	iVar1 = dlc1::get_num_dlc_weapons();
	iVar0 = 0;
	while (iVar0 < iVar1) {
		if (dlc1::get_dlc_weapon_data(iVar0, uParam1)) {
			if (uParam1->f_1 == iParam0) {
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x5252
int func_61(int iParam0) {
	int iVar0;

	iVar0 = 0;
	switch (iParam0) {
	case 0: iVar0 = 1993361168; break;

	case 1: iVar0 = 1277010230; break;

	case 2: iVar0 = 932043479; break;

	case 3: iVar0 = -690654591; break;

	case 4: iVar0 = -1459198205; break;

	case 5: iVar0 = 195782970; break;

	case 6: iVar0 = -438797331; break;

	case 7: iVar0 = 896793492; break;

	case 8: iVar0 = 495159329; break;

	case 9: iVar0 = -1155528315; break;

	case 10: iVar0 = -515636489; break;

	case 11: iVar0 = -871913299; break;

	case 12: iVar0 = -1352759032; break;

	case 13: iVar0 = -542958961; break;

	case 14: iVar0 = 1682645887; break;

	case 15: iVar0 = -859470162; break;

	case 16: iVar0 = -2125426402; break;

	case 17: iVar0 = 2067210266; break;

	case 18: iVar0 = -538172856; break;

	case 19: iVar0 = 1783244476; break;

	case 20: iVar0 = 439844898; break;

	case 21: iVar0 = -24829327; break;

	case 22: iVar0 = 1949306232; break;

	case 23: iVar0 = -1941230881; break;

	case 24: iVar0 = -1033554448; break;

	case 25: iVar0 = 320513715; break;

	case 26: iVar0 = -695165975; break;

	case 27: iVar0 = -281028447; break;

	case 28: iVar0 = -686713772; break;

	case 29: iVar0 = 347509793; break;

	case 30: iVar0 = 1769089473; break;

	case 31: iVar0 = 189935548; break;

	case 33: iVar0 = 248801358; break;

	case 34: iVar0 = 386596758; break;

	case 35: iVar0 = -157212362; break;

	case 36: iVar0 = 436985596; break;

	case 37: iVar0 = -47957369; break;

	case 38: iVar0 = 575938238; break;
	}
	return iVar0;
}

// Position - 0x54C6
void func_62(int iParam0) {
	int iVar0;

	iVar0 = func_44(iParam0);
	if (func_36(iVar0) && !ped::is_ped_injured(iParam0)) {
		Global_101700.f_2095.f_539.f_294[iVar0] = ped::get_ped_armour(iParam0);
	}
}

// Position - 0x5502
void func_63(var *uParam0, int iParam1) {
	int iVar0;
	vector3 vVar1;
	float *fVar4;
	int iVar5;

	*uParam0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	uParam0->f_3 = entity::get_entity_heading(player::player_ped_id());
	uParam0->f_5 = ped::get_ped_parachute_state(player::player_ped_id());
	if (player::is_player_playing(player::player_id())) {
		uParam0->f_4 = player::get_player_wanted_level(player::player_id());
	}
	if (system::vdist(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f) {
		*uParam0 = {301.2162f, 202.1357f, 103.3797f};
		uParam0->f_3 = 156.5144f;
	}
	else if (system::vdist(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f) {
		*uParam0 = {394.2567f, -713.5439f, 28.2853f};
		uParam0->f_3 = 276.6273f;
	}
	else if (system::vdist(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f) {
		*uParam0 = {-1423.472f, -214.2539f, 45.5004f};
		uParam0->f_3 = 353.8757f;
	}
	else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("finale_choice")) > 0) {
		*uParam0 = {4.2587f, 525.0214f, 173.6281f};
		uParam0->f_3 = 203.6746f;
	}
	else if (gameplay::is_bit_set(Global_69950, 4)) {
		*uParam0 = {452.0255f, 5571.85f, 780.1859f};
		uParam0->f_3 = 78.9858f;
	}
	else if (gameplay::is_bit_set(Global_69950, 5)) {
		*uParam0 = {-745.4462f, 5595.146f, 40.6594f};
		uParam0->f_3 = 261.747f;
	}
	else if (gameplay::is_bit_set(Global_69950, 6)) {
		*uParam0 = {-1675.521f, -1125.59f, 12.091f};
		uParam0->f_3 = 271.8208f;
	}
	else if (gameplay::is_bit_set(Global_69950, 7)) {
		*uParam0 = {-1631.219f, -1112.805f, 12.0212f};
		uParam0->f_3 = 316.8879f;
	}
	else if (interior::get_interior_from_entity(player::player_ped_id()) ==
			 interior::get_interior_at_coords_with_type(1272.659f, -1715.467f, 53.7715f, "v_lesters")) {
		*uParam0 = {1276.956f, -1725.189f, 53.6551f};
		uParam0->f_3 = 204.1703f;
	}
	else if (entity::is_entity_in_angled_area(player::player_ped_id(), -415.4365f, 2068.289f, 113.3002f, -564.9516f,
											  1884.703f, 134.0403f, 258.75f, 0, 1, 0) ||
			 entity::is_entity_in_angled_area(player::player_ped_id(), -596.4706f, 2089.921f, 125.4128f, -581.2134f,
											  2036.256f, 136.2836f, 9.5f, 0, 1, 0)) {
		*uParam0 = {-601.59f, 2099.197f, 128.8928f};
		uParam0->f_3 = 204.7498f;
	}
	else if (system::vdist(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f) {
		*uParam0 = {-1018.376f, -483.9436f, 36.0964f};
		uParam0->f_3 = 114.7664f;
	}
	else if (system::vdist(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f) {
		*uParam0 = {497.7238f, -1310.932f, 28.2372f};
		uParam0->f_3 = 289.3663f;
	}
	else if (system::vdist(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f) {
		*uParam0 = {2316.93f, 2594.153f, 45.7199f};
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1) {
		if (func_67(&iVar0)) {
			if (func_65(iVar0, &vVar1, &fVar4)) {
				vVar1.z++;
				*uParam0 = {vVar1};
				uParam0->f_3 = fVar4;
			}
		}
		else if (entity::is_entity_in_angled_area(player::player_ped_id(), 207.4336f, -1019.795f, -100.4728f, 189.9338f,
												  -1019.623f, -95.56883f, 17.1875f, 0, 1, 0)) {
			iVar5 = func_90();
			if (iVar5 == 0) {
				*uParam0 = {-65.1234f, 81.2517f, 70.5644f};
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1) {
				*uParam0 = {-68.5531f, -1824.377f, 25.9424f};
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2) {
				*uParam0 = {-220.8189f, -1162.302f, 22.0242f};
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (entity::is_entity_in_angled_area(player::player_ped_id(), 483.7175f, -1326.63f, 28.2135f, 474.9644f,
												  -1307.998f, 34.49498f, 12f, 0, 1, 0)) {
			*uParam0 = {495.4108f, -1306.08f, 29.2883f};
			uParam0->f_3 = 213.6273f;
		}
		else if (entity::is_entity_in_angled_area(player::player_ped_id(), -1146.77f, -1534.22f, 3.37f, -1158.453f,
												  -1517.75f, 6.374244f, 13f, 0, 1, 0)) {
			*uParam0 = {-1160.095f, -1515.407f, 3.1496f};
			uParam0->f_3 = 305.6424f;
		}
		else if (entity::is_entity_in_angled_area(player::player_ped_id(), 439.5432f, -996.9769f, 24.88307f, 428.2935f,
												  -997.0192f, 28.57458f, 8.5f, 0, 1, 0)) {
			*uParam0 = {431.8853f, -1013.133f, 28.7907f};
			uParam0->f_3 = 186.6814f;
		}
		else if (func_64(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f)) {
			*uParam0 = {279.4137f, -585.8815f, 43.2502f};
			uParam0->f_3 = 48.8028f;
		}
	}
}

// Position - 0x5A5D
bool func_64(vector3 vParam0, char *sParam3, vector3 vParam4) {
	int iVar0;
	int iVar1;

	if (!interior::_are_coords_colliding_with_exterior(vParam0)) {
		iVar0 = interior::get_interior_at_coords_with_type(vParam4, sParam3);
		if (!interior::is_valid_interior(iVar0)) {
			return false;
		}
		iVar1 = interior::get_interior_from_collision(vParam0);
		if (iVar1 == iVar0) {
			return true;
		}
	}
	return false;
}

// Position - 0x5AA1
bool func_65(int iParam0, var *uParam1, float *fParam2) {
	*uParam1 = {0f, 0f, 0f};
	*fParam2 = 0f;
	switch (iParam0) {
	case 0:
		*uParam1 = {-829.842f, -191.7454f, 36.4386f};
		*fParam2 = 29.5061f;
		break;

	case 1:
		*uParam1 = {129.8484f, -1716.528f, 28.0702f};
		*fParam2 = 50.3483f;
		break;

	case 2:
		*uParam1 = {-1296.913f, -1120.999f, 5.3951f};
		*fParam2 = 0.9933f;
		break;

	case 3:
		*uParam1 = {1938.028f, 3718.736f, 31.3154f};
		*fParam2 = 118.2305f;
		break;

	case 4:
		*uParam1 = {1197.866f, -469.3809f, 65.0885f};
		*fParam2 = 346.4477f;
		break;

	case 5:
		*uParam1 = {-32.2161f, -135.8212f, 56.0532f};
		*fParam2 = 186.0052f;
		break;

	case 6:
		*uParam1 = {-287.7696f, 6238.081f, 30.2902f};
		*fParam2 = 316.1349f;
		break;

	case 7:
		*uParam1 = {99.2876f, -1395.16f, 28.2759f};
		*fParam2 = 320.2739f;
		break;

	case 8:
		*uParam1 = {1679.445f, 4819.056f, 41.0035f};
		*fParam2 = 4.6192f;
		break;

	case 9:
		*uParam1 = {411.3063f, -809.1863f, 28.1554f};
		*fParam2 = 1.8972f;
		break;

	case 10:
		*uParam1 = {-1088.054f, 2699.167f, 19.2748f};
		*fParam2 = 129.7382f;
		break;

	case 11:
		*uParam1 = {1194.163f, 2695.644f, 36.9225f};
		*fParam2 = 1.1454f;
		break;

	case 12:
		*uParam1 = {-821.2829f, -1088.027f, 10.0499f};
		*fParam2 = 120.5883f;
		break;

	case 13:
		*uParam1 = {-3.3416f, 6521.303f, 30.2961f};
		*fParam2 = 316.4451f;
		break;

	case 14:
		*uParam1 = {-1208.417f, -785.9635f, 16.0139f};
		*fParam2 = 36.3181f;
		break;

	case 15:
		*uParam1 = {623.1845f, 2739.191f, 40.9588f};
		*fParam2 = 3.5411f;
		break;

	case 16:
		*uParam1 = {130.9555f, -198.2084f, 53.41f};
		*fParam2 = 251.3506f;
		break;

	case 17:
		*uParam1 = {-3164.065f, 1067.317f, 19.6778f};
		*fParam2 = 101.2229f;
		break;

	case 18:
		*uParam1 = {-713.2797f, -174.2767f, 35.8962f};
		*fParam2 = 29.8138f;
		break;

	case 19:
		*uParam1 = {-147.0616f, -306.4322f, 37.7912f};
		*fParam2 = 160.4526f;
		break;

	case 20:
		*uParam1 = {-1461.355f, -230.6092f, 48.3064f};
		*fParam2 = 318.7851f;
		break;

	case 21:
		*uParam1 = {-1347.739f, -1278.573f, 3.8952f};
		*fParam2 = 17.9365f;
		break;

	case 22:
		*uParam1 = {325.6833f, 164.3263f, 102.4425f};
		*fParam2 = 68.6407f;
		break;

	case 23:
		*uParam1 = {1858.774f, 3742.393f, 32.0779f};
		*fParam2 = 301.2329f;
		break;

	case 24:
		*uParam1 = {-286.3272f, 6202.802f, 30.3323f};
		*fParam2 = 225.1334f;
		break;

	case 25:
		*uParam1 = {-1161.596f, -1417.7f, 3.712f};
		*fParam2 = 246.9161f;
		break;

	case 26:
		*uParam1 = {1308.952f, -1660.611f, 50.2362f};
		*fParam2 = 163.5456f;
		break;

	case 27:
		*uParam1 = {-3161.585f, 1074.214f, 19.6847f};
		*fParam2 = 98.6092f;
		break;

	case 28:
		*uParam1 = {28.423f, -1110.814f, 28.2848f};
		*fParam2 = 85.2495f;
		break;

	case 29:
		*uParam1 = {1704.966f, 3749.709f, 33.0188f};
		*fParam2 = 45.6778f;
		break;

	case 30:
		*uParam1 = {223.949f, -38.7894f, 68.6483f};
		*fParam2 = 159.4265f;
		break;

	case 31:
		*uParam1 = {837.7854f, -1017.963f, 26.3045f};
		*fParam2 = 181.0445f;
		break;

	case 32:
		*uParam1 = {-313.1914f, 6093.351f, 30.4625f};
		*fParam2 = 315.8405f;
		break;

	case 33:
		*uParam1 = {-663.4631f, -952.8069f, 20.3143f};
		*fParam2 = 92.6796f;
		break;

	case 34:
		*uParam1 = {-1323.06f, -392.8577f, 35.4596f};
		*fParam2 = 210.7398f;
		break;

	case 35:
		*uParam1 = {-1106.102f, 2684.35f, 18.0953f};
		*fParam2 = 127.0383f;
		break;

	case 36:
		*uParam1 = {-3157.932f, 1081.309f, 19.6953f};
		*fParam2 = 100.2942f;
		break;

	case 37:
		*uParam1 = {2562.882f, 312.8641f, 107.4612f};
		*fParam2 = 179.205f;
		break;

	case 38:
		*uParam1 = {822.48f, -2142.875f, 27.8496f};
		*fParam2 = 355.0598f;
		break;

	case 39:
		*uParam1 = {-1137.053f, -1993.916f, 12.1677f};
		*fParam2 = 43.1213f;
		break;

	case 40:
		*uParam1 = {717.8107f, -1084.081f, 21.3094f};
		*fParam2 = 93.2649f;
		break;

	case 41:
		*uParam1 = {-387.6789f, -128.2568f, 37.6796f};
		*fParam2 = 119.1085f;
		break;

	case 42:
		*uParam1 = {117.8835f, 6599.415f, 31.0134f};
		*fParam2 = 90.7225f;
		break;

	case 43:
		*uParam1 = {1201.709f, 2664.813f, 36.8102f};
		*fParam2 = 133.9002f;
		break;

	case 44:
		*uParam1 = {-200.1521f, -1297.502f, 30.296f};
		*fParam2 = 269.0687f;
		break;

	case 45:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		break;
	}
	return !func_66(*uParam1, 0f, 0f, 0f, 0);
}

// Position - 0x6130
bool func_66(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x6177
bool func_67(int *iParam0) {
	if (!entity::is_entity_dead(player::player_ped_id(), 0) && !ped::is_ped_injured(player::player_ped_id())) {
		if (func_78()) {
			*iParam0 = func_73(entity::get_entity_coords(player::player_ped_id(), 0), 6, -1, 0, 1, -1);
			if (func_72(*iParam0) && !func_68(*iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x61D2
int func_68(int iParam0) { return func_69(iParam0, 0, 1); }

// Position - 0x61E2
int func_69(int iParam0, int iParam1, int iParam2) {
	if (iParam2) {
		return gameplay::is_bit_set(Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_71() == 0) {
			return gameplay::is_bit_set(func_47(func_70(iParam0), -1, 0), iParam1);
		}
	}
	else {
		return gameplay::is_bit_set(Global_101700.f_668[iParam0], iParam1);
	}
	return 0;
}

// Position - 0x6242
int func_70(int iParam0) {
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

// Position - 0x6509
int func_71() { return Global_25190; }

// Position - 0x6514
int func_72(int iParam0) { return func_69(iParam0, 5, 1); }

// Position - 0x6524
int func_73(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) {
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 45) {
		if (iParam3 == 6 || iParam3 == func_77(iVar0)) {
			if (!iParam5 || func_76(iVar0)) {
				fVar1 = gameplay::get_distance_between_coords(vParam0, func_74(iVar0, 0), 1);
				if (fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1) && (iParam6 || iVar0 != 21) &&
					iVar0 != iParam7) {
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

// Position - 0x65C6
Vector3 func_74(int iParam0, int iParam1) {
	switch (iParam0) {
	case -1: return 0f, 0f, 0f;

	case 0: return -821.9946f, -187.1776f, 36.5689f;

	case 1: return 133.5702f, -1710.918f, 28.2916f;

	case 2: return -1287.082f, -1116.558f, 5.9901f;

	case 3: return 1933.119f, 3726.079f, 31.8444f;

	case 4: return 1208.333f, -470.917f, 65.208f;

	case 5: return -30.7448f, -148.4921f, 56.0765f;

	case 6: return -280.8165f, 6231.771f, 30.6955f;

	case 7: return 80.665f, -1391.669f, 28.3761f;

	case 8: return 1687.881f, 4820.55f, 41.0096f;

	case 9: return 419.531f, -807.5787f, 28.4896f;

	case 10: return -1094.049f, 2704.171f, 18.0873f;

	case 11: return 1197.972f, 2704.22f, 37.1572f;

	case 12: return -818.6218f, -1077.533f, 10.3282f;

	case 13: return -0.2361f, 6516.045f, 30.8684f;

	case 14: return -1199.809f, -776.6886f, 16.3237f;

	case 15: return 618.1857f, 2752.567f, 41.0881f;

	case 16: return 126.6853f, -212.5027f, 53.5578f;

	case 17: return -3168.966f, 1055.287f, 19.8632f;

	case 18: return -715.3598f, -155.7742f, 36.4105f;

	case 19: return -158.2199f, -304.9663f, 38.735f;

	case 20: return -1455.005f, -233.1862f, 48.7936f;

	case 21: return -1335.973f, -1278.555f, 3.8598f;

	case 22: return 321.6098f, 179.4165f, 102.5865f;

	case 23: return 1861.685f, 3750.08f, 32.0318f;

	case 24: return -290.1603f, 6199.095f, 30.4871f;

	case 25: return -1153.948f, -1425.019f, 3.9544f;

	case 26: return 1322.455f, -1651.125f, 51.1885f;

	case 27: return -3169.42f, 1074.727f, 19.8343f;

	case 28: return 17.6804f, -1114.288f, 28.797f;

	case 29: return 1697.979f, 3753.2f, 33.7053f;

	case 30: return 245.2711f, -45.8126f, 68.941f;

	case 31: return 844.1248f, -1025.571f, 27.1948f;

	case 32: return -325.8904f, 6077.026f, 30.4548f;

	case 33: return -664.2178f, -943.3646f, 20.8292f;

	case 34: return -1313.948f, -390.9637f, 35.592f;

	case 35: return -1111.238f, 2688.463f, 17.6131f;

	case 36: return -3165.231f, 1082.855f, 19.8438f;

	case 37: return 2569.612f, 302.576f, 107.7349f;

	case 38: return 811.8699f, -2149.102f, 28.6363f;

	case 39: return -1147.314f, -1992.434f, 12.1803f;

	case 40: return 724.524f, -1089.081f, 21.1692f;

	case 41: return -354.5272f, -135.4011f, 38.185f;

	case 42: return 113.2615f, 6624.28f, 30.7871f;

	case 43: return 1174.707f, 2644.45f, 36.7552f;

	case 44:
		if (iParam1) {
			return -211.5f, -1324.2f, 30.296f;
		}
		else {
			return -205.6654f, -1311.113f, 30.296f;
		}
		break;

	case 45: return func_75(Global_93004);
	}
	return 1000000f, 1000000f, 1000000f;
}

// Position - 0x6AE0
Vector3 func_75(int iParam0) {
	switch (iParam0) {
	case 1: return 1060f, -2990f, -35f;

	case 2: return 1060f, -2990f, -35f;

	case 3: return 974.9542f, -3000.091f, -35f;

	case 6: return -1586.36f, -566.6f, 106.17f;

	case 7: return -1389.87f, -465.17f, 82.68f;

	case 8: return -145.81f, -590.2f, 171.13f;

	case 9: return -62.49f, -823.55f, 288.74f;

	case 4: return 1102.515f, -3158.888f, -38.5186f;

	case 5: return 1005.861f, -3156.162f, -39.907f;

	default: return 0f, 0f, -200f;
	}
	return 0f, 0f, -200f;
}

// Position - 0x6BF6
int func_76(int iParam0) { return func_69(iParam0, 0, 0); }

// Position - 0x6C06
int func_77(int iParam0) {
	switch (iParam0) {
	case -1: return 6;

	case 0: return 0;

	case 1: return 0;

	case 2: return 0;

	case 3: return 0;

	case 4: return 0;

	case 5: return 0;

	case 6: return 0;

	case 7: return 1;

	case 8: return 1;

	case 9: return 1;

	case 10: return 1;

	case 11: return 1;

	case 12: return 1;

	case 13: return 1;

	case 14: return 1;

	case 15: return 1;

	case 16: return 1;

	case 17: return 1;

	case 18: return 1;

	case 19: return 1;

	case 20: return 1;

	case 21: return 1;

	case 22: return 2;

	case 23: return 2;

	case 24: return 2;

	case 25: return 2;

	case 26: return 2;

	case 27: return 2;

	case 28: return 3;

	case 29: return 3;

	case 30: return 3;

	case 31: return 3;

	case 32: return 3;

	case 33: return 3;

	case 34: return 3;

	case 35: return 3;

	case 36: return 3;

	case 37: return 3;

	case 38: return 3;

	case 39: return 4;

	case 40: return 4;

	case 41: return 4;

	case 42: return 4;

	case 43: return 4;

	case 44: return 4;

	case 45: return 5;
	}
	return 6;
}

// Position - 0x6E79
bool func_78() { return Global_91543.f_303 > 0; }

// Position - 0x6E8A
var func_79() {
	int *iVar0;

	func_89(&iVar0, time::get_clock_seconds());
	func_88(&iVar0, time::get_clock_minutes());
	func_87(&iVar0, time::get_clock_hours());
	func_82(&iVar0, time::get_clock_day_of_month());
	func_81(&iVar0, time::get_clock_month());
	func_80(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0x6ED0
void func_80(int *iParam0, int iParam1) {
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

// Position - 0x6F56
void func_81(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*uParam0 -= (*uParam0 & 15);
	*uParam0 |= iParam1;
}

// Position - 0x6F89
void func_82(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_86(*uParam0);
	iVar1 = func_84(*uParam0);
	if (iParam1 < 1 || iParam1 > func_83(iVar0, iVar1)) {
		return;
	}
	*uParam0 -= (*uParam0 & 496);
	*uParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0x6FDA
int func_83(int iParam0, int iParam1) {
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

// Position - 0x707C
var func_84(int iParam0) {
	return (system::shift_right(iParam0, 26) & 31) * func_85(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x70A1
int func_85(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x70B8
int func_86(var uParam0) { return uParam0 & 15; }

// Position - 0x70C5
void func_87(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*uParam0 -= (*uParam0 & 15872);
	*uParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0x70FF
void func_88(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 1032192);
	*uParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0x713A
void func_89(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 66060288);
	*uParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0x7176
int func_90() {
	func_54();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x718F
void func_91(int iParam0) {
	var uVar0;
	vector3 vVar1[24];

	if (gameplay::is_xbox360_version() || gameplay::is_durango_version()) {
		uVar0 = iParam0;
		network::network_set_rich_presence(9, &uVar0, 1, 1);
	}
	else if (gameplay::is_ps3_version() || gameplay::is_orbis_version()) {
		StringCopy(&cVar1, "SPRC_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		network::_0x3E200C2BCF4164EB(9, &cVar1);
	}
}

// Position - 0x71E8
void func_92(char *sParam0, int iParam1, int iParam2) {
	if (!gameplay::is_string_null_or_empty(&Global_88894)) {
		stats::playstats_mission_over(&Global_88894, 0, 0, 0, 1, 0);
		StringCopy(&Global_88894, "", 64);
	}
	StringCopy(&Global_88894, sParam0, 64);
	stats::playstats_mission_started(sParam0, iParam1, iParam2, func_93(0));
}

// Position - 0x722A
bool func_93(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x7255
struct<2> func_94(int iParam0) {
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

//Position - 0x76A2
void func_95(int iParam0, var* uParam1)
{
	switch (iParam0) {
	case 0:
		func_96(uParam1, "Abigail1", func_9(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0,
				"ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
		break;

	case 1:
		func_96(uParam1, "Abigail2", func_9(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0,
				-1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
		break;

	case 2:
		func_96(uParam1, "Barry1", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4,
				1, 0, 2359, func_97(iParam0), 1, 0);
		break;

	case 3:
		func_96(uParam1, "Barry2", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4,
				4, 0, 2359, func_97(iParam0), 1, 1);
		break;

	case 4:
		func_96(uParam1, "Barry3", func_9(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0,
				2359, func_97(iParam0), 0, 0);
		break;

	case 5:
		func_96(uParam1, "Barry3A", func_9(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "",
				166, 0, 7, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
		break;

	case 6:
		func_96(uParam1, "Barry3C", func_9(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7,
				4, 2, 0, 2359, func_97(iParam0), 0, 1);
		break;

	case 7:
		func_96(uParam1, "Barry4", func_9(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4",
				0, 0, -1, 4, 2, 800, 2000, func_97(iParam0), 0, 0);
		break;

	case 8:
		func_96(uParam1, "Dreyfuss1", func_9(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0,
				"", 0, 0, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
		break;

	case 9:
		func_96(uParam1, "Epsilon1", func_9(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10,
				4, 1, 0, 2359, func_97(iParam0), 0, 0);
		break;

	case 10:
		func_96(uParam1, "Epsilon2", func_9(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11,
				4, 1, 0, 2359, func_97(iParam0), 1, 0);
		break;

	case 11:
		func_96(uParam1, "Epsilon3", func_9(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0,
				0, 12, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
		break;

	case 12:
		func_96(uParam1, "Epsilon4", func_9(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16,
				"postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
		break;

	case 13:
		func_96(uParam1, "Epsilon5", func_9(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes",
				0, 0, 14, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
		break;

	case 14:
		func_96(uParam1, "Epsilon6", func_9(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0,
				15, 4, 1, 0, 2359, func_97(iParam0), 0, 1);
		break;

	case 15:
		func_96(uParam1, "Epsilon7", func_9(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert",
				0, 0, 16, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
		break;

	case 16:
		func_96(uParam1, "Epsilon8", func_9(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16,
				"epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
		break;

	case 17:
		func_96(uParam1, "Extreme1", func_9(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18,
				4, 2, 0, 2359, func_97(iParam0), 0, 1);
		break;

	case 18:
		func_96(uParam1, "Extreme2", func_9(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0,
				19, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
		break;

	case 19:
		func_96(uParam1, "Extreme3", func_9(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4,
				2, 0, 2359, func_97(iParam0), 0, 1);
		break;

	case 20:
		func_96(uParam1, "Extreme4", func_9(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1,
				4, 2, 0, 2359, func_97(iParam0), 0, 0);
		break;

	case 21:
		func_96(uParam1, "Fanatic1", func_9(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1,
				-1, 4, 1, 700, 2000, func_97(iParam0), 1, 0);
		break;

	case 22:
		func_96(uParam1, "Fanatic2", func_9(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1,
				4, 4, 700, 2000, func_97(iParam0), 1, 0);
		break;

	case 23:
		func_96(uParam1, "Fanatic3", func_9(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4,
				2, 700, 2000, func_97(iParam0), 0, 1);
		break;

	case 24:
		func_96(uParam1, "Hao1", func_9(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0,
				"controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_97(iParam0), 0, 1);
		break;

	case 25:
		func_96(uParam1, "Hunting1", func_9(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1,
				26, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
		break;

	case 26:
		func_96(uParam1, "Hunting2", func_9(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1,
				4, 4, 0, 2359, func_97(iParam0), 0, 1);
		break;

	case 27:
		func_96(uParam1, "Josh1", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0,
				1, 28, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
		break;

	case 28:
		func_96(uParam1, "Josh2", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29,
				4, 4, 0, 2359, func_97(iParam0), 1, 1);
		break;

	case 29:
		func_96(uParam1, "Josh3", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30,
				4, 4, 0, 2359, func_97(iParam0), 1, 1);
		break;

	case 30:
		func_96(uParam1, "Josh4", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4,
				4, 0, 2359, func_97(iParam0), 1, 0);
		break;

	case 31:
		func_96(uParam1, "Maude1", func_9(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher",
				0, 1, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
		break;

	case 32:
		func_96(uParam1, "Minute1", func_9(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4,
				4, 0, 2359, func_97(iParam0), 0, 1);
		break;

	case 33:
		func_96(uParam1, "Minute2", func_9(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0,
				2359, func_97(iParam0), 0, 1);
		break;

	case 34:
		func_96(uParam1, "Minute3", func_9(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0,
				-1, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
		break;

	case 35:
		func_96(uParam1, "MrsPhilips1", func_9(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0,
				"ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 0);
		break;

	case 36:
		func_96(uParam1, "MrsPhilips2", func_9(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0,
				2359, func_97(iParam0), 0, 0);
		break;

	case 37:
		func_96(uParam1, "Nigel1", func_9(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1,
				-1, 1, 4, 0, 2359, func_97(iParam0), 1, 0);
		break;

	case 38:
		func_96(uParam1, "Nigel1A", func_9(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "",
				0, 0, 42, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
		break;

	case 39:
		func_96(uParam1, "Nigel1B", func_9(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0,
				42, 4, 4, 700, 2000, func_97(iParam0), 1, 1);
		break;

	case 40:
		func_96(uParam1, "Nigel1C", func_9(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0,
				42, 4, 4, 700, 2000, func_97(iParam0), 1, 1);
		break;

	case 41:
		func_96(uParam1, "Nigel1D", func_9(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42,
				4, 4, 700, 2000, func_97(iParam0), 1, 1);
		break;

	case 42:
		func_96(uParam1, "Nigel2", func_9(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43,
				4, 4, 0, 2359, func_97(iParam0), 1, 1);
		break;

	case 43:
		func_96(uParam1, "Nigel3", func_9(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16,
				"postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
		break;

	case 44:
		func_96(uParam1, "Omega1", func_9(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0,
				"spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
		break;

	case 45:
		func_96(uParam1, "Omega2", func_9(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1,
				4, 2, 0, 2359, func_97(iParam0), 0, 0);
		break;

	case 46:
		func_96(uParam1, "Paparazzo1", func_9(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1,
				47, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
		break;

	case 47:
		func_96(uParam1, "Paparazzo2", func_9(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0,
				48, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
		break;

	case 48:
		func_96(uParam1, "Paparazzo3", func_9(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1,
				-1, 2, 2, 0, 2359, func_97(iParam0), 0, 0);
		break;

	case 49:
		func_96(uParam1, "Paparazzo3A", func_9(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0,
				"", 0, 0, 51, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
		break;

	case 50:
		func_96(uParam1, "Paparazzo3B", func_9(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0,
				0, 51, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
		break;

	case 51:
		func_96(uParam1, "Paparazzo4", func_9(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1,
				-1, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
		break;

	case 52:
		func_96(uParam1, "Rampage1", func_9(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4,
				0, 2359, func_97(iParam0), 0, 0);
		break;

	case 54:
		func_96(uParam1, "Rampage3", func_9(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4,
				4, 0, 2359, func_97(iParam0), 1, 0);
		break;

	case 55:
		func_96(uParam1, "Rampage4", func_9(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4,
				0, 2359, func_97(iParam0), 1, 0);
		break;

	case 56:
		func_96(uParam1, "Rampage5", func_9(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53,
				4, 4, 0, 2359, func_97(iParam0), 0, 0);
		break;

	case 53:
		func_96(uParam1, "Rampage2", func_9(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0,
				"rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
		break;

	case 57:
		func_96(uParam1, "TheLastOne", func_9(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0,
				1, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
		break;

	case 58:
		func_96(uParam1, "Tonya1", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0,
				"ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
		break;

	case 59:
		func_96(uParam1, "Tonya2", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48,
				"ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
		break;

	case 60:
		func_96(uParam1, "Tonya3", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359,
				func_97(iParam0), 0, 1);
		break;

	case 61:
		func_96(uParam1, "Tonya4", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359,
				func_97(iParam0), 0, 1);
		break;

	case 62:
		func_96(uParam1, "Tonya5", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1,
				4, 2, 0, 2359, func_97(iParam0), 0, 1);
		break;

	default: break;
	}
}

// Position - 0x88EA
void func_96(var *uParam0, char *sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7,
			 int iParam10, char *sParam11, int iParam12, int iParam13, char *sParam14, int iParam15, int iParam16,
			 int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23,
			 int iParam24) {
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = {Param2};
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = {vParam7};
	uParam0->f_9 = iParam10;
	StringCopy(&uParam0->f_10, sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&uParam0->f_16, sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = iParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

// Position - 0x897B
int func_97(int iParam0) {
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

// Position - 0x8CC1
int func_98(int iParam0) {
	var uVar0;

	if (func_127(&uParam0->f_1)) {
		if (!gameplay::is_string_null_or_empty(&uParam0->f_9)) {
			func_117(1);
			func_115(uParam0, 1, func_116(*uParam0));
		}
		if (uParam0->f_27) {
			if (func_114(*uParam0)) {
				while (!ped::is_ped_on_foot(player::player_ped_id())) {
					func_130();
					system::wait(0);
				}
			}
		}
		func_99(*uParam0);
		uVar0 = system::start_new_script_with_args(&uParam0->f_1, uParam0, 61, 20500);
		script::set_script_as_no_longer_needed(&iParam0->f_1);
		if (cutscene::has_cutscene_loaded()) {
			func_268("Initial cutscene loaded and passing to RC mission.");
			cutscene::_0x8D9DF6ECA8768583(uVar0);
		}
		else {
			func_268("Initial cutscene wasn't loaded in time to pass to RC "
					 "mission.");
			cutscene::remove_cutscene();
		}
		return 1;
	}
	return 0;
}

// Position - 0x8D65
void func_99(int iParam0) {
	struct<2> Var0;

	func_113();
	if (!ped::is_ped_injured(player::player_ped_id())) {
		ped::set_ped_config_flag(player::player_ped_id(), 32, 0);
		ped::set_ped_config_flag(player::player_ped_id(), 250, 0);
	}
	if (func_112(iParam0)) {
		ped::remove_ped_helmet(player::player_ped_id(), 0);
	}
	player::set_all_random_peds_flee(player::player_id(), 1);
	ui::clear_additional_text(0, 1);
	ui::clear_additional_text(3, 1);
	ui::clear_additional_text(2, 1);
	if (Global_36912 == 1) {
		if (func_111(player::player_ped_id())) {
			func_102(player::player_ped_id());
		}
	}
	if (!func_149()) {
		if (iParam0 < 63) {
			func_100(iParam0);
			Var0 = {func_9(iParam0)};
			ui::set_mission_name(1, &Var0);
		}
	}
}

// Position - 0x8E00
void func_100(int iParam0) {
	if (iParam0 < 63) {
		func_101();
		Global_69957 = iParam0;
		Global_69956 = 0;
		Global_69959 = 7;
	}
}

// Position - 0x8E26
void func_101() {
	if (Global_69956 != 6) {
	}
	if (Global_69961) {
		ui::reset_hud_component_values(15);
		Global_69961 = 0;
		Global_17290.f_7899 = 0;
	}
	Global_69956 = 6;
	Global_69958 = -1;
	Global_69957 = -1;
}

// Position - 0x8E5E
void func_102(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 0) {
		return;
	}
	if (!entity::does_entity_exist(iParam0)) {
		return;
	}
	iVar0 = func_110(iParam0);
	if (iVar0 != -1) {
		iVar1 = Global_36715[iVar0 /*5*/];
		func_105(1, iVar1, 1);
		return;
	}
	iVar2 = func_104(iParam0);
	if (iVar2 == -1) {
		return;
	}
	func_103(iVar2);
}

// Position - 0x8EB7
void func_103(int iParam0) {
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

// Position - 0x8F3A
int func_104(int iParam0) {
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

// Position - 0x8F6B
void func_105(int iParam0, int iParam1, int iParam2) { func_106(iParam0, iParam1, iParam2, 0, 0); }

// Position - 0x8F7F
void func_106(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
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
	if (func_108(iParam0, iParam1, iParam2)) {
		return;
	}
	iVar0 = func_107();
	if (iVar0 == -1) {
		return;
	}
	Global_36796[iVar0 /*5*/] = iParam0;
	Global_36796[iVar0 /*5*/].f_1 = iParam1;
	Global_36796[iVar0 /*5*/].f_2 = iParam2;
	Global_36796[iVar0 /*5*/].f_3 = iParam3;
	Global_36796[iVar0 /*5*/].f_4 = iParam4;
}

// Position - 0x8FF6
int func_107() {
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

// Position - 0x9027
bool func_108(int iParam0, int iParam1, int iParam2) {
	if (func_109(iParam0, iParam1, iParam2) == -1) {
		return false;
	}
	return true;
}

// Position - 0x9042
int func_109(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x908E
int func_110(int iParam0) {
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

// Position - 0x90D7
bool func_111(int iParam0) {
	if (func_172(iParam0)) {
		if (!ped::is_ped_injured(iParam0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x90F7
bool func_112(int iParam0) {
	switch (iParam0) {
	case 5:
	case 6:
	case 38:
	case 39:
	case 40:
	case 41:
	case 49:
	case 50:
	case 60:
	case 61: return false;
	}
	return true;
}

// Position - 0x914A
void func_113() {
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

// Position - 0x91C7
bool func_114(int iParam0) {
	switch (iParam0) {
	case 5:
	case 6:
	case 14:
	case 16:
	case 38:
	case 39:
	case 40:
	case 41:
	case 49:
	case 50: return false;
	}
	return true;
}

// Position - 0x921A
void func_115(var *uParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6) {
		if (func_172(uParam0->f_28[iVar0])) {
			entity::set_entity_proofs(uParam0->f_28[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5) {
		if (func_172(uParam0->f_35[iVar0])) {
			entity::set_entity_proofs(uParam0->f_35[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6) {
		if (func_172(uParam0->f_41[iVar0])) {
			entity::set_entity_proofs(uParam0->f_41[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		entity::set_entity_proofs(player::player_ped_id(), iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		entity::set_entity_invincible(player::player_ped_id(), iParam1);
		if (iParam2) {
			weapon::set_current_ped_weapon(player::player_ped_id(), joaat("weapon_unarmed"), 1);
		}
	}
}

// Position - 0x930F
int func_116(int iParam0) {
	switch (iParam0) {
	case 5:
	case 6:
	case 14:
	case 38:
	case 39:
	case 40:
	case 41:
	case 49:
	case 50:
	case 52:
	case 53:
	case 54:
	case 55:
	case 56: return 0;
	}
	return 1;
}

// Position - 0x937A
void func_117(int iParam0) {
	int iVar0;

	iVar0 = player::get_player_index();
	if (!player::is_player_dead(iVar0)) {
		if (iParam0) {
		}
		player::set_player_control(iVar0, iParam0, 16);
		player::set_player_control(iVar0, iParam0, 32);
	}
	func_118(1, 1, 0, 0);
}

// Position - 0x93B6
void func_118(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0) {
		player::special_ability_deactivate_fast(player::player_id());
		player::set_all_random_peds_flee(player::player_id(), 1);
		player::set_police_ignore_player(player::player_id(), 1);
		func_126(1);
		ui::_0xA8FDB297A8D25FBA();
		ui::_0xFDB423997FA30340();
		if (Global_14443.f_1 > 3) {
			if (audio::is_mobile_phone_call_ongoing()) {
				audio::stop_scripted_conversation(0);
			}
			if (!func_125()) {
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_124(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		Global_69700 = 1;
	}
	else {
		func_126(0);
		ui::_0xE1CD1E48E025E661();
		Global_55828 = 0;
		if (iParam1) {
			graphics::_0x03FC694AE06C5A20();
		}
		player::set_all_random_peds_flee(player::player_id(), 0);
		player::set_police_ignore_player(player::player_id(), 0);
		func_124(0, iParam3, iParam2, 0);
		if (network::network_is_game_in_progress()) {
			if (!ped::is_ped_injured(player::player_ped_id()) && !func_122(player::player_id()) &&
				!func_120(player::player_id(), 0) && !func_119()) {
				entity::set_entity_invincible(player::player_ped_id(), 0);
			}
		}
		else if (!ped::is_ped_injured(player::player_ped_id()) && !func_122(player::player_id())) {
			entity::set_entity_invincible(player::player_ped_id(), 0);
		}
		Global_69700 = 0;
	}
}

// Position - 0x94CF
bool func_119() { return gameplay::is_bit_set(Global_1591201[player::player_id() /*602*/].f_39.f_18, 14); }

// Position - 0x94EC
bool func_120(int iParam0, int iParam1) {
	bool bVar0;

	if (iParam0 == player::player_id()) {
		bVar0 = func_121(-1, 0) == 8;
	}
	else {
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1) {
		if (network::network_is_player_active(iParam0)) {
			bVar0 = player::get_player_team(iParam0) == 8;
		}
	}
	return bVar0;
}

// Position - 0x9537
int func_121(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1) {
		iVar1 = func_49();
	}
	if (Global_1315213[iVar1] == 1) {
		if (iParam1) {
		}
		iVar0 = 8;
	}
	else {
		iVar0 = Global_1312729[iVar1];
		if (iParam1) {
		}
	}
	return iVar0;
}

// Position - 0x9578
int func_122(int iParam0) {
	if (func_120(iParam0, 0)) {
		return 1;
	}
	if (func_123()) {
		if (iParam0 == player::player_id()) {
			return 1;
		}
	}
	if (gameplay::is_bit_set(Global_2421664[iParam0 /*358*/].f_198, 2)) {
		return 1;
	}
	return 0;
}

// Position - 0x95BA
bool func_123() { return gameplay::is_bit_set(Global_2359301, 3); }

// Position - 0x95CB
int func_124(int iParam0, int iParam1, var uParam2, int iParam3) {
	int iVar0;

	iVar0 = 0;
	if (gameplay::is_pc_version()) {
		if (cutscene::_0xA0FE76168A189DDB() != iParam0 && uParam2) {
			cutscene::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

// Position - 0x95FE
int func_125() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x9625
void func_126(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_2313, 13);
	}
	else {
		gameplay::clear_bit(&Global_2313, 13);
	}
}

// Position - 0x9648
bool func_127(char *sParam0) {
	if (!gameplay::is_string_null_or_empty(sParam0)) {
		script::request_script(sParam0);
		while (!script::has_script_loaded(sParam0)) {
			script::request_script(sParam0);
			system::wait(0);
		}
		return true;
	}
	func_268("Attempting to launch invalid script file [TERMINATING]");
	return false;
}

// Position - 0x9685
void func_128() {
	Global_14611 = 0;
	func_129();
}

// Position - 0x9695
void func_129() {
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

// Position - 0x96EC
void func_130() {
	func_135();
	func_134();
	func_131();
}

// Position - 0x9700
void func_131() {
	if (player::is_player_playing(player::player_id())) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (func_132(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 10.5f, 1, 1056964608, 0, 1, 0)) {
				if (ai::get_script_task_status(player::player_ped_id(), -828834893) != 1) {
					ai::task_leave_any_vehicle(player::player_ped_id(), 0, 0);
				}
			}
		}
	}
}

// Position - 0x9758
bool func_132(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6) {
	controls::disable_control_action(0, 71, 1);
	controls::disable_control_action(0, 72, 1);
	controls::disable_control_action(0, 76, 1);
	controls::disable_control_action(0, 73, 1);
	controls::disable_control_action(0, 59, 1);
	controls::disable_control_action(0, 60, 1);
	if (iParam5) {
		controls::disable_control_action(0, 75, 1);
	}
	controls::disable_control_action(0, 80, 1);
	if (!iParam6) {
		controls::disable_control_action(0, 69, 1);
		controls::disable_control_action(0, 70, 1);
		controls::disable_control_action(0, 68, 1);
	}
	controls::disable_control_action(0, 74, 1);
	controls::disable_control_action(0, 86, 1);
	controls::disable_control_action(0, 81, 1);
	controls::disable_control_action(0, 82, 1);
	controls::disable_control_action(0, 138, 1);
	controls::disable_control_action(0, 136, 1);
	controls::disable_control_action(0, 114, 1);
	controls::disable_control_action(0, 107, 1);
	controls::disable_control_action(0, 110, 1);
	controls::disable_control_action(0, 89, 1);
	controls::disable_control_action(0, 89, 1);
	controls::disable_control_action(0, 87, 1);
	controls::disable_control_action(0, 88, 1);
	controls::disable_control_action(0, 113, 1);
	controls::disable_control_action(0, 115, 1);
	controls::disable_control_action(0, 116, 1);
	controls::disable_control_action(0, 117, 1);
	controls::disable_control_action(0, 118, 1);
	controls::disable_control_action(0, 119, 1);
	controls::disable_control_action(0, 131, 1);
	controls::disable_control_action(0, 132, 1);
	controls::disable_control_action(0, 123, 1);
	controls::disable_control_action(0, 126, 1);
	controls::disable_control_action(0, 129, 1);
	controls::disable_control_action(0, 130, 1);
	controls::disable_control_action(0, 133, 1);
	controls::disable_control_action(0, 134, 1);
	cam::_0x17FCA7199A530203();
	func_133(iParam0);
	if (gameplay::get_game_timer() - Global_29 > 500) {
		vehicle::_set_vehicle_halt(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = gameplay::get_game_timer();
	if (!entity::is_entity_dead(iParam0, 0)) {
		if (gameplay::absf(entity::get_entity_speed(iParam0)) <= fParam3) {
			return true;
		}
	}
	return false;
}

// Position - 0x98E7
void func_133(int iParam0) {
	if (vehicle::_get_has_vehicle_got_rocket_boost(iParam0)) {
		if (vehicle::_is_vehicle_rocket_boost_active(iParam0)) {
			vehicle::_set_rocket_boost_active(iParam0, 0);
		}
	}
}

// Position - 0x9908
void func_134() {
	controls::disable_control_action(0, 21, 1);
	controls::disable_control_action(0, 37, 1);
	controls::disable_control_action(0, 25, 1);
	controls::disable_control_action(0, 141, 1);
	controls::disable_control_action(0, 140, 1);
	controls::disable_control_action(0, 24, 1);
	controls::disable_control_action(0, 257, 1);
	controls::disable_control_action(0, 22, 1);
	controls::disable_control_action(0, 23, 1);
}

// Position - 0x9959
void func_135() {
	if (Global_14443.f_1 != 1) {
		if (func_138(0)) {
			func_136(0);
		}
		gameplay::set_bit(&Global_2314, 2);
	}
}

// Position - 0x9981
void func_136(int iParam0) {
	if (Global_14604) {
		func_137(0, 0);
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
	if (!func_125()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x99F1
void func_137(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_138(0)) {
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

// Position - 0x9A65
bool func_138(int iParam0) {
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

// Position - 0x9ABF
bool func_139(int iParam0) {
	if (iParam0 == 52 || iParam0 == 53 || iParam0 == 54 || iParam0 == 55 || iParam0 == 56) {
		return true;
	}
	return false;
}

// Position - 0x9B00
int func_140(int iParam0) {
	int iVar0;

	if (iParam0 == -1) {
		iParam0 = func_147();
	}
	if (iParam0 == -1) {
		return 0;
	}
	iVar0 = func_142(&Global_100787[iParam0 /*10*/].f_9, 1, 4, 0, 0);
	if (iVar0 != 1) {
		return 0;
	}
	func_141(iParam0);
	return 1;
}

// Position - 0x9B45
void func_141(int iParam0) {
	Global_100787[iParam0 /*10*/].f_4 = 1;
	Global_100787[iParam0 /*10*/].f_5 = 0;
	Global_100787[iParam0 /*10*/].f_6 = 0;
	Global_100787[iParam0 /*10*/] = 0;
}

// Position - 0x9B77
int func_142(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
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
		if (func_146(0)) {
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
		if (!func_144(iParam2)) {
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
			func_143(iParam0, iParam4);
		}
	}
	return 2;
}

// Position - 0x9CAE
void func_143(int *iParam0, int iParam1) {
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

// Position - 0x9CFD
bool func_144(int iParam0) { return func_145(iParam0, Global_35781); }

// Position - 0x9D0E
int func_145(int iParam0, int iParam1) {
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

// Position - 0x9EEF
bool func_146(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_144(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x9F11
int func_147() { return func_148(script::get_this_script_name(), 0); }

// Position - 0x9F22
int func_148(char *sParam0, int iParam1) {
	int iVar0;
	char *sVar1;
	int iVar33;
	int iVar34;

	iVar33 = gameplay::get_hash_key(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63) {
		iVar0 = iVar34;
		func_95(iVar0, &sVar1);
		if (gameplay::get_hash_key(sVar1) == iVar33) {
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0) {
	}
	return -1;
}

// Position - 0x9F6B
int func_149() {
	if (Global_91491 == 10 || Global_91491 == 9) {
		return 1;
	}
	return 0;
}

// Position - 0x9F8F
void func_150(int iParam0, int *iParam1) {
	switch (iParam0) {
	case 0:
		*iParam1 = func_151(-1604.668f, 5239.1f, 3.01f, 0);
		ui::set_blip_sprite(*iParam1, 66);
		ui::set_blip_colour(*iParam1, 42);
		break;

	case 1:
		*iParam1 = func_151(-1592.84f, 5214.04f, 3.01f, 0);
		ui::set_blip_sprite(*iParam1, 400);
		ui::set_blip_colour(*iParam1, 42);
		break;

	case 2:
	case 3:
		*iParam1 = func_151(190.26f, -956.35f, 29.63f, 0);
		if (gameplay::is_bit_set(Global_101700.f_17533[2 /*6*/], 3) ||
			gameplay::is_bit_set(Global_101700.f_17533[4 /*6*/], 3) ||
			gameplay::is_bit_set(Global_101700.f_17533[4 /*6*/], 3)) {
			ui::set_blip_sprite(*iParam1, 381);
		}
		else {
			ui::set_blip_sprite(*iParam1, 66);
		}
		if (iParam0 == 2) {
			ui::set_blip_colour(*iParam1, 42);
		}
		else {
			ui::set_blip_colour(*iParam1, 44);
		}
		break;

	case 4:
		*iParam1 = func_151(414f, -761f, 29f, 0);
		if (gameplay::is_bit_set(Global_101700.f_17533[2 /*6*/], 3) ||
			gameplay::is_bit_set(Global_101700.f_17533[3 /*6*/], 3)) {
			ui::set_blip_sprite(*iParam1, 381);
		}
		else {
			ui::set_blip_sprite(*iParam1, 66);
		}
		ui::set_blip_colour(*iParam1, 43);
		break;

	case 9:
		*iParam1 = func_151(-1622.89f, 4204.87f, 83.3f, 0);
		ui::set_blip_sprite(*iParam1, 66);
		ui::set_blip_colour(*iParam1, 42);
		break;

	case 11:
	case 12:
	case 13:
		if (iParam0 == 11) {
			*iParam1 = func_151(1835.53f, 4705.86f, 38.1f, 0);
		}
		else if (iParam0 == 12) {
			*iParam1 = func_151(1826.13f, 4698.88f, 38.92f, 0);
		}
		else {
			*iParam1 = func_151(637.02f, 119.7093f, 89.5f, 0);
		}
		ui::set_blip_sprite(*iParam1, 206);
		ui::set_blip_colour(*iParam1, 42);
		break;

	case 18:
	case 19:
		if (iParam0 == 18) {
			*iParam1 = func_151(-954.19f, -2760.05f, 14.64f, 0);
		}
		else {
			*iParam1 = func_151(-63.8f, -809.5f, 321.8f, 0);
		}
		ui::set_blip_sprite(*iParam1, 382);
		ui::set_blip_colour(*iParam1, 43);
		break;

	case 21:
	case 23:
		if (iParam0 == 21) {
			*iParam1 = func_151(-1877.82f, -440.649f, 45.05f, 0);
		}
		else {
			*iParam1 = func_151(-915.6f, 6139.2f, 5.5f, 0);
		}
		if (gameplay::is_bit_set(Global_101700.f_17533[21 /*6*/], 3) ||
			gameplay::is_bit_set(Global_101700.f_17533[22 /*6*/], 3) ||
			gameplay::is_bit_set(Global_101700.f_17533[23 /*6*/], 3)) {
			ui::set_blip_sprite(*iParam1, 405);
		}
		else {
			ui::set_blip_sprite(*iParam1, 66);
		}
		if (iParam0 == 21) {
			ui::set_blip_colour(*iParam1, 42);
		}
		else {
			ui::set_blip_colour(*iParam1, 43);
		}
		break;

	case 27:
		*iParam1 = func_151(-1104.93f, 291.25f, 64.3f, 0);
		ui::set_blip_sprite(*iParam1, 66);
		ui::set_blip_colour(*iParam1, 44);
		break;

	case 30:
		*iParam1 = func_151(-1104.93f, 291.25f, 64.3f, 0);
		ui::set_blip_sprite(*iParam1, 385);
		ui::set_blip_colour(*iParam1, 44);
		break;

	case 34:
		*iParam1 = func_151(-303.82f, 6211.29f, 31.05f, 0);
		ui::set_blip_sprite(*iParam1, 386);
		ui::set_blip_colour(*iParam1, 44);
		break;

	case 43:
		*iParam1 = func_151(-44.75f, -1288.67f, 28.21f, 0);
		ui::set_blip_sprite(*iParam1, 149);
		ui::set_blip_colour(*iParam1, 44);
		break;

	case 46:
		*iParam1 = func_151(-149.75f, 285.81f, 93.67f, 0);
		ui::set_blip_sprite(*iParam1, 66);
		ui::set_blip_colour(*iParam1, 43);
		break;

	case 47:
	case 48:
		if (iParam0 == 47) {
			*iParam1 = func_151(-70.71f, 301.43f, 106.79f, 0);
		}
		else {
			*iParam1 = func_151(-257.22f, 292.85f, 90.63f, 0);
		}
		ui::set_blip_sprite(*iParam1, 389);
		ui::set_blip_colour(*iParam1, 43);
		break;
	}
}

// Position - 0xA416
int func_151(vector3 vParam0, int iParam3) {
	int iVar0;

	iVar0 = ui::add_blip_for_coord(vParam0);
	ui::set_blip_scale(iVar0, func_152(network::network_is_game_in_progress(), 1f, 1f));
	ui::set_blip_route(iVar0, iParam3);
	return iVar0;
}

// Position - 0xA442
var func_152(bool bParam0, float fParam1, float fParam2) {
	if (bParam0) {
		return fParam1;
	}
	return fParam2;
}

// Position - 0xA459
bool func_153(int iParam0) {
	switch (iParam0) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 9:
	case 11:
	case 12:
	case 13:
	case 18:
	case 19:
	case 21:
	case 23:
	case 27:
	case 30:
	case 34:
	case 43:
	case 46:
	case 47:
	case 48: return true;
	}
	return false;
}

// Position - 0xA4E8
int func_154(var *uParam0) {
	if (*uParam0 == 18) {
		if (entity::is_entity_in_angled_area(player::player_ped_id(), -954.5357f, -2760.553f, 11.91636f, -947.6847f,
											 -2749.719f, 15.63161f, 26f, 0, 1, 0)) {
			if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				func_268("Special launching Extreme 2");
				return 1;
			}
			else if (!func_155(player::player_ped_id(), -828834893) &&
					 func_172(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0)) &&
					 func_132(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 3f, 1, 1056964608, 0, 1, 0)) {
				ai::task_leave_any_vehicle(player::player_ped_id(), 0, 0);
			}
		}
	}
	return 0;
}

// Position - 0xA58F
int func_155(int iParam0, int iParam1) {
	if (func_111(iParam0)) {
		if (ai::get_script_task_status(iParam0, iParam1) == 1 || ai::get_script_task_status(iParam0, iParam1) == 0) {
			return 1;
		}
	}
	return 0;
}

// Position - 0xA5C2
int func_156(var *uParam0, int iParam1) {
	switch (uParam0->f_16) {
	case 0:
		if (*uParam0 == 12) {
			if (entity::is_entity_in_angled_area(player::player_ped_id(), 1826.631f, 4699.115f, 35.38089f, 1812.878f,
												 4710.457f, 42.05354f, 23.75f, 0, 1, 0)) {
				if (func_172(uParam0->f_28[0])) {
					if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1),
															  entity::get_entity_coords(uParam0->f_28[0], 1), 1) < 3f) {
						if (func_162(2)) {
							if (func_160(uParam0->f_27)) {
								func_159(uParam0->f_27, *uParam0);
								func_268("ARE_RC_TRIGGER_CONDITIONS_MET: "
										 "RC_TRIG_CHAR - Used special case Eps "
										 "4 trigger.");
								return 1;
							}
						}
					}
				}
				else {
					return 0;
				}
			}
			else if (func_172(uParam0->f_28[0])) {
				if (func_158(uParam0)) {
					if (func_162(2)) {
						if (func_160(uParam0->f_27)) {
							func_159(uParam0->f_27, *uParam0);
							return 1;
						}
					}
				}
			}
			else {
				return 0;
			}
		}
		else if (*uParam0 == 21) {
			if (!entity::is_entity_in_angled_area(player::player_ped_id(), -1895.788f, -434.0192f, 40.30126f,
												  -1883.038f, -444.0811f, 50.24509f, 8.5f, 0, 1, 0) &&
					!entity::is_entity_in_angled_area(player::player_ped_id(), -1883.576f, -443.6434f, 36.40581f,
													  -1874.826f, -448.0797f, 49.15162f, 8.5f, 0, 1, 0) &&
					!entity::is_entity_in_angled_area(player::player_ped_id(), -1876.343f, -446.2214f, 35.64637f,
													  -1866.952f, -456.5601f, 49.0442f, 8.5f, 0, 1, 0) &&
					!entity::is_entity_in_angled_area(player::player_ped_id(), -1882.997f, -438.9922f, 44.17246f,
													  -1874.079f, -443.342f, 48.69179f, 0.75f, 0, 1, 0) ||
				entity::is_entity_in_angled_area(player::player_ped_id(), -1878.822f, -441.7655f, 44.9175f, -1877.941f,
												 -439.9522f, 47.28982f, 1.25f, 0, 1, 0)) {
				if (func_172(uParam0->f_28[0])) {
					if (func_158(uParam0)) {
						if (func_162(2)) {
							if (func_160(uParam0->f_27)) {
								func_159(uParam0->f_27, *uParam0);
								return 1;
							}
						}
					}
				}
				else {
					return 0;
				}
			}
			else {
				return 0;
			}
		}
		else if (*uParam0 == 22) {
			if (!entity::is_entity_in_angled_area(player::player_ped_id(), 837.0731f, 1261.086f, 366.1592f, 780.8383f,
												  1260.829f, 351.405f, 17.75f, 0, 1, 0)) {
				if (func_172(uParam0->f_28[0])) {
					if (func_158(uParam0)) {
						if (func_162(2)) {
							if (func_160(uParam0->f_27)) {
								func_159(uParam0->f_27, *uParam0);
								return 1;
							}
						}
					}
				}
				else {
					return 0;
				}
			}
			else {
				return 0;
			}
		}
		else if (func_172(uParam0->f_28[0])) {
			if (func_158(uParam0)) {
				if (func_162(2)) {
					if (func_160(uParam0->f_27)) {
						func_159(uParam0->f_27, *uParam0);
						return 1;
					}
				}
			}
		}
		else {
			return 0;
		}
		break;

	case 2:
		if (func_172(uParam0->f_35[0])) {
			if (ped::is_ped_in_vehicle(player::player_ped_id(), uParam0->f_35[0], 0)) {
				if (func_162(3)) {
					func_159(uParam0->f_27, *uParam0);
					return 1;
				}
			}
			else if (iParam1 == 1) {
				func_157();
			}
		}
		else {
			return 0;
		}
		break;

	case 1:
		if (entity::does_entity_exist(uParam0->f_35[0])) {
			if (!entity::is_entity_dead(uParam0->f_35[0], 0)) {
				if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1),
														  entity::get_entity_coords(uParam0->f_35[0], 1),
														  1) < uParam0->f_15) {
					if (func_162(2)) {
						if (func_160(uParam0->f_27)) {
							func_159(uParam0->f_27, *uParam0);
							return 1;
						}
					}
				}
			}
		}
		else {
			return 0;
		}
		break;

	case 3:
		if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1),
												  uParam0->f_17[0 /*3*/], 1) < uParam0->f_15) {
			if (func_162(2)) {
				if (func_160(uParam0->f_27)) {
					func_159(uParam0->f_27, *uParam0);
					return 1;
				}
			}
		}
		else {
			return 0;
		}
		break;

	case 4:
		if (entity::is_entity_at_coord(player::player_ped_id(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], 0, 1,
									   0)) {
			if (func_162(2)) {
				if (func_160(uParam0->f_27)) {
					func_159(uParam0->f_27, *uParam0);
					return 1;
				}
			}
		}
		else {
			return 0;
		}
		break;

	case 5:
		if (*uParam0 == 6) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				if (func_172(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0))) {
					if (vehicle::is_vehicle_model(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0),
												  joaat("towtruck")) ||
						vehicle::is_vehicle_model(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0),
												  joaat("towtruck2"))) {
						if (vehicle::is_vehicle_attached_to_tow_truck(
								ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), uParam0->f_35[0])) {
							if (func_162(3)) {
								return 1;
							}
						}
					}
					else if (vehicle::is_vehicle_model(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0),
													   joaat("cargobob")) ||
							 vehicle::is_vehicle_model(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0),
													   joaat("cargobob2")) ||
							 vehicle::is_vehicle_model(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0),
													   joaat("cargobob3"))) {
						if (vehicle::does_cargobob_have_pick_up_rope(
								ped::get_vehicle_ped_is_in(player::player_ped_id(), 0)) &&
							vehicle::is_vehicle_attached_to_cargobob(
								ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), uParam0->f_35[0])) {
							if (func_162(3)) {
								return 1;
							}
						}
					}
				}
			}
		}
		else if (*uParam0 == 10) {
			if (ai::get_ped_desired_move_blend_ratio(player::player_ped_id()) >= 2f) {
				if (entity::is_entity_in_angled_area(player::player_ped_id(), 245.8885f, 371.9034f, 103.9884f,
													 241.5898f, 359.6458f, 107.3461f, 1.25f, 0, 1, 0)) {
					if (func_162(2)) {
						if (func_160(uParam0->f_27)) {
							func_159(uParam0->f_27, *uParam0);
							func_268("RC5_IN_ACTIVATION_RANGE: "
									 "RC_TRIG_LOCATE_NONAXIS - Eps 2 special "
									 "case trigger used");
							return 1;
						}
					}
				}
			}
		}
		else if (*uParam0 == 46) {
			if (entity::is_entity_in_angled_area(player::player_ped_id(), -164.2046f, 277.4866f, 91.55322f, -153.6f,
												 277.4061f, 97.33813f, 10f, 0, 1, 0)) {
				return 0;
			}
		}
		else if (*uParam0 == 31) {
			if (entity::is_entity_in_angled_area(player::player_ped_id(), 2728.948f, 4143.44f, 42.29295f, 2722.213f,
												 4144.521f, 45.43182f, 10f, 0, 1, 0)) {
				if (func_162(2)) {
					if (func_160(1)) {
						func_159(1, *uParam0);
						func_268("RC_IN_ACTIVATION_RANGE: "
								 "RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special "
								 "case vehicle launch area");
						return 1;
					}
				}
			}
		}
		else if (*uParam0 == 39) {
			if (entity::is_entity_in_angled_area(player::player_ped_id(), -992.4995f, 358.7455f, 96.3735f, -1021.94f,
												 361.8888f, 65.36148f, 30f, 0, 1, 0)) {
				if (!entity::is_entity_in_angled_area(player::player_ped_id(), -983.5426f, 369.1104f, 68.46017f,
													  -1028.566f, 395.4613f, 94.57245f, 15f, 0, 1, 0)) {
					if (!entity::is_entity_in_angled_area(player::player_ped_id(), -983.875f, 346.7556f, 68.02096f,
														  -1021.451f, 336.3458f, 93.18714f, 14.5f, 0, 1, 0)) {
						if (func_162(2)) {
							if (func_160(uParam0->f_27)) {
								func_159(uParam0->f_27, *uParam0);
								func_268("RC_IN_ACTIVATION_RANGE: "
										 "RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B "
										 "special case vehicle launch area");
								return 1;
							}
						}
					}
				}
			}
		}
		if (entity::is_entity_in_angled_area(player::player_ped_id(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/],
											 uParam0->f_24, 0, 1, 0)) {
			if (*uParam0 == 45) {
				if (entity::is_entity_in_angled_area(player::player_ped_id(), 2338.697f, 2597.037f, 45.39052f,
													 2324.003f, 2597.185f, 47.74961f, 8.5f, 0, 1, 0)) {
					return 0;
				}
			}
			if (func_162(2)) {
				if (func_160(uParam0->f_27)) {
					func_159(uParam0->f_27, *uParam0);
					return 1;
				}
			}
		}
		else {
			return 0;
		}
		break;

	case 6: break;
	}
	return 0;
}

// Position - 0xADA5
void func_157() { func_27(&Global_93635.f_2311, &Global_93635, 0, 1, 1, 0); }

// Position - 0xADC0
bool func_158(var *uParam0) {
	float fVar0;

	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) && uParam0->f_27) {
		if (*uParam0 == 27 || *uParam0 == 30) {
			fVar0 = 1f;
		}
		else {
			fVar0 = 5f;
		}
		if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1),
												  entity::get_entity_coords(uParam0->f_28[0], 1),
												  1) < uParam0->f_15 + fVar0) {
			return true;
		}
	}
	else if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1),
												   entity::get_entity_coords(uParam0->f_28[0], 1), 1) < uParam0->f_15) {
		return true;
	}
	return false;
}

// Position - 0xAE4E
void func_159(int iParam0, int iParam1) {
	if (iParam0 == 1) {
		if (!func_114(iParam1)) {
			return;
		}
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			func_268("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
			if (ped::is_ped_in_any_heli(player::player_ped_id()) || ped::is_ped_in_any_plane(player::player_ped_id())) {
				func_268("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for "
						 "plane or helicopter.");
				vehicle::set_vehicle_engine_on(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 0, 1, 0);
			}
			func_130();
		}
	}
}

// Position - 0xAEB2
bool func_160(int iParam0) {
	int iVar0;

	if (player::is_player_playing(player::get_player_index())) {
		if (ped::is_ped_on_foot(player::player_ped_id())) {
			return true;
		}
		else if (iParam0) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				iVar0 = player::get_players_last_vehicle();
				if (func_161(iVar0)) {
					if (ped::is_ped_in_any_heli(player::player_ped_id()) ||
						ped::is_ped_in_any_plane(player::player_ped_id())) {
						if (!entity::has_entity_collided_with_anything(iVar0) && !entity::is_entity_in_air(iVar0) &&
							entity::get_entity_speed(iVar0) < 1f) {
							return true;
						}
					}
					else if (!entity::is_entity_in_air(iVar0)) {
						return true;
					}
				}
			}
		}
	}
	return false;
}

// Position - 0xAF49
bool func_161(int iParam0) {
	if (func_172(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (!fire::is_entity_on_fire(iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0xAF73
bool func_162(int iParam0) {
	int iVar0;

	if (player::is_player_playing(player::player_id())) {
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				iVar0 = func_90();
				if (!func_36(iVar0)) {
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_170() || Global_100747 ||
						Global_25192 || func_169() || func_168(8, -1) || func_78() || func_167() || func_166() ||
						func_165() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 1:
					if (player::is_player_being_arrested(player::player_id(), 1) || func_170() || Global_25192 ||
						func_169() || func_168(8, -1) || func_166() || func_78() || func_167() || func_165() ||
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_170() || Global_100747 ||
						Global_25192 || func_169() || func_168(8, -1) || func_166() || func_78() || func_167() ||
						func_165() || Global_101700.f_6647.f_919[iVar0] == 5 || Global_36328 != -1) {
						return false;
					}
					break;

				case 3:
					if (ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_170() || Global_100747 ||
						Global_25192 || func_169() || func_168(8, -1) || func_78() || func_167() || func_165() ||
						Global_101700.f_6647.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 4:
					if (func_170() || player::get_player_wanted_level(player::player_id()) > 0 || func_168(8, -1) ||
						func_165() || func_164() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return false;
					}
					break;

				case 5:
					if (func_168(8, -1) || func_78() || func_167() || func_164() || func_163()) {
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
							player::is_player_climbing(player::player_id()) || func_170() || Global_25192 ||
							func_169() || func_168(8, -1) || func_167() || func_166() || func_165() ||
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
						player::is_player_being_arrested(player::player_id(), 1) || func_170() || func_167() ||
						Global_100747 || Global_25192 || func_169() || Global_36912 || func_168(8, -1) || func_166() ||
						func_164() || func_165() || Global_101700.f_6647.f_919[iVar0] == 5) {
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
						player::is_player_climbing(player::player_id()) || func_170() || Global_100747 ||
						Global_25192 || func_169() || func_168(8, -1) || func_166() || func_164() || func_78() ||
						func_167() || func_165()) {
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

// Position - 0xB690
var func_163() { return Global_91530.f_1; }

// Position - 0xB69E
int func_164() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 13);
	}
	return 0;
}

// Position - 0xB6C4
int func_165() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("player_timetable_scene")) > 0) {
		return 1;
	}
	return 0;
}

// Position - 0xB6DE
int func_166() {
	if (Global_69962) {
		return 1;
	}
	else if (Global_55816 && !Global_55822) {
		return 1;
	}
	return 0;
}

// Position - 0xB708
bool func_167() { return Global_91543.f_304 > 0; }

// Position - 0xB719
var func_168(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0xB754
var func_169() { return Global_1315233; }

// Position - 0xB760
int func_170() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0xB77C
void func_171(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0xB793
bool func_172(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0xB7B4
bool func_173() {
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return true;
	}
	return false;
}

// Position - 0xB7D6
int func_174(int iParam0, vector3 vParam1, char[4] cParam4, char *sParam5, int iParam6, char *sParam7, int iParam8,
			 float fParam9) {
	var *uVar0;

	if (func_172(player::player_ped_id()) && func_172(iParam0->f_28[0]) && !func_173() &&
		gameplay::get_game_timer() - iParam0->f_60 > iParam8 &&
		func_178(player::player_ped_id(), vParam1, 1) < fParam9) {
		uVar0 = 16;
		func_177(&uVar0, iParam6, iParam0->f_28[0], sParam7, 0, 1);
		func_175(&uVar0, cParam4, sParam5, 7, 0, 0);
		iParam0->f_60 = gameplay::get_game_timer();
		return 1;
	}
	return 0;
}

// Position - 0xB85E
void func_175(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5) {
	func_176(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7) {
		if (iParam3 < 12) {
			iParam3 = 7;
		}
	}
	gameplay::set_bit(&Global_14611, 0);
	Global_15748 = iParam3;
	StringCopy(&Global_15735, sParam2, 24);
}

// Position - 0xB899
void func_176(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5) {
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

// Position - 0xB8EF
void func_177(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
	if ((*uParam0)[iParam1 /*10*/].f_7 == 1) {
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&(*uParam0)[iParam1 /*10*/].f_1, sParam3, 24);
	(*uParam0)[iParam1 /*10*/].f_7 = 1;
	(*uParam0)[iParam1 /*10*/].f_8 = iParam4;
	(*uParam0)[iParam1 /*10*/].f_9 = iParam5;
	if (!Global_69702) {
		if (!ped::is_ped_injured(iParam2)) {
			if ((*uParam0)[iParam1 /*10*/].f_8 == 0) {
				ped::set_ped_can_play_ambient_anims(iParam2, 0);
			}
			else {
				ped::set_ped_can_play_ambient_anims(iParam2, 1);
			}
		}
		if (!ped::is_ped_injured(iParam2)) {
			if ((*uParam0)[iParam1 /*10*/].f_9 == 0) {
				ped::set_ped_can_use_auto_conversation_lookat(iParam2, 0);
			}
			else {
				ped::set_ped_can_use_auto_conversation_lookat(iParam2, 1);
			}
		}
	}
}

// Position - 0xB98A
float func_178(int iParam0, vector3 vParam1, int iParam4) {
	vector3 vVar0;

	if (!entity::is_entity_dead(iParam0, 0)) {
		vVar0 = {entity::get_entity_coords(iParam0, 1)};
	}
	else {
		vVar0 = {entity::get_entity_coords(iParam0, 0)};
	}
	return gameplay::get_distance_between_coords(vVar0, vParam1, iParam4);
}

// Position - 0xB9C4
void func_179(int iParam0) {
	if (cutscene::_0xB56BBBCC2955D9CB()) {
		if (func_172(iParam0->f_28[0])) {
			cutscene::_0x2A56C06EBEF2B0D9("Dom", iParam0->f_28[0], 0);
		}
	}
}

// Position - 0xB9F1
void func_180(int *iParam0, char *sParam1, vector3 vParam2) {
	if (player::is_player_playing(player::player_id())) {
		if (!gameplay::is_string_null_or_empty(sParam1)) {
			if (Global_35781 == 17) {
				if (*iParam0 != -1) {
					func_185(iParam0);
				}
			}
			else if (func_184()) {
				if (*iParam0 != -1) {
					func_185(iParam0);
				}
			}
			else if (*iParam0 == -1) {
				if (func_178(player::player_ped_id(), vParam2, 1) <= 100f) {
					func_183(iParam0, 1);
				}
			}
			else {
				switch (func_182(*iParam0)) {
				case 1:
					if (gameplay::are_strings_equal(sParam1, "JOSH_1_INT_CONCAT")) {
						cutscene::_request_cutscene_ex(sParam1, 14, 8);
					}
					else {
						cutscene::request_cutscene(sParam1, 8);
					}
					streaming::_0xF8155A7F03DDFC8E(2);
					func_181(*iParam0, 1);
					break;

				case 2:
					cutscene::stop_cutscene(0);
					cutscene::remove_cutscene();
					streaming::_0xF8155A7F03DDFC8E(0);
					func_181(*iParam0, 0);
					break;
				}
				if (func_178(player::player_ped_id(), vParam2, 1) > 120f) {
					func_185(iParam0);
				}
			}
		}
	}
}

// Position - 0xBAE2
void func_181(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return;
	}
	if (iParam1) {
		if (Global_69698 == iParam0) {
			Global_69699 = iParam0;
		}
	}
	else if (Global_69699 == iParam0) {
		Global_69699 = -1;
	}
}

// Position - 0xBB1E
int func_182(int iParam0) {
	if (Global_69698 == iParam0) {
		if (Global_69699 == -1) {
			if (Global_69697 < gameplay::get_frame_count()) {
				return 1;
			}
		}
	}
	else if (Global_69699 == iParam0) {
		return 2;
	}
	return 0;
}

// Position - 0xBB57
void func_183(int *iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (Global_69695 < 5) {
		Global_69684[Global_69695 /*2*/] = 0;
		Global_69684[Global_69695 /*2*/].f_1 = iParam1;
		iVar0 = 0;
		while (!iVar0) {
			iVar0 = 1;
			iVar1 = 0;
			while (iVar1 < Global_69695) {
				if (Global_69684[iVar1 /*2*/] == Global_69684[Global_69695 /*2*/]) {
					Global_69684[Global_69695 /*2*/]++;
					iVar0 = 0;
				}
				iVar1++;
			}
		}
		*iParam0 = Global_69684[Global_69695 /*2*/];
		Global_69695++;
		Global_69696 = 1;
	}
	else {
		*iParam0 = -1;
	}
}

// Position - 0xBBF5
bool func_184() { return Global_89133; }

// Position - 0xBC01
void func_185(int *iParam0) {
	cutscene::stop_cutscene(0);
	cutscene::remove_cutscene();
	func_186(iParam0);
}

// Position - 0xBC18
void func_186(int *iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (*iParam0 == -1) {
		return;
	}
	if (Global_69699 == *iParam0) {
		func_181(*iParam0, 0);
	}
	if (Global_69698 == *iParam0) {
		Global_69698 = -1;
	}
	iVar0 = 0;
	iVar1 = 0;
	while (!iVar0 && iVar1 < Global_69695) {
		if (Global_69684[iVar1 /*2*/] == *iParam0) {
			iVar0 = 1;
		}
		else {
			iVar1++;
		}
	}
	if (!iVar0) {
		return;
	}
	iVar2 = iVar1;
	while (iVar2 <= Global_69695 - 2) {
		Global_69684[iVar2 /*2*/] = Global_69684[iVar2 + 1 /*2*/];
		Global_69684[iVar2 /*2*/].f_1 = Global_69684[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_69684[Global_69695 - 1 /*2*/] = -1;
	Global_69684[Global_69695 - 1 /*2*/].f_1 = 3;
	Global_69695--;
	Global_69696 = 1;
	Global_69697 = gameplay::get_frame_count();
	*iParam0 = -1;
}

// Position - 0xBD00
void func_187(int iParam0) {
	if (iParam0 == -1) {
		iParam0 = func_147();
	}
	if (iParam0 == -1) {
		return;
	}
	Global_100787[iParam0 /*10*/].f_1 = 1;
}

// Position - 0xBD28
int func_188(var *uParam0, int iParam1) {
	struct<27> Var0;

	if (Global_69702) {
		func_268("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer "
				 "[TERMINATING]");
		return 0;
	}
	func_95(*uParam0, &Var0);
	if (func_225(*uParam0) || func_223(*uParam0) || Global_69947 == 1) {
		return 1;
	}
	if (!brain::is_world_point_within_brain_activation_range()) {
		func_268("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0;
	}
	if (func_219(*uParam0)) {
		if (*uParam0 == 19) {
			func_218(uParam0->f_28[0]);
		}
		func_268("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller "
				 "[TERMINATING]");
		return 0;
	}
	if (uParam0->f_25 == 1) {
		if (!func_198(uParam0, 1, 0)) {
			return 0;
		}
	}
	else if (uParam0->f_16 == 0) {
		if (!func_198(uParam0, 0, 0)) {
			return 0;
		}
	}
	if (*uParam0 == 16 || *uParam0 == 9 || *uParam0 == 18 || *uParam0 == 22 || *uParam0 == 32 || *uParam0 == 51) {
		if (!func_196(uParam0, 1, 1)) {
			if (*uParam0 == 16) {
				func_195(uParam0);
			}
			else {
				func_193(uParam0);
			}
			return 0;
		}
	}
	else if (*uParam0 == 24) {
		if (!func_196(uParam0, 0, 1)) {
			func_193(uParam0);
			return 0;
		}
	}
	else if (*uParam0 == 6) {
		if (!func_196(uParam0, 0, 1)) {
			return 0;
		}
	}
	else if (uParam0->f_26 == 1) {
		if (!func_196(uParam0, 1, 0)) {
			func_193(uParam0);
			return 0;
		}
	}
	else if (uParam0->f_16 == 2 || uParam0->f_16 == 1) {
		if (!func_196(uParam0, 0, 0)) {
			func_193(uParam0);
			return 0;
		}
	}
	if (uParam0->f_16 == 2 || uParam0->f_16 == 1) {
		if (func_172(uParam0->f_35[0])) {
			if (!entity::is_entity_at_coord(uParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, 0, 1, 0)) {
				return 0;
			}
		}
	}
	if (*uParam0 == 10) {
		if (fire::is_explosion_in_sphere(-1, uParam0->f_17[0 /*3*/], 8f)) {
			func_268("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission "
					 "trigger [TERMINATING]");
			return 0;
		}
	}
	if (Var0.f_4 != 17) {
		if (!gameplay::is_bit_set(Var0.f_26, func_90())) {
			func_268("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player "
					 "character to launch mission");
			return 0;
		}
	}
	if (func_192(&uParam0->f_48) && iParam1) {
		func_189(uParam0->f_28[0], &uParam0->f_48, *uParam0);
	}
	return 1;
}

// Position - 0xBF9B
void func_189(int iParam0, var *uParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (func_172(iParam0)) {
		switch (uParam1->f_3) {
		case 1:
			if (func_192(uParam1)) {
				if (streaming::has_anim_dict_loaded(*uParam1)) {
					ai::clear_ped_tasks_immediately(iParam0);
					if (iParam2 != 21) {
						if (func_66(uParam1->f_5, 0f, 0f, 0f, 0)) {
							ai::task_play_anim(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
						}
						else {
							ai::open_sequence_task(&iVar0);
							if (func_191(uParam1)) {
								ai::task_play_anim_advanced(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8,
															1000f, -8f, -1, 262152, 0, 2, 0);
							}
							else {
								ai::task_play_anim_advanced(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8,
															1000f, -8f, -1, 262152, 0, 2, 0);
							}
							ai::task_play_anim_advanced(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f,
														-1, 262153, 0, 2, 0);
							ai::close_sequence_task(iVar0);
							ai::task_perform_sequence(iParam0, iVar0);
							ai::clear_sequence_task(&iVar0);
						}
					}
					else {
						ai::task_play_anim_advanced(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f,
													-8f, -1, 262153, 0, 2, 3);
					}
					uParam1->f_3 = 2;
				}
				else {
					uParam1->f_3 = 0;
				}
			}
			else {
				uParam1->f_3 = 0;
			}
			break;

		case 2:
			if (!func_191(uParam1) || !entity::is_entity_playing_anim(iParam0, *uParam1, uParam1->f_2, 3)) {
				if (func_190(iParam2) && !ped::is_ped_facing_ped(iParam0, player::player_ped_id(), 25f)) {
					ai::task_turn_ped_to_face_entity(iParam0, player::player_ped_id(), 0);
					uParam1->f_3 = 5;
				}
				else if (func_191(uParam1) && uParam1->f_4 == 0 &&
						 gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1),
															   entity::get_entity_coords(iParam0, 1), 1) < 20f) {
					uParam1->f_3 = 3;
				}
			}
			break;

		case 3:
			ai::open_sequence_task(&iVar1);
			if (func_66(uParam1->f_5, 0f, 0f, 0f, 0)) {
				ai::task_play_anim(0, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, 0, 0, 0, 0);
				ai::task_play_anim(0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
			}
			else {
				ai::task_play_anim_advanced(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152,
											0, 2, 0);
				ai::task_play_anim_advanced(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153,
											0, 2, 0);
			}
			ai::close_sequence_task(iVar1);
			ai::task_perform_sequence(iParam0, iVar1);
			ai::clear_sequence_task(&iVar1);
			uParam1->f_4 = 1;
			if (func_190(iParam2)) {
				uParam1->f_3 = 2;
			}
			else {
				uParam1->f_3 = 0;
			}
			break;

		case 5:
			if (!func_190(iParam2) || ped::is_ped_facing_ped(iParam0, player::player_ped_id(), 10f)) {
				if (func_66(uParam1->f_5, 0f, 0f, 0f, 0)) {
					ai::task_play_anim(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
				}
				else {
					ai::task_play_anim_advanced(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f,
												-1, 262153, 0, 2, 0);
				}
				uParam1->f_3 = 2;
			}
			break;
		}
	}
}

// Position - 0xC2F4
bool func_190(int iParam0) {
	if (iParam0 == 17 || iParam0 == 20) {
		return true;
	}
	return false;
}

// Position - 0xC314
bool func_191(var *uParam0) {
	if (gameplay::is_string_null_or_empty(uParam0->f_2)) {
		return false;
	}
	return true;
}

// Position - 0xC32C
bool func_192(var *uParam0) {
	if (gameplay::is_string_null_or_empty(*uParam0) || gameplay::is_string_null_or_empty(uParam0->f_1)) {
		return false;
	}
	return true;
}

// Position - 0xC351
void func_193(var *uParam0) {
	int iVar0;
	int iVar1;

	if (*uParam0 == 52) {
		func_194(&uParam0->f_41[1]);
		func_194(&uParam0->f_41[2]);
	}
	if (func_172(player::player_ped_id())) {
		iVar0 = 0;
		while (iVar0 <= uParam0->f_28 - 1) {
			if (func_111(uParam0->f_28[iVar0])) {
				if (!ped::is_ped_in_any_vehicle(uParam0->f_28[iVar0], 0)) {
					entity::set_entity_collision(uParam0->f_28[iVar0], 1, 0);
					entity::freeze_entity_position(uParam0->f_28[0], 0);
				}
				ped::set_ped_keep_task(uParam0->f_28[iVar0], 1);
				if (*uParam0 == 34) {
					if (func_172(uParam0->f_41[0])) {
						entity::set_entity_collision(uParam0->f_41[0], 1, 0);
						entity::freeze_entity_position(uParam0->f_41[0], 0);
					}
				}
				switch (*uParam0) {
				case 19: func_218(uParam0->f_28[iVar0]); break;

				case 8:
					streaming::request_anim_dict("rcmcollect_paperleadinout@");
					while (!streaming::has_anim_dict_loaded("rcmcollect_paperleadinout@")) {
						system::wait(0);
					}
					ai::open_sequence_task(&iVar1);
					ai::task_play_anim(0, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0, 0, 0, 0);
					ai::task_smart_flee_ped(0, player::player_ped_id(), 10000f, -1, 0, 0);
					ai::close_sequence_task(iVar1);
					ai::task_perform_sequence(uParam0->f_28[iVar0], iVar1);
					ai::clear_sequence_task(&iVar1);
					break;

				case 0:
				case 1:
					streaming::request_anim_dict("rcmabigail");
					while (!streaming::has_anim_dict_loaded("rcmabigail")) {
						system::wait(0);
					}
					ai::open_sequence_task(&iVar1);
					ai::task_play_anim(0, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, 0, 0, 0, 0);
					ai::task_smart_flee_ped(0, player::player_ped_id(), 10000f, -1, 0, 0);
					ai::close_sequence_task(iVar1);
					ai::task_perform_sequence(uParam0->f_28[iVar0], iVar1);
					ai::clear_sequence_task(&iVar1);
					break;

				case 32:
					streaming::request_anim_dict("rcmminute1");
					while (!streaming::has_anim_dict_loaded("rcmminute1")) {
						system::wait(0);
					}
					ai::open_sequence_task(&iVar1);
					if (iVar0 == 0) {
						ai::task_play_anim(0, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, 0, 0, 0, 0);
					}
					else {
						ai::task_play_anim(0, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, 0, 0, 0, 0);
					}
					ai::task_smart_flee_ped(0, player::player_ped_id(), 10000f, -1, 0, 0);
					ai::close_sequence_task(iVar1);
					ai::task_perform_sequence(uParam0->f_28[iVar0], iVar1);
					ai::clear_sequence_task(&iVar1);
					break;

				case 24:
					streaming::request_anim_dict("special_ped@hao@base");
					while (!streaming::has_anim_dict_loaded("special_ped@hao@base")) {
						system::wait(0);
					}
					ai::open_sequence_task(&iVar1);
					ai::task_play_anim(0, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, 0, 0, 0, 0);
					ai::task_smart_flee_ped(0, player::player_ped_id(), 10000f, -1, 0, 0);
					ai::close_sequence_task(iVar1);
					ai::task_perform_sequence(uParam0->f_28[iVar0], iVar1);
					ai::clear_sequence_task(&iVar1);
					break;

				default:
					ai::clear_ped_secondary_task(uParam0->f_28[iVar0]);
					ai::task_smart_flee_ped(uParam0->f_28[iVar0], player::player_ped_id(), 10000f, -1, 0, 0);
					break;
				}
			}
			iVar0++;
		}
	}
}

// Position - 0xC655
void func_194(int *iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		if (entity::is_entity_attached_to_any_ped(*iParam0)) {
			entity::detach_entity(*iParam0, 1, 1);
		}
		object::delete_object(iParam0);
	}
}

// Position - 0xC680
void func_195(var *uParam0) {
	int iVar0;

	if (func_172(player::player_ped_id())) {
		iVar0 = 0;
		while (iVar0 <= uParam0->f_28 - 1) {
			if (func_111(uParam0->f_28[iVar0])) {
				ped::set_ped_combat_attributes(uParam0->f_28[iVar0], 1, 0);
				ped::set_blocking_of_non_temporary_events(uParam0->f_28[iVar0], 0);
				ped::set_ped_keep_task(uParam0->f_28[iVar0], 1);
				ai::task_combat_ped(uParam0->f_28[iVar0], player::player_ped_id(), 0, 16);
				entity::set_ped_as_no_longer_needed(&uParam0->f_28[iVar0]);
			}
			iVar0++;
		}
	}
}

// Position - 0xC700
int func_196(var *uParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam1) {
		iVar1 = uParam0->f_35 - 1;
	}
	else {
		iVar1 = 0;
	}
	if (func_111(player::player_ped_id())) {
		iVar0 = 0;
		while (iVar0 <= iVar1) {
			if (entity::does_entity_exist(uParam0->f_35[iVar0])) {
				if (entity::is_entity_dead(uParam0->f_35[iVar0], 0)) {
					func_268("STEP_5_COMMON_RCfineAndInRange - "
							 "CHECK_VEHICLES_OK() - Random character vehicle "
							 "is dead [TERMINATING]");
					return 0;
				}
				if (!vehicle::is_vehicle_driveable(uParam0->f_35[iVar0], 0)) {
					func_268("STEP_5_COMMON_RCfineAndInRange - "
							 "CHECK_VEHICLES_OK() - Random character vehicle "
							 "is not driveable [TERMINATING]");
					return 0;
				}
				if (entity::has_entity_been_damaged_by_entity(uParam0->f_35[iVar0], player::player_ped_id(), 0)) {
					func_268("STEP_5_COMMON_RCfineAndInRange - "
							 "CHECK_VEHICLES_OK() - Random character vehicle "
							 "has been damaged by player [TERMINATING]");
					return 0;
				}
				if (entity::get_entity_health(uParam0->f_35[iVar0]) < 850) {
					func_268("STEP_5_COMMON_RCfineAndInRange - "
							 "CHECK_VEHICLES_OK() - Random character vehicle "
							 "health is less than 850 [TERMINATING]");
					return 0;
				}
				if (iParam2) {
					if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						if (entity::is_entity_touching_entity(uParam0->f_35[iVar0], player::player_ped_id()) &&
							entity::get_entity_speed(player::player_ped_id()) > 5f) {
							func_268("STEP_5_COMMON_RCfineAndInRange - "
									 "CHECK_VEHICLES_OK() - Random character "
									 "vehicle has collided with the player "
									 "vehicle at speed [TERMINATING]");
							return 0;
						}
						iVar2 = player::get_players_last_vehicle();
						if (func_161(iVar2)) {
							if (entity::get_entity_model(iVar2) == joaat("towtruck") ||
								entity::get_entity_model(iVar2) == joaat("towtruck2")) {
								if (func_161(uParam0->f_35[iVar0])) {
									if (vehicle::is_vehicle_attached_to_tow_truck(iVar2, uParam0->f_35[iVar0])) {
										func_268("STEP_5_COMMON_RCfineAndInRange - "
												 "CHECK_VEHICLES_OK() - Random "
												 "character vehicle is being towed "
												 "by player [TERMINATING]");
										return 0;
									}
								}
							}
						}
					}
					else {
						iVar3 = player::get_players_last_vehicle();
						if (func_161(iVar3)) {
							if (entity::is_entity_touching_entity(uParam0->f_35[iVar0], iVar3) &&
								entity::get_entity_speed(iVar3) > 6f) {
								func_268("STEP_5_COMMON_RCfineAndInRange - "
										 "CHECK_VEHICLES_OK() - Random "
										 "character vehicle has collided with "
										 "the player's last known vehicle at "
										 "speed (player bailed out?) "
										 "[TERMINATING]");
								return 0;
							}
						}
						if (*uParam0 == 16) {
							if (func_197(player::player_ped_id(), uParam0->f_35[iVar0])) {
								func_268("STEP_5_COMMON_RCfineAndInRange - "
										 "CHECK_VEHICLES_OK() - Player "
										 "attempting to jack Epsilon vehicle "
										 "[TERMINATING]");
								return 0;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

// Position - 0xC8BE
bool func_197(int iParam0, int iParam1) {
	int iVar0;

	if (!ped::is_ped_injured(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam1, 0)) {
			iVar0 = ped::get_vehicle_ped_is_using(iParam0);
			if (iVar0 == iParam1) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0xC8EE
int func_198(var *uParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (iParam1) {
		iVar1 = uParam0->f_28 - 1;
	}
	else {
		iVar1 = 0;
	}
	if (*uParam0 == 16) {
		iParam2 = 1;
	}
	if (*uParam0 == 30) {
		iParam2 = 1;
	}
	if (func_111(player::player_ped_id())) {
		iVar0 = 0;
		while (iVar0 <= iVar1) {
			if (entity::does_entity_exist(uParam0->f_28[iVar0])) {
				if (!ped::is_ped_injured(uParam0->f_28[iVar0])) {
					if (ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
						if (entity::is_entity_touching_entity(player::player_ped_id(), uParam0->f_28[iVar0])) {
							if (iParam2 == 0) {
								func_193(uParam0);
							}
							else {
								func_195(uParam0);
							}
							if (func_173()) {
								func_128();
							}
							func_268("STEP_5_COMMON_RCfineAndInRange - Random "
									 "character is being pushed by car "
									 "[TERMINATING]");
							return 0;
						}
					}
					if (entity::has_entity_been_damaged_by_any_ped(uParam0->f_28[iVar0]) ||
						entity::has_entity_been_damaged_by_any_vehicle(uParam0->f_28[iVar0]) ||
						entity::has_entity_been_damaged_by_any_object(uParam0->f_28[iVar0])) {
						if (iParam2 == 0) {
							func_193(uParam0);
						}
						else {
							func_195(uParam0);
						}
						func_268("STEP_5_COMMON_RCfineAndInRange - Random "
								 "character has been damaged by something "
								 "[TERMINATING]");
						return 0;
					}
					if (ped::is_ped_ragdoll(uParam0->f_28[iVar0])) {
						if (entity::is_entity_at_entity(uParam0->f_28[iVar0], player::player_ped_id(), 3f, 3f, 3f, 0, 1,
														0)) {
							if (iParam2 == 0) {
								func_193(uParam0);
							}
							else {
								func_195(uParam0);
							}
							func_268("STEP_5_COMMON_RCfineAndInRange - Random "
									 "character is in ragdoll [TERMINATING]");
							return 0;
						}
					}
					if (func_217(*uParam0)) {
						if (!func_139(*uParam0)) {
							if (func_212(uParam0->f_28[iVar0], 1, 0, 0, 0)) {
								if (iParam2 == 0) {
									func_193(uParam0);
								}
								else {
									func_195(uParam0);
								}
								func_268("STEP_5_COMMON_RCfineAndInRange - "
										 "Player is shooting near the Random "
										 "Character [TERMINATING]");
								return 0;
							}
						}
						if (fire::is_explosion_in_sphere(-1, entity::get_entity_coords(uParam0->f_28[iVar0], 1), 15f)) {
							if (iParam2 == 0) {
								func_193(uParam0);
							}
							else {
								func_195(uParam0);
							}
							func_268("STEP_5_COMMON_RCfineAndInRange - There "
									 "was an explosion near the Random "
									 "Character [TERMINATING]");
							return 0;
						}
						if (func_200(uParam0->f_28[iVar0], 1126825984)) {
							if (iParam2 == 0) {
								func_193(uParam0);
							}
							else {
								func_195(uParam0);
							}
							func_268("STEP_5_COMMON_RCfineAndInRange - Random "
									 "character is in combat [TERMINATING]");
							return 0;
						}
					}
					if (!func_199(*uParam0)) {
						if (fire::is_explosion_in_sphere(-1, entity::get_entity_coords(uParam0->f_28[iVar0], 1), 5f)) {
							if (iParam2 == 0) {
								func_193(uParam0);
							}
							else {
								func_195(uParam0);
							}
							func_268("STEP_5_COMMON_RCfineAndInRange - There "
									 "was an explosion near the Random "
									 "Character [TERMINATING]");
							return 0;
						}
						if (player::get_player_wanted_level(player::player_id()) > 0) {
							if (iParam2 == 0) {
								func_193(uParam0);
							}
							else {
								func_195(uParam0);
							}
							func_268("STEP_5_COMMON_RCfineAndInRange - Player "
									 "has a wanted level [TERMINATING]");
							return 0;
						}
					}
				}
				else {
					func_268("STEP_5_COMMON_RCfineAndInRange - Random "
							 "character injured / dead [TERMINATING]");
					if (*uParam0 == 34) {
						if (func_172(uParam0->f_41[0])) {
							entity::set_entity_collision(uParam0->f_41[0], 1, 0);
							entity::freeze_entity_position(uParam0->f_41[0], 0);
						}
					}
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

// Position - 0xCBAA
int func_199(int iParam0) {
	if (iParam0 == 2 || iParam0 == 3 || iParam0 == 52 || iParam0 == 53) {
		return 1;
	}
	return 0;
}

// Position - 0xCBDE
bool func_200(int iParam0, float fParam1) {
	float fVar0;

	if (func_172(player::player_ped_id()) && func_172(iParam0)) {
		if (func_211(iParam0) || player::is_player_targetting_entity(player::player_id(), iParam0)) {
			if (weapon::is_ped_armed(player::player_ped_id(), 6)) {
				fVar0 = 40f;
			}
			else {
				fVar0 = 3f;
			}
			if (entity::is_entity_at_entity(player::player_ped_id(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0)) {
				if (func_201(iParam0, fParam1)) {
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0xCC54
bool func_201(int iParam0, float fParam1) { return func_202(iParam0, player::player_ped_id(), fParam1, 1, 250, 7); }

// Position - 0xCC6C
bool func_202(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;
	vector3 vVar1;
	int iVar4;

	iVar4 = func_210(iParam0, iParam1);
	if (!func_172(iParam0) || !func_172(iParam1)) {
		if (iVar4 != -1) {
			func_209(&Local_37[iVar4 /*4*/]);
		}
		return false;
	}
	if (!func_206(iParam0, iParam1, fParam2, iParam3)) {
		return false;
	}
	if (iVar4 == -1) {
		iVar4 = func_205();
		if (iVar4 == -1) {
			return false;
		}
		Local_37[iVar4 /*4*/].f_1 = iParam0;
		Local_37[iVar4 /*4*/].f_2 = iParam1;
	}
	vVar1 = {ped::get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f)};
	iVar0 = func_203(&Local_37[iVar4 /*4*/], vVar1, iParam1, &Local_37[iVar4 /*4*/].f_3, iParam0, iParam5);
	return iVar0 || gameplay::get_game_timer() - Local_37[iVar4 /*4*/].f_3 < iParam4;
}

// Position - 0xCD2D
int func_203(int *iParam0, vector3 vParam1, int iParam4, var *uParam5, int iParam6, int iParam7) {
	var uVar0;
	vector3 vVar1;
	var uVar4;
	int iVar7;
	int iVar8;

	iVar7 = 0;
	if (!func_172(iParam4)) {
		*iParam0 = 0;
		return 0;
	}
	if (*iParam0 == 0) {
		vVar1 = {func_204(iParam4, iParam7)};
		*iParam0 =
			worldprobe::start_shape_test_los_probe(vParam1, vVar1 + vVar1 - vParam1 * FtoV(0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = worldprobe::get_shape_test_result(*iParam0, &uVar0, &vVar1, &uVar4, &iVar7);
	if (iVar8 == 0) {
		*iParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1) {
		return 0;
	}
	*iParam0 = 0;
	if (entity::is_entity_a_ped(iVar7)) {
		func_172(iVar7);
		if (entity::get_ped_index_from_entity_index(iVar7) == iParam4) {
			if (bLocal_78) {
				graphics::draw_debug_line_with_two_colours(vParam1, entity::get_entity_coords(iParam4, 1), 255, 0, 0,
														   255, 0, 0, 255, 255);
			}
			*uParam5 = gameplay::get_game_timer();
			return 1;
		}
		return 0;
	}
	if (entity::is_entity_a_vehicle(iVar7)) {
		func_172(iVar7);
		if (ped::is_ped_in_any_vehicle(iParam4, 0)) {
			if (entity::get_vehicle_index_from_entity_index(iVar7) == ped::get_vehicle_ped_is_in(iParam4, 0)) {
				if (bLocal_78) {
					graphics::draw_debug_line_with_two_colours(vParam1, entity::get_entity_coords(iParam4, 1), 255, 0,
															   0, 255, 0, 0, 255, 255);
				}
				*uParam5 = gameplay::get_game_timer();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

// Position - 0xCE59
Vector3 func_204(int iParam0, int iParam1) {
	int iVar0;

	if (iParam1 == 7) {
		iVar0 = gameplay::get_random_int_in_range(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0) {
		return entity::get_entity_coords(iParam0, 1);
	}
	else if (iParam1 == 1) {
		return ped::get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2) {
		return ped::get_ped_bone_coords(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3) {
		return ped::get_ped_bone_coords(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4) {
		return ped::get_ped_bone_coords(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5) {
		return ped::get_ped_bone_coords(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6) {
		return ped::get_ped_bone_coords(iParam0, 36864, 0f, 0f, 0f);
	}
	return entity::get_entity_coords(iParam0, 1);
}

// Position - 0xCF1E
int func_205() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_37) {
		if (Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0 && Local_37[iVar0 /*4*/].f_2 == 0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0xCF68
int func_206(int iParam0, int iParam1, float fParam2, int iParam3) {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = {func_208(entity::get_entity_coords(iParam1, 1) - entity::get_entity_coords(iParam0, 1))};
	if (fParam2 < 0.1f || fParam2 > 360f) {
		return 1;
	}
	if (iParam3 == 0) {
		vVar3 = {entity::get_entity_forward_vector(iParam0)};
	}
	else {
		vVar3 = {func_208(ped::get_ped_bone_coords(iParam0, 31086, 0f, 5f, 0f) -
						  ped::get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f))};
	}
	fVar6 = func_207(vVar3, vVar0);
	if (fVar6 <= system::cos(fParam2 / 2f)) {
		return 0;
	}
	return 1;
}

// Position - 0xCFF9
float func_207(vector3 vParam0, vector3 vParam3) {
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

// Position - 0xD01A
Vector3 func_208(vector3 vParam0) {
	float fVar0;
	float fVar1;

	fVar0 = system::vmag(vParam0);
	if (fVar0 != 0f) {
		fVar1 = 1f / fVar0;
		vParam0 = {vParam0 * FtoV(fVar1)};
	}
	else {
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

// Position - 0xD059
void func_209(var *uParam0) {
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

// Position - 0xD074
int func_210(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_37) {
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0xD0B3
int func_211(int iParam0) {
	if (player::is_player_free_aiming_at_entity(player::player_id(), iParam0) &&
		weapon::is_ped_armed(player::player_ped_id(), 6)) {
		return 1;
	}
	return 0;
}

// Position - 0xD0DB
bool func_212(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 8f;
	fVar1 = 15f;
	if (iParam1 == 0) {
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (iParam2) {
		fVar0 = 2f;
	}
	if (func_172(player::player_ped_id()) && func_172(iParam0)) {
		weapon::get_current_ped_weapon(player::player_ped_id(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan")) {
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!iParam2) {
			if (func_216(iParam0, iParam1, fVar0, fVar1)) {
				return true;
			}
			if (func_213(iParam0, fVar1, iParam3, iParam4)) {
				return true;
			}
		}
		else {
			if (weapon::is_ped_current_weapon_silenced(player::player_ped_id())) {
				if (ped::is_ped_shooting(player::player_ped_id())) {
					if (gameplay::is_bullet_in_area(entity::get_entity_coords(iParam0, 1), fVar0, 1)) {
						return true;
					}
				}
			}
			else {
				if (iParam1) {
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_216(iParam0, iParam1, fVar0, fVar1)) {
					return true;
				}
			}
			if (func_213(iParam0, fVar1, iParam3, iParam4)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0xD1D6
bool func_213(int iParam0, float fParam1, bool bParam2, bool bParam3) {
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = {entity::get_entity_coords(iParam0, 1)};
	vVar3 = {vVar0};
	vVar0.x -= fParam1;
	vVar0.y -= fParam1;
	vVar0.z -= fParam1;
	vVar3.x += fParam1;
	vVar3.y += fParam1;
	vVar3.z += fParam1;
	if (bParam2) {
		if (gameplay::_0x34318593248C8FB2(entity::get_entity_coords(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) ||
			gameplay::_0x34318593248C8FB2(entity::get_entity_coords(iParam0, 1), joaat("weapon_molotov"), fParam1, 1) ||
			gameplay::_0x34318593248C8FB2(entity::get_entity_coords(iParam0, 1), joaat("weapon_smokegrenade"), fParam1,
										  1) ||
			gameplay::_0x34318593248C8FB2(entity::get_entity_coords(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1)) {
			if (bParam3) {
				if (func_214(iParam0, fParam1)) {
					return true;
				}
				else {
					return false;
				}
			}
			return true;
		}
	}
	else {
		if (bParam3) {
			if (func_214(iParam0, fParam1)) {
				return true;
			}
			else {
				return false;
			}
		}
		if (gameplay::is_projectile_in_area(vVar0, vVar3, 1)) {
			return true;
		}
	}
	return false;
}

// Position - 0xD2E2
bool func_214(int iParam0, float fParam1) {
	var uVar0;
	vector3 vVar1;

	if (gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) ||
		gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0) ||
		gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0) ||
		gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0) ||
		gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0)) {
		if (func_215(iParam0, vVar1, 90f, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0xD377
bool func_215(int iParam0, vector3 vParam1, float fParam4, int iParam5) {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = {func_208(vParam1 - entity::get_entity_coords(iParam0, 1))};
	if (fParam4 < 0.1f || fParam4 > 360f) {
		return true;
	}
	if (iParam5 == 0) {
		vVar3 = {entity::get_entity_forward_vector(iParam0)};
	}
	else {
		vVar3 = {func_208(ped::get_ped_bone_coords(iParam0, 31086, 0f, 5f, 0f) -
						  ped::get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f))};
	}
	fVar6 = func_207(vVar3, vVar0);
	if (fVar6 <= system::cos(fParam4 / 2f)) {
		return false;
	}
	return true;
}

// Position - 0xD405
bool func_216(int iParam0, int iParam1, float fParam2, float fParam3) {
	if (iParam1) {
		if (ped::is_ped_shooting(player::player_ped_id())) {
			if (entity::is_entity_at_entity(player::player_ped_id(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0)) {
				return true;
			}
		}
	}
	if (gameplay::is_bullet_in_area(entity::get_entity_coords(iParam0, 1), fParam2, 1)) {
		return true;
	}
	return false;
}

// Position - 0xD44D
bool func_217(int iParam0) {
	if (iParam0 == 2 || iParam0 == 3 || iParam0 == 34 || iParam0 == 11 || iParam0 == 52 || iParam0 == 53) {
		return false;
	}
	return true;
}

// Position - 0xD497
void func_218(int iParam0) {
	int iVar0;

	if (func_172(player::player_ped_id()) && func_172(iParam0)) {
		streaming::request_anim_dict("rcmextreme3");
		while (!streaming::has_anim_dict_loaded("rcmextreme3")) {
			system::wait(0);
		}
		ai::open_sequence_task(&iVar0);
		ai::task_play_anim(0, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0, 0, 0, 0);
		ai::task_set_blocking_of_non_temporary_events(0, 1);
		ai::task_parachute_to_target(0, 64.6f, -737.8f, 44.2f);
		ai::task_smart_flee_ped(0, player::player_ped_id(), 10000f, -1, 0, 0);
		ai::close_sequence_task(iVar0);
		ai::task_perform_sequence(iParam0, iVar0);
		ai::clear_sequence_task(&iVar0);
	}
}

// Position - 0xD534
bool func_219(int iParam0) {
	if (iParam0 == -1) {
		iParam0 = func_147();
	}
	if (iParam0 == -1) {
		return true;
	}
	if (func_225(iParam0)) {
		return false;
	}
	if (!func_144(4)) {
		if (func_223(iParam0)) {
		}
		else {
			return true;
		}
	}
	if (func_222() && !func_221()) {
		return true;
	}
	if (!func_220(iParam0)) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (player::get_player_wanted_level(player::player_id()) != 0) {
				return true;
			}
		}
	}
	if (!gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 2)) {
		return true;
	}
	return false;
}

// Position - 0xD5CC
bool func_220(int iParam0) {
	if (iParam0 == 5 || iParam0 == 6 || iParam0 == 41 || iParam0 == 60 || iParam0 == 61) {
		return true;
	}
	return false;
}

// Position - 0xD60B
int func_221() {
	if (gameplay::is_pc_version()) {
		if (gameplay::_0xD10282B6E3751BA0() == 1f) {
			return 1;
		}
	}
	return 0;
}

// Position - 0xD628
int func_222() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 20);
	}
	return 0;
}

// Position - 0xD64E
bool func_223(int iParam0) {
	if (func_224() && Global_91491.f_11 == 6 && iParam0 == func_148(&Global_91491.f_3, 0)) {
		return true;
	}
	return false;
}

// Position - 0xD682
int func_224() {
	if (Global_91491 == 13 || Global_91491 == 10 || Global_91491 == 11 || Global_91491 == 12) {
		return 0;
	}
	return 1;
}

// Position - 0xD6C0
bool func_225(int iParam0) {
	if (func_93(0)) {
		if (Global_69948.f_1 == 7) {
			if (Global_69948 == iParam0) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0xD6E8
int func_226(int iParam0) {
	switch (*iParam0) {
	case 17:
		if (!func_241(iParam0)) {
			return 0;
		}
		break;

	case 18:
		if (!func_238(iParam0)) {
			return 0;
		}
		break;

	case 19:
		if (!func_234(iParam0)) {
			return 0;
		}
		break;

	case 20:
		if (!func_227(iParam0)) {
			return 0;
		}
		break;
	}
	func_268("Created initial scene");
	return 1;
}

// Position - 0xD75D
int func_227(var *uParam0) {
	int iVar0[1];
	int iVar2;

	iVar0[0] = iLocal_93;
	switch (iLocal_91) {
	case 0:
		uParam0->f_16 = 0;
		uParam0->f_15 = 12f;
		StringCopy(&uParam0->f_9, "ES_4_RCM_P1", 24);
		uParam0->f_27 = 0;
		iVar2 = 0;
		while (iVar2 <= iVar0 - 1) {
			streaming::request_model(iVar0[iVar2]);
			iVar2++;
		}
		func_233(&uParam0->f_48, "rcmextreme4", "idle_a", "idle_c");
		iLocal_91 = 1;
		break;

	case 1:
		if (!func_232(&iVar0) || !func_231(&uParam0->f_48)) {
			return 0;
		}
		iLocal_91 = 2;
		break;

	case 2:
		func_228(&uParam0->f_28[0], 1732.27f, 96.36f, 170.29f, -98.56f);
		ped::set_ped_can_leg_ik(uParam0->f_28[0], 1);
		ped::set_ped_leg_ik_mode(uParam0->f_28[0], 2);
		iVar2 = 0;
		while (iVar2 <= iVar0 - 1) {
			streaming::set_model_as_no_longer_needed(iVar0[iVar2]);
			iVar2++;
		}
		return 1;
	}
	return 0;
}

// Position - 0xD861
void func_228(var *uParam0, vector3 vParam1, float fParam4) {
	func_229(uParam0, iLocal_93, vParam1, fParam4, 26);
	ped::set_ped_default_component_variation(*uParam0);
	ped::set_ped_can_ragdoll_from_player_impact(*uParam0, 0);
	ped::set_ped_name_debug(*uParam0, "EXTREME LAUNCHER RC");
}

// Position - 0xD893
void func_229(var *uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6) {
	func_230(uParam0);
	*uParam0 = ped::create_ped(iParam6, iParam1, vParam2, fParam5, 0, 0);
}

// Position - 0xD8B4
void func_230(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		if (!entity::is_entity_dead(*iParam0, 0)) {
			entity::set_entity_load_collision_flag(*iParam0, 0);
		}
		if (!entity::is_entity_a_mission_entity(*iParam0)) {
			entity::set_entity_as_mission_entity(*iParam0, 1, 0);
		}
		ped::delete_ped(iParam0);
	}
}

// Position - 0xD8F4
int func_231(var *uParam0) {
	if (func_192(uParam0)) {
		streaming::request_anim_dict(*uParam0);
		if (streaming::has_anim_dict_loaded(*uParam0)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0xD91E
int func_232(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= *iParam0 - 1) {
		if (!streaming::has_model_loaded((*iParam0)[iVar0])) {
			return 0;
		}
		iVar0++;
	}
	return 1;
}

// Position - 0xD94F
void func_233(var *uParam0, char *sParam1, char *sParam2, char *sParam3) {
	*uParam0 = sParam1;
	uParam0->f_1 = sParam2;
	uParam0->f_2 = sParam3;
	streaming::request_anim_dict(*uParam0);
	uParam0->f_5 = {0f, 0f, 0f};
	uParam0->f_8 = {0f, 0f, 0f};
	uParam0->f_3 = 1;
	uParam0->f_4 = 0;
}

// Position - 0xD98B
int func_234(var *uParam0) {
	int iVar0[1];
	int iVar2;
	bool bVar3;

	iVar0[0] = iLocal_92;
	switch (iLocal_91) {
	case 0:
		uParam0->f_16 = 5;
		uParam0->f_17[0 /*3*/] = {-63.19179f, -808.9167f, 320.2477f};
		uParam0->f_17[1 /*3*/] = {-68.8908f, -813.6761f, 324.29f};
		uParam0->f_24 = 10f;
		uParam0->f_27 = 0;
		uParam0->f_25 = 1;
		StringCopy(&uParam0->f_9, "ES_3_RCM", 24);
		iVar2 = 0;
		while (iVar2 <= iVar0 - 1) {
			streaming::request_model(iVar0[iVar2]);
			iVar2++;
		}
		func_233(&uParam0->f_48, "rcmextreme3", "idle_calm", "fidget_02");
		iLocal_91 = 1;
		break;

	case 1:
		if (!func_232(&iVar0) || !func_231(&uParam0->f_48)) {
			return 0;
		}
		iLocal_91 = 2;
		break;

	case 2:
		bVar3 = true;
		if (!entity::does_entity_exist(uParam0->f_28[0])) {
			if (func_235(&uParam0->f_28[0], 52, -63.8f, -809.5f, 321.8f, -62f, "EXTREME LAUNCHER RC", 1)) {
				ped::set_ped_config_flag(uParam0->f_28[0], 118, 0);
				ped::set_ped_config_flag(uParam0->f_28[0], 208, 1);
				weapon::give_weapon_to_ped(uParam0->f_28[0], joaat("gadget_parachute"), 1, 0, 0);
				ped::set_ped_component_variation(uParam0->f_28[0], 8, 1, 0, 0);
			}
			else {
				bVar3 = false;
			}
		}
		if (bVar3) {
			iLocal_91 = 3;
		}
		break;

	case 3:
		iVar2 = 0;
		while (iVar2 <= iVar0 - 1) {
			streaming::set_model_as_no_longer_needed(iVar0[iVar2]);
			iVar2++;
		}
		return 1;
	}
	return 0;
}

// Position - 0xDB1E
bool func_235(var *uParam0, int iParam1, vector3 vParam2, float fParam5, char *sParam6, int iParam7) {
	if (func_236(uParam0, iParam1, vParam2, fParam5, 1)) {
		if (entity::does_entity_exist(*uParam0)) {
			if (!entity::is_entity_dead(*uParam0, 0)) {
				ped::set_blocking_of_non_temporary_events(*uParam0, 1);
				ped::set_ped_money(*uParam0, 0);
				if (iParam7 == 1) {
					ped::set_ped_can_be_targetted(*uParam0, 0);
				}
			}
			ped::set_ped_name_debug(*uParam0, sParam6);
		}
		return true;
	}
	return false;
}

// Position - 0xDB7A
bool func_236(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6) {
	int iVar0;

	if (!func_36(iParam1)) {
		iVar0 = func_271(iParam1);
		streaming::request_model(iVar0);
		if (streaming::has_model_loaded(iVar0)) {
			if (entity::does_entity_exist(*uParam0)) {
				ped::delete_ped(uParam0);
			}
			*iParam0 = ped::create_ped(26, iVar0, vParam2, fParam5, 0, 0);
			ped::set_ped_default_component_variation(*iParam0);
			if (iVar0 == joaat("ig_lamardavis")) {
				if (ped::get_ped_drawable_variation(*iParam0, 3) == 0) {
					ped::set_ped_component_variation(*iParam0, 5, 2, 0, 0);
				}
			}
			func_237(*iParam0, iParam1);
			if (iParam6) {
				streaming::set_model_as_no_longer_needed(iVar0);
			}
			return true;
		}
	}
	return false;
}

// Position - 0xDC08
int func_237(var uParam0, int iParam1) {
	int iVar0;

	iVar0 = 7;
	if (iParam1 == 19) {
		iVar0 = 3;
	}
	else if (iParam1 == 14) {
		iVar0 = 4;
	}
	else if (iParam1 == 17) {
		iVar0 = 5;
	}
	else {
		iVar0 = 7;
		return 0;
	}
	Global_87658[iVar0 - 3] = uParam0;
	return 1;
}

// Position - 0xDC4E
int func_238(var *uParam0) {
	int iVar0[3];
	int iVar4;
	bool bVar5;

	iVar0[0] = joaat("blazer");
	iVar0[1] = joaat("flatbed");
	iVar0[2] = iLocal_92;
	switch (iLocal_91) {
	case 0:
		uParam0->f_16 = 0;
		uParam0->f_15 = 8f;
		uParam0->f_27 = 0;
		uParam0->f_25 = 1;
		uParam0->f_26 = 1;
		StringCopy(&uParam0->f_9, "es_2_rcm_concat", 24);
		iVar4 = 0;
		while (iVar4 <= iVar0 - 1) {
			streaming::request_model(iVar0[iVar4]);
			iVar4++;
		}
		func_233(&uParam0->f_48, "rcmextreme2", "sitting_idle", "loop_punching");
		iLocal_91 = 1;
		break;

	case 1:
		if (!func_232(&iVar0) || !func_231(&uParam0->f_48)) {
			return 0;
		}
		iLocal_91 = 2;
		break;

	case 2:
		bVar5 = true;
		if (!entity::does_entity_exist(uParam0->f_28[0])) {
			if (func_235(&uParam0->f_28[0], 52, -954.19f, -2760.05f, 14.64f, -31.79f, "EXTREME LAUNCHER RC", 1)) {
				entity::set_entity_coords_no_offset(uParam0->f_28[0], -954.2f, -2760.05f, 14.04f, 1, 0, 1);
				ped::set_ped_config_flag(uParam0->f_28[0], 118, 0);
				ped::set_ped_config_flag(uParam0->f_28[0], 208, 1);
				entity::freeze_entity_position(uParam0->f_28[0], 1);
				entity::set_entity_collision(uParam0->f_28[0], 0, 0);
				ped::set_ped_component_variation(uParam0->f_28[0], 8, 1, 0, 0);
				ai::task_play_anim(uParam0->f_28[0], uParam0->f_48, uParam0->f_48.f_1, 8f, -8f, -1, 33281, 0, 0, 0, 0);
				if (entity::does_entity_exist(player::player_ped_id())) {
					ai::task_look_at_entity(uParam0->f_28[0], player::player_ped_id(), -1, 48, 2);
				}
			}
			else {
				bVar5 = false;
			}
		}
		if (!entity::does_entity_exist(uParam0->f_35[0])) {
			func_239(&uParam0->f_35[0], iVar0[0], -950.8f, -2751.98f, 13.21f, 199.05f);
			vehicle::set_vehicle_doors_locked(uParam0->f_35[0], 2);
			vehicle::set_vehicle_colour_combination(uParam0->f_35[0], 0);
			vehicle::set_vehicle_dirt_level(uParam0->f_35[0], 0f);
		}
		if (!entity::does_entity_exist(uParam0->f_35[1])) {
			func_239(&uParam0->f_35[1], iVar0[0], -950.192f, -2755.96f, 13.3639f, -178.182f);
			vehicle::set_vehicle_doors_locked(uParam0->f_35[1], 2);
			vehicle::set_vehicle_colour_combination(uParam0->f_35[1], 1);
			vehicle::set_vehicle_dirt_level(uParam0->f_35[1], 0f);
		}
		if (!entity::does_entity_exist(uParam0->f_35[2])) {
			func_239(&uParam0->f_35[2], iVar0[1], -957.23f, -2764.89f, 14.04f, 147.61f);
			vehicle::set_vehicle_doors_locked(uParam0->f_35[2], 2);
			vehicle::set_vehicle_colour_combination(uParam0->f_35[2], 2);
			vehicle::set_vehicle_dirt_level(uParam0->f_35[2], 0f);
			vehicle::set_vehicle_is_considered_by_player(uParam0->f_35[2], 0);
			vehicle::set_vehicle_automatically_attaches(uParam0->f_35[2], 0, 0);
		}
		if (bVar5) {
			iLocal_91 = 3;
		}
		break;

	case 3:
		iVar4 = 0;
		while (iVar4 <= iVar0 - 1) {
			streaming::set_model_as_no_longer_needed(iVar0[iVar4]);
			iVar4++;
		}
		return 1;
	}
	return 0;
}

// Position - 0xDF52
void func_239(var *uParam0, int iParam1, vector3 vParam2, float fParam5) {
	func_240(uParam0);
	*uParam0 = vehicle::create_vehicle(iParam1, vParam2, fParam5, 1, 1);
	if (entity::does_entity_exist(*uParam0)) {
		vehicle::set_vehicle_on_ground_properly(*uParam0, 1084227584);
		entity::set_entity_health(*uParam0, 1000);
	}
}

// Position - 0xDF92
void func_240(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		if (!entity::is_entity_a_mission_entity(*iParam0)) {
			entity::set_entity_as_mission_entity(*iParam0, 1, 0);
		}
		if (func_161(*iParam0)) {
			if (entity::is_entity_a_mission_entity(*iParam0) &&
				entity::does_entity_belong_to_this_script(*iParam0, 1)) {
				if (func_172(player::player_ped_id())) {
					if (ped::is_ped_in_vehicle(player::player_ped_id(), *iParam0, 0)) {
						entity::set_vehicle_as_no_longer_needed(iParam0);
						return;
					}
				}
				vehicle::delete_vehicle(iParam0);
			}
		}
		else {
			if (func_172(player::player_ped_id())) {
				if (ped::is_ped_in_vehicle(player::player_ped_id(), *iParam0, 0)) {
					entity::set_vehicle_as_no_longer_needed(iParam0);
					return;
				}
			}
			vehicle::delete_vehicle(iParam0);
		}
	}
}

// Position - 0xE02E
int func_241(var *uParam0) {
	int iVar0[1];
	int iVar2;

	iVar0[0] = iLocal_93;
	switch (iLocal_91) {
	case 0:
		uParam0->f_16 = 0;
		StringCopy(&uParam0->f_9, "ES_1_RCM_P1", 24);
		uParam0->f_15 = 15f;
		uParam0->f_27 = 0;
		iVar2 = 0;
		while (iVar2 <= iVar0 - 1) {
			streaming::request_model(iVar0[iVar2]);
			iVar2++;
		}
		func_233(&uParam0->f_48, "rcm_extreme1", "idle_a", "idle_c");
		iLocal_91 = 1;
		break;

	case 1:
		if (!func_232(&iVar0) || !func_231(&uParam0->f_48)) {
			return 0;
		}
		iLocal_91 = 2;
		break;

	case 2:
		func_228(&uParam0->f_28[0], -188.22f, 1296.1f, 302.86f, 43.7f);
		iVar2 = 0;
		while (iVar2 <= iVar0 - 1) {
			streaming::set_model_as_no_longer_needed(iVar0[iVar2]);
			iVar2++;
		}
		return 1;
	}
	return 0;
}

// Position - 0xE11A
bool func_242(int iParam0) {
	struct<27> Var0;
	int iVar32;

	func_95(iParam0, &Var0);
	iVar32 = func_90();
	if (iVar32 == 145) {
		return true;
	}
	else if (iVar32 != 1 && iVar32 != 0 && iVar32 != 2) {
		return true;
	}
	if (!gameplay::is_bit_set(Var0.f_26, iVar32)) {
		return true;
	}
	return false;
}

// Position - 0xE16E
int func_243(int iParam0) {
	char *sVar0;

	if (Global_69702) {
		func_268("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is "
				 "running [TERMINATING]");
		return 0;
	}
	if (!Global_101700.f_8044 && !func_93(1)) {
		func_268("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not "
				 "active");
		return 0;
	}
	if (!func_244(iParam0)) {
		Global_100787[iParam0 /*10*/].f_1 = 1;
		func_268("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller "
				 "[TERMINATING]");
		return 0;
	}
	if (Global_91491.f_11 == 6) {
		if (Global_91491 < 9) {
			func_95(iParam0, &sVar0);
			if (gameplay::are_strings_equal(&Global_91491.f_3, sVar0)) {
				func_268("STEP_3_COMMON_CanRCLaunch - Script denied as a "
						 "replay for this RC is being configured. "
						 "[TERMINATING]");
				return 0;
			}
		}
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("candidate_controller")) == 0) {
		Global_100787[iParam0 /*10*/].f_1 = 1;
		func_268("STEP_3_COMMON_CanRCLaunch - Script denied as "
				 "candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

// Position - 0xE227
int func_244(int iParam0) {
	var *uVar0;

	func_95(iParam0, &uVar0);
	if (!func_144(4)) {
		if (func_223(iParam0)) {
		}
		else {
			return 0;
		}
	}
	if (func_222() && !func_221()) {
		return 0;
	}
	if (func_250(iParam0)) {
		return 0;
	}
	if (iParam0 == -1) {
		iParam0 = func_147();
	}
	if (iParam0 == -1) {
		return 0;
	}
	if (!func_225(iParam0)) {
		if (!func_249(iParam0)) {
			return 0;
		}
		if (!func_248(iParam0)) {
			return 0;
		}
		if (func_247(iParam0)) {
			return 0;
		}
	}
	if (iParam0 == 58) {
		if (func_245(5)) {
			Global_100787[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_100787[iParam0 /*10*/].f_3 == 1) {
		return 0;
	}
	return 1;
}

// Position - 0xE2E8
bool func_245(int iParam0) {
	int iVar0;
	char *sVar1;
	int iVar9;

	if (Global_91543.f_301 == 0) {
		return false;
	}
	if (iParam0 == 10) {
		iVar0 = 0;
		while (iVar0 < 10) {
			if (func_245(iVar0)) {
				return true;
			}
			iVar0++;
		}
	}
	else if (!ped::is_ped_injured(player::player_ped_id())) {
		func_246(iParam0, &sVar1);
		iVar9 = interior::get_interior_at_coords_with_type(Global_86862[iParam0 /*10*/].f_3, &sVar1);
		if (iVar9 != 0 && Global_91543.f_301 == iVar9) {
			return true;
		}
	}
	return false;
}

// Position - 0xE36D
bool func_246(int iParam0, char *sParam1) {
	StringCopy(sParam1, "", 32);
	switch (iParam0) {
	case 0: StringCopy(sParam1, "v_michael", 32); break;

	case 5: StringCopy(sParam1, "v_franklins", 32); break;

	case 6: StringCopy(sParam1, "v_franklinshouse", 32); break;

	case 2:
	case 1:
		if (streaming::is_ipl_active("TrevorsTrailer")) {
			StringCopy(sParam1, "v_trailer", 32);
		}
		else if (streaming::is_ipl_active("TrevorsTrailerTidy")) {
			StringCopy(sParam1, "V_TrailerTIDY", 32);
		}
		else if (streaming::is_ipl_active("TrevorsTrailerTrash")) {
			StringCopy(sParam1, "V_TrailerTRASH", 32);
		}
		break;

	case 3: StringCopy(sParam1, "v_trevors", 32); break;

	case 4: StringCopy(sParam1, "v_strip3", 32); break;

	case 8:
	case 7:
	case 9: StringCopy(sParam1, "v_psycheoffice", 32); break;
	}
	return !gameplay::are_strings_equal(sParam1, "");
}

// Position - 0xE44F
bool func_247(int iParam0) {
	if (iParam0 == 63 || iParam0 == -1) {
		return false;
	}
	return gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 3);
}

// Position - 0xE47D
int func_248(int iParam0) {
	if (iParam0 == 63 || iParam0 == -1) {
		return 0;
	}
	return gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 2);
}

// Position - 0xE4AB
int func_249(int iParam0) {
	if (iParam0 == 63 || iParam0 == -1) {
		return 0;
	}
	return gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 0);
}

// Position - 0xE4D9
bool func_250(int iParam0) {
	if (func_220(iParam0)) {
		return false;
	}
	else if (!ped::is_ped_injured(player::player_ped_id())) {
		if (player::get_player_wanted_level(player::player_id()) != 0) {
			return true;
		}
	}
	return false;
}

// Position - 0xE50E
void func_251() {
	func_268("Running end routines.");
	Global_101418--;
}

// Position - 0xE528
int func_252(int iParam0, int iParam1, vector3 vParam2, float fParam5) {
	int iVar0;

	if (*iParam0 == 1) {
		if (func_253((*iParam0)[0], vParam2, fParam5, iParam1)) {
			return 1;
		}
	}
	else {
		iVar0 = 0;
		while (iVar0 < *iParam0) {
			if (func_253((*iParam0)[iVar0], vParam2, fParam5, iParam1)) {
				iVar0 = *iParam0;
				return 1;
			}
			iVar0++;
		}
	}
	func_268("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch "
			 "[TERMINATING]");
	return 0;
}

// Position - 0xE58D
bool func_253(int iParam0, vector3 vParam1, float fParam4, var *uParam5) {
	int iVar0;
	struct<7> Var1;

	iVar0 = 0;
	func_95(iParam0, &Var1);
	if (func_254(Var1.f_6, vParam1, fParam4, 0)) {
		if (gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 0)) {
			if (!gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 3)) {
				iVar0 = 1;
			}
		}
		if (func_225(iParam0)) {
			iVar0 = 1;
		}
	}
	if (iVar0 == 1) {
		*uParam5 = iParam0;
		StringCopy(&uParam5->f_1, Var1, 32);
		return true;
	}
	return false;
}

// Position - 0xE60B
bool func_254(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7) {
	if (fParam6 < 0f) {
		fParam6 = 0f;
	}
	if (!iParam7) {
		if (gameplay::absf(vParam0.x - vParam3.x) <= fParam6) {
			if (gameplay::absf(vParam0.y - vParam3.y) <= fParam6) {
				if (gameplay::absf(vParam0.z - vParam3.z) <= fParam6) {
					return true;
				}
			}
		}
	}
	else if (gameplay::absf(vParam0.x - vParam3.x) <= fParam6) {
		if (gameplay::absf(vParam0.y - vParam3.y) <= fParam6) {
			return true;
		}
	}
	return false;
}

// Position - 0xE686
void func_255(int iParam0, int iParam1) {
	if (*iParam0 == 18) {
		if (func_172(iParam0->f_35[0])) {
			vehicle::set_vehicle_doors_locked(iParam0->f_35[0], 1);
		}
		if (func_172(iParam0->f_35[1])) {
			vehicle::set_vehicle_doors_locked(iParam0->f_35[1], 1);
		}
	}
	if (iParam1) {
		func_268("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		func_257(iParam0, 0, 0, 0);
	}
	if (ui::does_blip_exist(iLocal_98)) {
		ui::remove_blip(&iLocal_98);
	}
	func_256(&iParam0->f_48);
	if (*iParam0 == 17) {
		ped::remove_scenario_blocking_area(iLocal_97, 0);
		ai::set_scenario_type_enabled("WORLD_VEHICLE_SALTON_DIRT_BIKE", 1);
	}
	else if (*iParam0 == 18) {
		ped::remove_scenario_blocking_area(iLocal_97, 0);
	}
	else if (*iParam0 == 19) {
		audio::stop_sound(iLocal_96);
		streaming::remove_anim_dict("rcmextreme3");
		audio::release_script_audio_bank();
	}
	if (iLocal_94 != -1) {
		func_268("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_186(&iLocal_94);
	}
	if (iParam1) {
	}
	func_251();
	func_268(" SCRIPT TERMINATED");
	script::terminate_this_thread();
}

// Position - 0xE767
int func_256(var *uParam0) {
	if (func_192(uParam0)) {
		if (streaming::has_anim_dict_loaded(*uParam0)) {
			streaming::remove_anim_dict(*uParam0);
			*uParam0 = "";
			uParam0->f_1 = "";
			return 1;
		}
	}
	return 0;
}

// Position - 0xE79D
void func_257(var *uParam0, int iParam1, int iParam2, int iParam3) {
	func_264(uParam0, iParam1);
	func_261(uParam0, iParam2);
	func_258(uParam0, iParam3);
}

// Position - 0xE7BD
void func_258(var *uParam0, bool bParam1) { func_259(&uParam0->f_41, bParam1); }

// Position - 0xE7CF
void func_259(var *uParam0, bool bParam1) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1) {
		if (bParam1) {
			func_194(&(*uParam0)[iVar0]);
		}
		else {
			func_260(&(*uParam0)[iVar0], 0);
		}
		iVar0++;
	}
}

// Position - 0xE80D
void func_260(int *iParam0, int iParam1) {
	if (entity::does_entity_exist(*iParam0)) {
		if (entity::is_entity_attached_to_any_ped(*iParam0)) {
			entity::detach_entity(*iParam0, 1, 1);
		}
		if (!iParam1) {
			entity::set_object_as_no_longer_needed(iParam0);
		}
		else {
			object::_mark_object_for_deletion(*iParam0);
		}
	}
}

// Position - 0xE848
void func_261(var *uParam0, bool bParam1) { func_262(&uParam0->f_35, bParam1); }

// Position - 0xE85A
void func_262(var *uParam0, bool bParam1) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1) {
		if (bParam1) {
			func_240(&(*uParam0)[iVar0]);
		}
		else {
			func_263(&(*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

// Position - 0xE897
void func_263(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		entity::is_entity_dead(*iParam0, 0);
		if (entity::is_entity_a_mission_entity(*iParam0) && entity::does_entity_belong_to_this_script(*iParam0, 1)) {
			entity::set_vehicle_as_no_longer_needed(iParam0);
		}
	}
}

// Position - 0xE8CF
void func_264(var *uParam0, int iParam1) { func_265(&uParam0->f_28, iParam1); }

// Position - 0xE8E1
void func_265(var *uParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1) {
		if (iParam1 == 1) {
			func_230(&(*uParam0)[iVar0]);
		}
		else {
			func_266(&(*uParam0)[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

// Position - 0xE922
void func_266(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (entity::does_entity_exist(*iParam0)) {
		if (!ped::is_ped_injured(*iParam0)) {
			entity::set_entity_load_collision_flag(*iParam0, 0);
			if (iParam3 == 0) {
				ai::clear_ped_secondary_task(*iParam0);
			}
			ped::set_ped_keep_task(*iParam0, iParam1);
			if (iParam2 == 1) {
				ped::set_blocking_of_non_temporary_events(*iParam0, 0);
			}
		}
		entity::set_ped_as_no_longer_needed(iParam0);
	}
}

// Position - 0xE971
void func_267(int *iParam0) {
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

// Position - 0xE9AE
void func_268(char *sParam0) {
	if (!gameplay::is_string_null_or_empty(sParam0)) {
	}
}

// Position - 0xE9C0
void func_269(var *uParam0) {
	*uParam0 = -1;
	StringCopy(&uParam0->f_1, "", 32);
	uParam0->f_15 = 12f;
	uParam0->f_16 = 6;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

// Position - 0xE9F3
void func_270() {
	func_268("Running start routines.");
	Global_101418++;
}

// Position - 0xEA0D
int func_271(int iParam0) {
	if (!func_36(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}
