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
char *sLocal_21 = NULL;
float fLocal_22 = 0f;
var uLocal_23 = 0;
var uLocal_24 = 0;
var uLocal_25 = 0;
float fLocal_26 = 0f;
float fLocal_27 = 0f;
var uLocal_28 = 0;
var uLocal_29 = 0;
float fLocal_30 = 0f;
float fLocal_31 = 0f;
float fLocal_32 = 0f;
var uLocal_33 = 0;
var uLocal_34 = 0;
var uLocal_35 = 0;
struct<91> Local_36 = {
	0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_127 = 0;
var uLocal_128 = 3;
var uLocal_129 = 0;
var uLocal_130 = 0;
var uLocal_131 = 0;
var uLocal_132 = 3;
var uLocal_133 = 0;
var uLocal_134 = 0;
var uLocal_135 = 0;
var uLocal_136 = 0;
var uLocal_137 = 0;
var uLocal_138 = 0;
var uLocal_139 = 0;
var uLocal_140 = 0;
var uLocal_141 = 0;
int iLocal_142 = 0;
struct<122> Local_143[5];
var uLocal_754 = 3;
var uLocal_755 = 0;
var uLocal_756 = 0;
var uLocal_757 = 0;
var uLocal_758 = 0;
var uLocal_759 = 0;
var uLocal_760 = 0;
var uLocal_761 = 0;
var uLocal_762 = 0;
var uLocal_763 = 0;
var uLocal_764 = 0;
var uLocal_765 = 0;
var uLocal_766 = 0;
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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	gameplay::set_mission_flag(1);
	if (player::has_force_cleanup_occurred(3)) {
		if (!gameplay::is_string_null_or_empty(Local_36.f_88)) {
			audio::trigger_music_event(Local_36.f_88);
		}
		func_41(2);
		func_37(&Local_36);
	}
	while (true) {
		if (iLocal_142 > gameplay::get_game_timer()) {
			unk1::_0xAF66DCEE6609B148();
		}
		switch (Local_36) {
		case 0: func_27(); break;

		case 1: func_4(); break;

		case 2: func_1(); break;
		}
		system::wait(0);
	}
}

// Position - 0xD6
void func_1() {
	switch (Local_36.f_1) {
	case 1: func_3(); break;

	case 2: func_2(); break;
	}
}

// Position - 0x101
void func_2() {
	if (!gameplay::is_string_null_or_empty(Local_36.f_88)) {
		audio::trigger_music_event(Local_36.f_88);
	}
	func_41(2);
	func_37(&Local_36);
}

// Position - 0x129
void func_3() {
	if (!gameplay::is_string_null_or_empty(Local_36.f_87)) {
		audio::trigger_music_event(Local_36.f_87);
	}
	func_41(1);
	func_37(&Local_36);
}

// Position - 0x151
void func_4() {
	switch (Local_36.f_3) {
	case 9: pathfind::_0x07FB139B592FA687(1435f, -2385f, 1690f, -1885f); break;
	}
	switch (Local_36.f_83) {
	case 0:
		if (func_26(&Local_36)) {
			Local_36.f_68 = 0;
			Local_36.f_83++;
		}
		break;

	case 1:
		if (func_25(&Local_36)) {
			Local_36.f_68 = 0;
			Local_36.f_83++;
		}
		break;

	case 2:
		func_23();
		func_22();
		func_21(&Local_143);
		func_6(&Local_143);
		break;
	}
	if (Local_36.f_70 >= Local_36.f_69) {
		Local_36 = 2;
		Local_36.f_1 = 1;
	}
	if (gameplay::get_distance_between_coords(func_5(Local_36.f_3),
											  entity::get_entity_coords(player::player_ped_id(), 1), 1) > 300f) {
		Local_36 = 2;
		Local_36.f_1 = 2;
	}
}

// Position - 0x226
Vector3 func_5(int iParam0) {
	switch (iParam0) {
	case 2: return 2147.317f, 4795.208f, 40.08961f;

	case 9: return 1524.329f, -2108.269f, 75.7248f;

	case 10: return -1172.195f, -1577.427f, 3.38152f;

	case 1: return 898.3718f, -177.0764f, 72.68348f;

	case 4: return 1191.302f, 2672.064f, 36.73154f;

	case 3: return -1584.333f, 5193.487f, 2.95912f;

	case 0: return 408.3429f, -1623.836f, 28.29278f;

	case 8: return -1339.489f, -21.19435f, 50.34566f;

	case 5: return 336.207f, 172.4251f, 102.2055f;

	case 6: return 394.5495f, -703.3795f, 28.27281f;

	case 7: return -1413.184f, -206.0555f, 46.29474f;

	case 11: return -560.3809f, 274.5476f, 82.02014f;

	case 12: return 221.0845f, 340.7849f, 104.5883f;

	case 13: return -296.7154f, 6259.732f, 30.49339f;

	case 14: return -2201.402f, 4291f, 47.32429f;
	}
	return 10f, 10f, 10f;
}

