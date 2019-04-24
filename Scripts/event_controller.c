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
var uLocal_21 = 0;
var uLocal_22 = 0;
float fLocal_23 = 0f;
float fLocal_24 = 0f;
float fLocal_25 = 0f;
var uLocal_26 = 0;
var uLocal_27 = 0;
float fLocal_28 = 0f;
var uLocal_29 = 0;
var uLocal_30 = 0;
var uLocal_31 = 0;
float fLocal_32 = 0f;
float fLocal_33 = 0f;
var uLocal_34 = 0;
var uLocal_35 = 0;
int iLocal_36 = 0;
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
float fLocal_47 = 0f;
var uLocal_48 = 0;
var uLocal_49 = 0;
var uLocal_50 = 0;
var uLocal_51 = 0;
var uLocal_52 = 0;
var uLocal_53 = 0;
var uLocal_54 = 0;
var uLocal_55 = 0;
var uLocal_56 = 0;
var uLocal_57 = 0;
var uLocal_58 = 10;
var uLocal_59 = 0;
var uLocal_60 = 0;
var uLocal_61 = 0;
var uLocal_62 = 0;
var uLocal_63 = 0;
var uLocal_64 = 0;
var uLocal_65 = 0;
var uLocal_66 = 0;
var uLocal_67 = 0;
var uLocal_68 = 0;
var uLocal_69 = 2;
var uLocal_70 = 0;
var uLocal_71 = 0;
var uLocal_72 = 8;
var uLocal_73 = 0;
var uLocal_74 = 0;
var uLocal_75 = 0;
var uLocal_76 = 0;
var uLocal_77 = 0;
var uLocal_78 = 0;
var uLocal_79 = 0;
var uLocal_80 = 0;
var uLocal_81 = 8;
var uLocal_82 = 0;
var uLocal_83 = 0;
var uLocal_84 = 0;
var uLocal_85 = 0;
var uLocal_86 = 0;
var uLocal_87 = 0;
var uLocal_88 = 0;
var uLocal_89 = 0;
var uLocal_90 = 0;
var uLocal_91 = 0;
int iLocal_92 = 0;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = 0.05f + 0.275f - 0.01f;
	if (player::has_force_cleanup_occurred(34)) {
		script::terminate_this_thread();
	}
	while (true) {
		system::wait(0);
		func_130();
		func_1();
	}
}

