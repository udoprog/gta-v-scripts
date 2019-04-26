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
int iLocal_43 = 0;
int iLocal_44 = 0;
vector3 vLocal_45 = {0f, 0f, 0f};
int iLocal_48 = 0;
var uLocal_49 = 0;
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
	if (player::has_force_cleanup_occurred(11)) {
		iLocal_43 = 5;
	}
	while (true) {
		system::wait(0);
		if (player::is_player_playing(player::player_id())) {
			switch (iLocal_43) {
			case 0: func_5(); break;

			case 1: break;

			case 2:
				func_4();
				if (network::network_is_game_in_progress()) {
					if (gameplay::create_incident_with_entity(7, player::player_ped_id(), 2, 3f, &uLocal_49, 0)) {
						iLocal_48 = gameplay::get_game_timer();
						iLocal_43 = 5;
					}
				}
				else if (gameplay::create_incident(7, vLocal_45, 2, 3f, &uLocal_49, 0)) {
					iLocal_48 = gameplay::get_game_timer();
					iLocal_43 = 5;
				}
				break;

			case 3:
				func_4();
				if (network::network_is_game_in_progress()) {
					if (gameplay::create_incident_with_entity(5, player::player_ped_id(), 2, 3f, &uLocal_49, 0)) {
						iLocal_48 = gameplay::get_game_timer();
						iLocal_43 = 5;
					}
				}
				else if (gameplay::create_incident(5, vLocal_45, 2, 3f, &uLocal_49, 0)) {
					iLocal_48 = gameplay::get_game_timer();
					iLocal_43 = 5;
				}
				break;

			case 4:
				func_4();
				if (network::network_is_game_in_progress()) {
					if (gameplay::create_incident_with_entity(3, player::player_ped_id(), 4, 3f, &uLocal_49, 0)) {
						iLocal_48 = gameplay::get_game_timer();
						iLocal_43 = 5;
					}
				}
				else if (gameplay::create_incident(3, vLocal_45, 4, 3f, &uLocal_49, 0)) {
					if (Global_88321.f_358 == gameplay::get_hash_key("AGENCY_PREP_1") ||
						script::_get_number_of_instances_of_script_with_name_hash(
							gameplay::get_hash_key("agency_prep1")) > 0 &&
							func_3(0)) {
						Global_88321.f_358 = gameplay::get_hash_key("AHP1_TRUCKCALLED");
					}
					else if (func_2(67) && !func_2(68)) {
						Global_88251 = 1;
					}
					iLocal_48 = gameplay::get_game_timer();
					iLocal_43 = 5;
				}
				break;

			case 5:
				if (gameplay::get_game_timer() > iLocal_48 + 60000 || !gameplay::is_incident_valid(uLocal_49)) {
					func_1();
				}
				else if (player::is_player_playing(player::player_id())) {
					if (!player::is_player_control_on(player::player_id())) {
						if (gameplay::is_incident_valid(uLocal_49)) {
							gameplay::delete_incident(uLocal_49);
						}
					}
				}
				break;
			}
		}
	}
}

// Position - 0x23D
void func_1() {
	iLocal_43 = 0;
	iLocal_44 = 0;
	script::terminate_this_thread();
}

// Position - 0x24F
int func_2(int iParam0) {
	if (iParam0 == 94 || iParam0 == -1) {
		return 0;
	}
	return Global_101700.f_8044.f_330[iParam0 /*6*/];
}

