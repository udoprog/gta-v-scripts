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
var uLocal_47 = 0;
var uLocal_48 = 0;
var uLocal_49 = 0;
var uLocal_50 = 0;
var uLocal_51 = 0;
var uLocal_52 = 0;
var uLocal_53 = 0;
var uLocal_54 = 0;
var uLocal_55 = 0;
var uLocal_56 = 0;
var uLocal_57 = 10;
var uLocal_58 = 0;
var uLocal_59 = 0;
var uLocal_60 = 0;
var uLocal_61 = 0;
var uLocal_62 = 0;
var uLocal_63 = 0;
var uLocal_64 = 0;
var uLocal_65 = 0;
var uLocal_66 = 0;
var uLocal_67 = 0;
var uLocal_68 = 2;
var uLocal_69 = 0;
var uLocal_70 = 0;
var uLocal_71 = 8;
var uLocal_72 = 0;
var uLocal_73 = 0;
var uLocal_74 = 0;
var uLocal_75 = 0;
var uLocal_76 = 0;
var uLocal_77 = 0;
var uLocal_78 = 0;
var uLocal_79 = 0;
var uLocal_80 = 8;
var uLocal_81 = 0;
var uLocal_82 = 0;
var uLocal_83 = 0;
var uLocal_84 = 0;
var uLocal_85 = 0;
var uLocal_86 = 0;
var uLocal_87 = 0;
var uLocal_88 = 0;
var uLocal_89 = 0;
int iLocal_90 = 0;
int iLocal_91 = 0;
int iLocal_92 = 0;
int iLocal_93 = 0;
int iLocal_94 = 0;
int iLocal_95 = 0;
int iLocal_96 = 0;
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
	gameplay::network_set_script_is_safe_for_network_game();
	gameplay::set_this_script_can_be_paused(0);
	while (true) {
		system::wait(0);
		if (func_122()) {
			func_119();
		}
		if (func_109()) {
			func_119();
		}
		switch (iLocal_92) {
		case 0:
			if (!Global_2408505.f_16) {
				func_34();
			}
			if (!Global_2408505.f_15) {
				func_20();
			}
			if (func_14()) {
				iLocal_92 = 1;
			}
			break;

		case 1:
			if (func_1()) {
				func_119();
			}
			break;

		case 2: break;
		}
		if (cam::does_cam_exist(iLocal_90)) {
		}
	}
}

// Position - 0xFB
bool func_1() {
	int iVar0;

	if (Global_2408505.f_16) {
		if (!network::network_is_in_mp_cutscene() && !cutscene::is_cutscene_playing() && !func_13() &&
			!func_8(player::player_id())) {
			network::set_local_player_visible_locally(0);
		}
		if (func_7()) {
			if (!iLocal_93) {
				if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
					entity::set_entity_collision(player::player_ped_id(), 1, 0);
					entity::freeze_entity_position(player::player_ped_id(), 0);
				}
				else {
					iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
					if (!entity::is_entity_dead(iVar0, 0)) {
						entity::freeze_entity_position(iVar0, 0);
						entity::apply_force_to_entity(iVar0, 1, 0f, 0f, -1f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						ai::task_vehicle_drive_wander(player::player_ped_id(), iVar0, 20f, 786603);
						iLocal_95 = 1;
					}
				}
				iLocal_93 = 1;
			}
		}
		if (func_6(player::player_id(), 0, 1)) {
			if (!Global_2408505.f_26) {
				Global_2408505.f_27 = network::get_network_time();
				Global_2408505.f_26 = 1;
			}
			switch (Global_2408505) {
			case 0:
				if (!Global_2408505.f_17) {
					Global_2408505.f_27 = network::get_network_time();
					Global_2408505.f_17 = 1;
				}
				if (func_4() || func_3()) {
					return true;
				}
				break;

			case 1:
				if (func_4() || !func_2(-258271821) || func_3()) {
					if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
						entity::freeze_entity_position(iVar0, 0);
						entity::set_entity_can_be_damaged(iVar0, 1);
					}
					Global_2408505.f_10 = 1;
					iLocal_95 = 0;
					ai::clear_ped_tasks(player::player_ped_id());
					return true;
				}
				break;

			case 2:
				if (func_4() || !func_2(-1146898486) || func_3()) {
					ai::clear_ped_tasks(player::player_ped_id());
					iLocal_95 = 0;
					return true;
				}
				else if (Global_2408505.f_25 > 0) {
					if (player::get_player_wanted_level(player::player_id()) == 0) {
						ai::set_next_desired_move_state(1f);
						ai::task_wander_standard(player::player_ped_id(), 1193033728, 0);
					}
				}
				break;

			case 3: return true;

			case 4:
			case 5:
				if (Global_2408505.f_19) {
					return true;
				}
				break;

			default: return true;
			}
		}
	}
	return false;
}

// Position - 0x31C
int func_2(int iParam0) {
	int iVar0;

	iVar0 = ai::get_script_task_status(player::player_ped_id(), iParam0);
	if (iVar0 != 7) {
		return 1;
	}
	return 0;
}

