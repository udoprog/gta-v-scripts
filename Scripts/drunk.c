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
struct<5> Local_43 = {
	0, 0, 0, 0, 0
};
int iLocal_48 = 0;
int iLocal_49 = 0;
bool bLocal_50 = 0;
int iLocal_51 = 0;
float fLocal_52 = 0f;
float fLocal_53 = 0f;
char *sLocal_54 = NULL;
struct<5> Local_55 = {
	0, 0, 0, 0, 0
};
vector3 vLocal_60 = {0f, 0f, 0f};
int iLocal_63 = 0;
int iLocal_64 = 0;
struct<5> ScriptParam_0 = {
	0, 0, 0, 0, 0
};
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
	iLocal_48 = -1;
	iLocal_49 = -1;
	fLocal_52 = 1.7f;
	fLocal_53 = 0f;
	sLocal_54 = "";
	iLocal_63 = -1;
	if (player::has_force_cleanup_occurred(2)) {
		func_145();
	}
	Local_43 = {ScriptParam_0};
	func_144();
	func_143();
	func_138(iLocal_48, 0, 0);
	system::settimera(0);
	func_137();
	func_133();
	while (true) {
		system::wait(0);
		func_132(iLocal_48);
		func_131();
		func_129();
		func_122();
		func_138(iLocal_48, 0, 0);
		func_144();
		func_6();
		if (network::network_is_game_in_progress() && !network::network_is_activity_session() && !func_5()) {
			func_1();
		}
	}
}

// Position - 0x106
void func_1() {
	if (func_4() || func_3()) {
		func_2();
	}
}

// Position - 0x123
void func_2() { Global_2443134.f_634 = 1; }

// Position - 0x133
var func_3() { return Global_2443134.f_613; }

// Position - 0x142
var func_4() { return gameplay::is_bit_set(Global_2443134.f_2, 11); }

// Position - 0x156
bool func_5() { return gameplay::is_bit_set(Global_2443905.f_1.f_2809, 3); }

// Position - 0x16C
void func_6() {
	int iVar0;

	if (entity::is_entity_dead(Local_43.f_1, 0)) {
		func_145();
	}
	if (bLocal_50) {
		if (!player::is_player_playing(player::player_id())) {
			func_145();
		}
	}
	func_121();
	iVar0 = 1;
	switch (vLocal_60.x) {
	case 4: func_120(); return;

	case 5: func_117(); return;

	case 6: func_115(); return;

	case 7: func_114(); return;

	case 8: func_113(); return;

	case 9: func_111(); return;

	case 10:
		func_110();
		func_107();
		func_106();
		return;

	case 11: func_105(); return;

	case 12: break;

	default: iVar0 = 0; break;
	}
	if (!iVar0) {
		return;
	}
	if (vLocal_60.x != 12) {
		return;
	}
	switch (vLocal_60.y) {
	case 1:
		if (!func_104()) {
			func_103();
			func_107();
		}
		break;

	case 2: func_101(); break;

	case 12: func_88(); break;

	case 3: func_7(); break;

	default: break;
	}
}

// Position - 0x287
void func_7() {
	char *sVar0;
	struct<53> Var1;
	int iVar59;

	ped::set_ped_to_ragdoll(Local_43.f_1, 3000, 3500, 0, 1, 1, 0);
	Global_1760205 = 1;
	if (!cam::is_screen_faded_out()) {
		cam::do_screen_fade_out(2500);
		while (cam::is_screen_fading_out()) {
			system::wait(0);
		}
	}
	if (network::network_is_game_in_progress()) {
		func_81(player::player_id(), 0, 57344);
		Global_2404994.f_2212 = 1;
		if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
			Global_2404994.f_2213 = 1;
		}
		else {
			Global_2404994.f_2213 = 0;
		}
		if (cam::is_script_global_shaking()) {
			cam::stop_script_global_shaking(0);
		}
		if (func_77(1)) {
			func_64(0);
		}
		func_62(1);
		func_145();
	}
	sVar0 = "";
	Var1.f_3 = 1064514355;
	Var1.f_30 = 1148829696;
	Var1.f_31 = 1148829696;
	Var1.f_52 = 1148829696;
	iVar59 = 7;
	switch (func_57()) {
	case 0:
		if (func_55() != 2) {
			iVar59 = 0;
		}
		else {
			iVar59 = 1;
		}
		break;

	case 1:
		if (!func_54(126)) {
			iVar59 = 2;
		}
		else {
			iVar59 = 3;
		}
		break;

	case 2:
		if (!func_53(4)) {
			if (func_54(58)) {
				iVar59 = 4;
			}
			if (func_54(59)) {
				iVar59 = 5;
			}
			if (iVar59 == 7) {
				if (!func_52()) {
					iVar59 = 4;
				}
				else {
					iVar59 = 5;
				}
			}
		}
		else {
			iVar59 = 6;
		}
		break;
	}
	switch (iVar59) {
	case 0:
		sVar0 = "DWC_MICHAEL_mansion";
		Var1 = "SAVEM_Default@";
		Var1.f_1 = "M_GetOut_R";
		Var1.f_2 = "M_GetOut_R_CAM";
		Var1.f_5 = {-814.181f, 181.1f, 75.74f};
		Var1.f_8 = {0f, 0f, 21.1994f};
		Var1.f_4 = -1871534317;
		break;

	case 1:
		sVar0 = "DWC_MICHAEL_trailer";
		Var1 = "SAVECountryside@";
		Var1.f_1 = "M_GetOut_countryside";
		Var1.f_2 = "M_GetOut_countryside_CAM";
		Var1.f_5 = {1968.14f, 3816.79f, 32.4287f};
		Var1.f_8 = {0f, 0f, 29.7938f};
		Var1.f_4 = -1871534317;
		break;

	case 2:
		sVar0 = "DWC_FRANKLIN_city";
		Var1 = "SWITCH@FRANKLIN@BED";
		Var1.f_1 = "Sleep_GetUp_RubEyes";
		Var1.f_2 = "Sleep_GetUp_RubEyes_CAM";
		Var1.f_5 = {-17.2168f, -1441.224f, 30.1015f};
		Var1.f_8 = {0f, 0f, -179.653f};
		Var1.f_4 = -1871534317;
		break;

	case 3:
		sVar0 = "DWC_FRANKLIN_hills";
		Var1 = "SAVEBighouse@";
		Var1.f_1 = "F_GetOut_r_bighouse";
		Var1.f_2 = "F_GetOut_r_bighouse_CAM";
		Var1.f_5 = {-1.049f, 524.283f, 170.064f};
		Var1.f_8 = {0f, 0f, 24f};
		Var1.f_4 = -1871534317;
		break;

	case 4:
		sVar0 = "DWC_TREVOR_trailer";
		Var1 = "SAVECountryside@";
		Var1.f_1 = "T_GetOut_countryside";
		Var1.f_2 = "T_GetOut_countryside_CAM";
		Var1.f_5 = {1968.14f, 3816.79f, 32.4287f};
		Var1.f_8 = {0f, 0f, 29.7938f};
		Var1.f_4 = -1871534317;
		break;

	case 5:
		sVar0 = "DWC_TREVOR_beach";
		Var1 = "SAVEVeniceB@";
		Var1.f_1 = "T_GetOut_r_veniceB";
		Var1.f_2 = "T_GetOut_r_veniceB_CAM";
		Var1.f_5 = {-1148.438f, -1512.246f, 9.689f};
		Var1.f_8 = {0f, 0f, 36.25f};
		Var1.f_4 = -1871534317;
		break;

	case 6:
		sVar0 = "DWC_TREVOR_stripclub";
		Var1 = "SAVECouch@";
		Var1.f_1 = "T_GetOut_couch";
		Var1.f_2 = "T_GetOut_couch_CAM";
		Var1.f_5 = {94.53f, -1289.86f, 28.27f};
		Var1.f_8 = {0f, 0f, 29.7938f};
		Var1.f_4 = -1871534317;
		break;
	}
	if (!entity::is_entity_dead(Local_43.f_1, 0)) {
		entity::set_entity_coords(Local_43.f_1, Var1.f_5, 1, 0, 0, 1);
	}
	system::wait(500);
	StringCopy(&Var1.f_11, "", 16);
	Var1.f_15 = -1f;
	func_9(sVar0, &Var1, "");
	func_8(126, 1);
	func_145();
}

