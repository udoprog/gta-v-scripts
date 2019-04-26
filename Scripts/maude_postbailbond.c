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
struct<4> Local_37[10];
bool bLocal_78 = 0;
int iLocal_79 = 0;
int iLocal_80 = 0;
int iLocal_81 = 0;
int iLocal_82 = 0;
int iLocal_83 = 0;
int iLocal_84 = 0;
int iLocal_85 = 0;
int iLocal_86 = 0;
int iLocal_87 = 0;
var *uLocal_88 = NULL;
#pragma endregion //}

void __EntryFunction__() {
	vector3 vVar0;
	vector3 vVar3;

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
	iLocal_85 = -1;
	iLocal_86 = -1;
	if (player::has_force_cleanup_occurred(19)) {
		func_55();
	}
	if (!func_52()) {
		func_55();
	}
	if (!func_51(iLocal_82)) {
		func_55();
	}
	else {
		func_50();
		iLocal_83 = gameplay::get_game_timer();
		iLocal_85 = func_49();
		iLocal_84 = 0;
		func_48(1, &uLocal_88);
	}
	while (true) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (!func_51(iLocal_82)) {
				func_55();
			}
			vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			vVar3 = {entity::get_entity_coords(iLocal_82, 1)};
			if (system::vdist2(vVar0, vVar3) >= 100f * 100f) {
				func_55();
			}
			switch (iLocal_87) {
			case 0:
				func_43(vVar3, vVar0, 18000, 1101004800);
				if (func_25(&iLocal_82, 0)) {
					func_24();
					func_16(0);
					func_12(vVar3, vVar0);
					streaming::request_anim_dict(func_11());
					iLocal_87 = 1;
				}
				break;

			case 1:
				if (func_5(&iLocal_82, &iLocal_79, &iLocal_86)) {
					iLocal_87 = 2;
				}
				break;

			case 2:
				if (!func_4(iLocal_82, 1805844857) && !ped::is_ped_fleeing(iLocal_82)) {
					if (!entity::is_entity_playing_anim(iLocal_82, func_11(), func_3(), 3)) {
						func_1();
					}
				}
				else {
					func_55();
				}
				break;
			}
		}
		system::wait(0);
	}
}

// Position - 0x1B3
void func_1() {
	if (func_51(iLocal_82)) {
		func_2(&iLocal_82);
		ai::task_smart_flee_ped(iLocal_82, player::player_ped_id(), 10000f, -1, 0, 0);
		ped::set_ped_keep_task(iLocal_82, 1);
	}
}

// Position - 0x1E3
void func_2(int iParam0) {
	if (func_51(*iParam0)) {
		ped::set_ped_flee_attributes(*iParam0, 2, 0);
		ped::set_ped_flee_attributes(*iParam0, 64, 0);
		ped::set_ped_flee_attributes(*iParam0, 128, 0);
		ped::set_ped_flee_attributes(*iParam0, 8, 0);
		ped::set_ped_flee_attributes(*iParam0, 1, 0);
		ped::set_ped_flee_attributes(*iParam0, 32, 0);
		ped::set_ped_combat_attributes(*iParam0, 5, 0);
		ped::set_ped_combat_attributes(*iParam0, 17, 1);
		ped::set_ped_config_flag(*iParam0, 118, 1);
	}
}

// Position - 0x24C
char *func_3() { return "female_Flee_Table_Left_Maude"; }

// Position - 0x256
bool func_4(int iParam0, int iParam1) {
	if (func_51(iParam0)) {
		if (ai::get_script_task_status(iParam0, iParam1) == 1 || ai::get_script_task_status(iParam0, iParam1) == 0) {
			return true;
		}
	}
	return false;
}

