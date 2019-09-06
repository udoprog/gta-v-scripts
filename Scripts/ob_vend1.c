#pragma region Local Var //{
int iLocal_0 = 0;
var uLocal_1 = 0;
var uLocal_2 = 0;
int iLocal_3 = 0;
int iLocal_4 = 0;
int iLocal_5 = 0;
int iLocal_6 = 0;
int iLocal_7 = 0;
int iLocal_8 = 0;
int iLocal_9 = 0;
int iLocal_10 = 0;
int iLocal_11 = 0;
int iLocal_12 = 0;
var uLocal_13 = 0;
var uLocal_14 = 0;
float fLocal_15 = 0f;
var uLocal_16 = 0;
var uLocal_17 = 0;
int iLocal_18 = 0;
char *sLocal_19 = NULL;
var uLocal_20 = 0;
var uLocal_21 = 0;
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
int iLocal_47 = 0;
int iLocal_48 = 0;
int iLocal_49 = 0;
char *sLocal_50 = NULL;
int iLocal_51 = 0;
int iLocal_52 = 0;
int iLocal_53 = 0;
int iLocal_54 = 0;
int iLocal_55 = 0;
vector3 vLocal_56 = {0f, 0f, 0f};
float fLocal_59 = 0f;
float fLocal_60 = 0f;
float fLocal_61 = 0f;
int iLocal_62 = 0;
int iLocal_63 = 0;
vector3 vLocal_64 = {0f, 0f, 0f};
vector3 vLocal_67 = {0f, 0f, 0f};
int iLocal_70 = 0;
int *iLocal_71 = NULL;
vector3 vLocal_72 = {0f, 0f, 0f};
vector3 vLocal_75 = {0f, 0f, 0f};
vector3 vLocal_78 = {0f, 0f, 0f};
vector3 vLocal_81 = {0f, 0f, 0f};
vector3 vLocal_84 = {0f, 0f, 0f};
var *uLocal_87 = NULL;
var uLocal_88 = 0;
int iLocal_89 = 0;
int iLocal_90 = 0;
int iLocal_91 = 0;
int iLocal_92 = 0;
int iLocal_93 = 0;
int iLocal_94 = 0;
int iLocal_95 = 0;
int iLocal_96 = 0;
int iLocal_97 = 0;
bool bLocal_98 = 0;
int iLocal_99 = 0;
int iLocal_100 = 0;
int iScriptParam_0 = 0;
#pragma endregion //}

void __EntryFunction__() {
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_19 = "NULL";
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
	sLocal_50 = "NULL";
	vLocal_56 = {6f, 10f, 2f};
	fLocal_59 = 0.306f;
	fLocal_60 = 0.31f;
	fLocal_61 = 0.98f;
	iLocal_62 = -99;
	vLocal_64 = {0.6f, 0.6f, 1f};
	vLocal_67 = {0f, -0.97f, 0.05f};
	iLocal_71 = -1;
	vLocal_75 = {vLocal_67};
	iLocal_89 = 992069095;
	iLocal_90 = 1114264700;
	iLocal_91 = joaat("prop_vend_coffe_01");
	iLocal_92 = joaat("prop_vend_condom_01");
	iLocal_93 = joaat("prop_vend_fags_01");
	iLocal_94 = joaat("prop_vend_snak_01");
	iLocal_95 = 1099892058;
	func_1(iScriptParam_0);
}

// Position - 0xFA
void func_1(int iParam0) {
	if (!network::network_is_game_in_progress()) {
		if (player::has_force_cleanup_occurred(2)) {
			func_320();
		}
	}
	if (func_319(13) || func_319(14)) {
		func_320();
	}
	iLocal_48 = func_318(iParam0);
	if (iLocal_48 == 0) {
		func_320();
	}
	func_317();
	func_313();
	if (entity::does_entity_exist(iParam0)) {
		entity::set_entity_proofs(iParam0, 0, 1, 0, 0, 0, 0, 0, 0);
	}
	else {
		func_320();
	}
	while (true) {
		system::wait(0);
		if (bLocal_98) {
			if (func_304()) {
				func_320();
			}
			if (!network::network_is_game_in_progress()) {
				func_320();
			}
		}
		if (Global_25192) {
			func_320();
		}
		if (entity::does_entity_exist(iParam0)) {
			if (brain::is_object_within_brain_activation_range(iParam0) && !entity::is_entity_dead(iParam0, 0)) {
				if (entity::get_entity_health(iParam0) < 875) {
					entity::set_entity_health(iParam0, 0);
				}
				switch (iLocal_47) {
				case 0:
					if (func_303(iLocal_48)) {
						if (!ped::is_ped_injured(player::player_ped_id())) {
							entity::clear_entity_last_damage_entity(player::player_ped_id());
						}
						iLocal_47 = 2;
					}
					break;

				case 2:
					vLocal_72 = {entity::get_offset_from_entity_in_world_coords(iParam0, vLocal_75)};
					func_300(iParam0);
					if (!ped::is_ped_injured(player::player_ped_id()) &&
						!ped::is_ped_ragdoll(player::player_ped_id()) && !func_299()) {
						func_214(iParam0, iLocal_48);
					}
					else {
						func_211(1);
						func_3(iLocal_48);
					}
					break;

				case 3:
					func_2("VENDEMP", -1);
					entity::set_entity_health(iParam0, 0);
					break;
				}
			}
			else {
				func_320();
			}
		}
		else {
			func_320();
		}
		Global_25440 = 1;
	}
}

// Position - 0x27B
void func_2(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x292
void func_3(int iParam0) {
	if (gameplay::is_bit_set(iLocal_97, 0)) {
		ped::set_ped_using_action_mode(player::player_ped_id(), 1, -1, 0);
		gameplay::clear_bit(&iLocal_97, 0);
	}
	if (Global_69702) {
		if (iLocal_51) {
			func_204(player::player_id(), 1, 0);
		}
	}
	else {
		player::set_player_control(player::player_id(), 1, 0);
		func_195(0, 1, 1, 0);
		Global_25441 = 0;
	}
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (entity::is_entity_playing_anim(player::player_ped_id(), sLocal_50, "PLYR_BUY_DRINK_PT1", 3) || func_299()) {
			ai::clear_ped_tasks(player::player_ped_id());
		}
	}
	if (Global_69702) {
		if (weapon::is_weapon_valid(iLocal_54)) {
			weapon::set_current_ped_weapon(player::player_ped_id(), iLocal_54, 0);
		}
		if (iLocal_62 != -99) {
			func_10(player::player_ped_id(), 1, iLocal_62, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			iLocal_62 = -99;
		}
		if (iLocal_63) {
			func_8(player::player_ped_id());
			iLocal_63 = 0;
		}
		func_7();
	}
	iLocal_51 = 0;
	if (entity::does_entity_exist(iLocal_55)) {
		func_6(iParam0);
		func_5();
		func_211(0);
	}
	iLocal_49 = 0;
	func_4(&uLocal_87);
}

// Position - 0x38C
void func_4(var *uParam0) { uParam0->f_1 = 0; }

// Position - 0x399
void func_5() {
	entity::set_entity_health(player::player_ped_id(), ped::get_ped_max_health(player::player_ped_id()));
	iLocal_70++;
}

// Position - 0x3B7
void func_6(int iParam0) {
	switch (iParam0) {
	case 1: break;

	case 2: break;

	case 3: break;

	case 4: break;

	case 5: break;

	case 6: break;

	case 7: break;
	}
}

// Position - 0x405
void func_7() { Global_2433125.f_655.f_10 = 0; }

// Position - 0x417
int func_8(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = ped::get_ped_texture_variation(iParam0, 8);
	iVar1 = dlc1::get_hash_name_for_component(iParam0, 8, ped::get_ped_drawable_variation(iParam0, 8), iVar0);
	if (dlc1::_0x341DE7ED1D2A1BFD(iVar1, 391733089, 0)) {
		iVar2 = -1;
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar1, -1889900289, 0)) {
			iVar2 = func_9(iParam0, 0);
			ped::set_ped_component_variation(iParam0, 8, iVar2, iVar0, 0);
			return 1;
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar1, 1569775397, 0)) {
			iVar2 = func_9(iParam0, 1);
			ped::set_ped_component_variation(iParam0, 8, iVar2, iVar0, 0);
			return 1;
		}
		return 0;
	}
	return 0;
}

// Position - 0x4A9
var func_9(int iParam0, int iParam1) {
	struct<4> Var0;
	bool bVar17;

	bVar17 = entity::get_entity_model(iParam0) == joaat("mp_m_freemode_01");
	Var0.f_3 = -1;
	if (bVar17) {
		if (iParam1) {
			dlc1::get_shop_ped_component(-367850957, &Var0);
		}
		else {
			dlc1::get_shop_ped_component(1241116144, &Var0);
		}
	}
	else if (iParam1) {
		dlc1::get_shop_ped_component(555191698, &Var0);
	}
	else {
		dlc1::get_shop_ped_component(-972757995, &Var0);
	}
	return Var0.f_3;
}

// Position - 0x50C
int func_10(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int *iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar32;
	var uVar42;
	int iVar59;
	var uVar60;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;
	float fVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int *iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	var uVar117;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	var uVar122;
	int iVar123;
	int iVar124;
	int iVar125;
	int iVar126;
	var uVar127;
	int iVar128;
	int iVar129;
	int iVar130;
	int iVar131;
	var uVar132;
	int iVar133;
	int iVar134;
	int iVar135;
	int iVar136;
	int iVar137;

	if (!network::network_is_game_in_progress()) {
		if (Global_1315167 != 4 && Global_1315167 != 5 && Global_1315167 != 7) {
			return 0;
		}
	}
	if (ped::is_ped_injured(iParam0) || iParam2 == -99) {
		return 0;
	}
	if (iParam0 == player::player_ped_id() && Global_2421664[player::player_id() /*358*/].f_225 == 2) {
		if (!iParam12) {
			return 0;
		}
	}
	if (iParam10 == -1) {
		iParam10 = Global_69521;
	}
	Global_69522++;
	iVar5 = entity::get_entity_model(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0) {
		Global_69523[1 /*14*/] = {func_154(iVar5, iParam1, iParam2)};
		if (!func_153(iParam3)) {
			Global_69522--;
			return 0;
		}
		func_148(iVar5, iParam1, iParam2, 1);
	}
	if (iParam1 == 12) {
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		ped::clear_all_ped_props(iParam0);
		uVar15 = 15;
		if (iParam5 == 1) {
			uVar15 = {Global_69566};
		}
		else {
			uVar15 = {func_144(iVar5, iParam2)};
		}
		iVar0 = 0;
		while (iVar0 <= 14) {
			if (uVar15[iVar0] != -99) {
				if (iVar0 == 10 && uVar15.f_16) {
					Global_69523[1 /*14*/] = {func_154(iVar5, 10, 0)};
					if (iParam4 == -1) {
						ped::set_ped_component_variation(iParam0, func_143(iVar0), Global_69523[1 /*14*/].f_3,
														 Global_69523[1 /*14*/].f_4,
														 ped::get_ped_palette_variation(iParam0, func_143(iVar0)));
					}
					else {
						ped::set_ped_component_variation(iParam0, func_143(iVar0), Global_69523[1 /*14*/].f_3,
														 Global_69523[1 /*14*/].f_4, iParam4);
					}
					if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1)) {
						func_148(iVar5, 10, 0, 1);
					}
				}
				else {
					Global_69523[1 /*14*/] = {func_154(iVar5, iVar0, uVar15[iVar0])};
					if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0) || iVar0 == 13) {
						if (iVar0 == 13) {
							uVar32 = 9;
							if (iParam5 == 1) {
								uVar32 = {Global_69583};
							}
							else {
								uVar32 = {func_140(iVar5, uVar15[iVar0])};
							}
							iVar1 = 0;
							while (iVar1 <= 8) {
								Global_69523[1 /*14*/] = {func_154(iVar5, 14, uVar32[iVar1])};
								func_139(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3,
										 Global_69523[1 /*14*/].f_4);
								if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1)) {
									func_148(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12) {
							if (iVar0 != 1) {
								if (iParam4 == -1) {
									ped::set_ped_component_variation(
										iParam0, func_143(iVar0), Global_69523[1 /*14*/].f_3,
										Global_69523[1 /*14*/].f_4,
										ped::get_ped_palette_variation(iParam0, func_143(iVar0)));
								}
								else {
									ped::set_ped_component_variation(iParam0, func_143(iVar0),
																	 Global_69523[1 /*14*/].f_3,
																	 Global_69523[1 /*14*/].f_4, iParam4);
								}
							}
							else {
								func_10(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1)) {
								func_148(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14) {
				Global_69523[1 /*14*/] = {func_154(iVar5, iVar0, func_135(iParam0, iVar0, -1))};
				if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 3)) {
					uVar42 = {func_144(iVar5, 0)};
					func_10(iParam0, iVar0, uVar42[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0) {
			iVar59 = func_134();
			if (iVar59 != -1) {
				func_132(iVar59, 0, iParam10);
			}
			func_129(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13) {
		uVar60 = {func_140(iVar5, iParam2)};
		iVar1 = 0;
		while (iVar1 <= 8) {
			Global_69523[1 /*14*/] = {func_154(iVar5, 14, uVar60[iVar1])};
			func_139(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4);
			if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1)) {
				func_148(iVar5, 14, uVar60[iVar1], 1);
			}
			if (iParam5 == 0) {
				if (Global_69522 == 1) {
					iVar2 = 0;
					while (iVar2 < 15) {
						iVar3 = func_127(iParam0, iVar5, 14, uVar60[iVar1], iVar2, 0);
						if (iVar3 != -99) {
							func_10(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14) {
		func_139(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4);
		if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1)) {
			func_148(iVar5, iParam1, iParam2, 1);
		}
		if (Global_69523[1 /*14*/].f_12 == 0) {
			func_124(iParam0);
		}
		if (iParam5 == 0) {
			if (Global_69522 == 1) {
				iVar2 = 0;
				while (iVar2 < 15) {
					iVar3 = func_127(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99) {
						func_10(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
		}
	}
	else {
		if (iParam1 == 11) {
			if (iParam5 == 0) {
				iVar70 = -1;
				if (gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6) &&
					dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, -1996375172, 11)) {
					ped::_0xCC9682B8951C5229(iParam0, Global_1316390, Global_1316391, Global_1316392, 0);
					ped::_0xCC9682B8951C5229(iParam0, Global_1316390, Global_1316391, Global_1316392, 1);
					ped::_0xCC9682B8951C5229(iParam0, Global_1316390, Global_1316391, Global_1316392, 2);
					ped::_0xCC9682B8951C5229(iParam0, Global_1316390, Global_1316391, Global_1316392, 3);
				}
				iVar71 = func_122(iParam0, 11);
				iVar72 = func_122(iParam0, 8);
				iVar73 = func_122(iParam0, 4);
				iVar8 = dlc1::get_hash_name_for_component(iParam0, 8, ped::get_ped_drawable_variation(iParam0, 8),
														  ped::get_ped_texture_variation(iParam0, 8));
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar8, 240476421, 8)) {
					if (iVar5 == joaat("mp_m_freemode_01")) {
						iVar70 = func_121(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01")) {
						iVar70 = func_121(iVar5, iParam2, 11, 4);
					}
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar70, 320460654, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar70, -2017999390, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar70, -1410897066, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar70, -826135203, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar70, -1855618474, 0)) {
					}
					else {
						iVar9 = func_122(iParam0, 8);
					}
				}
				iVar74 = dlc1::get_hash_name_for_component(iParam0, 3, ped::get_ped_drawable_variation(iParam0, 3), 0);
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar74, -356646862, 0)) {
					iVar75 = func_120(iVar5, iVar72, iVar71, iVar73);
					if (iVar75 == -99) {
						iVar75 = func_127(iParam0, iVar5, 11, iVar71, 3, 0);
					}
					switch (iVar74) {
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar75 = 11;
						iVar70 = func_121(iVar5, iParam2, 11, 4);
						if (!dlc1::_0x341DE7ED1D2A1BFD(iVar70, -530089825, 0)) {
							iVar75 = -99;
						}
						break;
					}
					if (iVar75 != -99) {
						iVar76 = 0;
						while (iVar76 < 15) {
							if (func_119(iVar5, iVar75, iVar76) == iVar74) {
								iVar11 = iVar76;
								iVar12 = ped::get_ped_texture_variation(iParam0, 3);
							}
							iVar76++;
						}
					}
				}
				iVar70 = -1;
				if (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256 &&
					dlc1::_0x341DE7ED1D2A1BFD(func_121(iVar5, iParam2, 11, 4), -1200513218, 0)) {
					iVar71 = func_122(iParam0, 11);
					if (iVar71 >= 256) {
						iVar70 = func_121(iVar5, iVar71, 11, 4);
					}
					if (iVar71 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar70, 1965569012, 0)) {
						iVar77 = func_117(iVar5, iVar71, iParam2, ped::get_ped_texture_variation(iParam0, 11));
						if (iVar77 != -99) {
							func_10(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_69523[1 /*14*/] = {func_154(iVar5, iParam1, iParam2)};
						}
					}
				}
				else if (func_116(iVar5, iParam2)) {
					if (iVar5 == joaat("mp_m_freemode_01")) {
						if (iVar71 >= 237) {
							iVar70 = func_121(iVar5, iVar71, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01")) {
						if (iVar71 >= 256) {
							iVar70 = func_121(iVar5, iVar71, 11, 4);
						}
					}
					iVar9 = -99;
					if (!func_116(iVar5, iVar71)) {
						if (iVar5 == joaat("mp_f_freemode_01") && iVar71 >= 256 &&
							(dlc1::_0x341DE7ED1D2A1BFD(iVar70, -1200513218, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar70, 1965569012, 0))) {
						}
						else if (iVar5 == joaat("mp_f_freemode_01") && iVar71 >= 256 &&
								 (dlc1::_0x341DE7ED1D2A1BFD(iVar70, 684992453, 0) ||
								  dlc1::_0x341DE7ED1D2A1BFD(iVar70, 916636514, 0) ||
								  dlc1::_0x341DE7ED1D2A1BFD(iVar70, -1939378450, 0) ||
								  dlc1::_0x341DE7ED1D2A1BFD(iVar70, -820724897, 0) ||
								  dlc1::_0x341DE7ED1D2A1BFD(iVar70, 153792394, 0) ||
								  dlc1::_0x341DE7ED1D2A1BFD(iVar70, -872449705, 0) ||
								  dlc1::_0x341DE7ED1D2A1BFD(iVar70, 700658917, 0) ||
								  dlc1::_0x341DE7ED1D2A1BFD(iVar70, -549843760, 0) ||
								  dlc1::_0x341DE7ED1D2A1BFD(iVar70, 1830529185, 0))) {
						}
						else {
							iVar78 = func_117(iVar5, iVar71, iParam2, ped::get_ped_texture_variation(iParam0, 11));
							if (iVar78 != -99) {
								func_10(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_69523[1 /*14*/] = {func_154(iVar5, iParam1, iParam2)};
								iVar9 = -99;
							}
							else {
								if (iVar5 == joaat("mp_m_freemode_01")) {
									iVar79 = func_114(iVar5, 11, -1);
									Global_69523[1 /*14*/] = {func_154(iVar5, 11, iVar79)};
									iVar78 = func_117(iVar5, iVar79, iParam2, Global_69523[1 /*14*/].f_4);
									if (iVar78 == -99 ||
										dlc1::_0x341DE7ED1D2A1BFD(func_121(iVar5, iParam2, 11, 3), -1237899132, 0)) {
										iVar78 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01")) {
									if (dlc1::_0x341DE7ED1D2A1BFD(func_121(iVar5, iParam2, 11, 4), -1237899132, 0)) {
										iVar78 = 120;
									}
									else {
										iVar78 = 48;
									}
								}
								func_10(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_69523[1 /*14*/] = {func_154(iVar5, iParam1, iParam2)};
							}
						}
					}
					else {
						Global_69523[1 /*14*/] = {func_154(iVar5, 11, iVar71)};
						iVar80 = Global_69523[1 /*14*/].f_3;
						Global_69523[1 /*14*/] = {func_154(iVar5, 11, iParam2)};
						iVar81 = Global_69523[1 /*14*/].f_3;
						if (iVar80 != iVar81) {
							Global_69523[1 /*14*/] = {func_154(iVar5, 8, iVar72)};
							iVar82 = Global_69523[1 /*14*/].f_4;
							iVar83 = func_113(iVar5, iVar72, iVar82);
							if (iVar83 == -99) {
								iVar84 = iVar72;
								if (iVar5 == joaat("mp_m_freemode_01")) {
									iVar85 = func_121(iVar5, iParam2, 11, 3);
									if (iParam2 >= 96 && iParam2 <= 107 || func_112(iVar85) == 6 ||
										dlc1::_0x341DE7ED1D2A1BFD(iVar85, -1237899132, 0)) {
										iVar83 = func_114(iVar5, 11, -1);
										Global_69523[1 /*14*/] = {func_154(iVar5, 11, iVar83)};
										iVar84 = func_117(iVar5, iVar83, iParam2, Global_69523[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && (iVar72 == 32 || iVar72 == 33)) {
									if (!dlc1::_0x341DE7ED1D2A1BFD(func_121(iVar5, iParam2, 11, 4), -491588875, 0)) {
										iVar83 = func_114(iVar5, 11, -1);
										Global_69523[1 /*14*/] = {func_154(iVar5, 11, iVar83)};
										iVar84 = func_117(iVar5, iVar83, iParam2, Global_69523[1 /*14*/].f_4);
									}
								}
								iVar86 = -1;
								if (iVar5 == joaat("mp_m_freemode_01")) {
									iVar86 = func_121(iVar5, iVar72, 8, 3);
								}
								else if (iVar5 == joaat("mp_f_freemode_01")) {
									iVar86 = func_121(iVar5, iVar72, 8, 4);
								}
								if (dlc1::_0x341DE7ED1D2A1BFD(iVar86, -316495692, 0)) {
									iVar83 = func_114(iVar5, 11, -1);
									Global_69523[1 /*14*/] = {func_154(iVar5, 11, iVar83)};
									iVar84 = func_117(iVar5, iVar83, iParam2, Global_69523[1 /*14*/].f_4);
								}
							}
							else {
								iVar84 = func_117(iVar5, iVar83, iParam2, iVar82);
								if (iVar5 == joaat("mp_m_freemode_01")) {
									if (dlc1::_0x341DE7ED1D2A1BFD(func_121(iVar5, iParam2, 11, 3), -1719338724, 0)) {
										if (!func_111(iVar5, func_122(iParam0, 4), iVar83)) {
											iVar84 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01")) {
									if (dlc1::_0x341DE7ED1D2A1BFD(func_121(iVar5, iParam2, 11, 4), -1719338724, 0)) {
										if (!func_111(iVar5, func_122(iParam0, 4), iVar83)) {
											iVar84 = 48;
										}
									}
								}
							}
							if (iVar84 != -99) {
								func_10(iParam0, 8, iVar84, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01")) {
								iVar83 = func_114(iVar5, 11, -1);
								Global_69523[1 /*14*/] = {func_154(iVar5, 11, iVar83)};
								iVar84 = func_117(iVar5, iVar83, iParam2, Global_69523[1 /*14*/].f_4);
								if (iVar84 == -99) {
									iVar84 = 240;
								}
								func_10(iParam0, 8, iVar84, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01")) {
								func_10(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_69523[1 /*14*/] = {func_154(iVar5, iParam1, iParam2)};
						}
					}
				}
				else {
					func_108(iVar5, iParam2);
					if (!iParam13) {
						ped::set_ped_component_variation(iParam0, 10, 0, 0,
														 ped::get_ped_palette_variation(iParam0, 10));
					}
				}
			}
			func_129(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0) {
				iVar6 = func_120(iVar5, func_135(iParam0, 8, -1), iParam2, func_135(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2) {
			if (iParam5 == 0) {
				if (iParam8 == -1) {
					iParam8 = func_107(2145, iParam10, 0);
				}
				if (iParam9 == -1) {
					iParam9 = func_107(2152, iParam10, 0);
				}
				ped::_set_ped_hair_color(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0) {
				func_67(iParam0, iParam2, iParam10, iParam11);
			}
		}
		else if (iParam1 == 8) {
			func_129(iParam0, iParam1, iParam2, iParam6, 0);
			iVar87 = func_122(iParam0, 11);
			if (func_116(iVar5, iVar87)) {
				iVar88 = func_113(iVar5, iParam2, Global_69523[1 /*14*/].f_4);
				func_108(iVar5, iVar88);
			}
			if (iParam5 == 0) {
				iVar6 = func_120(iVar5, iParam2, func_122(iParam0, 11), func_122(iParam0, 4));
			}
		}
		else if (iParam1 == 9) {
			if (iParam2 >= 1 && iParam2 <= 41) {
				iVar89 = func_122(iParam0, 7);
				if (!func_64(iVar5, iVar89, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99)) {
					ped::set_ped_component_variation(iParam0, func_143(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1) {
			if (iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26 &&
					dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, -921710083, 0) ||
				iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26 &&
					dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, -921710083, 0)) {
				iVar90 = func_107(2092, iParam10, 0);
				iVar91 = func_107(2093, iParam10, 0);
				iVar92 = func_107(2094, iParam10, 0);
				fVar93 = func_63(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01")) {
					ped::set_ped_head_blend_data(iParam0, 0, 0, 0, iVar90, iVar91, iVar92, 0f, fVar93, 0f, 0);
				}
				else if (iVar5 == joaat("mp_f_freemode_01")) {
					ped::set_ped_head_blend_data(iParam0, 21, 0, 0, iVar90, iVar91, iVar92, 0f, fVar93, 0f, 0);
				}
				iVar94 = 0;
				while (iVar94 < 20) {
					ped::_set_ped_face_feature(iParam0, iVar94, 0f);
					iVar94++;
				}
			}
			else {
				func_47(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4) {
			iVar95 = func_122(iParam0, 11);
			iVar96 = func_122(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01")) {
				if (dlc1::_0x341DE7ED1D2A1BFD(func_121(iVar5, iVar95, 11, 3), -1719338724, 0)) {
					if (!func_111(iVar5, iParam2, func_113(iVar5, iVar96, 0))) {
						func_10(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_69523[1 /*14*/] = {func_154(iVar5, iParam1, iParam2)};
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01")) {
				if (dlc1::_0x341DE7ED1D2A1BFD(func_121(iVar5, iVar95, 11, 4), -1719338724, 0)) {
					if (!func_111(iVar5, iParam2, func_113(iVar5, iVar96, 0))) {
						func_10(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_69523[1 /*14*/] = {func_154(iVar5, iParam1, iParam2)};
					}
				}
			}
			if (iParam5 == 0) {
				iVar6 = func_120(iVar5, func_122(iParam0, 8), func_122(iParam0, 11), iParam2);
			}
			iVar97 = dlc1::get_hash_name_for_component(iParam0, 3, ped::get_ped_drawable_variation(iParam0, 3), 0);
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar97, -356646862, 0)) {
				iVar98 = func_120(iVar5, iVar96, iVar95, iParam2);
				if (iVar98 == -99) {
					iVar98 = func_127(iParam0, iVar5, 11, iVar95, 3, 0);
				}
				switch (iVar97) {
				case 1165919867:
				case 1606204151:
				case 1774276352:
				case 1934254610:
				case 980775017:
				case 399321881:
					iVar98 = 11;
					iVar99 = func_121(iVar5, iParam2, 11, 4);
					if (!dlc1::_0x341DE7ED1D2A1BFD(iVar99, -530089825, 0)) {
						iVar98 = -99;
					}
					break;
				}
				if (iVar98 != -99) {
					iVar100 = 0;
					while (iVar100 < 15) {
						if (func_119(iVar5, iVar98, iVar100) == iVar97) {
							iVar11 = iVar100;
							iVar12 = ped::get_ped_texture_variation(iParam0, 3);
						}
						iVar100++;
					}
				}
			}
		}
		if (iParam4 == -1) {
			ped::set_ped_component_variation(iParam0, func_143(iParam1), Global_69523[1 /*14*/].f_3,
											 Global_69523[1 /*14*/].f_4,
											 ped::get_ped_palette_variation(iParam0, func_143(iParam1)));
		}
		else {
			ped::set_ped_component_variation(iParam0, func_143(iParam1), Global_69523[1 /*14*/].f_3,
											 Global_69523[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0) {
			if (Global_69522 == 1) {
				iVar2 = 0;
				while (iVar2 < 15) {
					iVar3 = func_127(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99) {
						func_10(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3) {
							switch (Global_2621444) {
							case 1165919867:
							case 1606204151:
							case 1774276352:
							case 1934254610:
							case 980775017:
							case 399321881: iVar11 = -1; break;
							}
						}
						else if (iVar2 == 8) {
							if (iVar6 != -99) {
								iVar6 = func_120(iVar5, iVar3, func_122(iParam0, 11), func_122(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8) {
				if (func_46(iParam0)) {
					iVar101 = func_45(iVar5, iParam1, iParam2);
					if (iVar101 > 0) {
						iVar101 += ped::get_ped_texture_variation(iParam0, 9);
						if (!func_39(iParam0, 9, iVar101)) {
							func_10(iParam0, 9, iVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else {
						func_10(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar8 = dlc1::get_hash_name_for_component(iParam0, 8, ped::get_ped_drawable_variation(iParam0, 8),
															  ped::get_ped_texture_variation(iParam0, 8));
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar8, 240476421, 8)) {
						func_10(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
				iVar102 = func_107(2034, -1, 0);
				if (ped::get_ped_drawable_variation(iParam0, 5) != 0) {
					ped::set_ped_component_variation(iParam0, 5, func_35(iParam0, iVar102), func_34(iParam0, iVar102),
													 func_33(iParam0, iVar102));
				}
				if (iParam0 == player::player_ped_id()) {
					player::set_player_parachute_variation_override(player::player_id(), 5,
																	func_35(player::player_ped_id(), iVar102),
																	func_34(player::player_ped_id(), iVar102), 0);
					player::set_player_parachute_pack_tint_index(player::player_id(),
																 func_33(player::player_ped_id(), iVar102));
					func_30(player::player_id(), iVar102);
				}
			}
			if (iParam1 == 7) {
				if (iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92 ||
					iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55) {
					if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, -319568873, 0)) {
						func_10(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4)) {
				if (iParam1 == 11) {
					iVar103 = func_135(iParam0, 4, -1);
					iVar104 = iParam2;
				}
				else {
					iVar103 = iParam2;
					iVar104 = func_135(iParam0, 11, -1);
				}
				if (func_29(iVar5, 11, iVar104, -1)) {
					if (!func_28(iVar5, 4, iVar103, -1)) {
						if (func_27(iVar5, 4, iVar103, &iVar105)) {
							func_10(iParam0, 4, iVar105, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_28(iVar5, 4, iVar103, -1)) {
					if (func_26(iVar5, 4, iVar103, &iVar105)) {
						func_10(iParam0, 4, iVar105, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6) {
				iVar106 = ped::get_ped_drawable_variation(iParam0, 6);
				iVar107 = ped::get_ped_texture_variation(iParam0, 6);
				iVar108 = dlc1::get_hash_name_for_component(iParam0, 6, iVar106, iVar107);
				iVar109 = ped::get_ped_drawable_variation(iParam0, 4);
				iVar110 = ped::get_ped_texture_variation(iParam0, 4);
				iVar111 = dlc1::get_hash_name_for_component(iParam0, 4, iVar109, iVar110);
				iVar112 = func_122(iParam0, 4);
				iVar113 = func_122(iParam0, 6);
				if (func_25(iVar5, iVar108)) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar108, 1812005517, 0) != func_24(iVar5, iVar112, iVar108)) {
						iVar114 = dlc1::_0xC17AD0E5752BECDA(iVar108);
						iVar115 = 0;
						while (iVar115 < iVar114) {
							dlc1::get_variant_component(iVar108, iVar115, &iVar116, &uVar117, &iVar118);
							if (iVar118 == 6) {
								if (iVar116 != 0 && iVar116 != 1849449579) {
									if (iVar5 == joaat("mp_m_freemode_01")) {
										iVar113 = func_21(iVar5, iVar116, 6, 3);
										iVar108 = iVar116;
										func_10(iParam0, 6, iVar113, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01")) {
										iVar113 = func_21(iVar5, iVar116, 6, 4);
										iVar108 = iVar116;
										func_10(iParam0, 6, iVar113, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar115 = iVar114 + 1;
								}
							}
							iVar115++;
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar111, -2042643157, 0) != func_20(iVar5, iVar113, iVar111)) {
						iVar119 = dlc1::_0xC17AD0E5752BECDA(iVar111);
						iVar120 = 0;
						while (iVar120 < iVar119) {
							dlc1::get_variant_component(iVar111, iVar120, &iVar121, &uVar122, &iVar123);
							if (iVar123 == 4) {
								if (iVar121 != 0 && iVar121 != 1849449579) {
									if (iVar5 == joaat("mp_m_freemode_01")) {
										iVar112 = func_21(iVar5, iVar121, 4, 3);
										iVar111 = iVar121;
										func_10(iParam0, 4, iVar112, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01")) {
										iVar112 = func_21(iVar5, iVar121, 4, 4);
										iVar111 = iVar121;
										func_10(iParam0, 4, iVar112, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar120 = iVar119 + 1;
								}
							}
							iVar120++;
						}
					}
				}
				if (func_25(iVar5, iVar111)) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar111, -2042643157, 0) != func_20(iVar5, iVar113, iVar111)) {
						iVar124 = dlc1::_0xC17AD0E5752BECDA(iVar111);
						iVar125 = 0;
						while (iVar125 < iVar124) {
							dlc1::get_variant_component(iVar111, iVar125, &iVar126, &uVar127, &iVar128);
							if (iVar128 == 4) {
								if (iVar126 != 0 && iVar126 != 1849449579) {
									if (iVar5 == joaat("mp_m_freemode_01")) {
										iVar112 = func_21(iVar5, iVar126, 4, 3);
										iVar111 = iVar126;
										func_10(iParam0, 4, iVar112, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01")) {
										iVar112 = func_21(iVar5, iVar126, 4, 4);
										iVar111 = iVar126;
										func_10(iParam0, 4, iVar112, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar125 = iVar124 + 1;
								}
							}
							iVar125++;
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar108, 1812005517, 0) != func_24(iVar5, iVar112, iVar108)) {
						iVar129 = dlc1::_0xC17AD0E5752BECDA(iVar108);
						iVar130 = 0;
						while (iVar130 < iVar129) {
							dlc1::get_variant_component(iVar108, iVar130, &iVar131, &uVar132, &iVar133);
							if (iVar133 == 6) {
								if (iVar131 != 0 && iVar131 != 1849449579) {
									if (iVar5 == joaat("mp_m_freemode_01")) {
										iVar113 = func_21(iVar5, iVar131, 6, 3);
										iVar108 = iVar131;
										func_10(iParam0, 6, iVar113, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01")) {
										iVar113 = func_21(iVar5, iVar131, 6, 4);
										iVar108 = iVar131;
										func_10(iParam0, 6, iVar113, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar130 = iVar129 + 1;
								}
							}
							iVar130++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1) {
				func_124(iParam0);
				iVar134 = ped::get_ped_drawable_variation(iParam0, 1);
				iVar135 = ped::get_ped_texture_variation(iParam0, 1);
				iVar136 = dlc1::get_hash_name_for_component(iParam0, 1, iVar134, iVar135);
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar136, 838607662, 0)) {
					iVar3 = func_127(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99) {
						func_10(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_127(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99) {
						func_10(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2) {
		if (func_11(iParam0, &iVar4)) {
			func_10(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !iParam13) {
		func_10(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar9 != -99) {
		func_10(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99) {
		func_10(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar11 != -1) {
		iVar137 = func_119(iVar5, func_135(iParam0, 3, -1), iVar11);
		if (iVar137 != -1) {
			if (iVar5 == joaat("mp_m_freemode_01")) {
				iVar10 = func_21(iVar5, iVar137, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01")) {
				iVar10 = func_21(iVar5, iVar137, 3, 4);
			}
			if (iVar10 != -99) {
				iVar10 += iVar12;
				func_10(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_69522--;
	return 1;
}

// Position - 0x1FA8
bool func_11(int iParam0, int *iParam1) {
	int iVar0;
	int iVar1;

	*iParam1 = func_135(player::player_ped_id(), 2, -1);
	if (func_107(748, Global_69521, 0) != -99 && func_17()) {
		if (func_16() == 4) {
			return true;
		}
		if (func_107(748, Global_69521, 0) == 0 && func_107(749, Global_69521, 0) == 0) {
			if (func_15(161, Global_69521)) {
				if (func_107(2045, Global_69521, 0) == 0) {
					return false;
				}
			}
			else if (func_107(747, Global_69521, 0) == 0) {
				return false;
			}
		}
		iVar0 = func_107(748, Global_69521, 0);
		iVar1 = func_107(749, Global_69521, 0);
		if (!func_39(iParam0, iVar1, iVar0)) {
			if (func_15(161, Global_69521)) {
				*iParam1 = func_107(2045, Global_69521, 0);
			}
			else {
				*iParam1 = func_107(747, Global_69521, 0);
			}
			func_12(748, -99, Global_69521, 1, 0);
			func_12(749, 2, Global_69521, 1, 0);
			return true;
		}
	}
	return false;
}

// Position - 0x20BC
void func_12(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam4) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_13(iParam2)];
	if (iVar0 != 0) {
		stats::stat_set_int(iVar0, iParam1, iParam3);
	}
}

// Position - 0x20EC
int func_13(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_14();
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

// Position - 0x2120
int func_14() { return Global_1312735; }

// Position - 0x212C
bool func_15(int iParam0, int iParam1) {
	int iVar0;
	var uVar1;

	iVar0 = Global_2522581[iParam0 /*3*/][func_13(iParam1)];
	if (stats::stat_get_bool(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return false;
}

// Position - 0x2158
int func_16() { return Global_1315167; }

// Position - 0x2164
int func_17() {
	if (func_19() && func_18(0)) {
		return 1;
	}
	return 0;
}

// Position - 0x2182
var func_18(int iParam0) { return Global_1312373[iParam0]; }

// Position - 0x2192
var func_19() { return func_18(func_14() + 1); }

// Position - 0x21A4
int func_20(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = -1;
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		if (iParam1 >= 256) {
			iVar0 = func_121(iParam0, iParam1, 6, 3);
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iParam2, -56268180, 0)) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, -713698407, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 140732128, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 2106216756, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -849839091, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1446333198, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -269266203, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 201427653, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 967829025, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -685039259, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1266557933, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -364248070, 0)) {
				return 1;
			}
		}
		break;

	case joaat("mp_f_freemode_01"): break;
	}
	return 0;
	return 0;
}

// Position - 0x22B7
int func_21(int iParam0, int iParam1, int iParam2, int iParam3) {
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;

	if (iParam2 == 12) {
	}
	else if (iParam2 == 13) {
	}
	else if (iParam2 == 14) {
		dlc1::init_shop_ped_prop(&Var0);
		iVar18 = 0;
		iVar19 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19) {
			dlc1::get_shop_ped_query_prop(iVar17, &Var0);
			if (!dlc1::_is_dlc_data_empty(Var0)) {
				if (iParam1 == Var0.f_1) {
					return func_23(iParam0) + iVar18;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else {
		dlc1::init_shop_ped_component(&Var20);
		iVar38 = 0;
		iVar39 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_143(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39) {
			dlc1::get_shop_ped_query_component(iVar37, &Var20);
			if (!dlc1::_is_dlc_data_empty(Var20)) {
				if (iParam1 == Var20.f_1) {
					return func_22(iParam0, func_143(iParam2)) + iVar38;
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

// Position - 0x2397
int func_22(int iParam0, int iParam1) {
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 0: return 7;

		case 1: return 5;

		case 2: return 6;

		case 3: return 181;

		case 4: return 113;

		case 5: return 14;

		case 6: return 99;

		case 7: return 1;

		case 8: return 24;

		case 9: return 20;

		case 10: return 48;

		case 11: return 45;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 5;

		case 2: return 21;

		case 3: return 318;

		case 4: return 117;

		case 5: return 7;

		case 6: return 134;

		case 7: return 1;

		case 8: return 77;

		case 9: return 12;

		case 10: return 53;

		case 11: return 63;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 0: return 7;

		case 1: return 6;

		case 2: return 9;

		case 3: return 242;

		case 4: return 104;

		case 5: return 7;

		case 6: return 84;

		case 7: return 1;

		case 8: return 18;

		case 9: return 17;

		case 10: return 33;

		case 11: return 1;
		}
		break;
	}
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0: return 0;

		case 1: return 26;

		case 2: return 91;

		case 3: return 16;

		case 4: return 256;

		case 5: return 9;

		case 6: return 256;

		case 7: return 92;

		case 8: return 241;

		case 9: return 46;

		case 10: return 7;

		case 11: return 237;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0: return 0;

		case 1: return 26;

		case 2: return 92;

		case 3: return 16;

		case 4: return 256;

		case 5: return 9;

		case 6: return 256;

		case 7: return 55;

		case 8: return 136;

		case 9: return 36;

		case 10: return 6;

		case 11: return 256;
		}
		break;
	}
	return -99;
}

// Position - 0x273E
int func_23(int iParam0) {
	switch (iParam0) {
	case joaat("player_zero"): return 113;

	case joaat("player_one"): return 175;

	case joaat("player_two"): return 155;
	}
	switch (iParam0) {
	case joaat("mp_m_freemode_01"): return 327;

	case joaat("mp_f_freemode_01"): return 327;
	}
	return -99;
}

// Position - 0x279F
int func_24(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	iVar1 = -1;
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		if (iParam1 >= 256) {
			iVar0 = func_121(iParam0, iParam1, 4, 3);
			iVar1 = func_112(iVar0);
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iParam2, -364248070, 0) || dlc1::_0x341DE7ED1D2A1BFD(iParam2, -56268180, 0)) {
			iVar2 = 1;
			if (iParam1 >= 32 && iParam1 <= 47 || iParam1 >= 64 && iParam1 <= 79 || iParam1 >= 96 && iParam1 <= 111 ||
				iParam1 >= 176 && iParam1 <= 191 || iParam1 >= 192 && iParam1 <= 207 ||
				iParam1 >= 224 && iParam1 <= 239 || iParam1 >= 240 && iParam1 <= 255 || iVar1 == 2 || iVar1 == 4 ||
				iVar1 == 6 || iVar1 == 11 || iVar1 == 12 || iVar1 == 14 || iVar1 == 15 ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -269266203, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 201427653, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 967829025, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -685039259, 0)) {
				iVar2 = 0;
			}
			switch (iVar0) {
			case -439764935:
			case 1858824227:
			case -44268217:
			case 301706885:
			case 1283072893:
			case -1590178565:
			case 1995307108:
			case 1029014836:
			case -365568266:
			case -138446327:
			case -2034722819:
			case -1219513062:
			case 153704652:
			case 356276239:
			case 586511233:
			case 1558996842:
			case 1183988406:
			case 1000678684:
			case 761792674:
			case -145679239:
			case 686423978:
			case -763407658:
			case 74266289:
			case 987390769:
			case 1591372991:
			case 1834027448:
			case 913054691:
			case 1142372153:
			case -1698011990:
			case -1443101939:
			case 2133699953:
			case -1924511318:
			case -475531676:
			case -237137197:
			case 754461254:
			case -1155840382:
			case 629180074:
			case 859251223:
			case 1610316715:
			case 901392169:
			case -92983136:
			case 1346362420:
			case 485782942:
			case 312004063:
			case 6695290:
			case 1724446270:
			case -448105673:
			case -611098679:
			case -1111088081:
			case -1406369540:
			case -1912159043:
			case 2076516410:
			case 1919618438:
			case 45227112:
			case -2129094253:
			case -421370587:
			case -675363106: iVar2 = 0; break;
			}
			return iVar2;
		}
		break;

	case joaat("mp_f_freemode_01"):
		if (iParam1 >= 256) {
			iVar0 = func_121(iParam0, iParam1, 4, 4);
			iVar1 = func_112(iVar0);
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iParam2, -364248070, 0) || dlc1::_0x341DE7ED1D2A1BFD(iParam2, -56268180, 0)) {
			if (iParam1 >= 16 && iParam1 <= 31 || iParam1 >= 48 && iParam1 <= 63 || iParam1 >= 96 && iParam1 <= 111 ||
				iVar1 == 1 || iVar1 == 3 || iVar1 == 6 || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1863955539, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 2106216756, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -761463976, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 684992453, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 916636514, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1939378450, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 264959411, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1127835965, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1119232689, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1207283343, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -849839091, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -2088146832, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1446333198, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -430330349, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1103045158, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1055526375, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -2020757158, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1325813684, 0)) {
				return 1;
			}
		}
		break;
	}
	return 0;
}

// Position - 0x2C85
bool func_25(int iParam0, int iParam1) {
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		if (dlc1::_0x341DE7ED1D2A1BFD(iParam1, -364248070, 0) || dlc1::_0x341DE7ED1D2A1BFD(iParam1, -56268180, 0)) {
			return true;
		}
		break;

	case joaat("mp_f_freemode_01"):
		if (dlc1::_0x341DE7ED1D2A1BFD(iParam1, -364248070, 0) || dlc1::_0x341DE7ED1D2A1BFD(iParam1, -56268180, 0)) {
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x2CF1
bool func_26(int iParam0, int iParam1, int iParam2, int *iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;

	switch (iParam0) {
	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 4:
			if (iParam2 >= 256) {
				iVar0 = func_121(iParam0, iParam2, iParam1, 4);
				if (iVar0 != -1) {
					iVar1 = dlc1::_0xC17AD0E5752BECDA(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1) {
						dlc1::get_variant_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 4) {
							if (iVar3 != 0 && iVar3 != 1849449579) {
								if (!dlc1::_0x341DE7ED1D2A1BFD(iVar3, -1100807313, 0)) {
									*iParam3 = func_21(iParam0, iVar3, iParam1, 4);
									return true;
								}
							}
						}
						iVar2++;
					}
				}
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x2D9A
bool func_27(int iParam0, int iParam1, int iParam2, int *iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;

	switch (iParam0) {
	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 4:
			if (iParam2 >= 256) {
				iVar0 = func_121(iParam0, iParam2, iParam1, 4);
				if (iVar0 != -1) {
					iVar1 = dlc1::_0xC17AD0E5752BECDA(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1) {
						dlc1::get_variant_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 4) {
							if (iVar3 != 0 && iVar3 != 1849449579) {
								if (dlc1::_0x341DE7ED1D2A1BFD(iVar3, -1100807313, 0)) {
									*iParam3 = func_21(iParam0, iVar3, iParam1, 4);
									return true;
								}
							}
						}
						iVar2++;
					}
				}
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x2E42
bool func_28(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 4:
			if (iParam2 >= 256) {
				if (iParam3 == -1) {
					iParam3 = func_121(iParam0, iParam2, 4, 4);
				}
				if (dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1100807313, 0)) {
					return true;
				}
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x2E98
bool func_29(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 11:
			if (iParam2 >= 256) {
				if (iParam3 == -1) {
					iParam3 = func_121(iParam0, iParam2, 11, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -530089825, 0);
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x2EEB
void func_30(int iParam0, int iParam1) {
	if (func_32()) {
		if (iParam1 > 46) {
			player::set_player_parachute_pack_model_override(iParam0, 1766664132);
		}
		else if (iParam1 > 26) {
			player::set_player_parachute_pack_model_override(iParam0, 1277738372);
		}
		else if (iParam1 > 0) {
			player::set_player_parachute_pack_model_override(iParam0, 1269440357);
		}
		else {
			player::clear_player_parachute_pack_model_override(iParam0);
		}
	}
	else if (func_31()) {
		if (iParam1 > 0) {
			player::set_player_parachute_pack_model_override(iParam0, 1479397204);
		}
		else {
			player::clear_player_parachute_pack_model_override(iParam0);
		}
	}
}

// Position - 0x2F62
bool func_31() { return dlc2::is_dlc_present(1428761799); }

// Position - 0x2F73
bool func_32() { return dlc2::is_dlc_present(-1005876368); }

// Position - 0x2F84
int func_33(int iParam0, int iParam1) { return 0; }

// Position - 0x2F8D
int func_34(int iParam0, int iParam1) {
	if (iParam1 > 62) {
		return iParam1 - 63;
	}
	if (iParam1 > 51) {
		return iParam1 - 52;
	}
	if (iParam1 > 46) {
		return iParam1 - 47;
	}
	if (iParam1 > 26) {
		return iParam1 - 27;
	}
	if (iParam1 > 0) {
		return iParam1 - 1;
	}
	return iParam1;
}

// Position - 0x2FEF
int func_35(int iParam0, int iParam1) {
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = ped::get_ped_drawable_variation(iParam0, 11);
	if (ped::get_ped_drawable_variation(iParam0, 9) != 0) {
		bVar1 = true;
	}
	iVar2 = entity::get_entity_model(iParam0);
	iVar3 = dlc1::get_hash_name_for_component(iParam0, 8, ped::get_ped_drawable_variation(iParam0, 8),
											  ped::get_ped_texture_variation(iParam0, 8));
	if (dlc1::_0x341DE7ED1D2A1BFD(iVar3, 240476421, 8)) {
		return func_38(iParam0, iParam1);
	}
	iVar4 = 0;
	if (iParam1 > 61) {
		iVar4 = 50;
	}
	else if (iParam1 > 51) {
		return iParam1;
	}
	else if (iParam1 > 46) {
		iVar4 = 30;
	}
	else if (iParam1 > 26) {
		iVar4 = 20;
	}
	else if (iParam1 > 0) {
		iVar4 = 9;
	}
	else {
		iVar4 = 0;
	}
	if (iVar0 > 15) {
		iVar5 = dlc1::get_hash_name_for_component(iParam0, 11, iVar0, ped::get_ped_texture_variation(iParam0, 11));
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 655081063, 0)) {
			if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -530089825, 0)) {
			if (bVar1) {
				return 6 + iVar4;
			}
			else {
				return 6 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -713698407, 0)) {
			if (iParam1 > 46) {
				return 39;
			}
			else if (iParam1 > 26) {
				return 29;
			}
			else if (iParam1 > 0) {
				return 18;
			}
			else {
				return 19;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1882920022, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 2 + iVar4;
				}
			}
			else if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -317649054, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 2 + iVar4;
				}
			}
			else if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1536649085, 0)) {
			iVar6 = func_37(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01")) {
				switch (iVar6) {
				case 0: return 2 + iVar4;

				case 2:
					if (iParam1 > 46) {
						return 39;
					}
					else if (iParam1 > 26) {
						return 29;
					}
					else if (iParam1 > 0) {
						return 18;
					}
					else {
						return 19;
					}
					break;

				default: iVar0 = func_112(iVar5); break;
				}
			}
			else {
				switch (iVar6) {
				case 2: return 7 + iVar4;

				default: iVar0 = func_112(iVar5); break;
				}
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 248194463, 0)) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1347486026, 0)) {
				return 3 + iVar4;
			}
			else {
				return 7 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 396458410, 0)) {
			iVar7 = func_36(iVar5, 0);
			switch (iVar7) {
			case 4:
				if (iParam1 > 46) {
					return 39;
				}
				else if (iParam1 > 26) {
					return 28;
				}
				else if (iParam1 > 0) {
					return 17;
				}
				else {
					return 8;
				}
				break;

			case 5:
				if (iVar2 == joaat("mp_m_freemode_01")) {
				}
				else {
					return 8 + iVar4;
				}
				break;

			case 6:
				if (iVar2 == joaat("mp_m_freemode_01")) {
				}
				else {
					return 8 + iVar4;
				}
				break;

			case 7:
				if (iVar2 == joaat("mp_m_freemode_01")) {
				}
				else {
					return 8 + iVar4;
				}
				break;

			case 11:
				if (iVar2 == joaat("mp_m_freemode_01")) {
				}
				else {
					return 8 + iVar4;
				}
				break;

			case 12:
				if (iVar2 == joaat("mp_m_freemode_01")) {
				}
				else {
					return 8 + iVar4;
				}
				break;

			case 14:
				if (iParam1 > 46) {
					return 39;
				}
				else if (iParam1 > 26) {
					return 29;
				}
				else if (iParam1 > 0) {
					return 18;
				}
				else {
					return 19;
				}
				break;

			default: iVar0 = func_112(iVar5); break;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -779835469, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 3 + iVar4;
				}
			}
			else if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1119232689, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -2102859770, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 2 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1784133476, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 2 + iVar4;
			}
			else if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1607949555, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1976716889, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 2099109084, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 2 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1488441032, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (iParam1 > 46) {
					return 39;
				}
				else if (iParam1 > 26) {
					return 29;
				}
				else if (iParam1 > 0) {
					return 18;
				}
				else {
					return 19;
				}
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1719167561, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1431529976, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1274099003, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1723403459, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 912543594, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1086258388, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar5, 103539798, 0) ||
				 dlc1::_0x341DE7ED1D2A1BFD(iVar5, -994703884, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 6 + iVar4;
				}
			}
			else if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 7 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 2044466679, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (iParam1 > 46) {
					return 39;
				}
				else if (iParam1 > 26) {
					return 29;
				}
				else if (iParam1 > 0) {
					return 18;
				}
				else {
					return 19;
				}
			}
			else if (bVar1) {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -2020757158, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1064262817, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 2 + iVar4;
				}
			}
			else if (bVar1) {
				return func_38(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1419806467, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 7 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1053842259, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 2 + iVar4;
				}
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1358888880, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -441291342, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -747583185, 0)) {
			if (iVar2 == joaat("mp_f_freemode_01")) {
				if (bVar1) {
					return func_38(iParam0, iParam1);
				}
				else {
					return 2 + iVar4;
				}
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1986415230, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -2088146832, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 6 + iVar4;
				}
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -785939537, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 3 + iVar4;
				}
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -872449705, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 2 + iVar4;
				}
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 700658917, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1714969731, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 2 + iVar4;
				}
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 745826556, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1055526375, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 144417099, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 492620493, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -416620954, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 3 + iVar4;
				}
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -102825006, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 2 + iVar4;
				}
			}
			else {
				return 7 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -733792105, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 7 + iVar4;
				}
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 137011325, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 3 + iVar4;
				}
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -641612092, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
			}
			else {
				return 6 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1351486939, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 2 + iVar4;
				}
			}
			else if (bVar1) {
				return func_38(iParam0, iParam1);
			}
			else {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -2119756144, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				if (bVar1) {
					return 8 + iVar4;
				}
				else {
					return 3 + iVar4;
				}
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1507532917, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_38(iParam0, iParam1);
			}
			else {
				return 7 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 947651647, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1506370874, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1786447517, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1010805287, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1325813684, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else if (bVar1) {
				return func_38(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -549843760, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -828478571, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_38(iParam0, iParam1);
			}
			else if (bVar1) {
				return 55 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1690933245, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else if (bVar1) {
				return func_38(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1360588936, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 2136821028, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1830529185, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -269266203, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 201427653, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 967829025, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -685039259, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1266557933, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_38(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -979468724, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_38(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1813210391, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 263623295, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_38(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -309899747, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -89003918, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -747858475, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_38(iParam0, iParam1);
			}
			else {
				return func_38(iParam0, iParam1);
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 490219883, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_38(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1208450825, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_38(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 297865853, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_38(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 602650322, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_38(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 905042630, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_38(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1204125293, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_38(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 310055897, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_38(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 606713654, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_38(iParam0, iParam1);
			}
			else {
				return func_38(iParam0, iParam1);
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1831422288, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -838136846, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 655638019, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 970679185, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 83294665, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 382246252, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 8 + iVar4;
			}
			else {
				return 4 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -99064836, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_38(iParam0, iParam1);
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -697656159, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_38(iParam0, iParam1) + 15;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -398213037, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_38(iParam0, iParam1) + 15;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1380605304, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
			}
			else {
				return func_38(iParam0, iParam1);
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -306768813, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
			}
			else {
				return func_38(iParam0, iParam1) + 15;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -58412562, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
			}
			else {
				return func_38(iParam0, iParam1) + 15;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1711219157, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_38(iParam0, iParam1) + 15;
			}
			else {
				return func_38(iParam0, iParam1) + 15;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1466664110, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_38(iParam0, iParam1) + 15;
			}
			else {
				return func_38(iParam0, iParam1) + 15;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1968575702, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return func_38(iParam0, iParam1) + 15;
			}
			else {
				return func_38(iParam0, iParam1) + 15;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 245429010, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 48 + iVar4;
			}
			else {
				return func_38(iParam0, iParam1) + 15;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 15161247, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 48 + iVar4;
			}
			else {
				return 48 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 1965569012, 0) && iVar2 == joaat("mp_f_freemode_01")) {
			if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 2026620439, 0) && iVar2 == joaat("mp_f_freemode_01")) {
			if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -1410897066, 0)) {
			if (iVar2 == joaat("mp_m_freemode_01")) {
				return 3 + iVar4;
			}
			else {
				return 8 + iVar4;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, -2017999390, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar5, 320460654, 0) ||
				 dlc1::_0x341DE7ED1D2A1BFD(iVar5, -826135203, 0)) {
			return 7 + iVar4;
		}
		else {
			iVar0 = func_112(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01")) {
		switch (iVar0) {
		case 0:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 1:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 2:
			if (bVar1) {
				return 7 + iVar4;
			}
			else {
				return 7 + iVar4;
			}
			break;

		case 3:
			if (bVar1) {
				return 3 + iVar4;
			}
			else {
				return 3 + iVar4;
			}
			break;

		case 4:
			if (bVar1) {
				return 3 + iVar4;
			}
			else {
				return 3 + iVar4;
			}
			break;

		case 5:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 6:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
			break;

		case 7:
			if (bVar1) {
				return 3 + iVar4;
			}
			else {
				return 3 + iVar4;
			}
			break;

		case 8:
			if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 9:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 10:
			if (bVar1) {
				return 3 + iVar4;
			}
			else {
				return 3 + iVar4;
			}
			break;

		case 11:
			if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
			break;

		case 12:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 13:
			if (bVar1) {
				return 7 + iVar4;
			}
			else {
				return 2 + iVar4;
			}
			break;

		case 14:
			if (bVar1) {
				return 6 + iVar4;
			}
			else {
				return 6 + iVar4;
			}
			break;

		case 15:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 5 + iVar4;
			}
			break;
		}
	}
	else {
		switch (iVar0) {
		case 0:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 1:
			if (bVar1) {
				return 7 + iVar4;
			}
			else {
				return 7 + iVar4;
			}
			break;

		case 2:
			if (bVar1) {
				return 4 + iVar4;
			}
			else {
				return 3 + iVar4;
			}
			break;

		case 3:
			if (bVar1) {
				return 6 + iVar4;
			}
			else {
				return 5 + iVar4;
			}
			break;

		case 4:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 5:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 6:
			if (bVar1) {
				return 7 + iVar4;
			}
			else {
				return 7 + iVar4;
			}
			break;

		case 7:
			if (bVar1) {
				return 7 + iVar4;
			}
			else {
				return 7 + iVar4;
			}
			break;

		case 8:
			if (bVar1) {
				return 7 + iVar4;
			}
			else {
				return 7 + iVar4;
			}
			break;

		case 9: return 2 + iVar4;

		case 10:
			if (bVar1) {
				return 7 + iVar4;
			}
			else {
				return 7 + iVar4;
			}
			break;

		case 11:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 12:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 13:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;

		case 14:
			if (bVar1) {
				return 8 + iVar4;
			}
			else {
				return 4 + iVar4;
			}
			break;

		case 15:
			if (bVar1) {
				return 2 + iVar4;
			}
			else {
				return 1 + iVar4;
			}
			break;
		}
	}
	return 1 + iVar4;
	return 0;
}

// Position - 0x4A6A
int func_36(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = -1;
	if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 140732128, iParam1)) {
		iVar0 = 0;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1863955539, iParam1)) {
		iVar0 = 1;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 2106216756, iParam1)) {
		iVar0 = 2;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -761463976, iParam1)) {
		iVar0 = 3;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1627756587, iParam1)) {
		iVar0 = 4;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 684992453, iParam1)) {
		iVar0 = 5;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 916636514, iParam1)) {
		iVar0 = 6;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1939378450, iParam1)) {
		iVar0 = 7;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 441715397, iParam1)) {
		iVar0 = 8;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 264959411, iParam1)) {
		iVar0 = 9;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1127835965, iParam1)) {
		iVar0 = 10;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -820724897, iParam1)) {
		iVar0 = 11;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 153792394, iParam1)) {
		iVar0 = 12;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -672871169, iParam1)) {
		iVar0 = 13;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 572416369, iParam1)) {
		iVar0 = 14;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -196114988, iParam1)) {
		iVar0 = 15;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1322269404, iParam1)) {
		iVar0 = 16;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 548036233, iParam1)) {
		iVar0 = 17;
	}
	return iVar0;
}

// Position - 0x4C0A
int func_37(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = -1;
	if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -870074461, iParam1)) {
		iVar0 = 0;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1174924468, iParam1)) {
		iVar0 = 1;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -868698159, iParam1)) {
		iVar0 = 2;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1177480446, iParam1)) {
		iVar0 = 3;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1347486026, iParam1)) {
		iVar0 = 4;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1655154167, iParam1)) {
		iVar0 = 5;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -2105858993, iParam1)) {
		iVar0 = 6;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1893564692, iParam1)) {
		iVar0 = 7;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1710451520, iParam1)) {
		iVar0 = 8;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1416808511, iParam1)) {
		iVar0 = 9;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1641506460, iParam1)) {
		iVar0 = 10;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 699233865, iParam1)) {
		iVar0 = 11;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 393400788, iParam1)) {
		iVar0 = 12;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 216120498, iParam1)) {
		iVar0 = 13;
	}
	return iVar0;
}

// Position - 0x4D4E
int func_38(int iParam0, int iParam1) {
	if (iParam1 > 61) {
		return 61;
	}
	if (iParam1 > 51) {
		return 51;
	}
	if (iParam1 > 46) {
		return 51;
	}
	if (iParam1 > 26) {
		return 50;
	}
	if (iParam1 > 0) {
		return 49;
	}
	return 48;
}

// Position - 0x4DA2
bool func_39(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar25;
	int iVar35;
	var uVar36;
	int iVar46;
	int iVar47;
	var uVar48;
	var uVar49;
	int iVar50;
	struct<5> Var51;
	int *iVar68;

	if (ped::is_ped_injured(iParam0)) {
		return false;
	}
	iVar0 = entity::get_entity_model(iParam0);
	Global_69523[1 /*14*/] = {func_154(iVar0, iParam1, iParam2)};
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
		return false;
	}
	if (iParam1 == 12) {
		uVar8 = {func_144(iVar0, iParam2)};
		iVar7 = 0;
		while (iVar7 < 7) {
			switch (iVar7) {
			case 0: iVar4 = 1; break;

			case 1: iVar4 = 4; break;

			case 2: iVar4 = 6; break;

			case 3: iVar4 = 7; break;

			case 4: iVar4 = 8; break;

			case 5: iVar4 = 11; break;

			case 6: iVar4 = 13; break;
			}
			if (uVar8[iVar4] != -99) {
				if (!func_39(iParam0, iVar4, uVar8[iVar4])) {
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return false;
					if (iVar4 == 13) {
						uVar25 = {func_140(iVar0, uVar8[iVar4])};
						iVar5 = 0;
						while (iVar5 <= 8) {
							if (!func_39(iParam0, 14, uVar25[iVar5])) {
								iVar6 = 0;
								while (iVar6 <= 19) {
									Global_69523[2 /*14*/] = {func_154(iVar0, 14, iVar6)};
									if (Global_69523[2 /*14*/].f_12 == iVar5) {
										if (func_39(iParam0, 14, iVar6)) {
											if (!func_40(iVar0, iParam2, 14, iVar6, &uVar8, &Global_69523[2 /*14*/])) {
												Global_2621444 = uVar2;
												Global_2621445 = uVar3;
												return false;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else {
						iVar1 = func_122(iParam0, iVar4);
						Global_69523[2 /*14*/] = {func_154(iVar0, iVar4, iVar1)};
						if (!func_40(iVar0, iParam2, iVar4, iVar1, &uVar8, &Global_69523[2 /*14*/])) {
							Global_2621444 = uVar2;
							Global_2621445 = uVar3;
							return false;
						}
					}
				}
			}
			iVar7++;
		}
		if (uVar8[10] != 0 && uVar8[10] != 1849449579 && uVar8.f_16) {
			if (func_107(1751, Global_69521, 0) != uVar8[10]) {
				Global_2621444 = uVar2;
				Global_2621445 = uVar3;
				return false;
			}
		}
		Global_2621444 = uVar2;
		Global_2621445 = uVar3;
		return true;
	}
	else if (iParam1 == 13) {
		uVar36 = {func_140(iVar0, iParam2)};
		iVar35 = 0;
		while (iVar35 <= 8) {
			if (!func_39(iParam0, 14, uVar36[iVar35])) {
				return false;
			}
			iVar35++;
		}
		return true;
	}
	else if (iParam1 == 14) {
		if (ped::get_ped_prop_index(iParam0, Global_69523[1 /*14*/].f_12) == Global_69523[1 /*14*/].f_3 &&
			(ped::get_ped_prop_texture_index(iParam0, Global_69523[1 /*14*/].f_12) == Global_69523[1 /*14*/].f_4 ||
			 Global_69523[1 /*14*/].f_3 == -1)) {
			return true;
		}
		if (Global_69523[1 /*14*/].f_12 == 0 && gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 6) &&
			dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, -1033433901, 1) && unk_0xD40AAC51E8E4C663(Global_2621444) > 0) {
			iVar50 = unk_0xD40AAC51E8E4C663(Global_2621444);
			iVar46 = 0;
			while (iVar46 < iVar50) {
				unk_0xD81B7F27BC773E66(Global_2621444, iVar46, &iVar47, &uVar48, &uVar49);
				if (iVar47 != 0 && iVar47 != 1849449579) {
					dlc1::init_shop_ped_prop(&Var51);
					dlc1::_0x5D5CAFF661DDF6FC(iVar47, &Var51);
					if (Var51.f_3 == ped::get_ped_prop_index(iParam0, Global_69523[1 /*14*/].f_12) &&
						Var51.f_4 == ped::get_ped_prop_texture_index(iParam0, Global_69523[1 /*14*/].f_12)) {
						return true;
					}
				}
				iVar46++;
			}
		}
	}
	else {
		if (Global_69523[1 /*14*/].f_3 == ped::get_ped_drawable_variation(iParam0, func_143(iParam1)) &&
			Global_69523[1 /*14*/].f_4 == ped::get_ped_texture_variation(iParam0, func_143(iParam1))) {
			return true;
		}
		if (iParam1 == 4) {
			if (func_29(iVar0, 11, func_122(iParam0, 11), -1)) {
				if (func_27(iVar0, 4, iParam2, &iVar68)) {
					return func_39(iParam0, 4, iVar68);
				}
			}
			else if (func_26(iVar0, 4, iParam2, &iVar68)) {
				return func_39(iParam0, 4, iVar68);
			}
		}
	}
	return false;
}

// Position - 0x51E3
int func_40(int iParam0, int iParam1, int iParam2, int iParam3, var *uParam4, var *uParam5) {
	var uVar0;
	int iVar10;

	if ((*uParam4)[iParam2] == iParam3) {
		return 1;
	}
	if ((*uParam4)[iParam2] == -99 && iParam2 != 14 && iParam2 != 13) {
		return 1;
	}
	if (iParam2 == 13 || iParam2 == 14 && (*uParam4)[13] == 31) {
		if (iParam3 == 0 || iParam3 == 1 || iParam3 == 2 || iParam3 == 3 || iParam3 == 4 || iParam3 == 5 ||
			iParam3 == 6 || iParam3 == 7 || iParam3 == 8) {
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1) {
		return 1;
	}
	if (iParam2 == 14) {
		uVar0 = {func_140(iParam0, (*uParam4)[13])};
		iVar10 = 0;
		while (iVar10 <= 8) {
			if (uVar0[iVar10] == iParam3) {
				return 1;
			}
			iVar10++;
		}
	}
	if (func_44(iParam0, iParam2, iParam3)) {
		return 1;
	}
	if (iParam0 == joaat("player_zero")) {
		if (func_43(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 10 || iParam1 == 11 || iParam1 == 12 || iParam1 == 18 ||
				iParam1 == 50) {
				return 0;
			}
			return 1;
		}
		else if (func_42(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 4 || iParam1 == 5 || iParam1 == 10 || iParam1 == 11 ||
				iParam1 == 12 || iParam1 == 14 || iParam1 == 18 || iParam1 == 50) {
				return 0;
			}
			if (iParam2 == 8) {
				if ((*uParam4)[8] != 0) {
					return 0;
				}
			}
			else if (iParam2 == 9) {
				if ((*uParam4)[9] != 0) {
					return 0;
				}
			}
			return 1;
		}
		else if (func_41(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 4 || iParam1 == 5 || iParam1 == 10 || iParam1 == 11 ||
				iParam1 == 12 || iParam1 == 14 || iParam1 == 18 || iParam1 == 50) {
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one")) {
		if (func_43(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 3 || iParam1 == 5 || iParam1 == 7) {
				return 0;
			}
			return 1;
		}
		else if (func_42(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 3 || iParam1 == 5 || iParam1 == 7 || iParam1 == 8 || iParam1 == 21) {
				if (iParam2 == 8) {
					if (iParam3 == 9) {
						if (iParam1 == 8 || iParam1 == 21) {
							return 1;
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
			if (iParam2 == 8) {
				if ((*uParam4)[8] != 26) {
					return 0;
				}
			}
			else if (iParam2 == 9) {
				if ((*uParam4)[9] != 0) {
					return 0;
				}
				if (iParam1 == 43 || iParam1 == 44 || iParam1 == 45 || iParam1 == 46) {
					if (iParam3 >= 5 && iParam3 <= 10) {
						return 0;
					}
				}
			}
			else if (iParam2 == 14) {
				if (iParam1 == 43 || iParam1 == 44 || iParam1 == 45 || iParam1 == 46) {
					if (iParam3 >= 26 && iParam3 <= 39) {
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_41(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 3 || iParam1 == 3 || iParam1 == 5 || iParam1 == 7 || iParam1 == 8 || iParam1 == 21) {
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14) {
			if (iParam3 >= 159 && iParam3 <= 174) {
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two")) {
		if (iParam1 == 2) {
			if (iParam2 == 14 && iParam3 == 0) {
				return 1;
			}
		}
		if (func_43(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 6 || iParam1 == 8 || iParam1 == 45 || iParam1 == 12) {
				return 0;
			}
			return 1;
		}
		else if (func_42(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 3 || iParam1 == 6 || iParam1 == 8 || iParam1 == 11 ||
				iParam1 == 45 || iParam1 == 12) {
				return 0;
			}
			if (iParam2 == 8) {
				if ((*uParam4)[8] != 15) {
					return 0;
				}
			}
			else if (iParam2 == 9) {
				if ((*uParam4)[9] != 0) {
					return 0;
				}
			}
			return 1;
		}
		else if (func_41(iParam0, iParam2, iParam3, -1)) {
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 3 || iParam1 == 6 || iParam1 == 8 || iParam1 == 11 ||
				iParam1 == 12) {
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

// Position - 0x57E7
bool func_41(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 14:
			if (iParam2 == 16) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 14:
			if (iParam2 == 40 || iParam2 >= 41 && iParam2 <= 56 || iParam2 >= 64 && iParam2 <= 79) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 14:
			if (iParam2 >= 17 && iParam2 <= 18 || iParam2 >= 71 && iParam2 <= 86) {
				return true;
			}
			break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam2 >= 18 && iParam2 <= 130) {
				return true;
			}
			else if (iParam2 >= 10 && iParam2 <= 17) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_121(iParam0, iParam2, 14, 3);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 1) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_121(iParam0, iParam2, 14, 3), -1842686353, 1);
			}
			break;

		case 1:
			if (iParam2 >= 26) {
				if (iParam3 == -1) {
					iParam3 = func_121(iParam0, iParam2, 1, 3);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_121(iParam0, iParam2, 1, 3), -1842686353, 0);
			}
			break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam2 >= 18 && iParam2 <= 130) {
				return true;
			}
			else if (iParam2 >= 10 && iParam2 <= 17) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_121(iParam0, iParam2, 14, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 1) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_121(iParam0, iParam2, 14, 4), -1842686353, 1);
			}
			break;

		case 1:
			if (iParam2 >= 26) {
				if (iParam3 == -1) {
					iParam3 = func_121(iParam0, iParam2, 1, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) |
					   dlc1::_0x341DE7ED1D2A1BFD(func_121(iParam0, iParam2, 1, 4), -1842686353, 0);
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x5A64
bool func_42(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0 == joaat("player_zero")) {
		if (iParam1 == 6) {
			if (iParam2 == 10) {
				return true;
			}
		}
		else if (iParam1 == 8) {
			if (iParam2 == 9 || iParam2 == 7 || iParam2 == 23) {
				return true;
			}
		}
		else if (iParam1 == 9) {
			if (iParam2 >= 9 && iParam2 <= 14) {
				return true;
			}
		}
		else if (iParam1 == 14) {
			if (iParam2 == 12 || iParam2 == 59 || iParam2 == 60 || iParam2 == 31 || iParam2 == 32 || iParam2 == 33 ||
				iParam2 == 34 || iParam2 == 35 || iParam2 == 36 || iParam2 == 37 || iParam2 == 38 || iParam2 == 39 ||
				iParam2 == 40 || iParam2 == 41 || iParam2 >= 42 && iParam2 <= 44 || iParam2 == 54 || iParam2 == 55) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_one")) {
		if (iParam1 == 2) {
			if (iParam2 == 20) {
				return true;
			}
		}
		else if (iParam1 == 8) {
			if (iParam2 == 3 || iParam2 == 5 || iParam2 == 9) {
				return true;
			}
		}
		else if (iParam1 == 9) {
			if (iParam2 >= 5 && iParam2 <= 10) {
				return true;
			}
		}
		else if (iParam1 == 14) {
			if (iParam2 == 82 || iParam2 == 10 || iParam2 == 26 || iParam2 == 27 || iParam2 == 28 || iParam2 == 29 ||
				iParam2 == 30 || iParam2 == 31 || iParam2 == 32 || iParam2 == 33 || iParam2 == 34 || iParam2 == 35 ||
				iParam2 == 36 || iParam2 >= 37 && iParam2 <= 39) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two")) {
		if (iParam1 == 8) {
			if (iParam2 == 14 || iParam2 == 7) {
				return true;
			}
		}
		else if (iParam1 == 9) {
			if (iParam2 == 8 || iParam2 >= 9 && iParam2 <= 14 || iParam2 == 15 || iParam2 == 16) {
				return true;
			}
		}
		else if (iParam1 == 14) {
			if (iParam2 == 88 || iParam2 == 12 || iParam2 == 47 || iParam2 == 48 || iParam2 == 49 || iParam2 == 50 ||
				iParam2 == 51 || iParam2 == 52 || iParam2 == 53 || iParam2 == 54 || iParam2 == 55 || iParam2 == 56 ||
				iParam2 == 57 || iParam2 >= 58 && iParam2 <= 60) {
				return true;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01")) {
		if (iParam1 == 1) {
			if (iParam2 > 0) {
				if (iParam2 >= 26) {
					if (iParam3 == -1) {
						iParam3 = func_121(iParam0, iParam2, 1, 3);
					}
					if (dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0)) {
						return false;
					}
				}
				return true;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		if (iParam1 == 1) {
			if (iParam2 > 0) {
				if (iParam2 >= 26) {
					if (iParam3 == -1) {
						iParam3 = func_121(iParam0, iParam2, 1, 4);
					}
					if (dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0)) {
						return false;
					}
				}
				return true;
			}
		}
	}
	return false;
}

// Position - 0x5E65
bool func_43(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("player_zero"):
		if (iParam1 == 14) {
			if (iParam2 == 58 || iParam2 == 61 || iParam2 >= 62 && iParam2 <= 69 || iParam2 >= 70 && iParam2 <= 79 ||
				iParam2 >= 80 && iParam2 <= 89 || iParam2 == 90 || iParam2 >= 91 && iParam2 <= 102 ||
				iParam2 >= 103 && iParam2 <= 110 || iParam2 == 111) {
				return true;
			}
		}
		break;

	case joaat("player_one"):
		if (iParam1 == 14) {
			if (iParam2 >= 83 && iParam2 <= 92 || iParam2 == 93 || iParam2 == 94 || iParam2 >= 95 && iParam2 <= 101 ||
				iParam2 >= 102 && iParam2 <= 111 || iParam2 >= 112 && iParam2 <= 121 ||
				iParam2 >= 122 && iParam2 <= 131 || iParam2 >= 132 && iParam2 <= 139 ||
				iParam2 >= 140 && iParam2 <= 149 || iParam2 >= 150 && iParam2 <= 156 || iParam2 == 157) {
				return true;
			}
		}
		break;

	case joaat("player_two"):
		if (iParam1 == 14) {
			if (iParam2 == 89 || iParam2 >= 90 && iParam2 <= 99 || iParam2 >= 100 && iParam2 <= 109 || iParam2 == 111 ||
				iParam2 == 112 || iParam2 >= 113 && iParam2 <= 122 || iParam2 >= 123 && iParam2 <= 132 ||
				iParam2 >= 133 && iParam2 <= 142 || iParam2 >= 143 && iParam2 <= 152 || iParam2 == 153) {
				return true;
			}
		}
		break;

	case joaat("mp_m_freemode_01"):
		if (iParam1 == 14) {
			if (iParam2 >= 155 && iParam2 <= 318) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_121(iParam0, iParam2, 14, 3);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
			}
		}
		break;

	case joaat("mp_f_freemode_01"):
		if (iParam1 == 14) {
			if (iParam2 >= 155 && iParam2 <= 318) {
				return true;
			}
			else if (iParam2 >= 327) {
				if (iParam3 == -1) {
					iParam3 = func_121(iParam0, iParam2, 14, 4);
				}
				return dlc1::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
			}
		}
		break;
	}
	return false;
}

// Position - 0x6158
bool func_44(int iParam0, int iParam1, int iParam2) {
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 15) {
				return true;
			}
			break;

		case 9:
			if (iParam2 == 6) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 1 || iParam2 == 10) {
				return true;
			}
			break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 8:
			if (iParam2 == 4) {
				return true;
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x61F1
int func_45(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;

	if (iParam1 == 11) {
		if (iParam0 == joaat("mp_m_freemode_01")) {
			if (iParam2 >= 0 && iParam2 <= 15 || iParam2 >= 16 && iParam2 <= 31 || iParam2 >= 80 && iParam2 <= 95 ||
				iParam2 >= 140 && iParam2 <= 155 || iParam2 >= 188 && iParam2 <= 203) {
				return 1;
			}
			else if (iParam2 >= 32 && iParam2 <= 47) {
				return 6;
			}
			else if (iParam2 >= 48 && iParam2 <= 63 || iParam2 >= 64 && iParam2 <= 79 ||
					 iParam2 >= 108 && iParam2 <= 123) {
				return 11;
			}
			else if (iParam2 >= 96 && iParam2 <= 107) {
				return 41;
			}
			else if (iParam2 >= 156 && iParam2 <= 171) {
				return 36;
			}
			else if (iParam2 >= 172 && iParam2 <= 187) {
				return 31;
			}
			else if (iParam2 >= 204 && iParam2 <= 219) {
				return 16;
			}
			else if (iParam2 >= 220 && iParam2 <= 235 || iParam2 >= 124 && iParam2 <= 139) {
				return 26;
			}
			else if (iParam2 == 236) {
				return 21;
			}
			else if (iParam2 >= 237) {
				iVar0 = func_121(iParam0, iParam2, 11, 3);
				if (iVar0 != -1) {
					iVar1 = dlc1::_0xC17AD0E5752BECDA(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1) {
						dlc1::get_variant_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 9) {
							if (iVar3 != 0 && iVar3 != 1849449579) {
								return func_21(iParam0, iVar3, 9, 3);
							}
							else {
								return uVar4;
							}
						}
						iVar2++;
					}
				}
				return -99;
			}
		}
		else if (iParam0 == joaat("mp_f_freemode_01")) {
			if (iParam2 >= 0 && iParam2 <= 15 || iParam2 >= 64 && iParam2 <= 79 || iParam2 >= 176 && iParam2 <= 191 ||
				iParam2 >= 192 && iParam2 <= 207 || iParam2 >= 208 && iParam2 <= 223 ||
				iParam2 >= 240 && iParam2 <= 255) {
				return 1;
			}
			else if (iParam2 >= 16 && iParam2 <= 31 || iParam2 >= 112 && iParam2 <= 127 ||
					 iParam2 >= 128 && iParam2 <= 143) {
				return 16;
			}
			else if (iParam2 >= 32 && iParam2 <= 47) {
				return 6;
			}
			else if (iParam2 >= 48 && iParam2 <= 63) {
				return 11;
			}
			else if (iParam2 >= 96 && iParam2 <= 111 || iParam2 >= 160 && iParam2 <= 175) {
				return 21;
			}
			else if (iParam2 >= 224 && iParam2 <= 239) {
				return 26;
			}
			else if (iParam2 >= 144 && iParam2 <= 159) {
				return 0;
			}
			else if (iParam2 >= 80 && iParam2 <= 95) {
				return 31;
			}
			else if (iParam2 >= 256) {
				iVar6 = func_121(iParam0, iParam2, 11, 4);
				if (iVar6 != -1) {
					iVar7 = dlc1::_0xC17AD0E5752BECDA(iVar6);
					iVar8 = 0;
					while (iVar8 < iVar7) {
						dlc1::get_variant_component(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
						if (iVar11 == 9) {
							if (iVar9 != 0 && iVar9 != 1849449579) {
								return func_21(iParam0, iVar9, 9, 4);
							}
							else {
								return uVar10;
							}
						}
						iVar8++;
					}
				}
				return -99;
			}
		}
	}
	return -99;
}

// Position - 0x65F2
bool func_46(int iParam0) {
	int iVar0;

	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = entity::get_entity_model(iParam0);
		if (iVar0 == joaat("mp_m_freemode_01")) {
			if (func_122(iParam0, 9) != 0) {
				return true;
			}
		}
		else if (iVar0 == joaat("mp_f_freemode_01")) {
			if (func_122(iParam0, 9) != 0) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x6644
void func_47(int iParam0, int iParam1) {
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;
	int iVar20;

	if (!ped::has_ped_head_blend_finished(iParam0)) {
	}
	ped::_get_ped_head_blend_data(iParam0, &Var0);
	iVar10 = func_107(2089, iParam1, 0);
	iVar11 = func_107(2090, iParam1, 0);
	iVar12 = func_107(2091, iParam1, 0);
	iVar13 = func_107(2092, iParam1, 0);
	iVar14 = func_107(2093, iParam1, 0);
	iVar15 = func_107(2094, iParam1, 0);
	fVar16 = func_63(134, iParam1);
	fVar17 = func_63(135, iParam1);
	fVar18 = func_63(136, iParam1);
	iVar19 = func_15(160, iParam1);
	if (Var0 != iVar10 || Var0.f_1 != iVar11 || Var0.f_2 != iVar12 || Var0.f_3 != iVar13 || Var0.f_4 != iVar14 ||
		Var0.f_5 != iVar15 || Var0.f_6 != fVar16 || Var0.f_7 != fVar17 || Var0.f_8 != fVar18 || Var0.f_9 != iVar19) {
		ped::set_ped_head_blend_data(iParam0, iVar10, iVar11, iVar12, iVar13, iVar14, iVar15, fVar16, fVar17, fVar18,
									 iVar19);
		iVar20 = func_107(2095, iParam1, 0);
		if (iVar20 > 0) {
			func_48(iParam0, iParam1, 0);
		}
	}
}

// Position - 0x6784
void func_48(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int *iVar15;

	iVar0 = 0;
	while (iVar0 < 20) {
		iVar1 = iVar0;
		iVar2 = func_62(iVar1);
		if (!iParam2) {
			fVar3 = func_63(iVar2, iParam1);
		}
		else {
			fVar3 = func_61(iVar2, iParam1);
		}
		ped::_set_ped_face_feature(iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13) {
		iVar5 = func_60(iVar4);
		iVar6 = func_59(iVar5);
		iVar7 = func_58(iVar5);
		if (iVar6 != -1 && iVar7 != -1) {
			if (!iParam2) {
				iVar10 = func_55(iVar6, iParam1, -1);
				fVar11 = func_63(iVar7, iParam1);
			}
			else {
				iVar10 = func_54(iVar6, iParam1);
				fVar11 = func_61(iVar7, iParam1);
			}
			ped::set_ped_head_overlay(iParam0, iVar5, iVar10, fVar11);
			iVar8 = func_53(iVar5);
			iVar9 = func_52(iVar5);
			if (iVar8 != -1) {
				if (!iParam2) {
					iVar13 = func_107(iVar8, iParam1, 0);
					iVar14 = func_107(iVar9, iParam1, 0);
				}
				else {
					iVar13 = func_51(iVar8, iParam1);
					iVar14 = func_51(iVar9, iParam1);
				}
				func_50(iVar13, &iVar12, &iVar15);
				ped::_set_ped_head_overlay_color(iParam0, iVar5, iVar15, iVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_49(&iParam0, iParam1, iParam2);
}

// Position - 0x68B6
void func_49(int iParam0, int iParam1, bool bParam2) {
	float fVar0;

	if (!bParam2) {
		fVar0 = func_63(157, iParam1);
	}
	else {
		fVar0 = func_61(157, iParam1);
	}
	if (*iParam0 == player::player_ped_id()) {
	}
	ped::_set_ped_eye_color(*iParam0, system::round(fVar0));
}

// Position - 0x68F5
void func_50(int iParam0, var *uParam1, int *iParam2) {
	int iVar0;

	*uParam1 = system::shift_right(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*iParam2 = iVar0;
}

// Position - 0x6916
int func_51(int iParam0, int iParam1) {
	int iVar0;
	var uVar1;

	iVar0 = Global_2503826[iParam0 /*3*/][func_13(iParam1)];
	if (ui::set_userids_uihidden(iVar0, &uVar1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x6941
int func_52(int iParam0) {
	switch (iParam0) {
	case 2: return 2153;

	case 1: return 2154;

	case 5: return 2155;

	case 8: return 2156;

	case 10: return 2151;

	default:
	}
	return -1;
}

// Position - 0x698D
int func_53(int iParam0) {
	switch (iParam0) {
	case 2: return 2146;

	case 1: return 2147;

	case 5: return 2148;

	case 8: return 2149;

	case 10: return 2150;

	default:
	}
	return -1;
}

// Position - 0x69D9
int func_54(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	if (iParam1 == -1) {
		iParam1 = func_14();
	}
	iVar1 = 0;
	iVar2 = 0;
	if (iParam0 >= 384 && iParam0 < 457) {
		iVar1 = stats::_get_pstat_int_hash(iParam0 - 384, 0, 1, iParam1);
		iVar2 = iParam0 - 384 - stats::_0x94F12ABF9C79E339(iParam0 - 384) * 8 * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513) {
		iVar1 = stats::_get_pstat_int_hash(iParam0 - 457, 1, 1, iParam1);
		iVar2 = iParam0 - 457 - stats::_0x94F12ABF9C79E339(iParam0 - 457) * 8 * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305) {
		iVar1 = stats::_get_pstat_int_hash(iParam0 - 1281, 0, 0, 0);
		iVar2 = iParam0 - 1281 - stats::_0x94F12ABF9C79E339(iParam0 - 1281) * 8 * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361) {
		iVar1 = stats::_get_pstat_int_hash(iParam0 - 1305, 1, 0, 0);
		iVar2 = iParam0 - 1305 - stats::_0x94F12ABF9C79E339(iParam0 - 1305) * 8 * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919) {
		iVar1 = stats::_get_tupstat_int_hash(iParam0 - 1393, 0, 1, iParam1);
		iVar2 = iParam0 - 1393 - stats::_0x94F12ABF9C79E339(iParam0 - 1393) * 8 * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393) {
		iVar1 = stats::_get_tupstat_int_hash(iParam0 - 1361, 0, 0, 0);
		iVar2 = iParam0 - 1361 - stats::_0x94F12ABF9C79E339(iParam0 - 1361) * 8 * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 3879, 0, 1, iParam1, "_NGPSTAT_INT");
		iVar2 = iParam0 - 3879 - stats::_0x94F12ABF9C79E339(iParam0 - 3879) * 8 * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 4143, 0, 0, 0, "_MP_NGPSTAT_INT");
		iVar2 = iParam0 - 4143 - stats::_0x94F12ABF9C79E339(iParam0 - 4143) * 8 * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 4399, 0, 1, iParam1, "_MP_LRPSTAT_INT");
		iVar2 = iParam0 - 4399 - stats::_0x94F12ABF9C79E339(iParam0 - 4399) * 8 * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 6413, 0, 1, iParam1, "_MP_APAPSTAT_INT");
		iVar2 = iParam0 - 6413 - stats::_0x94F12ABF9C79E339(iParam0 - 6413) * 8 * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 7262, 0, 1, iParam1, "_MP_LR2PSTAT_INT");
		iVar2 = iParam0 - 7262 - stats::_0x94F12ABF9C79E339(iParam0 - 7262) * 8 * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 7681, 0, 1, iParam1, "_MP_BIKEPSTAT_INT");
		iVar2 = iParam0 - 7681 - stats::_0x94F12ABF9C79E339(iParam0 - 7681) * 8 * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 9553, 0, 1, iParam1, "_MP_IMPEXPPSTAT_INT");
		iVar2 = iParam0 - 9553 - stats::_0x94F12ABF9C79E339(iParam0 - 9553) * 8 * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 7641, 0, 1, iParam1, "_NGDLCPSTAT_INT");
		iVar2 = iParam0 - 7641 - stats::_0x94F12ABF9C79E339(iParam0 - 7641) * 8 * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321) {
		iVar1 = stats::_get_ngstat_int_hash(iParam0 - 7313, 0, 0, 0, "_MP_NGDLCPSTAT_INT");
		iVar2 = iParam0 - 7313 - stats::_0x94F12ABF9C79E339(iParam0 - 7313) * 8 * 8;
	}
	if (!ui::_0x90A6526CF0381030(iVar1, &iVar0, iVar2, 8)) {
		iVar0 = 0;
	}
	if (iParam0 == 384) {
	}
	return iVar0;
}

// Position - 0x6DC8
int func_55(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == -1) {
		iParam1 = func_14();
	}
	iVar0 = 0;
	iVar1 = func_57(iParam0, iParam1);
	iVar2 = func_56(iParam0);
	if (0 != iVar1) {
		if (!stats::stat_get_masked_int(iVar1, &iVar0, iVar2, 8, iParam2)) {
			iVar0 = 0;
		}
	}
	return iVar0;
}

// Position - 0x6E0E
int func_56(int iParam0) {
	int iVar0;

	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457) {
		iVar0 = iParam0 - 384 - stats::_0x94F12ABF9C79E339(iParam0 - 384) * 8 * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513) {
		iVar0 = iParam0 - 457 - stats::_0x94F12ABF9C79E339(iParam0 - 457) * 8 * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305) {
		iVar0 = iParam0 - 1281 - stats::_0x94F12ABF9C79E339(iParam0 - 1281) * 8 * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361) {
		iVar0 = iParam0 - 1305 - stats::_0x94F12ABF9C79E339(iParam0 - 1305) * 8 * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393) {
		iVar0 = iParam0 - 1361 - stats::_0x94F12ABF9C79E339(iParam0 - 1361) * 8 * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919) {
		iVar0 = iParam0 - 1393 - stats::_0x94F12ABF9C79E339(iParam0 - 1393) * 8 * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207) {
		iVar0 = iParam0 - 4143 - stats::_0x94F12ABF9C79E339(iParam0 - 4143) * 8 * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143) {
		iVar0 = iParam0 - 3879 - stats::_0x94F12ABF9C79E339(iParam0 - 3879) * 8 * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028) {
		iVar0 = iParam0 - 4399 - stats::_0x94F12ABF9C79E339(iParam0 - 4399) * 8 * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262) {
		iVar0 = iParam0 - 6413 - stats::_0x94F12ABF9C79E339(iParam0 - 6413) * 8 * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313) {
		iVar0 = iParam0 - 7262 - stats::_0x94F12ABF9C79E339(iParam0 - 7262) * 8 * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361) {
		iVar0 = iParam0 - 7681 - stats::_0x94F12ABF9C79E339(iParam0 - 7681) * 8 * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265) {
		iVar0 = iParam0 - 9553 - stats::_0x94F12ABF9C79E339(iParam0 - 9553) * 8 * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321) {
		iVar0 = iParam0 - 7313 - stats::_0x94F12ABF9C79E339(iParam0 - 7313) * 8 * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681) {
		iVar0 = iParam0 - 7641 - stats::_0x94F12ABF9C79E339(iParam0 - 7641) * 8 * 8;
	}
	return iVar0;
}

// Position - 0x70CA
int func_57(int iParam0, int iParam1) {
	int iVar0;

	if (iParam1 == -1) {
		iParam1 = func_14();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457) {
		iVar0 = stats::_get_pstat_int_hash(iParam0 - 384, 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513) {
		iVar0 = stats::_get_pstat_int_hash(iParam0 - 457, 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305) {
		iVar0 = stats::_get_pstat_int_hash(iParam0 - 1281, 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361) {
		iVar0 = stats::_get_pstat_int_hash(iParam0 - 1305, 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393) {
		iVar0 = stats::_get_tupstat_int_hash(iParam0 - 1361, 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919) {
		iVar0 = stats::_get_tupstat_int_hash(iParam0 - 1393, 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 4143, 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 3879, 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 4399, 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 6413, 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 7262, 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 7681, 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 9553, 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 7313, 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 7641, 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

// Position - 0x733F
int func_58(int iParam0) {
	switch (iParam0) {
	case 3: return 90;

	case 7: return 93;

	case 0: return 87;

	case 6: return 92;

	case 2: return 89;

	case 1: return 88;

	case 4: return 91;

	case 8: return 158;

	case 9: return 159;

	case 5: return 160;

	case 10: return 163;

	case 11: return 161;

	case 12: return 162;

	default:
	}
	return -1;
}

// Position - 0x73DE
int func_59(int iParam0) {
	switch (iParam0) {
	case 3: return 450;

	case 7: return 453;

	case 0: return 447;

	case 6: return 452;

	case 2: return 449;

	case 1: return 448;

	case 4: return 451;

	case 8: return 3940;

	case 9: return 3941;

	case 5: return 3942;

	case 10: return 3943;

	case 11: return 3944;

	case 12: return 3945;

	default:
	}
	return -1;
}

// Position - 0x748A
int func_60(int iParam0) {
	switch (iParam0) {
	case 0: return 7;

	case 1: return 3;

	case 2: return 9;

	case 3: return 6;

	case 4: return 0;

	case 5: return 4;

	case 6: return 5;

	case 7: return 2;

	case 8: return 1;

	case 9: return 8;

	case 10: return 10;

	case 11: return 11;

	case 12: return 12;

	default:
	}
	return -1;
}

// Position - 0x7521
float func_61(int iParam0, int iParam1) {
	var uVar0;
	var uVar1;

	uVar0 = Global_2521893[iParam0 /*3*/][func_13(iParam1)];
	if (ui::_0x5FBD7095FE7AE57F(uVar0, &uVar1)) {
		return uVar1;
	}
	return 0f;
}

// Position - 0x754C
int func_62(int iParam0) {
	switch (iParam0) {
	case 0: return 137;

	case 1: return 138;

	case 2: return 139;

	case 3: return 140;

	case 4: return 141;

	case 5: return 142;

	case 6: return 143;

	case 7: return 144;

	case 8: return 145;

	case 9: return 146;

	case 10: return 147;

	case 11: return 148;

	case 12: return 149;

	case 13: return 150;

	case 14: return 151;

	case 15: return 152;

	case 16: return 153;

	case 17: return 154;

	case 18: return 155;

	case 19: return 156;

	default:
	}
	return -1;
}

// Position - 0x7638
float func_63(int iParam0, int iParam1) {
	int iVar0;
	var uVar1;

	iVar0 = Global_2521893[iParam0 /*3*/][func_13(iParam1)];
	if (stats::stat_get_float(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0f;
}

// Position - 0x7664
int func_64(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			int iParam8, int iParam9, int iParam10, int iParam11) {
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
	struct<7> Var15;
	int iVar32;

	if (iParam0 == joaat("mp_m_freemode_01")) {
		iVar1 = -1;
		iVar2 = -1;
		if (Global_2592910 == iParam1) {
			iVar2 = Global_2592909;
			iVar1 = Global_2592908;
		}
		else if (iParam1 >= 92) {
			iVar2 = func_121(iParam0, iParam1, 7, 3);
			iVar1 = func_112(iVar2);
			Global_2592910 = iParam1;
			Global_2592909 = iVar2;
			Global_2592908 = iVar1;
		}
		iVar3 = -1;
		iVar4 = -1;
		if (Global_2592913 == iParam3) {
			iVar4 = Global_2592912;
			iVar3 = Global_2592911;
		}
		else if (iParam3 >= 237) {
			iVar4 = func_121(iParam0, iParam3, 11, 3);
			iVar3 = func_112(iVar4);
			Global_2592913 = iParam3;
			Global_2592912 = iVar4;
			Global_2592911 = iVar3;
		}
		iVar5 = -1;
		iVar6 = -1;
		if (Global_2592916 == iParam4) {
			iVar6 = Global_2592915;
			iVar5 = Global_2592914;
		}
		else if (iParam4 >= 241) {
			iVar6 = func_121(iParam0, iParam4, 8, 3);
			iVar5 = func_112(iVar6);
			Global_2592916 = iParam4;
			Global_2592915 = iVar6;
			Global_2592914 = iVar5;
		}
		if (iParam3 != -99) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1855618474, 0)) {
				if (iParam1 != 0) {
					return 0;
				}
			}
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -120244486, 0)) {
			if (iParam9 != -99) {
				iVar7 = -1;
				if (iParam9 >= 327) {
					iVar7 = func_121(iParam0, iParam9, 14, 3);
				}
				if (iParam9 >= 27 && iParam9 <= 34 || iParam9 >= 75 && iParam9 <= 82 ||
					iParam9 >= 107 && iParam9 <= 114) {
					return 0;
				}
				switch (iVar7) {
				case 1411612772:
				case 1399488226:
				case 1103092621:
				case 798340921:
				case 495850282:
				case -1972900644:
				case 2016102499:
				case 1719477511:
				case 288210625:
				case -882756821:
				case -1242625979:
				case -1358792084:
				case -1854813796:
				case -1257185072:
				case -75666008:
				case -451657514:
				case -1339992339:
				case -1987638855:
				case 1148780446:
				case 1379309694:
				case 491826867:
				case 1855607109:
				case -1962767847:
				case -1654116636:
				case -1485356286:
				case -1178212449:
				case -766633809:
				case 665568109:
				case -288304716:
				case 1772824957:
				case 1533381874:
				case -2012223930:
				case 2008237453:
				case -1304118613:
				case -1543430620:
				case -854101936:
				case -1061103709:
				case -616035151:
				case 1307111925:
				case 1759289928: return 0;
				}
			}
		}
		if (iParam3 != -99) {
			if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1473812293, 0)) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1396865968, 0)) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -63750166, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -870074461, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -868698159, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1834446747, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1119232689, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -2102859770, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1784133476, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2099109084, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1488441032, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1719167561, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1274099003, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1410897066, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -826135203, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1431529976, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1723403459, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -2020757158, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1064262817, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1419806467, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1053842259, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1358888880, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -441291342, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -785939537, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1507532917, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1446333198, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 492620493, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -416620954, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -102825006, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 137011325, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1506370874, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1786447517, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1010805287, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1325813684, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -549843760, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1360588936, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1830529185, 0)) {
						return 0;
					}
					else if (func_66(iParam0, iParam3)) {
					}
					else {
						return 0;
					}
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -63750166, 0)) {
					return 0;
				}
				else if (func_66(iParam0, iParam3)) {
					return 0;
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -120244486, 0)) {
					if (iParam3 >= 188 && iParam3 <= 203 || iParam3 >= 220 && iParam3 <= 235 || iVar3 == 12 ||
						iVar3 == 14 || dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1127835965, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1506370874, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1786447517, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1010805287, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1325813684, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1360588936, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0)) {
						return 0;
					}
				}
			}
			if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -353070590, 0)) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -870074461, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -868698159, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1834446747, 0)) {
				}
				else {
					return 0;
				}
			}
		}
		if (iParam3 != -99) {
			if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, 654065530, 0)) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -7109286, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
		}
		if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, 596326873, 0)) {
			if (iParam3 != -99) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -319568873, 0)) {
					if (iParam3 >= 96 && iParam3 <= 107 || iVar3 == 6) {
						return 0;
					}
				}
				if (iParam3 == 236) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 525778571, 0)) {
						return 0;
					}
				}
				else if (iParam3 >= 172 && iParam3 <= 187 || iParam3 >= 188 && iParam3 <= 203 ||
						 iParam3 >= 204 && iParam3 <= 219 || iParam3 >= 220 && iParam3 <= 235 || iVar3 == 11 ||
						 iVar3 == 12 || iVar3 == 13 || iVar3 == 14 || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 974680318, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1625463492, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -713698407, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1843965488, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -779835469, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1086258388, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1627756587, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1021189127, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1939378450, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 441715397, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 264959411, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1127835965, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 153792394, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -672871169, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 572416369, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -196114988, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1322269404, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1655154167, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1607949555, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2099109084, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1488441032, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1719167561, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -2017999390, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1410897066, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -826135203, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1431529976, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1723403459, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1419806467, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1053842259, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1358888880, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -785939537, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -416620954, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -102825006, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 137011325, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1351486939, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -491588875, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1506370874, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1786447517, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1010805287, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1325813684, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -828478571, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0)) {
					return 0;
				}
				else if (!dlc1::_0x341DE7ED1D2A1BFD(iVar2, 525778571, 0)) {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 48 && iParam4 <= 63 || iParam4 >= 64 && iParam4 <= 79 ||
					iParam4 >= 96 && iParam4 <= 111 || iParam4 >= 112 && iParam4 <= 127 ||
					iParam4 >= 192 && iParam4 <= 207 || iParam4 >= 208 && iParam4 <= 223 || iVar5 == 3 || iVar5 == 4 ||
					iVar5 == 6 || iVar5 == 7 || iVar5 == 12 || iVar5 == 13 ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1786447517, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1010805287, 0)) {
					return 0;
				}
			}
		}
		if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -319568873, 0)) {
			if (iParam8 != -99) {
				return 0;
			}
		}
		if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -713698407, 0)) {
			if (iParam9 >= 327 && dlc1::_0x341DE7ED1D2A1BFD(func_121(iParam0, iParam9, 14, 3), -713698407, 1)) {
			}
			else if (iParam2 == 14 || iParam2 == 1 && iParam10 != 0) {
				return 0;
			}
		}
		else if (iParam9 >= 327 && dlc1::_0x341DE7ED1D2A1BFD(func_121(iParam0, iParam9, 14, 3), -713698407, 1) &&
				 iParam1 != 0) {
			return 0;
		}
		if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1119006951, 0)) {
			if (iParam3 != -99) {
				if (iParam3 >= 140 && iParam3 <= 155 || iParam3 >= 188 && iParam3 <= 203 ||
					iParam3 >= 204 && iParam3 <= 219 || iParam3 >= 220 && iParam3 <= 235 || iVar3 == 9 || iVar3 == 12 ||
					iVar3 == 13 || iVar3 == 14 || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 248194463, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 572350888, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1817355735, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -713698407, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1843965488, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 140732128, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1863955539, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1627756587, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 441715397, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 153792394, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 572416369, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2099109084, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1488441032, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1538937264, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1064262817, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1053842259, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1358888880, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -441291342, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -785939537, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1506370874, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1786447517, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1010805287, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1325813684, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -828478571, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1690933245, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1360588936, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2136821028, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 602650322, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, -99064836, 0)) {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 48 && iParam4 <= 63 || iParam4 >= 64 && iParam4 <= 79 ||
					iParam4 >= 96 && iParam4 <= 111 || iParam4 >= 112 && iParam4 <= 127 ||
					iParam4 >= 144 && iParam4 <= 159 || iParam4 >= 160 && iParam4 <= 175 ||
					iParam4 >= 176 && iParam4 <= 191 || iParam4 >= 192 && iParam4 <= 207 ||
					iParam4 >= 208 && iParam4 <= 223 || iVar5 == 3 || iVar5 == 4 || iVar5 == 6 || iVar5 == 7 ||
					iVar5 == 9 || iVar5 == 10 || iVar5 == 11 || iVar5 == 12 || iVar5 == 13 ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1778265882, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1914383230, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, 1553766533, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0)) {
					return 0;
				}
			}
		}
		if (iParam1 >= 1 && iParam1 <= 3 || iVar1 == 1) {
			if (iParam5 != -99) {
				if (iParam5 != 15) {
					return 0;
				}
			}
			if (iParam3 != -99) {
				if (iParam3 != 236) {
					return 0;
				}
			}
			if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2066241403, 0)) {
				return 0;
			}
		}
		else if (iParam1 >= 4 && iParam1 <= 6 || iVar1 == 2) {
			if (iParam3 != -99) {
				if (iParam3 >= 0 && iParam3 <= 15 || iParam3 >= 16 && iParam3 <= 31 || iParam3 >= 32 && iParam3 <= 47 ||
					iParam3 >= 80 && iParam3 <= 95 || iParam3 >= 124 && iParam3 <= 139 || iVar3 == 0 || iVar3 == 1 ||
					iVar3 == 2 || iVar3 == 5 || iVar3 == 8) {
				}
				else {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 0 && iParam4 <= 15 || iParam4 >= 16 && iParam4 <= 31 || iParam4 >= 32 && iParam4 <= 47 ||
					iParam4 >= 80 && iParam4 <= 95 || iParam4 >= 128 && iParam4 <= 143 || iParam4 == 240 ||
					iVar5 == 0 || iVar5 == 1 || iVar5 == 2 || iVar5 == 5 || iVar5 == 8 || iVar5 == 15) {
				}
				else {
					return 0;
				}
			}
			else if (iParam8 != -99) {
				if (!(iParam8 >= 1 && iParam8 <= 41)) {
				}
				else {
					return 0;
				}
			}
		}
		else if (iParam1 >= 10 && iParam1 <= 25 || iVar1 == 4) {
			if (iParam3 != -99) {
				if (iParam3 >= 0 && iParam3 <= 15 || iParam3 >= 16 && iParam3 <= 31 || iParam3 >= 32 && iParam3 <= 47 ||
					iParam3 >= 80 && iParam3 <= 95 || iParam3 >= 124 && iParam3 <= 139 ||
					iParam3 >= 140 && iParam3 <= 155 || iParam3 >= 172 && iParam3 <= 187 ||
					iParam3 >= 204 && iParam3 <= 219 || iParam3 == 236 || iVar3 == 0 || iVar3 == 1 || iVar3 == 2 ||
					iVar3 == 5 || iVar3 == 8 || iVar3 == 9 || iVar3 == 11 || iVar3 == 13 || iVar3 == 15) {
				}
				else {
					return 0;
				}
			}
		}
		else if (iParam1 >= 32 && iParam1 <= 37 || iVar1 == 6) {
			if (iParam3 != -99) {
				if (iParam3 >= 96 && iParam3 <= 107 || iParam3 >= 156 && iParam3 <= 171 || iVar3 == 6 || iVar3 == 10) {
				}
				else {
					return 0;
				}
			}
		}
		else if (iParam1 >= 41 && iParam1 <= 56 || iParam1 >= 73 && iParam1 <= 88 || iVar1 == 10 || iVar1 == 12 ||
				 iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -920534092, 0)) {
			if (iParam3 != -99) {
				if (iParam3 >= 204 && iParam3 <= 219 || func_116(iParam0, iParam3) || iVar3 == 13) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1446333198, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 492620493, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1351486939, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -7109286, 0)) {
						return 0;
					}
				}
				else {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 160 && iParam4 <= 175 || iParam4 >= 208 && iParam4 <= 223 || iVar5 == 10 ||
					iVar5 == 13 || iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1778265882, 0) ||
					iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0)) {
				}
				else {
					iVar0 = func_122(iParam6, 11);
					if (iVar0 >= 204 && iVar0 <= 219 ||
						iVar0 >= 237 && func_112(func_121(iParam0, iVar0, 11, 3)) == 13) {
						return 1;
					}
					if (iParam7 == 1) {
						if (iParam4 >= 176 && iParam4 <= 191 || iVar5 == 11) {
							return 1;
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 57 && iParam1 <= 72 || iVar1 == 11) {
			if (iParam3 != -99) {
				if (iParam3 >= 204 && iParam3 <= 219 || iParam3 >= 172 && iParam3 <= 187 ||
					func_116(iParam0, iParam3) || iVar3 == 13 || iVar3 == 11) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1446333198, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 492620493, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -7109286, 0)) {
						return 0;
					}
				}
				else {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 64 && iParam4 <= 79 || iParam4 >= 96 && iParam4 <= 111 ||
					iParam4 >= 160 && iParam4 <= 175 || iParam4 >= 208 && iParam4 <= 223 || iVar5 == 4 || iVar5 == 6 ||
					iVar5 == 10 || iVar5 == 13 || iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1778265882, 0) ||
					iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0) ||
					iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0) ||
					iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, -893126917, 0) || iVar6 == 2018316953 || iVar6 == 1771468076 ||
					iVar6 == 1529567318 || iVar6 == 1299823859 || iVar6 == 1130047658) {
				}
				else {
					iVar0 = func_122(iParam6, 11);
					if (iVar0 >= 204 && iVar0 <= 219 ||
						iVar0 >= 237 && func_112(func_121(iParam0, iVar0, 11, 3)) == 13) {
						return 1;
					}
					if (iParam7 == 1) {
						if (iParam4 >= 48 && iParam4 <= 63 || iParam4 >= 112 && iParam4 <= 127 ||
							iParam4 >= 176 && iParam4 <= 191 || iVar5 == 3 || iVar5 == 7 || iVar5 == 11) {
							if (!dlc1::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0)) {
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1950939707, 0)) {
			if (iParam3 != -99) {
				if (iParam3 >= 172 && iParam3 <= 187 || iVar3 == 11 || iVar4 == -27166014 || iVar4 == -273228435 ||
					iVar4 == -2118057713 || iVar4 == -1809078812 || iVar4 == -1522415600 || iVar4 == -1212584705 ||
					iVar4 == -886664231 || iVar4 == -646500230 || iVar4 == -290891042 || iVar4 == 15400801 ||
					iVar4 == -485413449 || iVar4 == -254359230 || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0) ||
					iVar4 == 1343601766 || iVar4 == 567992305 || iVar4 == -192707261 || iVar4 == 1156347903 ||
					iVar4 == 1853344529 || iVar4 == 1597648022 || iVar4 == -1995669446) {
					if (!dlc1::_0x341DE7ED1D2A1BFD(iVar4, -7109286, 0)) {
					}
					else {
						return 0;
					}
				}
				else {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 64 && iParam4 <= 79 || iParam4 >= 96 && iParam4 <= 111 || iVar5 == 4 || iVar5 == 6 ||
					iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, -893126917, 0) || iVar6 == 2018316953 || iVar6 == 1771468076 ||
					iVar6 == 1529567318 || iVar6 == 1299823859 || iVar6 == 1130047658) {
				}
				else {
					if (iParam7 == 1) {
						if (iParam4 >= 48 && iParam4 <= 63 || iParam4 >= 112 && iParam4 <= 127 ||
							iParam4 >= 176 && iParam4 <= 191 || iVar5 == 3 || iVar5 == 7 || iVar5 == 11) {
							if (!dlc1::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0)) {
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1371423804, 0)) {
			if (iParam3 != -99) {
				if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1625463492, 0)) {
				}
				else {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 651155766, 0) &&
						dlc1::_0x341DE7ED1D2A1BFD(iVar2, -277681306, 0) ||
					iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 505220913, 0) &&
						!dlc1::_0x341DE7ED1D2A1BFD(iVar2, -277681306, 0)) {
				}
				else {
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -108328099, 0)) {
			if (iParam4 != -99) {
				if (iParam4 >= 48 && iParam4 <= 63 || iParam4 >= 112 && iParam4 <= 127 ||
					iParam4 >= 176 && iParam4 <= 191 || iVar6 == 2018316953 || iVar6 == 1771468076 ||
					iVar6 == 1529567318 || iVar6 == 1299823859 || iVar6 == 1130047658 || iVar6 == 936913256 ||
					iVar6 == -1891018679 || iVar6 == -1583940380 || iVar6 == -693410036 || iVar6 == -2129413154 ||
					iVar6 == -1280171750 || iVar6 == -971192849 || iVar6 == 389965873 || iVar6 == -1451291468 ||
					iVar6 == -50613332 || iVar6 == 318070129 || iVar6 == -1851794728 || iVar6 == 673515492 ||
					iVar6 == 889168281 || iVar6 == 1270009599 || iVar6 == 1866208765 || iVar6 == 1546649325 ||
					iVar6 == 1180816209 || iVar6 == -1305325922 || iVar6 == 242616108 || iVar6 == 1085565864 ||
					iVar6 == -1968210019 || iVar6 == 2028002304 || iVar6 == 830393657 || iVar6 == -473747009 ||
					iVar6 == 240453350 || iVar6 == 1083927410 || iVar6 == -374729298 || iVar6 == 399897093 ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, 684992453, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, 1458930564, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, 2048281121, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, 19149565, 0)) {
					if (!dlc1::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0)) {
					}
					else {
						return 0;
					}
				}
				else {
					if (iParam7 == 1) {
						if (iParam4 >= 64 && iParam4 <= 79 || iParam4 >= 96 && iParam4 <= 111 ||
							iParam4 >= 160 && iParam4 <= 175 || iVar5 == 4 || iVar5 == 6 || iVar5 == 10) {
							if (!dlc1::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0)) {
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -378906828, 0)) {
			if (iParam3 != -99) {
				if (iParam3 >= 64 && iParam3 <= 79 || iParam3 >= 156 && iParam3 <= 171 || iVar3 == 4 || iVar3 == 10 ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 470686834, 0)) {
				}
				else {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 176 && iParam4 <= 191 || iVar6 == 2018316953 || iVar6 == 1771468076 ||
					iVar6 == 1529567318 || iVar6 == 1299823859 || iVar6 == 1130047658 || iVar6 == 936913256 ||
					iVar6 == -1891018679 || iVar6 == -1583940380 || iVar6 == -693410036 || iVar6 == -2129413154 ||
					iVar6 == -1280171750 || iVar6 == -971192849 || iVar6 == 389965873 || iVar6 == -1451291468 ||
					iVar6 == -50613332 || iVar6 == 318070129 || iVar6 == -1851794728 || iVar6 == 673515492 ||
					iVar6 == 889168281 || iVar6 == 1270009599 || iVar6 == 1866208765 || iVar6 == 1546649325 ||
					iVar6 == 1180816209 || iVar6 == -374729298 || iVar6 == 399897093 ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar6, 684992453, 0)) {
					if (!dlc1::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0)) {
					}
					else {
						return 0;
					}
				}
				else {
					if (iParam7 == 1) {
						if (iParam4 >= 160 && iParam4 <= 175 || iVar5 == 10) {
							if (!dlc1::_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0)) {
								return 1;
							}
						}
					}
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -695703461, 0)) {
			if (iParam3 != -99) {
				if (iParam3 >= 64 && iParam3 <= 79 || iParam3 >= 188 && iParam3 <= 203 || iVar3 == 12 || iVar3 == 4 ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar4, 470686834, 0)) {
				}
				else {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 192 && iParam4 <= 207 || func_65(iVar6) ||
					iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 310957510, 0)) {
				}
				else {
					return 0;
				}
			}
		}
		else if (iParam1 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1473812293, 0)) {
			if (iParam3 != -99) {
				if (iParam3 >= 172 && iParam3 <= 187 || iVar3 == 11) {
					return 0;
				}
				else if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1627756587, 0) ||
						 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1322269404, 0)) {
					return 0;
				}
				else if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -713698407, 0)) {
					return 0;
				}
			}
			if (iParam8 != -99) {
				if (!(iParam8 >= 1 && iParam8 <= 41)) {
				}
				else {
					return 0;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		iVar8 = -1;
		iVar9 = -1;
		if (iParam1 >= 55) {
			iVar9 = func_121(iParam0, iParam1, 7, 4);
			iVar8 = func_112(iVar9);
		}
		iVar10 = -1;
		iVar11 = -1;
		if (iParam3 >= 256) {
			iVar11 = func_121(iParam0, iParam3, 11, 4);
			iVar10 = func_112(iVar11);
		}
		iVar12 = -1;
		if (iParam9 >= 327) {
			iVar12 = func_121(iParam0, iParam9, 14, 4);
		}
		iVar13 = -1;
		iVar14 = -1;
		if (iParam4 >= 136) {
			iVar13 = func_121(iParam0, iParam4, 8, 4);
			iVar14 = func_112(iVar13);
		}
		if (iParam3 != -99) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1855618474, 0)) {
				if (iParam1 != 0) {
					return 0;
				}
			}
		}
		if (iVar9 == 281786684 || iVar9 == 653911448 || iVar9 == -1519558015) {
			if (iParam9 != -99) {
				switch (iVar12) {
				case 1446628467:
				case -1938048778:
				case 2041418586:
				case -1342898200:
				case 2026483804:
				case -1977527541:
				case -1670449242:
				case -1385031204:
				case -1088111295:
				case -1530918836:
				case -1221415631:
				case -629869643:
				case 530255864:
				case 38181873:
				case 319110510:
				case 482562282:
				case -1178170642:
				case -880726429:
				case -699776011:
				case -401873032:
				case -700496933:
				case -404429018:
				case -2134238990:
				case -2136376254:
				case 1861212367:
				case -789144321:
				case -223092615:
				case 763352592:
				case -549897852:
				case -1976889495:
				case -1410575637:
				case -428980242:
				case -1731482454:
				case -1390357480: return 0;
				}
			}
		}
		if (iParam3 != -99) {
			if (iVar9 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, -1473812293, 0)) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, 1396865968, 0)) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, -63750166, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1410897066, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, 320460654, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -826135203, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -747583185, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -416620954, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -733792105, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -641612092, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1507532917, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1360588936, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -549843760, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1830529185, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1506370874, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1786447517, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1010805287, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2136821028, 0)) {
						return 0;
					}
					else if (func_66(iParam0, iParam3)) {
					}
					else {
						return 0;
					}
				}
				else if (func_66(iParam0, iParam3)) {
					return 0;
				}
			}
			if (iVar9 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, -353070590, 0)) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, -870074461, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1174924468, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -868698159, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1769225721, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1834446747, 0)) {
				}
				else {
					return 0;
				}
			}
		}
		if (iVar9 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, -713698407, 0)) {
			if (iParam9 >= 327 && dlc1::_0x341DE7ED1D2A1BFD(func_121(iParam0, iParam9, 14, 4), -713698407, 1)) {
			}
			else if (iParam2 == 14 || iParam2 == 1 && iParam10 != 0) {
				return 0;
			}
		}
		else if (iParam9 >= 327 && dlc1::_0x341DE7ED1D2A1BFD(func_121(iParam0, iParam9, 14, 4), -713698407, 1) &&
				 iParam1 != 0) {
			return 0;
		}
		if (iVar9 != -1 &&
			(dlc1::_0x341DE7ED1D2A1BFD(iVar9, -920534092, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar9, 1537081084, 0))) {
			if (iParam2 == 11) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, 684992453, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 916636514, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1939378450, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -820724897, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 153792394, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -872449705, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1714969731, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1055526375, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 947651647, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -549843760, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1830529185, 0) || iParam3 >= 112 && iParam3 <= 127 ||
					iVar10 == 7) {
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, 700658917, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 745826556, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 144417099, 0)) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, 1537081084, 0)) {
					}
					else {
						return 0;
					}
				}
				else {
					return 0;
				}
			}
			else if (iParam2 == 8) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1553766533, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1914383230, 0)) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, -920534092, 0)) {
						if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, 441715397, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar13, 264959411, 0)) {
							if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, 1828206051, 0)) {
							}
							else {
								return 0;
							}
						}
						else if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, 1828206051, 0)) {
							return 0;
						}
					}
				}
				else {
					return 0;
				}
			}
		}
		if (iParam9 != -99) {
			if (iVar12 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar12, 1406402954, 1)) {
				if (iParam1 >= 1 && iParam1 <= 12 || iVar8 == 1 || iVar8 == 2 ||
					iVar9 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, 1406402954, 0)) {
					return 0;
				}
			}
		}
		if (iVar9 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, 596326873, 0)) {
			if (iParam3 != -99) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1358888880, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -102825006, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -733792105, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -641612092, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1507532917, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -828478571, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1360588936, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 974680318, 0)) {
					return 0;
				}
				else if (func_116(iParam0, iParam3)) {
				}
				else if (iParam3 >= 32 && iParam3 <= 47 || iParam3 >= 176 && iParam3 <= 191 || iVar10 == 2 ||
						 iVar10 == 11 || dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -761463976, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1347486026, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -939525357, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1119232689, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -2102859770, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1784133476, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1488441032, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2044466679, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -2020757158, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -430330349, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1351486939, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2030343924, 0) || iVar11 == 998321559 ||
						 iVar11 == 619380843) {
					if (!dlc1::_0x341DE7ED1D2A1BFD(iVar9, 525778571, 0)) {
						return 0;
					}
				}
				else if (iParam3 >= 48 && iParam3 <= 63 || iParam3 >= 144 && iParam3 <= 159 ||
						 iParam3 >= 224 && iParam3 <= 239 || iVar10 == 3 || iVar10 == 9 || iVar10 == 14 ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -530089825, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1965569012, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1200513218, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -713698407, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1843965488, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -55104292, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -779835469, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1086258388, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 140732128, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2106216756, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1627756587, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 441715397, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 264959411, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1127835965, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -672871169, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 572416369, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -196114988, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1607949555, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1976716889, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2099109084, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1488441032, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 320460654, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -2017999390, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1410897066, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -826135203, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1053842259, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1358888880, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -441291342, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -747583185, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1407863332, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1986415230, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -785939537, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1103045158, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -102825006, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -641612092, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1507532917, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1506370874, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1786447517, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1010805287, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2136821028, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1360588936, 0)) {
					return 0;
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, 525778571, 0)) {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 71 && iParam4 <= 86 || iVar14 == 11 ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1455992833, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 153792394, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -870074461, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1174924468, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -868698159, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1177480446, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1347486026, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1655154167, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -2105858993, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1893564692, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1710451520, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1416808511, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1641506460, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 699233865, 0) || iVar13 == -565297075 || iVar13 == 262349558 ||
					iVar13 == -917804055 || iVar13 == -1156067454 || iVar13 == -2124751863 || iVar13 == 1812836719 ||
					iVar13 == 1582116924 || iVar13 == 877452376 || iVar13 == 1117419763 || iVar13 == 732885188 ||
					iVar13 == -1037820496 || iVar13 == -79097863 || dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1119232689, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -2102859770, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1784133476, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1607949555, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1976716889, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 2099109084, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1488441032, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 2044466679, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -2020757158, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1064262817, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1419806467, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1053842259, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1358888880, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -849839091, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -2088146832, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -352447393, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -642551350, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -819569488, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -2020068325, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1786447517, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1010805287, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1325813684, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -549843760, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -269266203, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 201427653, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 967829025, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -685039259, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1266557933, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -979468724, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, -58412562, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar13, 974680318, 0)) {
					if (!dlc1::_0x341DE7ED1D2A1BFD(iVar9, 525778571, 0)) {
						return 0;
					}
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1965569012, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, 684992453, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, 916636514, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1939378450, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, 441715397, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, 264959411, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1353777856, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1207283343, 0)) {
					return 0;
				}
				else if (func_113(iParam0, iParam4, 0) != -99) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, 525778571, 0)) {
						return 0;
					}
				}
			}
			if (iParam8 != -99) {
				if (!(iParam8 >= 1 && iParam8 <= 31)) {
				}
				else {
					return 0;
				}
			}
		}
		if (iParam3 != -99) {
			if (iVar9 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, 654065530, 0)) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1351486939, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
		}
		if (iParam1 >= 13 && iParam1 <= 18 || iVar8 == 3 ||
			iVar9 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, -1320139576, 0)) {
			if (iParam3 != -99) {
				if (iParam3 >= 48 && iParam3 <= 63 || iParam3 >= 112 && iParam3 <= 127 ||
					iParam3 >= 160 && iParam3 <= 175 || iVar10 == 3 || iVar10 == 7 || iVar10 == 10 ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1882920022, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1147939952, 0)) {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 136 && dlc1::_0x341DE7ED1D2A1BFD(func_121(iParam0, iParam4, 8, 4), 1147939952, 0)) {
					return 0;
				}
			}
			else if (iParam9 != -99) {
				if (iVar12 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar12, -1320139576, 1)) {
					return 0;
				}
			}
		}
		else if (iParam1 >= 19 && iParam1 <= 24 || iVar8 == 4) {
			if (iParam3 != -99) {
				if (iParam3 >= 48 && iParam3 <= 63 || iParam3 >= 112 && iParam3 <= 127 ||
					iParam3 >= 160 && iParam3 <= 175 || iVar10 == 3 || iVar10 == 7 || iVar10 == 10 ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1882920022, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1147939952, 0)) {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 136 && dlc1::_0x341DE7ED1D2A1BFD(func_121(iParam0, iParam4, 8, 4), 1147939952, 0)) {
					return 0;
				}
			}
			else if (iParam9 != -99) {
				if (iVar12 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar12, -1320139576, 1)) {
					dlc1::_0x5D5CAFF661DDF6FC(iVar12, &Var15);
					if (Var15.f_6 == 7) {
						return 0;
					}
				}
			}
		}
		else if (iParam1 >= 25 && iParam1 <= 30 || iVar8 == 5) {
			if (iParam3 != -99) {
				if (iParam3 >= 48 && iParam3 <= 63 || iParam3 >= 112 && iParam3 <= 127 ||
					iParam3 >= 160 && iParam3 <= 175 || iVar10 == 3 || iVar10 == 7 || iVar10 == 10 ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1882920022, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1147939952, 0)) {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (iParam4 >= 136 && dlc1::_0x341DE7ED1D2A1BFD(func_121(iParam0, iParam4, 8, 4), 1147939952, 0)) {
					return 0;
				}
			}
			else if (iParam9 != -99) {
				if (iVar12 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar12, -1320139576, 1)) {
					return 0;
				}
			}
		}
		else if (iParam1 >= 31 && iParam1 <= 36 || iVar8 == 6) {
			if (iParam3 != -99) {
				if (iParam3 >= 48 && iParam3 <= 63 || iParam3 >= 144 && iParam3 <= 159 ||
					iParam3 >= 224 && iParam3 <= 239 || iVar10 == 3 || iVar10 == 9 || iVar10 == 14 ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1965569012, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1882920022, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 396458410, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -761463976, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 103539798, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1347486026, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -994703884, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1119232689, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 320460654, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -2017999390, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1410897066, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -826135203, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2044466679, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -2020757158, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1064262817, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1053842259, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1358888880, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -441291342, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -747583185, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1986415230, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -430330349, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -102825006, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -733792105, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -641612092, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1351486939, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1507532917, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2030343924, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -828478571, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1360588936, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1506370874, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1786447517, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1010805287, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2136821028, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 602650322, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 905042630, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1204125293, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1855618474, 0)) {
					return 0;
				}
			}
		}
		else if (iParam1 >= 37 && iParam1 <= 42 || iVar8 == 7 ||
				 iParam1 >= 55 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, 2083259958, 0)) {
			if (iParam3 != -99) {
				if (iParam3 >= 32 && iParam3 <= 47 || iParam3 >= 48 && iParam3 <= 63 ||
					iParam3 >= 144 && iParam3 <= 159 || iParam3 >= 224 && iParam3 <= 239 || iVar10 == 2 ||
					iVar10 == 3 || iVar10 == 9 || iVar10 == 14 ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1882920022, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 396458410, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -761463976, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 821147517, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 103539798, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1347486026, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -994703884, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1119232689, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1607949555, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 320460654, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -2017999390, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1410897066, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -826135203, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1965569012, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1064262817, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1053842259, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1358888880, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -441291342, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -747583185, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1986415230, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -430330349, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -102825006, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -733792105, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -641612092, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1351486939, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1507532917, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2030343924, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -828478571, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1360588936, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1506370874, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1786447517, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1010805287, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2136821028, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1831422288, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar11, 974680318, 0)) {
					return 0;
				}
				else if (iParam3 >= 112 && iParam3 <= 127 || iParam3 >= 160 && iParam3 <= 175 ||
						 iParam3 >= 192 && iParam3 <= 207 || iVar10 == 7 || iVar10 == 10 || iVar10 == 12 ||
						 iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1147939952, 0) ||
						 iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1200513218, 0) ||
						 iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0) ||
						 iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1882920022, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar11, -747583185, 0)) {
					if (iParam1 >= 55 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, 2083259958, 0)) {
						return 0;
					}
				}
			}
			else if (iParam4 != -99) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1965569012, 0)) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, 2083259958, 0)) {
						return 0;
					}
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1786447517, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1010805287, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1325813684, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -549843760, 0)) {
					return 0;
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1703203608, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1415000253, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -168336417, 0)) {
					return 0;
				}
			}
			else if (iParam9 != -99) {
				if (iVar12 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar12, -1320139576, 1)) {
					return 0;
				}
			}
		}
		else if (iParam1 >= 43 && iParam1 <= 48 || iVar8 == 8) {
			if (iParam3 != -99) {
				if (iParam3 >= 0 && iParam3 <= 15 || iParam3 >= 32 && iParam3 <= 47 || iParam3 >= 64 && iParam3 <= 79 ||
					iParam3 >= 80 && iParam3 <= 95 || iParam3 >= 144 && iParam3 <= 159 ||
					iParam3 >= 176 && iParam3 <= 191 || iParam3 >= 192 && iParam3 <= 207 ||
					iParam3 >= 208 && iParam3 <= 223 || iParam3 >= 240 && iParam3 <= 255 || iVar10 == 0 ||
					iVar10 == 2 || iVar10 == 4 || iVar10 == 5 || iVar10 == 9 || iVar10 == 11 || iVar10 == 12 ||
					iVar10 == 13 || iVar10 == 15 ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1200513218, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -530089825, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, 103539798, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -994703884, 0)) {
				}
				else {
					return 0;
				}
			}
		}
		else if (iParam1 >= 49 && iParam1 <= 54 || iVar8 == 9) {
			if (iParam3 != -99) {
				if (iParam3 >= 0 && iParam3 <= 15 || iParam3 >= 64 && iParam3 <= 79 || iParam3 >= 80 && iParam3 <= 95 ||
					iParam3 >= 176 && iParam3 <= 191 || iParam3 >= 192 && iParam3 <= 207 ||
					iParam3 >= 208 && iParam3 <= 223 || iParam3 >= 240 && iParam3 <= 255 || iVar10 == 0 ||
					iVar10 == 4 || iVar10 == 5 || iVar10 == 11 || iVar10 == 12 || iVar10 == 13 || iVar10 == 15 ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1200513218, 0) ||
					iParam3 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -530089825, 0)) {
				}
				else {
					return 0;
				}
			}
			else if (iParam4 != -99) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, -7109286, 0)) {
					return 0;
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1786447517, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1010805287, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1325813684, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar13, -549843760, 0)) {
					return 0;
				}
			}
			if (iParam8 != -99) {
				if (!(iParam8 >= 1 && iParam8 <= 31)) {
				}
				else {
					return 0;
				}
			}
		}
		else if (iParam1 >= 55 && dlc1::_0x341DE7ED1D2A1BFD(iVar9, 1716958480, 0)) {
			if (iParam3 != -99) {
				if (iVar11 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar11, -747583185, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (iParam11 != -99) {
				iVar32 = -1;
				if (iParam11 >= 256) {
					iVar32 = func_121(iParam0, iParam11, 4, 4);
				}
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar32, -33031567, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
		}
	}
	return 1;
}

// Position - 0xBCDF
int func_65(int iParam0) {
	if (iParam0 != -1) {
		return 0;
	}
	switch (iParam0) {
	case -783649692:
	case 691352495:
	case 1313566316:
	case 451909412:
	case 1552550633:
	case -206550874:
	case 860928119:
	case -445797343:
	case 1107219923:
	case -173716332:
	case -2017140386:
	case -538304226:
	case -1235599732:
	case -592242000:
	case 1815489089:
	case -831095241:
	case 2062043045:
	case -1092100326:
	case -1065332020:
	case -1465994616:
	case -1516536717:
	case 507503642:
	case -1470397961:
	case -1392082519:
	case 264425668:
	case -88859389:
	case 560755735:
	case 157858412:
	case -593565059:
	case -513152401:
	case -286945526:
	case 2004948615: return 1;
	}
	return 0;
}

// Position - 0xBDC0
bool func_66(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == joaat("mp_m_freemode_01")) {
		iVar0 = func_121(iParam0, iParam1, 11, 3);
		if (iVar0 != -1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1119232689, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -2102859770, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1784133476, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1976716889, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 2099109084, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1488441032, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1719167561, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1274099003, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1410897066, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -826135203, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1431529976, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1723403459, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 2044466679, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -2020757158, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1064262817, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1419806467, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1053842259, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1358888880, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -441291342, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -785939537, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1446333198, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 492620493, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1506370874, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1786447517, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1010805287, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1325813684, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1690933245, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1360588936, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, 2136821028, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1603194928, 0)) {
				return true;
			}
		}
		if (iVar0 != -1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, -2017999390, 0)) {
				return true;
			}
		}
		return func_116(iParam0, iParam1);
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		iVar1 = func_121(iParam0, iParam1, 11, 4);
		iVar2 = -1;
		if (iVar1 != -1) {
			iVar2 = func_112(iVar1);
		}
		if (iParam1 >= 16 && iParam1 < 32 || iParam1 >= 48 && iParam1 < 64 || iParam1 >= 96 && iParam1 < 112 ||
			iParam1 >= 112 && iParam1 < 128 || iParam1 >= 128 && iParam1 < 144 || iParam1 >= 144 && iParam1 < 160 ||
			iParam1 >= 160 && iParam1 < 176 || iParam1 >= 224 && iParam1 < 240 || iVar2 == 1 || iVar2 == 3 ||
			iVar2 == 6 || iVar2 == 7 || iVar2 == 8 || iVar2 == 9 || iVar2 == 10 || iVar2 == 14 ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, -1393156190, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, 1843965488, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, 441715397, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, 264959411, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, -1410897066, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, 320460654, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, -2017999390, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, -826135203, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, -747583185, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, -102825006, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, -733792105, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, -641612092, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, -1507532917, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, -1506370874, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, -1786447517, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, -1010805287, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, -1325813684, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, 1690933245, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar1, 1360588936, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar1, 2136821028, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0xC2CA
void func_67(int iParam0, int iParam1, int iParam2, bool bParam3) {
	int iVar0;
	int iVar1;

	iVar0 = entity::get_entity_model(iParam0);
	func_106(gameplay::get_hash_key("hairOverlay"), iParam0);
	iVar1 = func_105(iVar0, iParam1);
	if (iVar1 != -1) {
		if (iParam2 == -1) {
			iParam2 = Global_69521;
		}
		func_132(iVar1, 1, iParam2);
	}
	func_68(iParam0, bParam3, 0);
}

// Position - 0xC316
void func_68(int iParam0, bool bParam1, int iParam2) {
	int iVar0;
	struct<9> Var1;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<8> Var21;
	int iVar36;

	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = Global_69521;
		ped::_clear_ped_facial_decorations(iParam0);
		iVar14 = func_104(iParam0);
		iVar15 = func_91(iParam0, 0);
		iVar16 = func_89(iParam0);
		iVar17 = func_88(iParam0);
		if (bParam1) {
			iVar16 = 1;
		}
		if (iParam2) {
			iVar16 = 0;
		}
		iVar18 = 0;
		while (iVar18 < 127) {
			if (func_81(iVar18, iVar0)) {
				if (func_73(&Var1, iVar18, iVar14, iParam0, -1)) {
					if (func_70(iParam0, &Var1, Var1.f_4, Var1.f_8, iVar15, iVar16, bParam1, iVar17)) {
						ped::_set_ped_decoration(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (func_81(123, iVar0)) {
			if (ped::_get_tattoo_zone(-1719270477, -1824026490) != 7) {
				ped::_set_ped_decoration(iParam0, -1719270477, -1824026490);
			}
		}
		iVar20 = dlc1::_get_num_decorations(iVar14);
		iVar19 = 0;
		while (iVar19 < iVar20) {
			if (dlc1::_0xFF56381874F82086(iVar14, iVar19, &Var21)) {
				if (!dlc1::_is_dlc_data_empty(Var21)) {
					iVar36 = 129 + iVar19;
					if (func_81(iVar36, iVar0)) {
						if (func_70(iParam0, &Var21.f_7, Var21.f_2, Var21.f_6, iVar15, iVar16, bParam1, iVar17)) {
							ped::_set_ped_decoration(iParam0, Var21.f_2, Var21.f_3);
							func_69(iParam0, Var21.f_2, Var21.f_3);
						}
					}
				}
			}
			iVar19++;
		}
	}
}

// Position - 0xC466
void func_69(int iParam0, int iParam1, int iParam2) {
	switch (iParam1) {
	case -1194930348:
		switch (iParam2) {
		case -841238543: ped::_set_ped_decoration(iParam0, -1194930348, -441419962); break;

		case -1405854945: ped::_set_ped_decoration(iParam0, -1194930348, 1647997020); break;
		}
		break;

	case -777275782:
		switch (iParam2) {
		case 671171671: ped::_set_ped_decoration(iParam0, -777275782, 904519720); break;

		case 1911627074: ped::_set_ped_decoration(iParam0, -777275782, -607391498); break;
		}
		break;

	case 484754152:
		switch (iParam2) {
		case 266230635:
			ped::_set_ped_decoration(iParam0, 484754152, -588549683);
			ped::_set_ped_decoration(iParam0, 484754152, 464027076);
			break;

		case -1261787835:
			ped::_set_ped_decoration(iParam0, 484754152, -965491494);
			ped::_set_ped_decoration(iParam0, 484754152, 939374190);
			break;
		}
		break;
	}
}

// Position - 0xC55B
bool func_70(int iParam0, char *sParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6,
			 int iParam7) {
	int iVar0;
	int iVar1;

	iVar0 = entity::get_entity_model(iParam0);
	if (iParam3 == 0) {
		iVar1 = func_72(iVar0, sParam1, iParam3);
		iParam3 = gameplay::get_hash_key(func_71(iVar1));
	}
	if (iParam2 == 449512698) {
		return false;
	}
	switch (iParam3) {
	case -793495770:
	case -763917073:
	case -1409061796:
	case -2066166276:
	case 849089063:
	case 1192230427:
	case -454273031:
	case -1459967458:
	case 1548327796:
	case -1238079313:
	case 129912816:
	case -1469750959:
	case 1586504577:
	case 1753976524:
	case 1361645381:
	case -388268096:
		if (iParam4) {
			return false;
		}
		if (iParam3 == -793495770 || iParam3 == -1409061796 && iVar0 == joaat("mp_f_freemode_01") ||
			iParam3 == -2066166276 || iParam3 == 849089063 || iParam3 == 1192230427) {
			if (!iParam5) {
				if (Global_2593872 == -1) {
					if (!Global_91543.f_1456) {
						if (func_81(13, -1)) {
							return false;
						}
						else if (func_81(14, -1)) {
							return false;
						}
						else if (func_81(15, -1)) {
							return false;
						}
						else if (func_81(16, -1)) {
							return false;
						}
						else if (func_81(71, -1)) {
							return false;
						}
						else if (func_81(72, -1)) {
						}
					}
				}
				else if (Global_2593872 == 13) {
					return false;
				}
				else if (Global_2593872 == 14) {
					return false;
				}
				else if (Global_2593872 == 15) {
					return false;
				}
				else if (Global_2593872 == 16) {
					return false;
				}
				else if (Global_2593872 == 71) {
					return false;
				}
				else if (Global_2593872 == 72) {
				}
			}
		}
		else if (iParam3 == -763917073) {
			if (!iParam5) {
				if (Global_2593872 == -1) {
					if (!Global_91543.f_1456) {
						if (func_81(13, -1)) {
							return false;
						}
						else if (func_81(14, -1)) {
							return false;
						}
						else if (func_81(15, -1)) {
							return false;
						}
						else if (func_81(16, -1)) {
							return false;
						}
						else if (func_81(71, -1)) {
							return false;
						}
						else if (func_81(72, -1)) {
						}
					}
				}
				else if (Global_2593872 == 13) {
					return false;
				}
				else if (Global_2593872 == 14) {
					return false;
				}
				else if (Global_2593872 == 15) {
					return false;
				}
				else if (Global_2593872 == 16) {
					return false;
				}
				else if (Global_2593872 == 71) {
					return false;
				}
				else if (Global_2593872 == 72) {
				}
			}
		}
		else if (iParam3 == 129912816 || iParam3 == 1361645381 || iParam3 == -1469750959) {
			if (!iParam5) {
				if (Global_2593872 == -1) {
					if (!Global_91543.f_1456) {
						if (func_81(13, -1)) {
						}
						else if (func_81(14, -1)) {
							return false;
						}
						else if (func_81(15, -1)) {
							return false;
						}
						else if (func_81(16, -1)) {
						}
						else if (func_81(71, -1)) {
							return false;
						}
						else if (func_81(72, -1)) {
						}
					}
				}
				else if (Global_2593872 == 13) {
				}
				else if (Global_2593872 == 14) {
					return false;
				}
				else if (Global_2593872 == 15) {
					return false;
				}
				else if (Global_2593872 == 16) {
				}
				else if (Global_2593872 == 71) {
					return false;
				}
				else if (Global_2593872 == 72) {
				}
			}
		}
		break;

	case 1484379715:
	case 711089605:
	case 1206993109:
	case 32564956:
	case 1618133209:
	case 314326195:
	case 1928884106:
	case 1565386395:
	case 2107621060:
		if (iParam7) {
			return false;
		}
		if (!iParam5) {
			if (Global_2593872 == -1) {
				if (!Global_91543.f_1456) {
					if (func_81(13, -1)) {
					}
					else if (func_81(14, -1)) {
					}
					else if (func_81(15, -1)) {
						return false;
					}
					else if (func_81(16, -1)) {
					}
					else if (func_81(71, -1)) {
					}
					else if (func_81(72, -1)) {
						return false;
					}
				}
			}
			else if (Global_2593872 == 13) {
			}
			else if (Global_2593872 == 14) {
			}
			else if (Global_2593872 == 15) {
				return false;
			}
			else if (Global_2593872 == 16) {
			}
			else if (Global_2593872 == 71) {
			}
			else if (Global_2593872 == 72) {
				return false;
			}
		}
		break;

	case 1019352240:
		if (iParam7) {
			if (iVar0 == joaat("mp_m_freemode_01")) {
				if (Global_2593872 == -1) {
					if (!Global_91543.f_1456) {
						if (func_81(15, -1)) {
							return false;
						}
					}
				}
				else if (Global_2593872 == 15) {
					return false;
				}
			}
		}
		if (iParam5) {
			return false;
		}
		if (iParam4) {
			if (Global_2593872 == -1) {
				if (!Global_91543.f_1456) {
					if (func_81(13, -1)) {
						return false;
					}
					else if (func_81(14, -1)) {
						return false;
					}
					else if (func_81(15, -1)) {
						return false;
					}
					else if (func_81(16, -1)) {
					}
					else if (func_81(71, -1)) {
					}
					else if (func_81(72, -1)) {
					}
				}
			}
			else if (Global_2593872 == 13) {
				return false;
			}
			else if (Global_2593872 == 14) {
				return false;
			}
			else if (Global_2593872 == 15) {
				return false;
			}
			else if (Global_2593872 == 16) {
			}
			else if (Global_2593872 == 71) {
			}
			else if (Global_2593872 == 72) {
			}
		}
		break;

	case 0:
	case 2:
	case -518474626:
		if (iParam4) {
			if (!gameplay::is_string_null_or_empty(sParam1)) {
				switch (gameplay::get_hash_key(sParam1)) {
				case 1774176944:
				case 1363941829:
				case -328314869:
				case -1903783095:
				case -1674924399:
				case -106785870:
				case -344656041:
				case 1480281490:
				case -2097372400:
				case 118598456:
				case -1386676768:
				case 1464947154:
				case -1282504117:
				case -1877294236:
				case 736950162: return false;
				}
			}
		}
		if (iVar0 == joaat("mp_m_freemode_01")) {
		}
		else if (iVar0 == joaat("mp_f_freemode_01")) {
			if (!iParam5) {
				if (Global_2593872 == -1) {
					if (!Global_91543.f_1456) {
						if (func_81(13, -1)) {
						}
						else if (func_81(14, -1)) {
						}
						else if (func_81(15, -1)) {
						}
						else if (func_81(16, -1)) {
						}
						else if (func_81(71, -1)) {
						}
						else if (func_81(72, -1)) {
						}
					}
				}
				else if (Global_2593872 == 13) {
					return false;
				}
				else if (Global_2593872 == 14) {
				}
				else if (Global_2593872 == 15) {
					return false;
				}
				else if (Global_2593872 == 16) {
				}
				else if (Global_2593872 == 71) {
				}
				else if (Global_2593872 == 72) {
				}
			}
		}
		break;

	case 277073536:
		if (bParam6) {
			return false;
		}
		break;
	}
	return true;
}

// Position - 0xCCA2
char *func_71(int iParam0) {
	switch (iParam0) {
	case 0: return "ARM_LEFT_FULL_SLEEVE";

	case 1: return "ARM_LEFT_SHORT_SLEEVE";

	case 2: return "ARM_LEFT_LOWER_SLEEVE";

	case 3: return "ARM_LEFT_LOWER_INNER";

	case 4: return "ARM_LEFT_LOWER_OUTER";

	case 5: return "ARM_LEFT_WRIST";

	case 6: return "ARM_LEFT_UPPER_SLEEVE";

	case 7: return "ARM_LEFT_UPPER_TRICEP";

	case 8: return "ARM_LEFT_UPPER_SIDE";

	case 9: return "ARM_LEFT_UPPER_BICEP";

	case 10: return "ARM_LEFT_SHOULDER";

	case 11: return "ARM_LEFT_ELBOW";

	case 12: return "ARM_RIGHT_FULL_SLEEVE";

	case 13: return "ARM_RIGHT_SHORT_SLEEVE";

	case 14: return "ARM_RIGHT_LOWER_SLEEVE";

	case 15: return "ARM_RIGHT_LOWER_INNER";

	case 16: return "ARM_RIGHT_LOWER_OUTER";

	case 17: return "ARM_RIGHT_WRIST";

	case 18: return "ARM_RIGHT_UPPER_SLEEVE";

	case 19: return "ARM_RIGHT_UPPER_TRICEP";

	case 20: return "ARM_RIGHT_UPPER_SIDE";

	case 21: return "ARM_RIGHT_UPPER_BICEP";

	case 22: return "ARM_RIGHT_SHOULDER";

	case 23: return "ARM_RIGHT_ELBOW";

	case 24: return "HAND_LEFT";

	case 25: return "HAND_RIGHT";

	case 26: return "BACK_FULL";

	case 27: return "BACK_FULL_ARMS_FULL_BACK";

	case 28: return "BACK_FULL_SHORT";

	case 29: return "BACK_MID";

	case 30: return "BACK_UPPER";

	case 31: return "BACK_UPPER_LEFT";

	case 32: return "BACK_UPPER_RIGHT";

	case 33: return "BACK_LOWER";

	case 34: return "BACK_LOWER_LEFT";

	case 35: return "BACK_LOWER_MID";

	case 36: return "BACK_LOWER_RIGHT";

	case 37: return "CHEST_FULL";

	case 38: return "CHEST_STOM";

	case 39: return "CHEST_STOM_FULL";

	case 40: return "CHEST_LEFT";

	case 41: return "CHEST_UPPER_LEFT";

	case 42: return "CHEST_RIGHT";

	case 43: return "CHEST_UPPER_RIGHT";

	case 44: return "CHEST_MID";

	case 45: return "TORSO_SIDE_RIGHT";

	case 46: return "TORSO_SIDE_LEFT";

	case 47: return "STOMACH_FULL";

	case 48: return "STOMACH_UPPER";

	case 49: return "STOMACH_UPPER_LEFT";

	case 50: return "STOMACH_UPPER_RIGHT";

	case 51: return "STOMACH_LOWER";

	case 52: return "STOMACH_LOWER_LEFT";

	case 53: return "STOMACH_LOWER_RIGHT";

	case 54: return "STOMACH_LEFT";

	case 55: return "STOMACH_RIGHT";

	case 56: return "FACE";

	case 57: return "HEAD_LEFT";

	case 58: return "HEAD_RIGHT";

	case 59: return "NECK_FRONT";

	case 60: return "NECK_BACK";

	case 61: return "NECK_LEFT_FULL";

	case 62: return "NECK_LEFT_BACK";

	case 63: return "NECK_RIGHT_FULL";

	case 64: return "NECK_RIGHT_BACK";

	case 65: return "LEG_LEFT_FULL_SLEEVE";

	case 66: return "LEG_LEFT_FULL_FRONT";

	case 67: return "LEG_LEFT_FULL_BACK";

	case 68: return "LEG_LEFT_UPPER_SLEEVE";

	case 69: return "LEG_LEFT_UPPER_FRONT";

	case 70: return "LEG_LEFT_UPPER_BACK";

	case 71: return "LEG_LEFT_UPPER_OUTER";

	case 72: return "LEG_LEFT_UPPER_INNER";

	case 73: return "LEG_LEFT_LOWER_SLEEVE";

	case 74: return "LEG_LEFT_LOWER_FRONT";

	case 75: return "LEG_LEFT_LOWER_BACK";

	case 76: return "LEG_LEFT_LOWER_OUTER";

	case 77: return "LEG_LEFT_LOWER_INNER";

	case 78: return "LEG_LEFT_KNEE";

	case 79: return "LEG_LEFT_ANKLE";

	case 80: return "LEG_LEFT_CALF";

	case 81: return "LEG_RIGHT_FULL_SLEEVE";

	case 82: return "LEG_RIGHT_FULL_FRONT";

	case 83: return "LEG_RIGHT_FULL_BACK";

	case 84: return "LEG_RIGHT_UPPER_SLEEVE";

	case 85: return "LEG_RIGHT_UPPER_FRONT";

	case 86: return "LEG_RIGHT_UPPER_BACK";

	case 87: return "LEG_RIGHT_UPPER_OUTER";

	case 88: return "LEG_RIGHT_UPPER_INNER";

	case 89: return "LEG_RIGHT_LOWER_SLEEVE";

	case 90: return "LEG_RIGHT_LOWER_FRONT";

	case 91: return "LEG_RIGHT_LOWER_BACK";

	case 92: return "LEG_RIGHT_LOWER_OUTER";

	case 93: return "LEG_RIGHT_LOWER_INNER";

	case 94: return "LEG_RIGHT_KNEE";

	case 95: return "LEG_RIGHT_ANKLE";

	case 96: return "LEG_RIGHT_CALF";

	case 97: return "FOOT_LEFT";

	case 98: return "FOOT_RIGHT";
	}
	return "";
}

// Position - 0xD2E5
int func_72(int iParam0, char *sParam1, int iParam2) {
	switch (iParam2) {
	case 1019352240:
	case 2140335355:
	case 277073536: return -1;
	}
	switch (iParam2) {
	case -1775023605: return 0;

	case 917950949: return 1;

	case -1684314297: return 2;

	case -1546663824: return 3;

	case -2119253768: return 4;

	case 1639951086: return 5;

	case 1372660034: return 6;

	case -1524227787: return 7;

	case -311742370: return 8;

	case -2057190659: return 9;

	case -686545645: return 10;

	case -80377674: return 11;

	case -1055976551: return 12;

	case 1963750528: return 13;

	case 796226384: return 14;

	case 123428314: return 15;

	case 1944550961: return 16;

	case 2136911405: return 17;

	case -1309595991: return 18;

	case 1470319061: return 19;

	case -1716562576: return 20;

	case -1940582056: return 21;

	case 1089807219: return 22;

	case -1073830579: return 23;

	case 1071134407: return 24;

	case 1455567330: return 25;

	case 711089605: return 26;

	case 1206993109: return 27;

	case 32564956: return 28;

	case 314326195: return 29;

	case 1928884106: return 30;

	case 1565386395: return 31;

	case 2107621060: return 32;

	case 1618133209: return 33;

	case -951899470: return 34;

	case 2048696626: return 35;

	case 74017048: return 36;

	case -793495770: return 37;

	case 849089063: return 38;

	case 1192230427: return 39;

	case -763917073: return 40;

	case 337552605: return 41;

	case -2066166276: return 42;

	case 100935796: return 43;

	case -1409061796: return 44;

	case 1548327796: return 45;

	case -1459967458: return 46;

	case 129912816: return 47;

	case 1387715942: return 48;

	case -1871804242: return 49;

	case 1603728616: return 50;

	case -742053244: return 51;

	case 1586504577: return 52;

	case 1753976524: return 53;

	case -1469750959: return 54;

	case -388268096: return 55;

	case -1538681432: return 56;

	case -737856380: return 57;

	case 1261643197: return 58;

	case 436139458: return 59;

	case 1012782925: return 60;

	case -277214012: return 61;

	case -484264198: return 62;

	case 1708200656: return 63;

	case 758827473: return 64;

	case 1039283199: return 65;

	case 325801797: return 66;

	case -1946435033: return 67;

	case -1917346117: return 68;

	case -382139768: return 69;

	case 1725561361: return 70;

	case -266913369: return 71;

	case 511433871: return 72;

	case -1399656601: return 73;

	case -1560441083: return 74;

	case 1034503747: return 75;

	case -1170681301: return 76;

	case 660577126: return 77;

	case -818089340: return 78;

	case 1052642087: return 79;

	case 134497037: return 80;

	case -624267373: return 81;

	case -1178847967: return 82;

	case -197292861: return 83;

	case 730193962: return 84;

	case 1469472731: return 85;

	case -1918884694: return 86;

	case -1670727628: return 87;

	case -1389296468: return 88;

	case -405262373: return 89;

	case -1619609833: return 90;

	case 2060550302: return 91;

	case -1202647020: return 92;

	case 12584588: return 93;

	case -1559605744: return 94;

	case -88374898: return 95;

	case -292219126: return 96;

	case -634232984: return 97;

	case -1259754598: return 98;
	}
	switch (gameplay::get_hash_key(sParam1)) {
	case 1948764112: return -1;

	case 1099734529: return 12;

	case 1875475066: return 12;

	case -2027116220:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 75;
		}
		else {
			return 65;
		}
		break;

	case 973279522: return 26;

	case -344656041: return 47;

	case 437243648: return 1;

	case -1636967950: return 75;

	case -1759426263: return 1;

	case 1702259548: return 89;

	case 1471205329: return 73;

	case -33154131: return 22;

	case -1364624791: return 91;

	case 2048169112: return 26;

	case -2132107540: return 73;

	case -2097372400: return 38;

	case -106785870:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 40;
		}
		else {
			return 42;
		}
		break;

	case 1116120433: return 31;

	case 118598456: return 42;

	case 1480281490: return 47;

	case -652292269: return 75;

	case -1179283327: return 20;

	case 860620540: return 32;

	case -880004050: return 14;

	case -1386676768: return 52;

	case 2104696341: return 30;

	case -1952728474: return 6;

	case 1464947154: return 80;

	case -1134718043: return 13;

	case -440373586:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 67;
		}
		else {
			return 75;
		}
		break;

	case -1282504117:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 40;
		}
		else {
			return 42;
		}
		break;

	case -1035884623: return 73;

	case -1877294236: return 47;

	case 1289632992: return 73;

	case 1152623695: return 10;

	case 1705208746: return 26;

	case 1774176944: return 42;

	case -2016202731: return 89;

	case 474241973: return 16;

	case 1549424756: return 91;

	case 1915520024: return 82;

	case -654914345: return 13;

	case -1745115353: return 75;

	case 1466027815: return 26;

	case -161772432: return 10;

	case 74131599: return 90;

	case 363383562: return 89;

	case 736950162: return 38;

	case 1291882802: return 20;

	case -281772534: return 26;

	case -837798134: return 18;

	case 62456: return 56;

	case -800320369: return 3;

	case 1363941829: return 47;

	case 1586377801:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 28;
		}
		else {
			return 26;
		}
		break;

	case -1514257748: return 89;

	case -1023836894: return 6;

	case -1974105125: return 33;

	case -558386018: return 16;

	case -328314869: return 40;

	case -1903783095: return 40;

	case -1674924399: return 40;

	case -252323802: return 33;

	case 11466648: return 6;

	case 927130819:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 28;
		}
		else {
			return 26;
		}
		break;

	case -978943608:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 28;
		}
		else {
			return 26;
		}
		break;

	case 452144164:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 28;
		}
		else {
			return 26;
		}
		break;

	case 691194019:
		if (iParam0 == joaat("mp_m_freemode_01")) {
			return 28;
		}
		else {
			return 26;
		}
		break;

	case -1516865571: return 44;

	case 2130586285: return 32;

	case 386521802: return 3;

	case 579924440: return 33;

	case 741770527: return 31;

	case 1173403795: return 33;

	case -569087776: return 45;

	case -1344959389: return 89;

	case -211217527: return 64;

	case 86488838: return 53;

	case 705494964: return 52;

	case -137684175: return 30;

	case -979388709: return 41;

	case 324653646: return 43;

	case -518820414: return 52;

	case -1361737401: return 20;

	case 2010946386: return 8;

	case -894811920: return 10;

	case 165068612: return 28;

	case 1549427782: return 40;

	case -927613913: return 42;

	case 385144996: return 56;

	case -814626401: return 57;

	case -1248225809: return 52;

	case 1910378101: return 8;

	case -2124501642: return 91;

	case -1943747838: return 20;

	case -1570115700: return 75;

	case 931699147: return 62;

	case 1019520067: return 63;

	case -859358814: return 20;

	case -1157818866: return 58;

	case -247856505: return 47;

	case -1628534963: return 37;

	case -1051898870: return 33;

	case 1334929540: return 80;

	case 1097124907: return 64;

	case 747545215: return 62;

	case 61892743: return 96;

	case 501548332: return 15;

	case -244169717: return 48;

	case 421886905: return 37;

	case -1398791504: return 33;

	case -106152761: return 3;

	case 125491300: return 41;

	case -1576950557: return 52;

	case -1815115649: return 53;

	case -1043396870: return 59;

	case -1388618285: return 3;

	case -948484638: return 48;

	case 643387405: return 33;

	case 979630098: return 64;

	case 211688583: return 62;

	case 1343791995: return 60;

	case 576309246: return 20;

	case 949154944: return 40;

	case -622511834: return 42;

	case -275651969: return 11;

	case -1256283855: return 15;

	case 955525350: return 40;

	case 1252641873: return 22;

	case -2034766264: return 40;

	case 1748021562: return 22;

	case -657146050: return 30;

	case -955835485: return 19;

	case -1269959119: return 40;

	case -1478763187: return 4;

	case -1881592504: return 15;

	case 2115996117: return 62;

	case 1824417551: return 45;

	case 1502068898: return 24;

	case -2019287742: return 22;

	case -1780827729: return 80;

	case -1966497207: return 25;

	case -2126999769: return 30;

	case 2014772448: return 30;

	case 1705760778: return 44;

	case 497993745: return 15;

	case 1142887665: return 9;

	case 22777707: return 3;

	case 799173624: return 16;

	case -410297401: return 17;

	case 214410819: return 75;

	case -2098342992: return 23;

	case -1280920283: return 64;

	case -1501455653: return 16;

	case 2117454408: return 25;

	case -1945704982: return 32;

	case -1581870771: return 31;

	case -1350521631: return 10;

	case -954508266: return 5;

	case -716244867: return 4;

	case 185361399: return 52;

	case -1208107213: return 35;

	case -812421538: return 30;

	case -566096965: return 32;

	case -316757644: return 38;

	case -103496992: return 24;

	case 391708136: return 52;

	case 616667309: return 20;

	case 870102755: return 10;

	case 1093030262: return 92;

	case 1378218869: return 0;

	case 332555747: return 80;

	case 1077526193: return 34;

	case 1332632858: return 91;

	case 1556379590: return 10;

	case 1780093553: return 22;

	case 2001284303: return 14;

	case -2059941716: return 30;

	case -1759875983: return 40;

	case -1521153818: return 24;
	}
	if (iParam2 == 0 && gameplay::is_string_null_or_empty(sParam1)) {
		return -1;
	}
	switch (iParam2) {
	case -518474626: return -1;
	}
	return -1;
}

// Position - 0xE317
bool func_73(var *uParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;

	func_80(uParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
	if (entity::does_entity_exist(iParam3) && !ped::is_ped_injured(iParam3)) {
		iVar0 = entity::get_entity_model(iParam3);
	}
	switch (iParam2) {
	case 0:
		switch (iParam1) {
		case 0:
			func_80(uParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
			break;

		case 1:
			func_80(uParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
			break;

		case 2:
			func_80(uParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
			break;

		case 3:
			func_80(uParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
			break;

		case 4:
			func_80(uParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
			break;

		case 5:
			func_80(uParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
			break;

		case 6:
			func_80(uParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
			break;

		case 7:
			func_80(uParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
			break;

		case 8:
			func_80(uParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
			break;

		case 9:
			if (func_79() || func_78()) {
				iVar1 = 400;
				if (func_77() && (func_76() || func_75())) {
					iVar1 = 0;
				}
				func_80(uParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1,
						2);
			}
			break;

		case 10:
			func_80(uParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
			break;

		case 11:
			func_80(uParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
			break;

		case 12:
			func_80(uParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
			break;

		case 13:
			func_80(uParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
			break;

		case 14:
			func_80(uParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
			break;

		case 15:
			func_80(uParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
			break;

		case 16:
			func_80(uParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
			break;

		case 17:
			func_80(uParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
			break;

		case 18:
			func_80(uParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
			break;

		case 19:
			func_80(uParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
			break;

		case 20:
			func_80(uParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
			break;

		default: func_74(uParam0, iParam2, iParam1, 21); break;
		}
		break;

	case 1:
		switch (iParam1) {
		case 0:
			if (func_79() || func_78()) {
				iVar1 = 450;
				if (func_77() && (func_76() || func_75())) {
					iVar1 = 0;
				}
				func_80(uParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1,
						0);
			}
			break;

		case 1:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
			break;

		case 2:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
			break;

		case 3:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
			break;

		case 4:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
			break;

		case 5:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
			break;

		case 6:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
			break;

		case 7:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
			break;

		case 8:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
			break;

		case 9:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
			break;

		case 10:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
			break;

		case 11:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
			break;

		case 12:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
			break;

		case 13:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
			break;

		case 14:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
			break;

		case 15:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
			break;

		case 16:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
			break;

		case 17:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
			break;

		case 18:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
			break;

		case 19:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
			break;

		case 20: break;

		case 21:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
			break;

		case 22:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
			break;

		case 23:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
			break;

		case 24:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
			break;

		case 25:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
			break;

		case 26:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
			break;

		case 27:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
			break;

		case 28:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
			break;

		case 29:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
			break;

		case 30:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
			break;

		case 31:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
			break;

		case 32:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
			break;

		case 33:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
			break;

		case 34:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
			break;

		case 35:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
			break;

		case 36:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
			break;

		case 37:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
			break;

		case 38:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
			break;

		case 39:
			func_80(uParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
			break;

		default: func_74(uParam0, iParam2, iParam1, 40); break;
		}
		break;

	case 2:
		switch (iParam1) {
		case 0:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
			break;

		case 1:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
			break;

		case 2:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
			break;

		case 3:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
			break;

		case 4:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
			break;

		case 5:
			if (func_79() || func_78()) {
				iVar1 = 380;
				if (func_77() && (func_76() || func_75())) {
					iVar1 = 0;
				}
				func_80(uParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1,
						3);
			}
			break;

		case 6:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
			break;

		case 7:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
			break;

		case 8:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
			break;

		case 9:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
			break;

		case 10:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
			break;

		case 11:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
			break;

		case 12:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
			break;

		case 13:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
			break;

		case 14:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
			break;

		case 15:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
			break;

		case 16:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
			break;

		case 17:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
			break;

		case 18:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
			break;

		case 19:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
			break;

		case 20:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
			break;

		case 21:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
			break;

		case 22:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
			break;

		case 23:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
			break;

		case 24:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
			break;

		case 25:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
			break;

		case 26:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
			break;

		case 27:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
			break;

		case 28:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
			break;

		case 29:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
			break;

		case 30:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
			break;

		case 31:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
			break;

		case 32:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
			break;

		case 33:
			func_80(uParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
			break;

		default: func_74(uParam0, iParam2, iParam1, 34); break;
		}
		break;

	case 3:
	case 4:
		switch (iParam1) {
		case 0:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2,
					system::round(system::to_float(20000) * Global_262145.f_2906), 0);
			break;

		case 1:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2,
					system::round(system::to_float(1400) * Global_262145.f_2907), 2);
			break;

		case 2:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2,
					system::round(system::to_float(9750) * Global_262145.f_2908), 3);
			break;

		case 3:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2,
					system::round(system::to_float(2150) * Global_262145.f_2909), 0);
			break;

		case 4:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2,
					system::round(system::to_float(10000) * Global_262145.f_2910), 0);
			break;

		case 54:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2,
					system::round(system::to_float(12400) * Global_262145.f_2911), 1);
			break;

		case 5:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2,
					system::round(system::to_float(3500) * Global_262145.f_2912), 0);
			break;

		case 6:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2,
					system::round(system::to_float(4950) * Global_262145.f_2913), 2);
			break;

		case 55:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2,
					system::round(system::to_float(1350) * Global_262145.f_2914), 1);
			break;

		case 7:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2,
					system::round(system::to_float(1450) * Global_262145.f_2915), 0);
			break;

		case 8:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2,
					system::round(system::to_float(2700) * Global_262145.f_2916), 7);
			break;

		case 9:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2,
					system::round(system::to_float(1200) * Global_262145.f_2917), 0);
			break;

		case 10:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2,
					system::round(system::to_float(1500) * Global_262145.f_2918), 0);
			break;

		case 11:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2,
					system::round(system::to_float(2650) * Global_262145.f_2919), 0);
			break;

		case 56:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2,
					system::round(system::to_float(1900) * Global_262145.f_2920), 1);
			break;

		case 12:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2,
					system::round(system::to_float(4950) * Global_262145.f_2921), 2);
			break;

		case 57:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2,
					system::round(system::to_float(2400) * Global_262145.f_2922), 1);
			break;

		case 58:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2,
					system::round(system::to_float(5100) * Global_262145.f_2923), 1);
			break;

		case 59:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2,
					system::round(system::to_float(7400) * Global_262145.f_2924), 1);
			break;

		case 60:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2,
					system::round(system::to_float(10000) * Global_262145.f_2925), 1);
			break;

		case 17:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2,
					system::round(system::to_float(2400) * Global_262145.f_2930), 2);
			break;

		case 18:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2,
					system::round(system::to_float(5100) * Global_262145.f_2931), 2);
			break;

		case 19:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2,
					system::round(system::to_float(3600) * Global_262145.f_2932), 2);
			break;

		case 20:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2,
					system::round(system::to_float(10000) * Global_262145.f_2933), 3);
			break;

		case 21:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2,
					system::round(system::to_float(12500) * Global_262145.f_2934), 3);
			break;

		case 22:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2,
					system::round(system::to_float(10000) * Global_262145.f_2935), 3);
			break;

		case 23:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2,
					system::round(system::to_float(5000) * Global_262145.f_2936), 3);
			break;

		case 24:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2,
					system::round(system::to_float(7500) * Global_262145.f_2937), 3);
			break;

		case 25:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2,
					system::round(system::to_float(3750) * Global_262145.f_2938), 2);
			break;

		case 26:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2,
					system::round(system::to_float(3750) * Global_262145.f_2939), 3);
			break;

		case 27:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2,
					system::round(system::to_float(4800) * Global_262145.f_2940), 3);
			break;

		case 28:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2,
					system::round(system::to_float(3500) * Global_262145.f_2941), 3);
			break;

		case 61:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2,
					system::round(system::to_float(12350) * Global_262145.f_2942), 1);
			break;

		case 62:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2,
					system::round(system::to_float(1900) * Global_262145.f_2943), 1);
			break;

		case 63:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2,
					system::round(system::to_float(4500) * Global_262145.f_2944), 1);
			break;

		case 64:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2,
					system::round(system::to_float(12250) * Global_262145.f_2945), 1);
			break;

		case 65:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2,
					system::round(system::to_float(12300) * Global_262145.f_2946), 1);
			break;

		case 29:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2,
					system::round(system::to_float(2500) * Global_262145.f_2947), 0);
			break;

		case 30:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2,
					system::round(system::to_float(10000) * Global_262145.f_2948), 0);
			break;

		case 31:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2,
					system::round(system::to_float(10000) * Global_262145.f_2949), 0);
			break;

		case 66:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2,
					system::round(system::to_float(7500) * Global_262145.f_2950), 1);
			break;

		case 32:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2,
					system::round(system::to_float(5000) * Global_262145.f_2951), 2);
			break;

		case 33:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2,
					system::round(system::to_float(7300) * Global_262145.f_2952), 3);
			break;

		case 34:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2,
					system::round(system::to_float(7250) * Global_262145.f_2953), 2);
			break;

		case 35:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2,
					system::round(system::to_float(11900) * Global_262145.f_2954), 0);
			break;

		case 36:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2,
					system::round(system::to_float(2750) * Global_262145.f_2955), 0);
			break;

		case 37:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2,
					system::round(system::to_float(1750) * Global_262145.f_2956), 0);
			break;

		case 38:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2,
					system::round(system::to_float(7300) * Global_262145.f_2957), 3);
			break;

		case 39:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2,
					system::round(system::to_float(3250) * Global_262145.f_2958), 2);
			break;

		case 40:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2,
					system::round(system::to_float(1000) * Global_262145.f_2959), 0);
			break;

		case 67:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2,
					system::round(system::to_float(5000) * Global_262145.f_2960), 1);
			break;

		case 41:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2,
					system::round(system::to_float(7500) * Global_262145.f_2961), 2);
			break;

		case 68:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2,
					system::round(system::to_float(5100) * Global_262145.f_2962), 1);
			break;

		case 42:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2,
					system::round(system::to_float(5050) * Global_262145.f_2963), 0);
			break;

		case 43:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2,
					system::round(system::to_float(2450) * Global_262145.f_2964), 2);
			break;

		case 44:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2,
					system::round(system::to_float(4950) * Global_262145.f_2965), 0);
			break;

		case 45:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2,
					system::round(system::to_float(5100) * Global_262145.f_2966), 0);
			break;

		case 46:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2,
					system::round(system::to_float(12250) * Global_262145.f_2967), 0);
			break;

		case 47:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2,
					system::round(system::to_float(1150) * Global_262145.f_2968), 3);
			break;

		case 48:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2,
					system::round(system::to_float(7500) * Global_262145.f_2969), 3);
			break;

		case 49:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2,
					system::round(system::to_float(7600) * Global_262145.f_2970), 3);
			break;

		case 50:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2,
					system::round(system::to_float(2600) * Global_262145.f_2971), 2);
			break;

		case 51:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2,
					system::round(system::to_float(2500) * Global_262145.f_2972), 3);
			break;

		case 52:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2,
					system::round(system::to_float(7450) * Global_262145.f_2973), 3);
			break;

		case 53:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2,
					system::round(system::to_float(7500) * Global_262145.f_2974), 0);
			break;

		case 69:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2,
					system::round(system::to_float(10000) * Global_262145.f_2975), 1);
			break;

		case 70:
			func_80(uParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2,
					system::round(system::to_float(2500) * Global_262145.f_2976), 2);
			break;
		}
		if (iVar0 == joaat("mp_m_freemode_01")) {
			switch (iParam1) {
			case 73:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 74:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 75:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 76:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 77:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 78:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 79:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 80:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 81:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 82:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 83:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 84:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 85:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 86:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 90:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 91:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 124:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 125:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 87:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000",
						"torsoDecal", iParam2, system::round(system::to_float(100) * Global_262145.f_2977), 0);
				break;

			case 88:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001",
						"torsoDecal", iParam2, system::round(system::to_float(100) * Global_262145.f_2978), 0);
				break;

			case 89:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002",
						"torsoDecal", iParam2, system::round(system::to_float(100) * Global_262145.f_2979), 0);
				break;

			case 93:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 94:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 95:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 96:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 97:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 98:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 99:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 100:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 101:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 102:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 103:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 104:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 105:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 106:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 107:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 108:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 109:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 110:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 111:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 112:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 113:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 114:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 115:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 116:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 117:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 123:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 13:
				func_80(uParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2,
						system::round(system::to_float(5000) * Global_262145.f_2926), 0);
				break;

			case 14:
				func_80(uParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_B", "crewLogo", iParam2,
						system::round(system::to_float(10000) * Global_262145.f_2927), 0);
				break;

			case 15:
				func_80(uParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_C", "crewLogo", iParam2,
						system::round(system::to_float(10000) * Global_262145.f_2928), 2);
				break;

			case 16:
				func_80(uParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_D", "crewLogo", iParam2,
						system::round(system::to_float(5000) * Global_262145.f_2929), 0);
				break;

			case 71:
				func_80(uParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_E", "crewLogo", iParam2,
						system::round(system::to_float(10000) * Global_262145.f_2929), 0);
				break;

			case 72:
				func_80(uParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_F", "crewLogo", iParam2,
						system::round(system::to_float(10000) * Global_262145.f_2929), 0);
				break;
			}
		}
		else if (iVar0 == joaat("mp_f_freemode_01")) {
			switch (iParam1) {
			case 73:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 74:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 75:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 76:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 77:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 78:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 79:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 80:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 81:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 82:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 83:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 84:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 85:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 92:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051",
						"torsoDecal", iParam2, 100, 0);
				break;

			case 87:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000",
						"torsoDecal", iParam2, system::round(system::to_float(100) * Global_262145.f_2977), 0);
				break;

			case 88:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001",
						"torsoDecal", iParam2, system::round(system::to_float(100) * Global_262145.f_2978), 0);
				break;

			case 89:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002",
						"torsoDecal", iParam2, system::round(system::to_float(100) * Global_262145.f_2979), 0);
				break;

			case 93:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 94:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 95:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 96:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 97:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 98:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 99:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 100:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 101:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 102:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 103:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 104:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 105:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 106:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 107:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 108:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 109:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 110:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 111:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 112:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 113:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 114:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000",
						"hairOverlay", iParam2, 100, 0);
				break;

			case 115:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 116:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 117:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 118:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 119:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 120:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 121:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 122:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 123:
				func_80(uParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay",
						iParam2, 100, 0);
				break;

			case 13:
				func_80(uParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2,
						system::round(system::to_float(5000) * Global_262145.f_2926), 0);
				break;

			case 14:
				func_80(uParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_B", "crewLogo", iParam2,
						system::round(system::to_float(5000) * Global_262145.f_2927), 0);
				break;

			case 15:
				func_80(uParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_C", "crewLogo", iParam2,
						system::round(system::to_float(10000) * Global_262145.f_2928), 2);
				break;

			case 16:
				func_80(uParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_D", "crewLogo", iParam2,
						system::round(system::to_float(10000) * Global_262145.f_2929), 0);
				break;
			}
		}
		break;
	}
	if ((iParam2 == 3 || iParam2 == 4) && iParam1 >= 129) {
		func_74(uParam0, iParam2, iParam1, 129);
	}
	if (iParam4 == 22) {
		uParam0->f_7 *= 2;
	}
	return uParam0->f_11 != -1;
}

// Position - 0x11403
void func_74(var *uParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	struct<8> Var2;

	iVar0 = iParam2 - iParam3;
	iVar1 = dlc1::_get_num_decorations(iParam1);
	if (iVar1 > 0 && iVar0 < iVar1) {
		if (dlc1::_0xFF56381874F82086(iParam1, iVar0, &Var2)) {
			if (!dlc1::_is_dlc_data_empty(Var2)) {
				uParam0->f_11 = iParam2;
				MemCopy(uParam0, {Var2.f_7}, 4);
				uParam0->f_5 = Var2.f_3;
				uParam0->f_4 = Var2.f_2;
				uParam0->f_8 = Var2.f_6;
				uParam0->f_6 = iParam1;
				uParam0->f_7 = Var2.f_4;
				uParam0->f_9 = iParam2 / 32;
				uParam0->f_10 = iParam2 % 32;
				uParam0->f_12 = Var2.f_5;
			}
		}
	}
}

// Position - 0x11495
int func_75() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (gameplay::is_bit_set(Global_25, 5)) {
		if (gameplay::is_bit_set(Global_25, 1) || gameplay::is_bit_set(Global_25, 3)) {
			return 1;
		}
		else {
			return 0;
		}
	}
	if (stats::stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1)) {
		if (gameplay::is_bit_set(iVar0, 5)) {
			if (gameplay::is_bit_set(iVar0, 1) || gameplay::is_bit_set(iVar0, 3)) {
				return 1;
			}
			else {
				return 0;
			}
		}
	}
	if (stats::stat_slot_is_loaded(0)) {
		if (Global_139180.f_3) {
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (stats::stat_get_int(iVar2, &iVar1, -1)) {
				if (gameplay::is_bit_set(iVar1, 5)) {
					return 1;
				}
			}
		}
	}
	if (gameplay::_0x5AA3BEFA29F03AD4()) {
		iVar3 = gameplay::get_profile_setting(866);
		if (gameplay::is_bit_set(iVar3, 1) || gameplay::is_bit_set(iVar3, 3)) {
			return 1;
		}
	}
	if (network::network_is_signed_in()) {
		if (network::_network_are_ros_available()) {
			if (network::_0x91B87C55093DE351()) {
				stats::stat_get_int(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				gameplay::set_bit(&iVar4, 1);
				gameplay::set_bit(&iVar4, 3);
				gameplay::set_bit(&iVar4, 5);
				gameplay::set_bit(&Global_25, 1);
				gameplay::set_bit(&Global_25, 3);
				gameplay::set_bit(&Global_25, 5);
				stats::stat_set_int(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (gameplay::_0x5AA3BEFA29F03AD4()) {
					iVar4 = gameplay::get_profile_setting(866);
					gameplay::set_bit(&iVar4, 1);
					gameplay::set_bit(&iVar4, 3);
					stats::_0xDAC073C7901F9E15(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x115E9
int func_76() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (gameplay::is_bit_set(Global_25, 6)) {
		if (gameplay::is_bit_set(Global_25, 2) || gameplay::is_bit_set(Global_25, 4)) {
			return 1;
		}
		else {
			return 0;
		}
	}
	if (stats::stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1)) {
		if (gameplay::is_bit_set(iVar0, 6)) {
			if (gameplay::is_bit_set(iVar0, 2) || gameplay::is_bit_set(iVar0, 4)) {
				return 1;
			}
			else {
				return 0;
			}
		}
	}
	if (stats::stat_slot_is_loaded(0)) {
		if (Global_139180.f_3) {
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (stats::stat_get_int(iVar2, &iVar1, -1)) {
				if (gameplay::is_bit_set(iVar1, 8)) {
					return 1;
				}
			}
		}
	}
	if (gameplay::_0x5AA3BEFA29F03AD4()) {
		iVar3 = gameplay::get_profile_setting(866);
		if (gameplay::is_bit_set(iVar3, 2) || gameplay::is_bit_set(iVar3, 4)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x116BA
int func_77() {
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

// Position - 0x11775
int func_78() { return 1; }

// Position - 0x1177E
int func_79() { return 1; }

// Position - 0x11787
void func_80(var *uParam0, int iParam1, int iParam2, char *sParam3, char *sParam4, char *sParam5, char *sParam6,
			 int iParam7, int iParam8, int iParam9) {
	char cVar0[32];

	uParam0->f_11 = iParam1;
	StringCopy(uParam0, sParam3, 16);
	uParam0->f_4 = gameplay::get_hash_key(sParam4);
	uParam0->f_5 = gameplay::get_hash_key(sParam5);
	uParam0->f_8 = gameplay::get_hash_key(sParam6);
	uParam0->f_6 = iParam7;
	uParam0->f_7 = iParam8;
	uParam0->f_9 = iParam1 / 32;
	uParam0->f_10 = iParam1 % 32;
	uParam0->f_12 = iParam9;
	if (entity::does_entity_exist(iParam2) && !ped::is_ped_injured(iParam2)) {
		if (uParam0->f_6 == 0 || uParam0->f_6 == 1 || uParam0->f_6 == 2) {
		}
		else if (uParam0->f_6 == 3 || uParam0->f_6 == 4) {
			StringCopy(&cVar0, "", 32);
			if (uParam0->f_11 == 13 || uParam0->f_11 == 14 || uParam0->f_11 == 15 || uParam0->f_11 == 16 ||
				uParam0->f_11 == 71 || uParam0->f_11 == 72) {
				StringConCat(&cVar0, "FM_", 32);
				StringConCat(&cVar0, "CREW_", 32);
				if (entity::get_entity_model(iParam2) == joaat("mp_m_freemode_01")) {
					StringConCat(&cVar0, "M_", 32);
				}
				else {
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			else if (gameplay::are_strings_equal(sParam6, "torsoDecal") ||
					 gameplay::are_strings_equal(sParam6, "hairOverlay")) {
				StringCopy(&cVar0, sParam5, 32);
			}
			else {
				if (uParam0->f_11 == 0 || uParam0->f_11 == 1 || uParam0->f_11 == 2 || uParam0->f_11 == 4 ||
					uParam0->f_11 == 3 || uParam0->f_11 == 54 || uParam0->f_11 == 5 || uParam0->f_11 == 6 ||
					uParam0->f_11 == 55 || uParam0->f_11 == 7 || uParam0->f_11 == 8 || uParam0->f_11 == 9 ||
					uParam0->f_11 == 10 || uParam0->f_11 == 11 || uParam0->f_11 == 56 || uParam0->f_11 == 12 ||
					uParam0->f_11 == 57 || uParam0->f_11 == 58 || uParam0->f_11 == 59 || uParam0->f_11 == 60) {
					StringConCat(&cVar0, "FM_Tat_Award_", 32);
				}
				else {
					StringConCat(&cVar0, "FM_Tat_", 32);
				}
				if (entity::get_entity_model(iParam2) == joaat("mp_m_freemode_01") || uParam0->f_11 == 20) {
					StringConCat(&cVar0, "M_", 32);
				}
				else {
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			uParam0->f_5 = gameplay::get_hash_key(&cVar0);
			if (ped::_get_tattoo_zone(uParam0->f_4, uParam0->f_5) == 7) {
				uParam0->f_11 = -1;
			}
		}
	}
}

// Position - 0x11A3E
bool func_81(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (iParam0 == -1) {
		return false;
	}
	iVar0 = func_83(iParam0, iParam1);
	iVar1 = func_82(iParam0);
	if (iVar1 < 0 || iVar1 >= 32) {
		return false;
	}
	return gameplay::is_bit_set(iVar0, iVar1);
}

// Position - 0x11A80
int func_82(int iParam0) { return iParam0 % 32; }

// Position - 0x11A8D
int func_83(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = func_107(func_84(iParam0), iParam1, 0);
	return iVar0;
}

// Position - 0x11AA6
int func_84(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = func_87(iVar0);
	if (func_86() == 0 || func_85() == 0 || func_86() == 999 && func_85() == 999) {
		switch (iVar1) {
		case 0: return 1043;

		case 1: return 1044;

		case 2: return 1045;

		case 3: return 1046;

		case 4: return 1047;

		case 5: return 1048;

		case 6: return 1482;

		case 7: return 1483;

		case 8: return 1484;

		case 9: return 1485;

		case 10: return 1941;

		case 11: return 1942;

		case 12: return 1943;

		case 13: return 2405;

		case 14: return 2425;

		case 15: return 2428;

		case 16: return 2431;

		case 17: return 2594;

		case 18: return 2597;

		case 19: return 2600;

		case 20: return 3756;

		case 21: return 3759;

		case 22: return 3834;

		case 23: return 3837;

		case 24: return 3840;

		case 25: return 3843;

		case 26: return 5334;

		case 27: return 5337;
		}
	}
	return 6022;
}

// Position - 0x11C95
int func_85() { return Global_25191; }

// Position - 0x11CA0
int func_86() { return Global_25190; }

// Position - 0x11CAB
int func_87(int iParam0) { return iParam0 / 32; }

// Position - 0x11CB8
int func_88(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!ped::is_ped_injured(iParam0)) {
		if (entity::get_entity_model(iParam0) == joaat("mp_m_freemode_01")) {
			iVar0 = ped::get_ped_drawable_variation(iParam0, 11);
			iVar2 = func_107(1751, -1, 0);
			if (iVar0 > 15) {
				iVar3 = func_135(iParam0, 11, -1);
				if (iVar3 >= 237) {
					iVar4 = func_121(joaat("mp_m_freemode_01"), iVar3, 11, 3);
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1113995558, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1467682989, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar4, 362493804, 0)) {
						if (iVar2 == 671171671) {
							return 1;
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1393156190, 0) &&
							 !dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1237899132, 0)) {
						return 1;
					}
				}
			}
		}
		else if (entity::get_entity_model(iParam0) == joaat("mp_f_freemode_01")) {
			iVar0 = ped::get_ped_drawable_variation(iParam0, 11);
			iVar1 = ped::get_ped_texture_variation(iParam0, 11);
			iVar2 = func_107(1751, -1, 0);
			if (iVar0 == 3) {
				if (iVar1 == 14) {
					return 1;
				}
			}
			else if (iVar0 > 15) {
				iVar5 = func_135(iParam0, 11, -1);
				if (iVar5 >= 256) {
					iVar6 = func_121(joaat("mp_f_freemode_01"), iVar5, 11, 4);
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, 1113995558, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1467682989, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar6, 362493804, 0)) {
						if (iVar2 == 1911627074) {
							return 1;
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1393156190, 0) &&
							 !dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1237899132, 0)) {
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

// Position - 0x11E5A
int func_89(int iParam0) {
	int iVar0;

	if (network::network_is_activity_session()) {
		iVar0 = Global_1591201[player::player_id() /*602*/].f_96.f_28;
		if (iVar0 != -1 && iVar0 < 4) {
			if (func_90(iVar0) != -1 && func_90(iVar0) != 0) {
				return 1;
			}
		}
	}
	if (!ped::is_ped_injured(iParam0)) {
		if (entity::get_entity_model(iParam0) == joaat("mp_m_freemode_01")) {
			if (ped::get_ped_drawable_variation(iParam0, 11) == 15) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x11ED6
int func_90(int iParam0) {
	if (iParam0 <= -1 || iParam0 >= 4) {
		return -1;
	}
	return Global_2443905.f_5859[iParam0];
}

// Position - 0x11EFE
int func_91(int iParam0, int iParam1) {
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

	if (!ped::is_ped_injured(iParam0)) {
		if (entity::get_entity_model(iParam0) == joaat("mp_m_freemode_01")) {
			iVar0 = ped::get_ped_drawable_variation(iParam0, 11);
			iVar1 = ped::get_ped_texture_variation(iParam0, 11);
			switch (iVar0) {
			case 0:
				switch (iVar1) {
				case 1:
				case 3:
				case 5:
				case 7:
				case 4:
				case 8:
				case 11: return 1;
				}
				break;

			case 1:
				switch (iVar1) {
				case 3:
				case 5:
				case 6:
				case 8:
				case 4:
				case 14: return 1;

				case 1:
				case 7:
				case 12:
					iVar2 = func_97(joaat("mp_m_freemode_01"), 11, func_135(iParam0, 11, -1), 0);
					if (iVar1 == 1 && iVar2 == 88 || iVar1 == 7 && iVar2 == 89 || iVar1 == 12 && iVar2 == 87) {
						return 1;
					}
					break;
				}
				break;

			case 2:
				switch (iVar1) {
				case 9: return 1;
				}
				break;

			case 5:
				if (!iParam1) {
					if (func_81(13, -1)) {
						return 1;
					}
					else if (func_81(14, -1)) {
						return 1;
					}
					else if (func_81(15, -1)) {
						return 1;
					}
					else if (func_81(16, -1)) {
						return 1;
					}
					else if (func_81(71, -1)) {
						return 1;
					}
					else if (func_81(72, -1)) {
					}
					else if (func_93(player::player_id(), 1) &&
							 Global_1619421[player::player_id() /*390*/].f_11.f_68.f_21 != 0) {
						return 1;
					}
				}
				break;

			default:
				if (iVar0 > 15) {
					iVar3 = func_135(iParam0, 11, -1);
					if (iVar3 >= 237) {
						iVar4 = func_121(joaat("mp_m_freemode_01"), iVar3, 11, 3);
						if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1113995558, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1467682989, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar4, 362493804, 0)) {
							return 1;
						}
					}
				}
				break;
			}
			iVar0 = ped::get_ped_drawable_variation(iParam0, 8);
			iVar1 = ped::get_ped_texture_variation(iParam0, 8);
			switch (iVar0) {
			case 0:
				switch (iVar1) {
				case 1:
				case 3:
				case 5:
				case 7:
				case 4:
				case 8:
				case 11: return 1;
				}
				break;

			case 1:
				switch (iVar1) {
				case 3:
				case 5:
				case 6:
				case 8:
				case 4:
				case 14:
				case 1:
				case 7:
				case 12: return 1;
				}
				break;

			case 2:
				switch (iVar1) {
				case 1:
				case 3:
				case 5:
				case 7:
				case 4:
				case 8:
				case 11: return 1;
				}
				break;

			case 14:
				switch (iVar1) {
				case 3:
				case 5:
				case 6:
				case 8:
				case 4:
				case 14:
				case 1:
				case 7:
				case 12: return 1;
				}
				break;

			default:
				if (iVar0 > 15) {
					iVar5 = func_135(iParam0, 8, -1);
					if (iVar5 >= 241) {
						iVar6 = func_121(joaat("mp_m_freemode_01"), iVar5, 8, 3);
						if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, 1113995558, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1467682989, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar6, 362493804, 0)) {
							return 1;
						}
					}
				}
				break;
			}
		}
		else if (entity::get_entity_model(iParam0) == joaat("mp_f_freemode_01")) {
			iVar0 = ped::get_ped_drawable_variation(iParam0, 11);
			iVar1 = ped::get_ped_texture_variation(iParam0, 11);
			switch (iVar0) {
			case 0:
				switch (iVar1) {
				case 1:
				case 2: return 1;

				case 7:
				case 4:
				case 9:
					iVar7 = func_97(joaat("mp_f_freemode_01"), 11, func_135(iParam0, 11, -1), 0);
					if (iVar1 == 7 && iVar7 == 88 || iVar1 == 4 && iVar7 == 89 || iVar1 == 9 && iVar7 == 87) {
						return 1;
					}
					break;
				}
				break;

			case 2:
				switch (iVar1) {
				case 0:
				case 1:
				case 2:
				case 3:
				case 4: return 1;
				}
				break;

			case 3:
				switch (iVar1) {
				case 14: return 1;
				}
				break;

			case 11:
				switch (iVar1) {
				case 10:
				case 11:
				case 15: return 1;
				}
				break;

			default:
				if (iVar0 > 15) {
					iVar8 = func_135(iParam0, 11, -1);
					if (iVar8 >= 256) {
						iVar9 = func_121(joaat("mp_f_freemode_01"), iVar8, 11, 4);
						if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, 1113995558, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar9, -1467682989, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar9, 362493804, 0)) {
							return 1;
						}
					}
				}
				break;
			}
			iVar0 = ped::get_ped_drawable_variation(iParam0, 8);
			iVar1 = ped::get_ped_texture_variation(iParam0, 8);
			switch (iVar0) {
			case 0:
				switch (iVar1) {
				case 1:
				case 2: return 1;

				case 7:
				case 4:
				case 9:
					iVar10 = func_97(joaat("mp_f_freemode_01"), 11, func_135(iParam0, 11, -1), 0);
					if (iVar1 == 7 && iVar10 == 88 || iVar1 == 4 && iVar10 == 89 || iVar1 == 9 && iVar10 == 87) {
						return 1;
					}
					break;
				}
				break;

			case 1:
				switch (iVar1) {
				case 1:
				case 2: return 1;

				case 7:
				case 4:
				case 9:
					iVar11 = func_97(joaat("mp_f_freemode_01"), 11, func_135(iParam0, 11, -1), 0);
					if (iVar1 == 7 && iVar11 == 88 || iVar1 == 4 && iVar11 == 89 || iVar1 == 9 && iVar11 == 87) {
						return 1;
					}
					break;
				}
				break;

			case 2:
				switch (iVar1) {
				case 1:
				case 3:
				case 5:
				case 7:
				case 4:
				case 8:
				case 11: return 1;
				}
				break;

			case 11:
				switch (iVar1) {
				case 10:
				case 11:
				case 15: return 1;
				}
				break;

			case 14:
				switch (iVar1) {
				case 3:
				case 5:
				case 6:
				case 8:
				case 4:
				case 14:
				case 1:
				case 7:
				case 12: return 1;
				}
				break;

			default:
				if (iVar0 > 15) {
					iVar12 = func_135(iParam0, 8, -1);
					if (iVar12 >= 136) {
						iVar13 = func_121(joaat("mp_f_freemode_01"), iVar12, 8, 4);
						if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, 1113995558, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1467682989, 0) ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar13, 362493804, 0)) {
							return 1;
						}
					}
				}
				break;
			}
		}
		if (func_92(iParam0)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x126D9
bool func_92(int iParam0) {
	struct<5> Var0;
	bool bVar17;
	int iVar18;
	int iVar19;

	bVar17 = entity::get_entity_model(iParam0) == joaat("mp_m_freemode_01");
	iVar18 = ped::get_ped_drawable_variation(iParam0, 11);
	iVar19 = ped::get_ped_texture_variation(iParam0, 11);
	if (bVar17) {
		dlc1::get_shop_ped_component(103980309, &Var0);
	}
	else {
		dlc1::get_shop_ped_component(-31075674, &Var0);
	}
	if (iVar18 == Var0.f_3 && iVar19 == Var0.f_4) {
		return true;
	}
	return false;
}

// Position - 0x1273C
int func_93(int iParam0, int iParam1) { return func_94(iParam0, iParam1, 1); }

// Position - 0x1274D
int func_94(int iParam0, bool bParam1, int iParam2) {
	int iVar0;

	if (iParam0 == func_96()) {
		return 0;
	}
	if (!bParam1) {
		if (func_95(iParam0, iParam2)) {
			return 0;
		}
	}
	iVar0 = Global_1619421[iParam0 /*390*/].f_11;
	if (iVar0 != func_96() && Global_1619421[iVar0 /*390*/].f_11.f_289 == iParam2) {
		return 1;
	}
	return 0;
}

// Position - 0x127A9
bool func_95(int iParam0, int iParam1) {
	if (iParam0 != func_96()) {
		if (Global_1619421[iParam0 /*390*/].f_11 != func_96()) {
			if (Global_1619421[iParam0 /*390*/].f_11 == iParam0 &&
				Global_1619421[iParam0 /*390*/].f_11.f_289 == iParam1) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x127F8
int func_96() { return -1; }

// Position - 0x12801
int func_97(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	int iVar23;

	if (iParam0 == joaat("mp_m_freemode_01")) {
		if (iParam1 == 11) {
			if (iParam2 == 1) {
				return 73;
			}
			else if (iParam2 == 3) {
				return 74;
			}
			else if (iParam2 == 5) {
				return 75;
			}
			else if (iParam2 == 7) {
				return 76;
			}
			else if (iParam2 == 4) {
				return 77;
			}
			else if (iParam2 == 8) {
				return 78;
			}
			else if (iParam2 == 11) {
				return 79;
			}
			else if (iParam2 == 19) {
				return 80;
			}
			else if (iParam2 == 21) {
				return 81;
			}
			else if (iParam2 == 22) {
				return 82;
			}
			else if (iParam2 == 24) {
				return 83;
			}
			else if (iParam2 == 20) {
				return 84;
			}
			else if (iParam2 == 30) {
				return 85;
			}
			else if (iParam2 == 23) {
				if (func_101(89, -1)) {
					return 89;
				}
			}
			else if (iParam2 == 17) {
				if (func_101(88, -1)) {
					return 88;
				}
			}
			else if (iParam2 == 28) {
				if (func_101(87, -1)) {
					return 87;
				}
			}
			else if (iParam2 == 41) {
				return 86;
			}
			else if (iParam2 >= 237) {
				iVar0 = func_121(iParam0, iParam2, 11, 3);
				if (iVar0 != -1) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1113995558, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar0, 362493804, 0)) {
						iVar1 = dlc1::_get_num_forced_components(iVar0);
						iVar2 = 0;
						while (iVar2 < iVar1) {
							dlc1::get_forced_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
							if (iVar5 == 10) {
								if (iVar3 != 0 && iVar3 != 1849449579) {
									return func_98(iVar3, 3);
								}
								else {
									return uVar4;
								}
							}
							iVar2++;
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1467682989, 0)) {
						if (iParam3 == 0) {
							iParam3 = func_107(1751, -1, 0);
						}
						return func_98(iParam3, 3);
					}
				}
			}
		}
		else if (iParam1 == 8) {
			if (iParam2 == 1) {
				return 73;
			}
			else if (iParam2 == 3) {
				return 74;
			}
			else if (iParam2 == 5) {
				return 75;
			}
			else if (iParam2 == 7) {
				return 76;
			}
			else if (iParam2 == 4) {
				return 77;
			}
			else if (iParam2 == 8) {
				return 78;
			}
			else if (iParam2 == 11) {
				return 79;
			}
			else if (iParam2 == 23) {
				if (func_101(89, -1)) {
					return 89;
				}
			}
			else if (iParam2 == 17) {
				if (func_101(88, -1)) {
					return 88;
				}
			}
			else if (iParam2 == 28) {
				if (func_101(87, -1)) {
					return 87;
				}
			}
			else if (iParam2 == 33) {
				return 73;
			}
			else if (iParam2 == 35) {
				return 74;
			}
			else if (iParam2 == 37) {
				return 75;
			}
			else if (iParam2 == 39) {
				return 76;
			}
			else if (iParam2 == 36) {
				return 77;
			}
			else if (iParam2 == 40) {
				return 78;
			}
			else if (iParam2 == 43) {
				return 79;
			}
			else if (iParam2 == 19) {
				return 80;
			}
			else if (iParam2 == 21) {
				return 81;
			}
			else if (iParam2 == 22) {
				return 82;
			}
			else if (iParam2 == 24) {
				return 83;
			}
			else if (iParam2 == 20) {
				return 84;
			}
			else if (iParam2 == 30) {
				return 85;
			}
			else if (iParam2 == 227) {
				return 80;
			}
			else if (iParam2 == 229) {
				return 81;
			}
			else if (iParam2 == 230) {
				return 82;
			}
			else if (iParam2 == 232) {
				return 83;
			}
			else if (iParam2 == 228) {
				return 84;
			}
			else if (iParam2 == 238) {
				return 85;
			}
			else if (iParam2 == 231) {
				if (func_101(89, -1)) {
					return 89;
				}
			}
			else if (iParam2 == 225) {
				if (func_101(88, -1)) {
					return 88;
				}
			}
			else if (iParam2 == 236) {
				if (func_101(87, -1)) {
					return 87;
				}
			}
			else if (iParam2 >= 241) {
				iVar6 = func_121(iParam0, iParam2, 8, 3);
				if (iVar6 != -1) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, 1113995558, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar6, 362493804, 0)) {
						iVar7 = dlc1::_get_num_forced_components(iVar6);
						iVar8 = 0;
						while (iVar8 < iVar7) {
							dlc1::get_forced_component(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
							if (iVar11 == 10) {
								if (iVar9 != 0 && iVar9 != 1849449579) {
									return func_98(iVar9, 3);
								}
								else {
									return uVar10;
								}
							}
							iVar8++;
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1467682989, 0)) {
						if (iParam3 == 0) {
							iParam3 = func_107(1751, -1, 0);
						}
						return func_98(iParam3, 3);
					}
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		if (iParam1 == 11) {
			if (iParam2 == 1) {
				return 75;
			}
			else if (iParam2 == 2) {
				return 77;
			}
			else if (iParam2 == 4) {
				if (func_101(89, -1)) {
					return 89;
				}
			}
			else if (iParam2 == 7) {
				if (func_101(88, -1)) {
					return 88;
				}
			}
			else if (iParam2 == 9) {
				if (func_101(87, -1)) {
					return 87;
				}
			}
			else if (iParam2 == 32) {
				return 78;
			}
			else if (iParam2 == 33) {
				return 79;
			}
			else if (iParam2 == 34) {
				return 80;
			}
			else if (iParam2 == 35) {
				return 81;
			}
			else if (iParam2 == 36) {
				return 82;
			}
			else if (iParam2 == 62) {
				return 76;
			}
			else if (iParam2 == 63) {
				return 83;
			}
			else if (iParam2 == 186) {
				return 84;
			}
			else if (iParam2 == 187) {
				return 85;
			}
			else if (iParam2 == 191) {
				return 74;
			}
			else if (iParam2 >= 256) {
				iVar12 = func_121(iParam0, iParam2, 11, 4);
				if (iVar12 != -1) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar12, 1113995558, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar12, 362493804, 0)) {
						iVar13 = dlc1::_get_num_forced_components(iVar12);
						iVar14 = 0;
						while (iVar14 < iVar13) {
							dlc1::get_forced_component(iVar12, iVar14, &iVar15, &uVar16, &iVar17);
							if (iVar17 == 10) {
								if (iVar15 != 0 && iVar15 != 1849449579) {
									return func_98(iVar15, 4);
								}
								else {
									return uVar16;
								}
							}
							iVar14++;
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar12, -1467682989, 0)) {
						if (iParam3 == 0) {
							iParam3 = func_107(1751, -1, 0);
						}
						return func_98(iParam3, 4);
					}
				}
			}
		}
		else if (iParam1 == 8) {
			if (iParam2 == 1) {
				return 75;
			}
			else if (iParam2 == 2) {
				return 77;
			}
			else if (iParam2 == 4) {
				if (func_101(89, -1)) {
					return 89;
				}
			}
			else if (iParam2 == 7) {
				if (func_101(88, -1)) {
					return 88;
				}
			}
			else if (iParam2 == 9) {
				if (func_101(87, -1)) {
					return 87;
				}
			}
			else if (iParam2 == 17) {
				return 75;
			}
			else if (iParam2 == 18) {
				return 77;
			}
			else if (iParam2 == 20) {
				if (func_101(89, -1)) {
					return 89;
				}
			}
			else if (iParam2 == 23) {
				if (func_101(88, -1)) {
					return 88;
				}
			}
			else if (iParam2 == 25) {
				if (func_101(87, -1)) {
					return 87;
				}
			}
			else if (iParam2 == 81) {
				return 84;
			}
			else if (iParam2 == 82) {
				return 85;
			}
			else if (iParam2 == 86) {
				return 74;
			}
			else if (iParam2 >= 136) {
				iVar18 = func_121(iParam0, iParam2, 8, 4);
				if (iVar18 != -1) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar18, 1113995558, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar18, 362493804, 0)) {
						iVar19 = dlc1::_get_num_forced_components(iVar18);
						iVar20 = 0;
						while (iVar20 < iVar19) {
							dlc1::get_forced_component(iVar18, iVar20, &iVar21, &uVar22, &iVar23);
							if (iVar23 == 10) {
								if (iVar21 != 0 && iVar21 != 1849449579) {
									return func_98(iVar21, 4);
								}
								else {
									return uVar22;
								}
							}
							iVar20++;
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar18, -1467682989, 0)) {
						if (iParam3 == 0) {
							iParam3 = func_107(1751, -1, 0);
						}
						return func_98(iParam3, 4);
					}
				}
			}
		}
	}
	return -1;
}

// Position - 0x13061
int func_98(int iParam0, int iParam1) {
	int *iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	if (iParam1 == 3) {
		if (func_100(iParam0, &iVar0)) {
			return iVar0;
		}
	}
	else if (iParam1 == 4) {
		if (func_99(iParam0, &iVar0)) {
			return iVar0;
		}
	}
	iVar2 = dlc1::_get_num_decorations(iParam1);
	iVar1 = 0;
	while (iVar1 < iVar2) {
		if (dlc1::_0xFF56381874F82086(iParam1, iVar1, &Var3)) {
			if (iParam0 == Var3.f_3) {
				return 129 + iVar1;
			}
		}
		iVar1++;
	}
	return -1;
}

// Position - 0x130D2
bool func_99(int iParam0, int *iParam1) {
	int iVar0;

	iVar0 = -1;
	switch (iParam0) {
	case 497719213: iVar0 = 0; break;

	case -1575660783: iVar0 = 1; break;

	case -720631087: iVar0 = 2; break;

	case 2143620721: iVar0 = 3; break;

	case 2049754822: iVar0 = 4; break;

	case -1293749076: iVar0 = 5; break;

	case -1571403599: iVar0 = 6; break;

	case -711123906: iVar0 = 7; break;

	case 152801037: iVar0 = 8; break;

	case -1324018585: iVar0 = 9; break;

	case -481068829: iVar0 = 10; break;

	case -1486741196: iVar0 = 11; break;

	case 939412564: iVar0 = 12; break;

	case 1187637739: iVar0 = 13; break;

	case -1092669445: iVar0 = 14; break;

	case 1659530389: iVar0 = 15; break;

	case 996857777: iVar0 = 16; break;

	case 817476859: iVar0 = 17; break;

	case -17051268: iVar0 = 18; break;

	case 1293774274: iVar0 = 19; break;

	case 567121699: iVar0 = 20; break;

	case -1179302160: iVar0 = 21; break;

	case -949165473: iVar0 = 22; break;

	case 354975189: iVar0 = 23; break;

	case -489121482: iVar0 = 24; break;

	case -1636954018: iVar0 = 25; break;

	case -1277740240: iVar0 = 26; break;

	case -1047439708: iVar0 = 27; break;

	case -814026121: iVar0 = 28; break;

	case 1732157956: iVar0 = 29; break;

	case 1024282018: iVar0 = 30; break;

	case -2099685063: iVar0 = 31; break;

	case 1483932781: iVar0 = 32; break;

	case 1406925627: iVar0 = 33; break;

	case 698590923: iVar0 = 34; break;

	case 1869001296: iVar0 = 35; break;

	case 1169907450: iVar0 = 36; break;

	case 717727185: iVar0 = 37; break;

	case 1058197095: iVar0 = 38; break;

	case 434115743: iVar0 = 39; break;

	case 665432114: iVar0 = 40; break;

	case 1198780358: iVar0 = 41; break;

	case -2128873857: iVar0 = 42; break;

	case -148547780: iVar0 = 43; break;

	case 1819096318: iVar0 = 44; break;

	case 1051122042: iVar0 = 45; break;

	case -1350495965: iVar0 = 46; break;

	case -150859291: iVar0 = 47; break;

	case -1186193045: iVar0 = 48; break;

	case -1206837515: iVar0 = 49; break;

	case -1513653662: iVar0 = 50; break;

	case -543948331: iVar0 = 51; break;

	case -175559233: iVar0 = 52; break;

	case -131530830: iVar0 = 53; break;

	case -1816086813: iVar0 = 54; break;

	case -2113006722: iVar0 = 55; break;

	case -1101886458: iVar0 = 56; break;

	case -1398740829: iVar0 = 57; break;

	case 1939258347: iVar0 = 58; break;

	case -1004151544: iVar0 = 59; break;

	case -822873436: iVar0 = 60; break;

	case -1445222284: iVar0 = 61; break;

	case -63910623: iVar0 = 62; break;

	case 101834979: iVar0 = 63; break;

	case -673512330: iVar0 = 64; break;

	case -423845319: iVar0 = 65; break;

	case 963561372: iVar0 = 66; break;

	case 1384839636: iVar0 = 67; break;

	case -1712879828: iVar0 = 68; break;

	case -951688727: iVar0 = 69; break;

	case -1132639145: iVar0 = 70; break;

	case -513632731: iVar0 = 71; break;

	case 263680718: iVar0 = 72; break;

	case 36296627: iVar0 = 73; break;

	case 800240324: iVar0 = 74; break;

	case 614243480: iVar0 = 75; break;

	case 1408138043: iVar0 = 76; break;

	case 957564293: iVar0 = 77; break;

	case -1614279399: iVar0 = 78; break;

	case -1451286393: iVar0 = 79; break;

	case -1758069771: iVar0 = 80; break;

	case -1225475222: iVar0 = 81; break;

	case -1992892433: iVar0 = 82; break;

	case -1838157215: iVar0 = 83; break;

	case 1688803028: iVar0 = 84; break;

	case 1844259164: iVar0 = 85; break;

	case 1070943545: iVar0 = 86; break;

	case 1234460855: iVar0 = 87; break;

	case -753798460: iVar0 = 88; break;

	case -1453351072: iVar0 = 89; break;

	case -1308053326: iVar0 = 90; break;

	case -2083859401: iVar0 = 91; break;

	case 1586137527: iVar0 = 92; break;

	case 1884564810: iVar0 = 93; break;

	case 1092964089: iVar0 = 94; break;

	case 1264280421: iVar0 = 95; break;

	case 496601058: iVar0 = 96; break;

	case 861352797: iVar0 = 97; break;

	case 1418328330: iVar0 = 98; break;

	case 1784554566: iVar0 = 99; break;
	}
	switch (iParam0) {
	case 2081736627: iVar0 = 100; break;

	case -1897271971: iVar0 = 101; break;

	case -1666742056: iVar0 = 102; break;

	case -1282165072: iVar0 = 103; break;

	case -1052880379: iVar0 = 104; break;

	case -745474390: iVar0 = 105; break;

	case -515796465: iVar0 = 106; break;

	case -811206225: iVar0 = 107; break;

	case -1586815686: iVar0 = 108; break;

	case -1423429452: iVar0 = 109; break;

	case -1697869815: iVar0 = 110; break;

	case -1470846183: iVar0 = 111; break;

	case 1093884035: iVar0 = 112; break;

	case 861256904: iVar0 = 113; break;

	case 603201029: iVar0 = 114; break;

	case 1991426949: iVar0 = 115; break;

	case -135838228: iVar0 = 116; break;

	case 121616864: iVar0 = 117; break;

	case -834517002: iVar0 = 118; break;

	case -403932342: iVar0 = 119; break;

	case -1179738417: iVar0 = 120; break;

	case -1022250603: iVar0 = 121; break;

	case 558694786: iVar0 = 122; break;

	case 569279177: iVar0 = 123; break;

	case 544309199: iVar0 = 124; break;

	case 1190448341: iVar0 = 125; break;

	case 885139568: iVar0 = 126; break;

	case -1845683606: iVar0 = 127; break;

	case -1555317497: iVar0 = 128; break;

	case 1704673699: iVar0 = 129; break;

	case 1993401358: iVar0 = 130; break;

	case 1227065524: iVar0 = 131; break;

	case -533227790: iVar0 = 132; break;

	case 309459814: iVar0 = 133; break;

	case 77815753: iVar0 = 134; break;

	case -280939203: iVar0 = 135; break;

	case 1246882601: iVar0 = 136; break;

	case 314833986: iVar0 = 137; break;

	case -25635924: iVar0 = 138; break;

	case 351567983: iVar0 = 139; break;

	case -2027428652: iVar0 = 140; break;

	case 962677064: iVar0 = 141; break;

	case -105475497: iVar0 = 142; break;

	case 766835283: iVar0 = 143; break;

	case 471979821: iVar0 = 144; break;

	case 1122542778: iVar0 = 145; break;

	case 815530017: iVar0 = 146; break;

	case 1157900525: iVar0 = 147; break;

	case 859243859: iVar0 = 148; break;

	case 2032013608: iVar0 = 149; break;

	case 1471663700: iVar0 = 150; break;

	case -1679206722: iVar0 = 151; break;

	case -309397848: iVar0 = 152; break;

	case 534666054: iVar0 = 153; break;

	case -769376301: iVar0 = 154; break;

	case 1531057961: iVar0 = 155; break;

	case 1986678137: iVar0 = 156; break;

	case 2142789653: iVar0 = 157; break;

	case 7463306: iVar0 = 158; break;

	case 308053343: iVar0 = 159; break;

	case 753842819: iVar0 = 160; break;

	case 1052794406: iVar0 = 161; break;

	case -695726661: iVar0 = 162; break;

	case -1001821890: iVar0 = 163; break;

	case -1425459522: iVar0 = 164; break;

	case 1412653072: iVar0 = 165; break;

	case 1163510365: iVar0 = 166; break;

	case 933242602: iVar0 = 167; break;

	case -1347021116: iVar0 = 168; break;

	case 1297354841: iVar0 = 169; break;

	case -839806574: iVar0 = 170; break;

	case -542100209: iVar0 = 171; break;

	case 1472218269: iVar0 = 172; break;

	case 1783196079: iVar0 = 173; break;

	case 1007062314: iVar0 = 174; break;

	case -870732522: iVar0 = 175; break;

	case 547542627: iVar0 = 176; break;

	case 863894553: iVar0 = 177; break;

	case -2099242332: iVar0 = 178; break;

	case -1860028632: iVar0 = 179; break;

	case -560967165: iVar0 = 180; break;

	case -59437904: iVar0 = 181; break;

	case 757067269: iVar0 = 182; break;

	case 455625238: iVar0 = 183; break;

	case -1750514914: iVar0 = 184; break;

	case -983982466: iVar0 = 185; break;

	case -232228837: iVar0 = 186; break;

	case 1558269323: iVar0 = 187; break;

	case 2070579873: iVar0 = 188; break;

	case -1203181916: iVar0 = 189; break;

	case -2112587204: iVar0 = 190; break;

	case 1942412705: iVar0 = 191; break;

	case -1846437386: iVar0 = 192; break;

	case 61799795: iVar0 = 193; break;

	case -1388490611: iVar0 = 194; break;

	case -1627212776: iVar0 = 195; break;

	case 1525246127: iVar0 = 196; break;

	case -11341151: iVar0 = 197; break;

	case 516055815: iVar0 = 198; break;

	case -1034642040: iVar0 = 199; break;
	}
	switch (iParam0) {
	case 1022637316: iVar0 = 200; break;

	case -1677156418: iVar0 = 201; break;

	case -1130213300: iVar0 = 202; break;

	case 104062694: iVar0 = 203; break;

	case 869579299: iVar0 = 204; break;

	case 1201332655: iVar0 = 205; break;

	case 1028967715: iVar0 = 206; break;

	case -1651634800: iVar0 = 207; break;

	case -892278763: iVar0 = 208; break;

	case -1032005779: iVar0 = 209; break;

	case -255675400: iVar0 = 210; break;

	case 1890137027: iVar0 = 211; break;

	case -406805808: iVar0 = 212; break;

	case -592540500: iVar0 = 213; break;

	case 205417419: iVar0 = 214; break;

	case -2127276619: iVar0 = 215; break;

	case -1362677538: iVar0 = 216; break;

	case -1549722990: iVar0 = 217; break;

	case 3495990: iVar0 = 218; break;

	case -285526590: iVar0 = 219; break;

	case 1907377338: iVar0 = 220; break;

	case 2136399879: iVar0 = 221; break;

	case 1568410532: iVar0 = 222; break;

	case 1068879892: iVar0 = 223; break;

	case -1592750929: iVar0 = 224; break;

	case 772896404: iVar0 = 225; break;

	case -1999229916: iVar0 = 226; break;

	case -744701520: iVar0 = 227; break;

	case -425039925: iVar0 = 228; break;

	case -798409911: iVar0 = 229; break;

	case 1379974898: iVar0 = 230; break;

	case -1681436154: iVar0 = 231; break;

	case -1486919370: iVar0 = 232; break;

	case 2014677667: iVar0 = 233; break;

	case 325697857: iVar0 = 234; break;

	case -1188819501: iVar0 = 235; break;

	case -1765193438: iVar0 = 236; break;

	case -1416269126: iVar0 = 237; break;

	case -2111365154: iVar0 = 238; break;

	case -1880573087: iVar0 = 239; break;

	case 1421296887: iVar0 = 240; break;

	case 1655562468: iVar0 = 241; break;

	case 946048080: iVar0 = 242; break;

	case 1188768063: iVar0 = 243; break;

	case 498456313: iVar0 = 244; break;

	case 323007907: iVar0 = 245; break;

	case -1325371100: iVar0 = 246; break;

	case -829313978: iVar0 = 247; break;

	case -530624543: iVar0 = 248; break;

	case -299046020: iVar0 = 249; break;

	case 1812260650: iVar0 = 250; break;

	case 2043511487: iVar0 = 251; break;

	case -1753235933: iVar0 = 252; break;

	case -1525589690: iVar0 = 253; break;

	case 31003408: iVar0 = 254; break;

	case -1864998224: iVar0 = 255; break;

	case -2140814897: iVar0 = 256; break;

	case 223468453: iVar0 = 257; break;

	case -83970305: iVar0 = 258; break;

	case -406843262: iVar0 = 259; break;

	case -954740942: iVar0 = 260; break;

	case -1675526854: iVar0 = 261; break;

	case 2111717556: iVar0 = 262; break;

	case -415395003: iVar0 = 263; break;

	case 427521984: iVar0 = 264; break;

	case 1570178485: iVar0 = 265; break;

	case -1619850916: iVar0 = 266; break;

	case -713067148: iVar0 = 267; break;

	case 946477614: iVar0 = 268; break;

	case -1423343701: iVar0 = 269; break;

	case 445931457: iVar0 = 270; break;

	case 678558588: iVar0 = 271; break;

	case -854631987: iVar0 = 272; break;

	case -1707871209: iVar0 = 273; break;

	case 1675446188: iVar0 = 274; break;

	case 1911627074: iVar0 = 275; break;

	case -607391498: iVar0 = 276; break;

	case -1544625218: iVar0 = 277; break;

	case 1185175875: iVar0 = 278; break;

	case 155591269: iVar0 = 279; break;

	case -1057958846: iVar0 = 280; break;

	case -1853795495: iVar0 = 281; break;

	case -1860485560: iVar0 = 282; break;

	case 499288642: iVar0 = 283; break;

	case -7887054: iVar0 = 284; break;

	case -1553041502: iVar0 = 285; break;

	case -1080591445: iVar0 = 286; break;

	case -741060436: iVar0 = 287; break;

	case 645634644: iVar0 = 288; break;

	case -1096728771: iVar0 = 289; break;

	case 503268386: iVar0 = 290; break;

	case 109804153: iVar0 = 291; break;

	case 1410910279: iVar0 = 292; break;

	case 1501700194: iVar0 = 293; break;

	case -1793199216: iVar0 = 294; break;

	case 1405944575: iVar0 = 295; break;

	case 1731382556: iVar0 = 296; break;

	case 1743809026: iVar0 = 297; break;

	case 1589237530: iVar0 = 298; break;

	case -1558441108: iVar0 = 299; break;
	}
	switch (iParam0) {
	case 793815980: iVar0 = 303; break;

	case 87277824: iVar0 = 304; break;

	case 1305470790: iVar0 = 305; break;

	case 252924758: iVar0 = 306; break;

	case 1043745875: iVar0 = 307; break;

	case 24304530: iVar0 = 308; break;

	case 582246031: iVar0 = 309; break;

	case 1840225396: iVar0 = 310; break;

	case -47863515: iVar0 = 311; break;

	case 26968202: iVar0 = 312; break;

	case 1720638120: iVar0 = 313; break;

	case 1372737856: iVar0 = 314; break;

	case -675719916: iVar0 = 315; break;

	case -610888268: iVar0 = 316; break;

	case -129698248: iVar0 = 317; break;

	case 1060644905: iVar0 = 318; break;

	case 776078819: iVar0 = 319; break;

	case -1069464482: iVar0 = 320; break;

	case -1342875239: iVar0 = 321; break;

	case 1967892405: iVar0 = 322; break;

	case 642864781: iVar0 = 323; break;

	case 1270860039: iVar0 = 324; break;

	case -1290780406: iVar0 = 325; break;

	case 1127641545: iVar0 = 326; break;

	case -1221948530: iVar0 = 327; break;

	case 1954153055: iVar0 = 328; break;

	case 543727307: iVar0 = 329; break;

	case -1806626643: iVar0 = 330; break;

	case 1146362323: iVar0 = 331; break;

	case -1918158051: iVar0 = 332; break;

	case -1835082731: iVar0 = 333; break;

	case 1935907419: iVar0 = 334; break;

	case 961997868: iVar0 = 335; break;

	case -415246024: iVar0 = 336; break;

	case -2003529037: iVar0 = 337; break;

	case -1272951326: iVar0 = 338; break;

	case 837851491: iVar0 = 339; break;

	case -64649653: iVar0 = 340; break;

	case 1997623301: iVar0 = 341; break;

	case 1177835340: iVar0 = 342; break;

	case -1261787835: iVar0 = 343; break;

	case -965491494: iVar0 = 344; break;

	case 939374190: iVar0 = 345; break;

	case 149461503: iVar0 = 346; break;

	case -1117498985: iVar0 = 347; break;

	case 1184468662: iVar0 = 348; break;

	case -772488648: iVar0 = 349; break;

	case -1399171334: iVar0 = 350; break;

	case -963164512: iVar0 = 351; break;

	case -1284517669: iVar0 = 352; break;

	case 1613773443: iVar0 = 353; break;

	case 1963092516: iVar0 = 354; break;

	case -878642668: iVar0 = 355; break;

	case -1618544925: iVar0 = 356; break;

	case 1185417232: iVar0 = 357; break;

	case -1649044153: iVar0 = 358; break;

	case -1293956525: iVar0 = 359; break;

	case -84085370: iVar0 = 360; break;

	case -943861479: iVar0 = 361; break;

	case -1355455834: iVar0 = 362; break;

	case 711764191: iVar0 = 363; break;

	case 41616632: iVar0 = 364; break;

	case -2053984264: iVar0 = 365; break;

	case -522832741: iVar0 = 366; break;

	case 711940316: iVar0 = 367; break;

	case -1512107004: iVar0 = 368; break;

	case -273305505: iVar0 = 369; break;

	case -779122930: iVar0 = 370; break;

	case 565678099: iVar0 = 371; break;

	case 2130135469: iVar0 = 372; break;

	case 2142072717: iVar0 = 373; break;

	case -636638153: iVar0 = 374; break;

	case 289539239: iVar0 = 375; break;

	case -1040822561: iVar0 = 376; break;

	case 217486581: iVar0 = 377; break;

	case -2147244302: iVar0 = 378; break;

	case 830186237: iVar0 = 379; break;

	case -1902384566: iVar0 = 380; break;

	case 1471583453: iVar0 = 381; break;

	case 2007332931: iVar0 = 382; break;

	case 1104156493: iVar0 = 383; break;

	case 616400258: iVar0 = 384; break;

	case 511243162: iVar0 = 385; break;

	case -477451680: iVar0 = 386; break;

	case 743616295: iVar0 = 387; break;

	case 712215816: iVar0 = 388; break;

	case 1475570942: iVar0 = 389; break;

	case -1768978416: iVar0 = 390; break;

	case -2139711822: iVar0 = 391; break;

	case -1509236263: iVar0 = 392; break;

	case -1143383459: iVar0 = 393; break;

	case -1690206781: iVar0 = 394; break;

	case 1947095236: iVar0 = 395; break;

	case 300333876: iVar0 = 396; break;

	case 37732721: iVar0 = 397; break;

	case 959183706: iVar0 = 398; break;

	case -1542393224: iVar0 = 399; break;
	}
	switch (iParam0) {
	case 874488242: iVar0 = 400; break;

	case 1389335000: iVar0 = 401; break;

	case -366075547: iVar0 = 402; break;

	case -1125431584: iVar0 = 403; break;

	case -2000068963: iVar0 = 404; break;

	case 1497445248: iVar0 = 405; break;

	case 1989766704: iVar0 = 406; break;

	case -2086401979: iVar0 = 407; break;

	case -1846467361: iVar0 = 408; break;

	case -1325458477: iVar0 = 409; break;

	case -566725051: iVar0 = 410; break;

	case -787850263: iVar0 = 411; break;

	case -1885021085: iVar0 = 412; break;

	case 979307144: iVar0 = 413; break;

	case -473732439: iVar0 = 414; break;

	case 2062186390: iVar0 = 415; break;

	case -60867780: iVar0 = 416; break;

	case 926967912: iVar0 = 417; break;

	case -1886278590: iVar0 = 418; break;

	case -1314959708: iVar0 = 419; break;

	case -1696774529: iVar0 = 420; break;

	case -356446484: iVar0 = 421; break;

	case 857810380: iVar0 = 422; break;

	case -629676646: iVar0 = 423; break;

	case -1879530481: iVar0 = 424; break;

	case -1265847311: iVar0 = 425; break;

	case 32094424: iVar0 = 426; break;

	case 1969286744: iVar0 = 427; break;

	case 560620683: iVar0 = 428; break;

	case -148312642: iVar0 = 429; break;

	case -578277428: iVar0 = 430; break;

	case -718909970: iVar0 = 431; break;

	case -859026859: iVar0 = 432; break;

	case -839897805: iVar0 = 433; break;

	case 1676439910: iVar0 = 434; break;

	case -294157184: iVar0 = 435; break;

	case -1222200221: iVar0 = 436; break;

	case 874532672: iVar0 = 437; break;

	case -135929055: iVar0 = 438; break;

	case 1654917353: iVar0 = 439; break;

	case -13131391: iVar0 = 440; break;

	case 154845196: iVar0 = 441; break;

	case -1147884322: iVar0 = 442; break;

	case 291693311: iVar0 = 443; break;

	case -1401933531: iVar0 = 444; break;

	case 1820267020: iVar0 = 445; break;

	case 2134488961: iVar0 = 446; break;

	case -1861952745: iVar0 = 447; break;

	case 994458405: iVar0 = 448; break;

	case -1931715008: iVar0 = 449; break;

	case 1308745884: iVar0 = 450; break;

	case -1322955084: iVar0 = 451; break;

	case -816658183: iVar0 = 452; break;

	case -988307698: iVar0 = 453; break;

	case -1341411308: iVar0 = 454; break;

	case 1865570599: iVar0 = 455; break;

	case -549458010: iVar0 = 456; break;

	case -1328545177: iVar0 = 457; break;

	case -1361353619: iVar0 = 458; break;

	case 1103253806: iVar0 = 459; break;

	case -24183456: iVar0 = 460; break;

	case 436214104: iVar0 = 461; break;

	case 2072615278: iVar0 = 462; break;

	case -1131891426: iVar0 = 463; break;

	case 1392085456: iVar0 = 464; break;

	case 2035895234: iVar0 = 465; break;

	case 368784798: iVar0 = 466; break;

	case 1398938833: iVar0 = 467; break;

	case 1250040566: iVar0 = 468; break;

	case 2133228190: iVar0 = 469; break;

	case 675551540: iVar0 = 470; break;

	case -1826137848: iVar0 = 471; break;

	case -144105601: iVar0 = 472; break;

	case -748983650: iVar0 = 473; break;

	case 630291027: iVar0 = 474; break;

	case 293950434: iVar0 = 475; break;

	case 1857352111: iVar0 = 476; break;

	case -777671131: iVar0 = 477; break;

	case 221602924: iVar0 = 478; break;

	case 2039295216: iVar0 = 479; break;

	case 1800147054: iVar0 = 480; break;

	case -2019505897: iVar0 = 481; break;

	case 1647997020: iVar0 = 482; break;

	case -1405854945: iVar0 = 483; break;

	case -1171294997: iVar0 = 484; break;

	case -77076350: iVar0 = 485; break;

	case 775569873: iVar0 = 486; break;

	case 330569485: iVar0 = 487; break;

	case -1549217620: iVar0 = 488; break;

	case 1674429052: iVar0 = 489; break;

	case -254669596: iVar0 = 490; break;

	case 1802602254: iVar0 = 491; break;

	case -941072260: iVar0 = 492; break;

	case -1844749517: iVar0 = 493; break;

	case 82745424: iVar0 = 494; break;

	case -673460083: iVar0 = 495; break;

	case -99954496: iVar0 = 496; break;

	case 2078163456: iVar0 = 497; break;

	case 1362343227: iVar0 = 498; break;

	case 1176005743: iVar0 = 499; break;
	}
	switch (iParam0) {
	case -1504557219: iVar0 = 500; break;

	case 367912881: iVar0 = 501; break;

	case -836343280: iVar0 = 502; break;

	case -46521805: iVar0 = 503; break;

	case -743048780: iVar0 = 504; break;

	case 1294865118: iVar0 = 505; break;

	case -1479686374: iVar0 = 506; break;

	case 256017193: iVar0 = 507; break;

	case 1232443120: iVar0 = 508; break;

	case -803282271: iVar0 = 509; break;

	case 1788600442: iVar0 = 510; break;

	case 1439605343: iVar0 = 511; break;

	case -1094679264: iVar0 = 512; break;

	case 1230482241: iVar0 = 513; break;

	case 2054714291: iVar0 = 514; break;

	case 192117676: iVar0 = 515; break;

	case -2071204405: iVar0 = 516; break;

	case -1618181476: iVar0 = 517; break;

	case -1408253665: iVar0 = 518; break;

	case -134185391: iVar0 = 519; break;

	case -785783411: iVar0 = 520; break;

	case -633466710: iVar0 = 521; break;

	case -2072487372: iVar0 = 522; break;

	case 1211025296: iVar0 = 523; break;

	case 742659337: iVar0 = 524; break;

	case 1365533160: iVar0 = 525; break;

	case 1213205618: iVar0 = 526; break;

	case -164052103: iVar0 = 527; break;

	case -1306490297: iVar0 = 528; break;

	case -994802645: iVar0 = 529; break;

	case 637406209: iVar0 = 530; break;

	case -170855031: iVar0 = 531; break;

	case 1333098305: iVar0 = 532; break;

	case 119103934: iVar0 = 533; break;

	case -141369051: iVar0 = 534; break;

	case -593355218: iVar0 = 535; break;

	case 316832763: iVar0 = 536; break;

	case -393713544: iVar0 = 537; break;

	case -1876234625: iVar0 = 538; break;

	case -1453082334: iVar0 = 539; break;

	case -1397705983: iVar0 = 540; break;

	case -1278086171: iVar0 = 541; break;

	case -1510892268: iVar0 = 542; break;

	case 204876084: iVar0 = 543; break;

	case -988359492: iVar0 = 544; break;

	case 975745281: iVar0 = 545; break;

	case 591099372: iVar0 = 546; break;

	case -1014948306: iVar0 = 547; break;

	case -1866439788: iVar0 = 548; break;

	case -1265767186: iVar0 = 549; break;

	case 2070931859: iVar0 = 550; break;

	case 413611416: iVar0 = 551; break;

	case 765001063: iVar0 = 552; break;

	case -686624622: iVar0 = 553; break;

	case -937548349: iVar0 = 554; break;

	case 212584159: iVar0 = 555; break;

	case -328340062: iVar0 = 556; break;

	case 1657725123: iVar0 = 557; break;

	case -1517964336: iVar0 = 558; break;

	case -785490239: iVar0 = 559; break;

	case -11769229: iVar0 = 560; break;

	case 745912106: iVar0 = 561; break;

	case -2064265098: iVar0 = 562; break;

	case -1515892875: iVar0 = 563; break;

	case 1368234729: iVar0 = 564; break;

	case 1960230923: iVar0 = 565; break;

	case -860169810: iVar0 = 566; break;

	case -177882114: iVar0 = 567; break;

	case 661384509: iVar0 = 568; break;

	case 1221860095: iVar0 = 569; break;

	case 698192473: iVar0 = 570; break;

	case -817251083: iVar0 = 571; break;

	case -1108876323: iVar0 = 572; break;

	case 1274482696: iVar0 = 573; break;

	case 468009056: iVar0 = 574; break;

	case 2063732427: iVar0 = 575; break;

	case -764016411: iVar0 = 576; break;

	case -1530816149: iVar0 = 577; break;

	case 1189996018: iVar0 = 578; break;

	case -210110115: iVar0 = 579; break;

	case -207110256: iVar0 = 580; break;

	case 1801308144: iVar0 = 581; break;

	case 320631086: iVar0 = 582; break;

	case 1022560466: iVar0 = 583; break;

	case -952946041: iVar0 = 584; break;

	case 1321460664: iVar0 = 585; break;

	case -781625914: iVar0 = 586; break;

	case -1522247835: iVar0 = 587; break;

	case -1531245231: iVar0 = 588; break;

	case -1070472994: iVar0 = 589; break;

	case -2113341060: iVar0 = 590; break;

	case 965047293: iVar0 = 591; break;

	case 2114285045: iVar0 = 592; break;

	case -1635032213: iVar0 = 593; break;

	case 1310864345: iVar0 = 594; break;

	case -973977633: iVar0 = 595; break;

	case -1439643329: iVar0 = 596; break;

	case 434150104: iVar0 = 597; break;

	case 1243301688: iVar0 = 598; break;

	case -1233567982: iVar0 = 599; break;
	}
	switch (iParam0) {
	case 1262886680: iVar0 = 600; break;

	case 283135569: iVar0 = 601; break;

	case -548917969: iVar0 = 602; break;

	case 153465812: iVar0 = 603; break;

	case 1916093085: iVar0 = 604; break;

	case -701486200: iVar0 = 605; break;

	case 1951718630: iVar0 = 606; break;

	case -1981978861: iVar0 = 607; break;

	case -1998094267: iVar0 = 608; break;

	case -718445629: iVar0 = 609; break;

	case -35697399: iVar0 = 610; break;

	case -899081349: iVar0 = 611; break;

	case 1123547916: iVar0 = 612; break;

	case -1139893782: iVar0 = 613; break;

	case 1446511785: iVar0 = 614; break;

	case 1234256191: iVar0 = 615; break;

	case 413901048: iVar0 = 616; break;

	case 1527450164: iVar0 = 617; break;

	case -1786525476: iVar0 = 618; break;

	case 1439516635: iVar0 = 619; break;

	case 733800794: iVar0 = 620; break;

	case -399223540: iVar0 = 621; break;

	case -1894392230: iVar0 = 622; break;

	case 229993415: iVar0 = 623; break;

	case -620189683: iVar0 = 624; break;

	case 1846617794: iVar0 = 625; break;

	case -1142479347: iVar0 = 626; break;

	case -512960025: iVar0 = 627; break;

	case -759812557: iVar0 = 628; break;

	case 468661890: iVar0 = 629; break;

	case 1907925586: iVar0 = 630; break;

	case 646243571: iVar0 = 631; break;

	case 1953935161: iVar0 = 632; break;

	case 874867224: iVar0 = 633; break;

	case 1344008898: iVar0 = 634; break;

	case 1297781304: iVar0 = 635; break;

	case 1977233252: iVar0 = 636; break;

	case -194410344: iVar0 = 637; break;

	case 392012609: iVar0 = 638; break;

	case 705148450: iVar0 = 639; break;

	case 1677522529: iVar0 = 640; break;

	case -1362677538: iVar0 = 641; break;

	case 863458948: iVar0 = 642; break;

	case 9874621: iVar0 = 643; break;

	case 1809338990: iVar0 = 644; break;

	case -346939959: iVar0 = 645; break;

	case -934753544: iVar0 = 646; break;

	case 1604986209: iVar0 = 647; break;

	case -1514700421: iVar0 = 648; break;

	case 1177361060: iVar0 = 649; break;

	case -937529288: iVar0 = 650; break;

	case 547723644: iVar0 = 651; break;

	case 1750314531: iVar0 = 652; break;

	case -988332613: iVar0 = 653; break;

	case 80720443: iVar0 = 654; break;

	case -1220194634: iVar0 = 655; break;

	case -925735153: iVar0 = 656; break;

	case -1403745446: iVar0 = 657; break;

	case -1084626028: iVar0 = 658; break;

	case 2060572320: iVar0 = 659; break;

	case 1064377095: iVar0 = 660; break;

	case -1985597576: iVar0 = 661; break;

	case -2003189104: iVar0 = 662; break;

	case 1452329956: iVar0 = 663; break;

	case 1928573506: iVar0 = 664; break;

	case -185753722: iVar0 = 665; break;

	case -1580916109: iVar0 = 666; break;

	case -1077059973: iVar0 = 667; break;

	case 131755133: iVar0 = 668; break;

	case -253351038: iVar0 = 669; break;

	case 1332845224: iVar0 = 670; break;

	case -685051870: iVar0 = 671; break;

	case 2122847199: iVar0 = 672; break;

	case -149940744: iVar0 = 673; break;

	case -147741130: iVar0 = 674; break;

	case 302211868: iVar0 = 675; break;

	case -1361568592: iVar0 = 676; break;

	case -156600218: iVar0 = 677; break;

	case 1592739450: iVar0 = 678; break;

	case -633744004: iVar0 = 679; break;

	case -1467745952: iVar0 = 680; break;

	case 1129961041: iVar0 = 681; break;

	case -1221180772: iVar0 = 682; break;

	case 1957517559: iVar0 = 683; break;

	case -335233377: iVar0 = 684; break;

	case 2146762380: iVar0 = 685; break;

	case 427236107: iVar0 = 686; break;

	case -49636427: iVar0 = 687; break;

	case 1988133312: iVar0 = 688; break;

	case 40044091: iVar0 = 689; break;

	case -1189893809: iVar0 = 690; break;

	case 1182549017: iVar0 = 691; break;

	case 1403255481: iVar0 = 692; break;

	case 821579887: iVar0 = 693; break;

	case 1975948161: iVar0 = 694; break;

	case -953362234: iVar0 = 695; break;

	case 1521494915: iVar0 = 696; break;

	case 84635211: iVar0 = 697; break;

	case 2074655231: iVar0 = 698; break;

	case 1742494019: iVar0 = 699; break;
	}
	switch (iParam0) {
	case 1841934566: iVar0 = 700; break;

	case 1648222412: iVar0 = 701; break;

	case 1019312748: iVar0 = 702; break;

	case -1218730541: iVar0 = 703; break;

	case -88186884: iVar0 = 704; break;

	case 1428588096: iVar0 = 705; break;

	case -1788493673: iVar0 = 706; break;

	case -241894528: iVar0 = 707; break;

	case -1425414573: iVar0 = 708; break;

	case 1797163947: iVar0 = 709; break;

	case 823191231: iVar0 = 710; break;

	case 894133321: iVar0 = 711; break;

	case 1889485313: iVar0 = 712; break;
	}
	if (iVar0 != -1) {
		*iParam1 = 129 + iVar0;
		return true;
	}
	return false;
}

// Position - 0x156F5
bool func_100(int iParam0, int *iParam1) {
	int iVar0;

	iVar0 = -1;
	switch (iParam0) {
	case -1917324065: iVar0 = 0; break;

	case 1056297333: iVar0 = 1; break;

	case 494620709: iVar0 = 2; break;

	case 800453786: iVar0 = 3; break;

	case -1082736975: iVar0 = 4; break;

	case -754981437: iVar0 = 5; break;

	case -1801855538: iVar0 = 6; break;

	case 459313194: iVar0 = 7; break;

	case 2007087579: iVar0 = 8; break;

	case 1987172386: iVar0 = 9; break;

	case 1801787829: iVar0 = 10; break;

	case -221624488: iVar0 = 11; break;

	case 25158851: iVar0 = 12; break;

	case 472458130: iVar0 = 13; break;

	case 164352862: iVar0 = 14; break;

	case -904148779: iVar0 = 15; break;

	case -694439771: iVar0 = 16; break;

	case -1469590466: iVar0 = 17; break;

	case -1511207100: iVar0 = 18; break;

	case -1352670678: iVar0 = 19; break;

	case -1960273476: iVar0 = 20; break;

	case -1657389609: iVar0 = 21; break;

	case 1826839858: iVar0 = 22; break;

	case 1989701788: iVar0 = 23; break;

	case 1213109257: iVar0 = 24; break;

	case 607407061: iVar0 = 25; break;

	case 875031480: iVar0 = 26; break;

	case 1487418552: iVar0 = 27; break;

	case 264053475: iVar0 = 28; break;

	case 99094329: iVar0 = 29; break;

	case -244193715: iVar0 = 30; break;

	case -540785934: iVar0 = 31; break;

	case -694833003: iVar0 = 32; break;

	case -852058665: iVar0 = 33; break;

	case -1512648940: iVar0 = 34; break;

	case -761354077: iVar0 = 35; break;

	case 1560551467: iVar0 = 36; break;

	case 827974775: iVar0 = 37; break;

	case 1595162603: iVar0 = 38; break;

	case 709663738: iVar0 = 39; break;

	case 990002533: iVar0 = 40; break;

	case 1860213958: iVar0 = 41; break;

	case 2119318441: iVar0 = 42; break;

	case -1953737187: iVar0 = 43; break;

	case 193320466: iVar0 = 44; break;

	case 1936646403: iVar0 = 45; break;

	case -1126042648: iVar0 = 46; break;

	case -1125022512: iVar0 = 47; break;

	case -1304369017: iVar0 = 48; break;

	case -2018143375: iVar0 = 49; break;

	case 224730392: iVar0 = 50; break;

	case 439629494: iVar0 = 51; break;

	case 736778786: iVar0 = 52; break;

	case 1048444745: iVar0 = 53; break;

	case 1988816738: iVar0 = 54; break;

	case 2140603469: iVar0 = 55; break;

	case 214245031: iVar0 = 56; break;

	case 1006238992: iVar0 = 57; break;

	case 689952604: iVar0 = 58; break;

	case -681528353: iVar0 = 59; break;

	case 1157448359: iVar0 = 60; break;

	case 43105745: iVar0 = 61; break;

	case -270395278: iVar0 = 62; break;

	case 505181414: iVar0 = 63; break;

	case 254662409: iVar0 = 64; break;

	case -982924414: iVar0 = 65; break;

	case -1156010272: iVar0 = 66; break;

	case 1885313391: iVar0 = 67; break;

	case -694786597: iVar0 = 68; break;

	case -1950199756: iVar0 = 69; break;

	case 384168721: iVar0 = 70; break;

	case -369452741: iVar0 = 71; break;

	case -89113946: iVar0 = 72; break;

	case 1836261422: iVar0 = 73; break;

	case -1004417654: iVar0 = 74; break;

	case -754095263: iVar0 = 75; break;

	case -1210698509: iVar0 = 76; break;

	case 1332405298: iVar0 = 77; break;

	case 552929095: iVar0 = 78; break;

	case 861154309: iVar0 = 79; break;

	case -1653801207: iVar0 = 80; break;

	case -87213624: iVar0 = 81; break;

	case 1285643631: iVar0 = 82; break;

	case 523240077: iVar0 = 83; break;

	case 823174734: iVar0 = 84; break;

	case -1248612522: iVar0 = 85; break;

	case 123359970: iVar0 = 86; break;

	case 369684543: iVar0 = 87; break;

	case -337142787: iVar0 = 88; break;

	case 1395583642: iVar0 = 89; break;

	case 1782520810: iVar0 = 90; break;

	case -660506451: iVar0 = 91; break;

	case -1092860637: iVar0 = 92; break;

	case 524387820: iVar0 = 93; break;

	case -1829180023: iVar0 = 94; break;

	case 2091368679: iVar0 = 95; break;

	case 1851597906: iVar0 = 96; break;

	case -434629734: iVar0 = 97; break;

	case 1415278623: iVar0 = 98; break;

	case 1252285617: iVar0 = 99; break;
	}
	switch (iParam0) {
	case 893595891: iVar0 = 100; break;

	case 423819507: iVar0 = 101; break;

	case -1433887872: iVar0 = 102; break;

	case -464613621: iVar0 = 103; break;

	case -301227387: iVar0 = 104; break;

	case -701762906: iVar0 = 105; break;

	case -890282963: iVar0 = 106; break;

	case -1188251480: iVar0 = 107; break;

	case 258827560: iVar0 = 108; break;

	case 965649655: iVar0 = 109; break;

	case 718800778: iVar0 = 110; break;

	case 1959959422: iVar0 = 111; break;

	case 1200177388: iVar0 = 112; break;

	case -1874439579: iVar0 = 113; break;

	case -1679505893: iVar0 = 114; break;

	case -1976229188: iVar0 = 115; break;

	case 2037875009: iVar0 = 116; break;

	case -235146664: iVar0 = 117; break;

	case -441853516: iVar0 = 118; break;

	case -664221443: iVar0 = 119; break;

	case -371627042: iVar0 = 120; break;

	case -1266220742: iVar0 = 121; break;

	case -968055611: iVar0 = 122; break;

	case 248100286: iVar0 = 123; break;

	case 551606764: iVar0 = 124; break;

	case 1805971315: iVar0 = 125; break;

	case -43642121: iVar0 = 126; break;

	case 1172251624: iVar0 = 127; break;

	case 1471989667: iVar0 = 128; break;

	case -2124702788: iVar0 = 129; break;

	case -1826734271: iVar0 = 130; break;

	case -900452940: iVar0 = 131; break;

	case -292194762: iVar0 = 132; break;

	case 637166847: iVar0 = 133; break;

	case -1204844181: iVar0 = 134; break;

	case 324779970: iVar0 = 135; break;

	case 329039940: iVar0 = 136; break;

	case 1854928425: iVar0 = 137; break;

	case 13179549: iVar0 = 138; break;

	case 1899823455: iVar0 = 139; break;

	case -2090490448: iVar0 = 140; break;

	case -1801467868: iVar0 = 141; break;

	case 953986562: iVar0 = 142; break;

	case 585335312: iVar0 = 143; break;

	case 489617063: iVar0 = 144; break;

	case 210195800: iVar0 = 145; break;

	case 1843402776: iVar0 = 146; break;

	case -1600520821: iVar0 = 147; break;

	case 1399087889: iVar0 = 148; break;

	case 1169344430: iVar0 = 149; break;

	case -2028647818: iVar0 = 150; break;

	case -1335845620: iVar0 = 151; break;

	case -1450406320: iVar0 = 152; break;

	case -1209849091: iVar0 = 153; break;

	case 2065609077: iVar0 = 154; break;

	case -664245241: iVar0 = 155; break;

	case 1676130538: iVar0 = 156; break;

	case -1730534702: iVar0 = 157; break;

	case -1767432596: iVar0 = 158; break;

	case -2016105604: iVar0 = 159; break;

	case 1971947238: iVar0 = 160; break;

	case -362811247: iVar0 = 161; break;

	case -668087251: iVar0 = 162; break;

	case -821282326: iVar0 = 163; break;

	case -1083467095: iVar0 = 164; break;

	case 550067555: iVar0 = 165; break;

	case 1439221609: iVar0 = 166; break;

	case 67412954: iVar0 = 167; break;

	case -1999360357: iVar0 = 168; break;

	case 1461537582: iVar0 = 169; break;

	case -1828273408: iVar0 = 170; break;

	case -1319239762: iVar0 = 171; break;

	case -1234400821: iVar0 = 172; break;

	case -992303449: iVar0 = 173; break;

	case -638398249: iVar0 = 174; break;

	case -41543683: iVar0 = 175; break;

	case -1934903018: iVar0 = 176; break;

	case 2132090345: iVar0 = 177; break;

	case 1751052413: iVar0 = 178; break;

	case 1519604966: iVar0 = 179; break;

	case -1964624525: iVar0 = 180; break;

	case 2006191823: iVar0 = 181; break;

	case 1633280603: iVar0 = 182; break;

	case 632918673: iVar0 = 183; break;

	case -190040148: iVar0 = 184; break;

	case 42936837: iVar0 = 185; break;

	case -1458541976: iVar0 = 186; break;

	case -606014753: iVar0 = 187; break;

	case -613376371: iVar0 = 188; break;

	case -446291501: iVar0 = 189; break;

	case 739308497: iVar0 = 190; break;

	case 495343292: iVar0 = 191; break;

	case -1686711653: iVar0 = 192; break;

	case 1187457341: iVar0 = 193; break;

	case 956403122: iVar0 = 194; break;

	case 1647042566: iVar0 = 195; break;

	case -461478743: iVar0 = 196; break;

	case -1883325653: iVar0 = 197; break;

	case -2114248796: iVar0 = 198; break;

	case 314228205: iVar0 = 199; break;
	}
	switch (iParam0) {
	case 1503775674: iVar0 = 200; break;

	case 1862399610: iVar0 = 201; break;

	case 708472048: iVar0 = 202; break;

	case -1207367545: iVar0 = 203; break;

	case 111650251: iVar0 = 204; break;

	case -28941494: iVar0 = 205; break;

	case -1827173138: iVar0 = 206; break;

	case -520681423: iVar0 = 207; break;

	case -209343154: iVar0 = 208; break;

	case -293579471: iVar0 = 209; break;

	case 20871853: iVar0 = 210; break;

	case -89823344: iVar0 = 211; break;

	case -1820191335: iVar0 = 212; break;

	case -1588547274: iVar0 = 213; break;

	case -1224287070: iVar0 = 214; break;

	case -994150383: iVar0 = 215; break;

	case -869824793: iVar0 = 216; break;

	case -633330920: iVar0 = 217; break;

	case -308131364: iVar0 = 218; break;

	case -38278649: iVar0 = 219; break;

	case 555692245: iVar0 = 220; break;

	case 929455459: iVar0 = 221; break;

	case -2092436411: iVar0 = 222; break;

	case 1904300216: iVar0 = 223; break;

	case -1599361268: iVar0 = 224; break;

	case -1897002095: iVar0 = 225; break;

	case -1011813098: iVar0 = 226; break;

	case -1316794181: iVar0 = 227; break;

	case -416105443: iVar0 = 228; break;

	case -47978497: iVar0 = 229; break;

	case -358202620: iVar0 = 230; break;

	case 547139312: iVar0 = 231; break;

	case 1124688073: iVar0 = 232; break;

	case 888521890: iVar0 = 233; break;

	case 665823766: iVar0 = 234; break;

	case 427888057: iVar0 = 235; break;

	case 1121411181: iVar0 = 236; break;

	case 890225886: iVar0 = 237; break;

	case 651012186: iVar0 = 238; break;

	case 422776101: iVar0 = 239; break;

	case 1630543134: iVar0 = 240; break;

	case -1945668916: iVar0 = 241; break;

	case -627999265: iVar0 = 242; break;

	case 1682346315: iVar0 = 243; break;

	case 1021952654: iVar0 = 244; break;

	case 1319396867: iVar0 = 245; break;

	case 560794517: iVar0 = 246; break;

	case 858697496: iVar0 = 247; break;

	case -30981230: iVar0 = 248; break;

	case -328032215: iVar0 = 249; break;

	case -1451681225: iVar0 = 250; break;

	case 267904819: iVar0 = 251; break;

	case 1570178485: iVar0 = 252; break;

	case -1619850916: iVar0 = 253; break;

	case -713067148: iVar0 = 254; break;

	case 946477614: iVar0 = 255; break;

	case -1423343701: iVar0 = 256; break;

	case 445931457: iVar0 = 257; break;

	case 678558588: iVar0 = 258; break;

	case -854631987: iVar0 = 259; break;

	case -1707871209: iVar0 = 260; break;

	case -863391184: iVar0 = 261; break;

	case 671171671: iVar0 = 262; break;

	case 904519720: iVar0 = 263; break;

	case 670952414: iVar0 = 264; break;

	case -282875325: iVar0 = 265; break;

	case 2079623104: iVar0 = 266; break;

	case 1088443427: iVar0 = 267; break;

	case 200001600: iVar0 = 268; break;

	case 1620729159: iVar0 = 269; break;

	case -1713274238: iVar0 = 270; break;

	case -1571590969: iVar0 = 271; break;

	case -457639374: iVar0 = 272; break;

	case 64160805: iVar0 = 273; break;

	case 1015325203: iVar0 = 274; break;

	case -1951778967: iVar0 = 275; break;

	case 1836042304: iVar0 = 276; break;

	case -421094621: iVar0 = 277; break;

	case 641062099: iVar0 = 278; break;

	case 597454468: iVar0 = 279; break;

	case 713758205: iVar0 = 280; break;

	case 1042267708: iVar0 = 281; break;

	case -637951661: iVar0 = 282; break;

	case 195911857: iVar0 = 283; break;

	case 903988957: iVar0 = 284; break;

	case 1068170761: iVar0 = 285; break;

	case -619065384: iVar0 = 286; break;

	case -497085955: iVar0 = 287; break;

	case 1138369002: iVar0 = 288; break;

	case -1957731308: iVar0 = 289; break;

	case -2063712125: iVar0 = 290; break;

	case 1773674262: iVar0 = 291; break;

	case 1027059614: iVar0 = 292; break;

	case 1366782677: iVar0 = 293; break;

	case 216134256: iVar0 = 294; break;

	case 810154442: iVar0 = 295; break;

	case 77285961: iVar0 = 296; break;

	case 1617489838: iVar0 = 297; break;

	case 1697138602: iVar0 = 298; break;

	case 711811694: iVar0 = 299; break;
	}
	switch (iParam0) {
	case -895106351: iVar0 = 300; break;

	case 875367934: iVar0 = 301; break;

	case -979867160: iVar0 = 302; break;

	case -1233816942: iVar0 = 303; break;

	case -866958715: iVar0 = 304; break;

	case -1303573005: iVar0 = 305; break;

	case 2085207152: iVar0 = 306; break;

	case 857137150: iVar0 = 307; break;

	case 535952639: iVar0 = 308; break;

	case -1974657401: iVar0 = 309; break;

	case 129909013: iVar0 = 310; break;

	case -1499060170: iVar0 = 311; break;

	case 412032123: iVar0 = 312; break;

	case 915049044: iVar0 = 313; break;

	case 456478679: iVar0 = 314; break;

	case 907364848: iVar0 = 315; break;

	case -1783721060: iVar0 = 316; break;

	case -1008363280: iVar0 = 317; break;

	case 1429817922: iVar0 = 318; break;

	case -938326281: iVar0 = 319; break;

	case -1073925235: iVar0 = 320; break;

	case 1498524677: iVar0 = 321; break;

	case 1525596308: iVar0 = 322; break;

	case 1232639216: iVar0 = 323; break;

	case 956061600: iVar0 = 324; break;

	case 816551665: iVar0 = 325; break;

	case 2049704410: iVar0 = 326; break;

	case -796818724: iVar0 = 327; break;

	case 1775476370: iVar0 = 328; break;

	case 266230635: iVar0 = 329; break;

	case -588549683: iVar0 = 330; break;

	case 464027076: iVar0 = 331; break;

	case 2122049260: iVar0 = 332; break;

	case 1049130700: iVar0 = 333; break;

	case -116952560: iVar0 = 334; break;

	case 1424723115: iVar0 = 335; break;

	case -1007272003: iVar0 = 336; break;

	case -644829701: iVar0 = 337; break;

	case -2103222497: iVar0 = 338; break;

	case -1589795073: iVar0 = 339; break;

	case -1689668067: iVar0 = 340; break;

	case -189814108: iVar0 = 341; break;

	case -1595292141: iVar0 = 342; break;

	case -1540940714: iVar0 = 343; break;

	case -2136471172: iVar0 = 344; break;

	case -666892434: iVar0 = 345; break;

	case -1001125323: iVar0 = 346; break;

	case 904104464: iVar0 = 347; break;

	case 690016265: iVar0 = 348; break;

	case 38190590: iVar0 = 349; break;

	case 2119761078: iVar0 = 350; break;

	case -1213131712: iVar0 = 351; break;

	case 990079224: iVar0 = 352; break;

	case -905045993: iVar0 = 353; break;

	case 2104378143: iVar0 = 354; break;

	case -666631800: iVar0 = 355; break;

	case 549954933: iVar0 = 356; break;

	case 1830069972: iVar0 = 357; break;

	case 859320876: iVar0 = 358; break;

	case -552358316: iVar0 = 359; break;

	case 1522216340: iVar0 = 360; break;

	case -1783296601: iVar0 = 361; break;

	case 283995288: iVar0 = 362; break;

	case -975534410: iVar0 = 363; break;

	case -2088194624: iVar0 = 364; break;

	case 1744801848: iVar0 = 365; break;

	case -481389646: iVar0 = 366; break;

	case -1781363036: iVar0 = 367; break;

	case 496009839: iVar0 = 368; break;

	case -667608820: iVar0 = 369; break;

	case 460475899: iVar0 = 370; break;

	case 1491168919: iVar0 = 371; break;

	case -1611478806: iVar0 = 372; break;

	case 523495612: iVar0 = 373; break;

	case -78008273: iVar0 = 374; break;

	case -762375847: iVar0 = 375; break;

	case 331482129: iVar0 = 376; break;

	case -2083628050: iVar0 = 377; break;

	case -468800117: iVar0 = 378; break;

	case 724819757: iVar0 = 379; break;

	case -1058761348: iVar0 = 380; break;

	case -546178212: iVar0 = 381; break;

	case -118052734: iVar0 = 382; break;

	case 1654466691: iVar0 = 383; break;

	case -1077553649: iVar0 = 384; break;

	case -886092159: iVar0 = 385; break;

	case -1406331536: iVar0 = 386; break;

	case -1968934850: iVar0 = 387; break;

	case 3741245: iVar0 = 388; break;

	case 1387838298: iVar0 = 389; break;

	case -1941058219: iVar0 = 390; break;

	case 955033120: iVar0 = 391; break;

	case 677119231: iVar0 = 392; break;

	case -1616214916: iVar0 = 393; break;

	case -841195297: iVar0 = 394; break;

	case -909289279: iVar0 = 395; break;

	case -239567341: iVar0 = 396; break;

	case -613592707: iVar0 = 397; break;

	case -988568374: iVar0 = 398; break;

	case -1090807654: iVar0 = 399; break;
	}
	switch (iParam0) {
	case 534771589: iVar0 = 400; break;

	case -1340139519: iVar0 = 401; break;

	case -849980761: iVar0 = 402; break;

	case -551553478: iVar0 = 403; break;

	case 386581472: iVar0 = 404; break;

	case 1466454525: iVar0 = 405; break;

	case 283190173: iVar0 = 406; break;

	case 1528527015: iVar0 = 407; break;

	case -1690029966: iVar0 = 408; break;

	case -1685994466: iVar0 = 409; break;

	case 255166927: iVar0 = 410; break;

	case -271257487: iVar0 = 411; break;

	case 1885215284: iVar0 = 412; break;

	case -1935156988: iVar0 = 413; break;

	case 1061465906: iVar0 = 414; break;

	case -871031729: iVar0 = 415; break;

	case -101171485: iVar0 = 416; break;

	case -1590298770: iVar0 = 417; break;

	case 303441856: iVar0 = 418; break;

	case -2049689650: iVar0 = 419; break;

	case 788520303: iVar0 = 420; break;

	case -859861445: iVar0 = 421; break;

	case 1045897298: iVar0 = 422; break;

	case 116964921: iVar0 = 423; break;

	case -1502257606: iVar0 = 424; break;

	case -546150284: iVar0 = 425; break;

	case -357466888: iVar0 = 426; break;

	case 718674880: iVar0 = 427; break;

	case -1529401172: iVar0 = 428; break;

	case 2088037441: iVar0 = 429; break;

	case 2048866271: iVar0 = 430; break;

	case -1565431690: iVar0 = 431; break;

	case -1528465573: iVar0 = 432; break;

	case 401532197: iVar0 = 433; break;

	case 826974918: iVar0 = 434; break;

	case -676067408: iVar0 = 435; break;

	case 1877289089: iVar0 = 436; break;

	case 859380017: iVar0 = 437; break;

	case 233098354: iVar0 = 438; break;

	case 566101858: iVar0 = 439; break;

	case 529460830: iVar0 = 440; break;

	case -1833118141: iVar0 = 441; break;

	case 422823598: iVar0 = 442; break;

	case 1450358661: iVar0 = 443; break;

	case 741089893: iVar0 = 444; break;

	case 1289848370: iVar0 = 445; break;

	case 616166430: iVar0 = 446; break;

	case 1489225316: iVar0 = 447; break;

	case 753969632: iVar0 = 448; break;

	case -1182831168: iVar0 = 449; break;

	case 1545103753: iVar0 = 450; break;

	case 2090080808: iVar0 = 451; break;

	case 903606896: iVar0 = 452; break;

	case 26759391: iVar0 = 453; break;

	case 1651885364: iVar0 = 454; break;

	case 729529407: iVar0 = 455; break;

	case 528802126: iVar0 = 456; break;

	case -1468003071: iVar0 = 457; break;

	case 1683696787: iVar0 = 458; break;

	case -726859160: iVar0 = 459; break;

	case 1209899578: iVar0 = 460; break;

	case 930604285: iVar0 = 461; break;

	case -308584186: iVar0 = 462; break;

	case -64129874: iVar0 = 463; break;

	case -1431204514: iVar0 = 464; break;

	case -1133334304: iVar0 = 465; break;

	case -1809784771: iVar0 = 466; break;

	case -1576934998: iVar0 = 467; break;

	case -1570929684: iVar0 = 468; break;

	case 1976578151: iVar0 = 469; break;

	case -441419962: iVar0 = 470; break;

	case -841238543: iVar0 = 471; break;

	case 1644315794: iVar0 = 472; break;

	case 1964334039: iVar0 = 473; break;

	case -1168614925: iVar0 = 474; break;

	case -56760095: iVar0 = 475; break;

	case -1006202521: iVar0 = 476; break;

	case -1834049539: iVar0 = 477; break;

	case -2060372580: iVar0 = 478; break;

	case 1057304170: iVar0 = 479; break;

	case 1421572640: iVar0 = 480; break;

	case 481259621: iVar0 = 481; break;

	case 1227497670: iVar0 = 482; break;

	case 319276780: iVar0 = 483; break;

	case 2070827921: iVar0 = 484; break;

	case 1433629991: iVar0 = 485; break;

	case -1712994650: iVar0 = 486; break;

	case 2125094286: iVar0 = 487; break;

	case 712298404: iVar0 = 488; break;

	case 1998072324: iVar0 = 489; break;

	case 1249206960: iVar0 = 490; break;

	case -621355603: iVar0 = 491; break;

	case 1570835960: iVar0 = 492; break;

	case -1254202543: iVar0 = 493; break;

	case -956136061: iVar0 = 494; break;

	case -1925480683: iVar0 = 495; break;

	case 220143168: iVar0 = 496; break;

	case -1021851577: iVar0 = 497; break;

	case -773345516: iVar0 = 498; break;

	case 1091795205: iVar0 = 499; break;
	}
	switch (iParam0) {
	case -1159824040: iVar0 = 500; break;

	case 1448723789: iVar0 = 501; break;

	case -488127340: iVar0 = 502; break;

	case -1964967283: iVar0 = 503; break;

	case -1635180127: iVar0 = 504; break;

	case -10501563: iVar0 = 505; break;

	case 933419071: iVar0 = 506; break;

	case 1362374839: iVar0 = 507; break;

	case 488078687: iVar0 = 508; break;

	case -1869054624: iVar0 = 509; break;

	case -1817642831: iVar0 = 510; break;

	case 482472119: iVar0 = 511; break;

	case -1736839817: iVar0 = 512; break;

	case 415527077: iVar0 = 513; break;

	case -907440189: iVar0 = 514; break;

	case -2099454789: iVar0 = 515; break;

	case -1719543542: iVar0 = 516; break;

	case 1848661824: iVar0 = 517; break;

	case -2018029706: iVar0 = 518; break;

	case -717212544: iVar0 = 519; break;

	case -594210450: iVar0 = 520; break;

	case 1520437442: iVar0 = 521; break;

	case 374349467: iVar0 = 522; break;

	case 1533123503: iVar0 = 523; break;

	case -1832780872: iVar0 = 524; break;

	case 130721536: iVar0 = 525; break;

	case 195356001: iVar0 = 526; break;

	case -556915722: iVar0 = 527; break;

	case -1930562696: iVar0 = 528; break;

	case 941227127: iVar0 = 529; break;

	case -842699589: iVar0 = 530; break;

	case 1654019571: iVar0 = 531; break;

	case 224191803: iVar0 = 532; break;

	case -1996796255: iVar0 = 533; break;

	case -1850715440: iVar0 = 534; break;

	case 1603163718: iVar0 = 535; break;

	case 1567227108: iVar0 = 536; break;

	case -1630649997: iVar0 = 537; break;

	case -25727072: iVar0 = 538; break;

	case -1363418653: iVar0 = 539; break;

	case 1878229535: iVar0 = 540; break;

	case 1531050226: iVar0 = 541; break;

	case 1246243345: iVar0 = 542; break;

	case 463561930: iVar0 = 543; break;

	case 1431846777: iVar0 = 544; break;

	case -460168116: iVar0 = 545; break;

	case -2015343582: iVar0 = 546; break;

	case 2051301469: iVar0 = 547; break;

	case 1887452986: iVar0 = 548; break;

	case -1551331969: iVar0 = 549; break;

	case 682382693: iVar0 = 550; break;

	case 765481743: iVar0 = 551; break;

	case 1094179010: iVar0 = 552; break;

	case 1906582382: iVar0 = 553; break;

	case 1923135102: iVar0 = 554; break;

	case -964908188: iVar0 = 555; break;

	case -1145896773: iVar0 = 556; break;

	case -776248682: iVar0 = 557; break;

	case 872613482: iVar0 = 558; break;

	case 1049060638: iVar0 = 559; break;

	case -927135334: iVar0 = 560; break;

	case -445820043: iVar0 = 561; break;

	case 1610045630: iVar0 = 562; break;

	case -1070800165: iVar0 = 563; break;

	case -589592162: iVar0 = 564; break;

	case 1723966869: iVar0 = 565; break;

	case 402539085: iVar0 = 566; break;

	case 873283678: iVar0 = 567; break;

	case -883161109: iVar0 = 568; break;

	case -1764919154: iVar0 = 569; break;

	case -2050352513: iVar0 = 570; break;

	case 1114188021: iVar0 = 571; break;

	case 1798282399: iVar0 = 572; break;

	case 1944820428: iVar0 = 573; break;

	case 100210893: iVar0 = 574; break;

	case -1699022511: iVar0 = 575; break;

	case 466917406: iVar0 = 576; break;

	case -349746245: iVar0 = 577; break;

	case 715904570: iVar0 = 578; break;

	case 281777035: iVar0 = 579; break;

	case 1511283406: iVar0 = 580; break;

	case -241337647: iVar0 = 581; break;

	case 748393780: iVar0 = 582; break;

	case 709511536: iVar0 = 583; break;

	case -652535466: iVar0 = 584; break;

	case -1148900842: iVar0 = 585; break;

	case -271863310: iVar0 = 586; break;

	case 35654857: iVar0 = 587; break;

	case 1894813304: iVar0 = 588; break;

	case 1184660438: iVar0 = 589; break;

	case -1461750963: iVar0 = 590; break;

	case 769964545: iVar0 = 591; break;

	case 1424500982: iVar0 = 592; break;

	case -1810785185: iVar0 = 593; break;

	case 837990279: iVar0 = 594; break;

	case -1357788003: iVar0 = 595; break;

	case -8210327: iVar0 = 596; break;

	case 1186553524: iVar0 = 597; break;

	case 1174934203: iVar0 = 598; break;

	case -984449089: iVar0 = 599; break;
	}
	switch (iParam0) {
	case -49570837: iVar0 = 600; break;

	case -1680371785: iVar0 = 601; break;

	case -1850912390: iVar0 = 602; break;

	case -1740038087: iVar0 = 603; break;

	case -619541947: iVar0 = 604; break;

	case 294240494: iVar0 = 605; break;

	case -765542196: iVar0 = 606; break;

	case -1420662645: iVar0 = 607; break;

	case 331918356: iVar0 = 608; break;

	case 204953755: iVar0 = 609; break;

	case 1764172461: iVar0 = 610; break;

	case 1462870109: iVar0 = 611; break;

	case -2071014467: iVar0 = 612; break;

	case 478439238: iVar0 = 613; break;

	case 796489219: iVar0 = 614; break;

	case 843279688: iVar0 = 615; break;

	case 1752551314: iVar0 = 616; break;

	case 735155845: iVar0 = 617; break;

	case 1863251462: iVar0 = 618; break;

	case -2142058763: iVar0 = 619; break;

	case -207591105: iVar0 = 620; break;

	case -932813887: iVar0 = 621; break;

	case -313503199: iVar0 = 622; break;

	case 718936417: iVar0 = 623; break;

	case -1107649605: iVar0 = 624; break;

	case 39090475: iVar0 = 625; break;

	case 1628251208: iVar0 = 626; break;

	case -311245907: iVar0 = 627; break;

	case -942031335: iVar0 = 628; break;

	case -1285040537: iVar0 = 629; break;

	case -606706891: iVar0 = 630; break;

	case -1719095858: iVar0 = 631; break;

	case 1725502681: iVar0 = 632; break;

	case 609583888: iVar0 = 633; break;

	case -1172383155: iVar0 = 634; break;

	case -3492404: iVar0 = 635; break;

	case -1006004645: iVar0 = 636; break;

	case -1937311482: iVar0 = 637; break;

	case -2065604094: iVar0 = 638; break;

	case 2028818254: iVar0 = 639; break;

	case 1624012067: iVar0 = 640; break;

	case -1877817141: iVar0 = 641; break;

	case -911576192: iVar0 = 642; break;

	case -2038013276: iVar0 = 643; break;

	case -901986542: iVar0 = 644; break;

	case 1792492176: iVar0 = 645; break;

	case -86485329: iVar0 = 646; break;

	case -1083434268: iVar0 = 647; break;

	case 613606704: iVar0 = 648; break;

	case -394853815: iVar0 = 649; break;

	case -1103127620: iVar0 = 650; break;

	case -1565650506: iVar0 = 651; break;

	case 1845793118: iVar0 = 652; break;

	case 105835401: iVar0 = 653; break;

	case 874268443: iVar0 = 654; break;

	case 2088424900: iVar0 = 655; break;

	case -786732051: iVar0 = 656; break;

	case 2054090970: iVar0 = 657; break;

	case 1878368697: iVar0 = 658; break;

	case 569662133: iVar0 = 659; break;

	case -792802958: iVar0 = 660; break;

	case 2006001399: iVar0 = 661; break;

	case 1785762805: iVar0 = 662; break;

	case 737220320: iVar0 = 663; break;

	case 1396060544: iVar0 = 664; break;

	case -1964728736: iVar0 = 665; break;

	case 1593302778: iVar0 = 666; break;

	case 84849272: iVar0 = 667; break;

	case -402776165: iVar0 = 668; break;

	case -221660734: iVar0 = 669; break;

	case 1648112645: iVar0 = 670; break;

	case 2066668749: iVar0 = 671; break;

	case -4424163: iVar0 = 672; break;

	case -173288591: iVar0 = 673; break;

	case 253771760: iVar0 = 674; break;

	case -1431574022: iVar0 = 675; break;

	case 959314664: iVar0 = 676; break;

	case 1670479428: iVar0 = 677; break;

	case 1779534675: iVar0 = 678; break;

	case -1268204471: iVar0 = 679; break;

	case -1937668252: iVar0 = 680; break;

	case -192802570: iVar0 = 681; break;

	case 1200380295: iVar0 = 682; break;

	case -644503216: iVar0 = 683; break;

	case 496410473: iVar0 = 684; break;

	case 462780886: iVar0 = 685; break;

	case 211198653: iVar0 = 686; break;

	case -504012739: iVar0 = 687; break;

	case 34276608: iVar0 = 688; break;

	case -2088223199: iVar0 = 689; break;

	case 2056773549: iVar0 = 690; break;

	case 962023066: iVar0 = 691; break;

	case 893288510: iVar0 = 692; break;

	case 1963590204: iVar0 = 693; break;

	case 919272855: iVar0 = 694; break;

	case 413754974: iVar0 = 695; break;

	case -1862916472: iVar0 = 696; break;

	case -1184732039: iVar0 = 697; break;

	case -143503455: iVar0 = 698; break;
	}
	if (iVar0 != -1) {
		*iParam1 = 129 + iVar0;
		return true;
	}
	return false;
}

// Position - 0x17C76
bool func_101(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (func_103(iParam0) == 6022) {
		return false;
	}
	iVar0 = func_102(iParam0, iParam1);
	iVar1 = iParam0;
	return gameplay::is_bit_set(iVar0, func_82(iVar1));
}

// Position - 0x17CA8
int func_102(var uParam0, int iParam1) {
	int iVar0;

	iVar0 = func_107(func_103(uParam0), iParam1, 0);
	return iVar0;
}

// Position - 0x17CC1
int func_103(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	iVar1 = func_87(iVar0);
	if (func_86() == 0 || func_85() == 0 || func_86() == 999 && func_85() == 999) {
		switch (iVar1) {
		case 0: return 1033;

		case 1: return 1034;

		case 2: return 1035;

		case 3: return 1036;

		case 4: return 1037;

		case 5: return 1497;

		case 6: return 1750;

		case 7: return 1944;

		case 8: return 1945;

		case 9: return 1946;

		case 10: return 1947;

		case 11: return 1948;

		case 12: return 1949;

		case 13: return 2404;

		case 14: return 2424;

		case 15: return 2427;

		case 16: return 2430;

		case 17: return 2593;

		case 18: return 2596;

		case 19: return 2599;

		case 20: return 3755;

		case 21: return 3758;

		case 22: return 3833;

		case 23: return 3836;

		case 24: return 3839;

		case 25: return 3842;

		case 26: return 5333;

		case 27: return 5336;
		}
	}
	return 6022;
}

// Position - 0x17EB3
int func_104(int iParam0) {
	switch (entity::get_entity_model(iParam0)) {
	case joaat("player_zero"): return 0;

	case joaat("player_one"): return 1;

	case joaat("player_two"): return 2;

	case joaat("mp_m_freemode_01"): return 3;

	case joaat("mp_f_freemode_01"): return 4;
	}
	return 0;
}

// Position - 0x17F08
int func_105(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;

	if (iParam0 == joaat("mp_m_freemode_01")) {
		if (iParam1 == 0) {
			return 123;
			return -1;
		}
		else if (iParam1 == 1) {
			return 93;
		}
		else if (iParam1 == 2) {
			return 93;
		}
		else if (iParam1 == 3) {
			return 93;
		}
		else if (iParam1 == 4) {
			return 93;
		}
		else if (iParam1 == 5) {
			return 93;
		}
		else if (iParam1 == 6) {
			return 93;
		}
		else if (iParam1 == 7) {
			return 94;
		}
		else if (iParam1 == 8) {
			return 94;
		}
		else if (iParam1 == 9) {
			return 94;
		}
		else if (iParam1 == 10) {
			return 94;
		}
		else if (iParam1 == 11) {
			return 94;
		}
		else if (iParam1 == 12) {
			return 94;
		}
		else if (iParam1 == 13) {
			return 95;
		}
		else if (iParam1 == 14) {
			return 95;
		}
		else if (iParam1 == 15) {
			return 95;
		}
		else if (iParam1 == 16) {
			return 95;
		}
		else if (iParam1 == 17) {
			return 95;
		}
		else if (iParam1 == 18) {
			return 95;
		}
		else if (iParam1 == 19) {
			return 96;
		}
		else if (iParam1 == 20) {
			return 96;
		}
		else if (iParam1 == 21) {
			return 96;
		}
		else if (iParam1 == 22) {
			return 96;
		}
		else if (iParam1 == 23) {
			return 96;
		}
		else if (iParam1 == 24) {
			return 96;
		}
		else if (iParam1 == 25) {
			return 96;
		}
		else if (iParam1 == 26) {
			return 97;
		}
		else if (iParam1 == 27) {
			return 97;
		}
		else if (iParam1 == 28) {
			return 97;
		}
		else if (iParam1 == 29) {
			return 97;
		}
		else if (iParam1 == 30) {
			return 97;
		}
		else if (iParam1 == 31) {
			return 97;
		}
		else if (iParam1 == 32) {
			return 98;
		}
		else if (iParam1 == 33) {
			return 98;
		}
		else if (iParam1 == 34) {
			return 98;
		}
		else if (iParam1 == 35) {
			return 98;
		}
		else if (iParam1 == 36) {
			return 98;
		}
		else if (iParam1 == 37) {
			return 98;
		}
		else if (iParam1 == 38) {
			return 99;
		}
		else if (iParam1 == 39) {
			return 99;
		}
		else if (iParam1 == 40) {
			return 99;
		}
		else if (iParam1 == 41) {
			return 99;
		}
		else if (iParam1 == 42) {
			return 99;
		}
		else if (iParam1 == 43) {
			return 99;
		}
		else if (iParam1 == 44) {
			return 99;
		}
		else if (iParam1 == 45) {
			return 100;
		}
		else if (iParam1 == 46) {
			return 100;
		}
		else if (iParam1 == 47) {
			return 100;
		}
		else if (iParam1 == 48) {
			return 100;
		}
		else if (iParam1 == 49) {
			return 100;
		}
		else if (iParam1 == 50) {
			return 101;
		}
		else if (iParam1 == 51) {
			return 101;
		}
		else if (iParam1 == 52) {
			return 101;
		}
		else if (iParam1 == 53) {
			return 101;
		}
		else if (iParam1 == 54) {
			return 101;
		}
		else if (iParam1 == 55) {
			return 101;
		}
		else if (iParam1 == 56) {
			return 101;
		}
		else if (iParam1 == 57) {
			return 102;
		}
		else if (iParam1 == 58) {
			return 102;
		}
		else if (iParam1 == 59) {
			return 102;
		}
		else if (iParam1 == 60) {
			return 102;
		}
		else if (iParam1 == 61) {
			return 102;
		}
		else if (iParam1 == 62) {
			return 102;
		}
		else if (iParam1 == 63) {
			return 103;
		}
		else if (iParam1 == 64) {
			return 103;
		}
		else if (iParam1 == 65) {
			return 103;
		}
		else if (iParam1 == 66) {
			return 103;
		}
		else if (iParam1 == 67) {
			return 103;
		}
		else if (iParam1 == 68) {
			return 103;
		}
		else if (iParam1 == 69) {
			return 104;
		}
		else if (iParam1 == 70) {
			return 104;
		}
		else if (iParam1 == 71) {
			return 104;
		}
		else if (iParam1 == 72) {
			return 104;
		}
		else if (iParam1 == 73) {
			return 104;
		}
		else if (iParam1 == 74) {
			return 105;
		}
		else if (iParam1 == 75) {
			return 105;
		}
		else if (iParam1 == 76) {
			return 105;
		}
		else if (iParam1 == 77) {
			return 105;
		}
		else if (iParam1 == 78) {
			return 105;
		}
		else if (iParam1 == 79) {
			return 105;
		}
		else if (iParam1 == 80) {
			return 106;
		}
		else if (iParam1 == 81) {
			return 106;
		}
		else if (iParam1 == 82) {
			return 106;
		}
		else if (iParam1 == 83) {
			return 106;
		}
		else if (iParam1 == 84) {
			return 106;
		}
		else if (iParam1 == 85) {
			return 107;
		}
		else if (iParam1 == 86) {
			return 107;
		}
		else if (iParam1 == 87) {
			return 107;
		}
		else if (iParam1 == 88) {
			return 107;
		}
		else if (iParam1 == 89) {
			return 107;
		}
		else if (iParam1 == 90) {
			return 107;
		}
		else if (iParam1 >= 91) {
			iVar0 = func_121(iParam0, iParam1, 2, 3);
			if (iVar0 != -1) {
				switch (iVar0) {
				case -1983429828:
				case 228608740:
				case 600995656:
				case 850728205:
				case 1093513726: return 108;

				case -457639650:
				case -94952354:
				case 144031963:
				case 533262145:
				case -1545668757: return 109;

				case -1625493211:
				case -1112723899:
				case -1432451032:
				case -647502406:
				case -925481833: return 110;

				case -1168328595:
				case -1421993424:
				case -576454917:
				case -438399124:
				case 271967258: return 111;

				case -1903246936:
				case 1155542604:
				case 2048071857:
				case -1605475033:
				case 100085859: return 112;

				case 745771948:
				case -1619297862:
				case -1878926649:
				case -485850917:
				case 558628189: return 113;

				case 1577121865:
				case 884057515:
				case 2055188806:
				case 1362452146:
				case -1761842625: return 114;
				}
				iVar1 = dlc1::_get_num_forced_components(iVar0);
				iVar2 = 0;
				while (iVar2 < iVar1) {
					dlc1::get_forced_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
					if (iVar5 == 10) {
						if (iVar3 != 0 && iVar3 != 1849449579) {
							return func_98(iVar3, 3);
						}
						else {
							return uVar4;
						}
					}
					iVar2++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		if (iParam1 == 0) {
			return 123;
			return -1;
		}
		else if (iParam1 == 1) {
			return 93;
		}
		else if (iParam1 == 2) {
			return 93;
		}
		else if (iParam1 == 3) {
			return 93;
		}
		else if (iParam1 == 4) {
			return 93;
		}
		else if (iParam1 == 5) {
			return 93;
		}
		else if (iParam1 == 6) {
			return 93;
		}
		else if (iParam1 == 7) {
			return 94;
		}
		else if (iParam1 == 8) {
			return 94;
		}
		else if (iParam1 == 9) {
			return 94;
		}
		else if (iParam1 == 10) {
			return 94;
		}
		else if (iParam1 == 11) {
			return 94;
		}
		else if (iParam1 == 12) {
			return 94;
		}
		else if (iParam1 == 13) {
			return 95;
		}
		else if (iParam1 == 14) {
			return 95;
		}
		else if (iParam1 == 15) {
			return 95;
		}
		else if (iParam1 == 16) {
			return 95;
		}
		else if (iParam1 == 17) {
			return 95;
		}
		else if (iParam1 == 18) {
			return 96;
		}
		else if (iParam1 == 19) {
			return 96;
		}
		else if (iParam1 == 20) {
			return 96;
		}
		else if (iParam1 == 21) {
			return 96;
		}
		else if (iParam1 == 22) {
			return 96;
		}
		else if (iParam1 == 23) {
			return 96;
		}
		else if (iParam1 == 24) {
			return 97;
		}
		else if (iParam1 == 25) {
			return 97;
		}
		else if (iParam1 == 26) {
			return 97;
		}
		else if (iParam1 == 27) {
			return 97;
		}
		else if (iParam1 == 28) {
			return 97;
		}
		else if (iParam1 == 29) {
			return 97;
		}
		else if (iParam1 == 30) {
			return 98;
		}
		else if (iParam1 == 31) {
			return 98;
		}
		else if (iParam1 == 32) {
			return 98;
		}
		else if (iParam1 == 33) {
			return 98;
		}
		else if (iParam1 == 34) {
			return 98;
		}
		else if (iParam1 == 35) {
			return 99;
		}
		else if (iParam1 == 36) {
			return 99;
		}
		else if (iParam1 == 37) {
			return 99;
		}
		else if (iParam1 == 38) {
			return 99;
		}
		else if (iParam1 == 39) {
			return 99;
		}
		else if (iParam1 == 40) {
			return 99;
		}
		else if (iParam1 == 41) {
			return 100;
		}
		else if (iParam1 == 42) {
			return 100;
		}
		else if (iParam1 == 43) {
			return 100;
		}
		else if (iParam1 == 44) {
			return 100;
		}
		else if (iParam1 == 45) {
			return 100;
		}
		else if (iParam1 == 46) {
			return 100;
		}
		else if (iParam1 == 47) {
			return 101;
		}
		else if (iParam1 == 48) {
			return 101;
		}
		else if (iParam1 == 49) {
			return 101;
		}
		else if (iParam1 == 50) {
			return 101;
		}
		else if (iParam1 == 51) {
			return 101;
		}
		else if (iParam1 == 52) {
			return 101;
		}
		else if (iParam1 == 53) {
			return 102;
		}
		else if (iParam1 == 54) {
			return 102;
		}
		else if (iParam1 == 55) {
			return 102;
		}
		else if (iParam1 == 56) {
			return 102;
		}
		else if (iParam1 == 57) {
			return 102;
		}
		else if (iParam1 == 58) {
			return 102;
		}
		else if (iParam1 == 59) {
			return 102;
		}
		else if (iParam1 == 60) {
			return 103;
		}
		else if (iParam1 == 61) {
			return 103;
		}
		else if (iParam1 == 62) {
			return 103;
		}
		else if (iParam1 == 63) {
			return 103;
		}
		else if (iParam1 == 64) {
			return 103;
		}
		else if (iParam1 == 65) {
			return 103;
		}
		else if (iParam1 == 66) {
			return 103;
		}
		else if (iParam1 == 67) {
			return 104;
		}
		else if (iParam1 == 68) {
			return 104;
		}
		else if (iParam1 == 69) {
			return 104;
		}
		else if (iParam1 == 70) {
			return 104;
		}
		else if (iParam1 == 71) {
			return 104;
		}
		else if (iParam1 == 72) {
			return 104;
		}
		else if (iParam1 == 73) {
			return 105;
		}
		else if (iParam1 == 74) {
			return 105;
		}
		else if (iParam1 == 75) {
			return 105;
		}
		else if (iParam1 == 76) {
			return 105;
		}
		else if (iParam1 == 77) {
			return 105;
		}
		else if (iParam1 == 78) {
			return 105;
		}
		else if (iParam1 == 79) {
			return func_98(-1261720761, 4);
		}
		else if (iParam1 == 80) {
			return func_98(-1261720761, 4);
		}
		else if (iParam1 == 81) {
			return func_98(-1261720761, 4);
		}
		else if (iParam1 == 82) {
			return func_98(-1261720761, 4);
		}
		else if (iParam1 == 83) {
			return func_98(-1261720761, 4);
		}
		else if (iParam1 == 84) {
			return func_98(-1261720761, 4);
		}
		else if (iParam1 == 85) {
			return 107;
		}
		else if (iParam1 == 86) {
			return 107;
		}
		else if (iParam1 == 87) {
			return 107;
		}
		else if (iParam1 == 88) {
			return 107;
		}
		else if (iParam1 == 89) {
			return 107;
		}
		else if (iParam1 == 90) {
			return 107;
		}
		else if (iParam1 == 91) {
			return 107;
		}
		else if (iParam1 >= 92) {
			iVar6 = func_121(iParam0, iParam1, 2, 4);
			if (iVar6 != -1) {
				switch (iVar6) {
				case -1238992735:
				case -1947261901:
				case -771018642:
				case -1486169302:
				case 1159796376: return 108;

				case 1389867525:
				case 1622396349:
				case 1851615504:
				case -2052614252:
				case -1818610823: return 109;

				case 1855226196:
				case 271139943:
				case -1099030254:
				case -307724442:
				case -637872117: return 110;

				case -663797501:
				case 2088667427:
				case 1779786837:
				case -1609936838:
				case -1880477702: return 111;

				case 1052499595:
				case 142438919:
				case 458495932:
				case -701723290:
				case -119221546: return 112;

				case 1245050198:
				case 1481937299:
				case 1754870300:
				case -2033029490:
				case 62318681: return 112;

				case 665775322:
				case 618391324:
				case 497473714:
				case 123808807:
				case -231538229: return 114;
				}
				iVar7 = dlc1::_get_num_forced_components(iVar6);
				iVar8 = 0;
				while (iVar8 < iVar7) {
					dlc1::get_forced_component(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
					if (iVar11 == 10) {
						if (iVar9 != 0 && iVar9 != 1849449579) {
							return func_98(iVar9, 4);
						}
						else {
							return uVar10;
						}
					}
					iVar8++;
				}
			}
		}
	}
	return -1;
}

// Position - 0x18D09
void func_106(int iParam0, int iParam1) {
	struct<12> Var0;
	int iVar13;
	int iVar14;
	int iVar15;
	struct<7> Var16;
	int iVar31;
	int iVar32;
	struct<7> Var33;
	int iVar48;
	int iVar49;
	struct<7> Var50;
	int iVar65;
	int iVar66;
	struct<7> Var67;
	int iVar82;

	if (!ped::is_ped_injured(iParam1)) {
		iVar13 = func_104(iParam1);
		if (iParam0 != 0) {
			if (iVar13 == 3 || iVar13 == 4) {
				if (iParam0 == 1019352240) {
					func_132(13, 0, Global_69521);
					func_132(14, 0, Global_69521);
					func_132(15, 0, Global_69521);
					func_132(16, 0, Global_69521);
					func_132(71, 0, Global_69521);
					func_132(72, 0, Global_69521);
					return;
				}
				else if (iParam0 == 277073536) {
					if (iVar13 == 3) {
						func_132(73, 0, Global_69521);
						func_132(74, 0, Global_69521);
						func_132(75, 0, Global_69521);
						func_132(76, 0, Global_69521);
						func_132(77, 0, Global_69521);
						func_132(78, 0, Global_69521);
						func_132(79, 0, Global_69521);
						func_132(80, 0, Global_69521);
						func_132(81, 0, Global_69521);
						func_132(82, 0, Global_69521);
						func_132(83, 0, Global_69521);
						func_132(84, 0, Global_69521);
						func_132(85, 0, Global_69521);
						func_132(86, 0, Global_69521);
						func_132(90, 0, Global_69521);
						func_132(91, 0, Global_69521);
						func_132(124, 0, Global_69521);
						func_132(125, 0, Global_69521);
						func_132(87, 0, Global_69521);
						func_132(88, 0, Global_69521);
						func_132(89, 0, Global_69521);
						iVar15 = dlc1::_get_num_decorations(3);
						iVar14 = 0;
						while (iVar14 < iVar15) {
							if (dlc1::_0xFF56381874F82086(3, iVar14, &Var16)) {
								if (Var16.f_6 == 277073536) {
									func_132(129 + iVar14, 0, Global_69521);
								}
							}
							iVar14++;
						}
					}
					else {
						func_132(73, 0, Global_69521);
						func_132(74, 0, Global_69521);
						func_132(75, 0, Global_69521);
						func_132(76, 0, Global_69521);
						func_132(77, 0, Global_69521);
						func_132(78, 0, Global_69521);
						func_132(79, 0, Global_69521);
						func_132(80, 0, Global_69521);
						func_132(81, 0, Global_69521);
						func_132(82, 0, Global_69521);
						func_132(83, 0, Global_69521);
						func_132(84, 0, Global_69521);
						func_132(85, 0, Global_69521);
						func_132(92, 0, Global_69521);
						func_132(87, 0, Global_69521);
						func_132(88, 0, Global_69521);
						func_132(89, 0, Global_69521);
						iVar32 = dlc1::_get_num_decorations(4);
						iVar31 = 0;
						while (iVar31 < iVar32) {
							if (dlc1::_0xFF56381874F82086(4, iVar31, &Var33)) {
								if (Var33.f_6 == 277073536) {
									func_132(129 + iVar31, 0, Global_69521);
								}
							}
							iVar31++;
						}
					}
				}
				else if (iParam0 == 2140335355) {
					if (iVar13 == 3) {
						func_132(93, 0, Global_69521);
						func_132(94, 0, Global_69521);
						func_132(95, 0, Global_69521);
						func_132(96, 0, Global_69521);
						func_132(97, 0, Global_69521);
						func_132(98, 0, Global_69521);
						func_132(99, 0, Global_69521);
						func_132(100, 0, Global_69521);
						func_132(101, 0, Global_69521);
						func_132(102, 0, Global_69521);
						func_132(103, 0, Global_69521);
						func_132(104, 0, Global_69521);
						func_132(105, 0, Global_69521);
						func_132(106, 0, Global_69521);
						func_132(107, 0, Global_69521);
						func_132(108, 0, Global_69521);
						func_132(109, 0, Global_69521);
						func_132(110, 0, Global_69521);
						func_132(111, 0, Global_69521);
						func_132(112, 0, Global_69521);
						func_132(113, 0, Global_69521);
						func_132(114, 0, Global_69521);
						func_132(115, 0, Global_69521);
						func_132(116, 0, Global_69521);
						func_132(117, 0, Global_69521);
						func_132(123, 0, Global_69521);
						iVar49 = dlc1::_get_num_decorations(3);
						iVar48 = 0;
						while (iVar48 < iVar49) {
							if (dlc1::_0xFF56381874F82086(3, iVar48, &Var50)) {
								if (Var50.f_6 == 2140335355) {
									func_132(129 + iVar48, 0, Global_69521);
								}
							}
							iVar48++;
						}
					}
					else {
						func_132(93, 0, Global_69521);
						func_132(94, 0, Global_69521);
						func_132(95, 0, Global_69521);
						func_132(96, 0, Global_69521);
						func_132(97, 0, Global_69521);
						func_132(98, 0, Global_69521);
						func_132(99, 0, Global_69521);
						func_132(100, 0, Global_69521);
						func_132(101, 0, Global_69521);
						func_132(102, 0, Global_69521);
						func_132(103, 0, Global_69521);
						func_132(104, 0, Global_69521);
						func_132(105, 0, Global_69521);
						func_132(106, 0, Global_69521);
						func_132(107, 0, Global_69521);
						func_132(108, 0, Global_69521);
						func_132(109, 0, Global_69521);
						func_132(110, 0, Global_69521);
						func_132(111, 0, Global_69521);
						func_132(112, 0, Global_69521);
						func_132(113, 0, Global_69521);
						func_132(114, 0, Global_69521);
						func_132(115, 0, Global_69521);
						func_132(116, 0, Global_69521);
						func_132(117, 0, Global_69521);
						func_132(118, 0, Global_69521);
						func_132(119, 0, Global_69521);
						func_132(120, 0, Global_69521);
						func_132(121, 0, Global_69521);
						func_132(122, 0, Global_69521);
						func_132(123, 0, Global_69521);
						iVar66 = dlc1::_get_num_decorations(4);
						iVar65 = 0;
						while (iVar65 < iVar66) {
							if (dlc1::_0xFF56381874F82086(4, iVar65, &Var67)) {
								if (Var67.f_6 == 2140335355) {
									func_132(129 + iVar65, 0, Global_69521);
								}
							}
							iVar65++;
						}
					}
					return;
				}
			}
			iVar82 = 0;
			while (iVar82 < 127) {
				if (func_73(&Var0, iVar82, iVar13, iParam1, -1)) {
					if (Var0.f_8 == iParam0) {
						func_132(Var0.f_11, 0, Global_69521);
					}
				}
				iVar82++;
			}
		}
	}
}

// Position - 0x19306
int func_107(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_13(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x19338
int func_108(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = func_134();
	if (iVar0 != -1) {
		if (!func_109(iParam0, iParam1, iVar0)) {
			func_132(iVar0, 0, Global_69521);
			return 1;
		}
	}
	return 0;
}

// Position - 0x1936A
int func_109(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_116(iParam0, iParam1)) {
		if (iParam0 == joaat("mp_m_freemode_01")) {
			iVar0 = -1;
			iVar1 = -1;
			if (iParam1 >= 237) {
				iVar1 = func_121(iParam0, iParam1, 11, 3);
				iVar0 = func_112(iVar1);
			}
			if (iVar1 != -1 && func_37(iVar1, 0) != -1) {
				return 0;
			}
			if (iVar1 != -1 && func_110(iVar1, 0) != -1) {
				return 0;
			}
			if (iVar1 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar1, -497440475, 0)) {
				return 0;
			}
			if (iVar1 == -1198378836 || iVar1 == 968798999 || iVar1 == 1283250323) {
				return 0;
			}
			if (iParam1 >= 0 && iParam1 <= 15 || iParam1 >= 16 && iParam1 <= 31 || iParam1 >= 124 && iParam1 <= 139 ||
				iVar0 == 0 || iVar0 == 1 || iVar0 == 8) {
				if (iParam2 == 15) {
					return 1;
				}
				else if (iParam2 == 13 || iParam2 == 14) {
					if (func_97(iParam0, 11, iParam1, 0) == -1) {
						return 1;
					}
				}
			}
			else if (iParam1 >= 80 && iParam1 <= 95 || iVar0 == 5) {
				if (iParam2 == 16 || iParam2 == 71 || iParam2 == 72) {
					return 1;
				}
			}
			else if (iParam1 >= 140 && iParam1 <= 155 || iVar0 == 9) {
				if (iParam2 == 13 || iParam2 == 15) {
					return 1;
				}
			}
		}
		else if (iParam0 == joaat("mp_f_freemode_01")) {
			iVar2 = -1;
			iVar3 = -1;
			if (iParam1 >= 256) {
				iVar3 = func_121(iParam0, iParam1, 11, 4);
				iVar2 = func_112(iVar3);
			}
			if (iVar3 != -1 && func_37(iVar3, 0) != -1) {
				return 0;
			}
			if (iVar3 != -1 && func_110(iVar3, 0) != -1) {
				return 0;
			}
			if (iVar3 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar3, -497440475, 0)) {
				return 0;
			}
			if (iParam1 >= 0 && iParam1 <= 15 || iVar2 == 0) {
				if (iParam2 == 13 || iParam2 == 15) {
					if (func_97(iParam0, 11, iParam1, 0) == -1) {
						return 1;
					}
				}
			}
			else if (iParam1 >= 32 && iParam1 <= 47 || iVar2 == 2) {
				if (iParam2 == 13 || iParam2 == 16) {
					if (func_97(iParam0, 11, iParam1, 0) == -1) {
						return 1;
					}
				}
			}
			else if (iParam1 >= 64 && iParam1 <= 79 || iVar2 == 4) {
				if (iParam2 == 13) {
					return 1;
				}
				if (iParam2 == 15) {
					if (iVar2 != 4 || !dlc1::_0x341DE7ED1D2A1BFD(iVar3, 1113995558, 0)) {
						return 1;
					}
				}
			}
			else if (iParam1 >= 80 && iParam1 <= 95 || iVar2 == 5) {
				if (iParam2 == 13) {
					return 1;
				}
			}
			else if (iParam1 >= 144 && iParam1 <= 159 || iVar2 == 9) {
				if (iParam2 == 14) {
					return 1;
				}
			}
		}
	}
	return 0;
}

// Position - 0x196DB
int func_110(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = -1;
	if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1769225721, iParam1)) {
		iVar0 = 0;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1834446747, iParam1)) {
		iVar0 = 1;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -939525357, iParam1)) {
		iVar0 = 2;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 38465448, iParam1)) {
		iVar0 = 3;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1469891622, iParam1)) {
		iVar0 = 4;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -502321359, iParam1)) {
		iVar0 = 5;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -792359778, iParam1)) {
		iVar0 = 6;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 997614074, iParam1)) {
		iVar0 = 7;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 748799057, iParam1)) {
		iVar0 = 8;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 653048039, iParam1)) {
		iVar0 = 9;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1922736331, iParam1)) {
		iVar0 = 10;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1685128312, iParam1)) {
		iVar0 = 11;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1892460036, iParam1)) {
		iVar0 = 12;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -296738547, iParam1)) {
		iVar0 = 13;
	}
	return iVar0;
}

// Position - 0x1981F
int func_111(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 == joaat("mp_m_freemode_01")) {
		iVar0 = -1;
		iVar1 = -1;
		if (iParam1 >= 256) {
			iVar0 = func_121(iParam0, iParam1, 4, 3);
			iVar1 = func_112(iVar0);
		}
		iVar2 = -1;
		iVar3 = -1;
		if (iParam2 >= 237) {
			iVar2 = func_121(iParam0, iParam2, 11, 3);
			iVar3 = func_112(iVar2);
		}
		if (iVar2 != -1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -826135203, 0)) {
				if (iVar0 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar0, -826135203, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, -826135203, 0)) {
				if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -826135203, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1855618474, 0)) {
				if (iVar0 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1855618474, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1855618474, 0)) {
				if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1855618474, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0)) {
				if (iVar0 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0)) {
				if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -2017999390, 0)) {
				if (iVar0 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar0, -2017999390, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, -2017999390, 0)) {
				if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -2017999390, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0)) {
				if (iVar0 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar0, 648481062, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, 648481062, 0)) {
				return 1;
			}
		}
		else if (iVar0 != -1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, 648481062, 0)) {
				return 1;
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, -826135203, 0)) {
				if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -826135203, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1855618474, 0)) {
				if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1855618474, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0)) {
				if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, -2017999390, 0)) {
				if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -2017999390, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
		}
		if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0)) {
			if (iParam1 >= 0 && iParam1 <= 15 || iParam1 >= 48 && iParam1 <= 63 || iParam1 >= 64 && iParam1 <= 79 ||
				iParam1 >= 112 && iParam1 <= 127 || iParam1 >= 128 && iParam1 <= 143 ||
				iParam1 >= 176 && iParam1 <= 191 || iParam1 >= 224 && iParam1 <= 239 || iVar1 == 0 || iVar1 == 3 ||
				iVar1 == 4 || iVar1 == 7 || iVar1 == 8 || iVar1 == 11 || iVar1 == 14 ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar0, 1627756587, 0)) {
				return 1;
			}
			else {
				return 0;
			}
		}
		switch (iVar0) {
		case 312004063:
		case 6695290:
		case 1724446270:
		case -448105673:
		case -611098679:
		case -1111088081:
		case -1406369540:
		case -1912159043:
		case 2076516410:
		case 1919618438:
		case 45227112:
		case -2129094253:
		case -421370587:
		case -675363106:
			if (iParam2 >= 204 && iParam2 <= 219 || iVar3 == 13) {
				return 0;
			}
			break;
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1021189127, 0)) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, 2044466679, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1325813684, 0)) {
				return 0;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		iVar4 = -1;
		iVar5 = -1;
		if (iParam1 >= 256) {
			iVar4 = func_121(iParam0, iParam1, 4, 4);
			iVar5 = func_112(iVar4);
		}
		iVar6 = -1;
		if (iParam2 >= 256) {
			iVar6 = func_121(iParam0, iParam2, 11, 4);
		}
		if (iVar6 != -1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, -826135203, 0)) {
				if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -826135203, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -826135203, 0)) {
				if (iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, -826135203, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1855618474, 0)) {
				if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1855618474, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1855618474, 0)) {
				if (iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1855618474, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, 320460654, 0)) {
				if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0)) {
				if (iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 320460654, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, -2017999390, 0)) {
				if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -2017999390, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -2017999390, 0)) {
				if (iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, -2017999390, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, -530089825, 0)) {
				if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -530089825, 0) ||
					iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1223513441, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -530089825, 0)) {
				if (iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, -530089825, 0) ||
					iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1223513441, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1200513218, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar6, -779835469, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1086258388, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1119232689, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1488441032, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar6, -868698159, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, 2044466679, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar6, -2020757158, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, -2088146832, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1446333198, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1351486939, 0)) {
				if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1223513441, 0) ||
					iParam1 >= 240 && iParam1 <= 255 || iVar5 == 15 || iVar4 == 1667217362 || iVar4 == 1956239942 ||
					iVar4 == -210905108 || iVar4 == 79690384 || iVar4 == 134611232 || iVar4 == 441755069 ||
					iVar4 == -1685936105 || iVar4 == -1379382110 || iVar4 == -788622578 || iVar4 == -481740893 ||
					iVar4 == -266743188 || iVar4 == 573421207 || iVar4 == -739668639 || iVar4 == -1126047902 ||
					iVar4 == -954797108 || iVar4 == -1858238438 || iVar4 == -1551291215 || iVar4 == -989872783 ||
					iVar4 == 2073733812 || iVar4 == -1596197578 || iVar4 == -942357733 || iVar4 == -40948081 ||
					iVar4 == -1262871322 || iVar4 == -495388573 || iVar4 == 1091483025 || iVar4 == 785649948 ||
					iVar4 == -313291240 || iVar4 == 495041640 || iVar4 == 749492925) {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, 821147517, 0)) {
				if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1223513441, 0) ||
					iParam1 >= 240 && iParam1 <= 255 || iVar5 == 15 || iVar4 == 1667217362 || iVar4 == 1956239942 ||
					iVar4 == -210905108 || iVar4 == 79690384 || iVar4 == 134611232 || iVar4 == 441755069 ||
					iVar4 == -1685936105 || iVar4 == -1379382110 || iVar4 == -788622578 || iVar4 == -481740893 ||
					iVar4 == -266743188 || iVar4 == 573421207 || iVar4 == -739668639 || iVar4 == -1126047902 ||
					iVar4 == -954797108 || iVar4 == -1858238438 || iVar4 == -1551291215 || iVar4 == -989872783 ||
					iVar4 == 2073733812 || iVar4 == -1596197578 || iVar4 == -942357733 || iVar4 == -40948081 ||
					iVar4 == -1262871322 || iVar4 == -495388573 || iVar4 == 1091483025 || iVar4 == 785649948 ||
					iVar4 == -313291240 || iVar4 == 495041640 || iVar4 == 749492925) {
					return 0;
				}
			}
		}
		if (iVar4 != -1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -826135203, 0)) {
				if (iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, -826135203, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1855618474, 0)) {
				if (iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1855618474, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0)) {
				if (iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, 320460654, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -2017999390, 0)) {
				if (iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, -2017999390, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -530089825, 0)) {
				if (iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, -530089825, 0) ||
					iVar6 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar6, -1223513441, 0)) {
					return 1;
				}
				else {
					return 0;
				}
			}
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -33031567, 0)) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, -2102859770, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, -747583185, 0)) {
				return 1;
			}
			else {
				return 0;
			}
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, -747583185, 0)) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -33031567, 0)) {
				return 1;
			}
			else {
				return 0;
			}
		}
		if (iParam1 >= 32 && iParam1 <= 47 || iVar5 == 2 || dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1325813684, 0)) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, 2026620439, 0)) {
				return 0;
			}
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, -2119756144, 0)) {
			if (iParam1 >= 32 && iParam1 <= 47 || iVar5 == 2 || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 264959411, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar4, 140732128, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1863955539, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar4, -849839091, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, -2088146832, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1055526375, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1882920022, 0)) {
				return 0;
			}
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar6, 947651647, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar6, -58412562, 0)) {
			if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1223513441, 0) || iParam1 >= 240 && iParam1 <= 255 ||
				iVar5 == 15 || iVar4 == 1667217362 || iVar4 == 1956239942 || iVar4 == -210905108 || iVar4 == 79690384 ||
				iVar4 == 134611232 || iVar4 == 441755069 || iVar4 == -1685936105 || iVar4 == -1379382110 ||
				iVar4 == -788622578 || iVar4 == -481740893 || iVar4 == -266743188 || iVar4 == 573421207 ||
				iVar4 == -739668639 || iVar4 == -1126047902 || iVar4 == -954797108 || iVar4 == -1858238438 ||
				iVar4 == -1551291215 || iVar4 == -989872783 || iVar4 == 2073733812 || iVar4 == -1596197578 ||
				iVar4 == -942357733 || iVar4 == -40948081 || iVar4 == -1262871322 || iVar4 == -495388573 ||
				iVar4 == 1091483025 || iVar4 == 785649948 || iVar4 == -313291240 || iVar4 == 495041640 ||
				iVar4 == 749492925) {
				return 0;
			}
		}
	}
	return 1;
}

// Position - 0x1A854
int func_112(int iParam0) {
	int iVar0;

	iVar0 = -1;
	if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 821147517, 0)) {
		iVar0 = 0;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 2055293595, 0)) {
		iVar0 = 1;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1992562672, 0)) {
		iVar0 = 2;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1458930564, 0)) {
		iVar0 = 3;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1046587084, 0)) {
		iVar0 = 4;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 1943944625, 0)) {
		iVar0 = 5;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1999870067, 0)) {
		iVar0 = 6;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 2048281121, 0)) {
		iVar0 = 7;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -109983526, 0)) {
		iVar0 = 8;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1394888785, 0)) {
		iVar0 = 9;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -144826511, 0)) {
		iVar0 = 10;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 19149565, 0)) {
		iVar0 = 11;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 310957510, 0)) {
		iVar0 = 12;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, 742787396, 0)) {
		iVar0 = 13;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1604914832, 0)) {
		iVar0 = 14;
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iParam0, -1092211054, 0)) {
		iVar0 = 15;
	}
	return iVar0;
}

// Position - 0x1A9B6
int func_113(int iParam0, int iParam1, int iParam2) {
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

	iVar0 = -99;
	if (iParam0 == joaat("mp_m_freemode_01")) {
		if (iParam1 <= 15) {
			iVar0 = 0;
		}
		else if (iParam1 <= 31) {
			iVar0 = 16;
		}
		else if (iParam1 <= 47) {
			iVar0 = 0;
		}
		else if (iParam1 <= 63) {
			iVar0 = -99;
		}
		else if (iParam1 <= 79) {
			iVar0 = -99;
		}
		else if (iParam1 <= 95) {
			iVar0 = 80;
		}
		else if (iParam1 <= 111) {
			iVar0 = -99;
		}
		else if (iParam1 <= 127) {
			iVar0 = -99;
		}
		else if (iParam1 <= 143) {
			iVar0 = 124;
		}
		else if (iParam1 <= 159) {
			iVar0 = 140;
		}
		else if (iParam1 <= 175) {
			iVar0 = -99;
		}
		else if (iParam1 <= 191) {
			iVar0 = -99;
		}
		else if (iParam1 <= 207) {
			iVar0 = 188;
		}
		else if (iParam1 <= 223) {
			iVar0 = 204;
		}
		else if (iParam1 <= 239) {
			iVar0 = 16;
		}
		else if (iParam1 <= 240) {
			iVar0 = 236;
		}
		else if (iParam1 >= 241) {
			iVar1 = func_121(iParam0, iParam1, 8, 3);
			if (iVar1 != -1) {
				iVar2 = dlc1::_0xC17AD0E5752BECDA(iVar1);
				iVar3 = 0;
				while (iVar3 < iVar2) {
					dlc1::get_variant_component(iVar1, iVar3, &iVar4, &iVar5, &iVar6);
					if (iVar6 == 11) {
						if (iVar4 != 0 && iVar4 != 1849449579) {
							iVar0 = func_21(iParam0, iVar4, 11, 3);
							return iVar0;
						}
						else {
							iVar0 = iVar5;
							return iVar0;
						}
					}
					iVar3++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		if (iParam1 <= 15) {
			iVar0 = 0;
		}
		else if (iParam1 <= 31) {
			iVar0 = 0;
		}
		else if (iParam1 <= 32) {
			iVar0 = -99;
		}
		else if (iParam1 <= 33) {
			iVar0 = -99;
		}
		else if (iParam1 <= 49) {
			iVar0 = 64;
		}
		else if (iParam1 <= 65) {
			iVar0 = 80;
		}
		else if (iParam1 <= 66) {
			iVar0 = -99;
		}
		else if (iParam1 <= 67) {
			iVar0 = -99;
		}
		else if (iParam1 <= 68) {
			iVar0 = -99;
		}
		else if (iParam1 <= 69) {
			iVar0 = -99;
		}
		else if (iParam1 <= 70) {
			iVar0 = -99;
		}
		else if (iParam1 <= 86) {
			iVar0 = 176;
		}
		else if (iParam1 <= 102) {
			iVar0 = 192;
		}
		else if (iParam1 <= 118) {
			iVar0 = 208;
		}
		else if (iParam1 <= 119) {
			iVar0 = -99;
		}
		else if (iParam1 <= 135) {
			iVar0 = 240;
		}
		else if (iParam1 >= 136) {
			iVar7 = func_121(iParam0, iParam1, 8, 4);
			if (iVar7 != -1) {
				iVar8 = dlc1::_0xC17AD0E5752BECDA(iVar7);
				iVar9 = 0;
				while (iVar9 < iVar8) {
					dlc1::get_variant_component(iVar7, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 11) {
						if (iVar10 != 0 && iVar10 != 1849449579) {
							iVar0 = func_21(iParam0, iVar10, 11, 4);
							return iVar0;
						}
						else {
							iVar0 = iVar11;
							return iVar0;
						}
					}
					iVar9++;
				}
			}
		}
	}
	if (iVar0 != -99) {
		iVar0 += iParam2;
	}
	return iVar0;
}

// Position - 0x1ACAD
int func_114(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam1 == 14) {
		iVar0 = iParam2;
		return func_115(iVar0);
	}
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 0: return 0;

		case 2: return Global_101700.f_2095.f_539[0 /*65*/].f_59;

		case 3:
			if (Global_101700.f_8044.f_99.f_58[120]) {
				return 1;
			}
			else {
				return 0;
			}
			break;

		case 4:
			if (Global_101700.f_8044.f_99.f_58[120]) {
				return 1;
			}
			else {
				return 0;
			}
			break;

		case 6: return 6;

		case 5: return 0;

		case 8: return 0;

		case 9: return 0;

		case 10: return 0;

		case 1: return 0;

		case 7: return 0;

		case 11: return 0;

		case 12: break;

		case 13: return 31;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 0: return 0;

		case 2: return Global_101700.f_2095.f_539[1 /*65*/].f_59;

		case 3: return 73;

		case 4: return 24;

		case 6: return 17;

		case 5: return 0;

		case 8: return 26;

		case 9: return 0;

		case 10: return 0;

		case 1: return 0;

		case 7: return 0;

		case 11: return 0;

		case 12: break;

		case 13: return 31;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 0: return 0;

		case 2: return Global_101700.f_2095.f_539[2 /*65*/].f_59;

		case 3: return 0;

		case 4: return 91;

		case 6: return 8;

		case 5: return 0;

		case 8: return 15;

		case 9: return 0;

		case 10: return 0;

		case 1: return 0;

		case 7: return 0;

		case 11: return 0;

		case 12: break;

		case 13: return 31;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0: break;

		case 2: break;

		case 3: return 0;

		case 4: return 80;

		case 6: return 10;

		case 5: break;

		case 8: return 0;

		case 9: return 0;

		case 10: return 0;

		case 1: return 0;

		case 7: return 0;

		case 11: return 2;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0: break;

		case 2: break;

		case 3: return 0;

		case 4: return 233;

		case 6: return 16;

		case 5: break;

		case 8: return 0;

		case 9: return 0;

		case 10: return 0;

		case 1: return 0;

		case 7: return 0;

		case 11: return 78;
		}
		break;

	default: break;
	}
	return -99;
}

// Position - 0x1B0C7
int func_115(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 1: return 1;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 5: return 5;

	case 6: return 6;

	case 7: return 7;

	case 8: return 8;
	}
	return 0;
}

// Position - 0x1B14D
bool func_116(int iParam0, int iParam1) {
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		if (iParam1 >= 48 && iParam1 < 64 || iParam1 >= 64 && iParam1 < 80 || iParam1 >= 96 && iParam1 < 108 ||
			iParam1 >= 108 && iParam1 < 124 || iParam1 >= 156 && iParam1 < 172 ||
			iParam1 >= 237 && dlc1::_0x341DE7ED1D2A1BFD(func_121(iParam0, iParam1, 11, 3), -1393156190, 0)) {
			return true;
		}
		break;

	case joaat("mp_f_freemode_01"):
		if (iParam1 >= 16 && iParam1 < 32 || iParam1 >= 96 && iParam1 < 112 || iParam1 >= 112 && iParam1 < 128 ||
			iParam1 >= 128 && iParam1 < 144 || iParam1 >= 160 && iParam1 < 176 ||
			iParam1 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(func_121(iParam0, iParam1, 11, 4), -1393156190, 0)) {
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x1B28E
int func_117(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<10> Var13;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	struct<10> Var48;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	bool bVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	bool bVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;

	iVar0 = -99;
	iVar1 = 1;
	if (iParam0 == joaat("mp_m_freemode_01")) {
		iVar2 = -1;
		iVar3 = -1;
		if (iParam2 >= 237) {
			iVar2 = func_121(iParam0, iParam2, 11, 3);
			iVar3 = func_112(iVar2);
		}
		iVar4 = -1;
		iVar5 = -1;
		if (iParam1 >= 237) {
			iVar4 = func_121(iParam0, iParam1, 11, 3);
			iVar5 = func_112(iVar4);
		}
		if (iVar2 != -1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -491588875, 0)) {
				return -99;
			}
		}
		if (iVar2 != -1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1347486026, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1274099003, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1723403459, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1538937264, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar2, -549843760, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1830529185, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1813210391, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, -89003918, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar2, -747858475, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1208450825, 0)) {
				if (iParam1 >= 124 && iParam1 <= 139 || iParam1 >= 188 && iParam1 <= 235 || iVar5 == 8 || iVar5 == 12 ||
					iVar5 == 13 || iVar5 == 14) {
					return -99;
				}
				if (!dlc1::_0x341DE7ED1D2A1BFD(iVar2, -549843760, 0) &&
					!dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1830529185, 0) &&
					!dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1813210391, 0) &&
					!dlc1::_0x341DE7ED1D2A1BFD(iVar2, -89003918, 0) &&
					!dlc1::_0x341DE7ED1D2A1BFD(iVar2, -747858475, 0) &&
					!dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1208450825, 0)) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -828478571, 0)) {
						return -99;
					}
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1655154167, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1719167561, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1431529976, 0)) {
				return -99;
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1690933245, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1325813684, 0)) {
				return -99;
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1769225721, 0)) {
				if (iParam1 >= 80 && iParam1 <= 95 || iParam1 >= 124 && iParam1 <= 139 ||
					iParam1 >= 140 && iParam1 <= 155 || iParam1 >= 188 && iParam1 <= 235 || iVar5 == 5 || iVar5 == 8 ||
					iVar5 == 9 || iVar5 == 12 || iVar5 == 13 || iVar5 == 14) {
					return -99;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 264959411, 0)) {
				if (iParam1 >= 0 && iParam1 <= 15 || iParam1 >= 16 && iParam1 <= 31 || iParam1 >= 80 && iParam1 <= 95 ||
					iParam1 >= 236 && iParam1 <= 236 || iVar5 == 0 || iVar5 == 1 || iVar5 == 5 || iVar5 == 15) {
				}
				else {
					return -99;
				}
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0) && !dlc1::_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0)) {
				return -99;
			}
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1719338724, 0)) {
				if (iParam1 >= 0 && iParam1 <= 15 || iParam1 >= 16 && iParam1 <= 31 || iParam1 >= 80 && iParam1 <= 95 ||
					iParam1 >= 124 && iParam1 <= 139 || iParam1 >= 236 && iParam1 <= 236 || iVar5 == 0 || iVar5 == 1 ||
					iVar5 == 5 || iVar5 == 8 || iVar5 == 15) {
				}
				else {
					return -99;
				}
			}
		}
		iVar6 = 0;
		bVar7 = false;
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1237899132, 0) && !dlc1::_0x341DE7ED1D2A1BFD(iVar2, -491588875, 0)) {
			if (iParam1 >= 0 && iParam1 <= 15) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -269266203, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar2, -685039259, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, 297865853, 0)) {
					switch (iParam1) {
					case 0: iVar0 = func_21(iParam0, -1071423629, 8, 3); break;

					case 1: iVar0 = func_21(iParam0, -833094692, 8, 3); break;

					case 2: iVar0 = func_21(iParam0, -1836153782, 8, 3); break;

					case 3: iVar0 = func_21(iParam0, -1598414687, 8, 3); break;

					case 4: iVar0 = func_21(iParam0, 123661793, 8, 3); break;

					case 5: iVar0 = func_21(iParam0, 330958487, 8, 3); break;

					case 7: iVar0 = func_21(iParam0, -646180324, 8, 3); break;

					case 8: iVar0 = func_21(iParam0, -142717408, 8, 3); break;

					case 11: iVar0 = func_21(iParam0, 1290696959, 8, 3); break;
					}
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 201427653, 0)) {
					switch (iParam1) {
					case 0: iVar0 = func_21(iParam0, -1382822784, 8, 3); break;

					case 1: iVar0 = func_21(iParam0, -1731353868, 8, 3); break;

					case 2: iVar0 = func_21(iParam0, -1960638561, 8, 3); break;

					case 3: iVar0 = func_21(iParam0, 147161830, 8, 3); break;

					case 4: iVar0 = func_21(iParam0, -92608943, 8, 3); break;

					case 5: iVar0 = func_21(iParam0, -162931217, 8, 3); break;

					case 7: iVar0 = func_21(iParam0, -537087659, 8, 3); break;

					case 8: iVar0 = func_21(iParam0, 1665087452, 8, 3); break;

					case 11: iVar0 = func_21(iParam0, 1012984348, 8, 3); break;
					}
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 967829025, 0)) {
					switch (iParam1) {
					case 0: iVar0 = func_21(iParam0, 385813134, 8, 3); break;

					case 1: iVar0 = func_21(iParam0, 675392787, 8, 3); break;

					case 2: iVar0 = func_21(iParam0, -238272479, 8, 3); break;

					case 3: iVar0 = func_21(iParam0, 67757212, 8, 3); break;

					case 4: iVar0 = func_21(iParam0, -536372072, 8, 3); break;

					case 5: iVar0 = func_21(iParam0, -247578875, 8, 3); break;

					case 7: iVar0 = func_21(iParam0, -1160588753, 8, 3); break;

					case 8: iVar0 = func_21(iParam0, -854821214, 8, 3); break;

					case 11: iVar0 = func_21(iParam0, -1458295118, 8, 3); break;
					}
				}
				return iVar0;
			}
			else if (iParam1 >= 236 && iParam1 <= 236) {
				iVar0 = 240;
				return iVar0;
			}
			else if (iParam1 >= 237) {
				bVar7 = true;
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -269266203, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar2, -685039259, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, 297865853, 0)) {
					iVar6 = 4;
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 201427653, 0)) {
					iVar6 = 5;
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 967829025, 0)) {
					iVar6 = 6;
				}
				else {
					iVar6 = -1;
				}
			}
			else {
				return iVar0;
			}
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0)) {
			bVar7 = true;
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 470686834, 0) && dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar2, -416620954, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1507532917, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1813210391, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, -89003918, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar2, -747858475, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1208450825, 0)) {
				iVar6 = 1;
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1410897066, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1351486939, 0)) {
				iVar6 = 0;
			}
			else {
				iVar6 = -1;
			}
		}
		if (bVar7) {
			if (iVar6 != -1) {
				iVar8 = dlc1::_0xC17AD0E5752BECDA(iVar4);
				iVar9 = 0;
				while (iVar9 < iVar8) {
					dlc1::get_variant_component(iVar4, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 8) {
						if (iVar6 == 6 && dlc1::_0x341DE7ED1D2A1BFD(iVar10, -168336417, 0) ||
							iVar6 == 5 && dlc1::_0x341DE7ED1D2A1BFD(iVar10, -1415000253, 0) ||
							iVar6 == 4 && dlc1::_0x341DE7ED1D2A1BFD(iVar10, -1703203608, 0) ||
							iVar6 == 3 && dlc1::_0x341DE7ED1D2A1BFD(iVar10, 1318819110, 0) ||
							iVar6 == 2 && dlc1::_0x341DE7ED1D2A1BFD(iVar10, -1138757583, 0) ||
							iVar6 == 1 && dlc1::_0x341DE7ED1D2A1BFD(iVar10, 647976134, 0) ||
							iVar6 == 0 && !dlc1::_0x341DE7ED1D2A1BFD(iVar10, 647976134, 0) &&
								!dlc1::_0x341DE7ED1D2A1BFD(iVar10, -1138757583, 0) &&
								!dlc1::_0x341DE7ED1D2A1BFD(iVar10, 1318819110, 0) &&
								!dlc1::_0x341DE7ED1D2A1BFD(iVar10, -1703203608, 0) &&
								!dlc1::_0x341DE7ED1D2A1BFD(iVar10, -1415000253, 0) &&
								!dlc1::_0x341DE7ED1D2A1BFD(iVar10, -168336417, 0)) {
							if (iVar10 != 0 && iVar10 != 1849449579) {
								iVar0 = func_21(iParam0, iVar10, 8, 3);
							}
							else {
								iVar0 = iVar11;
							}
							iVar9 = iVar8 + 1;
							iVar1 = 0;
							return iVar0;
						}
					}
					iVar9++;
				}
			}
			return -99;
		}
		if (iParam2 >= 96 && iParam2 <= 107 || iVar3 == 6) {
			if (iParam1 <= 15) {
				iVar0 = 32;
			}
			else if (iParam1 <= 31) {
				iVar0 = 224;
			}
			else if (iParam1 == 236) {
				iVar0 = 240;
			}
			else if (iParam1 >= 220 && iParam1 <= 235 && func_118() &&
					 !dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1266557933, 0)) {
				iVar0 = 34;
				iVar1 = 0;
				dlc1::init_shop_ped_component(&Var13);
				if (Global_2592891[1] != 0) {
					dlc1::_get_num_props_from_outfit(3, 6, -1, 0, -1, 8);
					dlc1::get_shop_ped_query_component(Global_2592888[1], &Var13);
					if (Var13.f_1 != Global_2592891[1]) {
						Global_2592891[1] = 0;
						Global_2592888[1] = 0;
					}
				}
				if (Global_2592891[1] == 0) {
					iVar31 = 0;
					iVar32 = dlc1::_get_num_props_from_outfit(3, 6, -1, 0, -1, 8);
					iVar30 = 0;
					while (iVar30 < iVar32) {
						dlc1::get_shop_ped_query_component(iVar30, &Var13);
						if (!dlc1::_is_dlc_data_empty(Var13)) {
							if (gameplay::get_hash_key(&Var13.f_9) == -1665616807 &&
								dlc1::_0x341DE7ED1D2A1BFD(Var13.f_1, 647976134, 0)) {
								Global_2592891[1] = Var13.f_1;
								Global_2592888[1] = iVar31;
								iVar30 = iVar32 + 1;
							}
							iVar31++;
						}
						iVar30++;
					}
				}
				if (Global_2592891[1] != 0) {
					iVar0 = func_22(iParam0, func_143(8)) + Global_2592888[1];
					iVar1 = 1;
				}
			}
			else {
				iVar0 = 34;
				iVar1 = 0;
				if (iParam1 >= 237) {
					iVar33 = func_121(iParam0, iParam1, 11, 3);
					if (iVar33 != -1 && !dlc1::_0x341DE7ED1D2A1BFD(iVar33, 310957510, 0) &&
						!dlc1::_0x341DE7ED1D2A1BFD(iVar33, -109983526, 0) &&
						!(dlc1::_0x341DE7ED1D2A1BFD(iVar2, 490219883, 0) &&
						  dlc1::_0x341DE7ED1D2A1BFD(iVar33, 1943944625, 0))) {
						iVar34 = dlc1::_0xC17AD0E5752BECDA(iVar33);
						iVar35 = 0;
						while (iVar35 < iVar34) {
							dlc1::get_variant_component(iVar33, iVar35, &iVar36, &iVar37, &iVar38);
							if (iVar38 == 8) {
								if (iVar36 != 0 && iVar36 != 1849449579) {
									if (!dlc1::_0x341DE7ED1D2A1BFD(iVar36, -1703203608, 0) &&
										!dlc1::_0x341DE7ED1D2A1BFD(iVar36, -1415000253, 0) &&
										!dlc1::_0x341DE7ED1D2A1BFD(iVar36, -168336417, 0)) {
										iVar0 = func_21(iParam0, iVar36, 8, 3);
									}
								}
								else {
									iVar0 = iVar37;
								}
							}
							iVar35++;
						}
					}
				}
			}
		}
		else if (iParam1 <= 15) {
			iVar0 = 0;
		}
		else if (iParam1 <= 31) {
			iVar0 = 16;
		}
		else if (iParam1 <= 47) {
			iVar0 = 2;
			iVar1 = 0;
		}
		else if (iParam1 <= 63) {
			iVar0 = -99;
		}
		else if (iParam1 <= 79) {
			iVar0 = -99;
		}
		else if (iParam1 <= 95) {
			iVar0 = 80;
		}
		else if (iParam1 <= 107) {
			iVar0 = -99;
		}
		else if (iParam1 <= 123) {
			iVar0 = -99;
		}
		else if (iParam1 <= 139) {
			iVar0 = 128;
		}
		else if (iParam1 <= 155) {
			iVar0 = 144;
		}
		else if (iParam1 <= 171) {
			iVar0 = -99;
		}
		else if (iParam1 <= 187) {
			iVar0 = 2;
			iVar1 = 0;
		}
		else if (iParam1 <= 203 || iVar5 == 12) {
			if (iParam2 >= 48 && iParam2 <= 63 || iParam2 >= 108 && iParam2 <= 123 || iVar3 == 3 || iVar3 == 7 ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1769225721, 0)) {
				iVar0 = 2;
				iVar1 = 0;
			}
			else {
				iVar39 = 0;
				if (iParam2 >= 236 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0)) {
					iVar39 = 1;
				}
				iVar40 = func_121(iParam0, iParam1, 11, 3);
				if (iVar40 != -1) {
					iVar41 = dlc1::_0xC17AD0E5752BECDA(iVar40);
					iVar42 = 0;
					while (iVar42 < iVar41) {
						dlc1::get_variant_component(iVar40, iVar42, &iVar43, &iVar44, &iVar45);
						if (iVar45 == 8 && iVar39 == dlc1::_0x341DE7ED1D2A1BFD(iVar43, 1680519719, 0)) {
							if (iVar43 != 0 && iVar43 != 1849449579) {
								iVar0 = func_21(iParam0, iVar43, 8, 3);
							}
							else {
								iVar0 = iVar44;
							}
							iVar42 = iVar41 + 1;
							iVar1 = 0;
						}
						iVar42++;
					}
				}
				else {
					iVar0 = func_21(iParam0, -1739646902, 8, 3);
					iVar1 = 1;
				}
			}
		}
		else if (iParam1 <= 219) {
			iVar0 = 208;
		}
		else if (iParam1 <= 235) {
			iVar0 = 2;
			iVar1 = 0;
			if (func_118()) {
				iVar46 = 0;
				iVar47 = 0;
				if (iParam2 >= 96 && iParam2 <= 107 ||
					iParam2 >= 236 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0)) {
					iVar46 = 1;
					iVar47 = 1;
				}
				dlc1::init_shop_ped_component(&Var48);
				if (Global_2592891[iVar47] != 0) {
					dlc1::_get_num_props_from_outfit(3, 6, -1, 0, -1, 8);
					dlc1::get_shop_ped_query_component(Global_2592888[iVar47], &Var48);
					if (Var48.f_1 != Global_2592891[iVar47]) {
						Global_2592891[iVar47] = 0;
						Global_2592888[iVar47] = 0;
					}
				}
				if (Global_2592891[iVar47] == 0) {
					iVar66 = 0;
					iVar67 = dlc1::_get_num_props_from_outfit(3, 6, -1, 0, -1, 8);
					iVar65 = 0;
					while (iVar65 < iVar67) {
						dlc1::get_shop_ped_query_component(iVar65, &Var48);
						if (!dlc1::_is_dlc_data_empty(Var48)) {
							if (gameplay::get_hash_key(&Var48.f_9) == -1665616807 &&
								iVar46 == dlc1::_0x341DE7ED1D2A1BFD(Var48.f_1, 647976134, 0)) {
								Global_2592891[iVar47] = Var48.f_1;
								Global_2592888[iVar47] = iVar66;
								iVar65 = iVar67 + 1;
							}
							iVar66++;
						}
						iVar65++;
					}
				}
				if (Global_2592891[iVar47] != 0) {
					iVar0 = func_22(iParam0, func_143(8)) + Global_2592888[iVar47];
					iVar1 = 1;
				}
			}
			if (iParam2 >= 237 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0) || iParam2 >= 108 && iParam2 <= 123 ||
				iVar3 == 7 || dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1769225721, 0)) {
				iVar0 = -99;
			}
		}
		else if (iParam1 <= 236) {
			iVar0 = 240;
		}
		else if (iParam1 >= 237) {
			iVar0 = 2;
			iVar1 = 0;
			iVar68 = 0;
			iVar69 = func_121(iParam0, iParam1, 11, 3);
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1351486939, 0)) {
				iVar68 = 1;
			}
			if (iVar69 != -1) {
				iVar70 = dlc1::_0xC17AD0E5752BECDA(iVar69);
				iVar71 = 0;
				while (iVar71 < iVar70) {
					dlc1::get_variant_component(iVar69, iVar71, &iVar72, &iVar73, &iVar74);
					if (iVar74 == 8) {
						if (iVar72 != 0 && iVar72 != 1849449579) {
							iVar0 = func_21(iParam0, iVar72, 8, 3);
							iVar1 = 0;
							if (!iVar68 || dlc1::_0x341DE7ED1D2A1BFD(iVar72, 647976134, 0)) {
								iVar71 = iVar70 + 1;
							}
						}
						else {
							iVar0 = iVar73;
							iVar71 = iVar70 + 1;
							iVar1 = 0;
						}
					}
					iVar71++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		iVar75 = -1;
		iVar76 = -1;
		if (iParam2 >= 256) {
			iVar75 = func_121(iParam0, iParam2, 11, 4);
			iVar76 = func_112(iVar75);
		}
		iVar77 = -1;
		iVar78 = -1;
		if (iParam1 >= 256) {
			iVar77 = func_121(iParam0, iParam1, 11, 4);
			iVar78 = func_112(iVar77);
		}
		if (iVar75 != -1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, -491588875, 0)) {
				return -99;
			}
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1813210391, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar75, -89003918, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar75, 1208450825, 0)) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar77, -828478571, 0)) {
				return -99;
			}
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1719338724, 0)) {
			if (iParam1 >= 0 && iParam1 <= 15 || iParam1 >= 32 && iParam1 <= 47 || iParam1 >= 64 && iParam1 <= 79 ||
				iParam1 >= 80 && iParam1 <= 95 || iParam1 >= 176 && iParam1 <= 191 ||
				iParam1 >= 192 && iParam1 <= 207 || iParam1 >= 208 && iParam1 <= 223 ||
				iParam1 >= 240 && iParam1 <= 255 || iVar78 == 0 || iVar78 == 2 || iVar78 == 4 || iVar78 == 5 ||
				iVar78 == 11 || iVar78 == 12 || iVar78 == 13 || iVar78 == 15 || iVar77 == -221826679 ||
				iVar77 == 1172264892 || iVar77 == 1474853838 || iVar77 == 278369420 || iVar77 == -310817200 ||
				iVar77 == -138976564 || iVar77 == -905541781 || iVar77 == 998321559 || iVar77 == 64401473) {
			}
			else {
				return -99;
			}
		}
		iVar79 = 0;
		bVar80 = false;
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar77, -761463976, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar77, -1347486026, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar77, -1119232689, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar77, 1784133476, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar77, 2044466679, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar77, -2020757158, 0) ||
			dlc1::_0x341DE7ED1D2A1BFD(iVar77, 2030343924, 0)) {
			bVar80 = true;
			if (iParam2 >= 16 && iParam2 <= 31 || iParam2 >= 128 && iParam2 <= 143 || iVar76 == 1 || iVar76 == 8) {
				iVar79 = 2;
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, 1769225721, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1834446747, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -868698159, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1266557933, 0)) {
				iVar79 = 0;
			}
			else if (iParam2 >= 160 && iParam2 <= 175 || iVar76 == 10 ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 684992453, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 916636514, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1939378450, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -820724897, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 153792394, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -872449705, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 700658917, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 1714969731, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 745826556, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 1055526375, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 144417099, 0)) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar77, 1784133476, 0)) {
					iVar79 = 1;
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar77, -1119232689, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar77, 2044466679, 0)) {
					iVar79 = 1;
				}
				else {
					iVar79 = -1;
				}
			}
			else {
				iVar79 = 1;
			}
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar77, -1351486939, 0)) {
			bVar80 = true;
			if (iParam2 >= 112 && iParam2 <= 127 || iVar76 == 7 || dlc1::_0x341DE7ED1D2A1BFD(iVar75, 684992453, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar75, 916636514, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar75, -820724897, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar75, -872449705, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar75, -416620954, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar75, 947651647, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar75, -549843760, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar75, 1830529185, 0)) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, 1769225721, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1834446747, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1266557933, 0)) {
					iVar79 = 0;
				}
				else {
					iVar79 = 1;
				}
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, 153792394, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 1322269404, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 548036233, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 700658917, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1014753511, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1410897066, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -2119756144, 0)) {
				iVar79 = 0;
			}
			else {
				iVar79 = -1;
			}
		}
		switch (iVar77) {
		case -221826679:
		case 1172264892:
		case 1474853838:
		case 278369420:
		case -310817200:
		case -138976564:
		case -905541781:
		case 998321559:
		case 64401473:
		case 15269846:
		case -674026069:
		case -904392139:
		case -1135708510:
		case -1360241698:
		case -2130051046:
		case 1935434943:
		case 1704282417:
		case 1472114052:
		case 1169688951:
		case -1193832172:
		case -886884949:
		case -1669539745:
		case -1370260468:
		case -413962745:
		case -238779663:
			bVar80 = true;
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, 1769225721, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar75, -868698159, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1266557933, 0)) {
				iVar79 = 1;
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1834446747, 0)) {
				iVar79 = 2;
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, -870074461, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1719338724, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -416620954, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 947651647, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -549843760, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 1830529185, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1813210391, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -89003918, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -747858475, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, 1208450825, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar75, -58412562, 0)) {
				iVar79 = 3;
			}
			else if (iParam2 >= 16 && iParam2 <= 31 || iParam2 >= 128 && iParam2 <= 143 ||
					 iParam2 >= 112 && iParam2 <= 127 || iVar76 == 1 || iVar76 == 7 || iVar76 == 8) {
				iVar79 = 0;
			}
			else {
				iVar79 = -1;
			}
			break;

		case 619380843:
			bVar80 = true;
			if (iParam2 >= 16 && iParam2 <= 31 || iParam2 >= 128 && iParam2 <= 143 || iVar76 == 1 || iVar76 == 8) {
				iVar79 = 0;
			}
			else {
				iVar79 = -1;
			}
			break;
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1266557933, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar75, -979468724, 0)) {
			if (iParam1 >= 240 && iParam1 <= 255 || iVar78 == 15) {
				iVar0 = 120;
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(iVar77, 2044466679, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar77, -2020757158, 0)) {
				bVar80 = true;
				iVar79 = 0;
			}
			else {
				return iVar0;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1237899132, 0) &&
				 !dlc1::_0x341DE7ED1D2A1BFD(iVar75, -491588875, 0)) {
			if (iParam1 >= 64 && iParam1 <= 79 || iParam1 >= 80 && iParam1 <= 95 || iParam1 >= 176 && iParam1 <= 191 ||
				iParam1 >= 192 && iParam1 <= 207 || iParam1 >= 208 && iParam1 <= 223 ||
				iParam1 >= 240 && iParam1 <= 255 || iVar78 == 4 || iVar78 == 5 || iVar78 == 11 || iVar78 == 12 ||
				iVar78 == 13 || iVar78 == 15) {
				bVar80 = false;
			}
			else if (iParam1 >= 256) {
				bVar80 = true;
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, -269266203, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar75, -685039259, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar75, 297865853, 0)) {
					iVar79 = 4;
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, 201427653, 0)) {
					iVar79 = 5;
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, 967829025, 0)) {
					iVar79 = 6;
				}
				else {
					iVar79 = -1;
				}
			}
			else {
				return iVar0;
			}
		}
		if (bVar80) {
			if (iVar79 != -1) {
				iVar81 = dlc1::_0xC17AD0E5752BECDA(iVar77);
				iVar82 = 0;
				while (iVar82 < iVar81) {
					dlc1::get_variant_component(iVar77, iVar82, &iVar83, &iVar84, &iVar85);
					if (iVar85 == 8) {
						if (iVar79 == 6 && dlc1::_0x341DE7ED1D2A1BFD(iVar83, -168336417, 0) ||
							iVar79 == 5 && dlc1::_0x341DE7ED1D2A1BFD(iVar83, -1415000253, 0) ||
							iVar79 == 4 && dlc1::_0x341DE7ED1D2A1BFD(iVar83, -1703203608, 0) ||
							iVar79 == 3 && dlc1::_0x341DE7ED1D2A1BFD(iVar83, 1318819110, 0) ||
							iVar79 == 2 && dlc1::_0x341DE7ED1D2A1BFD(iVar83, -1138757583, 0) ||
							iVar79 == 1 && dlc1::_0x341DE7ED1D2A1BFD(iVar83, 647976134, 0) ||
							iVar79 == 0 && !dlc1::_0x341DE7ED1D2A1BFD(iVar83, 647976134, 0) &&
								!dlc1::_0x341DE7ED1D2A1BFD(iVar83, -1138757583, 0) &&
								!dlc1::_0x341DE7ED1D2A1BFD(iVar83, 1318819110, 0) &&
								!dlc1::_0x341DE7ED1D2A1BFD(iVar83, -1703203608, 0) &&
								!dlc1::_0x341DE7ED1D2A1BFD(iVar83, -1415000253, 0) &&
								!dlc1::_0x341DE7ED1D2A1BFD(iVar83, -168336417, 0)) {
							if (iVar83 != 0 && iVar83 != 1849449579) {
								iVar0 = func_21(iParam0, iVar83, 8, 4);
							}
							else {
								iVar0 = iVar84;
							}
							iVar82 = iVar81 + 1;
							iVar1 = 0;
							return iVar0;
						}
					}
					iVar82++;
				}
			}
			return -99;
		}
		if (iParam1 >= 192 && iParam1 <= 207 || iVar78 == 12)
			&&(iParam2 >= 96 && iParam2 <= 111 || iParam2 >= 112 && iParam2 <= 127 || iVar76 == 6 || iVar76 == 7) &&
				func_118() && !dlc1::_0x341DE7ED1D2A1BFD(iVar75, -416620954, 0) &&
				!dlc1::_0x341DE7ED1D2A1BFD(iVar75, 947651647, 0) && !dlc1::_0x341DE7ED1D2A1BFD(iVar75, -549843760, 0) &&
				!dlc1::_0x341DE7ED1D2A1BFD(iVar75, 1830529185, 0) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1813210391, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar75, -89003918, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar75, -747858475, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar75, 1208450825, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar75, -58412562, 0)) {
					return -99;
				}
				iVar86 = iVar77;
				if (iParam1 == 199) {
					iVar0 = func_21(iParam0, 331193219, 8, 4);
				}
				else if (iParam1 == 200) {
					iVar0 = func_21(iParam0, 1115060468, 8, 4);
				}
				else if (iParam1 == 201) {
					iVar0 = func_21(iParam0, 779636984, 8, 4);
				}
				else if (iVar86 == 948380380) {
					iVar0 = func_21(iParam0, -570249206, 8, 4);
				}
				else if (iVar86 == 708412993) {
					iVar0 = func_21(iParam0, -876115052, 8, 4);
				}
				else if (iVar86 == 1974869305) {
					iVar0 = func_21(iParam0, -108599534, 8, 4);
				}
				else if (iVar86 == 1197916315) {
					iVar0 = func_21(iParam0, 200575961, 8, 4);
				}
				else if (iVar86 == 587593690) {
					iVar0 = func_21(iParam0, 961930907, 8, 4);
				}
				else if (iVar86 == 323213398) {
					iVar0 = func_21(iParam0, -257698508, 8, 4);
				}
				else if (iVar86 == 1050193651) {
					iVar0 = func_21(iParam0, 516534659, 8, 4);
				}
				else if (iVar86 == 811438717) {
					iVar0 = func_21(iParam0, -1174312584, 8, 4);
				}
				else if (iVar86 == -877868759) {
					iVar0 = func_21(iParam0, -1192794304, 8, 4);
				}
				else if (iVar86 == -1108464212) {
					iVar0 = func_21(iParam0, -2027256889, 8, 4);
				}
				else if (iVar86 == -467866094) {
					iVar0 = func_21(iParam0, -1670074789, 8, 4);
				}
				else if (iVar86 == -673000034) {
					iVar0 = func_21(iParam0, -326349175, 8, 4);
				}
				else if (iVar86 == -1984939718) {
					iVar0 = func_21(iParam0, -796060021, 8, 4);
				}
				iVar1 = 0;
			}
		else if (iParam1 <= 15) {
			if (iParam2 >= 160 && iParam2 <= 175 || dlc1::_0x341DE7ED1D2A1BFD(iVar75, 1769225721, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar75, -868698159, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1266557933, 0)) {
				iVar0 = 16;
			}
			else {
				iVar0 = 0;
			}
		}
		else if (iParam1 <= 31) {
			iVar0 = -99;
		}
		else if (iParam1 <= 47) {
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 63) {
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 79) {
			iVar0 = 34;
		}
		else if (iParam1 <= 95) {
			iVar0 = 50;
		}
		else if (iParam1 <= 111) {
			iVar0 = -99;
		}
		else if (iParam1 <= 127) {
			iVar0 = -99;
		}
		else if (iParam1 <= 143) {
			iVar0 = -99;
		}
		else if (iParam1 <= 159) {
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 175) {
			iVar0 = -99;
		}
		else if (iParam1 <= 191) {
			iVar0 = 71;
		}
		else if (iParam1 <= 207) {
			iVar1 = 0;
			switch (iParam1) {
			case 199: iVar0 = 94; break;

			case 200: iVar0 = 95; break;

			case 201: iVar0 = 96; break;
			}
			if (iParam2 >= 160 && iParam2 <= 175 || iVar76 == 10) {
				return -99;
			}
		}
		else if (iParam1 <= 223) {
			iVar0 = 103;
		}
		else if (iParam1 <= 239) {
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 255) {
			iVar0 = 120;
		}
		else if (iParam1 >= 256) {
			iVar0 = 48;
			iVar1 = 0;
			if (iVar77 != -1) {
				bVar87 = true;
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar77, 1965569012, 0)) {
					bVar87 = false;
					if (iParam2 >= 256 && dlc1::_0x341DE7ED1D2A1BFD(iVar75, -1200513218, 0)) {
						bVar87 = true;
					}
				}
				if (bVar87) {
					iVar79 = 0;
					if (iParam2 >= 160 && iParam2 <= 175) {
						if (iVar78 == 12) {
							iVar79 = 1;
						}
					}
					iVar88 = dlc1::_0xC17AD0E5752BECDA(iVar77);
					iVar89 = 0;
					while (iVar89 < iVar88) {
						dlc1::get_variant_component(iVar77, iVar89, &iVar90, &iVar91, &iVar92);
						if (iVar92 == 8 && (iVar90 == 0 || iVar90 == 1849449579 ||
											iVar79 == 6 && dlc1::_0x341DE7ED1D2A1BFD(iVar90, -168336417, 0) ||
											iVar79 == 5 && dlc1::_0x341DE7ED1D2A1BFD(iVar90, -1415000253, 0) ||
											iVar79 == 4 && dlc1::_0x341DE7ED1D2A1BFD(iVar90, -1703203608, 0) ||
											iVar79 == 3 && dlc1::_0x341DE7ED1D2A1BFD(iVar90, 1318819110, 0) ||
											iVar79 == 2 && dlc1::_0x341DE7ED1D2A1BFD(iVar90, -1138757583, 0) ||
											iVar79 == 1 && dlc1::_0x341DE7ED1D2A1BFD(iVar90, 647976134, 0) ||
											iVar79 == 0 && !dlc1::_0x341DE7ED1D2A1BFD(iVar90, 647976134, 0) &&
												!dlc1::_0x341DE7ED1D2A1BFD(iVar90, -1138757583, 0) &&
												!dlc1::_0x341DE7ED1D2A1BFD(iVar90, 1318819110, 0) &&
												!dlc1::_0x341DE7ED1D2A1BFD(iVar90, -1703203608, 0) &&
												!dlc1::_0x341DE7ED1D2A1BFD(iVar90, -1415000253, 0) &&
												!dlc1::_0x341DE7ED1D2A1BFD(iVar90, -168336417, 0))) {
							if (iVar90 != 0 && iVar90 != 1849449579) {
								iVar0 = func_21(iParam0, iVar90, 8, 4);
							}
							else {
								iVar0 = iVar91;
							}
							iVar89 = iVar88 + 1;
							iVar1 = 0;
						}
						iVar89++;
					}
				}
			}
		}
	}
	if (iVar1 && iVar0 != -99) {
		iVar0 += iParam3;
	}
	return iVar0;
}

// Position - 0x1D64C
bool func_118() { return dlc2::is_dlc_present(42019760); }

// Position - 0x1D65D
int func_119(int iParam0, int iParam1, int iParam2) {
	switch (iParam0) {
	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 2131039487;

			case 3: return 717379468;

			case 4: return -331193181;

			case 5: return 73557144;

			case 6: return -887980266;

			case 7: return -306315670;

			case 8: return -1154048938;
			}
			break;

		case 1:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return -1301636615;

			case 3: return 1153996761;

			case 4: return -1315084792;

			case 5: return 1655884038;

			case 6: return 1489229833;

			case 7: return -1929503325;

			case 8: return -1189128367;
			}
			break;

		case 2:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 538171135;

			case 3: return -244985062;

			case 4: return 442977103;

			case 5: return -1385727891;

			case 6: return 1309989623;

			case 7: return 1191418696;

			case 8: return 189293242;
			}
			break;

		case 3:
			switch (iParam2) {
			case 0: return -1438684756;

			case 1: return 194146035;

			case 2: return -420901598;

			case 3: return 2107411814;

			case 4: return 1242686602;

			case 5: return -596540583;

			case 6: return -653786071;

			case 7: return 1460048630;

			case 8: return -2079589815;
			}
			break;

		case 4:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return -1947098483;

			case 3: return 569295621;

			case 4: return -208098559;

			case 5: return 1256246195;

			case 6: return 1605755939;

			case 7: return 874748698;

			case 8: return -137095372;
			}
			break;

		case 5:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 1950801119;

			case 3: return -1158564771;

			case 4: return -69929428;

			case 5: return 1957730707;

			case 6: return 374587029;

			case 7: return -210146735;

			case 8: return 336100633;
			}
			break;

		case 6:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return -1148238879;

			case 3: return -958872024;

			case 4: return 1353141306;

			case 5: return 394070886;

			case 6: return 255958050;

			case 7: return -521728710;

			case 8: return 1843470374;
			}
			break;

		case 7:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 670760190;

			case 3: return 799655540;

			case 4: return -99079306;

			case 5: return 1989760633;

			case 6: return 1157052274;

			case 7: return -1196262225;

			case 8: return -664356399;
			}
			break;

		case 8: break;

		case 9:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 1875496913;

			case 3: return -1978886808;

			case 4: return -1279403197;

			case 5: return -1459998821;

			case 6: return 1786467932;

			case 7: return -795005246;

			case 8: return -1147008986;
			}
			break;

		case 10: break;

		case 11:
		case 16:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return -1925009287;

			case 3: return -268733734;

			case 4: return -2124412821;

			case 5: return -360036697;

			case 6: return -926433555;

			case 7: return 985839403;

			case 8: return -234436397;

			case 9: return 1165919867;

			case 10: return 1606204151;

			case 11: return 1774276352;

			case 12: return 1934254610;

			case 13: return 980775017;

			case 14: return 399321881;
			}
			break;

		case 12:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 493536654;

			case 3: return -1759053005;

			case 4: return 630158551;

			case 5: return -707909514;

			case 6: return 1254885089;

			case 7: return 596977742;

			case 8: return 1861540342;
			}
			break;

		case 13: break;

		case 14:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return -840276017;

			case 3: return 756400133;

			case 4: return 1148630611;

			case 5: return -893909282;

			case 6: return 1485630477;

			case 7: return -934174767;

			case 8: return -1866981918;
			}
			break;

		case 15:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return -591418577;

			case 3: return -2029591494;

			case 4: return 1293565798;

			case 5: return 1230599348;

			case 6: return 80125466;

			case 7: return 768104686;

			case 8: return -1559755280;
			}
			break;

		case 352:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 1435783799;

			case 3: return -935552076;

			case 4: return 766407714;

			case 5: return 1509946582;

			case 6: return -2105033798;

			case 7: return 1608018857;

			case 8: return -1746944984;
			}
			break;

		case 353:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 640553446;

			case 3: return 376036624;

			case 4: return -51036152;

			case 5: return 1864144311;

			case 6: return 875934121;

			case 7: return -671105758;

			case 8: return -1439393512;
			}
			break;

		case 354:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return -1795808405;

			case 3: return -583173670;

			case 4: return 1309411930;

			case 5: return -1097003929;

			case 6: return 947491077;

			case 7: return -1021187095;

			case 8: return -1662421384;
			}
			break;

		case 391:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return -1866149930;

			case 3: return 169817082;

			case 4: return 876172205;

			case 5: return 2053608242;

			case 6: return 720468224;

			case 7: return -1755663855;

			case 8: return -277654310;
			}
			break;

		case 404:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return -1685192020;

			case 3: return 447714365;

			case 4: return -187478284;

			case 5: return 2101575193;

			case 6: return 1655151264;

			case 7: return -212448586;

			case 8: return -575494038;
			}
			break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return -414534788;

			case 3: return 185531215;

			case 4: return -775417853;

			case 5: return 1619085169;

			case 6: return 888176083;

			case 7: return -868636293;

			case 8: return -481241218;
			}
			break;

		case 1:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 982904848;

			case 3: return 1053086051;

			case 4: return 1565990968;

			case 5: return 869354244;

			case 6: return -1137668925;

			case 7: return -245327436;

			case 8: return -2092735770;
			}
			break;

		case 2:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 1286693086;

			case 3: return 443095479;

			case 4: return -2039335276;

			case 5: return 2083407994;

			case 6: return 533001127;

			case 7: return 1728875992;

			case 8: return -1665814217;
			}
			break;

		case 3: break;

		case 4:
			switch (iParam2) {
			case 0: return 1402439971;

			case 1: return -77210386;

			case 2: return 206640931;

			case 3: return 1434974169;

			case 4: return -2076303403;

			case 5: return 2073263245;

			case 6: return 229693395;

			case 7: return -981246739;

			case 8: return 2107613618;
			}
			break;

		case 5:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 1954830049;

			case 3: return 1793062342;

			case 4: return -2118725149;

			case 5: return -849747283;

			case 6: return 1582789248;

			case 7: return -1675687168;

			case 8: return -381889304;
			}
			break;

		case 6:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 1942207698;

			case 3: return -743369876;

			case 4: return 582693633;

			case 5: return -1280288284;

			case 6: return -1000105499;

			case 7: return -2147200029;

			case 8: return -1838714866;
			}
			break;

		case 7: break;

		case 8:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 1187050736;

			case 3: return -1420954963;

			case 4: return 232453794;

			case 5: return 406178867;

			case 6: return 739288468;

			case 7: return -252997160;

			case 8: return -2044888090;
			}
			break;

		case 9: break;

		case 10: break;

		case 11:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 1703311969;

			case 3: return 1875667738;

			case 4: return 1291347593;

			case 5: return -713453992;

			case 6: return 1417339152;

			case 7: return 587281350;

			case 8: return -86904022;
			}
			break;

		case 12:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return -1858518769;

			case 3: return 44044890;

			case 4: return -1131137757;

			case 5: return 213313570;

			case 6: return -233124949;

			case 7: return 171345846;

			case 8: return 1452902248;
			}
			break;

		case 13: break;

		case 14:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 747852506;

			case 3: return 216238268;

			case 4: return 404894315;

			case 5: return 950341895;

			case 6: return 1159773017;

			case 7: return -957185436;

			case 8: return -240960885;
			}
			break;

		case 15:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return -259688953;

			case 3: return -736534114;

			case 4: return -1673886961;

			case 5: return 976562040;

			case 6: return -1794803798;

			case 7: return -81887956;

			case 8: return 1689176064;
			}
			break;

		case 302:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return -1835438866;

			case 3: return -504887899;

			case 4: return -2062205969;

			case 5: return 1171204323;

			case 6: return 655612525;

			case 7: return -739019619;

			case 8: return 1371789707;
			}
			break;

		case 303:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 124374814;

			case 3: return 2119944607;

			case 4: return -1129482474;

			case 5: return 801728466;

			case 6: return 1764150402;

			case 7: return -43777;

			case 8: return -543743869;
			}
			break;

		case 304:
			switch (iParam2) {
			case 0: break;

			case 1: break;

			case 2: return 1732443055;

			case 3: return 1991589117;

			case 4: return -1926802042;

			case 5: return -1879434956;

			case 6: return -582200001;

			case 7: return 498117603;

			case 8: return 1121585510;
			}
			break;
		}
		break;
	}
	return -1;
}

// Position - 0x1EA81
int func_120(int iParam0, int iParam1, int iParam2, int iParam3) {
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

	iVar0 = -99;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		if (iParam2 >= 237) {
			iVar2 = func_121(iParam0, iParam2, 11, 3);
			iVar1 = func_112(iVar2);
		}
		if (iParam1 >= 241) {
			iVar4 = func_121(iParam0, iParam1, 8, 3);
			iVar3 = func_112(iVar4);
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0)) {
			iVar0 = 14;
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -2017999390, 0)) {
			iVar0 = 6;
		}
		else if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1786447517, 0)) {
			iVar0 = 1;
		}
		else if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1010805287, 0)) {
			iVar0 = 4;
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1237899132, 0) && !dlc1::_0x341DE7ED1D2A1BFD(iVar2, -491588875, 0)) {
			if (iParam1 == 240) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -269266203, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar2, -685039259, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, 297865853, 0)) {
					iVar0 = func_21(iParam0, -189347783, 3, 3);
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 201427653, 0)) {
					iVar0 = func_21(iParam0, -2124259813, 3, 3);
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 967829025, 0)) {
					iVar0 = func_21(iParam0, 1522547645, 3, 3);
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -979468724, 0)) {
					iVar0 = 5;
				}
			}
			else {
				iVar0 = func_120(iParam0, -99, func_113(iParam0, iParam1, 0), iParam3);
				if (iVar0 == -99) {
					iVar0 = 0;
				}
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -316495692, 0)) {
			iVar0 = 12;
		}
		else if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -416620954, 0) ||
				 iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1507532917, 0) ||
				 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1813210391, 0)) {
			if (iParam1 == 240) {
				iVar0 = 14;
			}
			else if (iParam1 >= 80 && iParam1 <= 95 || iVar3 == 5) {
				iVar0 = 6;
			}
			else if (iParam1 >= 16 && iParam1 <= 31 || iVar3 == 1) {
				iVar0 = 1;
			}
			else {
				iVar0 = 4;
			}
		}
		else if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1719338724, 0)) {
			if (iParam1 == 240) {
				iVar0 = 14;
			}
			else if (iParam1 >= 80 && iParam1 <= 95 || iVar3 == 5) {
				iVar0 = 6;
			}
			else {
				iVar0 = 1;
			}
		}
		else if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1939378450, 0)) {
			if (iParam1 >= 192 && iParam1 <= 207 || iVar3 == 12) {
				iVar0 = 0;
			}
			else {
				iVar0 = 11;
			}
		}
		else if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, 264959411, 0)) {
			if (iParam1 >= 80 && iParam1 <= 95 || iVar3 == 5) {
				iVar0 = 6;
			}
			else if (iParam1 == 240) {
				iVar0 = 14;
			}
			else if (iParam1 >= 16 && iParam1 <= 31 || iVar3 == 1) {
				iVar0 = 1;
			}
		}
		else if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0)) {
			iVar0 = 12;
		}
		else if (iParam2 >= 0 && iParam2 <= 31 || iVar1 == 0 || iVar1 == 1) {
			iVar0 = 0;
		}
		else if (iParam2 >= 48 && iParam2 <= 63 || iParam2 >= 64 && iParam2 <= 79 || iParam2 >= 96 && iParam2 <= 107 ||
				 iParam2 >= 108 && iParam2 <= 123 || iParam2 >= 156 && iParam2 <= 171 || iVar1 == 3 || iVar1 == 4 ||
				 iVar1 == 6 || iVar1 == 7 || iVar1 == 10) {
			if (iParam1 >= 80 && iParam1 <= 95 || iVar3 == 5) {
				iVar0 = 6;
			}
			else if (iParam1 == 240 || iVar3 == 15) {
				iVar0 = 14;
			}
			else if (iParam1 >= 160 && iParam1 <= 175 || iVar3 == 10) {
				iVar0 = 4;
			}
			else if (iParam1 >= 176 && iParam1 <= 191 || iVar3 == 11) {
				iVar0 = 12;
			}
			else if (iParam1 >= 16 && iParam1 <= 31 || iParam1 >= 224 && iParam1 <= 239 || iVar3 == 1 || iVar3 == 14) {
				iVar0 = 1;
			}
			else if (iParam1 >= 80 && iParam1 <= 95 || iVar3 == 5) {
				iVar0 = 6;
			}
			else if (iParam1 >= 32 && iParam1 <= 47 || iVar3 == 2) {
				iVar0 = 4;
			}
			else if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1847239679, 0)) {
				if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1914383230, 0)) {
					iVar0 = 4;
				}
				else {
					iVar0 = 1;
				}
			}
			else if (iParam1 >= 144 && iParam1 <= 159 || iVar3 == 9) {
				iVar0 = 1;
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -849839091, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -2088146832, 0)) {
				iVar0 = 4;
			}
			else if (iParam1 >= 241) {
				if (iVar4 != -1) {
					iVar5 = dlc1::_get_num_forced_components(iVar4);
					iVar6 = 0;
					while (iVar6 < iVar5) {
						dlc1::get_forced_component(iVar4, iVar6, &iVar7, &iVar8, &iVar9);
						if (iVar9 == 3) {
							if (iVar7 != 0 && iVar7 != 1849449579) {
								iVar0 = func_21(iParam0, iVar7, 3, 3);
							}
							else {
								iVar0 = iVar8;
							}
							iVar6 = iVar5 + 1;
						}
						iVar6++;
					}
				}
			}
		}
		else if (iParam2 >= 172 && iParam2 <= 187 || iVar1 == 11) {
			if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -7109286, 0)) {
				iVar0 = 6;
			}
			else if (iParam1 >= 48 && iParam1 <= 63 || iParam1 >= 112 && iParam1 <= 127 || iVar3 == 3 || iVar3 == 7) {
				iVar0 = 11;
			}
			else if (iParam1 >= 96 && iParam1 <= 111 || iVar3 == 6) {
				iVar0 = 11;
			}
			else if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1147939952, 0)) {
				iVar0 = 12;
			}
			else if (iParam1 == 240) {
				iVar0 = 15;
			}
		}
		break;

	case joaat("mp_f_freemode_01"):
		if (iParam2 >= 256) {
			iVar2 = func_121(iParam0, iParam2, 11, 4);
			iVar1 = func_112(iVar2);
		}
		if (iParam1 >= 136) {
			iVar4 = func_121(iParam0, iParam1, 8, 4);
			iVar3 = func_112(iVar4);
			switch (iVar4) {
			case 327496660:
			case -63928837:
			case 695885966:
			case 525421628:
			case 1426634666:
			case 1160648693:
			case 1928065904:
			case 1748557322:
			case -1777223233:
			case -1991794649:
			case 917309067:
			case -1629661498: iVar3 = 15; break;

			case 587358117:
			case 742748715:
			case 490263574:
			case 682683142:
			case -1172927021:
			case -174365543:
			case -1450128251:
			case -1811439245:
			case 1578218888:
			case -1193481443:
			case 1549742623:
			case 1309119856:
			case 2143418596:
			case 1905745039:
			case 428026984:
			case 1547729071:
			case -1848319017: iVar3 = 13; break;
			}
		}
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0)) {
			iVar0 = 0;
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1237899132, 0) && !dlc1::_0x341DE7ED1D2A1BFD(iVar2, -491588875, 0)) {
			if (iParam1 >= 34 && iParam1 <= 49 || iParam1 >= 50 && iParam1 <= 65 || iParam1 >= 71 && iParam1 <= 86 ||
				iParam1 >= 87 && iParam1 <= 102 || iParam1 >= 103 && iParam1 <= 118 ||
				iParam1 >= 120 && iParam1 <= 135 || iVar3 == 4 || iVar3 == 5 || iVar3 == 11 || iVar3 == 12 ||
				iVar3 == 13 || iVar3 == 15 || iVar4 == 1389091979 || iVar4 == 442100644 || iVar4 == -1406103725 ||
				iVar4 == -167304449 || iVar4 == 129353308 || iVar4 == 1943510702 || iVar4 == 1963041026 ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, -2020757158, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1064262817, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1419806467, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1053842259, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1358888880, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1208450825, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 297865853, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar4, 602650322, 0)) {
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -269266203, 0) ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar2, -685039259, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar2, 297865853, 0)) {
					iVar0 = func_21(iParam0, -405734992, 3, 4);
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 201427653, 0)) {
					iVar0 = func_21(iParam0, 1297919831, 3, 4);
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 967829025, 0) ||
						 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -979468724, 0)) {
					iVar0 = func_21(iParam0, 440926231, 3, 4);
				}
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -89003918, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -747858475, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 490219883, 0)) {
				iVar0 = 11;
			}
			else {
				iVar0 = func_120(iParam0, -99, func_113(iParam0, iParam1, 0), iParam3);
				if (iVar0 == -99) {
					iVar0 = 14;
				}
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, -316495692, 0)) {
			iVar0 = 3;
		}
		else if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1965569012, 0) && !func_116(iParam0, iParam2) &&
				 !dlc1::_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0)) {
			if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1147939952, 0)) {
				iVar0 = 3;
			}
			else {
				iVar0 = 0;
			}
		}
		else if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1353777856, 0)) {
			iVar0 = 7;
		}
		else if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -849839091, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -2088146832, 0)) {
			iVar0 = 3;
		}
		else if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -2102859770, 0)) {
			if (dlc1::_0x341DE7ED1D2A1BFD(func_121(iParam0, iParam3, 4, 4), -33031567, 0)) {
				iVar0 = 11;
			}
			else {
				iVar0 = 15;
			}
		}
		else if (iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1119232689, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1976716889, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1488441032, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1419806467, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1813210391, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 263623295, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -309899747, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -89003918, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, -747858475, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 490219883, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1208450825, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 297865853, 0) ||
				 iVar4 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar4, 602650322, 0)) {
			if (iParam2 >= 16 && iParam2 <= 31 || iParam2 >= 96 && iParam2 <= 111 || iParam2 >= 128 && iParam2 <= 143 ||
				iVar1 == 1 || iVar1 == 6 || iVar1 == 8) {
				iVar0 = 1;
			}
			else if (iParam2 >= 112 && iParam2 <= 127 || iParam2 >= 160 && iParam2 <= 175 || iVar1 == 7 ||
					 iVar1 == 10 || dlc1::_0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, 916636514, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1322269404, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, 548036233, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -870074461, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1174924468, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -868698159, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1769225721, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1834446747, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1719338724, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -416620954, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, 947651647, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -549843760, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1830529185, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1266557933, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1813210391, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -89003918, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -747858475, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1208450825, 0) ||
					 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -58412562, 0)) {
				iVar0 = 3;
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1939378450, 0)) {
				iVar0 = 9;
			}
		}
		else if (iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -870074461, 0) ||
				 iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1813210391, 0) ||
				 iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -89003918, 0) ||
				 iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -747858475, 0) ||
				 iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1208450825, 0) ||
				 iVar2 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar2, -58412562, 0)) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, 684992453, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 916636514, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1939378450, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 441715397, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar4, 264959411, 0)) {
				iVar0 = 1;
			}
			else {
				iVar0 = 6;
			}
		}
		else if (iParam2 >= 16 && iParam2 <= 31 || iVar1 == 1) {
			if (iParam1 >= 50 && iParam1 <= 65 || iParam1 >= 120 && iParam1 <= 135 || iVar3 == 5 || iVar3 == 15) {
				iVar0 = 5;
			}
			else if (iParam1 >= 136) {
				if (iVar4 != -1) {
					iVar10 = dlc1::_get_num_forced_components(iVar4);
					iVar11 = 0;
					while (iVar11 < iVar10) {
						dlc1::get_forced_component(iVar4, iVar11, &iVar12, &iVar13, &iVar14);
						if (iVar14 == 3) {
							if (iVar12 != 0 && iVar12 != 1849449579) {
								iVar0 = func_21(iParam0, iVar12, 3, 4);
							}
							else {
								iVar0 = iVar13;
							}
							iVar11 = iVar10 + 1;
						}
						iVar11++;
					}
				}
			}
		}
		else if (iParam2 >= 112 && iParam2 <= 127 || iVar1 == 7 || dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1719338724, 0)) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, 684992453, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 916636514, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1939378450, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar4, 441715397, 0) ||
				dlc1::_0x341DE7ED1D2A1BFD(iVar4, 264959411, 0)) {
				iVar0 = 3;
			}
			else {
				iVar0 = 6;
			}
		}
		break;
	}
	return iVar0;
}

// Position - 0x1FC71
int func_121(int iParam0, int iParam1, int iParam2, int iParam3) {
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;

	if (iParam2 == 12) {
	}
	else if (iParam2 == 13) {
	}
	else if (iParam2 == 14) {
		dlc1::init_shop_ped_prop(&Var0);
		iVar18 = 0;
		iVar19 = iParam1 - func_23(iParam0);
		if (iVar19 < 0) {
			return -1;
		}
		iVar20 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20) {
			dlc1::get_shop_ped_query_prop(iVar17, &Var0);
			if (!dlc1::_is_dlc_data_empty(Var0)) {
				if (iVar18 == iVar19) {
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else {
		dlc1::init_shop_ped_component(&Var21);
		iVar39 = 0;
		iVar40 = iParam1 - func_22(iParam0, func_143(iParam2));
		if (iVar40 < 0) {
			return -1;
		}
		if (iParam0 == Global_69645.f_26[iParam2] && iParam1 == Global_69645[iParam2] &&
			Global_69645.f_13[iParam2] != 0) {
			return Global_69645.f_13[iParam2];
		}
		iVar41 = dlc1::_get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_143(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41) {
			dlc1::get_shop_ped_query_component(iVar38, &Var21);
			if (!dlc1::_is_dlc_data_empty(Var21)) {
				if (iVar39 == iVar40) {
					Global_69645.f_13[iParam2] = Var21.f_1;
					Global_69645[iParam2] = iParam1;
					Global_69645.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

// Position - 0x1FDCD
int func_122(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 12 || iParam1 == 13 || iParam1 == 14 || ped::is_ped_injured(iParam0)) {
		return -99;
	}
	iVar0 = func_143(iParam1);
	iVar1 = ped::get_ped_drawable_variation(iParam0, iVar0);
	iVar2 = ped::get_ped_texture_variation(iParam0, iVar0);
	return func_123(iParam0, iVar1, iVar2, iParam1);
}

// Position - 0x1FE2D
int func_123(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_143(iParam3);
	iVar1 = ped::get_number_of_ped_drawable_variations(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= iVar1 - 1) {
		iVar5 = ped::get_number_of_ped_texture_variations(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1) {
			iVar2 += iVar5;
		}
		else {
			iVar4 = 0;
			while (iVar4 <= iVar5 - 1) {
				if (iVar3 == iParam1 && iVar4 == iParam2) {
					return iVar2;
				}
				else {
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

// Position - 0x1FEB1
void func_124(int iParam0) {
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
	bool bVar14;
	int iVar15;
	struct<5> Var16;
	bool bVar33;

	iVar0 = entity::get_entity_model(iParam0);
	iVar1 = ped::get_ped_drawable_variation(iParam0, 11);
	iVar2 = ped::get_ped_texture_variation(iParam0, 11);
	iVar3 = ped::get_ped_drawable_variation(iParam0, 1);
	iVar4 = ped::get_ped_texture_variation(iParam0, 1);
	iVar5 = ped::get_ped_drawable_variation(iParam0, 8);
	iVar6 = ped::get_ped_texture_variation(iParam0, 8);
	iVar7 = ped::get_ped_drawable_variation(iParam0, 10);
	iVar8 = ped::get_ped_texture_variation(iParam0, 10);
	iVar9 = dlc1::get_hash_name_for_component(iParam0, 11, iVar1, iVar2);
	iVar10 = dlc1::get_hash_name_for_component(iParam0, 1, iVar3, iVar4);
	iVar11 = dlc1::get_hash_name_for_component(iParam0, 8, iVar5, iVar6);
	iVar12 = dlc1::get_hash_name_for_prop(iParam0, 0, ped::get_ped_prop_index(iParam0, 0),
										  ped::get_ped_prop_texture_index(iParam0, 0));
	iVar13 = dlc1::get_hash_name_for_component(iParam0, 10, iVar7, iVar8);
	if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, -317649054, 0)) {
		bVar14 = false;
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, 32905942, 0)) {
			if (dlc1::_0x341DE7ED1D2A1BFD(iVar12, 605826125, 0)) {
				if (!dlc1::_0x341DE7ED1D2A1BFD(iVar9, -1889900289, 0)) {
					bVar14 = true;
				}
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, -1889900289, 0)) {
				bVar14 = true;
			}
		}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar10, 72391838, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar10, -1409448021, 0))
			&&!func_126(iVar0, 14, func_135(iParam0, 14, 0), -1) &&
				!dlc1::_0x341DE7ED1D2A1BFD(iVar12, -1821566288, 0) && !dlc1::_0x341DE7ED1D2A1BFD(iVar12, 208298959, 0) {
				if (!dlc1::_0x341DE7ED1D2A1BFD(iVar9, -1889900289, 0)) {
					bVar14 = true;
				}
			}
		else if (dlc1::_0x341DE7ED1D2A1BFD(iVar9, -1889900289, 0)) {
			bVar14 = true;
		}
		if (bVar14) {
			if (func_125(iVar9, 11, &iVar15)) {
				dlc1::get_shop_ped_component(iVar15, &Var16);
				ped::set_ped_component_variation(iParam0, 11, Var16.f_3, Var16.f_4,
												 ped::get_ped_palette_variation(iParam0, 11));
				if (entity::get_entity_model(iParam0) == joaat("mp_m_freemode_01")) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1487683087, 0)) {
						if (dlc1::_0x341DE7ED1D2A1BFD(iVar15, -816428229, 0) && iVar13 != -1104282163) {
							dlc1::get_shop_ped_component(-1104282163, &Var16);
							ped::set_ped_component_variation(iParam0, 10, Var16.f_3, Var16.f_4, 0);
						}
						else if (dlc1::_0x341DE7ED1D2A1BFD(iVar15, -521539998, 0) && iVar13 != 326501576) {
							dlc1::get_shop_ped_component(326501576, &Var16);
							ped::set_ped_component_variation(iParam0, 10, Var16.f_3, Var16.f_4, 0);
						}
					}
				}
				else if (dlc1::_0x341DE7ED1D2A1BFD(iVar13, -1487683087, 0)) {
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar15, -816428229, 0)) {
						if (iVar13 != 1349944895) {
							dlc1::get_shop_ped_component(1349944895, &Var16);
							ped::set_ped_component_variation(iParam0, 10, Var16.f_3, Var16.f_4, 0);
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar15, -521539998, 0)) {
						if (iVar13 != -521200785) {
							dlc1::get_shop_ped_component(-521200785, &Var16);
							ped::set_ped_component_variation(iParam0, 10, Var16.f_3, Var16.f_4, 0);
						}
					}
				}
				ped::set_ped_component_variation(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	bVar33 = false;
	if (iVar0 == joaat("mp_m_freemode_01")) {
		if (!dlc1::_0x341DE7ED1D2A1BFD(iVar9, 572416369, 0)) {
			bVar33 = true;
		}
		switch (iVar10) {
		case -486726551:
		case 219052171:
		case -1032068249:
		case -728660078:
		case -850691818:
		case -544072285:
		case -1811183977:
		case -1111303675:
		case 116190296:
		case -1282673470:
		case -936108522:
		case -671236695:
		case 1520550639:
		case 1816684092:
		case 2102823000:
		case -1866059977:
		case 1250403007:
		case 476038764:
		case 1863871456:
		case 351755390:
		case 1058844872:
		case 1549134650:
		case 1317097361:
		case -829567064:
		case -130604290:
		case -380009149:
		case 596212130:
		case 2140942786:
		case 1901696317:
		case -1797925843:
		case 790890703:
		case 1633873228:
		case 1272234544:
		case -672409000:
		case -1976713507:
		case -1902280196:
		case -115943475:
		case 1684425644:
		case 1983115079: bVar33 = true; break;
		}
	}
	else {
		if (!dlc1::_0x341DE7ED1D2A1BFD(iVar9, -196114988, 0)) {
			bVar33 = true;
		}
		switch (iVar10) {
		case -1615510302:
		case 1527692182:
		case -2083484391:
		case -1372200477:
		case 761684042:
		case 534496565:
		case 303671729:
		case 39193130:
		case -162598372:
		case -393062749:
		case 2063387500:
		case 1633785910:
		case -874910415:
		case -1240415841:
		case 4970004:
		case -1695478944:
		case -450420789:
		case 257455149:
		case 1098963073:
		case -204554982:
		case 1027252245:
		case 1482249810:
		case 1657236270:
		case 633729300:
		case 461560974:
		case 39856713:
		case -130673163:
		case 1595499458:
		case 1424510816:
		case -1686217589:
		case 415037286:
		case 1095714954:
		case -1384675744:
		case -603364477:
		case 423419373:
		case -945505606:
		case -188672778:
		case 578089053:
		case 1418122368:
		case 39432231:
		case 998548092:
		case -539458143:
		case 1285512993:
		case 1384673675:
		case 207316274:
		case 924498608:
		case 1626705513:
		case -1951407139:
		case 1109577920:
		case 1943254053:
		case -706250677:
		case -933962458:
		case 2065187502:
		case 2143125494:
		case -728857530:
		case 113895612:
		case -106672527:
		case -1674341487:
		case -1426640612:
		case -1616110970:
		case -825558845:
		case -1062773636:
		case 1680712586:
		case 731446975:
		case -1441694810:
		case 1076144086:
		case 1291534723:
		case 1653763249:
		case -402884741:
		case 1982600156:
		case -1955185040:
		case -1722820061:
		case 519431533:
		case 1338441322:
		case -97470603:
		case -1293080337:
		case -1531999116:
		case 762322431:
		case 1318477899:
		case 199940853:
		case 1034403438:
		case 1715572641:
		case -2013146335:
		case 1085654154:
		case 962496867:
		case 1611716295:
		case 637461160:
		case -1137111266:
		case 316882033:
		case 590699797:
		case -385914710:
		case -1897876374:
		case -861786128:
		case -633615581:
		case -1298728310:
		case 2019526172:
		case -156630377:
		case 99852586:
		case 1543589216:
		case 1783097837:
		case -1876706754:
		case -1647782520:
		case -1394117691:
		case 977702533:
		case -670092377:
		case -908093624:
		case 1219695857:
		case 1919117393:
		case -534990310:
		case 445654672:
		case 329262298:
		case 22970455:
		case -476401343:
		case -706275878:
		case 1876083388:
		case -1114385357:
		case -840010097:
		case -2048003518:
		case 286623891:
		case 1792195596:
		case 1992938490:
		case -1364343871:
		case 721974080:
		case -45508669:
		case 1998385862:
		case 1222776401: bVar33 = true; break;
		}
	}
	if (bVar33) {
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1889900289, 0) || dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1569775397, 0)) {
			if (iVar0 == joaat("mp_m_freemode_01")) {
				iVar5 = 15;
				iVar6 = 0;
			}
			else {
				iVar5 = 14;
				iVar6 = 0;
			}
		}
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iVar10, -1409448021, 0) && !func_126(iVar0, 14, func_135(iParam0, 14, 0), -1)) {
		if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, 1569775397, 0)) {
			iVar5++;
		}
		else {
			iVar5 = func_9(iParam0, 1);
			iVar6 = iVar2;
		}
	}
	else if (dlc1::_0x341DE7ED1D2A1BFD(iVar11, -1889900289, 0)) {
		iVar5--;
	}
	else {
		iVar5 = func_9(iParam0, 0);
		iVar6 = iVar2;
	}
	ped::set_ped_component_variation(iParam0, 8, iVar5, iVar6, ped::get_ped_palette_variation(iParam0, 8));
}

// Position - 0x20686
bool func_125(int iParam0, int iParam1, var *uParam2) {
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;

	iVar0 = dlc1::_0xC17AD0E5752BECDA(iParam0);
	iVar1 = 0;
	while (iVar1 < iVar0) {
		dlc1::get_variant_component(iParam0, iVar1, uParam2, &uVar2, &iVar3);
		if (iVar3 == iParam1) {
			if (*uParam2 != 0 && *uParam2 != 1849449579) {
				return true;
			}
		}
		iVar1++;
	}
	return false;
}

// Position - 0x206D9
bool func_126(int iParam0, int iParam1, int iParam2, int iParam3) {
	switch (iParam0) {
	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam3 == -1) {
				iParam3 = func_121(iParam0, iParam2, 14, 3);
			}
			if (iParam2 >= 131 && iParam2 <= 154 ||
				iParam2 >= 327 && dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1033433901, 1)) {
				return true;
			}
			break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 14:
			if (iParam3 == -1) {
				iParam3 = func_121(iParam0, iParam2, 14, 4);
			}
			if (iParam2 >= 131 && iParam2 <= 154 ||
				iParam2 >= 327 && dlc1::_0x341DE7ED1D2A1BFD(iParam3, -1033433901, 1)) {
				return true;
			}
			break;
		}
		break;
	}
	return false;
}

// Position - 0x207A7
int func_127(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	bool bVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	bool bVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	int iVar117;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	int iVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	int iVar129;
	int iVar130;
	int iVar131;
	int iVar132;
	int iVar133;
	int iVar134;
	int iVar135;
	int iVar136;
	int iVar137;
	int iVar138;
	int iVar139;
	int iVar140;
	int iVar141;
	int iVar142;
	int iVar143;
	int iVar144;
	int iVar145;
	int iVar146;
	int iVar147;
	int iVar148;
	bool bVar149;
	int iVar150;
	int iVar151;
	int iVar152;
	int iVar153;
	int iVar154;
	int iVar155;
	int iVar156;
	int iVar157;
	int iVar158;
	int iVar159;
	int iVar160;
	int iVar161;
	int iVar162;
	int iVar163;
	int iVar164;
	int iVar165;
	int iVar166;
	int iVar167;
	int iVar168;
	int iVar169;
	int iVar170;
	int iVar171;
	int iVar172;
	int iVar173;
	int iVar174;
	int iVar175;
	int iVar176;
	int iVar177;
	int iVar178;
	int iVar179;
	int iVar180;
	int iVar181;
	int iVar182;
	int iVar183;
	int iVar184;
	int iVar185;
	int iVar186;
	int iVar187;
	int iVar188;
	int iVar189;
	int iVar190;
	int iVar191;
	int iVar192;
	int iVar193;
	int iVar194;
	int iVar195;
	int iVar196;
	int iVar197;
	int iVar198;
	int iVar199;
	int iVar200;
	int iVar201;
	int iVar202;
	int iVar203;
	int iVar204;
	int iVar205;
	int iVar206;
	int iVar207;
	int iVar208;

	iVar0 = -99;
	if (iParam4 == 2) {
		func_128(iParam0, iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam1 == joaat("mp_m_freemode_01")) {
		if (iParam4 == 3) {
			if (iParam2 == 11) {
				if (iParam3 <= 15) {
					iVar0 = 0;
				}
				else if (iParam3 <= 31) {
					iVar0 = 0;
				}
				else if (iParam3 <= 47) {
					iVar0 = 2;
				}
				else if (iParam3 <= 63) {
					iVar0 = 1;
				}
				else if (iParam3 <= 79) {
					iVar0 = 1;
				}
				else if (iParam3 <= 95) {
					iVar0 = 5;
				}
				else if (iParam3 <= 107) {
					iVar0 = 12;
				}
				else if (iParam3 <= 123) {
					iVar0 = 1;
				}
				else if (iParam3 <= 139) {
					iVar0 = 8;
				}
				else if (iParam3 <= 155) {
					iVar0 = 0;
				}
				else if (iParam3 <= 171) {
					iVar0 = 1;
				}
				else if (iParam3 <= 187) {
					iVar2 = func_122(iParam0, 8);
					iVar3 = func_121(iParam1, iVar2, 8, 3);
					iVar4 = func_112(iVar3);
					if (iVar2 >= 96 && iVar2 <= 111 || iVar2 >= 112 && iVar2 <= 127 || iVar2 >= 241 && iVar4 == 6 ||
						iVar2 >= 241 && iVar4 == 7 || iVar2 >= 241 && dlc1::_0x341DE7ED1D2A1BFD(iVar3, 1965569012, 0)) {
						iVar0 = -99;
					}
					else {
						iVar0 = 11;
					}
				}
				else if (iParam3 <= 203) {
					iVar0 = 12;
				}
				else if (iParam3 <= 219) {
					iVar0 = 11;
				}
				else if (iParam3 <= 235) {
					iVar0 = 4;
				}
				else if (iParam3 == 236) {
					iVar0 = 15;
				}
				else if (iParam3 >= 237) {
					iVar5 = func_121(iParam1, iParam3, 11, 3);
					if (iVar5 != -1) {
						bVar6 = true;
						if (dlc1::_0x341DE7ED1D2A1BFD(iVar5, 19149565, 0)) {
							iVar2 = func_122(iParam0, 8);
							iVar7 = func_121(iParam1, iVar2, 8, 3);
							iVar8 = func_112(iVar7);
							if (iVar2 >= 96 && iVar2 <= 111 || iVar2 >= 112 && iVar2 <= 127 ||
								iVar2 >= 241 && iVar8 == 6 || iVar2 >= 241 && iVar8 == 7 ||
								iVar2 >= 241 && dlc1::_0x341DE7ED1D2A1BFD(iVar7, 1965569012, 0)) {
								bVar6 = false;
							}
						}
						if (bVar6) {
							iVar9 = dlc1::_get_num_forced_components(iVar5);
							iVar10 = 0;
							while (iVar10 < iVar9) {
								dlc1::get_forced_component(iVar5, iVar10, &iVar11, &iVar12, &iVar13);
								if (iVar13 == 3) {
									if (iVar11 != 0 && iVar11 != 1849449579) {
										iVar0 = func_21(iParam1, iVar11, 3, 3);
									}
									else {
										iVar0 = iVar12;
									}
									iVar10 = iVar9 + 1;
								}
								iVar10++;
							}
						}
					}
				}
			}
			else if (iParam2 == 8) {
				if (iParam3 <= 15) {
					iVar0 = 1;
				}
				else if (iParam3 <= 31) {
					iVar0 = 1;
				}
				else if (iParam3 <= 47) {
					iVar0 = -99;
				}
				else if (iParam3 <= 63) {
					iVar0 = 12;
				}
				else if (iParam3 <= 79) {
					iVar0 = 12;
				}
				else if (iParam3 <= 95) {
					iVar0 = 6;
				}
				else if (iParam3 <= 111) {
					iVar0 = 11;
				}
				else if (iParam3 <= 127) {
					iVar0 = 11;
				}
				else if (iParam3 <= 143) {
					iVar0 = 1;
				}
				else if (iParam3 <= 159) {
					iVar0 = 1;
				}
				else if (iParam3 <= 175) {
					iVar0 = 4;
				}
				else if (iParam3 <= 191) {
					iVar0 = 12;
				}
				else if (iParam3 <= 207) {
					iVar0 = 1;
				}
				else if (iParam3 <= 223) {
					iVar0 = 1;
				}
				else if (iParam3 <= 239) {
					iVar0 = -99;
				}
				else if (iParam3 == 240) {
					iVar0 = 14;
				}
				else if (iParam3 >= 241) {
					iVar14 = func_121(iParam1, iParam3, 8, 3);
					if (iVar14 != -1) {
						iVar15 = dlc1::_get_num_forced_components(iVar14);
						iVar16 = 0;
						while (iVar16 < iVar15) {
							dlc1::get_forced_component(iVar14, iVar16, &iVar17, &iVar18, &iVar19);
							if (iVar19 == 3) {
								if (iVar17 != 0 && iVar17 != 1849449579) {
									iVar0 = func_21(iParam1, iVar17, 3, 3);
								}
								else {
									iVar0 = iVar18;
									iVar16 = iVar15 + 1;
								}
							}
							iVar16++;
						}
					}
				}
			}
			else if (iParam2 == 10) {
				if (iParam3 >= 7) {
					iVar20 = func_121(iParam1, iParam3, 10, 3);
					if (iVar20 != -1) {
						iVar21 = dlc1::_get_num_forced_components(iVar20);
						iVar22 = 0;
						while (iVar22 < iVar21) {
							dlc1::get_forced_component(iVar20, iVar22, &iVar23, &iVar24, &iVar25);
							if (iVar25 == 3) {
								if (iVar23 != 0 && iVar23 != 1849449579) {
									iVar0 = func_21(iParam1, iVar23, 3, 3);
								}
								else {
									iVar0 = iVar24;
									iVar22 = iVar21 + 1;
								}
							}
							iVar22++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8) {
			if (iParam2 == 11) {
				iVar26 = -1;
				if (iParam3 >= 237) {
					iVar26 = func_112(func_121(iParam1, iParam3, 11, 3));
				}
				if (iParam3 <= 15) {
					iVar0 = 240;
				}
				else if (iParam3 <= 31) {
					iVar0 = 240;
				}
				else if (iParam3 <= 47) {
					iVar0 = 240;
				}
				else if (iParam3 <= 63) {
					iVar0 = -99;
				}
				else if (iParam3 <= 79) {
					iVar0 = -99;
				}
				else if (iParam3 <= 95) {
					iVar0 = 240;
				}
				else if (iParam3 <= 107) {
					iVar0 = -99;
				}
				else if (iParam3 <= 123) {
					iVar0 = -99;
				}
				else if (iParam3 <= 139) {
					iVar0 = 240;
				}
				else if (iParam3 <= 155) {
					iVar0 = 240;
				}
				else if (iParam3 <= 171) {
					iVar0 = -99;
				}
				else if (iParam3 <= 187 || iVar26 == 11) {
					iVar2 = func_122(iParam0, 8);
					iVar27 = func_121(iParam1, iVar2, 8, 3);
					iVar28 = func_112(iVar27);
					if (iVar2 >= 96 && iVar2 <= 111 || iVar2 >= 112 && iVar2 <= 127 || iVar2 >= 241 && iVar28 == 6 ||
						iVar2 >= 241 && iVar28 == 7 ||
						iVar2 >= 241 && dlc1::_0x341DE7ED1D2A1BFD(iVar27, 1965569012, 0)) {
					}
					else {
						iVar0 = 112;
					}
				}
				else if (iParam3 <= 203) {
					iVar0 = 240;
				}
				else if (iParam3 <= 219) {
					iVar0 = 240;
				}
				else if (iParam3 <= 235) {
					iVar0 = 240;
				}
				else if (iParam3 <= 236) {
					iVar0 = 240;
				}
				else if (iParam3 >= 237) {
					iVar29 = func_121(iParam1, iParam3, 11, 3);
					if (iVar29 != -1) {
						iVar30 = dlc1::_get_num_forced_components(iVar29);
						iVar31 = 0;
						while (iVar31 < iVar30) {
							dlc1::get_forced_component(iVar29, iVar31, &iVar32, &iVar33, &iVar34);
							if (iVar34 == 8) {
								if (iVar32 != 0 && iVar32 != 1849449579) {
									iVar0 = func_21(iParam1, iVar32, 8, 3);
								}
								else {
									iVar0 = iVar33;
									iVar31 = iVar30 + 1;
								}
							}
							iVar31++;
						}
					}
				}
			}
			else if (iParam2 == 7) {
				iVar35 = -1;
				iVar36 = -1;
				if (iParam3 >= 92) {
					iVar36 = func_121(iParam1, iParam3, 7, 3);
					iVar35 = func_112(iVar36);
				}
				if (iParam3 >= 41 && iParam3 <= 56 || iParam3 >= 57 && iParam3 <= 72 ||
					iParam3 >= 73 && iParam3 <= 88 || iVar35 == 10 || iVar35 == 11 || iVar35 == 12 ||
					iParam3 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar36, -1950939707, 0) ||
					iParam3 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar36, -1371423804, 0) ||
					iParam3 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar36, -920534092, 0)) {
					iVar2 = func_122(iParam0, 8);
					if (iVar2 >= 48 && iVar2 <= 63) {
						iVar1 = iVar2 - 48;
						iVar0 = 64 + iVar1;
					}
					else if (iVar2 >= 112 && iVar2 <= 127) {
						iVar1 = iVar2 - 112;
						iVar0 = 96 + iVar1;
					}
					else if (iVar2 >= 176 && iVar2 <= 191) {
						iVar1 = iVar2 - 176;
						iVar0 = 160 + iVar1;
					}
					else if (iVar2 >= 241) {
						iVar37 = func_121(iParam1, iVar2, 8, 3);
						iVar38 = func_112(iVar37);
						bVar39 = dlc1::_0x341DE7ED1D2A1BFD(iVar37, 651155766, 0);
						if (iVar38 == 3 || iVar38 == 7 || iVar38 == 11 ||
							dlc1::_0x341DE7ED1D2A1BFD(iVar37, 1553766533, 0)) {
							if (iVar37 != -1) {
								iVar40 = dlc1::_0xC17AD0E5752BECDA(iVar37);
								iVar41 = 0;
								while (iVar41 < iVar40) {
									dlc1::get_variant_component(iVar37, iVar41, &iVar42, &iVar43, &iVar44);
									if (iVar44 == 8 && !bVar39 || iVar44 == 10 && bVar39) {
										if (iVar42 != 0 && iVar42 != 1849449579) {
											iVar0 = func_21(iParam1, iVar42, 8, 3);
										}
										else {
											iVar0 = iVar43;
										}
										iVar41 = iVar40 + 1;
									}
									iVar41++;
								}
							}
						}
					}
				}
				else if (iParam3 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar36, -378906828, 0) ||
						 iParam3 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar36, -695703461, 0) ||
						 iParam3 >= 92 && dlc1::_0x341DE7ED1D2A1BFD(iVar36, -108328099, 0)) {
					iVar45 = func_121(iParam1, iVar2, 8, 3);
					iVar46 = func_112(iVar45);
					bVar47 = dlc1::_0x341DE7ED1D2A1BFD(iVar45, 651155766, 0);
					if (iVar46 == 3 || iVar46 == 7 || iVar46 == 11 ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar45, 1553766533, 0)) {
						if (iVar45 != -1) {
							iVar48 = dlc1::_0xC17AD0E5752BECDA(iVar45);
							iVar49 = 0;
							while (iVar49 < iVar48) {
								dlc1::get_variant_component(iVar45, iVar49, &iVar50, &iVar51, &iVar52);
								if (iVar52 == 8 && !bVar47 || iVar52 == 10 && bVar47) {
									if (iVar50 != 0 && iVar50 != 1849449579) {
										iVar0 = func_21(iParam1, iVar50, 8, 3);
									}
									else {
										iVar0 = iVar51;
									}
									iVar49 = iVar48 + 1;
								}
								iVar49++;
							}
						}
					}
				}
				else if (iParam3 >= 92) {
					iVar53 = func_121(iParam1, iParam3, 7, 3);
					if (iVar53 != -1) {
						iVar54 = dlc1::_get_num_forced_components(iVar53);
						iVar55 = 0;
						while (iVar55 < iVar54) {
							dlc1::get_forced_component(iVar53, iVar55, &iVar56, &iVar57, &iVar58);
							if (iVar58 == 8) {
								if (iVar56 != 0 && iVar56 != 1849449579) {
									iVar0 = func_21(iParam1, iVar56, 8, 3);
								}
								else {
									iVar0 = iVar57;
									iVar55 = iVar54 + 1;
								}
							}
							iVar55++;
						}
					}
				}
			}
			else if (iParam2 == 10) {
				if (iParam3 >= 7) {
					iVar59 = func_121(iParam1, iParam3, 10, 3);
					if (iVar59 != -1) {
						iVar60 = dlc1::_get_num_forced_components(iVar59);
						iVar61 = 0;
						while (iVar61 < iVar60) {
							dlc1::get_forced_component(iVar59, iVar61, &iVar62, &iVar63, &iVar64);
							if (iVar64 == 8) {
								if (iVar62 != 0 && iVar62 != 1849449579) {
									iVar0 = func_21(iParam1, iVar62, 8, 3);
								}
								else {
									iVar0 = iVar63;
									iVar61 = iVar60 + 1;
								}
							}
							iVar61++;
						}
					}
				}
			}
		}
		else if (iParam4 == 11) {
			if (iParam2 == 7) {
				iVar65 = -1;
				iVar66 = -1;
				if (iParam3 >= 92) {
					iVar66 = func_121(iParam1, iParam3, 7, 3);
					iVar65 = func_112(iVar66);
				}
				if (iParam3 >= 41 && iParam3 <= 56 || iParam3 >= 57 && iParam3 <= 72 ||
					iParam3 >= 73 && iParam3 <= 88 || iVar65 == 10 || iVar65 == 11 || iVar65 == 12 ||
					dlc1::_0x341DE7ED1D2A1BFD(iVar66, -920534092, 0)) {
					iVar67 = func_122(iParam0, 11);
					if (iVar67 >= 237) {
						iVar68 = func_121(iParam1, iVar67, 11, 3);
						if (dlc1::_0x341DE7ED1D2A1BFD(iVar68, 1847239679, 0) &&
							dlc1::_0x341DE7ED1D2A1BFD(iVar68, 1553766533, 0)) {
							if (iVar68 != -1) {
								iVar69 = dlc1::_0xC17AD0E5752BECDA(iVar68);
								iVar70 = 0;
								while (iVar70 < iVar69) {
									dlc1::get_variant_component(iVar68, iVar70, &iVar71, &iVar72, &iVar73);
									if (iVar73 == 11) {
										if (iVar71 != 0 && iVar71 != 1849449579) {
											iVar0 = func_21(iParam1, iVar71, 11, 3);
										}
										else {
											iVar0 = iVar72;
										}
										iVar70 = iVar69 + 1;
									}
									iVar70++;
								}
							}
						}
					}
				}
			}
			else if (iParam2 == 10) {
				if (iParam3 >= 7) {
					iVar74 = func_121(iParam1, iParam3, 10, 3);
					if (iVar74 != -1) {
						iVar75 = dlc1::_get_num_forced_components(iVar74);
						iVar76 = 0;
						while (iVar76 < iVar75) {
							dlc1::get_forced_component(iVar74, iVar76, &iVar77, &iVar78, &iVar79);
							if (iVar79 == 11) {
								if (iVar77 != 0 && iVar77 != 1849449579) {
									iVar0 = func_21(iParam1, iVar77, 11, 3);
								}
								else {
									iVar0 = iVar78;
									iVar76 = iVar75 + 1;
								}
							}
							iVar76++;
						}
					}
				}
			}
		}
		else if (iParam4 == 7) {
			if (iParam2 == 11) {
				iVar80 = func_122(iParam0, 11);
				if (iVar80 >= 237) {
					iVar81 = func_121(iParam1, iVar80, 11, 3);
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar81, 1847239679, 0) &&
						dlc1::_0x341DE7ED1D2A1BFD(iVar81, 1553766533, 0)) {
						iVar81 = func_121(iParam1, iParam3, 11, 3);
						if (iVar81 != -1) {
							iVar82 = dlc1::_get_num_forced_components(iVar81);
							iVar83 = 0;
							while (iVar83 < iVar82) {
								dlc1::get_forced_component(iVar81, iVar83, &iVar84, &iVar85, &iVar86);
								if (iVar86 == 7) {
									if (iVar84 != 0 && iVar84 != 1849449579) {
										iVar0 = func_21(iParam1, iVar84, 7, 3);
									}
									else {
										iVar0 = iVar85;
										iVar83 = iVar82 + 1;
									}
								}
								iVar83++;
							}
						}
					}
				}
			}
			else if (iParam2 == 14) {
				if (iParam3 >= 327) {
					iVar87 = func_121(iParam1, iParam3, 14, 3);
					if (iVar87 != -1) {
						iVar88 = dlc1::_get_num_forced_components(iVar87);
						iVar89 = 0;
						while (iVar89 < iVar88) {
							dlc1::get_forced_component(iVar87, iVar89, &iVar90, &iVar91, &iVar92);
							if (iVar92 == 7) {
								if (iVar90 != 0 && iVar90 != 1849449579) {
									iVar0 = func_21(iParam1, iVar90, 7, 3);
								}
								else {
									iVar0 = iVar91;
									iVar89 = iVar88 + 1;
								}
							}
							iVar89++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4) {
			if (iParam2 == 11) {
				if (iParam3 >= 237) {
					iVar93 = func_121(iParam1, iParam3, 11, 3);
					if (iVar93 != -1) {
						iVar94 = dlc1::_get_num_forced_components(iVar93);
						iVar95 = 0;
						while (iVar95 < iVar94) {
							dlc1::get_forced_component(iVar93, iVar95, &iVar96, &iVar97, &iVar98);
							if (iVar98 == 4) {
								if (iVar96 != 0 && iVar96 != 1849449579) {
									iVar0 = func_21(iParam1, iVar96, 4, 3);
								}
								else {
									iVar0 = iVar97;
									iVar95 = iVar94 + 1;
								}
							}
							iVar95++;
						}
					}
				}
			}
		}
		else if (iParam4 == 10) {
			if (iParam2 == 11) {
				if (iParam3 >= 237) {
					iVar99 = func_121(iParam1, iParam3, 11, 3);
					if (iVar99 != -1) {
						iVar100 = dlc1::_get_num_forced_components(iVar99);
						iVar101 = 0;
						while (iVar101 < iVar100) {
							dlc1::get_forced_component(iVar99, iVar101, &iVar102, &iVar103, &iVar104);
							if (iVar104 == 10) {
								if (iVar102 != 0 && iVar102 != 1849449579) {
									iVar0 = func_21(iParam1, iVar102, 10, 3);
								}
								else {
									iVar0 = iVar103;
									iVar101 = iVar100 + 1;
								}
							}
							iVar101++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6) {
			if (iParam2 == 4) {
				if (iParam3 >= 256) {
					iVar105 = func_121(iParam1, iParam3, 4, 3);
					if (iVar105 != -1) {
						iVar106 = dlc1::_get_num_forced_components(iVar105);
						iVar107 = 0;
						while (iVar107 < iVar106) {
							dlc1::get_forced_component(iVar105, iVar107, &iVar108, &iVar109, &iVar110);
							if (iVar110 == 6) {
								if (iVar108 != 0 && iVar108 != 1849449579) {
									iVar0 = func_21(iParam1, iVar108, 6, 3);
								}
								else {
									iVar0 = iVar109;
									iVar107 = iVar106 + 1;
								}
							}
							iVar107++;
						}
					}
				}
			}
			else if (iParam2 == 11) {
				if (iParam3 >= 237) {
					iVar111 = func_121(iParam1, iParam3, 11, 3);
					if (iVar111 != -1) {
						iVar112 = dlc1::_get_num_forced_components(iVar111);
						iVar113 = 0;
						while (iVar113 < iVar112) {
							dlc1::get_forced_component(iVar111, iVar113, &iVar114, &iVar115, &iVar116);
							if (iVar116 == 6) {
								if (iVar114 != 0 && iVar114 != 1849449579) {
									iVar0 = func_21(iParam1, iVar114, 6, 3);
								}
								else {
									iVar0 = iVar115;
									iVar113 = iVar112 + 1;
								}
							}
							iVar113++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14) {
			if (iParam2 == 1) {
				if (iParam3 >= 26) {
					iVar117 = func_121(iParam1, iParam3, 1, 3);
					if (iVar117 != -1) {
						iVar118 = dlc1::_0x017568A8182D98A6(iVar117);
						iVar119 = 0;
						while (iVar119 < iVar118) {
							dlc1::_0xE1CA84EBF72E691D(iVar117, iVar119, &iVar120, &iVar121, &iVar122);
							if (iVar122 == iParam5) {
								if (iVar120 != 0 && iVar120 != 1849449579) {
									iVar0 = func_21(iParam1, iVar120, 14, 3);
									iVar119 = iVar118 + 1;
								}
								else {
									iVar0 = iVar121;
									iVar119 = iVar118 + 1;
								}
							}
							iVar119++;
						}
					}
				}
			}
			else if (iParam2 == 11) {
				if (iParam3 >= 237) {
					iVar123 = func_121(iParam1, iParam3, 11, 3);
					if (iVar123 != -1) {
						iVar124 = dlc1::_0x017568A8182D98A6(iVar123);
						iVar125 = 0;
						while (iVar125 < iVar124) {
							dlc1::_0xE1CA84EBF72E691D(iVar123, iVar125, &iVar126, &iVar127, &iVar128);
							if (iVar128 == iParam5) {
								if (iVar126 != 0 && iVar126 != 1849449579) {
									iVar0 = func_21(iParam1, iVar126, 14, 3);
									iVar125 = iVar124 + 1;
								}
								else {
									iVar0 = iVar127;
									iVar125 = iVar124 + 1;
								}
							}
							iVar125++;
						}
					}
				}
			}
		}
	}
	else if (iParam1 == joaat("mp_f_freemode_01")) {
		if (iParam4 == 3) {
			if (iParam2 == 11) {
				if (iParam3 <= 15) {
					iVar0 = 0;
				}
				else if (iParam3 <= 31) {
					iVar0 = 5;
				}
				else if (iParam3 <= 47) {
					iVar0 = 2;
				}
				else if (iParam3 <= 63) {
					iVar0 = 3;
				}
				else if (iParam3 <= 79) {
					iVar0 = 4;
				}
				else if (iParam3 <= 95) {
					iVar0 = 4;
				}
				else if (iParam3 <= 111) {
					iVar0 = 5;
				}
				else if (iParam3 <= 127) {
					iVar0 = 6;
				}
				else if (iParam3 <= 143) {
					iVar0 = 5;
				}
				else if (iParam3 <= 159) {
					iVar0 = 9;
				}
				else if (iParam3 <= 175) {
					iVar0 = 7;
				}
				else if (iParam3 <= 191) {
					iVar0 = 11;
				}
				else if (iParam3 <= 207) {
					iVar0 = 12;
				}
				else if (iParam3 <= 223) {
					iVar0 = 4;
				}
				else if (iParam3 <= 239) {
					iVar0 = 14;
				}
				else if (iParam3 <= 255) {
					iVar0 = 15;
				}
				else if (iParam3 >= 256) {
					iVar129 = func_121(iParam1, iParam3, 11, 4);
					if (iVar129 != -1) {
						iVar130 = dlc1::_get_num_forced_components(iVar129);
						iVar131 = 0;
						while (iVar131 < iVar130) {
							dlc1::get_forced_component(iVar129, iVar131, &iVar132, &iVar133, &iVar134);
							if (iVar134 == 3) {
								if (iVar132 != 0 && iVar132 != 1849449579) {
									iVar0 = func_21(iParam1, iVar132, 3, 4);
								}
								else {
									iVar0 = iVar133;
									iVar131 = iVar130 + 1;
								}
							}
							iVar131++;
						}
					}
				}
			}
			else if (iParam2 == 10) {
				if (iParam3 >= 6) {
					iVar135 = func_121(iParam1, iParam3, 10, 4);
					if (iVar135 != -1) {
						iVar136 = dlc1::_get_num_forced_components(iVar135);
						iVar137 = 0;
						while (iVar137 < iVar136) {
							dlc1::get_forced_component(iVar135, iVar137, &iVar138, &iVar139, &iVar140);
							if (iVar140 == 3) {
								if (iVar138 != 0 && iVar138 != 1849449579) {
									iVar0 = func_21(iParam1, iVar138, 3, 4);
								}
								else {
									iVar0 = iVar139;
									iVar137 = iVar136 + 1;
								}
							}
							iVar137++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8) {
			if (iParam2 == 11) {
				if (iParam3 <= 15) {
					iVar0 = 33;
				}
				else if (iParam3 <= 31) {
					iVar0 = -99;
				}
				else if (iParam3 <= 47) {
					iVar0 = 33;
				}
				else if (iParam3 <= 63) {
					iVar0 = 33;
				}
				else if (iParam3 <= 79) {
					iVar0 = 33;
				}
				else if (iParam3 <= 95) {
					iVar0 = 33;
				}
				else if (iParam3 <= 111) {
					iVar0 = -99;
				}
				else if (iParam3 <= 127) {
					iVar0 = -99;
				}
				else if (iParam3 <= 143) {
					iVar0 = -99;
				}
				else if (iParam3 <= 159) {
					iVar0 = 33;
				}
				else if (iParam3 <= 175) {
					iVar0 = -99;
				}
				else if (iParam3 <= 191) {
					iVar0 = 33;
				}
				else if (iParam3 <= 207) {
					iVar0 = 33;
				}
				else if (iParam3 <= 223) {
					iVar1 = iParam3 - 208;
					iVar0 = 103 + iVar1;
				}
				else if (iParam3 <= 239) {
					iVar0 = 33;
				}
				else if (iParam3 <= 255) {
					iVar0 = 33;
				}
				else if (iParam3 >= 256) {
					iVar141 = func_121(iParam1, iParam3, 11, 4);
					if (iVar141 != -1) {
						iVar142 = dlc1::_get_num_forced_components(iVar141);
						iVar143 = 0;
						while (iVar143 < iVar142) {
							dlc1::get_forced_component(iVar141, iVar143, &iVar144, &iVar145, &iVar146);
							if (iVar146 == 8) {
								if (iVar144 != 0 && iVar144 != 1849449579) {
									iVar0 = func_21(iParam1, iVar144, 8, 4);
								}
								else {
									iVar0 = iVar145;
									iVar143 = iVar142 + 1;
								}
							}
							iVar143++;
						}
					}
				}
			}
			else if (iParam2 == 7) {
				iVar147 = -1;
				if (iParam3 >= 55) {
					iVar147 = func_121(iParam1, iParam3, 7, 4);
				}
				if (iVar147 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar147, -920534092, 0) ||
					iVar147 != -1 && dlc1::_0x341DE7ED1D2A1BFD(iVar147, 1537081084, 0)) {
					iVar148 = dlc1::get_hash_name_for_component(iParam0, 8, ped::get_ped_drawable_variation(iParam0, 8),
																ped::get_ped_texture_variation(iParam0, 8));
					bVar149 = false;
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar147, -378906828, 0) ||
						dlc1::_0x341DE7ED1D2A1BFD(iVar147, -108328099, 0)) {
						if (dlc1::_0x341DE7ED1D2A1BFD(iVar148, -1914383230, 0)) {
							bVar149 = true;
						}
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar148, 1553766533, 0)) {
						bVar149 = true;
					}
					if (bVar149) {
						iVar150 = dlc1::_0xC17AD0E5752BECDA(iVar148);
						iVar151 = 0;
						while (iVar151 < iVar150) {
							dlc1::get_variant_component(iVar148, iVar151, &iVar152, &iVar153, &iVar154);
							if (iVar154 == 8) {
								if (iVar152 != 0 && iVar152 != 1849449579) {
									iVar0 = func_21(iParam1, iVar152, 8, 4);
								}
								else {
									iVar0 = iVar153;
								}
								iVar151 = iVar150 + 1;
							}
							iVar151++;
						}
					}
				}
			}
			else if (iParam2 == 10) {
				if (iParam3 >= 6) {
					iVar155 = func_121(iParam1, iParam3, 10, 4);
					if (iVar155 != -1) {
						iVar156 = dlc1::_get_num_forced_components(iVar155);
						iVar157 = 0;
						while (iVar157 < iVar156) {
							dlc1::get_forced_component(iVar155, iVar157, &iVar158, &iVar159, &iVar160);
							if (iVar160 == 8) {
								if (iVar158 != 0 && iVar158 != 1849449579) {
									iVar0 = func_21(iParam1, iVar158, 8, 4);
								}
								else {
									iVar0 = iVar159;
									iVar157 = iVar156 + 1;
								}
							}
							iVar157++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6) {
			if (iParam2 == 4) {
				if (iParam3 >= 256) {
					iVar161 = func_121(iParam1, iParam3, 4, 4);
					if (iVar161 != -1) {
						iVar162 = dlc1::_get_num_forced_components(iVar161);
						iVar163 = 0;
						while (iVar163 < iVar162) {
							dlc1::get_forced_component(iVar161, iVar163, &iVar164, &iVar165, &iVar166);
							if (iVar166 == 6) {
								if (iVar164 != 0 && iVar164 != 1849449579) {
									iVar0 = func_21(iParam1, iVar164, 6, 4);
								}
								else {
									iVar0 = iVar165;
									iVar163 = iVar162 + 1;
								}
							}
							iVar163++;
						}
					}
				}
			}
			else if (iParam2 == 11) {
				if (iParam3 >= 256) {
					iVar167 = func_121(iParam1, iParam3, 11, 4);
					if (iVar167 != -1) {
						iVar168 = dlc1::_get_num_forced_components(iVar167);
						iVar169 = 0;
						while (iVar169 < iVar168) {
							dlc1::get_forced_component(iVar167, iVar169, &iVar170, &iVar171, &iVar172);
							if (iVar172 == 6) {
								if (iVar170 != 0 && iVar170 != 1849449579) {
									iVar0 = func_21(iParam1, iVar170, 6, 4);
								}
								else {
									iVar0 = iVar171;
									iVar169 = iVar168 + 1;
								}
							}
							iVar169++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4) {
			if (iParam2 == 11) {
				if (iParam3 >= 256) {
					iVar173 = func_121(iParam1, iParam3, 11, 4);
					if (iVar173 != -1) {
						iVar174 = dlc1::_get_num_forced_components(iVar173);
						iVar175 = 0;
						while (iVar175 < iVar174) {
							dlc1::get_forced_component(iVar173, iVar175, &iVar176, &iVar177, &iVar178);
							if (iVar178 == 4) {
								if (iVar176 != 0 && iVar176 != 1849449579) {
									iVar0 = func_21(iParam1, iVar176, 4, 4);
								}
								else {
									iVar0 = iVar177;
									iVar175 = iVar174 + 1;
								}
							}
							iVar175++;
						}
					}
				}
			}
		}
		else if (iParam4 == 10) {
			if (iParam2 == 11) {
				if (iParam3 >= 256) {
					iVar179 = func_121(iParam1, iParam3, 11, 4);
					if (iVar179 != -1) {
						iVar180 = dlc1::_get_num_forced_components(iVar179);
						iVar181 = 0;
						while (iVar181 < iVar180) {
							dlc1::get_forced_component(iVar179, iVar181, &iVar182, &iVar183, &iVar184);
							if (iVar184 == 10) {
								if (iVar182 != 0 && iVar182 != 1849449579) {
									iVar0 = func_21(iParam1, iVar182, 10, 4);
								}
								else {
									iVar0 = iVar183;
									iVar181 = iVar180 + 1;
								}
							}
							iVar181++;
						}
					}
				}
			}
		}
		else if (iParam4 == 11) {
			if (iParam2 == 10) {
				if (iParam3 >= 6) {
					iVar185 = func_121(iParam1, iParam3, 10, 4);
					if (iVar185 != -1) {
						iVar186 = dlc1::_get_num_forced_components(iVar185);
						iVar187 = 0;
						while (iVar187 < iVar186) {
							dlc1::get_forced_component(iVar185, iVar187, &iVar188, &iVar189, &iVar190);
							if (iVar190 == 11) {
								if (iVar188 != 0 && iVar188 != 1849449579) {
									iVar0 = func_21(iParam1, iVar188, 11, 4);
								}
								else {
									iVar0 = iVar189;
									iVar187 = iVar186 + 1;
								}
							}
							iVar187++;
						}
					}
				}
			}
		}
		else if (iParam4 == 7) {
			if (iParam2 == 14) {
				if (iParam3 >= 327) {
					iVar191 = func_121(iParam1, iParam3, 14, 4);
					if (iVar191 != -1) {
						iVar192 = dlc1::_get_num_forced_components(iVar191);
						iVar193 = 0;
						while (iVar193 < iVar192) {
							dlc1::get_forced_component(iVar191, iVar193, &iVar194, &iVar195, &iVar196);
							if (iVar196 == 7) {
								if (iVar194 != 0 && iVar194 != 1849449579) {
									iVar0 = func_21(iParam1, iVar194, 7, 4);
								}
								else {
									iVar0 = iVar195;
									iVar193 = iVar192 + 1;
								}
							}
							iVar193++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14) {
			if (iParam2 == 1) {
				if (iParam3 >= 26) {
					iVar197 = func_121(iParam1, iParam3, 1, 4);
					if (iVar197 != -1) {
						iVar198 = dlc1::_0x017568A8182D98A6(iVar197);
						iVar199 = 0;
						while (iVar199 < iVar198) {
							dlc1::_0xE1CA84EBF72E691D(iVar197, iVar199, &iVar200, &iVar201, &iVar202);
							if (iVar202 == iParam5) {
								if (iVar200 != 0 && iVar200 != 1849449579) {
									iVar0 = func_21(iParam1, iVar200, 14, 4);
									iVar199 = iVar198 + 1;
								}
								else {
									iVar0 = iVar201;
									iVar199 = iVar198 + 1;
								}
							}
							iVar199++;
						}
					}
				}
			}
			else if (iParam2 == 11) {
				if (iParam3 >= 256) {
					iVar203 = func_121(iParam1, iParam3, 11, 4);
					if (iVar203 != -1) {
						iVar204 = dlc1::_0x017568A8182D98A6(iVar203);
						iVar205 = 0;
						while (iVar205 < iVar204) {
							dlc1::_0xE1CA84EBF72E691D(iVar203, iVar205, &iVar206, &iVar207, &iVar208);
							if (iVar208 == iParam5) {
								if (iVar206 != 0 && iVar206 != 1849449579) {
									iVar0 = func_21(iParam1, iVar206, 14, 4);
									iVar205 = iVar204 + 1;
								}
								else {
									iVar0 = iVar207;
									iVar205 = iVar204 + 1;
								}
							}
							iVar205++;
						}
					}
				}
			}
		}
	}
	return iVar0;
}

// Position - 0x22205
int func_128(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	int iVar13;

	*iParam4 = -99;
	switch (iParam1) {
	case joaat("mp_m_freemode_01"):
		switch (iParam2) {
		case 1:
			if (iParam3 >= 1 && iParam3 <= 4 || iParam3 >= 5 && iParam3 <= 8 || iParam3 == 9 ||
				iParam3 >= 14 && iParam3 <= 17 || iParam3 >= 22 && iParam3 <= 25) {
				*iParam4 = 0;
			}
			if (iParam3 >= func_22(iParam1, 1)) {
				func_154(iParam1, 1, iParam3);
				if (Global_2621445 == -1751726434) {
					*iParam4 = 0;
				}
			}
			iVar0 = func_122(iParam0, 1);
			if (iVar0 >= 26) {
				iVar1 = func_121(iParam1, iVar0, 1, 3);
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar1, -1188154325, 0)) {
					iVar1 = func_121(iParam1, iParam3, 1, 3);
					if (iVar1 != -1) {
						iVar2 = dlc1::_get_num_forced_components(iVar1);
						iVar3 = 0;
						while (iVar3 < iVar2) {
							dlc1::get_forced_component(iVar1, iVar3, &iVar4, &uVar5, &iVar6);
							if (iVar6 == 2) {
								if (iVar4 != 0 && iVar4 != 1849449579) {
									*iParam4 = func_21(iParam1, iVar4, 2, 3);
								}
								else {
									*iParam4 = uVar5;
									iVar3 = iVar2 + 1;
								}
							}
							iVar3++;
						}
					}
				}
			}
			break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam2) {
		case 1:
			if (iParam3 >= 1 && iParam3 <= 4 || iParam3 >= 5 && iParam3 <= 8 || iParam3 == 9 ||
				iParam3 >= 14 && iParam3 <= 17 || iParam3 >= 22 && iParam3 <= 25) {
				*iParam4 = 0;
			}
			if (iParam3 >= func_22(iParam1, 1)) {
				func_154(iParam1, 1, iParam3);
				if (Global_2621445 == -1751726434) {
					*iParam4 = 0;
				}
			}
			iVar7 = func_122(iParam0, 1);
			if (iVar7 >= 26) {
				iVar8 = func_121(iParam1, iVar7, 1, 4);
				if (dlc1::_0x341DE7ED1D2A1BFD(iVar8, -1188154325, 0)) {
					iVar8 = func_121(iParam1, iParam3, 1, 4);
					if (iVar8 != -1) {
						iVar9 = dlc1::_get_num_forced_components(iVar8);
						iVar10 = 0;
						while (iVar10 < iVar9) {
							dlc1::get_forced_component(iVar8, iVar10, &iVar11, &uVar12, &iVar13);
							if (iVar13 == 2) {
								if (iVar11 != 0 && iVar11 != 1849449579) {
									*iParam4 = func_21(iParam1, iVar11, 2, 4);
								}
								else {
									*iParam4 = uVar12;
									iVar10 = iVar9 + 1;
								}
							}
							iVar10++;
						}
					}
				}
			}
			break;
		}
		break;
	}
	if (*iParam4 != -99) {
		func_12(748, iParam3, Global_69521, 1, 0);
		func_12(749, iParam2, Global_69521, 1, 0);
		return 1;
	}
	return 0;
}

// Position - 0x224CE
void func_129(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ped::is_ped_injured(iParam0)) {
		if (func_131(iParam0)) {
			return;
		}
		if (iParam1 == 11 || iParam1 == 8) {
			iVar0 = entity::get_entity_model(iParam0);
			if (iParam1 == 11) {
				if (func_116(iVar0, iParam2)) {
					iParam1 = 8;
					iParam2 = func_122(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8) {
				iVar1 = func_122(iParam0, 11);
				if (!func_116(iVar0, iVar1)) {
					return;
				}
			}
			func_106(gameplay::get_hash_key("torsoDecal"), iParam0);
			if (iParam1 == 11) {
				if (!func_109(iVar0, iParam2, 13) && !func_109(iVar0, iParam2, 14) && !func_109(iVar0, iParam2, 15) &&
					!func_109(iVar0, iParam2, 16) && !func_109(iVar0, iParam2, 71) && !func_109(iVar0, iParam2, 72)) {
					func_106(gameplay::get_hash_key("crewLogo"), iParam0);
				}
			}
			iVar2 = func_97(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1) {
				if (iParam3 == 1) {
					func_130(iParam0, iVar2, 0);
				}
				else {
					func_132(iVar2, 1, Global_69521);
				}
			}
		}
	}
}

// Position - 0x225FC
void func_130(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	struct<6> Var1;

	if (!ped::is_ped_injured(iParam0)) {
		if (iParam1 != -1) {
			iVar0 = func_104(iParam0);
			if (!func_81(iParam1, -1) || iParam2) {
				if (func_73(&Var1, iParam1, iVar0, iParam0, -1)) {
					ped::_set_ped_decoration(iParam0, Var1.f_4, Var1.f_5);
					func_69(iParam0, Var1.f_4, Var1.f_5);
				}
			}
		}
	}
}

// Position - 0x2265B
bool func_131(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!ped::is_ped_injured(iParam0)) {
		if (entity::get_entity_model(iParam0) == joaat("mp_m_freemode_01")) {
			iVar0 = ped::get_ped_drawable_variation(iParam0, 11);
			if (iVar0 > 15) {
				iVar1 = func_135(iParam0, 11, -1);
				if (iVar1 >= 237) {
					iVar2 = func_121(joaat("mp_m_freemode_01"), iVar1, 11, 3);
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 490219883, 0)) {
						return true;
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 201427653, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar2, 967829025, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -1266557933, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -979468724, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar2, 310055897, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar2, 606713654, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1831422288, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -838136846, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar2, 655638019, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar2, 83294665, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar2, -697656159, 0)) {
						return true;
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar2, 1148412551, 0)) {
						return true;
					}
				}
			}
		}
		else if (entity::get_entity_model(iParam0) == joaat("mp_f_freemode_01")) {
			iVar0 = ped::get_ped_drawable_variation(iParam0, 11);
			if (iVar0 > 15) {
				iVar3 = func_135(iParam0, 11, -1);
				if (iVar3 >= 237) {
					iVar4 = func_121(joaat("mp_f_freemode_01"), iVar3, 11, 4);
					if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, 490219883, 0)) {
						return true;
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, 201427653, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 967829025, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -1266557933, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -979468724, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 970679185, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 83294665, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 382246252, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -99064836, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar4, 198641529, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -398213037, 0) ||
							 dlc1::_0x341DE7ED1D2A1BFD(iVar4, -306768813, 0)) {
						return true;
					}
					else if (dlc1::_0x341DE7ED1D2A1BFD(iVar4, 1148412551, 0)) {
						return true;
					}
				}
			}
		}
	}
	return false;
}

// Position - 0x228DF
void func_132(int iParam0, int iParam1, int iParam2) {
	if (iParam1) {
		if (!func_81(iParam0, iParam2)) {
			func_133(iParam0, 1, iParam2);
		}
	}
	else if (func_81(iParam0, iParam2)) {
		func_133(iParam0, 0, iParam2);
	}
}

// Position - 0x22918
void func_133(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	iVar0 = func_83(iParam0, iParam2);
	iVar1 = iParam0;
	if (iVar1 > -1) {
		if (iParam1) {
			gameplay::set_bit(&iVar0, func_82(iVar1));
		}
		else {
			gameplay::clear_bit(&iVar0, func_82(iVar1));
		}
		func_12(func_84(iParam0), iVar0, iParam2, 1, 0);
	}
}

// Position - 0x22967
int func_134() {
	int iVar0;

	iVar0 = Global_69521;
	if (func_81(13, iVar0)) {
		return 13;
	}
	if (func_81(14, iVar0)) {
		return 14;
	}
	if (func_81(15, iVar0)) {
		return 15;
	}
	if (func_81(16, iVar0)) {
		return 16;
	}
	if (func_81(71, iVar0)) {
		return 71;
	}
	if (func_81(72, iVar0)) {
		return 72;
	}
	return -1;
}

// Position - 0x229D6
int func_135(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (!ped::is_ped_injured(iParam0)) {
		if (iParam1 == 12) {
			iVar0 = 0;
			while (iVar0 <= 53) {
				if (func_39(iParam0, iParam1, iVar0)) {
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13) {
			iVar1 = 0;
			while (iVar1 <= 19) {
				if (func_39(iParam0, iParam1, iVar1)) {
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14) {
			if (iParam2 == -1) {
			}
			else {
				return func_136(iParam0, iParam2);
			}
		}
		else {
			return func_122(iParam0, iParam1);
		}
	}
	return -99;
}

// Position - 0x22A77
int func_136(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (ped::is_ped_injured(iParam0)) {
		return -99;
	}
	iVar0 = ped::get_ped_prop_index(iParam0, iParam1);
	if (iVar0 == -1) {
		return func_115(iParam1);
	}
	iVar1 = ped::get_ped_prop_texture_index(iParam0, iParam1);
	return func_137(iParam0, iVar0, iVar1, iParam1);
}

// Position - 0x22ABD
int func_137(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam1 == -1) {
		return func_115(iParam3);
	}
	iVar0 = entity::get_entity_model(iParam0);
	iVar1 = dlc1::get_hash_name_for_prop(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0) {
		if (iVar0 == joaat("mp_m_freemode_01")) {
			return func_21(entity::get_entity_model(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01")) {
			return func_21(entity::get_entity_model(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = ped::get_number_of_ped_prop_drawable_variations(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= iVar2 - 1) {
		iVar6 = ped::get_number_of_ped_prop_texture_variations(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1) {
			iVar3 += iVar6;
		}
		else {
			iVar5 = 0;
			while (iVar5 <= iVar6 - 1) {
				if (iVar4 == iParam1 && iVar5 == iParam2) {
					iVar3 += func_138(iParam0, iParam3);
					return iVar3;
				}
				else {
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_115(iParam3);
}

// Position - 0x22BB9
int func_138(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = entity::get_entity_model(iParam0);
	switch (iVar0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 58;

		case 2: return 112;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 82;

		case 2: return 158;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 88;

		case 2: return 154;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 155;

		case 6: return 319;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0: return 10;

		case 1: return 155;

		case 6: return 319;
		}
		break;
	}
	return -99;
}

// Position - 0x22CF7
void func_139(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	if (iParam2 == -1) {
		ped::clear_ped_prop(iParam0, iParam1);
		if (iParam1 == 0) {
			ped::set_ped_config_flag(iParam0, 34, 0);
			ped::set_ped_config_flag(iParam0, 36, 0);
		}
	}
	else {
		ped::set_ped_prop_index(iParam0, iParam1, iParam2, iParam3, network::network_is_game_in_progress());
		if (iParam1 == 0) {
			iVar0 = func_137(iParam0, iParam2, iParam3, iParam1);
			if (func_126(entity::get_entity_model(iParam0), 14, iVar0,
						 dlc1::get_hash_name_for_prop(iParam0, 0, iParam2, iParam3))) {
				ped::set_ped_config_flag(iParam0, 34, 1);
				ped::set_ped_config_flag(iParam0, 36, 1);
			}
			else {
				ped::set_ped_config_flag(iParam0, 34, 0);
				ped::set_ped_config_flag(iParam0, 36, 0);
			}
		}
	}
}

// Position - 0x22D8F
struct<10> func_140(int iParam0, int iParam1) {
	int iVar0;
	struct<10> Var1;

	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8) {
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 31: func_142(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_142(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_142(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_142(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_142(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_142(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8); break;

		case 5: func_142(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8); break;

		case 6: func_142(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_142(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_142(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_142(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8); break;

		default: func_141(&Var1, iParam0, iParam1, 10); break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 31: func_142(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_142(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_142(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8); break;

		case 2: func_142(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8); break;

		case 3: func_142(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_142(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_142(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_142(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_142(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_142(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_141(&Var1, iParam0, iParam1, 9); break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 31: func_142(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_142(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_142(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_142(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_142(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8); break;

		case 4: func_142(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8); break;

		case 5: func_142(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_142(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_142(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_142(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_141(&Var1, iParam0, iParam1, 9); break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 31: func_142(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_142(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_142(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_142(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_142(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_142(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_142(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_142(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_142(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_142(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_142(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8); break;

		case 10: func_142(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8); break;

		case 11: func_142(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8); break;

		case 12: func_142(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8); break;

		case 13: func_142(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8); break;

		case 14: func_142(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8); break;

		case 15: func_142(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8); break;

		case 16: func_142(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8); break;

		case 17: func_142(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8); break;

		case 18: func_142(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8); break;

		case 19: func_142(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8); break;

		case 20: func_142(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8); break;

		case 21: func_142(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8); break;

		case 22: func_142(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 23: func_142(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8); break;

		case 24: func_142(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_141(&Var1, iParam0, iParam1, 25); break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 31: func_142(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 0: func_142(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8); break;

		case 1: func_142(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8); break;

		case 2: func_142(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 3: func_142(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8); break;

		case 4: func_142(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 5: func_142(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8); break;

		case 6: func_142(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8); break;

		case 7: func_142(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 8: func_142(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 9: func_142(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8); break;

		case 10: func_142(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8); break;

		case 11: func_142(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8); break;

		case 12: func_142(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8); break;

		case 13: func_142(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8); break;

		case 14: func_142(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8); break;

		case 15: func_142(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8); break;

		case 16: func_142(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 17: func_142(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8); break;

		case 18: func_142(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8); break;

		case 19: func_142(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 20: func_142(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8); break;

		case 21: func_142(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8); break;

		case 22: func_142(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8); break;

		case 23: func_142(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8); break;

		default: func_141(&Var1, iParam0, iParam1, 25); break;
		}
		break;
	}
	return Var1;
}

//Position - 0x236BE
void func_141(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar16;
	int iVar19;

	if (iParam2 != 0 && iParam2 != -99) {
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero")) {
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one")) {
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two")) {
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01")) {
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01")) {
			iVar0 = 4;
		}
		dlc1::get_shop_ped_outfit(iParam2, &Var1);
		if (!dlc1::_is_dlc_data_empty(Var1)) {
			iVar19 = 0;
			while (iVar19 < Var1.f_3) {
				if (dlc1::_0xA9F9C2E0FDE11CBB(Var1.f_1, iVar19, &vVar16) && vVar16.z != -1) {
					if (vVar16.x != 0 && vVar16.x != -1 && vVar16.x != 1849449579) {
						(*iParam0)[vVar16.z] = func_21(iParam1, vVar16.x, 14, iVar0);
					}
					else if (vVar16.y != -1) {
						(*iParam0)[vVar16.z] = vVar16.y;
					}
				}
				iVar19++;
			}
		}
	}
}

// Position - 0x237E8
void func_142(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8, int iParam9) {
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

// Position - 0x23830
int func_143(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 6: return 6;

	case 5: return 5;

	case 8: return 8;

	case 9: return 9;

	case 10: return 10;

	case 1: return 1;

	case 7: return 7;

	case 11: return 11;
	}
	return 0;
}

// Position - 0x238E0
struct<17> func_144(int iParam0, int iParam1) {
	int iVar0;
	struct<17> Var1;

	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14) {
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0) {
	case joaat("player_zero"):
		switch (iParam1) {
		case 0:
			if (Global_101700.f_8044.f_99.f_58[120]) {
				func_147(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
			}
			else {
				func_147(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
			}
			break;

		case 1: func_147(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0); break;

		case 2: func_147(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8); break;

		case 3: func_147(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31); break;

		case 4: func_147(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2); break;

		case 5:
			func_147(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[0], Global_101700.f_2095.f_539.f_200[0], 6, 3, 0,
					 0, 0, -99, 0, 0, 3);
			break;

		case 6: func_147(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 7: func_147(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 8: func_147(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 9: func_147(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 10: func_147(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4); break;

		case 11: func_147(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5); break;

		case 12: func_147(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31); break;

		case 13: func_147(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 14: func_147(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6); break;

		case 15: func_147(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31); break;

		case 16: func_147(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31); break;

		case 17: func_147(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31); break;

		case 18: func_147(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7); break;

		case 19: func_147(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 20: func_147(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 21: func_147(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 22: func_147(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 23: func_147(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31); break;

		case 24: func_147(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31); break;

		case 25: func_147(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 26: func_147(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 27: func_147(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 28: func_147(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31); break;

		case 29: func_147(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 30: func_147(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 31: func_147(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31); break;

		case 32: func_147(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 33: func_147(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 34: func_147(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31); break;

		case 35: func_147(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 36: func_147(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 37: func_147(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 38: func_147(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 39: func_147(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 40: func_147(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 41: func_147(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 42: func_147(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 43: func_147(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 44: func_147(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 45: func_147(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 46: func_147(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 47: func_147(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 48: func_147(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31); break;

		case 49: func_147(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31); break;

		case 50: func_147(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9); break;

		case 51: func_147(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 52: func_147(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31); break;

		default: func_145(&Var1, iParam0, iParam1, 53); break;
		}
		break;

	case joaat("player_one"):
		switch (iParam1) {
		case 0: func_147(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 1: func_147(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31); break;

		case 2:
			func_147(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[1], Global_101700.f_2095.f_539.f_200[1], 17, 2,
					 26, 0, 0, -99, 0, 45, 31);
			break;

		case 3: func_147(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1); break;

		case 4: func_147(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2); break;

		case 5: func_147(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31); break;

		case 6: func_147(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 7: func_147(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3); break;

		case 8: func_147(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5); break;

		case 9: func_147(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 10: func_147(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 11: func_147(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31); break;

		case 12: func_147(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 13: func_147(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 14: func_147(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 15: func_147(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 16: func_147(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 17: func_147(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 18: func_147(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31); break;

		case 19: func_147(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 20: func_147(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 21: func_147(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4); break;

		case 22: func_147(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31); break;

		case 23: func_147(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31); break;

		case 24: func_147(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31); break;

		case 25: func_147(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31); break;

		case 26: func_147(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31); break;

		case 27: func_147(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31); break;

		case 28: func_147(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31); break;

		case 29: func_147(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31); break;

		case 30: func_147(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31); break;

		case 31: func_147(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31); break;

		case 32: func_147(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31); break;

		case 33: func_147(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31); break;

		case 34: func_147(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31); break;

		case 35: func_147(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31); break;

		case 36: func_147(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31); break;

		case 37: func_147(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31); break;

		case 38: func_147(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 39: func_147(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 40: func_147(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31); break;

		case 41: func_147(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31); break;

		case 42: func_147(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31); break;

		case 43: func_147(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6); break;

		case 44: func_147(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7); break;

		case 45: func_147(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8); break;

		case 46: func_147(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31); break;

		default: func_145(&Var1, iParam0, iParam1, 47); break;
		}
		break;

	case joaat("player_two"):
		switch (iParam1) {
		case 0: func_147(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 1: func_147(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8); break;

		case 2: func_147(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1); break;

		case 3: func_147(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2); break;

		case 4:
			func_147(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[2], Global_101700.f_2095.f_539.f_200[2], 8, 0, 0,
					 0, 0, -99, 0, 0, 31);
			break;

		case 5: func_147(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6); break;

		case 6: func_147(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3); break;

		case 7: func_147(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4); break;

		case 8: func_147(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31); break;

		case 9: func_147(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 10: func_147(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 11: func_147(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5); break;

		case 12: func_147(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31); break;

		case 13: func_147(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31); break;

		case 14: func_147(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31); break;

		case 15: func_147(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 16: func_147(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 17: func_147(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 18: func_147(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 19: func_147(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 20: func_147(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 21: func_147(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 22: func_147(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 23: func_147(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 24: func_147(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 25: func_147(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 26: func_147(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 27: func_147(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 28: func_147(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 29: func_147(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 30: func_147(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 31: func_147(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 32: func_147(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 33: func_147(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 34: func_147(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 35: func_147(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 36: func_147(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 37: func_147(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 38: func_147(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 39: func_147(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 40: func_147(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31); break;

		case 41: func_147(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 42: func_147(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 43: func_147(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 44: func_147(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31); break;

		case 45: func_147(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7); break;

		case 46: func_147(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31); break;

		case 47: func_147(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31); break;

		default: func_145(&Var1, iParam0, iParam1, 48); break;
		}
		break;

	case joaat("mp_m_freemode_01"):
		switch (iParam1) {
		case 0: func_147(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31); break;

		case 1: func_147(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0); break;

		case 2: func_147(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1); break;

		case 3: func_147(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2); break;

		case 4: func_147(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3); break;

		case 5: func_147(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4); break;

		case 6: func_147(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5); break;

		case 7: func_147(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6); break;

		case 8: func_147(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7); break;

		case 9: func_147(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8); break;

		case 10: func_147(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9); break;

		case 11: func_147(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10); break;

		case 12: func_147(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11); break;

		case 13: func_147(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12); break;

		case 14: func_147(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13); break;

		case 15: func_147(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14); break;

		case 16: func_147(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15); break;

		case 17: func_147(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16); break;

		case 18: func_147(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17); break;

		case 19: func_147(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18); break;

		case 20: func_147(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19); break;

		case 21: func_147(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20); break;

		case 22: func_147(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21); break;

		case 23: func_147(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22); break;

		case 24: func_147(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23); break;

		case 25: func_147(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24); break;

		default: func_145(&Var1, iParam0, iParam1, 26); break;
		}
		break;

	case joaat("mp_f_freemode_01"):
		switch (iParam1) {
		case 0: func_147(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31); break;

		case 1: func_147(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31); break;

		case 2: func_147(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0); break;

		case 3: func_147(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1); break;

		case 4: func_147(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2); break;

		case 5: func_147(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3); break;

		case 6: func_147(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4); break;

		case 7: func_147(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5); break;

		case 8: func_147(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6); break;

		case 9: func_147(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7); break;

		case 10: func_147(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8); break;

		case 11: func_147(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9); break;

		case 12: func_147(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10); break;

		case 13: func_147(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31); break;

		case 14: func_147(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11); break;

		case 15: func_147(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12); break;

		case 16: func_147(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13); break;

		case 17: func_147(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14); break;

		case 18: func_147(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15); break;

		case 19: func_147(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16); break;

		case 20: func_147(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17); break;

		case 21: func_147(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31); break;

		case 22: func_147(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18); break;

		case 23: func_147(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19); break;

		case 24: func_147(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20); break;

		case 25: func_147(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21); break;

		case 26: func_147(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22); break;

		case 27: func_147(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23); break;

		default: func_145(&Var1, iParam0, iParam1, 28); break;
		}
		break;
	}
	return Var1;
}

//Position - 0x25729
void func_145(var* uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar16;
	struct<2> Var19;
	int iVar36;

	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero")) {
		iVar0 = 0;
		(*uParam0)[13] = 10 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("player_one")) {
		iVar0 = 1;
		(*uParam0)[13] = 9 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("player_two")) {
		iVar0 = 2;
		(*uParam0)[13] = 9 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("mp_m_freemode_01")) {
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01")) {
		iVar0 = 4;
	}
	dlc1::_0xF3FBE2D50A6A8C28(iVar0, 0);
	dlc1::get_shop_ped_query_outfit(iParam2 - iParam3, &Var1);
	if (!dlc1::_is_dlc_data_empty(Var1)) {
		iVar36 = 0;
		while (iVar36 < Var1.f_4) {
			if (dlc1::_get_prop_from_outfit(Var1.f_1, iVar36, &vVar16)) {
				if (vVar16.x != 0 && vVar16.x != -1 && vVar16.x != 1849449579) {
					if (vVar16.z == 10) {
						dlc1::init_shop_ped_component(&Var19);
						dlc1::get_shop_ped_component(vVar16.x, &Var19);
						if (vVar16.x != Var19.f_1) {
							uParam0->f_16 = 1;
						}
					}
					if (vVar16.z == 10 && uParam0->f_16) {
						(*uParam0)[func_146(vVar16.z)] = vVar16.x;
						uParam0->f_16 = 1;
					}
					else {
						(*uParam0)[func_146(vVar16.z)] = func_21(iParam1, vVar16.x, func_146(vVar16.z), iVar0);
					}
				}
				else if (vVar16.y != -1) {
					(*uParam0)[func_146(vVar16.z)] = vVar16.y;
				}
			}
			iVar36++;
		}
		if (Var1.f_3 == 0) {
			(*uParam0)[13] = -99;
		}
		else {
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

// Position - 0x25913
int func_146(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 6: return 6;

	case 5: return 5;

	case 8: return 8;

	case 9: return 9;

	case 10: return 10;

	case 1: return 1;

	case 7: return 7;

	case 11: return 11;
	}
	return 0;
}

// Position - 0x259C3
void func_147(var *uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) {
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

// Position - 0x25A34
void func_148(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10[2];
	struct<2> Var13;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	struct<2> Var34;
	int iVar51;
	int iVar52;
	int iVar53;

	if (network::network_is_game_in_progress()) {
		if (Global_69521 != func_14() || iParam2 == -99) {
			return;
		}
		Global_69523[2 /*14*/] = {func_154(iParam0, iParam1, iParam2)};
		if (gameplay::is_bit_set(Global_69523[2 /*14*/].f_6, 1) &&
			gameplay::is_bit_set(Global_69523[2 /*14*/].f_6, 6)) {
			if (iParam1 == 12) {
				func_151(Global_2621444, 2, 1, 1, -1);
			}
			else if (iParam1 == 13) {
			}
			else if (iParam1 == 14) {
				func_151(Global_2621444, 2, 1, 1, -1);
			}
			else {
				func_151(Global_2621444, 2, 1, 1, -1);
			}
			if (iParam3) {
				iVar0 = dlc1::_0xC17AD0E5752BECDA(Global_2621444);
				iVar5 = 0;
				iVar1 = 0;
				while (iVar1 < iVar0) {
					if (iVar5 < Global_2592918) {
						Global_2592918[iVar5] = -1;
						Global_2592929[iVar5] = -1;
					}
					dlc1::get_variant_component(Global_2621444, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar4 != 10 && iVar4 != 9) {
						if (iParam1 == 4 && dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, -1223513441, 0)) {
						}
						else if (iVar2 != 0 && iVar2 != 1849449579) {
							func_151(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_2592918) {
								Global_2592918[iVar5] = iVar2;
								Global_2592929[iVar5] = iVar4;
								iVar5++;
							}
						}
						else {
							func_148(iParam0, func_146(iVar4), uVar3, 0);
						}
					}
					iVar1++;
				}
				Global_2592917++;
				if (Global_2592917 < 2) {
					iVar1 = 0;
					while (iVar1 < iVar5) {
						if (iVar1 < Global_2592918) {
							if (Global_2592918[iVar1] != -1) {
								if (iParam0 == joaat("mp_m_freemode_01")) {
									func_148(
										iParam0, func_146(Global_2592929[iVar1]),
										func_21(iParam0, Global_2592918[iVar1], func_146(Global_2592929[iVar1]), 3), 1);
								}
								else {
									func_148(
										iParam0, func_146(Global_2592929[iVar1]),
										func_21(iParam0, Global_2592918[iVar1], func_146(Global_2592929[iVar1]), 4), 1);
								}
							}
						}
						iVar1++;
					}
				}
				Global_2592917--;
			}
			return;
		}
		if (gameplay::is_bit_set(Global_69523[2 /*14*/].f_6, 1) &&
			!gameplay::is_bit_set(Global_69523[2 /*14*/].f_6, 6)) {
			if (func_150(iParam1, Global_69523[1 /*14*/].f_2, &iVar6)) {
				iVar7 = func_107(iVar6, Global_69521, 0);
				gameplay::set_bit(&iVar7, Global_69523[2 /*14*/].f_1);
				func_12(iVar6, iVar7, Global_69521, 1, 0);
			}
			if (iParam3 == 1) {
				if (iParam0 == joaat("mp_m_freemode_01")) {
					if (iParam1 == 14) {
						if (iParam2 >= 83 && iParam2 <= 90) {
							iVar8 = 75 + Global_69523[2 /*14*/].f_4;
							func_148(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82) {
							iVar8 = 83 + Global_69523[2 /*14*/].f_4;
							func_148(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8) {
						if (iParam2 >= 48 && iParam2 <= 63) {
							iVar8 = 64 + Global_69523[2 /*14*/].f_4;
							func_148(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79) {
							iVar8 = 48 + Global_69523[2 /*14*/].f_4;
							func_148(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111) {
							iVar8 = 112 + Global_69523[2 /*14*/].f_4;
							func_148(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127) {
							iVar8 = 96 + Global_69523[2 /*14*/].f_4;
							func_148(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191) {
							iVar8 = 160 + Global_69523[2 /*14*/].f_4;
							func_148(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175) {
							iVar8 = 176 + Global_69523[2 /*14*/].f_4;
							func_148(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47) {
							iVar8 = 0 + Global_69523[2 /*14*/].f_4;
							func_148(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239) {
							iVar8 = 16 + Global_69523[2 /*14*/].f_4;
							func_148(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11) {
						if (iParam2 >= 0 && iParam2 <= 15) {
							iVar8 = 32 + Global_69523[2 /*14*/].f_4;
							func_148(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31) {
							iVar8 = 224 + Global_69523[2 /*14*/].f_4;
							func_148(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235) {
							switch (iParam2) {
							case 220:
								iVar10[0] = 691352495;
								iVar10[1] = 691352495;
								break;

							case 221:
								iVar10[0] = 451909412;
								iVar10[1] = 451909412;
								break;

							case 222:
								iVar10[0] = -206550874;
								iVar10[1] = -206550874;
								break;

							case 223:
								iVar10[0] = -445797343;
								iVar10[1] = -445797343;
								break;

							case 224:
								iVar10[0] = -173716332;
								iVar10[1] = -173716332;
								break;

							case 225:
								iVar10[0] = -538304226;
								iVar10[1] = -538304226;
								break;

							case 226:
								iVar10[0] = -592242000;
								iVar10[1] = -592242000;
								break;

							case 227:
								iVar10[0] = -831095241;
								iVar10[1] = -831095241;
								break;

							case 228:
								iVar10[0] = -1092100326;
								iVar10[1] = -1092100326;
								break;

							case 229:
								iVar10[0] = -1465994616;
								iVar10[1] = -1465994616;
								break;

							case 230:
								iVar10[0] = 507503642;
								iVar10[1] = 507503642;
								break;

							case 231:
								iVar10[0] = -1392082519;
								iVar10[1] = -1392082519;
								break;

							case 232:
								iVar10[0] = -88859389;
								iVar10[1] = -88859389;
								break;

							case 233:
								iVar10[0] = 157858412;
								iVar10[1] = 157858412;
								break;

							case 234:
								iVar10[0] = -513152401;
								iVar10[1] = -513152401;
								break;

							case 235:
								iVar10[0] = 2004948615;
								iVar10[1] = 2004948615;
								break;
							}
							dlc1::init_shop_ped_component(&Var13);
							iVar32 = dlc1::_get_num_props_from_outfit(3, 6, -1, 0, -1, 8);
							iVar30 = 0;
							while (iVar30 < iVar32) {
								dlc1::get_shop_ped_query_component(iVar30, &Var13);
								if (!dlc1::_is_dlc_data_empty(Var13)) {
									if (Var13.f_1 == iVar10[0] || Var13.f_1 == iVar10[1]) {
										func_148(iParam0, 8, 241 + iVar31, 0);
										iVar30 = iVar32 + 1;
									}
									iVar31++;
								}
								iVar30++;
							}
						}
					}
					else if (iParam1 == 7) {
						if (iParam2 >= 41 && iParam2 <= 56) {
							switch (Global_69523[2 /*14*/].f_4) {
							case 0:
								func_148(iParam0, 7, func_21(iParam0, -1893758670, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, 221276858, 7, 3), 0);
								break;

							case 1:
								func_148(iParam0, 7, func_21(iParam0, -1596052305, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, 576886046, 7, 3), 0);
								break;

							case 2:
								func_148(iParam0, 7, func_21(iParam0, 1233059274, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, -392978047, 7, 3), 0);
								break;

							case 3:
								func_148(iParam0, 7, func_21(iParam0, 232228476, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, -33764269, 7, 3), 0);
								break;

							case 4:
								func_148(iParam0, 7, func_21(iParam0, -454445919, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, 1510704243, 7, 3), 0);
								break;

							case 5:
								func_148(iParam0, 7, func_21(iParam0, 925653285, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, 1800939276, 7, 3), 0);
								break;

							case 6:
								func_148(iParam0, 7, func_21(iParam0, -2104856604, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, 833565623, 7, 3), 0);
								break;

							case 7:
								func_148(iParam0, 7, func_21(iParam0, 1657483366, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, 1201823645, 7, 3), 0);
								break;

							case 8:
								func_148(iParam0, 7, func_21(iParam0, 501294735, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, 2132496022, 7, 3), 0);
								break;

							case 9:
								func_148(iParam0, 7, func_21(iParam0, 1882573627, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, -1939019463, 7, 3), 0);
								break;

							case 10:
								func_148(iParam0, 7, func_21(iParam0, 206035418, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, 1713491273, 7, 3), 0);
								break;

							case 11:
								func_148(iParam0, 7, func_21(iParam0, -642943834, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, -156668318, 7, 3), 0);
								break;

							case 12:
								func_148(iParam0, 7, func_21(iParam0, -388295935, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, 106696135, 7, 3), 0);
								break;

							case 13:
								func_148(iParam0, 7, func_21(iParam0, 927641567, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, -802905767, 7, 3), 0);
								break;

							case 14:
								func_148(iParam0, 7, func_21(iParam0, 1147226636, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, -505527092, 7, 3), 0);
								break;

							case 15:
								func_148(iParam0, 7, func_21(iParam0, 312665744, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, -1144129332, 7, 3), 0);
								break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88) {
							switch (Global_69523[2 /*14*/].f_4) {
							case 0:
								func_148(iParam0, 7, func_21(iParam0, -335266079, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, -925989020, 7, 3), 0);
								break;

							case 1:
								func_148(iParam0, 7, func_21(iParam0, -1379548555, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, 244486895, 7, 3), 0);
								break;

							case 2:
								func_148(iParam0, 7, func_21(iParam0, -1402159165, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, 1095104597, 7, 3), 0);
								break;

							case 3:
								func_148(iParam0, 7, func_21(iParam0, 1357351098, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, 1787874026, 7, 3), 0);
								break;

							case 4:
								func_148(iParam0, 7, func_21(iParam0, -1097178082, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, 476163725, 7, 3), 0);
								break;

							case 5:
								func_148(iParam0, 7, func_21(iParam0, -179482237, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, 1223952305, 7, 3), 0);
								break;

							case 6:
								func_148(iParam0, 7, func_21(iParam0, -750514831, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, 2049796643, 7, 3), 0);
								break;

							case 7:
								func_148(iParam0, 7, func_21(iParam0, -1724573356, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, -1013547784, 7, 3), 0);
								break;

							case 8:
								func_148(iParam0, 7, func_21(iParam0, 94106144, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, 1456972664, 7, 3), 0);
								break;

							case 9:
								func_148(iParam0, 7, func_21(iParam0, 1070524041, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, -1670762848, 7, 3), 0);
								break;

							case 10:
								func_148(iParam0, 7, func_21(iParam0, -1644577318, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, 1428867383, 7, 3), 0);
								break;

							case 11:
								func_148(iParam0, 7, func_21(iParam0, 1865900118, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, -1664165762, 7, 3), 0);
								break;

							case 12:
								func_148(iParam0, 7, func_21(iParam0, 1611776523, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, -1962101510, 7, 3), 0);
								break;

							case 13:
								func_148(iParam0, 7, func_21(iParam0, 1381115532, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, -1270511757, 7, 3), 0);
								break;

							case 14:
								func_148(iParam0, 7, func_21(iParam0, 1636484345, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, -1571626106, 7, 3), 0);
								break;

							case 15:
								func_148(iParam0, 7, func_21(iParam0, 1422633851, 7, 3), 0);
								func_148(iParam0, 7, func_21(iParam0, -698332248, 7, 3), 0);
								break;
							}
						}
					}
				}
				else if (iParam0 == joaat("mp_f_freemode_01")) {
					if (iParam1 == 11) {
						if (iParam2 >= 0 && iParam2 <= 15) {
							iVar8 = 16 + Global_69523[2 /*14*/].f_4;
							func_148(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_69523[2 /*14*/] = {func_154(iParam0, iParam1, iParam2)};
				if (iParam1 == 11) {
					iVar9 = func_149(iParam0, iParam2, Global_69523[2 /*14*/].f_4);
					if (iVar9 != -99) {
						func_148(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203) {
						switch (iParam2) {
						case 199: iVar33 = 331193219; break;

						case 200: iVar33 = 1115060468; break;

						case 201: iVar33 = 779636984; break;
						}
						dlc1::init_shop_ped_component(&Var34);
						iVar53 = dlc1::_get_num_props_from_outfit(4, 6, -1, 0, -1, 8);
						iVar51 = 0;
						while (iVar51 < iVar53) {
							dlc1::get_shop_ped_query_component(iVar51, &Var34);
							if (!dlc1::_is_dlc_data_empty(Var34)) {
								if (Var34.f_1 == iVar33) {
									func_148(iParam0, 8, 136 + iVar52, 0);
									iVar51 = iVar53 + 1;
								}
								iVar52++;
							}
							iVar51++;
						}
					}
				}
				else if (iParam1 == 8) {
					iVar9 = func_113(iParam0, iParam2, Global_69523[2 /*14*/].f_4);
					if (iVar9 != -99) {
						func_148(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

// Position - 0x26962
int func_149(int iParam0, int iParam1, int iParam2) {
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

	iVar0 = -99;
	if (iParam0 == joaat("mp_m_freemode_01")) {
		if (iParam1 <= 15) {
			iVar0 = 0;
		}
		else if (iParam1 <= 31) {
			iVar0 = 16;
		}
		else if (iParam1 <= 47) {
			iVar0 = -99;
		}
		else if (iParam1 <= 63) {
			iVar0 = -99;
		}
		else if (iParam1 <= 79) {
			iVar0 = -99;
		}
		else if (iParam1 <= 95) {
			iVar0 = 80;
		}
		else if (iParam1 <= 107) {
			iVar0 = -99;
		}
		else if (iParam1 <= 123) {
			iVar0 = -99;
		}
		else if (iParam1 <= 139) {
			iVar0 = 128;
		}
		else if (iParam1 <= 155) {
			iVar0 = 144;
		}
		else if (iParam1 <= 171) {
			iVar0 = -99;
		}
		else if (iParam1 <= 187) {
			iVar0 = -99;
		}
		else if (iParam1 <= 203) {
			iVar0 = 192;
		}
		else if (iParam1 <= 219) {
			iVar0 = 208;
		}
		else if (iParam1 <= 235) {
			iVar0 = -99;
		}
		else if (iParam1 <= 236) {
			iVar0 = 240;
		}
		else if (iParam1 >= 237) {
			iVar1 = func_121(iParam0, iParam1, 11, 3);
			if (iVar1 != -1) {
				iVar2 = dlc1::_0xC17AD0E5752BECDA(iVar1);
				iVar3 = 0;
				while (iVar3 < iVar2) {
					dlc1::get_variant_component(iVar1, iVar3, &iVar4, &iVar5, &iVar6);
					if (iVar6 == 8) {
						if (iVar4 != 0 && iVar4 != 1849449579) {
							iVar0 = func_21(iParam0, iVar4, 8, 3);
						}
						else {
							iVar0 = iVar5;
						}
						iVar3 = iVar2 + 1;
					}
					iVar3++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		if (iParam1 <= 15) {
			iVar0 = 0;
		}
		else if (iParam1 <= 31) {
			iVar0 = -99;
		}
		else if (iParam1 <= 47) {
			iVar0 = -99;
		}
		else if (iParam1 <= 63) {
			iVar0 = -99;
		}
		else if (iParam1 <= 79) {
			iVar0 = 34;
		}
		else if (iParam1 <= 95) {
			iVar0 = 50;
		}
		else if (iParam1 <= 111) {
			iVar0 = -99;
		}
		else if (iParam1 <= 127) {
			iVar0 = -99;
		}
		else if (iParam1 <= 143) {
			iVar0 = -99;
		}
		else if (iParam1 <= 159) {
			iVar0 = -99;
		}
		else if (iParam1 <= 175) {
			iVar0 = -99;
		}
		else if (iParam1 <= 191) {
			iVar0 = 71;
		}
		else if (iParam1 <= 207) {
			iVar0 = 87;
		}
		else if (iParam1 <= 223) {
			iVar0 = 103;
		}
		else if (iParam1 <= 239) {
			iVar0 = -99;
		}
		else if (iParam1 <= 255) {
			iVar0 = 120;
		}
		else if (iParam1 >= 256) {
			iVar7 = func_121(iParam0, iParam1, 11, 4);
			if (iVar7 != -1) {
				iVar8 = dlc1::_0xC17AD0E5752BECDA(iVar7);
				iVar9 = 0;
				while (iVar9 < iVar8) {
					dlc1::get_variant_component(iVar7, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 8) {
						if (iVar10 != 0 && iVar10 != 1849449579) {
							iVar0 = func_21(iParam0, iVar10, 8, 4);
						}
						else {
							iVar0 = iVar11;
						}
						iVar9 = iVar8 + 1;
					}
					iVar9++;
				}
			}
		}
	}
	if (iVar0 != -99) {
		iVar0 += iParam2;
	}
	return iVar0;
}

// Position - 0x26C57
bool func_150(int iParam0, int iParam1, int *iParam2) {
	*iParam2 = 973;
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 2: *iParam2 = 974; break;

		case 3: *iParam2 = 1424; break;

		case 4: *iParam2 = 990; break;

		case 6: *iParam2 = 998; break;

		case 8: *iParam2 = 1425; break;

		case 9: *iParam2 = 1433; break;

		case 10: *iParam2 = 1435; break;

		case 1: *iParam2 = 1006; break;

		case 7: *iParam2 = 1436; break;

		case 11: *iParam2 = 982; break;

		case 14: *iParam2 = 1014; break;

		case 12: *iParam2 = 1025; break;
		}
		break;

	case 1:
		switch (iParam0) {
		case 2: *iParam2 = 975; break;

		case 4: *iParam2 = 991; break;

		case 6: *iParam2 = 999; break;

		case 8: *iParam2 = 1426; break;

		case 9: *iParam2 = 1434; break;

		case 7: *iParam2 = 1437; break;

		case 11: *iParam2 = 983; break;

		case 14: *iParam2 = 1015; break;
		}
		break;

	case 2:
		switch (iParam0) {
		case 2: *iParam2 = 976; break;

		case 4: *iParam2 = 992; break;

		case 6: *iParam2 = 1000; break;

		case 8: *iParam2 = 1427; break;

		case 7: *iParam2 = 1438; break;

		case 11: *iParam2 = 984; break;

		case 14: *iParam2 = 1016; break;
		}
		break;

	case 3:
		switch (iParam0) {
		case 4: *iParam2 = 993; break;

		case 6: *iParam2 = 1001; break;

		case 8: *iParam2 = 1428; break;

		case 11: *iParam2 = 985; break;

		case 14: *iParam2 = 1017; break;
		}
		break;

	case 4:
		switch (iParam0) {
		case 4: *iParam2 = 994; break;

		case 6: *iParam2 = 1002; break;

		case 8: *iParam2 = 1429; break;

		case 11: *iParam2 = 986; break;

		case 14: *iParam2 = 1018; break;
		}
		break;

	case 5:
		switch (iParam0) {
		case 4: *iParam2 = 995; break;

		case 6: *iParam2 = 1003; break;

		case 8: *iParam2 = 1430; break;

		case 11: *iParam2 = 987; break;

		case 14: *iParam2 = 1019; break;
		}
		break;

	case 6:
		switch (iParam0) {
		case 4: *iParam2 = 996; break;

		case 6: *iParam2 = 1004; break;

		case 8: *iParam2 = 1431; break;

		case 11: *iParam2 = 988; break;

		case 14: *iParam2 = 1020; break;
		}
		break;

	case 7:
		switch (iParam0) {
		case 4: *iParam2 = 997; break;

		case 6: *iParam2 = 1005; break;

		case 8: *iParam2 = 1432; break;

		case 11: *iParam2 = 989; break;

		case 14: *iParam2 = 1021; break;
		}
		break;

	case 8:
		switch (iParam0) {
		case 14: *iParam2 = 1022; break;
		}
		break;

	case 9:
		switch (iParam0) {
		case 14: *iParam2 = 1023; break;
		}
		break;

	case 10:
		switch (iParam0) {
		case 14: *iParam2 = 1024; break;
		}
		break;
	}
	return *iParam2 != 973;
}

// Position - 0x2705C
void func_151(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Global_69521;
	if (iParam4 != -1) {
		iVar0 = iParam4;
	}
	if (func_152(iParam0, iParam1, &iVar2, &iVar1, iParam2, iParam3)) {
		iVar3 = func_107(iVar2, iVar0, 0);
		gameplay::set_bit(&iVar3, iVar1);
		func_12(iVar2, iVar3, iVar0, 1, 0);
	}
}

// Position - 0x270A6
bool func_152(int iParam0, int iParam1, int *iParam2, int *iParam3, bool bParam4, bool bParam5) {
	int iVar0;

	*iParam2 = 6022;
	if (bParam4 && Global_2592887 || !bParam4 && bParam5) {
		switch (iParam1) {
		case 1:
			switch (iParam0) {
			case 8886212:
			case -969630947:
				*iParam2 = 966;
				*iParam3 = 19;
				return true;

			case 1857811503:
			case -1198063650:
				*iParam2 = 966;
				*iParam3 = 20;
				return true;

			case 552556691:
			case -1596927918:
				*iParam2 = 966;
				*iParam3 = 21;
				return true;

			case 328711652:
			case 2093516866:
				*iParam2 = 966;
				*iParam3 = 22;
				return true;

			case 1194403102:
			case 1863511255:
				*iParam2 = 966;
				*iParam3 = 23;
				return true;

			case 1107630790:
			case 1503248869:
				*iParam2 = 966;
				*iParam3 = 24;
				return true;

			case 1807937089:
			case 1263478096:
				*iParam2 = 966;
				*iParam3 = 25;
				return true;

			case 1453442047:
			case 745170819:
				*iParam2 = 966;
				*iParam3 = 26;
				return true;

			case -1071423629:
			case -1382822784:
			case 385813134:
				*iParam2 = 930;
				*iParam3 = 0;
				return true;

			case -833094692:
			case -1731353868:
			case 675392787:
				*iParam2 = 930;
				*iParam3 = 1;
				return true;

			case -1836153782:
			case -1960638561:
			case -238272479:
				*iParam2 = 930;
				*iParam3 = 2;
				return true;

			case -1598414687:
			case 147161830:
			case 67757212:
				*iParam2 = 930;
				*iParam3 = 3;
				return true;

			case 123661793:
			case -92608943:
			case -536372072:
				*iParam2 = 930;
				*iParam3 = 4;
				return true;

			case 330958487:
			case -162931217:
			case -247578875:
				*iParam2 = 930;
				*iParam3 = 5;
				return true;

			case -142717408:
			case 1665087452:
			case -854821214:
				*iParam2 = 930;
				*iParam3 = 7;
				return true;

			case 1290696959:
			case 1012984348:
			case -1458295118:
				*iParam2 = 930;
				*iParam3 = 8;
				return true;

			case 2059568454:
			case 933072050:
			case -1454802604:
				*iParam2 = 930;
				*iParam3 = 11;
				return true;
			}
			break;

		case 2:
			switch (iParam0) {
			case 8886212:
			case -969630947:
				*iParam2 = 1018;
				*iParam3 = 19;
				return true;

			case 1857811503:
			case -1198063650:
				*iParam2 = 1018;
				*iParam3 = 20;
				return true;

			case 552556691:
			case -1596927918:
				*iParam2 = 1018;
				*iParam3 = 21;
				return true;

			case 328711652:
			case 2093516866:
				*iParam2 = 1018;
				*iParam3 = 22;
				return true;

			case 1194403102:
			case 1863511255:
				*iParam2 = 1018;
				*iParam3 = 23;
				return true;

			case 1107630790:
			case 1503248869:
				*iParam2 = 1018;
				*iParam3 = 24;
				return true;

			case 1807937089:
			case 1263478096:
				*iParam2 = 1018;
				*iParam3 = 25;
				return true;

			case 1453442047:
			case 745170819:
				*iParam2 = 1018;
				*iParam3 = 26;
				return true;
			}
			break;
		}
	}
	else {
		switch (iParam1) {
		case 1:
			switch (iParam0) {
			case -1795774903:
			case -379046860:
				*iParam2 = 966;
				*iParam3 = 19;
				return true;

			case 1655095722:
			case 472553912:
				*iParam2 = 966;
				*iParam3 = 20;
				return true;

			case -1951624263:
			case 147288818:
				*iParam2 = 966;
				*iParam3 = 21;
				return true;

			case -1586249913:
			case 1027988462:
				*iParam2 = 966;
				*iParam3 = 22;
				return true;

			case -1472181024:
			case 788217689:
				*iParam2 = 966;
				*iParam3 = 23;
				return true;

			case -1116178608:
			case 1338147047:
				*iParam2 = 966;
				*iParam3 = 24;
				return true;

			case -1028914761:
			case 1095820292:
				*iParam2 = 966;
				*iParam3 = 25;
				return true;

			case -654496167:
			case -1989217217:
				*iParam2 = 966;
				*iParam3 = 26;
				return true;
			}
			break;

		case 2:
			switch (iParam0) {
			case -1795774903:
			case -379046860:
				*iParam2 = 1018;
				*iParam3 = 19;
				return true;

			case 1655095722:
			case 472553912:
				*iParam2 = 1018;
				*iParam3 = 20;
				return true;

			case -1951624263:
			case 147288818:
				*iParam2 = 1018;
				*iParam3 = 21;
				return true;

			case -1586249913:
			case 1027988462:
				*iParam2 = 1018;
				*iParam3 = 22;
				return true;

			case -1472181024:
			case 788217689:
				*iParam2 = 1018;
				*iParam3 = 23;
				return true;

			case -1116178608:
			case 1338147047:
				*iParam2 = 1018;
				*iParam3 = 24;
				return true;

			case -1028914761:
			case 1095820292:
				*iParam2 = 1018;
				*iParam3 = 25;
				return true;

			case -654496167:
			case -1989217217:
				*iParam2 = 1018;
				*iParam3 = 26;
				return true;
			}
			break;
		}
	}
	iVar0 = -1;
	if (bParam4) {
		if (Global_2592887) {
			iVar0 = ped::_0x1E77FA7A62EE6C4C(iParam0);
		}
		else {
			iVar0 = ped::_0xF033419D1B81FAE8(iParam0);
		}
	}
	else if (bParam5) {
		iVar0 = ped::_0x1E77FA7A62EE6C4C(iParam0);
	}
	else {
		iVar0 = ped::_0xF033419D1B81FAE8(iParam0);
	}
	if (iVar0 == -1) {
		return false;
	}
	switch (iParam1) {
	case 1:
		switch (system::floor(system::to_float(iVar0) / 32f)) {
		case 0: *iParam2 = 1753; break;

		case 1: *iParam2 = 1754; break;

		case 2: *iParam2 = 1755; break;

		case 3: *iParam2 = 1756; break;

		case 4: *iParam2 = 1757; break;

		case 5: *iParam2 = 1758; break;

		case 6: *iParam2 = 1765; break;

		case 7: *iParam2 = 1766; break;

		case 8: *iParam2 = 1767; break;

		case 9: *iParam2 = 1768; break;

		case 10: *iParam2 = 1769; break;

		case 11: *iParam2 = 1770; break;

		case 12: *iParam2 = 1771; break;

		case 13: *iParam2 = 1779; break;

		case 14: *iParam2 = 1780; break;

		case 15: *iParam2 = 1881; break;

		case 16: *iParam2 = 1882; break;

		case 17: *iParam2 = 1913; break;

		case 18: *iParam2 = 1927; break;

		case 19: *iParam2 = 1928; break;

		case 20: *iParam2 = 1929; break;

		case 21: *iParam2 = 1930; break;

		case 22: *iParam2 = 1931; break;

		case 23: *iParam2 = 2035; break;

		case 24: *iParam2 = 2036; break;

		case 25: *iParam2 = 2062; break;

		case 26: *iParam2 = 2063; break;

		case 27: *iParam2 = 2064; break;

		case 28: *iParam2 = 2065; break;

		case 29: *iParam2 = 2066; break;

		case 30: *iParam2 = 2067; break;

		case 31: *iParam2 = 2068; break;

		case 32: *iParam2 = 2069; break;

		case 33: *iParam2 = 2070; break;

		case 34: *iParam2 = 2071; break;

		case 35: *iParam2 = 2318; break;

		case 36: *iParam2 = 2319; break;

		case 37: *iParam2 = 2371; break;

		case 38: *iParam2 = 2372; break;

		case 39: *iParam2 = 2373; break;

		case 40: *iParam2 = 2374; break;

		case 41: *iParam2 = 2433; break;

		case 42: *iParam2 = 2434; break;

		case 43: *iParam2 = 2435; break;

		case 44: *iParam2 = 2436; break;

		case 45: *iParam2 = 2437; break;

		case 46: *iParam2 = 2438; break;

		case 47: *iParam2 = 2439; break;

		case 48: *iParam2 = 2440; break;

		case 49: *iParam2 = 2441; break;

		case 50: *iParam2 = 2442; break;

		case 51: *iParam2 = 2571; break;

		case 52: *iParam2 = 2572; break;

		case 53: *iParam2 = 2573; break;

		case 54: *iParam2 = 2574; break;

		case 55: *iParam2 = 2575; break;

		case 56: *iParam2 = 2576; break;

		case 57: *iParam2 = 2577; break;

		case 58: *iParam2 = 2578; break;

		case 59: *iParam2 = 2579; break;

		case 60: *iParam2 = 2580; break;

		case 61: *iParam2 = 2581; break;

		case 62: *iParam2 = 3178; break;

		case 63: *iParam2 = 3179; break;

		case 64: *iParam2 = 3180; break;

		case 65: *iParam2 = 3181; break;

		case 66: *iParam2 = 3182; break;

		case 67: *iParam2 = 3183; break;

		case 68: *iParam2 = 3651; break;

		case 69: *iParam2 = 3652; break;

		case 70: *iParam2 = 3653; break;

		case 71: *iParam2 = 3654; break;

		case 72: *iParam2 = 3655; break;

		case 73: *iParam2 = 3656; break;

		case 74: *iParam2 = 3657; break;

		case 75: *iParam2 = 3658; break;

		case 76: *iParam2 = 3659; break;

		case 77: *iParam2 = 3660; break;

		case 78: *iParam2 = 3764; break;

		case 79: *iParam2 = 3765; break;

		case 80: *iParam2 = 3766; break;

		case 81: *iParam2 = 3767; break;

		case 82: *iParam2 = 3768; break;

		case 83: *iParam2 = 3769; break;

		case 84: *iParam2 = 3770; break;

		case 85: *iParam2 = 3771; break;

		case 86: *iParam2 = 3874; break;

		case 87: *iParam2 = 3875; break;

		case 88: *iParam2 = 3876; break;

		case 89: *iParam2 = 5309; break;

		case 90: *iParam2 = 5310; break;

		case 91: *iParam2 = 5311; break;

		case 92: *iParam2 = 5312; break;

		case 93: *iParam2 = 5313; break;

		case 94: *iParam2 = 5314; break;

		case 95: *iParam2 = 5315; break;

		case 96: *iParam2 = 5316; break;

		case 97: *iParam2 = 5317; break;

		case 98: *iParam2 = 5318; break;

		case 99: *iParam2 = 5319; break;

		case 100: *iParam2 = 5320; break;

		default: break;
		}
		break;

	case 2:
		switch (system::floor(system::to_float(iVar0) / 32f)) {
		case 0: *iParam2 = 1759; break;

		case 1: *iParam2 = 1760; break;

		case 2: *iParam2 = 1761; break;

		case 3: *iParam2 = 1762; break;

		case 4: *iParam2 = 1763; break;

		case 5: *iParam2 = 1764; break;

		case 6: *iParam2 = 1772; break;

		case 7: *iParam2 = 1773; break;

		case 8: *iParam2 = 1774; break;

		case 9: *iParam2 = 1775; break;

		case 10: *iParam2 = 1776; break;

		case 11: *iParam2 = 1777; break;

		case 12: *iParam2 = 1778; break;

		case 13: *iParam2 = 1781; break;

		case 14: *iParam2 = 1782; break;

		case 15: *iParam2 = 1883; break;

		case 16: *iParam2 = 1884; break;

		case 17: *iParam2 = 1914; break;

		case 18: *iParam2 = 1932; break;

		case 19: *iParam2 = 1933; break;

		case 20: *iParam2 = 1934; break;

		case 21: *iParam2 = 1935; break;

		case 22: *iParam2 = 1936; break;

		case 23: *iParam2 = 2037; break;

		case 24: *iParam2 = 2038; break;

		case 25: *iParam2 = 2072; break;

		case 26: *iParam2 = 2073; break;

		case 27: *iParam2 = 2074; break;

		case 28: *iParam2 = 2075; break;

		case 29: *iParam2 = 2076; break;

		case 30: *iParam2 = 2077; break;

		case 31: *iParam2 = 2078; break;

		case 32: *iParam2 = 2079; break;

		case 33: *iParam2 = 2080; break;

		case 34: *iParam2 = 2081; break;

		case 35: *iParam2 = 2320; break;

		case 36: *iParam2 = 2321; break;

		case 37: *iParam2 = 2375; break;

		case 38: *iParam2 = 2376; break;

		case 39: *iParam2 = 2377; break;

		case 40: *iParam2 = 2378; break;

		case 41: *iParam2 = 2443; break;

		case 42: *iParam2 = 2444; break;

		case 43: *iParam2 = 2445; break;

		case 44: *iParam2 = 2446; break;

		case 45: *iParam2 = 2447; break;

		case 46: *iParam2 = 2448; break;

		case 47: *iParam2 = 2449; break;

		case 48: *iParam2 = 2450; break;

		case 49: *iParam2 = 2451; break;

		case 50: *iParam2 = 2452; break;

		case 51: *iParam2 = 2582; break;

		case 52: *iParam2 = 2583; break;

		case 53: *iParam2 = 2584; break;

		case 54: *iParam2 = 2585; break;

		case 55: *iParam2 = 2586; break;

		case 56: *iParam2 = 2587; break;

		case 57: *iParam2 = 2588; break;

		case 58: *iParam2 = 2589; break;

		case 59: *iParam2 = 2590; break;

		case 60: *iParam2 = 2591; break;

		case 61: *iParam2 = 2592; break;

		case 62: *iParam2 = 3184; break;

		case 63: *iParam2 = 3185; break;

		case 64: *iParam2 = 3186; break;

		case 65: *iParam2 = 3187; break;

		case 66: *iParam2 = 3188; break;

		case 67: *iParam2 = 3189; break;

		case 68: *iParam2 = 3661; break;

		case 69: *iParam2 = 3662; break;

		case 70: *iParam2 = 3663; break;

		case 71: *iParam2 = 3664; break;

		case 72: *iParam2 = 3665; break;

		case 73: *iParam2 = 3666; break;

		case 74: *iParam2 = 3667; break;

		case 75: *iParam2 = 3668; break;

		case 76: *iParam2 = 3669; break;

		case 77: *iParam2 = 3670; break;

		case 78: *iParam2 = 3772; break;

		case 79: *iParam2 = 3773; break;

		case 80: *iParam2 = 3774; break;

		case 81: *iParam2 = 3775; break;

		case 82: *iParam2 = 3776; break;

		case 83: *iParam2 = 3777; break;

		case 84: *iParam2 = 3778; break;

		case 85: *iParam2 = 3779; break;

		case 86: *iParam2 = 3877; break;

		case 87: *iParam2 = 3878; break;

		case 88: *iParam2 = 3879; break;

		case 89: *iParam2 = 5321; break;

		case 90: *iParam2 = 5322; break;

		case 91: *iParam2 = 5323; break;

		case 92: *iParam2 = 5324; break;

		case 93: *iParam2 = 5325; break;

		case 94: *iParam2 = 5326; break;

		case 95: *iParam2 = 5327; break;

		case 96: *iParam2 = 5328; break;

		case 97: *iParam2 = 5329; break;

		case 98: *iParam2 = 5330; break;

		case 99: *iParam2 = 5331; break;

		case 100: *iParam2 = 5332; break;

		default: break;
		}
		break;
	}
	*iParam3 = iVar0 % 32;
	return *iParam2 != 6022;
}

// Position - 0x28297
int func_153(int iParam0) {
	if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 0)) {
		return 0;
	}
	if (iParam0 == 1) {
		if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 1)) {
			return 0;
		}
		if (!gameplay::is_bit_set(Global_69523[1 /*14*/].f_6, 2)) {
			return 0;
		}
	}
	return 1;
}

// Position - 0x282E8
struct<14> func_154(int iParam0, int iParam1, int iParam2) {
	func_194();
	if (iParam0 == joaat("mp_m_freemode_01")) {
		func_178(iParam1, iParam2);
	}
	else if (iParam0 == joaat("mp_f_freemode_01")) {
		func_155(iParam1, iParam2);
	}
	return Global_69523[0 /*14*/];
}

//Position - 0x28325
void func_155(int iParam0, int iParam1)
{
	switch (iParam0) {
	case 2: func_177(iParam1); break;

	case 11: func_176(iParam1); break;

	case 8: func_175(iParam1); break;

	case 9: func_174(iParam1); break;

	case 3: func_173(iParam1); break;

	case 4: func_172(iParam1); break;

	case 6: func_171(iParam1); break;

	case 1: func_170(iParam1); break;

	case 7: func_169(iParam1); break;

	case 10: func_168(iParam1); break;

	case 14: func_167(iParam1); break;

	case 12: func_166(iParam1); break;

	case 5: func_165(iParam1); break;

	case 0: func_163(iParam1); break;

	case 13: func_156(iParam1); break;
	}
}

// Position - 0x28415
void func_156(int iParam0) {
	int iVar0;
	int iVar1;
	char *sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0) {
	case 31:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 0:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 3:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 4:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 6:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 9:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 10:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 11:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 12:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 13:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 14:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 15:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 16:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 17:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 18:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 19:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 20:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 21:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 22:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 23:
		iVar6 = 0;
		iVar7 = 0;
		break;
	}
	func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x285D0
void func_157(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8, int iParam9, int iParam10) {
	int iVar0;
	int iVar1;

	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = iParam2 % 32;
	uParam0->f_2 = iParam2 / 32;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&uParam0->f_8, sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_162(iParam8);
	if (uParam0->f_2 >= 10 && uParam0->f_5 >= 0 && uParam0->f_5 < 3) {
		if (!iParam10) {
		}
		uParam0->f_2 = 0;
	}
	if (gameplay::get_hash_key(sParam3) != gameplay::get_hash_key("NO_LABEL")) {
	}
	if (iParam7) {
		gameplay::set_bit(&uParam0->f_6, 3);
	}
	if (iParam10) {
		gameplay::set_bit(&uParam0->f_6, 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3) {
			gameplay::set_bit(&uParam0->f_6, 5);
		}
		gameplay::set_bit(&uParam0->f_6, 1);
		gameplay::set_bit(&uParam0->f_6, 2);
		gameplay::set_bit(&uParam0->f_6, 6);
		if (func_319(14)) {
			return;
		}
		if (iParam1 == 1) {
			if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, 1827025211, 0)) {
				gameplay::set_bit(&uParam0->f_6, 7);
			}
		}
		if (iParam1 == 12) {
			if (!func_161(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_161(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
		else if (iParam1 == 13) {
		}
		else if (iParam1 == 14) {
			if (!func_161(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_161(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
		else {
			if (!func_161(Global_2621444, 1, 1, 1, -1)) {
				gameplay::clear_bit(&uParam0->f_6, 2);
			}
			if (!func_161(Global_2621444, 2, 1, 1, -1)) {
				gameplay::set_bit(&uParam0->f_6, 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3) {
		gameplay::set_bit(&uParam0->f_6, 0);
		gameplay::set_bit(&uParam0->f_6, 5);
		if (func_160(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 1);
		}
		if (func_160(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 2);
		}
		if (!func_160(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0)) {
			gameplay::set_bit(&uParam0->f_6, 4);
		}
	}
	else {
		gameplay::set_bit(&uParam0->f_6, 0);
		if (iParam1 == 11 || iParam1 == 4 || iParam1 == 6 || iParam1 == 1 || iParam1 == 14 || iParam1 == 2 ||
			iParam1 == 8 || iParam1 == 9 || iParam1 == 10 || iParam1 == 7 || iParam1 == 12) {
			if (func_319(14)) {
				return;
			}
			iVar0 = func_107(func_159(iParam1, uParam0->f_2), Global_69521, 0);
			if (gameplay::is_bit_set(iVar0, uParam0->f_1)) {
				gameplay::set_bit(&uParam0->f_6, 1);
			}
			iVar0 = func_107(func_158(iParam1, uParam0->f_2), Global_69521, 0);
			if (gameplay::is_bit_set(iVar0, uParam0->f_1)) {
				gameplay::set_bit(&uParam0->f_6, 2);
			}
			if (func_150(iParam1, uParam0->f_2, &iVar1)) {
				iVar0 = func_107(iVar1, Global_69521, 0);
				if (!gameplay::is_bit_set(iVar0, uParam0->f_1)) {
					gameplay::set_bit(&uParam0->f_6, 4);
				}
			}
		}
		else {
			gameplay::set_bit(&uParam0->f_6, 1);
			gameplay::set_bit(&uParam0->f_6, 2);
		}
	}
	if (iParam1 == 14) {
		if (iParam4 == -1) {
			gameplay::set_bit(&uParam0->f_6, 1);
			gameplay::set_bit(&uParam0->f_6, 2);
		}
	}
}

// Position - 0x28961
int func_158(int iParam0, int iParam1) {
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 2: return 922;

		case 3: return 1409;

		case 4: return 938;

		case 6: return 946;

		case 8: return 1410;

		case 9: return 1418;

		case 10: return 1420;

		case 1: return 954;

		case 7: return 1421;

		case 11: return 930;

		case 14: return 962;

		case 12: return 973;
		}
		break;

	case 1:
		switch (iParam0) {
		case 2: return 923;

		case 4: return 939;

		case 6: return 947;

		case 8: return 1411;

		case 9: return 1419;

		case 7: return 1422;

		case 11: return 931;

		case 14: return 963;
		}
		break;

	case 2:
		switch (iParam0) {
		case 2: return 924;

		case 4: return 940;

		case 6: return 948;

		case 8: return 1412;

		case 7: return 1423;

		case 11: return 932;

		case 14: return 964;
		}
		break;

	case 3:
		switch (iParam0) {
		case 4: return 941;

		case 6: return 949;

		case 8: return 1413;

		case 11: return 933;

		case 14: return 965;
		}
		break;

	case 4:
		switch (iParam0) {
		case 4: return 942;

		case 6: return 950;

		case 8: return 1414;

		case 11: return 934;

		case 14: return 966;
		}
		break;

	case 5:
		switch (iParam0) {
		case 4: return 943;

		case 6: return 951;

		case 8: return 1415;

		case 11: return 935;

		case 14: return 967;
		}
		break;

	case 6:
		switch (iParam0) {
		case 4: return 944;

		case 6: return 952;

		case 8: return 1416;

		case 11: return 936;

		case 14: return 968;
		}
		break;

	case 7:
		switch (iParam0) {
		case 4: return 945;

		case 6: return 953;

		case 8: return 1417;

		case 11: return 937;

		case 14: return 969;
		}
		break;

	case 8:
		switch (iParam0) {
		case 14: return 970;
		}
		break;

	case 9:
		switch (iParam0) {
		case 14: return 971;
		}
		break;

	case 10:
		switch (iParam0) {
		case 14: return 972;
		}
		break;
	}
	return 930;
}

// Position - 0x28D5C
int func_159(int iParam0, int iParam1) {
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 2: return 870;

		case 3: return 1394;

		case 4: return 886;

		case 6: return 894;

		case 8: return 1395;

		case 9: return 1403;

		case 10: return 1405;

		case 1: return 902;

		case 7: return 1406;

		case 11: return 878;

		case 14: return 910;

		case 12: return 921;
		}
		break;

	case 1:
		switch (iParam0) {
		case 2: return 871;

		case 4: return 887;

		case 6: return 895;

		case 8: return 1396;

		case 9: return 1404;

		case 7: return 1407;

		case 11: return 879;

		case 14: return 911;
		}
		break;

	case 2:
		switch (iParam0) {
		case 2: return 872;

		case 4: return 888;

		case 6: return 896;

		case 8: return 1397;

		case 7: return 1408;

		case 11: return 880;

		case 14: return 912;
		}
		break;

	case 3:
		switch (iParam0) {
		case 4: return 889;

		case 6: return 897;

		case 8: return 1398;

		case 11: return 881;

		case 14: return 913;
		}
		break;

	case 4:
		switch (iParam0) {
		case 4: return 890;

		case 6: return 898;

		case 8: return 1399;

		case 11: return 882;

		case 14: return 914;
		}
		break;

	case 5:
		switch (iParam0) {
		case 4: return 891;

		case 6: return 899;

		case 8: return 1400;

		case 11: return 883;

		case 14: return 915;
		}
		break;

	case 6:
		switch (iParam0) {
		case 4: return 892;

		case 6: return 900;

		case 8: return 1401;

		case 11: return 884;

		case 14: return 916;
		}
		break;

	case 7:
		switch (iParam0) {
		case 4: return 893;

		case 6: return 901;

		case 8: return 1402;

		case 11: return 885;

		case 14: return 917;
		}
		break;

	case 8:
		switch (iParam0) {
		case 14: return 918;
		}
		break;

	case 9:
		switch (iParam0) {
		case 14: return 919;
		}
		break;

	case 10:
		switch (iParam0) {
		case 14: return 920;
		}
		break;
	}
	return 878;
}

// Position - 0x29157
bool func_160(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	if (iParam0 == 0) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/][iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/][iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13) {
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3], iParam4);
		}
		if (iParam6 == 1) {
			gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3], iParam4);
		}
		return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14) {
		if (iParam2 == 0) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5) {
			if (iParam5 == 1) {
				gameplay::set_bit(&Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3], iParam4);
			}
			if (iParam6 == 1) {
				gameplay::clear_bit(&Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3], iParam4);
			}
			return gameplay::is_bit_set(Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return false;
}

// Position - 0x2A075
int func_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Global_69521;
	if (iParam4 != -1) {
		iVar0 = iParam4;
	}
	if (func_152(iParam0, iParam1, &iVar2, &iVar1, iParam2, iParam3)) {
		iVar3 = func_107(iVar2, iVar0, 0);
		return gameplay::is_bit_set(iVar3, iVar1);
	}
	return 0;
}

// Position - 0x2A0B7
int func_162(int iParam0) {
	switch (iParam0) {
	case -1: return 0;

	case 0: return 0;

	case 1: return 1;

	case 2: return 2;

	case 3: return 3;

	case 4: return 4;

	case 5: return 5;

	case 6: return 6;

	case 7: return 7;

	case 8: return 8;

	case 9: return 0;

	case 10: return 1;

	case 11: return 0;

	case 12: return 0;

	case 13: return 0;
	}
	return 0;
}

// Position - 0x2A18B
void func_163(int iParam0) {
	int iVar0;

	iVar0 = 0;
	Global_69523[0 /*14*/].f_5 = 4;
	func_164(iVar0, iParam0, 0);
}

// Position - 0x2A1A9
void func_164(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;

	iVar0 = iParam1 - iParam2;
	iVar0 = iVar0;
	if (iVar0 < 0) {
		return;
	}
	iVar1 = Global_69523[0 /*14*/].f_5;
	if (iParam0 == 12) {
		iVar18 = 0;
		iVar19 = dlc1::_0xF3FBE2D50A6A8C28(iVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19) {
			dlc1::get_shop_ped_query_outfit(iVar17, &Var2);
			if (!dlc1::_is_dlc_data_empty(Var2)) {
				if (iVar18 == iParam1 - iParam2) {
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_157(&Global_69523[0 /*14*/], iParam0, iParam1, &Var2.f_7, 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13) {
		func_157(&Global_69523[0 /*14*/], iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14) {
		dlc1::init_shop_ped_prop(&Var20);
		iVar39 = 0;
		iVar40 = dlc1::_get_num_props_from_outfit(iVar1, 6, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40) {
			dlc1::get_shop_ped_query_prop(iVar38, &Var20);
			if (!dlc1::_is_dlc_data_empty(Var20)) {
				if (iVar39 == iParam1 - iParam2) {
					if (Var20.f_6 == 0) {
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1) {
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2) {
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3) {
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4) {
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5) {
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6) {
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7) {
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8) {
						iVar37 = 8;
					}
					else {
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20;
					func_157(&Global_69523[0 /*14*/], iParam0, iParam1, &Var20.f_9, Var20.f_3, Var20.f_4, Var20.f_5,
							 dlc1::_0x341DE7ED1D2A1BFD(Var20.f_1, -2050632586, 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else {
		dlc1::init_shop_ped_component(&Var41);
		iVar59 = 0;
		iVar60 = dlc1::_get_num_props_from_outfit(iVar1, 6, -1, 0, -1, func_143(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60) {
			dlc1::get_shop_ped_query_component(iVar58, &Var41);
			if (!dlc1::_is_dlc_data_empty(Var41)) {
				if (iVar59 == iParam1 - iParam2) {
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_157(&Global_69523[0 /*14*/], iParam0, iParam1, &Var41.f_9, Var41.f_3, Var41.f_4, Var41.f_5,
							 dlc1::_0x341DE7ED1D2A1BFD(Var41.f_1, -2050632586, 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

// Position - 0x2A424
void func_165(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 6:
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 7:
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 8:
		iVar6 = 8;
		iVar7 = 0;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 4;
		func_164(iVar10, iParam0, 9);
		return;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x2A525
void func_166(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_S1", 16);
		break;

	case 2:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_S2", 16);
		break;

	case 3:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_S3", 16);
		break;

	case 4:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_S4", 16);
		break;

	case 5:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_S5", 16);
		break;

	case 6:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_S6", 16);
		break;

	case 7:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_S7", 16);
		break;

	case 8:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_S8", 16);
		break;

	case 9:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P1", 16);
		break;

	case 10:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P2", 16);
		break;

	case 11:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P3", 16);
		break;

	case 12:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P4", 16);
		break;

	case 13:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P5", 16);
		break;

	case 14:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P6", 16);
		break;

	case 15:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P7", 16);
		break;

	case 16:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P8", 16);
		break;

	case 17:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P9", 16);
		break;

	case 18:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_P10", 16);
		break;

	case 19:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B1", 16);
		break;

	case 20:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B2", 16);
		break;

	case 21:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B3", 16);
		break;

	case 22:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B4", 16);
		break;

	case 23:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B5", 16);
		break;

	case 24:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B6", 16);
		break;

	case 25:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B7", 16);
		break;

	case 26:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B8", 16);
		break;

	case 27:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMF_B9", 16);
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 4;
		func_164(iVar10, iParam0, 28);
		return;
	}
	func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x2A802
void func_167(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
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

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0) {
	case 0:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		break;

	case 1:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		break;

	case 2:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 2;
		break;

	case 3:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 3;
		break;

	case 4:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 4;
		break;

	case 5:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 5;
		break;

	case 6:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		break;

	case 7:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 7;
		break;

	case 8:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 8;
		break;

	case 10:
		StringCopy(&Var2, "HT_FMF_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 11:
		StringCopy(&Var2, "HT_FMF_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 12:
		StringCopy(&Var2, "HT_FMF_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 85;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 13:
		StringCopy(&Var2, "HT_FMF_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 75;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 14:
		StringCopy(&Var2, "HT_FMF_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 235;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 15:
		StringCopy(&Var2, "HT_FMF_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 80;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 16:
		StringCopy(&Var2, "HT_FMF_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 85;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 17:
		StringCopy(&Var2, "HT_FMF_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 90;
		iVar8 = 0;
		iVar11 = 1;
		break;
	}
	switch (iParam0) {
	case 18:
		StringCopy(&Var2, "HT_FMF_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 19:
		StringCopy(&Var2, "HT_FMF_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 20:
		StringCopy(&Var2, "HT_FMF_2_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 5000;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 21:
		StringCopy(&Var2, "HT_FMF_2_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 22:
		StringCopy(&Var2, "HT_FMF_2_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 23:
		StringCopy(&Var2, "HT_FMF_2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 24:
		StringCopy(&Var2, "HT_FMF_2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 25:
		StringCopy(&Var2, "HT_FMF_2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 26:
		StringCopy(&Var2, "HT_FMF_2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 27:
		StringCopy(&Var2, "HT_FMF_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 28:
		StringCopy(&Var2, "HT_FMF_3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 29:
		StringCopy(&Var2, "HT_FMF_3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 30:
		StringCopy(&Var2, "HT_FMF_3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 31:
		StringCopy(&Var2, "HT_FMF_3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "HT_FMF_3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 33:
		StringCopy(&Var2, "HT_FMF_3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 34:
		StringCopy(&Var2, "HT_FMF_3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 120;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 35:
		StringCopy(&Var2, "HT_FMF_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 400;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 36:
		StringCopy(&Var2, "HT_FMF_4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 37:
		StringCopy(&Var2, "HT_FMF_4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 375;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 38:
		StringCopy(&Var2, "HT_FMF_4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 75;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 39:
		StringCopy(&Var2, "HT_FMF_4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 40:
		StringCopy(&Var2, "HT_FMF_4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 41:
		StringCopy(&Var2, "HT_FMF_4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 85;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 42:
		StringCopy(&Var2, "HT_FMF_4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 325;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 43:
		StringCopy(&Var2, "HT_FMF_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 35;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 44:
		StringCopy(&Var2, "HT_FMF_5_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 30;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 45:
		StringCopy(&Var2, "HT_FMF_5_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 35;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 46:
		StringCopy(&Var2, "HT_FMF_5_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 40;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 47:
		StringCopy(&Var2, "HT_FMF_5_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 35;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 48:
		StringCopy(&Var2, "HT_FMF_5_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 30;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 49:
		StringCopy(&Var2, "HT_FMF_5_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 35;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 50:
		StringCopy(&Var2, "HT_FMF_5_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 255;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 51:
		StringCopy(&Var2, "HT_FMF_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 360;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 52:
		StringCopy(&Var2, "HT_FMF_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 195;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 53:
		StringCopy(&Var2, "HT_FMF_6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 3970;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 54:
		StringCopy(&Var2, "HT_FMF_6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 135;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 55:
		StringCopy(&Var2, "HT_FMF_6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 1355;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 56:
		StringCopy(&Var2, "HT_FMF_6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 110;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 57:
		StringCopy(&Var2, "HT_FMF_6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 140;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 58:
		StringCopy(&Var2, "HT_FMF_6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 130;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 59:
		StringCopy(&Var2, "HT_FMF_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 230;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 60:
		StringCopy(&Var2, "HT_FMF_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 195;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 61:
		StringCopy(&Var2, "HT_FMF_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 515;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 62:
		StringCopy(&Var2, "HT_FMF_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 545;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 63:
		StringCopy(&Var2, "HT_FMF_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 195;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 64:
		StringCopy(&Var2, "HT_FMF_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 155;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 65:
		StringCopy(&Var2, "HT_FMF_7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 155;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 66:
		StringCopy(&Var2, "HT_FMF_7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 1440;
		iVar8 = 0;
		iVar11 = 1;
		break;
	}
	switch (iParam0) {
	case 67:
		StringCopy(&Var2, "HT_FMF_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 68:
		StringCopy(&Var2, "HT_FMF_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 69:
		StringCopy(&Var2, "HT_FMF_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 70:
		StringCopy(&Var2, "HT_FMF_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 71:
		StringCopy(&Var2, "HT_FMF_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 72:
		StringCopy(&Var2, "HT_FMF_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 73:
		StringCopy(&Var2, "HT_FMF_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 74:
		StringCopy(&Var2, "HT_FMF_8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 75:
		StringCopy(&Var2, "HT_FMF_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 35;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 76:
		StringCopy(&Var2, "HT_FMF_9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 25;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 77:
		StringCopy(&Var2, "HT_FMF_9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 30;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 78:
		StringCopy(&Var2, "HT_FMF_9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 25;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 79:
		StringCopy(&Var2, "HT_FMF_9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 50;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 80:
		StringCopy(&Var2, "HT_FMF_9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 40;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 81:
		StringCopy(&Var2, "HT_FMF_9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 575;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 82:
		StringCopy(&Var2, "HT_FMF_9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 605;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 83:
		StringCopy(&Var2, "HT_FMF_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 84:
		StringCopy(&Var2, "HT_FMF_10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 85:
		StringCopy(&Var2, "HT_FMF_10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 86:
		StringCopy(&Var2, "HT_FMF_10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 87:
		StringCopy(&Var2, "HT_FMF_10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 88:
		StringCopy(&Var2, "HT_FMF_10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 89:
		StringCopy(&Var2, "HT_FMF_10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 90:
		StringCopy(&Var2, "HT_FMF_10_7", 16);
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 285;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 91:
		StringCopy(&Var2, "HT_FMF_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 92:
		StringCopy(&Var2, "HT_FMF_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 2125;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 93:
		StringCopy(&Var2, "HT_FMF_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 94:
		StringCopy(&Var2, "HT_FMF_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 95:
		StringCopy(&Var2, "HT_FMF_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 96:
		StringCopy(&Var2, "HT_FMF_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 97:
		StringCopy(&Var2, "HT_FMF_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 98:
		StringCopy(&Var2, "HT_FMF_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 99:
		StringCopy(&Var2, "HT_FMF_12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 75;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 100:
		StringCopy(&Var2, "HT_FMF_12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 101:
		StringCopy(&Var2, "HT_FMF_12_2", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 102:
		StringCopy(&Var2, "HT_FMF_12_3", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 103:
		StringCopy(&Var2, "HT_FMF_12_4", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 104:
		StringCopy(&Var2, "HT_FMF_12_5", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 105:
		StringCopy(&Var2, "HT_FMF_12_6", 16);
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 75;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 106:
		StringCopy(&Var2, "HT_FMF_12_7", 16);
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 295;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 107:
		StringCopy(&Var2, "HT_FMF_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 195;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 108:
		StringCopy(&Var2, "HT_FMF_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 200;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 109:
		StringCopy(&Var2, "HT_FMF_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 160;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 110:
		StringCopy(&Var2, "HT_FMF_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 855;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 111:
		StringCopy(&Var2, "HT_FMF_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 1615;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 112:
		StringCopy(&Var2, "HT_FMF_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 1130;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 113:
		StringCopy(&Var2, "HT_FMF_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 165;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 114:
		StringCopy(&Var2, "HT_FMF_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 215;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 115:
		StringCopy(&Var2, "HT_FMF_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 145;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 116:
		StringCopy(&Var2, "HT_FMF_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 250;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 117:
		StringCopy(&Var2, "HT_FMF_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 110;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 118:
		StringCopy(&Var2, "HT_FMF_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 145;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 119:
		StringCopy(&Var2, "HT_FMF_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 105;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 120:
		StringCopy(&Var2, "HT_FMF_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 105;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 121:
		StringCopy(&Var2, "HT_FMF_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 115;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 122:
		StringCopy(&Var2, "HT_FMF_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 115;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 123:
		StringCopy(&Var2, "HT_FMF_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 390;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 124:
		StringCopy(&Var2, "HT_FMF_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 395;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 125:
		StringCopy(&Var2, "HT_FMF_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 595;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 126:
		StringCopy(&Var2, "HT_FMF_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 425;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 127:
		StringCopy(&Var2, "HT_FMF_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 600;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 128:
		StringCopy(&Var2, "HT_FMF_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 590;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 129:
		StringCopy(&Var2, "HT_FMF_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 595;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 130:
		StringCopy(&Var2, "HT_FMF_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 555;
		iVar8 = 0;
		iVar11 = 1;
		break;
	}
	switch (iParam0) {
	case 131:
		StringCopy(&Var2, "HE_FMF_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 1060;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 132:
		StringCopy(&Var2, "HE_FMF_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 1400;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 133:
		StringCopy(&Var2, "HE_FMF_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 1315;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 134:
		StringCopy(&Var2, "HE_FMF_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 1230;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 135:
		StringCopy(&Var2, "HE_FMF_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 1145;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 136:
		StringCopy(&Var2, "HE_FMF_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 8450;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 137:
		StringCopy(&Var2, "HE_FMF_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 675;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 138:
		StringCopy(&Var2, "HE_FMF_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 8750;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 139:
		StringCopy(&Var2, "HE_FMF_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 975;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 140:
		StringCopy(&Var2, "HE_FMF_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar1 = 750;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 141:
		StringCopy(&Var2, "HE_FMF_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		iVar1 = 865;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 142:
		StringCopy(&Var2, "HE_FMF_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 890;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 143:
		StringCopy(&Var2, "HE_FMF_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 730;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 144:
		StringCopy(&Var2, "HE_FMF_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 650;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 145:
		StringCopy(&Var2, "HE_FMF_17_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		iVar1 = 645;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 146:
		StringCopy(&Var2, "HE_FMF_17_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		iVar1 = 755;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 147:
		StringCopy(&Var2, "HE_FMF_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 13850;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 148:
		StringCopy(&Var2, "HE_FMF_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 2900;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 149:
		StringCopy(&Var2, "HE_FMF_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 2895;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 150:
		StringCopy(&Var2, "HE_FMF_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 12500;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 151:
		StringCopy(&Var2, "HE_FMF_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 15000;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 152:
		StringCopy(&Var2, "HE_FMF_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 14750;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 153:
		StringCopy(&Var2, "HE_FMF_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 13150;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 154:
		StringCopy(&Var2, "HE_FMF_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 2925;
		iVar8 = 0;
		iVar11 = 2;
		break;
	}
	switch (iParam0) {
	case 155:
		StringCopy(&Var2, "G_FMF_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 65;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 156:
		StringCopy(&Var2, "G_FMF_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 65;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 157:
		StringCopy(&Var2, "G_FMF_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 85;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 158:
		StringCopy(&Var2, "G_FMF_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 75;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 159:
		StringCopy(&Var2, "G_FMF_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 85;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 160:
		StringCopy(&Var2, "G_FMF_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 80;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 161:
		StringCopy(&Var2, "G_FMF_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 85;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 162:
		StringCopy(&Var2, "G_FMF_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 90;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 163:
		StringCopy(&Var2, "CLO_EXF_G_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 820;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 164:
		StringCopy(&Var2, "CLO_EXF_G_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 435;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 165:
		StringCopy(&Var2, "CLO_EXF_G_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 500;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 166:
		StringCopy(&Var2, "G_FMF_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 160;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 167:
		StringCopy(&Var2, "G_FMF_1_1", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 165;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 168:
		StringCopy(&Var2, "G_FMF_1_2", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 170;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 169:
		StringCopy(&Var2, "G_FMF_1_3", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 135;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 170:
		StringCopy(&Var2, "G_FMF_1_4", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 120;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 171:
		StringCopy(&Var2, "G_FMF_1_5", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 110;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 172:
		StringCopy(&Var2, "G_FMF_1_6", 16);
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 140;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 173:
		StringCopy(&Var2, "G_FMF_1_7", 16);
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 130;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 174:
		StringCopy(&Var2, "CLO_EXF_G_1_8", 16);
		iVar6 = 1;
		iVar7 = 8;
		iVar1 = 970;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 175:
		StringCopy(&Var2, "CLO_EXF_G_1_9", 16);
		iVar6 = 1;
		iVar7 = 9;
		iVar1 = 585;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 176:
		StringCopy(&Var2, "CLO_EXF_G_1_10", 16);
		iVar6 = 1;
		iVar7 = 10;
		iVar1 = 650;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 177:
		StringCopy(&Var2, "G_FMF_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 180;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 178:
		StringCopy(&Var2, "G_FMF_2_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 110;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 179:
		StringCopy(&Var2, "G_FMF_2_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 115;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 180:
		StringCopy(&Var2, "G_FMF_2_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 120;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 181:
		StringCopy(&Var2, "G_FMF_2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 595;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 182:
		StringCopy(&Var2, "G_FMF_2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 160;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 183:
		StringCopy(&Var2, "G_FMF_2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 545;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 184:
		StringCopy(&Var2, "G_FMF_2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 590;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 185:
		StringCopy(&Var2, "CLO_EXF_G_2_8", 16);
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 1125;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 186:
		StringCopy(&Var2, "CLO_EXF_G_2_9", 16);
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 740;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 187:
		StringCopy(&Var2, "CLO_EXF_G_2_10", 16);
		iVar6 = 2;
		iVar7 = 10;
		iVar1 = 805;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 188:
		StringCopy(&Var2, "G_FMF_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 6250;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 189:
		StringCopy(&Var2, "G_FMF_3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 4065;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 190:
		StringCopy(&Var2, "G_FMF_3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 3585;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 191:
		StringCopy(&Var2, "G_FMF_3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 4075;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 192:
		StringCopy(&Var2, "G_FMF_3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 4935;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 193:
		StringCopy(&Var2, "G_FMF_3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 130;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 194:
		StringCopy(&Var2, "G_FMF_3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 5600;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 195:
		StringCopy(&Var2, "G_FMF_3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 4790;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 196:
		StringCopy(&Var2, "CLO_EXF_G_3_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 2315;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 197:
		StringCopy(&Var2, "CLO_EXF_G_3_9", 16);
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 1930;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 198:
		StringCopy(&Var2, "CLO_EXF_G_3_10", 16);
		iVar6 = 3;
		iVar7 = 10;
		iVar1 = 1995;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 199:
		StringCopy(&Var2, "G_FMF_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 2245;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 200:
		StringCopy(&Var2, "G_FMF_4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 250;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 201:
		StringCopy(&Var2, "G_FMF_4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 210;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 202:
		StringCopy(&Var2, "G_FMF_4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 245;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 203:
		StringCopy(&Var2, "G_FMF_4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 1205;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 204:
		StringCopy(&Var2, "G_FMF_4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 205;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 205:
		StringCopy(&Var2, "G_FMF_4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 2215;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 206:
		StringCopy(&Var2, "G_FMF_4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 215;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 207:
		StringCopy(&Var2, "CLO_EXF_G_4_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 2835;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 208:
		StringCopy(&Var2, "CLO_EXF_G_4_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 2450;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 209:
		StringCopy(&Var2, "CLO_EXF_G_4_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 2515;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 210:
		StringCopy(&Var2, "G_FMF_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 211:
		StringCopy(&Var2, "G_FMF_5_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 212:
		StringCopy(&Var2, "G_FMF_5_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 213:
		StringCopy(&Var2, "G_FMF_5_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 214:
		StringCopy(&Var2, "G_FMF_5_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 215:
		StringCopy(&Var2, "G_FMF_5_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 216:
		StringCopy(&Var2, "G_FMF_5_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 217:
		StringCopy(&Var2, "G_FMF_5_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 218:
		StringCopy(&Var2, "G_FMF_5_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 50;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 219:
		StringCopy(&Var2, "G_FMF_5_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 50;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 220:
		StringCopy(&Var2, "G_FMF_5_10", 16);
		iVar6 = 5;
		iVar7 = 10;
		iVar1 = 50;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 221:
		StringCopy(&Var2, "G_FMF_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 5000;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 222:
		StringCopy(&Var2, "G_FMF_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 223:
		StringCopy(&Var2, "G_FMF_6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 224:
		StringCopy(&Var2, "G_FMF_6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 225:
		StringCopy(&Var2, "G_FMF_6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 226:
		StringCopy(&Var2, "G_FMF_6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 227:
		StringCopy(&Var2, "G_FMF_6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 228:
		StringCopy(&Var2, "G_FMF_6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 229:
		StringCopy(&Var2, "CLO_EXF_G_6_8", 16);
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 2820;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 230:
		StringCopy(&Var2, "CLO_EXF_G_6_9", 16);
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 2435;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 231:
		StringCopy(&Var2, "CLO_EXF_G_6_10", 16);
		iVar6 = 6;
		iVar7 = 10;
		iVar1 = 2500;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 232:
		StringCopy(&Var2, "G_FMF_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 4815;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 233:
		StringCopy(&Var2, "G_FMF_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 4795;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 234:
		StringCopy(&Var2, "G_FMF_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 4305;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 235:
		StringCopy(&Var2, "G_FMF_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 4305;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 236:
		StringCopy(&Var2, "G_FMF_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 4965;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 237:
		StringCopy(&Var2, "G_FMF_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 480;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 238:
		StringCopy(&Var2, "G_FMF_7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 465;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 239:
		StringCopy(&Var2, "G_FMF_7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 4320;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 240:
		StringCopy(&Var2, "CLO_EXF_G_7_8", 16);
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 2390;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 241:
		StringCopy(&Var2, "CLO_EXF_G_7_9", 16);
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 2005;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 242:
		StringCopy(&Var2, "CLO_EXF_G_7_10", 16);
		iVar6 = 7;
		iVar7 = 10;
		iVar1 = 2070;
		iVar8 = 1;
		iVar11 = 3;
		break;
	}
	switch (iParam0) {
	case 243:
		StringCopy(&Var2, "G_FMF_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 500;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 244:
		StringCopy(&Var2, "G_FMF_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 245:
		StringCopy(&Var2, "G_FMF_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 246:
		StringCopy(&Var2, "G_FMF_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 247:
		StringCopy(&Var2, "G_FMF_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 248:
		StringCopy(&Var2, "G_FMF_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 249:
		StringCopy(&Var2, "G_FMF_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 250:
		StringCopy(&Var2, "G_FMF_8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 251:
		StringCopy(&Var2, "CLO_EXF_G_8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 645;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 252:
		StringCopy(&Var2, "CLO_EXF_G_8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 260;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 253:
		StringCopy(&Var2, "CLO_EXF_G_8_10", 16);
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 325;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 254:
		StringCopy(&Var2, "G_FMF_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 70;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 255:
		StringCopy(&Var2, "G_FMF_9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 60;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 256:
		StringCopy(&Var2, "G_FMF_9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 65;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 257:
		StringCopy(&Var2, "G_FMF_9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 570;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 258:
		StringCopy(&Var2, "G_FMF_9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 525;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 259:
		StringCopy(&Var2, "G_FMF_9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 75;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 260:
		StringCopy(&Var2, "G_FMF_9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 75;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 261:
		StringCopy(&Var2, "G_FMF_9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 90;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 262:
		StringCopy(&Var2, "CLO_EXF_G_9_8", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 645;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 263:
		StringCopy(&Var2, "CLO_EXF_G_9_9", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 260;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 264:
		StringCopy(&Var2, "CLO_EXF_G_9_10", 16);
		iVar6 = 9;
		iVar7 = 10;
		iVar1 = 325;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 265:
		StringCopy(&Var2, "G_FMF_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 4065;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 266:
		StringCopy(&Var2, "G_FMF_10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 65;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 267:
		StringCopy(&Var2, "G_FMF_10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 85;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 268:
		StringCopy(&Var2, "G_FMF_10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 4275;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 269:
		StringCopy(&Var2, "G_FMF_10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 85;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 270:
		StringCopy(&Var2, "G_FMF_10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 80;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 271:
		StringCopy(&Var2, "G_FMF_10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 85;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 272:
		StringCopy(&Var2, "G_FMF_10_7", 16);
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 90;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 273:
		StringCopy(&Var2, "CLO_EXF_G_10_8", 16);
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 2315;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 274:
		StringCopy(&Var2, "CLO_EXF_G_10_9", 16);
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 1930;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 275:
		StringCopy(&Var2, "CLO_EXF_G_10_10", 16);
		iVar6 = 10;
		iVar7 = 10;
		iVar1 = 1995;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 276:
		StringCopy(&Var2, "G_FMF_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 3660;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 277:
		StringCopy(&Var2, "G_FMF_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 4165;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 278:
		StringCopy(&Var2, "G_FMF_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 3670;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 279:
		StringCopy(&Var2, "G_FMF_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 135;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 280:
		StringCopy(&Var2, "G_FMF_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 3620;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 281:
		StringCopy(&Var2, "G_FMF_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 3610;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 282:
		StringCopy(&Var2, "G_FMF_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 4140;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 283:
		StringCopy(&Var2, "G_FMF_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 130;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 284:
		StringCopy(&Var2, "G_FMF_12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 285:
		StringCopy(&Var2, "G_FMF_12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 286:
		StringCopy(&Var2, "G_FMF_12_2", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 287:
		StringCopy(&Var2, "G_FMF_12_3", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 288:
		StringCopy(&Var2, "G_FMF_12_4", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 289:
		StringCopy(&Var2, "G_FMF_12_5", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 290:
		StringCopy(&Var2, "G_FMF_12_6", 16);
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 291:
		StringCopy(&Var2, "G_FMF_12_7", 16);
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 292:
		StringCopy(&Var2, "G_FMF_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 293:
		StringCopy(&Var2, "G_FMF_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 294:
		StringCopy(&Var2, "G_FMF_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 295:
		StringCopy(&Var2, "G_FMF_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 296:
		StringCopy(&Var2, "G_FMF_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 297:
		StringCopy(&Var2, "G_FMF_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 298:
		StringCopy(&Var2, "G_FMF_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 299:
		StringCopy(&Var2, "G_FMF_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 300:
		StringCopy(&Var2, "G_FMF_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 325;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 301:
		StringCopy(&Var2, "G_FMF_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 110;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 302:
		StringCopy(&Var2, "G_FMF_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 115;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 303:
		StringCopy(&Var2, "G_FMF_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 120;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 304:
		StringCopy(&Var2, "G_FMF_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 135;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 305:
		StringCopy(&Var2, "G_FMF_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 110;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 306:
		StringCopy(&Var2, "G_FMF_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 115;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 307:
		StringCopy(&Var2, "G_FMF_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 120;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 308:
		StringCopy(&Var2, "CLO_EXF_G_14_8", 16);
		iVar6 = 14;
		iVar7 = 8;
		iVar1 = 1490;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 309:
		StringCopy(&Var2, "CLO_EXF_G_14_9", 16);
		iVar6 = 14;
		iVar7 = 9;
		iVar1 = 1105;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 310:
		StringCopy(&Var2, "CLO_EXF_G_14_10", 16);
		iVar6 = 14;
		iVar7 = 10;
		iVar1 = 1170;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 311:
		StringCopy(&Var2, "G_FMF_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 312:
		StringCopy(&Var2, "G_FMF_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 313:
		StringCopy(&Var2, "G_FMF_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 314:
		StringCopy(&Var2, "G_FMF_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 315:
		StringCopy(&Var2, "G_FMF_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 316:
		StringCopy(&Var2, "G_FMF_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 317:
		StringCopy(&Var2, "G_FMF_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 318:
		StringCopy(&Var2, "G_FMF_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 319:
		StringCopy(&Var2, "W_FMF_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 320:
		StringCopy(&Var2, "W_FMF_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 321:
		StringCopy(&Var2, "W_FMF_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 322:
		StringCopy(&Var2, "W_FMF_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 323:
		StringCopy(&Var2, "W_FMF_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 825;
		iVar8 = 6;
		iVar11 = 4;
		break;

	case 324:
		StringCopy(&Var2, "W_FMF_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 325:
		StringCopy(&Var2, "W_FMF_1_1", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 326:
		StringCopy(&Var2, "W_FMF_1_2", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;
	}
	if (iVar11 == 1) {
		iVar12 = iParam0 - 10;
		if (iVar12 >= 0 && iVar12 < 121) {
			if (iVar12 > 8) {
				iVar12--;
			}
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2043[iVar12] * Global_279980.f_26);
		}
	}
	else if (iVar11 == 2) {
		iVar13 = iParam0 - 131;
		if (iVar13 >= 0 && iVar13 < 24) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2164[iVar13] * Global_279980.f_27);
		}
	}
	else if (iVar11 == 3) {
		iVar14 = iParam0 - 155;
		if (iVar14 >= 0 && iVar14 < 128) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2189[iVar14] * Global_279980.f_56);
		}
	}
	else if (iVar11 == 4) {
		iVar15 = iParam0 - 319;
		if (iVar15 >= 0 && iVar15 < 10) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2318[iVar15] * Global_279980.f_28);
		}
	}
	if (iParam0 >= 327) {
		Global_69523[0 /*14*/].f_5 = 4;
		func_164(iVar10, iParam0, 327);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, -1757550583, 1)) {
				Global_69523[0 /*14*/].f_7 =
					system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_26);
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, 97230661, 1)) {
				Global_69523[0 /*14*/].f_7 =
					system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_56);
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, 1147826474, 1)) {
				Global_69523[0 /*14*/].f_7 =
					system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_28);
			}
		}
	}
	else {
		func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

// Position - 0x2D5D8
void func_168(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "D_FMM_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 0;
		break;

	case 1:
		StringCopy(&Var2, "D_FMM_2_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 2:
		StringCopy(&Var2, "D_FMM_1_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 5000;
		break;

	case 3:
		StringCopy(&Var2, "D_FMM_2_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 4:
		StringCopy(&Var2, "D_FMM_1_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 5000;
		break;

	case 5:
		StringCopy(&Var2, "D_FMM_2_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 4;
		func_164(iVar10, iParam0, 6);
		return;
	}
	func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x2D6DB
void func_169(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 0;
		break;

	case 1:
		iVar6 = 1;
		iVar7 = 0;
		if (Global_262145.f_4140 != -1) {
			iVar1 = Global_262145.f_4140;
		}
		else {
			iVar1 = 310;
		}
		break;

	case 2:
		iVar6 = 1;
		iVar7 = 1;
		if (Global_262145.f_4141 != -1) {
			iVar1 = Global_262145.f_4141;
		}
		else {
			iVar1 = 125;
		}
		break;

	case 3:
		iVar6 = 1;
		iVar7 = 2;
		if (Global_262145.f_4142 != -1) {
			iVar1 = Global_262145.f_4142;
		}
		else {
			iVar1 = 145;
		}
		break;

	case 4:
		iVar6 = 1;
		iVar7 = 3;
		if (Global_262145.f_4143 != -1) {
			iVar1 = Global_262145.f_4143;
		}
		else {
			iVar1 = 130;
		}
		break;

	case 5:
		iVar6 = 1;
		iVar7 = 4;
		if (Global_262145.f_4144 != -1) {
			iVar1 = Global_262145.f_4144;
		}
		else {
			iVar1 = 265;
		}
		break;

	case 6:
		iVar6 = 1;
		iVar7 = 5;
		if (Global_262145.f_4145 != -1) {
			iVar1 = Global_262145.f_4145;
		}
		else {
			iVar1 = 280;
		}
		break;

	case 7:
		iVar6 = 2;
		iVar7 = 0;
		if (Global_262145.f_4146 != -1) {
			iVar1 = Global_262145.f_4146;
		}
		else {
			iVar1 = 295;
		}
		break;

	case 8:
		iVar6 = 2;
		iVar7 = 1;
		if (Global_262145.f_4147 != -1) {
			iVar1 = Global_262145.f_4147;
		}
		else {
			iVar1 = 95;
		}
		break;

	case 9:
		iVar6 = 2;
		iVar7 = 2;
		if (Global_262145.f_4148 != -1) {
			iVar1 = Global_262145.f_4148;
		}
		else {
			iVar1 = 85;
		}
		break;

	case 10:
		iVar6 = 2;
		iVar7 = 3;
		if (Global_262145.f_4149 != -1) {
			iVar1 = Global_262145.f_4149;
		}
		else {
			iVar1 = 95;
		}
		break;

	case 11:
		iVar6 = 2;
		iVar7 = 4;
		if (Global_262145.f_4150 != -1) {
			iVar1 = Global_262145.f_4150;
		}
		else {
			iVar1 = 105;
		}
		break;

	case 12:
		iVar6 = 2;
		iVar7 = 5;
		if (Global_262145.f_4151 != -1) {
			iVar1 = Global_262145.f_4151;
		}
		else {
			iVar1 = 95;
		}
		break;

	case 13:
		iVar6 = 3;
		iVar7 = 0;
		if (Global_262145.f_4152 != -1) {
			iVar1 = Global_262145.f_4152;
		}
		else {
			iVar1 = 35;
		}
		break;

	case 14:
		iVar6 = 3;
		iVar7 = 1;
		if (Global_262145.f_4153 != -1) {
			iVar1 = Global_262145.f_4153;
		}
		else {
			iVar1 = 35;
		}
		break;

	case 15:
		iVar6 = 3;
		iVar7 = 2;
		if (Global_262145.f_4154 != -1) {
			iVar1 = Global_262145.f_4154;
		}
		else {
			iVar1 = 30;
		}
		break;

	case 16:
		iVar6 = 3;
		iVar7 = 3;
		if (Global_262145.f_4155 != -1) {
			iVar1 = Global_262145.f_4155;
		}
		else {
			iVar1 = 40;
		}
		break;

	case 17:
		iVar6 = 3;
		iVar7 = 4;
		if (Global_262145.f_4156 != -1) {
			iVar1 = Global_262145.f_4156;
		}
		else {
			iVar1 = 35;
		}
		break;

	case 18:
		iVar6 = 3;
		iVar7 = 5;
		if (Global_262145.f_4157 != -1) {
			iVar1 = Global_262145.f_4157;
		}
		else {
			iVar1 = 35;
		}
		break;

	case 19:
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 20:
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 21:
		iVar6 = 4;
		iVar7 = 2;
		if (Global_262145.f_4158 != -1) {
			iVar1 = Global_262145.f_4158;
		}
		else {
			iVar1 = 355;
		}
		break;

	case 22:
		iVar6 = 4;
		iVar7 = 3;
		if (Global_262145.f_4159 != -1) {
			iVar1 = Global_262145.f_4159;
		}
		else {
			iVar1 = 370;
		}
		break;

	case 23:
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 24:
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 25:
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 26:
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 27:
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 28:
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 29:
		iVar6 = 5;
		iVar7 = 4;
		if (Global_262145.f_4160 != -1) {
			iVar1 = Global_262145.f_4160;
		}
		else {
			iVar1 = 110;
		}
		break;

	case 30:
		iVar6 = 5;
		iVar7 = 5;
		if (Global_262145.f_4161 != -1) {
			iVar1 = Global_262145.f_4161;
		}
		else {
			iVar1 = 160;
		}
		break;

	case 31:
		iVar6 = 6;
		iVar7 = 0;
		if (Global_262145.f_4162 != -1) {
			iVar1 = Global_262145.f_4162;
		}
		else {
			iVar1 = 385;
		}
		break;

	case 32:
		iVar6 = 6;
		iVar7 = 1;
		if (Global_262145.f_4163 != -1) {
			iVar1 = Global_262145.f_4163;
		}
		else {
			iVar1 = 190;
		}
		break;

	case 33:
		iVar6 = 6;
		iVar7 = 2;
		if (Global_262145.f_4164 != -1) {
			iVar1 = Global_262145.f_4164;
		}
		else {
			iVar1 = 235;
		}
		break;

	case 34:
		iVar6 = 6;
		iVar7 = 3;
		if (Global_262145.f_4165 != -1) {
			iVar1 = Global_262145.f_4165;
		}
		else {
			iVar1 = 220;
		}
		break;

	case 35:
		iVar6 = 6;
		iVar7 = 4;
		if (Global_262145.f_4166 != -1) {
			iVar1 = Global_262145.f_4166;
		}
		else {
			iVar1 = 250;
		}
		break;

	case 36:
		iVar6 = 6;
		iVar7 = 5;
		if (Global_262145.f_4167 != -1) {
			iVar1 = Global_262145.f_4167;
		}
		else {
			iVar1 = 205;
		}
		break;

	case 37:
		iVar6 = 7;
		iVar7 = 0;
		if (Global_262145.f_4168 != -1) {
			iVar1 = Global_262145.f_4168;
		}
		else {
			iVar1 = 445;
		}
		break;

	case 38:
		iVar6 = 7;
		iVar7 = 1;
		if (Global_262145.f_4169 != -1) {
			iVar1 = Global_262145.f_4169;
		}
		else {
			iVar1 = 175;
		}
		break;

	case 39:
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 40:
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 41:
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 42:
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 43:
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 44:
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 45:
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 46:
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 47:
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 48:
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 49:
		iVar6 = 9;
		iVar7 = 0;
		if (Global_262145.f_4170 != -1) {
			iVar1 = Global_262145.f_4170;
		}
		else {
			iVar1 = 340;
		}
		break;

	case 50:
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 51:
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 52:
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 53:
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 54:
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 4;
		func_164(iVar10, iParam0, 55);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			Global_69523[0 /*14*/].f_7 =
				system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_58);
		}
		return;
	}
	iVar1 = system::round(system::to_float(iVar1) * Global_279980.f_58);
	StringCopy(&Var2, "T_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x2DEB5
void func_170(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 0;
		break;

	case 1:
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 965;
		break;

	case 2:
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 960;
		break;

	case 3:
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 9500;
		break;

	case 4:
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 975;
		break;

	case 5:
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 1185;
		break;

	case 6:
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 15000;
		break;

	case 7:
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 1115;
		break;

	case 8:
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 1105;
		break;

	case 9:
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 25000;
		break;

	case 10:
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 510;
		break;

	case 11:
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 530;
		break;

	case 12:
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 5500;
		break;

	case 13:
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 535;
		break;

	case 14:
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 1510;
		break;

	case 15:
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 1530;
		break;

	case 16:
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 14500;
		break;

	case 17:
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 13000;
		break;

	case 18:
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 8000;
		break;

	case 19:
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 1265;
		break;

	case 20:
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 8500;
		break;

	case 21:
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 1210;
		break;

	case 22:
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 2360;
		break;

	case 23:
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 22500;
		break;

	case 24:
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 2375;
		break;

	case 25:
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 2485;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 4;
		func_164(iVar10, iParam0, 26);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			Global_69523[0 /*14*/].f_7 =
				system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_29);
		}
		return;
	}
	StringCopy(&Var2, "M_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0 - 1;
	if (iVar11 >= 0 && iVar11 < 26) {
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2016[iVar11] * Global_279980.f_29);
	}
	func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x2E198
void func_171(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 1765;
		break;

	case 1:
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 760;
		break;

	case 2:
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 760;
		break;

	case 3:
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 765;
		break;

	case 4:
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 5:
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 6:
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 7:
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 8:
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 9:
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 10:
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 11:
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 12:
		iVar6 = 0;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 13:
		iVar6 = 0;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 14:
		iVar6 = 0;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 15:
		iVar6 = 0;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 16:
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 85;
		break;

	case 17:
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 80;
		break;

	case 18:
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 90;
		break;

	case 19:
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 90;
		break;

	case 20:
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 95;
		break;

	case 21:
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 100;
		break;

	case 22:
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 60;
		break;

	case 23:
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 55;
		break;

	case 24:
		iVar6 = 1;
		iVar7 = 8;
		iVar1 = 100;
		break;

	case 25:
		iVar6 = 1;
		iVar7 = 9;
		iVar1 = 1255;
		break;

	case 26:
		iVar6 = 1;
		iVar7 = 10;
		iVar1 = 65;
		break;

	case 27:
		iVar6 = 1;
		iVar7 = 11;
		iVar1 = 1050;
		break;

	case 28:
		iVar6 = 1;
		iVar7 = 12;
		iVar1 = 1895;
		break;

	case 29:
		iVar6 = 1;
		iVar7 = 13;
		iVar1 = 185;
		break;

	case 30:
		iVar6 = 1;
		iVar7 = 14;
		iVar1 = 190;
		break;

	case 31:
		iVar6 = 1;
		iVar7 = 15;
		iVar1 = 115;
		break;
	}
	switch (iParam0) {
	case 32:
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 415;
		break;

	case 33:
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 34:
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 135;
		break;

	case 35:
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 125;
		break;

	case 36:
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 105;
		break;

	case 37:
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 130;
		break;

	case 38:
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 3530;
		break;

	case 39:
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 2610;
		break;

	case 40:
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 1295;
		break;

	case 41:
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 120;
		break;

	case 42:
		iVar6 = 2;
		iVar7 = 10;
		iVar1 = 160;
		break;

	case 43:
		iVar6 = 2;
		iVar7 = 11;
		iVar1 = 160;
		break;

	case 44:
		iVar6 = 2;
		iVar7 = 12;
		iVar1 = 145;
		break;

	case 45:
		iVar6 = 2;
		iVar7 = 13;
		iVar1 = 105;
		break;

	case 46:
		iVar6 = 2;
		iVar7 = 14;
		iVar1 = 115;
		break;

	case 47:
		iVar6 = 2;
		iVar7 = 15;
		iVar1 = 150;
		break;

	case 48:
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 540;
		break;

	case 49:
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 50:
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 110;
		break;

	case 51:
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 120;
		break;

	case 52:
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 460;
		break;

	case 53:
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 120;
		break;

	case 54:
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 120;
		break;

	case 55:
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 415;
		break;

	case 56:
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 135;
		break;

	case 57:
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 140;
		break;

	case 58:
		iVar6 = 3;
		iVar7 = 10;
		iVar1 = 160;
		break;

	case 59:
		iVar6 = 3;
		iVar7 = 11;
		iVar1 = 120;
		break;

	case 60:
		iVar6 = 3;
		iVar7 = 12;
		iVar1 = 1025;
		break;

	case 61:
		iVar6 = 3;
		iVar7 = 13;
		iVar1 = 1560;
		break;

	case 62:
		iVar6 = 3;
		iVar7 = 14;
		iVar1 = 145;
		break;

	case 63:
		iVar6 = 3;
		iVar7 = 15;
		iVar1 = 120;
		break;
	}
	switch (iParam0) {
	case 64:
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 365;
		break;

	case 65:
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 100;
		break;

	case 66:
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 65;
		break;

	case 67:
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 85;
		break;

	case 68:
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 69:
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 70:
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 71:
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 72:
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 73:
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 74:
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 75:
		iVar6 = 4;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 76:
		iVar6 = 4;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 77:
		iVar6 = 4;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 78:
		iVar6 = 4;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 79:
		iVar6 = 4;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 80:
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 50;
		break;

	case 81:
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 35;
		break;

	case 82:
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 83:
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 84:
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 85:
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 86:
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 87:
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 88:
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 89:
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 90:
		iVar6 = 5;
		iVar7 = 10;
		iVar1 = 50;
		break;

	case 91:
		iVar6 = 5;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 92:
		iVar6 = 5;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 93:
		iVar6 = 5;
		iVar7 = 13;
		iVar1 = 50;
		break;

	case 94:
		iVar6 = 5;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 95:
		iVar6 = 5;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 96:
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 2395;
		break;

	case 97:
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 3675;
		break;

	case 98:
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 320;
		break;

	case 99:
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 3875;
		break;

	case 100:
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 101:
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 102:
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 103:
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 104:
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 105:
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 106:
		iVar6 = 6;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 107:
		iVar6 = 6;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 108:
		iVar6 = 6;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 109:
		iVar6 = 6;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 110:
		iVar6 = 6;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 111:
		iVar6 = 6;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 112:
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 2050;
		break;

	case 113:
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 375;
		break;

	case 114:
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 2105;
		break;

	case 115:
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 345;
		break;

	case 116:
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 380;
		break;

	case 117:
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 340;
		break;

	case 118:
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 385;
		break;

	case 119:
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 4135;
		break;

	case 120:
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 370;
		break;

	case 121:
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 375;
		break;

	case 122:
		iVar6 = 7;
		iVar7 = 10;
		iVar1 = 385;
		break;

	case 123:
		iVar6 = 7;
		iVar7 = 11;
		iVar1 = 365;
		break;

	case 124:
		iVar6 = 7;
		iVar7 = 12;
		iVar1 = 325;
		break;

	case 125:
		iVar6 = 7;
		iVar7 = 13;
		iVar1 = 325;
		break;

	case 126:
		iVar6 = 7;
		iVar7 = 14;
		iVar1 = 370;
		break;

	case 127:
		iVar6 = 7;
		iVar7 = 15;
		iVar1 = 330;
		break;
	}
	switch (iParam0) {
	case 128:
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 1025;
		break;

	case 129:
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 390;
		break;

	case 130:
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 400;
		break;

	case 131:
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 390;
		break;

	case 132:
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 365;
		break;

	case 133:
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 410;
		break;

	case 134:
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 4125;
		break;

	case 135:
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 4365;
		break;

	case 136:
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 5365;
		break;

	case 137:
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 6225;
		break;

	case 138:
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 3755;
		break;

	case 139:
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 405;
		break;

	case 140:
		iVar6 = 8;
		iVar7 = 12;
		iVar1 = 4115;
		break;

	case 141:
		iVar6 = 8;
		iVar7 = 13;
		iVar1 = 2240;
		break;

	case 142:
		iVar6 = 8;
		iVar7 = 14;
		iVar1 = 3850;
		break;

	case 143:
		iVar6 = 8;
		iVar7 = 15;
		iVar1 = 3110;
		break;

	case 144:
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 1950;
		break;

	case 145:
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 455;
		break;

	case 146:
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 405;
		break;

	case 147:
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 410;
		break;

	case 148:
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 149:
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 150:
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 151:
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 152:
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 153:
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 154:
		iVar6 = 9;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 155:
		iVar6 = 9;
		iVar7 = 11;
		iVar1 = 415;
		break;

	case 156:
		iVar6 = 9;
		iVar7 = 12;
		iVar1 = 4425;
		break;

	case 157:
		iVar6 = 9;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 158:
		iVar6 = 9;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 159:
		iVar6 = 9;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 160:
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 115;
		break;

	case 161:
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 65;
		break;

	case 162:
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 85;
		break;

	case 163:
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 75;
		break;

	case 164:
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 165:
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 166:
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 167:
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 168:
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 169:
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 170:
		iVar6 = 10;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 171:
		iVar6 = 10;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 172:
		iVar6 = 10;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 173:
		iVar6 = 10;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 174:
		iVar6 = 10;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 175:
		iVar6 = 10;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 176:
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 115;
		break;

	case 177:
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 360;
		break;

	case 178:
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 135;
		break;

	case 179:
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 175;
		break;

	case 180:
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 181:
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 182:
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 183:
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 184:
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 185:
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 186:
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 187:
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 188:
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 189:
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 190:
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 191:
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 192:
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 193:
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 194:
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 195:
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 196:
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 197:
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 198:
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 199:
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 200:
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 201:
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 202:
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 203:
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 204:
		iVar6 = 12;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 205:
		iVar6 = 12;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 206:
		iVar6 = 12;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 207:
		iVar6 = 12;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 208:
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 675;
		break;

	case 209:
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 100;
		break;

	case 210:
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 400;
		break;

	case 211:
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 340;
		break;

	case 212:
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 195;
		break;

	case 213:
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 215;
		break;

	case 214:
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 120;
		break;

	case 215:
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 165;
		break;

	case 216:
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 100;
		break;

	case 217:
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 1040;
		break;

	case 218:
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 100;
		break;

	case 219:
		iVar6 = 13;
		iVar7 = 11;
		iVar1 = 120;
		break;

	case 220:
		iVar6 = 13;
		iVar7 = 12;
		iVar1 = 210;
		break;

	case 221:
		iVar6 = 13;
		iVar7 = 13;
		iVar1 = 205;
		break;

	case 222:
		iVar6 = 13;
		iVar7 = 14;
		iVar1 = 200;
		break;

	case 223:
		iVar6 = 13;
		iVar7 = 15;
		iVar1 = 100;
		break;

	case 224:
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 1420;
		break;

	case 225:
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 445;
		break;

	case 226:
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 435;
		break;

	case 227:
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 420;
		break;

	case 228:
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 425;
		break;

	case 229:
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 435;
		break;

	case 230:
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 425;
		break;

	case 231:
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 430;
		break;

	case 232:
		iVar6 = 14;
		iVar7 = 8;
		iVar1 = 3215;
		break;

	case 233:
		iVar6 = 14;
		iVar7 = 9;
		iVar1 = 3320;
		break;

	case 234:
		iVar6 = 14;
		iVar7 = 10;
		iVar1 = 440;
		break;

	case 235:
		iVar6 = 14;
		iVar7 = 11;
		iVar1 = 440;
		break;

	case 236:
		iVar6 = 14;
		iVar7 = 12;
		iVar1 = 445;
		break;

	case 237:
		iVar6 = 14;
		iVar7 = 13;
		iVar1 = 450;
		break;

	case 238:
		iVar6 = 14;
		iVar7 = 14;
		iVar1 = 450;
		break;

	case 239:
		iVar6 = 14;
		iVar7 = 15;
		iVar1 = 1255;
		break;

	case 240:
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 750;
		break;

	case 241:
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 165;
		break;

	case 242:
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 460;
		break;

	case 243:
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 190;
		break;

	case 244:
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 195;
		break;

	case 245:
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 200;
		break;

	case 246:
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 205;
		break;

	case 247:
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 210;
		break;

	case 248:
		iVar6 = 15;
		iVar7 = 8;
		iVar1 = 215;
		break;

	case 249:
		iVar6 = 15;
		iVar7 = 9;
		iVar1 = 220;
		break;

	case 250:
		iVar6 = 15;
		iVar7 = 10;
		iVar1 = 455;
		break;

	case 251:
		iVar6 = 15;
		iVar7 = 11;
		iVar1 = 175;
		break;

	case 252:
		iVar6 = 15;
		iVar7 = 12;
		iVar1 = 800;
		break;

	case 253:
		iVar6 = 15;
		iVar7 = 13;
		iVar1 = 790;
		break;

	case 254:
		iVar6 = 15;
		iVar7 = 14;
		iVar1 = 175;
		break;

	case 255:
		iVar6 = 15;
		iVar7 = 15;
		iVar1 = 190;
		break;
	}
	StringCopy(&Var2, "F_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256) {
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1759[iVar11] * Global_279980.f_25);
	}
	if (iParam0 >= 256) {
		Global_69523[0 /*14*/].f_5 = 4;
		func_164(iVar10, iParam0, 256);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			Global_69523[0 /*14*/].f_7 =
				system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_25);
		}
	}
	else {
		func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

// Position - 0x2F7BD
void func_172(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 270;
		break;

	case 1:
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 750;
		break;

	case 2:
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 450;
		break;

	case 3:
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 4875;
		break;

	case 4:
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 1760;
		break;

	case 5:
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 1090;
		break;

	case 6:
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 2465;
		break;

	case 7:
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 305;
		break;

	case 8:
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 290;
		break;

	case 9:
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 410;
		break;

	case 10:
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 255;
		break;

	case 11:
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 255;
		break;

	case 12:
		iVar6 = 0;
		iVar7 = 12;
		iVar1 = 405;
		break;

	case 13:
		iVar6 = 0;
		iVar7 = 13;
		iVar1 = 5000;
		break;

	case 14:
		iVar6 = 0;
		iVar7 = 14;
		iVar1 = 4480;
		break;

	case 15:
		iVar6 = 0;
		iVar7 = 15;
		iVar1 = 4335;
		break;
	}
	switch (iParam0) {
	case 16:
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 375;
		break;

	case 17:
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 265;
		break;

	case 18:
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 275;
		break;

	case 19:
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 280;
		break;

	case 20:
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 300;
		break;

	case 21:
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 265;
		break;

	case 22:
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 255;
		break;

	case 23:
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 250;
		break;

	case 24:
		iVar6 = 1;
		iVar7 = 8;
		iVar1 = 260;
		break;

	case 25:
		iVar6 = 1;
		iVar7 = 9;
		iVar1 = 250;
		break;

	case 26:
		iVar6 = 1;
		iVar7 = 10;
		iVar1 = 225;
		break;

	case 27:
		iVar6 = 1;
		iVar7 = 11;
		iVar1 = 230;
		break;

	case 28:
		iVar6 = 1;
		iVar7 = 12;
		iVar1 = 215;
		break;

	case 29:
		iVar6 = 1;
		iVar7 = 13;
		iVar1 = 650;
		break;

	case 30:
		iVar6 = 1;
		iVar7 = 14;
		iVar1 = 425;
		break;

	case 31:
		iVar6 = 1;
		iVar7 = 15;
		iVar1 = 345;
		break;
	}
	switch (iParam0) {
	case 32:
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 115;
		break;

	case 33:
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 110;
		break;

	case 34:
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 250;
		break;

	case 35:
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 36:
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 37:
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 38:
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 39:
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 40:
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 41:
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 42:
		iVar6 = 2;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 43:
		iVar6 = 2;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 44:
		iVar6 = 2;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 45:
		iVar6 = 2;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 46:
		iVar6 = 2;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 47:
		iVar6 = 2;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 48:
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 290;
		break;

	case 49:
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 50:
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 135;
		break;

	case 51:
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 125;
		break;

	case 52:
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 120;
		break;

	case 53:
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 130;
		break;

	case 54:
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 110;
		break;

	case 55:
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 525;
		break;

	case 56:
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 115;
		break;

	case 57:
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 535;
		break;

	case 58:
		iVar6 = 3;
		iVar7 = 10;
		iVar1 = 135;
		break;

	case 59:
		iVar6 = 3;
		iVar7 = 11;
		iVar1 = 120;
		break;

	case 60:
		iVar6 = 3;
		iVar7 = 12;
		iVar1 = 130;
		break;

	case 61:
		iVar6 = 3;
		iVar7 = 13;
		iVar1 = 140;
		break;

	case 62:
		iVar6 = 3;
		iVar7 = 14;
		iVar1 = 130;
		break;

	case 63:
		iVar6 = 3;
		iVar7 = 15;
		iVar1 = 520;
		break;
	}
	switch (iParam0) {
	case 64:
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 215;
		break;

	case 65:
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 220;
		break;

	case 66:
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 225;
		break;

	case 67:
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 245;
		break;

	case 68:
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 215;
		break;

	case 69:
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 630;
		break;

	case 70:
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 250;
		break;

	case 71:
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 260;
		break;

	case 72:
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 200;
		break;

	case 73:
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 225;
		break;

	case 74:
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 230;
		break;

	case 75:
		iVar6 = 4;
		iVar7 = 11;
		iVar1 = 725;
		break;

	case 76:
		iVar6 = 4;
		iVar7 = 12;
		iVar1 = 650;
		break;

	case 77:
		iVar6 = 4;
		iVar7 = 13;
		iVar1 = 230;
		break;

	case 78:
		iVar6 = 4;
		iVar7 = 14;
		iVar1 = 230;
		break;

	case 79:
		iVar6 = 4;
		iVar7 = 15;
		iVar1 = 280;
		break;
	}
	switch (iParam0) {
	case 80:
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 81:
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 82:
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 83:
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 84:
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 85:
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 86:
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 87:
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 88:
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 330;
		break;

	case 89:
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 90:
		iVar6 = 5;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 91:
		iVar6 = 5;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 92:
		iVar6 = 5;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 93:
		iVar6 = 5;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 94:
		iVar6 = 5;
		iVar7 = 14;
		iVar1 = 320;
		break;

	case 95:
		iVar6 = 5;
		iVar7 = 15;
		iVar1 = 315;
		break;
	}
	switch (iParam0) {
	case 96:
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 850;
		break;

	case 97:
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 535;
		break;

	case 98:
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 530;
		break;

	case 99:
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 100:
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 101:
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 102:
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 103:
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 104:
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 105:
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 106:
		iVar6 = 6;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 107:
		iVar6 = 6;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 108:
		iVar6 = 6;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 109:
		iVar6 = 6;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 110:
		iVar6 = 6;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 111:
		iVar6 = 6;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 112:
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 890;
		break;

	case 113:
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 440;
		break;

	case 114:
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 455;
		break;

	case 115:
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 116:
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 117:
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 118:
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 119:
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 120:
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 121:
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 122:
		iVar6 = 7;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 123:
		iVar6 = 7;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 124:
		iVar6 = 7;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 125:
		iVar6 = 7;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 126:
		iVar6 = 7;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 127:
		iVar6 = 7;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 128:
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 295;
		break;

	case 129:
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 180;
		break;

	case 130:
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 150;
		break;

	case 131:
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 150;
		break;

	case 132:
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 155;
		break;

	case 133:
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 840;
		break;

	case 134:
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 205;
		break;

	case 135:
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 150;
		break;

	case 136:
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 950;
		break;

	case 137:
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 580;
		break;

	case 138:
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 200;
		break;

	case 139:
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 665;
		break;

	case 140:
		iVar6 = 8;
		iVar7 = 12;
		iVar1 = 780;
		break;

	case 141:
		iVar6 = 8;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 142:
		iVar6 = 8;
		iVar7 = 14;
		iVar1 = 615;
		break;

	case 143:
		iVar6 = 8;
		iVar7 = 15;
		iVar1 = 250;
		break;
	}
	switch (iParam0) {
	case 144:
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 495;
		break;

	case 145:
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 435;
		break;

	case 146:
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 420;
		break;

	case 147:
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 390;
		break;

	case 148:
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 485;
		break;

	case 149:
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 380;
		break;

	case 150:
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 1295;
		break;

	case 151:
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 1135;
		break;

	case 152:
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 1425;
		break;

	case 153:
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 1645;
		break;

	case 154:
		iVar6 = 9;
		iVar7 = 10;
		iVar1 = 1925;
		break;

	case 155:
		iVar6 = 9;
		iVar7 = 11;
		iVar1 = 2250;
		break;

	case 156:
		iVar6 = 9;
		iVar7 = 12;
		iVar1 = 365;
		break;

	case 157:
		iVar6 = 9;
		iVar7 = 13;
		iVar1 = 360;
		break;

	case 158:
		iVar6 = 9;
		iVar7 = 14;
		iVar1 = 2245;
		break;

	case 159:
		iVar6 = 9;
		iVar7 = 15;
		iVar1 = 2170;
		break;

	case 160:
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 50;
		break;

	case 161:
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 100;
		break;

	case 162:
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 65;
		break;

	case 163:
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 164:
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 165:
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 166:
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 167:
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 168:
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 169:
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 170:
		iVar6 = 10;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 171:
		iVar6 = 10;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 172:
		iVar6 = 10;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 173:
		iVar6 = 10;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 174:
		iVar6 = 10;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 175:
		iVar6 = 10;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 176:
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 275;
		break;

	case 177:
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 300;
		break;

	case 178:
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 145;
		break;

	case 179:
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 150;
		break;

	case 180:
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 110;
		break;

	case 181:
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 95;
		break;

	case 182:
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 155;
		break;

	case 183:
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 155;
		break;

	case 184:
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 510;
		break;

	case 185:
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 165;
		break;

	case 186:
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 465;
		break;

	case 187:
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 250;
		break;

	case 188:
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 110;
		break;

	case 189:
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 470;
		break;

	case 190:
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 480;
		break;

	case 191:
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 155;
		break;

	case 192:
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 275;
		break;

	case 193:
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 395;
		break;

	case 194:
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 285;
		break;

	case 195:
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 560;
		break;

	case 196:
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 595;
		break;

	case 197:
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 295;
		break;

	case 198:
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 230;
		break;

	case 199:
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 215;
		break;

	case 200:
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 270;
		break;

	case 201:
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 295;
		break;

	case 202:
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 285;
		break;

	case 203:
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 215;
		break;

	case 204:
		iVar6 = 12;
		iVar7 = 12;
		iVar1 = 210;
		break;

	case 205:
		iVar6 = 12;
		iVar7 = 13;
		iVar1 = 290;
		break;

	case 206:
		iVar6 = 12;
		iVar7 = 14;
		iVar1 = 230;
		break;

	case 207:
		iVar6 = 12;
		iVar7 = 15;
		iVar1 = 215;
		break;
	}
	switch (iParam0) {
	case 208:
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 209:
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 210:
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 211:
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 212:
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 213:
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 214:
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 215:
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 216:
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 217:
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 218:
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 219:
		iVar6 = 13;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 220:
		iVar6 = 13;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 221:
		iVar6 = 13;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 222:
		iVar6 = 13;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 223:
		iVar6 = 13;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 224:
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 90;
		break;

	case 225:
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 105;
		break;

	case 226:
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 227:
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 228:
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 229:
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 230:
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 231:
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 232:
		iVar6 = 14;
		iVar7 = 8;
		iVar1 = 100;
		break;

	case 233:
		iVar6 = 14;
		iVar7 = 9;
		iVar1 = 105;
		break;

	case 234:
		iVar6 = 14;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 235:
		iVar6 = 14;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 236:
		iVar6 = 14;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 237:
		iVar6 = 14;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 238:
		iVar6 = 14;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 239:
		iVar6 = 14;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 240:
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 230;
		break;

	case 241:
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 242:
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 243:
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 130;
		break;

	case 244:
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 245:
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 246:
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 247:
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 248:
		iVar6 = 15;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 249:
		iVar6 = 15;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 250:
		iVar6 = 15;
		iVar7 = 10;
		iVar1 = 350;
		break;

	case 251:
		iVar6 = 15;
		iVar7 = 11;
		iVar1 = 335;
		break;

	case 252:
		iVar6 = 15;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 253:
		iVar6 = 15;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 254:
		iVar6 = 15;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 255:
		iVar6 = 15;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	StringCopy(&Var2, "L_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256) {
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1245[iVar11] * Global_279980.f_23);
	}
	if (iParam0 >= 256) {
		Global_69523[0 /*14*/].f_5 = 4;
		func_164(iVar10, iParam0, 256);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			Global_69523[0 /*14*/].f_7 =
				system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_23);
		}
	}
	else {
		func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

// Position - 0x30E6E
void func_173(int iParam0) {
	int iVar0;
	int iVar1;
	char *sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 6:
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 7:
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 8:
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 9:
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 10:
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 11:
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 12:
		iVar6 = 12;
		iVar7 = 0;
		break;

	case 13:
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 14:
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 15:
		iVar6 = 15;
		iVar7 = 0;
		break;
	}
	if (iParam0 >= 16) {
		Global_69523[0 /*14*/].f_5 = 4;
		func_164(iVar10, iParam0, 16);
		return;
	}
	func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x30FC7
void func_174(int iParam0) {
	int iVar0;
	int iVar1;
	char *sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		iVar6 = 1;
		iVar7 = 1;
		break;

	case 3:
		iVar6 = 1;
		iVar7 = 2;
		break;

	case 4:
		iVar6 = 1;
		iVar7 = 3;
		break;

	case 5:
		iVar6 = 1;
		iVar7 = 4;
		break;

	case 6:
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 7:
		iVar6 = 2;
		iVar7 = 1;
		break;

	case 8:
		iVar6 = 2;
		iVar7 = 2;
		break;

	case 9:
		iVar6 = 2;
		iVar7 = 3;
		break;

	case 10:
		iVar6 = 2;
		iVar7 = 4;
		break;

	case 11:
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 12:
		iVar6 = 3;
		iVar7 = 1;
		break;

	case 13:
		iVar6 = 3;
		iVar7 = 2;
		break;

	case 14:
		iVar6 = 3;
		iVar7 = 3;
		break;

	case 15:
		iVar6 = 3;
		iVar7 = 4;
		break;

	case 16:
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 17:
		iVar6 = 4;
		iVar7 = 1;
		break;

	case 18:
		iVar6 = 4;
		iVar7 = 2;
		break;

	case 19:
		iVar6 = 4;
		iVar7 = 3;
		break;

	case 20:
		iVar6 = 4;
		iVar7 = 4;
		break;

	case 21:
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 22:
		iVar6 = 5;
		iVar7 = 1;
		break;

	case 23:
		iVar6 = 5;
		iVar7 = 2;
		break;

	case 24:
		iVar6 = 5;
		iVar7 = 3;
		break;

	case 25:
		iVar6 = 5;
		iVar7 = 4;
		break;

	case 26:
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 27:
		iVar6 = 6;
		iVar7 = 1;
		break;

	case 28:
		iVar6 = 6;
		iVar7 = 2;
		break;

	case 29:
		iVar6 = 6;
		iVar7 = 3;
		break;

	case 30:
		iVar6 = 6;
		iVar7 = 4;
		break;

	case 31:
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 32:
		iVar6 = 7;
		iVar7 = 1;
		break;

	case 33:
		iVar6 = 7;
		iVar7 = 2;
		break;

	case 34:
		iVar6 = 7;
		iVar7 = 3;
		break;

	case 35:
		iVar6 = 7;
		iVar7 = 4;
		break;
	}
	if (iParam0 >= 36) {
		Global_69523[0 /*14*/].f_5 = 4;
		func_164(iVar10, iParam0, 36);
		return;
	}
	func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x31245
void func_175(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "U_FMF_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 250;
		break;

	case 1:
		StringCopy(&Var2, "U_FMF_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 225;
		break;

	case 2:
		StringCopy(&Var2, "U_FMF_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 50;
		break;

	case 3:
		StringCopy(&Var2, "U_FMF_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 40;
		break;

	case 4:
		StringCopy(&Var2, "U_FMF_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 40;
		break;

	case 5:
		StringCopy(&Var2, "U_FMF_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 40;
		break;

	case 6:
		StringCopy(&Var2, "U_FMF_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 40;
		break;

	case 7:
		StringCopy(&Var2, "U_FMF_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 45;
		break;

	case 8:
		StringCopy(&Var2, "U_FMF_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 40;
		break;

	case 9:
		StringCopy(&Var2, "U_FMF_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 40;
		break;

	case 10:
		StringCopy(&Var2, "U_FMF_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 135;
		break;

	case 11:
		StringCopy(&Var2, "U_FMF_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 60;
		break;

	case 12:
		StringCopy(&Var2, "U_FMF_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		iVar1 = 220;
		break;

	case 13:
		StringCopy(&Var2, "U_FMF_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		iVar1 = 45;
		break;

	case 14:
		StringCopy(&Var2, "U_FMF_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		iVar1 = 45;
		break;

	case 15:
		StringCopy(&Var2, "U_FMF_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		iVar1 = 125;
		break;

	case 16:
		StringCopy(&Var2, "U_FMF_0_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 250;
		break;

	case 17:
		StringCopy(&Var2, "U_FMF_0_1", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 60;
		break;

	case 18:
		StringCopy(&Var2, "U_FMF_0_2", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 50;
		break;

	case 19:
		StringCopy(&Var2, "U_FMF_0_3", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 40;
		break;

	case 20:
		StringCopy(&Var2, "U_FMF_0_4", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 40;
		break;

	case 21:
		StringCopy(&Var2, "U_FMF_0_5", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 40;
		break;

	case 22:
		StringCopy(&Var2, "U_FMF_0_6", 16);
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 40;
		break;

	case 23:
		StringCopy(&Var2, "U_FMF_0_7", 16);
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 45;
		break;

	case 24:
		StringCopy(&Var2, "U_FMF_0_8", 16);
		iVar6 = 1;
		iVar7 = 8;
		iVar1 = 40;
		break;

	case 25:
		StringCopy(&Var2, "U_FMF_0_9", 16);
		iVar6 = 1;
		iVar7 = 9;
		iVar1 = 40;
		break;

	case 26:
		StringCopy(&Var2, "U_FMF_0_10", 16);
		iVar6 = 1;
		iVar7 = 10;
		iVar1 = 135;
		break;

	case 27:
		StringCopy(&Var2, "U_FMF_0_11", 16);
		iVar6 = 1;
		iVar7 = 11;
		iVar1 = 60;
		break;

	case 28:
		StringCopy(&Var2, "U_FMF_0_12", 16);
		iVar6 = 1;
		iVar7 = 12;
		iVar1 = 220;
		break;

	case 29:
		StringCopy(&Var2, "U_FMF_0_13", 16);
		iVar6 = 1;
		iVar7 = 13;
		iVar1 = 45;
		break;

	case 30:
		StringCopy(&Var2, "U_FMF_0_14", 16);
		iVar6 = 1;
		iVar7 = 14;
		iVar1 = 45;
		break;

	case 31:
		StringCopy(&Var2, "U_FMF_0_15", 16);
		iVar6 = 1;
		iVar7 = 15;
		iVar1 = 125;
		break;

	case 32:
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 33:
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 34:
		StringCopy(&Var2, "U_FMF_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "U_FMF_4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 36:
		StringCopy(&Var2, "U_FMF_4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 37:
		StringCopy(&Var2, "U_FMF_4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 38:
		StringCopy(&Var2, "U_FMF_4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 39:
		StringCopy(&Var2, "U_FMF_4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 40:
		StringCopy(&Var2, "U_FMF_4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar0 = 1;
		break;

	case 41:
		StringCopy(&Var2, "U_FMF_4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar0 = 1;
		break;

	case 42:
		StringCopy(&Var2, "U_FMF_4_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar0 = 1;
		break;

	case 43:
		StringCopy(&Var2, "U_FMF_4_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar0 = 1;
		break;

	case 44:
		StringCopy(&Var2, "U_FMF_4_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		iVar0 = 1;
		break;

	case 45:
		StringCopy(&Var2, "U_FMF_4_11", 16);
		iVar6 = 4;
		iVar7 = 11;
		iVar0 = 1;
		break;

	case 46:
		StringCopy(&Var2, "U_FMF_4_12", 16);
		iVar6 = 4;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 47:
		StringCopy(&Var2, "U_FMF_4_13", 16);
		iVar6 = 4;
		iVar7 = 13;
		iVar1 = 40;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[77]);
		break;

	case 48:
		StringCopy(&Var2, "U_FMF_4_14", 16);
		iVar6 = 4;
		iVar7 = 14;
		iVar1 = 40;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[78]);
		break;

	case 49:
		StringCopy(&Var2, "U_FMF_4_15", 16);
		iVar6 = 4;
		iVar7 = 15;
		iVar0 = 1;
		break;

	case 50:
		StringCopy(&Var2, "U_FMF_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 45;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[80]);
		break;

	case 51:
		StringCopy(&Var2, "U_FMF_5_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 60;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[81]);
		break;

	case 52:
		StringCopy(&Var2, "U_FMF_5_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 53:
		StringCopy(&Var2, "U_FMF_5_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 54:
		StringCopy(&Var2, "U_FMF_5_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 55:
		StringCopy(&Var2, "U_FMF_5_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 56:
		StringCopy(&Var2, "U_FMF_5_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar0 = 1;
		break;

	case 57:
		StringCopy(&Var2, "U_FMF_5_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 375;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[87]);
		break;

	case 58:
		StringCopy(&Var2, "U_FMF_5_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar0 = 1;
		break;

	case 59:
		StringCopy(&Var2, "U_FMF_5_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 90;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[89]);
		break;

	case 60:
		StringCopy(&Var2, "U_FMF_5_10", 16);
		iVar6 = 5;
		iVar7 = 10;
		iVar0 = 1;
		break;

	case 61:
		StringCopy(&Var2, "U_FMF_5_11", 16);
		iVar6 = 5;
		iVar7 = 11;
		iVar0 = 1;
		break;

	case 62:
		StringCopy(&Var2, "U_FMF_5_12", 16);
		iVar6 = 5;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 63:
		StringCopy(&Var2, "U_FMF_5_13", 16);
		iVar6 = 5;
		iVar7 = 13;
		iVar0 = 1;
		break;

	case 64:
		StringCopy(&Var2, "U_FMF_5_14", 16);
		iVar6 = 5;
		iVar7 = 14;
		iVar0 = 1;
		break;

	case 65:
		StringCopy(&Var2, "U_FMF_5_15", 16);
		iVar6 = 5;
		iVar7 = 15;
		iVar0 = 1;
		break;

	case 66:
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 67:
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 68:
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 69:
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 70:
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 71:
		StringCopy(&Var2, "U_FMF_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 90;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[176]);
		break;

	case 72:
		StringCopy(&Var2, "U_FMF_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 95;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[177]);
		break;

	case 73:
		StringCopy(&Var2, "U_FMF_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 95;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[178]);
		break;

	case 74:
		StringCopy(&Var2, "U_FMF_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 75:
		StringCopy(&Var2, "U_FMF_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 76:
		StringCopy(&Var2, "U_FMF_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 77:
		StringCopy(&Var2, "U_FMF_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar0 = 1;
		break;

	case 78:
		StringCopy(&Var2, "U_FMF_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar0 = 1;
		break;

	case 79:
		StringCopy(&Var2, "U_FMF_11_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		iVar0 = 1;
		break;

	case 80:
		StringCopy(&Var2, "U_FMF_11_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		iVar0 = 1;
		break;

	case 81:
		StringCopy(&Var2, "U_FMF_11_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 150;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[186]);
		break;

	case 82:
		StringCopy(&Var2, "U_FMF_11_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 65;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[187]);
		break;

	case 83:
		StringCopy(&Var2, "U_FMF_11_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 84:
		StringCopy(&Var2, "U_FMF_11_13", 16);
		iVar6 = 11;
		iVar7 = 13;
		iVar0 = 1;
		break;

	case 85:
		StringCopy(&Var2, "U_FMF_11_14", 16);
		iVar6 = 11;
		iVar7 = 14;
		iVar0 = 1;
		break;

	case 86:
		StringCopy(&Var2, "U_FMF_11_15", 16);
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 145;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[191]);
		break;

	case 87:
		StringCopy(&Var2, "U_FMF_12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 88:
		StringCopy(&Var2, "U_FMF_12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 89:
		StringCopy(&Var2, "U_FMF_12_2", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 90:
		StringCopy(&Var2, "U_FMF_12_3", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 91:
		StringCopy(&Var2, "U_FMF_12_4", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 92:
		StringCopy(&Var2, "U_FMF_12_5", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 93:
		StringCopy(&Var2, "U_FMF_12_6", 16);
		iVar6 = 12;
		iVar7 = 6;
		iVar0 = 1;
		break;

	case 94:
		StringCopy(&Var2, "U_FMF_12_7", 16);
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 1560;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[199]);
		break;

	case 95:
		StringCopy(&Var2, "U_FMF_12_8", 16);
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 195;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[200]);
		break;

	case 96:
		StringCopy(&Var2, "U_FMF_12_9", 16);
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 200;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[201]);
		break;

	case 97:
		StringCopy(&Var2, "U_FMF_12_10", 16);
		iVar6 = 12;
		iVar7 = 10;
		iVar0 = 1;
		break;

	case 98:
		StringCopy(&Var2, "U_FMF_12_11", 16);
		iVar6 = 12;
		iVar7 = 11;
		iVar0 = 1;
		break;

	case 99:
		StringCopy(&Var2, "U_FMF_12_12", 16);
		iVar6 = 12;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 100:
		StringCopy(&Var2, "U_FMF_12_13", 16);
		iVar6 = 12;
		iVar7 = 13;
		iVar0 = 1;
		break;

	case 101:
		StringCopy(&Var2, "U_FMF_12_14", 16);
		iVar6 = 12;
		iVar7 = 14;
		iVar0 = 1;
		break;

	case 102:
		StringCopy(&Var2, "U_FMF_12_15", 16);
		iVar6 = 12;
		iVar7 = 15;
		iVar0 = 1;
		break;

	case 103:
		StringCopy(&Var2, "U_FMF_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 975;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[208]);
		break;

	case 104:
		StringCopy(&Var2, "U_FMF_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 2670;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[209]);
		break;

	case 105:
		StringCopy(&Var2, "U_FMF_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 480;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[210]);
		break;

	case 106:
		StringCopy(&Var2, "U_FMF_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 400;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[211]);
		break;

	case 107:
		StringCopy(&Var2, "U_FMF_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 2500;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[212]);
		break;

	case 108:
		StringCopy(&Var2, "U_FMF_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 2060;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[213]);
		break;

	case 109:
		StringCopy(&Var2, "U_FMF_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 2620;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[214]);
		break;

	case 110:
		StringCopy(&Var2, "U_FMF_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 475;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[215]);
		break;

	case 111:
		StringCopy(&Var2, "U_FMF_13_8", 16);
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 490;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[216]);
		break;

	case 112:
		StringCopy(&Var2, "U_FMF_13_9", 16);
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 2280;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[217]);
		break;

	case 113:
		StringCopy(&Var2, "U_FMF_13_10", 16);
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 485;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[218]);
		break;

	case 114:
		StringCopy(&Var2, "U_FMF_13_11", 16);
		iVar6 = 13;
		iVar7 = 11;
		iVar1 = 2390;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[219]);
		break;

	case 115:
		StringCopy(&Var2, "U_FMF_13_12", 16);
		iVar6 = 13;
		iVar7 = 12;
		iVar1 = 2610;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[220]);
		break;

	case 116:
		StringCopy(&Var2, "U_FMF_13_13", 16);
		iVar6 = 13;
		iVar7 = 13;
		iVar1 = 1450;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[221]);
		break;

	case 117:
		StringCopy(&Var2, "U_FMF_13_14", 16);
		iVar6 = 13;
		iVar7 = 14;
		iVar1 = 2720;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[222]);
		break;

	case 118:
		StringCopy(&Var2, "U_FMF_13_15", 16);
		iVar6 = 13;
		iVar7 = 15;
		iVar1 = 4995;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[223]);
		break;

	case 119:
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 120:
		StringCopy(&Var2, "U_FMF_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 325;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[240]);
		break;

	case 121:
		StringCopy(&Var2, "U_FMF_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 122:
		StringCopy(&Var2, "U_FMF_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 123:
		StringCopy(&Var2, "U_FMF_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 130;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[243]);
		break;

	case 124:
		StringCopy(&Var2, "U_FMF_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 125:
		StringCopy(&Var2, "U_FMF_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 126:
		StringCopy(&Var2, "U_FMF_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar0 = 1;
		break;

	case 127:
		StringCopy(&Var2, "U_FMF_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar0 = 1;
		break;

	case 128:
		StringCopy(&Var2, "U_FMF_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		iVar0 = 1;
		break;

	case 129:
		StringCopy(&Var2, "U_FMF_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		iVar0 = 1;
		break;

	case 130:
		StringCopy(&Var2, "U_FMF_15_10", 16);
		iVar6 = 15;
		iVar7 = 10;
		iVar1 = 450;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[250]);
		break;

	case 131:
		StringCopy(&Var2, "U_FMF_15_11", 16);
		iVar6 = 15;
		iVar7 = 11;
		iVar1 = 465;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[251]);
		break;

	case 132:
		StringCopy(&Var2, "U_FMF_15_12", 16);
		iVar6 = 15;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 133:
		StringCopy(&Var2, "U_FMF_15_13", 16);
		iVar6 = 15;
		iVar7 = 13;
		iVar0 = 1;
		break;

	case 134:
		StringCopy(&Var2, "U_FMF_15_14", 16);
		iVar6 = 15;
		iVar7 = 14;
		iVar0 = 1;
		break;

	case 135:
		StringCopy(&Var2, "U_FMF_15_15", 16);
		iVar6 = 15;
		iVar7 = 15;
		iVar0 = 1;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 4;
		func_164(iVar10, iParam0, 136);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			Global_69523[0 /*14*/].f_7 =
				system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_24);
		}
		return;
	}
	if (iParam0 == 4 || iParam0 == 20) {
		if (func_101(89, -1)) {
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = system::round(system::to_float(1250) * Global_262145.f_2979);
		}
		else {
			iVar1 = system::round(system::to_float(40) * Global_262145.f_1502[4]);
		}
	}
	else if (iParam0 == 7 || iParam0 == 23) {
		if (func_101(88, -1)) {
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = system::round(system::to_float(450) * Global_262145.f_2978);
		}
		else {
			iVar1 = system::round(system::to_float(45) * Global_262145.f_1502[7]);
		}
	}
	else if (iParam0 == 9 || iParam0 == 25) {
		if (func_101(87, -1)) {
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = system::round(system::to_float(500) * Global_262145.f_2977);
		}
		else {
			iVar1 = system::round(system::to_float(40) * Global_262145.f_1502[9]);
		}
	}
	else if (iParam0 >= 0 && iParam0 < 16) {
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[iVar11]);
		}
	}
	else if (iParam0 >= 16 && iParam0 < 32) {
		iVar12 = iParam0 - 16;
		if (iVar12 >= 0 && iVar12 < 256) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[iVar12]);
		}
	}
	iVar1 = system::round(system::to_float(iVar1) * Global_279980.f_24);
	func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x32609
void func_176(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 250;
		break;

	case 1:
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 225;
		break;

	case 2:
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 50;
		break;

	case 3:
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 40;
		break;

	case 4:
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 40;
		break;

	case 5:
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 40;
		break;

	case 6:
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 40;
		break;

	case 7:
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 45;
		break;

	case 8:
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 40;
		break;

	case 9:
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 40;
		break;

	case 10:
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 135;
		break;

	case 11:
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 60;
		break;

	case 12:
		iVar6 = 0;
		iVar7 = 12;
		iVar1 = 220;
		break;

	case 13:
		iVar6 = 0;
		iVar7 = 13;
		iVar1 = 45;
		break;

	case 14:
		iVar6 = 0;
		iVar7 = 14;
		iVar1 = 45;
		break;

	case 15:
		iVar6 = 0;
		iVar7 = 15;
		iVar1 = 125;
		break;
	}
	switch (iParam0) {
	case 16:
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 390;
		break;

	case 17:
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 230;
		break;

	case 18:
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 355;
		break;

	case 19:
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 20:
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 5000;
		break;

	case 21:
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 2725;
		break;

	case 22:
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 3265;
		break;

	case 23:
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 24:
		iVar6 = 1;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 25:
		iVar6 = 1;
		iVar7 = 9;
		iVar1 = 3625;
		break;

	case 26:
		iVar6 = 1;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 27:
		iVar6 = 1;
		iVar7 = 11;
		iVar1 = 4220;
		break;

	case 28:
		iVar6 = 1;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 29:
		iVar6 = 1;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 30:
		iVar6 = 1;
		iVar7 = 14;
		iVar1 = 310;
		break;

	case 31:
		iVar6 = 1;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 32:
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 45;
		break;

	case 33:
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 210;
		break;

	case 34:
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 75;
		break;

	case 35:
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 50;
		break;

	case 36:
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 60;
		break;

	case 37:
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 50;
		break;

	case 38:
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 295;
		break;

	case 39:
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 80;
		break;

	case 40:
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 75;
		break;

	case 41:
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 2250;
		break;

	case 42:
		iVar6 = 2;
		iVar7 = 10;
		iVar1 = 275;
		break;

	case 43:
		iVar6 = 2;
		iVar7 = 11;
		iVar1 = 445;
		break;

	case 44:
		iVar6 = 2;
		iVar7 = 12;
		iVar1 = 50;
		break;

	case 45:
		iVar6 = 2;
		iVar7 = 13;
		iVar1 = 40;
		break;

	case 46:
		iVar6 = 2;
		iVar7 = 14;
		iVar1 = 45;
		break;

	case 47:
		iVar6 = 2;
		iVar7 = 15;
		iVar1 = 470;
		break;
	}
	switch (iParam0) {
	case 48:
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 95;
		break;

	case 49:
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 95;
		break;

	case 50:
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 360;
		break;

	case 51:
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 100;
		break;

	case 52:
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 60;
		break;

	case 53:
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 54:
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 55:
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 56:
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 57:
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 58:
		iVar6 = 3;
		iVar7 = 10;
		iVar1 = 295;
		break;

	case 59:
		iVar6 = 3;
		iVar7 = 11;
		iVar1 = 460;
		break;

	case 60:
		iVar6 = 3;
		iVar7 = 12;
		iVar1 = 1980;
		break;

	case 61:
		iVar6 = 3;
		iVar7 = 13;
		iVar1 = 2110;
		break;

	case 62:
		iVar6 = 3;
		iVar7 = 14;
		iVar1 = 95;
		break;

	case 63:
		iVar6 = 3;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 64:
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 65:
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 66:
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 67:
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 68:
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 69:
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 70:
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 71:
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 72:
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 73:
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 74:
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 75:
		iVar6 = 4;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 76:
		iVar6 = 4;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 77:
		iVar6 = 4;
		iVar7 = 13;
		iVar1 = 40;
		break;

	case 78:
		iVar6 = 4;
		iVar7 = 14;
		iVar1 = 40;
		break;

	case 79:
		iVar6 = 4;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 80:
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 45;
		break;

	case 81:
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 60;
		break;

	case 82:
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 83:
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 84:
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 85:
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 86:
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 87:
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 375;
		break;

	case 88:
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 89:
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 90;
		break;

	case 90:
		iVar6 = 5;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 91:
		iVar6 = 5;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 92:
		iVar6 = 5;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 93:
		iVar6 = 5;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 94:
		iVar6 = 5;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 95:
		iVar6 = 5;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 96:
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 900;
		break;

	case 97:
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 1000;
		break;

	case 98:
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 1050;
		break;

	case 99:
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 100:
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 1000;
		break;

	case 101:
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 102:
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 103:
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 104:
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 105:
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 106:
		iVar6 = 6;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 107:
		iVar6 = 6;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 108:
		iVar6 = 6;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 109:
		iVar6 = 6;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 110:
		iVar6 = 6;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 111:
		iVar6 = 6;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 112:
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 2975;
		break;

	case 113:
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 1100;
		break;

	case 114:
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 1825;
		break;

	case 115:
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 116:
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 117:
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 118:
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 119:
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 120:
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 1750;
		break;

	case 121:
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 122:
		iVar6 = 7;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 123:
		iVar6 = 7;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 124:
		iVar6 = 7;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 125:
		iVar6 = 7;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 126:
		iVar6 = 7;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 127:
		iVar6 = 7;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 128:
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 1025;
		break;

	case 129:
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 1075;
		break;

	case 130:
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 2805;
		break;

	case 131:
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 132:
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 133:
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 134:
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 135:
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 136:
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 137:
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 138:
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 139:
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 140:
		iVar6 = 8;
		iVar7 = 12;
		iVar1 = 2250;
		break;

	case 141:
		iVar6 = 8;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 142:
		iVar6 = 8;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 143:
		iVar6 = 8;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 144:
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 495;
		break;

	case 145:
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 95;
		break;

	case 146:
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 95;
		break;

	case 147:
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 525;
		break;

	case 148:
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 100;
		break;

	case 149:
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 110;
		break;

	case 150:
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 100;
		break;

	case 151:
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 110;
		break;

	case 152:
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 130;
		break;

	case 153:
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 560;
		break;

	case 154:
		iVar6 = 9;
		iVar7 = 10;
		iVar1 = 295;
		break;

	case 155:
		iVar6 = 9;
		iVar7 = 11;
		iVar1 = 975;
		break;

	case 156:
		iVar6 = 9;
		iVar7 = 12;
		iVar1 = 160;
		break;

	case 157:
		iVar6 = 9;
		iVar7 = 13;
		iVar1 = 100;
		break;

	case 158:
		iVar6 = 9;
		iVar7 = 14;
		iVar1 = 1700;
		break;

	case 159:
		iVar6 = 9;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 160:
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 380;
		break;

	case 161:
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 95;
		break;

	case 162:
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 95;
		break;

	case 163:
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 164:
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 165:
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 166:
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 167:
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 110;
		break;

	case 168:
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 169:
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 170:
		iVar6 = 10;
		iVar7 = 10;
		iVar1 = 95;
		break;

	case 171:
		iVar6 = 10;
		iVar7 = 11;
		iVar1 = 90;
		break;

	case 172:
		iVar6 = 10;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 173:
		iVar6 = 10;
		iVar7 = 13;
		iVar1 = 85;
		break;

	case 174:
		iVar6 = 10;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 175:
		iVar6 = 10;
		iVar7 = 15;
		iVar1 = 215;
		break;
	}
	switch (iParam0) {
	case 176:
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 90;
		break;

	case 177:
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 95;
		break;

	case 178:
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 95;
		break;

	case 179:
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 180:
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 181:
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 182:
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 183:
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 184:
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 185:
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 186:
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 150;
		break;

	case 187:
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 65;
		break;

	case 188:
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 189:
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 190:
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 191:
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 145;
		break;
	}
	switch (iParam0) {
	case 192:
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 193:
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 194:
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 195:
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 196:
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 197:
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 198:
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 199:
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 1560;
		break;

	case 200:
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 195;
		break;

	case 201:
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 200;
		break;

	case 202:
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 203:
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 204:
		iVar6 = 12;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 205:
		iVar6 = 12;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 206:
		iVar6 = 12;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 207:
		iVar6 = 12;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 208:
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 975;
		break;

	case 209:
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 2670;
		break;

	case 210:
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 480;
		break;

	case 211:
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 400;
		break;

	case 212:
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 2500;
		break;

	case 213:
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 2060;
		break;

	case 214:
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 2620;
		break;

	case 215:
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 475;
		break;

	case 216:
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 490;
		break;

	case 217:
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 2280;
		break;

	case 218:
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 485;
		break;

	case 219:
		iVar6 = 13;
		iVar7 = 11;
		iVar1 = 2390;
		break;

	case 220:
		iVar6 = 13;
		iVar7 = 12;
		iVar1 = 2610;
		break;

	case 221:
		iVar6 = 13;
		iVar7 = 13;
		iVar1 = 1450;
		break;

	case 222:
		iVar6 = 13;
		iVar7 = 14;
		iVar1 = 2720;
		break;

	case 223:
		iVar6 = 13;
		iVar7 = 15;
		iVar1 = 4995;
		break;
	}
	switch (iParam0) {
	case 224:
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 265;
		break;

	case 225:
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 385;
		break;

	case 226:
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 345;
		break;

	case 227:
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 330;
		break;

	case 228:
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 430;
		break;

	case 229:
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 375;
		break;

	case 230:
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 375;
		break;

	case 231:
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 295;
		break;

	case 232:
		iVar6 = 14;
		iVar7 = 8;
		iVar1 = 360;
		break;

	case 233:
		iVar6 = 14;
		iVar7 = 9;
		iVar1 = 325;
		break;

	case 234:
		iVar6 = 14;
		iVar7 = 10;
		iVar1 = 340;
		break;

	case 235:
		iVar6 = 14;
		iVar7 = 11;
		iVar1 = 435;
		break;

	case 236:
		iVar6 = 14;
		iVar7 = 12;
		iVar1 = 300;
		break;

	case 237:
		iVar6 = 14;
		iVar7 = 13;
		iVar1 = 315;
		break;

	case 238:
		iVar6 = 14;
		iVar7 = 14;
		iVar1 = 415;
		break;

	case 239:
		iVar6 = 14;
		iVar7 = 15;
		iVar1 = 420;
		break;
	}
	switch (iParam0) {
	case 240:
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 325;
		break;

	case 241:
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 242:
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 243:
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 130;
		break;

	case 244:
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 245:
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 246:
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 247:
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 248:
		iVar6 = 15;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 249:
		iVar6 = 15;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 250:
		iVar6 = 15;
		iVar7 = 10;
		iVar1 = 450;
		break;

	case 251:
		iVar6 = 15;
		iVar7 = 11;
		iVar1 = 465;
		break;

	case 252:
		iVar6 = 15;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 253:
		iVar6 = 15;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 254:
		iVar6 = 15;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 255:
		iVar6 = 15;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	StringCopy(&Var2, "U_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 4) {
		if (func_101(89, -1)) {
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = system::round(system::to_float(1250) * Global_262145.f_2979 * Global_279980.f_24);
		}
		else {
			iVar1 = system::round(system::to_float(40) * Global_262145.f_1502[4] * Global_279980.f_24);
		}
	}
	else if (iParam0 == 7) {
		if (func_101(88, -1)) {
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = system::round(system::to_float(450) * Global_262145.f_2978 * Global_279980.f_24);
		}
		else {
			iVar1 = system::round(system::to_float(45) * Global_262145.f_1502[7] * Global_279980.f_24);
		}
	}
	else if (iParam0 == 9) {
		if (func_101(87, -1)) {
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = system::round(system::to_float(500) * Global_262145.f_2977 * Global_279980.f_24);
		}
		else {
			iVar1 = system::round(system::to_float(40) * Global_262145.f_1502[9] * Global_279980.f_24);
		}
	}
	else {
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1502[iVar11] * Global_279980.f_24);
		}
	}
	if (iParam0 >= 256) {
		Global_69523[0 /*14*/].f_5 = 4;
		func_164(iVar10, iParam0, 256);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			Global_69523[0 /*14*/].f_7 =
				system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_24);
		}
	}
	else {
		func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

// Position - 0x33D97
void func_177(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 500;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[0]);
		break;

	case 1:
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 500;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[1]);
		break;

	case 2:
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 495;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[2]);
		break;

	case 3:
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 490;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[3]);
		break;

	case 4:
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 485;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[4]);
		break;

	case 5:
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 480;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[5]);
		break;

	case 6:
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 7:
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 440;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[6]);
		break;

	case 8:
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 435;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[7]);
		break;

	case 9:
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 430;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[8]);
		break;

	case 10:
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 425;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[9]);
		break;

	case 11:
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 420;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[10]);
		break;

	case 12:
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 13:
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 190;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[11]);
		break;

	case 14:
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 185;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[12]);
		break;

	case 15:
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 180;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[13]);
		break;

	case 16:
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 175;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[14]);
		break;

	case 17:
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 170;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[15]);
		break;

	case 18:
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 295;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[16]);
		break;

	case 19:
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 290;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[17]);
		break;

	case 20:
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 285;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[18]);
		break;

	case 21:
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 280;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[19]);
		break;

	case 22:
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 275;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[20]);
		break;

	case 23:
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 24:
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 2000;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[21]);
		break;

	case 25:
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 1995;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[22]);
		break;

	case 26:
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 1990;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[23]);
		break;

	case 27:
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 1985;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[24]);
		break;

	case 28:
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 1980;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[25]);
		break;

	case 29:
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 30:
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 1150;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[26]);
		break;

	case 31:
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 1145;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[27]);
		break;

	case 32:
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 1140;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[28]);
		break;

	case 33:
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 1135;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[29]);
		break;

	case 34:
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 1130;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[30]);
		break;

	case 35:
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 550;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[31]);
		break;

	case 36:
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 545;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[32]);
		break;

	case 37:
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 540;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[33]);
		break;

	case 38:
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 535;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[34]);
		break;

	case 39:
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 530;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[35]);
		break;

	case 40:
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 41:
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 580;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[36]);
		break;

	case 42:
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 575;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[37]);
		break;

	case 43:
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 570;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[38]);
		break;

	case 44:
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 565;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[39]);
		break;

	case 45:
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 560;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[40]);
		break;

	case 46:
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 47:
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 1100;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[41]);
		break;

	case 48:
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 1095;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[42]);
		break;

	case 49:
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 1090;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[43]);
		break;

	case 50:
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 1085;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[44]);
		break;

	case 51:
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 1080;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[45]);
		break;

	case 52:
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 53:
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 520;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[46]);
		break;

	case 54:
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 515;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[47]);
		break;

	case 55:
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 510;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[48]);
		break;

	case 56:
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 505;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[49]);
		break;

	case 57:
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 500;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[50]);
		break;

	case 58:
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 59:
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 0;
		break;

	case 60:
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 395;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[51]);
		break;

	case 61:
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 390;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[52]);
		break;

	case 62:
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 385;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[53]);
		break;

	case 63:
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 380;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[54]);
		break;

	case 64:
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 375;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[55]);
		break;

	case 65:
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 66:
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 0;
		break;

	case 67:
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 1050;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[56]);
		break;

	case 68:
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 1045;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[57]);
		break;

	case 69:
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 1040;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[58]);
		break;

	case 70:
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 1035;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[59]);
		break;

	case 71:
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 1030;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[60]);
		break;

	case 72:
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 73:
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 1200;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[61]);
		break;

	case 74:
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 1195;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[62]);
		break;

	case 75:
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 1190;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[63]);
		break;

	case 76:
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 1185;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[64]);
		break;

	case 77:
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 1180;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[65]);
		break;

	case 78:
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 79:
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 475;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[66]);
		break;

	case 80:
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 470;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[67]);
		break;

	case 81:
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 465;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[68]);
		break;

	case 82:
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 460;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[69]);
		break;

	case 83:
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 455;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[70]);
		break;

	case 84:
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 85:
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 950;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[71]);
		break;

	case 86:
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 945;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[72]);
		break;

	case 87:
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 940;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[73]);
		break;

	case 88:
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 935;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[74]);
		break;

	case 89:
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 930;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2455[75]);
		break;

	case 90:
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 91:
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 0;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 4;
		func_164(iVar10, iParam0, 92);
		return;
	}
	StringCopy(&Var2, "H_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x34C69
void func_178(int iParam0, int iParam1) {
	switch (iParam0) {
	case 2: func_193(iParam1); break;

	case 11: func_192(iParam1); break;

	case 8: func_191(iParam1); break;

	case 9: func_190(iParam1); break;

	case 3: func_189(iParam1); break;

	case 4: func_188(iParam1); break;

	case 6: func_187(iParam1); break;

	case 1: func_186(iParam1); break;

	case 7: func_185(iParam1); break;

	case 10: func_184(iParam1); break;

	case 14: func_183(iParam1); break;

	case 12: func_182(iParam1); break;

	case 5: func_181(iParam1); break;

	case 0: func_180(iParam1); break;

	case 13: func_179(iParam1); break;
	}
}

// Position - 0x34D59
void func_179(int iParam0) {
	int iVar0;
	int iVar1;
	char *sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0) {
	case 31:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 0:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 2:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 3:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 4:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 5:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 6:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 7:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 8:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 9:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 10:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 11:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 12:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 13:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 14:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 15:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 16:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 17:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 18:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 19:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 20:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 21:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 22:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 23:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 24:
		iVar6 = 0;
		iVar7 = 0;
		break;
	}
	func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x34F23
void func_180(int iParam0) {
	int iVar0;

	iVar0 = 0;
	Global_69523[0 /*14*/].f_5 = 3;
	func_164(iVar0, iParam0, 0);
}

// Position - 0x34F41
void func_181(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 6:
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 7:
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 8:
		iVar6 = 8;
		iVar7 = 0;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 3;
		func_164(iVar10, iParam0, 9);
		return;
	}
	StringCopy(&Var2, "HA_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x35042
void func_182(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar0 = 1;
		break;

	case 1:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_S1", 16);
		break;

	case 2:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_S2", 16);
		break;

	case 3:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_S3", 16);
		break;

	case 4:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_S4", 16);
		break;

	case 5:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_S5", 16);
		break;

	case 6:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_S6", 16);
		break;

	case 7:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_S7", 16);
		break;

	case 8:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_S8", 16);
		break;

	case 9:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_S9", 16);
		break;

	case 10:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_P1", 16);
		break;

	case 11:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_P2", 16);
		break;

	case 12:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_P3", 16);
		break;

	case 13:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_P4", 16);
		break;

	case 14:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_P5", 16);
		break;

	case 15:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_P6", 16);
		break;

	case 16:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_P7", 16);
		break;

	case 17:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_P8", 16);
		break;

	case 18:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_B1", 16);
		break;

	case 19:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_B2", 16);
		break;

	case 20:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_B3", 16);
		break;

	case 21:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_B4", 16);
		break;

	case 22:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_B5", 16);
		break;

	case 23:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_B6", 16);
		break;

	case 24:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_B7", 16);
		break;

	case 25:
		iVar6 = 0;
		iVar7 = 0;
		StringCopy(&Var2, "O_FMM_B8", 16);
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 3;
		func_164(iVar10, iParam0, 26);
		return;
	}
	func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x352F1
void func_183(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
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

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0) {
	case 0:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		break;

	case 1:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		break;

	case 2:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 2;
		break;

	case 3:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 3;
		break;

	case 4:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 4;
		break;

	case 5:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 5;
		break;

	case 6:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 6;
		break;

	case 7:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 7;
		break;

	case 8:
		iVar6 = -1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 8;
		break;

	case 10:
		StringCopy(&Var2, "HT_FMM_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 11:
		StringCopy(&Var2, "HT_FMM_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 12:
		StringCopy(&Var2, "HT_FMM_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 85;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 13:
		StringCopy(&Var2, "HT_FMM_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 75;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 14:
		StringCopy(&Var2, "HT_FMM_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 235;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 15:
		StringCopy(&Var2, "HT_FMM_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 80;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 16:
		StringCopy(&Var2, "HT_FMM_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 85;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 17:
		StringCopy(&Var2, "HT_FMM_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 90;
		iVar8 = 0;
		iVar11 = 1;
		break;
	}
	switch (iParam0) {
	case 18:
		StringCopy(&Var2, "HT_FMM_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar8 = 0;
		break;

	case 19:
		StringCopy(&Var2, "HT_FMM_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 35;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 20:
		StringCopy(&Var2, "HT_FMM_2_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 30;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 21:
		StringCopy(&Var2, "HT_FMM_2_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 35;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 22:
		StringCopy(&Var2, "HT_FMM_2_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 320;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 23:
		StringCopy(&Var2, "HT_FMM_2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 185;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 24:
		StringCopy(&Var2, "HT_FMM_2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 245;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 25:
		StringCopy(&Var2, "HT_FMM_2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 35;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 26:
		StringCopy(&Var2, "HT_FMM_2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 40;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 27:
		StringCopy(&Var2, "HT_FMM_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 28:
		StringCopy(&Var2, "HT_FMM_3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 60;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 29:
		StringCopy(&Var2, "HT_FMM_3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 30:
		StringCopy(&Var2, "HT_FMM_3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 31:
		StringCopy(&Var2, "HT_FMM_3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 32:
		StringCopy(&Var2, "HT_FMM_3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 33:
		StringCopy(&Var2, "HT_FMM_3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 34:
		StringCopy(&Var2, "HT_FMM_3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 35:
		StringCopy(&Var2, "HT_FMM_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 415;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 36:
		StringCopy(&Var2, "HT_FMM_4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 315;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 37:
		StringCopy(&Var2, "HT_FMM_4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 38:
		StringCopy(&Var2, "HT_FMM_4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 39:
		StringCopy(&Var2, "HT_FMM_4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 40:
		StringCopy(&Var2, "HT_FMM_4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 41:
		StringCopy(&Var2, "HT_FMM_4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 42:
		StringCopy(&Var2, "HT_FMM_4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 43:
		StringCopy(&Var2, "HT_FMM_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 75;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 44:
		StringCopy(&Var2, "HT_FMM_5_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 60;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 45:
		StringCopy(&Var2, "HT_FMM_5_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 46:
		StringCopy(&Var2, "HT_FMM_5_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 47:
		StringCopy(&Var2, "HT_FMM_5_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 48:
		StringCopy(&Var2, "HT_FMM_5_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 49:
		StringCopy(&Var2, "HT_FMM_5_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 50:
		StringCopy(&Var2, "HT_FMM_5_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 51:
		StringCopy(&Var2, "HT_FMM_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 160;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 52:
		StringCopy(&Var2, "HT_FMM_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 265;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 53:
		StringCopy(&Var2, "HT_FMM_6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 170;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 54:
		StringCopy(&Var2, "HT_FMM_6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 135;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 55:
		StringCopy(&Var2, "HT_FMM_6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 570;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 56:
		StringCopy(&Var2, "HT_FMM_6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 560;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 57:
		StringCopy(&Var2, "HT_FMM_6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 140;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 58:
		StringCopy(&Var2, "HT_FMM_6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 130;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 59:
		StringCopy(&Var2, "HT_FMM_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 260;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 60:
		StringCopy(&Var2, "HT_FMM_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 215;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 61:
		StringCopy(&Var2, "HT_FMM_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 430;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 62:
		StringCopy(&Var2, "HT_FMM_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 160;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 63:
		StringCopy(&Var2, "HT_FMM_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 200;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 64:
		StringCopy(&Var2, "HT_FMM_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 155;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 65:
		StringCopy(&Var2, "HT_FMM_7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 155;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 66:
		StringCopy(&Var2, "HT_FMM_7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 165;
		iVar8 = 0;
		iVar11 = 1;
		break;
	}
	switch (iParam0) {
	case 67:
		StringCopy(&Var2, "HT_FMM_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 68:
		StringCopy(&Var2, "HT_FMM_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 69:
		StringCopy(&Var2, "HT_FMM_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 70:
		StringCopy(&Var2, "HT_FMM_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 71:
		StringCopy(&Var2, "HT_FMM_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 72:
		StringCopy(&Var2, "HT_FMM_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 73:
		StringCopy(&Var2, "HT_FMM_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 74:
		StringCopy(&Var2, "HT_FMM_8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 75:
		StringCopy(&Var2, "HT_FMM_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 76:
		StringCopy(&Var2, "HT_FMM_9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 77:
		StringCopy(&Var2, "HT_FMM_9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 78:
		StringCopy(&Var2, "HT_FMM_9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 79:
		StringCopy(&Var2, "HT_FMM_9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 80:
		StringCopy(&Var2, "HT_FMM_9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 100;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 81:
		StringCopy(&Var2, "HT_FMM_9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 82:
		StringCopy(&Var2, "HT_FMM_9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 83:
		StringCopy(&Var2, "HT_FMM_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 84:
		StringCopy(&Var2, "HT_FMM_10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 85:
		StringCopy(&Var2, "HT_FMM_10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 86:
		StringCopy(&Var2, "HT_FMM_10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 87:
		StringCopy(&Var2, "HT_FMM_10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 88:
		StringCopy(&Var2, "HT_FMM_10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 89:
		StringCopy(&Var2, "HT_FMM_10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 90:
		StringCopy(&Var2, "HT_FMM_10_7", 16);
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 65;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 91:
		StringCopy(&Var2, "HT_FMM_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 92:
		StringCopy(&Var2, "HT_FMM_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 93:
		StringCopy(&Var2, "HT_FMM_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 94:
		StringCopy(&Var2, "HT_FMM_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 95:
		StringCopy(&Var2, "HT_FMM_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 96:
		StringCopy(&Var2, "HT_FMM_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 97:
		StringCopy(&Var2, "HT_FMM_11_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 98:
		StringCopy(&Var2, "HT_FMM_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 99:
		StringCopy(&Var2, "HT_FMM_12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 1715;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 100:
		StringCopy(&Var2, "HT_FMM_12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 3900;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 101:
		StringCopy(&Var2, "HT_FMM_12_2", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 1550;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 102:
		StringCopy(&Var2, "HT_FMM_12_3", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 103:
		StringCopy(&Var2, "HT_FMM_12_4", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 4250;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 104:
		StringCopy(&Var2, "HT_FMM_12_5", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 0;
		iVar11 = 1;
		iVar0 = 1;
		break;

	case 105:
		StringCopy(&Var2, "HT_FMM_12_6", 16);
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 4460;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 106:
		StringCopy(&Var2, "HT_FMM_12_7", 16);
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 4970;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 107:
		StringCopy(&Var2, "HT_FMM_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 290;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 108:
		StringCopy(&Var2, "HT_FMM_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 305;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 109:
		StringCopy(&Var2, "HT_FMM_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 4170;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 110:
		StringCopy(&Var2, "HT_FMM_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 335;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 111:
		StringCopy(&Var2, "HT_FMM_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 4940;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 112:
		StringCopy(&Var2, "HT_FMM_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 275;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 113:
		StringCopy(&Var2, "HT_FMM_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 5000;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 114:
		StringCopy(&Var2, "HT_FMM_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 3620;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 115:
		StringCopy(&Var2, "HT_FMM_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 30;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 116:
		StringCopy(&Var2, "HT_FMM_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 25;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 117:
		StringCopy(&Var2, "HT_FMM_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 30;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 118:
		StringCopy(&Var2, "HT_FMM_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 30;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 119:
		StringCopy(&Var2, "HT_FMM_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 35;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 120:
		StringCopy(&Var2, "HT_FMM_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 30;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 121:
		StringCopy(&Var2, "HT_FMM_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 350;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 122:
		StringCopy(&Var2, "HT_FMM_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 35;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 123:
		StringCopy(&Var2, "HT_FMM_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 365;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 124:
		StringCopy(&Var2, "HT_FMM_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 380;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 125:
		StringCopy(&Var2, "HT_FMM_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 595;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 126:
		StringCopy(&Var2, "HT_FMM_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 595;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 127:
		StringCopy(&Var2, "HT_FMM_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 600;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 128:
		StringCopy(&Var2, "HT_FMM_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 590;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 129:
		StringCopy(&Var2, "HT_FMM_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 395;
		iVar8 = 0;
		iVar11 = 1;
		break;

	case 130:
		StringCopy(&Var2, "HT_FMM_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 555;
		iVar8 = 0;
		iVar11 = 1;
		break;
	}
	switch (iParam0) {
	case 131:
		StringCopy(&Var2, "HE_FMM_16_0", 16);
		iVar6 = 16;
		iVar7 = 0;
		iVar1 = 1060;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 132:
		StringCopy(&Var2, "HE_FMM_16_1", 16);
		iVar6 = 16;
		iVar7 = 1;
		iVar1 = 1400;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 133:
		StringCopy(&Var2, "HE_FMM_16_2", 16);
		iVar6 = 16;
		iVar7 = 2;
		iVar1 = 1315;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 134:
		StringCopy(&Var2, "HE_FMM_16_3", 16);
		iVar6 = 16;
		iVar7 = 3;
		iVar1 = 1230;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 135:
		StringCopy(&Var2, "HE_FMM_16_4", 16);
		iVar6 = 16;
		iVar7 = 4;
		iVar1 = 1145;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 136:
		StringCopy(&Var2, "HE_FMM_16_5", 16);
		iVar6 = 16;
		iVar7 = 5;
		iVar1 = 8450;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 137:
		StringCopy(&Var2, "HE_FMM_16_6", 16);
		iVar6 = 16;
		iVar7 = 6;
		iVar1 = 675;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 138:
		StringCopy(&Var2, "HE_FMM_16_7", 16);
		iVar6 = 16;
		iVar7 = 7;
		iVar1 = 8750;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 139:
		StringCopy(&Var2, "HE_FMM_17_0", 16);
		iVar6 = 17;
		iVar7 = 0;
		iVar1 = 975;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 140:
		StringCopy(&Var2, "HE_FMM_17_1", 16);
		iVar6 = 17;
		iVar7 = 1;
		iVar1 = 750;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 141:
		StringCopy(&Var2, "HE_FMM_17_2", 16);
		iVar6 = 17;
		iVar7 = 2;
		iVar1 = 865;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 142:
		StringCopy(&Var2, "HE_FMM_17_3", 16);
		iVar6 = 17;
		iVar7 = 3;
		iVar1 = 890;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 143:
		StringCopy(&Var2, "HE_FMM_17_4", 16);
		iVar6 = 17;
		iVar7 = 4;
		iVar1 = 730;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 144:
		StringCopy(&Var2, "HE_FMM_17_5", 16);
		iVar6 = 17;
		iVar7 = 5;
		iVar1 = 650;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 145:
		StringCopy(&Var2, "HE_FMM_17_6", 16);
		iVar6 = 17;
		iVar7 = 6;
		iVar1 = 645;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 146:
		StringCopy(&Var2, "HE_FMM_17_7", 16);
		iVar6 = 17;
		iVar7 = 7;
		iVar1 = 755;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 147:
		StringCopy(&Var2, "HE_FMM_18_0", 16);
		iVar6 = 18;
		iVar7 = 0;
		iVar1 = 13850;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 148:
		StringCopy(&Var2, "HE_FMM_18_1", 16);
		iVar6 = 18;
		iVar7 = 1;
		iVar1 = 2900;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 149:
		StringCopy(&Var2, "HE_FMM_18_2", 16);
		iVar6 = 18;
		iVar7 = 2;
		iVar1 = 2895;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 150:
		StringCopy(&Var2, "HE_FMM_18_3", 16);
		iVar6 = 18;
		iVar7 = 3;
		iVar1 = 12500;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 151:
		StringCopy(&Var2, "HE_FMM_18_4", 16);
		iVar6 = 18;
		iVar7 = 4;
		iVar1 = 15000;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 152:
		StringCopy(&Var2, "HE_FMM_18_5", 16);
		iVar6 = 18;
		iVar7 = 5;
		iVar1 = 14750;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 153:
		StringCopy(&Var2, "HE_FMM_18_6", 16);
		iVar6 = 18;
		iVar7 = 6;
		iVar1 = 13150;
		iVar8 = 0;
		iVar11 = 2;
		break;

	case 154:
		StringCopy(&Var2, "HE_FMM_18_7", 16);
		iVar6 = 18;
		iVar7 = 7;
		iVar1 = 2925;
		iVar8 = 0;
		iVar11 = 2;
		break;
	}
	switch (iParam0) {
	case 155:
		StringCopy(&Var2, "G_FMM_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 156:
		StringCopy(&Var2, "G_FMM_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 157:
		StringCopy(&Var2, "G_FMM_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 158:
		StringCopy(&Var2, "G_FMM_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 159:
		StringCopy(&Var2, "G_FMM_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 160:
		StringCopy(&Var2, "G_FMM_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 161:
		StringCopy(&Var2, "G_FMM_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 162:
		StringCopy(&Var2, "G_FMM_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 163:
		StringCopy(&Var2, "G_FMM_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 50;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 164:
		StringCopy(&Var2, "G_FMM_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 50;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 165:
		StringCopy(&Var2, "G_FMM_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 50;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 166:
		StringCopy(&Var2, "G_FMM_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 167:
		StringCopy(&Var2, "G_FMM_1_1", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 180;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 168:
		StringCopy(&Var2, "G_FMM_1_2", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 169:
		StringCopy(&Var2, "G_FMM_1_3", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 170:
		StringCopy(&Var2, "G_FMM_1_4", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 171:
		StringCopy(&Var2, "G_FMM_1_5", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 172:
		StringCopy(&Var2, "G_FMM_1_6", 16);
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 173:
		StringCopy(&Var2, "G_FMM_1_7", 16);
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 174:
		StringCopy(&Var2, "G_FMM_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 110;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 175:
		StringCopy(&Var2, "G_FMM_2_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 140;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 176:
		StringCopy(&Var2, "G_FMM_2_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 380;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 177:
		StringCopy(&Var2, "G_FMM_2_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 135;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 178:
		StringCopy(&Var2, "G_FMM_2_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 130;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 179:
		StringCopy(&Var2, "G_FMM_2_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 110;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 180:
		StringCopy(&Var2, "G_FMM_2_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 140;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 181:
		StringCopy(&Var2, "G_FMM_2_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 390;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 182:
		StringCopy(&Var2, "CLO_EXM_G_2_8", 16);
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 950;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 183:
		StringCopy(&Var2, "CLO_EXM_G_2_9", 16);
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 565;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 184:
		StringCopy(&Var2, "CLO_EXM_G_2_10", 16);
		iVar6 = 2;
		iVar7 = 10;
		iVar1 = 630;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 185:
		StringCopy(&Var2, "G_FMM_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 70;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 186:
		StringCopy(&Var2, "G_FMM_3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 60;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 187:
		StringCopy(&Var2, "G_FMM_3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 65;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 188:
		StringCopy(&Var2, "G_FMM_3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 95;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 189:
		StringCopy(&Var2, "G_FMM_3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 85;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 190:
		StringCopy(&Var2, "G_FMM_3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 75;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 191:
		StringCopy(&Var2, "G_FMM_3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 75;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 192:
		StringCopy(&Var2, "G_FMM_3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 90;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 193:
		StringCopy(&Var2, "CLO_EXM_G_3_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 650;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 194:
		StringCopy(&Var2, "CLO_EXM_G_3_9", 16);
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 265;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 195:
		StringCopy(&Var2, "CLO_EXM_G_3_10", 16);
		iVar6 = 3;
		iVar7 = 10;
		iVar1 = 330;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 196:
		StringCopy(&Var2, "G_FMM_4_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 245;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 197:
		StringCopy(&Var2, "G_FMM_4_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 250;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 198:
		StringCopy(&Var2, "G_FMM_4_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 210;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 199:
		StringCopy(&Var2, "G_FMM_4_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 245;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 200:
		StringCopy(&Var2, "G_FMM_4_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 205;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 201:
		StringCopy(&Var2, "G_FMM_4_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 205;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 202:
		StringCopy(&Var2, "G_FMM_4_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 215;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 203:
		StringCopy(&Var2, "G_FMM_4_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 215;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 204:
		StringCopy(&Var2, "CLO_EXM_G_4_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 995;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 205:
		StringCopy(&Var2, "CLO_EXM_G_4_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 610;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 206:
		StringCopy(&Var2, "CLO_EXM_G_4_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 675;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 207:
		StringCopy(&Var2, "G_FMM_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 4050;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 208:
		StringCopy(&Var2, "G_FMM_5_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 4060;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 209:
		StringCopy(&Var2, "G_FMM_5_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 170;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 210:
		StringCopy(&Var2, "G_FMM_5_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 135;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 211:
		StringCopy(&Var2, "G_FMM_5_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 120;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 212:
		StringCopy(&Var2, "G_FMM_5_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 110;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 213:
		StringCopy(&Var2, "G_FMM_5_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 140;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 214:
		StringCopy(&Var2, "G_FMM_5_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 130;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 215:
		StringCopy(&Var2, "CLO_EXM_G_5_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 1760;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 216:
		StringCopy(&Var2, "CLO_EXM_G_5_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 1375;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 217:
		StringCopy(&Var2, "CLO_EXM_G_5_10", 16);
		iVar6 = 5;
		iVar7 = 10;
		iVar1 = 1440;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 218:
		StringCopy(&Var2, "G_FMM_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 219:
		StringCopy(&Var2, "G_FMM_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 220:
		StringCopy(&Var2, "G_FMM_6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 221:
		StringCopy(&Var2, "G_FMM_6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 222:
		StringCopy(&Var2, "G_FMM_6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 223:
		StringCopy(&Var2, "G_FMM_6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 224:
		StringCopy(&Var2, "G_FMM_6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 225:
		StringCopy(&Var2, "G_FMM_6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 226:
		StringCopy(&Var2, "G_FMM_7_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 180;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 227:
		StringCopy(&Var2, "G_FMM_7_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 500;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 228:
		StringCopy(&Var2, "G_FMM_7_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 115;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 229:
		StringCopy(&Var2, "G_FMM_7_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 220;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 230:
		StringCopy(&Var2, "G_FMM_7_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 185;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 231:
		StringCopy(&Var2, "G_FMM_7_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 1445;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 232:
		StringCopy(&Var2, "G_FMM_7_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 530;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 233:
		StringCopy(&Var2, "G_FMM_7_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 650;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 234:
		StringCopy(&Var2, "CLO_EXM_G_7_8", 16);
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 1170;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 235:
		StringCopy(&Var2, "CLO_EXM_G_7_9", 16);
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 785;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 236:
		StringCopy(&Var2, "CLO_EXM_G_7_10", 16);
		iVar6 = 7;
		iVar7 = 10;
		iVar1 = 850;
		iVar8 = 1;
		iVar11 = 3;
		break;
	}
	switch (iParam0) {
	case 237:
		StringCopy(&Var2, "G_FMM_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 4260;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 238:
		StringCopy(&Var2, "G_FMM_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 4310;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 239:
		StringCopy(&Var2, "G_FMM_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 4130;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 240:
		StringCopy(&Var2, "G_FMM_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 135;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 241:
		StringCopy(&Var2, "G_FMM_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 120;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 242:
		StringCopy(&Var2, "G_FMM_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 110;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 243:
		StringCopy(&Var2, "G_FMM_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 140;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 244:
		StringCopy(&Var2, "G_FMM_8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 130;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 245:
		StringCopy(&Var2, "CLO_EXM_G_8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 1885;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 246:
		StringCopy(&Var2, "CLO_EXM_G_8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 1500;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 247:
		StringCopy(&Var2, "CLO_EXM_G_8_10", 16);
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 1565;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 248:
		StringCopy(&Var2, "G_FMM_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 65;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 249:
		StringCopy(&Var2, "G_FMM_9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 65;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 250:
		StringCopy(&Var2, "G_FMM_9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 85;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 251:
		StringCopy(&Var2, "G_FMM_9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 75;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 252:
		StringCopy(&Var2, "G_FMM_9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 85;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 253:
		StringCopy(&Var2, "G_FMM_9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 4290;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 254:
		StringCopy(&Var2, "G_FMM_9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 4150;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 255:
		StringCopy(&Var2, "G_FMM_9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 4295;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 256:
		StringCopy(&Var2, "CLO_EXM_G_9_8", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 2315;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 257:
		StringCopy(&Var2, "CLO_EXM_G_9_9", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 1930;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 258:
		StringCopy(&Var2, "CLO_EXM_G_9_10", 16);
		iVar6 = 9;
		iVar7 = 10;
		iVar1 = 1995;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 259:
		StringCopy(&Var2, "G_FMM_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 6240;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 260:
		StringCopy(&Var2, "G_FMM_10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 4955;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 261:
		StringCopy(&Var2, "G_FMM_10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 5590;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 262:
		StringCopy(&Var2, "G_FMM_10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 4920;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 263:
		StringCopy(&Var2, "G_FMM_10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 4990;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 264:
		StringCopy(&Var2, "G_FMM_10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 4780;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 265:
		StringCopy(&Var2, "G_FMM_10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 4775;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 266:
		StringCopy(&Var2, "G_FMM_10_7", 16);
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 4800;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 267:
		StringCopy(&Var2, "CLO_EXM_G_10_8", 16);
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 2835;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 268:
		StringCopy(&Var2, "CLO_EXM_G_10_9", 16);
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 2450;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 269:
		StringCopy(&Var2, "CLO_EXM_G_10_10", 16);
		iVar6 = 10;
		iVar7 = 10;
		iVar1 = 2515;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 270:
		StringCopy(&Var2, "G_FMM_11_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 271:
		StringCopy(&Var2, "G_FMM_11_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 272:
		StringCopy(&Var2, "G_FMM_11_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 273:
		StringCopy(&Var2, "G_FMM_11_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 274:
		StringCopy(&Var2, "G_FMM_11_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 275:
		StringCopy(&Var2, "G_FMM_11_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 277:
		StringCopy(&Var2, "G_FMM_11_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 278:
		StringCopy(&Var2, "G_FMM_12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 385;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 279:
		StringCopy(&Var2, "G_FMM_12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 310;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 280:
		StringCopy(&Var2, "G_FMM_12_2", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 3655;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 281:
		StringCopy(&Var2, "G_FMM_12_3", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 4055;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 282:
		StringCopy(&Var2, "G_FMM_12_4", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 3595;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 283:
		StringCopy(&Var2, "G_FMM_12_5", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 3605;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 284:
		StringCopy(&Var2, "G_FMM_12_6", 16);
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 3645;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 285:
		StringCopy(&Var2, "G_FMM_12_7", 16);
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 320;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 286:
		StringCopy(&Var2, "CLO_EXM_G_12_8", 16);
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 2820;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 287:
		StringCopy(&Var2, "CLO_EXM_G_12_9", 16);
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 2435;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 288:
		StringCopy(&Var2, "CLO_EXM_G_12_10", 16);
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 2500;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 289:
		StringCopy(&Var2, "G_FMM_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 230;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 290:
		StringCopy(&Var2, "G_FMM_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 1605;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 291:
		StringCopy(&Var2, "G_FMM_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 2230;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 292:
		StringCopy(&Var2, "G_FMM_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 220;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 293:
		StringCopy(&Var2, "G_FMM_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 185;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 294:
		StringCopy(&Var2, "G_FMM_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 2070;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 295:
		StringCopy(&Var2, "G_FMM_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 2205;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 296:
		StringCopy(&Var2, "G_FMM_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 1690;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 297:
		StringCopy(&Var2, "CLO_EXM_G_13_8", 16);
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 2715;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 298:
		StringCopy(&Var2, "CLO_EXM_G_13_9", 16);
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 2330;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 299:
		StringCopy(&Var2, "CLO_EXM_G_13_10", 16);
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 2395;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 300:
		StringCopy(&Var2, "G_FMM_14_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 301:
		StringCopy(&Var2, "G_FMM_14_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 302:
		StringCopy(&Var2, "G_FMM_14_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 303:
		StringCopy(&Var2, "G_FMM_14_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 304:
		StringCopy(&Var2, "G_FMM_14_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 305:
		StringCopy(&Var2, "G_FMM_14_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 306:
		StringCopy(&Var2, "G_FMM_14_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 307:
		StringCopy(&Var2, "G_FMM_14_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 0;
		iVar8 = 1;
		iVar11 = 3;
		iVar0 = 1;
		break;

	case 308:
		StringCopy(&Var2, "G_FMM_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 515;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 309:
		StringCopy(&Var2, "G_FMM_15_1", 16);
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 60;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 310:
		StringCopy(&Var2, "G_FMM_15_2", 16);
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 65;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 311:
		StringCopy(&Var2, "G_FMM_15_3", 16);
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 95;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 312:
		StringCopy(&Var2, "G_FMM_15_4", 16);
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 85;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 313:
		StringCopy(&Var2, "G_FMM_15_5", 16);
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 75;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 314:
		StringCopy(&Var2, "G_FMM_15_6", 16);
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 485;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 315:
		StringCopy(&Var2, "G_FMM_15_7", 16);
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 545;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 316:
		StringCopy(&Var2, "CLO_EXM_G_15_8", 16);
		iVar6 = 15;
		iVar7 = 8;
		iVar1 = 645;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 317:
		StringCopy(&Var2, "CLO_EXM_G_15_9", 16);
		iVar6 = 15;
		iVar7 = 9;
		iVar1 = 260;
		iVar8 = 1;
		iVar11 = 3;
		break;

	case 318:
		StringCopy(&Var2, "CLO_EXM_G_15_10", 16);
		iVar6 = 15;
		iVar7 = 10;
		iVar1 = 325;
		iVar8 = 1;
		iVar11 = 3;
		break;
	}
	switch (iParam0) {
	case 319:
		StringCopy(&Var2, "W_FMM_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 5000;
		iVar8 = 6;
		iVar11 = 4;
		break;

	case 320:
		StringCopy(&Var2, "W_FMM_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 321:
		StringCopy(&Var2, "W_FMM_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 322:
		StringCopy(&Var2, "W_FMM_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 323:
		StringCopy(&Var2, "W_FMM_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 324:
		StringCopy(&Var2, "W_FMM_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 695;
		iVar8 = 6;
		iVar11 = 4;
		break;

	case 325:
		StringCopy(&Var2, "W_FMM_1_1", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;

	case 326:
		StringCopy(&Var2, "W_FMM_1_2", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 0;
		iVar8 = 6;
		iVar11 = 4;
		iVar0 = 1;
		break;
	}
	if (iVar11 == 1) {
		iVar12 = iParam0 - 10;
		if (iVar12 >= 0 && iVar12 < 121) {
			if (iVar12 > 8) {
				iVar12--;
			}
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_954[iVar12] * Global_279980.f_18);
		}
	}
	else if (iVar11 == 2) {
		iVar13 = iParam0 - 131;
		if (iVar13 >= 0 && iVar13 < 24) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1075[iVar13] * Global_279980.f_19);
		}
	}
	else if (iVar11 == 3) {
		iVar14 = iParam0 - 155;
		if (iVar14 >= 0 && iVar14 < 128) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1100[iVar14] * Global_279980.f_20);
		}
	}
	else if (iVar11 == 4) {
		iVar15 = iParam0 - 319;
		if (iVar15 >= 0 && iVar15 < 15) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_1229[iVar15] * Global_279980.f_21);
		}
	}
	if (iParam0 >= 327) {
		Global_69523[0 /*14*/].f_5 = 3;
		func_164(iVar10, iParam0, 327);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, -1757550583, 1)) {
				Global_69523[0 /*14*/].f_7 =
					system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_18);
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, 97230661, 1)) {
				Global_69523[0 /*14*/].f_7 =
					system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_20);
			}
			else if (dlc1::_0x341DE7ED1D2A1BFD(Global_2621444, 1147826474, 1)) {
				Global_69523[0 /*14*/].f_7 =
					system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_21);
			}
		}
	}
	else {
		func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

// Position - 0x380AF
void func_184(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "D_FMM_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 0;
		break;

	case 1:
		StringCopy(&Var2, "D_FMM_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 5000;
		break;

	case 2:
		StringCopy(&Var2, "D_FMM_2_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 3:
		StringCopy(&Var2, "D_FMM_1_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 5000;
		break;

	case 4:
		StringCopy(&Var2, "D_FMM_2_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	case 5:
		StringCopy(&Var2, "D_FMM_1_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 5000;
		break;

	case 6:
		StringCopy(&Var2, "D_FMM_2_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 10000;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 3;
		func_164(iVar10, iParam0, 7);
		return;
	}
	func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x381CE
void func_185(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 0;
		break;

	case 1:
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 2:
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 3:
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 4:
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 5:
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 6:
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 7:
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 8:
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 9:
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 10:
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 11:
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 12:
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 13:
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 14:
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 15:
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 16:
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 17:
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 18:
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 19:
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 20:
		iVar6 = 4;
		iVar7 = 10;
		iVar0 = 1;
		break;

	case 21:
		iVar6 = 4;
		iVar7 = 11;
		iVar0 = 1;
		break;

	case 22:
		iVar6 = 4;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 23:
		iVar6 = 4;
		iVar7 = 13;
		iVar0 = 1;
		break;

	case 24:
		iVar6 = 4;
		iVar7 = 14;
		iVar0 = 1;
		break;

	case 25:
		iVar6 = 4;
		iVar7 = 15;
		iVar0 = 1;
		break;

	case 26:
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 27:
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 28:
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 29:
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 30:
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 31:
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 32:
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 33:
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 34:
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 35:
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 36:
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 37:
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 38:
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 39:
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 40:
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 41:
		iVar6 = 10;
		iVar7 = 0;
		if (Global_262145.f_4171 != -1) {
			iVar1 = Global_262145.f_4171;
		}
		else {
			iVar1 = 115;
		}
		break;

	case 42:
		iVar6 = 10;
		iVar7 = 1;
		if (Global_262145.f_4172 != -1) {
			iVar1 = Global_262145.f_4172;
		}
		else {
			iVar1 = 125;
		}
		break;

	case 43:
		iVar6 = 10;
		iVar7 = 2;
		if (Global_262145.f_4173 != -1) {
			iVar1 = Global_262145.f_4173;
		}
		else {
			iVar1 = 130;
		}
		break;

	case 44:
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 45:
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 46:
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 47:
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 48:
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 49:
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 50:
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 51:
		iVar6 = 10;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 52:
		iVar6 = 10;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 53:
		iVar6 = 10;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 54:
		iVar6 = 10;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 55:
		iVar6 = 10;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 56:
		iVar6 = 10;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 57:
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 58:
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 59:
		iVar6 = 11;
		iVar7 = 2;
		if (Global_262145.f_4177 != -1) {
			iVar1 = Global_262145.f_4177;
		}
		else {
			iVar1 = 725;
		}
		break;

	case 60:
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 61:
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 62:
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 63:
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 64:
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 65:
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 66:
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 67:
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 68:
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 69:
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 70:
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 71:
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 72:
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 73:
		iVar6 = 12;
		iVar7 = 0;
		if (Global_262145.f_4174 != -1) {
			iVar1 = Global_262145.f_4174;
		}
		else {
			iVar1 = 65;
		}
		break;

	case 74:
		iVar6 = 12;
		iVar7 = 1;
		if (Global_262145.f_4175 != -1) {
			iVar1 = Global_262145.f_4175;
		}
		else {
			iVar1 = 65;
		}
		break;

	case 75:
		iVar6 = 12;
		iVar7 = 2;
		if (Global_262145.f_4176 != -1) {
			iVar1 = Global_262145.f_4176;
		}
		else {
			iVar1 = 95;
		}
		break;

	case 76:
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 77:
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 78:
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 79:
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 80:
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 81:
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 82:
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 83:
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 84:
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 85:
		iVar6 = 12;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 86:
		iVar6 = 12;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 87:
		iVar6 = 12;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 88:
		iVar6 = 12;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 89:
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 90:
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 91:
		iVar6 = 15;
		iVar7 = 0;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 3;
		func_164(iVar10, iParam0, 92);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			Global_69523[0 /*14*/].f_7 =
				system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_57);
		}
		return;
	}
	iVar1 = system::round(system::to_float(iVar1) * Global_279980.f_57);
	StringCopy(&Var2, "T_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x38AC4
void func_186(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 0;
		break;

	case 1:
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 965;
		break;

	case 2:
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 960;
		break;

	case 3:
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 9500;
		break;

	case 4:
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 975;
		break;

	case 5:
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 1185;
		break;

	case 6:
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 15000;
		break;

	case 7:
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 1115;
		break;

	case 8:
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 1105;
		break;

	case 9:
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 25000;
		break;

	case 10:
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 510;
		break;

	case 11:
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 530;
		break;

	case 12:
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 5500;
		break;

	case 13:
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 535;
		break;

	case 14:
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 1510;
		break;

	case 15:
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 1530;
		break;

	case 16:
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 14500;
		break;

	case 17:
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 13000;
		break;

	case 18:
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 8000;
		break;

	case 19:
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 1265;
		break;

	case 20:
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 8500;
		break;

	case 21:
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 1210;
		break;

	case 22:
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 2360;
		break;

	case 23:
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 22500;
		break;

	case 24:
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 2375;
		break;

	case 25:
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 2485;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 3;
		func_164(iVar10, iParam0, 26);
		return;
	}
	StringCopy(&Var2, "M_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0 - 1;
	if (iVar11 >= 0 && iVar11 < 26) {
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_927[iVar11] * Global_279980.f_22);
	}
	func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x38D79
void func_187(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 1:
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 2:
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 3:
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 4:
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 5:
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 6:
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 7:
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 8:
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 9:
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 10:
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 300;
		break;

	case 11:
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 12:
		iVar6 = 0;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 13:
		iVar6 = 0;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 14:
		iVar6 = 0;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 15:
		iVar6 = 0;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 16:
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 285;
		break;

	case 17:
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 180;
		break;

	case 18:
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 190;
		break;

	case 19:
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 190;
		break;

	case 20:
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 165;
		break;

	case 21:
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 200;
		break;

	case 22:
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 480;
		break;

	case 23:
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 155;
		break;

	case 24:
		iVar6 = 1;
		iVar7 = 8;
		iVar1 = 350;
		break;

	case 25:
		iVar6 = 1;
		iVar7 = 9;
		iVar1 = 290;
		break;

	case 26:
		iVar6 = 1;
		iVar7 = 10;
		iVar1 = 165;
		break;

	case 27:
		iVar6 = 1;
		iVar7 = 11;
		iVar1 = 165;
		break;

	case 28:
		iVar6 = 1;
		iVar7 = 12;
		iVar1 = 170;
		break;

	case 29:
		iVar6 = 1;
		iVar7 = 13;
		iVar1 = 155;
		break;

	case 30:
		iVar6 = 1;
		iVar7 = 14;
		iVar1 = 165;
		break;

	case 31:
		iVar6 = 1;
		iVar7 = 15;
		iVar1 = 165;
		break;
	}
	switch (iParam0) {
	case 32:
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 33:
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 34:
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 35:
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 36:
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 37:
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 38:
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 160;
		break;

	case 39:
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 40:
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 41:
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 42:
		iVar6 = 2;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 43:
		iVar6 = 2;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 44:
		iVar6 = 2;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 45:
		iVar6 = 2;
		iVar7 = 13;
		iVar1 = 205;
		break;

	case 46:
		iVar6 = 2;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 47:
		iVar6 = 2;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 48:
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 560;
		break;

	case 49:
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 275;
		break;

	case 50:
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 290;
		break;

	case 51:
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 300;
		break;

	case 52:
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 360;
		break;

	case 53:
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 270;
		break;

	case 54:
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 265;
		break;

	case 55:
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 295;
		break;

	case 56:
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 355;
		break;

	case 57:
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 340;
		break;

	case 58:
		iVar6 = 3;
		iVar7 = 10;
		iVar1 = 285;
		break;

	case 59:
		iVar6 = 3;
		iVar7 = 11;
		iVar1 = 310;
		break;

	case 60:
		iVar6 = 3;
		iVar7 = 12;
		iVar1 = 350;
		break;

	case 61:
		iVar6 = 3;
		iVar7 = 13;
		iVar1 = 305;
		break;

	case 62:
		iVar6 = 3;
		iVar7 = 14;
		iVar1 = 280;
		break;

	case 63:
		iVar6 = 3;
		iVar7 = 15;
		iVar1 = 320;
		break;
	}
	switch (iParam0) {
	case 64:
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 115;
		break;

	case 65:
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 66:
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 110;
		break;

	case 67:
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 68:
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 125;
		break;

	case 69:
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 70:
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 71:
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 72:
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 73:
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 74:
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 75:
		iVar6 = 4;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 76:
		iVar6 = 4;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 77:
		iVar6 = 4;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 78:
		iVar6 = 4;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 79:
		iVar6 = 4;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 80:
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 50;
		break;

	case 81:
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 35;
		break;

	case 82:
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 50;
		break;

	case 83:
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 50;
		break;

	case 84:
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 85:
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 86:
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 87:
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 88:
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 89:
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 90:
		iVar6 = 5;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 91:
		iVar6 = 5;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 92:
		iVar6 = 5;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 93:
		iVar6 = 5;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 94:
		iVar6 = 5;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 95:
		iVar6 = 5;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 96:
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 65;
		break;

	case 97:
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 65;
		break;

	case 98:
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 99:
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 100:
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 101:
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 102:
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 103:
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 104:
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 105:
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 106:
		iVar6 = 6;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 107:
		iVar6 = 6;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 108:
		iVar6 = 6;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 109:
		iVar6 = 6;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 110:
		iVar6 = 6;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 111:
		iVar6 = 6;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 112:
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 165;
		break;

	case 113:
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 165;
		break;

	case 114:
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 185;
		break;

	case 115:
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 175;
		break;

	case 116:
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 185;
		break;

	case 117:
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 460;
		break;

	case 118:
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 185;
		break;

	case 119:
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 190;
		break;

	case 120:
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 165;
		break;

	case 121:
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 165;
		break;

	case 122:
		iVar6 = 7;
		iVar7 = 10;
		iVar1 = 185;
		break;

	case 123:
		iVar6 = 7;
		iVar7 = 11;
		iVar1 = 175;
		break;

	case 124:
		iVar6 = 7;
		iVar7 = 12;
		iVar1 = 235;
		break;

	case 125:
		iVar6 = 7;
		iVar7 = 13;
		iVar1 = 445;
		break;

	case 126:
		iVar6 = 7;
		iVar7 = 14;
		iVar1 = 185;
		break;

	case 127:
		iVar6 = 7;
		iVar7 = 15;
		iVar1 = 190;
		break;
	}
	switch (iParam0) {
	case 128:
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 175;
		break;

	case 129:
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 215;
		break;

	case 130:
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 225;
		break;

	case 131:
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 230;
		break;

	case 132:
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 235;
		break;

	case 133:
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 215;
		break;

	case 134:
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 205;
		break;

	case 135:
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 245;
		break;

	case 136:
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 225;
		break;

	case 137:
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 215;
		break;

	case 138:
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 225;
		break;

	case 139:
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 230;
		break;

	case 140:
		iVar6 = 8;
		iVar7 = 12;
		iVar1 = 235;
		break;

	case 141:
		iVar6 = 8;
		iVar7 = 13;
		iVar1 = 215;
		break;

	case 142:
		iVar6 = 8;
		iVar7 = 14;
		iVar1 = 425;
		break;

	case 143:
		iVar6 = 8;
		iVar7 = 15;
		iVar1 = 245;
		break;

	case 144:
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 225;
		break;

	case 145:
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 135;
		break;

	case 146:
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 130;
		break;

	case 147:
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 110;
		break;

	case 148:
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 140;
		break;

	case 149:
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 95;
		break;

	case 150:
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 100;
		break;

	case 151:
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 110;
		break;

	case 152:
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 95;
		break;

	case 153:
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 105;
		break;

	case 154:
		iVar6 = 9;
		iVar7 = 10;
		iVar1 = 105;
		break;

	case 155:
		iVar6 = 9;
		iVar7 = 11;
		iVar1 = 115;
		break;

	case 156:
		iVar6 = 9;
		iVar7 = 12;
		iVar1 = 115;
		break;

	case 157:
		iVar6 = 9;
		iVar7 = 13;
		iVar1 = 115;
		break;

	case 158:
		iVar6 = 9;
		iVar7 = 14;
		iVar1 = 500;
		break;

	case 159:
		iVar6 = 9;
		iVar7 = 15;
		iVar1 = 440;
		break;
	}
	switch (iParam0) {
	case 160:
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 1090;
		break;

	case 161:
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 162:
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 163:
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 164:
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 165:
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 166:
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 167:
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 600;
		break;

	case 168:
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 169:
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 170:
		iVar6 = 10;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 171:
		iVar6 = 10;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 172:
		iVar6 = 10;
		iVar7 = 12;
		iVar1 = 1865;
		break;

	case 173:
		iVar6 = 10;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 174:
		iVar6 = 10;
		iVar7 = 14;
		iVar1 = 490;
		break;

	case 175:
		iVar6 = 10;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 176:
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 177:
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 178:
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 179:
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 180:
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 181:
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 182:
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 183:
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 184:
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 185:
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 470;
		break;

	case 186:
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 187:
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 188:
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 1795;
		break;

	case 189:
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 190:
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 1830;
		break;

	case 191:
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 455;
		break;
	}
	switch (iParam0) {
	case 192:
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 455;
		break;

	case 193:
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 2110;
		break;

	case 194:
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 380;
		break;

	case 195:
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 1655;
		break;

	case 196:
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 2500;
		break;

	case 197:
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 415;
		break;

	case 198:
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 730;
		break;

	case 199:
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 445;
		break;

	case 200:
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 425;
		break;

	case 201:
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 410;
		break;

	case 202:
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 480;
		break;

	case 203:
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 485;
		break;

	case 204:
		iVar6 = 12;
		iVar7 = 12;
		iVar1 = 480;
		break;

	case 205:
		iVar6 = 12;
		iVar7 = 13;
		iVar1 = 395;
		break;

	case 206:
		iVar6 = 12;
		iVar7 = 14;
		iVar1 = 495;
		break;

	case 207:
		iVar6 = 12;
		iVar7 = 15;
		iVar1 = 2090;
		break;

	case 208:
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 209:
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 210:
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 211:
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 212:
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 213:
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 214:
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 215:
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 216:
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 217:
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 218:
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 219:
		iVar6 = 13;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 220:
		iVar6 = 13;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 221:
		iVar6 = 13;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 222:
		iVar6 = 13;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 223:
		iVar6 = 13;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 224:
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 450;
		break;

	case 225:
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 685;
		break;

	case 226:
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 420;
		break;

	case 227:
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 365;
		break;

	case 228:
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 465;
		break;

	case 229:
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 405;
		break;

	case 230:
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 400;
		break;

	case 231:
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 440;
		break;

	case 232:
		iVar6 = 14;
		iVar7 = 8;
		iVar1 = 385;
		break;

	case 233:
		iVar6 = 14;
		iVar7 = 9;
		iVar1 = 435;
		break;

	case 234:
		iVar6 = 14;
		iVar7 = 10;
		iVar1 = 375;
		break;

	case 235:
		iVar6 = 14;
		iVar7 = 11;
		iVar1 = 390;
		break;

	case 236:
		iVar6 = 14;
		iVar7 = 12;
		iVar1 = 475;
		break;

	case 237:
		iVar6 = 14;
		iVar7 = 13;
		iVar1 = 430;
		break;

	case 238:
		iVar6 = 14;
		iVar7 = 14;
		iVar1 = 490;
		break;

	case 239:
		iVar6 = 14;
		iVar7 = 15;
		iVar1 = 490;
		break;

	case 240:
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 615;
		break;

	case 241:
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 315;
		break;

	case 242:
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 415;
		break;

	case 243:
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 425;
		break;

	case 244:
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 435;
		break;

	case 245:
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 445;
		break;

	case 246:
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 640;
		break;

	case 247:
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 460;
		break;

	case 248:
		iVar6 = 15;
		iVar7 = 8;
		iVar1 = 465;
		break;

	case 249:
		iVar6 = 15;
		iVar7 = 9;
		iVar1 = 745;
		break;

	case 250:
		iVar6 = 15;
		iVar7 = 10;
		iVar1 = 845;
		break;

	case 251:
		iVar6 = 15;
		iVar7 = 11;
		iVar1 = 1420;
		break;

	case 252:
		iVar6 = 15;
		iVar7 = 12;
		iVar1 = 475;
		break;

	case 253:
		iVar6 = 15;
		iVar7 = 13;
		iVar1 = 470;
		break;

	case 254:
		iVar6 = 15;
		iVar7 = 14;
		iVar1 = 1000;
		break;

	case 255:
		iVar6 = 15;
		iVar7 = 15;
		iVar1 = 690;
		break;
	}
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256) {
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_670[iVar11] * Global_279980.f_17);
	}
	StringCopy(&Var2, "F_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 >= 256) {
		Global_69523[0 /*14*/].f_5 = 3;
		func_164(iVar10, iParam0, 256);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			Global_69523[0 /*14*/].f_7 =
				system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_17);
		}
	}
	else {
		func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

// Position - 0x3A3B4
void func_188(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 335;
		break;

	case 1:
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 460;
		break;

	case 2:
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 455;
		break;

	case 3:
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 470;
		break;

	case 4:
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 650;
		break;

	case 5:
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 385;
		break;

	case 6:
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 455;
		break;

	case 7:
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 2150;
		break;

	case 8:
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 375;
		break;

	case 9:
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 2190;
		break;

	case 10:
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 285;
		break;

	case 11:
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 295;
		break;

	case 12:
		iVar6 = 0;
		iVar7 = 12;
		iVar1 = 445;
		break;

	case 13:
		iVar6 = 0;
		iVar7 = 13;
		iVar1 = 2240;
		break;

	case 14:
		iVar6 = 0;
		iVar7 = 14;
		iVar1 = 465;
		break;

	case 15:
		iVar6 = 0;
		iVar7 = 15;
		iVar1 = 1740;
		break;

	case 16:
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 1415;
		break;

	case 17:
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 325;
		break;

	case 18:
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 345;
		break;

	case 19:
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 355;
		break;

	case 20:
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 395;
		break;

	case 21:
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 315;
		break;

	case 22:
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 275;
		break;

	case 23:
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 265;
		break;

	case 24:
		iVar6 = 1;
		iVar7 = 8;
		iVar1 = 305;
		break;

	case 25:
		iVar6 = 1;
		iVar7 = 9;
		iVar1 = 255;
		break;

	case 26:
		iVar6 = 1;
		iVar7 = 10;
		iVar1 = 235;
		break;

	case 27:
		iVar6 = 1;
		iVar7 = 11;
		iVar1 = 245;
		break;

	case 28:
		iVar6 = 1;
		iVar7 = 12;
		iVar1 = 215;
		break;

	case 29:
		iVar6 = 1;
		iVar7 = 13;
		iVar1 = 1865;
		break;

	case 30:
		iVar6 = 1;
		iVar7 = 14;
		iVar1 = 450;
		break;

	case 31:
		iVar6 = 1;
		iVar7 = 15;
		iVar1 = 415;
		break;

	case 32:
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 33:
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 34:
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 35:
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 36:
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 37:
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 38:
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 39:
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 40:
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 41:
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 42:
		iVar6 = 2;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 43:
		iVar6 = 2;
		iVar7 = 11;
		iVar1 = 100;
		break;

	case 44:
		iVar6 = 2;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 45:
		iVar6 = 2;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 46:
		iVar6 = 2;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 47:
		iVar6 = 2;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 48:
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 55;
		break;

	case 49:
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 60;
		break;

	case 50:
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 100;
		break;

	case 51:
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 65;
		break;

	case 52:
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 65;
		break;

	case 53:
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 100;
		break;

	case 54:
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 100;
		break;

	case 55:
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 65;
		break;

	case 56:
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 90;
		break;

	case 57:
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 75;
		break;

	case 58:
		iVar6 = 3;
		iVar7 = 10;
		iVar1 = 65;
		break;

	case 59:
		iVar6 = 3;
		iVar7 = 11;
		iVar1 = 100;
		break;

	case 60:
		iVar6 = 3;
		iVar7 = 12;
		iVar1 = 100;
		break;

	case 61:
		iVar6 = 3;
		iVar7 = 13;
		iVar1 = 225;
		break;

	case 62:
		iVar6 = 3;
		iVar7 = 14;
		iVar1 = 205;
		break;

	case 63:
		iVar6 = 3;
		iVar7 = 15;
		iVar1 = 215;
		break;

	case 64:
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 490;
		break;

	case 65:
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 485;
		break;

	case 66:
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 2500;
		break;

	case 67:
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 68:
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 485;
		break;

	case 69:
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 70:
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 71:
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 72:
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 73:
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 74:
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 75:
		iVar6 = 4;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 76:
		iVar6 = 4;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 77:
		iVar6 = 4;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 78:
		iVar6 = 4;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 79:
		iVar6 = 4;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 80:
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 100;
		break;

	case 81:
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 105;
		break;

	case 82:
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 80;
		break;

	case 83:
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 90;
		break;

	case 84:
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 100;
		break;

	case 85:
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 95;
		break;

	case 86:
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 100;
		break;

	case 87:
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 90;
		break;

	case 88:
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 85;
		break;

	case 89:
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 80;
		break;

	case 90:
		iVar6 = 5;
		iVar7 = 10;
		iVar1 = 80;
		break;

	case 91:
		iVar6 = 5;
		iVar7 = 11;
		iVar1 = 100;
		break;

	case 92:
		iVar6 = 5;
		iVar7 = 12;
		iVar1 = 95;
		break;

	case 93:
		iVar6 = 5;
		iVar7 = 13;
		iVar1 = 440;
		break;

	case 94:
		iVar6 = 5;
		iVar7 = 14;
		iVar1 = 380;
		break;

	case 95:
		iVar6 = 5;
		iVar7 = 15;
		iVar1 = 80;
		break;

	case 96:
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 115;
		break;

	case 97:
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 140;
		break;

	case 98:
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 135;
		break;

	case 99:
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 100:
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 101:
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 102:
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 103:
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 104:
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 105:
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 106:
		iVar6 = 6;
		iVar7 = 10;
		iVar1 = 255;
		break;

	case 107:
		iVar6 = 6;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 108:
		iVar6 = 6;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 109:
		iVar6 = 6;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 110:
		iVar6 = 6;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 111:
		iVar6 = 6;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 112:
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 325;
		break;

	case 113:
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 115;
		break;

	case 114:
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 135;
		break;

	case 115:
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 125;
		break;

	case 116:
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 120;
		break;

	case 117:
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 130;
		break;

	case 118:
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 110;
		break;

	case 119:
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 345;
		break;

	case 120:
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 745;
		break;

	case 121:
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 120;
		break;

	case 122:
		iVar6 = 7;
		iVar7 = 10;
		iVar1 = 135;
		break;

	case 123:
		iVar6 = 7;
		iVar7 = 11;
		iVar1 = 345;
		break;

	case 124:
		iVar6 = 7;
		iVar7 = 12;
		iVar1 = 130;
		break;

	case 125:
		iVar6 = 7;
		iVar7 = 13;
		iVar1 = 140;
		break;

	case 126:
		iVar6 = 7;
		iVar7 = 14;
		iVar1 = 130;
		break;

	case 127:
		iVar6 = 7;
		iVar7 = 15;
		iVar1 = 660;
		break;

	case 128:
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 150;
		break;

	case 129:
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 130:
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 131:
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 150;
		break;

	case 132:
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 133:
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 134:
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 135:
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 136:
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 137:
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 138:
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 139:
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 140:
		iVar6 = 8;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 141:
		iVar6 = 8;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 142:
		iVar6 = 8;
		iVar7 = 14;
		iVar1 = 150;
		break;

	case 143:
		iVar6 = 8;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 144:
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 75;
		break;

	case 145:
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 90;
		break;

	case 146:
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 145;
		break;

	case 147:
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 150;
		break;

	case 148:
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 110;
		break;

	case 149:
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 95;
		break;

	case 150:
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 155;
		break;

	case 151:
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 255;
		break;

	case 152:
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 165;
		break;

	case 153:
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 1150;
		break;

	case 154:
		iVar6 = 9;
		iVar7 = 10;
		iVar1 = 1150;
		break;

	case 155:
		iVar6 = 9;
		iVar7 = 11;
		iVar1 = 1210;
		break;

	case 156:
		iVar6 = 9;
		iVar7 = 12;
		iVar1 = 1125;
		break;

	case 157:
		iVar6 = 9;
		iVar7 = 13;
		iVar1 = 1135;
		break;

	case 158:
		iVar6 = 9;
		iVar7 = 14;
		iVar1 = 1145;
		break;

	case 159:
		iVar6 = 9;
		iVar7 = 15;
		iVar1 = 1145;
		break;

	case 160:
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 845;
		break;

	case 161:
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 480;
		break;

	case 162:
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 475;
		break;

	case 163:
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 164:
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 165:
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 166:
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 167:
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 168:
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 169:
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 170:
		iVar6 = 10;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 171:
		iVar6 = 10;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 172:
		iVar6 = 10;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 173:
		iVar6 = 10;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 174:
		iVar6 = 10;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 175:
		iVar6 = 10;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 176:
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 177:
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 178:
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 179:
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 180:
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 181:
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 182:
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 183:
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 184:
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 185:
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 186:
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 187:
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 188:
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 189:
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 190:
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 191:
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 192:
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 220;
		break;

	case 193:
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 194:
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 195:
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 196:
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 100;
		break;

	case 197:
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 65;
		break;

	case 198:
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 199:
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 50;
		break;

	case 200:
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 201:
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 202:
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 203:
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 204:
		iVar6 = 12;
		iVar7 = 12;
		iVar1 = 100;
		break;

	case 205:
		iVar6 = 12;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 206:
		iVar6 = 12;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 207:
		iVar6 = 12;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 208:
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 460;
		break;

	case 209:
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 475;
		break;

	case 210:
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 470;
		break;

	case 211:
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 212:
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 213:
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 214:
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 215:
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 216:
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 217:
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 218:
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 219:
		iVar6 = 13;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 220:
		iVar6 = 13;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 221:
		iVar6 = 13;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 222:
		iVar6 = 13;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 223:
		iVar6 = 13;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 224:
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 50;
		break;

	case 225:
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 100;
		break;

	case 226:
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 227:
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 100;
		break;

	case 228:
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 229:
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 230:
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 231:
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 232:
		iVar6 = 14;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 233:
		iVar6 = 14;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 234:
		iVar6 = 14;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 235:
		iVar6 = 14;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 236:
		iVar6 = 14;
		iVar7 = 12;
		iVar1 = 100;
		break;

	case 237:
		iVar6 = 14;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 238:
		iVar6 = 14;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 239:
		iVar6 = 14;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 240:
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 90;
		break;

	case 241:
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 105;
		break;

	case 242:
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 100;
		break;

	case 243:
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 240;
		break;

	case 244:
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 95;
		break;

	case 245:
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 95;
		break;

	case 246:
		iVar6 = 15;
		iVar7 = 6;
		iVar1 = 100;
		break;

	case 247:
		iVar6 = 15;
		iVar7 = 7;
		iVar1 = 105;
		break;

	case 248:
		iVar6 = 15;
		iVar7 = 8;
		iVar1 = 100;
		break;

	case 249:
		iVar6 = 15;
		iVar7 = 9;
		iVar1 = 295;
		break;

	case 250:
		iVar6 = 15;
		iVar7 = 10;
		iVar1 = 250;
		break;

	case 251:
		iVar6 = 15;
		iVar7 = 11;
		iVar1 = 285;
		break;

	case 252:
		iVar6 = 15;
		iVar7 = 12;
		iVar1 = 275;
		break;

	case 253:
		iVar6 = 15;
		iVar7 = 13;
		iVar1 = 105;
		break;

	case 254:
		iVar6 = 15;
		iVar7 = 14;
		iVar1 = 100;
		break;

	case 255:
		iVar6 = 15;
		iVar7 = 15;
		iVar1 = 95;
		break;
	}
	StringCopy(&Var2, "L_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256) {
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_175[iVar11] * Global_279980.f_15);
	}
	if (iParam0 >= 256) {
		Global_69523[0 /*14*/].f_5 = 3;
		func_164(iVar10, iParam0, 256);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			Global_69523[0 /*14*/].f_7 =
				system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_15);
		}
	}
	else {
		func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

// Position - 0x3B9E5
void func_189(int iParam0) {
	int iVar0;
	int iVar1;
	char *sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 3:
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 4:
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 5:
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 6:
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 7:
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 8:
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 9:
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 10:
		iVar6 = 10;
		iVar7 = 0;
		break;

	case 11:
		iVar6 = 11;
		iVar7 = 0;
		break;

	case 12:
		iVar6 = 12;
		iVar7 = 0;
		break;

	case 13:
		iVar6 = 13;
		iVar7 = 0;
		break;

	case 14:
		iVar6 = 14;
		iVar7 = 0;
		break;

	case 15:
		iVar6 = 15;
		iVar7 = 0;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 3;
		func_164(iVar10, iParam0, 16);
		return;
	}
	func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x3BB3A
void func_190(int iParam0) {
	int iVar0;
	int iVar1;
	char *sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		break;

	case 1:
		iVar6 = 1;
		iVar7 = 0;
		break;

	case 2:
		iVar6 = 1;
		iVar7 = 1;
		break;

	case 3:
		iVar6 = 1;
		iVar7 = 2;
		break;

	case 4:
		iVar6 = 1;
		iVar7 = 3;
		break;

	case 5:
		iVar6 = 1;
		iVar7 = 4;
		break;

	case 6:
		iVar6 = 2;
		iVar7 = 0;
		break;

	case 7:
		iVar6 = 2;
		iVar7 = 1;
		break;

	case 8:
		iVar6 = 2;
		iVar7 = 2;
		break;

	case 9:
		iVar6 = 2;
		iVar7 = 3;
		break;

	case 10:
		iVar6 = 2;
		iVar7 = 4;
		break;

	case 11:
		iVar6 = 3;
		iVar7 = 0;
		break;

	case 12:
		iVar6 = 3;
		iVar7 = 1;
		break;

	case 13:
		iVar6 = 3;
		iVar7 = 2;
		break;

	case 14:
		iVar6 = 3;
		iVar7 = 3;
		break;

	case 15:
		iVar6 = 3;
		iVar7 = 4;
		break;

	case 16:
		iVar6 = 4;
		iVar7 = 0;
		break;

	case 17:
		iVar6 = 4;
		iVar7 = 1;
		break;

	case 18:
		iVar6 = 4;
		iVar7 = 2;
		break;

	case 19:
		iVar6 = 4;
		iVar7 = 3;
		break;

	case 20:
		iVar6 = 4;
		iVar7 = 4;
		break;

	case 21:
		iVar6 = 5;
		iVar7 = 0;
		break;

	case 22:
		iVar6 = 5;
		iVar7 = 1;
		break;

	case 23:
		iVar6 = 5;
		iVar7 = 2;
		break;

	case 24:
		iVar6 = 5;
		iVar7 = 3;
		break;

	case 25:
		iVar6 = 5;
		iVar7 = 4;
		break;

	case 26:
		iVar6 = 6;
		iVar7 = 0;
		break;

	case 27:
		iVar6 = 6;
		iVar7 = 1;
		break;

	case 28:
		iVar6 = 6;
		iVar7 = 2;
		break;

	case 29:
		iVar6 = 6;
		iVar7 = 3;
		break;

	case 30:
		iVar6 = 6;
		iVar7 = 4;
		break;

	case 31:
		iVar6 = 7;
		iVar7 = 0;
		break;

	case 32:
		iVar6 = 7;
		iVar7 = 1;
		break;

	case 33:
		iVar6 = 7;
		iVar7 = 2;
		break;

	case 34:
		iVar6 = 7;
		iVar7 = 3;
		break;

	case 35:
		iVar6 = 7;
		iVar7 = 4;
		break;

	case 36:
		iVar6 = 8;
		iVar7 = 0;
		break;

	case 37:
		iVar6 = 8;
		iVar7 = 1;
		break;

	case 38:
		iVar6 = 8;
		iVar7 = 2;
		break;

	case 39:
		iVar6 = 8;
		iVar7 = 3;
		break;

	case 40:
		iVar6 = 8;
		iVar7 = 4;
		break;

	case 41:
		iVar6 = 9;
		iVar7 = 0;
		break;

	case 42:
		iVar6 = 9;
		iVar7 = 1;
		break;

	case 43:
		iVar6 = 9;
		iVar7 = 2;
		break;

	case 44:
		iVar6 = 9;
		iVar7 = 3;
		break;

	case 45:
		iVar6 = 9;
		iVar7 = 4;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 3;
		func_164(iVar10, iParam0, 46);
		return;
	}
	func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x3BE54
void func_191(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0) {
	case 0:
		StringCopy(&Var2, "U_FMM_0_0", 16);
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 250;
		break;

	case 1:
		StringCopy(&Var2, "U_FMM_0_1", 16);
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 210;
		break;

	case 2:
		StringCopy(&Var2, "U_FMM_0_2", 16);
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 50;
		break;

	case 3:
		StringCopy(&Var2, "U_FMM_0_3", 16);
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 90;
		break;

	case 4:
		StringCopy(&Var2, "U_FMM_0_4", 16);
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 210;
		break;

	case 5:
		StringCopy(&Var2, "U_FMM_0_5", 16);
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 200;
		break;

	case 6:
		StringCopy(&Var2, "U_FMM_0_6", 16);
		iVar6 = 0;
		iVar7 = 6;
		iVar0 = 1;
		break;

	case 7:
		StringCopy(&Var2, "U_FMM_0_7", 16);
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 130;
		break;

	case 8:
		StringCopy(&Var2, "U_FMM_0_8", 16);
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 220;
		break;

	case 9:
		StringCopy(&Var2, "U_FMM_0_9", 16);
		iVar6 = 0;
		iVar7 = 9;
		iVar0 = 1;
		break;

	case 10:
		StringCopy(&Var2, "U_FMM_0_10", 16);
		iVar6 = 0;
		iVar7 = 10;
		iVar0 = 1;
		break;

	case 11:
		StringCopy(&Var2, "U_FMM_0_11", 16);
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 220;
		break;

	case 12:
		StringCopy(&Var2, "U_FMM_0_12", 16);
		iVar6 = 0;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 13:
		StringCopy(&Var2, "U_FMM_0_13", 16);
		iVar6 = 0;
		iVar7 = 13;
		iVar0 = 1;
		break;

	case 14:
		StringCopy(&Var2, "U_FMM_0_14", 16);
		iVar6 = 0;
		iVar7 = 14;
		iVar0 = 1;
		break;

	case 15:
		StringCopy(&Var2, "U_FMM_0_15", 16);
		iVar6 = 0;
		iVar7 = 15;
		iVar0 = 1;
		break;

	case 16:
		StringCopy(&Var2, "U_FMM_1_0", 16);
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 45;
		break;

	case 17:
		StringCopy(&Var2, "U_FMM_1_1", 16);
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 60;
		break;

	case 18:
		StringCopy(&Var2, "U_FMM_1_2", 16);
		iVar6 = 1;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 19:
		StringCopy(&Var2, "U_FMM_1_3", 16);
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 40;
		break;

	case 20:
		StringCopy(&Var2, "U_FMM_1_4", 16);
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 315;
		break;

	case 21:
		StringCopy(&Var2, "U_FMM_1_5", 16);
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 215;
		break;

	case 22:
		StringCopy(&Var2, "U_FMM_1_6", 16);
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 265;
		break;

	case 23:
		StringCopy(&Var2, "U_FMM_1_7", 16);
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 45;
		break;

	case 24:
		StringCopy(&Var2, "U_FMM_1_8", 16);
		iVar6 = 1;
		iVar7 = 8;
		iVar1 = 205;
		break;

	case 25:
		StringCopy(&Var2, "U_FMM_1_9", 16);
		iVar6 = 1;
		iVar7 = 9;
		iVar0 = 1;
		break;

	case 26:
		StringCopy(&Var2, "U_FMM_1_10", 16);
		iVar6 = 1;
		iVar7 = 10;
		iVar0 = 1;
		break;

	case 27:
		StringCopy(&Var2, "U_FMM_1_11", 16);
		iVar6 = 1;
		iVar7 = 11;
		iVar1 = 60;
		break;

	case 28:
		StringCopy(&Var2, "U_FMM_1_12", 16);
		iVar6 = 1;
		iVar7 = 12;
		iVar1 = 55;
		break;

	case 29:
		StringCopy(&Var2, "U_FMM_1_13", 16);
		iVar6 = 1;
		iVar7 = 13;
		iVar0 = 1;
		break;

	case 30:
		StringCopy(&Var2, "U_FMM_1_14", 16);
		iVar6 = 1;
		iVar7 = 14;
		iVar1 = 170;
		break;

	case 31:
		StringCopy(&Var2, "U_FMM_1_15", 16);
		iVar6 = 1;
		iVar7 = 15;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 32:
		StringCopy(&Var2, "U_FMM_0_0", 16);
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 250;
		break;

	case 33:
		StringCopy(&Var2, "U_FMM_0_1", 16);
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 210;
		break;

	case 34:
		StringCopy(&Var2, "U_FMM_0_2", 16);
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 50;
		break;

	case 35:
		StringCopy(&Var2, "U_FMM_0_3", 16);
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 90;
		break;

	case 36:
		StringCopy(&Var2, "U_FMM_0_4", 16);
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 210;
		break;

	case 37:
		StringCopy(&Var2, "U_FMM_0_5", 16);
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 200;
		break;

	case 38:
		StringCopy(&Var2, "U_FMM_0_6", 16);
		iVar6 = 2;
		iVar7 = 6;
		iVar0 = 1;
		break;

	case 39:
		StringCopy(&Var2, "U_FMM_0_7", 16);
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 130;
		break;

	case 40:
		StringCopy(&Var2, "U_FMM_0_8", 16);
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 220;
		break;

	case 41:
		StringCopy(&Var2, "U_FMM_0_9", 16);
		iVar6 = 2;
		iVar7 = 9;
		iVar0 = 1;
		break;

	case 42:
		StringCopy(&Var2, "U_FMM_0_10", 16);
		iVar6 = 2;
		iVar7 = 10;
		iVar0 = 1;
		break;

	case 43:
		StringCopy(&Var2, "U_FMM_0_11", 16);
		iVar6 = 2;
		iVar7 = 11;
		iVar1 = 220;
		break;

	case 44:
		StringCopy(&Var2, "U_FMM_0_12", 16);
		iVar6 = 2;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 45:
		StringCopy(&Var2, "U_FMM_0_13", 16);
		iVar6 = 2;
		iVar7 = 13;
		iVar0 = 1;
		break;

	case 46:
		StringCopy(&Var2, "U_FMM_0_14", 16);
		iVar6 = 2;
		iVar7 = 14;
		iVar0 = 1;
		break;

	case 47:
		StringCopy(&Var2, "U_FMM_0_15", 16);
		iVar6 = 2;
		iVar7 = 15;
		iVar0 = 1;
		break;

	case 48:
		StringCopy(&Var2, "SP_FMM_3_0", 16);
		iVar6 = 3;
		iVar7 = 0;
		if (Global_262145.f_4180 != -1) {
			iVar1 = Global_262145.f_4180;
		}
		else {
			iVar1 = 165;
		}
		break;

	case 49:
		StringCopy(&Var2, "SP_FMM_3_1", 16);
		iVar6 = 3;
		iVar7 = 1;
		if (Global_262145.f_4188 != -1) {
			iVar1 = Global_262145.f_4188;
		}
		else {
			iVar1 = 120;
		}
		break;

	case 50:
		StringCopy(&Var2, "SP_FMM_3_2", 16);
		iVar6 = 3;
		iVar7 = 2;
		if (Global_262145.f_4183 != -1) {
			iVar1 = Global_262145.f_4183;
		}
		else {
			iVar1 = 115;
		}
		break;

	case 51:
		StringCopy(&Var2, "SP_FMM_3_3", 16);
		iVar6 = 3;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 52:
		StringCopy(&Var2, "SP_FMM_3_4", 16);
		iVar6 = 3;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 53:
		StringCopy(&Var2, "SP_FMM_3_5", 16);
		iVar6 = 3;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 54:
		StringCopy(&Var2, "SP_FMM_3_6", 16);
		iVar6 = 3;
		iVar7 = 6;
		iVar0 = 1;
		break;

	case 55:
		StringCopy(&Var2, "SP_FMM_3_7", 16);
		iVar6 = 3;
		iVar7 = 7;
		iVar0 = 1;
		break;

	case 56:
		StringCopy(&Var2, "SP_FMM_3_8", 16);
		iVar6 = 3;
		iVar7 = 8;
		iVar0 = 1;
		break;

	case 57:
		StringCopy(&Var2, "SP_FMM_3_9", 16);
		iVar6 = 3;
		iVar7 = 9;
		iVar0 = 1;
		break;

	case 58:
		StringCopy(&Var2, "SP_FMM_3_10", 16);
		iVar6 = 3;
		iVar7 = 10;
		iVar0 = 1;
		break;

	case 59:
		StringCopy(&Var2, "SP_FMM_3_11", 16);
		iVar6 = 3;
		iVar7 = 11;
		iVar0 = 1;
		break;

	case 60:
		StringCopy(&Var2, "SP_FMM_3_12", 16);
		iVar6 = 3;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 61:
		StringCopy(&Var2, "SP_FMM_3_13", 16);
		iVar6 = 3;
		iVar7 = 13;
		iVar0 = 1;
		break;

	case 62:
		StringCopy(&Var2, "SP_FMM_3_14", 16);
		iVar6 = 3;
		iVar7 = 14;
		iVar0 = 1;
		break;

	case 63:
		StringCopy(&Var2, "SP_FMM_3_15", 16);
		iVar6 = 3;
		iVar7 = 15;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 64:
		StringCopy(&Var2, "SP_FMM_3_0", 16);
		iVar6 = 4;
		iVar7 = 0;
		if (Global_262145.f_4180 != -1) {
			iVar1 = Global_262145.f_4180;
		}
		else {
			iVar1 = 165;
		}
		break;

	case 65:
		StringCopy(&Var2, "SP_FMM_3_1", 16);
		iVar6 = 4;
		iVar7 = 1;
		if (Global_262145.f_4188 != -1) {
			iVar1 = Global_262145.f_4188;
		}
		else {
			iVar1 = 120;
		}
		break;

	case 66:
		StringCopy(&Var2, "SP_FMM_3_2", 16);
		iVar6 = 4;
		iVar7 = 2;
		if (Global_262145.f_4183 != -1) {
			iVar1 = Global_262145.f_4183;
		}
		else {
			iVar1 = 115;
		}
		break;

	case 67:
		StringCopy(&Var2, "SP_FMM_3_3", 16);
		iVar6 = 4;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 68:
		StringCopy(&Var2, "SP_FMM_3_4", 16);
		iVar6 = 4;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 69:
		StringCopy(&Var2, "SP_FMM_3_5", 16);
		iVar6 = 4;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 70:
		StringCopy(&Var2, "SP_FMM_3_6", 16);
		iVar6 = 4;
		iVar7 = 6;
		iVar0 = 1;
		break;

	case 71:
		StringCopy(&Var2, "SP_FMM_3_7", 16);
		iVar6 = 4;
		iVar7 = 7;
		iVar0 = 1;
		break;

	case 72:
		StringCopy(&Var2, "SP_FMM_3_8", 16);
		iVar6 = 4;
		iVar7 = 8;
		iVar0 = 1;
		break;

	case 73:
		StringCopy(&Var2, "SP_FMM_3_9", 16);
		iVar6 = 4;
		iVar7 = 9;
		iVar0 = 1;
		break;

	case 74:
		StringCopy(&Var2, "SP_FMM_3_10", 16);
		iVar6 = 4;
		iVar7 = 10;
		iVar0 = 1;
		break;

	case 75:
		StringCopy(&Var2, "SP_FMM_3_11", 16);
		iVar6 = 4;
		iVar7 = 11;
		iVar0 = 1;
		break;

	case 76:
		StringCopy(&Var2, "SP_FMM_3_12", 16);
		iVar6 = 4;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 77:
		StringCopy(&Var2, "SP_FMM_3_13", 16);
		iVar6 = 4;
		iVar7 = 13;
		iVar0 = 1;
		break;

	case 78:
		StringCopy(&Var2, "SP_FMM_3_14", 16);
		iVar6 = 4;
		iVar7 = 14;
		iVar0 = 1;
		break;

	case 79:
		StringCopy(&Var2, "SP_FMM_3_15", 16);
		iVar6 = 4;
		iVar7 = 15;
		iVar0 = 1;
		break;

	case 80:
		StringCopy(&Var2, "U_FMM_5_0", 16);
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 80;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[80]);
		break;

	case 81:
		StringCopy(&Var2, "U_FMM_5_1", 16);
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 45;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[81]);
		break;

	case 82:
		StringCopy(&Var2, "U_FMM_5_2", 16);
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 50;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[82]);
		break;

	case 83:
		StringCopy(&Var2, "U_FMM_5_3", 16);
		iVar6 = 5;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 84:
		StringCopy(&Var2, "U_FMM_5_4", 16);
		iVar6 = 5;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 85:
		StringCopy(&Var2, "U_FMM_5_5", 16);
		iVar6 = 5;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 86:
		StringCopy(&Var2, "U_FMM_5_6", 16);
		iVar6 = 5;
		iVar7 = 6;
		iVar0 = 1;
		break;

	case 87:
		StringCopy(&Var2, "U_FMM_5_7", 16);
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 50;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[87]);
		break;

	case 88:
		StringCopy(&Var2, "U_FMM_5_8", 16);
		iVar6 = 5;
		iVar7 = 8;
		iVar0 = 1;
		break;

	case 89:
		StringCopy(&Var2, "U_FMM_5_9", 16);
		iVar6 = 5;
		iVar7 = 9;
		iVar0 = 1;
		break;

	case 90:
		StringCopy(&Var2, "U_FMM_5_10", 16);
		iVar6 = 5;
		iVar7 = 10;
		iVar0 = 1;
		break;

	case 91:
		StringCopy(&Var2, "U_FMM_5_11", 16);
		iVar6 = 5;
		iVar7 = 11;
		iVar0 = 1;
		break;

	case 92:
		StringCopy(&Var2, "U_FMM_5_12", 16);
		iVar6 = 5;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 93:
		StringCopy(&Var2, "U_FMM_5_13", 16);
		iVar6 = 5;
		iVar7 = 13;
		iVar0 = 1;
		break;

	case 94:
		StringCopy(&Var2, "U_FMM_5_14", 16);
		iVar6 = 5;
		iVar7 = 14;
		iVar0 = 1;
		break;

	case 95:
		StringCopy(&Var2, "U_FMM_5_15", 16);
		iVar6 = 5;
		iVar7 = 15;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 96:
		StringCopy(&Var2, "SP_FMM_6_0", 16);
		iVar6 = 6;
		iVar7 = 0;
		if (Global_262145.f_4201 != -1) {
			iVar1 = Global_262145.f_4201;
		}
		else {
			iVar1 = 420;
		}
		break;

	case 97:
		StringCopy(&Var2, "SP_FMM_6_1", 16);
		iVar6 = 6;
		iVar7 = 1;
		if (Global_262145.f_4199 != -1) {
			iVar1 = Global_262145.f_4199;
		}
		else {
			iVar1 = 415;
		}
		break;

	case 98:
		StringCopy(&Var2, "SP_FMM_6_2", 16);
		iVar6 = 6;
		iVar7 = 2;
		if (Global_262145.f_4179 != -1) {
			iVar1 = Global_262145.f_4179;
		}
		else {
			iVar1 = 440;
		}
		break;

	case 99:
		StringCopy(&Var2, "SP_FMM_6_3", 16);
		iVar6 = 6;
		iVar7 = 3;
		if (Global_262145.f_4193 != -1) {
			iVar1 = Global_262145.f_4193;
		}
		else {
			iVar1 = 400;
		}
		break;

	case 100:
		StringCopy(&Var2, "SP_FMM_6_4", 16);
		iVar6 = 6;
		iVar7 = 4;
		if (Global_262145.f_4178 != -1) {
			iVar1 = Global_262145.f_4178;
		}
		else {
			iVar1 = 400;
		}
		break;

	case 101:
		StringCopy(&Var2, "SP_FMM_6_5", 16);
		iVar6 = 6;
		iVar7 = 5;
		if (Global_262145.f_4195 != -1) {
			iVar1 = Global_262145.f_4195;
		}
		else {
			iVar1 = 410;
		}
		break;

	case 102:
		StringCopy(&Var2, "SP_FMM_6_6", 16);
		iVar6 = 6;
		iVar7 = 6;
		if (Global_262145.f_4198 != -1) {
			iVar1 = Global_262145.f_4198;
		}
		else {
			iVar1 = 435;
		}
		break;

	case 103:
		StringCopy(&Var2, "SP_FMM_6_7", 16);
		iVar6 = 6;
		iVar7 = 7;
		if (Global_262145.f_4194 != -1) {
			iVar1 = Global_262145.f_4194;
		}
		else {
			iVar1 = 425;
		}
		break;

	case 104:
		StringCopy(&Var2, "SP_FMM_6_8", 16);
		iVar6 = 6;
		iVar7 = 8;
		if (Global_262145.f_4187 != -1) {
			iVar1 = Global_262145.f_4187;
		}
		else {
			iVar1 = 435;
		}
		break;

	case 105:
		StringCopy(&Var2, "SP_FMM_6_9", 16);
		iVar6 = 6;
		iVar7 = 9;
		if (Global_262145.f_4192 != -1) {
			iVar1 = Global_262145.f_4192;
		}
		else {
			iVar1 = 420;
		}
		break;

	case 106:
		StringCopy(&Var2, "SP_FMM_6_10", 16);
		iVar6 = 6;
		iVar7 = 10;
		if (Global_262145.f_4190 != -1) {
			iVar1 = Global_262145.f_4190;
		}
		else {
			iVar1 = 425;
		}
		break;

	case 107:
		StringCopy(&Var2, "SP_FMM_6_11", 16);
		iVar6 = 6;
		iVar7 = 11;
		if (Global_262145.f_4200 != -1) {
			iVar1 = Global_262145.f_4200;
		}
		else {
			iVar1 = 425;
		}
		break;

	case 108:
		StringCopy(&Var2, "SP_FMM_6_12", 16);
		iVar6 = 6;
		iVar7 = 12;
		if (Global_262145.f_4186 != -1) {
			iVar1 = Global_262145.f_4186;
		}
		else {
			iVar1 = 435;
		}
		break;

	case 109:
		StringCopy(&Var2, "SP_FMM_6_13", 16);
		iVar6 = 6;
		iVar7 = 13;
		if (Global_262145.f_4181 != -1) {
			iVar1 = Global_262145.f_4181;
		}
		else {
			iVar1 = 750;
		}
		break;

	case 110:
		StringCopy(&Var2, "SP_FMM_6_14", 16);
		iVar6 = 6;
		iVar7 = 14;
		if (Global_262145.f_4196 != -1) {
			iVar1 = Global_262145.f_4196;
		}
		else {
			iVar1 = 400;
		}
		break;

	case 111:
		StringCopy(&Var2, "SP_FMM_6_15", 16);
		iVar6 = 6;
		iVar7 = 15;
		if (Global_262145.f_4189 != -1) {
			iVar1 = Global_262145.f_4189;
		}
		else {
			iVar1 = 435;
		}
		break;

	case 112:
		StringCopy(&Var2, "SP_FMM_6_0", 16);
		iVar6 = 7;
		iVar7 = 0;
		if (Global_262145.f_4201 != -1) {
			iVar1 = Global_262145.f_4201;
		}
		else {
			iVar1 = 420;
		}
		break;

	case 113:
		StringCopy(&Var2, "SP_FMM_6_1", 16);
		iVar6 = 7;
		iVar7 = 1;
		if (Global_262145.f_4199 != -1) {
			iVar1 = Global_262145.f_4199;
		}
		else {
			iVar1 = 415;
		}
		break;

	case 114:
		StringCopy(&Var2, "SP_FMM_6_2", 16);
		iVar6 = 7;
		iVar7 = 2;
		if (Global_262145.f_4179 != -1) {
			iVar1 = Global_262145.f_4179;
		}
		else {
			iVar1 = 440;
		}
		break;

	case 115:
		StringCopy(&Var2, "SP_FMM_6_3", 16);
		iVar6 = 7;
		iVar7 = 3;
		if (Global_262145.f_4193 != -1) {
			iVar1 = Global_262145.f_4193;
		}
		else {
			iVar1 = 400;
		}
		break;

	case 116:
		StringCopy(&Var2, "SP_FMM_6_4", 16);
		iVar6 = 7;
		iVar7 = 4;
		if (Global_262145.f_4178 != -1) {
			iVar1 = Global_262145.f_4178;
		}
		else {
			iVar1 = 400;
		}
		break;

	case 117:
		StringCopy(&Var2, "SP_FMM_6_5", 16);
		iVar6 = 7;
		iVar7 = 5;
		if (Global_262145.f_4195 != -1) {
			iVar1 = Global_262145.f_4195;
		}
		else {
			iVar1 = 410;
		}
		break;

	case 118:
		StringCopy(&Var2, "SP_FMM_6_6", 16);
		iVar6 = 7;
		iVar7 = 6;
		if (Global_262145.f_4198 != -1) {
			iVar1 = Global_262145.f_4198;
		}
		else {
			iVar1 = 435;
		}
		break;

	case 119:
		StringCopy(&Var2, "SP_FMM_6_7", 16);
		iVar6 = 7;
		iVar7 = 7;
		if (Global_262145.f_4194 != -1) {
			iVar1 = Global_262145.f_4194;
		}
		else {
			iVar1 = 425;
		}
		break;

	case 120:
		StringCopy(&Var2, "SP_FMM_6_8", 16);
		iVar6 = 7;
		iVar7 = 8;
		if (Global_262145.f_4187 != -1) {
			iVar1 = Global_262145.f_4187;
		}
		else {
			iVar1 = 435;
		}
		break;

	case 121:
		StringCopy(&Var2, "SP_FMM_6_9", 16);
		iVar6 = 7;
		iVar7 = 9;
		if (Global_262145.f_4192 != -1) {
			iVar1 = Global_262145.f_4192;
		}
		else {
			iVar1 = 420;
		}
		break;

	case 122:
		StringCopy(&Var2, "SP_FMM_6_10", 16);
		iVar6 = 7;
		iVar7 = 10;
		if (Global_262145.f_4190 != -1) {
			iVar1 = Global_262145.f_4190;
		}
		else {
			iVar1 = 425;
		}
		break;

	case 123:
		StringCopy(&Var2, "SP_FMM_6_11", 16);
		iVar6 = 7;
		iVar7 = 11;
		if (Global_262145.f_4200 != -1) {
			iVar1 = Global_262145.f_4200;
		}
		else {
			iVar1 = 425;
		}
		break;

	case 124:
		StringCopy(&Var2, "SP_FMM_6_12", 16);
		iVar6 = 7;
		iVar7 = 12;
		if (Global_262145.f_4186 != -1) {
			iVar1 = Global_262145.f_4186;
		}
		else {
			iVar1 = 435;
		}
		break;

	case 125:
		StringCopy(&Var2, "SP_FMM_6_13", 16);
		iVar6 = 7;
		iVar7 = 13;
		if (Global_262145.f_4181 != -1) {
			iVar1 = Global_262145.f_4181;
		}
		else {
			iVar1 = 750;
		}
		break;

	case 126:
		StringCopy(&Var2, "SP_FMM_6_14", 16);
		iVar6 = 7;
		iVar7 = 14;
		if (Global_262145.f_4196 != -1) {
			iVar1 = Global_262145.f_4196;
		}
		else {
			iVar1 = 400;
		}
		break;

	case 127:
		StringCopy(&Var2, "SP_FMM_6_15", 16);
		iVar6 = 7;
		iVar7 = 15;
		if (Global_262145.f_4189 != -1) {
			iVar1 = Global_262145.f_4189;
		}
		else {
			iVar1 = 435;
		}
		break;
	}
	switch (iParam0) {
	case 128:
		StringCopy(&Var2, "U_FMM_8_0", 16);
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 45;
		break;

	case 129:
		StringCopy(&Var2, "U_FMM_8_1", 16);
		iVar6 = 8;
		iVar7 = 1;
		iVar0 = 1;
		break;

	case 130:
		StringCopy(&Var2, "U_FMM_8_2", 16);
		iVar6 = 8;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 131:
		StringCopy(&Var2, "U_FMM_8_3", 16);
		iVar6 = 8;
		iVar7 = 3;
		iVar0 = 1;
		break;

	case 132:
		StringCopy(&Var2, "U_FMM_8_4", 16);
		iVar6 = 8;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 133:
		StringCopy(&Var2, "U_FMM_8_5", 16);
		iVar6 = 8;
		iVar7 = 5;
		iVar0 = 1;
		break;

	case 134:
		StringCopy(&Var2, "U_FMM_8_6", 16);
		iVar6 = 8;
		iVar7 = 6;
		iVar0 = 1;
		break;

	case 135:
		StringCopy(&Var2, "U_FMM_8_7", 16);
		iVar6 = 8;
		iVar7 = 7;
		iVar0 = 1;
		break;

	case 136:
		StringCopy(&Var2, "U_FMM_8_8", 16);
		iVar6 = 8;
		iVar7 = 8;
		iVar0 = 1;
		break;

	case 137:
		StringCopy(&Var2, "U_FMM_8_9", 16);
		iVar6 = 8;
		iVar7 = 9;
		iVar0 = 1;
		break;

	case 138:
		StringCopy(&Var2, "U_FMM_8_10", 16);
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 65;
		break;

	case 139:
		StringCopy(&Var2, "U_FMM_8_11", 16);
		iVar6 = 8;
		iVar7 = 11;
		iVar0 = 1;
		break;

	case 140:
		StringCopy(&Var2, "U_FMM_8_12", 16);
		iVar6 = 8;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 141:
		StringCopy(&Var2, "U_FMM_8_13", 16);
		iVar6 = 8;
		iVar7 = 13;
		iVar1 = 40;
		break;

	case 142:
		StringCopy(&Var2, "U_FMM_8_14", 16);
		iVar6 = 8;
		iVar7 = 14;
		iVar1 = 45;
		break;

	case 143:
		StringCopy(&Var2, "U_FMM_8_15", 16);
		iVar6 = 8;
		iVar7 = 15;
		iVar0 = 1;
		break;

	case 144:
		StringCopy(&Var2, "U_FMM_9_0", 16);
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 265;
		break;

	case 145:
		StringCopy(&Var2, "U_FMM_9_1", 16);
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 340;
		break;

	case 146:
		StringCopy(&Var2, "U_FMM_9_2", 16);
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 335;
		break;

	case 147:
		StringCopy(&Var2, "U_FMM_9_3", 16);
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 330;
		break;

	case 148:
		StringCopy(&Var2, "U_FMM_9_4", 16);
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 345;
		break;

	case 149:
		StringCopy(&Var2, "U_FMM_9_5", 16);
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 550;
		break;

	case 150:
		StringCopy(&Var2, "U_FMM_9_6", 16);
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 340;
		break;

	case 151:
		StringCopy(&Var2, "U_FMM_9_7", 16);
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 295;
		break;

	case 152:
		StringCopy(&Var2, "U_FMM_9_8", 16);
		iVar6 = 9;
		iVar7 = 8;
		iVar0 = 1;
		break;

	case 153:
		StringCopy(&Var2, "U_FMM_9_9", 16);
		iVar6 = 9;
		iVar7 = 9;
		iVar0 = 1;
		break;

	case 154:
		StringCopy(&Var2, "U_FMM_9_10", 16);
		iVar6 = 9;
		iVar7 = 10;
		iVar1 = 545;
		break;

	case 155:
		StringCopy(&Var2, "U_FMM_9_11", 16);
		iVar6 = 9;
		iVar7 = 11;
		iVar1 = 345;
		break;

	case 156:
		StringCopy(&Var2, "U_FMM_9_12", 16);
		iVar6 = 9;
		iVar7 = 12;
		iVar1 = 315;
		break;

	case 157:
		StringCopy(&Var2, "U_FMM_9_13", 16);
		iVar6 = 9;
		iVar7 = 13;
		iVar1 = 520;
		break;

	case 158:
		StringCopy(&Var2, "U_FMM_9_14", 16);
		iVar6 = 9;
		iVar7 = 14;
		iVar1 = 325;
		break;

	case 159:
		StringCopy(&Var2, "U_FMM_9_15", 16);
		iVar6 = 9;
		iVar7 = 15;
		iVar1 = 330;
		break;
	}
	switch (iParam0) {
	case 160:
		StringCopy(&Var2, "SP_FMM_10_0", 16);
		iVar6 = 10;
		iVar7 = 0;
		if (Global_262145.f_4201 != -1) {
			iVar1 = Global_262145.f_4201;
		}
		else {
			iVar1 = 405;
		}
		break;

	case 161:
		StringCopy(&Var2, "SP_FMM_10_1", 16);
		iVar6 = 10;
		iVar7 = 1;
		if (Global_262145.f_4199 != -1) {
			iVar1 = Global_262145.f_4199;
		}
		else {
			iVar1 = 400;
		}
		break;

	case 162:
		StringCopy(&Var2, "SP_FMM_10_2", 16);
		iVar6 = 10;
		iVar7 = 2;
		if (Global_262145.f_4185 != -1) {
			iVar1 = Global_262145.f_4185;
		}
		else {
			iVar1 = 425;
		}
		break;

	case 163:
		StringCopy(&Var2, "SP_FMM_10_3", 16);
		iVar6 = 10;
		iVar7 = 3;
		if (Global_262145.f_4193 != -1) {
			iVar1 = Global_262145.f_4193;
		}
		else {
			iVar1 = 385;
		}
		break;

	case 164:
		StringCopy(&Var2, "SP_FMM_10_4", 16);
		iVar6 = 10;
		iVar7 = 4;
		if (Global_262145.f_4178 != -1) {
			iVar1 = Global_262145.f_4178;
		}
		else {
			iVar1 = 385;
		}
		break;

	case 165:
		StringCopy(&Var2, "SP_FMM_10_5", 16);
		iVar6 = 10;
		iVar7 = 5;
		if (Global_262145.f_4195 != -1) {
			iVar1 = Global_262145.f_4195;
		}
		else {
			iVar1 = 395;
		}
		break;

	case 166:
		StringCopy(&Var2, "SP_FMM_10_6", 16);
		iVar6 = 10;
		iVar7 = 6;
		if (Global_262145.f_4184 != -1) {
			iVar1 = Global_262145.f_4184;
		}
		else {
			iVar1 = 500;
		}
		break;

	case 167:
		StringCopy(&Var2, "SP_FMM_10_7", 16);
		iVar6 = 10;
		iVar7 = 7;
		if (Global_262145.f_4198 != -1) {
			iVar1 = Global_262145.f_4198;
		}
		else {
			iVar1 = 420;
		}
		break;

	case 168:
		StringCopy(&Var2, "SP_FMM_10_8", 16);
		iVar6 = 10;
		iVar7 = 8;
		if (Global_262145.f_4194 != -1) {
			iVar1 = Global_262145.f_4194;
		}
		else {
			iVar1 = 410;
		}
		break;

	case 169:
		StringCopy(&Var2, "SP_FMM_10_9", 16);
		iVar6 = 10;
		iVar7 = 9;
		if (Global_262145.f_4187 != -1) {
			iVar1 = Global_262145.f_4187;
		}
		else {
			iVar1 = 420;
		}
		break;

	case 170:
		StringCopy(&Var2, "SP_FMM_10_10", 16);
		iVar6 = 10;
		iVar7 = 10;
		if (Global_262145.f_4192 != -1) {
			iVar1 = Global_262145.f_4192;
		}
		else {
			iVar1 = 405;
		}
		break;

	case 171:
		StringCopy(&Var2, "SP_FMM_10_11", 16);
		iVar6 = 10;
		iVar7 = 11;
		if (Global_262145.f_4190 != -1) {
			iVar1 = Global_262145.f_4190;
		}
		else {
			iVar1 = 410;
		}
		break;

	case 172:
		StringCopy(&Var2, "SP_FMM_10_12", 16);
		iVar6 = 10;
		iVar7 = 12;
		if (Global_262145.f_4182 != -1) {
			iVar1 = Global_262145.f_4182;
		}
		else {
			iVar1 = 420;
		}
		break;

	case 173:
		StringCopy(&Var2, "SP_FMM_10_13", 16);
		iVar6 = 10;
		iVar7 = 13;
		if (Global_262145.f_4197 != -1) {
			iVar1 = Global_262145.f_4197;
		}
		else {
			iVar1 = 420;
		}
		break;

	case 174:
		StringCopy(&Var2, "SP_FMM_10_14", 16);
		iVar6 = 10;
		iVar7 = 14;
		if (Global_262145.f_4200 != -1) {
			iVar1 = Global_262145.f_4200;
		}
		else {
			iVar1 = 410;
		}
		break;

	case 175:
		StringCopy(&Var2, "SP_FMM_10_15", 16);
		iVar6 = 10;
		iVar7 = 15;
		if (Global_262145.f_4191 != -1) {
			iVar1 = Global_262145.f_4191;
		}
		else {
			iVar1 = 460;
		}
		break;

	case 176:
		StringCopy(&Var2, "SP_FMM_10_0", 16);
		iVar6 = 11;
		iVar7 = 0;
		if (Global_262145.f_4201 != -1) {
			iVar1 = Global_262145.f_4201;
		}
		else {
			iVar1 = 405;
		}
		break;

	case 177:
		StringCopy(&Var2, "SP_FMM_10_1", 16);
		iVar6 = 11;
		iVar7 = 1;
		if (Global_262145.f_4199 != -1) {
			iVar1 = Global_262145.f_4199;
		}
		else {
			iVar1 = 400;
		}
		break;

	case 178:
		StringCopy(&Var2, "SP_FMM_10_2", 16);
		iVar6 = 11;
		iVar7 = 2;
		if (Global_262145.f_4185 != -1) {
			iVar1 = Global_262145.f_4185;
		}
		else {
			iVar1 = 425;
		}
		break;

	case 179:
		StringCopy(&Var2, "SP_FMM_10_3", 16);
		iVar6 = 11;
		iVar7 = 3;
		if (Global_262145.f_4193 != -1) {
			iVar1 = Global_262145.f_4193;
		}
		else {
			iVar1 = 385;
		}
		break;

	case 180:
		StringCopy(&Var2, "SP_FMM_10_4", 16);
		iVar6 = 11;
		iVar7 = 4;
		if (Global_262145.f_4178 != -1) {
			iVar1 = Global_262145.f_4178;
		}
		else {
			iVar1 = 385;
		}
		break;

	case 181:
		StringCopy(&Var2, "SP_FMM_10_5", 16);
		iVar6 = 11;
		iVar7 = 5;
		if (Global_262145.f_4195 != -1) {
			iVar1 = Global_262145.f_4195;
		}
		else {
			iVar1 = 395;
		}
		break;

	case 182:
		StringCopy(&Var2, "SP_FMM_10_6", 16);
		iVar6 = 11;
		iVar7 = 6;
		if (Global_262145.f_4184 != -1) {
			iVar1 = Global_262145.f_4184;
		}
		else {
			iVar1 = 500;
		}
		break;

	case 183:
		StringCopy(&Var2, "SP_FMM_10_7", 16);
		iVar6 = 11;
		iVar7 = 7;
		if (Global_262145.f_4198 != -1) {
			iVar1 = Global_262145.f_4198;
		}
		else {
			iVar1 = 420;
		}
		break;

	case 184:
		StringCopy(&Var2, "SP_FMM_10_8", 16);
		iVar6 = 11;
		iVar7 = 8;
		if (Global_262145.f_4194 != -1) {
			iVar1 = Global_262145.f_4194;
		}
		else {
			iVar1 = 410;
		}
		break;

	case 185:
		StringCopy(&Var2, "SP_FMM_10_9", 16);
		iVar6 = 11;
		iVar7 = 9;
		if (Global_262145.f_4187 != -1) {
			iVar1 = Global_262145.f_4187;
		}
		else {
			iVar1 = 420;
		}
		break;

	case 186:
		StringCopy(&Var2, "SP_FMM_10_10", 16);
		iVar6 = 11;
		iVar7 = 10;
		if (Global_262145.f_4192 != -1) {
			iVar1 = Global_262145.f_4192;
		}
		else {
			iVar1 = 405;
		}
		break;

	case 187:
		StringCopy(&Var2, "SP_FMM_10_11", 16);
		iVar6 = 11;
		iVar7 = 11;
		if (Global_262145.f_4190 != -1) {
			iVar1 = Global_262145.f_4190;
		}
		else {
			iVar1 = 410;
		}
		break;

	case 188:
		StringCopy(&Var2, "SP_FMM_10_12", 16);
		iVar6 = 11;
		iVar7 = 12;
		if (Global_262145.f_4182 != -1) {
			iVar1 = Global_262145.f_4182;
		}
		else {
			iVar1 = 420;
		}
		break;

	case 189:
		StringCopy(&Var2, "SP_FMM_10_13", 16);
		iVar6 = 11;
		iVar7 = 13;
		if (Global_262145.f_4197 != -1) {
			iVar1 = Global_262145.f_4197;
		}
		else {
			iVar1 = 420;
		}
		break;

	case 190:
		StringCopy(&Var2, "SP_FMM_10_14", 16);
		iVar6 = 11;
		iVar7 = 14;
		if (Global_262145.f_4200 != -1) {
			iVar1 = Global_262145.f_4200;
		}
		else {
			iVar1 = 410;
		}
		break;

	case 191:
		StringCopy(&Var2, "SP_FMM_10_15", 16);
		iVar6 = 11;
		iVar7 = 15;
		if (Global_262145.f_4191 != -1) {
			iVar1 = Global_262145.f_4191;
		}
		else {
			iVar1 = 460;
		}
		break;
	}
	switch (iParam0) {
	case 192:
		StringCopy(&Var2, "U_FMM_12_0", 16);
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 420;
		break;

	case 193:
		StringCopy(&Var2, "U_FMM_12_1", 16);
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 415;
		break;

	case 194:
		StringCopy(&Var2, "U_FMM_12_2", 16);
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 695;
		break;

	case 195:
		StringCopy(&Var2, "U_FMM_12_3", 16);
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 385;
		break;

	case 196:
		StringCopy(&Var2, "U_FMM_12_4", 16);
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 330;
		break;

	case 197:
		StringCopy(&Var2, "U_FMM_12_5", 16);
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 345;
		break;

	case 198:
		StringCopy(&Var2, "U_FMM_12_6", 16);
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 340;
		break;

	case 199:
		StringCopy(&Var2, "U_FMM_12_7", 16);
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 450;
		break;

	case 200:
		StringCopy(&Var2, "U_FMM_12_8", 16);
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 295;
		break;

	case 201:
		StringCopy(&Var2, "U_FMM_12_9", 16);
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 340;
		break;

	case 202:
		StringCopy(&Var2, "U_FMM_12_10", 16);
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 1060;
		break;

	case 203:
		StringCopy(&Var2, "U_FMM_12_11", 16);
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 1040;
		break;

	case 204:
		StringCopy(&Var2, "U_FMM_12_12", 16);
		iVar6 = 12;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 205:
		StringCopy(&Var2, "U_FMM_12_13", 16);
		iVar6 = 12;
		iVar7 = 13;
		iVar0 = 1;
		break;

	case 206:
		StringCopy(&Var2, "U_FMM_12_14", 16);
		iVar6 = 12;
		iVar7 = 14;
		iVar0 = 1;
		break;

	case 207:
		StringCopy(&Var2, "U_FMM_12_15", 16);
		iVar6 = 12;
		iVar7 = 15;
		iVar0 = 1;
		break;

	case 208:
		StringCopy(&Var2, "U_FMM_13_0", 16);
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 420;
		break;

	case 209:
		StringCopy(&Var2, "U_FMM_13_1", 16);
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 415;
		break;

	case 210:
		StringCopy(&Var2, "U_FMM_13_2", 16);
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 680;
		break;

	case 211:
		StringCopy(&Var2, "U_FMM_13_3", 16);
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 385;
		break;

	case 212:
		StringCopy(&Var2, "U_FMM_13_4", 16);
		iVar6 = 13;
		iVar7 = 4;
		iVar0 = 1;
		break;

	case 213:
		StringCopy(&Var2, "U_FMM_13_5", 16);
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 345;
		break;

	case 214:
		StringCopy(&Var2, "U_FMM_13_6", 16);
		iVar6 = 13;
		iVar7 = 6;
		iVar0 = 1;
		break;

	case 215:
		StringCopy(&Var2, "U_FMM_13_7", 16);
		iVar6 = 13;
		iVar7 = 7;
		iVar0 = 1;
		break;

	case 216:
		StringCopy(&Var2, "U_FMM_13_8", 16);
		iVar6 = 13;
		iVar7 = 8;
		iVar0 = 1;
		break;

	case 217:
		StringCopy(&Var2, "U_FMM_13_9", 16);
		iVar6 = 13;
		iVar7 = 9;
		iVar0 = 1;
		break;

	case 218:
		StringCopy(&Var2, "U_FMM_13_10", 16);
		iVar6 = 13;
		iVar7 = 10;
		iVar0 = 1;
		break;

	case 219:
		StringCopy(&Var2, "U_FMM_13_11", 16);
		iVar6 = 13;
		iVar7 = 11;
		iVar0 = 1;
		break;

	case 220:
		StringCopy(&Var2, "U_FMM_13_12", 16);
		iVar6 = 13;
		iVar7 = 12;
		iVar0 = 1;
		break;

	case 221:
		StringCopy(&Var2, "U_FMM_13_13", 16);
		iVar6 = 13;
		iVar7 = 13;
		iVar1 = 1065;
		break;

	case 222:
		StringCopy(&Var2, "U_FMM_13_14", 16);
		iVar6 = 13;
		iVar7 = 14;
		iVar0 = 1;
		break;

	case 223:
		StringCopy(&Var2, "U_FMM_13_15", 16);
		iVar6 = 13;
		iVar7 = 15;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 224:
		StringCopy(&Var2, "U_FMM_1_0", 16);
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 45;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[16]);
		break;

	case 225:
		StringCopy(&Var2, "U_FMM_1_1", 16);
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 60;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[17]);
		break;

	case 226:
		StringCopy(&Var2, "U_FMM_1_2", 16);
		iVar6 = 14;
		iVar7 = 2;
		iVar0 = 1;
		break;

	case 227:
		StringCopy(&Var2, "U_FMM_1_3", 16);
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 40;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[19]);
		break;

	case 228:
		StringCopy(&Var2, "U_FMM_1_4", 16);
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 315;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[20]);
		break;

	case 229:
		StringCopy(&Var2, "U_FMM_1_5", 16);
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 215;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[21]);
		break;

	case 230:
		StringCopy(&Var2, "U_FMM_1_6", 16);
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 265;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[22]);
		break;

	case 231:
		StringCopy(&Var2, "U_FMM_1_7", 16);
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 45;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[23]);
		break;

	case 232:
		StringCopy(&Var2, "U_FMM_1_8", 16);
		iVar6 = 14;
		iVar7 = 8;
		iVar1 = 205;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[24]);
		break;

	case 233:
		StringCopy(&Var2, "U_FMM_1_9", 16);
		iVar6 = 14;
		iVar7 = 9;
		iVar0 = 1;
		break;

	case 234:
		StringCopy(&Var2, "U_FMM_1_10", 16);
		iVar6 = 14;
		iVar7 = 10;
		iVar0 = 1;
		break;

	case 235:
		StringCopy(&Var2, "U_FMM_1_11", 16);
		iVar6 = 14;
		iVar7 = 11;
		iVar1 = 60;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[27]);
		break;

	case 236:
		StringCopy(&Var2, "U_FMM_1_12", 16);
		iVar6 = 14;
		iVar7 = 12;
		iVar1 = 55;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[28]);
		break;

	case 237:
		StringCopy(&Var2, "U_FMM_1_13", 16);
		iVar6 = 14;
		iVar7 = 13;
		iVar0 = 1;
		break;

	case 238:
		StringCopy(&Var2, "U_FMM_1_14", 16);
		iVar6 = 14;
		iVar7 = 14;
		iVar1 = 170;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[30]);
		break;

	case 239:
		StringCopy(&Var2, "U_FMM_1_15", 16);
		iVar6 = 14;
		iVar7 = 15;
		iVar0 = 1;
		break;

	case 240:
		StringCopy(&Var2, "U_FMM_15_0", 16);
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 0;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[32]);
		break;
	}
	if (iParam0 == 23 || iParam0 == 231) {
		if (func_101(89, -1)) {
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = system::round(system::to_float(1250) * Global_262145.f_2979);
		}
		else {
			iVar1 = system::round(system::to_float(45) * Global_262145.f_432[23]);
		}
	}
	else if (iParam0 == 17 || iParam0 == 225) {
		if (func_101(88, -1)) {
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = system::round(system::to_float(450) * Global_262145.f_2978);
		}
		else {
			iVar1 = system::round(system::to_float(60) * Global_262145.f_432[17]);
		}
	}
	else if (iParam0 == 28 || iParam0 == 236) {
		if (func_101(87, -1)) {
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = system::round(system::to_float(500) * Global_262145.f_2977);
		}
		else {
			iVar1 = system::round(system::to_float(55) * Global_262145.f_432[28]);
		}
	}
	else if (iParam0 >= 0 && iParam0 < 32) {
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[iVar11]);
		}
	}
	else if (iParam0 >= 32 && iParam0 < 48) {
		iVar12 = iParam0 - 32;
		if (iVar12 >= 0 && iVar12 < 237) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[iVar12]);
		}
	}
	else if (iParam0 >= 128 && iParam0 < 160) {
		iVar13 = iParam0 - 160 + 124;
		if (iVar13 >= 0 && iVar13 < 237) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[iVar13]);
		}
	}
	else if (iParam0 >= 192 && iParam0 < 224) {
		iVar14 = iParam0 - 160 + 188;
		if (iVar14 >= 0 && iVar14 < 237) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[iVar14]);
		}
	}
	iVar1 = system::round(system::to_float(iVar1) * Global_279980.f_16);
	if (iParam0 >= 241) {
		Global_69523[0 /*14*/].f_5 = 3;
		func_164(iVar10, iParam0, 241);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			Global_69523[0 /*14*/].f_7 =
				system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_16);
		}
	}
	else {
		func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

// Position - 0x3E369
void func_192(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 250;
		break;

	case 1:
		iVar6 = 0;
		iVar7 = 1;
		iVar1 = 210;
		break;

	case 2:
		iVar6 = 0;
		iVar7 = 2;
		iVar1 = 50;
		break;

	case 3:
		iVar6 = 0;
		iVar7 = 3;
		iVar1 = 90;
		break;

	case 4:
		iVar6 = 0;
		iVar7 = 4;
		iVar1 = 210;
		break;

	case 5:
		iVar6 = 0;
		iVar7 = 5;
		iVar1 = 200;
		break;

	case 6:
		iVar6 = 0;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 7:
		iVar6 = 0;
		iVar7 = 7;
		iVar1 = 130;
		break;

	case 8:
		iVar6 = 0;
		iVar7 = 8;
		iVar1 = 220;
		break;

	case 9:
		iVar6 = 0;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 10:
		iVar6 = 0;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 11:
		iVar6 = 0;
		iVar7 = 11;
		iVar1 = 220;
		break;

	case 12:
		iVar6 = 0;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 13:
		iVar6 = 0;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 14:
		iVar6 = 0;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 15:
		iVar6 = 0;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 16:
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 45;
		break;

	case 17:
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 60;
		break;

	case 18:
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 19:
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 40;
		break;

	case 20:
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 315;
		break;

	case 21:
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 215;
		break;

	case 22:
		iVar6 = 1;
		iVar7 = 6;
		iVar1 = 265;
		break;

	case 23:
		iVar6 = 1;
		iVar7 = 7;
		iVar1 = 45;
		break;

	case 24:
		iVar6 = 1;
		iVar7 = 8;
		iVar1 = 205;
		break;

	case 25:
		iVar6 = 1;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 26:
		iVar6 = 1;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 27:
		iVar6 = 1;
		iVar7 = 11;
		iVar1 = 60;
		break;

	case 28:
		iVar6 = 1;
		iVar7 = 12;
		iVar1 = 55;
		break;

	case 29:
		iVar6 = 1;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 30:
		iVar6 = 1;
		iVar7 = 14;
		iVar1 = 170;
		break;

	case 31:
		iVar6 = 1;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 32:
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 33:
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 34:
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 35:
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 36:
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 37:
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 38:
		iVar6 = 2;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 39:
		iVar6 = 2;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 40:
		iVar6 = 2;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 41:
		iVar6 = 2;
		iVar7 = 9;
		iVar1 = 160;
		break;

	case 42:
		iVar6 = 2;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 43:
		iVar6 = 2;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 44:
		iVar6 = 2;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 45:
		iVar6 = 2;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 46:
		iVar6 = 2;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 47:
		iVar6 = 2;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 48:
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 205;
		break;

	case 49:
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 110;
		break;

	case 50:
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 150;
		break;

	case 51:
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 115;
		break;

	case 52:
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 115;
		break;

	case 53:
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 150;
		break;

	case 54:
		iVar6 = 3;
		iVar7 = 6;
		iVar1 = 150;
		break;

	case 55:
		iVar6 = 3;
		iVar7 = 7;
		iVar1 = 115;
		break;

	case 56:
		iVar6 = 3;
		iVar7 = 8;
		iVar1 = 140;
		break;

	case 57:
		iVar6 = 3;
		iVar7 = 9;
		iVar1 = 125;
		break;

	case 58:
		iVar6 = 3;
		iVar7 = 10;
		iVar1 = 115;
		break;

	case 59:
		iVar6 = 3;
		iVar7 = 11;
		iVar1 = 150;
		break;

	case 60:
		iVar6 = 3;
		iVar7 = 12;
		iVar1 = 150;
		break;

	case 61:
		iVar6 = 3;
		iVar7 = 13;
		iVar1 = 275;
		break;

	case 62:
		iVar6 = 3;
		iVar7 = 14;
		iVar1 = 460;
		break;

	case 63:
		iVar6 = 3;
		iVar7 = 15;
		iVar1 = 260;
		break;
	}
	switch (iParam0) {
	case 64:
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 965;
		break;

	case 65:
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 66:
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 2520;
		break;

	case 67:
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 350;
		break;

	case 68:
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 69:
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 70:
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 71:
		iVar6 = 4;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 72:
		iVar6 = 4;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 73:
		iVar6 = 4;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 74:
		iVar6 = 4;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 75:
		iVar6 = 4;
		iVar7 = 11;
		iVar1 = 150;
		break;

	case 76:
		iVar6 = 4;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 77:
		iVar6 = 4;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 78:
		iVar6 = 4;
		iVar7 = 14;
		iVar1 = 3125;
		break;

	case 79:
		iVar6 = 4;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 80:
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 80;
		break;

	case 81:
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 45;
		break;

	case 82:
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 50;
		break;

	case 83:
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 84:
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 85:
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 86:
		iVar6 = 5;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 87:
		iVar6 = 5;
		iVar7 = 7;
		iVar1 = 50;
		break;

	case 88:
		iVar6 = 5;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 89:
		iVar6 = 5;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 90:
		iVar6 = 5;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 91:
		iVar6 = 5;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 92:
		iVar6 = 5;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 93:
		iVar6 = 5;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 94:
		iVar6 = 5;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 95:
		iVar6 = 5;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 96:
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 2485;
		break;

	case 97:
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 535;
		break;

	case 98:
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 99:
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 2945;
		break;

	case 100:
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 3080;
		break;

	case 101:
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 2990;
		break;

	case 102:
		iVar6 = 6;
		iVar7 = 6;
		iVar1 = 3750;
		break;

	case 103:
		iVar6 = 6;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 104:
		iVar6 = 6;
		iVar7 = 8;
		iVar1 = 515;
		break;

	case 105:
		iVar6 = 6;
		iVar7 = 9;
		iVar1 = 530;
		break;

	case 106:
		iVar6 = 6;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 107:
		iVar6 = 6;
		iVar7 = 11;
		iVar1 = 2810;
		break;

	case 108:
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 150;
		break;

	case 109:
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 155;
		break;

	case 110:
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 320;
		break;

	case 111:
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 140;
		break;

	case 112:
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 150;
		break;

	case 113:
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 145;
		break;

	case 114:
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 150;
		break;

	case 115:
		iVar6 = 7;
		iVar7 = 7;
		iVar1 = 140;
		break;

	case 116:
		iVar6 = 7;
		iVar7 = 8;
		iVar1 = 135;
		break;

	case 117:
		iVar6 = 7;
		iVar7 = 9;
		iVar1 = 130;
		break;

	case 118:
		iVar6 = 7;
		iVar7 = 10;
		iVar1 = 130;
		break;

	case 119:
		iVar6 = 7;
		iVar7 = 11;
		iVar1 = 150;
		break;

	case 120:
		iVar6 = 7;
		iVar7 = 12;
		iVar1 = 145;
		break;

	case 121:
		iVar6 = 7;
		iVar7 = 13;
		iVar1 = 740;
		break;

	case 122:
		iVar6 = 7;
		iVar7 = 14;
		iVar1 = 790;
		break;

	case 123:
		iVar6 = 7;
		iVar7 = 15;
		iVar1 = 130;
		break;
	}
	switch (iParam0) {
	case 124:
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 45;
		break;

	case 125:
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 126:
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 127:
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 128:
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 129:
		iVar6 = 8;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 130:
		iVar6 = 8;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 131:
		iVar6 = 8;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 132:
		iVar6 = 8;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 133:
		iVar6 = 8;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 134:
		iVar6 = 8;
		iVar7 = 10;
		iVar1 = 65;
		break;

	case 135:
		iVar6 = 8;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 136:
		iVar6 = 8;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 137:
		iVar6 = 8;
		iVar7 = 13;
		iVar1 = 40;
		break;

	case 138:
		iVar6 = 8;
		iVar7 = 14;
		iVar1 = 45;
		break;

	case 139:
		iVar6 = 8;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 140:
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 265;
		break;

	case 141:
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 340;
		break;

	case 142:
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 335;
		break;

	case 143:
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 330;
		break;

	case 144:
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 345;
		break;

	case 145:
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 550;
		break;

	case 146:
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 340;
		break;

	case 147:
		iVar6 = 9;
		iVar7 = 7;
		iVar1 = 295;
		break;

	case 148:
		iVar6 = 9;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 149:
		iVar6 = 9;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 150:
		iVar6 = 9;
		iVar7 = 10;
		iVar1 = 545;
		break;

	case 151:
		iVar6 = 9;
		iVar7 = 11;
		iVar1 = 345;
		break;

	case 152:
		iVar6 = 9;
		iVar7 = 12;
		iVar1 = 315;
		break;

	case 153:
		iVar6 = 9;
		iVar7 = 13;
		iVar1 = 520;
		break;

	case 154:
		iVar6 = 9;
		iVar7 = 14;
		iVar1 = 325;
		break;

	case 155:
		iVar6 = 9;
		iVar7 = 15;
		iVar1 = 330;
		break;
	}
	switch (iParam0) {
	case 156:
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 505;
		break;

	case 157:
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 470;
		break;

	case 158:
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 475;
		break;

	case 159:
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 160:
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 161:
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 162:
		iVar6 = 10;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 163:
		iVar6 = 10;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 164:
		iVar6 = 10;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 165:
		iVar6 = 10;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 166:
		iVar6 = 10;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 167:
		iVar6 = 10;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 168:
		iVar6 = 10;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 169:
		iVar6 = 10;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 170:
		iVar6 = 10;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 171:
		iVar6 = 10;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 172:
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 120;
		break;

	case 173:
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 360;
		break;

	case 174:
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 175:
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 176:
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 177:
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 178:
		iVar6 = 11;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 179:
		iVar6 = 11;
		iVar7 = 7;
		iVar1 = 90;
		break;

	case 180:
		iVar6 = 11;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 181:
		iVar6 = 11;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 182:
		iVar6 = 11;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 183:
		iVar6 = 11;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 184:
		iVar6 = 11;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 185:
		iVar6 = 11;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 186:
		iVar6 = 11;
		iVar7 = 14;
		iVar1 = 2450;
		break;

	case 187:
		iVar6 = 11;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 188:
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 420;
		break;

	case 189:
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 415;
		break;

	case 190:
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 695;
		break;

	case 191:
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 385;
		break;

	case 192:
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 330;
		break;

	case 193:
		iVar6 = 12;
		iVar7 = 5;
		iVar1 = 345;
		break;

	case 194:
		iVar6 = 12;
		iVar7 = 6;
		iVar1 = 340;
		break;

	case 195:
		iVar6 = 12;
		iVar7 = 7;
		iVar1 = 450;
		break;

	case 196:
		iVar6 = 12;
		iVar7 = 8;
		iVar1 = 295;
		break;

	case 197:
		iVar6 = 12;
		iVar7 = 9;
		iVar1 = 340;
		break;

	case 198:
		iVar6 = 12;
		iVar7 = 10;
		iVar1 = 1060;
		break;

	case 199:
		iVar6 = 12;
		iVar7 = 11;
		iVar1 = 1040;
		break;

	case 200:
		iVar6 = 12;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 201:
		iVar6 = 12;
		iVar7 = 13;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 202:
		iVar6 = 12;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 203:
		iVar6 = 12;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 204:
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 420;
		break;

	case 205:
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 415;
		break;

	case 206:
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 680;
		break;

	case 207:
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 385;
		break;

	case 208:
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 209:
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 345;
		break;

	case 210:
		iVar6 = 13;
		iVar7 = 6;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 211:
		iVar6 = 13;
		iVar7 = 7;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 212:
		iVar6 = 13;
		iVar7 = 8;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 213:
		iVar6 = 13;
		iVar7 = 9;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 214:
		iVar6 = 13;
		iVar7 = 10;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 215:
		iVar6 = 13;
		iVar7 = 11;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 216:
		iVar6 = 13;
		iVar7 = 12;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 217:
		iVar6 = 13;
		iVar7 = 13;
		iVar1 = 1065;
		break;

	case 218:
		iVar6 = 13;
		iVar7 = 14;
		iVar1 = 0;
		iVar0 = 1;
		break;

	case 219:
		iVar6 = 13;
		iVar7 = 15;
		iVar1 = 0;
		iVar0 = 1;
		break;
	}
	switch (iParam0) {
	case 220:
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 420;
		break;

	case 221:
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 415;
		break;

	case 222:
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 440;
		break;

	case 223:
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 385;
		break;

	case 224:
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 330;
		break;

	case 225:
		iVar6 = 14;
		iVar7 = 5;
		iVar1 = 445;
		break;

	case 226:
		iVar6 = 14;
		iVar7 = 6;
		iVar1 = 340;
		break;

	case 227:
		iVar6 = 14;
		iVar7 = 7;
		iVar1 = 440;
		break;

	case 228:
		iVar6 = 14;
		iVar7 = 8;
		iVar1 = 295;
		break;

	case 229:
		iVar6 = 14;
		iVar7 = 9;
		iVar1 = 340;
		break;

	case 230:
		iVar6 = 14;
		iVar7 = 10;
		iVar1 = 325;
		break;

	case 231:
		iVar6 = 14;
		iVar7 = 11;
		iVar1 = 435;
		break;

	case 232:
		iVar6 = 14;
		iVar7 = 12;
		iVar1 = 445;
		break;

	case 233:
		iVar6 = 14;
		iVar7 = 13;
		iVar1 = 440;
		break;

	case 234:
		iVar6 = 14;
		iVar7 = 14;
		iVar1 = 325;
		break;

	case 235:
		iVar6 = 14;
		iVar7 = 15;
		iVar1 = 325;
		break;

	case 236:
		iVar6 = 15;
		iVar7 = 0;
		break;
	}
	StringCopy(&Var2, "U_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 23) {
		if (func_101(89, -1)) {
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = system::round(system::to_float(1250) * Global_262145.f_2979 * Global_279980.f_16);
		}
		else {
			iVar1 = system::round(system::to_float(45) * Global_262145.f_432[23] * Global_279980.f_16);
		}
	}
	else if (iParam0 == 17) {
		if (func_101(88, -1)) {
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = system::round(system::to_float(450) * Global_262145.f_2978 * Global_279980.f_16);
		}
		else {
			iVar1 = system::round(system::to_float(60) * Global_262145.f_432[17] * Global_279980.f_16);
		}
	}
	else if (iParam0 == 28) {
		if (func_101(87, -1)) {
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = system::round(system::to_float(500) * Global_262145.f_2977 * Global_279980.f_16);
		}
		else {
			iVar1 = system::round(system::to_float(55) * Global_262145.f_432[28] * Global_279980.f_16);
		}
	}
	else {
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237) {
			iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_432[iVar11] * Global_279980.f_16);
		}
	}
	if (iParam0 >= 237) {
		Global_69523[0 /*14*/].f_5 = 3;
		func_164(iVar10, iParam0, 237);
		if (Global_69523[0 /*14*/].f_7 > 0) {
			Global_69523[0 /*14*/].f_7 =
				system::round(system::to_float(Global_69523[0 /*14*/].f_7) * Global_279980.f_16);
		}
	}
	else {
		func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

// Position - 0x3F91E
void func_193(int iParam0) {
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = 0;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	switch (iParam0) {
	case 0:
		iVar6 = 0;
		iVar7 = 0;
		iVar1 = 500;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[0]);
		break;

	case 1:
		iVar6 = 1;
		iVar7 = 0;
		iVar1 = 190;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[1]);
		break;

	case 2:
		iVar6 = 1;
		iVar7 = 1;
		iVar1 = 185;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[2]);
		break;

	case 3:
		iVar6 = 1;
		iVar7 = 2;
		iVar1 = 180;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[3]);
		break;

	case 4:
		iVar6 = 1;
		iVar7 = 3;
		iVar1 = 175;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[4]);
		break;

	case 5:
		iVar6 = 1;
		iVar7 = 4;
		iVar1 = 170;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[5]);
		break;

	case 6:
		iVar6 = 1;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 7:
		iVar6 = 2;
		iVar7 = 0;
		iVar1 = 580;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[6]);
		break;

	case 8:
		iVar6 = 2;
		iVar7 = 1;
		iVar1 = 575;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[7]);
		break;

	case 9:
		iVar6 = 2;
		iVar7 = 2;
		iVar1 = 570;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[8]);
		break;

	case 10:
		iVar6 = 2;
		iVar7 = 3;
		iVar1 = 565;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[9]);
		break;

	case 11:
		iVar6 = 2;
		iVar7 = 4;
		iVar1 = 560;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[10]);
		break;

	case 12:
		iVar6 = 2;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 13:
		iVar6 = 3;
		iVar7 = 0;
		iVar1 = 1100;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[11]);
		break;

	case 14:
		iVar6 = 3;
		iVar7 = 1;
		iVar1 = 1095;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[12]);
		break;

	case 15:
		iVar6 = 3;
		iVar7 = 2;
		iVar1 = 1090;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[13]);
		break;

	case 16:
		iVar6 = 3;
		iVar7 = 3;
		iVar1 = 1085;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[14]);
		break;

	case 17:
		iVar6 = 3;
		iVar7 = 4;
		iVar1 = 1080;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[15]);
		break;

	case 18:
		iVar6 = 3;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 19:
		iVar6 = 4;
		iVar7 = 0;
		iVar1 = 520;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[16]);
		break;

	case 20:
		iVar6 = 4;
		iVar7 = 1;
		iVar1 = 515;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[17]);
		break;

	case 21:
		iVar6 = 4;
		iVar7 = 2;
		iVar1 = 510;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[18]);
		break;

	case 22:
		iVar6 = 4;
		iVar7 = 3;
		iVar1 = 505;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[19]);
		break;

	case 23:
		iVar6 = 4;
		iVar7 = 4;
		iVar1 = 500;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[20]);
		break;

	case 24:
		iVar6 = 4;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 25:
		iVar6 = 4;
		iVar7 = 6;
		iVar1 = 0;
		break;

	case 26:
		iVar6 = 5;
		iVar7 = 0;
		iVar1 = 295;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[21]);
		break;

	case 27:
		iVar6 = 5;
		iVar7 = 1;
		iVar1 = 290;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[22]);
		break;

	case 28:
		iVar6 = 5;
		iVar7 = 2;
		iVar1 = 285;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[23]);
		break;

	case 29:
		iVar6 = 5;
		iVar7 = 3;
		iVar1 = 280;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[24]);
		break;

	case 30:
		iVar6 = 5;
		iVar7 = 4;
		iVar1 = 275;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[25]);
		break;

	case 31:
		iVar6 = 5;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 32:
		iVar6 = 6;
		iVar7 = 0;
		iVar1 = 950;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[26]);
		break;

	case 33:
		iVar6 = 6;
		iVar7 = 1;
		iVar1 = 945;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[27]);
		break;

	case 34:
		iVar6 = 6;
		iVar7 = 2;
		iVar1 = 940;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[28]);
		break;

	case 35:
		iVar6 = 6;
		iVar7 = 3;
		iVar1 = 935;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[29]);
		break;

	case 36:
		iVar6 = 6;
		iVar7 = 4;
		iVar1 = 930;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[30]);
		break;

	case 37:
		iVar6 = 6;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 38:
		iVar6 = 7;
		iVar7 = 0;
		iVar1 = 440;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[31]);
		break;

	case 39:
		iVar6 = 7;
		iVar7 = 1;
		iVar1 = 435;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[32]);
		break;

	case 40:
		iVar6 = 7;
		iVar7 = 2;
		iVar1 = 430;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[33]);
		break;

	case 41:
		iVar6 = 7;
		iVar7 = 3;
		iVar1 = 425;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[34]);
		break;

	case 42:
		iVar6 = 7;
		iVar7 = 4;
		iVar1 = 420;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[35]);
		break;

	case 43:
		iVar6 = 7;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 44:
		iVar6 = 7;
		iVar7 = 6;
		iVar1 = 0;
		break;

	case 45:
		iVar6 = 8;
		iVar7 = 0;
		iVar1 = 1150;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[36]);
		break;

	case 46:
		iVar6 = 8;
		iVar7 = 1;
		iVar1 = 1145;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[37]);
		break;

	case 47:
		iVar6 = 8;
		iVar7 = 2;
		iVar1 = 1140;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[38]);
		break;

	case 48:
		iVar6 = 8;
		iVar7 = 3;
		iVar1 = 1135;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[39]);
		break;

	case 49:
		iVar6 = 8;
		iVar7 = 4;
		iVar1 = 1130;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[40]);
		break;

	case 50:
		iVar6 = 9;
		iVar7 = 0;
		iVar1 = 395;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[41]);
		break;

	case 51:
		iVar6 = 9;
		iVar7 = 1;
		iVar1 = 390;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[42]);
		break;

	case 52:
		iVar6 = 9;
		iVar7 = 2;
		iVar1 = 385;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[43]);
		break;

	case 53:
		iVar6 = 9;
		iVar7 = 3;
		iVar1 = 380;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[44]);
		break;

	case 54:
		iVar6 = 9;
		iVar7 = 4;
		iVar1 = 375;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[45]);
		break;

	case 55:
		iVar6 = 9;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 56:
		iVar6 = 9;
		iVar7 = 6;
		iVar1 = 0;
		break;

	case 57:
		iVar6 = 10;
		iVar7 = 0;
		iVar1 = 500;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[46]);
		break;

	case 58:
		iVar6 = 10;
		iVar7 = 1;
		iVar1 = 495;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[47]);
		break;

	case 59:
		iVar6 = 10;
		iVar7 = 2;
		iVar1 = 490;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[48]);
		break;

	case 60:
		iVar6 = 10;
		iVar7 = 3;
		iVar1 = 485;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[49]);
		break;

	case 61:
		iVar6 = 10;
		iVar7 = 4;
		iVar1 = 480;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[50]);
		break;

	case 62:
		iVar6 = 10;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 63:
		iVar6 = 11;
		iVar7 = 0;
		iVar1 = 1050;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[51]);
		break;

	case 64:
		iVar6 = 11;
		iVar7 = 1;
		iVar1 = 1045;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[52]);
		break;

	case 65:
		iVar6 = 11;
		iVar7 = 2;
		iVar1 = 1040;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[53]);
		break;

	case 66:
		iVar6 = 11;
		iVar7 = 3;
		iVar1 = 1035;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[54]);
		break;

	case 67:
		iVar6 = 11;
		iVar7 = 4;
		iVar1 = 1030;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[55]);
		break;

	case 68:
		iVar6 = 11;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 69:
		iVar6 = 12;
		iVar7 = 0;
		iVar1 = 550;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[56]);
		break;

	case 70:
		iVar6 = 12;
		iVar7 = 1;
		iVar1 = 545;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[57]);
		break;

	case 71:
		iVar6 = 12;
		iVar7 = 2;
		iVar1 = 540;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[58]);
		break;

	case 72:
		iVar6 = 12;
		iVar7 = 3;
		iVar1 = 535;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[59]);
		break;

	case 73:
		iVar6 = 12;
		iVar7 = 4;
		iVar1 = 530;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[60]);
		break;

	case 74:
		iVar6 = 13;
		iVar7 = 0;
		iVar1 = 1200;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[61]);
		break;

	case 75:
		iVar6 = 13;
		iVar7 = 1;
		iVar1 = 1195;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[62]);
		break;

	case 76:
		iVar6 = 13;
		iVar7 = 2;
		iVar1 = 1190;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[63]);
		break;

	case 77:
		iVar6 = 13;
		iVar7 = 3;
		iVar1 = 1185;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[64]);
		break;

	case 78:
		iVar6 = 13;
		iVar7 = 4;
		iVar1 = 1180;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[65]);
		break;

	case 79:
		iVar6 = 13;
		iVar7 = 5;
		iVar1 = 0;
		break;

	case 80:
		iVar6 = 14;
		iVar7 = 0;
		iVar1 = 2000;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[66]);
		break;

	case 81:
		iVar6 = 14;
		iVar7 = 1;
		iVar1 = 1995;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[67]);
		break;

	case 82:
		iVar6 = 14;
		iVar7 = 2;
		iVar1 = 1990;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[68]);
		break;

	case 83:
		iVar6 = 14;
		iVar7 = 3;
		iVar1 = 1985;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[69]);
		break;

	case 84:
		iVar6 = 14;
		iVar7 = 4;
		iVar1 = 1980;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[70]);
		break;

	case 85:
		iVar6 = 15;
		iVar7 = 0;
		iVar1 = 475;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[71]);
		break;

	case 86:
		iVar6 = 15;
		iVar7 = 1;
		iVar1 = 470;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[72]);
		break;

	case 87:
		iVar6 = 15;
		iVar7 = 2;
		iVar1 = 465;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[73]);
		break;

	case 88:
		iVar6 = 15;
		iVar7 = 3;
		iVar1 = 460;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[74]);
		break;

	case 89:
		iVar6 = 15;
		iVar7 = 4;
		iVar1 = 455;
		iVar1 = system::round(system::to_float(iVar1) * Global_262145.f_2532[75]);
		break;

	case 90:
		iVar6 = 15;
		iVar7 = 5;
		iVar1 = 0;
		break;

	default:
		Global_69523[0 /*14*/].f_5 = 3;
		func_164(iVar10, iParam0, 91);
		return;
	}
	StringCopy(&Var2, "H_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_157(&Global_69523[0 /*14*/], iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

// Position - 0x407D8
void func_194() {
	Global_69523[0 /*14*/].f_1 = -1;
	Global_69523[0 /*14*/].f_2 = -1;
	Global_69523[0 /*14*/].f_5 = -1;
	Global_69523[0 /*14*/].f_3 = -1;
	Global_69523[0 /*14*/].f_4 = -1;
	Global_69523[0 /*14*/].f_7 = 0;
	Global_69523[0 /*14*/].f_6 = 0;
	Global_69523[0 /*14*/].f_13 = -1;
	Global_69523[0 /*14*/].f_12 = 0;
	Global_69523[0 /*14*/] = 0;
	StringCopy(&Global_69523[0 /*14*/].f_8, "NO_LABEL", 16);
}

// Position - 0x40851
void func_195(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0) {
		player::special_ability_deactivate_fast(player::player_id());
		player::set_all_random_peds_flee(player::player_id(), 1);
		player::set_police_ignore_player(player::player_id(), 1);
		func_203(1);
		ui::_0xA8FDB297A8D25FBA();
		ui::_0xFDB423997FA30340();
		if (Global_14443.f_1 > 3) {
			if (audio::is_mobile_phone_call_ongoing()) {
				audio::stop_scripted_conversation(0);
			}
			if (!func_202()) {
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_201(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		G_DisableMessagesAndCalls1 = 1;
	}
	else {
		func_203(0);
		ui::_0xE1CD1E48E025E661();
		Global_55828 = 0;
		if (iParam1) {
			graphics::_0x03FC694AE06C5A20();
		}
		player::set_all_random_peds_flee(player::player_id(), 0);
		player::set_police_ignore_player(player::player_id(), 0);
		func_201(0, iParam3, iParam2, 0);
		if (network::network_is_game_in_progress()) {
			if (!ped::is_ped_injured(player::player_ped_id()) && !func_199(player::player_id()) &&
				!func_197(player::player_id(), 0) && !func_196()) {
				entity::set_entity_invincible(player::player_ped_id(), 0);
			}
		}
		else if (!ped::is_ped_injured(player::player_ped_id()) && !func_199(player::player_id())) {
			entity::set_entity_invincible(player::player_ped_id(), 0);
		}
		G_DisableMessagesAndCalls1 = 0;
	}
}

// Position - 0x4096A
bool func_196() { return gameplay::is_bit_set(Global_1591201[player::player_id() /*602*/].f_39.f_18, 14); }

// Position - 0x40987
bool func_197(int iParam0, int iParam1) {
	bool bVar0;

	if (iParam0 == player::player_id()) {
		bVar0 = func_198(-1, 0) == 8;
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

// Position - 0x409D2
int func_198(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1) {
		iVar1 = func_14();
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

// Position - 0x40A13
int func_199(int iParam0) {
	if (func_197(iParam0, 0)) {
		return 1;
	}
	if (func_200()) {
		if (iParam0 == player::player_id()) {
			return 1;
		}
	}
	if (gameplay::is_bit_set(Global_2421664[iParam0 /*358*/].f_198, 2)) {
		return 1;
	}
	return 0;
}

// Position - 0x40A55
bool func_200() { return gameplay::is_bit_set(Global_2359301, 3); }

// Position - 0x40A66
int func_201(int iParam0, int iParam1, var uParam2, int iParam3) {
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

// Position - 0x40A99
int func_202() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x40AC0
void func_203(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&G_SleepModeOnOn25, 13);
	}
	else {
		gameplay::clear_bit(&G_SleepModeOnOn25, 13);
	}
}

// Position - 0x40AE3
void func_204(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;

	if (iParam1) {
		if (script::_get_no_loading_screen()) {
			script::set_no_loading_screen(0);
		}
	}
	if (!network::network_is_game_in_progress()) {
		iVar0 = iParam2;
		player::set_player_control(iParam0, iParam1, iVar0);
	}
	else {
		bVar1 = (iParam2 & 2) != false;
		bVar2 = (iParam2 & 4) != false;
		bVar3 = (iParam2 & 8) != false;
		bVar4 = (iParam2 & 16) != false;
		bVar5 = (iParam2 & 32) != false;
		bVar6 = (iParam2 & 64) != false;
		bVar7 = (iParam2 & 128) != false;
		bVar8 = (iParam2 & 256) != false;
		bVar9 = (iParam2 & 512) != false;
		bVar10 = (iParam2 & 1024) != false;
		bVar11 = (iParam2 & 2048) != false;
		bVar12 = (iParam2 & 4096) != false;
		bVar13 = (iParam2 & 8192) != false;
		bVar14 = (iParam2 & 16384) != false;
		iVar15 = (iParam2 & 32768) != 0;
		iVar16 = (iParam2 & 65536) != 0;
		bVar17 = (iParam2 & 131072) != false;
		bVar18 = (iParam2 & 262144) != false;
		bVar19 = (iParam2 & 524288) != false;
		bVar20 = (iParam2 & 1048576) != false;
		bVar21 = (iParam2 & 2097152) != false;
		bVar22 = (iParam2 & 4194304) != false;
		bVar23 = (iParam2 & 8388608) != false;
		if (!func_209()) {
			bVar24 = false;
			if (iParam1 == 1) {
				bVar24 = true;
			}
			if (iVar15 == 0 && !bVar20) {
				bVar24 = true;
			}
			if (bVar9 == 1) {
				bVar24 = true;
			}
			if (bVar24) {
				return;
			}
		}
		if (bVar17) {
		}
		if (network::network_is_player_active(iParam0) && player::is_player_playing(iParam0)) {
			iVar25 = player::get_player_ped(iParam0);
			if (!bVar19) {
				if (bVar18 && iParam1 == 0 && network::network_is_game_in_progress()) {
					network::fade_out_local_player(1);
				}
				else {
					entity::set_entity_visible(iVar25, !bVar13, 0);
				}
				if (!bVar13) {
					if (network::network_is_game_in_progress() && !bVar18) {
						network::fade_out_local_player(0);
					}
					Global_2421664[iParam0 /*358*/].f_247 = 0;
				}
			}
			if (iParam1) {
				if (!func_208(iVar25) && !entity::is_entity_attached_to_any_vehicle(iVar25)) {
					if (!bVar21) {
						entity::set_entity_collision(iVar25, 1, 0);
					}
				}
				if (!entity::is_entity_attached(iVar25)) {
					if (!bVar20) {
						entity::freeze_entity_position(iVar25, 0);
					}
					entity::_set_entity_register(iVar25, 1);
				}
				else if (!bVar20) {
					entity::freeze_entity_position(iVar25, 0);
				}
				ped::set_ped_can_be_targetted(iVar25, 1);
				player::set_player_invincible(iParam0, 0);
				ped::_0x4668D80430D6C299(iVar25);
				ped::set_ped_can_ragdoll(iVar25, 1);
				func_207();
				func_206();
				if (player::is_player_teleport_active()) {
					if (!bVar22) {
					}
				}
				if (streaming::is_new_load_scene_active()) {
				}
				Global_2421664[iParam0 /*358*/].f_248 = 0;
				if (!bVar23) {
					bVar2 = true;
				}
			}
			else {
				if (!func_208(iVar25) && !entity::is_entity_attached_to_any_vehicle(iVar25)) {
					if (!bVar21) {
						entity::set_entity_collision(iVar25, !bVar14, 0);
					}
					if (!entity::is_entity_attached(iVar25)) {
						if (!bVar20) {
							entity::freeze_entity_position(iVar25, iVar15);
						}
						if (!iVar15) {
							entity::_set_entity_register(iVar25, 1);
						}
					}
					if (func_205(Global_1633501.f_107548)) {
						entity::freeze_entity_position(iVar25, 1);
					}
				}
				if (bVar9) {
					player::set_player_invincible(iParam0, 0);
				}
				else {
					player::set_player_invincible(iParam0, 1);
				}
				ped::set_ped_can_be_targetted(iVar25, iVar16);
				if (bVar2) {
					if (!ped::is_ped_fatally_injured(iVar25) && !ped::is_ped_in_any_vehicle(iVar25, 0)) {
						ai::clear_ped_tasks_immediately(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1) {
				iVar26 |= 2;
			}
			if (bVar2) {
				iVar26 |= 4;
			}
			if (bVar3) {
				iVar26 |= 8;
			}
			if (bVar4) {
				iVar26 |= 16;
			}
			if (bVar5) {
				iVar26 |= 32;
			}
			if (bVar6) {
				iVar26 |= 64;
			}
			if (bVar7) {
				iVar26 |= 128;
			}
			if (bVar8) {
				iVar26 |= 256;
			}
			if (bVar9) {
				iVar26 |= 512;
			}
			if (bVar10) {
				iVar26 |= 1024;
			}
			if (bVar11) {
				iVar26 |= 2048;
			}
			if (bVar12) {
				iVar26 |= 4096;
			}
			player::set_player_control(iParam0, iParam1, iVar26);
		}
	}
}

// Position - 0x40E9A
bool func_205(int iParam0) { return iParam0 == 17; }

// Position - 0x40EA7
void func_206() {
	struct<2> Var0;

	Global_2433125.f_731 = 0;
	Global_2433125.f_732 = 0;
	Global_2433125.f_733 = {9999.9f, 9999.9f, 9999.9f};
	Global_2404994.f_2220 = {Var0};
}

// Position - 0x40EE4
void func_207() {
	Global_2404994.f_644 = 0;
	Global_2404994.f_2261 = 0;
	Global_2404994.f_501 = 0;
	Global_2404994.f_576 = 0;
	Global_2421664[player::player_id() /*358*/].f_210 = 0;
}

// Position - 0x40F1A
int func_208(int iParam0) {
	int iVar0;

	if (ped::is_ped_in_any_vehicle(iParam0, 1)) {
		return 1;
	}
	else {
		iVar0 = ai::get_script_task_status(iParam0, -1794415470);
		if (iVar0 == 0) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x40F4B
int func_209() {
	if (func_210() == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x40F60
int func_210() { return Global_1312466.f_18; }

// Position - 0x40F6E
void func_211(int iParam0) {
	func_212();
	if (entity::does_entity_exist(iLocal_55)) {
		if (entity::is_entity_attached(iLocal_55)) {
			entity::detach_entity(iLocal_55, 1, 1);
			if (iParam0) {
				entity::apply_force_to_entity(iLocal_55, 1, vLocal_56, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
			}
		}
		entity::set_object_as_no_longer_needed(&iLocal_55);
	}
	iLocal_52 = 0;
	iLocal_53 = 0;
}

// Position - 0x40FB9
void func_212() {
	ped::set_ped_using_action_mode(player::player_ped_id(), 0, -1, 0);
	controls::disable_control_action(0, 21, 1);
	controls::disable_control_action(0, 25, 1);
	controls::disable_control_action(0, 24, 1);
	controls::disable_control_action(0, 257, 1);
	controls::disable_control_action(0, 141, 1);
	controls::disable_control_action(0, 140, 1);
	controls::disable_control_action(0, 142, 1);
	controls::disable_control_action(0, 22, 1);
	controls::disable_control_action(0, 44, 1);
	controls::disable_control_action(0, 23, 1);
	controls::disable_control_action(0, 47, 1);
	controls::disable_control_action(0, 37, 1);
	controls::disable_control_action(0, 28, 1);
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		ped::set_ped_max_move_blend_ratio(player::player_ped_id(), 1f);
		ped::set_ped_reset_flag(player::player_ped_id(), 102, 1);
		ped::set_ped_reset_flag(player::player_ped_id(), 322, 1);
	}
	func_213();
}

// Position - 0x41066
void func_213() { Global_17151.f_6 = 1; }

// Position - 0x41074
void func_214(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = 1;
	graphics::draw_debug_text_2d("runVendingMachine", 0.02f, 0.05f, 0f, 0, 0, 255, 255);
	switch (iLocal_49) {
	case 0:
		graphics::draw_debug_text_2d("playerOutOfRange", 0.2f, 0.05f, 0f, 0, 0, 255, 255);
		if (entity::is_entity_playing_anim(player::player_ped_id(), sLocal_50, "PLYR_BUY_DRINK_PT3", 3)) {
			if (Global_69702) {
				if (entity::get_entity_anim_current_time(player::player_ped_id(), sLocal_50, "PLYR_BUY_DRINK_PT3") >
					0.9f) {
					if (weapon::is_weapon_valid(iLocal_54)) {
						weapon::set_current_ped_weapon(player::player_ped_id(), iLocal_54, 0);
					}
					if (iLocal_62 != -99) {
						func_10(player::player_ped_id(), 1, iLocal_62, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						iLocal_62 = -99;
					}
					if (iLocal_63) {
						func_8(player::player_ped_id());
						iLocal_63 = 0;
					}
					func_7();
				}
			}
			func_212();
		}
		else if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (entity::is_entity_at_coord(player::player_ped_id(), vLocal_72, 3.2f, 3.2f, 3.2f, 0, 1, 0)) {
				if (interior::get_interior_from_entity(player::player_ped_id()) ==
					interior::get_interior_from_entity(iParam0)) {
					iLocal_52 = 0;
					iLocal_53 = 0;
					iLocal_49 = 1;
				}
			}
		}
		break;

	case 1:
		graphics::draw_debug_text_2d("waitForPlayer", 0.2f, 0.05f, 0f, 0, 0, 255, 255);
		if (gameplay::is_bit_set(iLocal_96, 0)) {
			if (!Global_91543.f_1361) {
				gameplay::clear_bit(&iLocal_96, 0);
			}
		}
		if (func_298(1, 0, 1)) {
			if (player::is_player_playing(player::player_id())) {
				if (!(player::is_player_free_aiming(player::player_id()) &&
					  weapon::is_ped_armed(player::player_ped_id(), 6)) &&
					!player::is_player_targetting_anything(player::player_id()) && !func_297(iParam0) &&
					!object::is_object_near_point(1143474856, vLocal_72, 1f) &&
					!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) &&
					entity::is_entity_at_coord(player::player_ped_id(), vLocal_78, vLocal_81, 0, 1, 0) &&
					!entity::is_entity_playing_anim(player::player_ped_id(), sLocal_50, "PLYR_BUY_DRINK_PT2", 3) &&
					!func_299() && Global_25440 && !func_293(player::player_id()) &&
					!func_292(player::player_id(), 21) && !func_291()) {
					if (func_289() || Global_69702 && networkcash::network_can_spend_money(1, 0, 0, 1, -1)) {
						if (!func_288() && !ui::is_pause_menu_active()) {
							if (iLocal_71 == -1) {
								func_287(&iLocal_71, 3, "VENDHLP", 0, 0, 0, 0);
							}
							if (func_286(iLocal_71, 1)) {
								if (Global_69702 && !ui::is_pause_menu_active()) {
									if (func_285(6) || iLocal_53) {
										if (func_284()) {
											if (!iLocal_53) {
											}
											iLocal_53 = 1;
										}
									}
									if (func_284()) {
										iLocal_99 = 1;
										iLocal_100 = 0;
										iVar1 = -1;
										while (func_274(&iVar1, -221807075, 537254313, iVar0, iLocal_53)) {
											system::wait(0);
										}
										switch (iVar1) {
										case 0: func_272(&iLocal_71); return;

										case 2: break;

										default: break;
										}
									}
									func_204(player::player_id(), 0, 66304);
									weapon::get_current_ped_weapon(player::player_ped_id(), &iLocal_54, 1);
									weapon::set_current_ped_weapon(player::player_ped_id(), joaat("weapon_unarmed"), 1);
									func_271();
									if (func_42(func_270(), 1, func_135(player::player_ped_id(), 1, -1), -1)) {
										iLocal_62 = func_135(player::player_ped_id(), 1, -1);
										func_10(player::player_ped_id(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									if (func_269(player::player_ped_id(), 7)) {
										ped::clear_ped_prop(player::player_ped_id(), 0);
										ped::set_ped_component_variation(player::player_ped_id(), 7, 0, 0, 0);
									}
									if (func_268(player::player_ped_id()) && func_8(player::player_ped_id())) {
										iLocal_63 = 1;
									}
									if (func_126(entity::get_entity_model(player::player_ped_id()), 14,
												 func_135(player::player_ped_id(), 14, 0), -1)) {
										player::remove_player_helmet(player::get_player_index(), 1);
									}
								}
								else {
									gameplay::clear_area_of_projectiles(vLocal_72, 3f, 0);
									player::set_player_control(player::player_id(), 0, 256);
									func_195(1, 1, 0, 0);
								}
								Global_25441 = 1;
								weapon::set_ped_current_weapon_visible(player::player_ped_id(), 0, 1, 1, 0);
								audio::request_ambient_audio_bank("VENDING_MACHINE", 0, -1);
								ped::set_ped_stealth_movement(player::player_ped_id(), 0, 0);
								iLocal_51 = 1;
								ai::task_look_at_entity(player::player_ped_id(), iParam0, 2000, 2048, 2);
								ped::set_ped_reset_flag(player::player_ped_id(), 322, 1);
								ai::task_go_straight_to_coord(player::player_ped_id(), vLocal_72, 1f, 20000,
															  entity::get_entity_heading(iParam0), 0.1f);
								func_267(&uLocal_87, 0, 0);
								func_272(&iLocal_71);
								func_263();
								if (!gameplay::is_bit_set(iLocal_96, 1)) {
									iLocal_49 = 2;
								}
								else {
									iLocal_49 = 3;
								}
							}
						}
						else {
							func_272(&iLocal_71);
						}
					}
					else if (!network::network_is_game_in_progress()) {
						func_272(&iLocal_71);
						func_2("VENDCSH", -1);
					}
					else {
						if (iLocal_71 == -1) {
							func_287(&iLocal_71, 3, "VENDHLP", 0, 0, 0, 0);
						}
						if (func_286(iLocal_71, 1)) {
							if (!gameplay::is_bit_set(iLocal_96, 0)) {
								func_262(337428855, 1, 0);
								func_255(0, 31, 3);
								gameplay::set_bit(&iLocal_96, 0);
							}
						}
					}
				}
				else {
					func_272(&iLocal_71);
				}
			}
			else {
				func_272(&iLocal_71);
			}
		}
		else {
			func_272(&iLocal_71);
		}
		break;

	case 3:
		if (!ped::is_ped_wearing_helmet(player::player_ped_id())) {
			iLocal_49 = 2;
			gameplay::clear_bit(&iLocal_96, 1);
		}
		break;

	case 2:
		graphics::draw_debug_text_2d("grabPlayer", 0.2f, 0.05f, 0f, 0, 0, 255, 255);
		func_263();
		func_212();
		if (ai::get_script_task_status(player::player_ped_id(), 2106541073) == 7 &&
			ai::get_script_task_status(player::player_ped_id(), 2106541073) != 0 &&
			ai::get_script_task_status(player::player_ped_id(), 2106541073) != 1 &&
			entity::is_entity_at_coord(player::player_ped_id(), vLocal_72, 0.1f, 0.1f, 0.1f, 0, 1, 0)) {
			ai::task_play_anim(player::player_ped_id(), sLocal_50, "PLYR_BUY_DRINK_PT1", 2f, -4f, -1, 1048576, 0, 0, 0,
							   0);
			func_4(&uLocal_87);
			iLocal_49 = 4;
		}
		else if (func_254(&uLocal_87, 2500, 0) || func_299()) {
			ai::clear_ped_tasks(player::player_ped_id());
			if (Global_69702) {
				weapon::set_current_ped_weapon(player::player_ped_id(), iLocal_54, 0);
			}
			if (iLocal_62 != -99) {
				func_10(player::player_ped_id(), 1, iLocal_62, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				iLocal_62 = -99;
			}
			if (iLocal_63) {
				func_8(player::player_ped_id());
				iLocal_63 = 0;
			}
			func_7();
			player::set_player_control(player::player_id(), 1, 0);
			func_195(0, 1, 1, 0);
			Global_25441 = 0;
			iLocal_49 = 0;
			func_4(&uLocal_87);
			if (func_284()) {
				func_249(func_253());
			}
		}
		break;

	case 4:
		graphics::draw_debug_text_2d("runVend", 0.2f, 0.05f, 0f, 0, 0, 255, 255);
		func_263();
		func_212();
		if (entity::is_entity_playing_anim(player::player_ped_id(), sLocal_50, "PLYR_BUY_DRINK_PT1", 3)) {
			if (entity::get_entity_anim_current_time(player::player_ped_id(), sLocal_50, "PLYR_BUY_DRINK_PT1") <
				0.52f) {
				if (!entity::is_entity_at_coord(player::player_ped_id(), vLocal_72, 0.1f, 0.1f, 0.1f, 0, 1, 0)) {
					func_211(1);
					func_3(iParam1);
				}
			}
			if (entity::is_entity_playing_anim(player::player_ped_id(), sLocal_50, "PLYR_BUY_DRINK_PT1", 3)) {
				if (entity::get_entity_anim_current_time(player::player_ped_id(), sLocal_50, "PLYR_BUY_DRINK_PT1") >
					fLocal_60) {
					if (entity::does_entity_exist(iLocal_55)) {
						if (entity::get_entity_anim_current_time(player::player_ped_id(), sLocal_50,
																 "PLYR_BUY_DRINK_PT1") > fLocal_61) {
							if (!entity::is_entity_playing_anim(player::player_ped_id(), sLocal_50,
																"PLYR_BUY_DRINK_PT2", 3)) {
								ai::task_play_anim(player::player_ped_id(), sLocal_50, "PLYR_BUY_DRINK_PT2", 4f, -1000f,
												   -1, 1048576, 0f, 0, 2052, 0);
								ped::_0x2208438012482A1A(player::player_ped_id(), 0, 0);
							}
							if (Global_69702) {
								func_204(player::player_id(), 1, 0);
							}
							else {
								player::set_player_control(player::player_id(), 1, 0);
								player::set_everyone_ignore_player(player::player_id(), 1);
							}
							iLocal_51 = 0;
							if (entity::is_entity_playing_anim(player::player_ped_id(), sLocal_50, "PLYR_BUY_DRINK_PT1",
															   3)) {
								ai::stop_anim_task(player::player_ped_id(), sLocal_50, "PLYR_BUY_DRINK_PT1", -1.5f);
							}
						}
					}
					else if (Global_69702) {
						iLocal_55 = object::create_object_no_offset(114933932, vLocal_72, 1, 0, 0);
						entity::attach_entity_to_entity(iLocal_55, player::player_ped_id(),
														ped::get_ped_bone_index(player::player_ped_id(), 28422), 0f, 0f,
														0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
					}
					else {
						iLocal_55 = object::create_object_no_offset(114933932, vLocal_72, 0, 0, 0);
						entity::attach_entity_to_entity(iLocal_55, player::player_ped_id(),
														ped::get_ped_bone_index(player::player_ped_id(), 28422), 0f, 0f,
														0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
					}
				}
				else if (entity::get_entity_anim_current_time(player::player_ped_id(), sLocal_50,
															  "PLYR_BUY_DRINK_PT1") > 0.1f) {
					if (!iLocal_52) {
						func_216(iVar0);
						iLocal_52 = 1;
						switch (iParam1) {
						case 2: func_215(67, 1); break;

						case 7: func_215(66, 1); break;
						}
					}
				}
			}
		}
		else if (entity::is_entity_playing_anim(player::player_ped_id(), sLocal_50, "PLYR_BUY_DRINK_PT2", 3)) {
			if (entity::get_entity_anim_current_time(player::player_ped_id(), sLocal_50, "PLYR_BUY_DRINK_PT2") >
				0.98f) {
				if (!entity::is_entity_playing_anim(player::player_ped_id(), sLocal_50, "PLYR_BUY_DRINK_PT3", 3)) {
					ai::task_play_anim(player::player_ped_id(), sLocal_50, "PLYR_BUY_DRINK_PT3", 1000f, -4f, -1,
									   1048624, 0f, 0, 2048, 0);
					ped::_0x2208438012482A1A(player::player_ped_id(), 0, 0);
				}
				iLocal_49 = 5;
			}
		}
		else {
			func_3(iParam1);
		}
		break;

	case 5:
		graphics::draw_debug_text_2d("resetVend", 0.2f, 0.05f, 0f, 0, 0, 255, 255);
		func_263();
		func_212();
		if (entity::is_entity_playing_anim(player::player_ped_id(), sLocal_50, "PLYR_BUY_DRINK_PT3", 3)) {
			if (entity::get_entity_anim_current_time(player::player_ped_id(), sLocal_50, "PLYR_BUY_DRINK_PT3") >
				fLocal_59) {
				func_5();
				Global_25441 = 0;
				if (Global_69702) {
					func_7();
					func_204(player::player_id(), 1, 0);
				}
				else {
					func_195(0, 1, 1, 0);
				}
				func_6(iParam1);
				iLocal_51 = 0;
				player::set_everyone_ignore_player(player::player_id(), 0);
				if (audio::request_ambient_audio_bank("VENDING_MACHINE", 0, -1)) {
					audio::release_ambient_audio_bank();
				}
				audio::hint_ambient_audio_bank("VENDING_MACHINE", 0, -1);
				func_211(1);
				if (iLocal_70 > 9) {
					iLocal_47 = 3;
				}
				else {
					func_212();
					iLocal_49 = 0;
				}
			}
		}
		else {
			player::set_everyone_ignore_player(player::player_id(), 0);
			func_3(iParam1);
		}
		break;
	}
}

// Position - 0x41A1A
void func_215(int iParam0, int iParam1) {
	int iVar0;

	if (iParam1 < 1) {
		return;
	}
	if (Global_51564[iParam0 /*7*/].f_2) {
		return;
	}
	if (network::network_is_game_in_progress()) {
		return;
	}
	if (Global_51564[iParam0 /*7*/]) {
		stats::stat_get_int(Global_51564[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 += iParam1;
		stats::stat_set_int(Global_51564[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

// Position - 0x41A77
void func_216(int iParam0) {
	bool bVar0;

	func_215(67, 1);
	bVar0 = true;
	if (func_285(6)) {
		func_246(6);
		bVar0 = false;
	}
	if (bVar0) {
		if (Global_69702) {
			if (func_284()) {
				unk3::_network_shop_set_telemetry_nonce_seed(func_245(func_253()));
			}
			if (func_244(0) > 0) {
				networkcash::network_buy_item(iParam0, gameplay::get_hash_key("soda"), 12, 1, 0, 0, 0, 0, 0, 0);
			}
			else {
				networkcash::network_buy_item(iParam0, gameplay::get_hash_key("soda"), 12, 1, 0, 0, 0, 0, 0, 1);
			}
			if (func_284()) {
				func_249(func_253());
			}
		}
		else {
			func_217(func_239(), 1, iParam0);
		}
	}
}

// Position - 0x41B11
int func_217(int iParam0, int iParam1, int iParam2) {
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 3) {
		return 0;
	}
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 4) {
		return 0;
	}
	return func_218(Global_101700.f_27009[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

// Position - 0x41B5A
int func_218(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_238();
	if (iParam3 < 1) {
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 0:
			func_215(99, 1);
			func_237(joaat("sp0_money_total_spent"), iParam3);
			break;

		case 1: func_237(joaat("sp1_money_total_spent"), iParam3); break;

		case 2: func_237(joaat("sp2_money_total_spent"), iParam3); break;
		}
		func_222(0);
		switch (iParam2) {
		case 126:
		case 128:
		case 124:
		case 125:
		case 127:
			if (func_285(5)) {
				fVar0 = 0.9f;
				iVar1 = 5;
			}
			break;

		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
			switch (iParam0) {
			case 0: func_237(joaat("sp0_money_spent_on_tattoos"), iParam3); break;

			case 1: func_237(joaat("sp1_money_spent_on_tattoos"), iParam3); break;

			case 2: func_237(joaat("sp2_money_spent_on_tattoos"), iParam3); break;
			}
			if (func_285(1)) {
				fVar0 = 0f;
				iVar1 = 1;
			}
			break;

		case 21:
			switch (iParam0) {
			case 0: func_237(joaat("sp0_money_spent_on_taxis"), iParam3); break;

			case 1: func_237(joaat("sp1_money_spent_on_taxis"), iParam3); break;

			case 2: func_237(joaat("sp2_money_spent_on_taxis"), iParam3); break;
			}
			break;

		case 25:
			switch (iParam0) {
			case 0: func_237(joaat("sp0_money_spent_in_strip_clubs"), iParam3); break;

			case 1: func_237(joaat("sp1_money_spent_in_strip_clubs"), iParam3); break;

			case 2: func_237(joaat("sp2_money_spent_in_strip_clubs"), iParam3); break;
			}
			break;

		case 98:
		case 99:
		case 100:
		case 101:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
			switch (iParam0) {
			case 0: func_237(joaat("sp0_money_spent_property"), iParam3); break;

			case 1: func_237(joaat("sp1_money_spent_property"), iParam3); break;

			case 2: func_237(joaat("sp2_money_spent_property"), iParam3); break;
			}
			break;

		default:
			switch (script::get_hash_of_this_script_name()) {
			case joaat("clothes_shop_sp"):
				switch (iParam0) {
				case 0: func_237(joaat("sp0_money_spent_in_clothes"), iParam3); break;

				case 1: func_237(joaat("sp1_money_spent_in_clothes"), iParam3); break;

				case 2: func_237(joaat("sp2_money_spent_in_clothes"), iParam3); break;
				}
				break;

			case joaat("hairdo_shop_sp"):
				switch (iParam0) {
				case 0: func_237(joaat("sp0_money_spent_on_hairdos"), iParam3); break;

				case 1: func_237(joaat("sp1_money_spent_on_hairdos"), iParam3); break;

				case 2: func_237(joaat("sp2_money_spent_on_hairdos"), iParam3); break;
				}
				if (func_285(0)) {
					fVar0 = 0f;
					iVar1 = 0;
				}
				break;

			case joaat("gunclub_shop"):
				switch (iParam0) {
				case 0: func_237(joaat("sp0_money_spent_in_buying_guns"), iParam3); break;

				case 1: func_237(joaat("sp1_money_spent_in_buying_guns"), iParam3); break;

				case 2: func_237(joaat("sp2_money_spent_in_buying_guns"), iParam3); break;
				}
				break;

			case joaat("carmod_shop"):
				switch (iParam0) {
				case 0: func_237(joaat("sp0_money_spent_car_mods"), iParam3); break;

				case 1: func_237(joaat("sp1_money_spent_car_mods"), iParam3); break;

				case 2: func_237(joaat("sp2_money_spent_car_mods"), iParam3); break;
				}
				func_221(iParam3);
				break;
			}
			break;
		}
		break;

	case 1:
		switch (iParam0) {
		case 0: func_215(95, iParam3); break;

		case 1: func_215(97, iParam3); break;

		case 2: func_215(96, iParam3); break;
		}
		func_215(98, iParam3);
		break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor(fVar0 * system::to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f) {
		func_246(iVar1);
		return 1;
	}
	else if (fVar0 != 1f) {
		func_246(iVar1);
	}
	iVar5 = Global_52996[iVar2] + iParam3;
	switch (iParam1) {
	case 1:
		if (Global_52996[iVar2] >= 0 && iParam3 > 0) {
			if (iVar5 <= 0) {
				Global_52996[iVar2] = 2147483647;
			}
			else {
				Global_52996[iVar2] += iParam3;
			}
		}
		switch (iParam0) {
		case 0: func_237(joaat("sp0_total_cash_earned"), iParam3); break;

		case 1: func_237(joaat("sp1_total_cash_earned"), iParam3); break;

		case 2: func_237(joaat("sp2_total_cash_earned"), iParam3); break;
		}
		break;

	case 0:
		if (!iParam4) {
			if (Global_52996[iVar2] - iParam3 < 0) {
				return 0;
			}
		}
		iVar3 = Global_52996[iVar2];
		Global_52996[iVar2] -= iParam3;
		if (iParam4) {
			iVar4 = iVar3;
		}
		break;
	}
	if (iParam2 == 1) {
		if (iVar4 > 20) {
		}
	}
	else {
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 =
			iParam2;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 =
			iParam3;
		Global_101700.f_19523.f_233[iVar2 /*69*/]++;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_1++;
		if (Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 > 10) {
			Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_220(iParam0);
	if (Global_35781 == 15) {
		func_219(0);
	}
	return 1;
}

// Position - 0x42159
void func_219(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3) {
		iVar1 = 0;
		while (iVar1 < 11) {
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 =
				Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 =
				Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 =
				Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10) {
		Global_53004[iVar0 /*3*/][0] = Global_101700.f_19523[iVar0];
		Global_53004.f_31[iVar0 /*3*/][0] = Global_101700.f_19523.f_11[iVar0];
		Global_53004.f_62[iVar0 /*3*/][0] = Global_101700.f_19523.f_22[iVar0];
		Global_53004.f_93[iVar0 /*3*/][0] = Global_101700.f_19523.f_33[iVar0];
		Global_53004.f_124[iVar0 /*3*/][0] = Global_101700.f_19523.f_44[iVar0];
		Global_53004.f_155[iVar0 /*3*/][0] = Global_101700.f_19523.f_55[iVar0];
		Global_53004.f_186[iVar0 /*3*/][0] = Global_101700.f_19523.f_66[iVar0];
		Global_53004.f_217[iVar0 /*3*/][0] = Global_101700.f_19523.f_77[iVar0];
		Global_53004.f_248[iVar0 /*3*/][0] = Global_101700.f_19523.f_88[iVar0];
		if (!iParam0) {
			Global_53004[iVar0 /*3*/][1] = Global_101700.f_19523[iVar0];
			Global_53004.f_31[iVar0 /*3*/][1] = Global_101700.f_19523.f_11[iVar0];
			Global_53004.f_62[iVar0 /*3*/][1] = Global_101700.f_19523.f_22[iVar0];
			Global_53004.f_93[iVar0 /*3*/][1] = Global_101700.f_19523.f_33[iVar0];
			Global_53004.f_124[iVar0 /*3*/][1] = Global_101700.f_19523.f_44[iVar0];
			Global_53004.f_155[iVar0 /*3*/][1] = Global_101700.f_19523.f_55[iVar0];
			Global_53004.f_186[iVar0 /*3*/][1] = Global_101700.f_19523.f_66[iVar0];
			Global_53004.f_217[iVar0 /*3*/][1] = Global_101700.f_19523.f_77[iVar0];
			Global_53004.f_248[iVar0 /*3*/][1] = Global_101700.f_19523.f_88[iVar0];
		}
		iVar0++;
	}
}

// Position - 0x423DB
void func_220(int iParam0) {
	int iVar0;

	iVar0 = Global_52996[iParam0];
	switch (iParam0) {
	case 0: stats::stat_set_int(joaat("sp0_total_cash"), iVar0, 1); break;

	case 1: stats::stat_set_int(joaat("sp1_total_cash"), iVar0, 1); break;

	case 2: stats::stat_set_int(joaat("sp2_total_cash"), iVar0, 1); break;
	}
}

// Position - 0x42435
void func_221(int iParam0) {
	func_215(93, iParam0);
	func_215(29, iParam0);
	func_215(30, iParam0);
}

// Position - 0x42455
int func_222(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (player::has_achievement_been_passed(27)) {
		return 0;
	}
	if (stats::stat_get_int(joaat("sp0_money_total_spent"), &iVar0, -1)) {
		iVar1 += iVar0;
	}
	if (stats::stat_get_int(joaat("sp1_money_total_spent"), &iVar0, -1)) {
		iVar1 += iVar0;
	}
	if (stats::stat_get_int(joaat("sp2_money_total_spent"), &iVar0, -1)) {
		iVar1 += iVar0;
	}
	if (iParam0) {
	}
	iVar2 = 0;
	stats::stat_get_int(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && iVar2 / 2000000 != iVar1 / 2000000) {
		stats::stat_set_int(joaat("num_cash_spent"), iVar1, 1);
		func_236(27, iVar1);
	}
	if (iVar1 < 200000000) {
		return 0;
	}
	func_223(27, 1);
	return 1;
}

// Position - 0x4250C
int func_223(int iParam0, int iParam1) {
	if (iParam0 >= 70) {
		return 0;
	}
	return func_224(iParam0, iParam1);
}

// Position - 0x42527
int func_224(int iParam0, int iParam1) {
	if (func_319(14) && !func_235(iParam0)) {
		return 0;
	}
	if (player::has_achievement_been_passed(iParam0) && iParam1 == 1) {
		return 0;
	}
	if (Global_25436 != 0 && !Global_69702) {
		return 0;
	}
	if (func_234(&Global_2595550)) {
		if (func_232(&Global_2595550, iParam0)) {
			return 0;
		}
		if (func_225(&Global_2595550, iParam0)) {
			return 1;
		}
	}
	else {
		if (!player::give_achievement_to_player(iParam0)) {
			return 0;
		}
		if (player::has_achievement_been_passed(iParam0)) {
			return 1;
		}
		return 0;
	}
	return 0;
}

// Position - 0x425C4
bool func_225(var *uParam0, int iParam1) {
	int iVar0;
	var *uVar1[70];

	if (player::has_achievement_been_passed(iParam1)) {
		return false;
	}
	if (func_319(14) && !func_235(iParam1)) {
		return false;
	}
	if (func_232(uParam0, iParam1)) {
		return false;
	}
	if (func_231(uParam0) < 0f) {
		func_230(uParam0, 0);
	}
	func_228(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1) {
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_226(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

// Position - 0x42675
int func_226(var *uParam0, int iParam1) {
	int iVar0;

	if (player::has_achievement_been_passed(iParam1)) {
		return 0;
	}
	if (func_319(14) && !func_235(iParam1)) {
		return 0;
	}
	if (func_232(uParam0, iParam1)) {
		return 0;
	}
	if (func_231(uParam0) < 0f) {
		func_230(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if (func_227(uParam0, iVar0)) {
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x426F0
bool func_227(var *uParam0, int iParam1) { return (*uParam0)[iParam1] == 70; }

// Position - 0x42701
void func_228(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		func_229(uParam0, iVar0);
		iVar0++;
	}
	func_230(uParam0, Global_2595549 - 0.5f);
}

// Position - 0x42735
void func_229(var *uParam0, int iParam1) { (*uParam0)[iParam1] = 70; }

// Position - 0x42745
void func_230(var *uParam0, float fParam1) {
	if (fParam1 == 0f) {
		uParam0->f_72 = 0f;
	}
	else {
		uParam0->f_72 = fParam1;
	}
}

// Position - 0x42762
float func_231(var *uParam0) { return uParam0->f_72; }

// Position - 0x4276E
bool func_232(var *uParam0, int iParam1) { return func_233(uParam0, iParam1) != -1; }

// Position - 0x42780
int func_233(var *uParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if ((*uParam0)[iVar0] == iParam1) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x427AD
bool func_234(var *uParam0) { return uParam0->f_71 == 1; }

// Position - 0x427BB
int func_235(int iParam0) {
	switch (iParam0) {
	case 60:
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
	case 66:
	case 67:
	case 68:
	case 69: return 1;

	default:
	}
	return 0;
}

// Position - 0x4280B
int func_236(int iParam0, int iParam1) {
	int iVar0;

	if (iParam0 < 0) {
		return 0;
	}
	if (iParam0 > 70) {
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100) {
		return 0;
	}
	iVar0 = player::_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0) {
		return player::_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

// Position - 0x4285C
void func_237(int iParam0, int iParam1) {
	int iVar0;

	stats::stat_get_int(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	stats::stat_set_int(iParam0, iVar0, 1);
}

// Position - 0x4287F
void func_238() {
	int iVar0;

	if (network::network_is_signed_in()) {
		stats::stat_get_int(joaat("sp0_total_cash"), &iVar0, -1);
		if (Global_52996[0] != iVar0) {
			Global_52996[0] = iVar0;
		}
		stats::stat_get_int(joaat("sp1_total_cash"), &iVar0, -1);
		if (Global_52996[1] != iVar0) {
			Global_52996[1] = iVar0;
		}
		stats::stat_get_int(joaat("sp2_total_cash"), &iVar0, -1);
		if (Global_52996[2] != iVar0) {
			Global_52996[2] = iVar0;
		}
	}
}

// Position - 0x428F4
int func_239() {
	func_240();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x4290D
void func_240() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_243(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_242(player::player_ped_id());
			if (func_241(iVar0) && (!func_319(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_241(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x42A0A
bool func_241(int iParam0) { return iParam0 < 3; }

// Position - 0x42A16
int func_242(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_243(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x42A53
int func_243(int iParam0) {
	if (func_241(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x42A7D
int func_244(int iParam0) {
	int iVar0;

	if (iParam0) {
		iVar0 = networkcash::network_get_vc_bank_balance();
	}
	iVar0 += networkcash::network_get_vc_wallet_balance(-1);
	return iVar0;
}

// Position - 0x42A9C
int func_245(int iParam0) {
	if (iParam0 >= 0 && iParam0 < 5) {
		return Global_2590252[iParam0 /*76*/];
	}
	return -1;
}

// Position - 0x42AC0
void func_246(int iParam0) {
	bool bVar0;
	char cVar1[64];

	bVar0 = false;
	if (!network::network_is_game_in_progress()) {
		if (gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0)) {
			bVar0 = true;
			gameplay::clear_bit(&Global_101700.f_19523.f_471, iParam0);
		}
	}
	else if (gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0) ||
			 gameplay::is_bit_set(Global_2097152[func_248() /*10758*/].f_7546.f_10, iParam0)) {
		bVar0 = true;
		gameplay::clear_bit(&Global_101700.f_19523.f_471, iParam0);
		gameplay::clear_bit(&Global_2097152[func_248() /*10758*/].f_7546.f_10, iParam0);
	}
	if (bVar0) {
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		ui::_set_notification_text_entry("COUP_RED");
		ui::add_text_component_substring_text_label(func_247(iParam0));
		ui::_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

// Position - 0x42B83
char *func_247(int iParam0) {
	switch (iParam0) {
	case 0: return "COUP_HAIRC";

	case 1: return "COUP_TATTOO";

	case 2: return "COUP_WARSTOCK";

	case 3: return "COUP_MOSPORT";

	case 4: return "COUP_ELITAS";

	case 5: return "COUP_MEDSPENS";

	case 6: return "COUP_SPRUNK";

	case 7: return "COUP_RESPRAY";

	default:
	}
	return "";
}

// Position - 0x42BFE
int func_248() {
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

// Position - 0x42C0B
void func_249(int iParam0) {
	int iVar0;

	iVar0 = 0;
	if (!func_284()) {
		iVar0 = 1;
	}
	if (iParam0 != -1) {
		if (func_252(iParam0)) {
			if (!iVar0) {
				unk3::_0xFA336E7F40C0A0D0();
			}
		}
		else if (!iVar0) {
			unk3::_network_shop_end_service(Global_2590252[iParam0 /*76*/]);
		}
		func_250(&Global_2590252[iParam0 /*76*/]);
	}
}

// Position - 0x42C5D
void func_250(var *uParam0) {
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_251(&uParam0->f_8.f_3);
	func_251(&uParam0->f_8.f_16);
	StringCopy(&uParam0->f_8.f_29, "", 32);
	StringCopy(&uParam0->f_8.f_37, "", 24);
	StringCopy(&uParam0->f_8.f_43, "", 16);
	StringCopy(&uParam0->f_8.f_47, "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
}

// Position - 0x42D48
void func_251(var *uParam0) {
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

// Position - 0x42D90
bool func_252(int iParam0) {
	if (iParam0 >= 0 && iParam0 < 5) {
		return Global_2590252[iParam0 /*76*/].f_5 == 1;
	}
	return false;
}

// Position - 0x42DB8
int func_253() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5) {
		if (func_245(iVar0) != 2147483647) {
			if (func_252(iVar0)) {
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x42DF2
int func_254(var *uParam0, int iParam1, int iParam2) {
	if (iParam1 == -1) {
		return 1;
	}
	func_267(uParam0, iParam2, 0);
	if (network::network_is_game_in_progress() && !iParam2) {
		if (gameplay::absi(network::get_time_difference(network::get_network_time(), *uParam0)) >= iParam1) {
			return 1;
		}
	}
	else if (gameplay::absi(network::get_time_difference(gameplay::get_game_timer(), *uParam0)) >= iParam1) {
		return 1;
	}
	return 0;
}

// Position - 0x42E50
void func_255(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (!network::_0x883D79C4071E18B3()) {
		return;
	}
	if (network::network_is_game_in_progress() && func_259(player::player_id(), 1)) {
		return;
	}
	if (controls::is_control_pressed(2, 199) || controls::is_disabled_control_pressed(2, 199)) {
		return;
	}
	if (ui::get_pause_menu_state() != 0) {
		return;
	}
	if (ui::is_pause_menu_active()) {
		return;
	}
	if (player::is_system_ui_being_displayed()) {
		return;
	}
	if (ui::is_warning_message_active()) {
		return;
	}
	if (func_258()) {
		return;
	}
	if (!func_256()) {
		return;
	}
	if (network::network_is_game_in_progress() || iParam0) {
		if (!Global_91543.f_1361 && !network::_0x2EAC52B4019E2782()) {
			iVar0 = 18;
			ui::_set_warning_message_2("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1);
			Global_2453572 = iParam1;
			Global_91543.f_1361 = 1;
			Global_91543.f_1362 = iParam2;
		}
	}
}

// Position - 0x42F29
int func_256() {
	if (func_257()) {
		return 0;
	}
	if (network::network_is_cloud_available() == 0) {
		return 0;
	}
	return 1;
}

// Position - 0x42F49
bool func_257() { return Global_2453019; }

// Position - 0x42F55
bool func_258() { return Global_2453677; }

// Position - 0x42F61
int func_259(int iParam0, int iParam1) {
	if (iParam1) {
		if (func_260(iParam0)) {
			return 1;
		}
	}
	if (Global_1591201[iParam0 /*602*/] == -1) {
		return 0;
	}
	return 1;
}

// Position - 0x42F8D
bool func_260(int iParam0) { return func_261(iParam0); }

// Position - 0x42F9B
var func_261(int iParam0) { return gameplay::is_bit_set(Global_1591201[iParam0 /*602*/].f_13.f_1, 0); }

// Position - 0x42FB5
void func_262(int iParam0, int iParam1, int iParam2) {
	Global_91543.f_1363 = iParam0;
	Global_91543.f_1364 = iParam1;
	Global_91543.f_1365 = iParam2;
}

// Position - 0x42FD8
void func_263() {
	if (Global_14443.f_1 != 1) {
		if (func_266(0)) {
			func_264(0);
		}
		gameplay::set_bit(&G_SleepModeOffOn11, 2);
	}
}

// Position - 0x43000
void func_264(int iParam0) {
	if (Global_14604) {
		func_265(0, 0);
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
	if (!func_202()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x43070
void func_265(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_266(0)) {
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

// Position - 0x430E4
bool func_266(int iParam0) {
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

// Position - 0x4313E
void func_267(var *uParam0, int iParam1, int iParam2) {
	if (uParam0->f_1 == 0) {
		if (network::network_is_game_in_progress() && !iParam1) {
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

// Position - 0x43183
int func_268(int iParam0) {
	int iVar0;

	iVar0 = dlc1::get_hash_name_for_component(iParam0, 8, ped::get_ped_drawable_variation(iParam0, 8),
											  ped::get_ped_texture_variation(iParam0, 8));
	if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, 391733089, 0) && dlc1::_0x341DE7ED1D2A1BFD(iVar0, -1889900289, 0)) {
		return 1;
	}
	return 0;
}

// Position - 0x431CA
bool func_269(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = dlc1::get_hash_name_for_component(iParam0, iParam1, ped::get_ped_drawable_variation(iParam0, iParam1),
											  ped::get_ped_texture_variation(iParam0, iParam1));
	if (dlc1::_0x341DE7ED1D2A1BFD(iVar0, -713698407, 0)) {
		return true;
	}
	return false;
}

// Position - 0x43200
int func_270() { return entity::get_entity_model(player::player_ped_id()); }

// Position - 0x43210
void func_271() { Global_2433125.f_655.f_10 = 1; }

// Position - 0x43222
void func_272(int *iParam0) {
	int iVar0;

	if (*iParam0 == -1) {
		return;
	}
	iVar0 = func_273(*iParam0);
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

// Position - 0x43279
int func_273(int iParam0) {
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

// Position - 0x432B4
bool func_274(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iLocal_99) {
		switch (iLocal_100) {
		case 0:
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = iParam3;
			if (iParam4) {
				iVar2 = 0;
			}
			if (networkcash::network_get_vc_bank_balance() > 0) {
				if (networkcash::network_get_vc_bank_balance() >= iVar2) {
					iVar1 = iVar2;
				}
				else {
					iVar1 = iVar2 - (iVar2 - networkcash::network_get_vc_bank_balance());
				}
				iVar2 -= iVar1;
			}
			if (iVar2 > 0) {
				if (networkcash::network_get_vc_wallet_balance(-1) > 0) {
					if (networkcash::network_get_vc_wallet_balance(-1) >= iVar2) {
						iVar0 = iVar2;
					}
					else {
						iVar0 = iVar2 - (iVar2 - networkcash::network_get_vc_wallet_balance(-1));
					}
					iVar2 -= iVar0;
				}
			}
			if (func_280(78225582, iParam1, -1829785317, iParam2, 1, iParam3, 1, 8, 0, 3)) {
				if (iParam4) {
					if (func_280(78225582, iParam1, -1829785317, iParam2, 1, 0, 1, 8, 283722020, 3)) {
					}
					else {
						iLocal_100 = 3;
						return true;
					}
				}
				if (func_278()) {
					ui::_0x170F541E1CADD1DE(1);
					ui::_set_player_cash_change(-iVar0, -iVar1);
					iLocal_100 = 1;
				}
				else {
					iLocal_100 = 3;
				}
			}
			else {
				iLocal_100 = 3;
			}
			break;

		case 1:
			if (func_277(func_253())) {
				if (func_276(func_253()) == 2) {
					iLocal_100 = 2;
				}
				else {
					iLocal_100 = 3;
				}
			}
			break;

		case 2:
			iLocal_99 = 0;
			iLocal_100 = 0;
			ui::_0x170F541E1CADD1DE(0);
			ui::hide_hud_component_this_frame(13);
			*iParam0 = 2;
			return false;

		case 3:
			func_249(func_253());
			iLocal_99 = 0;
			iLocal_100 = 0;
			ui::_0x170F541E1CADD1DE(0);
			ui::hide_hud_component_this_frame(13);
			*iParam0 = 0;
			return false;
		}
		func_275(player::player_id(), 1, 1);
		return true;
	}
	iLocal_100 = 0;
	*iParam0 = -1;
	return false;
}

// Position - 0x4343F
bool func_275(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1) {
		if (network::network_is_player_active(iParam0)) {
			if (iParam1) {
				if (!player::is_player_playing(iParam0)) {
					return false;
				}
			}
			if (iParam2) {
				if (!Global_2433125.f_3[iVar0]) {
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

// Position - 0x43489
int func_276(int iParam0) {
	if (iParam0 >= 0 && iParam0 < 5) {
		return Global_2590252[iParam0 /*76*/].f_2;
	}
	return 0;
}

// Position - 0x434AF
bool func_277(int iParam0) {
	if (iParam0 >= 0 && iParam0 < 5) {
		return Global_2590252[iParam0 /*76*/].f_2 != 1;
	}
	return false;
}

// Position - 0x434D7
bool func_278() {
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	if (!func_284()) {
		bVar0 = true;
	}
	iVar1 = func_253();
	if (iVar1 == -1) {
		return false;
	}
	if (!bVar0) {
		if (!unk3::_network_shop_get_transactions_enabled_for_character(func_14()) ||
			unk3::_network_shop_get_transactions_disabled()) {
			if (func_279(Global_2590252[iVar1 /*76*/].f_6, Global_2590252[iVar1 /*76*/].f_4,
						 Global_2590252[iVar1 /*76*/].f_1) == 1) {
				Global_2590762 = 1;
			}
			return false;
		}
		if (Global_2453677) {
			if (Global_2590252[iVar1 /*76*/].f_6 == 1067618600 || Global_2590252[iVar1 /*76*/].f_6 == -1303831698) {
				Global_2590763 = 1;
				return false;
			}
		}
	}
	iVar2 = func_245(iVar1);
	if (iVar2 != 2147483647) {
		if (bVar0 || unk3::_network_shop_checkout_start(iVar2)) {
			if (bVar0) {
				Global_2590252[iVar1 /*76*/].f_69 = 1;
			}
			Global_2590252[iVar1 /*76*/].f_75 = 0;
			Global_2590752 = 1;
			return true;
		}
	}
	return false;
}

// Position - 0x435C9
int func_279(int iParam0, int iParam1, int iParam2) {
	if (iParam0 == -433440095 || iParam0 == 1474183246) {
		switch (iParam1) {
		case 1940862352:
			if (iParam2 >= 10000) {
				return 1;
			}
			else {
				return 0;
			}
			break;

		case -31156877:
			if (iParam2 >= 1000) {
				return 1;
			}
			else {
				return 2;
			}
			break;

		case 1718438689:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240: return 1;

		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case 291576838:
		case -1276678868:
		case 711665950:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 283351220:
		case 1108628223:
		case -876847842:
		case 68030260: return 2;

		default: return 0;
		}
	}
	else if (iParam0 == -1134853190 || iParam0 == 925407197 || iParam0 == -1589378882) {
		return 0;
	}
	return 1;
}

// Position - 0x4385F
bool func_280(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8, int iParam9) {
	int iVar0;
	int iVar1;
	struct<4> Var2;

	iVar0 = 0;
	if (!func_284()) {
		iVar0 = 1;
	}
	if (!iVar0) {
		if (!unk3::_network_shop_get_transactions_enabled_for_character(func_14()) ||
			unk3::_network_shop_get_transactions_disabled()) {
			Global_2590762 = 1;
			return false;
		}
		if (Global_2453677) {
			if (iParam1 == 1067618600 || iParam1 == -1303831698) {
				Global_2590763 = 1;
				return false;
			}
		}
	}
	iVar1 = func_253();
	if (iVar1 == -1) {
		if (!func_282(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9)) {
			return false;
		}
	}
	if (iVar1 != -1) {
		if (iParam8 != 0 && func_281(iParam1)) {
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else {
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_2590252[iVar1 /*76*/].f_73 = Var2;
		Global_2590252[iVar1 /*76*/].f_74 = Var2.f_1;
		if (iVar0 || unk3::_network_shop_basket_add_item(&Var2, iParam4)) {
			return true;
		}
	}
	return false;
}

// Position - 0x43963
int func_281(int iParam0) {
	switch (iParam0) {
	case -221807075:
	case -1224924353:
	case -2121967344:
	case 1394405165:
	case -2052814106:
	case 1701289268:
	case -1796535835:
	case -1928802392:
	case 581564040:
	case 23048035:
	case 2117376854:
	case -1377881127:
	case -504675202:
	case 1906937290:
	case -1616616027:
	case -1799524201:
	case 269396419:
	case 69656641:
	case -103880010:
	case -1494913648: return 1;
	}
	return 0;
}

// Position - 0x439F2
int func_282(int *iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5) {
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = 0;
	if (!func_284()) {
		iVar0 = 1;
	}
	if (!iVar0) {
		if (!unk3::_network_shop_get_transactions_enabled_for_character(func_14()) ||
			unk3::_network_shop_get_transactions_disabled()) {
			Global_2590762 = 1;
			return 0;
		}
		if (Global_2453677) {
			if (iParam2 == 1067618600 || iParam2 == -1303831698) {
				Global_2590763 = 1;
				return 0;
			}
		}
	}
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 5) {
		if (Global_2590252[iVar1 /*76*/].f_2 == 0) {
			iVar2 = 1;
		}
		else if (Global_2590252[iVar1 /*76*/].f_5 == 1) {
			return 0;
		}
		iVar1++;
	}
	if (!iVar2) {
		return 0;
	}
	*iParam0 = 0;
	if (!iVar0) {
		if (unk3::_network_shop_basket_end()) {
			unk3::_0xFA336E7F40C0A0D0();
		}
	}
	if (iVar0 || unk3::_network_shop_basket_start(&uVar3, iParam2, iParam3, iParam4)) {
		*iParam0 = func_283(uVar3, uParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5);
		return 1;
	}
	return 0;
}

// Position - 0x43AE7
int func_283(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 var uParam8) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5) {
		if (Global_2590252[iVar0 /*76*/].f_2 == 0) {
			if (!func_284()) {
				uParam0 = iVar0 + 900;
			}
			Global_2590252[iVar0 /*76*/].f_2 = 1;
			Global_2590252[iVar0 /*76*/].f_1 = iParam5;
			Global_2590252[iVar0 /*76*/].f_3 = uParam1;
			Global_2590252[iVar0 /*76*/].f_4 = iParam2;
			Global_2590252[iVar0 /*76*/].f_7 = iParam3;
			Global_2590252[iVar0 /*76*/].f_5 = 0;
			Global_2590252[iVar0 /*76*/] = uParam0;
			Global_2590252[iVar0 /*76*/].f_6 = iParam4;
			Global_2590252[iVar0 /*76*/].f_72 = uParam8;
			Global_2590252[iVar0 /*76*/].f_71 = iParam7;
			Global_2590252[iVar0 /*76*/].f_75 = 0;
			Global_2590752 = 0;
			if (iParam6) {
				Global_2590252[iVar0 /*76*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x43BBB
bool func_284() {
	if (gameplay::is_pc_version()) {
		return true;
	}
	return false;
}

// Position - 0x43BCF
bool func_285(int iParam0) {
	if (!network::network_is_game_in_progress()) {
		return gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0);
	}
	return gameplay::is_bit_set(Global_2097152[func_248() /*10758*/].f_7546.f_10, iParam0);
}

// Position - 0x43C0B
bool func_286(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = func_273(iParam0);
	if (iVar0 == -1) {
		return false;
	}
	if (!player::is_player_playing(player::get_player_index())) {
		return false;
	}
	if (func_266(0)) {
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

// Position - 0x43CC3
void func_287(int iParam0, int iParam1, char *sParam2, int iParam3, char *sParam4, int iParam5, int iParam6) {
	int iVar0;

	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("context_controller")) < 1) {
	}
	if (streaming::is_player_switch_in_progress()) {
		if (*iParam0 != -1) {
			func_272(iParam0);
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

// Position - 0x43DEE
bool func_288() { return gameplay::get_game_timer() <= Global_17290.f_5745 + 100; }

// Position - 0x43E03
int func_289() {
	if (Global_69702) {
		if (func_244(1) > 0) {
			return 1;
		}
	}
	else if (func_290(func_239()) > 0) {
		return 1;
	}
	return 0;
}

// Position - 0x43E33
int func_290(int iParam0) {
	var uVar0;

	switch (iParam0) {
	case 0: stats::stat_get_int(joaat("sp0_total_cash"), &uVar0, -1); return uVar0;

	case 1: stats::stat_get_int(joaat("sp1_total_cash"), &uVar0, -1); return uVar0;

	case 2: stats::stat_get_int(joaat("sp2_total_cash"), &uVar0, -1); return uVar0;

	default:
	}
	return 0;
}

// Position - 0x43E8B
bool func_291() { return gameplay::is_bit_set(Global_2494199.f_4449, 24); }

// Position - 0x43EA0
bool func_292(int iParam0, int iParam1) { return gameplay::is_bit_set(Global_2421664[iParam0 /*358*/].f_211, iParam1); }

// Position - 0x43EB9
int func_293(int iParam0) {
	if (func_296(iParam0)) {
		return 1;
	}
	if (func_294(iParam0)) {
		return 1;
	}
	return 0;
}

// Position - 0x43EDC
bool func_294(int iParam0) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1) {
		return func_295(iParam0, 9);
	}
	return false;
}

// Position - 0x43EFA
var func_295(int iParam0, int iParam1) {
	return gameplay::is_bit_set(Global_1619421[iParam0 /*390*/].f_11.f_4, iParam1);
}

// Position - 0x43F15
bool func_296(var uParam0) {
	int iVar0;

	iVar0 = uParam0;
	if (iVar0 != -1) {
		return gameplay::is_bit_set(Global_1619421[iVar0 /*390*/].f_1, 0);
	}
	return false;
}

// Position - 0x43F3B
int func_297(int iParam0) {
	if (interior::get_room_key_from_entity(iParam0) == gameplay::get_hash_key("V_7_RecAreaRm") ||
		interior::get_room_key_from_entity(iParam0) == gameplay::get_hash_key("V_7_GunSHopRm")) {
		if (object::is_object_near_point(joaat("v_ret_gc_chair02"), vLocal_72, 1f)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x43F80
bool func_298(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (gameplay::is_minigame_in_progress()) {
		return false;
	}
	if (iParam0) {
		if (entity::is_entity_dead(player::player_ped_id(), 0)) {
			return false;
		}
	}
	iVar0 = 0;
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
			return false;
		}
		iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
		if (iParam0) {
			if (entity::is_entity_dead(iVar0, 0)) {
				return false;
			}
		}
		if (iParam2) {
			if (!entity::is_entity_dead(iVar0, 0)) {
				if (vehicle::get_ped_in_vehicle_seat(iVar0, -1, 0) != player::player_ped_id()) {
					return false;
				}
			}
		}
		if (!entity::is_entity_dead(iVar0, 0)) {
			if (entity::get_entity_upright_value(iVar0) < 0.95f || entity::get_entity_upright_value(iVar0) > 1.011f) {
				return false;
			}
		}
	}
	else if (iParam1) {
		return false;
	}
	if (!player::is_player_ready_for_cutscene(player::player_id())) {
		return false;
	}
	if (!player::can_player_start_mission(player::player_id())) {
		return false;
	}
	return true;
}

// Position - 0x44067
int func_299() {
	if (entity::has_entity_been_damaged_by_any_object(player::player_ped_id()) ||
		entity::has_entity_been_damaged_by_any_ped(player::player_ped_id()) ||
		entity::has_entity_been_damaged_by_any_vehicle(player::player_ped_id()) ||
		weapon::has_entity_been_damaged_by_weapon(player::player_ped_id(), joaat("weapon_smokegrenade"), 0)) {
		entity::clear_entity_last_damage_entity(player::player_ped_id());
		return 1;
	}
	return 0;
}

// Position - 0x440B7
void func_300(int iParam0) {
	if (func_301(player::player_id())) {
		vLocal_81 = {0.6f, 0.3f, 1f};
		vLocal_84 = {0f, -0.65f, 0.05f};
	}
	else {
		vLocal_81 = {vLocal_64};
		vLocal_84 = {vLocal_67};
	}
	vLocal_78 = {entity::get_offset_from_entity_in_world_coords(iParam0, vLocal_84)};
}

// Position - 0x44109
bool func_301(int iParam0) {
	if (iParam0 != func_96()) {
		if (func_275(iParam0, 1, 1)) {
			if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1) {
				return func_302(Global_2421664[iParam0 /*358*/].f_312.f_1) == 1;
			}
		}
	}
	return false;
}

// Position - 0x4414F
int func_302(int iParam0) {
	switch (iParam0) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
	case 21: return 0;

	case 57:
	case 58:
	case 59:
	case 60:
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
	case 66: return 1;

	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
	case 31:
	case 32:
	case 33:
	case 34:
	case 35:
	case 36:
	case 37:
	case 38:
	case 39:
	case 40:
	case 41: return 2;

	case 43:
	case 42:
	case 44:
	case 45:
	case 46:
	case 47:
	case 48:
	case 49:
	case 50:
	case 51:
	case 52:
	case 53:
	case 54:
	case 55:
	case 56: return 3;
	}
	return -1;
}

// Position - 0x4430D
bool func_303(int iParam0) {
	switch (iParam0) {
	case 1:
		if (gameplay::are_strings_equal(sLocal_50, "NULL")) {
			sLocal_50 = "MINI@SPRUNK@FIRST_PERSON";
		}
		break;

	case 2:
		if (gameplay::are_strings_equal(sLocal_50, "NULL")) {
			sLocal_50 = "MINI@SPRUNK@FIRST_PERSON";
		}
		break;

	case 3: break;

	case 4: break;

	case 5: break;

	case 6: break;

	case 7: break;
	}
	sLocal_50 = "MINI@SPRUNK@FIRST_PERSON";
	streaming::request_anim_dict(sLocal_50);
	if (streaming::has_anim_dict_loaded(sLocal_50)) {
		audio::hint_ambient_audio_bank("VENDING_MACHINE", 0, -1);
		return true;
	}
	return false;
}

// Position - 0x443A2
bool func_304() {
	bool bVar0;
	int *iVar1;

	func_310(&bVar0, &iVar1);
	if (bVar0) {
		return true;
	}
	if (Global_1315210 == 0) {
		if (!network::network_is_game_in_progress()) {
			return true;
		}
	}
	if (func_309()) {
		return true;
	}
	if (Global_2454747) {
		return true;
	}
	if (func_308()) {
		return true;
	}
	if (func_307(157)) {
		if (!func_306()) {
			return true;
		}
	}
	if (func_307(155)) {
		return true;
	}
	if (!network::network_is_signed_online()) {
		return true;
	}
	if (func_305() != 0) {
		if (script::_get_number_of_instances_of_script_with_name_hash(func_305()) == 0) {
			return true;
		}
	}
	return false;
}

// Position - 0x44437
int func_305() {
	switch (func_86()) {
	case 0: return joaat("freemode");

	case 2: return joaat("creator");
	}
	return 0;
}

// Position - 0x4446B
bool func_306() { return Global_2443134.f_577; }

// Position - 0x4447A
bool func_307(int iParam0) {
	if (script::get_event_exists(1, iParam0)) {
		return true;
	}
	return false;
}

// Position - 0x44491
bool func_308() { return Global_2452525; }

// Position - 0x4449D
bool func_309() { return Global_2443134.f_572; }

// Position - 0x444AC
void func_310(int *iParam0, int *iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < script::get_number_of_events(1)) {
		iVar1 = script::get_event_at_index(1, iVar0);
		if (iVar1 == 171) {
			script::get_event_data(1, iVar0, &iVar2, 2);
			switch (iVar2) {
			case 381: func_311(iVar0); break;

			case 2:
				script::get_event_data(1, iVar0, &vVar4, 3);
				if (vVar4.z == 55) {
					*iParam0 = 1;
				}
				else if (vVar4.z == 32) {
					*iParam1 = 1;
				}
				break;
			}
		}
		iVar0++;
	}
}

// Position - 0x4452C
void func_311(int iParam0) {
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (script::get_event_data(1, iParam0, &vVar0, 3)) {
		if (func_275(vVar0.y, 1, 1)) {
			iVar3 = player::get_player_ped(vVar0.y);
			if (entity::does_entity_exist(iVar3)) {
				if (ped::is_ped_in_any_vehicle(iVar3, 0)) {
					iVar4 = ped::get_vehicle_ped_is_in(iVar3, 0);
					if (vehicle::is_vehicle_window_intact(iVar4, vVar0.z) &&
						network::network_get_this_script_is_network_script()) {
						if (func_312(iVar4, &bVar5)) {
							vehicle::remove_vehicle_window(iVar4, vVar0.z);
						}
						if (bVar5) {
							entity::set_vehicle_as_no_longer_needed(&iVar4);
						}
					}
				}
			}
		}
	}
}

// Position - 0x445AD
bool func_312(int iParam0, int *iParam1) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_a_mission_entity(iParam0)) {
			if (network::network_get_entity_is_local(iParam0)) {
				if (!vehicle::is_this_model_a_train(entity::get_entity_model(iParam0))) {
					entity::set_entity_as_mission_entity(iParam0, 0, 1);
					*iParam1 = 1;
				}
			}
		}
		if (entity::does_entity_belong_to_this_script(iParam0, 0)) {
			if (network::network_has_control_of_entity(iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x4460C
void func_313() {
	if (network::network_is_game_in_progress()) {
		bLocal_98 = true;
		network::network_set_this_script_is_network_script(32, 0, -1);
		func_314(0, -1, 0);
		gameplay::set_this_script_can_be_paused(0);
	}
}

// Position - 0x44633
int func_314(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = network::network_get_script_status();
	while (iVar0 != 2) {
		if (iVar0 == 3 || iVar0 == 4 || iVar0 == 5 || iVar0 == 6) {
			if (!iParam2) {
				func_316();
			}
			else {
				return 0;
			}
		}
		if (!func_315()) {
			if (iParam0 == 0) {
				if (!network::network_is_game_in_progress()) {
					if (!iParam2) {
						func_316();
					}
					else {
						return 0;
					}
				}
				if (func_309()) {
					if (!iParam2) {
						func_316();
					}
					else {
						return 0;
					}
				}
				if (func_307(155)) {
					if (!iParam2) {
						func_316();
					}
					else {
						return 0;
					}
				}
			}
			else if (!network::network_is_in_session()) {
				if (!iParam2) {
					func_316();
				}
				else {
					return 0;
				}
			}
		}
		system::wait(0);
		iVar0 = network::network_get_script_status();
	}
	if (iParam1 > -1) {
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0) {
		if (!network::network_is_game_in_progress()) {
			if (!iParam2) {
				func_316();
			}
			else {
				return 0;
			}
		}
	}
	else if (!network::network_is_in_session()) {
		if (!iParam2) {
			func_316();
		}
		else {
			return 0;
		}
	}
	return 1;
}

// Position - 0x44748
bool func_315() { return Global_1315210; }

// Position - 0x44754
void func_316() { script::terminate_this_thread(); }

// Position - 0x44760
void func_317() {}

// Position - 0x44768
int func_318(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (entity::get_entity_model(iParam0) == iLocal_89) {
			return 1;
		}
		else if (entity::get_entity_model(iParam0) == iLocal_90) {
			return 2;
		}
		else if (entity::get_entity_model(iParam0) == iLocal_91) {
			return 3;
		}
		else if (entity::get_entity_model(iParam0) == iLocal_92) {
			return 4;
		}
		else if (entity::get_entity_model(iParam0) == iLocal_93) {
			return 5;
		}
		else if (entity::get_entity_model(iParam0) == iLocal_94) {
			return 6;
		}
		else if (entity::get_entity_model(iParam0) == iLocal_95) {
			return 7;
		}
	}
	return 0;
}

// Position - 0x447F5
bool func_319(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x44803
void func_320() {
	if (gameplay::is_bit_set(iLocal_97, 0)) {
		ped::set_ped_using_action_mode(player::player_ped_id(), 1, -1, 0);
		gameplay::clear_bit(&iLocal_97, 0);
	}
	if (iLocal_51) {
		player::set_player_control(player::player_id(), 1, 0);
	}
	if (!gameplay::are_strings_equal(sLocal_50, "NULL")) {
		streaming::remove_anim_dict(sLocal_50);
		streaming::set_model_as_no_longer_needed(114933932);
		audio::release_ambient_audio_bank();
		func_272(&iLocal_71);
	}
	if (entity::does_entity_exist(iLocal_55) && entity::is_entity_a_mission_entity(iLocal_55)) {
		entity::detach_entity(iLocal_55, 1, 1);
		object::delete_object(&iLocal_55);
	}
	if (Global_69702) {
		if (Global_25441) {
			func_7();
		}
	}
	Global_25441 = 0;
	script::terminate_this_thread();
}
