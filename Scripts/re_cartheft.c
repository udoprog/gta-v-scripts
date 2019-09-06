#pragma region Local Var //{
var uLocal_0 = 0;
var uLocal_1 = 0;
var uLocal_2 = 0;
int iLocal_3 = 0;
int iLocal_4 = 0;
int iLocal_5 = 0;
int iLocal_6 = 0;
int iLocal_7 = 0;
int iLocal_8 = 0;
int iLocal_9 = 0;
int iLocal_10 = 0;
int iLocal_11 = 0;
int iLocal_12 = 0;
int iLocal_13 = 0;
var uLocal_14 = 0;
var uLocal_15 = 0;
float fLocal_16 = 0f;
var uLocal_17 = 0;
var uLocal_18 = 0;
int iLocal_19 = 0;
char *sLocal_20 = NULL;
var uLocal_21 = 0;
var uLocal_22 = 0;
float fLocal_23 = 0f;
var uLocal_24 = 0;
var uLocal_25 = 0;
var uLocal_26 = 0;
float fLocal_27 = 0f;
float fLocal_28 = 0f;
var uLocal_29 = 0;
var uLocal_30 = 0;
var uLocal_31 = 0;
float fLocal_32 = 0f;
float fLocal_33 = 0f;
float fLocal_34 = 0f;
var uLocal_35 = 0;
var uLocal_36 = 0;
var uLocal_37 = 0;
var uLocal_38 = 0;
var uLocal_39 = 0;
var uLocal_40 = 0;
int iLocal_41 = 0;
int iLocal_42 = 0;
int iLocal_43 = 0;
int iLocal_44 = 0;
vector3 vLocal_45 = {0f, 0f, 0f};
int iLocal_48 = 0;
int iLocal_49 = 0;
int iLocal_50 = 0;
int iLocal_51 = 0;
vector3 vLocal_52 = {0f, 0f, 0f};
float fLocal_55 = 0f;
float *fLocal_56 = NULL;
float fLocal_57 = 0f;
int iLocal_58 = 0;
int iLocal_59 = 0;
int iLocal_60 = 0;
bool bLocal_61 = 0;
int iLocal_62 = 0;
int iLocal_63 = 0;
int iLocal_64 = 0;
int iLocal_65 = 0;
int *iLocal_66 = NULL;
var *uLocal_67 = NULL;
var uLocal_68 = 0;
var uLocal_69 = 0;
var uLocal_70 = 0;
var uLocal_71 = 0;
var uLocal_72 = 0;
var uLocal_73 = 0;
var uLocal_74 = 0;
int iLocal_75 = 0;
int iLocal_76 = 0;
int iLocal_77 = 0;
int iLocal_78 = 0;
int iLocal_79 = 0;
int iLocal_80 = 0;
int iLocal_81 = 0;
int iLocal_82 = 0;
char *sLocal_83 = NULL;
char *sLocal_84 = NULL;
char *sLocal_85 = NULL;
char *sLocal_86 = NULL;
vector3 vLocal_87 = {0f, 0f, 0f};
vector3 vLocal_90 = {0f, 0f, 0f};
vector3 vLocal_93 = {0f, 0f, 0f};
vector3 vLocal_96 = {0f, 0f, 0f};
vector3 vLocal_99 = {0f, 0f, 0f};
vector3 vLocal_102 = {0f, 0f, 0f};
float fLocal_105 = 0f;
float fLocal_106 = 0f;
float fLocal_107 = 0f;
float fLocal_108 = 0f;
float fLocal_109 = 0f;
float fLocal_110 = 0f;
float fLocal_111 = 0f;
float fLocal_112 = 0f;
vector3 vLocal_113 = {0f, 0f, 0f};
vector3 vLocal_116 = {0f, 0f, 0f};
float fLocal_119 = 0f;
char *sLocal_120 = NULL;
char *sLocal_121 = NULL;
struct<10> Local_122[16];
var uLocal_283 = 0;
var uLocal_284 = 0;
var uLocal_285 = 0;
var uLocal_286 = 0;
char *sLocal_287 = NULL;
char *sLocal_288 = NULL;
char *sLocal_289 = NULL;
char *sLocal_290 = NULL;
char *sLocal_291 = NULL;
char *sLocal_292 = NULL;
char *sLocal_293 = NULL;
char[] cLocal_294[8] = 0;
int iLocal_295 = 0;
int iLocal_296 = 0;
int iLocal_297 = 0;
int iLocal_298 = 0;
int iLocal_299 = 0;
int iLocal_300 = 0;
int iLocal_301 = 0;
int iLocal_302 = 0;
int iLocal_303 = 0;
int iLocal_304 = 0;
int iLocal_305 = 0;
char *sLocal_306 = NULL;
char *sLocal_307 = NULL;
char *sLocal_308 = NULL;
char *sLocal_309 = NULL;
vector3 vLocal_310 = {0f, 0f, 0f};
vector3 vLocal_313 = {0f, 0f, 0f};
int iLocal_316 = 0;
vector3 vLocal_317 = {0f, 0f, 0f};
vector3 vLocal_320 = {0f, 0f, 0f};
vector3 vLocal_323 = {0f, 0f, 0f};
vector3 vLocal_326 = {0f, 0f, 0f};
int iLocal_329 = 0;
int *iLocal_330 = NULL;
var uLocal_331 = 0;
var uLocal_332 = -1;
var uLocal_333 = 0;
var uLocal_334 = 0;
var uLocal_335 = 0;
var uLocal_336 = 0;
var uLocal_337 = 0;
var uLocal_338 = 0;
var uLocal_339 = 1000;
var uLocal_340 = 1000;
var uLocal_341 = 0;
bool bLocal_342 = 0;
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
	int iVar3;

	iLocal_3 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0.001f;
	iLocal_19 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	fLocal_56 = 10f;
	fLocal_57 = 7f;
	iLocal_58 = 1;
	sLocal_84 = "random@car_thief@waving_ig_1";
	fLocal_119 = 1f;
	iLocal_299 = 786603;
	iLocal_300 = 786469;
	sLocal_307 = "car_returned_peyote";
	sLocal_308 = "girl_car_returned";
	sLocal_309 = "player_car_returned";
	vLocal_52 = {ScriptParam_0.f_1[0 /*3*/]};
	fLocal_55 = ScriptParam_0.f_17[0];
	if (player::has_force_cleanup_occurred(11)) {
		func_222();
	}
	func_221();
	if (iLocal_301 == 2) {
		if (func_220(34)) {
			script::terminate_this_thread();
		}
		if (!entity::is_entity_dead(player::player_ped_id(), 0) && !ped::is_ped_injured(player::player_ped_id())) {
			if (!ped::is_ped_in_flying_vehicle(player::player_ped_id())) {
				vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
				if (vVar0.z > 23f ||
					entity::is_entity_in_angled_area(player::player_ped_id(), -743.3924f, -2129.82f, 12.07619f,
													 -708.892f, -2160.705f, 19.7035f, 124.5f, 0, 1, 0)) {
					script::terminate_this_thread();
				}
			}
		}
	}
	if (func_179(vLocal_52, 17, iLocal_301, 0, 0)) {
		func_176(-1);
	}
	else {
		script::terminate_this_thread();
	}
	while (true) {
		system::wait(0);
		func_175();
		func_174(iLocal_63, &iLocal_66);
		if (player::is_player_playing(player::player_id())) {
			player::_0xC3376F42B1FACCC6(player::player_id());
		}
		func_173();
		if (!func_172()) {
			if (func_171()) {
				func_222();
			}
			if (brain::is_world_point_within_brain_activation_range()) {
				switch (iLocal_48) {
				case 0:
					if (func_154()) {
						ped::set_create_random_cops(0);
						iLocal_48 = 1;
					}
					break;

				case 1:
					if (!ped::is_ped_injured(iLocal_76)) {
						if (!ped::is_ped_injured(player::player_ped_id()) && !ped::is_ped_injured(iLocal_75) &&
							func_153(iLocal_77) && !func_152(0)) {
							if (func_151()) {
								if (func_153(iLocal_80)) {
									vehicle::set_vehicle_tyres_can_burst(iLocal_80, 0);
								}
								func_142(1);
								player::set_wanted_level_multiplier(0.1f);
								func_137(39, 1);
								func_137(40, 1);
								func_137(41, 1);
								func_137(42, 1);
								func_137(43, 1);
								func_137(44, 1);
								system::settimera(0);
							}
						}
						else {
							if (!ped::is_ped_injured(iLocal_75)) {
								ai::task_smart_flee_ped(iLocal_75, player::player_ped_id(), 150f, -1, 0, 0);
								ped::set_ped_keep_task(iLocal_75, 1);
								system::wait(0);
							}
							func_222();
						}
					}
					else {
						if (!ped::is_ped_injured(iLocal_75) && func_153(iLocal_77)) {
							ai::task_vehicle_drive_wander(iLocal_75, iLocal_77, 20f, iLocal_299);
							ped::set_ped_keep_task(iLocal_75, 1);
							system::wait(0);
						}
						func_105(0);
					}
					break;
				}
			}
			else {
				func_222();
			}
		}
		else {
			if (ped::is_ped_injured(iLocal_76)) {
				if (Local_122[2 /*10*/].f_7) {
					func_104(&Local_122, 2);
				}
			}
			player::set_all_random_peds_flee_this_frame(player::player_id());
			func_96();
			if (func_153(iLocal_77) && !func_95()) {
				if (func_93()) {
					if (!ped::is_ped_injured(iLocal_75)) {
						switch (iLocal_49) {
						case 0:
							if (!ped::is_ped_injured(iLocal_76)) {
								if (ped::is_ped_in_vehicle(iLocal_76, iLocal_77, 0)) {
									if (iLocal_301 == 2) {
										entity::set_entity_load_collision_flag(iLocal_76, 1);
										entity::set_entity_load_collision_flag(iLocal_77, 1);
										ai::open_sequence_task(&iLocal_78);
										ai::task_vehicle_mission_ped_target(0, iLocal_77, player::player_ped_id(), 8,
																			30f, iLocal_300, 200f, 10f, 0);
										ai::close_sequence_task(iLocal_78);
										ai::task_perform_sequence(iLocal_76, iLocal_78);
										ai::clear_sequence_task(&iLocal_78);
									}
									else {
										entity::set_entity_load_collision_flag(iLocal_76, 1);
										ai::open_sequence_task(&iLocal_78);
										ai::task_vehicle_temp_action(0, iLocal_77, 30, 1000);
										ai::task_vehicle_mission_ped_target(0, iLocal_77, player::player_ped_id(), 8,
																			40f, iLocal_300, 200f, 10f, 1);
										ai::close_sequence_task(iLocal_78);
										ai::task_perform_sequence(iLocal_76, iLocal_78);
										ai::clear_sequence_task(&iLocal_78);
									}
									vLocal_317 = {entity::get_world_position_of_entity_bone(
										iLocal_77, entity::get_entity_bone_index_by_name(iLocal_77, "wheel_lr"))};
									vLocal_320 = {
										entity::get_offset_from_entity_given_world_coords(iLocal_77, vLocal_317)};
									graphics::start_particle_fx_non_looped_on_entity(
										"scr_wheel_burnout", iLocal_77, vLocal_320 + Vector(-0.5f, -1f, 0f), 0f, 180f,
										0f, 0.25f, 0, 0, 0);
									vLocal_323 = {entity::get_world_position_of_entity_bone(
										iLocal_77, entity::get_entity_bone_index_by_name(iLocal_77, "wheel_rr"))};
									vLocal_326 = {
										entity::get_offset_from_entity_given_world_coords(iLocal_77, vLocal_323)};
									graphics::start_particle_fx_non_looped_on_entity(
										"scr_wheel_burnout", iLocal_77, vLocal_326 + Vector(-0.5f, -1f, 0f), 0f, 180f,
										0f, 0.25f, 0, 0, 0);
									system::settimera(0);
									if (!ui::does_blip_exist(iLocal_64)) {
										iLocal_64 = func_91(iLocal_77, 1, 0);
									}
									gameplay::_set_unk_map_flag(2);
									iLocal_49 = 1;
								}
								else if (entity::has_entity_been_damaged_by_entity(iLocal_77, player::player_ped_id(),
																				   1)) {
									if (!ped::is_ped_injured(iLocal_76)) {
										ai::task_smart_flee_ped(iLocal_76, player::player_ped_id(), 150f, -1, 0, 0);
										ped::set_ped_keep_task(iLocal_76, 1);
										system::wait(0);
									}
									func_222();
								}
							}
							else {
								ai::task_vehicle_drive_wander(iLocal_75, iLocal_77, 20f, iLocal_299);
								ped::set_ped_keep_task(iLocal_75, 1);
								system::wait(0);
								func_105(0);
							}
							break;

						case 1:
							if (func_153(iLocal_77)) {
								if (iLocal_301 == 1) {
									if (system::timera() < 5000) {
										if (system::timera() > 2000) {
											fLocal_119 += 0.4f;
										}
										else {
											fLocal_119 += 0.2f;
										}
										if (fLocal_119 > 30f) {
											fLocal_119 = 30f;
										}
										vehicle::set_vehicle_forward_speed(iLocal_77, fLocal_119);
										iVar3 = vehicle::get_closest_vehicle(entity::get_entity_coords(iLocal_77, 1),
																			 5f, 0, 4);
										if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
											if (func_153(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0))) {
												if (entity::is_entity_touching_entity(
														ped::get_vehicle_ped_is_in(player::player_ped_id(), 0),
														iLocal_77)) {
													system::settimera(5000);
												}
											}
											if (func_153(iVar3)) {
												if (iVar3 != iLocal_77) {
													if (entity::is_entity_touching_entity(iVar3, iLocal_77)) {
														system::settimera(5000);
													}
												}
											}
										}
									}
								}
								if (vehicle::get_vehicle_petrol_tank_health(iLocal_77) < 700f) {
									func_222();
								}
							}
							func_68();
							if (func_67() || func_66() || entity::is_entity_upsidedown(iLocal_77) ||
								vehicle::is_vehicle_stuck_timer_up(iLocal_77, 1, 5000) ||
								fire::is_entity_on_fire(iLocal_77) || ped::is_ped_injured(iLocal_76) ||
								!ped::is_ped_in_vehicle(iLocal_76, iLocal_77, 0)) {
								if (audio::is_audio_scene_active("RE_CAR_STEAL_SCENE")) {
									if (func_153(iLocal_77)) {
										audio::_0x18EB48CFC41F2EA0(iLocal_77, 0);
									}
									audio::stop_audio_scene("RE_CAR_STEAL_SCENE");
								}
								if (ui::does_blip_exist(iLocal_64)) {
									ui::remove_blip(&iLocal_64);
								}
								func_65();
								if (ui::does_blip_exist(iLocal_63)) {
									ui::remove_blip(&iLocal_63);
								}
								entity::clear_entity_last_damage_entity(iLocal_75);
								vehicle::_set_vehicle_halt(iLocal_77, 50f, 5, 0);
								iLocal_65 = func_91(iLocal_77, 0, 0);
								fLocal_109 = system::vdist(entity::get_entity_coords(iLocal_77, 1),
														   entity::get_entity_coords(player::player_ped_id(), 1));
								fLocal_107 = system::vdist(entity::get_entity_coords(iLocal_77, 1),
														   entity::get_entity_coords(iLocal_75, 1));
								fLocal_108 = system::vdist(entity::get_entity_coords(player::player_ped_id(), 1),
														   entity::get_entity_coords(iLocal_75, 1));
								func_63(&iLocal_330, 0, 0);
								iLocal_49 = 2;
							}
							break;

						case 2:
							if (func_153(iLocal_77)) {
								if (vehicle::get_vehicle_petrol_tank_health(iLocal_77) < 700f) {
									func_222();
								}
							}
							if (player::get_player_wanted_level(player::player_id()) > 0) {
								func_222();
							}
							if (!entity::is_entity_dead(iLocal_76, 0)) {
								if (!ped::is_ped_in_vehicle(iLocal_76, iLocal_77, 0)) {
									func_62(iLocal_76, &uLocal_67, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
								}
							}
							else {
								func_61(&uLocal_67);
							}
							if (!ped::is_ped_injured(iLocal_76)) {
								if (!ped::is_ped_in_combat(iLocal_76, player::player_ped_id())) {
									ai::task_combat_ped(iLocal_76, player::player_ped_id(), 0, 16);
									streaming::set_model_as_no_longer_needed(entity::get_entity_model(iLocal_76));
								}
							}
							if (system::vdist(entity::get_entity_coords(iLocal_77, 1),
											  entity::get_entity_coords(player::player_ped_id(), 1)) >
									fLocal_109 + 220f ||
								system::vdist(entity::get_entity_coords(iLocal_77, 1),
											  entity::get_entity_coords(iLocal_75, 1)) > fLocal_107 + 220f ||
								system::vdist(entity::get_entity_coords(player::player_ped_id(), 1),
											  entity::get_entity_coords(iLocal_75, 1)) > fLocal_108 + 220f) {
								if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_77, 0)) {
									func_105(0);
								}
								else {
									func_222();
								}
							}
							if (ui::does_blip_exist(iLocal_65)) {
								if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_77, 0)) {
									ui::remove_blip(&iLocal_65);
									iLocal_63 = func_57(iLocal_75, 0, 0);
									func_56(&iLocal_66);
									func_63(&iLocal_330, 0, 0);
									if (!iLocal_60) {
										if (iLocal_301 == 1) {
											vLocal_93 = {-2258.759f, 4274.059f, 45.9166f};
										}
										else if (bLocal_61) {
											vLocal_93 = {-483.4162f, -2160.874f, 8.359f};
										}
										else {
											vLocal_93 = {-485.9905f, -2153.542f, 8.1999f};
										}
										if (!cam::is_sphere_visible(vLocal_93, 2f) &&
											!entity::is_entity_on_screen(iLocal_75)) {
											entity::set_entity_coords(iLocal_75, vLocal_93, 1, 0, 0, 1);
											entity::set_entity_heading(iLocal_75, fLocal_106);
											iLocal_60 = 1;
										}
									}
									iLocal_50 = 3;
									iLocal_304 = gameplay::get_game_timer();
								}
								else if (entity::is_entity_at_entity(iLocal_77, iLocal_75, 20f, 20f, 7f, 0, 1, 0)) {
									func_55();
									if (func_54()) {
										if (vehicle::_0x639431E895B9AA57(iLocal_75, iLocal_77, -1, 0, 0)) {
											if (!iLocal_296) {
												if (func_44(&Local_122, cLocal_294, sLocal_290, 4, 0, 0, 0)) {
												}
											}
											ai::task_vehicle_drive_wander(iLocal_75, iLocal_77, 35f, iLocal_299);
											ped::set_ped_keep_task(iLocal_75, 1);
											func_105(1);
										}
									}
								}
							}
							else if (ui::does_blip_exist(iLocal_63)) {
								if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_77, 0)) {
									if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_75, fLocal_56,
																	fLocal_56, fLocal_56, 0, 1, 0)) {
										if (func_43(1, 0, 1)) {
											ui::remove_blip(&iLocal_63);
											if (iLocal_301 == 1) {
												if (func_42(entity::get_entity_heading(iLocal_77), 336f, 90f)) {
													sLocal_306 = "RANDOM@CAR_"
																 "THEFT_1@MCS_"
																 "2";
												}
												else {
													sLocal_306 = "RANDOM@CAR_"
																 "THEFT_1@MCS_"
																 "2";
												}
											}
											else {
												sLocal_306 = "RANDOM@CAR_THEFT_1@MCS_3";
											}
											streaming::request_anim_dict(sLocal_306);
											iLocal_50 = 4;
											iLocal_49 = 3;
										}
									}
									else {
										func_40(entity::get_entity_coords(iLocal_75, 1), &fLocal_56, &fLocal_57);
									}
								}
								else {
									ui::remove_blip(&iLocal_63);
									iLocal_65 = func_91(iLocal_77, 0, 0);
									iLocal_50 = 0;
								}
							}
							break;

						case 3:
							if (iLocal_301 == 1) {
								if (func_4()) {
									if (func_3(iLocal_75)) {
										ped::set_ped_reset_flag(iLocal_75, 310, 1);
									}
									func_105(1);
								}
							}
							else if (func_4()) {
								if (func_3(iLocal_75)) {
									ped::set_ped_reset_flag(iLocal_75, 310, 1);
								}
								func_105(1);
							}
							break;
						}
					}
					else {
						if (!ped::is_ped_injured(iLocal_76)) {
							if (ped::is_ped_in_vehicle(iLocal_76, iLocal_77, 0)) {
								ai::task_vehicle_mission_ped_target(iLocal_76, iLocal_77, player::player_ped_id(), 8,
																	50f, iLocal_300, 10f, 10f, 0);
								ped::set_ped_keep_task(iLocal_76, 1);
								streaming::set_model_as_no_longer_needed(entity::get_entity_model(iLocal_76));
							}
							else {
								ai::task_smart_flee_ped(iLocal_76, player::player_ped_id(), 150f, -1, 0, 0);
								ped::set_ped_keep_task(iLocal_76, 1);
								streaming::set_model_as_no_longer_needed(entity::get_entity_model(iLocal_76));
							}
						}
						system::wait(0);
						func_222();
					}
				}
				else {
					if (iLocal_49 == 1) {
						if (func_153(iLocal_77)) {
							vehicle::delete_vehicle(&iLocal_77);
						}
						if (!ped::is_ped_injured(iLocal_76)) {
							ped::delete_ped(&iLocal_76);
						}
					}
					if (!ped::is_ped_injured(iLocal_75)) {
						if (entity::is_entity_playing_anim(iLocal_75, sLocal_83, "agitated_idle_a", 3)) {
							entity::stop_entity_anim(iLocal_75, "waiting", sLocal_83, -2f);
						}
						func_1(iLocal_75, "GENERIC_CURSE_HIGH", 24);
						ai::open_sequence_task(&iLocal_78);
						ai::task_go_straight_to_coord(0, vLocal_102, 1f, 20000, 1193033728, 1056964608);
						ai::task_start_scenario_in_place(0, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
						ai::close_sequence_task(iLocal_78);
						ai::task_perform_sequence(iLocal_75, iLocal_78);
						ai::clear_sequence_task(&iLocal_78);
					}
					func_222();
				}
			}
			else {
				if (!ped::is_ped_injured(iLocal_76)) {
					ai::task_smart_flee_ped(iLocal_76, player::player_ped_id(), 150f, -1, 0, 0);
					ped::set_ped_keep_task(iLocal_76, 1);
				}
				if (entity::does_entity_exist(iLocal_77)) {
					vehicle::set_vehicle_engine_health(iLocal_77, 50f);
				}
				func_222();
			}
		}
	}
}