// Position - 0x289
bool func_5(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (func_51(*iParam0)) {
		if (entity::is_entity_playing_anim(*iParam0, func_10(), func_9(), 3)) {
			if (!ped::is_ped_ragdoll(*iParam0) || ai::is_ped_getting_up(*iParam0)) {
				streaming::request_anim_dict(func_11());
				if (streaming::has_anim_dict_loaded(func_11())) {
					*iParam2 = ped::create_synchronized_scene(2727.4f, 4145.56f, 43.68f, 0f, 0f, -92.17f, 2);
					ped::set_synchronized_scene_looped(*iParam2, 0);
					ped::_set_synchronized_scene_occlusion_portal(*iParam2, 0);
					if (func_4(*iParam0, 1785177548)) {
						entity::stop_synchronized_entity_anim(*iParam0, -1000f, 1);
					}
					ai::task_synchronized_scene(*iParam0, *iParam2, func_11(), func_3(), 1000f, -4f, 4626, 0,
												1148846080, 0);
					ped::_0x2208438012482A1A(*iParam0, 0, 0);
					if (func_8(*iParam1)) {
						if (entity::is_entity_playing_anim(*iParam1, func_10(), func_7(), 3)) {
							entity::stop_synchronized_entity_anim(*iParam1, -16f, 0);
						}
						iVar0 = 0;
						iVar0 += 16;
						iVar0 += 64;
						iVar0 += 512;
						iVar0 += 4096;
						entity::play_synchronized_entity_anim(*iParam1, *iParam2, func_6(), func_11(), 16f, -4f, iVar0,
															  1148846080);
					}
					return true;
				}
			}
			else {
				return true;
			}
		}
		else {
			return true;
		}
	}
	return false;
}

// Position - 0x3D5
char *func_6() { return "Female_Flee_Table_Left_Maude_Chair"; }

// Position - 0x3E0
char *func_7() { return "base_chair"; }

// Position - 0x3EB
bool func_8(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x40C
char *func_9() { return "base"; }

// Position - 0x417
char *func_10() { return "special_ped@maude@base"; }

// Position - 0x422
char *func_11() { return "special_ped@maude@exit_flee"; }

// Position - 0x42D
void func_12(vector3 vParam0, vector3 vParam3) {
	if (func_51(iLocal_82)) {
		if (!audio::is_ambient_speech_playing(iLocal_82)) {
			if (system::vdist2(vParam3, vParam0) < 35f * 35f) {
				func_13(&iLocal_82, "GENERIC_FRIGHTENED_HIGH", "MAUDE", 3);
			}
		}
	}
}

// Position - 0x473
void func_13(int iParam0, char *sParam1, char *sParam2, int iParam3) {
	bool bVar0;

	if (func_51(*iParam0)) {
		bVar0 = audio::is_ambient_speech_disabled(*iParam0);
		if (bVar0) {
			audio::stop_ped_speaking(*iParam0, 0);
		}
		func_14(*iParam0, sParam1, sParam2, iParam3);
		if (bVar0) {
			audio::stop_ped_speaking(*iParam0, 1);
		}
	}
}

// Position - 0x4B5
void func_14(int iParam0, char *sParam1, char *sParam2, int iParam3) {
	audio::_play_ambient_speech_with_voice(iParam0, sParam1, sParam2, func_15(iParam3), 0);
}

// Position - 0x4CE
int func_15(int iParam0) {
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

// Position - 0x6BE
void func_16(int iParam0) {
	struct<6> Var0;
	char *sVar6;

	if (func_23()) {
		Var0 = {func_22()};
		sVar6 = func_21();
		if (gameplay::are_strings_equal(&Var0, sVar6)) {
			if (iParam0) {
				func_19();
			}
			else {
				func_17();
			}
		}
	}
}

// Position - 0x6F6
void func_17() {
	Global_14611 = 0;
	func_18();
}

// Position - 0x706
void func_18() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
	}
}

// Position - 0x727
void func_19() {
	Global_14611 = 0;
	func_20();
}

// Position - 0x737
void func_20() {
	if (audio::is_scripted_conversation_ongoing()) {
		audio::restart_scripted_conversation();
		Global_16756 = 0;
		audio::stop_scripted_conversation(1);
		Global_15745 = 6;
		return;
	}
}

// Position - 0x75B
char *func_21() {
	if (gameplay::is_bit_set(Global_101700.f_23945, 3)) {
		return "BB4_loiter";
	}
	else if (gameplay::is_bit_set(Global_101700.f_23945, 2)) {
		return "BB3_loiter";
	}
	else if (gameplay::is_bit_set(Global_101700.f_23945, 1)) {
		return "BB2_loiter";
	}
	else if (gameplay::is_bit_set(Global_101700.f_23945, 0)) {
		return "BB1_loiter";
	}
	return "MAUDE_loiter";
}

// Position - 0x7C8
struct<6> func_22() {
	struct<6> Var0;

	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4) {
		return Global_15364;
	}
	return Var0;
}

