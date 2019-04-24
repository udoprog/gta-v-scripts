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
int iLocal_21 = 0;
int iLocal_22 = 0;
int iLocal_23 = 0;
int iLocal_24 = 0;
int iLocal_25 = 0;
var *uLocal_26 = NULL;
var uLocal_27 = 0;
var uLocal_28 = 0;
int iLocal_29 = 0;
float fLocal_30 = 0f;
vector3 vLocal_31 = {0f, 0f, 0f};
float fLocal_34 = 0f;
int iLocal_35 = 0;
bool bLocal_36 = 0;
int iLocal_37 = 0;
int iLocal_38 = 0;
int iLocal_39 = 0;
int iLocal_40 = 0;
var uLocal_41 = 0;
int *iLocal_42 = NULL;
int iLocal_43 = 0;
int iLocal_44 = 0;
int iLocal_45 = 0;
char cLocal_46[64] = "";
var uLocal_54 = 0;
var uLocal_55 = 0;
var uLocal_56 = 0;
var uLocal_57 = 0;
var uLocal_58 = 0;
var uLocal_59 = 0;
var uLocal_60 = 0;
var uLocal_61 = 0;
char cLocal_62[64] = "";
var uLocal_70 = 0;
var uLocal_71 = 0;
var uLocal_72 = 0;
var uLocal_73 = 0;
var uLocal_74 = 0;
var uLocal_75 = 0;
var uLocal_76 = 0;
var uLocal_77 = 0;
int iLocal_78 = 0;
vector3 vLocal_79 = {0f, 0f, 0f};
vector3 vLocal_82 = {0f, 0f, 0f};
int iLocal_85 = 0;
int iLocal_86 = 0;
int iLocal_87 = 0;
vector3 vLocal_88 = {0f, 0f, 0f};
int iScriptParam_0 = 0;
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
	iLocal_21 = 3;
	iLocal_25 = 1;
	iLocal_35 = -1;
	iLocal_42 = -1;
	iLocal_43 = -1;
	iLocal_44 = -1;
	StringCopy(&cLocal_46, "NULL", 64);
	StringCopy(&cLocal_62, "NULL", 64);
	if (player::has_force_cleanup_occurred(2)) {
		func_66();
	}
	if (entity::does_entity_exist(iScriptParam_0)) {
		iLocal_37 = iScriptParam_0;
		iLocal_40 = iScriptParam_0;
	}
	while (true) {
		system::wait(0);
		func_65();
		if (entity::does_entity_exist(iScriptParam_0)) {
			if (iLocal_43 != -1 && func_64() && !func_63() && !func_62(iLocal_43)) {
				func_66();
			}
			if (streaming::is_player_switch_in_progress() && streaming::get_player_switch_type() != 3 &&
				streaming::get_player_switch_state() == 3) {
				func_66();
			}
			if (func_61(13) || func_61(14)) {
				func_66();
			}
			if (object::has_object_been_broken(iScriptParam_0)) {
				func_66();
			}
			if (brain::is_object_within_brain_activation_range(iScriptParam_0)) {
				if (player::is_player_playing(player::player_id())) {
					func_60();
					if (entity::get_entity_health(iScriptParam_0) < 950) {
						func_66();
					}
					switch (iLocal_29) {
					case 0:
						func_57();
						if (iLocal_43 == 5) {
							if (func_56(18) == 1 && func_56(20) == 0) {
								uLocal_41 = object::_get_des_object(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
								if (object::_does_des_object_exist(uLocal_41)) {
									object::_set_des_object_state(uLocal_41, 9);
								}
								script::terminate_this_thread();
							}
						}
						if (iLocal_43 == -1) {
							func_66();
						}
						else {
							func_55();
							audio::hint_ambient_audio_bank("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1);
							audio::register_script_with_audio(0);
							Global_25250[iLocal_43 /*11*/].f_2 = 0;
							Global_25250[iLocal_43 /*11*/].f_6 = 1;
							Global_25250[iLocal_43 /*11*/] = gameplay::get_random_int_in_range(0, 2);
							Global_25250[iLocal_43 /*11*/].f_1 = 0;
							Global_25250[iLocal_43 /*11*/].f_4 = 0;
							Global_25250[iLocal_43 /*11*/].f_7 = 0;
							Global_25250[iLocal_43 /*11*/].f_8 = 0;
							Global_25250[iLocal_43 /*11*/].f_10 = 0;
							fLocal_30 = -4f;
							func_53(&uLocal_26);
							func_51();
							func_50();
							system::wait(0);
							iLocal_29 = 1;
						}
						break;

					case 1:
						if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
							system::wait(0);
						}
						else if (entity::is_entity_static(iLocal_37) &&
								 entity::is_entity_upright(iLocal_37, 1119092736)) {
							if (func_42() || Global_25250[iLocal_43 /*11*/].f_5) {
								iLocal_29 = 2;
							}
						}
						else {
							func_41(&iLocal_42);
						}
						break;

					case 2:
						func_51();
						if (!func_62(iLocal_43)) {
							func_41(&iLocal_42);
							if (func_40("TV_HLP1")) {
								ui::clear_help(1);
							}
						}
						if (entity::does_entity_exist(iLocal_37)) {
							if (!entity::is_entity_visible(iLocal_37)) {
								entity::set_entity_visible(iLocal_37, 1, 0);
							}
						}
						if (entity::does_entity_exist(iLocal_39)) {
							if (!entity::is_entity_visible(iLocal_39)) {
								entity::set_entity_visible(iLocal_39, 1, 0);
							}
						}
						if (entity::does_entity_exist(iLocal_38)) {
							if (entity::is_entity_visible(iLocal_38)) {
								entity::set_entity_visible(iLocal_38, 0, 0);
							}
						}
						if (!gameplay::are_strings_equal(&cLocal_46, "NULL")) {
							audio::set_static_emitter_enabled(&cLocal_46, 0);
						}
						graphics::set_tv_audio_frontend(0);
						system::wait(0);
						if (entity::does_entity_exist(iLocal_40)) {
							graphics::attach_tv_audio_to_entity(iLocal_40);
						}
						if (!func_62(iLocal_43)) {
							if (Global_25250[iLocal_43 /*11*/] == 3 || Global_25250[iLocal_43 /*11*/] == 2 ||
								Global_25250[iLocal_43 /*11*/] == -1) {
								Global_25250[iLocal_43 /*11*/] = gameplay::get_random_int_in_range(0, 2);
							}
							graphics::set_tv_channel(Global_25250[iLocal_43 /*11*/]);
							graphics::set_tv_volume(fLocal_30);
						}
						else {
							iLocal_44 = Global_25250[iLocal_43 /*11*/];
							iLocal_45 = Global_25250[iLocal_43 /*11*/].f_1;
							graphics::_0xF7B38B8305F1FE8B(iLocal_44, func_39(iLocal_45),
														  Global_25250[iLocal_43 /*11*/].f_9);
							graphics::set_tv_channel(iLocal_44);
							if (Global_25250[iLocal_43 /*11*/].f_7) {
								Global_25250[iLocal_43 /*11*/].f_5 = 0;
								Global_25250[iLocal_43 /*11*/].f_7 = 0;
							}
						}
						Global_25250[iLocal_43 /*11*/].f_2 = 1;
						func_38(133, 1);
						func_38(131, 1);
						func_38(132, 1);
						iLocal_29 = 3;
						break;

					case 3:
						if (Global_25250[iLocal_43 /*11*/].f_4) {
							iLocal_29 = 6;
						}
						if (Global_25250[iLocal_43 /*11*/].f_7 && func_62(iLocal_43)) {
							Global_25250[iLocal_43 /*11*/].f_7 = 0;
							iLocal_29 = 6;
						}
						if (!func_36(iLocal_43)) {
							func_35();
							iLocal_29 = 5;
						}
						else {
							func_33();
							if (graphics::get_tv_channel() == -1) {
								graphics::set_tv_channel(Global_25250[iLocal_43 /*11*/]);
							}
							if (func_15()) {
								iLocal_29 = 6;
							}
						}
						break;

					case 5:
						if (func_36(iLocal_43)) {
							iLocal_29 = 2;
						}
						if (Global_25250[iLocal_43 /*11*/].f_4) {
							iLocal_29 = 6;
						}
						break;

					case 6:
						func_1();
						if (iLocal_42 != -1) {
							func_41(&iLocal_42);
						}
						Global_25250[iLocal_43 /*11*/].f_5 = 0;
						Global_25250[iLocal_43 /*11*/].f_4 = 0;
						Global_25250[iLocal_43 /*11*/].f_1 = 0;
						Global_25250[iLocal_43 /*11*/].f_2 = 0;
						Global_25250[iLocal_43 /*11*/].f_7 = 0;
						Global_25250[iLocal_43 /*11*/].f_8 = 0;
						Global_25250[iLocal_43 /*11*/].f_10 = 0;
						iLocal_29 = 1;
						break;
					}
				}
			}
		}
		else {
			func_66();
			script::terminate_this_thread();
		}
	}
	func_66();
	script::terminate_this_thread();
}

