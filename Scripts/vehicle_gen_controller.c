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
var uLocal_45 = 0;
var uLocal_46 = 0;
int iLocal_47 = 0;
var uLocal_48[68] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_117[68] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
vector3 vLocal_186[68] = {
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f},
	{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
int iLocal_391 = 0;
int iLocal_392 = 0;
var uLocal_393[6] = {0, 0, 0, 0, 0, 0};
int iLocal_400 = 0;
int iLocal_401 = 0;
struct<114> Local_402 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0
};
struct<5> Local_516 = {
	0, 0, 0, 0, 0
};
int *iLocal_521 = NULL;
var uLocal_522 = 0;
var uLocal_523 = 0;
var uLocal_524 = 0;
var uLocal_525 = 0;
var uLocal_526 = 0;
var uLocal_527 = 0;
var uLocal_528 = 0;
var uLocal_529 = 0;
var uLocal_530 = 0;
var uLocal_531 = 0;
var uLocal_532 = 0;
var uLocal_533 = 0;
var uLocal_534 = 0;
var uLocal_535 = 0;
var uLocal_536 = 0;
var uLocal_537 = 0;
var uLocal_538 = 0;
var uLocal_539 = 0;
var uLocal_540 = 0;
var uLocal_541 = 0;
var uLocal_542 = 0;
var uLocal_543 = 0;
var uLocal_544 = 0;
var uLocal_545 = 0;
struct<74> Local_546 = {
	4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3
};
var uLocal_620 = 0;
var uLocal_621 = 0;
var uLocal_622 = 0;
var uLocal_623 = 0;
var uLocal_624 = 0;
var uLocal_625 = 0;
var uLocal_626 = 0;
var uLocal_627 = 0;
var uLocal_628 = 0;
var uLocal_629 = 0;
var uLocal_630 = 0;
var uLocal_631 = 0;
var uLocal_632 = 2;
var uLocal_633 = 0;
var uLocal_634 = 0;
var uLocal_635 = 0;
var uLocal_636 = 0;
var uLocal_637 = 0;
var uLocal_638 = 0;
var uLocal_639 = 0;
var uLocal_640 = 0;
var uLocal_641 = 0;
var uLocal_642 = 0;
var uLocal_643 = 0;
var uLocal_644 = 0;
int iLocal_645 = 0;
int iLocal_646[4] = {0, 0, 0, 0};
int iLocal_651 = 0;
int iLocal_652[1] = {0};
int iLocal_654 = 0;
int iLocal_655 = 0;
int iLocal_656 = 0;
int iLocal_657 = 0;
int iLocal_658 = 0;
int iLocal_659 = 0;
int iLocal_660 = 0;
int iLocal_661 = 0;
int iLocal_662 = 0;
int iLocal_663 = 0;
int iLocal_664[2] = {0, 0};
int iLocal_667 = 0;
int *iLocal_668 = NULL;
int iLocal_669 = 0;
int iLocal_670 = 0;
int iLocal_671 = 0;
int iLocal_672 = 0;
int iLocal_673 = 0;
struct<13> Local_674 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_687 = 0;
var uLocal_688 = 0;
var uLocal_689 = 0;
var uLocal_690 = 0;
var uLocal_691 = 0;
var uLocal_692 = 0;
var uLocal_693 = 0;
var uLocal_694 = 0;
struct<81> Local_695 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0,
		0, 2, 0, 0, 0
};
struct<78> Local_776 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0
};
int iLocal_854 = 0;
int iLocal_855 = 0;
int iLocal_856 = 0;
int iLocal_857 = 0;
var uLocal_858[6] = {0, 0, 0, 0, 0, 0};
int iLocal_865 = 0;
int iLocal_866 = 0;
int iLocal_867[68] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int iLocal_936[3] = {0, 0, 0};
int iLocal_940 = 0;
var uLocal_941[68] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
					  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
var *uLocal_1010 = NULL;
var uLocal_1011 = 0;
int iLocal_1012 = 0;
int iLocal_1013 = 0;
int iLocal_1014 = 0;
int iLocal_1015 = 0;
int iLocal_1016 = 0;
int iLocal_1017 = 0;
int iLocal_1018 = 0;
char cLocal_1019[16] = "";
var uLocal_1021 = 0;
var uLocal_1022 = 0;
char cLocal_1023[16] = "";
var uLocal_1025 = 0;
var uLocal_1026 = 0;
int iLocal_1027 = 0;
int iLocal_1028 = 0;
int iLocal_1029 = 0;
int iLocal_1030 = 0;
int iLocal_1031 = 0;
int iLocal_1032 = 0;
int iLocal_1033 = 0;
int iLocal_1034 = 0;
char *sLocal_1035 = NULL;
int iLocal_1036 = 0;
int iLocal_1037 = 0;
float fLocal_1038 = 0f;
int iLocal_1039 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_655 = -1;
	iLocal_656 = -1;
	iLocal_661 = -1;
	iLocal_668 = -1;
	iLocal_940 = -1;
	gameplay::set_this_script_can_be_paused(0);
	Local_402.f_5 = -1;
	Local_402 = -1;
	Local_402.f_1 = 99999.99f;
	func_404(&iLocal_521);
	iVar0 = 0;
	while (iVar0 < 3) {
		Global_89203[iVar0 /*3*/][0] = -1;
		Global_89203[iVar0 /*3*/][1] = -1;
		iVar0++;
	}
	if (!Global_101700.f_31389.f_4802) {
		iVar0 = 0;
		while (iVar0 < 312) {
			Global_101700.f_31389.f_1982[0 /*939*/].f_626[iVar0] = -15;
			Global_101700.f_31389.f_1982[1 /*939*/].f_626[iVar0] = -15;
			Global_101700.f_31389.f_1982[2 /*939*/].f_626[iVar0] = -15;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 23) {
			Global_101700.f_31389.f_1934[iVar0] = -1f;
			iVar0++;
		}
		Global_101700.f_31389.f_4801 = -15;
		Global_101700.f_31389.f_4802 = 1;
	}
	if (!func_403() && !func_402() && !func_401() && !func_400()) {
		func_399(60, 0);
		func_399(61, 0);
	}
	func_398();
	iVar0 = 0;
	while (iVar0 < 68) {
		func_397(iVar0);
		iVar0++;
	}
	while (true) {
		if (!iLocal_401) {
			iLocal_401 = 1;
			if (player::has_force_cleanup_occurred(98)) {
				if (player::get_cause_of_most_recent_force_cleanup() == 64) {
					if (!Global_69520) {
						iLocal_401 = 0;
					}
					else {
						func_396();
						func_395();
					}
					Global_69520 = 0;
				}
				else {
					func_396();
					func_395();
				}
			}
		}
		system::wait(0);
		if (gameplay::get_index_of_current_level() != 5) {
			iLocal_672 = func_393();
			func_354();
			func_352();
			func_320(&iLocal_521);
			func_298();
			func_28();
			func_20();
			func_17(&uLocal_1010);
		}
		func_1(&iLocal_521);
	}
}

// Position - 0x24C
void func_1(int *iParam0) {
	int iVar0;
	float fVar1;

	if (!gameplay::is_bit_set(Global_101700.f_8975.f_25, 7)) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0) && func_14(func_16())) {
			iVar0 = 0;
			if (gameplay::is_bit_set(*iParam0, 6) && gameplay::is_bit_set(*iParam0, 12)) {
				fVar1 = system::vdist(entity::get_entity_coords(player::player_ped_id(), 1), iParam0->f_6);
				if (fVar1 > 25f && fVar1 < 1600f) {
					iVar0 = 1;
					if (iParam0->f_2 == -1) {
						iParam0->f_2 = gameplay::get_game_timer() + gameplay::get_random_int_in_range(10000, 15000);
					}
					else {
						if (func_13()) {
							iParam0->f_2 = func_12(iParam0->f_2, gameplay::get_game_timer() +
																	 gameplay::get_random_int_in_range(2000, 4000));
						}
						if (!gameplay::is_bit_set(*iParam0, 23)) {
							func_11(iParam0, &iParam0->f_9);
						}
						else if (!gameplay::is_bit_set(*iParam0, 30)) {
							if (audio::request_script_audio_bank(&iParam0->f_9, 0, -1)) {
								if (gameplay::get_game_timer() > iParam0->f_2) {
									if (func_9() != 7 && func_8(0, 0)) {
										func_4(iParam0, func_6(iParam0));
										func_3(0);
										gameplay::set_bit(iParam0, 30);
									}
								}
							}
						}
						else if (audio::has_sound_finished(iParam0->f_1)) {
							gameplay::clear_bit(iParam0, 30);
							audio::release_sound_id(iParam0->f_1);
							iParam0->f_1 = -1;
							iParam0->f_2 = -1;
						}
					}
				}
			}
			if (!iVar0) {
				if (gameplay::is_bit_set(*iParam0, 23)) {
					func_2(iParam0);
				}
				gameplay::clear_bit(iParam0, 30);
				iParam0->f_2 = -1;
			}
		}
	}
}

// Position - 0x3C5
void func_2(int *iParam0) {
	audio::release_script_audio_bank();
	gameplay::clear_bit(iParam0, 23);
}

// Position - 0x3D9
void func_3(int iParam0) {
	if (iParam0) {
		gameplay::set_bit(&Global_101700.f_8975.f_25, 22);
	}
	else {
		gameplay::clear_bit(&Global_101700.f_8975.f_25, 22);
	}
}

// Position - 0x407
void func_4(var *uParam0, vector3 vParam1) {
	struct<16> Var0;
	struct<16> Var16;

	Var0 = {func_5("EAS", "B", "ALLS", "T_C")};
	Var16 = {func_5("ENTS_SA", "FM_EV", "CH_SOUNDS", "SQUAT")};
	uParam0->f_1 = audio::get_sound_id();
	audio::play_sound_from_coord(uParam0->f_1, &Var0, vParam1, &Var16, 0, 0, 0);
}

// Position - 0x453
struct<16> func_5(char *sParam0, char *sParam1, char *sParam2, char *sParam3) {
	struct<16> Var0;

	StringCopy(&Var0, sParam1, 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, sParam3, 64);
	StringConCat(&Var0, sParam2, 64);
	return Var0;
}

// Position - 0x478
Vector3
func_6(var *uParam0) {
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		vVar3 = {entity::get_entity_coords(player::player_ped_id(), 1)};
		vVar6 = {func_7(uParam0->f_6 - vVar3) * FtoV(52.5f)};
		vVar0 = {vVar3 + vVar6};
	}
	return vVar0;
}

// Position - 0x4C5
Vector3 func_7(vector3 vParam0) {
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

// Position - 0x504
var func_8(int iParam0, int iParam1) {
	var uVar0;

	if (controls::is_disabled_control_just_pressed(0, 36)) {
		gameplay::set_bit(&Global_101700.f_8975.f_25, 22);
	}
	uVar0 = gameplay::is_bit_set(Global_101700.f_8975.f_25, 22);
	if (iParam0 && uVar0) {
		gameplay::clear_bit(&Global_101700.f_8975.f_25, 22);
	}
	iParam1 = iParam1;
	return uVar0;
}

// Position - 0x557
int func_9() {
	var uVar0;

	uVar0 = func_10(Global_101700.f_8975.f_25, 14336, 11);
	return uVar0;
}

// Position - 0x575
var func_10(var uParam0, int iParam1, int iParam2) { return system::shift_right(uParam0 & iParam1, iParam2); }

// Position - 0x588
void func_11(int *iParam0, char *sParam1) {
	audio::request_script_audio_bank(sParam1, 0, -1);
	gameplay::set_bit(iParam0, 23);
}

// Position - 0x5A1
int func_12(int iParam0, int iParam1) {
	if (iParam0 > iParam1) {
		return iParam0;
	}
	return iParam1;
}

// Position - 0x5B7
bool func_13() {
	bool bVar0;

	bVar0 = gameplay::is_bit_set(Global_101700.f_8975.f_25, 22);
	return func_8(0, 0) && !bVar0;
}

// Position - 0x5DE
bool func_14(int iParam0) { return iParam0 == func_15(); }

// Position - 0x5ED
int func_15() { return joaat("ig_orleans"); }

// Position - 0x5FA
int func_16() { return entity::get_entity_model(player::player_ped_id()); }

// Position - 0x60A
void func_17(var *uParam0) {
	int iVar0;
	int iVar1;
	float fVar2;

	if (!Global_1320298.f_21) {
		iVar1 = func_19(*uParam0, uParam0->f_1);
		if (iVar1 == -1) {
			*uParam0++;
			uParam0->f_1 = 0;
			if (*uParam0 >= 4) {
				Global_1320298.f_21 = 1;
			}
			return;
		}
		else {
			iVar0 = iVar1;
			fVar2 = func_18(iVar0);
			if (Global_1320298[*uParam0 /*5*/][0] < fVar2) {
				Global_1320298[*uParam0 /*5*/][0] = fVar2;
			}
			fVar2 = vehicle::get_vehicle_class_max_acceleration(iVar0);
			if (Global_1320298[*uParam0 /*5*/][1] < fVar2) {
				Global_1320298[*uParam0 /*5*/][1] = fVar2;
			}
			if (iVar0 == 15 || iVar0 == 16 || iVar0 == 14) {
				fVar2 = vehicle::get_vehicle_class_max_agility(iVar0);
			}
			else {
				fVar2 = vehicle::get_vehicle_class_max_traction(iVar0);
			}
			if (Global_1320298[*uParam0 /*5*/][3] < fVar2) {
				Global_1320298[*uParam0 /*5*/][3] = fVar2;
			}
			fVar2 = vehicle::get_vehicle_class_max_braking(iVar0);
			if (Global_1320298[*uParam0 /*5*/][2] < fVar2) {
				Global_1320298[*uParam0 /*5*/][2] = fVar2;
			}
			uParam0->f_1++;
		}
	}
}

// Position - 0x727
float func_18(int iParam0) {
	if (iParam0 == 7) {
		return 51.77096f;
	}
	return vehicle::_0x00C09F246ABEDD82(iParam0);
}

// Position - 0x743
int func_19(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0:
		switch (iParam1) {
		case 0: return 0;

		case 1: return 1;

		case 2: return 2;

		case 3: return 3;

		case 4: return 4;

		case 5: return 5;

		case 6: return 6;

		case 7: return 7;

		case 8: return 8;

		case 9: return 9;

		case 10: return 10;

		case 11: return 11;

		case 12: return 12;

		case 13: return 13;

		case 14: return 17;

		case 15: return 18;

		case 16: return 19;

		case 17: return 20;

		default:
		}
		break;

	case 3:
		switch (iParam1) {
		case 0: return 14;

		default:
		}
		break;

	case 1:
		switch (iParam1) {
		case 0: return 15;

		default:
		}
		break;

	case 2:
		switch (iParam1) {
		case 0: return 16;

		default:
		}
		break;
	}
	return -1;
}

// Position - 0x872
void func_20() {
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (ui::does_blip_exist(Global_68531.f_583)) {
		bVar0 = false;
		if (iLocal_672 != Global_68531.f_582) {
			bVar0 = true;
		}
		else if (func_27(0) || func_27(3) || func_27(2) || func_27(4) || func_27(13) || func_27(14)) {
			bVar0 = true;
		}
		else if (Global_68531.f_590) {
			if (!func_26(Global_68531.f_584, ui::get_blip_coords(Global_68531.f_583), 1056964608, 0) ||
				func_22(Global_68531.f_582, func_23(Global_68531.f_582, 1)) > 0) {
				bVar0 = true;
			}
		}
		else if (Global_68531.f_591) {
			if (!func_26(Global_68531.f_587, ui::get_blip_coords(Global_68531.f_583), 1056964608, 0) ||
				func_22(Global_68531.f_582, func_23(Global_68531.f_582, 1)) > 0) {
				bVar0 = true;
			}
		}
		else if (!entity::does_entity_exist(Global_68531.f_581) ||
				 !vehicle::is_vehicle_driveable(Global_68531.f_581, 0) ||
				 !ped::is_ped_injured(player::player_ped_id()) &&
					 ped::is_ped_in_vehicle(player::player_ped_id(), Global_68531.f_581, 0)) {
			if (entity::does_entity_exist(Global_68531.f_581) &&
				!vehicle::is_vehicle_driveable(Global_68531.f_581, 0)) {
				Global_68531.f_587 = {0f, 0f, 0f};
			}
			bVar0 = true;
		}
		else if (entity::does_entity_exist(Global_68531.f_581)) {
			if (vehicle::is_vehicle_driveable(Global_68531.f_581, 0)) {
				Global_68531.f_587 = {entity::get_entity_coords(Global_68531.f_581, 1)};
			}
			else {
				Global_68531.f_587 = {0f, 0f, 0f};
			}
		}
		if (bVar0) {
			ui::remove_blip(&Global_68531.f_583);
			Global_68531.f_590 = 0;
			Global_68531.f_591 = 0;
			Global_68531.f_581 = 0;
		}
	}
	else {
		Global_68531.f_590 = 0;
		Global_68531.f_591 = 0;
		Global_68531.f_581 = 0;
	}
	if (!ui::does_blip_exist(Global_68531.f_583) && !func_27(0) && !func_27(3) && !func_27(2) && !func_27(4) &&
		!func_27(13) && !func_27(14)) {
		iVar1 = 0;
		iVar2 = 0;
		while (iVar2 < 9) {
			if (Global_89165[iVar2] != 145 && Global_89175[iVar2] != 0 &&
				entity::does_entity_exist(Global_89155[iVar2]) &&
				vehicle::is_vehicle_driveable(Global_89155[iVar2], 0) &&
				!ui::does_blip_exist(ui::get_blip_from_entity(Global_89155[iVar2])) &&
				Global_89165[iVar2] == iLocal_672 &&
				vehicle::is_this_model_a_car(entity::get_entity_model(Global_89155[iVar2]))) {
				if (!ped::is_ped_injured(player::player_ped_id()) &&
					!ped::is_ped_in_vehicle(player::player_ped_id(), Global_89155[iVar2], 0)) {
					Global_68531.f_581 = Global_89155[iVar2];
					Global_68531.f_582 = iLocal_672;
					Global_68531.f_590 = 0;
					Global_68531.f_583 = ui::add_blip_for_entity(Global_68531.f_581);
				}
				iVar2 = 10;
				iVar1 = 1;
			}
			iVar2++;
		}
		if (!iVar1) {
			if (!ui::does_blip_exist(Global_68531.f_583) && !func_21(Global_68531.f_584, 0f, 0f, 0f, 0)) {
				Global_68531.f_581 = 0;
				Global_68531.f_582 = iLocal_672;
				Global_68531.f_590 = 1;
				Global_68531.f_583 = ui::add_blip_for_coord(Global_68531.f_584);
			}
			if (!ui::does_blip_exist(Global_68531.f_583) && !func_21(Global_68531.f_587, 0f, 0f, 0f, 0)) {
				Global_68531.f_581 = 0;
				Global_68531.f_582 = iLocal_672;
				Global_68531.f_591 = 1;
				Global_68531.f_583 = ui::add_blip_for_coord(Global_68531.f_587);
			}
		}
		else {
			Global_68531.f_590 = 0;
			Global_68531.f_591 = 0;
		}
		if (ui::does_blip_exist(Global_68531.f_583)) {
			ui::set_blip_sprite(Global_68531.f_583, 225);
			ui::set_blip_name_from_text_file(Global_68531.f_583, "PVEHICLE");
			ui::set_blip_as_short_range(Global_68531.f_583, 0);
			ui::set_blip_priority(Global_68531.f_583, 3);
			if (iLocal_672 == 0) {
				iVar3 = 42;
			}
			else if (iLocal_672 == 1) {
				iVar3 = 43;
			}
			else if (iLocal_672 == 2) {
				iVar3 = 44;
			}
			ui::set_blip_colour(Global_68531.f_583, iVar3);
		}
	}
}

// Position - 0xCFB
bool func_21(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0xD42
int func_22(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 9) {
		if (entity::does_entity_exist(Global_89155[iVar1]) && vehicle::is_vehicle_driveable(Global_89155[iVar1], 0)) {
			if (Global_89165[iVar1] == iParam0) {
				if (iParam1 == 0 || iParam1 == entity::get_entity_model(Global_89155[iVar1])) {
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

// Position - 0xDB2
int func_23(int iParam0, int iParam1) {
	struct<82> Var0;

	if (func_25(iParam0)) {
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_24(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0xDF4
void func_24(int iParam0, var *uParam1, int iParam2) {
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

// Position - 0x104B
bool func_25(int iParam0) { return iParam0 < 3; }

// Position - 0x1057
int func_26(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7) {
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

// Position - 0x10D2
bool func_27(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x10E0
void func_28() {
	func_241();
	func_182();
	func_67();
	func_29();
}

// Position - 0x10F8
void func_29() {
	int iVar0;
	int iVar1;

	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (Local_402.f_29.f_80 && !Local_402.f_29.f_69 && Local_402 != -1 && func_66(Local_402, 0) &&
			func_66(Local_402, 5) &&
			script::_get_number_of_instances_of_script_with_name_hash(joaat("michael1")) == 0) {
			if (!entity::does_entity_exist(Local_402.f_113)) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
					iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
					if (entity::does_entity_exist(iVar0) && vehicle::is_vehicle_driveable(iVar0, 0)) {
						iVar1 = entity::get_entity_model(iVar0);
						if (func_63(iVar1)) {
							Local_402.f_113 = iVar0;
						}
					}
				}
			}
			else if (vehicle::is_vehicle_driveable(Local_402.f_113, 0) &&
					 func_63(entity::get_entity_model(Local_402.f_113))) {
				if (!ped::is_ped_in_vehicle(player::player_ped_id(), Local_402.f_113, 0)) {
					if (entity::is_entity_in_angled_area(Local_402.f_113, Local_402.f_29.f_48, Local_402.f_29.f_51,
														 Local_402.f_29.f_54, 0, 1, 0)) {
						if (!func_62(Local_402.f_113) && !func_61(Local_402.f_113) &&
							Local_402.f_113 != Global_68531.f_484[Local_402]) {
							func_30(Local_402, Local_402.f_113, 1);
						}
						Local_402.f_113 = 0;
					}
				}
			}
			else {
				Local_402.f_113 = 0;
			}
		}
		else {
			Local_402.f_113 = 0;
		}
	}
}

// Position - 0x125C
void func_30(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam0 == -1) {
		return;
	}
	if (!func_60(&Global_68531.f_555[0 /*21*/], iParam0)) {
		return;
	}
	if (!gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 12) &&
		!gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 10)) {
		if (Global_68531.f_555[0 /*21*/].f_4 != entity::get_entity_model(iParam1)) {
			return;
		}
	}
	if (Global_69438 != -1 && Global_69438 != iParam0) {
		return;
	}
	if (entity::does_entity_exist(iParam1)) {
		if (vehicle::is_vehicle_driveable(iParam1, 0)) {
			if (!entity::is_entity_a_mission_entity(iParam1)) {
				entity::set_entity_as_mission_entity(iParam1, 1, 1);
			}
			if (iParam0 == 24) {
				Global_101700.f_31389.f_4801 = func_49();
			}
			if (iParam1 != Global_68531.f_139[iParam0]) {
				if (iParam0 == 24) {
					iVar0 = func_48(iParam0);
					if (entity::does_entity_exist(iVar0) && vehicle::is_vehicle_driveable(iVar0, 0) &&
						iParam1 != iVar0) {
						func_31(iVar0, 145);
					}
				}
				Global_69437 = iParam1;
				Global_69438 = iParam0;
				Global_69439 = iParam2;
			}
		}
	}
}

// Position - 0x1379
void func_31(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_36(iParam0)) {
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
	func_32(iParam0, &Global_101700.f_31389.f_5510);
}

// Position - 0x157B
void func_32(int iParam0, var *uParam1) {
	int iVar0;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		func_35(uParam1);
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
		func_34(&iParam0, &uParam1->f_9, &uParam1->f_59);
		iVar0 = 0;
		while (iVar0 <= 11) {
			if (vehicle::is_vehicle_extra_turned_on(iParam0, iVar0 + 1)) {
				gameplay::set_bit(&uParam1->f_77, func_33(iVar0 + 1));
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

// Position - 0x1825
int func_33(int iParam0) {
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

// Position - 0x18D5
int func_34(int iParam0, var *uParam1, var *uParam2) {
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

// Position - 0x19AF
void func_35(var *uParam0) {
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

// Position - 0x1A5F
bool func_36(int iParam0) {
	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0) || func_46(iParam0, 0, 0) ||
		func_46(iParam0, 1, 0) || func_46(iParam0, 2, 0) || func_45(iParam0) != 145 || func_44(iParam0) ||
		func_62(iParam0) || func_61(iParam0) || func_43(iParam0) || !func_37(entity::get_entity_model(iParam0))) {
		if (func_62(iParam0)) {
		}
		if (func_62(iParam0)) {
		}
		if (func_46(iParam0, 0, 0)) {
		}
		if (func_46(iParam0, 1, 0)) {
		}
		if (func_46(iParam0, 2, 0)) {
		}
		if (func_45(iParam0) != 145) {
		}
		return false;
	}
	return true;
}

// Position - 0x1B3C
int func_37(int iParam0) {
	if (iParam0 == 0) {
		return 0;
	}
	if (!func_38(iParam0, 0)) {
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

// Position - 0x1CED
int func_38(int iParam0, int iParam1) {
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
		if (!func_42()) {
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
		if (!func_403() && !func_402() && !func_401() && !func_400() && !func_42()) {
			return 0;
		}
	}
	if (iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs") || iParam0 == joaat("khamelion")) {
		if (gameplay::is_durango_version() || gameplay::is_pc_version() || gameplay::is_orbis_version()) {
		}
		else if (!func_401()) {
			return 0;
		}
	}
	if (iParam1) {
		if (!func_41(iParam0)) {
			return 0;
		}
	}
	if (!func_39(iParam0)) {
		return 0;
	}
	return 1;
}

// Position - 0x1E7B
int func_39(int iParam0) {
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_40()) {
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

// Position - 0x1F3F
int func_40() {
	if (gameplay::is_pc_version()) {
		return 1;
	}
	return 0;
}

// Position - 0x1F53
int func_41(int iParam0) {
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

// Position - 0x2C96
bool func_42() {
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

// Position - 0x2D51
int func_43(int iParam0) {
	int iVar0;
	char *sVar1;

	iVar0 = entity::get_entity_model(iParam0);
	sVar1 = vehicle::get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && gameplay::are_strings_equal(sVar1, "LAMAR G ")) {
		return 1;
	}
	if (!func_38(iVar0, 0)) {
		return 1;
	}
	return 0;
}

// Position - 0x2D97
int func_44(int iParam0) {
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

// Position - 0x2E7F
int func_45(int iParam0) {
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

// Position - 0x2EE2
bool func_46(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	char *sVar1;
	int iVar9;

	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0)) {
		return false;
	}
	iVar0 = 0;
	while (func_47(iParam1, iVar0, &sVar1, &iVar9)) {
		if (!iParam2 || gameplay::is_bit_set(Global_101700.f_6188[iVar9], 0)) {
			if (vehicle::is_vehicle_in_garage_area(&sVar1, iParam0)) {
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0x2F53
bool func_47(int iParam0, int iParam1, char *sParam2, int *iParam3) {
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

// Position - 0x302B
int func_48(int iParam0) {
	if (iParam0 == -1) {
		return 0;
	}
	return Global_68531.f_139[iParam0];
}

// Position - 0x3047
int func_49() {
	int *iVar0;

	func_59(&iVar0, time::get_clock_seconds());
	func_58(&iVar0, time::get_clock_minutes());
	func_57(&iVar0, time::get_clock_hours());
	func_52(&iVar0, time::get_clock_day_of_month());
	func_51(&iVar0, time::get_clock_month());
	func_50(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0x308D
void func_50(int *iParam0, int iParam1) {
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

// Position - 0x3113
void func_51(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*uParam0 -= (*uParam0 & 15);
	*uParam0 |= iParam1;
}

// Position - 0x3146
void func_52(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_56(*uParam0);
	iVar1 = func_54(*uParam0);
	if (iParam1 < 1 || iParam1 > func_53(iVar0, iVar1)) {
		return;
	}
	*uParam0 -= (*uParam0 & 496);
	*uParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0x3197
int func_53(int iParam0, int iParam1) {
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

// Position - 0x3239
var func_54(int iParam0) {
	return (system::shift_right(iParam0, 26) & 31) * func_55(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x325E
int func_55(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x3275
int func_56(int iParam0) { return iParam0 & 15; }

// Position - 0x3282
void func_57(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*uParam0 -= (*uParam0 & 15872);
	*uParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0x32BC
void func_58(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 1032192);
	*uParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0x32F7
void func_59(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 66060288);
	*uParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0x3333
bool func_60(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	*uParam0 = {0f, 0f, 0f};
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&uParam0->f_5, "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = {0f, 0f, 0f};
	uParam0->f_18 = {0f, 0f, 0f};
	switch (iParam1) {
	case 0:
		*uParam0 = {-831.8538f, 172.1154f, 69.9058f};
		uParam0->f_3 = 157.5705f;
		uParam0->f_4 = func_23(0, 1);
		uParam0->f_12 = 0;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 1:
		*uParam0 = {1970.943f, 3801.684f, 31.1396f};
		uParam0->f_3 = 301.3964f;
		uParam0->f_4 = func_23(0, 1);
		uParam0->f_12 = 0;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 2:
		*uParam0 = {-22.6297f, -1439.137f, 29.6549f};
		uParam0->f_3 = 180.0808f;
		uParam0->f_4 = func_23(1, 1);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 3:
		*uParam0 = {-22.5229f, -1434.699f, 29.6552f};
		uParam0->f_3 = 141.6114f;
		uParam0->f_4 = func_23(1, 2);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 19);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 4:
		*uParam0 = {10.9281f, 545.669f, 174.7951f};
		uParam0->f_3 = 61.392f;
		uParam0->f_4 = func_23(1, 1);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 5:
		*uParam0 = {6.1093f, 544.9742f, 174.2835f};
		uParam0->f_3 = 92.1548f;
		uParam0->f_4 = func_23(1, 2);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 19);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 6:
		*uParam0 = {1981.416f, 3808.131f, 31.1384f};
		uParam0->f_3 = 117.2557f;
		uParam0->f_4 = func_23(2, 1);
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 7:
		*uParam0 = {-1158.488f, -1529.367f, 3.8995f};
		uParam0->f_3 = 35.7505f;
		uParam0->f_4 = func_23(2, 1);
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 8:
		*uParam0 = {148.2868f, -1270.569f, 28.2252f};
		uParam0->f_3 = 208.4685f;
		uParam0->f_4 = func_23(2, 1);
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 9:
		*uParam0 = {1459.509f, -1380.45f, 78.3259f};
		uParam0->f_3 = 99.6211f;
		uParam0->f_4 = joaat("scorcher");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 10:
		*uParam0 = {-1518.947f, -1387.865f, -0.5134f};
		uParam0->f_3 = 98.3867f;
		uParam0->f_4 = joaat("seashark");
		iVar0 = 1;
		gameplay::set_bit(&uParam0->f_9, 6);
		break;

	case 11:
		*uParam0 = {353.0926f, 3577.593f, 32.351f};
		uParam0->f_3 = 16.6205f;
		uParam0->f_4 = joaat("duster");
		iVar0 = 1;
		gameplay::set_bit(&uParam0->f_9, 6);
		break;

	case 12:
		uParam0->f_14 = 0;
		*uParam0 = {-1652.004f, -3142.348f, 12.9921f};
		uParam0->f_3 = 329.1082f;
		uParam0->f_12 = 0;
		uParam0->f_13 = 359;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 13:
		uParam0->f_14 = 1;
		*uParam0 = {-1271.649f, -3380.685f, 12.9451f};
		uParam0->f_3 = 329.5137f;
		uParam0->f_12 = 1;
		uParam0->f_13 = 359;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 14:
		uParam0->f_14 = 2;
		*uParam0 = {1735.586f, 3294.531f, 40.1651f};
		uParam0->f_3 = 194.9525f;
		uParam0->f_12 = 2;
		uParam0->f_13 = 359;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 15:
		uParam0->f_14 = 3;
		*uParam0 = {-846.27f, -1363.19f, 0.22f};
		uParam0->f_3 = 108.78f;
		uParam0->f_12 = 0;
		uParam0->f_13 = 356;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 16:
		uParam0->f_14 = 4;
		*uParam0 = {-849.47f, -1354.99f, 0.24f};
		uParam0->f_3 = 109.84f;
		uParam0->f_12 = 1;
		uParam0->f_13 = 356;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 17:
		uParam0->f_14 = 5;
		*uParam0 = {-852.47f, -1346.2f, 0.21f};
		uParam0->f_3 = 108.76f;
		uParam0->f_12 = 2;
		uParam0->f_13 = 356;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 18:
		uParam0->f_14 = 6;
		*uParam0 = {-745.857f, -1433.904f, 4.0005f};
		uParam0->f_12 = 0;
		uParam0->f_13 = 360;
		uParam0->f_15 = {-756.2952f, -1441.609f, 2.9184f};
		uParam0->f_18 = {-738.0606f, -1423.068f, 8.2835f};
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 19:
		uParam0->f_14 = 7;
		*uParam0 = {-761.8486f, -1453.829f, 4.0005f};
		uParam0->f_12 = 1;
		uParam0->f_13 = 360;
		uParam0->f_15 = {-772.8158f, -1459.957f, 3.2894f};
		uParam0->f_18 = {-754.3353f, -1440.836f, 8.3334f};
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 20:
		uParam0->f_14 = 8;
		*uParam0 = {1769.3f, 3244f, 41.1f};
		uParam0->f_12 = 2;
		uParam0->f_13 = 360;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 21:
		uParam0->f_14 = 9;
		*uParam0 = {192.7897f, -1020.539f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0;
		uParam0->f_13 = 357;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 28);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 22:
		uParam0->f_14 = 10;
		*uParam0 = {192.7897f, -1020.539f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 1;
		uParam0->f_13 = 357;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 28);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 23:
		uParam0->f_14 = 11;
		*uParam0 = {192.7897f, -1020.539f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 2;
		uParam0->f_13 = 357;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 28);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 26:
	case 27:
	case 28:
		iVar1 = iParam1 - 26;
		uParam0->f_14 = 12 + iVar1;
		*uParam0 = {196.2794f, -1020.479f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0 + iVar1;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 27);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 29:
	case 30:
	case 31:
		iVar1 = iParam1 - 29;
		uParam0->f_14 = 15 + iVar1;
		*uParam0 = {199.8872f, -1020.048f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0 + iVar1;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 27);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 32:
	case 33:
	case 34:
		iVar1 = iParam1 - 32;
		uParam0->f_14 = 18 + iVar1;
		*uParam0 = {203.6006f, -1019.776f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0 + iVar1;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 27);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 24:
		uParam0->f_14 = 21;
		*uParam0 = {0f, 0f, 0f};
		uParam0->f_3 = 0f;
		uParam0->f_4 = 0;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 11);
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 12);
		iVar0 = 1;
		break;

	case 25:
		uParam0->f_14 = 22;
		*uParam0 = {723.2515f, -632.0496f, 27.1484f};
		uParam0->f_3 = 12.9316f;
		uParam0->f_4 = joaat("tailgater");
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 11);
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 12);
		iVar0 = 1;
		break;

	case 35:
		*uParam0 = {-51.23f, 3111.9f, 24.95f};
		uParam0->f_3 = 46.78f;
		uParam0->f_4 = joaat("proptrailer");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 36:
		*uParam0 = {-55.7984f, -1096.586f, 25.4223f};
		uParam0->f_3 = 308.0596f;
		uParam0->f_4 = joaat("bjxl");
		uParam0->f_10 = 126;
		uParam0->f_11 = 126;
		gameplay::set_bit(&uParam0->f_9, 9);
		gameplay::set_bit(&uParam0->f_9, 13);
		iVar0 = 1;
		break;

	case 37:
		*uParam0 = {-2892.93f, 3192.37f, 11.66f};
		uParam0->f_3 = -132.35f;
		uParam0->f_4 = joaat("velum");
		uParam0->f_10 = 157;
		uParam0->f_11 = 157;
		gameplay::set_bit(&uParam0->f_9, 9);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 13);
		iVar0 = 1;
		break;

	case 38:
		*uParam0 = {1744.308f, 3270.673f, 40.2076f};
		uParam0->f_3 = 125f;
		uParam0->f_4 = joaat("cargobob3");
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 39:
		*uParam0 = {1751.44f, 3322.643f, 42.1855f};
		uParam0->f_3 = 268.134f;
		uParam0->f_4 = joaat("submersible");
		gameplay::set_bit(&uParam0->f_9, 23);
		iVar0 = 1;
		break;

	case 41:
		*uParam0 = {1377.104f, -2076.2f, 52f};
		uParam0->f_3 = 37.5f;
		uParam0->f_4 = joaat("towtruck");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 40:
		*uParam0 = {1380.42f, -2072.77f, 51.7607f};
		uParam0->f_3 = 37.5f;
		uParam0->f_4 = joaat("trash");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 42:
		*uParam0 = {1359.389f, 3618.441f, 33.8907f};
		uParam0->f_3 = 108.2337f;
		uParam0->f_4 = joaat("barracks");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 43:
		*uParam0 = {693.1154f, -1018.155f, 21.6387f};
		uParam0->f_3 = 177.6454f;
		uParam0->f_4 = joaat("firetruk");
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 44:
		*uParam0 = {-73.6963f, 495.124f, 143.5226f};
		uParam0->f_3 = 155.5994f;
		uParam0->f_4 = joaat("vacca");
		iVar0 = 1;
		break;

	case 45:
		*uParam0 = {-67.6314f, 891.8266f, 234.5348f};
		uParam0->f_3 = 294.993f;
		uParam0->f_4 = joaat("surano");
		iVar0 = 1;
		break;

	case 46:
		*uParam0 = {533.9048f, -169.2469f, 53.7005f};
		uParam0->f_3 = 1.2998f;
		uParam0->f_4 = joaat("tornado2");
		iVar0 = 1;
		break;

	case 47:
		*uParam0 = {-726.8914f, -408.6952f, 34.0416f};
		uParam0->f_3 = 267.7392f;
		uParam0->f_4 = joaat("superd");
		iVar0 = 1;
		break;

	case 48:
		*uParam0 = {-1321.519f, 261.3993f, 61.5709f};
		uParam0->f_3 = 350.7697f;
		uParam0->f_4 = joaat("double");
		iVar0 = 1;
		break;

	case 49:
		*uParam0 = {-1267.999f, 451.6463f, 93.7071f};
		uParam0->f_3 = 48.9311f;
		uParam0->f_4 = joaat("double");
		iVar0 = 1;
		break;

	case 50:
		*uParam0 = {-1062.076f, -226.7637f, 37.157f};
		uParam0->f_3 = 234.2767f;
		uParam0->f_4 = joaat("double");
		iVar0 = 1;
		break;

	case 51:
		*uParam0 = {68.16914f, -1558.958f, 29.46904f};
		uParam0->f_3 = 49.90575f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 52:
		*uParam0 = {589.4399f, 2736.708f, 42.03316f};
		uParam0->f_3 = -175.7105f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 53:
		*uParam0 = {-488.774f, -344.5721f, 34.36356f};
		uParam0->f_3 = 82.4042f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 54:
		*uParam0 = {288.8808f, -585.4728f, 43.15428f};
		uParam0->f_3 = -20.80707f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 55:
		*uParam0 = {304.8294f, -1383.674f, 31.67744f};
		uParam0->f_3 = -41.11603f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 56:
		*uParam0 = {1126.194f, -1481.486f, 34.7016f};
		uParam0->f_3 = -91.43369f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 57:
		*uParam0 = {-1598.36f, 5252.84f, 0f};
		uParam0->f_3 = 28.14f;
		uParam0->f_4 = joaat("submersible");
		uParam0->f_13 = 308;
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 30);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 58:
		*uParam0 = {-1602.62f, 5260.37f, 0.86f};
		uParam0->f_3 = 25.32f;
		uParam0->f_4 = joaat("dinghy");
		uParam0->f_13 = 404;
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 59:
		*uParam0 = {2116.571f, 4763.279f, 40.1596f};
		uParam0->f_3 = 198.723f;
		uParam0->f_4 = joaat("bfinjection");
		iVar0 = 1;
		break;

	case 60:
		*uParam0 = {1133.21f, 120.2f, 80.9f};
		uParam0->f_3 = 134.4f;
		if (func_42()) {
			uParam0->f_4 = joaat("blimp2");
		}
		else {
			uParam0->f_4 = joaat("blimp");
		}
		uParam0->f_13 = 401;
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 1);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 21);
		iVar0 = 1;
		break;

	case 61:
		*uParam0 = {-806.31f, -2679.65f, 13.9f};
		uParam0->f_3 = 150.54f;
		if (func_42()) {
			uParam0->f_4 = joaat("blimp2");
		}
		else {
			uParam0->f_4 = joaat("blimp");
		}
		uParam0->f_13 = 401;
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 1);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 21);
		iVar0 = 1;
		break;

	case 62:
		*uParam0 = {1985.85f, 3828.96f, 31.98f};
		uParam0->f_3 = -16.58f;
		uParam0->f_4 = joaat("blazer3");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 63:
		*uParam0 = {3870.75f, 4464.67f, 0f};
		uParam0->f_3 = 0f;
		uParam0->f_4 = joaat("submersible2");
		uParam0->f_13 = 308;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 6);
		gameplay::set_bit(&uParam0->f_9, 30);
		iVar0 = 1;
		break;

	case 64:
		*uParam0 = {1257.729f, -2564.474f, 41.717f};
		uParam0->f_3 = 284.5561f;
		uParam0->f_4 = joaat("dukes2");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 65:
		*uParam0 = {643.2823f, 3014.152f, 42.2733f};
		uParam0->f_3 = 128.0554f;
		uParam0->f_4 = joaat("dukes2");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 66:
		*uParam0 = {38.9368f, 850.8677f, 196.3f};
		uParam0->f_3 = 311.6813f;
		uParam0->f_4 = joaat("dodo");
		gameplay::set_bit(&uParam0->f_9, 30);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 67:
		*uParam0 = {1333.875f, 4262.226f, 30.78f};
		uParam0->f_3 = 262.5293f;
		uParam0->f_4 = joaat("dodo");
		gameplay::set_bit(&uParam0->f_9, 30);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;
	}
	if (gameplay::is_bit_set(uParam0->f_9, 10)) {
		uParam0->f_4 = Global_101700.f_31389.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14) {
			if (uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra") || uParam0->f_4 == joaat("luxor") ||
				uParam0->f_4 == joaat("shamal") || uParam0->f_4 == joaat("titan") || uParam0->f_4 == joaat("luxor2")) {
				*uParam0 = {1678.8f, 3229.6f, 41.8f};
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_21(Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/]};
		}
		if (Global_101700.f_31389.f_1934[uParam0->f_14] != -1f) {
			uParam0->f_3 = Global_101700.f_31389.f_1934[uParam0->f_14];
		}
	}
	if (gameplay::is_bit_set(uParam0->f_9, 19)) {
		if (!func_21(Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/]};
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (gameplay::is_bit_set(uParam0->f_9, 20)) {
		if (!func_21(Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/]};
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

// Position - 0x4A2B
int func_61(int iParam0) {
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

// Position - 0x4A66
bool func_62(int iParam0) {
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

// Position - 0x4AE2
bool func_63(int iParam0) {
	switch (Local_402.f_6) {
	case 0: return func_65(iParam0);

	case 1:
		if (vehicle::is_this_model_a_boat(iParam0) || vehicle::_is_this_model_an_emergency_boat(iParam0) ||
			iParam0 == joaat("submersible2") || iParam0 == joaat("dodo")) {
			return true;
		}
		break;

	case 3: return func_64(iParam0);

	case 2: return vehicle::is_this_model_a_heli(iParam0) && iParam0 != joaat("skylift");
	}
	return false;
}

// Position - 0x4B76
bool func_64(int iParam0) {
	if (iParam0 == joaat("marshall") || iParam0 == joaat("barracks") || iParam0 == joaat("crusader")) {
		return false;
	}
	if (iParam0 == joaat("rhino")) {
		return false;
	}
	if (!vehicle::is_this_model_a_car(iParam0) && !vehicle::is_this_model_a_bike(iParam0) &&
		!vehicle::is_this_model_a_bicycle(iParam0) && !vehicle::is_this_model_a_quadbike(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x4BEA
bool func_65(int iParam0) {
	if (iParam0 == joaat("jet")) {
		return false;
	}
	if (!vehicle::is_this_model_a_plane(iParam0) && iParam0 != joaat("marshall") && iParam0 != joaat("rhino") &&
		iParam0 != joaat("barracks") && iParam0 != joaat("crusader")) {
		return false;
	}
	return true;
}

// Position - 0x4C43
bool func_66(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return false;
	}
	return gameplay::is_bit_set(Global_101700.f_31389[iParam0], iParam1);
}

// Position - 0x4C66
void func_67() {
	struct<100> Var0;
	struct<78> Var101;
	int iVar179;
	int iVar180;
	int iVar181;
	int iVar182;
	int iVar183;
	int iVar184;
	struct<4> Var185;
	int iVar189;
	int iVar190;
	int iVar191;
	int iVar192;
	int iVar193;
	int iVar194;
	int iVar195;
	bool bVar196;
	int iVar197;
	bool bVar198;
	int iVar199;
	int iVar200;
	int iVar201;
	int iVar202;
	int iVar203;
	struct<2> Var204;
	int iVar208;
	bool bVar209;
	int iVar210;
	bool bVar211;
	var uVar212;

	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_95 = -1;
	Var0.f_96 = 1;
	Var0.f_98 = 132;
	Var0.f_99 = -1;
	Var101.f_9 = 49;
	Var101.f_59 = 2;
	iVar179 = 0;
	iVar180 = 0;
	if (iLocal_654 > 0 && iLocal_654 != 99) {
		if (Local_402 == -1 || ped::is_ped_injured(player::player_ped_id()) ||
			player::is_player_being_arrested(player::player_id(), 1) ||
			!entity::is_entity_in_angled_area(player::player_ped_id(), Local_402.f_29.f_7, Local_402.f_29.f_10,
											  Local_402.f_29.f_13, 0, 1, 0) ||
			entity::does_entity_exist(Global_68531.f_484[Local_402]) &&
				vehicle::is_vehicle_driveable(Global_68531.f_484[Local_402], 0) &&
				(ped::is_ped_on_specific_vehicle(player::player_ped_id(), Global_68531.f_484[Local_402]) ||
				 ped::is_ped_in_vehicle(player::player_ped_id(), Global_68531.f_484[Local_402], 1)) ||
			entity::does_entity_exist(Global_68531.f_484[Local_402]) &&
				entity::does_entity_exist(player::player_ped_id()) &&
				entity::get_entity_height_above_ground(player::player_ped_id()) - 1f > 0.15f &&
				entity::is_entity_touching_entity(player::player_ped_id(), Global_68531.f_484[Local_402]) ||
			entity::does_entity_exist(Global_68531.f_484[Local_402]) &&
				entity::does_entity_exist(player::player_ped_id()) &&
				ped::is_ped_in_vehicle(player::player_ped_id(), Global_68531.f_484[Local_402], 1) ||
			entity::does_entity_exist(player::player_ped_id()) &&
				ped::is_ped_getting_into_a_vehicle(player::player_ped_id()) ||
			func_27(0) || func_27(3) || func_27(2) || func_27(4) || func_27(14) || func_181(0) != iLocal_1018 ||
			iLocal_854 || func_180(-1082130432)) {
			iLocal_654 = 99;
		}
	}
	switch (iLocal_654) {
	case 0:
		if (!ped::is_ped_injured(player::player_ped_id()) && player::is_player_control_on(player::player_id()) &&
			!Global_68131 && !iLocal_854 && !cam::is_screen_faded_out()) {
			if (Local_402.f_29.f_80 && Local_402.f_2 == 0 && (Global_68531.f_592[0] != -1 || func_179() != 0) &&
				Local_402 != -1 && !iLocal_1016 && !func_27(0) && !func_27(3) && !func_27(2) && !func_27(4) &&
				!func_27(14) && !func_180(-1082130432)) {
				if (iLocal_656 != -1) {
				}
				else if (func_66(Local_402, 0) && func_66(Local_402, 5)) {
					if (entity::is_entity_in_angled_area(player::player_ped_id(), Local_402.f_29.f_7,
														 Local_402.f_29.f_10, Local_402.f_29.f_13, 0, 1, 0) &&
						!ped::is_ped_climbing(player::player_ped_id()) &&
						!entity::is_entity_attached(player::player_ped_id())) {
						if (!entity::does_entity_exist(Global_68531.f_484[Local_402]) ||
							!vehicle::is_vehicle_driveable(Global_68531.f_484[Local_402], 0) ||
							!ped::is_ped_on_specific_vehicle(player::player_ped_id(), Global_68531.f_484[Local_402]) &&
								!ped::is_ped_in_vehicle(player::player_ped_id(), Global_68531.f_484[Local_402], 1)) {
							iVar183 = func_179();
							iVar184 = 0;
							while (iVar184 < iVar183) {
								if (func_63(func_175(iVar184))) {
									iVar182++;
								}
								iVar184++;
							}
							iVar181 = 0;
							while (iVar181 < Global_68531.f_592) {
								if (Global_68531.f_592[iVar181] != -1) {
									if (func_174(Global_68531.f_592[iVar181], iLocal_672) &&
										Global_101700.f_31389.f_1982[iLocal_672 /*939*/]
												.f_626[Global_68531.f_592[iVar181]] == -15 &&
										(Global_68531.f_592[iVar181] != 200 || !Global_101700.f_24032.f_7)) {
										iVar182++;
									}
								}
								iVar181++;
							}
							if (iVar182 > 0) {
								if (!ui::is_help_message_being_displayed()) {
									iLocal_856 = 1;
									if (Local_402.f_6 == 3) {
										func_173(&iLocal_655, 3, "WEB_VEH_TRIG2", 0, 0, 0, 0);
									}
									else {
										func_173(&iLocal_655, 3, "WEB_VEH_TRIG", 0, 0, 0, 0);
									}
									iLocal_1018 = func_181(0);
									iLocal_654++;
								}
							}
							else if (!iLocal_856) {
								if (Local_402.f_6 == 0) {
									if (!ui::is_help_message_being_displayed() || func_172("HANGAR_NO")) {
										func_171("HANGAR_NO", -1);
										StringCopy(&cLocal_1019, "HANGAR_NO", 16);
									}
									iVar179 = 1;
								}
								else if (Local_402.f_6 == 1) {
									if (!ui::is_help_message_being_displayed() || func_172("MARINA_NO")) {
										func_171("MARINA_NO", -1);
										StringCopy(&cLocal_1019, "MARINA_NO", 16);
									}
									iVar179 = 1;
								}
								else if (Local_402.f_6 == 2) {
									if (!ui::is_help_message_being_displayed() || func_172("HELIPAD_NO")) {
										func_171("HELIPAD_NO", -1);
										StringCopy(&cLocal_1019, "HELIPAD_NO", 16);
									}
									iVar179 = 1;
								}
								else if (Local_402.f_6 == 3) {
									StringCopy(&Var185, "CAR_GAR_NO", 16);
									if (gameplay::is_ps3_version() || gameplay::is_orbis_version()) {
										StringConCat(&Var185, "_1", 16);
									}
									else if (gameplay::is_xbox360_version() || gameplay::is_durango_version()) {
										StringConCat(&Var185, "_2", 16);
									}
									if (!ui::is_help_message_being_displayed() || func_172(&Var185)) {
										func_171(&Var185, -1);
										cLocal_1019 = {Var185};
									}
									iVar179 = 1;
								}
							}
						}
					}
					else {
						iLocal_856 = 0;
					}
				}
			}
		}
		break;

	case 1:
		if (!ped::is_ped_injured(player::player_ped_id()) && func_169(0, -1, 0)) {
			if (iLocal_656 != -1) {
				iLocal_654 = 0;
				return;
			}
			if (func_168(iLocal_655, 1)) {
				ai::clear_ped_tasks(player::player_ped_id());
				if (cam::_0xEE778F8C7E1142E2(cam::_0x19CAFA3C87F7C2FF()) == 4) {
					player::set_player_control(player::player_id(), 0, 0);
				}
				else {
					player::set_player_control(player::player_id(), 0, 256);
				}
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
					if (vehicle::is_vehicle_driveable(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 0)) {
						audio::set_vehicle_radio_enabled(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 0);
					}
				}
				func_167();
				iLocal_657 = 0;
				iLocal_658 = 0;
				iLocal_659 = 0;
				iLocal_645 = -1;
				iLocal_654++;
				return;
			}
		}
		break;

	case 2:
		if (!iLocal_657 || iLocal_658) {
			func_166(0);
			func_165(1, 4, 0, 0, 0);
			func_164(1, 2, 1, 1, 1);
			func_163("WEB_VEH_TITLE");
			iVar189 = 0;
			while (iVar189 < iLocal_646) {
				iLocal_646[iVar189] = 0;
				iVar189++;
			}
			iVar190 = -1;
			iVar191 = 0;
			func_60(&Local_402.f_8, Local_402);
			iVar193 = 0;
			iVar194 = func_179();
			iVar192 = 0;
			while (iVar192 < iVar194) {
				if (func_63(func_175(iVar192))) {
					if (iVar190 == -1) {
						iVar190 = iVar193;
					}
					if (Local_402.f_8.f_4 == func_175(iVar192)) {
						iLocal_645 = iVar193;
						iVar191 = 1;
					}
					iVar193++;
				}
				iVar192++;
			}
			iVar192 = 0;
			while (iVar192 < Global_68531.f_592) {
				if (Global_68531.f_592[iVar192] != -1) {
					if (func_174(Global_68531.f_592[iVar192], iLocal_672) &&
						Global_101700.f_31389.f_1982[iLocal_672 /*939*/].f_626[Global_68531.f_592[iVar192]] == -15 &&
						(Global_68531.f_592[iVar192] != 200 || !Global_101700.f_24032.f_7)) {
						func_134(Global_68531.f_592[iVar192], &Var0, 0, iLocal_672, -1);
						if (iVar190 == -1) {
							iVar190 = iVar193;
						}
						if (Local_402.f_8.f_4 == Var0.f_66) {
							iLocal_645 = iVar193;
							iVar191 = 1;
						}
						iVar193++;
					}
				}
				iVar192++;
			}
			if (iLocal_645 == -1) {
				iLocal_645 = iVar190;
			}
			iVar193 = 0;
			iVar194 = func_179();
			iVar192 = 0;
			while (iVar192 < iVar194) {
				if (func_63(func_175(iVar192))) {
					gameplay::set_bit(&iLocal_646[iVar193 / 32], iVar193 % 32);
					func_130(iVar193, vehicle::get_display_name_from_vehicle_model(func_175(iVar192)), 0, 1, 0, 0);
					if (iLocal_645 == iVar193 && iVar191 && Local_402.f_6 != 3) {
						func_129(iVar193, 4, 0);
					}
					else {
						func_129(iVar193, 0, 0);
					}
					iVar193++;
				}
				iVar192++;
			}
			iVar192 = 0;
			while (iVar192 < Global_68531.f_592) {
				if (Global_68531.f_592[iVar192] != -1) {
					if (func_174(Global_68531.f_592[iVar192], iLocal_672) &&
						Global_101700.f_31389.f_1982[iLocal_672 /*939*/].f_626[Global_68531.f_592[iVar192]] == -15 &&
						(Global_68531.f_592[iVar192] != 200 || !Global_101700.f_24032.f_7)) {
						gameplay::set_bit(&iLocal_646[iVar193 / 32], iVar193 % 32);
						func_134(Global_68531.f_592[iVar192], &Var0, 0, iLocal_672, -1);
						if (Global_68531.f_592[iVar192] != 164) {
							func_130(iVar193, func_127(Global_68531.f_592[iVar192]), 0, 1, 0, 0);
						}
						else if (Var0.f_67 == 0) {
							func_130(iVar193, "TWOSTRINGS", 2, 1, 0, 0);
							func_124(func_127(Global_68531.f_592[iVar192]), 0);
							func_124("VNX_SWFTC", 0);
						}
						else if (Var0.f_67 == 1) {
							func_130(iVar193, "TWOSTRINGS", 2, 1, 0, 0);
							func_124(func_127(Global_68531.f_592[iVar192]), 0);
							func_124("VNX_SWFTB", 0);
						}
						else {
							func_130(iVar193, func_127(Global_68531.f_592[iVar192]), 0, 1, 0, 0);
						}
						if (iLocal_645 == iVar193 && iVar191) {
							func_129(iVar193, 4, 0);
						}
						else {
							func_129(iVar193, 0, 0);
						}
						iVar193++;
					}
				}
				iVar192++;
			}
			func_123(iLocal_645, 1, 1);
			iLocal_660 = 1;
			iLocal_658 = 0;
			iLocal_657 = 1;
		}
		else {
			iVar180 = 0;
			if (gameplay::is_pc_version()) {
				if (controls::_is_input_just_disabled(2)) {
					controls::disable_control_action(0, 1, 1);
					controls::disable_control_action(0, 2, 1);
					controls::disable_control_action(2, 200, 1);
					controls::enable_control_action(0, 237, 1);
					controls::enable_control_action(0, 238, 1);
					controls::enable_control_action(0, 241, 1);
					controls::enable_control_action(0, 242, 1);
					func_120(0, 0, 0, 1);
					func_119(0, -1, 1);
					if (func_118()) {
						if (Global_2594050 != iLocal_645) {
							audio::play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							iLocal_645 = Global_2594050;
							func_123(iLocal_645, 1, 1);
							iLocal_660 = 1;
						}
						else {
							iVar180 = 1;
						}
					}
				}
			}
			if (controls::is_control_just_pressed(2, 188) || controls::is_control_just_pressed(2, 241)) {
				iLocal_660 = 1;
				audio::play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				iVar195 = iLocal_645 - 1;
				while (iVar195 >= 0) {
					if (gameplay::is_bit_set(iLocal_646[iVar195 / 32], iVar195 % 32)) {
						iLocal_645 = iVar195;
						bVar196 = true;
						iVar195 = 0;
					}
					iVar195 += -1;
				}
				if (!bVar196) {
					iVar195 = iLocal_646 * 32 - 1;
					while (iVar195 >= iLocal_645 + 1) {
						if (gameplay::is_bit_set(iLocal_646[iVar195 / 32], iVar195 % 32)) {
							iLocal_645 = iVar195;
							bVar196 = true;
							iVar195 = 0;
						}
						iVar195 += -1;
					}
				}
				if (bVar196) {
					func_123(iLocal_645, 1, 1);
				}
			}
			else if (controls::is_control_just_pressed(2, 187) || controls::is_control_just_pressed(2, 242)) {
				iLocal_660 = 1;
				audio::play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				iVar197 = iLocal_645 + 1;
				while (iVar197 <= iLocal_646 * 32 - 1) {
					if (gameplay::is_bit_set(iLocal_646[iVar197 / 32], iVar197 % 32)) {
						iLocal_645 = iVar197;
						bVar198 = true;
						iVar197 = iLocal_646 * 32 + 1;
					}
					iVar197++;
				}
				if (!bVar198) {
					iVar197 = 0;
					while (iVar197 <= iLocal_645 - 1) {
						if (gameplay::is_bit_set(iLocal_646[iVar197 / 32], iVar197 % 32)) {
							iLocal_645 = iVar197;
							bVar198 = true;
							iVar197 = iLocal_646 * 32 + 1;
						}
						iVar197++;
					}
				}
				if (bVar198) {
					func_123(iLocal_645, 1, 1);
				}
			}
			else if (controls::is_control_just_released(2, 201) || iVar180 == 1) {
				iVar199 = 0;
				iVar180 = 0;
				audio::play_sound_frontend(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				iVar201 = 0;
				iVar202 = func_179();
				iVar200 = 0;
				while (iVar200 < iVar202) {
					if (func_63(func_175(iVar200))) {
						if (iLocal_645 == iVar201 &&
							(Local_402.f_8.f_4 != func_175(iVar200) ||
							 !entity::does_entity_exist(Global_68531.f_484[Local_402]) ||
							 !vehicle::is_vehicle_driveable(Global_68531.f_484[Local_402], 0) || Local_402 == 21 ||
							 Local_402 == 22 || Local_402 == 23)) {
							iVar199 = 1;
							if (!iLocal_659 && Local_402.f_8.f_4 != func_175(iVar200) ||
								!iLocal_659 && Local_402 == 21 || !iLocal_659 && Local_402 == 22 ||
								!iLocal_659 && Local_402 == 23) {
								func_117("VEH_SELECT_CNFA", 0, 0);
								func_116(-1);
								func_115(201, "ITEM_YES", -1);
								func_115(202, "ITEM_NO", -1);
								iLocal_659 = 1;
								iVar200 = func_179() + 1;
							}
							else if (Local_402.f_6 == 3) {
								if (func_114(func_175(iVar200))) {
									iLocal_1017 = func_175(iVar200);
									iLocal_657 = 0;
									iLocal_658 = 0;
									iLocal_651 = 0;
									iLocal_654++;
								}
								else {
									iLocal_1016 = 1;
									iLocal_1017 = func_175(iVar200);
									iLocal_654 = 99;
								}
							}
							else if (Local_402.f_6 == 0 && func_114(func_175(iVar200))) {
								iLocal_1017 = func_175(iVar200);
								iLocal_657 = 0;
								iLocal_658 = 0;
								iLocal_651 = 0;
								iLocal_654++;
							}
							else {
								if (entity::does_entity_exist(Global_68531.f_484[Local_402])) {
									entity::set_entity_as_mission_entity(Global_68531.f_484[Local_402], 0, 1);
									vehicle::delete_vehicle(&Global_68531.f_484[Local_402]);
								}
								Var101.f_66 = func_175(iVar200);
								gameplay::set_bit(&Var101.f_77, 14);
								func_111(Local_402, &Var101, 0f, 0f, 0f, -1f, 145);
								func_110(Local_402);
								func_60(&Local_402.f_8, Local_402);
								iVar200 = func_179() + 1;
								iLocal_658 = 1;
							}
						}
						iVar201++;
					}
					iVar200++;
				}
				if (!iVar199) {
					iVar200 = 0;
					while (iVar200 < Global_68531.f_592) {
						if (Global_68531.f_592[iVar200] != -1) {
							if (func_174(Global_68531.f_592[iVar200], iLocal_672) &&
								Global_101700.f_31389.f_1982[iLocal_672 /*939*/].f_626[Global_68531.f_592[iVar200]] ==
									-15 &&
								(Global_68531.f_592[iVar200] != 200 || !Global_101700.f_24032.f_7)) {
								func_134(Global_68531.f_592[iVar200], &Var0, 0, iLocal_672, -1);
								if (iLocal_645 == iVar201 &&
									(Local_402.f_8.f_4 != Var0.f_66 ||
									 !entity::does_entity_exist(Global_68531.f_484[Local_402]) ||
									 !vehicle::is_vehicle_driveable(Global_68531.f_484[Local_402], 0))) {
									iVar199 = 1;
									if (!iLocal_659) {
										if (Local_402.f_6 == 3) {
											func_117("VEH_SELECT_CNF", 0, 0);
										}
										else {
											func_117("VEH_SELECT_CNFA", 0, 0);
										}
										func_116(-1);
										func_115(201, "ITEM_YES", -1);
										func_115(202, "ITEM_NO", -1);
										iLocal_659 = 1;
										iVar200 = Global_68531.f_592 + 1;
									}
									else if (Var0.f_66 == joaat("marshall")) {
										iLocal_654 = 3;
										iLocal_658 = 1;
										iVar200 = Global_68531.f_592 + 1;
									}
									else {
										if (entity::does_entity_exist(Global_68531.f_484[Local_402])) {
											entity::set_entity_as_mission_entity(Global_68531.f_484[Local_402], 0, 1);
											vehicle::delete_vehicle(&Global_68531.f_484[Local_402]);
										}
										func_134(Global_68531.f_592[iVar200], &Var0, 0, iLocal_672, -1);
										gameplay::set_bit(&Var0.f_77, 14);
										if (vehicle::is_this_model_a_plane(Var0.f_66)) {
											gameplay::set_bit(&Var0.f_77, 22);
										}
										func_111(Local_402, &Var0, 0f, 0f, 0f, -1f, 145);
										func_110(Local_402);
										func_60(&Local_402.f_8, Local_402);
										iVar200 = Global_68531.f_592 + 1;
										iLocal_658 = 1;
									}
								}
								iVar201++;
							}
						}
						iVar200++;
					}
				}
			}
			else if (controls::is_control_just_released(2, 202) || controls::is_control_just_released(2, 238)) {
				audio::play_sound_frontend(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				if (iLocal_659) {
					iLocal_660 = 1;
					iLocal_659 = 0;
				}
				else {
					iLocal_654 = 99;
				}
			}
		}
		ui::hide_hud_and_radar_this_frame();
		if (iLocal_660) {
			func_117("", 0, 0);
			func_116(-1);
			func_115(201, "ITEM_SELECT", -1);
			func_115(202, "ITEM_EXIT", -1);
			iLocal_659 = 0;
			iLocal_660 = 0;
		}
		func_73(1, -1, 1, 0, 1, -1082130432, 0, 0);
		break;

	case 3:
		if (!iLocal_657 || iLocal_658) {
			func_166(0);
			func_165(1, 0, 0, 0, 0);
			func_164(1, 1, 1, 1, 1);
			iVar203 = 0;
			while (iVar203 < iLocal_652) {
				iLocal_652[iVar203] = 0;
				iVar203++;
			}
			func_163("WEB_VEH_TITLE2");
			iVar203 = 0;
			while (iVar203 < 25) {
				StringCopy(&Var204, "WEB_VEH_FLAG_", 16);
				StringIntConCat(&Var204, iVar203, 16);
				func_130(iVar203, &Var204, 0, 1, 0, 0);
				gameplay::set_bit(&iLocal_652[iVar203 / 32], iVar203 % 32);
				iVar203++;
			}
			if (Local_674.f_12 == 0) {
				iLocal_651 = Global_101700.f_24141.f_313[200];
			}
			else if (Local_674.f_12 == 1) {
				iLocal_651 = Global_101700.f_24141.f_626[200];
			}
			else {
				iLocal_651 = Global_101700.f_24141.f_939[200];
			}
			func_123(iLocal_651, 1, 1);
			iLocal_660 = 1;
			iLocal_658 = 0;
			iLocal_657 = 1;
		}
		else {
			iVar180 = 0;
			if (gameplay::is_pc_version()) {
				if (controls::_is_input_just_disabled(2)) {
					controls::disable_control_action(0, 1, 1);
					controls::disable_control_action(0, 2, 1);
					controls::enable_control_action(0, 237, 1);
					controls::enable_control_action(0, 238, 1);
					controls::enable_control_action(0, 241, 1);
					controls::enable_control_action(0, 242, 1);
					func_120(0, 0, 0, 1);
					func_119(0, -1, 1);
					if (func_118()) {
						if (Global_2594050 != iLocal_651) {
							audio::play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							iLocal_651 = Global_2594050;
							func_123(iLocal_651, 1, 1);
							iLocal_660 = 1;
						}
						else {
							iVar180 = 1;
						}
					}
				}
			}
			if (controls::is_control_just_pressed(2, 188) || controls::is_control_just_pressed(2, 241)) {
				iLocal_660 = 1;
				audio::play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				iVar208 = iLocal_651 - 1;
				while (iVar208 >= 0) {
					if (gameplay::is_bit_set(iLocal_652[iVar208 / 32], iVar208 % 32)) {
						iLocal_651 = iVar208;
						bVar209 = true;
						iVar208 = 0;
					}
					iVar208 += -1;
				}
				if (!bVar209) {
					iVar208 = 31;
					while (iVar208 >= iLocal_651 + 1) {
						if (gameplay::is_bit_set(iLocal_652[iVar208 / 32], iVar208 % 32)) {
							iLocal_651 = iVar208;
							bVar209 = true;
							iVar208 = iLocal_651;
						}
						iVar208 += -1;
					}
				}
				if (bVar209) {
					func_123(iLocal_651, 1, 1);
				}
			}
			else if (controls::is_control_just_pressed(2, 187) || controls::is_control_just_pressed(2, 242)) {
				iLocal_660 = 1;
				audio::play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				iVar210 = iLocal_651 + 1;
				while (iVar210 <= 31) {
					if (gameplay::is_bit_set(iLocal_652[iVar210 / 32], iVar210 % 32)) {
						iLocal_651 = iVar210;
						bVar211 = true;
						iVar210 = 31;
					}
					iVar210++;
				}
				if (!bVar211) {
					iVar210 = 0;
					while (iVar210 <= iLocal_651 - 1) {
						if (gameplay::is_bit_set(iLocal_652[iVar210 / 32], iVar210 % 32)) {
							iLocal_651 = iVar210;
							bVar211 = true;
							iVar210 = iLocal_651;
						}
						iVar210++;
					}
				}
				if (bVar211) {
					func_123(iLocal_651, 1, 1);
				}
			}
			else if (controls::is_control_just_released(2, 201) || iVar180 == 1) {
				iVar180 = 0;
				audio::play_sound_frontend(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				if (entity::does_entity_exist(Global_68531.f_484[Local_402])) {
					entity::set_entity_as_mission_entity(Global_68531.f_484[Local_402], 0, 1);
					vehicle::delete_vehicle(&Global_68531.f_484[Local_402]);
				}
				uVar212 = iLocal_651 + 1;
				if (iLocal_672 == 0) {
					Global_101700.f_24141.f_313[200] = uVar212;
				}
				else if (iLocal_672 == 1) {
					Global_101700.f_24141.f_626[200] = uVar212;
				}
				else if (iLocal_672 == 2) {
					Global_101700.f_24141.f_939[200] = uVar212;
				}
				func_134(200, &Var0, 0, iLocal_672, -1);
				gameplay::set_bit(&Var0.f_77, 14);
				if (vehicle::is_this_model_a_plane(Var0.f_66)) {
					gameplay::set_bit(&Var0.f_77, 22);
				}
				func_111(Local_402, &Var0, 0f, 0f, 0f, -1f, 145);
				func_110(Local_402);
				func_60(&Local_402.f_8, Local_402);
				iLocal_658 = 1;
				iLocal_654 = 2;
			}
			else if (controls::is_control_just_released(2, 202) || controls::is_control_just_released(2, 238)) {
				audio::play_sound_frontend(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				iLocal_657 = 0;
				iLocal_658 = 0;
				iLocal_654--;
			}
		}
		ui::hide_hud_and_radar_this_frame();
		if (iLocal_660) {
			func_117("", 0, 0);
			func_116(-1);
			func_115(201, "ITEM_SELECT", -1);
			func_115(202, "ITEM_EXIT", -1);
			iLocal_659 = 0;
			iLocal_660 = 0;
		}
		func_73(1, -1, 1, 0, 1, -1082130432, 0, 0);
		break;

	case 70: break;

	case 99:
		if (!ped::is_ped_injured(player::player_ped_id())) {
			player::set_player_control(player::player_id(), 1, 0);
		}
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (vehicle::is_vehicle_driveable(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 0)) {
				if (!audio::_is_player_vehicle_radio_enabled()) {
					audio::set_vehicle_radio_enabled(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 1);
				}
			}
		}
		func_70(1, -1);
		iLocal_654 = 0;
		func_68(&iLocal_655);
		iLocal_655 = -1;
		break;
	}
	if (!iVar179 && ui::is_help_message_being_displayed()) {
		if (!gameplay::is_string_null_or_empty(&cLocal_1019)) {
			if (func_172("HANGAR_NO") || func_172("MARINA_NO") || func_172("HELIPAD_NO") || func_172("CAR_GAR_NO_1") ||
				func_172("CAR_GAR_NO_2")) {
				ui::clear_help(1);
			}
			StringCopy(&cLocal_1019, "", 16);
		}
	}
}

// Position - 0x62D0
void func_68(int *iParam0) {
	int iVar0;

	if (*iParam0 == -1) {
		return;
	}
	iVar0 = func_69(*iParam0);
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

// Position - 0x6327
int func_69(int iParam0) {
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

// Position - 0x6362
void func_70(int iParam0, int iParam1) {
	int iVar0;

	if (!func_72(&iVar0, 0, iParam1)) {
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
		func_71(&Global_17290.f_5530[iVar0 /*10*/]);
		Global_17290.f_5591[iVar0] = 0;
	}
	else {
		Global_17290.f_5591[iVar0] = 0;
	}
}

// Position - 0x6420
void func_71(int *iParam0) {
	if (uParam0->f_9 != 0) {
		if (graphics::has_scaleform_movie_loaded(*uParam0)) {
			graphics::set_scaleform_movie_as_no_longer_needed(uParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

// Position - 0x6449
int func_72(int *iParam0, int iParam1, int iParam2) {
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

// Position - 0x64E6
void func_73(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7) {
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
	bool bVar31;
	bool bVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float *fVar36;
	vector3 vVar37;
	bool bVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	int *iVar46;
	int *iVar47;
	int *iVar48;
	float fVar49;
	int iVar50;
	int iVar51;
	bool bVar52;
	int iVar53;
	int iVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	int iVar59;
	int iVar60;
	float fVar61;
	float fVar62;
	float fVar63;
	char cVar64[64];
	char cVar80[64];
	float fVar96;
	int iVar97;
	float fVar98;
	float fVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;

	if (!func_72(&iVar0, 0, iParam1)) {
		return;
	}
	if (iVar0 == -1) {
	}
	if (!func_107(0, iParam6)) {
		return;
	}
	graphics::_set_screen_draw_position(76, 84);
	graphics::_screen_draw_position_ratio(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_17290) {
		if (func_105(29, 1, 1, &fVar35, &fVar36, iParam7)) {
			fVar56 = fVar36;
			fVar57 = fVar35;
			fVar56 += 0f;
		}
		else {
			Global_17290 = 0;
		}
	}
	if (gameplay::get_hash_key(&Global_17290.f_1) == gameplay::get_hash_key("HIDE")) {
		fVar58 = Global_17288;
	}
	else {
		fVar58 = Global_17288 + fVar56 + 0.034722f + 0f;
	}
	if (fParam5 == -1f) {
		fParam5 = Global_17289;
	}
	fVar61 = 1f;
	if (iParam7) {
		graphics::_get_active_screen_resolution(&iVar59, &iVar60);
		fVar62 = graphics::_get_aspect_ratio(0);
		if (func_104()) {
			iVar59 = system::round(system::to_float(iVar60) * fVar62);
		}
		fVar63 = system::to_float(iVar59) / system::to_float(iVar60);
		fVar61 = fVar63 / fVar62;
		if (func_104()) {
			fVar61 = 1f;
		}
		iVar59 = system::round(system::to_float(iVar59) / fVar61);
		iVar60 = system::round(system::to_float(iVar60) / fVar61);
	}
	else {
		graphics::get_screen_resolution(&iVar59, &iVar60);
	}
	iVar5 = 0;
	while (iVar5 < 2) {
		if (iVar5 == 1 && Global_17290.f_5598) {
			if (gameplay::get_hash_key(&Global_17290.f_1) == gameplay::get_hash_key("HIDE")) {
				fVar49 = Global_17288;
			}
			else {
				if (Global_17290) {
					StringCopy(&cVar64, func_103(29), 64);
					StringCopy(&cVar80, func_100(29, 1), 64);
					if (gameplay::get_hash_key(&Global_17290.f_6703[29 /*16*/]) == -1487683087) {
						func_99(Global_17287, Global_17288, fParam5, fVar56 - 0f, 0, 0, 0, 255);
						graphics::draw_sprite(&cVar64, &cVar80, Global_17287 + fParam5 * 0.5f,
											  Global_17288 + (fVar56 - 0f) * 0.5f, fVar57, fVar56 - 0f, 0f, 255, 255,
											  255, 255, 0);
					}
					else {
						graphics::draw_sprite(&cVar64, &cVar80, Global_17287 + fParam5 * 0.5f,
											  Global_17288 + (fVar56 - 0f) * 0.5f, fParam5, fVar56 - 0f, 0f, 255, 255,
											  255, 255, 0);
					}
				}
				if (Global_17290.f_7869) {
					iVar1 = Global_17290.f_7865;
					iVar2 = Global_17290.f_7866;
					iVar3 = Global_17290.f_7867;
					iVar4 = Global_17290.f_7868;
				}
				else {
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_99(Global_17287, Global_17288 + fVar56, fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = Global_17288 + fVar56 + 0.034722f + 0f;
				if (gameplay::get_hash_key(&Global_17290.f_1) != 0) {
					func_98();
					ui::begin_text_command_display_text(&Global_17290.f_1);
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17290.f_68) {
						if (Global_17290.f_5[iVar14] == 2) {
							ui::add_text_component_integer(Global_17290.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17290.f_5[iVar14] == 3) {
							ui::add_text_component_float(Global_17290.f_14[iVar16], Global_17290.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17290.f_5[iVar14] == 1) {
							ui::add_text_component_substring_text_label(&Global_17290.f_22[iVar17 /*4*/]);
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 8) {
							ui::add_text_component_substring_text_label(&Global_17290.f_22[iVar17 /*4*/]);
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 5) {
							ui::add_text_component_substring_player_name(&Global_17290.f_35[iVar18 /*16*/]);
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 6) {
							ui::add_text_component_substring_text_label(&Global_17290.f_35[iVar18 /*16*/]);
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 7) {
							ui::add_text_component_substring_player_name(&Global_17290.f_35[iVar18 /*16*/]);
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 9) {
							ui::add_text_component_substring_player_name(&Global_17290.f_35[iVar18 /*16*/]);
							iVar18++;
						}
						iVar14++;
					}
					ui::end_text_command_display_text(Global_17287 + 0.00390625f, Global_17288 + fVar56 + 0.00416664f,
													  0);
				}
				if (Global_17290.f_5601 > Global_17290.f_5095) {
					if (Global_17290.f_5604 != 0) {
						func_98();
						func_96(Global_17287 + fParam5 - 0.00390625f -
									func_97("CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603),
								Global_17288 + fVar56 + 0.00416664f, "CM_ITEM_COUNT", Global_17290.f_5604,
								Global_17290.f_5603);
					}
				}
			}
			iVar6 = Global_17290.f_5605;
			iVar9 = 0;
			fVar96 = fVar49;
			if (Global_17290.f_7879) {
				iVar1 = Global_17290.f_7875;
				iVar2 = Global_17290.f_7876;
				iVar3 = Global_17290.f_7877;
				iVar4 = Global_17290.f_7878;
			}
			else {
				ui::get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17290.f_5095 && iVar6 <= Global_17290.f_5088) {
				if (iVar6 >= 0) {
					if (Global_17290.f_5355[iVar6]) {
						if (Global_17290.f_5226[iVar6] && iVar6 != Global_17290.f_5605) {
							fVar49 += 0.00277776f;
						}
						fVar55 = 0.034722f;
						if (Global_17290.f_5612[iVar6] != 0f) {
							fVar55 = Global_17290.f_5612[iVar6];
						}
						fVar49 += fVar55;
						iVar9++;
					}
				}
				iVar6++;
			}
			if (iParam3) {
				if (iVar9 <= 1) {
					fVar55 = 0.034722f;
					fVar49 += fVar55;
					iVar9++;
					if (Global_17290.f_5088 <= 1) {
						Global_17290.f_5088++;
					}
					iVar53 = 1;
				}
			}
			graphics::draw_sprite("CommonMenu", "Gradient_Bgd", Global_17287 + fParam5 * 0.5f,
								  fVar96 + (fVar49 - fVar96) * 0.5f - 0.00138888f, fParam5, fVar49 - fVar96, 0f, 255,
								  255, 255, 255, 0);
			if (Global_17290.f_5601 > Global_17290.f_5095) {
				if (Global_17290.f_7884) {
					iVar1 = Global_17290.f_7880;
					iVar2 = Global_17290.f_7881;
					iVar3 = Global_17290.f_7882;
					iVar4 = Global_17290.f_7883;
				}
				else {
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_99(Global_17287, fVar49 + 0f, fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar37 = {graphics::get_texture_resolution("CommonMenu", "shop_arrows_upANDdown")};
				vVar37.x *= 0.5f / fVar61;
				vVar37.y *= 0.5f / fVar61;
				if (Global_17290.f_7897) {
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else {
					ui::get_hud_colour(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				graphics::draw_sprite("CommonMenu", "shop_arrows_upANDdown", Global_17287 + fParam5 * 0.5f,
									  fVar49 + 0f + 0.034722f * 0.5f, vVar37.x / 1280f * fVar61,
									  vVar37.y / 720f * fVar61, 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 += 0f + 0.034722f;
			}
			if (gameplay::get_hash_key(&Global_17290.f_4562) != 0 && Global_17290.f_4636 != -1) {
				fVar49 += 0.00277776f * 2f;
				fVar41 = Global_17287 + 0.0046875f;
				if (Global_17290.f_4638 != 0) {
					func_105(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, iParam7);
					fVar41 = Global_17287 + fVar35 + 0.00078125f * 4f - 0.00078125f * 1f;
				}
				func_95(fVar41);
				ui::_begin_text_command_line_count(&Global_17290.f_4562);
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632) {
					if (Global_17290.f_4566[iVar14] == 2) {
						ui::add_text_component_integer(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3) {
						ui::add_text_component_float(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1) {
						ui::add_text_component_substring_text_label(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6) {
						ui::add_text_component_substring_text_label(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = ui::_end_text_command_get_line_count(fVar41, fVar49 + 0.00277776f);
				ui::get_hud_colour(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_99(Global_17287, fVar49 - 0.00277776f, fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7889) {
					iVar1 = Global_17290.f_7885;
					iVar2 = Global_17290.f_7886;
					iVar3 = Global_17290.f_7887;
					iVar4 = Global_17290.f_7888;
				}
				else {
					ui::get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				graphics::draw_sprite("CommonMenu", "Gradient_Bgd", Global_17287 + fParam5 * 0.5f,
									  fVar49 +
										  (ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) +
										   0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1)) *
											  0.5f -
										  0.00138888f,
									  fParam5,
									  ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f +
										  0.00138888f * 5f * IntToFloat(iVar6 - 1),
									  0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_95(fVar41);
				ui::begin_text_command_display_text(&Global_17290.f_4562);
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632) {
					if (Global_17290.f_4566[iVar14] == 2) {
						ui::add_text_component_integer(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3) {
						ui::add_text_component_float(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1) {
						ui::add_text_component_substring_text_label(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6) {
						ui::add_text_component_substring_text_label(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 8) {
						ui::add_text_component_substring_text_label(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					iVar14++;
				}
				ui::end_text_command_display_text(fVar41, fVar49 + 0.00277776f, 0);
				if (Global_17290.f_4638 != 0) {
					func_105(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, iParam7);
					func_94(Global_17290.f_4638, 1, &iVar46, &iVar47, &iVar48);
					graphics::draw_sprite(func_103(Global_17290.f_4638), func_100(Global_17290.f_4638, 1),
										  Global_17287 + fVar35 * 0.5f + 0.00078125f * 2f,
										  fVar49 + fVar36 * 0.5f - 0.00138888f * 4f, fVar35, fVar36, 0f, iVar46, iVar47,
										  iVar48, 255, 0);
				}
				fVar49 += ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f +
						  0.00138888f * 5f * IntToFloat(iVar6 - 1);
				if (Global_17290.f_4636 > 0) {
					if (gameplay::get_game_timer() - Global_17290.f_4637 > Global_17290.f_4636) {
						StringCopy(&Global_17290.f_4562, "", 16);
						Global_17290.f_4636 = -1;
					}
				}
			}
			if (gameplay::get_hash_key(&Global_2593974.f_21) != 0 && Global_2593974.f_65 != -1) {
				fVar49 += 0.00277776f * 2f;
				fVar41 = Global_17287 + 0.0046875f;
				if (Global_2593974.f_67 != 0) {
					func_105(Global_2593974.f_67, 1, 1, &fVar35, &fVar36, iParam7);
					fVar41 = Global_17287 + fVar35 + 0.00078125f * 4f - 0.00078125f * 1f;
				}
				func_95(fVar41);
				ui::_begin_text_command_line_count(&Global_2593974.f_21);
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2593974.f_61) {
					if (Global_2593974.f_25[iVar14] == 2) {
						ui::add_text_component_integer(Global_2593974.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2593974.f_25[iVar14] == 3) {
						ui::add_text_component_float(Global_2593974.f_34[iVar16], Global_2593974.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2593974.f_25[iVar14] == 1) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 5) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 6) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 7) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 9) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 8) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = ui::_end_text_command_get_line_count(fVar41, fVar49 + 0.00277776f);
				ui::get_hud_colour(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_99(Global_17287, fVar49 - 0.00277776f, fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7889) {
					iVar1 = Global_17290.f_7885;
					iVar2 = Global_17290.f_7886;
					iVar3 = Global_17290.f_7887;
					iVar4 = Global_17290.f_7888;
				}
				else {
					ui::get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				graphics::draw_sprite("CommonMenu", "Gradient_Bgd", Global_17287 + fParam5 * 0.5f,
									  fVar49 +
										  (ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) +
										   0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1)) *
											  0.5f -
										  0.00138888f,
									  fParam5,
									  ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f +
										  0.00138888f * 5f * IntToFloat(iVar6 - 1),
									  0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_95(fVar41);
				ui::begin_text_command_display_text(&Global_2593974.f_21);
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2593974.f_61) {
					if (Global_2593974.f_25[iVar14] == 2) {
						ui::add_text_component_integer(Global_2593974.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2593974.f_25[iVar14] == 3) {
						ui::add_text_component_float(Global_2593974.f_34[iVar16], Global_2593974.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2593974.f_25[iVar14] == 1) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 8) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 5) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 6) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 7) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 9) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					iVar14++;
				}
				ui::end_text_command_display_text(fVar41, fVar49 + 0.00277776f, 0);
				if (Global_2593974.f_67 != 0) {
					func_105(Global_2593974.f_67, 1, 1, &fVar35, &fVar36, iParam7);
					func_94(Global_2593974.f_67, 1, &iVar46, &iVar47, &iVar48);
					graphics::draw_sprite(func_103(Global_2593974.f_67), func_100(Global_2593974.f_67, 1),
										  Global_17287 + fVar35 * 0.5f + 0.00078125f * 2f,
										  fVar49 + fVar36 * 0.5f - 0.00138888f * 4f, fVar35, fVar36, 0f, iVar46, iVar47,
										  iVar48, 255, 0);
				}
				fVar49 += ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f +
						  0.00138888f * 5f * IntToFloat(iVar6 - 1);
				if (Global_2593974.f_65 > 0) {
					if (gameplay::get_game_timer() - Global_2593974.f_66 > Global_2593974.f_65) {
						StringCopy(&Global_2593974.f_21, "", 16);
						Global_2593974.f_65 = -1;
					}
				}
			}
			func_86(iVar59, iParam1, 0, 0, 0, 0, iParam4, 1, 0);
			graphics::_set_screen_draw_position(76, 84);
			graphics::_screen_draw_position_ratio(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17290.f_5598) {
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar97 = Global_17290.f_5088;
			if (Global_17290.f_5599) {
				iVar97 = Global_17290.f_5602 - 1;
			}
			fVar98 = 0f;
			fVar99 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar97) {
				fVar55 = 0.034722f;
				if (Global_17290.f_5612[iVar6] != 0f) {
					fVar55 = Global_17290.f_5612[iVar6];
				}
				if (Global_17290.f_5599) {
					iVar6 = Global_17290.f_7520[iVar7];
				}
				else {
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17290.f_5605 && iVar9 < Global_17290.f_5095) {
					bVar32 = true;
					if (Global_17290.f_5606 == iVar6) {
						fVar99 = fVar98;
					}
					if (Global_17290.f_5226[iVar6]) {
						iVar12++;
					}
					fVar34 = fVar58 + fVar98 + 0.00277776f * IntToFloat(iVar12) + 0.00277776f;
				}
				Global_17290.f_5746[iVar6] = fVar34;
				fVar33 = Global_17287 + 0.0046875f;
				bVar40 = false;
				bVar31 = Global_17290.f_5606 == iVar6;
				if (bVar31 && iVar5 == 1 && bVar32) {
					iVar100 = 255;
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					if (Global_17290.f_7891) {
						ui::get_hud_colour(Global_17290.f_7890, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					else {
						ui::get_hud_colour(1, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					graphics::draw_sprite("CommonMenu", "Gradient_Nav", Global_17287 + fParam5 * 0.5f,
										  fVar58 + fVar99 + 0.00277776f * IntToFloat(iVar12) + fVar55 * 0.5f, fParam5,
										  fVar55, 0f, iVar100, iVar101, iVar102, iVar103, 0);
					Global_17290.f_5744 = fVar34;
				}
				if (iVar53 && iVar7 == iVar97) {
					func_84(bVar31, 1, 0, 0, 0, 0, 0);
					ui::begin_text_command_display_text("DFLT_MNU_OPT");
					ui::end_text_command_display_text(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else {
					iVar8 = 0;
					while (iVar8 < Global_17290.f_5096) {
						if (gameplay::is_bit_set(Global_17290.f_4959[iVar6], iVar8) ||
							Global_17290.f_4926[iVar8] == 5) {
							if (Global_17290.f_5599) {
								iVar19 = Global_17290.f_7536[iVar9 * Global_17290.f_5096 + iVar8];
								iVar20 = Global_17290.f_7577[iVar9 * Global_17290.f_5096 + iVar8];
								iVar21 = Global_17290.f_7618[iVar9 * Global_17290.f_5096 + iVar8];
								iVar22 = Global_17290.f_7659[iVar9 * Global_17290.f_5096 + iVar8];
								iVar23 = Global_17290.f_7700[iVar9 * Global_17290.f_5096 + iVar8];
							}
							else {
								Global_17290.f_7536[iVar9 * Global_17290.f_5096 + iVar8] = iVar19;
								Global_17290.f_7577[iVar9 * Global_17290.f_5096 + iVar8] = iVar20;
								Global_17290.f_7618[iVar9 * Global_17290.f_5096 + iVar8] = iVar21;
								Global_17290.f_7659[iVar9 * Global_17290.f_5096 + iVar8] = iVar22;
								Global_17290.f_7700[iVar9 * Global_17290.f_5096 + iVar8] = iVar23;
							}
							iVar104 = 0;
							iVar54 = 0;
							if (Global_17290.f_5878[0] != -1) {
								if (iVar6 * 5 + iVar8 == Global_17290.f_5875[0]) {
									iVar54 = 1;
									iVar104 = 0;
								}
							}
							if (Global_17290.f_5878[1] != -1) {
								if (iVar6 * 5 + iVar8 == Global_17290.f_5875[1]) {
									iVar54 = 1;
									iVar104 = 1;
								}
							}
							if (Global_17290.f_4932[iVar8] != -1f) {
								fVar33 = Global_17287 + 0.0046875f + Global_17290.f_4932[iVar8];
							}
							if (iVar8 < 4 && Global_17290.f_4932[iVar8 + 1] != -1f &&
								fVar33 < Global_17290.f_4932[iVar8 + 1]) {
								fVar45 = Global_17290.f_4932[iVar8 + 1] - fVar33;
							}
							else {
								fVar45 = Global_17287 + Global_17289 - 0.0046875f - fVar33;
							}
							if (Global_17290.f_4945[iVar8] && Global_17290.f_5741 && bVar31) {
								bVar52 = true;
							}
							else {
								bVar52 = false;
							}
							switch (Global_17290.f_4926[iVar8]) {
							case 0: break;

							case 1:
								iVar24 = iVar19;
								if (iVar5 == 1 && bVar32) {
									if (!Global_17290.f_5599) {
										fVar42 = 0f;
										fVar43 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
											iVar50 = 0;
											iVar51 = 0;
											iVar14 = 0;
											while (iVar14 < 4) {
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 ||
													Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8) {
													iVar51 = 1;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9) {
													iVar50 = 1;
												}
												iVar14++;
											}
											func_84(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24],
													iVar54, iVar104, iVar51, iVar50);
											ui::_begin_text_command_width(&Global_17290.f_73[iVar24 /*6*/]);
										}
										iVar14 = 0;
										while (iVar14 < 4) {
											if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1) {
												iVar25++;
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_text_label(
														&Global_17290.f_73[iVar24 + iVar25 /*6*/]);
												}
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8) {
												iVar25++;
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_text_label(
														&Global_17290.f_73[iVar24 + iVar25 /*6*/]);
												}
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_player_name(
														&Global_2453058[iVar23 + iVar29 /*16*/]);
												}
												iVar29++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_text_label(
														&Global_2453058[iVar23 + iVar29 /*16*/]);
												}
												iVar29++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_player_name(
														&Global_2453058[iVar23 + iVar29 /*16*/]);
												}
												iVar29++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_player_name(
														&Global_2453058[iVar23 + iVar29 /*16*/]);
												}
												iVar29++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_integer(
														Global_17290.f_3918[iVar20 + iVar26]);
												}
												iVar26++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_float(Global_17290.f_4175[iVar21 + iVar27],
																				 Global_17290.f_4304[iVar21 + iVar27]);
												}
												iVar27++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4) {
												iVar28++;
											}
											iVar14++;
										}
										if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
											fVar42 = ui::_end_text_command_get_width(1);
										}
										if (iVar28 > 0) {
											iVar14 = 0;
											while (iVar14 < iVar28) {
												if (func_105(Global_17290.f_4433[iVar22 + iVar14], bVar31, 0, &fVar35,
															 &fVar36, iParam7)) {
													fVar43 += fVar35;
													if (iVar14 > 0) {
														fVar43 -= 0.00078125f * 4f;
													}
													if (Global_17290.f_4433[iVar22 + iVar14] == 2 ||
														Global_17290.f_4433[iVar22 + iVar14] == 48) {
														fVar43 -= 0.00078125f * 5f;
													}
												}
												iVar14++;
											}
										}
										fVar41 = 0f;
										if (Global_17290.f_4953[iVar8] == 2) {
											fVar41 += fVar45 - (fVar42 + fVar43) + 0.00078125f * 1f;
										}
										else if (Global_17290.f_4953[iVar8] == 0) {
											fVar41 += (fVar45 - fVar33) * 0.5f - (fVar42 + fVar43) * 0.5f;
										}
										Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8] = fVar41;
										Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8] = fVar42;
										Global_17290.f_7823[iVar9 * Global_17290.f_5096 + iVar8] = fVar43;
									}
									else {
										fVar41 = Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8];
										fVar42 = Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8];
										fVar43 = Global_17290.f_7823[iVar9 * Global_17290.f_5096 + iVar8];
									}
									if (bVar52) {
										if (func_105(26, 1, 0, &fVar35, &fVar36, iParam7)) {
											if (Global_17290.f_4953[iVar8] == 2) {
												fVar41 -= fVar35 * 2f;
											}
											fVar44 = fVar35 * 0.5f;
											if (func_105(26, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_94(26, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_103(26), func_100(26, 1),
																	  fVar33 + fVar41 + fVar44,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
										if (func_105(27, 1, 0, &fVar35, &fVar36, iParam7)) {
											fVar41 += fVar35;
											fVar44 = fVar35 * 0.5f;
											if (func_105(27, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_94(27, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_103(27), func_100(27, 1),
																	  fVar33 + fVar41 + fVar44 + fVar42 + fVar43,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar30 = 0;
									if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
										iVar50 = 0;
										iVar51 = 0;
										iVar14 = 0;
										while (iVar14 < 4) {
											if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 ||
												Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8) {
												iVar51 = 1;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9) {
												iVar50 = 1;
											}
											iVar14++;
										}
										func_84(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24],
												iVar54, 0, iVar51, iVar50);
										if (Global_17290.f_7895 && Global_17290.f_7896 == iVar6) {
											func_83(bVar31);
										}
										ui::begin_text_command_display_text(&Global_17290.f_73[iVar24 /*6*/]);
									}
									iVar14 = 0;
									while (iVar14 < 4) {
										if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1) {
											iVar25++;
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_text_label(
													&Global_17290.f_73[iVar24 + iVar25 /*6*/]);
											}
											iVar30 = 1;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8) {
											iVar25++;
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_text_label(
													&Global_17290.f_73[iVar24 + iVar25 /*6*/]);
											}
											iVar30 = 8;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_player_name(
													&Global_2453058[iVar23 + iVar29 /*16*/]);
											}
											iVar29++;
											iVar30 = 5;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_text_label(
													&Global_2453058[iVar23 + iVar29 /*16*/]);
											}
											iVar29++;
											iVar30 = 6;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_player_name(
													&Global_2453058[iVar23 + iVar29 /*16*/]);
											}
											iVar29++;
											iVar30 = 7;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_player_name(
													&Global_2453058[iVar23 + iVar29 /*16*/]);
											}
											iVar29++;
											iVar30 = 9;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_integer(Global_17290.f_3918[iVar20 + iVar26]);
											}
											iVar26++;
											iVar30 = 2;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_float(Global_17290.f_4175[iVar21 + iVar27],
																			 Global_17290.f_4304[iVar21 + iVar27]);
											}
											iVar27++;
											iVar30 = 3;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4) {
											if (Global_17290.f_4433[iVar22 + iVar28] == 2 ||
												Global_17290.f_4433[iVar22 + iVar28] == 48) {
												if (func_105(Global_17290.f_4433[iVar22 + iVar28], bVar31, 0, &fVar35,
															 &fVar36, iParam7)) {
													fVar41 += fVar35 * 0.5f;
													if (func_105(Global_17290.f_4433[iVar22 + iVar28], bVar31, 1,
																 &fVar35, &fVar36, iParam7)) {
														func_94(Global_17290.f_4433[iVar22 + iVar28], bVar31, &iVar46,
																&iVar47, &iVar48);
														if (Global_17290.f_4953[iVar8] == 2) {
															graphics::draw_sprite(
																func_103(Global_17290.f_4433[iVar22 + iVar28]),
																func_100(Global_17290.f_4433[iVar22 + iVar28], bVar31),
																fVar33 + fVar41 - 0.00078125f * 8f + 0.00078125f * 4f,
																fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35, fVar36,
																0f, iVar46, iVar47, iVar48, 255, 0);
														}
														else {
															graphics::draw_sprite(
																func_103(Global_17290.f_4433[iVar22 + iVar28]),
																func_100(Global_17290.f_4433[iVar22 + iVar28], bVar31),
																fVar33 + fVar41 - 0.00078125f * 8f,
																fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35, fVar36,
																0f, iVar46, iVar47, iVar48, 255, 0);
														}
														fVar41 += 0.00078125f * 3f;
													}
												}
											}
											iVar28++;
											iVar30 = 4;
										}
										iVar14++;
									}
									if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
										if (iVar30 == 4 && Global_17290.f_4953[iVar8] == 2) {
											ui::end_text_command_display_text(fVar33 + fVar41 + 0.00078125f * 7f,
																			  fVar34, 0);
										}
										else {
											ui::end_text_command_display_text(fVar33 + fVar41, fVar34, 0);
										}
									}
									if (iVar28 > 0) {
										fVar41 += 6f * 0.00078125f;
										iVar14 = 0;
										while (iVar14 < iVar28) {
											if (Global_17290.f_4433[iVar22 + iVar14] != 2 &&
												Global_17290.f_4433[iVar22 + iVar14] != 48) {
												if (func_105(Global_17290.f_4433[iVar22 + iVar14], bVar31, 0, &fVar35,
															 &fVar36, iParam7)) {
													fVar41 += fVar35 * 0.5f;
													if (func_105(Global_17290.f_4433[iVar22 + iVar14], bVar31, 1,
																 &fVar35, &fVar36, iParam7)) {
														func_94(Global_17290.f_4433[iVar22 + iVar14], bVar31, &iVar46,
																&iVar47, &iVar48);
														if (Global_17290.f_4433[iVar22 + iVar14] == 30) {
															graphics::draw_sprite(
																func_103(Global_17290.f_4433[iVar22 + iVar14]),
																func_100(Global_17290.f_4433[iVar22 + iVar14], bVar31),
																Global_17287 + fVar35 * 0.5f,
																fVar34 + 0.00277776f + fVar36 * 0.5f -
																	0.00078125f * 11f,
																fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
														}
														else if (Global_17290.f_4953[iVar8] == 2) {
															graphics::draw_sprite(
																func_103(Global_17290.f_4433[iVar22 + iVar14]),
																func_100(Global_17290.f_4433[iVar22 + iVar14], bVar31),
																fVar33 + fVar41 + fVar42 - 0.00078125f * 8f +
																	0.00078125f * 4f,
																fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35, fVar36,
																0f, iVar46, iVar47, iVar48, 255, 0);
														}
														else {
															graphics::draw_sprite(
																func_103(Global_17290.f_4433[iVar22 + iVar14]),
																func_100(Global_17290.f_4433[iVar22 + iVar14], bVar31),
																fVar33 + fVar41 + fVar42 - 0.00078125f * 12f,
																fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35, fVar36,
																0f, iVar46, iVar47, iVar48, 255, 0);
														}
													}
													fVar41 += 12f * 0.00078125f;
												}
											}
											iVar14++;
										}
									}
								}
								bVar40 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4) {
									if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1) {
										iVar19++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8) {
										iVar19++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2) {
										iVar20++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3) {
										iVar21++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4) {
										iVar22++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5) {
										iVar23++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6) {
										iVar23++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7) {
										iVar23++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9) {
										iVar23++;
									}
									iVar14++;
								}
								break;

							case 2:
								if (iVar5 == 1 && bVar32) {
									if (!Global_17290.f_5599) {
										func_84(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24],
												iVar54, 0, 0, 0);
										if (Global_17290.f_7895 && Global_17290.f_7896 == iVar6) {
											func_83(bVar31);
										}
										ui::_begin_text_command_width("NUMBER");
										ui::add_text_component_integer(Global_17290.f_3918[iVar20]);
										fVar42 = ui::_end_text_command_get_width(1);
										fVar41 = 0f;
										if (Global_17290.f_4953[iVar8] == 2) {
											fVar41 += fVar45 - fVar42 + 0.00078125f * 1f;
										}
										else if (Global_17290.f_4953[iVar8] == 0) {
											fVar41 += (fVar45 - fVar33) * 0.5f - fVar42 * 0.5f;
										}
										Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8] = fVar41;
										Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8] = fVar42;
									}
									else {
										fVar41 = Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8];
										fVar42 = Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8];
									}
									if (bVar52) {
										if (func_105(26, 1, 0, &fVar35, &fVar36, iParam7)) {
											if (Global_17290.f_4953[iVar8] == 2) {
												fVar41 -= fVar35 * 2f;
											}
											fVar44 = fVar35 * 0.5f;
											if (func_105(26, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_94(26, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_103(26), func_100(26, 1),
																	  fVar33 + fVar41 + fVar44,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
										if (func_105(27, 1, 0, &fVar35, &fVar36, iParam7)) {
											fVar41 += fVar35;
											fVar44 = fVar35 * 0.5f;
											if (func_105(27, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_94(27, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_103(27), func_100(27, 1),
																	  fVar33 + fVar41 + fVar44 + fVar42 + fVar43,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									func_84(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], iVar54, 0,
											0, 0);
									func_82(fVar33 + fVar41, fVar34, "NUMBER", Global_17290.f_3918[iVar20], 0);
								}
								bVar40 = true;
								iVar20++;
								break;

							case 3:
								if (iVar5 == 1 && bVar32) {
									if (!Global_17290.f_5599) {
										func_84(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24],
												iVar54, 0, 0, 0);
										if (Global_17290.f_7895 && Global_17290.f_7896 == iVar6) {
											func_83(bVar31);
										}
										ui::_begin_text_command_width("NUMBER");
										ui::add_text_component_float(Global_17290.f_4175[iVar21],
																	 Global_17290.f_4304[iVar21]);
										fVar42 = ui::_end_text_command_get_width(1);
										fVar41 = 0f;
										if (Global_17290.f_4953[iVar8] == 2) {
											fVar41 += fVar45 - fVar42 + 0.00078125f * 1f;
										}
										else if (Global_17290.f_4953[iVar8] == 0) {
											fVar41 += (fVar45 - fVar33) * 0.5f - fVar42 * 0.5f;
										}
										Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8] = fVar41;
										Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8] = fVar42;
									}
									else {
										fVar41 = Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8];
										fVar42 = Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8];
									}
									if (bVar52) {
										if (func_105(26, 1, 0, &fVar35, &fVar36, 0)) {
											if (Global_17290.f_4953[iVar8] == 2) {
												fVar41 -= fVar35 * 2f;
											}
											fVar44 = fVar35 * 0.5f;
											if (func_105(26, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_94(26, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_103(26), func_100(26, 1),
																	  fVar33 + fVar41 + fVar44,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
										if (func_105(27, 1, 0, &fVar35, &fVar36, iParam7)) {
											fVar41 += fVar35;
											fVar44 = fVar35 * 0.5f;
											if (func_105(27, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_94(27, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_103(27), func_100(27, 1),
																	  fVar33 + fVar41 + fVar44 + fVar42 + fVar43,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									func_84(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], iVar54, 0,
											0, 0);
									func_81(fVar33 + fVar41, fVar34, "NUMBER", Global_17290.f_4175[iVar21],
											Global_17290.f_4304[iVar21]);
								}
								bVar40 = true;
								iVar21++;
								break;

							case 4:
								if (iVar5 == 1 && bVar32) {
									if (func_105(Global_17290.f_4433[iVar22], bVar31, 0, &fVar35, &fVar36, iParam7)) {
										if (!Global_17290.f_5599) {
											fVar43 = fVar35;
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2) {
												fVar41 += fVar45 - fVar43 + 0.00078125f * 1f;
											}
											else if (Global_17290.f_4953[iVar8] == 0) {
												fVar41 += (fVar45 - fVar33) * 0.5f - fVar43 * 0.5f;
											}
											Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8] = fVar41;
											Global_17290.f_7823[iVar9 * Global_17290.f_5096 + iVar8] = fVar43;
										}
										else {
											fVar41 = Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8];
											fVar43 = Global_17290.f_7823[iVar9 * Global_17290.f_5096 + iVar8];
										}
										if (bVar52) {
											if (func_105(26, 1, 0, &fVar35, &fVar36, iParam7)) {
												if (Global_17290.f_4953[iVar8] == 2) {
													fVar41 -= fVar35 * 2f;
												}
												fVar44 = fVar35 * 0.5f;
												if (func_105(26, 1, 1, &fVar35, &fVar36, iParam7)) {
													func_94(26, 1, &iVar46, &iVar47, &iVar48);
													graphics::draw_sprite(func_103(26), func_100(26, 1),
																		  fVar33 + fVar41 + fVar44,
																		  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																		  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_105(27, 1, 0, &fVar35, &fVar36, iParam7)) {
												fVar41 += fVar35;
												fVar44 = fVar35 * 0.5f;
												if (func_105(27, 1, 1, &fVar35, &fVar36, iParam7)) {
													func_94(27, 1, &iVar46, &iVar47, &iVar48);
													graphics::draw_sprite(func_103(27), func_100(27, 1),
																		  fVar33 + fVar41 + fVar44 + fVar42 + fVar43,
																		  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																		  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										if (func_105(Global_17290.f_4433[iVar22], bVar31, 1, &fVar35, &fVar36,
													 iParam7)) {
											func_94(Global_17290.f_4433[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
											graphics::draw_sprite(func_103(Global_17290.f_4433[iVar22]),
																  func_100(Global_17290.f_4433[iVar22], bVar31),
																  fVar33 + fVar41 + fVar35 * 0.5f,
																  fVar34 - 0.00277776f + fVar55 * 0.5f,
																  fVar35 * func_80(Global_17290.f_4433[iVar22]),
																  fVar36 * func_80(Global_17290.f_4433[iVar22]), 0f,
																  iVar46, iVar47, iVar48, 255, 0);
										}
									}
								}
								bVar40 = true;
								iVar22++;
								break;

							case 5: bVar40 = true; break;
							}
							if (Global_17290.f_4926[iVar8] == 5) {
								if (Global_17290.f_4938[iVar8] > 0.05f) {
									fVar33 += Global_17290.f_4938[iVar8];
								}
								else {
									fVar33 += 0.05f;
								}
							}
							else {
								fVar33 += Global_17290.f_4938[iVar8];
								if (Global_17290.f_4945[iVar8]) {
									if (func_105(26, 1, 1, &fVar35, &fVar36, iParam7)) {
										fVar33 -= fVar35;
									}
								}
							}
						}
						else {
							fVar33 += Global_17290.f_4938[iVar8];
						}
						iVar8++;
					}
				}
				if (bVar40) {
					if (bVar32) {
						Global_17290.f_7520[iVar9] = iVar6;
						Global_17290.f_5607 = iVar6;
						iVar9++;
						if (Global_17290.f_5226[iVar6]) {
							iVar13++;
						}
						if (Global_17290.f_5612[iVar6] != 0f) {
							fVar98 += Global_17290.f_5612[iVar6];
						}
						else {
							fVar98 += 0.034722f;
						}
					}
					if (!Global_17290.f_5598) {
						Global_17290.f_5355[iVar6] = 1;
						if (Global_17290.f_5097[iVar6]) {
							if (bVar31) {
								Global_17290.f_5604 = 0;
							}
						}
						else {
							iVar11++;
							if (bVar31) {
								Global_17290.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17290.f_5598) {
				Global_17290.f_5600 = fVar58 + fVar98 + 0.00277776f * IntToFloat(iVar12);
				Global_17290.f_5603 = iVar11;
				Global_17290.f_5601 = iVar10;
				Global_17290.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17290.f_5599) {
		Global_17290.f_5602 = iVar9;
		Global_17290.f_5599 = 1;
	}
	Global_17290.f_5743 = fVar49;
	Global_17290.f_5745 = gameplay::get_game_timer();
	ui::_0x55598D21339CB998(Global_17290.f_5743);
	if (!Global_17290.f_7864) {
		func_75();
	}
	Global_17290.f_7864 = 0;
	if (iParam2) {
		ui::hide_hud_component_this_frame(10);
	}
	ui::hide_hud_component_this_frame(6);
	ui::hide_hud_component_this_frame(7);
	ui::hide_hud_component_this_frame(9);
	ui::hide_hud_component_this_frame(8);
	if (iParam0) {
		func_74(1);
	}
	graphics::_screen_draw_position_end();
}

// Position - 0x904C
void func_74(int iParam0) { Global_1354542.f_995 = iParam0; }

// Position - 0x905D
void func_75() {
	if (Global_14443.f_1 != 1) {
		if (func_79(0)) {
			func_76(0);
		}
		gameplay::set_bit(&Global_2314, 2);
	}
}

// Position - 0x9085
void func_76(int iParam0) {
	if (Global_14604) {
		func_78(0, 0);
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
	if (!func_77()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x90F5
int func_77() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x911C
void func_78(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_79(0)) {
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

// Position - 0x9190
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

// Position - 0x91EA
float func_80(int iParam0) {
	switch (iParam0) {
	case 35:
	case 34:
	case 47:
	case 46:
	case 42:
	case 36:
	case 37:
	case 39:
	case 40:
	case 38:
	case 50:
	case 43:
	case 44:
	case 45: return 0.85f;
	}
	return 1f;
}

// Position - 0x9259
void func_81(float fParam0, float fParam1, char *sParam2, float fParam3, int iParam4) {
	ui::begin_text_command_display_text(sParam2);
	ui::add_text_component_float(fParam3, iParam4);
	ui::end_text_command_display_text(fParam0, fParam1, 0);
}

// Position - 0x9278
void func_82(float fParam0, float fParam1, char *sParam2, int iParam3, int iParam4) {
	ui::begin_text_command_display_text(sParam2);
	ui::add_text_component_integer(iParam3);
	ui::end_text_command_display_text(fParam0, fParam1, iParam4);
}

// Position - 0x9296
void func_83(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (iParam0) {
		ui::get_hud_colour(Global_17290.f_7892[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else {
		ui::get_hud_colour(Global_17290.f_7892[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	ui::set_text_colour(iVar0, iVar1, iVar2, 255);
}

// Position - 0x92DC
void func_84(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam2) {
		if (iParam3) {
			func_85(Global_17290.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if (iVar0 < 20 && iVar1 < 20 && iVar2 < 20) {
				if (iParam0 == 0) {
					ui::get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if (iVar0 > 230 && iVar1 > 230 && iVar2 > 230) {
				if (iParam0) {
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			ui::set_text_colour(iVar0, iVar1, iVar2, 255);
		}
		else if (iParam1) {
			if (iParam0) {
				ui::get_hud_colour(14, &iVar0, &iVar1, &iVar2, &iVar3);
				ui::set_text_colour(iVar0, iVar1, iVar2, 255);
			}
			else {
				ui::get_hud_colour(12, &iVar0, &iVar1, &iVar2, &iVar3);
				ui::set_text_colour(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (iParam0) {
			ui::set_text_colour(155, 155, 155, 255);
		}
		else {
			ui::set_text_colour(155, 155, 155, 255);
		}
	}
	else if (iParam1) {
		if (iParam0) {
			ui::set_text_colour(0, 0, 0, system::floor(255f * 0.8f));
		}
		else {
			ui::get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
			ui::set_text_colour(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (iParam0) {
		ui::set_text_colour(155, 155, 155, 255);
	}
	else {
		ui::set_text_colour(155, 155, 155, 255);
	}
	ui::set_text_scale(0f, 0.35f);
	ui::set_text_justification(1);
	if (iParam5) {
		ui::set_text_scale(0f, 0.425f);
		ui::set_text_font(4);
	}
	else if (iParam6) {
		ui::set_text_scale(0f, 0.425f);
		ui::set_text_font(6);
	}
	else {
		ui::set_text_font(0);
	}
	ui::set_text_wrap(0f, 1f);
	ui::set_text_centre(0);
	ui::set_text_dropshadow(0, 0, 0, 0, 0);
	ui::set_text_edge(0, 0, 0, 0, 0);
}

// Position - 0x948A
void func_85(int iParam0, int *iParam1, int *iParam2, int *iParam3) {
	switch (iParam0) {
	case 0:
		*iParam1 = 8;
		*iParam2 = 8;
		*iParam3 = 8;
		break;

	case 1:
		*iParam1 = 37;
		*iParam2 = 37;
		*iParam3 = 39;
		break;

	case 22:
		*iParam1 = 140;
		*iParam2 = 146;
		*iParam3 = 154;
		break;

	case 23:
		*iParam1 = 91;
		*iParam2 = 93;
		*iParam3 = 94;
		break;

	case 6:
		*iParam1 = 81;
		*iParam2 = 84;
		*iParam3 = 89;
		break;

	case 111:
		*iParam1 = 240;
		*iParam2 = 240;
		*iParam3 = 240;
		break;

	case 28:
		*iParam1 = 150;
		*iParam2 = 8;
		*iParam3 = 0;
		break;

	case 34:
		*iParam1 = 38;
		*iParam2 = 3;
		*iParam3 = 6;
		break;

	case 88:
		*iParam1 = 245;
		*iParam2 = 137;
		*iParam3 = 15;
		break;

	case 45:
		*iParam1 = 74;
		*iParam2 = 22;
		*iParam3 = 7;
		break;

	case 56:
		*iParam1 = 45;
		*iParam2 = 58;
		*iParam3 = 53;
		break;

	case 58:
		*iParam1 = 71;
		*iParam2 = 120;
		*iParam3 = 60;
		break;

	case 54:
		*iParam1 = 77;
		*iParam2 = 98;
		*iParam3 = 104;
		break;

	case 73:
		*iParam1 = 14;
		*iParam2 = 49;
		*iParam3 = 109;
		break;

	case 68:
		*iParam1 = 22;
		*iParam2 = 34;
		*iParam3 = 72;
		break;

	case 140:
		*iParam1 = 0;
		*iParam2 = 174;
		*iParam3 = 239;
		break;

	case 131:
		*iParam1 = 255;
		*iParam2 = 183;
		*iParam3 = 0;
		break;

	case 90:
		*iParam1 = 142;
		*iParam2 = 140;
		*iParam3 = 70;
		break;

	case 97:
		*iParam1 = 156;
		*iParam2 = 141;
		*iParam3 = 113;
		break;

	case 89:
		*iParam1 = 145;
		*iParam2 = 115;
		*iParam3 = 71;
		break;

	case 105:
		*iParam1 = 98;
		*iParam2 = 68;
		*iParam3 = 40;
		break;

	case 100:
		*iParam1 = 124;
		*iParam2 = 27;
		*iParam3 = 68;
		break;

	case 99:
		*iParam1 = 114;
		*iParam2 = 42;
		*iParam3 = 63;
		break;

	case 136:
		*iParam1 = 246;
		*iParam2 = 151;
		*iParam3 = 153;
		break;

	case 49:
		*iParam1 = 32;
		*iParam2 = 32;
		*iParam3 = 44;
		break;

	case 146:
		*iParam1 = 26;
		*iParam2 = 1;
		*iParam3 = 23;
		break;

	default:
		*iParam1 = 255;
		*iParam2 = 255;
		*iParam3 = 255;
		break;
	}
}

// Position - 0x9714
void func_86(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7,
			 int iParam8) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_72(&iVar0, 0, iParam1)) {
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_107(iParam4, iParam8)) {
		return;
	}
	if (func_92()) {
		return;
	}
	if (network::_network_is_text_chat_active()) {
		return;
	}
	if (iParam7 == 0) {
		if (func_89(player::player_id(), 0)) {
			return;
		}
	}
	if (gameplay::is_pc_version()) {
		if (gameplay::update_onscreen_keyboard() == 0 || network::_network_is_text_chat_active()) {
			return;
		}
	}
	if (Global_17290.f_4639 != 0) {
		if (controls::_0x6CD79468A1E595C6(2)) {
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639) {
				if (Global_17290.f_4896[iVar1] != 353) {
					StringCopy(&Global_17290.f_4641[iVar1 /*16*/],
							   controls::get_control_instructional_button(2, Global_17290.f_4896[iVar1], 1), 64);
				}
				else if (Global_17290.f_4909[iVar1] != 32) {
					StringCopy(&Global_17290.f_4641[iVar1 /*16*/],
							   controls::_0x80C2FD58D720C801(2, Global_17290.f_4909[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17290.f_4640 = 0;
		}
		if (!Global_17290.f_4640) {
			graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			graphics::_pop_scaleform_movie_function_void();
			graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			graphics::_push_scaleform_movie_function_parameter_float(1f - Global_17290.f_4951 / 100f);
			graphics::_pop_scaleform_movie_function_void();
			if (gameplay::is_pc_version()) {
				graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				graphics::_push_scaleform_movie_function_parameter_bool(1);
				graphics::_pop_scaleform_movie_function_void();
			}
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639) {
				if (gameplay::get_hash_key(&Global_17290.f_4834[iVar1 /*4*/]) != gameplay::get_hash_key("PREV")) {
					graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					graphics::_push_scaleform_movie_function_parameter_int(iVar1);
					func_88(&Global_17290.f_4641[iVar1 /*16*/]);
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && gameplay::get_hash_key(&Global_17290.f_4834[iVar2 /*4*/]) ==
											 gameplay::get_hash_key("PREV")) {
						func_88(&Global_17290.f_4641[iVar2 /*16*/]);
						iVar2++;
					}
					if (Global_17290.f_4883[iVar1] == -1) {
						func_87(&Global_17290.f_4834[iVar1 /*4*/]);
					}
					else {
						graphics::begin_text_command_scaleform_string(&Global_17290.f_4834[iVar1 /*4*/]);
						if (iParam5) {
							ui::add_text_component_substring_time(iParam2, 70);
						}
						else {
							ui::add_text_component_integer(iParam2);
						}
						graphics::end_text_command_scaleform_string();
					}
					if (gameplay::is_pc_version()) {
						if (Global_17290.f_4896[iVar1] != 353 && gameplay::is_bit_set(Global_17290.f_4922, iVar1)) {
							graphics::_push_scaleform_movie_function_parameter_bool(1);
							graphics::_push_scaleform_movie_function_parameter_int(Global_17290.f_4896[iVar1]);
						}
						else {
							graphics::_push_scaleform_movie_function_parameter_bool(0);
							graphics::_push_scaleform_movie_function_parameter_int(353);
						}
					}
					graphics::_pop_scaleform_movie_function_void();
				}
				iVar1++;
			}
			if (gameplay::get_hash_key(&Global_2593974.f_16) != gameplay::get_hash_key("")) {
				graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				graphics::_push_scaleform_movie_function_parameter_int(Global_17290.f_4639);
				func_88(&Global_2593974);
				if (Global_2593974.f_20 == -1) {
					func_87(&Global_2593974.f_16);
				}
				else {
					graphics::begin_text_command_scaleform_string(&Global_2593974.f_16);
					if (iParam5) {
						ui::add_text_component_substring_time(iParam2, 70);
					}
					else {
						ui::add_text_component_integer(iParam2);
					}
					graphics::end_text_command_scaleform_string();
				}
				graphics::_pop_scaleform_movie_function_void();
			}
			graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			graphics::_push_scaleform_movie_function_parameter_int(0);
			graphics::_push_scaleform_movie_function_parameter_int(0);
			graphics::_push_scaleform_movie_function_parameter_int(0);
			graphics::_push_scaleform_movie_function_parameter_int(80);
			graphics::_pop_scaleform_movie_function_void();
			graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17290.f_4952) {
				graphics::_push_scaleform_movie_function_parameter_int(1);
			}
			else {
				graphics::_push_scaleform_movie_function_parameter_int(0);
			}
			graphics::_pop_scaleform_movie_function_void();
			Global_17290.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17290.f_4639) {
			if (Global_17290.f_4883[iVar1] != -1) {
				if (iParam2 > 0) {
					graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/],
															 "OVERRIDE_RESPAWN_TEXT");
					graphics::_push_scaleform_movie_function_parameter_int(iVar1);
					graphics::begin_text_command_scaleform_string(&Global_17290.f_4834[iVar1 /*4*/]);
					if (iParam5) {
						ui::add_text_component_substring_time(iParam2, 70);
					}
					else {
						ui::add_text_component_integer(iParam2);
					}
					graphics::end_text_command_scaleform_string();
					graphics::_pop_scaleform_movie_function_void();
				}
			}
			iVar1++;
		}
		if (Global_2593974.f_20 != -1) {
			if (iParam2 > 0) {
				graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				graphics::_push_scaleform_movie_function_parameter_int(iVar1);
				graphics::begin_text_command_scaleform_string(&Global_2593974.f_16);
				if (iParam5) {
					ui::add_text_component_substring_time(iParam2, 70);
				}
				else {
					ui::add_text_component_integer(iParam2);
				}
				graphics::end_text_command_scaleform_string();
				graphics::_pop_scaleform_movie_function_void();
			}
		}
		graphics::_set_screen_draw_position(76, 66);
		graphics::_screen_draw_position_ratio(0f, 0f, 0f, 0f);
		if (bParam6) {
			if (!Global_17290.f_7899) {
				ui::set_hud_component_position(15, 0f, -0.0375f);
				Global_17290.f_7899 = 1;
			}
		}
		else if (Global_17290.f_7899) {
			ui::reset_hud_component_values(15);
			Global_17290.f_7899 = 0;
		}
		graphics::_screen_draw_position_end();
		if (Global_17290.f_4925) {
			graphics::_set_screen_draw_position(82, 66);
			graphics::_screen_draw_position_ratio(0f, 0f, 0f, 0f);
			graphics::draw_scaleform_movie(Global_17290.f_5530[iVar0 /*10*/], Global_17290.f_4923, Global_17290.f_4924,
										   1f, 1f, 255, 255, 255, 255, 0);
			graphics::_screen_draw_position_end();
		}
		else {
			graphics::draw_scaleform_movie_fullscreen(Global_17290.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

// Position - 0x9BEF
void func_87(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x9C01
void func_88(char *sParam0) { graphics::_0xE83A3E3557A56640(sParam0); }

// Position - 0x9C0F
bool func_89(int iParam0, int iParam1) {
	bool bVar0;

	if (iParam0 == player::player_id()) {
		bVar0 = func_90(-1, 0) == 8;
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

// Position - 0x9C5A
int func_90(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1) {
		iVar1 = func_91();
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

// Position - 0x9C9B
var func_91() { return Global_1312735; }

// Position - 0x9CA7
bool func_92() {
	vector3 vVar0;

	if (Global_14443.f_1 > 3) {
		return true;
	}
	if (func_93()) {
		vVar0 = {0f, -500f, 0f};
		mobile::get_mobile_phone_position(&vVar0);
		if (Global_14388 == 0) {
			if (vVar0.y > -119f) {
				return true;
			}
			else {
				return false;
			}
		}
		else if (vVar0.y > -101f) {
			return true;
		}
		else {
			return false;
		}
	}
	return false;
}

// Position - 0x9D15
bool func_93() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) > 0) {
		return true;
	}
	return false;
}

// Position - 0x9D2F
void func_94(int iParam0, int iParam1, int *iParam2, int *iParam3, int *iParam4) {
	var uVar0;

	ui::get_hud_colour(1, iParam2, iParam3, iParam4, &uVar0);
	switch (iParam0) {
	case 28:
		*iParam2 = 194;
		*iParam3 = 80;
		*iParam4 = 80;
		break;

	case 15:
	case 4:
	case 16:
	case 26:
	case 27:
	case 35:
	case 34:
	case 47:
	case 46:
	case 42:
	case 36:
	case 37:
	case 50:
	case 39:
	case 40:
	case 38:
	case 43:
	case 44:
	case 45:
	case 49:
		if (iParam1) {
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 0;
		}
		break;
	}
}

// Position - 0x9DEF
void func_95(float fParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	ui::get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
	ui::set_text_font(0);
	ui::set_text_scale(0f, 0.35f);
	ui::set_text_leading(2);
	ui::set_text_colour(iVar0, iVar1, iVar2, iVar3);
	ui::set_text_wrap(fParam0, Global_17287 + Global_17289 - 0.0046875f);
	ui::set_text_centre(0);
	ui::set_text_dropshadow(0, 0, 0, 0, 0);
	ui::set_text_edge(0, 0, 0, 0, 0);
}

// Position - 0x9E4E
void func_96(float fParam0, float fParam1, char *sParam2, int iParam3, int iParam4) {
	ui::begin_text_command_display_text(sParam2);
	ui::add_text_component_integer(iParam3);
	ui::add_text_component_integer(iParam4);
	ui::end_text_command_display_text(fParam0, fParam1, 0);
}

// Position - 0x9E71
float func_97(char *sParam0, int iParam1, int iParam2) {
	if (!gameplay::is_string_null(sParam0)) {
		if (gameplay::get_hash_key(sParam0) == 0) {
			return 0f;
		}
	}
	else {
		return 0f;
	}
	func_98();
	ui::_begin_text_command_width(sParam0);
	ui::add_text_component_integer(iParam1);
	ui::add_text_component_integer(iParam2);
	return ui::_end_text_command_get_width(1);
}

// Position - 0x9EB3
void func_98() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	ui::get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17290.f_7874) {
		iVar0 = Global_17290.f_7870;
		iVar1 = Global_17290.f_7871;
		iVar2 = Global_17290.f_7872;
		iVar3 = Global_17290.f_7873;
	}
	ui::set_text_font(0);
	ui::set_text_scale(0f, 0.35f);
	ui::set_text_colour(iVar0, iVar1, iVar2, iVar3);
	ui::set_text_wrap(Global_17287 + 0.0046875f, Global_17287 + Global_17289 - 0.0046875f);
	ui::set_text_centre(0);
	ui::set_text_dropshadow(0, 0, 0, 0, 0);
	ui::set_text_edge(0, 0, 0, 0, 0);
}

// Position - 0x9F3D
void func_99(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6,
			 int iParam7) {
	graphics::draw_rect(fParam0 + fParam2 * 0.5f, fParam1 + fParam3 * 0.5f, fParam2, fParam3, iParam4, iParam5, iParam6,
						iParam7, 0);
}

// Position - 0x9F6C
var func_100(int iParam0, int iParam1) {
	char *sVar0[2];
	var uVar3;
	struct<13> Var19;

	if (!gameplay::is_string_null_or_empty(&Global_17290.f_6703[iParam0 /*16*/])) {
		if (gameplay::get_hash_key(&Global_17290.f_6703[iParam0 /*16*/]) == -1487683087) {
			Var19 = {func_102(player::player_id())};
			if (network::_0x5835D9CD92E83184(&Var19, &uVar3)) {
				return func_101(&uVar3);
			}
		}
		else {
			return func_101(&Global_17290.f_6703[iParam0 /*16*/]);
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

// Position - 0xA3A1
var func_101(var uParam0) { return uParam0; }

// Position - 0xA3AB
struct<13> func_102(int iParam0) {
	struct<13> Var0;

	network::network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

// Position - 0xA3C2
char *
func_103(int iParam0) {
	var uVar0;
	struct<13> Var16;

	if (!gameplay::is_string_null_or_empty(&Global_17290.f_5886[iParam0 /*16*/])) {
		if (gameplay::get_hash_key(&Global_17290.f_5886[iParam0 /*16*/]) == -1487683087) {
			Var16 = {func_102(player::player_id())};
			network::_0x5835D9CD92E83184(&Var16, &uVar0);
			return func_101(&uVar0);
		}
		else {
			return func_101(&Global_17290.f_5886[iParam0 /*16*/]);
		}
	}
	if (iParam0 == 48) {
		return "MPShopSale";
	}
	return "CommonMenu";
}

// Position - 0xA437
bool func_104() {
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

// Position - 0xA469
bool func_105(int iParam0, int iParam1, int iParam2, float fParam3, float *fParam4, int iParam5) {
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;

	StringCopy(&cVar0, func_103(iParam0), 64);
	StringCopy(&cVar16, func_100(iParam0, iParam1), 64);
	if (gameplay::get_hash_key(&cVar16) != 0) {
		fVar34 = 1f;
		if (iParam5) {
			graphics::_get_active_screen_resolution(&iVar32, &iVar33);
			fVar35 = graphics::_get_aspect_ratio(0);
			if (func_104()) {
				iVar32 = system::round(system::to_float(iVar33) * fVar35);
			}
			fVar36 = system::to_float(iVar32) / system::to_float(iVar33);
			fVar34 = fVar36 / fVar35;
			if (func_104()) {
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
		vVar37.x *= func_106(iParam0) / fVar34;
		vVar37.y *= func_106(iParam0) / fVar34;
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
		return true;
	}
	return false;
}

// Position - 0xA61A
float func_106(int iParam0) {
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

// Position - 0xA6B9
int func_107(int iParam0, bool bParam1) {
	if (Global_2433125.f_1385.f_688 != 0) {
		return 1;
	}
	if (!cam::is_screen_faded_in() || func_109(8, -1) && func_108() != 64 ||
		ui::get_pause_menu_state() != 0 && !bParam1 || streaming::is_player_switch_in_progress() && !iParam0 ||
		network::_0x2EAC52B4019E2782() || Global_69962 || Global_17290.f_7898 || ui::is_warning_message_active() ||
		Global_91543.f_1361) {
		return 0;
	}
	return 1;
}

// Position - 0xA756
int func_108() { return Global_1315168; }

// Position - 0xA762
var func_109(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0xA79D
void func_110(int iParam0) {
	if (iParam0 == -1) {
		return;
	}
	Global_68531[iParam0] = 0;
	Global_68531.f_69[iParam0] = 0;
}

// Position - 0xA7C2
void func_111(int iParam0, var *uParam1, vector3 vParam2, float fParam5, int iParam6) {
	if (func_60(&Global_68531.f_555[0 /*21*/], iParam0)) {
		if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 10)) {
			func_113(iParam0);
			func_112(uParam1, &Global_101700.f_31389.f_69[Global_68531.f_555[0 /*21*/].f_14 /*78*/]);
			if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 11)) {
				Global_101700.f_31389.f_1864[Global_68531.f_555[0 /*21*/].f_14 /*3*/] = {vParam2};
				Global_101700.f_31389.f_1934[Global_68531.f_555[0 /*21*/].f_14] = fParam5;
			}
			else {
				Global_101700.f_31389.f_1864[Global_68531.f_555[0 /*21*/].f_14 /*3*/] = {0f, 0f, 0f};
				Global_101700.f_31389.f_1934[Global_68531.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_399(iParam0, 1);
		}
	}
}

// Position - 0xA8C1
void func_112(var *uParam0, var *uParam1) {
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = {uParam0->f_1};
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = {uParam0->f_9};
	uParam1->f_59 = {uParam0->f_59};
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

// Position - 0xA98D
void func_113(int iParam0) {
	if (iParam0 == -1) {
		return;
	}
	if (func_60(&Global_68531.f_555[0 /*21*/], iParam0)) {
		if (entity::does_entity_exist(Global_68531.f_139[iParam0])) {
			entity::set_entity_as_mission_entity(Global_68531.f_139[iParam0], 1, 1);
			entity::set_vehicle_as_no_longer_needed(&Global_68531.f_139[iParam0]);
			Global_68531.f_139[iParam0] = 0;
		}
		if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 13)) {
			func_399(iParam0, 0);
		}
	}
}

// Position - 0xAA07
bool func_114(int iParam0) {
	switch (iParam0) {
	case joaat("marshall"): return true;
	}
	return false;
}

// Position - 0xAA24
void func_115(int iParam0, char *sParam1, int iParam2) {
	char *sVar0;

	sVar0 = controls::get_control_instructional_button(2, iParam0, 1);
	if (Global_17290.f_4639 >= 12) {
		StringCopy(&Global_2593974, sVar0, 64);
		StringCopy(&Global_2593974.f_16, sParam1, 16);
		Global_2593974.f_20 = iParam2;
		return;
		return;
	}
	gameplay::clear_bit(&Global_17290.f_4922, Global_17290.f_4639);
	StringCopy(&Global_17290.f_4641[Global_17290.f_4639 /*16*/], sVar0, 64);
	StringCopy(&Global_17290.f_4834[Global_17290.f_4639 /*4*/], sParam1, 16);
	Global_17290.f_4883[Global_17290.f_4639] = iParam2;
	Global_17290.f_4896[Global_17290.f_4639] = iParam0;
	Global_17290.f_4909[Global_17290.f_4639] = 32;
	Global_17290.f_4639++;
}

// Position - 0xAAD3
void func_116(int iParam0) {
	int iVar0;
	int iVar1;

	Global_17290.f_4639 = 0;
	Global_17290.f_4640 = 0;
	iVar0 = 0;
	while (iVar0 < 12) {
		StringCopy(&Global_17290.f_4834[iVar0 /*4*/], "", 16);
		Global_17290.f_4883[iVar0] = -1;
		Global_17290.f_4896[iVar0] = 353;
		Global_17290.f_4909[iVar0] = 32;
		iVar0++;
	}
	Global_17290.f_4922 = 0;
	StringCopy(&Global_2593974.f_16, "", 16);
	Global_2593974.f_20 = -1;
	if (gameplay::is_pc_version()) {
		if (!func_72(&iVar1, 0, iParam0)) {
			return;
		}
		graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		graphics::_push_scaleform_movie_function_parameter_bool(0);
		graphics::_pop_scaleform_movie_function_void();
	}
}

// Position - 0xAB7B
void func_117(char *sParam0, int iParam1, int iParam2) {
	int iVar0;

	StringCopy(&Global_17290.f_4562, sParam0, 16);
	Global_17290.f_4632 = 0;
	Global_17290.f_4633 = 0;
	Global_17290.f_4634 = 0;
	Global_17290.f_4635 = 0;
	Global_17290.f_4636 = iParam1;
	Global_17290.f_4637 = gameplay::get_game_timer();
	Global_17290.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4) {
		Global_17290.f_4566[iVar0] = 0;
		iVar0++;
	}
}

// Position - 0xABE0
bool func_118() {
	if (controls::_is_input_disabled(2)) {
		if (Global_2594050 > -1) {
			if (controls::is_control_just_released(2, 237)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0xAC07
int func_119(int iParam0, int iParam1, int iParam2) {
	if (!controls::_is_input_disabled(2)) {
		return 0;
	}
	if (ui::is_pause_menu_active() || ui::is_warning_message_active()) {
		return 0;
	}
	if (iParam2) {
		ui::_show_cursor_this_frame();
	}
	if (Global_2594050 == -6) {
		ui::_set_cursor_sprite(4);
		if (iParam0 && controls::is_control_pressed(2, 237)) {
			return 1;
		}
		else {
			Global_2594050 = -1;
			return 0;
		}
	}
	if (Global_2594050 > -1 || Global_2594050 == -3 || Global_2594050 == -2 || ui::_0x3D9ACB1EB139E702()) {
		ui::_set_cursor_sprite(1);
		return 0;
	}
	if (Global_2594050 == -1 && iParam0) {
		if (controls::is_control_pressed(2, 237)) {
			ui::_set_cursor_sprite(4);
			Global_2594050 = -6;
			return 1;
		}
		else {
			ui::_set_cursor_sprite(3);
			return 0;
		}
	}
	ui::_set_cursor_sprite(1);
	return 0;
}

// Position - 0xACE7
void func_120(int iParam0, int iParam1, int iParam2, int iParam3) {
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	fVar6 = 0.034722f / 2f;
	iVar13 = -1;
	if (!controls::_is_input_disabled(2)) {
		Global_2594050 = -1;
		return;
	}
	controls::_0x5B73C77D9EB66E24(1);
	fVar0 = Global_17287;
	fVar2 = fVar0 + Global_17289;
	fVar3 = Global_17290.f_5600;
	fVar1 = Global_17290.f_5600 - IntToFloat(Global_17290.f_5602) * 0.034722f;
	if (iParam2) {
		fVar3 += 0.034722f;
		fVar1 += 0.034722f;
	}
	if (Global_17290.f_5602 < 1) {
		fVar1 = Global_17290.f_5600 - 0.034722f;
	}
	graphics::_set_screen_draw_position(76, 84);
	graphics::_screen_draw_position_ratio(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	graphics::_0x6DD8F5AA635EB4B2(fVar0, fVar1, &fVar0, &fVar1);
	graphics::_0x6DD8F5AA635EB4B2(fVar2, fVar3, &fVar2, &fVar3);
	graphics::_screen_draw_position_end();
	func_122();
	if (Global_2594050 == -6) {
		return;
	}
	Global_2594050 = -1;
	fVar7 = Global_2594044;
	fVar8 = Global_2594045;
	if (Global_17290.f_5603 > Global_17290.f_5602) {
		if (Global_2594044 >= fVar0 && Global_2594044 <= fVar2 && Global_2594045 >= fVar3 &&
			Global_2594045 < fVar3 + fVar6) {
			Global_2594050 = -2;
			if (iParam3) {
				func_121(0);
			}
			return;
		}
		if (Global_2594044 >= fVar0 && Global_2594044 <= fVar2 && Global_2594045 >= fVar3 + fVar6 &&
			Global_2594045 < fVar3 + 0.034722f) {
			Global_2594050 = -3;
			if (iParam3) {
				func_121(0);
			}
			return;
		}
	}
	if (fVar7 >= fVar0 && fVar7 <= fVar2 && fVar8 >= fVar1 && fVar8 <= fVar3) {
		fVar9 = fVar8 - fVar1;
		iVar13 = system::floor(fVar9 / 0.034722f);
		if (Global_17290.f_5603 == -1) {
			Global_2594050 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = iVar11 / Global_17290.f_5602;
		iVar10 = 32 + iVar11 - iVar12 * iVar13;
		if (iParam3) {
			if (!iParam1 || iVar13 != 0) {
				graphics::_set_screen_draw_position(76, 84);
				graphics::_screen_draw_position_ratio(-0.05f, -0.05f, 0f, 0f);
				func_99(fVar4, fVar5 + IntToFloat(iVar13) * 0.034722f, Global_17289, 0.034722f - 0.0015f, 255, 255, 255,
						iVar10);
				graphics::_screen_draw_position_end();
			}
		}
		Global_2594050 = Global_17290.f_7520[iVar13];
		return;
	}
	if (!iParam0) {
		if (fVar7 < fVar2) {
			Global_2594050 = -4;
			return;
		}
		if (fVar8 > 0.9f) {
			Global_2594050 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < fVar3 + 0.25f) {
		Global_2594050 = -4;
		return;
	}
	Global_2594050 = -1;
}

// Position - 0xAF93
void func_121(int iParam0) {
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 0.034722f / 2f;
	if (iParam0) {
		iVar3 = 48;
	}
	else {
		iVar3 = 210;
	}
	fVar0 = Global_17287;
	fVar1 = Global_17290.f_5600;
	graphics::_set_screen_draw_position(76, 84);
	graphics::_screen_draw_position_ratio(-0.05f, -0.05f, 0f, 0f);
	if (Global_2594050 == -2) {
		func_99(fVar0, fVar1, Global_17289, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2594050 == -3) {
		func_99(fVar0, fVar1 + fVar2, Global_17289, fVar2, 255, 255, 255, iVar3);
	}
	graphics::_screen_draw_position_end();
}

// Position - 0xB01C
void func_122() {
	Global_2594046 = Global_2594044;
	Global_2594047 = Global_2594045;
	Global_2594044 = controls::get_disabled_control_normal(2, 239);
	Global_2594045 = controls::get_disabled_control_normal(2, 240);
	Global_2594048 = Global_2594044 - Global_2594046;
	Global_2594049 = Global_2594045 - Global_2594047;
}

// Position - 0xB064
void func_123(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	Global_17290.f_5606 = iParam0;
	Global_17290.f_5741 = iParam2;
	if (Global_17290.f_5606 < Global_17290.f_5605) {
		Global_17290.f_5605 = Global_17290.f_5606;
	}
	else if (Global_17290.f_5599 && Global_17290.f_5606 > Global_17290.f_5607 ||
			 !Global_17290.f_5599 && Global_17290.f_5606 >= Global_17290.f_5605 + Global_17290.f_5095) {
		iVar0 = Global_17290.f_5605;
		while (iVar0 <= Global_17290.f_5606) {
			if (iVar0 >= 0 && iVar0 < 127) {
				if (Global_17290.f_4959[iVar0] != 0) {
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17290.f_5095 && Global_17290.f_5605 < 128) {
			Global_17290.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17290.f_5605;
			while (iVar0 <= Global_17290.f_5606) {
				if (iVar0 >= 0 && iVar0 < 127) {
					if (Global_17290.f_4959[iVar0] != 0) {
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17290.f_5598 = 0;
	Global_17290.f_5599 = 0;
	if (iParam1) {
		StringCopy(&Global_17290.f_4562, "", 16);
		StringCopy(&Global_2593974.f_21, "", 16);
	}
}

// Position - 0xB1B4
void func_124(char *sParam0, int iParam1) {
	float fVar0;
	float fVar1;
	float *fVar2;
	float fVar3;

	if (Global_17290.f_5090 >= 256) {
		return;
	}
	if (Global_17290.f_5610 >= 4) {
		return;
	}
	if (Global_17290.f_5611 != 1) {
		return;
	}
	if (Global_17290.f_5610 >= Global_17290.f_5608) {
		return;
	}
	StringCopy(&Global_17290.f_73[Global_17290.f_5090 /*6*/], sParam0, 24);
	Global_17290.f_5090++;
	Global_17290.f_2124[Global_17290.f_5609 /*5*/][Global_17290.f_5610] = 1;
	Global_17290.f_5610++;
	if (Global_17290.f_5610 >= Global_17290.f_5608) {
		fVar0 = func_126();
		if (Global_17290.f_4945[Global_17290.f_5089] && Global_17290.f_5610 == Global_17290.f_5608) {
			func_105(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 += fVar1 * 2f;
		}
		if (fVar0 > Global_17290.f_4938[Global_17290.f_5089 - 1]) {
			Global_17290.f_4938[Global_17290.f_5089 - 1] = fVar0;
		}
	}
	if (iParam1) {
		if (Global_17290.f_5610 >= Global_17290.f_5608) {
			fVar3 = func_125();
			if (fVar3 > Global_17290.f_5612[Global_17290.f_5088]) {
				Global_17290.f_5612[Global_17290.f_5088] = fVar3;
			}
		}
	}
}

// Position - 0xB2F0
float func_125() {
	int iVar0;
	int iVar1;
	float fVar2;
	var *uVar3;
	float fVar4;

	iVar0 = 0;
	while (iVar0 < Global_17290.f_5610) {
		if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar0] == 4) {
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1) {
		if (Global_17290.f_4433[Global_17290.f_5094 - iVar1 + iVar0] != 0) {
			if (func_105(Global_17290.f_4433[Global_17290.f_5094 - iVar1 + iVar0], 1, 0, &uVar3, &fVar4, 0)) {
				if (fVar4 > fVar2) {
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > ui::_get_text_scale_height(0.35f, 0)) {
		return fVar2;
	}
	return ui::_get_text_scale_height(0.35f, 0);
}

// Position - 0xB3A3
float func_126() {
	float fVar0;
	float fVar1;
	float *fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar7 = 0;
	while (iVar7 < Global_17290.f_5610) {
		if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 1) {
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 8) {
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 2) {
			iVar3++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 3) {
			iVar4++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 4) {
			iVar5++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 5) {
			iVar6++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 6) {
			iVar6++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 7) {
			iVar6++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 9) {
			iVar6++;
		}
		iVar7++;
	}
	func_84(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (gameplay::get_hash_key(&Global_17290.f_73[Global_17290.f_5609 /*6*/]) != 0) {
		ui::_begin_text_command_width(&Global_17290.f_73[Global_17290.f_5609 /*6*/]);
	}
	iVar7 = 0;
	while (iVar7 < Global_17290.f_5610) {
		if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 1) {
			iVar8++;
			if (gameplay::get_hash_key(&Global_17290.f_73[Global_17290.f_5609 /*6*/]) != 0) {
				ui::add_text_component_substring_text_label(&Global_17290.f_73[Global_17290.f_5609 + iVar8 /*6*/]);
			}
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 8) {
			iVar8++;
			if (gameplay::get_hash_key(&Global_17290.f_73[Global_17290.f_5609 /*6*/]) != 0) {
				ui::add_text_component_substring_text_label(&Global_17290.f_73[Global_17290.f_5609 + iVar8 /*6*/]);
			}
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 2) {
			if (gameplay::get_hash_key(&Global_17290.f_73[Global_17290.f_5609 /*6*/]) != 0) {
				ui::add_text_component_integer(Global_17290.f_3918[Global_17290.f_5092 - iVar3 + iVar9]);
			}
			iVar9++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 3) {
			if (gameplay::get_hash_key(&Global_17290.f_73[Global_17290.f_5609 /*6*/]) != 0) {
				ui::add_text_component_float(Global_17290.f_4175[Global_17290.f_5093 - iVar4 + iVar10],
											 Global_17290.f_4304[Global_17290.f_5093 - iVar4 + iVar10]);
			}
			iVar10++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 5) {
			if (gameplay::get_hash_key(&Global_17290.f_73[Global_17290.f_5609 /*6*/]) != 0) {
				ui::add_text_component_substring_player_name(
					&Global_2453058[Global_17290.f_5091 - iVar6 + iVar11 /*16*/]);
			}
			iVar11++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 6) {
			if (gameplay::get_hash_key(&Global_17290.f_73[Global_17290.f_5609 /*6*/]) != 0) {
				ui::add_text_component_substring_text_label(
					&Global_2453058[Global_17290.f_5091 - iVar6 + iVar11 /*16*/]);
			}
			iVar11++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 7) {
			if (gameplay::get_hash_key(&Global_17290.f_73[Global_17290.f_5609 /*6*/]) != 0) {
				ui::add_text_component_substring_player_name(
					&Global_2453058[Global_17290.f_5091 - iVar6 + iVar11 /*16*/]);
			}
			iVar11++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 9) {
			if (gameplay::get_hash_key(&Global_17290.f_73[Global_17290.f_5609 /*6*/]) != 0) {
				ui::add_text_component_substring_player_name(
					&Global_2453058[Global_17290.f_5091 - iVar6 + iVar11 /*16*/]);
			}
			iVar11++;
		}
		iVar7++;
	}
	if (gameplay::get_hash_key(&Global_17290.f_73[Global_17290.f_5609 /*6*/]) != 0) {
		fVar0 = ui::_end_text_command_get_width(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5) {
		if (Global_17290.f_4433[Global_17290.f_5094 - iVar5 + iVar7] != 0) {
			func_105(Global_17290.f_4433[Global_17290.f_5094 - iVar5 + iVar7], 1, 0, &fVar1, &fVar2, 0);
			fVar0 += fVar1;
		}
		iVar7++;
	}
	return fVar0;
}

// Position - 0xB7EA
char *func_127(int iParam0) {
	if (iParam0 == -1) {
		return "";
	}
	if (iParam0 == 8) {
		return "";
	}
	if (func_128(iParam0, -1) == 0) {
		return "";
	}
	switch (iParam0) {
	case 0: return "ZTYPE";

	case 1: return "STINGER";

	case 2: return "JB700";

	case 3: return "CHEETAH";

	case 4: return "ENTITYXF";

	case 5: return "ADDER";

	case 6: return "MONROE";

	case 7: return "COGCABRI";

	case 9: return "DODO";

	case 12: return "CUBAN800";

	case 13: return "DUSTER";

	case 14: return "LUXOR";

	case 10: return "SHAMAL";

	case 11: return "STUNT";

	case 113: return "VESTRA";

	case 15: return "FROGGER";

	case 16: return "MAVERICK";

	case 17: return "RHINO";

	case 18: return "TITAN";

	case 19: return "CARGOBOB";

	case 20: return "BUZZARD";

	case 21: return "CRUSADER";

	case 22: return "BARRACKS";

	case 23: return "MARINA";

	case 24: return "MARQUIS";

	case 25: return "JETMAX";

	case 26: return "SPEEDER";

	case 27: return "SQUALO";

	case 28: return "SUNTRAP";

	case 29: return "TROPIC";

	case 30: return "SEASHARK";

	case 32: return "SUNTRAP";

	case 31: return "SUBMERSIBLE";

	case 258: return "TUG";

	case 33: return "BMX";

	case 34: return "SCORCHER";

	case 35: return "TRIBIKE";

	case 36: return "TRIBIKE2";

	case 37: return "TRIBIKE3";

	case 38: return "CRUISER";

	case 39: return "SCHWARZE";

	case 40: return "ZION";

	case 41: return "GAUNTLET";

	case 42: return "VIGERO";

	case 43: return "ISSI2";

	case 44: return "INFERNUS";

	case 45: return "SURANO";

	case 46: return "VACCA";

	case 47: return "NINEF";

	case 48: return "COMET2";

	case 49: return "BANSHEE";

	case 50: return "FELTZER";

	case 51: return "BFINJECT";

	case 52: return "SANDKING";

	case 53: return "FUGITIVE";

	case 54: return "DILETTAN";

	case 55: return "SUPERD";

	case 56: return "EXEMPLAR";

	case 57: return "BALLER2";

	case 58: return "CAVCADE";

	case 59: return "ROCOTO";

	case 60: return "FELON";

	case 61: return "ORACLE";

	case 62: return "BATI";

	case 63: return "AKUMA";

	case 64: return "RUFFIAN";

	case 65: return "VADER";

	case 66: return "BLAZER";

	case 67: return "PCJ";

	case 68: return "SANCHEZ";

	case 69: return "FAGGIO";

	default:
	}
	switch (iParam0) {
	case 70: return "BULLET";

	case 71: return "CARBONIZ";

	case 72: return "COQUETTE";

	case 73: return "NINEF2";

	case 74: return "RAPIDGT";

	case 75: return "RAPIDGT";

	case 76: return "STINGERG";

	case 77: return "VOLTIC";

	case 78: return "ANNIHL";

	case 79: return "MAMMATUS";

	case 80: return "VELUM";

	case 81: return "DUMP";

	case 82: return "AIRBUS";

	case 83: return "BUS";

	case 84: return "COACH";

	case 85: return "JOURNEY";

	case 86: return "MULE";

	case 87: return "RENTBUS";

	case 88: return "STRETCH";

	case 89: return "BISON";

	case 90: return "DOUBLE";

	case 91: return "FELON2";

	case 92: return "HEXER";

	case 93: return "ZION2";

	case 94: return "BATI2";

	case 95: return "ELEGY2";

	case 96: return "KHAMEL";

	case 97: return "HOTKNIFE";

	case 98: return "CARBON";

	case 99: return "BIFTA";

	case 100: return "KALAHARI";

	case 101: return "PARADISE";

	case 102: return "SPEEDER";

	case 103: return "BODHI2";

	case 104: return "DUNE";

	case 105: return "REBEL";

	case 106: return "SADLER";

	case 107: return "SANCHEZ2";

	case 108: return "SANDKIN2";

	case 109: return "ROOSEVELT";

	case 111: return "JESTER";

	case 114: return "MASSACRO";

	case 112: return "TURISMOR";

	case 115: return "ZENTORNO";

	case 116: return "HUNTLEY";

	case 110: return "ALPHA";

	case 117: return "COQUETTE_TLESS";

	case 118: return "BANSHEE_TLESS";

	case 119: return "STINGER_TLESS";

	case 120: return "VOLTIC_HTOP";

	case 121: return "THRUST";

	case 128: return "ASEA";

	case 129: return "ASTROPE";

	case 130: return "BOBCATXL";

	case 131: return "CAVCADE";

	case 132: return "GRANGER";

	case 133: return "INGOT";

	case 134: return "INTRUDER";

	case 135: return "MINIVAN";

	case 136: return "PREMIER";

	case 137: return "RADI";

	case 138: return "RANCHERX";

	case 139: return "RLOADER";

	case 140: return "STANIER";

	case 141: return "STRATUM";

	case 142: return "WASHINGT";

	case 122: return "DOMINATO";

	case 123: return "F620";

	case 124: return "FUSILADE";

	case 125: return "PENUMBRA";

	case 126: return "SENTINEL";

	case 127: return "SENTINEL2";

	case 143: return "BLADE";

	case 144: return "WARRENER";

	case 145: return "GLENDALE";

	case 146: return "RHAPSODY";

	case 147: return "PANTO";

	case 148: return "DUBSTA3";

	case 149: return "PIGALLE";

	case 150: return "PICADOR";

	case 151: return "REGINA";

	case 152: return "SURFER";

	case 153: return "YOUGA";

	case 154: return "BLAZER3";

	case 155: return "REBEL2";

	case 156: return "PRIMO";

	case 157: return "BUFFALO";

	case 158: return "BUFFALO2";

	case 159: return "TAILGATER";

	case 161: return "SOVEREIGN";

	case 160: return "MONSTER";

	case 162: return "MILJET";

	case 163: return "BESRA";

	case 164: return "SWIFT";

	case 165: return "COQUETTE2";

	case 166: return "COQUETTE2_TLESS";

	case 167: return "INNOVATION";

	case 168: return "HAKUCHOU";

	case 169: return "FURORE";

	case 170: return "KALAHARI_TLESS";

	case 187: return "VALKYRIE";

	case 177: return "HYDRA";

	case 185: return "SAVAGE";

	case 174: return "ENDURO";

	case 171: return "BOXVILLE4";

	case 172: return "CASCO";

	case 173: return "DINGHY3";

	case 175: return "GBURRITO2";

	case 176: return "GUARDIAN";

	case 178: return "INSURGENT";

	case 179: return "INSURGENT2";

	case 180: return "KURUMA";

	case 181: return "KURUMA2";

	case 182: return "LECTRO";

	case 183: return "MULE3";

	case 184: return "PBUS";

	case 186: return "TECHNICAL";

	case 188: return "VELUM2";

	case 189: return "GRESLEY";

	case 190: return "JACKAL";

	case 191: return "LANDSTALKER";

	case 192: return "MESA3";

	case 193: return "NEMESIS";

	case 194: return "ORACLE1";

	case 195: return "RUMPO";

	case 196: return "SCHAFTER2";

	case 197: return "SEMINOLE";

	case 198: return "SURGE";

	case 199: return "DODO";

	case 200: return "MARSHALL";

	case 201: return "SUBMERS2";

	case 202: return "BLISTA2";

	case 203: return "STALION";

	case 204: return "DUKES";

	case 205: return "DUKES2";

	case 206: return "STALION2";

	case 207: return "DOMINATOR2";

	case 208: return "GAUNTLET2";

	case 209: return "BUFFALO3";

	case 210: return "SLAMVAN";

	case 211: return "RLOADER2";

	case 212: return "JESTER2";

	case 213: return "MASSACRO2";

	case 214: return "FELTZER3";

	case 215: return "LUXOR2";

	case 216: return "OSIRIS";

	case 217: return "SWIFT2";

	case 218: return "VIRGO";

	case 219: return "WINDSOR";

	case 220: return "BRAWLER";

	case 221: return "CHINO";

	case 222: return "COQUETTE3";

	case 223: return "T20";

	case 224: return "TORO";

	case 225: return "VINDICATOR";

	case 229: return "PRIMO";

	case 228: return "MOONBEAM";

	case 227: return "FACTION";

	case 226: return "BUCCANEE";

	case 230: return "VOODOO";

	case 231: return "BTYPE2";

	case 232: return "LURCHER";

	case 251: return "VIRGO3";

	case 250: return "TORNADO";

	case 249: return "SABREGT";

	case 252: return "FACTION";

	case 233: return "BALLER3";

	case 234: return "BALLER4";

	case 235: return "COG55";

	case 236: return "COGNOSC";

	case 237: return "LIMO2";

	case 238: return "MAMBA";

	case 239: return "NITESHAD";

	case 240: return "SCHAFTER3";

	case 241: return "SCHAFTER4";

	case 242: return "VERLIER";

	case 243: return "SVOLITO";

	case 244: return "SVOLITO2";

	case 245: return "BIG_YACHT";

	case 246: return "TAMPA";

	case 247: return "SULTAN";

	case 49: return "BANSHEE";

	case 248: return "ROOSEVELT2";

	default:
	}
	switch (iParam0) {
	case 253: return "VOLATUS";

	case 254: return "CARGOBOB2";

	case 255: return "RUMPO3";

	case 256: return "BRICKADE";

	case 257: return "NIMBUS";

	case 259: return "WINDSOR2";

	case 260: return "PROTOTIPO";

	case 261: return "FMJ";

	case 262: return "BESTIAGTS";

	case 263: return "XLS";

	case 264: return "SEVEN70";

	case 265: return "PFISTER811";

	case 266: return "REAPER";

	case 267: return "LE7B";

	case 268: return "OMNIS";

	case 269: return "TROPOS";

	case 270: return "BRIOSO";

	case 271: return "TROPHY";

	case 272: return "TROPHY2";

	case 273: return "CONTENDER";

	case 274: return "CLIFFHANGER";

	case 275: return "BF400";

	case 279: return "TYRUS";

	case 280: return "LYNX";

	case 281: return "SHEAVA";

	case 276: return "RALLYTRUCK";

	case 277: return "TAMPA2";

	case 278: return "GARGOYLE";

	case 282: return "BAGGER";

	case 283: return "ESSKEY";

	case 284: return "NIGHTBLADE";

	case 285: return "DEFILER";

	case 286: return "AVARUS";

	case 287: return "ZOMBIEA";

	case 288: return "ZOMBIEB";

	case 289: return "CHIMERA";

	case 290: return "DAEMON2";

	case 291: return "RATBIKE";

	case 292: return "SHOTARO";

	case 293: return "RAPTOR";

	case 294: return "HAKUCHOU2";

	case 296: return "BLAZER4";

	case 297: return "SANCTUS";

	case 295: return "VORTEX";

	case 298: return "MANCHEZ";

	case 299: return "TORNADO6";

	case 300: return "YOUGA2";

	case 301: return "WOLFSBANE";

	case 302: return "FAGGIO3";

	case 303: return "FAGGION";

	case 304: return "DUNE5";

	case 305: return "PHANTOM2";

	case 306: return "TECHNICAL2";

	case 307: return "BLAZER5";

	case 308: return "BOXVILLE5";

	case 309: return "WASTLNDR";

	case 310: return "RUINER2";

	case 311: return "VOLTIC2";

	case 312: return "PENETRATOR";

	case 313: return "TEMPESTA";

	case 314: return "ITALIGTB";

	case 315: return "NERO";

	case 316: return "DIABLOUS";

	case 317: return "FCR";

	case 318: return "SPECTER";

	case 319: return "GP1";

	case 320: return "INFERNUS2";

	case 321: return "RUSTON";

	case 322: return "TURISMO2";

	default:
	}
	return "";
}

// Position - 0xCCDE
int func_128(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: return joaat("ztype");

	case 1: return joaat("stinger");

	case 2: return joaat("jb700");

	case 3: return joaat("cheetah");

	case 4: return joaat("entityxf");

	case 5: return joaat("adder");

	case 6: return joaat("monroe");

	case 7: return joaat("cogcabrio");

	case 10: return joaat("shamal");

	case 11: return joaat("stunt");

	case 12: return joaat("cuban800");

	case 13: return joaat("duster");

	case 14: return joaat("luxor");

	case 15: return joaat("frogger");

	case 16: return joaat("maverick");

	case 17: return joaat("rhino");

	case 18: return joaat("titan");

	case 19: return joaat("cargobob");

	case 20: return joaat("buzzard");

	case 21: return joaat("crusader");

	case 22: return joaat("barracks");

	case 24: return joaat("marquis");

	case 25: return joaat("jetmax");

	case 27: return joaat("squalo");

	case 29: return joaat("tropic");

	case 30: return joaat("seashark");

	case 31: return joaat("submersible");

	case 32: return joaat("suntrap");

	case 258: return joaat("tug");

	case 33: return joaat("bmx");

	case 34: return joaat("scorcher");

	case 35: return joaat("tribike");

	case 36: return joaat("tribike2");

	case 37: return joaat("tribike3");

	case 38: return joaat("cruiser");

	case 39: return joaat("schwarzer");

	case 40: return joaat("zion");

	case 41: return joaat("gauntlet");

	case 42: return joaat("vigero");

	case 43: return joaat("issi2");

	case 44: return joaat("infernus");

	case 45: return joaat("surano");

	case 46: return joaat("vacca");

	case 47: return joaat("ninef");

	case 48: return joaat("comet2");

	case 49: return joaat("banshee");

	case 50: return joaat("feltzer2");

	case 51: return joaat("bfinjection");

	case 52: return joaat("sandking");

	case 53: return joaat("fugitive");

	case 54: return joaat("dilettante");

	case 55: return joaat("superd");

	case 56: return joaat("exemplar");

	case 57: return joaat("baller2");

	case 58: return joaat("cavalcade");

	case 59: return joaat("rocoto");

	case 60: return joaat("felon");

	case 61: return joaat("oracle2");

	case 62: return joaat("bati");

	case 63: return joaat("akuma");

	case 64: return joaat("ruffian");

	case 65: return joaat("vader");

	case 66: return joaat("blazer");

	case 67: return joaat("pcj");

	case 68: return joaat("sanchez");

	case 69: return joaat("faggio2");

	case 70: return joaat("bullet");

	case 71: return joaat("carbonizzare");

	case 72: return joaat("coquette");

	case 73: return joaat("ninef2");

	case 74: return joaat("rapidgt");

	case 75: return joaat("rapidgt2");

	case 76: return joaat("stingergt");

	case 77: return joaat("voltic");

	case 78: return joaat("annihilator");

	case 79: return joaat("mammatus");

	case 80: return joaat("velum");

	case 81: return joaat("dump");

	case 82: return joaat("airbus");

	case 83: return joaat("bus");

	case 84: return joaat("coach");

	case 85: return joaat("journey");

	case 86: return joaat("mule");

	case 87: return joaat("rentalbus");

	case 88: return joaat("stretch");

	case 89: return joaat("bison");

	case 90: return joaat("double");

	case 91: return joaat("felon2");

	case 92: return joaat("hexer");

	case 93: return joaat("zion2");

	case 94: return joaat("bati2");

	case 95: return joaat("elegy2");

	case 96: return joaat("khamelion");

	case 97: return joaat("hotknife");

	case 98: return joaat("carbonrs");

	default:
	}
	switch (iParam0) {
	case 99: return joaat("bifta");

	case 100: return joaat("kalahari");

	case 101: return joaat("paradise");

	case 102: return joaat("speeder");

	case 103: return joaat("bodhi2");

	case 104: return joaat("dune");

	case 105: return joaat("rebel");

	case 106: return joaat("sadler");

	case 107: return joaat("sanchez2");

	case 108: return joaat("sandking2");

	case 109: return joaat("btype");

	case 111: return joaat("jester");

	case 114: return joaat("massacro");

	case 112: return joaat("turismor");

	case 115: return joaat("zentorno");

	case 116: return joaat("huntley");

	case 110: return joaat("alpha");

	case 113: return joaat("vestra");

	case 117: return joaat("coquette");

	case 118: return joaat("banshee");

	case 119: return joaat("stinger");

	case 120: return joaat("voltic");

	case 121: return joaat("thrust");

	case 128: return joaat("asea");

	case 129: return joaat("asterope");

	case 130: return joaat("bobcatxl");

	case 131: return joaat("cavalcade2");

	case 132: return joaat("granger");

	case 133: return joaat("ingot");

	case 134: return joaat("intruder");

	case 135: return joaat("minivan");

	case 136: return joaat("premier");

	case 137: return joaat("radi");

	case 138: return joaat("rancherxl");

	case 139: return joaat("ratloader");

	case 140: return joaat("stanier");

	case 141: return joaat("stratum");

	case 142: return joaat("washington");

	case 122: return joaat("dominator");

	case 123: return joaat("f620");

	case 124: return joaat("fusilade");

	case 125: return joaat("penumbra");

	case 126: return joaat("sentinel");

	case 127: return joaat("sentinel2");

	default:
	}
	switch (iParam0) {
	case 143: return joaat("blade");

	case 144: return joaat("warrener");

	case 145: return joaat("glendale");

	case 146: return joaat("rhapsody");

	case 147: return joaat("panto");

	case 148: return joaat("dubsta3");

	case 149: return joaat("pigalle");

	case 150: return joaat("picador");

	case 151: return joaat("regina");

	case 152: return joaat("surfer");

	case 153: return joaat("youga");

	case 154: return joaat("blazer3");

	case 155: return joaat("rebel2");

	case 156: return joaat("primo");

	case 157: return joaat("buffalo");

	case 158: return joaat("buffalo2");

	case 159: return joaat("tailgater");

	case 160: return joaat("monster");

	case 161: return joaat("sovereign");

	case 162: return joaat("miljet");

	case 163: return joaat("besra");

	case 164: return joaat("swift");

	case 165: return joaat("coquette2");

	case 166: return joaat("coquette2");

	case 167: return joaat("innovation");

	case 168: return joaat("hakuchou");

	case 169: return joaat("furoregt");

	case 170: return joaat("kalahari");

	case 187: return joaat("valkyrie");

	case 177: return joaat("hydra");

	case 185: return joaat("savage");

	case 174: return joaat("enduro");

	case 171: return joaat("boxville4");

	case 172: return joaat("casco");

	case 173: return joaat("dinghy3");

	case 175: return joaat("gburrito2");

	case 176: return joaat("guardian");

	case 178: return joaat("insurgent");

	case 179: return joaat("insurgent2");

	case 183: return joaat("mule3");

	case 180: return joaat("kuruma");

	case 181: return joaat("kuruma2");

	case 182: return joaat("lectro");

	case 184: return joaat("pbus");

	case 186: return joaat("technical");

	case 188: return joaat("velum2");

	case 189: return joaat("gresley");

	case 190: return joaat("jackal");

	case 191: return joaat("landstalker");

	case 192: return joaat("mesa3");

	case 193: return joaat("nemesis");

	case 194: return joaat("oracle");

	case 195: return joaat("rumpo");

	case 196: return joaat("schafter2");

	case 197: return joaat("seminole");

	case 198: return joaat("surge");

	case 199: return joaat("dodo");

	case 200: return joaat("marshall");

	case 201: return joaat("submersible2");

	case 202: return joaat("blista2");

	case 203: return joaat("stalion");

	case 204: return joaat("dukes");

	case 205: return joaat("dukes2");

	case 206: return joaat("stalion2");

	case 207: return joaat("dominator2");

	case 208: return joaat("gauntlet2");

	case 209: return joaat("buffalo3");

	case 210: return joaat("slamvan");

	case 211: return joaat("ratloader2");

	case 212: return joaat("jester2");

	case 213: return joaat("massacro2");

	case 214: return joaat("feltzer3");

	case 215: return joaat("luxor2");

	case 216: return joaat("osiris");

	case 217: return joaat("swift2");

	case 218: return joaat("virgo");

	case 219: return joaat("windsor");

	case 220: return joaat("brawler");

	case 221: return joaat("chino");

	case 222: return joaat("coquette3");

	case 223: return joaat("t20");

	case 224: return joaat("toro");

	case 225: return joaat("vindicator");

	case 229: return joaat("primo");

	case 228: return joaat("moonbeam");

	case 227: return joaat("faction");

	case 226: return joaat("buccaneer");

	case 230: return joaat("voodoo2");

	case 263:
		if (iParam1 == 0) {
			return joaat("xls");
		}
		else if (iParam1 == 1) {
			return joaat("xls2");
		}
		else {
			return joaat("xls");
		}
		break;

	case 264: return joaat("seven70");

	case 259: return joaat("windsor2");

	case 260: return joaat("prototipo");

	case 261: return joaat("fmj");

	case 262: return joaat("bestiagts");

	case 265: return joaat("pfister811");

	case 266: return joaat("reaper");

	case 231: return joaat("btype2");

	case 232: return joaat("lurcher");

	case 233:
		if (iParam1 == 0) {
			return joaat("baller3");
		}
		else if (iParam1 == 1) {
			return joaat("baller5");
		}
		else {
			return joaat("baller3");
		}
		break;

	case 234:
		if (iParam1 == 0) {
			return joaat("baller4");
		}
		else if (iParam1 == 1) {
			return joaat("baller6");
		}
		else {
			return joaat("baller4");
		}
		break;

	case 235:
		if (iParam1 == 0) {
			return joaat("cog55");
		}
		else if (iParam1 == 1) {
			return joaat("cog552");
		}
		else {
			return joaat("cog55");
		}
		break;

	case 236:
		if (iParam1 == 0) {
			return joaat("cognoscenti");
		}
		else if (iParam1 == 1) {
			return joaat("cognoscenti2");
		}
		else {
			return joaat("cognoscenti");
		}
		break;

	case 237: return joaat("limo2");

	case 238: return joaat("mamba");

	case 239: return joaat("nightshade");

	case 240:
		if (iParam1 == 0) {
			return joaat("schafter3");
		}
		else if (iParam1 == 1) {
			return joaat("schafter5");
		}
		else {
			return joaat("schafter3");
		}
		break;

	case 241:
		if (iParam1 == 0) {
			return joaat("schafter4");
		}
		else if (iParam1 == 1) {
			return joaat("schafter6");
		}
		else {
			return joaat("schafter4");
		}
		break;

	case 242: return joaat("verlierer2");

	case 243: return joaat("supervolito");

	case 244: return joaat("supervolito2");

	case 245: return Global_68114;

	case 251: return joaat("virgo3");

	case 250: return joaat("tornado");

	case 249: return joaat("sabregt");

	case 252: return joaat("faction");

	case 246: return joaat("tampa");

	case 247: return joaat("sultan");

	case 49: return joaat("banshee");

	case 248: return joaat("btype3");

	case 253: return joaat("volatus");

	case 254: return joaat("cargobob2");

	case 255: return joaat("rumpo3");

	case 256: return joaat("brickade");

	case 257: return joaat("nimbus");

	case 267: return joaat("le7b");

	case 268: return joaat("omnis");

	case 269: return joaat("tropos");

	case 270: return joaat("brioso");

	case 271: return joaat("trophytruck");

	case 272: return joaat("trophytruck2");

	case 273: return joaat("contender");

	case 274: return joaat("cliffhanger");

	case 275: return joaat("bf400");

	case 279: return joaat("tyrus");

	case 280: return joaat("lynx");

	case 281: return joaat("sheava");

	case 276: return joaat("rallytruck");

	case 277: return joaat("tampa2");

	case 278: return joaat("gargoyle");

	case 282: return joaat("bagger");

	case 283: return joaat("esskey");

	case 284: return joaat("nightblade");

	case 285: return joaat("defiler");

	case 286: return joaat("avarus");

	case 287: return joaat("zombiea");

	case 288: return joaat("zombieb");

	case 289: return joaat("chimera");

	case 290: return joaat("daemon2");

	case 291: return joaat("ratbike");

	case 292: return joaat("shotaro");

	case 293: return joaat("raptor");

	case 294: return joaat("hakuchou2");

	case 296: return joaat("blazer4");

	case 297: return joaat("sanctus");

	case 295: return joaat("vortex");

	case 298: return joaat("manchez");

	case 299: return joaat("tornado6");

	case 300: return joaat("youga2");

	case 301: return joaat("wolfsbane");

	case 302: return joaat("faggio3");

	case 303: return joaat("faggio");

	case 304: return joaat("dune5");

	case 305: return joaat("phantom2");

	case 306: return joaat("technical2");

	case 307: return joaat("blazer5");

	case 308: return joaat("boxville5");

	case 309: return joaat("wastelander");

	case 310: return joaat("ruiner2");

	case 311: return joaat("voltic2");

	case 312: return joaat("penetrator");

	case 313: return joaat("tempesta");

	case 314: return joaat("italigtb");

	case 315: return joaat("nero");

	case 316: return joaat("diablous");

	case 317: return joaat("fcr");

	case 318: return joaat("specter");

	case 319: return joaat("gp1");

	case 320: return joaat("infernus2");

	case 321: return joaat("ruston");

	case 322: return joaat("turismo2");
	}
	return 0;
}

// Position - 0xDF6D
void func_129(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float *fVar4;

	if (Global_17290.f_5088 > iParam0) {
		return;
	}
	if (Global_17290.f_5088 >= 128) {
		return;
	}
	if (Global_17290.f_5094 >= 128) {
		return;
	}
	if (Global_17290.f_5610 < Global_17290.f_5608) {
		return;
	}
	if (Global_17290.f_5088 != iParam0) {
		Global_17290.f_5088 = iParam0;
		Global_17290.f_5089 = 0;
	}
	iVar0 = Global_17290.f_4926[Global_17290.f_5089];
	if (iVar0 != 4) {
		while (Global_17290.f_5089 < 4 && iVar0 != 4) {
			Global_17290.f_5089++;
			iVar0 = Global_17290.f_4926[Global_17290.f_5089];
		}
		if (iVar0 != 4) {
			return;
		}
	}
	Global_17290.f_4433[Global_17290.f_5094] = iParam1;
	Global_17290.f_5094++;
	if (iParam1 != 0) {
		func_105(iParam1, 1, 0, &fVar1, &fVar2, 0);
		if (Global_17290.f_4945[Global_17290.f_5089]) {
			func_105(26, 1, 0, &fVar3, &fVar4, 0);
			fVar1 += fVar3 * 2f;
		}
		if (fVar1 > Global_17290.f_4938[Global_17290.f_5089]) {
			Global_17290.f_4938[Global_17290.f_5089] = fVar1;
		}
		if (iParam2) {
			if (fVar2 > Global_17290.f_5612[iParam0]) {
				Global_17290.f_5612[iParam0] = fVar2;
			}
		}
	}
	gameplay::set_bit(&Global_17290.f_4959[iParam0], Global_17290.f_5089);
	Global_17290.f_5089++;
	Global_17290.f_5611 = 4;
}

// Position - 0xE0E7
void func_130(int iParam0, char *sParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;
	float fVar1;
	float fVar2;
	float *fVar3;
	float fVar4;

	if (Global_17290.f_5088 > iParam0) {
		return;
	}
	if (Global_17290.f_5088 >= 128) {
		return;
	}
	if (Global_17290.f_5090 >= 256) {
		return;
	}
	if (Global_17290.f_5610 < Global_17290.f_5608) {
		return;
	}
	if (Global_17290.f_5088 != iParam0) {
		Global_17290.f_5088 = iParam0;
		Global_17290.f_5089 = 0;
	}
	iVar0 = Global_17290.f_4926[Global_17290.f_5089];
	if (iVar0 != 1) {
		while (Global_17290.f_5089 < 4 && iVar0 != 1) {
			Global_17290.f_5089++;
			iVar0 = Global_17290.f_4926[Global_17290.f_5089];
		}
		if (iVar0 != 1) {
			return;
		}
	}
	StringCopy(&Global_17290.f_73[Global_17290.f_5090 /*6*/], sParam1, 24);
	if (!gameplay::is_string_null_or_empty(sParam1) && !ui::does_text_label_exist(sParam1)) {
	}
	Global_17290.f_1610[Global_17290.f_5090] = iParam3;
	Global_17290.f_1867[Global_17290.f_5090] = iParam4;
	Global_17290.f_5090++;
	if (!iParam3) {
		func_133(Global_17290.f_5088, 1);
	}
	else {
		func_133(Global_17290.f_5088, 0);
	}
	if (iParam2 == 0) {
		fVar1 = func_132(&Global_17290.f_73[Global_17290.f_5090 /*6*/]);
		if (Global_17290.f_4945[Global_17290.f_5089]) {
			func_105(26, 1, 0, &fVar2, &fVar3, 0);
			fVar1 += fVar2 * 2f;
		}
		if (fVar1 > Global_17290.f_4938[Global_17290.f_5089]) {
			Global_17290.f_4938[Global_17290.f_5089] = fVar1;
		}
	}
	if (iParam5) {
		if (iParam2 == 0) {
			fVar4 = func_131(&Global_17290.f_73[Global_17290.f_5090 /*6*/]);
			if (fVar4 > Global_17290.f_5612[iParam0]) {
				Global_17290.f_5612[iParam0] = fVar4;
			}
		}
	}
	gameplay::set_bit(&Global_17290.f_4959[iParam0], Global_17290.f_5089);
	Global_17290.f_5089++;
	Global_17290.f_5611 = 1;
	Global_17290.f_5609 = Global_17290.f_5090 - 1;
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = iParam2;
}

// Position - 0xE2F3
var func_131(char *sParam0) {
	if (!ui::does_text_label_exist(sParam0)) {
	}
	return ui::_get_text_scale_height(0.35f, 0);
}

// Position - 0xE30F
float func_132(char *sParam0) {
	if (!gameplay::is_string_null(sParam0)) {
		if (gameplay::get_hash_key(sParam0) == 0) {
			return 0f;
		}
	}
	else {
		return 0f;
	}
	func_84(0, 1, 0, 0, 0, 0, 0);
	ui::_begin_text_command_width(sParam0);
	return ui::_end_text_command_get_width(1);
}

// Position - 0xE34C
void func_133(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = system::floor(system::to_float(iParam0) / 32f);
	if (iParam1) {
		gameplay::set_bit(&Global_17290.f_5881[iVar0], iParam0 - iVar0 * 32);
	}
	else {
		gameplay::clear_bit(&Global_17290.f_5881[iVar0], iParam0 - iVar0 * 32);
	}
}

// Position - 0xE398
void func_134(int iParam0, var *uParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int *iVar1;
	int *iVar2;
	int *iVar3;
	int *iVar4;
	int *iVar5;
	int *iVar6;
	int *iVar7;
	int *iVar8;
	int *iVar9;
	int *iVar10;
	int *iVar11;
	int *iVar12;
	int iVar13;
	char *sVar14;
	int iVar18;
	int *iVar19;
	int *iVar20;
	int iVar21;
	char *sVar22;
	int iVar26;
	int *iVar27;
	int *iVar28;

	uParam1->f_66 = func_128(iParam0, iParam4);
	if (uParam1->f_66 == 0) {
		if (iParam2) {
		}
		return;
	}
	if (iParam3 == 2 && uParam1->f_66 == joaat("frogger")) {
		uParam1->f_66 = joaat("frogger2");
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 0;
		uParam1->f_8 = 0;
		uParam1->f_67 = 1;
		return;
	}
	uParam1->f_77 = 0;
	func_162(iParam0, &uParam1->f_77);
	uParam1->f_9[16] = 0;
	if (iParam0 == 181 || iParam0 == 178 || iParam0 == 179) {
		uParam1->f_9[16] = 4;
	}
	else if (func_161(iParam0)) {
		if (Global_68512) {
			uParam1->f_9[16] = 4;
		}
	}
	uParam1->f_9[23] = 0;
	if (iParam0 == 218) {
		uParam1->f_9[23] = 7;
	}
	uParam1->f_9[48] = 0;
	uParam1->f_98 = 0;
	if (iParam0 == 251) {
		uParam1->f_98 = 4;
	}
	uParam1->f_65 = 0;
	if (iParam0 == 263) {
		if (Global_68512) {
			uParam1->f_65 = 1;
		}
	}
	uParam1->f_9[0] = 0;
	if (iParam0 == 320 || iParam0 == 321 || iParam0 == 322) {
		uParam1->f_9[0] = 1;
	}
	if (iParam2) {
		iVar0 = Global_68511;
	}
	else if (iParam3 == 0) {
		iVar0 = Global_101700.f_24141.f_313[iParam0];
	}
	else if (iParam3 == 1) {
		iVar0 = Global_101700.f_24141.f_626[iParam0];
	}
	else if (iParam3 == 2) {
		iVar0 = Global_101700.f_24141.f_939[iParam0];
	}
	uParam1->f_5 = 0;
	uParam1->f_6 = 0;
	uParam1->f_7 = 0;
	uParam1->f_8 = 156;
	uParam1->f_67 = -1;
	if (iParam0 == 200) {
		switch (iVar0) {
		case 1:
			func_141(func_142(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_140(func_142(iParam0, iVar0));
			break;

		case 2:
			func_141(func_142(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_140(func_142(iParam0, iVar0));
			break;

		case 3:
			func_141(func_142(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_140(func_142(iParam0, iVar0));
			break;

		case 4:
			func_141(func_142(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_140(func_142(iParam0, iVar0));
			break;

		case 5:
			func_141(func_142(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_140(func_142(iParam0, iVar0));
			break;

		case 6:
			func_141(func_142(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_140(func_142(iParam0, iVar0));
			break;

		case 7:
			func_141(func_142(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_140(func_142(iParam0, iVar0));
			break;

		case 8:
			func_141(func_142(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_140(func_142(iParam0, iVar0));
			break;

		case 9:
			func_141(func_142(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_140(func_142(iParam0, iVar0));
			break;

		case 10:
			func_141(func_142(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_140(func_142(iParam0, iVar0));
			break;

		case 11:
			func_141(func_142(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_140(func_142(iParam0, iVar0));
			break;

		case 12:
			func_141(func_142(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_140(func_142(iParam0, iVar0));
			break;

		case 13:
			func_141(func_142(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_140(func_142(iParam0, iVar0));
			break;

		case 14:
			func_141(func_142(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_140(func_142(iParam0, iVar0));
			break;

		case 15:
			func_141(func_142(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_140(func_142(iParam0, iVar0));
			break;

		case 16:
			func_141(func_142(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_140(func_142(iParam0, iVar0));
			break;

		case 17:
			func_141(func_142(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_140(func_142(iParam0, iVar0));
			break;

		case 18:
			func_141(func_142(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_140(func_142(iParam0, iVar0));
			break;

		case 19:
			func_141(func_142(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_140(func_142(iParam0, iVar0));
			break;

		case 20:
			func_141(func_142(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_140(func_142(iParam0, iVar0));
			break;

		case 21:
			func_141(func_142(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_140(func_142(iParam0, iVar0));
			break;

		case 22:
			func_141(func_142(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_140(func_142(iParam0, iVar0));
			break;

		case 23:
			func_141(func_142(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_140(func_142(iParam0, iVar0));
			break;

		case 24:
			func_141(func_142(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_140(func_142(iParam0, iVar0));
			break;

		case 25:
			func_141(func_142(iParam0, iVar0), &uParam1->f_5, &uParam1->f_6);
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_67 = func_140(func_142(iParam0, iVar0));
			break;

		default: break;
		}
	}
	else if (iParam0 == 219) {
		switch (iVar0) {
		case 1:
			uParam1->f_5 = 98;
			uParam1->f_6 = 98;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_67 = 1;
			break;

		case 2:
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_67 = 2;
			break;

		case 3:
			uParam1->f_5 = 135;
			uParam1->f_6 = 135;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_67 = 3;
			break;

		case 4:
			uParam1->f_5 = 59;
			uParam1->f_6 = 59;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_67 = 8;
			break;

		case 5:
			uParam1->f_5 = 98;
			uParam1->f_6 = 98;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_67 = 4;
			break;

		case 6:
			uParam1->f_5 = 98;
			uParam1->f_6 = 98;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_67 = 5;
			break;

		case 7:
			uParam1->f_5 = 42;
			uParam1->f_6 = 42;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_67 = 7;
			break;

		case 8:
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_67 = 6;
			break;

		default: break;
		}
	}
	else {
		switch (iVar0) {
		case 1:
			if (func_139(iParam0)) {
				if (iParam0 != 164) {
					if (func_138(iParam0, iVar0, &iVar1)) {
						uParam1->f_9[48] = iVar1;
					}
					else if (func_137(iParam0, iVar0, &iVar2, &iVar3, &iVar1)) {
						uParam1->f_5 = iVar2;
						uParam1->f_6 = iVar3;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_96 = 1;
						if (iParam0 == 268 || iParam0 == 267 || iParam0 == 279) {
							uParam1->f_98 = 134;
						}
						else {
							uParam1->f_98 = 0;
						}
						uParam1->f_9[48] = iVar1;
					}
					else {
						uParam1->f_67 = 0;
					}
				}
				else {
					uParam1->f_67 = func_140(func_142(iParam0, iVar0));
				}
			}
			else if (func_161(iParam0)) {
				if (!Global_68512) {
					uParam1->f_5 = 143;
					uParam1->f_6 = 34;
					uParam1->f_7 = 31;
					uParam1->f_96 = 99;
					uParam1->f_67 = -1;
				}
				else {
					uParam1->f_5 = 40;
					uParam1->f_6 = 40;
					uParam1->f_96 = 93;
					uParam1->f_67 = -1;
				}
			}
			else if (func_136(iParam0)) {
				uParam1->f_5 = 27;
				uParam1->f_6 = 118;
				uParam1->f_67 = -1;
			}
			else if (iParam0 == 292) {
				uParam1->f_5 = 27;
				uParam1->f_6 = 36;
				uParam1->f_67 = -1;
			}
			else {
				uParam1->f_5 = 27;
				uParam1->f_6 = 36;
				uParam1->f_67 = -1;
			}
			break;

		case 2:
			if (func_139(iParam0)) {
				if (iParam0 != 164) {
					if (func_138(iParam0, iVar0, &iVar4)) {
						uParam1->f_9[48] = iVar4;
					}
					else if (func_137(iParam0, iVar0, &iVar5, &iVar6, &iVar4)) {
						uParam1->f_5 = iVar5;
						uParam1->f_6 = iVar6;
						uParam1->f_7 = 0;
						uParam1->f_8 = 156;
						uParam1->f_96 = 1;
						if (iParam0 == 268 || iParam0 == 267 || iParam0 == 279) {
							uParam1->f_98 = 134;
						}
						else {
							uParam1->f_98 = 0;
						}
						uParam1->f_9[48] = iVar4;
					}
					else {
						uParam1->f_67 = 1;
					}
				}
				else {
					uParam1->f_5 = 0;
					uParam1->f_6 = 10;
					uParam1->f_7 = 4;
					uParam1->f_8 = 156;
					uParam1->f_67 = func_140(func_142(iParam0, iVar0));
				}
			}
			else if (func_161(iParam0)) {
				if (!Global_68512) {
					uParam1->f_5 = 8;
					uParam1->f_6 = 8;
					uParam1->f_7 = 5;
					uParam1->f_96 = 106;
					uParam1->f_67 = -1;
				}
				else {
					uParam1->f_5 = 14;
					uParam1->f_6 = 14;
					uParam1->f_96 = 108;
					uParam1->f_67 = -1;
				}
			}
			else if (func_136(iParam0)) {
				uParam1->f_5 = 135;
				uParam1->f_6 = 118;
				uParam1->f_67 = -1;
			}
			else if (iParam0 == 292) {
				uParam1->f_5 = 135;
				uParam1->f_6 = 135;
				uParam1->f_67 = -1;
			}
			else {
				uParam1->f_5 = 135;
				uParam1->f_6 = 135;
				uParam1->f_67 = -1;
			}
			break;

		case 3:
			if (func_139(iParam0)) {
				if (func_138(iParam0, iVar0, &iVar7)) {
					uParam1->f_9[48] = iVar7;
				}
				else if (func_137(iParam0, iVar0, &iVar8, &iVar9, &iVar7)) {
					uParam1->f_5 = iVar8;
					uParam1->f_6 = iVar9;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_96 = 1;
					if (iParam0 == 268 || iParam0 == 267 || iParam0 == 279) {
						uParam1->f_98 = 134;
					}
					else {
						uParam1->f_98 = 0;
					}
					uParam1->f_9[48] = iVar7;
				}
				else {
					uParam1->f_67 = 2;
				}
			}
			else if (func_161(iParam0)) {
				if (!Global_68512) {
					uParam1->f_5 = 100;
					uParam1->f_6 = 100;
					uParam1->f_7 = 100;
					uParam1->f_96 = 22;
					uParam1->f_67 = -1;
				}
				else {
					uParam1->f_5 = 152;
					uParam1->f_6 = 152;
					uParam1->f_96 = 22;
					uParam1->f_67 = -1;
				}
			}
			else if (func_136(iParam0)) {
				uParam1->f_5 = 88;
				uParam1->f_6 = 118;
				uParam1->f_67 = -1;
			}
			else if (iParam0 == 292) {
				uParam1->f_5 = 88;
				uParam1->f_6 = 88;
				uParam1->f_67 = -1;
			}
			else {
				uParam1->f_5 = 88;
				uParam1->f_6 = 88;
				uParam1->f_67 = -1;
			}
			break;

		case 4:
			if (func_139(iParam0)) {
				if (func_138(iParam0, iVar0, &iVar10)) {
					uParam1->f_9[48] = iVar10;
				}
				else if (func_137(iParam0, iVar0, &iVar11, &iVar12, &iVar10)) {
					uParam1->f_5 = iVar11;
					uParam1->f_6 = iVar12;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_96 = 1;
					if (iParam0 == 268 || iParam0 == 267 || iParam0 == 279) {
						uParam1->f_98 = 134;
					}
					else {
						uParam1->f_98 = 0;
					}
					uParam1->f_9[48] = iVar10;
				}
				else {
					uParam1->f_67 = 3;
				}
			}
			else if (func_161(iParam0)) {
				if (!Global_68512) {
					uParam1->f_5 = 99;
					uParam1->f_6 = 99;
					uParam1->f_7 = 106;
					uParam1->f_96 = 101;
					uParam1->f_67 = -1;
				}
				else {
					uParam1->f_5 = 99;
					uParam1->f_6 = 99;
					uParam1->f_96 = 48;
					uParam1->f_67 = -1;
				}
			}
			else if (func_136(iParam0)) {
				uParam1->f_5 = 38;
				uParam1->f_6 = 118;
				uParam1->f_67 = -1;
			}
			else if (iParam0 == 292) {
				uParam1->f_5 = 38;
				uParam1->f_6 = 38;
				uParam1->f_67 = -1;
			}
			else {
				uParam1->f_5 = 38;
				uParam1->f_6 = 27;
				while (func_135(iVar13, &sVar14, &iVar18, &iVar19, &iVar20)) {
					if (gameplay::are_strings_equal(&sVar14, "ORANGE") && iVar18 == 1) {
						uParam1->f_5 = iVar19;
						uParam1->f_6 = iVar20;
						iVar13 = -99;
					}
					iVar13++;
				}
				uParam1->f_67 = -1;
			}
			break;

		case 5:
			if (func_161(iParam0)) {
				if (!Global_68512) {
					uParam1->f_5 = 49;
					uParam1->f_6 = 49;
					uParam1->f_7 = 52;
					uParam1->f_96 = 98;
					uParam1->f_67 = -1;
				}
				else {
					uParam1->f_5 = 128;
					uParam1->f_6 = 128;
					uParam1->f_96 = 99;
					uParam1->f_67 = -1;
				}
			}
			else if (iParam0 == 178 || iParam0 == 179 || iParam0 == 192) {
				uParam1->f_5 = 152;
				uParam1->f_6 = 152;
				uParam1->f_7 = 18;
				uParam1->f_8 = 152;
			}
			else if (func_136(iParam0)) {
				uParam1->f_5 = 128;
				uParam1->f_6 = 118;
				uParam1->f_67 = -1;
			}
			else if (iParam0 == 292) {
				uParam1->f_5 = 128;
				uParam1->f_6 = 55;
				uParam1->f_67 = -1;
			}
			else {
				uParam1->f_5 = 128;
				uParam1->f_6 = 0;
				while (func_135(iVar21, &sVar22, &iVar26, &iVar27, &iVar28)) {
					if (gameplay::are_strings_equal(&sVar22, "LIME_GREEN") && iVar26 == 1) {
						uParam1->f_5 = iVar27;
						uParam1->f_6 = iVar28;
						iVar21 = -99;
					}
					iVar21++;
				}
				uParam1->f_67 = -1;
			}
			break;

		case 6:
			if (func_161(iParam0)) {
				if (!Global_68512) {
					uParam1->f_5 = 141;
					uParam1->f_6 = 141;
					uParam1->f_7 = 73;
					uParam1->f_96 = 5;
					uParam1->f_67 = -1;
				}
				else {
					uParam1->f_5 = 84;
					uParam1->f_6 = 84;
					uParam1->f_96 = 24;
					uParam1->f_67 = -1;
				}
			}
			else if (func_136(iParam0)) {
				uParam1->f_5 = 64;
				uParam1->f_6 = 118;
				uParam1->f_67 = -1;
			}
			else if (iParam0 == 292) {
				uParam1->f_5 = 64;
				uParam1->f_6 = 63;
				uParam1->f_67 = -1;
			}
			else {
				uParam1->f_5 = 64;
				uParam1->f_6 = 68;
				uParam1->f_67 = -1;
			}
			break;

		case 7:
			if (uParam1->f_66 == joaat("kuruma2")) {
				uParam1->f_5 = 12;
				uParam1->f_6 = 12;
				uParam1->f_7 = 13;
				uParam1->f_8 = 156;
				uParam1->f_67 = -1;
			}
			else if (func_161(iParam0)) {
				if (!Global_68512) {
					uParam1->f_5 = 0;
					uParam1->f_6 = 0;
					uParam1->f_7 = 10;
					uParam1->f_96 = 1;
					uParam1->f_67 = -1;
				}
				else {
					uParam1->f_5 = 12;
					uParam1->f_6 = 12;
					uParam1->f_96 = 0;
					uParam1->f_67 = -1;
				}
			}
			else if (func_136(iParam0)) {
				uParam1->f_5 = 0;
				uParam1->f_6 = 118;
				uParam1->f_67 = -1;
			}
			else if (iParam0 == 292) {
				uParam1->f_5 = 0;
				uParam1->f_6 = 5;
				uParam1->f_67 = -1;
			}
			else {
				uParam1->f_5 = 0;
				uParam1->f_6 = 10;
				uParam1->f_67 = -1;
			}
			break;

		case 8:
			if (func_161(iParam0)) {
				if (!Global_68512) {
					uParam1->f_5 = 112;
					uParam1->f_6 = 112;
					uParam1->f_7 = 0;
					uParam1->f_96 = 7;
					uParam1->f_67 = -1;
				}
				else {
					uParam1->f_5 = 131;
					uParam1->f_6 = 131;
					uParam1->f_96 = 78;
					uParam1->f_67 = -1;
				}
			}
			else if (func_136(iParam0)) {
				uParam1->f_5 = 111;
				uParam1->f_6 = 118;
				uParam1->f_67 = -1;
			}
			else if (iParam0 == 292) {
				uParam1->f_5 = 111;
				uParam1->f_6 = 111;
				uParam1->f_67 = -1;
			}
			else {
				uParam1->f_5 = 111;
				uParam1->f_6 = 0;
				uParam1->f_67 = -1;
			}
			break;

		default: break;
		}
	}
	if (iVar0 == 0) {
		switch (iParam0) {
		case 32:
			uParam1->f_5 = 111;
			uParam1->f_6 = 65;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
			uParam1->f_67 = -1;
			break;

		case 13:
			uParam1->f_5 = 46;
			uParam1->f_6 = 24;
			uParam1->f_7 = 46;
			uParam1->f_8 = 24;
			uParam1->f_67 = -1;
			break;

		case 33:
			uParam1->f_5 = 7;
			uParam1->f_6 = 0;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
			uParam1->f_67 = -1;
			break;

		case 34:
			uParam1->f_5 = 7;
			uParam1->f_6 = 0;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
			uParam1->f_67 = -1;
			break;

		case 35:
			uParam1->f_5 = 7;
			uParam1->f_6 = 0;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
			uParam1->f_67 = -1;
			break;

		case 36:
			uParam1->f_5 = 7;
			uParam1->f_6 = 0;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
			uParam1->f_67 = -1;
			break;

		case 37:
			uParam1->f_5 = 7;
			uParam1->f_6 = 0;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
			uParam1->f_67 = -1;
			break;

		case 38:
			uParam1->f_5 = 7;
			uParam1->f_6 = 0;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
			uParam1->f_67 = -1;
			break;

		case 206:
			uParam1->f_5 = 2;
			uParam1->f_6 = 134;
			uParam1->f_7 = 134;
			uParam1->f_8 = 29;
			uParam1->f_67 = -1;
			break;

		case 207:
			uParam1->f_5 = 134;
			uParam1->f_6 = 134;
			uParam1->f_7 = 134;
			uParam1->f_8 = 126;
			uParam1->f_67 = -1;
			break;

		case 208:
			uParam1->f_5 = 134;
			uParam1->f_6 = 134;
			uParam1->f_7 = 134;
			uParam1->f_8 = 29;
			uParam1->f_67 = -1;
			break;

		case 209:
			uParam1->f_5 = 134;
			uParam1->f_6 = 134;
			uParam1->f_7 = 134;
			uParam1->f_8 = 139;
			uParam1->f_67 = -1;
			break;

		case 210:
			uParam1->f_5 = 28;
			uParam1->f_6 = 0;
			uParam1->f_7 = 14;
			uParam1->f_8 = 156;
			uParam1->f_67 = -1;
			break;

		case 213:
			uParam1->f_5 = 38;
			uParam1->f_6 = 38;
			uParam1->f_7 = 42;
			uParam1->f_8 = 156;
			uParam1->f_67 = -1;
			break;

		case 212:
			uParam1->f_5 = 134;
			uParam1->f_6 = 134;
			uParam1->f_7 = 134;
			uParam1->f_8 = 27;
			uParam1->f_67 = -1;
			break;

		case 17:
			uParam1->f_5 = 30;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_67 = -1;
			break;

		case 215:
			uParam1->f_5 = 159;
			uParam1->f_6 = 0;
			uParam1->f_7 = 160;
			uParam1->f_8 = 156;
			uParam1->f_67 = -1;
			break;

		case 217:
			uParam1->f_5 = 159;
			uParam1->f_6 = 0;
			uParam1->f_7 = 160;
			uParam1->f_8 = 156;
			uParam1->f_67 = -1;
			break;

		case 205:
			uParam1->f_5 = 12;
			uParam1->f_6 = 12;
			uParam1->f_7 = 0;
			uParam1->f_8 = 12;
			uParam1->f_67 = -1;
			break;

		case 227:
			uParam1->f_5 = 0;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 0;
			uParam1->f_67 = -1;
			break;

		case 226:
			uParam1->f_5 = 36;
			uParam1->f_6 = 36;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_67 = -1;
			break;

		case 230:
			uParam1->f_5 = 41;
			uParam1->f_6 = 41;
			uParam1->f_7 = 156;
			uParam1->f_8 = 0;
			uParam1->f_67 = -1;
			break;

		default: break;
		}
	}
	if (iParam0 == 161) {
		uParam1->f_5 = 111;
		uParam1->f_6 = 111;
		uParam1->f_7 = 111;
		uParam1->f_8 = 156;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 231) {
		uParam1->f_5 = 142;
		uParam1->f_6 = 0;
		uParam1->f_7 = 145;
		uParam1->f_8 = 90;
	}
	if (iParam0 == 290) {
		uParam1->f_6 = 0;
	}
	if (iParam0 == 291) {
		uParam1->f_5 = 131;
		uParam1->f_6 = 131;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 304) {
		uParam1->f_5 = 22;
		uParam1->f_6 = 12;
		uParam1->f_7 = 134;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_96 = 0;
		uParam1->f_67 = -1;
		uParam1->f_79 = 1f;
	}
	if (iParam0 == 305) {
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_96 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 306) {
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_96 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 307) {
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_96 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 308) {
		uParam1->f_5 = 12;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_96 = 0;
		uParam1->f_67 = -1;
		uParam1->f_79 = 1f;
	}
	if (iParam0 == 309) {
		uParam1->f_5 = 151;
		uParam1->f_6 = 129;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_96 = 0;
		uParam1->f_67 = -1;
		uParam1->f_79 = 1f;
	}
	if (iParam0 == 310) {
		uParam1->f_5 = 0;
		uParam1->f_6 = 0;
		uParam1->f_7 = 18;
		uParam1->f_8 = 0;
		uParam1->f_96 = 0;
		uParam1->f_96 = 0;
		uParam1->f_67 = -1;
	}
	if (iParam0 == 311) {
		uParam1->f_5 = 0;
		uParam1->f_6 = 6;
		uParam1->f_7 = 18;
		uParam1->f_8 = 156;
		uParam1->f_96 = 0;
		uParam1->f_96 = 0;
		uParam1->f_67 = -1;
	}
	if (uParam1->f_67 >= 0) {
	}
	else if (iParam0 == 195) {
		uParam1->f_67 = 1;
	}
}

// Position - 0xF9C9
bool func_135(int iParam0, char *sParam1, int *iParam2, int *iParam3, int *iParam4) {
	*iParam2 = -1;
	*iParam3 = -1;
	*iParam4 = -1;
	switch (iParam0) {
	case 0:
		StringCopy(sParam1, "BR BLACK_STEEL", 16);
		*iParam2 = 3;
		*iParam3 = 118;
		*iParam4 = 3;
		break;

	case 1:
		StringCopy(sParam1, "BLACK_GRAPHITE", 16);
		*iParam2 = 0;
		*iParam3 = 147;
		*iParam4 = 4;
		break;

	case 2:
		StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
		*iParam2 = 1;
		*iParam3 = 96;
		*iParam4 = 0;
		break;

	case 3:
		StringCopy(sParam1, "PURPLE", 16);
		*iParam2 = 0;
		*iParam3 = 71;
		*iParam4 = 145;
		break;

	case 4:
		StringCopy(sParam1, "HOT PINK", 16);
		*iParam2 = 0;
		*iParam3 = 135;
		*iParam4 = 135;
		break;

	case 5:
		StringCopy(sParam1, "FORMULA_RED", 16);
		*iParam2 = 0;
		*iParam3 = 29;
		*iParam4 = 28;
		break;

	case 6:
		StringCopy(sParam1, "BLUE", 16);
		*iParam2 = 0;
		*iParam3 = 64;
		*iParam4 = 68;
		break;

	case 7:
		StringCopy(sParam1, "ULTRA_BLUE", 16);
		*iParam2 = 1;
		*iParam3 = 70;
		*iParam4 = 0;
		break;

	case 8:
		StringCopy(sParam1, "RACING_GREEN", 16);
		*iParam2 = 1;
		*iParam3 = 50;
		*iParam4 = 0;
		break;

	case 9:
		StringCopy(sParam1, "LIME_GREEN", 16);
		*iParam2 = 2;
		*iParam3 = 55;
		*iParam4 = 0;
		break;

	case 10:
		StringCopy(sParam1, "RACE_YELLOW", 16);
		*iParam2 = 1;
		*iParam3 = 89;
		*iParam4 = 0;
		break;

	case 11:
		StringCopy(sParam1, "ORANGE", 16);
		*iParam2 = 1;
		*iParam3 = 38;
		*iParam4 = 0;
		break;

	case 12:
		StringCopy(sParam1, "GOLD", 16);
		*iParam2 = 0;
		*iParam3 = 37;
		*iParam4 = 106;
		break;

	case 13:
		StringCopy(sParam1, "SILVER", 16);
		*iParam2 = 0;
		*iParam3 = 4;
		*iParam4 = 111;
		break;

	case 14:
		StringCopy(sParam1, "CHROME", 16);
		*iParam2 = 4;
		*iParam3 = 120;
		*iParam4 = 0;
		break;

	case 15:
		StringCopy(sParam1, "WHITE", 16);
		*iParam2 = 1;
		*iParam3 = 111;
		*iParam4 = 0;
		break;

	case 16:
		StringCopy(sParam1, "BLACK", 16);
		*iParam2 = 0;
		*iParam3 = 0;
		*iParam4 = 10;
		break;

	case 17:
		StringCopy(sParam1, "GRAPHITE", 16);
		*iParam2 = 0;
		*iParam3 = 1;
		*iParam4 = 5;
		break;

	case 18:
		StringCopy(sParam1, "ANTHR_BLACK", 16);
		*iParam2 = 0;
		*iParam3 = 11;
		*iParam4 = 2;
		break;

	case 19:
		StringCopy(sParam1, "BLACK_STEEL", 16);
		*iParam2 = 0;
		*iParam3 = 2;
		*iParam4 = 5;
		break;

	case 20:
		StringCopy(sParam1, "DARK_SILVER", 16);
		*iParam2 = 0;
		*iParam3 = 3;
		*iParam4 = 6;
		break;

	case 21:
		StringCopy(sParam1, "BLUE_SILVER", 16);
		*iParam2 = 0;
		*iParam3 = 5;
		*iParam4 = 111;
		break;

	case 22:
		StringCopy(sParam1, "ROLLED_STEEL", 16);
		*iParam2 = 0;
		*iParam3 = 6;
		*iParam4 = 4;
		break;

	case 23:
		StringCopy(sParam1, "SHADOW_SILVER", 16);
		*iParam2 = 0;
		*iParam3 = 7;
		*iParam4 = 5;
		break;

	case 24:
		StringCopy(sParam1, "STONE_SILVER", 16);
		*iParam2 = 0;
		*iParam3 = 8;
		*iParam4 = 5;
		break;

	case 25:
		StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
		*iParam2 = 0;
		*iParam3 = 9;
		*iParam4 = 7;
		break;

	case 26:
		StringCopy(sParam1, "CAST_IRON_SIL", 16);
		*iParam2 = 0;
		*iParam3 = 10;
		*iParam4 = 7;
		break;

	case 27:
		StringCopy(sParam1, "RED", 16);
		*iParam2 = 0;
		*iParam3 = 27;
		*iParam4 = 36;
		break;

	case 28:
		StringCopy(sParam1, "TORINO_RED", 16);
		*iParam2 = 0;
		*iParam3 = 28;
		*iParam4 = 28;
		break;

	case 29:
		StringCopy(sParam1, "LAVA_RED", 16);
		*iParam2 = 0;
		*iParam3 = 150;
		*iParam4 = 42;
		break;

	case 30:
		StringCopy(sParam1, "BLAZE_RED", 16);
		*iParam2 = 0;
		*iParam3 = 30;
		*iParam4 = 36;
		break;

	case 31:
		StringCopy(sParam1, "GRACE_RED", 16);
		*iParam2 = 0;
		*iParam3 = 31;
		*iParam4 = 27;
		break;

	case 32:
		StringCopy(sParam1, "GARNET_RED", 16);
		*iParam2 = 0;
		*iParam3 = 32;
		*iParam4 = 25;
		break;

	case 33:
		StringCopy(sParam1, "SUNSET_RED", 16);
		*iParam2 = 0;
		*iParam3 = 33;
		*iParam4 = 47;
		break;

	case 34:
		StringCopy(sParam1, "CABERNET_RED", 16);
		*iParam2 = 0;
		*iParam3 = 34;
		*iParam4 = 47;
		break;

	case 35:
		StringCopy(sParam1, "WINE_RED", 16);
		*iParam2 = 0;
		*iParam3 = 143;
		*iParam4 = 31;
		break;

	case 36:
		StringCopy(sParam1, "CANDY_RED", 16);
		*iParam2 = 0;
		*iParam3 = 35;
		*iParam4 = 25;
		break;

	case 37:
		StringCopy(sParam1, "PINK", 16);
		*iParam2 = 0;
		*iParam3 = 137;
		*iParam4 = 3;
		break;

	case 38:
		StringCopy(sParam1, "SALMON_PINK", 16);
		*iParam2 = 0;
		*iParam3 = 136;
		*iParam4 = 5;
		break;

	case 39:
		StringCopy(sParam1, "SUNRISE_ORANGE", 16);
		*iParam2 = 0;
		*iParam3 = 36;
		*iParam4 = 26;
		break;

	case 40:
		StringCopy(sParam1, "ORANGE", 16);
		*iParam2 = 0;
		*iParam3 = 38;
		*iParam4 = 37;
		break;

	case 41:
		StringCopy(sParam1, "BRIGHT_ORANGE", 16);
		*iParam2 = 0;
		*iParam3 = 138;
		*iParam4 = 89;
		break;

	case 42:
		StringCopy(sParam1, "BRONZE", 16);
		*iParam2 = 0;
		*iParam3 = 90;
		*iParam4 = 102;
		break;

	case 43:
		StringCopy(sParam1, "YELLOW", 16);
		*iParam2 = 0;
		*iParam3 = 88;
		*iParam4 = 88;
		break;

	case 44:
		StringCopy(sParam1, "RACE_YELLOW", 16);
		*iParam2 = 0;
		*iParam3 = 89;
		*iParam4 = 88;
		break;

	case 45:
		StringCopy(sParam1, "FLUR_YELLOW", 16);
		*iParam2 = 0;
		*iParam3 = 91;
		*iParam4 = 91;
		break;

	case 46:
		StringCopy(sParam1, "DARK_GREEN", 16);
		*iParam2 = 0;
		*iParam3 = 49;
		*iParam4 = 52;
		break;

	case 47:
		StringCopy(sParam1, "RACING_GREEN", 16);
		*iParam2 = 0;
		*iParam3 = 50;
		*iParam4 = 53;
		break;

	case 48:
		StringCopy(sParam1, "SEA_GREEN", 16);
		*iParam2 = 0;
		*iParam3 = 51;
		*iParam4 = 66;
		break;

	case 49:
		StringCopy(sParam1, "OLIVE_GREEN", 16);
		*iParam2 = 0;
		*iParam3 = 52;
		*iParam4 = 59;
		break;

	case 50:
		StringCopy(sParam1, "BRIGHT_GREEN", 16);
		*iParam2 = 0;
		*iParam3 = 53;
		*iParam4 = 59;
		break;

	case 51:
		StringCopy(sParam1, "PETROL_GREEN", 16);
		*iParam2 = 0;
		*iParam3 = 54;
		*iParam4 = 60;
		break;

	case 52:
		StringCopy(sParam1, "LIME_GREEN", 16);
		*iParam2 = 0;
		*iParam3 = 92;
		*iParam4 = 92;
		break;

	case 53:
		StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
		*iParam2 = 0;
		*iParam3 = 141;
		*iParam4 = 73;
		break;

	case 54:
		StringCopy(sParam1, "GALAXY_BLUE", 16);
		*iParam2 = 0;
		*iParam3 = 61;
		*iParam4 = 63;
		break;

	case 55:
		StringCopy(sParam1, "DARK_BLUE", 16);
		*iParam2 = 0;
		*iParam3 = 62;
		*iParam4 = 68;
		break;

	case 56:
		StringCopy(sParam1, "SAXON_BLUE", 16);
		*iParam2 = 0;
		*iParam3 = 63;
		*iParam4 = 87;
		break;

	case 57:
		StringCopy(sParam1, "MARINER_BLUE", 16);
		*iParam2 = 0;
		*iParam3 = 65;
		*iParam4 = 87;
		break;

	case 58:
		StringCopy(sParam1, "HARBOR_BLUE", 16);
		*iParam2 = 0;
		*iParam3 = 66;
		*iParam4 = 60;
		break;

	case 59:
		StringCopy(sParam1, "DIAMOND_BLUE", 16);
		*iParam2 = 0;
		*iParam3 = 67;
		*iParam4 = 67;
		break;

	case 60:
		StringCopy(sParam1, "SURF_BLUE", 16);
		*iParam2 = 0;
		*iParam3 = 68;
		*iParam4 = 68;
		break;

	case 61:
		StringCopy(sParam1, "NAUTICAL_BLUE", 16);
		*iParam2 = 0;
		*iParam3 = 69;
		*iParam4 = 74;
		break;

	case 62:
		StringCopy(sParam1, "RACING_BLUE", 16);
		*iParam2 = 0;
		*iParam3 = 73;
		*iParam4 = 73;
		break;

	case 63:
		StringCopy(sParam1, "ULTRA_BLUE", 16);
		*iParam2 = 0;
		*iParam3 = 70;
		*iParam4 = 70;
		break;

	case 64:
		StringCopy(sParam1, "LIGHT_BLUE", 16);
		*iParam2 = 0;
		*iParam3 = 74;
		*iParam4 = 74;
		break;

	case 65:
		StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
		*iParam2 = 0;
		*iParam3 = 96;
		*iParam4 = 95;
		break;

	case 66:
		StringCopy(sParam1, "BISON_BROWN", 16);
		*iParam2 = 0;
		*iParam3 = 101;
		*iParam4 = 95;
		break;

	case 67:
		StringCopy(sParam1, "CREEK_BROWN", 16);
		*iParam2 = 0;
		*iParam3 = 95;
		*iParam4 = 97;
		break;

	case 68:
		StringCopy(sParam1, "UMBER_BROWN", 16);
		*iParam2 = 0;
		*iParam3 = 94;
		*iParam4 = 104;
		break;

	case 69:
		StringCopy(sParam1, "MAPLE_BROWN", 16);
		*iParam2 = 0;
		*iParam3 = 97;
		*iParam4 = 98;
		break;

	case 70:
		StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
		*iParam2 = 0;
		*iParam3 = 103;
		*iParam4 = 104;
		break;

	case 71:
		StringCopy(sParam1, "SIENNA_BROWN", 16);
		*iParam2 = 0;
		*iParam3 = 104;
		*iParam4 = 104;
		break;

	case 72:
		StringCopy(sParam1, "SADDLE_BROWN", 16);
		*iParam2 = 0;
		*iParam3 = 98;
		*iParam4 = 95;
		break;

	case 73:
		StringCopy(sParam1, "MOSS_BROWN", 16);
		*iParam2 = 0;
		*iParam3 = 100;
		*iParam4 = 100;
		break;

	case 74:
		StringCopy(sParam1, "WOODBEECH_BROWN", 16);
		*iParam2 = 0;
		*iParam3 = 102;
		*iParam4 = 105;
		break;

	case 75:
		StringCopy(sParam1, "STRAW_BROWN", 16);
		*iParam2 = 0;
		*iParam3 = 99;
		*iParam4 = 106;
		break;

	case 76:
		StringCopy(sParam1, "SANDY_BROWN", 16);
		*iParam2 = 0;
		*iParam3 = 105;
		*iParam4 = 105;
		break;

	case 77:
		StringCopy(sParam1, "BLEECHED_BROWN", 16);
		*iParam2 = 0;
		*iParam3 = 106;
		*iParam4 = 106;
		break;

	case 78:
		StringCopy(sParam1, "SPIN_PURPLE", 16);
		*iParam2 = 0;
		*iParam3 = 72;
		*iParam4 = 64;
		break;

	case 79:
		StringCopy(sParam1, "MIGHT_PURPLE", 16);
		*iParam2 = 0;
		*iParam3 = 146;
		*iParam4 = 145;
		break;

	case 80:
		StringCopy(sParam1, "BRIGHT_PURPLE", 16);
		*iParam2 = 0;
		*iParam3 = 145;
		*iParam4 = 74;
		break;

	case 81:
		StringCopy(sParam1, "CREAM", 16);
		*iParam2 = 0;
		*iParam3 = 107;
		*iParam4 = 107;
		break;

	case 82:
		StringCopy(sParam1, "WHITE", 16);
		*iParam2 = 0;
		*iParam3 = 111;
		*iParam4 = 0;
		break;

	case 83:
		StringCopy(sParam1, "FROST_WHITE", 16);
		*iParam2 = 0;
		*iParam3 = 112;
		*iParam4 = 0;
		break;

	case 84:
		StringCopy(sParam1, "BLACK", 16);
		*iParam2 = 1;
		*iParam3 = 0;
		*iParam4 = 0;
		break;

	case 85:
		StringCopy(sParam1, "BLACK_GRAPHITE", 16);
		*iParam2 = 1;
		*iParam3 = 147;
		*iParam4 = 0;
		break;

	case 86:
		StringCopy(sParam1, "GRAPHITE", 16);
		*iParam2 = 1;
		*iParam3 = 1;
		*iParam4 = 0;
		break;

	case 87:
		StringCopy(sParam1, "ANTHR_BLACK", 16);
		*iParam2 = 1;
		*iParam3 = 11;
		*iParam4 = 0;
		break;

	case 88:
		StringCopy(sParam1, "BLACK_STEEL", 16);
		*iParam2 = 1;
		*iParam3 = 2;
		*iParam4 = 0;
		break;

	case 89:
		StringCopy(sParam1, "DARK_SILVER", 16);
		*iParam2 = 1;
		*iParam3 = 3;
		*iParam4 = 2;
		break;

	case 90:
		StringCopy(sParam1, "SILVER", 16);
		*iParam2 = 1;
		*iParam3 = 4;
		*iParam4 = 4;
		break;

	case 91:
		StringCopy(sParam1, "BLUE_SILVER", 16);
		*iParam2 = 1;
		*iParam3 = 5;
		*iParam4 = 5;
		break;

	case 92:
		StringCopy(sParam1, "ROLLED_STEEL", 16);
		*iParam2 = 1;
		*iParam3 = 6;
		*iParam4 = 0;
		break;

	case 93:
		StringCopy(sParam1, "SHADOW_SILVER", 16);
		*iParam2 = 1;
		*iParam3 = 7;
		*iParam4 = 0;
		break;

	case 94:
		StringCopy(sParam1, "STONE_SILVER", 16);
		*iParam2 = 1;
		*iParam3 = 8;
		*iParam4 = 0;
		break;

	case 95:
		StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
		*iParam2 = 1;
		*iParam3 = 9;
		*iParam4 = 0;
		break;

	case 96:
		StringCopy(sParam1, "CAST_IRON_SIL", 16);
		*iParam2 = 1;
		*iParam3 = 10;
		*iParam4 = 0;
		break;

	case 97:
		StringCopy(sParam1, "RED", 16);
		*iParam2 = 1;
		*iParam3 = 27;
		*iParam4 = 0;
		break;

	case 98:
		StringCopy(sParam1, "TORINO_RED", 16);
		*iParam2 = 1;
		*iParam3 = 28;
		*iParam4 = 0;
		break;

	case 99:
		StringCopy(sParam1, "FORMULA_RED", 16);
		*iParam2 = 1;
		*iParam3 = 29;
		*iParam4 = 0;
		break;

	case 100:
		StringCopy(sParam1, "LAVA_RED", 16);
		*iParam2 = 1;
		*iParam3 = 150;
		*iParam4 = 0;
		break;

	case 101:
		StringCopy(sParam1, "BLAZE_RED", 16);
		*iParam2 = 1;
		*iParam3 = 30;
		*iParam4 = 0;
		break;

	case 102:
		StringCopy(sParam1, "GRACE_RED", 16);
		*iParam2 = 1;
		*iParam3 = 31;
		*iParam4 = 0;
		break;

	case 103:
		StringCopy(sParam1, "GARNET_RED", 16);
		*iParam2 = 1;
		*iParam3 = 32;
		*iParam4 = 0;
		break;

	case 104:
		StringCopy(sParam1, "SUNSET_RED", 16);
		*iParam2 = 1;
		*iParam3 = 33;
		*iParam4 = 0;
		break;

	case 105:
		StringCopy(sParam1, "CABERNET_RED", 16);
		*iParam2 = 1;
		*iParam3 = 34;
		*iParam4 = 0;
		break;

	case 106:
		StringCopy(sParam1, "WINE_RED", 16);
		*iParam2 = 1;
		*iParam3 = 143;
		*iParam4 = 0;
		break;

	case 107:
		StringCopy(sParam1, "CANDY_RED", 16);
		*iParam2 = 1;
		*iParam3 = 35;
		*iParam4 = 0;
		break;

	case 108:
		StringCopy(sParam1, "HOT PINK", 16);
		*iParam2 = 1;
		*iParam3 = 135;
		*iParam4 = 0;
		break;

	case 109:
		StringCopy(sParam1, "PINK", 16);
		*iParam2 = 1;
		*iParam3 = 137;
		*iParam4 = 0;
		break;

	case 110:
		StringCopy(sParam1, "SALMON_PINK", 16);
		*iParam2 = 1;
		*iParam3 = 136;
		*iParam4 = 0;
		break;

	case 111:
		StringCopy(sParam1, "SUNRISE_ORANGE", 16);
		*iParam2 = 1;
		*iParam3 = 36;
		*iParam4 = 0;
		break;

	case 112:
		StringCopy(sParam1, "BRIGHT_ORANGE", 16);
		*iParam2 = 1;
		*iParam3 = 138;
		*iParam4 = 0;
		break;

	case 113:
		StringCopy(sParam1, "GOLD", 16);
		*iParam2 = 1;
		*iParam3 = 99;
		*iParam4 = 99;
		break;

	case 114:
		StringCopy(sParam1, "BRONZE", 16);
		*iParam2 = 1;
		*iParam3 = 90;
		*iParam4 = 102;
		break;

	case 115:
		StringCopy(sParam1, "YELLOW", 16);
		*iParam2 = 1;
		*iParam3 = 88;
		*iParam4 = 0;
		break;

	case 116:
		StringCopy(sParam1, "FLUR_YELLOW", 16);
		*iParam2 = 1;
		*iParam3 = 91;
		*iParam4 = 0;
		break;

	case 117:
		StringCopy(sParam1, "DARK_GREEN", 16);
		*iParam2 = 1;
		*iParam3 = 49;
		*iParam4 = 0;
		break;

	case 118:
		StringCopy(sParam1, "SEA_GREEN", 16);
		*iParam2 = 1;
		*iParam3 = 51;
		*iParam4 = 0;
		break;

	case 119:
		StringCopy(sParam1, "OLIVE_GREEN", 16);
		*iParam2 = 1;
		*iParam3 = 52;
		*iParam4 = 0;
		break;

	case 120:
		StringCopy(sParam1, "BRIGHT_GREEN", 16);
		*iParam2 = 1;
		*iParam3 = 53;
		*iParam4 = 0;
		break;

	case 121:
		StringCopy(sParam1, "PETROL_GREEN", 16);
		*iParam2 = 1;
		*iParam3 = 54;
		*iParam4 = 0;
		break;

	case 122:
		StringCopy(sParam1, "LIME_GREEN", 16);
		*iParam2 = 1;
		*iParam3 = 92;
		*iParam4 = 0;
		break;

	case 123:
		StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
		*iParam2 = 1;
		*iParam3 = 141;
		*iParam4 = 0;
		break;

	case 124:
		StringCopy(sParam1, "GALAXY_BLUE", 16);
		*iParam2 = 1;
		*iParam3 = 61;
		*iParam4 = 0;
		break;

	case 125:
		StringCopy(sParam1, "DARK_BLUE", 16);
		*iParam2 = 1;
		*iParam3 = 62;
		*iParam4 = 0;
		break;

	case 126:
		StringCopy(sParam1, "SAXON_BLUE", 16);
		*iParam2 = 1;
		*iParam3 = 63;
		*iParam4 = 0;
		break;

	case 127:
		StringCopy(sParam1, "BLUE", 16);
		*iParam2 = 1;
		*iParam3 = 64;
		*iParam4 = 0;
		break;

	case 128:
		StringCopy(sParam1, "MARINER_BLUE", 16);
		*iParam2 = 1;
		*iParam3 = 65;
		*iParam4 = 0;
		break;

	case 129:
		StringCopy(sParam1, "HARBOR_BLUE", 16);
		*iParam2 = 1;
		*iParam3 = 66;
		*iParam4 = 0;
		break;

	case 130:
		StringCopy(sParam1, "DIAMOND_BLUE", 16);
		*iParam2 = 1;
		*iParam3 = 67;
		*iParam4 = 0;
		break;

	case 131:
		StringCopy(sParam1, "SURF_BLUE", 16);
		*iParam2 = 1;
		*iParam3 = 68;
		*iParam4 = 0;
		break;

	case 132:
		StringCopy(sParam1, "NAUTICAL_BLUE", 16);
		*iParam2 = 1;
		*iParam3 = 69;
		*iParam4 = 0;
		break;

	case 133:
		StringCopy(sParam1, "RACING_BLUE", 16);
		*iParam2 = 1;
		*iParam3 = 73;
		*iParam4 = 0;
		break;

	case 134:
		StringCopy(sParam1, "LIGHT_BLUE", 16);
		*iParam2 = 1;
		*iParam3 = 74;
		*iParam4 = 0;
		break;

	case 135:
		StringCopy(sParam1, "BISON_BROWN", 16);
		*iParam2 = 1;
		*iParam3 = 101;
		*iParam4 = 0;
		break;

	case 136:
		StringCopy(sParam1, "CREEK_BROWN", 16);
		*iParam2 = 1;
		*iParam3 = 95;
		*iParam4 = 0;
		break;

	case 137:
		StringCopy(sParam1, "UMBER_BROWN", 16);
		*iParam2 = 1;
		*iParam3 = 94;
		*iParam4 = 0;
		break;

	case 138:
		StringCopy(sParam1, "MAPLE_BROWN", 16);
		*iParam2 = 1;
		*iParam3 = 97;
		*iParam4 = 0;
		break;

	case 139:
		StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
		*iParam2 = 1;
		*iParam3 = 103;
		*iParam4 = 0;
		break;

	case 140:
		StringCopy(sParam1, "SIENNA_BROWN", 16);
		*iParam2 = 1;
		*iParam3 = 104;
		*iParam4 = 0;
		break;

	case 141:
		StringCopy(sParam1, "SADDLE_BROWN", 16);
		*iParam2 = 1;
		*iParam3 = 98;
		*iParam4 = 0;
		break;

	case 142:
		StringCopy(sParam1, "MOSS_BROWN", 16);
		*iParam2 = 1;
		*iParam3 = 100;
		*iParam4 = 0;
		break;

	case 143:
		StringCopy(sParam1, "WOODBEECH_BROWN", 16);
		*iParam2 = 1;
		*iParam3 = 102;
		*iParam4 = 0;
		break;

	case 144:
		StringCopy(sParam1, "STRAW_BROWN", 16);
		*iParam2 = 1;
		*iParam3 = 99;
		*iParam4 = 0;
		break;

	case 145:
		StringCopy(sParam1, "SANDY_BROWN", 16);
		*iParam2 = 1;
		*iParam3 = 105;
		*iParam4 = 0;
		break;

	case 146:
		StringCopy(sParam1, "BLEECHED_BROWN", 16);
		*iParam2 = 1;
		*iParam3 = 106;
		*iParam4 = 0;
		break;

	case 147:
		StringCopy(sParam1, "PURPLE", 16);
		*iParam2 = 1;
		*iParam3 = 71;
		*iParam4 = 0;
		break;

	case 148:
		StringCopy(sParam1, "SPIN_PURPLE", 16);
		*iParam2 = 1;
		*iParam3 = 72;
		*iParam4 = 0;
		break;

	case 149:
		StringCopy(sParam1, "MIGHT_PURPLE", 16);
		*iParam2 = 1;
		*iParam3 = 142;
		*iParam4 = 0;
		break;

	case 150:
		StringCopy(sParam1, "BRIGHT_PURPLE", 16);
		*iParam2 = 1;
		*iParam3 = 145;
		*iParam4 = 0;
		break;

	case 151:
		StringCopy(sParam1, "CREAM", 16);
		*iParam2 = 1;
		*iParam3 = 107;
		*iParam4 = 0;
		break;

	case 152:
		StringCopy(sParam1, "FROST_WHITE", 16);
		*iParam2 = 1;
		*iParam3 = 112;
		*iParam4 = 0;
		break;

	case 153:
		StringCopy(sParam1, "BLACK", 16);
		*iParam2 = 2;
		*iParam3 = 12;
		*iParam4 = 0;
		break;

	case 154:
		StringCopy(sParam1, "GREY", 16);
		*iParam2 = 2;
		*iParam3 = 13;
		*iParam4 = 0;
		break;

	case 155:
		StringCopy(sParam1, "LIGHT_GREY", 16);
		*iParam2 = 2;
		*iParam3 = 14;
		*iParam4 = 0;
		break;

	case 156:
		StringCopy(sParam1, "WHITE", 16);
		*iParam2 = 2;
		*iParam3 = 131;
		*iParam4 = 0;
		break;

	case 157:
		StringCopy(sParam1, "BLUE", 16);
		*iParam2 = 2;
		*iParam3 = 83;
		*iParam4 = 0;
		break;

	case 158:
		StringCopy(sParam1, "DARK_BLUE", 16);
		*iParam2 = 2;
		*iParam3 = 82;
		*iParam4 = 0;
		break;

	case 159:
		StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
		*iParam2 = 2;
		*iParam3 = 84;
		*iParam4 = 0;
		break;

	case 160:
		StringCopy(sParam1, "MIGHT_PURPLE", 16);
		*iParam2 = 2;
		*iParam3 = 149;
		*iParam4 = 0;
		break;

	case 161:
		StringCopy(sParam1, "Purple", 16);
		*iParam2 = 2;
		*iParam3 = 148;
		*iParam4 = 0;
		break;

	case 162:
		StringCopy(sParam1, "RED", 16);
		*iParam2 = 2;
		*iParam3 = 39;
		*iParam4 = 0;
		break;

	case 163:
		StringCopy(sParam1, "DARK_RED", 16);
		*iParam2 = 2;
		*iParam3 = 40;
		*iParam4 = 0;
		break;

	case 164:
		StringCopy(sParam1, "ORANGE", 16);
		*iParam2 = 2;
		*iParam3 = 41;
		*iParam4 = 0;
		break;

	case 165:
		StringCopy(sParam1, "YELLOW", 16);
		*iParam2 = 2;
		*iParam3 = 42;
		*iParam4 = 0;
		break;

	case 166:
		StringCopy(sParam1, "GREEN", 16);
		*iParam2 = 2;
		*iParam3 = 128;
		*iParam4 = 0;
		break;

	case 167:
		StringCopy(sParam1, "MATTE_FOR", 16);
		*iParam2 = 2;
		*iParam3 = 151;
		*iParam4 = 0;
		break;

	case 168:
		StringCopy(sParam1, "MATTE_FOIL", 16);
		*iParam2 = 2;
		*iParam3 = 155;
		*iParam4 = 0;
		break;

	case 169:
		StringCopy(sParam1, "MATTE_OD", 16);
		*iParam2 = 2;
		*iParam3 = 152;
		*iParam4 = 0;
		break;

	case 170:
		StringCopy(sParam1, "MATTE_DIRT", 16);
		*iParam2 = 2;
		*iParam3 = 153;
		*iParam4 = 0;
		break;

	case 171:
		StringCopy(sParam1, "MATTE_DESERT", 16);
		*iParam2 = 2;
		*iParam3 = 154;
		*iParam4 = 0;
		break;

	case 172:
		StringCopy(sParam1, "BR_STEEL", 16);
		*iParam2 = 3;
		*iParam3 = 117;
		*iParam4 = 18;
		break;

	case 173:
		StringCopy(sParam1, "BR_ALUMINIUM", 16);
		*iParam2 = 3;
		*iParam3 = 119;
		*iParam4 = 5;
		break;

	case 174:
		StringCopy(sParam1, "GOLD_P", 16);
		*iParam2 = 3;
		*iParam3 = 158;
		*iParam4 = 160;
		break;

	case 175:
		StringCopy(sParam1, "GOLD_S", 16);
		*iParam2 = 3;
		*iParam3 = 159;
		*iParam4 = 160;
		break;
	}
	return *iParam2 != -1;
}

// Position - 0x10EBC
bool func_136(int iParam0) {
	if (iParam0 == 286 || iParam0 == 289 || iParam0 == 290 || iParam0 == 301 || iParam0 == 287 || iParam0 == 288) {
		return true;
	}
	return false;
}

// Position - 0x10F0E
bool func_137(int iParam0, int iParam1, int *iParam2, int *iParam3, int *iParam4) {
	if (iParam0 == 275) {
		switch (iParam1) {
		case 1:
			*iParam2 = 0;
			*iParam3 = 10;
			*iParam4 = 1;
			return true;

		case 2:
			*iParam2 = 111;
			*iParam3 = 0;
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	else if (iParam0 == 270) {
		switch (iParam1) {
		case 1:
			*iParam2 = 111;
			*iParam3 = 0;
			*iParam4 = 1;
			return true;

		case 2:
			*iParam2 = 111;
			*iParam3 = 0;
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	else if (iParam0 == 274) {
		switch (iParam1) {
		case 1:
			*iParam2 = 111;
			*iParam3 = 0;
			*iParam4 = 1;
			return true;

		case 2:
			*iParam2 = 64;
			*iParam3 = 68;
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	else if (iParam0 == 278) {
		switch (iParam1) {
		case 1:
			*iParam2 = 0;
			*iParam3 = 10;
			*iParam4 = 1;
			return true;

		case 2:
			*iParam2 = 0;
			*iParam3 = 10;
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	else if (iParam0 == 267) {
		switch (iParam1) {
		case 1:
			*iParam2 = 27;
			*iParam3 = 36;
			*iParam4 = 1;
			return true;

		case 2:
			*iParam2 = 111;
			*iParam3 = 0;
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	else if (iParam0 == 280) {
		switch (iParam1) {
		case 1:
			*iParam2 = 111;
			*iParam3 = 111;
			*iParam4 = 1;
			return true;

		case 2:
			*iParam2 = 111;
			*iParam3 = 111;
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	else if (iParam0 == 268) {
		switch (iParam1) {
		case 1:
			*iParam2 = 27;
			*iParam3 = 36;
			*iParam4 = 1;
			return true;

		case 2:
			*iParam2 = 111;
			*iParam3 = 0;
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	else if (iParam0 == 276) {
		switch (iParam1) {
		case 1:
			func_141(func_142(iParam0, iParam1), iParam2, iParam3);
			*iParam4 = 1;
			return true;

		case 2:
			func_141(func_142(iParam0, iParam1), iParam2, iParam3);
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	else if (iParam0 == 281) {
		switch (iParam1) {
		case 1:
			*iParam2 = 111;
			*iParam3 = 111;
			*iParam4 = 1;
			return true;

		case 2:
			*iParam2 = 111;
			*iParam3 = 111;
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	else if (iParam0 == 277) {
		switch (iParam1) {
		case 1:
			*iParam2 = 0;
			*iParam3 = 10;
			*iParam4 = 1;
			return true;

		case 2:
			*iParam2 = 111;
			*iParam3 = 0;
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	else if (iParam0 == 271) {
		switch (iParam1) {
		case 1:
			*iParam2 = 27;
			*iParam3 = 36;
			*iParam4 = 1;
			return true;

		case 2:
			*iParam2 = 0;
			*iParam3 = 10;
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	else if (iParam0 == 272) {
		switch (iParam1) {
		case 1:
			*iParam2 = 38;
			*iParam3 = 0;
			*iParam4 = 1;
			return true;

		case 2:
			*iParam2 = 88;
			*iParam3 = 88;
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	else if (iParam0 == 269) {
		switch (iParam1) {
		case 1:
			*iParam2 = 111;
			*iParam3 = 111;
			*iParam4 = 1;
			return true;

		case 2:
			*iParam2 = 111;
			*iParam3 = 111;
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	else if (iParam0 == 279) {
		switch (iParam1) {
		case 1:
			*iParam2 = 0;
			*iParam3 = 10;
			*iParam4 = 1;
			return true;

		case 2:
			*iParam2 = 64;
			*iParam3 = 68;
			*iParam4 = 2;
			return true;
		}
		return false;
	}
	return false;
}

// Position - 0x1133C
bool func_138(int iParam0, int iParam1, int *iParam2) {
	if (iParam0 == 231) {
		switch (iParam1) {
		case 1: *iParam2 = 4; return true;

		case 2: *iParam2 = 1; return true;

		case 3: *iParam2 = 2; return true;

		case 4: *iParam2 = 3; return true;
		}
		*iParam2 = -1;
		return false;
	}
	else if (iParam0 == 232) {
		switch (iParam1) {
		case 1: *iParam2 = 2; return true;

		case 2: *iParam2 = 1; return true;
		}
		*iParam2 = -1;
		return false;
	}
	else if (iParam0 == 276) {
		switch (iParam1) {
		case 1: *iParam2 = 1; return true;

		case 2: *iParam2 = 2; return true;
		}
		*iParam2 = -1;
		return false;
	}
	*iParam2 = -1;
	return false;
}

// Position - 0x1141A
bool func_139(int iParam0) {
	if (iParam0 == 94 || iParam0 == 68 || iParam0 == 101 || iParam0 == 164 || iParam0 == 200 || iParam0 == 219 ||
		iParam0 == 231 || iParam0 == 232 || iParam0 == 275 || iParam0 == 270 || iParam0 == 274 || iParam0 == 278 ||
		iParam0 == 267 || iParam0 == 280 || iParam0 == 268 || iParam0 == 276 || iParam0 == 281 || iParam0 == 277 ||
		iParam0 == 271 || iParam0 == 272 || iParam0 == 269 || iParam0 == 279) {
		return true;
	}
	return false;
}

// Position - 0x11524
int func_140(int iParam0) {
	switch (iParam0) {
	case 39: return 0;

	case 40: return 1;

	case 43: return 0;

	case 44: return 1;

	case 45: return 2;

	case 46: return 3;

	case 47: return 4;

	case 48: return 5;

	case 49: return 6;

	case 50: return 7;

	case 51: return 8;

	case 52: return 9;

	case 53: return 10;

	case 54: return 11;

	case 55: return 12;

	case 56: return 13;

	case 57: return 14;

	case 58: return 15;

	case 59: return 16;

	case 60: return 17;

	case 61: return 18;

	case 62: return 19;

	case 63: return 20;

	case 64: return 21;

	case 65: return 22;

	case 66: return 23;

	case 67: return 24;

	case 82: return 0;

	case 83: return 1;

	case 90: return 0;

	case 91: return 1;

	default:
	}
	return -1;
}

// Position - 0x1167B
int func_141(int iParam0, int *iParam1, int *iParam2) {
	*iParam1 = -1;
	*iParam2 = -1;
	switch (iParam0) {
	case 39:
		*iParam1 = 0;
		*iParam2 = 11;
		return 1;

	case 43:
		*iParam1 = 28;
		*iParam2 = 64;
		return 1;

	case 44:
		*iParam1 = 64;
		*iParam2 = 111;
		return 1;

	case 45:
		*iParam1 = 53;
		*iParam2 = 89;
		return 1;

	case 46:
		*iParam1 = 28;
		*iParam2 = 89;
		return 1;

	case 47:
		*iParam1 = 28;
		*iParam2 = 111;
		return 1;

	case 48:
		*iParam1 = 64;
		*iParam2 = 28;
		return 1;

	case 49:
		*iParam1 = 1;
		*iParam2 = 89;
		return 1;

	case 50:
		*iParam1 = 111;
		*iParam2 = 28;
		return 1;

	case 51:
		*iParam1 = 70;
		*iParam2 = 111;
		return 1;

	case 52:
		*iParam1 = 64;
		*iParam2 = 111;
		return 1;

	case 53:
		*iParam1 = 53;
		*iParam2 = 111;
		return 1;

	case 54:
		*iParam1 = 28;
		*iParam2 = 111;
		return 1;

	case 55:
		*iParam1 = 1;
		*iParam2 = 53;
		return 1;

	case 56:
		*iParam1 = 88;
		*iParam2 = 64;
		return 1;

	case 57:
		*iParam1 = 28;
		*iParam2 = 64;
		return 1;

	case 58:
		*iParam1 = 70;
		*iParam2 = 88;
		return 1;

	case 59:
		*iParam1 = 1;
		*iParam2 = 88;
		return 1;

	case 60:
		*iParam1 = 53;
		*iParam2 = 28;
		return 1;

	case 61:
		*iParam1 = 28;
		*iParam2 = 111;
		return 1;

	case 62:
		*iParam1 = 64;
		*iParam2 = 28;
		return 1;

	case 63:
		*iParam1 = 70;
		*iParam2 = 111;
		return 1;

	case 64:
		*iParam1 = 28;
		*iParam2 = 111;
		return 1;

	case 65:
		*iParam1 = 53;
		*iParam2 = 38;
		return 1;

	case 66:
		*iParam1 = 53;
		*iParam2 = 28;
		return 1;

	case 67:
		*iParam1 = 111;
		*iParam2 = 28;
		return 1;

	case 90:
		*iParam1 = 27;
		*iParam2 = 27;
		return 1;

	case 91:
		*iParam1 = 111;
		*iParam2 = 0;
		return 1;
	}
	return 0;
}

// Position - 0x118C1
int func_142(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return -1;
	}
	switch (iParam0) {
	case 17: return 0;

	case 9: return 1;

	case 10: return 2;

	case 11: return 3;

	case 12: return 4;

	case 13: return 5;

	case 14: return 6;

	case 15: return 7;

	case 16: return 8;

	case 19: return 9;

	case 22: return 10;

	case 23: return 11;

	case 24: return 12;

	case 25: return 13;

	case 27: return 14;

	case 28: return 15;

	case 29: return 16;

	case 30: return 17;

	case 31: return 18;

	case 20: return 19;

	case 32: return 20;

	case 21: return 21;

	case 78: return 22;

	case 79: return 23;

	case 80: return 24;

	case 18: return 25;

	case 81: return 26;

	case 82: return 27;

	case 83: return 28;

	case 84: return 29;

	case 85: return 30;

	case 86: return 31;

	case 87: return 32;

	case 88: return 33;

	case 102: return 34;

	case 113: return 35;

	case 160: return 36;

	case 163: return 37;

	case 162: return 38;

	case 164:
		if (func_143(iParam0, 11, iParam1)) {
			return 40;
		}
		return 39;

	case 199: return 41;

	case 201: return 42;

	case 200:
		switch (iParam1) {
		case 1: return 43;

		case 2: return 44;

		case 3: return 45;

		case 4: return 46;

		case 5: return 47;

		case 6: return 48;

		case 7: return 49;

		case 8: return 50;

		case 9: return 51;

		case 10: return 52;

		case 11: return 53;

		case 12: return 54;

		case 13: return 55;

		case 14: return 56;

		case 15: return 57;

		case 16: return 58;

		case 17: return 59;

		case 18: return 60;

		case 19: return 61;

		case 20: return 62;

		case 21: return 63;

		case 22: return 64;

		case 23: return 65;

		case 24: return 66;

		case 25: return 67;

		default:
		}
		return 43;

	case 171: return 68;

	case 187: return 69;

	case 177: return 70;

	case 183: return 71;

	case 185: return 72;

	case 184: return 73;

	case 188: return 74;

	case 173: return 75;

	case 178: return 76;

	case 186: return 77;

	case 215: return 78;

	case 217: return 79;

	case 224: return 80;

	case 237: return 81;

	case 243: return 82;

	case 244: return 83;

	case 245: return 84;

	case 253: return 85;

	case 254: return 86;

	case 256: return 87;

	case 257: return 88;

	case 258: return 89;

	case 276:
		if (func_143(iParam0, 16, iParam1)) {
			return 91;
		}
		return 90;

	default:
	}
	return -1;
}

// Position - 0x11CE7
bool func_143(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	iVar0 = func_128(iParam0, -1);
	if (iParam0 == 164) {
		if (iParam2 == 2) {
			return true;
		}
		return false;
	}
	if (iParam0 == 276) {
		if (iParam2 == 2) {
			return true;
		}
		return false;
	}
	if (iParam0 == 95) {
		if (network::_0x67A5589628E0CFF6()) {
			return true;
		}
		return false;
	}
	else if (iParam0 == 96 || iParam0 == 97 || iParam0 == 98) {
		if (func_42() && func_160()) {
			return true;
		}
		return false;
	}
	if (iParam0 == 206 && network::network_is_game_in_progress() ||
		iParam0 == 207 && network::network_is_game_in_progress() ||
		iParam0 == 208 && network::network_is_game_in_progress() ||
		iParam0 == 209 && network::network_is_game_in_progress()) {
		if (func_42()) {
			return true;
		}
		return false;
	}
	if (iParam0 == 170 || iParam0 == 120 || iParam0 == 119 || iParam0 == 117 || iParam0 == 166) {
		return true;
	}
	if (iParam0 == 221 || iParam0 == 135 || iParam0 == 210) {
		if (iParam1 == 26) {
			return true;
		}
		return false;
	}
	if (func_161(iParam0)) {
		if (Global_68512) {
			return true;
		}
		return false;
	}
	iVar1 = func_159(iVar0);
	if (iVar1 != -1) {
		if (func_157(func_158(iVar0))) {
			return true;
		}
		return false;
	}
	if (func_156(iParam0)) {
		if (func_42()) {
			if (iParam0 == 205 && Global_262145.f_17808 || iParam0 != 205 && Global_262145.f_17807) {
				return true;
			}
			return false;
		}
		return false;
	}
	if (func_155(iParam0)) {
		if (func_144(iParam0)) {
			return false;
		}
		return true;
	}
	return false;
}

// Position - 0x11ED0
bool func_144(int iParam0) {
	int iVar0;

	iVar0 = 0;
	switch (iParam0) {
	case 187: iVar0 = 16; break;

	case 177: iVar0 = 12; break;

	case 185: iVar0 = 14; break;

	case 174: iVar0 = 9; break;

	case 171: iVar0 = 20; break;

	case 172: iVar0 = 7; break;

	case 173: iVar0 = 8; break;

	case 175: iVar0 = 10; break;

	case 176: iVar0 = 11; break;

	case 178: iVar0 = 5; break;

	case 179: iVar0 = 6; break;

	case 183: iVar0 = 21; break;

	case 180: iVar0 = 18; break;

	case 181: iVar0 = 22; break;

	case 182: iVar0 = 19; break;

	case 184: iVar0 = 13; break;

	case 186: iVar0 = 15; break;

	case 188: iVar0 = 17; break;
	}
	return func_145(iVar0);
}

// Position - 0x11FCF
int func_145(int iParam0) {
	int iVar0;
	int iVar1;

	if (func_154()) {
		return 0;
	}
	iVar0 = func_147(iParam0);
	iVar1 = iParam0;
	return gameplay::is_bit_set(iVar0, func_146(iVar1));
}

// Position - 0x11FFA
int func_146(int iParam0) { return iParam0 % 32; }

// Position - 0x12007
int func_147(var uParam0) {
	int iVar0;

	iVar0 = func_148(func_150(uParam0), -1, 0);
	return iVar0;
}

// Position - 0x1201F
int func_148(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_149(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x12051
int func_149(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_91();
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

// Position - 0x12085
int func_150(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	iVar1 = func_153(iVar0);
	if (func_152() == 0 || func_151() == 0 || func_152() == 999 && func_151() == 999) {
		switch (iVar1) {
		case 0: return 733;

		case 1: return 734;
		}
	}
	return 6022;
}

// Position - 0x120F1
int func_151() { return Global_25191; }

// Position - 0x120FC
int func_152() { return Global_25190; }

// Position - 0x12107
int func_153(int iParam0) { return iParam0 / 32; }

// Position - 0x12114
bool func_154() { return Global_1315212; }

// Position - 0x12120
bool func_155(int iParam0) {
	if (iParam0 == 171 || iParam0 == 172 || iParam0 == 173 || iParam0 == 175 || iParam0 == 177 || iParam0 == 178 ||
		iParam0 == 179 || iParam0 == 180 || iParam0 == 181 || iParam0 == 182 || iParam0 == 183 || iParam0 == 184 ||
		iParam0 == 185 || iParam0 == 186 || iParam0 == 187 || iParam0 == 188) {
		return true;
	}
	return false;
}

// Position - 0x121DA
bool func_156(int iParam0) {
	if (iParam0 == 199 || iParam0 == 200 || iParam0 == 201 || iParam0 == 202 || iParam0 == 203 || iParam0 == 204 ||
		iParam0 == 205) {
		return true;
	}
	return false;
}

// Position - 0x12231
bool func_157(int iParam0) { return gameplay::is_bit_set(func_148(5298, -1, 0), iParam0); }

// Position - 0x12248
int func_158(int iParam0) {
	switch (iParam0) {
	case joaat("dune4"): return 0;

	case joaat("dune5"): return 0;

	case joaat("wastelander"): return 1;

	case joaat("blazer5"): return 2;

	case joaat("phantom2"): return 3;

	case joaat("voltic2"): return 4;

	case joaat("technical2"): return 5;

	case joaat("boxville5"): return 6;

	case joaat("ruiner2"): return 7;

	default:
	}
	return 0;
}

// Position - 0x122B2
int func_159(int iParam0) {
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0) {
	case joaat("technical2"): return 0;

	case joaat("boxville5"): return 1;

	case joaat("wastelander"): return 2;

	case joaat("phantom2"): return 3;

	case joaat("voltic2"): return 4;

	case joaat("dune4"): return 5;

	case joaat("dune5"): return 5;

	case joaat("ruiner2"): return 6;

	case joaat("blazer5"): return 7;
	}
	return -1;
}

// Position - 0x1233B
int func_160() {
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

// Position - 0x1248F
bool func_161(int iParam0) {
	if (iParam0 == 233 || iParam0 == 234 || iParam0 == 235 || iParam0 == 236 || iParam0 == 240 || iParam0 == 241 ||
		iParam0 == 263) {
		return true;
	}
	return false;
}

// Position - 0x124E7
void func_162(int iParam0, int *iParam1) {
	switch (iParam0) {
	case 64: gameplay::set_bit(iParam1, 4); break;

	case 67: gameplay::set_bit(iParam1, 4); break;

	case 72: gameplay::set_bit(iParam1, 1); break;

	case 117: gameplay::clear_bit(iParam1, 1); break;

	case 49:
		gameplay::clear_bit(iParam1, 0);
		gameplay::set_bit(iParam1, 1);
		break;

	case 118:
		gameplay::set_bit(iParam1, 0);
		gameplay::clear_bit(iParam1, 1);
		break;

	case 1: gameplay::set_bit(iParam1, 1); break;

	case 119: gameplay::clear_bit(iParam1, 1); break;

	case 77:
		gameplay::set_bit(iParam1, 0);
		gameplay::clear_bit(iParam1, 1);
		gameplay::clear_bit(iParam1, 2);
		break;

	case 120:
		gameplay::clear_bit(iParam1, 0);
		gameplay::set_bit(iParam1, 1);
		gameplay::clear_bit(iParam1, 2);
		break;

	case 130: gameplay::set_bit(iParam1, 0); break;

	case 132: gameplay::set_bit(iParam1, 0); break;

	case 135:
		gameplay::clear_bit(iParam1, 0);
		gameplay::set_bit(iParam1, 1);
		break;

	case 137: gameplay::set_bit(iParam1, 0); break;

	case 141:
		gameplay::set_bit(iParam1, 1);
		gameplay::clear_bit(iParam1, 6);
		break;

	case 147:
		gameplay::set_bit(iParam1, 0);
		gameplay::set_bit(iParam1, 1);
		gameplay::set_bit(iParam1, 2);
		gameplay::set_bit(iParam1, 3);
		gameplay::set_bit(iParam1, 4);
		gameplay::set_bit(iParam1, 5);
		gameplay::set_bit(iParam1, 6);
		gameplay::set_bit(iParam1, 7);
		gameplay::set_bit(iParam1, 8);
		break;

	case 203:
		gameplay::set_bit(iParam1, 0);
		gameplay::clear_bit(iParam1, 1);
		gameplay::clear_bit(iParam1, 2);
		break;

	case 100:
		gameplay::set_bit(iParam1, 0);
		gameplay::set_bit(iParam1, 1);
		gameplay::set_bit(iParam1, 2);
		break;

	case 170:
		gameplay::clear_bit(iParam1, 0);
		gameplay::clear_bit(iParam1, 1);
		gameplay::clear_bit(iParam1, 2);
		break;

	case 160: gameplay::set_bit(iParam1, 15); break;

	case 161: gameplay::set_bit(iParam1, 15); break;

	case 192:
		gameplay::set_bit(iParam1, 0);
		gameplay::set_bit(iParam1, 1);
		gameplay::clear_bit(iParam1, 2);
		break;

	case 221:
		gameplay::clear_bit(iParam1, 0);
		gameplay::set_bit(iParam1, 1);
		gameplay::clear_bit(iParam1, 2);
		break;

	case 222: gameplay::set_bit(iParam1, 1); break;

	case 172: gameplay::set_bit(iParam1, 1); break;

	case 165:
		gameplay::clear_bit(iParam1, 0);
		gameplay::set_bit(iParam1, 1);
		break;

	case 166:
		gameplay::set_bit(iParam1, 0);
		gameplay::clear_bit(iParam1, 1);
		break;

	case 139: gameplay::set_bit(iParam1, 0); break;

	case 104: gameplay::set_bit(iParam1, 1); break;

	case 109:
		gameplay::set_bit(iParam1, 0);
		gameplay::set_bit(iParam1, 1);
		gameplay::set_bit(iParam1, 2);
		break;

	case 227:
	case 252:
		gameplay::set_bit(iParam1, 1);
		gameplay::clear_bit(iParam1, 2);
		gameplay::clear_bit(iParam1, 4);
		break;

	case 97:
		gameplay::set_bit(iParam1, 0);
		gameplay::set_bit(iParam1, 1);
		break;

	case 52: gameplay::set_bit(iParam1, 1); break;

	case 108: gameplay::set_bit(iParam1, 1); break;

	case 237: gameplay::set_bit(iParam1, 9); break;

	case 238:
		gameplay::clear_bit(iParam1, 0);
		gameplay::set_bit(iParam1, 1);
		gameplay::set_bit(iParam1, 2);
		break;

	case 233:
	case 234:
	case 235:
	case 236:
	case 240:
	case 241:
	case 263:
		if (Global_68512) {
			gameplay::set_bit(iParam1, 9);
		}
		break;

	case 271:
		gameplay::set_bit(iParam1, 0);
		gameplay::set_bit(iParam1, 1);
		gameplay::set_bit(iParam1, 2);
		gameplay::set_bit(iParam1, 3);
		gameplay::set_bit(iParam1, 4);
		break;

	case 272:
		gameplay::set_bit(iParam1, 3);
		gameplay::set_bit(iParam1, 4);
		break;

	case 273: gameplay::set_bit(iParam1, 0); break;

	case 281: gameplay::set_bit(iParam1, 0); break;

	case 267: gameplay::set_bit(iParam1, 0); break;

	case 268: gameplay::set_bit(iParam1, 0); break;

	case 292: gameplay::set_bit(iParam1, 9); break;

	case 309: gameplay::set_bit(iParam1, 9); break;

	default: return;
	}
}

// Position - 0x1291C
void func_163(char *sParam0) {
	int iVar0;

	StringCopy(&Global_17290.f_1, sParam0, 16);
	Global_17290.f_68 = 0;
	Global_17290.f_69 = 0;
	Global_17290.f_70 = 0;
	Global_17290.f_71 = 0;
	Global_17290.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4) {
		Global_17290.f_5[iVar0] = 0;
		iVar0++;
	}
}

// Position - 0x12967
void func_164(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	Global_17290.f_4953[0] = iParam0;
	Global_17290.f_4953[1] = iParam1;
	Global_17290.f_4953[2] = iParam2;
	Global_17290.f_4953[3] = iParam3;
	Global_17290.f_4953[4] = iParam4;
}

// Position - 0x129A6
void func_165(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	Global_17290.f_4926[0] = iParam0;
	Global_17290.f_4926[1] = iParam1;
	Global_17290.f_4926[2] = iParam2;
	Global_17290.f_4926[3] = iParam3;
	Global_17290.f_4926[4] = iParam4;
	Global_17290.f_5096 = 0;
	if (iParam0 != 0) {
		Global_17290.f_5096++;
	}
	if (iParam1 != 0) {
		Global_17290.f_5096++;
	}
	if (iParam2 != 0) {
		Global_17290.f_5096++;
	}
	if (iParam3 != 0) {
		Global_17290.f_5096++;
	}
	if (iParam4 != 0) {
		Global_17290.f_5096++;
	}
}

// Position - 0x12A50
void func_166(int iParam0) {
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = 0;
	while (iVar0 < 256) {
		StringCopy(&Global_17290.f_73[iVar0 /*6*/], "", 24);
		iVar1 = 0;
		while (iVar1 < 4) {
			Global_17290.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32) {
		StringCopy(&Global_2453058[iVar0 /*16*/], "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256) {
		Global_17290.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128) {
		Global_17290.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128) {
		Global_17290.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128) {
		Global_17290.f_4959[iVar0] = 0;
		Global_17290.f_5097[iVar0] = 0;
		Global_17290.f_5226[iVar0] = 0;
		Global_17290.f_5746[iVar0] = 0f;
		Global_17290.f_5355[iVar0] = 0;
		Global_17290.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5) {
		Global_17290.f_4926[iVar0] = 0;
		Global_17290.f_4938[iVar0] = 0f;
		Global_17290.f_4932[iVar0] = -1f;
		Global_17290.f_4945[iVar0] = 0;
		Global_17290.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12) {
		StringCopy(&Global_17290.f_4834[iVar0 /*4*/], "", 16);
		Global_17290.f_4883[iVar0] = -1;
		Global_17290.f_4896[iVar0] = 353;
		Global_17290.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 51) {
		StringCopy(&Global_17290.f_5886[iVar0 /*16*/], "", 64);
		StringCopy(&Global_17290.f_6703[iVar0 /*16*/], "", 64);
		iVar0++;
	}
	StringCopy(&Global_2593974.f_16, "", 16);
	Global_2593974.f_20 = -1;
	Global_17290 = 0;
	Global_17290.f_5088 = 0;
	Global_17290.f_5089 = 0;
	Global_17290.f_5090 = 0;
	Global_17290.f_5092 = 0;
	Global_17290.f_5093 = 0;
	Global_17290.f_5094 = 0;
	Global_17290.f_5091 = 0;
	Global_17290.f_5741 = 0;
	Global_17290.f_5606 = 0;
	Global_17290.f_5605 = 0;
	Global_17290.f_5607 = 0;
	StringCopy(&Global_17290.f_4562, "", 16);
	Global_17290.f_4632 = 0;
	Global_17290.f_4633 = 0;
	Global_17290.f_4634 = 0;
	Global_17290.f_4635 = 0;
	Global_17290.f_4636 = 0;
	Global_17290.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4) {
		Global_17290.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_4638 = 0;
	StringCopy(&Global_2593974.f_21, "", 16);
	Global_2593974.f_61 = 0;
	Global_2593974.f_62 = 0;
	Global_2593974.f_63 = 0;
	Global_2593974.f_64 = 0;
	Global_2593974.f_65 = 0;
	Global_2593974.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4) {
		Global_2593974.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2593974.f_67 = 0;
	StringCopy(&Global_17290.f_1, "", 16);
	Global_17290.f_4944 = 0f;
	Global_17290.f_68 = 0;
	Global_17290.f_69 = 0;
	Global_17290.f_70 = 0;
	Global_17290.f_71 = 0;
	Global_17290.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4) {
		Global_17290.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_5611 = 0;
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = 0;
	Global_17290.f_5609 = 0;
	Global_17290.f_4639 = 0;
	Global_17290.f_4640 = 0;
	Global_17290.f_5095 = 10;
	Global_17290.f_5096 = 0;
	Global_17290.f_5743 = 0f;
	Global_17290.f_5744 = 0f;
	Global_17290.f_5598 = 0;
	Global_17290.f_5599 = 0;
	Global_17290.f_5600 = 0f;
	Global_17290.f_5601 = 0;
	Global_17290.f_5603 = 0;
	Global_17290.f_5602 = 0;
	Global_17290.f_5604 = 0;
	Global_17290.f_7895 = 0;
	iVar0 = 0;
	while (iVar0 < 2) {
		Global_17290.f_5875[iVar0] = -1;
		Global_17290.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17290.f_4951 = 0f;
	Global_17290.f_4922 = 0;
	Global_17290.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17290.f_5881) {
		Global_17290.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_7874 = 0;
	Global_17290.f_7869 = 0;
	Global_17290.f_7879 = 0;
	Global_17290.f_7884 = 0;
	Global_17290.f_7889 = 0;
	Global_17290.f_7891 = 0;
	Global_17290.f_7897 = 0;
	Global_17287 = 0.05f;
	Global_17288 = 0.05f;
	Global_17289 = 0.225f;
	fVar2 = graphics::_get_aspect_ratio(0);
	if (iParam0) {
		Global_17289 = 0.225f * 16f / 9f / fVar2;
	}
	else if (fVar2 < 1.77777f) {
		Global_17289 = 0.225f * 16f / 9f / fVar2;
	}
	else {
		Global_17289 = 0.225f;
	}
}

// Position - 0x12F05
void func_167() {
	if (gameplay::is_pc_version()) {
		controls::_set_cursor_location(0.325f, 0.3f);
	}
}

// Position - 0x12F23
bool func_168(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = func_69(iParam0);
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

// Position - 0x12FDB
bool func_169(char *sParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_72(&iVar0, 1, iParam1)) {
		return false;
	}
	iVar1 = 1;
	StringCopy(&Global_17290.f_5505[iVar0 /*4*/], sParam0, 16);
	if (!gameplay::is_string_null_or_empty(&Global_17290.f_5505[iVar0 /*4*/])) {
		ui::request_additional_text(&Global_17290.f_5505[iVar0 /*4*/], 9);
		Global_17290.f_5498[iVar0] = 1;
		if (!ui::has_this_additional_text_loaded(&Global_17290.f_5505[iVar0 /*4*/], 9)) {
			iVar1 = 0;
		}
	}
	graphics::request_streamed_texture_dict("CommonMenu", 0);
	Global_17290.f_5484[iVar0] = 1;
	if (!graphics::has_streamed_texture_dict_loaded("CommonMenu")) {
		iVar1 = 0;
	}
	if (iParam2) {
		graphics::request_streamed_texture_dict("MPShopSale", 0);
		Global_17290.f_5491[iVar0] = 1;
		if (!graphics::has_streamed_texture_dict_loaded("MPShopSale")) {
			iVar1 = 0;
		}
	}
	iVar2 = 0;
	StringCopy(&Global_17290.f_5530[iVar0 /*10*/].f_1, "instructional_buttons", 24);
	iVar2 = func_170(&Global_17290.f_5530[iVar0 /*10*/]);
	if (!iVar1 || !iVar2) {
	}
	return iVar1 & iVar2;
}

// Position - 0x130D1
bool func_170(var *uParam0) {
	switch (uParam0->f_9) {
	case 0:
		if (!graphics::has_scaleform_movie_loaded(*uParam0)) {
			*uParam0 = unk_0x67D02A194A2FC2BD(&uParam0->f_1);
			uParam0->f_9 = 1;
			if (uParam0->f_7) {
				if (graphics::has_scaleform_movie_loaded(*uParam0)) {
					uParam0->f_8 = gameplay::get_game_timer();
					uParam0->f_9 = 2;
				}
			}
		}
		else {
			uParam0->f_8 = gameplay::get_game_timer();
			uParam0->f_9 = 2;
		}
		break;

	case 1:
		if (graphics::has_scaleform_movie_loaded(*uParam0)) {
			uParam0->f_8 = gameplay::get_game_timer();
			uParam0->f_9 = 2;
		}
		break;

	case 2:
		if (!graphics::has_scaleform_movie_loaded(*uParam0)) {
			uParam0->f_9 = 0;
		}
		break;
	}
	return uParam0->f_9 == 2;
}

// Position - 0x13173
void func_171(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x1318A
var func_172(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0x1319D
void func_173(int *iParam0, int iParam1, char *sParam2, int iParam3, char *sParam4, int iParam5, int iParam6) {
	int iVar0;

	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("context_controller")) < 1) {
	}
	if (streaming::is_player_switch_in_progress()) {
		if (*iParam0 != -1) {
			func_68(iParam0);
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

// Position - 0x132C8
int func_174(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > 2) {
		return 0;
	}
	return gameplay::is_bit_set(Global_101700.f_24141[iParam0], iVar0);
}

// Position - 0x132FA
int func_175(int iParam0) {
	int iVar0;
	int iVar1[128];

	if (func_178(1, 1)) {
		if (iVar0 < iVar1 - 1) {
			iVar1[iVar0] = joaat("elegy2");
			iVar0++;
		}
	}
	if (gameplay::is_bit_set(Global_101700.f_17533[45 /*6*/], 3)) {
		if (iVar0 < iVar1 - 1) {
			iVar1[iVar0] = joaat("dune2");
			iVar0++;
		}
	}
	if (func_42() && !network::network_is_game_in_progress()) {
		if (func_177(33, 0) && !func_176(1751306471)) {
			iVar1[iVar0] = joaat("blista3");
			iVar0++;
		}
		if (Global_101700.f_24032.f_3) {
			iVar1[iVar0] = joaat("stalion2");
			iVar0++;
		}
		if (Global_101700.f_24032.f_4) {
			iVar1[iVar0] = joaat("gauntlet2");
			iVar0++;
		}
		if (Global_101700.f_24032.f_5) {
			iVar1[iVar0] = joaat("dominator2");
			iVar0++;
		}
		if (Global_101700.f_24032.f_6) {
			iVar1[iVar0] = joaat("buffalo3");
			iVar0++;
		}
		if (Global_101700.f_24032.f_7) {
			iVar1[iVar0] = joaat("marshall");
			iVar0++;
		}
	}
	if (iParam0 >= 0 && iParam0 < iVar0) {
		return iVar1[iParam0];
	}
	return 0;
}

// Position - 0x1343F
int func_176(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_101700.f_6647.f_764) {
		if (Global_101700.f_6647.f_651[iVar0 /*14*/] == iParam0) {
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x1347A
int func_177(int iParam0, int iParam1) {
	if (gameplay::is_bit_set(Global_101700.f_23954.f_8[iParam0], iParam1)) {
		return 1;
	}
	return 0;
}

// Position - 0x1349D
bool func_178(int iParam0, int iParam1) {
	if (iParam0) {
		if (gameplay::is_bit_set(Global_101700.f_668.f_1049, 2)) {
			return true;
		}
	}
	if (network::_0x67A5589628E0CFF6()) {
		if (!iParam1 || network::network_is_signed_online()) {
			if (!gameplay::is_ps3_version() && !gameplay::is_orbis_version()) {
				return true;
			}
		}
	}
	if (iParam1) {
		if (network::_0x1353F87E89946207()) {
			return false;
		}
	}
	if (network::_0x67A5589628E0CFF6()) {
		return true;
	}
	return false;
}

// Position - 0x13509
int func_179() {
	int iVar0;

	iVar0 = 0;
	if (func_178(1, 1)) {
		if (!network::network_is_game_in_progress()) {
			iVar0++;
		}
	}
	if (gameplay::is_bit_set(Global_101700.f_17533[45 /*6*/], 3)) {
		if (!network::network_is_game_in_progress()) {
			iVar0++;
		}
	}
	if (func_42() && !network::network_is_game_in_progress()) {
		if (func_177(33, 0) && !func_176(1751306471)) {
			iVar0++;
		}
		if (Global_101700.f_24032.f_3) {
			iVar0++;
		}
		if (Global_101700.f_24032.f_4) {
			iVar0++;
		}
		if (Global_101700.f_24032.f_5) {
			iVar0++;
		}
		if (Global_101700.f_24032.f_6) {
			iVar0++;
		}
		if (Global_101700.f_24032.f_7) {
			iVar0++;
		}
	}
	return iVar0;
}

// Position - 0x135D8
int func_180(float fParam0) {
	if (entity::does_entity_exist(player::player_ped_id()) && !entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (fParam0 <= 0f) {
			return ped::_0x5407B7288D0478B7(player::player_ped_id()) > 0;
		}
		else {
			return ped::_0x336B3D200AB007CB(player::player_ped_id(),
											entity::get_entity_coords(player::player_ped_id(), 1), fParam0) > 0;
		}
	}
	return 0;
}

// Position - 0x1362A
int func_181(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return 1;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x13655
void func_182() {
	var uVar0[10];
	int iVar11;
	int iVar12;
	float fVar13;
	char *sVar14;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	int iVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	vector3 vVar30;
	bool bVar51;
	float fVar52;
	int iVar53;
	vector3 vVar54;
	vector3 vVar57;
	int iVar60;
	vector3 vVar61;
	bool bVar82;
	float fVar83;
	int iVar84;
	bool bVar85;
	struct<4> Var86;
	bool bVar90;
	int iVar91;
	struct<4> Var92;
	struct<60> Var113;
	int iVar191;
	int iVar192;
	int iVar193;
	bool bVar194;
	float fVar195;
	int iVar196;
	struct<60> Var197;
	int iVar275;
	bool bVar276;
	int iVar277;
	int iVar278;
	int iVar279;
	int iVar280;
	bool bVar281;
	bool bVar282;

	iVar11 = 0;
	if (Local_402.f_29.f_80 && Local_402.f_29.f_69 && !ped::is_ped_injured(player::player_ped_id()) &&
			Local_402.f_2 == 0 && Local_402 != -1 && func_66(Local_402, 0) && func_66(Local_402, 5) && !func_27(0) &&
			!func_27(3) && !func_27(2) && !func_27(4) && !func_27(5) && !func_27(14) && !Global_68131 && !func_181(1) &&
			!func_240() ||
		Local_402.f_3 > 1 && !func_181(0) && !ped::is_ped_injured(player::player_ped_id()) && !func_240()) {
		func_239(Local_402, &Local_546);
		fVar13 = 0f;
		sVar14 = "ANIM@APT_TRANS@GARAGE";
		vVar15 = {198.3659f, -1020.273f, -100f};
		vVar18 = {vVar15};
		vVar21 = {198.9538f, -1026.13f, -100f};
		iVar24 = func_238(Local_402);
		switch (Local_402.f_3) {
		case 0:
			if (entity::is_entity_in_angled_area(player::player_ped_id(), 207.4336f, -1019.795f, -100.4728f, 189.9338f,
												 -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) &&
				!streaming::is_player_switch_in_progress()) {
				Local_402.f_3 = 10;
				return;
			}
			if (entity::is_entity_in_angled_area(player::player_ped_id(), Local_402.f_29, Local_402.f_29.f_3,
												 Local_402.f_29.f_6, 0, 1, 0) &&
				(func_237(entity::get_entity_heading(player::player_ped_id()), Local_402.f_29.f_68, 90f) ||
				 ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) &&
				player::is_player_control_on(player::player_id()) &&
				!ped::is_ped_being_jacked(player::player_ped_id()) &&
				!ped::is_ped_getting_into_a_vehicle(player::player_ped_id()) &&
				!ai::get_is_task_active(player::player_ped_id(), 2) && (iVar24 == iLocal_672 || iVar24 == 145)) {
				if (func_236()) {
					bVar25 = true;
					if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
						iVar12 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 1);
						if (entity::does_entity_exist(iVar12)) {
							if (vehicle::is_vehicle_driveable(iVar12, 0)) {
								iVar26 = entity::get_entity_model(iVar12);
								if (!func_63(iVar26) || func_62(iVar12) || func_61(iVar12) || !func_38(iVar26, 0) ||
									vehicle::is_big_vehicle(iVar12) ||
									!vehicle::is_this_model_a_car(iVar26) && !vehicle::is_this_model_a_bike(iVar26) &&
										!vehicle::is_this_model_a_quadbike(iVar26) ||
									iVar26 == joaat("monster") || fire::is_entity_on_fire(iVar12) ||
									vehicle::is_vehicle_attached_to_trailer(iVar12) ||
									ped::is_ped_in_any_taxi(player::player_ped_id()) &&
										script::_get_number_of_instances_of_script_with_name_hash(
											joaat("taxi_procedural")) > 0) {
									bVar25 = false;
								}
							}
							else {
								bVar25 = false;
							}
						}
					}
					else if (streaming::does_anim_dict_exist(sVar14)) {
						streaming::request_anim_dict(sVar14);
						if (!streaming::has_anim_dict_loaded(sVar14)) {
							bVar25 = false;
						}
					}
					if (bVar25) {
						func_173(&iLocal_656, 3, "WEB_VEH_ENTER", 0, 0, 0, 0);
						iLocal_1034 = 0;
						Local_402.f_3 = 1;
					}
					else if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
						if (!ui::is_help_message_being_displayed() || func_172("WEB_VEH_INV")) {
							func_171("WEB_VEH_INV", -1);
							StringCopy(&cLocal_1023, "WEB_VEH_INV", 16);
							iVar11 = 1;
						}
					}
				}
				else if (!ui::is_help_message_being_displayed() || func_172("WEB_VEH_FULL")) {
					func_171("WEB_VEH_FULL", -1);
					StringCopy(&cLocal_1023, "WEB_VEH_FULL", 16);
					iVar11 = 1;
				}
			}
			break;

		case 1:
			if (!iLocal_1032) {
				if (!ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
					iLocal_1032 = 0;
					streaming::request_anim_dict(sVar14);
					if (streaming::has_anim_dict_loaded(sVar14)) {
						iLocal_1032 = 1;
					}
				}
				else {
					streaming::remove_anim_dict(sVar14);
					iLocal_1032 = 1;
				}
			}
			iVar27 = 1;
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				iVar12 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 1);
				if (entity::does_entity_exist(iVar12)) {
					if (vehicle::is_vehicle_driveable(iVar12, 0)) {
						iVar28 = entity::get_entity_model(iVar12);
						if (!func_63(iVar28) || func_62(iVar12) || func_61(iVar12) || vehicle::is_big_vehicle(iVar12) ||
							!vehicle::is_this_model_a_car(iVar28) && !vehicle::is_this_model_a_bike(iVar28) &&
								!vehicle::is_this_model_a_quadbike(iVar28) ||
							iVar28 == joaat("monster") || fire::is_entity_on_fire(iVar12) ||
							vehicle::is_vehicle_attached_to_trailer(iVar12) ||
							ped::is_ped_in_any_taxi(player::player_ped_id()) &&
								script::_get_number_of_instances_of_script_with_name_hash(joaat("taxi_procedural")) >
									0) {
							iVar27 = 0;
						}
					}
					else {
						iVar27 = 0;
					}
				}
			}
			if (entity::is_entity_in_angled_area(player::player_ped_id(), Local_402.f_29, Local_402.f_29.f_3,
												 Local_402.f_29.f_6, 0, 1, 0) &&
				(func_237(entity::get_entity_heading(player::player_ped_id()), Local_402.f_29.f_68, 90f) ||
				 ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) &&
				player::is_player_control_on(player::player_id()) && func_236() &&
				!ped::is_ped_being_jacked(player::player_ped_id()) &&
				!ped::is_ped_getting_into_a_vehicle(player::player_ped_id()) &&
				!ai::get_is_task_active(player::player_ped_id(), 2) && !func_240() &&
				(iVar24 == iLocal_672 || iVar24 == 145) && iVar27) {
				if (ped::is_ped_sitting_in_any_vehicle(player::player_ped_id()) ||
					streaming::has_anim_dict_loaded(sVar14) || !streaming::does_anim_dict_exist(sVar14)) {
					if (func_168(iLocal_656, 1)) {
						func_68(&iLocal_656);
						iLocal_1032 = 0;
						Local_402.f_3 = 2;
					}
					func_234(47, 0);
					func_229(47, 0);
					Local_402.f_112 = interior::get_interior_at_coords_with_type(vVar15, "v_garagem_sp");
					if (interior::is_valid_interior(Local_402.f_112)) {
						if (!interior::is_interior_ready(Local_402.f_112)) {
							if (gameplay::get_frame_count() % 10 == 0) {
								interior::_load_interior(Local_402.f_112);
							}
						}
						StringCopy(&Global_32504, "v_garagem_sp", 32);
					}
					if (!iLocal_1031 && !streaming::is_new_load_scene_active()) {
						if (ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
							iVar29 = func_227(Local_402);
							func_60(&vVar30, iVar29);
							vVar18 = {vVar30};
							streaming::new_load_scene_start_sphere(vVar18, 20f, 0);
						}
						else {
							streaming::new_load_scene_start_sphere(vVar21 + Vector(1f, 0f, 0f), 20f, 0);
						}
						iLocal_1031 = 1;
					}
				}
			}
			else {
				if (iLocal_1031 && streaming::is_new_load_scene_active()) {
					streaming::new_load_scene_stop();
					iLocal_1031 = 0;
				}
				iLocal_1032 = 0;
				func_68(&iLocal_656);
				streaming::remove_anim_dict(sVar14);
				Local_402.f_3 = 0;
			}
			break;

		case 2:
			func_234(47, 0);
			func_229(47, 0);
			player::force_cleanup(8);
			Global_68531.f_577 = 1;
			Global_68531.f_578 = {Local_402.f_29.f_55};
			iLocal_1012 = player::get_player_wanted_level(player::player_id());
			ai::clear_ped_tasks(player::player_ped_id());
			ped::set_ped_stealth_movement(player::player_ped_id(), 0, 0);
			player::set_player_control(player::player_id(), 0, 0);
			ui::display_hud(0);
			ui::display_radar(0);
			player::set_all_random_peds_flee_this_frame(player::player_id());
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				iVar12 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
				if (entity::does_entity_exist(iVar12) && vehicle::is_vehicle_driveable(iVar12, 0)) {
					if (func_237(entity::get_entity_heading(iVar12), Local_402.f_29.f_68, 90f)) {
						iLocal_1034 = 0;
					}
					else {
						iLocal_1034 = 1;
					}
					entity::set_entity_proofs(iVar12, 1, 1, 1, 1, 1, 1, 0, 0);
					gameplay::clear_area_of_objects(Local_546.f_86[0 /*6*/], 20f, 0);
					gameplay::clear_area_of_projectiles(Local_546.f_86[0 /*6*/], 20f, 0);
					graphics::remove_particle_fx_in_range(Local_546.f_86[0 /*6*/], 7f);
					entity::set_entity_coords(iVar12, Local_546.f_86[0 /*6*/], 1, 0, 0, 1);
					if (iLocal_1034 && !ped::is_ped_on_any_bike(player::player_ped_id())) {
						entity::set_entity_heading(iVar12, Local_546.f_86[0 /*6*/].f_3.f_2 + 180f);
					}
					else {
						entity::set_entity_heading(iVar12, Local_546.f_86[0 /*6*/].f_3.f_2);
					}
					if (ped::is_ped_on_any_bike(player::player_ped_id())) {
						ped::give_ped_helmet(player::player_ped_id(), 0, 0, -1);
						ped::set_ped_helmet(player::player_ped_id(), 1);
					}
					vehicle::set_vehicle_on_ground_properly(iVar12, 1084227584);
				}
				player::set_player_control(player::player_id(), 0, 0);
				func_221(1, 1, 1, 0);
				func_220(&Local_546[1 /*15*/], &Local_402.f_110, &Local_402.f_111);
				Local_402.f_3 = 3;
			}
			else {
				if (entity::does_entity_exist(iLocal_1027) && !entity::is_entity_dead(iLocal_1027, 0)) {
					if (entity::is_entity_a_mission_entity(iLocal_1027) &&
						entity::does_entity_belong_to_this_script(iLocal_1027, 1)) {
						entity::set_vehicle_as_no_longer_needed(&iLocal_1027);
					}
				}
				iLocal_1027 = player::get_players_last_vehicle();
				if (entity::does_entity_exist(iLocal_1027) && vehicle::is_vehicle_driveable(iLocal_1027, 0) &&
					!vehicle::is_this_model_a_heli(entity::get_entity_model(iLocal_1027)) &&
					!vehicle::is_this_model_a_plane(entity::get_entity_model(iLocal_1027)) &&
					!vehicle::is_this_model_a_boat(entity::get_entity_model(iLocal_1027))) {
					if (!entity::is_entity_a_mission_entity(iLocal_1027)) {
						entity::set_entity_as_mission_entity(iLocal_1027, 0, 0);
					}
					if (entity::does_entity_exist(iLocal_1027) && vehicle::is_vehicle_driveable(iLocal_1027, 0)) {
						if (!bVar51) {
							if (entity::is_entity_in_angled_area(iLocal_1027, Local_402.f_29, Local_402.f_29.f_3,
																 Local_402.f_29.f_6, 0, 1, 0)) {
								bVar51 = true;
							}
						}
						if (!bVar51) {
							fVar52 = system::vdist2(entity::get_entity_coords(iLocal_1027, 1), Local_546[0 /*15*/]);
							if (fVar52 < 5f * 5f) {
								bVar51 = true;
							}
						}
						if (bVar51) {
							iVar53 = func_48(24);
							if (func_219(&Local_776, 24)) {
								func_214(&Local_776, func_393());
								if (entity::does_entity_exist(iVar53)) {
									vehicle::delete_vehicle(&iVar53);
								}
							}
							if (Local_402 == 21) {
								gameplay::clear_area(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
								func_212(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
							}
							else if (Local_402 == 22) {
								gameplay::clear_area(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
								func_212(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
							}
							else if (Local_402 == 23) {
								gameplay::clear_area(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
								func_212(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
							}
							vehicle::set_vehicle_on_ground_properly(iLocal_1027, 1084227584);
						}
					}
				}
				else {
					iLocal_1027 = 0;
				}
				vVar54 = {Local_402.f_29 * FtoV(2f) + Local_402.f_29.f_3 * FtoV(1f) / FtoV(3f)};
				vVar57 = {Local_402.f_29 * FtoV(1f) + Local_402.f_29.f_3 * FtoV(2f) / FtoV(3f)};
				if (entity::is_entity_in_angled_area(player::player_ped_id(), Local_402.f_29, vVar54.x, vVar54.y,
													 Local_402.f_29.f_3.f_2, Local_402.f_29.f_6, 0, 1, 0)) {
					sLocal_1035 = "";
					switch (gameplay::get_random_int_in_range(0, 2)) {
					case 0: sLocal_1035 = "gar_open_1_left"; break;

					case 1: sLocal_1035 = "gar_open_2_left"; break;
					}
				}
				else if (entity::is_entity_in_angled_area(player::player_ped_id(), vVar54.x, vVar54.y,
														  Local_402.f_29.f_2, vVar57.x, vVar57.y,
														  Local_402.f_29.f_3.f_2, Local_402.f_29.f_6, 0, 1, 0)) {
					sLocal_1035 = "";
					switch (gameplay::get_random_int_in_range(0, 2)) {
					case 0: sLocal_1035 = "gar_open_1_left"; break;

					case 1: sLocal_1035 = "gar_open_1_right"; break;
					}
				}
				else if (entity::is_entity_in_angled_area(player::player_ped_id(), vVar57.x, vVar57.y,
														  Local_402.f_29.f_2, Local_402.f_29.f_3, Local_402.f_29.f_6, 0,
														  1, 0)) {
					sLocal_1035 = "";
					switch (gameplay::get_random_int_in_range(0, 2)) {
					case 0: sLocal_1035 = "gar_open_1_right"; break;

					case 1: sLocal_1035 = "gar_open_2_right"; break;
					}
				}
				else {
					sLocal_1035 = "";
					switch (gameplay::get_random_int_in_range(0, 6)) {
					case 0: sLocal_1035 = "gar_open_1_left"; break;

					case 1: sLocal_1035 = "gar_open_1_right"; break;

					case 2: sLocal_1035 = "gar_open_2_left"; break;

					case 3: sLocal_1035 = "gar_open_2_right"; break;

					case 4: sLocal_1035 = "gar_open_3_left"; break;

					case 5: sLocal_1035 = "gar_open_3_right"; break;
					}
				}
				gameplay::clear_area_of_objects(Local_546.f_73[0 /*4*/], 20f, 0);
				gameplay::clear_area_of_projectiles(Local_546.f_86[0 /*6*/], 20f, 0);
				entity::set_entity_coords(player::player_ped_id(), Local_546.f_73[0 /*4*/], 1, 0, 0, 1);
				entity::set_entity_heading(player::player_ped_id(), Local_546.f_73[0 /*4*/].f_3);
				iLocal_661 =
					ped::create_synchronized_scene(Local_546.f_73[0 /*4*/], 0f, 0f, Local_546.f_73[0 /*4*/].f_3, 2);
				ai::task_synchronized_scene(player::player_ped_id(), iLocal_661, sVar14, sLocal_1035, 8f, -8f, 0, 0,
											1148846080, 0);
				func_221(1, 1, 1, 0);
				func_220(&Local_546[0 /*15*/], &Local_402.f_110, &Local_402.f_111);
				Local_402.f_3 = 4;
			}
			Local_402.f_112 = interior::get_interior_at_coords_with_type(vVar15, "v_garagem_sp");
			if (interior::is_valid_interior(Local_402.f_112)) {
				if (!interior::is_interior_ready(Local_402.f_112)) {
					interior::_load_interior(Local_402.f_112);
				}
				StringCopy(&Global_32504, "v_garagem_sp", 32);
			}
			if (!iLocal_1031) {
				if (ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
					iVar60 = func_227(Local_402);
					func_60(&vVar61, iVar60);
					vVar18 = {vVar61};
					streaming::new_load_scene_start_sphere(vVar18, 20f, 0);
				}
				else {
					streaming::new_load_scene_start_sphere(vVar21, 20f, 0);
				}
			}
			gameplay::set_bit(&Local_674.f_9, 25);
			func_208(198.0043f, -999.7775f, -100f, 50f, 0);
			func_110(Local_402);
			func_110(26);
			func_110(29);
			func_110(32);
			func_110(28);
			func_110(31);
			func_110(34);
			func_110(27);
			func_110(30);
			func_110(33);
			system::settimera(0);
			iLocal_1033 = 0;
			break;

		case 4:
			bVar82 = true;
			if (!streaming::is_new_load_scene_active()) {
			}
			else if (streaming::is_new_load_scene_loaded()) {
			}
			else {
				bVar82 = false;
			}
			if (interior::is_valid_interior(Local_402.f_112)) {
				if (!interior::is_interior_ready(Local_402.f_112)) {
					interior::_load_interior(Local_402.f_112);
				}
				StringCopy(&Global_32504, "v_garagem_sp", 32);
			}
			else {
				Local_402.f_112 = interior::get_interior_at_coords_with_type(vVar15, "v_garagem_sp");
			}
			if (func_207()) {
			}
			else {
				bVar82 = false;
			}
			if (cam::does_cam_exist(Local_402.f_110) && cam::is_cam_rendering(Local_402.f_110)) {
				if (cam::is_cam_interpolating(Local_402.f_110)) {
					bVar82 = false;
				}
				if (IntToFloat(system::timera()) <= Local_546[0 /*15*/].f_14 * 1000f) {
					bVar82 = false;
				}
			}
			else if (cam::does_cam_exist(Local_402.f_111) && cam::is_cam_rendering(Local_402.f_111)) {
				if (cam::is_cam_interpolating(Local_402.f_111)) {
					bVar82 = false;
				}
				if (IntToFloat(system::timera()) <= Local_546[0 /*15*/].f_14 * 1000f) {
					bVar82 = false;
				}
			}
			else {
				bVar82 = false;
			}
			if (ped::is_synchronized_scene_running(iLocal_661)) {
				fVar83 = ped::get_synchronized_scene_phase(iLocal_661);
				if (fVar83 < 0.4f) {
					bVar82 = false;
				}
			}
			if (bVar82) {
				cam::do_screen_fade_out(800);
				Local_402.f_3 = 5;
			}
			break;

		case 5:
			if (cam::is_screen_faded_out()) {
				iVar84 = audio::get_sound_id();
				audio::play_sound_frontend(iVar84, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, 1);
				audio::set_variable_on_sound(iVar84, "hold", 2250f / 1000f);
				func_221(0, 1, 1, 0);
				cam::render_script_cams(0, 0, 3000, 1, 0, 0);
				if (cam::does_cam_exist(Local_402.f_110)) {
					cam::set_cam_active(Local_402.f_110, 0);
					cam::destroy_cam(Local_402.f_110, 0);
				}
				if (cam::does_cam_exist(Local_402.f_111)) {
					cam::set_cam_active(Local_402.f_111, 0);
					cam::destroy_cam(Local_402.f_111, 0);
				}
				if (entity::does_entity_exist(iLocal_1037)) {
					entity::set_entity_collision(iLocal_1037, 1, 0);
					entity::freeze_entity_position(iLocal_1037, 0);
					iLocal_1037 = 0;
				}
				player::clear_player_wanted_level(player::player_id());
				player::set_player_control(player::player_id(), 1, 0);
				player::force_cleanup(8);
				if (ped::is_synchronized_scene_running(iLocal_661)) {
					ped::detach_synchronized_scene(iLocal_661);
				}
				iLocal_661 = -1;
				ai::clear_ped_tasks_immediately(player::player_ped_id());
				entity::set_entity_coords(player::player_ped_id(), 194.5394f, -1026.32f, -100f, 1, 0, 0, 1);
				entity::set_entity_heading(player::player_ped_id(), 334.1665f);
				entity::freeze_entity_position(player::player_ped_id(), 1);
				cam::set_gameplay_cam_relative_heading(0f);
				cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
				system::settimera(0);
				Local_402.f_3 = 6;
			}
			break;

		case 6:
			func_206(Local_402);
			if (cam::is_screen_faded_out() && system::timera() > 2250) {
				streaming::remove_anim_dict(sVar14);
				func_205();
				if (streaming::is_new_load_scene_active()) {
					streaming::new_load_scene_stop();
				}
				cam::do_screen_fade_in(800);
				player::set_player_control(player::player_id(), 1, 0);
				entity::freeze_entity_position(player::player_ped_id(), 0);
				system::settimera(0);
				iLocal_1013 = 0;
				iLocal_1031 = 0;
				Local_402.f_3 = 10;
			}
			break;

		case 3:
			func_206(Local_402);
			bVar85 = true;
			if (!streaming::is_new_load_scene_active()) {
			}
			else if (streaming::is_new_load_scene_loaded()) {
			}
			else {
				bVar85 = false;
			}
			if (interior::is_valid_interior(Local_402.f_112)) {
				if (!interior::is_interior_ready(Local_402.f_112)) {
					interior::_load_interior(Local_402.f_112);
				}
				StringCopy(&Global_32504, "v_garagem_sp", 32);
			}
			else {
				Local_402.f_112 = interior::get_interior_at_coords_with_type(vVar15, "v_garagem_sp");
			}
			if (func_207()) {
			}
			else {
				bVar85 = false;
			}
			if (cam::does_cam_exist(Local_402.f_110) && cam::is_cam_rendering(Local_402.f_110)) {
				if (cam::is_cam_interpolating(Local_402.f_110)) {
					bVar85 = false;
				}
				if (IntToFloat(system::timera()) <= Local_546[1 /*15*/].f_14 * 1000f) {
					bVar85 = false;
				}
			}
			else if (cam::does_cam_exist(Local_402.f_111) && cam::is_cam_rendering(Local_402.f_111)) {
				if (cam::is_cam_interpolating(Local_402.f_111)) {
					bVar85 = false;
				}
				if (IntToFloat(system::timera()) <= Local_546[1 /*15*/].f_14 * 1000f) {
					bVar85 = false;
				}
			}
			else {
				bVar85 = false;
			}
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				Var86 = {0f, 0f, 0f};
				Var86.f_3 = 0f;
				func_197(player::player_ped_id(), Local_546.f_86[0 /*6*/], Local_546.f_66[0 /*3*/],
						 Local_546[1 /*15*/].f_14 * 1000f - 500f, Var86, 2, &fVar13);
			}
			if (bVar85) {
				func_205();
				system::settimera(0);
				cam::do_screen_fade_out(800);
				Local_402.f_3 = 35;
			}
			break;

		case 35:
			bVar90 = true;
			func_206(Local_402);
			if (IntToFloat(system::timera()) <= Local_546.f_61[1] * 1000f) {
				bVar90 = false;
			}
			if (bVar90) {
				func_205();
				func_221(0, 1, 1, 0);
				cam::render_script_cams(0, 0, 3000, 1, 0, 0);
				if (cam::does_cam_exist(Local_402.f_110)) {
					cam::set_cam_active(Local_402.f_110, 0);
					cam::destroy_cam(Local_402.f_110, 0);
				}
				if (cam::does_cam_exist(Local_402.f_111)) {
					cam::set_cam_active(Local_402.f_111, 0);
					cam::destroy_cam(Local_402.f_111, 0);
				}
				if (entity::does_entity_exist(iLocal_1037)) {
					entity::set_entity_collision(iLocal_1037, 1, 0);
					entity::freeze_entity_position(iLocal_1037, 0);
					iLocal_1037 = 0;
				}
				player::clear_player_wanted_level(player::player_id());
				player::set_player_control(player::player_id(), 1, 0);
				player::force_cleanup(8);
				if (streaming::is_new_load_scene_active()) {
					streaming::new_load_scene_stop();
				}
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
					iVar12 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
					if (entity::does_entity_exist(iVar12) && vehicle::is_vehicle_driveable(iVar12, 0)) {
						iVar91 = func_227(Local_402);
						func_60(&Var92, iVar91);
						entity::set_entity_coords(iVar12, Var92, 1, 0, 0, 1);
						entity::set_entity_heading(iVar12, Var92.f_3);
						vehicle::set_vehicle_doors_shut(iVar12, 1);
						vehicle::set_vehicle_engine_on(iVar12, 0, 1, 0);
						vehicle::set_vehicle_lights(iVar12, 4);
						vehicle::set_vehicle_indicator_lights(iVar12, 1, 0);
						vehicle::set_vehicle_indicator_lights(iVar12, 0, 0);
						audio::set_vehicle_radio_enabled(iVar12, 0);
						entity::set_entity_proofs(iVar12, 0, 0, 0, 0, 0, 0, 0, 0);
						ai::task_leave_vehicle(player::player_ped_id(), iVar12, 0);
						entity::freeze_entity_position(iVar12, 0);
						Var113.f_9 = 49;
						Var113.f_59 = 2;
						func_32(iVar12, &Var113);
						func_111(iVar91, &Var113, 0f, 0f, 0f, -1f, 145);
						func_30(iVar91, iVar12, 1);
						func_196(iVar12);
					}
					cam::set_gameplay_cam_relative_heading(0f);
					cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
				}
				iVar191 = ped::get_ped_nearby_peds(player::player_ped_id(), &uVar0, -1);
				iVar192 = 0;
				while (iVar192 < iVar191) {
					if (entity::does_entity_exist(uVar0[iVar192]) && !ped::is_ped_injured(uVar0[iVar192]) &&
						ped::is_ped_group_member(uVar0[iVar192], player::get_player_group(player::player_id()))) {
						entity::set_entity_coords_no_offset(uVar0[iVar192], 206.802f, -1018.011f, -100f, 0, 0, 1);
					}
					iVar192++;
				}
				system::settimera(0);
				iLocal_1013 = 0;
				iLocal_1031 = 0;
				cam::do_screen_fade_in(800);
				Local_402.f_3 = 10;
			}
			break;

		case 10:
			if (system::timera() < 7000 || !Global_101700.f_31389.f_4800) {
				if (!Global_101700.f_31389.f_4800) {
					if (iLocal_1013 == 0) {
						func_171("CAR_GAR_05", -1);
						StringCopy(&cLocal_1023, "CAR_GAR_05", 16);
						iVar11 = 1;
						if (system::timera() >= 7000) {
							system::settimera(0);
							iLocal_1013++;
						}
					}
					else if (iLocal_1013 == 1) {
						func_171("CAR_GAR_06", -1);
						StringCopy(&cLocal_1023, "CAR_GAR_06", 16);
						iVar11 = 1;
						if (system::timera() >= 7000) {
							system::settimera(0);
							Global_101700.f_31389.f_4800 = 1;
						}
					}
				}
				else {
					func_171("CAR_GAR_EXIT", -1);
					StringCopy(&cLocal_1023, "CAR_GAR_EXIT", 16);
					iVar11 = 1;
				}
			}
			else {
				Global_101700.f_31389.f_4800 = 1;
			}
			iVar193 = 0;
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				if (iLocal_656 != -1) {
					func_68(&iLocal_656);
				}
				iVar12 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
				if (entity::does_entity_exist(iVar12) && vehicle::is_vehicle_driveable(iVar12, 0)) {
					if (vehicle::get_is_vehicle_engine_running(iVar12) ||
						ped::is_ped_on_any_bike(player::player_ped_id())) {
						if (!(ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) &&
							  !ped::is_ped_sitting_in_any_vehicle(player::player_ped_id()))) {
							if (controls::_0x4F8A26A890FD62FB(0, 71) != 0f ||
								controls::is_control_just_pressed(0, 71) || controls::is_control_pressed(0, 71) ||
								controls::is_disabled_control_just_pressed(0, 71) ||
								controls::is_disabled_control_pressed(0, 71)) {
								iVar193 = 1;
							}
							if (controls::_0x4F8A26A890FD62FB(0, 72) != 0f ||
								controls::is_control_just_pressed(0, 72) || controls::is_control_pressed(0, 72) ||
								controls::is_disabled_control_just_pressed(0, 72) ||
								controls::is_disabled_control_pressed(0, 72)) {
								iVar193 = 1;
							}
						}
					}
				}
			}
			else {
				streaming::request_anim_dict(sVar14);
				if (entity::is_entity_in_angled_area(player::player_ped_id(), 191.0491f, -1026.318f, -105f, 198.0297f,
													 -1026.322f, -96.81246f, 2.0625f, 0, 1, 0) &&
					func_237(entity::get_entity_heading(player::player_ped_id()), 180f, 90f)) {
					if (iLocal_655 != -1) {
						func_68(&iLocal_655);
					}
					if (iLocal_656 == -1) {
						func_173(&iLocal_656, 3, "WEB_VEH_EXIT", 0, 0, 0, 0);
					}
					if (iLocal_655 == -1 && iLocal_656 != -1) {
						if (func_168(iLocal_656, 1)) {
							func_68(&iLocal_656);
							iVar193 = 1;
						}
					}
				}
				else if (iLocal_656 != -1) {
					func_68(&iLocal_656);
				}
			}
			if (iLocal_1016) {
				iVar193 = 1;
			}
			if (iVar193 && !func_195()) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) || iLocal_1016) {
					system::settimera(0);
					streaming::new_load_scene_start_sphere(Local_546.f_73[2 /*4*/], 20f, 0);
					if (iLocal_656 != -1) {
						func_68(&iLocal_656);
					}
					Local_402.f_3 = 12;
				}
				else if (streaming::has_anim_dict_loaded(sVar14)) {
					sLocal_1035 = "";
					switch (gameplay::get_random_int_in_range(0, 6)) {
					case 0: sLocal_1035 = "gar_open_1_left"; break;

					case 1: sLocal_1035 = "gar_open_1_right"; break;

					case 2: sLocal_1035 = "gar_open_2_left"; break;

					case 3: sLocal_1035 = "gar_open_2_right"; break;

					case 4: sLocal_1035 = "gar_open_3_left"; break;

					case 5: sLocal_1035 = "gar_open_3_right"; break;
					}
					iLocal_661 =
						ped::create_synchronized_scene(Local_546.f_73[1 /*4*/], 0f, 0f, Local_546.f_73[1 /*4*/].f_3, 2);
					ai::task_synchronized_scene(player::player_ped_id(), iLocal_661, sVar14, sLocal_1035, 8f, -8f, 0, 0,
												1148846080, 0);
					func_221(1, 1, 1, 0);
					func_220(&Local_546[2 /*15*/], &Local_402.f_110, &Local_402.f_111);
					player::set_player_control(player::player_id(), 0, 0);
					streaming::new_load_scene_start_sphere(Local_546.f_73[2 /*4*/], 20f, 0);
					system::settimera(0);
					if (iLocal_656 != -1) {
						func_68(&iLocal_656);
					}
					Local_402.f_3 = 11;
				}
				else if (!streaming::does_anim_dict_exist(sVar14)) {
					entity::set_entity_coords(player::player_ped_id(), Local_546.f_73[1 /*4*/], 1, 0, 0, 1);
					entity::set_entity_heading(player::player_ped_id(), Local_546.f_73[1 /*4*/].f_3);
					func_221(1, 1, 1, 0);
					func_220(&Local_546[2 /*15*/], &Local_402.f_110, &Local_402.f_111);
					player::set_player_control(player::player_id(), 0, 0);
					streaming::new_load_scene_start_sphere(Local_546.f_73[2 /*4*/], 20f, 0);
					system::settimera(0);
					if (iLocal_656 != -1) {
						func_68(&iLocal_656);
					}
					Local_402.f_3 = 11;
				}
			}
			break;

		case 11:
			bVar194 = true;
			if (!streaming::is_new_load_scene_active()) {
			}
			else if (streaming::is_new_load_scene_loaded()) {
			}
			else {
				bVar194 = false;
			}
			if (func_207()) {
			}
			else {
				bVar194 = false;
			}
			if (cam::does_cam_exist(Local_402.f_110) && cam::is_cam_rendering(Local_402.f_110)) {
				if (cam::is_cam_interpolating(Local_402.f_110)) {
					bVar194 = false;
				}
				if (IntToFloat(system::timera()) <= Local_546[2 /*15*/].f_14 * 1000f) {
					bVar194 = false;
				}
			}
			else if (cam::does_cam_exist(Local_402.f_111) && cam::is_cam_rendering(Local_402.f_111)) {
				if (cam::is_cam_interpolating(Local_402.f_111)) {
					bVar194 = false;
				}
				if (IntToFloat(system::timera()) <= Local_546[2 /*15*/].f_14 * 1000f) {
					bVar194 = false;
				}
			}
			else {
				bVar194 = false;
			}
			if (ped::is_synchronized_scene_running(iLocal_661)) {
				fVar195 = ped::get_synchronized_scene_phase(iLocal_661);
				if (fVar195 < 0.4f) {
					bVar194 = false;
				}
			}
			if (bVar194) {
				iLocal_1013 = 0;
				iLocal_1031 = 0;
				cam::do_screen_fade_out(800);
				system::settimera(0);
				Local_402.f_3 = 13;
			}
			break;

		case 12:
			controls::disable_control_action(0, 75, 1);
			if (system::timera() > 500) {
				iVar196 = func_194();
				if (iVar196 == 21 || iVar196 == 22 || iVar196 == 23) {
					Var197.f_9 = 49;
					Var197.f_59 = 2;
					func_111(iVar196, &Var197, 0f, 0f, 0f, -1f, 145);
					func_113(iVar196);
				}
				else if (iVar196 != -1) {
					if (!iLocal_1016) {
						func_399(iVar196, 0);
						func_113(iVar196);
					}
				}
				ai::clear_ped_tasks(player::player_ped_id());
				ped::set_ped_stealth_movement(player::player_ped_id(), 0, 0);
				player::set_player_control(player::player_id(), 0, 0);
				streaming::remove_anim_dict(sVar14);
				cam::do_screen_fade_out(800);
				Local_402.f_3 = 13;
			}
			break;

		case 13:
			if (cam::is_screen_faded_out()) {
				iVar275 = audio::get_sound_id();
				audio::play_sound_frontend(iVar275, "GARAGE_DOOR_SCRIPTED_CLOSE", 0, 1);
				audio::set_variable_on_sound(iVar275, "hold", 2250f / 1000f);
				cam::render_script_cams(0, 0, 3000, 1, 0, 0);
				if (cam::does_cam_exist(Local_402.f_110)) {
					cam::set_cam_active(Local_402.f_110, 0);
					cam::destroy_cam(Local_402.f_110, 0);
				}
				if (cam::does_cam_exist(Local_402.f_111)) {
					cam::set_cam_active(Local_402.f_111, 0);
					cam::destroy_cam(Local_402.f_111, 0);
				}
				if (entity::does_entity_exist(iLocal_1037)) {
					entity::set_entity_collision(iLocal_1037, 1, 0);
					entity::freeze_entity_position(iLocal_1037, 0);
					iLocal_1037 = 0;
				}
				player::clear_player_wanted_level(player::player_id());
				player::force_cleanup(8);
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
					if (!iLocal_1016) {
						iVar12 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
						if (entity::does_entity_exist(iVar12) && vehicle::is_vehicle_driveable(iVar12, 0)) {
							ai::clear_ped_tasks(player::player_ped_id());
							entity::set_entity_coords(iVar12, Local_402.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
							entity::set_entity_heading(iVar12, Local_402.f_29.f_77[1]);
							vehicle::set_vehicle_on_ground_properly(iVar12, 1084227584);
						}
					}
				}
				else {
					if (ped::is_synchronized_scene_running(iLocal_661)) {
						ped::detach_synchronized_scene(iLocal_661);
					}
					iLocal_661 = -1;
					ai::clear_ped_tasks_immediately(player::player_ped_id());
					entity::set_entity_coords(player::player_ped_id(), Local_402.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
					entity::set_entity_heading(player::player_ped_id(), Local_402.f_29.f_77[1]);
				}
				cam::set_gameplay_cam_relative_heading(0f);
				cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
				system::settimera(0);
				Local_402.f_3 = 14;
			}
			break;

		case 14:
			if (cam::is_screen_faded_out() && system::timera() > 2250) {
				bVar276 = true;
				if (iLocal_1016) {
					streaming::request_model(iLocal_1017);
					if (streaming::has_model_loaded(iLocal_1017)) {
						iVar277 = vehicle::create_vehicle(iLocal_1017, Local_402.f_29.f_70[0 /*3*/],
														  Local_402.f_29.f_77[0], 1, 1);
						if (iLocal_1017 == joaat("windsor")) {
							vehicle::set_vehicle_livery(iVar277, 0);
						}
						if (entity::does_entity_exist(iVar277) && vehicle::is_vehicle_driveable(iVar277, 0)) {
							ped::set_ped_into_vehicle(player::player_ped_id(), iVar277, -1);
							vehicle::set_vehicle_dirt_level(iVar277, 0f);
							streaming::set_model_as_no_longer_needed(iLocal_1017);
							if (func_114(iLocal_1017)) {
								switch (iLocal_1017) {
								case joaat("marshall"): vehicle::set_vehicle_livery(iVar277, iLocal_651); break;
								}
							}
							entity::set_vehicle_as_no_longer_needed(&iVar277);
						}
						iLocal_1016 = 0;
					}
					else {
						bVar276 = false;
					}
				}
				if (!streaming::is_new_load_scene_active()) {
				}
				else if (streaming::is_new_load_scene_loaded()) {
				}
				else {
					bVar276 = false;
				}
				if (bVar276) {
					if (entity::does_entity_exist(iLocal_1027) && vehicle::is_vehicle_driveable(iLocal_1027, 0)) {
						iVar278 = func_48(24);
						if (func_219(&Local_776, 24)) {
							func_214(&Local_776, func_393());
							if (entity::does_entity_exist(iVar278)) {
								vehicle::delete_vehicle(&iVar278);
							}
						}
						if (Local_402 == 21) {
							gameplay::clear_area(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
							entity::set_entity_coords(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 1, 0, 0, 1);
							entity::set_entity_heading(iLocal_1027, 154.4846f);
							func_212(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
						}
						else if (Local_402 == 22) {
							gameplay::clear_area(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
							entity::set_entity_coords(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 1, 0, 0, 1);
							entity::set_entity_heading(iLocal_1027, 319.6985f);
							func_212(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
						}
						else if (Local_402 == 23) {
							gameplay::clear_area(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
							entity::set_entity_coords(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 1, 0, 0, 1);
							entity::set_entity_heading(iLocal_1027, 270.8741f);
							func_212(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
						}
						vehicle::set_vehicle_on_ground_properly(iLocal_1027, 1084227584);
					}
					if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						iVar12 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
						if (entity::does_entity_exist(iVar12) && vehicle::is_vehicle_driveable(iVar12, 0)) {
							entity::set_entity_coords(iVar12, Local_546.f_66[1 /*3*/], 1, 0, 0, 1);
							entity::set_entity_heading(iVar12, Local_402.f_29.f_77[0]);
							vehicle::set_vehicle_on_ground_properly(iVar12, 1084227584);
							if (iLocal_1017 == joaat("monster") || iLocal_1017 == joaat("marshall") ||
								iLocal_1017 == joaat("rhino")) {
								vehicle::_0x428BACCDF5E26EAD(iVar12, 0);
							}
							else {
								vehicle::_0x428BACCDF5E26EAD(iVar12, 1);
							}
							if (ped::is_ped_on_any_bike(player::player_ped_id())) {
								ped::give_ped_helmet(player::player_ped_id(), 0, 0, -1);
								ped::set_ped_helmet(player::player_ped_id(), 1);
							}
							audio::set_vehicle_radio_enabled(iVar12, 1);
							func_188(func_393(), &iVar12, 3, 1);
						}
						cam::do_screen_fade_in(800);
						func_221(1, 1, 1, 0);
						func_220(&Local_546[3 /*15*/], &Local_402.f_110, &Local_402.f_111);
						iLocal_1034 = 0;
						iLocal_1036 = -1;
						Local_402.f_3 = 15;
					}
					else {
						streaming::remove_anim_dict(sVar14);
						func_205();
						cam::render_script_cams(0, 0, 3000, 1, 0, 0);
						if (cam::does_cam_exist(Local_402.f_110)) {
							cam::set_cam_active(Local_402.f_110, 0);
							cam::destroy_cam(Local_402.f_110, 0);
						}
						if (cam::does_cam_exist(Local_402.f_111)) {
							cam::set_cam_active(Local_402.f_111, 0);
							cam::destroy_cam(Local_402.f_111, 0);
						}
						if (entity::does_entity_exist(iLocal_1037)) {
							entity::set_entity_collision(iLocal_1037, 1, 0);
							entity::freeze_entity_position(iLocal_1037, 0);
							iLocal_1037 = 0;
						}
						player::clear_player_wanted_level(player::player_id());
						player::set_player_control(player::player_id(), 1, 0);
						player::force_cleanup(8);
						ai::clear_ped_tasks_immediately(player::player_ped_id());
						entity::set_entity_coords(player::player_ped_id(), Local_402.f_29.f_70[1 /*3*/], 1, 0, 0, 1);
						entity::set_entity_heading(player::player_ped_id(), Local_402.f_29.f_77[1]);
						cam::do_screen_fade_in(800);
						system::settimera(0);
						func_208(198.0043f, -999.7775f, -100f, 50f, 0);
						player::set_player_control(player::player_id(), 1, 0);
						Local_402.f_3 = 16;
					}
					if (Local_402.f_3 != 16) {
						player::set_player_control(player::player_id(), 0, 0);
					}
					ui::display_hud(0);
					ui::display_radar(0);
					system::settimera(0);
					cam::set_gameplay_cam_relative_heading(0f);
					cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
					iVar279 = ped::get_ped_nearby_peds(player::player_ped_id(), &uVar0, -1);
					iVar280 = 0;
					while (iVar280 < iVar279) {
						if (entity::does_entity_exist(uVar0[iVar280]) && !ped::is_ped_injured(uVar0[iVar280]) &&
							ped::is_ped_group_member(uVar0[iVar280], player::get_player_group(player::player_id()))) {
							if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
								iVar12 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
								if (entity::does_entity_exist(iVar12) && vehicle::is_vehicle_driveable(iVar12, 0) &&
									vehicle::get_vehicle_max_number_of_passengers(iVar12) > iVar280) {
									ped::set_ped_into_vehicle(uVar0[iVar280], iVar12, iVar280);
								}
							}
							else {
								entity::set_entity_coords_no_offset(uVar0[iVar280], Local_402.f_29.f_70[1 /*3*/], 0, 0,
																	1);
							}
						}
						iVar280++;
					}
					player::force_cleanup(8);
					iLocal_1033 = 0;
				}
			}
			break;

		case 15:
			bVar281 = true;
			if (!streaming::is_new_load_scene_active()) {
			}
			else if (streaming::is_new_load_scene_loaded()) {
			}
			else {
				bVar281 = false;
			}
			if (func_207()) {
			}
			else {
				bVar281 = false;
			}
			if (cam::does_cam_exist(Local_402.f_110) && cam::is_cam_rendering(Local_402.f_110)) {
				if (cam::is_cam_interpolating(Local_402.f_110)) {
					bVar281 = false;
				}
				if (IntToFloat(system::timera()) <= Local_546[3 /*15*/].f_14 * 1000f) {
					bVar281 = false;
				}
			}
			else if (cam::does_cam_exist(Local_402.f_111) && cam::is_cam_rendering(Local_402.f_111)) {
				if (cam::is_cam_interpolating(Local_402.f_111)) {
					bVar281 = false;
				}
				if (IntToFloat(system::timera()) <= Local_546[3 /*15*/].f_14 * 1000f) {
					bVar281 = false;
				}
			}
			else {
				bVar281 = false;
			}
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				func_197(player::player_ped_id(), Local_546.f_86[1 /*6*/], Local_546.f_66[1 /*3*/],
						 Local_546[3 /*15*/].f_14 * 1000f - 500f, Local_546.f_73[2 /*4*/], 3, &fVar13);
			}
			if (iLocal_1036 < 1 && func_187(player::player_ped_id(), 198.0043f, -999.7775f, -100f, 1) > 55f) {
				if (iLocal_1036 == 0) {
					func_208(198.0043f, -999.7775f, -100f, 50f, 0);
				}
				iLocal_1036++;
			}
			if (bVar281) {
				system::settimera(0);
				Local_402.f_3 = 16;
			}
			else {
				player::set_player_control(player::player_id(), 0, 0);
			}
			break;

		case 16:
			bVar282 = true;
			if (IntToFloat(system::timera()) <= Local_546.f_61[3] * 1000f) {
				bVar282 = false;
			}
			if (bVar282) {
				Local_402.f_3 = 17;
			}
			break;

		case 17:
			if (interior::is_valid_interior(Local_402.f_112)) {
				interior::unpin_interior(Local_402.f_112);
			}
			StringCopy(&Global_32504, "", 32);
			if (streaming::is_new_load_scene_active()) {
				streaming::new_load_scene_stop();
			}
			func_186(47, 1);
			func_184(47, 1);
			Global_68531.f_577 = 0;
			if (cam::is_screen_faded_out() || cam::is_screen_fading_out()) {
				cam::do_screen_fade_in(250);
			}
			system::settimera(0);
			cam::render_script_cams(0, 0, 3000, 1, 0, 0);
			if (cam::does_cam_exist(Local_402.f_110)) {
				cam::set_cam_active(Local_402.f_110, 0);
				cam::destroy_cam(Local_402.f_110, 0);
			}
			if (cam::does_cam_exist(Local_402.f_111)) {
				cam::set_cam_active(Local_402.f_111, 0);
				cam::destroy_cam(Local_402.f_111, 0);
			}
			if (entity::does_entity_exist(iLocal_1037)) {
				entity::set_entity_collision(iLocal_1037, 1, 0);
				entity::freeze_entity_position(iLocal_1037, 0);
				iLocal_1037 = 0;
			}
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				iVar12 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
				if (entity::does_entity_exist(iVar12) && vehicle::is_vehicle_driveable(iVar12, 0)) {
					entity::set_entity_coords(iVar12, Local_546.f_73[2 /*4*/], 1, 0, 0, 1);
					entity::set_entity_heading(iVar12, Local_546.f_73[2 /*4*/].f_3);
					vehicle::set_vehicle_on_ground_properly(iVar12, 1084227584);
					cam::set_gameplay_cam_relative_heading(0f);
					cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
				}
			}
			ui::display_hud(1);
			ui::display_radar(1);
			func_221(0, 1, 1, 0);
			ai::clear_ped_tasks(player::player_ped_id());
			player::set_player_control(player::player_id(), 1, 0);
			if (iLocal_1012 > 0) {
				player::set_player_wanted_level(player::player_id(), iLocal_1012, 0);
				player::set_player_wanted_level_now(player::player_id(), 0);
			}
			if (entity::does_entity_exist(iLocal_1027) && entity::is_entity_a_mission_entity(iLocal_1027) &&
				entity::does_entity_belong_to_this_script(iLocal_1027, 0) && iLocal_1027 != func_48(24)) {
				entity::set_vehicle_as_no_longer_needed(&iLocal_1027);
			}
			gameplay::clear_bit(&Local_674.f_9, 25);
			iLocal_1031 = 0;
			Local_402.f_3 = 18;
			break;

		case 18:
			if (cam::is_screen_faded_in()) {
				Local_402.f_3 = 0;
			}
			break;
		}
	}
	else {
		if (Global_68531.f_577) {
			func_186(47, 1);
			func_184(47, 1);
			Global_68531.f_577 = 0;
		}
		Local_402.f_3 = 0;
		if (iLocal_656 != -1) {
			func_68(&iLocal_656);
		}
	}
	if (Global_68531.f_577) {
		ui::_disable_radar_this_frame();
		func_183();
		func_75();
		weapon::set_current_ped_weapon(player::player_ped_id(), joaat("weapon_unarmed"), 1);
		controls::set_input_exclusive(2, 202);
		controls::disable_control_action(0, 37, 1);
		controls::disable_control_action(0, 157, 1);
		controls::disable_control_action(0, 158, 1);
		controls::disable_control_action(0, 159, 1);
		controls::disable_control_action(0, 160, 1);
		controls::disable_control_action(0, 161, 1);
		controls::disable_control_action(0, 162, 1);
		controls::disable_control_action(0, 163, 1);
		controls::disable_control_action(0, 164, 1);
		controls::disable_control_action(0, 165, 1);
		controls::disable_control_action(0, 14, 1);
		controls::disable_control_action(0, 15, 1);
		controls::disable_control_action(0, 53, 1);
		controls::disable_control_action(0, 54, 1);
		controls::disable_control_action(0, 140, 1);
		controls::disable_control_action(0, 141, 1);
		controls::disable_control_action(0, 142, 1);
		controls::disable_control_action(0, 143, 1);
		controls::disable_control_action(0, 143, 1);
		controls::disable_control_action(0, 47, 1);
		controls::disable_control_action(0, 38, 1);
		controls::disable_control_action(0, 22, 1);
		controls::disable_control_action(0, 102, 1);
		controls::disable_control_action(0, 69, 1);
		controls::disable_control_action(0, 70, 1);
		controls::disable_control_action(0, 68, 1);
		controls::disable_control_action(0, 92, 1);
		controls::disable_control_action(0, 99, 1);
		controls::disable_control_action(0, 115, 1);
		controls::disable_control_action(0, 46, 1);
		controls::disable_control_action(0, 25, 1);
	}
	if (!iVar11 && Local_402.f_2 == 0) {
		if (ui::is_help_message_being_displayed()) {
			if (!gameplay::is_string_null_or_empty(&cLocal_1023)) {
				if (func_172("WEB_VEH_INV") || func_172("WEB_VEH_FULL") || func_172("CAR_GAR_05") ||
					func_172("CAR_GAR_06") || func_172("CAR_GAR_EXIT")) {
					ui::clear_help(1);
				}
				StringCopy(&cLocal_1023, "", 16);
			}
		}
	}
}

// Position - 0x15D36
void func_183() { Global_17151.f_6 = 1; }

// Position - 0x15D44
void func_184(int iParam0, int iParam1) {
	struct<2> Var0;

	Var0 = {func_185(iParam0)};
	if (iParam1) {
		gameplay::set_bit(&Global_31561[Var0.f_1], Var0);
	}
	else {
		gameplay::clear_bit(&Global_31561[Var0.f_1], Var0);
	}
}

// Position - 0x15D7C
struct<2> func_185(var uParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;

	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 5) {
		iVar2 += 32;
		if (iVar0 < iVar2) {
			Var3.f_1 = iVar1;
			Var3 = iVar0 - Var3.f_1 * 32;
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

//Position - 0x15DCE
void func_186(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = {func_185(iParam0)};
	if (iParam1) {
		gameplay::set_bit(&Global_31555[Var0.f_1], Var0);
	}
	else {
		gameplay::clear_bit(&Global_31555[Var0.f_1], Var0);
	}
}

// Position - 0x15E06
float func_187(int iParam0, vector3 vParam1, int iParam4) {
	vector3 vVar0;

	if (!entity::is_entity_dead(iParam0, 0)) {
		vVar0 = {entity::get_entity_coords(iParam0, 1)};
	}
	else {
		vVar0 = {entity::get_entity_coords(iParam0, 0)};
	}
	return gameplay::get_distance_between_coords(vVar0, vParam1, iParam4);
}

// Position - 0x15E40
void func_188(int iParam0, int iParam1, int iParam2, int iParam3) {
	int *iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;

	if (func_25(iParam0) && entity::does_entity_exist(*iParam1) && vehicle::is_vehicle_driveable(*iParam1, 0)) {
		if (iParam2 > Global_101700.f_2095.f_539.f_1635) {
			return;
		}
		if (iParam2 == 0) {
		}
		else if (iParam2 == 1) {
		}
		else if (iParam2 == 2) {
		}
		else if (iParam2 == 3) {
			func_31(*iParam1, iParam0);
		}
		if (vehicle::get_num_mod_kits(*iParam1) != 0) {
			vehicle::set_vehicle_mod_kit(*iParam1, 0);
		}
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/] = entity::get_entity_model(*iParam1);
		if (vehicle::get_vehicle_trailer_vehicle(*iParam1, &iVar1)) {
			Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_1 = entity::get_entity_model(iVar1);
		}
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_2 =
			vehicle::get_vehicle_dirt_level(*iParam1);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_3 = entity::get_entity_health(*iParam1);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[0] =
			vehicle::is_vehicle_extra_turned_on(*iParam1, 1);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[1] =
			vehicle::is_vehicle_extra_turned_on(*iParam1, 2);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[2] =
			vehicle::is_vehicle_extra_turned_on(*iParam1, 3);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[3] =
			vehicle::is_vehicle_extra_turned_on(*iParam1, 4);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[4] =
			vehicle::is_vehicle_extra_turned_on(*iParam1, 5);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[5] =
			vehicle::is_vehicle_extra_turned_on(*iParam1, 6);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[6] =
			vehicle::is_vehicle_extra_turned_on(*iParam1, 7);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[7] =
			vehicle::is_vehicle_extra_turned_on(*iParam1, 8);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[8] =
			vehicle::is_vehicle_extra_turned_on(*iParam1, 9);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[9] =
			vehicle::is_vehicle_extra_turned_on(*iParam1, 10);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[10] =
			vehicle::is_vehicle_extra_turned_on(*iParam1, 11);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[11] =
			vehicle::is_vehicle_extra_turned_on(*iParam1, 12);
		if (vehicle::is_vehicle_a_convertible(*iParam1, 0)) {
			iVar2 = vehicle::get_convertible_roof_state(*iParam1);
			if (iVar2 == 0 || iVar2 == 5) {
				Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else {
				Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else {
			Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_25 =
			audio::get_player_radio_station_index();
		StringCopy(&Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_27,
				   vehicle::get_vehicle_number_plate_text(*iParam1), 16);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_26 =
			vehicle::get_vehicle_number_plate_text_index(*iParam1);
		vehicle::get_vehicle_colours(*iParam1, &Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_5,
									 &Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_6);
		vehicle::get_vehicle_extra_colours(*iParam1,
										   &Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_7,
										   &Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_8);
		vehicle::get_vehicle_tyre_smoke_color(*iParam1,
											  &Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_84,
											  &Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_85,
											  &Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_86);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_88 =
			vehicle::get_vehicle_tyres_can_burst(*iParam1);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_87 =
			vehicle::get_vehicle_window_tint(*iParam1);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_89 = vehicle::get_vehicle_livery(*iParam1);
		Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_90 =
			vehicle::get_vehicle_wheel_type(*iParam1);
		vehicle::_get_vehicle_neon_lights_colour(
			*iParam1, &Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_93,
			&Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_94,
			&Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_95);
		if (vehicle::_is_vehicle_neon_light_enabled(*iParam1, 2)) {
			gameplay::set_bit(&Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92, 28);
		}
		else {
			gameplay::clear_bit(&Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92, 28);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(*iParam1, 3)) {
			gameplay::set_bit(&Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92, 29);
		}
		else {
			gameplay::clear_bit(&Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92, 29);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(*iParam1, 0)) {
			gameplay::set_bit(&Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92, 30);
		}
		else {
			gameplay::clear_bit(&Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92, 30);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(*iParam1, 1)) {
			gameplay::set_bit(&Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92, 31);
		}
		else {
			gameplay::clear_bit(&Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92, 31);
		}
		Global_101700.f_2095.f_539.f_3545[iParam0] = 10;
		if (vehicle::get_vehicle_mod_kit(*iParam1) >= 0 && vehicle::get_vehicle_mod_kit(*iParam1) < 255 &&
			func_191(*iParam1, 0, &iVar0)) {
			func_34(iParam1, &Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31,
					&Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_81);
			if (iParam3) {
				Global_101700.f_19077[iParam0 /*43*/].f_40 = 1;
				Global_101700.f_19077[iParam0 /*43*/] =
					Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/];
				Global_101700.f_19077[iParam0 /*43*/].f_3 =
					Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_101700.f_19077[iParam0 /*43*/].f_4 =
					Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_101700.f_19077[iParam0 /*43*/].f_5 =
					Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_101700.f_19077[iParam0 /*43*/].f_6 =
					Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_101700.f_19077[iParam0 /*43*/].f_10 =
					Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_101700.f_19077[iParam0 /*43*/].f_16 =
					!Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_101700.f_19077[iParam0 /*43*/].f_19 = {
					Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_27};
				Global_101700.f_19077[iParam0 /*43*/].f_23 =
					Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_101700.f_19077[iParam0 /*43*/].f_7 =
					Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_101700.f_19077[iParam0 /*43*/].f_8 =
					Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_101700.f_19077[iParam0 /*43*/].f_9 =
					Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_101700.f_19077[iParam0 /*43*/].f_11 =
					Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_101700.f_19077[iParam0 /*43*/].f_12 =
					Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_101700.f_19077[iParam0 /*43*/].f_13 =
					Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_101700.f_19077[iParam0 /*43*/].f_14 =
					Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_101700.f_19077[iParam0 /*43*/].f_15 =
					Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_101700.f_19077[iParam0 /*43*/].f_18 =
					Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_101700.f_19077[iParam0 /*43*/].f_17 =
					Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_101700.f_19077[iParam0 /*43*/].f_24 = vehicle::get_num_vehicle_mods(*iParam1, 11) + 1;
				Global_101700.f_19077[iParam0 /*43*/].f_25 = vehicle::get_num_vehicle_mods(*iParam1, 12) + 1;
				Global_101700.f_19077[iParam0 /*43*/].f_26 = vehicle::get_num_vehicle_mods(*iParam1, 4) + 1;
				Global_101700.f_19077[iParam0 /*43*/].f_27 = vehicle::get_num_vehicle_mods(*iParam1, 23) + 1;
				Global_101700.f_19077[iParam0 /*43*/].f_28 = vehicle::get_num_vehicle_mods(*iParam1, 14) + 1;
				Global_101700.f_19077[iParam0 /*43*/].f_29 = vehicle::get_num_vehicle_mods(*iParam1, 16) + 1;
				Global_101700.f_19077[iParam0 /*43*/].f_30 = vehicle::get_num_vehicle_mods(*iParam1, 15) + 1;
				Global_101700.f_19077[iParam0 /*43*/].f_32 = vehicle::_0xEEBFC7A7EFDC35B4(*iParam1);
				Global_101700.f_19077[iParam0 /*43*/].f_33[0] = audio::get_vehicle_default_horn(*iParam1);
				Global_101700.f_19077[iParam0 /*43*/].f_33[1] =
					vehicle::get_vehicle_mod_modifier_value(*iParam1, 14, 0);
				Global_101700.f_19077[iParam0 /*43*/].f_33[2] =
					vehicle::get_vehicle_mod_modifier_value(*iParam1, 14, 1);
				Global_101700.f_19077[iParam0 /*43*/].f_33[3] =
					vehicle::get_vehicle_mod_modifier_value(*iParam1, 14, 2);
				Global_101700.f_19077[iParam0 /*43*/].f_33[4] =
					vehicle::get_vehicle_mod_modifier_value(*iParam1, 14, 3);
				Global_101700.f_19077[iParam0 /*43*/].f_39 = vehicle::get_vehicle_mod_kit_type(*iParam1);
				Global_101700.f_19077[iParam0 /*43*/].f_31 = func_190(*iParam1);
				Global_101700.f_19077[iParam0 /*43*/].f_33[0] = audio::_0xACB5DCCA1EC76840(*iParam1);
				vehicle::get_vehicle_mod_color_1(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0) {
					iVar3 = 0;
				}
				else if (iVar4 == 1) {
					iVar3 = 1;
				}
				else if (iVar4 == 3) {
					iVar3 = 2;
				}
				else if (iVar4 == 4) {
					iVar3 = 3;
				}
				else if (iVar4 == 5) {
					iVar3 = 4;
				}
				else {
					iVar3 = -1;
				}
				func_189(Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_5,
						 Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1,
						 &Global_101700.f_19077[iParam0 /*43*/].f_1);
				vehicle::get_vehicle_mod_color_2(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0) {
					iVar3 = 0;
				}
				else if (iVar4 == 1) {
					iVar3 = 1;
				}
				else if (iVar4 == 3) {
					iVar3 = 2;
				}
				else if (iVar4 == 4) {
					iVar3 = 3;
				}
				else if (iVar4 == 5) {
					iVar3 = 4;
				}
				else {
					iVar3 = -1;
				}
				func_189(Global_101700.f_2095.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0,
						 &Global_101700.f_19077[iParam0 /*43*/].f_2);
			}
		}
	}
}

// Position - 0x16A63
int func_189(int iParam0, int iParam1, int iParam2, int iParam3, int *iParam4) {
	int iVar0;
	int iVar1;
	char *sVar2;
	int iVar6;
	int iVar7;

	iVar0 = 0;
	while (func_135(iVar0, &sVar2, &iVar1, &iVar6, &iVar7)) {
		if (iParam0 == iVar6 && (!iParam3 || iParam1 == iVar7) &&
			(iParam2 == iVar1 || iParam2 == -1 || iParam2 == 255)) {
			*iParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*iParam4 = -1;
	return 0;
}

// Position - 0x16AD6
float func_190(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;

	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0) &&
		vehicle::get_vehicle_mod_kit(iParam0) >= 0 && vehicle::get_vehicle_mod_kit(iParam0) < 255) {
		if (vehicle::get_vehicle_mod_kit_type(iParam0) == 3) {
			iVar5 = iVar0;
		}
		else if (vehicle::get_vehicle_mod_kit_type(iParam0) == 1) {
			iVar5 = iVar1;
		}
		else if (vehicle::get_vehicle_mod_kit_type(iParam0) == 2) {
			iVar5 = iVar2;
		}
		else if (vehicle::get_vehicle_mod_kit_type(iParam0) == 0) {
			if (vehicle::is_this_model_a_bike(entity::get_entity_model(iParam0))) {
				iVar5 = iVar3;
			}
			else {
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = system::to_float(iVar5) / system::to_float(iVar4);
	return fVar6;
}

// Position - 0x16B94
int func_191(int iParam0, int iParam1, int *iParam2) {
	int iVar0;

	*iParam2 = 0;
	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	if (!vehicle::is_vehicle_driveable(iParam0, 0)) {
		return 0;
	}
	if (!streaming::is_model_a_vehicle(entity::get_entity_model(iParam0))) {
		return 0;
	}
	iVar0 = entity::get_entity_model(iParam0);
	if (!func_192(iVar0, iParam1, iParam2)) {
		return 0;
	}
	if (vehicle::is_big_vehicle(iParam0)) {
		*iParam2 = 2;
		return 0;
	}
	if (!network::network_is_game_in_progress()) {
		if (func_61(iParam0) && entity::get_entity_model(iParam0) != joaat("sentinel2") &&
			entity::get_entity_model(iParam0) != joaat("issi2")) {
			*iParam2 = 2;
			return 0;
		}
	}
	return 1;
}

// Position - 0x16C36
int func_192(int iParam0, bool bParam1, int *iParam2) {
	if (!bParam1) {
		if (iParam0 == joaat("police") || iParam0 == joaat("policeold1") || iParam0 == joaat("policeold2") ||
			iParam0 == joaat("police2") || iParam0 == joaat("police3") || iParam0 == joaat("police4") ||
			iParam0 == joaat("fbi") || iParam0 == joaat("fbi2") || iParam0 == joaat("polmav") ||
			iParam0 == joaat("policeb") || iParam0 == joaat("policet") || iParam0 == joaat("riot") ||
			iParam0 == joaat("sheriff") || iParam0 == joaat("pranger") || iParam0 == joaat("sheriff2")) {
			*iParam2 = 1;
			return 0;
		}
	}
	if (iParam0 == joaat("ambulance") || iParam0 == joaat("firetruk") || iParam0 == joaat("taxi") ||
		iParam0 == joaat("lguard") || iParam0 == joaat("ripley") || iParam0 == joaat("dilettante2") ||
		iParam0 == joaat("airbus") || iParam0 == joaat("airtug")) {
		*iParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2") || iParam0 == joaat("speedo") ||
		iParam0 == joaat("speedo2")) {
		*iParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("scorcher") || iParam0 == joaat("bmx") || iParam0 == joaat("cruiser") ||
		iParam0 == joaat("fixter")) {
		*iParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("caddy") || iParam0 == joaat("forklift") || iParam0 == joaat("caddy2") ||
		iParam0 == joaat("crusader") || iParam0 == joaat("tribike") || iParam0 == joaat("tribike2") ||
		iParam0 == joaat("tribike3") || iParam0 == joaat("tractor") || iParam0 == joaat("tractor2") ||
		iParam0 == joaat("mower") || iParam0 == joaat("tornado4") || iParam0 == joaat("docktug") ||
		iParam0 == joaat("stretch") || iParam0 == joaat("bison2") || iParam0 == joaat("bison3") ||
		iParam0 == joaat("benson") || iParam0 == joaat("pounder") || iParam0 == joaat("submersible") ||
		iParam0 == joaat("emperor3") || iParam0 == joaat("dune2")) {
		*iParam2 = 2;
		return 0;
	}
	if (!vehicle::is_this_model_a_car(iParam0) && !vehicle::is_this_model_a_bike(iParam0) &&
		iParam0 != joaat("blazer") && iParam0 != joaat("blazer3") && iParam0 != joaat("blazer4") &&
		iParam0 != joaat("blazer5") && iParam0 != joaat("chimera")) {
		*iParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster")) {
		*iParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("insurgent") || iParam0 == joaat("technical") || iParam0 == joaat("limo2")) {
		*iParam2 = 2;
		return 0;
	}
	if (network::network_is_game_in_progress()) {
		if (func_193(iParam0)) {
			*iParam2 = 2;
			return 0;
		}
	}
	if (!network::network_is_game_in_progress()) {
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2")) {
			*iParam2 = 2;
		}
	}
	return 1;
}

// Position - 0x17004
bool func_193(int iParam0) {
	switch (iParam0) {
	case joaat("towtruck"):
	case joaat("towtruck2"):
	case joaat("forklift"): return true;
	}
	return false;
}

// Position - 0x1702D
int func_194() {
	int iVar0;

	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
		if (entity::does_entity_exist(iVar0) && vehicle::is_vehicle_driveable(iVar0, 0)) {
			if (iVar0 == Global_68531.f_484[21]) {
				return 21;
			}
			if (iVar0 == Global_68531.f_484[26]) {
				return 26;
			}
			if (iVar0 == Global_68531.f_484[29]) {
				return 29;
			}
			if (iVar0 == Global_68531.f_484[32]) {
				return 32;
			}
			if (iVar0 == Global_68531.f_484[22]) {
				return 22;
			}
			if (iVar0 == Global_68531.f_484[27]) {
				return 27;
			}
			if (iVar0 == Global_68531.f_484[30]) {
				return 30;
			}
			if (iVar0 == Global_68531.f_484[33]) {
				return 33;
			}
			if (iVar0 == Global_68531.f_484[23]) {
				return 23;
			}
			if (iVar0 == Global_68531.f_484[28]) {
				return 28;
			}
			if (iVar0 == Global_68531.f_484[31]) {
				return 31;
			}
			if (iVar0 == Global_68531.f_484[34]) {
				return 34;
			}
		}
	}
	return -1;
}

// Position - 0x1715E
bool func_195() { return gameplay::get_game_timer() <= Global_17290.f_5745 + 100; }

// Position - 0x17173
void func_196(int iParam0) {
	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0) && iParam0 == Global_69436) {
		Global_101700.f_31389.f_5588 = 0;
		Global_69436 = 0;
	}
}

// Position - 0x171AC
int func_197(int iParam0, struct<4> Param1, var uParam5, var uParam6, vector3 vParam7, float fParam10,
			 struct<4> Param11, int iParam15, float fParam16) {
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;
	vector3 vVar13;
	float fVar16;
	float fVar17;
	float fVar18;

	vVar0 = {Param1};
	vVar3 = {Param1.f_3};
	vVar6 = {vParam7};
	vVar9 = {Param1.f_3};
	if (iLocal_1033 == 0) {
		iVar12 = ped::get_vehicle_ped_is_in(iParam0, 0);
		iLocal_1037 = iVar12;
		vehicle::set_vehicle_doors_shut(iLocal_1037, 1);
		vehicle::set_vehicle_doors_locked(iLocal_1037, 1);
		vehicle::set_vehicle_on_ground_properly(iLocal_1037, 1084227584);
		vehicle::set_vehicle_engine_on(iLocal_1037, 1, 1, 0);
		if (ped::is_ped_on_any_bike(iParam0)) {
			ped::give_ped_helmet(iParam0, 0, 0, -1);
			ped::set_ped_helmet(iParam0, 1);
		}
		vVar13 = {entity::get_entity_coords(iLocal_1037, 1)};
		fLocal_1038 = vVar13.z - vVar0.z;
		entity::set_entity_coords(iLocal_1037, vVar0 + Vector(-10f, 0f, 0f), 1, 0, 0, 1);
		if (vehicle::is_vehicle_driveable(iLocal_1037, 0)) {
			vehicle::set_vehicle_lights(iLocal_1037, 3);
		}
		iLocal_1039 = gameplay::get_game_timer();
		iLocal_1033 = 1;
	}
	if (iLocal_1033 == 1) {
		if (entity::does_entity_exist(iLocal_1037) && vehicle::is_vehicle_driveable(iLocal_1037, 0)) {
			fVar16 = system::to_float(iLocal_1039);
			fVar17 = fVar16 + fParam10;
			fVar18 = func_204(system::to_float(gameplay::get_game_timer()), fVar16, fVar17);
			fVar18 -= fVar16;
			fVar18 /= fParam10;
			if (iParam15 == 1) {
				fVar18 = func_203(fVar18);
			}
			else if (iParam15 == 2) {
				fVar18 = func_202(fVar18);
			}
			else if (iParam15 == 3) {
				fVar18 = func_200(fVar18);
			}
			fVar18 *= fParam10;
			fVar18 += fVar16;
			controls::disable_control_action(0, 72, 1);
			entity::set_entity_coords_no_offset(iLocal_1037,
												func_198(vVar0 + Vector(fLocal_1038, 0f, 0f),
														 vVar6 + Vector(fLocal_1038, 0f, 0f), fVar16, fVar17, fVar18),
												0, 0, 1);
			if (iLocal_1034 && !ped::is_ped_on_any_bike(iParam0)) {
				entity::set_entity_rotation(iLocal_1037,
											func_198(0f - vVar3.x, 0f - vVar3.y, vVar3.z + 180f, 0f - vVar9.x,
													 0f - vVar9.y, vVar9.z + 180f, fVar16, fVar17, fVar18),
											2, 1);
			}
			else {
				if (!ped::is_ped_injured(iParam0)) {
					if (ped::is_ped_on_any_bike(iParam0)) {
						ped::set_ped_reset_flag(iParam0, 236, 1);
						ped::set_ped_reset_flag(iParam0, 309, 1);
					}
				}
				entity::set_entity_rotation(iLocal_1037, func_198(vVar3, vVar9, fVar16, fVar17, fVar18), 2, 1);
			}
			entity::set_entity_collision(iLocal_1037, 0, 0);
			entity::freeze_entity_position(iLocal_1037, 1);
		}
		else {
			iLocal_1033 = 2;
			return 0;
		}
		if (system::to_float(gameplay::get_game_timer()) > system::to_float(iLocal_1039) + fParam10 &&
			system::to_float(gameplay::get_game_timer()) > system::to_float(iLocal_1039) + fParam10 + 2600f) {
			iLocal_1033 = 2;
			return 0;
		}
	}
	if (iLocal_1033 == 2) {
		ped::set_ped_reset_flag(iParam0, 236, 0);
		ped::set_ped_reset_flag(iParam0, 309, 0);
		if (entity::does_entity_exist(iLocal_1037)) {
			if (!func_21(Param11, 0f, 0f, 0f, 0)) {
				entity::set_entity_coords(iLocal_1037, Param11, 1, 0, 0, 1);
				entity::set_entity_heading(iLocal_1037, Param11.f_3);
				vehicle::set_vehicle_on_ground_properly(iLocal_1037, 1084227584);
			}
			entity::set_entity_collision(iLocal_1037, 1, 0);
			entity::freeze_entity_position(iLocal_1037, 0);
			iLocal_1037 = 0;
		}
		if (ped::is_ped_on_any_bike(iParam0)) {
			ped::remove_ped_helmet(iParam0, 0);
		}
		return 1;
	}
	return 0;
}

// Position - 0x174A4
Vector3 func_198(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8) {
	return func_199(vParam0.x, vParam3.x, fParam6, fParam7, fParam8),
		   func_199(vParam0.y, vParam3.y, fParam6, fParam7, fParam8),
		   func_199(vParam0.z, vParam3.z, fParam6, fParam7, fParam8);
}

// Position - 0x174DE
float func_199(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4) {
	return (fParam1 - fParam0) / (fParam3 - fParam2) * (fParam4 - fParam2) + fParam0;
}

// Position - 0x174FA
float func_200(float fParam0) {
	float fVar0;

	if (fParam0 > 0f) {
		if (fParam0 < 1f) {
			fVar0 = system::sin(func_201(fParam0 * 3.141593f * 0.5f));
		}
		else {
			fVar0 = 1f;
		}
	}
	else {
		fVar0 = 0f;
	}
	return fVar0;
}

// Position - 0x17536
float func_201(float fParam0) { return fParam0 * 57.29578f; }

// Position - 0x17546
float func_202(float fParam0) {
	float fVar0;

	if (fParam0 > 0f) {
		if (fParam0 < 1f) {
			fVar0 = 1f - system::cos(func_201(fParam0 * 3.141593f * 0.5f));
		}
		else {
			fVar0 = 1f;
		}
	}
	else {
		fVar0 = 0f;
	}
	return fVar0;
}

// Position - 0x17584
float func_203(float fParam0) {
	float fVar0;

	if (fParam0 > 0f) {
		if (fParam0 < 1f) {
			fVar0 = 0.5f * (1f - system::cos(func_201(fParam0 * 3.141593f)));
		}
		else {
			fVar0 = 1f;
		}
	}
	else {
		fVar0 = 0f;
	}
	return fVar0;
}

// Position - 0x175C2
float func_204(float fParam0, float fParam1, float fParam2) {
	if (fParam0 > fParam2) {
		return fParam2;
	}
	else if (fParam0 < fParam1) {
		return fParam1;
	}
	return fParam0;
}

// Position - 0x175E9
void func_205() {
	Global_68531.f_553 = 1;
	Global_68531.f_554 = 0;
}

// Position - 0x17601
void func_206(var uParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 4) {
		iVar2 = uParam0;
		iVar1 = 9 + iVar2 - 21;
		if (iVar0 > 0) {
			iVar2 += 2 + iVar0 * 3;
			iVar1 = 9 + iVar2 - 21 - 2;
		}
		iLocal_117[iVar2] = Global_101700.f_31389.f_69[iVar1 /*78*/].f_66;
		if (iLocal_117[iVar2] != 0) {
			if (!gameplay::is_bit_set(uLocal_48[iVar2], 2)) {
				streaming::request_model(iLocal_117[iVar2]);
				gameplay::set_bit(&uLocal_48[iVar2], 2);
				func_397(iVar2);
			}
		}
		iVar0++;
	}
}

// Position - 0x1768F
bool func_207() { return !Global_68531.f_553; }

// Position - 0x1769F
void func_208(vector3 vParam0, float fParam3, int iParam4) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68) {
		if (func_60(&Global_68531.f_555[0 /*21*/], iVar0)) {
			if (gameplay::get_distance_between_coords(vParam0, Global_68531.f_555[0 /*21*/], iParam4) <= fParam3) {
				func_209(iVar0);
			}
		}
		iVar0++;
	}
}

// Position - 0x176EF
void func_209(int iParam0) {
	bool bVar0;

	if (iParam0 == -1) {
		return;
	}
	if (func_60(&Global_68531.f_555[0 /*21*/], iParam0)) {
		if (entity::does_entity_exist(Global_68531.f_139[iParam0])) {
			bVar0 = true;
			if (!ped::is_ped_injured(player::player_ped_id())) {
				if (vehicle::is_vehicle_driveable(Global_68531.f_139[iParam0], 0)) {
					if (ped::is_ped_in_vehicle(player::player_ped_id(), Global_68531.f_139[iParam0], 0)) {
						bVar0 = false;
					}
				}
			}
			if (bVar0) {
				entity::set_entity_as_mission_entity(Global_68531.f_139[iParam0], 1, 1);
				vehicle::delete_vehicle(&Global_68531.f_139[iParam0]);
			}
		}
		Global_68531[iParam0] = 1;
		if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 13)) {
			if (iParam0 == 24 && func_66(iParam0, 0) && Global_69440.f_66 == 0 &&
				Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] != 0 &&
				Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] > 3 &&
				(!func_210(0, Global_68531.f_555[0 /*21*/].f_12) || !func_210(1, Global_68531.f_555[0 /*21*/].f_12))) {
				func_112(&Global_101700.f_31389.f_69[Global_68531.f_555[0 /*21*/].f_14 /*78*/], &Global_69440);
				Global_69518 = Global_101700.f_31389.f_5591;
			}
			func_399(iParam0, 0);
		}
	}
}

// Position - 0x17861
bool func_210(int iParam0, int iParam1) {
	int iVar0;

	switch (iParam1) {
	case 0: iVar0 = 0; break;

	case 1: iVar0 = 1; break;

	case 2: iVar0 = 2; break;
	}
	if (iParam0 < 0 || iParam0 >= func_211(&Global_101700.f_31389.f_5038[iVar0 /*157*/])) {
		return false;
	}
	return func_38(Global_101700.f_31389.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

// Position - 0x178D3
int func_211(var *uParam0) { return *uParam0; }

// Position - 0x178DE
void func_212(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6) {
	struct<60> Var0;

	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0)) {
		if (iParam5 != 24 && iParam5 != 25) {
			return;
		}
		if (iParam5 == 24) {
			if (entity::does_entity_exist(Global_68531.f_484[25]) &&
				vehicle::is_vehicle_driveable(Global_68531.f_484[25], 0)) {
				if (Global_68531.f_484[25] == iParam0) {
					return;
				}
			}
		}
		if (!iParam6) {
			if (vehicle::is_big_vehicle(iParam0) || entity::get_entity_model(iParam0) == joaat("bus") ||
				entity::get_entity_model(iParam0) == joaat("tourbus")) {
				return;
			}
		}
		func_213(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_32(iParam0, &Var0);
		if (func_21(vParam1, 0f, 0f, 0f, 0)) {
			vParam1 = {entity::get_entity_coords(iParam0, 1)};
			fParam4 = entity::get_entity_heading(iParam0);
		}
		if (iParam5 == 24) {
			if (gameplay::get_hash_key(script::get_this_script_name()) != joaat("vehicle_gen_controller")) {
				Global_69519 = gameplay::get_hash_key(script::get_this_script_name());
			}
		}
		func_111(iParam5, &Var0, vParam1, fParam4, func_45(iParam0));
		func_30(iParam5, iParam0, 0);
	}
}

// Position - 0x17A07
void func_213(int iParam0) {
	if (iParam0 != 24 && iParam0 != 25) {
	}
	func_113(iParam0);
	func_399(iParam0, 0);
}

// Position - 0x17A2E
int func_214(var *uParam0, int iParam1) {
	int iVar0;

	if (!func_37(uParam0->f_66)) {
		return 0;
	}
	if (entity::does_entity_exist(Global_69437)) {
		return 0;
	}
	switch (iParam1) {
	case 0: iVar0 = 0; break;

	case 1: iVar0 = 1; break;

	case 2: iVar0 = 2; break;

	default: return 0;
	}
	if (!func_210(0, iParam1)) {
		Global_101700.f_31389.f_5592[iVar0] = 0;
	}
	else if (!func_210(1, iParam1)) {
		Global_101700.f_31389.f_5592[iVar0] = 1;
	}
	func_215(iParam1, vehicle::get_display_name_from_vehicle_model(uParam0->f_66));
	func_112(uParam0, &Global_101700.f_31389.f_5038[iVar0 /*157*/][Global_101700.f_31389.f_5592[iVar0] /*78*/]);
	Global_101700.f_31389.f_5592[iVar0]++;
	if (Global_101700.f_31389.f_5592[iVar0] >= func_211(&Global_101700.f_31389.f_5038[iVar0 /*157*/])) {
		Global_101700.f_31389.f_5592[iVar0] = 0;
	}
	iVar0 = 0;
	while (iVar0 < 3) {
		if (Global_90960[iVar0 /*98*/] == uParam0->f_66 &&
			gameplay::are_strings_equal(&Global_90960[iVar0 /*98*/].f_27, &uParam0->f_1)) {
			Global_90960[iVar0 /*98*/] = 0;
		}
		iVar0++;
	}
	return 1;
}

// Position - 0x17B86
void func_215(int iParam0, char *sParam1) {
	if (!func_25(iParam0)) {
		return;
	}
	if (!Global_101700.f_31389.f_5596[iParam0]) {
		switch (iParam0) {
		case 0:
			func_216("IMPOUND_HELPM", sParam1, 2, gameplay::get_random_int_in_range(1000, 6000), -1, 10000, 1, 0, 0, 0);
			break;

		case 1:
			func_216("IMPOUND_HELPF", sParam1, 2, gameplay::get_random_int_in_range(1000, 6000), -1, 10000, 2, 0, 0, 0);
			break;

		case 2:
			func_216("IMPOUND_HELPT", sParam1, 2, gameplay::get_random_int_in_range(1000, 6000), -1, 10000, 4, 0, 0, 0);
			break;
		}
		Global_101700.f_31389.f_5596[iParam0] = 1;
	}
}

// Position - 0x17C35
void func_216(char *sParam0, char *sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6,
			  int iParam7, int iParam8, int iParam9) {
	func_217(sParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

// Position - 0x17C55
void func_217(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6,
			  int iParam7, int iParam8, var uParam9) {
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
		func_218();
	}
}

// Position - 0x17E28
void func_218() {
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

// Position - 0x17F48
bool func_219(var *uParam0, int iParam1) {
	if (iParam1 == -1) {
		return false;
	}
	if (!func_60(&Global_68531.f_555[0 /*21*/], iParam1)) {
		return false;
	}
	else {
		func_112(&Global_101700.f_31389.f_69[Global_68531.f_555[0 /*21*/].f_14 /*78*/], uParam0);
	}
	return true;
}

// Position - 0x17F93
int func_220(var *uParam0, var *uParam1, var *uParam2) {
	if (cam::does_cam_exist(*uParam1)) {
		cam::destroy_cam(*uParam1, 0);
	}
	if (cam::does_cam_exist(*uParam2)) {
		cam::destroy_cam(*uParam2, 0);
	}
	*uParam1 = cam::create_cam("DEFAULT_SCRIPTED_CAMERA", 0);
	*uParam2 = cam::create_cam("DEFAULT_SCRIPTED_CAMERA", 0);
	if (cam::does_cam_exist(*uParam1) && cam::does_cam_exist(*uParam2)) {
		cam::set_cam_coord(*uParam1, *uParam0);
		cam::set_cam_rot(*uParam1, uParam0->f_3, 2);
		cam::set_cam_fov(*uParam1, uParam0->f_12);
		cam::set_cam_coord(*uParam2, uParam0->f_6);
		cam::set_cam_rot(*uParam2, uParam0->f_6.f_3, 2);
		cam::set_cam_fov(*uParam2, uParam0->f_12);
		cam::shake_cam(*uParam1, "HAND_SHAKE", uParam0->f_13);
		cam::shake_cam(*uParam2, "HAND_SHAKE", uParam0->f_13);
		if (uParam0->f_14 > 0.1f) {
			cam::set_cam_active_with_interp(*uParam2, *uParam1, system::round(uParam0->f_14 * 1000f), 1, 1);
		}
		else {
			cam::set_cam_active(*uParam1, 1);
		}
		cam::render_script_cams(1, 0, 3000, 1, 0, 0);
		return 1;
	}
	return 0;
}

// Position - 0x1809B
void func_221(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0) {
		player::special_ability_deactivate_fast(player::player_id());
		player::set_all_random_peds_flee(player::player_id(), 1);
		player::set_police_ignore_player(player::player_id(), 1);
		func_226(1);
		ui::_0xA8FDB297A8D25FBA();
		ui::_0xFDB423997FA30340();
		if (Global_14443.f_1 > 3) {
			if (audio::is_mobile_phone_call_ongoing()) {
				audio::stop_scripted_conversation(0);
			}
			if (!func_77()) {
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_225(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		Global_69700 = 1;
	}
	else {
		func_226(0);
		ui::_0xE1CD1E48E025E661();
		Global_55828 = 0;
		if (iParam1) {
			graphics::_0x03FC694AE06C5A20();
		}
		player::set_all_random_peds_flee(player::player_id(), 0);
		player::set_police_ignore_player(player::player_id(), 0);
		func_225(0, iParam3, iParam2, 0);
		if (network::network_is_game_in_progress()) {
			if (!ped::is_ped_injured(player::player_ped_id()) && !func_223(player::player_id()) &&
				!func_89(player::player_id(), 0) && !func_222()) {
				entity::set_entity_invincible(player::player_ped_id(), 0);
			}
		}
		else if (!ped::is_ped_injured(player::player_ped_id()) && !func_223(player::player_id())) {
			entity::set_entity_invincible(player::player_ped_id(), 0);
		}
		Global_69700 = 0;
	}
}

// Position - 0x181B4
bool func_222() { return gameplay::is_bit_set(Global_1591201[player::player_id() /*602*/].f_39.f_18, 14); }

// Position - 0x181D1
int func_223(int iParam0) {
	if (func_89(iParam0, 0)) {
		return 1;
	}
	if (func_224()) {
		if (iParam0 == player::player_id()) {
			return 1;
		}
	}
	if (gameplay::is_bit_set(Global_2421664[iParam0 /*358*/].f_198, 2)) {
		return 1;
	}
	return 0;
}

// Position - 0x18213
bool func_224() { return gameplay::is_bit_set(Global_2359301, 3); }

// Position - 0x18224
int func_225(int iParam0, int iParam1, var uParam2, int iParam3) {
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

// Position - 0x18257
void func_226(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_2313, 13);
	}
	else {
		gameplay::clear_bit(&Global_2313, 13);
	}
}

// Position - 0x1827A
int func_227(int iParam0) {
	func_60(&Global_68531.f_555[0 /*21*/], iParam0);
	switch (iParam0) {
	case 21:
		if (Global_68531.f_555[0 /*21*/].f_4 == 0) {
			return iParam0;
		}
		if (!func_228(26)) {
			return 26;
		}
		if (!func_228(29)) {
			return 29;
		}
		if (!func_228(32)) {
			return 32;
		}
		break;

	case 22:
		if (Global_68531.f_555[0 /*21*/].f_4 == 0) {
			return iParam0;
		}
		if (!func_228(27)) {
			return 27;
		}
		if (!func_228(30)) {
			return 30;
		}
		if (!func_228(33)) {
			return 33;
		}
		break;

	case 23:
		if (Global_68531.f_555[0 /*21*/].f_4 == 0) {
			return iParam0;
		}
		if (!func_228(28)) {
			return 28;
		}
		if (!func_228(31)) {
			return 31;
		}
		if (!func_228(34)) {
			return 34;
		}
		break;
	}
	return -1;
}

// Position - 0x1837C
bool func_228(int iParam0) { return func_66(iParam0, 0); }

// Position - 0x1838B
void func_229(int iParam0, int iParam1) {
	char *sVar0;
	int iVar1;

	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_231(iParam0, &iVar1);
	if (!gameplay::are_strings_equal("NONE", sVar0) && iVar1 != 0) {
		if (iParam1) {
			if (interior::is_interior_disabled(iVar1)) {
				return;
			}
			if (interior::get_interior_from_entity(player::player_ped_id()) == iVar1) {
				func_184(iParam0, 1);
				return;
			}
		}
		else {
			if (!interior::is_interior_disabled(iVar1)) {
				return;
			}
			if (func_230(iParam0)) {
				func_184(iParam0, 0);
			}
		}
		interior::disable_interior(iVar1, iParam1);
		if (iParam1) {
		}
	}
}

// Position - 0x18416
bool func_230(int iParam0) {
	struct<2> Var0;

	Var0 = {func_185(iParam0)};
	if (gameplay::is_bit_set(Global_31561[Var0.f_1], Var0)) {
		return true;
	}
	return false;
}

// Position - 0x1843F
var func_231(int iParam0, int iParam1) {
	struct<5> Var0;

	Var0 = {func_232(iParam0)};
	*iParam1 = interior::get_interior_at_coords_with_type(Var0, Var0.f_3);
	return Var0.f_4;
}

// Position - 0x18464
struct<5> func_232(int iParam0) {
	struct<5> Var0;
	vector3 vVar5;

	switch (iParam0) {
	case 0:
		Var0 = {-447.4833f, 280.3197f, 77.5215f};
		Var0.f_3 = "v_comedy";
		Var0.f_4 = Var0.f_3;
		break;

	case 1:
		Var0 = {-1906.786f, -573.7576f, 19.0773f};
		Var0.f_3 = "v_psycheoffice";
		Var0.f_4 = Var0.f_3;
		break;

	case 2:
		Var0 = {1399.973f, 1148.756f, 113.3336f};
		Var0.f_3 = "v_ranch";
		Var0.f_4 = Var0.f_3;
		break;

	case 3:
		Var0 = {-598.6379f, -1608.399f, 26.0108f};
		Var0.f_3 = "v_recycle";
		Var0.f_4 = Var0.f_3;
		break;

	case 4:
		Var0 = {-556.5089f, 286.3181f, 81.1763f};
		Var0.f_3 = "v_rockclub";
		Var0.f_4 = Var0.f_3;
		break;

	case 5:
		Var0 = {-111.7116f, -11.912f, 69.5196f};
		Var0.f_3 = "v_janitor";
		Var0.f_4 = Var0.f_3;
		break;

	case 6:
		Var0 = {1274.934f, -1714.726f, 53.7715f};
		Var0.f_3 = "v_lesters";
		Var0.f_4 = Var0.f_3;
		break;

	case 7:
		Var0 = {147.433f, -2201.37f, 3.688f};
		Var0.f_3 = "v_torture";
		Var0.f_4 = Var0.f_3;
		break;

	case 8:
		Var0 = {320.9934f, 265.2515f, 82.1221f};
		Var0.f_3 = "v_cinema";
		Var0.f_4 = "v_cinema (Vinewood)";
		break;

	case 9:
		Var0 = {-1425.564f, -244.3f, 15.8053f};
		Var0.f_3 = "v_cinema";
		Var0.f_4 = "v_cinema (Morningwood)";
		break;

	case 10:
		Var0 = {377.153f, -717.567f, 10.0536f};
		Var0.f_3 = "v_cinema";
		Var0.f_4 = "v_cinema (Downtown)";
		break;

	case 11:
		Var0 = {245.1564f, 370.211f, 104.7382f};
		Var0.f_3 = "v_epsilonism";
		Var0.f_4 = Var0.f_3;
		break;

	case 12:
		Var0 = {173.1176f, -1003.279f, -99.9999f};
		Var0.f_3 = "v_garages";
		Var0.f_4 = Var0.f_3;
		break;

	case 13:
		Var0 = {199.9715f, -999.6678f, -100f};
		Var0.f_3 = "v_garagem";
		Var0.f_4 = Var0.f_3;
		break;

	case 14:
		Var0 = {228.6058f, -992.0537f, -99.9999f};
		Var0.f_3 = "v_garagel";
		Var0.f_3 = "hei_dlc_garage_high_new";
		Var0.f_4 = Var0.f_3;
		break;

	case 15:
		Var0 = {1854.254f, 3686.739f, 33.2671f};
		Var0.f_3 = "v_sheriff";
		Var0.f_4 = Var0.f_3;
		break;

	case 16:
		Var0 = {-444.8907f, 6013.587f, 30.7164f};
		Var0.f_3 = "v_sheriff2";
		Var0.f_4 = Var0.f_3;
		break;

	case 17:
		Var0 = {3522.845f, 3707.965f, 19.9918f};
		Var0.f_3 = "v_lab";
		Var0.f_4 = Var0.f_3;
		break;

	case 18:
		Var0 = {717.2994f, -974.4271f, 23.9142f};
		Var0.f_3 = "v_sweat";
		Var0.f_4 = Var0.f_3;
		break;

	case 19:
		Var0 = {717.299f, -974.4271f, 23.9142f};
		Var0.f_3 = "v_sweatempty";
		Var0.f_4 = Var0.f_3;
		break;

	case 20:
		Var0 = {2449.785f, 4983.825f, 45.8106f};
		Var0.f_3 = "v_farmhouse";
		Var0.f_4 = Var0.f_3;
		break;

	case 22:
		Var0 = {1087.195f, -1988.445f, 28.649f};
		Var0.f_3 = "v_foundry";
		Var0.f_4 = Var0.f_3;
		break;

	case 23:
		Var0 = {982.233f, -2160.382f, 28.4761f};
		Var0.f_3 = "v_abattoir";
		Var0.f_4 = Var0.f_3;
		break;

	case 21:
		Var0 = {479.0568f, -1316.825f, 28.2038f};
		Var0.f_3 = "v_chopshop";
		Var0.f_4 = Var0.f_3;
		break;

	case 24:
		Var0 = {-1005.663f, -478.3461f, 49.0265f};
		Var0.f_3 = "v_58_sol_office";
		Var0.f_4 = Var0.f_3;
		break;

	case 25:
		vVar5 = {func_233(1, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (1)";
		break;

	case 26:
		vVar5 = {func_233(2, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (2)";
		break;

	case 27:
		vVar5 = {func_233(3, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (3)";
		break;

	case 28:
		vVar5 = {func_233(4, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (4)";
		break;

	case 29:
		vVar5 = {func_233(5, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (5)";
		break;

	case 30:
		vVar5 = {func_233(6, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (6)";
		break;

	case 31:
		vVar5 = {func_233(7, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (7)";
		break;

	case 32:
		Var0 = {Global_1049427[34 /*1942*/].f_146.f_1517 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (8)";
		break;

	case 33:
		vVar5 = {func_233(35, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (9)";
		break;

	case 34:
		vVar5 = {func_233(36, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (10)";
		break;

	case 35:
		vVar5 = {func_233(37, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (11)";
		break;

	case 36:
		vVar5 = {func_233(38, 0)};
		Var0 = {-20.1f, -580.8f, 91.3f};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (12)";
		break;

	case 37:
		vVar5 = {func_233(39, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (13)";
		break;

	case 38:
		vVar5 = {func_233(40, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (14)";
		break;

	case 39:
		vVar5 = {func_233(41, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (15)";
		break;

	case 40:
		vVar5 = {func_233(42, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (16)";
		break;

	case 41:
		vVar5 = {func_233(43, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (17)";
		break;

	case 42:
		Var0 = {-470.3754f, -698.5207f, 51.5276f};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (18)";
		break;

	case 43:
		Var0 = {-460.6133f, -691.5562f, 69.9067f};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (19)";
		break;

	case 44:
		Var0 = {300.633f, -997.4288f, -99.9727f};
		Var0.f_3 = "hei_dlc_apart_high_new";
		Var0.f_4 = "hei_dlc_apart_high_new (20)";
		break;

	case 49:
		Var0 = {-171.3969f, 494.2671f, 134.4935f};
		Var0.f_3 = "apa_v_mp_stilts_b";
		Var0.f_4 = "apa_v_mp_stilts_b (1)";
		break;

	case 50:
		Var0 = {339.4982f, 434.0887f, 146.2206f};
		Var0.f_3 = "apa_v_mp_stilts_b";
		Var0.f_4 = "apa_v_mp_stilts_b (2)";
		break;

	case 51:
		Var0 = {-761.3884f, 615.7333f, 140.9805f};
		Var0.f_3 = "apa_v_mp_stilts_b";
		Var0.f_4 = "apa_v_mp_stilts_b (3)";
		break;

	case 52:
		Var0 = {-678.1752f, 591.0076f, 142.2196f};
		Var0.f_3 = "apa_v_mp_stilts_b";
		Var0.f_4 = "apa_v_mp_stilts_b (4)";
		break;

	case 53:
		Var0 = {120.0541f, 553.793f, 181.0943f};
		Var0.f_3 = "apa_v_mp_stilts_a";
		Var0.f_4 = "apa_v_mp_stilts_a (5)";
		break;

	case 54:
		Var0 = {-571.4039f, 655.2008f, 142.6293f};
		Var0.f_3 = "apa_v_mp_stilts_a";
		Var0.f_4 = "apa_v_mp_stilts_a (7)";
		break;

	case 55:
		Var0 = {-742.2565f, 587.6547f, 143.0577f};
		Var0.f_3 = "apa_v_mp_stilts_a";
		Var0.f_4 = "apa_v_mp_stilts_a (8)";
		break;

	case 56:
		Var0 = {-857.2222f, 685.051f, 149.6502f};
		Var0.f_3 = "apa_v_mp_stilts_a";
		Var0.f_4 = "apa_v_mp_stilts_a (10)";
		break;

	case 57:
		Var0 = {-1287.65f, 443.2707f, 94.6919f};
		Var0.f_3 = "apa_v_mp_stilts_a";
		Var0.f_4 = "apa_v_mp_stilts_a (12)";
		break;

	case 58:
		Var0 = {374.2012f, 416.9688f, 142.5991f};
		Var0.f_3 = "apa_v_mp_stilts_a";
		Var0.f_4 = "apa_v_mp_stilts_a (13)";
		break;

	case 45:
		Var0 = {-16.29585f, -684.0385f, 33.50832f};
		Var0.f_3 = "dt1_03_carpark";
		Var0.f_4 = "dt1_03_carpark";
		break;

	case 46:
		Var0 = {341.1f, -1000f, -99.2f};
		Var0.f_3 = "v_apart_midspaz";
		Var0.f_4 = "v_apart_midspaz";
		break;

	case 47:
		Var0 = {199.9716f, -1018.954f, -100f};
		Var0.f_3 = "v_garagem_sp";
		Var0.f_4 = Var0.f_3;
		break;

	case 48:
		Var0 = {-1388.001f, -618.4197f, 30.8196f};
		Var0.f_3 = "v_bahama";
		Var0.f_4 = Var0.f_3;
		break;
	}
	switch (iParam0) {
	case 59:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = "apa_v_mp_h_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 60:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = "apa_v_mp_h_02";
		Var0.f_4 = Var0.f_3;
		break;

	case 61:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = "apa_v_mp_h_03";
		Var0.f_4 = Var0.f_3;
		break;

	case 62:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = "apa_v_mp_h_04";
		Var0.f_4 = Var0.f_3;
		break;

	case 63:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = "apa_v_mp_h_05";
		Var0.f_4 = Var0.f_3;
		break;

	case 64:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = "apa_v_mp_h_06";
		Var0.f_4 = Var0.f_3;
		break;

	case 65:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = "apa_v_mp_h_07";
		Var0.f_4 = Var0.f_3;
		break;

	case 66:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = "apa_v_mp_h_08";
		Var0.f_4 = Var0.f_3;
		break;

	case 67:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = "apa_v_mp_h_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 68:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = "apa_v_mp_h_02";
		Var0.f_4 = Var0.f_3;
		break;

	case 69:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = "apa_v_mp_h_03";
		Var0.f_4 = Var0.f_3;
		break;

	case 70:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = "apa_v_mp_h_04";
		Var0.f_4 = Var0.f_3;
		break;

	case 71:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = "apa_v_mp_h_05";
		Var0.f_4 = Var0.f_3;
		break;

	case 72:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = "apa_v_mp_h_06";
		Var0.f_4 = Var0.f_3;
		break;

	case 73:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = "apa_v_mp_h_07";
		Var0.f_4 = Var0.f_3;
		break;

	case 74:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = "apa_v_mp_h_08";
		Var0.f_4 = Var0.f_3;
		break;

	case 75:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = "apa_v_mp_h_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 76:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = "apa_v_mp_h_02";
		Var0.f_4 = Var0.f_3;
		break;

	case 77:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = "apa_v_mp_h_03";
		Var0.f_4 = Var0.f_3;
		break;

	case 78:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = "apa_v_mp_h_04";
		Var0.f_4 = Var0.f_3;
		break;

	case 79:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = "apa_v_mp_h_05";
		Var0.f_4 = Var0.f_3;
		break;

	case 80:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = "apa_v_mp_h_06";
		Var0.f_4 = Var0.f_3;
		break;

	case 81:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = "apa_v_mp_h_07";
		Var0.f_4 = Var0.f_3;
		break;

	case 82:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = "apa_v_mp_h_08";
		Var0.f_4 = Var0.f_3;
		break;

	case 83:
		vVar5 = {func_233(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 84:
		vVar5 = {func_233(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 85:
		vVar5 = {func_233(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 86:
		vVar5 = {func_233(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 87:
		vVar5 = {func_233(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 88:
		vVar5 = {func_233(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 89:
		vVar5 = {func_233(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 90:
		vVar5 = {func_233(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 91:
		vVar5 = {func_233(87, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 92:
		vVar5 = {func_233(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 93:
		vVar5 = {func_233(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 94:
		vVar5 = {func_233(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 95:
		vVar5 = {func_233(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 96:
		vVar5 = {func_233(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 97:
		vVar5 = {func_233(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 98:
		vVar5 = {func_233(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 99:
		vVar5 = {func_233(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 100:
		vVar5 = {func_233(88, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 101:
		vVar5 = {func_233(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 102:
		vVar5 = {func_233(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 103:
		vVar5 = {func_233(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 104:
		vVar5 = {func_233(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 105:
		vVar5 = {func_233(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 106:
		vVar5 = {func_233(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 107:
		vVar5 = {func_233(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 108:
		vVar5 = {func_233(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 109:
		vVar5 = {func_233(89, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 110:
		vVar5 = {func_233(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 111:
		vVar5 = {func_233(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 112:
		vVar5 = {func_233(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_01c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 113:
		vVar5 = {func_233(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 114:
		vVar5 = {func_233(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 115:
		vVar5 = {func_233(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_02c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 116:
		vVar5 = {func_233(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03a_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 117:
		vVar5 = {func_233(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03b_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 118:
		vVar5 = {func_233(90, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "ex_int_office_03c_dlc";
		Var0.f_4 = Var0.f_3;
		break;

	case 119:
		vVar5 = {func_233(91, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "bkr_biker_dlc_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 120:
		vVar5 = {func_233(97, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "bkr_biker_dlc_int_02";
		Var0.f_4 = Var0.f_3;
		break;

	case 121:
		vVar5 = {func_233(103, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 122:
		vVar5 = {func_233(104, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 123:
		vVar5 = {func_233(105, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 124:
		vVar5 = {func_233(106, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 125:
		vVar5 = {func_233(107, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 126:
		vVar5 = {func_233(108, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 127:
		vVar5 = {func_233(109, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 128:
		vVar5 = {func_233(110, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 129:
		vVar5 = {func_233(111, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 130:
		vVar5 = {func_233(112, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 131:
		vVar5 = {func_233(113, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 132:
		vVar5 = {func_233(114, 0)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_impexp_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 133:
		vVar5 = {func_233(103, 1)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_imptexp_mod_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 134:
		vVar5 = {func_233(106, 1)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_imptexp_mod_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 135:
		vVar5 = {func_233(109, 1)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_imptexp_mod_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	case 136:
		vVar5 = {func_233(112, 1)};
		Var0 = {vVar5 + Vector(1f, 0f, 0f)};
		Var0.f_3 = "imp_imptexp_mod_int_01";
		Var0.f_4 = Var0.f_3;
		break;

	default: break;
	}
	return Var0;
}

// Position - 0x19D32
struct<6>
func_233(int iParam0, int iParam1) {
	struct<6> Var0;

	switch (iParam0) {
	case -1:
		Var0 = {-794.9184f, 339.6266f, 200.4135f};
		Var0.f_3 = {0f, 0f, 180f};
		break;

	case 1:
		Var0 = {-794.9184f, 339.6266f, 200.4135f};
		Var0.f_3 = {0f, 0f, 180f};
		break;

	case 2:
		Var0 = {-761.0982f, 317.6259f, 169.5963f};
		Var0.f_3 = {0f, 0f, 0f};
		break;

	case 3:
		Var0 = {-761.1888f, 317.6295f, 216.0503f};
		Var0.f_3 = {0f, 0f, 0f};
		break;

	case 4:
		Var0 = {-795.3856f, 340.0188f, 152.7941f};
		Var0.f_3 = {0f, 0f, 180f};
		break;

	case 61:
		Var0 = {-778.5056f, 332.3779f, 212.1968f};
		Var0.f_3 = {0f, 0f, 90f};
		break;

	case 5:
		Var0 = {-258.1807f, -950.6853f, 70.0239f};
		Var0.f_3 = {0f, 0f, 70f};
		break;

	case 6:
		Var0 = {-285.0051f, -957.6552f, 85.3035f};
		Var0.f_3 = {0f, 0f, -110f};
		break;

	case 7:
		Var0 = {-1471.882f, -530.7484f, 62.34918f};
		Var0.f_3 = {0f, 0f, -145f};
		break;

	case 34:
		Var0 = {-1471.882f, -530.7484f, 49.72156f};
		Var0.f_3 = {0f, 0f, -145f};
		break;

	case 62:
		Var0 = {-1463.15f, -540.2369f, 74.2439f};
		Var0.f_3 = {0f, 0f, -145f};
		break;

	case 35:
		Var0 = {-885.3702f, -451.4775f, 119.327f};
		Var0.f_3 = {0f, 0f, 27.55617f};
		break;

	case 36:
		Var0 = {-913.0385f, -438.4284f, 114.3997f};
		Var0.f_3 = {0f, 0f, -153.3093f};
		break;

	case 37:
		Var0 = {-892.5499f, -430.4789f, 88.25368f};
		Var0.f_3 = {0f, 0f, 116.9193f};
		break;

	case 38:
		Var0 = {-35.0462f, -576.317f, 82.90739f};
		Var0.f_3 = {0f, 0f, 160f};
		break;

	case 39:
		Var0 = {-10.3788f, -590.7431f, 93.02542f};
		Var0.f_3 = {0f, 0f, 70f};
		break;

	case 65:
		Var0 = {-22.2487f, -589.1461f, 80.2305f};
		Var0.f_3 = {0f, 0f, 69.88f};
		break;

	case 40:
		Var0 = {-900.6311f, -376.7462f, 78.27306f};
		Var0.f_3 = {0f, 0f, 26.92611f};
		break;

	case 41:
		Var0 = {-929.483f, -374.5104f, 102.2329f};
		Var0.f_3 = {0f, 0f, -152.5531f};
		break;

	case 63:
		Var0 = {-914.4202f, -375.8189f, 114.4743f};
		Var0.f_3 = {0f, 0f, -63f};
		break;

	case 42:
		Var0 = {-617.1647f, 64.6042f, 100.8196f};
		Var0.f_3 = {0f, 0f, 180f};
		break;

	case 43:
		Var0 = {-584.2015f, 42.7133f, 86.4187f};
		Var0.f_3 = {0f, 0f, 0f};
		break;

	case 64:
		Var0 = {-609.5665f, 50.2203f, 98.3998f};
		Var0.f_3 = {0f, 0f, -90f};
		break;

	case 73:
		Var0 = {-171.3969f, 494.2671f, 134.4935f};
		Var0.f_3 = {0f, 0f, 11f};
		break;

	case 74:
		Var0 = {339.4982f, 434.0887f, 146.2206f};
		Var0.f_3 = {0f, 0f, -63.5f};
		break;

	case 75:
		Var0 = {-761.3884f, 615.7333f, 140.9805f};
		Var0.f_3 = {0f, 0f, -71.5f};
		break;

	case 76:
		Var0 = {-678.1752f, 591.0076f, 142.2196f};
		Var0.f_3 = {0f, 0f, 40.5f};
		break;

	case 77:
		Var0 = {120.0541f, 553.793f, 181.0943f};
		Var0.f_3 = {0f, 0f, 6f};
		break;

	case 78:
		Var0 = {-571.4039f, 655.2008f, 142.6293f};
		Var0.f_3 = {0f, 0f, -14.5f};
		break;

	case 79:
		Var0 = {-742.2565f, 587.6547f, 143.0577f};
		Var0.f_3 = {0f, 0f, -29f};
		break;

	case 80:
		Var0 = {-857.2222f, 685.051f, 149.6502f};
		Var0.f_3 = {0f, 0f, 4.5f};
		break;

	case 81:
		Var0 = {-1287.65f, 443.2707f, 94.6919f};
		Var0.f_3 = {0f, 0f, 0f};
		break;

	case 82:
		Var0 = {374.2012f, 416.9688f, 142.6977f};
		Var0.f_3 = {0f, 0f, -14f};
		break;

	case 83:
		Var0 = {-787.7805f, 334.9232f, 186.1134f};
		Var0.f_3 = {0f, 0f, 90f};
		break;

	case 84:
		Var0 = {-787.7805f, 334.9232f, 215.8384f};
		Var0.f_3 = {0f, 0f, 90f};
		break;

	case 85:
		Var0 = {-773.2258f, 322.8252f, 194.8862f};
		Var0.f_3 = {0f, 0f, -90f};
		break;

	case 86:
		Var0 = {-1573.098f, -4085.806f, 9.7851f};
		Var0.f_3 = {0f, 0f, 162f};
		break;

	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 66:
	case 67:
	case 68:
	case 69:
		Var0 = {342.8157f, -997.4288f, -100f};
		Var0.f_3 = {0f, 0f, 0f};
		break;

	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 70:
	case 71:
	case 72:
		Var0 = {260.3297f, -997.4288f, -100f};
		Var0.f_3 = {0f, 0f, 0f};
		break;

	case 87:
		Var0 = {-1572.187f, -570.8315f, 109.9879f};
		Var0.f_3 = {0f, 0f, -54f};
		break;

	case 88:
		Var0 = {-1383.954f, -476.7112f, 73.507f};
		Var0.f_3 = {0f, 0f, 8f};
		break;

	case 89:
		Var0 = {-138.0029f, -629.739f, 170.2854f};
		Var0.f_3 = {0f, 0f, -84f};
		break;

	case 90:
		Var0 = {-74.8895f, -817.6883f, 244.8508f};
		Var0.f_3 = {0f, 0f, 70f};
		break;

	case 91:
	case 92:
	case 93:
	case 94:
	case 95:
	case 96:
		Var0 = {1100.764f, -3159.384f, -34.9342f};
		Var0.f_3 = {0f, 0f, 0f};
		break;

	case 97:
	case 98:
	case 99:
	case 100:
	case 101:
	case 102:
		Var0 = {1005.806f, -3157.67f, -36.0897f};
		Var0.f_3 = {0f, 0f, 0f};
		break;

	case 103:
		if (!iParam1) {
			Var0 = {-1576.571f, -569.7595f, 85.5f};
			Var0.f_3 = {0f, 0f, 36.1f};
		}
		else {
			Var0 = {-1578.022f, -576.4251f, 104.2f};
			Var0.f_3 = {0f, 0f, -144.04f};
		}
		break;

	case 104:
		if (!iParam1) {
			Var0 = {-1571.254f, -566.5865f, 85.5f};
			Var0.f_3 = {0f, 0f, -53.9f};
		}
		else {
			Var0 = {-1578.022f, -576.4251f, 104.2f};
			Var0.f_3 = {0f, 0f, -144.04f};
		}
		break;

	case 105:
		if (!iParam1) {
			Var0 = {-1568.098f, -571.9171f, 85.5f};
			Var0.f_3 = {0f, 0f, -143.9f};
		}
		else {
			Var0 = {-1578.022f, -576.4251f, 104.2f};
			Var0.f_3 = {0f, 0f, -144.04f};
		}
		break;

	case 106:
		if (!iParam1) {
			Var0 = {-1384.518f, -475.8657f, 56.1f};
			Var0.f_3 = {0f, 0f, 98.7f};
		}
		else {
			Var0 = {-1391.245f, -473.9638f, 77.2f};
			Var0.f_3 = {0f, 0f, 98.86f};
		}
		break;

	case 107:
		if (!iParam1) {
			Var0 = {-1384.538f, -475.8829f, 48.1f};
			Var0.f_3 = {0f, 0f, 98.7f};
		}
		else {
			Var0 = {-1391.245f, -473.9638f, 77.2f};
			Var0.f_3 = {0f, 0f, 98.86f};
		}
		break;

	case 108:
		if (!iParam1) {
			Var0 = {-1378.994f, -477.2481f, 56.1f};
			Var0.f_3 = {0f, 0f, -81.1f};
		}
		else {
			Var0 = {-1391.245f, -473.9638f, 77.2f};
			Var0.f_3 = {0f, 0f, 98.86f};
		}
		break;

	case 109:
		if (!iParam1) {
			Var0 = {-186.5683f, -576.4624f, 135f};
			Var0.f_3 = {0f, 0f, 96.16f};
		}
		else {
			Var0 = {-146.6167f, -596.6301f, 166f};
			Var0.f_3 = {0f, 0f, -140f};
		}
		break;

	case 110:
		if (!iParam1) {
			Var0 = {-113.886f, -564.3862f, 135f};
			Var0.f_3 = {0f, 0f, 110.96f};
		}
		else {
			Var0 = {-146.6167f, -596.6301f, 166f};
			Var0.f_3 = {0f, 0f, -140f};
		}
		break;

	case 111:
		if (!iParam1) {
			Var0 = {-134.6568f, -635.1774f, 135f};
			Var0.f_3 = {0f, 0f, -9.04f};
		}
		else {
			Var0 = {-146.6167f, -596.6301f, 166f};
			Var0.f_3 = {0f, 0f, -140f};
		}
		break;

	case 112:
		if (!iParam1) {
			Var0 = {-79.0479f, -822.6393f, 221f};
			Var0.f_3 = {0f, 0f, 70f};
		}
		else {
			Var0 = {-73.904f, -821.6204f, 284f};
			Var0.f_3 = {0f, 0f, -110f};
		}
		break;

	case 113:
		if (!iParam1) {
			Var0 = {-70.3086f, -819.5784f, 221f};
			Var0.f_3 = {0f, 0f, 160f};
		}
		else {
			Var0 = {-73.904f, -821.6204f, 284f};
			Var0.f_3 = {0f, 0f, -110f};
		}
		break;

	case 114:
		if (!iParam1) {
			Var0 = {-79.9861f, -818.425f, 221f};
			Var0.f_3 = {0f, 0f, -20f};
		}
		else {
			Var0 = {-73.904f, -821.6204f, 284f};
			Var0.f_3 = {0f, 0f, -110f};
		}
		break;
	}
	return Var0;
}

//Position - 0x1A8E8
void func_234(int iParam0, int iParam1)
{
	char *sVar0;
	int iVar1;

	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_231(iParam0, &iVar1);
	if (!gameplay::are_strings_equal("NONE", sVar0) && iVar1 != 0) {
		if (iParam1 && !interior::is_interior_capped(iVar1)) {
			if (interior::get_interior_from_entity(player::player_ped_id()) == iVar1) {
				func_186(iParam0, 1);
				return;
			}
			interior::cap_interior(iVar1, 1);
		}
		else if (!iParam1 && interior::is_interior_capped(iVar1)) {
			if (func_235(iParam0)) {
				func_186(iParam0, 0);
			}
			interior::cap_interior(iVar1, 0);
		}
		else if (!iParam1) {
			if (func_235(iParam0)) {
				func_186(iParam0, 0);
			}
		}
	}
}

// Position - 0x1A98E
bool func_235(int iParam0) {
	struct<2> Var0;

	Var0 = {func_185(iParam0)};
	if (Var0.f_1 != -1 && gameplay::is_bit_set(Global_31555[Var0.f_1], Var0)) {
		return true;
	}
	return false;
}

// Position - 0x1A9C2
bool func_236() {
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) || func_227(Local_402) != -1) {
		return true;
	}
	return false;
}

// Position - 0x1A9EB
bool func_237(float fParam0, float fParam1, float fParam2) {
	float fVar0;
	float fVar1;

	fVar1 = fParam1 - fParam2;
	if (fVar1 < 0f) {
		fVar1 += 360f;
	}
	fVar0 = fParam1 + fParam2;
	if (fVar0 >= 360f) {
		fVar0 -= 360f;
	}
	if (fVar0 > fVar1) {
		if (fParam0 < fVar0 && fParam0 > fVar1) {
			return true;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1) {
		return true;
	}
	return false;
}

// Position - 0x1AA60
int func_238(int iParam0) {
	switch (iParam0) {
	case 21:
	case 26:
	case 29:
	case 32: return 0;

	case 23:
	case 28:
	case 31:
	case 34: return 2;

	case 22:
	case 27:
	case 30:
	case 33: return 1;
	}
	return 145;
}

// Position - 0x1AACE
int func_239(int iParam0, var *uParam1) {
	uParam1->f_73[1 /*4*/] = {194.674f, -1026.984f, -100f};
	uParam1->f_73[1 /*4*/].f_3 = 285f;
	(*uParam1)[2 /*15*/] = {198.9908f, -1025.956f, -98.8981f};
	(*uParam1)[2 /*15*/].f_3 = {-4.5679f, -0.0266f, 110.7275f};
	(*uParam1)[2 /*15*/].f_6 = {198.6016f, -1026.103f, -98.9313f};
	(*uParam1)[2 /*15*/].f_6.f_3 = {-5.3499f, -0.0266f, 110.7275f};
	(*uParam1)[2 /*15*/].f_12 = 25.2218f;
	(*uParam1)[2 /*15*/].f_13 = 0.2f;
	(*uParam1)[2 /*15*/].f_14 = 3.5f;
	uParam1->f_61[2] = 0f;
	switch (iParam0) {
	case 21:
		(*uParam1)[0 /*15*/] = {-84.4891f, 95.2463f, 72.7397f};
		(*uParam1)[0 /*15*/].f_3 = {-1.0236f, 0.0007f, -126.7439f};
		(*uParam1)[0 /*15*/].f_6 = {-84.1568f, 94.9229f, 72.7318f};
		(*uParam1)[0 /*15*/].f_6.f_3 = {-1.0236f, 0.0007f, -127.1499f};
		(*uParam1)[0 /*15*/].f_12 = 25.1687f;
		(*uParam1)[0 /*15*/].f_13 = 0.2f;
		(*uParam1)[0 /*15*/].f_14 = 3.5f;
		uParam1->f_61[0] = 0f;
		uParam1->f_73[0 /*4*/] = {-62.5434f, 80.2917f, 70.5644f};
		uParam1->f_73[0 /*4*/].f_3 = 345f;
		(*uParam1)[1 /*15*/] = {-61.075f, 81.2555f, 84.5867f};
		(*uParam1)[1 /*15*/].f_3 = {-69.9271f, 0f, 103.892f};
		(*uParam1)[1 /*15*/].f_6 = {-60.6284f, 81.2036f, 84.5867f};
		(*uParam1)[1 /*15*/].f_6.f_3 = {-73.4239f, 0f, 108.7693f};
		(*uParam1)[1 /*15*/].f_12 = 29.9579f;
		(*uParam1)[1 /*15*/].f_13 = 0.2f;
		(*uParam1)[1 /*15*/].f_14 = 3f;
		uParam1->f_61[1] = 1f;
		uParam1->f_66[0 /*3*/] = {-60.3859f, 78.4352f, 70.5249f};
		uParam1->f_86[0 /*6*/] = {-67.0129f, 81.9471f, 70.5249f};
		uParam1->f_86[0 /*6*/].f_3 = {0f, 0f, -117.9206f};
		(*uParam1)[3 /*15*/] = {-61.8119f, 77.3506f, 80.3259f};
		(*uParam1)[3 /*15*/].f_3 = {-57.747f, 0f, 34.1968f};
		(*uParam1)[3 /*15*/].f_6 = {-61.8119f, 77.3506f, 80.3259f};
		(*uParam1)[3 /*15*/].f_6.f_3 = {-48.0008f, 0f, 49.6137f};
		(*uParam1)[3 /*15*/].f_12 = 30.0324f;
		(*uParam1)[3 /*15*/].f_13 = 0.2f;
		(*uParam1)[3 /*15*/].f_14 = 3f;
		uParam1->f_61[3] = 1f;
		uParam1->f_86[1 /*6*/] = {-62.6272f, 79.7534f, 70.6161f};
		uParam1->f_86[1 /*6*/].f_3 = {0f, 0f, 65f};
		uParam1->f_66[1 /*3*/] = {-79.1059f, 87.1091f, 70.5157f};
		uParam1->f_73[2 /*4*/] = {-88.4f, 70.8f, 72f};
		uParam1->f_73[2 /*4*/].f_3 = 150f;
		return 1;

	case 22:
		(*uParam1)[0 /*15*/] = {-66.6121f, -1842.122f, 26.6941f};
		(*uParam1)[0 /*15*/].f_3 = {3.4131f, -0.0009f, 17.9566f};
		(*uParam1)[0 /*15*/].f_6 = {-66.5137f, -1841.616f, 26.7211f};
		(*uParam1)[0 /*15*/].f_6.f_3 = {3.1669f, -0.0009f, 18.0384f};
		(*uParam1)[0 /*15*/].f_12 = 25.1856f;
		(*uParam1)[0 /*15*/].f_13 = 0.2f;
		(*uParam1)[0 /*15*/].f_14 = 3.5f;
		uParam1->f_61[0] = 0f;
		uParam1->f_73[0 /*4*/] = {-72.5431f, -1820.447f, 25.9424f};
		uParam1->f_73[0 /*4*/].f_3 = 140f;
		(*uParam1)[1 /*15*/] = {-72.7256f, -1823.283f, 41.0951f};
		(*uParam1)[1 /*15*/].f_3 = {-81.9335f, 0f, -58.1415f};
		(*uParam1)[1 /*15*/].f_6 = {-72.9027f, -1822.998f, 41.0951f};
		(*uParam1)[1 /*15*/].f_6.f_3 = {-80.6657f, 0f, -29.6554f};
		(*uParam1)[1 /*15*/].f_12 = 29.9864f;
		(*uParam1)[1 /*15*/].f_13 = 0.2f;
		(*uParam1)[1 /*15*/].f_14 = 3f;
		uParam1->f_61[1] = 1f;
		uParam1->f_66[0 /*3*/] = {-76.7939f, -1816.77f, 26.6473f};
		uParam1->f_86[0 /*6*/] = {-69.2183f, -1823.258f, 25.9421f};
		uParam1->f_86[0 /*6*/].f_3 = {0f, 0f, 49.4214f};
		(*uParam1)[3 /*15*/] = {-70.9492f, -1820.936f, 45.3628f};
		(*uParam1)[3 /*15*/].f_3 = {-85.5171f, 0f, 68.3257f};
		(*uParam1)[3 /*15*/].f_6 = {-70.9836f, -1821.023f, 45.3628f};
		(*uParam1)[3 /*15*/].f_6.f_3 = {-89.4995f, 0f, 68.3257f};
		(*uParam1)[3 /*15*/].f_12 = 28.4803f;
		(*uParam1)[3 /*15*/].f_13 = 0.2f;
		(*uParam1)[3 /*15*/].f_14 = 4f;
		uParam1->f_61[3] = 1f;
		uParam1->f_86[1 /*6*/] = {-75.3386f, -1818.249f, 26.0241f};
		uParam1->f_86[1 /*6*/].f_3 = {0f, 0f, -132.7699f};
		uParam1->f_66[1 /*3*/] = {-63.988f, -1829.39f, 26.423f};
		uParam1->f_73[2 /*4*/] = {-49.738f, -1830.147f, 25.5591f};
		uParam1->f_73[2 /*4*/].f_3 = 317.3589f;
		return 1;

	case 23:
		(*uParam1)[0 /*15*/] = {-237.074f, -1170.391f, 23.479f};
		(*uParam1)[0 /*15*/].f_3 = {7.619f, 0f, -69.7398f};
		(*uParam1)[0 /*15*/].f_6 = {-237.2166f, -1169.672f, 23.4931f};
		(*uParam1)[0 /*15*/].f_6.f_3 = {7.619f, 0f, -71.3391f};
		(*uParam1)[0 /*15*/].f_12 = 40.0015f;
		(*uParam1)[0 /*15*/].f_13 = 0.2f;
		(*uParam1)[0 /*15*/].f_14 = 3.5f;
		uParam1->f_61[0] = 0f;
		uParam1->f_73[0 /*4*/] = {-218.0289f, -1162.392f, 22.0242f};
		uParam1->f_73[0 /*4*/].f_3 = 15f;
		(*uParam1)[1 /*15*/] = {-219.5507f, -1159.951f, 36.8399f};
		(*uParam1)[1 /*15*/].f_3 = {-81.7188f, 0f, 170.4291f};
		(*uParam1)[1 /*15*/].f_6 = {-219.1442f, -1160.019f, 36.8399f};
		(*uParam1)[1 /*15*/].f_6.f_3 = {-80.5726f, 0f, -168.992f};
		(*uParam1)[1 /*15*/].f_12 = 30.0319f;
		(*uParam1)[1 /*15*/].f_13 = 0.2f;
		(*uParam1)[1 /*15*/].f_14 = 4f;
		uParam1->f_61[1] = 1f;
		uParam1->f_66[0 /*3*/] = {-211.6438f, -1162.407f, 22.0234f};
		uParam1->f_86[0 /*6*/] = {-221.6438f, -1162.407f, 22.0234f};
		uParam1->f_86[0 /*6*/].f_3 = {0f, 0f, -90f};
		(*uParam1)[3 /*15*/] = {-218.5983f, -1159.061f, 31.4452f};
		(*uParam1)[3 /*15*/].f_3 = {-62.4689f, 0f, -142.2907f};
		(*uParam1)[3 /*15*/].f_6 = {-218.6533f, -1159.067f, 31.4471f};
		(*uParam1)[3 /*15*/].f_6.f_3 = {-62.4689f, 0f, -172.3491f};
		(*uParam1)[3 /*15*/].f_12 = 30f;
		(*uParam1)[3 /*15*/].f_13 = 0.2f;
		(*uParam1)[3 /*15*/].f_14 = 3f;
		uParam1->f_61[3] = 1f;
		uParam1->f_86[1 /*6*/] = {-214.5676f, -1162.658f, 21.9591f};
		uParam1->f_86[1 /*6*/].f_3 = {0f, 0f, 90f};
		uParam1->f_66[1 /*3*/] = {-227.7619f, -1162.848f, 22.0085f};
		uParam1->f_73[2 /*4*/] = {-221.6f, -1156.3f, 22.6f};
		uParam1->f_73[2 /*4*/].f_3 = 0f;
		return 1;
	}
	return 0;
}

// Position - 0x1B2BF
int func_240() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0x1B2DB
void func_241() {
	int iVar0;
	struct<5> Var1;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	struct<2> Var26;
	float fVar30;
	int iVar31;
	vector3 vVar32;
	bool bVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;

	if (ped::is_ped_injured(player::player_ped_id()) || func_27(0) || func_27(3) || func_27(2) || func_27(4) ||
		func_27(14) || !func_25(iLocal_672)) {
		return;
	}
	if (!Global_68131) {
		if (Global_101700.f_31389.f_1982[iLocal_672 /*939*/].f_626[iLocal_855] != -15) {
			if (!Global_68531[Global_101700.f_31389.f_1982[iLocal_672 /*939*/].f_313[iLocal_855]]) {
				if (func_292(func_49(), Global_101700.f_31389.f_1982[iLocal_672 /*939*/].f_626[iLocal_855])) {
					iVar0 = Global_101700.f_31389.f_1982[iLocal_672 /*939*/][iLocal_855];
					func_290(iVar0, iLocal_855, iLocal_672);
					func_60(&Var1, Global_101700.f_31389.f_1982[iLocal_672 /*939*/].f_313[iLocal_855]);
					if (Var1.f_4 == 0) {
					}
					else {
						func_399(Global_101700.f_31389.f_1982[iLocal_672 /*939*/].f_313[iLocal_855], 1);
					}
					Global_101700.f_31389.f_1982[iLocal_672 /*939*/].f_626[iLocal_855] = -15;
				}
			}
		}
		iLocal_855++;
		if (iLocal_855 >= 312) {
			iLocal_855 = 0;
		}
	}
	if (entity::get_entity_model(player::player_ped_id()) != Local_402.f_7 || Local_402.f_2 == 99) {
		if (Local_402.f_5 != -1) {
			func_68(&Local_402.f_5);
		}
		if (Local_402.f_2 > 0) {
			ui::clear_help(1);
		}
		Local_402.f_7 = entity::get_entity_model(player::player_ped_id());
		Local_402.f_5 = -1;
		Local_402.f_2 = 0;
		Local_402.f_4 = 0;
		if (iLocal_854) {
			if (ui::is_help_message_being_displayed()) {
				ui::clear_help(1);
			}
			cam::render_script_cams(0, 0, 3000, 1, 0, 0);
			if (cam::does_cam_exist(Local_402.f_110)) {
				cam::set_cam_active(Local_402.f_110, 0);
				cam::destroy_cam(Local_402.f_110, 0);
			}
			if (cam::does_cam_exist(Local_402.f_111)) {
				cam::set_cam_active(Local_402.f_111, 0);
				cam::destroy_cam(Local_402.f_111, 0);
			}
			entity::set_entity_visible(player::player_ped_id(), 1, 0);
			entity::freeze_entity_position(player::player_ped_id(), 0);
			if (!ped::is_ped_injured(player::player_ped_id())) {
				player::set_player_control(player::player_id(), 1, 0);
				player::set_everyone_ignore_player(player::player_id(), 0);
			}
			iVar22 = player::get_players_last_vehicle();
			if (entity::does_entity_exist(iVar22) && vehicle::is_vehicle_driveable(iVar22, 0)) {
				entity::set_entity_visible(iVar22, 1, 0);
				entity::freeze_entity_position(iVar22, 0);
				if (entity::does_entity_belong_to_this_script(iVar22, 1)) {
					entity::set_vehicle_as_no_longer_needed(&iVar22);
				}
			}
			iVar23 = 5000;
			iVar24 = gameplay::get_game_timer();
			while (!cam::is_gameplay_cam_rendering() && gameplay::get_game_timer() - iVar24 < iVar23) {
				system::wait(0);
			}
			if (interior::is_valid_interior(Local_402.f_112)) {
				interior::unpin_interior(Local_402.f_112);
			}
			StringCopy(&Global_32504, "", 32);
			if (Local_402 == 21 || Local_402 == 22 || Local_402 == 23) {
				func_234(47, 1);
				func_229(47, 1);
			}
			streaming::new_load_scene_stop();
			streaming::clear_focus();
			ui::display_hud(1);
			ui::display_radar(1);
			func_221(0, 1, 1, 0);
			iLocal_854 = 0;
			Global_25443 = 0;
		}
	}
	iVar25 = 0;
	if (!iLocal_854 && !entity::is_entity_in_angled_area(player::player_ped_id(), Local_402.f_29, Local_402.f_29.f_3,
														 Local_402.f_29.f_6, 0, 1, 0) ||
		ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) && !Local_402.f_29.f_69 ||
		!ped::is_ped_on_foot(player::player_ped_id()) && !ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
		!iLocal_854 && func_66(Local_402, 5) || !iLocal_854 && controls::is_control_just_pressed(2, 199) ||
		!iLocal_854 && ui::is_pause_menu_active() || !func_288(0) ||
		player::get_player_wanted_level(player::player_id()) > 0 || ped::is_ped_climbing(player::player_ped_id()) ||
		ped::is_ped_on_vehicle(player::player_ped_id()) || Global_25340 ||
		ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) && ped::is_ped_being_jacked(player::player_ped_id())) {
		if (Local_402.f_2 > 0 && Local_402.f_2 != 90) {
			iLocal_1014 = 1;
			Local_402.f_2 = 99;
		}
		iVar25 = 1;
	}
	fVar30 = 20f;
	iVar31 = 3;
	switch (Local_402.f_2) {
	case 0:
		if (Local_402 != -1 && func_66(Local_402, 0) && !func_66(Local_402, 5) && !iLocal_1015 && !iVar25) {
			if (entity::is_entity_in_angled_area(player::player_ped_id(), Local_402.f_29, Local_402.f_29.f_3,
												 Local_402.f_29.f_6, 0, 1, 0) &&
				!ui::is_help_message_being_displayed()) {
				Var26 = {Local_402.f_29.f_63};
				StringConCat(&Var26, "_01", 16);
				func_173(&Local_402.f_5, 3, &Var26, 0, 0, 0, 0);
				Local_402.f_2 = 1;
			}
		}
		break;

	case 1:
		if (func_168(Local_402.f_5, 1)) {
			if (func_287(iLocal_672) < Local_402.f_29.f_67) {
				Local_402.f_4 = gameplay::get_game_timer();
				func_68(&Local_402.f_5);
				iLocal_669 = 0;
				Local_402.f_2 = 90;
			}
			else {
				iLocal_669 = 0;
				Local_402.f_4 = gameplay::get_game_timer();
				func_68(&Local_402.f_5);
				Local_402.f_2 = 2;
			}
		}
		break;

	case 2:
		iLocal_669++;
		if (iLocal_669 >= 3) {
			Var26 = {Local_402.f_29.f_63};
			StringConCat(&Var26, "_02", 16);
			func_173(&Local_402.f_5, 3, &Var26, 0, 0, 0, 0);
			Local_402.f_2 = 3;
		}
		break;

	case 3:
		if (func_168(Local_402.f_5, 1)) {
			if (func_287(iLocal_672) < Local_402.f_29.f_67) {
				Local_402.f_4 = gameplay::get_game_timer();
				Local_402.f_2 = 90;
			}
			else {
				audio::play_sound_frontend(-1, "PROPERTY_PURCHASE_MEDIUM", "HUD_PROPERTY_SOUNDSET", 1);
				iLocal_854 = 0;
				if (Local_402 == 15 || Local_402 == 17 || Local_402 == 16) {
					Local_516.f_4 = 113;
					iLocal_854 = 1;
				}
				else if (Local_402 == 18 || Local_402 == 19) {
					Local_516.f_4 = 115;
					iLocal_854 = 1;
				}
				else if (Local_402 == 12 || Local_402 == 13) {
					Local_516.f_4 = 114;
					iLocal_854 = 1;
				}
				else if (Local_402 == 21 || Local_402 == 22 || Local_402 == 23) {
					Local_516.f_4 = 116;
					iLocal_854 = 1;
				}
				Local_516 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
				Local_516.f_1 = 0;
				Local_516.f_3 = 0;
				Local_516.f_2 = 0;
				iLocal_856 = 1;
				Global_25443 = 1;
				if (iLocal_854) {
					if (Local_402 == 21 || Local_402 == 22 || Local_402 == 23) {
						func_234(47, 0);
						func_229(47, 0);
						Local_402.f_112 =
							interior::get_interior_at_coords_with_type(198.3659f, -1020.273f, -100f, "v_garagem_sp");
						if (interior::is_valid_interior(Local_402.f_112)) {
							if (!interior::is_interior_ready(Local_402.f_112)) {
								interior::_load_interior(Local_402.f_112);
							}
							StringCopy(&Global_32504, "v_garagem_sp", 32);
						}
					}
					player::set_player_invincible(player::player_id(), 1);
					streaming::new_load_scene_stop();
					Local_402.f_4 = gameplay::get_game_timer();
					Local_402.f_2 = 4;
				}
				else {
					Local_402.f_2 = 8;
				}
				func_68(&Local_402.f_5);
			}
		}
		break;

	case 4:
		bVar35 = true;
		if (Local_402 == 21 || Local_402 == 22 || Local_402 == 23) {
			Local_402.f_112 = interior::get_interior_at_coords_with_type(198.3659f, -1020.273f, -100f, "v_garagem_sp");
			if (!interior::is_valid_interior(Local_402.f_112) || interior::is_interior_capped(Local_402.f_112) ||
				interior::is_interior_disabled(Local_402.f_112)) {
				func_234(47, 0);
				func_229(47, 0);
				bVar35 = false;
			}
		}
		if (bVar35) {
			if (Local_402 == 12) {
				fVar30 = 95f;
				iVar31 = 2;
			}
			else if (Local_402 == 13) {
				fVar30 = 150f;
				iVar31 = 2;
			}
			else if (Local_402 == 21 || Local_402 == 22 || Local_402 == 23) {
				fVar30 = 150f;
				iVar31 = 2;
			}
			vVar32 = {system::cos(Local_402.f_29.f_14.f_3.f_2 + 90f), system::sin(Local_402.f_29.f_14.f_3.f_2 + 90f),
					  0f};
			if (Local_402 == 21 || Local_402 == 22 || Local_402 == 23) {
				if (streaming::new_load_scene_start_sphere(200.4651f, -1020.631f, -100f, 50f, 0) ||
					gameplay::get_game_timer() - Local_402.f_4 > 3500) {
					Local_402.f_4 = gameplay::get_game_timer();
					Local_402.f_2 = 5;
				}
			}
			else if (streaming::new_load_scene_start(Local_402.f_29.f_14, vVar32, fVar30, iVar31) ||
					 gameplay::get_game_timer() - Local_402.f_4 > 3500) {
				Local_402.f_4 = gameplay::get_game_timer();
				Local_402.f_2 = 5;
			}
		}
		break;

	case 5:
		if (streaming::is_new_load_scene_active() && streaming::is_new_load_scene_loaded() &&
				(!interior::is_valid_interior(Local_402.f_112) || interior::is_interior_ready(Local_402.f_112)) ||
			gameplay::get_game_timer() - Local_402.f_4 > 10000) {
			Local_402.f_4 = gameplay::get_game_timer();
			Local_402.f_2 = 6;
		}
		break;

	case 6:
		if (gameplay::get_game_timer() - Local_402.f_4 > 1000) {
			if (entity::does_entity_exist(iLocal_1027) && entity::is_entity_a_mission_entity(iLocal_1027) &&
				entity::does_entity_belong_to_this_script(iLocal_1027, 1)) {
				entity::set_vehicle_as_no_longer_needed(&iLocal_1027);
			}
			iLocal_1027 = player::get_players_last_vehicle();
			if (entity::does_entity_exist(iLocal_1027) && vehicle::is_vehicle_driveable(iLocal_1027, 0) &&
				!vehicle::is_this_model_a_heli(entity::get_entity_model(iLocal_1027)) &&
				!vehicle::is_this_model_a_plane(entity::get_entity_model(iLocal_1027)) &&
				!vehicle::is_this_model_a_boat(entity::get_entity_model(iLocal_1027))) {
				if (!entity::is_entity_a_mission_entity(iLocal_1027)) {
					entity::set_entity_as_mission_entity(iLocal_1027, 0, 0);
				}
			}
			else {
				iLocal_1027 = 0;
			}
			entity::set_entity_visible(player::player_ped_id(), 0, 0);
			if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				entity::freeze_entity_position(player::player_ped_id(), 1);
			}
			if (!ped::is_ped_injured(player::player_ped_id())) {
				player::set_player_control(player::player_id(), 0, 16);
				player::set_player_control(player::player_id(), 0, 32);
				player::set_player_control(player::player_id(), 0, 128);
				player::set_everyone_ignore_player(player::player_id(), 1);
			}
			func_221(1, 1, 1, 0);
			ui::clear_prints();
			ui::clear_help(1);
			vVar32 = {system::cos(Local_402.f_29.f_14.f_3.f_2 + 90f), system::sin(Local_402.f_29.f_14.f_3.f_2 + 90f),
					  0f};
			if (!Local_402.f_29.f_69) {
				streaming::_set_focus_area(Local_402.f_29.f_14, vVar32);
			}
			if (!cam::does_cam_exist(Local_402.f_110)) {
				Local_402.f_110 = cam::create_cam("DEFAULT_SCRIPTED_CAMERA", 1);
			}
			if (cam::does_cam_exist(Local_402.f_110)) {
				if (Local_402.f_29.f_69) {
					interior::_0xAF348AFCB575A441("GtaMloRoom001");
				}
				func_221(1, 1, 1, 0);
				func_220(&Local_402.f_29.f_14, &Local_402.f_110, &Local_402.f_111);
			}
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			ui::display_hud(0);
			ui::display_radar(0);
			streaming::new_load_scene_stop();
			Local_402.f_2 = 7;
			Local_402.f_4 = gameplay::get_game_timer();
			func_68(&Local_402.f_5);
		}
		break;

	case 7:
		if (gameplay::get_game_timer() - Local_402.f_4 < 7000 && !func_285(1000)) {
			Var26 = {Local_402.f_29.f_63};
			StringConCat(&Var26, "_05", 16);
			func_171(&Var26, -1);
			if (!streaming::is_new_load_scene_active()) {
				if (Local_402 == 12 || Local_402 == 13) {
					fVar30 = 85f;
					iVar31 = 2;
				}
				vVar32 = {system::cos(Local_402.f_29.f_29.f_2 + 90f), system::sin(Local_402.f_29.f_29.f_2 + 90f), 0f};
				streaming::new_load_scene_start(Local_402.f_29.f_29, vVar32, fVar30, iVar31);
			}
		}
		else {
			if (cam::does_cam_exist(Local_402.f_110)) {
				if (Local_402.f_29.f_69) {
					interior::_0xAF348AFCB575A441("GtaMloRoom001");
				}
				func_221(1, 1, 1, 0);
				func_220(&Local_402.f_29.f_29, &Local_402.f_110, &Local_402.f_111);
			}
			streaming::clear_focus();
			ui::clear_help(1);
			Local_402.f_4 = gameplay::get_game_timer();
			Local_402.f_2 = 8;
		}
		break;

	case 8:
		if (gameplay::get_game_timer() - Local_402.f_4 < 7000 && !func_285(1000)) {
			Var26 = {Local_402.f_29.f_63};
			StringConCat(&Var26, "_06", 16);
			if (!ui::is_help_message_being_displayed()) {
				func_171(&Var26, 7000);
			}
		}
		else {
			ui::clear_help(1);
			Local_402.f_4 = gameplay::get_game_timer();
			Local_402.f_2 = 9;
		}
		break;

	case 9:
		if (gameplay::get_game_timer() - Local_402.f_4 < 3500 && !func_285(1000)) {
			Var26 = {Local_402.f_29.f_63};
			StringConCat(&Var26, "_03", 16);
			if (graphics::has_scaleform_movie_loaded(Local_516)) {
				if (Local_516.f_1) {
					if (!Local_516.f_3) {
						audio::play_sound_frontend(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", 1);
						Local_516.f_3 = 1;
					}
					graphics::draw_scaleform_movie_fullscreen(Local_516, 255, 255, 255, 255, 0);
				}
				else {
					graphics::_push_scaleform_movie_function(Local_516, "SHOW_SHARD_MIDSIZED_MESSAGE");
					func_87(&Var26);
					graphics::_pop_scaleform_movie_function();
					Local_516.f_1 = 1;
				}
			}
		}
		else if (gameplay::get_game_timer() - Local_402.f_4 < 4000 && !func_285(1000)) {
			if (graphics::has_scaleform_movie_loaded(Local_516)) {
				if (Local_516.f_2) {
					graphics::draw_scaleform_movie_fullscreen(Local_516, 255, 255, 255, 255, 0);
				}
				else {
					graphics::_push_scaleform_movie_function(Local_516, "SHARD_ANIM_OUT");
					graphics::_push_scaleform_movie_function_parameter_int(1);
					graphics::_push_scaleform_movie_function_parameter_float(0.33f);
					graphics::_pop_scaleform_movie_function_void();
					Local_516.f_2 = 1;
				}
			}
		}
		else {
			if (iLocal_854) {
				cam::render_script_cams(0, 0, 3000, 1, 0, 0);
				if (cam::does_cam_exist(Local_402.f_110)) {
					cam::set_cam_active(Local_402.f_110, 0);
					cam::destroy_cam(Local_402.f_110, 0);
				}
				if (cam::does_cam_exist(Local_402.f_111)) {
					cam::set_cam_active(Local_402.f_111, 0);
					cam::destroy_cam(Local_402.f_111, 0);
				}
				cam::set_gameplay_cam_relative_heading(0f);
				cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
				entity::set_entity_visible(player::player_ped_id(), 1, 0);
				entity::freeze_entity_position(player::player_ped_id(), 0);
				iVar36 = player::get_players_last_vehicle();
				if (!ped::is_ped_injured(player::player_ped_id())) {
					player::set_player_control(player::player_id(), 1, 0);
					player::set_everyone_ignore_player(player::player_id(), 0);
					if (entity::does_entity_exist(iVar36) && vehicle::is_vehicle_driveable(iVar36, 0) &&
						ped::is_ped_in_vehicle(player::player_ped_id(), iVar36, 0)) {
						entity::set_entity_coords(iVar36, Local_402.f_29.f_44, 1, 1, 0, 1);
						entity::set_entity_heading(iVar36, Local_402.f_29.f_47);
						vehicle::set_vehicle_on_ground_properly(iVar36, 1084227584);
					}
					else {
						entity::set_entity_coords(player::player_ped_id(), Local_402.f_29.f_44, 1, 1, 0, 1);
						entity::set_entity_heading(player::player_ped_id(), Local_402.f_29.f_47);
					}
				}
				if (entity::does_entity_exist(iLocal_1027) && vehicle::is_vehicle_driveable(iLocal_1027, 0)) {
					iVar37 = func_48(24);
					if (func_219(&Local_776, 24)) {
						func_214(&Local_776, func_393());
						if (entity::does_entity_exist(iVar37)) {
							vehicle::delete_vehicle(&iVar37);
						}
					}
					if (Local_402 == 21) {
						gameplay::clear_area(-89.377f, 92.6583f, 71.2349f, 5f, 1, 0, 0, 0);
						entity::set_entity_coords(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 1, 0, 0, 1);
						entity::set_entity_heading(iLocal_1027, 154.4846f);
						func_212(iLocal_1027, -89.377f, 92.6583f, 71.2349f, 154.4846f, 24, 0);
					}
					else if (Local_402 == 22) {
						gameplay::clear_area(-62.0307f, -1839.859f, 25.6787f, 5f, 1, 0, 0, 0);
						entity::set_entity_coords(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 1, 0, 0, 1);
						entity::set_entity_heading(iLocal_1027, 319.6985f);
						func_212(iLocal_1027, -62.0307f, -1839.859f, 25.6787f, 319.6985f, 24, 0);
					}
					else if (Local_402 == 23) {
						gameplay::clear_area(-234.7648f, -1150.311f, 21.9224f, 5f, 1, 0, 0, 0);
						entity::set_entity_coords(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 1, 0, 0, 1);
						entity::set_entity_heading(iLocal_1027, 270.8741f);
						func_212(iLocal_1027, -234.7648f, -1150.311f, 21.9224f, 270.8741f, 24, 0);
					}
					vehicle::set_vehicle_on_ground_properly(iLocal_1027, 1084227584);
				}
				if (entity::does_entity_exist(iVar36) && vehicle::is_vehicle_driveable(iVar36, 0)) {
					entity::set_entity_visible(iVar36, 1, 0);
					entity::freeze_entity_position(iVar36, 0);
					if (entity::does_entity_belong_to_this_script(iVar36, 1)) {
						entity::set_vehicle_as_no_longer_needed(&iVar36);
					}
				}
				iVar38 = 5000;
				iVar39 = gameplay::get_game_timer();
				while (!cam::is_gameplay_cam_rendering() && gameplay::get_game_timer() - iVar39 < iVar38) {
					system::wait(0);
				}
				if (interior::is_valid_interior(Local_402.f_112)) {
					interior::unpin_interior(Local_402.f_112);
				}
				StringCopy(&Global_32504, "", 32);
				if (Local_402 == 21 || Local_402 == 22 || Local_402 == 23) {
					func_234(47, 1);
					func_229(47, 1);
					Global_101700.f_31389.f_4800 = 1;
				}
				streaming::new_load_scene_stop();
				streaming::clear_focus();
				ui::display_hud(1);
				ui::display_radar(1);
				func_221(0, 1, 1, 0);
				iLocal_854 = 0;
				Global_25443 = 0;
			}
			if (graphics::has_scaleform_movie_loaded(Local_516)) {
				graphics::set_scaleform_movie_as_no_longer_needed(&Local_516);
			}
			func_258(iLocal_672, Local_516.f_4, Local_402.f_29.f_67);
			func_257(Local_402, 5, 1);
			func_244(Local_402);
			if (ui::does_blip_exist(Global_68531.f_208[Local_402])) {
				ui::remove_blip(&Global_68531.f_208[Local_402]);
			}
			iLocal_940 = Local_402;
			func_243();
			Local_402.f_2 = 99;
		}
		break;

	case 90:
		iLocal_669++;
		if (iLocal_669 >= 3) {
			if (gameplay::get_game_timer() - Local_402.f_4 < 4000) {
				Var26 = {Local_402.f_29.f_63};
				StringConCat(&Var26, "_04", 16);
				func_242(&Var26);
			}
			else {
				Local_402.f_2 = 99;
			}
		}
		break;
	}
}

// Position - 0x1C4BB
void func_242(char *sParam0) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 1, 1, -1);
}

// Position - 0x1C4D1
int func_243() {
	if (func_181(0)) {
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

// Position - 0x1C51C
void func_244(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam0) {
	case 21:
		iVar0 = 20;
		iVar1 = 155;
		break;

	case 22:
		iVar0 = 21;
		iVar1 = 156;
		break;

	case 23:
		iVar0 = 22;
		iVar1 = 157;
		break;

	case 12:
		iVar0 = 13;
		iVar1 = 57;
		break;

	case 13:
		iVar0 = 16;
		iVar1 = 62;
		break;

	case 14:
		iVar0 = 19;
		iVar1 = 63;
		break;

	case 15:
		iVar0 = 12;
		iVar1 = 56;
		break;

	case 16:
		iVar0 = 15;
		iVar1 = 60;
		break;

	case 17:
		iVar0 = 18;
		iVar1 = 61;
		break;

	case 18:
		iVar0 = 11;
		iVar1 = 55;
		break;

	case 19:
		iVar0 = 14;
		iVar1 = 58;
		break;
	}
	func_256(iVar0, 0);
	iVar2 = func_255(iVar0, iVar1, 1);
	if (iVar2 != 0) {
	}
	else {
		func_254(iVar0);
		if (func_252(iVar0, iVar1, 1)) {
			func_245(iVar0);
			func_254(iVar0);
		}
	}
}

// Position - 0x1C623
void func_245(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	char *sVar8;

	iVar0 = func_251(iParam0);
	if (iVar0 == -1) {
		return;
	}
	if (Global_46225[iVar0 /*203*/].f_9 == 0) {
		return;
	}
	iVar1 = Global_46225[iVar0 /*203*/].f_10[Global_46225[iVar0 /*203*/].f_9 - 1 /*48*/];
	iVar2 = Global_46225[iVar0 /*203*/].f_9 - 1;
	if (!Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1) {
		iVar7 = Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_250(Global_36925[iVar7 /*12*/].f_1)}, 4);
	}
	else {
		Var3 = {Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2};
	}
	if (iParam0 == 28) {
		switch (iVar1) {
		case 249: sVar8 = "PW_FEED_EM_1"; break;

		case 269: sVar8 = "PW_FEED_EM_3"; break;

		default: sVar8 = "PW_FEED_EM_2"; break;
		}
		func_246(1, Global_36925[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else {
		switch (Global_36925[iVar1 /*12*/].f_3) {
		case 0:
			func_246(0, Global_36925[iVar1 /*12*/].f_2, iVar1, &Var3,
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]);
			break;

		case 1:
			func_246(1, Global_36925[iVar1 /*12*/].f_2, iVar1, &Var3,
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]);
			break;

		case 2:
			func_246(2, Global_36925[iVar1 /*12*/].f_2, iVar1, &Var3,
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/],
					 &Global_46225[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]);
			break;
		}
	}
}

// Position - 0x1C993
void func_246(int iParam0, int iParam1, int iParam2, char *sParam3, char *sParam4, char *sParam5, char *sParam6,
			  char *sParam7, char *sParam8, char *sParam9, char *sParam10, char *sParam11, char *sParam12,
			  char *sParam13) {
	int iVar0;
	bool bVar1;
	char cVar2[64];

	if (cutscene::is_cutscene_playing()) {
		return;
	}
	iVar0 = func_393();
	bVar1 = false;
	StringCopy(&cVar2, func_249(iParam1, &bVar1), 64);
	if (iVar0 == iParam0) {
		switch (iParam2) {
		case 72: ui::_set_notification_text_entry("PROPR_INCEMAIL1"); break;

		case 73: ui::_set_notification_text_entry("PROPR_INCEMAIL3"); break;

		case 74: ui::_set_notification_text_entry("PROPR_INCEMAIL2"); break;

		default:
			ui::_set_notification_text_entry(sParam3);
			if (!gameplay::is_string_null_or_empty(sParam4)) {
				ui::add_text_component_substring_text_label(sParam4);
			}
			if (!gameplay::is_string_null_or_empty(sParam5)) {
				ui::add_text_component_substring_text_label(sParam5);
			}
			if (!gameplay::is_string_null_or_empty(sParam6)) {
				ui::add_text_component_substring_text_label(sParam6);
			}
			if (!gameplay::is_string_null_or_empty(sParam7)) {
				ui::add_text_component_substring_text_label(sParam7);
			}
			if (!gameplay::is_string_null_or_empty(sParam8)) {
				ui::add_text_component_substring_text_label(sParam8);
			}
			if (!gameplay::is_string_null_or_empty(sParam9)) {
				ui::add_text_component_substring_text_label(sParam9);
			}
			if (!gameplay::is_string_null_or_empty(sParam10)) {
				ui::add_text_component_substring_text_label(sParam10);
			}
			if (!gameplay::is_string_null_or_empty(sParam11)) {
				ui::add_text_component_substring_text_label(sParam11);
			}
			if (!gameplay::is_string_null_or_empty(sParam12)) {
				ui::add_text_component_substring_text_label(sParam12);
			}
			if (!gameplay::is_string_null_or_empty(sParam13)) {
				ui::add_text_component_substring_text_label(sParam13);
			}
			break;
		}
		if (bVar1) {
			func_247(ui::_set_notification_message(&cVar2, &cVar2, 0, 2, ui::_get_label_text(func_248(iParam1)), 0));
		}
		else {
			func_247(ui::_set_notification_message("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2,
												   ui::_get_label_text(func_248(iParam1)), 0));
		}
		switch (Global_14443) {
		case 0:
			StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
			Global_36917++;
			if (Global_36917 > 16) {
				Global_36917 = 16;
			}
			break;

		case 2:
			StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
			Global_36919++;
			if (Global_36919 > 16) {
				Global_36919 = 16;
			}
			break;

		case 1:
			StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
			Global_36918++;
			if (Global_36918 > 16) {
				Global_36918 = 16;
			}
			break;

		default: StringCopy(&Global_14432, "Phone_SoundSet_Default", 24); break;
		}
		audio::play_sound_frontend(-1, "Notification", &Global_14432, 1);
	}
}

// Position - 0x1CB7B
void func_247(var uParam0) {
	Global_36920[Global_36924] = uParam0;
	Global_16803 = 1;
	Global_16802 = uParam0;
	Global_36924++;
	if (Global_36924 == 3) {
		Global_36924 = 0;
	}
}

// Position - 0x1CBA9
char *func_248(int iParam0) {
	switch (iParam0) {
	case 0: return "EMSTR_0";

	case 3: return "EMSTR_3";

	case 1: return "EMSTR_6";

	case 2: return "EMSTR_9";

	case 4: return "EMSTR_12";

	case 5: return "EMSTR_29";

	case 6: return "EMSTR_36";

	case 7: return "EMSTR_39";

	case 8: return "EMSTR_52";

	case 9: return "EMSTR_55";

	case 10: return "EMSTR_58";

	case 11: return "EMSTR_78";

	case 12: return "EMSTR_81";

	case 13: return "EMSTR_84";

	case 14: return "EMSTR_87";

	case 15: return "EMSTR_106";

	case 16: return "EMSTR_114";

	case 17: return "EMSTR_142";

	case 18: return "EMSTR_145";

	case 19: return "EMSTR_152";

	case 20: return "EMSTR_157";

	case 21: return "EMSTR_163";

	case 22: return "EMSTR_182";

	case 23: return "EMSTR_187";

	case 24: return "EMSTR_190";

	case 25: return "EMSTR_206";

	case 26: return "EMSTR_219";

	case 27: return "EMSTR_226";

	case 28: return "EMSTR_233";

	case 29: return "EMSTR_242";

	case 30: return "EMSTR_249";

	case 31: return "EMSTR_262";

	case 32: return "EMSTR_269";

	case 33: return "EMSTR_319";

	case 34: return "EMSTR_340";

	case 35: return "EMSTR_348";

	case 36: return "EMSTR_182";

	case 37: return "EMSTR_357";

	case 38: return "EMSTR_360";

	case 39: return "EMSTR_369";

	case 40: return "EMSTR_376";

	case 41: return "EMSTR_379";

	case 42: return "EMSTR_382";

	case 43: return "EMSTR_384";

	case 44: return "EMSTR_387";

	case 45: return "EMSTR_390";

	case 46: return "EMSTR_393";

	case 47: return "EMSTR_396";

	case 48: return "EMSTR_399";

	case 49: return "EMSTR_402";

	case 50: return "EMSTR_405";

	case 51: return "EMSTR_408";

	case 52: return "EMSTR_411";

	case 53: return "EMSTR_414";

	case 54: return "EMSTR_465";

	case 55: return "EMSTR_468";

	case 56: return "EMSTR_489";

	case 57: return "EMSTR_492";

	case 58: return "EMSTR_495";

	case 59: return "EMSTR_498";

	case 60: return "EMSTR_501";

	case 61: return "EMSTR_504";

	case 62: return "EMSTR_507";

	case 63: return "EMSTR_640";

	case 64: return "EMSTR_643";

	case 65: return "EMSTR_652";

	default:
	}
	return "NULL";
}

// Position - 0x1CF14
char *func_249(int iParam0, int *iParam1) {
	*iParam1 = 1;
	switch (iParam0) {
	case 0: return ui::_get_label_text(&Global_101700.f_27009[0 /*29*/].f_7);

	case 1: return ui::_get_label_text(&Global_101700.f_27009[1 /*29*/].f_7);

	case 2: return ui::_get_label_text(&Global_101700.f_27009[2 /*29*/].f_7);

	case 7: return ui::_get_label_text(&Global_101700.f_27009[12 /*29*/].f_7);

	case 4: return ui::_get_label_text(&Global_101700.f_27009[60 /*29*/].f_7);

	case 6: return ui::_get_label_text(&Global_101700.f_27009[62 /*29*/].f_7);

	case 3: return ui::_get_label_text(&Global_101700.f_27009[14 /*29*/].f_7);

	case 16: return ui::_get_label_text(&Global_101700.f_27009[97 /*29*/].f_7);

	case 19: return ui::_get_label_text(&Global_101700.f_27009[99 /*29*/].f_7);

	case 15: return ui::_get_label_text(&Global_101700.f_27009[96 /*29*/].f_7);

	case 63: return "CHAR_CARSITE2";

	case 64: return "CHAR_BOATSITE";

	case 8: return "CHAR_BANK_MAZE";

	case 9: return "CHAR_BANK_FLEECA";

	case 10: return "CHAR_BANK_BOL";

	case 21: return "CHAR_MINOTAUR";

	case 25: return ui::_get_label_text(&Global_101700.f_27009[15 /*29*/].f_7);

	case 26: return ui::_get_label_text(&Global_101700.f_27009[30 /*29*/].f_7);

	case 27: return ui::_get_label_text(&Global_101700.f_27009[17 /*29*/].f_7);

	case 29: return ui::_get_label_text(&Global_101700.f_27009[20 /*29*/].f_7);

	case 30: return ui::_get_label_text(&Global_101700.f_27009[43 /*29*/].f_7);

	case 31: return ui::_get_label_text(&Global_101700.f_27009[44 /*29*/].f_7);

	case 32: return ui::_get_label_text(&Global_101700.f_27009[19 /*29*/].f_7);

	case 34: return ui::_get_label_text(&Global_101700.f_27009[40 /*29*/].f_7);

	case 36: return ui::_get_label_text("CELL_E_381");

	case 38: return ui::_get_label_text(&Global_101700.f_27009[64 /*29*/].f_7);

	case 5: return "CHAR_EPSILON";

	case 13: return "CHAR_MILSITE";

	case 11: return "CHAR_CARSITE";

	case 14: return "CHAR_BOATSITE";

	case 12: return "CHAR_PLANESITE";

	case 24: return "CHAR_DR_FRIEDLANDER";

	case 55: return "CHAR_CARSITE2";

	case 54: return "CHAR_BIKESITE";

	case 39: return ui::_get_label_text(&Global_101700.f_27009[122 /*29*/].f_7);

	case 40: return ui::_get_label_text(&Global_101700.f_27009[125 /*29*/].f_7);

	case 41: return ui::_get_label_text(&Global_101700.f_27009[113 /*29*/].f_7);

	case 42: return ui::_get_label_text(&Global_101700.f_27009[126 /*29*/].f_7);

	case 43: return ui::_get_label_text(&Global_101700.f_27009[127 /*29*/].f_7);

	case 44: return ui::_get_label_text(&Global_101700.f_27009[124 /*29*/].f_7);

	case 45: return ui::_get_label_text(&Global_101700.f_27009[114 /*29*/].f_7);

	case 46: return ui::_get_label_text(&Global_101700.f_27009[115 /*29*/].f_7);

	case 47: return ui::_get_label_text(&Global_101700.f_27009[116 /*29*/].f_7);

	case 48: return ui::_get_label_text(&Global_101700.f_27009[123 /*29*/].f_7);

	case 49: return ui::_get_label_text(&Global_101700.f_27009[117 /*29*/].f_7);

	case 50: return ui::_get_label_text(&Global_101700.f_27009[118 /*29*/].f_7);

	case 51: return ui::_get_label_text(&Global_101700.f_27009[119 /*29*/].f_7);

	case 52: return ui::_get_label_text(&Global_101700.f_27009[120 /*29*/].f_7);

	case 53: return ui::_get_label_text(&Global_101700.f_27009[121 /*29*/].f_7);

	default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

// Position - 0x1D367
struct<16> func_250(int iParam0) {
	struct<16> Var0;
	struct<16> Var16;

	if (iParam0 > -1) {
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var16, "FAIL", 64);
	return Var16;
}

//Position - 0x1D398
int func_251(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7) {
		if (Global_46225[iVar0 /*203*/].f_2 == iParam0) {
			if (Global_46225[iVar0 /*203*/].f_1 > iVar2) {
				iVar2 = Global_46225[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1) {
		return iVar1;
	}
	return -1;
}

// Position - 0x1D3FC
bool func_252(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_256(iParam0, 1);
	if (iVar0 == -1) {
		return false;
	}
	if (Global_46225[iVar0 /*203*/].f_9 == 4) {
		return false;
	}
	Global_46225[iVar0 /*203*/].f_2 = iParam0;
	Global_46225[iVar0 /*203*/].f_10[Global_46225[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_46225[iVar0 /*203*/].f_10[Global_46225[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_46225[iVar0 /*203*/].f_10[Global_46225[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_46225[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46225[iVar0 /*203*/].f_3) {
		if (iVar2 == -1) {
			if (Global_46225[iVar0 /*203*/].f_4[iVar1] == Global_36925[iParam1 /*12*/].f_3) {
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1) {
		if (Global_46225[iVar0 /*203*/].f_3 == 4) {
			return false;
		}
		else {
			Global_46225[iVar0 /*203*/].f_4[Global_46225[iVar0 /*203*/].f_3] = Global_36925[iParam1 /*12*/].f_3;
			Global_46225[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46225[iVar0 /*203*/].f_3) {
		if (iVar2 == -1) {
			if (Global_46225[iVar0 /*203*/].f_4[iVar1] == Global_36925[iParam1 /*12*/].f_2) {
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1) {
		if (Global_46225[iVar0 /*203*/].f_3 == 4) {
			return false;
		}
		else {
			Global_46225[iVar0 /*203*/].f_4[Global_46225[iVar0 /*203*/].f_3] = Global_36925[iParam1 /*12*/].f_2;
			Global_46225[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_46225[iVar0 /*203*/].f_3) {
		iVar3 = Global_46225[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3) {
			func_253(Global_46225[iVar0 /*203*/].f_4[iVar1], Global_46225[iVar0 /*203*/].f_1, 1, iParam2, 0);
		}
		iVar1++;
	}
	return true;
}

// Position - 0x1D5F8
void func_253(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4) {
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;

	if (iParam0 >= 3) {
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!iParam2) {
		iVar19 = Global_40250[iParam1 /*46*/].f_42 - 1;
		if (iVar19 < 0) {
			return;
		}
		iVar20 = Global_40250[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = {func_250(Global_36925[iVar20 /*12*/].f_1)};
		if (Global_36925[iVar20 /*12*/].f_2 == iParam0 && Global_36925[iVar20 /*12*/].f_3 != iParam0) {
			return;
		}
		iVar1 = Global_36925[iVar20 /*12*/].f_2;
		iVar0 = Global_45863[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16) {
			iVar0 -= 16;
			bVar21 = true;
		}
		if (bVar21) {
			if (!Global_45863[iParam0 /*120*/].f_69[iVar0]) {
				switch (iParam0) {
				case 0:
					Global_36917--;
					if (Global_36917 < 0) {
						Global_36917 = 0;
					}
					break;

				case 1:
					Global_36918--;
					if (Global_36918 < 0) {
						Global_36918 = 0;
					}
					break;

				case 2:
					Global_36919--;
					if (Global_36919 < 0) {
						Global_36919 = 0;
					}
					break;
				}
			}
		}
		Global_45863[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_45863[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_45863[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45863[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_45863[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45863[iParam0 /*120*/]++;
	}
	else {
		iVar0 = Global_45863[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16) {
			iVar0 -= 16;
			bVar22 = true;
		}
		if (bVar22) {
			if (!Global_45863[iParam0 /*120*/].f_69[iVar0]) {
				switch (iParam0) {
				case 0:
					Global_36917--;
					if (Global_36917 < 0) {
						Global_36917 = 0;
					}
					break;

				case 1:
					Global_36918--;
					if (Global_36918 < 0) {
						Global_36918 = 0;
					}
					break;

				case 2:
					Global_36919--;
					if (Global_36919 < 0) {
						Global_36919 = 0;
					}
					break;
				}
			}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7) {
			if (Global_46225[iVar24 /*203*/].f_1 == iParam1 && Global_46225[iVar24 /*203*/].f_9 > 0) {
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1) {
			return;
		}
		Global_45863[iParam0 /*120*/].f_18[iVar0] = Global_46225[iVar23 /*203*/].f_1;
		Global_45863[iParam0 /*120*/].f_1[iVar0] = Global_46225[iVar23 /*203*/].f_9 - 1;
		Global_45863[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45863[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_45863[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45863[iParam0 /*120*/]++;
		iVar25 = Global_45863[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_46225[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_36925[iVar26 /*12*/].f_2;
		if (Global_46225[iVar23 /*203*/].f_10[Global_46225[iVar23 /*203*/].f_9 - 1 /*48*/].f_1) {
			MemCopy(&Var3, {Global_46225[iVar23 /*203*/].f_10[Global_46225[iVar23 /*203*/].f_9 - 1 /*48*/].f_2}, 16);
		}
		else {
			Var3 = {func_250(Global_36925[iVar26 /*12*/].f_1)};
		}
	}
	if (!iParam4) {
		if (!Global_45863[iParam0 /*120*/].f_69[iVar0] && !bParam3) {
			switch (iParam0) {
			case 0: func_246(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); break;

			case 1:
				if (iVar2 == 249) {
					func_246(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				else {
					func_246(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				break;

			case 2: func_246(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); break;
			}
		}
	}
}

// Position - 0x1D9CD
void func_254(int iParam0) {
	int iVar0;

	if (iParam0 == 26) {
		if (!gameplay::is_bit_set(Global_101700.f_23945, 4 - 1)) {
			return;
		}
	}
	iVar0 = func_251(iParam0);
	if (iVar0 == -1) {
		return;
	}
	Global_46225[iVar0 /*203*/] = 0;
}

// Position - 0x1DA0A
int func_255(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (iParam2 < 1) {
		return 0;
	}
	if (Global_47647 == 8) {
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7) {
		if (Global_46225[iVar1 /*203*/].f_2 == iParam0) {
			if (Global_46225[iVar1 /*203*/].f_1 > 0) {
				iVar0 = Global_46225[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (iVar0 == 0) {
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 8) {
		if (Global_47648[iVar1 /*53*/].f_52 == 0) {
			Global_47648[iVar1 /*53*/].f_52 = iVar0;
			Global_47648[iVar1 /*53*/] = iParam0;
			Global_47648[iVar1 /*53*/].f_1 = iParam1;
			Global_47648[iVar1 /*53*/].f_2 = iParam2;
			Global_101700.f_19996.f_310++;
			if (Global_101700.f_19996.f_310 == 0) {
				Global_101700.f_19996.f_310 = 1;
			}
			Global_47648[iVar1 /*53*/].f_10 = 0;
			Global_47648[iVar1 /*53*/].f_3 = Global_101700.f_19996.f_310;
			Global_47648[iVar1 /*53*/].f_4 = 1;
			Global_47647++;
			return Global_47648[iVar1 /*53*/].f_3;
		}
		iVar1++;
	}
	return 0;
}

// Position - 0x1DB25
int func_256(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = func_251(iParam0);
	if (iVar0 > -1) {
		if (Global_46225[iVar0 /*203*/].f_9 < 4) {
			return iVar0;
		}
	}
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 7) {
		if (Global_46225[iVar1 /*203*/] == 0) {
			iVar2 = 1;
		}
		iVar1++;
	}
	if (!iVar2) {
		return -1;
	}
	iVar3 = 1;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7) {
		if (Global_46225[iVar1 /*203*/] == 0) {
			if (iVar3) {
				iVar4 = iVar1;
				iVar5 = Global_46225[iVar1 /*203*/].f_1;
				iVar3 = 0;
			}
			else if (iVar5 > Global_46225[iVar1 /*203*/].f_1) {
				iVar4 = iVar1;
				iVar5 = Global_46225[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_46225[iVar4 /*203*/].f_9 > 0) {
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_46225[iVar4 /*203*/].f_9) {
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3) {
				iVar7 = Global_45863[iVar6 /*120*/];
				if (iVar7 > 16) {
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7) {
					if (Global_45863[iVar6 /*120*/].f_86[iVar8]) {
						if (!Global_45863[iVar6 /*120*/].f_69[iVar8]) {
							if (Global_45863[iVar6 /*120*/].f_18[iVar8] == Global_46225[iVar4 /*203*/].f_1) {
								if (Global_45863[iVar6 /*120*/].f_1[iVar8] == iVar1) {
									switch (iVar6) {
									case 0: Global_36917--; break;

									case 1: Global_36918--; break;

									case 2: Global_36919--; break;
									}
								}
							}
						}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_46225[iVar4 /*203*/].f_2 = iParam0;
	Global_46225[iVar4 /*203*/].f_3 = 0;
	if (!iParam1) {
		Global_46225[iVar4 /*203*/] = 1;
	}
	Global_101700.f_19996.f_310++;
	if (Global_101700.f_19996.f_310 == 0) {
		Global_101700.f_19996.f_310 = 1;
	}
	Global_46225[iVar4 /*203*/].f_1 = Global_101700.f_19996.f_310;
	Global_46225[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

// Position - 0x1DD3D
void func_257(int iParam0, int iParam1, int iParam2) {
	if (iParam0 == -1) {
		return;
	}
	if (iParam2) {
		gameplay::set_bit(&Global_101700.f_31389[iParam0], iParam1);
	}
	else {
		gameplay::clear_bit(&Global_101700.f_31389[iParam0], iParam1);
	}
}

// Position - 0x1DD78
int func_258(int iParam0, int iParam1, int iParam2) {
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 3) {
		return 0;
	}
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 4) {
		return 0;
	}
	return func_259(Global_101700.f_27009[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

// Position - 0x1DDC1
int func_259(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_284();
	if (iParam3 < 1) {
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 0:
			func_283(99, 1);
			func_282(joaat("sp0_money_total_spent"), iParam3);
			break;

		case 1: func_282(joaat("sp1_money_total_spent"), iParam3); break;

		case 2: func_282(joaat("sp2_money_total_spent"), iParam3); break;
		}
		func_267(0);
		switch (iParam2) {
		case 126:
		case 128:
		case 124:
		case 125:
		case 127:
			if (func_266(5)) {
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
			case 0: func_282(joaat("sp0_money_spent_on_tattoos"), iParam3); break;

			case 1: func_282(joaat("sp1_money_spent_on_tattoos"), iParam3); break;

			case 2: func_282(joaat("sp2_money_spent_on_tattoos"), iParam3); break;
			}
			if (func_266(1)) {
				fVar0 = 0f;
				iVar1 = 1;
			}
			break;

		case 21:
			switch (iParam0) {
			case 0: func_282(joaat("sp0_money_spent_on_taxis"), iParam3); break;

			case 1: func_282(joaat("sp1_money_spent_on_taxis"), iParam3); break;

			case 2: func_282(joaat("sp2_money_spent_on_taxis"), iParam3); break;
			}
			break;

		case 25:
			switch (iParam0) {
			case 0: func_282(joaat("sp0_money_spent_in_strip_clubs"), iParam3); break;

			case 1: func_282(joaat("sp1_money_spent_in_strip_clubs"), iParam3); break;

			case 2: func_282(joaat("sp2_money_spent_in_strip_clubs"), iParam3); break;
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
			case 0: func_282(joaat("sp0_money_spent_property"), iParam3); break;

			case 1: func_282(joaat("sp1_money_spent_property"), iParam3); break;

			case 2: func_282(joaat("sp2_money_spent_property"), iParam3); break;
			}
			break;

		default:
			switch (script::get_hash_of_this_script_name()) {
			case joaat("clothes_shop_sp"):
				switch (iParam0) {
				case 0: func_282(joaat("sp0_money_spent_in_clothes"), iParam3); break;

				case 1: func_282(joaat("sp1_money_spent_in_clothes"), iParam3); break;

				case 2: func_282(joaat("sp2_money_spent_in_clothes"), iParam3); break;
				}
				break;

			case joaat("hairdo_shop_sp"):
				switch (iParam0) {
				case 0: func_282(joaat("sp0_money_spent_on_hairdos"), iParam3); break;

				case 1: func_282(joaat("sp1_money_spent_on_hairdos"), iParam3); break;

				case 2: func_282(joaat("sp2_money_spent_on_hairdos"), iParam3); break;
				}
				if (func_266(0)) {
					fVar0 = 0f;
					iVar1 = 0;
				}
				break;

			case joaat("gunclub_shop"):
				switch (iParam0) {
				case 0: func_282(joaat("sp0_money_spent_in_buying_guns"), iParam3); break;

				case 1: func_282(joaat("sp1_money_spent_in_buying_guns"), iParam3); break;

				case 2: func_282(joaat("sp2_money_spent_in_buying_guns"), iParam3); break;
				}
				break;

			case joaat("carmod_shop"):
				switch (iParam0) {
				case 0: func_282(joaat("sp0_money_spent_car_mods"), iParam3); break;

				case 1: func_282(joaat("sp1_money_spent_car_mods"), iParam3); break;

				case 2: func_282(joaat("sp2_money_spent_car_mods"), iParam3); break;
				}
				func_265(iParam3);
				break;
			}
			break;
		}
		break;

	case 1:
		switch (iParam0) {
		case 0: func_283(95, iParam3); break;

		case 1: func_283(97, iParam3); break;

		case 2: func_283(96, iParam3); break;
		}
		func_283(98, iParam3);
		break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor(fVar0 * system::to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f) {
		func_262(iVar1);
		return 1;
	}
	else if (fVar0 != 1f) {
		func_262(iVar1);
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
		case 0: func_282(joaat("sp0_total_cash_earned"), iParam3); break;

		case 1: func_282(joaat("sp1_total_cash_earned"), iParam3); break;

		case 2: func_282(joaat("sp2_total_cash_earned"), iParam3); break;
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
	func_261(iParam0);
	if (Global_35781 == 15) {
		func_260(0);
	}
	return 1;
}

// Position - 0x1E3C0
void func_260(int iParam0) {
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

// Position - 0x1E642
void func_261(int iParam0) {
	int iVar0;

	iVar0 = Global_52996[iParam0];
	switch (iParam0) {
	case 0: stats::stat_set_int(joaat("sp0_total_cash"), iVar0, 1); break;

	case 1: stats::stat_set_int(joaat("sp1_total_cash"), iVar0, 1); break;

	case 2: stats::stat_set_int(joaat("sp2_total_cash"), iVar0, 1); break;
	}
}

// Position - 0x1E69C
void func_262(int iParam0) {
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
			 gameplay::is_bit_set(Global_2097152[func_264() /*10758*/].f_7546.f_10, iParam0)) {
		bVar0 = true;
		gameplay::clear_bit(&Global_101700.f_19523.f_471, iParam0);
		gameplay::clear_bit(&Global_2097152[func_264() /*10758*/].f_7546.f_10, iParam0);
	}
	if (bVar0) {
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		ui::_set_notification_text_entry("COUP_RED");
		ui::add_text_component_substring_text_label(func_263(iParam0));
		ui::_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

// Position - 0x1E75E
char *func_263(int iParam0) {
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

// Position - 0x1E7D8
int func_264() {
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

// Position - 0x1E7E5
void func_265(int iParam0) {
	func_283(93, iParam0);
	func_283(29, iParam0);
	func_283(30, iParam0);
}

// Position - 0x1E805
bool func_266(int iParam0) {
	if (!network::network_is_game_in_progress()) {
		return gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0);
	}
	return gameplay::is_bit_set(Global_2097152[func_264() /*10758*/].f_7546.f_10, iParam0);
}

// Position - 0x1E841
int func_267(int iParam0) {
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
		func_281(27, iVar1);
	}
	if (iVar1 < 200000000) {
		return 0;
	}
	func_268(27, 1);
	return 1;
}

// Position - 0x1E8F8
int func_268(int iParam0, int iParam1) {
	if (iParam0 >= 70) {
		return 0;
	}
	return func_269(iParam0, iParam1);
}

// Position - 0x1E913
int func_269(int iParam0, int iParam1) {
	if (func_27(14) && !func_280(iParam0)) {
		return 0;
	}
	if (player::has_achievement_been_passed(iParam0) && iParam1 == 1) {
		return 0;
	}
	if (Global_25436 != 0 && !Global_69702) {
		return 0;
	}
	if (func_279(&Global_2595550)) {
		if (func_277(&Global_2595550, iParam0)) {
			return 0;
		}
		if (func_270(&Global_2595550, iParam0)) {
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

// Position - 0x1E9B0
bool func_270(var *uParam0, int iParam1) {
	int iVar0;
	var *uVar1[70];

	if (player::has_achievement_been_passed(iParam1)) {
		return false;
	}
	if (func_27(14) && !func_280(iParam1)) {
		return false;
	}
	if (func_277(uParam0, iParam1)) {
		return false;
	}
	if (func_276(uParam0) < 0f) {
		func_275(uParam0, 0);
	}
	func_273(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1) {
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_271(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

// Position - 0x1EA61
int func_271(var *uParam0, int iParam1) {
	int iVar0;

	if (player::has_achievement_been_passed(iParam1)) {
		return 0;
	}
	if (func_27(14) && !func_280(iParam1)) {
		return 0;
	}
	if (func_277(uParam0, iParam1)) {
		return 0;
	}
	if (func_276(uParam0) < 0f) {
		func_275(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if (func_272(uParam0, iVar0)) {
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x1EADC
bool func_272(var *uParam0, int iParam1) { return (*uParam0)[iParam1] == 70; }

// Position - 0x1EAED
void func_273(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		func_274(uParam0, iVar0);
		iVar0++;
	}
	func_275(uParam0, Global_2595549 - 0.5f);
}

// Position - 0x1EB21
void func_274(var *uParam0, int iParam1) { (*uParam0)[iParam1] = 70; }

// Position - 0x1EB31
void func_275(var *uParam0, float fParam1) {
	if (fParam1 == 0f) {
		uParam0->f_72 = 0f;
	}
	else {
		uParam0->f_72 = fParam1;
	}
}

// Position - 0x1EB4E
float func_276(var *uParam0) { return uParam0->f_72; }

// Position - 0x1EB5A
bool func_277(var *uParam0, int iParam1) { return func_278(uParam0, iParam1) != -1; }

// Position - 0x1EB6C
int func_278(var *uParam0, int iParam1) {
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

// Position - 0x1EB99
bool func_279(var *uParam0) { return uParam0->f_71 == 1; }

// Position - 0x1EBA7
int func_280(int iParam0) {
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

// Position - 0x1EBF7
int func_281(int iParam0, int iParam1) {
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

// Position - 0x1EC48
void func_282(int iParam0, int iParam1) {
	int iVar0;

	stats::stat_get_int(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	stats::stat_set_int(iParam0, iVar0, 1);
}

// Position - 0x1EC6B
void func_283(int iParam0, int iParam1) {
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

// Position - 0x1ECC8
void func_284() {
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

// Position - 0x1ED3D
int func_285(int iParam0) {
	if (cam::is_screen_faded_in()) {
		if (gameplay::get_game_timer() - Global_28 > iParam0) {
			Global_27 = gameplay::get_game_timer();
		}
		Global_28 = gameplay::get_game_timer();
		if (gameplay::get_game_timer() - Global_27 > iParam0) {
			if (func_286()) {
				Global_27 = gameplay::get_game_timer();
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x1ED87
bool func_286() {
	if (ui::is_pause_menu_active()) {
		return false;
	}
	if (controls::is_control_just_pressed(0, 18) || controls::is_control_just_pressed(2, 18)) {
		return true;
	}
	return false;
}

// Position - 0x1EDB9
int func_287(int iParam0) {
	var uVar0;

	switch (iParam0) {
	case 0: stats::stat_get_int(joaat("sp0_total_cash"), &uVar0, -1); return uVar0;

	case 1: stats::stat_get_int(joaat("sp1_total_cash"), &uVar0, -1); return uVar0;

	case 2: stats::stat_get_int(joaat("sp2_total_cash"), &uVar0, -1); return uVar0;

	default:
	}
	return 0;
}

// Position - 0x1EE11
bool func_288(int iParam0) { return func_289(iParam0, Global_35781); }

// Position - 0x1EE22
int func_289(int iParam0, int iParam1) {
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

// Position - 0x1F003
void func_290(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	char *sVar3;

	iVar2 = func_393();
	if (iParam2 != 145) {
		iVar2 = iParam2;
	}
	sVar3 = func_127(iParam1);
	switch (iParam0) {
	case 10:
		iVar0 = 5;
		switch (iVar2) {
		case 0: iVar1 = 32; break;

		case 2: iVar1 = 33; break;

		case 1: iVar1 = 31; break;
		}
		break;

	case 11:
		iVar0 = 7;
		if (iParam1 == 15 || iParam1 == 16 || iParam1 == 164 || iParam1 == 217) {
			switch (iVar2) {
			case 0: iVar1 = 191; break;

			case 2: iVar1 = 193; break;

			case 1: iVar1 = 192; break;
			}
		}
		else {
			switch (iVar2) {
			case 0: iVar1 = 40; break;

			case 2: iVar1 = 42; break;

			case 1: iVar1 = 41; break;
			}
		}
		break;

	case 12:
		iVar0 = 6;
		switch (iVar2) {
		case 0: iVar1 = 34; break;

		case 2: iVar1 = 36; break;

		case 1: iVar1 = 35; break;
		}
		break;

	case 13:
		iVar0 = 8;
		switch (iVar2) {
		case 0: iVar1 = 37; break;

		case 2: iVar1 = 39; break;

		case 1: iVar1 = 38; break;
		}
		break;

	case 15:
		iVar0 = 9;
		switch (iVar2) {
		case 0: iVar1 = 186; break;

		case 2: iVar1 = 188; break;

		case 1: iVar1 = 185; break;
		}
		break;

	case 16:
		iVar0 = 10;
		switch (iVar2) {
		case 0: iVar1 = 189; break;

		case 2: iVar1 = 190; break;

		case 1: iVar1 = 187; break;
		}
		break;

	default: return;
	}
	if (func_252(iVar0, iVar1, 1)) {
		func_291(iVar0, sVar3);
		func_245(iVar0);
		func_254(iVar0);
	}
}

// Position - 0x1F20D
void func_291(int iParam0, char *sParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_251(iParam0);
	if (iVar0 == -1) {
		return;
	}
	if (Global_46225[iVar0 /*203*/].f_9 == 0) {
		return;
	}
	if (Global_46225[iVar0 /*203*/].f_10[Global_46225[iVar0 /*203*/].f_9 - 1 /*48*/].f_6 == 10) {
		return;
	}
	iVar1 = Global_46225[iVar0 /*203*/].f_10[Global_46225[iVar0 /*203*/].f_9 - 1 /*48*/].f_6;
	Global_46225[iVar0 /*203*/].f_10[Global_46225[iVar0 /*203*/].f_9 - 1 /*48*/].f_6++;
	StringCopy(&Global_46225[iVar0 /*203*/].f_10[Global_46225[iVar0 /*203*/].f_9 - 1 /*48*/].f_7[iVar1 /*4*/], sParam1,
			   16);
}

// Position - 0x1F2C2
bool func_292(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (!func_297(iParam1) || !func_297(iParam0)) {
		return true;
	}
	iVar0 = func_54(iParam0);
	iVar1 = func_54(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_56(iParam0);
	iVar1 = func_56(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_296(iParam0);
	iVar1 = func_296(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_295(iParam0);
	iVar1 = func_295(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_294(iParam0);
	iVar1 = func_294(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_293(iParam0);
	iVar1 = func_293(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	return false;
}

// Position - 0x1F3CE
int func_293(int iParam0) { return system::shift_right(iParam0, 20) & 63; }

// Position - 0x1F3E1
int func_294(int iParam0) { return system::shift_right(iParam0, 14) & 63; }

// Position - 0x1F3F4
int func_295(int iParam0) { return system::shift_right(iParam0, 9) & 31; }

// Position - 0x1F407
int func_296(int iParam0) { return system::shift_right(iParam0, 4) & 31; }

// Position - 0x1F419
int func_297(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15) {
		return 0;
	}
	iVar0 = func_293(iParam0);
	if (iVar0 < 0 || iVar0 >= 60) {
		return 0;
	}
	iVar1 = func_294(iParam0);
	if (iVar1 < 0 || iVar1 >= 60) {
		return 0;
	}
	iVar2 = func_295(iParam0);
	if (iVar2 < 0 || iVar2 > 23) {
		return 0;
	}
	iVar3 = func_54(iParam0);
	if (iVar3 <= 0 || iVar3 > 2043 || iVar3 < 1979) {
		return 0;
	}
	iVar4 = func_56(iParam0);
	if (iVar4 < 0 || iVar4 > 11) {
		return 0;
	}
	iVar5 = func_296(iParam0);
	if (iVar5 < 1 || iVar5 > func_53(iVar4, iVar3)) {
		return 0;
	}
	return 1;
}

// Position - 0x1F4F5
void func_298() {
	int iVar0;
	var uVar1;
	char *sVar2;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	vector3 vVar15;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	bool bVar23;
	int iVar24;
	bool bVar25;
	vector3 vVar26;
	int iVar29;

	iVar0 = 0;
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("startup_positioning")) == 0) {
		if (Global_101700.f_31389.f_5588) {
			if (!entity::does_entity_exist(Global_69436)) {
				func_214(&Global_101700.f_31389.f_5510, Global_101700.f_31389.f_5590);
				Global_101700.f_31389.f_5588 = 0;
			}
			else if (!vehicle::is_vehicle_driveable(Global_69436, 0) ||
					 func_46(Global_69436, Global_101700.f_31389.f_5590, 1)) {
				Global_101700.f_31389.f_5588 = 0;
			}
			else {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) &&
					ped::get_vehicle_ped_is_in(player::player_ped_id(), 0) == Global_69436 &&
					func_318(player::player_ped_id()) != Global_101700.f_31389.f_5590) {
					Global_101700.f_31389.f_5590 = func_318(player::player_ped_id());
				}
				if (Global_69436 != iLocal_671) {
					sVar2 = entity::get_entity_script(Global_69436, &uVar1);
					if (!gameplay::is_string_null_or_empty(sVar2)) {
						if (gameplay::get_hash_key(sVar2) == gameplay::get_hash_key("vehicle_gen_controller")) {
							Global_101700.f_31389.f_5588 = 0;
							iLocal_1028 = Global_69436;
							if (Global_68531.f_139[24] == Global_69436 ||
								Global_69437 == Global_69436 && Global_69438 == 24) {
								func_317(458, 24, -1, 1);
							}
							else {
								func_317(458, 0, -1, 1);
							}
							Global_69436 = 0;
						}
					}
				}
				if (Global_101700.f_31389.f_5590 != func_393() &&
					Global_90960[Global_101700.f_31389.f_5590 /*98*/] == Global_101700.f_31389.f_5510.f_66 &&
					gameplay::are_strings_equal(&Global_90960[Global_101700.f_31389.f_5590 /*98*/].f_27,
												&Global_101700.f_31389.f_5510.f_1) &&
					!streaming::is_player_switch_in_progress()) {
					func_112(&Global_101700.f_31389.f_5510,
							 &Global_101700.f_31389.f_5600[Global_101700.f_31389.f_5590 /*78*/]);
					Global_101700.f_31389.f_5588 = 0;
					iLocal_1028 = 0;
					func_317(458, 0, -1, 1);
					Global_69436 = 0;
				}
			}
		}
		else if (entity::does_entity_exist(Global_69436) && vehicle::is_vehicle_driveable(Global_69436, 0) &&
				 !func_46(Global_69436, Global_101700.f_31389.f_5590, 1)) {
			Global_101700.f_31389.f_5588 = 1;
		}
		if (entity::does_entity_exist(iLocal_1028) && vehicle::is_vehicle_driveable(iLocal_1028, 0)) {
			if (!Global_101700.f_31389.f_5588 && iLocal_1028 != Global_69436 && iLocal_1028 != iLocal_1029 &&
				!entity::does_entity_belong_to_this_script(iLocal_1028, 1)) {
				func_31(iLocal_1028, 145);
				iLocal_1028 = 0;
				func_317(458, 0, -1, 1);
			}
		}
		else if (iLocal_1028 != 0) {
			iLocal_1028 = 0;
			func_317(458, 0, -1, 1);
		}
		if (entity::does_entity_exist(iLocal_1029) && vehicle::is_vehicle_driveable(iLocal_1029, 0)) {
		}
		else if (iLocal_1029 != 0) {
			iLocal_1029 = 0;
		}
	}
	if (Global_69440.f_66 != 0 && Global_69437 == 0) {
		func_214(&Global_69440, Global_69518);
		Global_69440.f_66 = 0;
	}
	vVar3 = {433.6721f, -1006.538f, 25.96351f};
	vVar6 = {433.6578f, -1017.5f, 32.09895f};
	fVar9 = 11.25f;
	if (iLocal_667 > 0 && iLocal_667 < 99) {
		if (iLocal_667 != 3) {
			if (ped::is_ped_injured(player::player_ped_id()) ||
				!entity::is_entity_in_angled_area(player::player_ped_id(), vVar3, vVar6, fVar9, 0, 1, 0) ||
				func_27(0) || func_27(3) || func_27(2) || func_27(14)) {
				iLocal_667 = 99;
			}
		}
	}
	if (func_316(iLocal_672)) {
		if (!ui::does_blip_exist(iLocal_857)) {
			if (func_27(15) || func_27(12))
				&&iLocal_667 != 3 && !player::is_player_wanted_level_greater(player::player_id(), 0) {
					iLocal_857 = func_314(428.37f, -1013.5f, 27.93f, 0);
					ui::set_blip_sprite(iLocal_857, 225);
					ui::set_blip_name_from_text_file(iLocal_857, "IMPOUND_BLIPNAME");
					ui::set_blip_as_short_range(iLocal_857, 1);
				}
		}
		else if (!(func_27(15) || func_27(12)) || iLocal_667 == 3 ||
				 player::is_player_wanted_level_greater(player::player_id(), 0)) {
			ui::remove_blip(&iLocal_857);
		}
	}
	else if (ui::does_blip_exist(iLocal_857)) {
		ui::remove_blip(&iLocal_857);
	}
	switch (iLocal_667) {
	case 0:
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (Local_402.f_2 == 0 && (func_27(15) || func_27(12)) &&
				!player::is_player_wanted_level_greater(player::player_id(), 0)) {
				if (func_316(iLocal_672)) {
					if (entity::is_entity_in_angled_area(player::player_ped_id(), vVar3, vVar6, fVar9, 0, 1, 0)) {
						if (func_287(iLocal_672) >= 250) {
							iVar10 = 0;
							iVar11 = 0;
							while (iVar11 < 2) {
								if (func_210(iVar11, iLocal_672)) {
									iVar10++;
								}
								iVar11++;
							}
							if (iVar10 > 1) {
								func_173(&iLocal_668, 3, "IMPOUND_TRIG2", 0, 0, 0, 0);
							}
							else {
								func_173(&iLocal_668, 3, "IMPOUND_TRIG1", 0, 0, 0, 0);
							}
							iLocal_667 = 1;
						}
						else {
							func_171("SCLUB_NO_MONEY", -1);
						}
					}
				}
			}
		}
		break;

	case 1:
		if (!ped::is_ped_injured(player::player_ped_id()) && func_169(0, -1, 0)) {
			if (func_168(iLocal_668, 1)) {
				func_68(&iLocal_668);
				ai::clear_ped_tasks(player::player_ped_id());
				func_313();
				iVar12 = 0;
				iVar13 = 0;
				while (iVar13 < 2) {
					if (func_210(iVar13, iLocal_672)) {
						iVar12++;
					}
					iVar13++;
				}
				if (iVar12 > 1) {
					iLocal_657 = 0;
					iLocal_658 = 0;
					iLocal_659 = 0;
					iLocal_662 = -1;
					iLocal_667++;
				}
				else {
					iVar14 = 0;
					while (iVar14 < 2) {
						if (func_210(iVar14, iLocal_672)) {
							if (iVar14 == 0) {
								vVar15 = {431.4f, -997.33f, 24.76f};
							}
							else {
								vVar15 = {436.39f, -997.25f, 24.76f};
							}
							while (!func_304(&iLocal_671, iVar14, vVar15, 179.24f, 1)) {
								system::wait(0);
							}
							if (entity::does_entity_exist(iLocal_671)) {
								if (iVar14 == 0) {
									func_303(18, 1, 0);
								}
								else {
									func_303(19, 1, 0);
								}
								if (!ped::is_ped_injured(player::player_ped_id())) {
									player::set_player_control(player::player_id(), 1, 0);
								}
								func_258(iLocal_672, 118, 250);
								func_302(iVar14);
								func_31(iLocal_671, func_393());
								func_70(1, -1);
								iLocal_667 = 3;
								func_68(&iLocal_668);
								iLocal_668 = -1;
								iLocal_659 = 0;
							}
						}
						iVar14++;
					}
				}
			}
		}
		break;

	case 2:
		switch (func_393()) {
		case 0: iVar18 = 0; break;

		case 1: iVar18 = 1; break;

		case 2: iVar18 = 2; break;
		}
		func_313();
		if (!iLocal_657 || iLocal_658) {
			func_166(0);
			func_165(1, 1, 0, 0, 0);
			func_164(1, 2, 1, 1, 1);
			func_163("IMPOUND_TITLE");
			iLocal_663 = 0;
			iVar19 = -1;
			iVar21 = 0;
			iVar20 = 0;
			while (iVar20 < 2) {
				if (func_210(iVar20, iLocal_672)) {
					func_130(iVar21,
							 vehicle::get_display_name_from_vehicle_model(
								 Global_101700.f_31389.f_5038[iVar18 /*157*/][iVar20 /*78*/].f_66),
							 0, 1, 0, 0);
					if (iVar19 == -1) {
						iVar19 = iVar21;
						iLocal_662 = iVar21;
					}
					gameplay::set_bit(&iLocal_663, iVar21);
					iLocal_664[iVar21] = iVar20;
					func_130(iVar21, "IMPOUND_COST", 1, 1, 0, 0);
					func_301(250, 0);
					iVar21++;
				}
				iVar20++;
			}
			iVar21 = 0;
			func_123(iLocal_662, 1, 1);
			iLocal_660 = 1;
			iLocal_658 = 0;
			iLocal_657 = 1;
		}
		else {
			iVar0 = 0;
			if (gameplay::is_pc_version()) {
				if (controls::_is_input_just_disabled(2)) {
					controls::disable_control_action(0, 1, 1);
					controls::disable_control_action(0, 2, 1);
					controls::enable_control_action(0, 237, 1);
					controls::enable_control_action(0, 238, 1);
					controls::enable_control_action(0, 241, 1);
					controls::enable_control_action(0, 242, 1);
					func_120(0, 0, 0, 1);
					func_119(0, -1, 1);
					if (func_118()) {
						if (Global_2594050 != iLocal_662) {
							audio::play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							iLocal_662 = Global_2594050;
							func_123(iLocal_662, 1, 1);
							iLocal_660 = 1;
						}
						else {
							iVar0 = 1;
						}
					}
				}
			}
			if (controls::is_control_just_pressed(2, 188) || controls::is_control_just_pressed(2, 241)) {
				if (!iLocal_659) {
					iLocal_660 = 1;
					audio::play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar22 = iLocal_662 - 1;
					while (iVar22 >= 0) {
						if (gameplay::is_bit_set(iLocal_663, iVar22)) {
							iLocal_662 = iVar22;
							bVar23 = true;
							iVar22 = 0;
						}
						iVar22 += -1;
					}
					if (!bVar23) {
						iVar22 = 31;
						while (iVar22 >= iLocal_662 + 1) {
							if (gameplay::is_bit_set(iLocal_663, iVar22)) {
								iLocal_662 = iVar22;
								bVar23 = true;
								iVar22 = iLocal_662;
							}
							iVar22 += -1;
						}
					}
					if (bVar23) {
						func_123(iLocal_662, 1, 1);
					}
				}
			}
			else if (controls::is_control_just_pressed(2, 187) || controls::is_control_just_pressed(2, 242)) {
				if (!iLocal_659) {
					iLocal_660 = 1;
					audio::play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					iVar24 = iLocal_662 + 1;
					while (iVar24 <= 31) {
						if (gameplay::is_bit_set(iLocal_663, iVar24)) {
							iLocal_662 = iVar24;
							bVar25 = true;
							iVar24 = 31;
						}
						iVar24++;
					}
					if (!bVar25) {
						iVar24 = 0;
						while (iVar24 <= iLocal_662 - 1) {
							if (gameplay::is_bit_set(iLocal_663, iVar24)) {
								iLocal_662 = iVar24;
								bVar25 = true;
								iVar24 = iLocal_662;
							}
							iVar24++;
						}
					}
					if (bVar25) {
						func_123(iLocal_662, 1, 1);
					}
				}
			}
			else if (controls::is_control_just_released(2, 201) || iVar0 == 1) {
				iVar0 = 0;
				audio::play_sound_frontend(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				if (!iLocal_659) {
					func_117("IMPOUND_CNF", 0, 0);
					func_116(-1);
					func_115(201, "ITEM_YES", -1);
					func_115(202, "ITEM_NO", -1);
					iLocal_659 = 1;
				}
				else {
					if (iLocal_662 == 0) {
						vVar26 = {431.4f, -997.33f, 24.76f};
					}
					else {
						vVar26 = {436.39f, -997.25f, 24.76f};
					}
					if (func_210(iLocal_664[iLocal_662], iLocal_672)) {
						while (!func_304(&iLocal_671, iLocal_664[iLocal_662], vVar26, 179.24f, 1)) {
							system::wait(0);
						}
						if (entity::does_entity_exist(iLocal_671)) {
							if (iLocal_662 == 0) {
								func_303(18, 1, 0);
							}
							else {
								func_303(19, 1, 0);
							}
							if (!ped::is_ped_injured(player::player_ped_id())) {
								player::set_player_control(player::player_id(), 1, 0);
							}
							func_258(iLocal_672, 118, 250);
							func_302(iLocal_664[iLocal_662]);
							func_31(iLocal_671, func_393());
							func_70(1, -1);
							iLocal_667++;
							func_68(&iLocal_668);
							iLocal_668 = -1;
							iLocal_659 = 0;
						}
					}
					iLocal_658 = 1;
				}
			}
			else if (controls::is_control_just_released(2, 202) || controls::is_control_just_released(2, 238)) {
				audio::play_sound_frontend(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				if (iLocal_659) {
					iLocal_660 = 1;
					iLocal_659 = 0;
				}
				else {
					iLocal_667 = 99;
				}
			}
		}
		ui::hide_hud_and_radar_this_frame();
		if (iLocal_660) {
			func_117("", 0, 0);
			func_116(-1);
			func_115(201, "ITEM_SELECT", -1);
			func_115(202, "ITEM_EXIT", -1);
			iLocal_659 = 0;
			iLocal_660 = 0;
		}
		if (func_169(0, -1, 0)) {
			func_73(1, -1, 1, 0, 1, -1082130432, 0, 0);
		}
		break;

	case 3:
		if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 0), 431.4f,
												  -997.33f, 24.76f, 1) > 20f &&
			!func_300()) {
			func_31(iLocal_671, func_393());
			iLocal_667 = 99;
		}
		else if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 0), 431.4f,
													   -997.33f, 24.76f, 1) > 100f) {
			if (entity::does_entity_exist(iLocal_671)) {
				if (!entity::is_entity_dead(iLocal_671, 0)) {
					if (!ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_671, 0) &&
						gameplay::get_distance_between_coords(entity::get_entity_coords(iLocal_671, 1),
															  entity::get_entity_coords(player::player_ped_id(), 0),
															  1) > 100f) {
						if (!entity::is_entity_on_screen(iLocal_671)) {
							func_299(iLocal_671, 1, 145);
							vehicle::delete_vehicle(&iLocal_671);
							gameplay::clear_area_of_vehicles(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
							iLocal_667 = 99;
						}
					}
					else if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_671, 0)) {
						gameplay::clear_area_of_vehicles(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
						func_31(iLocal_671, func_393());
						iLocal_667 = 99;
					}
				}
				else {
					gameplay::clear_area_of_vehicles(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
					iLocal_667 = 99;
				}
			}
			else {
				gameplay::clear_area_of_vehicles(431.4f, -997.33f, 24.76f, 10f, 0, 0, 1, 1, 0);
				iLocal_667 = 99;
			}
		}
		break;

	case 99:
		if (!ped::is_ped_injured(player::player_ped_id())) {
			player::set_player_control(player::player_id(), 1, 0);
		}
		func_68(&iLocal_668);
		iVar29 = 0;
		while (iVar29 < 2) {
			iLocal_664[iVar29] = -1;
			iVar29++;
		}
		func_303(18, 0, 0);
		func_303(19, 0, 0);
		if (entity::does_entity_exist(iLocal_671)) {
			entity::set_vehicle_as_no_longer_needed(&iLocal_671);
		}
		iLocal_667 = 0;
		break;
	}
	if (iLocal_667 == 0) {
		if (!ped::is_ped_injured(player::player_ped_id()) &&
			entity::is_entity_in_angled_area(player::player_ped_id(), 428.2928f, -996.6834f, 24.48864f, 439.5438f,
											 -996.7114f, 28.10333f, 8.6875f, 0, 1, 0)) {
			if (!iLocal_670) {
				func_303(18, 1, 0);
				iLocal_670 = 1;
			}
		}
		else if (iLocal_670 &&
				 !entity::is_entity_in_angled_area(player::player_ped_id(), 431.2715f, -1004.059f, 23.98198f, 431.0394f,
												   -993.621f, 27.61868f, 6.8125f, 0, 1, 0)) {
			func_303(18, 0, 0);
			iLocal_670 = 0;
		}
	}
}

// Position - 0x202E2
int func_299(int iParam0, int iParam1, int iParam2) {
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
	func_31(iParam0, iParam2);
	return 1;
}

// Position - 0x20322
int func_300() {
	if (gameplay::is_position_occupied(431.4424f, -997.7308f, 24.76161f, 4.75f, 0, 1, 1, 0, 0, 0, 0)) {
		return 1;
	}
	else if (gameplay::is_position_occupied(436.6913f, -997.5869f, 24.75582f, 4.75f, 0, 1, 1, 0, 0, 0, 0)) {
		return 1;
	}
	else if (gameplay::is_position_occupied(431.07f, -1005.57f, 26.2f, 4.75f, 0, 1, 1, 0, 0, 0, 0)) {
		return 1;
	}
	else if (gameplay::is_position_occupied(436.52f, -1005.47f, 26.17f, 4.75f, 0, 1, 1, 0, 0, 0, 0)) {
		return 1;
	}
	return 0;
}

// Position - 0x203CC
void func_301(int iParam0, int iParam1) {
	float fVar0;
	float fVar1;
	float *fVar2;
	float fVar3;

	if (Global_17290.f_5092 >= 256) {
		return;
	}
	if (Global_17290.f_5610 >= 4) {
		return;
	}
	if (Global_17290.f_5611 != 1) {
		return;
	}
	if (Global_17290.f_5610 >= Global_17290.f_5608) {
		return;
	}
	Global_17290.f_3918[Global_17290.f_5092] = iParam0;
	Global_17290.f_5092++;
	Global_17290.f_2124[Global_17290.f_5609 /*5*/][Global_17290.f_5610] = 2;
	Global_17290.f_5610++;
	if (Global_17290.f_5610 >= Global_17290.f_5608) {
		fVar0 = func_126();
		if (Global_17290.f_4945[Global_17290.f_5089] && Global_17290.f_5610 == Global_17290.f_5608) {
			func_105(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 += fVar1 * 2f;
		}
		if (fVar0 > Global_17290.f_4938[Global_17290.f_5089 - 1]) {
			Global_17290.f_4938[Global_17290.f_5089 - 1] = fVar0;
		}
	}
	if (iParam1) {
		if (Global_17290.f_5610 >= Global_17290.f_5608) {
			fVar3 = func_125();
			if (fVar3 > Global_17290.f_5612[Global_17290.f_5088]) {
				Global_17290.f_5612[Global_17290.f_5088] = fVar3;
			}
		}
	}
}

// Position - 0x20507
void func_302(int iParam0) {
	int iVar0;

	switch (func_393()) {
	case 0: iVar0 = 0; break;

	case 1: iVar0 = 1; break;

	case 2: iVar0 = 2; break;
	}
	if (iParam0 < 0 || iParam0 >= func_211(&Global_101700.f_31389.f_5038[iVar0 /*157*/])) {
		return;
	}
	Global_101700.f_31389.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66 = 0;
}

// Position - 0x20576
void func_303(int iParam0, int iParam1, int iParam2) {
	if (iParam1) {
		gameplay::set_bit(&Global_34904[iParam0 /*31*/].f_1, 5);
		if (iParam2) {
			if (gameplay::is_bit_set(Global_34904[iParam0 /*31*/].f_1, 1)) {
				Global_34904[iParam0 /*31*/].f_22 = -1f;
			}
			else {
				Global_34904[iParam0 /*31*/].f_22 = 1f;
			}
			object::_set_door_ajar_angle(Global_34904[iParam0 /*31*/], Global_34904[iParam0 /*31*/].f_22, 0, 0);
			object::_set_door_acceleration_limit(Global_34904[iParam0 /*31*/], 1, 0, 1);
		}
	}
	else {
		gameplay::clear_bit(&Global_34904[iParam0 /*31*/].f_1, 5);
		if (iParam2) {
			Global_34904[iParam0 /*31*/].f_22 = 0f;
			object::_set_door_ajar_angle(Global_34904[iParam0 /*31*/], Global_34904[iParam0 /*31*/].f_22, 0, 0);
			object::_set_door_acceleration_limit(Global_34904[iParam0 /*31*/], 1, 0, 1);
		}
	}
}

// Position - 0x20626
int func_304(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6) {
	int iVar0;

	if (!func_210(iParam1, func_393()) || entity::does_entity_exist(*iParam0)) {
		return 0;
	}
	switch (func_393()) {
	case 0: iVar0 = 0; break;

	case 1: iVar0 = 1; break;

	case 2: iVar0 = 2; break;
	}
	streaming::request_model(Global_101700.f_31389.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
	if (streaming::has_model_loaded(Global_101700.f_31389.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66)) {
		*iParam0 = vehicle::create_vehicle(Global_101700.f_31389.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66, vParam2,
										   fParam5, 0, 0);
		func_305(*iParam0, &Global_101700.f_31389.f_5038[iVar0 /*157*/][iParam1 /*78*/], 0, 1);
		vehicle::set_vehicle_on_ground_properly(*iParam0, 1084227584);
		vehicle::_0xAB04325045427AAE(*iParam0, 0);
		vehicle::set_vehicle_has_strong_axles(*iParam0, 1);
		if (iParam6) {
			streaming::set_model_as_no_longer_needed(Global_101700.f_31389.f_5038[iVar0 /*157*/][iParam1 /*78*/].f_66);
		}
		return 1;
	}
	return 0;
}

// Position - 0x2072A
void func_305(int iParam0, var *uParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		if (gameplay::get_hash_key(&uParam1->f_1) != 0) {
			vehicle::set_vehicle_number_plate_text(iParam0, &uParam1->f_1);
		}
		if (*uParam1 >= 0 && *uParam1 < vehicle::get_number_of_vehicle_number_plates()) {
			vehicle::set_vehicle_number_plate_text_index(iParam0, *uParam1);
		}
		if (uParam1->f_66 == joaat("sovereign")) {
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco")) {
			iVar0 = 1;
			if (gameplay::is_bit_set(uParam1->f_77, func_33(iVar0 + 1))) {
			}
			else {
				gameplay::set_bit(&uParam1->f_77, func_33(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2")) {
			iVar1 = 1;
			if (gameplay::is_bit_set(uParam1->f_77, func_33(iVar1 + 1))) {
			}
			else {
				gameplay::set_bit(&uParam1->f_77, func_33(iVar1 + 1));
			}
		}
		if (gameplay::is_bit_set(uParam1->f_77, 13)) {
			vehicle::set_vehicle_custom_primary_colour(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else {
			vehicle::clear_vehicle_custom_primary_colour(iParam0);
		}
		if (gameplay::is_bit_set(uParam1->f_77, 12)) {
			vehicle::set_vehicle_custom_secondary_colour(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else {
			vehicle::clear_vehicle_custom_secondary_colour(iParam0);
		}
		vehicle::set_vehicle_colours(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0) {
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0) {
			uParam1->f_8 = 0;
		}
		vehicle::set_vehicle_extra_colours(iParam0, uParam1->f_7, uParam1->f_8);
		if (gameplay::is_bit_set(uParam1->f_77, 15) || func_312(iParam0) ||
			uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0 && uParam1->f_9[20] > 0)
			&&func_311() {
				uParam1->f_62 = 0;
				uParam1->f_63 = 0;
				uParam1->f_64 = 0;
			}
		else if (uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0) {
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		vehicle::set_vehicle_tyre_smoke_color(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger")) {
			vehicle::set_vehicle_window_tint(iParam0, 0);
		}
		else {
			vehicle::set_vehicle_window_tint(iParam0, 0);
			vehicle::set_vehicle_window_tint(iParam0, uParam1->f_65);
		}
		vehicle::set_vehicle_tyres_can_burst(iParam0, !gameplay::is_bit_set(uParam1->f_77, 9));
		if (iParam2) {
			vehicle::set_vehicle_doors_locked(iParam0, uParam1->f_70);
		}
		vehicle::_set_vehicle_neon_lights_colour(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		vehicle::_set_vehicle_neon_light_enabled(iParam0, 2, gameplay::is_bit_set(uParam1->f_77, 28));
		vehicle::_set_vehicle_neon_light_enabled(iParam0, 3, gameplay::is_bit_set(uParam1->f_77, 29));
		vehicle::_set_vehicle_neon_light_enabled(iParam0, 0, gameplay::is_bit_set(uParam1->f_77, 30));
		vehicle::_set_vehicle_neon_light_enabled(iParam0, 1, gameplay::is_bit_set(uParam1->f_77, 31));
		vehicle::set_vehicle_is_stolen(iParam0, gameplay::is_bit_set(uParam1->f_77, 10));
		if (vehicle::get_vehicle_livery_count(iParam0) > 1 && uParam1->f_67 >= 0) {
			vehicle::set_vehicle_livery(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255) {
			if (!vehicle::is_this_model_a_bicycle(entity::get_entity_model(iParam0))) {
				if (vehicle::is_this_model_a_bike(entity::get_entity_model(iParam0))) {
					if (uParam1->f_69 == 6) {
						func_310(iParam0, uParam1->f_69);
					}
				}
				else {
					func_310(iParam0, uParam1->f_69);
				}
			}
		}
		if (vehicle::is_vehicle_a_convertible(iParam0, 0)) {
			if (uParam1->f_68 == 0 || uParam1->f_68 == 3 || uParam1->f_68 == 5) {
				vehicle::raise_convertible_roof(iParam0, 1);
			}
			else {
				vehicle::lower_convertible_roof(iParam0, 1);
			}
		}
		if (iParam3) {
			func_306(&iParam0, &uParam1->f_9, &uParam1->f_59);
		}
		if (!vehicle::is_this_model_a_heli(uParam1->f_66) && !vehicle::is_this_model_a_boat(uParam1->f_66)) {
			iVar2 = 0;
			while (iVar2 <= 11) {
				if (gameplay::is_bit_set(uParam1->f_77, func_33(iVar2 + 1))) {
					if (!vehicle::is_vehicle_extra_turned_on(iParam0, iVar2 + 1)) {
						vehicle::set_vehicle_extra(iParam0, iVar2 + 1, 0);
					}
				}
				else if (vehicle::is_vehicle_extra_turned_on(iParam0, iVar2 + 1)) {
					vehicle::set_vehicle_extra(iParam0, iVar2 + 1, 1);
				}
				iVar2++;
			}
		}
		if (entity::get_entity_model(iParam0) == joaat("sheava") ||
			entity::get_entity_model(iParam0) == joaat("omnis") || entity::get_entity_model(iParam0) == joaat("le7b")) {
			if (vehicle::get_vehicle_mod(iParam0, 0) == -1) {
				vehicle::set_vehicle_extra(iParam0, 1, 0);
			}
		}
		if (vehicle::is_this_model_a_plane(uParam1->f_66)) {
			if (!gameplay::is_bit_set(uParam1->f_77, 23)) {
				if (gameplay::is_bit_set(uParam1->f_77, 22)) {
					vehicle::control_landing_gear(iParam0, 2);
				}
				else {
					vehicle::control_landing_gear(iParam0, 3);
				}
			}
			else {
				vehicle::control_landing_gear(iParam0, 4);
			}
		}
		if (gameplay::is_bit_set(uParam1->f_77, 27)) {
			decorator::decor_set_bool(iParam0, "IgnoredByQuickSave", 1);
		}
		else {
			decorator::decor_set_bool(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

// Position - 0x20BD6
int func_306(int iParam0, var *uParam1, var *uParam2) {
	int iVar0;
	int iVar1;

	if (!vehicle::is_vehicle_driveable(*iParam0, 0)) {
		return 0;
	}
	if (vehicle::get_num_mod_kits(*iParam0) == 0) {
		return 0;
	}
	vehicle::set_vehicle_mod_kit(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1) {
		iVar1 = iVar0;
		if (iVar1 == 17 || iVar1 == 18 || iVar1 == 19 || iVar1 == 20 || iVar1 == 21 || iVar1 == 22) {
			vehicle::toggle_vehicle_mod(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (vehicle::get_vehicle_mod(*iParam0, iVar1) != (*uParam1)[iVar0] - 1) {
			vehicle::remove_vehicle_mod(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0) {
				if (iVar0 == 23) {
					vehicle::set_vehicle_mod(*iParam0, iVar1, (*uParam1)[iVar0] - 1, (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24) {
					vehicle::set_vehicle_mod(*iParam0, iVar1, (*uParam1)[iVar0] - 1, (*uParam2)[1] > 0);
				}
				else {
					vehicle::set_vehicle_mod(*iParam0, iVar1, (*uParam1)[iVar0] - 1, 0);
				}
			}
		}
		iVar0++;
	}
	if (func_309(entity::get_entity_model(*iParam0), 1) &&
		vehicle::get_vehicle_mod(*iParam0, 24) != func_308(*iParam0, (*uParam1)[38] - 1)) {
		vehicle::set_vehicle_mod(*iParam0, 24, func_308(*iParam0, (*uParam1)[38] - 1), 0);
	}
	if (func_307(*iParam0)) {
		vehicle::set_vehicle_strong(*iParam0, 1);
		vehicle::set_vehicle_has_strong_axles(*iParam0, 1);
	}
	return 1;
}

// Position - 0x20D4E
bool func_307(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];

	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0) &&
		vehicle::get_num_mod_kits(iParam0) > 0) {
		vehicle::set_vehicle_mod_kit(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49) {
			iVar1 = iVar0;
			if (iVar1 == 17 || iVar1 == 18 || iVar1 == 19 || iVar1 == 20 || iVar1 == 21 || iVar1 == 22) {
			}
			else if (vehicle::get_vehicle_mod(iParam0, iVar1) != -1) {
				StringCopy(&cVar3,
						   vehicle::get_mod_text_label(iParam0, iVar1, vehicle::get_vehicle_mod(iParam0, iVar1)), 16);
				iVar2 = gameplay::get_hash_key(&cVar3);
				if (iVar2 != 0) {
					if (iVar2 == gameplay::get_hash_key("MNU_CAGE") || iVar2 == gameplay::get_hash_key("SABRE_CAG")) {
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

// Position - 0x20E2A
int func_308(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0)) {
		switch (entity::get_entity_model(iParam0)) {
		case joaat("tornado5"):
			switch (iParam1) {
			case 0: return 0;

			case 1: return 1;

			case 2: return 2;

			case 3: return 3;

			case 4: return 4;

			case 5: return 4;
			}
			break;

		case joaat("faction3"): return 3;
		}
		iVar0 = vehicle::get_num_vehicle_mods(iParam0, 38);
		iVar1 = vehicle::get_num_vehicle_mods(iParam0, 24);
		fVar2 = system::to_float(iParam1 + 1) / system::to_float(iVar0);
		iVar3 = system::floor(system::to_float(iVar1) * fVar2) - 1;
		if (iVar3 < 0) {
			iVar3 = 0;
		}
		if (iVar3 >= iVar0) {
			iVar3 = iVar0 - 1;
		}
		return iVar3;
	}
	return 0;
}

// Position - 0x20F0F
int func_309(int iParam0, int iParam1) {
	switch (iParam0) {
	case joaat("faction2"):
	case joaat("buccaneer2"):
	case joaat("chino2"):
	case joaat("moonbeam2"):
	case joaat("primo2"):
	case joaat("voodoo"): return 1;

	case joaat("sabregt2"):
		if (!Global_262145.f_12339) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("tornado5"):
		if (!Global_262145.f_12340) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("virgo2"):
		if (!Global_262145.f_12338) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("minivan2"):
		if (!Global_262145.f_12341) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("slamvan3"):
		if (!Global_262145.f_12343) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("faction3"):
		if (!Global_262145.f_12342) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("sultanrs"):
	case joaat("banshee2"):
		if ((iParam1 & 1) != 0) {
			return 0;
		}
		return 1;

	case joaat("comet3"):
		if (Global_262145.f_16780) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("diablous2"):
		if (Global_262145.f_16782) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("fcr2"):
		if (Global_262145.f_16786) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("elegy"):
		if (Global_262145.f_16783) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("nero2"):
		if (Global_262145.f_16790) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("italigtb2"):
		if (Global_262145.f_16788) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("specter2"):
		if (Global_262145.f_16793) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;
	}
	return 0;
}

// Position - 0x21134
void func_310(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (vehicle::get_num_mod_kits(iParam0) > 0) {
		vehicle::set_vehicle_mod_kit(iParam0, 0);
		iVar0 = vehicle::get_vehicle_mod(iParam0, 24);
		iVar1 = vehicle::get_vehicle_mod_variation(iParam0, 24);
		vehicle::set_vehicle_wheel_type(iParam0, iParam1);
		if (entity::get_entity_model(iParam0) == joaat("tornado6")) {
			return;
		}
		if (iVar0 == -1) {
			vehicle::remove_vehicle_mod(iParam0, 24);
		}
		else {
			vehicle::set_vehicle_mod(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

// Position - 0x21199
var func_311() { return dlc2::is_dlc_present(-1691188696); }

// Position - 0x211AA
int func_312(int iParam0) {
	int iVar0;

	if (entity::does_entity_exist(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (decorator::decor_is_registered_as_type("MPBitset", 3)) {
				if (decorator::decor_exist_on(iParam0, "MPBitset")) {
					iVar0 = decorator::decor_get_int(iParam0, "MPBitset");
				}
				return gameplay::is_bit_set(iVar0, 4);
			}
		}
	}
	return 0;
}

// Position - 0x211F5
void func_313() {
	controls::disable_all_control_actions(0);
	controls::enable_control_action(0, 188, 1);
	controls::enable_control_action(0, 187, 1);
	controls::enable_control_action(0, 201, 1);
	controls::enable_control_action(0, 202, 1);
	controls::enable_control_action(0, 1, 1);
	controls::enable_control_action(0, 2, 1);
	controls::enable_control_action(0, 239, 1);
	controls::enable_control_action(0, 240, 1);
}

// Position - 0x21240
int func_314(vector3 vParam0, int iParam3) {
	int iVar0;

	iVar0 = ui::add_blip_for_coord(vParam0);
	ui::set_blip_scale(iVar0, func_315(network::network_is_game_in_progress(), 1f, 1f));
	ui::set_blip_route(iVar0, iParam3);
	return iVar0;
}

// Position - 0x2126C
var func_315(bool bParam0, float fParam1, float fParam2) {
	if (bParam0) {
		return fParam1;
	}
	return fParam2;
}

// Position - 0x21283
bool func_316(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2) {
		if (func_210(iVar0, iParam0)) {
			return true;
		}
		iVar0++;
	}
	return false;
}

// Position - 0x212AD
var func_317(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	var uVar2;

	if (iParam2 == -1) {
		iParam2 = func_91();
	}
	if (iParam1 < 0) {
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457) {
		iVar0 = stats::_get_pstat_int_hash(iParam0 - 384, 0, 1, iParam2);
		iVar1 = iParam0 - 384 - stats::_0x94F12ABF9C79E339(iParam0 - 384) * 8 * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513) {
		iVar0 = stats::_get_pstat_int_hash(iParam0 - 457, 1, 1, iParam2);
		iVar1 = iParam0 - 457 - stats::_0x94F12ABF9C79E339(iParam0 - 457) * 8 * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305) {
		iVar0 = stats::_get_pstat_int_hash(iParam0 - 1281, 0, 0, 0);
		iVar1 = iParam0 - 1281 - stats::_0x94F12ABF9C79E339(iParam0 - 1281) * 8 * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361) {
		iVar0 = stats::_get_pstat_int_hash(iParam0 - 1305, 1, 0, 0);
		iVar1 = iParam0 - 1305 - stats::_0x94F12ABF9C79E339(iParam0 - 1305) * 8 * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919) {
		iVar0 = stats::_get_tupstat_int_hash(iParam0 - 1393, 0, 1, iParam2);
		iVar1 = iParam0 - 1393 - stats::_0x94F12ABF9C79E339(iParam0 - 1393) * 8 * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393) {
		iVar0 = stats::_get_tupstat_int_hash(iParam0 - 1361, 0, 0, 0);
		iVar1 = iParam0 - 1361 - stats::_0x94F12ABF9C79E339(iParam0 - 1361) * 8 * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 3879, 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = iParam0 - 3879 - stats::_0x94F12ABF9C79E339(iParam0 - 3879) * 8 * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 4143, 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = iParam0 - 4143 - stats::_0x94F12ABF9C79E339(iParam0 - 4143) * 8 * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 4399, 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = iParam0 - 4399 - stats::_0x94F12ABF9C79E339(iParam0 - 4399) * 8 * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 6413, 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = iParam0 - 6413 - stats::_0x94F12ABF9C79E339(iParam0 - 6413) * 8 * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 7262, 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = iParam0 - 7262 - stats::_0x94F12ABF9C79E339(iParam0 - 7262) * 8 * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 7681, 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = iParam0 - 7681 - stats::_0x94F12ABF9C79E339(iParam0 - 7681) * 8 * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 9553, 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = iParam0 - 9553 - stats::_0x94F12ABF9C79E339(iParam0 - 9553) * 8 * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 7641, 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = iParam0 - 7641 - stats::_0x94F12ABF9C79E339(iParam0 - 7641) * 8 * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321) {
		iVar0 = stats::_get_ngstat_int_hash(iParam0 - 7313, 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = iParam0 - 7313 - stats::_0x94F12ABF9C79E339(iParam0 - 7313) * 8 * 8;
	}
	uVar2 = stats::stat_set_masked_int(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

// Position - 0x216A1
int func_318(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_319(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x216DE
int func_319(int iParam0) {
	if (func_25(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x21708
void func_320(int *iParam0) {
	int iVar0;
	struct<8> Var1;

	if (!gameplay::is_bit_set(Global_101700.f_8975.f_25, 7)) {
		if (!gameplay::is_bit_set(*iParam0, 6)) {
			if (func_27(13) && func_14(func_16())) {
				gameplay::set_bit(iParam0, 6);
				iVar0 = func_9();
				iParam0->f_6 = {func_351(iVar0)};
				if (Global_25461 == iVar0 || Global_25461 == 0) {
					func_3(1);
					Var1 = {func_350("til_P_", "Exec_U", "xer_Scene", "B_Mi")};
					audio::start_audio_scene(&Var1);
					iVar0 = Global_25461 + 1 % 8;
					func_348(iParam0, iVar0);
					iParam0->f_2 = gameplay::get_game_timer() + gameplay::get_random_int_in_range(8000, 12000);
					gameplay::set_bit(iParam0, 12);
					if (iVar0 == 7) {
						gameplay::set_bit(&Global_101700.f_8975.f_25, 7);
						func_347(255, 0);
					}
				}
				else {
					func_348(iParam0, 0);
					gameplay::clear_bit(&Global_101700.f_8975.f_25, 12);
				}
			}
		}
		else {
			func_346();
			if (!gameplay::is_bit_set(*iParam0, 31)) {
				if (!gameplay::is_bit_set(*iParam0, 25)) {
					func_345(iParam0);
				}
				else if (func_344()) {
					func_328(iParam0);
					iParam0->f_3 = gameplay::get_game_timer() + 2000;
				}
				if (!func_327(0)) {
					func_347(255, 0);
				}
			}
			else if (func_327(0)) {
				if (gameplay::get_game_timer() > iParam0->f_3) {
					func_347(0, 800);
				}
			}
			if (!func_27(13) || !func_14(func_16())) {
				func_321(iParam0);
			}
		}
	}
}

// Position - 0x21886
void func_321(int *iParam0) {
	struct<8> Var0;

	if (gameplay::is_bit_set(*iParam0, 31)) {
		func_326(iParam0);
	}
	if (gameplay::is_bit_set(*iParam0, 25)) {
		func_322(iParam0);
	}
	Var0 = {func_350("til_P_", "Exec_U", "xer_Scene", "B_Mi")};
	if (audio::is_audio_scene_active(&Var0)) {
		audio::stop_audio_scene(&Var0);
	}
	gameplay::clear_bit(iParam0, 6);
	gameplay::clear_bit(iParam0, 30);
	gameplay::clear_bit(iParam0, 8);
}

// Position - 0x218F1
void func_322(int *iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_9();
	iVar1 = func_325(iVar0);
	iVar2 = func_324(iVar1);
	iVar3 = func_323(iVar1);
	if (iVar2 != 0) {
		streaming::set_model_as_no_longer_needed(iVar2);
	}
	if (iVar3 != 0) {
		streaming::set_model_as_no_longer_needed(iVar3);
	}
	gameplay::clear_bit(iParam0, 25);
}

// Position - 0x21937
int func_323(int iParam0) {
	switch (iParam0) {
	case 17: return joaat("u_m_y_cyclist_01");

	case 49: return joaat("dune");

	default:
	}
	return 0;
}

// Position - 0x21963
int func_324(int iParam0) {
	switch (iParam0) {
	case 12: return -541762431;

	case 109: return joaat("a_c_boar");

	case 43: return joaat("a_c_deer");

	case 35: return joaat("emperor2");

	case 17: return joaat("scorcher");

	case 28: return joaat("a_c_mtlion");

	case 49: return joaat("cs_hunter");

	case 25: return joaat("a_m_y_hiker_01");

	case 14: return joaat("a_f_y_hippie_01");

	case 86: return joaat("a_m_m_hillbilly_01");

	default:
	}
	return 0;
}

// Position - 0x219FF
int func_325(int iParam0) {
	switch (iParam0) {
	case 1: return 12;

	case 2: return 43;

	case 3: return 35;

	case 4: return 109;

	case 5: return 28;

	case 6: return 17;

	default:
	}
	return -1;
}

// Position - 0x21A51
void func_326(int *iParam0) {
	if (entity::does_entity_exist(iParam0->f_4)) {
		graphics::remove_decals_in_range(entity::get_entity_coords(iParam0->f_4, 0), 10f);
		vehicle::delete_vehicle(&iParam0->f_4);
	}
	if (entity::does_entity_exist(iParam0->f_5)) {
		graphics::remove_decals_in_range(entity::get_entity_coords(iParam0->f_5, 0), 10f);
		ped::delete_ped(&iParam0->f_5);
	}
	gameplay::clear_bit(iParam0, 31);
}

// Position - 0x21AAB
bool func_327(int iParam0) {
	if (iParam0) {
		return Global_98660.f_2 > 0.5f;
	}
	return Global_98660.f_2 >= 255f;
}

// Position - 0x21AD6
void func_328(int *iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = func_9();
	iVar1 = func_325(iVar0);
	func_329(iVar1, &iParam0->f_5, &iParam0->f_4, func_343(iVar0), func_342(iVar0), 1);
	gameplay::set_bit(iParam0, 31);
}

// Position - 0x21B0F
void func_329(int iParam0, var *uParam1, var *uParam2, vector3 vParam3, float fParam6, int iParam7) {
	switch (iParam0) {
	case 12: func_341(uParam1, vParam3, fParam6, iParam7); break;

	case 109: func_340(uParam1, vParam3, fParam6, iParam7); break;

	case 43: func_339(uParam1, vParam3, fParam6, iParam7); break;

	case 35: func_338(uParam2, vParam3, fParam6, iParam7); break;

	case 28: func_337(uParam1, vParam3, fParam6, iParam7); break;

	case 17: func_336(uParam1, uParam2, vParam3, fParam6, iParam7); break;

	case 49: func_334(uParam1, uParam2, vParam3, fParam6); break;

	case 25: func_333(uParam1, vParam3, fParam6); break;

	case 14: func_332(uParam1, vParam3, fParam6); break;

	case 86: func_330(uParam1, vParam3, fParam6); break;
	}
}

// Position - 0x21C00
void func_330(var *uParam0, vector3 vParam1, float fParam4) {
	int iVar0;

	iVar0 = func_324(86);
	if (streaming::has_model_loaded(iVar0)) {
		*uParam0 = ped::create_ped(5, iVar0, vParam1, fParam4, 1, 1);
		audio::disable_ped_pain_audio(*uParam0, 1);
		ped::set_ped_config_flag(*uParam0, 227, 1);
		streaming::set_model_as_no_longer_needed(iVar0);
		entity::set_entity_health(*uParam0, 0);
		rope::activate_physics(*uParam0);
		graphics::add_decal(1110, vParam1.x + 0.1f, vParam1.y - 0.01f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f,
							0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		graphics::add_decal(1110, vParam1.x - 0.03f, vParam1.y + 0.3f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f,
							0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		graphics::add_decal(1110, vParam1.x - 0.2f, vParam1.y - 0.01f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f,
							1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		graphics::add_decal(1110, vParam1.x - 0.5f, vParam1.y - 0.01f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f,
							0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		graphics::add_decal(1110, vParam1.x + 0.01f, vParam1.y - 0.4f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f,
							1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		graphics::add_decal(1110, vParam1.x + 0.01f, vParam1.y - 0.01f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f),
							1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		graphics::add_decal(1110, vParam1.x - 0.6f, vParam1.y - 0.35f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f,
							1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_331(*uParam0);
		return;
	}
}

// Position - 0x21E06
void func_331(int iParam0) {
	ped::apply_ped_blood_specific(iParam0, 1, 0.431f, 0.667f, 179.593f, 0.889f, 2, 0f, "BasicSlash");
	ped::apply_ped_blood_specific(iParam0, 1, 0.556f, 0.292f, 161.805f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	ped::apply_ped_blood_specific(iParam0, 1, 0.708f, 0.688f, 167.897f, 0f, 1, 0f, "ShotgunLargeMonolithic");
	ped::apply_ped_blood_specific(iParam0, 2, 0.472f, 0.347f, 146.133f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	ped::apply_ped_blood_specific(iParam0, 2, 0.799f, 0.451f, 158.294f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	ped::apply_ped_blood_specific(iParam0, 0, 0.681f, 0.507f, 158.707f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	ped::apply_ped_blood_specific(iParam0, 0, 0.819f, 0.813f, 174.811f, 0.056f, 1, 0f, "ShotgunLargeMonolithic");
	ped::apply_ped_blood_specific(iParam0, 0, 0.174f, 0.438f, 211.521f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	ped::apply_ped_blood_specific(iParam0, 0, 0.174f, 0.486f, 213.237f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	ped::apply_ped_blood_specific(iParam0, 0, 0.174f, 0.542f, 215.168f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	ped::apply_ped_blood_specific(iParam0, 0, 0.236f, 0.542f, 213.752f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	ped::apply_ped_blood_specific(iParam0, 0, 0.278f, 0.542f, 212.851f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	ped::apply_ped_blood_specific(iParam0, 0, 0.313f, 0.542f, 212.127f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	ped::apply_ped_blood_specific(iParam0, 5, 0.639f, 0.313f, 149.248f, 1f, 1, 0f, "stab");
	ped::apply_ped_blood_specific(iParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "stab");
	ped::apply_ped_blood_specific(iParam0, 5, 0.792f, 0.424f, 182.625f, 1f, 1, 0f, "BasicSlash");
	ped::apply_ped_blood_specific(iParam0, 3, 0.618f, 0.451f, 204.207f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	ped::apply_ped_blood_specific(iParam0, 3, 0.785f, 0.597f, 206.103f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	ped::apply_ped_blood_specific(iParam0, 4, 0.688f, 0.438f, 202.91f, 1f, 1, 0f, "BasicSlash");
	ped::apply_ped_blood_specific(iParam0, 4, 0.688f, 0.424f, 202.492f, 1f, 1, 0f, "BasicSlash");
	ped::apply_ped_blood_specific(iParam0, 4, 0.688f, 0.347f, 200.181f, 1f, 1, 0f, "BasicSlash");
	ped::apply_ped_blood_specific(iParam0, 4, 0.688f, 0.278f, 198.043f, 1f, 1, 0f, "BasicSlash");
	ped::apply_ped_blood_specific(iParam0, 4, 0.688f, 0.222f, 196.275f, 1f, 1, 0f, "BasicSlash");
	ped::apply_ped_blood_specific(iParam0, 4, 0.653f, 0.222f, 196.609f, 1f, 3, 0f, "BasicSlash");
	ped::apply_ped_blood_specific(iParam0, 4, 0.75f, 0.222f, 195.716f, 1f, 2, 0f, "BasicSlash");
	ped::apply_ped_blood_specific(iParam0, 4, 1f, 0.326f, 196.621f, 1f, 0, 0f, "ShotgunLargeMonolithic");
	ped::apply_ped_blood_specific(iParam0, 4, 0.93f, 0.451f, 200.584f, 1f, 1, 0f, "ShotgunLargeMonolithic");
	ped::apply_ped_blood_specific(iParam0, 4, 0.618f, 0.451f, 204.207f, 1f, 0, 0f, "ShotgunLargeMonolithic");
}

// Position - 0x2213E
void func_332(var *uParam0, vector3 vParam1, float fParam4) {
	int iVar0;

	iVar0 = func_324(14);
	if (streaming::has_model_loaded(iVar0)) {
		*uParam0 = ped::create_ped(5, iVar0, vParam1, fParam4, 1, 1);
		audio::disable_ped_pain_audio(*uParam0, 1);
		ped::set_ped_config_flag(*uParam0, 227, 1);
		streaming::set_model_as_no_longer_needed(iVar0);
		entity::set_entity_health(*uParam0, 0);
		rope::activate_physics(*uParam0);
		graphics::add_decal(1110, vParam1.x + 0.1f, vParam1.y - 0.01f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f,
							0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		graphics::add_decal(1110, vParam1.x - 0.03f, vParam1.y + 0.3f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f,
							0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		graphics::add_decal(1110, vParam1.x - 0.2f, vParam1.y - 0.01f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f,
							1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		graphics::add_decal(1110, vParam1.x - 0.5f, vParam1.y - 0.01f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f,
							0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		graphics::add_decal(1110, vParam1.x + 0.01f, vParam1.y - 0.4f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.4f,
							1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		graphics::add_decal(1110, vParam1.x + 0.01f, vParam1.y - 0.01f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f),
							1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		graphics::add_decal(1110, vParam1.x - 0.6f, vParam1.y - 0.35f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.5f,
							1.2f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_331(*uParam0);
		return;
	}
}

// Position - 0x22344
void func_333(var *uParam0, vector3 vParam1, float fParam4) {
	int iVar0;

	iVar0 = func_324(25);
	if (streaming::has_model_loaded(iVar0)) {
		*uParam0 = ped::create_ped(4, iVar0, vParam1, fParam4, 1, 1);
		audio::disable_ped_pain_audio(*uParam0, 1);
		ped::set_ped_config_flag(*uParam0, 227, 1);
		streaming::set_model_as_no_longer_needed(iVar0);
		entity::set_entity_health(*uParam0, 0);
		rope::activate_physics(*uParam0);
		graphics::add_decal(1110, vParam1.x + 0.02f, vParam1.y - 0.01f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f),
							0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		graphics::add_decal(1110, vParam1.x - 0.23f, vParam1.y + 0.04f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f),
							0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		graphics::add_decal(1110, vParam1.x - 0.05f, vParam1.y - 0.01f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f),
							0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		graphics::add_decal(1110, vParam1.x - 0.05f, vParam1.y - 0.11f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f),
							0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		graphics::add_decal(1110, vParam1.x + 0.09f, vParam1.y - 0.06f, vParam1.z, 0f, 0f, -1f, func_7(0f, 1f, 0f),
							1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_331(*uParam0);
		return;
	}
}

// Position - 0x224D2
void func_334(var *uParam0, var *uParam1, vector3 vParam2, float fParam5) {
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = func_324(49);
	iVar1 = func_323(49);
	if (streaming::has_model_loaded(iVar0) && streaming::has_model_loaded(iVar1)) {
		*uParam0 = ped::create_ped(4, iVar0, vParam2, fParam5, 1, 1);
		audio::disable_ped_pain_audio(*uParam0, 1);
		ped::set_ped_config_flag(*uParam0, 227, 1);
		streaming::set_model_as_no_longer_needed(iVar0);
		entity::set_entity_health(*uParam0, 0);
		rope::activate_physics(*uParam0);
		graphics::add_decal(1110, vParam2.x + 0.12f - 0.3f, vParam2.y - 0.01f - 0.07f, vParam2.z, 0f, 0f, -1f,
							func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		graphics::add_decal(1110, vParam2.x - 0.03f - 0.3f, vParam2.y + 0.04f - 0.07f, vParam2.z, 0f, 0f, -1f,
							func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		graphics::add_decal(1110, vParam2.x - 0.2f - 0.3f, vParam2.y - 0.01f - 0.07f, vParam2.z, 0f, 0f, -1f,
							func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		graphics::add_decal(1110, vParam2.x - 0.05f - 0.3f, vParam2.y - 0.15f - 0.07f, vParam2.z, 0f, 0f, -1f,
							func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		graphics::add_decal(1110, vParam2.x + 0.01f - 0.3f, vParam2.y - 0.06f - 0.07f, vParam2.z, 0f, 0f, -1f,
							func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f, 1, 0, 0);
		func_331(*uParam0);
		vVar2 = {9.9929f, 4.6946f, -7.1469f};
		*uParam1 = vehicle::create_vehicle(iVar1, vParam2 + vVar2, fParam5, 1, 1);
		streaming::set_model_as_no_longer_needed(iVar1);
		vehicle::set_vehicle_engine_health(*uParam1, 2f);
		vehicle::set_vehicle_on_ground_properly(*uParam1, 1084227584);
		vehicle::set_vehicle_body_health(*uParam1, 2f);
		unk_0xE4E2FD323574965C(*uParam1, 1f);
		vehicle::set_vehicle_door_broken(*uParam1, 0, func_335());
		vehicle::set_vehicle_door_broken(*uParam1, 1, func_335());
		vehicle::set_vehicle_door_broken(*uParam1, 2, func_335());
		vehicle::set_vehicle_door_broken(*uParam1, 3, func_335());
		vehicle::set_vehicle_door_broken(*uParam1, 4, func_335());
		vehicle::set_vehicle_door_broken(*uParam1, 5, func_335());
		vehicle::set_vehicle_dirt_level(*uParam1, 15f);
		vehicle::_set_vehicle_lights_mode(*uParam1, 3);
		vehicle::set_vehicle_lights(*uParam1, 2);
		vehicle::set_vehicle_undriveable(*uParam1, 1);
		rope::activate_physics(*uParam1);
		return;
	}
}

// Position - 0x22772
int func_335() {
	if (gameplay::is_bit_set(gameplay::get_random_int_in_range(0, 65535), 0)) {
		return 1;
	}
	return 0;
}

// Position - 0x22793
void func_336(var *uParam0, var *uParam1, vector3 vParam2, float fParam5, bool bParam6) {
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = func_324(17);
	iVar1 = func_323(17);
	if (streaming::has_model_loaded(iVar0) && streaming::has_model_loaded(iVar1)) {
		*uParam0 = ped::create_ped(4, iVar1, vParam2, fParam5, 1, 1);
		audio::disable_ped_pain_audio(*uParam0, 1);
		ped::set_ped_config_flag(*uParam0, 227, 1);
		streaming::set_model_as_no_longer_needed(iVar1);
		entity::set_entity_health(*uParam0, 0);
		rope::activate_physics(*uParam0);
		vVar2 = {0.02f, -0.01f, 0f};
		graphics::add_decal(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.5f, 0.4f, 0.196f, 0f, 0f, 1f, -1f,
							1, 0, 0);
		vVar2 = {0.23f, 0.04f, 0f};
		graphics::add_decal(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f,
							1, 0, 0);
		vVar2 = {-0.05f, -0.01f, 0f};
		graphics::add_decal(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f,
							1, 0, 0);
		vVar2 = {-0.05f, -0.11f, 0f};
		graphics::add_decal(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f,
							1, 0, 0);
		vVar2 = {0.09f, -0.06f, 0f};
		graphics::add_decal(1110, vParam2 + vVar2, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1.1f, 1f, 0.196f, 0f, 0f, 1f, -1f,
							1, 0, 0);
		if (bParam6) {
			vVar2 = {0.5783f, 0.1357f, -0.0683f};
			graphics::add_decal(2020, vParam2 + vVar2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f,
								1f, -1f, 1, 0, 0);
			vVar2 = {1.0477f, 0.1103f, -0.1388f};
			graphics::add_decal(2020, vParam2 + vVar2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f,
								1f, -1f, 1, 0, 0);
			vVar2 = {1.5048f, 0.4595f, -0.1953f};
			graphics::add_decal(2020, vParam2 + vVar2, 0f, 0f, -1f, 0.4484f, -0.8938f, 0f, 0.19f, 0.33f, 0.09f, 0f, 0f,
								1f, -1f, 1, 0, 0);
		}
		func_331(*uParam0);
		*uParam1 = vehicle::create_vehicle(iVar0, vParam2.x - 0.4f, vParam2.y - 0.5f, vParam2.z, fParam5, 1, 1);
		streaming::set_model_as_no_longer_needed(iVar0);
		entity::set_entity_rotation(*uParam1, 0f, 85f, 0f, 2, 1);
		vehicle::set_vehicle_body_health(*uParam1, 20.5f);
		vehicle::set_vehicle_dirt_level(*uParam1, 15f);
		rope::activate_physics(*uParam1);
		return;
	}
}

// Position - 0x22A73
void func_337(var *uParam0, vector3 vParam1, float fParam4, bool bParam5) {
	int iVar0;
	vector3 vVar1;

	iVar0 = func_324(28);
	if (streaming::has_model_loaded(iVar0)) {
		*uParam0 = ped::create_ped(28, iVar0, vParam1, fParam4, 1, 1);
		audio::disable_ped_pain_audio(*uParam0, 1);
		ped::set_ped_config_flag(*uParam0, 227, 1);
		streaming::set_model_as_no_longer_needed(iVar0);
		entity::set_entity_health(*uParam0, 0);
		rope::activate_physics(*uParam0);
		vVar1 = {0.02f, -0.01f, 0f};
		graphics::add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.6f, 0.4f, 0.196f, 0f, 0f, 1f, -1f,
							1, 0, 0);
		vVar1 = {-0.03f, 0.04f, 0f};
		graphics::add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 0.6f, 0.196f, 0f, 0f, 1f, -1f,
							1, 0, 0);
		vVar1 = {-0.05f, -0.01f, 0f};
		graphics::add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1.1f, 0.196f, 0f, 0f, 1f, -1f,
							1, 0, 0);
		vVar1 = {0.01f, -0.06f, 0f};
		graphics::add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f,
							1, 0, 0);
		if (bParam5) {
			vVar1 = {0.5206f, 0f, 0.003f};
			graphics::add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.309f, -0.9511f, 0f, 0.19f, 0.33f, 0.113f, 0f, 0f,
								1f, -1f, 1, 0, 0);
			vVar1 = {1.1258f, 0.0362f, -0.0837f};
			graphics::add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f,
								1f, -1f, 1, 0, 0);
			vVar1 = {1.6107f, 0.4678f, -0.0815f};
			graphics::add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.5036f, -0.8639f, 0f, 0.19f, 0.33f, 0.119f, 0f, 0f,
								0.8f, -1f, 1, 0, 0);
		}
		return;
	}
}

// Position - 0x22CA6
void func_338(var *uParam0, vector3 vParam1, float fParam4, bool bParam5) {
	int iVar0;
	vector3 vVar1;

	iVar0 = func_324(35);
	if (streaming::has_model_loaded(iVar0)) {
		*uParam0 = vehicle::create_vehicle(iVar0, vParam1, fParam4, 1, 1);
		streaming::set_model_as_no_longer_needed(iVar0);
		entity::set_entity_rotation(*uParam0, 0f, 170f, 0f, 2, 1);
		vehicle::set_vehicle_engine_health(*uParam0, 1f);
		vehicle::set_vehicle_body_health(*uParam0, 1f);
		vehicle::set_vehicle_dirt_level(*uParam0, 15f);
		vehicle::set_vehicle_door_broken(*uParam0, 0, func_335());
		vehicle::set_vehicle_door_broken(*uParam0, 1, func_335());
		vehicle::set_vehicle_door_broken(*uParam0, 2, func_335());
		vehicle::set_vehicle_door_broken(*uParam0, 3, func_335());
		vehicle::set_vehicle_door_broken(*uParam0, 4, func_335());
		vehicle::set_vehicle_door_broken(*uParam0, 5, func_335());
		vehicle::_set_vehicle_lights_mode(*uParam0, 3);
		vehicle::set_vehicle_lights(*uParam0, 2);
		vehicle::set_vehicle_undriveable(*uParam0, 1);
		rope::activate_physics(*uParam0);
		if (bParam5) {
			vVar1 = {0.4947f, 2.3632f, 0.1294f};
			graphics::add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f,
								0.7f, -1f, 1, 0, 0);
			vVar1 = {0.9243f, 2.6606f, 0.1951f};
			graphics::add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f,
								0.66f, -1f, 1, 0, 0);
			vVar1 = {1.5467f, 2.5044f, 0.2418f};
			graphics::add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f,
								0.58f, -1f, 1, 0, 0);
			vVar1 = {1.357f, 3.8779f, 0.3259f};
			graphics::add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, 0.3798f, -0.9251f, 0f, 0.19f, 0.33f, 0f, 0f, 0f,
								0.48f, -1f, 1, 0, 0);
		}
		return;
	}
}

// Position - 0x22E91
void func_339(var *uParam0, vector3 vParam1, float fParam4, bool bParam5) {
	int iVar0;
	vector3 vVar1;

	iVar0 = func_324(43);
	if (streaming::has_model_loaded(iVar0)) {
		*uParam0 = ped::create_ped(28, iVar0, vParam1, fParam4, 1, 1);
		audio::disable_ped_pain_audio(*uParam0, 1);
		ped::set_ped_config_flag(*uParam0, 227, 1);
		streaming::set_model_as_no_longer_needed(iVar0);
		entity::set_entity_health(*uParam0, 0);
		rope::activate_physics(*uParam0);
		vVar1 = {0.12f, -0.01f, 0f};
		graphics::add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f,
							1, 0, 0);
		vVar1 = {-0.03f, 0.04f, 0f};
		graphics::add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f,
							1, 0, 0);
		vVar1 = {-0.2f, -0.01f, 0f};
		graphics::add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f,
							1, 0, 0);
		vVar1 = {-0.05f, -0.15f, 0f};
		graphics::add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f,
							1, 0, 0);
		if (bParam5) {
			vVar1 = {0.4125f, -0.5815f, -0.2056f};
			graphics::add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.5358f, -0.8443f, 0f, 0.19f, 0.33f, 0.234f, 0f,
								0f, 0.9f, -1f, 1, 0, 0);
			vVar1 = {0.6332f, -1.1758f, -0.7106f};
			graphics::add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.7026f, -0.7115f, 0f, 0.19f, 0.33f, 0.26f, 0f, 0f,
								0.75f, -1f, 1, 0, 0);
		}
		return;
	}
}

// Position - 0x23080
void func_340(var *uParam0, vector3 vParam1, float fParam4, bool bParam5) {
	int iVar0;
	vector3 vVar1;

	iVar0 = func_324(109);
	if (streaming::has_model_loaded(iVar0)) {
		*uParam0 = ped::create_ped(28, iVar0, vParam1, fParam4, 1, 1);
		audio::disable_ped_pain_audio(*uParam0, 1);
		streaming::set_model_as_no_longer_needed(iVar0);
		entity::set_entity_health(*uParam0, 0);
		rope::activate_physics(*uParam0);
		vVar1 = {0.12f, -0.01f, 0f};
		graphics::add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 1f, 0.9f, 0.196f, 0f, 0f, 1f, -1f,
							1, 0, 0);
		vVar1 = {-0.03f, 0.04f, 0f};
		graphics::add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f,
							1, 0, 0);
		vVar1 = {-0.2f, -0.01f, 0f};
		graphics::add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f,
							1, 0, 0);
		vVar1 = {-0.05f, -0.15f, 0f};
		graphics::add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.7f, 0.196f, 0f, 0f, 1f, -1f,
							1, 0, 0);
		vVar1 = {0.01f, -0.06f, 0f};
		graphics::add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.8f, 1f, 0.196f, 0f, 0f, 1f, -1f,
							1, 0, 0);
		if (bParam5) {
			vVar1 = {0.4936f, -0.1763f, -0.0522f};
			graphics::add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f,
								1, 0, 0);
			vVar1 = {1.0645f, 0.0483f, -0.0698f};
			graphics::add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 1f, -1f,
								1, 0, 0);
			vVar1 = {1.6011f, -0.1704f, -0.1473f};
			graphics::add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, 0f, -1f, 0f, 0.19f, 0.33f, 0.144f, 0f, 0f, 0.808f,
								-1f, 1, 0, 0);
		}
		func_331(*uParam0);
		return;
	}
}

// Position - 0x232D4
void func_341(var *uParam0, vector3 vParam1, float fParam4, bool bParam5) {
	int iVar0;
	vector3 vVar1;

	iVar0 = func_324(12);
	if (streaming::has_model_loaded(iVar0)) {
		*uParam0 = ped::create_ped(28, iVar0, vParam1, fParam4, 1, 1);
		audio::disable_ped_pain_audio(*uParam0, 1);
		streaming::set_model_as_no_longer_needed(iVar0);
		entity::set_entity_health(*uParam0, 0);
		rope::activate_physics(*uParam0);
		vVar1 = {0.04f, 0.02f, 0f};
		graphics::add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.6f, 0.196f, 0f, 0f, 1f, -1f,
							1, 0, 0);
		vVar1 = {-0.01f, 0.05f, 0f};
		graphics::add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.9f, 0.8f, 0.196f, 0f, 0f, 1f, -1f,
							1, 0, 0);
		vVar1 = {-0.03f, -0.01f, 0f};
		graphics::add_decal(1110, vParam1 + vVar1, 0f, 0f, -1f, func_7(0f, 1f, 0f), 0.7f, 0.9f, 0.196f, 0f, 0f, 1f, -1f,
							1, 0, 0);
		if (bParam5) {
			vVar1 = {0.2417f, -0.3975f, -0.2282f};
			graphics::add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f,
								0f, 1f, -1f, 1, 0, 0);
			vVar1 = {0.0747f, -0.8188f, -0.2576f};
			graphics::add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f,
								0f, 1f, -1f, 1, 0, 0);
			vVar1 = {0.4322f, -1.1548f, -0.4902f};
			graphics::add_decal(2020, vParam1 + vVar1, 0f, 0f, -1f, -0.9471f, -0.3209f, 0f, 0.19f, 0.33f, 0.106f, 0f,
								0f, 0.802f, -1f, 1, 0, 0);
		}
		func_331(*uParam0);
		return;
	}
}

// Position - 0x234C8
float func_342(int iParam0) {
	switch (iParam0) {
	case 1: return 190.1056f;

	case 2: return 132.9326f;

	case 3: return 355.7119f;

	case 4: return 209.0264f;

	case 5: return 122.6722f;

	case 6: return 174.841f;

	default:
	}
	return 0f;
}

// Position - 0x2352C
Vector3 func_343(int iParam0) {
	switch (iParam0) {
	case 1: return Global_98637[0 /*3*/];

	case 2: return Global_98637[1 /*3*/];

	case 3: return Global_98637[2 /*3*/];

	case 4: return Global_98637[3 /*3*/];

	case 5: return Global_98637[4 /*3*/];

	case 6: return Global_98637[5 /*3*/];

	default:
	}
	return 0f, 0f, 0f;
}

// Position - 0x235AA
bool func_344() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_9();
	iVar1 = func_325(iVar0);
	iVar2 = func_324(iVar1);
	iVar3 = func_323(iVar1);
	if (iVar2 != 0) {
		if (!streaming::has_model_loaded(iVar2)) {
			return false;
		}
	}
	if (iVar3 != 0) {
		if (!streaming::has_model_loaded(iVar3)) {
			return false;
		}
	}
	return true;
}

// Position - 0x235F9
void func_345(int *iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_9();
	iVar1 = func_325(iVar0);
	iVar2 = func_324(iVar1);
	iVar3 = func_323(iVar1);
	if (iVar2 != 0) {
		streaming::request_model(iVar2);
	}
	if (iVar3 != 0) {
		streaming::request_model(iVar3);
	}
	gameplay::set_bit(iParam0, 25);
}

// Position - 0x2363F
void func_346() {
	if (Global_98660.f_3 == gameplay::get_frame_count()) {
		return;
	}
	Global_98660.f_3 = gameplay::get_frame_count();
	if (Global_98660.f_2 == 0f && Global_98660.f_1 == 0f) {
		return;
	}
	if (Global_98660.f_2 != Global_98660.f_1) {
		Global_98660.f_2 += Global_98660;
		if (Global_98660 <= 0f) {
			if (Global_98660.f_2 < Global_98660.f_1) {
				Global_98660.f_2 = Global_98660.f_1;
			}
		}
		else if (Global_98660.f_2 > Global_98660.f_1) {
			Global_98660.f_2 = Global_98660.f_1;
		}
	}
	graphics::draw_rect(0.5f, 0.5f, 1f, 1f, 255, 255, 255, system::round(Global_98660.f_2), 0);
}

// Position - 0x23700
void func_347(int iParam0, int iParam1) {
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = system::to_float(iParam0);
	if (iParam1 <= 0) {
		Global_98660 = 0f;
		Global_98660.f_1 = fVar0;
		Global_98660.f_2 = fVar0;
	}
	else {
		fVar1 = fVar0 - Global_98660.f_2;
		fVar2 = system::to_float(iParam1) / (gameplay::get_frame_time() * 1000f);
		Global_98660 = fVar1 / fVar2;
		Global_98660.f_1 = fVar0;
	}
}

// Position - 0x2375D
void func_348(int *iParam0, int iParam1) { func_349(&Global_101700.f_8975.f_25, iParam1, 14336, 11); }

// Position - 0x23779
void func_349(var *uParam0, int iParam1, int iParam2, int iParam3) {
	*uParam0 -= (*uParam0 & iParam2);
	*uParam0 |= system::shift_left(iParam1, iParam3);
}

// Position - 0x2379D
struct<8> func_350(char *sParam0, char *sParam1, char *sParam2, char *sParam3) {
	struct<8> Var0;

	StringCopy(&Var0, sParam1, 32);
	StringConCat(&Var0, sParam0, 32);
	StringConCat(&Var0, sParam3, 32);
	StringConCat(&Var0, sParam2, 32);
	return Var0;
}

// Position - 0x237C2
Vector3
func_351(int iParam0) {
	if (iParam0 >= 0 && iParam0 < 7) {
		return Global_98615[iParam0 /*3*/];
	}
	return 0f, 0f, 0f;
}

// Position - 0x237EA
void func_352() {
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = -1308.545f;
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1), 475.192f, -1313.48f, 28.2074f) <
			1000f) {
			if (!iLocal_392) {
				streaming::request_model(joaat("v_ilev_uvline"));
				iLocal_391 = 1;
				if (streaming::has_model_loaded(joaat("v_ilev_uvline"))) {
					if (func_353(8)) {
						uLocal_393[4] = object::create_object(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.33f, 1, 1, 0);
						entity::set_entity_coords(uLocal_393[4], 471.48f, fVar0, 30.33f, 1, 0, 0, 1);
						entity::set_entity_rotation(uLocal_393[4], 0f, 0f, 116.9f, 2, 1);
						uLocal_393[1] = object::create_object(joaat("v_ilev_uvline"), 471.48f, fVar0, 30.15f, 1, 1, 0);
						entity::set_entity_coords(uLocal_393[1], 471.48f, fVar0, 30.15f, 1, 0, 0, 1);
						entity::set_entity_rotation(uLocal_393[1], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_353(9)) {
						uLocal_393[5] = object::create_object(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.98f, 1, 1, 0);
						entity::set_entity_coords(uLocal_393[5], 471.48f, fVar0, 29.98f, 1, 0, 0, 1);
						entity::set_entity_rotation(uLocal_393[5], 0f, 0f, 116.9f, 2, 1);
					}
					if (func_353(10)) {
						uLocal_393[3] = object::create_object(joaat("v_ilev_uvline"), 471.48f, fVar0, 29.82f, 1, 1, 0);
						entity::set_entity_coords(uLocal_393[3], 471.48f, fVar0, 29.82f, 1, 0, 0, 1);
						entity::set_entity_rotation(uLocal_393[3], 0f, 0f, 116.9f, 2, 1);
					}
					iVar1 = interior::get_interior_at_coords_with_type(475.192f, -1313.48f, 28.2074f, "v_chopshop");
					iVar2 = 0;
					while (iVar2 < 6) {
						if (entity::does_entity_exist(uLocal_393[iVar2])) {
							entity::set_entity_visible(uLocal_393[iVar2], 1, 0);
							entity::set_entity_always_prerender(uLocal_393[iVar2], 1);
							interior::_0x82EBB79E258FA2B7(uLocal_393[iVar2], iVar1);
						}
						iVar2++;
					}
					streaming::set_model_as_no_longer_needed(joaat("v_ilev_uvline"));
					iLocal_392 = 1;
				}
			}
		}
		else {
			if (iLocal_391) {
				streaming::set_model_as_no_longer_needed(joaat("v_ilev_uvline"));
				iLocal_391 = 0;
			}
			if (iLocal_392) {
				func_396();
				iLocal_392 = 0;
			}
		}
	}
}

// Position - 0x23A22
bool func_353(int iParam0) {
	if (iParam0 == 94 || iParam0 == -1) {
		return false;
	}
	return Global_101700.f_8044.f_330[iParam0 /*6*/];
}

// Position - 0x23A4E
void func_354() {
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_68531.f_553) {
		if (!iLocal_400) {
			Global_68531.f_554 = 0;
			iLocal_400 = 1;
		}
		else if (Global_68531.f_554 >= 68) {
			Global_68531.f_553 = 0;
			iLocal_400 = 0;
		}
	}
	else {
		iLocal_400 = 0;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_866) {
		iVar1 = iLocal_867[iVar0];
		if (func_60(&Local_674, iVar1)) {
			func_392(&Local_695, iVar1);
			if (Local_695.f_69 && Local_402.f_3 == 0 || iVar1 == 14) {
				uLocal_941[iVar1] = gameplay::get_distance_between_coords(
					entity::get_entity_coords(player::player_ped_id(), 0), Local_695.f_55, 0);
			}
			else {
				uLocal_941[iVar1] = gameplay::get_distance_between_coords(
					entity::get_entity_coords(player::player_ped_id(), 0), Local_674, 0);
			}
			if (func_391()) {
				func_390(iVar1);
				func_388(iVar1);
				func_387(iVar1);
				func_386(iVar1);
				func_384(iVar1);
				func_383(iVar1);
				func_382(iVar1);
				func_356(iVar1);
				if (gameplay::is_bit_set(uLocal_48[iVar1], 2)) {
					if (Global_68531.f_553) {
						iLocal_400 = 0;
					}
					func_397(iVar1);
				}
			}
			else {
				func_355(iVar1);
			}
		}
		iVar0++;
	}
	iVar2 = iLocal_866;
	iLocal_866 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_936) {
		iLocal_936[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2) {
		if (gameplay::is_bit_set(uLocal_48[iLocal_867[iVar0]], 2)) {
			func_397(iLocal_867[iVar0]);
		}
		iVar0++;
	}
	if (iLocal_940 != -1) {
		func_397(iLocal_940);
		iLocal_940 = -1;
	}
	iLocal_47++;
	if (iLocal_47 >= 68) {
		iLocal_47 = 0;
	}
	func_397(iLocal_47);
	if (iLocal_1014) {
		func_397(21);
		func_397(22);
		func_397(23);
		iLocal_1014 = 0;
		iLocal_1015 = 1;
	}
	else if (iLocal_1015) {
		iLocal_1015 = 0;
	}
	if (Global_68531.f_553) {
		Global_68531.f_554++;
	}
}

// Position - 0x23C47
void func_355(int iParam0) {
	if (iLocal_117[iParam0] != 0) {
		streaming::set_model_as_no_longer_needed(iLocal_117[iParam0]);
		iLocal_117[iParam0] = 0;
	}
}

// Position - 0x23C6A
void func_356(int iParam0) {
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	vector3 vVar8;
	struct<60> Var11;
	int iVar89;
	bool bVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	vector3 vVar94;
	vector3 vVar100;
	int iVar106;

	fVar0 = 210f;
	fVar1 = 200f;
	if (!gameplay::is_bit_set(uLocal_48[iParam0], 2)) {
		func_355(iParam0);
	}
	gameplay::clear_bit(&uLocal_48[iParam0], 2);
	if (gameplay::is_bit_set(uLocal_48[iParam0], 1)) {
		fVar2 = gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 0),
													  vLocal_186[iParam0 /*3*/], 1);
	}
	else {
		fVar2 = 99999.99f;
	}
	if (gameplay::is_bit_set(Local_674.f_9, 23)) {
		if (Local_674.f_4 == joaat("blimp")) {
			fVar0 = 1010f;
			fVar1 = 1000f;
		}
		else {
			fVar0 = 410f;
			fVar1 = 400f;
		}
	}
	else if (gameplay::is_bit_set(Local_674.f_9, 24)) {
		fVar0 = 50f;
		fVar1 = 50f;
	}
	else if (gameplay::is_bit_set(Local_674.f_9, 19) || gameplay::is_bit_set(Local_674.f_9, 20) || iParam0 == 24 ||
			 iParam0 == 25) {
		fVar0 = 310f;
		fVar1 = 300f;
	}
	else if (gameplay::is_bit_set(Local_674.f_9, 25) &&
			 (iLocal_672 == 0 && Local_402 == 21 || iLocal_672 == 0 && Local_402 == 22 ||
			  iLocal_672 == 0 && Local_402 == 23)) {
		fVar0 = 5010f;
		fVar1 = 5000f;
	}
	if (entity::does_entity_exist(Global_68531.f_139[iParam0])) {
		if (vehicle::is_vehicle_driveable(Global_68531.f_139[iParam0], 0)) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				if (iParam0 == 24) {
					iVar3 = vehicle::get_ped_in_vehicle_seat(Global_68531.f_139[iParam0], -1, 0);
					if (!entity::does_entity_exist(iVar3)) {
						iVar3 = vehicle::get_last_ped_in_vehicle_seat(Global_68531.f_139[iParam0], -1);
					}
					iVar4 = func_318(iVar3);
					if (iVar4 != Global_101700.f_31389.f_5591) {
						if (func_25(iVar4)) {
							func_381("Updating last character to use vehicle gen", iVar4);
							Global_101700.f_31389.f_5591 = iVar4;
						}
					}
				}
				if (!entity::does_entity_belong_to_this_script(Global_68531.f_139[iParam0], 1)) {
					func_380("No longer needed: Vehicle owned by other script");
					if (iParam0 == 24 && !func_62(Global_68531.f_139[iParam0]) &&
						!func_61(Global_68531.f_139[iParam0]) &&
						entity::get_entity_model(Global_68531.f_139[iParam0]) != joaat("monster")) {
						vehicle::_0x428BACCDF5E26EAD(Global_68531.f_139[iParam0], 1);
					}
					Global_68531.f_139[iParam0] = 0;
					Global_68531[iParam0] = 1;
					func_379(iParam0);
					return;
				}
				if (gameplay::is_bit_set(uLocal_48[iParam0], 0) && !gameplay::is_bit_set(Local_674.f_9, 27) &&
					iParam0 != 24 && iParam0 != 25) {
					func_380("No longer needed: Player used vehicle");
					if (iParam0 == 24 && !func_62(Global_68531.f_139[iParam0]) &&
						!func_61(Global_68531.f_139[iParam0]) &&
						entity::get_entity_model(Global_68531.f_139[iParam0]) != joaat("monster")) {
						vehicle::_0x428BACCDF5E26EAD(Global_68531.f_139[iParam0], 1);
					}
					entity::set_vehicle_as_no_longer_needed(&Global_68531.f_139[iParam0]);
					Global_68531.f_139[iParam0] = 0;
					Global_68531[iParam0] = 1;
					func_379(iParam0);
					return;
				}
				if (!gameplay::is_bit_set(uLocal_48[iParam0], 1) && iParam0 != 24 && iParam0 != 25) {
					if (entity::has_entity_been_damaged_by_entity(Global_68531.f_139[iParam0], player::player_ped_id(),
																  1)) {
						func_380("No longer needed: Player damaged vehicle");
						if (iParam0 == 24 && !func_62(Global_68531.f_139[iParam0]) &&
							!func_61(Global_68531.f_139[iParam0]) &&
							entity::get_entity_model(Global_68531.f_139[iParam0]) != joaat("monster")) {
							vehicle::_0x428BACCDF5E26EAD(Global_68531.f_139[iParam0], 1);
						}
						entity::set_vehicle_as_no_longer_needed(&Global_68531.f_139[iParam0]);
						Global_68531.f_139[iParam0] = 0;
						Global_68531[iParam0] = 1;
						func_379(iParam0);
						return;
					}
				}
				fVar5 = 8f;
				if (iParam0 == 24 || iParam0 == 25 || iParam0 == 21 || iParam0 == 22 || iParam0 == 23 ||
					iParam0 == 26 || iParam0 == 29 || iParam0 == 32 || iParam0 == 27 || iParam0 == 30 ||
					iParam0 == 33 || iParam0 == 28 || iParam0 == 31 || iParam0 == 34) {
					fVar5 = 20f;
				}
				if (gameplay::is_bit_set(uLocal_48[iParam0], 1) &&
						gameplay::get_distance_between_coords(entity::get_entity_coords(Global_68531.f_139[iParam0], 1),
															  vLocal_186[iParam0 /*3*/], 1) > fVar5 ||
					!gameplay::is_bit_set(uLocal_48[iParam0], 1) &&
						gameplay::get_distance_between_coords(entity::get_entity_coords(Global_68531.f_139[iParam0], 1),
															  Local_674, 1) > fVar5) {
					func_380("No longer needed: Vehicle has been moved");
					if (iParam0 == 24 && !func_62(Global_68531.f_139[iParam0]) &&
						!func_61(Global_68531.f_139[iParam0]) &&
						entity::get_entity_model(Global_68531.f_139[iParam0]) != joaat("monster")) {
						vehicle::_0x428BACCDF5E26EAD(Global_68531.f_139[iParam0], 1);
					}
					entity::set_vehicle_as_no_longer_needed(&Global_68531.f_139[iParam0]);
					Global_68531.f_139[iParam0] = 0;
					Global_68531[iParam0] = 1;
					func_379(iParam0);
					return;
				}
				if (!func_66(iParam0, 0)) {
					func_380("No longer needed: Vehicle gen no longer available");
					if (iParam0 == 24 && !func_62(Global_68531.f_139[iParam0]) &&
						!func_61(Global_68531.f_139[iParam0]) &&
						entity::get_entity_model(Global_68531.f_139[iParam0]) != joaat("monster")) {
						vehicle::_0x428BACCDF5E26EAD(Global_68531.f_139[iParam0], 1);
					}
					entity::set_vehicle_as_no_longer_needed(&Global_68531.f_139[iParam0]);
					Global_68531.f_139[iParam0] = 0;
					Global_68531[iParam0] = 1;
					func_379(iParam0);
					return;
				}
				if (iParam0 == 24) {
					if (func_46(Global_68531.f_139[iParam0], iLocal_672, 1) && !func_62(Global_68531.f_139[iParam0]) &&
						!func_61(Global_68531.f_139[iParam0])) {
						func_380("No longer needed: Mission vehicle gen moved "
								 "to players garage");
						if (entity::get_entity_model(Global_68531.f_139[iParam0]) != joaat("monster")) {
							vehicle::_0x428BACCDF5E26EAD(Global_68531.f_139[iParam0], 1);
						}
						Global_68531.f_139[iParam0] = 0;
						Global_68531[iParam0] = 1;
						func_379(iParam0);
						return;
					}
				}
				if (uLocal_941[iParam0] > fVar0 && (!gameplay::is_bit_set(uLocal_48[iParam0], 1) || fVar2 > fVar0)) {
					if (iParam0 == 24) {
						iVar6 = func_49();
						iVar7 = Global_101700.f_31389.f_4801;
						func_377(&iVar7, 0, 0, 17, 0, 0, 0);
						if (func_292(iVar6, iVar7)) {
							if (!func_62(Global_68531.f_139[iParam0]) && !func_61(Global_68531.f_139[iParam0]) &&
								entity::get_entity_model(Global_68531.f_139[iParam0]) != joaat("monster")) {
								vehicle::_0x428BACCDF5E26EAD(Global_68531.f_139[iParam0], 1);
							}
							func_31(Global_68531.f_139[iParam0], Global_101700.f_31389.f_5591);
							Global_68531[iParam0] = 1;
							func_379(iParam0);
						}
						else if (func_36(Global_68531.f_139[iParam0])) {
							func_32(Global_68531.f_139[iParam0], &Global_2453948);
							Global_2453947 = Global_101700.f_31389.f_5591;
							iLocal_1029 = Global_68531.f_139[iParam0];
						}
					}
					func_380("No longer needed: Player out for range");
					entity::set_vehicle_as_no_longer_needed(&Global_68531.f_139[iParam0]);
					gameplay::clear_area(Local_674, 3f, 0, 0, 0, 0);
					gameplay::clear_area_of_vehicles(Local_674, 3f, 0, 0, 0, 0, 0);
					Global_68531.f_139[iParam0] = 0;
					if (iParam0 == 0 && iLocal_672 == 0 || iParam0 == 6 && iLocal_672 == 2 ||
						iParam0 == 2 && iLocal_672 == 1) {
						Global_68531.f_584 = {Local_674};
						Global_68531.f_587 = {0f, 0f, 0f};
					}
					return;
				}
				if (gameplay::is_bit_set(Local_674.f_9, 30)) {
					if (!gameplay::is_bit_set(Local_674.f_9, 31)) {
						if (!entity::has_entity_collided_with_anything(Global_68531.f_139[iParam0]) &&
							!entity::is_entity_attached(Global_68531.f_139[iParam0])) {
							vVar8 = {entity::get_entity_coords(Global_68531.f_139[iParam0], 1)};
							if (vVar8.z >= func_376(iParam0)) {
								vehicle::set_boat_anchor(Global_68531.f_139[iParam0], 1);
								gameplay::set_bit(&Local_674.f_9, 31);
							}
						}
					}
				}
			}
			return;
		}
	}
	else {
		Global_68531.f_139[iParam0] = 0;
	}
	if (entity::does_entity_exist(Global_68531.f_139[iParam0])) {
		func_380("No longer needed: Vehicle not driveable");
		entity::set_vehicle_as_no_longer_needed(&Global_68531.f_139[iParam0]);
		Global_68531.f_139[iParam0] = 0;
		Global_68531[iParam0] = 1;
		func_379(iParam0);
		return;
	}
	if (ped::is_ped_injured(player::player_ped_id())) {
		return;
	}
	if (Global_69438 == iParam0) {
		func_380("Processing a vehgen vehicle handover request.");
		if (entity::does_entity_exist(Global_69437) && vehicle::is_vehicle_driveable(Global_69437, 0)) {
			if (entity::does_entity_exist(Global_68531.f_139[iParam0]) &&
				vehicle::is_vehicle_driveable(Global_68531.f_139[iParam0], 0)) {
				if (Global_68531.f_139[iParam0] == Global_69437) {
					func_380("Vehicle to be handed over is the same vehicle.");
					Global_69438 = -1;
					Global_69437 = 0;
					return;
				}
				else {
					func_380("No longer needed: Ready to accept handover vehicle.");
					if (iParam0 == 24 && !func_62(Global_68531.f_139[iParam0]) &&
						!func_61(Global_68531.f_139[iParam0]) &&
						entity::get_entity_model(Global_68531.f_139[iParam0]) != joaat("monster")) {
						vehicle::_0x428BACCDF5E26EAD(Global_68531.f_139[iParam0], 1);
					}
					entity::set_vehicle_as_no_longer_needed(&Global_68531.f_139[iParam0]);
					Global_68531.f_139[iParam0] = 0;
				}
			}
			Global_68531.f_139[iParam0] = Global_69437;
			Global_68531[iParam0] = 1;
			gameplay::clear_bit(&uLocal_48[iParam0], 0);
			gameplay::set_bit(&uLocal_48[iParam0], 1);
			gameplay::clear_bit(&uLocal_48[iParam0], 3);
			vLocal_186[iParam0 /*3*/] = {entity::get_entity_coords(Global_69437, 1)};
			Global_69438 = -1;
			if (gameplay::is_bit_set(Local_674.f_9, 10)) {
				Var11.f_9 = 49;
				Var11.f_59 = 2;
				func_32(Global_69437, &Var11);
				if (Global_69439) {
					func_111(iParam0, &Var11, entity::get_entity_coords(Global_69437, 1),
							 entity::get_entity_heading(Global_69437), func_45(Global_69437));
				}
				else {
					func_111(iParam0, &Var11, Global_101700.f_31389.f_1864[Local_674.f_14 /*3*/],
							 Global_101700.f_31389.f_1934[Local_674.f_14], func_45(Global_69437));
				}
				Global_68531.f_139[iParam0] = Global_69437;
				Global_68531.f_484[iParam0] = Global_68531.f_139[iParam0];
			}
			if (iParam0 == 25) {
				iVar89 = func_393();
				if (func_25(iVar89)) {
					func_380("Players stored switch vehicle cleared for prep "
							 "getaway.");
					Global_91259[iVar89] = 0;
				}
			}
			entity::set_entity_as_mission_entity(Global_68531.f_139[iParam0], 1, 1);
			if (iParam0 == 24) {
				vehicle::_0x428BACCDF5E26EAD(Global_68531.f_139[iParam0], 0);
			}
			Global_69437 = 0;
			if (Global_2453948.f_66 != 0) {
				func_214(&Global_2453948, Global_2453947);
				Global_2453948.f_66 = 0;
			}
			return;
		}
		if (Global_2453948.f_66 != 0) {
			func_214(&Global_2453948, Global_2453947);
			Global_2453948.f_66 = 0;
		}
		func_380("Vehicle to be handed over doesn't exist.");
		Global_69438 = -1;
		Global_69437 = 0;
	}
	if (Global_68531[iParam0]) {
		if (uLocal_941[iParam0] >= fVar0) {
			Global_68531[iParam0] = 0;
			func_380("Leave area flag cleared");
		}
		if (iParam0 == 0 && iLocal_672 == 0 || iParam0 == 6 && iLocal_672 == 2 || iParam0 == 2 && iLocal_672 == 1) {
			Global_68531.f_584 = {0f, 0f, 0f};
			Global_68531.f_587 = {0f, 0f, 0f};
		}
		return;
	}
	bVar90 = false;
	if (uLocal_941[iParam0] > fVar1) {
		if (iParam0 == 24 && Global_101700.f_31389.f_1958[Local_674.f_14] != 0 &&
			Global_101700.f_31389.f_1958[Local_674.f_14] > 3 && Local_674.f_4 != 0 && func_66(iParam0, 0) &&
			func_38(Local_674.f_4, 0)) {
			iVar91 = func_49();
			iVar92 = Global_101700.f_31389.f_4801;
			func_377(&iVar92, 0, 0, 17, 0, 0, 0);
			if (func_292(iVar91, iVar92)) {
				func_214(&Global_101700.f_31389.f_69[Local_674.f_14 /*78*/], Global_101700.f_31389.f_5591);
				func_379(iParam0);
				Global_68531[iParam0] = 1;
				func_380("Cannot be created: Vehicle ready for impound");
				Global_2453948.f_66 = 0;
				return;
			}
		}
		if (iParam0 == 0 && iLocal_672 == 0 || iParam0 == 6 && iLocal_672 == 2 || iParam0 == 2 && iLocal_672 == 1) {
			bVar90 = true;
		}
		else {
			return;
		}
	}
	if (iParam0 == 0 && iLocal_672 == 0 || iParam0 == 6 && iLocal_672 == 2 || iParam0 == 2 && iLocal_672 == 1) {
		Global_68531.f_584 = {0f, 0f, 0f};
		Global_68531.f_587 = {0f, 0f, 0f};
	}
	if (Local_674.f_4 == 0) {
		Global_68531[iParam0] = 1;
		func_380("Cannot be created: Dummy model");
		return;
	}
	if (!func_38(Local_674.f_4, 0)) {
		Global_68531[iParam0] = 1;
		func_380("Cannot be created: Vehicle gen model is no longer installed");
		return;
	}
	if (!func_66(iParam0, 0)) {
		Global_68531[iParam0] = 1;
		func_380("Cannot be created: Vehicle gen not available");
		return;
	}
	if (gameplay::is_bit_set(Local_674.f_9, 14) && !func_66(iParam0, 5)) {
		Global_68531[iParam0] = 1;
		func_380("Cannot be created: Vehicle gen not purchased");
		return;
	}
	if (func_375() && func_374(0) && iParam0 != 24 && iParam0 != 25 && iParam0 != 35) {
		Global_68531[iParam0] = 1;
		func_380("Cannot be created: Vehicle gens blocked on mission");
		return;
	}
	if (!iLocal_673) {
		Global_68531[iParam0] = 1;
		func_380("Cannot be created: Player character not valid");
		return;
	}
	if (gameplay::is_bit_set(Local_674.f_9, 10)) {
		if (entity::does_entity_exist(Global_68531.f_484[iParam0])) {
			Global_68531[iParam0] = 1;
			func_380("Cannot be created: Previous dyanmic vehicle still exists");
			return;
		}
		else {
			Global_68531.f_484[iParam0] = 0;
		}
	}
	if (gameplay::is_bit_set(Local_674.f_9, 6)) {
		if (func_373(Local_674.f_4, -1)) {
			Global_68531[iParam0] = 1;
			func_380("Cannot be created: Same vehicle model found nearby player");
			return;
		}
		if (func_372(Local_674.f_4, -1)) {
			Global_68531[iParam0] = 1;
			func_380("Cannot be created: Same vehicle model found nearby gen "
					 "location");
			return;
		}
	}
	if (gameplay::is_bit_set(Local_674.f_9, 29)) {
		if (Local_402.f_3 == 0) {
			return;
		}
	}
	if (func_371(iParam0)) {
		Global_68531[iParam0] = 1;
		func_380("Cannot be created: Vehgen+model specific checks failed");
		return;
	}
	if (streaming::is_player_switch_in_progress() && streaming::get_player_switch_type() == 3) {
		if (iParam0 == 12 || iParam0 == 13 || iParam0 == 14) {
			Global_68531[iParam0] = 1;
			func_380("Cannot be created: Short range switch in progress");
			return;
		}
	}
	iVar93 = 0;
	if (gameplay::is_bit_set(Local_674.f_9, 19)) {
		iVar93 = 2;
	}
	else if (gameplay::is_bit_set(Local_674.f_9, 20)) {
		iVar93 = 1;
	}
	if (iParam0 == 24 && Global_101700.f_31389.f_1958[Local_674.f_14] > 0 &&
		Global_101700.f_31389.f_1958[Local_674.f_14] <= 3) {
		if (vehicle::is_this_model_a_bike(Local_674.f_4)) {
			iVar93 = 2;
			Local_674.f_12 = Global_101700.f_31389.f_1958[Local_674.f_14] - 1;
		}
		else if (vehicle::is_this_model_a_car(Local_674.f_4)) {
			iVar93 = 1;
			Local_674.f_12 = Global_101700.f_31389.f_1958[Local_674.f_14] - 1;
		}
	}
	if (iVar93 != 0) {
		if (func_370(Local_674.f_12, iVar93, Local_674, -1f)) {
			Global_68531[iParam0] = 1;
			func_380("Cannot be created: Same player vehicle found nearby gen "
					 "location");
			if (iParam0 == 24) {
				func_399(iParam0, 0);
			}
			return;
		}
		if (gameplay::is_bit_set(Local_674.f_9, 19) || gameplay::is_bit_set(Local_674.f_9, 20)) {
			if (iVar93 == 2) {
				if (Global_89203[Local_674.f_12 /*3*/][1] != -1 &&
					gameplay::get_game_timer() - Global_89203[Local_674.f_12 /*3*/][1] <
						time::get_milliseconds_per_game_minute() * 180) {
					Global_68531[iParam0] = 1;
					func_380("Cannot be created: Same player vehicle cleaned "
							 "up within the last 3 hours");
					StringCopy(&vVar94, "...", 24);
					StringIntConCat(&vVar94,
									(time::get_milliseconds_per_game_minute() * 180 -
									 (gameplay::get_game_timer() - Global_89203[Local_674.f_12 /*3*/][1])) /
										1000,
									24);
					StringConCat(&vVar94, " seconds", 24);
					func_380(&vVar94);
					return;
				}
			}
			else if (iVar93 == 1) {
				if (Global_89203[Local_674.f_12 /*3*/][0] != -1 &&
					gameplay::get_game_timer() - Global_89203[Local_674.f_12 /*3*/][0] <
						time::get_milliseconds_per_game_minute() * 180) {
					Global_68531[iParam0] = 1;
					func_380("Cannot be created: Same player vehicle cleaned "
							 "up within the last 3 hours");
					StringCopy(&vVar100, "...", 24);
					StringIntConCat(&vVar100,
									(time::get_milliseconds_per_game_minute() * 180 -
									 (gameplay::get_game_timer() - Global_89203[Local_674.f_12 /*3*/][1])) /
										1000,
									24);
					StringConCat(&vVar100, " seconds", 24);
					func_380(&vVar100);
					return;
				}
			}
		}
	}
	if (iParam0 == 0 && iLocal_672 == 0 || iParam0 == 6 && iLocal_672 == 2 || iParam0 == 2 && iLocal_672 == 1) {
		Global_68531.f_584 = {Local_674};
	}
	if (bVar90) {
		return;
	}
	if (iVar93 != 0) {
		iLocal_117[iParam0] = func_23(Local_674.f_12, iVar93);
		streaming::request_model(iLocal_117[iParam0]);
		gameplay::set_bit(&uLocal_48[iParam0], 2);
		if (!streaming::has_model_loaded(iLocal_117[iParam0])) {
			func_380("Cannot be created: Waiting for player vehicle model to load");
			return;
		}
		if (func_369(iLocal_117[iParam0], Local_674, 1)) {
			func_380("Cannot be created: Player is too close to spawn position "
					 "(default vehicle type)");
			return;
		}
		gameplay::clear_area(Local_674, 3f, 0, 0, 0, 0);
		gameplay::clear_area_of_vehicles(Local_674, 3f, 0, 0, 0, 0, 0);
		if (iVar93 == 2) {
			func_364(&Global_68531.f_139[iParam0], Local_674.f_12, Local_674, Local_674.f_3, 0, 2);
		}
		else if (iVar93 == 1) {
			func_364(&Global_68531.f_139[iParam0], Local_674.f_12, Local_674, Local_674.f_3, 0, 1);
		}
		else {
			Global_68531[iParam0] = 1;
			func_380("Cannot be created: Invalid player vehicle type specified");
			return;
		}
	}
	else {
		streaming::request_model(Local_674.f_4);
		iLocal_117[iParam0] = Local_674.f_4;
		gameplay::set_bit(&uLocal_48[iParam0], 2);
		if (!streaming::has_model_loaded(Local_674.f_4)) {
			func_380("Cannot be created: Waiting for model to load");
			return;
		}
		if (func_369(Local_674.f_4, Local_674, 1)) {
			func_380("Cannot be created: Player is too close to spawn position "
					 "(specific vehicle type)");
			return;
		}
		gameplay::clear_area(Local_674, 3f, 0, 0, 0, 0);
		gameplay::clear_area_of_vehicles(Local_674, 3f, 0, 0, 0, 0, 0);
		if (gameplay::is_bit_set(Local_674.f_9, 23)) {
			streaming::request_collision_at_coord(Local_674);
		}
		if (iParam0 == 15 || iParam0 == 16 || iParam0 == 17) {
			if (Local_674.f_4 == joaat("submersible2")) {
				Local_674.f_2 = -3f;
			}
		}
		Global_68531.f_139[iParam0] = vehicle::create_vehicle(Local_674.f_4, Local_674, Local_674.f_3, 1, 1);
		if (gameplay::is_bit_set(Local_674.f_9, 10)) {
			if (vehicle::is_this_model_a_plane(Local_674.f_4)) {
				gameplay::set_bit(&Global_101700.f_31389.f_69[Local_674.f_14 /*78*/].f_77, 22);
			}
			if (gameplay::is_bit_set(Global_101700.f_31389.f_69[Local_674.f_14 /*78*/].f_77, 14)) {
				func_32(Global_68531.f_139[iParam0], &Local_776);
				func_363(Local_776.f_77, &Global_101700.f_31389.f_69[Local_674.f_14 /*78*/].f_77, Local_674.f_4);
				gameplay::clear_bit(&Global_101700.f_31389.f_69[Local_674.f_14 /*78*/].f_77, 14);
			}
			func_305(Global_68531.f_139[iParam0], &Global_101700.f_31389.f_69[Local_674.f_14 /*78*/], 0, 1);
			Global_68531.f_484[iParam0] = Global_68531.f_139[iParam0];
		}
		else {
			if (gameplay::is_bit_set(Local_674.f_9, 9)) {
				vehicle::set_vehicle_colours(Global_68531.f_139[iParam0], Local_674.f_10, Local_674.f_11);
			}
			if (gameplay::is_bit_set(Local_674.f_9, 8)) {
				vehicle::set_vehicle_doors_locked(Global_68531.f_139[iParam0], 2);
				vehicle::set_vehicle_can_be_visibly_damaged(Global_68531.f_139[iParam0], 0);
				vehicle::set_vehicle_can_be_targetted(Global_68531.f_139[iParam0], 0);
				vehicle::set_vehicle_can_break(Global_68531.f_139[iParam0], 0);
				vehicle::_0x51BB2D88D31A914B(Global_68531.f_139[iParam0], 0);
				vehicle::_0x192547247864DFDD(Global_68531.f_139[iParam0], 0);
				vehicle::set_vehicle_tyres_can_burst(Global_68531.f_139[iParam0], 0);
				entity::set_entity_invincible(Global_68531.f_139[iParam0], 1);
				entity::freeze_entity_position(Global_68531.f_139[iParam0], 1);
			}
		}
	}
	if (entity::does_entity_exist(Global_68531.f_139[iParam0])) {
		func_362("Created - Coords: ", Local_674);
		func_361("Created - Dist From Player:", uLocal_941[iParam0]);
		if (iParam0 == 0 && iLocal_672 == 0 || iParam0 == 6 && iLocal_672 == 2 || iParam0 == 2 && iLocal_672 == 1) {
			Global_68531.f_584 = {0f, 0f, 0f};
		}
		switch (Local_674.f_4) {
		case joaat("miljet"):
			vehicle::set_vehicle_colours(Global_68531.f_139[iParam0], 121, 21);
			vehicle::set_vehicle_extra_colours(Global_68531.f_139[iParam0], 8, 156);
			break;

		case joaat("besra"):
			vehicle::set_vehicle_colours(Global_68531.f_139[iParam0], 122, 89);
			vehicle::set_vehicle_extra_colours(Global_68531.f_139[iParam0], 25, 121);
			break;

		case joaat("buzzard"):
		case joaat("buzzard2"):
			vehicle::set_vehicle_colours(Global_68531.f_139[iParam0], 0, 0);
			vehicle::set_vehicle_extra_colours(Global_68531.f_139[iParam0], 5, 156);
			break;

		case joaat("dukes2"): break;

		case joaat("rhino"):
			vehicle::set_vehicle_colours(Global_68531.f_139[iParam0], 131, 132);
			vehicle::set_vehicle_extra_colours(Global_68531.f_139[iParam0], 132, 156);
			break;

		case joaat("luxor2"):
		case joaat("swift2"):
			vehicle::set_vehicle_colours(Global_68531.f_139[iParam0], 159, 0);
			vehicle::set_vehicle_extra_colours(Global_68531.f_139[iParam0], 160, 156);
			break;
		}
		if (gameplay::is_bit_set(Local_674.f_9, 22)) {
			vehicle::set_boat_anchor(Global_68531.f_139[iParam0], 1);
		}
		if (gameplay::is_bit_set(Local_674.f_9, 30)) {
			gameplay::clear_bit(&Local_674.f_9, 31);
		}
		if (gameplay::is_bit_set(Local_674.f_9, 26)) {
			vehicle::set_vehicle_doors_locked(Global_68531.f_139[iParam0], 7);
			vehicle::set_vehicle_alarm(Global_68531.f_139[iParam0], 1);
		}
		func_360(Global_68531.f_139[iParam0], iParam0);
		if (!gameplay::is_bit_set(Local_674.f_9, 29) && !gameplay::is_bit_set(Local_674.f_9, 30)) {
			vehicle::set_vehicle_on_ground_properly(Global_68531.f_139[iParam0], 1084227584);
		}
		vehicle::set_vehicle_dirt_level(Global_68531.f_139[iParam0], 0f);
		entity::_set_entity_register(Global_68531.f_139[iParam0], 1);
		vehicle::_0x428BACCDF5E26EAD(Global_68531.f_139[iParam0], gameplay::is_bit_set(Local_674.f_9, 5));
	}
	gameplay::clear_bit(&uLocal_48[iParam0], 0);
	gameplay::clear_bit(&uLocal_48[iParam0], 1);
	Global_68531[iParam0] = 1;
	if (iVar93 != 0) {
		Global_68531.f_69[iParam0] = 1;
	}
	iVar106 = func_357(458, -1, -1);
	if (iVar106 != 0 && iVar106 == iParam0) {
		iLocal_1028 = Global_68531.f_139[iParam0];
	}
	if (iParam0 == 24) {
		Global_2453948.f_66 = 0;
	}
}

// Position - 0x25484
int func_357(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == -1) {
		iParam1 = func_91();
	}
	iVar0 = 0;
	iVar1 = func_359(iParam0, iParam1);
	iVar2 = func_358(iParam0);
	if (0 != iVar1) {
		if (!stats::stat_get_masked_int(iVar1, &iVar0, iVar2, 8, iParam2)) {
			iVar0 = 0;
		}
	}
	return iVar0;
}

// Position - 0x254CA
int func_358(int iParam0) {
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

// Position - 0x25786
int func_359(int iParam0, int iParam1) {
	int iVar0;

	if (iParam1 == -1) {
		iParam1 = func_91();
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

// Position - 0x25A04
void func_360(int iParam0, int iParam1) {
	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0)) {
		switch (iParam1) {
		case 36:
			vehicle::set_vehicle_damage(iParam0, -0.84f, 2.21f, 0.22f, 100f, 400f, 1);
			vehicle::set_vehicle_damage(iParam0, 0.67f, 2.12f, -0.06f, 100f, 400f, 1);
			vehicle::set_vehicle_damage(iParam0, 0.05f, 1.97f, 0.2f, 100f, 400f, 1);
			break;

		case 35:
			vehicle::set_vehicle_extra(iParam0, 6, 0);
			vehicle::set_vehicle_extra(iParam0, 1, 1);
			break;
		}
	}
}

// Position - 0x25AAA
void func_361(char *sParam0, float fParam1) {
	if (!gameplay::is_string_null_or_empty(sParam0)) {
		if (fParam1 != 0f) {
		}
	}
}

// Position - 0x25AC3
void func_362(char *sParam0, float fParam1, var uParam2, var uParam3) {
	if (!gameplay::is_string_null_or_empty(sParam0)) {
		if (fParam1 != 0f) {
		}
	}
}

// Position - 0x25ADC
void func_363(var uParam0, var *uParam1, int iParam2) {
	int iVar0;
	int iVar1;

	iVar0 = 2147483647;
	switch (iParam2) {
	case joaat("coquette2"):
		gameplay::clear_bit(&iVar0, 0);
		gameplay::clear_bit(&iVar0, 1);
		break;

	case joaat("kalahari"):
		gameplay::clear_bit(&iVar0, 0);
		gameplay::clear_bit(&iVar0, 1);
		gameplay::clear_bit(&iVar0, 2);
		break;

	case joaat("voltic"):
		gameplay::clear_bit(&iVar0, 0);
		gameplay::clear_bit(&iVar0, 1);
		gameplay::clear_bit(&iVar0, 2);
		break;

	case joaat("banshee"): gameplay::clear_bit(&iVar0, 0); break;

	case joaat("stalion"):
		gameplay::clear_bit(&iVar0, 0);
		gameplay::clear_bit(&iVar0, 1);
		gameplay::clear_bit(&iVar0, 2);
		break;

	case joaat("chino"):
		gameplay::clear_bit(&iVar0, 0);
		gameplay::clear_bit(&iVar0, 1);
		gameplay::clear_bit(&iVar0, 2);
		break;
	}
	iVar1 = 2147483647 - iVar0;
	iVar0 &= uParam0;
	iVar1 = *uParam1 & iVar1;
	*uParam1 = iVar0 | iVar1;
}

// Position - 0x25BB2
int func_364(var *uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7) {
	int iVar0;
	var *uVar1;
	struct<97> Var5;
	int iVar103;
	int iVar104;
	bool bVar105;
	char cVar106[16];
	int iVar110;

	if (func_25(iParam1)) {
		Var5.f_11 = 12;
		Var5.f_31 = 49;
		Var5.f_81 = 2;
		func_24(iParam1, &Var5, iParam7);
		if (Var5 == 0) {
			return 1;
		}
		if (entity::does_entity_exist(*uParam0)) {
			if (entity::get_entity_model(*uParam0) != Var5) {
			}
			return 1;
		}
		if (iParam1 == 0 && !Global_101700.f_2095.f_539.f_3544 && Global_101700.f_8044.f_99.f_58[131]) {
			Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/] == Var5) {
			streaming::request_model(Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/]);
			if (streaming::has_model_loaded(Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/])) {
				*uParam0 = vehicle::create_vehicle(Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/],
												   vParam2, fParam5, 0, 0);
				vehicle::set_vehicle_on_ground_properly(*uParam0, 1084227584);
				vehicle::_0xAB04325045427AAE(*uParam0, 0);
				vehicle::_0x428BACCDF5E26EAD(*uParam0, 0);
				vehicle::set_vehicle_has_strong_axles(*uParam0, 1);
				entity::set_entity_health(*uParam0, 1250);
				vehicle::set_vehicle_engine_health(*uParam0, 1250f);
				vehicle::set_vehicle_petrol_tank_health(*uParam0, 1250f);
				Var5.f_3 = 1250;
				vehicle::set_vehicle_colours(*uParam0, Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_5,
											 Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_6);
				vehicle::set_vehicle_extra_colours(*uParam0,
												   Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_7,
												   Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_8);
				vehicle::set_vehicle_dirt_level(*uParam0, Var5.f_2);
				iVar103 = 0;
				while (iVar103 < 12) {
					vehicle::set_vehicle_extra(
						*uParam0, iVar103 + 1,
						!Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_11[iVar103]);
					iVar103++;
				}
				if (Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_24) {
					vehicle::set_convertible_roof(*uParam0,
												  Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_368(&uVar1, &iVar0)) {
					vehicle::set_vehicle_number_plate_text(*uParam0, &uVar1);
					vehicle::set_vehicle_number_plate_text_index(*uParam0, iVar0);
				}
				else {
					vehicle::set_vehicle_number_plate_text(
						*uParam0, &Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_27);
					if (Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26 >= 0 &&
						Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26 <
							vehicle::get_number_of_vehicle_number_plates()) {
						vehicle::set_vehicle_number_plate_text_index(
							*uParam0, Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				vehicle::set_vehicle_tyre_smoke_color(
					*uParam0, Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_84,
					Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_85,
					Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_86);
				vehicle::set_vehicle_tyres_can_burst(*uParam0,
													 Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_88);
				vehicle::set_vehicle_window_tint(*uParam0,
												 Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_87);
				vehicle::_set_vehicle_neon_lights_colour(
					*uParam0, Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_93,
					Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_94,
					Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_95);
				vehicle::_set_vehicle_neon_light_enabled(
					*uParam0, 2,
					gameplay::is_bit_set(Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 28));
				vehicle::_set_vehicle_neon_light_enabled(
					*uParam0, 3,
					gameplay::is_bit_set(Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 29));
				vehicle::_set_vehicle_neon_light_enabled(
					*uParam0, 0,
					gameplay::is_bit_set(Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 30));
				vehicle::_set_vehicle_neon_light_enabled(
					*uParam0, 1,
					gameplay::is_bit_set(Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (vehicle::get_vehicle_livery_count(*uParam0) > 1 &&
					Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_89 >= 0) {
					vehicle::set_vehicle_livery(*uParam0,
												Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90 > -1) {
					if (!vehicle::is_this_model_a_bicycle(entity::get_entity_model(*uParam0))) {
						if (vehicle::is_this_model_a_bike(entity::get_entity_model(*uParam0))) {
							if (Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90 == 6) {
								vehicle::set_vehicle_wheel_type(
									*uParam0, Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else {
							vehicle::set_vehicle_wheel_type(
								*uParam0, Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_306(uParam0, &Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_31,
						 &Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_81);
				vehicle::set_vehicle_enveff_scale(*uParam0, Var5.f_96);
				if (iParam1 == 2) {
					if (entity::get_entity_model(*uParam0) == joaat("bodhi2")) {
						func_366(uParam0);
					}
				}
				if (iParam6) {
					streaming::set_model_as_no_longer_needed(
						Global_101700.f_2095.f_539.f_1635[0 /*295*/][iParam1 /*98*/]);
				}
				func_365(*uParam0, iParam1);
				return 1;
			}
		}
		else if (Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/] == Var5) {
			streaming::request_model(Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/]);
			if (streaming::has_model_loaded(Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/])) {
				*uParam0 = vehicle::create_vehicle(Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/],
												   vParam2, fParam5, 0, 0);
				vehicle::set_vehicle_on_ground_properly(*uParam0, 1084227584);
				vehicle::_0xAB04325045427AAE(*uParam0, 0);
				vehicle::_0x428BACCDF5E26EAD(*uParam0, 0);
				vehicle::set_vehicle_has_strong_axles(*uParam0, 1);
				entity::set_entity_health(*uParam0, 1250);
				vehicle::set_vehicle_engine_health(*uParam0, 1250f);
				vehicle::set_vehicle_petrol_tank_health(*uParam0, 1250f);
				Var5.f_3 = 1250;
				vehicle::set_vehicle_colours(*uParam0, Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_5,
											 Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_6);
				vehicle::set_vehicle_extra_colours(*uParam0,
												   Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_7,
												   Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_8);
				vehicle::set_vehicle_dirt_level(*uParam0, Var5.f_2);
				iVar104 = 0;
				while (iVar104 < 12) {
					vehicle::set_vehicle_extra(
						*uParam0, iVar104 + 1,
						!Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_11[iVar104]);
					iVar104++;
				}
				if (Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_24) {
					vehicle::set_convertible_roof(*uParam0,
												  Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_368(&uVar1, &iVar0)) {
					vehicle::set_vehicle_number_plate_text(*uParam0, &uVar1);
					vehicle::set_vehicle_number_plate_text_index(*uParam0, iVar0);
				}
				else {
					vehicle::set_vehicle_number_plate_text(
						*uParam0, &Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_27);
					if (Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26 >= 0 &&
						Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26 <
							vehicle::get_number_of_vehicle_number_plates()) {
						vehicle::set_vehicle_number_plate_text_index(
							*uParam0, Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				vehicle::set_vehicle_tyre_smoke_color(
					*uParam0, Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_84,
					Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_85,
					Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_86);
				vehicle::set_vehicle_tyres_can_burst(*uParam0,
													 Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_88);
				vehicle::set_vehicle_window_tint(*uParam0,
												 Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_87);
				vehicle::_set_vehicle_neon_lights_colour(
					*uParam0, Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_93,
					Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_94,
					Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_95);
				vehicle::_set_vehicle_neon_light_enabled(
					*uParam0, 2,
					gameplay::is_bit_set(Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 28));
				vehicle::_set_vehicle_neon_light_enabled(
					*uParam0, 3,
					gameplay::is_bit_set(Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 29));
				vehicle::_set_vehicle_neon_light_enabled(
					*uParam0, 0,
					gameplay::is_bit_set(Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 30));
				vehicle::_set_vehicle_neon_light_enabled(
					*uParam0, 1,
					gameplay::is_bit_set(Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (vehicle::get_vehicle_livery_count(*uParam0) > 1 &&
					Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_89 >= 0) {
					vehicle::set_vehicle_livery(*uParam0,
												Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90 > -1) {
					if (!vehicle::is_this_model_a_bicycle(entity::get_entity_model(*uParam0))) {
						if (vehicle::is_this_model_a_bike(entity::get_entity_model(*uParam0))) {
							if (Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90 == 6) {
								vehicle::set_vehicle_wheel_type(
									*uParam0, Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else {
							vehicle::set_vehicle_wheel_type(
								*uParam0, Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_306(uParam0, &Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_31,
						 &Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_81);
				vehicle::set_vehicle_enveff_scale(*uParam0, Var5.f_96);
				if (iParam1 == 2) {
					if (entity::get_entity_model(*uParam0) == joaat("bodhi2")) {
						func_366(uParam0);
					}
				}
				if (iParam6) {
					streaming::set_model_as_no_longer_needed(
						Global_101700.f_2095.f_539.f_1635[1 /*295*/][iParam1 /*98*/]);
				}
				func_365(*uParam0, iParam1);
				return 1;
			}
		}
		else {
			streaming::request_model(Var5);
			if (streaming::has_model_loaded(Var5)) {
				bVar105 = true;
				*uParam0 = vehicle::create_vehicle(Var5, vParam2, fParam5, 1, 1);
				vehicle::set_vehicle_on_ground_properly(*uParam0, 1084227584);
				vehicle::_0xAB04325045427AAE(*uParam0, 0);
				vehicle::_0x428BACCDF5E26EAD(*uParam0, 0);
				vehicle::set_vehicle_has_strong_axles(*uParam0, 1);
				StringCopy(&cVar106, vehicle::get_vehicle_number_plate_text(*uParam0), 16);
				entity::set_entity_health(*uParam0, 1250);
				vehicle::set_vehicle_engine_health(*uParam0, 1250f);
				vehicle::set_vehicle_petrol_tank_health(*uParam0, 1250f);
				Var5.f_3 = 1250;
				vehicle::set_vehicle_colours(*uParam0, Var5.f_5, Var5.f_6);
				vehicle::set_vehicle_extra_colours(*uParam0, Var5.f_7, Var5.f_8);
				vehicle::set_vehicle_dirt_level(*uParam0, Var5.f_2);
				iVar110 = 0;
				while (iVar110 < 12) {
					vehicle::set_vehicle_extra(*uParam0, iVar110 + 1, !Var5.f_11[iVar110]);
					iVar110++;
				}
				if (Var5.f_24) {
					vehicle::set_convertible_roof(*uParam0, Var5.f_24);
				}
				if (func_368(&uVar1, &iVar0)) {
					vehicle::set_vehicle_number_plate_text(*uParam0, &uVar1);
					vehicle::set_vehicle_number_plate_text_index(*uParam0, iVar0);
				}
				else {
					vehicle::set_vehicle_number_plate_text(*uParam0, &Var5.f_27);
					if (Var5.f_26 >= 0 && Var5.f_26 < vehicle::get_number_of_vehicle_number_plates()) {
						vehicle::set_vehicle_number_plate_text_index(*uParam0, Var5.f_26);
					}
				}
				vehicle::set_vehicle_tyre_smoke_color(*uParam0, Var5.f_84, Var5.f_85, Var5.f_86);
				vehicle::set_vehicle_tyres_can_burst(*uParam0, Var5.f_88);
				vehicle::set_vehicle_window_tint(*uParam0, Var5.f_87);
				vehicle::_set_vehicle_neon_lights_colour(*uParam0, Var5.f_93, Var5.f_94, Var5.f_95);
				vehicle::_set_vehicle_neon_light_enabled(*uParam0, 2, gameplay::is_bit_set(Var5.f_92, 28));
				vehicle::_set_vehicle_neon_light_enabled(*uParam0, 3, gameplay::is_bit_set(Var5.f_92, 29));
				vehicle::_set_vehicle_neon_light_enabled(*uParam0, 0, gameplay::is_bit_set(Var5.f_92, 30));
				vehicle::_set_vehicle_neon_light_enabled(*uParam0, 1, gameplay::is_bit_set(Var5.f_92, 31));
				if (vehicle::get_vehicle_livery_count(*uParam0) > 1 && Var5.f_89 >= 0) {
					vehicle::set_vehicle_livery(*uParam0, Var5.f_89);
				}
				if (Var5.f_90 > -1) {
					if (!vehicle::is_this_model_a_bicycle(entity::get_entity_model(*uParam0))) {
						if (vehicle::is_this_model_a_bike(entity::get_entity_model(*uParam0))) {
							if (Var5.f_90 == 6) {
								vehicle::set_vehicle_wheel_type(*uParam0, Var5.f_90);
							}
						}
						else {
							vehicle::set_vehicle_wheel_type(*uParam0, Var5.f_90);
						}
					}
				}
				func_306(uParam0, &Var5.f_31, &Var5.f_81);
				vehicle::set_vehicle_enveff_scale(*uParam0, Var5.f_96);
				if (iParam1 == 1) {
					if (entity::get_entity_model(*uParam0) == joaat("bagger") && !Global_101700.f_8044.f_99.f_58[118]) {
						vehicle::set_vehicle_number_plate_text(*uParam0, &cVar106);
						bVar105 = false;
					}
				}
				else if (iParam1 == 2) {
					if (entity::get_entity_model(*uParam0) == joaat("bodhi2")) {
						func_366(uParam0);
					}
				}
				else if (iParam1 == 0 && !Global_101700.f_2095.f_539.f_3544 && Global_101700.f_8044.f_99.f_58[131] &&
						 entity::get_entity_model(*uParam0) == joaat("tailgater")) {
					vehicle::set_vehicle_mod(*uParam0, 6, 1, 0);
					vehicle::set_vehicle_mod(*uParam0, 14, 7, 0);
					vehicle::set_vehicle_mod(*uParam0, 11, 2, 0);
					vehicle::set_vehicle_mod(*uParam0, 2, 3, 0);
					vehicle::set_vehicle_mod(*uParam0, 7, 5, 0);
					vehicle::set_vehicle_mod(*uParam0, 0, 0, 0);
					vehicle::set_vehicle_mod(*uParam0, 3, 3, 0);
					vehicle::set_vehicle_mod(*uParam0, 13, 1, 0);
					vehicle::set_vehicle_mod(*uParam0, 4, 3, 0);
					vehicle::set_vehicle_mod(*uParam0, 12, 2, 0);
					vehicle::toggle_vehicle_mod(*uParam0, 22, 1);
					vehicle::set_vehicle_wheel_type(*uParam0, 2);
					vehicle::set_vehicle_mod(*uParam0, 23, 11, 0);
					vehicle::set_vehicle_window_tint(*uParam0, 2);
					Global_101700.f_2095.f_539.f_3544 = 1;
					func_188(iParam1, uParam0, 0, 1);
				}
				if (iParam6) {
					streaming::set_model_as_no_longer_needed(Var5);
				}
				if (bVar105) {
					func_365(*uParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x269F0
void func_365(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9) {
		if (!entity::does_entity_exist(Global_89155[iVar0])) {
			Global_89155[iVar0] = iParam0;
			Global_89165[iVar0] = iParam1;
			Global_89175[iVar0] = entity::get_entity_model(iParam0);
			if (vehicle::is_this_model_a_car(Global_89175[iVar0])) {
				Global_89203[iParam1 /*3*/][0] = -1;
			}
			else {
				Global_89203[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8) {
		}
		iVar0++;
	}
}

// Position - 0x26A72
void func_366(var *uParam0) {
	if (!func_367(*uParam0)) {
		vehicle::set_vehicle_extra(*uParam0, 5, !Global_101700.f_8044.f_99.f_58[119]);
	}
}

// Position - 0x26A9D
bool func_367(int iParam0) { return vehicle::is_vehicle_extra_turned_on(iParam0, 5); }

// Position - 0x26AAC
bool func_368(var *uParam0, int iParam1) {
	if (network::network_is_game_in_progress()) {
	}
	else if (Global_101700.f_19077.f_261) {
		*uParam0 = {Global_101700.f_19077.f_267};
		*iParam1 = Global_101700.f_19077.f_271;
		return true;
	}
	return false;
}

// Position - 0x26AED
bool func_369(int iParam0, vector3 vParam1, int iParam4) {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	if (iParam4 && cam::is_screen_faded_out() &&
		script::_get_number_of_instances_of_script_with_name_hash(joaat("startup_positioning")) > 0) {
		func_380("player is in vehicle bounds - \"startup_positioning\" is "
				 "running.");
		return false;
	}
	gameplay::get_model_dimensions(iParam0, &vVar0, &vVar3);
	fVar6 = gameplay::get_distance_between_coords(vVar3, vVar0, 1);
	if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1), vParam1, 1) <
		fVar6 * 0.5f) {
		func_361("player is in vehicle bounds - fLength: ", fVar6);
		func_361(
			"player is in vehicle bounds - fDistance: ",
			gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1), vParam1, 1));
		return true;
	}
	return false;
}

// Position - 0x26B7F
bool func_370(int iParam0, int iParam1, vector3 vParam2, float fParam5) {
	int iVar0;
	struct<82> Var1;
	int iVar99;

	if (!func_25(iParam0)) {
		return false;
	}
	Var1.f_11 = 12;
	Var1.f_31 = 49;
	Var1.f_81 = 2;
	iVar99 = 0;
	func_24(iParam0, &Var1, iParam1);
	iVar99 = Var1;
	if (iVar99 != 0) {
		iVar0 = 0;
		while (iVar0 < 9) {
			if (entity::does_entity_exist(Global_89155[iVar0]) &&
				vehicle::is_vehicle_driveable(Global_89155[iVar0], 0)) {
				if (entity::get_entity_model(Global_89155[iVar0]) == iVar99 && Global_89165[iVar0] == iParam0) {
					if (fParam5 == -1f ||
						gameplay::get_distance_between_coords(entity::get_entity_coords(Global_89155[iVar0], 0),
															  vParam2, 1) <= fParam5) {
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

// Position - 0x26C44
bool func_371(int iParam0) {
	int iVar0;
	int iVar1;

	if (iParam0 == 20) {
		if (Local_674.f_4 == joaat("frogger2")) {
			if (func_373(Local_674.f_4, -1) || func_372(Local_674.f_4, -1) ||
				script::_get_number_of_instances_of_script_with_name_hash(joaat("exile2")) > 0 || !func_353(30)) {
				return true;
			}
		}
	}
	if (iParam0 == 24) {
		if (entity::does_entity_exist(Global_68531.f_484[20]) && !entity::is_entity_dead(Global_68531.f_484[20], 0) &&
			vehicle::is_vehicle_driveable(Global_68531.f_484[20], 0)) {
			if (Local_674.f_4 == entity::get_entity_model(Global_68531.f_484[20])) {
				vehicle::get_vehicle_colours(Global_68531.f_484[20], &iVar0, &iVar1);
				if (iVar0 == Local_674.f_10 && iVar1 == Local_674.f_11) {
					func_209(20);
				}
			}
		}
	}
	return false;
}

// Position - 0x26D2C
bool func_372(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = 2174;
	iVar1 = vehicle::get_closest_vehicle(Local_674, 200f, iParam0, iVar0);
	if (entity::does_entity_exist(iVar1) && vehicle::is_vehicle_driveable(iVar1, 0) &&
		entity::get_entity_model(iVar1) == iParam0) {
		if (iParam1 == -1 || vehicle::get_vehicle_livery(iVar1) == iParam1) {
			return true;
		}
	}
	return false;
}

// Position - 0x26D8B
bool func_373(int iParam0, int iParam1) {
	var uVar0[50];
	int iVar51;
	int iVar52;

	iVar52 = ped::get_ped_nearby_vehicles(player::player_ped_id(), &uVar0);
	iVar51 = 0;
	while (iVar51 < iVar52) {
		if (entity::does_entity_exist(uVar0[iVar51]) && vehicle::is_vehicle_driveable(uVar0[iVar51], 0) &&
			entity::get_entity_model(uVar0[iVar51]) == iParam0) {
			if (iParam1 == -1 || vehicle::get_vehicle_livery(uVar0[iVar51]) == iParam1) {
				return true;
			}
		}
		iVar51++;
	}
	return false;
}

// Position - 0x26E06
int func_374(int iParam0) {
	if (Global_35781 == 15) {
		return 0;
	}
	if (func_288(iParam0)) {
		return 0;
	}
	return 1;
}

// Position - 0x26E28
var func_375() { return Global_68531.f_138; }

// Position - 0x26E36
float func_376(int iParam0) {
	switch (iParam0) {
	case 57: return -0.7f;

	case 63: return -0.8f;
	}
	return 0f;
}

// Position - 0x26E68
void func_377(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_54(*iParam0);
	iVar1 = func_56(*iParam0);
	iVar2 = func_296(*iParam0);
	iVar3 = func_295(*iParam0);
	iVar4 = func_294(*iParam0);
	iVar5 = func_293(*iParam0);
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
	iVar6 = func_53(iVar1, iVar0);
	while (iVar2 > iVar6) {
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11) {
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_53(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11) {
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_378(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

// Position - 0x26FEA
void func_378(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_59(iParam0, iParam1);
	func_58(iParam0, iParam2);
	func_57(iParam0, iParam3);
	func_51(iParam0, iParam5);
	func_52(iParam0, iParam4);
	func_50(iParam0, iParam6);
}

// Position - 0x27022
void func_379(int iParam0) {
	if (gameplay::is_bit_set(Local_674.f_9, 13)) {
		func_399(iParam0, 0);
	}
}

// Position - 0x2703F
void func_380(char *sParam0) {
	if (!gameplay::is_string_null_or_empty(sParam0)) {
	}
}

// Position - 0x27051
void func_381(char *sParam0, int iParam1) {
	if (!gameplay::is_string_null_or_empty(sParam0)) {
		if (iParam1 != 0) {
		}
	}
}

// Position - 0x27069
void func_382(int iParam0) {
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	int iVar6;

	if (ped::is_ped_injured(player::player_ped_id())) {
		return;
	}
	iVar0 = 0;
	iVar5 = -1;
	iVar6 = 1193854962;
	switch (iParam0) {
	case 12:
	case 13:
		iVar0 = !func_66(iParam0, 5);
		vVar1 = {-961.42f, -2794.47f, 12.96f};
		fVar4 = -209.22f;
		iVar5 = 0;
		iVar6 = 160628940;
		break;

	case 15:
	case 16:
	case 17:
		iVar0 = !func_66(iParam0, 5);
		vVar1 = {-827.93f, -1368.14f, 3.9982f};
		fVar4 = -68.75f;
		iVar5 = 1;
		break;

	case 18:
	case 19:
		iVar0 = !func_66(iParam0, 5);
		iVar0 = 1;
		vVar1 = {-710.07f, -1414.31f, 4f};
		fVar4 = -41.25f;
		iVar5 = 2;
		break;

	case 21:
		iVar0 = !func_66(iParam0, 5);
		vVar1 = {-66.21f, 77.76f, 70.51f};
		fVar4 = -27f;
		iVar5 = 3;
		break;

	case 22:
		iVar0 = !func_66(iParam0, 5);
		vVar1 = {-76.02f, -1825.61f, 25.88f};
		fVar4 = -129.67f;
		iVar5 = 4;
		break;

	case 23:
		iVar0 = !func_66(iParam0, 5);
		vVar1 = {-218.68f, -1165.76f, 21.99f};
		fVar4 = 89.95f;
		iVar5 = 5;
		break;
	}
	if (iVar0 &&
		gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1), vVar1, 1) < 250f) {
		if (!entity::does_entity_exist(uLocal_858[iVar5])) {
			streaming::request_model(iVar6);
			iLocal_865 = 1;
			if (streaming::has_model_loaded(iVar6)) {
				if (iLocal_865) {
					uLocal_858[iVar5] = object::create_object_no_offset(iVar6, vVar1, 0, 1, 0);
					entity::set_entity_rotation(uLocal_858[iVar5], 0f, 0f, fVar4, 2, 1);
					entity::set_entity_can_be_damaged(uLocal_858[iVar5], 0);
					entity::freeze_entity_position(uLocal_858[iVar5], 1);
					streaming::set_model_as_no_longer_needed(iVar6);
					iLocal_865 = 0;
				}
			}
		}
	}
	else if (iVar5 != -1) {
		if (entity::does_entity_exist(uLocal_858[iVar5]) && !entity::is_entity_on_screen(uLocal_858[iVar5]) &&
			gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1), vVar1, 1) >
				255f) {
			object::delete_object(&uLocal_858[iVar5]);
			if (iLocal_865) {
				streaming::set_model_as_no_longer_needed(iVar6);
				iLocal_865 = 0;
			}
		}
	}
}

// Position - 0x272C2
void func_383(int iParam0) {
	int iVar0;

	iVar0 = 0;
	if (func_66(iParam0, 0) && (!gameplay::is_bit_set(Local_674.f_9, 14) || func_66(iParam0, 5))) {
		iVar0 = 1;
	}
	if (Global_68531.f_346[iParam0] != iVar0) {
		if (!func_21(Local_674.f_15, 0f, 0f, 0f, 0)) {
			if (!iVar0) {
				if (Global_68531.f_346[iParam0]) {
					ped::remove_scenario_blocking_area(Global_68531.f_415[iParam0], 0);
				}
			}
			else if (!Global_68531.f_346[iParam0]) {
				Global_68531.f_415[iParam0] =
					ped::add_scenario_blocking_area(Local_674.f_15, Local_674.f_18, 0, 1, 1, 1);
			}
		}
		Global_68531.f_346[iParam0] = iVar0;
	}
}

// Position - 0x2737F
void func_384(int iParam0) {
	int iVar0;

	if (gameplay::is_bit_set(Local_674.f_9, 15)) {
		if (func_66(iParam0, 0) && !func_66(iParam0, 5)) {
			iVar0 = 145;
			if (gameplay::is_bit_set(Local_674.f_9, 16)) {
				iVar0 = func_385(9);
			}
			else if (gameplay::is_bit_set(Local_674.f_9, 18)) {
				iVar0 = func_385(4);
			}
			if (iVar0 == Local_674.f_12) {
				func_257(iParam0, 5, 1);
			}
		}
	}
}

// Position - 0x273F0
var func_385(int iParam0) { return Global_101700.f_23863[iParam0 /*4*/]; }

// Position - 0x27403
void func_386(int iParam0) {
	if (func_66(iParam0, 0) && !func_66(iParam0, 3)) {
		if (gameplay::is_bit_set(Local_674.f_9, 4)) {
			func_257(iParam0, 3, 1);
		}
		else {
			func_257(iParam0, 3, 1);
		}
	}
}

// Position - 0x27442
void func_387(int iParam0) {
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = true;
	if (func_66(iParam0, 0) && iLocal_673) {
		if (gameplay::is_bit_set(Local_674.f_9, 0) || gameplay::is_bit_set(Local_674.f_9, 2) && !func_66(iParam0, 2)) {
			if (!gameplay::is_bit_set(Local_674.f_9, 21) || !func_27(0) && !func_27(3) && !func_27(2) && !func_27(4) &&
																!func_27(9) && !func_27(10) && !func_27(13) &&
																!func_27(14))
				&&(player::get_player_wanted_level(player::player_id()) == 0 || func_66(iParam0, 5) ||
				   !gameplay::is_bit_set(Local_674.f_9, 28)) {
					bVar0 = false;
					if (!ui::does_blip_exist(Global_68531.f_208[iParam0])) {
						if (func_353(0)) {
							if (gameplay::is_bit_set(Local_674.f_9, 14) && !func_66(iParam0, 5)) {
								Global_68531.f_208[iParam0] = ui::add_blip_for_coord(Local_695.f_55);
								if (Local_695.f_58 != -1) {
									ui::set_blip_sprite(Global_68531.f_208[iParam0], Local_695.f_58);
									if (!gameplay::is_string_null_or_empty(&Local_695.f_59)) {
										ui::set_blip_name_from_text_file(Global_68531.f_208[iParam0], &Local_695.f_59);
									}
								}
							}
							else if (func_66(iParam0, 5) &&
									 (iParam0 == 21 || iParam0 == 22 || iParam0 == 23 || iParam0 == 14)) {
								Global_68531.f_208[iParam0] = ui::add_blip_for_coord(Local_695.f_55);
								if (Local_674.f_13 != -1) {
									ui::set_blip_sprite(Global_68531.f_208[iParam0], Local_674.f_13);
									if (!gameplay::is_string_null_or_empty(&Local_695.f_59)) {
										ui::set_blip_name_from_text_file(Global_68531.f_208[iParam0], &Local_695.f_59);
									}
									if (Local_674.f_12 == 0) {
										iVar1 = 42;
									}
									else if (Local_674.f_12 == 1) {
										iVar1 = 43;
									}
									else if (Local_674.f_12 == 2) {
										iVar1 = 44;
									}
									ui::set_blip_colour(Global_68531.f_208[iParam0], iVar1);
								}
							}
							else {
								Global_68531.f_208[iParam0] = ui::add_blip_for_coord(Local_674);
								if (Local_674.f_13 != -1) {
									ui::set_blip_sprite(Global_68531.f_208[iParam0], Local_674.f_13);
									if (!gameplay::is_string_null_or_empty(&Local_695.f_59)) {
										ui::set_blip_name_from_text_file(Global_68531.f_208[iParam0], &Local_695.f_59);
									}
									if (iParam0 == 12 || iParam0 == 13 || iParam0 == 14 || iParam0 == 15 ||
										iParam0 == 16 || iParam0 == 17 || iParam0 == 18 || iParam0 == 19 ||
										iParam0 == 20) {
										if (Local_674.f_12 == 0) {
											iVar2 = 42;
										}
										else if (Local_674.f_12 == 1) {
											iVar2 = 43;
										}
										else if (Local_674.f_12 == 2) {
											iVar2 = 44;
										}
										ui::set_blip_colour(Global_68531.f_208[iParam0], iVar2);
									}
								}
							}
							ui::set_blip_as_short_range(Global_68531.f_208[iParam0],
														!gameplay::is_bit_set(Local_674.f_9, 1));
							ui::set_blip_flashes(Global_68531.f_208[iParam0], 0);
							ui::set_blip_priority(Global_68531.f_208[iParam0], 3);
						}
					}
				}
		}
	}
	if (bVar0) {
		if (ui::does_blip_exist(Global_68531.f_208[iParam0])) {
			ui::remove_blip(&Global_68531.f_208[iParam0]);
		}
	}
}

// Position - 0x277BC
void func_388(int iParam0) {
	if (func_66(iParam0, 0) && !func_66(iParam0, 1)) {
		if (func_66(iParam0, 4)) {
			if (gameplay::is_bit_set(Local_674.f_9, 3)) {
				func_389(&Local_674.f_5, 0, 0, -1, 10000, 7, 0, 0, 0);
				func_257(iParam0, 1, 1);
			}
			else {
				func_257(iParam0, 1, 1);
			}
		}
	}
}

// Position - 0x27818
void func_389(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8) {
	func_217(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x27839
void func_390(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!gameplay::is_bit_set(Local_674.f_9, 7) || Local_674.f_12 == iLocal_672) {
		iLocal_673 = 1;
	}
	else {
		iLocal_673 = 0;
	}
	if (func_27(14)) {
		iLocal_673 = 0;
	}
	if (iLocal_673 && !ped::is_ped_injured(player::player_ped_id()) && gameplay::is_bit_set(Local_674.f_9, 14)) {
		if (Local_402.f_2 == 0 && Local_402.f_3 == 0) {
			if (uLocal_941[iParam0] < Local_402.f_1 || Local_402 == iParam0) {
				if (Local_402 != iParam0) {
					Local_402.f_8 = {Local_674};
					Local_402.f_29 = {Local_695};
					Local_402 = iParam0;
					iVar0 = 0;
					while (iVar0 < Global_68531.f_592) {
						Global_68531.f_592[iVar0] = -1;
						iVar0++;
					}
					Local_402.f_6 = -1;
					if (Local_402 == 12 || Local_402 == 13 || Local_402 == 14) {
						Local_402.f_6 = 0;
					}
					else if (Local_402 == 15 || Local_402 == 16 || Local_402 == 17) {
						Local_402.f_6 = 1;
					}
					else if (Local_402 == 18 || Local_402 == 19 || Local_402 == 20) {
						Local_402.f_6 = 2;
					}
					else if (Local_402 == 21 || Local_402 == 22 || Local_402 == 23) {
						Local_402.f_6 = 3;
					}
					iVar0 = 0;
					while (iVar0 < 312) {
						iVar2 = func_128(iVar0, -1);
						if (iVar2 != 0) {
							if (iVar1 < Global_68531.f_592) {
								switch (Local_402.f_6) {
								case 3:
									if (func_64(iVar2)) {
										Global_68531.f_592[iVar1] = iVar0;
										iVar1++;
									}
									break;

								case 2:
									if (vehicle::is_this_model_a_heli(iVar2)) {
										Global_68531.f_592[iVar1] = iVar0;
										iVar1++;
									}
									break;

								case 1:
									if (vehicle::is_this_model_a_boat(iVar2) ||
										vehicle::_is_this_model_an_emergency_boat(iVar2) ||
										iVar2 == joaat("submersible2")) {
										Global_68531.f_592[iVar1] = iVar0;
										iVar1++;
									}
									break;

								case 0:
									if (func_65(iVar2)) {
										Global_68531.f_592[iVar1] = iVar0;
										iVar1++;
									}
									break;
								}
							}
						}
						iVar0++;
					}
				}
				Local_402.f_1 = uLocal_941[iParam0];
			}
		}
	}
	else if (Local_402 == iParam0) {
		Local_402 = -1;
		Local_402.f_1 = 99999.99f;
	}
	if (!gameplay::is_bit_set(uLocal_48[iParam0], 0)) {
		if (entity::does_entity_exist(Global_68531.f_139[iParam0])) {
			if (vehicle::is_vehicle_driveable(Global_68531.f_139[iParam0], 0)) {
				if (!ped::is_ped_injured(player::player_ped_id())) {
					if (ped::is_ped_in_vehicle(player::player_ped_id(), Global_68531.f_139[iParam0], 0)) {
						if (!gameplay::is_bit_set(uLocal_48[iParam0], 1) ||
							gameplay::is_bit_set(uLocal_48[iParam0], 3)) {
							gameplay::set_bit(&uLocal_48[iParam0], 0);
							func_257(iParam0, 4, 1);
							func_257(iParam0, 2, 1);
						}
					}
					else {
						gameplay::set_bit(&uLocal_48[iParam0], 3);
					}
				}
			}
		}
	}
	if (iParam0 == 14) {
		if (entity::does_entity_exist(Global_68531.f_484[iParam0]) &&
			vehicle::is_vehicle_driveable(Global_68531.f_484[iParam0], 0) &&
			entity::get_entity_model(Global_68531.f_484[iParam0]) == joaat("hydra")) {
			if (!iLocal_1030) {
				if (entity::is_entity_in_angled_area(Global_68531.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f,
													 1724.511f, 3328.808f, 39.59781f, 21f, 0, 1, 0)) {
					vehicle::_0x30D779DE7C4F6DD3(Global_68531.f_484[iParam0], 0f);
					iLocal_1030 = 1;
				}
			}
			else if (!entity::is_entity_in_angled_area(Global_68531.f_484[iParam0], 1738.686f, 3283.423f, 45.24283f,
													   1724.511f, 3328.808f, 39.59781f, 21f, 0, 1, 0)) {
				vehicle::_0x30D779DE7C4F6DD3(Global_68531.f_484[iParam0], 1f);
				iLocal_1030 = 0;
			}
		}
		else {
			iLocal_1030 = 0;
		}
	}
}

// Position - 0x27C5F
bool func_391() { return true; }

// Position - 0x27C68
var func_392(var *uParam0, int iParam1) {
	uParam0->f_80 = 0;
	uParam0->f_69 = 0;
	StringCopy(&uParam0->f_59, "", 16);
	switch (iParam1) {
	case 12:
		*uParam0 = {-952.8823f, -2795.896f, 12.13233f};
		uParam0->f_3 = {-966.7308f, -2787.975f, 16.13232f};
		uParam0->f_6 = 17.5625f;
		uParam0->f_44 = {-966.1285f, -2794.789f, 12.9648f};
		uParam0->f_47 = 146.6324f;
		uParam0->f_14 = {-1652.454f, -3059.149f, 24.932f};
		uParam0->f_14.f_3 = {-2.5815f, 0f, -176.2374f};
		uParam0->f_14.f_12 = 38.2303f;
		uParam0->f_14.f_6 = {-1651.547f, -3060.478f, 23.8077f};
		uParam0->f_14.f_6.f_3 = {-2.5815f, 0f, -176.2374f};
		uParam0->f_14.f_13 = 0.2f;
		uParam0->f_14.f_14 = 7f;
		uParam0->f_29 = {-1650.431f, -3177.229f, 16.9898f};
		uParam0->f_29.f_3 = {-4.9147f, 0f, -11.6415f};
		uParam0->f_29.f_12 = 38.2303f;
		uParam0->f_29.f_6 = {-1647.495f, -3173.728f, 16.6439f};
		uParam0->f_29.f_6.f_3 = {-4.9147f, 0f, -11.6415f};
		uParam0->f_29.f_13 = 0.2f;
		uParam0->f_14.f_14 = 11f;
		uParam0->f_7 = {-1625.911f, -3167.556f, 11.11455f};
		uParam0->f_10 = {-1688.58f, -3130.741f, 20.13538f};
		uParam0->f_13 = 60.1875f;
		uParam0->f_48 = {-1625.911f, -3167.556f, 11.11455f};
		uParam0->f_51 = {-1688.58f, -3130.741f, 20.13538f};
		uParam0->f_54 = 60.1875f;
		uParam0->f_55 = {-966.084f, -2793.613f, 12.9648f};
		uParam0->f_58 = 372;
		StringCopy(&uParam0->f_59, "HANGAR_NAME", 16);
		uParam0->f_67 = 1378600;
		StringCopy(&uParam0->f_63, "HANGAR", 16);
		uParam0->f_80 = 1;
		break;

	case 13:
		*uParam0 = {-952.8823f, -2795.896f, 12.13233f};
		uParam0->f_3 = {-966.7308f, -2787.975f, 16.13232f};
		uParam0->f_6 = 17.5625f;
		uParam0->f_44 = {-966.1285f, -2794.789f, 12.9648f};
		uParam0->f_47 = 146.6324f;
		uParam0->f_14 = {-1184.2f, -3345f, 17.5f};
		uParam0->f_14.f_3 = {3.5f, 0f, 109f};
		uParam0->f_14.f_12 = 30.3f;
		uParam0->f_14.f_6 = {-1184.3f, -3345f, 16.6f};
		uParam0->f_14.f_6.f_3 = {3.5f, 0f, 109f};
		uParam0->f_14.f_13 = 0.2f;
		uParam0->f_14.f_14 = 7f;
		uParam0->f_29 = {-1272.6f, -3414.7f, 15.6f};
		uParam0->f_29.f_3 = {-2.1f, 0f, -9.9f};
		uParam0->f_29.f_12 = 37.8f;
		uParam0->f_29.f_6 = {-1274f, -3414.4f, 15.6f};
		uParam0->f_29.f_6.f_3 = {-2.1f, 0f, -9.9f};
		uParam0->f_29.f_13 = 0.2f;
		uParam0->f_14.f_14 = 11f;
		uParam0->f_7 = {-1247.688f, -3408.546f, 20.50418f};
		uParam0->f_10 = {-1309.774f, -3372.294f, 11.36878f};
		uParam0->f_13 = 66.1875f;
		uParam0->f_48 = {-1247.688f, -3408.546f, 20.50418f};
		uParam0->f_51 = {-1309.774f, -3372.294f, 11.36878f};
		uParam0->f_54 = 66.1875f;
		uParam0->f_55 = {-966.084f, -2793.613f, 12.9648f};
		uParam0->f_58 = 372;
		StringCopy(&uParam0->f_59, "HANGAR_NAME", 16);
		uParam0->f_67 = 1378600;
		StringCopy(&uParam0->f_63, "HANGAR", 16);
		uParam0->f_80 = 1;
		break;

	case 14:
		*uParam0 = {1727.302f, 3291.453f, 39.61911f};
		uParam0->f_3 = {1744.108f, 3296.215f, 44.17199f};
		uParam0->f_6 = 4.6875f;
		uParam0->f_44 = {1737.53f, 3289.239f, 40.1448f};
		uParam0->f_47 = 14.8763f;
		uParam0->f_14 = {1739.749f, 3280.445f, 45.8124f};
		uParam0->f_14.f_3 = {-12.3854f, 0f, 14.8379f};
		uParam0->f_14.f_12 = 50f;
		uParam0->f_14.f_6 = {1739.749f, 3280.445f, 45.8124f};
		uParam0->f_14.f_6.f_3 = {-12.3854f, 0f, 14.8379f};
		uParam0->f_14.f_13 = 0.2f;
		uParam0->f_14.f_14 = 7f;
		uParam0->f_29 = {1739.749f, 3280.445f, 45.8124f};
		uParam0->f_29.f_3 = {-12.3854f, 0f, 14.8379f};
		uParam0->f_29.f_12 = 50f;
		uParam0->f_29.f_6 = {1739.749f, 3280.445f, 45.8124f};
		uParam0->f_29.f_6.f_3 = {-12.3854f, 0f, 14.8379f};
		uParam0->f_29.f_13 = 0.2f;
		uParam0->f_14.f_14 = 11f;
		uParam0->f_7 = {1718.056f, 3305.019f, 45.70922f};
		uParam0->f_10 = {1745.706f, 3313.101f, 39.758f};
		uParam0->f_13 = 28.125f;
		uParam0->f_48 = {1718.056f, 3305.019f, 45.70922f};
		uParam0->f_51 = {1745.706f, 3313.101f, 39.758f};
		uParam0->f_54 = 28.125f;
		uParam0->f_55 = {1735.586f, 3294.531f, 40.1651f};
		uParam0->f_58 = 372;
		StringCopy(&uParam0->f_59, "HANGAR_NAME2", 16);
		uParam0->f_67 = 1378600;
		StringCopy(&uParam0->f_63, "HANGAR", 16);
		uParam0->f_80 = 1;
		break;

	case 18:
		*uParam0 = {-709.095f, -1414.229f, 3.188014f};
		uParam0->f_3 = {-712.123f, -1411.655f, 6.938014f};
		uParam0->f_6 = 3.25f;
		uParam0->f_7 = {-739.1531f, -1439.509f, 3.188024f};
		uParam0->f_10 = {-753.7792f, -1426.756f, 7.188024f};
		uParam0->f_13 = 17.5625f;
		uParam0->f_44 = {-700.9434f, -1418.169f, 4.0005f};
		uParam0->f_47 = 142.6382f;
		uParam0->f_14 = {-738f, -1440f, 6.3f};
		uParam0->f_14.f_3 = {-2.5f, 0f, 48.3f};
		uParam0->f_14.f_12 = 45f;
		uParam0->f_14.f_6 = {-738f, -1440f, 6f};
		uParam0->f_14.f_6.f_3 = {-2.5f, 0f, 48.3f};
		uParam0->f_14.f_13 = 0.2f;
		uParam0->f_14.f_14 = 7f;
		uParam0->f_29 = {-749.3f, -1425.7f, 5.9f};
		uParam0->f_29.f_3 = {-9.9f, 0.2f, -152.8f};
		uParam0->f_29.f_12 = 40f;
		uParam0->f_29.f_6 = {-749.9f, -1426f, 5.9f};
		uParam0->f_29.f_6.f_3 = {-9.9f, 0.2f, -152.8f};
		uParam0->f_29.f_13 = 0.2f;
		uParam0->f_14.f_14 = 11f;
		uParam0->f_48 = {-738.7791f, -1439.377f, 9.125515f};
		uParam0->f_51 = {-755.9111f, -1425.006f, 1.688014f};
		uParam0->f_54 = 18.0625f;
		uParam0->f_55 = {-708.48f, -1414.66f, 4f};
		uParam0->f_58 = 370;
		StringCopy(&uParam0->f_59, "HELIPAD_NAME", 16);
		uParam0->f_67 = 419850;
		StringCopy(&uParam0->f_63, "HELIPAD", 16);
		uParam0->f_80 = 1;
		break;

	case 19:
		*uParam0 = {-709.095f, -1414.229f, 3.188014f};
		uParam0->f_3 = {-712.123f, -1411.655f, 6.938014f};
		uParam0->f_6 = 3.25f;
		uParam0->f_7 = {-755.6812f, -1459.234f, 3.188023f};
		uParam0->f_10 = {-770.7671f, -1446.867f, 7.188024f};
		uParam0->f_13 = 17.5625f;
		uParam0->f_44 = {-700.9434f, -1418.169f, 4.0005f};
		uParam0->f_47 = 142.6382f;
		uParam0->f_14 = {-754.6f, -1460.5f, 6.4f};
		uParam0->f_14.f_3 = {-4.8f, 0f, 48.5f};
		uParam0->f_14.f_12 = 45f;
		uParam0->f_14.f_6 = {-754.6f, -1460.6f, 6.1f};
		uParam0->f_14.f_6.f_3 = {-2.2f, 0f, 48.5f};
		uParam0->f_14.f_13 = 0.2f;
		uParam0->f_14.f_14 = 7f;
		uParam0->f_29 = {-771.8f, -1452.6f, 5.7f};
		uParam0->f_29.f_3 = {-4.1f, 0f, -98.6f};
		uParam0->f_29.f_12 = 40f;
		uParam0->f_29.f_6 = {-771.8f, -1452.1f, 5.7f};
		uParam0->f_29.f_6.f_3 = {-4.1f, 0f, -98.6f};
		uParam0->f_29.f_13 = 0.2f;
		uParam0->f_14.f_14 = 11f;
		uParam0->f_48 = {-755.5715f, -1459.453f, 9.125514f};
		uParam0->f_51 = {-771.4204f, -1446.235f, 1.688017f};
		uParam0->f_54 = 18.0625f;
		uParam0->f_55 = {-708.48f, -1414.66f, 4f};
		uParam0->f_58 = 370;
		StringCopy(&uParam0->f_59, "HELIPAD_NAME", 16);
		uParam0->f_67 = 419850;
		StringCopy(&uParam0->f_63, "HELIPAD", 16);
		uParam0->f_80 = 1;
		break;

	case 20:
		*uParam0 = {1763.424f, 3238.282f, 40.32022f};
		uParam0->f_3 = {1786.589f, 3239.016f, 47.18534f};
		uParam0->f_6 = 17.75f;
		uParam0->f_7 = {1763.424f, 3238.282f, 40.32022f};
		uParam0->f_10 = {1786.589f, 3239.016f, 47.18534f};
		uParam0->f_13 = 17.75f;
		uParam0->f_44 = {1761.122f, 3250.125f, 40.733f};
		uParam0->f_47 = 236.5858f;
		uParam0->f_14 = {1779.245f, 3222.477f, 48.5795f};
		uParam0->f_14.f_3 = {-31.2473f, 0f, 7.2108f};
		uParam0->f_14.f_12 = 40f;
		uParam0->f_14.f_6 = {1779.245f, 3222.477f, 48.5795f};
		uParam0->f_14.f_6.f_3 = {-31.2473f, 0f, 7.2108f};
		uParam0->f_14.f_13 = 0.2f;
		uParam0->f_14.f_14 = 7f;
		uParam0->f_29 = {1779.245f, 3222.477f, 48.5795f};
		uParam0->f_29.f_3 = {-31.2473f, 0f, 7.2108f};
		uParam0->f_29.f_12 = 40f;
		uParam0->f_29.f_6 = {1779.245f, 3222.477f, 48.5795f};
		uParam0->f_29.f_6.f_3 = {-31.2473f, 0f, 7.2108f};
		uParam0->f_29.f_13 = 0.2f;
		uParam0->f_14.f_14 = 11f;
		uParam0->f_48 = {1802.327f, 3245.165f, 46.95544f};
		uParam0->f_51 = {1755.04f, 3237.17f, 38.6937f};
		uParam0->f_54 = 28.125f;
		uParam0->f_55 = {1769.3f, 3244f, 41.1f};
		uParam0->f_58 = 370;
		StringCopy(&uParam0->f_59, "HELIPAD_NAME2", 16);
		uParam0->f_67 = 0;
		StringCopy(&uParam0->f_63, "HELIPAD", 16);
		uParam0->f_80 = 1;
		break;

	case 15:
		*uParam0 = {-826.5759f, -1368.475f, 3.750513f};
		uParam0->f_3 = {-827.868f, -1364.867f, 6.750514f};
		uParam0->f_6 = 3.3125f;
		uParam0->f_7 = {-845.2216f, -1356.04f, -0.212093f};
		uParam0->f_10 = {-841.6451f, -1365.777f, 3.787907f};
		uParam0->f_13 = 17.5625f;
		uParam0->f_44 = {-835.86f, -1358.347f, 0.6102f};
		uParam0->f_47 = 112.3787f;
		uParam0->f_14 = {-859.6f, -1374f, 4.3f};
		uParam0->f_14.f_3 = {-3f, 0f, -48.3f};
		uParam0->f_14.f_12 = 32.9f;
		uParam0->f_14.f_6 = {-859.7f, -1374f, 3f};
		uParam0->f_14.f_6.f_3 = {-3f, 0f, -48.3f};
		uParam0->f_14.f_13 = 0.2f;
		uParam0->f_14.f_14 = 7f;
		uParam0->f_29 = {-837.2f, -1350.3f, 2.4f};
		uParam0->f_29.f_3 = {-7f, 0f, 156.1f};
		uParam0->f_29.f_12 = 47.5f;
		uParam0->f_29.f_6 = {-837.4f, -1350.8f, 2.3f};
		uParam0->f_29.f_6.f_3 = {-7f, 0f, 156.1f};
		uParam0->f_29.f_13 = 0.2f;
		uParam0->f_14.f_14 = 11f;
		uParam0->f_48 = {-860.0693f, -1314.887f, -3.331177f};
		uParam0->f_51 = {-826.6461f, -1410.447f, 4.787533f};
		uParam0->f_54 = 19.625f;
		uParam0->f_55 = {-827.912f, -1366.736f, 4.0005f};
		uParam0->f_58 = 371;
		StringCopy(&uParam0->f_59, "MARINA_NAME", 16);
		uParam0->f_67 = 75000;
		StringCopy(&uParam0->f_63, "MARINA", 16);
		uParam0->f_80 = 1;
		break;

	case 16:
		*uParam0 = {-826.5759f, -1368.475f, 3.750513f};
		uParam0->f_3 = {-827.868f, -1364.867f, 6.750514f};
		uParam0->f_6 = 3.3125f;
		uParam0->f_7 = {-848.8177f, -1347.786f, -0.212093f};
		uParam0->f_10 = {-845.2482f, -1357.936f, 3.787908f};
		uParam0->f_13 = 17.5625f;
		uParam0->f_44 = {-839.2461f, -1349.525f, 0.6102f};
		uParam0->f_47 = 110.6762f;
		uParam0->f_14 = {-866.1f, -1365.6f, 4.3f};
		uParam0->f_14.f_3 = {-3.6f, 0f, -54.6f};
		uParam0->f_14.f_12 = 30f;
		uParam0->f_14.f_6 = {-866.1f, -1365.6f, 3f};
		uParam0->f_14.f_6.f_3 = {-3.6f, 0f, -54.6f};
		uParam0->f_14.f_13 = 0.2f;
		uParam0->f_14.f_14 = 7f;
		uParam0->f_29 = {-838.7f, -1343.3f, 2.9f};
		uParam0->f_29.f_3 = {-7.5f, 0f, 142.6f};
		uParam0->f_29.f_12 = 47.5f;
		uParam0->f_29.f_6 = {-838.8f, -1343.2f, 2.9f};
		uParam0->f_29.f_6.f_3 = {-7.5f, 0f, 142.6f};
		uParam0->f_29.f_13 = 0.2f;
		uParam0->f_14.f_14 = 11f;
		uParam0->f_48 = {-860.0693f, -1314.887f, -3.331177f};
		uParam0->f_51 = {-826.6461f, -1410.447f, 4.787533f};
		uParam0->f_54 = 19.625f;
		uParam0->f_55 = {-827.912f, -1366.736f, 4.0005f};
		uParam0->f_58 = 371;
		StringCopy(&uParam0->f_59, "MARINA_NAME", 16);
		uParam0->f_67 = 75000;
		StringCopy(&uParam0->f_63, "MARINA", 16);
		uParam0->f_80 = 1;
		break;

	case 17:
		*uParam0 = {-826.5759f, -1368.475f, 3.750513f};
		uParam0->f_3 = {-827.868f, -1364.867f, 6.750514f};
		uParam0->f_6 = 3.3125f;
		uParam0->f_7 = {-851.6987f, -1339.128f, -0.212129f};
		uParam0->f_10 = {-848.128f, -1349.168f, 3.787905f};
		uParam0->f_13 = 17.5625f;
		uParam0->f_44 = {-842.0763f, -1341.401f, 0.6102f};
		uParam0->f_47 = 109.8916f;
		uParam0->f_14 = {-866.3f, -1357.9f, 4.3f};
		uParam0->f_14.f_3 = {-4.4f, 0f, -46.6f};
		uParam0->f_14.f_12 = 31.2f;
		uParam0->f_14.f_6 = {-866.3f, -1357.9f, 3f};
		uParam0->f_14.f_6.f_3 = {-4.4f, 0f, -46.6f};
		uParam0->f_14.f_13 = 0.2f;
		uParam0->f_14.f_14 = 7f;
		uParam0->f_29 = {-841.6f, -1336.3f, 2.5f};
		uParam0->f_29.f_3 = {-3.6f, 0f, 137.7f};
		uParam0->f_29.f_12 = 47.5f;
		uParam0->f_29.f_6 = {-841.8f, -1336.1f, 2.5f};
		uParam0->f_29.f_6.f_3 = {-3.6f, 0f, 137.7f};
		uParam0->f_29.f_13 = 0.2f;
		uParam0->f_14.f_14 = 11f;
		uParam0->f_48 = {-860.0693f, -1314.887f, -3.331177f};
		uParam0->f_51 = {-826.6461f, -1410.447f, 4.787533f};
		uParam0->f_54 = 19.625f;
		uParam0->f_55 = {-827.912f, -1366.736f, 4.0005f};
		uParam0->f_58 = 371;
		StringCopy(&uParam0->f_59, "MARINA_NAME", 16);
		uParam0->f_67 = 75000;
		StringCopy(&uParam0->f_63, "MARINA", 16);
		uParam0->f_80 = 1;
		break;

	case 21:
		*uParam0 = {-63.38147f, 84.0594f, 70.52139f};
		uParam0->f_3 = {-66.17774f, 77.95913f, 74.05372f};
		uParam0->f_6 = 5.9375f;
		uParam0->f_44 = {-65.2041f, 81.0524f, 70.5666f};
		uParam0->f_47 = 243.8699f;
		uParam0->f_7 = {189.7074f, -1017.569f, -105f};
		uParam0->f_10 = {207.8325f, -1017.774f, -96.63576f};
		uParam0->f_13 = 23f;
		uParam0->f_14 = {191f, -1026.9f, -98.3f};
		uParam0->f_14.f_3 = {-2.4f, 0f, -77f};
		uParam0->f_14.f_6 = {190f, -1026.9f, -98.3f};
		uParam0->f_14.f_6.f_3 = {-4.3f, 0f, -57.6f};
		uParam0->f_14.f_12 = 37f;
		uParam0->f_14.f_13 = 0.2f;
		uParam0->f_14.f_14 = 7.5f;
		uParam0->f_29 = {207.3f, -1013f, -98.2f};
		uParam0->f_29.f_3 = {-2.4f, 0f, 112.3f};
		uParam0->f_29.f_6 = {207.3f, -1013f, -98.2f};
		uParam0->f_29.f_6.f_3 = {-2.4f, 0f, 141f};
		uParam0->f_29.f_12 = 37f;
		uParam0->f_29.f_13 = 0.2f;
		uParam0->f_29.f_14 = 11.5f;
		uParam0->f_48 = {221.9979f, -981.6635f, -100.1874f};
		uParam0->f_51 = {234.201f, -981.7582f, -97.62492f};
		uParam0->f_54 = 6.25f;
		uParam0->f_55 = {-62.62f, 80.03f, 70.62f};
		uParam0->f_58 = 369;
		StringCopy(&uParam0->f_59, "GARAGE_NAME1", 16);
		uParam0->f_67 = 30000;
		StringCopy(&uParam0->f_63, "CAR_GAR", 16);
		uParam0->f_68 = 243.8699f;
		uParam0->f_69 = 1;
		uParam0->f_70[0 /*3*/] = {-67.9068f, 82.2664f, 70.5153f};
		uParam0->f_77[0] = 66.202f;
		uParam0->f_70[1 /*3*/] = {-65.1234f, 81.2517f, 70.5644f};
		uParam0->f_77[1] = 71.6237f;
		uParam0->f_80 = 1;
		break;

	case 22:
		*uParam0 = {-72.41166f, -1824.142f, 25.81704f};
		uParam0->f_3 = {-68.70254f, -1819.642f, 29.37954f};
		uParam0->f_6 = 5.9375f;
		uParam0->f_44 = {-70.1992f, -1823.225f, 25.942f};
		uParam0->f_47 = 46.1535f;
		uParam0->f_7 = {189.7074f, -1017.569f, -105f};
		uParam0->f_10 = {207.8325f, -1017.774f, -96.63576f};
		uParam0->f_13 = 23f;
		uParam0->f_14 = {191f, -1026.9f, -98.3f};
		uParam0->f_14.f_3 = {-2.4f, 0f, -77f};
		uParam0->f_14.f_6 = {190f, -1026.9f, -98.3f};
		uParam0->f_14.f_6.f_3 = {-4.3f, 0f, -57.6f};
		uParam0->f_14.f_12 = 37f;
		uParam0->f_14.f_13 = 0.2f;
		uParam0->f_14.f_14 = 7.5f;
		uParam0->f_29 = {207.3f, -1013f, -98.2f};
		uParam0->f_29.f_3 = {-2.4f, 0f, 112.3f};
		uParam0->f_29.f_6 = {207.3f, -1013f, -98.2f};
		uParam0->f_29.f_6.f_3 = {-2.4f, 0f, 141f};
		uParam0->f_29.f_12 = 37f;
		uParam0->f_29.f_13 = 0.2f;
		uParam0->f_29.f_14 = 11.5f;
		uParam0->f_48 = {221.9979f, -981.6635f, -100.1874f};
		uParam0->f_51 = {234.201f, -981.7582f, -97.62492f};
		uParam0->f_54 = 6.25f;
		uParam0->f_55 = {-71.29f, -1821.68f, 25.94f};
		uParam0->f_58 = 369;
		StringCopy(&uParam0->f_59, "GARAGE_NAME2", 16);
		uParam0->f_67 = 30000;
		StringCopy(&uParam0->f_63, "CAR_GAR", 16);
		uParam0->f_68 = 53.0985f;
		uParam0->f_69 = 1;
		uParam0->f_70[0 /*3*/] = {-64.2268f, -1832.598f, 25.8666f};
		uParam0->f_77[0] = 274.6339f;
		uParam0->f_70[1 /*3*/] = {-68.5531f, -1824.377f, 25.9424f};
		uParam0->f_77[1] = 215.8295f;
		uParam0->f_80 = 1;
		break;

	case 23:
		*uParam0 = {-220.7794f, -1159.28f, 21.90302f};
		uParam0->f_3 = {-220.7273f, -1165.265f, 25.45053f};
		uParam0->f_6 = 5.9375f;
		uParam0->f_44 = {-220.7592f, -1162.277f, 22.0242f};
		uParam0->f_47 = 271.2097f;
		uParam0->f_7 = {189.7074f, -1017.569f, -105f};
		uParam0->f_10 = {207.8325f, -1017.774f, -96.63576f};
		uParam0->f_13 = 23f;
		uParam0->f_14 = {191f, -1026.9f, -98.3f};
		uParam0->f_14.f_3 = {-2.4f, 0f, -77f};
		uParam0->f_14.f_6 = {190f, -1026.9f, -98.3f};
		uParam0->f_14.f_6.f_3 = {-4.3f, 0f, -57.6f};
		uParam0->f_14.f_12 = 37f;
		uParam0->f_14.f_13 = 0.2f;
		uParam0->f_14.f_14 = 7.5f;
		uParam0->f_29 = {207.3f, -1013f, -98.2f};
		uParam0->f_29.f_3 = {-2.4f, 0f, 112.3f};
		uParam0->f_29.f_6 = {207.3f, -1013f, -98.2f};
		uParam0->f_29.f_6.f_3 = {-2.4f, 0f, 141f};
		uParam0->f_29.f_12 = 37f;
		uParam0->f_29.f_13 = 0.2f;
		uParam0->f_29.f_14 = 11.5f;
		uParam0->f_48 = {221.9979f, -981.6635f, -100.1874f};
		uParam0->f_51 = {234.201f, -981.7582f, -97.62492f};
		uParam0->f_54 = 6.25f;
		uParam0->f_55 = {-218.35f, -1162.18f, 22.02f};
		uParam0->f_58 = 369;
		StringCopy(&uParam0->f_59, "GARAGE_NAME3", 16);
		uParam0->f_67 = 30000;
		StringCopy(&uParam0->f_63, "CAR_GAR", 16);
		uParam0->f_68 = 271.2097f;
		uParam0->f_69 = 1;
		uParam0->f_70[0 /*3*/] = {-222.1935f, -1162.113f, 22.0204f};
		uParam0->f_77[0] = 358.5703f;
		uParam0->f_70[1 /*3*/] = {-220.8189f, -1162.302f, 22.0242f};
		uParam0->f_77[1] = 70.2711f;
		uParam0->f_80 = 1;
		break;
	}
	return uParam0->f_80;
}

// Position - 0x29414
int func_393() {
	func_394();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x2942D
void func_394() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_319(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_318(player::player_ped_id());
			if (func_25(iVar0) && (!func_27(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_25(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x2952A
void func_395() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68) {
		if (ui::does_blip_exist(Global_68531.f_208[iVar0])) {
			ui::remove_blip(&Global_68531.f_208[iVar0]);
		}
		if (entity::does_entity_exist(Global_68531.f_139[iVar0])) {
			if (vehicle::is_vehicle_driveable(Global_68531.f_139[iVar0], 0)) {
				entity::set_vehicle_as_no_longer_needed(&Global_68531.f_139[iVar0]);
				Global_68531.f_139[iVar0] = 0;
			}
		}
		iVar0++;
	}
	if (cam::does_cam_exist(Local_402.f_110)) {
		cam::set_cam_active(Local_402.f_110, 0);
		cam::destroy_cam(Local_402.f_110, 0);
	}
	if (cam::does_cam_exist(Local_402.f_111)) {
		cam::set_cam_active(Local_402.f_111, 0);
		cam::destroy_cam(Local_402.f_111, 0);
	}
	if (Local_402.f_3 != 0) {
		func_205();
		entity::freeze_entity_position(player::player_ped_id(), 0);
	}
	if (ui::does_blip_exist(Global_68531.f_583)) {
		ui::remove_blip(&Global_68531.f_583);
	}
	if (iLocal_656 != -1) {
		func_68(&iLocal_656);
	}
	if (iLocal_655 != -1) {
		func_68(&iLocal_655);
	}
	if (Local_402.f_5 != -1) {
		func_68(&Local_402.f_5);
	}
	if (iLocal_668 != -1) {
		func_68(&iLocal_668);
	}
	if (Local_402.f_3 > 0) {
		if (Global_68531.f_577) {
			func_186(47, 1);
			func_184(47, 1);
			Global_68531.f_577 = 0;
			Local_402.f_3 = 0;
		}
	}
	Global_68531.f_553 = 0;
	script::terminate_this_thread();
}

// Position - 0x29686
void func_396() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6) {
		if (entity::does_entity_exist(uLocal_393[iVar0])) {
			object::delete_object(&uLocal_393[iVar0]);
		}
		iVar0++;
	}
}

// Position - 0x296B9
void func_397(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	if (!gameplay::is_bit_set(iLocal_936[iVar0], iVar1)) {
		gameplay::set_bit(&iLocal_936[iVar0], iVar1);
		iLocal_867[iLocal_866] = iParam0;
		iLocal_866++;
	}
}

// Position - 0x296FF
void func_398() {
	int iVar0;

	if (func_228(25)) {
		if (Global_101700.f_31389.f_69[22 /*78*/].f_66 != 0 &&
			!func_38(Global_101700.f_31389.f_69[22 /*78*/].f_66, 0)) {
			Global_101700.f_31389.f_69[22 /*78*/].f_66 = joaat("fugitive");
			Global_101700.f_31389.f_69[22 /*78*/].f_77 = 0;
			Global_101700.f_31389.f_69[22 /*78*/].f_65 = 0;
			Global_101700.f_31389.f_69[22 /*78*/].f_62 = 255;
			Global_101700.f_31389.f_69[22 /*78*/].f_63 = 255;
			Global_101700.f_31389.f_69[22 /*78*/].f_64 = 255;
			Global_101700.f_31389.f_69[22 /*78*/].f_5 = 0;
			Global_101700.f_31389.f_69[22 /*78*/].f_6 = 0;
			Global_101700.f_31389.f_69[22 /*78*/].f_7 = 0;
			Global_101700.f_31389.f_69[22 /*78*/].f_8 = 156;
			iVar0 = 0;
			while (iVar0 < 49) {
				Global_101700.f_31389.f_69[22 /*78*/].f_9[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 2) {
				Global_101700.f_31389.f_69[22 /*78*/].f_59[iVar0] = 0;
				iVar0++;
			}
		}
	}
	if (func_228(21) && Global_101700.f_31389.f_69[9 /*78*/].f_66 != 0 &&
		!func_38(Global_101700.f_31389.f_69[9 /*78*/].f_66, 0)) {
		Global_101700.f_31389.f_69[9 /*78*/].f_66 = 0;
	}
	if (func_228(22) && Global_101700.f_31389.f_69[10 /*78*/].f_66 != 0 &&
		!func_38(Global_101700.f_31389.f_69[10 /*78*/].f_66, 0)) {
		Global_101700.f_31389.f_69[10 /*78*/].f_66 = 0;
	}
	if (func_228(23) && Global_101700.f_31389.f_69[11 /*78*/].f_66 != 0 &&
		!func_38(Global_101700.f_31389.f_69[11 /*78*/].f_66, 0)) {
		Global_101700.f_31389.f_69[11 /*78*/].f_66 = 0;
	}
	if (func_228(26) && !func_38(Global_101700.f_31389.f_69[12 /*78*/].f_66, 0)) {
		func_399(26, 0);
	}
	if (func_228(27) && !func_38(Global_101700.f_31389.f_69[13 /*78*/].f_66, 0)) {
		func_399(27, 0);
	}
	if (func_228(28) && !func_38(Global_101700.f_31389.f_69[14 /*78*/].f_66, 0)) {
		func_399(28, 0);
	}
	if (func_228(29) && !func_38(Global_101700.f_31389.f_69[15 /*78*/].f_66, 0)) {
		func_399(29, 0);
	}
	if (func_228(30) && !func_38(Global_101700.f_31389.f_69[16 /*78*/].f_66, 0)) {
		func_399(30, 0);
	}
	if (func_228(31) && !func_38(Global_101700.f_31389.f_69[17 /*78*/].f_66, 0)) {
		func_399(31, 0);
	}
	if (func_228(32) && !func_38(Global_101700.f_31389.f_69[18 /*78*/].f_66, 0)) {
		func_399(32, 0);
	}
	if (func_228(33) && !func_38(Global_101700.f_31389.f_69[19 /*78*/].f_66, 0)) {
		func_399(33, 0);
	}
	if (func_228(34) && !func_38(Global_101700.f_31389.f_69[20 /*78*/].f_66, 0)) {
		func_399(34, 0);
	}
}

// Position - 0x29A84
void func_399(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return;
	}
	if (iParam1) {
		if (!func_66(iParam0, 0)) {
			func_257(iParam0, 1, 0);
			func_257(iParam0, 2, 0);
			func_257(iParam0, 3, 0);
			func_257(iParam0, 4, 0);
			func_257(iParam0, 0, 1);
			Global_68531[iParam0] = 1;
		}
	}
	else {
		func_257(iParam0, 0, 0);
	}
}

// Position - 0x29AE1
int func_400() { return 0; }

// Position - 0x29AEA
int func_401() { return 1; }

// Position - 0x29AF3
int func_402() { return 1; }

// Position - 0x29AFC
int func_403() {
	if (dlc2::is_dlc_present(-1226939934)) {
		return 1;
	}
	return 0;
}

// Position - 0x29B15
void func_404(var *uParam0) {
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_9 = {func_5("C_SF", "DL", "AST", "X1/BE")};
	func_408();
	func_407();
	func_405();
}

// Position - 0x29B52
void func_405() {
	Global_100290 = 2405.849f;
	Global_100293 = 2408.22f;
	Global_100296 = 2386.096f;
	Global_100299 = 69.1875f;
	Global_100302[0 /*3*/] = 2417.105f;
	Global_100302[1 /*3*/] = 2407.058f;
	Global_100302[2 /*3*/] = 2371.92f;
	Global_100302[3 /*3*/] = 2399.583f;
	Global_100302[4 /*3*/] = 2416.519f;
	Global_100302[5 /*3*/] = 2430.345f;
	Global_100302[6 /*3*/] = 2385.819f;
	Global_100324[0] = 157.8636f;
	Global_100324[1] = 174.7226f;
	Global_100324[2] = 270.7562f;
	Global_100324[3] = 190.7495f;
	Global_100324[4] = 27.6506f;
	Global_100324[5] = 358.1218f;
	Global_100324[6] = 339.4363f;
	Global_100332 = 2399.82f;
	Global_100335 = 2414.7f;
	func_406(&Global_98659, 64);
}

// Position - 0x29C42
void func_406(var *uParam0, int iParam1) { *uParam0 |= iParam1; }

// Position - 0x29C53
void func_407() {
	Global_98664[0 /*3*/].f_1 = 5141.01f;
	Global_98664[1 /*3*/].f_1 = 6048.71f;
	Global_98664[2 /*3*/].f_1 = 6185.32f;
	Global_98664[3 /*3*/].f_1 = 5180.99f;
	Global_98664[4 /*3*/].f_1 = 4582.72f;
	Global_98664[5 /*3*/].f_1 = 4831.82f;
	Global_98664[6 /*3*/].f_1 = 4322.66f;
	Global_98664[7 /*3*/].f_1 = 3503.92f;
	Global_98664[8 /*3*/].f_1 = 3777.54f;
	Global_98664[9 /*3*/].f_1 = 3810.8f;
	Global_98664[10 /*3*/].f_1 = 3095.88f;
	Global_98698[0 /*13*/][0 /*3*/].f_1 = 5222.39f;
	Global_98698[0 /*13*/][1 /*3*/].f_1 = 5333.68f;
	Global_98698[0 /*13*/][2 /*3*/].f_1 = 5534.22f;
	Global_98698[0 /*13*/][3 /*3*/].f_1 = 5843.98f;
	Global_98698[1 /*13*/][0 /*3*/].f_1 = 5178.94f;
	Global_98698[1 /*13*/][1 /*3*/].f_1 = 4956.4f;
	Global_98698[1 /*13*/][2 /*3*/].f_1 = 5063.24f;
	Global_98698[2 /*13*/][0 /*3*/].f_1 = 5027.97f;
	Global_98698[2 /*13*/][1 /*3*/].f_1 = 4854.23f;
	Global_98698[2 /*13*/][2 /*3*/].f_1 = 4770.31f;
	Global_98698[3 /*13*/][0 /*3*/].f_1 = 6052.6f;
	Global_98698[3 /*13*/][1 /*3*/].f_1 = 6086.12f;
	Global_98698[3 /*13*/][2 /*3*/].f_1 = 6165.88f;
	Global_98698[4 /*13*/][0 /*3*/].f_1 = 5880.13f;
	Global_98698[4 /*13*/][1 /*3*/].f_1 = 5515.67f;
	Global_98698[4 /*13*/][2 /*3*/].f_1 = 5195.4f;
	Global_98698[5 /*13*/][0 /*3*/].f_1 = 6380.15f;
	Global_98698[5 /*13*/][1 /*3*/].f_1 = 6193.92f;
	Global_98698[5 /*13*/][2 /*3*/].f_1 = 5909.13f;
	Global_98698[6 /*13*/][0 /*3*/].f_1 = 5072.56f;
	Global_98698[6 /*13*/][1 /*3*/].f_1 = 5062.55f;
	Global_98698[6 /*13*/][2 /*3*/].f_1 = 4964.13f;
	Global_98698[7 /*13*/][0 /*3*/].f_1 = 4956.69f;
	Global_98698[7 /*13*/][1 /*3*/].f_1 = 4767.8f;
	Global_98698[7 /*13*/][2 /*3*/].f_1 = 4588.79f;
	Global_98698[8 /*13*/][0 /*3*/].f_1 = 4783.28f;
	Global_98698[8 /*13*/][1 /*3*/].f_1 = 4613.93f;
	Global_98698[8 /*13*/][2 /*3*/].f_1 = 4737.46f;
	Global_98698[9 /*13*/][0 /*3*/].f_1 = 4624.7f;
	Global_98698[9 /*13*/][1 /*3*/].f_1 = 4286.39f;
	Global_98698[9 /*13*/][2 /*3*/].f_1 = 4500.57f;
	Global_98698[10 /*13*/][0 /*3*/].f_1 = 4618.13f;
	Global_98698[10 /*13*/][1 /*3*/].f_1 = 4534.44f;
	Global_98698[10 /*13*/][2 /*3*/].f_1 = 4493.64f;
	Global_98698[11 /*13*/][0 /*3*/].f_1 = 4282.7f;
	Global_98698[11 /*13*/][1 /*3*/].f_1 = 4111.71f;
	Global_98698[11 /*13*/][2 /*3*/].f_1 = 3914.81f;
	Global_98698[11 /*13*/][3 /*3*/].f_1 = 3894.7f;
	Global_98698[12 /*13*/][0 /*3*/].f_1 = 4038.96f;
	Global_98698[12 /*13*/][1 /*3*/].f_1 = 3849.33f;
	Global_98698[12 /*13*/][2 /*3*/].f_1 = 3699.37f;
	Global_98698[13 /*13*/][0 /*3*/].f_1 = 3970.96f;
	Global_98698[13 /*13*/][1 /*3*/].f_1 = 3926.75f;
	Global_98698[13 /*13*/][2 /*3*/].f_1 = 3874.89f;
	Global_98698[14 /*13*/][0 /*3*/].f_1 = 3291.26f;
	Global_98698[14 /*13*/][1 /*3*/].f_1 = 3436.6f;
	Global_98698[14 /*13*/][2 /*3*/].f_1 = 3592.12f;
	Global_98698[15 /*13*/][0 /*3*/].f_1 = 3710.49f;
	Global_98698[15 /*13*/][1 /*3*/].f_1 = 3945.38f;
	Global_98698[15 /*13*/][2 /*3*/].f_1 = 3854.2f;
	Global_98698[15 /*13*/][3 /*3*/].f_1 = 3757.3f;
	Global_98698[16 /*13*/][0 /*3*/].f_1 = 3528.6f;
	Global_98698[16 /*13*/][1 /*3*/].f_1 = 3328.93f;
	Global_98698[16 /*13*/][2 /*3*/].f_1 = 3157.76f;
	Global_98698[17 /*13*/][0 /*3*/].f_1 = 3809.12f;
	Global_98698[17 /*13*/][1 /*3*/].f_1 = 3826.24f;
	Global_98698[17 /*13*/][2 /*3*/].f_1 = 3727.81f;
	Global_98698[18 /*13*/][0 /*3*/].f_1 = 3610.22f;
	Global_98698[18 /*13*/][1 /*3*/].f_1 = 3314.26f;
	Global_98698[18 /*13*/][2 /*3*/].f_1 = 3034.58f;
	Global_98698[19 /*13*/][0 /*3*/].f_1 = 3572.72f;
	Global_98698[19 /*13*/][1 /*3*/].f_1 = 3261.69f;
	Global_98698[19 /*13*/][2 /*3*/].f_1 = 3184.28f;
	func_406(&Global_98659, 16);
}

// Position - 0x2A157
void func_408() {
	Global_98615[0 /*3*/] = -1567.382f;
	Global_98615[1 /*3*/] = -1436.305f;
	Global_98615[2 /*3*/] = 31.2408f;
	Global_98615[3 /*3*/] = 278.1924f;
	Global_98615[4 /*3*/] = 1116.002f;
	Global_98615[5 /*3*/] = 1676.193f;
	Global_98637[0 /*3*/] = -1592.642f;
	Global_98637[1 /*3*/] = -1573.501f;
	Global_98637[2 /*3*/] = -1459.359f;
	Global_98637[3 /*3*/] = 21.1005f;
	Global_98637[4 /*3*/] = 262.9409f;
	Global_98637[5 /*3*/] = 1091.07f;
	func_406(&Global_98659, 1);
}