// Position - 0xA5
void func_1() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	if (player::is_player_online()) {
		iVar2 = 0;
		while (iVar2 < script::get_number_of_events(1)) {
			iVar7 = script::get_event_at_index(1, iVar2);
			switch (iVar7) {
			case 189: func_127(); break;

			case 190: func_126(); break;

			case 191: func_120(iVar2); break;

			case 192: func_119(iVar2); break;

			case 193: func_110(iVar2); break;

			case 211: func_3(iVar2); break;
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < script::get_number_of_events(0)) {
		iVar0 = script::get_event_at_index(0, iVar2);
		iLocal_92 = 1;
		switch (iVar0) {
		case 139:
			script::get_event_data(0, iVar2, &iVar1, 1);
			if (entity::does_entity_exist(iVar1)) {
				if (entity::is_entity_a_vehicle(iVar1)) {
					if (func_2(iVar3)) {
						Global_48073.f_1[iVar3] = iVar1;
						iVar3++;
					}
				}
				else if (entity::is_entity_a_ped(iVar1)) {
					if (func_2(iVar5)) {
						Global_48073.f_25[iVar5] = iVar1;
						iVar5++;
					}
				}
			}
			break;

		case 140:
			script::get_event_data(0, iVar2, &iVar1, 1);
			if (entity::does_entity_exist(iVar1)) {
				if (entity::is_entity_a_vehicle(iVar1)) {
					if (func_2(iVar4)) {
						Global_48073.f_13[iVar4] = iVar1;
						iVar4++;
					}
				}
				else if (entity::is_entity_a_ped(iVar1)) {
					if (func_2(iVar6)) {
						Global_48073.f_37[iVar6] = iVar1;
						iVar6++;
					}
				}
			}
			break;
		}
		iVar2++;
	}
	Global_48073 = iVar3;
	Global_48073.f_12 = iVar4;
	Global_48073.f_24 = iVar5;
	Global_48073.f_36 = iVar6;
}

// Position - 0x24E
bool func_2(int iParam0) { return iParam0 < 10; }

// Position - 0x25B
void func_3(int iParam0) {
	struct<39> Var0;
	int iVar39;

	if (script::get_event_data(1, iParam0, &Var0, 39)) {
		iVar39 = network::_0x742B58F723233ED9(Var0.f_38);
		if (iVar39 >= 0 && iVar39 < network::network_get_num_presence_invites()) {
			if (network::_0x3DBF2DF0AEB7D289(iVar39) || network::_0x8806CEBFABD3CE05(iVar39)) {
				if (network::_0x8806CEBFABD3CE05(iVar39)) {
					func_56(iVar39);
				}
				else {
					network::network_accept_presence_invite(iVar39);
				}
				func_55(Var0.f_37, -1);
			}
			else if (func_48()) {
				func_4(Var0.f_29, Var0, Var0.f_38, Var0.f_16, Var0.f_35, Var0.f_36);
			}
		}
	}
}

// Position - 0x2F8
int func_4(struct<6> Param0, struct<16> Param6, int iParam22, struct<13> Param23, var uParam36, int iParam37) {
	bool bVar0;
	bool bVar1;
	struct<16> Var2;
	int iVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	struct<10> Var22;
	int *iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	struct<16> Var36;
	struct<16> Var52;
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

	bVar0 = false;
	if (iParam37 >= 1000000) {
		iParam37 -= 1000000;
		bVar0 = true;
	}
	if (network::network_is_game_in_progress()) {
		if (func_47()) {
			func_46(iParam22);
			return 0;
		}
		if (func_45()) {
			func_46(iParam22);
			return 0;
		}
	}
	if (!network::network_is_game_in_progress()) {
		if (bVar0) {
		}
		else if (!network::network_is_friend(&Param23)) {
			func_46(iParam22);
			return 0;
		}
		if (Global_14386) {
			func_46(iParam22);
			return 0;
		}
		bVar1 = true;
		if (!func_44()) {
			if (!func_43(0)) {
				if (bVar1) {
					func_46(iParam22);
					return 0;
				}
			}
		}
	}
	if (network::network_is_game_in_progress()) {
		if (!func_42(player::player_id())) {
			func_46(iParam22);
			return 0;
		}
	}
	if (gameplay::is_string_null_or_empty(&Param6)) {
		func_46(iParam22);
		return 0;
	}
	if (gameplay::is_string_null_or_empty(&Param0)) {
		func_46(iParam22);
		return 0;
	}
	Var2 = {Param6};
	iVar18 = func_41(Var2);
	if (iVar18 != -1) {
		func_38(iVar18);
	}
	uVar19 = network::_0x742B58F723233ED9(iParam22);
	iVar20 = network::network_get_presence_invite_session_id(uVar19);
	iVar21 = 0;
	iVar21 = 0;
	while (iVar21 <= 11) {
		if (iVar20 == Global_2395239[iVar21 /*4*/].f_3 &&
			gameplay::get_game_timer() < Global_2395239[iVar21 /*4*/].f_2) {
			Global_2395239[iVar21 /*4*/].f_2 = gameplay::get_game_timer() + 30000;
			iVar21 = 12;
			func_46(iParam22);
			return 0;
		}
		iVar21++;
	}
	Var22.f_1 = -1;
	Var22.f_2 = -1;
	Var22.f_9 = -1;
	func_37(&Var22);
	iVar32 = 0;
	iVar33 = 0;
	iVar34 = 63;
	iVar35 = 0;
	StringCopy(&Var36, "", 64);
	StringCopy(&Var52, "", 64);
	iVar68 = 0;
	iVar69 = 0;
	iVar70 = 0;
	iVar71 = 1;
	iVar72 = 0;
	iVar73 = 0;
	if (func_36(&Param0, &iVar32, &iVar35)) {
		iVar34 = 40;
		iVar69 = 0;
		iVar35 = iVar35;
	}
	else if (func_34(&Param0, &Var22, 0)) {
		iVar34 = Var22.f_2;
		iVar32 = func_33(iVar34, Var22.f_1);
		iVar33 = func_32(&Var22);
		Var36 = {func_31(&Var22, 0)};
		Var52 = {func_30(&Var22)};
		iVar69 = 1;
		iVar68 = func_29(&Var22, 0);
		iVar73 = func_28(&Var22);
		iVar74 = func_26(&Var22);
		iVar75 = func_25(&Var22);
		iVar76 = func_20(&Var22);
		if (!iVar76) {
			iVar72 = 1;
		}
	}
	else {
		iVar77 = 0;
		if (func_18(player::player_id(), Param23)) {
			if (!network::network_is_game_in_progress()) {
				iVar77 = 1;
			}
			else {
				func_46(iParam22);
				if (gameplay::is_xbox360_version() || gameplay::is_ps3_version())
					&&!network::network_is_game_in_progress() { func_17(); }
				else {
					func_15(0);
				}
				return 0;
			}
		}
		if (!gameplay::is_durango_version()) {
			if (!iVar77) {
				if (func_13(player::player_id(), Param23)) {
					func_46(iParam22);
					func_15(0);
					return 0;
				}
			}
		}
		if (!func_12()) {
			func_46(iParam22);
			iVar78 = 1;
			func_15(iVar78);
			return 0;
		}
		iVar79 = 0;
		if (!iVar77) {
			if (func_7(Param23, &iVar79, 1)) {
				func_46(iParam22);
				func_15(iVar79);
				return 0;
			}
		}
		iVar70 = 1;
		iVar71 = 0;
		iVar69 = 1;
	}
	iVar80 = Global_1362993;
	if (iVar80 >= 12) {
		iVar80--;
	}
	iVar81 = iVar80 - 1;
	while (iVar81 >= 0) {
		Global_2392964[iVar80 /*99*/] = {Global_2392964[iVar81 /*99*/]};
		iVar80--;
		iVar81--;
	}
	Global_1362993++;
	if (Global_1362993 > 12) {
		Global_1362993 = 12;
	}
	iVar82 = 0;
	Global_2392964[iVar82 /*99*/] = 0;
	Global_2392964[iVar82 /*99*/].f_1 = 0;
	Global_2392964[iVar82 /*99*/].f_5 = 0;
	Global_2392964[iVar82 /*99*/].f_2 = iVar70;
	Global_2392964[iVar82 /*99*/].f_3 = 0;
	Global_2392964[iVar82 /*99*/].f_4 = iVar71;
	Global_2392964[iVar82 /*99*/].f_6 = {Param0};
	Global_2392964[iVar82 /*99*/].f_12 = iVar74;
	Global_2392964[iVar82 /*99*/].f_13 = iVar75;
	Global_2392964[iVar82 /*99*/].f_15 = {Param6};
	StringCopy(&Global_2392964[iVar82 /*99*/].f_31, "", 64);
	Global_2392964[iVar82 /*99*/].f_49 = iVar34;
	Global_2392964[iVar82 /*99*/].f_50 = iVar32;
	Global_2392964[iVar82 /*99*/].f_51 = iVar33;
	Global_2392964[iVar82 /*99*/].f_91 = iParam22;
	Global_2392964[iVar82 /*99*/].f_57 = {Var36};
	Global_2392964[iVar82 /*99*/].f_73 = {Var52};
	Global_2392964[iVar82 /*99*/].f_52 = iVar68;
	Global_2392964[iVar82 /*99*/].f_53 = 0;
	Global_2392964[iVar82 /*99*/].f_53.f_1 = 0;
	Global_2392964[iVar82 /*99*/].f_53.f_2 = 0;
	Global_2392964[iVar82 /*99*/].f_56 = iVar69;
	Global_2392964[iVar82 /*99*/].f_90 = uParam36;
	Global_2392964[iVar82 /*99*/].f_92 = -1;
	Global_2392964[iVar82 /*99*/].f_93 = iVar72;
	Global_2392964[iVar82 /*99*/].f_94 = Global_2395291;
	Global_2392964[iVar82 /*99*/].f_95 = iVar73;
	Global_2392964[iVar82 /*99*/].f_98 = network::network_is_friend(&Param23);
	if (Global_2392964[iVar82 /*99*/].f_50 == 0) {
		if (Global_2392964[iVar82 /*99*/].f_51 == 1) {
			Global_2392964[iVar82 /*99*/].f_56 = 0;
		}
	}
	Global_2392964[iVar82 /*99*/].f_96 = func_6(Param23, iVar82);
	Global_2392964[iVar82 /*99*/].f_97 = 0;
	Global_2392964[iVar82 /*99*/].f_89 = iParam37;
	Global_2395291++;
	Global_2392964[iVar82 /*99*/].f_47 = func_5(Param23);
	if (Global_2392964[iVar82 /*99*/].f_47 != -1) {
		Global_2392964[iVar82 /*99*/].f_48 = gameplay::get_game_timer() + 15000;
	}
	return 1;
}

// Position - 0x867
int func_5(struct<13> Param0) {
	struct<13> Var0[1];
	int iVar14;

	if (!gameplay::is_durango_version()) {
		return -1;
	}
	Var0[0 /*13*/] = {Param0};
	iVar14 = network::_0xD66C9E72B3CC4982(&Var0, 1);
	if (iVar14 < 0) {
		return -1;
	}
	return iVar14;
}

// Position - 0x8A2
int func_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7,
		   var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13) {
	if (!network::network_is_friend(&uParam0)) {
		return 0;
	}
	if (Global_2392964[iParam13 /*99*/].f_90 > 0) {
		return 0;
	}
	return 1;
}