// Position - 0x3D9
void func_6(int iParam0) {
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var *uVar5;

	iVar1 = 0;
	while (iVar1 < 5) {
		switch ((*iParam0)[iVar1 /*122*/]) {
		case 1:
			switch ((*iParam0)[iVar1 /*122*/].f_1) {
			case 0:
				if (Local_36.f_70 >= (*iParam0)[iVar1 /*122*/].f_116) {
					(*iParam0)[iVar1 /*122*/].f_1 = 1;
				}
				break;

			case 1:
				if (func_18(&vVar2, &uVar5)) {
					(*iParam0)[iVar1 /*122*/].f_1 = 2;
					(*iParam0)[iVar1 /*122*/].f_118 = {vVar2};
					(*iParam0)[iVar1 /*122*/].f_121 = uVar5;
				}
				break;

			case 2:
				if (func_16(iParam0, iVar1)) {
					if (func_13(iParam0, iVar1)) {
						func_12(iParam0, iVar1);
						(*iParam0)[iVar1 /*122*/].f_1 = 3;
					}
				}
				break;

			case 3:
				iVar0 = 0;
				while (iVar0 < 4) {
					if (entity::does_entity_exist((*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/])) {
						if (!entity::is_entity_dead((*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/], 0)) {
							switch ((*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/].f_9) {
							case 1:
								if ((*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/].f_16 == 0) {
									ped::set_ped_combat_range((*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/], 0);
									ped::set_ped_combat_movement((*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/], 2);
									ped::set_ped_combat_attributes(
										(*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/], 1,
										ped::is_ped_in_any_vehicle((*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/], 0));
									ped::set_ped_combat_attributes(
										(*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/], 3,
										!ped::is_ped_in_any_vehicle((*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/], 0));
									if ((*iParam0)[iVar1 /*122*/].f_117 == iVar0) {
										ped::set_combat_float((*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/], 13, 10f);
										ped::set_ped_combat_attributes((*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/], 31,
																	   1);
									}
									if ((*iParam0)[iVar1 /*122*/].f_117 != iVar0) {
										ped::set_ped_defensive_sphere_attached_to_ped(
											(*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/],
											(*iParam0)[iVar1 /*122*/].f_2[(*iParam0)[iVar1 /*122*/].f_117 /*20*/], 0f,
											0f, 0f, 5f, 0);
									}
									ai::task_combat_hated_targets_around_ped(
										(*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/], 300f, 0);
									ped::set_blocking_of_non_temporary_events(
										(*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/], 0);
									(*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/].f_17 = gameplay::get_game_timer();
									(*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/].f_16 = 1;
								}
								if ((*iParam0)[iVar1 /*122*/].f_117 != iVar0) {
									if ((*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/].f_17 != 0) {
										if (gameplay::get_game_timer() -
												(*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/].f_17 >
											10000) {
											(*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/].f_16 = 0;
											(*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/].f_9 = 3;
										}
									}
								}
								if ((*iParam0)[iVar1 /*122*/].f_117 == iVar0) {
									if ((*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/].f_17 != 0) {
										if (gameplay::get_game_timer() -
													(*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/].f_17 >
												25000 ||
											gameplay::get_distance_between_coords(
												entity::get_entity_coords(player::player_ped_id(), 1),
												entity::get_entity_coords((*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/],
																		  1),
												1) < 25f) {
											(*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/].f_16 = 0;
											(*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/].f_9 = 3;
										}
									}
								}
								break;

							case 3:
								if ((*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/].f_16 == 0) {
									ped::remove_ped_defensive_area((*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/], 0);
									ped::set_ped_combat_movement((*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/], 2);
									ped::set_ped_combat_attributes((*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/], 1, 0);
									ped::set_ped_combat_attributes((*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/], 3, 1);
									ai::task_combat_hated_targets_around_ped(
										(*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/], 300f, 0);
									ped::set_blocking_of_non_temporary_events(
										(*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/], 0);
									(*iParam0)[iVar1 /*122*/].f_2[iVar0 /*20*/].f_16 = 1;
								}
								break;
							}
							func_10(iParam0, iVar1, iVar0, Local_36.f_84);
						}
						else {
							func_8(iParam0, iVar1, iVar0);
							func_7(&Local_36);
						}
					}
					iVar0++;
				}
				break;
			}
			break;
		}
		iVar1++;
	}
}

// Position - 0x7B5
void func_7(var *uParam0) { uParam0->f_70++; }