//Position - 0x7EC
bool func_23()
{
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return true;
	}
	return false;
}

// Position - 0x80E
void func_24() {
	if (entity::does_entity_exist(iLocal_81)) {
		entity::freeze_entity_position(iLocal_81, 0);
	}
	if (entity::does_entity_exist(iLocal_80)) {
		entity::freeze_entity_position(iLocal_80, 0);
	}
}

// Position - 0x836
bool func_25(int iParam0, int iParam1) {
	if (func_51(*iParam0)) {
		if (entity::has_entity_been_damaged_by_any_ped(*iParam0) ||
			entity::has_entity_been_damaged_by_any_vehicle(*iParam0) ||
			entity::has_entity_been_damaged_by_any_object(*iParam0)) {
			return true;
		}
		if (ped::is_ped_sitting_in_any_vehicle(player::player_ped_id())) {
			if (entity::is_entity_touching_entity(player::player_ped_id(), *iParam0)) {
				return true;
			}
			if (entity::does_entity_exist(iLocal_79)) {
				if (entity::is_entity_touching_entity(player::player_ped_id(), iLocal_79)) {
					return true;
				}
			}
			if (entity::does_entity_exist(iLocal_80)) {
				if (entity::is_entity_touching_entity(player::player_ped_id(), iLocal_80)) {
					return true;
				}
			}
			if (entity::does_entity_exist(iLocal_81)) {
				if (entity::is_entity_touching_entity(player::player_ped_id(), iLocal_81)) {
					return true;
				}
			}
		}
		if (ped::has_ped_received_event(*iParam0, 60)) {
			return true;
		}
		if (ped::is_ped_ragdoll(*iParam0)) {
			if (entity::is_entity_at_entity(*iParam0, player::player_ped_id(), 3f, 3f, 3f, 0, 1, 0)) {
				return true;
			}
		}
		if (ped::has_ped_received_event(*iParam0, 50)) {
			return true;
		}
		if (func_33(*iParam0, 1126825984)) {
			return true;
		}
		if (func_26(*iParam0, 1, 0, 0, 0)) {
			return true;
		}
		if (fire::is_explosion_in_sphere(-1, entity::get_entity_coords(*iParam0, 1), 15f)) {
			return true;
		}
		if (ped::has_ped_received_event(*iParam0, 72)) {
			return true;
		}
		if (iParam1) {
			if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
				return true;
			}
		}
	}
	else {
		return true;
	}
	return false;
}

