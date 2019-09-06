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
var uLocal_44 = 0;
bool bLocal_45 = 0;
int iLocal_46 = 0;
int iLocal_47 = 0;
int iLocal_48 = 0;
vector3 vLocal_49 = {0f, 0f, 0f};
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
int iLocal_62 = 0;
int iLocal_63 = 0;
int iLocal_64 = 0;
int iLocal_65 = 0;
int iLocal_66 = 0;
int iLocal_67 = 0;
struct<487> Local_68 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 1097859072, 1500, 45, 1103626240, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_555 = 0;
var uLocal_556 = 0;
var uLocal_557 = 0;
var uLocal_558 = 0;
var uLocal_559 = 0;
var uLocal_560 = 0;
var uLocal_561 = 0;
var uLocal_562 = 0;
var uLocal_563 = 0;
var uLocal_564 = 0;
var uLocal_565 = 0;
int iLocal_566 = 0;
int iLocal_567 = 0;
int iLocal_568 = 0;
int iLocal_569 = 0;
int iLocal_570 = 0;
int iLocal_571 = 0;
int iLocal_572 = 0;
int iLocal_573 = 0;
int iLocal_574 = 0;
int iLocal_575 = 0;
bool bLocal_576 = 0;
int iLocal_577 = 0;
char *sLocal_578 = NULL;
int iLocal_579 = 0;
int iLocal_580 = 0;
int iLocal_581 = 0;
int iLocal_582 = 0;
int iLocal_583 = 0;
struct<33> Local_584 = {
	15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_617 = 1;
var uLocal_618[3] = {0, 0, 0};
int iLocal_622 = 0;
int iLocal_623 = 0;
int iLocal_624 = 0;
int iLocal_625 = 0;
int iLocal_626 = 0;
int iLocal_627 = 0;
int iLocal_628 = 0;
int iLocal_629 = 0;
int iLocal_630 = 0;
int iLocal_631 = 0;
int iLocal_632 = 0;
int iLocal_633 = 0;
int iLocal_634 = 0;
int *iLocal_635 = NULL;
var uLocal_636 = 0;
var uLocal_637 = 0;
int *iLocal_638 = NULL;
var uLocal_639 = 0;
var uLocal_640 = 0;
int iLocal_641 = 0;
int iLocal_642 = 0;
var *uScriptParam_0 = NULL;
var uScriptParam_1 = 5;
var uScriptParam_2 = 0;
var uScriptParam_3 = 0;
var uScriptParam_4 = 0;
var uScriptParam_5 = 0;
var uScriptParam_6 = 0;
var uScriptParam_7 = 0;
var uScriptParam_8 = 0;
var uScriptParam_9 = 0;
var uScriptParam_10 = 0;
var uScriptParam_11 = 0;
var uScriptParam_12 = 0;
var uScriptParam_13 = 0;
var uScriptParam_14 = 0;
var uScriptParam_15 = 0;
var uScriptParam_16 = 0;
var uScriptParam_17 = 5;
var uScriptParam_18 = 0;
var uScriptParam_19 = 0;
var uScriptParam_20 = 0;
var uScriptParam_21 = 0;
var uScriptParam_22 = 0;
#pragma endregion //}

void __EntryFunction__() {
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;

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
	vLocal_49 = {500f, 500f, 500f};
	iLocal_630 = 3;
	if (player::has_force_cleanup_occurred(98)) {
		func_309();
	}
	if (func_306(0)) {
		iLocal_574 = 1;
		iLocal_571 = player::get_max_wanted_level();
	}
	if (Global_3) {
		ui::clear_help(1);
		script::terminate_this_thread();
	}
	if (func_305(14)) {
		ui::clear_help(1);
		script::terminate_this_thread();
	}
	func_304(&Local_584, 3);
	func_295(&uScriptParam_0);
	vVar0 = {24.088f, -1345.623f, 29.5082f};
	vVar3 = {24.94562f, -1344.954f, 29.49f};
	vVar6 = {vVar0 - vVar3};
	vVar6 = {vVar3 - vVar0};
	fVar12 = 147.297f;
	vVar9 = {-1228.443f, -905.3416f, 13.523f};
	vVar6 = {vVar9 - Vector(12.31f, -907.8234f, -1222.331f)};
	vVar6 = {func_294(vVar6, fVar12)};
	if (func_293() && !func_292() || Global_101644 || Global_25192 || Global_101689 != -1) {
		if (func_293() && !func_292()) {
		}
		else if (Global_101644) {
		}
		else if (Global_25192) {
		}
		else if (Global_101689 != -1) {
		}
		if (!func_291()) {
			func_289(&Local_68.f_470, 64);
			func_287(1);
		}
		else {
			func_287(0);
		}
		func_309();
	}
	else if (Global_101700.f_18994[iLocal_568] > 0) {
		if (func_286()) {
			func_284(iLocal_568, Local_68.f_486.f_9.f_2, &vVar13, &vVar16);
			gameplay::clear_area_of_peds(Local_68.f_181, 15f, 0);
			iLocal_567 = ped::add_scenario_blocking_area(vVar13, vVar16, 0, 1, 1, 1);
			if (!func_291()) {
				func_287(1);
			}
			else {
				func_287(0);
				func_282(&Local_68.f_470, 512);
			}
			iLocal_67 = 2;
		}
		else {
			func_287(0);
		}
		if (!func_281()) {
			iLocal_64 = 10;
			iVar19 = gameplay::get_random_int_in_range(0, 3);
			if (iVar19 == 0) {
				Local_68.f_2.f_12 = 1;
			}
			else {
				Local_68.f_2.f_12 = 0;
			}
		}
	}
	else {
		func_287(0);
	}
	while (true) {
		func_278(&Local_584);
		if (func_273()) {
			func_309();
		}
		if (!iLocal_574) {
			if (func_306(0)) {
				func_272();
				iLocal_574 = 1;
			}
		}
		switch (iLocal_67) {
		case 0: func_243(); break;

		case 1: func_5(); break;

		case 2:
			if (func_291()) {
				if (!ui::is_help_message_being_displayed()) {
					if (!func_3("SHOP_CLOSED", func_4(iLocal_568))) {
						ui::add_next_message_to_previous_briefs(0);
						func_2("SHOP_CLOSED", func_4(iLocal_568));
					}
				}
			}
			else {
				if (func_3("SHOP_CLOSED", func_4(iLocal_568))) {
					ui::clear_help(1);
				}
				if (func_1(Local_68.f_470, 512)) {
					func_287(1);
					func_289(&Local_68.f_470, 512);
				}
			}
			break;

		case 3: break;
		}
		system::wait(0);
	}
}

// Position - 0x35E
bool func_1(var uParam0, int iParam1) { return (uParam0 & iParam1) != 0; }

// Position - 0x36D
void func_2(char *sParam0, char *sParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::add_text_component_substring_text_label(sParam1);
	ui::end_text_command_display_help(0, 1, 1, -1);
}

// Position - 0x389
bool func_3(char *sParam0, char *sParam1) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	ui::add_text_component_substring_text_label(sParam1);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0x3A2
char *func_4(int iParam0) {
	switch (iParam0) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4: return "SHR_GAS";

	case 5: return "SHR_LIQ1";

	case 6:
	case 7:
	case 8:
	case 9: return "SHR_LIQ2";

	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18: return "SHR_CONV";

	case -2: return "SHR_ACE";

	default:
	}
	return "";
}

// Position - 0x44A
void func_5() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_240();
	func_237();
	func_232();
	func_226();
	func_208();
	func_185();
	func_179();
	func_66();
	func_65();
	func_64();
	func_54();
	func_53();
	func_50();
	if (!func_49()) {
		func_36();
		func_26();
	}
	if (entity::does_entity_exist(Local_68)) {
		weapon::get_current_ped_weapon(Local_68, &iVar0, 1);
	}
	else {
		return;
	}
	bLocal_576 = false;
	if (!ped::is_ped_injured(Local_68.f_2) && !ped::is_ped_injured(player::player_ped_id())) {
		if (weapon::get_current_ped_weapon(player::player_ped_id(), &iVar1, 1)) {
			if (iVar1 != joaat("weapon_unarmed") && iVar1 != joaat("object") && iVar1 != joaat("weapon_flare")) {
				if (player::is_player_free_aiming(player::player_id()) &&
						ped::is_ped_facing_ped(player::player_ped_id(), Local_68.f_2, 45f) &&
						entity::is_entity_at_entity(player::player_ped_id(), Local_68.f_2, 5f, 5f, 2f, 0, 1, 0) ||
					player::is_player_free_aiming_at_entity(player::player_id(), Local_68.f_2) ||
					player::is_player_targetting_entity(player::player_id(), Local_68.f_2)) {
					if (!func_25() && !cam::is_first_person_aim_cam_active()) {
						bLocal_576 = true;
					}
				}
			}
		}
	}
	if (bLocal_576) {
		if (!iLocal_577 && func_1(Local_68.f_470, 4)) {
			iVar2 = func_24(player::player_ped_id());
			iVar3 = weapon::get_weapontype_group(iVar2);
			if (iVar3 == 416676503) {
				sLocal_578 = "hold_up_head_additive_pistol";
				ai::task_play_anim(player::player_ped_id(), "mp_am_hold_up", sLocal_578, 8f, -8f, -1, 305, 0, 0, 0, 0);
			}
			else if (iVar3 == 1159398588 || iVar3 == 970310034 || iVar3 == 860033945 || iVar3 == -1212426201 ||
					 iVar3 == -957766203) {
				sLocal_578 = "hold_up_head_additive_rifle";
				ai::task_play_anim(player::player_ped_id(), "mp_am_hold_up", sLocal_578, 8f, -8f, -1, 305, 0, 0, 0, 0);
			}
			else {
				sLocal_578 = "";
			}
			iLocal_577 = 1;
		}
	}
	else if (iLocal_577) {
		if (!gameplay::is_string_null_or_empty(sLocal_578)) {
			if (entity::is_entity_playing_anim(player::player_ped_id(), "mp_am_hold_up", sLocal_578, 3)) {
				ai::stop_anim_task(player::player_ped_id(), "mp_am_hold_up", sLocal_578, -1056964608);
			}
		}
		iLocal_577 = 0;
	}
	switch (iLocal_64) {
	case 0:
		if (func_291()) {
			if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
				iLocal_64 = 12;
			}
			else {
				iLocal_52 = 2;
				iLocal_59 = 1;
				if (!entity::is_entity_dead(Local_68, 0)) {
					if (!ped::is_ped_in_any_vehicle(Local_68, 0)) {
						if (func_24(Local_68) == joaat("weapon_unarmed") || func_24(Local_68) == joaat("object") ||
							func_24(Local_68) == joaat("weapon_briefcase")) {
							iLocal_62 = 1;
							iLocal_64 = 1;
						}
						else if (!func_1(Local_68.f_470, 1)) {
							if (iVar0 == joaat("weapon_bat")) {
								iLocal_62 = 2;
								iLocal_64 = 5;
							}
							else if (iVar0 == joaat("weapon_crowbar") || iVar0 == joaat("weapon_hammer") ||
									 iVar0 == joaat("weapon_bottle")) {
								iLocal_62 = 3;
								iLocal_64 = 5;
							}
							else if (iVar0 == joaat("weapon_stickybomb")) {
								iLocal_62 = 4;
								iLocal_64 = 5;
							}
							else {
								iLocal_64 = 2;
							}
							func_282(&Local_68.f_470, 1);
						}
					}
					else {
						iLocal_64 = 3;
					}
				}
			}
		}
		else if (func_23()) {
			iLocal_52 = 2;
			iLocal_64 = 3;
		}
		else if (!func_291() && func_20(Local_68, Local_68.f_2, &Local_68.f_451, 1)) {
			iLocal_64 = 12;
		}
		break;

	case 1:
		if (!func_1(Local_68.f_470, 2)) {
			iLocal_53 = 1;
			iLocal_58 = 1;
			func_282(&Local_68.f_470, 2);
		}
		iLocal_64 = 5;
		break;

	case 2:
		iLocal_53 = 5;
		iLocal_58 = 3;
		iLocal_64 = 5;
		break;

	case 3:
		iLocal_53 = 6;
		iLocal_58 = 4;
		iLocal_64 = 5;
		break;

	case 5:
		if (!func_291() && !func_1(Local_68.f_470, 1)) {
			iLocal_64 = 0;
		}
		break;

	case 6:
		if (iLocal_53 >= 13) {
			if (Local_68.f_2.f_12) {
				if (!func_19()) {
					iLocal_64 = 7;
				}
			}
			else {
				iLocal_64 = 8;
			}
			iLocal_54 = 1;
		}
		break;

	case 7:
		if (func_1(Local_68.f_470, 256)) {
			func_18();
			gameplay::clear_bit(&Global_87675, 3);
			iLocal_64 = 13;
		}
		break;

	case 8:
		if (func_1(Local_68.f_470, 16)) {
			if (func_16()) {
				if (!entity::is_entity_dead(Local_68.f_2, 0)) {
					if (!ped::is_ped_ragdoll(Local_68.f_2)) {
						if (func_291()) {
							if (Local_68.f_486 >= 0) {
								if (ped::is_synchronized_scene_running(Local_68.f_486)) {
									ai::task_play_anim(Local_68.f_2, Local_68.f_486.f_1, "handsup_base", 4f, -8f, -1, 1,
													   0, 0, 0, 0);
									iLocal_60 = 10;
								}
							}
						}
						else {
							ai::task_smart_flee_ped(Local_68.f_2, player::player_ped_id(), 100f, -1, 0, 0);
							iLocal_60 = 10;
						}
					}
				}
				gameplay::clear_bit(&Global_87675, 3);
				iLocal_64 = 13;
			}
		}
		break;

	case 9:
		func_15(2, 0);
		iLocal_61 = 7;
		if (iLocal_65 == 1) {
			iLocal_64 = 8;
		}
		else {
			iLocal_64 = 13;
		}
		break;

	case 10:
		if (func_291()) {
			iLocal_64 = 11;
		}
		break;

	case 11:
		if (!func_14(&Local_68.f_477)) {
			if (!Local_68.f_2.f_12) {
				iLocal_53 = 28;
			}
			else {
				iLocal_53 = 29;
			}
			func_11(&Local_68.f_477);
		}
		else if (func_8(&Local_68.f_477) > 5f) {
			func_15(1, 0);
			iLocal_64 = 13;
		}
		else if (func_8(&Local_68.f_477) > 1.5f) {
			if (!func_19()) {
				if (iLocal_60 != 12) {
					iLocal_60 = 12;
					if (!Local_68.f_2.f_12) {
						func_7();
					}
					else {
						func_18();
					}
				}
			}
		}
		break;

	case 12:
		if (!func_14(&Local_68.f_477)) {
			func_6();
			iLocal_53 = 30;
			iLocal_60 = 12;
			func_11(&Local_68.f_477);
		}
		else if (func_8(&Local_68.f_477) > 3f) {
			iLocal_64 = 13;
		}
		break;

	case 13: break;
	}
}

// Position - 0xA25
void func_6() {
	int iVar0;

	if (entity::is_entity_dead(Local_68.f_2, 0)) {
		return;
	}
	ai::open_sequence_task(&iVar0);
	ai::task_follow_nav_mesh_to_coord(0, Local_68.f_2.f_6, 2f, -1, 0.25f, 0, Local_68.f_2.f_9);
	ai::task_cower(0, -1);
	ai::close_sequence_task(iVar0);
	ai::task_perform_sequence(Local_68.f_2, iVar0);
	ai::clear_sequence_task(&iVar0);
	func_282(&Local_68.f_470, 128);
}

// Position - 0xA84
void func_7() {
	if (!entity::is_entity_dead(Local_68.f_2, 0)) {
		ai::clear_sequence_task(&iLocal_566);
		ai::open_sequence_task(&iLocal_566);
		ai::task_cower(0, 5000);
		ai::task_smart_flee_ped(0, player::player_ped_id(), 100f, -1, 0, 0);
		ai::close_sequence_task(iLocal_566);
		ai::task_perform_sequence(Local_68.f_2, iLocal_566);
	}
}

// Position - 0xAD2
float func_8(var *uParam0) {
	if (func_14(uParam0)) {
		if (func_10(uParam0)) {
			return uParam0->f_2;
		}
		else {
			return func_9(gameplay::is_bit_set(*uParam0, 4)) - uParam0->f_1;
		}
	}
	return uParam0->f_1;
}

// Position - 0xB11
float func_9(bool bParam0) {
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	if (bParam0) {
		fVar0 = system::to_float(gameplay::get_game_timer());
		fVar1 = fVar0 / 1000f;
		return fVar1;
	}
	if (network::network_is_game_in_progress()) {
		iVar2 = network::get_network_time();
		fVar3 = system::to_float(iVar2);
		fVar4 = fVar3 / 1000f;
		return fVar4;
	}
	return system::to_float(gameplay::get_game_timer()) / 1000f;
}

// Position - 0xB69
bool func_10(var *uParam0) { return gameplay::is_bit_set(*uParam0, 2); }

// Position - 0xB79
void func_11(var *uParam0) {
	if (!func_14(uParam0)) {
		func_12(uParam0);
	}
}

// Position - 0xB91
void func_12(var *uParam0) { func_13(uParam0, 0f); }

// Position - 0xBA0
void func_13(int *iParam0, float fParam1) {
	uParam0->f_1 = func_9(gameplay::is_bit_set(*uParam0, 4)) - fParam1;
	gameplay::set_bit(uParam0, 1);
	gameplay::clear_bit(iParam0, 2);
	iParam0->f_2 = 0f;
}

// Position - 0xBCE
bool func_14(var *uParam0) { return gameplay::is_bit_set(*uParam0, 1); }

// Position - 0xBDE
void func_15(int iParam0, int iParam1) {
	if (player::get_player_wanted_level(player::get_player_index()) < iParam0 &&
		(!iLocal_574 || iLocal_574 && iParam0 < iLocal_571)) {
		player::set_player_wanted_level(player::get_player_index(), iParam0, 0);
		player::set_player_wanted_level_now(player::get_player_index(), 0);
		Local_68.f_158 = 1;
		if (iParam1) {
			player::set_max_wanted_level(iParam0);
		}
		else {
			player::set_max_wanted_level(5);
		}
	}
	else if (iLocal_574 && iParam0 > iLocal_571) {
	}
}

// Position - 0xC51
bool func_16() {
	func_17();
	switch (iLocal_56) {
	case 0:
		Local_68.f_486 = ped::create_synchronized_scene(Local_68.f_486.f_6, Local_68.f_486.f_9, 2);
		if (!ped::is_ped_dead_or_dying(Local_68.f_2, 1)) {
			if (!entity::is_entity_dead(Local_68.f_28, 0)) {
				if (Local_68.f_486 >= 0) {
					entity::set_entity_collision(Local_68.f_28, 1, 0);
					entity::set_entity_dynamic(Local_68.f_28, 1);
					ai::task_synchronized_scene(Local_68.f_2, Local_68.f_486, Local_68.f_486.f_1, Local_68.f_486.f_3,
												8f, -1.5f, 25, 0, 1148846080, 0);
					entity::play_synchronized_entity_anim(Local_68.f_28, Local_68.f_486, Local_68.f_486.f_4,
														  Local_68.f_486.f_1, 1000f, 8f, 137, 1148846080);
					entity::play_synchronized_entity_anim(Local_68.f_96.f_1, Local_68.f_486, Local_68.f_486.f_5,
														  Local_68.f_486.f_1, 1000f, 8f, 137, 1148846080);
				}
				else {
					return true;
				}
				iLocal_57 = 1;
				iLocal_60 = 5;
				iLocal_56 = 2;
			}
			else {
				return true;
			}
		}
		else {
			return true;
		}
		break;

	case 1:
		if (Local_68.f_486 >= 0) {
			if (ped::is_synchronized_scene_running(Local_68.f_486)) {
				if (ped::get_synchronized_scene_phase(Local_68.f_486) > 0.478f) {
					if (!entity::is_entity_dead(Local_68.f_28, 0)) {
						entity::play_synchronized_entity_anim(Local_68.f_28, Local_68.f_486, Local_68.f_486.f_4,
															  Local_68.f_486.f_1, 1000f, 8f, 137, 1148846080);
						Local_68.f_28.f_7 = {Local_68.f_28.f_7, Local_68.f_28.f_7.f_1, Local_68.f_28.f_7.f_2 + 0.2f};
					}
					iLocal_56 = 2;
				}
			}
		}
		break;

	case 2:
		if (Local_68.f_486 >= 0) {
			if (ped::is_synchronized_scene_running(Local_68.f_486)) {
				if (ped::get_synchronized_scene_phase(Local_68.f_486) > 0.447f) {
					if (!entity::is_entity_dead(Local_68.f_28, 0)) {
						if (!entity::is_entity_visible(Local_68.f_28)) {
							entity::set_entity_visible(Local_68.f_28, 1, 0);
						}
					}
				}
				if (Local_68.f_467) {
					if (ped::get_synchronized_scene_rate(Local_68.f_486) != 1.45f) {
						ped::set_synchronized_scene_rate(Local_68.f_486, 1.45f);
					}
				}
				if (ped::get_synchronized_scene_phase(Local_68.f_486) > 0.894f) {
					iLocal_56 = 3;
				}
			}
		}
		break;

	case 4:
		if (!entity::is_entity_dead(Local_68.f_28, 0)) {
			if (Local_68.f_486 >= 0) {
				if (ped::is_synchronized_scene_running(Local_68.f_486)) {
					if (iLocal_55 >= 4) {
						if (ped::get_synchronized_scene_phase(Local_68.f_486) < 0.871f) {
							iLocal_57 = 4;
						}
						entity::stop_synchronized_entity_anim(Local_68.f_28, -16f, 1);
						rope::activate_physics(Local_68.f_28);
					}
				}
			}
		}
		iLocal_56 = 3;
		break;

	case 3: return true;
	}
	return false;
}

// Position - 0xEF6
void func_17() {
	if (Local_68.f_486 >= 0) {
		if (ped::is_synchronized_scene_running(Local_68.f_486)) {
			if (ped::get_synchronized_scene_phase(Local_68.f_486) >= 0f) {
				if (ped::get_synchronized_scene_phase(Local_68.f_486) < 0.117f) {
					iLocal_55 = 1;
				}
				else if (ped::get_synchronized_scene_phase(Local_68.f_486) < 0.154f) {
					iLocal_55 = 2;
				}
				else if (ped::get_synchronized_scene_phase(Local_68.f_486) < 0.477f) {
					iLocal_55 = 3;
				}
				else if (ped::get_synchronized_scene_phase(Local_68.f_486) < 0.487f) {
					iLocal_55 = 4;
				}
				else if (ped::get_synchronized_scene_phase(Local_68.f_486) < 0.809f) {
					iLocal_55 = 5;
				}
				else if (ped::get_synchronized_scene_phase(Local_68.f_486) < 0.871f) {
					iLocal_55 = 6;
				}
				else if (ped::get_synchronized_scene_phase(Local_68.f_486) < 0.894f) {
					iLocal_55 = 7;
				}
				else if (ped::get_synchronized_scene_phase(Local_68.f_486) < 0.999f) {
					iLocal_55 = 8;
				}
				else if (iLocal_55 == 9) {
				}
			}
			else {
				iLocal_55 = 0;
			}
		}
		else if (iLocal_55 == 0) {
		}
	}
	else {
		iLocal_55 = 0;
	}
}

// Position - 0xFFE
void func_18() {
	if (!entity::is_entity_dead(Local_68.f_2, 0)) {
		weapon::give_weapon_to_ped(Local_68.f_2, joaat("weapon_pumpshotgun"), 12, 0, 1);
		weapon::set_current_ped_weapon(Local_68.f_2, joaat("weapon_pumpshotgun"), 0);
		ped::set_ped_relationship_group_hash(Local_68.f_2, -2065892691);
		ai::open_sequence_task(&Local_68.f_2.f_22);
		ai::task_aim_gun_at_entity(0, Local_68, 2000, 0);
		ai::task_shoot_at_entity(0, Local_68, 4000, -957453492);
		ai::task_combat_hated_targets_around_ped(0, 25f, 0);
		ai::close_sequence_task(Local_68.f_2.f_22);
		ai::task_perform_sequence(Local_68.f_2, Local_68.f_2.f_22);
	}
}

// Position - 0x1086
int func_19() {
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return 1;
	}
	return 0;
}

// Position - 0x10A8
bool func_20(int iParam0, int iParam1, var *uParam2, int iParam3) {
	vector3 vVar0;
	int iVar3;

	iVar3 = 0;
	if (!entity::is_entity_dead(iParam1, 0)) {
		vVar0 = {entity::get_entity_coords(iParam1, 1)};
	}
	if (gameplay::is_bullet_in_area(vVar0, 4f, 1)) {
		return true;
	}
	if (gameplay::has_bullet_impacted_in_area(vVar0, system::to_float(uParam2->f_6), 1, 1)) {
		return true;
	}
	if (weapon::is_ped_armed(iParam0, 2)) {
		if (ped::is_ped_shooting(iParam0)) {
			if (entity::is_entity_at_coord(iParam1, entity::get_entity_coords(iParam0, 1), IntToFloat(uParam2->f_6 * 3),
										   IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0)) {
				if (ped::is_ped_facing_ped(entity::get_ped_index_from_entity_index(iParam1), iParam0, 120f) &&
					entity::has_entity_clear_los_to_entity(iParam1, iParam0, 17)) {
					return true;
				}
			}
		}
		else {
			if (ped::is_ped_in_any_vehicle(entity::get_ped_index_from_entity_index(iParam1), 0)) {
				iVar3 = ped::get_vehicle_ped_is_in(entity::get_ped_index_from_entity_index(iParam1), 0);
			}
			if (ped::is_ped_planting_bomb(iParam0) || func_21(iVar3)) {
				if (entity::is_entity_at_coord(iParam1, entity::get_entity_coords(iParam0, 1),
											   IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3),
											   IntToFloat(uParam2->f_6 * 3), 0, 1, 0)) {
					if (ped::is_ped_facing_ped(entity::get_ped_index_from_entity_index(iParam1), iParam0, 120f) &&
						entity::has_entity_clear_los_to_entity(iParam1, iParam0, 17)) {
						return true;
					}
				}
			}
		}
	}
	if (iParam3) {
		if (gameplay::is_projectile_in_area(vVar0.x - IntToFloat(uParam2->f_6), vVar0.y - IntToFloat(uParam2->f_6),
											vVar0.z - IntToFloat(uParam2->f_6), vVar0.x + IntToFloat(uParam2->f_6),
											vVar0.y + IntToFloat(uParam2->f_6), vVar0.z + IntToFloat(uParam2->f_6),
											0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x1221
int func_21(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (vehicle::get_ped_in_vehicle_seat(iParam0, -1, 0) != 0) {
				if (weapon::get_current_ped_weapon(player::player_ped_id(), &iVar0, 1)) {
					if (iVar0 == joaat("weapon_stickybomb")) {
						if (func_22(player::player_ped_id(), iParam0, 1) < 40f) {
							if (player::get_entity_player_is_free_aiming_at(player::player_id(), &iVar1)) {
								if (entity::is_entity_a_vehicle(iVar1) &&
										entity::get_vehicle_index_from_entity_index(iVar1) == iParam0 ||
									entity::is_entity_a_ped(iVar1) &&
										entity::get_ped_index_from_entity_index(iVar1) ==
											vehicle::get_ped_in_vehicle_seat(iParam0, -1, 0)) {
									if (ped::is_ped_on_foot(player::player_ped_id()) &&
											controls::is_control_pressed(0, 24) ||
										ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) &&
											controls::is_control_pressed(0, 69)) {
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

// Position - 0x12EF
float func_22(int iParam0, int iParam1, int iParam2) {
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

// Position - 0x134D
bool func_23() {
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (!entity::is_entity_dead(Local_68, 0)) {
		if (ped::is_ped_in_any_vehicle(Local_68, 0)) {
			iVar1 = ped::get_vehicle_ped_is_in(Local_68, 0);
			bVar0 = true;
		}
		else if (!entity::is_entity_dead(player::get_players_last_vehicle(), 0)) {
			iVar1 = player::get_players_last_vehicle();
			bVar0 = true;
		}
	}
	if (bVar0) {
		if (!entity::is_entity_dead(iVar1, 0)) {
			if (entity::is_entity_in_angled_area(iVar1, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, 1, 0)) {
				return true;
			}
			else if (entity::is_entity_in_angled_area(iVar1, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, 1, 0)) {
				return true;
			}
			else if (entity::is_entity_in_angled_area(iVar1, Local_68.f_207, Local_68.f_210, Local_68.f_213, 0, 1, 0)) {
				return true;
			}
			else if (Local_68.f_199 != -1f) {
				if (entity::is_entity_in_angled_area(iVar1, Local_68.f_193, Local_68.f_196, Local_68.f_199, 0, 1, 0)) {
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0x1435
int func_24(int iParam0) {
	var uVar0;

	weapon::get_current_ped_weapon(iParam0, &uVar0, 1);
	return uVar0;
}

// Position - 0x1449
int func_25() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("appcamera")) > 0) {
		return 1;
	}
	return 0;
}

// Position - 0x1466
void func_26() {
	switch (iLocal_52) {
	case 0: break;

	case 2:
		if (!func_49()) {
			if (func_291()) {
				if (!func_1(Global_101700.f_18994.f_20, 1)) {
					switch (func_35("SHR_HOLDUP_1")) {
					case 2: func_33("SHR_HOLDUP_1", 2, 0, -1, 10000, 7, 0, 0, 0); break;

					case 1:
						func_282(&Global_101700.f_18994.f_20, 1);
						iLocal_52 = 1;
						break;
					}
					if (iLocal_65 > 0) {
						if (func_32("SHR_HOLDUP_1")) {
							func_28("SHR_HOLDUP_1", 1);
							iLocal_52 = 4;
						}
					}
					if (gameplay::get_game_timer() % 1000 < 50) {
					}
				}
				else {
					iLocal_52 = 1;
				}
			}
			else if (func_32("SHR_HOLDUP_1")) {
				func_28("SHR_HOLDUP_1", 1);
			}
		}
		break;

	case 1:
		if (!func_49()) {
			if (func_291()) {
				if (!func_1(Global_101700.f_18994.f_20, 2)) {
					switch (func_35("SHR_SNK_TUT")) {
					case 2: func_33("SHR_SNK_TUT", 2, 0, -1, 10000, 7, 0, 0, 0); break;

					case 1:
						func_282(&Global_101700.f_18994.f_20, 2);
						iLocal_52 = 4;
						break;
					}
				}
				else {
					iLocal_52 = 4;
				}
			}
			else if (func_32("SHR_SNK_TUT")) {
				func_28("SHR_SNK_TUT", 1);
			}
		}
		break;

	case 3:
		if (func_27("SHR_HOLDUP_1") || func_27("SHR_SNK_TUT")) {
			ui::clear_help(1);
		}
		if (func_32("SHR_SNK_TUT") && !func_1(Global_101700.f_18994.f_20, 2)) {
			func_28("SHR_SNK_TUT", 1);
		}
		if (func_32("SHR_HOLDUP_1") && !func_1(Global_101700.f_18994.f_20, 1)) {
			func_28("SHR_HOLDUP_1", 1);
		}
		iLocal_52 = 4;
		break;

	case 4:
		if (!func_291() && func_32("SHR_HOLDUP_1") && !func_1(Global_101700.f_18994.f_20, 1)) {
			func_28("SHR_HOLDUP_1", 1);
			iLocal_52 = 2;
		}
		if (!func_291() && func_32("SHR_SNK_TUT") && !func_1(Global_101700.f_18994.f_20, 2)) {
			func_28("SHR_SNK_TUT", 1);
			iLocal_52 = 2;
		}
		break;
	}
}

// Position - 0x1693
bool func_27(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0x16A6
void func_28(char *sParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (Global_100342 && iParam1) {
		if (func_27(sParam0) && !ui::is_help_message_fading_out()) {
			ui::clear_help(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145) {
		if (gameplay::are_strings_equal(sParam0, &Global_101700.f_19369[iVar0 /*16*/])) {
			iVar1 = iVar0;
			while (iVar1 <= Global_101700.f_19369.f_145 - 2) {
				func_31(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_30(Global_101700.f_19369.f_145 - 1);
			Global_101700.f_19369.f_145--;
			func_29();
			return;
		}
		iVar0++;
	}
}

// Position - 0x1753
void func_29() {
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

// Position - 0x1873
void func_30(int iParam0) {
	StringCopy(&Global_101700.f_19369[iParam0 /*16*/], "", 16);
	StringCopy(&Global_101700.f_19369[iParam0 /*16*/].f_4, "", 16);
	Global_101700.f_19369[iParam0 /*16*/].f_8 = 0;
	Global_101700.f_19369[iParam0 /*16*/].f_9 = 0;
	Global_101700.f_19369[iParam0 /*16*/].f_11 = 0;
	Global_101700.f_19369[iParam0 /*16*/].f_10 = -1;
	Global_101700.f_19369[iParam0 /*16*/].f_12 = 0;
	Global_101700.f_19369[iParam0 /*16*/].f_13 = 0;
	Global_101700.f_19369[iParam0 /*16*/].f_14 = 0;
	Global_101700.f_19369[iParam0 /*16*/].f_15 = 0;
}

// Position - 0x190D
void func_31(int iParam0, int iParam1) {
	Global_101700.f_19369[iParam0 /*16*/] = {Global_101700.f_19369[iParam1 /*16*/]};
	Global_101700.f_19369[iParam0 /*16*/].f_4 = {Global_101700.f_19369[iParam1 /*16*/].f_4};
	Global_101700.f_19369[iParam0 /*16*/].f_8 = Global_101700.f_19369[iParam1 /*16*/].f_8;
	Global_101700.f_19369[iParam0 /*16*/].f_10 = Global_101700.f_19369[iParam1 /*16*/].f_10;
	Global_101700.f_19369[iParam0 /*16*/].f_9 = Global_101700.f_19369[iParam1 /*16*/].f_9;
	Global_101700.f_19369[iParam0 /*16*/].f_11 = Global_101700.f_19369[iParam1 /*16*/].f_11;
	Global_101700.f_19369[iParam0 /*16*/].f_12 = Global_101700.f_19369[iParam1 /*16*/].f_12;
	Global_101700.f_19369[iParam0 /*16*/].f_13 = Global_101700.f_19369[iParam1 /*16*/].f_13;
	Global_101700.f_19369[iParam0 /*16*/].f_14 = Global_101700.f_19369[iParam1 /*16*/].f_14;
	Global_101700.f_19369[iParam0 /*16*/].f_15 = Global_101700.f_19369[iParam1 /*16*/].f_15;
}

// Position - 0x1A1D
bool func_32(char *sParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145) {
		if (gameplay::are_strings_equal(sParam0, &Global_101700.f_19369[iVar0 /*16*/])) {
			return true;
		}
		iVar0++;
	}
	return false;
}

// Position - 0x1A58
void func_33(char *sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8) {
	func_34(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

// Position - 0x1A79
void func_34(char *sParam0, char *sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
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
		func_29();
	}
}

// Position - 0x1C4C
int func_35(char *sParam0) {
	if (gameplay::are_strings_equal(sParam0, &Global_100345)) {
		return 1;
	}
	if (func_32(sParam0)) {
		return 0;
	}
	return 2;
}

// Position - 0x1C73
void func_36() {
	if (func_291()) {
		if (!entity::is_entity_dead(Local_68, 0)) {
		}
	}
	if (!entity::is_entity_dead(Local_68.f_2, 0)) {
	}
	switch (iLocal_53) {
	case 1:
		if (!entity::is_entity_dead(Local_68.f_2, 0)) {
			func_47(Local_68.f_2, "SHOP_GREET", 3);
		}
		iLocal_53 = 14;
		break;

	case 2:
		if (!entity::is_entity_dead(Local_68.f_2, 0)) {
			func_47(
				Local_68.f_2,
				func_45(iLocal_582, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")),
				3);
		}
		iLocal_53 = 14;
		break;

	case 3:
		if (!entity::is_entity_dead(Local_68.f_2, 0)) {
			func_47(
				Local_68.f_2,
				func_45(iLocal_582, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")),
				3);
		}
		iLocal_53 = 14;
		break;

	case 4:
		if (!entity::is_entity_dead(Local_68.f_2, 0)) {
			func_47(
				Local_68.f_2,
				func_45(iLocal_582, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")),
				3);
		}
		iLocal_53 = 14;
		break;

	case 5:
		if (!entity::is_entity_dead(Local_68.f_2, 0)) {
			func_47(
				Local_68.f_2,
				func_45(iLocal_582, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")),
				3);
		}
		iLocal_53 = 14;
		break;

	case 6:
		if (!entity::is_entity_dead(Local_68.f_2, 0)) {
			func_47(
				Local_68.f_2,
				func_45(iLocal_582, "SHOP_THREATENED", func_45(func_46(), "SHOP_NO_COPS_START", "SHOP_NO_COPS_END")),
				3);
		}
		iLocal_53 = 14;
		break;

	case 15:
		if (!entity::is_entity_dead(Local_68.f_2, 0)) {
			func_47(Local_68.f_2, "SHOP_STUBBORN", 3);
		}
		iLocal_53 = 14;
		break;

	case 7:
		if (!entity::is_entity_dead(Local_68.f_2, 0)) {
			func_47(Local_68.f_2, "SHOP_NO_ENTRY", 3);
		}
		iLocal_53 = 14;
		break;

	case 8:
		if (!entity::is_entity_dead(Local_68.f_2, 0)) {
			func_47(Local_68.f_2, "SHOP_NO_ENTRY", 3);
		}
		iLocal_53 = 14;
		break;

	case 36:
		if (!func_19()) {
			if (!entity::is_entity_dead(Local_68.f_2, 0)) {
				func_47(Local_68.f_2, "SHOP_THREATENED", 3);
			}
			iLocal_53 = 37;
		}
		break;

	case 9:
		if (!func_19()) {
			if (!entity::is_entity_dead(Local_68.f_2, 0)) {
				func_47(Local_68.f_2, "BUMP", 3);
			}
			iLocal_53 = 37;
		}
		break;

	case 10:
		if (!func_19()) {
			if (!entity::is_entity_dead(Local_68.f_2, 0)) {
				func_47(Local_68.f_2, "GENERIC_FRIGHTENED_HIGH", 3);
			}
			iLocal_53 = 37;
		}
		break;

	case 11:
		if (!func_19()) {
			if (!entity::is_entity_dead(Local_68.f_2, 0)) {
				func_47(Local_68.f_2, "SHOP_BRAVE", 3);
			}
			iLocal_53 = 37;
		}
		break;

	case 14:
		if (func_44() || func_43()) {
			if (func_44()) {
				if (!iLocal_579) {
					iLocal_53 = 7;
					iLocal_579 = 1;
				}
			}
			else if (func_43()) {
				if (!iLocal_580) {
					iLocal_53 = 8;
					iLocal_580 = 1;
				}
			}
			if (!func_14(&Local_68.f_483)) {
				func_11(&Local_68.f_483);
			}
			else if (func_10(&Local_68.f_483)) {
				func_42(&Local_68.f_483);
			}
			else if (func_8(&Local_68.f_483) > 10f) {
				if (!func_1(Local_68.f_470, 32)) {
					if (!ped::is_ped_injured(Local_68.f_2) && func_1(Local_68.f_470, 4)) {
						ai::task_play_anim(Local_68.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
					}
					iLocal_53 = 36;
					func_15(1, 0);
					func_282(&Local_68.f_470, 32);
				}
			}
		}
		else if (func_14(&Local_68.f_483) && !func_10(&Local_68.f_483)) {
			func_41(&Local_68.f_483);
		}
		break;

	case 12:
		if (!audio::is_ambient_speech_playing(player::player_ped_id())) {
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				func_47(player::player_ped_id(), "SHOP_HOLDUP", 8);
			}
			func_12(&Local_68.f_471);
			if (Local_68.f_2.f_11) {
				iLocal_53 = 37;
			}
			else {
				iLocal_53 = 13;
			}
		}
		else {
			audio::stop_current_playing_ambient_speech(player::player_ped_id());
		}
		break;

	case 13:
		if (func_40(&Local_68.f_471) > 3f) {
			if (Local_68.f_2.f_12) {
				iLocal_53 = 22;
			}
			else if (Local_68.f_458) {
				iLocal_53 = 17;
			}
			else if (Local_68.f_459) {
				iLocal_53 = 18;
			}
			else if (Local_68.f_460) {
				iLocal_53 = 19;
			}
			else if (Local_68.f_461) {
				iLocal_53 = 20;
			}
			else if (Local_68.f_462) {
				iLocal_53 = 21;
			}
			else {
				iLocal_53 = 16;
			}
			func_39(&Local_68.f_471);
		}
		break;

	case 16:
		if (!entity::is_entity_dead(Local_68.f_2, 0)) {
			func_47(Local_68.f_2, "SHOP_SCARED", 3);
		}
		iLocal_53 = 37;
		break;

	case 17:
		if (!entity::is_entity_dead(Local_68.f_2, 0)) {
			func_47(Local_68.f_2, "SHOP_SCARED", 3);
		}
		iLocal_53 = 37;
		break;

	case 18:
		if (!entity::is_entity_dead(Local_68.f_2, 0)) {
			func_47(Local_68.f_2, "SHOP_SCARED", 3);
		}
		iLocal_53 = 37;
		break;

	case 19:
		if (!entity::is_entity_dead(Local_68.f_2, 0)) {
			func_47(Local_68.f_2, "SHOP_SCARED", 3);
		}
		iLocal_53 = 37;
		break;

	case 20:
		if (!entity::is_entity_dead(Local_68.f_2, 0)) {
			func_47(Local_68.f_2, "SHOP_SCARED", 3);
		}
		iLocal_53 = 37;
		break;

	case 21:
		if (!entity::is_entity_dead(Local_68.f_2, 0)) {
			func_47(Local_68.f_2, "SHOP_SCARED", 3);
		}
		iLocal_53 = 37;
		break;

	case 22:
		if (!audio::is_ambient_speech_playing(player::player_ped_id())) {
			if (!entity::is_entity_dead(Local_68.f_2, 0)) {
				func_47(Local_68.f_2, "SHOP_BRAVE", 8);
			}
			func_282(&Local_68.f_470, 256);
			iLocal_53 = 37;
		}
		break;

	case 23:
		if (!audio::is_ambient_speech_playing(player::player_ped_id())) {
			if (Local_68.f_28.f_14) {
				if (!entity::is_entity_dead(Local_68.f_2, 0)) {
					func_47(Local_68.f_2, "SHOP_GAVE_YOU_EVERYTHING", 3);
				}
			}
			iLocal_53 = 37;
		}
		else {
			audio::stop_current_playing_ambient_speech(player::player_ped_id());
		}
		break;

	case 24:
		if (vehicle::is_vehicle_driveable(Local_68.f_46.f_4[0], 0)) {
			vehicle::set_vehicle_siren(Local_68.f_46.f_4[0], 0);
		}
		if (!entity::is_entity_dead(Local_68.f_46[0], 0)) {
			func_47(Local_68.f_46[0], "SURROUNDED", 15);
		}
		iLocal_53 = 25;
		break;

	case 25:
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			func_47(player::player_ped_id(), "SPOT_POLICE", 3);
		}
		iLocal_53 = 37;
		break;

	case 26:
		if (!entity::is_entity_dead(Local_68.f_2, 0)) {
			func_47(Local_68.f_2, "SHOP_POUR_CAN", 3);
		}
		iLocal_53 = 37;
		break;

	case 27:
		if (!func_19()) {
			if (!entity::is_entity_dead(Local_68.f_2, 0)) {
				func_47(Local_68.f_2, "SCREAM_PANIC", 3);
			}
			iLocal_53 = 37;
		}
		else {
			func_37();
		}
		break;

	case 28:
		if (!entity::is_entity_dead(Local_68.f_2, 0)) {
			func_47(Local_68.f_2, "SHOP_RECOGNISE", 8);
		}
		iLocal_53 = 37;
		break;

	case 29:
		if (!entity::is_entity_dead(Local_68.f_2, 0)) {
			func_47(Local_68.f_2, "SHOP_RECOGNISE", 8);
		}
		iLocal_53 = 37;
		break;

	case 30:
		if (!entity::is_entity_dead(Local_68.f_2, 0)) {
			func_47(Local_68.f_2, "SHOP_NO_COPS", 3);
		}
		iLocal_53 = 37;
		break;

	case 31:
		if (!func_19()) {
			iLocal_53 = 37;
		}
		break;

	case 33:
		if (!audio::is_ambient_speech_playing(player::player_ped_id()) &&
			!audio::is_ambient_speech_playing(Local_68.f_2)) {
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				func_47(player::player_ped_id(), "SHOP_HURRY", 11);
			}
			func_12(&Local_68.f_471);
			iLocal_53 = 32;
		}
		break;

	case 32:
		if (func_40(&Local_68.f_471) > 1f) {
			if (!entity::is_entity_dead(Local_68.f_2, 0)) {
				func_47(Local_68.f_2, "SHOP_HURRYING", 3);
			}
			iLocal_53 = 37;
		}
		break;

	case 34:
		if (!func_19()) {
			if (!entity::is_entity_dead(Local_68.f_2, 0)) {
				func_47(Local_68.f_2, "SHOP_SELL", 3);
			}
			iLocal_53 = 37;
		}
		break;

	case 35:
		if (!func_19()) {
			if (!entity::is_entity_dead(Local_68.f_2, 0)) {
				func_47(Local_68.f_2, "SHOP_STEAL", 3);
			}
			iLocal_53 = 37;
		}
		break;
	}
}

// Position - 0x24B2
void func_37() {
	Global_14611 = 0;
	func_38();
}

// Position - 0x24C2
void func_38() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
	}
}

// Position - 0x24E3
void func_39(int *iParam0) {
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

// Position - 0x24F9
float func_40(var *uParam0) {
	if (func_14(uParam0)) {
		if (func_10(uParam0)) {
			return uParam0->f_2;
		}
		else {
			return func_9(gameplay::is_bit_set(*uParam0, 4)) - uParam0->f_1;
		}
	}
	return 0f;
}

// Position - 0x2535
void func_41(int *iParam0) {
	if (func_14(iParam0)) {
		if (!func_10(iParam0)) {
			iParam0->f_2 = func_9(gameplay::is_bit_set(*iParam0, 4)) - iParam0->f_1;
			gameplay::set_bit(iParam0, 2);
		}
	}
}

// Position - 0x256F
void func_42(int *iParam0) {
	if (func_14(iParam0)) {
		if (func_10(iParam0)) {
			iParam0->f_1 = func_9(gameplay::is_bit_set(*iParam0, 4)) - iParam0->f_2;
			iParam0->f_2 = 0f;
			gameplay::clear_bit(iParam0, 2);
		}
	}
}

// Position - 0x25AD
bool func_43() {
	if (!entity::is_entity_dead(Local_68, 0)) {
		if (entity::is_entity_in_angled_area(Local_68, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, 1, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x25E1
bool func_44() {
	if (!entity::is_entity_dead(Local_68, 0)) {
		if (entity::is_entity_in_angled_area(Local_68, Local_68.f_214, Local_68.f_217, Local_68.f_220, 0, 1, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x2615
char *func_45(int iParam0, char *sParam1, char *sParam2) {
	if (iParam0) {
		return sParam1;
	}
	return sParam2;
}

// Position - 0x262C
int func_46() {
	if (gameplay::is_bit_set(gameplay::get_random_int_in_range(0, 65535), 0)) {
		return 1;
	}
	return 0;
}

// Position - 0x264D
void func_47(int iParam0, char *sParam1, int iParam2) {
	audio::_play_ambient_speech1(iParam0, sParam1, func_48(iParam2), 1);
}

// Position - 0x2664
int func_48(int iParam0) {
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

// Position - 0x2859
bool func_49() { return Global_17149; }

// Position - 0x2864
void func_50() {
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_291() && iLocal_66 != 3) {
		iVar2 = 0;
		while (iVar2 < script::get_number_of_events(0)) {
			iVar0 = script::get_event_at_index(0, iVar2);
			switch (iVar0) {
			case 140:
				script::get_event_data(0, iVar2, &iVar1, 1);
				if (func_52(iVar1)) {
					if (entity::is_entity_a_ped(iVar1)) {
						if (iVar1 != func_51(Local_68.f_2) && iVar1 != func_51(player::player_ped_id())) {
							func_282(&Local_68.f_470, 8);
						}
					}
					if (!entity::is_entity_a_ped(iVar1) && !entity::is_entity_a_vehicle(iVar1)) {
						func_282(&Local_68.f_470, 8);
					}
				}
				break;

			case 139:
				script::get_event_data(0, iVar2, &iVar1, 1);
				if (func_52(iVar1)) {
					if (entity::is_entity_a_ped(iVar1)) {
						if (iVar1 != func_51(Local_68.f_2) && iVar1 != func_51(player::player_ped_id())) {
							func_282(&Local_68.f_470, 8);
						}
					}
					if (!entity::is_entity_a_ped(iVar1) && !entity::is_entity_a_vehicle(iVar1)) {
						func_282(&Local_68.f_470, 8);
					}
				}
				break;
			}
			iVar2++;
		}
	}
}

// Position - 0x2982
int func_51(var uParam0) { return uParam0; }

// Position - 0x298C
bool func_52(int iParam0) {
	if (!entity::is_entity_dead(iParam0, 0)) {
		if (interior::get_interior_from_entity(iParam0) == Local_68.f_185) {
			return true;
		}
		else if (entity::is_entity_in_angled_area(iParam0, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, 1, 0)) {
			return true;
		}
		else if (entity::is_entity_in_angled_area(iParam0, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, 1, 0)) {
			return true;
		}
		else if (entity::is_entity_in_angled_area(iParam0, Local_68.f_207, Local_68.f_210, Local_68.f_213, 0, 1, 0)) {
			return true;
		}
		else if (Local_68.f_199 != -1f) {
			if (entity::is_entity_in_angled_area(iParam0, Local_68.f_193, Local_68.f_196, Local_68.f_199, 0, 1, 0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x2A49
void func_53() {
	int iVar0;
	var uVar1[10];
	int iVar12;
	int iVar13;

	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (func_291()) {
			if (!gameplay::is_bit_set(Local_68.f_162.f_18, 0)) {
				iVar12 = 0;
				iVar13 = 0;
				iVar12 = ped::get_ped_nearby_peds(player::player_ped_id(), &uVar1, -1);
				iVar0 = 0;
				while (iVar0 < Local_68.f_162) {
					Local_68.f_162[iVar0] = 0;
					iVar0++;
				}
				iVar0 = 0;
				iVar13 = 0;
				while (iVar13 < iVar12) {
					if (iVar0 < Local_68.f_162) {
						if (entity::does_entity_exist(uVar1[iVar13]) && !ped::is_ped_injured(uVar1[iVar13]) &&
							!ped::is_ped_in_any_vehicle(uVar1[iVar13], 0)) {
							if (ped::is_ped_group_member(uVar1[iVar13],
														 player::get_player_group(player::player_id()))) {
								Local_68.f_162[iVar0] = uVar1[iVar13];
								Local_68.f_162.f_5[iVar0 /*3*/] = {entity::get_entity_coords(uVar1[iVar13], 1)};
								iVar0++;
							}
						}
					}
					iVar13++;
				}
				gameplay::set_bit(&Local_68.f_162.f_18, 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_68.f_162) {
				if (entity::does_entity_exist(Local_68.f_162[iVar0]) && !ped::is_ped_injured(Local_68.f_162[iVar0]) &&
					!ped::is_ped_in_any_vehicle(Local_68.f_162[iVar0], 0)) {
					if (gameplay::is_bit_set(Local_68.f_162.f_18, 1)) {
						if (gameplay::get_game_timer() % 1500 < 50) {
						}
						entity::set_entity_visible(Local_68.f_162[iVar0], 0, 0);
						entity::set_entity_collision(Local_68.f_162[iVar0], 0, 0);
						entity::freeze_entity_position(Local_68.f_162[iVar0], 1);
						entity::set_entity_coords_no_offset(Local_68.f_162[iVar0], Local_68.f_162.f_5[iVar0 /*3*/], 1,
															1, 1);
					}
					else if (!entity::is_entity_visible(Local_68.f_162[iVar0])) {
						entity::set_entity_visible(Local_68.f_162[iVar0], 1, 0);
						entity::set_entity_collision(Local_68.f_162[iVar0], 1, 0);
						entity::freeze_entity_position(Local_68.f_162[iVar0], 0);
						entity::set_entity_coords_no_offset(Local_68.f_162[iVar0], Local_68.f_162.f_5[iVar0 /*3*/], 1,
															1, 1);
					}
				}
				iVar0++;
			}
		}
		else {
			if (gameplay::is_bit_set(Local_68.f_162.f_18, 0)) {
				gameplay::clear_bit(&Local_68.f_162.f_18, 0);
			}
			iVar0 = 0;
			while (iVar0 < Local_68.f_162) {
				if (entity::does_entity_exist(Local_68.f_162[iVar0]) && !ped::is_ped_injured(Local_68.f_162[iVar0]) &&
					!ped::is_ped_in_any_vehicle(Local_68.f_162[iVar0], 0)) {
					if (!entity::is_entity_visible(Local_68.f_162[iVar0])) {
						entity::set_entity_visible(Local_68.f_162[iVar0], 1, 0);
						entity::set_entity_collision(Local_68.f_162[iVar0], 1, 0);
						entity::freeze_entity_position(Local_68.f_162[iVar0], 0);
						entity::set_entity_coords_no_offset(Local_68.f_162[iVar0], Local_68.f_162.f_5[iVar0 /*3*/], 1,
															1, 1);
					}
				}
				iVar0++;
			}
		}
	}
}

// Position - 0x2CFA
void func_54() {
	switch (iLocal_622) {
	case 0:
		if (func_291()) {
			player::clear_player_has_damaged_at_least_one_ped(player::player_id());
			streaming::request_anim_dict("oddjobs@shop_robbery@rob_till");
			streaming::request_anim_dict("misscommon@response");
			graphics::request_streamed_texture_dict(func_63(iLocal_568), 0);
			streaming::request_model(joaat("prop_choc_ego"));
			streaming::request_model(joaat("prop_choc_meto"));
			streaming::request_model(joaat("prop_choc_pq"));
			if (!iLocal_574) {
				streaming::request_model(Local_68.f_46.f_26);
				streaming::request_model(Local_68.f_46.f_27);
			}
			iLocal_622 = 1;
		}
		break;

	case 1:
		if (!audio::request_script_audio_bank("SCRIPT\MARKET_CASH_REGISTER", 0, -1)) {
			return;
		}
		if (!streaming::has_anim_dict_loaded("oddjobs@shop_robbery@rob_till")) {
			return;
		}
		if (!streaming::has_anim_dict_loaded("misscommon@response")) {
			return;
		}
		if (!streaming::has_model_loaded(joaat("prop_choc_ego"))) {
			return;
		}
		if (!streaming::has_model_loaded(joaat("prop_choc_meto"))) {
			return;
		}
		if (!streaming::has_model_loaded(joaat("prop_choc_pq"))) {
			return;
		}
		if (!iLocal_574) {
			if (!streaming::has_model_loaded(Local_68.f_46.f_26)) {
				return;
			}
			if (!streaming::has_model_loaded(Local_68.f_46.f_27)) {
				return;
			}
		}
		if (!func_61("SNK_MNU", iLocal_568, 0)) {
			return;
		}
		if (!func_1(Local_68.f_470, 4)) {
			if (!func_1(Local_68.f_470, 1024)) {
				uLocal_618[0] = object::create_object(func_60(0), func_59(0), 1, 1, 0);
				uLocal_618[1] = object::create_object(func_60(1), func_59(1), 1, 1, 0);
				uLocal_618[2] = object::create_object(func_60(2), func_59(2), 1, 1, 0);
				entity::set_entity_visible(uLocal_618[0], 0, 0);
				entity::set_entity_visible(uLocal_618[1], 0, 0);
				entity::set_entity_visible(uLocal_618[2], 0, 0);
				func_282(&Local_68.f_470, 1024);
			}
			func_282(&Local_68.f_470, 4);
			iLocal_622 = 2;
		}
		break;

	case 2:
		if (!func_291()) {
			func_55();
			func_289(&Local_68.f_470, 4);
			iLocal_622 = 0;
		}
		break;

	case 3:
		if (func_1(Local_68.f_470, 4)) {
			func_55();
			func_289(&Local_68.f_470, 4);
		}
		break;
	}
}

// Position - 0x2F04
void func_55() {
	streaming::remove_anim_dict("oddjobs@shop_robbery@rob_till");
	streaming::remove_anim_dict("misscommon@response");
	audio::release_named_script_audio_bank("SCRIPT\MARKET_CASH_REGISTER");
	graphics::set_streamed_texture_dict_as_no_longer_needed(func_63(iLocal_568));
	streaming::set_model_as_no_longer_needed(joaat("prop_choc_ego"));
	streaming::set_model_as_no_longer_needed(joaat("prop_choc_meto"));
	streaming::set_model_as_no_longer_needed(joaat("prop_choc_pq"));
	func_56(1, iLocal_568);
	if (!iLocal_574) {
		streaming::set_model_as_no_longer_needed(Local_68.f_46.f_26);
		streaming::set_model_as_no_longer_needed(Local_68.f_46.f_27);
	}
}

// Position - 0x2F6D
void func_56(int iParam0, int iParam1) {
	int iVar0;

	if (!func_58(&iVar0, 0, iParam1)) {
		return;
	}
	if (Global_17290.f_7899) {
		ui::reset_hud_component_values(15);
		Global_17290.f_7899 = 0;
	}
	ui::_0x55598D21339CB998(0f);
	if (Global_17290.f_5498[iVar0]) {
		ui::clear_additional_text(9, 0);
		Global_17290.f_5498[iVar0] = 0;
	}
	if (Global_17290.f_5484[iVar0]) {
		graphics::set_streamed_texture_dict_as_no_longer_needed("CommonMenu");
		Global_17290.f_5484[iVar0] = 0;
	}
	if (Global_17290.f_5491[iVar0]) {
		graphics::set_streamed_texture_dict_as_no_longer_needed("MPShopSale");
		Global_17290.f_5491[iVar0] = 0;
	}
	if (iParam0) {
		func_57(&Global_17290.f_5530[iVar0 /*10*/]);
		Global_17290.f_5591[iVar0] = 0;
	}
	else {
		Global_17290.f_5591[iVar0] = 0;
	}
}

// Position - 0x302B
void func_57(int *iParam0) {
	if (uParam0->f_9 != 0) {
		if (graphics::has_scaleform_movie_loaded(*uParam0)) {
			graphics::set_scaleform_movie_as_no_longer_needed(uParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

// Position - 0x3054
int func_58(int *iParam0, int iParam1, int iParam2) {
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;

	if (iParam2 == -1) {
		if (network::network_is_game_in_progress() && network::network_get_this_script_is_network_script()) {
			iParam2 = network::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, script::get_this_script_name(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = gameplay::get_hash_key(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6) {
		if (Global_17290.f_5591[iVar17] == iVar16) {
			*iParam0 = iVar17;
			return 1;
		}
		else if (Global_17290.f_5591[iVar17] == 0) {
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (iParam1) {
		if (iVar18 != -1) {
			Global_17290.f_5591[iVar18] = iVar16;
			*iParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

// Position - 0x30F1
Vector3 func_59(int iParam0) {
	switch (iParam0) {
	case 0: return Local_68.f_486.f_6 - Vector(1f, 0f, 0.1f);

	case 1: return Local_68.f_486.f_6 - Vector(1f, 0f, 0f);

	case 2: return Local_68.f_486.f_6 - Vector(1f, 0f, -0.1f);

	default:
	}
	return Local_68.f_486.f_6 - Vector(1f, 0f, -0.1f);
}

// Position - 0x315B
int func_60(int iParam0) {
	switch (iParam0) {
	case 0: return joaat("prop_choc_pq");

	case 1: return joaat("prop_choc_ego");

	case 2: return joaat("prop_choc_meto");

	default:
	}
	return joaat("prop_choc_pq");
}

// Position - 0x3199
int func_61(char *sParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_58(&iVar0, 1, iParam1)) {
		return 0;
	}
	iVar1 = 1;
	StringCopy(&Global_17290.f_5505[iVar0 /*4*/], sParam0, 16);
	if (!gameplay::is_string_null_or_empty(&Global_17290.f_5505[iVar0 /*4*/])) {
		ui::request_additional_text(&Global_17290.f_5505[iVar0 /*4*/], 9);
		Global_17290.f_5498[iVar0] = 1;
		if (!ui::has_this_additional_text_loaded(&Global_17290.f_5505[iVar0 /*4*/], 9)) {
			iVar1 = 0;
		}
	}
	graphics::request_streamed_texture_dict("CommonMenu", 0);
	Global_17290.f_5484[iVar0] = 1;
	if (!graphics::has_streamed_texture_dict_loaded("CommonMenu")) {
		iVar1 = 0;
	}
	if (iParam2) {
		graphics::request_streamed_texture_dict("MPShopSale", 0);
		Global_17290.f_5491[iVar0] = 1;
		if (!graphics::has_streamed_texture_dict_loaded("MPShopSale")) {
			iVar1 = 0;
		}
	}
	iVar2 = 0;
	StringCopy(&Global_17290.f_5530[iVar0 /*10*/].f_1, "instructional_buttons", 24);
	iVar2 = func_62(&Global_17290.f_5530[iVar0 /*10*/]);
	if (!iVar1 || !iVar2) {
	}
	return iVar1 & iVar2;
}

// Position - 0x328F
bool func_62(var *uParam0) {
	switch (uParam0->f_9) {
	case 0:
		if (!graphics::has_scaleform_movie_loaded(*uParam0)) {
			*uParam0 = unk_0x67D02A194A2FC2BD(&uParam0->f_1);
			uParam0->f_9 = 1;
			if (uParam0->f_7) {
				if (graphics::has_scaleform_movie_loaded(*uParam0)) {
					uParam0->f_8 = gameplay::get_game_timer();
					uParam0->f_9 = 2;
				}
			}
		}
		else {
			uParam0->f_8 = gameplay::get_game_timer();
			uParam0->f_9 = 2;
		}
		break;

	case 1:
		if (graphics::has_scaleform_movie_loaded(*uParam0)) {
			uParam0->f_8 = gameplay::get_game_timer();
			uParam0->f_9 = 2;
		}
		break;

	case 2:
		if (!graphics::has_scaleform_movie_loaded(*uParam0)) {
			uParam0->f_9 = 0;
		}
		break;
	}
	return uParam0->f_9 == 2;
}

// Position - 0x3331
char *func_63(int iParam0) {
	switch (iParam0) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4: return "ShopUI_Title_GasStation";

	case 5: return "ShopUI_Title_LiquorStore3";

	case 6:
	case 7:
	case 8:
	case 9: return "ShopUI_Title_LiquorStore2";

	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18: return "ShopUI_Title_ConvenienceStore";

	case -2: return "ShopUI_Title_LiquorStore";

	default:
	}
	return "NULL";
}

// Position - 0x33DD
void func_64() {
	switch (iLocal_623) {
	case 0:
		if (func_291()) {
			streaming::request_anim_dict(Local_68.f_486.f_1);
			iLocal_623 = 1;
		}
		break;

	case 1:
		if (!streaming::has_anim_dict_loaded(Local_68.f_486.f_1)) {
			return;
		}
		if (!func_1(Local_68.f_470, 16)) {
			func_282(&Local_68.f_470, 16);
			iLocal_623 = 2;
		}
		break;

	case 2:
		if (!func_291() && iLocal_65 != 1) {
			streaming::remove_anim_dict(Local_68.f_486.f_1);
			func_289(&Local_68.f_470, 16);
			iLocal_623 = 0;
		}
		break;

	case 3:
		if (func_1(Local_68.f_470, 16)) {
			streaming::remove_anim_dict(Local_68.f_486.f_1);
			func_289(&Local_68.f_470, 16);
		}
		break;
	}
}

// Position - 0x34A6
void func_65() {
	switch (iLocal_642) {
	case 0:
		if (Local_68.f_158) {
			iLocal_642 = 1;
		}
		break;

	case 1:
		if (func_291()) {
			if (func_14(&Local_68.f_158.f_1)) {
				func_39(&Local_68.f_158.f_1);
			}
			if (gameplay::get_game_timer() % 1000 < 50) {
			}
			if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
				player::_0x4669B3ED80F24B4E(player::player_id());
			}
		}
		else {
			func_12(&Local_68.f_158.f_1);
			iLocal_642 = 2;
		}
		break;

	case 2:
		if (func_291()) {
			iLocal_642 = 1;
		}
		break;

	case 3: break;
	}
}

// Position - 0x3540
void func_66() {
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	char *sVar7;
	float *fVar8;

	func_178();
	if (iLocal_60 == 1 || iLocal_60 == 2)
		&&player::get_player_wanted_level(player::player_id()) == 0 && !ped::is_ped_injured(Local_68) &&
			!func_177(-1082130432) && !ped::is_ped_injured(Local_68.f_2) {
			iVar1 = entity::get_entity_health(player::player_ped_id());
			iVar2 = entity::get_entity_max_health(player::player_ped_id());
			if (iLocal_66 != 2 && iLocal_66 != 3 && iLocal_66 != 4 && func_291()) {
				if (!player::is_player_control_on(player::player_id())) {
					player::set_player_control(player::player_id(), 1, 0);
				}
			}
			iVar6 = 0;
			switch (iLocal_66) {
			case 0:
				if (func_1(Local_68.f_470, 4) && func_24(Local_68) == joaat("weapon_unarmed")) {
					if (func_176(iLocal_568, &Local_68.f_486.f_6, Local_68.f_486.f_9.f_2, &Local_68.f_102.f_26[0 /*3*/],
								 &Local_68.f_102.f_26[1 /*3*/], &Local_68.f_102.f_33, &Local_68.f_102.f_36)) {
						vVar3 = {entity::get_entity_coords(player::player_ped_id(), 1)};
						if (gameplay::get_distance_between_coords(vVar3, Local_68.f_102.f_33, 1) < 5f) {
							if (entity::is_entity_in_angled_area(player::player_ped_id(), Local_68.f_102.f_26[0 /*3*/],
																 Local_68.f_102.f_26[1 /*3*/], Local_68.f_102.f_36, 0,
																 1, 0)) {
								if (ped::_0xFCF37A457CB96DC0(player::player_ped_id(), Local_68.f_102.f_33, 135f)) {
									if (gameplay::get_game_timer() % 1000 < 50) {
									}
									if (!func_27("SHR_HOLDUP_1") && !func_27("SHR_MENU") && !func_49() && func_175()) {
										func_174("SHR_MENU");
									}
									Local_68.f_469 = -1;
									func_173(&Local_68.f_469, 4, "SHR_MENU", 0, 0, 0, 0);
									gameplay::clear_bit(&Local_68.f_162.f_18, 1);
									gameplay::clear_bit(&Local_68.f_162.f_18, 0);
									iLocal_66 = 1;
								}
							}
						}
					}
				}
				break;

			case 1:
				if (!ped::_0xFCF37A457CB96DC0(player::player_ped_id(), Local_68.f_102.f_33, 135f) ||
					func_24(Local_68) != joaat("weapon_unarmed")) {
					if (func_27("SHR_MENU")) {
						ui::clear_help(1);
					}
					Local_68.f_102.f_22 = -1;
					func_172(&Local_68.f_469);
					iLocal_66 = 0;
				}
				else if (!func_27("SHR_MENU") && !func_27("SHR_HOLDUP_1") && func_175() &&
						 !func_171(Local_68.f_469, 0)) {
					func_174("SHR_MENU");
				}
				if (!ai::is_ped_running(player::player_ped_id()) && !ped::is_ped_ragdoll(player::player_ped_id()) &&
					!ped::is_ped_jumping(player::player_ped_id())) {
					if (func_169(Local_68.f_469, 1)) {
						if (func_27("SHR_MENU")) {
							ui::clear_help(1);
						}
						gameplay::set_bit(&Local_68.f_162.f_18, 1);
						func_12(&Local_68.f_102.f_53);
						func_172(&Local_68.f_469);
						func_168(23, 1);
						if (!ped::is_ped_injured(player::player_ped_id()) && !ped::is_ped_injured(Local_68.f_2)) {
							ai::task_turn_ped_to_face_entity(player::player_ped_id(), Local_68.f_2, 0);
						}
						iLocal_66 = 2;
					}
				}
				break;

			case 2:
				if (!cam::does_cam_exist(iLocal_641)) {
					iLocal_641 = cam::create_camera_with_params(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				func_167(iLocal_568, Local_68.f_486.f_6, Local_68.f_486.f_9.f_2, &Local_68.f_102, &Local_68.f_102.f_3,
						 &fVar8);
				cam::set_cam_coord(iLocal_641, Local_68.f_102);
				cam::set_cam_rot(iLocal_641, Local_68.f_102.f_3, 2);
				cam::set_cam_fov(iLocal_641, 35f);
				cam::shake_cam(iLocal_641, "HAND_SHAKE", 0.1f);
				cam::set_cam_active(iLocal_641, 1);
				cam::render_script_cams(1, 0, 3000, 1, 0, 0);
				if (player::is_player_control_on(player::player_id())) {
					player::set_player_control(player::player_id(), 0, 0);
					func_282(&Local_68.f_470, 2048);
				}
				Local_68.f_102.f_46 = func_63(iLocal_568);
				Local_68.f_102.f_23 = 0;
				Local_68.f_102.f_24 = 3;
				func_166(0);
				func_165(1, 1, 0, 0, 0);
				func_164(1, 2, 1, 1, 1);
				func_163(func_4(iLocal_568));
				func_161(1, Local_68.f_102.f_46, Local_68.f_102.f_46);
				func_160();
				func_156(0, "SNK_ITEM1", 0, 1, 0, 0);
				func_156(0, "ITEM_COST", 1, 1, 0, 0);
				func_152(func_155(0), 0);
				func_156(1, "SNK_ITEM2", 0, 1, 0, 0);
				func_156(1, "ITEM_COST", 1, 1, 0, 0);
				func_152(func_155(1), 0);
				func_156(2, "SNK_ITEM3", 0, 1, 0, 0);
				func_156(2, "ITEM_COST", 1, 1, 0, 0);
				func_152(func_155(2), 0);
				func_151(0);
				func_150(Local_68.f_102.f_23, 1, 1);
				func_149("SNK_ITEM1_D", 0, 0);
				func_148(201, "ITEM_SELECT", -1, 0);
				func_148(202, "ITEM_BACK", -1, 0);
				func_148(203, "SNK_LIFT", -1, 0);
				iLocal_66 = 3;
				break;

			case 3:
				iVar6 = 0;
				if (gameplay::is_pc_version()) {
					if (controls::_is_input_just_disabled(2)) {
						controls::disable_control_action(0, 1, 1);
						controls::disable_control_action(0, 2, 1);
						controls::enable_control_action(0, 237, 1);
						controls::enable_control_action(0, 238, 1);
						controls::enable_control_action(0, 241, 1);
						controls::enable_control_action(0, 242, 1);
						func_145(0, 0, 0, 1);
						func_144(0, -1, 1);
						if (func_143()) {
							if (Global_2594050 != Local_68.f_102.f_23) {
								audio::play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								Local_68.f_102.f_23 = Global_2594050;
								func_150(Local_68.f_102.f_23, 1, 1);
								Local_68.f_102.f_37 = 0;
								Local_68.f_102.f_41 = 0;
								Local_68.f_102.f_42 = 0;
								sVar7 = func_142(Local_68.f_102.f_23);
								if (ui::does_text_label_exist(sVar7)) {
									func_149(sVar7, 0, 0);
								}
							}
							else {
								iVar6 = 1;
							}
						}
					}
				}
				func_105(1, iLocal_568, 1, 0, 1, -1082130432, 0, 0);
				func_101();
				if (controls::is_disabled_control_just_pressed(2, 201) || iVar6 == 1) {
					Local_68.f_102.f_37 = 1;
					Local_68.f_102.f_41 = 0;
					Local_68.f_102.f_42 = 0;
					if (Local_68.f_102.f_40 && Local_68.f_102.f_43) {
						Local_68.f_102.f_44 = 1;
						audio::play_sound_frontend(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						iLocal_631 = 1;
						iLocal_634 = Local_68.f_102.f_23;
						iLocal_66 = 4;
					}
					else {
						Local_68.f_102.f_44 = 0;
						audio::play_sound_frontend(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					}
				}
				if (controls::is_disabled_control_just_pressed(2, 203)) {
					iLocal_66 = 6;
					audio::play_sound_frontend(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					func_100();
				}
				if (controls::is_disabled_control_just_pressed(2, 202) || controls::is_control_just_released(2, 238)) {
					iLocal_66 = 7;
					Local_68.f_102.f_45 = gameplay::get_game_timer();
					audio::play_sound_frontend(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					func_100();
				}
				break;

			case 4:
				func_105(1, iLocal_568, 1, 0, 1, -1082130432, 0, 0);
				switch (Local_68.f_102.f_23) {
				case 0:
					iVar0 = func_155(Local_68.f_102.f_23);
					if (iVar1 + 10 > iVar2) {
						entity::set_entity_health(player::player_ped_id(), iVar2);
					}
					else {
						entity::set_entity_health(player::player_ped_id(), iVar1 + 10);
					}
					break;

				case 1:
					iVar0 = func_155(Local_68.f_102.f_23);
					if (iVar1 + 20 > iVar2) {
						entity::set_entity_health(player::player_ped_id(), iVar2);
					}
					else {
						entity::set_entity_health(player::player_ped_id(), iVar1 + 20);
					}
					break;

				case 2:
					iVar0 = func_155(Local_68.f_102.f_23);
					if (iVar1 + 15 > iVar2) {
						entity::set_entity_health(player::player_ped_id(), iVar2);
					}
					else {
						entity::set_entity_health(player::player_ped_id(), iVar1 + 15);
					}
					break;
				}
				func_68(func_95(), 97, iVar0);
				if (!Local_68.f_102.f_39) {
					iLocal_53 = 34;
					Local_68.f_102.f_39 = 1;
				}
				func_12(&Local_68.f_102.f_53);
				iLocal_66 = 3;
				break;

			case 5:
				if (!ped::is_ped_injured(player::player_ped_id())) {
					if (!iLocal_574) {
					}
					iLocal_66 = 6;
				}
				break;

			case 6:
				switch (Local_68.f_102.f_23) {
				case 0:
					if (iVar1 + 10 > iVar2) {
						entity::set_entity_health(player::player_ped_id(), iVar2);
					}
					else {
						entity::set_entity_health(player::player_ped_id(), iVar1 + 10);
					}
					break;

				case 1:
					if (iVar1 + 20 > iVar2) {
						entity::set_entity_health(player::player_ped_id(), iVar2);
					}
					else {
						entity::set_entity_health(player::player_ped_id(), iVar1 + 20);
					}
					break;

				case 2:
					if (iVar1 + 15 > iVar2) {
						entity::set_entity_health(player::player_ped_id(), iVar2);
					}
					else {
						entity::set_entity_health(player::player_ped_id(), iVar1 + 15);
					}
					break;
				}
				player::set_player_control(player::get_player_index(), 1, 0);
				func_168(23, 0);
				iLocal_53 = 35;
				if (!ped::is_ped_injured(Local_68.f_2) && func_1(Local_68.f_470, 4)) {
					ai::task_play_anim(Local_68.f_2, "misscommon@response", "give_me_a_break", 8f, -8f, -1, 0, 0, 0, 0,
									   0);
				}
				if (player::get_player_wanted_level(player::player_id()) < 1) {
					func_15(1, 0);
				}
				iLocal_66 = 8;
				break;

			case 7:
				if (gameplay::get_game_timer() - Local_68.f_102.f_45 > 1000) {
					iLocal_66 = 0;
				}
				else {
					controls::set_input_exclusive(2, 193);
					controls::set_input_exclusive(2, 202);
					controls::set_input_exclusive(2, 188);
					controls::set_input_exclusive(2, 187);
					controls::set_input_exclusive(2, 189);
					controls::set_input_exclusive(2, 190);
				}
				break;

			case 8: break;
			}
		}
	else {
		if (iLocal_66 != 8 && func_1(Local_68.f_470, 4)) {
			if (iLocal_66 == 3 || iLocal_66 == 2 || iLocal_66 == 4) {
				func_100();
			}
			iLocal_66 = 8;
		}
		if (func_27("SHR_SNACKS")) {
			ui::clear_help(1);
			func_172(&Local_68.f_469);
		}
		if (func_27("SHR_MENU")) {
			ui::clear_help(1);
			func_172(&Local_68.f_469);
		}
		if (gameplay::is_bit_set(Local_68.f_162.f_18, 1) && iLocal_624 < 2) {
			gameplay::clear_bit(&Local_68.f_162.f_18, 1);
		}
		if (func_1(Local_68.f_470, 4)) {
			func_67();
		}
	}
}

// Position - 0x3EC6
void func_67() {
	if (func_1(Local_68.f_470, 2048)) {
		if (!player::is_player_control_on(player::player_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				ai::clear_ped_tasks(player::player_ped_id());
			}
			player::set_player_control(player::player_id(), 1, 0);
			func_289(&Local_68.f_470, 2048);
		}
	}
	Local_68.f_102.f_37 = 0;
	gameplay::clear_bit(&Local_68.f_162.f_18, 1);
	if (cam::does_cam_exist(iLocal_641)) {
		cam::destroy_cam(iLocal_641, 0);
	}
}

// Position - 0x3F37
int func_68(int iParam0, int iParam1, int iParam2) {
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 3) {
		return 0;
	}
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 4) {
		return 0;
	}
	return func_69(Global_101700.f_27009[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

// Position - 0x3F80
int func_69(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_94();
	if (iParam3 < 1) {
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 0:
			func_93(99, 1);
			func_92(joaat("sp0_money_total_spent"), iParam3);
			break;

		case 1: func_92(joaat("sp1_money_total_spent"), iParam3); break;

		case 2: func_92(joaat("sp2_money_total_spent"), iParam3); break;
		}
		func_77(0);
		switch (iParam2) {
		case 126:
		case 128:
		case 124:
		case 125:
		case 127:
			if (func_76(5)) {
				fVar0 = 0.9f;
				iVar1 = 5;
			}
			break;

		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
			switch (iParam0) {
			case 0: func_92(joaat("sp0_money_spent_on_tattoos"), iParam3); break;

			case 1: func_92(joaat("sp1_money_spent_on_tattoos"), iParam3); break;

			case 2: func_92(joaat("sp2_money_spent_on_tattoos"), iParam3); break;
			}
			if (func_76(1)) {
				fVar0 = 0f;
				iVar1 = 1;
			}
			break;

		case 21:
			switch (iParam0) {
			case 0: func_92(joaat("sp0_money_spent_on_taxis"), iParam3); break;

			case 1: func_92(joaat("sp1_money_spent_on_taxis"), iParam3); break;

			case 2: func_92(joaat("sp2_money_spent_on_taxis"), iParam3); break;
			}
			break;

		case 25:
			switch (iParam0) {
			case 0: func_92(joaat("sp0_money_spent_in_strip_clubs"), iParam3); break;

			case 1: func_92(joaat("sp1_money_spent_in_strip_clubs"), iParam3); break;

			case 2: func_92(joaat("sp2_money_spent_in_strip_clubs"), iParam3); break;
			}
			break;

		case 98:
		case 99:
		case 100:
		case 101:
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
			switch (iParam0) {
			case 0: func_92(joaat("sp0_money_spent_property"), iParam3); break;

			case 1: func_92(joaat("sp1_money_spent_property"), iParam3); break;

			case 2: func_92(joaat("sp2_money_spent_property"), iParam3); break;
			}
			break;

		default:
			switch (script::get_hash_of_this_script_name()) {
			case joaat("clothes_shop_sp"):
				switch (iParam0) {
				case 0: func_92(joaat("sp0_money_spent_in_clothes"), iParam3); break;

				case 1: func_92(joaat("sp1_money_spent_in_clothes"), iParam3); break;

				case 2: func_92(joaat("sp2_money_spent_in_clothes"), iParam3); break;
				}
				break;

			case joaat("hairdo_shop_sp"):
				switch (iParam0) {
				case 0: func_92(joaat("sp0_money_spent_on_hairdos"), iParam3); break;

				case 1: func_92(joaat("sp1_money_spent_on_hairdos"), iParam3); break;

				case 2: func_92(joaat("sp2_money_spent_on_hairdos"), iParam3); break;
				}
				if (func_76(0)) {
					fVar0 = 0f;
					iVar1 = 0;
				}
				break;

			case joaat("gunclub_shop"):
				switch (iParam0) {
				case 0: func_92(joaat("sp0_money_spent_in_buying_guns"), iParam3); break;

				case 1: func_92(joaat("sp1_money_spent_in_buying_guns"), iParam3); break;

				case 2: func_92(joaat("sp2_money_spent_in_buying_guns"), iParam3); break;
				}
				break;

			case joaat("carmod_shop"):
				switch (iParam0) {
				case 0: func_92(joaat("sp0_money_spent_car_mods"), iParam3); break;

				case 1: func_92(joaat("sp1_money_spent_car_mods"), iParam3); break;

				case 2: func_92(joaat("sp2_money_spent_car_mods"), iParam3); break;
				}
				func_75(iParam3);
				break;
			}
			break;
		}
		break;

	case 1:
		switch (iParam0) {
		case 0: func_93(95, iParam3); break;

		case 1: func_93(97, iParam3); break;

		case 2: func_93(96, iParam3); break;
		}
		func_93(98, iParam3);
		break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor(fVar0 * system::to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f) {
		func_72(iVar1);
		return 1;
	}
	else if (fVar0 != 1f) {
		func_72(iVar1);
	}
	iVar5 = Global_52996[iVar2] + iParam3;
	switch (iParam1) {
	case 1:
		if (Global_52996[iVar2] >= 0 && iParam3 > 0) {
			if (iVar5 <= 0) {
				Global_52996[iVar2] = 2147483647;
			}
			else {
				Global_52996[iVar2] += iParam3;
			}
		}
		switch (iParam0) {
		case 0: func_92(joaat("sp0_total_cash_earned"), iParam3); break;

		case 1: func_92(joaat("sp1_total_cash_earned"), iParam3); break;

		case 2: func_92(joaat("sp2_total_cash_earned"), iParam3); break;
		}
		break;

	case 0:
		if (!iParam4) {
			if (Global_52996[iVar2] - iParam3 < 0) {
				return 0;
			}
		}
		iVar3 = Global_52996[iVar2];
		Global_52996[iVar2] -= iParam3;
		if (iParam4) {
			iVar4 = iVar3;
		}
		break;
	}
	if (iParam2 == 1) {
		if (iVar4 > 20) {
		}
	}
	else {
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 =
			iParam2;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 =
			iParam3;
		Global_101700.f_19523.f_233[iVar2 /*69*/]++;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_1++;
		if (Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 > 10) {
			Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_71(iParam0);
	if (Global_35781 == 15) {
		func_70(0);
	}
	return 1;
}

// Position - 0x4584
void func_70(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3) {
		iVar1 = 0;
		while (iVar1 < 11) {
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 =
				Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 =
				Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 =
				Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10) {
		Global_53004[iVar0 /*3*/][0] = Global_101700.f_19523[iVar0];
		Global_53004.f_31[iVar0 /*3*/][0] = Global_101700.f_19523.f_11[iVar0];
		Global_53004.f_62[iVar0 /*3*/][0] = Global_101700.f_19523.f_22[iVar0];
		Global_53004.f_93[iVar0 /*3*/][0] = Global_101700.f_19523.f_33[iVar0];
		Global_53004.f_124[iVar0 /*3*/][0] = Global_101700.f_19523.f_44[iVar0];
		Global_53004.f_155[iVar0 /*3*/][0] = Global_101700.f_19523.f_55[iVar0];
		Global_53004.f_186[iVar0 /*3*/][0] = Global_101700.f_19523.f_66[iVar0];
		Global_53004.f_217[iVar0 /*3*/][0] = Global_101700.f_19523.f_77[iVar0];
		Global_53004.f_248[iVar0 /*3*/][0] = Global_101700.f_19523.f_88[iVar0];
		if (!iParam0) {
			Global_53004[iVar0 /*3*/][1] = Global_101700.f_19523[iVar0];
			Global_53004.f_31[iVar0 /*3*/][1] = Global_101700.f_19523.f_11[iVar0];
			Global_53004.f_62[iVar0 /*3*/][1] = Global_101700.f_19523.f_22[iVar0];
			Global_53004.f_93[iVar0 /*3*/][1] = Global_101700.f_19523.f_33[iVar0];
			Global_53004.f_124[iVar0 /*3*/][1] = Global_101700.f_19523.f_44[iVar0];
			Global_53004.f_155[iVar0 /*3*/][1] = Global_101700.f_19523.f_55[iVar0];
			Global_53004.f_186[iVar0 /*3*/][1] = Global_101700.f_19523.f_66[iVar0];
			Global_53004.f_217[iVar0 /*3*/][1] = Global_101700.f_19523.f_77[iVar0];
			Global_53004.f_248[iVar0 /*3*/][1] = Global_101700.f_19523.f_88[iVar0];
		}
		iVar0++;
	}
}

// Position - 0x4806
void func_71(int iParam0) {
	int iVar0;

	iVar0 = Global_52996[iParam0];
	switch (iParam0) {
	case 0: stats::stat_set_int(joaat("sp0_total_cash"), iVar0, 1); break;

	case 1: stats::stat_set_int(joaat("sp1_total_cash"), iVar0, 1); break;

	case 2: stats::stat_set_int(joaat("sp2_total_cash"), iVar0, 1); break;
	}
}

// Position - 0x4860
void func_72(int iParam0) {
	bool bVar0;
	char cVar1[64];

	bVar0 = false;
	if (!network::network_is_game_in_progress()) {
		if (gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0)) {
			bVar0 = true;
			gameplay::clear_bit(&Global_101700.f_19523.f_471, iParam0);
		}
	}
	else if (gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0) ||
			 gameplay::is_bit_set(Global_2097152[func_74() /*10758*/].f_7546.f_10, iParam0)) {
		bVar0 = true;
		gameplay::clear_bit(&Global_101700.f_19523.f_471, iParam0);
		gameplay::clear_bit(&Global_2097152[func_74() /*10758*/].f_7546.f_10, iParam0);
	}
	if (bVar0) {
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		ui::_set_notification_text_entry("COUP_RED");
		ui::add_text_component_substring_text_label(func_73(iParam0));
		ui::_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

// Position - 0x4922
char *func_73(int iParam0) {
	switch (iParam0) {
	case 0: return "COUP_HAIRC";

	case 1: return "COUP_TATTOO";

	case 2: return "COUP_WARSTOCK";

	case 3: return "COUP_MOSPORT";

	case 4: return "COUP_ELITAS";

	case 5: return "COUP_MEDSPENS";

	case 6: return "COUP_SPRUNK";

	case 7: return "COUP_RESPRAY";

	default:
	}
	return "";
}

// Position - 0x499C
int func_74() {
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

// Position - 0x49A9
void func_75(int iParam0) {
	func_93(93, iParam0);
	func_93(29, iParam0);
	func_93(30, iParam0);
}

// Position - 0x49C9
bool func_76(int iParam0) {
	if (!network::network_is_game_in_progress()) {
		return gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0);
	}
	return gameplay::is_bit_set(Global_2097152[func_74() /*10758*/].f_7546.f_10, iParam0);
}

// Position - 0x4A05
int func_77(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (player::has_achievement_been_passed(27)) {
		return 0;
	}
	if (stats::stat_get_int(joaat("sp0_money_total_spent"), &iVar0, -1)) {
		iVar1 += iVar0;
	}
	if (stats::stat_get_int(joaat("sp1_money_total_spent"), &iVar0, -1)) {
		iVar1 += iVar0;
	}
	if (stats::stat_get_int(joaat("sp2_money_total_spent"), &iVar0, -1)) {
		iVar1 += iVar0;
	}
	if (iParam0) {
	}
	iVar2 = 0;
	stats::stat_get_int(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && iVar2 / 2000000 != iVar1 / 2000000) {
		stats::stat_set_int(joaat("num_cash_spent"), iVar1, 1);
		func_91(27, iVar1);
	}
	if (iVar1 < 200000000) {
		return 0;
	}
	func_78(27, 1);
	return 1;
}

// Position - 0x4ABC
int func_78(int iParam0, int iParam1) {
	if (iParam0 >= 70) {
		return 0;
	}
	return func_79(iParam0, iParam1);
}

// Position - 0x4AD7
int func_79(int iParam0, int iParam1) {
	if (func_305(14) && !func_90(iParam0)) {
		return 0;
	}
	if (player::has_achievement_been_passed(iParam0) && iParam1 == 1) {
		return 0;
	}
	if (Global_25436 != 0 && !Global_69702) {
		return 0;
	}
	if (func_89(&Global_2595550)) {
		if (func_87(&Global_2595550, iParam0)) {
			return 0;
		}
		if (func_80(&Global_2595550, iParam0)) {
			return 1;
		}
	}
	else {
		if (!player::give_achievement_to_player(iParam0)) {
			return 0;
		}
		if (player::has_achievement_been_passed(iParam0)) {
			return 1;
		}
		return 0;
	}
	return 0;
}

// Position - 0x4B74
bool func_80(var *uParam0, int iParam1) {
	int iVar0;
	var *uVar1[70];

	if (player::has_achievement_been_passed(iParam1)) {
		return false;
	}
	if (func_305(14) && !func_90(iParam1)) {
		return false;
	}
	if (func_87(uParam0, iParam1)) {
		return false;
	}
	if (func_86(uParam0) < 0f) {
		func_85(uParam0, 0);
	}
	func_83(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1) {
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_81(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

// Position - 0x4C25
int func_81(var *uParam0, int iParam1) {
	int iVar0;

	if (player::has_achievement_been_passed(iParam1)) {
		return 0;
	}
	if (func_305(14) && !func_90(iParam1)) {
		return 0;
	}
	if (func_87(uParam0, iParam1)) {
		return 0;
	}
	if (func_86(uParam0) < 0f) {
		func_85(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if (func_82(uParam0, iVar0)) {
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x4CA0
bool func_82(var *uParam0, int iParam1) { return (*uParam0)[iParam1] == 70; }

// Position - 0x4CB1
void func_83(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		func_84(uParam0, iVar0);
		iVar0++;
	}
	func_85(uParam0, Global_2595549 - 0.5f);
}

// Position - 0x4CE5
void func_84(var *uParam0, int iParam1) { (*uParam0)[iParam1] = 70; }

// Position - 0x4CF5
void func_85(var *uParam0, float fParam1) {
	if (fParam1 == 0f) {
		uParam0->f_72 = 0f;
	}
	else {
		uParam0->f_72 = fParam1;
	}
}

// Position - 0x4D12
float func_86(var *uParam0) { return uParam0->f_72; }

// Position - 0x4D1E
bool func_87(var *uParam0, int iParam1) { return func_88(uParam0, iParam1) != -1; }

// Position - 0x4D30
int func_88(var *uParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if ((*uParam0)[iVar0] == iParam1) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x4D5D
bool func_89(var *uParam0) { return uParam0->f_71 == 1; }

// Position - 0x4D6B
int func_90(int iParam0) {
	switch (iParam0) {
	case 60:
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
	case 66:
	case 67:
	case 68:
	case 69: return 1;

	default:
	}
	return 0;
}

// Position - 0x4DBB
int func_91(int iParam0, int iParam1) {
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

// Position - 0x4E0C
void func_92(int iParam0, int iParam1) {
	int iVar0;

	stats::stat_get_int(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	stats::stat_set_int(iParam0, iVar0, 1);
}

// Position - 0x4E2F
void func_93(int iParam0, int iParam1) {
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

// Position - 0x4E8C
void func_94() {
	int iVar0;

	if (network::network_is_signed_in()) {
		stats::stat_get_int(joaat("sp0_total_cash"), &iVar0, -1);
		if (Global_52996[0] != iVar0) {
			Global_52996[0] = iVar0;
		}
		stats::stat_get_int(joaat("sp1_total_cash"), &iVar0, -1);
		if (Global_52996[1] != iVar0) {
			Global_52996[1] = iVar0;
		}
		stats::stat_get_int(joaat("sp2_total_cash"), &iVar0, -1);
		if (Global_52996[2] != iVar0) {
			Global_52996[2] = iVar0;
		}
	}
}

// Position - 0x4F01
int func_95() {
	func_96();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x4F1A
void func_96() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_99(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_98(player::player_ped_id());
			if (func_97(iVar0) && (!func_305(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_97(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x5017
bool func_97(int iParam0) { return iParam0 < 3; }

// Position - 0x5023
int func_98(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_99(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x5060
int func_99(int iParam0) {
	if (func_97(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x508A
void func_100() {
	if (!ped::is_ped_injured(player::player_ped_id())) {
		ai::clear_ped_tasks(player::player_ped_id());
	}
	func_289(&Local_68.f_470, 2048);
	player::set_player_control(player::player_id(), 1, 0);
	cam::set_gameplay_cam_relative_heading(0f);
	cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
	func_168(23, 0);
	Local_68.f_102.f_37 = 0;
	gameplay::clear_bit(&Local_68.f_162.f_18, 1);
	if (cam::does_cam_exist(iLocal_641)) {
		cam::destroy_cam(iLocal_641, 0);
	}
	cam::render_script_cams(0, 0, 3000, 1, 0, 0);
}

// Position - 0x5102
void func_101() {
	char *sVar0;

	controls::set_input_exclusive(2, 193);
	controls::set_input_exclusive(2, 202);
	controls::set_input_exclusive(2, 188);
	controls::set_input_exclusive(2, 187);
	controls::set_input_exclusive(2, 189);
	controls::set_input_exclusive(2, 190);
	if (func_104()) {
		Local_68.f_102.f_37 = 0;
		func_39(&Local_68.f_102.f_53);
		Local_68.f_102.f_23--;
		if (Local_68.f_102.f_23 < 0) {
			Local_68.f_102.f_23 = Local_68.f_102.f_24 - 1;
		}
		audio::play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_150(Local_68.f_102.f_23, 1, 1);
		sVar0 = func_142(Local_68.f_102.f_23);
		Local_68.f_102.f_41 = 0;
		Local_68.f_102.f_42 = 0;
		if (ui::does_text_label_exist(sVar0)) {
			func_149(sVar0, 0, 0);
		}
	}
	if (func_103()) {
		Local_68.f_102.f_37 = 0;
		func_39(&Local_68.f_102.f_53);
		Local_68.f_102.f_23++;
		if (Local_68.f_102.f_23 > Local_68.f_102.f_24 - 1) {
			Local_68.f_102.f_23 = 0;
		}
		audio::play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_150(Local_68.f_102.f_23, 1, 1);
		sVar0 = func_142(Local_68.f_102.f_23);
		Local_68.f_102.f_41 = 0;
		Local_68.f_102.f_42 = 0;
		if (ui::does_text_label_exist(sVar0)) {
			func_149(sVar0, 0, 0);
		}
	}
	if (!Local_68.f_102.f_41) {
		Local_68.f_102.f_40 = func_102(func_98(player::player_ped_id())) >= func_155(Local_68.f_102.f_23);
		Local_68.f_102.f_41 = 1;
	}
	if (!Local_68.f_102.f_42) {
		Local_68.f_102.f_43 =
			entity::get_entity_health(player::player_ped_id()) < entity::get_entity_max_health(player::player_ped_id());
		Local_68.f_102.f_42 = 1;
	}
	if (Local_68.f_102.f_37) {
		if (func_40(&Local_68.f_102.f_53) < 3f) {
			if (Local_68.f_102.f_44) {
				func_149("SNK_BOUGHT", 0, 0);
			}
			else if (!Local_68.f_102.f_40) {
				func_149("SNK_AFFORD", 0, 0);
			}
			else if (!Local_68.f_102.f_43) {
				func_149("SNK_NEEDED", 0, 0);
			}
		}
		else {
			Local_68.f_102.f_37 = 0;
			Local_68.f_102.f_44 = 0;
			func_39(&Local_68.f_102.f_53);
			sVar0 = func_142(Local_68.f_102.f_23);
			if (ui::does_text_label_exist(sVar0)) {
				func_149(sVar0, 0, 0);
			}
		}
	}
}

// Position - 0x5321
int func_102(int iParam0) {
	var uVar0;

	switch (iParam0) {
	case 0: stats::stat_get_int(joaat("sp0_total_cash"), &uVar0, -1); return uVar0;

	case 1: stats::stat_get_int(joaat("sp1_total_cash"), &uVar0, -1); return uVar0;

	case 2: stats::stat_get_int(joaat("sp2_total_cash"), &uVar0, -1); return uVar0;

	default:
	}
	return 0;
}

// Position - 0x5379
bool func_103() {
	float fVar0;

	fVar0 = controls::get_control_normal(2, 219);
	if (fVar0 > 0.8f || controls::is_control_pressed(2, 187) || controls::is_control_just_pressed(2, 242)) {
		if (!func_14(&iLocal_638)) {
			func_11(&iLocal_638);
			return true;
		}
		else if (func_8(&iLocal_638) > 0.25f) {
			func_12(&iLocal_638);
			return true;
		}
	}
	else if (func_14(&iLocal_638)) {
		func_39(&iLocal_638);
	}
	return false;
}

// Position - 0x53F8
bool func_104() {
	float fVar0;

	fVar0 = controls::get_control_normal(2, 219);
	if (fVar0 < -0.8f || controls::is_control_pressed(2, 188) || controls::is_control_just_pressed(2, 241)) {
		if (!func_14(&iLocal_635)) {
			func_11(&iLocal_635);
			return true;
		}
		else if (func_8(&iLocal_635) > 0.25f) {
			func_12(&iLocal_635);
			return true;
		}
	}
	else if (func_14(&iLocal_635)) {
		func_39(&iLocal_635);
	}
	return false;
}

// Position - 0x5477
void func_105(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6,
			  int iParam7) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;
	bool bVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float *fVar36;
	vector3 vVar37;
	bool bVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	int *iVar46;
	int *iVar47;
	int *iVar48;
	float fVar49;
	int iVar50;
	int iVar51;
	bool bVar52;
	int iVar53;
	int iVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	int iVar59;
	int iVar60;
	float fVar61;
	float fVar62;
	float fVar63;
	char cVar64[64];
	char cVar80[64];
	float fVar96;
	int iVar97;
	float fVar98;
	float fVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;

	if (!func_58(&iVar0, 0, iParam1)) {
		return;
	}
	if (iVar0 == -1) {
	}
	if (!func_139(0, iParam6)) {
		return;
	}
	graphics::_set_screen_draw_position(76, 84);
	graphics::_screen_draw_position_ratio(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_17290) {
		if (func_137(29, 1, 1, &fVar35, &fVar36, iParam7)) {
			fVar56 = fVar36;
			fVar57 = fVar35;
			fVar56 += 0f;
		}
		else {
			Global_17290 = 0;
		}
	}
	if (gameplay::get_hash_key(&Global_17290.f_1) == gameplay::get_hash_key("HIDE")) {
		fVar58 = Global_17288;
	}
	else {
		fVar58 = Global_17288 + fVar56 + 0.034722f + 0f;
	}
	if (fParam5 == -1f) {
		fParam5 = Global_17289;
	}
	fVar61 = 1f;
	if (iParam7) {
		graphics::_get_active_screen_resolution(&iVar59, &iVar60);
		fVar62 = graphics::_get_aspect_ratio(0);
		if (func_136()) {
			iVar59 = system::round(system::to_float(iVar60) * fVar62);
		}
		fVar63 = system::to_float(iVar59) / system::to_float(iVar60);
		fVar61 = fVar63 / fVar62;
		if (func_136()) {
			fVar61 = 1f;
		}
		iVar59 = system::round(system::to_float(iVar59) / fVar61);
		iVar60 = system::round(system::to_float(iVar60) / fVar61);
	}
	else {
		graphics::get_screen_resolution(&iVar59, &iVar60);
	}
	iVar5 = 0;
	while (iVar5 < 2) {
		if (iVar5 == 1 && Global_17290.f_5598) {
			if (gameplay::get_hash_key(&Global_17290.f_1) == gameplay::get_hash_key("HIDE")) {
				fVar49 = Global_17288;
			}
			else {
				if (Global_17290) {
					StringCopy(&cVar64, func_135(29), 64);
					StringCopy(&cVar80, func_132(29, 1), 64);
					if (gameplay::get_hash_key(&Global_17290.f_6703[29 /*16*/]) == -1487683087) {
						func_131(Global_17287, Global_17288, fParam5, fVar56 - 0f, 0, 0, 0, 255);
						graphics::draw_sprite(&cVar64, &cVar80, Global_17287 + fParam5 * 0.5f,
											  Global_17288 + (fVar56 - 0f) * 0.5f, fVar57, fVar56 - 0f, 0f, 255, 255,
											  255, 255, 0);
					}
					else {
						graphics::draw_sprite(&cVar64, &cVar80, Global_17287 + fParam5 * 0.5f,
											  Global_17288 + (fVar56 - 0f) * 0.5f, fParam5, fVar56 - 0f, 0f, 255, 255,
											  255, 255, 0);
					}
				}
				if (Global_17290.f_7869) {
					iVar1 = Global_17290.f_7865;
					iVar2 = Global_17290.f_7866;
					iVar3 = Global_17290.f_7867;
					iVar4 = Global_17290.f_7868;
				}
				else {
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_131(Global_17287, Global_17288 + fVar56, fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = Global_17288 + fVar56 + 0.034722f + 0f;
				if (gameplay::get_hash_key(&Global_17290.f_1) != 0) {
					func_130();
					ui::begin_text_command_display_text(&Global_17290.f_1);
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17290.f_68) {
						if (Global_17290.f_5[iVar14] == 2) {
							ui::add_text_component_integer(Global_17290.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17290.f_5[iVar14] == 3) {
							ui::add_text_component_float(Global_17290.f_14[iVar16], Global_17290.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17290.f_5[iVar14] == 1) {
							ui::add_text_component_substring_text_label(&Global_17290.f_22[iVar17 /*4*/]);
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 8) {
							ui::add_text_component_substring_text_label(&Global_17290.f_22[iVar17 /*4*/]);
							iVar17++;
						}
						else if (Global_17290.f_5[iVar14] == 5) {
							ui::add_text_component_substring_player_name(&Global_17290.f_35[iVar18 /*16*/]);
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 6) {
							ui::add_text_component_substring_text_label(&Global_17290.f_35[iVar18 /*16*/]);
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 7) {
							ui::add_text_component_substring_player_name(&Global_17290.f_35[iVar18 /*16*/]);
							iVar18++;
						}
						else if (Global_17290.f_5[iVar14] == 9) {
							ui::add_text_component_substring_player_name(&Global_17290.f_35[iVar18 /*16*/]);
							iVar18++;
						}
						iVar14++;
					}
					ui::end_text_command_display_text(Global_17287 + 0.00390625f, Global_17288 + fVar56 + 0.00416664f,
													  0);
				}
				if (Global_17290.f_5601 > Global_17290.f_5095) {
					if (Global_17290.f_5604 != 0) {
						func_130();
						func_128(Global_17287 + fParam5 - 0.00390625f -
									 func_129("CM_ITEM_COUNT", Global_17290.f_5604, Global_17290.f_5603),
								 Global_17288 + fVar56 + 0.00416664f, "CM_ITEM_COUNT", Global_17290.f_5604,
								 Global_17290.f_5603);
					}
				}
			}
			iVar6 = Global_17290.f_5605;
			iVar9 = 0;
			fVar96 = fVar49;
			if (Global_17290.f_7879) {
				iVar1 = Global_17290.f_7875;
				iVar2 = Global_17290.f_7876;
				iVar3 = Global_17290.f_7877;
				iVar4 = Global_17290.f_7878;
			}
			else {
				ui::get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17290.f_5095 && iVar6 <= Global_17290.f_5088) {
				if (iVar6 >= 0) {
					if (Global_17290.f_5355[iVar6]) {
						if (Global_17290.f_5226[iVar6] && iVar6 != Global_17290.f_5605) {
							fVar49 += 0.00277776f;
						}
						fVar55 = 0.034722f;
						if (Global_17290.f_5612[iVar6] != 0f) {
							fVar55 = Global_17290.f_5612[iVar6];
						}
						fVar49 += fVar55;
						iVar9++;
					}
				}
				iVar6++;
			}
			if (iParam3) {
				if (iVar9 <= 1) {
					fVar55 = 0.034722f;
					fVar49 += fVar55;
					iVar9++;
					if (Global_17290.f_5088 <= 1) {
						Global_17290.f_5088++;
					}
					iVar53 = 1;
				}
			}
			graphics::draw_sprite("CommonMenu", "Gradient_Bgd", Global_17287 + fParam5 * 0.5f,
								  fVar96 + (fVar49 - fVar96) * 0.5f - 0.00138888f, fParam5, fVar49 - fVar96, 0f, 255,
								  255, 255, 255, 0);
			if (Global_17290.f_5601 > Global_17290.f_5095) {
				if (Global_17290.f_7884) {
					iVar1 = Global_17290.f_7880;
					iVar2 = Global_17290.f_7881;
					iVar3 = Global_17290.f_7882;
					iVar4 = Global_17290.f_7883;
				}
				else {
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_131(Global_17287, fVar49 + 0f, fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar37 = {graphics::get_texture_resolution("CommonMenu", "shop_arrows_upANDdown")};
				vVar37.x *= 0.5f / fVar61;
				vVar37.y *= 0.5f / fVar61;
				if (Global_17290.f_7897) {
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else {
					ui::get_hud_colour(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				graphics::draw_sprite("CommonMenu", "shop_arrows_upANDdown", Global_17287 + fParam5 * 0.5f,
									  fVar49 + 0f + 0.034722f * 0.5f, vVar37.x / 1280f * fVar61,
									  vVar37.y / 720f * fVar61, 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 += 0f + 0.034722f;
			}
			if (gameplay::get_hash_key(&Global_17290.f_4562) != 0 && Global_17290.f_4636 != -1) {
				fVar49 += 0.00277776f * 2f;
				fVar41 = Global_17287 + 0.0046875f;
				if (Global_17290.f_4638 != 0) {
					func_137(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, iParam7);
					fVar41 = Global_17287 + fVar35 + 0.00078125f * 4f - 0.00078125f * 1f;
				}
				func_127(fVar41);
				ui::_begin_text_command_line_count(&Global_17290.f_4562);
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632) {
					if (Global_17290.f_4566[iVar14] == 2) {
						ui::add_text_component_integer(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3) {
						ui::add_text_component_float(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1) {
						ui::add_text_component_substring_text_label(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6) {
						ui::add_text_component_substring_text_label(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = ui::_end_text_command_get_line_count(fVar41, fVar49 + 0.00277776f);
				ui::get_hud_colour(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_131(Global_17287, fVar49 - 0.00277776f, fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7889) {
					iVar1 = Global_17290.f_7885;
					iVar2 = Global_17290.f_7886;
					iVar3 = Global_17290.f_7887;
					iVar4 = Global_17290.f_7888;
				}
				else {
					ui::get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				graphics::draw_sprite("CommonMenu", "Gradient_Bgd", Global_17287 + fParam5 * 0.5f,
									  fVar49 +
										  (ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) +
										   0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1)) *
											  0.5f -
										  0.00138888f,
									  fParam5,
									  ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f +
										  0.00138888f * 5f * IntToFloat(iVar6 - 1),
									  0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_127(fVar41);
				ui::begin_text_command_display_text(&Global_17290.f_4562);
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17290.f_4632) {
					if (Global_17290.f_4566[iVar14] == 2) {
						ui::add_text_component_integer(Global_17290.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17290.f_4566[iVar14] == 3) {
						ui::add_text_component_float(Global_17290.f_4575[iVar16], Global_17290.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17290.f_4566[iVar14] == 1) {
						ui::add_text_component_substring_text_label(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 5) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 6) {
						ui::add_text_component_substring_text_label(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 7) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 9) {
						ui::add_text_component_substring_player_name(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					else if (Global_17290.f_4566[iVar14] == 8) {
						ui::add_text_component_substring_text_label(&Global_17290.f_4583[iVar17 /*16*/]);
						iVar17++;
					}
					iVar14++;
				}
				ui::end_text_command_display_text(fVar41, fVar49 + 0.00277776f, 0);
				if (Global_17290.f_4638 != 0) {
					func_137(Global_17290.f_4638, 1, 1, &fVar35, &fVar36, iParam7);
					func_126(Global_17290.f_4638, 1, &iVar46, &iVar47, &iVar48);
					graphics::draw_sprite(func_135(Global_17290.f_4638), func_132(Global_17290.f_4638, 1),
										  Global_17287 + fVar35 * 0.5f + 0.00078125f * 2f,
										  fVar49 + fVar36 * 0.5f - 0.00138888f * 4f, fVar35, fVar36, 0f, iVar46, iVar47,
										  iVar48, 255, 0);
				}
				fVar49 += ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f +
						  0.00138888f * 5f * IntToFloat(iVar6 - 1);
				if (Global_17290.f_4636 > 0) {
					if (gameplay::get_game_timer() - Global_17290.f_4637 > Global_17290.f_4636) {
						StringCopy(&Global_17290.f_4562, "", 16);
						Global_17290.f_4636 = -1;
					}
				}
			}
			if (gameplay::get_hash_key(&Global_2593974.f_21) != 0 && Global_2593974.f_65 != -1) {
				fVar49 += 0.00277776f * 2f;
				fVar41 = Global_17287 + 0.0046875f;
				if (Global_2593974.f_67 != 0) {
					func_137(Global_2593974.f_67, 1, 1, &fVar35, &fVar36, iParam7);
					fVar41 = Global_17287 + fVar35 + 0.00078125f * 4f - 0.00078125f * 1f;
				}
				func_127(fVar41);
				ui::_begin_text_command_line_count(&Global_2593974.f_21);
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2593974.f_61) {
					if (Global_2593974.f_25[iVar14] == 2) {
						ui::add_text_component_integer(Global_2593974.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2593974.f_25[iVar14] == 3) {
						ui::add_text_component_float(Global_2593974.f_34[iVar16], Global_2593974.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2593974.f_25[iVar14] == 1) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 5) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 6) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 7) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 9) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 8) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = ui::_end_text_command_get_line_count(fVar41, fVar49 + 0.00277776f);
				ui::get_hud_colour(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_131(Global_17287, fVar49 - 0.00277776f, fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17290.f_7889) {
					iVar1 = Global_17290.f_7885;
					iVar2 = Global_17290.f_7886;
					iVar3 = Global_17290.f_7887;
					iVar4 = Global_17290.f_7888;
				}
				else {
					ui::get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				graphics::draw_sprite("CommonMenu", "Gradient_Bgd", Global_17287 + fParam5 * 0.5f,
									  fVar49 +
										  (ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) +
										   0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1)) *
											  0.5f -
										  0.00138888f,
									  fParam5,
									  ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f +
										  0.00138888f * 5f * IntToFloat(iVar6 - 1),
									  0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_127(fVar41);
				ui::begin_text_command_display_text(&Global_2593974.f_21);
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2593974.f_61) {
					if (Global_2593974.f_25[iVar14] == 2) {
						ui::add_text_component_integer(Global_2593974.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2593974.f_25[iVar14] == 3) {
						ui::add_text_component_float(Global_2593974.f_34[iVar16], Global_2593974.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2593974.f_25[iVar14] == 1) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 8) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 5) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 6) {
						ui::add_text_component_substring_text_label(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 7) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					else if (Global_2593974.f_25[iVar14] == 9) {
						ui::add_text_component_substring_player_name(&Global_2593974.f_42[iVar17 /*6*/]);
						iVar17++;
					}
					iVar14++;
				}
				ui::end_text_command_display_text(fVar41, fVar49 + 0.00277776f, 0);
				if (Global_2593974.f_67 != 0) {
					func_137(Global_2593974.f_67, 1, 1, &fVar35, &fVar36, iParam7);
					func_126(Global_2593974.f_67, 1, &iVar46, &iVar47, &iVar48);
					graphics::draw_sprite(func_135(Global_2593974.f_67), func_132(Global_2593974.f_67, 1),
										  Global_17287 + fVar35 * 0.5f + 0.00078125f * 2f,
										  fVar49 + fVar36 * 0.5f - 0.00138888f * 4f, fVar35, fVar36, 0f, iVar46, iVar47,
										  iVar48, 255, 0);
				}
				fVar49 += ui::_get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f +
						  0.00138888f * 5f * IntToFloat(iVar6 - 1);
				if (Global_2593974.f_65 > 0) {
					if (gameplay::get_game_timer() - Global_2593974.f_66 > Global_2593974.f_65) {
						StringCopy(&Global_2593974.f_21, "", 16);
						Global_2593974.f_65 = -1;
					}
				}
			}
			func_118(iVar59, iParam1, 0, 0, 0, 0, iParam4, 1, 0);
			graphics::_set_screen_draw_position(76, 84);
			graphics::_screen_draw_position_ratio(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17290.f_5598) {
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar97 = Global_17290.f_5088;
			if (Global_17290.f_5599) {
				iVar97 = Global_17290.f_5602 - 1;
			}
			fVar98 = 0f;
			fVar99 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar97) {
				fVar55 = 0.034722f;
				if (Global_17290.f_5612[iVar6] != 0f) {
					fVar55 = Global_17290.f_5612[iVar6];
				}
				if (Global_17290.f_5599) {
					iVar6 = Global_17290.f_7520[iVar7];
				}
				else {
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar32 = false;
				if (iVar6 >= Global_17290.f_5605 && iVar9 < Global_17290.f_5095) {
					bVar32 = true;
					if (Global_17290.f_5606 == iVar6) {
						fVar99 = fVar98;
					}
					if (Global_17290.f_5226[iVar6]) {
						iVar12++;
					}
					fVar34 = fVar58 + fVar98 + 0.00277776f * IntToFloat(iVar12) + 0.00277776f;
				}
				Global_17290.f_5746[iVar6] = fVar34;
				fVar33 = Global_17287 + 0.0046875f;
				bVar40 = false;
				bVar31 = Global_17290.f_5606 == iVar6;
				if (bVar31 && iVar5 == 1 && bVar32) {
					iVar100 = 255;
					iVar101 = 255;
					iVar102 = 255;
					iVar103 = 255;
					if (Global_17290.f_7891) {
						ui::get_hud_colour(Global_17290.f_7890, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					else {
						ui::get_hud_colour(1, &iVar100, &iVar101, &iVar102, &iVar103);
					}
					graphics::draw_sprite("CommonMenu", "Gradient_Nav", Global_17287 + fParam5 * 0.5f,
										  fVar58 + fVar99 + 0.00277776f * IntToFloat(iVar12) + fVar55 * 0.5f, fParam5,
										  fVar55, 0f, iVar100, iVar101, iVar102, iVar103, 0);
					Global_17290.f_5744 = fVar34;
				}
				if (iVar53 && iVar7 == iVar97) {
					func_116(bVar31, 1, 0, 0, 0, 0, 0);
					ui::begin_text_command_display_text("DFLT_MNU_OPT");
					ui::end_text_command_display_text(fVar33, fVar34, 0);
					bVar40 = true;
				}
				else {
					iVar8 = 0;
					while (iVar8 < Global_17290.f_5096) {
						if (gameplay::is_bit_set(Global_17290.f_4959[iVar6], iVar8) ||
							Global_17290.f_4926[iVar8] == 5) {
							if (Global_17290.f_5599) {
								iVar19 = Global_17290.f_7536[iVar9 * Global_17290.f_5096 + iVar8];
								iVar20 = Global_17290.f_7577[iVar9 * Global_17290.f_5096 + iVar8];
								iVar21 = Global_17290.f_7618[iVar9 * Global_17290.f_5096 + iVar8];
								iVar22 = Global_17290.f_7659[iVar9 * Global_17290.f_5096 + iVar8];
								iVar23 = Global_17290.f_7700[iVar9 * Global_17290.f_5096 + iVar8];
							}
							else {
								Global_17290.f_7536[iVar9 * Global_17290.f_5096 + iVar8] = iVar19;
								Global_17290.f_7577[iVar9 * Global_17290.f_5096 + iVar8] = iVar20;
								Global_17290.f_7618[iVar9 * Global_17290.f_5096 + iVar8] = iVar21;
								Global_17290.f_7659[iVar9 * Global_17290.f_5096 + iVar8] = iVar22;
								Global_17290.f_7700[iVar9 * Global_17290.f_5096 + iVar8] = iVar23;
							}
							iVar104 = 0;
							iVar54 = 0;
							if (Global_17290.f_5878[0] != -1) {
								if (iVar6 * 5 + iVar8 == Global_17290.f_5875[0]) {
									iVar54 = 1;
									iVar104 = 0;
								}
							}
							if (Global_17290.f_5878[1] != -1) {
								if (iVar6 * 5 + iVar8 == Global_17290.f_5875[1]) {
									iVar54 = 1;
									iVar104 = 1;
								}
							}
							if (Global_17290.f_4932[iVar8] != -1f) {
								fVar33 = Global_17287 + 0.0046875f + Global_17290.f_4932[iVar8];
							}
							if (iVar8 < 4 && Global_17290.f_4932[iVar8 + 1] != -1f &&
								fVar33 < Global_17290.f_4932[iVar8 + 1]) {
								fVar45 = Global_17290.f_4932[iVar8 + 1] - fVar33;
							}
							else {
								fVar45 = Global_17287 + Global_17289 - 0.0046875f - fVar33;
							}
							if (Global_17290.f_4945[iVar8] && Global_17290.f_5741 && bVar31) {
								bVar52 = true;
							}
							else {
								bVar52 = false;
							}
							switch (Global_17290.f_4926[iVar8]) {
							case 0: break;

							case 1:
								iVar24 = iVar19;
								if (iVar5 == 1 && bVar32) {
									if (!Global_17290.f_5599) {
										fVar42 = 0f;
										fVar43 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
											iVar50 = 0;
											iVar51 = 0;
											iVar14 = 0;
											while (iVar14 < 4) {
												if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 ||
													Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8) {
													iVar51 = 1;
												}
												else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9) {
													iVar50 = 1;
												}
												iVar14++;
											}
											func_116(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24],
													 iVar54, iVar104, iVar51, iVar50);
											ui::_begin_text_command_width(&Global_17290.f_73[iVar24 /*6*/]);
										}
										iVar14 = 0;
										while (iVar14 < 4) {
											if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1) {
												iVar25++;
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_text_label(
														&Global_17290.f_73[iVar24 + iVar25 /*6*/]);
												}
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8) {
												iVar25++;
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_text_label(
														&Global_17290.f_73[iVar24 + iVar25 /*6*/]);
												}
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_player_name(
														&Global_2453058[iVar23 + iVar29 /*16*/]);
												}
												iVar29++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_text_label(
														&Global_2453058[iVar23 + iVar29 /*16*/]);
												}
												iVar29++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_player_name(
														&Global_2453058[iVar23 + iVar29 /*16*/]);
												}
												iVar29++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_substring_player_name(
														&Global_2453058[iVar23 + iVar29 /*16*/]);
												}
												iVar29++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_integer(
														Global_17290.f_3918[iVar20 + iVar26]);
												}
												iVar26++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3) {
												if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
													ui::add_text_component_float(Global_17290.f_4175[iVar21 + iVar27],
																				 Global_17290.f_4304[iVar21 + iVar27]);
												}
												iVar27++;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4) {
												iVar28++;
											}
											iVar14++;
										}
										if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
											fVar42 = ui::_end_text_command_get_width(1);
										}
										if (iVar28 > 0) {
											iVar14 = 0;
											while (iVar14 < iVar28) {
												if (func_137(Global_17290.f_4433[iVar22 + iVar14], bVar31, 0, &fVar35,
															 &fVar36, iParam7)) {
													fVar43 += fVar35;
													if (iVar14 > 0) {
														fVar43 -= 0.00078125f * 4f;
													}
													if (Global_17290.f_4433[iVar22 + iVar14] == 2 ||
														Global_17290.f_4433[iVar22 + iVar14] == 48) {
														fVar43 -= 0.00078125f * 5f;
													}
												}
												iVar14++;
											}
										}
										fVar41 = 0f;
										if (Global_17290.f_4953[iVar8] == 2) {
											fVar41 += fVar45 - (fVar42 + fVar43) + 0.00078125f * 1f;
										}
										else if (Global_17290.f_4953[iVar8] == 0) {
											fVar41 += (fVar45 - fVar33) * 0.5f - (fVar42 + fVar43) * 0.5f;
										}
										Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8] = fVar41;
										Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8] = fVar42;
										Global_17290.f_7823[iVar9 * Global_17290.f_5096 + iVar8] = fVar43;
									}
									else {
										fVar41 = Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8];
										fVar42 = Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8];
										fVar43 = Global_17290.f_7823[iVar9 * Global_17290.f_5096 + iVar8];
									}
									if (bVar52) {
										if (func_137(26, 1, 0, &fVar35, &fVar36, iParam7)) {
											if (Global_17290.f_4953[iVar8] == 2) {
												fVar41 -= fVar35 * 2f;
											}
											fVar44 = fVar35 * 0.5f;
											if (func_137(26, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_126(26, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_135(26), func_132(26, 1),
																	  fVar33 + fVar41 + fVar44,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
										if (func_137(27, 1, 0, &fVar35, &fVar36, iParam7)) {
											fVar41 += fVar35;
											fVar44 = fVar35 * 0.5f;
											if (func_137(27, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_126(27, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_135(27), func_132(27, 1),
																	  fVar33 + fVar41 + fVar44 + fVar42 + fVar43,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar30 = 0;
									if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
										iVar50 = 0;
										iVar51 = 0;
										iVar14 = 0;
										while (iVar14 < 4) {
											if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5 ||
												Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8) {
												iVar51 = 1;
											}
											else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9) {
												iVar50 = 1;
											}
											iVar14++;
										}
										func_116(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24],
												 iVar54, 0, iVar51, iVar50);
										if (Global_17290.f_7895 && Global_17290.f_7896 == iVar6) {
											func_115(bVar31);
										}
										ui::begin_text_command_display_text(&Global_17290.f_73[iVar24 /*6*/]);
									}
									iVar14 = 0;
									while (iVar14 < 4) {
										if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1) {
											iVar25++;
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_text_label(
													&Global_17290.f_73[iVar24 + iVar25 /*6*/]);
											}
											iVar30 = 1;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8) {
											iVar25++;
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_text_label(
													&Global_17290.f_73[iVar24 + iVar25 /*6*/]);
											}
											iVar30 = 8;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_player_name(
													&Global_2453058[iVar23 + iVar29 /*16*/]);
											}
											iVar29++;
											iVar30 = 5;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_text_label(
													&Global_2453058[iVar23 + iVar29 /*16*/]);
											}
											iVar29++;
											iVar30 = 6;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_player_name(
													&Global_2453058[iVar23 + iVar29 /*16*/]);
											}
											iVar29++;
											iVar30 = 7;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_substring_player_name(
													&Global_2453058[iVar23 + iVar29 /*16*/]);
											}
											iVar29++;
											iVar30 = 9;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_integer(Global_17290.f_3918[iVar20 + iVar26]);
											}
											iVar26++;
											iVar30 = 2;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3) {
											if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
												ui::add_text_component_float(Global_17290.f_4175[iVar21 + iVar27],
																			 Global_17290.f_4304[iVar21 + iVar27]);
											}
											iVar27++;
											iVar30 = 3;
										}
										else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4) {
											if (Global_17290.f_4433[iVar22 + iVar28] == 2 ||
												Global_17290.f_4433[iVar22 + iVar28] == 48) {
												if (func_137(Global_17290.f_4433[iVar22 + iVar28], bVar31, 0, &fVar35,
															 &fVar36, iParam7)) {
													fVar41 += fVar35 * 0.5f;
													if (func_137(Global_17290.f_4433[iVar22 + iVar28], bVar31, 1,
																 &fVar35, &fVar36, iParam7)) {
														func_126(Global_17290.f_4433[iVar22 + iVar28], bVar31, &iVar46,
																 &iVar47, &iVar48);
														if (Global_17290.f_4953[iVar8] == 2) {
															graphics::draw_sprite(
																func_135(Global_17290.f_4433[iVar22 + iVar28]),
																func_132(Global_17290.f_4433[iVar22 + iVar28], bVar31),
																fVar33 + fVar41 - 0.00078125f * 8f + 0.00078125f * 4f,
																fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35, fVar36,
																0f, iVar46, iVar47, iVar48, 255, 0);
														}
														else {
															graphics::draw_sprite(
																func_135(Global_17290.f_4433[iVar22 + iVar28]),
																func_132(Global_17290.f_4433[iVar22 + iVar28], bVar31),
																fVar33 + fVar41 - 0.00078125f * 8f,
																fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35, fVar36,
																0f, iVar46, iVar47, iVar48, 255, 0);
														}
														fVar41 += 0.00078125f * 3f;
													}
												}
											}
											iVar28++;
											iVar30 = 4;
										}
										iVar14++;
									}
									if (gameplay::get_hash_key(&Global_17290.f_73[iVar24 /*6*/]) != 0) {
										if (iVar30 == 4 && Global_17290.f_4953[iVar8] == 2) {
											ui::end_text_command_display_text(fVar33 + fVar41 + 0.00078125f * 7f,
																			  fVar34, 0);
										}
										else {
											ui::end_text_command_display_text(fVar33 + fVar41, fVar34, 0);
										}
									}
									if (iVar28 > 0) {
										fVar41 += 6f * 0.00078125f;
										iVar14 = 0;
										while (iVar14 < iVar28) {
											if (Global_17290.f_4433[iVar22 + iVar14] != 2 &&
												Global_17290.f_4433[iVar22 + iVar14] != 48) {
												if (func_137(Global_17290.f_4433[iVar22 + iVar14], bVar31, 0, &fVar35,
															 &fVar36, iParam7)) {
													fVar41 += fVar35 * 0.5f;
													if (func_137(Global_17290.f_4433[iVar22 + iVar14], bVar31, 1,
																 &fVar35, &fVar36, iParam7)) {
														func_126(Global_17290.f_4433[iVar22 + iVar14], bVar31, &iVar46,
																 &iVar47, &iVar48);
														if (Global_17290.f_4433[iVar22 + iVar14] == 30) {
															graphics::draw_sprite(
																func_135(Global_17290.f_4433[iVar22 + iVar14]),
																func_132(Global_17290.f_4433[iVar22 + iVar14], bVar31),
																Global_17287 + fVar35 * 0.5f,
																fVar34 + 0.00277776f + fVar36 * 0.5f -
																	0.00078125f * 11f,
																fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
														}
														else if (Global_17290.f_4953[iVar8] == 2) {
															graphics::draw_sprite(
																func_135(Global_17290.f_4433[iVar22 + iVar14]),
																func_132(Global_17290.f_4433[iVar22 + iVar14], bVar31),
																fVar33 + fVar41 + fVar42 - 0.00078125f * 8f +
																	0.00078125f * 4f,
																fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35, fVar36,
																0f, iVar46, iVar47, iVar48, 255, 0);
														}
														else {
															graphics::draw_sprite(
																func_135(Global_17290.f_4433[iVar22 + iVar14]),
																func_132(Global_17290.f_4433[iVar22 + iVar14], bVar31),
																fVar33 + fVar41 + fVar42 - 0.00078125f * 12f,
																fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35, fVar36,
																0f, iVar46, iVar47, iVar48, 255, 0);
														}
													}
													fVar41 += 12f * 0.00078125f;
												}
											}
											iVar14++;
										}
									}
								}
								bVar40 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4) {
									if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 1) {
										iVar19++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 8) {
										iVar19++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 2) {
										iVar20++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 3) {
										iVar21++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 4) {
										iVar22++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 5) {
										iVar23++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 6) {
										iVar23++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 7) {
										iVar23++;
									}
									else if (Global_17290.f_2124[iVar24 /*5*/][iVar14] == 9) {
										iVar23++;
									}
									iVar14++;
								}
								break;

							case 2:
								if (iVar5 == 1 && bVar32) {
									if (!Global_17290.f_5599) {
										func_116(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24],
												 iVar54, 0, 0, 0);
										if (Global_17290.f_7895 && Global_17290.f_7896 == iVar6) {
											func_115(bVar31);
										}
										ui::_begin_text_command_width("NUMBER");
										ui::add_text_component_integer(Global_17290.f_3918[iVar20]);
										fVar42 = ui::_end_text_command_get_width(1);
										fVar41 = 0f;
										if (Global_17290.f_4953[iVar8] == 2) {
											fVar41 += fVar45 - fVar42 + 0.00078125f * 1f;
										}
										else if (Global_17290.f_4953[iVar8] == 0) {
											fVar41 += (fVar45 - fVar33) * 0.5f - fVar42 * 0.5f;
										}
										Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8] = fVar41;
										Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8] = fVar42;
									}
									else {
										fVar41 = Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8];
										fVar42 = Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8];
									}
									if (bVar52) {
										if (func_137(26, 1, 0, &fVar35, &fVar36, iParam7)) {
											if (Global_17290.f_4953[iVar8] == 2) {
												fVar41 -= fVar35 * 2f;
											}
											fVar44 = fVar35 * 0.5f;
											if (func_137(26, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_126(26, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_135(26), func_132(26, 1),
																	  fVar33 + fVar41 + fVar44,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
										if (func_137(27, 1, 0, &fVar35, &fVar36, iParam7)) {
											fVar41 += fVar35;
											fVar44 = fVar35 * 0.5f;
											if (func_137(27, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_126(27, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_135(27), func_132(27, 1),
																	  fVar33 + fVar41 + fVar44 + fVar42 + fVar43,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									func_116(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], iVar54,
											 0, 0, 0);
									func_114(fVar33 + fVar41, fVar34, "NUMBER", Global_17290.f_3918[iVar20], 0);
								}
								bVar40 = true;
								iVar20++;
								break;

							case 3:
								if (iVar5 == 1 && bVar32) {
									if (!Global_17290.f_5599) {
										func_116(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24],
												 iVar54, 0, 0, 0);
										if (Global_17290.f_7895 && Global_17290.f_7896 == iVar6) {
											func_115(bVar31);
										}
										ui::_begin_text_command_width("NUMBER");
										ui::add_text_component_float(Global_17290.f_4175[iVar21],
																	 Global_17290.f_4304[iVar21]);
										fVar42 = ui::_end_text_command_get_width(1);
										fVar41 = 0f;
										if (Global_17290.f_4953[iVar8] == 2) {
											fVar41 += fVar45 - fVar42 + 0.00078125f * 1f;
										}
										else if (Global_17290.f_4953[iVar8] == 0) {
											fVar41 += (fVar45 - fVar33) * 0.5f - fVar42 * 0.5f;
										}
										Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8] = fVar41;
										Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8] = fVar42;
									}
									else {
										fVar41 = Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8];
										fVar42 = Global_17290.f_7782[iVar9 * Global_17290.f_5096 + iVar8];
									}
									if (bVar52) {
										if (func_137(26, 1, 0, &fVar35, &fVar36, 0)) {
											if (Global_17290.f_4953[iVar8] == 2) {
												fVar41 -= fVar35 * 2f;
											}
											fVar44 = fVar35 * 0.5f;
											if (func_137(26, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_126(26, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_135(26), func_132(26, 1),
																	  fVar33 + fVar41 + fVar44,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
										if (func_137(27, 1, 0, &fVar35, &fVar36, iParam7)) {
											fVar41 += fVar35;
											fVar44 = fVar35 * 0.5f;
											if (func_137(27, 1, 1, &fVar35, &fVar36, iParam7)) {
												func_126(27, 1, &iVar46, &iVar47, &iVar48);
												graphics::draw_sprite(func_135(27), func_132(27, 1),
																	  fVar33 + fVar41 + fVar44 + fVar42 + fVar43,
																	  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																	  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									func_116(bVar31, Global_17290.f_1610[iVar24], Global_17290.f_1867[iVar24], iVar54,
											 0, 0, 0);
									func_113(fVar33 + fVar41, fVar34, "NUMBER", Global_17290.f_4175[iVar21],
											 Global_17290.f_4304[iVar21]);
								}
								bVar40 = true;
								iVar21++;
								break;

							case 4:
								if (iVar5 == 1 && bVar32) {
									if (func_137(Global_17290.f_4433[iVar22], bVar31, 0, &fVar35, &fVar36, iParam7)) {
										if (!Global_17290.f_5599) {
											fVar43 = fVar35;
											fVar41 = 0f;
											if (Global_17290.f_4953[iVar8] == 2) {
												fVar41 += fVar45 - fVar43 + 0.00078125f * 1f;
											}
											else if (Global_17290.f_4953[iVar8] == 0) {
												fVar41 += (fVar45 - fVar33) * 0.5f - fVar43 * 0.5f;
											}
											Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8] = fVar41;
											Global_17290.f_7823[iVar9 * Global_17290.f_5096 + iVar8] = fVar43;
										}
										else {
											fVar41 = Global_17290.f_7741[iVar9 * Global_17290.f_5096 + iVar8];
											fVar43 = Global_17290.f_7823[iVar9 * Global_17290.f_5096 + iVar8];
										}
										if (bVar52) {
											if (func_137(26, 1, 0, &fVar35, &fVar36, iParam7)) {
												if (Global_17290.f_4953[iVar8] == 2) {
													fVar41 -= fVar35 * 2f;
												}
												fVar44 = fVar35 * 0.5f;
												if (func_137(26, 1, 1, &fVar35, &fVar36, iParam7)) {
													func_126(26, 1, &iVar46, &iVar47, &iVar48);
													graphics::draw_sprite(func_135(26), func_132(26, 1),
																		  fVar33 + fVar41 + fVar44,
																		  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																		  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_137(27, 1, 0, &fVar35, &fVar36, iParam7)) {
												fVar41 += fVar35;
												fVar44 = fVar35 * 0.5f;
												if (func_137(27, 1, 1, &fVar35, &fVar36, iParam7)) {
													func_126(27, 1, &iVar46, &iVar47, &iVar48);
													graphics::draw_sprite(func_135(27), func_132(27, 1),
																		  fVar33 + fVar41 + fVar44 + fVar42 + fVar43,
																		  fVar34 - 0.00277776f + fVar55 * 0.5f, fVar35,
																		  fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										if (func_137(Global_17290.f_4433[iVar22], bVar31, 1, &fVar35, &fVar36,
													 iParam7)) {
											func_126(Global_17290.f_4433[iVar22], bVar31, &iVar46, &iVar47, &iVar48);
											graphics::draw_sprite(func_135(Global_17290.f_4433[iVar22]),
																  func_132(Global_17290.f_4433[iVar22], bVar31),
																  fVar33 + fVar41 + fVar35 * 0.5f,
																  fVar34 - 0.00277776f + fVar55 * 0.5f,
																  fVar35 * func_112(Global_17290.f_4433[iVar22]),
																  fVar36 * func_112(Global_17290.f_4433[iVar22]), 0f,
																  iVar46, iVar47, iVar48, 255, 0);
										}
									}
								}
								bVar40 = true;
								iVar22++;
								break;

							case 5: bVar40 = true; break;
							}
							if (Global_17290.f_4926[iVar8] == 5) {
								if (Global_17290.f_4938[iVar8] > 0.05f) {
									fVar33 += Global_17290.f_4938[iVar8];
								}
								else {
									fVar33 += 0.05f;
								}
							}
							else {
								fVar33 += Global_17290.f_4938[iVar8];
								if (Global_17290.f_4945[iVar8]) {
									if (func_137(26, 1, 1, &fVar35, &fVar36, iParam7)) {
										fVar33 -= fVar35;
									}
								}
							}
						}
						else {
							fVar33 += Global_17290.f_4938[iVar8];
						}
						iVar8++;
					}
				}
				if (bVar40) {
					if (bVar32) {
						Global_17290.f_7520[iVar9] = iVar6;
						Global_17290.f_5607 = iVar6;
						iVar9++;
						if (Global_17290.f_5226[iVar6]) {
							iVar13++;
						}
						if (Global_17290.f_5612[iVar6] != 0f) {
							fVar98 += Global_17290.f_5612[iVar6];
						}
						else {
							fVar98 += 0.034722f;
						}
					}
					if (!Global_17290.f_5598) {
						Global_17290.f_5355[iVar6] = 1;
						if (Global_17290.f_5097[iVar6]) {
							if (bVar31) {
								Global_17290.f_5604 = 0;
							}
						}
						else {
							iVar11++;
							if (bVar31) {
								Global_17290.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17290.f_5598) {
				Global_17290.f_5600 = fVar58 + fVar98 + 0.00277776f * IntToFloat(iVar12);
				Global_17290.f_5603 = iVar11;
				Global_17290.f_5601 = iVar10;
				Global_17290.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17290.f_5599) {
		Global_17290.f_5602 = iVar9;
		Global_17290.f_5599 = 1;
	}
	Global_17290.f_5743 = fVar49;
	Global_17290.f_5745 = gameplay::get_game_timer();
	ui::_0x55598D21339CB998(Global_17290.f_5743);
	if (!Global_17290.f_7864) {
		func_107();
	}
	Global_17290.f_7864 = 0;
	if (iParam2) {
		ui::hide_hud_component_this_frame(10);
	}
	ui::hide_hud_component_this_frame(6);
	ui::hide_hud_component_this_frame(7);
	ui::hide_hud_component_this_frame(9);
	ui::hide_hud_component_this_frame(8);
	if (iParam0) {
		func_106(1);
	}
	graphics::_screen_draw_position_end();
}

// Position - 0x7FDB
void func_106(int iParam0) { Global_1354542.f_995 = iParam0; }

// Position - 0x7FEC
void func_107() {
	if (Global_14443.f_1 != 1) {
		if (func_111(0)) {
			func_108(0);
		}
		gameplay::set_bit(&G_SleepModeOffOn11, 2);
	}
}

// Position - 0x8017
void func_108(int iParam0) {
	if (Global_14604) {
		func_110(0, 0);
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
	if (!func_109()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x8087
int func_109() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x80AE
void func_110(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_111(0)) {
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

// Position - 0x8122
bool func_111(int iParam0) {
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

// Position - 0x817C
float func_112(int iParam0) {
	switch (iParam0) {
	case 35:
	case 34:
	case 47:
	case 46:
	case 42:
	case 36:
	case 37:
	case 39:
	case 40:
	case 38:
	case 50:
	case 43:
	case 44:
	case 45: return 0.85f;
	}
	return 1f;
}

// Position - 0x81EB
void func_113(float fParam0, float fParam1, char *sParam2, float fParam3, int iParam4) {
	ui::begin_text_command_display_text(sParam2);
	ui::add_text_component_float(fParam3, iParam4);
	ui::end_text_command_display_text(fParam0, fParam1, 0);
}

// Position - 0x820A
void func_114(float fParam0, float fParam1, char *sParam2, int iParam3, int iParam4) {
	ui::begin_text_command_display_text(sParam2);
	ui::add_text_component_integer(iParam3);
	ui::end_text_command_display_text(fParam0, fParam1, iParam4);
}

// Position - 0x8228
void func_115(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (iParam0) {
		ui::get_hud_colour(Global_17290.f_7892[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else {
		ui::get_hud_colour(Global_17290.f_7892[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	ui::set_text_colour(iVar0, iVar1, iVar2, 255);
}

// Position - 0x826E
void func_116(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam2) {
		if (iParam3) {
			func_117(Global_17290.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if (iVar0 < 20 && iVar1 < 20 && iVar2 < 20) {
				if (iParam0 == 0) {
					ui::get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if (iVar0 > 230 && iVar1 > 230 && iVar2 > 230) {
				if (iParam0) {
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			ui::set_text_colour(iVar0, iVar1, iVar2, 255);
		}
		else if (iParam1) {
			if (iParam0) {
				ui::get_hud_colour(14, &iVar0, &iVar1, &iVar2, &iVar3);
				ui::set_text_colour(iVar0, iVar1, iVar2, 255);
			}
			else {
				ui::get_hud_colour(12, &iVar0, &iVar1, &iVar2, &iVar3);
				ui::set_text_colour(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (iParam0) {
			ui::set_text_colour(155, 155, 155, 255);
		}
		else {
			ui::set_text_colour(155, 155, 155, 255);
		}
	}
	else if (iParam1) {
		if (iParam0) {
			ui::set_text_colour(0, 0, 0, system::floor(255f * 0.8f));
		}
		else {
			ui::get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
			ui::set_text_colour(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (iParam0) {
		ui::set_text_colour(155, 155, 155, 255);
	}
	else {
		ui::set_text_colour(155, 155, 155, 255);
	}
	ui::set_text_scale(0f, 0.35f);
	ui::set_text_justification(1);
	if (iParam5) {
		ui::set_text_scale(0f, 0.425f);
		ui::set_text_font(4);
	}
	else if (iParam6) {
		ui::set_text_scale(0f, 0.425f);
		ui::set_text_font(6);
	}
	else {
		ui::set_text_font(0);
	}
	ui::set_text_wrap(0f, 1f);
	ui::set_text_centre(0);
	ui::set_text_dropshadow(0, 0, 0, 0, 0);
	ui::set_text_edge(0, 0, 0, 0, 0);
}

// Position - 0x841C
void func_117(int iParam0, int *iParam1, int *iParam2, int *iParam3) {
	switch (iParam0) {
	case 0:
		*iParam1 = 8;
		*iParam2 = 8;
		*iParam3 = 8;
		break;

	case 1:
		*iParam1 = 37;
		*iParam2 = 37;
		*iParam3 = 39;
		break;

	case 22:
		*iParam1 = 140;
		*iParam2 = 146;
		*iParam3 = 154;
		break;

	case 23:
		*iParam1 = 91;
		*iParam2 = 93;
		*iParam3 = 94;
		break;

	case 6:
		*iParam1 = 81;
		*iParam2 = 84;
		*iParam3 = 89;
		break;

	case 111:
		*iParam1 = 240;
		*iParam2 = 240;
		*iParam3 = 240;
		break;

	case 28:
		*iParam1 = 150;
		*iParam2 = 8;
		*iParam3 = 0;
		break;

	case 34:
		*iParam1 = 38;
		*iParam2 = 3;
		*iParam3 = 6;
		break;

	case 88:
		*iParam1 = 245;
		*iParam2 = 137;
		*iParam3 = 15;
		break;

	case 45:
		*iParam1 = 74;
		*iParam2 = 22;
		*iParam3 = 7;
		break;

	case 56:
		*iParam1 = 45;
		*iParam2 = 58;
		*iParam3 = 53;
		break;

	case 58:
		*iParam1 = 71;
		*iParam2 = 120;
		*iParam3 = 60;
		break;

	case 54:
		*iParam1 = 77;
		*iParam2 = 98;
		*iParam3 = 104;
		break;

	case 73:
		*iParam1 = 14;
		*iParam2 = 49;
		*iParam3 = 109;
		break;

	case 68:
		*iParam1 = 22;
		*iParam2 = 34;
		*iParam3 = 72;
		break;

	case 140:
		*iParam1 = 0;
		*iParam2 = 174;
		*iParam3 = 239;
		break;

	case 131:
		*iParam1 = 255;
		*iParam2 = 183;
		*iParam3 = 0;
		break;

	case 90:
		*iParam1 = 142;
		*iParam2 = 140;
		*iParam3 = 70;
		break;

	case 97:
		*iParam1 = 156;
		*iParam2 = 141;
		*iParam3 = 113;
		break;

	case 89:
		*iParam1 = 145;
		*iParam2 = 115;
		*iParam3 = 71;
		break;

	case 105:
		*iParam1 = 98;
		*iParam2 = 68;
		*iParam3 = 40;
		break;

	case 100:
		*iParam1 = 124;
		*iParam2 = 27;
		*iParam3 = 68;
		break;

	case 99:
		*iParam1 = 114;
		*iParam2 = 42;
		*iParam3 = 63;
		break;

	case 136:
		*iParam1 = 246;
		*iParam2 = 151;
		*iParam3 = 153;
		break;

	case 49:
		*iParam1 = 32;
		*iParam2 = 32;
		*iParam3 = 44;
		break;

	case 146:
		*iParam1 = 26;
		*iParam2 = 1;
		*iParam3 = 23;
		break;

	default:
		*iParam1 = 255;
		*iParam2 = 255;
		*iParam3 = 255;
		break;
	}
}

// Position - 0x86A6
void func_118(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7,
			  int iParam8) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_58(&iVar0, 0, iParam1)) {
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_139(iParam4, iParam8)) {
		return;
	}
	if (func_124()) {
		return;
	}
	if (network::_network_is_text_chat_active()) {
		return;
	}
	if (iParam7 == 0) {
		if (func_121(player::player_id(), 0)) {
			return;
		}
	}
	if (gameplay::is_pc_version()) {
		if (gameplay::update_onscreen_keyboard() == 0 || network::_network_is_text_chat_active()) {
			return;
		}
	}
	if (Global_17290.f_4639 != 0) {
		if (controls::_0x6CD79468A1E595C6(2)) {
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639) {
				if (Global_17290.f_4896[iVar1] != 353) {
					StringCopy(&Global_17290.f_4641[iVar1 /*16*/],
							   controls::get_control_instructional_button(2, Global_17290.f_4896[iVar1], 1), 64);
				}
				else if (Global_17290.f_4909[iVar1] != 32) {
					StringCopy(&Global_17290.f_4641[iVar1 /*16*/],
							   controls::_0x80C2FD58D720C801(2, Global_17290.f_4909[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17290.f_4640 = 0;
		}
		if (!Global_17290.f_4640) {
			graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			graphics::_pop_scaleform_movie_function_void();
			graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			graphics::_push_scaleform_movie_function_parameter_float(1f - Global_17290.f_4951 / 100f);
			graphics::_pop_scaleform_movie_function_void();
			if (gameplay::is_pc_version()) {
				graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				graphics::_push_scaleform_movie_function_parameter_bool(1);
				graphics::_pop_scaleform_movie_function_void();
			}
			iVar1 = 0;
			while (iVar1 < Global_17290.f_4639) {
				if (gameplay::get_hash_key(&Global_17290.f_4834[iVar1 /*4*/]) != gameplay::get_hash_key("PREV")) {
					graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					graphics::_push_scaleform_movie_function_parameter_int(iVar1);
					func_120(&Global_17290.f_4641[iVar1 /*16*/]);
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && gameplay::get_hash_key(&Global_17290.f_4834[iVar2 /*4*/]) ==
											 gameplay::get_hash_key("PREV")) {
						func_120(&Global_17290.f_4641[iVar2 /*16*/]);
						iVar2++;
					}
					if (Global_17290.f_4883[iVar1] == -1) {
						func_119(&Global_17290.f_4834[iVar1 /*4*/]);
					}
					else {
						graphics::begin_text_command_scaleform_string(&Global_17290.f_4834[iVar1 /*4*/]);
						if (iParam5) {
							ui::add_text_component_substring_time(iParam2, 70);
						}
						else {
							ui::add_text_component_integer(iParam2);
						}
						graphics::end_text_command_scaleform_string();
					}
					if (gameplay::is_pc_version()) {
						if (Global_17290.f_4896[iVar1] != 353 && gameplay::is_bit_set(Global_17290.f_4922, iVar1)) {
							graphics::_push_scaleform_movie_function_parameter_bool(1);
							graphics::_push_scaleform_movie_function_parameter_int(Global_17290.f_4896[iVar1]);
						}
						else {
							graphics::_push_scaleform_movie_function_parameter_bool(0);
							graphics::_push_scaleform_movie_function_parameter_int(353);
						}
					}
					graphics::_pop_scaleform_movie_function_void();
				}
				iVar1++;
			}
			if (gameplay::get_hash_key(&Global_2593974.f_16) != gameplay::get_hash_key("")) {
				graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				graphics::_push_scaleform_movie_function_parameter_int(Global_17290.f_4639);
				func_120(&Global_2593974);
				if (Global_2593974.f_20 == -1) {
					func_119(&Global_2593974.f_16);
				}
				else {
					graphics::begin_text_command_scaleform_string(&Global_2593974.f_16);
					if (iParam5) {
						ui::add_text_component_substring_time(iParam2, 70);
					}
					else {
						ui::add_text_component_integer(iParam2);
					}
					graphics::end_text_command_scaleform_string();
				}
				graphics::_pop_scaleform_movie_function_void();
			}
			graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			graphics::_push_scaleform_movie_function_parameter_int(0);
			graphics::_push_scaleform_movie_function_parameter_int(0);
			graphics::_push_scaleform_movie_function_parameter_int(0);
			graphics::_push_scaleform_movie_function_parameter_int(80);
			graphics::_pop_scaleform_movie_function_void();
			graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17290.f_4952) {
				graphics::_push_scaleform_movie_function_parameter_int(1);
			}
			else {
				graphics::_push_scaleform_movie_function_parameter_int(0);
			}
			graphics::_pop_scaleform_movie_function_void();
			Global_17290.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17290.f_4639) {
			if (Global_17290.f_4883[iVar1] != -1) {
				if (iParam2 > 0) {
					graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/],
															 "OVERRIDE_RESPAWN_TEXT");
					graphics::_push_scaleform_movie_function_parameter_int(iVar1);
					graphics::begin_text_command_scaleform_string(&Global_17290.f_4834[iVar1 /*4*/]);
					if (iParam5) {
						ui::add_text_component_substring_time(iParam2, 70);
					}
					else {
						ui::add_text_component_integer(iParam2);
					}
					graphics::end_text_command_scaleform_string();
					graphics::_pop_scaleform_movie_function_void();
				}
			}
			iVar1++;
		}
		if (Global_2593974.f_20 != -1) {
			if (iParam2 > 0) {
				graphics::_push_scaleform_movie_function(Global_17290.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				graphics::_push_scaleform_movie_function_parameter_int(iVar1);
				graphics::begin_text_command_scaleform_string(&Global_2593974.f_16);
				if (iParam5) {
					ui::add_text_component_substring_time(iParam2, 70);
				}
				else {
					ui::add_text_component_integer(iParam2);
				}
				graphics::end_text_command_scaleform_string();
				graphics::_pop_scaleform_movie_function_void();
			}
		}
		graphics::_set_screen_draw_position(76, 66);
		graphics::_screen_draw_position_ratio(0f, 0f, 0f, 0f);
		if (bParam6) {
			if (!Global_17290.f_7899) {
				ui::set_hud_component_position(15, 0f, -0.0375f);
				Global_17290.f_7899 = 1;
			}
		}
		else if (Global_17290.f_7899) {
			ui::reset_hud_component_values(15);
			Global_17290.f_7899 = 0;
		}
		graphics::_screen_draw_position_end();
		if (Global_17290.f_4925) {
			graphics::_set_screen_draw_position(82, 66);
			graphics::_screen_draw_position_ratio(0f, 0f, 0f, 0f);
			graphics::draw_scaleform_movie(Global_17290.f_5530[iVar0 /*10*/], Global_17290.f_4923, Global_17290.f_4924,
										   1f, 1f, 255, 255, 255, 255, 0);
			graphics::_screen_draw_position_end();
		}
		else {
			graphics::draw_scaleform_movie_fullscreen(Global_17290.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

// Position - 0x8B81
void func_119(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x8B93
void func_120(char *sParam0) { graphics::_0xE83A3E3557A56640(sParam0); }

// Position - 0x8BA1
bool func_121(int iParam0, int iParam1) {
	bool bVar0;

	if (iParam0 == player::player_id()) {
		bVar0 = func_122(-1, 0) == 8;
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

// Position - 0x8BEC
int func_122(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1) {
		iVar1 = func_123();
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

// Position - 0x8C2D
int func_123() { return Global_1312735; }

// Position - 0x8C39
bool func_124() {
	vector3 vVar0;

	if (Global_14443.f_1 > 3) {
		return true;
	}
	if (func_125()) {
		vVar0 = {0f, -500f, 0f};
		mobile::get_mobile_phone_position(&vVar0);
		if (Global_14388 == 0) {
			if (vVar0.y > -119f) {
				return true;
			}
			else {
				return false;
			}
		}
		else if (vVar0.y > -101f) {
			return true;
		}
		else {
			return false;
		}
	}
	return false;
}

// Position - 0x8CA7
bool func_125() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) > 0) {
		return true;
	}
	return false;
}

// Position - 0x8CC1
void func_126(int iParam0, int iParam1, int *iParam2, int *iParam3, int *iParam4) {
	var uVar0;

	ui::get_hud_colour(1, iParam2, iParam3, iParam4, &uVar0);
	switch (iParam0) {
	case 28:
		*iParam2 = 194;
		*iParam3 = 80;
		*iParam4 = 80;
		break;

	case 15:
	case 4:
	case 16:
	case 26:
	case 27:
	case 35:
	case 34:
	case 47:
	case 46:
	case 42:
	case 36:
	case 37:
	case 50:
	case 39:
	case 40:
	case 38:
	case 43:
	case 44:
	case 45:
	case 49:
		if (iParam1) {
			*iParam2 = 0;
			*iParam3 = 0;
			*iParam4 = 0;
		}
		break;
	}
}

// Position - 0x8D81
void func_127(float fParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	ui::get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
	ui::set_text_font(0);
	ui::set_text_scale(0f, 0.35f);
	ui::set_text_leading(2);
	ui::set_text_colour(iVar0, iVar1, iVar2, iVar3);
	ui::set_text_wrap(fParam0, Global_17287 + Global_17289 - 0.0046875f);
	ui::set_text_centre(0);
	ui::set_text_dropshadow(0, 0, 0, 0, 0);
	ui::set_text_edge(0, 0, 0, 0, 0);
}

// Position - 0x8DE0
void func_128(float fParam0, float fParam1, char *sParam2, int iParam3, int iParam4) {
	ui::begin_text_command_display_text(sParam2);
	ui::add_text_component_integer(iParam3);
	ui::add_text_component_integer(iParam4);
	ui::end_text_command_display_text(fParam0, fParam1, 0);
}

// Position - 0x8E03
float func_129(char *sParam0, int iParam1, int iParam2) {
	if (!gameplay::is_string_null(sParam0)) {
		if (gameplay::get_hash_key(sParam0) == 0) {
			return 0f;
		}
	}
	else {
		return 0f;
	}
	func_130();
	ui::_begin_text_command_width(sParam0);
	ui::add_text_component_integer(iParam1);
	ui::add_text_component_integer(iParam2);
	return ui::_end_text_command_get_width(1);
}

// Position - 0x8E45
void func_130() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	ui::get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17290.f_7874) {
		iVar0 = Global_17290.f_7870;
		iVar1 = Global_17290.f_7871;
		iVar2 = Global_17290.f_7872;
		iVar3 = Global_17290.f_7873;
	}
	ui::set_text_font(0);
	ui::set_text_scale(0f, 0.35f);
	ui::set_text_colour(iVar0, iVar1, iVar2, iVar3);
	ui::set_text_wrap(Global_17287 + 0.0046875f, Global_17287 + Global_17289 - 0.0046875f);
	ui::set_text_centre(0);
	ui::set_text_dropshadow(0, 0, 0, 0, 0);
	ui::set_text_edge(0, 0, 0, 0, 0);
}

// Position - 0x8ECF
void func_131(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6,
			  int iParam7) {
	graphics::draw_rect(fParam0 + fParam2 * 0.5f, fParam1 + fParam3 * 0.5f, fParam2, fParam3, iParam4, iParam5, iParam6,
						iParam7, 0);
}

// Position - 0x8EFE
var func_132(int iParam0, int iParam1) {
	char *sVar0[2];
	var uVar3;
	struct<13> Var19;

	if (!gameplay::is_string_null_or_empty(&Global_17290.f_6703[iParam0 /*16*/])) {
		if (gameplay::get_hash_key(&Global_17290.f_6703[iParam0 /*16*/]) == -1487683087) {
			Var19 = {func_134(player::player_id())};
			if (network::_0x5835D9CD92E83184(&Var19, &uVar3)) {
				return func_133(&uVar3);
			}
		}
		else {
			return func_133(&Global_17290.f_6703[iParam0 /*16*/]);
		}
	}
	switch (iParam0) {
	case 3:
		sVar0[0] = "MP_hostCrown";
		sVar0[1] = "MP_hostCrown";
		break;

	case 21:
		sVar0[0] = "MP_SpecItem_Coke";
		sVar0[1] = "MP_SpecItem_Coke";
		break;

	case 22:
		sVar0[0] = "MP_SpecItem_Heroin";
		sVar0[1] = "MP_SpecItem_Heroin";
		break;

	case 23:
		sVar0[0] = "MP_SpecItem_Weed";
		sVar0[1] = "MP_SpecItem_Weed";
		break;

	case 24:
		sVar0[0] = "MP_SpecItem_Meth";
		sVar0[1] = "MP_SpecItem_Meth";
		break;

	case 25:
		sVar0[0] = "MP_SpecItem_Cash";
		sVar0[1] = "MP_SpecItem_Cash";
		break;

	case 1:
		sVar0[0] = "shop_NEW_Star";
		sVar0[1] = "shop_NEW_Star";
		break;

	case 2:
		sVar0[0] = "shop_NEW_Star";
		sVar0[1] = "shop_NEW_Star";
		break;

	case 4:
		sVar0[0] = "Shop_Tick_Icon";
		sVar0[1] = "Shop_Tick_Icon";
		break;

	case 6:
		sVar0[0] = "Shop_Box_CrossB";
		sVar0[1] = "Shop_Box_Cross";
		break;

	case 7:
		sVar0[0] = "Shop_Box_BlankB";
		sVar0[1] = "Shop_Box_Blank";
		break;

	case 5:
		sVar0[0] = "Shop_Box_TickB";
		sVar0[1] = "Shop_Box_Tick";
		break;

	case 8:
		sVar0[0] = "shop_NEW_Star";
		sVar0[1] = "shop_NEW_Star";
		break;

	case 9:
		sVar0[0] = "Shop_Clothing_Icon_B";
		sVar0[1] = "Shop_Clothing_Icon_A";
		break;

	case 10:
		sVar0[0] = "Shop_GunClub_Icon_B";
		sVar0[1] = "Shop_GunClub_Icon_A";
		break;

	case 17:
		sVar0[0] = "Shop_Ammo_Icon_B";
		sVar0[1] = "Shop_Ammo_Icon_A";
		break;

	case 18:
		sVar0[0] = "Shop_Armour_Icon_B";
		sVar0[1] = "Shop_Armour_Icon_A";
		break;

	case 19:
		sVar0[0] = "Shop_Health_Icon_B";
		sVar0[1] = "Shop_Health_Icon_A";
		break;

	case 20:
		sVar0[0] = "Shop_MakeUp_Icon_B";
		sVar0[1] = "Shop_MakeUp_Icon_A";
		break;

	case 11:
		sVar0[0] = "Shop_Tattoos_Icon_B";
		sVar0[1] = "Shop_Tattoos_Icon_A";
		break;

	case 12:
		sVar0[0] = "Shop_Garage_Icon_B";
		sVar0[1] = "Shop_Garage_Icon_A";
		break;

	case 13:
		sVar0[0] = "Shop_Garage_Bike_Icon_B";
		sVar0[1] = "Shop_Garage_Bike_Icon_A";
		break;

	case 14:
		sVar0[0] = "Shop_Barber_Icon_B";
		sVar0[1] = "Shop_Barber_Icon_A";
		break;

	case 15:
		sVar0[0] = "shop_Lock";
		sVar0[1] = "shop_Lock";
		break;

	case 16:
		sVar0[0] = "Shop_Tick_Icon";
		sVar0[1] = "Shop_Tick_Icon";
		break;

	case 26:
		sVar0[0] = "arrowleft";
		sVar0[1] = "arrowleft";
		break;

	case 27:
		sVar0[0] = "arrowright";
		sVar0[1] = "arrowright";
		break;

	case 28:
		sVar0[0] = "MP_AlertTriangle";
		sVar0[1] = "MP_AlertTriangle";
		break;

	case 29:
		sVar0[0] = "shop_NEW_Star";
		sVar0[1] = "shop_NEW_Star";
		break;

	case 31:
		sVar0[0] = "Shop_Michael_Icon_B";
		sVar0[1] = "Shop_Michael_Icon_A";
		break;

	case 32:
		sVar0[0] = "Shop_Franklin_Icon_B";
		sVar0[1] = "Shop_Franklin_Icon_A";
		break;

	case 33:
		sVar0[0] = "Shop_Trevor_Icon_B";
		sVar0[1] = "Shop_Trevor_Icon_A";
		break;

	case 48:
		sVar0[0] = "SaleIcon";
		sVar0[1] = "SaleIcon";
		break;

	case 49:
		sVar0[0] = "Shop_Tick_Icon";
		sVar0[1] = "Shop_Tick_Icon";
		break;

	case 0:
		sVar0[0] = "";
		sVar0[1] = "";
		break;
	}
	if (iParam1) {
		return sVar0[0];
	}
	return sVar0[1];
}

// Position - 0x9333
var func_133(var uParam0) { return uParam0; }

// Position - 0x933D
struct<13> func_134(int iParam0) {
	struct<13> Var0;

	network::network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

// Position - 0x9354
char *
func_135(int iParam0) {
	var uVar0;
	struct<13> Var16;

	if (!gameplay::is_string_null_or_empty(&Global_17290.f_5886[iParam0 /*16*/])) {
		if (gameplay::get_hash_key(&Global_17290.f_5886[iParam0 /*16*/]) == -1487683087) {
			Var16 = {func_134(player::player_id())};
			network::_0x5835D9CD92E83184(&Var16, &uVar0);
			return func_133(&uVar0);
		}
		else {
			return func_133(&Global_17290.f_5886[iParam0 /*16*/]);
		}
	}
	if (iParam0 == 48) {
		return "MPShopSale";
	}
	return "CommonMenu";
}

// Position - 0x93C9
bool func_136() {
	int iVar0;
	int iVar1;
	float fVar2;

	graphics::_get_active_screen_resolution(&iVar0, &iVar1);
	fVar2 = system::to_float(iVar0) / system::to_float(iVar1);
	if (fVar2 > 3.5f) {
		return true;
	}
	return false;
}

// Position - 0x93FB
bool func_137(int iParam0, int iParam1, int iParam2, float fParam3, float *fParam4, int iParam5) {
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;

	StringCopy(&cVar0, func_135(iParam0), 64);
	StringCopy(&cVar16, func_132(iParam0, iParam1), 64);
	if (gameplay::get_hash_key(&cVar16) != 0) {
		fVar34 = 1f;
		if (iParam5) {
			graphics::_get_active_screen_resolution(&iVar32, &iVar33);
			fVar35 = graphics::_get_aspect_ratio(0);
			if (func_136()) {
				iVar32 = system::round(system::to_float(iVar33) * fVar35);
			}
			fVar36 = system::to_float(iVar32) / system::to_float(iVar33);
			fVar34 = fVar36 / fVar35;
			if (func_136()) {
				fVar34 = 1f;
			}
			if (script::_get_number_of_instances_of_script_with_name_hash(joaat("director_mode")) > 0) {
				graphics::get_screen_resolution(&iVar32, &iVar33);
			}
			iVar32 = system::round(system::to_float(iVar32) / fVar34);
			iVar33 = system::round(system::to_float(iVar33) / fVar34);
		}
		else {
			graphics::get_screen_resolution(&iVar32, &iVar33);
		}
		vVar37 = {graphics::get_texture_resolution(&cVar0, &cVar16)};
		vVar37.x *= func_138(iParam0) / fVar34;
		vVar37.y *= func_138(iParam0) / fVar34;
		if (!iParam2) {
			vVar37.x -= 2f;
			vVar37.y -= 2f;
		}
		if (iParam0 == 30) {
			vVar37.x = 288f;
			vVar37.y = 106f;
		}
		if (iParam0 == 29 && gameplay::get_hash_key(&Global_17290.f_6703[29 /*16*/]) == -1487683087) {
			vVar37.x = 106f;
			vVar37.y = 106f;
		}
		*fParam3 = vVar37.x / IntToFloat(iVar32) * IntToFloat(iVar32 / iVar33);
		*fParam4 = vVar37.y / IntToFloat(iVar33) / (vVar37.x / IntToFloat(iVar32)) * *fParam3;
		if (!iParam5) {
			if (!graphics::get_is_widescreen() && iParam0 != 30) {
				*fParam3 *= 1.33f;
			}
		}
		if (iParam0 == 29) {
			if (*fParam3 > Global_17289) {
				*fParam4 *= Global_17289 / *fParam3;
				*fParam3 = Global_17289;
			}
		}
		return true;
	}
	return false;
}

// Position - 0x95AC
float func_138(int iParam0) {
	switch (iParam0) {
	case 33:
	case 4:
	case 11:
	case 31:
	case 20:
	case 15:
	case 10:
	case 12:
	case 13:
	case 32:
	case 9:
	case 5:
	case 6:
	case 7:
	case 14:
	case 18:
	case 19:
	case 17:
	case 28:
	case 26:
	case 27:
	case 49: return 0.5f;
	}
	return 1f;
}

// Position - 0x964B
int func_139(int iParam0, bool bParam1) {
	if (Global_2433125.f_1385.f_688 != 0) {
		return 1;
	}
	if (!cam::is_screen_faded_in() || func_141(8, -1) && func_140() != 64 ||
		ui::get_pause_menu_state() != 0 && !bParam1 || streaming::is_player_switch_in_progress() && !iParam0 ||
		network::_0x2EAC52B4019E2782() || Global_69962 || Global_17290.f_7898 || ui::is_warning_message_active() ||
		Global_91543.f_1361) {
		return 0;
	}
	return 1;
}

// Position - 0x96E8
int func_140() { return Global_1315168; }

// Position - 0x96F4
var func_141(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x972F
char *func_142(int iParam0) {
	switch (iParam0) {
	case 0: return "SNK_ITEM1_D";

	case 1: return "SNK_ITEM2_D";

	case 2: return "SNK_ITEM3_D";

	default:
	}
	return "";
}

// Position - 0x9768
bool func_143() {
	if (controls::_is_input_disabled(2)) {
		if (Global_2594050 > -1) {
			if (controls::is_control_just_pressed(2, 237)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x978F
int func_144(int iParam0, int iParam1, int iParam2) {
	if (!controls::_is_input_disabled(2)) {
		return 0;
	}
	if (ui::is_pause_menu_active() || ui::is_warning_message_active()) {
		return 0;
	}
	if (iParam2) {
		ui::_show_cursor_this_frame();
	}
	if (Global_2594050 == -6) {
		ui::_set_cursor_sprite(4);
		if (iParam0 && controls::is_control_pressed(2, 237)) {
			return 1;
		}
		else {
			Global_2594050 = -1;
			return 0;
		}
	}
	if (Global_2594050 > -1 || Global_2594050 == -3 || Global_2594050 == -2 || ui::_0x3D9ACB1EB139E702()) {
		ui::_set_cursor_sprite(1);
		return 0;
	}
	if (Global_2594050 == -1 && iParam0) {
		if (controls::is_control_pressed(2, 237)) {
			ui::_set_cursor_sprite(4);
			Global_2594050 = -6;
			return 1;
		}
		else {
			ui::_set_cursor_sprite(3);
			return 0;
		}
	}
	ui::_set_cursor_sprite(1);
	return 0;
}

// Position - 0x986F
void func_145(int iParam0, int iParam1, int iParam2, int iParam3) {
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	fVar6 = 0.034722f / 2f;
	iVar13 = -1;
	if (!controls::_is_input_disabled(2)) {
		Global_2594050 = -1;
		return;
	}
	controls::_0x5B73C77D9EB66E24(1);
	fVar0 = Global_17287;
	fVar2 = fVar0 + Global_17289;
	fVar3 = Global_17290.f_5600;
	fVar1 = Global_17290.f_5600 - IntToFloat(Global_17290.f_5602) * 0.034722f;
	if (iParam2) {
		fVar3 += 0.034722f;
		fVar1 += 0.034722f;
	}
	if (Global_17290.f_5602 < 1) {
		fVar1 = Global_17290.f_5600 - 0.034722f;
	}
	graphics::_set_screen_draw_position(76, 84);
	graphics::_screen_draw_position_ratio(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	graphics::_0x6DD8F5AA635EB4B2(fVar0, fVar1, &fVar0, &fVar1);
	graphics::_0x6DD8F5AA635EB4B2(fVar2, fVar3, &fVar2, &fVar3);
	graphics::_screen_draw_position_end();
	func_147();
	if (Global_2594050 == -6) {
		return;
	}
	Global_2594050 = -1;
	fVar7 = Global_2594044;
	fVar8 = Global_2594045;
	if (Global_17290.f_5603 > Global_17290.f_5602) {
		if (Global_2594044 >= fVar0 && Global_2594044 <= fVar2 && Global_2594045 >= fVar3 &&
			Global_2594045 < fVar3 + fVar6) {
			Global_2594050 = -2;
			if (iParam3) {
				func_146(0);
			}
			return;
		}
		if (Global_2594044 >= fVar0 && Global_2594044 <= fVar2 && Global_2594045 >= fVar3 + fVar6 &&
			Global_2594045 < fVar3 + 0.034722f) {
			Global_2594050 = -3;
			if (iParam3) {
				func_146(0);
			}
			return;
		}
	}
	if (fVar7 >= fVar0 && fVar7 <= fVar2 && fVar8 >= fVar1 && fVar8 <= fVar3) {
		fVar9 = fVar8 - fVar1;
		iVar13 = system::floor(fVar9 / 0.034722f);
		if (Global_17290.f_5603 == -1) {
			Global_2594050 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = iVar11 / Global_17290.f_5602;
		iVar10 = 32 + iVar11 - iVar12 * iVar13;
		if (iParam3) {
			if (!iParam1 || iVar13 != 0) {
				graphics::_set_screen_draw_position(76, 84);
				graphics::_screen_draw_position_ratio(-0.05f, -0.05f, 0f, 0f);
				func_131(fVar4, fVar5 + IntToFloat(iVar13) * 0.034722f, Global_17289, 0.034722f - 0.0015f, 255, 255,
						 255, iVar10);
				graphics::_screen_draw_position_end();
			}
		}
		Global_2594050 = Global_17290.f_7520[iVar13];
		return;
	}
	if (!iParam0) {
		if (fVar7 < fVar2) {
			Global_2594050 = -4;
			return;
		}
		if (fVar8 > 0.9f) {
			Global_2594050 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < fVar3 + 0.25f) {
		Global_2594050 = -4;
		return;
	}
	Global_2594050 = -1;
}

// Position - 0x9B1B
void func_146(int iParam0) {
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 0.034722f / 2f;
	if (iParam0) {
		iVar3 = 48;
	}
	else {
		iVar3 = 210;
	}
	fVar0 = Global_17287;
	fVar1 = Global_17290.f_5600;
	graphics::_set_screen_draw_position(76, 84);
	graphics::_screen_draw_position_ratio(-0.05f, -0.05f, 0f, 0f);
	if (Global_2594050 == -2) {
		func_131(fVar0, fVar1, Global_17289, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2594050 == -3) {
		func_131(fVar0, fVar1 + fVar2, Global_17289, fVar2, 255, 255, 255, iVar3);
	}
	graphics::_screen_draw_position_end();
}

// Position - 0x9BA4
void func_147() {
	Global_2594046 = Global_2594044;
	Global_2594047 = Global_2594045;
	Global_2594044 = controls::get_disabled_control_normal(2, 239);
	Global_2594045 = controls::get_disabled_control_normal(2, 240);
	Global_2594048 = Global_2594044 - Global_2594046;
	Global_2594049 = Global_2594045 - Global_2594047;
}

// Position - 0x9BEC
void func_148(int iParam0, char *sParam1, int iParam2, int iParam3) {
	char *sVar0;

	sVar0 = controls::get_control_instructional_button(2, iParam0, 1);
	if (Global_17290.f_4639 >= 12) {
		StringCopy(&Global_2593974, sVar0, 64);
		StringCopy(&Global_2593974.f_16, sParam1, 16);
		Global_2593974.f_20 = iParam2;
		return;
		return;
	}
	if (!iParam3) {
		gameplay::set_bit(&Global_17290.f_4922, Global_17290.f_4639);
	}
	StringCopy(&Global_17290.f_4641[Global_17290.f_4639 /*16*/], sVar0, 64);
	StringCopy(&Global_17290.f_4834[Global_17290.f_4639 /*4*/], sParam1, 16);
	Global_17290.f_4883[Global_17290.f_4639] = iParam2;
	Global_17290.f_4896[Global_17290.f_4639] = iParam0;
	Global_17290.f_4909[Global_17290.f_4639] = 32;
	Global_17290.f_4639++;
}

// Position - 0x9CA1
void func_149(char *sParam0, int iParam1, int iParam2) {
	int iVar0;

	StringCopy(&Global_17290.f_4562, sParam0, 16);
	Global_17290.f_4632 = 0;
	Global_17290.f_4633 = 0;
	Global_17290.f_4634 = 0;
	Global_17290.f_4635 = 0;
	Global_17290.f_4636 = iParam1;
	Global_17290.f_4637 = gameplay::get_game_timer();
	Global_17290.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4) {
		Global_17290.f_4566[iVar0] = 0;
		iVar0++;
	}
}

// Position - 0x9D06
void func_150(var uParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	Global_17290.f_5606 = uParam0;
	Global_17290.f_5741 = iParam2;
	if (Global_17290.f_5606 < Global_17290.f_5605) {
		Global_17290.f_5605 = Global_17290.f_5606;
	}
	else if (Global_17290.f_5599 && Global_17290.f_5606 > Global_17290.f_5607 ||
			 !Global_17290.f_5599 && Global_17290.f_5606 >= Global_17290.f_5605 + Global_17290.f_5095) {
		iVar0 = Global_17290.f_5605;
		while (iVar0 <= Global_17290.f_5606) {
			if (iVar0 >= 0 && iVar0 < 127) {
				if (Global_17290.f_4959[iVar0] != 0) {
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17290.f_5095 && Global_17290.f_5605 < 128) {
			Global_17290.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17290.f_5605;
			while (iVar0 <= Global_17290.f_5606) {
				if (iVar0 >= 0 && iVar0 < 127) {
					if (Global_17290.f_4959[iVar0] != 0) {
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17290.f_5598 = 0;
	Global_17290.f_5599 = 0;
	if (iParam1) {
		StringCopy(&Global_17290.f_4562, "", 16);
		StringCopy(&Global_2593974.f_21, "", 16);
	}
}

// Position - 0x9E56
void func_151(int iParam0) { Global_17290.f_5605 = iParam0; }

// Position - 0x9E66
void func_152(int iParam0, int iParam1) {
	float fVar0;
	float fVar1;
	float *fVar2;
	float fVar3;

	if (Global_17290.f_5092 >= 256) {
		return;
	}
	if (Global_17290.f_5610 >= 4) {
		return;
	}
	if (Global_17290.f_5611 != 1) {
		return;
	}
	if (Global_17290.f_5610 >= Global_17290.f_5608) {
		return;
	}
	Global_17290.f_3918[Global_17290.f_5092] = iParam0;
	Global_17290.f_5092++;
	Global_17290.f_2124[Global_17290.f_5609 /*5*/][Global_17290.f_5610] = 2;
	Global_17290.f_5610++;
	if (Global_17290.f_5610 >= Global_17290.f_5608) {
		fVar0 = func_154();
		if (Global_17290.f_4945[Global_17290.f_5089] && Global_17290.f_5610 == Global_17290.f_5608) {
			func_137(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 += fVar1 * 2f;
		}
		if (fVar0 > Global_17290.f_4938[Global_17290.f_5089 - 1]) {
			Global_17290.f_4938[Global_17290.f_5089 - 1] = fVar0;
		}
	}
	if (iParam1) {
		if (Global_17290.f_5610 >= Global_17290.f_5608) {
			fVar3 = func_153();
			if (fVar3 > Global_17290.f_5612[Global_17290.f_5088]) {
				Global_17290.f_5612[Global_17290.f_5088] = fVar3;
			}
		}
	}
}

// Position - 0x9FA1
float func_153() {
	int iVar0;
	int iVar1;
	float fVar2;
	var *uVar3;
	float fVar4;

	iVar0 = 0;
	while (iVar0 < Global_17290.f_5610) {
		if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar0] == 4) {
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1) {
		if (Global_17290.f_4433[Global_17290.f_5094 - iVar1 + iVar0] != 0) {
			if (func_137(Global_17290.f_4433[Global_17290.f_5094 - iVar1 + iVar0], 1, 0, &uVar3, &fVar4, 0)) {
				if (fVar4 > fVar2) {
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > ui::_get_text_scale_height(0.35f, 0)) {
		return fVar2;
	}
	return ui::_get_text_scale_height(0.35f, 0);
}

// Position - 0xA054
float func_154() {
	float fVar0;
	float fVar1;
	float *fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar7 = 0;
	while (iVar7 < Global_17290.f_5610) {
		if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 1) {
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 8) {
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 2) {
			iVar3++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 3) {
			iVar4++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 4) {
			iVar5++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 5) {
			iVar6++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 6) {
			iVar6++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 7) {
			iVar6++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 9) {
			iVar6++;
		}
		iVar7++;
	}
	func_116(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (gameplay::get_hash_key(&Global_17290.f_73[Global_17290.f_5609 /*6*/]) != 0) {
		ui::_begin_text_command_width(&Global_17290.f_73[Global_17290.f_5609 /*6*/]);
	}
	iVar7 = 0;
	while (iVar7 < Global_17290.f_5610) {
		if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 1) {
			iVar8++;
			if (gameplay::get_hash_key(&Global_17290.f_73[Global_17290.f_5609 /*6*/]) != 0) {
				ui::add_text_component_substring_text_label(&Global_17290.f_73[Global_17290.f_5609 + iVar8 /*6*/]);
			}
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 8) {
			iVar8++;
			if (gameplay::get_hash_key(&Global_17290.f_73[Global_17290.f_5609 /*6*/]) != 0) {
				ui::add_text_component_substring_text_label(&Global_17290.f_73[Global_17290.f_5609 + iVar8 /*6*/]);
			}
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 2) {
			if (gameplay::get_hash_key(&Global_17290.f_73[Global_17290.f_5609 /*6*/]) != 0) {
				ui::add_text_component_integer(Global_17290.f_3918[Global_17290.f_5092 - iVar3 + iVar9]);
			}
			iVar9++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 3) {
			if (gameplay::get_hash_key(&Global_17290.f_73[Global_17290.f_5609 /*6*/]) != 0) {
				ui::add_text_component_float(Global_17290.f_4175[Global_17290.f_5093 - iVar4 + iVar10],
											 Global_17290.f_4304[Global_17290.f_5093 - iVar4 + iVar10]);
			}
			iVar10++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 5) {
			if (gameplay::get_hash_key(&Global_17290.f_73[Global_17290.f_5609 /*6*/]) != 0) {
				ui::add_text_component_substring_player_name(
					&Global_2453058[Global_17290.f_5091 - iVar6 + iVar11 /*16*/]);
			}
			iVar11++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 6) {
			if (gameplay::get_hash_key(&Global_17290.f_73[Global_17290.f_5609 /*6*/]) != 0) {
				ui::add_text_component_substring_text_label(
					&Global_2453058[Global_17290.f_5091 - iVar6 + iVar11 /*16*/]);
			}
			iVar11++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 7) {
			if (gameplay::get_hash_key(&Global_17290.f_73[Global_17290.f_5609 /*6*/]) != 0) {
				ui::add_text_component_substring_player_name(
					&Global_2453058[Global_17290.f_5091 - iVar6 + iVar11 /*16*/]);
			}
			iVar11++;
		}
		else if (Global_17290.f_2124[Global_17290.f_5609 /*5*/][iVar7] == 9) {
			if (gameplay::get_hash_key(&Global_17290.f_73[Global_17290.f_5609 /*6*/]) != 0) {
				ui::add_text_component_substring_player_name(
					&Global_2453058[Global_17290.f_5091 - iVar6 + iVar11 /*16*/]);
			}
			iVar11++;
		}
		iVar7++;
	}
	if (gameplay::get_hash_key(&Global_17290.f_73[Global_17290.f_5609 /*6*/]) != 0) {
		fVar0 = ui::_end_text_command_get_width(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5) {
		if (Global_17290.f_4433[Global_17290.f_5094 - iVar5 + iVar7] != 0) {
			func_137(Global_17290.f_4433[Global_17290.f_5094 - iVar5 + iVar7], 1, 0, &fVar1, &fVar2, 0);
			fVar0 += fVar1;
		}
		iVar7++;
	}
	return fVar0;
}

// Position - 0xA49B
int func_155(int iParam0) {
	switch (iParam0) {
	case 0: return 1;

	case 1: return 2;

	case 2: return 4;

	default:
	}
	return 0;
}

// Position - 0xA4C9
void func_156(int iParam0, char *sParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;
	float fVar1;
	float fVar2;
	float *fVar3;
	float fVar4;

	if (Global_17290.f_5088 > iParam0) {
		return;
	}
	if (Global_17290.f_5088 >= 128) {
		return;
	}
	if (Global_17290.f_5090 >= 256) {
		return;
	}
	if (Global_17290.f_5610 < Global_17290.f_5608) {
		return;
	}
	if (Global_17290.f_5088 != iParam0) {
		Global_17290.f_5088 = iParam0;
		Global_17290.f_5089 = 0;
	}
	iVar0 = Global_17290.f_4926[Global_17290.f_5089];
	if (iVar0 != 1) {
		while (Global_17290.f_5089 < 4 && iVar0 != 1) {
			Global_17290.f_5089++;
			iVar0 = Global_17290.f_4926[Global_17290.f_5089];
		}
		if (iVar0 != 1) {
			return;
		}
	}
	StringCopy(&Global_17290.f_73[Global_17290.f_5090 /*6*/], sParam1, 24);
	if (!gameplay::is_string_null_or_empty(sParam1) && !ui::does_text_label_exist(sParam1)) {
	}
	Global_17290.f_1610[Global_17290.f_5090] = iParam3;
	Global_17290.f_1867[Global_17290.f_5090] = iParam4;
	Global_17290.f_5090++;
	if (!iParam3) {
		func_159(Global_17290.f_5088, 1);
	}
	else {
		func_159(Global_17290.f_5088, 0);
	}
	if (iParam2 == 0) {
		fVar1 = func_158(&Global_17290.f_73[Global_17290.f_5090 /*6*/]);
		if (Global_17290.f_4945[Global_17290.f_5089]) {
			func_137(26, 1, 0, &fVar2, &fVar3, 0);
			fVar1 += fVar2 * 2f;
		}
		if (fVar1 > Global_17290.f_4938[Global_17290.f_5089]) {
			Global_17290.f_4938[Global_17290.f_5089] = fVar1;
		}
	}
	if (iParam5) {
		if (iParam2 == 0) {
			fVar4 = func_157(&Global_17290.f_73[Global_17290.f_5090 /*6*/]);
			if (fVar4 > Global_17290.f_5612[iParam0]) {
				Global_17290.f_5612[iParam0] = fVar4;
			}
		}
	}
	gameplay::set_bit(&Global_17290.f_4959[iParam0], Global_17290.f_5089);
	Global_17290.f_5089++;
	Global_17290.f_5611 = 1;
	Global_17290.f_5609 = Global_17290.f_5090 - 1;
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = iParam2;
}

// Position - 0xA6D5
var func_157(char *sParam0) {
	if (!ui::does_text_label_exist(sParam0)) {
	}
	return ui::_get_text_scale_height(0.35f, 0);
}

// Position - 0xA6F1
float func_158(char *sParam0) {
	if (!gameplay::is_string_null(sParam0)) {
		if (gameplay::get_hash_key(sParam0) == 0) {
			return 0f;
		}
	}
	else {
		return 0f;
	}
	func_116(0, 1, 0, 0, 0, 0, 0);
	ui::_begin_text_command_width(sParam0);
	return ui::_end_text_command_get_width(1);
}

// Position - 0xA72E
void func_159(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = system::floor(system::to_float(iParam0) / 32f);
	if (iParam1) {
		gameplay::set_bit(&Global_17290.f_5881[iVar0], iParam0 - iVar0 * 32);
	}
	else {
		gameplay::clear_bit(&Global_17290.f_5881[iVar0], iParam0 - iVar0 * 32);
	}
}

// Position - 0xA77A
void func_160() {
	if (gameplay::is_pc_version()) {
		controls::_set_cursor_location(0.325f, 0.3f);
	}
}

// Position - 0xA798
void func_161(int iParam0, char *sParam1, char *sParam2) {
	Global_17290 = iParam0;
	func_162(29, sParam1, sParam2);
}

// Position - 0xA7AF
void func_162(int iParam0, char *sParam1, char *sParam2) {
	StringCopy(&Global_17290.f_5886[iParam0 /*16*/], sParam1, 64);
	StringCopy(&Global_17290.f_6703[iParam0 /*16*/], sParam2, 64);
}

// Position - 0xA7D3
void func_163(char *sParam0) {
	int iVar0;

	StringCopy(&Global_17290.f_1, sParam0, 16);
	Global_17290.f_68 = 0;
	Global_17290.f_69 = 0;
	Global_17290.f_70 = 0;
	Global_17290.f_71 = 0;
	Global_17290.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4) {
		Global_17290.f_5[iVar0] = 0;
		iVar0++;
	}
}

// Position - 0xA81E
void func_164(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	Global_17290.f_4953[0] = iParam0;
	Global_17290.f_4953[1] = iParam1;
	Global_17290.f_4953[2] = iParam2;
	Global_17290.f_4953[3] = iParam3;
	Global_17290.f_4953[4] = iParam4;
}

// Position - 0xA85D
void func_165(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	Global_17290.f_4926[0] = iParam0;
	Global_17290.f_4926[1] = iParam1;
	Global_17290.f_4926[2] = iParam2;
	Global_17290.f_4926[3] = iParam3;
	Global_17290.f_4926[4] = iParam4;
	Global_17290.f_5096 = 0;
	if (iParam0 != 0) {
		Global_17290.f_5096++;
	}
	if (iParam1 != 0) {
		Global_17290.f_5096++;
	}
	if (iParam2 != 0) {
		Global_17290.f_5096++;
	}
	if (iParam3 != 0) {
		Global_17290.f_5096++;
	}
	if (iParam4 != 0) {
		Global_17290.f_5096++;
	}
}

// Position - 0xA907
void func_166(int iParam0) {
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = 0;
	while (iVar0 < 256) {
		StringCopy(&Global_17290.f_73[iVar0 /*6*/], "", 24);
		iVar1 = 0;
		while (iVar1 < 4) {
			Global_17290.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32) {
		StringCopy(&Global_2453058[iVar0 /*16*/], "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256) {
		Global_17290.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128) {
		Global_17290.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128) {
		Global_17290.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128) {
		Global_17290.f_4959[iVar0] = 0;
		Global_17290.f_5097[iVar0] = 0;
		Global_17290.f_5226[iVar0] = 0;
		Global_17290.f_5746[iVar0] = 0f;
		Global_17290.f_5355[iVar0] = 0;
		Global_17290.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5) {
		Global_17290.f_4926[iVar0] = 0;
		Global_17290.f_4938[iVar0] = 0f;
		Global_17290.f_4932[iVar0] = -1f;
		Global_17290.f_4945[iVar0] = 0;
		Global_17290.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12) {
		StringCopy(&Global_17290.f_4834[iVar0 /*4*/], "", 16);
		Global_17290.f_4883[iVar0] = -1;
		Global_17290.f_4896[iVar0] = 353;
		Global_17290.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 51) {
		StringCopy(&Global_17290.f_5886[iVar0 /*16*/], "", 64);
		StringCopy(&Global_17290.f_6703[iVar0 /*16*/], "", 64);
		iVar0++;
	}
	StringCopy(&Global_2593974.f_16, "", 16);
	Global_2593974.f_20 = -1;
	Global_17290 = 0;
	Global_17290.f_5088 = 0;
	Global_17290.f_5089 = 0;
	Global_17290.f_5090 = 0;
	Global_17290.f_5092 = 0;
	Global_17290.f_5093 = 0;
	Global_17290.f_5094 = 0;
	Global_17290.f_5091 = 0;
	Global_17290.f_5741 = 0;
	Global_17290.f_5606 = 0;
	Global_17290.f_5605 = 0;
	Global_17290.f_5607 = 0;
	StringCopy(&Global_17290.f_4562, "", 16);
	Global_17290.f_4632 = 0;
	Global_17290.f_4633 = 0;
	Global_17290.f_4634 = 0;
	Global_17290.f_4635 = 0;
	Global_17290.f_4636 = 0;
	Global_17290.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4) {
		Global_17290.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_4638 = 0;
	StringCopy(&Global_2593974.f_21, "", 16);
	Global_2593974.f_61 = 0;
	Global_2593974.f_62 = 0;
	Global_2593974.f_63 = 0;
	Global_2593974.f_64 = 0;
	Global_2593974.f_65 = 0;
	Global_2593974.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4) {
		Global_2593974.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2593974.f_67 = 0;
	StringCopy(&Global_17290.f_1, "", 16);
	Global_17290.f_4944 = 0f;
	Global_17290.f_68 = 0;
	Global_17290.f_69 = 0;
	Global_17290.f_70 = 0;
	Global_17290.f_71 = 0;
	Global_17290.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4) {
		Global_17290.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_5611 = 0;
	Global_17290.f_5610 = 0;
	Global_17290.f_5608 = 0;
	Global_17290.f_5609 = 0;
	Global_17290.f_4639 = 0;
	Global_17290.f_4640 = 0;
	Global_17290.f_5095 = 10;
	Global_17290.f_5096 = 0;
	Global_17290.f_5743 = 0f;
	Global_17290.f_5744 = 0f;
	Global_17290.f_5598 = 0;
	Global_17290.f_5599 = 0;
	Global_17290.f_5600 = 0f;
	Global_17290.f_5601 = 0;
	Global_17290.f_5603 = 0;
	Global_17290.f_5602 = 0;
	Global_17290.f_5604 = 0;
	Global_17290.f_7895 = 0;
	iVar0 = 0;
	while (iVar0 < 2) {
		Global_17290.f_5875[iVar0] = -1;
		Global_17290.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17290.f_4951 = 0f;
	Global_17290.f_4922 = 0;
	Global_17290.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17290.f_5881) {
		Global_17290.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17290.f_7874 = 0;
	Global_17290.f_7869 = 0;
	Global_17290.f_7879 = 0;
	Global_17290.f_7884 = 0;
	Global_17290.f_7889 = 0;
	Global_17290.f_7891 = 0;
	Global_17290.f_7897 = 0;
	Global_17287 = 0.05f;
	Global_17288 = 0.05f;
	Global_17289 = 0.225f;
	fVar2 = graphics::_get_aspect_ratio(0);
	if (iParam0) {
		Global_17289 = 0.225f * 16f / 9f / fVar2;
	}
	else if (fVar2 < 1.77777f) {
		Global_17289 = 0.225f * 16f / 9f / fVar2;
	}
	else {
		Global_17289 = 0.225f;
	}
}

// Position - 0xADBC
int func_167(int iParam0, vector3 vParam1, float fParam4, var *uParam5, var *uParam6, float *fParam7) {
	switch (iParam0) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
		*uParam5 = {object::_get_object_offset_from_coords(vParam1, fParam4, 2.40015f, -7.75244f, 1.0825f)};
		*uParam6 = -4.2069f;
		uParam6->f_1 = -0.027f;
		uParam6->f_2 = fParam4 + 22.8175f;
		*fParam7 = 32.8283f;
		break;

	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
		*uParam5 = {object::_get_object_offset_from_coords(vParam1, fParam4, 3.80296f, -5.391f, 1.213f)};
		*uParam6 = -9.3866f;
		uParam6->f_1 = -0.0011f;
		uParam6->f_2 = fParam4 + 46.9866f;
		*fParam7 = 35f;
		break;

	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
		*uParam5 = {object::_get_object_offset_from_coords(vParam1, fParam4, 2.97963f, -3.39452f, 0.934498f)};
		*uParam6 = -8.483f;
		uParam6->f_1 = 0.0149f;
		uParam6->f_2 = fParam4 + 53.5519f;
		*fParam7 = 35f;
		break;

	case -2:
		*uParam5 = {1390.653f, 3598.966f, 35.6115f};
		*uParam6 = {-3.6091f, 0.022f, -8.6461f};
		*fParam7 = 35f;
		break;
	}
	return 1;
}

// Position - 0xAF44
void func_168(int iParam0, int iParam1) {
	if (iParam1) {
		gameplay::set_bit(&Global_25434, iParam0);
	}
	else {
		gameplay::clear_bit(&Global_25434, iParam0);
	}
}

// Position - 0xAF66
bool func_169(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = func_170(iParam0);
	if (iVar0 == -1) {
		return false;
	}
	if (!player::is_player_playing(player::get_player_index())) {
		return false;
	}
	if (func_111(0)) {
		return false;
	}
	if (cutscene::is_cutscene_playing()) {
		return false;
	}
	if (iVar0 > -1 && iVar0 < 6) {
		if (Global_36484[iVar0 /*32*/] == 1 && Global_36484[iVar0 /*32*/].f_4 == 1) {
			if (iParam1) {
				if (Global_36484[iVar0 /*32*/].f_29) {
					return false;
				}
			}
			Global_36484[iVar0 /*32*/].f_5 = 1;
			Global_36484[iVar0 /*32*/].f_29 = 1;
			return true;
		}
		else {
			if (Global_36484[iVar0 /*32*/] == 0) {
			}
			if (Global_36484[iVar0 /*32*/].f_7) {
			}
		}
	}
	return false;
}

// Position - 0xB01E
int func_170(int iParam0) {
	int iVar0;

	if (iParam0 < 0) {
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6) {
		if (Global_36484[iVar0 /*32*/].f_1 == iParam0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0xB059
int func_171(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_170(iParam0);
	if (iParam1 == 0) {
		if (iVar0 == -1) {
			return 0;
		}
	}
	else {
		iVar0 = iParam0;
	}
	if (iVar0 < 0) {
		return 0;
	}
	if (Global_36484[iVar0 /*32*/].f_6) {
		return 0;
	}
	iVar1 = 0;
	if (!Global_36484[iVar0 /*32*/].f_12) {
		ui::begin_text_command_is_this_help_message_being_displayed(&Global_36484[iVar0 /*32*/].f_8);
		ui::add_text_component_substring_text_label(&Global_36679);
		iVar1 = ui::end_text_command_is_this_help_message_being_displayed(0);
	}
	else {
		ui::begin_text_command_is_this_help_message_being_displayed(&Global_36484[iVar0 /*32*/].f_8);
		ui::add_text_component_substring_text_label(&Global_36679);
		if (Global_36484[iVar0 /*32*/].f_30) {
			ui::add_text_component_substring_player_name(&Global_36484[iVar0 /*32*/].f_13);
		}
		else {
			ui::add_text_component_substring_text_label(&Global_36484[iVar0 /*32*/].f_13);
		}
		iVar1 = ui::end_text_command_is_this_help_message_being_displayed(0);
	}
	return iVar1;
}

// Position - 0xB10E
void func_172(int *iParam0) {
	int iVar0;

	if (*iParam0 == -1) {
		return;
	}
	iVar0 = func_170(*iParam0);
	if (iVar0 == -1) {
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6) {
		if (Global_36484[iVar0 /*32*/]) {
			Global_36484[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

// Position - 0xB165
void func_173(var *uParam0, int iParam1, char *sParam2, int iParam3, char *sParam4, int iParam5, int iParam6) {
	int iVar0;

	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("context_controller")) < 1) {
	}
	if (streaming::is_player_switch_in_progress()) {
		if (*uParam0 != -1) {
			func_172(uParam0);
		}
		return;
	}
	if (*uParam0 != -1) {
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6) {
		if (!Global_36484[iVar0 /*32*/]) {
			Global_36484[iVar0 /*32*/] = 1;
			Global_36484[iVar0 /*32*/].f_1 = Global_36685;
			Global_36685++;
			Global_36484[iVar0 /*32*/].f_4 = 0;
			Global_36484[iVar0 /*32*/].f_29 = 0;
			Global_36484[iVar0 /*32*/].f_5 = 0;
			Global_36484[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&Global_36484[iVar0 /*32*/].f_8, sParam2, 16);
			Global_36484[iVar0 /*32*/].f_6 = iParam3;
			Global_36484[iVar0 /*32*/].f_31 = script::get_id_of_this_thread();
			Global_36484[iVar0 /*32*/].f_7 = 0;
			Global_36484[iVar0 /*32*/].f_3 = iParam5;
			if (!gameplay::is_string_null_or_empty(sParam4)) {
				Global_36484[iVar0 /*32*/].f_12 = 1;
				StringCopy(&Global_36484[iVar0 /*32*/].f_13, sParam4, 64);
				Global_36484[iVar0 /*32*/].f_30 = iParam6;
			}
			else {
				Global_36484[iVar0 /*32*/].f_12 = 0;
				Global_36484[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_36484[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

// Position - 0xB290
void func_174(char *sParam0) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 1, 1, -1);
}

// Position - 0xB2A6
int func_175() {
	if (Global_101700.f_19369.f_145 > 0) {
		return 0;
	}
	return 1;
}

// Position - 0xB2C3
bool func_176(int iParam0, var *uParam1, float fParam2, var *uParam3, var *uParam4, var *uParam5, float *fParam6) {
	switch (iParam0) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
		*uParam3 = {object::_get_object_offset_from_coords(*uParam1, fParam2, 1.46991f, -0.814453f, -0.97226f)};
		*uParam4 = {object::_get_object_offset_from_coords(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f)};
		*uParam5 = {object::_get_object_offset_from_coords(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f)};
		*fParam6 = 0.75f;
		break;

	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
		*uParam3 = {object::_get_object_offset_from_coords(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f)};
		*uParam4 = {object::_get_object_offset_from_coords(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f)};
		*uParam5 = {object::_get_object_offset_from_coords(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f)};
		*fParam6 = 0.75f;
		break;

	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
		*uParam3 = {object::_get_object_offset_from_coords(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f)};
		*uParam4 = {object::_get_object_offset_from_coords(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f)};
		*uParam5 = {object::_get_object_offset_from_coords(*uParam1, fParam2, -1.17421f, 0.39005f, 0f)};
		*fParam6 = 0.75f;
		break;

	case -2:
		*uParam3 = {1390.955f, 3604.379f, 33.98091f};
		*uParam4 = {1394.475f, 3605.664f, 35.98091f};
		*uParam5 = {1392.551f, 3605.449f, 35.30949f};
		*fParam6 = 0.75f;
		break;
	}
	return true;
}

// Position - 0xB4A9
int func_177(float fParam0) {
	if (entity::does_entity_exist(player::player_ped_id()) && !entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (fParam0 <= 0f) {
			return ped::_0x5407B7288D0478B7(player::player_ped_id()) > 0;
		}
		else {
			return ped::_0x336B3D200AB007CB(player::player_ped_id(),
											entity::get_entity_coords(player::player_ped_id(), 1), fParam0) > 0;
		}
	}
	return 0;
}

// Position - 0xB4FB
void func_178() {
	if (iLocal_631) {
		if (iLocal_630 == 3) {
			iLocal_630 = 0;
		}
		iLocal_631 = 0;
	}
	switch (iLocal_630) {
	case 0:
		entity::set_entity_visible(uLocal_618[iLocal_634], 1, 0);
		iLocal_632 = ped::create_synchronized_scene(
			object::_get_object_offset_from_coords(Local_68.f_486.f_6, Local_68.f_486.f_9.f_2, -0.07f, 0.06f, -0.02f),
			Local_68.f_486.f_9, 2);
		if (!ped::is_ped_injured(Local_68.f_2)) {
			ai::task_synchronized_scene(Local_68.f_2, iLocal_632, "mp_am_hold_up", "purchase_chocbar_shopkeeper", 1.5f,
										-1.5f, 0, 0, 1148846080, 0);
			entity::play_synchronized_entity_anim(uLocal_618[iLocal_634], iLocal_632, "purchase_chocbar",
												  "mp_am_hold_up", 1000f, 8f, 1, 1148846080);
			iLocal_630 = 1;
		}
		break;

	case 1:
		if (ped::is_synchronized_scene_running(iLocal_632)) {
			if (ped::get_synchronized_scene_phase(iLocal_632) == 1f) {
				if (!ped::is_ped_injured(Local_68.f_2)) {
					ai::clear_ped_tasks(Local_68.f_2);
				}
				if (entity::does_entity_exist(uLocal_618[iLocal_634])) {
					entity::set_entity_dynamic(uLocal_618[iLocal_634], 1);
				}
				iLocal_633 = gameplay::get_game_timer();
				iLocal_630 = 2;
			}
		}
		else {
			iLocal_633 = gameplay::get_game_timer();
			iLocal_630 = 2;
		}
		break;

	case 2:
		if (gameplay::get_game_timer() - iLocal_633 > 1000) {
			if (entity::does_entity_exist(uLocal_618[iLocal_634])) {
				entity::set_entity_visible(uLocal_618[iLocal_634], 0, 0);
				entity::set_entity_coords(uLocal_618[iLocal_634], func_59(iLocal_634), 1, 0, 0, 1);
				entity::set_entity_dynamic(uLocal_618[iLocal_634], 0);
			}
			iLocal_630 = 3;
		}
		break;

	case 3: break;
	}
}

// Position - 0xB698
void func_179() {
	if (iLocal_54 != 6) {
		switch (iLocal_54) {
		case 1:
			if (func_184()) {
				iLocal_54 = 2;
			}
			else {
				iLocal_54 = 6;
			}
			break;

		case 2:
			if (!entity::is_entity_dead(Local_68.f_86, 0)) {
				func_183();
				func_11(&Local_68.f_86.f_7);
				iLocal_54 = 3;
			}
			break;

		case 3:
			if (!entity::is_entity_dead(Local_68.f_86, 0)) {
				if (func_182(&Local_68.f_86.f_7, 5f) || func_180(Local_68.f_2, &Local_68.f_451) ||
					ped::is_ped_ragdoll(Local_68.f_86)) {
					iLocal_54 = 4;
				}
			}
			break;

		case 4:
			if (!entity::is_entity_dead(Local_68.f_86, 0)) {
				iLocal_53 = 31;
				ai::task_smart_flee_ped(Local_68.f_86, Local_68, 500f, -1, 0, 0);
				iLocal_54 = 5;
			}
			func_39(&Local_68.f_86.f_7);
			break;
		}
	}
}

// Position - 0xB76E
int func_180(int iParam0, var *uParam1) {
	if (!entity::is_entity_dead(iParam0, 0)) {
		if (weapon::is_ped_armed(player::player_ped_id(), 7)) {
			if (player::is_player_free_aiming_at_entity(player::player_id(), iParam0) ||
				player::is_player_targetting_entity(player::player_id(), iParam0)) {
				if (ped::is_ped_facing_ped(iParam0, player::player_ped_id(), 90f)) {
					if (func_181(iParam0, 1) < uParam1->f_2) {
						if (uParam1->f_1 == 0) {
							uParam1->f_1 = gameplay::get_game_timer();
						}
						else if (gameplay::get_game_timer() - uParam1->f_1 > uParam1->f_3) {
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

// Position - 0xB7F3
float func_181(int iParam0, int iParam1) {
	return func_22(player::get_player_ped(player::get_player_index()), iParam0, iParam1);
}

// Position - 0xB80B
bool func_182(var *uParam0, float fParam1) {
	if (func_14(uParam0)) {
		if (func_8(uParam0) > fParam1) {
			return true;
		}
	}
	return false;
}

// Position - 0xB82D
void func_183() {
	if (!entity::is_entity_dead(Local_68.f_86, 0)) {
		ai::open_sequence_task(&Local_68.f_86.f_6);
		ai::task_turn_ped_to_face_entity(0, Local_68, 0);
		ai::task_look_at_entity(0, Local_68, 2500, 0, 2);
		ai::task_hands_up(0, 2500, 0, -1, 0);
		ai::close_sequence_task(Local_68.f_86.f_6);
		ai::task_perform_sequence(Local_68.f_86, Local_68.f_86.f_6);
	}
}

// Position - 0xB883
bool func_184() {
	ped::get_closest_ped(Local_68.f_86.f_2, Local_68.f_86.f_5, 1, 0, &Local_68.f_86, 0, 1, -1);
	if (!entity::is_entity_dead(Local_68.f_86, 0)) {
		if (entity::get_entity_model(Local_68.f_86) == Local_68.f_86.f_1) {
			entity::set_entity_as_mission_entity(Local_68.f_86, 1, 0);
			ped::set_blocking_of_non_temporary_events(Local_68.f_86, 1);
			return true;
		}
	}
	return false;
}

// Position - 0xB8E3
void func_185() {
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;

	if (iLocal_624 > 1 && iLocal_624 < 5) {
		if (func_207()) {
			cam::do_screen_fade_out(500);
			iLocal_624 = 6;
		}
	}
	switch (iLocal_624) {
	case 0:
		if ((entity::is_entity_dead(Local_68.f_2, 0) || !func_206() || func_1(Local_68.f_470, 128)) && iLocal_57 < 3 &&
			fire::get_number_of_fires_in_range(Local_68.f_2.f_1, 1.5f) == 0) {
			if (func_44() && !ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) && !func_205(0)) {
				func_204("SHR_ROBTILL", -1);
				Local_68.f_469 = -1;
				func_173(&Local_68.f_469, 4, "SHR_ROBTILL", 0, 0, 0, 0);
				gameplay::clear_bit(&Local_68.f_162.f_18, 1);
				gameplay::clear_bit(&Local_68.f_162.f_18, 0);
				iLocal_624 = 1;
			}
		}
		else if (!ped::is_ped_injured(Local_68.f_2)) {
		}
		else if (iLocal_57 == 7) {
		}
		else if (fire::get_number_of_fires_in_range(Local_68.f_2.f_1, 1.5f) > 0) {
		}
		break;

	case 1:
		if (func_44()) {
			if (func_169(Local_68.f_469, 1)) {
				if (!entity::is_entity_dead(Local_68, 0)) {
					if (!entity::is_entity_dead(player::get_players_last_vehicle(), 0)) {
						iVar3 = player::get_players_last_vehicle();
						if (entity::is_entity_in_angled_area(iVar3, Local_68.f_214, Local_68.f_217, Local_68.f_220, 0,
															 1, 0)) {
							entity::set_entity_coords(
								iVar3,
								object::_get_object_offset_from_coords(Local_68.f_486.f_6, Local_68.f_486.f_9.f_2,
																	   -0.7961f, -1.562f, -0.4215f),
								0, 0, 0, 1);
						}
					}
				}
				gameplay::set_bit(&Local_68.f_162.f_18, 1);
				if (func_27("SHR_ROBTILL")) {
					ui::clear_help(1);
				}
				func_172(&Local_68.f_469);
				bVar2 = weapon::get_current_ped_weapon(player::player_ped_id(), &iLocal_628, 1);
				if (bVar2) {
					weapon::set_current_ped_weapon(player::player_ped_id(), joaat("weapon_unarmed"), 1);
				}
				player::set_player_control(player::get_player_index(), 0, 0);
				fire::stop_fire_in_range(entity::get_entity_coords(player::player_ped_id(), 1), 15f);
				cutscene::_0xC61B86C9F61EB404(0);
				func_108(0);
				func_198(1, 1, 1, 0);
				ui::display_radar(0);
				func_168(23, 1);
				gameplay::clear_area_of_projectiles(Local_68.f_2.f_1, 3f, 0);
				iLocal_624 = 2;
			}
			else if (gameplay::get_game_timer() % 1000 < 50) {
				if (Local_68.f_469 <= 0) {
					Local_68.f_469 = -1;
					func_173(&Local_68.f_469, 4, "SHR_ROBTILL", 0, 0, 0, 0);
				}
			}
		}
		else {
			if (func_27("SHR_ROBTILL")) {
				ui::clear_help(1);
			}
			func_172(&Local_68.f_469);
			iLocal_624 = 0;
		}
		break;

	case 2:
		if (entity::is_entity_dead(Local_68.f_2, 0)) {
			entity::set_entity_collision(Local_68.f_2, 0, 0);
			entity::freeze_entity_position(Local_68.f_2, 1);
		}
		if (!ped::is_ped_injured(player::player_ped_id())) {
			entity::set_entity_coords(
				player::player_ped_id(),
				object::_get_object_offset_from_coords(Local_68.f_2.f_1, Local_68.f_2.f_4, -0.75f, 0f, -1f), 1, 0, 0,
				1);
			entity::set_entity_heading(player::player_ped_id(), Local_68.f_2.f_4);
			ai::clear_sequence_task(&iLocal_566);
			ai::open_sequence_task(&iLocal_566);
			ai::task_play_anim(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
			ai::task_play_anim(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 1, 0, 0, 0, 0);
			ai::task_play_anim(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
			ai::close_sequence_task(iLocal_566);
			ai::task_perform_sequence(player::player_ped_id(), iLocal_566);
			if (!cam::does_cam_exist(iLocal_625)) {
				iLocal_625 = cam::create_camera_with_params(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
			}
			cam::attach_cam_to_entity(iLocal_625, player::player_ped_id(), -0.1878f, 3.0635f, 0.68f, 1);
			cam::point_cam_at_entity(iLocal_625, player::player_ped_id(), -0.0129f, 0.0927f, 0.3008f, 1);
			cam::set_cam_fov(iLocal_625, 35f);
			cam::shake_cam(iLocal_625, "HAND_SHAKE", 0.1f);
			cam::set_cam_active(iLocal_625, 1);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
		}
		iLocal_624 = 3;
		break;

	case 3:
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (!cam::does_cam_exist(iLocal_626)) {
				iLocal_626 = cam::create_camera_with_params(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
			}
			cam::attach_cam_to_entity(iLocal_626, player::player_ped_id(), -1.0346f, 2.9183f, 0.68f, 1);
			cam::point_cam_at_entity(iLocal_626, player::player_ped_id(), -0.0574f, 0.1074f, 0.3008f, 1);
			cam::set_cam_fov(iLocal_626, 35f);
			cam::shake_cam(iLocal_626, "HAND_SHAKE", 0.3f);
			cam::set_cam_active_with_interp(iLocal_626, iLocal_625, 8000, 1, 1);
		}
		iLocal_629 = gameplay::get_game_timer();
		iLocal_624 = 4;
		break;

	case 4:
		if (gameplay::get_game_timer() - iLocal_629 > 4800 ||
			!ped::is_ped_injured(player::player_ped_id()) && ped::is_ped_ragdoll(player::player_ped_id()) ||
			fire::get_number_of_fires_in_range(Local_68.f_2.f_1, 3f) > 0) {
			iLocal_624 = 5;
		}
		else if (gameplay::get_game_timer() - iLocal_629 > 4500) {
			if (func_197()) {
				if (!iLocal_583) {
					graphics::_start_screen_effect("CamPushInNeutral", 0, 0);
					audio::play_sound_frontend(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_583 = 1;
				}
			}
		}
		else if (!ped::is_ped_injured(player::player_ped_id()) &&
				 entity::is_entity_playing_anim(player::player_ped_id(), "oddjobs@shop_robbery@rob_till", "loop", 3)) {
			fVar0 =
				entity::get_entity_anim_current_time(player::player_ped_id(), "oddjobs@shop_robbery@rob_till", "loop");
			if (fVar0 > 0.374f && fVar0 <= 0.484f || fVar0 > 0.824f && fVar0 <= 0.92f) {
				if (!iLocal_627) {
					iVar1 = gameplay::get_random_int_in_range(10, 51);
					func_196(func_95(), 1, iVar1, 0, 0);
					iLocal_569 += iVar1;
					Local_68.f_28.f_6 = audio::get_sound_id();
					audio::play_sound_frontend(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
					iLocal_627 = 1;
				}
			}
			else if (iLocal_627) {
				iLocal_627 = 0;
			}
		}
		break;

	case 5:
		if (entity::is_entity_dead(Local_68.f_2, 0)) {
			entity::set_entity_collision(Local_68.f_2, 1, 0);
			entity::freeze_entity_position(Local_68.f_2, 0);
		}
		cam::set_gameplay_cam_relative_heading(0f);
		cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
		if (cam::does_cam_exist(iLocal_625)) {
			cam::destroy_cam(iLocal_625, 0);
		}
		if (cam::does_cam_exist(iLocal_626)) {
			cam::destroy_cam(iLocal_626, 0);
		}
		cam::render_script_cams(0, 0, 3000, 1, 0, 0);
		if (!entity::is_entity_dead(player::get_players_last_vehicle(), 0)) {
			iVar3 = player::get_players_last_vehicle();
			vVar4 = {entity::get_entity_coords(iVar3, 1)};
		}
		if (iLocal_628 != joaat("weapon_unarmed") && !ped::is_ped_injured(player::player_ped_id())) {
			weapon::set_current_ped_weapon(player::player_ped_id(), iLocal_628, 1);
		}
		if (gameplay::is_bit_set(Local_68.f_162.f_18, 1)) {
			gameplay::clear_bit(&Local_68.f_162.f_18, 1);
		}
		func_195(1, 1, 1);
		func_15(1, 0);
		iLocal_62 = 12;
		func_192();
		func_186(297, 0, 0);
		Local_68.f_468 = 1;
		iLocal_624 = 7;
		break;

	case 6:
		if (cam::is_screen_faded_out()) {
			cam::set_cam_active(iLocal_626, 0);
			cam::render_script_cams(0, 0, 3000, 1, 0, 0);
			if (!ped::is_ped_injured(player::player_ped_id())) {
				ai::clear_ped_tasks_immediately(player::player_ped_id());
			}
			if (iLocal_569 < 15) {
				iVar1 = gameplay::get_random_int_in_range(25, 65);
				func_196(func_95(), 1, iVar1, 0, 0);
				iLocal_569 += iVar1;
			}
			cam::do_screen_fade_in(500);
			iLocal_624 = 5;
		}
		break;
	}
}

// Position - 0xC00E
void func_186(int iParam0, int iParam1, int iParam2) {
	bool bVar0;

	if (iParam0 < 0) {
	}
	if (iParam0 == 321 || iParam0 > 321) {
	}
	else {
		func_191(891 + iParam0, 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101700.f_9153[iParam0 /*12*/].f_5 == 1) {
		if (Global_101700.f_9153[iParam0 /*12*/].f_6 == 11 || Global_101700.f_9153[iParam0 /*12*/].f_6 == 12) {
			bVar0 = false;
		}
	}
	else {
		Global_101700.f_9153[iParam0 /*12*/].f_5 = 1;
		Global_101700.f_9153[iParam0 /*12*/].f_10 = iParam1;
		Global_101700.f_9153[iParam0 /*12*/].f_11 = iParam2;
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
		func_187();
	}
}

// Position - 0xC0F6
void func_187() {
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
		func_91(13, system::floor(Global_101700.f_9153.f_3853));
	}
	if (!datafile::datafile_is_save_pending()) {
		if (!Global_69702) {
			if (func_190() == 2 == 0 && !network::network_is_game_in_progress()) {
				if (network::network_is_cloud_available()) {
					Global_101434 = 0;
				}
				if (!Global_55822) {
					func_188();
				}
			}
		}
	}
}

// Position - 0xC5B7
int func_188() {
	if (func_189(0)) {
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

// Position - 0xC602
bool func_189(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0xC62D
int func_190() { return Global_25190; }

// Position - 0xC638
int func_191(int iParam0, int iParam1, int iParam2, int iParam3) {
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
		iParam2 = func_123();
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

// Position - 0xC9CC
void func_192() {
	if (!iLocal_575) {
		Global_101700.f_18994[iLocal_568]++;
		Global_101700.f_18994.f_62[iLocal_568] = Local_68.f_1;
		if (func_95() == 0) {
			func_193(5);
		}
		iLocal_575 = 1;
	}
}

// Position - 0xCA1B
void func_193(int iParam0) {
	switch (iParam0) {
	case 0: func_194(&Global_88292, 1); break;

	case 1: func_194(&Global_88294, 3); break;

	case 2: func_194(&Global_88298, 1); break;

	case 3: func_194(&Global_88300, 1); break;

	case 4: func_194(&Global_88302, 1); break;

	case 5: func_194(&Global_88304, 1); break;

	case 6: func_194(&Global_88306, 1); break;

	case 7: func_194(&Global_88308, 2); break;

	case 8: func_194(&Global_88311, 1); break;

	case 9: func_194(&Global_88313, 1); break;
	}
}

// Position - 0xCADE
void func_194(var *uParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam1) {
		if (iVar0 < iParam1 - 1) {
			(*uParam0)[iVar0] = (*uParam0)[iVar0 + 1];
		}
		else {
			(*uParam0)[iVar0] = gameplay::get_game_timer();
		}
		iVar0++;
	}
}

// Position - 0xCB1D
void func_195(int iParam0, int iParam1, int iParam2) {
	if (iParam0) {
		player::set_player_control(player::get_player_index(), 1, 0);
	}
	cutscene::_0xC61B86C9F61EB404(1);
	func_198(0, 1, iParam2, 0);
	if (iParam1) {
		ui::display_radar(1);
		ui::display_hud(1);
	}
	func_168(23, 0);
}

// Position - 0xCB58
void func_196(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;

	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 3) {
		return;
	}
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 4) {
		return;
	}
	func_69(Global_101700.f_27009[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (iParam3) {
		iVar0 = 0;
		if (iParam4) {
			switch (iParam0) {
			case 0: iVar1 = joaat("sp0_money_made_from_random_peds"); break;

			case 1: iVar1 = joaat("sp1_money_made_from_random_peds"); break;

			case 2: iVar1 = joaat("sp2_money_made_from_random_peds"); break;

			default: return;
			}
		}
		else {
			switch (iParam0) {
			case 0: iVar1 = joaat("sp0_money_made_from_missions"); break;

			case 1: iVar1 = joaat("sp1_money_made_from_missions"); break;

			case 2: iVar1 = joaat("sp2_money_made_from_missions"); break;

			default: return;
			}
		}
		stats::stat_get_int(iVar1, &iVar0, -1);
		iVar0 += iParam2;
		stats::stat_set_int(iVar1, iVar0, 1);
	}
}

// Position - 0xCC3F
bool func_197() {
	if (cam::_0xEE778F8C7E1142E2(cam::_0x19CAFA3C87F7C2FF()) == 4) {
		return true;
	}
	return false;
}

// Position - 0xCC58
void func_198(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0) {
		player::special_ability_deactivate_fast(player::player_id());
		player::set_all_random_peds_flee(player::player_id(), 1);
		player::set_police_ignore_player(player::player_id(), 1);
		func_203(1);
		ui::_0xA8FDB297A8D25FBA();
		ui::_0xFDB423997FA30340();
		if (Global_14443.f_1 > 3) {
			if (audio::is_mobile_phone_call_ongoing()) {
				audio::stop_scripted_conversation(0);
			}
			if (!func_109()) {
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_202(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		G_DisableMessagesAndCalls1 = 1;
	}
	else {
		func_203(0);
		ui::_0xE1CD1E48E025E661();
		Global_55828 = 0;
		if (iParam1) {
			graphics::_0x03FC694AE06C5A20();
		}
		player::set_all_random_peds_flee(player::player_id(), 0);
		player::set_police_ignore_player(player::player_id(), 0);
		func_202(0, iParam3, iParam2, 0);
		if (network::network_is_game_in_progress()) {
			if (!ped::is_ped_injured(player::player_ped_id()) && !func_200(player::player_id()) &&
				!func_121(player::player_id(), 0) && !func_199()) {
				entity::set_entity_invincible(player::player_ped_id(), 0);
			}
		}
		else if (!ped::is_ped_injured(player::player_ped_id()) && !func_200(player::player_id())) {
			entity::set_entity_invincible(player::player_ped_id(), 0);
		}
		G_DisableMessagesAndCalls1 = 0;
	}
}

// Position - 0xCD71
bool func_199() { return gameplay::is_bit_set(Global_1591201[player::player_id() /*602*/].f_39.f_18, 14); }

// Position - 0xCD8E
int func_200(int iParam0) {
	if (func_121(iParam0, 0)) {
		return 1;
	}
	if (func_201()) {
		if (iParam0 == player::player_id()) {
			return 1;
		}
	}
	if (gameplay::is_bit_set(Global_2421664[iParam0 /*358*/].f_198, 2)) {
		return 1;
	}
	return 0;
}

// Position - 0xCDD0
bool func_201() { return gameplay::is_bit_set(Global_2359301, 3); }

// Position - 0xCDE1
int func_202(int iParam0, int iParam1, var uParam2, int iParam3) {
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

// Position - 0xCE14
void func_203(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&G_SleepModeOnOn25, 13);
	}
	else {
		gameplay::clear_bit(&G_SleepModeOnOn25, 13);
	}
}

// Position - 0xCE37
void func_204(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0xCE4E
int func_205(int iParam0) {
	if (iParam0 == 1) {
		if (Global_14443.f_1 > 3) {
			if (gameplay::is_bit_set(G_SleepModeOnOn25, 14)) {
				if (Global_14442 == 1) {
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
		else {
			return 0;
		}
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) > 0) {
		if (Global_14442 == 1) {
			return 1;
		}
		else {
			return 0;
		}
	}
	if (Global_14443.f_1 > 3) {
		if (Global_14442 == 1) {
			return 1;
		}
		else {
			return 0;
		}
	}
	return 0;
}

// Position - 0xCED2
int func_206() {
	if (!entity::is_entity_dead(Local_68.f_2, 0)) {
		if (interior::get_interior_from_entity(Local_68.f_2) == Local_68.f_185) {
			return 1;
		}
		else if (entity::is_entity_in_angled_area(Local_68.f_2, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, 1,
												  0)) {
			return 1;
		}
		else if (entity::is_entity_in_angled_area(Local_68.f_2, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, 1,
												  0)) {
			return 1;
		}
		else if (entity::is_entity_in_angled_area(Local_68.f_2, Local_68.f_207, Local_68.f_210, Local_68.f_213, 0, 1,
												  0)) {
			return 1;
		}
		else if (Local_68.f_199 != -1f) {
			if (entity::is_entity_in_angled_area(Local_68.f_2, Local_68.f_193, Local_68.f_196, Local_68.f_199, 0, 1,
												 0)) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0xCF98
bool func_207() {
	if (ui::is_pause_menu_active()) {
		return false;
	}
	if (controls::is_control_just_pressed(0, 18) || controls::is_control_just_pressed(2, 18)) {
		return true;
	}
	return false;
}

// Position - 0xCFCA
void func_208() {
	int iVar0;

	func_225();
	func_222();
	if (entity::does_entity_exist(Local_68)) {
		weapon::get_current_ped_weapon(Local_68, &iVar0, 1);
		if (iLocal_60 == 1 && iLocal_622 == 2 &&
			(player::has_player_damaged_at_least_one_ped(player::player_id()) || func_221() || func_220())) {
			player::clear_player_has_damaged_at_least_one_ped(player::player_id());
			func_15(1, 0);
			iLocal_60 = 9;
		}
	}
	else {
		return;
	}
	func_217();
	if (!iLocal_574) {
		func_216();
	}
	switch (iLocal_60) {
	case 1:
		if (func_291()) {
			if (func_20(Local_68, Local_68.f_2, &Local_68.f_451, 1) ||
				func_180(Local_68.f_2, &Local_68.f_451) && !ped::is_ped_in_any_vehicle(player::player_ped_id(), 0))
				&&iVar0 != joaat("weapon_unarmed") {
					func_215();
					player::set_all_random_peds_flee(player::player_id(), 1);
					iLocal_53 = 12;
					iLocal_52 = 3;
					iLocal_60 = 5;
					gameplay::set_bit(&Global_87675, 3);
					func_214();
				}
			if (func_1(Local_68.f_470, 8)) {
				if (!func_1(Local_68.f_470, 32)) {
					if (!ped::is_ped_injured(Local_68.f_2) && func_1(Local_68.f_470, 4)) {
						ai::task_play_anim(Local_68.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
					}
					iLocal_53 = 36;
					func_15(1, 0);
					func_213();
					func_282(&Local_68.f_470, 32);
				}
			}
		}
		break;

	case 2:
		if (func_291()) {
			if (func_180(Local_68.f_2, &Local_68.f_451) && iVar0 != joaat("weapon_unarmed")) {
				player::set_all_random_peds_flee(player::player_id(), 1);
				Local_68.f_2.f_11 = 1;
				func_192();
				iLocal_53 = 12;
				iLocal_52 = 3;
				iLocal_62 = 11;
				iLocal_60 = 3;
				gameplay::set_bit(&Global_87675, 3);
				func_214();
			}
			else if (func_20(Local_68, Local_68.f_2, &Local_68.f_451, 1)) {
				player::set_all_random_peds_flee(player::player_id(), 1);
				func_213();
				func_215();
				iLocal_53 = 12;
				iLocal_60 = 5;
				func_214();
			}
			else if (func_1(Local_68.f_470, 8)) {
				if (!func_1(Local_68.f_470, 32)) {
					if (!ped::is_ped_injured(Local_68.f_2) && func_1(Local_68.f_470, 4)) {
						ai::task_play_anim(Local_68.f_2, "misscommon@response", "numbnuts", 8f, -8f, -1, 0, 0, 0, 0, 0);
					}
					iLocal_53 = 36;
					func_15(1, 0);
					func_213();
					func_282(&Local_68.f_470, 32);
				}
			}
		}
		break;

	case 3:
		if (iLocal_53 >= 13) {
			if (!audio::is_ambient_speech_playing(player::player_ped_id()) &&
				!audio::is_ambient_speech_playing(Local_68.f_2)) {
				iLocal_53 = 15;
				iLocal_58 = 5;
				iLocal_62 = 12;
				iLocal_60 = 4;
			}
		}
		break;

	case 4:
		if (func_20(Local_68, Local_68.f_2, &Local_68.f_451, 1) && func_291()) {
			func_215();
			if (Local_68.f_2.f_12) {
				iLocal_53 = 22;
			}
			else {
				iLocal_53 = 16;
			}
			iLocal_60 = 5;
		}
		break;

	case 5:
		if (Local_68.f_486 >= 0) {
			if (func_20(Local_68, Local_68.f_2, &Local_68.f_451, 1) && func_291()) {
				if (ped::is_synchronized_scene_running(Local_68.f_486) && !Local_68.f_467) {
					iLocal_53 = 33;
					Local_68.f_467 = 1;
				}
			}
		}
		if (iLocal_55 >= 1 && iLocal_55 < 7) {
			player::clear_player_has_damaged_at_least_one_ped(player::get_player_index());
			if (func_211(Local_68.f_2, 0, 1, 0, 1, 1) || !ped::is_synchronized_scene_running(Local_68.f_486)) {
				iLocal_60 = 6;
			}
		}
		break;

	case 6:
		if (iLocal_56 != 3 && iLocal_56 != 4) {
			iLocal_56 = 4;
		}
		gameplay::clear_bit(&Global_87675, 3);
		if (!ped::is_ped_ragdoll(Local_68.f_2)) {
			func_6();
			iLocal_60 = 0;
		}
		break;

	case 7:
		if (!ped::is_ped_ragdoll(Local_68.f_2)) {
			func_210();
			iLocal_53 = 36;
			func_15(1, 0);
			func_282(&Local_68.f_470, 32);
			iLocal_58 = 7;
			iLocal_60 = 8;
		}
		break;

	case 8:
		if (func_20(Local_68, Local_68.f_2, &Local_68.f_451, 1) || func_180(Local_68.f_2, &Local_68.f_451))
			&&func_291() && iVar0 != joaat("weapon_unarmed") {
				if (!Local_68.f_2.f_12) {
					iLocal_53 = 10;
					iLocal_60 = 9;
				}
				else {
					func_18();
					iLocal_53 = 11;
					iLocal_60 = 0;
				}
				Local_68.f_2.f_13 = 0;
			}
		break;

	case 9:
		func_6();
		iLocal_60 = 12;
		break;

	case 10:
		if (func_20(Local_68, Local_68.f_2, &Local_68.f_451, 1) || func_180(Local_68.f_2, &Local_68.f_451))
			&&func_291() && iVar0 != joaat("weapon_unarmed") && !func_14(&Local_68.f_480) {
				func_11(&Local_68.f_480);
				if (ped::is_ped_ragdoll(Local_68.f_2)) {
					func_6();
				}
				iLocal_53 = 23;
			}
		else if (func_40(&Local_68.f_480) > 10f) {
			if (!ped::is_ped_injured(Local_68.f_2)) {
				ai::task_smart_flee_ped(Local_68.f_2, player::player_ped_id(), 100f, -1, 0, 0);
			}
			iLocal_60 = 12;
		}
		break;

	case 11:
		func_209();
		iLocal_60 = 12;
		break;
	}
}

// Position - 0xD4DC
void func_209() {
	if (!entity::is_entity_dead(Local_68.f_2, 0)) {
		ped::set_blocking_of_non_temporary_events(Local_68.f_2, 0);
	}
}

// Position - 0xD4FA
void func_210() {
	if (!entity::is_entity_dead(Local_68.f_2, 0)) {
		ai::task_look_at_entity(Local_68.f_2, Local_68, -1, 0, 2);
	}
}

// Position - 0xD51C
int func_211(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;
	int iVar1;

	if (iParam3) {
		if (!bLocal_45) {
			iLocal_46 = entity::get_entity_health(iParam0);
			bLocal_45 = true;
		}
		iLocal_47 = entity::get_entity_health(iParam0);
		iLocal_48 = iLocal_46 - iLocal_47;
		iVar0 = player::get_players_last_vehicle();
		if (!entity::is_entity_dead(iVar0, 0)) {
			if (entity::has_entity_been_damaged_by_entity(iParam0, iVar0, 1)) {
				if (IntToFloat(iLocal_48) > 100f) {
					return 1;
				}
			}
		}
		if (bLocal_45) {
			if (entity::has_entity_been_damaged_by_entity(iParam0, player::player_ped_id(), 1)) {
				if (IntToFloat(iLocal_48) > 100f) {
					return 1;
				}
			}
		}
	}
	else if (entity::has_entity_been_damaged_by_entity(iParam0, player::player_ped_id(), 1)) {
		return 1;
	}
	if (!iParam3) {
		iVar1 = player::get_players_last_vehicle();
		if (!entity::is_entity_dead(iVar1, 0)) {
			if (entity::has_entity_been_damaged_by_entity(iParam0, iVar1, 1)) {
				return 1;
			}
		}
	}
	if (iParam4) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			if (ped::is_ped_being_jacked(iParam0)) {
				if (ped::get_peds_jacker(iParam0) == player::player_ped_id()) {
					return 1;
				}
			}
		}
	}
	if (iParam5) {
		if (ped::is_ped_in_melee_combat(player::player_ped_id())) {
			if (entity::is_entity_at_coord(iParam0, entity::get_entity_coords(player::player_ped_id(), 1), 10f, 10f,
										   10f, 0, 1, 0)) {
				if (player::has_player_damaged_at_least_one_ped(player::player_id())) {
					return 1;
				}
			}
		}
	}
	if (ped::is_ped_performing_stealth_kill(player::player_ped_id())) {
		if (ped::was_ped_killed_by_stealth(iParam0)) {
			return 1;
		}
	}
	if (func_212(player::player_ped_id(), iParam0)) {
		return 1;
	}
	if (iParam2) {
		if (ped::is_ped_ragdoll(iParam0) && func_181(iParam0, 1) < 1.5f) {
			return 1;
		}
		else if (ped::is_ped_in_any_vehicle(iParam0, 0)) {
			if (entity::is_entity_touching_entity(player::player_ped_id(), ped::get_vehicle_ped_is_in(iParam0, 0))) {
				return 1;
			}
		}
		else if (entity::is_entity_touching_entity(player::player_ped_id(), iParam0)) {
			return 1;
		}
		if (!entity::is_entity_dead(iParam1, 0)) {
			if (entity::has_entity_been_damaged_by_entity(iParam1, player::player_ped_id(), 1)) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0xD6E4
bool func_212(int iParam0, int iParam1) {
	int iVar0;

	weapon::get_current_ped_weapon(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan")) {
		if (ped::is_ped_shooting(iParam0)) {
			if (system::vdist(entity::get_entity_coords(iParam0, 1), entity::get_entity_coords(iParam1, 1)) < 2.5f) {
				if (ped::is_ped_facing_ped(iParam0, iParam1, 180f)) {
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0xD739
void func_213() {
	var uVar0[2];
	int iVar3;
	int iVar4;

	if (!entity::is_entity_dead(player::player_ped_id(), 0) && func_291()) {
		iVar3 = ped::get_ped_nearby_peds(player::player_ped_id(), &uVar0, -1);
		iVar4 = 0;
		while (iVar4 < iVar3) {
			if (uVar0[iVar4] != player::player_ped_id() && uVar0[iVar4] != Local_68.f_2 &&
				!ped::is_ped_injured(uVar0[iVar4]) && !entity::is_entity_a_mission_entity(uVar0[iVar4]) &&
				!ped::is_ped_in_combat(uVar0[iVar4], 0)) {
				entity::set_entity_as_mission_entity(uVar0[iVar4], 1, 1);
				ai::task_smart_flee_ped(uVar0[iVar4], player::player_ped_id(), 100f, -1, 0, 0);
			}
			iVar4++;
		}
	}
}

// Position - 0xD7F0
void func_214() {
	var uVar0[2];
	int iVar3;
	int iVar4;

	if (!entity::is_entity_dead(player::player_ped_id(), 0) && func_291()) {
		iVar3 = ped::get_ped_nearby_peds(player::player_ped_id(), &uVar0, -1);
		iVar4 = 0;
		while (iVar4 < iVar3) {
			if (uVar0[iVar4] != player::player_ped_id() && uVar0[iVar4] != Local_68.f_2 &&
				!entity::is_entity_a_mission_entity(uVar0[iVar4])) {
				entity::set_entity_as_mission_entity(uVar0[iVar4], 1, 1);
				ai::clear_sequence_task(&iLocal_566);
				ai::open_sequence_task(&iLocal_566);
				ai::task_cower(0, 5000);
				ai::task_smart_flee_ped(0, player::player_ped_id(), 100f, -1, 0, 0);
				ai::close_sequence_task(iLocal_566);
				ai::task_perform_sequence(uVar0[iVar4], iLocal_566);
			}
			iVar4++;
		}
	}
}

// Position - 0xD8AB
void func_215() {
	if (func_24(Local_68) == joaat("weapon_rpg")) {
		Local_68.f_458 = 1;
	}
	else if (func_24(Local_68) == joaat("weapon_knife")) {
		Local_68.f_459 = 1;
	}
	else if (func_24(Local_68) == joaat("weapon_hammer") || func_24(Local_68) == joaat("weapon_crowbar") ||
			 func_24(Local_68) == joaat("weapon_bat") || func_24(Local_68) == joaat("weapon_bottle")) {
		Local_68.f_460 = 1;
	}
	else if (func_24(Local_68) == joaat("weapon_grenade") || func_24(Local_68) == joaat("weapon_smokegrenade") ||
			 func_24(Local_68) == joaat("weapon_molotov")) {
		Local_68.f_461 = 1;
	}
	else if (func_24(Local_68) == joaat("weapon_stickybomb")) {
		Local_68.f_462 = 1;
	}
	iLocal_62 = 12;
	func_192();
	iLocal_61 = 2;
	iLocal_65 = 1;
	iLocal_64 = 6;
	Local_68.f_2.f_13 = 0;
}

// Position - 0xD997
void func_216() {
	if (iLocal_55 == 0) {
		if (!entity::is_entity_dead(Local_68.f_2, 0)) {
			switch (iLocal_58) {
			case 1: iLocal_58 = 0; break;

			case 2:
				ai::task_play_anim(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_17, 8f, -2f, -1, 0, 0, 0, 0, 0);
				iLocal_58 = 0;
				break;

			case 3:
				ai::task_play_anim(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_18, 8f, -4f, -1, 0, 0, 0, 0, 0);
				iLocal_58 = 0;
				break;

			case 4:
				ai::task_play_anim(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_19, 8f, -2f, -1, 0, 0, 0, 0, 0);
				iLocal_58 = 0;
				break;

			case 5:
				ai::task_play_anim(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_20, 8f, -2f, -1, 0, 0, 0, 0, 0);
				iLocal_58 = 0;
				break;

			case 6: iLocal_58 = 0; break;

			case 7:
				ai::task_play_anim(Local_68.f_2, Local_68.f_2.f_15, Local_68.f_2.f_21, 8f, -2f, -1, 0, 0, 0, 0, 0);
				iLocal_58 = 0;
				break;
			}
		}
	}
}

// Position - 0xDAC1
void func_217() {
	switch (iLocal_59) {
	case 1:
		func_210();
		iLocal_59 = 2;
		break;

	case 2:
		if (iLocal_55 == 2) {
			func_219();
			Local_68.f_2.f_13 = 0;
			iLocal_59 = 3;
		}
		if ((func_44() || func_43()) && !Local_68.f_2.f_13) {
			Local_68.f_2.f_13 = 1;
		}
		if (!Local_68.f_2.f_14) {
			if (!ped::is_ped_injured(Local_68.f_2) && ped::is_ped_fleeing(Local_68.f_2)) {
				Local_68.f_2.f_14 = 1;
			}
		}
		if (Local_68.f_2.f_13 && !ped::is_ped_injured(Local_68.f_2) && iLocal_60 != 12) {
			func_218();
		}
		break;

	case 3:
		if (iLocal_55 >= 7) {
			func_210();
			iLocal_59 = 4;
		}
		break;
	}
}

// Position - 0xDB87
void func_218() {
	if (gameplay::get_game_timer() - Local_68.f_2.f_10 > 5000) {
		ai::clear_sequence_task(&Local_68.f_2.f_24);
		ai::open_sequence_task(&Local_68.f_2.f_24);
		ai::task_turn_ped_to_face_entity(0, Local_68, 0);
		ai::task_look_at_entity(0, Local_68, -1, 0, 2);
		ai::close_sequence_task(Local_68.f_2.f_24);
		ai::task_perform_sequence(Local_68.f_2, Local_68.f_2.f_24);
		Local_68.f_2.f_10 = gameplay::get_game_timer();
	}
}

// Position - 0xDBE8
void func_219() {
	if (!entity::is_entity_dead(Local_68.f_2, 0)) {
		ai::task_clear_look_at(Local_68.f_2);
	}
}

// Position - 0xDC05
int func_220() {
	if (gameplay::is_bullet_in_angled_area(Local_68.f_186, Local_68.f_189, Local_68.f_192, 1)) {
		return 1;
	}
	return 0;
}

// Position - 0xDC2A
int func_221() {
	if (fire::is_explosion_in_angled_area(-1, Local_68.f_186, Local_68.f_189, Local_68.f_192)) {
		return 1;
	}
	return 0;
}

// Position - 0xDC4F
void func_222() {
	if (!Local_68.f_465) {
		if (func_223()) {
			if (!func_14(&Local_68.f_474)) {
				func_11(&Local_68.f_474);
			}
			else if (func_182(&Local_68.f_474, 1f)) {
				Local_68.f_465 = 1;
				iLocal_53 = 26;
				if (!ped::is_ped_injured(Local_68.f_2)) {
					ai::task_smart_flee_ped(Local_68.f_2, player::player_ped_id(), 100f, -1, 0, 0);
					func_15(1, 0);
				}
			}
		}
		else if (func_14(&Local_68.f_474)) {
			func_39(&Local_68.f_474);
		}
	}
}

// Position - 0xDCD5
bool func_223() {
	int iVar0;

	if (!entity::is_entity_dead(Local_68, 0)) {
		if (func_224()) {
			weapon::get_current_ped_weapon(Local_68, &iVar0, 1);
			if (iVar0 == joaat("weapon_petrolcan")) {
				if (ped::is_ped_shooting(Local_68)) {
					if (ped::is_ped_facing_ped(Local_68.f_2, Local_68, 180f)) {
						return true;
					}
				}
			}
		}
	}
	return false;
}

// Position - 0xDD23
bool func_224() {
	if (!entity::is_entity_dead(Local_68, 0)) {
		if (entity::is_entity_in_angled_area(Local_68, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, 1, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0xDD57
void func_225() {
	if (iLocal_60 != 12) {
		if (!entity::is_entity_dead(Local_68.f_2, 0)) {
			if (ped::is_ped_fleeing(Local_68.f_2)) {
				ai::task_smart_flee_ped(Local_68.f_2, Local_68, 100f, -1, 0, 0);
				iLocal_60 = 12;
				iLocal_59 = 4;
				iLocal_58 = 8;
				iLocal_62 = 15;
				if (iLocal_65 == 1) {
					iLocal_65 = 2;
				}
				else {
					iLocal_65 = 3;
				}
				iLocal_64 = 13;
				iLocal_53 = 27;
				if (!Local_68.f_2.f_14) {
					Local_68.f_2.f_14 = 1;
				}
			}
		}
	}
}

// Position - 0xDDC7
void func_226() {
	switch (iLocal_57) {
	case 1:
		if (Local_68.f_486 >= 0) {
			if (ped::is_synchronized_scene_running(Local_68.f_486)) {
				if (ped::get_synchronized_scene_phase(Local_68.f_486) > 0.876f) {
					iLocal_57 = 2;
				}
			}
		}
		break;

	case 2:
		if (Local_68.f_486 >= 0) {
			if (ped::is_synchronized_scene_running(Local_68.f_486)) {
				if (ped::get_synchronized_scene_phase(Local_68.f_486) > 0.894f ||
					ped::get_synchronized_scene_phase(Local_68.f_486) > 0.871f &&
						system::vdist2(entity::get_entity_coords(Local_68.f_28, 1),
									   entity::get_entity_coords(player::player_ped_id(), 1)) < 1f) {
					iLocal_57 = 3;
				}
			}
		}
		break;

	case 3:
		func_15(1, 0);
		func_227(0);
		object::_0x92AEFB5F6E294023(Local_68.f_28, 0, 0);
		iLocal_57 = 5;
		break;

	case 4:
		func_15(1, 0);
		func_227(1);
		entity::set_entity_visible(Local_68.f_28, 0, 0);
		iLocal_57 = 5;
		break;

	case 5:
		if (entity::is_entity_attached_to_entity(Local_68.f_28, player::player_ped_id())) {
			func_196(func_95(), 1, iLocal_569, 0, 0);
			entity::set_entity_visible(Local_68.f_28, 0, 0);
			if (ui::does_blip_exist(Local_68.f_28.f_2)) {
				ui::remove_blip(&Local_68.f_28.f_2);
			}
			if (iLocal_62 != 12) {
				iLocal_62 = 12;
			}
			func_186(297, 0, 0);
			Local_68.f_468 = 1;
			Local_68.f_28.f_6 = audio::get_sound_id();
			audio::play_sound_frontend(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
			func_12(&Local_68.f_28.f_15);
			iLocal_57 = 6;
		}
		else if (!entity::is_entity_dead(Local_68.f_28, 0) && entity::is_entity_visible(Local_68.f_28)) {
		}
		break;

	case 6:
		if (func_8(&Local_68.f_28.f_15) > 2.5f) {
			if (entity::does_entity_exist(Local_68.f_28) &&
				entity::is_entity_attached_to_entity(Local_68.f_28, player::player_ped_id())) {
				entity::detach_entity(player::player_ped_id(), 1, 1);
				object::delete_object(&Local_68.f_28);
			}
			iLocal_57 = 7;
		}
		break;
	}
}

// Position - 0xDFA0
void func_227(int iParam0) {
	Local_68.f_28.f_3 = 0;
	gameplay::set_bit(&Local_68.f_28.f_3, 3);
	gameplay::set_bit(&Local_68.f_28.f_3, 4);
	if (!iParam0) {
		iLocal_569 = gameplay::get_random_int_in_range(Local_68.f_28.f_4, Local_68.f_28.f_5);
		if (!ui::does_blip_exist(Local_68.f_28.f_2)) {
			Local_68.f_28.f_2 = func_230(Local_68.f_28);
			ui::set_blip_colour(Local_68.f_28.f_2, 2);
		}
		object::_0xA08FE5E49BDC39DD(Local_68.f_28, -0.2f, 1);
	}
	else {
		iLocal_569 = gameplay::get_random_int_in_range(50, Local_68.f_28.f_4);
		Local_68.f_28.f_1 =
			object::create_pickup(joaat("pickup_money_variable"), entity::get_entity_coords(Local_68.f_28, 1),
								  Local_68.f_28.f_3, iLocal_569, 1, 0);
		if (!ui::does_blip_exist(Local_68.f_28.f_2)) {
			Local_68.f_28.f_2 = func_228(Local_68.f_28.f_1);
		}
	}
	Local_68.f_28.f_14 = 1;
}

// Position - 0xE06D
int func_228(var *uParam0) {
	int iVar0;

	if (!object::does_pickup_exist(uParam0)) {
		return 0;
	}
	iVar0 = ui::add_blip_for_pickup(uParam0);
	ui::set_blip_scale(iVar0, func_229(network::network_is_game_in_progress(), 0.7f, 0.7f));
	return iVar0;
}

// Position - 0xE0A5
var func_229(bool bParam0, float fParam1, float fParam2) {
	if (bParam0) {
		return fParam1;
	}
	return fParam2;
}

// Position - 0xE0BC
int func_230(int iParam0) { return func_231(iParam0, 1, 0); }

// Position - 0xE0CC
int func_231(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	iVar0 = ui::add_blip_for_entity(iParam0);
	if (entity::is_entity_a_vehicle(iParam0)) {
		ui::set_blip_scale(iVar0, func_229(network::network_is_game_in_progress(), 1f, 1f));
		if (!iParam2) {
			ui::set_blip_as_friendly(iVar0, iParam1);
		}
		else {
			ui::set_blip_colour(iVar0, 2);
		}
	}
	else if (entity::is_entity_a_ped(iParam0)) {
		ui::set_blip_scale(iVar0, func_229(network::network_is_game_in_progress(), 0.7f, 0.7f));
		ui::set_blip_as_friendly(iVar0, iParam1);
	}
	else if (entity::is_entity_an_object(iParam0)) {
		ui::set_blip_scale(iVar0, func_229(network::network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

// Position - 0xE170
void func_232() {
	int iVar0;
	int iVar1;

	if (Local_68.f_464) {
		switch (iLocal_61) {
		case 2:
			if (func_1(Local_68.f_470, 4)) {
				func_236();
				Local_68.f_46.f_39 = gameplay::get_game_timer();
				iLocal_61 = 3;
			}
			break;

		case 3:
			if (gameplay::get_game_timer() - Local_68.f_46.f_39 > gameplay::get_random_int_in_range(1000, 3000)) {
				if (vehicle::is_vehicle_driveable(Local_68.f_46.f_4[0], 0)) {
					vehicle::set_vehicle_siren(Local_68.f_46.f_4[0], 1);
				}
				iLocal_61 = 4;
			}
			break;

		case 4:
			if (func_235() && func_234()) {
				iLocal_61 = 5;
			}
			break;

		case 5:
			iLocal_53 = 24;
			func_15(1, 0);
			iLocal_61 = 6;
			break;

		case 6:
			iVar0 = 0;
			while (iVar0 < 3) {
				if (ped::is_ped_injured(Local_68.f_46[iVar0]) ||
					!entity::is_entity_dead(Local_68.f_46[iVar0], 0) &&
						weapon::has_entity_been_damaged_by_weapon(Local_68.f_46[iVar0], 0, 2) ||
					ped::is_ped_injured(Local_68.f_2) ||
					!entity::is_entity_dead(Local_68.f_2, 0) &&
						weapon::has_entity_been_damaged_by_weapon(Local_68.f_2, 0, 2) ||
					func_20(Local_68, Local_68.f_2, &Local_68.f_451, 1)) {
					func_15(2, 0);
					iVar1 = 0;
					while (iVar1 < 3) {
						if (!ped::is_ped_injured(Local_68.f_46[iVar1])) {
							ai::task_combat_ped(Local_68.f_46[iVar1], player::player_ped_id(), 0, 16);
							ped::set_blocking_of_non_temporary_events(Local_68.f_46[iVar1], 0);
						}
						iVar1++;
					}
					iLocal_61 = 0;
				}
				iVar0++;
			}
			break;

		case 7:
			func_233();
			iLocal_61 = 0;
			break;
		}
	}
}

// Position - 0xE312
void func_233() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		if (!entity::is_entity_dead(Local_68.f_46[iVar0], 0)) {
			ped::set_blocking_of_non_temporary_events(Local_68.f_46[iVar0], 0);
		}
		iVar0++;
	}
}

// Position - 0xE34A
int func_234() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		if (!entity::is_entity_dead(Local_68.f_46[iVar0], 0)) {
			if (!ped::is_ped_in_any_vehicle(Local_68.f_46[iVar0], 0)) {
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0xE38B
int func_235() {
	int iVar0;

	if (!entity::is_entity_dead(Local_68, 0)) {
		iVar0 = 0;
		while (iVar0 < 3) {
			if (!entity::is_entity_dead(Local_68.f_46[iVar0], 0)) {
				if (!entity::is_entity_occluded(Local_68.f_46[iVar0])) {
					return 1;
				}
			}
			if (!entity::is_entity_dead(Local_68.f_46.f_4[iVar0], 0)) {
				if (!entity::is_entity_occluded(Local_68.f_46.f_4[iVar0])) {
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

// Position - 0xE3FF
void func_236() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		Local_68.f_46[iVar0] =
			ped::create_ped(6, Local_68.f_46.f_26, Local_68.f_46.f_8[iVar0 /*3*/], Local_68.f_46.f_18[iVar0], 1, 1);
		entity::set_entity_as_mission_entity(Local_68.f_46[iVar0], 1, 0);
		ped::set_blocking_of_non_temporary_events(Local_68.f_46[iVar0], 1);
		Local_68.f_46.f_4[iVar0] = vehicle::create_vehicle(Local_68.f_46.f_27, Local_68.f_46.f_8[iVar0 /*3*/],
														   Local_68.f_46.f_18[iVar0], 1, 1);
		entity::set_entity_as_mission_entity(Local_68.f_46.f_4[iVar0], 1, 0);
		if (!(entity::is_entity_dead(Local_68.f_46[iVar0], 0) && entity::is_entity_dead(Local_68.f_46.f_4[iVar0], 0))) {
			ped::set_ped_into_vehicle(Local_68.f_46[iVar0], Local_68.f_46.f_4[iVar0], -1);
			weapon::give_weapon_to_ped(Local_68.f_46[iVar0], joaat("weapon_pistol"), 99, 0, 1);
		}
		ai::open_sequence_task(&Local_68.f_46.f_35[iVar0]);
		ai::task_vehicle_drive_to_coord(0, Local_68.f_46.f_4[iVar0], Local_68.f_46.f_22,
										vehicle::_0x53AF99BAA671CA47(Local_68.f_46.f_4[iVar0]) - 8f, 1,
										Local_68.f_46.f_27, 786981, Local_68.f_46.f_25, -1f);
		ai::task_leave_any_vehicle(0, 0, 0);
		ai::task_aim_gun_at_entity(0, Local_68, -1, 0);
		ai::close_sequence_task(Local_68.f_46.f_35[iVar0]);
		ai::task_perform_sequence(Local_68.f_46[iVar0], Local_68.f_46.f_35[iVar0]);
		iVar0++;
	}
}

// Position - 0xE56B
void func_237() {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(Local_68)) {
		weapon::get_current_ped_weapon(Local_68, &iVar0, 1);
	}
	else {
		return;
	}
	iVar1 = 0;
	switch (iLocal_62) {
	case 1: iLocal_62 = 6; break;

	case 2:
		iLocal_53 = 2;
		iLocal_62 = 5;
		break;

	case 3:
		iLocal_53 = 3;
		iLocal_62 = 5;
		break;

	case 4:
		iLocal_53 = 4;
		iLocal_62 = 5;
		break;

	case 5:
		if (func_24(Local_68) != joaat("weapon_unarmed") && iVar0 != joaat("weapon_bat") &&
			iVar0 != joaat("weapon_hammer") && iVar0 != joaat("weapon_crowbar") && iVar0 != joaat("weapon_bottle") &&
			func_291()) {
			iLocal_62 = 7;
		}
		break;

	case 6:
		if (func_24(Local_68) != joaat("weapon_unarmed") && func_291()) {
			if (iVar0 == joaat("weapon_bat")) {
				iLocal_62 = 8;
			}
			else if (iVar0 == joaat("weapon_crowbar") || iVar0 == joaat("weapon_hammer") ||
					 iVar0 == joaat("weapon_bottle")) {
				iLocal_62 = 9;
			}
			else if (iVar0 == joaat("weapon_stickybomb")) {
				iLocal_62 = 10;
			}
			else if (iVar0 != joaat("weapon_petrolcan") && iVar0 != joaat("object") &&
					 iVar0 != joaat("weapon_briefcase")) {
				iLocal_62 = 7;
			}
		}
		break;

	case 7:
		iLocal_53 = 5;
		iLocal_58 = 3;
		iLocal_62 = 15;
		break;

	case 8:
		iLocal_53 = 2;
		iLocal_58 = 2;
		iLocal_62 = 5;
		break;

	case 9:
		iLocal_53 = 3;
		iLocal_58 = 2;
		iLocal_62 = 5;
		break;

	case 10:
		iLocal_53 = 4;
		iLocal_58 = 2;
		iLocal_62 = 5;
		break;

	case 11:
		if (func_20(Local_68, Local_68.f_2, &Local_68.f_451, 1)) {
			func_215();
			iLocal_60 = 5;
		}
		break;

	case 12:
		if (!func_291()) {
			if (!Local_68.f_464) {
				iLocal_64 = 9;
				iLocal_62 = 15;
			}
			else {
				iLocal_62 = 13;
			}
		}
		break;

	case 13:
		if (entity::get_entity_speed(Local_68) < 0.1f && !func_239()) {
			func_238();
			iLocal_62 = 14;
		}
		else if (func_239() && !func_291()) {
			iLocal_62 = 14;
		}
		break;

	case 14:
		if (func_239() && !func_291()) {
			iVar1 = 0;
			while (iVar1 < 3) {
				if (!ped::is_ped_injured(Local_68.f_46[iVar1])) {
					ai::task_combat_ped(Local_68.f_46[iVar1], player::player_ped_id(), 0, 16);
					ped::set_blocking_of_non_temporary_events(Local_68.f_46[iVar1], 0);
				}
				iVar1++;
			}
			iLocal_64 = 9;
			iLocal_62 = 15;
		}
		break;
	}
}

// Position - 0xE7FB
void func_238() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		if (!entity::is_entity_dead(Local_68.f_46[iVar0], 0)) {
			if (!ai::is_ped_running_arrest_task(Local_68.f_46[iVar0])) {
				ai::clear_ped_tasks(Local_68.f_46[iVar0]);
				ai::task_arrest_ped(Local_68.f_46[iVar0], Local_68);
			}
		}
		iVar0++;
	}
}

// Position - 0xE850
int func_239() {
	if (!entity::is_entity_dead(Local_68, 0)) {
		if (entity::is_entity_in_angled_area(Local_68, Local_68.f_46.f_28, Local_68.f_46.f_31, Local_68.f_46.f_34, 0, 1,
											 0)) {
			return 0;
		}
	}
	return 1;
}

// Position - 0xE88A
void func_240() {
	switch (iLocal_65) {
	case 0:
		if (!iLocal_581) {
			if (func_241()) {
				iLocal_53 = 9;
				iLocal_60 = 7;
				iLocal_52 = 3;
				iLocal_64 = 13;
				iLocal_65 = 3;
				iLocal_581 = 1;
			}
		}
		break;

	case 1: break;
	}
}

// Position - 0xE8CE
bool func_241() {
	int iVar0;
	vector3 vVar1;

	if (entity::does_entity_exist(Local_68)) {
		weapon::get_current_ped_weapon(Local_68, &iVar0, 1);
	}
	else {
		return false;
	}
	if (!func_1(Local_68.f_470, 128)) {
		if (ped::is_ped_ragdoll(Local_68.f_2) ||
			entity::has_entity_been_damaged_by_entity(Local_68.f_2, Local_68, 1) && iVar0 == joaat("weapon_unarmed") ||
			func_242(Local_68.f_2, Local_68.f_2.f_1, 1) > 1.15f) {
			if (ped::is_ped_ragdoll(Local_68.f_2)) {
			}
			if (entity::has_entity_been_damaged_by_entity(Local_68.f_2, Local_68, 1) &&
				iVar0 == joaat("weapon_unarmed")) {
			}
			if (func_242(Local_68.f_2, Local_68.f_2.f_1, 1) > 1.15f) {
			}
			if (!entity::is_entity_at_coord(Local_68.f_2, Local_68.f_2.f_1, 0.35f, 0.35f, 1f, 0, 1, 0)) {
				vVar1 = {entity::get_entity_coords(Local_68.f_2, 1)};
				vVar1 = {Local_68.f_2.f_1};
			}
			return true;
		}
	}
	return false;
}

// Position - 0xE9C5
float func_242(int iParam0, vector3 vParam1, int iParam4) {
	vector3 vVar0;

	if (!entity::is_entity_dead(iParam0, 0)) {
		vVar0 = {entity::get_entity_coords(iParam0, 1)};
	}
	else {
		vVar0 = {entity::get_entity_coords(iParam0, 0)};
	}
	return gameplay::get_distance_between_coords(vVar0, vParam1, iParam4);
}

// Position - 0xE9FF
void func_243() {
	switch (iLocal_63) {
	case 0:
		if (func_271()) {
			iLocal_63 = 1;
		}
		break;

	case 1:
		func_264();
		iLocal_63 = 2;
		break;

	case 2:
		func_260();
		iLocal_63 = 3;
		break;

	case 3:
		if (func_255()) {
			iLocal_63 = 4;
		}
		break;

	case 4:
		func_244();
		player::clear_player_has_damaged_at_least_one_ped(player::player_id());
		iLocal_67 = 1;
		break;
	}
}

// Position - 0xEA6C
void func_244() {
	func_248();
	func_247();
	func_246();
	if (interior::is_valid_interior(Local_68.f_185)) {
		interior::_0x82EBB79E258FA2B7(Local_68.f_2, Local_68.f_185);
		interior::_0x82EBB79E258FA2B7(Local_68.f_28, Local_68.f_185);
		if (!iLocal_574) {
			interior::_0x82EBB79E258FA2B7(Local_68.f_96.f_1, Local_68.f_185);
		}
	}
	func_245();
}

// Position - 0xEABF
void func_245() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;

	iVar0 = gameplay::get_random_int_in_range(1, 11);
	iVar1 = gameplay::get_random_int_in_range(1, 5);
	iVar2 = gameplay::get_random_int_in_range(1, 5);
	iVar3 = gameplay::get_random_int_in_range(1, 3);
	iVar4 = gameplay::get_random_int_in_range(1, 6);
	iVar5 = gameplay::get_random_int_in_range(1, 4);
	iVar6 = gameplay::get_random_int_in_range(1, 5);
	iVar7 = gameplay::get_random_int_in_range(1, 4);
	iVar8 = gameplay::get_random_int_in_range(1, 4);
	iVar9 = gameplay::get_random_int_in_range(1, 5);
	iVar10 = gameplay::get_random_int_in_range(1, 5);
	iVar11 = gameplay::get_random_int_in_range(1, 5);
	iVar12 = gameplay::get_random_int_in_range(1, 5);
	iVar13 = gameplay::get_random_int_in_range(1, 9);
	iVar14 = gameplay::get_random_int_in_range(1, 3);
	iVar15 = gameplay::get_random_int_in_range(1, 5);
	iVar16 = gameplay::get_random_int_in_range(1, 3);
	iVar17 = gameplay::get_random_int_in_range(1, 6);
	iVar18 = gameplay::get_random_int_in_range(1, 5);
	iVar19 = gameplay::get_random_int_in_range(1, 4);
	iVar20 = gameplay::get_random_int_in_range(1, 4);
	iVar21 = gameplay::get_random_int_in_range(1, 4);
	iVar22 = gameplay::get_random_int_in_range(1, 6);
	iVar23 = gameplay::get_random_int_in_range(1, 6);
	iVar24 = gameplay::get_random_int_in_range(1, 6);
	iVar25 = gameplay::get_random_int_in_range(1, 6);
	iVar26 = gameplay::get_random_int_in_range(1, 4);
	iVar27 = gameplay::get_random_int_in_range(1, 3);
	iVar28 = gameplay::get_random_int_in_range(1, 4);
	iVar29 = gameplay::get_random_int_in_range(1, 4);
	if (func_95() == 0) {
		switch (iVar12) {
		case 1: Local_68.f_221.f_210 = "OJSR_HOLDUP_1"; break;

		case 2: Local_68.f_221.f_210 = "OJSR_HOLDUP_2"; break;

		case 3: Local_68.f_221.f_210 = "OJSR_HOLDUP_3"; break;

		case 4: Local_68.f_221.f_210 = "OJSR_HOLDUP_4"; break;
		}
		switch (iVar20) {
		case 1: Local_68.f_221.f_220 = "OJSR_COPS_1"; break;

		case 2: Local_68.f_221.f_220 = "OJSR_COPS_2"; break;

		case 3: Local_68.f_221.f_220 = "OJSR_COPS_3"; break;
		}
		switch (iVar27) {
		case 1: Local_68.f_221.f_227 = "OJSR_PLRHUR_1"; break;

		case 2: Local_68.f_221.f_227 = "OJSR_PLRHUR_2"; break;
		}
	}
	else if (func_95() == 1) {
		switch (iVar12) {
		case 1: Local_68.f_221.f_210 = "OJSR_HOLDUP_5"; break;

		case 2: Local_68.f_221.f_210 = "OJSR_HOLDUP_6"; break;

		case 3: Local_68.f_221.f_210 = "OJSR_HOLDUP_7"; break;

		case 4: Local_68.f_221.f_210 = "OJSR_HOLDUP_8"; break;
		}
		switch (iVar20) {
		case 1: Local_68.f_221.f_220 = "OJSR_COPS_5"; break;

		case 2: Local_68.f_221.f_220 = "OJSR_COPS_6"; break;

		case 3: Local_68.f_221.f_220 = "OJSR_COPS_7"; break;
		}
		switch (iVar27) {
		case 1: Local_68.f_221.f_227 = "OJSR_PLRHUR_3"; break;

		case 2: Local_68.f_221.f_227 = "OJSR_PLRHUR_4"; break;
		}
	}
	else if (func_95() == 2) {
		switch (iVar12) {
		case 1: Local_68.f_221.f_210 = "OJSR_HOLDUP_9"; break;

		case 2: Local_68.f_221.f_210 = "OJSR_HOLDUP_10"; break;

		case 3: Local_68.f_221.f_210 = "OJSR_HOLDUP_11"; break;

		case 4: Local_68.f_221.f_210 = "OJSR_HOLDUP_12"; break;
		}
		switch (iVar20) {
		case 1: Local_68.f_221.f_220 = "OJSR_COPS_9"; break;

		case 2: Local_68.f_221.f_220 = "OJSR_COPS_10"; break;

		case 3: Local_68.f_221.f_220 = "OJSR_COPS_11"; break;
		}
		switch (iVar27) {
		case 1: Local_68.f_221.f_227 = "OJSR_PLRHUR_5"; break;

		case 2: Local_68.f_221.f_227 = "OJSR_PLRHUR_6"; break;
		}
	}
	switch (iVar0) {
	case 1: Local_68.f_221.f_198 = "OJSR_GREET_1"; break;

	case 2: Local_68.f_221.f_198 = "OJSR_GREET_2"; break;

	case 3: Local_68.f_221.f_198 = "OJSR_GREET_3"; break;

	case 4: Local_68.f_221.f_198 = "OJSR_GREET_4"; break;

	case 5: Local_68.f_221.f_198 = "OJSR_GREET_5"; break;

	case 6: Local_68.f_221.f_198 = "OJSR_GREET_6"; break;

	case 7: Local_68.f_221.f_198 = "OJSR_GREET_7"; break;

	case 8: Local_68.f_221.f_198 = "OJSR_GREET_8"; break;

	case 9: Local_68.f_221.f_198 = "OJSR_GREET_9"; break;

	case 10: Local_68.f_221.f_198 = "OJSR_GREET_10"; break;
	}
	switch (iVar1) {
	case 1: Local_68.f_221.f_199 = "OJSR_BATEQ_1"; break;

	case 2: Local_68.f_221.f_199 = "OJSR_BATEQ_2"; break;

	case 3: Local_68.f_221.f_199 = "OJSR_BATEQ_3"; break;

	case 4: Local_68.f_221.f_199 = "OJSR_BATEQ_4"; break;
	}
	switch (iVar2) {
	case 1: Local_68.f_221.f_200 = "OJSR_TOOLEQ_1"; break;

	case 2: Local_68.f_221.f_200 = "OJSR_TOOLEQ_2"; break;

	case 3: Local_68.f_221.f_200 = "OJSR_TOOLEQ_3"; break;

	case 4: Local_68.f_221.f_200 = "OJSR_TOOLEQ_4"; break;
	}
	switch (iVar3) {
	case 1: Local_68.f_221.f_201 = "OJSR_STICKEQ_1"; break;

	case 2: Local_68.f_221.f_201 = "OJSR_STICKEQ_2"; break;
	}
	switch (iVar4) {
	case 1: Local_68.f_221.f_202 = "OJSR_WORRY_1"; break;

	case 2: Local_68.f_221.f_202 = "OJSR_WORRY_2"; break;

	case 3: Local_68.f_221.f_202 = "OJSR_WORRY_3"; break;

	case 4: Local_68.f_221.f_202 = "OJSR_WORRY_4"; break;

	case 5: Local_68.f_221.f_202 = "OJSR_WORRY_5"; break;
	}
	switch (iVar5) {
	case 1: Local_68.f_221.f_203 = "OJSR_SHOCK_1"; break;

	case 2: Local_68.f_221.f_203 = "OJSR_SHOCK_2"; break;

	case 3: Local_68.f_221.f_203 = "OJSR_SHOCK_3"; break;
	}
	switch (iVar6) {
	case 1: Local_68.f_221.f_204 = "OJSR_STUBBRN_1"; break;

	case 2: Local_68.f_221.f_204 = "OJSR_STUBBRN_2"; break;

	case 3: Local_68.f_221.f_204 = "OJSR_STUBBRN_3"; break;

	case 4: Local_68.f_221.f_204 = "OJSR_STUBBRN_4"; break;
	}
	switch (iVar7) {
	case 1: Local_68.f_221.f_205 = "OJSR_COUNTER_1"; break;

	case 2: Local_68.f_221.f_205 = "OJSR_COUNTER_2"; break;

	case 3: Local_68.f_221.f_205 = "OJSR_COUNTER_3"; break;
	}
	switch (iVar8) {
	case 1: Local_68.f_221.f_206 = "OJSR_BACKRM_1"; break;

	case 2: Local_68.f_221.f_206 = "OJSR_BACKRM_2"; break;

	case 3: Local_68.f_221.f_206 = "OJSR_BACKRM_3"; break;
	}
	switch (iVar9) {
	case 1: Local_68.f_221.f_207 = "OJSR_BUMP_1"; break;

	case 2: Local_68.f_221.f_207 = "OJSR_BUMP_2"; break;

	case 3: Local_68.f_221.f_207 = "OJSR_BUMP_3"; break;

	case 4: Local_68.f_221.f_207 = "OJSR_BUMP_4"; break;
	}
	switch (iVar10) {
	case 1: Local_68.f_221.f_208 = "OJSR_BPAIM_1"; break;

	case 2: Local_68.f_221.f_208 = "OJSR_BPAIM_2"; break;

	case 3: Local_68.f_221.f_208 = "OJSR_BPAIM_3"; break;

	case 4: Local_68.f_221.f_208 = "OJSR_BPAIM_4"; break;
	}
	switch (iVar11) {
	case 1: Local_68.f_221.f_209 = "OJSR_BPAIMAG_1"; break;

	case 2: Local_68.f_221.f_209 = "OJSR_BPAIMAG_2"; break;

	case 3: Local_68.f_221.f_209 = "OJSR_BPAIMAG_3"; break;

	case 4: Local_68.f_221.f_209 = "OJSR_BPAIMAG_4"; break;
	}
	switch (iVar13) {
	case 1: Local_68.f_221.f_211 = "OJSR_SCARED_1"; break;

	case 2: Local_68.f_221.f_211 = "OJSR_SCARED_2"; break;

	case 3: Local_68.f_221.f_211 = "OJSR_SCARED_3"; break;

	case 4: Local_68.f_221.f_211 = "OJSR_SCARED_4"; break;

	case 5: Local_68.f_221.f_211 = "OJSR_SCARED_5"; break;

	case 6: Local_68.f_221.f_211 = "OJSR_SCARED_6"; break;

	case 7: Local_68.f_221.f_211 = "OJSR_SCARED_7"; break;

	case 8: Local_68.f_221.f_211 = "OJSR_SCARED_8"; break;
	}
	switch (iVar14) {
	case 1: Local_68.f_221.f_213 = "OJSR_SCARED_9"; break;

	case 2: Local_68.f_221.f_213 = "OJSR_SCARED_10"; break;
	}
	switch (iVar15) {
	case 1: Local_68.f_221.f_216 = "OJSR_GRANAIM_1"; break;

	case 2: Local_68.f_221.f_216 = "OJSR_GRANAIM_2"; break;

	case 3: Local_68.f_221.f_216 = "OJSR_GRANAIM_3"; break;

	case 4: Local_68.f_221.f_216 = "OJSR_GRANAIM_4"; break;
	}
	switch (iVar16) {
	case 1: Local_68.f_221.f_217 = "OJSR_STICAIM_1"; break;

	case 2: Local_68.f_221.f_217 = "OJSR_STICAIM_2"; break;
	}
	switch (iVar17) {
	case 1: Local_68.f_221.f_212 = "OJSR_BRAVE_1"; break;

	case 2: Local_68.f_221.f_212 = "OJSR_BRAVE_2"; break;

	case 3: Local_68.f_221.f_212 = "OJSR_BRAVE_3"; break;

	case 4: Local_68.f_221.f_212 = "OJSR_BRAVE_4"; break;

	case 5: Local_68.f_221.f_212 = "OJSR_BRAVE_5"; break;
	}
	switch (iVar18) {
	case 1: Local_68.f_221.f_218 = "OJSR_MOREAIM_1"; break;

	case 2: Local_68.f_221.f_218 = "OJSR_MOREAIM_2"; break;

	case 3: Local_68.f_221.f_218 = "OJSR_MOREAIM_3"; break;

	case 4: Local_68.f_221.f_218 = "OJSR_MOREAIM_4"; break;
	}
	switch (iVar19) {
	case 1: Local_68.f_221.f_219 = "OJSR_SURNDER_1"; break;

	case 2: Local_68.f_221.f_219 = "OJSR_SURNDER_2"; break;

	case 3: Local_68.f_221.f_219 = "OJSR_SURNDER_3"; break;
	}
	switch (iVar21) {
	case 1: Local_68.f_221.f_221 = "OJSR_POURCAN_1"; break;

	case 2: Local_68.f_221.f_221 = "OJSR_POURCAN_2"; break;

	case 3: Local_68.f_221.f_221 = "OJSR_POURCAN_3"; break;
	}
	switch (iVar22) {
	case 1: Local_68.f_221.f_222 = "OJSR_FLEE_1"; break;

	case 2: Local_68.f_221.f_222 = "OJSR_FLEE_2"; break;

	case 3: Local_68.f_221.f_222 = "OJSR_FLEE_3"; break;

	case 4: Local_68.f_221.f_222 = "OJSR_FLEE_4"; break;

	case 5: Local_68.f_221.f_222 = "OJSR_FLEE_5"; break;
	}
	switch (iVar23) {
	case 1: Local_68.f_221.f_223 = "OJSR_RECSCAR_1"; break;

	case 2: Local_68.f_221.f_223 = "OJSR_RECSCAR_2"; break;

	case 3: Local_68.f_221.f_223 = "OJSR_RECSCAR_3"; break;

	case 4: Local_68.f_221.f_223 = "OJSR_RECSCAR_4"; break;

	case 5: Local_68.f_221.f_223 = "OJSR_RECSCAR_5"; break;
	}
	switch (iVar24) {
	case 1: Local_68.f_221.f_224 = "OJSR_RECAGGR_1"; break;

	case 2: Local_68.f_221.f_224 = "OJSR_RECAGGR_2"; break;

	case 3: Local_68.f_221.f_224 = "OJSR_RECAGGR_3"; break;

	case 4: Local_68.f_221.f_224 = "OJSR_RECAGGR_4"; break;

	case 5: Local_68.f_221.f_224 = "OJSR_RECAGGR_5"; break;
	}
	switch (iVar25) {
	case 1: Local_68.f_221.f_225 = "OJSR_CSTMER_1"; break;

	case 2: Local_68.f_221.f_225 = "OJSR_CSTMER_2"; break;

	case 3: Local_68.f_221.f_225 = "OJSR_CSTMER_3"; break;

	case 4: Local_68.f_221.f_225 = "OJSR_CSTMER_4"; break;

	case 5: Local_68.f_221.f_225 = "OJSR_CSTMER_5"; break;
	}
	switch (iVar26) {
	case 1: Local_68.f_221.f_226 = "OJSR_MOSC_1"; break;

	case 2: Local_68.f_221.f_226 = "OJSR_MOSC_2"; break;

	case 3: Local_68.f_221.f_226 = "OJSR_MOSC_3"; break;
	}
	switch (iVar28) {
	case 1: Local_68.f_221.f_228 = "OJSR_BUY_1"; break;

	case 2: Local_68.f_221.f_228 = "OJSR_BUY_2"; break;

	case 3: Local_68.f_221.f_228 = "OJSR_BUY_3"; break;
	}
	switch (iVar29) {
	case 1: Local_68.f_221.f_229 = "OJSR_STEAL_1"; break;

	case 2: Local_68.f_221.f_229 = "OJSR_STEAL_2"; break;

	case 3: Local_68.f_221.f_229 = "OJSR_STEAL_3"; break;
	}
	Local_68.f_221.f_166 = "OJSRAUD";
	Local_68.f_221.f_167 = "OJSR_GREET";
	Local_68.f_221.f_168 = "OJSR_BATEQ";
	Local_68.f_221.f_169 = "OJSR_TOOLEQ";
	Local_68.f_221.f_170 = "OJSR_STICKEQ";
	Local_68.f_221.f_171 = "OJSR_WORRY";
	Local_68.f_221.f_172 = "OJSR_SHOCK";
	Local_68.f_221.f_173 = "OJSR_STUBBRN";
	Local_68.f_221.f_174 = "OJSR_COUNTER";
	Local_68.f_221.f_175 = "OJSR_BACKRM";
	Local_68.f_221.f_176 = "OJSR_BUMP";
	Local_68.f_221.f_177 = "OJSR_BPAIM";
	Local_68.f_221.f_178 = "OJSR_BPAIMAG";
	Local_68.f_221.f_179 = "OJSR_HOLDUP";
	Local_68.f_221.f_180 = "OJSR_SCARED";
	Local_68.f_221.f_181 = "OJSR_KNIFAIM";
	Local_68.f_221.f_182 = "OJSR_TOOLAIM";
	Local_68.f_221.f_183 = "OJSR_GRANAIM";
	Local_68.f_221.f_184 = "OJSR_STICAIM";
	Local_68.f_221.f_185 = "OJSR_BRAVE";
	Local_68.f_221.f_186 = "OJSR_MOREAIM";
	Local_68.f_221.f_187 = "OJSR_SURNDER";
	Local_68.f_221.f_188 = "OJSR_COPS";
	Local_68.f_221.f_189 = "OJSR_POURCAN";
	Local_68.f_221.f_190 = "OJSR_FLEE";
	Local_68.f_221.f_191 = "OJSR_RECSCAR";
	Local_68.f_221.f_192 = "OJSR_RECAGGR";
	Local_68.f_221.f_193 = "OJSR_CSTMER";
	Local_68.f_221.f_194 = "OJSR_MOSC";
	Local_68.f_221.f_195 = "OJSR_PLRHUR";
	Local_68.f_221.f_196 = "OJSR_BUY";
	Local_68.f_221.f_197 = "OJSR_STEAL";
	iLocal_579 = 0;
	iLocal_580 = 0;
	iLocal_581 = 0;
}

// Position - 0xF84A
void func_246() {
	entity::create_model_hide(Local_68.f_486.f_6, 0.5f, 303280717, 1);
	entity::create_model_hide(Local_68.f_486.f_6, 0.5f, joaat("prop_till_02"), 1);
	entity::create_model_hide(Local_68.f_486.f_6, 0.5f, joaat("prop_till_03"), 1);
	Local_68.f_96.f_1 = object::create_object(Local_68.f_96, Local_68.f_486.f_6, 1, 1, 0);
	entity::set_entity_heading(Local_68.f_96.f_1, Local_68.f_96.f_5);
	entity::freeze_entity_position(Local_68.f_96.f_1, 1);
}

// Position - 0xF8CF
void func_247() {
	Local_68.f_28 = object::create_portable_pickup(joaat("pickup_portable_crate_unfixed"), Local_68.f_28.f_7, 0,
												   Local_68.f_28.f_13);
	entity::set_entity_rotation(Local_68.f_28, Local_68.f_28.f_10, 2, 1);
	entity::set_entity_visible(Local_68.f_28, 0, 0);
	object::_0x92AEFB5F6E294023(Local_68.f_28, 1, 0);
	Local_68.f_28.f_14 = 0;
}

// Position - 0xF920
void func_248() {
	int *iVar0;
	int *iVar1;

	Local_68.f_2 = ped::create_ped(4, Local_68.f_2.f_5, Local_68.f_2.f_1, Local_68.f_2.f_4, 1, 1);
	func_254(iLocal_568, &iVar1, &iVar0);
	ped::set_ped_component_variation(Local_68.f_2, 0, iVar1, iVar0, 0);
	func_253(&iVar1, &iVar0);
	ped::set_ped_component_variation(Local_68.f_2, 2, iVar1, iVar0, 0);
	func_252(&iVar1, &iVar0);
	ped::set_ped_component_variation(Local_68.f_2, 3, iVar1, iVar0, 0);
	func_251(&iVar1, &iVar0);
	ped::set_ped_component_variation(Local_68.f_2, 4, iVar1, iVar0, 0);
	func_250(&iVar1, &iVar0);
	ped::set_ped_component_variation(Local_68.f_2, 8, iVar1, iVar0, 0);
	ped::set_blocking_of_non_temporary_events(Local_68.f_2, 1);
	if (Local_68.f_2.f_12) {
		func_249();
	}
}

// Position - 0xF9CF
void func_249() {
	if (!entity::is_entity_dead(Local_68.f_2, 0)) {
	}
}

// Position - 0xF9E4
void func_250(int *iParam0, int *iParam1) {
	*iParam0 = gameplay::get_random_int_in_range(0, 2);
	if (*iParam0 == 0) {
		*iParam1 = gameplay::get_random_int_in_range(0, 2);
	}
	else {
		*iParam1 = 0;
	}
}

// Position - 0xFA0C
void func_251(int *iParam0, int *iParam1) {
	*iParam0 = 0;
	*iParam1 = gameplay::get_random_int_in_range(0, 2);
}

// Position - 0xFA21
void func_252(int *iParam0, int *iParam1) {
	*iParam0 = gameplay::get_random_int_in_range(0, 2);
	*iParam1 = gameplay::get_random_int_in_range(0, 3);
}

// Position - 0xFA3B
void func_253(int *iParam0, int *iParam1) {
	*iParam0 = gameplay::get_random_int_in_range(0, 3);
	if (*iParam0 > 0) {
		*iParam1 = gameplay::get_random_int_in_range(0, 2);
	}
	else {
		*iParam1 = 0;
	}
}

// Position - 0xFA63
void func_254(int iParam0, int *iParam1, var *uParam2) {
	switch (iParam0) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
		*iParam1 = 0;
		*uParam2 = gameplay::get_random_int_in_range(0, 3);
		break;

	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
		*iParam1 = 1;
		*uParam2 = 0;
		break;

	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
		*iParam1 = 2;
		*uParam2 = gameplay::get_random_int_in_range(0, 3);
		break;
	}
}

// Position - 0xFB0F
bool func_255() {
	if (!func_256(&Local_584)) {
		return false;
	}
	if (!iLocal_574) {
		if (!streaming::has_anim_dict_loaded(Local_68.f_2.f_15)) {
			return false;
		}
	}
	if (!interior::is_interior_ready(Local_68.f_185)) {
		return false;
	}
	gameplay::_0x6F2135B6129620C1(0);
	return true;
}

// Position - 0xFB55
int func_256(var *uParam0) {
	int iVar0;

	if (!uParam0->f_31) {
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15) {
		if (gameplay::is_bit_set((*uParam0)[iVar0 /*2*/], 30)) {
			if (!gameplay::is_bit_set((*uParam0)[iVar0 /*2*/], 29)) {
				return 0;
			}
			if (!func_257(&(*uParam0)[iVar0 /*2*/])) {
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

// Position - 0xFBB7
int func_257(var *uParam0) { return func_258(*uParam0, "NULL", uParam0->f_1); }

// Position - 0xFBCC
int func_258(int iParam0, char *sParam1, int iParam2) {
	if (gameplay::is_bit_set(iParam0, 30)) {
		if (gameplay::is_bit_set(iParam0, 29)) {
			switch (func_259(iParam0)) {
			case 0: return streaming::has_model_loaded(iParam2);

			case 1: return streaming::has_anim_dict_loaded(sParam1);

			case 2: return streaming::has_clip_set_loaded(sParam1);

			case 3: return graphics::has_streamed_texture_dict_loaded(sParam1);

			case 4: return vehicle::has_vehicle_recording_been_loaded(iParam2, sParam1);

			case 5: return ai::get_is_waypoint_recording_loaded(sParam1);

			case 6: return audio::request_script_audio_bank(sParam1, gameplay::is_bit_set(iParam0, 27), -1);

			case 7: return script::has_script_with_name_hash_loaded(iParam2);

			case 8: return ui::has_additional_text_loaded(iParam2);

			case 9: return streaming::has_ptfx_asset_loaded();

			default: break;
			}
		}
		else {
			return 0;
		}
	}
	return 0;
}

// Position - 0xFCC0
int func_259(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10) {
		if (gameplay::is_bit_set(iParam0, iVar0)) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0xFCEC
void func_260() {
	gameplay::_0x6F2135B6129620C1(1);
	if (!iLocal_574) {
		streaming::request_anim_dict(Local_68.f_2.f_15);
		Local_584.f_32 = gameplay::get_frame_count();
	}
	func_261(&Local_584, Local_68.f_2.f_5);
	func_261(&Local_584, Local_68.f_28.f_13);
	func_261(&Local_584, Local_68.f_96);
	Local_68.f_466 = 1;
}

// Position - 0xFD3E
void func_261(var *uParam0, int iParam1) { func_262(uParam0, 0, iParam1, 0); }

// Position - 0xFD50
void func_262(var *uParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	if (!func_263(iParam1)) {
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15) {
		if (gameplay::is_bit_set((*uParam0)[iVar0 /*2*/], 30)) {
			if (gameplay::is_bit_set((*uParam0)[iVar0 /*2*/], iParam1)) {
				if (iParam2 != -1) {
					if ((*uParam0)[iVar0 /*2*/].f_1 == iParam2) {
						return;
					}
				}
				if (iParam1 == 9) {
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_31) {
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15) {
		if (!gameplay::is_bit_set((*uParam0)[iVar0 /*2*/], 30)) {
			(*uParam0)[iVar0 /*2*/].f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			gameplay::set_bit(&(*uParam0)[iVar0 /*2*/], iParam1);
			gameplay::set_bit(&(*uParam0)[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

// Position - 0xFE13
int func_263(int iParam0) {
	switch (iParam0) {
	case -1: return 0;

	case 0: return 1;

	case 1: return 0;

	case 2: return 0;

	case 3: return 0;

	case 4: return 0;

	case 5: return 0;

	case 6: return 0;

	case 7: return 1;

	case 8: return 0;

	case 9: return 1;
	}
	return 0;
}

// Position - 0xFEB2
void func_264() {
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	func_269(iLocal_568, &Local_68.f_46.f_8, &Local_68.f_46.f_18, &Local_68.f_46.f_22, &Local_68.f_46.f_25,
			 &Local_68.f_46.f_26, &Local_68.f_46.f_27, &Local_68.f_46.f_28, &Local_68.f_46.f_31, &Local_68.f_46.f_34);
	func_267(iLocal_568);
	vVar0 = {-3244.573f, 1000.658f, 12.83f};
	fVar9 = 175.074f;
	vVar3 = {-3242.008f, 1001.202f, 11.83071f};
	vVar6 = {vVar3 - vVar0};
	vVar6 = {func_294(vVar6, fVar9)};
	vVar3 = {-3245.088f, 1001.468f, 13.65071f};
	vVar6 = {vVar3 - vVar0};
	vVar6 = {func_294(vVar6, fVar9)};
	vVar3 = {-3243.37f, 1000.37f, 12.83f};
	vVar6 = {vVar3 - vVar0};
	vVar6 = {func_294(vVar6, fVar9)};
	Local_68.f_469 = -1;
	Local_68.f_102.f_22 = -1;
	Local_68.f_96 = joaat("p_till_01_s");
	Local_68.f_96.f_2 = {Local_68.f_486.f_6};
	Local_68.f_96.f_5 = Local_68.f_486.f_9.f_2 + 180f;
	Local_68.f_451.f_3 = 0;
	Local_68.f_458 = 0;
	Local_68.f_459 = 0;
	Local_68.f_460 = 0;
	Local_68.f_461 = 0;
	Local_68.f_462 = 0;
	Local_68.f_465 = 0;
	func_266(iLocal_568, &Local_68.f_2.f_6, &Local_68.f_2.f_9);
	func_265();
}

// Position - 0x10023
void func_265() {
	Local_68.f_86.f_1 = joaat("a_m_y_soucent_04");
	Local_68.f_86.f_2 = {-1224.15f, -907.2f, 12.33f};
	Local_68.f_86.f_5 = 2f;
}

// Position - 0x10054
void func_266(int iParam0, var *uParam1, float *fParam2) {
	switch (iParam0) {
	case 0:
		*uParam1 = {-709.7998f, -907.1352f, 18.2156f};
		*fParam2 = 291.6504f;
		break;

	case 1:
		*uParam1 = {-41.8128f, -1749.685f, 28.421f};
		*fParam2 = 214.6526f;
		break;

	case 2:
		*uParam1 = {1159.682f, -314.254f, 68.2051f};
		*fParam2 = 232.6337f;
		break;

	case 3:
		*uParam1 = {1707.303f, 4918.31f, 41.0636f};
		*fParam2 = 24.9178f;
		break;

	case 4:
		*uParam1 = {-1828.907f, 799.6096f, 137.1776f};
		*fParam2 = 247.1234f;
		break;

	case 5:
		*uParam1 = {1168.971f, 2719.118f, 36.0632f};
		*fParam2 = 136.5945f;
		break;

	case 6:
		*uParam1 = {-2962.983f, 391.9788f, 14.0433f};
		*fParam2 = 176.1174f;
		break;

	case 7:
		*uParam1 = {-1218.283f, -915.7103f, 10.3264f};
		*fParam2 = 43.8031f;
		break;

	case 8:
		*uParam1 = {1130.155f, -979.2816f, 45.4158f};
		*fParam2 = 269.2587f;
		break;

	case 9:
		*uParam1 = {-1479.163f, -375.0302f, 38.1633f};
		*fParam2 = 36.5415f;
		break;

	case 10:
		*uParam1 = {-3249.114f, 1006.558f, 11.8307f};
		*fParam2 = 191.594f;
		break;

	case 11:
		*uParam1 = {-3047.512f, 588.9807f, 6.9089f};
		*fParam2 = 178.8753f;
		break;

	case 12:
		*uParam1 = {543.0796f, 2663.967f, 41.1565f};
		*fParam2 = 228.4295f;
		break;

	case 13:
		*uParam1 = {2549.85f, 387.1622f, 107.623f};
		*fParam2 = 197.2994f;
		break;

	case 14:
		*uParam1 = {2671.351f, 3283.136f, 54.2411f};
		*fParam2 = 296.5427f;
		break;

	case 15:
		*uParam1 = {1733.967f, 6421.495f, 34.0372f};
		*fParam2 = 130.9518f;
		break;

	case 16:
		*uParam1 = {1958.92f, 3746.267f, 31.3438f};
		*fParam2 = 73.6245f;
		break;

	case 17:
		*uParam1 = {30.5721f, -1339.782f, 28.4939f};
		*fParam2 = 110.7699f;
		break;

	case 18:
		*uParam1 = {376.2976f, 331.8158f, 102.5664f};
		*fParam2 = 52.0064f;
		break;

	case -2:
		*uParam1 = {1958.92f, 3746.267f, 31.3438f};
		*fParam2 = 73.6245f;
		break;
	}
}

// Position - 0x10333
void func_267(int iParam0) {
	vector3 vVar0;

	vVar0 = {func_268(Local_68.f_186, Local_68.f_189)};
	switch (iParam0) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4: Local_68.f_185 = interior::get_interior_at_coords_with_type(vVar0, "v_gasstation"); break;

	case 5:
	case 6:
	case 7:
	case 8:
	case 9: Local_68.f_185 = interior::get_interior_at_coords_with_type(vVar0, "v_gen_liquor"); break;

	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18: Local_68.f_185 = interior::get_interior_at_coords_with_type(vVar0, "v_shop_247"); break;
	}
}

// Position - 0x10401
Vector3 func_268(vector3 vParam0, vector3 vParam3) {
	vector3 vVar0;

	vVar0.x = (vParam0.x + vParam3.x) / 2f;
	vVar0.y = (vParam0.y + vParam3.y) / 2f;
	vVar0.z = (vParam0.z + vParam3.z) / 2f;
	return vVar0;
}

// Position - 0x10434
void func_269(int iParam0, var *uParam1, var *uParam2, var *uParam3, float *fParam4, int *iParam5, int *iParam6,
			  var *uParam7, var *uParam8, float *fParam9) {
	if (!func_270(iParam0)) {
		return;
	}
	switch (iParam0) {
	case 0:
		(*uParam1)[0 /*3*/] = {-677.0792f, -952.9478f, 20.4712f};
		(*uParam2)[0] = 90.5427f;
		(*uParam1)[1 /*3*/] = {-668.8872f, -961.7076f, 20.6313f};
		(*uParam2)[1] = 90.5427f;
		(*uParam1)[2 /*3*/] = {-749.7003f, -901.2264f, 19.6691f};
		(*uParam2)[2] = 170.7498f;
		*uParam3 = {-715.81f, -930.27f, 18.04f};
		*fParam4 = 8.81f;
		*uParam7 = {-714.079f, -918.088f, 18.196f};
		*uParam8 = {-709.079f, -918.166f, 22.196f};
		*fParam9 = 3.7f;
		*iParam5 = joaat("s_m_y_cop_01");
		*iParam6 = joaat("police");
		break;

	case 1:
		(*uParam1)[0 /*3*/] = {-133.86f, -1764.29f, 29.39f};
		(*uParam2)[0] = 297.87f;
		(*uParam1)[1 /*3*/] = {-63.16f, -1793.14f, 27.23f};
		(*uParam2)[1] = 50.66f;
		(*uParam1)[2 /*3*/] = {-56.5f, -1810.22f, 26.6f};
		(*uParam2)[2] = 50.67f;
		*uParam3 = {-68.92f, -1764.16f, 28.23f};
		*fParam4 = 9f;
		*uParam7 = {-55.922f, -1756.021f, 28.196f};
		*uParam8 = {-52.122f, -1759.271f, 32.196f};
		*fParam9 = 3.7f;
		*iParam5 = joaat("s_m_y_cop_01");
		*iParam6 = joaat("police");
		break;

	case 2:
		(*uParam1)[0 /*3*/] = {1103.004f, -378.3616f, 66.6258f};
		(*uParam2)[0] = 310.6741f;
		(*uParam1)[1 /*3*/] = {1186.703f, -289.3757f, 68.5913f};
		(*uParam2)[1] = 214.1061f;
		(*uParam1)[2 /*3*/] = {1251.639f, -371.6591f, 68.7078f};
		(*uParam2)[2] = 164.5987f;
		*uParam3 = {1161.84f, -339.25f, 67.29f};
		*fParam4 = 9.17f;
		*uParam7 = {1157.417f, -328.616f, 68.048f};
		*uParam8 = {1162.351f, -327.81f, 72.048f};
		*fParam9 = 3.7f;
		*iParam5 = joaat("s_m_y_cop_01");
		*iParam6 = joaat("police");
		break;

	case 3:
		(*uParam1)[0 /*3*/] = {1667.82f, 4916.04f, 41.71f};
		(*uParam2)[0] = 346.32f;
		(*uParam1)[1 /*3*/] = {1710.43f, 4963.03f, 43.92f};
		(*uParam2)[1] = 112.11f;
		(*uParam1)[2 /*3*/] = {1727.59f, 4986.13f, 46.4f};
		(*uParam2)[2] = 132.27f;
		*uParam3 = {1692.99f, 4939.56f, 41.16f};
		*fParam4 = 10f;
		*uParam7 = {1699.338f, 4932.104f, 41.083f};
		*uParam8 = {1696.313f, 4928.124f, 45.083f};
		*fParam9 = 3.7f;
		*iParam5 = joaat("s_m_y_cop_01");
		*iParam6 = joaat("police");
		break;

	case 4:
		(*uParam1)[0 /*3*/] = {-1862.436f, 732.8416f, 130.8709f};
		(*uParam2)[0] = 301.6958f;
		(*uParam1)[1 /*3*/] = {-1870.955f, 722.3616f, 129.6428f};
		(*uParam2)[1] = 300.6013f;
		(*uParam1)[2 /*3*/] = {-1711.103f, 873.6471f, 145.9411f};
		(*uParam2)[2] = 146.5694f;
		*uParam3 = {-1814.22f, 782.55f, 136.57f};
		*fParam4 = 7.24f;
		*uParam7 = {-1823.281f, 785.687f, 137.027f};
		*uParam8 = {-1819.465f, 788.918f, 141.027f};
		*fParam9 = 3.7f;
		*iParam5 = joaat("s_m_y_cop_01");
		*iParam6 = joaat("sheriff");
		break;

	case 5:
		(*uParam1)[0 /*3*/] = {1127.43f, 2680.61f, 38.02f};
		(*uParam2)[0] = 268.18f;
		(*uParam1)[1 /*3*/] = {1205.02f, 2687.1f, 37.34f};
		(*uParam2)[1] = 91.37f;
		(*uParam1)[2 /*3*/] = {1218.17f, 2677.4f, 37.27f};
		(*uParam2)[2] = 88.15f;
		*uParam3 = {1164.39f, 2683.2f, 37.06f};
		*fParam4 = 8.49f;
		*uParam7 = {1164.771f, 2702.528f, 38.162f};
		*uParam8 = {1167.771f, 2702.548f, 41.162f};
		*fParam9 = 3f;
		*iParam5 = joaat("s_m_y_cop_01");
		*iParam6 = joaat("sheriff");
		break;

	case 6:
		(*uParam1)[0 /*3*/] = {-3021.405f, 236.3884f, 15.6982f};
		(*uParam2)[0] = 354.8025f;
		(*uParam1)[1 /*3*/] = {-3021.883f, 207.4436f, 15.7511f};
		(*uParam2)[1] = 2.3146f;
		(*uParam1)[2 /*3*/] = {-3015.012f, 640.891f, 21.0514f};
		(*uParam2)[2] = 193.5162f;
		*uParam3 = {-2990.03f, 391.19f, 13.83f};
		*fParam4 = 9.41f;
		*uParam7 = {-2974.55f, 393.338f, 14.037f};
		*uParam8 = {-2975.084f, 388.366f, 18.037f};
		*fParam9 = 3.7f;
		*iParam5 = joaat("s_m_y_cop_01");
		*iParam6 = joaat("police");
		break;

	case 7:
		(*uParam1)[0 /*3*/] = {-1270.806f, -944.262f, 10.8025f};
		(*uParam2)[0] = 17.2662f;
		(*uParam1)[1 /*3*/] = {-1327.767f, -855.9691f, 16.4331f};
		(*uParam2)[1] = 216.1689f;
		(*uParam1)[2 /*3*/] = {-1155.798f, -862.4445f, 13.4857f};
		(*uParam2)[2] = 36.347f;
		*uParam3 = {-1233.36f, -891.39f, 11.35f};
		*fParam4 = 5.7f;
		*uParam7 = {-1225.2f, -899.881f, 11.275f};
		*uParam8 = {-1229.293f, -902.753f, 15.275f};
		*fParam9 = 3.7f;
		*iParam5 = joaat("s_m_y_cop_01");
		*iParam6 = joaat("police");
		break;

	case 8:
		(*uParam1)[0 /*3*/] = {1132.016f, -956.2646f, 47.2548f};
		(*uParam2)[0] = 278.2335f;
		(*uParam1)[1 /*3*/] = {1121.218f, -959.5676f, 46.788f};
		(*uParam2)[1] = 289.4738f;
		(*uParam1)[2 /*3*/] = {1236.959f, -1153.587f, 37.1736f};
		(*uParam2)[2] = 27.5191f;
		*uParam3 = {1154.17f, -979.23f, 45.36f};
		*fParam4 = 6.02f;
		*uParam7 = {1142.794f, -983.315f, 45.205f};
		*uParam8 = {1142.519f, -978.322f, 49.205f};
		*fParam9 = 3.7f;
		*iParam5 = joaat("s_m_y_cop_01");
		*iParam6 = joaat("police");
		break;

	case 9:
		(*uParam1)[0 /*3*/] = {-1525.77f, -389.17f, 41.39f};
		(*uParam2)[0] = 229.73f;
		(*uParam1)[1 /*3*/] = {-1537.28f, -378.84f, 43.02f};
		(*uParam2)[1] = 226.22f;
		(*uParam1)[2 /*3*/] = {-1475.06f, -418.35f, 35.71f};
		(*uParam2)[2] = 45.71f;
		*uParam3 = {-1502.71f, -400.39f, 38.41f};
		*fParam4 = 7.86f;
		*uParam7 = {-1493.544f, -382.617f, 38.994f};
		*uParam8 = {-1489.947f, -386.09f, 42.994f};
		*fParam9 = 3.7f;
		*iParam5 = joaat("s_m_y_cop_01");
		*iParam6 = joaat("police");
		break;

	case 10:
		(*uParam1)[0 /*3*/] = {-3218.999f, 1105.409f, 9.9489f};
		(*uParam2)[0] = 175.7402f;
		(*uParam1)[1 /*3*/] = {-3210.846f, 1114.875f, 9.8453f};
		(*uParam2)[1] = 152.4543f;
		(*uParam1)[2 /*3*/] = {-3201.518f, 920.3387f, 13.8887f};
		(*uParam2)[2] = 54.6774f;
		*uParam3 = {-3230.27f, 1003.54f, 11.31f};
		*fParam4 = 5.42f;
		*uParam7 = {-3238.442f, 1001.727f, 11.161f};
		*uParam8 = {-3238.268f, 1006.724f, 15.161f};
		*fParam9 = 3.7f;
		*iParam5 = joaat("s_m_y_cop_01");
		*iParam6 = joaat("police");
		break;

	case 11:
		(*uParam1)[0 /*3*/] = {-3061.218f, 658.6545f, 9.6541f};
		(*uParam2)[0] = 216.9221f;
		(*uParam1)[1 /*3*/] = {-3017.391f, 509.7967f, 6.7435f};
		(*uParam2)[1] = 348.3592f;
		(*uParam1)[2 /*3*/] = {-3029.232f, 521.1291f, 6.975f};
		(*uParam2)[2] = 337.5117f;
		*uParam3 = {-3027.51f, 594.25f, 6.87f};
		*fParam4 = 5.89f;
		*uParam7 = {-3036.615f, 587.625f, 6.818f};
		*uParam8 = {-3038.087f, 592.404f, 10.818f};
		*fParam9 = 3.7f;
		*iParam5 = joaat("s_m_y_cop_01");
		*iParam6 = joaat("sheriff");
		break;

	case 12:
		(*uParam1)[0 /*3*/] = {523.8614f, 2658.057f, 42.068f};
		(*uParam2)[0] = 2.8999f;
		(*uParam1)[1 /*3*/] = {471.6328f, 2657.835f, 42.9164f};
		(*uParam2)[1] = 329.1264f;
		(*uParam1)[2 /*3*/] = {656.9346f, 2731.927f, 41.5306f};
		(*uParam2)[2] = 183.28f;
		*uParam3 = {545.05f, 2684.96f, 41.3f};
		*fParam4 = 6.77f;
		*uParam7 = {546.505f, 2674.393f, 41.152f};
		*uParam8 = {541.547f, 2673.75f, 45.152f};
		*fParam9 = 3.7f;
		*iParam5 = joaat("s_m_y_cop_01");
		*iParam6 = joaat("sheriff");
		break;

	case 13:
		(*uParam1)[0 /*3*/] = {2593.841f, 273.2788f, 104.926f};
		(*uParam2)[0] = 345.1121f;
		(*uParam1)[1 /*3*/] = {2595.69f, 262.9971f, 104.2577f};
		(*uParam2)[1] = 350.3949f;
		(*uParam1)[2 /*3*/] = {2591.545f, 256.5517f, 103.7544f};
		(*uParam2)[2] = 343.9362f;
		*uParam3 = {2575.75f, 385.11f, 107.46f};
		*fParam4 = 11.61f;
		*uParam7 = {2560.435f, 382.891f, 107.626f};
		*uParam8 = {2560.67f, 387.886f, 111.626f};
		*fParam9 = 3.7f;
		*iParam5 = joaat("s_m_y_cop_01");
		*iParam6 = joaat("sheriff");
		break;

	case 14:
		(*uParam1)[0 /*3*/] = {2672.64f, 3259.44f, 54.87f};
		(*uParam2)[0] = 324.3f;
		(*uParam1)[1 /*3*/] = {2703.37f, 3294.47f, 55.31f};
		(*uParam2)[1] = 152.87f;
		(*uParam1)[2 /*3*/] = {2699.45f, 3299.76f, 55.35f};
		(*uParam2)[2] = 152.55f;
		*uParam3 = {2691.41f, 3275.22f, 54.24f};
		*fParam4 = 7.56f;
		*uParam7 = {2681.77f, 3279.805f, 54.245f};
		*uParam8 = {2684.297f, 3284.12f, 58.245f};
		*fParam9 = 3.7f;
		*iParam5 = joaat("s_m_y_cop_01");
		*iParam6 = joaat("sheriff");
		break;

	case 15:
		(*uParam1)[0 /*3*/] = {1740.035f, 6378.202f, 35.0341f};
		(*uParam2)[0] = 81.6255f;
		(*uParam1)[1 /*3*/] = {1755.786f, 6375.046f, 36.2501f};
		(*uParam2)[1] = 76.057f;
		(*uParam1)[2 /*3*/] = {1752.839f, 6367.344f, 36.135f};
		(*uParam2)[2] = 75.9713f;
		*uParam3 = {1725.56f, 6400.85f, 33.42f};
		*fParam4 = 7.09f;
		*uParam7 = {1728.266f, 6411.254f, 34.006f};
		*uParam8 = {1732.739f, 6409.022f, 38.006f};
		*fParam9 = 3.7f;
		*iParam5 = joaat("s_m_y_cop_01");
		*iParam6 = joaat("sheriff");
		break;

	case 16:
		(*uParam1)[0 /*3*/] = {1942.142f, 3738.897f, 31.9693f};
		(*uParam2)[0] = 210.3384f;
		(*uParam1)[1 /*3*/] = {2024.891f, 3780.588f, 31.9156f};
		(*uParam2)[1] = 210.1552f;
		(*uParam1)[2 /*3*/] = {1879.631f, 3673.292f, 33.1966f};
		(*uParam2)[2] = 302.2257f;
		*uParam3 = {1968.55f, 3731.03f, 31.36f};
		*fParam4 = 6.12f;
		*uParam7 = {1963.491f, 3738.337f, 31.324f};
		*uParam8 = {1967.792f, 3740.886f, 35.324f};
		*fParam9 = 3.7f;
		*iParam5 = joaat("s_m_y_cop_01");
		*iParam6 = joaat("police");
		break;

	case 17:
		(*uParam1)[0 /*3*/] = {73.57f, -1359.63f, 28.96f};
		(*uParam2)[0] = 93.85f;
		(*uParam1)[1 /*3*/] = {77.26f, -1364.69f, 28.97f};
		(*uParam2)[1] = 88.25f;
		(*uParam1)[2 /*3*/] = {-17.95f, -1366.03f, 28.97f};
		(*uParam2)[2] = 267.29f;
		*uParam3 = {30.98f, -1362.09f, 28.33f};
		*fParam4 = 6f;
		*uParam7 = {27.296f, -1350.255f, 28.33232f};
		*uParam8 = {30.795f, -1350.308f, 30.82019f};
		*fParam9 = 3f;
		*iParam5 = joaat("s_m_y_cop_01");
		*iParam6 = joaat("police");
		break;

	case 18:
		(*uParam1)[0 /*3*/] = {424.9115f, 314.1133f, 102.622f};
		(*uParam2)[0] = 155.4277f;
		(*uParam1)[1 /*3*/] = {439.6049f, 292.7892f, 102.5935f};
		(*uParam2)[1] = 74.6758f;
		(*uParam1)[2 /*3*/] = {275.961f, 331.2577f, 105.1467f};
		(*uParam2)[2] = 250.7508f;
		*uParam3 = {372.79f, 313f, 102.47f};
		*fParam4 = 3.94f;
		*uParam7 = {373.907f, 322.739f, 102.439f};
		*uParam8 = {378.778f, 321.61f, 106.439f};
		*fParam9 = 3.7f;
		*iParam5 = joaat("s_m_y_cop_01");
		*iParam6 = joaat("police");
		break;
	}
}

// Position - 0x112AA
int func_270(int iParam0) {
	if (iParam0 >= 19) {
		return 0;
	}
	else if (iParam0 <= -1) {
		return 0;
	}
	return 1;
}

// Position - 0x112CB
bool func_271() {
	vector3 vVar0;

	if (!entity::is_entity_dead(Local_68, 0)) {
		vVar0 = {entity::get_entity_coords(Local_68, 1)};
		if (gameplay::get_distance_between_coords(vVar0, Local_68.f_181, 1) < 50f) {
			return true;
		}
	}
	return false;
}

// Position - 0x11306
void func_272() {
	if (Local_68.f_46.f_26 != 0) {
		streaming::set_model_as_no_longer_needed(Local_68.f_46.f_26);
	}
	if (Local_68.f_46.f_27 != 0) {
		streaming::set_model_as_no_longer_needed(Local_68.f_46.f_27);
	}
	if (!gameplay::is_string_null_or_empty(Local_68.f_2.f_15)) {
		streaming::remove_anim_dict(Local_68.f_2.f_15);
	}
}

// Position - 0x1134E
bool func_273() {
	if (Global_101700.f_8044) {
		if (!func_277(56)) {
			return true;
		}
	}
	if (func_276()) {
		return true;
	}
	if (!brain::is_world_point_within_brain_activation_range()) {
		return true;
	}
	if (func_293() && !func_292()) {
		return true;
	}
	if (func_275() && func_274()) {
		return true;
	}
	if (Global_25192) {
		ui::clear_help(1);
		script::terminate_this_thread();
	}
	return false;
}

// Position - 0x113BE
bool func_274() { return Global_101418 > 0; }

// Position - 0x113CC
int func_275() {
	if (Global_88746 != -1) {
		return 1;
	}
	return 0;
}

// Position - 0x113E1
bool func_276() {
	vector3 vVar0;
	float fVar3;

	if (!entity::is_entity_dead(Local_68, 0)) {
		vVar0 = {entity::get_entity_coords(Local_68, 1)};
		fVar3 = gameplay::get_distance_between_coords(vVar0, Local_68.f_181, 1);
		if (fVar3 > Local_68.f_184) {
			return true;
		}
	}
	return false;
}

// Position - 0x1141F
int func_277(int iParam0) {
	if (iParam0 == 146 || iParam0 == -1) {
		return 0;
	}
	return Global_101700.f_8044.f_99.f_58[iParam0];
}

// Position - 0x1144C
void func_278(var *uParam0) {
	int iVar0;

	if (uParam0->f_31) {
		if (gameplay::get_frame_count() >= uParam0->f_32 + uParam0->f_33 ||
			gameplay::is_bit_set(Global_91491.f_20, 2) || gameplay::is_bit_set(Global_91491.f_20, 13)) {
			iVar0 = 0;
			while (iVar0 < 15) {
				if (gameplay::is_bit_set((*uParam0)[iVar0 /*2*/], 30)) {
					if (!gameplay::is_bit_set((*uParam0)[iVar0 /*2*/], 29)) {
						func_279(&(*uParam0)[iVar0 /*2*/]);
						uParam0->f_32 = gameplay::get_frame_count();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

// Position - 0x114D6
void func_279(int *iParam0) { func_280(iParam0, "NULL", iParam0->f_1); }

// Position - 0x114EA
void func_280(int *iParam0, char *sParam1, int iParam2) {
	if (gameplay::is_bit_set(*iParam0, 30)) {
		switch (func_259(*iParam0)) {
		case 0: streaming::request_model(iParam2); break;

		case 1: streaming::request_anim_dict(sParam1); break;

		case 2: streaming::request_clip_set(sParam1); break;

		case 3: graphics::request_streamed_texture_dict(sParam1, gameplay::is_bit_set(*iParam0, 28)); break;

		case 4: vehicle::request_vehicle_recording(iParam2, sParam1); break;

		case 5: ai::request_waypoint_recording(sParam1); break;

		case 6: audio::request_script_audio_bank(sParam1, gameplay::is_bit_set(*iParam0, 27), -1); break;

		case 7: script::request_script_with_name_hash(iParam2); break;

		case 8: ui::request_additional_text(sParam1, iParam2); break;

		case 9: streaming::request_ptfx_asset(); break;

		default: break;
		}
		gameplay::set_bit(iParam0, 29);
	}
}

// Position - 0x115C4
int func_281() {
	int iVar0;

	if (Local_68.f_1 != Global_101700.f_18994.f_62[iLocal_568]) {
		return 1;
	}
	iVar0 = time::get_clock_day_of_month() - Global_101700.f_18994.f_42[iLocal_568];
	iLocal_573 = 2;
	if (iVar0 < 0) {
		iVar0 = time::get_clock_day_of_month() + 31;
		iVar0 -= Global_101700.f_18994.f_42[iLocal_568];
	}
	if (iVar0 < iLocal_573) {
		return 0;
	}
	return 1;
}

// Position - 0x1162F
void func_282(var *uParam0, int iParam1) { func_283(uParam0, iParam1); }

// Position - 0x1163F
void func_283(var *uParam0, var uParam1) { *uParam0 |= uParam1; }

// Position - 0x11650
int func_284(int iParam0, float fParam1, var *uParam2, var *uParam3) {
	switch (iParam0) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
		*uParam2 = {object::_get_object_offset_from_coords(func_285(iParam0), fParam1, 5.95155f, -8.251f, -0.2377f)};
		*uParam3 = {object::_get_object_offset_from_coords(func_285(iParam0), fParam1, -12.7268f, 7.21174f, 2.93854f)};
		break;

	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
		*uParam2 = {
			object::_get_object_offset_from_coords(func_285(iParam0), fParam1, -6.52428f, -8.8002f, -0.657398f)};
		*uParam3 = {object::_get_object_offset_from_coords(func_285(iParam0), fParam1, 3.54253f, 16.8382f, 3.20474f)};
		break;

	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
		*uParam2 = {object::_get_object_offset_from_coords(func_285(iParam0), fParam1, -4.55363f, -7.52366f, -0.75f)};
		*uParam3 = {object::_get_object_offset_from_coords(func_285(iParam0), fParam1, 11.8868f, 7.00122f, 3.9688f)};
		break;
	}
	return 1;
}

// Position - 0x11795
Vector3 func_285(int iParam0) {
	if (!func_270(iParam0)) {
		return 0f, 0f, 0f;
	}
	switch (iParam0) {
	case 0: return -711.8212f, -915.9057f, 18.2377f;

	case 1: return -52.7185f, -1756.175f, 28.4432f;

	case 2: return 1159.441f, -325.6666f, 68.2272f;

	case 3: return 1699.429f, 4928.642f, 41.0858f;

	case 4: return -1822.926f, 788.9531f, 137.212f;

	case 5: return 1166.427f, 2703.528f, 37.1574f;

	case 6: return -2973.414f, 390.6885f, 14.0433f;

	case 7: return -1225.86f, -903.5782f, 11.3263f;

	case 8: return 1140.659f, -981.0806f, 45.4158f;

	case 9: return -1490.275f, -382.8514f, 39.1634f;

	case 10: return -3240.719f, 1004.508f, 11.8468f;

	case 11: return -3039.249f, 589.3831f, 6.9251f;

	case 12: return 544.4275f, 2672.061f, 41.1726f;

	case 13: return 2558.754f, 385.599f, 107.6391f;

	case 14: return 2681.511f, 3282.763f, 54.2573f;

	case 15: return 1731.153f, 6411.633f, 34.0373f;

	case 16: return 1964.931f, 3741.207f, 31.3599f;

	case 17: return 29.0707f, -1348.773f, 28.5101f;

	case 18: return 376.8503f, 323.9777f, 102.5825f;

	default:
	}
	return 0f, 0f, 0f;
}

// Position - 0x1197F
bool func_286() {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = time::get_clock_hours() - Global_101700.f_18994.f_21[iLocal_568];
	iVar1 = time::get_clock_day_of_month() - Global_101700.f_18994.f_42[iLocal_568];
	iLocal_572 = 2;
	if (iVar0 < 0) {
		iVar0 = time::get_clock_hours() + 24;
		iVar0 -= Global_101700.f_18994.f_21[iLocal_568];
		iVar2 = 1;
	}
	if (iVar0 < iLocal_572 && iVar1 == 0 || iVar0 < iLocal_572 && iVar2) {
		return true;
	}
	return false;
}

// Position - 0x11A06
void func_287(int iParam0) {
	int iVar0;
	var *uVar1[2];
	var *uVar4[2];
	vector3 vVar7[2];

	func_288(iLocal_568, &uVar1, &uVar4, &vVar7);
	if (!func_1(Local_68.f_470, 64)) {
		if (!object::_does_door_exist(uVar1[iVar0])) {
			object::add_door_to_system(uVar1[0], uVar4[0], vVar7[0 /*3*/], 0, 0, 0);
			if (uVar1[1] != -1) {
				object::add_door_to_system(uVar1[1], uVar4[1], vVar7[1 /*3*/], 0, 0, 0);
			}
		}
		func_282(&Local_68.f_470, 64);
	}
	iVar0 = 0;
	while (iVar0 < 2) {
		if (object::_does_door_exist(uVar1[iVar0])) {
			if (iParam0) {
				if (object::_0x160AA1B32F6139B8(uVar1[iVar0]) != 1) {
					object::_set_door_acceleration_limit(uVar1[iVar0], 1, 0, 0);
				}
			}
			else if (object::_0x160AA1B32F6139B8(uVar1[iVar0]) != 0) {
				object::_set_door_acceleration_limit(uVar1[iVar0], 0, 0, 0);
			}
		}
		iVar0++;
	}
}

// Position - 0x11AF1
void func_288(int iParam0, var *uParam1, var *uParam2, var *uParam3) {
	switch (iParam0) {
	case 0:
		(*uParam1)[0] = gameplay::get_hash_key("eCRIM_HUP_GAS_2A");
		(*uParam2)[0] = joaat("v_ilev_gasdoor");
		(*uParam3)[0 /*3*/] = {-713.07f, -916.54f, 19.37f};
		(*uParam1)[1] = gameplay::get_hash_key("eCRIM_HUP_GAS_2B");
		(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
		(*uParam3)[1 /*3*/] = {-710.47f, -916.54f, 19.37f};
		break;

	case 1:
		(*uParam1)[0] = gameplay::get_hash_key("eCRIM_HUP_GAS_3A");
		(*uParam2)[0] = joaat("v_ilev_gasdoor");
		(*uParam3)[0 /*3*/] = {-53.96f, -1755.72f, 29.57f};
		(*uParam1)[1] = gameplay::get_hash_key("eCRIM_HUP_GAS_3B");
		(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
		(*uParam3)[1 /*3*/] = {-51.97f, -1757.39f, 29.57f};
		break;

	case 2:
		(*uParam1)[0] = gameplay::get_hash_key("eCRIM_HUP_GAS_4A");
		(*uParam2)[0] = joaat("v_ilev_gasdoor");
		(*uParam3)[0 /*3*/] = {1158.36f, -326.82f, 69.36f};
		(*uParam1)[1] = gameplay::get_hash_key("eCRIM_HUP_GAS_4B");
		(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
		(*uParam3)[1 /*3*/] = {1160.93f, -326.36f, 69.36f};
		break;

	case 3:
		(*uParam1)[0] = gameplay::get_hash_key("eCRIM_HUP_GAS_1A");
		(*uParam2)[0] = joaat("v_ilev_gasdoor");
		(*uParam3)[0 /*3*/] = {1699.66f, 4930.28f, 42.21f};
		(*uParam1)[1] = gameplay::get_hash_key("eCRIM_HUP_GAS_1B");
		(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
		(*uParam3)[1 /*3*/] = {1698.17f, 4928.15f, 42.21f};
		break;

	case 4:
		(*uParam1)[0] = gameplay::get_hash_key("eCRIM_HUP_GAS_5A");
		(*uParam2)[0] = joaat("v_ilev_gasdoor");
		(*uParam3)[0 /*3*/] = {-1823.28f, 787.37f, 138.36f};
		(*uParam1)[1] = gameplay::get_hash_key("eCRIM_HUP_GAS_5B");
		(*uParam2)[1] = joaat("v_ilev_gasdoor_r");
		(*uParam3)[1 /*3*/] = {-1821.37f, 789.13f, 138.31f};
		break;

	case 5:
		(*uParam1)[0] = gameplay::get_hash_key("eCRIM_HUP_LIQUOR_1A");
		(*uParam2)[0] = -1212951353;
		(*uParam3)[0 /*3*/] = {1167.13f, 2703.75f, 38.3f};
		(*uParam1)[1] = -1;
		break;

	case 6:
		(*uParam1)[0] = gameplay::get_hash_key("eCRIM_HUP_LIQUOR_2A");
		(*uParam2)[0] = -1212951353;
		(*uParam3)[0 /*3*/] = {-2973.53f, 390.14f, 15.19f};
		(*uParam1)[1] = -1;
		break;

	case 7:
		(*uParam1)[0] = gameplay::get_hash_key("eCRIM_HUP_LIQUOR_3A");
		(*uParam2)[0] = -1212951353;
		(*uParam3)[0 /*3*/] = {-1226.89f, -903.12f, 12.47f};
		(*uParam1)[1] = -1;
		break;

	case 8:
		(*uParam1)[0] = gameplay::get_hash_key("eCRIM_HUP_LIQUOR_4A");
		(*uParam2)[0] = -1212951353;
		(*uParam3)[0 /*3*/] = {1141.04f, -980.32f, 46.56f};
		(*uParam1)[1] = -1;
		break;

	case 9:
		(*uParam1)[0] = gameplay::get_hash_key("eCRIM_HUP_LIQUOR_5A");
		(*uParam2)[0] = -1212951353;
		(*uParam3)[0 /*3*/] = {-1490.41f, -383.85f, 40.31f};
		(*uParam1)[1] = -1;
		break;

	case 10:
		(*uParam1)[0] = gameplay::get_hash_key("eCRIM_HUP_SHOP247_3A");
		(*uParam2)[0] = joaat("v_ilev_247door");
		(*uParam3)[0 /*3*/] = {-3240.13f, 1003.16f, 12.98f};
		(*uParam1)[1] = gameplay::get_hash_key("eCRIM_HUP_SHOP247_3B");
		(*uParam2)[1] = joaat("v_ilev_247door_r");
		(*uParam3)[1 /*3*/] = {-3239.9f, 1005.75f, 12.98f};
		break;

	case 11:
		(*uParam1)[0] = gameplay::get_hash_key("eCRIM_HUP_SHOP247_2A");
		(*uParam2)[0] = joaat("v_ilev_247door");
		(*uParam3)[0 /*3*/] = {-3038.22f, 588.29f, 8.06f};
		(*uParam1)[1] = gameplay::get_hash_key("eCRIM_HUP_SHOP247_2B");
		(*uParam2)[1] = joaat("v_ilev_247door_r");
		(*uParam3)[1 /*3*/] = {-3039.01f, 590.76f, 8.06f};
		break;

	case 12:
		(*uParam1)[0] = gameplay::get_hash_key("eCRIM_HUP_SHOP247_4A");
		(*uParam2)[0] = joaat("v_ilev_247door");
		(*uParam3)[0 /*3*/] = {545.5f, 2672.75f, 42.31f};
		(*uParam1)[1] = gameplay::get_hash_key("eCRIM_HUP_SHOP247_4B");
		(*uParam2)[1] = joaat("v_ilev_247door_r");
		(*uParam3)[1 /*3*/] = {542.93f, 2672.41f, 42.31f};
		break;

	case 13:
		(*uParam1)[0] = gameplay::get_hash_key("eCRIM_HUP_SHOP247_5A");
		(*uParam2)[0] = joaat("v_ilev_247door");
		(*uParam3)[0 /*3*/] = {2559.2f, 384.09f, 108.77f};
		(*uParam1)[1] = gameplay::get_hash_key("eCRIM_HUP_SHOP247_5B");
		(*uParam2)[1] = joaat("v_ilev_247door_r");
		(*uParam3)[1 /*3*/] = {2559.3f, 386.69f, 108.77f};
		break;

	case 14:
		(*uParam1)[0] = gameplay::get_hash_key("eCRIM_HUP_SHOP247_6A");
		(*uParam2)[0] = joaat("v_ilev_247door");
		(*uParam3)[0 /*3*/] = {2681.29f, 3281.43f, 55.39f};
		(*uParam1)[1] = gameplay::get_hash_key("eCRIM_HUP_SHOP247_6B");
		(*uParam2)[1] = joaat("v_ilev_247door_r");
		(*uParam3)[1 /*3*/] = {2682.56f, 3283.7f, 55.39f};
		break;

	case 15:
		(*uParam1)[0] = gameplay::get_hash_key("eCRIM_HUP_SHOP247_7A");
		(*uParam2)[0] = joaat("v_ilev_247door");
		(*uParam3)[0 /*3*/] = {1730.03f, 6412.07f, 35.19f};
		(*uParam1)[1] = gameplay::get_hash_key("eCRIM_HUP_SHOP247_7B");
		(*uParam2)[1] = joaat("v_ilev_247door_r");
		(*uParam3)[1 /*3*/] = {1732.36f, 6410.92f, 35.19f};
		break;

	case 16:
		(*uParam1)[0] = gameplay::get_hash_key("eCRIM_HUP_SHOP247_8A");
		(*uParam2)[0] = joaat("v_ilev_247door");
		(*uParam3)[0 /*3*/] = {1963.92f, 3740.08f, 32.49f};
		(*uParam1)[1] = gameplay::get_hash_key("eCRIM_HUP_SHOP247_8B");
		(*uParam2)[1] = joaat("v_ilev_247door_r");
		(*uParam3)[1 /*3*/] = {1966.17f, 3741.38f, 32.49f};
		break;

	case 17:
		(*uParam1)[0] = gameplay::get_hash_key("eCRIM_HUP_SHOP247_9A");
		(*uParam2)[0] = joaat("v_ilev_247door");
		(*uParam3)[0 /*3*/] = {27.82f, -1349.17f, 29.65f};
		(*uParam1)[1] = gameplay::get_hash_key("eCRIM_HUP_SHOP247_9B");
		(*uParam2)[1] = joaat("v_ilev_247door_r");
		(*uParam3)[1 /*3*/] = {30.42f, -1349.17f, 29.65f};
		break;

	case 18:
		(*uParam1)[0] = gameplay::get_hash_key("eCRIM_HUP_SHOP247_10A");
		(*uParam2)[0] = joaat("v_ilev_247door");
		(*uParam3)[0 /*3*/] = {375.35f, 323.8f, 103.72f};
		(*uParam1)[1] = gameplay::get_hash_key("eCRIM_HUP_SHOP247_10B");
		(*uParam2)[1] = joaat("v_ilev_247door_r");
		(*uParam3)[1 /*3*/] = {377.88f, 323.17f, 103.72f};
		break;
	}
}

// Position - 0x12196
void func_289(int *iParam0, int iParam1) { func_290(iParam0, iParam1); }

// Position - 0x121A6
void func_290(int *iParam0, var uParam1) { *iParam0 -= (*iParam0 & uParam1); }

// Position - 0x121BB
bool func_291() {
	if (!entity::is_entity_dead(Local_68, 0)) {
		if (entity::is_entity_in_angled_area(Local_68, Local_68.f_186, Local_68.f_189, Local_68.f_192, 0, 1, 0)) {
			return true;
		}
		else if (entity::is_entity_in_angled_area(Local_68, Local_68.f_200, Local_68.f_203, Local_68.f_206, 0, 1, 0)) {
			return true;
		}
		else if (entity::is_entity_in_angled_area(Local_68, Local_68.f_207, Local_68.f_210, Local_68.f_213, 0, 1, 0)) {
			return true;
		}
		else if (Local_68.f_199 != -1f) {
			if (entity::is_entity_in_angled_area(Local_68, Local_68.f_193, Local_68.f_196, Local_68.f_199, 0, 1, 0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x12261
int func_292() {
	if (gameplay::is_pc_version()) {
		if (gameplay::_0xD10282B6E3751BA0() == 1f) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x1227E
int func_293() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 20);
	}
	return 0;
}

// Position - 0x122A4
Vector3 func_294(vector3 vParam0, float fParam3) {
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

// Position - 0x122E8
void func_295(var *uParam0) {
	iLocal_67 = 0;
	iLocal_65 = 0;
	iLocal_63 = 0;
	iLocal_64 = 0;
	iLocal_62 = 0;
	iLocal_61 = 1;
	iLocal_57 = 0;
	iLocal_60 = 1;
	iLocal_59 = 0;
	iLocal_56 = 0;
	iLocal_55 = 0;
	iLocal_53 = 0;
	iLocal_52 = 0;
	Local_68 = player::player_ped_id();
	func_303(&uParam0->f_1[0 /*3*/], &Local_68.f_181, &iLocal_568);
	if (iLocal_568 == 10 || iLocal_568 == 11 || iLocal_568 == 12 || iLocal_568 == 13 || iLocal_568 == 14 ||
		iLocal_568 == 15 || iLocal_568 == 16 || iLocal_568 == 17 || iLocal_568 == 18) {
		iLocal_582 = 1;
	}
	Local_68.f_184 = 150f;
	Local_68.f_2.f_15 = "random@shop_robbery_reactions@";
	Local_68.f_2.f_16 = "absolutely";
	Local_68.f_2.f_17 = "is_this_it";
	Local_68.f_2.f_18 = "shock";
	Local_68.f_2.f_19 = "anger_a";
	Local_68.f_2.f_20 = "screw_you";
	Local_68.f_2.f_21 = "but_why";
	Local_68.f_486.f_1 = "mp_am_hold_up";
	Local_68.f_486.f_2 = "guard_handsup_loop";
	Local_68.f_486.f_3 = "holdup_victim_20s";
	Local_68.f_486.f_4 = "holdup_victim_20s_bag";
	Local_68.f_486.f_5 = "holdup_victim_20s_till";
	iLocal_570 = func_302();
	if (!iLocal_574) {
		func_298();
	}
	iLocal_575 = 0;
	if (iLocal_568 != 7) {
		iLocal_54 = 6;
	}
	else {
		iLocal_54 = 0;
	}
	if (func_95() == 0) {
		Local_68.f_1 = 0;
	}
	else if (func_95() == 1) {
		Local_68.f_1 = 1;
	}
	else if (func_95() == 2) {
		Local_68.f_1 = 2;
	}
	func_297(iLocal_568, &Local_68.f_186, &Local_68.f_189, &Local_68.f_192, &Local_68.f_193, &Local_68.f_196,
			 &Local_68.f_199, &Local_68.f_200, &Local_68.f_203, &Local_68.f_206, &Local_68.f_207, &Local_68.f_210,
			 &Local_68.f_213, &Local_68.f_214, &Local_68.f_217, &Local_68.f_220, &Local_68.f_102.f_6,
			 &Local_68.f_102.f_9);
	func_296(iLocal_568, &Local_68.f_486.f_6, &Local_68.f_486.f_9, &Local_68.f_2.f_1, &Local_68.f_2.f_4,
			 &Local_68.f_2.f_5, &Local_68.f_28.f_7, &Local_68.f_28.f_10, &Local_68.f_28.f_13, &Local_68.f_28.f_4,
			 &Local_68.f_28.f_5, &Local_68.f_102.f_21);
}

// Position - 0x12517
void func_296(int iParam0, var *uParam1, var *uParam2, var *uParam3, float *fParam4, int *iParam5, var *uParam6,
			  var *uParam7, int *iParam8, int *iParam9, int *iParam10, int *iParam11) {
	switch (iParam0) {
	case 0:
		*iParam5 = joaat("mp_m_shopkeep_01");
		*iParam8 = joaat("p_poly_bag_01_s");
		*uParam1 = {-706.6382f, -913.6887f, 19.21f};
		*uParam2 = {0f, 0f, -89.999f};
		break;

	case 1:
		*iParam5 = joaat("mp_m_shopkeep_01");
		*iParam8 = joaat("p_poly_bag_01_s");
		*uParam1 = {-47.19871f, -1757.67f, 29.42f};
		*uParam2 = {0f, 0f, -130f};
		break;

	case 2:
		*iParam5 = joaat("mp_m_shopkeep_01");
		*iParam8 = joaat("p_poly_bag_01_s");
		*uParam1 = {1164.21f, -322.89f, 69.2f};
		*uParam2 = {0f, 0f, -80f};
		break;

	case 3:
		*iParam5 = joaat("mp_m_shopkeep_01");
		*iParam8 = joaat("p_poly_bag_01_s");
		*uParam1 = {1698.307f, 4923.371f, 42.06f};
		*uParam2 = {0f, 0f, 145f};
		break;

	case 4:
		*iParam5 = joaat("mp_m_shopkeep_01");
		*iParam8 = joaat("p_poly_bag_01_s");
		*uParam1 = {-1820.465f, 793.8166f, 138.09f};
		*uParam2 = {0f, 0f, -47.53f};
		break;

	case 5:
		*iParam5 = joaat("mp_m_shopkeep_01");
		*iParam8 = joaat("p_poly_bag_01_s");
		*uParam1 = {1165.958f, 2710.201f, 38.14286f};
		*uParam2 = {0f, 0f, -1.15f};
		break;

	case 6:
		*iParam5 = joaat("mp_m_shopkeep_01");
		*iParam8 = joaat("p_poly_bag_01_s");
		*uParam1 = {-2967.027f, 390.9038f, 15.02f};
		*uParam2 = {0f, 0f, -94.76f};
		break;

	case 7:
		*iParam5 = joaat("mp_m_shopkeep_01");
		*iParam8 = joaat("p_poly_bag_01_s");
		*uParam1 = {-1222.331f, -907.8234f, 12.31f};
		*uParam2 = {0f, 0f, -147.297f};
		break;

	case 8:
		*iParam5 = joaat("mp_m_shopkeep_01");
		*iParam8 = joaat("p_poly_bag_01_s");
		*uParam1 = {1134.811f, -982.3615f, 46.4f};
		*uParam2 = {0f, 0f, 96.68562f};
		break;

	case 9:
		*iParam5 = joaat("mp_m_shopkeep_01");
		*iParam8 = joaat("p_poly_bag_01_s");
		*uParam1 = {-1486.673f, -378.4638f, 40.15f};
		*uParam2 = {0f, 0f, -46.229f};
		break;

	case 10:
		*iParam5 = joaat("mp_m_shopkeep_01");
		*iParam8 = joaat("p_poly_bag_01_s");
		*uParam1 = {-3244.573f, 1000.658f, 12.83f};
		*uParam2 = {0f, 0f, 175.074f};
		break;

	case 11:
		*iParam5 = joaat("mp_m_shopkeep_01");
		*iParam8 = joaat("p_poly_bag_01_s");
		*uParam1 = {-3041.357f, 584.2665f, 7.9f};
		*uParam2 = {0f, 0f, -162.241f};
		break;

	case 12:
		*iParam5 = joaat("mp_m_shopkeep_01");
		*iParam8 = joaat("p_poly_bag_01_s");
		*uParam1 = {548.9015f, 2668.941f, 42.15f};
		*uParam2 = {0f, 0f, -82.5f};
		break;

	case 13:
		*iParam5 = joaat("mp_m_shopkeep_01");
		*iParam8 = joaat("p_poly_bag_01_s");
		*uParam1 = {2554.875f, 381.3857f, 108.62f};
		*uParam2 = {0f, 0f, 177.716f};
		break;

	case 14:
		*iParam5 = joaat("mp_m_shopkeep_01");
		*iParam8 = joaat("p_poly_bag_01_s");
		*uParam1 = {2676.212f, 3280.969f, 55.24f};
		*uParam2 = {0f, 0f, 150.87f};
		break;

	case 15:
		*iParam5 = joaat("mp_m_shopkeep_01");
		*iParam8 = joaat("p_poly_bag_01_s");
		*uParam1 = {1729.329f, 6417.123f, 35.03f};
		*uParam2 = {0f, 0f, 63.641f};
		break;

	case 16:
		*iParam5 = joaat("mp_m_shopkeep_01");
		*iParam8 = joaat("p_poly_bag_01_s");
		*uParam1 = {1959.323f, 3742.29f, 32.34f};
		*uParam2 = {0f, 0f, 120f};
		break;

	case 17:
		*iParam5 = joaat("mp_m_shopkeep_01");
		*iParam8 = joaat("p_poly_bag_01_s");
		*uParam1 = {24.94562f, -1344.954f, 29.49f};
		*uParam2 = {0f, 0f, 90f};
		break;

	case 18:
		*iParam5 = joaat("mp_m_shopkeep_01");
		*iParam8 = joaat("p_poly_bag_01_s");
		*uParam1 = {373.5954f, 328.5892f, 103.56f};
		*uParam2 = {0f, 0f, 75.885f};
		break;
	}
	*iParam9 = 220;
	*iParam10 = 787;
	*uParam3 = {object::_get_object_offset_from_coords(*uParam1, uParam2->f_2, -0.668213f, 0.85762f, 0.0181999f)};
	*fParam4 = 180f + uParam2->f_2;
	switch (iParam0) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
		*uParam6 = {
			object::_get_object_offset_from_coords(*uParam1, uParam2->f_2, -0.040857f, 0.366089f - 0.088f, -0.428174f)};
		*iParam11 = 3;
		break;

	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
		*uParam6 = {
			object::_get_object_offset_from_coords(*uParam1, uParam2->f_2, -0.040857f, 0.366089f - 0.033f, -0.398174f)};
		*iParam11 = 2;
		break;

	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
		*uParam6 = {
			object::_get_object_offset_from_coords(*uParam1, uParam2->f_2, -0.040857f, 0.366089f - 0.077f, -0.378174f)};
		*iParam11 = 3;
		break;
	}
	*uParam7 = {5f, 0f, uParam2->f_2};
}

// Position - 0x12A79
Vector3 func_297(int iParam0, var *uParam1, var *uParam2, float *fParam3, var *uParam4, var *uParam5, float *fParam6,
				 var *uParam7, var *uParam8, float *fParam9, var *uParam10, var *uParam11, float *fParam12,
				 var *uParam13, var *uParam14, float *fParam15, var *uParam16, float *fParam17) {
	switch (iParam0) {
	case 0:
		*uParam1 = {-711.81f, -916.36f, 18.22f};
		*uParam2 = {-711.74f, -908.75f, 21.72f};
		*fParam3 = 13.92f;
		*uParam4 = {-705.76f, -908.76f, 18.22f};
		*uParam5 = {-705.8f, -903.16f, 21.24f};
		*fParam6 = 2.32f;
		*uParam7 = {-709.02f, -907.72f, 18.22f};
		*uParam8 = {-708.96f, -903.15f, 21.25f};
		*fParam9 = 3.66f;
		*uParam10 = {-707.05f, -907.18f, 18.23f};
		*uParam11 = {-707.04f, -905.9f, 20.51f};
		*fParam12 = 0.75f;
		*uParam13 = {-704.528f, -913.948f, 18f};
		*uParam14 = {-706.528f, -913.948f, 22.221f};
		*fParam15 = 4f;
		*uParam16 = {-711.2905f, -913.7919f, 19.1156f};
		*fParam17 = 1.05f;
		break;

	case 1:
		*uParam1 = {-52.86f, -1756.43f, 28.42f};
		*uParam2 = {-47.94f, -1750.6f, 31.93f};
		*fParam3 = 13.92f;
		*uParam4 = {-43.36f, -1754.47f, 28.44f};
		*uParam5 = {-39.78f, -1750.15f, 31.46f};
		*fParam6 = 2.32f;
		*uParam7 = {-45.14f, -1751.51f, 28.43f};
		*uParam8 = {-42.23f, -1748.08f, 31.48f};
		*fParam9 = 3.66f;
		*uParam10 = {-43.3f, -1752.4f, 28.48f};
		*uParam11 = {-42.5f, -1751.44f, 30.71f};
		*fParam12 = 0.75f;
		*uParam13 = {-45.23195f, -1756.996f, 28.42101f};
		*uParam14 = {-47.68424f, -1759.943f, 31.92101f};
		*fParam15 = 1.8f;
		*uParam16 = {-50.83334f, -1754.827f, 29.321f};
		*fParam17 = 1.05f;
		break;

	case 2:
		*uParam1 = {1159.64f, -326.47f, 68.21f};
		*uParam2 = {1158.33f, -318.91f, 71.71f};
		*fParam3 = 13.92f;
		*uParam4 = {1164.22f, -317.89f, 68.21f};
		*uParam5 = {1163.26f, -312.51f, 71.2f};
		*fParam6 = 2.32f;
		*uParam7 = {1160.91f, -317.34f, 68.21f};
		*uParam8 = {1160.11f, -313.19f, 71.13f};
		*fParam9 = 3.66f;
		*uParam10 = {1162.68f, -316.51f, 68.23f};
		*uParam11 = {1162.46f, -315.28f, 70.49f};
		*fParam12 = 0.75f;
		*uParam13 = {1164.222f, -323.349f, 68.21f};
		*uParam14 = {1166.191f, -323.001f, 72.21f};
		*fParam15 = 4f;
		*uParam16 = {1159.639f, -323.7686f, 69.1051f};
		*fParam17 = 1.05f;
		break;

	case 3:
		*uParam1 = {1699.09f, 4929.01f, 41.06f};
		*uParam2 = {1705.3f, 4924.67f, 44.58f};
		*fParam3 = 13.92f;
		*uParam4 = {1701.85f, 4919.78f, 41.06f};
		*uParam5 = {1706.43f, 4916.54f, 44.1f};
		*fParam6 = 2.32f;
		*uParam7 = {1704.57f, 4921.8f, 41.06f};
		*uParam8 = {1708.29f, 4919.18f, 44.1f};
		*fParam9 = 3.66f;
		*uParam10 = {1703.9f, 4919.88f, 41.09f};
		*uParam11 = {1704.92f, 4919.15f, 43.36f};
		*fParam12 = 0.75f;
		*uParam13 = {1698.032f, 4923.538f, 41.069f};
		*uParam14 = {1696.99f, 4921.831f, 45.069f};
		*fParam15 = 4f;
		*uParam16 = {1700.856f, 4927.15f, 41.96366f};
		*fParam17 = 1.05f;
		break;

	case 4:
		*uParam1 = {-1822.46f, 788.35f, 137.19f};
		*uParam2 = {-1827.54f, 794.02f, 140.72f};
		*fParam3 = 13.92f;
		*uParam4 = {-1823.17f, 798.02f, 137.1f};
		*uParam5 = {-1826.81f, 802.05f, 140.12f};
		*fParam6 = 2.32f;
		*uParam7 = {-1826.25f, 796.63f, 137.16f};
		*uParam8 = {-1829.17f, 799.88f, 140.16f};
		*fParam9 = 3.66f;
		*uParam10 = {-1825.16f, 798.33f, 137.13f};
		*uParam11 = {-1826f, 799.31f, 139.43f};
		*fParam12 = 0.75f;
		*uParam13 = {-1820.332f, 793.679f, 137.084f};
		*uParam14 = {-1818.891f, 795.067f, 141.084f};
		*fParam15 = 4f;
		*uParam16 = {-1823.841f, 790.7311f, 138.0864f};
		*fParam17 = 1.05f;
		break;

	case 5:
		*uParam1 = {1170.182f, 2708.049f, 37.6f};
		*uParam2 = {1162.385f, 2708.255f, 40.6f};
		*fParam3 = 8.8f;
		*uParam4 = {-1f, -1f, -1f};
		*uParam5 = {-1f, -1f, -1f};
		*fParam6 = -1f;
		*uParam7 = {1170.399f, 2716.422f, 37f};
		*uParam8 = {1162.601f, 2716.628f, 41.19f};
		*fParam9 = 9f;
		*uParam10 = {1170.7f, 2712.368f, 37.7f};
		*uParam11 = {1168.3f, 2712.431f, 40.73f};
		*fParam12 = 1.5f;
		*uParam13 = {1165.149f, 2712.433f, 37.138f};
		*uParam14 = {1165.132f, 2710.033f, 41.138f};
		*fParam15 = 5f;
		*uParam16 = {1165.946f, 2709.136f, 37.96316f};
		*fParam17 = 1f;
		break;

	case 6:
		*uParam1 = {-2973.31f, 390.75f, 14.04f};
		*uParam2 = {-2964.67f, 390.23f, 17.65f};
		*fParam3 = 7.5f;
		*uParam4 = {-1f, -1f, -1f};
		*uParam5 = {-1f, -1f, -1f};
		*fParam6 = -1f;
		*uParam7 = {-2956.98f, 389.73f, 13.21f};
		*uParam8 = {-2964.11f, 390.19f, 17.65f};
		*fParam9 = 7.5f;
		*uParam10 = {-2964.86f, 388.43f, 14.05f};
		*uParam11 = {-2964.98f, 386.49f, 17.63f};
		*fParam12 = 1.72f;
		*uParam13 = {-2964.645f, 391.391f, 14.048f};
		*uParam14 = {-2966.636f, 391.577f, 18.048f};
		*fParam15 = 4.5f;
		*uParam16 = {-2967.906f, 391.0424f, 14.94331f};
		*fParam17 = 1f;
		break;

	case 7:
		*uParam1 = {-1226.29f, -902.84f, 11.33f};
		*uParam2 = {-1221.4f, -910.16f, 14.93f};
		*fParam3 = 7.5f;
		*uParam4 = {-1f, -1f, -1f};
		*uParam5 = {-1f, -1f, -1f};
		*fParam6 = -1f;
		*uParam7 = {-1217.01f, -916.41f, 10.47f};
		*uParam8 = {-1221.13f, -910.58f, 14.89f};
		*fParam9 = 7.5f;
		*uParam10 = {-1222.99f, -911.03f, 11.33f};
		*uParam11 = {-1224.59f, -912.13f, 14.93f};
		*fParam12 = 1.72f;
		*uParam13 = {-1220.512f, -909.343f, 11.331f};
		*uParam14 = {-1221.766f, -907.785f, 15.331f};
		*fParam15 = 4.5f;
		*uParam16 = {-1222.687f, -907.0001f, 12.22635f};
		*fParam17 = 1.15f;
		break;

	case 8:
		*uParam1 = {1141f, -980.98f, 45.42f};
		*uParam2 = {1132.3f, -982.16f, 48.99f};
		*fParam3 = 7.5f;
		*uParam4 = {-1f, -1f, -1f};
		*uParam5 = {-1f, -1f, -1f};
		*fParam6 = -1f;
		*uParam7 = {1124.73f, -983.22f, 44.57f};
		*uParam8 = {1131.81f, -982.24f, 48.99f};
		*fParam9 = 7.5f;
		*uParam10 = {1132.21f, -980.35f, 45.42f};
		*uParam11 = {1131.91f, -978.44f, 49.02f};
		*fParam12 = 1.72f;
		*uParam13 = {1132.764f, -983.742f, 45.42f};
		*uParam14 = {1134.692f, -983.21f, 49.42f};
		*fParam15 = 4.5f;
		*uParam16 = {1135.651f, -982.4113f, 46.31583f};
		*fParam17 = 1.05f;
		break;

	case 9:
		*uParam1 = {-1490.78f, -383.33f, 39.16f};
		*uParam2 = {-1484.56f, -377.1f, 42.74f};
		*fParam3 = 7.5f;
		*uParam4 = {-1f, -1f, -1f};
		*uParam5 = {-1f, -1f, -1f};
		*fParam6 = -1f;
		*uParam7 = {-1479.17f, -371.69f, 38.33f};
		*uParam8 = {-1484.2f, -376.75f, 42.73f};
		*fParam9 = 7.5f;
		*uParam10 = {-1483.39f, -378.48f, 39.17f};
		*uParam11 = {-1482.01f, -379.86f, 42.77f};
		*fParam12 = 1.72f;
		*uParam13 = {-1485.5f, -376.545f, 39.167f};
		*uParam14 = {-1486.889f, -377.985f, 43.167f};
		*fParam15 = 4.5f;
		*uParam16 = {-1487.306f, -378.922f, 39.81341f};
		*fParam17 = 1.05f;
		break;

	case 10:
		*uParam1 = {-3240.12f, 1004.46f, 11.84f};
		*uParam2 = {-3247.19f, 1005.06f, 15.36f};
		*fParam3 = 11.21f;
		*uParam4 = {-1f, -1f, -1f};
		*uParam5 = {-1f, -1f, -1f};
		*fParam6 = -1f;
		*uParam7 = {-3249.75f, 999.74f, 11.83f};
		*uParam8 = {-3249.05f, 1007.41f, 15.2f};
		*fParam9 = 3.66f;
		*uParam10 = {-3247.71f, 1000.33f, 11.83f};
		*uParam11 = {-3247.59f, 1001.62f, 14.13f};
		*fParam12 = 0.75f;
		*uParam13 = {-3242.573f, 999.168f, 11.835f};
		*uParam14 = {-3242.482f, 1000.365f, 15.835f};
		*fParam15 = 4.2f;
		*uParam16 = {-3241.872f, 1006.54f, 12.73071f};
		*fParam17 = 1f;
		break;

	case 11:
		*uParam1 = {-3038.7f, 589.51f, 6.92f};
		*uParam2 = {-3045.47f, 587.31f, 10.45f};
		*fParam3 = 11.21f;
		*uParam4 = {-1f, -1f, -1f};
		*uParam5 = {-1f, -1f, -1f};
		*fParam6 = -1f;
		*uParam7 = {-3045.77f, 581.47f, 6.91f};
		*uParam8 = {-3048.23f, 589.1f, 10.43f};
		*fParam9 = 3.66f;
		*uParam10 = {-3044.12f, 582.75f, 6.9f};
		*uParam11 = {-3044.51f, 583.99f, 9.21f};
		*fParam12 = 0.75f;
		*uParam13 = {-3039.04f, 583.639f, 6.914f};
		*uParam14 = {-3039.453f, 584.766f, 10.914f};
		*fParam15 = 4.2f;
		*uParam16 = {-3041.18f, 590.7718f, 7.808933f};
		*fParam17 = 1f;
		break;

	case 12:
		*uParam1 = {544.21f, 2672.5f, 41.16f};
		*uParam2 = {545.16f, 2665.44f, 44.68f};
		*fParam3 = 11.21f;
		*uParam4 = {-1f, -1f, -1f};
		*uParam5 = {-1f, -1f, -1f};
		*fParam6 = -1f;
		*uParam7 = {550.96f, 2664.13f, 41.16f};
		*uParam8 = {542.86f, 2663.05f, 44.69f};
		*fParam9 = 3.66f;
		*uParam10 = {549.89f, 2665.96f, 41.17f};
		*uParam11 = {548.61f, 2665.78f, 43.46f};
		*fParam12 = 0.75f;
		*uParam13 = {549.913f, 2671.202f, 41.161f};
		*uParam14 = {548.726f, 2671.024f, 45.161f};
		*fParam15 = 4.2f;
		*uParam16 = {542.5831f, 2670.376f, 42.05651f};
		*fParam17 = 1f;
		break;

	case 13:
		*uParam1 = {2559.12f, 385.39f, 107.62f};
		*uParam2 = {2552.06f, 385.68f, 111.17f};
		*fParam3 = 11.21f;
		*uParam4 = {-1f, -1f, -1f};
		*uParam5 = {-1f, -1f, -1f};
		*fParam6 = -1f;
		*uParam10 = {2551.76f, 380.95f, 107.65f};
		*uParam11 = {2551.82f, 382.21f, 109.92f};
		*fParam12 = 0.75f;
		*uParam13 = {2556.854f, 379.973f, 107.627f};
		*uParam14 = {2556.845f, 381.173f, 111.627f};
		*fParam15 = 4.2f;
		*uParam16 = {2557.248f, 387.3177f, 108.523f};
		*fParam17 = 1f;
		break;

	case 14:
		*uParam1 = {2681.84f, 3282.62f, 54.24f};
		*uParam2 = {2675.63f, 3286.07f, 57.79f};
		*fParam3 = 11.21f;
		*uParam4 = {-1f, -1f, -1f};
		*uParam5 = {-1f, -1f, -1f};
		*fParam6 = -1f;
		*uParam7 = {2671.06f, 3282.22f, 54.48f};
		*uParam8 = {2675.1f, 3289.37f, 57.77f};
		*fParam9 = 3.66f;
		*uParam10 = {2673.23f, 3281.96f, 54.25f};
		*uParam11 = {2673.85f, 3283.09f, 56.53f};
		*fParam12 = 0.75f;
		*uParam13 = {2677.411f, 3278.796f, 54.246f};
		*uParam14 = {2677.978f, 3279.854f, 58.246f};
		*fParam15 = 4.2f;
		*uParam16 = {2680.964f, 3285.271f, 55.14115f};
		*fParam17 = 1f;
		break;

	case 15:
		*uParam1 = {1731.25f, 6411.58f, 34.04f};
		*uParam2 = {1734.35f, 6417.97f, 37.58f};
		*fParam3 = 11.21f;
		*uParam4 = {-1f, -1f, -1f};
		*uParam5 = {-1f, -1f, -1f};
		*fParam6 = -1f;
		*uParam7 = {1730.29f, 6422.24f, 34.23f};
		*uParam8 = {1737.68f, 6418.66f, 37.59f};
		*fParam9 = 3.66f;
		*uParam10 = {1730.17f, 6420.17f, 34.04f};
		*uParam11 = {1731.33f, 6419.58f, 36.34f};
		*fParam12 = 0.75f;
		*uParam13 = {1727.219f, 6415.816f, 34.042f};
		*uParam14 = {1728.296f, 6415.289f, 38.042f};
		*fParam15 = 4.2f;
		*uParam16 = {1733.865f, 6412.566f, 34.93724f};
		*fParam17 = 1f;
		break;

	case 16:
		*uParam1 = {1964.96f, 3740.86f, 31.38f};
		*uParam2 = {1961.43f, 3746.95f, 34.89f};
		*fParam3 = 11.21f;
		*uParam4 = {-1f, -1f, -1f};
		*uParam5 = {-1f, -1f, -1f};
		*fParam6 = -1f;
		*uParam7 = {1955.68f, 3746.02f, 31.4f};
		*uParam8 = {1962.38f, 3749.91f, 34.72f};
		*fParam9 = 3.66f;
		*uParam10 = {1957.3f, 3744.68f, 31.35f};
		*uParam11 = {1958.38f, 3745.33f, 33.63f};
		*fParam12 = 0.75f;
		*uParam13 = {1959.255f, 3739.774f, 31.349f};
		*uParam14 = {1960.274f, 3740.408f, 35.349f};
		*fParam15 = 4.2f;
		*uParam16 = {1965.634f, 3743.55f, 32.24376f};
		*fParam17 = 1f;
		break;

	case 17:
		*uParam1 = {34.84f, -1345.6f, 27f};
		*uParam2 = {23.34f, -1345.56f, 32f};
		*fParam3 = 7.2f;
		*uParam4 = {-1f, -1f, -1f};
		*uParam5 = {-1f, -1f, -1f};
		*fParam6 = -1f;
		*uParam7 = {27.44f, -1341.815f, 27.01f};
		*uParam8 = {27.46f, -1337.815f, 32.01f};
		*fParam9 = 9f;
		*uParam10 = {24.05f, -1341.89f, 27f};
		*uParam11 = {26.05f, -1341.87f, 32f};
		*fParam12 = 1f;
		*uParam13 = {23.566f, -1346.956f, 27f};
		*uParam14 = {25.065f, -1346.901f, 32f};
		*fParam15 = 4f;
		*uParam16 = {30.97348f, -1347.115f, 29.39393f};
		*fParam17 = 1f;
		break;

	case 18:
		*uParam1 = {376.65f, 323.6f, 102.57f};
		*uParam2 = {378.35f, 330.47f, 106.12f};
		*fParam3 = 11.21f;
		*uParam4 = {-1f, -1f, -1f};
		*uParam5 = {-1f, -1f, -1f};
		*fParam6 = -1f;
		*uParam7 = {373.45f, 333.81f, 102.58f};
		*uParam8 = {381.42f, 331.81f, 106.11f};
		*fParam9 = 3.66f;
		*uParam10 = {373.79f, 331.72f, 102.58f};
		*uParam11 = {375.03f, 331.41f, 104.86f};
		*fParam12 = 0.75f;
		*uParam13 = {371.789f, 326.823f, 102.571f};
		*uParam14 = {372.957f, 326.548f, 106.571f};
		*fParam15 = 4.2f;
		*uParam16 = {378.9936f, 325.0343f, 103.4664f};
		*fParam17 = 1f;
		break;
	}
	return 0f, 0f, 0f;
}

// Position - 0x13C4B
void func_298() {
	func_301();
	func_300();
	func_299();
}

// Position - 0x13C5F
void func_299() {
	int iVar0;

	if (iLocal_570 >= 9) {
		if (Global_101700.f_18994.f_41 > 3) {
			if (iLocal_570 == 9) {
				iVar0 = 0;
			}
			else {
				iVar0 = gameplay::get_random_int_in_range(0, 5);
			}
			if (iVar0 < 1) {
				Local_68.f_464 = 1;
				Global_101700.f_18994.f_41 = 0;
			}
			else {
				Local_68.f_464 = 0;
				Global_101700.f_18994.f_41++;
			}
		}
		else {
			Global_101700.f_18994.f_41++;
		}
	}
	else {
		Global_101700.f_18994.f_41++;
	}
}

// Position - 0x13CF3
void func_300() {
	int iVar0;

	if (iLocal_570 >= 3) {
		if (iLocal_570 == 3) {
			iVar0 = 0;
		}
		else {
			iVar0 = gameplay::get_random_int_in_range(0, 10);
		}
		if (iVar0 < 1) {
			Local_68.f_2.f_12 = 1;
		}
		else {
			Local_68.f_2.f_12 = 0;
		}
	}
}

// Position - 0x13D32
void func_301() {
	int iVar0;

	if (iLocal_570 >= 6) {
		if (iLocal_570 == 6) {
			iVar0 = 0;
		}
		else {
			iVar0 = gameplay::get_random_int_in_range(0, 7);
		}
		if (iVar0 < 1) {
			iLocal_60 = 2;
		}
		else {
			iLocal_60 = 1;
		}
	}
}

// Position - 0x13D68
int func_302() {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 19) {
		iVar0 += Global_101700.f_18994[iVar1];
		iVar1++;
	}
	return iVar0;
}

// Position - 0x13D98
void func_303(var *uParam0, var *uParam1, int *iParam2) {
	float fVar0;
	int iVar1;
	float fVar2;

	*iParam2 = 0;
	fVar0 = system::vdist2(func_285(0), *uParam0);
	fVar2 = 0f;
	iVar1 = 1;
	while (iVar1 <= 19 - 1) {
		fVar2 = system::vdist2(*uParam0, func_285(iVar1));
		if (fVar2 < fVar0) {
			*iParam2 = iVar1;
			fVar0 = fVar2;
		}
		iVar1++;
	}
	*uParam1 = {func_285(*iParam2)};
}

// Position - 0x13DF7
void func_304(var *uParam0, int iParam1) {
	if (iParam1 > 0) {
		uParam0->f_33 = iParam1;
	}
}

// Position - 0x13E0E
bool func_305(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x13E1C
bool func_306(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_307(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x13E3E
bool func_307(int iParam0) { return func_308(iParam0, Global_35781); }

// Position - 0x13E4F
int func_308(int iParam0, int iParam1) {
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

// Position - 0x14032
void func_309() {
	if (iLocal_65 == 1 || iLocal_65 == 2 || iLocal_624 == 7 ||
		entity::is_entity_dead(Local_68.f_2, 0) && iLocal_67 == 1) {
		if (iLocal_65 == 1) {
		}
		if (iLocal_65 == 2) {
		}
		if (iLocal_624 == 7) {
		}
		if (entity::is_entity_dead(Local_68.f_2, 0) && iLocal_67 == 1) {
		}
		Global_101700.f_18994.f_21[iLocal_568] = time::get_clock_hours();
		Global_101700.f_18994.f_42[iLocal_568] = time::get_clock_day_of_month();
	}
	if (network::network_is_signed_online() && func_320() && Local_68.f_468) {
		func_316(&iLocal_568, &iLocal_575, &iLocal_569);
	}
	func_315();
	iLocal_575 = 0;
	iLocal_579 = 0;
	iLocal_580 = 0;
	iLocal_581 = 0;
	if (!iLocal_574) {
		player::set_max_wanted_level(5);
	}
	player::set_all_random_peds_flee(player::player_id(), 0);
	ped::remove_scenario_blocking_area(iLocal_567, 0);
	func_28("SHR_HOLDUP_1", 1);
	func_28("SHR_SNK_TUT", 1);
	if (func_27("SHR_MENU") || func_27("SHR_HOLDUP_1") || func_27("SHR_SNK_TUT")) {
		ui::clear_help(1);
	}
	if (func_1(Local_68.f_470, 1024)) {
		if (entity::does_entity_exist(uLocal_618[0]) && entity::does_entity_exist(uLocal_618[1]) &&
			entity::does_entity_exist(uLocal_618[2])) {
			object::delete_object(&uLocal_618[0]);
			object::delete_object(&uLocal_618[1]);
			object::delete_object(&uLocal_618[2]);
		}
	}
	if (iLocal_623 == 2) {
		streaming::remove_anim_dict(Local_68.f_486.f_1);
	}
	func_310(&Local_584, 0);
	script::terminate_this_thread();
}

// Position - 0x141CB
void func_310(var *uParam0, int iParam1) {
	int iVar0;

	if (!iParam1) {
		func_312(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15) {
		func_311(&(*uParam0)[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

// Position - 0x1420B
void func_311(var *uParam0) {
	*uParam0 = 0;
	uParam0->f_1 = -1;
}

// Position - 0x1421C
void func_312(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15) {
		if (gameplay::is_bit_set((*uParam0)[iVar0 /*2*/], 30)) {
			func_313(&(*uParam0)[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

// Position - 0x14255
void func_313(var *uParam0) { func_314(*uParam0, "NULL", uParam0->f_1); }

// Position - 0x1426A
void func_314(int iParam0, char *sParam1, int iParam2) {
	if (gameplay::is_bit_set(iParam0, 30)) {
		switch (func_259(iParam0)) {
		case 0: streaming::set_model_as_no_longer_needed(iParam2); break;

		case 1: streaming::remove_anim_dict(sParam1); break;

		case 2: streaming::remove_clip_set(sParam1); break;

		case 3: graphics::set_streamed_texture_dict_as_no_longer_needed(sParam1); break;

		case 4: vehicle::remove_vehicle_recording(iParam2, sParam1); break;

		case 5: ai::remove_waypoint_recording(sParam1); break;

		case 6: audio::release_script_audio_bank(); break;

		case 7: script::set_script_with_name_hash_as_no_longer_needed(iParam2); break;

		case 8: ui::clear_additional_text(iParam2, gameplay::is_bit_set(iParam0, 26)); break;

		case 9: streaming::remove_ptfx_asset(); break;

		default: break;
		}
	}
}

// Position - 0x1432A
void func_315() {
	if (!entity::is_entity_dead(Local_68.f_2, 0)) {
		ai::clear_ped_tasks(Local_68.f_2);
	}
	if (entity::does_entity_exist(Local_68.f_2)) {
		func_209();
		entity::set_ped_as_no_longer_needed(&Local_68.f_2);
	}
	if (entity::does_entity_exist(Local_68.f_86)) {
		entity::set_ped_as_no_longer_needed(&Local_68.f_86);
	}
	if (!entity::is_entity_dead(Local_68.f_28, 0)) {
		if (iLocal_55 >= 4) {
			entity::stop_synchronized_entity_anim(Local_68.f_28, -8f, 1);
			entity::apply_force_to_entity(Local_68.f_28, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
		}
	}
	if (entity::does_entity_exist(Local_68.f_28)) {
		entity::set_object_as_no_longer_needed(&Local_68.f_28);
	}
	if (entity::does_entity_exist(Local_68.f_96.f_1)) {
		object::delete_object(&Local_68.f_96.f_1);
		entity::remove_model_hide(Local_68.f_486.f_6, 0.5f, 303280717, 0);
		entity::remove_model_hide(Local_68.f_486.f_6, 0.5f, joaat("prop_till_02"), 0);
		entity::remove_model_hide(Local_68.f_486.f_6, 0.5f, joaat("prop_till_03"), 0);
	}
	if (object::does_pickup_exist(Local_68.f_28.f_1)) {
		object::remove_pickup(Local_68.f_28.f_1);
	}
	if (func_14(&Local_68.f_477)) {
		func_39(&Local_68.f_477);
	}
	if (Local_68.f_466) {
		if (!iLocal_574) {
			streaming::remove_anim_dict(Local_68.f_2.f_15);
		}
		Local_68.f_466 = 0;
	}
}

// Position - 0x14469
void func_316(int iParam0, var *uParam1, var *uParam2) {
	int iVar0;
	struct<6> Var1[3];
	struct<8> Var20[2];

	iVar0 = func_319(*uParam1, 1, 0);
	StringCopy(&Var20[0 /*8*/], "GameType", 32);
	StringCopy(&Var20[1 /*8*/], "Location", 32);
	StringCopy(&Var1[0 /*6*/], "SP", 24);
	MemCopy(&Var1[1 /*6*/], {func_318(iParam0)}, 6);
	if (func_317(276, &Var1, &Var20, 2, -1, 0, 0)) {
		stats::_0x0BCA1D2C47B0D269(131, *uParam2, system::to_float(*uParam2));
		stats::_0x0BCA1D2C47B0D269(114, iVar0, system::to_float(iVar0));
	}
}

// Position - 0x144E6
bool func_317(int iParam0, var *uParam1, var *uParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;

	if (!network::network_is_signed_online()) {
	}
	if (!network::network_player_is_cheater() &&
		(network::network_have_online_privileges() || !network::_0x1353F87E89946207()) &&
		network::_0x422D396F80A96547()) {
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1) {
			if (network::_network_player_is_in_clan()) {
				Var69 = {func_134(player::player_id())};
				if (network::network_clan_player_is_active(&Var69)) {
					if (network::network_clan_player_get_desc(&uVar82, 35, &Var69)) {
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else {
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3) {
			Var0.f_2.f_1[iVar68 /*16*/] = {(*uParam2)[iVar68 /*8*/]};
			MemCopy(&Var0.f_2.f_1[iVar68 /*16*/].f_8, {(*uParam1)[iVar68 /*6*/]}, 8);
			iVar68++;
		}
		if (iParam5) {
			Global_1835013.f_5 = {Var0};
		}
		if (!iParam6) {
			if (network::network_is_game_in_progress() && Global_2450895.f_3) {
				stats::_0xC980E62E33DF1D5C(&Var0, &Global_1751175.f_10);
			}
			else {
				stats::leaderboards2_write_data(&Var0);
			}
		}
		return true;
	}
	if (network::network_player_is_cheater()) {
	}
	if (!network::network_have_online_privileges()) {
	}
	if (network::_0x1353F87E89946207()) {
	}
	if (!network::_0x422D396F80A96547()) {
	}
	return false;
}

// Position - 0x1461A
struct<8> func_318(var *uParam0) {
	struct<8> Var0;

	switch (*uParam0) {
	case -2:
	case -1: StringCopy(&Var0, "InvalidEnum", 32); break;

	case 0:
	case 1:
	case 2:
	case 3:
	case 4: StringCopy(&Var0, "SHR_GAS", 32); break;

	case 5: StringCopy(&Var0, "SHR_LIQ1", 32); break;

	case 6:
	case 7:
	case 8:
	case 9: StringCopy(&Var0, "SHR_LIQ2", 32); break;

	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18: StringCopy(&Var0, "SHR_CONV", 32); break;

	default: StringCopy(&Var0, "InvalidEnum", 32); break;
	}
	return Var0;
}

//Position - 0x146EB
var func_319(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x14702
int func_320() {
	if (func_322() && func_321(0)) {
		return 1;
	}
	return 0;
}

// Position - 0x14720
var func_321(int iParam0) { return Global_1312373[iParam0]; }

// Position - 0x14730
var func_322() { return func_321(func_123() + 1); }