// Position - 0x649
void func_8(int iParam0, int iParam1) {
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

// Position - 0x6A6
void func_9(char *sParam0, var *uParam1, char *sParam2) {
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var *uVar9;
	int iVar174;
	int iVar175;
	char *sVar176;
	char *sVar177;
	char *sVar178;
	int iVar179;
	float fVar180;
	float fVar181;
	int iVar182;
	int iVar183;
	int iVar184;
	float fVar185;
	vector3 vVar186;
	vector3 vVar189;
	float fVar192;
	float fVar193;
	float fVar194;
	vector3 vVar195;
	var uVar198;
	float fVar199;
	float fVar200;
	vector3 vVar201;
	vector3 vVar204;
	float fVar207;
	var uVar208;
	float fVar209;
	float fVar210;
	vector3 vVar211;
	var uVar214;
	float fVar215;
	float fVar216;
	vector3 vVar217;
	vector3 vVar220;
	float fVar223;
	int iVar224;
	bool bVar225;
	int iVar226;
	int iVar227;

	fVar0 = 0f;
	player::set_player_control(player::player_id(), 0, 0);
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		entity::set_entity_invincible(player::player_ped_id(), 1);
	}
	graphics::remove_particle_fx_in_range(uParam1->f_5, 4500f);
	graphics::remove_decals_in_range(uParam1->f_5, 4500f);
	gameplay::clear_area(uParam1->f_5, 5f, 1, 0, 0, 0);
	entity::set_entity_coords(player::player_ped_id(), uParam1->f_5, 1, 0, 0, 1);
	entity::freeze_entity_position(player::player_ped_id(), 1);
	system::wait(0);
	gameplay::set_game_paused(1);
	streaming::request_anim_dict(*uParam1);
	if (gameplay::is_string_null_or_empty(uParam1->f_16)) {
	}
	else {
		streaming::request_anim_dict(uParam1->f_16);
	}
	if (!cam::is_screen_faded_out()) {
		cam::do_screen_fade_out(0);
	}
	func_47(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!cam::is_screen_faded_out()) {
		cam::do_screen_fade_out(0);
	}
	iVar1 = gameplay::get_game_timer() + 20000;
	iVar2 = 0;
	uParam1->f_33 = 0;
	while (!iVar2 && iVar1 > gameplay::get_game_timer()) {
		iVar2 = 1;
		streaming::request_anim_dict(*uParam1);
		if (!streaming::has_anim_dict_loaded(*uParam1)) {
			iVar2 = 0;
		}
		if (!gameplay::is_string_null_or_empty(uParam1->f_16)) {
			streaming::request_anim_dict(uParam1->f_16);
			if (!streaming::has_anim_dict_loaded(uParam1->f_16)) {
				iVar2 = 0;
			}
		}
		if (!cam::is_screen_faded_out()) {
			cam::do_screen_fade_out(0);
		}
		system::wait(0);
	}
	func_44();
	if (!func_43(uParam1->f_22, 0f, 0f, 0f, 0)) {
		pathfind::set_roads_in_area(uParam1->f_5 + uParam1->f_19 - uParam1->f_22,
									uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 0, 1);
		gameplay::clear_area_of_vehicles(uParam1->f_5 + uParam1->f_19, system::vmag(uParam1->f_22) + 25f, 0, 0, 0, 0,
										 0);
		gameplay::clear_area(uParam1->f_5 + uParam1->f_19, system::vmag(uParam1->f_22) + 25f, 1, 0, 0, 0);
	}
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		player::clear_player_wanted_level(player::player_id());
		weapon::set_current_ped_weapon(player::player_ped_id(), joaat("weapon_unarmed"), 1);
		ai::clear_ped_tasks_immediately(player::player_ped_id());
	}
	entity::freeze_entity_position(player::player_ped_id(), 0);
	gameplay::set_game_paused(0);
	gameplay::clear_area(uParam1->f_5, 15f, 1, 0, 0, 0);
	ped::_0x4759CC730F947C81();
	vehicle::_0x48ADC8A773564670();
	func_41();
	while (func_40()) {
		system::wait(0);
	}
	if (!cam::is_screen_faded_in() && !cam::is_screen_fading_in()) {
		cam::do_screen_fade_in(250);
	}
	gameplay::set_fade_in_after_death_arrest(1);
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		iVar4 = ped::create_synchronized_scene(uParam1->f_5, uParam1->f_8, 2);
		ped::set_synchronized_scene_looped(iVar4, 0);
		ped::_set_synchronized_scene_occlusion_portal(iVar4, 0);
		iVar5 = cam::create_cam("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != -1871534317) {
			iVar6 |= 2;
		}
		func_38(player::player_ped_id(), uParam1->f_18);
		ai::task_synchronized_scene(player::player_ped_id(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0,
									1148846080, 0);
		ped::_0x129466ED55140F8D(player::player_ped_id(), 1);
		player::set_player_cloth_pin_frames(player::player_id(), 1);
		iVar3 = ped::get_ped_reset_flag(player::player_ped_id(), 77);
		ped::set_ped_reset_flag(player::player_ped_id(), 77, 1);
		cam::play_synchronized_cam_anim(iVar5, iVar4, uParam1->f_2, *uParam1);
		cam::render_script_cams(1, 0, 3000, 1, 0, 0);
		if (!gameplay::is_string_null_or_empty(uParam1->f_16) && !gameplay::is_string_null_or_empty(uParam1->f_17)) {
			ai::task_play_anim(player::player_ped_id(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0,
							   0);
		}
	}
	else {
		iVar4 = -1;
	}
	if (!uParam1->f_25) {
		if (!gameplay::is_string_null_or_empty(sParam2)) {
			func_37(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	iVar7 = 0;
	iVar8 = 0;
	uVar9 = 16;
	if (!gameplay::is_string_null_or_empty(&uParam1->f_11)) {
		iVar174 = func_57();
		iVar175 = -1;
		sVar176 = "";
		switch (iVar174) {
		case 0:
			iVar175 = 0;
			sVar176 = "MICHAEL";
			break;

		case 1:
			iVar175 = 1;
			sVar176 = "FRANKLIN";
			break;

		case 2:
			iVar175 = 2;
			sVar176 = "TREVOR";
			break;

		default: break;
		}
		func_36(&uVar9, iVar175, player::player_ped_id(), sVar176, 0, 1);
	}
	if (ped::is_synchronized_scene_running(iVar4)) {
		sVar177 = "WalkInterruptible";
		sVar178 = "ForceBlendout";
		while (ped::is_synchronized_scene_running(iVar4) && !entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (!iVar8) {
				if (!cam::is_screen_faded_out()) {
					if (!gameplay::is_string_null_or_empty(uParam1->f_26)) {
						graphics::_start_screen_effect(uParam1->f_26, 0, 0);
						iVar8 = 1;
					}
					if (!gameplay::is_string_null_or_empty(uParam1->f_27)) {
						if (!gameplay::is_string_null_or_empty(uParam1->f_28)) {
							audio::play_sound_frontend(-1, uParam1->f_28, uParam1->f_27, 0);
							iVar8 = 1;
						}
						if (!gameplay::is_string_null_or_empty(uParam1->f_29)) {
							audio::play_sound_frontend(-1, uParam1->f_29, uParam1->f_27, 0);
							iVar8 = 1;
						}
					}
				}
			}
			ui::hide_hud_and_radar_this_frame();
			ui::hide_hud_component_this_frame(18);
			ui::clear_reminder_message();
			func_32();
			iVar179 = gameplay::get_game_timer();
			if (iVar179 >= Global_36332 - 500) {
				func_31(4000);
			}
			fVar180 = -1f;
			fVar181 = -1f;
			fVar0 = ped::get_synchronized_scene_phase(iVar4);
			if (!gameplay::is_string_null_or_empty(&uParam1->f_11)) {
				if (!iVar7) {
					if (fVar0 >= uParam1->f_15) {
						if (func_19(&uVar9, "PRSAUD", &uParam1->f_11, 3, 0, 0, 0)) {
							iVar7 = 1;
						}
					}
				}
			}
			iVar182 = 0;
			if (entity::has_anim_event_fired(player::player_ped_id(), gameplay::get_hash_key(sVar177))) {
				iVar183 = controls::get_control_value(2, 195) - 128;
				iVar184 = controls::get_control_value(2, 196) - 128;
				if (iVar183 < 64 && iVar183 > -64 && iVar184 < 64 && iVar184 > -64) {
				}
				else {
					iVar182 = 1;
				}
			}
			else {
				fVar180 = -1f;
				fVar181 = -1f;
				iVar182 = 0;
				uParam1->f_3 = uParam1->f_3;
				fVar180 = fVar180;
				fVar181 = fVar181;
			}
			if (cam::get_follow_ped_cam_view_mode() == 4 && uParam1->f_52 > 0f) {
				if (fVar0 >= uParam1->f_52) {
					if (!uParam1->f_32) {
						fVar185 = 1.5f;
						vVar186 = {cam::_get_gameplay_cam_coords()};
						vVar189 = {ped::get_ped_bone_coords(player::player_ped_id(), 31086, 0f, 0f, 0f)};
						fVar192 = gameplay::get_distance_between_coords(vVar186, vVar189, 1);
						fVar185 = func_18(fVar185, 0.001f, fVar192 - 0.75f);
						if (fVar185 < 0f) {
							fVar185 = 0.001f;
						}
						func_17(&uParam1->f_34, player::player_ped_id(), func_57(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_16(&uParam1->f_34, uParam1->f_53);
						if (!uParam1->f_33) {
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = gameplay::get_game_timer();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f) {
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f) {
							vVar195 = {cam::_get_gameplay_cam_rot(2)};
							uVar198 = entity::get_entity_heading(player::player_ped_id());
							fVar199 = vVar195.z;
							fVar200 = uVar198;
							uParam1->f_57 = fVar199 - fVar200;
							if (uParam1->f_57 < 360f) {
								uParam1->f_57 += 360f;
							}
							if (uParam1->f_57 > 360f) {
								uParam1->f_57 -= 360f;
							}
						}
						fVar193 = uParam1->f_56;
						fVar194 = uParam1->f_57;
						cam::set_gameplay_cam_relative_pitch(fVar193, 1065353216);
						cam::set_gameplay_cam_relative_heading(fVar194);
						cam::_set_gameplay_cam_raw_pitch(fVar193);
						cam::_set_gameplay_cam_raw_yaw(fVar194);
						vVar201 = {cam::_get_gameplay_cam_coords()};
						vVar204 = {cam::get_gameplay_cam_coord()};
						fVar207 = gameplay::get_distance_between_coords(vVar201, vVar204, 1);
						uVar208 = system::round(fVar207 * 1000f);
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32) {
						cam::_0x59424BD75174C9B1();
						if (func_13(&uParam1->f_34, 1, 1, 1, 0, 0, 0)) {
						}
					}
				}
			}
			if (entity::has_anim_event_fired(player::player_ped_id(), gameplay::get_hash_key(sVar178)) || iVar182) {
				if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
					ai::clear_ped_tasks(player::player_ped_id());
					switch (uParam1->f_4) {
					case -1871534317:
						ped::force_ped_motion_state(player::player_ped_id(), -1871534317, 1, 0, 0);
						cam::_0xC819F3CBB62BF692(0, 0, 3, 0);
						break;

					case -668482597:
						ped::force_ped_motion_state(player::player_ped_id(), -668482597, 1, 0, 0);
						player::simulate_player_input_gait(player::player_id(), 1f, 500, 0, 1, 0);
						if (cam::get_follow_ped_cam_view_mode() != 4) {
							if (uParam1->f_31 == 999f) {
								uParam1->f_30 = 0f;
							}
							if (uParam1->f_31 == 999f) {
								vVar211 = {cam::_get_gameplay_cam_rot(2)};
								uVar214 = entity::get_entity_heading(player::player_ped_id());
								fVar215 = vVar211.z;
								fVar216 = uVar214;
								uParam1->f_31 = fVar215 - fVar216;
								if (uParam1->f_31 < 360f) {
									uParam1->f_31 += 360f;
								}
								if (uParam1->f_31 > 360f) {
									uParam1->f_31 -= 360f;
								}
							}
							fVar209 = uParam1->f_30;
							fVar210 = uParam1->f_31;
							cam::set_gameplay_cam_relative_pitch(fVar209, 1065353216);
							cam::set_gameplay_cam_relative_heading(fVar210);
							vVar217 = {cam::_get_gameplay_cam_coords()};
							vVar220 = {cam::get_gameplay_cam_coord()};
							fVar223 = gameplay::get_distance_between_coords(vVar217, vVar220, 1);
							iVar224 = system::round(fVar223 * 1000f);
							cam::render_script_cams(0, 1, iVar224, 0, 0, 0);
						}
						break;

					default: break;
					}
					if (ped::is_synchronized_scene_running(iVar4)) {
						ped::detach_synchronized_scene(iVar4);
						iVar4 = -1;
					}
				}
			}
			system::wait(0);
		}
	}
	if (!func_43(uParam1->f_22, 0f, 0f, 0f, 0)) {
		pathfind::set_roads_back_to_original(uParam1->f_5 + uParam1->f_19 - uParam1->f_22,
											 uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	player::set_player_control(player::player_id(), 1, 0);
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		ai::clear_ped_tasks(player::player_ped_id());
	}
	bVar225 = cam::_0x3044240D2E0FA842();
	iVar226 = 0;
	if (uParam1->f_32) {
		cam::_0x59424BD75174C9B1();
		if (!func_13(&uParam1->f_34, 1, 1, 1, 0, 1, 0)) {
			iVar226 = 1;
		}
	}
	if (bVar225 || iVar226) {
		while (bVar225 || iVar226)
			&&!streaming::is_player_switch_in_progress() {
				if (bVar225) {
				}
				if (iVar226) {
				}
				iVar227 = 2;
				func_12(1, 26, &iVar227);
				func_12(1, 79, &iVar227);
				func_12(1, 1, &iVar227);
				func_12(1, 2, &iVar227);
				func_12(0, 22, &iVar227);
				func_12(0, 36, &iVar227);
				func_12(0, 142, &iVar227);
				func_12(0, 141, &iVar227);
				func_12(0, 140, &iVar227);
				func_12(0, 263, &iVar227);
				func_12(0, 264, &iVar227);
				system::wait(0);
				bVar225 = cam::_0x3044240D2E0FA842();
				iVar226 = 0;
				if (uParam1->f_32) {
					cam::_0x59424BD75174C9B1();
					if (!func_13(&uParam1->f_34, 1, 1, 1, 0, 1, 0)) {
						iVar226 = 1;
					}
				}
			}
	}
	if (!gameplay::is_string_null_or_empty(uParam1->f_16)) {
		streaming::remove_anim_dict(uParam1->f_16);
	}
	streaming::remove_anim_dict(*uParam1);
	cam::destroy_cam(iVar5, 0);
	func_10(&uParam1->f_34);
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		ped::set_ped_reset_flag(player::player_ped_id(), 77, iVar3);
		entity::set_entity_invincible(player::player_ped_id(), 0);
	}
	sParam0 = sParam0;
}

// Position - 0x10DF
void func_10(var *uParam0) {
	func_11(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = {0f, 0f, 0f};
}

// Position - 0x10FA
void func_11(var *uParam0) {
	if (cam::does_cam_exist(uParam0->f_1)) {
		cam::destroy_cam(uParam0->f_1, 0);
	}
	if (cam::does_cam_exist(uParam0->f_2)) {
		cam::destroy_cam(uParam0->f_2, 0);
	}
	if (cam::does_cam_exist(uParam0->f_3)) {
		cam::destroy_cam(uParam0->f_3, 0);
	}
	if (cam::does_cam_exist(uParam0->f_4)) {
		cam::destroy_cam(uParam0->f_4, 0);
	}
}

// Position - 0x1152
void func_12(int iParam0, int iParam1, int iParam2) {
	controls::disable_control_action(iParam0, iParam1, 1);
	*iParam2++;
}

// Position - 0x116B
bool func_13(var *uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	float fVar21;

	switch (*uParam0) {
	case 0:
		func_14();
		if (!entity::is_entity_dead(uParam0->f_5, 0)) {
			func_11(uParam0);
			vVar0 = {cam::_get_gameplay_cam_coords()};
			if (iParam1) {
				vVar0 = {vVar0 + entity::get_entity_velocity(uParam0->f_5) * FtoV(gameplay::get_frame_time())};
			}
			vVar3 = {entity::get_offset_from_entity_given_world_coords(uParam0->f_5, vVar0)};
			vVar6 = {cam::_get_gameplay_cam_rot(2)};
			vVar9 = {vVar6 + uParam0->f_9};
			vVar12 = {vVar9 - entity::get_entity_rotation(uParam0->f_5, 2)};
			vVar15 = {-system::sin(vVar9.z) * system::cos(vVar9.x), system::cos(vVar9.z) * system::cos(vVar9.x),
					  system::sin(vVar9.x)};
			vVar18 = {-system::sin(vVar12.z) * system::cos(vVar12.x), system::cos(vVar12.z) * system::cos(vVar12.x),
					  system::sin(vVar12.x)};
			fVar21 = cam::_0x80EC114669DAEFF4();
			if (uParam0->f_17 > 0 || iParam6 != 0) {
				uParam0->f_3 = cam::create_camera(1775630800, 0);
			}
			uParam0->f_1 = cam::create_camera(26379945, 1);
			if (iParam1) {
				cam::attach_cam_to_entity(uParam0->f_1, uParam0->f_5, vVar3, 1);
			}
			else {
				cam::set_cam_coord(uParam0->f_1, vVar0);
			}
			cam::set_cam_rot(uParam0->f_1, vVar6, 2);
			cam::set_cam_fov(uParam0->f_1, fVar21);
			uParam0->f_2 = cam::create_camera(26379945, 1);
			if (iParam1 && !iParam4) {
				cam::attach_cam_to_entity(uParam0->f_2, uParam0->f_5, vVar3 + vVar18 * FtoV(uParam0->f_12), 1);
			}
			else {
				cam::set_cam_coord(uParam0->f_2, vVar0 + vVar15 * FtoV(uParam0->f_12));
			}
			cam::set_cam_rot(uParam0->f_2, vVar6, 2);
			cam::set_cam_fov(uParam0->f_2, fVar21);
			if (uParam0->f_17 > 0 && iParam6 == 0) {
				uParam0->f_4 = cam::create_camera(26379945, 1);
				if (iParam1 && !iParam4) {
					cam::attach_cam_to_entity(uParam0->f_4, uParam0->f_5,
											  vVar3 + vVar18 * FtoV(uParam0->f_12) * FtoV(uParam0->f_13), 1);
				}
				else {
					cam::set_cam_coord(uParam0->f_4, vVar0 + vVar15 * FtoV(uParam0->f_12) * FtoV(uParam0->f_13));
				}
				cam::set_cam_rot(uParam0->f_4, vVar6, 2);
				cam::set_cam_fov(uParam0->f_4, fVar21);
			}
			if (uParam0->f_17 > 0 || iParam6 != 0) {
				cam::_0x0FB82563989CF4FB(uParam0->f_3, uParam0->f_1, 0, 2);
				if (iParam6 == 0) {
					cam::_0x0FB82563989CF4FB(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
				}
				cam::_0x0FB82563989CF4FB(uParam0->f_3, uParam0->f_2, uParam0->f_14 - uParam0->f_17, 2);
				cam::_0xD1B0F412F109EA5D(uParam0->f_3, iParam6);
				cam::set_cam_active(uParam0->f_3, 1);
			}
			else {
				cam::set_cam_active_with_interp(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
			}
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			uParam0->f_7 = gameplay::get_game_timer();
			uParam0->f_8 = 0;
			*uParam0 = 1;
		}
		else {
			return true;
		}
		break;

	case 1:
		func_14();
		if (iParam3) {
			if (!uParam0->f_8) {
				if (gameplay::get_game_timer() >= uParam0->f_7 + uParam0->f_16) {
					if (iParam5) {
						switch (uParam0->f_6) {
						case 1: graphics::_start_screen_effect("CamPushInFranklin", 0, 0); break;

						case 0: graphics::_start_screen_effect("CamPushInMichael", 0, 0); break;

						case 2: graphics::_start_screen_effect("CamPushInTrevor", 0, 0); break;
						}
					}
					else {
						graphics::_start_screen_effect("CamPushInNeutral", 0, 0);
					}
					audio::play_sound_frontend(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					uParam0->f_8 = 1;
				}
			}
		}
		if (gameplay::get_game_timer() >= uParam0->f_7 + uParam0->f_15) {
			if (iParam2) {
				func_11(uParam0);
				cam::render_script_cams(0, 0, 3000, 1, 0, 0);
			}
			return true;
		}
		break;

	case 2: return true;
	}
	return false;
}

// Position - 0x150E
void func_14() {
	unk1::_0xEB2D525B57F42B40();
	func_15();
}

// Position - 0x151E
void func_15() { Global_17151.f_134 = 1; }

// Position - 0x152C
void func_16(var *uParam0, vector3 vParam1) { uParam0->f_9 = {vParam1}; }

// Position - 0x153E
void func_17(var *uParam0, var uParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8) {
	uParam0->f_5 = uParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
}

// Position - 0x1576
float func_18(float fParam0, float fParam1, float fParam2) {
	if (fParam0 > fParam2) {
		return fParam2;
	}
	else if (fParam0 < fParam1) {
		return fParam1;
	}
	return fParam0;
}

// Position - 0x159D
bool func_19(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_30(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7) {
		if (iParam3 < 12) {
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_20(sParam2, iParam3, 0);
}

// Position - 0x15EB
int func_20(char *sParam0, int iParam1, int iParam2) {
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2) {
		if (Global_15745 != 0) {
			if (iParam1 > Global_15747) {
				if (Global_15752 == 0) {
					audio::stop_scripted_conversation(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else {
					func_29();
					return 0;
				}
			}
			else {
				return 0;
			}
		}
		if (audio::is_scripted_conversation_ongoing()) {
			return 0;
		}
		if (func_28(8, -1)) {
			return 0;
		}
		Global_15821 = {Global_15815};
		func_27();
		Global_15034 = {Global_15199};
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = {Global_15776};
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = {Global_16749};
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751) {
			gameplay::clear_bit(&G_SleepModeOnOn25, 20);
			gameplay::clear_bit(&G_SleepModeOffOn11, 17);
			gameplay::clear_bit(&Global_2315, 0);
			if (iParam2) {
				func_25();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2) {
					if (iParam1 == 13) {
					}
					else {
						return 0;
					}
				}
				if (Global_14443.f_1 > 3) {
					return 0;
				}
			}
			if (Global_14409 == 1) {
				return 0;
			}
			if (player::is_player_playing(player::player_id())) {
				if (ped::is_ped_in_melee_combat(player::player_ped_id())) {
					return 0;
				}
				if (func_24()) {
					return 0;
				}
				if (ai::is_ped_sprinting(player::player_ped_id())) {
					return 0;
				}
				if (ped::is_ped_ragdoll(player::player_ped_id())) {
					return 0;
				}
				if (ped::is_ped_in_parachute_free_fall(player::player_ped_id())) {
					return 0;
				}
				if (weapon::get_is_ped_gadget_equipped(player::player_ped_id(), joaat("gadget_parachute"))) {
					return 0;
				}
				if (!Global_69702) {
					if (entity::is_entity_in_water(player::player_ped_id())) {
						return 0;
					}
					if (player::is_player_climbing(player::player_id())) {
						return 0;
					}
					if (ped::is_ped_planting_bomb(player::player_ped_id())) {
						return 0;
					}
					if (player::is_special_ability_active(player::player_id())) {
						return 0;
					}
				}
			}
			if (func_23()) {
				return 0;
			}
			else {
				switch (Global_14443.f_1) {
				case 7: return 0;

				case 8: return 0;

				case 9: break;

				case 10: break;

				default: break;
				}
				if (gameplay::is_bit_set(G_SleepModeOnOn25, 9)) {
					return 0;
				}
			}
			func_22();
			Global_15755 = iParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_21();
		return 1;
	}
	if (Global_15745 == 5) {
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747) {
		return 0;
	}
	if (iParam1 == 2) {
	}
	else {
		func_29();
	}
	return 0;
}

// Position - 0x18B7
void func_21() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69) {
		StringCopy(&Global_14613[iVar0 /*6*/], "", 24);
		iVar0++;
	}
	audio::stop_scripted_conversation(0);
	Global_15745 = 1;
}

// Position - 0x18E7
void func_22() {
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = {Global_15827};
	Global_15845 = {Global_15833};
	Global_15800 = Global_15799;
	Global_15869 = {Global_15851};
	Global_15875 = {Global_15857};
	Global_15881 = {Global_15863};
	Global_15887 = {Global_15893};
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = {Global_15776};
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	gameplay::clear_bit(&G_SleepModeOffOn11, 16);
}

// Position - 0x197C
bool func_23() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return true;
	}
	return false;
}

// Position - 0x19A3
bool func_24() {
	int iVar0;
	int iVar1;

	if (Global_69702) {
		iVar0 = 0;
		weapon::get_current_ped_weapon(player::player_ped_id(), &iVar1, 1);
		if (player::is_player_playing(player::player_id())) {
			if (iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper") ||
				iVar1 == joaat("weapon_remotesniper")) {
				iVar0 = 1;
			}
		}
		if (cam::is_aim_cam_active() && iVar0 == 1) {
			return true;
		}
		else {
			return false;
		}
	}
	if (player::is_player_playing(player::player_id())) {
		if (ped::get_ped_config_flag(player::player_ped_id(), 78, 1)) {
			return true;
		}
		else {
			return false;
		}
	}
	return true;
}

// Position - 0x1A3C
void func_25() {
	if (func_26(14)) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[0 /*29*/]) {
				Global_14443 = 0;
			}
			else if (entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[1 /*29*/]) {
				Global_14443 = 1;
			}
			else if (entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[2 /*29*/]) {
				Global_14443 = 2;
			}
			else {
				Global_14443 = 0;
			}
		}
	}
	else {
		Global_14443 = func_57();
		if (Global_14443 == 145) {
			Global_14443 = 3;
		}
		if (Global_69702) {
			Global_14443 = 3;
		}
		if (Global_14443 > 3) {
			Global_14443 = 3;
		}
	}
}

// Position - 0x1ADE
bool func_26(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x1AEC
void func_27() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 15) {
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&Global_15034[iVar0 /*10*/].f_1, "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = {0f, 0f, 0f};
}

// Position - 0x1B42
bool func_28(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x1B7D
void func_29() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_mobile_phone_call_ongoing() || Global_14443.f_1 == 9 || Global_14442 == 1) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(1);
		Global_15745 = 6;
		return;
	}
}

// Position - 0x1BD4
void func_30(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, var uParam5) {
	Global_15199 = {*uParam0};
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = uParam5;
	if (iParam3 == 0) {
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else {
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0) {
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else {
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

// Position - 0x1C2A
void func_31(int iParam0) { Global_36332 = gameplay::get_game_timer() + iParam0; }

// Position - 0x1C3C
void func_32() {
	if (Global_14443.f_1 != 1) {
		if (func_35(0)) {
			func_33(0);
		}
		gameplay::set_bit(&G_SleepModeOffOn11, 2);
	}
}

// Position - 0x1C64
void func_33(int iParam0) {
	if (Global_14604) {
		func_34(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
		gameplay::set_bit(&G_SleepModeOffOn11, 16);
	}
	if (audio::is_mobile_phone_call_ongoing()) {
		audio::stop_scripted_conversation(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1) {
		gameplay::set_bit(&G_SleepModeOnOn25, 30);
	}
	else {
		gameplay::clear_bit(&G_SleepModeOnOn25, 30);
	}
	if (!func_23()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x1CD4
void func_34(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_35(0)) {
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

// Position - 0x1D48
bool func_35(int iParam0) {
	if (iParam0 == 1) {
		if (Global_14443.f_1 > 3) {
			if (gameplay::is_bit_set(G_SleepModeOnOn25, 14)) {
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

// Position - 0x1DA2
void func_36(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
	if ((*uParam0)[iParam1 /*10*/].f_7 == 1) {
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&(*uParam0)[iParam1 /*10*/].f_1, sParam3, 24);
	(*uParam0)[iParam1 /*10*/].f_7 = 1;
	(*uParam0)[iParam1 /*10*/].f_8 = iParam4;
	(*uParam0)[iParam1 /*10*/].f_9 = iParam5;
	if (!Global_69702) {
		if (!ped::is_ped_injured(iParam2)) {
			if ((*uParam0)[iParam1 /*10*/].f_8 == 0) {
				ped::set_ped_can_play_ambient_anims(iParam2, 0);
			}
			else {
				ped::set_ped_can_play_ambient_anims(iParam2, 1);
			}
		}
		if (!ped::is_ped_injured(iParam2)) {
			if ((*uParam0)[iParam1 /*10*/].f_9 == 0) {
				ped::set_ped_can_use_auto_conversation_lookat(iParam2, 0);
			}
			else {
				ped::set_ped_can_use_auto_conversation_lookat(iParam2, 1);
			}
		}
	}
}

// Position - 0x1E3D
void func_37(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x1E54
void func_38(int iParam0, var uParam1) {
	if (func_39(uParam1, 1)) {
		ped::apply_ped_damage_pack(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_39(uParam1, 2)) {
		ped::apply_ped_damage_pack(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_39(uParam1, 4)) {
		ped::apply_ped_damage_pack(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_39(uParam1, 8)) {
		ped::apply_ped_damage_pack(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_39(uParam1, 16)) {
		ped::apply_ped_damage_pack(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_39(uParam1, 32)) {
		ped::apply_ped_damage_pack(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_39(uParam1, 64)) {
		ped::apply_ped_damage_pack(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_39(uParam1, 128)) {
		ped::apply_ped_damage_pack(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_39(uParam1, 256)) {
		ped::apply_ped_damage_pack(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_39(uParam1, 512)) {
		ped::apply_ped_damage_pack(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (func_39(uParam1, 0)) {
	}
}

// Position - 0x1F4B
bool func_39(var uParam0, int iParam1) { return (uParam0 & iParam1) != 0; }

// Position - 0x1F5A
bool func_40() {
	if (Global_91491 == 13 || Global_91491 == 10 || Global_91491 == 11 || Global_91491 == 12) {
		return false;
	}
	return true;
}

// Position - 0x1F98
void func_41() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8) {
		if (Global_88757[iVar0 /*17*/] && !Global_88757[iVar0 /*17*/].f_1) {
			if (Global_88757[iVar0 /*17*/].f_3 == 0) {
				if (Global_88757[iVar0 /*17*/].f_5 != 88 && Global_88757[iVar0 /*17*/].f_5 != 89 &&
					Global_88757[iVar0 /*17*/].f_5 != 92) {
					func_42(Global_88757[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

// Position - 0x201F
void func_42(int iParam0, int iParam1) {
	if (iParam1) {
		if (iParam0 != 88 && iParam0 != 89 && iParam0 != 92) {
			Global_85809[iParam0 /*2*/] = 1;
		}
	}
	else {
		Global_85809[iParam0 /*2*/] = 0;
	}
}

// Position - 0x205D
bool func_43(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x20A4
void func_44() {
	func_45();
	func_62(1);
}

// Position - 0x20B5
void func_45() {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		iVar1 = Global_36715[iVar0 /*5*/];
		if (iVar1 != -1) {
			func_138(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5) {
		if (Global_36689[iVar2 /*5*/] == 0) {
			func_46(iVar2);
		}
		iVar2++;
	}
}

// Position - 0x2115
void func_46(int iParam0) {
	if (iParam0 < 0 || iParam0 >= 5) {
		return;
	}
	if (Global_36689[iParam0 /*5*/].f_1 != 0) {
		if (Global_36689[iParam0 /*5*/].f_1 == player::player_ped_id()) {
			Global_36910 = 0;
		}
	}
	Global_36689[iParam0 /*5*/] = 13;
	Global_36689[iParam0 /*5*/].f_1 = 0;
	Global_36689[iParam0 /*5*/].f_2 = 0;
	Global_36689[iParam0 /*5*/].f_3 = 0;
	Global_36689[iParam0 /*5*/].f_4 = 0;
	Global_36688--;
	if (Global_36688 < 0) {
		Global_36688 = 0;
	}
}

// Position - 0x2198
int func_47(vector3 vParam0, float fParam3, int iParam4, int iParam5) {
	if (player::is_player_playing(player::player_id())) {
		func_51(0);
		gameplay::clear_area(vParam0, 5f, 1, 0, 0, 0);
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				entity::set_entity_coords(player::player_ped_id(), vParam0, 1, 0, 0, 1);
				entity::set_entity_heading(player::player_ped_id(), fParam3);
				cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
				cam::set_gameplay_cam_relative_heading(0f);
			}
		}
		streaming::new_load_scene_start_sphere(vParam0, 4500f, 0);
		system::wait(0);
		gameplay::clear_area(vParam0, 5000f, 1, 0, 0, 0);
		gameplay::clear_area_of_objects(vParam0, 5000f, 0);
		graphics::remove_particle_fx_in_range(vParam0, 5000f);
		graphics::remove_decals_in_range(vParam0, 5000f);
		func_50();
		func_49();
		system::settimera(0);
		func_51(1);
		if (!streaming::is_new_load_scene_active()) {
			while (!streaming::new_load_scene_start_sphere(vParam0, 4500f, 0)) {
				system::wait(0);
				if (system::timera() > 2000) {
					gameplay::set_game_paused(0);
					return 0;
				}
			}
		}
		system::settimera(0);
		while (!streaming::is_new_load_scene_loaded()) {
			system::wait(0);
			if (system::timera() > 20000) {
				gameplay::set_game_paused(0);
				if (streaming::is_new_load_scene_active()) {
					streaming::new_load_scene_stop();
				}
				return 0;
			}
		}
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				if (streaming::is_new_load_scene_active()) {
					streaming::new_load_scene_stop();
				}
				gameplay::set_game_paused(0);
				system::settimera(0);
				ped::_0x4759CC730F947C81();
				if (iParam5 == 1) {
					vehicle::_0x48ADC8A773564670();
				}
				else {
					system::settimera(5000);
				}
				gameplay::populate_now();
			}
		}
		while (!vehicle::_0x91D6DD290888CBAB() && !func_48() && system::timera() < 1500) {
			system::wait(0);
		}
		if (system::timera() > 1500) {
			if (iParam5 == 1) {
			}
		}
		if (iParam4 == 1) {
			gameplay::get_ground_z_for_3d_coord(vParam0, &vParam0.f_2, 0);
			gameplay::clear_area(vParam0, 5f, 1, 0, 0, 0);
			if (entity::does_entity_exist(player::player_ped_id())) {
				if (!ped::is_ped_injured(player::player_ped_id())) {
					entity::set_entity_coords(player::player_ped_id(), vParam0, 1, 0, 0, 1);
					entity::set_entity_heading(player::player_ped_id(), fParam3);
				}
			}
		}
		cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
		cam::set_gameplay_cam_relative_heading(0f);
		func_51(0);
		return 1;
	}
	func_51(0);
	return 0;
}

// Position - 0x23B6
bool func_48() { return !Global_68531.f_553; }

// Position - 0x23C6
void func_49() {
	Global_68531.f_553 = 1;
	Global_68531.f_554 = 0;
}

// Position - 0x23DE
void func_50() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68) {
		Global_68531[iVar0] = 0;
		iVar0++;
	}
}

// Position - 0x2402
void func_51(int iParam0) {
	int iVar0;

	iVar0 = 0;
	if (iVar0 == 0) {
		if (iParam0 == 1) {
			if (!gameplay::is_bit_set(Global_91491.f_20, 2)) {
				gameplay::set_game_paused(1);
				gameplay::set_bit(&Global_91491.f_20, 2);
			}
		}
		else if (gameplay::is_bit_set(Global_91491.f_20, 2)) {
			gameplay::set_game_paused(0);
			gameplay::clear_bit(&Global_91491.f_20, 2);
		}
	}
}

// Position - 0x2459
int func_52() {
	if (gameplay::is_bit_set(gameplay::get_random_int_in_range(0, 65535), 0)) {
		return 1;
	}
	return 0;
}

// Position - 0x247A
bool func_53(int iParam0) { return gameplay::is_bit_set(Global_101700.f_6188[iParam0], 0); }

// Position - 0x2492
bool func_54(int iParam0) {
	if (iParam0 == 146 || iParam0 == -1) {
		return false;
	}
	return Global_101700.f_8044.f_99.f_58[iParam0];
}

// Position - 0x24BF
int func_55() {
	if (Global_33147[11] == 1) {
		return 4;
	}
	if (!func_56(21)) {
		return 0;
	}
	if (!func_54(130)) {
		return 1;
	}
	if (!func_54(131)) {
		return 2;
	}
	if (!func_56(22)) {
		return 1;
	}
	if (!func_56(49)) {
		return 3;
	}
	if (!func_56(28)) {
		return 1;
	}
	return 3;
}

// Position - 0x253D
int func_56(int iParam0) {
	if (iParam0 == 94 || iParam0 == -1) {
		return 0;
	}
	return Global_101700.f_8044.f_330[iParam0 /*6*/];
}

// Position - 0x2569
int func_57() {
	func_58();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x2582
void func_58() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_61(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_60(player::player_ped_id());
			if (func_59(iVar0) && (!func_26(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_59(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x267F
bool func_59(int iParam0) { return iParam0 < 3; }

// Position - 0x268B
int func_60(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_61(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x26C8
int func_61(int iParam0) {
	if (func_59(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x26F2
void func_62(int iParam0) {
	cam::custom_menu_coordinates(0f);
	cam::_0x0225778816FDC28C(0f);
	cam::set_gameplay_cam_shake_amplitude(0f);
	cam::stop_gameplay_cam_shaking(1);
	cam::set_cinematic_cam_shake_amplitude(0f);
	cam::stop_cinematic_cam_shaking(1);
	audio::_0x12561FCBB62D5B9C(0);
	if (audio::is_audio_scene_active("SAFEHOUSE_STONED_MICHAEL")) {
		audio::stop_audio_scene("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!gameplay::is_string_null_or_empty(&Global_36890)) {
		if (audio::is_audio_scene_active(&Global_36890)) {
			audio::stop_audio_scene(&Global_36890);
		}
	}
	if (cam::does_cam_exist(Global_36879)) {
		if (cam::is_cam_shaking(Global_36879)) {
			cam::set_cam_shake_amplitude(Global_36879, 0f);
			cam::stop_cam_shaking(Global_36879, 1);
		}
	}
	if (cam::is_script_global_shaking()) {
		cam::stop_script_global_shaking(0);
	}
	if (iParam0) {
		if (graphics::get_timecycle_modifier_index() != -1 || graphics::_0x459FD2C8D0AB78BC() != -1) {
			graphics::clear_timecycle_modifier();
		}
		else if (streaming::is_player_switch_in_progress()) {
			graphics::clear_timecycle_modifier();
		}
	}
	Global_36885 = 0f;
	StringCopy(&Global_36886, "", 16);
	StringCopy(&Global_36890, "", 64);
	StringCopy(&Global_36906, "", 16);
	func_63();
}

// Position - 0x27CB
void func_63() {
	Global_36878 = 0;
	Global_36879 = 0;
	Global_36880 = 0;
	Global_36881 = 30000;
	Global_36882 = 0f;
	Global_36884 = 0f;
	Global_36883 = 0f;
	Global_36885 = 0f;
	StringCopy(&Global_36886, "", 16);
}

// Position - 0x27FC
void func_64(int iParam0) {
	int iVar0;

	switch (iParam0) {
	case 0: iVar0 = Global_262145.f_15804; break;

	case 1: iVar0 = Global_262145.f_15794; break;

	case 2: iVar0 = Global_262145.f_15805; break;

	case 3: iVar0 = Global_262145.f_15797; break;

	case 4: iVar0 = Global_262145.f_15793; break;

	case 6: iVar0 = 3; break;

	case 7: iVar0 = Global_262145.f_15808; break;

	case 8: iVar0 = Global_262145.f_15809; break;

	case 9: iVar0 = Global_262145.f_15812; break;

	case 22: iVar0 = Global_262145.f_15813; break;

	case 23: iVar0 = Global_262145.f_15806; break;

	case 25: iVar0 = Global_262145.f_16694; break;

	case 26: iVar0 = Global_262145.f_16693; break;
	}
	if (iVar0 != 0) {
		unk_0x501478855A6074CE(func_75(func_76()), func_73(func_76()), func_72(), func_71(), iParam0, iVar0);
	}
	func_70(iVar0);
	func_65(iVar0);
}

// Position - 0x2921
void func_65(int iParam0) {
	int iVar0;

	iVar0 = func_69(3940, -1, 0);
	iVar0 += iParam0;
	if (iVar0 < 0) {
		iVar0 = 0;
	}
	if (iVar0 > 9999) {
		iVar0 = 9999;
	}
	Global_1619421[player::player_id() /*390*/].f_11.f_329 = iVar0;
	func_66(3940, iVar0, -1, 1, 0);
}

// Position - 0x296F
void func_66(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam4) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_67(iParam2)];
	if (iVar0 != 0) {
		stats::stat_set_int(iVar0, iParam1, iParam3);
	}
}

// Position - 0x299F
int func_67(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_68();
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

// Position - 0x29D3
var func_68() { return Global_1312735; }

// Position - 0x29DF
int func_69(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_67(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x2A11
void func_70(int iParam0) {
	int iVar0;

	iVar0 = player::player_id();
	Global_1619421[iVar0 /*390*/].f_11.f_328 += iParam0;
	if (Global_1619421[iVar0 /*390*/].f_11.f_328 < -9999) {
		Global_1619421[iVar0 /*390*/].f_11.f_328 = 9999;
	}
	else if (Global_1619421[iVar0 /*390*/].f_11.f_328 > 9999) {
		Global_1619421[iVar0 /*390*/].f_11.f_328 = 9999;
	}
}

// Position - 0x2A8B
int func_71() {
	if (Global_1763183.f_3 != 0) {
		return Global_1763183.f_3;
	}
	return -1;
}

// Position - 0x2AA7
int func_72() {
	if (Global_1763183.f_2 != 0) {
		return Global_1763183.f_2;
	}
	return -1;
}

// Position - 0x2AC3
int func_73(int iParam0) {
	if (iParam0 == func_74()) {
		return -1;
	}
	return Global_1619421[iParam0 /*390*/].f_11.f_7[1];
}

// Position - 0x2AE8
int func_74() { return -1; }

// Position - 0x2AF1
int func_75(int iParam0) {
	if (iParam0 == func_74()) {
		return -1;
	}
	return Global_1619421[iParam0 /*390*/].f_11.f_7[0];
}

// Position - 0x2B16
int func_76() { return Global_1619421[player::player_id() /*390*/].f_11; }

// Position - 0x2B2B
bool func_77(int iParam0) { return func_78(player::player_id(), iParam0); }

// Position - 0x2B3D
int func_78(int iParam0, bool bParam1) { return func_79(iParam0, bParam1, 1); }

// Position - 0x2B4E
int func_79(int iParam0, bool bParam1, int iParam2) {
	int iVar0;

	if (iParam0 == func_74()) {
		return 0;
	}
	if (!bParam1) {
		if (func_80(iParam0, iParam2)) {
			return 0;
		}
	}
	iVar0 = Global_1619421[iParam0 /*390*/].f_11;
	if (iVar0 != func_74() && Global_1619421[iVar0 /*390*/].f_11.f_289 == iParam2) {
		return 1;
	}
	return 0;
}

// Position - 0x2BAA
bool func_80(int iParam0, int iParam1) {
	if (iParam0 != func_74()) {
		if (Global_1619421[iParam0 /*390*/].f_11 != func_74()) {
			if (Global_1619421[iParam0 /*390*/].f_11 == iParam0 &&
				Global_1619421[iParam0 /*390*/].f_11.f_289 == iParam1) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x2BF9
void func_81(int iParam0, int iParam1, int iParam2) {
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
		if (!func_86()) {
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
				if (!func_85(iVar25) && !entity::is_entity_attached_to_any_vehicle(iVar25)) {
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
				func_84();
				func_83();
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
				if (!func_85(iVar25) && !entity::is_entity_attached_to_any_vehicle(iVar25)) {
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
					if (func_82(Global_1633501.f_107548)) {
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

// Position - 0x2FB0
bool func_82(int iParam0) { return iParam0 == 17; }

// Position - 0x2FBD
void func_83() {
	struct<2> Var0;

	Global_2433125.f_731 = 0;
	Global_2433125.f_732 = 0;
	Global_2433125.f_733 = {9999.9f, 9999.9f, 9999.9f};
	Global_2404994.f_2220 = {Var0};
}

// Position - 0x2FFA
void func_84() {
	Global_2404994.f_644 = 0;
	Global_2404994.f_2261 = 0;
	Global_2404994.f_501 = 0;
	Global_2404994.f_576 = 0;
	Global_2421664[player::player_id() /*358*/].f_210 = 0;
}

// Position - 0x3030
int func_85(int iParam0) {
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

// Position - 0x3061
int func_86() {
	if (func_87() == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x3076
int func_87() { return Global_1312466.f_18; }

// Position - 0x3084
void func_88() {
	int iVar0;

	if (bLocal_50) {
		return;
	}
	Local_43.f_4 = 0;
	if (!func_89(Global_36715[iLocal_64 /*5*/].f_2)) {
		return;
	}
	iVar0 = gameplay::get_random_int_in_range(500, 3000);
	vLocal_60.x = 5;
	Local_55.f_2 = system::timera() + iVar0;
}

// Position - 0x30C7
int func_89(int iParam0) {
	int iVar0;
	char *sVar1;
	char *sVar2;
	char *sVar3;
	int iVar4;

	iVar0 = func_100();
	if (iVar0 == -2) {
		return 0;
	}
	if (ped::is_ped_injured(Local_43.f_1)) {
		if (ped::is_ped_in_any_vehicle(Local_43.f_1, 0) || ped::is_ped_getting_into_a_vehicle(Local_43.f_1)) {
			return 0;
		}
		if (entity::is_entity_waiting_for_world_collision(Local_43.f_1)) {
			return 0;
		}
		if (func_96(Local_43.f_1)) {
			return 0;
		}
	}
	if (Global_36715[iLocal_64 /*5*/].f_3 < 3 && Global_36715[iLocal_64 /*5*/].f_3 != 0) {
		return 0;
	}
	if (Global_36715[iLocal_64 /*5*/].f_4 < 9 && Global_36715[iLocal_64 /*5*/].f_4 != 0) {
		return 0;
	}
	sVar1 = func_95(iParam0);
	if (gameplay::is_string_null_or_empty(sVar1)) {
		return 0;
	}
	if (func_96(Local_43.f_1)) {
		return 0;
	}
	streaming::request_clip_set(sVar1);
	if (func_92(Local_43.f_1)) {
		sVar2 = "MOVE_M@DRUNK@TRANSITIONS";
		sVar3 = "";
		switch (iParam0) {
		case 0: sVar3 = ""; break;

		case 2: sVar3 = "VERY_TO_MODERATE"; break;

		case 1: sVar3 = "MODERATE_TO_SLIGHTLY"; break;

		default: break;
		}
		if (!gameplay::is_string_null_or_empty(sVar2) && !gameplay::is_string_null_or_empty(sVar3)) {
			streaming::request_anim_dict(sVar2);
			while (!streaming::has_anim_dict_loaded(sVar2)) {
				system::wait(0);
			}
			if (!ped::is_ped_injured(Local_43.f_1)) {
				ai::task_play_anim(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_54 = sVar3;
			}
		}
	}
	if (!streaming::has_clip_set_loaded(sVar1)) {
		return 0;
	}
	if (ped::is_ped_injured(Local_43.f_1)) {
		return 0;
	}
	ped::set_ped_movement_clipset(Local_43.f_1, sVar1, 0.75f);
	if (cam::get_follow_ped_cam_view_mode() == 4) {
		ped::set_ped_strafe_clipset(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	ped::set_ped_alternate_movement_anim(Local_43.f_1, 0, sVar1, "idle", 2f, 1);
	vLocal_60.z = sVar1;
	iLocal_51 = 1;
	iVar4 = 0;
	switch (func_60(Local_43.f_1)) {
	case 0: iVar4 = "FACIALS@P_M_ZERO@BASE"; break;

	case 1: iVar4 = "FACIALS@P_M_ONE@BASE"; break;

	case 2: iVar4 = "FACIALS@P_M_TWO@BASE"; break;

	default:
		if (ped::is_ped_a_player(Local_43.f_1)) {
			if (!func_90()) {
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else {
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
		}
		else if (ped::is_ped_male(Local_43.f_1)) {
			iVar4 = "FACIALS@GEN_MALE@BASE";
		}
		else {
			iVar4 = "FACIALS@GEN_FEMALE@BASE";
		}
		break;
	}
	ped::set_facial_idle_anim_override(Local_43.f_1, "mood_drunk_1", iVar4);
	ped::set_ped_reset_flag(Local_43.f_1, 200, 1);
	ped::set_ped_reset_flag(Local_43.f_1, 46, 1);
	ped::set_ped_can_play_ambient_anims(Local_43.f_1, 0);
	ped::set_ped_flee_attributes(Local_43.f_1, 262144, 1);
	audio::set_ped_is_drunk(Local_43.f_1, 1);
	return 1;
}

// Position - 0x3359
int func_90() { return func_91(player::player_id()); }

// Position - 0x3369
int func_91(int iParam0) {
	if (entity::get_entity_model(player::get_player_ped(iParam0)) == joaat("mp_f_freemode_01")) {
		return 1;
	}
	return 0;
}

// Position - 0x3388
bool func_92(int iParam0) {
	vector3 vVar0;

	if (ped::is_ped_in_any_vehicle(iParam0, 1) || ped::is_ped_getting_into_a_vehicle(iParam0)) {
		return false;
	}
	if (ai::get_script_task_status(iParam0, -2017877118) != 7) {
		return false;
	}
	if (ai::get_script_task_status(iParam0, 1785177548) != 7) {
		return false;
	}
	if (ped::is_ped_shooting(iParam0)) {
		return false;
	}
	if (entity::is_entity_in_air(iParam0)) {
		return false;
	}
	if (ped::is_ped_ragdoll(iParam0)) {
		return false;
	}
	if (ped::is_ped_climbing(iParam0)) {
		return false;
	}
	if (G_DisableMessagesAndCalls2) {
		return false;
	}
	if (func_94()) {
		return false;
	}
	if (iParam0 == player::player_ped_id()) {
		if (!player::is_player_free_for_ambient_task(player::player_id())) {
			return false;
		}
		if (!player::is_player_control_on(player::player_id())) {
			return false;
		}
		if (player::is_player_free_aiming(player::player_id()) ||
			player::is_player_targetting_anything(player::player_id())) {
			return false;
		}
		if (func_93()) {
			return false;
		}
	}
	vVar0 = {entity::get_entity_velocity(iParam0)};
	if (system::vmag2(vVar0) >= 1f * 1f) {
		return false;
	}
	return true;
}

// Position - 0x3489
bool func_93() { return Global_91543.f_304 > 0; }

// Position - 0x349A
bool func_94() { return gameplay::get_game_timer() <= Global_17290.f_5745 + 100; }

// Position - 0x34AF
char *func_95(int iParam0) {
	switch (iParam0) {
	case 0: return "move_m@drunk@verydrunk";

	case 1: return "move_m@drunk@slightlydrunk";

	case 2: return "move_m@drunk@moderatedrunk";
	}
	return "";
}

// Position - 0x34F0
bool func_96(int iParam0) {
	int iVar0;
	char *sVar1;

	iVar0 = func_97(iParam0);
	sVar1 = func_95(iVar0);
	if (gameplay::is_string_null_or_empty(vLocal_60.z)) {
		if (gameplay::is_string_null_or_empty(sVar1)) {
			return true;
		}
		else {
			return false;
		}
	}
	return gameplay::are_strings_equal(vLocal_60.z, sVar1);
}

// Position - 0x3531
int func_97(int iParam0) {
	int iVar0;
	int iVar1;

	if (iParam0 == 0) {
		return -1;
	}
	if (!entity::does_entity_exist(iParam0)) {
		return -1;
	}
	iVar0 = func_99(iParam0);
	iVar1 = func_98(iVar0);
	if (iVar1 == -1) {
		return -1;
	}
	return Global_36715[iVar1 /*5*/].f_2;
}

// Position - 0x3574
int func_98(int iParam0) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		if (Global_36715[iVar0 /*5*/] == iParam0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x35A4
int func_99(int iParam0) {
	int iVar0;

	if (iParam0 == 0) {
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		if (iParam0 == Global_36715[iVar0 /*5*/].f_1) {
			return Global_36715[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x35E5
int func_100() {
	int iVar0;

	if (Local_55 == -2) {
		return -2;
	}
	if (Local_55 == -1) {
		return -1;
	}
	iVar0 = Local_55 - system::timera();
	if (iVar0 < 0) {
		return -2;
	}
	if (iVar0 > 65534) {
		iVar0 = 65534;
	}
	return iVar0;
}

// Position - 0x362B
void func_101() {
	if (bLocal_50) {
		return;
	}
	if (!func_102()) {
		vLocal_60.x = 5;
		Local_55.f_2 = system::timera() + 5000;
		return;
	}
	vLocal_60.x = 6;
}

// Position - 0x3657
bool func_102() {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	if (Local_43.f_4 == 0) {
		return false;
	}
	if (entity::is_entity_dead(Local_43.f_4, 0)) {
		return false;
	}
	vVar0 = {entity::get_entity_coords(Local_43.f_1, 1)};
	vVar3 = {entity::get_entity_coords(Local_43.f_4, 1)};
	fVar6 = gameplay::get_distance_between_coords(vVar0, vVar3, 1);
	return fVar6 < 7f;
}

// Position - 0x36A8
void func_103() {
	int iVar0;
	char *sVar1;

	if (Local_43.f_1 == player::player_ped_id()) {
		controls::disable_control_action(0, 36, 1);
		if (ped::get_ped_stealth_movement(Local_43.f_1)) {
			if (Global_36715[iLocal_64 /*5*/].f_2 == 0 || Global_36715[iLocal_64 /*5*/].f_2 == 2) {
				ped::set_ped_stealth_movement(Local_43.f_1, 0, 0);
			}
		}
		if (ped::is_ped_ducking(Local_43.f_1)) {
			ped::set_ped_ducking(Local_43.f_1, 0);
		}
	}
	if (Local_55 != -2) {
		if (Local_55 == -1) {
			if (Global_36715[iLocal_64 /*5*/].f_2 != 0) {
				Global_36715[iLocal_64 /*5*/].f_2 = 0;
			}
		}
		else {
			iVar0 = Local_55 - system::timera();
			if (iVar0 <= 0) {
				iVar0 = 0;
			}
			iVar0 /= 1000 + 1;
			if (Global_36715[iLocal_64 /*5*/].f_2 == 0) {
				if (iVar0 < 30) {
					Global_36715[iLocal_64 /*5*/].f_2 = 2;
					if (!func_89(2)) {
						Global_36715[iLocal_64 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_36715[iLocal_64 /*5*/].f_2 == 2) {
				if (iVar0 < 10) {
					Global_36715[iLocal_64 /*5*/].f_2 = 1;
					if (!func_89(2)) {
						Global_36715[iLocal_64 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_36715[iLocal_64 /*5*/].f_2 == 1) {
			}
		}
	}
	else {
		return;
	}
	if (!gameplay::is_string_null_or_empty(sLocal_54)) {
		if (!func_92(Local_43.f_1)) {
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (entity::is_entity_playing_anim(Local_43.f_1, sVar1, sLocal_54, 3)) {
				ai::stop_anim_task(Local_43.f_1, sVar1, sLocal_54, -4f);
			}
			sLocal_54 = "";
			return;
		}
	}
	if (Global_36715[iLocal_64 /*5*/].f_3 >= 10 || Global_36715[iLocal_64 /*5*/].f_4 >= 15) {
		if (ai::get_script_task_status(Local_43.f_1, 1785177548) == 1) {
			return;
		}
		if (audio::is_any_speech_playing(Local_43.f_1)) {
			return;
		}
		if (ped::is_ped_in_any_vehicle(Local_43.f_1, 1)) {
			if (Global_36715[iLocal_64 /*5*/].f_3 >= 10) {
				Global_36715[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_36715[iLocal_64 /*5*/].f_4 >= 15) {
				Global_36715[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		vLocal_60.y = 3;
		return;
	}
	if (!iLocal_51) {
		return;
	}
	if (!func_96(Local_43.f_1)) {
		return;
	}
}

// Position - 0x38B5
int func_104() {
	int iVar0;

	if (!ped::is_ped_sitting_in_any_vehicle(Local_43.f_1)) {
		return 0;
	}
	iVar0 = 0;
	iVar0 = ped::get_vehicle_ped_is_in(Local_43.f_1, 0);
	if (!vehicle::is_vehicle_driveable(iVar0, 0)) {
		return 0;
	}
	if (vehicle::get_ped_in_vehicle_seat(iVar0, -1, 0) != Local_43.f_1) {
		return 0;
	}
	Local_43.f_4 = iVar0;
	vLocal_60.x = 7;
	return 1;
}

// Position - 0x3909
void func_105() {
	if (!ped::is_ped_in_any_vehicle(Local_43.f_1, 0)) {
		vLocal_60.x = 4;
		return;
	}
}

// Position - 0x3924
void func_106() {
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!bLocal_50) {
		return;
	}
	if (!player::is_player_playing(player::player_id())) {
		return;
	}
	if (!ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
		return;
	}
	if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
		return;
	}
	iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
	fVar1 = entity::get_entity_speed(iVar0);
	if (fVar1 < 5f) {
		return;
	}
	vVar2 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	vVar5 = {vVar2 - Vector(3f, 30f, 30f)};
	vVar8 = {vVar2 + Vector(3f, 30f, 30f)};
	if (!vehicle::is_cop_vehicle_in_area_3d(vVar5, vVar8) && !ped::is_cop_ped_in_area_3d(vVar5, vVar8)) {
		return;
	}
	player::set_player_wanted_level_no_drop(player::player_id(), 1, 0);
	player::set_player_wanted_level_now(player::player_id(), 0);
	func_8(73, 1);
}

// Position - 0x39F3
void func_107() {
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;

	iVar0 = Local_43.f_1;
	if (ped::is_ped_in_any_vehicle(Local_43.f_1, 0)) {
		iVar1 = ped::get_vehicle_ped_is_in(Local_43.f_1, 0);
		iVar2 = vehicle::get_ped_in_vehicle_seat(iVar1, -1, 0);
		if (iVar2 != Local_43.f_1) {
			return;
		}
		if (network::network_is_game_in_progress() && !network::network_has_control_of_entity(iVar1)) {
			return;
		}
		iVar0 = iVar1;
	}
	else if (player::player_ped_id() != Local_43.f_1) {
		return;
	}
	else if (cam::get_follow_ped_cam_view_mode() != 4) {
		fLocal_53 = 0f;
		func_109(iVar0, 0f);
		return;
	}
	if (system::timera() < Local_55.f_4) {
		func_109(iVar0, fLocal_53);
		return;
	}
	if (entity::is_entity_a_ped(iVar0)) {
		Local_55.f_4 = system::timera() + 2000;
	}
	else {
		Local_55.f_4 = system::timera() + 1000;
	}
	fVar3 = entity::get_entity_speed(iVar0);
	if (fVar3 < 0.04f) {
		fLocal_53 = 0f;
		func_109(iVar0, 0f);
		return;
	}
	if (Local_55.f_1 == -1) {
		fLocal_53 = func_108(iVar0, 0.13f, 0.06f);
	}
	else {
		iVar4 = Local_55.f_1 - system::timera();
		if (iVar4 < 5000) {
			fLocal_53 = 0f;
		}
		else if (iVar4 < 15000) {
			fLocal_53 = func_108(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000) {
			fLocal_53 = func_108(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000) {
			fLocal_53 = func_108(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000) {
			fLocal_53 = func_108(iVar0, 0.1f, 0.05f);
		}
		else {
			fLocal_53 = func_108(iVar0, 0.13f, 0.06f);
		}
	}
	func_109(iVar0, fLocal_53);
}

// Position - 0x3B95
float func_108(int iParam0, float fParam1, float fParam2) {
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = gameplay::get_random_float_in_range(-fParam1, fParam1);
	fVar1 = gameplay::get_random_float_in_range(0f, fParam2);
	if (fVar0 < 0f) {
		fVar0 -= fVar1;
	}
	else {
		fVar0 += fVar1;
	}
	if (entity::is_entity_a_ped(iParam0)) {
		if (ai::is_ped_sprinting(entity::get_ped_index_from_entity_index(iParam0))) {
			fVar0 *= 4.5f;
		}
		else {
			fVar0 *= 3f;
		}
	}
	else {
		iVar2 = entity::get_entity_model(iParam0);
		if (vehicle::is_this_model_a_bike(iVar2)) {
			fVar0 *= 1.5f;
		}
		else {
			fVar0 *= 0.5f;
		}
	}
	fVar0 = func_18(fVar0, -1f, 1f);
	return fVar0;
}

// Position - 0x3C29
void func_109(int iParam0, float fParam1) {
	if (network::network_is_game_in_progress() && !network::network_has_control_of_entity(iParam0)) {
		return;
	}
	if (entity::is_entity_a_ped(iParam0)) {
		ped::_0x288DF530C92DAD6F(entity::get_ped_index_from_entity_index(iParam0), fParam1);
	}
	else if (entity::is_entity_a_vehicle(iParam0)) {
		vehicle::set_vehicle_steer_bias(entity::get_vehicle_index_from_entity_index(iParam0), fParam1);
	}
}

// Position - 0x3C74
void func_110() {
	int iVar0;

	if (!ped::is_ped_in_any_vehicle(Local_43.f_1, 0)) {
		vLocal_60.x = 4;
		return;
	}
	if (network::network_is_game_in_progress()) {
		if (Global_36715[iLocal_64 /*5*/].f_3 >= 10 || Global_36715[iLocal_64 /*5*/].f_4 >= 15) {
			if (Global_36715[iLocal_64 /*5*/].f_3 >= 10) {
				Global_36715[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_36715[iLocal_64 /*5*/].f_4 >= 15) {
				Global_36715[iLocal_64 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_50) {
		return;
	}
	iVar0 = ped::get_vehicle_ped_is_in(Local_43.f_1, 0);
	if (!vehicle::is_vehicle_driveable(iVar0, 0)) {
		ai::task_leave_any_vehicle(Local_43.f_1, 0, 0);
		vLocal_60.x = 11;
		return;
	}
}

// Position - 0x3D18
void func_111() {
	int iVar0;
	int iVar1;
	int iVar2;

	if (system::timera() <= Local_55.f_3) {
		return;
	}
	iVar0 = ai::get_script_task_status(player::player_ped_id(), 355471868);
	if (iVar0 != 7) {
		Local_55.f_3 = system::timera() + 1000;
		return;
	}
	if (!ped::is_ped_in_any_vehicle(Local_43.f_1, 0)) {
		vLocal_60.x = 4;
		Local_55.f_3 = -2;
		return;
	}
	iVar1 = ped::get_vehicle_ped_is_in(Local_43.f_1, 0);
	iVar2 = vehicle::get_ped_in_vehicle_seat(iVar1, -1, 0);
	if (iVar2 == Local_43.f_1) {
		func_112();
		Local_55.f_3 = -2;
		return;
	}
	ai::task_shuffle_to_next_vehicle_seat(Local_43.f_1, iVar1);
	vLocal_60.x = 9;
	Local_55.f_3 = system::timera() + 1000;
}

// Position - 0x3DB2
void func_112() {
	if (vLocal_60.x == 10) {
		return;
	}
	vLocal_60.x = 10;
	if (iLocal_48 == -1) {
		return;
	}
	func_138(iLocal_48, 2, 5);
	Local_55.f_4 = system::timera();
	fLocal_53 = 0f;
}

// Position - 0x3DE4
void func_113() {
	if (ped::is_ped_sitting_in_any_vehicle(Local_43.f_1)) {
		vLocal_60.x = 10;
		return;
	}
	if (system::timera() < Local_55.f_3) {
		return;
	}
	vLocal_60.x = 4;
	Local_55.f_3 = -2;
}

// Position - 0x3E16
void func_114() {
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!bLocal_50) {
	}
	iVar0 = 0;
	bVar1 = false;
	if (bVar1 || ped::is_ped_sitting_in_any_vehicle(Local_43.f_1)) {
		if (!bLocal_50) {
		}
		iVar0 = ped::get_vehicle_ped_is_in(Local_43.f_1, 0);
		if (iVar0 != Local_43.f_4) {
			if (!bLocal_50) {
			}
			if (!bLocal_50) {
				if (!bLocal_50) {
				}
				ai::task_leave_any_vehicle(Local_43.f_1, 0, 0);
				vLocal_60.x = 11;
				return;
			}
			Local_43.f_4 = iVar0;
		}
		if (bVar1) {
			if (!bLocal_50) {
			}
			func_112();
			return;
		}
		if (!bLocal_50) {
			if (!bLocal_50) {
			}
			func_112();
			return;
		}
		if (!bLocal_50) {
		}
		iVar2 = vehicle::get_ped_in_vehicle_seat(Local_43.f_4, -1, 0);
		if (iVar2 == Local_43.f_1) {
			func_112();
			return;
		}
		ai::task_shuffle_to_next_vehicle_seat(Local_43.f_1, iVar0);
		vLocal_60.x = 9;
		Local_55.f_3 = system::timera() + 1000;
		return;
	}
	if (!func_102()) {
		ai::clear_ped_tasks(Local_43.f_1);
		vLocal_60.x = 4;
		return;
	}
	if (!bLocal_50) {
		iVar3 = ai::get_script_task_status(Local_43.f_1, -1794415470);
		if (iVar3 == 7) {
			if (!ped::is_ped_in_any_vehicle(Local_43.f_1, 0)) {
				ai::clear_ped_tasks(Local_43.f_1);
				vLocal_60.x = 4;
				return;
			}
		}
	}
}

// Position - 0x3F31
void func_115() {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	if (bLocal_50) {
		return;
	}
	if (Local_43.f_4 == 0) {
		vLocal_60.x = 4;
		return;
	}
	if (!vehicle::is_vehicle_driveable(Local_43.f_4, 0)) {
		Local_43.f_4 = 0;
		vLocal_60.x = 4;
		return;
	}
	vVar0 = {entity::get_entity_coords(Local_43.f_1, 1)};
	vVar3 = {entity::get_entity_coords(Local_43.f_4, 1)};
	fVar6 = gameplay::get_distance_between_coords(vVar0, vVar3, 1);
	if (fVar6 > 3f) {
		if (!func_89(Global_36715[iLocal_64 /*5*/].f_2)) {
			vLocal_60.x = 12;
			return;
		}
		vLocal_60.x = 5;
		Local_55.f_2 = system::timera() + 2000;
		return;
	}
	iVar7 = vehicle::get_vehicle_max_number_of_passengers(Local_43.f_4);
	iVar8 = 0;
	iVar9 = 1;
	iVar8 = 1;
	while (iVar9) {
		if (iVar8 < iVar7) {
			if (vehicle::is_vehicle_seat_free(Local_43.f_4, iVar8, 0)) {
				iVar9 = 0;
			}
			else {
				iVar8++;
			}
		}
		else {
			iVar9 = 0;
			iVar8 = -1;
		}
	}
	if (iVar8 == -1) {
		if (iVar8 == -1) {
			vLocal_60.x = 4;
			return;
		}
	}
	func_116();
	ai::task_enter_vehicle(Local_43.f_1, Local_43.f_4, -1, iVar8, 2f, 1, 0);
	vLocal_60.x = 7;
}

// Position - 0x4035
void func_116() {
	if (!entity::does_entity_exist(Local_43.f_1)) {
		return;
	}
	if (!ped::is_ped_injured(Local_43.f_1)) {
		ped::reset_ped_movement_clipset(Local_43.f_1, 1048576000);
		ped::reset_ped_strafe_clipset(Local_43.f_1);
		ped::clear_ped_alternate_movement_anim(Local_43.f_1, 0, -1056964608);
		vLocal_60.z = "";
		ped::clear_facial_idle_anim_override(Local_43.f_1);
		ped::set_ped_reset_flag(Local_43.f_1, 200, 0);
		ped::set_ped_reset_flag(Local_43.f_1, 46, 0);
		ped::set_ped_can_play_ambient_anims(Local_43.f_1, 1);
		ped::set_ped_flee_attributes(Local_43.f_1, 262144, 0);
		audio::set_ped_is_drunk(Local_43.f_1, 0);
	}
	if (!iLocal_51) {
		return;
	}
	iLocal_51 = 0;
}

// Position - 0x40CA
void func_117() {
	if (system::timera() < Local_55.f_2) {
		func_103();
		return;
	}
	func_118();
	Local_55.f_2 = -2;
	vLocal_60.x = 12;
}

// Position - 0x40F4
int func_118() {
	if (!func_96(Local_43.f_1)) {
		return 0;
	}
	if (!iLocal_51) {
		return 0;
	}
	func_119(Local_43.f_1);
	vLocal_60.z = "";
	return 1;
}

// Position - 0x4125
void func_119(int iParam0) {
	ped::reset_ped_movement_clipset(iParam0, 1048576000);
	ped::clear_ped_alternate_movement_anim(iParam0, 0, -1056964608);
	ped::set_ped_reset_flag(iParam0, 200, 0);
	ped::set_ped_can_play_ambient_anims(iParam0, 1);
	ped::set_ped_flee_attributes(iParam0, 262144, 0);
	audio::set_ped_is_drunk(iParam0, 0);
}

// Position - 0x4166
void func_120() {
	int iVar0;

	if (Local_55 == -1) {
		Global_36715[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36715[iLocal_64 /*5*/].f_3 < 3 && Global_36715[iLocal_64 /*5*/].f_3 != 0) {
		Global_36715[iLocal_64 /*5*/].f_2 = -1;
	}
	else {
		iVar0 = Local_55 - system::timera();
		if (iVar0 <= 0) {
			iVar0 = 0;
		}
		iVar0 /= 1000 + 1;
		Global_36715[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30) {
			Global_36715[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10) {
			Global_36715[iLocal_64 /*5*/].f_2 = 1;
		}
	}
	if (ped::is_ped_in_any_vehicle(Local_43.f_1, 0)) {
		vLocal_60.x = 10;
		return;
	}
	if (func_96(Local_43.f_1)) {
		vLocal_60.x = 12;
		return;
	}
	if (Local_55 == -2) {
		return;
	}
	if (!func_89(Global_36715[iLocal_64 /*5*/].f_2)) {
		return;
	}
	vLocal_60.x = 12;
}

// Position - 0x423C
void func_121() {}

// Position - 0x4244
void func_122() {
	int iVar0;
	int iVar1;

	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16) {
		iVar0 = Global_36796[iVar1 /*5*/].f_2;
		if (iVar0 != 6) {
			if (Global_36796[iVar1 /*5*/].f_1 == iLocal_48) {
				func_124(iVar1);
				func_123(iVar1);
			}
			else if (Global_36796[iVar1 /*5*/].f_1 == 2) {
				if (iLocal_49 != -1) {
					if (iLocal_49 == Global_36796[iVar1 /*5*/]) {
						func_124(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

// Position - 0x42BC
void func_123(int iParam0) {
	if (iParam0 < 0 || iParam0 >= 16) {
		return;
	}
	Global_36796[iParam0 /*5*/] = -1;
	Global_36796[iParam0 /*5*/].f_1 = -1;
	Global_36796[iParam0 /*5*/].f_2 = 6;
	Global_36796[iParam0 /*5*/].f_3 = 0;
	Global_36796[iParam0 /*5*/].f_4 = 0;
}

// Position - 0x4309
void func_124(int iParam0) {
	int iVar0;

	iVar0 = Global_36796[iParam0 /*5*/].f_2;
	switch (iVar0) {
	case 1: func_145(); break;

	case 2: func_128(Global_36796[iParam0 /*5*/].f_4); break;

	case 3: func_127(); break;

	case 4: func_126(); break;

	case 5: func_125(); break;

	case 0: break;

	case 6: break;

	default: break;
	}
}

// Position - 0x4382
void func_125() { vLocal_60.y = 2; }

// Position - 0x438F
void func_126() {
	int iVar0;

	Global_36715[iLocal_64 /*5*/].f_4++;
	if (Local_55 == -1) {
		Global_36715[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36715[iLocal_64 /*5*/].f_4 < 9 && Global_36715[iLocal_64 /*5*/].f_4 != 0) {
		Global_36715[iLocal_64 /*5*/].f_2 = -1;
	}
	else {
		iVar0 = Local_55 - system::timera();
		if (iVar0 <= 0) {
			iVar0 = 0;
		}
		iVar0 /= 1000 + 1;
		Global_36715[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30) {
			Global_36715[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10) {
			Global_36715[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_96(Local_43.f_1)) {
			func_89(Global_36715[iLocal_64 /*5*/].f_2);
		}
	}
}

// Position - 0x444F
void func_127() {
	int iVar0;

	Global_36715[iLocal_64 /*5*/].f_3++;
	if (Local_55 == -1) {
		Global_36715[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36715[iLocal_64 /*5*/].f_3 < 3 && Global_36715[iLocal_64 /*5*/].f_3 != 0) {
		Global_36715[iLocal_64 /*5*/].f_2 = -1;
	}
	else {
		iVar0 = Local_55 - system::timera();
		if (iVar0 <= 0) {
			iVar0 = 0;
		}
		iVar0 /= 1000 + 1;
		Global_36715[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30) {
			Global_36715[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10) {
			Global_36715[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_96(Local_43.f_1)) {
			func_89(Global_36715[iLocal_64 /*5*/].f_2);
		}
	}
}

// Position - 0x450E
void func_128(int iParam0) {
	Local_43.f_3 += iParam0;
	Local_43.f_2 += iParam0;
	Local_55.f_1 += iParam0;
	Local_55 += iParam0;
}

// Position - 0x453E
void func_129() {
	int iVar0;

	if (!bLocal_50) {
		iLocal_63 = -1;
		return;
	}
	if (iLocal_63 < 0) {
		iLocal_63 = player::get_player_wanted_level(player::player_id());
		return;
	}
	iVar0 = player::get_player_wanted_level(player::player_id());
	if (iVar0 != iLocal_63) {
		if (iVar0 > iLocal_63) {
			func_130();
		}
		iLocal_63 = iVar0;
		return;
	}
}

// Position - 0x4588
void func_130() {}

// Position - 0x4590
void func_131() {
	if (Local_55 != -1) {
		if (Local_55 != -2) {
			if (system::timera() >= Local_55) {
				func_116();
				Local_55 = -2;
				vLocal_60.x = 12;
			}
		}
		if (system::timera() > Local_55.f_1) {
			func_145();
		}
	}
}

// Position - 0x45CF
void func_132(int iParam0) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		if (iParam0 == Global_36796[iVar0 /*5*/]) {
			func_123(iVar0);
		}
		iVar0++;
	}
}

// Position - 0x45FF
void func_133() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	vLocal_60.x = 4;
	if (!entity::is_entity_dead(Local_43.f_1, 0)) {
		if (ped::is_ped_sitting_in_any_vehicle(Local_43.f_1)) {
			vLocal_60.x = 10;
		}
	}
	if (bLocal_50) {
		func_136();
		func_8(71, 1);
		if (network::network_is_game_in_progress()) {
			iVar0 = func_69(2051, -1, 0);
			iVar1 = iVar0 / 10 + 1 * 10;
			if (iVar0 + 1 >= iVar1) {
				func_134(iVar1);
			}
			func_66(2051, iVar0 + 1, -1, 1, 0);
		}
		else {
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			stats::stat_get_int(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			stats::stat_get_int(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			stats::stat_get_int(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = iVar2 + iVar3 + iVar4;
			iVar6 = iVar5 / 10 + 1 * 10;
			if (iVar5 + 1 >= iVar6) {
				func_134(iVar6);
			}
			switch (func_57()) {
			case 0: stats::stat_set_int(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1); break;

			case 1: stats::stat_set_int(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1); break;

			case 2: stats::stat_set_int(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1); break;
			}
		}
		vLocal_60.y = 1;
		return;
	}
	vLocal_60.y = 12;
	if (Local_55 == -1) {
		Global_36715[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36715[iLocal_64 /*5*/].f_3 < 3 && Global_36715[iLocal_64 /*5*/].f_3 != 0) {
		Global_36715[iLocal_64 /*5*/].f_2 = -1;
	}
	else {
		iVar7 = Local_55 - system::timera();
		if (iVar7 <= 0) {
			iVar7 = 0;
		}
		iVar7 /= 1000 + 1;
		Global_36715[iLocal_64 /*5*/].f_2 = 0;
		if (iVar7 < 30) {
			Global_36715[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10) {
			Global_36715[iLocal_64 /*5*/].f_2 = 1;
		}
	}
}

// Position - 0x47AC
void func_134(int iParam0) {
	int iVar0;

	iVar0 = func_135(81);
	Global_2413052[iVar0 /*83*/] = 81;
	Global_2413052[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&Global_2413052[iVar0 /*83*/].f_18[0 /*16*/], "", 64);
}

// Position - 0x47E3
int func_135(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19) {
		if (Global_2413052[iVar1 /*83*/] == iParam0) {
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2413052[iVar1 /*83*/] == 0) {
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

// Position - 0x4830
void func_136() {}

// Position - 0x4838
void func_137() {
	Local_55 = Local_43.f_2;
	Local_55.f_1 = Local_43.f_3;
	Local_55.f_2 = -2;
	Local_55.f_3 = -2;
}

// Position - 0x485C
void func_138(int iParam0, int iParam1, int iParam2) { func_139(iParam0, iParam1, iParam2, 0, 0); }

// Position - 0x4870
void func_139(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam0 == -1) {
		return;
	}
	if (iParam1 == -1) {
		return;
	}
	if (iParam2 == 6) {
		return;
	}
	if (func_141(iParam0, iParam1, iParam2)) {
		return;
	}
	iVar0 = func_140();
	if (iVar0 == -1) {
		return;
	}
	Global_36796[iVar0 /*5*/] = iParam0;
	Global_36796[iVar0 /*5*/].f_1 = iParam1;
	Global_36796[iVar0 /*5*/].f_2 = iParam2;
	Global_36796[iVar0 /*5*/].f_3 = iParam3;
	Global_36796[iVar0 /*5*/].f_4 = iParam4;
}

// Position - 0x48E7
int func_140() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		if (Global_36796[iVar0 /*5*/].f_2 == 6) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x4918
bool func_141(int iParam0, int iParam1, int iParam2) {
	if (func_142(iParam0, iParam1, iParam2) == -1) {
		return false;
	}
	return true;
}

// Position - 0x4933
int func_142(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		if (iParam2 == Global_36796[iVar0 /*5*/].f_2) {
			if (iParam0 == Global_36796[iVar0 /*5*/]) {
				if (iParam1 == Global_36796[iVar0 /*5*/].f_1) {
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x497F
void func_143() {
	int iVar0;

	bLocal_50 = false;
	if (Local_43.f_1 == player::player_ped_id()) {
		bLocal_50 = true;
		Global_36911 = 1;
		Global_36913++;
	}
	if (!entity::is_entity_dead(Local_43.f_1, 0)) {
		iVar0 = func_60(Local_43.f_1);
		switch (iVar0) {
		case 17: audio::set_ambient_voice_name(Local_43.f_1, "AMANDA_DRUNK"); break;

		case 19: audio::set_ambient_voice_name(Local_43.f_1, "LAMAR_DRUNK"); break;
		}
	}
}

// Position - 0x49EC
void func_144() {
	if (iLocal_48 != -1) {
		return;
	}
	iLocal_48 = func_99(Local_43.f_1);
	if (iLocal_48 == -1) {
		return;
	}
	iLocal_64 = func_98(iLocal_48);
}

// Position - 0x4A1A
void func_145() {
	int iVar0;

	if (!func_26(0) && !func_26(3)) {
		if (!entity::is_entity_dead(Local_43.f_1, 0)) {
			iVar0 = func_60(Local_43.f_1);
			if (Global_36715[iLocal_64 /*5*/].f_4 > 0) {
				switch (iVar0) {
				case 0: func_147(Local_43.f_1, "POST_STONED", 24); break;

				case 1: func_147(Local_43.f_1, "POST_STONED", 24); break;

				case 2: func_147(Local_43.f_1, "POST_STONED", 24); break;
				}
			}
			switch (iVar0) {
			case 17: audio::set_ambient_voice_name(Local_43.f_1, "AMANDA_NORMAL"); break;

			case 19: audio::set_ambient_voice_name(Local_43.f_1, "LAMAR_NORMAL"); break;
			}
		}
	}
	func_116();
	if (bLocal_50) {
		Global_36911 = 0;
	}
	func_146();
	streaming::remove_anim_dict(func_95(0));
	streaming::remove_anim_dict(func_95(2));
	streaming::remove_anim_dict(func_95(1));
	Global_1760205 = 0;
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("appemail")) > 0) {
		func_33(0);
	}
	script::terminate_this_thread();
}

// Position - 0x4B1E
void func_146() {
	int iVar0;
	int iVar1;
	int iVar2;

	if (entity::is_entity_dead(Local_43.f_1, 0)) {
		return;
	}
	iVar0 = Local_43.f_1;
	if (ped::is_ped_in_any_vehicle(Local_43.f_1, 0)) {
		iVar1 = ped::get_vehicle_ped_is_in(Local_43.f_1, 0);
		iVar2 = vehicle::get_ped_in_vehicle_seat(iVar1, -1, 0);
		if (Local_43.f_1 != iVar2) {
			return;
		}
		iVar0 = iVar1;
	}
	else if (cam::get_follow_ped_cam_view_mode() != 4 || player::player_ped_id() != Local_43.f_1) {
		return;
	}
	fLocal_53 = 0f;
	func_109(iVar0, 0f);
}

// Position - 0x4B98
void func_147(int iParam0, char *sParam1, int iParam2) {
	audio::_play_ambient_speech1(iParam0, sParam1, func_148(iParam2), 1);
}

// Position - 0x4BAF
int func_148(int iParam0) {
	int iVar0;

	switch (iParam0) {
	case 0: return "SPEECH_PARAMS_STANDARD";

	case 1: return "SPEECH_PARAMS_ALLOW_REPEAT";

	case 2: return "SPEECH_PARAMS_BEAT";

	case 3: return "SPEECH_PARAMS_FORCE";

	case 4: return "SPEECH_PARAMS_FORCE_FRONTEND";

	case 5: return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";

	case 6: return "SPEECH_PARAMS_FORCE_NORMAL";

	case 7: return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";

	case 8: return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";

	case 9: return "SPEECH_PARAMS_FORCE_SHOUTED";

	case 10: return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";

	case 11: return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";

	case 12: return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";

	case 13: return "SPEECH_PARAMS_MEGAPHONE";

	case 14: return "SPEECH_PARAMS_HELI";

	case 15: return "SPEECH_PARAMS_FORCE_MEGAPHONE";

	case 16: return "SPEECH_PARAMS_FORCE_HELI";

	case 17: return "SPEECH_PARAMS_INTERRUPT";

	case 18: return "SPEECH_PARAMS_INTERRUPT_SHOUTED";

	case 19: return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";

	case 20: return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";

	case 21: return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";

	case 22: return "SPEECH_PARAMS_INTERRUPT_FRONTEND";

	case 23: return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";

	case 24: return "SPEECH_PARAMS_ADD_BLIP";

	case 25: return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";

	case 26: return "SPEECH_PARAMS_ADD_BLIP_FORCE";

	case 27: return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";

	case 28: return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";

	case 29: return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";

	case 30: return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";

	case 31: return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";

	case 32: return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";

	case 33: return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";

	case 34: return "SPEECH_PARAMS_SHOUTED";

	case 35: return "SPEECH_PARAMS_SHOUTED_CLEAR";

	case 36: return "SPEECH_PARAMS_SHOUTED_CRITICAL";

	default:
	}
	iVar0 = 0;
	return iVar0;
}
