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
char *sLocal_21 = NULL;
char *sLocal_22 = NULL;
char *sLocal_23 = NULL;
vector3 vLocal_24 = {0f, 0f, 0f};
vector3 vLocal_27 = {0f, 0f, 0f};
int iLocal_30 = 0;
float fLocal_31 = 0f;
var uLocal_32 = 0;
var uLocal_33 = 0;
var uLocal_34 = 0;
float fLocal_35 = 0f;
float fLocal_36 = 0f;
var uLocal_37 = 0;
var uLocal_38 = 0;
float fLocal_39 = 0f;
float fLocal_40 = 0f;
float fLocal_41 = 0f;
var uLocal_42 = 0;
var uLocal_43 = 0;
var uLocal_44 = 0;
bool bLocal_45 = 0;
int iLocal_46 = 0;
int iLocal_47 = 0;
int iLocal_48 = 0;
int iLocal_49 = 0;
bool bLocal_50 = 0;
int iLocal_51 = 0;
int iLocal_52 = 0;
int iLocal_53 = 0;
int iLocal_54 = 0;
int iLocal_55[7] = {0, 0, 0, 0, 0, 0, 0};
int iLocal_63 = 0;
int iLocal_64 = 0;
int iLocal_65 = 0;
bool bLocal_66 = 0;
int iLocal_67 = 0;
int iLocal_68 = 0;
int iLocal_69 = 0;
int iLocal_70 = 0;
int iLocal_71 = 0;
int iLocal_72 = 0;
int iLocal_73 = 0;
#pragma endregion //}

