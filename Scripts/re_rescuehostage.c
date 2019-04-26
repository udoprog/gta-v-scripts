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
int iLocal_12 = 0;
var uLocal_13 = 0;
var uLocal_14 = 0;
float fLocal_15 = 0f;
var uLocal_16 = 0;
var uLocal_17 = 0;
int iLocal_18 = 0;
int iLocal_19 = 0;
var uLocal_20 = 0;
var uLocal_21 = 0;
char *sLocal_22 = NULL;
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
int iLocal_40 = 0;
int iLocal_41 = 0;
int iLocal_42 = 0;
int iLocal_43 = 0;
vector3 vLocal_44 = {0f, 0f, 0f};
int iLocal_47 = 0;
vector3 vLocal_48 = {0f, 0f, 0f};
float fLocal_51 = 0f;
int iLocal_52 = 0;
int iLocal_53 = 0;
int iLocal_54 = 0;
int iLocal_55 = 0;
int iLocal_56 = 0;
int iLocal_57 = 0;
int iLocal_58 = 0;
int iLocal_59 = 0;
int iLocal_60 = 0;
int iLocal_61 = 0;
int *iLocal_62 = NULL;
int iLocal_63 = 0;
int iLocal_64 = 0;
int iLocal_65 = 0;
int iLocal_66 = 0;
int iLocal_67 = 0;
int iLocal_68 = 0;
int iLocal_69 = 0;
vector3 vLocal_70 = {0f, 0f, 0f};
vector3 vLocal_73 = {0f, 0f, 0f};
bool bLocal_76 = 0;
bool bLocal_77 = 0;
int iLocal_78 = 0;
int iLocal_79 = 0;
int iLocal_80 = 0;
int iLocal_81 = 0;
int iLocal_82 = 0;
int iLocal_83 = 0;
int iLocal_84 = 0;
int iLocal_85 = 0;
int iLocal_86 = 0;
bool bLocal_87 = 0;
var uLocal_88 = 0;
var uLocal_89 = 0;
char *sLocal_90 = NULL;
char *sLocal_91 = NULL;
char *sLocal_92 = NULL;
float fLocal_93 = 0f;
float fLocal_94 = 0f;
float fLocal_95 = 0f;
float fLocal_96 = 0f;
int iLocal_97 = 0;
bool bLocal_98 = 0;
int iLocal_99 = 0;
int iLocal_100 = 0;
struct<10> Local_101[16];
var uLocal_262 = 0;
var uLocal_263 = 0;
var uLocal_264 = 0;
var uLocal_265 = 0;
int iLocal_266 = 0;
char *sLocal_267 = NULL;
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
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	iLocal_19 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_63 = 8000;
	iLocal_68 = -1;
	bLocal_87 = true;
	sLocal_92 = "NULL";
	fLocal_93 = -120f;
	fLocal_94 = 120f;
	fLocal_95 = 40f;
	fLocal_96 = 90f;
	bLocal_98 = true;
	sLocal_267 = "RANDOM@RESCUE_HOSTAGE";
	vLocal_48 = {ScriptParam_0.f_1[0 /*3*/]};
	fLocal_51 = ScriptParam_0.f_17[0];
	if (player::has_force_cleanup_occurred(11)) {
		func_157();
	}
	if (Global_33147[0] == 1) {
		script::terminate_this_thread();
	}
	if (func_115(vLocal_48, -1, 0, 0, 0)) {
		func_112(-1);
	}
	else {
		script::terminate_this_thread();
	}
	func_111();
	func_110();
	while (true) {
		system::wait(0);
		func_109();
		if (player::is_player_playing(player::player_id())) {
			player::set_all_random_peds_flee_this_frame(player::player_id());
		}
		if (brain::is_world_point_within_brain_activation_range()) {
			switch (iLocal_47) {
			case 0:
				if (func_106()) {
					iLocal_99 = gameplay::get_game_timer();
					iLocal_47 = 1;
				}
				else if (func_105()) {
					func_157();
				}
				break;

			case 1:
				if (iLocal_64 == 0) {
					iLocal_64 =
						decisionevent::add_shocking_event_at_position(99, -104.982f, 6408.737f, 30.4905f, 180000f);
				}
				func_104();
				if (!ped::is_ped_injured(iLocal_53)) {
					func_103();
				}
				else if (!ped::is_ped_injured(iLocal_54)) {
					func_99();
					func_98();
				}
				else {
					func_157();
				}
				if (bLocal_76) {
					func_96();
				}
				if (!ped::is_ped_injured(iLocal_52)) {
					if (!func_95()) {
						if (func_83()) {
							func_157();
						}
						func_68();
					}
					else if (!bLocal_76) {
						func_51();
					}
				}
				else {
					if (Local_101[1 /*10*/].f_7) {
						if (ui::does_blip_exist(iLocal_57)) {
							ui::remove_blip(&iLocal_57);
						}
						if (ui::does_blip_exist(iLocal_58)) {
							ui::remove_blip(&iLocal_58);
						}
						func_50(&Local_101, 1);
						func_48();
					}
					if (!ped::is_ped_injured(iLocal_53)) {
						if (bLocal_76) {
							if (ped::is_synchronized_scene_running(iLocal_67)) {
								if (ped::get_synchronized_scene_phase(iLocal_67) == 1f) {
									if (!ped::is_ped_injured(iLocal_53)) {
										ped::set_ped_can_ragdoll(iLocal_53, 1);
										entity::set_entity_health(iLocal_53, 0);
									}
								}
							}
						}
						else {
							if (func_47()) {
								iLocal_47 = 3;
							}
							if (!ped::is_ped_injured(iLocal_54)) {
							}
						}
					}
				}
				break;

			case 2:
				iLocal_56 = vehicle::get_random_vehicle_in_sphere(entity::get_entity_coords(player::player_ped_id(), 1),
																  35f, 0, 101383);
				if (vehicle::is_vehicle_driveable(iLocal_56, 0)) {
					if (!iLocal_100) {
						player::set_player_wanted_level_no_drop(player::player_id(), 2, 0);
						player::set_player_wanted_level_now(player::player_id(), 0);
					}
					func_157();
				}
				if (!iLocal_86) {
					if (gameplay::create_incident(7, vLocal_48, 2, 0f, &uLocal_88, 0)) {
						iLocal_86 = 1;
					}
				}
				break;

			case 3:
				if (iLocal_84) {
					if (system::timera() > 5000) {
						if (!ped::is_ped_injured(iLocal_53)) {
							ped::set_ped_keep_task(iLocal_53, 1);
							func_22();
						}
						func_157();
					}
				}
				else {
					if (func_47()) {
						if (!bLocal_77) {
							if (bLocal_87) {
								if (func_5(&Local_101, "RERHOAU", "RERHO_THANK", 4, iLocal_266, 0, 0)) {
									bLocal_77 = true;
								}
							}
							else if (func_5(&Local_101, "RERHOAU", "RERHO_NOGUN", 4, iLocal_266, 0, 0)) {
								bLocal_77 = true;
							}
						}
					}
					func_3();
					if (!ped::is_ped_injured(iLocal_53)) {
						if (gameplay::get_game_timer() > iLocal_66 + 100) {
							func_1(iLocal_53, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
							iLocal_66 = gameplay::get_game_timer();
						}
					}
					if (bLocal_77) {
						if (!iLocal_85) {
							if (!ped::is_ped_injured(iLocal_54)) {
								if (func_5(&Local_101, "RERHOAU", "RERHO_CONS", 4, iLocal_266, 0, 0)) {
									iLocal_85 = 1;
								}
							}
						}
					}
					iLocal_56 = vehicle::get_random_vehicle_in_sphere(vLocal_48, 5f, joaat("ambulance"), 0);
					if (vehicle::is_vehicle_driveable(iLocal_56, 0)) {
						system::settimera(0);
						iLocal_84 = 1;
					}
					iLocal_55 = ped::get_random_ped_at_coord(vLocal_48, 1.5f, 1.5f, 1.5f, -1);
					if (!ped::is_ped_injured(iLocal_55)) {
						system::settimera(5000);
						iLocal_84 = 1;
					}
					if (!iLocal_86 && iLocal_85) {
						if (gameplay::create_incident(5, vLocal_48, 2, 0f, &uLocal_89, 0)) {
							iLocal_86 = 1;
						}
					}
					if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1), vLocal_48) > 5625f &&
						!cam::is_sphere_visible(vLocal_48, 10f)) {
						func_22();
					}
				}
				break;
			}
		}
		else if (iLocal_47 == 3) {
			func_22();
		}
		else {
			func_157();
		}
	}
}

// Position - 0x457
void func_1(int iParam0, char *sParam1, char *sParam2, int iParam3) {
	audio::_play_ambient_speech_with_voice(iParam0, sParam1, sParam2, func_2(iParam3), 0);
}

// Position - 0x470
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

// Position - 0x65F
void func_3() {
	if (func_4()) {
		if (!ped::is_ped_injured(iLocal_53)) {
			ped::set_blocking_of_non_temporary_events(iLocal_53, 0);
			ai::task_smart_flee_coord(iLocal_53, vLocal_48, 50f, -1, 0, 0);
			ped::set_ped_keep_task(iLocal_53, 1);
			entity::set_ped_as_no_longer_needed(&iLocal_53);
			func_48();
		}
		if (!ped::is_ped_injured(iLocal_54)) {
			ped::set_blocking_of_non_temporary_events(iLocal_54, 0);
			ai::task_smart_flee_coord(iLocal_54, vLocal_48, 50f, -1, 0, 0);
			ped::set_ped_keep_task(iLocal_54, 1);
			entity::set_ped_as_no_longer_needed(&iLocal_54);
			func_48();
		}
	}
	if (!ped::is_ped_injured(iLocal_53)) {
		if (entity::has_entity_been_damaged_by_entity(iLocal_53, player::player_ped_id(), 1)) {
			if (ped::is_ped_ragdoll(iLocal_53)) {
				entity::set_entity_health(iLocal_53, 0);
			}
		}
		else if (ped::is_ped_ragdoll(iLocal_53)) {
			ped::set_blocking_of_non_temporary_events(iLocal_53, 0);
			ai::task_smart_flee_coord(iLocal_53, vLocal_48, 50f, -1, 0, 0);
			ped::set_ped_keep_task(iLocal_53, 1);
			entity::set_ped_as_no_longer_needed(&iLocal_53);
			func_48();
			if (!ped::is_ped_injured(iLocal_54)) {
				ped::set_blocking_of_non_temporary_events(iLocal_54, 0);
				ai::task_smart_flee_coord(iLocal_54, vLocal_48, 50f, -1, 0, 0);
				ped::set_ped_keep_task(iLocal_54, 1);
				entity::set_ped_as_no_longer_needed(&iLocal_54);
				func_48();
			}
		}
	}
	else if (!ped::is_ped_injured(iLocal_54)) {
		ped::set_blocking_of_non_temporary_events(iLocal_54, 0);
		ai::task_smart_flee_coord(iLocal_54, vLocal_48, 50f, -1, 0, 0);
		ped::set_ped_keep_task(iLocal_54, 1);
		entity::set_ped_as_no_longer_needed(&iLocal_54);
		func_48();
	}
	if (!ped::is_ped_injured(iLocal_54)) {
		if (entity::has_entity_been_damaged_by_entity(iLocal_54, player::player_ped_id(), 1)) {
			if (ped::is_ped_ragdoll(iLocal_54)) {
				entity::set_entity_health(iLocal_54, 0);
			}
		}
		else if (ped::is_ped_ragdoll(iLocal_54)) {
			ped::set_blocking_of_non_temporary_events(iLocal_54, 0);
			ai::task_smart_flee_coord(iLocal_54, vLocal_48, 50f, -1, 0, 0);
			ped::set_ped_keep_task(iLocal_54, 1);
			entity::set_ped_as_no_longer_needed(&iLocal_54);
			func_48();
			if (!ped::is_ped_injured(iLocal_53)) {
				ped::set_blocking_of_non_temporary_events(iLocal_53, 0);
				ai::task_smart_flee_coord(iLocal_53, vLocal_48, 50f, -1, 0, 0);
				ped::set_ped_keep_task(iLocal_53, 1);
				entity::set_ped_as_no_longer_needed(&iLocal_53);
				func_48();
			}
		}
	}
	else if (!ped::is_ped_injured(iLocal_53)) {
		ped::set_blocking_of_non_temporary_events(iLocal_53, 0);
		ai::task_smart_flee_coord(iLocal_53, vLocal_48, 50f, -1, 0, 0);
		ped::set_ped_keep_task(iLocal_53, 1);
		entity::set_ped_as_no_longer_needed(&iLocal_53);
		func_48();
	}
}