// Position - 0xB82
void func_1(int iParam0, char *sParam1, int iParam2) {
	audio::_play_ambient_speech1(iParam0, sParam1, func_2(iParam2), 1);
}

// Position - 0xB99
int func_2(int iParam0) {
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

// Position - 0xD8E
bool func_3(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0xDAF
bool func_4() {
	vector3 vVar0;
	char *sVar3;
	vector3 vVar4;
	float fVar7;

	sVar3 = "chassis";
	func_55();
	if (!ped::is_ped_injured(iLocal_75) && !ped::is_ped_injured(player::player_ped_id()) && func_153(iLocal_77) &&
		streaming::has_anim_dict_loaded(sLocal_306)) {
		switch (iLocal_51) {
		case 0:
			if (player::is_player_control_on(player::player_id())) {
				if (func_43(1, 0, 1)) {
					if (!gameplay::is_bit_set(G_SleepModeOnOn25, 11)) {
						if (!ped::is_ped_ragdoll(player::player_ped_id())) {
							func_32(1, 1, 1, 0);
							if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
								ui::clear_help(1);
								while (!func_30(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), fLocal_57, 1,
												1056964608, 0, 1, 0)) {
									ui::hide_hud_and_radar_this_frame();
									system::wait(0);
								}
								func_30(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), fLocal_57, 0,
										1056964608, 0, 1, 0);
							}
							ui::hide_hud_and_radar_this_frame();
							if (!ped::is_ped_injured(iLocal_75)) {
								ped::set_ped_can_ragdoll(iLocal_75, 0);
							}
							func_28();
							func_23();
							ui::hide_hud_and_radar_this_frame();
							iLocal_51 = 1;
						}
					}
				}
			}
			break;

		case 1:
			player::set_player_control(player::player_id(), 0, 0);
			vehicle::set_vehicle_door_control(iLocal_77, 0, 0, 0f);
			vehicle::set_vehicle_door_latched(iLocal_77, 0, 1, 1, 1);
			ui::hide_hud_and_radar_this_frame();
			if (iLocal_301 == 1) {
				if (func_153(iLocal_77)) {
					if (func_42(entity::get_entity_heading(iLocal_77), 336f, 90f)) {
						vLocal_90 = {-2254.3f, 4273.361f, 44.9697f};
						fLocal_105 = 336.6557f;
						vLocal_87 = {-2252.683f, 4274.16f, 45.0612f};
						vLocal_93 = {-2257.825f, 4269.189f, 44.6334f};
						fLocal_106 = 272.8688f;
						vLocal_113 = {-2254.588f, 4277.307f, 45.6133f};
						vLocal_116 = {6.6248f, 0.0369f, 179.5595f};
					}
					else {
						vLocal_90 = {-2254.223f, 4272.33f, 44.9193f};
						fLocal_105 = 148.0287f;
						vLocal_93 = {-2255.733f, 4271.32f, 44.8166f};
						fLocal_106 = 179.4774f;
						vLocal_87 = {-2257.088f, 4268.938f, 44.6456f};
						vLocal_113 = {-2255.775f, 4274.144f, 46.0666f};
						vLocal_116 = {2.8781f, 0.3464f, -146.6097f};
					}
				}
				vVar4 = {-2269.34f, 4279.89f, 45.47f};
				fVar7 = 53.23f;
				fLocal_112 = 50f;
				entity::set_entity_coords(player::player_ped_id(), vLocal_87, 1, 0, 0, 1);
				weapon::set_current_ped_weapon(player::player_ped_id(), joaat("weapon_unarmed"), 1);
				entity::set_entity_coords(iLocal_75, vLocal_93, 1, 0, 0, 1);
				entity::set_entity_heading(iLocal_77, fLocal_105);
				entity::set_entity_coords(iLocal_77, vLocal_90, 1, 0, 0, 1);
			}
			else {
				if (!func_42(entity::get_entity_heading(iLocal_77), 64.6764f, 90f)) {
					vLocal_113 = {-478.7095f, -2163.598f, 10.3091f};
					vLocal_116 = {-7.4391f, 0.0006f, 35.6865f};
					vLocal_90 = {-484.9581f, -2155.266f, 8.248f};
					fLocal_105 = 243.308f;
					fLocal_112 = 22f;
				}
				else {
					vLocal_113 = {-488.0143f, -2149.419f, 9.9817f};
					vLocal_116 = {-11.7475f, 0.0006f, -145.0045f};
					vLocal_90 = {-484.3195f, -2154.188f, 8.2182f};
					fLocal_105 = 64.6764f;
					fLocal_112 = 36.9289f;
				}
				vVar4 = {-486.92f, -2169.01f, 8.89f};
				fVar7 = 63.1f;
				entity::set_entity_coords(iLocal_77, vLocal_90, 1, 0, 0, 1);
				weapon::set_current_ped_weapon(player::player_ped_id(), joaat("weapon_unarmed"), 1);
				entity::set_entity_heading(iLocal_77, fLocal_105);
			}
			player::set_player_wanted_level(player::player_id(), 0, 0);
			if (func_153(iLocal_77)) {
				vehicle::set_vehicle_on_ground_properly(iLocal_77, 1084227584);
				if (entity::does_entity_exist(iLocal_76)) {
					if (ped::is_ped_in_vehicle(iLocal_76, iLocal_77, 0)) {
						ped::delete_ped(&iLocal_76);
					}
				}
			}
			vLocal_310 = {0f, 0f, 0f};
			vLocal_313 = {0f, 0f, 0f};
			iLocal_302 = ped::create_synchronized_scene(vLocal_310, vLocal_313, 2);
			ped::attach_synchronized_scene_to_entity(iLocal_302, iLocal_77,
													 entity::get_entity_bone_index_by_name(iLocal_77, sVar3));
			ped::set_synchronized_scene_origin(iLocal_302, vLocal_310, vLocal_313, 2);
			ai::task_synchronized_scene(iLocal_75, iLocal_302, sLocal_306, sLocal_308, 1000f, -2f, 0, 0, 1148846080, 0);
			ai::task_synchronized_scene(player::player_ped_id(), iLocal_302, sLocal_306, sLocal_309, 1000f, -2f, 1024,
										0, 1148846080, 0);
			iLocal_79 =
				cam::create_cam_with_params("DEFAULT_ANIMATED_CAMERA", vLocal_113, vLocal_116, fLocal_112, 0, 2);
			cam::play_synchronized_cam_anim(iLocal_79, iLocal_302, "car_returned_cam", sLocal_306);
			entity::play_entity_anim(iLocal_77, sLocal_307, sLocal_306, 1000f, 0, 0, 0, 0f, 262144);
			vLocal_310 = {entity::get_entity_coords(iLocal_77, 1)};
			vLocal_313 = {entity::get_entity_rotation(iLocal_77, 2)};
			if (func_153(iLocal_80)) {
				if (func_22(iLocal_80, vLocal_90, 1) <= 11f) {
					entity::set_entity_coords(iLocal_80, vVar4, 1, 0, 0, 1);
					entity::set_entity_heading(iLocal_80, fVar7);
					vehicle::set_vehicle_on_ground_properly(iLocal_80, 1084227584);
					entity::set_entity_as_mission_entity(iLocal_80, 1, 0);
				}
			}
			gameplay::clear_area(vLocal_90, 10f, 1, 0, 0, 0);
			system::settimera(0);
			if (iLocal_301 == 2) {
				vehicle::request_vehicle_asset(joaat("rocoto"), 15);
			}
			else {
				vehicle::request_vehicle_asset(joaat("peyote"), 15);
			}
			fire::stop_fire_in_range(vLocal_90, 15f);
			cam::set_cam_active(iLocal_79, 1);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			iLocal_51 = 3;
			streaming::_0xA76359FC80B2438E(1f);
			break;

		case 3:
			ui::hide_hud_and_radar_this_frame();
			if (func_19()) {
				iLocal_51 = 4;
			}
			if (iLocal_301 == 1) {
				if (system::timera() > 1500 && !bLocal_342) {
					if (func_44(&Local_122, cLocal_294, sLocal_121, 4, 0, 0, 0)) {
						iLocal_51 = 4;
					}
				}
			}
			else if (ped::is_synchronized_scene_running(iLocal_302) && !bLocal_342) {
				if (ped::get_synchronized_scene_phase(iLocal_302) >= 0.2f) {
					if (func_44(&Local_122, cLocal_294, sLocal_121, 4, 0, 0, 0)) {
						iLocal_62 = 0;
						iLocal_51 = 4;
					}
				}
			}
			streaming::_0xA76359FC80B2438E(1f);
			break;

		case 4:
			ui::hide_hud_and_radar_this_frame();
			if (iLocal_301 == 2) {
				if (!func_18()) {
					if (iLocal_62 == 0) {
						if (func_44(&Local_122, cLocal_294, "RECT2_REWARD", 4, 0, 0, 0)) {
							iLocal_62 = 1;
						}
					}
				}
			}
			streaming::_0xA76359FC80B2438E(1f);
			if (iLocal_301 == 1) {
				if (ped::is_synchronized_scene_running(iLocal_302)) {
					if (iLocal_316 == 0) {
						if (ped::get_synchronized_scene_phase(iLocal_302) >= 0.83f) {
							ai::clear_ped_tasks(player::player_ped_id());
							ai::task_play_anim(player::player_ped_id(), sLocal_306, sLocal_309, 1000f, -2f, -1, 1048576,
											   ped::get_synchronized_scene_phase(iLocal_302), 0, 0, 0);
							ped::_0x2208438012482A1A(player::player_ped_id(), 1, 0);
							iLocal_316 = 1;
						}
					}
					if (!ped::is_ped_injured(iLocal_75)) {
						if (ped::get_synchronized_scene_phase(iLocal_302) >= 0.83f) {
							if (entity::is_entity_playing_anim(iLocal_75, sLocal_306, sLocal_308, 2)) {
								entity::stop_synchronized_entity_anim(iLocal_75, -1000f, 0);
								if (!ped::is_ped_in_any_vehicle(iLocal_75, 0)) {
									if (func_153(iLocal_77)) {
										ped::set_ped_into_vehicle(iLocal_75, iLocal_77, -1);
										ped::set_ped_reset_flag(iLocal_75, 310, 1);
									}
								}
								ped::_0x2208438012482A1A(iLocal_75, 1, 0);
							}
							else {
								ped::set_ped_reset_flag(iLocal_75, 310, 1);
							}
						}
					}
				}
			}
			else if (ped::is_synchronized_scene_running(iLocal_302)) {
				if (iLocal_316 == 0) {
					if (ped::get_synchronized_scene_phase(iLocal_302) >= 0.86f) {
						ai::clear_ped_tasks(player::player_ped_id());
						ai::task_play_anim(player::player_ped_id(), sLocal_306, sLocal_309, 1000f, -2f, -1, 1048576,
										   ped::get_synchronized_scene_phase(iLocal_302), 0, 0, 0);
						ped::_0x2208438012482A1A(player::player_ped_id(), 1, 0);
						iLocal_316 = 1;
					}
				}
				if (!ped::is_ped_injured(iLocal_75)) {
					if (ped::get_synchronized_scene_phase(iLocal_302) > 0.847f) {
						if (entity::is_entity_playing_anim(iLocal_75, sLocal_306, sLocal_308, 2)) {
							entity::stop_synchronized_entity_anim(iLocal_75, -1000f, 0);
							if (!ped::is_ped_in_any_vehicle(iLocal_75, 0)) {
								if (func_153(iLocal_77)) {
									ped::set_ped_into_vehicle(iLocal_75, iLocal_77, -1);
									ped::set_ped_reset_flag(iLocal_75, 310, 1);
								}
							}
							ped::_0x2208438012482A1A(iLocal_75, 1, 0);
						}
						else {
							ped::set_ped_reset_flag(iLocal_75, 310, 1);
						}
					}
				}
			}
			if (ped::is_synchronized_scene_running(iLocal_302) &&
					ped::get_synchronized_scene_phase(iLocal_302) >= 0.99f ||
				!ped::is_synchronized_scene_running(iLocal_302) || func_19()) {
				if (!entity::is_entity_dead(iLocal_77, 0) &&
					entity::is_entity_playing_anim(iLocal_77, sLocal_306, sLocal_307, 3)) {
					entity::set_entity_anim_current_time(iLocal_77, sLocal_306, sLocal_307, 1f);
				}
				if (ped::is_synchronized_scene_running(iLocal_302)) {
					ped::set_synchronized_scene_phase(iLocal_302, 1f);
				}
				if (bLocal_342) {
					vVar0 = {
						ped::get_anim_initial_offset_position(sLocal_306, sLocal_309, vLocal_310, vLocal_313, 1f, 2)};
					gameplay::get_ground_z_for_3d_coord(vVar0, &vVar0.f_2, 0);
					entity::set_entity_coords(player::player_ped_id(), vVar0, 1, 0, 0, 1);
					vVar0 = {
						ped::get_anim_initial_offset_rotation(sLocal_306, sLocal_309, vLocal_310, vLocal_313, 1f, 2)};
					entity::set_entity_heading(player::player_ped_id(), vVar0.z);
					cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
					cam::set_gameplay_cam_relative_heading(0f);
				}
				ped::force_ped_motion_state(player::player_ped_id(), -1871534317, 1, 0, 1);
				if (!ped::is_ped_in_any_vehicle(iLocal_75, 0)) {
					if (func_153(iLocal_77)) {
						ped::set_ped_into_vehicle(iLocal_75, iLocal_77, -1);
						ped::set_ped_reset_flag(iLocal_75, 310, 1);
					}
				}
				if (!ped::is_ped_injured(iLocal_75)) {
					if (ped::is_ped_in_any_vehicle(iLocal_75, 0)) {
						if (func_153(iLocal_77)) {
							vehicle::set_vehicle_door_control(iLocal_77, 0, 0, 0f);
							vehicle::set_vehicle_door_latched(iLocal_77, 0, 1, 1, 1);
							iLocal_305 = gameplay::get_game_timer();
							iLocal_51 = 5;
						}
					}
				}
			}
			break;

		case 5:
			ui::hide_hud_and_radar_this_frame();
			if (gameplay::get_game_timer() - iLocal_305 > 100) {
				if (func_3(iLocal_75) && func_153(iLocal_77)) {
					ai::open_sequence_task(&iLocal_78);
					ai::task_vehicle_temp_action(0, iLocal_77, 9, 1000);
					ai::task_vehicle_drive_wander(0, iLocal_77, 25f, iLocal_299);
					ai::close_sequence_task(iLocal_78);
					ai::task_perform_sequence(iLocal_75, iLocal_78);
					ai::clear_sequence_task(&iLocal_78);
					ped::set_ped_reset_flag(iLocal_75, 310, 1);
				}
				func_32(0, 1, 1, 0);
				if (bLocal_342) {
					if (cam::does_cam_exist(iLocal_79)) {
						cam::set_cam_active(iLocal_79, 0);
						cam::destroy_cam(iLocal_79, 0);
					}
					cam::render_script_cams(0, 0, 3000, 1, 0, 0);
					system::wait(750);
					cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
					cam::set_gameplay_cam_relative_heading(0f);
					func_17(500, 1);
				}
				else {
					cam::_0xC819F3CBB62BF692(0, 0, 3, 0);
					cam::set_cam_active(iLocal_79, 0);
				}
				player::set_player_control(player::player_id(), 1, 0);
				func_16(&iLocal_77);
				func_5(func_10(), 4, 5);
				return true;
			}
			else if (func_3(iLocal_75)) {
				ped::set_ped_reset_flag(iLocal_75, 310, 1);
			}
			break;
		}
	}
	return false;
}

// Position - 0x17BC
void func_5(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	switch (iParam0) {
	case 0:
	case 1:
	case 2: Global_101700.f_2095.f_539.f_1475[iParam1 /*4*/][iParam0] += iParam2; break;

	case 3:
		iVar1 = 6022;
		switch (iParam1) {
		case 1: iVar1 = 72; break;

		case 3: iVar1 = 74; break;

		case 2: iVar1 = 73; break;

		case 4: iVar1 = 75; break;

		case 5: iVar1 = 76; break;

		case 6: iVar1 = 77; break;

		case 7: iVar1 = 78; break;
		}
		if (iVar1 != 6022) {
			iVar0 = func_9(iVar1, -1, 0);
			iVar0 += iParam2;
			if (iVar0 > 100) {
				iVar0 = 100;
			}
			func_6(iVar1, iVar0, -1, 1, 0);
		}
		break;
	}
}

// Position - 0x18AC
void func_6(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam4) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_7(iParam2)];
	if (iVar0 != 0) {
		stats::stat_set_int(iVar0, iParam1, iParam3);
	}
}