void __EntryFunction__() {
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;

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
	sLocal_21 = "CHECKPOINT_NORMAL";
	sLocal_22 = "CHECKPOINT_MISSED";
	sLocal_23 = "CHECKPOINT_PERFECT";
	vLocal_24 = {1694.74f, 3276.502f, 41.2796f};
	vLocal_27 = {8.79494f, 0.59893f, 154.8464f};
	iLocal_30 = 3;
	fLocal_31 = 0f;
	fLocal_35 = -0.0375f;
	fLocal_36 = 0.17f;
	fLocal_39 = 80f;
	fLocal_40 = 140f;
	fLocal_41 = 180f;
	bLocal_50 = true;
	iLocal_53 = -1;
	if (player::has_force_cleanup_occurred(2)) {
		func_50();
	}
	iVar0 = 0;
	while (iVar0 <= 45) {
		iVar1 = func_49(iVar0);
		func_46(iVar1, func_47(iVar0));
		iVar0++;
	}
	func_45(91, 1);
	func_45(92, 1);
	Global_25498 = 1;
	while (Global_25500) {
		if (gameplay::get_game_timer() % 250 == 0) {
		}
		system::wait(0);
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 7) {
		iLocal_55[iVar2] = -1;
		iVar2++;
	}
	gameplay::set_bit(&Global_25501[iVar2 /*23*/].f_11, 18);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 263) {
		gameplay::set_bit(&Global_25501[iVar2 /*23*/].f_11, 18);
		iVar2++;
	}
	iLocal_71 = Global_31552;
	bVar3 = false;
	func_44();
	func_42();
	while (true) {
		if (!bVar3) {
			func_41();
		}
		bVar3 = func_34();
		if (bVar3) {
			Global_25498 = 1;
		}
		iVar4 = 0;
		iVar5 = 0;
		iVar2 = 0;
		if (Global_25498) {
			func_44();
			func_42();
			iVar6 = 0;
			iVar2 = 0;
			while (iVar2 < 263) {
				bVar7 = gameplay::is_bit_set(Global_25501[iVar2 /*23*/].f_11, 18);
				if (!bVar7) {
					if (func_33(iVar2)) {
						iVar5++;
						bVar7 = true;
					}
				}
				iVar4++;
				if (bVar7) {
					iVar8 = 0;
					iVar9 = 0;
					if (Global_31552) {
						iVar8++;
						iVar9++;
					}
					else {
						if (gameplay::is_bit_set(Global_25501[iVar2 /*23*/].f_11, 13)) {
							if (func_32()) {
								iVar8++;
							}
							iVar9++;
						}
						if (gameplay::is_bit_set(Global_25501[iVar2 /*23*/].f_11, 1)) {
							if (!bLocal_50) {
								iVar8++;
							}
							iVar9++;
						}
						if (gameplay::is_bit_set(Global_25501[iVar2 /*23*/].f_11, 2)) {
							if (bLocal_50) {
								iVar8++;
							}
							iVar9++;
						}
						if (gameplay::is_bit_set(Global_25501[iVar2 /*23*/].f_11, 7)) {
							if (!func_31(15)) {
								iVar8++;
							}
							iVar9++;
						}
						if (gameplay::is_bit_set(Global_25501[iVar2 /*23*/].f_11, 16)) {
							if (!func_29(Global_25501[iVar2 /*23*/].f_22)) {
								iVar8++;
							}
							iVar9++;
						}
						if (gameplay::is_bit_set(Global_25501[iVar2 /*23*/].f_11, 14)) {
							if (func_31(5)) {
								iVar8++;
							}
							iVar9++;
						}
						if (gameplay::is_bit_set(Global_25501[iVar2 /*23*/].f_11, 8)) {
							if (Global_25501[iVar2 /*23*/].f_16 != 4 && Global_25501[iVar2 /*23*/].f_16 != 8) {
								if (!func_28(iVar2)) {
									iVar8++;
								}
								iVar9++;
							}
						}
						if (gameplay::is_bit_set(Global_25501[iVar2 /*23*/].f_11, 19)) {
							switch (iLocal_64) {
							case 1:
							case 0:
							case 2: break;

							default: iVar8++; break;
							}
							iVar9++;
						}
						if (gameplay::is_bit_set(Global_25501[iVar2 /*23*/].f_11, 27)) {
							if (bLocal_45) {
								iVar8++;
							}
							iVar9++;
						}
						if (Global_25501[iVar2 /*23*/].f_16 == 1) {
							func_22();
						}
					}
					if (iVar9 > 0) {
						if (iVar8 > 0) {
							gameplay::clear_bit(&Global_25501[iVar2 /*23*/].f_11, 0);
						}
						else if (gameplay::is_bit_set(Global_25501[iVar2 /*23*/].f_11, 15)) {
							gameplay::set_bit(&Global_25501[iVar2 /*23*/].f_11, 0);
						}
					}
					else if (gameplay::is_bit_set(Global_25501[iVar2 /*23*/].f_11, 15)) {
						gameplay::set_bit(&Global_25501[iVar2 /*23*/].f_11, 0);
					}
					if (gameplay::is_bit_set(Global_25501[iVar2 /*23*/].f_11, 0) &&
						gameplay::is_bit_set(Global_25501[iVar2 /*23*/].f_11, 3)) {
						bVar10 = false;
						if (!ui::does_blip_exist(Global_25501[iVar2 /*23*/].f_19)) {
							while (ui::get_number_of_active_blips() >= 150) {
								system::wait(2000);
							}
							if (gameplay::is_bit_set(Global_25501[iVar2 /*23*/].f_11, 19)) {
								switch (iLocal_64) {
								case 1:
								case 0:
								case 2:
									if (gameplay::is_bit_set(Global_25501[iVar2 /*23*/].f_11, 28)) {
										Global_25501[iVar2 /*23*/].f_19 = ui::add_blip_for_radius(
											Global_25501[iVar2 /*23*/][0 /*3*/], Global_25501[iVar2 /*23*/].f_10);
										ui::set_blip_alpha(Global_25501[iVar2 /*23*/].f_19, 128);
										ui::_0x75A16C3DA34F1245(Global_25501[iVar2 /*23*/].f_19, 0);
									}
									else {
										Global_25501[iVar2 /*23*/].f_19 =
											ui::add_blip_for_coord(Global_25501[iVar2 /*23*/][iLocal_64 /*3*/]);
										ui::set_blip_sprite(Global_25501[iVar2 /*23*/].f_19,
															Global_25501[iVar2 /*23*/].f_12[iLocal_64]);
									}
									break;

								default: Global_25501[iVar2 /*23*/].f_19 = ui::add_blip_for_coord(1f, 2f, 3f); break;
								}
							}
							else if (gameplay::is_bit_set(Global_25501[iVar2 /*23*/].f_11, 28)) {
								Global_25501[iVar2 /*23*/].f_19 = ui::add_blip_for_radius(
									Global_25501[iVar2 /*23*/][0 /*3*/], Global_25501[iVar2 /*23*/].f_10);
								ui::set_blip_alpha(Global_25501[iVar2 /*23*/].f_19, 128);
								ui::_0x75A16C3DA34F1245(Global_25501[iVar2 /*23*/].f_19, 0);
							}
							else {
								Global_25501[iVar2 /*23*/].f_19 =
									ui::add_blip_for_coord(Global_25501[iVar2 /*23*/][0 /*3*/]);
								ui::set_blip_sprite(Global_25501[iVar2 /*23*/].f_19,
													Global_25501[iVar2 /*23*/].f_12[0]);
							}
							if (Global_25501[iVar2 /*23*/].f_16 == 1) {
								bVar10 = true;
							}
						}
						else {
							if (gameplay::is_bit_set(Global_25501[iVar2 /*23*/].f_11, 19)) {
								switch (iLocal_64) {
								case 1:
								case 0:
								case 2:
									ui::set_blip_coords(Global_25501[iVar2 /*23*/].f_19,
														Global_25501[iVar2 /*23*/][iLocal_64 /*3*/]);
									break;

								default: break;
								}
							}
							else {
								ui::set_blip_coords(Global_25501[iVar2 /*23*/].f_19,
													Global_25501[iVar2 /*23*/][0 /*3*/]);
							}
							if (gameplay::is_bit_set(Global_25501[iVar2 /*23*/].f_11, 9)) {
								if (iLocal_47) {
									ui::set_blip_flashes(Global_25501[iVar2 /*23*/].f_19, 1);
									iLocal_47 = 0;
								}
								else {
									ui::set_blip_flashes_alternate(Global_25501[iVar2 /*23*/].f_19, 1);
									iLocal_47 = 1;
								}
								ui::set_blip_flash_timer(Global_25501[iVar2 /*23*/].f_19, 10000);
								gameplay::clear_bit(&Global_25501[iVar2 /*23*/].f_11, 9);
							}
							else {
								ui::set_blip_flashes(Global_25501[iVar2 /*23*/].f_19, 0);
							}
						}
						func_19(Global_25501[iVar2 /*23*/].f_19, iVar2);
						if (bVar10) {
							func_18(iVar2);
						}
						iVar5++;
					}
					else {
						if (ui::does_blip_exist(Global_25501[iVar2 /*23*/].f_19)) {
							ui::remove_blip(&Global_25501[iVar2 /*23*/].f_19);
							iVar5++;
							if (Global_25501[iVar2 /*23*/].f_16 == 1) {
								func_17(iVar2);
							}
						}
						Global_25501[iVar2 /*23*/].f_19 = 0;
					}
				}
				gameplay::clear_bit(&Global_25501[iVar2 /*23*/].f_11, 18);
				iVar11 = 30;
				if (cam::is_screen_faded_out()) {
					iVar11 = 250;
				}
				if (iVar5 > iVar11) {
					system::wait(0);
					iVar5 = 0;
				}
				if (iVar4 / 20 > iVar6) {
					iVar6 = iVar4 / 20;
					system::wait(0);
				}
				iVar2++;
			}
		}
		Global_25498 = Global_25499;
		Global_25499 = 0;
		if (iVar4 == 0) {
			func_10();
			func_6();
			system::wait(500);
			iLocal_64 = func_1();
		}
	}
}

