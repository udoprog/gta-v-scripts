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
vector3 vLocal_44 = {0f, 0f, 0f};
var uLocal_47 = 0;
var uLocal_48 = 10;
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
var uLocal_79 = 0;
var uLocal_80 = 0;
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
vector3 vLocal_91 = {0f, 0f, 0f};
float fLocal_94 = 0f;
int iLocal_95 = 0;
int iLocal_96 = 0;
int iLocal_97 = 0;
char *sLocal_98 = NULL;
int iLocal_99 = 0;
int *iLocal_100 = NULL;
int iLocal_101 = 0;
struct<18> ScriptParam_0 = {
	0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5
};
var uScriptParam_18 = 0;
var uScriptParam_19 = 0;
var uScriptParam_20 = 0;
var uScriptParam_21 = 0;
var uScriptParam_22 = 0;
#pragma endregion //}

void __EntryFunction__() {
	vector3 vVar0;

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
	iLocal_90 = joaat("u_m_o_taphillbilly");
	sLocal_98 = "SPECIAL_PED@MOUNTAIN_DANCER@MONOLOGUE_1@MONOLOGUE_1A";
	iLocal_101 = -1;
	vLocal_91 = {ScriptParam_0.f_1[0 /*3*/]};
	fLocal_94 = ScriptParam_0.f_17[0];
	if (player::has_force_cleanup_occurred(11)) {
		func_36(0);
	}
	if (func_35(Global_101700.f_19076, 16384)) {
		func_36(0);
	}
	while (true) {
		system::wait(0);
		if (entity::does_entity_exist(iLocal_95)) {
			if (entity::is_entity_dead(iLocal_95, 0) && iLocal_99 != 7) {
				func_34(&Global_101700.f_19076, 16384);
				iLocal_99 = 7;
			}
		}
		switch (iLocal_99) {
		case 0:
			if (brain::is_world_point_within_brain_activation_range() && !func_33() && !func_12()) {
				if (func_11()) {
					iLocal_95 = ped::create_ped(26, iLocal_90, vLocal_91, fLocal_94, 1, 1);
					ped::set_blocking_of_non_temporary_events(iLocal_95, 1);
					iLocal_96 =
						object::create_object(joaat("prop_tapeplayer_01"), 704.7615f, 4179.574f, 39.7093f, 1, 1, 0);
					entity::set_entity_heading(iLocal_96, 233.8288f + 180f);
					ped::set_ped_prop_index(iLocal_95, 0, 0, 0, 0);
					iLocal_99 = 1;
				}
			}
			else {
				func_36(0);
			}
			break;

		case 1:
			iLocal_101 = ped::create_synchronized_scene(vLocal_91 + Vector(1f, 0f, 0f), 0f, 0f, fLocal_94, 2);
			ai::task_synchronized_scene(iLocal_95, iLocal_101, sLocal_98, "MTN_DNC_if_you_want_to_get_to_heaven", 2f,
										-2f, 1, 0, 1148846080, 0);
			audio::_set_synchronized_audio_event_position_this_frame("MNT_DNC", iLocal_95);
			iLocal_99 = 2;
			break;

		case 2:
			if (audio::prepare_synchronized_audio_event_for_scene(iLocal_101, "MNT_DNC") == 1) {
				audio::play_synchronized_audio_event(iLocal_101);
				iLocal_99 = 3;
			}
			break;

		case 3:
			vVar0 = {entity::get_entity_coords(iLocal_95, 1)};
			ped::set_ped_lod_multiplier(iLocal_95, 3f);
			if (func_10(player::player_ped_id(), iLocal_95) < 10f) {
				ped::set_ik_target(player::player_ped_id(), 1, iLocal_95, 31086, 0f, 0f, 0f, 0, -1, -1);
				ped::set_ik_target(iLocal_95, 1, player::player_ped_id(), 31086, 0f, 0f, 0f, 0, -1, -1);
			}
			if (func_9(iLocal_95, player::player_ped_id(), 1) < 25f) {
				if (!ui::does_blip_exist(iLocal_100)) {
					func_5(&iLocal_100, &iLocal_95, 0);
					ui::set_blip_colour(iLocal_100, 3);
				}
			}
			else if (ui::does_blip_exist(iLocal_100)) {
				func_4(&iLocal_100);
			}
			if (ped::get_synchronized_scene_phase(iLocal_101) > 0.9999999f) {
				iLocal_99 = 1;
			}
			if (ped::is_ped_ragdoll(iLocal_95)) {
				audio::stop_synchronized_audio_event(iLocal_101);
				iLocal_99 = 4;
			}
			if (ped::is_ped_injured(iLocal_95) || gameplay::is_bullet_in_area(vVar0, 50f, 1) ||
				gameplay::is_bullet_in_area(vVar0, 50f, 0) ||
				gameplay::is_projectile_in_area(vVar0, 20f, 20f, 20f, 0) ||
				fire::is_explosion_in_sphere(-1, vVar0, 50f) ||
				(player::is_player_free_aiming_at_entity(player::player_id(), iLocal_95) ||
				 player::is_player_targetting_entity(player::player_id(), iLocal_95)) &&
					gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1), vVar0,
														  1) < 25f &&
					func_1(iLocal_95, player::player_ped_id(), 1126825984, 0)) {
				audio::stop_synchronized_audio_event(iLocal_101);
				iLocal_99 = 4;
				iLocal_97 = 1;
			}
			break;

		case 4:
			if (ui::does_blip_exist(iLocal_100)) {
				func_4(&iLocal_100);
			}
			if (!ped::is_ped_ragdoll(iLocal_95)) {
				if (iLocal_97 == 1) {
					ai::task_follow_nav_mesh_to_coord(iLocal_95, 723.1315f, 4171.957f, 39.7091f, 2f, -1, 1f, 1024,
													  1193033728);
				}
				else {
					ai::task_follow_nav_mesh_to_coord(iLocal_95, 723.1315f, 4171.957f, 39.7091f, 1f, -1, 1f, 1024,
													  1193033728);
				}
				ped::set_ped_keep_task(iLocal_95, 1);
				iLocal_99 = 6;
			}
			break;

		case 6:
			if (ai::get_script_task_status(iLocal_95, 713668775) != 1 &&
				ai::get_script_task_status(iLocal_95, 713668775) != 0) {
				ped::set_blocking_of_non_temporary_events(iLocal_95, 0);
				if (iLocal_97 == 1) {
					ai::task_smart_flee_ped(iLocal_95, player::player_ped_id(), 100f, -1, 0, 0);
				}
				else {
					ai::task_wander_standard(iLocal_95, 1193033728, 0);
				}
				ped::set_ped_keep_task(iLocal_95, 1);
				iLocal_99 = 5;
			}
			break;

		case 5:
			if (entity::is_entity_occluded(iLocal_95) &&
				gameplay::get_distance_between_coords(entity::get_entity_coords(iLocal_95, 1),
													  entity::get_entity_coords(player::player_ped_id(), 1), 1) > 50f &&
				!brain::is_world_point_within_brain_activation_range()) {
				func_36(1);
			}
			break;

		case 7:
			if (!brain::is_world_point_within_brain_activation_range()) {
				func_36(0);
			}
			break;
		}
	}
}