// Position - 0x988
bool func_26(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 8f;
	fVar1 = 15f;
	if (iParam1 == 0) {
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (iParam2) {
		fVar0 = 2f;
	}
	if (func_8(player::player_ped_id()) && func_8(iParam0)) {
		weapon::get_current_ped_weapon(player::player_ped_id(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan")) {
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!iParam2) {
			if (func_32(iParam0, iParam1, fVar0, fVar1)) {
				return true;
			}
			if (func_27(iParam0, fVar1, iParam3, iParam4)) {
				return true;
			}
		}
		else {
			if (weapon::is_ped_current_weapon_silenced(player::player_ped_id())) {
				if (ped::is_ped_shooting(player::player_ped_id())) {
					if (gameplay::is_bullet_in_area(entity::get_entity_coords(iParam0, 1), fVar0, 1)) {
						return true;
					}
				}
			}
			else {
				if (iParam1) {
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_32(iParam0, iParam1, fVar0, fVar1)) {
					return true;
				}
			}
			if (func_27(iParam0, fVar1, iParam3, iParam4)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0xA83
bool func_27(int iParam0, float fParam1, bool bParam2, bool bParam3) {
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = {entity::get_entity_coords(iParam0, 1)};
	vVar3 = {vVar0};
	vVar0.x -= fParam1;
	vVar0.y -= fParam1;
	vVar0.z -= fParam1;
	vVar3.x += fParam1;
	vVar3.y += fParam1;
	vVar3.z += fParam1;
	if (bParam2) {
		if (gameplay::_0x34318593248C8FB2(entity::get_entity_coords(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) ||
			gameplay::_0x34318593248C8FB2(entity::get_entity_coords(iParam0, 1), joaat("weapon_molotov"), fParam1, 1) ||
			gameplay::_0x34318593248C8FB2(entity::get_entity_coords(iParam0, 1), joaat("weapon_smokegrenade"), fParam1,
										  1) ||
			gameplay::_0x34318593248C8FB2(entity::get_entity_coords(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1)) {
			if (bParam3) {
				if (func_28(iParam0, fParam1)) {
					return true;
				}
				else {
					return false;
				}
			}
			return true;
		}
	}
	else {
		if (bParam3) {
			if (func_28(iParam0, fParam1)) {
				return true;
			}
			else {
				return false;
			}
		}
		if (gameplay::is_projectile_in_area(vVar0, vVar3, 1)) {
			return true;
		}
	}
	return false;
}

// Position - 0xB8F
bool func_28(int iParam0, float fParam1) {
	var uVar0;
	vector3 vVar1;

	if (gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) ||
		gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0) ||
		gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0) ||
		gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0) ||
		gameplay::_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0)) {
		if (func_29(iParam0, vVar1, 90f, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0xC24
bool func_29(int iParam0, vector3 vParam1, float fParam4, int iParam5) {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = {func_31(vParam1 - entity::get_entity_coords(iParam0, 1))};
	if (fParam4 < 0.1f || fParam4 > 360f) {
		return true;
	}
	if (iParam5 == 0) {
		vVar3 = {entity::get_entity_forward_vector(iParam0)};
	}
	else {
		vVar3 = {func_31(ped::get_ped_bone_coords(iParam0, 31086, 0f, 5f, 0f) -
						 ped::get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f))};
	}
	fVar6 = func_30(vVar3, vVar0);
	if (fVar6 <= system::cos(fParam4 / 2f)) {
		return false;
	}
	return true;
}

// Position - 0xCB2
float func_30(vector3 vParam0, vector3 vParam3) {
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

// Position - 0xCD3
Vector3 func_31(vector3 vParam0) {
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

// Position - 0xD12
bool func_32(int iParam0, int iParam1, float fParam2, float fParam3) {
	if (iParam1) {
		if (ped::is_ped_shooting(player::player_ped_id())) {
			if (entity::is_entity_at_entity(player::player_ped_id(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0)) {
				return true;
			}
		}
	}
	if (gameplay::is_bullet_in_area(entity::get_entity_coords(iParam0, 1), fParam2, 1)) {
		return true;
	}
	return false;
}

// Position - 0xD5A
bool func_33(int iParam0, float fParam1) {
	float fVar0;

	if (func_8(player::player_ped_id()) && func_8(iParam0)) {
		if (func_42(iParam0) || player::is_player_targetting_entity(player::player_id(), iParam0)) {
			if (weapon::is_ped_armed(player::player_ped_id(), 6)) {
				fVar0 = 40f;
			}
			else {
				fVar0 = 3f;
			}
			if (entity::is_entity_at_entity(player::player_ped_id(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0)) {
				if (func_34(iParam0, fParam1)) {
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0xDD0
bool func_34(int iParam0, float fParam1) { return func_35(iParam0, player::player_ped_id(), fParam1, 1, 250, 7); }

// Position - 0xDE8
bool func_35(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;
	vector3 vVar1;
	int iVar4;

	iVar4 = func_41(iParam0, iParam1);
	if (!func_8(iParam0) || !func_8(iParam1)) {
		if (iVar4 != -1) {
			func_40(&Local_37[iVar4 /*4*/]);
		}
		return false;
	}
	if (!func_39(iParam0, iParam1, fParam2, iParam3)) {
		return false;
	}
	if (iVar4 == -1) {
		iVar4 = func_38();
		if (iVar4 == -1) {
			return false;
		}
		Local_37[iVar4 /*4*/].f_1 = iParam0;
		Local_37[iVar4 /*4*/].f_2 = iParam1;
	}
	vVar1 = {ped::get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f)};
	iVar0 = func_36(&Local_37[iVar4 /*4*/], vVar1, iParam1, &Local_37[iVar4 /*4*/].f_3, iParam0, iParam5);
	return iVar0 || gameplay::get_game_timer() - Local_37[iVar4 /*4*/].f_3 < iParam4;
}

// Position - 0xEA9
int func_36(int *iParam0, vector3 vParam1, int iParam4, var *uParam5, int iParam6, int iParam7) {
	var uVar0;
	vector3 vVar1;
	var uVar4;
	int iVar7;
	int iVar8;

	iVar7 = 0;
	if (!func_8(iParam4)) {
		*iParam0 = 0;
		return 0;
	}
	if (*iParam0 == 0) {
		vVar1 = {func_37(iParam4, iParam7)};
		*iParam0 =
			worldprobe::start_shape_test_los_probe(vParam1, vVar1 + vVar1 - vParam1 * FtoV(0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = worldprobe::get_shape_test_result(*iParam0, &uVar0, &vVar1, &uVar4, &iVar7);
	if (iVar8 == 0) {
		*iParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1) {
		return 0;
	}
	*iParam0 = 0;
	if (entity::is_entity_a_ped(iVar7)) {
		func_8(iVar7);
		if (entity::get_ped_index_from_entity_index(iVar7) == iParam4) {
			if (bLocal_78) {
				graphics::draw_debug_line_with_two_colours(vParam1, entity::get_entity_coords(iParam4, 1), 255, 0, 0,
														   255, 0, 0, 255, 255);
			}
			*uParam5 = gameplay::get_game_timer();
			return 1;
		}
		return 0;
	}
	if (entity::is_entity_a_vehicle(iVar7)) {
		func_8(iVar7);
		if (ped::is_ped_in_any_vehicle(iParam4, 0)) {
			if (entity::get_vehicle_index_from_entity_index(iVar7) == ped::get_vehicle_ped_is_in(iParam4, 0)) {
				if (bLocal_78) {
					graphics::draw_debug_line_with_two_colours(vParam1, entity::get_entity_coords(iParam4, 1), 255, 0,
															   0, 255, 0, 0, 255, 255);
				}
				*uParam5 = gameplay::get_game_timer();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

// Position - 0xFD5
Vector3 func_37(int iParam0, int iParam1) {
	int iVar0;

	if (iParam1 == 7) {
		iVar0 = gameplay::get_random_int_in_range(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0) {
		return entity::get_entity_coords(iParam0, 1);
	}
	else if (iParam1 == 1) {
		return ped::get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2) {
		return ped::get_ped_bone_coords(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3) {
		return ped::get_ped_bone_coords(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4) {
		return ped::get_ped_bone_coords(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5) {
		return ped::get_ped_bone_coords(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6) {
		return ped::get_ped_bone_coords(iParam0, 36864, 0f, 0f, 0f);
	}
	return entity::get_entity_coords(iParam0, 1);
}

// Position - 0x109A
int func_38() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_37) {
		if (Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0 && Local_37[iVar0 /*4*/].f_2 == 0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x10E4
int func_39(int iParam0, int iParam1, float fParam2, int iParam3) {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	vVar0 = {func_31(entity::get_entity_coords(iParam1, 1) - entity::get_entity_coords(iParam0, 1))};
	if (fParam2 < 0.1f || fParam2 > 360f) {
		return 1;
	}
	if (iParam3 == 0) {
		vVar3 = {entity::get_entity_forward_vector(iParam0)};
	}
	else {
		vVar3 = {func_31(ped::get_ped_bone_coords(iParam0, 31086, 0f, 5f, 0f) -
						 ped::get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f))};
	}
	fVar6 = func_30(vVar3, vVar0);
	if (fVar6 <= system::cos(fParam2 / 2f)) {
		return 0;
	}
	return 1;
}

// Position - 0x1175
void func_40(var *uParam0) {
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

// Position - 0x1190
int func_41(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_37) {
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x11CF
int func_42(int iParam0) {
	if (player::is_player_free_aiming_at_entity(player::player_id(), iParam0) &&
		weapon::is_ped_armed(player::player_ped_id(), 6)) {
		return 1;
	}
	return 0;
}

// Position - 0x11F7
int func_43(vector3 vParam0, vector3 vParam3, int iParam6, float fParam7) {
	var *uVar0;
	char[] cVar165[8];
	char *sVar166;

	if (iLocal_84 < iLocal_85) {
		if (!func_23()) {
			if (system::vdist2(vParam3, vParam0) < fParam7 * fParam7) {
				if (gameplay::get_game_timer() - iLocal_83 > iParam6 + gameplay::get_random_int_in_range(0, 2000)) {
					uVar0 = 16;
					func_47(&uVar0, 3, iLocal_82, "MAUDE", 0, 1);
					cVar165 = func_46();
					sVar166 = func_21();
					func_44(&uVar0, cVar165, sVar166, 7, 0, 0);
					iLocal_83 = gameplay::get_game_timer();
					iLocal_84++;
					return 1;
				}
			}
		}
		else {
			iLocal_83 = gameplay::get_game_timer();
		}
	}
	return 0;
}

// Position - 0x1281
void func_44(var *uParam0, char *sParam1, char *sParam2, int iParam3, int iParam4, int iParam5) {
	func_45(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7) {
		if (iParam3 < 12) {
			iParam3 = 7;
		}
	}
	gameplay::set_bit(&Global_14611, 0);
	Global_15748 = iParam3;
	StringCopy(&Global_15735, sParam2, 24);
}

// Position - 0x12BC
void func_45(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5) {
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

// Position - 0x1312
char *func_46() {
	if (gameplay::is_bit_set(Global_101700.f_23945, 3)) {
		return "BB4AUD";
	}
	else if (gameplay::is_bit_set(Global_101700.f_23945, 2)) {
		return "BB3AUD";
	}
	else if (gameplay::is_bit_set(Global_101700.f_23945, 1)) {
		return "BB2AUD";
	}
	else if (gameplay::is_bit_set(Global_101700.f_23945, 0)) {
		return "BB1AUD";
	}
	return "MAUDEAU";
}

// Position - 0x137F
void func_47(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
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

// Position - 0x141A
void func_48(int iParam0, var *uParam1) {
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = {2711.198f, 4134.425f, 32.90168f};
	vVar3 = {2739.981f, 4155.221f, 50.28859f};
	if (iParam0) {
		*uParam1 = ped::add_scenario_blocking_area(vVar0, vVar3, 0, 1, 1, 1);
		ped::set_ped_non_creation_area(vVar0, vVar3);
		vehicle::set_all_vehicle_generators_active_in_area(vVar0, vVar3, 0, 1);
		vehicle::remove_vehicles_from_generators_in_area(vVar0, vVar3, 0);
		pathfind::set_roads_in_area(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 0, 1);
		gameplay::clear_area(2728.333f, 4144.778f, 43.29292f, 7.5f, 1, 0, 0, 0);
	}
	else {
		ped::remove_scenario_blocking_area(*uParam1, 0);
		ped::clear_ped_non_creation_area();
		vehicle::set_all_vehicle_generators_active_in_area(vVar0, vVar3, 1, 1);
		pathfind::set_roads_back_to_original(2697.222f, 4119.894f, 42.79107f, 2746.04f, 4162.974f, 43.62732f, 1);
	}
}

// Position - 0x1507
int func_49() {
	if (gameplay::is_bit_set(Global_101700.f_23945, 3)) {
		return 4;
	}
	else if (gameplay::is_bit_set(Global_101700.f_23945, 2)) {
		return 4;
	}
	else if (gameplay::is_bit_set(Global_101700.f_23945, 1)) {
		return 4;
	}
	else if (gameplay::is_bit_set(Global_101700.f_23945, 0)) {
		return 3;
	}
	return 4;
}

// Position - 0x1565
void func_50() {
	vector3 vVar0;

	if (func_51(iLocal_82)) {
		if (!entity::is_entity_a_mission_entity(iLocal_82)) {
			entity::set_entity_as_mission_entity(iLocal_82, 1, 0);
		}
		ped::set_blocking_of_non_temporary_events(iLocal_82, 1);
		ped::set_ped_money(iLocal_82, 0);
		ped::set_ped_can_be_targetted(iLocal_82, 0);
		ped::set_ped_relationship_group_hash(iLocal_82, 1862763509);
		ai::set_ped_path_can_use_climbovers(iLocal_82, 0);
		ai::set_ped_path_can_drop_from_height(iLocal_82, 0);
		ped::set_ped_config_flag(iLocal_82, 118, 0);
		vVar0 = {2728.33f, 4145.6f, 43.89f};
		if (object::does_object_of_type_exist_at_coords(vVar0, 10f, -380698483, 0)) {
			iLocal_80 = object::get_closest_object_of_type(vVar0, 10f, -380698483, 1, 0, 1);
			if (func_8(iLocal_80)) {
				entity::set_entity_coords(iLocal_80, 2727.4f, 4145.56f, 43.68f, 1, 0, 0, 1);
				entity::set_entity_heading(iLocal_80, -92.17f);
				entity::freeze_entity_position(iLocal_80, 1);
			}
		}
		if (object::does_object_of_type_exist_at_coords(vVar0, 10f, 1385417869, 0)) {
			iLocal_81 = object::get_closest_object_of_type(vVar0, 10f, 1385417869, 0, 0, 1);
			if (func_8(iLocal_81)) {
				if (!entity::is_entity_a_mission_entity(iLocal_81)) {
					entity::set_entity_as_mission_entity(iLocal_81, 1, 0);
				}
				entity::set_entity_coords(iLocal_81, 2727.686f, 4145.715f, 44.08f, 1, 0, 0, 1);
				entity::set_entity_heading(iLocal_81, 71f);
				entity::freeze_entity_position(iLocal_81, 1);
			}
		}
		if (object::does_object_of_type_exist_at_coords(vVar0, 10f, -741944541, 0)) {
			iLocal_79 = object::get_closest_object_of_type(vVar0, 10f, -741944541, 0, 0, 1);
			if (func_8(iLocal_79)) {
				if (!entity::is_entity_a_mission_entity(iLocal_79)) {
					entity::set_entity_as_mission_entity(iLocal_79, 1, 0);
				}
				entity::set_entity_coords(iLocal_79, 2728.35f, 4145.59f, 43.3f, 1, 0, 0, 1);
				entity::set_entity_heading(iLocal_79, -91.28f);
			}
		}
	}
}

// Position - 0x1712
bool func_51(int iParam0) {
	if (func_8(iParam0)) {
		if (!ped::is_ped_injured(iParam0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x1732
int func_52() {
	int iVar0;
	int iVar1;
	var uVar2[32];

	if (!ped::is_ped_injured(player::player_ped_id())) {
		iVar0 = ped::get_ped_nearby_peds(player::player_ped_id(), &uVar2, -1);
		iVar1 = 0;
		while (iVar1 < iVar0) {
			if (func_51(uVar2[iVar1])) {
				if (entity::get_entity_model(uVar2[iVar1]) == func_53(62)) {
					iLocal_82 = uVar2[iVar1];
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

// Position - 0x1799
int func_53(int iParam0) {
	if (!func_54(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x17C4
bool func_54(int iParam0) { return iParam0 < 3; }

// Position - 0x17D0
void func_55() {
	func_48(0, &uLocal_88);
	if (func_8(iLocal_81)) {
		entity::freeze_entity_position(iLocal_81, 0);
	}
	func_57(&iLocal_81, 0);
	if (func_8(iLocal_80)) {
		entity::freeze_entity_position(iLocal_80, 0);
	}
	func_57(&iLocal_80, 0);
	if (func_8(iLocal_79)) {
		entity::freeze_entity_position(iLocal_79, 0);
		if (entity::is_entity_playing_anim(iLocal_79, "special_ped@maude@base", "base_chair", 3)) {
			entity::stop_entity_anim(iLocal_79, "base_chair", "special_ped@maude@base", -1000f);
			entity::stop_synchronized_entity_anim(iLocal_79, -1000f, 1);
		}
		else if (entity::is_entity_playing_anim(iLocal_79, func_11(), "Female_Flee_Table_Left_Maude_Chair", 3)) {
			entity::stop_entity_anim(iLocal_79, "Female_Flee_Table_Left_Maude_Chair", func_11(), -1000f);
			entity::stop_synchronized_entity_anim(iLocal_79, -1000f, 1);
		}
	}
	func_57(&iLocal_79, 0);
	if (func_51(iLocal_82)) {
		ped::set_ped_keep_task(iLocal_82, 1);
		ped::set_ped_config_flag(iLocal_82, 118, 1);
	}
	func_56(&iLocal_82, 1, 0, 1);
	streaming::remove_anim_dict(func_11());
	script::terminate_this_thread();
}

// Position - 0x18B5
void func_56(int iParam0, int iParam1, int iParam2, int iParam3) {
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

// Position - 0x1904
void func_57(int *iParam0, int iParam1) {
	if (entity::does_entity_exist(*iParam0)) {
		if (entity::is_entity_attached_to_any_ped(*iParam0)) {
			entity::detach_entity(*iParam0, 1, 1);
		}
		if (!iParam1) {
			entity::set_object_as_no_longer_needed(iParam0);
		}
		else {
			object::_mark_object_for_deletion(*iParam0);
		}
	}
}