// Position - 0x33D
int func_3() {
	if (Global_2408505.f_26) {
		if (gameplay::absi(network::get_time_difference(network::get_network_time(), Global_2408505.f_27)) > 6000) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x36B
int func_4() {
	if (func_5(0)) {
		return 1;
	}
	return 0;
}

// Position - 0x380
bool func_5(int iParam0) {
	if (controls::_0xD7D22F5592AED8BA(iParam0) < 2000) {
		return true;
	}
	return false;
}

// Position - 0x399
bool func_6(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x3E3
bool func_7() {
	if (streaming::is_player_switch_in_progress()) {
		if (streaming::get_player_switch_type() != 3) {
			if (streaming::get_player_switch_state() > 9) {
				return true;
			}
		}
	}
	else {
		return true;
	}
	return false;
}

// Position - 0x40F
int func_8(int iParam0) {
	if (func_10(iParam0, 0)) {
		return 1;
	}
	if (func_9()) {
		if (iParam0 == player::player_id()) {
			return 1;
		}
	}
	if (gameplay::is_bit_set(Global_2421664[iParam0 /*358*/].f_198, 2)) {
		return 1;
	}
	return 0;
}

// Position - 0x451
bool func_9() { return gameplay::is_bit_set(Global_2359301, 3); }

// Position - 0x462
bool func_10(int iParam0, int iParam1) {
	bool bVar0;

	if (iParam0 == player::player_id()) {
		bVar0 = func_11(-1, 0) == 8;
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

// Position - 0x4AD
int func_11(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1) {
		iVar1 = func_12();
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

// Position - 0x4EE
var func_12() { return Global_1312735; }

// Position - 0x4FA
bool func_13() { return Global_91543.f_304 > 0; }

// Position - 0x50B
bool func_14() {
	if (Global_2408505.f_18) {
		func_19();
		return true;
	}
	if (func_18() || func_17()) {
		func_19();
		return true;
	}
	if (func_16() && Global_2408505 != 6) {
		func_19();
		return true;
	}
	if (Global_2408505.f_16 && Global_2408505.f_15) {
		return true;
	}
	else if (!Global_2408505.f_20) {
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("spawn_activities")) == 0) {
			if (func_15("spawn_activities", 1424)) {
				Global_2408505.f_20 = 1;
			}
		}
	}
	else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("spawn_activities")) == 0) {
		func_19();
		return true;
	}
	if (gameplay::absi(network::get_time_difference(network::get_network_time(), Global_2408505.f_3)) > 120000) {
		func_19();
		return true;
	}
	gameplay::set_bit(&Global_1760211[1], 22);
	return false;
}

// Position - 0x5E9
bool func_15(char *sParam0, int iParam1) {
	var uVar0;

	if (script::does_script_exist(sParam0)) {
		script::request_script(sParam0);
		if (script::has_script_loaded(sParam0)) {
			if (iParam1 <= 0) {
				iParam1 = 512;
			}
			uVar0 = system::start_new_script(sParam0, iParam1);
			script::set_script_as_no_longer_needed(sParam0);
			return true;
		}
	}
	return false;
}

// Position - 0x62C
var func_16() { return Global_2443134.f_723; }

// Position - 0x63B
var func_17() { return Global_2453770; }

// Position - 0x647
var func_18() { return Global_1315229; }

// Position - 0x653
void func_19() {
	Global_2408505.f_22 = -1;
	Global_2408505.f_23 = -1;
}

// Position - 0x669
void func_20() {
	if (Global_2408505.f_22 <= -1 || Global_2408505.f_23 <= -1) {
		Global_2408505.f_15 = 1;
	}
	else {
		if (Global_2408505.f_24 == 0) {
			if (!func_33(Global_2408505.f_22, Global_2408505.f_23) ||
				func_31(func_32(Global_2408505.f_22, Global_2408505.f_23), -1, 0) > 0) {
				if (func_33(Global_2408505.f_22, Global_2408505.f_23)) {
					func_26(func_32(Global_2408505.f_22, Global_2408505.f_23), -1);
				}
				func_22(Global_2408505.f_22, Global_2408505.f_23, 1, 1, 1, 1, 0, 0);
				Global_2408505.f_24++;
			}
			else {
				Global_2408505.f_15 = 1;
			}
		}
		if (Global_2408505.f_24 == 1) {
			if (func_21() || Global_2583878 == -1 && Global_2583878.f_1 == -1 || Global_2583878.f_3 == 0) {
				Global_2408505.f_24++;
				Global_2408505.f_15 = 1;
			}
		}
	}
}

// Position - 0x775
int func_21() {
	if (Global_2583878.f_770 == 1) {
		return 1;
	}
	return 0;
}

// Position - 0x78D
void func_22(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) {
	Global_2583878 = iParam0;
	Global_2583878.f_1 = iParam1;
	if (iParam3) {
		if (func_25(&Global_2583878)) {
			func_24(&Global_2583878);
		}
	}
	Global_2583878.f_3 = 1;
	if (iParam4 || func_23(iParam0, iParam1)) {
		Global_2583878.f_4 = 1;
	}
	Global_2583878.f_9 = iParam2;
	Global_2583878.f_13 = iParam5;
	Global_2583878.f_14 = iParam6;
	Global_2583878.f_15 = iParam7;
	if (gameplay::is_bit_set(Global_2315, 3)) {
		Global_2583878.f_5 = 1;
	}
}

// Position - 0x80E
int func_23(int iParam0, int iParam1) {
	switch (iParam0) {
	case 3:
		switch (iParam1) {
		case 3:
		case 4:
		case 5:
		case 6: return 1;

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
		case 21:
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
		case 34: return 1;

		case 0:
		default: return 0;
		}
		break;
	}
	return 0;
}

// Position - 0x909
void func_24(var *uParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_31(func_32(2, 34), -1, 0);
	iVar1 = func_31(func_32(2, 33), -1, 0);
	iVar2 = func_31(func_32(2, 32), -1, 0);
	if (iVar0 > 0) {
		uParam0->f_1 = 34;
	}
	else if (iVar1 > 0) {
		uParam0->f_1 = 33;
	}
	else if (iVar2 > 0) {
		uParam0->f_1 = 32;
	}
}

// Position - 0x968
bool func_25(var *uParam0) {
	if (*uParam0 == 2) {
		if (uParam0->f_1 == 32 || uParam0->f_1 == 33 || uParam0->f_1 == 34) {
			return true;
		}
	}
	return false;
}

// Position - 0x9A0
void func_26(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = func_31(iParam0, func_30(iParam1), 0);
	iVar0++;
	if (!func_29(iParam0)) {
		func_28(iParam0, iVar0, iParam1, 1, 0);
	}
	else {
		func_27(iParam0, iVar0, iParam1, 1);
	}
}

// Position - 0x9E1
void func_27(int iParam0, int iParam1, var uParam2, int iParam3) {
	int iVar0;

	iVar0 = Global_2503826[iParam0 /*3*/][func_30(uParam2)];
	if (iVar0 != 0) {
		stats::stat_set_int(iVar0, iParam1, iParam3);
	}
	switch (iParam0) {
	case 782: Global_1363219[func_30(uParam2)] = iParam1; break;

	case 783: Global_1363225[func_30(uParam2)] = iParam1; break;

	case 784: Global_1363231[func_30(uParam2)] = iParam1; break;

	case 785: Global_1363237[func_30(uParam2)] = iParam1; break;

	case 772: Global_1363195[func_30(uParam2)] = iParam1; break;

	case 773: Global_1363201[func_30(uParam2)] = iParam1; break;

	case 774: Global_1363207[func_30(uParam2)] = iParam1; break;

	case 775: Global_1363213[func_30(uParam2)] = iParam1; break;

	case 762: Global_1363171[func_30(uParam2)] = iParam1; break;

	case 763: Global_1363177[func_30(uParam2)] = iParam1; break;

	case 764: Global_1363183[func_30(uParam2)] = iParam1; break;

	case 765: Global_1363189[func_30(uParam2)] = iParam1; break;

	case 752: Global_1363243[func_30(uParam2)] = iParam1; break;

	case 753: Global_1363249[func_30(uParam2)] = iParam1; break;

	case 754: Global_1363255[func_30(uParam2)] = iParam1; break;

	case 755: Global_1363261[func_30(uParam2)] = iParam1; break;

	case 1298: Global_1363267[func_30(uParam2)] = iParam1; break;

	case 634: Global_1363273[func_30(uParam2)] = iParam1; break;

	case 1273: Global_1363279[func_30(uParam2)] = iParam1; break;

	case 1870: Global_2524277[0 /*3*/][func_30(uParam2)] = iParam1; break;

	case 2261: Global_2524277[1 /*3*/][func_30(uParam2)] = iParam1; break;

	case 2911: Global_2524277[2 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3040: Global_2524277[3 /*3*/][func_30(uParam2)] = iParam1; break;

	case 5886: Global_2524348[func_30(uParam2)] = iParam1; break;

	case 759: Global_1363285[func_30(uParam2)] = iParam1; break;

	case 760: Global_1363291[func_30(uParam2)] = iParam1; break;

	case 761: Global_1363297[func_30(uParam2)] = iParam1; break;

	case 1231: Global_1363303[func_30(uParam2)] = iParam1; break;

	case 3035: Global_2524311[0 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3036: Global_2524311[1 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3037: Global_2524311[2 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3038: Global_2524311[3 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3039: Global_2524311[4 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3618: Global_2524351[0 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3619: Global_2524351[1 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3620: Global_2524351[2 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3621: Global_2524351[3 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3622: Global_2524351[4 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3623: Global_2524367[0 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3624: Global_2524367[1 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3625: Global_2524367[2 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3626: Global_2524367[3 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3627: Global_2524367[4 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3203: Global_2524311[5 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3209: Global_2524277[4 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3645: Global_2524383[func_30(uParam2)] = iParam1; break;

	case 3646: Global_2524392[func_30(uParam2)] = iParam1; break;

	case 3647: Global_2524386[func_30(uParam2)] = iParam1; break;

	case 3648: Global_2524395[func_30(uParam2)] = iParam1; break;

	case 3649: Global_2524389[func_30(uParam2)] = iParam1; break;

	case 3650: Global_2524398[func_30(uParam2)] = iParam1; break;

	case 3671: Global_2524401[func_30(uParam2)] = iParam1; break;

	case 3211: Global_2524311[6 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3212: Global_2524277[5 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3216: Global_2524311[7 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3214: Global_2524277[6 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3991: Global_2524311[8 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3992: Global_2524277[7 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3994: Global_2524311[9 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3995: Global_2524277[8 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3997: Global_2524311[10 /*3*/][func_30(uParam2)] = iParam1; break;

	case 3998: Global_2524277[9 /*3*/][func_30(uParam2)] = iParam1; break;

	case 4000: Global_2524311[11 /*3*/][func_30(uParam2)] = iParam1; break;

	case 4001: Global_2524277[10 /*3*/][func_30(uParam2)] = iParam1; break;

	default: break;
	}
}

// Position - 0x1040
void func_28(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam4) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_30(uParam2)];
	if (iVar0 != 0) {
		stats::stat_set_int(iVar0, iParam1, iParam3);
	}
}

// Position - 0x1070
int func_29(int iParam0) {
	if (Global_1363152) {
		switch (iParam0) {
		case 782:
		case 783:
		case 784:
		case 785:
		case 772:
		case 773:
		case 774:
		case 775:
		case 762:
		case 763:
		case 764:
		case 765:
		case 752:
		case 753:
		case 754:
		case 755:
		case 1298:
		case 634:
		case 1273:
		case 759:
		case 760:
		case 761:
		case 1231:
		case 1870:
		case 2261:
		case 2911:
		case 3040:
		case 5886:
		case 3035:
		case 3036:
		case 3037:
		case 3038:
		case 3039:
		case 3214:
		case 3216:
		case 3618:
		case 3619:
		case 3620:
		case 3621:
		case 3622:
		case 3623:
		case 3624:
		case 3625:
		case 3626:
		case 3627:
		case 3209:
		case 3203:
		case 3645:
		case 3646:
		case 3647:
		case 3648:
		case 3649:
		case 3650:
		case 3671:
		case 3212:
		case 3211:
		case 3992:
		case 3991:
		case 3995:
		case 3994:
		case 3998:
		case 3997:
		case 4001:
		case 4000: return 1;
		}
	}
	return 0;
}

// Position - 0x120E
int func_30(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_12();
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

// Position - 0x1242
int func_31(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_30(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x1274
int func_32(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0:
		switch (iParam1) {
		case 1: return 1092;
		}
		break;

	case 2:
		switch (iParam1) {
		case 29: return 1092;

		case 30: return 62;

		case 31: return 63;

		case 32: return 1270;

		case 33: return 1271;

		case 34: return 1272;
		}
		break;
	}
	return 0;
}

// Position - 0x130B
bool func_33(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0:
		switch (iParam1) {
		case 1: return true;
		}
		break;

	case 2:
		switch (iParam1) {
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34: return true;
		}
		break;
	}
	return false;
}

// Position - 0x1373
void func_34() {
	if (Global_2408505 <= -1) {
		Global_2408505.f_16 = 1;
	}
	else {
		switch (Global_2408505) {
		case 0:
			switch (Global_2408505.f_1) {
			case 0:
				if (func_6(player::player_id(), 0, 0)) {
					Global_2408505.f_16 = 1;
				}
				break;
			}
			break;

		case 1:
			if (Global_2408505.f_1 == 0) {
				if (func_79()) {
					Global_2408505.f_2 = 0;
					Global_2408505.f_8 = 1;
					Global_2408505.f_11 = 1;
					Global_2408505.f_12 = 1;
					Global_2408505.f_9 = 1;
					Global_2408505.f_1++;
				}
				else {
					Global_2408505.f_16 = 1;
				}
			}
			if (Global_2408505.f_1 == 1) {
				if (func_79()) {
					if (func_6(player::player_id(), 0, 0)) {
						if (func_77(0)) {
							Global_2408505.f_1++;
						}
					}
				}
				else {
					Global_2408505.f_16 = 1;
				}
			}
			if (Global_2408505.f_1 == 2) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
					Global_2408505.f_16 = 1;
				}
			}
			break;

		case 2:
			if (func_6(player::player_id(), 0, 0)) {
				if (Global_2408505.f_25 > 0) {
					ai::set_next_desired_move_state(2f);
					ai::task_wander_standard(player::player_ped_id(), 1193033728, 0);
				}
				else {
					ai::task_wander_standard(player::player_ped_id(), 1193033728, 0);
				}
				iLocal_95 = 1;
				Global_2408505.f_16 = 1;
			}
			break;

		case 3:
		case 4:
		case 5:
		case 6:
			if (func_6(player::player_id(), 0, 0)) {
				if (Global_2408505.f_1 == 0) {
					func_76(Global_2408505);
					Global_2404994.f_2209 = 1;
					iLocal_96 = network::get_network_time();
					Global_2408505.f_1++;
				}
				if (Global_2408505.f_1 == 1) {
					if (!func_74(Global_2408505) ||
						network::get_time_difference(network::get_network_time(), iLocal_96) > 20000) {
						Global_2408505.f_16 = 1;
						func_73();
					}
					else {
						Global_1318163 = 1;
						func_35();
						if (!iLocal_94) {
							brain::enable_script_brain_set(8);
							brain::enable_script_brain_set(2);
							iLocal_94 = 1;
						}
					}
				}
			}
			break;

		default: break;
		}
	}
}

// Position - 0x157B
void func_35() {
	int iVar0;
	struct<7> Var1;

	iVar0 = 18823;
	if (gameplay::is_bit_set(Global_1590877.f_22, 5) || gameplay::is_bit_set(Global_1590877.f_22, 6) ||
		gameplay::is_bit_set(Global_1590877.f_22, 8) || gameplay::is_bit_set(Global_1590877.f_22, 7) ||
		gameplay::is_bit_set(Global_1590877.f_22, 9) || gameplay::is_bit_set(Global_1590877.f_22, 20) || func_72()) {
		if (!gameplay::is_bit_set(Global_1048576.f_8, 0)) {
			if (script::_get_number_of_instances_of_script_with_name_hash(joaat("am_mp_property_int")) <= 0 &&
				!network::network_is_script_active("AM_MP_PROPERTY_INT", Global_1048576.f_846, 1, 0)) {
				script::request_script("AM_MP_PROPERTY_INT");
				if (script::has_script_loaded("AM_MP_PROPERTY_INT")) {
					system::start_new_script("AM_MP_PROPERTY_INT", iVar0);
					script::set_script_as_no_longer_needed("AM_MP_PROPERTY_INT");
					gameplay::set_bit(&Global_1048576.f_8, 0);
				}
			}
		}
	}
	else if (Global_2404994.f_2209) {
		if (!gameplay::is_bit_set(Global_1048576.f_8, 0)) {
			if (script::_get_number_of_instances_of_script_with_name_hash(joaat("am_mp_property_int")) <= 0 &&
				!network::network_is_script_active("AM_MP_PROPERTY_INT", Global_1048576.f_846, 1, 0)) {
				script::request_script("AM_MP_PROPERTY_INT");
				if (script::has_script_loaded("AM_MP_PROPERTY_INT")) {
					system::start_new_script("AM_MP_PROPERTY_INT", iVar0);
					script::set_script_as_no_longer_needed("AM_MP_PROPERTY_INT");
					gameplay::set_bit(&Global_1048576.f_8, 0);
				}
			}
		}
	}
	else if (Global_1590877.f_19 != 0 && func_70(player::player_id(), 1, 0)) {
		if (!gameplay::is_bit_set(Global_1048576.f_8, 0)) {
			if (script::_get_number_of_instances_of_script_with_name_hash(joaat("am_mp_property_int")) <= 0 &&
				!network::network_is_script_active("AM_MP_PROPERTY_INT", Global_1048576.f_846, 1, 0)) {
				script::request_script("AM_MP_PROPERTY_INT");
				if (script::has_script_loaded("AM_MP_PROPERTY_INT")) {
					system::start_new_script("AM_MP_PROPERTY_INT", iVar0);
					script::set_script_as_no_longer_needed("AM_MP_PROPERTY_INT");
					gameplay::set_bit(&Global_1048576.f_8, 0);
				}
			}
		}
	}
	else if (Global_2452990) {
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("am_mp_property_int")) <= 0 &&
			!network::network_is_script_active("AM_MP_PROPERTY_INT", Global_1048576.f_846, 1, 0)) {
			script::request_script("AM_MP_PROPERTY_INT");
			if (script::has_script_loaded("AM_MP_PROPERTY_INT")) {
				system::start_new_script("AM_MP_PROPERTY_INT", iVar0);
				script::set_script_as_no_longer_needed("AM_MP_PROPERTY_INT");
				gameplay::set_bit(&Global_1048576.f_8, 0);
				Global_2452990 = 0;
			}
		}
	}
	else if (!gameplay::is_bit_set(Global_1048576.f_8, 0) && !gameplay::is_bit_set(Global_2494199.f_357.f_5, 3) &&
			 (!Global_2404993 || Global_2404993 && Global_2443905.f_1.f_2824.f_13 > 0) && !func_69() && !func_64()) {
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("am_mp_property_int")) <= 0 &&
			!network::network_is_script_active("AM_MP_PROPERTY_INT", Global_1048576.f_846, 1, 0)) {
			if (!func_63()) {
				if (func_59()) {
					script::request_script("AM_MP_PROPERTY_INT");
					if (script::has_script_loaded("AM_MP_PROPERTY_INT")) {
						system::start_new_script("AM_MP_PROPERTY_INT", iVar0);
						script::set_script_as_no_longer_needed("AM_MP_PROPERTY_INT");
						gameplay::set_bit(&Global_1048576.f_8, 0);
						gameplay::set_bit(&Global_1590877.f_22, 12);
						return;
					}
					return;
				}
			}
			else {
				if (!func_58(Global_1048576.f_845) &&
					gameplay::get_distance_between_coords(func_57(player::player_id()), func_51(Global_1048576.f_845),
														  1) <= 30f) {
					if (func_49(&Global_1049427[Global_1048576.f_845 /*1942*/], 1, 0)) {
						if (!Global_1591201[player::player_id() /*602*/].f_507) {
							script::request_script("AM_MP_PROPERTY_INT");
							if (script::has_script_loaded("AM_MP_PROPERTY_INT")) {
								system::start_new_script("AM_MP_PROPERTY_INT", iVar0);
								script::set_script_as_no_longer_needed("AM_MP_PROPERTY_INT");
								gameplay::set_bit(&Global_1048576.f_8, 0);
								gameplay::set_bit(&Global_1590877.f_22, 12);
								return;
							}
							return;
						}
					}
					else {
						Var1 = {func_57(player::player_id())};
					}
				}
				if (gameplay::get_distance_between_coords(func_57(player::player_id()), func_48(2), 1) <= 30f) {
					func_47(&Var1, 2);
					if (entity::is_entity_in_angled_area(player::player_ped_id(), Var1, Var1.f_3, Var1.f_6, 0, 1, 0)) {
						if (!Global_1591201[player::player_id() /*602*/].f_507) {
							script::request_script("AM_MP_PROPERTY_INT");
							if (script::has_script_loaded("AM_MP_PROPERTY_INT")) {
								system::start_new_script("AM_MP_PROPERTY_INT", iVar0);
								script::set_script_as_no_longer_needed("AM_MP_PROPERTY_INT");
								gameplay::set_bit(&Global_1048576.f_8, 0);
								gameplay::set_bit(&Global_1590877.f_22, 12);
								return;
							}
							return;
						}
					}
				}
				if (gameplay::get_distance_between_coords(func_57(player::player_id()), func_48(6), 1) <= 30f) {
					func_47(&Var1, 6);
					if (entity::is_entity_in_angled_area(player::player_ped_id(), Var1, Var1.f_3, Var1.f_6, 0, 1, 0)) {
						if (!Global_1591201[player::player_id() /*602*/].f_507) {
							script::request_script("AM_MP_PROPERTY_INT");
							if (script::has_script_loaded("AM_MP_PROPERTY_INT")) {
								system::start_new_script("AM_MP_PROPERTY_INT", iVar0);
								script::set_script_as_no_longer_needed("AM_MP_PROPERTY_INT");
								gameplay::set_bit(&Global_1048576.f_8, 0);
								gameplay::set_bit(&Global_1590877.f_22, 12);
								return;
							}
							return;
						}
					}
				}
				if (gameplay::get_distance_between_coords(func_57(player::player_id()), func_48(10), 1) <= 30f) {
					func_47(&Var1, 10);
					if (entity::is_entity_in_angled_area(player::player_ped_id(), Var1, Var1.f_3, Var1.f_6, 0, 1, 0)) {
						if (!Global_1591201[player::player_id() /*602*/].f_507) {
							script::request_script("AM_MP_PROPERTY_INT");
							if (script::has_script_loaded("AM_MP_PROPERTY_INT")) {
								system::start_new_script("AM_MP_PROPERTY_INT", iVar0);
								script::set_script_as_no_longer_needed("AM_MP_PROPERTY_INT");
								gameplay::set_bit(&Global_1048576.f_8, 0);
								gameplay::set_bit(&Global_1590877.f_22, 12);
								return;
							}
							return;
						}
					}
				}
				Global_1048576.f_845++;
				if (Global_1048576.f_845 > 115 || gameplay::is_bit_set(Global_1048576.f_8, 10)) {
					Global_1048576.f_845 = 0;
					Global_1048576.f_847 = 0;
					if (gameplay::is_bit_set(Global_1048576.f_8, 10)) {
						gameplay::clear_bit(&Global_1048576.f_8, 10);
					}
					if (Global_2443905.f_1.f_2824.f_13 != 0) {
						if (!func_46() && !func_45() && !network::network_is_in_transition()) {
							if (!func_44() && !func_43() && !func_42()) {
								if (!func_41() && !func_40() && !func_39()) {
									if (!func_38()) {
										if (!func_37()) {
											if (!Global_2443905.f_2842.f_157) {
												func_36();
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

// Position - 0x1BDA
void func_36() {
	Global_2443905.f_1.f_2824.f_13 = 0;
	Global_2443905.f_1.f_2824 = 0;
	Global_2443905.f_1.f_2824.f_1 = 0;
	Global_2443905.f_1.f_2824.f_2 = 0;
	Global_2443905.f_1.f_2824.f_3 = 0;
	Global_2443905.f_1.f_2824.f_4 = 0;
	Global_2443905.f_1.f_2824.f_5 = 0;
	Global_2443905.f_1.f_2824.f_6 = 0;
	Global_2443905.f_1.f_2824.f_7 = 0;
	Global_2443905.f_1.f_2824.f_8 = 0;
	Global_2443905.f_1.f_2824.f_9 = 0;
	Global_2443905.f_1.f_2824.f_10 = 0;
	Global_2443905.f_1.f_2824.f_11 = 0;
	Global_2443905.f_1.f_2824.f_12 = 0;
}

// Position - 0x1C88
bool func_37() { return Global_2443134.f_626; }

// Position - 0x1C97
bool func_38() { return Global_2443134.f_724; }

// Position - 0x1CA6
bool func_39() { return gameplay::is_bit_set(Global_2443134, 20); }

// Position - 0x1CB8
bool func_40() { return gameplay::is_bit_set(Global_2443134, 2); }

// Position - 0x1CC9
bool func_41() { return gameplay::is_bit_set(Global_2443134, 1); }

// Position - 0x1CDA
bool func_42() { return Global_1591201[player::player_id() /*602*/].f_188 != 0; }

// Position - 0x1CF1
bool func_43() { return Global_1742351.f_3; }

// Position - 0x1CFF
bool func_44() { return Global_2443134.f_618; }

// Position - 0x1D0E
bool func_45() { return Global_2443134.f_570; }

// Position - 0x1D1D
bool func_46() { return Global_2443134.f_571; }

// Position - 0x1D2C
struct<8> func_47(var *uParam0, int iParam1) {
	switch (iParam1) {
	case 2:
		*uParam0 = {175.0434f, -998.7965f, -100.2256f};
		uParam0->f_3 = {175.0878f, -1009.004f, -95.99992f};
		uParam0->f_6 = 14f;
		break;

	case 6:
		*uParam0 = {212.9084f, -999.6776f, -99.99996f};
		uParam0->f_3 = {189.6844f, -1000.068f, -95.2507f};
		uParam0->f_6 = 16.75f;
		break;

	case 10:
		*uParam0 = {230.0094f, -1009.124f, -100.6539f};
		uParam0->f_3 = {230.5939f, -964.022f, -94.53618f};
		uParam0->f_6 = 23.5f;
		break;
	}
	return *uParam0;
}

// Position - 0x1DEE
Vector3
func_48(int iParam0) {
	vector3 vVar0;

	switch (iParam0) {
	case 2: vVar0 = {172.7787f, -1003.21f, -99.9999f}; break;

	case 6: vVar0 = {198.6071f, -1000.536f, -100f}; break;

	case 10: vVar0 = {227.8602f, -991.1093f, -99.9999f}; break;
	}
	return vVar0;
}

// Position - 0x1E55
bool func_49(var *uParam0, int iParam1, float fParam2) {
	vector3 vVar0;

	if (iParam1 == 2 && !func_50(uParam0->f_31, -1)) {
		if (gameplay::get_distance_between_coords(func_57(player::player_id()), uParam0->f_1742.f_148, 1) <= 30f) {
			if (object::is_point_in_angled_area(func_57(player::player_id()), uParam0->f_1742.f_151,
												uParam0->f_1742.f_151.f_3, uParam0->f_1742.f_151.f_6, 0, 1)) {
				return true;
			}
		}
	}
	else {
		vVar0 = {func_57(player::player_id())};
		if (gameplay::get_distance_between_coords(func_57(player::player_id()), uParam0->f_146.f_47, 1) <= 40f) {
			if (object::is_point_in_angled_area(func_57(player::player_id()), uParam0->f_146.f_57[0 /*8*/],
												uParam0->f_146.f_57[0 /*8*/].f_3, uParam0->f_146.f_57[0 /*8*/].f_6, 0,
												1) ||
				object::is_point_in_angled_area(func_57(player::player_id()), uParam0->f_146.f_57[1 /*8*/],
												uParam0->f_146.f_57[1 /*8*/].f_3, uParam0->f_146.f_57[1 /*8*/].f_6, 0,
												1) ||
				object::is_point_in_angled_area(func_57(player::player_id()), uParam0->f_146.f_57[2 /*8*/],
												uParam0->f_146.f_57[2 /*8*/].f_3, uParam0->f_146.f_57[2 /*8*/].f_6, 0,
												1)) {
				return true;
			}
			else if (gameplay::get_distance_between_coords(vVar0, uParam0->f_146.f_1592, 1) <
						 uParam0->f_146.f_1595 + fParam2 &&
					 vVar0.z > uParam0->f_146.f_57[2 /*8*/].f_2 && vVar0.z < uParam0->f_146.f_57[2 /*8*/].f_3.f_2) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x1FEB
int func_50(int iParam0, int iParam1) {
	if (iParam1 == -1) {
		switch (iParam0) {
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102: return 1;
		}
	}
	else if (iParam1 == 91) {
		switch (iParam0) {
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96: return 1;
		}
	}
	else if (iParam1 == 97) {
		switch (iParam0) {
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102: return 1;
		}
	}
	return 0;
}

// Position - 0x20C8
Vector3 func_51(int iParam0) {
	vector3 vVar0;
	vector3 vVar6;

	switch (iParam0) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 34:
	case 35:
	case 36:
	case 37:
	case 38:
	case 39:
	case 40:
	case 41:
	case 42:
	case 43:
		func_52(iParam0, 3, &vVar0, -1, 0);
		vVar6 = {vVar0};
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
	case 69: vVar6 = {348.132f, -997.2031f, -100.1741f}; break;

	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 70:
	case 71:
	case 72: vVar6 = {264.3808f, -997.7274f, -100.0087f}; break;

	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
		func_52(iParam0, 3, &vVar0, 61, 0);
		vVar6 = {vVar0};
		break;

	case 73:
	case 74:
	case 75:
	case 76:
		func_52(iParam0, 3, &vVar0, 73, 0);
		vVar6 = {vVar0};
		break;

	case 77:
	case 78:
	case 79:
	case 80:
	case 81:
	case 82:
		func_52(iParam0, 3, &vVar0, 77, 0);
		vVar6 = {vVar0};
		break;

	case 83:
	case 84:
	case 85:
		func_52(iParam0, 3, &vVar0, 83, 0);
		vVar6 = {vVar0};
		break;

	case 86:
		func_52(iParam0, 3, &vVar0, 86, 0);
		vVar6 = {vVar0};
		break;

	case 87:
	case 88:
	case 89:
	case 90:
		func_52(iParam0, 3, &vVar0, 88, 0);
		vVar6 = {vVar0};
		break;

	case 91:
	case 92:
	case 93:
	case 94:
	case 95:
	case 96:
		func_52(iParam0, 3, &vVar0, 91, 0);
		vVar6 = {vVar0};
		break;

	case 97:
	case 98:
	case 99:
	case 100:
	case 101:
	case 102:
		func_52(iParam0, 3, &vVar0, 97, 0);
		vVar6 = {vVar0};
		break;
	}
	return vVar6;
}

// Position - 0x2397
void func_52(int iParam0, int iParam1, var *uParam2, int iParam3, int iParam4) {
	struct<6> Var0[2];
	vector3 vVar13;

	Var0[0 /*6*/] = {func_56(iParam3, iParam4)};
	Var0[1 /*6*/] = {func_56(iParam0, iParam4)};
	*uParam2 = {func_54(iParam1, iParam3)};
	vVar13 = {*uParam2 - Var0[0 /*6*/]};
	vVar13 = {func_53(vVar13, -Var0[0 /*6*/].f_3.f_2)};
	vVar13 = {func_53(vVar13, Var0[1 /*6*/].f_3.f_2)};
	*uParam2 = {object::_get_object_offset_from_coords(Var0[1 /*6*/], 0f, vVar13)};
	switch (iParam1) {
	case 6:
	case 2:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 34:
	case 35:
	case 36:
	case 38:
	case 39:
	case 120:
	case 121:
	case 125:
	case 40:
	case 41:
	case 43:
	case 44:
	case 45:
	case 42:
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
	case 56:
	case 64:
	case 65:
	case 57:
	case 58:
	case 59:
	case 60:
	case 61:
	case 62:
	case 63:
	case 66:
	case 67:
	case 68:
	case 109:
	case 69:
	case 70:
	case 71:
	case 72:
	case 73:
	case 74:
	case 75:
	case 76:
	case 77:
	case 78:
	case 79:
	case 80:
	case 81:
	case 82:
	case 83:
	case 85:
	case 84:
	case 89:
	case 90:
	case 91:
	case 92:
	case 94:
	case 95:
	case 96:
	case 97:
	case 98:
	case 93:
	case 99:
	case 100:
	case 106:
	case 107:
	case 108:
	case 119:
	case 122:
	case 123:
	case 124:
	case 138:
	case 139:
	case 140:
	case 130:
	case 128:
	case 141:
	case 142:
	case 143:
	case 144:
	case 145:
	case 146:
	case 147:
	case 148:
	case 153:
	case 154:
	case 155:
	case 157:
	case 234:
	case 174:
	case 175:
	case 176:
	case 177:
	case 178:
	case 179:
	case 180:
	case 235:
	case 149:
	case 150:
	case 151:
	case 152:
	case 172:
	case 187:
	case 173:
	case 201:
	case 188:
	case 189:
	case 190:
	case 191:
	case 192:
	case 193:
	case 194:
	case 195:
	case 196:
	case 197:
	case 198:
	case 199:
	case 200:
	case 284:
	case 285:
	case 286:
	case 287:
	case 202:
	case 203:
	case 204:
	case 205:
	case 206:
	case 207:
	case 208:
	case 209:
	case 210:
	case 211:
	case 212:
	case 213:
	case 214:
	case 216:
	case 217:
	case 182:
	case 183:
	case 181:
	case 156:
	case 236:
	case 237:
	case 238:
	case 239:
	case 240:
	case 241:
	case 242:
	case 243:
	case 244:
	case 245:
	case 246:
	case 247:
	case 248:
	case 249:
	case 250:
	case 251:
	case 252:
	case 253:
	case 254:
	case 255:
	case 256:
	case 257:
	case 258:
	case 259:
	case 260:
	case 261:
	case 262:
	case 263:
	case 264:
	case 265:
	case 266:
	case 267:
	case 268:
	case 269:
	case 270:
	case 271:
	case 272:
	case 273:
	case 274:
	case 275:
		while (Var0[0 /*6*/].f_3.f_2 > 180f) {
			Var0[0 /*6*/].f_3.f_2 -= 360f;
		}
		while (Var0[0 /*6*/].f_3.f_2 < -180f) {
			Var0[0 /*6*/].f_3.f_2 += 360f;
		}
		while (Var0[1 /*6*/].f_3.f_2 > 180f) {
			Var0[1 /*6*/].f_3.f_2 -= 360f;
		}
		while (Var0[1 /*6*/].f_3.f_2 < -180f) {
			Var0[1 /*6*/].f_3.f_2 += 360f;
		}
		uParam2->f_3.f_2 += Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2;
		while (uParam2->f_3.f_2 > 180f) {
			uParam2->f_3.f_2 -= 360f;
		}
		while (uParam2->f_3.f_2 < -180f) {
			uParam2->f_3.f_2 += 360f;
		}
		break;
	}
	switch (iParam1) {
	case 278:
	case 279:
	case 280:
	case 281:
	case 282:
	case 283:
	case 300:
	case 301:
	case 302:
	case 303:
	case 304:
	case 306:
	case 305:
	case 308:
	case 309:
	case 312:
	case 313:
	case 314:
	case 315:
	case 316:
	case 317:
	case 318:
	case 319:
	case 320:
	case 321:
	case 322:
	case 323:
	case 324:
	case 325:
	case 326:
	case 327:
	case 328:
	case 329:
	case 307:
	case 331:
	case 332:
	case 333:
	case 334:
	case 310:
	case 335:
	case 336:
	case 337:
	case 338:
	case 339:
	case 311:
	case 340:
	case 435:
	case 436:
	case 437:
	case 470:
	case 477:
	case 504:
	case 507:
	case 510:
	case 513:
	case 528:
	case 531:
	case 534:
	case 537:
	case 540:
	case 547:
	case 445:
	case 446:
	case 447:
	case 448:
	case 449:
	case 450:
	case 471:
	case 472:
	case 478:
	case 479:
	case 505:
	case 506:
	case 508:
	case 509:
	case 511:
	case 512:
	case 514:
	case 515:
	case 529:
	case 530:
	case 532:
	case 533:
	case 535:
	case 536:
	case 538:
	case 539:
	case 541:
	case 542:
	case 548:
	case 549:
	case 432:
	case 433:
	case 434:
	case 451:
	case 452:
	case 453:
	case 454:
	case 455:
	case 456:
	case 459:
	case 460:
	case 461:
	case 462:
	case 463:
	case 464:
	case 560:
	case 546:
	case 587:
	case 588:
	case 589:
	case 590:
	case 591:
	case 592:
	case 501:
	case 502:
	case 500:
	case 616:
	case 615:
	case 612:
	case 629:
	case 630:
	case 631:
	case 714:
	case 633:
	case 634:
	case 635:
	case 636:
	case 637:
	case 638:
	case 639:
	case 640:
	case 643:
	case 644:
	case 641:
	case 642:
	case 646:
	case 645:
	case 647:
	case 648:
	case 649:
	case 650:
	case 666:
	case 667:
	case 668:
	case 669:
	case 670:
	case 671:
	case 673:
	case 674:
	case 675:
	case 676:
	case 677:
	case 689:
	case 690:
	case 691:
	case 692:
	case 693:
	case 694:
	case 695:
	case 696:
	case 697:
	case 698:
	case 699:
	case 700:
	case 701:
	case 702:
	case 703:
	case 704:
	case 705:
	case 706:
	case 707:
	case 708:
	case 709:
	case 710:
	case 711:
	case 712:
	case 713:
	case 632:
	case 738:
	case 739:
	case 740:
	case 741:
	case 742:
	case 743:
	case 744:
	case 745:
	case 746:
		while (Var0[0 /*6*/].f_3.f_2 > 180f) {
			Var0[0 /*6*/].f_3.f_2 -= 360f;
		}
		while (Var0[0 /*6*/].f_3.f_2 < -180f) {
			Var0[0 /*6*/].f_3.f_2 += 360f;
		}
		while (Var0[1 /*6*/].f_3.f_2 > 180f) {
			Var0[1 /*6*/].f_3.f_2 -= 360f;
		}
		while (Var0[1 /*6*/].f_3.f_2 < -180f) {
			Var0[1 /*6*/].f_3.f_2 += 360f;
		}
		uParam2->f_3.f_2 += Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2;
		while (uParam2->f_3.f_2 > 180f) {
			uParam2->f_3.f_2 -= 360f;
		}
		while (uParam2->f_3.f_2 < -180f) {
			uParam2->f_3.f_2 += 360f;
		}
		break;
	}
	switch (iParam1) {
	case 715:
	case 716:
	case 717:
	case 718:
	case 719:
	case 720:
	case 721:
	case 722:
	case 723:
	case 724:
	case 725:
	case 726:
	case 727:
	case 728:
	case 729:
	case 730:
	case 731:
	case 732:
	case 733:
	case 734:
	case 735:
	case 736:
	case 737:
	case 747:
	case 748:
	case 749:
	case 750:
	case 751:
	case 752:
	case 753:
	case 754:
	case 755:
	case 756:
	case 757:
	case 758:
	case 759:
	case 760:
	case 761:
	case 762:
	case 763:
	case 764:
	case 765:
	case 766:
	case 767:
	case 768:
	case 769:
	case 770:
	case 771:
	case 772:
	case 773:
	case 774:
	case 775:
	case 776:
	case 777:
	case 778:
	case 779:
	case 780:
	case 781:
	case 782:
	case 783:
	case 784:
	case 785:
	case 786:
	case 787:
	case 788:
	case 789:
	case 790:
	case 791:
	case 792:
	case 793:
	case 794:
	case 795:
	case 796:
	case 797:
	case 798:
	case 799:
	case 800:
	case 802:
	case 801:
	case 803:
	case 804:
	case 805:
	case 806:
	case 807:
	case 808:
	case 809:
	case 678:
	case 679:
	case 680:
	case 681:
	case 682:
	case 683:
	case 684:
	case 685:
	case 810:
	case 811:
	case 812:
	case 813:
	case 814:
	case 815:
	case 817:
	case 816:
	case 819:
	case 818:
	case 820:
	case 821:
	case 822:
	case 823:
	case 824:
	case 825:
	case 826:
	case 827:
	case 828:
	case 829:
	case 830:
	case 831:
	case 832:
	case 833:
	case 834:
	case 835:
	case 836:
	case 837:
	case 838:
	case 839:
	case 840:
	case 841:
	case 842:
	case 843:
	case 844:
	case 845:
	case 846:
	case 847:
	case 848:
	case 849:
	case 850:
	case 851:
	case 852:
	case 853:
	case 854:
	case 855:
	case 856:
	case 686:
	case 687:
	case 688:
		while (Var0[0 /*6*/].f_3.f_2 > 180f) {
			Var0[0 /*6*/].f_3.f_2 -= 360f;
		}
		while (Var0[0 /*6*/].f_3.f_2 < -180f) {
			Var0[0 /*6*/].f_3.f_2 += 360f;
		}
		while (Var0[1 /*6*/].f_3.f_2 > 180f) {
			Var0[1 /*6*/].f_3.f_2 -= 360f;
		}
		while (Var0[1 /*6*/].f_3.f_2 < -180f) {
			Var0[1 /*6*/].f_3.f_2 += 360f;
		}
		uParam2->f_3.f_2 += Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2;
		while (uParam2->f_3.f_2 > 180f) {
			uParam2->f_3.f_2 -= 360f;
		}
		while (uParam2->f_3.f_2 < -180f) {
			uParam2->f_3.f_2 += 360f;
		}
		break;
	}
	switch (iParam1) {
	case 857:
	case 858:
	case 859:
	case 860:
	case 861:
	case 862:
	case 863:
	case 864:
	case 865:
	case 866:
	case 867:
	case 868:
	case 869:
	case 870:
	case 871:
	case 872:
	case 873:
	case 874:
	case 875:
	case 876:
	case 877:
	case 878:
	case 879:
	case 880:
	case 881:
	case 882:
	case 883:
	case 884:
	case 888:
	case 889:
	case 890:
	case 891:
	case 651:
	case 652:
	case 653:
	case 654:
	case 655:
	case 656:
	case 657:
	case 658:
	case 659:
	case 660:
	case 661:
	case 662:
	case 663:
	case 664:
	case 665:
	case 887:
	case 894:
	case 895:
	case 896:
	case 897:
	case 898:
	case 899:
	case 900:
	case 901:
	case 902:
	case 903:
	case 904:
	case 905:
	case 906:
	case 907:
	case 908:
	case 911:
	case 913:
	case 914:
	case 915:
	case 916:
	case 917:
	case 918:
	case 919:
	case 920:
	case 921:
	case 922:
	case 923:
	case 924:
	case 925:
	case 926:
	case 927:
	case 928:
	case 929:
	case 930:
	case 931:
	case 932:
	case 954:
	case 955:
	case 956:
	case 957:
	case 958:
	case 959:
	case 968:
	case 969:
	case 970:
	case 971:
	case 972:
	case 973:
	case 974:
	case 975:
	case 976:
	case 977:
	case 978:
	case 979:
	case 980:
	case 981:
	case 982:
	case 983:
	case 984:
	case 985:
	case 986:
	case 987:
	case 988:
	case 989:
	case 990:
	case 1008:
	case 1009:
	case 1010:
	case 991:
	case 992:
	case 993:
	case 994:
	case 995:
	case 996:
	case 997:
	case 998:
	case 999:
	case 960:
	case 961:
	case 962:
	case 963:
	case 964:
	case 965:
	case 966:
	case 967:
	case 1000:
	case 1001:
	case 1002:
	case 1003:
	case 1004:
	case 1005:
	case 1006:
	case 1007:
	case 1011:
	case 1012:
	case 1013:
		while (Var0[0 /*6*/].f_3.f_2 > 180f) {
			Var0[0 /*6*/].f_3.f_2 -= 360f;
		}
		while (Var0[0 /*6*/].f_3.f_2 < -180f) {
			Var0[0 /*6*/].f_3.f_2 += 360f;
		}
		while (Var0[1 /*6*/].f_3.f_2 > 180f) {
			Var0[1 /*6*/].f_3.f_2 -= 360f;
		}
		while (Var0[1 /*6*/].f_3.f_2 < -180f) {
			Var0[1 /*6*/].f_3.f_2 += 360f;
		}
		uParam2->f_3.f_2 += Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2;
		while (uParam2->f_3.f_2 > 180f) {
			uParam2->f_3.f_2 -= 360f;
		}
		while (uParam2->f_3.f_2 < -180f) {
			uParam2->f_3.f_2 += 360f;
		}
		break;
	}
}

// Position - 0x385D
Vector3 func_53(vector3 vParam0, float fParam3) {
	vector3 vVar0;
	float fVar3;
	float fVar4;

	fVar3 = system::sin(fParam3);
	fVar4 = system::cos(fParam3);
	vVar0.x = vParam0.x * fVar4 - vParam0.y * fVar3;
	vVar0.y = vParam0.x * fVar3 + vParam0.y * fVar4;
	vVar0.z = vParam0.z;
	return vVar0;
}

// Position - 0x38A1
struct<6> func_54(var uParam0, int iParam1) {
	struct<6> Var0;
	var *uVar6;
	int iVar23;

	iVar23 = 0;
	if (func_55(iParam1, &uVar6)) {
		iVar23 = 1;
	}
	if (iVar23 && gameplay::_0xB335F761606DB47C(&Var0, &Var0.f_3, uParam0, uVar6)) {
		return Var0;
	}
	return Var0;
}

//Position - 0x38E3
bool func_55(int iParam0, var* uParam1)
{
	switch (iParam0) {
	case -1:
	case 1:
		*uParam1 = 0;
		StringCopy(&uParam1->f_1, "BaseElementLocationsMap", 64);
		return true;

	case 61:
		*uParam1 = 1;
		StringCopy(&uParam1->f_1, "BaseElementLocationsMap_HighApt", 64);
		return true;

	case 73:
		*uParam1 = 2;
		StringCopy(&uParam1->f_1, "ExtraBaseElementLocMap1", 64);
		return true;

	case 77:
		*uParam1 = 3;
		StringCopy(&uParam1->f_1, "ExtraBaseElementLocMap2", 64);
		return true;

	case 83:
		*uParam1 = 4;
		StringCopy(&uParam1->f_1, "ExtraBaseElementLocMap3", 64);
		return true;

	case 86:
		*uParam1 = 5;
		StringCopy(&uParam1->f_1, "ExtraBaseElementLocMap4", 64);
		return true;

	case 88:
		*uParam1 = 6;
		StringCopy(&uParam1->f_1, "ExtraBaseElementLocMap5", 64);
		return true;

	case 91:
		*uParam1 = 7;
		StringCopy(&uParam1->f_1, "ExtraBaseElementLocMap6", 64);
		return true;

	case 97:
		*uParam1 = 8;
		StringCopy(&uParam1->f_1, "ExtraBaseElementLocMap7", 64);
		return true;

	case 109:
		*uParam1 = 9;
		StringCopy(&uParam1->f_1, "ExtraBaseElementLocMap8", 64);
		return true;
	}
	return false;
}

// Position - 0x3A00
struct<6> func_56(int iParam0, bool bParam1) {
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
		if (!bParam1) {
			Var0 = {-1576.571f, -569.7595f, 85.5f};
			Var0.f_3 = {0f, 0f, 36.1f};
		}
		else {
			Var0 = {-1578.022f, -576.4251f, 104.2f};
			Var0.f_3 = {0f, 0f, -144.04f};
		}
		break;

	case 104:
		if (!bParam1) {
			Var0 = {-1571.254f, -566.5865f, 85.5f};
			Var0.f_3 = {0f, 0f, -53.9f};
		}
		else {
			Var0 = {-1578.022f, -576.4251f, 104.2f};
			Var0.f_3 = {0f, 0f, -144.04f};
		}
		break;

	case 105:
		if (!bParam1) {
			Var0 = {-1568.098f, -571.9171f, 85.5f};
			Var0.f_3 = {0f, 0f, -143.9f};
		}
		else {
			Var0 = {-1578.022f, -576.4251f, 104.2f};
			Var0.f_3 = {0f, 0f, -144.04f};
		}
		break;

	case 106:
		if (!bParam1) {
			Var0 = {-1384.518f, -475.8657f, 56.1f};
			Var0.f_3 = {0f, 0f, 98.7f};
		}
		else {
			Var0 = {-1391.245f, -473.9638f, 77.2f};
			Var0.f_3 = {0f, 0f, 98.86f};
		}
		break;

	case 107:
		if (!bParam1) {
			Var0 = {-1384.538f, -475.8829f, 48.1f};
			Var0.f_3 = {0f, 0f, 98.7f};
		}
		else {
			Var0 = {-1391.245f, -473.9638f, 77.2f};
			Var0.f_3 = {0f, 0f, 98.86f};
		}
		break;

	case 108:
		if (!bParam1) {
			Var0 = {-1378.994f, -477.2481f, 56.1f};
			Var0.f_3 = {0f, 0f, -81.1f};
		}
		else {
			Var0 = {-1391.245f, -473.9638f, 77.2f};
			Var0.f_3 = {0f, 0f, 98.86f};
		}
		break;

	case 109:
		if (!bParam1) {
			Var0 = {-186.5683f, -576.4624f, 135f};
			Var0.f_3 = {0f, 0f, 96.16f};
		}
		else {
			Var0 = {-146.6167f, -596.6301f, 166f};
			Var0.f_3 = {0f, 0f, -140f};
		}
		break;

	case 110:
		if (!bParam1) {
			Var0 = {-113.886f, -564.3862f, 135f};
			Var0.f_3 = {0f, 0f, 110.96f};
		}
		else {
			Var0 = {-146.6167f, -596.6301f, 166f};
			Var0.f_3 = {0f, 0f, -140f};
		}
		break;

	case 111:
		if (!bParam1) {
			Var0 = {-134.6568f, -635.1774f, 135f};
			Var0.f_3 = {0f, 0f, -9.04f};
		}
		else {
			Var0 = {-146.6167f, -596.6301f, 166f};
			Var0.f_3 = {0f, 0f, -140f};
		}
		break;

	case 112:
		if (!bParam1) {
			Var0 = {-79.0479f, -822.6393f, 221f};
			Var0.f_3 = {0f, 0f, 70f};
		}
		else {
			Var0 = {-73.904f, -821.6204f, 284f};
			Var0.f_3 = {0f, 0f, -110f};
		}
		break;

	case 113:
		if (!bParam1) {
			Var0 = {-70.3086f, -819.5784f, 221f};
			Var0.f_3 = {0f, 0f, 160f};
		}
		else {
			Var0 = {-73.904f, -821.6204f, 284f};
			Var0.f_3 = {0f, 0f, -110f};
		}
		break;

	case 114:
		if (!bParam1) {
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

// Position - 0x45B7
Vector3
func_57(int iParam0) {
	return entity::get_entity_coords(player::get_player_ped(iParam0), 0);
}

// Position - 0x45CA
int func_58(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 34:
	case 35:
	case 36:
	case 37:
	case 38:
	case 39:
	case 40:
	case 41:
	case 42:
	case 43:
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
	case 21:
	case 22:
	case 23:
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
	case 66:
	case 67:
	case 68:
	case 69:
	case 70:
	case 71:
	case 72:
	case 73:
	case 74:
	case 75:
	case 76:
	case 77:
	case 78:
	case 79:
	case 80:
	case 81:
	case 82:
	case 83:
	case 84:
	case 85:
	case 86:
	case 87:
	case 88:
	case 89:
	case 90:
	case 91:
	case 92:
	case 93:
	case 94:
	case 95:
	case 96:
	case 97:
	case 98:
	case 99:
	case 100:
	case 101:
	case 102: return 0;

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
	case 56:
	case 57:
	case 58:
	case 59:
	case 60:
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
	case 113:
	case 114:
	case 115: return 1;

	default:
	}
	return 0;
}

// Position - 0x489E
bool func_59() {
	if (func_61(Global_1048576.f_847)) {
		if (gameplay::get_distance_between_coords(func_57(player::player_id()),
												  Global_3934110[Global_1048576.f_847 /*2003*/].f_146.f_47, 1) <= 30f) {
			if (func_60(player::player_id(), 0, 0)) {
				if (!Global_2404994.f_2209 && !Global_2404994.f_2211) {
					return false;
				}
			}
			if (func_49(&Global_3934110[Global_1048576.f_847 /*2003*/], 1, 0)) {
				if (!Global_1591201[player::player_id() /*602*/].f_507) {
					return true;
				}
			}
		}
	}
	Global_1048576.f_847++;
	if (Global_1048576.f_847 >= 36) {
		Global_1048576.f_847 = -1;
	}
	return false;
}

// Position - 0x495F
bool func_60(int iParam0, int iParam1, int iParam2) {
	if (Global_2421664[iParam0 /*358*/].f_225 == 99) {
		if (iParam2 && Global_2421664[iParam0 /*358*/].f_228 == 0 || iParam2 == 0) {
			return false;
		}
	}
	if (iParam1) {
		if (Global_2421664[iParam0 /*358*/].f_225 == 13) {
			return false;
		}
	}
	return true;
}

// Position - 0x49B6
bool func_61(int iParam0) {
	if (func_62(iParam0)) {
		return Global_2501682.f_2[iParam0];
	}
	return false;
}

// Position - 0x49D5
bool func_62(int iParam0) {
	if (iParam0 > -1 && iParam0 < 36) {
		return true;
	}
	return false;
}

// Position - 0x49F3
int func_63() {
	if (Global_1048576.f_847 == -1) {
		return 1;
	}
	return 0;
}

// Position - 0x4A0B
int func_64() {
	if (network::network_is_activity_session() && (func_45() || func_46() || func_42() && func_68() <= 21) &&
		func_65()) {
		return 1;
	}
	return 0;
}

// Position - 0x4A51
int func_65() {
	if (network::network_is_activity_session()) {
		return func_67();
	}
	return func_66(Global_1633501.f_88646);
}

// Position - 0x4A75
int func_66(int iParam0) {
	int iVar0;

	if (iParam0 == 0) {
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8) {
		if (Global_262145.f_5059[iVar0] == iParam0) {
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x4AAF
var func_67() { return Global_2443134.f_12; }

// Position - 0x4ABD
int func_68() { return Global_1591201[player::player_id() /*602*/].f_188; }

// Position - 0x4AD2
int func_69() {
	if (Global_2443905.f_5883 && !Global_2452989) {
		return 1;
	}
	return 0;
}

// Position - 0x4AF3
int func_70(int iParam0, int iParam1, int iParam2) {
	if (iParam0 == func_71()) {
		return 0;
	}
	if (gameplay::is_bit_set(Global_1591201[iParam0 /*602*/].f_258.f_13, 0)) {
		return 1;
	}
	if (iParam1) {
		if (gameplay::is_bit_set(Global_1591201[iParam0 /*602*/].f_258.f_13, 1)) {
			return 1;
		}
	}
	if (iParam2) {
		if (Global_2421664[iParam0 /*358*/].f_312.f_1 != -1) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x4B5D
int func_71() { return -1; }

// Position - 0x4B66
var func_72() { return Global_2443905.f_1.f_2838; }

// Position - 0x4B77
void func_73() { Global_2408505.f_14 = 0; }

// Position - 0x4B86
int func_74(int iParam0) {
	if (iParam0 == func_75()) {
		return Global_2408505.f_14;
	}
	return 0;
}

// Position - 0x4BA1
int func_75() { return Global_2408505; }

// Position - 0x4BAD
void func_76(int iParam0) {
	if (iParam0 == func_75()) {
		Global_2408505.f_14 = 1;
	}
}

// Position - 0x4BC8
bool func_77(int iParam0) {
	if (func_79()) {
		if (Global_2408505.f_2 == 0) {
			Global_2408505.f_6 = 1;
			Global_2408505.f_4 = iParam0;
			Global_2408505.f_2++;
		}
		if (Global_2408505.f_2 == 1) {
			if (!Global_2408505.f_6) {
				Global_2408505.f_2 = 0;
				func_78();
				return true;
			}
		}
	}
	return false;
}

// Position - 0x4C22
void func_78() {
	Global_2408505.f_8 = 1;
	Global_2408505.f_11 = 0;
	Global_2408505.f_12 = 0;
	Global_2408505.f_4 = 1;
	Global_2408505.f_9 = 0;
	Global_2408505.f_2 = 0;
}

// Position - 0x4C54
bool func_79() {
	int iVar0;

	iVar0 = func_107();
	if (iVar0 > -1 && Global_1320796[iVar0 /*140*/].f_66 != 0 &&
		!gameplay::is_bit_set(Global_1320796[iVar0 /*140*/].f_101, 1) &&
		!gameplay::is_bit_set(Global_1320796[iVar0 /*140*/].f_101, 6) && !func_106(0) && !func_106(31) && func_80()) {
		return true;
	}
	return false;
}

// Position - 0x4CCD
int func_80() {
	int iVar0;

	iVar0 = func_105();
	if (func_104() || func_103() || func_101() || func_100() && !func_98() || func_42() && !func_97() ||
		func_96(player::player_id()) || func_95(player::player_id()) || func_94(player::player_id()) || func_93() ||
		func_90() || func_89() || func_88() || func_87() || func_86() && !func_97() ||
		func_9() && !func_6(player::player_id(), 1, 0) || func_10(player::player_id(), 0) ||
		Global_1591201[player::player_id() /*602*/] == 10 || Global_1591201[player::player_id() /*602*/] == 11 ||
		Global_1591201[player::player_id() /*602*/] == 12 || Global_1591201[player::player_id() /*602*/] == 13 ||
		Global_1591201[player::player_id() /*602*/] == 14 || Global_1591201[player::player_id() /*602*/] == 15 ||
		Global_1591201[player::player_id() /*602*/] == 1 || Global_1591201[player::player_id() /*602*/] == 3 ||
		Global_1591201[player::player_id() /*602*/] == 8 || Global_1591201[player::player_id() /*602*/] == 122 ||
		func_85() || func_84() && (func_83() || func_81())) {
		return 0;
	}
	else if (iVar0 != -1) {
		if (Global_1591201[iVar0 /*602*/] == 10 || Global_1591201[iVar0 /*602*/] == 11 ||
			Global_1591201[iVar0 /*602*/] == 12 || Global_1591201[iVar0 /*602*/] == 13 ||
			Global_1591201[iVar0 /*602*/] == 14 || Global_1591201[iVar0 /*602*/] == 15 ||
			Global_1591201[iVar0 /*602*/] == 1 || Global_1591201[iVar0 /*602*/] == 3 ||
			Global_1591201[iVar0 /*602*/] == 8 || Global_1591201[iVar0 /*602*/] == 122) {
			return 0;
		}
	}
	return 1;
}

// Position - 0x4F65
int func_81() {
	if (func_82() == 1 || func_82() == 4) {
		return 1;
	}
	return 0;
}

// Position - 0x4F87
int func_82() { return Global_1312466.f_18; }

// Position - 0x4F95
int func_83() {
	if (func_82() == 3 || func_82() == 2) {
		return 1;
	}
	return 0;
}

// Position - 0x4FB7
var func_84() { return gameplay::is_bit_set(Global_2443905.f_1.f_2808, 5); }

// Position - 0x4FCD
int func_85() {
	if (Global_1751032 && Global_1591201[player::player_id() /*602*/] != 6 &&
		Global_1619421[player::player_id() /*390*/].f_367 < 0) {
		return 1;
	}
	return 0;
}

// Position - 0x500A
var func_86() { return Global_2443134.f_704; }

// Position - 0x5019
var func_87() { return Global_2443134.f_600; }

// Position - 0x5028
var func_88() { return gameplay::is_bit_set(Global_1591201[player::player_id() /*602*/].f_39.f_18, 14); }

// Position - 0x5045
var func_89() { return Global_1574288; }

// Position - 0x5051
int func_90() {
	if (func_92(player::player_id()) || func_91(player::player_id())) {
		if (func_68() == 25) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x5080
bool func_91(int iParam0) { return Global_2421664[iParam0 /*358*/].f_118 == 7; }

// Position - 0x5095
bool func_92(int iParam0) { return Global_2421664[iParam0 /*358*/].f_118 == 2; }

// Position - 0x50AA
var func_93() { return gameplay::is_bit_set(Global_2443134.f_548.f_1, 0); }

// Position - 0x50C0
bool func_94(int iParam0) { return Global_2421664[iParam0 /*358*/].f_118 == 4; }

// Position - 0x50D5
bool func_95(int iParam0) { return Global_2421664[iParam0 /*358*/].f_118 == 6; }

// Position - 0x50EA
bool func_96(int iParam0) { return Global_2421664[iParam0 /*358*/].f_118 == 5; }

// Position - 0x50FF
bool func_97() { return Global_2443134.f_29.f_49; }

// Position - 0x510F
int func_98() {
	if (func_99()) {
		return 1;
	}
	if (Global_2404994.f_26.f_5 > 0 && !Global_2404994.f_26.f_6 && !Global_2404994.f_26.f_3) {
		return 1;
	}
	return 0;
}

// Position - 0x5150
bool func_99() { return Global_1315210; }

// Position - 0x515C
var func_100() { return Global_2404994.f_26.f_1; }

// Position - 0x516C
int func_101() {
	if (func_107() > -1) {
		if (func_92(player::player_id()) || func_91(player::player_id())) {
			if (func_102(Global_1320796[func_107() /*140*/].f_66)) {
				return 1;
			}
		}
	}
	return Global_2404994.f_26;
}

// Position - 0x51B2
bool func_102(int iParam0) {
	switch (iParam0) {
	case joaat("voltic2"):
	case joaat("ruiner2"):
	case joaat("dune4"):
	case joaat("dune5"):
	case joaat("phantom2"):
	case joaat("technical2"):
	case joaat("blazer5"):
	case joaat("boxville5"):
	case joaat("wastelander"): return true;

	default:
	}
	return false;
}

// Position - 0x51FC
var func_103() { return Global_1751011; }

// Position - 0x5208
var func_104() { return Global_2433125.f_501.f_30; }

// Position - 0x5219
var func_105() { return Global_2443134.f_641; }

// Position - 0x5228
bool func_106(int iParam0) {
	if (iParam0 < 32) {
		return gameplay::is_bit_set(Global_2433125.f_501.f_1, iParam0);
	}
	return gameplay::is_bit_set(Global_2433125.f_501.f_2, iParam0 - 32);
}

// Position - 0x525E
int func_107() { return Global_2097152[func_108() /*10758*/].f_7546.f_2; }

// Position - 0x5276
int func_108() {
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

// Position - 0x5283
bool func_109() {
	bool bVar0;
	int *iVar1;

	func_116(&bVar0, &iVar1);
	if (bVar0) {
		return true;
	}
	if (Global_1315210 == 0) {
		if (!network::network_is_game_in_progress()) {
			return true;
		}
	}
	if (func_115()) {
		return true;
	}
	if (Global_2454747) {
		return true;
	}
	if (func_114()) {
		return true;
	}
	if (func_113(157)) {
		if (!func_112()) {
			return true;
		}
	}
	if (func_113(155)) {
		return true;
	}
	if (!network::network_is_signed_online()) {
		return true;
	}
	if (func_110() != 0) {
		if (script::_get_number_of_instances_of_script_with_name_hash(func_110()) == 0) {
			return true;
		}
	}
	return false;
}

// Position - 0x5318
int func_110() {
	switch (func_111()) {
	case 0: return joaat("freemode");

	case 2: return joaat("creator");
	}
	return 0;
}

// Position - 0x534C
int func_111() { return Global_25190; }

// Position - 0x5357
bool func_112() { return Global_2443134.f_577; }

// Position - 0x5366
bool func_113(int iParam0) {
	if (script::get_event_exists(1, iParam0)) {
		return true;
	}
	return false;
}

// Position - 0x537D
bool func_114() { return Global_2452525; }

// Position - 0x5389
bool func_115() { return Global_2443134.f_572; }

// Position - 0x5398
void func_116(int *iParam0, int *iParam1) {
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
			case 381: func_117(iVar0); break;

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

// Position - 0x5418
void func_117(int iParam0) {
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (script::get_event_data(1, iParam0, &vVar0, 3)) {
		if (func_6(vVar0.y, 1, 1)) {
			iVar3 = player::get_player_ped(vVar0.y);
			if (entity::does_entity_exist(iVar3)) {
				if (ped::is_ped_in_any_vehicle(iVar3, 0)) {
					iVar4 = ped::get_vehicle_ped_is_in(iVar3, 0);
					if (vehicle::is_vehicle_window_intact(iVar4, vVar0.z) &&
						network::network_get_this_script_is_network_script()) {
						if (func_118(iVar4, &bVar5)) {
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

// Position - 0x5499
bool func_118(int iParam0, int *iParam1) {
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

// Position - 0x54F8
void func_119() {
	func_120();
	script::terminate_this_thread();
}

// Position - 0x5508
void func_120() {
	Global_2583878.f_9 = 0;
	func_121();
	if (cam::does_cam_exist(iLocal_90)) {
		cam::destroy_cam(iLocal_90, 0);
	}
	if (cam::does_cam_exist(iLocal_91)) {
		cam::destroy_cam(iLocal_91, 0);
	}
	if (iLocal_95) {
		if (func_6(player::player_id(), 0, 1)) {
			ai::clear_ped_tasks(player::player_ped_id());
		}
	}
}

// Position - 0x5555
void func_121() {
	struct<28> Var0;

	Var0.f_4 = 1;
	Var0.f_5 = 1;
	Var0.f_18 = 1;
	Var0.f_21 = 1125515264;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Global_2408505 = {Var0};
}

// Position - 0x5594
bool func_122() { return Global_1312748; }