// Position - 0x493
int func_1(int iParam0, int iParam1, float fParam2, int iParam3) {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = {func_3(entity::get_entity_coords(iParam1, 1) - entity::get_entity_coords(iParam0, 1))};
	if (fParam2 < 0.1f || fParam2 > 360f) {
		return 1;
	}
	if (iParam3 == 0) {
		vVar3 = {entity::get_entity_forward_vector(iParam0)};
	}
	else {
		vVar3 = {func_3(ped::get_ped_bone_coords(iParam0, 31086, 0f, 5f, 0f) -
						ped::get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f))};
	}
	fVar6 = func_2(vVar3, vVar0);
	if (fVar6 <= system::cos(fParam2 / 2f)) {
		return 0;
	}
	return 1;
}

// Position - 0x524
float func_2(vector3 vParam0, vector3 vParam3) {
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

// Position - 0x545
Vector3 func_3(vector3 vParam0) {
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

// Position - 0x584
void func_4(int *iParam0) {
	if (ui::does_blip_exist(*iParam0)) {
		ui::remove_blip(iParam0);
	}
}

// Position - 0x59C
void func_5(int *iParam0, int iParam1, int iParam2) {
	if (!ui::does_blip_exist(*iParam0)) {
		if (entity::does_entity_exist(*iParam1)) {
			if (!ped::is_ped_injured(*iParam1)) {
				*iParam0 = func_6(*iParam1, iParam2, 145);
				if (iParam2 == 0) {
					ui::set_blip_priority(*iParam0, 7);
				}
			}
		}
	}
}

// Position - 0x5E0
int func_6(int iParam0, bool bParam1, int iParam2) {
	int iVar0;

	iVar0 = func_7(iParam0, !bParam1, 0);
	if (iParam2 != 145 && ui::does_blip_exist(iVar0) &&
		ui::does_text_label_exist(&Global_101700.f_27009[iParam2 /*29*/].f_3)) {
		ui::set_blip_name_from_text_file(iVar0, &Global_101700.f_27009[iParam2 /*29*/].f_3);
	}
	return iVar0;
}

// Position - 0x632
int func_7(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	iVar0 = ui::add_blip_for_entity(iParam0);
	if (entity::is_entity_a_vehicle(iParam0)) {
		ui::set_blip_scale(iVar0, func_8(network::network_is_game_in_progress(), 1f, 1f));
		if (!iParam2) {
			ui::set_blip_as_friendly(iVar0, iParam1);
		}
		else {
			ui::set_blip_colour(iVar0, 2);
		}
	}
	else if (entity::is_entity_a_ped(iParam0)) {
		ui::set_blip_scale(iVar0, func_8(network::network_is_game_in_progress(), 0.7f, 0.7f));
		ui::set_blip_as_friendly(iVar0, iParam1);
	}
	else if (entity::is_entity_an_object(iParam0)) {
		ui::set_blip_scale(iVar0, func_8(network::network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

// Position - 0x6D6
var func_8(bool bParam0, float fParam1, float fParam2) {
	if (bParam0) {
		return fParam1;
	}
	return fParam2;
}

// Position - 0x6ED
float func_9(int iParam0, int iParam1, int iParam2) {
	vector3 vVar0;
	vector3 vVar3;

	if (!entity::is_entity_dead(iParam0, 0)) {
		vVar0 = {entity::get_entity_coords(iParam0, 1)};
	}
	else {
		vVar0 = {entity::get_entity_coords(iParam0, 0)};
	}
	if (!entity::is_entity_dead(iParam1, 0)) {
		vVar3 = {entity::get_entity_coords(iParam1, 1)};
	}
	else {
		vVar3 = {entity::get_entity_coords(iParam1, 0)};
	}
	return gameplay::get_distance_between_coords(vVar0, vVar3, iParam2);
}

// Position - 0x74B
float func_10(int iParam0, int iParam1) { return func_9(iParam0, iParam1, 1); }

// Position - 0x75C
bool func_11() {
	streaming::request_model(iLocal_90);
	streaming::request_anim_dict(sLocal_98);
	if (streaming::has_model_loaded(iLocal_90) && streaming::has_anim_dict_loaded(sLocal_98)) {
		return true;
	}
	return false;
}

// Position - 0x789
int func_12() {
	if (!func_31(5)) {
		return 1;
	}
	if (func_27()) {
		return 1;
	}
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (system::vmag2(entity::get_entity_velocity(player::player_ped_id())) > 1369f && !func_26()) {
			return 0;
		}
	}
	if (func_13(100f, 1) != -1) {
		return 1;
	}
	return 0;
}

// Position - 0x7EB
int func_13(float fParam0, int iParam1) {
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;

	iVar33 = -1;
	fVar34 = fParam0;
	if (player::is_player_playing(player::player_id())) {
		if (func_24(func_25())) {
			iVar36 = func_19();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63) {
				iVar32 = iVar37;
				if (gameplay::is_bit_set(Global_101700.f_17533[iVar32 /*6*/], 2) &&
					!gameplay::is_bit_set(Global_101700.f_17533[iVar32 /*6*/], 3)) {
					func_14(iVar32, &Var0);
					fVar35 = gameplay::get_distance_between_coords(
						entity::get_entity_coords(player::player_ped_id(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34) {
						bVar38 = true;
						if (iParam1) {
							if (iVar36 != Var0.f_26) {
								bVar38 = false;
							}
						}
						if (bVar38) {
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

// Position - 0x8A2
void func_14(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0:
		func_15(uParam1, "Abigail1", func_17(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0,
				"ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
		break;

	case 1:
		func_15(uParam1, "Abigail2", func_17(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0,
				-1, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
		break;

	case 2:
		func_15(uParam1, "Barry1", func_17(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1,
				4, 1, 0, 2359, func_16(iParam0), 1, 0);
		break;

	case 3:
		func_15(uParam1, "Barry2", func_17(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1,
				4, 4, 0, 2359, func_16(iParam0), 1, 1);
		break;

	case 4:
		func_15(uParam1, "Barry3", func_17(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0,
				2359, func_16(iParam0), 0, 0);
		break;

	case 5:
		func_15(uParam1, "Barry3A", func_17(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "",
				166, 0, 7, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
		break;

	case 6:
		func_15(uParam1, "Barry3C", func_17(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0,
				7, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
		break;

	case 7:
		func_15(uParam1, "Barry4", func_17(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4",
				0, 0, -1, 4, 2, 800, 2000, func_16(iParam0), 0, 0);
		break;

	case 8:
		func_15(uParam1, "Dreyfuss1", func_17(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106,
				0, "", 0, 0, -1, 4, 2, 0, 2359, func_16(iParam0), 0, 0);
		break;

	case 9:
		func_15(uParam1, "Epsilon1", func_17(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10,
				4, 1, 0, 2359, func_16(iParam0), 0, 0);
		break;

	case 10:
		func_15(uParam1, "Epsilon2", func_17(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11,
				4, 1, 0, 2359, func_16(iParam0), 1, 0);
		break;

	case 11:
		func_15(uParam1, "Epsilon3", func_17(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars",
				0, 0, 12, 4, 1, 0, 2359, func_16(iParam0), 0, 0);
		break;

	case 12:
		func_15(uParam1, "Epsilon4", func_17(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16,
				"postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_16(iParam0), 0, 0);
		break;

	case 13:
		func_15(uParam1, "Epsilon5", func_17(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes",
				0, 0, 14, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
		break;

	case 14:
		func_15(uParam1, "Epsilon6", func_17(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0,
				15, 4, 1, 0, 2359, func_16(iParam0), 0, 1);
		break;

	case 15:
		func_15(uParam1, "Epsilon7", func_17(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert",
				0, 0, 16, 4, 1, 0, 2359, func_16(iParam0), 0, 0);
		break;

	case 16:
		func_15(uParam1, "Epsilon8", func_17(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16,
				"epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_16(iParam0), 1, 0);
		break;

	case 17:
		func_15(uParam1, "Extreme1", func_17(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18,
				4, 2, 0, 2359, func_16(iParam0), 0, 1);
		break;

	case 18:
		func_15(uParam1, "Extreme2", func_17(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0,
				19, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
		break;

	case 19:
		func_15(uParam1, "Extreme3", func_17(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20,
				4, 2, 0, 2359, func_16(iParam0), 0, 1);
		break;

	case 20:
		func_15(uParam1, "Extreme4", func_17(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0,
				-1, 4, 2, 0, 2359, func_16(iParam0), 0, 0);
		break;

	case 21:
		func_15(uParam1, "Fanatic1", func_17(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1,
				-1, 4, 1, 700, 2000, func_16(iParam0), 1, 0);
		break;

	case 22:
		func_15(uParam1, "Fanatic2", func_17(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1,
				-1, 4, 4, 700, 2000, func_16(iParam0), 1, 0);
		break;

	case 23:
		func_15(uParam1, "Fanatic3", func_17(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4,
				2, 700, 2000, func_16(iParam0), 0, 1);
		break;

	case 24:
		func_15(uParam1, "Hao1", func_17(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0,
				"controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_16(iParam0), 0, 1);
		break;

	case 25:
		func_15(uParam1, "Hunting1", func_17(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1,
				26, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
		break;

	case 26:
		func_15(uParam1, "Hunting2", func_17(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0,
				-1, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
		break;

	case 27:
		func_15(uParam1, "Josh1", func_17(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns",
				0, 1, 28, 4, 4, 0, 2359, func_16(iParam0), 1, 0);
		break;

	case 28:
		func_15(uParam1, "Josh2", func_17(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29,
				4, 4, 0, 2359, func_16(iParam0), 1, 1);
		break;

	case 29:
		func_15(uParam1, "Josh3", func_17(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30,
				4, 4, 0, 2359, func_16(iParam0), 1, 1);
		break;

	case 30:
		func_15(uParam1, "Josh4", func_17(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1,
				4, 4, 0, 2359, func_16(iParam0), 1, 0);
		break;

	case 31:
		func_15(uParam1, "Maude1", func_17(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher",
				0, 1, -1, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
		break;

	case 32:
		func_15(uParam1, "Minute1", func_17(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33,
				4, 4, 0, 2359, func_16(iParam0), 0, 1);
		break;

	case 33:
		func_15(uParam1, "Minute2", func_17(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4,
				0, 2359, func_16(iParam0), 0, 1);
		break;

	case 34:
		func_15(uParam1, "Minute3", func_17(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0,
				-1, 4, 4, 0, 2359, func_16(iParam0), 0, 1);
		break;

	case 35:
		func_15(uParam1, "MrsPhilips1", func_17(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0,
				"ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_16(iParam0), 0, 0);
		break;

	case 36:
		func_15(uParam1, "MrsPhilips2", func_17(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0,
				2359, func_16(iParam0), 0, 0);
		break;

	case 37:
		func_15(uParam1, "Nigel1", func_17(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1,
				-1, 1, 4, 0, 2359, func_16(iParam0), 1, 0);
		break;

	case 38:
		func_15(uParam1, "Nigel1A", func_17(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "",
				0, 0, 42, 4, 4, 0, 2359, func_16(iParam0), 1, 1);
		break;

	case 39:
		func_15(uParam1, "Nigel1B", func_17(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0,
				42, 4, 4, 700, 2000, func_16(iParam0), 1, 1);
		break;

	case 40:
		func_15(uParam1, "Nigel1C", func_17(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0,
				42, 4, 4, 700, 2000, func_16(iParam0), 1, 1);
		break;

	case 41:
		func_15(uParam1, "Nigel1D", func_17(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0,
				42, 4, 4, 700, 2000, func_16(iParam0), 1, 1);
		break;

	case 42:
		func_15(uParam1, "Nigel2", func_17(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43,
				4, 4, 0, 2359, func_16(iParam0), 1, 1);
		break;

	case 43:
		func_15(uParam1, "Nigel3", func_17(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16,
				"postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_16(iParam0), 1, 1);
		break;

	case 44:
		func_15(uParam1, "Omega1", func_17(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0,
				"spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_16(iParam0), 0, 0);
		break;

	case 45:
		func_15(uParam1, "Omega2", func_17(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0,
				-1, 4, 2, 0, 2359, func_16(iParam0), 0, 0);
		break;

	case 46:
		func_15(uParam1, "Paparazzo1", func_17(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1,
				47, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
		break;

	case 47:
		func_15(uParam1, "Paparazzo2", func_17(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0,
				48, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
		break;

	case 48:
		func_15(uParam1, "Paparazzo3", func_17(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183,
				1, -1, 2, 2, 0, 2359, func_16(iParam0), 0, 0);
		break;

	case 49:
		func_15(uParam1, "Paparazzo3A", func_17(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0,
				"", 0, 0, 51, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
		break;

	case 50:
		func_15(uParam1, "Paparazzo3B", func_17(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0,
				0, 51, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
		break;

	case 51:
		func_15(uParam1, "Paparazzo4", func_17(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1,
				-1, 4, 2, 0, 2359, func_16(iParam0), 0, 0);
		break;

	case 52:
		func_15(uParam1, "Rampage1", func_17(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4,
				4, 0, 2359, func_16(iParam0), 0, 0);
		break;

	case 54:
		func_15(uParam1, "Rampage3", func_17(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55,
				4, 4, 0, 2359, func_16(iParam0), 1, 0);
		break;

	case 55:
		func_15(uParam1, "Rampage4", func_17(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4,
				4, 0, 2359, func_16(iParam0), 1, 0);
		break;

	case 56:
		func_15(uParam1, "Rampage5", func_17(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0,
				53, 4, 4, 0, 2359, func_16(iParam0), 0, 0);
		break;

	case 53:
		func_15(uParam1, "Rampage2", func_17(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0,
				"rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_16(iParam0), 1, 0);
		break;

	case 57:
		func_15(uParam1, "TheLastOne", func_17(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0,
				1, -1, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
		break;

	case 58:
		func_15(uParam1, "Tonya1", func_17(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0,
				"ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
		break;

	case 59:
		func_15(uParam1, "Tonya2", func_17(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48,
				"ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
		break;

	case 60:
		func_15(uParam1, "Tonya3", func_17(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359,
				func_16(iParam0), 0, 1);
		break;

	case 61:
		func_15(uParam1, "Tonya4", func_17(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359,
				func_16(iParam0), 0, 1);
		break;

	case 62:
		func_15(uParam1, "Tonya5", func_17(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0,
				-1, 4, 2, 0, 2359, func_16(iParam0), 0, 1);
		break;

	default: break;
	}
}

// Position - 0x1A44
void func_15(var *uParam0, char *sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7,
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

// Position - 0x1AD5
int func_16(int iParam0) {
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

// Position - 0x1E1B
struct<2> func_17(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = {func_18(iParam0)};
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x1E52
struct<2>
func_18(int iParam0) {
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

//Position - 0x229E
int func_19()
{
	func_20();
	switch (Global_101700.f_2095.f_539.f_3549) {
	case 0: return 1;

	case 1: return 2;

	case 2: return 4;
	}
	return 0;
}

// Position - 0x22E4
void func_20() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_23(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_22(player::player_ped_id());
			if (func_24(iVar0) && (!func_21(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_24(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x23E1
bool func_21(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x23EF
int func_22(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_23(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x242C
int func_23(int iParam0) {
	if (func_24(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x2456
bool func_24(int iParam0) { return iParam0 < 3; }

// Position - 0x2462
int func_25() {
	func_20();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x247B
int func_26() {
	if (gameplay::is_pc_version()) {
		if (gameplay::_0xD10282B6E3751BA0() == 1f) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x2498
bool func_27() {
	if (func_30() && !func_26()) {
		return true;
	}
	if (func_29() && func_28()) {
		return true;
	}
	return false;
}

// Position - 0x24CA
bool func_28() { return Global_101418 > 0; }

// Position - 0x24D8
int func_29() {
	if (Global_88746 != -1) {
		return 1;
	}
	return 0;
}

// Position - 0x24ED
int func_30() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 20);
	}
	return 0;
}

// Position - 0x2513
int func_31(int iParam0) { return func_32(iParam0, Global_35781); }

// Position - 0x2524
int func_32(int iParam0, int iParam1) {
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

// Position - 0x2705
int func_33() {
	if (player::is_player_playing(player::player_id()) && !ped::is_ped_injured(player::player_ped_id())) {
		if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1), vLocal_44) < 75f * 75f) {
			return 1;
		}
		if (system::vmag2(entity::get_entity_velocity(player::player_ped_id())) > 1369f && !func_26()) {
			return 0;
		}
	}
	if (func_27()) {
		return 1;
	}
	if (func_13(100f, 1) != -1) {
		return 1;
	}
	return 0;
}

// Position - 0x278B
void func_34(var *uParam0, int iParam1) { *uParam0 |= iParam1; }

// Position - 0x279C
bool func_35(var uParam0, int iParam1) { return (uParam0 & iParam1) != 0; }

// Position - 0x27AB
void func_36(int iParam0) {
	if (entity::does_entity_exist(iLocal_96)) {
		object::delete_object(&iLocal_96);
	}
	if (ui::does_blip_exist(iLocal_100)) {
		func_4(&iLocal_100);
	}
	if (entity::does_entity_exist(iLocal_95)) {
		if (iParam0) {
			ped::delete_ped(&iLocal_95);
		}
		else {
			entity::set_ped_as_no_longer_needed(&iLocal_95);
		}
	}
	script::terminate_this_thread();
}
