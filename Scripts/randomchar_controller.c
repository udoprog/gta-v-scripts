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
int iLocal_49 = 0;
int iLocal_50 = 0;
int iLocal_51 = 0;
int iLocal_52 = 0;
int iLocal_53[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_74[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_95 = 0;
int *iLocal_96 = NULL;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	uLocal_47 = ui::_0x4A9923385BDB9DAD();
	uLocal_48 = ui::_get_blip_info_id_iterator();
	iLocal_96 = -15;
	if (player::has_force_cleanup_occurred(34)) {
		func_131();
	}
	func_130();
	func_128();
	while (true) {
		system::wait(0);
		if (func_125(4) || Global_88744) {
			func_131();
		}
		if (func_124()) {
			iLocal_95 = 0;
			iLocal_49 += 1 % 60;
			iVar0 = 0;
			while (iVar0 < 63) {
				if (iVar0 % 60 == iLocal_49 || Global_100787[iVar0 /*10*/].f_2) {
					func_77(iVar0);
				}
				iVar0++;
			}
			func_70();
			func_53();
			func_48();
			func_45();
			func_4();
		}
		else if (!iLocal_95) {
			func_1();
		}
	}
}

// Position - 0x121
void func_1() {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 20) {
		func_3(iLocal_74[iVar1], 0, 0);
		iLocal_53[iVar1] = 0;
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 63) {
		iVar0 = iVar2;
		if (Global_100787[iVar0 /*10*/].f_8 != -1) {
			func_3(iLocal_74[Global_100787[iVar0 /*10*/].f_8], 0, 0);
			func_2(&Global_100787[iVar0 /*10*/].f_8);
		}
		Global_100787[iVar0 /*10*/].f_7 = 0;
		iVar2++;
	}
	iLocal_95 = 1;
}

// Position - 0x1A4
void func_2(int *iParam0) {
	if (*iParam0 > -1 && *iParam0 < 20) {
		iLocal_53[*iParam0] = 0;
	}
	*iParam0 = -1;
}