// Position - 0x4E5
void func_1() {
	if (iLocal_43 != -1) {
		Global_25250[iLocal_43 /*11*/] = graphics::get_tv_channel();
	}
	fLocal_30 = graphics::get_tv_volume();
	graphics::set_tv_channel(-1);
	func_4();
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("family5")) == 0) {
		if (!gameplay::are_strings_equal(&cLocal_46, "NULL")) {
			audio::set_static_emitter_enabled(&cLocal_46, 1);
		}
	}
	if (func_40("TV_HLP1") || func_40("TV_HLP2") || func_40("TV_HLP5") || func_40("TV_HLP6")) {
		ui::clear_help(1);
	}
	func_3();
	func_50();
	if (entity::does_entity_exist(iLocal_38)) {
		if (!entity::is_entity_visible(iLocal_38)) {
			entity::set_entity_visible(iLocal_38, 1, 0);
		}
	}
	graphics::enable_movie_subtitles(0);
	func_2();
}

// Position - 0x58F
void func_2() {
	if (gameplay::is_pc_version()) {
		if (iLocal_87 == 1) {
			controls::_0x643ED62D5EA3BEBD();
			iLocal_87 = 0;
		}
	}
}

// Position - 0x5AB
void func_3() {
	if (iLocal_35 != -1) {
		ui::set_text_render_id(iLocal_35);
		if (entity::does_entity_exist(iLocal_37)) {
			if (entity::get_entity_model(iLocal_37) == joaat("v_ilev_mm_screen2") ||
				entity::get_entity_model(iLocal_37) == joaat("v_ilev_mm_scre_off")) {
				entity::set_entity_visible(iLocal_37, 0, 0);
				if (entity::get_entity_model(iLocal_37) == joaat("v_ilev_mm_scre_off")) {
					graphics::draw_rect(0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
				}
			}
			else {
				graphics::draw_rect(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
			}
		}
	}
	if (entity::does_entity_exist(iLocal_39)) {
		entity::set_entity_visible(iLocal_39, 0, 0);
	}
}

// Position - 0x642
void func_4() {
	if (iLocal_85) {
		cam::render_script_cams(0, 0, 3000, 1, 0, 0);
		if (cam::is_cam_active(iLocal_78)) {
			cam::set_cam_active(iLocal_78, 0);
		}
		cam::destroy_cam(iLocal_78, 0);
		cam::set_gameplay_cam_relative_heading(0f);
		if (!ped::is_ped_injured(player::player_ped_id())) {
			entity::freeze_entity_position(player::player_ped_id(), 0);
			ai::clear_ped_tasks(player::player_ped_id());
			ai::task_look_at_coord(player::player_ped_id(), vLocal_31, 1, 0, 2);
			if (!player::is_player_control_on(player::player_id())) {
				if (bLocal_36 == 1) {
					bLocal_36 = false;
					player::set_player_control(player::player_id(), 1, 0);
				}
			}
			entity::set_entity_visible(player::player_ped_id(), 1, 0);
		}
		if (!gameplay::are_strings_equal(&cLocal_62, "NULL")) {
			if (audio::is_audio_scene_active(&cLocal_62)) {
				audio::stop_audio_scene(&cLocal_62);
			}
		}
		if (entity::does_entity_exist(iLocal_39)) {
			entity::set_entity_visible(iLocal_39, 1, 0);
		}
		func_5(0, 1, 0, 0);
		graphics::enable_movie_subtitles(0);
		iLocal_85 = 0;
	}
}

// Position - 0x70B
void func_5(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0) {
		player::special_ability_deactivate_fast(player::player_id());
		player::set_all_random_peds_flee(player::player_id(), 1);
		player::set_police_ignore_player(player::player_id(), 1);
		func_14(1);
		ui::_0xA8FDB297A8D25FBA();
		ui::_0xFDB423997FA30340();
		if (Global_14443.f_1 > 3) {
			if (audio::is_mobile_phone_call_ongoing()) {
				audio::stop_scripted_conversation(0);
			}
			if (!func_13()) {
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_12(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		Global_69700 = 1;
	}
	else {
		func_14(0);
		ui::_0xE1CD1E48E025E661();
		Global_55828 = 0;
		if (iParam1) {
			graphics::_0x03FC694AE06C5A20();
		}
		player::set_all_random_peds_flee(player::player_id(), 0);
		player::set_police_ignore_player(player::player_id(), 0);
		func_12(0, iParam3, iParam2, 0);
		if (network::network_is_game_in_progress()) {
			if (!ped::is_ped_injured(player::player_ped_id()) && !func_10(player::player_id()) &&
				!func_7(player::player_id(), 0) && !func_6()) {
				entity::set_entity_invincible(player::player_ped_id(), 0);
			}
		}
		else if (!ped::is_ped_injured(player::player_ped_id()) && !func_10(player::player_id())) {
			entity::set_entity_invincible(player::player_ped_id(), 0);
		}
		Global_69700 = 0;
	}
}

// Position - 0x824
bool func_6() { return gameplay::is_bit_set(Global_1591201[player::player_id() /*602*/].f_39.f_18, 14); }

// Position - 0x841
bool func_7(int iParam0, int iParam1) {
	bool bVar0;

	if (iParam0 == player::player_id()) {
		bVar0 = func_8(-1, 0) == 8;
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

// Position - 0x88C
int func_8(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1) {
		iVar1 = func_9();
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

// Position - 0x8CD
var func_9() { return Global_1312735; }

// Position - 0x8D9
int func_10(int iParam0) {
	if (func_7(iParam0, 0)) {
		return 1;
	}
	if (func_11()) {
		if (iParam0 == player::player_id()) {
			return 1;
		}
	}
	if (gameplay::is_bit_set(Global_2421664[iParam0 /*358*/].f_198, 2)) {
		return 1;
	}
	return 0;
}

// Position - 0x91B
bool func_11() { return gameplay::is_bit_set(Global_2359301, 3); }

// Position - 0x92C
int func_12(int iParam0, int iParam1, var uParam2, int iParam3) {
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

// Position - 0x95F
int func_13() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x986
void func_14(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_2313, 13);
	}
	else {
		gameplay::clear_bit(&Global_2313, 13);
	}
}

// Position - 0x9A9
bool func_15() {
	if (!func_62(iLocal_43)) {
		if (func_29(&uLocal_26) >= 1f &&
			entity::is_entity_at_coord(player::player_ped_id(), vLocal_88, 1f, 1f, 1.5f, 0, 1, 0) &&
			interior::get_interior_from_entity(iLocal_37) ==
				interior::get_interior_from_entity(player::player_ped_id()) &&
			!func_28(8, -1) && !ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) &&
			ped::_0xFCF37A457CB96DC0(player::player_ped_id(), vLocal_31, 90f) &&
			!ped::is_ped_ragdoll(player::player_ped_id()) && !streaming::is_player_switch_in_progress()) {
			if (iLocal_42 == -1) {
				func_27();
				func_26(&iLocal_42, 3, "TV_HLP5", 0, 0, 0, 0);
			}
			else if (func_24(iLocal_42, 1)) {
				func_41(&iLocal_42);
				func_53(&uLocal_26);
				Global_25250[iLocal_43 /*11*/].f_7 = 0;
				if (audio::request_ambient_audio_bank("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1)) {
					audio::play_sound_frontend(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
				}
				return true;
			}
			func_16();
		}
		else {
			if (func_40("TV_HLP5")) {
				ui::clear_help(1);
			}
			func_2();
			func_41(&iLocal_42);
		}
	}
	return false;
}

// Position - 0xAB5
void func_16() {
	if (iLocal_85 == 0) {
		controls::set_input_exclusive(2, 222);
		if (controls::is_control_just_pressed(2, 222)) {
			func_41(&iLocal_42);
			func_26(&iLocal_42, 3, "TV_HLP6", 0, 0, 0, 0);
			func_23();
		}
	}
	else {
		controls::disable_control_action(2, 200, 1);
		if (entity::is_entity_visible(player::player_ped_id())) {
			entity::set_entity_visible(player::player_ped_id(), 0, 0);
		}
		if (bLocal_36) {
			if (player::is_player_control_on(player::player_id())) {
				player::set_player_control(player::player_id(), 0, 0);
			}
		}
		ui::hide_hud_and_radar_this_frame();
		graphics::_0xD1C55B110E4DF534(player::player_ped_id());
		func_21(1, 1);
		controls::set_input_exclusive(2, 222);
		func_17();
		if (controls::is_control_just_pressed(2, 222) ||
			controls::_is_input_disabled(2) && controls::is_disabled_control_just_released(2, 200)) {
			func_41(&iLocal_42);
			func_4();
		}
	}
}

// Position - 0xB6E
void func_17() {
	if (Global_14443.f_1 != 1) {
		if (func_20(0)) {
			func_18(0);
		}
		gameplay::set_bit(&Global_2314, 2);
	}
}

// Position - 0xB96
void func_18(int iParam0) {
	if (Global_14604) {
		func_19(0, 0);
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
	if (!func_13()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0xC06
void func_19(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_20(0)) {
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

// Position - 0xC7A
bool func_20(int iParam0) {
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

// Position - 0xCD4
void func_21(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = 64;
	if (iParam0) {
		if (func_22(0)) {
			if (!iLocal_22) {
				if (audio::request_ambient_audio_bank("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1)) {
					audio::play_sound_frontend(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (graphics::get_tv_channel() == 0) {
					graphics::set_tv_channel(1);
				}
				else {
					graphics::set_tv_channel(0);
				}
				iLocal_22 = 1;
			}
		}
		else if (iLocal_22) {
			iLocal_22 = 0;
		}
	}
	if (iParam1) {
		iVar1 = controls::get_control_value(2, 219) - 127;
		if (!iLocal_23) {
			if (iVar1 > 0 + iVar0) {
				fVar2 = graphics::get_tv_volume();
				fVar2 -= 0.5f;
				if (fVar2 < -36f) {
					fVar2 = -36f;
				}
				graphics::set_tv_volume(fVar2);
				iLocal_24 = gameplay::get_game_timer();
				iLocal_23 = 1;
			}
			if (iVar1 < 0 - iVar0) {
				fVar2 = graphics::get_tv_volume();
				fVar2 += 0.5f;
				if (fVar2 > 0f) {
					fVar2 = 0f;
				}
				graphics::set_tv_volume(fVar2);
				iLocal_24 = gameplay::get_game_timer();
				iLocal_23 = 1;
			}
			if (iVar1 < 0 + iVar0 && iVar1 > 0 - iVar0) {
				iLocal_25 = 1;
			}
			else if (iLocal_25) {
				if (audio::request_ambient_audio_bank("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1)) {
					if (fVar2 != -36f && fVar2 != 0f) {
						audio::play_sound_frontend(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_25 = 0;
				}
			}
		}
		if (iLocal_23) {
			if (iVar1 == 0 || gameplay::get_game_timer() > iLocal_24 + 24) {
				iLocal_23 = 0;
			}
		}
	}
}

// Position - 0xE1B
bool func_22(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 64;
	iVar1 = controls::get_control_value(2, 218) - 127;
	if (iParam0 || system::timera() > 300) {
		if (iVar1 > 0 + iVar0 || iVar1 < 0 - iVar0) {
			system::settimera(0);
			return true;
		}
	}
	return false;
}

// Position - 0xE67
void func_23() {
	float fVar0;

	fVar0 = 50f;
	if (iLocal_85 == 0) {
		iLocal_78 = cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", vLocal_79, vLocal_82, fVar0, 0, 2);
		cam::set_cam_far_clip(iLocal_78, 100f);
		cam::set_cam_active(iLocal_78, 1);
		cam::render_script_cams(1, 0, 3000, 1, 0, 0);
		if (entity::does_entity_exist(iLocal_39)) {
			entity::set_entity_visible(iLocal_39, 0, 0);
		}
		if (!ped::is_ped_injured(player::player_ped_id())) {
			entity::freeze_entity_position(player::player_ped_id(), 1);
			ai::clear_ped_tasks(player::player_ped_id());
			if (player::is_player_control_on(player::player_id())) {
				player::set_player_control(player::player_id(), 0, 0);
				bLocal_36 = true;
			}
			ai::task_look_at_coord(player::player_ped_id(), vLocal_31, -1, 0, 2);
			entity::set_entity_visible(player::player_ped_id(), 0, 0);
		}
		if (!gameplay::are_strings_equal(&cLocal_62, "NULL")) {
			if (!audio::is_audio_scene_active(&cLocal_62)) {
				audio::start_audio_scene(&cLocal_62);
			}
		}
		func_5(1, 1, 0, 0);
		graphics::enable_movie_subtitles(1);
		iLocal_85 = 1;
	}
}

// Position - 0xF3B
bool func_24(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = func_25(iParam0);
	if (iVar0 == -1) {
		return false;
	}
	if (!player::is_player_playing(player::get_player_index())) {
		return false;
	}
	if (func_20(0)) {
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

// Position - 0xFF3
int func_25(int iParam0) {
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

// Position - 0x102E
void func_26(int iParam0, int iParam1, char *sParam2, int iParam3, char *sParam4, int iParam5, int iParam6) {
	int iVar0;

	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("context_controller")) < 1) {
	}
	if (streaming::is_player_switch_in_progress()) {
		if (*iParam0 != -1) {
			func_41(iParam0);
		}
		return;
	}
	if (*iParam0 != -1) {
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
			*iParam0 = Global_36484[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

// Position - 0x1159
void func_27() {
	if (gameplay::is_pc_version()) {
		if (iLocal_87 == 0) {
			controls::_0x3D42B92563939375("TV_Controls");
			iLocal_87 = 1;
		}
	}
}

// Position - 0x1179
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

// Position - 0x11B4
float func_29(var *uParam0) {
	if (func_32(uParam0)) {
		if (func_31(uParam0)) {
			return uParam0->f_2;
		}
		else {
			return func_30(gameplay::is_bit_set(*uParam0, 4)) - uParam0->f_1;
		}
	}
	return uParam0->f_1;
}

// Position - 0x11F3
float func_30(bool bParam0) {
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

// Position - 0x124B
bool func_31(var *uParam0) { return gameplay::is_bit_set(*uParam0, 2); }

// Position - 0x125B
bool func_32(var *uParam0) { return gameplay::is_bit_set(*uParam0, 1); }

// Position - 0x126B
void func_33() {
	float *fVar0;

	fVar0 = 1f;
	func_34(&fVar0);
	ui::set_text_render_id(iLocal_35);
	graphics::_set_2d_layer(4);
	graphics::_0xC6372ECD45D73BCD(1);
	graphics::draw_tv_channel(0.5f, 0.5f, fVar0, 1f, 0f, 255, 255, 255, 255);
	ui::set_text_render_id(ui::get_default_script_rendertarget_render_id());
}

// Position - 0x12AC
void func_34(float *fParam0) {
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = graphics::_get_aspect_ratio(0);
	if (fVar0 <= 16f / 9f) {
		fVar1 = fVar0 / (16f / 9f);
		fVar2 = *fParam0;
		*fParam0 = fVar2 * fVar1;
	}
}

// Position - 0x12E9
void func_35() {
	Global_25250[iLocal_43 /*11*/].f_7 = 0;
	Global_25250[iLocal_43 /*11*/] = graphics::get_tv_channel();
	fLocal_30 = graphics::get_tv_volume();
	if (audio::is_audio_scene_active(&cLocal_62)) {
		audio::stop_audio_scene(&cLocal_62);
	}
	if (func_40("TV_HLP1") || func_40("TV_HLP2") || func_40("TV_HLP5") || func_40("TV_HLP6")) {
		ui::clear_help(1);
	}
	func_41(&iLocal_42);
	graphics::set_tv_channel(-1);
	system::wait(0);
	func_3();
	func_50();
}

// Position - 0x1369
bool func_36(int iParam0) {
	vector3 vVar0;

	vVar0 = {func_37(player::player_id())};
	switch (iParam0) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 6: return true;

	case 4:
		if (vVar0.z < 74f) {
			return true;
		}
		break;

	case 5:
		if (vVar0.z > 75f) {
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x13DE
Vector3 func_37(int iParam0) { return entity::get_entity_coords(player::get_player_ped(iParam0), 0); }

// Position - 0x13F1
void func_38(int iParam0, int iParam1) {
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

// Position - 0x144E
char *func_39(int iParam0) {
	char *sVar0;

	switch (iParam0) {
	case 1: sVar0 = "PL_STD_CNT"; break;

	case 2: sVar0 = "PL_STD_WZL"; break;

	case 3: sVar0 = "PL_LO_CNT"; break;

	case 4: sVar0 = "PL_LO_WZL"; break;

	case 7: sVar0 = "PL_SP_WORKOUT"; break;

	case 8: sVar0 = "PL_SP_INV"; break;

	case 9: sVar0 = "PL_SP_INV_EXP"; break;

	case 5: sVar0 = "PL_LO_RS"; break;

	case 6: sVar0 = "PL_LO_RS_CUTSCENE"; break;

	case 10: sVar0 = "PL_SP_PLSH1_INTRO"; break;

	case 11: sVar0 = "PL_LES1_FAME_OR_SHAME"; break;

	case 12: sVar0 = "PL_STD_WZL_FOS_EP2"; break;

	case 13: sVar0 = "PL_MP_WEAZEL"; break;

	case 14: sVar0 = "PL_MP_CCTV"; break;
	}
	return sVar0;
}

// Position - 0x152D
bool func_40(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0x1540
void func_41(int *iParam0) {
	int iVar0;

	if (*iParam0 == -1) {
		return;
	}
	iVar0 = func_25(*iParam0);
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

// Position - 0x1597
int func_42() {
	if (func_29(&uLocal_26) < 1f) {
		func_41(&iLocal_42);
		return 0;
	}
	if (!entity::is_entity_at_coord(player::player_ped_id(), vLocal_88, 1f, 1f, 1.5f, 0, 1, 0) ||
		!ped::_0xFCF37A457CB96DC0(player::player_ped_id(), vLocal_31, 90f) ||
		ped::is_ped_ragdoll(player::player_ped_id())) {
		func_41(&iLocal_42);
		return 0;
	}
	if (interior::get_interior_from_entity(iLocal_37) != interior::get_interior_from_entity(player::player_ped_id())) {
		func_41(&iLocal_42);
		return 0;
	}
	if (func_28(8, -1)) {
		func_41(&iLocal_42);
		return 0;
	}
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		func_41(&iLocal_42);
		return 0;
	}
	if (Global_88752) {
		func_41(&iLocal_42);
		return 0;
	}
	if (Global_25250[iLocal_43 /*11*/].f_8) {
		func_41(&iLocal_42);
		return 0;
	}
	if (iLocal_42 == -1) {
		func_26(&iLocal_42, 3, "TV_HLP1", 0, 0, 0, 0);
		return 0;
	}
	if (func_24(iLocal_42, 1)) {
		func_41(&iLocal_42);
		func_53(&uLocal_26);
		Global_25250[iLocal_43 /*11*/].f_7 = 1;
		if (audio::request_ambient_audio_bank("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1)) {
			audio::play_sound_frontend(-1, "MICHAEL_SOFA_TV_ON_MASTER", 0, 1);
		}
		func_43(309, 0, 0);
		return 1;
	}
	return 0;
}

// Position - 0x16C6
void func_43(int iParam0, int iParam1, int iParam2) {
	bool bVar0;

	if (iParam0 < 0) {
	}
	if (iParam0 == 321 || iParam0 > 321) {
	}
	else {
		func_49(891 + iParam0, 1, -1, 1);
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
		func_44();
	}
}

// Position - 0x17AE
void func_44() {
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
		func_48(13, system::floor(Global_101700.f_9153.f_3853));
	}
	if (!datafile::datafile_is_save_pending()) {
		if (!Global_69702) {
			if (func_47() == 2 == 0 && !network::network_is_game_in_progress()) {
				if (network::network_is_cloud_available()) {
					Global_101434 = 0;
				}
				if (!Global_55822) {
					func_45();
				}
			}
		}
	}
}

// Position - 0x1C6F
int func_45() {
	if (func_46(0)) {
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

// Position - 0x1CBA
bool func_46(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x1CE5
int func_47() { return Global_25190; }

// Position - 0x1CF0
int func_48(int iParam0, int iParam1) {
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

// Position - 0x1D41
int func_49(int iParam0, int iParam1, int iParam2, int iParam3) {
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
		iParam2 = func_9();
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

// Position - 0x20D5
void func_50() {
	system::wait(0);
	if (ui::is_named_rendertarget_registered("tvscreen")) {
		ui::release_named_rendertarget("tvscreen");
		iLocal_35 = -1;
		ui::set_text_render_id(ui::get_default_script_rendertarget_render_id());
	}
}

// Position - 0x2101
void func_51() {
	int iVar0;

	if (iLocal_43 == 4) {
		func_52();
	}
	if (ui::is_named_rendertarget_registered("tvscreen")) {
		ui::release_named_rendertarget("tvscreen");
	}
	system::wait(0);
	if (!entity::does_entity_exist(iLocal_37)) {
		func_66();
	}
	iVar0 = entity::get_entity_model(iLocal_37);
	ui::register_named_rendertarget("tvscreen", 0);
	ui::link_named_rendertarget(iVar0);
	system::wait(0);
	if (iLocal_43 != 4) {
		while (!ui::is_named_rendertarget_linked(iVar0)) {
			if (!entity::does_entity_exist(iLocal_37)) {
				func_66();
			}
			if (!brain::is_object_within_brain_activation_range(iLocal_37)) {
				func_66();
			}
			if (!ui::is_named_rendertarget_registered("tvscreen")) {
				ui::register_named_rendertarget("tvscreen", 0);
			}
			if (!ui::is_named_rendertarget_linked(iVar0)) {
				ui::link_named_rendertarget(iVar0);
			}
			system::wait(0);
		}
	}
	iLocal_35 = ui::get_named_rendertarget_render_id("tvscreen");
	func_3();
}

// Position - 0x21BF
void func_52() {
	if (entity::does_entity_exist(iLocal_37)) {
		if (entity::get_entity_model(iLocal_37) == joaat("v_ilev_mm_screen2")) {
			return;
		}
	}
	iLocal_37 = 0;
	iLocal_37 = object::create_object_no_offset(joaat("v_ilev_mm_screen2"), vLocal_31, 1, 1, 0);
	entity::set_entity_heading(iLocal_37, fLocal_34);
	entity::freeze_entity_position(iLocal_37, 1);
	entity::set_entity_visible(iLocal_37, 0, 0);
	iLocal_39 = 0;
	iLocal_39 = object::create_object_no_offset(joaat("v_ilev_mm_screen2_vl"), vLocal_31, 1, 1, 0);
	entity::set_entity_heading(iLocal_39, fLocal_34);
	entity::freeze_entity_position(iLocal_39, 1);
	entity::set_entity_visible(iLocal_39, 0, 0);
}

// Position - 0x223C
void func_53(var *uParam0) { func_54(uParam0, 0f); }

// Position - 0x224B
void func_54(int *iParam0, float fParam1) {
	uParam0->f_1 = func_30(gameplay::is_bit_set(*uParam0, 4)) - fParam1;
	gameplay::set_bit(uParam0, 1);
	gameplay::clear_bit(iParam0, 2);
	iParam0->f_2 = 0f;
}

// Position - 0x2279
void func_55() {}

// Position - 0x2281
int func_56(int iParam0) {
	if (iParam0 == 94 || iParam0 == -1) {
		return 0;
	}
	return Global_101700.f_8044.f_330[iParam0 /*6*/];
}

// Position - 0x22AD
void func_57() {
	vLocal_31 = {entity::get_entity_coords(iLocal_37, 1)};
	fLocal_34 = entity::get_entity_heading(iLocal_37);
	func_59();
	if (entity::get_entity_model(iLocal_37) == -897601557) {
		if (system::vdist(vLocal_31, -9.541955f, -1440.917f, 31.34692f) < 3f) {
			iLocal_43 = 0;
			vLocal_79 = {-9.8135f, -1440.913f, 31.3654f};
			vLocal_82 = {0f, 0f, -134.3211f};
			vLocal_88 = {-9.3078f, -1440.931f, 30.1015f};
			StringCopy(&cLocal_46, "SE_FRANKLIN_AUNT_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_FRANKLINS_HOUSE_SOCEN", 64);
		}
	}
	else if (entity::get_entity_model(iLocal_37) == joaat("prop_trev_tv_01")) {
		if (system::vdist(vLocal_31, 1978.425f, 3819.657f, 34.26763f) < 3f) {
			iLocal_43 = 2;
			vLocal_79 = {1978.23f, 3819.65f, 34.2724f};
			vLocal_82 = {0f, 0f, -105.15f};
			vLocal_88 = {1978.33f, 3819.717f, 32.4501f};
			func_58();
			StringCopy(&cLocal_46, "SE_TREVOR_TRAILER_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_TREVORS_TRAILER", 64);
		}
	}
	else if (entity::get_entity_model(iLocal_37) == joaat("prop_tv_flat_01")) {
		if (system::vdist(vLocal_31, 3.6654f, 529.8486f, 173.6281f) < 3f) {
			iLocal_43 = 1;
			vLocal_79 = {2.5724f, 527.9989f, 176.1619f};
			vLocal_82 = {0f, 0f, -29.9488f};
			vLocal_88 = {3.6654f, 529.8486f, 173.6281f};
			StringCopy(&cLocal_46, "SE_FRANKLIN_HILLS_HOUSE_RADIO_01", 64);
			StringCopy(&cLocal_62, "TV_FRANKLINS_HOUSE_VINEWOOD", 64);
		}
	}
	else if (entity::get_entity_model(iLocal_37) == 1340914825) {
		if (system::vdist(vLocal_31, -1160.695f, -1520.745f, 10.49168f) < 3f) {
			iLocal_43 = 3;
			vLocal_79 = {-1160.502f, -1520.76f, 10.7393f};
			vLocal_82 = {0f, 0f, 60.061f};
			vLocal_88 = {-1160.143f, -1520.495f, 9.6555f};
			StringCopy(&cLocal_46, "TREVOR_APARTMENT_RADIO", 64);
			StringCopy(&cLocal_62, "TV_FLOYDS_APARTMENT", 64);
		}
	}
	else if (entity::get_entity_model(iLocal_37) == joaat("v_ilev_mm_screen2") ||
			 entity::get_entity_model(iLocal_37) == joaat("v_ilev_mm_scre_off")) {
		if (system::vdist(vLocal_31, -802.2527f, 173.0374f, 74.35708f) < 3f) {
			iLocal_43 = 4;
			vLocal_79 = {-802.8972f, 172.537f, 74.5801f};
			vLocal_82 = {0f, 0f, -69.0273f};
			vLocal_88 = {-800.7292f, 173.2194f, 71.8348f};
			StringCopy(&cLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_62, "TV_MICHAELS_HOUSE", 64);
		}
	}
	else if (entity::get_entity_model(iLocal_37) == joaat("des_tvsmash_start")) {
		if (system::vdist(vLocal_31, -809.962f, 170.919f, 75.7407f) < 3f) {
			iLocal_43 = 5;
			vLocal_79 = {-808.3051f, 171.2623f, 77.2822f};
			vLocal_82 = {1.8886f, 0f, 110.9232f};
			vLocal_88 = {-809.962f, 170.919f, 75.7407f};
			StringCopy(&cLocal_46, "SE_MICHAELS_HOUSE_RADIO", 64);
			StringCopy(&cLocal_62, "TV_MICHAELS_HOUSE", 64);
		}
	}
}

// Position - 0x259C
void func_58() {
	iLocal_38 = object::create_object_no_offset(joaat("prop_tt_screenstatic"), vLocal_31, 1, 1, 0);
	entity::set_entity_heading(iLocal_38, fLocal_34);
	entity::set_entity_visible(iLocal_38, 1, 0);
	entity::freeze_entity_position(iLocal_38, 1);
}

// Position - 0x25CD
void func_59() {
	graphics::_0xF7B38B8305F1FE8B(0, func_39(1), 0);
	if (func_56(22)) {
		graphics::_0xF7B38B8305F1FE8B(1, func_39(12), 0);
	}
	else {
		graphics::_0xF7B38B8305F1FE8B(1, func_39(2), 0);
	}
}

// Position - 0x2603
void func_60() {
	if (iLocal_43 == -1) {
		return;
	}
	if (Global_25250[iLocal_43 /*11*/].f_10 == 0) {
		if (iLocal_86 == 1) {
			if (entity::does_entity_exist(iLocal_40)) {
				entity::set_entity_invincible(iLocal_40, 0);
			}
			if (entity::does_entity_exist(iLocal_37)) {
				entity::set_entity_invincible(iLocal_37, 0);
			}
			if (entity::does_entity_exist(iLocal_39)) {
				entity::set_entity_invincible(iLocal_39, 0);
			}
			if (entity::does_entity_exist(iLocal_38)) {
				entity::set_entity_invincible(iLocal_38, 0);
			}
			iLocal_86 = 0;
		}
	}
	else if (iLocal_86 == 0) {
		if (entity::does_entity_exist(iLocal_40)) {
			entity::set_entity_invincible(iLocal_40, 1);
		}
		if (entity::does_entity_exist(iLocal_37)) {
			entity::set_entity_invincible(iLocal_37, 1);
		}
		if (entity::does_entity_exist(iLocal_39)) {
			entity::set_entity_invincible(iLocal_39, 1);
		}
		if (entity::does_entity_exist(iLocal_38)) {
			entity::set_entity_invincible(iLocal_38, 1);
		}
		iLocal_86 = 1;
	}
}

// Position - 0x26B6
bool func_61(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x26C4
int func_62(int iParam0) {
	if (iParam0 != -1) {
		if (Global_25250[iParam0 /*11*/].f_5) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x26E3
int func_63() {
	if (gameplay::is_pc_version()) {
		if (gameplay::_0xD10282B6E3751BA0() == 1f) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x2700
int func_64() {
	if (Global_88746 != -1) {
		return gameplay::is_bit_set(Global_82612[Global_88746 /*34*/].f_15, 20);
	}
	return 0;
}

// Position - 0x2726
void func_65() {}

// Position - 0x272E
void func_66() {
	if (iLocal_43 == -1) {
		script::terminate_this_thread();
	}
	func_41(&iLocal_42);
	if (iLocal_43 != -1) {
		func_1();
		Global_25250[iLocal_43 /*11*/].f_6 = 0;
		Global_25250[iLocal_43 /*11*/].f_7 = 0;
		Global_25250[iLocal_43 /*11*/].f_8 = 0;
		Global_25250[iLocal_43 /*11*/].f_4 = 0;
		Global_25250[iLocal_43 /*11*/].f_5 = 0;
		Global_25250[iLocal_43 /*11*/].f_2 = 0;
		Global_25250[iLocal_43 /*11*/] = -1;
		Global_25250[iLocal_43 /*11*/].f_1 = 0;
		Global_25250[iLocal_43 /*11*/].f_10 = 0;
	}
	if (func_40("TV_HLP1") || func_40("TV_HLP5") || func_40("TV_HLP6")) {
		ui::clear_help(1);
	}
	system::wait(0);
	func_67();
	if (audio::is_audio_scene_active(&cLocal_62)) {
		audio::stop_audio_scene(&cLocal_62);
	}
	audio::_0x19AF7ED9B9D23058();
	func_2();
	script::terminate_this_thread();
}

// Position - 0x27F5
void func_67() {
	func_50();
	if (entity::does_entity_exist(iLocal_37)) {
		if (entity::get_entity_model(iLocal_37) == joaat("v_ilev_mm_screen2")) {
			object::delete_object(&iLocal_37);
			streaming::set_model_as_no_longer_needed(joaat("v_ilev_mm_screen2"));
		}
	}
	if (entity::does_entity_exist(iLocal_39)) {
		object::delete_object(&iLocal_39);
		streaming::set_model_as_no_longer_needed(joaat("v_ilev_mm_screen2_vl"));
	}
	if (entity::does_entity_exist(iLocal_38)) {
		object::delete_object(&iLocal_38);
		streaming::set_model_as_no_longer_needed(joaat("prop_tt_screenstatic"));
	}
}