// Position - 0x7C7
void func_8(var *uParam0, int iParam1, int iParam2) {
	if (entity::does_entity_exist((*uParam0)[iParam1 /*122*/].f_2[iParam2 /*20*/])) {
		if (!entity::is_entity_dead((*uParam0)[iParam1 /*122*/].f_2[iParam2 /*20*/], 0)) {
			ped::set_ped_keep_task((*uParam0)[iParam1 /*122*/].f_2[iParam2 /*20*/], 1);
		}
		entity::set_ped_as_no_longer_needed(&(*uParam0)[iParam1 /*122*/].f_2[iParam2 /*20*/]);
		func_9(&(*uParam0)[iParam1 /*122*/].f_2[iParam2 /*20*/].f_1);
	}
}

// Position - 0x82A
void func_9(int *iParam0) {
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

// Position - 0x898
void func_10(var *uParam0, int iParam1, int iParam2, bool bParam3) {
	func_11((*uParam0)[iParam1 /*122*/].f_2[iParam2 /*20*/], &(*uParam0)[iParam1 /*122*/].f_2[iParam2 /*20*/].f_1, -1,
			0, !bParam3, 0, 300f, 0, -1, -1, 1);
}

// Position - 0x8CE
int func_11(int iParam0, var *uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char *sParam7,
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

// Position - 0xA67
void func_12(var *uParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < (*uParam0)[iParam1 /*122*/].f_111) {
		(*uParam0)[iParam1 /*122*/].f_2[iVar0 /*20*/].f_9 = 1;
		iVar0++;
	}
}

// Position - 0xA97
bool func_13(var *uParam0, int iParam1) {
	int iVar0;

	if ((*uParam0)[iParam1 /*122*/].f_113 == (*uParam0)[iParam1 /*122*/].f_111) {
		return true;
	}
	else {
		iVar0 = (*uParam0)[iParam1 /*122*/].f_113;
		if (!entity::does_entity_exist((*uParam0)[iParam1 /*122*/].f_2[iVar0 /*20*/])) {
			(*uParam0)[iParam1 /*122*/].f_2[iVar0 /*20*/].f_10 = {(*uParam0)[iParam1 /*122*/].f_118};
			(*uParam0)[iParam1 /*122*/].f_2[iVar0 /*20*/].f_13 = (*uParam0)[iParam1 /*122*/].f_121;
			(*uParam0)[iParam1 /*122*/].f_2[iVar0 /*20*/] = func_15(uParam0, iParam1, iVar0);
			func_14((*uParam0)[iParam1 /*122*/].f_2[iVar0 /*20*/], Local_36,
					(*uParam0)[iParam1 /*122*/].f_2[iVar0 /*20*/].f_15);
			(*uParam0)[iParam1 /*122*/].f_113++;
		}
	}
	return false;
}

// Position - 0xB53
void func_14(int iParam0, struct<61> Param1, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66,
			 var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73,
			 var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80,
			 var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87,
			 var uParam88, var uParam89, var uParam90, var uParam91, int iParam92) {
	int iVar0;

	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			iVar0 = Param1.f_60[gameplay::get_random_int_in_range(0, 3)];
			if (iParam92 != 0) {
				iVar0 = iParam92;
			}
			weapon::give_weapon_to_ped(iParam0, iVar0, -1, 1, 1);
			weapon::set_current_ped_weapon(iParam0, iVar0, 1);
			weapon::set_ped_infinite_ammo(iParam0, 1, iVar0);
		}
	}
}

// Position - 0xBA4
int func_15(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	iVar0 = ped::create_ped(26, Local_36.f_53[0], (*iParam0)[iParam1 /*122*/].f_2[iParam2 /*20*/].f_10,
							(*iParam0)[iParam1 /*122*/].f_2[iParam2 /*20*/].f_13, 1, 1);
	ped::set_ped_dies_when_injured(iVar0, 1);
	ped::set_ped_as_enemy(iVar0, 1);
	ped::set_ped_relationship_group_hash(iVar0, Local_36.f_52);
	entity::set_entity_is_target_priority(iVar0, 1, 0);
	ped::set_ped_combat_attributes(iVar0, 5, 1);
	ped::set_ped_target_loss_response(iVar0, 1);
	ped::set_ped_config_flag(iVar0, 42, 1);
	ped::set_ped_config_flag(iVar0, 132, 1);
	ped::set_combat_float(iVar0, 12, 30f);
	ped::set_ped_accuracy(iVar0, 5);
	if ((*iParam0)[iParam1 /*122*/].f_2[iParam2 /*20*/].f_18 != -1 &&
		(*iParam0)[iParam1 /*122*/].f_2[iParam2 /*20*/].f_19 != -2) {
		iVar1 = (*iParam0)[iParam1 /*122*/].f_2[iParam2 /*20*/].f_18;
		if (entity::does_entity_exist((*iParam0)[iParam1 /*122*/].f_83[iVar1 /*9*/])) {
			if (!entity::is_entity_dead((*iParam0)[iParam1 /*122*/].f_83[iVar1 /*9*/], 0)) {
				ped::set_ped_into_vehicle(iVar0, (*iParam0)[iParam1 /*122*/].f_83[iVar1 /*9*/],
										  (*iParam0)[iParam1 /*122*/].f_2[iParam2 /*20*/].f_19);
			}
		}
	}
	iLocal_142 = gameplay::get_game_timer() + 1000;
	return iVar0;
}

