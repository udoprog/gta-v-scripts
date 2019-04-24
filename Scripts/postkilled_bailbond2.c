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
var uLocal_37 = 10;
var uLocal_38 = 0;
var uLocal_39 = 0;
var uLocal_40 = 0;
var uLocal_41 = 0;
var uLocal_42 = 0;
var uLocal_43 = 0;
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
var uLocal_57 = 0;
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
var uLocal_68 = 0;
var uLocal_69 = 0;
var uLocal_70 = 0;
var uLocal_71 = 0;
var uLocal_72 = 0;
var uLocal_73 = 0;
var uLocal_74 = 0;
var uLocal_75 = 0;
var uLocal_76 = 0;
var uLocal_77 = 0;
var uLocal_78 = 0;
int iLocal_79 = 4;
var uLocal_80 = 0;
var uLocal_81 = 0;
var uLocal_82 = 0;
var uLocal_83 = 0;
var uLocal_84 = 3;
var uLocal_85 = 0;
var uLocal_86 = 0;
var uLocal_87 = 0;
vector3 vLocal_88[5] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
struct<8> Local_104[5];
int iLocal_145 = 0;
struct<9> ScriptParam_0 = {
	4, 0, 0, 0, 0, 3, 0, 0, 0
};
#pragma endregion //}

void __EntryFunction__() {
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

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
	iLocal_79 = {ScriptParam_0};
	if (player::has_force_cleanup_occurred(19)) {
		func_19();
	}
	if (!ped::is_ped_injured(player::player_ped_id())) {
		func_18();
	}
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 200;
	iVar6 = gameplay::get_game_timer();
	while (true) {
		if (!func_9()) {
			func_19();
		}
		if (gameplay::get_game_timer() - iVar6 > 100) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				vVar0 = {entity::get_entity_coords(player::player_ped_id(), 0)};
				if (func_8(iLocal_79[iVar3])) {
					if (system::vdist2(vVar0, entity::get_entity_coords(iLocal_79[iVar3], 0)) >=
							IntToFloat(iVar5 * iVar5) &&
						entity::is_entity_occluded(iLocal_79[iVar3])) {
						func_7(&Local_104[iVar3 /*8*/]);
						func_6(&iLocal_79[iVar3], 1, 0, 1);
					}
					else {
						func_5(iLocal_79[iVar3], &Local_104[iVar3 /*8*/], -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
					}
				}
				else if (entity::does_entity_exist(iLocal_79[iVar3])) {
					func_6(&iLocal_79[iVar3], 1, 0, 1);
				}
				if (func_3(iLocal_79.f_5[iVar4])) {
					if (system::vdist2(vVar0, vLocal_88[iVar4 /*3*/]) >= IntToFloat(iVar5 * iVar5)) {
						if (entity::is_entity_occluded(iLocal_79.f_5[iVar4]) ||
							ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_79.f_5[iVar4], 0)) {
							func_2(&iLocal_79.f_5[iVar4]);
						}
					}
				}
				else if (entity::does_entity_exist(iLocal_79.f_5[iVar4])) {
					func_2(&iLocal_79.f_5[iVar4]);
				}
				iVar3++;
				if (iVar3 == iLocal_79) {
					iVar3 = 0;
				}
				iVar4++;
				if (iVar4 == iLocal_79.f_5) {
					iVar4 = 0;
				}
				if (func_1()) {
					func_19();
				}
			}
			iVar6 = gameplay::get_game_timer();
		}
		system::wait(0);
	}
}

// Position - 0x210
bool func_1() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= iLocal_79.f_5 - 1) {
		if (entity::does_entity_exist(iLocal_79.f_5[iVar0])) {
			return false;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= iLocal_79 - 1) {
		if (entity::does_entity_exist(iLocal_79[iVar0])) {
			return false;
		}
		iVar0++;
	}
	return true;
}

// Position - 0x269
void func_2(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		entity::is_entity_dead(*iParam0, 0);
		if (entity::is_entity_a_mission_entity(*iParam0) && entity::does_entity_belong_to_this_script(*iParam0, 1)) {
			entity::set_vehicle_as_no_longer_needed(iParam0);
		}
	}
}

