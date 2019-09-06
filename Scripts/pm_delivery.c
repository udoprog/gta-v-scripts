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
int iLocal_20 = 0;
char *sLocal_21 = NULL;
float fLocal_22 = 0f;
var uLocal_23 = 0;
var uLocal_24 = 0;
var uLocal_25 = 0;
float fLocal_26 = 0f;
float fLocal_27 = 0f;
var uLocal_28 = 0;
var uLocal_29 = 0;
float fLocal_30 = 0f;
float fLocal_31 = 0f;
float fLocal_32 = 0f;
var uLocal_33 = 0;
var uLocal_34 = 0;
var uLocal_35 = 0;
int iLocal_36 = 0;
int iLocal_37 = 0;
int iLocal_38 = 0;
var *uLocal_39 = NULL;
var uLocal_40 = 3;
var uLocal_41 = 0;
var uLocal_42 = 0;
var uLocal_43 = 0;
var uLocal_44 = 0;
var uLocal_45 = 0;
var uLocal_46 = 1092616192;
var uLocal_47 = 1101004800;
var uLocal_48 = 0;
var uLocal_49 = 0;
var uLocal_50 = 0;
var uLocal_51 = 0;
var uLocal_52 = 0;
var uLocal_53 = 0;
var uLocal_54 = 0;
var uLocal_55 = 0;
var uLocal_56 = 3;
var uLocal_57 = 0;
var uLocal_58 = 0;
var uLocal_59 = 0;
var uLocal_60 = 0;
var uLocal_61 = 0;
var uLocal_62 = 0;
var uLocal_63 = 0;
vector3 vLocal_64 = {0f, 0f, 0f};
vector3 vLocal_67 = {0f, 0f, 0f};
vector3 vLocal_70 = {0f, 0f, 0f};
float fLocal_73 = 0f;
float fLocal_74 = 0f;
bool bLocal_75 = 0;
int iLocal_76 = 0;
int iLocal_77 = 0;
int iLocal_78 = 0;
int iLocal_79 = 0;
int iLocal_80 = 0;
int iLocal_81 = 0;
int iLocal_82 = 0;
int iLocal_83 = 0;
int iLocal_84 = 0;
int iLocal_85 = 0;
int iLocal_86 = 0;
int iLocal_87 = 0;
int iLocal_88 = 0;
int iLocal_89 = 0;
int iLocal_90[2] = {0, 0};
int iLocal_93[2] = {0, 0};
int iLocal_96 = 0;
int iLocal_97 = 0;
int iLocal_98 = 0;
int iLocal_99[2] = {0, 0};
int iLocal_102 = 0;
char *sLocal_103 = NULL;
char *sLocal_104 = NULL;
char *sLocal_105 = NULL;
int *iLocal_106 = NULL;
var uLocal_107 = 0;
var uLocal_108 = -1;
var uLocal_109 = 0;
var uLocal_110 = 0;
var uLocal_111 = 0;
var uLocal_112 = 0;
var uLocal_113 = 0;
var uLocal_114 = 0;
var uLocal_115 = 1000;
var uLocal_116 = 1000;
var uLocal_117 = 0;
int iLocal_118 = 0;
int iLocal_119 = 0;
int iLocal_120 = 0;
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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_85 = -1;
	sLocal_103 = "PMDL_OBJ";
	sLocal_104 = "PMDL_LOC";
	sLocal_105 = "PMDL_BCK";
	gameplay::set_mission_flag(1);
	if (player::has_force_cleanup_occurred(3)) {
		func_131(2);
		func_106();
	}
	iLocal_36 = func_104();
	while (true) {
		switch (iLocal_37) {
		case 0:
			if (!iLocal_76) {
				func_99();
			}
			else {
				func_98();
			}
			if (bLocal_75) {
				iLocal_77 = 1;
				iLocal_37 = 1;
			}
			break;

		case 1:
			if (!func_97()) {
				switch (iLocal_38) {
				case 0: func_94(); break;

				case 1:
					if (iLocal_36 == 5 || iLocal_36 == 6) {
						func_66();
					}
					else {
						func_65();
					}
					break;

				case 2:
					func_9();
					if (iLocal_36 < 3) {
						func_7();
					}
					else if (iLocal_36 > 6) {
						func_7();
						func_2();
					}
					break;

				case 3:
				case 4: func_1(); break;
				}
			}
			else {
				func_1();
			}
			break;
		}
		system::wait(0);
	}
}

// Position - 0x153
void func_1() {
	func_131(2);
	func_106();
}

// Position - 0x164
void func_2() {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iLocal_96)) {
		if (vehicle::is_vehicle_driveable(iLocal_96, 0)) {
			iVar0 = 200;
			iVar1 = entity::get_entity_health(iLocal_96) - 800;
			if (entity::is_entity_upsidedown(iLocal_96)) {
				entity::set_entity_health(iLocal_96, entity::get_entity_health(iLocal_96) - 5);
			}
			if (iVar1 <= 0) {
				iLocal_38 = 4;
			}
			else if (iVar1 < 75) {
				func_3(iVar1, iVar0, "PMDL_DMG", 6, 0, 1, 2);
			}
			else {
				func_3(iVar1, iVar0, "PMDL_DMG", 1, 0, 1, 2);
			}
		}
		else {
			iLocal_38 = 4;
		}
	}
	else {
		iLocal_38 = 4;
	}
}

// Position - 0x1E6
void func_3(int iParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_4(iParam0, iParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0,
		   0, 1, -1);
}

// Position - 0x211
void func_4(var uParam0, var uParam1, char *sParam2, var uParam3, var uParam4, var uParam5, float fParam6,
			float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13,
			int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20,
			int iParam21, int iParam22, int iParam23) {
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9) {
		if (iVar0 == -1) {
			if (func_6(0, iVar1) == 0) {
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1) {
		Global_1354542.f_1 = 1;
		func_5(0, iVar0);
		Global_1354542.f_1009[iVar0] = uParam0;
		Global_1354542.f_1009.f_11[iVar0] = uParam1;
		StringCopy(&Global_1354542.f_1009.f_22[iVar0 /*16*/], sParam2, 64);
		Global_1354542.f_1009.f_194[iVar0] = uParam3;
		Global_1354542.f_1009.f_183[iVar0] = uParam4;
		Global_1354542.f_1009.f_216[iVar0] = uParam5;
		Global_1354542.f_1009.f_227[iVar0 /*3*/] = fParam6;
		Global_1354542.f_1009.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1354542.f_1009.f_258[iVar0] = iParam8;
		Global_1354542.f_1009.f_269[iVar0] = uParam9;
		Global_1354542.f_1009.f_312[iVar0] = iParam10;
		Global_1354542.f_1009.f_323[iVar0] = iParam11;
		Global_1354542.f_1009.f_334[iVar0] = iParam12;
		Global_1354542.f_1009.f_345[iVar0] = iParam13;
		Global_1354542.f_1004 = 1;
		Global_1354542.f_1009.f_356[iVar0] = iParam14;
		Global_1354542.f_1009.f_367[iVar0] = iParam15;
		Global_1354542.f_1009.f_378[iVar0] = iParam16;
		Global_1354542.f_1009.f_389[iVar0] = iParam17;
		Global_1354542.f_1009.f_400[iVar0] = iParam18;
		Global_1354542.f_1009.f_411[iVar0] = iParam19;
		Global_1354542.f_1009.f_422[iVar0] = iParam20;
		Global_1354542.f_1009.f_433[iVar0] = iParam21;
		Global_1354542.f_1009.f_444[iVar0] = iParam22;
		Global_1354542.f_1009.f_455[iVar0] = iParam23;
	}
}

// Position - 0x3DA
void func_5(int iParam0, int iParam1) { gameplay::set_bit(&Global_1354542.f_5703[iParam0], iParam1); }

// Position - 0x3F3
int func_6(int iParam0, int iParam1) { return gameplay::is_bit_set(Global_1354542.f_5703[iParam0], iParam1); }

// Position - 0x40C
void func_7() {
	int iVar0;

	iVar0 = iLocal_80 - gameplay::get_game_timer();
	if (iVar0 < 0) {
		iVar0 = 0;
	}
	if (gameplay::get_game_timer() >= iLocal_84) {
		func_8(iVar0, "TIMER_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else {
		func_8(iVar0, "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	switch (iLocal_81) {
	case 0:
		if (gameplay::get_game_timer() >= iLocal_80 - 10000) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_81++;
		}
		break;

	case 1:
		if (gameplay::get_game_timer() >= iLocal_80 - 9000) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_81++;
		}
		break;

	case 2:
		if (gameplay::get_game_timer() >= iLocal_80 - 8000) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_81++;
		}
		break;

	case 3:
		if (gameplay::get_game_timer() >= iLocal_80 - 7000) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_81++;
		}
		break;

	case 4:
		if (gameplay::get_game_timer() >= iLocal_80 - 6000) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_81++;
		}
		break;

	case 5:
		if (gameplay::get_game_timer() >= iLocal_80 - 5000) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_81++;
		}
		break;

	case 6:
		if (gameplay::get_game_timer() >= iLocal_80 - 4500) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_81++;
		}
		break;

	case 7:
		if (gameplay::get_game_timer() >= iLocal_80 - 4000) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_81++;
		}
		break;

	case 8:
		if (gameplay::get_game_timer() >= iLocal_80 - 3500) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_81++;
		}
		break;

	case 9:
		if (gameplay::get_game_timer() >= iLocal_80 - 3000) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_81++;
		}
		break;

	case 10:
		if (gameplay::get_game_timer() >= iLocal_80 - 2500) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_81++;
		}
		break;

	case 11:
		if (gameplay::get_game_timer() >= iLocal_80 - 2000) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_81++;
		}
		break;

	case 12:
		if (gameplay::get_game_timer() >= iLocal_80 - 1500) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_81++;
		}
		break;

	case 13:
		if (gameplay::get_game_timer() >= iLocal_80 - 1000) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_81++;
		}
		break;

	case 14:
		if (gameplay::get_game_timer() >= iLocal_80 - 500) {
			audio::play_sound_frontend(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_81++;
		}
		break;

	case 15:
		if (gameplay::get_game_timer() >= iLocal_80) {
			audio::play_sound_frontend(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_81++;
		}
		break;

	case 16: break;
	}
	if (gameplay::get_game_timer() >= iLocal_80) {
		iLocal_38 = 3;
	}
}