// Position - 0xCBD
bool func_16(var *uParam0, int iParam1) {
	int iVar0;

	if ((*uParam0)[iParam1 /*122*/].f_114 == (*uParam0)[iParam1 /*122*/].f_112) {
		return true;
	}
	else {
		iVar0 = (*uParam0)[iParam1 /*122*/].f_114;
		if (!entity::does_entity_exist((*uParam0)[iParam1 /*122*/].f_83[iVar0 /*9*/])) {
			(*uParam0)[iParam1 /*122*/].f_83[iVar0 /*9*/].f_1 = {(*uParam0)[iParam1 /*122*/].f_118};
			(*uParam0)[iParam1 /*122*/].f_83[iVar0 /*9*/].f_7 = (*uParam0)[iParam1 /*122*/].f_121;
			(*uParam0)[iParam1 /*122*/].f_83[iVar0 /*9*/] = func_17(uParam0, iParam1, iVar0);
			(*uParam0)[iParam1 /*122*/].f_114++;
		}
	}
	return false;
}

// Position - 0xD56
int func_17(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = vehicle::create_vehicle((*iParam0)[iParam1 /*122*/].f_83[iParam2 /*9*/].f_8,
									(*iParam0)[iParam1 /*122*/].f_83[iParam2 /*9*/].f_1,
									(*iParam0)[iParam1 /*122*/].f_83[iParam2 /*9*/].f_7, 1, 1);
	vehicle::_0x0AD9E8F87FF7C16F(iVar0, 0);
	return iVar0;
}

// Position - 0xD9B
bool func_18(var *uParam0, var *uParam1) {
	int iVar0;
	vector3 vVar1;

	iVar0 = gameplay::get_random_int_in_range(0, 10);
	vVar1 = {Local_36.f_8[iVar0 /*3*/]};
	if (func_19(vVar1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1123024896, 1, 1103626240)) {
		*uParam0 = {vVar1};
		*uParam1 = Local_36.f_39[iVar0];
		return true;
	}
	return false;
}

// Position - 0xDFD
bool func_19(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, float fParam8,
			 int iParam9, float fParam10) {
	if (func_20(vParam0)) {
		return false;
	}
	if (fParam3 > 0f) {
		if (vehicle::is_any_vehicle_near_point(vParam0, fParam3)) {
			return false;
		}
	}
	if (fParam4 > 0f) {
		if (ped::is_any_ped_near_point(vParam0.x, vParam0.y, vParam0.z + 1f, fParam4) ||
			ped::is_any_ped_near_point(vParam0, fParam4)) {
			return false;
		}
	}
	if (fParam5 > 0f) {
		if (object::is_any_object_near_point(vParam0, fParam5, 0)) {
			return false;
		}
	}
	if (iParam9 == 1) {
		if (fire::get_number_of_fires_in_range(vParam0, 1.5f) > 0) {
			return false;
		}
	}
	if (iParam7 == 1) {
		if (fParam6 > 0f) {
			if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1), vParam0,
													  1) <= fParam8 + fParam6) {
				if (cam::is_sphere_visible(vParam0, fParam6)) {
					return false;
				}
			}
		}
	}
	if (fParam10 > 0f) {
		if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1), vParam0, 1) <
			fParam10) {
			return false;
		}
	}
	return true;
}

// Position - 0xEED
bool func_20(vector3 vParam0) {
	if (vParam0.x == 0f && vParam0.y == 0f && vParam0.z == 0f) {
		return true;
	}
	return false;
}

// Position - 0xF17
void func_21(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 5) {
		switch ((*iParam0)[iVar0 /*122*/]) {
		case 0:
			iVar1 = 0;
			while (iVar1 < 4) {
				if (entity::does_entity_exist((*iParam0)[iVar0 /*122*/].f_2[iVar1 /*20*/])) {
					if (!entity::is_entity_dead((*iParam0)[iVar0 /*122*/].f_2[iVar1 /*20*/], 0)) {
						switch ((*iParam0)[iVar0 /*122*/].f_2[iVar1 /*20*/].f_9) {
						case 2:
							if (ped::is_ped_in_combat((*iParam0)[iVar0 /*122*/].f_2[iVar1 /*20*/], 0) ||
								Local_36.f_84 == 1) {
								Local_36.f_84 = 1;
								(*iParam0)[iVar0 /*122*/].f_2[iVar1 /*20*/].f_16 = 0;
								(*iParam0)[iVar0 /*122*/].f_2[iVar1 /*20*/].f_9 = 3;
							}
							break;

						case 3:
							if ((*iParam0)[iVar0 /*122*/].f_2[iVar1 /*20*/].f_16 == 0) {
								ai::task_combat_hated_targets_around_ped((*iParam0)[iVar0 /*122*/].f_2[iVar1 /*20*/],
																		 150f, 0);
								(*iParam0)[iVar0 /*122*/].f_2[iVar1 /*20*/].f_16 = 1;
							}
							break;
						}
						func_10(iParam0, iVar0, iVar1, Local_36.f_84);
					}
					else {
						func_8(iParam0, iVar0, iVar1);
						func_7(&Local_36);
					}
				}
				iVar1++;
			}
			break;
		}
		iVar0++;
	}
}