// Position - 0x868
bool func_4() {
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;

	vVar1 = {15f, 15f, 10f};
	vVar4 = {-15f, -15f, -10f};
	if (!ped::is_ped_injured(iLocal_53)) {
		if (gameplay::is_bullet_in_area(ped::get_ped_bone_coords(iLocal_53, 31086, 0f, 0f, 0f), 15f, 1)) {
			bVar0 = true;
		}
		vVar1 = {vVar1 + ped::get_ped_bone_coords(iLocal_53, 31086, 0f, 0f, 0f)};
		vVar4 = {vVar4 + ped::get_ped_bone_coords(iLocal_53, 31086, 0f, 0f, 0f)};
		if (gameplay::is_projectile_type_in_area(vVar4, vVar1, joaat("weapon_smokegrenade"), 1) ||
			gameplay::is_projectile_type_in_area(vVar4, vVar1, joaat("weapon_grenade"), 1) ||
			gameplay::is_projectile_type_in_area(vVar4, vVar1, joaat("weapon_stickybomb"), 1)) {
			bLocal_98 = true;
			bVar0 = true;
		}
		if (fire::is_explosion_in_angled_area(-1, -90.68654f, 6411.883f, 36.00729f, -103.86f, 6398.848f, 30.19453f,
											  23f) ||
			fire::is_explosion_in_sphere(-1, ped::get_ped_bone_coords(iLocal_53, 31086, 0f, 0f, 0f), 20f)) {
			bLocal_98 = true;
			bVar0 = true;
		}
		if (graphics::_0x2F09F7976C512404(ped::get_ped_bone_coords(iLocal_53, 31086, 0f, 0f, 0f), 6f)) {
			bVar0 = true;
			bLocal_98 = true;
		}
	}
	if (!ped::is_ped_injured(iLocal_54)) {
		if (entity::has_entity_been_damaged_by_entity(iLocal_54, player::player_ped_id(), 1)) {
			bVar0 = true;
		}
	}
	else {
		bVar0 = true;
	}
	if (bVar0) {
	}
	return bVar0;
}

// Position - 0x9C0
bool func_5(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_21(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_6(sParam2, iParam3, 0);
}

// Position - 0xA0E
int func_6(char *sParam0, int iParam1, int iParam2) {
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
					func_20();
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
		if (func_19(8, -1)) {
			return 0;
		}
		Global_15821 = {Global_15815};
		func_18();
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
			gameplay::clear_bit(&Global_2313, 20);
			gameplay::clear_bit(&Global_2314, 17);
			gameplay::clear_bit(&Global_2315, 0);
			if (iParam2) {
				func_11();
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
				if (func_10()) {
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
			if (func_9()) {
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
				if (gameplay::is_bit_set(Global_2313, 9)) {
					return 0;
				}
			}
			func_8();
			Global_15755 = iParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_7();
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
		func_20();
	}
	return 0;
}

// Position - 0xCDA
void func_7() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69) {
		StringCopy(&Global_14613[iVar0 /*6*/], "", 24);
		iVar0++;
	}
	audio::stop_scripted_conversation(0);
	Global_15745 = 1;
}

// Position - 0xD0C
void func_8() {
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
	gameplay::clear_bit(&Global_2314, 16);
}

// Position - 0xDA1
bool func_9() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return true;
	}
	return false;
}