// Position - 0x1CB
void func_3(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x2D4
void func_4() {
	int iVar0;
	int iVar1;
	struct<7> Var2;
	int iVar34;

	if (!func_44(58)) {
		if (player::is_player_playing(player::player_id())) {
			if (func_43(17)) {
				if (!func_42(74)) {
					if (iLocal_96 == -15) {
						iLocal_96 = func_41();
						func_33(&iLocal_96, 0, 5, 0, 0, 0, 0);
					}
					else if (func_22(iLocal_96)) {
						iVar0 = 0;
						iVar1 = 243;
						while (iVar1 <= 262) {
							iVar34 = iVar1;
							func_17(58, &Var2);
							if (func_15(Var2.f_6, func_16(iVar34, 0), 0)) {
								if (ui::does_blip_exist(Global_25501[iVar34 /*23*/].f_19)) {
									ui::set_blip_flashes(Global_25501[iVar34 /*23*/].f_19, 1);
									ui::set_blip_flash_timer(Global_25501[iVar34 /*23*/].f_19, 10000);
									switch (func_9()) {
									case 1: func_6("AM_H_RCFS", 2, 0, 1000, 10000, 7, 0, 0, 0); break;

									case 0: func_6("AM_H_RCFS_M", 2, 0, 1000, 10000, 7, 0, 0, 0); break;
									}
									iLocal_96 = func_41();
									func_33(&iLocal_96, 0, 0, 8, 0, 0, 0);
									iVar0 = 1;
								}
							}
							iVar1++;
						}
						if (!iVar0) {
							iLocal_96 = func_41();
							func_33(&iLocal_96, 0, 5, 0, 0, 0, 0);
						}
					}
				}
				else {
					func_5(58);
				}
			}
		}
	}
}

// Position - 0x408
void func_5(int iParam0) {
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

// Position - 0x44A
void func_6(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			int iParam8) {
	func_7(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x46B
void func_7(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
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
		func_8();
	}
}

// Position - 0x63E
void func_8() {
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

// Position - 0x75E
int func_9() {
	func_10();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x777
void func_10() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_14(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_13(player::player_ped_id());
			if (func_12(iVar0) && (!func_11(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_12(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x874
bool func_11(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x882
bool func_12(int iParam0) { return iParam0 < 3; }

// Position - 0x88E
int func_13(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_14(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x8CB
int func_14(int iParam0) {
	if (func_12(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x8F5
bool func_15(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x93C
Vector3 func_16(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return 0f, 0f, 0f;
	}
	return Global_25501[iVar0 /*23*/][iParam1 /*3*/];
}

// Position - 0x97A
void func_17(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0:
		func_18(uParam1, "Abigail1", func_20(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0,
				"ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_19(iParam0), 1, 0);
		break;

	case 1:
		func_18(uParam1, "Abigail2", func_20(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0,
				-1, 4, 1, 0, 2359, func_19(iParam0), 1, 0);
		break;

	case 2:
		func_18(uParam1, "Barry1", func_20(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1,
				4, 1, 0, 2359, func_19(iParam0), 1, 0);
		break;

	case 3:
		func_18(uParam1, "Barry2", func_20(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1,
				4, 4, 0, 2359, func_19(iParam0), 1, 1);
		break;

	case 4:
		func_18(uParam1, "Barry3", func_20(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0,
				2359, func_19(iParam0), 0, 0);
		break;

	case 5:
		func_18(uParam1, "Barry3A", func_20(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "",
				166, 0, 7, 4, 2, 0, 2359, func_19(iParam0), 0, 1);
		break;

	case 6:
		func_18(uParam1, "Barry3C", func_20(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0,
				7, 4, 2, 0, 2359, func_19(iParam0), 0, 1);
		break;

	case 7:
		func_18(uParam1, "Barry4", func_20(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4",
				0, 0, -1, 4, 2, 800, 2000, func_19(iParam0), 0, 0);
		break;

	case 8:
		func_18(uParam1, "Dreyfuss1", func_20(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106,
				0, "", 0, 0, -1, 4, 2, 0, 2359, func_19(iParam0), 0, 0);
		break;

	case 9:
		func_18(uParam1, "Epsilon1", func_20(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10,
				4, 1, 0, 2359, func_19(iParam0), 0, 0);
		break;

	case 10:
		func_18(uParam1, "Epsilon2", func_20(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11,
				4, 1, 0, 2359, func_19(iParam0), 1, 0);
		break;

	case 11:
		func_18(uParam1, "Epsilon3", func_20(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars",
				0, 0, 12, 4, 1, 0, 2359, func_19(iParam0), 0, 0);
		break;

	case 12:
		func_18(uParam1, "Epsilon4", func_20(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16,
				"postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_19(iParam0), 0, 0);
		break;

	case 13:
		func_18(uParam1, "Epsilon5", func_20(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes",
				0, 0, 14, 4, 1, 0, 2359, func_19(iParam0), 1, 0);
		break;

	case 14:
		func_18(uParam1, "Epsilon6", func_20(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0,
				15, 4, 1, 0, 2359, func_19(iParam0), 0, 1);
		break;

	case 15:
		func_18(uParam1, "Epsilon7", func_20(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert",
				0, 0, 16, 4, 1, 0, 2359, func_19(iParam0), 0, 0);
		break;

	case 16:
		func_18(uParam1, "Epsilon8", func_20(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16,
				"epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_19(iParam0), 1, 0);
		break;

	case 17:
		func_18(uParam1, "Extreme1", func_20(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18,
				4, 2, 0, 2359, func_19(iParam0), 0, 1);
		break;

	case 18:
		func_18(uParam1, "Extreme2", func_20(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0,
				19, 4, 2, 0, 2359, func_19(iParam0), 0, 1);
		break;

	case 19:
		func_18(uParam1, "Extreme3", func_20(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20,
				4, 2, 0, 2359, func_19(iParam0), 0, 1);
		break;

	case 20:
		func_18(uParam1, "Extreme4", func_20(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0,
				-1, 4, 2, 0, 2359, func_19(iParam0), 0, 0);
		break;

	case 21:
		func_18(uParam1, "Fanatic1", func_20(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1,
				-1, 4, 1, 700, 2000, func_19(iParam0), 1, 0);
		break;

	case 22:
		func_18(uParam1, "Fanatic2", func_20(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1,
				-1, 4, 4, 700, 2000, func_19(iParam0), 1, 0);
		break;

	case 23:
		func_18(uParam1, "Fanatic3", func_20(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4,
				2, 700, 2000, func_19(iParam0), 0, 1);
		break;

	case 24:
		func_18(uParam1, "Hao1", func_20(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0,
				"controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_19(iParam0), 0, 1);
		break;

	case 25:
		func_18(uParam1, "Hunting1", func_20(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1,
				26, 4, 4, 0, 2359, func_19(iParam0), 0, 1);
		break;

	case 26:
		func_18(uParam1, "Hunting2", func_20(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0,
				-1, 4, 4, 0, 2359, func_19(iParam0), 0, 1);
		break;

	case 27:
		func_18(uParam1, "Josh1", func_20(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns",
				0, 1, 28, 4, 4, 0, 2359, func_19(iParam0), 1, 0);
		break;

	case 28:
		func_18(uParam1, "Josh2", func_20(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29,
				4, 4, 0, 2359, func_19(iParam0), 1, 1);
		break;

	case 29:
		func_18(uParam1, "Josh3", func_20(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30,
				4, 4, 0, 2359, func_19(iParam0), 1, 1);
		break;

	case 30:
		func_18(uParam1, "Josh4", func_20(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1,
				4, 4, 0, 2359, func_19(iParam0), 1, 0);
		break;

	case 31:
		func_18(uParam1, "Maude1", func_20(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher",
				0, 1, -1, 4, 4, 0, 2359, func_19(iParam0), 0, 1);
		break;

	case 32:
		func_18(uParam1, "Minute1", func_20(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33,
				4, 4, 0, 2359, func_19(iParam0), 0, 1);
		break;

	case 33:
		func_18(uParam1, "Minute2", func_20(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4,
				0, 2359, func_19(iParam0), 0, 1);
		break;

	case 34:
		func_18(uParam1, "Minute3", func_20(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0,
				-1, 4, 4, 0, 2359, func_19(iParam0), 0, 1);
		break;

	case 35:
		func_18(uParam1, "MrsPhilips1", func_20(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0,
				"ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_19(iParam0), 0, 0);
		break;

	case 36:
		func_18(uParam1, "MrsPhilips2", func_20(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0,
				2359, func_19(iParam0), 0, 0);
		break;

	case 37:
		func_18(uParam1, "Nigel1", func_20(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1,
				-1, 1, 4, 0, 2359, func_19(iParam0), 1, 0);
		break;

	case 38:
		func_18(uParam1, "Nigel1A", func_20(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "",
				0, 0, 42, 4, 4, 0, 2359, func_19(iParam0), 1, 1);
		break;

	case 39:
		func_18(uParam1, "Nigel1B", func_20(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0,
				42, 4, 4, 700, 2000, func_19(iParam0), 1, 1);
		break;

	case 40:
		func_18(uParam1, "Nigel1C", func_20(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0,
				42, 4, 4, 700, 2000, func_19(iParam0), 1, 1);
		break;

	case 41:
		func_18(uParam1, "Nigel1D", func_20(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0,
				42, 4, 4, 700, 2000, func_19(iParam0), 1, 1);
		break;

	case 42:
		func_18(uParam1, "Nigel2", func_20(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43,
				4, 4, 0, 2359, func_19(iParam0), 1, 1);
		break;

	case 43:
		func_18(uParam1, "Nigel3", func_20(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16,
				"postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_19(iParam0), 1, 1);
		break;

	case 44:
		func_18(uParam1, "Omega1", func_20(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0,
				"spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_19(iParam0), 0, 0);
		break;

	case 45:
		func_18(uParam1, "Omega2", func_20(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0,
				-1, 4, 2, 0, 2359, func_19(iParam0), 0, 0);
		break;

	case 46:
		func_18(uParam1, "Paparazzo1", func_20(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1,
				47, 4, 2, 0, 2359, func_19(iParam0), 0, 1);
		break;

	case 47:
		func_18(uParam1, "Paparazzo2", func_20(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0,
				48, 4, 2, 0, 2359, func_19(iParam0), 0, 1);
		break;

	case 48:
		func_18(uParam1, "Paparazzo3", func_20(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183,
				1, -1, 2, 2, 0, 2359, func_19(iParam0), 0, 0);
		break;

	case 49:
		func_18(uParam1, "Paparazzo3A", func_20(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0,
				"", 0, 0, 51, 4, 2, 0, 2359, func_19(iParam0), 0, 1);
		break;

	case 50:
		func_18(uParam1, "Paparazzo3B", func_20(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0,
				0, 51, 4, 2, 0, 2359, func_19(iParam0), 0, 1);
		break;

	case 51:
		func_18(uParam1, "Paparazzo4", func_20(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1,
				-1, 4, 2, 0, 2359, func_19(iParam0), 0, 0);
		break;

	case 52:
		func_18(uParam1, "Rampage1", func_20(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4,
				4, 0, 2359, func_19(iParam0), 0, 0);
		break;

	case 54:
		func_18(uParam1, "Rampage3", func_20(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55,
				4, 4, 0, 2359, func_19(iParam0), 1, 0);
		break;

	case 55:
		func_18(uParam1, "Rampage4", func_20(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4,
				4, 0, 2359, func_19(iParam0), 1, 0);
		break;

	case 56:
		func_18(uParam1, "Rampage5", func_20(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0,
				53, 4, 4, 0, 2359, func_19(iParam0), 0, 0);
		break;

	case 53:
		func_18(uParam1, "Rampage2", func_20(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0,
				"rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_19(iParam0), 1, 0);
		break;

	case 57:
		func_18(uParam1, "TheLastOne", func_20(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0,
				1, -1, 4, 2, 0, 2359, func_19(iParam0), 0, 1);
		break;

	case 58:
		func_18(uParam1, "Tonya1", func_20(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0,
				"ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_19(iParam0), 0, 1);
		break;

	case 59:
		func_18(uParam1, "Tonya2", func_20(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48,
				"ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_19(iParam0), 0, 1);
		break;

	case 60:
		func_18(uParam1, "Tonya3", func_20(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359,
				func_19(iParam0), 0, 1);
		break;

	case 61:
		func_18(uParam1, "Tonya4", func_20(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359,
				func_19(iParam0), 0, 1);
		break;

	case 62:
		func_18(uParam1, "Tonya5", func_20(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0,
				-1, 4, 2, 0, 2359, func_19(iParam0), 0, 1);
		break;

	default: break;
	}
}

// Position - 0x1B10
void func_18(var *uParam0, char *sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7,
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

// Position - 0x1BA1
int func_19(int iParam0) {
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

// Position - 0x1EE7
struct<2> func_20(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = {func_21(iParam0)};
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x1F1E
struct<2>
func_21(int iParam0) {
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

//Position - 0x236A
bool func_22(int iParam0)
{
	return func_23(func_41(), iParam0);
}

// Position - 0x237C
bool func_23(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (!func_31(iParam1) || !func_31(iParam0)) {
		return true;
	}
	iVar0 = func_29(iParam0);
	iVar1 = func_29(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_28(iParam0);
	iVar1 = func_28(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_27(iParam0);
	iVar1 = func_27(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_26(iParam0);
	iVar1 = func_26(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_25(iParam0);
	iVar1 = func_25(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_24(iParam0);
	iVar1 = func_24(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	return false;
}

// Position - 0x2488
int func_24(int iParam0) { return system::shift_right(iParam0, 20) & 63; }

// Position - 0x249B
int func_25(int iParam0) { return system::shift_right(iParam0, 14) & 63; }

// Position - 0x24AE
int func_26(int iParam0) { return system::shift_right(iParam0, 9) & 31; }

// Position - 0x24C1
int func_27(int iParam0) { return system::shift_right(iParam0, 4) & 31; }

// Position - 0x24D3
int func_28(int iParam0) { return iParam0 & 15; }

// Position - 0x24E0
int func_29(int iParam0) {
	return (system::shift_right(iParam0, 26) & 31) * func_30(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x2505
int func_30(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x251C
int func_31(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15) {
		return 0;
	}
	iVar0 = func_24(iParam0);
	if (iVar0 < 0 || iVar0 >= 60) {
		return 0;
	}
	iVar1 = func_25(iParam0);
	if (iVar1 < 0 || iVar1 >= 60) {
		return 0;
	}
	iVar2 = func_26(iParam0);
	if (iVar2 < 0 || iVar2 > 23) {
		return 0;
	}
	iVar3 = func_29(iParam0);
	if (iVar3 <= 0 || iVar3 > 2043 || iVar3 < 1979) {
		return 0;
	}
	iVar4 = func_28(iParam0);
	if (iVar4 < 0 || iVar4 > 11) {
		return 0;
	}
	iVar5 = func_27(iParam0);
	if (iVar5 < 1 || iVar5 > func_32(iVar4, iVar3)) {
		return 0;
	}
	return 1;
}

// Position - 0x25F8
int func_32(int iParam0, int iParam1) {
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

// Position - 0x269A
void func_33(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_29(*iParam0);
	iVar1 = func_28(*iParam0);
	iVar2 = func_27(*iParam0);
	iVar3 = func_26(*iParam0);
	iVar4 = func_25(*iParam0);
	iVar5 = func_24(*iParam0);
	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0) {
		return;
	}
	if (iParam1 < 0) {
		return;
	}
	if (iParam2 < 0) {
		return;
	}
	if (iParam3 < 0) {
		return;
	}
	if (iParam4 < 0) {
		return;
	}
	if (iParam5 < 0) {
		return;
	}
	if (iParam6 < 0) {
		return;
	}
	iVar5 += iParam1;
	while (iVar5 >= 60) {
		iParam2++;
		iVar5 -= 60;
	}
	iVar4 += iParam2;
	while (iVar4 >= 60) {
		iParam3++;
		iVar4 -= 60;
	}
	iVar3 += iParam3;
	while (iVar3 >= 24) {
		iParam4++;
		iVar3 -= 24;
	}
	iVar2 += iParam4;
	iVar6 = func_32(iVar1, iVar0);
	while (iVar2 > iVar6) {
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11) {
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_32(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11) {
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_34(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

// Position - 0x281C
void func_34(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_40(iParam0, iParam1);
	func_39(iParam0, iParam2);
	func_38(iParam0, iParam3);
	func_37(iParam0, iParam5);
	func_36(iParam0, iParam4);
	func_35(iParam0, iParam6);
}

// Position - 0x2854
void func_35(int *iParam0, int iParam1) {
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

// Position - 0x28DA
void func_36(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_28(*uParam0);
	iVar1 = func_29(*uParam0);
	if (iParam1 < 1 || iParam1 > func_32(iVar0, iVar1)) {
		return;
	}
	*uParam0 -= (*uParam0 & 496);
	*uParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0x292B
void func_37(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*uParam0 -= (*uParam0 & 15);
	*uParam0 |= iParam1;
}

// Position - 0x295E
void func_38(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*uParam0 -= (*uParam0 & 15872);
	*uParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0x2998
void func_39(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 1032192);
	*uParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0x29D3
void func_40(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 66060288);
	*uParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0x2A0F
int func_41() {
	int *iVar0;

	func_40(&iVar0, time::get_clock_seconds());
	func_39(&iVar0, time::get_clock_minutes());
	func_38(&iVar0, time::get_clock_hours());
	func_36(&iVar0, time::get_clock_day_of_month());
	func_37(&iVar0, time::get_clock_month());
	func_35(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0x2A55
int func_42(int iParam0) {
	if (iParam0 == 146 || iParam0 == -1) {
		return 0;
	}
	return Global_101700.f_8044.f_99.f_58[iParam0];
}

// Position - 0x2A82
bool func_43(int iParam0) {
	if (iParam0 == 94 || iParam0 == -1) {
		return false;
	}
	return Global_101700.f_8044.f_330[iParam0 /*6*/];
}

// Position - 0x2AAE
int func_44(int iParam0) {
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

// Position - 0x2AF1
void func_45() {
	if (!func_44(39)) {
		if (gameplay::is_bit_set(Global_101700.f_17533[27 /*6*/], 3)) {
			if (func_46("FS_HELP1") == 2) {
				func_6("FS_HELP1", 1, 0, 2000, 10000, 7, 0, 0, 0);
			}
			else if (func_46("FS_HELP1") == 1) {
				func_5(39);
			}
		}
	}
}

// Position - 0x2B4B
int func_46(char *sParam0) {
	if (gameplay::are_strings_equal(sParam0, &Global_100345)) {
		return 1;
	}
	if (func_47(sParam0)) {
		return 0;
	}
	return 2;
}

// Position - 0x2B72
bool func_47(char *sParam0) {
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

// Position - 0x2BAD
void func_48() {
	if (player::is_player_playing(player::player_id())) {
		if (!func_44(55)) {
			if (func_52(5) && func_50(player::player_ped_id(), func_51(5), 1) < func_49(5) ||
				func_52(6) && func_50(player::player_ped_id(), func_51(6), 1) < func_49(6)) {
				if (func_46("BARSTASH2") == 2) {
					func_6("BARSTASH2", 1, 0, 2000, 10000, 2, 0, 0, 0);
				}
				else if (func_46("BARSTASH2") == 1) {
					func_5(55);
				}
			}
		}
	}
}

// Position - 0x2C44
float func_49(int iParam0) {
	if (iParam0 == 5 || iParam0 == 6) {
		return 250f;
	}
	else if (iParam0 == 38) {
		return 35f;
	}
	else if (iParam0 == 39) {
		return 37.5f;
	}
	else if (iParam0 == 40) {
		return 45f;
	}
	else if (iParam0 == 41) {
		return 150f;
	}
	else if (iParam0 == 49 || iParam0 == 50) {
		return 90f;
	}
	return 250f;
}

// Position - 0x2CD0
float func_50(int iParam0, vector3 vParam1, int iParam4) {
	vector3 vVar0;

	if (!entity::is_entity_dead(iParam0, 0)) {
		vVar0 = {entity::get_entity_coords(iParam0, 1)};
	}
	else {
		vVar0 = {entity::get_entity_coords(iParam0, 0)};
	}
	return gameplay::get_distance_between_coords(vVar0, vParam1, iParam4);
}

// Position - 0x2D0A
Vector3 func_51(int iParam0) {
	if (iParam0 == 5) {
		return 1161.31f, -1326.52f, 34.23f;
	}
	else if (iParam0 == 6) {
		return -533.15f, -1691.25f, 18.21f;
	}
	else if (iParam0 == 38) {
		return -565.8f, 293.14f, 90.8f;
	}
	else if (iParam0 == 39) {
		return -1036.65f, 363.59f, 79.82f;
	}
	else if (iParam0 == 40) {
		return -620.37f, -264.39f, 37.81f;
	}
	else if (iParam0 == 41) {
		return -1115.96f, 31.42f, 53.8f;
	}
	else if (iParam0 == 49) {
		return 305.52f, 157.19f, 102.94f;
	}
	else if (iParam0 == 50) {
		return 1040.96f, -534.42f, 60.17f;
	}
	return 0f, 0f, 0f;
}

// Position - 0x2DF0
var func_52(int iParam0) { return Global_100787[iParam0 /*10*/].f_1; }

// Position - 0x2E02
void func_53() {
	if (func_69()) {
		if (!func_42(114)) {
			if (gameplay::is_bit_set(Global_101700.f_17533[46 /*6*/], 3)) {
				func_66(552744224, 6, 2, 50, 60000, 10000, -1, 181, -1, 0, 1);
				func_65(114, 1);
			}
		}
		else if (!func_42(83)) {
			if (gameplay::is_bit_set(Global_101700.f_17533[51 /*6*/], 3)) {
				if (func_64(552744224)) {
					func_55(552744224);
					func_54(181, 0);
				}
			}
		}
	}
}

// Position - 0x2E8D
void func_54(int iParam0, int iParam1) {
	if (iParam0 == 235 || iParam0 == 0) {
		return;
	}
	Global_101700.f_7572[iParam0] = 1;
	Global_101700.f_7572.f_236[iParam0] = gameplay::get_game_timer() + iParam1;
}

// Position - 0x2ECA
int func_55(int iParam0) {
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < G_SomeGlobalState.MessageCallStates.f_136) {
		if (G_SomeGlobalState.MessageCallStates[iVar0 /*15*/] == iParam0) {
			if (LastDispatchedMessageOrCall != iVar0) {
				func_63(iVar0);
				func_60(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < G_SomeGlobalState.MessageCallStates.f_198) {
		if (G_SomeGlobalState.MessageCallStates.f_137[iVar0 /*15*/] == iParam0) {
			func_60(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < G_SomeGlobalState.MessageCallStates.f_650) {
		if (G_SomeGlobalState.MessageCallStates.f_199[iVar0 /*15*/] == iParam0) {
			func_59(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < G_SomeGlobalState.MessageCallStates.f_764) {
		if (G_SomeGlobalState.MessageCallStates.f_651[iVar0 /*14*/] == iParam0) {
			func_57(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < G_SomeGlobalState.MessageCallStates.f_866) {
		if (G_SomeGlobalState.MessageCallStates.f_765[iVar0 /*10*/] == iParam0) {
			func_56(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

// Position - 0x2FF1
void func_56(int iParam0) {
	int iVar0;
	struct<10> Var1;

	if (iParam0 < 0 || iParam0 >= G_SomeGlobalState.MessageCallStates.f_866) {
		return;
	}
	if (G_SomeGlobalState.MessageCallStates.f_866 > 1) {
		iVar0 = iParam0;
		while (iVar0 <= G_SomeGlobalState.MessageCallStates.f_866 - 2) {
			G_SomeGlobalState.MessageCallStates.f_765[iVar0 /*10*/] = {G_SomeGlobalState.MessageCallStates.f_765[iVar0 + 1 /*10*/]};
			iVar0++;
		}
	}
	if (G_SomeGlobalState.MessageCallStates.f_866 > 0) {
		G_SomeGlobalState.MessageCallStates.f_765[G_SomeGlobalState.MessageCallStates.f_866 - 1 /*10*/] = {Var1};
		G_SomeGlobalState.MessageCallStates.f_866--;
	}
}

// Position - 0x30AA
void func_57(int iParam0) {
	int iVar0;
	struct<14> Var1;

	if (iParam0 < 0 || iParam0 >= G_SomeGlobalState.MessageCallStates.f_764) {
		return;
	}
	if (G_SomeGlobalState.MessageCallStates.f_764 > 1) {
		iVar0 = iParam0;
		while (iVar0 <= G_SomeGlobalState.MessageCallStates.f_764 - 2) {
			G_SomeGlobalState.MessageCallStates.f_651[iVar0 /*14*/] = {G_SomeGlobalState.MessageCallStates.f_651[iVar0 + 1 /*14*/]};
			iVar0++;
		}
	}
	if (G_SomeGlobalState.MessageCallStates.f_764 > 0) {
		G_SomeGlobalState.MessageCallStates.f_651[G_SomeGlobalState.MessageCallStates.f_764 - 1 /*14*/] = {Var1};
		G_SomeGlobalState.MessageCallStates.f_764--;
	}
	func_58(0);
	func_58(1);
	func_58(2);
}

// Position - 0x3172
void func_58(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (!func_12(iParam0)) {
		return;
	}
	iVar0 = 0;
	while (iVar0 < G_SomeGlobalState.MessageCallStates.f_136) {
		if (gameplay::is_bit_set(G_SomeGlobalState.MessageCallStates[iVar0 /*15*/].f_2, iParam0)) {
			if (G_SomeGlobalState.MessageCallStates[iVar0 /*15*/].f_3 > iVar1) {
				iVar1 = G_SomeGlobalState.MessageCallStates[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < G_SomeGlobalState.MessageCallStates.f_764) {
		if (gameplay::is_bit_set(G_SomeGlobalState.MessageCallStates.f_651[iVar2 /*14*/].f_2, iParam0)) {
			if (G_SomeGlobalState.MessageCallStates.f_651[iVar2 /*14*/].f_3 == 5) {
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	G_SomeGlobalState.MessageCallStates.f_919[iParam0] = iVar1;
}

// Position - 0x3236
void func_59(int iParam0) {
	struct<15> Var0;
	int iVar15;
	int iVar16;

	iVar15 = 0;
	while (iVar15 < G_SomeGlobalState.MessageCallStates.f_650) {
		if (G_SomeGlobalState.MessageCallStates.f_199[iVar15 /*15*/] == iParam0) {
			iVar16 = iVar15;
			while (iVar16 <= G_SomeGlobalState.MessageCallStates.f_650 - 2) {
				G_SomeGlobalState.MessageCallStates.f_199[iVar16 /*15*/] = {G_SomeGlobalState.MessageCallStates.f_199[iVar16 + 1 /*15*/]};
				iVar16++;
			}
			G_SomeGlobalState.MessageCallStates.f_199[G_SomeGlobalState.MessageCallStates.f_650 - 1 /*15*/] = {Var0};
			G_SomeGlobalState.MessageCallStates.f_650--;
			return;
		}
		iVar15++;
	}
}

// Position - 0x32E3
void func_60(int iParam0) {
	struct<15> Var0;
	int iVar15;
	int iVar16;

	iVar15 = 0;
	while (iVar15 < G_SomeGlobalState.MessageCallStates.f_198) {
		if (G_SomeGlobalState.MessageCallStates.f_137[iVar15 /*15*/] == iParam0) {
			func_61(G_SomeGlobalState.MessageCallStates.f_137[iVar15 /*15*/].f_6);
			iVar16 = iVar15;
			while (iVar16 <= G_SomeGlobalState.MessageCallStates.f_198 - 2) {
				G_SomeGlobalState.MessageCallStates.f_137[iVar16 /*15*/] = {G_SomeGlobalState.MessageCallStates.f_137[iVar16 + 1 /*15*/]};
				iVar16++;
			}
			G_SomeGlobalState.MessageCallStates.f_137[G_SomeGlobalState.MessageCallStates.f_198 - 1 /*15*/] = {Var0};
			G_SomeGlobalState.MessageCallStates.f_198--;
			return;
		}
		iVar15++;
	}
}

// Position - 0x339F
int func_61(int iParam0) {
	int iVar0;

	if (Global_117[iParam0 /*10*/].f_8 != 140) {
		if (Global_101700.f_27009[iParam0 /*29*/].f_19[Global_14443] == 1) {
			Global_101700.f_27009[iParam0 /*29*/].f_19[Global_14443] = 0;
			if (Global_101700.f_27009[iParam0 /*29*/].f_24[Global_14443] == 0) {
				iVar0 = Global_14443;
				func_62(iParam0, iVar0);
			}
			return 1;
		}
		else {
			return 0;
		}
	}
	return 0;
}

// Position - 0x3410
void func_62(int iParam0, int iParam1) {
	if (Global_117[iParam0 /*10*/].f_8 != 140) {
		if (iParam1 > 3) {
		}
		else {
			Global_101700.f_27009[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_101700.f_27009[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

// Position - 0x3453
void func_63(int iParam0) {
	int iVar0;
	int iVar1;
	struct<15> Var2;

	if (iParam0 < 0 || iParam0 >= G_SomeGlobalState.MessageCallStates.f_136) {
		return;
	}
	iVar1 = G_SomeGlobalState.MessageCallStates[iParam0 /*15*/].f_2;
	if (G_SomeGlobalState.MessageCallStates.f_136 > 1) {
		iVar0 = iParam0;
		while (iVar0 <= G_SomeGlobalState.MessageCallStates.f_136 - 2) {
			G_SomeGlobalState.MessageCallStates[iVar0 /*15*/] = {G_SomeGlobalState.MessageCallStates[iVar0 + 1 /*15*/]};
			iVar0++;
		}
	}
	if (G_SomeGlobalState.MessageCallStates.f_136 > 0) {
		G_SomeGlobalState.MessageCallStates[G_SomeGlobalState.MessageCallStates.f_136 - 1 /*15*/] = {Var2};
		G_SomeGlobalState.MessageCallStates.f_136--;
	}
	iVar0 = 0;
	while (iVar0 < 3) {
		if (gameplay::is_bit_set(iVar1, iVar0)) {
			func_58(iVar0);
		}
		iVar0++;
	}
}

// Position - 0x352E
bool func_64(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < G_SomeGlobalState.MessageCallStates.f_136) {
		if (G_SomeGlobalState.MessageCallStates[iVar0 /*15*/] == iParam0) {
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < G_SomeGlobalState.MessageCallStates.f_650) {
		if (G_SomeGlobalState.MessageCallStates.f_199[iVar0 /*15*/] == iParam0) {
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < G_SomeGlobalState.MessageCallStates.f_198) {
		if (G_SomeGlobalState.MessageCallStates.f_137[iVar0 /*15*/] == iParam0) {
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < G_SomeGlobalState.MessageCallStates.f_764) {
		if (G_SomeGlobalState.MessageCallStates.f_651[iVar0 /*14*/] == iParam0) {
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < G_SomeGlobalState.MessageCallStates.f_866) {
		if (G_SomeGlobalState.MessageCallStates.f_765[iVar0 /*10*/] == iParam0) {
			return true;
		}
		iVar0++;
	}
	return false;
}

// Position - 0x362A
void func_65(int iParam0, int iParam1) {
	if (iParam0 == 146 || iParam0 == -1) {
		return;
	}
	if (Global_101700.f_8044.f_99.f_58[iParam0] == iParam1) {
		return;
	}
	Global_101700.f_8044.f_99.f_58[iParam0] = iParam1;
}

// Position - 0x366F
int func_66(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			int iParam8, int iParam9, int iParam10) {
	struct<14> Var0;

	if (func_68(0)) {
		return 0;
	}
	if (iParam4 < 0) {
		return 0;
	}
	if (iParam5 < 0) {
		return 0;
	}
	if (iParam6 == 76) {
		return 0;
	}
	if (iParam7 == 235) {
		return 0;
	}
	if (iParam3 < 3) {
		if (gameplay::is_bit_set(iParam2, iParam3)) {
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7) {
		return 0;
	}
	if (G_SomeGlobalState.MessageCallStates.f_764 < 8) {
		Var0 = iParam0;
		Var0.f_3 = func_67(iParam1);
		Var0.f_4 = gameplay::get_game_timer() + iParam4;
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_13 = iParam10;
		gameplay::clear_bit(&Var0.f_1, 0);
		G_SomeGlobalState.MessageCallStates.f_651[G_SomeGlobalState.MessageCallStates.f_764 /*14*/] = {Var0};
		G_SomeGlobalState.MessageCallStates.f_764++;
		func_58(0);
		func_58(1);
		func_58(2);
		return 1;
	}
	return 0;
}

// Position - 0x378A
int func_67(int iParam0) {
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

// Position - 0x37F4
bool func_68(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x381F
bool func_69() {
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

// Position - 0x38DA
void func_70() {
	int iVar0;
	struct<7> Var1;

	iLocal_50++;
	iLocal_51++;
	if (iLocal_50 >= 63) {
		iLocal_50 = 0;
		iLocal_51 = 0;
		iLocal_52 = 0;
	}
	else if (iLocal_51 > 31) {
		iLocal_51 = 0;
		iLocal_52++;
	}
	iVar0 = iLocal_50;
	if (!func_76(iVar0) || iVar0 == 52) {
		if (!gameplay::is_bit_set(Global_101700.f_17533.f_390[iLocal_52], iLocal_51)) {
			func_17(iVar0, &Var1);
			if (iVar0 == 58) {
				gameplay::set_bit(&Global_101700.f_17533.f_390[iLocal_52], iLocal_51);
			}
			else if (ui::_is_minimap_area_revealed(Var1.f_6)) {
				gameplay::set_bit(&Global_101700.f_17533.f_390[iLocal_52], iLocal_51);
			}
			else if (Global_100787[iVar0 /*10*/].f_8 != -1) {
				if (iLocal_53[Global_100787[iVar0 /*10*/].f_8]) {
					if (gameplay::is_bit_set(Global_25501[iLocal_74[Global_100787[iVar0 /*10*/].f_8] /*23*/].f_11, 6)) {
						func_75(iLocal_74[Global_100787[iVar0 /*10*/].f_8]);
					}
				}
			}
		}
		else if (Global_100787[iVar0 /*10*/].f_8 != -1) {
			if (iLocal_53[Global_100787[iVar0 /*10*/].f_8]) {
				if (!gameplay::is_bit_set(Global_25501[iLocal_74[Global_100787[iVar0 /*10*/].f_8] /*23*/].f_11, 6)) {
					func_71(iLocal_74[Global_100787[iVar0 /*10*/].f_8]);
				}
			}
		}
	}
}

// Position - 0x3A2C
void func_71(int iParam0) {
	func_74(iParam0, 1, 0);
	func_73(iParam0, 1);
	func_72(iParam0, 1);
}

// Position - 0x3A4A
void func_72(int iParam0, int iParam1) {
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

// Position - 0x3AD0
void func_73(int iParam0, int iParam1) {
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

// Position - 0x3B56
void func_74(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x3C02
void func_75(int iParam0) {
	func_74(iParam0, 0, 0);
	func_73(iParam0, 1);
	func_72(iParam0, 1);
}

// Position - 0x3C20
bool func_76(int iParam0) {
	if (iParam0 == 52 || iParam0 == 53 || iParam0 == 54 || iParam0 == 55 || iParam0 == 56) {
		return true;
	}
	return false;
}

// Position - 0x3C61
void func_77(int iParam0) {
	struct<31> Var0;
	int *iVar32;
	int iVar33;
	bool bVar34;
	int *iVar35;
	int *iVar36;
	int *iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<2> Var57;
	int iVar59;
	int iVar60;
	float fVar61;
	int iVar62;
	int iVar63;
	char *sVar64;

	if (iParam0 == -1) {
		return;
	}
	func_17(iParam0, &Var0);
	Global_100787[iParam0 /*10*/].f_2 = 0;
	if (!gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 1)) {
		if (!Var0.f_23) {
			gameplay::set_bit(&Global_101700.f_17533[iParam0 /*6*/], 1);
		}
	}
	if (gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 0) &&
		!gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 3)) {
		if (!Global_101700.f_17533[iParam0 /*6*/].f_1) {
			iVar32 = func_41();
			func_33(&iVar32, 0, 0, Var0.f_15, 0, 0, 0);
			if (iParam0 == 57) {
				iVar33 = gameplay::get_random_int_in_range(3, 11);
				iVar33 *= 30;
				func_33(&iVar32, 0, 0, iVar33, 0, 0, 0);
			}
			Global_101700.f_17533[iParam0 /*6*/].f_2 = iVar32;
			Global_101700.f_17533[iParam0 /*6*/].f_1 = 1;
		}
		if (gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 1)) {
			if (!gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 2)) {
				bVar34 = true;
				if (Var0.f_14 != -1) {
					if (!func_42(Var0.f_14)) {
						bVar34 = false;
					}
				}
				if (func_122(iParam0)) {
					bVar34 = false;
				}
				if (func_120(iParam0)) {
					bVar34 = false;
				}
				if (func_119(Var0.f_30)) {
					bVar34 = false;
				}
				if (Var0.f_15 > 0 && bVar34) {
					if (!func_22(Global_101700.f_17533[iParam0 /*6*/].f_2)) {
						func_116(Global_101700.f_17533[iParam0 /*6*/].f_2, &iVar35, &iVar36, &iVar37, &iVar38, &iVar39,
								 &iVar40);
						if (iVar40 > 0 || iVar39 > 0 || iVar38 > 10) {
							Var57 = {func_20(iParam0)};
							Global_101700.f_17533[iParam0 /*6*/].f_2 = func_41();
							func_33(&Global_101700.f_17533[iParam0 /*6*/].f_2, 0, 0, Var0.f_15, 0, 0, 0);
						}
						bVar34 = false;
					}
				}
				if (!func_115(Var0.f_27, Var0.f_28)) {
					bVar34 = false;
				}
				if (bVar34) {
					gameplay::set_bit(&Global_101700.f_17533[iParam0 /*6*/], 2);
					Global_100787[iParam0 /*10*/].f_4 = 0;
					Global_100787[iParam0 /*10*/].f_6 = 0;
					Global_100787[iParam0 /*10*/].f_5 = 0;
					if (iParam0 == 35) {
						Global_100787[iParam0 /*10*/].f_3 = 0;
						brain::_0x6D6840CEE8845831("launcher_MrsPhilips");
					}
					else if (iParam0 == 58) {
						Global_100787[iParam0 /*10*/].f_3 = 0;
						brain::_0x6D6840CEE8845831("launcher_Tonya");
					}
					else {
						Global_100787[iParam0 /*10*/].f_3 = 1;
					}
				}
			}
		}
	}
	if (gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 2) &&
		!gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 3)) {
		iVar59 = 1;
		if (func_122(iParam0)) {
			iVar59 = 0;
		}
		if (func_120(iParam0)) {
			iVar59 = 0;
		}
		if (func_119(Var0.f_30)) {
			iVar59 = 0;
		}
		if (iVar59) {
			if (!func_115(Var0.f_27, Var0.f_28)) {
				iVar59 = 0;
			}
		}
		if (!iVar59) {
			gameplay::clear_bit(&Global_101700.f_17533[iParam0 /*6*/], 2);
		}
	}
	iVar60 = 1;
	if (Global_100787[iParam0 /*10*/].f_1) {
		Global_100787[iParam0 /*10*/].f_2 = 1;
		Global_100787[iParam0 /*10*/].f_1 = 0;
		Global_100787[iParam0 /*10*/].f_3 = 1;
	}
	else if (Global_100787[iParam0 /*10*/].f_3) {
		if (Var0.f_4 == 0 || Var0.f_4 == 2 || Var0.f_4 == 3 || Var0.f_4 == 11 || Var0.f_4 == 16 || Var0.f_4 == 17) {
			fVar61 = 100f;
		}
		else {
			fVar61 = 209f;
		}
		if (!func_114() && gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 0),
																 Var0.f_6, 0) > fVar61) {
			Global_100787[iParam0 /*10*/].f_3 = 0;
		}
		else {
			if (iParam0 == 10 && Global_101700.f_6220[109] != 1) {
				func_101(109, 1);
			}
			iVar60 = 0;
		}
	}
	iVar62 = 0;
	if (iVar60 && !gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 3) &&
		gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 0) &&
		gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 1) &&
		gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 2)) {
		if (iParam0 == 58 && func_100()) {
		}
		else {
			iVar62 = 2;
		}
	}
	if (Global_100787[iParam0 /*10*/].f_7 != iVar62) {
		if (func_99(&Global_100787[iParam0 /*10*/].f_8)) {
			if (func_15(Var0.f_6, 0f, 0f, 0f, 0)) {
			}
			else {
				iVar63 = iLocal_74[Global_100787[iParam0 /*10*/].f_8];
				if (iVar62 == 0) {
					func_3(iVar63, 0, 0);
					func_98(iVar63, 0);
					func_2(&Global_100787[iParam0 /*10*/].f_8);
				}
				else if (iVar62 == 2) {
					if (func_97(iParam0)) {
						func_96(iVar63, 1);
						func_95(iVar63, func_51(iParam0));
						func_94(iVar63, func_49(iParam0));
					}
					else {
						func_96(iVar63, 0);
						func_93(iVar63, Var0.f_9);
						func_95(iVar63, Var0.f_6);
					}
					func_90(iVar63, iParam0);
					func_89(iVar63);
					if (func_88(Var0.f_26, 1)) {
						func_87(iVar63, 1, 1, 0);
					}
					if (func_88(Var0.f_26, 0)) {
						func_87(iVar63, 1, 0, 0);
					}
					if (func_88(Var0.f_26, 2)) {
						func_87(iVar63, 1, 2, 0);
					}
					if (func_76(iParam0) && iParam0 != 52) {
						func_75(iVar63);
					}
					if (func_76(iParam0)) {
						if (func_85(iParam0)) {
							func_98(iVar63, 1);
						}
					}
					if (iParam0 == 58) {
						func_84(iVar63, 4);
					}
					else {
						func_84(iVar63, 8);
					}
					func_3(iVar63, 1, 0);
				}
			}
			Global_100787[iParam0 /*10*/].f_7 = iVar62;
		}
	}
	if (!gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 4)) {
		if (gameplay::get_hash_key(&Var0.f_10) == gameplay::get_hash_key("")) {
			gameplay::set_bit(&Global_101700.f_17533[iParam0 /*6*/], 4);
		}
		else if (iVar62 == 2) {
			if (func_88(Var0.f_26, func_9())) {
				if (!func_83() && !streaming::is_player_switch_in_progress()) {
					if (!ui::is_help_message_being_displayed()) {
						if (iParam0 == 58) {
							if (func_82(243)) {
								if (func_81(243)) {
									func_6(&Var0.f_10, 1, 0, -1, 10000, Var0.f_26, 0, 0, 0);
									func_54(63, 1000);
									gameplay::set_bit(&Global_101700.f_17533[iParam0 /*6*/], 4);
								}
							}
						}
						else if (iParam0 == 5 || iParam0 == 38 || iParam0 == 49) {
							func_6(&Var0.f_10, 1, 5000, -1, 10000, Var0.f_26, 0, 0, 0);
							gameplay::set_bit(&Global_101700.f_17533[iParam0 /*6*/], 4);
						}
						else {
							func_6(&Var0.f_10, 1, 0, -1, 10000, Var0.f_26, 0, 0, 0);
							gameplay::set_bit(&Global_101700.f_17533[iParam0 /*6*/], 4);
						}
					}
				}
			}
		}
	}
	if (player::is_player_playing(player::player_id())) {
		if (!func_44(35)) {
			if (gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 2) &&
				!gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 3)) {
				if (!func_88(Var0.f_26, func_9()) && !func_97(iParam0) && !func_76(iParam0) && !func_80(iParam0) &&
					!func_79(iParam0) && !Global_100787[iParam0 /*10*/].f_3) {
					if (system::vdist2(Var0.f_6, entity::get_entity_coords(player::player_ped_id(), 1)) < 81f) {
						sVar64 = "";
						if (gameplay::is_bit_set(Var0.f_26, 1)) {
							sVar64 = "TRIG_RC_F";
						}
						else if (gameplay::is_bit_set(Var0.f_26, 0)) {
							sVar64 = "TRIG_RC_M";
						}
						else {
							sVar64 = "TRIG_RC_T";
						}
						if (!gameplay::is_string_null_or_empty(sVar64)) {
							switch (func_46(sVar64)) {
							case 2: func_6(sVar64, 1, 0, 1000, 10000, func_78(), 0, 0, 0); break;

							case 1:
								func_5(35);
								StringCopy(&Global_100345, "", 16);
								break;
							}
						}
					}
				}
			}
		}
	}
}

// Position - 0x445C
int func_78() {
	func_10();
	switch (Global_101700.f_2095.f_539.f_3549) {
	case 0: return 1;

	case 1: return 2;

	case 2: return 4;
	}
	return 0;
}

// Position - 0x44A2
int func_79(int iParam0) {
	if (iParam0 == 2) {
		if (gameplay::is_bit_set(Global_101700.f_17533[3 /*6*/], 3) && Global_100787[3 /*10*/].f_3 == 1) {
			return 1;
		}
	}
	else if (iParam0 == 3) {
		if (gameplay::is_bit_set(Global_101700.f_17533[2 /*6*/], 3) && Global_100787[2 /*10*/].f_3 == 1) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x4506
int func_80(int iParam0) {
	if (iParam0 == 2 || iParam0 == 3) {
		if (gameplay::is_bit_set(Global_101700.f_17533[2 /*6*/], 0) &&
			gameplay::is_bit_set(Global_101700.f_17533[3 /*6*/], 0)) {
			if (!gameplay::is_bit_set(Global_101700.f_17533[2 /*6*/], 3) &&
				!gameplay::is_bit_set(Global_101700.f_17533[3 /*6*/], 3)) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x4572
bool func_81(int iParam0) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return false;
	}
	return ui::does_blip_exist(Global_25501[iVar0 /*23*/].f_19);
}

// Position - 0x45AE
bool func_82(int iParam0) {
	int iVar0;
	var uVar1;
	var uVar2;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return false;
	}
	uVar1 = gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 0);
	uVar2 = gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 15);
	if (uVar1 && uVar2) {
		return true;
	}
	return false;
}

// Position - 0x460F
int func_83() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("player_timetable_scene")) > 0) {
		return 1;
	}
	return 0;
}

// Position - 0x4629
void func_84(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (Global_25501[iVar0 /*23*/].f_16 == iParam1) {
		return;
	}
	Global_25501[iVar0 /*23*/].f_16 = iParam1;
	switch (iParam1) {
	case 1: Global_25501[iVar0 /*23*/].f_12[0] = 40; break;

	case 3: Global_25501[iVar0 /*23*/].f_12[0] = 60; break;
	}
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
	if (Global_25498 == 1) {
		Global_25499 = 1;
	}
	Global_25498 = 1;
}

// Position - 0x46C6
bool func_85(int iParam0) {
	int iVar0;
	int iVar1;

	if (!func_76(iParam0)) {
		return false;
	}
	iVar0 = 194;
	iVar1 = iParam0 - 52;
	if (func_42(108) == 1) {
		return true;
	}
	if (Global_101700.f_2084[iVar1 /*2*/] >= 1) {
		return true;
	}
	if (gameplay::is_bit_set(Global_101700.f_17533[iParam0 /*6*/], 3)) {
		return true;
	}
	return func_86(iVar0 + iVar1, 0);
}

// Position - 0x4729
int func_86(int iParam0, int iParam1) {
	if (Global_101700.f_9153[iParam0 /*12*/].f_5 == 1) {
		if (iParam1 == 1) {
		}
		return 1;
	}
	return 0;
}

// Position - 0x4750
void func_87(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (iParam1) {
		if (!iParam3) {
			Global_25501[iVar0 /*23*/].f_17 = iParam2;
			if (iParam1 != gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 8)) {
				gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
			}
			gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 8);
		}
		else {
			Global_25501[iVar0 /*23*/].f_18 = iParam2;
			if (iParam1 != gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 10)) {
				gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
			}
			gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 10);
		}
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
	}
	else {
		func_89(iParam0);
	}
}

// Position - 0x481E
bool func_88(int iParam0, int iParam1) {
	switch (iParam1) {
	case 0:
	case 1:
	case 2: return gameplay::is_bit_set(iParam0, iParam1);

	default:
	}
	return false;
}

// Position - 0x484B
void func_89(int iParam0) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 8) ||
		gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 10)) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
	}
	gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 8);
	gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 10);
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
}

// Position - 0x48DC
void func_90(int iParam0, int iParam1) {
	func_92(iParam0, 0);
	if (iParam1 == 1) {
		func_91(iParam0, "B_ABI");
	}
	else if (iParam1 == 2 || iParam1 == 3 || iParam1 == 4 || iParam1 == 7) {
		if (gameplay::is_bit_set(Global_101700.f_17533[2 /*6*/], 3) ||
			gameplay::is_bit_set(Global_101700.f_17533[3 /*6*/], 3) ||
			gameplay::is_bit_set(Global_101700.f_17533[4 /*6*/], 3)) {
			func_91(iParam0, "B_BAR");
		}
		else {
			func_91(iParam0, "BLIP_66");
			func_93(iParam0, 66);
		}
	}
	else if (iParam1 == 5 || iParam1 == 6) {
		func_91(iParam0, "B_STA");
	}
	else if (iParam1 == 8) {
		func_91(iParam0, "B_DRE");
	}
	else if (iParam1 == 10 || iParam1 == 11 || iParam1 == 12 || iParam1 == 13 || iParam1 == 14 || iParam1 == 15 ||
			 iParam1 == 16) {
		func_91(iParam0, "B_EPS");
	}
	else if (iParam1 == 18 || iParam1 == 19 || iParam1 == 20) {
		func_91(iParam0, "B_EXT");
	}
	else if (iParam1 == 21 || iParam1 == 22 || iParam1 == 23) {
		if (gameplay::is_bit_set(Global_101700.f_17533[21 /*6*/], 3) ||
			gameplay::is_bit_set(Global_101700.f_17533[22 /*6*/], 3) ||
			gameplay::is_bit_set(Global_101700.f_17533[23 /*6*/], 3)) {
			func_91(iParam0, "B_FAN");
		}
		else {
			func_91(iParam0, "BLIP_66");
			func_93(iParam0, 66);
		}
	}
	else if (iParam1 == 26) {
		func_91(iParam0, "B_HUN");
	}
	else if (iParam1 == 28 || iParam1 == 29 || iParam1 == 30) {
		func_91(iParam0, "B_JOS");
	}
	else if (iParam1 == 33 || iParam1 == 34) {
		func_91(iParam0, "B_MIN");
	}
	else if (iParam1 == 38 || iParam1 == 39 || iParam1 == 40 || iParam1 == 41) {
		func_91(iParam0, "B_CEL");
	}
	else if (iParam1 == 42 || iParam1 == 43) {
		func_91(iParam0, "B_NIG");
	}
	else if (iParam1 == 45) {
		func_91(iParam0, "B_OME");
	}
	else if (iParam1 == 47 || iParam1 == 48 || iParam1 == 51) {
		func_91(iParam0, "B_PAP");
	}
	else if (iParam1 == 49 || iParam1 == 50) {
		func_91(iParam0, "B_PHO");
	}
	else if (iParam1 == 52) {
		func_91(iParam0, "BLIP_66");
	}
	else if (iParam1 == 53 || iParam1 == 54 || iParam1 == 55 || iParam1 == 56) {
		func_91(iParam0, "BLIP_84");
	}
	else if (iParam1 == 59 || iParam1 == 60 || iParam1 == 61 || iParam1 == 62) {
		func_91(iParam0, "B_TON");
	}
	else {
		func_91(iParam0, "BLIP_66");
	}
}

// Position - 0x4C52
void func_91(int iParam0, char *sParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	StringCopy(&Global_25501[iVar0 /*23*/].f_20, sParam1, 8);
	if (ui::does_blip_exist(Global_25501[iVar0 /*23*/].f_19)) {
		ui::set_blip_name_from_text_file(Global_25501[iVar0 /*23*/].f_19, sParam1);
	}
}

// Position - 0x4CAC
void func_92(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	gameplay::set_bits_in_range(&Global_25501[iVar0 /*23*/].f_11, 21, 26, iParam1);
	if (Global_25498 == 1) {
		Global_25499 = 1;
	}
	Global_25498 = 1;
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
}

// Position - 0x4D0A
void func_93(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (Global_25501[iVar0 /*23*/].f_12[0] == iParam1) {
		return;
	}
	Global_25501[iVar0 /*23*/].f_12[0] = iParam1;
	if (Global_25498 == 1) {
		Global_25499 = 1;
	}
	Global_25498 = 1;
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
}

// Position - 0x4D78
void func_94(int iParam0, float fParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	Global_25498 = 1;
	Global_25501[iVar0 /*23*/].f_10 = fParam1;
	Global_31551 = 1;
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
}

// Position - 0x4DC8
void func_95(int iParam0, vector3 vParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (vParam1.x == Global_25501[iVar0 /*23*/][0 /*3*/] && vParam1.y == Global_25501[iVar0 /*23*/][0 /*3*/].f_1 &&
		vParam1.z == Global_25501[iVar0 /*23*/][0 /*3*/].f_2) {
		return;
	}
	Global_25498 = 1;
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
	Global_25501[iVar0 /*23*/][0 /*3*/] = {vParam1};
	Global_31551 = 1;
}

// Position - 0x4E5C
void func_96(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (iParam1) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 28);
	}
	else {
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 28);
	}
	if (Global_25498 == 1) {
		Global_25499 = 1;
	}
	Global_25498 = 1;
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
}

// Position - 0x4ECE
bool func_97(int iParam0) {
	if (iParam0 == 5 || iParam0 == 6 || iParam0 == 38 || iParam0 == 39 || iParam0 == 40 || iParam0 == 41 ||
		iParam0 == 49 || iParam0 == 50) {
		return true;
	}
	return false;
}

// Position - 0x4F2E
void func_98(int iParam0, int iParam1) {
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

// Position - 0x4FB7
bool func_99(int *iParam0) {
	int iVar0;

	if (*iParam0 != -1) {
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 20) {
		if (!iLocal_53[iVar0]) {
			*iParam0 = iVar0;
			iLocal_53[iVar0] = 1;
			return true;
		}
		iVar0++;
	}
	return false;
}

// Position - 0x4FF8
int func_100() {
	if (Global_69962) {
		return 1;
	}
	else if (Global_55816 && !Global_55822) {
		return 1;
	}
	return 0;
}

// Position - 0x5022
void func_101(int iParam0, int iParam1) {
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
			func_103(iParam0);
			if (gameplay::is_bit_set(Global_31569[iParam0 / 32], iParam0 % 32)) {
				func_102(iParam0);
			}
		}
	}
}

// Position - 0x511B
void func_102(int iParam0) {
	if (!gameplay::is_bit_set(Global_32512.f_228[iParam0 / 32], iParam0 % 23)) {
		gameplay::set_bit(&Global_32512.f_228[iParam0 / 32], iParam0 % 23);
		Global_32512[Global_32512.f_227] = iParam0;
		Global_32512.f_227++;
	}
}

// Position - 0x5169
void func_103(int iParam0) {
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

	if (!func_111()) {
		return;
	}
	if (ped::is_ped_injured(player::player_ped_id())) {
		return;
	}
	Var0 = {func_110(iParam0)};
	if (gameplay::is_bit_set(Var0.f_4, 2)) {
		func_108(iParam0, &Var0);
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
			iVar9 = func_105(iParam0);
		}
		else {
			iVar9 = 0;
		}
		if (func_11(14)) {
			iVar9 = 0;
		}
	}
	else if (gameplay::is_bit_set(Var0.f_4, 1) &&
			 script::_get_number_of_instances_of_script_with_name_hash(joaat("ambient_solomon")) == 0) {
		if (func_104()) {
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
		func_102(iParam0);
		if (Global_31587[iParam0] < 2) {
			Global_31587[iParam0]++;
		}
	}
}

// Position - 0x564C
bool func_104() {
	if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
		return false;
	}
	switch (func_9()) {
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

// Position - 0x56CB
int func_105(int iParam0) {
	int iVar0;

	iVar0 = func_9();
	if (func_106(iParam0)) {
		return 1;
	}
	if (iParam0 == 49) {
		if (iVar0 == 1) {
			if (gameplay::is_bit_set(Global_101700.f_6188[5], 0) || gameplay::is_bit_set(Global_101700.f_6188[6], 0)) {
				return 0;
			}
		}
		if (func_12(iVar0)) {
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
		if (func_12(iVar0)) {
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
		if (func_12(iVar0)) {
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
		if (func_12(iVar0)) {
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
			if (func_12(iVar0)) {
				if (gameplay::is_bit_set(Global_86851[2], iVar0)) {
					return 0;
				}
			}
		}
		else if (iVar0 == 0) {
			if (gameplay::is_bit_set(Global_101700.f_6188[1], 0)) {
				return 0;
			}
			if (func_12(iVar0)) {
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
		if (func_12(iVar0)) {
			if (gameplay::is_bit_set(Global_86851[3], iVar0)) {
				return 0;
			}
		}
		break;

	default: return 0;
	}
	return 1;
}

// Position - 0x5920
bool func_106(int iParam0) {
	int iVar0;

	if (iParam0 == 40 || iParam0 == 49 || iParam0 == 52) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				iVar0 = entity::get_entity_model(func_107(ped::get_vehicle_ped_is_in(player::player_ped_id(), 1)));
				switch (iVar0) {
				case joaat("utillitruck"):
				case joaat("monster"): return true;
				}
			}
		}
	}
	return false;
}

// Position - 0x598C
var func_107(var uParam0) { return uParam0; }

// Position - 0x5996
void func_108(int iParam0, var *uParam1) {
	int iVar0;
	int iVar1;

	if (!gameplay::is_bit_set(uParam1->f_4, 2)) {
		return;
	}
	iVar0 = func_41();
	iVar1 = func_26(iVar0);
	switch (iParam0) {
	case 133:
	case 134:
	case 201:
	case 202:
		if (func_109(iParam0)) {
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
		if (func_109(iParam0)) {
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
		if (func_109(iParam0)) {
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
		if (func_109(iParam0)) {
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
		if (!func_109(iParam0)) {
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
		if (!func_109(iParam0)) {
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
			if (!func_109(iParam0)) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 160:
	case 161:
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("omega2")) == 0) {
			if (!func_109(iParam0)) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 70:
	case 71:
	case 72:
		if (!func_109(iParam0) &&
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
		if (!func_109(iParam0)) {
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
		if (!func_109(iParam0)) {
			Global_101700.f_6220[iParam0] = 1;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		break;

	case 193:
		if (!func_109(iParam0)) {
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
		if (!func_109(iParam0)) {
			Global_101700.f_6220[iParam0] = 1;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		break;

	case 80:
		if (!func_109(iParam0)) {
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
		if (!func_109(iParam0)) {
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
			if (!func_109(iParam0)) {
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
			if (!func_109(iParam0)) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 99:
	case 100:
		if (script::_get_number_of_instances_of_script_with_name_hash(Global_82612[39 /*34*/].f_6) == 0) {
			if (!func_109(iParam0)) {
				Global_101700.f_6220[iParam0] = 1;
				object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
			}
		}
		break;

	case 216:
		if (!func_109(iParam0)) {
			Global_101700.f_6220[iParam0] = 1;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		break;

	case 217:
	case 218:
		if (!func_109(iParam0)) {
			Global_101700.f_6220[iParam0] = 1;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		break;

	case 219:
	case 220:
	case 221:
	case 222:
		if (func_109(iParam0)) {
			Global_101700.f_6220[iParam0] = 0;
			object::_set_door_acceleration_limit(uParam1->f_5, Global_101700.f_6220[iParam0], 1, 1);
		}
		break;
	}
}

// Position - 0x6331
bool func_109(int iParam0) {
	struct<7> Var0;
	int iVar7;

	Var0 = {func_110(iParam0)};
	iVar7 = object::_0x160AA1B32F6139B8(Var0.f_5);
	return iVar7 == 1 || iVar7 == 4 || iVar7 == 2;
}

// Position - 0x6365
struct<7> func_110(int iParam0) {
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

//Position - 0x8F6F
int func_111()
{
	if ((func_113() == -1 || func_113() == 999) && func_112() != 0) {
		return 1;
	}
	return 0;
}

// Position - 0x8F9F
int func_112() { return Global_25191; }

// Position - 0x8FAA
int func_113() { return Global_25190; }

// Position - 0x8FB5
int func_114() {
	if (Global_91491 == 13 || Global_91491 == 10 || Global_91491 == 11 || Global_91491 == 12) {
		return 0;
	}
	return 1;
}

// Position - 0x8FF3
int func_115(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = func_26(func_41()) * 100 + func_25(func_41());
	if (iParam1 > iParam0) {
		if (iVar0 < iParam0 || iVar0 > iParam1) {
			return 0;
		}
	}
	else if (iVar0 < iParam0 && iVar0 > iParam1) {
		return 0;
	}
	return 1;
}

// Position - 0x9048
void func_116(int iParam0, int *iParam1, int *iParam2, int *iParam3, int *iParam4, int *iParam5, int *iParam6) {
	func_117(func_41(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

// Position - 0x9066
void func_117(int iParam0, int iParam1, int *iParam2, int *iParam3, int *iParam4, int *iParam5, int *iParam6,
			  int *iParam7) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_23(iParam0, iParam1)) {
		iVar0 = func_28(iParam1);
		iVar1 = func_29(iParam0);
		iVar2 = func_29(iParam0) - func_29(iParam1);
		iVar3 = func_28(iParam0) - func_28(iParam1);
		iVar4 = func_27(iParam0) - func_27(iParam1);
		iVar5 = func_26(iParam0) - func_26(iParam1);
		iVar6 = func_25(iParam0) - func_25(iParam1);
		iVar7 = func_24(iParam0) - func_24(iParam1);
	}
	else {
		iVar0 = func_28(iParam0);
		iVar1 = func_29(iParam1);
		iVar2 = func_29(iParam1) - func_29(iParam0);
		iVar3 = func_28(iParam1) - func_28(iParam0);
		iVar4 = func_27(iParam1) - func_27(iParam0);
		iVar5 = func_26(iParam1) - func_26(iParam0);
		iVar6 = func_25(iParam1) - func_25(iParam0);
		iVar7 = func_24(iParam1) - func_24(iParam0);
	}
	while (iVar7 < 0) {
		iVar7 += 60;
		iVar6--;
	}
	while (iVar7 > 59) {
		iVar7 -= 60;
		iVar6++;
	}
	while (iVar6 < 0) {
		iVar6 += 60;
		iVar5--;
	}
	while (iVar6 > 59) {
		iVar6 -= 60;
		iVar5++;
	}
	while (iVar5 < 0) {
		iVar5 += 24;
		iVar4--;
	}
	while (iVar5 > 23) {
		iVar5 -= 24;
		iVar4++;
	}
	while (iVar4 < 0) {
		while (iVar3 < 0) {
			iVar3 += 12;
			iVar2--;
		}
		iVar4 += func_32(iVar0, iVar1);
		iVar3--;
		iVar0 = system::round(func_118(system::to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0) {
		iVar3 += 12;
		iVar2--;
	}
	while (iVar3 > 12) {
		iVar3 -= 12;
		iVar2++;
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

// Position - 0x9267
float func_118(float fParam0, float fParam1, float fParam2) {
	float fVar0;

	if (fParam1 == fParam2) {
		return fParam1;
	}
	fVar0 = fParam2 - fParam1;
	fParam0 -= IntToFloat(system::round((fParam0 - fParam1) / fVar0)) * fVar0;
	if (fParam0 < fParam1) {
		fParam0 += fVar0;
	}
	return fParam0;
}

// Position - 0x92A9
bool func_119(bool bParam0) {
	if (bParam0) {
		if (func_42(130) && !func_42(131)) {
			return true;
		}
	}
	return false;
}

// Position - 0x92D0
bool func_120(int iParam0) {
	if (func_121(iParam0)) {
		return false;
	}
	else if (!ped::is_ped_injured(player::player_ped_id())) {
		if (player::get_player_wanted_level(player::player_id()) != 0) {
			return true;
		}
	}
	return false;
}

// Position - 0x9305
bool func_121(int iParam0) {
	if (iParam0 == 5 || iParam0 == 6 || iParam0 == 41 || iParam0 == 60 || iParam0 == 61) {
		return true;
	}
	return false;
}

// Position - 0x9344
bool func_122(int iParam0) {
	if (iParam0 == 58 || iParam0 == 59 || iParam0 == 62) {
		if (func_123(40) || func_123(41) || func_123(43) || func_123(47)) {
			return true;
		}
	}
	if (iParam0 == 24) {
		if (func_123(41)) {
			return true;
		}
	}
	return false;
}

// Position - 0x93B0
bool func_123(int iParam0) {
	int iVar0;

	if (iParam0 == 94 || iParam0 == -1) {
		return false;
	}
	if (Global_85809[iParam0 /*2*/]) {
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Global_82576) {
		if (Global_82576[iVar0 /*5*/] != -1) {
			if (Global_69971.f_109[Global_82576[iVar0 /*5*/] /*4*/] == iParam0) {
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0x9418
bool func_124() { return true; }

// Position - 0x9421
int func_125(int iParam0) {
	if (Global_35781 == 15) {
		return 0;
	}
	if (func_126(iParam0)) {
		return 0;
	}
	return 1;
}

// Position - 0x9443
bool func_126(int iParam0) { return func_127(iParam0, Global_35781); }

// Position - 0x9454
int func_127(int iParam0, int iParam1) {
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

// Position - 0x9635
void func_128() {
	int iVar0;

	iLocal_74[0] = 243;
	iLocal_74[1] = 244;
	iLocal_74[2] = 245;
	iLocal_74[3] = 246;
	iLocal_74[4] = 247;
	iLocal_74[5] = 248;
	iLocal_74[6] = 249;
	iLocal_74[7] = 250;
	iLocal_74[8] = 251;
	iLocal_74[9] = 252;
	iLocal_74[10] = 253;
	iLocal_74[11] = 254;
	iLocal_74[12] = 255;
	iLocal_74[13] = 256;
	iLocal_74[14] = 257;
	iLocal_74[15] = 258;
	iLocal_74[16] = 259;
	iLocal_74[17] = 260;
	iLocal_74[18] = 261;
	iLocal_74[19] = 262;
	iVar0 = 0;
	while (iVar0 < 20) {
		iLocal_53[iVar0] = 0;
		func_3(iLocal_74[iVar0], 0, 0);
		func_129(iLocal_74[iVar0], 4);
		func_84(iLocal_74[iVar0], 8);
		func_71(iLocal_74[iVar0]);
		func_92(iLocal_74[iVar0], 0);
		func_93(iLocal_74[iVar0], 66);
		func_89(iLocal_74[iVar0]);
		iVar0++;
	}
}

// Position - 0x973F
void func_129(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 16);
	Global_25501[iVar0 /*23*/].f_22 = iParam1;
	if (Global_25498 == 1) {
		Global_25499 = 1;
	}
	Global_25498 = 1;
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
}

// Position - 0x97A5
void func_130() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 63) {
		Global_100787[iVar0 /*10*/].f_5 = 0;
		Global_100787[iVar0 /*10*/].f_6 = 0;
		Global_100787[iVar0 /*10*/].f_4 = 0;
		Global_100787[iVar0 /*10*/].f_7 = 0;
		Global_100787[iVar0 /*10*/].f_8 = -1;
		Global_100787[iVar0 /*10*/].f_9 = -1;
		iVar0++;
	}
}

// Position - 0x9802
void func_131() {
	func_1();
	script::terminate_this_thread();
}