// Position - 0x103F
void func_22() {
	if (Local_36.f_89 == 0) {
		if (Local_36.f_71 == 1) {
			if (!gameplay::is_string_null_or_empty(Local_36.f_85)) {
				if (audio::trigger_music_event(Local_36.f_85)) {
					Local_36.f_89 = 1;
				}
			}
		}
	}
	if (Local_36.f_90 == 0) {
		if (Local_36.f_84 == 1) {
			if (!gameplay::is_string_null_or_empty(Local_36.f_86)) {
				if (audio::trigger_music_event(Local_36.f_86)) {
					Local_36.f_90 = 1;
				}
			}
		}
	}
}

// Position - 0x109F
void func_23() {
	int iVar0;
	int iVar1;

	if (Local_36.f_71 == 0) {
		iVar0 = 0;
		while (iVar0 < 4) {
			if (iVar1 == 0) {
				if (ui::does_blip_exist(Local_143[0 /*122*/].f_2[iVar0 /*20*/].f_1)) {
					func_24("PMD_OBJ", 7500, 1);
					iVar1 = 1;
					Local_36.f_71 = 1;
				}
			}
			iVar0++;
		}
	}
}

// Position - 0x10EE
void func_24(char *sParam0, int iParam1, int iParam2) {
	iParam2 = iParam2;
	ui::begin_text_command_print(sParam0);
	ui::end_text_command_print(iParam1, 0);
}

// Position - 0x1107
bool func_25(var *uParam0) {
	int iVar0;

	if (uParam0->f_66 == uParam0->f_64) {
		return true;
	}
	else if (Local_143[uParam0->f_68 /*122*/] == 0) {
		if (Local_143[uParam0->f_68 /*122*/].f_113 == Local_143[uParam0->f_68 /*122*/].f_111) {
			uParam0->f_68++;
		}
		else {
			iVar0 = Local_143[uParam0->f_68 /*122*/].f_113;
			if (!entity::does_entity_exist(Local_143[uParam0->f_68 /*122*/].f_2[iVar0 /*20*/])) {
				Local_143[uParam0->f_68 /*122*/].f_2[iVar0 /*20*/] = func_15(&Local_143, uParam0->f_68, iVar0);
				func_14(Local_143[uParam0->f_68 /*122*/].f_2[iVar0 /*20*/], Local_36,
						Local_143[uParam0->f_68 /*122*/].f_2[iVar0 /*20*/].f_15);
				Local_143[uParam0->f_68 /*122*/].f_2[iVar0 /*20*/].f_9 = 2;
				Local_143[uParam0->f_68 /*122*/].f_113++;
				uParam0->f_66++;
			}
		}
	}
	else {
		uParam0->f_68++;
	}
	return false;
}

// Position - 0x11F3
bool func_26(var *uParam0) {
	int iVar0;

	if (uParam0->f_67 == uParam0->f_65) {
		return true;
	}
	else if (Local_143[uParam0->f_68 /*122*/] == 0) {
		if (Local_143[uParam0->f_68 /*122*/].f_114 == Local_143[uParam0->f_68 /*122*/].f_112) {
			uParam0->f_68++;
		}
		else {
			iVar0 = Local_143[uParam0->f_68 /*122*/].f_114;
			if (!entity::does_entity_exist(Local_143[uParam0->f_68 /*122*/].f_83[iVar0 /*9*/])) {
				Local_143[uParam0->f_68 /*122*/].f_83[iVar0 /*9*/] = func_17(&Local_143, uParam0->f_68, iVar0);
				Local_143[uParam0->f_68 /*122*/].f_114++;
				uParam0->f_67++;
			}
		}
	}
	else {
		uParam0->f_68++;
	}
	return false;
}

// Position - 0x12A7
void func_27() {
	switch (Local_36.f_51) {
	case 0:
		func_31(&Local_36, func_36());
		func_30(&Local_36);
		Local_36.f_51++;
		break;

	case 1:
		func_29(Local_36);
		Local_36.f_51++;
		break;

	case 2:
		if (func_28(Local_36)) {
			Local_36.f_51++;
		}
		break;

	case 3:
		if (ped::add_relationship_group("PMD_ENEMIES", &Local_36.f_52)) {
			ped::set_relationship_between_groups(5, 1862763509, Local_36.f_52);
			ped::set_relationship_between_groups(5, Local_36.f_52, -1533126372);
			ped::set_relationship_between_groups(5, Local_36.f_52, 1862763509);
			ped::set_relationship_between_groups(1, Local_36.f_52, Local_36.f_52);
		}
		Local_36 = 1;
		break;
	}
}