// Position - 0x18DC
int func_7(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_8();
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

// Position - 0x1910
var func_8() { return Global_1312735; }

// Position - 0x191C
int func_9(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_7(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x194E
int func_10() {
	func_11();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x1967
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

// Position - 0x1A64
bool func_12(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x1A72
bool func_13(int iParam0) { return iParam0 < 3; }

// Position - 0x1A7E
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

// Position - 0x1ABB
int func_15(int iParam0) {
	if (func_13(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x1AE5
void func_16(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		entity::is_entity_dead(*iParam0, 0);
		if (entity::is_entity_a_mission_entity(*iParam0) && entity::does_entity_belong_to_this_script(*iParam0, 1)) {
			entity::set_vehicle_as_no_longer_needed(iParam0);
		}
	}
}

// Position - 0x1B1D
void func_17(int iParam0, int iParam1) {
	if (cam::is_screen_faded_out() || cam::is_screen_fading_out()) {
		if (!cam::is_screen_fading_in()) {
			cam::do_screen_fade_in(iParam0);
		}
	}
	if (iParam1) {
		while (!cam::is_screen_faded_in()) {
			system::wait(0);
		}
	}
}

// Position - 0x1B59
int func_18() {
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return 1;
	}
	return 0;
}

// Position - 0x1B7B
bool func_19() {
	int iVar0;

	iVar0 = joaat("peyote");
	if (iLocal_301 == 2) {
		iVar0 = joaat("rocoto");
	}
	if (func_20(1000)) {
		if (vehicle::has_vehicle_asset_loaded(iVar0)) {
			cam::set_cam_active(iLocal_79, 0);
			cam::do_screen_fade_out(500);
			while (cam::is_screen_fading_out()) {
				ui::hide_hud_and_radar_this_frame();
				system::wait(0);
			}
			bLocal_342 = true;
			return true;
		}
	}
	if (cam::is_screen_faded_out()) {
		if (vehicle::has_vehicle_asset_loaded(iVar0)) {
			bLocal_342 = true;
			return true;
		}
	}
	return false;
}

// Position - 0x1BED
bool func_20(int iParam0) {
	if (cam::is_screen_faded_in()) {
		if (gameplay::get_game_timer() - Global_28 > iParam0) {
			Global_27 = gameplay::get_game_timer();
		}
		Global_28 = gameplay::get_game_timer();
		if (gameplay::get_game_timer() - Global_27 > iParam0) {
			if (func_21()) {
				Global_27 = gameplay::get_game_timer();
				return true;
			}
		}
	}
	return false;
}

// Position - 0x1C37
bool func_21() {
	if (ui::is_pause_menu_active()) {
		return false;
	}
	if (controls::is_control_just_pressed(0, 18) || controls::is_control_just_pressed(2, 18)) {
		return true;
	}
	return false;
}

// Position - 0x1C69
float func_22(int iParam0, vector3 vParam1, int iParam4) {
	vector3 vVar0;

	if (!entity::is_entity_dead(iParam0, 0)) {
		vVar0 = {entity::get_entity_coords(iParam0, 1)};
	}
	else {
		vVar0 = {entity::get_entity_coords(iParam0, 0)};
	}
	return gameplay::get_distance_between_coords(vVar0, vParam1, iParam4);
}

// Position - 0x1CA3
void func_23() {
	if (Global_14443.f_1 != 1) {
		if (func_27(0)) {
			func_24(0);
		}
		gameplay::set_bit(&G_SleepModeOffOn11, 2);
	}
}

// Position - 0x1CCB
void func_24(int iParam0) {
	if (Global_14604) {
		func_26(0, 0);
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
	if (!func_25()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x1D3B
bool func_25() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return true;
	}
	return false;
}

// Position - 0x1D62
void func_26(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_27(0)) {
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

// Position - 0x1DD6
bool func_27(int iParam0) {
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

// Position - 0x1E30
void func_28() {
	Global_14611 = 0;
	func_29();
}

// Position - 0x1E40
void func_29() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
	}
}

// Position - 0x1E61
int func_30(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6) {
	controls::disable_control_action(0, 71, 1);
	controls::disable_control_action(0, 72, 1);
	controls::disable_control_action(0, 76, 1);
	controls::disable_control_action(0, 73, 1);
	controls::disable_control_action(0, 59, 1);
	controls::disable_control_action(0, 60, 1);
	if (iParam5) {
		controls::disable_control_action(0, 75, 1);
	}
	controls::disable_control_action(0, 80, 1);
	if (!iParam6) {
		controls::disable_control_action(0, 69, 1);
		controls::disable_control_action(0, 70, 1);
		controls::disable_control_action(0, 68, 1);
	}
	controls::disable_control_action(0, 74, 1);
	controls::disable_control_action(0, 86, 1);
	controls::disable_control_action(0, 81, 1);
	controls::disable_control_action(0, 82, 1);
	controls::disable_control_action(0, 138, 1);
	controls::disable_control_action(0, 136, 1);
	controls::disable_control_action(0, 114, 1);
	controls::disable_control_action(0, 107, 1);
	controls::disable_control_action(0, 110, 1);
	controls::disable_control_action(0, 89, 1);
	controls::disable_control_action(0, 89, 1);
	controls::disable_control_action(0, 87, 1);
	controls::disable_control_action(0, 88, 1);
	controls::disable_control_action(0, 113, 1);
	controls::disable_control_action(0, 115, 1);
	controls::disable_control_action(0, 116, 1);
	controls::disable_control_action(0, 117, 1);
	controls::disable_control_action(0, 118, 1);
	controls::disable_control_action(0, 119, 1);
	controls::disable_control_action(0, 131, 1);
	controls::disable_control_action(0, 132, 1);
	controls::disable_control_action(0, 123, 1);
	controls::disable_control_action(0, 126, 1);
	controls::disable_control_action(0, 129, 1);
	controls::disable_control_action(0, 130, 1);
	controls::disable_control_action(0, 133, 1);
	controls::disable_control_action(0, 134, 1);
	cam::_0x17FCA7199A530203();
	func_31(iParam0);
	if (gameplay::get_game_timer() - Global_29 > 500) {
		vehicle::_set_vehicle_halt(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = gameplay::get_game_timer();
	if (!entity::is_entity_dead(iParam0, 0)) {
		if (gameplay::absf(entity::get_entity_speed(iParam0)) <= fParam3) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x1FF0
void func_31(int iParam0) {
	if (vehicle::_get_has_vehicle_got_rocket_boost(iParam0)) {
		if (vehicle::_is_vehicle_rocket_boost_active(iParam0)) {
			vehicle::_set_rocket_boost_active(iParam0, 0);
		}
	}
}

// Position - 0x2011
void func_32(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0) {
		player::special_ability_deactivate_fast(player::player_id());
		player::set_all_random_peds_flee(player::player_id(), 1);
		player::set_police_ignore_player(player::player_id(), 1);
		func_39(1);
		ui::_0xA8FDB297A8D25FBA();
		ui::_0xFDB423997FA30340();
		if (Global_14443.f_1 > 3) {
			if (audio::is_mobile_phone_call_ongoing()) {
				audio::stop_scripted_conversation(0);
			}
			if (!func_25()) {
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_38(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		G_DisableMessagesAndCalls1 = 1;
	}
	else {
		func_39(0);
		ui::_0xE1CD1E48E025E661();
		Global_55828 = 0;
		if (iParam1) {
			graphics::_0x03FC694AE06C5A20();
		}
		player::set_all_random_peds_flee(player::player_id(), 0);
		player::set_police_ignore_player(player::player_id(), 0);
		func_38(0, iParam3, iParam2, 0);
		if (network::network_is_game_in_progress()) {
			if (!ped::is_ped_injured(player::player_ped_id()) && !func_36(player::player_id()) &&
				!func_34(player::player_id(), 0) && !func_33()) {
				entity::set_entity_invincible(player::player_ped_id(), 0);
			}
		}
		else if (!ped::is_ped_injured(player::player_ped_id()) && !func_36(player::player_id())) {
			entity::set_entity_invincible(player::player_ped_id(), 0);
		}
		G_DisableMessagesAndCalls1 = 0;
	}
}

// Position - 0x212A
bool func_33() { return gameplay::is_bit_set(Global_1591201[player::player_id() /*602*/].f_39.f_18, 14); }

// Position - 0x2147
bool func_34(int iParam0, int iParam1) {
	bool bVar0;

	if (iParam0 == player::player_id()) {
		bVar0 = func_35(-1, 0) == 8;
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

// Position - 0x2192
int func_35(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1) {
		iVar1 = func_8();
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

// Position - 0x21D3
int func_36(int iParam0) {
	if (func_34(iParam0, 0)) {
		return 1;
	}
	if (func_37()) {
		if (iParam0 == player::player_id()) {
			return 1;
		}
	}
	if (gameplay::is_bit_set(Global_2421664[iParam0 /*358*/].f_198, 2)) {
		return 1;
	}
	return 0;
}

// Position - 0x2215
bool func_37() { return gameplay::is_bit_set(Global_2359301, 3); }

// Position - 0x2226
int func_38(int iParam0, int iParam1, var uParam2, int iParam3) {
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

// Position - 0x2259
void func_39(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&G_SleepModeOnOn25, 13);
	}
	else {
		gameplay::clear_bit(&G_SleepModeOnOn25, 13);
	}
}

// Position - 0x227C
void func_40(vector3 vParam0, float *fParam3, float *fParam4) {
	bool bVar0;
	vector3 vVar1;
	float fVar4;

	bVar0 = false;
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		vVar1 = {entity::get_entity_coords(player::player_ped_id(), 1) - vParam0};
		fVar4 = gameplay::get_heading_from_vector_2d(vVar1.x, vVar1.y);
		if (func_41(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), fVar4, 15f)) {
			bVar0 = true;
		}
		vVar1 = {vParam0 - entity::get_entity_coords(player::player_ped_id(), 1)};
		fVar4 = gameplay::get_heading_from_vector_2d(vVar1.x, vVar1.y);
		if (func_41(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), fVar4, 15f)) {
			bVar0 = true;
		}
	}
	if (bVar0) {
		if (entity::get_entity_speed(player::player_ped_id()) > 30f) {
			*fParam3 = 6f * 4f;
		}
		else if (entity::get_entity_speed(player::player_ped_id()) > 20f) {
			*fParam3 = 6f * 3f;
		}
		else if (entity::get_entity_speed(player::player_ped_id()) > 10f) {
			*fParam3 = 6f * 2f;
		}
		else {
			*fParam3 = 6f;
		}
		*fParam4 = *fParam3 / 1.33f - 1f;
	}
	else {
		*fParam3 = 6f;
		*fParam4 = *fParam3 / 1.33f - 1f;
	}
}

// Position - 0x237D
bool func_41(int iParam0, float fParam1, float fParam2) {
	float fVar0;
	float fVar1;
	float fVar2;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		fVar0 = entity::get_entity_heading(iParam0);
		fVar2 = fParam1 - fParam2;
		if (fVar2 < 0f) {
			fVar2 += 360f;
		}
		fVar1 = fParam1 + fParam2;
		if (fVar1 >= 360f) {
			fVar1 -= 360f;
		}
		if (fVar1 > fVar2) {
			if (fVar0 < fVar1 && fVar0 > fVar2) {
				return true;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2) {
			return true;
		}
	}
	return false;
}

// Position - 0x2404
bool func_42(float fParam0, float fParam1, float fParam2) {
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

// Position - 0x2479
bool func_43(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (gameplay::is_minigame_in_progress()) {
		return false;
	}
	if (iParam0) {
		if (entity::is_entity_dead(player::player_ped_id(), 0)) {
			return false;
		}
	}
	iVar0 = 0;
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
			return false;
		}
		iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
		if (iParam0) {
			if (entity::is_entity_dead(iVar0, 0)) {
				return false;
			}
		}
		if (iParam2) {
			if (!entity::is_entity_dead(iVar0, 0)) {
				if (vehicle::get_ped_in_vehicle_seat(iVar0, -1, 0) != player::player_ped_id()) {
					return false;
				}
			}
		}
		if (!entity::is_entity_dead(iVar0, 0)) {
			if (entity::get_entity_upright_value(iVar0) < 0.95f || entity::get_entity_upright_value(iVar0) > 1.011f) {
				return false;
			}
		}
	}
	else if (iParam1) {
		return false;
	}
	if (!player::is_player_ready_for_cutscene(player::player_id())) {
		return false;
	}
	if (!player::can_player_start_mission(player::player_id())) {
		return false;
	}
	return true;
}

// Position - 0x255E
bool func_44(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_53(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_45(sParam2, iParam3, 0);
}

// Position - 0x25AC
int func_45(char *sParam0, int iParam1, int iParam2) {
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
					func_52();
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
		if (func_51(8, -1)) {
			return 0;
		}
		Global_15821 = {Global_15815};
		func_50();
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
				func_49();
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
				if (func_48()) {
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
			if (func_25()) {
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
			func_47();
			Global_15755 = iParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_46();
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
		func_52();
	}
	return 0;
}

// Position - 0x2878
void func_46() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69) {
		StringCopy(&Global_14613[iVar0 /*6*/], "", 24);
		iVar0++;
	}
	audio::stop_scripted_conversation(0);
	Global_15745 = 1;
}

// Position - 0x28AA
void func_47() {
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

// Position - 0x293F
bool func_48() {
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

// Position - 0x29D8
void func_49() {
	if (func_12(14)) {
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
		Global_14443 = func_10();
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

// Position - 0x2A7A
void func_50() {
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

// Position - 0x2AD2
bool func_51(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x2B0D
void func_52() {
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

// Position - 0x2B64
void func_53(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, var uParam5) {
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

// Position - 0x2BBA
bool func_54() {
	if (ped::is_ped_injured(iLocal_76)) {
		return true;
	}
	else if (func_153(iLocal_77)) {
		if (!entity::is_entity_at_entity(iLocal_76, iLocal_77, 10f, 10f, 10f, 0, 1, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x2BFE
void func_55() {
	float fVar0;
	int iVar1;
	bool bVar2;

	if (func_153(iLocal_77)) {
		fVar0 = vehicle::get_vehicle_engine_health(iLocal_77);
		if (fVar0 > 0f && fVar0 < 650f) {
			bVar2 = true;
		}
		else if (fVar0 > 650f && fVar0 < 950f) {
		}
		else {
			iVar1 = 1;
		}
		if (iVar1 && vehicle::are_all_vehicle_windows_intact(iLocal_77)) {
			sLocal_121 = sLocal_293;
		}
		else if (bVar2) {
			sLocal_121 = sLocal_292;
		}
		else {
			sLocal_121 = sLocal_291;
		}
	}
}

// Position - 0x2C79
void func_56(int *iParam0) { *iParam0 = -99; }

// Position - 0x2C87
int func_57(int iParam0, int iParam1, int iParam2) {
	iParam2 = iParam2;
	return func_58(iParam0, iParam1, 145);
}

// Position - 0x2C9D
int func_58(int iParam0, bool bParam1, int iParam2) {
	int iVar0;

	iVar0 = func_59(iParam0, !bParam1, 0);
	if (iParam2 != 145 && ui::does_blip_exist(iVar0) &&
		ui::does_text_label_exist(&Global_101700.f_27009[iParam2 /*29*/].f_3)) {
		ui::set_blip_name_from_text_file(iVar0, &Global_101700.f_27009[iParam2 /*29*/].f_3);
	}
	return iVar0;
}

// Position - 0x2CEF
int func_59(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	iVar0 = ui::add_blip_for_entity(iParam0);
	if (entity::is_entity_a_vehicle(iParam0)) {
		ui::set_blip_scale(iVar0, func_60(network::network_is_game_in_progress(), 1f, 1f));
		if (!iParam2) {
			ui::set_blip_as_friendly(iVar0, iParam1);
		}
		else {
			ui::set_blip_colour(iVar0, 2);
		}
	}
	else if (entity::is_entity_a_ped(iParam0)) {
		ui::set_blip_scale(iVar0, func_60(network::network_is_game_in_progress(), 0.7f, 0.7f));
		ui::set_blip_as_friendly(iVar0, iParam1);
	}
	else if (entity::is_entity_an_object(iParam0)) {
		ui::set_blip_scale(iVar0, func_60(network::network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

// Position - 0x2D93
var func_60(bool bParam0, float fParam1, float fParam2) {
	if (bParam0) {
		return fParam1;
	}
	return fParam2;
}

// Position - 0x2DAA
void func_61(int *iParam0) {
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

// Position - 0x2E18
int func_62(int iParam0, var *uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char *sParam7,
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

// Position - 0x2FB5
void func_63(int *iParam0, int iParam1, int iParam2) {
	char *sVar0;

	if (network::network_is_game_in_progress()) {
		if (gameplay::is_bit_set(Global_2494199.f_4449, 26)) {
			return;
		}
	}
	if (cam::is_gameplay_hint_active()) {
		cam::stop_gameplay_hint(iParam2);
		graphics::_stop_screen_effect("FocusIn");
		audio::stop_audio_scene("HINT_CAM_SCENE");
		if (iParam0->f_11) {
			graphics::_start_screen_effect("FocusOut", 0, 0);
			audio::play_sound_frontend(-1, "FocusOut", "HintCamSounds", 1);
			iParam0->f_11 = 0;
		}
	}
	cam::set_cinematic_button_active(1);
	iParam0->f_1 = 0;
	*iParam0 = 0;
	iParam0->f_2 = -1;
	iParam0->f_8 = 0;
	iParam0->f_5 = 0;
	iParam0->f_6 = 0;
	sVar0 = iParam1;
	if (gameplay::is_string_null(sVar0)) {
		if (!network::network_is_game_in_progress()) {
			sVar0 = "CMN_HINT";
		}
		else {
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!gameplay::is_string_null(iParam0->f_3)) {
		if (func_64(iParam0->f_3)) {
			ui::clear_help(1);
		}
	}
	if (!gameplay::is_string_null(sVar0)) {
		if (func_64(sVar0)) {
			ui::clear_help(1);
		}
	}
}

// Position - 0x3092
bool func_64(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0x30A5
void func_65() {
	if (!ped::is_ped_injured(iLocal_76)) {
		ped::set_ped_combat_attributes(iLocal_76, 2, 0);
		ped::set_ped_combat_attributes(iLocal_76, 6, 0);
		ped::set_ped_combat_attributes(iLocal_76, 3, 1);
		ped::set_ped_combat_attributes(iLocal_76, 1, 0);
		ai::task_combat_ped(iLocal_76, player::player_ped_id(), 0, 16);
		ped::set_blocking_of_non_temporary_events(iLocal_76, 0);
		streaming::set_model_as_no_longer_needed(entity::get_entity_model(iLocal_76));
	}
	else {
		streaming::set_model_as_no_longer_needed(entity::get_entity_model(iLocal_76));
	}
	if (func_153(iLocal_77)) {
		vehicle::set_vehicle_doors_locked(iLocal_77, 1);
	}
}

// Position - 0x3112
int func_66() {
	if (func_153(iLocal_77)) {
		if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_77, 40f, 40f, 10f, 0, 1, 0)) {
			if (iLocal_81) {
				if (!ped::is_ped_injured(iLocal_76)) {
					if (!iLocal_298) {
						if (!entity::has_entity_been_damaged_by_any_vehicle(iLocal_77)) {
							ai::task_drive_by(iLocal_76, player::player_ped_id(), 0, 0f, 0f, 0f, 40f, 100, 1,
											  -753768974);
							iLocal_298 = 1;
						}
					}
					if (gameplay::get_game_timer() > iLocal_303 + 7000) {
						if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_77, 20f, 20f, 10f, 0, 1, 0)) {
							if (func_44(&Local_122, cLocal_294, sLocal_289, 4, 0, 0, 0)) {
								iLocal_303 = gameplay::get_game_timer();
							}
						}
					}
					entity::clear_entity_last_damage_entity(iLocal_77);
					weapon::clear_entity_last_weapon_damage(iLocal_77);
					iLocal_81 = 0;
				}
			}
			if (entity::has_entity_been_damaged_by_entity(iLocal_77, player::player_ped_id(), 1)) {
				if (!ped::is_ped_injured(iLocal_76)) {
					func_44(&Local_122, cLocal_294, sLocal_289, 4, 0, 0, 0);
				}
				iLocal_82++;
				iLocal_81 = 1;
			}
			if (iLocal_82 > 10) {
				return 1;
			}
		}
		else {
			iLocal_298 = 0;
			iLocal_81 = 0;
		}
	}
	return 0;
}

// Position - 0x321E
int func_67() {
	if (func_153(iLocal_77)) {
		if (vehicle::is_vehicle_tyre_burst(iLocal_77, 0, 0) || vehicle::is_vehicle_tyre_burst(iLocal_77, 1, 0) ||
			vehicle::is_vehicle_tyre_burst(iLocal_77, 4, 0) || vehicle::is_vehicle_tyre_burst(iLocal_77, 5, 0)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x3269
void func_68() {
	if (func_153(iLocal_77) && ui::does_blip_exist(iLocal_64)) {
		func_69(&iLocal_330, iLocal_77, 0, 0, 1, 1, 1);
	}
}

// Position - 0x3293
void func_69(int *iParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_70(iParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, iParam4, iParam5, iParam6);
}

// Position - 0x32B0
void func_70(int *iParam0, int iParam1, vector3 vParam2, char *sParam5, int iParam6, bool bParam7, var uParam8,
			 bool bParam9) {
	func_71(iParam0, iParam1, vParam2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

// Position - 0x32CE
void func_71(int *iParam0, int iParam1, vector3 vParam2, char *sParam5, int iParam6, bool bParam7, var uParam8,
			 bool bParam9) {
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
		func_63(iParam0, 0, 0);
	}
	iParam0->f_6 = 2;
	func_72(iParam0, iParam1, vParam2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

// Position - 0x3306
void func_72(int *iParam0, int iParam1, vector3 vParam2, char *sParam5, int iParam6, bool bParam7, var uParam8,
			 bool bParam9) {
	int iVar0;
	int iVar1;

	if (iParam0->f_1 && cam::is_gameplay_hint_active()) {
		if (gameplay::get_game_timer() >= iParam0->f_8 + iParam0->f_9) {
			iParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (gameplay::is_string_null(iVar0)) {
		if (!network::network_is_game_in_progress()) {
			iVar0 = "CMN_HINT";
		}
		else {
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_64(iVar0)) {
		func_90();
	}
	if (func_89(iParam1) && entity::is_entity_visible(iParam1)) {
		iVar1 = 0;
		if (entity::is_entity_a_ped(iParam1)) {
			ped::_0x7D7A2E43E74E2EB8(entity::get_ped_index_from_entity_index(iParam1));
			ped::get_ped_flood_invincibility(entity::get_ped_index_from_entity_index(iParam1), 1);
			if (ped::is_tracked_ped_visible(entity::get_ped_index_from_entity_index(iParam1))) {
				iVar1 = 1;
			}
		}
		else if (entity::is_entity_a_vehicle(iParam1)) {
			vehicle::track_vehicle_visibility(entity::get_vehicle_index_from_entity_index(iParam1));
			if (vehicle::is_vehicle_visible(entity::get_vehicle_index_from_entity_index(iParam1))) {
				iVar1 = 1;
			}
		}
		else if (entity::is_entity_an_object(iParam1)) {
			object::track_object_visibility(entity::get_object_index_from_entity_index(iParam1));
			if (object::is_object_visible(entity::get_object_index_from_entity_index(iParam1))) {
				iVar1 = 1;
			}
		}
		if (!cam::is_gameplay_hint_active()) {
			if (func_84(iParam0, bParam7, bParam9, 0)) {
				func_80(iParam0, iParam1, vParam2, iParam6);
			}
			if (*iParam0) {
				*iParam0 = 0;
			}
			else if (iParam0->f_6 == 2) {
				if (func_77(iVar0)) {
					if (gameplay::is_string_null(iParam0->f_3) && !gameplay::is_string_null(iVar0) &&
						ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						if (iVar1 && !ui::is_help_message_being_displayed() && uParam8) {
							if (!func_64(iVar0)) {
								func_76(iVar0, -1);
								iParam0->f_3 = iVar0;
								if (gameplay::are_strings_equal("CMN_HINT", iVar0)) {
									func_75(1);
								}
							}
						}
					}
				}
			}
			else if (func_77(iVar0)) {
				if (gameplay::is_string_null(iParam0->f_3) && !gameplay::is_string_null(iVar0)) {
					if (entity::is_entity_on_screen(iParam1) && iVar1 && !ui::is_help_message_being_displayed() &&
						uParam8) {
						if (!func_64(iVar0)) {
							func_76(iVar0, -1);
							iParam0->f_3 = iVar0;
							if (gameplay::are_strings_equal("CMN_HINT", iVar0)) {
								func_75(1);
							}
						}
					}
				}
			}
		}
		else {
			if (!gameplay::is_string_null(sParam5)) {
				if (func_64(sParam5)) {
					ui::clear_help(1);
				}
			}
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				if (ped::is_ped_in_any_boat(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(3) == 3 || cam::_0xEE778F8C7E1142E2(3) == 4) {
						func_63(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_heli(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(6) == 3 || cam::_0xEE778F8C7E1142E2(6) == 4) {
						func_63(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_plane(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(4) == 3 || cam::_0xEE778F8C7E1142E2(4) == 4) {
						func_63(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_sub(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(5) == 3 || cam::_0xEE778F8C7E1142E2(5) == 4) {
						func_63(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_on_any_bike(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(2) == 3 || cam::_0xEE778F8C7E1142E2(2) == 4) {
						func_63(iParam0, iVar0, 1);
					}
				}
				else if (cam::get_follow_vehicle_cam_view_mode() == 3 || cam::get_follow_vehicle_cam_view_mode() == 4) {
					func_63(iParam0, iVar0, 1);
				}
			}
			if (!func_84(iParam0, bParam7, bParam9, 0)) {
				if (!*iParam0 && !iParam0->f_1 && !func_74(iParam0)) {
					func_73(iParam0);
				}
			}
		}
	}
	else {
		func_63(iParam0, iVar0, 0);
	}
}

// Position - 0x3673
void func_73(int *iParam0) {
	if (func_89(player::player_ped_id())) {
		ai::task_clear_look_at(player::player_ped_id());
	}
	if (cam::is_gameplay_hint_active()) {
		cam::set_cinematic_button_active(1);
		cam::stop_gameplay_hint(0);
		audio::stop_audio_scene("HINT_CAM_SCENE");
		graphics::_stop_screen_effect("FocusIn");
		if (iParam0->f_11) {
			graphics::_start_screen_effect("FocusOut", 0, 0);
			audio::play_sound_frontend(-1, "FocusOut", "HintCamSounds", 1);
			iParam0->f_11 = 0;
		}
	}
	iParam0->f_2 = -1;
	*iParam0 = 1;
}

// Position - 0x36DC
bool func_74(var *uParam0) {
	int iVar0;

	if (uParam0->f_2 > 0) {
		iVar0 = uParam0->f_10 / 2;
		if (uParam0->f_2 + iVar0 > gameplay::get_game_timer()) {
			return true;
		}
	}
	return false;
}

// Position - 0x3707
int func_75(int iParam0) {
	switch (Global_35781) {
	case 0:
	case 3:
		if (iParam0) {
			Global_101700.f_9008.f_100++;
		}
		return Global_101700.f_9008.f_100;

	case 4:
		if (iParam0) {
			Global_101700.f_9008.f_101++;
		}
		return Global_101700.f_9008.f_101;

	case 5:
	case 15:
		if (iParam0) {
			Global_101700.f_9008.f_102++;
		}
		return Global_101700.f_9008.f_102;

	default: break;
	}
	return 3;
}

// Position - 0x37B1
void func_76(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x37C8
bool func_77(char *sParam0) {
	if (!func_78(1, 1, 0)) {
		if (!gameplay::is_string_null_or_empty(sParam0) && func_64(sParam0) || func_64("CMN_HINT")) {
			ui::clear_help(1);
		}
		return false;
	}
	switch (Global_35781) {
	case 0:
	case 3:
		if (func_75(0) < 3) {
			return true;
		}
		break;

	case 4:
		if (func_75(0) < 1) {
			return true;
		}
		break;

	case 5:
	case 15:
		if (func_75(0) < 1) {
			return true;
		}
		break;

	default: break;
	}
	return false;
}

// Position - 0x3861
int func_78(int iParam0, int iParam1, int iParam2) {
	if (iParam0) {
		if (!player::is_player_control_on(player::player_id())) {
			return 0;
		}
	}
	if (iParam2) {
		return 1;
	}
	if (streaming::is_player_switch_in_progress()) {
		return 0;
	}
	if (func_27(0)) {
		return 0;
	}
	if (func_79()) {
		return 0;
	}
	if (network::_network_is_text_chat_active()) {
		return 0;
	}
	if (G_DisableMessagesAndCalls2) {
		return 0;
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("appinternet")) > 0) {
		return 0;
	}
	if (Global_53003) {
		return 0;
	}
	if (iParam1) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
			if (ped::is_ped_in_any_boat(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(3) == 3 || cam::_0xEE778F8C7E1142E2(3) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_in_any_heli(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(6) == 3 || cam::_0xEE778F8C7E1142E2(6) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_in_any_plane(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(4) == 3 || cam::_0xEE778F8C7E1142E2(4) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_in_any_sub(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(5) == 3 || cam::_0xEE778F8C7E1142E2(5) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_on_any_bike(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(2) == 3 || cam::_0xEE778F8C7E1142E2(2) == 4) {
					return 0;
				}
			}
			else if (cam::get_follow_vehicle_cam_view_mode() == 3 || cam::get_follow_vehicle_cam_view_mode() == 4) {
				return 0;
			}
			if (cam::is_gameplay_cam_looking_behind()) {
				return 0;
			}
		}
	}
	return 1;
}

// Position - 0x39DD
bool func_79() { return gameplay::get_game_timer() <= Global_17290.f_5745 + 100; }

// Position - 0x39F2
void func_80(int *iParam0, int iParam1, vector3 vParam2, int iParam5) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (entity::is_entity_dead(iParam1, 0)) {
		func_63(iParam0, 0, 0);
	}
	if (func_83(vParam2, 0f, 0f, 0f, 0)) {
		if (entity::is_entity_a_ped(iParam1)) {
			iVar0 = entity::get_ped_index_from_entity_index(iParam1);
			if (!ped::is_ped_in_any_vehicle(iVar0, 0)) {
				if (ped::is_ped_a_player(iVar0)) {
					if (!func_81()) {
						vParam2 = {0f, 0f, 1f};
					}
				}
				else if (ped::is_ped_male(iVar0)) {
					vParam2 = {0f, 0f, 1f};
				}
			}
		}
	}
	cam::set_cinematic_button_active(0);
	iVar1 = iParam0->f_9;
	iVar2 = iParam0->f_10;
	if (iParam5 == 1726668277) {
		if (iVar1 < 1500) {
			iVar1 = 1500;
		}
		if (iVar2 < 1500) {
			iVar2 = 1500;
		}
	}
	cam::set_gameplay_entity_hint(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	ai::task_look_at_entity(player::player_ped_id(), iParam1, -1, iVar3, iVar4);
	graphics::_start_screen_effect("FocusIn", 0, 0);
	audio::start_audio_scene("HINT_CAM_SCENE");
	audio::play_sound_frontend(-1, "FocusIn", "HintCamSounds", 1);
	iParam0->f_11 = 1;
	iParam0->f_8 = gameplay::get_game_timer();
	iParam0->f_1 = 1;
	*iParam0 = 0;
}

// Position - 0x3AF7
int func_81() { return func_82(player::player_id()); }

// Position - 0x3B07
int func_82(int iParam0) {
	if (entity::get_entity_model(player::get_player_ped(iParam0)) == joaat("mp_f_freemode_01")) {
		return 1;
	}
	return 0;
}

// Position - 0x3B26
bool func_83(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x3B6D
bool func_84(var *uParam0, bool bParam1, bool bParam2, int iParam3) {
	if (uParam0->f_1) {
		if (gameplay::get_game_timer() >= uParam0->f_8 + uParam0->f_9) {
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5) {
	case 0:
		uParam0->f_7 = 0;
		if (uParam0->f_6 == 0) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				if (func_88(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (func_87(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		else if (uParam0->f_6 == 1) {
			if (func_87(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		else if (uParam0->f_6 == 2) {
			if (func_88(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		if (func_74(uParam0)) {
			uParam0->f_7 = 1;
			uParam0->f_5 = 4;
		}
		break;

	case 1:
		if (gameplay::get_game_timer() - uParam0->f_4 <= 500) {
			if (uParam0->f_6 == 0) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
					if (!func_88(bParam1, bParam2, iParam3)) {
						uParam0->f_4 = gameplay::get_game_timer();
						uParam0->f_5 = 3;
					}
				}
				else if (!func_87(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
			else if (uParam0->f_6 == 1) {
				if (!func_87(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
			else if (uParam0->f_6 == 2) {
				if (!func_88(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
		}
		else {
			uParam0->f_5 = 2;
		}
		break;

	case 2:
		if (uParam0->f_6 == 0) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				if (!func_88(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (!func_87(bParam1, bParam2, iParam3)) {
				uParam0->f_5 = 0;
			}
		}
		else if (uParam0->f_6 == 1) {
			if (!func_87(bParam1, bParam2, iParam3) || ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				uParam0->f_5 = 0;
			}
		}
		else if (uParam0->f_6 == 2) {
			if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
				ai::get_is_task_active(player::player_ped_id(), 2)) {
				uParam0->f_5 = 0;
			}
			else if (!func_88(bParam1, bParam2, iParam3)) {
				uParam0->f_5 = 0;
			}
		}
		break;

	case 3:
		if (gameplay::get_game_timer() - uParam0->f_4 > 500) {
			if (uParam0->f_6 == 0) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
					if (func_86(bParam1, bParam2, iParam3)) {
						uParam0->f_5 = 0;
					}
				}
				else if (func_85(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) || func_85(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2) {
				if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
					ai::get_is_task_active(player::player_ped_id(), 2)) {
					uParam0->f_5 = 0;
				}
				else if (func_86(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
		}
		break;

	case 4:
		if (!func_74(uParam0)) {
			uParam0->f_5 = 0;
		}
		break;
	}
	if (!func_78(bParam1, bParam2, iParam3)) {
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7) {
		func_90();
		return true;
	}
	else {
		return false;
	}
	return false;
}

// Position - 0x3ED9
bool func_85(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_78(bParam0, bParam1, bParam2)) {
		return false;
	}
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!player::is_player_targetting_anything(player::player_id())) {
			controls::disable_control_action(0, 140, 1);
			controls::disable_control_action(0, 80, 1);
			if (controls::is_disabled_control_just_released(0, 80)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x3F2B
bool func_86(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_78(bParam0, bParam1, bParam2)) {
		return false;
	}
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		controls::disable_control_action(0, 80, 1);
		if (cam::is_follow_vehicle_cam_active()) {
			if (controls::is_disabled_control_just_released(0, 80)) {
				cam::set_cinematic_button_active(0);
				return true;
			}
		}
	}
	return false;
}

// Position - 0x3F74
bool func_87(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_78(bParam0, bParam1, bParam2)) {
		return false;
	}
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!player::is_player_targetting_anything(player::player_id())) {
			controls::disable_control_action(0, 140, 1);
			controls::disable_control_action(0, 80, 1);
			if (controls::is_disabled_control_pressed(0, 80) && gameplay::get_game_timer() > Global_116) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x3FD3
bool func_88(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_78(bParam0, bParam1, bParam2)) {
		return false;
	}
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		controls::disable_control_action(0, 80, 1);
		if (cam::is_follow_vehicle_cam_active()) {
			if (controls::is_disabled_control_pressed(0, 80) && gameplay::get_game_timer() > Global_116) {
				cam::set_cinematic_button_active(0);
				return true;
			}
		}
	}
	return false;
}

// Position - 0x402B
bool func_89(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (entity::is_entity_a_vehicle(iParam0)) {
			if (vehicle::is_vehicle_driveable(entity::get_vehicle_index_from_entity_index(iParam0), 0)) {
				return true;
			}
		}
		else if (entity::is_entity_a_ped(iParam0)) {
			if (!ped::is_ped_injured(entity::get_ped_index_from_entity_index(iParam0))) {
				return true;
			}
		}
		else if (entity::is_entity_an_object(iParam0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x4086
void func_90() { gameplay::set_bit(&G_SleepModeOffOn11, 4); }

// Position - 0x4096
int func_91(int iParam0, int iParam1, int iParam2) {
	iParam2 = iParam2;
	return func_92(iParam0, iParam1, 0);
}

// Position - 0x40AB
int func_92(int iParam0, bool bParam1, int iParam2) { return func_59(iParam0, !bParam1, iParam2); }

// Position - 0x40BE
bool func_93() {
	float fVar0;

	fVar0 = 300f;
	if (iLocal_301 == 1) {
		fVar0 = 220f;
	}
	if (func_153(iLocal_77)) {
		func_94(iLocal_64, iLocal_77, fVar0, 1061158912, 0);
		if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_77, fVar0, fVar0, 100f, 0, 1, 0)) {
			return true;
		}
		else if (!entity::is_entity_occluded(iLocal_77)) {
			return true;
		}
	}
	return false;
}

// Position - 0x4123
void func_94(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4) {
	int iVar0;
	float fVar1;
	float fVar2;

	fVar2 = fParam2 * fParam3;
	if (ui::does_blip_exist(iParam0)) {
		if (entity::does_entity_exist(iParam1) && entity::does_entity_exist(player::player_ped_id()) &&
			!ped::is_ped_injured(player::player_ped_id())) {
			if (entity::is_entity_a_vehicle(iParam1)) {
				if (vehicle::is_vehicle_driveable(entity::get_vehicle_index_from_entity_index(iParam1), 0)) {
					fVar1 = gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1),
																  entity::get_entity_coords(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4) {
						iVar0 = system::round(255f * (fVar1 - fVar2) / (fParam2 - fVar2));
						if (iVar0 <= 0) {
							iVar0 = 0;
						}
						if (iVar0 >= 255) {
							iVar0 = 255;
						}
						ui::set_blip_flashes(iParam0, 1);
						ui::set_blip_alpha(iParam0, 255 - iVar0);
					}
					else {
						ui::set_blip_flashes(iParam0, 0);
						ui::set_blip_alpha(iParam0, 255);
					}
				}
			}
			else if (entity::is_entity_a_ped(iParam1)) {
				if (!ped::is_ped_injured(entity::get_ped_index_from_entity_index(iParam1))) {
					fVar1 = gameplay::get_distance_between_coords(entity::get_entity_coords(player::player_ped_id(), 1),
																  entity::get_entity_coords(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4) {
						iVar0 = system::round(255f * (fVar1 - fVar2) / (fParam2 - fVar2));
						if (iVar0 <= 0) {
							iVar0 = 0;
						}
						if (iVar0 >= 255) {
							iVar0 = 255;
						}
						ui::set_blip_flashes(iParam0, 1);
						ui::set_blip_alpha(iParam0, 255 - iVar0);
					}
					else {
						ui::set_blip_flashes(iParam0, 0);
						ui::set_blip_alpha(iParam0, 255);
					}
				}
			}
		}
	}
}

// Position - 0x427C
int func_95() {
	if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_77, 0) && vehicle::is_vehicle_stuck_on_roof(iLocal_77)) {
		return 1;
	}
	return 0;
}

// Position - 0x42A2
void func_96() {
	if (!ped::is_ped_injured(iLocal_75) && !ped::is_ped_injured(player::player_ped_id())) {
		switch (iLocal_50) {
		case 0:
			iLocal_58 = iLocal_58;
			if (!ped::is_ped_in_any_vehicle(iLocal_75, 0)) {
				if (iLocal_301 == 1) {
					if (func_103()) {
						iLocal_50 = 1;
					}
				}
				else if (!ped::is_ped_ragdoll(iLocal_75) && !ai::is_ped_getting_up(iLocal_75)) {
					ai::task_look_at_entity(iLocal_75, player::player_ped_id(), -1, 0, 2);
					if (entity::is_entity_in_angled_area(player::player_ped_id(), -539.4566f, -2094.491f, 6.967173f,
														 -468.4296f, -2152.549f, 18.99127f, 26.75f, 0, 1, 0)) {
						ai::task_achieve_heading(iLocal_75, 345f, 0);
						iLocal_50 = 1;
					}
					else {
						ai::open_sequence_task(&iLocal_78);
						ai::task_play_anim(0, sLocal_84, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
						ai::task_play_anim(0, sLocal_84, "arms_waving", 8f, -8f, -1, 0, 0, 0, 0, 0);
						ai::task_play_anim(0, sLocal_84, "arms_waving", 8f, -2f, -1, 0, 0, 0, 0, 0);
						ai::close_sequence_task(iLocal_78);
						ai::task_perform_sequence(iLocal_75, iLocal_78);
						ai::clear_sequence_task(&iLocal_78);
						iLocal_304 = gameplay::get_game_timer();
						iLocal_50 = 2;
					}
				}
			}
			break;

		case 1:
			if (iLocal_301 == 1) {
				ai::task_look_at_entity(iLocal_75, player::player_ped_id(), -1, 0, 2);
				if (ai::get_script_task_status(iLocal_75, 242628503) != 1) {
					ai::open_sequence_task(&iLocal_78);
					ai::task_play_anim(0, sLocal_84, sLocal_86, 4f, -2f, -1, 0, 0, 0, 0, 0);
					ai::close_sequence_task(iLocal_78);
					ai::task_perform_sequence(iLocal_75, iLocal_78);
					ai::clear_sequence_task(&iLocal_78);
					iLocal_50 = 2;
				}
			}
			else if (ped::is_ped_facing_ped(iLocal_75, player::player_ped_id(), 60f)) {
				if (ai::get_script_task_status(iLocal_75, 242628503) != 1) {
					ai::open_sequence_task(&iLocal_78);
					ai::task_play_anim(0, sLocal_84, "arms_waving", 2f, -8f, -1, 0, 0, 0, 0, 0);
					if (bLocal_61 == 0) {
						ai::task_play_anim(0, sLocal_84, "pointing", 8f, -4f, -1, 0, 0, 0, 0, 0);
					}
					ai::close_sequence_task(iLocal_78);
					ai::task_perform_sequence(iLocal_75, iLocal_78);
					ai::clear_sequence_task(&iLocal_78);
					iLocal_50 = 2;
				}
			}
			if (func_103()) {
				if (func_102()) {
				}
			}
			break;

		case 2:
			if (func_103()) {
				if (func_102()) {
				}
			}
			if (iLocal_301 == 2) {
				if (!ped::is_ped_facing_ped(iLocal_75, player::player_ped_id(), 60f) &&
					!func_100(iLocal_75, -875674219)) {
					ai::task_turn_ped_to_face_entity(iLocal_75, player::player_ped_id(), 0);
				}
				if (func_99(iLocal_75, player::player_ped_id(), 1) < 25f) {
					if (!func_18()) {
						if (gameplay::get_game_timer() - iLocal_304 > 6000) {
							func_98();
						}
					}
				}
			}
			if (ai::get_script_task_status(iLocal_75, 242628503) != 1 && !func_100(iLocal_75, -875674219)) {
				if (iLocal_301 == 1) {
					vLocal_93 = {-2260.1f, 4274.24f, 44.9f};
					if (!entity::is_entity_at_coord(iLocal_75, vLocal_93, 1.5f, 1.5f, 1.5f, 0, 1, 0)) {
						if (ai::get_script_task_status(iLocal_75, 242628503) == 7) {
							ai::open_sequence_task(&iLocal_78);
							ai::task_go_straight_to_coord(0, vLocal_93, 1f, 20000, fLocal_106, 1056964608);
							ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
							ai::close_sequence_task(iLocal_78);
							ai::task_perform_sequence(iLocal_75, iLocal_78);
							ai::clear_sequence_task(&iLocal_78);
						}
					}
					else if (!entity::is_entity_playing_anim(iLocal_75, sLocal_83, "waiting", 3)) {
						ai::task_play_anim(iLocal_75, sLocal_83, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
						if (func_99(iLocal_75, player::player_ped_id(), 1) < 25f) {
							func_98();
						}
					}
				}
				else if (!entity::is_entity_playing_anim(iLocal_75, sLocal_83, "waiting", 3)) {
					ai::task_play_anim(iLocal_75, sLocal_83, "waiting", 4f, -4f, -1, 0, 0, 0, 0, 0);
				}
			}
			break;

		case 3:
			if (!ped::is_ped_headtracking_ped(iLocal_75, player::player_ped_id())) {
				ai::task_look_at_entity(iLocal_75, player::player_ped_id(), -1, 0, 2);
			}
			if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_75, 40f, 40f, 10f, 0, 1, 0) &&
				!entity::is_entity_at_entity(player::player_ped_id(), iLocal_75, 9f, 9f, 9f, 0, 1, 0)) {
				if (func_97()) {
					if (iLocal_59) {
						if (iLocal_301 == 1) {
							ai::open_sequence_task(&iLocal_78);
							ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
							ai::task_play_anim(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0,
											   0);
							ai::close_sequence_task(iLocal_78);
							ai::task_perform_sequence(iLocal_75, iLocal_78);
							ai::clear_sequence_task(&iLocal_78);
							iLocal_59 = 0;
							iLocal_304 = gameplay::get_game_timer();
						}
						else {
							ai::open_sequence_task(&iLocal_78);
							ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
							ai::task_play_anim(0, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 2f, -2f, -1, 0, 0, 0, 0,
											   0);
							ai::close_sequence_task(iLocal_78);
							ai::task_perform_sequence(iLocal_75, iLocal_78);
							ai::clear_sequence_task(&iLocal_78);
							iLocal_59 = 0;
							iLocal_304 = gameplay::get_game_timer();
						}
					}
					else if (!entity::is_entity_playing_anim(iLocal_75, "RANDOM@CAR_THIEF@WAITING_IG_4", "idle_a", 3)) {
						if (ai::get_script_task_status(iLocal_75, 242628503) == 7) {
							if (!ped::is_ped_facing_ped(iLocal_75, player::player_ped_id(), 45f)) {
								ai::open_sequence_task(&iLocal_78);
								ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
								ai::close_sequence_task(iLocal_78);
								ai::task_perform_sequence(iLocal_75, iLocal_78);
								ai::clear_sequence_task(&iLocal_78);
							}
							else if (gameplay::get_game_timer() - iLocal_304 > 6000) {
								iLocal_59 = 1;
							}
						}
					}
					else if (!ped::is_ped_facing_ped(iLocal_75, player::player_ped_id(), 70f)) {
						ai::clear_ped_tasks(iLocal_75);
						ai::open_sequence_task(&iLocal_78);
						ai::task_turn_ped_to_face_entity(0, player::player_ped_id(), 0);
						ai::close_sequence_task(iLocal_78);
						ai::task_perform_sequence(iLocal_75, iLocal_78);
						ai::clear_sequence_task(&iLocal_78);
						iLocal_304 += 4000;
					}
				}
				if (!ped::is_ped_injured(iLocal_76)) {
					ai::task_smart_flee_ped(iLocal_76, player::player_ped_id(), 150f, -1, 0, 0);
					ped::set_ped_keep_task(iLocal_76, 1);
					entity::set_ped_as_no_longer_needed(&iLocal_76);
				}
			}
			else {
				if (iLocal_301 == 1) {
					vLocal_93 = {-2260.1f, 4274.24f, 44.9f};
				}
				else if (bLocal_61) {
					vLocal_93 = {-483.4162f, -2160.874f, 8.359f};
				}
				else {
					vLocal_93 = {-485.9905f, -2153.542f, 8.1999f};
				}
				if (!entity::is_entity_at_coord(iLocal_75, vLocal_93, 4f, 4f, 4f, 0, 1, 0)) {
					if (ai::get_script_task_status(iLocal_75, 2106541073) == 7) {
						ai::task_go_straight_to_coord(iLocal_75, vLocal_93, 1f, 20000, fLocal_106, 1056964608);
					}
				}
				else if (!ped::is_ped_facing_ped(iLocal_75, player::player_ped_id(), 50f)) {
					ai::task_turn_ped_to_face_entity(iLocal_75, player::player_ped_id(), -1);
				}
				iLocal_59 = 1;
			}
			break;

		case 4: break;
		}
	}
	if (func_152(1)) {
		if (!ped::is_ped_injured(iLocal_75)) {
			ai::task_smart_flee_ped(iLocal_75, player::player_ped_id(), 150f, -1, 0, 0);
			ped::set_ped_keep_task(iLocal_75, 1);
			system::wait(0);
		}
		func_222();
	}
}

// Position - 0x490E
bool func_97() {
	if (!iLocal_296) {
		if (func_44(&Local_122, cLocal_294, sLocal_290, 4, 0, 0, 0)) {
			iLocal_296 = 1;
		}
	}
	return iLocal_296;
}

// Position - 0x4937
int func_98() {
	if (!iLocal_297) {
		if (func_44(&Local_122, cLocal_294, sLocal_288, 4, 0, 0, 0)) {
			iLocal_297 = 1;
		}
	}
	return iLocal_297;
}

// Position - 0x4960
float func_99(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x49BE
int func_100(int iParam0, int iParam1) {
	if (func_101(iParam0)) {
		if (ai::get_script_task_status(iParam0, iParam1) == 1 || ai::get_script_task_status(iParam0, iParam1) == 0) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x49F1
bool func_101(int iParam0) {
	if (func_3(iParam0)) {
		if (!ped::is_ped_injured(iParam0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x4A11
bool func_102() {
	if (!iLocal_295) {
		if (system::timera() > 2000) {
			if (func_44(&Local_122, cLocal_294, sLocal_287, 4, 0, 0, 0)) {
				iLocal_295 = 1;
			}
		}
	}
	return iLocal_295;
}

// Position - 0x4A44
bool func_103() {
	if (!ped::is_ped_injured(iLocal_76) && !ped::is_ped_injured(iLocal_75)) {
		if (func_153(iLocal_77)) {
			if (ped::is_ped_sitting_in_vehicle(iLocal_76, iLocal_77)) {
				return true;
			}
		}
	}
	else {
		return true;
	}
	return false;
}

// Position - 0x4A82
void func_104(var *uParam0, int iParam1) {
	if ((*uParam0)[iParam1 /*10*/].f_7 == 1) {
		(*uParam0)[iParam1 /*10*/].f_7 = 0;
	}
}

// Position - 0x4A9F
void func_105(int iParam0) {
	int iVar0;

	if (iLocal_301 == 2) {
		iVar0 = func_10();
		switch (iVar0) {
		case 0:
			while (!func_128(319357731, 6, 1, 144, 7200000, 10000, -1, 199, -1, 0)) {
				if (func_3(iLocal_75)) {
					ped::set_ped_reset_flag(iLocal_75, 310, 1);
				}
				system::wait(0);
			}
			break;

		case 1:
			while (!func_128(-423103492, 6, 2, 144, 7200000, 10000, -1, 199, -1, 0)) {
				if (func_3(iLocal_75)) {
					ped::set_ped_reset_flag(iLocal_75, 310, 1);
				}
				system::wait(0);
			}
			break;

		case 2:
			while (!func_128(801546988, 6, 4, 144, 7200000, 10000, -1, 199, -1, 0)) {
				if (func_3(iLocal_75)) {
					ped::set_ped_reset_flag(iLocal_75, 310, 1);
				}
				system::wait(0);
			}
			break;
		}
	}
	if (iParam0) {
		func_127(8);
	}
	func_109(17, iLocal_301);
	func_106();
	func_222();
}

// Position - 0x4B9A
void func_106() { func_107(); }

// Position - 0x4BA7
int func_107() {
	if (func_108(0)) {
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

// Position - 0x4BF2
bool func_108(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x4C1D
void func_109(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		iParam0 = func_125();
	}
	if (iParam0 == -1) {
		return;
	}
	if (iParam1 <= func_124(iParam0)) {
		func_123(iParam0, iParam1);
		if (!func_122(51)) {
			func_118("RE_REWARD", 1, 0, 4000, 10000, func_121(), 0, 138, 0);
			func_117(51);
		}
		if (func_116(iParam0)) {
			Global_101700.f_23954.f_2 = 3;
		}
		if (func_115(iParam0, iParam1) != 322) {
			func_110(func_115(iParam0, iParam1), vLocal_45.x, vLocal_45.y);
		}
		Global_101688 = iParam1;
		if (Global_101686 == 0) {
			if (Global_101689 == 1 || Global_101689 == 5 || Global_101689 == 11 || Global_101689 == 25) {
				func_127(2);
			}
			else if (Global_101689 == 26 || Global_101689 == 8 || Global_101689 == 17) {
				func_127(7);
			}
			else {
				func_127(1);
			}
		}
	}
}

// Position - 0x4D21
void func_110(int iParam0, var uParam1, var uParam2) {
	bool bVar0;

	if (iParam0 < 0) {
	}
	if (iParam0 == 321 || iParam0 > 321) {
	}
	else {
		func_114(891 + iParam0, 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101700.f_9153[iParam0 /*12*/].f_5 == 1) {
		if (Global_101700.f_9153[iParam0 /*12*/].f_6 == 11 || Global_101700.f_9153[iParam0 /*12*/].f_6 == 12) {
			bVar0 = false;
		}
	}
	else {
		Global_101700.f_9153[iParam0 /*12*/].f_5 = 1;
		Global_101700.f_9153[iParam0 /*12*/].f_10 = uParam1;
		Global_101700.f_9153[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287) {
			stats::_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286) {
			stats::_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299) {
			stats::_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0) {
		func_111();
	}
}

// Position - 0x4E09
void func_111() {
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;

	iVar0 = 0;
	Global_101436 = 0;
	Global_101437 = 0;
	Global_101438 = 0;
	Global_101439 = 0;
	Global_101440 = 0;
	Global_101441 = 0;
	Global_101442 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101700.f_9153.f_3853;
	Global_101700.f_9153.f_3853 = 0f;
	while (iVar0 < 321) {
		if (Global_101700.f_9153[iVar0 /*12*/].f_5 == 1) {
			switch (Global_101700.f_9153[iVar0 /*12*/].f_6) {
			case 1:
				Global_101436++;
				fVar1 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 3:
				Global_101437++;
				fVar2 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 5:
				Global_101438++;
				fVar3 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 7:
				Global_101439++;
				fVar4 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 9:
				Global_101440++;
				fVar5 += Global_101700.f_9153[iVar0 /*12*/].f_4 * 4f;
				break;

			case 11:
				Global_101441++;
				fVar6 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			case 13:
				Global_101442++;
				fVar7 += Global_101700.f_9153[iVar0 /*12*/].f_4;
				break;

			default: break;
			}
		}
		iVar0++;
	}
	if (Global_101419 > 0) {
		if (Global_101436 == Global_101419) {
			fVar1 = 55f;
		}
	}
	if (Global_101420 > 0) {
		if (Global_101437 == Global_101420) {
			fVar2 = 10f;
		}
	}
	if (Global_101421 > 0) {
		if (Global_101438 == Global_101421) {
			fVar3 = 0f;
		}
	}
	if (Global_101422 > 0) {
		if (Global_101439 == Global_101422) {
			fVar4 = 10f;
		}
	}
	if (Global_101423 > 0) {
		if (Global_101440 == Global_101423 || Global_101423 * 10 / Global_101440 < 41 ||
			Global_101440 > Global_101426 || Global_101440 == Global_101426) {
			if (!gameplay::is_bit_set(Global_101700.f_9153.f_3856, 14)) {
				if (Global_101440 == Global_101423) {
					stats::_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_101423, 0);
					gameplay::set_bit(&Global_101700.f_9153.f_3856, 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101424 > 0) {
		if (Global_101441 == Global_101424) {
			fVar6 = 15f;
		}
	}
	if (Global_101425 > 0) {
		if (Global_101442 == Global_101425) {
			fVar7 = 5f;
		}
	}
	Global_101700.f_9153.f_3853 = fVar1 + fVar2 + fVar3 + fVar4 + fVar5 + fVar6 + fVar7;
	if (Global_101440 > Global_101426 || Global_101440 == Global_101426) {
		iVar9 = Global_101426;
	}
	else {
		iVar9 = Global_101440;
	}
	stats::stat_set_int(joaat("num_missions_completed"), Global_101436, 1);
	stats::stat_set_int(joaat("num_missions_available"), Global_101419, 1);
	stats::stat_set_int(joaat("num_minigames_completed"), Global_101437, 1);
	stats::stat_set_int(joaat("num_minigames_available"), Global_101420, 1);
	stats::stat_set_int(joaat("num_oddjobs_completed"), Global_101438, 1);
	stats::stat_set_int(joaat("num_oddjobs_available"), Global_101421, 1);
	stats::stat_set_int(joaat("num_rndpeople_completed"), Global_101439, 1);
	stats::stat_set_int(joaat("num_rndpeople_available"), Global_101422, 1);
	stats::stat_set_int(joaat("num_rndevents_completed"), iVar9, 1);
	stats::stat_set_int(joaat("num_rndevents_available"), Global_101426, 1);
	stats::stat_set_int(joaat("num_misc_completed"), Global_101442 + Global_101441, 1);
	stats::stat_set_int(joaat("num_misc_available"), Global_101425 + Global_101424, 1);
	Global_101443 = Global_101436 * 100 / Global_101419;
	Global_101445 = Global_101438 + Global_101437 * 100 / (Global_101421 + Global_101420);
	Global_101444 = Global_101439 + iVar9 * 100 / (Global_101422 + Global_101426);
	Global_101446 = Global_101441 + Global_101442 * 100 / (Global_101424 + Global_101425);
	stats::stat_set_float(joaat("total_progress_made"), Global_101700.f_9153.f_3853, 1);
	stats::stat_set_int(joaat("percent_story_missions"), Global_101443, 1);
	stats::stat_set_int(joaat("percent_ambient_missions"), Global_101444, 1);
	stats::stat_set_int(joaat("percent_oddjobs"), Global_101445, 1);
	if (fVar8 > 0f && system::floor(fVar8) < system::floor(Global_101700.f_9153.f_3853)) {
		func_113(13, system::floor(Global_101700.f_9153.f_3853));
	}
	if (!datafile::datafile_is_save_pending()) {
		if (!Global_69702) {
			if (func_112() == 2 == 0 && !network::network_is_game_in_progress()) {
				if (network::network_is_cloud_available()) {
					Global_101434 = 0;
				}
				if (!Global_55822) {
					func_107();
				}
			}
		}
	}
}

// Position - 0x52CA
int func_112() { return Global_25190; }

// Position - 0x52D5
int func_113(int iParam0, int iParam1) {
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

// Position - 0x5326
int func_114(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;

	if (iParam2 == -1) {
		iParam2 = func_8();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192) {
		uVar2 = stats::_get_pstat_bool_hash(iParam0 - 0, 0, 1, iParam2);
		iVar1 = iParam0 - 0 - stats::_0xF4D8E7AC2A27758C(iParam0 - 0) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384) {
		uVar3 = stats::_get_pstat_bool_hash(iParam0 - 192, 1, 1, iParam2);
		iVar1 = iParam0 - 192 - stats::_0xF4D8E7AC2A27758C(iParam0 - 192) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705) {
		uVar4 = stats::_get_pstat_bool_hash(iParam0 - 513, 0, 0, 0);
		iVar1 = iParam0 - 513 - stats::_0xF4D8E7AC2A27758C(iParam0 - 513) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281) {
		uVar5 = stats::_get_pstat_bool_hash(iParam0 - 705, 1, 0, 0);
		iVar1 = iParam0 - 705 - stats::_0xF4D8E7AC2A27758C(iParam0 - 705) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879) {
		uVar6 = stats::_get_tupstat_bool_hash(iParam0 - 3111, 0, 1, iParam2);
		iVar1 = iParam0 - 3111 - stats::_0xF4D8E7AC2A27758C(iParam0 - 3111) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111) {
		uVar7 = stats::_get_tupstat_bool_hash(iParam0 - 2919, 0, 0, 0);
		iVar1 = iParam0 - 2919 - stats::_0xF4D8E7AC2A27758C(iParam0 - 2919) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335) {
		uVar8 = stats::_get_ngstat_bool_hash(iParam0 - 4207, 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4207 - stats::_0xF4D8E7AC2A27758C(iParam0 - 4207) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399) {
		uVar9 = stats::_get_ngstat_bool_hash(iParam0 - 4335, 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4335 - stats::_0xF4D8E7AC2A27758C(iParam0 - 4335) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413) {
		uVar10 = stats::_get_ngstat_bool_hash(iParam0 - 6029, 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = iParam0 - 6029 - stats::_0xF4D8E7AC2A27758C(iParam0 - 6029) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641) {
		uVar11 = stats::_get_ngstat_bool_hash(iParam0 - 7385, 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7385 - stats::_0xF4D8E7AC2A27758C(iParam0 - 7385) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385) {
		uVar12 = stats::_get_ngstat_bool_hash(iParam0 - 7321, 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7321 - stats::_0xF4D8E7AC2A27758C(iParam0 - 7321) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553) {
		uVar13 = stats::_get_ngstat_bool_hash(iParam0 - 9361, 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = iParam0 - 9361 - stats::_0xF4D8E7AC2A27758C(iParam0 - 9361) * 64;
		iVar0 = stats::stat_set_bool_masked(uVar13, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

// Position - 0x56BA
int func_115(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: return 250;

	case 1: return 226;

	case 2: return 243;

	case 3: return 256;

	case 4: return 259;

	case 5:
		if (iParam1 == 1) {
			return 281;
		}
		if (iParam1 == 2) {
			return 282;
		}
		break;

	case 6: return 265;

	case 7: return 218;

	case 9:
		if (iParam1 == 1) {
			return 271;
		}
		if (iParam1 == 2) {
			return 272;
		}
		if (iParam1 == 3) {
			return 273;
		}
		if (iParam1 == 4) {
			return 274;
		}
		if (iParam1 == 5) {
			return 275;
		}
		if (iParam1 == 6) {
			return 276;
		}
		if (iParam1 == 7) {
			return 277;
		}
		if (iParam1 == 8) {
			return 278;
		}
		if (iParam1 == 9) {
			return 279;
		}
		if (iParam1 == 10) {
			return 280;
		}
		break;

	case 10: return 219;

	case 11:
		if (iParam1 == 1) {
			return 246;
		}
		if (iParam1 == 2) {
			return 247;
		}
		if (iParam1 == 3) {
			return 248;
		}
		if (iParam1 == 4) {
			return 249;
		}
		break;

	case 12: return 254;

	case 13:
		if (iParam1 == 1) {
			return 260;
		}
		if (iParam1 == 2) {
			return 261;
		}
		if (iParam1 == 3) {
			return 262;
		}
		if (iParam1 == 4) {
			return 264;
		}
		break;

	case 14: return 283;

	case 15:
		if (iParam1 == 1) {
			return 224;
		}
		if (iParam1 == 2) {
			return 225;
		}
		break;

	case 16: return 252;

	case 17:
		if (iParam1 == 1) {
			return 244;
		}
		if (iParam1 == 2) {
			return 245;
		}
		break;

	case 18: return 253;

	case 19: return 215;

	case 20: return 216;

	case 21: return 251;

	case 22:
		if (iParam1 == 1) {
			return 221;
		}
		if (iParam1 == 2) {
			return 222;
		}
		break;

	case 23:
		if (iParam1 == 1) {
			return 213;
		}
		if (iParam1 == 2) {
			return 214;
		}
		break;

	case 24: return 242;

	case 25:
		if (iParam1 == 1) {
			return 267;
		}
		if (iParam1 == 2) {
			return 268;
		}
		if (iParam1 == 3) {
			return 269;
		}
		break;

	case 8: return 255;

	case 26:
		if (iParam1 == 1) {
			return 227;
		}
		if (iParam1 == 2) {
			return 228;
		}
		break;

	case 27:
		if (iParam1 == 1) {
			return 257;
		}
		if (iParam1 == 2) {
			return 258;
		}
		break;

	case 28: return 217;

	case 29:
		if (iParam1 == 1) {
			return 229;
		}
		if (iParam1 == 2) {
			return 230;
		}
		if (iParam1 == 3) {
			return 231;
		}
		break;

	case 30: return 285;

	case 31: return 318;

	case 32: return 319;

	case 33: return 320;
	}
	return 322;
}

// Position - 0x5A2E
bool func_116(int iParam0) {
	switch (iParam0) {
	case 29:
	case 30:
	case 2:
	case 18: return false;
	}
	return true;
}

// Position - 0x5A5D
void func_117(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31) {
		iVar0 -= 32;
		iVar1++;
	}
	if (iVar1 < 3) {
		gameplay::set_bit(&Global_101700.f_19369.f_150[iVar1], iVar0);
	}
}

// Position - 0x5A9F
void func_118(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8) {
	func_119(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x5AC1
void func_119(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6,
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
		func_120();
	}
}

// Position - 0x5C95
void func_120() {
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

// Position - 0x5DB5
int func_121() {
	func_11();
	switch (Global_101700.f_2095.f_539.f_3549) {
	case 0: return 1;

	case 1: return 2;

	case 2: return 4;
	}
	return 0;
}

// Position - 0x5DFB
int func_122(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31) {
		iVar0 -= 32;
		iVar1++;
	}
	if (iVar1 < 3) {
		return gameplay::is_bit_set(Global_101700.f_19369.f_150[iVar1], iVar0);
	}
	return 0;
}

// Position - 0x5E3E
void func_123(int iParam0, int iParam1) { gameplay::set_bit(&Global_101700.f_23954.f_8[iParam0], iParam1); }

// Position - 0x5E59
int func_124(int iParam0) {
	int iVar0;

	iVar0 = 1;
	switch (iParam0) {
	case 1: iVar0 = 5; break;

	case 5: iVar0 = 2; break;

	case 9: iVar0 = 10; break;

	case 11: iVar0 = 4; break;

	case 13: iVar0 = 4; break;

	case 15: iVar0 = 2; break;

	case 17: iVar0 = 2; break;

	case 22: iVar0 = 2; break;

	case 23: iVar0 = 2; break;

	case 25: iVar0 = 3; break;

	case 26: iVar0 = 2; break;

	case 27: iVar0 = 2; break;

	case 29: iVar0 = 3; break;
	}
	return iVar0;
}

// Position - 0x5F0A
int func_125() {
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, script::get_this_script_name(), 64);
	iVar16 = func_126(Var0);
	return iVar16;
}

// Position - 0x5F27
int func_126(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5,
			 char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11,
			 char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15) {
	switch (gameplay::get_hash_key(&cParam0)) {
	case joaat("re_abandonedcar"): return 23;

	case joaat("re_accident"): return 0;

	case joaat("re_arrests"): return 15;

	case joaat("re_atmrobbery"): return 1;

	case joaat("re_bikethief"): return 26;

	case joaat("re_border"): return 29;

	case joaat("re_burials"): return 24;

	case joaat("re_bus_tours"): return 2;

	case joaat("re_cartheft"): return 17;

	case joaat("re_chasethieves"): return 11;

	case joaat("re_crashrescue"): return 16;

	case joaat("re_cultshootout"): return 18;

	case joaat("re_dealgonewrong"): return 12;

	case joaat("re_domestic"): return 3;

	case joaat("re_drunkdriver"): return 27;

	case joaat("re_gang_intimidation"): return 20;

	case joaat("re_gangfight"): return 19;

	case joaat("re_getaway_driver"): return 4;

	case joaat("re_hitch_lift"): return 13;

	case joaat("re_homeland_security"): return 28;

	case joaat("re_lured"): return 7;

	case joaat("re_muggings"): return 25;

	case joaat("re_paparazzi"): return 10;

	case joaat("re_prisonerlift"): return 22;

	case joaat("re_prisonvanbreak"): return 21;

	case joaat("re_securityvan"): return 9;

	case joaat("re_shoprobbery"): return 5;

	case joaat("re_snatched"): return 6;

	case joaat("re_stag_do"): return 14;

	case joaat("re_yetarian"): return 30;

	case joaat("re_duel"): return 31;

	case joaat("re_seaplane"): return 32;

	case joaat("re_monkey"): return 33;
	}
	return -1;
}

// Position - 0x6101
void func_127(int iParam0) { Global_101686 = iParam0; }

// Position - 0x610F
int func_128(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9) {
	struct<10> Var0;
	struct<10> Var10;
	int iVar20;
	int iVar21;

	if (func_108(0)) {
		return 0;
	}
	if (iParam4 < 0) {
		return 0;
	}
	if (iParam5 < 0) {
		return 0;
	}
	if (iParam6 == 76) {
		return 0;
	}
	if (iParam7 == 235) {
		return 0;
	}
	if (iParam3 < 3) {
		if (gameplay::is_bit_set(iParam2, iParam3)) {
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7) {
		return 0;
	}
	if (G_SomeGlobalState.MessageCallStates.f_866 < 10) {
		Var0 = iParam0;
		Var0.f_3 = func_136(iParam1);
		Var0.f_4 = gameplay::get_game_timer() + iParam4;
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		gameplay::clear_bit(&Var0.f_1, 0);
		G_SomeGlobalState.MessageCallStates.f_765[G_SomeGlobalState.MessageCallStates.f_866 /*10*/] = {Var0};
		G_SomeGlobalState.MessageCallStates.f_866++;
		return 1;
	}
	else {
		Var10 = {func_135(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9)};
		iVar20 = 0;
		func_134(&iVar20);
		iVar21 = func_133(Var10, G_SomeGlobalState.MessageCallStates.f_765[iVar20 /*10*/]);
		if (iVar21 == 2) {
			func_131(G_SomeGlobalState.MessageCallStates.f_765[iVar20 /*10*/]);
			G_SomeGlobalState.MessageCallStates.f_765[iVar20 /*10*/] = {Var10};
			func_130(&Var10);
			return 1;
		}
		else if (iVar21 == 1) {
			if (func_129(Var10)) {
				func_131(G_SomeGlobalState.MessageCallStates.f_765[iVar20 /*10*/]);
				G_SomeGlobalState.MessageCallStates.f_765[iVar20 /*10*/] = {Var10};
				func_130(&Var10);
				return 1;
			}
			else {
				if (!func_129(G_SomeGlobalState.MessageCallStates.f_765[iVar20 /*10*/])) {
					G_SomeGlobalState.MessageCallStates.f_765[iVar20 /*10*/] = {Var10};
					func_130(&Var10);
					return 1;
				}
				func_130(&Var10);
				return 1;
			}
		}
		else {
			func_131(Var10);
			func_130(&Var10);
			return 1;
		}
	}
	return 0;
}

// Position - 0x6331
bool func_129(struct<9> Param0, var uParam9) {
	if (Param0.f_8 == 0) {
		return false;
	}
	return true;
}

// Position - 0x6349
void func_130(var *uParam0) {
	struct<10> Var0;

	*uParam0 = {Var0};
}

// Position - 0x635B
void func_131(struct<10> Param0) {
	if (func_129(Param0)) {
		func_132(Param0.f_8, 0);
	}
}

// Position - 0x6378
void func_132(int iParam0, int iParam1) {
	if (iParam0 == 235 || iParam0 == 0) {
		return;
	}
	Global_101700.f_7572[iParam0] = 1;
	Global_101700.f_7572.f_236[iParam0] = gameplay::get_game_timer() + iParam1;
}

// Position - 0x63B5
int func_133(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9,
			 struct<4> Param10, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19) {
	int iVar0;
	int iVar1;

	iVar0 = Param0.f_3;
	iVar1 = Param10.f_3;
	if (iVar0 > iVar1) {
		return 2;
	}
	if (iVar0 < iVar1) {
		return 0;
	}
	return 1;
}

// Position - 0x63E6
void func_134(int *iParam0) {
	int iVar0;

	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < G_SomeGlobalState.MessageCallStates.f_866) {
		if (func_133(G_SomeGlobalState.MessageCallStates.f_765[iVar0 /*10*/], G_SomeGlobalState.MessageCallStates.f_765[*iParam0 /*10*/]) == 0) {
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

// Position - 0x643D
struct<10> func_135(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6,
					int iParam7, var uParam8, var uParam9) {
	struct<10> Var0;

	Var0 = uParam0;
	Var0.f_3 = func_136(iParam1);
	Var0.f_4 = gameplay::get_game_timer() + iParam4;
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = iParam2;
	Var0.f_6 = iParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	gameplay::clear_bit(&Var0.f_1, 0);
	return Var0;
}

//Position - 0x6496
int func_136(int iParam0)
{
	switch (iParam0) {
	case 0:
	case 4: return 5;

	case 7: return 4;

	case 2: return 3;

	case 1: return 2;

	case 3: return 1;

	case 5:
	case 6: return 0;
	}
	return 7;
}

// Position - 0x6500
void func_137(int iParam0, int iParam1) {
	if (iParam1) {
		if (!func_141(iParam0, 2, 1)) {
			func_140(iParam0, 2, 1);
		}
	}
	else if (func_141(iParam0, 2, 1)) {
		func_138(iParam0, 2, 1);
	}
}

// Position - 0x6537
void func_138(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam2) {
		gameplay::clear_bit(&Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_112() == 0) {
			iVar0 = func_9(func_139(iParam0), -1, 0);
			gameplay::clear_bit(&iVar0, iParam1);
			func_6(func_139(iParam0), iVar0, -1, 1, 0);
		}
	}
	else {
		gameplay::clear_bit(&Global_101700.f_668[iParam0], iParam1);
	}
}

// Position - 0x65A0
int func_139(int iParam0) {
	switch (iParam0) {
	case 0: return 822;

	case 1: return 823;

	case 2: return 824;

	case 3: return 825;

	case 4: return 826;

	case 5: return 827;

	case 6: return 828;

	case 7: return 829;

	case 8: return 830;

	case 9: return 831;

	case 10: return 832;

	case 11: return 833;

	case 12: return 834;

	case 13: return 835;

	case 14: return 836;

	case 15: return 838;

	case 16: return 839;

	case 17: return 840;

	case 18: return 841;

	case 19: return 842;

	case 20: return 843;

	case 21: return 844;

	case 22: return 845;

	case 23: return 846;

	case 24: return 847;

	case 25: return 848;

	case 26: return 849;

	case 27: return 850;

	case 28: return 851;

	case 29: return 852;

	case 30: return 853;

	case 31: return 854;

	case 32: return 855;

	case 33: return 856;

	case 34: return 857;

	case 35: return 858;

	case 36: return 859;

	case 37: return 860;

	case 38: return 861;

	case 39: return 862;

	case 40: return 866;

	case 41: return 867;

	case 42: return 868;

	case 43: return 869;

	case 44: return 5847;

	case 45: return 3780;

	default: break;
	}
	return 6022;
}

// Position - 0x6867
void func_140(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (iParam2) {
		gameplay::set_bit(&Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_112() == 0) {
			iVar0 = func_9(func_139(iParam0), -1, 0);
			gameplay::set_bit(&iVar0, iParam1);
			func_6(func_139(iParam0), iVar0, -1, 1, 0);
		}
	}
	else {
		gameplay::set_bit(&Global_101700.f_668[iParam0], iParam1);
	}
}

// Position - 0x68D0
bool func_141(int iParam0, int iParam1, int iParam2) {
	if (iParam2) {
		return gameplay::is_bit_set(Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_112() == 0) {
			return gameplay::is_bit_set(func_9(func_139(iParam0), -1, 0), iParam1);
		}
	}
	else {
		return gameplay::is_bit_set(Global_101700.f_668[iParam0], iParam1);
	}
	return false;
}

// Position - 0x6930
int func_142(int iParam0) {
	if (func_145()) {
		Global_101690 = 1;
		Global_101687 = gameplay::get_game_timer();
		if (func_116(Global_101689)) {
			func_143(0);
		}
		ui::set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_116(Global_101689)) {
			ui::flash_minimap_display();
		}
		return 1;
	}
	return 0;
}

// Position - 0x6983
void func_143(int iParam0) {
	switch (iParam0) {
	case 0:
		if (Global_101700.f_23954.f_2 < 3) {
			if (!ui::is_help_message_on_screen()) {
				func_76(func_144(iParam0), -1);
				Global_101700.f_23954.f_2++;
				gameplay::set_bit(&Global_101696, 0);
			}
		}
		break;

	case 1:
		if (!gameplay::is_bit_set(Global_101696, 1)) {
			if (!ui::is_help_message_on_screen()) {
				func_76(func_144(iParam0), -1);
				Global_101700.f_23954.f_3++;
				gameplay::set_bit(&Global_101696, 1);
			}
		}
		break;

	case 2:
		if (!gameplay::is_bit_set(Global_101696, 2)) {
			if (!ui::is_help_message_on_screen()) {
				func_76(func_144(iParam0), -1);
				Global_101700.f_23954.f_4++;
				gameplay::set_bit(&Global_101696, 2);
			}
		}
		break;
	}
}

// Position - 0x6A64
char *func_144(int iParam0) {
	char *sVar0;

	sVar0 = "";
	switch (iParam0) {
	case 0: sVar0 = "AM_H_REFS"; break;

	case 1: sVar0 = "RE_FLASHBLIP"; break;

	case 2: sVar0 = "RE_HANDOVER"; break;
	}
	return sVar0;
}

// Position - 0x6AA8
bool func_145() {
	switch (func_146(&Global_25249, 0, 5, 0, script::get_id_of_this_thread())) {
	case 1: return true;

	case 0: return true;
	}
	return false;
}

// Position - 0x6ADE
int func_146(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam1 == 7) {
		return 0;
	}
	if (!iParam3) {
		if (Global_89302.f_44 == 1) {
			return 2;
		}
	}
	if (iParam1 == 0) {
		if (func_150(0)) {
			return 0;
		}
		Global_35745++;
		*iParam0 = Global_35745;
		player::set_player_invincible(player::get_player_index(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5) {
			player::force_cleanup(8);
		}
		Global_35781 = iParam2;
		Global_35743 = *iParam0;
		Global_35744 = iParam4;
		Global_35742 = 0;
		return 1;
	}
	if (*iParam0 != -1) {
		if (Global_35742 > 0) {
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35742) {
				if (Global_35748[iVar0 /*4*/] == *iParam0) {
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35743 == *iParam0) {
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1) {
		if (!func_148(iParam2)) {
			return 0;
		}
		if (Global_35742 == 8) {
			return 0;
		}
		Global_35745++;
		*iParam0 = Global_35745;
		Global_35748[Global_35742 /*4*/] = Global_35745;
		Global_35748[Global_35742 /*4*/].f_1 = iParam1;
		Global_35748[Global_35742 /*4*/].f_2 = iParam2;
		Global_35748[Global_35742 /*4*/].f_3 = 0;
		Global_35742++;
		if (iParam4 != 0) {
			func_147(iParam0, iParam4);
		}
	}
	return 2;
}

// Position - 0x6C15
void func_147(int *iParam0, int iParam1) {
	int iVar0;

	if (Global_35742 == 0) {
		return;
	}
	if (*iParam0 == -1) {
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35742) {
		if (Global_35748[iVar0 /*4*/] == *iParam0) {
			Global_35748[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*iParam0 = -1;
}

// Position - 0x6C64
bool func_148(int iParam0) { return func_149(iParam0, Global_35781); }

// Position - 0x6C75
int func_149(int iParam0, int iParam1) {
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

// Position - 0x6E56
bool func_150(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_148(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x6E78
bool func_151() {
	float fVar0;

	switch (iLocal_301) {
	case 1:
		if (entity::is_entity_in_angled_area(player::player_ped_id(), -2300.317f, 4179.612f, 36.98159f, -2191.317f,
											 4368.794f, 74.89676f, 70.75f, 0, 1, 0)) {
			return true;
		}
		break;

	case 2:
		if (bLocal_61) {
			fVar0 = 80f;
		}
		else {
			fVar0 = 80f;
		}
		if (entity::is_entity_at_coord(player::player_ped_id(), -487.5048f, -2157.99f, 8.2627f, fVar0, fVar0, 40f, 0, 1,
									   0)) {
			return true;
		}
		break;
	}
	if (cam::is_first_person_aim_cam_active()) {
		if (!ped::is_ped_injured(iLocal_75)) {
			if (entity::is_entity_on_screen(iLocal_75)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x6F2E
bool func_152(int iParam0) {
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;

	vVar1 = {6f, 6f, 6f};
	vVar4 = {-6f, -6f, -6f};
	if (player::is_player_control_on(player::player_id())) {
		if (!ped::is_ped_injured(iLocal_75)) {
			if (iParam0 == 0 || func_99(iLocal_75, iLocal_76, 1) > 15f) {
				if (gameplay::is_bullet_in_area(ped::get_ped_bone_coords(iLocal_75, 31086, 0f, 0f, 0f), 4f, 0)) {
					bVar0 = true;
				}
				vVar1 = {vVar1 + ped::get_ped_bone_coords(iLocal_75, 31086, 0f, 0f, 0f)};
				vVar4 = {vVar4 + ped::get_ped_bone_coords(iLocal_75, 31086, 0f, 0f, 0f)};
				if (gameplay::is_projectile_type_in_area(vVar4, vVar1, joaat("weapon_smokegrenade"), 1) ||
					gameplay::is_projectile_type_in_area(vVar4, vVar1, joaat("weapon_grenade"), 1) ||
					gameplay::is_projectile_type_in_area(vVar4, vVar1, joaat("weapon_stickybomb"), 1)) {
					bVar0 = true;
				}
			}
			if (graphics::_0x2F09F7976C512404(ped::get_ped_bone_coords(iLocal_75, 31086, 0f, 0f, 0f), 6f)) {
				bVar0 = true;
			}
			if (fire::is_explosion_in_sphere(-1, ped::get_ped_bone_coords(iLocal_75, 31086, 0f, 0f, 0f), 6f)) {
				bVar0 = true;
			}
			if (entity::has_entity_been_damaged_by_entity(iLocal_75, player::player_ped_id(), 1)) {
				bVar0 = true;
			}
		}
	}
	if (bVar0) {
	}
	return bVar0;
}

// Position - 0x7055
bool func_153(int iParam0) {
	if (func_3(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (!fire::is_entity_on_fire(iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x707F
bool func_154() {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	char *sVar10;
	char *sVar11;
	char *sVar12;

	vVar3 = {vLocal_99};
	fVar6 = fLocal_111;
	switch (iLocal_301) {
	case 1:
		vLocal_96 = {-2257.482f, 4266.638f, 44.5095f};
		fLocal_110 = 293.9091f;
		vLocal_99 = {-2253.763f, 4273.17f, 44.977f};
		fLocal_111 = 185.5212f;
		iVar7 = joaat("a_f_y_vinewood_04");
		iVar9 = joaat("peyote");
		iVar8 = joaat("g_m_y_salvagoon_01");
		sVar10 = "CThiefVictim";
		sVar11 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
		sLocal_287 = "RECT1_ATTR";
		sLocal_288 = "RECT1_HELP";
		sLocal_289 = "RECT1_FYOU";
		sLocal_290 = "RECT1_JOY";
		sLocal_291 = "RECT1_OK";
		sLocal_292 = "RECT1_BAD";
		sLocal_293 = "RECT1_GOOD";
		cLocal_294 = "RECT1AU";
		sLocal_83 = "RANDOM@CAR_THIEF@waiting_ig_4";
		sLocal_85 = "random@car_thief@waving_ig_1";
		vLocal_102 = {-2270.632f, 4287.437f, 44.9008f};
		fLocal_57 = 3f;
		if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 1), vLocal_96) <
			system::vdist(entity::get_entity_coords(player::player_ped_id(), 1), vLocal_99)) {
			vVar3 = {vLocal_96};
			fVar6 = fLocal_110;
			bLocal_61 = true;
			sLocal_84 = "random@car_thief@waving_ig_2";
			sLocal_86 = "waving_l";
		}
		else {
			sLocal_86 = "waving";
			sLocal_84 = "random@car_thief@waving_ig_1";
			vVar3 = {vLocal_99};
			fVar6 = fLocal_111;
		}
		break;

	case 2:
		vLocal_99 = {-538.6718f, -2183.442f, 5.2336f};
		vLocal_96 = {-365.7f, -2179.26f, 9.3184f};
		iVar7 = joaat("a_f_y_indian_01");
		iVar9 = joaat("rocoto");
		iVar8 = joaat("a_m_m_soucent_04");
		sVar10 = "CThiefGolfer";
		sVar12 = "A_M_M_SOUCENT_04_BLACK_MINI_01";
		sLocal_287 = "RECT2_ATTR";
		sLocal_288 = "RECT2_HELP";
		sLocal_289 = "RECT2_FYOU";
		sLocal_290 = "RECT2_JOY";
		sLocal_291 = "RECT2_OK";
		sLocal_292 = "RECT2_BAD";
		sLocal_293 = "RECT2_GOOD";
		cLocal_294 = "RECT2AU";
		sLocal_83 = "RANDOM@CAR_THIEF@waiting_ig_4";
		sLocal_84 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
		sLocal_85 = "RANDOM@CAR_THIEF@VICTIMPOINTS_IG_3";
		vLocal_102 = {-505.1966f, -2159.228f, 7.6466f};
		fLocal_56 = 15f;
		fLocal_57 = 3f;
		if (system::vdist(entity::get_entity_coords(player::player_ped_id(), 1), vLocal_96) <
			system::vdist(entity::get_entity_coords(player::player_ped_id(), 1), vLocal_99)) {
			bLocal_61 = true;
		}
		break;
	}
	streaming::request_model(iVar7);
	streaming::request_model(iVar8);
	streaming::request_model(iVar9);
	streaming::request_anim_dict(sLocal_83);
	streaming::request_anim_dict(sLocal_84);
	streaming::request_anim_dict(sLocal_85);
	streaming::request_anim_dict("RANDOM@CAR_THIEF@WAITING_IG_4");
	streaming::request_ptfx_asset();
	if (streaming::has_model_loaded(iVar7) && streaming::has_model_loaded(iVar8) &&
		streaming::has_model_loaded(iVar9) && streaming::has_anim_dict_loaded(sLocal_83) &&
		streaming::has_anim_dict_loaded(sLocal_84) && streaming::has_anim_dict_loaded(sLocal_85) &&
		streaming::has_anim_dict_loaded("RANDOM@CAR_THIEF@WAITING_IG_4") && streaming::has_ptfx_asset_loaded()) {
		if (iLocal_301 == 1) {
			func_168("re_cartheft - Distance to vTop = ",
					 system::vdist(entity::get_entity_coords(player::player_ped_id(), 1), vLocal_96));
			func_168("re_cartheft - Distance to vBottom = ",
					 system::vdist(entity::get_entity_coords(player::player_ped_id(), 1), vLocal_99));
			iLocal_77 = vehicle::create_vehicle(iVar9, vVar3, fVar6, 1, 1);
			vehicle::_set_vehicle_door_can_break(iLocal_77, 0, 0);
			vehicle::set_vehicle_tyres_can_burst(iLocal_77, 0);
			vehicle::set_vehicle_has_strong_axles(iLocal_77, 1);
			vehicle::_0x51BB2D88D31A914B(iLocal_77, 0);
			vehicle::_0x192547247864DFDD(iLocal_77, 0);
			vehicle::set_vehicle_extra(iLocal_77, 2, 0);
			iLocal_76 = ped::create_ped_inside_vehicle(iLocal_77, 22, iVar8, -1, 1, 1);
			ped::set_ped_config_flag(iLocal_76, 42, 1);
			ped::set_ped_combat_attributes(iLocal_76, 3, 1);
			weapon::give_weapon_to_ped(iLocal_76, joaat("weapon_pistol"), -1, 1, 1);
			ped::set_ped_accuracy(iLocal_76, 10);
			ped::set_driver_ability(iLocal_76, 1f);
			ped::_0xDED5AF5A0EA4B297(iLocal_76, 1f);
			vehicle::set_vehicle_colours(iLocal_77, 135, 135);
			ped::add_relationship_group("re_cartheft relGroupThief", &iLocal_329);
			ped::set_relationship_between_groups(5, iLocal_329, 1862763509);
			ped::set_relationship_between_groups(2, iLocal_329, 45677184);
			ped::set_relationship_between_groups(2, 45677184, iLocal_329);
			ped::set_ped_relationship_group_hash(iLocal_76, iLocal_329);
			entity::set_entity_only_damaged_by_player(iLocal_77, 1);
			if (!ped::is_ped_injured(player::player_ped_id())) {
				vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1) - vLocal_52};
				fLocal_55 = gameplay::get_heading_from_vector_2d(vVar0.x, vVar0.y);
			}
			iLocal_75 = ped::create_ped(5, iVar7, vLocal_52, fLocal_55, 1, 1);
			audio::set_ambient_voice_name(iLocal_75, sVar11);
			ai::task_look_at_entity(iLocal_75, player::player_ped_id(), -1, 2048, 2);
			ped::set_ped_component_variation(iLocal_75, 0, 0, 1, 0);
			ped::set_ped_component_variation(iLocal_75, 2, 2, 0, 0);
			ped::set_ped_component_variation(iLocal_75, 3, 1, 1, 0);
			ped::set_ped_component_variation(iLocal_75, 4, 1, 1, 0);
			audio::stop_ped_speaking(iLocal_75, 1);
			if (bLocal_61) {
				vLocal_90 = {-2254.413f, 4270.227f, 44.8028f};
				fLocal_105 = 124.6557f;
				vLocal_87 = {-2252.683f, 4274.16f, 45.0612f};
				vLocal_93 = {-2257.825f, 4269.189f, 44.6334f};
				fLocal_106 = 272.8688f;
				vLocal_113 = {-2258.04f, 4272.244f, 45.75466f};
				vLocal_116 = {1.729481f, 0f, -114.9352f};
			}
			else {
				vLocal_90 = {-2253.634f, 4269.119f, 44.7686f};
				fLocal_105 = 336.143f;
				vLocal_93 = {-2255.733f, 4271.32f, 44.8166f};
				fLocal_106 = 179.4774f;
				vLocal_87 = {-2257.088f, 4268.938f, 44.6456f};
				vLocal_113 = {-2254.886f, 4273.539f, 46.2282f};
				vLocal_116 = {-7.492095f, 0f, -168.1909f};
			}
		}
		else {
			if (bLocal_61) {
				iLocal_77 = vehicle::create_vehicle(iVar9, -488.7506f, -2159.325f, 8.2581f, 15.0886f, 1, 1);
			}
			else {
				iLocal_77 = vehicle::create_vehicle(iVar9, -486.3563f, -2159.942f, 8.2887f, 288.8187f, 1, 1);
			}
			vehicle::_set_vehicle_door_can_break(iLocal_77, 0, 0);
			vehicle::set_vehicle_tyres_can_burst(iLocal_77, 0);
			vehicle::set_vehicle_colour_combination(iLocal_77, 3);
			vehicle::set_vehicle_has_strong_axles(iLocal_77, 1);
			vehicle::set_vehicle_mod_kit(iLocal_77, 0);
			vehicle::set_vehicle_mod(iLocal_77, 11, 2, 0);
			vehicle::set_vehicle_mod(iLocal_77, 16, 3, 0);
			vehicle::set_vehicle_mod(iLocal_77, 12, 1, 0);
			vehicle::set_vehicle_mod(iLocal_77, 13, 1, 0);
			vehicle::set_vehicle_wheel_type(iLocal_77, 3);
			vehicle::set_vehicle_mod(iLocal_77, 23, 6, 0);
			vehicle::set_vehicle_window_tint(iLocal_77, 3);
			vehicle::toggle_vehicle_mod(iLocal_77, 18, 1);
			vehicle::toggle_vehicle_mod(iLocal_77, 22, 1);
			vehicle::set_vehicle_colours(iLocal_77, 143, 0);
			vehicle::set_vehicle_extra_colours(iLocal_77, 31, 2);
			vehicle::_0x51BB2D88D31A914B(iLocal_77, 0);
			vehicle::_0x192547247864DFDD(iLocal_77, 0);
			if (bLocal_61) {
				iLocal_75 = ped::create_ped(5, iVar7, -490.4008f, -2160.755f, 8.2498f, 314.0037f, 1, 1);
			}
			else if (entity::is_entity_in_angled_area(player::player_ped_id(), -583.0884f, -2234.249f, 4.523423f,
													  -685.1817f, -2350.904f, 17.07073f, 178f, 0, 1, 0)) {
				iLocal_75 = ped::create_ped(5, iVar7, -486.81f, -2156.99f, 8.27f, -172.34f, 1, 1);
			}
			else {
				iLocal_75 = ped::create_ped(5, iVar7, -486.2511f, -2161.808f, 8.3041f, 353.4264f, 1, 1);
			}
			ped::set_ped_component_variation(iLocal_75, 0, 0, 0, 0);
			ped::set_ped_component_variation(iLocal_75, 2, 1, 0, 0);
			ped::set_ped_component_variation(iLocal_75, 3, 1, 2, 0);
			ped::set_ped_component_variation(iLocal_75, 4, 1, 2, 0);
			iLocal_76 = ped::create_ped_inside_vehicle(iLocal_77, 22, iVar8, -1, 1, 1);
			weapon::give_weapon_to_ped(iLocal_76, joaat("weapon_pistol"), -1, 1, 1);
			ped::set_ped_accuracy(iLocal_76, 10);
			ped::set_driver_ability(iLocal_76, 1f);
			ped::_0xDED5AF5A0EA4B297(iLocal_76, 1f);
			ped::set_ped_config_flag(iLocal_76, 42, 1);
			audio::set_ambient_voice_name(iLocal_76, sVar12);
			vLocal_90 = {-501.9105f, -2148.019f, 8.0392f};
			fLocal_105 = 294.4744f;
			vLocal_87 = {-501.0442f, -2150.799f, 8.139f};
			vLocal_93 = {-493.8062f, -2156.036f, 8.1978f};
			vLocal_113 = {-504.365f, -2144.534f, 9.8585f};
			vLocal_116 = {-6.6935f, 0f, -127.8147f};
		}
		ped::set_ped_can_be_targetted(iLocal_75, 0);
		ped::set_ped_config_flag(iLocal_75, 185, 1);
		vehicle::set_can_respray_vehicle(iLocal_77, 0);
		vehicle::set_vehicle_engine_on(iLocal_77, 1, 1, 0);
		ped::set_blocking_of_non_temporary_events(iLocal_75, 1);
		ped::set_blocking_of_non_temporary_events(iLocal_76, 1);
		ai::task_look_at_entity(iLocal_75, iLocal_76, -1, 0, 2);
		vehicle::add_vehicle_upsidedown_check(iLocal_77);
		entity::set_entity_only_damaged_by_player(iLocal_77, 1);
		vehicle::set_vehicle_automatically_attaches(iLocal_77, 0, 0);
		vehicle::set_vehicle_model_is_suppressed(iVar9, 1);
		audio::start_audio_scene("RE_CAR_STEAL_SCENE");
		audio::_dynamic_mixer_related_fn(iLocal_77, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		vehicle::_0x25367DE49D64CF16(iLocal_77, 1);
		ped::set_ped_combat_attributes(iLocal_75, 17, 0);
		ped::set_ped_flee_attributes(iLocal_75, 512, 1);
		switch (func_10()) {
		case 0: sLocal_120 = "MICHAEL"; break;

		case 1: sLocal_120 = "FRANKLIN"; break;

		case 2: sLocal_120 = "TREVOR"; break;
		}
		func_167(&Local_122, 0, player::player_ped_id(), sLocal_120, 0, 1);
		func_167(&Local_122, 1, iLocal_75, sVar10, 0, 1);
		func_167(&Local_122, 2, iLocal_76, "CThief", 0, 1);
		return true;
	}
	else if (func_155()) {
		func_222();
	}
	return false;
}

// Position - 0x78AC
bool func_155() {
	if (player::is_player_playing(player::player_id()) && !ped::is_ped_injured(player::player_ped_id())) {
		if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1), vLocal_45) < 75f * 75f) {
			return true;
		}
		if (system::vmag2(entity::get_entity_velocity(player::player_ped_id())) > 1369f && !func_166()) {
			return false;
		}
	}
	if (func_162()) {
		return true;
	}
	if (func_156(100f, 1) != -1) {
		return true;
	}
	return false;
}

// Position - 0x7932
int func_156(float fParam0, int iParam1) {
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
		if (func_13(func_10())) {
			iVar36 = func_121();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63) {
				iVar32 = iVar37;
				if (gameplay::is_bit_set(Global_101700.f_17533[iVar32 /*6*/], 2) &&
					!gameplay::is_bit_set(Global_101700.f_17533[iVar32 /*6*/], 3)) {
					func_157(iVar32, &Var0);
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

// Position - 0x79E9
void func_157(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0:
		func_158(uParam1, "Abigail1", func_160(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0,
				 "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_159(iParam0), 1, 0);
		break;

	case 1:
		func_158(uParam1, "Abigail2", func_160(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0,
				 -1, 4, 1, 0, 2359, func_159(iParam0), 1, 0);
		break;

	case 2:
		func_158(uParam1, "Barry1", func_160(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1,
				 4, 1, 0, 2359, func_159(iParam0), 1, 0);
		break;

	case 3:
		func_158(uParam1, "Barry2", func_160(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1,
				 4, 4, 0, 2359, func_159(iParam0), 1, 1);
		break;

	case 4:
		func_158(uParam1, "Barry3", func_160(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2,
				 0, 2359, func_159(iParam0), 0, 0);
		break;

	case 5:
		func_158(uParam1, "Barry3A", func_160(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0,
				 "", 166, 0, 7, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
		break;

	case 6:
		func_158(uParam1, "Barry3C", func_160(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0,
				 7, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
		break;

	case 7:
		func_158(uParam1, "Barry4", func_160(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0,
				 "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_159(iParam0), 0, 0);
		break;

	case 8:
		func_158(uParam1, "Dreyfuss1", func_160(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106,
				 0, "", 0, 0, -1, 4, 2, 0, 2359, func_159(iParam0), 0, 0);
		break;

	case 9:
		func_158(uParam1, "Epsilon1", func_160(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1,
				 10, 4, 1, 0, 2359, func_159(iParam0), 0, 0);
		break;

	case 10:
		func_158(uParam1, "Epsilon2", func_160(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0,
				 11, 4, 1, 0, 2359, func_159(iParam0), 1, 0);
		break;

	case 11:
		func_158(uParam1, "Epsilon3", func_160(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars",
				 0, 0, 12, 4, 1, 0, 2359, func_159(iParam0), 0, 0);
		break;

	case 12:
		func_158(uParam1, "Epsilon4", func_160(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16,
				 "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_159(iParam0), 0, 0);
		break;

	case 13:
		func_158(uParam1, "Epsilon5", func_160(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16,
				 "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_159(iParam0), 1, 0);
		break;

	case 14:
		func_158(uParam1, "Epsilon6", func_160(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0,
				 15, 4, 1, 0, 2359, func_159(iParam0), 0, 1);
		break;

	case 15:
		func_158(uParam1, "Epsilon7", func_160(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16,
				 "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_159(iParam0), 0, 0);
		break;

	case 16:
		func_158(uParam1, "Epsilon8", func_160(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16,
				 "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_159(iParam0), 1, 0);
		break;

	case 17:
		func_158(uParam1, "Extreme1", func_160(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1,
				 18, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
		break;

	case 18:
		func_158(uParam1, "Extreme2", func_160(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171,
				 0, 19, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
		break;

	case 19:
		func_158(uParam1, "Extreme3", func_160(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20,
				 4, 2, 0, 2359, func_159(iParam0), 0, 1);
		break;

	case 20:
		func_158(uParam1, "Extreme4", func_160(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_159(iParam0), 0, 0);
		break;

	case 21:
		func_158(uParam1, "Fanatic1", func_160(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0,
				 1, -1, 4, 1, 700, 2000, func_159(iParam0), 1, 0);
		break;

	case 22:
		func_158(uParam1, "Fanatic2", func_160(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1,
				 -1, 4, 4, 700, 2000, func_159(iParam0), 1, 0);
		break;

	case 23:
		func_158(uParam1, "Fanatic3", func_160(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1,
				 4, 2, 700, 2000, func_159(iParam0), 0, 1);
		break;

	case 24:
		func_158(uParam1, "Hao1", func_160(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0,
				 "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_159(iParam0), 0, 1);
		break;

	case 25:
		func_158(uParam1, "Hunting1", func_160(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1,
				 26, 4, 4, 0, 2359, func_159(iParam0), 0, 1);
		break;

	case 26:
		func_158(uParam1, "Hunting2", func_160(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0,
				 -1, 4, 4, 0, 2359, func_159(iParam0), 0, 1);
		break;

	case 27:
		func_158(uParam1, "Josh1", func_160(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns",
				 0, 1, 28, 4, 4, 0, 2359, func_159(iParam0), 1, 0);
		break;

	case 28:
		func_158(uParam1, "Josh2", func_160(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0,
				 29, 4, 4, 0, 2359, func_159(iParam0), 1, 1);
		break;

	case 29:
		func_158(uParam1, "Josh3", func_160(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0,
				 30, 4, 4, 0, 2359, func_159(iParam0), 1, 1);
		break;

	case 30:
		func_158(uParam1, "Josh4", func_160(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1,
				 4, 4, 0, 2359, func_159(iParam0), 1, 0);
		break;

	case 31:
		func_158(uParam1, "Maude1", func_160(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0,
				 "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_159(iParam0), 0, 1);
		break;

	case 32:
		func_158(uParam1, "Minute1", func_160(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33,
				 4, 4, 0, 2359, func_159(iParam0), 0, 1);
		break;

	case 33:
		func_158(uParam1, "Minute2", func_160(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4,
				 0, 2359, func_159(iParam0), 0, 1);
		break;

	case 34:
		func_158(uParam1, "Minute3", func_160(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0,
				 -1, 4, 4, 0, 2359, func_159(iParam0), 0, 1);
		break;

	case 35:
		func_158(uParam1, "MrsPhilips1", func_160(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0,
				 "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_159(iParam0), 0, 0);
		break;

	case 36:
		func_158(uParam1, "MrsPhilips2", func_160(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0,
				 2359, func_159(iParam0), 0, 0);
		break;

	case 37:
		func_158(uParam1, "Nigel1", func_160(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1,
				 -1, 1, 4, 0, 2359, func_159(iParam0), 1, 0);
		break;

	case 38:
		func_158(uParam1, "Nigel1A", func_160(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0,
				 "", 0, 0, 42, 4, 4, 0, 2359, func_159(iParam0), 1, 1);
		break;

	case 39:
		func_158(uParam1, "Nigel1B", func_160(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_159(iParam0), 1, 1);
		break;

	case 40:
		func_158(uParam1, "Nigel1C", func_160(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_159(iParam0), 1, 1);
		break;

	case 41:
		func_158(uParam1, "Nigel1D", func_160(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_159(iParam0), 1, 1);
		break;

	case 42:
		func_158(uParam1, "Nigel2", func_160(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0,
				 43, 4, 4, 0, 2359, func_159(iParam0), 1, 1);
		break;

	case 43:
		func_158(uParam1, "Nigel3", func_160(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16,
				 "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_159(iParam0), 1, 1);
		break;

	case 44:
		func_158(uParam1, "Omega1", func_160(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0,
				 "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_159(iParam0), 0, 0);
		break;

	case 45:
		func_158(uParam1, "Omega2", func_160(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_159(iParam0), 0, 0);
		break;

	case 46:
		func_158(uParam1, "Paparazzo1", func_160(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1,
				 47, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
		break;

	case 47:
		func_158(uParam1, "Paparazzo2", func_160(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0,
				 0, 48, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
		break;

	case 48:
		func_158(uParam1, "Paparazzo3", func_160(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183,
				 1, -1, 2, 2, 0, 2359, func_159(iParam0), 0, 0);
		break;

	case 49:
		func_158(uParam1, "Paparazzo3A", func_160(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102,
				 0, "", 0, 0, 51, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
		break;

	case 50:
		func_158(uParam1, "Paparazzo3B", func_160(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "",
				 0, 0, 51, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
		break;

	case 51:
		func_158(uParam1, "Paparazzo4", func_160(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1,
				 -1, 4, 2, 0, 2359, func_159(iParam0), 0, 0);
		break;

	case 52:
		func_158(uParam1, "Rampage1", func_160(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4,
				 4, 0, 2359, func_159(iParam0), 0, 0);
		break;

	case 54:
		func_158(uParam1, "Rampage3", func_160(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55,
				 4, 4, 0, 2359, func_159(iParam0), 1, 0);
		break;

	case 55:
		func_158(uParam1, "Rampage4", func_160(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4,
				 4, 0, 2359, func_159(iParam0), 1, 0);
		break;

	case 56:
		func_158(uParam1, "Rampage5", func_160(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0,
				 53, 4, 4, 0, 2359, func_159(iParam0), 0, 0);
		break;

	case 53:
		func_158(uParam1, "Rampage2", func_160(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0,
				 "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_159(iParam0), 1, 0);
		break;

	case 57:
		func_158(uParam1, "TheLastOne", func_160(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "",
				 0, 1, -1, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
		break;

	case 58:
		func_158(uParam1, "Tonya1", func_160(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0,
				 "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
		break;

	case 59:
		func_158(uParam1, "Tonya2", func_160(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48,
				 "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
		break;

	case 60:
		func_158(uParam1, "Tonya3", func_160(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0,
				 2359, func_159(iParam0), 0, 1);
		break;

	case 61:
		func_158(uParam1, "Tonya4", func_160(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359,
				 func_159(iParam0), 0, 1);
		break;

	case 62:
		func_158(uParam1, "Tonya5", func_160(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_159(iParam0), 0, 1);
		break;

	default: break;
	}
}

// Position - 0x8C31
void func_158(var *uParam0, char *sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7,
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

// Position - 0x8CC2
int func_159(int iParam0) {
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

// Position - 0x9008
struct<2> func_160(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = {func_161(iParam0)};
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x9040
struct<2>
func_161(int iParam0) {
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

//Position - 0x948D
bool func_162()
{
	if (func_165() && !func_166()) {
		return true;
	}
	if (func_164() && func_163()) {
		return true;
	}
	return false;
}

// Position - 0x94BF
bool func_163() { return Global_101418 > 0; }

// Position - 0x94CD
int func_164() {
	if (Global_88746 != -1) {
		return 1;
	}
	return 0;
}

// Position - 0x94E2
int func_165() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 20);
	}
	return 0;
}

// Position - 0x9508
int func_166() {
	if (gameplay::is_pc_version()) {
		if (gameplay::_0xD10282B6E3751BA0() == 1f) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x9525
void func_167(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
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

// Position - 0x95C0
void func_168(char *sParam0, float fParam1) {
	func_170(sParam0);
	func_169(fParam1);
}

// Position - 0x95D4
void func_169(float fParam0) {
	if (fParam0 != 0f) {
	}
}

// Position - 0x95E3
void func_170(char *sParam0) {
	if (gameplay::are_strings_equal(sParam0, sParam0)) {
	}
}

// Position - 0x95F6
bool func_171() {
	if (!func_148(5)) {
		return true;
	}
	if (func_162()) {
		return true;
	}
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (system::vmag2(entity::get_entity_velocity(player::player_ped_id())) > 1369f && !func_166()) {
			return false;
		}
	}
	if (func_156(100f, 1) != -1) {
		return true;
	}
	return false;
}

// Position - 0x9658
bool func_172() {
	if (Global_101689 == func_125() && gameplay::get_random_event_flag() && Global_101690) {
		return true;
	}
	return false;
}

// Position - 0x9683
void func_173() {
	if (func_101(player::player_ped_id())) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (ped::get_vehicle_ped_is_in(player::player_ped_id(), 0) != iLocal_77 &&
				ped::get_vehicle_ped_is_in(player::player_ped_id(), 0) != iLocal_80) {
				iLocal_80 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
			}
		}
	}
}

// Position - 0x96CD
void func_174(int iParam0, int *iParam1) {
	int iVar0;
	int iVar1;

	if (*iParam1 == -99) {
		*iParam1 = gameplay::get_game_timer();
	}
	if (ui::does_blip_exist(iParam0)) {
		iVar0 = gameplay::get_game_timer() - *iParam1;
		if (iVar0 < 5000) {
			iVar1 = system::ceil(system::to_float(iVar0) / 1000f);
			if (iVar1 * 1000 - iVar0 < 500) {
				if (ui::get_blip_alpha(iParam0) != 255) {
					ui::set_blip_alpha(iParam0, 255);
				}
			}
			else if (ui::get_blip_alpha(iParam0) != 0) {
				ui::set_blip_alpha(iParam0, 0);
			}
		}
		else if (*iParam1 != -100) {
			*iParam1 = -100;
			if (ui::get_blip_alpha(iParam0) != 255) {
				ui::set_blip_alpha(iParam0, 255);
			}
		}
	}
}

// Position - 0x976C
void func_175() {}

// Position - 0x9774
void func_176(int iParam0) {
	if (iParam0 == -1) {
		iParam0 = func_125();
	}
	if (iParam0 == -1) {
		return;
	}
	func_178(iParam0);
	gameplay::_0x65D2EBB47E1CEC21(0);
	gameplay::set_random_event_flag(1);
	Global_101686 = 0;
	func_177();
}

// Position - 0x97AA
void func_177() {
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			vehicle::set_vehicle_model_is_suppressed(
				entity::get_entity_model(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0)), 1);
		}
		ped::set_ped_config_flag(player::player_ped_id(), 32, 0);
	}
}

// Position - 0x97E7
void func_178(int iParam0) { Global_101689 = iParam0; }

// Position - 0x97F5
bool func_179(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;

	if (!Global_138924) {
		return false;
	}
	if (iParam3 == -1) {
		iParam3 = func_125();
	}
	if (iParam3 == -1) {
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32) {
		if (!func_219()) {
			return false;
		}
	}
	vLocal_45 = {vParam0};
	iVar0 = 0;
	if (!iVar0) {
		if (player::is_player_playing(player::player_id()) && !ped::is_ped_injured(player::player_ped_id())) {
			vVar1 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			if (system::vmag2(entity::get_entity_velocity(player::player_ped_id())) > 1369f && !func_166()) {
				return false;
			}
		}
		if (!Global_101700.f_8044) {
			return false;
		}
		if (func_108(0)) {
			return false;
		}
		if (func_162()) {
			return false;
		}
		if (func_218()) {
			return false;
		}
		if (Global_101689 != -1) {
			return false;
		}
		if (func_13(func_10())) {
			if (func_156(100f, 1) != -1) {
				return false;
			}
		}
		if (player::is_player_playing(player::player_id()) && !iParam6) {
			if (vVar1.z - vLocal_45.z > 50f) {
				return false;
			}
		}
		if (!func_217(iParam3)) {
			return false;
		}
		if (func_13(func_10())) {
			if (func_216(func_10()) == 4 || func_216(func_10()) == 5) {
				return false;
			}
		}
		if (func_13(func_10())) {
			if (!func_215(iParam3, iParam4, 145)) {
				return false;
			}
		}
		if (!func_214(Global_101700.f_23954.f_43[iParam3])) {
			return false;
		}
		if (gameplay::get_game_timer() - Global_101691 < 150000) {
			if (iParam3 != 30) {
				return false;
			}
		}
		if (func_213()) {
			return false;
		}
		if (gameplay::get_mission_flag()) {
			return false;
		}
		if (gameplay::get_random_event_flag()) {
			return false;
		}
		if (!func_204(4)) {
			return false;
		}
		if (!func_148(5)) {
			return false;
		}
		if (func_203(iParam3, iParam4) && !iParam5) {
			return false;
		}
		if (Global_3 && iParam3 != 10) {
			return false;
		}
		if (interior::is_valid_interior(interior::get_interior_from_entity(player::player_ped_id()))) {
			if (interior::get_interior_from_entity(player::player_ped_id()) ==
					interior::get_interior_at_coords(377.153f, -717.567f, 10.0536f) ||
				interior::get_interior_from_entity(player::player_ped_id()) ==
					interior::get_interior_at_coords(320.9934f, 265.2515f, 82.1221f) ||
				interior::get_interior_from_entity(player::player_ped_id()) ==
					interior::get_interior_at_coords(-1425.564f, -244.3f, 15.8053f)) {
				return false;
			}
		}
		if (iParam3 == 9 && (iParam4 == 2 || iParam4 == 5) && !func_203(0, 0)) {
			return false;
		}
		if (Global_25336) {
			return false;
		}
		if (func_217(30) && !func_203(30, 0)) {
			if (iParam3 != 30) {
				if (system::vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f) {
					return false;
				}
			}
		}
		if (func_13(func_10())) {
			iVar4 = 0;
			while (iVar4 < 3) {
				vVar5 = {Global_101700.f_2095.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101700.f_2095.f_539.f_1524[iVar4];
				if (func_202(iVar8)) {
					if (func_180(iVar4)) {
						if (!func_83(vVar5, 0f, 0f, 0f, 0)) {
							if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 0), vVar5) <
								210f * 210f) {
								if (func_10() != iVar4) {
									return false;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return true;
}

// Position - 0x9B8F
bool func_180(int iParam0) {
	int iVar0;

	iVar0 = Global_101700.f_2095.f_539.f_1524[iParam0];
	return func_181(iVar0);
}

// Position - 0x9BB0
int func_181(int iParam0) { return func_182(iParam0, 1); }

// Position - 0x9BBF
int func_182(int iParam0, int iParam1) {
	int *iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_202(iParam0)) {
		return 0;
	}
	func_183(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (iVar5 > 0 || iVar4 > 0 || iVar3 > 0 || iVar2 >= iParam1) {
		return 1;
	}
	return 0;
}

// Position - 0x9C12
void func_183(int iParam0, int *iParam1, int *iParam2, int *iParam3, int *iParam4, int *iParam5, int *iParam6) {
	func_184(func_195(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

// Position - 0x9C30
void func_184(int iParam0, int iParam1, int *iParam2, int *iParam3, int *iParam4, int *iParam5, int *iParam6,
			  int *iParam7) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_194(iParam0, iParam1)) {
		iVar0 = func_193(iParam1);
		iVar1 = func_191(iParam0);
		iVar2 = func_191(iParam0) - func_191(iParam1);
		iVar3 = func_193(iParam0) - func_193(iParam1);
		iVar4 = func_190(iParam0) - func_190(iParam1);
		iVar5 = func_189(iParam0) - func_189(iParam1);
		iVar6 = func_188(iParam0) - func_188(iParam1);
		iVar7 = func_187(iParam0) - func_187(iParam1);
	}
	else {
		iVar0 = func_193(iParam0);
		iVar1 = func_191(iParam1);
		iVar2 = func_191(iParam1) - func_191(iParam0);
		iVar3 = func_193(iParam1) - func_193(iParam0);
		iVar4 = func_190(iParam1) - func_190(iParam0);
		iVar5 = func_189(iParam1) - func_189(iParam0);
		iVar6 = func_188(iParam1) - func_188(iParam0);
		iVar7 = func_187(iParam1) - func_187(iParam0);
	}
	while (iVar7 < 0) {
		iVar7 += 60;
		iVar6--;
	}
	while (iVar7 > 59) {
		iVar7 -= 60;
		iVar6++;
	}
	while (iVar6 < 0) {
		iVar6 += 60;
		iVar5--;
	}
	while (iVar6 > 59) {
		iVar6 -= 60;
		iVar5++;
	}
	while (iVar5 < 0) {
		iVar5 += 24;
		iVar4--;
	}
	while (iVar5 > 23) {
		iVar5 -= 24;
		iVar4++;
	}
	while (iVar4 < 0) {
		while (iVar3 < 0) {
			iVar3 += 12;
			iVar2--;
		}
		iVar4 += func_186(iVar0, iVar1);
		iVar3--;
		iVar0 = system::round(func_185(system::to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0) {
		iVar3 += 12;
		iVar2--;
	}
	while (iVar3 > 12) {
		iVar3 -= 12;
		iVar2++;
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

// Position - 0x9E31
float func_185(float fParam0, float fParam1, float fParam2) {
	float fVar0;

	if (fParam1 == fParam2) {
		return fParam1;
	}
	fVar0 = fParam2 - fParam1;
	fParam0 -= IntToFloat(system::round((fParam0 - fParam1) / fVar0)) * fVar0;
	if (fParam0 < fParam1) {
		fParam0 += fVar0;
	}
	return fParam0;
}

// Position - 0x9E73
int func_186(int iParam0, int iParam1) {
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

// Position - 0x9F15
int func_187(int iParam0) { return system::shift_right(iParam0, 20) & 63; }

// Position - 0x9F28
int func_188(int iParam0) { return system::shift_right(iParam0, 14) & 63; }

// Position - 0x9F3B
int func_189(int iParam0) { return system::shift_right(iParam0, 9) & 31; }

// Position - 0x9F4E
int func_190(int iParam0) { return system::shift_right(iParam0, 4) & 31; }

// Position - 0x9F60
int func_191(int iParam0) {
	return (system::shift_right(iParam0, 26) & 31) * func_192(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x9F85
int func_192(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x9F9C
int func_193(int iParam0) { return iParam0 & 15; }

// Position - 0x9FA9
bool func_194(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (!func_202(iParam1) || !func_202(iParam0)) {
		return true;
	}
	iVar0 = func_191(iParam0);
	iVar1 = func_191(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_193(iParam0);
	iVar1 = func_193(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_190(iParam0);
	iVar1 = func_190(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_189(iParam0);
	iVar1 = func_189(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_188(iParam0);
	iVar1 = func_188(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_187(iParam0);
	iVar1 = func_187(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	return false;
}

// Position - 0xA0B5
int func_195() {
	int *iVar0;

	func_201(&iVar0, time::get_clock_seconds());
	func_200(&iVar0, time::get_clock_minutes());
	func_199(&iVar0, time::get_clock_hours());
	func_198(&iVar0, time::get_clock_day_of_month());
	func_197(&iVar0, time::get_clock_month());
	func_196(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0xA0FB
void func_196(int *iParam0, int iParam1) {
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

// Position - 0xA181
void func_197(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*uParam0 -= (*uParam0 & 15);
	*uParam0 |= iParam1;
}

// Position - 0xA1B4
void func_198(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_193(*uParam0);
	iVar1 = func_191(*uParam0);
	if (iParam1 < 1 || iParam1 > func_186(iVar0, iVar1)) {
		return;
	}
	*uParam0 -= (*uParam0 & 496);
	*uParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0xA205
void func_199(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*uParam0 -= (*uParam0 & 15872);
	*uParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0xA23F
void func_200(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 1032192);
	*uParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0xA27A
void func_201(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 66060288);
	*uParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0xA2B6
bool func_202(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15) {
		return false;
	}
	iVar0 = func_187(iParam0);
	if (iVar0 < 0 || iVar0 >= 60) {
		return false;
	}
	iVar1 = func_188(iParam0);
	if (iVar1 < 0 || iVar1 >= 60) {
		return false;
	}
	iVar2 = func_189(iParam0);
	if (iVar2 < 0 || iVar2 > 23) {
		return false;
	}
	iVar3 = func_191(iParam0);
	if (iVar3 <= 0 || iVar3 > 2043 || iVar3 < 1979) {
		return false;
	}
	iVar4 = func_193(iParam0);
	if (iVar4 < 0 || iVar4 > 11) {
		return false;
	}
	iVar5 = func_190(iParam0);
	if (iVar5 < 1 || iVar5 > func_186(iVar4, iVar3)) {
		return false;
	}
	return true;
}

// Position - 0xA392
int func_203(int iParam0, int iParam1) {
	if (gameplay::is_bit_set(Global_101700.f_23954.f_8[iParam0], iParam1)) {
		return 1;
	}
	return 0;
}

// Position - 0xA3B5
int func_204(int iParam0) {
	int iVar0;

	if (player::is_player_playing(player::player_id())) {
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				iVar0 = func_10();
				if (!func_13(iVar0)) {
					return 0;
				}
				switch (iParam0) {
				case 9:
				case 0:
					if (!player::is_player_ready_for_cutscene(player::player_id()) ||
						entity::is_entity_in_air(player::player_ped_id()) ||
						ped::is_ped_getting_into_a_vehicle(player::player_ped_id()) ||
						ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						player::is_player_climbing(player::player_id()) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_212() || Global_100747 ||
						Global_25192 || func_211() || func_51(8, -1) || func_210() || func_209() || func_208() ||
						func_207() || G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 1:
					if (player::is_player_being_arrested(player::player_id(), 1) || func_212() || Global_25192 ||
						func_211() || func_51(8, -1) || func_208() || func_210() || func_209() || func_207() ||
						G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 2:
					if (!player::is_player_ready_for_cutscene(player::player_id()) ||
						entity::is_entity_in_air(player::player_ped_id()) ||
						ped::is_ped_getting_into_a_vehicle(player::player_ped_id()) ||
						ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						player::is_player_climbing(player::player_id()) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_212() || Global_100747 ||
						Global_25192 || func_211() || func_51(8, -1) || func_208() || func_210() || func_209() ||
						func_207() || G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5 || LastDispatchedMessageOrCall != -1) {
						return 0;
					}
					break;

				case 3:
					if (ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_212() || Global_100747 ||
						Global_25192 || func_211() || func_51(8, -1) || func_210() || func_209() || func_207() ||
						G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 4:
					if (func_212() || player::get_player_wanted_level(player::player_id()) > 0 || func_51(8, -1) ||
						func_207() || func_206() || G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 5:
					if (func_51(8, -1) || func_210() || func_209() || func_206() || func_205()) {
						return 0;
					}
					if (streaming::is_player_switch_in_progress() && streaming::get_player_switch_type() != 3 &&
						streaming::get_player_switch_state() < 8) {
						return 0;
					}
					break;

				case 6:
					if (entity::does_entity_exist(player::player_ped_id())) {
						if (ped::is_ped_in_combat(player::player_ped_id(), 0) ||
							player::get_player_wanted_level(player::player_id()) > 0 ||
							entity::is_entity_in_air(player::player_ped_id()) ||
							ped::is_ped_ragdoll(player::player_ped_id()) ||
							ped::is_ped_falling(player::player_ped_id()) ||
							player::is_player_being_arrested(player::player_id(), 1) ||
							player::is_player_climbing(player::player_id()) || func_212() || Global_25192 ||
							func_211() || func_51(8, -1) || func_209() || func_208() || func_207() ||
							G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
							return 0;
						}
					}
					break;

				case 7:
					if (ped::is_ped_in_combat(player::player_ped_id(), 0) ||
						!player::is_player_control_on(player::player_id()) ||
						!player::is_player_ready_for_cutscene(player::player_id()) || !cam::is_screen_faded_in() ||
						entity::is_entity_in_air(player::player_ped_id()) ||
						ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) || func_212() || func_209() ||
						Global_100747 || Global_25192 || func_211() || Global_36912 || func_51(8, -1) || func_208() ||
						func_206() || func_207() || G_SomeGlobalState.MessageCallStates.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 8:
					if (ped::is_ped_in_combat(player::player_ped_id(), 0) ||
						!player::is_player_control_on(player::player_id()) ||
						!player::is_player_ready_for_cutscene(player::player_id()) || !cam::is_screen_faded_in() ||
						player::is_player_wanted_level_greater(player::player_id(), 0) ||
						entity::is_entity_in_air(player::player_ped_id()) ||
						ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
						ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						ped::is_ped_swimming(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						player::is_player_climbing(player::player_id()) || func_212() || Global_100747 ||
						Global_25192 || func_211() || func_51(8, -1) || func_208() || func_206() || func_210() ||
						func_209() || func_207()) {
						return 0;
					}
					break;
				}
			}
			else {
				return 0;
			}
		}
		else {
			return 0;
		}
	}
	else {
		return 0;
	}
	return 1;
}

// Position - 0xAAD2
var func_205() { return Global_91530.f_1; }

// Position - 0xAAE0
int func_206() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 13);
	}
	return 0;
}

// Position - 0xAB06
int func_207() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("player_timetable_scene")) > 0) {
		return 1;
	}
	return 0;
}

// Position - 0xAB20
int func_208() {
	if (Global_69962) {
		return 1;
	}
	else if (Global_55816 && !Global_55822) {
		return 1;
	}
	return 0;
}

// Position - 0xAB4A
bool func_209() { return Global_91543.f_304 > 0; }

// Position - 0xAB5B
bool func_210() { return Global_91543.f_303 > 0; }

// Position - 0xAB6C
var func_211() { return Global_1315233; }

// Position - 0xAB78
int func_212() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0xAB94
bool func_213() {
	func_49();
	if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2) {
		return true;
	}
	return false;
}

// Position - 0xABBC
int func_214(int iParam0) { return func_194(func_195(), iParam0); }

// Position - 0xABCE
int func_215(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_10();
	if (iParam2 != 145 && (iParam2 == 0 || iParam2 == 1 || iParam2 == 2)) {
		iVar1 = iParam2;
	}
	switch (iParam0) {
	case 18:
		if (iVar1 == 2) {
			iVar0 = 1;
		}
		break;

	case 19:
		if (iVar1 != 2) {
			iVar0 = 1;
		}
		break;

	case 20:
		if (iVar1 != 1) {
			iVar0 = 1;
		}
		break;

	case 28:
		if (iVar1 != 2) {
			iVar0 = 1;
		}
		break;

	case 13:
		if (iVar1 == 0) {
			if (iParam1 == 2) {
				iVar0 = 0;
			}
			else {
				iVar0 = 1;
			}
		}
		else {
			iVar0 = 1;
		}
		break;

	case 22:
		if (iParam1 == 2 || iVar1 != 2) {
			iVar0 = 1;
		}
		break;

	case 30:
		if (iVar1 != 2) {
			iVar0 = 1;
		}
		break;

	default: iVar0 = 1; break;
	}
	return iVar0;
}

// Position - 0xACB2
int func_216(int iParam0) {
	if (!func_13(iParam0)) {
		return 7;
	}
	return G_SomeGlobalState.MessageCallStates.f_919[iParam0];
}

// Position - 0xACD6
int func_217(int iParam0) {
	int iVar0;
	var uVar1;

	if (iParam0 == 31 || iParam0 == 32) {
		if (!func_219()) {
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31) {
		uVar1 = gameplay::is_bit_set(Global_101700.f_23954, iVar0);
	}
	else {
		iVar0 -= 31;
		uVar1 = gameplay::is_bit_set(Global_101700.f_23954.f_1, iVar0);
	}
	return uVar1;
}

// Position - 0xAD34
bool func_218() {
	int iVar0;

	if (Global_25340) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
			if (vehicle::is_vehicle_driveable(iVar0, 0)) {
				if (!ped::is_ped_injured(vehicle::get_ped_in_vehicle_seat(iVar0, 0, 0))) {
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0xAD78
int func_219() {
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
				return 1;
			}
		}
	}
	if (Global_139179 == 2) {
		return 1;
	}
	else if (Global_139179 == 3) {
		return 0;
	}
	if (gameplay::_0x5AA3BEFA29F03AD4()) {
		if (gameplay::is_bit_set(gameplay::get_profile_setting(866), 0)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0xAE33
bool func_220(int iParam0) {
	int iVar0;

	if (iParam0 == 94 || iParam0 == -1) {
		return false;
	}
	if (Global_85809[iParam0 /*2*/]) {
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Global_82576) {
		if (Global_82576[iVar0 /*5*/] != -1) {
			if (Global_69971.f_109[Global_82576[iVar0 /*5*/] /*4*/] == iParam0) {
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0xAE9B
void func_221() {
	if (system::vdist(vLocal_52, -2255.21f, 4271.04f, 44.875f) < 5f) {
		iLocal_301 = 1;
	}
	else if (system::vdist(vLocal_52, -500.924f, -2165.36f, 7.6988f) < 5f) {
		iLocal_301 = 2;
	}
}

// Position - 0xAEE6
void func_222() {
	if (entity::does_entity_exist(iLocal_76) && !entity::is_entity_dead(iLocal_76, 0)) {
		ped::set_blocking_of_non_temporary_events(iLocal_76, 0);
		streaming::set_model_as_no_longer_needed(entity::get_entity_model(iLocal_76));
		func_234(&iLocal_76, 1, 0, 1);
	}
	if (entity::does_entity_exist(iLocal_75) && !entity::is_entity_dead(iLocal_75, 0)) {
		ped::set_ped_reset_flag(iLocal_75, 310, 1);
		ped::set_blocking_of_non_temporary_events(iLocal_75, 0);
	}
	if (ui::does_blip_exist(iLocal_64)) {
		ui::remove_blip(&iLocal_64);
	}
	func_61(&uLocal_67);
	if (ui::does_blip_exist(iLocal_65)) {
		ui::remove_blip(&iLocal_65);
	}
	if (audio::is_audio_scene_active("RE_CAR_STEAL_SCENE")) {
		if (func_153(iLocal_77)) {
			audio::_0x18EB48CFC41F2EA0(iLocal_77, 0);
		}
		audio::stop_audio_scene("RE_CAR_STEAL_SCENE");
	}
	if (iLocal_301 == 2) {
		vehicle::remove_vehicle_asset(joaat("rocoto"));
	}
	else {
		vehicle::remove_vehicle_asset(joaat("peyote"));
	}
	func_16(&iLocal_77);
	if (func_153(iLocal_80)) {
		vehicle::set_vehicle_tyres_can_burst(iLocal_80, 1);
	}
	gameplay::_set_unk_map_flag(0);
	player::set_wanted_level_multiplier(1f);
	func_137(39, 0);
	func_137(40, 0);
	func_137(41, 0);
	func_137(42, 0);
	func_137(43, 0);
	func_137(44, 0);
	func_223(-1);
	func_63(&iLocal_330, 0, 0);
	script::terminate_this_thread();
}

// Position - 0xB002
void func_223(int iParam0) {
	char cVar0[64];

	if (iParam0 == -1) {
		iParam0 = func_125();
	}
	if (iParam0 == -1) {
		return;
	}
	if (func_172()) {
		func_227(iParam0);
		ui::set_mission_name(0, 0);
		Global_101691 = gameplay::get_game_timer();
		func_226(30000);
		StringCopy(&cVar0, func_225(Global_101689, 1), 64);
		if (func_124(Global_101689) > 0) {
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101688, 64);
		}
		stats::_0x71862B1D855F32E1(&cVar0, Global_101686, gameplay::get_game_timer() - Global_101687, 0);
	}
	else if (gameplay::is_bit_set(Global_101696, 0) && Global_101700.f_23954.f_2 < 3) {
		gameplay::clear_bit(&Global_101696, 0);
	}
	func_224(&Global_25249);
	Global_101690 = 0;
	func_178(-1);
}

// Position - 0xB0B7
void func_224(int *iParam0) {
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

// Position - 0xB0F4
char *func_225(int iParam0, int iParam1) {
	switch (iParam0) {
	case 0: return "RE_ACCIDENT";

	case 1: return "RE_ATMROBBERY";

	case 2: return "RE_BUSTOUR";

	case 3: return "RE_DOMESTIC";

	case 4: return "RE_GETAWAYDRIVER";

	case 5: return "RE_SHOPROBBERY";

	case 6: return "RE_SNATCHED";

	case 7: return "RE_LURED";

	case 8: return "RE_BIKETHIEFSTAMP";

	case 9: return "RE_SECURITYVAN";

	case 10: return "RE_PAPARAZZI";

	case 11: return "RE_CHASETHIEVES";

	case 12: return "RE_DEALGONEWRONG";

	case 13: return "RE_HITCHLIFT";

	case 14: return "RE_STAG";

	case 15: return "RE_ARREST";

	case 16: return "RE_CRASHRESCUE";

	case 17: return "RE_CARTHEFT";

	case 18: return "RE_CULTSHOOTOUT";

	case 19: return "RE_GANGFIGHT";

	case 20: return "RE_GANGINTIMIDATION";

	case 21: return "RE_PRISONVANBREAK";

	case 22: return "RE_PRISONERLIFT";

	case 23: return "RE_ABANDONEDCAR";

	case 24: return "RE_BURIAL";

	case 25: return "RE_MUGGING";

	case 26: return "RE_BIKETHIEF";

	case 27: return "RE_DRUNKDRIVER";

	case 28: return "RE_HOMELANDSECURITY";

	case 29: return "RE_BORDERPATROL";

	case 30: return "RE_SIMEONYETARIAN";

	case 31: return "RE_DUEL";

	case 32: return "RE_SEAPLANE";

	case 33: return "RE_MONKEYPHOTO";

	case -1: return "RE_NONE";
	}
	if (!iParam1) {
	}
	return "UNKNOWN";
}

// Position - 0xB33D
void func_226(int iParam0) { Global_36332 = gameplay::get_game_timer() + iParam0; }

// Position - 0xB34F
void func_227(int iParam0) { func_228(iParam0, 0, func_233(iParam0)); }

// Position - 0xB364
void func_228(int iParam0, int iParam1, int iParam2) {
	int *iVar0;
	struct<16> Var1;

	iVar0 = func_195();
	func_231(&iVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_230(iParam0, &iVar0);
	Var1 = {func_229(&iVar0)};
}

// Position - 0xB393
struct<16> func_229(int *iParam0) {
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, "", 64);
	iVar16 = func_189(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_188(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_187(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_190(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_193(*iParam0);
	if (iVar16 < 9) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_191(*iParam0), 64);
	return Var0;
}

//Position - 0xB464
void func_230(int iParam0, int* iParam1)
{
	Global_101700.f_23954.f_43[iParam0] = *iParam1;
}

// Position - 0xB47C
void func_231(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_191(*iParam0);
	iVar1 = func_193(*iParam0);
	iVar2 = func_190(*iParam0);
	iVar3 = func_189(*iParam0);
	iVar4 = func_188(*iParam0);
	iVar5 = func_187(*iParam0);
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
	iVar6 = func_186(iVar1, iVar0);
	while (iVar2 > iVar6) {
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11) {
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_186(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11) {
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_232(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

// Position - 0xB5FE
void func_232(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_201(iParam0, iParam1);
	func_200(iParam0, iParam2);
	func_199(iParam0, iParam3);
	func_197(iParam0, iParam5);
	func_198(iParam0, iParam4);
	func_196(iParam0, iParam6);
}

// Position - 0xB636
int func_233(int iParam0) {
	int iVar0;

	switch (iParam0) {
	case 23: iVar0 = 30; break;

	case 0: iVar0 = 30; break;

	case 15: iVar0 = 30; break;

	case 1: iVar0 = 200; break;

	case 26: iVar0 = 30; break;

	case 8: iVar0 = 30; break;

	case 29: iVar0 = 30; break;

	case 24: iVar0 = 30; break;

	case 2: iVar0 = 0; break;

	case 17: iVar0 = 30; break;

	case 11: iVar0 = 30; break;

	case 16: iVar0 = 30; break;

	case 18: iVar0 = 30; break;

	case 12: iVar0 = 120; break;

	case 3: iVar0 = 60; break;

	case 27: iVar0 = 60; break;

	case 19: iVar0 = 30; break;

	case 20: iVar0 = 30; break;

	case 4: iVar0 = 60; break;

	case 28: iVar0 = 30; break;

	case 13: iVar0 = 35; break;

	case 7: iVar0 = 30; break;

	case 25: iVar0 = 40; break;

	case 10: iVar0 = 30; break;

	case 22: iVar0 = 30; break;

	case 21: iVar0 = 30; break;

	case 5: iVar0 = 30; break;

	case 30: iVar0 = 60; break;

	case 9: iVar0 = 60; break;

	case 6: iVar0 = 40; break;

	case 14: iVar0 = 40; break;
	}
	return iVar0;
}

// Position - 0xB7D9
void func_234(int iParam0, int iParam1, int iParam2, int iParam3) {
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