// Position - 0xDC8
bool func_10() {
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

// Position - 0xE61
void func_11() {
	if (func_17(14)) {
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
		Global_14443 = func_12();
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

// Position - 0xF03
int func_12() {
	func_13();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0xF1C
void func_13() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_16(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_15(player::player_ped_id());
			if (func_14(iVar0) && (!func_17(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_14(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x1019
bool func_14(int iParam0) { return iParam0 < 3; }

// Position - 0x1025
int func_15(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_16(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x1062
int func_16(int iParam0) {
	if (func_14(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x108C
bool func_17(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x109A
void func_18() {
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

// Position - 0x10F2
bool func_19(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x112D
void func_20() {
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

// Position - 0x1184
void func_21(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5) {
	Global_15199 = {*uParam0};
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
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

// Position - 0x11DA
void func_22() {
	player::clear_player_wanted_level(player::player_id());
	func_46();
	func_26(-1, 0);
	func_23();
	func_157();
}

// Position - 0x11FD
void func_23() { func_24(); }

// Position - 0x120A
int func_24() {
	if (func_25(0)) {
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

// Position - 0x1255
bool func_25(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x1280
void func_26(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		iParam0 = func_44();
	}
	if (iParam0 == -1) {
		return;
	}
	if (iParam1 <= func_43(iParam0)) {
		func_42(iParam0, iParam1);
		if (!func_41(51)) {
			func_37("RE_REWARD", 1, 0, 4000, 10000, func_40(), 0, 138, 0);
			func_36(51);
		}
		if (func_35(iParam0)) {
			Global_101700.f_23954.f_2 = 3;
		}
		if (func_34(iParam0, iParam1) != 322) {
			func_28(func_34(iParam0, iParam1), vLocal_44.x, vLocal_44.y);
		}
		Global_101688 = iParam1;
		if (Global_101686 == 0) {
			if (Global_101689 == 1 || Global_101689 == 5 || Global_101689 == 11 || Global_101689 == 25) {
				func_27(2);
			}
			else if (Global_101689 == 26 || Global_101689 == 8 || Global_101689 == 17) {
				func_27(7);
			}
			else {
				func_27(1);
			}
		}
	}
}

// Position - 0x1384
void func_27(int iParam0) { Global_101686 = iParam0; }

// Position - 0x1392
void func_28(int iParam0, var uParam1, var uParam2) {
	bool bVar0;

	if (iParam0 < 0) {
	}
	if (iParam0 == 321 || iParam0 > 321) {
	}
	else {
		func_32(891 + iParam0, 1, -1, 1);
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
		func_29();
	}
}

// Position - 0x147A
void func_29() {
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
		func_31(13, system::floor(Global_101700.f_9153.f_3853));
	}
	if (!datafile::datafile_is_save_pending()) {
		if (!Global_69702) {
			if (func_30() == 2 == 0 && !network::network_is_game_in_progress()) {
				if (network::network_is_cloud_available()) {
					Global_101434 = 0;
				}
				if (!Global_55822) {
					func_24();
				}
			}
		}
	}
}

// Position - 0x193B
int func_30() { return Global_25190; }

// Position - 0x1946
int func_31(int iParam0, int iParam1) {
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

// Position - 0x1997
int func_32(int iParam0, int iParam1, int iParam2, int iParam3) {
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
		iParam2 = func_33();
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

// Position - 0x1D2B
var func_33() { return Global_1312735; }

// Position - 0x1D37
int func_34(int iParam0, int iParam1) {
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

// Position - 0x20AB
bool func_35(int iParam0) {
	switch (iParam0) {
	case 29:
	case 30:
	case 2:
	case 18: return false;
	}
	return true;
}

// Position - 0x20DA
void func_36(int iParam0) {
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

// Position - 0x211C
void func_37(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8) {
	func_38(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x213E
void func_38(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, var uParam9) {
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
		func_39();
	}
}

// Position - 0x2312
void func_39() {
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

// Position - 0x2432
int func_40() {
	func_13();
	switch (Global_101700.f_2095.f_539.f_3549) {
	case 0: return 1;

	case 1: return 2;

	case 2: return 4;
	}
	return 0;
}

// Position - 0x2478
int func_41(int iParam0) {
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

// Position - 0x24BB
void func_42(int iParam0, int iParam1) { gameplay::set_bit(&Global_101700.f_23954.f_8[iParam0], iParam1); }

// Position - 0x24D6
int func_43(int iParam0) {
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

// Position - 0x2587
int func_44() {
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, script::get_this_script_name(), 64);
	iVar16 = func_45(Var0);
	return iVar16;
}

// Position - 0x25A4
int func_45(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5,
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

// Position - 0x277E
int func_46() { return 1; }

// Position - 0x2787
bool func_47() {
	if (!iLocal_81) {
		system::wait(0);
		if (!ped::is_ped_injured(iLocal_53)) {
			if (iLocal_68 == -1) {
				ped::set_ped_can_ragdoll(iLocal_53, 0);
				gameplay::set_dispatch_time_between_spawn_attempts_multiplier(5, 0.5f);
				gameplay::set_dispatch_time_between_spawn_attempts(5, 1f);
				ped::set_ped_generates_dead_body_events(iLocal_53, 1);
				ped::set_ped_suffers_critical_hits(iLocal_53, 1);
				ai::task_play_anim(iLocal_53, sLocal_267, "girl_villian_shot", 8f, -2f, -1, 10, 0, 0, 0, 0);
				iLocal_68 = ped::create_synchronized_scene(vLocal_70, vLocal_73, 2);
				if (!ped::is_ped_injured(iLocal_54)) {
					ped::set_ped_relationship_group_hash(iLocal_54, iLocal_59);
					if (!entity::is_entity_in_angled_area(player::player_ped_id(), -91.30704f, 6391.854f, 30.6403f,
														  -102.5595f, 6403.103f, 32.45444f, 8.5f, 0, 1, 0)) {
						ai::task_synchronized_scene(iLocal_54, iLocal_68, sLocal_267, "bystander_villian_shot", 1000f,
													-2f, 5, 0, 1148846080, 0);
					}
					else {
						ped::set_blocking_of_non_temporary_events(iLocal_54, 0);
					}
				}
				ai::task_synchronized_scene(iLocal_53, iLocal_68, sLocal_267, "girl_villian_shot", 1000f, -2f, 5, 0,
											1148846080, 0);
			}
			else if (ped::is_synchronized_scene_running(iLocal_68)) {
				if (ped::get_synchronized_scene_phase(iLocal_68) > 0.1f) {
					func_3();
				}
				if (!iLocal_78) {
					if (bLocal_87) {
						if (ped::get_synchronized_scene_phase(iLocal_68) > 0.5f) {
							if (func_5(&Local_101, "RERHOAU", "RERHO_SAINT", 4, iLocal_266, 0, 0)) {
								iLocal_78 = 1;
							}
						}
					}
					else if (func_5(&Local_101, "RERHOAU", "RERHO_THANK", 4, iLocal_266, 0, 0)) {
						iLocal_78 = 1;
					}
				}
				if (ped::get_synchronized_scene_phase(iLocal_68) == 1f) {
					iLocal_68 = ped::create_synchronized_scene(vLocal_70, vLocal_73, 2);
					func_1(iLocal_53, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
					ped::set_synchronized_scene_looped(iLocal_68, 1);
					if (!ped::is_ped_injured(iLocal_54)) {
						if (bLocal_87) {
							ai::task_synchronized_scene(iLocal_54, iLocal_68, sLocal_267, "bystander_helping_girl_loop",
														1000f, -2f, 5, 0, 1148846080, 0);
						}
						else {
							ai::open_sequence_task(&iLocal_79);
							ai::task_look_at_entity(0, iLocal_53, -1, 1024, 2);
							ai::task_go_to_entity(0, iLocal_53, 20000, 3f, 1f, 1073741824, 0);
							ai::task_stand_still(0, -1);
							ai::close_sequence_task(iLocal_79);
							ai::task_perform_sequence(iLocal_54, iLocal_79);
						}
						ped::set_ped_keep_task(iLocal_54, 1);
						ped::set_ped_relationship_group_hash(iLocal_54, iLocal_61);
					}
					ai::task_synchronized_scene(iLocal_53, iLocal_68, sLocal_267, "girl_helping_girl_loop", 1000f, -2f,
												5, 0, 1148846080, 0);
					ped::set_ped_keep_task(iLocal_53, 1);
					ped::set_ped_relationship_group_hash(iLocal_53, iLocal_61);
					ped::set_ped_can_ragdoll(iLocal_53, 1);
					player::set_wanted_level_multiplier(1f);
					iLocal_81 = 1;
				}
			}
		}
	}
	return iLocal_81;
}

// Position - 0x29E3
void func_48() {
	Global_14611 = 0;
	func_49();
}

// Position - 0x29F3
void func_49() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
	}
}

// Position - 0x2A14
void func_50(var *uParam0, int iParam1) {
	if ((*uParam0)[iParam1 /*10*/].f_7 == 1) {
		(*uParam0)[iParam1 /*10*/].f_7 = 0;
	}
}

// Position - 0x2A31
void func_51() {
	if (entity::is_entity_in_angled_area(player::player_ped_id(), -91.30704f, 6391.854f, 30.6403f, -102.5595f,
										 6403.103f, 32.45444f, 8.5f, 0, 1, 0) &&
			ped::_0x6CD5A433374D4CFB(iLocal_52, player::player_ped_id()) ||
		func_61(iLocal_52, &iLocal_62, &iLocal_63, 0, 0, 1077936128, 0) &&
			ped::_0x6CD5A433374D4CFB(iLocal_52, player::player_ped_id()) ||
		func_60(1) && ped::_0x6CD5A433374D4CFB(iLocal_52, player::player_ped_id()) || func_58() || func_57() ||
		func_4() || func_56() || ped::is_ped_ragdoll(iLocal_52) || func_55() || func_54() || func_52(iLocal_52)) {
		if (!ped::is_ped_performing_stealth_kill(player::player_ped_id())) {
			if (!weapon::has_ped_been_damaged_by_weapon(iLocal_52, joaat("weapon_stungun"), 0)) {
				if (!ped::is_ped_injured(iLocal_53)) {
					if (!ped::is_ped_ragdoll(iLocal_52)) {
						iLocal_67 = ped::create_synchronized_scene(vLocal_70, vLocal_73, 2);
						ped::set_synchronized_scene_looped(iLocal_67, 0);
						ai::task_synchronized_scene(iLocal_53, iLocal_67, sLocal_267, "girl_girl_shot", 4f, -4f, 5, 0,
													1148846080, 0);
						ai::task_synchronized_scene(iLocal_52, iLocal_67, sLocal_267, "villian_girl_shot", 4f, -4f, 5,
													0, 1148846080, 0);
						ped::set_ped_keep_task(iLocal_53, 1);
						ped::set_ped_can_ragdoll(iLocal_53, 0);
					}
				}
				if (!ped::is_ped_injured(iLocal_54)) {
					ped::set_ped_can_ragdoll(iLocal_54, 1);
				}
				bLocal_76 = true;
			}
			else {
				entity::set_entity_health(iLocal_52, 50);
			}
		}
	}
	else if (system::timera() > 6000) {
		if (player::is_player_free_aiming_at_entity(player::player_id(), iLocal_52) &&
				ped::_0x6CD5A433374D4CFB(iLocal_52, player::player_ped_id()) ||
			player::is_player_targetting_entity(player::player_id(), iLocal_52) &&
				ped::_0x6CD5A433374D4CFB(iLocal_52, player::player_ped_id())) {
			if (ui::does_blip_exist(iLocal_57)) {
				ui::_0x75A16C3DA34F1245(iLocal_57, 1);
			}
			if (!iLocal_80) {
				if (!entity::is_entity_in_angled_area(player::player_ped_id(), -91.30704f, 6391.854f, 30.6403f,
													  -102.5595f, 6403.103f, 32.45444f, 8.5f, 0, 1, 0)) {
					if (func_5(&Local_101, "RERHOAU", sLocal_91, 4, 0, 0, 0)) {
						iLocal_63 = 24000;
					}
					system::settimera(0);
					iLocal_80 = 1;
				}
			}
		}
		else if (gameplay::are_strings_equal(sLocal_92, "NULL")) {
			switch (gameplay::get_random_int_in_range(0, 10)) {
			case 6:
			case 5:
			case 4:
			case 3:
			case 0:
			case 9:
			case 8:
			case 7:
			case 1:
				if (iLocal_97) {
					sLocal_92 = "RERHO_HELP";
					iLocal_97 = 0;
				}
				else {
					sLocal_92 = "RERHO_RANT";
					iLocal_97 = 1;
				}
				break;

			case 2: sLocal_92 = "RERHO_SCREAM"; break;
			}
		}
		else if (func_5(&Local_101, "RERHOAU", sLocal_92, 4, iLocal_266, 0, 0)) {
			system::settimera(0);
		}
	}
	else {
		sLocal_92 = "NULL";
	}
}

// Position - 0x2D09
int func_52(int iParam0) {
	int iVar0;
	bool bVar1;

	bVar1 = false;
	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	if (ped::is_ped_injured(iParam0)) {
		return 0;
	}
	weapon::get_current_ped_weapon(player::player_ped_id(), &iVar0, 1);
	if (weapon::has_ped_got_weapon_component(player::player_ped_id(), iVar0, joaat("component_at_ar_flsh"))) {
		if (weapon::is_ped_weapon_component_active(player::player_ped_id(), iVar0, joaat("component_at_ar_flsh"))) {
			bVar1 = true;
		}
	}
	else if (weapon::has_ped_got_weapon_component(player::player_ped_id(), iVar0, joaat("component_at_pi_flsh"))) {
		if (weapon::is_ped_weapon_component_active(player::player_ped_id(), iVar0, joaat("component_at_pi_flsh"))) {
			bVar1 = true;
		}
	}
	if (bVar1) {
		if (player::is_player_free_aiming_at_entity(player::player_id(), iParam0) ||
			player::is_player_targetting_entity(player::player_id(), iParam0)) {
			if (system::vdist(entity::get_entity_coords(iParam0, 1), func_53(player::player_id())) < 8f) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x2DCF
Vector3 func_53(int iParam0) { return entity::get_entity_coords(player::get_player_ped(iParam0), 0); }

// Position - 0x2DE2
int func_54() {
	if (func_95()) {
		if (gameplay::get_game_timer() > iLocal_99 + 60000) {
			iLocal_100 = 1;
			return 1;
		}
	}
	else if (gameplay::get_game_timer() > iLocal_99 + 120000) {
		iLocal_100 = 1;
		return 1;
	}
	return 0;
}

// Position - 0x2E1F
int func_55() {
	float fVar0;
	var uVar1[32];
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;

	fVar0 = 75f;
	iVar36 = ped::get_random_ped_at_coord(entity::get_entity_coords(iLocal_52, 0), fVar0, fVar0, fVar0, -1);
	if (!ped::is_ped_injured(iVar36)) {
		if (entity::get_entity_model(iVar36) == joaat("s_f_y_cop_01") ||
			entity::get_entity_model(iVar36) == joaat("s_m_y_cop_01")) {
			return 1;
		}
	}
	iVar37 = vehicle::get_random_vehicle_in_sphere(entity::get_entity_coords(iLocal_52, 0), fVar0, 0, 66561);
	if (vehicle::is_vehicle_driveable(iVar37, 0)) {
		return 1;
	}
	iVar35 = ped::get_ped_nearby_vehicles(iLocal_52, &uVar1);
	if (iVar35 > 0) {
		iVar34 = 0;
		while (iVar34 < iVar35) {
			if (vehicle::is_vehicle_driveable(uVar1[iVar34], 0)) {
				if (entity::get_entity_model(uVar1[iVar34]) == joaat("police") ||
					entity::get_entity_model(uVar1[iVar34]) == joaat("pranger") ||
					entity::get_entity_model(uVar1[iVar34]) == joaat("sheriff") ||
					entity::get_entity_model(uVar1[iVar34]) == joaat("sheriff2")) {
					return 1;
				}
			}
			iVar34++;
		}
	}
	return 0;
}

// Position - 0x2F24
int func_56() {
	if (entity::is_entity_at_entity(iLocal_52, player::player_ped_id(), 2f, 2f, 1.5f, 0, 1, 0)) {
		if (player::can_ped_hear_player(player::player_id(), iLocal_52)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x2F55
bool func_57() {
	bool bVar0;

	bVar0 = false;
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (entity::get_entity_model(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0)) == joaat("bulldozer")) {
			if (!ped::is_ped_injured(iLocal_54)) {
				if (entity::is_entity_touching_entity(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0),
													  iLocal_54)) {
					bVar0 = true;
				}
			}
			if (!ped::is_ped_injured(iLocal_53)) {
				if (entity::is_entity_touching_entity(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0),
													  iLocal_53)) {
					bVar0 = true;
				}
			}
			if (!ped::is_ped_injured(iLocal_52)) {
				if (entity::is_entity_touching_entity(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0),
													  iLocal_52)) {
					bVar0 = true;
				}
			}
		}
	}
	if (bVar0) {
	}
	return bVar0;
}

// Position - 0x2FE5
bool func_58() {
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	var uVar5;
	struct<2> Var8;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;

	bVar0 = false;
	bVar1 = false;
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		gameplay::get_model_dimensions(entity::get_entity_model(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0)),
									   &uVar5, &Var8);
		fVar12 = Var8.f_1;
		if (vehicle::is_vehicle_attached_to_trailer(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0))) {
			if (vehicle::get_vehicle_trailer_vehicle(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), &iVar14)) {
				gameplay::get_model_dimensions(entity::get_entity_model(iVar14), &uVar5, &Var8);
				fVar12 += Var8.f_1;
				fVar12 += 3f;
			}
		}
		if (entity::get_entity_speed(player::player_ped_id()) > 15f) {
			if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_52, fVar12 + 17f, fVar12 + 17f, 6f, 0, 1,
											0)) {
				bVar1 = true;
			}
		}
		else if (entity::get_entity_speed(player::player_ped_id()) > 10f) {
			if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_52, fVar12 + 12f, fVar12 + 12f, 6f, 0, 1,
											0)) {
				bVar1 = true;
			}
		}
		else if (entity::get_entity_speed(player::player_ped_id()) > 5f) {
			if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_52, fVar12 + 8f, fVar12 + 8f, 6f, 0, 1,
											0)) {
				bVar1 = true;
			}
		}
	}
	if (bVar1) {
		vVar2 = {entity::get_entity_coords(player::player_ped_id(), 1) - vLocal_48};
		fVar11 = gameplay::get_heading_from_vector_2d(vVar2.x, vVar2.y);
		if (func_59(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), fVar11, 15f)) {
			bVar0 = true;
		}
		vVar2 = {vLocal_48 - entity::get_entity_coords(player::player_ped_id(), 1)};
		fVar11 = gameplay::get_heading_from_vector_2d(vVar2.x, vVar2.y);
		if (func_59(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), fVar11, 15f)) {
			bVar0 = true;
		}
	}
	iVar13 = player::get_players_last_vehicle();
	if (entity::does_entity_exist(iVar13)) {
		if (entity::is_entity_in_angled_area(iVar13, -91.56341f, 6391.747f, 30.6397f, -101.2611f, 6401.7f, 32.45449f,
											 7.5f, 0, 1, 0)) {
			bVar0 = true;
		}
	}
	if (bVar0) {
	}
	return bVar0;
}

// Position - 0x31B7
bool func_59(int iParam0, float fParam1, float fParam2) {
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

// Position - 0x323E
int func_60(int iParam0) {
	if (iParam0 == 1) {
		if (Global_14443.f_1 > 3) {
			if (gameplay::is_bit_set(Global_2313, 14)) {
				return 1;
			}
			else {
				return 0;
			}
		}
		else {
			return 0;
		}
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) > 0) {
		return 1;
	}
	if (Global_14443.f_1 > 3) {
		return 1;
	}
	return 0;
}

// Position - 0x3298
int func_61(int iParam0, int *iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6) {
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	iVar2 = 0;
	if (!entity::is_entity_dead(iParam0, 0) && !iParam4) {
		if (ped::is_ped_on_foot(iParam0)) {
			fVar1 = fParam5;
		}
		else {
			fVar1 = fParam5 + 3f;
		}
	}
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (!entity::is_entity_dead(iParam0, 0) && !iParam4) {
			vVar3 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			vVar6 = {entity::get_entity_coords(iParam0, 1)};
			fVar9 = system::vdist(vVar3, vVar6);
			if (!gameplay::is_bit_set(iParam3, 3)) {
				if (func_67(iParam0, iParam6)) {
					func_66("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_66("	aggroReason = EAggro_Attacked\n");
					*iParam1 = 3;
					func_65(iParam0);
					return 1;
				}
			}
			if (!gameplay::is_bit_set(iParam3, 1)) {
				if (fVar1 < 20f) {
				}
				if (gameplay::is_bullet_in_area(vVar6, fParam5, 1)) {
					func_66("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_66("	aggroReason = EAggro_ShotNear\n");
					*iParam1 = 1;
					func_65(iParam0);
					return 1;
				}
				if (gameplay::is_projectile_in_area(vVar6 - Vector(fParam5 / 2f, fParam5 / 2f, fParam5 / 2f),
													vVar6 + Vector(fParam5 / 2f, fParam5 / 2f, fParam5 / 2f), 0)) {
					func_66("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_66("	aggroReason = EAggro_ShotNear\n");
					*iParam1 = 1;
					func_65(iParam0);
					return 1;
				}
			}
			if (!gameplay::is_bit_set(iParam3, 2)) {
				fVar0 = weapon::_get_lockon_range_of_current_ped_weapon(player::player_ped_id());
				if (fVar0 < 0f) {
					fVar0 = 25f;
				}
				else if (fVar0 > 25f) {
					fVar0 = 25f;
				}
				if (weapon::is_ped_armed(player::player_ped_id(), 6)) {
					if (player::is_player_targetting_entity(player::player_id(), iParam0) ||
						player::is_player_free_aiming_at_entity(player::player_id(), iParam0)) {
						if (fVar9 < fVar0) {
							if (entity::has_entity_clear_los_to_entity(iParam0, player::player_ped_id(), 17)) {
								func_66("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								func_66("	aggro Ped knows player is pointing "
										"gun\n");
								func_62("		lockOnTimer = ", *iParam2);
								func_66("\n");
								func_62("		time since not LockedOn = ", gameplay::get_game_timer() - iLocal_2);
								func_66("\n");
								iVar2 = 1;
								if (gameplay::get_game_timer() > iLocal_2 + *iParam2) {
									func_66("			aggroReason = "
											"EAggro_HostileOrEnemy\n");
									*iParam1 = 2;
									func_65(iParam0);
									return 1;
								}
							}
						}
						else {
							iVar2 = 0;
						}
					}
					else {
						iVar2 = 0;
					}
				}
			}
			if (!gameplay::is_bit_set(iParam3, 0)) {
				if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
					func_66("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					func_66("			aggroReason = EAggro_Danger\n");
					*iParam1 = 0;
					func_65(iParam0);
					return 1;
				}
			}
		}
	}
	if (!iVar2) {
		iLocal_2 = gameplay::get_game_timer();
	}
	return 0;
}

// Position - 0x34F6
void func_62(char *sParam0, int iParam1) {
	func_64(sParam0);
	func_63(iParam1);
}

// Position - 0x350A
void func_63(int iParam0) {
	if (iParam0 > 0) {
	}
}

// Position - 0x3518
void func_64(char *sParam0) {
	if (gameplay::are_strings_equal(sParam0, sParam0)) {
	}
}

// Position - 0x352B
void func_65(int iParam0) { audio::stop_current_playing_ambient_speech(iParam0); }

// Position - 0x3539
void func_66(char *sParam0) { func_64(sParam0); }

// Position - 0x3547
bool func_67(int iParam0, int iParam1) {
	if (ped::is_ped_on_foot(player::player_ped_id())) {
		if (entity::has_entity_been_damaged_by_entity(iParam0, player::player_ped_id(), 1)) {
			return true;
		}
	}
	else if (entity::has_entity_been_damaged_by_entity(iParam0, player::player_ped_id(), 1)) {
		if (ped::get_ped_max_health(iParam0) - entity::get_entity_health(iParam0) > iParam1) {
			return true;
		}
	}
	return false;
}

// Position - 0x3594
void func_68() {
	if (entity::is_entity_in_angled_area(player::player_ped_id(), -62.6571f, 6447.08f, 40.49928f, -153.6411f, 6354.579f,
										 23.99063f, 144.25f, 0, 1, 0) ||
		cam::is_sphere_visible(vLocal_48, 15f) || bLocal_76 || func_4()) {
		iLocal_57 = func_79(iLocal_52, 1, 0);
		if (ui::does_blip_exist(iLocal_57)) {
			ui::_0x75A16C3DA34F1245(iLocal_57, 0);
		}
		func_69(1);
		iLocal_99 = gameplay::get_game_timer();
		ped::set_create_random_cops(0);
	}
	else {
		func_51();
	}
}

// Position - 0x3624
int func_69(int iParam0) {
	if (func_73()) {
		Global_101690 = 1;
		Global_101687 = gameplay::get_game_timer();
		if (func_35(Global_101689)) {
			func_70(0);
		}
		ui::set_mission_name(1, "RE_TITLE");
		if (iParam0 && func_35(Global_101689)) {
			ui::flash_minimap_display();
		}
		return 1;
	}
	return 0;
}

// Position - 0x3677
void func_70(int iParam0) {
	switch (iParam0) {
	case 0:
		if (Global_101700.f_23954.f_2 < 3) {
			if (!ui::is_help_message_on_screen()) {
				func_71(func_72(iParam0), -1);
				Global_101700.f_23954.f_2++;
				gameplay::set_bit(&Global_101696, 0);
			}
		}
		break;

	case 1:
		if (!gameplay::is_bit_set(Global_101696, 1)) {
			if (!ui::is_help_message_on_screen()) {
				func_71(func_72(iParam0), -1);
				Global_101700.f_23954.f_3++;
				gameplay::set_bit(&Global_101696, 1);
			}
		}
		break;

	case 2:
		if (!gameplay::is_bit_set(Global_101696, 2)) {
			if (!ui::is_help_message_on_screen()) {
				func_71(func_72(iParam0), -1);
				Global_101700.f_23954.f_4++;
				gameplay::set_bit(&Global_101696, 2);
			}
		}
		break;
	}
}

// Position - 0x3758
void func_71(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x376F
char *func_72(int iParam0) {
	char *sVar0;

	sVar0 = "";
	switch (iParam0) {
	case 0: sVar0 = "AM_H_REFS"; break;

	case 1: sVar0 = "RE_FLASHBLIP"; break;

	case 2: sVar0 = "RE_HANDOVER"; break;
	}
	return sVar0;
}

// Position - 0x37B3
bool func_73() {
	switch (func_74(&Global_25249, 0, 5, 0, script::get_id_of_this_thread())) {
	case 1: return true;

	case 0: return true;
	}
	return false;
}

// Position - 0x37E9
int func_74(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
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
		if (func_78(0)) {
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
		if (!func_76(iParam2)) {
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
			func_75(iParam0, iParam4);
		}
	}
	return 2;
}

// Position - 0x3920
void func_75(int *iParam0, int iParam1) {
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

// Position - 0x396F
bool func_76(int iParam0) { return func_77(iParam0, Global_35781); }

// Position - 0x3980
int func_77(int iParam0, int iParam1) {
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

// Position - 0x3B61
bool func_78(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_76(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x3B83
int func_79(int iParam0, int iParam1, int iParam2) {
	iParam2 = iParam2;
	return func_80(iParam0, iParam1, 145);
}

// Position - 0x3B99
int func_80(int iParam0, bool bParam1, int iParam2) {
	int iVar0;

	iVar0 = func_81(iParam0, !bParam1, 0);
	if (iParam2 != 145 && ui::does_blip_exist(iVar0) &&
		ui::does_text_label_exist(&Global_101700.f_27009[iParam2 /*29*/].f_3)) {
		ui::set_blip_name_from_text_file(iVar0, &Global_101700.f_27009[iParam2 /*29*/].f_3);
	}
	return iVar0;
}

// Position - 0x3BEB
int func_81(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	iVar0 = ui::add_blip_for_entity(iParam0);
	if (entity::is_entity_a_vehicle(iParam0)) {
		ui::set_blip_scale(iVar0, func_82(network::network_is_game_in_progress(), 1f, 1f));
		if (!iParam2) {
			ui::set_blip_as_friendly(iVar0, iParam1);
		}
		else {
			ui::set_blip_colour(iVar0, 2);
		}
	}
	else if (entity::is_entity_a_ped(iParam0)) {
		ui::set_blip_scale(iVar0, func_82(network::network_is_game_in_progress(), 0.7f, 0.7f));
		ui::set_blip_as_friendly(iVar0, iParam1);
	}
	else if (entity::is_entity_an_object(iParam0)) {
		ui::set_blip_scale(iVar0, func_82(network::network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

// Position - 0x3C8F
var func_82(bool bParam0, float fParam1, float fParam2) {
	if (bParam0) {
		return fParam1;
	}
	return fParam2;
}

// Position - 0x3CA6
bool func_83() {
	if (!func_76(5)) {
		return true;
	}
	if (func_91()) {
		return true;
	}
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (system::vmag2(entity::get_entity_velocity(player::player_ped_id())) > 1369f && !func_90()) {
			return false;
		}
	}
	if (func_84(100f, 1) != -1) {
		return true;
	}
	return false;
}

// Position - 0x3D08
int func_84(float fParam0, int iParam1) {
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
		if (func_14(func_12())) {
			iVar36 = func_40();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63) {
				iVar32 = iVar37;
				if (gameplay::is_bit_set(Global_101700.f_17533[iVar32 /*6*/], 2) &&
					!gameplay::is_bit_set(Global_101700.f_17533[iVar32 /*6*/], 3)) {
					func_85(iVar32, &Var0);
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

// Position - 0x3DBF
void func_85(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0:
		func_86(uParam1, "Abigail1", func_88(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0,
				"ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
		break;

	case 1:
		func_86(uParam1, "Abigail2", func_88(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0,
				-1, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
		break;

	case 2:
		func_86(uParam1, "Barry1", func_88(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1,
				4, 1, 0, 2359, func_87(iParam0), 1, 0);
		break;

	case 3:
		func_86(uParam1, "Barry2", func_88(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1,
				4, 4, 0, 2359, func_87(iParam0), 1, 1);
		break;

	case 4:
		func_86(uParam1, "Barry3", func_88(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0,
				2359, func_87(iParam0), 0, 0);
		break;

	case 5:
		func_86(uParam1, "Barry3A", func_88(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "",
				166, 0, 7, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
		break;

	case 6:
		func_86(uParam1, "Barry3C", func_88(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0,
				7, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
		break;

	case 7:
		func_86(uParam1, "Barry4", func_88(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4",
				0, 0, -1, 4, 2, 800, 2000, func_87(iParam0), 0, 0);
		break;

	case 8:
		func_86(uParam1, "Dreyfuss1", func_88(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106,
				0, "", 0, 0, -1, 4, 2, 0, 2359, func_87(iParam0), 0, 0);
		break;

	case 9:
		func_86(uParam1, "Epsilon1", func_88(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10,
				4, 1, 0, 2359, func_87(iParam0), 0, 0);
		break;

	case 10:
		func_86(uParam1, "Epsilon2", func_88(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11,
				4, 1, 0, 2359, func_87(iParam0), 1, 0);
		break;

	case 11:
		func_86(uParam1, "Epsilon3", func_88(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars",
				0, 0, 12, 4, 1, 0, 2359, func_87(iParam0), 0, 0);
		break;

	case 12:
		func_86(uParam1, "Epsilon4", func_88(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16,
				"postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_87(iParam0), 0, 0);
		break;

	case 13:
		func_86(uParam1, "Epsilon5", func_88(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes",
				0, 0, 14, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
		break;

	case 14:
		func_86(uParam1, "Epsilon6", func_88(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0,
				15, 4, 1, 0, 2359, func_87(iParam0), 0, 1);
		break;

	case 15:
		func_86(uParam1, "Epsilon7", func_88(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert",
				0, 0, 16, 4, 1, 0, 2359, func_87(iParam0), 0, 0);
		break;

	case 16:
		func_86(uParam1, "Epsilon8", func_88(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16,
				"epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_87(iParam0), 1, 0);
		break;

	case 17:
		func_86(uParam1, "Extreme1", func_88(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18,
				4, 2, 0, 2359, func_87(iParam0), 0, 1);
		break;

	case 18:
		func_86(uParam1, "Extreme2", func_88(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0,
				19, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
		break;

	case 19:
		func_86(uParam1, "Extreme3", func_88(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20,
				4, 2, 0, 2359, func_87(iParam0), 0, 1);
		break;

	case 20:
		func_86(uParam1, "Extreme4", func_88(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0,
				-1, 4, 2, 0, 2359, func_87(iParam0), 0, 0);
		break;

	case 21:
		func_86(uParam1, "Fanatic1", func_88(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1,
				-1, 4, 1, 700, 2000, func_87(iParam0), 1, 0);
		break;

	case 22:
		func_86(uParam1, "Fanatic2", func_88(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1,
				-1, 4, 4, 700, 2000, func_87(iParam0), 1, 0);
		break;

	case 23:
		func_86(uParam1, "Fanatic3", func_88(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4,
				2, 700, 2000, func_87(iParam0), 0, 1);
		break;

	case 24:
		func_86(uParam1, "Hao1", func_88(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0,
				"controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_87(iParam0), 0, 1);
		break;

	case 25:
		func_86(uParam1, "Hunting1", func_88(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1,
				26, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
		break;

	case 26:
		func_86(uParam1, "Hunting2", func_88(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0,
				-1, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
		break;

	case 27:
		func_86(uParam1, "Josh1", func_88(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns",
				0, 1, 28, 4, 4, 0, 2359, func_87(iParam0), 1, 0);
		break;

	case 28:
		func_86(uParam1, "Josh2", func_88(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29,
				4, 4, 0, 2359, func_87(iParam0), 1, 1);
		break;

	case 29:
		func_86(uParam1, "Josh3", func_88(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30,
				4, 4, 0, 2359, func_87(iParam0), 1, 1);
		break;

	case 30:
		func_86(uParam1, "Josh4", func_88(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1,
				4, 4, 0, 2359, func_87(iParam0), 1, 0);
		break;

	case 31:
		func_86(uParam1, "Maude1", func_88(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher",
				0, 1, -1, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
		break;

	case 32:
		func_86(uParam1, "Minute1", func_88(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33,
				4, 4, 0, 2359, func_87(iParam0), 0, 1);
		break;

	case 33:
		func_86(uParam1, "Minute2", func_88(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4,
				0, 2359, func_87(iParam0), 0, 1);
		break;

	case 34:
		func_86(uParam1, "Minute3", func_88(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0,
				-1, 4, 4, 0, 2359, func_87(iParam0), 0, 1);
		break;

	case 35:
		func_86(uParam1, "MrsPhilips1", func_88(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0,
				"ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_87(iParam0), 0, 0);
		break;

	case 36:
		func_86(uParam1, "MrsPhilips2", func_88(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0,
				2359, func_87(iParam0), 0, 0);
		break;

	case 37:
		func_86(uParam1, "Nigel1", func_88(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1,
				-1, 1, 4, 0, 2359, func_87(iParam0), 1, 0);
		break;

	case 38:
		func_86(uParam1, "Nigel1A", func_88(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "",
				0, 0, 42, 4, 4, 0, 2359, func_87(iParam0), 1, 1);
		break;

	case 39:
		func_86(uParam1, "Nigel1B", func_88(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0,
				42, 4, 4, 700, 2000, func_87(iParam0), 1, 1);
		break;

	case 40:
		func_86(uParam1, "Nigel1C", func_88(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0,
				42, 4, 4, 700, 2000, func_87(iParam0), 1, 1);
		break;

	case 41:
		func_86(uParam1, "Nigel1D", func_88(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0,
				42, 4, 4, 700, 2000, func_87(iParam0), 1, 1);
		break;

	case 42:
		func_86(uParam1, "Nigel2", func_88(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43,
				4, 4, 0, 2359, func_87(iParam0), 1, 1);
		break;

	case 43:
		func_86(uParam1, "Nigel3", func_88(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16,
				"postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_87(iParam0), 1, 1);
		break;

	case 44:
		func_86(uParam1, "Omega1", func_88(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0,
				"spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_87(iParam0), 0, 0);
		break;

	case 45:
		func_86(uParam1, "Omega2", func_88(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0,
				-1, 4, 2, 0, 2359, func_87(iParam0), 0, 0);
		break;

	case 46:
		func_86(uParam1, "Paparazzo1", func_88(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1,
				47, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
		break;

	case 47:
		func_86(uParam1, "Paparazzo2", func_88(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0,
				48, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
		break;

	case 48:
		func_86(uParam1, "Paparazzo3", func_88(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183,
				1, -1, 2, 2, 0, 2359, func_87(iParam0), 0, 0);
		break;

	case 49:
		func_86(uParam1, "Paparazzo3A", func_88(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0,
				"", 0, 0, 51, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
		break;

	case 50:
		func_86(uParam1, "Paparazzo3B", func_88(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0,
				0, 51, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
		break;

	case 51:
		func_86(uParam1, "Paparazzo4", func_88(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1,
				-1, 4, 2, 0, 2359, func_87(iParam0), 0, 0);
		break;

	case 52:
		func_86(uParam1, "Rampage1", func_88(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4,
				4, 0, 2359, func_87(iParam0), 0, 0);
		break;

	case 54:
		func_86(uParam1, "Rampage3", func_88(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55,
				4, 4, 0, 2359, func_87(iParam0), 1, 0);
		break;

	case 55:
		func_86(uParam1, "Rampage4", func_88(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4,
				4, 0, 2359, func_87(iParam0), 1, 0);
		break;

	case 56:
		func_86(uParam1, "Rampage5", func_88(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0,
				53, 4, 4, 0, 2359, func_87(iParam0), 0, 0);
		break;

	case 53:
		func_86(uParam1, "Rampage2", func_88(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0,
				"rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_87(iParam0), 1, 0);
		break;

	case 57:
		func_86(uParam1, "TheLastOne", func_88(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0,
				1, -1, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
		break;

	case 58:
		func_86(uParam1, "Tonya1", func_88(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0,
				"ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
		break;

	case 59:
		func_86(uParam1, "Tonya2", func_88(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48,
				"ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
		break;

	case 60:
		func_86(uParam1, "Tonya3", func_88(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359,
				func_87(iParam0), 0, 1);
		break;

	case 61:
		func_86(uParam1, "Tonya4", func_88(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359,
				func_87(iParam0), 0, 1);
		break;

	case 62:
		func_86(uParam1, "Tonya5", func_88(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0,
				-1, 4, 2, 0, 2359, func_87(iParam0), 0, 1);
		break;

	default: break;
	}
}

// Position - 0x5008
void func_86(var *uParam0, char *sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7,
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

// Position - 0x5099
int func_87(int iParam0) {
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

// Position - 0x53DF
struct<2> func_88(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = {func_89(iParam0)};
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

// Position - 0x5417
struct<2>
func_89(int iParam0) {
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

//Position - 0x5864
int func_90()
{
	if (gameplay::is_pc_version()) {
		if (gameplay::_0xD10282B6E3751BA0() == 1f) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x5881
bool func_91() {
	if (func_94() && !func_90()) {
		return true;
	}
	if (func_93() && func_92()) {
		return true;
	}
	return false;
}

// Position - 0x58B3
bool func_92() { return Global_101418 > 0; }

// Position - 0x58C1
int func_93() {
	if (Global_88746 != -1) {
		return 1;
	}
	return 0;
}

// Position - 0x58D6
int func_94() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 20);
	}
	return 0;
}

// Position - 0x58FC
bool func_95() {
	if (Global_101689 == func_44() && gameplay::get_random_event_flag() && Global_101690) {
		return true;
	}
	return false;
}

// Position - 0x5927
void func_96() {
	if (ui::does_blip_exist(iLocal_57)) {
		ui::_0x75A16C3DA34F1245(iLocal_57, 1);
	}
	if (!ped::is_ped_injured(iLocal_52)) {
		ped::set_ped_reset_flag(iLocal_52, 156, 1);
		if (ped::is_synchronized_scene_running(iLocal_67)) {
			if (ped::get_synchronized_scene_phase(iLocal_67) > 0.1f) {
				if (!iLocal_82) {
					if (!ped::is_ped_injured(iLocal_53)) {
						ped::set_ped_shoots_at_coord(iLocal_52,
													 ped::get_ped_bone_coords(iLocal_53, 31086, 0f, 0f, -0.1f), 0);
					}
					iLocal_82 = 1;
					iLocal_80 = 1;
					func_97();
				}
			}
		}
		else if (!ped::is_ped_injured(iLocal_53)) {
			ped::set_ped_can_ragdoll(iLocal_53, 1);
			entity::set_entity_health(iLocal_53, 0);
		}
		if (ped::is_synchronized_scene_running(iLocal_67)) {
			if (ped::get_synchronized_scene_phase(iLocal_67) > 0.6f) {
				func_97();
			}
		}
		else if (!ped::is_ped_injured(iLocal_53)) {
			ped::set_ped_can_ragdoll(iLocal_53, 1);
			entity::set_entity_health(iLocal_53, 0);
		}
		if (ped::is_synchronized_scene_running(iLocal_67)) {
			if (ped::get_synchronized_scene_phase(iLocal_67) == 1f) {
				if (!ped::is_ped_injured(iLocal_53)) {
					ped::set_ped_can_ragdoll(iLocal_53, 1);
					entity::set_entity_health(iLocal_53, 0);
				}
			}
		}
		else {
			if (!ped::is_ped_injured(iLocal_53)) {
				ped::set_ped_can_ragdoll(iLocal_53, 1);
				entity::set_entity_health(iLocal_53, 0);
			}
			func_97();
		}
	}
}

// Position - 0x5A38
void func_97() {
	if (!iLocal_83) {
		if (!ped::is_ped_injured(iLocal_52)) {
			ai::clear_ped_tasks(iLocal_52);
			ped::set_relationship_between_groups(5, iLocal_60, iLocal_59);
			ped::set_relationship_between_groups(5, iLocal_59, iLocal_60);
			ped::set_relationship_between_groups(0, iLocal_61, iLocal_59);
			ped::set_relationship_between_groups(2, iLocal_61, iLocal_60);
			ped::set_relationship_between_groups(2, iLocal_60, iLocal_61);
			if (entity::is_entity_at_entity(iLocal_52, player::player_ped_id(), 50f, 50f, 50f, 0, 1, 0)) {
				ai::task_combat_ped(iLocal_52, player::player_ped_id(), 0, 16);
				ped::set_ped_target_loss_response(iLocal_52, 1);
			}
			else {
				ai::task_smart_flee_ped(iLocal_52, player::player_ped_id(), 200f, -1, 0, 0);
			}
			ped::set_ped_keep_task(iLocal_52, 1);
			func_5(&Local_101, "RERHOAU", "RERHO_DIE", 4, 0, 0, 0);
			iLocal_83 = 1;
		}
	}
}

// Position - 0x5AE7
void func_98() {
	if (bLocal_98) {
		ped::set_blocking_of_non_temporary_events(iLocal_54, 0);
		ai::task_smart_flee_coord(iLocal_54, vLocal_48, 50f, -1, 0, 0);
		ped::set_ped_keep_task(iLocal_54, 1);
		entity::set_ped_as_no_longer_needed(&iLocal_54);
		func_48();
	}
}

// Position - 0x5B1E
void func_99() {
	if (Local_101[2 /*10*/].f_7) {
		func_50(&Local_101, 2);
	}
	func_102();
	pathfind::get_closest_vehicle_node(entity::get_entity_coords(player::player_ped_id(), 1), &vLocal_48, 1, 1077936128,
									   0);
	gameplay::set_dispatch_time_between_spawn_attempts_multiplier(1, 0.5f);
	gameplay::set_dispatch_time_between_spawn_attempts(1, 1f);
	if (Local_101[1 /*10*/].f_7) {
		if (ui::does_blip_exist(iLocal_57)) {
			ui::remove_blip(&iLocal_57);
		}
		func_50(&Local_101, 1);
	}
	if (iLocal_80) {
		if (!weapon::has_entity_been_damaged_by_weapon(iLocal_54, joaat("weapon_pistol"), 0) &&
			ped::is_ped_injured(iLocal_52)) {
			if (!iLocal_100) {
				iLocal_47 = 2;
			}
			else if (func_101(&Local_101, "RERHOAU", "RERHO_BLAME", "RERHO_BLAME_3", 4, iLocal_266, 0)) {
				iLocal_47 = 2;
			}
		}
		else {
			if (!ped::is_ped_injured(iLocal_54)) {
				if (!ped::is_ped_injured(iLocal_52)) {
					ai::task_smart_flee_ped(iLocal_54, iLocal_52, 100f, -1, 0, 0);
				}
				else {
					ai::task_smart_flee_ped(iLocal_54, player::player_ped_id(), 100f, -1, 0, 0);
				}
				ped::set_ped_keep_task(iLocal_54, 1);
				if (!iLocal_100) {
					if (func_101(&Local_101, "RERHOAU", "RERHO_BLAME", "RERHO_BLAME_3", 4, iLocal_266, 0)) {
					}
					else {
						func_100(iLocal_54, "GENERIC_SHOCKED_HIGH", 24);
					}
				}
				else {
					func_100(iLocal_54, "GENERIC_SHOCKED_HIGH", 24);
				}
				system::wait(0);
			}
			player::set_wanted_level_multiplier(1f);
			ped::set_create_random_cops(1);
			iLocal_47 = 2;
		}
	}
	else {
		func_157();
	}
}

// Position - 0x5C63
void func_100(int iParam0, char *sParam1, int iParam2) {
	audio::_play_ambient_speech1(iParam0, sParam1, func_2(iParam2), 1);
}

// Position - 0x5C7A
bool func_101(var *uParam0, char *sParam1, char *sParam2, char *sParam3, int iParam4, int iParam5, int iParam6) {
	func_21(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7) {
		if (iParam4 < 12) {
			iParam4 = 7;
		}
	}
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 1;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_6(sParam2, iParam4, 0);
}

// Position - 0x5CCE
void func_102() {
	if (func_4()) {
		bLocal_98 = true;
	}
	if (bLocal_98 == 0) {
		if (!ped::is_ped_injured(iLocal_54) && !ped::is_ped_injured(player::player_ped_id())) {
			if (iLocal_80) {
				ai::open_sequence_task(&iLocal_79);
				ai::task_go_to_entity(0, player::player_ped_id(), 20000, 5f, 2f, 1073741824, 0);
				ai::task_look_at_entity(0, player::player_ped_id(), -1, 2048, 2);
				ai::task_play_anim(0, sLocal_267, "bystander_bystander_angry", 8f, -8f, 1500, 0, 0, 0, 0, 0);
				ai::task_smart_flee_ped(0, player::player_ped_id(), 150f, -1, 0, 0);
				ai::close_sequence_task(iLocal_79);
				ai::task_perform_sequence(iLocal_54, iLocal_79);
				ai::clear_sequence_task(&iLocal_79);
				ped::set_ped_keep_task(iLocal_54, 1);
			}
			else {
				ai::open_sequence_task(&iLocal_79);
				ai::task_go_straight_to_coord(0, vLocal_48, 1f, 20000, 1193033728, 1056964608);
				ai::task_look_at_coord(0, vLocal_48, -1, 2048, 2);
				ai::task_play_anim(0, sLocal_267, "bystander_bystander_angry", 8f, -8f, 1500, 0, 0, 0, 0, 0);
				ai::close_sequence_task(iLocal_79);
				ai::task_perform_sequence(iLocal_54, iLocal_79);
				ai::clear_sequence_task(&iLocal_79);
				ped::set_ped_keep_task(iLocal_54, 1);
			}
		}
	}
}

// Position - 0x5DE0
void func_103() {
	if (entity::has_entity_been_damaged_by_entity(iLocal_53, player::player_ped_id(), 1)) {
		if (!player::is_player_wanted_level_greater(player::player_id(), 2)) {
			player::set_player_wanted_level_no_drop(player::player_id(), 2, 0);
			player::set_player_wanted_level_now(player::player_id(), 0);
		}
		ped::set_ped_can_ragdoll(iLocal_53, 1);
		entity::set_entity_health(iLocal_53, 0);
		bLocal_76 = true;
		iLocal_80 = 1;
		func_97();
	}
	else if (!audio::is_ambient_speech_playing(iLocal_53)) {
		audio::play_pain(iLocal_53, 4, 0f, 0);
	}
}

// Position - 0x5E44
void func_104() {
	if (entity::is_entity_at_coord(player::player_ped_id(), vLocal_48, 50f, 50f, 25f, 0, 1, 0)) {
		iLocal_266 = 0;
	}
	else {
		iLocal_266 = 1;
	}
}

// Position - 0x5E78
bool func_105() {
	if (player::is_player_playing(player::player_id()) && !ped::is_ped_injured(player::player_ped_id())) {
		if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1), vLocal_44) < 75f * 75f) {
			return true;
		}
		if (system::vmag2(entity::get_entity_velocity(player::player_ped_id())) > 1369f && !func_90()) {
			return false;
		}
	}
	if (func_91()) {
		return true;
	}
	if (func_84(100f, 1) != -1) {
		return true;
	}
	return false;
}

// Position - 0x5EFE
bool func_106() {
	int iVar0;
	int iVar1;
	int iVar2;
	char *sVar3;

	vLocal_48 = {-96.4f, 6398.201f, 30.4542f};
	fLocal_51 = 0f;
	iVar0 = joaat("a_m_m_hillbilly_02");
	iVar1 = joaat("a_m_m_business_01");
	iVar2 = joaat("a_f_m_tourist_01");
	sVar3 = "A_F_M_BEVHILLS_02_WHITE_FULL_02";
	streaming::request_model(iVar0);
	streaming::request_model(iVar2);
	streaming::request_model(iVar1);
	streaming::request_anim_dict(sLocal_267);
	if (streaming::has_model_loaded(iVar0) && streaming::has_model_loaded(iVar2) &&
		streaming::has_model_loaded(iVar1) && streaming::has_anim_dict_loaded(sLocal_267)) {
		gameplay::clear_area(vLocal_48, 5f, 1, 1, 0, 0);
		iLocal_53 = ped::create_ped(5, iVar2, vLocal_48, fLocal_51, 1, 1);
		ped::set_ped_suffers_critical_hits(iLocal_53, 1);
		audio::set_ambient_voice_name(iLocal_53, sVar3);
		ped::set_ped_config_flag(iLocal_53, 20, 1);
		iLocal_52 = ped::create_ped(22, iVar0, vLocal_48, fLocal_51, 1, 1);
		entity::set_entity_health(iLocal_52, 125);
		ped::set_ped_max_health(iLocal_52, 125);
		ped::set_ped_flee_attributes(iLocal_52, 128, 1);
		ped::set_ped_suffers_critical_hits(iLocal_52, 1);
		ped::set_ped_config_flag(iLocal_52, 42, 1);
		ped::set_ped_hearing_range(iLocal_52, 1.5f);
		audio::stop_ped_speaking(iLocal_52, 1);
		ped::set_ped_seeing_range(iLocal_52, 40f);
		ped::set_ped_config_flag(iLocal_52, 20, 1);
		ped::set_ped_visual_field_min_angle(iLocal_52, fLocal_93);
		ped::set_ped_visual_field_max_angle(iLocal_52, fLocal_94);
		ped::set_ped_visual_field_peripheral_range(iLocal_52, fLocal_95);
		ped::set_ped_visual_field_center_angle(iLocal_52, fLocal_96);
		iLocal_54 = ped::create_ped(4, iVar1, -98.113f, 6405.354f, 30.6005f, fLocal_51, 1, 1);
		ai::add_cover_blocking_area(Vector(31.64024f, 6405.058f, -98.41389f) - Vector(5f, 5f, 5f),
									Vector(31.64024f, 6405.058f, -98.41389f) + Vector(5f, 5f, 5f), 0, 0, 1, 0);
		iLocal_65 = ped::add_scenario_blocking_area(Vector(31.64024f, 6405.058f, -98.41389f) - Vector(40f, 40f, 40f),
													Vector(31.64024f, 6405.058f, -98.41389f) + Vector(40f, 40f, 40f), 0,
													1, 1, 1);
		ped::set_ped_can_be_targetted(iLocal_54, 0);
		audio::stop_ped_speaking(iLocal_54, 1);
		vLocal_48.z++;
		vLocal_70 = {vLocal_48};
		vLocal_73 = {0f, 0f, fLocal_51};
		iLocal_67 = ped::create_synchronized_scene(vLocal_70, vLocal_73, 2);
		ped::set_synchronized_scene_looped(iLocal_67, 1);
		ai::task_synchronized_scene(iLocal_52, iLocal_67, sLocal_267, "villian_struggle_loop", 1000f, -4f, 5, 0,
									1148846080, 0);
		ai::task_synchronized_scene(iLocal_53, iLocal_67, sLocal_267, "girl_struggle_loop", 1000f, -4f, 5, 0,
									1148846080, 0);
		iLocal_69 = ped::create_synchronized_scene(vLocal_70, vLocal_73, 2);
		ped::set_synchronized_scene_looped(iLocal_69, 1);
		ai::task_synchronized_scene(iLocal_54, iLocal_69, sLocal_267, "bystander_taking_cover", 1000f, -1.5f, 5, 0,
									1148846080, 0);
		ped::set_ped_config_flag(iLocal_54, 185, 1);
		weapon::give_weapon_to_ped(iLocal_52, joaat("weapon_pistol"), -1, 1, 1);
		ped::set_ped_as_enemy(iLocal_52, 1);
		ped::add_relationship_group("re_rescuehostage relManager", &iLocal_61);
		ped::add_relationship_group("re_rescuehostage relBadGuy", &iLocal_60);
		iLocal_59 = ped::get_ped_relationship_group_hash(player::player_ped_id());
		ped::set_relationship_between_groups(5, iLocal_60, iLocal_59);
		ped::set_relationship_between_groups(5, iLocal_59, iLocal_60);
		ped::set_ped_relationship_group_hash(iLocal_54, iLocal_61);
		ped::set_ped_relationship_group_hash(iLocal_52, iLocal_60);
		ped::set_blocking_of_non_temporary_events(iLocal_53, 1);
		ped::set_blocking_of_non_temporary_events(iLocal_54, 1);
		ped::set_blocking_of_non_temporary_events(iLocal_52, 1);
		ped::set_ped_combat_attributes(iLocal_54, 11, 1);
		ped::set_ped_combat_attributes(iLocal_54, 17, 1);
		ped::set_ped_combat_attributes(iLocal_54, 13, 0);
		ped::set_ped_combat_attributes(iLocal_54, 5, 0);
		ai::set_ped_path_can_use_climbovers(iLocal_54, 0);
		ped::set_ped_combat_attributes(iLocal_53, 11, 1);
		ai::set_ped_path_can_use_climbovers(iLocal_53, 0);
		ped::set_ped_combat_attributes(iLocal_53, 13, 0);
		ped::set_ped_combat_attributes(iLocal_53, 5, 0);
		func_108(&Local_101, 0, player::player_ped_id(), sLocal_90, 0, 1);
		func_108(&Local_101, 1, iLocal_52, "RHCriminal", 0, 1);
		func_108(&Local_101, 2, iLocal_53, "RHHostage", 0, 1);
		func_108(&Local_101, 3, iLocal_54, "RHBystander", 0, 1);
		ped::set_create_random_cops(0);
		player::set_wanted_level_multiplier(0f);
		func_107(1);
		gameplay::clear_area_of_objects(-89f, 6392f, 32f, 3f, 2);
		system::settimera(8000);
		return true;
	}
	return false;
}

// Position - 0x62A7
void func_107(int iParam0) {
	if (iParam0) {
		Global_25420 = 1;
	}
	else {
		Global_25420 = 0;
	}
}

// Position - 0x62BF
void func_108(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
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

// Position - 0x635A
void func_109() {}

// Position - 0x6362
void func_110() {}

// Position - 0x636A
void func_111() {
	switch (func_12()) {
	case 0:
		sLocal_90 = "MICHAEL";
		sLocal_91 = "RERHO_MDOWN";
		break;

	case 1:
		sLocal_90 = "FRANKLIN";
		sLocal_91 = "RERHO_FDOWN";
		break;

	case 2:
		sLocal_90 = "TREVOR";
		sLocal_91 = "RERHO_TDOWN";
		break;
	}
}

// Position - 0x63BA
void func_112(int iParam0) {
	if (iParam0 == -1) {
		iParam0 = func_44();
	}
	if (iParam0 == -1) {
		return;
	}
	func_114(iParam0);
	gameplay::_0x65D2EBB47E1CEC21(0);
	gameplay::set_random_event_flag(1);
	Global_101686 = 0;
	func_113();
}

// Position - 0x63F0
void func_113() {
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			vehicle::set_vehicle_model_is_suppressed(
				entity::get_entity_model(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0)), 1);
		}
		ped::set_ped_config_flag(player::player_ped_id(), 32, 0);
	}
}

// Position - 0x642D
void func_114(int iParam0) { Global_101689 = iParam0; }

// Position - 0x643B
bool func_115(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;

	if (!Global_138924) {
		return false;
	}
	if (iParam3 == -1) {
		iParam3 = func_44();
	}
	if (iParam3 == -1) {
		return false;
	}
	if (iParam3 == 31 || iParam3 == 32) {
		if (!func_156()) {
			return false;
		}
	}
	vLocal_44 = {vParam0};
	iVar0 = 0;
	if (!iVar0) {
		if (player::is_player_playing(player::player_id()) && !ped::is_ped_injured(player::player_ped_id())) {
			vVar1 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			if (system::vmag2(entity::get_entity_velocity(player::player_ped_id())) > 1369f && !func_90()) {
				return false;
			}
		}
		if (!Global_101700.f_8044) {
			return false;
		}
		if (func_25(0)) {
			return false;
		}
		if (func_91()) {
			return false;
		}
		if (func_155()) {
			return false;
		}
		if (Global_101689 != -1) {
			return false;
		}
		if (func_14(func_12())) {
			if (func_84(100f, 1) != -1) {
				return false;
			}
		}
		if (player::is_player_playing(player::player_id()) && !iParam6) {
			if (vVar1.z - vLocal_44.z > 50f) {
				return false;
			}
		}
		if (!func_154(iParam3)) {
			return false;
		}
		if (func_14(func_12())) {
			if (func_153(func_12()) == 4 || func_153(func_12()) == 5) {
				return false;
			}
		}
		if (func_14(func_12())) {
			if (!func_152(iParam3, iParam4, 145)) {
				return false;
			}
		}
		if (!func_151(Global_101700.f_23954.f_43[iParam3])) {
			return false;
		}
		if (gameplay::get_game_timer() - Global_101691 < 150000) {
			if (iParam3 != 30) {
				return false;
			}
		}
		if (func_150()) {
			return false;
		}
		if (gameplay::get_mission_flag()) {
			return false;
		}
		if (gameplay::get_random_event_flag()) {
			return false;
		}
		if (!func_141(4)) {
			return false;
		}
		if (!func_76(5)) {
			return false;
		}
		if (func_140(iParam3, iParam4) && !iParam5) {
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
		if (iParam3 == 9 && (iParam4 == 2 || iParam4 == 5) && !func_140(0, 0)) {
			return false;
		}
		if (Global_25336) {
			return false;
		}
		if (func_154(30) && !func_140(30, 0)) {
			if (iParam3 != 30) {
				if (system::vdist2(vVar1, -61.2745f, -1100.468f, 25.3752f) < 176400f) {
					return false;
				}
			}
		}
		if (func_14(func_12())) {
			iVar4 = 0;
			while (iVar4 < 3) {
				vVar5 = {Global_101700.f_2095.f_539.f_1528[iVar4 /*3*/]};
				iVar8 = Global_101700.f_2095.f_539.f_1524[iVar4];
				if (func_139(iVar8)) {
					if (func_117(iVar4)) {
						if (!func_116(vVar5, 0f, 0f, 0f, 0)) {
							if (system::vdist2(entity::get_entity_coords(player::player_ped_id(), 0), vVar5) <
								210f * 210f) {
								if (func_12() != iVar4) {
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

// Position - 0x67D5
bool func_116(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x681C
bool func_117(int iParam0) {
	int iVar0;

	iVar0 = Global_101700.f_2095.f_539.f_1524[iParam0];
	return func_118(iVar0);
}

// Position - 0x683D
int func_118(int iParam0) { return func_119(iParam0, 1); }

// Position - 0x684C
int func_119(int iParam0, int iParam1) {
	int *iVar0;
	int *iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_139(iParam0)) {
		return 0;
	}
	func_120(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (iVar5 > 0 || iVar4 > 0 || iVar3 > 0 || iVar2 >= iParam1) {
		return 1;
	}
	return 0;
}

// Position - 0x689F
void func_120(int iParam0, int *iParam1, int *iParam2, int *iParam3, int *iParam4, int *iParam5, int *iParam6) {
	func_121(func_132(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

// Position - 0x68BD
void func_121(int iParam0, int iParam1, int *iParam2, int *iParam3, int *iParam4, int *iParam5, int *iParam6,
			  int *iParam7) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_131(iParam0, iParam1)) {
		iVar0 = func_130(iParam1);
		iVar1 = func_128(iParam0);
		iVar2 = func_128(iParam0) - func_128(iParam1);
		iVar3 = func_130(iParam0) - func_130(iParam1);
		iVar4 = func_127(iParam0) - func_127(iParam1);
		iVar5 = func_126(iParam0) - func_126(iParam1);
		iVar6 = func_125(iParam0) - func_125(iParam1);
		iVar7 = func_124(iParam0) - func_124(iParam1);
	}
	else {
		iVar0 = func_130(iParam0);
		iVar1 = func_128(iParam1);
		iVar2 = func_128(iParam1) - func_128(iParam0);
		iVar3 = func_130(iParam1) - func_130(iParam0);
		iVar4 = func_127(iParam1) - func_127(iParam0);
		iVar5 = func_126(iParam1) - func_126(iParam0);
		iVar6 = func_125(iParam1) - func_125(iParam0);
		iVar7 = func_124(iParam1) - func_124(iParam0);
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
		iVar4 += func_123(iVar0, iVar1);
		iVar3--;
		iVar0 = system::round(func_122(system::to_float(iVar0 + 1), 0f, 12f));
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

// Position - 0x6ABE
float func_122(float fParam0, float fParam1, float fParam2) {
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

// Position - 0x6B00
int func_123(int iParam0, int iParam1) {
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

// Position - 0x6BA2
int func_124(int iParam0) { return system::shift_right(iParam0, 20) & 63; }

// Position - 0x6BB5
int func_125(int iParam0) { return system::shift_right(iParam0, 14) & 63; }

// Position - 0x6BC8
int func_126(int iParam0) { return system::shift_right(iParam0, 9) & 31; }

// Position - 0x6BDB
int func_127(int iParam0) { return system::shift_right(iParam0, 4) & 31; }

// Position - 0x6BED
int func_128(int iParam0) {
	return (system::shift_right(iParam0, 26) & 31) * func_129(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x6C12
int func_129(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x6C29
int func_130(int iParam0) { return iParam0 & 15; }

// Position - 0x6C36
bool func_131(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (!func_139(iParam1) || !func_139(iParam0)) {
		return true;
	}
	iVar0 = func_128(iParam0);
	iVar1 = func_128(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_130(iParam0);
	iVar1 = func_130(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_127(iParam0);
	iVar1 = func_127(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_126(iParam0);
	iVar1 = func_126(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_125(iParam0);
	iVar1 = func_125(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	else if (iVar0 < iVar1) {
		return false;
	}
	iVar0 = func_124(iParam0);
	iVar1 = func_124(iParam1);
	if (iVar0 > iVar1) {
		return true;
	}
	return false;
}

// Position - 0x6D42
int func_132() {
	int *iVar0;

	func_138(&iVar0, time::get_clock_seconds());
	func_137(&iVar0, time::get_clock_minutes());
	func_136(&iVar0, time::get_clock_hours());
	func_135(&iVar0, time::get_clock_day_of_month());
	func_134(&iVar0, time::get_clock_month());
	func_133(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0x6D88
void func_133(int *iParam0, int iParam1) {
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

// Position - 0x6E0E
void func_134(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*uParam0 -= (*uParam0 & 15);
	*uParam0 |= iParam1;
}

// Position - 0x6E41
void func_135(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_130(*uParam0);
	iVar1 = func_128(*uParam0);
	if (iParam1 < 1 || iParam1 > func_123(iVar0, iVar1)) {
		return;
	}
	*uParam0 -= (*uParam0 & 496);
	*uParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0x6E92
void func_136(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*uParam0 -= (*uParam0 & 15872);
	*uParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0x6ECC
void func_137(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 1032192);
	*uParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0x6F07
void func_138(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 66060288);
	*uParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0x6F43
bool func_139(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15) {
		return false;
	}
	iVar0 = func_124(iParam0);
	if (iVar0 < 0 || iVar0 >= 60) {
		return false;
	}
	iVar1 = func_125(iParam0);
	if (iVar1 < 0 || iVar1 >= 60) {
		return false;
	}
	iVar2 = func_126(iParam0);
	if (iVar2 < 0 || iVar2 > 23) {
		return false;
	}
	iVar3 = func_128(iParam0);
	if (iVar3 <= 0 || iVar3 > 2043 || iVar3 < 1979) {
		return false;
	}
	iVar4 = func_130(iParam0);
	if (iVar4 < 0 || iVar4 > 11) {
		return false;
	}
	iVar5 = func_127(iParam0);
	if (iVar5 < 1 || iVar5 > func_123(iVar4, iVar3)) {
		return false;
	}
	return true;
}

// Position - 0x701F
int func_140(int iParam0, int iParam1) {
	if (gameplay::is_bit_set(Global_101700.f_23954.f_8[iParam0], iParam1)) {
		return 1;
	}
	return 0;
}

// Position - 0x7042
int func_141(int iParam0) {
	int iVar0;

	if (player::is_player_playing(player::player_id())) {
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				iVar0 = func_12();
				if (!func_14(iVar0)) {
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_149() || Global_100747 ||
						Global_25192 || func_148() || func_19(8, -1) || func_147() || func_146() || func_145() ||
						func_144() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 1:
					if (player::is_player_being_arrested(player::player_id(), 1) || func_149() || Global_25192 ||
						func_148() || func_19(8, -1) || func_145() || func_147() || func_146() || func_144() ||
						Global_101700.f_6647.f_919[iVar0] == 5) {
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
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_149() || Global_100747 ||
						Global_25192 || func_148() || func_19(8, -1) || func_145() || func_147() || func_146() ||
						func_144() || Global_101700.f_6647.f_919[iVar0] == 5 || Global_36328 != -1) {
						return 0;
					}
					break;

				case 3:
					if (ped::is_ped_ragdoll(player::player_ped_id()) || ped::is_ped_falling(player::player_ped_id()) ||
						player::is_player_being_arrested(player::player_id(), 1) ||
						ped::is_ped_in_combat(player::player_ped_id(), 0) || func_149() || Global_100747 ||
						Global_25192 || func_148() || func_19(8, -1) || func_147() || func_146() || func_144() ||
						Global_101700.f_6647.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 4:
					if (func_149() || player::get_player_wanted_level(player::player_id()) > 0 || func_19(8, -1) ||
						func_144() || func_143() || Global_101700.f_6647.f_919[iVar0] == 5) {
						return 0;
					}
					break;

				case 5:
					if (func_19(8, -1) || func_147() || func_146() || func_143() || func_142()) {
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
							player::is_player_climbing(player::player_id()) || func_149() || Global_25192 ||
							func_148() || func_19(8, -1) || func_146() || func_145() || func_144() ||
							Global_101700.f_6647.f_919[iVar0] == 5) {
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
						player::is_player_being_arrested(player::player_id(), 1) || func_149() || func_146() ||
						Global_100747 || Global_25192 || func_148() || Global_36912 || func_19(8, -1) || func_145() ||
						func_143() || func_144() || Global_101700.f_6647.f_919[iVar0] == 5) {
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
						player::is_player_climbing(player::player_id()) || func_149() || Global_100747 ||
						Global_25192 || func_148() || func_19(8, -1) || func_145() || func_143() || func_147() ||
						func_146() || func_144()) {
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

// Position - 0x775F
var func_142() { return Global_91530.f_1; }

// Position - 0x776D
int func_143() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 13);
	}
	return 0;
}

// Position - 0x7793
int func_144() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("player_timetable_scene")) > 0) {
		return 1;
	}
	return 0;
}

// Position - 0x77AD
int func_145() {
	if (Global_69962) {
		return 1;
	}
	else if (Global_55816 && !Global_55822) {
		return 1;
	}
	return 0;
}

// Position - 0x77D7
bool func_146() { return Global_91543.f_304 > 0; }

// Position - 0x77E8
bool func_147() { return Global_91543.f_303 > 0; }

// Position - 0x77F9
var func_148() { return Global_1315233; }

// Position - 0x7805
int func_149() {
	if (!network::network_is_game_in_progress()) {
		return Global_89302.f_44 == 1;
	}
	return 0;
}

// Position - 0x7821
bool func_150() {
	func_11();
	if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2) {
		return true;
	}
	return false;
}

// Position - 0x7849
int func_151(int iParam0) { return func_131(func_132(), iParam0); }

// Position - 0x785B
int func_152(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_12();
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

// Position - 0x793F
int func_153(int iParam0) {
	if (!func_14(iParam0)) {
		return 7;
	}
	return Global_101700.f_6647.f_919[iParam0];
}

// Position - 0x7963
int func_154(int iParam0) {
	int iVar0;
	var uVar1;

	if (iParam0 == 31 || iParam0 == 32) {
		if (!func_156()) {
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

// Position - 0x79C1
bool func_155() {
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

// Position - 0x7A05
int func_156() {
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

// Position - 0x7AC0
void func_157() {
	if (func_95()) {
		player::set_wanted_level_multiplier(1f);
		ped::set_create_random_cops(1);
	}
	if (iLocal_47 != 0) {
		ped::remove_relationship_group(iLocal_60);
		ped::remove_relationship_group(iLocal_61);
		audio::_0xA5F377B175A699C5(20000);
		ped::remove_scenario_blocking_area(iLocal_65, 0);
		decisionevent::remove_shocking_event(iLocal_64);
		func_107(0);
	}
	if (!ped::is_ped_injured(iLocal_52) && !ped::is_ped_injured(player::player_ped_id())) {
		ai::task_smart_flee_ped(iLocal_52, player::player_ped_id(), 100f, -1, 0, 0);
		ped::set_ped_keep_task(iLocal_52, 1);
		system::wait(0);
	}
	func_158(-1);
	script::terminate_this_thread();
}

// Position - 0x7B44
void func_158(int iParam0) {
	char cVar0[64];

	if (iParam0 == -1) {
		iParam0 = func_44();
	}
	if (iParam0 == -1) {
		return;
	}
	if (func_95()) {
		func_162(iParam0);
		ui::set_mission_name(0, 0);
		Global_101691 = gameplay::get_game_timer();
		func_161(30000);
		StringCopy(&cVar0, func_160(Global_101689, 1), 64);
		if (func_43(Global_101689) > 0) {
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101688, 64);
		}
		stats::_0x71862B1D855F32E1(&cVar0, Global_101686, gameplay::get_game_timer() - Global_101687, 0);
	}
	else if (gameplay::is_bit_set(Global_101696, 0) && Global_101700.f_23954.f_2 < 3) {
		gameplay::clear_bit(&Global_101696, 0);
	}
	func_159(&Global_25249);
	Global_101690 = 0;
	func_114(-1);
}

// Position - 0x7BF9
void func_159(int *iParam0) {
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

// Position - 0x7C36
char *func_160(int iParam0, int iParam1) {
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

// Position - 0x7E7F
void func_161(int iParam0) { Global_36332 = gameplay::get_game_timer() + iParam0; }

// Position - 0x7E91
void func_162(int iParam0) { func_163(iParam0, 0, func_168(iParam0)); }

// Position - 0x7EA6
void func_163(int iParam0, int iParam1, int iParam2) {
	int *iVar0;
	struct<16> Var1;

	iVar0 = func_132();
	func_166(&iVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_165(iParam0, &iVar0);
	Var1 = {func_164(&iVar0)};
}

// Position - 0x7ED5
struct<16> func_164(int *iParam0) {
	struct<16> Var0;
	int iVar16;

	StringCopy(&Var0, "", 64);
	iVar16 = func_126(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_125(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_124(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_127(*iParam0);
	if (iVar16 < 10) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_130(*iParam0);
	if (iVar16 < 9) {
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_128(*iParam0), 64);
	return Var0;
}

//Position - 0x7FA6
void func_165(int iParam0, int* iParam1)
{
	Global_101700.f_23954.f_43[iParam0] = *iParam1;
}

// Position - 0x7FBE
void func_166(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_128(*iParam0);
	iVar1 = func_130(*iParam0);
	iVar2 = func_127(*iParam0);
	iVar3 = func_126(*iParam0);
	iVar4 = func_125(*iParam0);
	iVar5 = func_124(*iParam0);
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
	iVar6 = func_123(iVar1, iVar0);
	while (iVar2 > iVar6) {
		iVar1++;
		iVar2 -= iVar6;
		if (iVar1 > 11) {
			iVar0++;
			iVar1 -= 12;
		}
		iVar6 = func_123(iVar1, iVar0);
	}
	iVar1 += iParam5;
	while (iVar1 > 11) {
		iParam6++;
		iVar1 -= 12;
	}
	iVar0 += iParam6;
	func_167(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

// Position - 0x8142
void func_167(int *iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_138(iParam0, iParam1);
	func_137(iParam0, iParam2);
	func_136(iParam0, iParam3);
	func_134(iParam0, iParam5);
	func_135(iParam0, iParam4);
	func_133(iParam0, iParam6);
}

// Position - 0x817A
int func_168(int iParam0) {
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
