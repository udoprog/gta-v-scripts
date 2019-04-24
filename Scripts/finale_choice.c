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
#pragma endregion //}

void __EntryFunction__() {
	int iVar0;

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
	iLocal_28 = 1;
	if (player::has_force_cleanup_occurred(18)) {
		func_38();
	}
	func_37(20);
	func_36();
	func_35(1);
	func_35(0);
	func_35(2);
	func_35(13);
	func_35(12);
	Global_2318 = 1;
	func_34();
	if (!func_33(-1615086084)) {
		func_32(-1615086084, 2, 2, 2, 1, -1, 5);
	}
	if (!func_33(-1970925435)) {
		func_32(-1970925435, 2, 0, 0, 1, -1, 5);
	}
	if (!func_33(-1817481777)) {
		func_32(-1817481777, 2, 12, 3, 1, -1, 5);
	}
	iVar0 = 0;
	while (func_31(23) && !func_30(134)) {
		if (func_26() == 1) {
			if (entity::does_entity_exist(player::player_ped_id())) {
				if (!ped::is_ped_injured(player::player_ped_id())) {
					if (!ped::is_ped_falling(player::player_ped_id()) &&
						!entity::is_entity_in_water(player::player_ped_id()) &&
						!fire::is_entity_on_fire(player::player_ped_id())) {
						if (!iVar0) {
							if (!(func_25() || streaming::is_player_switch_in_progress() || func_24())) {
								if (func_13()) {
									iVar0 = 1;
								}
							}
						}
						else {
							if (iLocal_28) {
								player::set_player_control(player::player_id(), 0, 384);
								ped::set_ped_max_move_blend_ratio(player::player_ped_id(), 0f);
								controls::enable_control_action(0, 173, 1);
								controls::enable_control_action(0, 172, 1);
								controls::enable_control_action(0, 174, 1);
								controls::enable_control_action(0, 175, 1);
								controls::enable_control_action(0, 176, 1);
								controls::enable_control_action(0, 177, 1);
								controls::enable_control_action(0, 178, 1);
								controls::enable_control_action(0, 179, 1);
								controls::enable_control_action(0, 180, 1);
								controls::enable_control_action(0, 181, 1);
							}
							else {
								player::set_player_control(player::player_id(), 1, 0);
							}
							switch (func_12()) {
							case -1615086084:
								if (!func_33(-1989308064)) {
									func_8(-1989308064, 0, 1, 0, 1, 6000, 6000, -1, 0, -1, 68);
								}
								break;

							case -1989308064:
								func_7(12, 0);
								func_6(134, 1);
								stats::stat_set_int(joaat("sp_final_decision"), 2, 1);
								break;

							case -1970925435:
								if (!func_33(-1060930305)) {
									func_8(-1060930305, 0, 1, 2, 2, 6000, 6000, -1, 0, -1, 68);
								}
								break;

							case -1060930305:
								func_7(12, 1);
								func_6(134, 1);
								stats::stat_set_int(joaat("sp_final_decision"), 1, 1);
								break;

							case -1817481777:
								func_7(12, 2);
								func_6(134, 1);
								stats::stat_set_int(joaat("sp_final_decision"), 3, 1);
								break;

							default:
								if (!func_5(0)) {
									iVar0 = 0;
								}
								else if (iLocal_28) {
									if (func_4()) {
										iLocal_28 = 0;
									}
								}
								break;
							}
						}
					}
				}
			}
		}
		system::wait(0);
	}
	func_3(20);
	Global_91530 = 0;
	func_1();
	func_38();
}