// Position - 0x1367
bool func_28(struct<61> Param0, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66,
			 var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73,
			 var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80,
			 var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87,
			 var uParam88, var uParam89, var uParam90) {
	if (Param0.f_53[0] == 0 || streaming::has_model_loaded(Param0.f_53[0]))
		&&(Param0.f_53[1] == 0 || streaming::has_model_loaded(Param0.f_53[1])) &&
			(Param0.f_53[2] == 0 || streaming::has_model_loaded(Param0.f_53[2])) &&
			(Param0.f_57[0] == 0 || streaming::has_model_loaded(Param0.f_57[0])) &&
			(Param0.f_57[1] == 0 || streaming::has_model_loaded(Param0.f_57[1])) &&
			(Param0.f_57[0] == 0 || vehicle::has_vehicle_asset_loaded(Param0.f_57[0])) &&
			(Param0.f_57[1] == 0 || vehicle::has_vehicle_asset_loaded(Param0.f_57[1])) &&
			(Param0.f_60[0] == 0 || weapon::has_weapon_asset_loaded(Param0.f_60[0])) &&
			(Param0.f_60[1] == 0 || weapon::has_weapon_asset_loaded(Param0.f_60[1])) &&
			(Param0.f_60[2] == 0 || weapon::has_weapon_asset_loaded(Param0.f_60[2])) &&
			ui::has_additional_text_loaded(0) {
			return true;
		}
	return false;
}