// Position - 0x6FA
void func_8(int iParam0, char *sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14,
			int iParam15, int iParam16) {
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9) {
		if (iVar0 == -1) {
			if (func_6(7, iVar1) == 0) {
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1) {
		Global_1354542.f_1 = 1;
		func_5(7, iVar0);
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

// Position - 0x848
void func_9() {
	int iVar0;
	int iVar1;

	if (iLocal_36 >= 3 && iLocal_36 <= 4) {
		iVar0 = 0;
		while (iVar0 < iLocal_93) {
			if (!iLocal_78) {
				if (!ped::is_ped_injured(iLocal_93[iVar0])) {
					if (!entity::is_entity_at_coord(player::player_ped_id(), vLocal_64, 50f, 50f, 50f, 0, 1, 0)) {
						player::set_player_wanted_level_no_drop(player::player_id(), 2, 0);
						player::set_player_wanted_level_now(player::player_id(), 0);
						player::set_wanted_level_difficulty(player::player_id(), 0f);
						iLocal_78 = 1;
					}
				}
			}
			else if (!player::is_player_wanted_level_greater(player::player_id(), 0)) {
				if (!ped::is_ped_injured(iLocal_93[iVar0])) {
					ai::task_smart_flee_ped(iLocal_93[iVar0], player::player_ped_id(), 1000f, -1, 0, 0);
					ped::set_ped_keep_task(iLocal_93[iVar0], 1);
					entity::set_ped_as_no_longer_needed(&iLocal_93[iVar0]);
				}
				if (entity::does_entity_exist(iLocal_97)) {
					entity::set_vehicle_as_no_longer_needed(&iLocal_97);
				}
			}
			iVar0++;
		}
	}
	if (func_21(&uLocal_39, vLocal_67, Global_22, 1, iLocal_96, sLocal_104, "", sLocal_105, 1, 0, 1, -1)) {
		func_19(iLocal_96, 10.5f, 2, 1056964608, 0, 1, 0);
		ai::task_leave_any_vehicle(player::player_ped_id(), 2000, 0);
		vehicle::set_vehicle_is_considered_by_player(iLocal_96, 0);
		func_14(&uLocal_39, 1, 0);
		func_13();
	}
	iVar1 = 0;
	while (iVar1 < iLocal_90) {
		if (!ped::is_ped_injured(iLocal_90[iVar1])) {
			if (!ui::does_blip_exist(iLocal_99[iVar1])) {
				iLocal_99[iVar1] = func_10(iLocal_90[iVar1], 1, 145);
				ai::open_sequence_task(&iLocal_120);
				ai::task_leave_any_vehicle(0, 0, 0);
				ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
				ai::close_sequence_task(iLocal_120);
				ai::task_perform_sequence(iLocal_90[iVar1], iLocal_120);
				ai::clear_sequence_task(&iLocal_120);
				ped::set_ped_keep_task(iLocal_90[iVar1], 1);
			}
			if (!entity::is_entity_at_entity(iLocal_90[iVar1], player::player_ped_id(), 100f, 100f, 100f, 0, 1, 0)) {
				if (ui::does_blip_exist(iLocal_99[iVar1])) {
					ui::remove_blip(&iLocal_99[iVar1]);
				}
				ai::task_smart_flee_ped(iLocal_90[iVar1], player::player_ped_id(), 1000f, -1, 0, 0);
				ped::set_ped_keep_task(iLocal_90[iVar1], 1);
				entity::set_ped_as_no_longer_needed(&iLocal_90[iVar1]);
			}
		}
		else if (ui::does_blip_exist(iLocal_99[iVar1])) {
			ui::remove_blip(&iLocal_99[iVar1]);
		}
		iVar1++;
	}
}

// Position - 0xA72
int func_10(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = func_11(iParam0, !iParam1, 0);
	if (iParam2 != 145 && ui::does_blip_exist(iVar0) &&
		ui::does_text_label_exist(&Global_101700.f_27009[iParam2 /*29*/].f_3)) {
		ui::set_blip_name_from_text_file(iVar0, &Global_101700.f_27009[iParam2 /*29*/].f_3);
	}
	return iVar0;
}

// Position - 0xAC4
int func_11(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	iVar0 = ui::add_blip_for_entity(iParam0);
	if (entity::is_entity_a_vehicle(iParam0)) {
		ui::set_blip_scale(iVar0, func_12(network::network_is_game_in_progress(), 1f, 1f));
		if (!iParam2) {
			ui::set_blip_as_friendly(iVar0, iParam1);
		}
		else {
			ui::set_blip_colour(iVar0, 2);
		}
	}
	else if (entity::is_entity_a_ped(iParam0)) {
		ui::set_blip_scale(iVar0, func_12(network::network_is_game_in_progress(), 0.7f, 0.7f));
		ui::set_blip_as_friendly(iVar0, iParam1);
	}
	else if (entity::is_entity_an_object(iParam0)) {
		ui::set_blip_scale(iVar0, func_12(network::network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

// Position - 0xB68
var func_12(bool bParam0, float fParam1, float fParam2) {
	if (bParam0) {
		return fParam1;
	}
	return fParam2;
}

// Position - 0xB7F
void func_13() {
	func_131(1);
	func_106();
}

// Position - 0xB90
void func_14(int *iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (gameplay::is_bit_set(uParam0->f_13, 30)) {
		iParam1 = 1;
	}
	func_18(uParam0);
	iVar0 = 0;
	while (iVar0 < 3) {
		if (ui::does_blip_exist(uParam0->f_1[iVar0])) {
			ui::remove_blip(&uParam0->f_1[iVar0]);
		}
		func_17(iVar0, uParam0);
		func_16(iVar0, uParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31) {
		if (iVar0 != 8) {
			gameplay::clear_bit(&uParam0->f_13, iVar0);
			gameplay::clear_bit(&uParam0->f_14, iVar0);
		}
		iVar0++;
	}
	if (ui::does_blip_exist(*uParam0)) {
		ui::remove_blip(uParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_12 = 0;
	iParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3) {
		if (!ped::is_ped_injured(iParam0->f_17[iVar0])) {
			ped::set_ped_can_play_ambient_anims(iParam0->f_17[iVar0], 1);
			ped::set_ped_can_play_ambient_base_anims(iParam0->f_17[iVar0], 1);
			if (iParam2) {
				ped::set_ped_config_flag(iParam0->f_17[iVar0], 32, 1);
				ped::set_ped_config_flag(iParam0->f_17[iVar0], 305, 0);
			}
			ped::set_ped_config_flag(iParam0->f_17[iVar0], 268, 0);
			if (iParam1) {
				if (ped::is_ped_group_member(iParam0->f_17[iVar0], func_15()) &&
					iParam0->f_17[iVar0] != player::player_ped_id()) {
					ped::remove_ped_from_group(iParam0->f_17[iVar0]);
				}
			}
			if (!gameplay::is_bit_set(iParam0->f_13, 29)) {
				ped::set_ped_using_action_mode(iParam0->f_17[iVar0], 0, -1, 0);
			}
			iParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (player::is_player_playing(player::player_id())) {
		ped::set_ped_can_play_ambient_anims(player::player_ped_id(), 1);
		ped::set_ped_can_play_ambient_base_anims(player::player_ped_id(), 1);
	}
	if (player::is_player_playing(player::player_id())) {
		if (iParam2) {
			ped::set_ped_config_flag(player::player_ped_id(), 32, 1);
		}
	}
	iParam0->f_21 = 0;
}

// Position - 0xD41
var func_15() { return player::get_player_group(player::get_player_index()); }

// Position - 0xD51
void func_16(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0: gameplay::clear_bit(&uParam1->f_13, 17); break;

	case 1: gameplay::clear_bit(&uParam1->f_13, 18); break;

	case 2: gameplay::clear_bit(&uParam1->f_13, 19); break;
	}
}

// Position - 0xD99
void func_17(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0: gameplay::clear_bit(&uParam1->f_13, 14); break;

	case 1: gameplay::clear_bit(&uParam1->f_13, 15); break;

	case 2: gameplay::clear_bit(&uParam1->f_13, 16); break;
	}
}

// Position - 0xDE1
void func_18(var *uParam0) {
	if (ui::does_blip_exist(uParam0->f_5)) {
		ui::remove_blip(&uParam0->f_5);
	}
}

// Position - 0xDFC
int func_19(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6) {
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
	func_20(iParam0);
	if (gameplay::get_game_timer() - Global_29 > 500) {
		vehicle::_set_vehicle_halt(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = gameplay::get_game_timer();
	if (!entity::is_entity_dead(iParam0, 0)) {
		if (gameplay::absf(entity::get_entity_speed(iParam0)) <= fParam3) {
			return 1;
		}
	}
	return 0;
}

// Position - 0xF8B
void func_20(int iParam0) {
	if (vehicle::_get_has_vehicle_got_rocket_boost(iParam0)) {
		if (vehicle::_is_vehicle_rocket_boost_active(iParam0)) {
			vehicle::_set_rocket_boost_active(iParam0, 0);
		}
	}
}

// Position - 0xFAC
bool func_21(var *uParam0, vector3 vParam1, vector3 vParam4, int iParam7, int iParam8, char *sParam9, char *sParam10,
			 char *sParam11, int iParam12, int iParam13, int iParam14, int iParam15) {
	return func_22(uParam0, vParam1, vParam4, func_64(), func_64(), iParam7, 5, 0, 0, 0, iParam8, sParam9, func_63(),
				   func_63(), func_63(), func_63(), sParam10, 0, iParam12, sParam11, 0, iParam13, iParam14, iParam15, 0,
				   0, 0, 1, 1065353216);
}

// Position - 0xFFB
int func_22(int *iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, vector3 vParam10, int iParam13,
			int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char *sParam19, char *sParam20,
			char *sParam21, char *sParam22, char *sParam23, char *sParam24, int iParam25, bool bParam26, char *sParam27,
			int iParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34,
			int iParam35, float fParam36) {
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	vVar3 = {vParam1 + Vector(1f, 0f, 0f)};
	uParam0->f_17[0] = iParam15;
	uParam0->f_17[1] = iParam16;
	uParam0->f_17[2] = iParam17;
	uParam0->f_16 = iParam15;
	func_62(uParam0);
	func_61(uParam0);
	func_60();
	if (func_44(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23,
				uParam0->f_8, iParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26)) {
		func_43(sParam20);
		func_43(sParam21);
		func_43(sParam22);
		func_43(sParam23);
		if (cam::is_screen_faded_in()) {
			bVar1 = false;
			if (vehicle::is_vehicle_driveable(iParam18, 0)) {
				if (ped::is_ped_in_vehicle(player::player_ped_id(), iParam18, 0)) {
					gameplay::set_bit(&uParam0->f_13, 3);
					if (!gameplay::is_bit_set(uParam0->f_13, 9)) {
						gameplay::clear_bit(&uParam0->f_13, 4);
					}
					if (gameplay::is_bit_set(uParam0->f_13, 23)) {
						gameplay::clear_bit(&uParam0->f_13, 23);
					}
					gameplay::set_bit(&uParam0->f_13, 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5) {
				if (func_41(uParam0, iParam29)) {
					gameplay::set_bit(&uParam0->f_13, 3);
					if (!gameplay::is_bit_set(uParam0->f_13, 9)) {
						gameplay::clear_bit(&uParam0->f_13, 4);
					}
					gameplay::set_bit(&uParam0->f_13, 9);
					bVar1 = true;
				}
			}
			else {
				bVar1 = true;
			}
			if (bVar1) {
				func_43(sParam24);
				func_43(sParam27);
				func_43("MORE_SEATS");
				if (bParam26 && player::is_player_wanted_level_greater(player::player_id(), 0)) {
					if (ui::does_blip_exist(uParam0->f_5)) {
						ui::remove_blip(&uParam0->f_5);
						func_43(sParam19);
					}
					if (ui::does_blip_exist(*uParam0)) {
						ui::remove_blip(uParam0);
					}
					if (!func_37(iParam0, 1) && !func_36(iParam0) && !gameplay::is_bit_set(iParam0->f_13, 0)) {
						if (bParam30) {
							func_34(iParam0, "LOSE_WANTED", 0);
							if (!ped::is_ped_injured(iParam0->f_17[0])) {
								func_32(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						gameplay::set_bit(&iParam0->f_13, 0);
						gameplay::clear_bit(&iParam0->f_13, 1);
					}
				}
				else {
					if (gameplay::is_bit_set(iParam0->f_13, 0)) {
						func_43("LOSE_WANTED");
						gameplay::clear_bit(&iParam0->f_13, 0);
						gameplay::set_bit(&iParam0->f_13, 1);
					}
					if (gameplay::is_bit_set(iParam0->f_13, 1)) {
						if (!func_37(iParam0, 1)) {
							if (!ped::is_ped_injured(iParam0->f_17[0])) {
								func_32(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							gameplay::clear_bit(&iParam0->f_13, 1);
						}
					}
					if (!ui::does_blip_exist(iParam0->f_5)) {
						if (ui::does_blip_exist(*iParam0)) {
							ui::remove_blip(iParam0);
						}
						iParam0->f_5 = func_31(vVar3, 0);
						if (iParam31 != -1) {
							ui::set_blip_sprite(iParam0->f_5, iParam31);
						}
						if (iParam35) {
							func_30(iParam0->f_5, iParam0);
						}
					}
					else if (!func_29(vVar3, ui::get_blip_coords(iParam0->f_5), 0.1f, 0)) {
						ui::set_blip_coords(iParam0->f_5, vVar3);
						if (iParam35) {
							func_30(iParam0->f_5, iParam0);
						}
					}
					if (!func_37(iParam0, 2)) {
						if (!gameplay::is_bit_set(iParam0->f_13, 2)) {
							func_34(iParam0, sParam19, 0);
							gameplay::set_bit(&iParam0->f_13, 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5) {
						if (gameplay::is_bit_set(iParam0->f_13, 13)) {
							iParam13 = 0;
						}
					}
					bVar1 = false;
					iVar6 = 0;
					iVar7 = 0;
					if (iParam14 == 1 || iParam14 == 3 || iParam14 == 5) {
						iVar6 = 1;
					}
					if (iParam14 == 2 || iParam14 == 3) {
						iVar7 = 1;
					}
					else if (iParam14 == 4 || iParam14 == 5) {
						iVar7 = 2;
					}
					if (iParam28) {
						entity::is_entity_at_coord(player::player_ped_id(), vParam1, vParam4, iParam13, iVar6, iVar7);
						if (entity::is_entity_in_angled_area(player::player_ped_id(), vParam7, vParam10, fParam36, 0,
															 iVar6, iVar7)) {
							bVar1 = true;
						}
					}
					else if (entity::is_entity_at_coord(player::player_ped_id(), vParam1, vParam4, iParam13, iVar6,
														iVar7)) {
						bVar1 = true;
					}
					if (bVar1) {
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3) {
							if (!ped::is_ped_injured(iParam0->f_17[iVar2])) {
								if (iParam14 == 4 || iParam14 == 5) {
									iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
									if (!ped::is_ped_in_vehicle(iParam0->f_17[iVar2], iVar0, 0)) {
										bVar1 = false;
									}
								}
								else if (iParam18 != 0) {
									if (!ped::is_ped_in_vehicle(iParam0->f_17[iVar2], iParam18, 0)) {
										bVar1 = false;
									}
								}
								else if (!ped::is_ped_group_member(iParam0->f_17[iVar2], func_15()) ||
										 !func_27(iParam0->f_17[iVar2], 1)) {
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1) {
							if (func_24(iParam0)) {
								func_43(sParam19);
								func_43(sParam24);
								func_43(sParam20);
								func_43(sParam21);
								func_43(sParam22);
								func_43(sParam23);
								func_43("LOSE_WANTED");
								func_43("MORE_SEATS");
								func_43(sParam27);
								func_14(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (entity::does_entity_exist(iParam18)) {
				if (bParam26 && player::is_player_wanted_level_greater(player::player_id(), 0) &&
					!gameplay::is_bit_set(iParam0->f_13, 9) && !gameplay::is_bit_set(iParam0->f_13, 22)) {
					func_43(sParam24);
					func_43(sParam27);
					if (ui::does_blip_exist(iParam0->f_5) || ui::does_blip_exist(*iParam0)) {
						ui::remove_blip(&iParam0->f_5);
						ui::remove_blip(iParam0);
						func_43(sParam19);
					}
					if (!func_37(iParam0, 1) && !func_36(iParam0) && !gameplay::is_bit_set(iParam0->f_13, 0)) {
						if (bParam30) {
							func_34(iParam0, "LOSE_WANTED", 0);
							if (!ped::is_ped_injured(iParam0->f_17[0])) {
								func_32(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						gameplay::set_bit(&iParam0->f_13, 0);
						gameplay::clear_bit(&iParam0->f_13, 1);
					}
				}
				else {
					if (gameplay::is_bit_set(iParam0->f_13, 0)) {
						func_43("LOSE_WANTED");
						gameplay::clear_bit(&iParam0->f_13, 0);
						gameplay::set_bit(&iParam0->f_13, 1);
					}
					if (gameplay::is_bit_set(iParam0->f_13, 1)) {
						if (!func_37(iParam0, 1)) {
							if (!ped::is_ped_injured(iParam0->f_17[0])) {
								func_32(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							gameplay::clear_bit(&iParam0->f_13, 1);
						}
					}
					if (vehicle::is_vehicle_driveable(iParam18, 0)) {
						if (!ui::does_blip_exist(*iParam0)) {
							if (ui::does_blip_exist(iParam0->f_5)) {
								ui::remove_blip(&iParam0->f_5);
								func_43(sParam19);
							}
							*iParam0 = func_23(iParam18, 0, 0);
							ui::set_blip_display(*iParam0, 2);
							if (!gameplay::is_bit_set(iParam0->f_13, 4)) {
								func_30(*iParam0, iParam0);
							}
						}
						if (!func_37(iParam0, 2)) {
							if (!gameplay::is_bit_set(iParam0->f_13, 3)) {
								func_34(iParam0, sParam24, 0);
								gameplay::set_bit(&iParam0->f_13, 3);
								gameplay::clear_bit(&iParam0->f_13, 4);
							}
							else if (gameplay::is_bit_set(iParam0->f_13, 9)) {
								if (!gameplay::is_string_null(sParam27)) {
									if (!gameplay::is_bit_set(iParam0->f_13, 4)) {
										func_34(iParam0, sParam27, 0);
										gameplay::set_bit(&iParam0->f_13, 4);
									}
								}
								else if (!gameplay::is_bit_set(iParam0->f_13, 4)) {
									func_34(iParam0, sParam24, 0);
									gameplay::set_bit(&iParam0->f_13, 4);
								}
								if (!gameplay::is_bit_set(iParam0->f_13, 23)) {
									if (!ped::is_ped_injured(iParam0->f_17[0])) {
										func_32(iParam0->f_17[0], "GET_IN_CAR", 3);
									}
									gameplay::set_bit(&iParam0->f_13, 23);
								}
							}
						}
					}
				}
			}
			else {
				if (ui::does_blip_exist(iParam0->f_5)) {
					ui::remove_blip(&iParam0->f_5);
					func_43(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5) {
					if (iParam29 > 0) {
						if (!func_37(iParam0, 2)) {
							if (ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
								if (!gameplay::is_bit_set(iParam0->f_13, 13)) {
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3) {
										if (!ped::is_ped_injured(iParam0->f_17[iVar2])) {
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = gameplay::get_random_int_in_range(0, iVar8);
									if (!ped::is_ped_injured(iParam0->f_17[iVar9])) {
										func_32(iParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_34(iParam0, "MORE_SEATS", 0);
									gameplay::set_bit(&iParam0->f_13, 13);
								}
							}
							else if (!gameplay::is_bit_set(iParam0->f_13, 3)) {
								func_34(iParam0, sParam24, 0);
								gameplay::set_bit(&iParam0->f_13, 3);
								gameplay::clear_bit(&iParam0->f_13, 4);
							}
							else if (!gameplay::is_bit_set(iParam0->f_13, 4)) {
								if (gameplay::is_bit_set(iParam0->f_13, 9)) {
									func_34(iParam0, sParam27, 0);
									gameplay::set_bit(&iParam0->f_13, 4);
								}
							}
						}
					}
					else if (!func_37(iParam0, 2)) {
						if (!gameplay::is_bit_set(iParam0->f_13, 3)) {
							func_34(iParam0, sParam24, 0);
							gameplay::set_bit(&iParam0->f_13, 3);
							gameplay::clear_bit(&iParam0->f_13, 4);
						}
						else if (gameplay::is_bit_set(iParam0->f_13, 9)) {
							if (!gameplay::is_string_null(sParam27)) {
								if (!gameplay::is_bit_set(iParam0->f_13, 4)) {
									func_34(iParam0, sParam27, 0);
									gameplay::set_bit(&iParam0->f_13, 4);
								}
							}
							else if (!gameplay::is_bit_set(iParam0->f_13, 4)) {
								func_34(iParam0, sParam24, 0);
								gameplay::set_bit(&iParam0->f_13, 4);
							}
						}
					}
				}
			}
		}
	}
	else {
		if (gameplay::is_bit_set(iParam0->f_13, 0)) {
			gameplay::clear_bit(&iParam0->f_13, 0);
		}
		func_43(sParam19);
		func_43(sParam24);
		func_43(sParam27);
		func_43(sParam24);
		func_43("LOSE_WANTED");
		if (ui::does_blip_exist(iParam0->f_5)) {
			ui::remove_blip(&iParam0->f_5);
		}
		if (ui::does_blip_exist(*iParam0)) {
			ui::remove_blip(iParam0);
		}
	}
	gameplay::clear_bit(&iParam0->f_13, 11);
	gameplay::clear_bit(&iParam0->f_13, 12);
	return 0;
}

// Position - 0x1954
int func_23(int iParam0, int iParam1, int iParam2) { return func_11(iParam0, !iParam1, iParam2); }

// Position - 0x1967
bool func_24(var *uParam0) {
	if (gameplay::is_bit_set(uParam0->f_13, 12)) {
		if (func_26(player::player_ped_id())) {
			if (func_25(1, 0, 1) || gameplay::is_bit_set(uParam0->f_13, 7)) {
				return true;
			}
		}
	}
	else if (func_25(1, 0, 1) || gameplay::is_bit_set(uParam0->f_13, 7)) {
		return true;
	}
	return false;
}

// Position - 0x19C5
int func_25(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (gameplay::is_minigame_in_progress()) {
		return 0;
	}
	if (iParam0) {
		if (entity::is_entity_dead(player::player_ped_id(), 0)) {
			return 0;
		}
	}
	iVar0 = 0;
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
			return 0;
		}
		iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
		if (iParam0) {
			if (entity::is_entity_dead(iVar0, 0)) {
				return 0;
			}
		}
		if (iParam2) {
			if (!entity::is_entity_dead(iVar0, 0)) {
				if (vehicle::get_ped_in_vehicle_seat(iVar0, -1, 0) != player::player_ped_id()) {
					return 0;
				}
			}
		}
		if (!entity::is_entity_dead(iVar0, 0)) {
			if (entity::get_entity_upright_value(iVar0) < 0.95f || entity::get_entity_upright_value(iVar0) > 1.011f) {
				return 0;
			}
		}
	}
	else if (iParam1) {
		return 0;
	}
	if (!player::is_player_ready_for_cutscene(player::player_id())) {
		return 0;
	}
	if (!player::can_player_start_mission(player::player_id())) {
		return 0;
	}
	return 1;
}

// Position - 0x1AAA
bool func_26(int iParam0) {
	float fVar0;

	if (!ped::is_ped_injured(iParam0)) {
		fVar0 = entity::get_entity_speed(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f) {
			return true;
		}
	}
	return false;
}

// Position - 0x1AE1
int func_27(int iParam0, int iParam1) {
	if (!ped::is_ped_injured(iParam0)) {
		if (ped::is_ped_sitting_in_any_vehicle(player::player_ped_id()) && iParam1) {
			if (func_28(player::player_ped_id(), iParam0)) {
				ped::set_group_separation_range(func_15(), 50f);
				return 1;
			}
		}
		else if (ped::is_ped_group_member(iParam0, func_15())) {
			ped::set_group_separation_range(func_15(), 50f);
			return 1;
		}
	}
	else {
		return 1;
	}
	return 0;
}

// Position - 0x1B4C
bool func_28(int iParam0, int iParam1) {
	int iVar0;

	if (!ped::is_ped_injured(iParam0)) {
		if (ped::is_ped_sitting_in_any_vehicle(iParam0)) {
			iVar0 = ped::get_vehicle_ped_is_in(iParam0, 0);
			if (vehicle::is_vehicle_driveable(iVar0, 0)) {
				if (!ped::is_ped_injured(iParam1)) {
					if (ped::is_ped_sitting_in_vehicle(iParam1, iVar0)) {
						return true;
					}
				}
			}
		}
	}
	return false;
}

// Position - 0x1B94
int func_29(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7) {
	if (fParam6 < 0f) {
		fParam6 = 0f;
	}
	if (!iParam7) {
		if (gameplay::absf(vParam0.x - vParam3.x) <= fParam6) {
			if (gameplay::absf(vParam0.y - vParam3.y) <= fParam6) {
				if (gameplay::absf(vParam0.z - vParam3.z) <= fParam6) {
					return 1;
				}
			}
		}
	}
	else if (gameplay::absf(vParam0.x - vParam3.x) <= fParam6) {
		if (gameplay::absf(vParam0.y - vParam3.y) <= fParam6) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x1C0F
void func_30(int iParam0, var *uParam1) {
	if (ui::does_blip_exist(iParam0)) {
		if (ui::does_blip_exist(uParam1->f_6)) {
			ui::set_blip_route(uParam1->f_6, 0);
		}
		ui::_0x3DDA37128DD1ACA8(0);
		ui::_0x67EEDEA1B9BAFD94();
		uParam1->f_6 = iParam0;
		ui::set_blip_route(iParam0, 1);
	}
}

// Position - 0x1C4A
int func_31(vector3 vParam0, int iParam3) {
	int iVar0;

	iVar0 = ui::add_blip_for_coord(vParam0);
	ui::set_blip_scale(iVar0, func_12(network::network_is_game_in_progress(), 1f, 1f));
	ui::set_blip_route(iVar0, iParam3);
	return iVar0;
}

// Position - 0x1C76
void func_32(int iParam0, char *sParam1, int iParam2) {
	audio::_play_ambient_speech1(iParam0, sParam1, func_33(iParam2), 1);
}

// Position - 0x1C8D
int func_33(int iParam0) {
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

// Position - 0x1E7F
void func_34(var *uParam0, char *sParam1, int iParam2) {
	if (!iParam2) {
		if (!gameplay::is_string_null(sParam1)) {
			if (!gameplay::are_strings_equal(sParam1, "")) {
				func_35(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = gameplay::get_game_timer();
}

// Position - 0x1EB6
void func_35(char *sParam0, int iParam1, int iParam2) {
	iParam2 = iParam2;
	ui::begin_text_command_print(sParam0);
	ui::end_text_command_print(iParam1, 1);
}

// Position - 0x1ECF
int func_36(int *iParam0) {
	if (!ped::is_ped_injured(iParam0->f_16)) {
		if (audio::is_ambient_speech_playing(iParam0->f_16)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x1EF3
int func_37(int *iParam0, int iParam1) {
	if (iParam1 != 1 || ui::is_subtitle_preference_switched_on()) {
		if (ui::is_message_being_displayed()) {
			return 1;
		}
		if (func_40(iParam0)) {
			return 1;
		}
	}
	if (iParam1 != 2 || ui::is_subtitle_preference_switched_on()) {
		if (func_39() && !func_38()) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x1F4B
int func_38() {
	if (Global_16756 == 1) {
		return 1;
	}
	return 0;
}

// Position - 0x1F62
int func_39() {
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return 1;
	}
	return 0;
}

// Position - 0x1F84
bool func_40(var *uParam0) {
	int iVar0;
	int iVar1;

	iVar1 = gameplay::get_game_timer();
	iVar0 = iVar1 - uParam0->f_10;
	if (iVar0 < 35) {
		return true;
	}
	return false;
}

// Position - 0x1FA7
bool func_41(var *uParam0, int iParam1) {
	int iVar0;

	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
		if (func_42(iVar0, uParam0, iParam1)) {
			return true;
		}
	}
	return false;
}

// Position - 0x1FD8
bool func_42(int iParam0, var *uParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3) {
			if (entity::does_entity_exist(uParam1->f_17[iVar2])) {
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = vehicle::get_vehicle_max_number_of_passengers(iParam0);
		if (iParam2 > 0) {
			if (iVar1 >= iParam2) {
				if (iParam2 > 1) {
					if (!vehicle::_0xF7F203E31F96F6A1(iParam0, 1)) {
						return true;
					}
				}
				else {
					return true;
				}
			}
		}
		else if (iVar1 >= iVar0) {
			if (iVar0 > 1) {
				if (!vehicle::_0xF7F203E31F96F6A1(iParam0, 1)) {
					return true;
				}
			}
			else {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x206C
void func_43(char *sParam0) {
	if (!gameplay::is_string_null(sParam0)) {
		ui::clear_this_print(sParam0);
	}
}

// Position - 0x2084
bool func_44(var *uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char *sParam7,
			 float fParam8, bool bParam9, int iParam10, int iParam11, int iParam12, var uParam13, var uParam14,
			 var uParam15, int iParam16, bool bParam17) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	var uVar15[3];
	var uVar19[3];
	bool bVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	vector3 vVar28;
	int iVar31;
	int iVar32;

	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar15[0] = uParam4;
	uVar15[1] = uParam5;
	uVar15[2] = uParam6;
	uVar19[0] = uParam13;
	uVar19[1] = uParam14;
	uVar19[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3) {
		if (!ped::is_ped_injured(uParam0->f_17[iVar0])) {
			iVar3++;
		}
		if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
			if (!gameplay::is_bit_set(uParam0->f_13, 29) && !gameplay::is_bit_set(uParam0->f_13, 28)) {
				if (!ped::is_ped_injured(uParam0->f_17[iVar0])) {
					ped::set_ped_using_action_mode(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2) {
					gameplay::set_bit(&uParam0->f_13, 28);
				}
			}
		}
		else if (!gameplay::is_bit_set(uParam0->f_13, 29) && gameplay::is_bit_set(uParam0->f_13, 28)) {
			if (!ped::is_ped_injured(uParam0->f_17[iVar0])) {
				ped::set_ped_using_action_mode(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2) {
				gameplay::clear_bit(&uParam0->f_13, 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0) {
		return true;
	}
	if (gameplay::is_bit_set(uParam0->f_13, 26)) {
		bVar23 = false;
		if (!entity::does_entity_exist(uParam0->f_21)) {
			iVar25 = 64;
			iVar25 |= 65536;
			iVar25 |= 2048;
			iVar25 |= 1;
			iVar25 |= 2;
			iVar25 |= 4;
			iVar25 |= 32;
			iVar25 |= 16;
			iVar25 |= 8;
			iVar24 =
				vehicle::get_closest_vehicle(entity::get_entity_coords(player::player_ped_id(), 1), 50f, 0, iVar25);
			if (vehicle::is_vehicle_driveable(iVar24, 0)) {
				uParam0->f_21 = iVar24;
			}
		}
		if (vehicle::is_vehicle_driveable(uParam0->f_21, 0)) {
			if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1),
							   entity::get_entity_coords(uParam0->f_21, 1)) < 400f) {
				if (!ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
					if (!player::is_player_wanted_level_greater(player::player_id(), 0) || !bParam17) {
						if (func_42(uParam0->f_21, uParam0, iVar3)) {
							iVar0 = 0;
							while (iVar0 < 3) {
								if (!ped::is_ped_injured(uParam0->f_17[iVar0])) {
									ped::set_ped_max_move_blend_ratio(uParam0->f_17[iVar0], 1f);
									if (ped::is_ped_group_member(uParam0->f_17[iVar0], func_15())) {
										ped::remove_ped_from_group(uParam0->f_17[iVar0]);
									}
									if (ai::get_script_task_status(uParam0->f_17[iVar0], -1794415470) == 7 &&
										!func_59(uParam0->f_17[iVar0], uParam0->f_21)) {
										if (!ped::is_ped_ragdoll(uParam0->f_17[iVar0]) &&
											!ai::is_ped_getting_up(uParam0->f_17[iVar0])) {
											ped::set_blocking_of_non_temporary_events(uParam0->f_17[iVar0], 1);
											ai::task_enter_vehicle(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0,
																   1f, 1, 0);
											ped::set_ped_group_member_passenger_index(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return true;
						}
						else {
							bVar23 = true;
						}
					}
					else {
						bVar23 = true;
					}
				}
				else {
					bVar23 = true;
				}
			}
			else {
				bVar23 = true;
			}
		}
		else {
			bVar23 = true;
		}
		if (bVar23) {
			gameplay::clear_bit(&uParam0->f_13, 26);
			iVar0 = 0;
			while (iVar0 < 3) {
				if (!ped::is_ped_injured(uParam0->f_17[iVar0])) {
					if (!ped::is_ped_getting_into_a_vehicle(uParam0->f_17[iVar0]) && !uParam0->f_15) {
						ai::clear_ped_tasks(uParam0->f_17[iVar0]);
					}
					if (!ped::is_ped_group_member(uParam0->f_17[iVar0], func_15())) {
						if (func_57(uParam0, uParam0->f_17[iVar0], fParam8, 1)) {
							ped::set_ped_as_group_member(uParam0->f_17[iVar0], func_15());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!gameplay::is_bit_set(uParam0->f_13, 26)) {
		if (!func_56(uParam0) && ped::is_ped_sitting_in_any_vehicle(player::player_ped_id()) &&
			!entity::does_entity_exist(iParam10)) {
			iVar13 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
			if (vehicle::is_vehicle_driveable(iVar13, 0)) {
				if (!gameplay::is_bit_set(uParam0->f_13, 13)) {
					if (iParam16 == 4 || iParam16 == 5) {
					}
					if (!func_37(uParam0, 2)) {
						iVar26 = 0;
						iVar27 = 0;
						iVar0 = 0;
						while (iVar0 < 3) {
							if (!ped::is_ped_injured(uParam0->f_17[iVar0])) {
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = gameplay::get_random_int_in_range(0, iVar26);
						if (!ped::is_ped_injured(uParam0->f_17[iVar27])) {
							func_32(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_34(uParam0, "MORE_SEATS", 0);
						gameplay::set_bit(&uParam0->f_13, 13);
					}
				}
				iVar12 = 1;
			}
		}
		else {
			iVar12 = 0;
			gameplay::clear_bit(&uParam0->f_13, 13);
			func_43("MORE_SEATS");
		}
		if (!entity::does_entity_exist(iParam10)) {
			if (!ped::is_ped_injured(uParam0->f_17[0]) || !ped::is_ped_injured(uParam0->f_17[1]) ||
				!ped::is_ped_injured(uParam0->f_17[2])) {
				if (!gameplay::is_bit_set(uParam0->f_13, 31)) {
					if (ped::is_ped_sitting_in_any_vehicle(player::player_ped_id()) && !func_37(uParam0, 2)) {
						iVar13 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
						if (func_55(iVar13, uParam0)) {
							func_34(uParam0, "CMN_VEHSUIT", 0);
							gameplay::set_bit(&uParam0->f_13, 31);
						}
					}
				}
				else if (!ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
					gameplay::clear_bit(&uParam0->f_13, 31);
					func_43("CMN_VEHSUIT");
				}
			}
		}
		if (vehicle::is_vehicle_driveable(iParam10, 0)) {
			if (ped::is_ped_sitting_in_vehicle(player::player_ped_id(), iParam10)) {
				if (controls::is_control_just_pressed(0, 75)) {
					gameplay::set_bit(&uParam0->f_13, 21);
				}
			}
			else if (gameplay::is_bit_set(uParam0->f_13, 21)) {
				gameplay::clear_bit(&uParam0->f_13, 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3) {
			if (entity::does_entity_exist(uParam0->f_17[iVar0])) {
				if (!ped::is_ped_injured(uParam0->f_17[iVar0])) {
					if (!ped::is_ped_group_member(uParam0->f_17[iVar0], func_15())) {
						ped::set_ped_dies_in_water(uParam0->f_17[iVar0], 1);
					}
					else {
						ped::set_ped_dies_in_water(uParam0->f_17[iVar0], 0);
					}
					if (ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
						iVar13 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
						if (vehicle::is_vehicle_driveable(iVar13, 0)) {
							if (ped::is_ped_group_member(uParam0->f_17[iVar0], func_15())) {
								if (!func_56(uParam0) && ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
									if (!func_54(uParam0->f_17[iVar0])) {
										ped::remove_ped_from_group(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !entity::is_entity_dead(iVar13, 0)) {
							if (ped::is_ped_sitting_in_vehicle(uParam0->f_17[iVar0], iVar13)) {
								if (entity::is_entity_in_water(iVar13) && !vehicle::is_vehicle_on_all_wheels(iVar13)) {
									vVar28 = {entity::get_entity_coords(iVar13, 1)};
									if (vVar28.z < -1f) {
										ai::task_leave_vehicle(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!ped::is_ped_group_member(uParam0->f_17[iVar0], func_15())) {
						if (ped::is_ped_sitting_in_any_vehicle(uParam0->f_17[iVar0])) {
							iVar13 = ped::get_vehicle_ped_is_in(uParam0->f_17[iVar0], 0);
							if (!entity::is_entity_dead(iVar13, 0)) {
								if (vehicle::is_vehicle_driveable(iParam10, 0)) {
									if (iVar13 != iParam10) {
										if (!ped::is_ped_sitting_in_vehicle(player::player_ped_id(), iVar13)) {
											if (entity::get_entity_speed(iVar13) > 5f) {
												ai::task_leave_vehicle(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else {
												ai::task_leave_vehicle(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else {
									if (ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
										iVar31 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
									}
									if (vehicle::is_vehicle_driveable(iVar31, 0)) {
										if (iVar13 != iVar31) {
											if (entity::get_entity_speed(iVar13) > 5f) {
												ai::task_leave_vehicle(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else {
												ai::task_leave_vehicle(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (ped::is_ped_group_member(uParam0->f_17[iVar0], func_15())) {
						iVar32 = ped::get_vehicle_ped_is_using(player::player_ped_id());
						if (entity::does_entity_exist(iVar32)) {
							if (func_42(iVar32, uParam0, 0)) {
								if (func_53(iVar0, uParam0) || !gameplay::is_bit_set(uParam0->f_13, 27)) {
									ped::set_ped_group_member_passenger_index(uParam0->f_17[iVar0], iVar0);
									func_16(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3) {
										gameplay::set_bit(&uParam0->f_13, 27);
									}
								}
							}
							else if (!func_53(iVar0, uParam0)) {
								if (entity::get_entity_model(iVar32) == joaat("sentinel2")) {
									ped::set_ped_group_member_passenger_index(uParam0->f_17[iVar0], 4);
								}
								else {
									ped::set_ped_group_member_passenger_index(uParam0->f_17[iVar0], 2);
								}
								func_52(iVar0, uParam0);
							}
						}
					}
					if (!ped::is_ped_group_member(uParam0->f_17[iVar0], func_15()) &&
						!func_51(uParam0->f_17[iVar0], iParam10) && !func_50(uParam0->f_17[iVar0], iParam10)) {
						if (func_57(uParam0, uParam0->f_17[iVar0], fParam8, iParam11)) {
							if (!ped::is_ped_group_member(uParam0->f_17[iVar0], func_15())) {
								if (!ped::is_ped_ragdoll(uParam0->f_17[iVar0]) &&
									!ai::is_ped_getting_up(uParam0->f_17[iVar0]) &&
									!ped::is_ped_jumping_out_of_vehicle(uParam0->f_17[iVar0]) &&
									!ped::is_ped_getting_into_a_vehicle(uParam0->f_17[iVar0])) {
									iVar14 = ai::get_script_task_status(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7) {
										ai::clear_ped_tasks(uParam0->f_17[iVar0]);
									}
									ped::set_ped_as_group_member(uParam0->f_17[iVar0], func_15());
									bVar11 = false;
								}
							}
						}
						if (bVar11) {
							if (!ui::does_blip_exist(uParam0->f_1[iVar0])) {
								uParam0->f_11 = gameplay::get_game_timer();
								uParam0->f_1[iVar0] = func_23(uParam0->f_17[iVar0], 0, 0);
								ui::set_blip_display(uParam0->f_1[iVar0], 2);
								if (bParam9) {
									func_30(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (ui::does_blip_exist(uParam0->f_1[iVar0])) {
						if (func_27(uParam0->f_17[iVar0], 1) || func_51(uParam0->f_17[iVar0], iParam10) || iParam12 ||
							vehicle::is_vehicle_driveable(iParam10, 0) &&
								!ped::is_ped_in_vehicle(player::player_ped_id(), iParam10, 0)) {
							if (ui::does_blip_exist(uParam0->f_1[iVar0])) {
								ui::remove_blip(&uParam0->f_1[iVar0]);
								func_43(uVar15[iVar0]);
							}
						}
						else {
							if (bParam9) {
								func_30(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (vehicle::is_vehicle_driveable(iParam10, 0)) {
						if (!ped::is_ped_sitting_in_vehicle(uParam0->f_17[iVar0], iParam10)) {
							if (entity::is_entity_at_entity(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) &&
								!gameplay::is_bit_set(uParam0->f_13, 11) &&
								!(bParam17 && player::is_player_wanted_level_greater(player::player_id(), 0) &&
								  !ped::is_ped_in_vehicle(player::player_ped_id(), iParam10, 0))) {
								if (ped::is_ped_sitting_in_any_vehicle(uParam0->f_17[iVar0])) {
									if (!ped::is_ped_in_vehicle(uParam0->f_17[iVar0], iParam10, 0)) {
										if (!func_27(uParam0->f_17[iVar0], 1)) {
											if (func_26(uParam0->f_17[iVar0])) {
												iVar14 = ai::get_script_task_status(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7) {
													ai::task_leave_any_vehicle(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else {
									if (ped::is_ped_group_member(uParam0->f_17[iVar0], func_15())) {
										if (!ped::is_ped_jumping_out_of_vehicle(uParam0->f_17[iVar0]) &&
											!ped::is_ped_ragdoll(uParam0->f_17[iVar0]) &&
											!ai::is_ped_getting_up(uParam0->f_17[iVar0]) &&
											!ped::is_ped_getting_into_a_vehicle(uParam0->f_17[iVar0]) &&
											!fire::is_entity_on_fire(iParam10)) {
											ped::remove_ped_from_group(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = ai::get_script_task_status(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_59(uParam0->f_17[iVar0], iParam10)) {
										if (!ped::is_ped_jumping_out_of_vehicle(uParam0->f_17[iVar0]) &&
											!ped::is_ped_jumping_out_of_vehicle(player::player_ped_id()) &&
											!func_49(uParam0->f_17[iVar0], 2f) &&
											!ped::is_ped_ragdoll(uParam0->f_17[iVar0]) &&
											!ai::is_ped_getting_up(uParam0->f_17[iVar0]) &&
											!fire::is_entity_on_fire(iParam10)) {
											ped::set_blocking_of_non_temporary_events(uParam0->f_17[iVar0], 1);
											if (gameplay::is_bit_set(uParam0->f_13, 10)) {
												ped::set_ped_max_move_blend_ratio(uParam0->f_17[iVar0], 1f);
											}
											ai::task_enter_vehicle(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1,
																   0);
											ped::set_ped_get_out_upside_down_vehicle(uParam0->f_17[iVar0], 0);
										}
									}
									else if (ped::is_ped_in_vehicle(player::player_ped_id(), iParam10, 0)) {
										uParam0->f_1[iVar0] = func_23(uParam0->f_17[iVar0], 0, 0);
										ui::set_blip_display(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!ped::is_ped_group_member(uParam0->f_17[iVar0], func_15())) {
								if (func_57(uParam0, uParam0->f_17[iVar0], fParam8, iParam11)) {
									if (!ped::is_ped_ragdoll(uParam0->f_17[iVar0]) &&
										!ai::is_ped_getting_up(uParam0->f_17[iVar0])) {
										iVar14 = ai::get_script_task_status(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7) {
											ai::clear_ped_tasks(uParam0->f_17[iVar0]);
										}
										ped::set_blocking_of_non_temporary_events(uParam0->f_17[iVar0], 0);
										ped::set_ped_as_group_member(uParam0->f_17[iVar0], func_15());
									}
								}
							}
						}
						else if (ped::is_ped_sitting_in_vehicle(player::player_ped_id(), iParam10)) {
							if (!ped::is_ped_group_member(uParam0->f_17[iVar0], func_15())) {
								if (!gameplay::is_bit_set(uParam0->f_13, 21)) {
									ped::set_ped_as_group_member(uParam0->f_17[iVar0], func_15());
								}
							}
							else if (gameplay::is_bit_set(uParam0->f_13, 21)) {
								ped::remove_ped_from_group(uParam0->f_17[iVar0]);
								gameplay::set_bit(&uParam0->f_13, 21);
							}
						}
						else if (ped::is_ped_group_member(uParam0->f_17[iVar0], func_15()) &&
								 !fire::is_entity_on_fire(iParam10)) {
							ped::remove_ped_from_group(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (ui::does_blip_exist(uParam0->f_1[iVar0])) {
					ui::remove_blip(&uParam0->f_1[iVar0]);
					func_43(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3) {
			if (ui::does_blip_exist(uParam0->f_1[iVar0])) {
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_37(uParam0, 2)) {
			if (iVar1 > 0) {
				iVar0 = 0;
				while (iVar0 < 3) {
					if (iVar7[iVar0]) {
						if (!ped::is_ped_injured(uParam0->f_17[iVar0])) {
							if (func_54(uParam0->f_17[iVar0]) ||
								entity::is_entity_at_entity(uParam0->f_17[iVar0], player::player_ped_id(), uParam0->f_8,
															uParam0->f_8, uParam0->f_8, 0, 1, 0)) {
								iVar1--;
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!ped::is_ped_injured(uParam0->f_17[iVar0])) {
						if (!entity::is_entity_at_entity(uParam0->f_17[iVar0], player::player_ped_id(),
														 uParam0->f_8 * 0.85f, uParam0->f_8 * 0.85f, uParam0->f_8, 0, 1,
														 0) &&
							!func_54(uParam0->f_17[iVar0])) {
						}
					}
					iVar0++;
				}
			}
			iVar5 = gameplay::get_game_timer();
			if (iVar5 - uParam0->f_11 > 1500 || iVar3 == 1) {
				if (iVar1 > 0) {
					if (uParam0->f_12 < iVar1) {
						if ((iVar1 == iVar3 || iVar2 + iVar1 == iVar3) && iVar3 > 1) {
							if (!gameplay::is_bit_set(uParam0->f_13, 5)) {
								func_34(uParam0, sParam7, 0);
								gameplay::set_bit(&uParam0->f_13, 5);
								uParam0->f_12 = iVar1;
							}
							else {
								uParam0->f_12 = iVar1;
							}
						}
						else {
							iVar0 = 0;
							while (iVar0 < 3) {
								if (iVar7[iVar0]) {
									if (!func_48(iVar0, uParam0)) {
										if (!gameplay::is_string_null(uVar19[iVar0])) {
											if (!gameplay::are_strings_equal(uVar19[iVar0], "")) {
												func_46(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_45(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_48(iVar0, uParam0)) {
											func_34(uParam0, uVar15[iVar0], 0);
											func_45(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else {
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else {
					uParam0->f_12 = 0;
				}
			}
		}
		gameplay::clear_bit(&uParam0->f_13, 10);
		if (iVar6 && !iVar12) {
			iVar0 = 0;
			while (iVar0 < 3) {
				if (ui::does_blip_exist(uParam0->f_1[iVar0])) {
					ui::remove_blip(&uParam0->f_1[iVar0]);
					func_43(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_43("MORE_SEATS");
			return true;
		}
	}
	return false;
}

// Position - 0x30F4
void func_45(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0: gameplay::set_bit(&uParam1->f_13, 14); break;

	case 1: gameplay::set_bit(&uParam1->f_13, 15); break;

	case 2: gameplay::set_bit(&uParam1->f_13, 16); break;
	}
}

// Position - 0x313C
void func_46(var *uParam0, char *sParam1, char *sParam2, int iParam3) {
	if (!iParam3) {
		if (!gameplay::is_string_null(sParam1)) {
			if (!gameplay::are_strings_equal(sParam1, "")) {
				func_47(sParam1, sParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = gameplay::get_game_timer();
}

// Position - 0x3175
void func_47(char *sParam0, char *sParam1, int iParam2, int iParam3) {
	iParam3 = iParam3;
	ui::begin_text_command_print(sParam0);
	ui::add_text_component_substring_text_label(sParam1);
	ui::end_text_command_print(iParam2, 1);
}

// Position - 0x3194
int func_48(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0: return gameplay::is_bit_set(uParam1->f_13, 14);

	case 1: return gameplay::is_bit_set(uParam1->f_13, 15);

	case 2: return gameplay::is_bit_set(uParam1->f_13, 16);

	default:
	}
	return 0;
}

// Position - 0x31DD
int func_49(int iParam0, float fParam1) {
	int iVar0;

	if (ped::is_ped_in_any_vehicle(iParam0, 0)) {
		iVar0 = ped::get_vehicle_ped_is_in(iParam0, 0);
		if (!entity::is_entity_dead(iVar0, 0)) {
			if (entity::get_entity_speed(iVar0) > fParam1) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x3214
int func_50(int iParam0, int iParam1) {
	int iVar0;

	if (!ped::is_ped_injured(iParam0)) {
		if (!ped::is_ped_group_member(iParam0, func_15())) {
			iVar0 = ped::set_exclusive_phone_relationships(iParam0);
			if (vehicle::is_vehicle_driveable(iParam1, 0)) {
				if (entity::is_entity_at_entity(iParam0, iParam1, 20f + 10f, 20f + 10f, 10f, 0, 1, 0)) {
					if (iVar0 == iParam1) {
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

// Position - 0x327B
int func_51(int iParam0, int iParam1) {
	if (!ped::is_ped_injured(iParam0)) {
		if (entity::does_entity_exist(iParam1)) {
			if (vehicle::is_vehicle_driveable(iParam1, 0)) {
				if (ped::is_ped_sitting_in_vehicle(iParam0, iParam1)) {
					return 1;
				}
			}
		}
	}
	return 0;
}

// Position - 0x32B0
void func_52(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0: gameplay::set_bit(&uParam1->f_13, 17); break;

	case 1: gameplay::set_bit(&uParam1->f_13, 18); break;

	case 2: gameplay::set_bit(&uParam1->f_13, 19); break;
	}
}

// Position - 0x32F8
int func_53(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0: return gameplay::is_bit_set(uParam1->f_13, 17);

	case 1: return gameplay::is_bit_set(uParam1->f_13, 18);

	case 2: return gameplay::is_bit_set(uParam1->f_13, 19);

	default:
	}
	return 0;
}

// Position - 0x3341
int func_54(int iParam0) {
	int iVar0;
	int iVar1;

	if (player::is_player_playing(player::player_id())) {
		iVar0 = ped::get_vehicle_ped_is_using(player::player_ped_id());
		if (vehicle::is_vehicle_driveable(iVar0, 0)) {
			if (!ped::is_ped_injured(iParam0)) {
				iVar1 = ped::get_vehicle_ped_is_using(iParam0);
				if (vehicle::is_vehicle_driveable(iVar1, 0)) {
					if (iVar0 == iVar1) {
						if (entity::is_entity_at_entity(player::player_ped_id(), iParam0, 20f, 20f, 20f, 0, 1, 0) &&
							entity::is_entity_at_entity(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0)) {
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

// Position - 0x33CE
bool func_55(int iParam0, var *uParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		if (entity::get_entity_model(iParam0) == joaat("bus") || entity::get_entity_model(iParam0) == joaat("coach")) {
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3) {
				if (!ped::is_ped_injured(uParam1->f_17[iVar2])) {
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = vehicle::get_ped_in_vehicle_seat(iParam0, 0, 0);
			if (!ped::is_ped_injured(iVar3)) {
				if (iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1] || iVar3 == uParam1->f_17[2]) {
					iVar1++;
				}
			}
			else {
				iVar1++;
			}
			iVar4 = vehicle::get_ped_in_vehicle_seat(iParam0, 1, 0);
			if (!ped::is_ped_injured(iVar4)) {
				if (iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1] || iVar4 == uParam1->f_17[2]) {
					iVar1++;
				}
			}
			else {
				iVar1++;
			}
			iVar5 = vehicle::get_ped_in_vehicle_seat(iParam0, 2, 0);
			if (!ped::is_ped_injured(iVar5)) {
				if (iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1] || iVar5 == uParam1->f_17[2]) {
					iVar1++;
				}
			}
			else {
				iVar1++;
			}
			if (iVar1 < iVar0) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x352E
bool func_56(var *uParam0) {
	int iVar0;

	if (ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
		iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
		if (func_42(iVar0, uParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x355D
bool func_57(var *uParam0, int iParam1, float fParam2, int iParam3) {
	int iVar0;

	if (!ped::is_ped_injured(iParam1)) {
		if (ped::is_ped_sitting_in_any_vehicle(iParam1)) {
			iVar0 = ped::get_vehicle_ped_is_in(iParam1, 0);
			if (!entity::is_entity_dead(iVar0, 0)) {
				if (vehicle::is_vehicle_driveable(iVar0, 0)) {
					if (ped::is_ped_sitting_in_vehicle(player::player_ped_id(), iVar0)) {
						if (func_56(uParam0)) {
							return true;
						}
					}
					else if (iParam3) {
						return true;
					}
				}
				else if (entity::is_entity_at_entity(player::player_ped_id(), iParam1, fParam2, fParam2, 3f, 0, 1, 0)) {
					return true;
				}
			}
		}
		else if (entity::is_entity_at_entity(player::player_ped_id(), iParam1, fParam2, fParam2, 3f, 0, 1, 0)) {
			if (!iParam3) {
				iVar0 = ped::get_vehicle_ped_is_using(player::player_ped_id());
				if (entity::does_entity_exist(iVar0)) {
					if (func_42(iVar0, uParam0, 0)) {
						if (vehicle::is_vehicle_driveable(iVar0, 0)) {
							if (func_58(iVar0)) {
								return true;
							}
						}
					}
				}
				else {
					return true;
				}
			}
			else {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x363B
bool func_58(int iParam0) {
	float fVar0;

	if (!entity::is_entity_dead(iParam0, 0)) {
		fVar0 = entity::get_entity_speed(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f) {
			return true;
		}
	}
	return false;
}

// Position - 0x3673
int func_59(int iParam0, int iParam1) {
	int iVar0;

	if (!ped::is_ped_injured(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam1, 0)) {
			iVar0 = ped::get_vehicle_ped_is_using(iParam0);
			if (iVar0 == iParam1) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x36A3
void func_60() {
	int iVar0;
	int iVar1;

	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
		iVar0 = ped::set_exclusive_phone_relationships(player::player_ped_id());
		if (vehicle::is_vehicle_driveable(iVar0, 0)) {
			iVar1 = vehicle::get_ped_in_vehicle_seat(iVar0, 0, 0);
			if (!ped::is_ped_injured(iVar1)) {
				if (iVar1 != player::player_ped_id()) {
					if (entity::is_entity_a_mission_entity(iVar1)) {
						if (!ped::is_ped_headtracking_entity(iVar1, player::player_ped_id())) {
							ai::task_look_at_entity(iVar1, player::player_ped_id(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

// Position - 0x3710
void func_61(var *uParam0) {
	int iVar0;

	if (!gameplay::is_bit_set(uParam0->f_13, 25)) {
		if (player::is_player_playing(player::player_id())) {
			ped::set_ped_config_flag(player::player_ped_id(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3) {
			if (entity::does_entity_exist(uParam0->f_17[iVar0])) {
				if (!ped::is_ped_injured(uParam0->f_17[iVar0])) {
					ped::set_ped_config_flag(uParam0->f_17[iVar0], 32, 0);
					ped::set_ped_config_flag(uParam0->f_17[iVar0], 305, 1);
					ped::set_ped_config_flag(uParam0->f_17[iVar0], 268, 1);
					ped::set_ped_get_out_upside_down_vehicle(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		gameplay::set_bit(&uParam0->f_13, 25);
	}
}

// Position - 0x37B3
void func_62(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		if (entity::does_entity_exist(uParam0->f_17[iVar0])) {
			if (!ped::is_ped_injured(uParam0->f_17[iVar0])) {
				if (ped::is_ped_sitting_in_any_vehicle(uParam0->f_17[iVar0])) {
					ped::set_ped_can_play_ambient_anims(uParam0->f_17[iVar0], 0);
					ped::set_ped_can_play_ambient_base_anims(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (player::is_player_playing(player::player_id())) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
				ped::set_ped_can_play_ambient_anims(player::player_ped_id(), 0);
				ped::set_ped_can_play_ambient_base_anims(player::player_ped_id(), 0);
			}
		}
	}
}

// Position - 0x3849
char *func_63() {
	var uVar0;

	return uVar0;
}

// Position - 0x3853
Vector3 func_64() {
	vector3 vVar0;

	return vVar0;
}

// Position - 0x385F
void func_65() {
	int iVar0;

	if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_96, 0)) {
		if (ui::does_blip_exist(iLocal_102)) {
			ui::remove_blip(&iLocal_102);
		}
		if (iLocal_36 <= 2) {
			iLocal_80 = time::get_milliseconds_per_game_minute() * (60 * iLocal_82 + iLocal_83);
			iLocal_80 += gameplay::get_game_timer();
			iLocal_84 = iLocal_80 - time::get_milliseconds_per_game_minute() * 30;
		}
		else if (iLocal_36 > 6) {
			iLocal_80 = time::get_milliseconds_per_game_minute() * (60 * iLocal_82 + iLocal_83);
			iLocal_80 += gameplay::get_game_timer();
			iLocal_84 = iLocal_80 - time::get_milliseconds_per_game_minute() * 30;
		}
		else if (iLocal_36 >= 3 && iLocal_36 <= 4) {
			iLocal_97 = vehicle::create_vehicle(iLocal_89, vLocal_70, fLocal_74, 1, 1);
			iLocal_93[0] = ped::create_ped_inside_vehicle(iLocal_97, 6, iLocal_87, -1, 1, 1);
			iLocal_93[1] = ped::create_ped_inside_vehicle(iLocal_97, 6, iLocal_87, 0, 1, 1);
			ped::add_relationship_group("rghCop", &iLocal_118);
			ped::set_relationship_between_groups(4, iLocal_118, 1862763509);
			ped::set_ped_combat_attributes(iLocal_93[0], 39, 1);
			ped::set_ped_combat_attributes(iLocal_93[1], 39, 1);
			iVar0 = 0;
			while (iVar0 < iLocal_93) {
				weapon::give_weapon_to_ped(iLocal_93[iVar0], joaat("weapon_pistol"), -1, 0, 1);
				ped::set_ped_seeing_range(iLocal_93[iVar0], 100f);
				ped::set_ped_relationship_group_hash(iLocal_93[iVar0], iLocal_118);
				iVar0++;
			}
		}
		iLocal_38 = 2;
	}
}

// Position - 0x3990
void func_66() {
	int iVar0;

	if (!entity::is_entity_dead(iLocal_96, 0)) {
		if (func_93() || ped::is_ped_injured(iLocal_90[0])) {
			iVar0 = 0;
			while (iVar0 < iLocal_90) {
				if (!ped::is_ped_injured(iLocal_90[iVar0])) {
					if (!ui::does_blip_exist(iLocal_99[iVar0])) {
						iLocal_99[iVar0] = func_10(iLocal_90[iVar0], 1, 145);
						ped::set_ped_combat_attributes(iLocal_90[iVar0], 1, 0);
						ai::open_sequence_task(&iLocal_120);
						ai::task_leave_any_vehicle(0, 0, 0);
						ai::task_combat_ped(0, player::player_ped_id(), 0, 16);
						ai::close_sequence_task(iLocal_120);
						ai::task_perform_sequence(iLocal_90[iVar0], iLocal_120);
						ai::clear_sequence_task(&iLocal_120);
					}
				}
				else if (ui::does_blip_exist(iLocal_99[iVar0])) {
					ui::remove_blip(&iLocal_99[iVar0]);
				}
				iVar0++;
			}
		}
		else if (!iLocal_79) {
			if (!ped::is_ped_injured(iLocal_90[0])) {
				if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_90[0], 50f, 50f, 50f, 0, 1, 0)) {
					ai::task_vehicle_mission_ped_target(iLocal_90[0], iLocal_96, player::player_ped_id(), 8, 25f,
														786469, -1f, -1f, 1);
					iLocal_79 = 1;
				}
			}
		}
		if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_96, 0)) {
			if (ui::does_blip_exist(iLocal_102)) {
				ui::remove_blip(&iLocal_102);
			}
			func_92(&iLocal_106, 0, 0);
			iLocal_38 = 2;
		}
		else if (vehicle::is_vehicle_seat_free(iLocal_96, -1, 0) || ped::is_ped_injured(iLocal_90[0])) {
			func_92(&iLocal_106, 0, 0);
		}
		else {
			func_67();
		}
	}
}

// Position - 0x3AFE
void func_67() {
	if (!ped::is_ped_injured(iLocal_90[0]) && !entity::is_entity_dead(iLocal_96, 0)) {
		if (ped::is_ped_in_vehicle(iLocal_90[0], iLocal_96, 0)) {
			func_68(&iLocal_106, iLocal_96, 0, 0, 1, 1, 1);
		}
	}
}

// Position - 0x3B3C
void func_68(int *iParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_69(iParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, iParam4, iParam5, iParam6);
}

// Position - 0x3B59
void func_69(int *iParam0, int iParam1, vector3 vParam2, char *sParam5, int iParam6, bool bParam7, var uParam8,
			 bool bParam9) {
	func_70(iParam0, iParam1, vParam2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

// Position - 0x3B77
void func_70(int *iParam0, int iParam1, vector3 vParam2, char *sParam5, int iParam6, bool bParam7, var uParam8,
			 bool bParam9) {
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
		func_92(iParam0, 0, 0);
	}
	iParam0->f_6 = 2;
	func_71(iParam0, iParam1, vParam2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

// Position - 0x3BAF
void func_71(int *iParam0, int iParam1, vector3 vParam2, char *sParam5, int iParam6, bool bParam7, var uParam8,
			 bool bParam9) {
	int iVar0;
	int iVar1;

	if (iParam0->f_1 && cam::is_gameplay_hint_active()) {
		if (gameplay::get_game_timer() >= iParam0->f_8 + iParam0->f_9) {
			iParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (gameplay::is_string_null(iVar0)) {
		if (!network::network_is_game_in_progress()) {
			iVar0 = "CMN_HINT";
		}
		else {
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_91(iVar0)) {
		func_90();
	}
	if (func_89(iParam1) && entity::is_entity_visible(iParam1)) {
		iVar1 = 0;
		if (entity::is_entity_a_ped(iParam1)) {
			ped::_0x7D7A2E43E74E2EB8(entity::get_ped_index_from_entity_index(iParam1));
			ped::get_ped_flood_invincibility(entity::get_ped_index_from_entity_index(iParam1), 1);
			if (ped::is_tracked_ped_visible(entity::get_ped_index_from_entity_index(iParam1))) {
				iVar1 = 1;
			}
		}
		else if (entity::is_entity_a_vehicle(iParam1)) {
			vehicle::track_vehicle_visibility(entity::get_vehicle_index_from_entity_index(iParam1));
			if (vehicle::is_vehicle_visible(entity::get_vehicle_index_from_entity_index(iParam1))) {
				iVar1 = 1;
			}
		}
		else if (entity::is_entity_an_object(iParam1)) {
			object::track_object_visibility(entity::get_object_index_from_entity_index(iParam1));
			if (object::is_object_visible(entity::get_object_index_from_entity_index(iParam1))) {
				iVar1 = 1;
			}
		}
		if (!cam::is_gameplay_hint_active()) {
			if (func_84(iParam0, bParam7, bParam9, 0)) {
				func_80(iParam0, iParam1, vParam2, iParam6);
			}
			if (*iParam0) {
				*iParam0 = 0;
			}
			else if (iParam0->f_6 == 2) {
				if (func_76(iVar0)) {
					if (gameplay::is_string_null(iParam0->f_3) && !gameplay::is_string_null(iVar0) &&
						ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						if (iVar1 && !ui::is_help_message_being_displayed() && uParam8) {
							if (!func_91(iVar0)) {
								func_75(iVar0, -1);
								iParam0->f_3 = iVar0;
								if (gameplay::are_strings_equal("CMN_HINT", iVar0)) {
									func_74(1);
								}
							}
						}
					}
				}
			}
			else if (func_76(iVar0)) {
				if (gameplay::is_string_null(iParam0->f_3) && !gameplay::is_string_null(iVar0)) {
					if (entity::is_entity_on_screen(iParam1) && iVar1 && !ui::is_help_message_being_displayed() &&
						uParam8) {
						if (!func_91(iVar0)) {
							func_75(iVar0, -1);
							iParam0->f_3 = iVar0;
							if (gameplay::are_strings_equal("CMN_HINT", iVar0)) {
								func_74(1);
							}
						}
					}
				}
			}
		}
		else {
			if (!gameplay::is_string_null(sParam5)) {
				if (func_91(sParam5)) {
					ui::clear_help(1);
				}
			}
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				if (ped::is_ped_in_any_boat(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(3) == 3 || cam::_0xEE778F8C7E1142E2(3) == 4) {
						func_92(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_heli(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(6) == 3 || cam::_0xEE778F8C7E1142E2(6) == 4) {
						func_92(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_plane(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(4) == 3 || cam::_0xEE778F8C7E1142E2(4) == 4) {
						func_92(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_sub(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(5) == 3 || cam::_0xEE778F8C7E1142E2(5) == 4) {
						func_92(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_on_any_bike(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(2) == 3 || cam::_0xEE778F8C7E1142E2(2) == 4) {
						func_92(iParam0, iVar0, 1);
					}
				}
				else if (cam::get_follow_vehicle_cam_view_mode() == 3 || cam::get_follow_vehicle_cam_view_mode() == 4) {
					func_92(iParam0, iVar0, 1);
				}
			}
			if (!func_84(iParam0, bParam7, bParam9, 0)) {
				if (!*iParam0 && !iParam0->f_1 && !func_73(iParam0)) {
					func_72(iParam0);
				}
			}
		}
	}
	else {
		func_92(iParam0, iVar0, 0);
	}
}

// Position - 0x3F1C
void func_72(int *iParam0) {
	if (func_89(player::player_ped_id())) {
		ai::task_clear_look_at(player::player_ped_id());
	}
	if (cam::is_gameplay_hint_active()) {
		cam::set_cinematic_button_active(1);
		cam::stop_gameplay_hint(0);
		audio::stop_audio_scene("HINT_CAM_SCENE");
		graphics::_stop_screen_effect("FocusIn");
		if (iParam0->f_11) {
			graphics::_start_screen_effect("FocusOut", 0, 0);
			audio::play_sound_frontend(-1, "FocusOut", "HintCamSounds", 1);
			iParam0->f_11 = 0;
		}
	}
	iParam0->f_2 = -1;
	*iParam0 = 1;
}

// Position - 0x3F85
bool func_73(var *uParam0) {
	int iVar0;

	if (uParam0->f_2 > 0) {
		iVar0 = uParam0->f_10 / 2;
		if (uParam0->f_2 + iVar0 > gameplay::get_game_timer()) {
			return true;
		}
	}
	return false;
}

// Position - 0x3FB0
int func_74(int iParam0) {
	switch (Global_35781) {
	case 0:
	case 3:
		if (iParam0) {
			Global_101700.f_9008.f_100++;
		}
		return Global_101700.f_9008.f_100;

	case 4:
		if (iParam0) {
			Global_101700.f_9008.f_101++;
		}
		return Global_101700.f_9008.f_101;

	case 5:
	case 15:
		if (iParam0) {
			Global_101700.f_9008.f_102++;
		}
		return Global_101700.f_9008.f_102;

	default: break;
	}
	return 3;
}

// Position - 0x405A
void func_75(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x4071
bool func_76(char *sParam0) {
	if (!func_77(1, 1, 0)) {
		if (!gameplay::is_string_null_or_empty(sParam0) && func_91(sParam0) || func_91("CMN_HINT")) {
			ui::clear_help(1);
		}
		return false;
	}
	switch (Global_35781) {
	case 0:
	case 3:
		if (func_74(0) < 3) {
			return true;
		}
		break;

	case 4:
		if (func_74(0) < 1) {
			return true;
		}
		break;

	case 5:
	case 15:
		if (func_74(0) < 1) {
			return true;
		}
		break;

	default: break;
	}
	return false;
}

// Position - 0x410A
int func_77(int iParam0, int iParam1, int iParam2) {
	if (iParam0) {
		if (!player::is_player_control_on(player::player_id())) {
			return 0;
		}
	}
	if (iParam2) {
		return 1;
	}
	if (streaming::is_player_switch_in_progress()) {
		return 0;
	}
	if (func_79(0)) {
		return 0;
	}
	if (func_78()) {
		return 0;
	}
	if (network::_network_is_text_chat_active()) {
		return 0;
	}
	if (G_DisableMessagesAndCalls2) {
		return 0;
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("appinternet")) > 0) {
		return 0;
	}
	if (Global_53003) {
		return 0;
	}
	if (iParam1) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
			if (ped::is_ped_in_any_boat(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(3) == 3 || cam::_0xEE778F8C7E1142E2(3) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_in_any_heli(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(6) == 3 || cam::_0xEE778F8C7E1142E2(6) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_in_any_plane(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(4) == 3 || cam::_0xEE778F8C7E1142E2(4) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_in_any_sub(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(5) == 3 || cam::_0xEE778F8C7E1142E2(5) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_on_any_bike(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(2) == 3 || cam::_0xEE778F8C7E1142E2(2) == 4) {
					return 0;
				}
			}
			else if (cam::get_follow_vehicle_cam_view_mode() == 3 || cam::get_follow_vehicle_cam_view_mode() == 4) {
				return 0;
			}
			if (cam::is_gameplay_cam_looking_behind()) {
				return 0;
			}
		}
	}
	return 1;
}

// Position - 0x4286
bool func_78() { return gameplay::get_game_timer() <= Global_17290.f_5745 + 100; }

// Position - 0x429B
bool func_79(int iParam0) {
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

// Position - 0x42F5
void func_80(int *iParam0, int iParam1, vector3 vParam2, int iParam5) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (entity::is_entity_dead(iParam1, 0)) {
		func_92(iParam0, 0, 0);
	}
	if (func_83(vParam2, 0f, 0f, 0f, 0)) {
		if (entity::is_entity_a_ped(iParam1)) {
			iVar0 = entity::get_ped_index_from_entity_index(iParam1);
			if (!ped::is_ped_in_any_vehicle(iVar0, 0)) {
				if (ped::is_ped_a_player(iVar0)) {
					if (!func_81()) {
						vParam2 = {0f, 0f, 1f};
					}
				}
				else if (ped::is_ped_male(iVar0)) {
					vParam2 = {0f, 0f, 1f};
				}
			}
		}
	}
	cam::set_cinematic_button_active(0);
	iVar1 = iParam0->f_9;
	iVar2 = iParam0->f_10;
	if (iParam5 == 1726668277) {
		if (iVar1 < 1500) {
			iVar1 = 1500;
		}
		if (iVar2 < 1500) {
			iVar2 = 1500;
		}
	}
	cam::set_gameplay_entity_hint(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	ai::task_look_at_entity(player::player_ped_id(), iParam1, -1, iVar3, iVar4);
	graphics::_start_screen_effect("FocusIn", 0, 0);
	audio::start_audio_scene("HINT_CAM_SCENE");
	audio::play_sound_frontend(-1, "FocusIn", "HintCamSounds", 1);
	iParam0->f_11 = 1;
	iParam0->f_8 = gameplay::get_game_timer();
	iParam0->f_1 = 1;
	*iParam0 = 0;
}

// Position - 0x43FA
int func_81() { return func_82(player::player_id()); }

// Position - 0x440A
int func_82(int iParam0) {
	if (entity::get_entity_model(player::get_player_ped(iParam0)) == joaat("mp_f_freemode_01")) {
		return 1;
	}
	return 0;
}

// Position - 0x4429
bool func_83(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x4470
bool func_84(var *uParam0, bool bParam1, bool bParam2, int iParam3) {
	if (uParam0->f_1) {
		if (gameplay::get_game_timer() >= uParam0->f_8 + uParam0->f_9) {
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5) {
	case 0:
		uParam0->f_7 = 0;
		if (uParam0->f_6 == 0) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				if (func_88(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (func_87(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		else if (uParam0->f_6 == 1) {
			if (func_87(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		else if (uParam0->f_6 == 2) {
			if (func_88(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		if (func_73(uParam0)) {
			uParam0->f_7 = 1;
			uParam0->f_5 = 4;
		}
		break;

	case 1:
		if (gameplay::get_game_timer() - uParam0->f_4 <= 500) {
			if (uParam0->f_6 == 0) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
					if (!func_88(bParam1, bParam2, iParam3)) {
						uParam0->f_4 = gameplay::get_game_timer();
						uParam0->f_5 = 3;
					}
				}
				else if (!func_87(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
			else if (uParam0->f_6 == 1) {
				if (!func_87(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
			else if (uParam0->f_6 == 2) {
				if (!func_88(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
		}
		else {
			uParam0->f_5 = 2;
		}
		break;

	case 2:
		if (uParam0->f_6 == 0) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				if (!func_88(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (!func_87(bParam1, bParam2, iParam3)) {
				uParam0->f_5 = 0;
			}
		}
		else if (uParam0->f_6 == 1) {
			if (!func_87(bParam1, bParam2, iParam3) || ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				uParam0->f_5 = 0;
			}
		}
		else if (uParam0->f_6 == 2) {
			if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
				ai::get_is_task_active(player::player_ped_id(), 2)) {
				uParam0->f_5 = 0;
			}
			else if (!func_88(bParam1, bParam2, iParam3)) {
				uParam0->f_5 = 0;
			}
		}
		break;

	case 3:
		if (gameplay::get_game_timer() - uParam0->f_4 > 500) {
			if (uParam0->f_6 == 0) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
					if (func_86(bParam1, bParam2, iParam3)) {
						uParam0->f_5 = 0;
					}
				}
				else if (func_85(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) || func_85(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2) {
				if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
					ai::get_is_task_active(player::player_ped_id(), 2)) {
					uParam0->f_5 = 0;
				}
				else if (func_86(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
		}
		break;

	case 4:
		if (!func_73(uParam0)) {
			uParam0->f_5 = 0;
		}
		break;
	}
	if (!func_77(bParam1, bParam2, iParam3)) {
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7) {
		func_90();
		return true;
	}
	else {
		return false;
	}
	return false;
}

// Position - 0x47DC
bool func_85(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_77(bParam0, bParam1, bParam2)) {
		return false;
	}
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!player::is_player_targetting_anything(player::player_id())) {
			controls::disable_control_action(0, 140, 1);
			controls::disable_control_action(0, 80, 1);
			if (controls::is_disabled_control_just_released(0, 80)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x482E
bool func_86(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_77(bParam0, bParam1, bParam2)) {
		return false;
	}
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		controls::disable_control_action(0, 80, 1);
		if (cam::is_follow_vehicle_cam_active()) {
			if (controls::is_disabled_control_just_released(0, 80)) {
				cam::set_cinematic_button_active(0);
				return true;
			}
		}
	}
	return false;
}

// Position - 0x4877
bool func_87(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_77(bParam0, bParam1, bParam2)) {
		return false;
	}
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!player::is_player_targetting_anything(player::player_id())) {
			controls::disable_control_action(0, 140, 1);
			controls::disable_control_action(0, 80, 1);
			if (controls::is_disabled_control_pressed(0, 80) && gameplay::get_game_timer() > Global_116) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x48D6
bool func_88(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_77(bParam0, bParam1, bParam2)) {
		return false;
	}
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		controls::disable_control_action(0, 80, 1);
		if (cam::is_follow_vehicle_cam_active()) {
			if (controls::is_disabled_control_pressed(0, 80) && gameplay::get_game_timer() > Global_116) {
				cam::set_cinematic_button_active(0);
				return true;
			}
		}
	}
	return false;
}

// Position - 0x492C
bool func_89(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (entity::is_entity_a_vehicle(iParam0)) {
			if (vehicle::is_vehicle_driveable(entity::get_vehicle_index_from_entity_index(iParam0), 0)) {
				return true;
			}
		}
		else if (entity::is_entity_a_ped(iParam0)) {
			if (!ped::is_ped_injured(entity::get_ped_index_from_entity_index(iParam0))) {
				return true;
			}
		}
		else if (entity::is_entity_an_object(iParam0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x4987
void func_90() { gameplay::set_bit(&G_SleepModeOffOn11, 4); }

// Position - 0x4997
bool func_91(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0x49AA
void func_92(int *iParam0, int iParam1, int iParam2) {
	char *sVar0;

	if (network::network_is_game_in_progress()) {
		if (gameplay::is_bit_set(Global_2494199.f_4449, 26)) {
			return;
		}
	}
	if (cam::is_gameplay_hint_active()) {
		cam::stop_gameplay_hint(iParam2);
		graphics::_stop_screen_effect("FocusIn");
		audio::stop_audio_scene("HINT_CAM_SCENE");
		if (iParam0->f_11) {
			graphics::_start_screen_effect("FocusOut", 0, 0);
			audio::play_sound_frontend(-1, "FocusOut", "HintCamSounds", 1);
			iParam0->f_11 = 0;
		}
	}
	cam::set_cinematic_button_active(1);
	iParam0->f_1 = 0;
	*iParam0 = 0;
	iParam0->f_2 = -1;
	iParam0->f_8 = 0;
	iParam0->f_5 = 0;
	iParam0->f_6 = 0;
	sVar0 = iParam1;
	if (gameplay::is_string_null(sVar0)) {
		if (!network::network_is_game_in_progress()) {
			sVar0 = "CMN_HINT";
		}
		else {
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!gameplay::is_string_null(iParam0->f_3)) {
		if (func_91(iParam0->f_3)) {
			ui::clear_help(1);
		}
	}
	if (!gameplay::is_string_null(sVar0)) {
		if (func_91(sVar0)) {
			ui::clear_help(1);
		}
	}
}

// Position - 0x4A87
int func_93() {
	if (entity::does_entity_exist(iLocal_96)) {
		if (!entity::is_entity_dead(iLocal_96, 0)) {
			if (entity::get_entity_health(iLocal_96) < 300 || vehicle::get_vehicle_engine_health(iLocal_96) < 200f ||
				fire::is_entity_on_fire(iLocal_96) ||
				vehicle::is_vehicle_tyre_burst(iLocal_96, 0, 0) && vehicle::is_vehicle_tyre_burst(iLocal_96, 1, 0) ||
				vehicle::is_vehicle_tyre_burst(iLocal_96, 4, 0) && vehicle::is_vehicle_tyre_burst(iLocal_96, 5, 0) ||
				vehicle::is_vehicle_tyre_burst(iLocal_96, 0, 0) && vehicle::is_vehicle_tyre_burst(iLocal_96, 4, 0) ||
				vehicle::is_vehicle_tyre_burst(iLocal_96, 1, 0) && vehicle::is_vehicle_tyre_burst(iLocal_96, 5, 0)) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x4B3F
void func_94() {
	int iVar0;
	int iVar1;

	iLocal_96 = func_96(0);
	if (!vehicle::is_vehicle_driveable(iLocal_96, 0)) {
		iLocal_96 = vehicle::create_vehicle(iLocal_88, vLocal_64, fLocal_73, 1, 1);
		iVar0 = 1;
		while (iVar0 <= 8) {
			vehicle::set_vehicle_extra(iLocal_96, iVar0, 1);
			iVar0++;
		}
		if (iLocal_85 != -1) {
			vehicle::set_vehicle_extra(iLocal_96, iLocal_85, 0);
		}
	}
	vehicle::set_vehicle_is_wanted(iLocal_96, 1);
	iLocal_102 = func_95(iLocal_96, 0, 0);
	if (iLocal_36 != 5 && iLocal_36 != 6) {
		if (iLocal_36 > 6) {
			entity::set_entity_proofs(iLocal_96, 0, 0, 0, 0, 1, 0, 0, 0);
			audio::play_sound_from_entity(-1, "BAR_DELIVER_BOOZE_RATTLE_MASTER", iLocal_96, 0, 0, 0);
		}
		func_35(sLocal_103, 7500, 1);
	}
	else {
		iLocal_90[0] = ped::create_ped_inside_vehicle(iLocal_96, 26, iLocal_86, -1, 1, 1);
		iLocal_90[1] = ped::create_ped_inside_vehicle(iLocal_96, 26, iLocal_86, 0, 1, 1);
		ped::add_relationship_group("rghCriminal", &iLocal_119);
		ped::set_relationship_between_groups(5, iLocal_119, 1862763509);
		iVar1 = 0;
		while (iVar1 < iLocal_90) {
			ped::set_blocking_of_non_temporary_events(iLocal_90[iVar1], 1);
			weapon::give_weapon_to_ped(iLocal_90[iVar1], joaat("weapon_sawnoffshotgun"), -1, 0, 1);
			ped::set_ped_relationship_group_hash(iLocal_90[iVar1], iLocal_119);
			iVar1++;
		}
		ai::task_vehicle_drive_wander(iLocal_90[0], iLocal_96, 25f, 786599);
		func_35("PMDL_REC", 7500, 1);
	}
	if (!entity::is_entity_dead(player::get_players_last_vehicle(), 0)) {
		iLocal_98 = player::get_players_last_vehicle();
	}
	iLocal_38 = 1;
}

// Position - 0x4C91
int func_95(int iParam0, int iParam1, int iParam2) { return func_11(iParam0, !iParam1, iParam2); }

// Position - 0x4CA4
int func_96(int iParam0) {
	if (vehicle::is_vehicle_driveable(Global_100412.f_222[iParam0], 0)) {
		entity::set_entity_as_mission_entity(Global_100412.f_222[iParam0], 1, 1);
		return Global_100412.f_222[iParam0];
	}
	return 0;
}

// Position - 0x4CDC
int func_97() {
	if (entity::does_entity_exist(iLocal_96)) {
		if (vehicle::is_vehicle_driveable(iLocal_96, 0)) {
			if (!entity::is_entity_at_entity(iLocal_96, player::player_ped_id(), 300f, 300f, 300f, 0, 1, 0)) {
				return 1;
			}
		}
		else {
			return 1;
		}
	}
	if (ped::is_ped_injured(iLocal_90[0])) {
		if (ui::does_blip_exist(iLocal_99[0])) {
			ui::remove_blip(&iLocal_99[0]);
		}
	}
	return 0;
}

// Position - 0x4D44
void func_98() {
	streaming::request_model(iLocal_88);
	ui::request_additional_text("PMDL", 0);
	if (iLocal_36 >= 3 && iLocal_36 <= 4) {
		streaming::request_model(iLocal_87);
		streaming::request_model(iLocal_89);
	}
	else if (iLocal_36 == 5 || iLocal_36 == 6) {
		streaming::request_model(iLocal_86);
	}
	vehicle::set_vehicle_model_is_suppressed(joaat("benson"), 1);
	vehicle::set_vehicle_model_is_suppressed(joaat("pony2"), 1);
	if (streaming::has_model_loaded(iLocal_88) && ui::has_additional_text_loaded(0)) {
		if (iLocal_36 >= 3 && iLocal_36 <= 4) {
			if (streaming::has_model_loaded(iLocal_87) && streaming::has_model_loaded(iLocal_89)) {
				bLocal_75 = true;
			}
		}
		else if (iLocal_36 == 5 || iLocal_36 == 6) {
			if (streaming::has_model_loaded(iLocal_86)) {
				bLocal_75 = true;
			}
		}
		else if (iLocal_36 > 6) {
			if (audio::request_script_audio_bank("Deliveries", 0, -1)) {
				bLocal_75 = true;
			}
		}
		else {
			bLocal_75 = true;
		}
	}
}

// Position - 0x4E1E
void func_99() {
	float fVar0;

	vLocal_64 = {func_101(func_103(), iLocal_36)};
	fLocal_73 = func_100(func_103(), iLocal_36);
	if (iLocal_36 > 6) {
		sLocal_103 = "PMDL_TRUCK";
		sLocal_104 = "PMDL_BTIM";
		sLocal_105 = "PMDL_BCKT";
		iLocal_88 = joaat("benson");
		iLocal_85 = 2;
	}
	if (func_103() == 10) {
		vLocal_67 = {-1161.213f, -1567.068f, 3.4234f};
		iLocal_88 = joaat("pony2");
		if (iLocal_36 == 0) {
			iLocal_82 = 2;
			iLocal_83 = 15;
			sLocal_104 = "PMDL_TIM";
		}
		else if (iLocal_36 == 1) {
			iLocal_82 = 1;
			iLocal_83 = 30;
			sLocal_104 = "PMDL_TIM";
		}
		else if (iLocal_36 == 2) {
			iLocal_82 = 1;
			iLocal_83 = 30;
			sLocal_104 = "PMDL_TIM";
		}
		else if (iLocal_36 == 3) {
			vLocal_70 = {-3121.261f, 1152.92f, 19.4047f};
			fLocal_74 = 176.4887f;
			iLocal_89 = joaat("police4");
			iLocal_87 = joaat("s_m_y_cop_01");
		}
		else if (iLocal_36 == 4) {
			vLocal_70 = {1543.145f, 2184.371f, 77.8114f};
			fLocal_74 = 45.3499f;
			iLocal_89 = joaat("police4");
			iLocal_87 = joaat("s_m_y_cop_01");
		}
		else if (iLocal_36 >= 5) {
			iLocal_86 = joaat("g_m_y_salvagoon_02");
		}
	}
	else if (func_103() == 14) {
		vLocal_67 = {-2169.828f, 4277.365f, 47.9568f};
		fVar0 = gameplay::get_distance_between_coords(vLocal_64, vLocal_67, 1);
		iLocal_83 = system::round((fVar0 / 16.5f + 40f) / 2f);
	}
	else if (func_103() == 13) {
		vLocal_67 = {-323.356f, 6264.431f, 30.4463f};
		fVar0 = gameplay::get_distance_between_coords(vLocal_64, vLocal_67, 1);
		iLocal_83 = system::round((fVar0 / 16.5f + 40f) / 2f);
	}
	else if (func_103() == 12) {
		vLocal_67 = {198.5282f, 342.2399f, 104.9566f};
		fVar0 = gameplay::get_distance_between_coords(vLocal_64, vLocal_67, 1);
		iLocal_83 = system::round((fVar0 / 16.5f + 15f) / 2f);
	}
	else if (func_103() == 11) {
		vLocal_67 = {-560.0195f, 301.1481f, 82.1436f};
		fVar0 = gameplay::get_distance_between_coords(vLocal_64, vLocal_67, 1);
		iLocal_83 = system::round((fVar0 / 16.5f + 15f) / 2f);
	}
	iLocal_81 = 0;
	iLocal_76 = 1;
}

// Position - 0x504C
float func_100(int iParam0, int iParam1) {
	switch (iParam0) {
	case 10:
		switch (iParam1) {
		case 0: return 0.5801f;

		case 1: return 177.9306f;

		case 2: return 49.6978f;

		case 3: return 336.9449f;

		case 4: return 80.1639f;

		case 5: return 287.983f;

		case 6: return 46.7895f;
		}
		break;

	case 11:
	case 12:
	case 13:
	case 14:
		switch (iParam1) {
		case 7: return 273.1085f;

		case 8: return 256.7899f;

		case 9: return 180.9647f;

		case 10: return 126.4385f;

		case 11: return 123.4767f;

		case 12: return 226.219f;

		case 13: return 82.6097f;
		}
		break;
	}
	return 0f;
}

// Position - 0x517C
Vector3 func_101(int iParam0, int iParam1) {
	switch (iParam0) {
	case 10:
		switch (iParam1) {
		case 0: return -128.1876f, 1934.495f, 194.9075f;

		case 1: return -179.8744f, 586.4468f, 196.6278f;

		case 2: return 1390.089f, -605.923f, 73.3378f;

		case 3: return -3170.048f, 1098.809f, 19.7817f;

		case 4: return 1581.22f, 2194.629f, 78.1062f;

		case 5: return 1475.833f, -113.5801f, 141.794f;

		case 6: return 1603.071f, -1793.915f, 89.0179f;
		}
		break;

	case 11:
	case 12:
	case 13:
	case 14:
		switch (iParam1) {
		case 7: return 642.2169f, 2774.892f, 40.985f;

		case 8: return -1916.122f, 2060.313f, 139.7363f;

		case 9: return 824.8992f, -1064.192f, 26.9851f;

		case 10: return -669.6013f, -1198.664f, 9.6125f;

		case 11: return -1465.579f, -390.7494f, 37.5168f;

		case 12: return 797.7521f, -1793.008f, 28.3164f;

		case 13: return 806.319f, -2017.451f, 28.2215f;
		}
		break;
	}
	return func_102(iParam0);
}

// Position - 0x533D
Vector3 func_102(int iParam0) {
	switch (iParam0) {
	case 2: return 2147.317f, 4795.208f, 40.08961f;

	case 9: return 1524.329f, -2108.269f, 75.7248f;

	case 10: return -1172.195f, -1577.427f, 3.38152f;

	case 1: return 898.3718f, -177.0764f, 72.68348f;

	case 4: return 1191.302f, 2672.064f, 36.73154f;

	case 3: return -1584.333f, 5193.487f, 2.95912f;

	case 0: return 408.3429f, -1623.836f, 28.29278f;

	case 8: return -1339.489f, -21.19435f, 50.34566f;

	case 5: return 336.207f, 172.4251f, 102.2055f;

	case 6: return 394.5495f, -703.3795f, 28.27281f;

	case 7: return -1413.184f, -206.0555f, 46.29474f;

	case 11: return -560.3809f, 274.5476f, 82.02014f;

	case 12: return 221.0845f, 340.7849f, 104.5883f;

	case 13: return -296.7154f, 6259.732f, 30.49339f;

	case 14: return -2201.402f, 4291f, 47.32429f;
	}
	return 10f, 10f, 10f;
}

// Position - 0x54F0
int func_103() { return Global_100412.f_20; }

// Position - 0x54FE
int func_104() { return func_105(Global_100412.f_20, Global_100412.f_29); }

// Position - 0x5516
int func_105(int iParam0, int iParam1) {
	switch (iParam0) {
	case 10:
		switch (iParam1) {
		case 0: return 0;

		case 1: return 1;

		case 2: return 2;

		case 3: return 3;

		case 4: return 4;

		case 5: return 5;

		case 6: return 6;
		}
		break;

	case 11:
	case 12:
		switch (iParam1) {
		case 0: return 9;

		case 1: return 10;

		case 2: return 11;

		case 3: return 12;

		case 4: return 13;
		}
		break;

	case 13:
	case 14:
		switch (iParam1) {
		case 0: return 8;

		case 1: return 7;
		}
		break;
	}
	return 0;
}

// Position - 0x561E
void func_106() {
	vehicle::set_vehicle_model_is_suppressed(joaat("benson"), 0);
	vehicle::set_vehicle_model_is_suppressed(joaat("pony2"), 0);
	audio::release_script_audio_bank();
	if (iLocal_77) {
		if (!entity::is_entity_dead(iLocal_98, 0)) {
			func_107(iLocal_98, 0, 145);
		}
		player::reset_wanted_level_difficulty(player::player_id());
		func_92(&iLocal_106, 0, 0);
	}
	script::terminate_this_thread();
}

// Position - 0x566C
int func_107(int iParam0, int iParam1, int iParam2) {
	var uVar0;
	char *sVar1;

	if (iParam1 == 0) {
		sVar1 = entity::get_entity_script(iParam0, &uVar0);
		if (!gameplay::is_string_null_or_empty(sVar1)) {
			if (gameplay::get_hash_key(sVar1) == gameplay::get_hash_key("vehicle_gen_controller")) {
				return 0;
			}
		}
	}
	func_108(iParam0, iParam2);
	return 1;
}

// Position - 0x56AC
void func_108(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_113(iParam0)) {
		return;
	}
	if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2) {
		iVar0 = vehicle::get_ped_in_vehicle_seat(iParam0, -1, 0);
		if (!entity::does_entity_exist(iVar0)) {
			iVar0 = vehicle::get_last_ped_in_vehicle_seat(iParam0, -1);
		}
		if (entity::does_entity_exist(iVar0) && !ped::is_ped_injured(iVar0)) {
			if (entity::get_entity_model(iVar0) == joaat("player_zero")) {
				iParam1 = 0;
			}
			else if (entity::get_entity_model(iVar0) == joaat("player_one")) {
				iParam1 = 1;
			}
			else if (entity::get_entity_model(iVar0) == joaat("player_two")) {
				iParam1 = 2;
			}
		}
		if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2) {
			iParam1 = Global_101700.f_2095.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3) {
		iVar2 = 0;
		while (iVar2 < 2) {
			if (entity::get_entity_model(iParam0) == Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66) {
				if (!gameplay::is_string_null_or_empty(
						&Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)) {
					if (gameplay::are_strings_equal(vehicle::get_vehicle_number_plate_text(iParam0),
													&Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)) {
						Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101700.f_31389.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3) {
		if (entity::get_entity_model(iParam0) == Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66) {
			if (!gameplay::is_string_null_or_empty(&Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)) {
				if (gameplay::are_strings_equal(vehicle::get_vehicle_number_plate_text(iParam0),
												&Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)) {
					Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101700.f_31389.f_5590 = iParam1;
	Global_69436 = iParam0;
	Global_101700.f_31389.f_5588 = 1;
	func_109(iParam0, &Global_101700.f_31389.f_5510);
}

// Position - 0x58AE
void func_109(int iParam0, var *uParam1) {
	int iVar0;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		func_112(uParam1);
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
		func_111(&iParam0, &uParam1->f_9, &uParam1->f_59);
		iVar0 = 0;
		while (iVar0 <= 11) {
			if (vehicle::is_vehicle_extra_turned_on(iParam0, iVar0 + 1)) {
				gameplay::set_bit(&uParam1->f_77, func_110(iVar0 + 1));
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

// Position - 0x5B5A
int func_110(int iParam0) {
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

// Position - 0x5C0A
int func_111(int iParam0, var *uParam1, var *uParam2) {
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

// Position - 0x5CE4
void func_112(var *uParam0) {
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

// Position - 0x5D94
int func_113(int iParam0) {
	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0) || func_129(iParam0, 0, 0) ||
		func_129(iParam0, 1, 0) || func_129(iParam0, 2, 0) || func_128(iParam0) != 145 || func_127(iParam0) ||
		func_126(iParam0) || func_125(iParam0) || func_124(iParam0) || !func_114(entity::get_entity_model(iParam0))) {
		if (func_126(iParam0)) {
		}
		if (func_126(iParam0)) {
		}
		if (func_129(iParam0, 0, 0)) {
		}
		if (func_129(iParam0, 1, 0)) {
		}
		if (func_129(iParam0, 2, 0)) {
		}
		if (func_128(iParam0) != 145) {
		}
		return 0;
	}
	return 1;
}

// Position - 0x5E71
int func_114(int iParam0) {
	if (iParam0 == 0) {
		return 0;
	}
	if (!func_115(iParam0, 0)) {
		return 0;
	}
	if (vehicle::is_this_model_a_boat(iParam0) || vehicle::is_this_model_a_plane(iParam0) ||
		vehicle::is_this_model_a_heli(iParam0) || vehicle::is_this_model_a_train(iParam0)) {
		return 0;
	}
	switch (iParam0) {
	case joaat("bus"):
	case joaat("stretch"):
	case joaat("barracks"):
	case joaat("armytanker"):
	case joaat("rhino"):
	case joaat("armytrailer"):
	case joaat("barracks2"):
	case joaat("flatbed"):
	case joaat("ripley"):
	case joaat("towtruck"):
	case joaat("towtruck2"):
	case joaat("airbus"):
	case joaat("coach"):
	case joaat("rentalbus"):
	case joaat("tourbus"):
	case joaat("firetruk"):
	case joaat("pbus"):
	case joaat("trash"):
	case joaat("benson"):
	case joaat("boattrailer"):
	case joaat("biff"):
	case joaat("hauler"):
	case joaat("docktrailer"):
	case joaat("phantom"):
	case joaat("pounder"):
	case joaat("tractor2"):
	case joaat("bulldozer"):
	case joaat("handler"):
	case joaat("tiptruck"):
	case joaat("cutter"):
	case joaat("dump"):
	case joaat("mixer"):
	case joaat("mixer2"):
	case joaat("rubble"):
	case joaat("scrap"):
	case joaat("tiptruck2"):
	case joaat("camper"):
	case joaat("taco"):
	case joaat("boxville"):
	case joaat("boxville2"):
	case joaat("boxville3"):
	case joaat("journey"):
	case joaat("mule"):
	case joaat("mule2"):
	case joaat("police"):
	case joaat("police2"):
	case joaat("police3"):
	case joaat("police4"):
	case joaat("policeb"):
	case joaat("policeold1"):
	case joaat("policeold2"):
	case joaat("policet"):
	case joaat("taxi"):
	case joaat("submersible"):
	case joaat("submersible2"):
	case joaat("monster"): return 0;
	}
	return 1;
}

// Position - 0x6022
int func_115(int iParam0, int iParam1) {
	int iVar0;
	struct<2> Var1;

	if (iParam0 == 0) {
		return 0;
	}
	if (!streaming::is_model_a_vehicle(iParam0)) {
		return 0;
	}
	if (iParam0 == joaat("dominator2") && !network::network_is_game_in_progress() ||
		iParam0 == joaat("buffalo3") && !network::network_is_game_in_progress() ||
		iParam0 == joaat("gauntlet2") && !network::network_is_game_in_progress() || iParam0 == joaat("blimp2") ||
		iParam0 == joaat("stalion2") && !network::network_is_game_in_progress() || iParam0 == joaat("blista3")) {
		if (!func_123()) {
			return 0;
		}
	}
	else {
		iVar0 = 0;
		while (iVar0 < dlc1::get_num_dlc_vehicles()) {
			if (dlc1::get_dlc_vehicle_data(iVar0, &Var1)) {
				if (iParam0 == Var1.f_1) {
					if (dlc1::_is_dlc_data_empty(Var1)) {
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp")) {
		if (!func_122() && !func_121() && !func_120() && !func_119() && !func_123()) {
			return 0;
		}
	}
	if (iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs") || iParam0 == joaat("khamelion")) {
		if (gameplay::is_durango_version() || gameplay::is_pc_version() || gameplay::is_orbis_version()) {
		}
		else if (!func_120()) {
			return 0;
		}
	}
	if (iParam1) {
		if (!func_118(iParam0)) {
			return 0;
		}
	}
	if (!func_116(iParam0)) {
		return 0;
	}
	return 1;
}

// Position - 0x61B0
int func_116(int iParam0) {
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_117()) {
		return 1;
	}
	unk3::_0x897433D292B44130(&iVar0, &uVar1);
	if (iVar0 == 4) {
		return 1;
	}
	switch (iParam0) {
	case joaat("dune4"): StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64); break;

	case joaat("voltic2"): StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64); break;

	case joaat("ruiner2"): StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64); break;

	case joaat("phantom2"): StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64); break;

	case joaat("technical2"): StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64); break;

	case joaat("boxville5"): StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64); break;

	case joaat("wastelander"): StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64); break;

	case joaat("blazer5"): StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64); break;

	default: return 1;
	}
	if (!mobile::_network_shop_is_item_unlocked(&cVar2)) {
		return 0;
	}
	return 1;
}

// Position - 0x627C
int func_117() {
	if (gameplay::is_pc_version()) {
		return 1;
	}
	return 0;
}

// Position - 0x6290
int func_118(int iParam0) {
	int iVar0;
	int iVar1;

	if (Global_2482093) {
		return 1;
	}
	iVar0 = 1;
	iVar1 = network::_get_posix_time();
	if (iParam0 == joaat("btype3")) {
		if (!Global_262145.f_5506 && !Global_262145.f_11530 && iVar1 < Global_262145.f_11531) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3")) {
		if (!Global_262145.f_12342 && iVar1 < Global_262145.f_12354) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2")) {
		if (!Global_262145.f_12338 && iVar1 < Global_262145.f_12350) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2")) {
		if (!Global_262145.f_12339 && iVar1 < Global_262145.f_12351) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5")) {
		if (!Global_262145.f_12340 && iVar1 < Global_262145.f_12352) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2")) {
		if (!Global_262145.f_12341 && iVar1 < Global_262145.f_12353) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3")) {
		if (!Global_262145.f_12343 && iVar1 < Global_262145.f_12355) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo")) {
		if (!Global_262145.f_12344 && iVar1 < Global_262145.f_12347) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70")) {
		if (!Global_262145.f_12345 && iVar1 < Global_262145.f_12348) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811")) {
		if (!Global_262145.f_12346 && iVar1 < Global_262145.f_12349) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400")) {
		if (!Global_262145.f_14969 && iVar1 < Global_262145.f_14934) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso")) {
		if (!Global_262145.f_14964 && iVar1 < Global_262145.f_14929) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger")) {
		if (!Global_262145.f_14968 && iVar1 < Global_262145.f_14933) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender")) {
		if (!Global_262145.f_14967 && iVar1 < Global_262145.f_14932) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b")) {
		if (!Global_262145.f_14961 && iVar1 < Global_262145.f_14926) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis")) {
		if (!Global_262145.f_14962 && iVar1 < Global_262145.f_14927) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck")) {
		if (!Global_262145.f_14965 && iVar1 < Global_262145.f_14930) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2")) {
		if (!Global_262145.f_14966 && iVar1 < Global_262145.f_14931) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos")) {
		if (!Global_262145.f_14963 && iVar1 < Global_262145.f_14928) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle")) {
		if (!Global_262145.f_14971 && iVar1 < Global_262145.f_14936) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck")) {
		if (!Global_262145.f_14972 && iVar1 < Global_262145.f_14937) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2")) {
		if (!Global_262145.f_14960 && iVar1 < Global_262145.f_14925) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus")) {
		if (!Global_262145.f_14959 && iVar1 < Global_262145.f_14924) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava")) {
		if (!Global_262145.f_14958 && iVar1 < Global_262145.f_14923) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx")) {
		if (!Global_262145.f_14970 && iVar1 < Global_262145.f_14935) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2")) {
		if (!Global_262145.f_14973 && iVar1 < Global_262145.f_14938) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2")) {
		if (!Global_262145.f_14974 && iVar1 < Global_262145.f_14939) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2")) {
		if (!Global_262145.f_14975 && iVar1 < Global_262145.f_14940) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3")) {
		if (!Global_262145.f_14976 && iVar1 < Global_262145.f_14941) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler")) {
		if (!Global_262145.f_15121 && iVar1 < Global_262145.f_15143) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade")) {
		if (!Global_262145.f_15122 && iVar1 < Global_262145.f_15144) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea")) {
		if (!Global_262145.f_15123 && iVar1 < Global_262145.f_15145) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey")) {
		if (!Global_262145.f_15124 && iVar1 < Global_262145.f_15146) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus")) {
		if (!Global_262145.f_15125 && iVar1 < Global_262145.f_15147) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb")) {
		if (!Global_262145.f_15126 && iVar1 < Global_262145.f_15148) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2")) {
		if (!Global_262145.f_15128 && iVar1 < Global_262145.f_15149) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex")) {
		if (!Global_262145.f_15129 && iVar1 < Global_262145.f_15150) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro")) {
		if (!Global_262145.f_15130 && iVar1 < Global_262145.f_15151) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera")) {
		if (!Global_262145.f_15131 && iVar1 < Global_262145.f_15152) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor")) {
		if (!Global_262145.f_15132 && iVar1 < Global_262145.f_15153) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2")) {
		if (!Global_262145.f_15133 && iVar1 < Global_262145.f_15154) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4")) {
		if (!Global_262145.f_15134 && iVar1 < Global_262145.f_15155) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6")) {
		if (!Global_262145.f_15140 && iVar1 < Global_262145.f_15162) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2")) {
		if (!Global_262145.f_15137 && iVar1 < Global_262145.f_15158) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane")) {
		if (!Global_262145.f_15138 && iVar1 < Global_262145.f_15159) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3")) {
		if (!Global_262145.f_15139 && iVar1 < Global_262145.f_15160) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio")) {
		if (!Global_262145.f_15127 && iVar1 < Global_262145.f_15161) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger")) {
		if (!Global_262145.f_15141 && iVar1 < Global_262145.f_15163) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus")) {
		if (!Global_262145.f_15135 && iVar1 < Global_262145.f_15156) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez")) {
		if (!Global_262145.f_15136 && iVar1 < Global_262145.f_15157) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike")) {
		if (!Global_262145.f_15142 && iVar1 < Global_262145.f_15164) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2")) {
		if (!Global_262145.f_16770 && iVar1 < Global_262145.f_16811) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2")) {
		if (!Global_262145.f_16771 && iVar1 < Global_262145.f_16812) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4")) {
		if (!Global_262145.f_16772 && iVar1 < Global_262145.f_16813) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5")) {
		if (!Global_262145.f_16773 && iVar1 < Global_262145.f_16814) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2")) {
		if (!Global_262145.f_16774 && iVar1 < Global_262145.f_16815) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2")) {
		if (!Global_262145.f_16775 && iVar1 < Global_262145.f_16816) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5")) {
		if (!Global_262145.f_16776 && iVar1 < Global_262145.f_16817) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander")) {
		if (!Global_262145.f_16777 && iVar1 < Global_262145.f_16818) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5")) {
		if (!Global_262145.f_16778 && iVar1 < Global_262145.f_16819) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2")) {
		if (!Global_262145.f_16779 && iVar1 < Global_262145.f_16820) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3")) {
		if (!Global_262145.f_16780 && iVar1 < Global_262145.f_16821) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous")) {
		if (!Global_262145.f_16781 && iVar1 < Global_262145.f_16822) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2")) {
		if (!Global_262145.f_16782 && iVar1 < Global_262145.f_16823) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy")) {
		if (!Global_262145.f_16783 && iVar1 < Global_262145.f_16824) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2")) {
		if (!Global_262145.f_16784 && iVar1 < Global_262145.f_16825) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr")) {
		if (!Global_262145.f_16785 && iVar1 < Global_262145.f_16826) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2")) {
		if (!Global_262145.f_16786 && iVar1 < Global_262145.f_16827) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb")) {
		if (!Global_262145.f_16787 && iVar1 < Global_262145.f_16828) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2")) {
		if (!Global_262145.f_16788 && iVar1 < Global_262145.f_16829) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero")) {
		if (!Global_262145.f_16789 && iVar1 < Global_262145.f_16830) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2")) {
		if (!Global_262145.f_16790 && iVar1 < Global_262145.f_16831) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator")) {
		if (!Global_262145.f_16791 && iVar1 < Global_262145.f_16832) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter")) {
		if (!Global_262145.f_16792 && iVar1 < Global_262145.f_16833) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2")) {
		if (!Global_262145.f_16793 && iVar1 < Global_262145.f_16834) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta")) {
		if (!Global_262145.f_16794 && iVar1 < Global_262145.f_16835) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1")) {
		if (!Global_262145.f_17797 && iVar1 < Global_262145.f_17793) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2")) {
		if (!Global_262145.f_17798 && iVar1 < Global_262145.f_17794) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston")) {
		if (!Global_262145.f_17799 && iVar1 < Global_262145.f_17795) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2")) {
		if (!Global_262145.f_17800 && iVar1 < Global_262145.f_17796) {
			iVar0 = 0;
		}
	}
	return iVar0;
}

// Position - 0x6FD3
int func_119() { return 0; }

// Position - 0x6FDC
int func_120() { return 1; }

// Position - 0x6FE5
int func_121() { return 1; }

// Position - 0x6FEE
int func_122() {
	if (dlc2::is_dlc_present(-1226939934)) {
		return 1;
	}
	return 0;
}

// Position - 0x7007
int func_123() {
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
				return 1;
			}
		}
	}
	if (Global_139179 == 2) {
		return 1;
	}
	else if (Global_139179 == 3) {
		return 0;
	}
	if (gameplay::_0x5AA3BEFA29F03AD4()) {
		if (gameplay::is_bit_set(gameplay::get_profile_setting(866), 0)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x70C2
int func_124(int iParam0) {
	int iVar0;
	char *sVar1;

	iVar0 = entity::get_entity_model(iParam0);
	sVar1 = vehicle::get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && gameplay::are_strings_equal(sVar1, "LAMAR G ")) {
		return 1;
	}
	if (!func_115(iVar0, 0)) {
		return 1;
	}
	return 0;
}

// Position - 0x7108
int func_125(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		if (entity::does_entity_exist(Global_89185[iVar0])) {
			if (Global_89185[iVar0] == iParam0) {
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x7143
bool func_126(int iParam0) {
	int iVar0;

	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0)) {
		iVar0 = 0;
		while (iVar0 < 9) {
			if (entity::does_entity_exist(Global_89155[iVar0]) &&
				vehicle::is_vehicle_driveable(Global_89155[iVar0], 0)) {
				if (Global_89155[iVar0] == iParam0 &&
					entity::get_entity_model(Global_89155[iVar0]) == entity::get_entity_model(iParam0)) {
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

// Position - 0x71BF
int func_127(int iParam0) {
	int iVar0;

	if (entity::does_entity_exist(Global_68531.f_484[24])) {
		if (iParam0 == Global_68531.f_484[24]) {
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68) {
		if (entity::does_entity_exist(Global_68531.f_484[iVar0])) {
			if (iVar0 != 24 && iVar0 != 21 && iVar0 != 22 && iVar0 != 23 && iVar0 != 27 && iVar0 != 30 && iVar0 != 33 &&
				iVar0 != 28 && iVar0 != 31 && iVar0 != 34 && iVar0 != 26 && iVar0 != 29 && iVar0 != 32) {
				if (iParam0 == Global_68531.f_484[iVar0]) {
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x72A7
int func_128(int iParam0) {
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

// Position - 0x730A
bool func_129(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	char *sVar1;
	int iVar9;

	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0)) {
		return false;
	}
	iVar0 = 0;
	while (func_130(iParam1, iVar0, &sVar1, &iVar9)) {
		if (!iParam2 || gameplay::is_bit_set(Global_101700.f_6188[iVar9], 0)) {
			if (vehicle::is_vehicle_in_garage_area(&sVar1, iParam0)) {
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0x737B
bool func_130(int iParam0, int iParam1, char *sParam2, int *iParam3) {
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

// Position - 0x7453
void func_131(int iParam0) { Global_100412.f_22 = iParam0; }