// Position - 0x2F3
int func_1() {
	if (func_2(0)) {
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

// Position - 0x33E
bool func_2(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x369
int func_3(int iParam0) {
	int iVar0;
	int iVar1;

	if (iParam0 <= 31) {
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else {
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}
	if (gameplay::is_bit_set(Global_101700.f_8044.f_99.f_219[iVar0], iVar1)) {
		gameplay::clear_bit(&Global_101700.f_8044.f_99.f_219[iVar0], iVar1);
		return 1;
	}
	return 0;
}

// Position - 0x3C3
bool func_4() {
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
		return true;
	}
	return false;
}

// Position - 0x3EC
int func_5(int iParam0) {
	if (iParam0 == 1) {
		if (Global_14443.f_1 > 3) {
			if (gameplay::is_bit_set(Global_2313, 14)) {
				return 1;
			}
			else {
				return 0;
			}
		}
		else {
			return 0;
		}
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) > 0) {
		return 1;
	}
	if (Global_14443.f_1 > 3) {
		return 1;
	}
	return 0;
}

// Position - 0x446
void func_6(int iParam0, int iParam1) {
	if (iParam0 == 146 || iParam0 == -1) {
		return;
	}
	if (Global_101700.f_8044.f_99.f_58[iParam0] == iParam1) {
		return;
	}
	Global_101700.f_8044.f_99.f_58[iParam0] = iParam1;
}

// Position - 0x48B
void func_7(int iParam0, int iParam1) {
	if (iParam0 == 13 || iParam0 == -1) {
		return;
	}
	if (Global_101700.f_8044.f_99.f_205[iParam0] == iParam1) {
		return;
	}
	Global_101700.f_8044.f_99.f_205[iParam0] = iParam1;
}

// Position - 0x4D0
int func_8(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
		   int iParam8, int iParam9, int iParam10) {
	struct<15> Var0;
	int iVar15;

	if (func_2(0)) {
		return 0;
	}
	if (iParam5 < 0) {
		return 0;
	}
	if (iParam6 < 0) {
		return 0;
	}
	if (iParam7 == 76) {
		return 0;
	}
	if (iParam8 == 235) {
		return 0;
	}
	if (iParam3 == iParam2) {
		return 0;
	}
	if (iParam2 != 144 && iParam2 != 0 && iParam2 != 1 && iParam2 != 2) {
		return 0;
	}
	if (Global_101700.f_6647.f_136 < 9) {
		Var0 = iParam0;
		if (Global_101700.f_6647.f_911 == Var0) {
			Global_101700.f_6647.f_911 = -1;
		}
		Var0.f_3 = func_11(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = gameplay::get_game_timer() + iParam5;
		Var0.f_1 = iParam10;
		iVar15 = 0;
		gameplay::set_bit(&iVar15, iParam2);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		gameplay::set_bit(&Var0.f_1, 0);
		gameplay::clear_bit(&Var0.f_1, 1);
		if (iParam1 == 0) {
			gameplay::set_bit(&Var0.f_1, 10);
		}
		Global_101700.f_6647[Global_101700.f_6647.f_136 /*15*/] = {Var0};
		Global_101700.f_6647.f_136++;
		func_9(iParam2);
		return 1;
	}
	return 0;
}

// Position - 0x621
void func_9(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (!func_10(iParam0)) {
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_136) {
		if (gameplay::is_bit_set(Global_101700.f_6647[iVar0 /*15*/].f_2, iParam0)) {
			if (Global_101700.f_6647[iVar0 /*15*/].f_3 > iVar1) {
				iVar1 = Global_101700.f_6647[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_101700.f_6647.f_764) {
		if (gameplay::is_bit_set(Global_101700.f_6647.f_651[iVar2 /*14*/].f_2, iParam0)) {
			if (Global_101700.f_6647.f_651[iVar2 /*14*/].f_3 == 5) {
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_101700.f_6647.f_919[iParam0] = iVar1;
}

// Position - 0x6E5
bool func_10(int iParam0) { return iParam0 < 3; }

// Position - 0x6F1
int func_11(int iParam0) {
	switch (iParam0) {
	case 0:
	case 4: return 5;

	case 7: return 4;

	case 2: return 3;

	case 1: return 2;

	case 3: return 1;

	case 5:
	case 6: return 0;
	}
	return 7;
}

// Position - 0x75B
int func_12() { return Global_101700.f_6647.f_911; }

// Position - 0x76D
bool func_13() {
	if (Global_14443.f_1 > 3) {
		gameplay::clear_bit(&Global_2314, 0);
		func_21(0);
		return false;
	}
	gameplay::set_bit(&Global_2314, 0);
	if (func_14(0, 0, 1, 1)) {
		return true;
	}
	gameplay::clear_bit(&Global_2314, 0);
	return false;
}

// Position - 0x7B2
bool func_14(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (Global_69702) {
		if (iParam0 != 17 && iParam0 != 3 && iParam0 != 23) {
			return false;
		}
		if (!gameplay::is_bit_set(Global_2595318, 14)) {
			if (iParam0 == 17) {
				gameplay::set_bit(&Global_2595318, 14);
				gameplay::set_bit(&Global_2595318, 16);
			}
			if (iParam0 == 3) {
				gameplay::set_bit(&Global_2595318, 14);
				gameplay::set_bit(&Global_2595318, 15);
			}
			if (iParam0 == 23) {
				gameplay::set_bit(&Global_2595318, 14);
				gameplay::set_bit(&Global_2595318, 27);
			}
		}
		if (Global_2320[iParam0 /*15*/].f_9 == 0) {
			func_20();
		}
		if (script::_get_number_of_instances_of_script_with_name_hash(Global_2320[iParam0 /*15*/].f_9) > 0) {
			gameplay::clear_bit(&Global_2595318, 14);
			gameplay::clear_bit(&Global_2595318, 16);
			gameplay::clear_bit(&Global_2595318, 15);
			gameplay::clear_bit(&Global_2595318, 27);
			return true;
		}
		else {
			return false;
		}
	}
	func_19();
	if (Global_14443.f_1 == 9) {
		return false;
	}
	if (iParam2 == 0) {
		if (func_5(0) == 1) {
			return false;
		}
	}
	if (Global_14409 == 1) {
		return false;
	}
	if (Global_14443.f_1 == 7) {
		return false;
	}
	if (iParam1 == 1) {
	}
	if (!script::is_thread_active(Global_14440)) {
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) == 0) {
			if (Global_14443.f_1 < 4) {
				func_18("cellphone_flashhand");
				if (script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) == 0) {
					Global_14440 = system::start_new_script("cellphone_flashhand", 1424);
				}
				script::set_script_as_no_longer_needed("cellphone_flashhand");
			}
		}
	}
	while (!Global_14425) {
		system::wait(0);
	}
	func_20();
	func_15();
	if (script::_get_number_of_instances_of_script_with_name_hash(Global_2320[iParam0 /*15*/].f_9) == 0) {
		Global_2919 = 0;
		Global_14443.f_1 = 7;
		func_18(&Global_2320[iParam0 /*15*/].f_5);
		if (iParam3) {
			if (script::_get_number_of_instances_of_script_with_name_hash(Global_2320[iParam0 /*15*/].f_9) == 0) {
				Global_14441 = system::start_new_script(&Global_2320[iParam0 /*15*/].f_5, 4000);
			}
		}
		else if (script::_get_number_of_instances_of_script_with_name_hash(Global_2320[iParam0 /*15*/].f_9) == 0) {
			Global_14441 = system::start_new_script(&Global_2320[iParam0 /*15*/].f_5, 2552);
		}
		script::set_script_as_no_longer_needed(&Global_2320[iParam0 /*15*/].f_5);
		return true;
	}
	return true;
}

// Position - 0x9C3
void func_15() {
	if (Global_69702 == 0) {
		Global_2320[14 /*15*/].f_4 = -99;
		Global_2320[4 /*15*/].f_4 = -99;
		if (Global_2452520) {
			if (func_17(14)) {
				func_16(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_16(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else {
				func_16(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else {
			func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

// Position - 0xA47
void func_16(int iParam0, char *sParam1, int iParam2, char *sParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8) {
	StringCopy(&Global_2320[iParam0 /*15*/], sParam1, 16);
	Global_2320[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&Global_2320[iParam0 /*15*/].f_5, sParam3, 16);
	Global_2320[iParam0 /*15*/].f_9 = gameplay::get_hash_key(sParam3);
	Global_2320[iParam0 /*15*/].f_10 = iParam4;
	Global_2320[iParam0 /*15*/].f_11 = iParam5;
	Global_2320[iParam0 /*15*/].f_12 = iParam6;
	Global_2320[iParam0 /*15*/].f_13 = iParam7;
	Global_2320[iParam0 /*15*/].f_14 = iParam8;
	if (Global_2320[iParam0 /*15*/].f_12 == 0) {
		Global_2320[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_2320[iParam0 /*15*/].f_13 == 0) {
		Global_2320[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_2320[iParam0 /*15*/].f_14 == 0) {
		Global_2320[iParam0 /*15*/].f_14 = 0;
	}
}

// Position - 0xAFD
bool func_17(int iParam0) { return Global_35781 == iParam0; }

// Position - 0xB0B
void func_18(char *sParam0) {
	script::request_script(sParam0);
	while (!script::has_script_loaded(sParam0)) {
		system::wait(0);
	}
}

// Position - 0xB2B
void func_19() {
	if (func_17(14)) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[0 /*29*/]) {
				Global_14443 = 0;
			}
			else if (entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[1 /*29*/]) {
				Global_14443 = 1;
			}
			else if (entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[2 /*29*/]) {
				Global_14443 = 2;
			}
			else {
				Global_14443 = 0;
			}
		}
	}
	else {
		Global_14443 = func_26();
		if (Global_14443 == 145) {
			Global_14443 = 3;
		}
		if (Global_69702) {
			Global_14443 = 3;
		}
		if (Global_14443 > 3) {
			Global_14443 = 3;
		}
	}
}

// Position - 0xBCD
void func_20() {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 34) {
		Global_2320[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_69702 == 0) {
		iVar1 = 0;
		while (iVar2 < 150) {
			if (Global_101700.f_27009[iVar2 /*29*/].f_19[Global_14443] == 1) {
				iVar1 = 1;
			}
			iVar2++;
		}
		func_16(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if (Global_35781 == 15 && func_2(0) == 0 && Global_2318 == 0) {
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14607 = 0;
			Global_2319 = 255;
		}
		else {
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14607 = 1;
			Global_2319 = 42;
		}
		if (iVar1 == 1) {
			func_16(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else {
			func_16(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_16(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_101700.f_13010.f_89 == 1) {
			func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_101700.f_13010.f_88 == 1) {
			func_16(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_16(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_16(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else {
		func_16(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_16(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_16(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_16(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_16(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (gameplay::is_bit_set(Global_2595318, 4) == 1) {
			func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_16(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_16(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_16(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_16(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_16(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_16(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_16(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_16(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_16(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_16(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!gameplay::is_bit_set(Global_2595318, 4) == 1) {
			if (Global_1573849) {
				func_16(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (gameplay::is_bit_set(Global_2595318, 20) == 1) {
				func_16(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (gameplay::is_bit_set(Global_2595318, 22) == 1) {
				func_16(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (gameplay::is_bit_set(Global_2595318, 26) == 1) {
				func_16(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if (gameplay::is_bit_set(Global_2595318, 4) == 0 && Global_1573849 == 0 &&
			gameplay::is_bit_set(Global_2595318, 20) == 0 && gameplay::is_bit_set(Global_2595318, 22) == 0 &&
			gameplay::is_bit_set(Global_2595318, 26) == 0) {
			func_16(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

// Position - 0x10E9
void func_21(int iParam0) {
	if (Global_14604) {
		func_23(0, 0);
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
	if (!func_22()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x1159
int func_22() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x1180
void func_23(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_5(0)) {
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

// Position - 0x11F4
int func_24() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0x1210
int func_25() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("player_timetable_scene")) > 0) {
		return 1;
	}
	return 0;
}

// Position - 0x122A
int func_26() {
	func_27();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x1243
void func_27() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_29(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_28(player::player_ped_id());
			if (func_10(iVar0) && (!func_17(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_10(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x1340
int func_28(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_29(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x137D
int func_29(int iParam0) {
	if (func_10(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x13A7
int func_30(int iParam0) {
	if (iParam0 == 146 || iParam0 == -1) {
		return 0;
	}
	return Global_101700.f_8044.f_99.f_58[iParam0];
}

// Position - 0x13D4
int func_31(int iParam0) {
	if (iParam0 == 94 || iParam0 == -1) {
		return 0;
	}
	return Global_101700.f_8044.f_330[iParam0 /*6*/];
}

// Position - 0x1400
int func_32(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	struct<15> Var0;

	if (func_2(0)) {
		return 0;
	}
	if (iParam2 < 3) {
		if (gameplay::is_bit_set(iParam1, iParam2)) {
			return 0;
		}
	}
	if (iParam1 < 1 || iParam1 > 7) {
		return 0;
	}
	if (iParam4 <= 0) {
		return 0;
	}
	if (Global_101700.f_6647.f_650 < 30) {
		Var0 = iParam0;
		if (Global_101700.f_6647.f_911 == Var0) {
			Global_101700.f_6647.f_911 = -1;
		}
		Var0.f_1 = 0;
		Var0.f_6 = iParam2;
		Var0.f_2 = iParam1;
		Var0.f_14 = iParam3;
		Var0.f_3 = iParam6;
		Var0.f_7 = -1;
		Var0.f_8 = 0;
		Var0.f_9 = -1;
		Var0.f_4 = gameplay::get_game_timer() + iParam4;
		Var0.f_9 = iParam5;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		gameplay::set_bit(&Var0.f_1, 0);
		gameplay::set_bit(&Var0.f_1, 6);
		Global_101700.f_6647.f_199[Global_101700.f_6647.f_650 /*15*/] = {Var0};
		Global_101700.f_6647.f_650++;
		return 1;
	}
	return 0;
}

// Position - 0x1506
int func_33(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_136) {
		if (Global_101700.f_6647[iVar0 /*15*/] == iParam0) {
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_650) {
		if (Global_101700.f_6647.f_199[iVar0 /*15*/] == iParam0) {
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_198) {
		if (Global_101700.f_6647.f_137[iVar0 /*15*/] == iParam0) {
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_764) {
		if (Global_101700.f_6647.f_651[iVar0 /*14*/] == iParam0) {
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_866) {
		if (Global_101700.f_6647.f_765[iVar0 /*10*/] == iParam0) {
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x1602
void func_34() { Global_91530 = 1; }

// Position - 0x160F
void func_35(int iParam0) {
	if (iParam0 == 144 || iParam0 == 145 || iParam0 == 150 || iParam0 == 151) {
		return;
	}
	Global_36333[iParam0] = gameplay::get_game_timer();
}

// Position - 0x164E
void func_36() { Global_36332 = gameplay::get_game_timer(); }

// Position - 0x165D
int func_37(int iParam0) {
	int iVar0;
	int iVar1;

	if (iParam0 <= 31) {
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else {
		iVar0 = 10;
		iVar1 = iParam0 - 32;
	}
	if (gameplay::is_bit_set(Global_101700.f_8044.f_99.f_219[iVar0], iVar1)) {
		return 0;
	}
	gameplay::set_bit(&Global_101700.f_8044.f_99.f_219[iVar0], iVar1);
	return 1;
}

// Position - 0x16B7
void func_38() {
	func_39(-1615086084);
	func_39(-1989308064);
	func_39(-1970925435);
	func_39(-1060930305);
	func_39(-1817481777);
	Global_2318 = 0;
	player::set_player_control(player::player_id(), 1, 0);
	script::terminate_this_thread();
}

// Position - 0x1703
int func_39(int iParam0) {
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_136) {
		if (Global_101700.f_6647[iVar0 /*15*/] == iParam0) {
			if (Global_36328 != iVar0) {
				func_46(iVar0);
				func_43(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_198) {
		if (Global_101700.f_6647.f_137[iVar0 /*15*/] == iParam0) {
			func_43(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_650) {
		if (Global_101700.f_6647.f_199[iVar0 /*15*/] == iParam0) {
			func_42(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_764) {
		if (Global_101700.f_6647.f_651[iVar0 /*14*/] == iParam0) {
			func_41(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_866) {
		if (Global_101700.f_6647.f_765[iVar0 /*10*/] == iParam0) {
			func_40(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

// Position - 0x182A
void func_40(int iParam0) {
	int iVar0;
	struct<10> Var1;

	if (iParam0 < 0 || iParam0 >= Global_101700.f_6647.f_866) {
		return;
	}
	if (Global_101700.f_6647.f_866 > 1) {
		iVar0 = iParam0;
		while (iVar0 <= Global_101700.f_6647.f_866 - 2) {
			Global_101700.f_6647.f_765[iVar0 /*10*/] = {Global_101700.f_6647.f_765[iVar0 + 1 /*10*/]};
			iVar0++;
		}
	}
	if (Global_101700.f_6647.f_866 > 0) {
		Global_101700.f_6647.f_765[Global_101700.f_6647.f_866 - 1 /*10*/] = {Var1};
		Global_101700.f_6647.f_866--;
	}
}

// Position - 0x18E3
void func_41(int iParam0) {
	int iVar0;
	struct<14> Var1;

	if (iParam0 < 0 || iParam0 >= Global_101700.f_6647.f_764) {
		return;
	}
	if (Global_101700.f_6647.f_764 > 1) {
		iVar0 = iParam0;
		while (iVar0 <= Global_101700.f_6647.f_764 - 2) {
			Global_101700.f_6647.f_651[iVar0 /*14*/] = {Global_101700.f_6647.f_651[iVar0 + 1 /*14*/]};
			iVar0++;
		}
	}
	if (Global_101700.f_6647.f_764 > 0) {
		Global_101700.f_6647.f_651[Global_101700.f_6647.f_764 - 1 /*14*/] = {Var1};
		Global_101700.f_6647.f_764--;
	}
	func_9(0);
	func_9(1);
	func_9(2);
}

// Position - 0x19AB
void func_42(int iParam0) {
	struct<15> Var0;
	int iVar15;
	int iVar16;

	iVar15 = 0;
	while (iVar15 < Global_101700.f_6647.f_650) {
		if (Global_101700.f_6647.f_199[iVar15 /*15*/] == iParam0) {
			iVar16 = iVar15;
			while (iVar16 <= Global_101700.f_6647.f_650 - 2) {
				Global_101700.f_6647.f_199[iVar16 /*15*/] = {Global_101700.f_6647.f_199[iVar16 + 1 /*15*/]};
				iVar16++;
			}
			Global_101700.f_6647.f_199[Global_101700.f_6647.f_650 - 1 /*15*/] = {Var0};
			Global_101700.f_6647.f_650--;
			return;
		}
		iVar15++;
	}
}

// Position - 0x1A58
void func_43(int iParam0) {
	struct<15> Var0;
	int iVar15;
	int iVar16;

	iVar15 = 0;
	while (iVar15 < Global_101700.f_6647.f_198) {
		if (Global_101700.f_6647.f_137[iVar15 /*15*/] == iParam0) {
			func_44(Global_101700.f_6647.f_137[iVar15 /*15*/].f_6);
			iVar16 = iVar15;
			while (iVar16 <= Global_101700.f_6647.f_198 - 2) {
				Global_101700.f_6647.f_137[iVar16 /*15*/] = {Global_101700.f_6647.f_137[iVar16 + 1 /*15*/]};
				iVar16++;
			}
			Global_101700.f_6647.f_137[Global_101700.f_6647.f_198 - 1 /*15*/] = {Var0};
			Global_101700.f_6647.f_198--;
			return;
		}
		iVar15++;
	}
}

// Position - 0x1B14
int func_44(int iParam0) {
	int iVar0;

	if (Global_117[iParam0 /*10*/].f_8 != 140) {
		if (Global_101700.f_27009[iParam0 /*29*/].f_19[Global_14443] == 1) {
			Global_101700.f_27009[iParam0 /*29*/].f_19[Global_14443] = 0;
			if (Global_101700.f_27009[iParam0 /*29*/].f_24[Global_14443] == 0) {
				iVar0 = Global_14443;
				func_45(iParam0, iVar0);
			}
			return 1;
		}
		else {
			return 0;
		}
	}
	return 0;
}

// Position - 0x1B85
void func_45(int iParam0, int iParam1) {
	if (Global_117[iParam0 /*10*/].f_8 != 140) {
		if (iParam1 > 3) {
		}
		else {
			Global_101700.f_27009[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_101700.f_27009[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

// Position - 0x1BC8
void func_46(int iParam0) {
	int iVar0;
	int iVar1;
	struct<15> Var2;

	if (iParam0 < 0 || iParam0 >= Global_101700.f_6647.f_136) {
		return;
	}
	iVar1 = Global_101700.f_6647[iParam0 /*15*/].f_2;
	if (Global_101700.f_6647.f_136 > 1) {
		iVar0 = iParam0;
		while (iVar0 <= Global_101700.f_6647.f_136 - 2) {
			Global_101700.f_6647[iVar0 /*15*/] = {Global_101700.f_6647[iVar0 + 1 /*15*/]};
			iVar0++;
		}
	}
	if (Global_101700.f_6647.f_136 > 0) {
		Global_101700.f_6647[Global_101700.f_6647.f_136 - 1 /*15*/] = {Var2};
		Global_101700.f_6647.f_136--;
	}
	iVar0 = 0;
	while (iVar0 < 3) {
		if (gameplay::is_bit_set(iVar1, iVar0)) {
			func_9(iVar0);
		}
		iVar0++;
	}
}
