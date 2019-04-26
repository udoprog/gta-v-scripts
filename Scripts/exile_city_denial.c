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
int *iLocal_28 = NULL;
bool bLocal_29 = 0;
bool bLocal_30 = 0;
int iLocal_31 = 0;
bool bLocal_32 = 0;
var uLocal_33 = 0;
#pragma endregion //}

void __EntryFunction__() {
	int iVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;

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
	iLocal_28 = -1;
	bLocal_32 = true;
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("exile_city_denial")) > 1) {
		Global_35746 = 0;
		script::terminate_this_thread();
	}
	func_36(18);
	func_35();
	system::settimera(0);
	system::settimerb(0);
	iVar0 = 2;
	iVar1 = 0;
	while (!iLocal_31) {
		iLocal_31 = 1;
		if (player::has_force_cleanup_occurred(83)) {
			Global_35746 = 0;
			if (!func_34(130)) {
				func_33(18);
				func_32();
			}
			else if (func_34(131)) {
				func_33(18);
				func_32();
			}
			switch (player::get_cause_of_most_recent_force_cleanup()) {
			case 16:
				func_33(18);
				func_32();
				break;

			case 2: func_32(); break;

			case 1:
				func_24(1628462442);
				func_24(1791324372);
				func_24(-240877892);
				func_24(1806999335);
				func_24(2054503592);
				func_24(-2009081795);
				bLocal_29 = false;
				while (!player::is_player_playing(player::player_id())) {
					system::wait(1000);
				}
				iLocal_31 = 0;
				break;
			}
		}
	}
	while (true) {
		if (iVar1 > 0) {
			iVar1 -= system::timera();
			system::settimera(0);
			if (iVar1 < 0) {
				iVar1 = 0;
			}
		}
		vVar2 = {entity::get_entity_coords(player::player_ped_id(), 0)};
		bLocal_29 = func_23(vVar2, &bLocal_32);
		if (Global_69971 || Global_69971.f_1) {
			bLocal_29 = false;
		}
		bVar5 = false;
		iVar6 = 0;
		if (func_34(131)) {
			bVar5 = true;
		}
		if (!func_34(130)) {
			bVar5 = true;
		}
		if (bVar5) {
			Global_35746 = 0;
			func_33(18);
			func_32();
		}
		if (func_21() == 1) {
			iVar6 = 1;
		}
		Global_35746 = bLocal_29;
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (ped::is_ped_in_any_plane(player::player_ped_id()) || ped::is_ped_in_any_heli(player::player_ped_id())) {
				if (entity::is_entity_in_air(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0))) {
					bLocal_29 = false;
				}
			}
		}
		if (bLocal_30 != bLocal_29) {
			if (!bLocal_29) {
				func_19();
			}
			if (bLocal_29 && !iVar6) {
				bVar7 = false;
				iVar8 = 1;
				while (iVar8) {
					switch (func_17(&iLocal_28, 6, 12, 0, 0)) {
					case 0:
						iVar8 = 0;
						bVar7 = false;
						break;

					case 1:
						iVar8 = 0;
						bVar7 = true;
						break;

					default: system::wait(0); break;
					}
					if (Global_69702) {
						script::terminate_this_thread();
					}
				}
				if (bVar7) {
					ped::is_ped_injured(player::player_ped_id());
					if (entity::does_entity_exist(player::player_ped_id())) {
						iVar9 = interior::get_interior_from_entity(player::player_ped_id());
						while (interior::is_valid_interior(iVar9)) {
							system::wait(5000);
							ped::is_ped_injured(player::player_ped_id());
							if (entity::does_entity_exist(player::player_ped_id())) {
								iVar9 = interior::get_interior_from_entity(player::player_ped_id());
							}
						}
					}
					if (func_15(player::player_ped_id()) == 0) {
						if (!gameplay::is_bit_set(Global_101700.f_6647.f_923, 0)) {
							func_10(1628462442, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						}
						else if (!gameplay::is_bit_set(Global_101700.f_6647.f_923, 1)) {
							func_10(1791324372, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						}
						else if (!gameplay::is_bit_set(Global_101700.f_6647.f_923, 2)) {
							func_10(-240877892, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						}
					}
					else if (func_15(player::player_ped_id()) == 2) {
						if (!gameplay::is_bit_set(Global_101700.f_6647.f_923, 3)) {
							func_10(1806999335, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						}
						else if (!gameplay::is_bit_set(Global_101700.f_6647.f_923, 4)) {
							func_10(2054503592, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						}
						else if (!gameplay::is_bit_set(Global_101700.f_6647.f_923, 4)) {
							func_10(-2009081795, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						}
					}
					if (iVar1 == 0 && !iVar6) {
						if (!func_9(0) && !func_9(4) && !func_9(3)) {
							if (gameplay::_0xEB4A0C2D56441717(11) < 256) {
								if (entity::does_entity_exist(player::player_ped_id())) {
									if (!ped::is_ped_injured(player::player_ped_id())) {
										gameplay::create_incident_with_entity(11, player::player_ped_id(), iVar0, 0f,
																			  &uLocal_33, 0);
									}
								}
							}
							if (cam::is_screen_faded_in()) {
								if (bLocal_32) {
									func_8("CITDENAL", -1);
								}
								else {
									func_8("CITDENAL_R", -1);
								}
								iVar1 = 120000;
							}
						}
					}
				}
				else {
					bLocal_29 = false;
				}
			}
			else {
				func_19();
			}
		}
		if (bLocal_29) {
			if (!gameplay::is_incident_valid(uLocal_33)) {
				if (gameplay::_0xEB4A0C2D56441717(11) < 256) {
					if (entity::does_entity_exist(player::player_ped_id())) {
						if (!ped::is_ped_injured(player::player_ped_id())) {
							gameplay::create_incident_with_entity(11, player::player_ped_id(), iVar0, 0f, &uLocal_33,
																  0);
						}
					}
				}
			}
		}
		if (bLocal_29 && system::timerb() > 60000) {
			system::settimerb(0);
			iVar0 += gameplay::get_random_int_in_range(1, 2);
			if (iVar0 < 8) {
				if (gameplay::is_incident_valid(uLocal_33)) {
					gameplay::_0xB08B85D860E7BA3C(uLocal_33, 11, iVar0);
				}
				else if (gameplay::_0xEB4A0C2D56441717(11) < 256) {
					if (entity::does_entity_exist(player::player_ped_id())) {
						if (!ped::is_ped_injured(player::player_ped_id())) {
							gameplay::create_incident_with_entity(11, player::player_ped_id(), iVar0, 0f, &uLocal_33,
																  0);
						}
					}
				}
			}
			else {
				iVar0 = 8;
			}
		}
		bLocal_30 = bLocal_29;
		if (iVar6) {
			Global_35746 = 0;
			if (bLocal_29) {
				func_19();
			}
			func_4();
			while (func_21() == 1) {
				system::wait(2000);
			}
			func_35();
			iVar6 = 0;
		}
		if (bLocal_29) {
			system::wait(0);
		}
		else {
			system::wait(10000);
		}
		if (func_1(12) && !func_9(12)) {
			if (bLocal_29) {
				func_19();
			}
			while (func_9(0) || func_9(4)) {
				system::wait(8000);
			}
		}
	}
	func_4();
}

// Position - 0x5FD
bool func_1(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_2(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x61F
bool func_2(int iParam0) { return func_3(iParam0, Global_35781); }

// Position - 0x630
int func_3(int iParam0, int iParam1) {
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

// Position - 0x811
void func_4() {
	func_7(0, 1);
	func_7(2, 1);
	func_7(1, 1);
	func_5(0, 1);
	func_5(1, 1);
	func_5(3, 1);
	func_5(2, 1);
}

// Position - 0x843
void func_5(int iParam0, int iParam1) {
	if (iParam0 == 7) {
		return;
	}
	if (iParam1) {
		gameplay::set_bit(&Global_101700.f_6188.f_17[iParam0], 0);
	}
	else {
		gameplay::clear_bit(&Global_101700.f_6188.f_17[iParam0], 0);
	}
	gameplay::disable_police_restart(Global_86963[iParam0 /*9*/].f_8, !iParam1);
	func_6(Global_86963[iParam0 /*9*/].f_7, 0, 0);
}

// Position - 0x8A1
void func_6(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x9AA
void func_7(int iParam0, int iParam1) {
	if (iParam0 == 5) {
		return;
	}
	if (iParam1) {
		gameplay::set_bit(&Global_101700.f_6188.f_11[iParam0], 0);
	}
	else {
		gameplay::clear_bit(&Global_101700.f_6188.f_11[iParam0], 0);
	}
	gameplay::disable_hospital_restart(Global_87027[iParam0 /*9*/].f_8, !iParam1);
	func_6(Global_87027[iParam0 /*9*/].f_7, 0, 0);
}

// Position - 0xA08
void func_8(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0xA1F
bool func_9(int iParam0) { return Global_35781 == iParam0; }

// Position - 0xA2D
int func_10(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			int iParam8, int iParam9, int iParam10, int iParam11) {
	struct<15> Var0;
	int iVar15;

	if (func_14(0)) {
		return 0;
	}
	if (iParam5 < 0) {
		return 0;
	}
	if (iParam6 < 0) {
		return 0;
	}
	if (iParam8 == 76) {
		return 0;
	}
	if (iParam9 == 235) {
		return 0;
	}
	if (iParam3 < 3) {
		if (gameplay::is_bit_set(iParam2, iParam3)) {
			return 0;
		}
	}
	if (iParam4 < 3) {
		if (iParam4 != iParam3) {
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7) {
		return 0;
	}
	if (Global_101700.f_6647.f_136 < 9) {
		Var0 = iParam0;
		if (Global_101700.f_6647.f_911 == Var0) {
			Global_101700.f_6647.f_911 = -1;
		}
		Var0.f_3 = func_13(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = gameplay::get_game_timer() + iParam5;
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		gameplay::clear_bit(&Var0.f_1, 1);
		gameplay::clear_bit(&Var0.f_1, 0);
		if (iParam7 != -1) {
			gameplay::set_bit(&Var0.f_1, 11);
		}
		else if (iParam1 == 0) {
			gameplay::set_bit(&Var0.f_1, 10);
		}
		Global_101700.f_6647[Global_101700.f_6647.f_136 /*15*/] = {Var0};
		Global_101700.f_6647.f_136++;
		iVar15 = 0;
		while (iVar15 < 3) {
			if (gameplay::is_bit_set(iParam2, iVar15)) {
				func_11(iVar15);
			}
			iVar15++;
		}
		return 1;
	}
	return 0;
}

// Position - 0xBAD
void func_11(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (!func_12(iParam0)) {
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

// Position - 0xC71
bool func_12(int iParam0) { return iParam0 < 3; }

// Position - 0xC7D
int func_13(int iParam0) {
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

// Position - 0xCE7
bool func_14(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0xD12
int func_15(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_16(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0xD4F
int func_16(int iParam0) {
	if (func_12(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0xD79
int func_17(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
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
		if (func_1(0)) {
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
		if (!func_2(iParam2)) {
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
			func_18(iParam0, iParam4);
		}
	}
	return 2;
}

// Position - 0xEB0
void func_18(int *iParam0, int iParam1) {
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

// Position - 0xEFF
void func_19() {
	if (iLocal_28 != -1) {
		func_20(&iLocal_28);
	}
	func_24(1628462442);
	func_24(1791324372);
	func_24(-240877892);
	func_24(1806999335);
	func_24(2054503592);
	func_24(-2009081795);
	bLocal_29 = false;
	bLocal_30 = false;
	Global_35746 = 0;
	gameplay::delete_incident(uLocal_33);
}

// Position - 0xF5F
void func_20(int *iParam0) {
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

// Position - 0xF9C
int func_21() {
	func_22();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0xFB5
void func_22() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_16(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_15(player::player_ped_id());
			if (func_12(iVar0) && (!func_9(14) || Global_100652)) {
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

// Position - 0x10B2
int func_23(struct<2> Param0, var uParam2, int *iParam3) {
	if (!(cam::is_screen_faded_in() || cam::is_screen_fading_in())) {
		return 0;
	}
	if (Param0.f_1 < 400f) {
		if (Param0 < 1400f) {
			if (Param0 > -1900f) {
				if (Param0.f_1 > -3500f) {
					*iParam3 = 1;
					return 1;
				}
			}
		}
	}
	if (Param0 < 1536.35f) {
		if (Param0.f_1 > 1016.18f) {
			if (Param0.f_1 < 1213.53f) {
				if (Param0 > 1278.08f) {
					*iParam3 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

// Position - 0x1141
int func_24(int iParam0) {
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_136) {
		if (Global_101700.f_6647[iVar0 /*15*/] == iParam0) {
			if (Global_36328 != iVar0) {
				func_31(iVar0);
				func_28(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_198) {
		if (Global_101700.f_6647.f_137[iVar0 /*15*/] == iParam0) {
			func_28(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_650) {
		if (Global_101700.f_6647.f_199[iVar0 /*15*/] == iParam0) {
			func_27(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_764) {
		if (Global_101700.f_6647.f_651[iVar0 /*14*/] == iParam0) {
			func_26(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_866) {
		if (Global_101700.f_6647.f_765[iVar0 /*10*/] == iParam0) {
			func_25(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

// Position - 0x1268
void func_25(int iParam0) {
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

// Position - 0x1321
void func_26(int iParam0) {
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
	func_11(0);
	func_11(1);
	func_11(2);
}

// Position - 0x13E9
void func_27(int iParam0) {
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

// Position - 0x1496
void func_28(int iParam0) {
	struct<15> Var0;
	int iVar15;
	int iVar16;

	iVar15 = 0;
	while (iVar15 < Global_101700.f_6647.f_198) {
		if (Global_101700.f_6647.f_137[iVar15 /*15*/] == iParam0) {
			func_29(Global_101700.f_6647.f_137[iVar15 /*15*/].f_6);
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

// Position - 0x1552
int func_29(int iParam0) {
	int iVar0;

	if (Global_117[iParam0 /*10*/].f_8 != 140) {
		if (Global_101700.f_27009[iParam0 /*29*/].f_19[Global_14443] == 1) {
			Global_101700.f_27009[iParam0 /*29*/].f_19[Global_14443] = 0;
			if (Global_101700.f_27009[iParam0 /*29*/].f_24[Global_14443] == 0) {
				iVar0 = Global_14443;
				func_30(iParam0, iVar0);
			}
			return 1;
		}
		else {
			return 0;
		}
	}
	return 0;
}

// Position - 0x15C3
void func_30(int iParam0, int iParam1) {
	if (Global_117[iParam0 /*10*/].f_8 != 140) {
		if (iParam1 > 3) {
		}
		else {
			Global_101700.f_27009[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_101700.f_27009[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

// Position - 0x1606
void func_31(int iParam0) {
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
			func_11(iVar0);
		}
		iVar0++;
	}
}

// Position - 0x16E1
void func_32() {
	func_19();
	func_4();
	script::terminate_this_thread();
}

// Position - 0x16F5
int func_33(int iParam0) {
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

// Position - 0x174F
bool func_34(int iParam0) {
	if (iParam0 == 146 || iParam0 == -1) {
		return false;
	}
	return Global_101700.f_8044.f_99.f_58[iParam0];
}

// Position - 0x177C
void func_35() {
	func_7(0, 0);
	func_7(2, 0);
	func_7(1, 0);
	func_5(0, 0);
	func_5(1, 0);
	func_5(3, 0);
	func_5(2, 0);
}

// Position - 0x17AE
int func_36(int iParam0) {
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
