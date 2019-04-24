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
#pragma endregion //}

void __EntryFunction__() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[8];
	int iVar12;
	int iVar13;

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
	if (player::has_force_cleanup_occurred(2)) {
		func_18();
	}
	iVar0 = Global_35742;
	iVar1 = 15;
	while (true) {
		if (Global_35781 != 15) {
			if (Global_35744 != 0) {
				if (Global_35743 != -1) {
					if (!script::is_thread_active(Global_35744)) {
						func_17(&Global_35743);
					}
				}
			}
		}
		if (Global_35742 > 0) {
			Global_35747 = 1;
			if (Global_35742 == iVar0) {
				iVar2 = 0;
				if (Global_35742 > 1) {
					iVar12 = 0;
					iVar12 = 0;
					while (iVar12 < Global_35742) {
						if (func_15(Global_35748[iVar12 /*4*/].f_2)) {
							iVar3[iVar12] = 0;
						}
						else {
							iVar3[iVar12] = 1;
						}
						if (Global_35748[iVar12 /*4*/].f_1 == 7) {
							iVar3[iVar12] = 1;
						}
						iVar12++;
					}
					iVar13 = 0;
					iVar12 = 0;
					iVar12 = 0;
					while (iVar12 < Global_35742 - 1) {
						if (!iVar3[iVar12 + 1]) {
							if (Global_35748[iVar12 + 1 /*4*/].f_1 < Global_35748[iVar13 /*4*/].f_1) {
								iVar13 = iVar12 + 1;
							}
						}
						iVar12++;
					}
					iVar2 = iVar13;
					if (Global_35748[iVar2 /*4*/].f_2 == 15) {
						iVar2 = -1;
					}
					if (iVar2 != -1) {
						if (!func_15(Global_35748[iVar2 /*4*/].f_2)) {
							iVar2 = -1;
						}
					}
				}
				if (iVar2 > -1) {
					Global_35743 = Global_35748[iVar2 /*4*/];
					Global_35744 = Global_35748[iVar2 /*4*/].f_3;
					Global_35781 = Global_35748[iVar2 /*4*/].f_2;
					Global_35742 = 0;
					Global_35747 = 0;
				}
				else {
					Global_35742 = 0;
					Global_35747 = 0;
				}
			}
		}
		if (iVar1 != Global_35781) {
			if (iVar1 == 15) {
				func_14(0);
			}
			if (Global_35781 == 15) {
				func_14(1);
			}
			Global_35747 = 0;
			Global_31553 = 1;
			if (Global_35781 != 5 && Global_35781 != 15) {
				player::force_cleanup(8);
			}
			if (Global_35781 == 15 || Global_35781 == 6) {
				func_13(0);
			}
			else {
				func_13(1);
			}
			if (func_12(Global_35781)) {
				if (!iLocal_20) {
					network::_0xCFEB8AF24FC1D0BB(1);
					iLocal_20 = 1;
				}
			}
			else if (iLocal_20) {
				network::_0xCFEB8AF24FC1D0BB(0);
				iLocal_20 = 0;
			}
		}
		iVar1 = Global_35781;
		iVar0 = Global_35742;
		Global_100338 = func_1();
		Global_25461 = time::get_clock_day_of_week();
		system::wait(0);
	}
	Global_35747 = 0;
}

// Position - 0x244
var func_1() {
	int *iVar0;

	func_11(&iVar0, time::get_clock_seconds());
	func_10(&iVar0, time::get_clock_minutes());
	func_9(&iVar0, time::get_clock_hours());
	func_4(&iVar0, time::get_clock_day_of_month());
	func_3(&iVar0, time::get_clock_month());
	func_2(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0x28A
void func_2(int *iParam0, int iParam1) {
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

// Position - 0x310
void func_3(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*uParam0 -= (*uParam0 & 15);
	*uParam0 |= iParam1;
}

// Position - 0x343
void func_4(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_8(*uParam0);
	iVar1 = func_6(*uParam0);
	if (iParam1 < 1 || iParam1 > func_5(iVar0, iVar1)) {
		return;
	}
	*uParam0 -= (*uParam0 & 496);
	*uParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0x394
int func_5(int iParam0, int iParam1) {
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

// Position - 0x436
var func_6(int iParam0) {
	return (system::shift_right(iParam0, 26) & 31) * func_7(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x45B
int func_7(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x472
int func_8(var uParam0) { return uParam0 & 15; }

// Position - 0x47F
void func_9(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*uParam0 -= (*uParam0 & 15872);
	*uParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0x4B9
void func_10(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 1032192);
	*uParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0x4F4
void func_11(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 66060288);
	*uParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0x530
bool func_12(int iParam0) {
	switch (iParam0) {
	case 0:
	case 2:
	case 3:
	case 4:
	case 7:
	case 9:
	case 10:
	case 11:
	case 13:
	case 14:
	case 17:
	case 18: return true;
	}
	return false;
}

// Position - 0x58F
void func_13(int iParam0) {
	if (!iParam0) {
		Global_100344 = gameplay::get_game_timer() + 250;
	}
	Global_100341 = iParam0;
}

// Position - 0x5AD
void func_14(int iParam0) {
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

// Position - 0x82F
bool func_15(int iParam0) { return func_16(iParam0, Global_35781); }

// Position - 0x840
int func_16(int iParam0, int iParam1) {
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

// Position - 0xA21
void func_17(int *iParam0) {
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

// Position - 0xA5E
void func_18() {
	func_17(&Global_35743);
	Global_35747 = 0;
	script::terminate_this_thread();
}