// Position - 0x14B2
void func_29(struct<61> Param0, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66,
			 var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73,
			 var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80,
			 var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87,
			 var uParam88, var uParam89, var uParam90) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		if (Param0.f_53[iVar0] != 0) {
			streaming::request_model(Param0.f_53[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2) {
		if (Param0.f_57[iVar0] != 0) {
			streaming::request_model(Param0.f_57[iVar0]);
			vehicle::request_vehicle_asset(Param0.f_57[iVar0], 3);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3) {
		if (Param0.f_60[iVar0] != 0) {
			weapon::request_weapon_asset(Param0.f_60[iVar0], 31, 0);
		}
		iVar0++;
	}
	ui::request_additional_text("PMD", 0);
}

// Position - 0x1550
void func_30(var *uParam0) {
	if (!func_20(uParam0->f_76) && !func_20(uParam0->f_79)) {
		uParam0->f_82 = ped::add_scenario_blocking_area(
			uParam0->f_76 - uParam0->f_79, uParam0->f_76.f_1 - uParam0->f_79.f_1, uParam0->f_76.f_2 - uParam0->f_79.f_2,
			uParam0->f_76 + uParam0->f_79, uParam0->f_76.f_1 + uParam0->f_79.f_1, uParam0->f_76.f_2 + uParam0->f_79.f_2,
			0, 1, 1, 1);
	}
	if (!func_20(uParam0->f_72) && uParam0->f_75 > 0f) {
		gameplay::clear_area(uParam0->f_72, uParam0->f_75, 1, 0, 0, 0);
	}
}

// Position - 0x15F4
void func_31(var *uParam0, int iParam1) {
	switch (iParam1) {
	case 9:
		uParam0->f_3 = 9;
		uParam0->f_4 = func_34();
		uParam0->f_5 = {1533.77f, -2135.35f, 82.04f};
		uParam0->f_2 = 4;
		uParam0->f_53[0] = joaat("g_m_y_lost_01");
		uParam0->f_53[1] = 0;
		uParam0->f_53[2] = 0;
		uParam0->f_57[0] = joaat("gburrito");
		uParam0->f_57[1] = joaat("hexer");
		uParam0->f_60[0] = joaat("weapon_pistol");
		uParam0->f_60[1] = joaat("weapon_sawnoffshotgun");
		uParam0->f_60[2] = joaat("weapon_assaultrifle");
		uParam0->f_72 = {1533.77f, -2135.35f, 82.04f};
		uParam0->f_75 = 90f;
		uParam0->f_76 = {1533.77f, -2135.35f, 82.04f};
		uParam0->f_79 = {54f, 72f, 8f};
		uParam0->f_50 = 9;
		uParam0->f_8[0 /*3*/] = {1578.134f, -2317.858f, 86.636f};
		uParam0->f_39[0] = 36.2503f;
		uParam0->f_8[1 /*3*/] = {1571.414f, -2314.379f, 86.0904f};
		uParam0->f_39[1] = 37.4325f;
		uParam0->f_8[2 /*3*/] = {1555.674f, -2321.857f, 85.2531f};
		uParam0->f_39[2] = 2.4637f;
		uParam0->f_8[3 /*3*/] = {1516.694f, -1980.273f, 70.1538f};
		uParam0->f_39[3] = 203.6018f;
		uParam0->f_8[4 /*3*/] = {1505.077f, -1978.409f, 69.794f};
		uParam0->f_39[4] = 217.0733f;
		uParam0->f_8[5 /*3*/] = {1498.166f, -1981.469f, 69.5705f};
		uParam0->f_39[5] = 256.7048f;
		uParam0->f_8[6 /*3*/] = {1670.858f, -2022.844f, 99.5899f};
		uParam0->f_39[6] = 142.5751f;
		uParam0->f_8[7 /*3*/] = {1677.085f, -2035.785f, 98.5593f};
		uParam0->f_39[7] = 109.2985f;
		uParam0->f_8[8 /*3*/] = {1659.187f, -2090.027f, 99.2239f};
		uParam0->f_39[8] = 9.0974f;
		Local_143[0 /*122*/] = 0;
		Local_143[0 /*122*/].f_111 = 4;
		Local_143[0 /*122*/].f_112 = 2;
		Local_143[0 /*122*/].f_83[0 /*9*/].f_1 = {1533.375f, -2087.209f, 76.0832f};
		Local_143[0 /*122*/].f_83[0 /*9*/].f_7 = 152.9678f;
		Local_143[0 /*122*/].f_83[0 /*9*/].f_8 = joaat("gburrito");
		Local_143[0 /*122*/].f_83[1 /*9*/].f_1 = {1547.824f, -2091.365f, 76.1018f};
		Local_143[0 /*122*/].f_83[1 /*9*/].f_7 = 55.5566f;
		Local_143[0 /*122*/].f_83[1 /*9*/].f_8 = joaat("gburrito");
		Local_143[0 /*122*/].f_2[0 /*20*/].f_10 = {1525.76f, -2092.838f, 76.0174f};
		Local_143[0 /*122*/].f_2[0 /*20*/].f_13 = 232.9176f;
		Local_143[0 /*122*/].f_2[1 /*20*/].f_10 = {1527.138f, -2091.832f, 76.031f};
		Local_143[0 /*122*/].f_2[1 /*20*/].f_13 = 190.6337f;
		Local_143[0 /*122*/].f_2[2 /*20*/].f_10 = {1523.108f, -2115.134f, 75.6351f};
		Local_143[0 /*122*/].f_2[2 /*20*/].f_13 = 350.4627f;
		Local_143[0 /*122*/].f_2[3 /*20*/].f_10 = {1522.629f, -2112.768f, 75.6853f};
		Local_143[0 /*122*/].f_2[3 /*20*/].f_13 = 264.9478f;
		Local_143[1 /*122*/] = 1;
		Local_143[1 /*122*/].f_111 = 4;
		Local_143[1 /*122*/].f_112 = 1;
		Local_143[1 /*122*/].f_116 = 2;
		Local_143[1 /*122*/].f_83[0 /*9*/].f_8 = joaat("gburrito");
		Local_143[1 /*122*/].f_2[0 /*20*/].f_18 = 0;
		Local_143[1 /*122*/].f_2[0 /*20*/].f_19 = -1;
		Local_143[1 /*122*/].f_2[0 /*20*/].f_15 = joaat("weapon_pistol");
		Local_143[1 /*122*/].f_2[1 /*20*/].f_18 = 0;
		Local_143[1 /*122*/].f_2[1 /*20*/].f_19 = 0;
		Local_143[1 /*122*/].f_2[1 /*20*/].f_15 = joaat("weapon_pistol");
		Local_143[1 /*122*/].f_2[2 /*20*/].f_18 = 0;
		Local_143[1 /*122*/].f_2[2 /*20*/].f_19 = 1;
		Local_143[1 /*122*/].f_2[2 /*20*/].f_15 = joaat("weapon_assaultrifle");
		Local_143[1 /*122*/].f_2[3 /*20*/].f_18 = 0;
		Local_143[1 /*122*/].f_2[3 /*20*/].f_19 = 2;
		Local_143[1 /*122*/].f_2[3 /*20*/].f_15 = joaat("weapon_assaultrifle");
		Local_143[2 /*122*/] = 1;
		Local_143[2 /*122*/].f_111 = 4;
		Local_143[2 /*122*/].f_112 = 1;
		Local_143[2 /*122*/].f_116 = 3;
		Local_143[2 /*122*/].f_83[0 /*9*/].f_8 = joaat("gburrito");
		Local_143[2 /*122*/].f_2[0 /*20*/].f_18 = 0;
		Local_143[2 /*122*/].f_2[0 /*20*/].f_19 = -1;
		Local_143[2 /*122*/].f_2[0 /*20*/].f_15 = joaat("weapon_pistol");
		Local_143[2 /*122*/].f_2[1 /*20*/].f_18 = 0;
		Local_143[2 /*122*/].f_2[1 /*20*/].f_19 = 0;
		Local_143[2 /*122*/].f_2[1 /*20*/].f_15 = joaat("weapon_pistol");
		Local_143[2 /*122*/].f_2[2 /*20*/].f_18 = 0;
		Local_143[2 /*122*/].f_2[2 /*20*/].f_19 = 1;
		Local_143[2 /*122*/].f_2[2 /*20*/].f_15 = joaat("weapon_assaultrifle");
		Local_143[2 /*122*/].f_2[3 /*20*/].f_18 = 0;
		Local_143[2 /*122*/].f_2[3 /*20*/].f_19 = 2;
		Local_143[2 /*122*/].f_2[3 /*20*/].f_15 = joaat("weapon_assaultrifle");
		break;

	default:
		uParam0->f_2 = 6;
		uParam0->f_53[0] = joaat("g_m_y_mexgoon_01");
		uParam0->f_53[1] = joaat("g_m_y_mexgoon_02");
		uParam0->f_53[2] = joaat("g_m_y_mexgoon_03");
		uParam0->f_60[0] = joaat("weapon_pistol");
		uParam0->f_60[1] = joaat("weapon_microsmg");
		uParam0->f_60[2] = joaat("weapon_assaultrifle");
		uParam0->f_69 = 10;
		break;
	}
	func_33(uParam0);
	func_32(uParam0);
}

// Position - 0x1B84
void func_32(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5) {
		if (Local_143[iVar0 /*122*/] == 0) {
			uParam0->f_64 += Local_143[iVar0 /*122*/].f_111;
			uParam0->f_65 += Local_143[iVar0 /*122*/].f_112;
		}
		uParam0->f_69 += Local_143[iVar0 /*122*/].f_111;
		iVar0++;
	}
}

// Position - 0x1BDB
void func_33(var *uParam0) {
	switch (uParam0->f_3) {
	case 9:
		switch (uParam0->f_4) {
		case 0:
			uParam0->f_85 = "PM_CV1_START";
			uParam0->f_86 = "PM_CV1_GF";
			uParam0->f_87 = "PM_CV1_STOP";
			uParam0->f_88 = "PM_CV1_FAIL";
			uParam0->f_89 = 0;
			uParam0->f_90 = 0;
			break;

		case 1:
			uParam0->f_85 = "PM_CV2_START";
			uParam0->f_86 = "PM_CV2_GF";
			uParam0->f_87 = "PM_CV2_STOP";
			uParam0->f_88 = "PM_CV2_FAIL";
			uParam0->f_89 = 0;
			uParam0->f_90 = 0;
			break;
		}
		break;
	}
}

// Position - 0x1C5C
int func_34() { return func_35(Global_100412.f_20, Global_100412.f_29); }

// Position - 0x1C74
int func_35(int iParam0, int iParam1) {
	switch (iParam0) {
	case 9:
		switch (iParam1) {
		case 0: return 0;

		case 1: return 1;
		}
		break;
	}
	return 0;
}

// Position - 0x1CAE
int func_36() { return Global_100412.f_20; }

// Position - 0x1CBC
void func_37(var *uParam0) {
	func_40(*uParam0);
	func_39(&Local_143);
	func_38(&Local_143);
	if (uParam0->f_82 != 0) {
		ped::remove_scenario_blocking_area(uParam0->f_82, 0);
	}
	script::terminate_this_thread();
}

// Position - 0x1CEE
void func_38(var *uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 5) {
		iVar1 = 0;
		while (iVar1 < 3) {
			if (entity::does_entity_exist((*uParam0)[iVar0 /*122*/].f_83[iVar1 /*9*/])) {
				entity::set_vehicle_as_no_longer_needed(&(*uParam0)[iVar0 /*122*/].f_83[iVar1 /*9*/]);
			}
			iVar1++;
		}
		iVar0++;
	}
}

// Position - 0x1D3D
void func_39(var *uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 5) {
		iVar1 = 0;
		while (iVar1 < 4) {
			func_8(uParam0, iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

// Position - 0x1D73
void func_40(struct<61> Param0, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66,
			 var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73,
			 var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80,
			 var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87,
			 var uParam88, var uParam89, var uParam90) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		if (Param0.f_53[iVar0] != 0) {
			streaming::set_model_as_no_longer_needed(Param0.f_53[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2) {
		if (Param0.f_57[iVar0] != 0) {
			streaming::set_model_as_no_longer_needed(Param0.f_57[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3) {
		if (Param0.f_60[iVar0] != 0) {
			weapon::remove_weapon_asset(Param0.f_60[iVar0]);
		}
		iVar0++;
	}
}

// Position - 0x1DF9
void func_41(int iParam0) { Global_100412.f_22 = iParam0; }