// Position - 0x27B
int func_3(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return 1;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x2A6
void func_4() {
	if (gameplay::get_game_timer() > iLocal_48 + 30000) {
		iLocal_43 = 5;
	}
}

// Position - 0x2BD
void func_5() {
	float *fVar0;

	switch (iLocal_44) {
	case 0:
		iLocal_44 = 1;
		iLocal_48 = gameplay::get_game_timer();
		break;

	case 1:
		while (!func_13()) {
			system::wait(0);
			if (func_12() == 3) {
				iLocal_43 = 3;
			}
			if (func_12() == 4) {
				iLocal_43 = 4;
			}
			if (func_12() == 5) {
				iLocal_43 = 2;
			}
			if (gameplay::get_game_timer() > iLocal_48 + 30000) {
				iLocal_48 = gameplay::get_game_timer();
				func_8(0);
			}
		}
		if (iLocal_43 == 0) {
			iLocal_43 = 5;
		}
		if (!ped::is_ped_injured(player::player_ped_id())) {
			func_6(player::player_ped_id(), &vLocal_45, &fVar0);
		}
		iLocal_48 = gameplay::get_game_timer();
		break;
	}
}

// Position - 0x356
void func_6(int iParam0, var *uParam1, float *fParam2) {
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar7;
	vector3 vVar10;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	vector3 vVar25;
	var uVar28;

	fVar18 = 5f;
	iVar0 = 1;
	iVar19 = 0;
	while (iVar19 < 2) {
		switch (iVar19) {
		case 0:
			pathfind::get_nth_closest_vehicle_node_with_heading(entity::get_entity_coords(player::player_ped_id(), 1),
																iVar0, uParam1, &fVar16, &iVar1, 5, 3f, 0f);
			pathfind::get_closest_road(*uParam1, 1f, 1, &uVar4, &uVar7, &uVar2, &uVar3, &fVar13, 0);
			if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 0), -3044.66f,
													  596.43f, 6.58f, 1) < 25f) {
				*uParam1 = {-3031.38f, 605.32f, 6.86f};
			}
			vVar10 = {entity::get_entity_coords(player::player_ped_id(), 1) - entity::get_entity_coords(iParam0, 1)};
			fVar14 = gameplay::get_heading_from_vector_2d(vVar10.x, vVar10.y);
			fVar15 = fVar16 + 180f;
			if (fVar15 > 360f) {
				fVar15 -= 360f;
			}
			if (func_7(fVar14, fVar16, 90f)) {
				*fParam2 = fVar16;
			}
			else {
				*fParam2 = fVar15;
			}
			if (fVar13 < 0f) {
				fVar17 = 0f;
			}
			else if (pathfind::_get_is_slow_road_flag(
						 pathfind::get_nth_closest_vehicle_node_id(*uParam1, 1, 1, 1077936128, 0))) {
				fVar17 = 0f;
			}
			else {
				fVar17 = fVar18 * system::to_float(iVar1 / 2);
				if (fVar17 == 0f) {
					fVar17 += fVar18;
				}
				if (iVar1 == 5) {
					fVar17 += fVar18;
				}
				if (gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 0), 294f,
														  -895f, 28f, 1) < 25f ||
					gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 0),
														  -713.01f, -819.64f, 22.63f, 1) < 25f) {
					fVar17 += 5f;
				}
				else {
					fVar17 += 3.75f;
				}
				fVar17 += fVar13 / 2f;
			}
			if (system::vdist(object::_get_object_offset_from_coords(*uParam1, *fParam2, fVar17, 0f, 0f),
							  entity::get_entity_coords(player::player_ped_id(), 1)) >
				system::vdist(object::_get_object_offset_from_coords(*uParam1, *fParam2, -fVar17, 0f, 0f),
							  entity::get_entity_coords(player::player_ped_id(), 1))) {
				fVar17 = -fVar17;
			}
			*uParam1 = {object::_get_object_offset_from_coords(*uParam1, *fParam2, fVar17, 0f, 0f)};
			iVar20 = worldprobe::start_shape_test_capsule(*uParam1 + FtoV(uParam1->f_2 + 4.5f),
														  *uParam1 + Vector(4.5f, 0.5f, 0.5f), 2.5f, 1, 0, 4);
			iVar19++;
			break;

		case 1:
			if (iVar0 <= 2) {
				if (worldprobe::get_shape_test_result(iVar20, &iVar21, &vVar25, &uVar22, &uVar28) == 2) {
					if (iVar21 != 0) {
						if (vVar25.z > uParam1->f_2 + 8.5f) {
							iVar19++;
						}
						else {
							iVar0++;
							iVar19 = 0;
						}
					}
					else {
						iVar19++;
					}
				}
			}
			else {
				iVar19++;
			}
			break;

		case 2: break;
		}
	}
}

// Position - 0x5FC
bool func_7(float fParam0, float fParam1, float fParam2) {
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

// Position - 0x671
void func_8(int iParam0) {
	if (Global_14604) {
		func_10(0, 0);
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
	if (!func_9()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x6E1
int func_9() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x708
void func_10(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_11(0)) {
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

// Position - 0x77C
bool func_11(int iParam0) {
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

// Position - 0x7D6
int func_12() { return Global_16762; }

// Position - 0x7E1
int func_13() {
	if (Global_15745 == 0) {
		return 1;
	}
	return 0;
}