// Position - 0x8CB
bool func_7(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7,
			var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int *iParam13, int iParam14) {
	struct<13> Var0;

	*iParam13 = 0;
	if (func_11(0)) {
		return false;
	}
	if (gameplay::is_durango_version()) {
		if (!func_10()) {
			*iParam13 = 1;
			return true;
		}
	}
	if (!func_9(1) && !iParam14) {
		return true;
	}
	Var0 = {func_8(player::player_id())};
	if (!iParam14 && !network::network_are_handles_the_same(&Var0, &uParam0)) {
		if (!network::network_is_friend(&uParam0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x93F
struct<13> func_8(int iParam0) {
	struct<13> Var0;

	network::network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

//Position - 0x956
int func_9(int iParam0)
{
	if (gameplay::is_ps3_version() || gameplay::is_orbis_version() && iParam0 == 0) {
		if (network::_0x72D918C99BCACC54(1) == 0 || network::_0xAEEF48CDF5B6CE7C(1, -1) == 0) {
			return 0;
		}
	}
	else if (network::_0x72D918C99BCACC54(1) == 0) {
		return 0;
	}
	if (func_10() == 0) {
		return 0;
	}
	return 1;
}

// Position - 0x9B1
int func_10() {
	if (gameplay::is_ps3_version() && network::network_have_online_privileges()) {
		return 1;
	}
	if (gameplay::is_xbox360_version() && network::network_have_online_privileges()) {
		return 1;
	}
	if (gameplay::is_orbis_version() && network::_0x1353F87E89946207() == 0 &&
		network::network_have_online_privileges()) {
		return 1;
	}
	if (gameplay::is_durango_version() && network::network_have_online_privileges()) {
		return 1;
	}
	if (gameplay::is_pc_version() && network::network_have_online_privileges()) {
		return 1;
	}
	return 0;
}

// Position - 0xA29
bool func_11(int iParam0) {
	if (gameplay::is_ps3_version() || gameplay::is_orbis_version() && iParam0 == 0) {
		if (network::_0x72D918C99BCACC54(0) == 0 || network::_0xAEEF48CDF5B6CE7C(0, -1) == 0) {
			return false;
		}
	}
	else if (network::_0x72D918C99BCACC54(0) == 0) {
		return false;
	}
	if (func_10() == 0) {
		return false;
	}
	return true;
}

// Position - 0xA84
int func_12() {
	if (!gameplay::is_xbox360_version()) {
		return 1;
	}
	return network::network_have_online_privileges();
}

// Position - 0xA9C
bool func_13(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7,
			 var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) {
	if (!func_14(iParam0)) {
		if (gameplay::is_durango_version()) {
			if (network::_0xB57A49545BA53CE7(&uParam1)) {
				return false;
			}
		}
		if (!network::_0x72D918C99BCACC54(0)) {
			if (!network::_0x72D918C99BCACC54(1)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0xAD9
int func_14(int iParam0) {
	switch (iParam0) {
	case 63:
	case 62:
	case 61:
	case 40: return 1;

	default:
	}
	return 0;
}

// Position - 0xB05
void func_15(int iParam0) {
	int iVar0;

	if (iParam0) {
		if (!gameplay::is_xbox360_version()) {
			return;
		}
	}
	iVar0 = gameplay::get_game_timer();
	if (iVar0 < Global_2395288) {
		return;
	}
	if (ui::is_help_message_being_displayed()) {
		return;
	}
	if (iParam0) {
		func_16("INV_NO_XBOXLIVE", -1);
	}
	else {
		func_16("INV_RESTRICT", -1);
	}
	Global_2395288 = iVar0 + 1800000;
}

// Position - 0xB5B
void func_16(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0xB72
void func_17() {
	int iVar0;

	if (!gameplay::is_xbox360_version() && !gameplay::is_ps3_version()) {
		return;
	}
	if (network::network_is_game_in_progress()) {
		return;
	}
	iVar0 = gameplay::get_game_timer();
	if (iVar0 < Global_2395288) {
		return;
	}
	if (ui::is_help_message_being_displayed()) {
		return;
	}
	func_16("INV_RESTRICT_SP", -1);
	Global_2395288 = iVar0 + 1800000;
}

// Position - 0xBC8
bool func_18(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7,
			 var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13) {
	if (!func_14(iParam0)) {
		if (gameplay::is_durango_version()) {
			if (network::_0xB57A49545BA53CE7(&uParam1)) {
				return false;
			}
		}
		if (!func_19()) {
			return true;
		}
	}
	return false;
}

// Position - 0xBFB
int func_19() {
	if (network::_0x66B59CFFD78467AF() == 0) {
		return 0;
	}
	if (gameplay::is_ps3_version()) {
		if (network::_0xAEEF48CDF5B6CE7C(1, -1)) {
			if (network::network_have_online_privileges()) {
				return 1;
			}
		}
	}
	if (gameplay::is_orbis_version()) {
		if (network::_0x72D918C99BCACC54(1)) {
			if (network::network_have_online_privileges()) {
				return 1;
			}
		}
	}
	if (gameplay::is_xbox360_version() || gameplay::is_durango_version()) {
		if (network::_0x595F028698072DD9(0, -3, 1)) {
			return 1;
		}
	}
	if (gameplay::is_pc_version()) {
		if (network::_0xAEEF48CDF5B6CE7C(0, -1)) {
			if (network::network_have_online_privileges()) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0xC81
int func_20(var *uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (func_24(uParam0)) {
		return gameplay::is_bit_set(Global_2395293.f_356[uParam0->f_9 /*75*/].f_10.f_63, 14);
	}
	if (func_23(uParam0->f_1)) {
		if (func_22(uParam0)) {
			return gameplay::is_bit_set(Global_2398050.f_1.f_63, 14);
		}
		return iVar0;
	}
	iVar1 = func_21(uParam0);
	if (iVar1 == -1) {
		return iVar0;
	}
	switch (uParam0->f_2) {
	case 63: return gameplay::is_bit_set(Global_794643.f_4[iVar1 /*88*/].f_76, 14);

	case 62: return gameplay::is_bit_set(Global_907640.f_1204[iVar1 /*88*/].f_76, 14);

	case 40: return iVar0;

	default:
	}
	if (uParam0->f_2 == player::player_id()) {
		return iVar0;
	}
	else if (uParam0->f_2 < 32) {
		return iVar0;
	}
	return iVar0;
}

// Position - 0xD5D
int func_21(var *uParam0) {
	int iVar0;

	if (gameplay::is_string_null_or_empty(&uParam0->f_3)) {
		return -1;
	}
	if (func_23(uParam0->f_1)) {
		if (func_22(uParam0)) {
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2) {
	case 63:
		if (gameplay::is_bit_set(Global_794643.f_4[uParam0->f_1 /*88*/].f_76, 13)) {
			if (gameplay::are_strings_equal(&Global_794643.f_4[uParam0->f_1 /*88*/], &uParam0->f_3)) {
				return uParam0->f_1;
			}
		}
		if (!gameplay::is_bit_set(Global_794643.f_4[uParam0->f_1 /*88*/].f_76, 13)) {
			if (Global_1310987.f_5) {
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 1118) {
			if (gameplay::is_bit_set(Global_794643.f_4[iVar0 /*88*/].f_76, 13)) {
				if (gameplay::are_strings_equal(&Global_794643.f_4[iVar0 /*88*/], &uParam0->f_3)) {
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;

	case 62:
		if (gameplay::is_bit_set(Global_907640.f_1204[uParam0->f_1 /*88*/].f_76, 13)) {
			if (gameplay::are_strings_equal(&Global_907640.f_1204[uParam0->f_1 /*88*/], &uParam0->f_3)) {
				return uParam0->f_1;
			}
		}
		if (!gameplay::is_bit_set(Global_907640.f_1204[uParam0->f_1 /*88*/].f_76, 13)) {
			if (Global_1310987.f_5) {
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 200) {
			if (gameplay::is_bit_set(Global_907640.f_1204[iVar0 /*88*/].f_76, 13)) {
				if (gameplay::are_strings_equal(&Global_907640.f_1204[iVar0 /*88*/], &uParam0->f_3)) {
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;

	case 40: return uParam0->f_1;

	default:
	}
	if (uParam0->f_2 == player::player_id()) {
		if (gameplay::is_bit_set(Global_950886.f_5[uParam0->f_1 /*88*/].f_76, 13)) {
			if (gameplay::are_strings_equal(&Global_950886.f_5[uParam0->f_1 /*88*/], &uParam0->f_3)) {
				return uParam0->f_1;
			}
		}
		if (gameplay::is_bit_set(Global_950886.f_5[uParam0->f_1 /*88*/].f_76, 13)) {
			if (Global_1310987.f_5) {
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62) {
			if (gameplay::is_bit_set(Global_950886.f_5[iVar0 /*88*/].f_76, 13)) {
				if (gameplay::are_strings_equal(&Global_950886.f_5[iVar0 /*88*/], &uParam0->f_3)) {
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32) {
		return -1;
	}
	return -1;
}

// Position - 0xFCD
bool func_22(var *uParam0) {
	if (Global_2398050) {
		if (gameplay::are_strings_equal(&Global_2398050.f_1, &uParam0->f_3)) {
			return true;
		}
	}
	return false;
}

// Position - 0xFF2
bool func_23(int iParam0) { return iParam0 == 9999; }

// Position - 0x1000
bool func_24(var *uParam0) {
	int iVar0;

	iVar0 = uParam0->f_9;
	if (iVar0 == -1) {
		return false;
	}
	if (!Global_2395293.f_356[iVar0 /*75*/]) {
		return false;
	}
	if (!gameplay::are_strings_equal(&Global_2395293.f_356[iVar0 /*75*/].f_10, &uParam0->f_3)) {
		return false;
	}
	if (!gameplay::is_bit_set(Global_2395293.f_356[iVar0 /*75*/].f_5, 3)) {
		return false;
	}
	return true;
}

// Position - 0x1063
int func_25(var *uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_21(uParam0);
	if (iVar1 == -1) {
		return iVar0;
	}
	switch (uParam0->f_2) {
	case 63: return Global_794643.f_4[iVar1 /*88*/].f_80;

	case 62: return iVar0;

	default:
	}
	return iVar0;
}

// Position - 0x10AC
int func_26(var *uParam0) {
	struct<13> Var0;
	int iVar13;
	int iVar14;

	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_21(uParam0);
	if (iVar14 == -1) {
		return iVar13;
	}
	switch (uParam0->f_2) {
	case 63: Var0 = {func_27(uParam0)}; return Var0.f_1;

	case 62: return iVar13;

	default:
	}
	return iVar13;
}

// Position - 0x1113
struct<13> func_27(var *uParam0) {
	struct<13> Var0;
	int iVar13;

	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_21(uParam0);
	if (iVar13 == -1) {
		return Var0;
	}
	switch (uParam0->f_2) {
	case 63: return Global_794643.f_98389[iVar13 /*13*/];

	case 62: return Global_907640.f_18805[iVar13 /*13*/];

	default:
	}
	return Var0;
}

//Position - 0x118A
int func_28(var* uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (func_24(uParam0)) {
		return gameplay::is_bit_set(Global_2395293.f_356[uParam0->f_9 /*75*/].f_10.f_63, 17);
	}
	if (func_23(uParam0->f_1)) {
		if (func_22(uParam0)) {
			return gameplay::is_bit_set(Global_2398050.f_1.f_63, 17);
		}
		return iVar0;
	}
	iVar1 = func_21(uParam0);
	if (iVar1 == -1) {
		return iVar0;
	}
	switch (uParam0->f_2) {
	case 63: return gameplay::is_bit_set(Global_794643.f_4[iVar1 /*88*/].f_76, 17);

	case 62: return gameplay::is_bit_set(Global_907640.f_1204[iVar1 /*88*/].f_76, 17);

	case 40: return iVar0;

	default:
	}
	if (uParam0->f_2 == player::player_id()) {
		return iVar0;
	}
	else if (uParam0->f_2 < 32) {
		return iVar0;
	}
	return iVar0;
}

// Position - 0x1266
int func_29(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!iParam1) {
		if (func_24(uParam0)) {
			if (gameplay::is_bit_set(Global_1311772.f_1[uParam0->f_9 /*2*/], 0)) {
				return Global_2398184.f_513[uParam0->f_9];
			}
		}
	}
	if (func_23(uParam0->f_1)) {
		if (func_22(uParam0)) {
			return Global_2398050.f_1.f_54;
		}
		return iVar0;
	}
	iVar1 = func_21(uParam0);
	if (iVar1 == -1) {
		return 0;
	}
	switch (uParam0->f_2) {
	case 63: return Global_794643.f_4[iVar1 /*88*/].f_54;

	case 62: return Global_907640.f_1204[iVar1 /*88*/].f_54;

	case 40: return 0;

	default:
	}
	if (uParam0->f_2 == player::player_id()) {
		return Global_950886.f_5[iVar1 /*88*/].f_54;
	}
	else if (uParam0->f_2 < 32) {
		return iVar0;
	}
	return iVar0;
}

// Position - 0x1348
struct<16> func_30(var *uParam0) {
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, "NO DESCRIPTION", 64);
	if (func_24(uParam0)) {
		return Global_2395293.f_356[uParam0->f_9 /*75*/].f_10.f_28;
	}
	if (func_23(uParam0->f_1)) {
		if (func_22(uParam0)) {
			return Global_2398050.f_1.f_28;
		}
		return Var0;
	}
	iVar16 = func_21(uParam0);
	if (iVar16 == -1) {
		return Var0;
	}
	switch (uParam0->f_2) {
	case 63: return Global_794643.f_4[iVar16 /*88*/].f_38;

	case 62: return Global_907640.f_1204[iVar16 /*88*/].f_38;

	case 40: return Var0;

	default:
	}
	if (uParam0->f_2 == player::player_id()) {
		return Global_950886.f_5[iVar16 /*88*/].f_38;
	}
	else if (uParam0->f_2 < 32) {
		return Var0;
	}
	return Var0;
}

// Position - 0x1438
struct<16>
func_31(var *uParam0, int iParam1) {
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, "UNKNOWN", 64);
	if (iParam1) {
		StringCopy(&Var0, "", 64);
	}
	if (!iParam1) {
		if (func_24(uParam0)) {
			if (gameplay::is_bit_set(Global_1311772.f_1[uParam0->f_9 /*2*/], 0)) {
				return Global_2398184[uParam0->f_9 /*16*/];
			}
			return Global_2395293.f_356[uParam0->f_9 /*75*/].f_10.f_12;
		}
	}
	if (func_23(uParam0->f_1)) {
		if (func_22(uParam0)) {
			return Global_2398050.f_1.f_12;
		}
		return Var0;
	}
	iVar16 = func_21(uParam0);
	if (iVar16 == -1) {
		return Var0;
	}
	switch (uParam0->f_2) {
	case 63: return Global_794643.f_4[iVar16 /*88*/].f_22;

	case 62: return Global_907640.f_1204[iVar16 /*88*/].f_22;

	case 40: return Var0;

	default:
	}
	if (uParam0->f_2 == player::player_id()) {
		return Global_950886.f_5[iVar16 /*88*/].f_22;
	}
	else if (uParam0->f_2 < 32) {
		return Var0;
	}
	return Var0;
}

//Position - 0x155D
int func_32(var* uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (func_24(uParam0)) {
		return Global_2395293.f_356[uParam0->f_9 /*75*/].f_10.f_55;
	}
	if (func_23(uParam0->f_1)) {
		if (func_22(uParam0)) {
			return Global_2398050.f_1.f_55;
		}
		return iVar0;
	}
	iVar1 = func_21(uParam0);
	if (iVar1 == -1) {
		return iVar0;
	}
	switch (uParam0->f_2) {
	case 63: return Global_794643.f_4[iVar1 /*88*/].f_68;

	case 62: return Global_907640.f_1204[iVar1 /*88*/].f_68;

	case 40: return iVar0;

	default:
	}
	if (uParam0->f_2 == player::player_id()) {
		return Global_950886.f_5[iVar1 /*88*/].f_68;
	}
	else if (uParam0->f_2 < 32) {
		return iVar0;
	}
	return iVar0;
}

// Position - 0x162B
int func_33(int iParam0, int iParam1) {
	if (func_23(iParam1)) {
		if (Global_2398050) {
			return Global_2398050.f_1.f_53;
		}
		return 228;
	}
	switch (iParam0) {
	case 63: return Global_794643.f_4[iParam1 /*88*/].f_65;

	case 62: return Global_907640.f_1204[iParam1 /*88*/].f_65;

	default:
	}
	if (iParam0 == player::player_id()) {
		return Global_950886.f_5[iParam1 /*88*/].f_65;
	}
	else if (iParam0 < 32) {
		return 228;
	}
	return 228;
}

// Position - 0x16B1
bool func_34(char *sParam0, var *uParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!network::network_is_game_in_progress()) {
		return false;
	}
	if (gameplay::is_string_null_or_empty(sParam0)) {
		return false;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = 1118;
	if (!iParam2) {
		iVar2 = 1100;
	}
	iVar0 = 0;
	while (iVar0 < iVar2) {
		if (gameplay::is_bit_set(Global_794643.f_4[iVar0 /*88*/].f_76, 13)) {
			if (gameplay::are_strings_equal(&Global_794643.f_4[iVar0 /*88*/], sParam0)) {
				iVar1 = Global_794643.f_4[iVar0 /*88*/].f_65;
				*uParam1 = func_35(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 63;
				uParam1->f_3 = {Global_794643.f_4[iVar0 /*88*/]};
				uParam1->f_9 = -1;
				return true;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 200) {
		if (gameplay::is_bit_set(Global_907640.f_1204[iVar0 /*88*/].f_76, 13)) {
			if (gameplay::are_strings_equal(&Global_907640.f_1204[iVar0 /*88*/], sParam0)) {
				iVar1 = Global_907640.f_1204[iVar0 /*88*/].f_65;
				*uParam1 = func_35(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 62;
				uParam1->f_3 = {*sParam0};
				uParam1->f_9 = -1;
				return true;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 62) {
		if (gameplay::is_bit_set(Global_950886.f_5[iVar0 /*88*/].f_76, 13)) {
			if (gameplay::are_strings_equal(&Global_950886.f_5[iVar0 /*88*/], sParam0)) {
				iVar1 = Global_950886.f_5[iVar0 /*88*/].f_65;
				*uParam1 = func_35(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = player::player_id();
				uParam1->f_3 = {*sParam0};
				uParam1->f_9 = -1;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0x1849
int func_35(int iParam0) {
	switch (iParam0) {
	case 15: return 124;

	case 14: return 125;

	case 122: return 129;

	case 11: return 126;

	case 13: return 127;

	case 12: return 128;

	case 8: return 131;

	case 1: return 132;

	case 5: return 130;

	case 6: return 133;

	case 3: return 136;

	case 0: return 134;

	case 2: return 135;

	case 148: return 49;

	case 151: return 52;

	case 152: return 53;

	case 157: return 54;

	case 153: return 55;

	case 154: return 56;

	case 155: return 57;

	case 159: return 58;

	case 162: return 51;

	case 142: return 60;

	case 160: return 62;

	case 164: return 63;

	case 163: return 64;

	case 166: return 65;

	case 167: return 66;

	case 168: return 67;

	case 169: return 68;

	case 170: return 69;

	case 171: return 70;

	case 172: return 71;

	case 173: return 72;

	case 178: return 73;

	case 188: return 74;

	case 214: return 75;

	case 215: return 76;

	case 216: return 77;

	case 217: return 78;

	case 218: return 79;

	case 219: return 80;

	case 220: return 81;

	case 221: return 82;

	case 179: return 84;

	case 189: return 83;

	case 180: return 85;

	case 182: return 86;

	case 183: return 87;

	case 185: return 88;

	case 186: return 89;

	case 190: return 90;

	case 191: return 91;

	case 192: return 92;

	case 193: return 93;

	case 205: return 101;

	case 194: return 94;

	case 197: return 95;

	case 198: return 96;

	case 195: return 97;

	case 199: return 98;

	case 200: return 99;

	case 201: return 100;

	case 207: return 102;

	case 208: return 103;

	case 209: return 104;

	case 210: return 105;

	default:
	}
	return 0;
}

// Position - 0x1B3A
bool func_36(char *sParam0, int *iParam1, int iParam2) {
	int iVar0;
	char[] cVar1[8];
	char cVar3[16];
	char[] cVar7[8];

	if (gameplay::is_string_null_or_empty(sParam0)) {
		return false;
	}
	iVar0 = ui::_get_length_of_string(sParam0);
	if (iVar0 <= 12) {
		return false;
	}
	StringCopy(&cVar1, ui::_get_text_substring_slice(sParam0, 0, 5), 8);
	if (!gameplay::are_strings_equal(&cVar1, "FAKE_")) {
		return false;
	}
	StringCopy(&cVar3, ui::_get_text_substring_slice(sParam0, 5, 12), 16);
	if (gameplay::are_strings_equal(&cVar3, "GOLF___")) {
		*iParam1 = 11;
	}
	else if (gameplay::are_strings_equal(&cVar3, "TENNIS_")) {
		*iParam1 = 12;
	}
	else if (gameplay::are_strings_equal(&cVar3, "PILOTS_")) {
		*iParam1 = 122;
	}
	else if (gameplay::are_strings_equal(&cVar3, "SHOOTR_")) {
		*iParam1 = 13;
	}
	else if (gameplay::are_strings_equal(&cVar3, "DARTS__")) {
		*iParam1 = 14;
	}
	else if (gameplay::are_strings_equal(&cVar3, "ARMWRS_")) {
		*iParam1 = 15;
	}
	else {
		return false;
	}
	StringCopy(&cVar7, ui::_get_text_substring_slice(sParam0, 12, iVar0), 8);
	if (!gameplay::string_to_int(&cVar7, iParam2)) {
		return false;
	}
	return true;
}

// Position - 0x1C29
void func_37(var *uParam0) {
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	StringCopy(&uParam0->f_3, "", 24);
	uParam0->f_9 = -1;
}

// Position - 0x1C4C
void func_38(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 >= Global_1362993) {
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 11) {
		if (gameplay::get_game_timer() > Global_2395239[iVar0 /*4*/].f_2 || Global_2395239[iVar0 /*4*/].f_2 == 0) {
			if (network::network_get_num_presence_invites() > 0 &&
				Global_2392964[iParam0 /*99*/].f_91 < network::network_get_num_presence_invites()) {
				Global_2395239[iVar0 /*4*/].f_3 =
					network::network_get_presence_invite_session_id(Global_2392964[iParam0 /*99*/].f_91);
				Global_2395239[iVar0 /*4*/].f_2 = gameplay::get_game_timer() + 30000;
				iVar0 = 12;
			}
		}
		iVar0++;
	}
	if (Global_2392964[iParam0 /*99*/].f_92 != -1) {
		ui::_remove_notification(Global_2392964[iParam0 /*99*/].f_92);
	}
	if (!Global_2392964[iParam0 /*99*/].f_56) {
		if (Global_2392964[iParam0 /*99*/].f_52 != 0) {
			network::_0x5A34CD9C3C5BEC44(Global_2392964[iParam0 /*99*/].f_52);
		}
	}
	func_46(Global_2392964[iParam0 /*99*/].f_91);
	iVar1 = iParam0;
	iVar2 = iVar1 + 1;
	while (iVar2 < Global_1362993) {
		Global_2392964[iVar1 /*99*/] = {Global_2392964[iVar2 /*99*/]};
		iVar1++;
		iVar2++;
	}
	func_40(iVar1);
	Global_1362993--;
	if (Global_1362966) {
		if (Global_1362964 > 0) {
			func_39();
		}
	}
}

// Position - 0x1D94
void func_39() { Global_1362966 = 0; }

// Position - 0x1DA1
void func_40(int iParam0) {
	Global_2392964[iParam0 /*99*/] = 0;
	Global_2392964[iParam0 /*99*/].f_1 = 0;
	Global_2392964[iParam0 /*99*/].f_5 = 0;
	StringCopy(&Global_2392964[iParam0 /*99*/].f_15, "", 64);
	StringCopy(&Global_2392964[iParam0 /*99*/].f_31, "", 64);
	Global_2392964[iParam0 /*99*/].f_47 = -1;
	Global_2392964[iParam0 /*99*/].f_48 = gameplay::get_game_timer();
	Global_2392964[iParam0 /*99*/].f_49 = -1;
	Global_2392964[iParam0 /*99*/].f_50 = -1;
	Global_2392964[iParam0 /*99*/].f_51 = -1;
	Global_2392964[iParam0 /*99*/].f_52 = 0;
	Global_2392964[iParam0 /*99*/].f_53 = 0;
	Global_2392964[iParam0 /*99*/].f_53.f_1 = 0;
	Global_2392964[iParam0 /*99*/].f_53.f_2 = 0;
	Global_2392964[iParam0 /*99*/].f_56 = 0;
	StringCopy(&Global_2392964[iParam0 /*99*/].f_57, "", 64);
	StringCopy(&Global_2392964[iParam0 /*99*/].f_73, "", 64);
	Global_2392964[iParam0 /*99*/].f_89 = 0;
	Global_2392964[iParam0 /*99*/].f_90 = 0;
	Global_2392964[iParam0 /*99*/].f_91 = -1;
	Global_2392964[iParam0 /*99*/].f_92 = -1;
	Global_2392964[iParam0 /*99*/].f_93 = 0;
	Global_2392964[iParam0 /*99*/].f_94 = -1;
	Global_2392964[iParam0 /*99*/].f_95 = 0;
	Global_2392964[iParam0 /*99*/].f_96 = 0;
	Global_2392964[iParam0 /*99*/].f_97 = 0;
	Global_2392964[iParam0 /*99*/].f_98 = 0;
}

// Position - 0x1EE3
int func_41(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7,
			var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14,
			var uParam15) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1362993) {
		if (gameplay::are_strings_equal(&uParam0, &Global_2392964[iVar0 /*99*/].f_15)) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x1F1C
bool func_42(int iParam0) { return gameplay::is_bit_set(Global_1591201[iParam0 /*602*/].f_139, 22); }

// Position - 0x1F35
int func_43(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return 1;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x1F60
int func_44() {
	if (Global_101700.f_8044.f_330[0 /*6*/]) {
		return 1;
	}
	return 0;
}

// Position - 0x1F7D
bool func_45() { return gameplay::is_bit_set(Global_1591201[player::player_id() /*602*/].f_139, 2); }

// Position - 0x1F97
void func_46(int iParam0) {
	int iVar0;

	iVar0 = network::_0x742B58F723233ED9(iParam0);
	if (iVar0 < 0 || iVar0 >= network::network_get_num_presence_invites()) {
		return;
	}
	if (network::network_remove_presence_invite(iVar0)) {
		return;
	}
}

// Position - 0x1FCA
bool func_47() { return Global_1315193 == 10; }

// Position - 0x1FD9
bool func_48() {
	if (!Global_69702) {
		return true;
	}
	else if (func_49()) {
		return true;
	}
	return false;
}

// Position - 0x1FFC
bool func_49() {
	if (Global_1312446) {
		return true;
	}
	if (func_54()) {
		return true;
	}
	if (func_53()) {
		return true;
	}
	return func_50(120, -1);
}

// Position - 0x202C
int func_50(int iParam0, int iParam1) {
	int iVar0;
	var uVar1;

	iVar0 = Global_2522581[iParam0 /*3*/][func_51(iParam1)];
	if (stats::stat_get_bool(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x2058
int func_51(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_52();
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

// Position - 0x208C
int func_52() { return Global_1312735; }

// Position - 0x2098
bool func_53() { return Global_1315221; }

// Position - 0x20A4
bool func_54() { return Global_1315223; }

// Position - 0x20B0
void func_55(var uParam0, int iParam1) {
	int iVar0;

	iVar0 = iParam1;
	if (iVar0 == -1) {
		iVar0 = func_52();
	}
	Global_1315213[iVar0] = uParam0;
}

// Position - 0x20D2
void func_56(int iParam0) {
	func_103();
	if (func_102(1)) {
		if (!func_93()) {
			if (!func_82(1)) {
				if (network::network_is_activity_session()) {
					func_81();
				}
				func_59(1, 0);
				network::network_accept_presence_invite(iParam0);
				func_58();
				func_57();
			}
		}
	}
}

// Position - 0x2117
void func_57() { Global_1751175.f_7 = 1; }

// Position - 0x2126
void func_58() { Global_1751175.f_6 = 1; }

// Position - 0x2135
void func_59(int iParam0, int iParam1) {
	if (func_102(iParam0)) {
		Global_1751175.f_16[iParam0 /*44*/].f_5 = 1;
		func_61(iParam0, 0);
		func_60();
		if (iParam1) {
			Global_1751175 = 1;
		}
	}
}

// Position - 0x2168
void func_60() { Global_1751175.f_2 = 1; }

// Position - 0x2177
void func_61(int iParam0, int iParam1) {
	struct<6> Var0;

	if (!network::network_is_activity_session()) {
		if (iParam1) {
			func_80();
			func_73(player::player_id(), 0, 81920);
			Global_1591201[player::player_id() /*602*/].f_95 = 8;
			func_72();
			func_71();
		}
		func_70(iParam0);
		func_69(iParam0);
		func_67();
		func_66();
		func_60();
	}
	Var0 = {func_65(iParam0)};
	func_64(iParam0);
	func_62(&Var0);
}

// Position - 0x21E2
void func_62(char *sParam0) {
	StringCopy(&Global_2443134.f_737, sParam0, 24);
	if (func_63()) {
		StringCopy(&Global_970912.f_42, sParam0, 24);
	}
}

// Position - 0x2206
bool func_63() { return gameplay::is_bit_set(Global_2443905.f_1.f_2808, 5); }

// Position - 0x221C
void func_64(int iParam0) { Global_1751175.f_16[iParam0 /*44*/].f_3 = 1; }

// Position - 0x2231
struct<6> func_65(int iParam0) {
	return Global_1751175.f_16[iParam0 /*44*/].f_6;
}

//Position - 0x2247
void func_66()
{
	Global_2443134.f_5 = 100;
}

// Position - 0x2257
void func_67() {
	gameplay::set_bit(&Global_2443134, 5);
	func_68();
}

// Position - 0x226C
void func_68() { gameplay::set_bit(&Global_2443134, 8); }

// Position - 0x227E
void func_69(var uParam0) { Global_1751175.f_8 = uParam0; }

// Position - 0x228E
void func_70(var uParam0) { Global_1751175.f_9 = uParam0; }

// Position - 0x229E
void func_71() { Global_2450895.f_1 = 0; }

// Position - 0x22AD
void func_72() {
	char *sVar0;

	StringCopy(&Global_2443134.f_737, sVar0, 24);
}

// Position - 0x22C0
void func_73(int iParam0, int iParam1, int iParam2) {
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
		if (!func_78()) {
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
				if (!func_77(iVar25) && !entity::is_entity_attached_to_any_vehicle(iVar25)) {
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
				func_76();
				func_75();
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
				if (!func_77(iVar25) && !entity::is_entity_attached_to_any_vehicle(iVar25)) {
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
					if (func_74(Global_1633501.f_107548)) {
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

// Position - 0x2677
bool func_74(int iParam0) { return iParam0 == 17; }

// Position - 0x2684
void func_75() {
	struct<2> Var0;

	Global_2433125.f_731 = 0;
	Global_2433125.f_732 = 0;
	Global_2433125.f_733 = {9999.9f, 9999.9f, 9999.9f};
	Global_2404994.f_2220 = {Var0};
}

// Position - 0x26C1
void func_76() {
	Global_2404994.f_644 = 0;
	Global_2404994.f_2261 = 0;
	Global_2404994.f_501 = 0;
	Global_2404994.f_576 = 0;
	Global_2421664[player::player_id() /*358*/].f_210 = 0;
}

// Position - 0x26F7
int func_77(int iParam0) {
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

// Position - 0x2728
int func_78() {
	if (func_79() == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x273D
int func_79() { return Global_1312466.f_18; }

// Position - 0x274B
void func_80() { gameplay::set_bit(&Global_2443134, 7); }

// Position - 0x275C
void func_81() { gameplay::set_bit(&Global_2443134.f_2, 15); }

// Position - 0x2770
int func_82(int iParam0) {
	if (iParam0 || func_92()) {
		if (!func_84(1)) {
			return 1;
		}
		if (!func_83()) {
			return 1;
		}
		if (network::network_player_is_cheater()) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x27AC
bool func_83() { return Global_1751175.f_4; }

// Position - 0x27BA
int func_84(int iParam0) {
	if (!func_89()) {
		return 0;
	}
	if (func_87(func_88(-1), 0) >= 1 || func_50(123, -1))
		&&func_50(133, -1) {
			func_86();
			return 1;
		}
	else if (iParam0) {
		func_85();
	}
	return 0;
}

// Position - 0x280B
void func_85() { Global_1751175.f_5 = 1; }

// Position - 0x281A
void func_86() { Global_1751175.f_4 = 1; }

// Position - 0x2829
int func_87(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	if (iParam1 == 0) {
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = (iVar1 - iVar2) / 2;
	iVar0 = 0;
	while (iVar0 <= 100) {
		if (iVar1 == iVar2) {
			iVar0 = 8000;
			if (iVar3 == 0) {
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_280048[iVar3] == iParam0) {
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_280048[iVar3] < iParam0) {
			if (iVar2 == iVar3) {
				iVar2++;
			}
			else {
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3) {
			iVar1--;
		}
		else {
			iVar1 = iVar3;
		}
		fVar4 = (system::to_float(iVar1) - system::to_float(iVar2)) / 2f + system::to_float(iVar2);
		iVar3 = system::round(fVar4);
		iVar0++;
	}
	return 8000;
}

// Position - 0x28E8
int func_88(int iParam0) { return Global_1363273[func_51(iParam0)]; }

// Position - 0x28FC
int func_89() {
	if (func_91() && func_90(0)) {
		return 1;
	}
	return 0;
}

// Position - 0x291A
var func_90(int iParam0) { return Global_1312373[iParam0]; }

// Position - 0x292A
var func_91() { return func_90(func_52() + 1); }

// Position - 0x293C
var func_92() { return Global_1751175.f_2; }

// Position - 0x294A
int func_93() {
	if (func_101() || !func_99(-1) || !func_97() || !func_96() || !func_95() || func_94()) {
		return 1;
	}
	return 0;
}

// Position - 0x2995
var func_94() { return Global_2452538; }

// Position - 0x29A1
int func_95() {
	if (gameplay::get_profile_setting(903) == 1) {
		return 1;
	}
	return 0;
}

// Position - 0x29BC
int func_96() {
	int iVar0;

	if (network::network_can_access_multiplayer(&iVar0) == 0) {
		if (iVar0 == 1) {
			return 0;
		}
	}
	return 1;
}

// Position - 0x29D9
int func_97() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1) {
		if (func_98(iVar0) == 1) {
			iVar0 = 2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x2A05
int func_98(int iParam0) {
	if (func_50(76, iParam0) == 1) {
		return 1;
	}
	return 0;
}

// Position - 0x2A21
int func_99(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = func_100(iParam0);
	iVar1 = gameplay::get_profile_setting(iVar0);
	if (gameplay::is_bit_set(iVar1, 1)) {
		return 1;
	}
	return 0;
}

// Position - 0x2A48
int func_100(int iParam0) {
	int iVar0;

	if (iParam0 == -1) {
		iParam0 = func_52();
	}
	switch (iParam0) {
	case 0: iVar0 = 914; break;

	case 1: iVar0 = 915; break;

	case 2: iVar0 = 916; break;

	case 3: iVar0 = 917; break;

	case 4: iVar0 = 918; break;
	}
	return iVar0;
}

// Position - 0x2AAB
var func_101() { return Global_2443134.f_621; }

// Position - 0x2ABA
bool func_102(int iParam0) { return Global_1751175.f_16[iParam0 /*44*/].f_4; }

// Position - 0x2ACE
void func_103() {
	int iVar0;
	int iVar1;

	func_109();
	if (socialclub::_0xFF8F3A92B75ED67A() && !func_106()) {
		iVar0 = 0;
		while (iVar0 < 5) {
			iVar1 = socialclub::_0x4A7D6E727F941747(func_105(iVar0));
			if (iVar1 > 0) {
				Global_1751175.f_16[iVar0 /*44*/] = iVar1;
				func_104(iVar0, iVar1);
			}
			iVar0++;
		}
	}
	else {
		iVar0 = 0;
		while (iVar0 < 5) {
			Global_1751175.f_16[iVar0 /*44*/].f_4 = 0;
			iVar0++;
		}
	}
}

// Position - 0x2B45
void func_104(int iParam0, int iParam1) {
	bool bVar0;
	struct<16> Var1;
	var uVar17;

	bVar0 = true;
	if (socialclub::_0x699E4A5C8C893A18(iParam1, "contentId", &Var1)) {
		MemCopy(&Global_1751175.f_16[iParam0 /*44*/].f_6, {Var1}, 6);
	}
	else {
		bVar0 = false;
	}
	if (socialclub::_0x699E4A5C8C893A18(iParam1, "playlist", &Var1)) {
		Global_1751175.f_16[iParam0 /*44*/].f_12 = {Var1};
	}
	else {
		bVar0 = false;
	}
	if (socialclub::_0x19853B5B17D77BCA(iParam1, &Var1)) {
		Global_1751175.f_16[iParam0 /*44*/].f_28 = {Var1};
	}
	else {
		bVar0 = false;
	}
	if (iParam0 == 1) {
		if (socialclub::_0x8CC469AB4D349B7C(iParam1, "coronaCountdown", &uVar17)) {
			Global_1751175.f_16[iParam0 /*44*/].f_1 = uVar17;
		}
		else {
			Global_1751175.f_16[iParam0 /*44*/].f_1 = 120000;
		}
		Global_1751175.f_16[iParam0 /*44*/].f_2 = 0;
		if (socialclub::_0x8CC469AB4D349B7C(iParam1, "eventSubType", &uVar17)) {
			Global_1751175.f_16[iParam0 /*44*/].f_2 = uVar17;
		}
	}
	if (bVar0) {
		if (iParam0 != 1) {
			Global_1751175.f_1 = 1;
		}
		Global_1751175.f_16[iParam0 /*44*/].f_4 = 1;
	}
	else {
		Global_1751175.f_16[iParam0 /*44*/].f_4 = 0;
	}
}

// Position - 0x2C53
char *func_105(int iParam0) {
	switch (iParam0) {
	case 0: return "TournamentQualifying";

	case 1: return "Tournament";

	case 2: return "LiveStreaming";

	case 3: return "Sweepstakes";

	case 4: return "FeaturedPlaylist";

	default:
	}
	return "";
}

// Position - 0x2CA0
int func_106() {
	if (!func_107()) {
		return 1;
	}
	return 0;
}

// Position - 0x2CB5
int func_107() {
	if (func_108()) {
		return 0;
	}
	if (network::network_is_cloud_available() == 0) {
		return 0;
	}
	return 1;
}

// Position - 0x2CD5
bool func_108() { return Global_2453019; }

// Position - 0x2CE1
void func_109() {
	struct<281> Var0;

	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = 6;
	Global_1751175 = {Var0};
}

// Position - 0x2D0C
void func_110(int iParam0) {
	var uVar0;

	if (Global_69702) {
		audio::play_sound_frontend(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
	}
	else {
		audio::play_sound_frontend(-1, "Hang_Up", &Global_14432, 1);
	}
	if (script::get_event_data(1, iParam0, &uVar0, 21)) {
		func_112();
	}
	Global_2499540.f_1 = 0;
	Global_2499540.f_33 = -1;
	Global_2499540.f_34 = -1;
	StringCopy(&Global_2499540.f_4, "", 64);
	func_111(&Global_2499540.f_20);
}

// Position - 0x2D75
void func_111(var *uParam0) {
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

// Position - 0x2DBD
void func_112() {
	Global_2499540.f_2 = 1;
	Global_2499540.f_38 = 1;
	if (network::network_is_signed_online()) {
		if (network::_0x855BC38818F6F684()) {
			while (network::_0xEF0912DDF7C4CB4B()) {
				system::wait(0);
			}
			network::network_session_voice_leave();
			Global_2499540 = 0;
			Global_2499540.f_2 = 0;
		}
		else if (func_118(Global_2499540.f_20)) {
			if (network::network_is_friend(&Global_2499540.f_20)) {
				if (!network::_0x87EB7A3FFCB314DB(&Global_2499540.f_20)) {
					func_117();
				}
			}
		}
		else {
			func_117();
		}
	}
	else {
		func_117();
	}
	if (Global_2499540.f_37) {
		func_113(0);
	}
	Global_2499540.f_37 = 0;
	Global_2499540.f_3 = 0;
}

// Position - 0x2E5D
void func_113(int iParam0) {
	if (Global_14604) {
		func_115(0, 0);
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
	if (!func_114()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x2ECD
bool func_114() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return true;
	}
	return false;
}

// Position - 0x2EF4
void func_115(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_116(0)) {
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

// Position - 0x2F68
bool func_116(int iParam0) {
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

// Position - 0x2FC2
void func_117() {
	Global_2499540.f_1 = 0;
	Global_2499540 = 0;
	Global_2499540.f_2 = 0;
	Global_2499540.f_33 = -1;
	Global_2499540.f_34 = -1;
	StringCopy(&Global_2499540.f_4, "", 64);
	StringCopy(&Global_2499540.f_39[0 /*16*/], "", 64);
	Global_2499540.f_38 = 0;
	Global_2499540.f_56 = 0;
	Global_2499540.f_57 = 0;
	Global_2499540.f_58 = -2;
	Global_2499540.f_3 = 0;
	func_111(&Global_2499540.f_20);
}

// Position - 0x3031
bool func_118(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7,
			  var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) {
	return network::network_is_handle_valid(&uParam0, 13);
}

// Position - 0x3041
void func_119(int iParam0) {
	struct<2> Var0;

	if (script::get_event_data(1, iParam0, &Var0, 15)) {
		Global_2499540.f_33 = Var0.f_1;
		Global_2499540.f_34 = Var0;
	}
}

// Position - 0x306C
void func_120(int iParam0) {
	struct<9> Var0;

	if (script::get_event_data(1, iParam0, &Var0, 21)) {
		if (Global_2499540.f_3 == 0) {
			if (!func_121(&Var0.f_8)) {
				network::network_set_keep_focuspoint(0, 2);
			}
			else {
				Global_2499540.f_3 = 1;
				MemCopy(&Global_2499540.f_4, {Var0}, 16);
				Global_2499540.f_20 = {Var0.f_8};
				StringCopy(&Global_2499540.f_39[0 /*16*/], "", 64);
				Global_2499540.f_58 = -2;
				Global_2499540.f_56 = 0;
				Global_2499540.f_57 = 0;
			}
		}
		else if (!func_121(&Var0.f_8)) {
			network::network_set_keep_focuspoint(0, 2);
		}
		else {
			Global_2499540.f_3 = 1;
			MemCopy(&Global_2499540.f_4, {Var0}, 16);
			Global_2499540.f_20 = {Var0.f_8};
			StringCopy(&Global_2499540.f_39[0 /*16*/], "", 64);
			Global_2499540.f_58 = -2;
			Global_2499540.f_56 = 0;
			Global_2499540.f_57 = 0;
		}
	}
}

// Position - 0x3150
int func_121(var uParam0) {
	if (Global_69702) {
		if (func_49() == 0) {
			return 0;
		}
		if (func_125(player::player_id(), 1, 1)) {
			if (entity::is_entity_in_water(player::player_ped_id())) {
				if (entity::get_entity_submerged_level(player::player_ped_id()) >= 1f) {
					return 0;
				}
			}
		}
	}
	if (network::network_is_cloud_available() == 0) {
		return 0;
	}
	if (Global_2499540.f_1) {
	}
	if (Global_14612 == 1) {
		return 0;
	}
	if (Global_1574309) {
		return 0;
	}
	if (Global_2499540.f_36) {
		return 0;
	}
	if (func_114()) {
		return 0;
	}
	if (Global_35781 != 6 && Global_35781 != 8 && Global_35781 != 12 && Global_35781 != 15) {
		return 0;
	}
	if (func_124() && !func_123(12)) {
		return 0;
	}
	if (audio::is_mobile_phone_call_ongoing()) {
		return 0;
	}
	if (cutscene::is_cutscene_active()) {
		return 0;
	}
	if (!func_122(player::player_id())) {
		return 0;
	}
	if (ui::is_pause_menu_active()) {
		return 0;
	}
	if (Global_69962) {
		return 0;
	}
	if (network::network_is_session_active()) {
		if (!network::network_player_has_headset(player::player_id())) {
			return 0;
		}
	}
	if (!network::network_is_signed_online()) {
		return 0;
	}
	if (network::network_is_gamer_muted_by_me(uParam0) || network::network_is_gamer_blocked_by_me(uParam0)) {
		return 0;
	}
	if (network::network_am_i_muted_by_gamer(uParam0) || network::network_am_i_blocked_by_gamer(uParam0)) {
		return 0;
	}
	if (network::_0x2FC5650B0271CB57()) {
		if (gameplay::is_durango_version()) {
			if (network::_0xFD8B834A8BA05048()) {
				return 0;
			}
		}
		else if (gameplay::is_orbis_version()) {
			return 0;
		}
	}
	return 1;
}

// Position - 0x32D4
int func_122(int iParam0) {
	int iVar0;
	struct<13> Var1;

	if (network::_0x66B59CFFD78467AF() == 0) {
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != player::player_id()) {
		iVar0 = iParam0;
		if (iVar0 == -1) {
			return 0;
		}
	}
	if (gameplay::is_ps3_version() || gameplay::is_orbis_version()) {
		if (network::_0xAEEF48CDF5B6CE7C(0, iVar0)) {
			if (network::network_have_online_privileges()) {
				return 1;
			}
		}
	}
	if (gameplay::is_xbox360_version() || gameplay::is_durango_version()) {
		if (iParam0 == player::player_id()) {
			if (network::_0x83F28CE49FBBFFBA(0, -3, 1) || network::_0xAEEF48CDF5B6CE7C(1, -1)) {
				return 1;
			}
		}
		else {
			Var1 = {func_8(iParam0)};
			if (network::_0xAEEF48CDF5B6CE7C(0, -1) ||
				network::_0xAEEF48CDF5B6CE7C(1, -1) && network::network_is_friend(&Var1)) {
				return 1;
			}
		}
	}
	if (gameplay::is_pc_version()) {
		if (network::_0xAEEF48CDF5B6CE7C(0, iVar0)) {
			if (network::network_have_online_privileges()) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x33AD
bool func_123(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x33BB
int func_124() {
	if (Global_35781 == 15) {
		return 0;
	}
	return 1;
}

// Position - 0x33D0
bool func_125(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x341A
void func_126() { func_117(); }

// Position - 0x3426
void func_127() {
	Global_2499540.f_1 = 1;
	Global_2499540.f_33 = -1;
	Global_2499540.f_34 = -1;
	if (graphics::has_scaleform_movie_loaded(Global_14424) == 1) {
		if (Global_14431) {
			func_128(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
			if (Global_14386) {
				func_128(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else {
			func_128(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
}

// Position - 0x349F
void func_128(int iParam0, char *sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6,
			  char *sParam7, char *sParam8, char *sParam9, char *sParam10, char *sParam11) {
	graphics::_push_scaleform_movie_function(iParam0, sParam1);
	graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam2));
	if (fParam3 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam3));
	}
	if (fParam4 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam4));
	}
	if (fParam5 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam5));
	}
	if (fParam6 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam6));
	}
	if (!gameplay::is_string_null_or_empty(sParam7)) {
		func_129(sParam7);
	}
	if (!gameplay::is_string_null_or_empty(sParam8)) {
		func_129(sParam8);
	}
	if (!gameplay::is_string_null_or_empty(sParam9)) {
		func_129(sParam9);
	}
	if (!gameplay::is_string_null_or_empty(sParam10)) {
		func_129(sParam10);
	}
	if (!gameplay::is_string_null_or_empty(sParam11)) {
		func_129(sParam11);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x3552
void func_129(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x3564
void func_130() {
	int iVar0;

	if (iLocal_92) {
		Global_48073 = 0;
		Global_48073.f_12 = 0;
		Global_48073.f_24 = 0;
		Global_48073.f_36 = 0;
		iVar0 = 0;
		while (iVar0 < 10) {
			Global_48073.f_1[iVar0] = 0;
			Global_48073.f_13[iVar0] = 0;
			Global_48073.f_25[iVar0] = 0;
			Global_48073.f_37[iVar0] = 0;
			iVar0++;
		}
		iLocal_92 = 0;
	}
}