// Position - 0x746
int func_1() {
	func_2();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x75F
void func_2() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_5(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_4(player::player_ped_id());
			if (func_3(iVar0) && (!func_31(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_3(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x85C
bool func_3(int iParam0) { return iParam0 < 3; }

// Position - 0x868
int func_4(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_5(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x8A5
int func_5(int iParam0) {
	if (func_3(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x8CF
void func_6() {
	if (func_1() == 1) {
		if (func_9(63)) {
			if (player::is_player_playing(player::player_id())) {
				if (func_9(126)) {
					if (func_8(138)) {
						func_7(138, 0, 0);
					}
					if (!func_8(139)) {
						if (script::_get_number_of_instances_of_script_with_name_hash(joaat("chop")) == 0) {
							if (gameplay::get_distance_between_coords(
									entity::get_entity_coords(player::player_ped_id(), 1), 19.3f, 528.24f, 169.63f, 1) >
								50f) {
								func_7(139, 1, 0);
							}
						}
					}
				}
				else {
					if (func_8(139)) {
						func_7(139, 0, 0);
					}
					if (!func_8(138)) {
						if (script::_get_number_of_instances_of_script_with_name_hash(joaat("chop")) == 0) {
							if (gameplay::get_distance_between_coords(
									entity::get_entity_coords(player::player_ped_id(), 1), -11.15f, -1425.56f, 29.67f,
									1) > 50f) {
								func_7(138, 1, 0);
							}
						}
					}
				}
			}
		}
	}
}

// Position - 0x9AB
void func_7(int iParam0, int iParam1, int iParam2) {
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

// Position - 0xAB4
bool func_8(int iParam0) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return false;
	}
	return ui::does_blip_exist(Global_25501[iVar0 /*23*/].f_19);
}

// Position - 0xAF0
bool func_9(int iParam0) {
	if (iParam0 == 146 || iParam0 == -1) {
		return false;
	}
	return Global_101700.f_8044.f_99.f_58[iParam0];
}

// Position - 0xB1D
void func_10() {
	vector3 vVar0;
	int iVar3;
	float fVar4;
	int iVar5;
	float fVar6;

	if (player::is_player_dead(player::get_player_index())) {
		return;
	}
	vVar0 = {func_16(player::get_player_index())};
	iVar3 = -1;
	fVar4 = 1000000f;
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 < 7) {
		if (iLocal_55[iVar5] != -1) {
			if (ui::does_blip_exist(Global_25501[iLocal_55[iVar5] /*23*/].f_19)) {
				fVar6 = gameplay::get_distance_between_coords(
					vVar0, ui::get_blip_coords(Global_25501[iLocal_55[iVar5] /*23*/].f_19), 1);
				if (fVar6 < fVar4) {
					fVar4 = fVar6;
					iVar3 = iVar5;
				}
			}
		}
		iVar5++;
	}
	if (iLocal_53 == iVar3) {
		return;
	}
	iLocal_53 = iVar3;
	if (iVar3 == -1) {
		return;
	}
	iVar5 = 0;
	while (iVar5 < 7) {
		if (iLocal_55[iVar5] != -1) {
			if (iVar5 == iVar3) {
				if (ui::does_blip_exist(Global_25501[iLocal_55[iVar5] /*23*/].f_19)) {
					func_15(iLocal_55[iVar5]);
				}
			}
			else if (ui::does_blip_exist(Global_25501[iLocal_55[iVar5] /*23*/].f_19)) {
				func_11(iLocal_55[iVar5]);
			}
		}
		iVar5++;
	}
}

// Position - 0xC21
void func_11(int iParam0) {
	func_14(iParam0, 0, 0);
	func_13(iParam0, 1);
	func_12(iParam0, 1);
}

// Position - 0xC3F
void func_12(int iParam0, int iParam1) {
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

// Position - 0xCC5
void func_13(int iParam0, int iParam1) {
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

// Position - 0xD4B
void func_14(int iParam0, int iParam1, int iParam2) {
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

// Position - 0xDF7
void func_15(int iParam0) {
	func_14(iParam0, 1, 0);
	func_13(iParam0, 1);
	func_12(iParam0, 1);
}

// Position - 0xE15
Vector3 func_16(int iParam0) { return entity::get_entity_coords(player::get_player_ped(iParam0), 0); }

// Position - 0xE28
void func_17(int iParam0) {
	int iVar0;

	if (iLocal_54 < 1) {
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7) {
		if (iLocal_55[iVar0] == iParam0) {
			iLocal_54--;
			iLocal_55[iVar0] = -1;
			if (iParam0 == iLocal_53) {
				iLocal_53 = -1;
			}
			return;
		}
		iVar0++;
	}
}

// Position - 0xE73
void func_18(int iParam0) {
	int iVar0;
	int iVar1;

	if (iLocal_54 == 7) {
		return;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < iLocal_54) {
		if (iLocal_55[iVar0] == iParam0) {
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7) {
		if (iLocal_55[iVar0] == -1) {
			iVar1 = iVar0;
			iVar0 = 7;
		}
		iVar0++;
	}
	iLocal_55[iVar1] = iParam0;
	iLocal_54++;
}

// Position - 0xEDC
void func_19(int iParam0, int iParam1) {
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	int iVar4;

	iVar0 = func_1();
	ui::_0xC4278F70131BAA6D(iParam0, 1);
	ui::set_blip_priority(iParam0, 2);
	ui::set_blip_colour(iParam0, func_21(iParam1));
	if (Global_25501[iParam1 /*23*/].f_16 == 4 || Global_25501[iParam1 /*23*/].f_16 == 8) {
		switch (iVar0) {
		case 0: ui::set_blip_colour(iParam0, 42); break;

		case 1: ui::set_blip_colour(iParam0, 43); break;

		case 2: ui::set_blip_colour(iParam0, 44); break;
		}
	}
	if (!gameplay::is_bit_set(Global_25501[iParam1 /*23*/].f_11, 28)) {
		ui::set_blip_scale(iParam0, 1f);
	}
	if (!gameplay::is_string_null_or_empty(&Global_25501[iParam1 /*23*/].f_20)) {
		if (ui::does_text_label_exist(&Global_25501[iParam1 /*23*/].f_20)) {
			ui::set_blip_name_from_text_file(iParam0, &Global_25501[iParam1 /*23*/].f_20);
		}
	}
	bVar1 = gameplay::is_bit_set(Global_25501[iParam1 /*23*/].f_11, 4);
	bVar2 = gameplay::is_bit_set(Global_25501[iParam1 /*23*/].f_11, 5);
	uVar3 = gameplay::is_bit_set(Global_25501[iParam1 /*23*/].f_11, 6);
	iVar4 = 0;
	if (func_20(0)) {
		iVar4 = gameplay::is_bit_set(Global_25501[iParam1 /*23*/].f_11, 11);
	}
	if (uVar3 && !iVar4) {
		ui::set_blip_as_short_range(iParam0, 0);
	}
	else {
		ui::set_blip_as_short_range(iParam0, 1);
	}
	if (bVar2 && bVar1) {
		ui::set_blip_display(iParam0, 4);
	}
	else {
		if (bVar2) {
			ui::set_blip_display(iParam0, 5);
		}
		if (bVar1) {
			ui::set_blip_display(iParam0, 3);
		}
	}
	switch (Global_25501[iParam1 /*23*/].f_16) {
	case 7:
		ui::set_blip_priority(iParam0, 2);
		ui::set_blip_high_detail(iParam0, 0);
		break;

	case 6:
	case 5:
		ui::set_blip_priority(iParam0, 2);
		ui::set_blip_high_detail(iParam0, 0);
		break;

	case 1:
		ui::set_blip_priority(iParam0, 3);
		ui::set_blip_high_detail(iParam0, 1);
		break;

	case 9:
		ui::set_blip_priority(iParam0, 1);
		ui::set_blip_category(iParam0, 10);
		ui::set_blip_high_detail(iParam0, 0);
		break;

	case 4:
	case 8:
		ui::set_blip_high_detail(iParam0, 1);
		if (Global_25501[iParam1 /*23*/].f_16 == 4) {
			ui::set_blip_priority(iParam0, 7);
		}
		else {
			ui::set_blip_priority(iParam0, 5);
		}
		if (gameplay::is_bit_set(Global_25501[iParam1 /*23*/].f_11, 8)) {
			if (!func_28(iParam1)) {
				if (gameplay::is_bit_set(Global_25501[iParam1 /*23*/].f_11, 28)) {
					ui::set_blip_alpha(iParam0, 0);
				}
				else {
					if (Global_25501[iParam1 /*23*/].f_17 == 0) {
						ui::set_blip_colour(iParam0, 42);
					}
					if (Global_25501[iParam1 /*23*/].f_17 == 1) {
						ui::set_blip_colour(iParam0, 43);
					}
					if (Global_25501[iParam1 /*23*/].f_17 == 2) {
						ui::set_blip_colour(iParam0, 44);
					}
					if (Global_25501[iParam1 /*23*/].f_16 == 8) {
						ui::set_blip_as_short_range(iParam0,
													gameplay::is_bit_set(Global_25501[iParam1 /*23*/].f_11, 5));
						ui::set_blip_priority(iParam0, 3);
						ui::set_blip_as_short_range(iParam0, 1);
						ui::_0x54318C915D27E4CE(iParam0, 1);
						ui::set_blip_scale(iParam0, 0.77f);
					}
					else {
						ui::set_blip_scale(iParam0, 0.72f);
					}
				}
			}
			else {
				if (gameplay::is_bit_set(Global_25501[iParam1 /*23*/].f_11, 28)) {
					ui::set_blip_alpha(iParam0, 128);
				}
				if (Global_25501[iParam1 /*23*/].f_16 == 8) {
					ui::_0x54318C915D27E4CE(iParam0, 0);
				}
			}
		}
		break;

	default: ui::set_blip_priority(iParam0, 5); break;
	}
	switch (iParam1) {
	case 48:
	case 49:
	case 50:
	case 51:
	case 52:
	case 53:
	case 54:
	case 55:
	case 56:
	case 57:
	case 58: ui::set_blip_high_detail(iParam0, 1); break;
	}
	if (gameplay::is_bit_set(Global_25501[iParam1 /*23*/].f_11, 19)) {
		switch (iVar0) {
		case 1:
		case 0:
		case 2:
			ui::set_blip_coords(Global_25501[iParam1 /*23*/].f_19, Global_25501[iParam1 /*23*/][iVar0 /*3*/]);
			break;
		}
	}
	if (gameplay::is_bit_set(Global_25501[iParam1 /*23*/].f_11, 17)) {
		ui::set_blip_as_mission_creator_blip(iParam0, 1);
	}
	else {
		ui::set_blip_as_mission_creator_blip(iParam0, 0);
	}
	if (gameplay::is_bit_set(Global_25501[iParam1 /*23*/].f_11, 20)) {
		ui::_set_blip_checked(iParam0, 1);
	}
	else {
		ui::_set_blip_checked(iParam0, 0);
	}
	if (gameplay::is_bit_set(Global_25501[iParam1 /*23*/].f_11, 29)) {
		ui::set_blip_colour(iParam0, 39);
	}
}

// Position - 0x12EA
bool func_20(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_29(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x130C
int func_21(int iParam0) {
	int iVar0;
	var uVar1;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return 0;
	}
	uVar1 = gameplay::get_bits_in_range(Global_25501[iVar0 /*23*/].f_11, 21, 26);
	return uVar1;
}

// Position - 0x134F
void func_22() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7) {
		func_23(iVar0);
		iVar0++;
	}
}

// Position - 0x136F
void func_23(int iParam0) {
	int iVar0;

	if (iParam0 == 10) {
		return;
	}
	if (Global_86862[iParam0 /*10*/].f_7 == 263) {
		return;
	}
	iVar0 = 0;
	if (gameplay::is_bit_set(Global_101700.f_6188[iParam0], 0)) {
		if (Global_86862[iParam0 /*10*/].f_9 != func_27()) {
			iVar0 = 1;
		}
		else if (!func_25(iParam0)) {
			iVar0 = 1;
		}
	}
	if (iParam0 == 5) {
		if (func_24(6)) {
			iVar0 = 0;
		}
	}
	if (func_20(14)) {
		iVar0 = 0;
	}
	func_7(Global_86862[iParam0 /*10*/].f_7, iVar0, 0);
}

// Position - 0x13FC
bool func_24(int iParam0) { return gameplay::is_bit_set(Global_101700.f_6188[iParam0], 0); }

// Position - 0x1414
int func_25(int iParam0) {
	int iVar0;
	char *sVar1;
	int iVar9;

	if (Global_91543.f_301 == 0) {
		return 0;
	}
	if (iParam0 == 10) {
		iVar0 = 0;
		while (iVar0 < 10) {
			if (func_25(iVar0)) {
				return 1;
			}
			iVar0++;
		}
	}
	else if (!ped::is_ped_injured(player::player_ped_id())) {
		func_26(iParam0, &sVar1);
		iVar9 = interior::get_interior_at_coords_with_type(Global_86862[iParam0 /*10*/].f_3, &sVar1);
		if (iVar9 != 0 && Global_91543.f_301 == iVar9) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x1499
bool func_26(int iParam0, char *sParam1) {
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

// Position - 0x156D
int func_27() {
	func_2();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x1586
int func_28(int iParam0) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return 0;
	}
	if (!gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 8)) {
		return 0;
	}
	if (Global_25501[iVar0 /*23*/].f_17 == func_1()) {
		return 1;
	}
	if (!gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 10)) {
		return 0;
	}
	if (Global_25501[iVar0 /*23*/].f_18 == func_1()) {
		return 1;
	}
	return 0;
}

// Position - 0x160C
bool func_29(int iParam0) { return func_30(iParam0, Global_35781); }

// Position - 0x161D
int func_30(int iParam0, int iParam1) {
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

// Position - 0x17FE
bool func_31(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x180C
bool func_32() {
	if (player::get_player_wanted_level(player::get_player_index()) != 0) {
		return true;
	}
	return false;
}

// Position - 0x1825
bool func_33(int iParam0) {
	if (iLocal_68 && gameplay::is_bit_set(Global_25501[iParam0 /*23*/].f_11, 13)) {
		gameplay::set_bit(&Global_25501[iParam0 /*23*/].f_11, 18);
		return true;
	}
	if (iLocal_69 && (gameplay::is_bit_set(Global_25501[iParam0 /*23*/].f_11, 7) ||
					  gameplay::is_bit_set(Global_25501[iParam0 /*23*/].f_11, 11) ||
					  gameplay::is_bit_set(Global_25501[iParam0 /*23*/].f_11, 16))) {
		gameplay::set_bit(&Global_25501[iParam0 /*23*/].f_11, 18);
		return true;
	}
	if (iLocal_70 && gameplay::is_bit_set(Global_25501[iParam0 /*23*/].f_11, 14)) {
		gameplay::set_bit(&Global_25501[iParam0 /*23*/].f_11, 18);
		return true;
	}
	if (iLocal_65 && (gameplay::is_bit_set(Global_25501[iParam0 /*23*/].f_11, 10) ||
					  gameplay::is_bit_set(Global_25501[iParam0 /*23*/].f_11, 8) ||
					  gameplay::is_bit_set(Global_25501[iParam0 /*23*/].f_11, 19))) {
		gameplay::set_bit(&Global_25501[iParam0 /*23*/].f_11, 18);
		return true;
	}
	if (bLocal_66) {
		gameplay::set_bit(&Global_25501[iParam0 /*23*/].f_11, 18);
		return true;
	}
	if (iLocal_72 && gameplay::is_bit_set(Global_25501[iParam0 /*23*/].f_11, 27)) {
		gameplay::set_bit(&Global_25501[iParam0 /*23*/].f_11, 18);
		return true;
	}
	if (iLocal_73 && (gameplay::is_bit_set(Global_25501[iParam0 /*23*/].f_11, 1) ||
					  gameplay::is_bit_set(Global_25501[iParam0 /*23*/].f_11, 2)) ||
		Global_25501[iParam0 /*23*/].f_16 == 1) {
		gameplay::set_bit(&Global_25501[iParam0 /*23*/].f_11, 18);
		return true;
	}
	return false;
}

// Position - 0x19C5
int func_34() {
	int iVar0;

	iVar0 = 0;
	if (func_40()) {
		if (!iLocal_67) {
			iLocal_67 = 1;
			iVar0 = 1;
		}
	}
	if (func_39()) {
		if (!iLocal_68) {
			iLocal_68 = 1;
			iVar0 = 1;
		}
	}
	if (func_38()) {
		if (!iLocal_69) {
			iLocal_69 = 1;
			iVar0 = 1;
		}
	}
	if (func_37()) {
		if (!iLocal_70) {
			iLocal_70 = 1;
			iVar0 = 1;
		}
	}
	bLocal_66 = false;
	if (Global_31552 != iLocal_71) {
		iLocal_71 = Global_31552;
		if (!bLocal_66) {
			bLocal_66 = true;
			iVar0 = 1;
		}
	}
	if (func_35()) {
		if (!iLocal_73) {
			iLocal_73 = 1;
			iVar0 = 1;
		}
	}
	iLocal_64 = func_1();
	if (iLocal_64 != iLocal_63) {
		iLocal_63 = iLocal_64;
		iLocal_65 = 1;
		iVar0 = 1;
	}
	iLocal_46 = bLocal_45;
	if (func_9(130)) {
		bLocal_45 = true;
	}
	if (func_9(131)) {
		bLocal_45 = false;
	}
	if (bLocal_45 != iLocal_46) {
		if (!iLocal_72) {
			iVar0 = 1;
		}
		iLocal_72 = 1;
	}
	return iVar0;
}

// Position - 0x1A93
bool func_35() {
	int iVar0;

	if (entity::is_entity_dead(player::get_player_ped(player::get_player_index()), 0)) {
		return false;
	}
	iVar0 = interior::get_interior_from_entity(player::get_player_ped(player::get_player_index()));
	if (iLocal_51 != iVar0) {
		iLocal_51 = iVar0;
		if (iVar0 == 0 || func_36(iVar0)) {
			bLocal_50 = true;
		}
		else {
			bLocal_50 = false;
		}
		return true;
	}
	return false;
}

// Position - 0x1AE9
int func_36(int iParam0) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 60) {
		if (Global_30[iVar0] == iParam0) {
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x1B18
bool func_37() {
	if (iLocal_52 != func_20(0)) {
		iLocal_52 = func_20(0);
		return true;
	}
	return false;
}

// Position - 0x1B36
bool func_38() {
	bool bVar0;

	bVar0 = Global_31553;
	Global_31553 = 0;
	if (bVar0) {
	}
	return bVar0;
}

// Position - 0x1B4E
bool func_39() {
	if (player::get_player_wanted_level(player::get_player_index()) != iLocal_49) {
		iLocal_49 = player::get_player_wanted_level(player::get_player_index());
		return true;
	}
	return false;
}

// Position - 0x1B72
bool func_40() {
	if (Global_35781 != 15) {
		return false;
	}
	if (time::get_clock_hours() != iLocal_48) {
		iLocal_48 = time::get_clock_hours();
		return true;
	}
	return false;
}

// Position - 0x1B9A
void func_41() {
	iLocal_65 = 0;
	bLocal_66 = false;
	iLocal_67 = 0;
	iLocal_68 = 0;
	iLocal_69 = 0;
	iLocal_70 = 0;
	iLocal_71 = 0;
	iLocal_72 = 0;
	iLocal_73 = 0;
}

// Position - 0x1BBD
void func_42() {
	if (func_43(0) == 1 && !func_31(6)) {
		func_7(112, 1, 0);
		func_7(113, 1, 0);
		func_7(114, 1, 0);
	}
}

// Position - 0x1BF2
int func_43(int iParam0) {
	if (iParam0 == 94 || iParam0 == -1) {
		return 0;
	}
	return Global_101700.f_8044.f_330[iParam0 /*6*/];
}

// Position - 0x1C1E
void func_44() {
	if (func_43(0) == 1 && !func_31(6)) {
		func_7(156, 1, 0);
		func_7(157, 1, 0);
		func_7(161, 1, 0);
		func_7(160, 1, 0);
		func_7(158, 1, 0);
		func_11(158);
		func_7(159, 1, 0);
		func_11(159);
	}
}

// Position - 0x1C77
void func_45(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 263 || iParam0 == 263) {
		return;
	}
	if (iParam1 == gameplay::is_bit_set(Global_25501[iVar0 /*23*/].f_11, 2)) {
		return;
	}
	if (iParam1) {
		gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 2);
	}
	else {
		gameplay::clear_bit(&Global_25501[iVar0 /*23*/].f_11, 2);
	}
	if (Global_25498 == 1) {
		Global_25499 = 1;
	}
	Global_25498 = 1;
	gameplay::set_bit(&Global_25501[iVar0 /*23*/].f_11, 18);
}

// Position - 0x1CFD
void func_46(int iParam0, char *sParam1) {
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

// Position - 0x1D57
char *func_47(int iParam0) {
	switch (iParam0) {
	case 0: return "SB_SAL";

	case 1: return "SB_BAR";

	case 2: return "SB_BAR";

	case 3: return "SB_BAR";

	case 4: return "SB_BAR";

	case 5: return "SB_BAR";

	case 6: return "SB_BAR";

	case 7: return func_48(iParam0, 0);

	case 8: return func_48(iParam0, 0);

	case 9: return func_48(iParam0, 0);

	case 10: return func_48(iParam0, 0);

	case 11: return func_48(iParam0, 0);

	case 12: return func_48(iParam0, 0);

	case 13: return func_48(iParam0, 0);

	case 14: return func_48(iParam0, 0);

	case 15: return func_48(iParam0, 0);

	case 16: return func_48(iParam0, 0);

	case 17: return func_48(iParam0, 0);

	case 18: return func_48(iParam0, 0);

	case 19: return func_48(iParam0, 0);

	case 20: return func_48(iParam0, 0);

	case 21: return func_48(iParam0, 0);

	case 22: return "SB_TAT";

	case 23: return "SB_TAT";

	case 24: return "SB_TAT";

	case 25: return "SB_TAT";

	case 26: return "SB_TAT";

	case 27: return "SB_TAT";

	case 28: return "SB_AMU2";

	case 29: return "SB_AMU";

	case 30: return "SB_AMU";

	case 31: return "SB_AMU";

	case 32: return "SB_AMU";

	case 33: return "SB_AMU";

	case 34: return "SB_AMU";

	case 35: return "SB_AMU";

	case 36: return "SB_AMU";

	case 37: return "SB_AMU";

	case 38: return "SB_AMU2";

	case 39: return func_48(iParam0, 0);

	case 40: return func_48(iParam0, 0);

	case 41: return func_48(iParam0, 0);

	case 42: return func_48(iParam0, 0);

	case 43: return func_48(iParam0, 0);

	case 44: return func_48(iParam0, 0);

	case 45: return func_48(iParam0, 0);
	}
	return "SHOP_BLIP_INV";
}

// Position - 0x207D
char *func_48(int iParam0, int iParam1) {
	switch (iParam0) {
	case -1: return "S_N_EM";

	case 0: return "S_H_01";

	case 1: return "S_H_02";

	case 2: return "S_H_03";

	case 3: return "S_H_04";

	case 4: return "S_H_05";

	case 5: return "S_H_06";

	case 6: return "S_H_07";

	case 7: return "S_CL_01";

	case 8: return "S_CL_02";

	case 9: return "S_CL_03";

	case 10: return "S_CL_04";

	case 11: return "S_CL_05";

	case 12: return "S_CL_06";

	case 13: return "S_CL_07";

	case 14: return "S_CM_01";

	case 15: return "S_CM_03";

	case 16: return "S_CM_04";

	case 17: return "S_CM_05";

	case 18: return "S_CH_01";

	case 19: return "S_CH_02";

	case 20: return "S_CH_03";

	case 21: return "S_CA_01";

	case 22: return "S_T_01";

	case 23: return "S_T_02";

	case 24: return "S_T_03";

	case 25: return "S_T_04";

	case 26: return "S_T_05";

	case 27: return "S_T_06";

	case 28: return "S_G_01";

	case 29: return "S_G_02";

	case 30: return "S_G_03";

	case 31: return "S_G_04";

	case 32: return "S_G_05";

	case 33: return "S_G_06";

	case 34: return "S_G_07";

	case 35: return "S_G_08";

	case 36: return "S_G_09";

	case 37: return "S_G_10";

	case 38: return "S_G_11";

	case 39: return "S_MO_01";

	case 40: return "S_MO_05";

	case 41: return "S_MO_06";

	case 42: return "S_MO_07";

	case 43: return "S_MO_08";

	case 44: return "S_MO_09";

	case 45:
		switch (iParam1) {
		case 4:
		case 5: return "S_MO_10";
		}
		return "S_MO_11";
	}
	return "SHOP_NAME_EMPTY";
}

// Position - 0x239D
int func_49(int iParam0) {
	switch (iParam0) {
	case -1: return 263;

	case 0: return 19;

	case 1: return 20;

	case 2: return 21;

	case 3: return 22;

	case 4: return 23;

	case 5: return 24;

	case 6: return 25;

	case 7: return 26;

	case 8: return 27;

	case 9: return 28;

	case 10: return 29;

	case 11: return 30;

	case 12: return 31;

	case 13: return 32;

	case 14: return 33;

	case 15: return 35;

	case 16: return 36;

	case 17: return 37;

	case 18: return 38;

	case 19: return 39;

	case 20: return 40;

	case 21: return 41;

	case 22: return 42;

	case 23: return 43;

	case 24: return 44;

	case 25: return 45;

	case 26: return 46;

	case 27: return 47;

	case 28: return 48;

	case 29: return 49;

	case 30: return 50;

	case 31: return 51;

	case 32: return 52;

	case 33: return 53;

	case 34: return 54;

	case 35: return 55;

	case 36: return 56;

	case 37: return 57;

	case 38: return 58;

	case 39: return 59;

	case 40: return 60;

	case 41: return 61;

	case 42: return 62;

	case 43: return 63;

	case 44: return 64;

	case 45: return 64;

	default: break;
	}
	return 263;
}

// Position - 0x2645
void func_50() { script::terminate_this_thread(); }