// Position - 0x2A1
bool func_3(int iParam0) {
	if (func_4(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (!fire::is_entity_on_fire(iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x2CB
bool func_4(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x2EC
int func_5(int iParam0, var *uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char *sParam7,
		   int iParam8, int iParam9, int iParam10) {
	if (iParam3 == 0) {
		iParam3 = player::get_player_index();
	}
	if (fParam6 < 0f) {
		fParam6 = 100f;
	}
	if (!ped::is_ped_injured(iParam0)) {
		if (!ui::does_ped_have_ai_blip(iParam0)) {
			if (iParam8 == -1) {
				ui::_set_ped_enemy_ai_blip(iParam0, 1);
			}
			else {
				unk_0xB13DCB4C6FAAD238(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			ui::_0xE52B8E7F85D39A08(iParam0, iParam2);
			ui::_set_ai_blip_max_distance(iParam0, fParam6);
			if (ui::does_blip_exist(*uParam1)) {
				ui::set_blip_priority(*uParam1, 7);
			}
		}
		if (iParam9 != -1) {
			unk_0xFCFACD0DB9D7A57D(iParam0, iParam9);
		}
		ui::_0x0C4BBF625CA98C4E(iParam0, iParam4);
		ui::hide_special_ability_lockon_operation(iParam0, iParam5);
		*uParam1 = ui::_0x7CD934010E115C2C(iParam0);
		if (iParam9 != -1) {
			if (ui::does_blip_exist(*uParam1)) {
				if (iParam8 != -1) {
					ui::set_blip_colour(*uParam1, iParam8);
				}
				ui::begin_text_command_set_blip_name("STRING");
				if (iParam10) {
					ui::add_text_component_substring_player_name(sParam7);
				}
				else {
					ui::add_text_component_substring_text_label(sParam7);
				}
				ui::end_text_command_set_blip_name(*uParam1);
				ui::set_blip_priority(*uParam1, 7);
			}
		}
		if (!gameplay::is_bit_set(uParam1->f_6, 2)) {
			if (ui::does_blip_exist(*uParam1)) {
				if (!gameplay::is_string_null_or_empty(sParam7)) {
					ui::begin_text_command_set_blip_name("STRING");
					if (iParam10) {
						ui::add_text_component_substring_player_name(sParam7);
					}
					else {
						ui::add_text_component_substring_text_label(sParam7);
					}
					ui::end_text_command_set_blip_name(*uParam1);
				}
				gameplay::set_bit(&uParam1->f_6, 2);
			}
		}
		if (ped::is_ped_in_any_vehicle(iParam0, 0)) {
			uParam1->f_1 = ui::_0x56176892826A4FE8(iParam0);
			if (!gameplay::is_bit_set(uParam1->f_6, 3)) {
				if (ui::does_blip_exist(uParam1->f_1)) {
					ui::set_blip_priority(uParam1->f_1, 7);
					gameplay::set_bit(&uParam1->f_6, 3);
				}
			}
		}
		else if (ui::does_blip_exist(uParam1->f_1)) {
			uParam1->f_1 = 0;
			gameplay::clear_bit(&uParam1->f_6, 3);
		}
	}
	else {
		return 1;
	}
	return 0;
}

// Position - 0x485
void func_6(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (entity::does_entity_exist(*iParam0)) {
		if (!ped::is_ped_injured(*iParam0)) {
			entity::set_entity_load_collision_flag(*iParam0, 0);
			if (iParam3 == 0) {
				ai::clear_ped_secondary_task(*iParam0);
			}
			ped::set_ped_keep_task(*iParam0, iParam1);
			if (iParam2 == 1) {
				ped::set_blocking_of_non_temporary_events(*iParam0, 0);
			}
		}
		entity::set_ped_as_no_longer_needed(iParam0);
	}
}

// Position - 0x4D4
void func_7(int *iParam0) {
	bool bVar0;
	struct<8> Var1;

	if (ui::does_blip_exist(*uParam0)) {
		ui::remove_blip(uParam0);
		bVar0 = true;
	}
	if (ui::does_blip_exist(iParam0->f_1)) {
		ui::remove_blip(&iParam0->f_1);
		bVar0 = true;
	}
	if (entity::does_entity_exist(iParam0->f_7)) {
		if (!ped::is_ped_injured(iParam0->f_7)) {
			if (ui::does_ped_have_ai_blip(iParam0->f_7)) {
				ui::_set_ped_enemy_ai_blip(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0) {
		*iParam0 = {Var1};
	}
}

// Position - 0x542
bool func_8(int iParam0) {
	if (func_4(iParam0)) {
		if (!ped::is_ped_injured(iParam0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x562
int func_9() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("bailbond2")) == 0) {
		if (!func_16(4)) {
			return 0;
		}
	}
	if (Global_88744 == 1) {
		return 0;
	}
	if (cutscene::is_cutscene_playing()) {
		return 0;
	}
	if (Global_25192) {
		return 0;
	}
	if (func_10() != 2) {
		return 0;
	}
	return 1;
}

// Position - 0x5B2
int func_10() {
	func_11();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x5CB
void func_11() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_15(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_14(player::player_ped_id());
			if (func_13(iVar0) && (!func_12(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_13(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x6C8
bool func_12(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x6D6
bool func_13(int iParam0) { return iParam0 < 3; }

// Position - 0x6E2
int func_14(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_15(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x71F
int func_15(int iParam0) {
	if (func_13(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x749
int func_16(int iParam0) { return func_17(iParam0, Global_35781); }

// Position - 0x75A
int func_17(int iParam0, int iParam1) {
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

// Position - 0x93B
void func_18() {
	int iVar0;

	ped::add_relationship_group("ENEMIES", &iLocal_145);
	ped::set_relationship_between_groups(5, 1862763509, iLocal_145);
	ped::set_relationship_between_groups(5, iLocal_145, 1862763509);
	iVar0 = 0;
	while (iVar0 <= iLocal_79.f_5 - 1) {
		if (func_3(iLocal_79.f_5[iVar0])) {
			entity::set_entity_as_mission_entity(iLocal_79.f_5[iVar0], 1, 1);
			vLocal_88[iVar0 /*3*/] = {entity::get_entity_coords(iLocal_79.f_5[iVar0], 0)};
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= iLocal_79 - 1) {
		if (func_8(iLocal_79[iVar0])) {
			entity::set_entity_as_mission_entity(iLocal_79[iVar0], 1, 1);
			ped::set_ped_relationship_group_hash(iLocal_79[iVar0], iLocal_145);
			func_5(iLocal_79[iVar0], &Local_104[iVar0 /*8*/], -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
		}
		iVar0++;
	}
}

// Position - 0xA06
void func_19() {
	int iVar0;

	ped::clear_relationship_between_groups(5, 1862763509, iLocal_145);
	ped::clear_relationship_between_groups(5, iLocal_145, 1862763509);
	iVar0 = 0;
	while (iVar0 <= iLocal_79 - 1) {
		func_7(&Local_104[iVar0 /*8*/]);
		func_6(&iLocal_79[iVar0], 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= iLocal_79.f_5 - 1) {
		func_2(&iLocal_79.f_5[iVar0]);
		iVar0++;
	}
	script::terminate_this_thread();
}
