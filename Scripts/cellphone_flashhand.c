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
int iLocal_18 = 0;
var uLocal_19 = 0;
var uLocal_20 = 0;
char *sLocal_21 = NULL;
float fLocal_22 = 0f;
float fLocal_23 = 0f;
float fLocal_24 = 0f;
float fLocal_25 = 0f;
float fLocal_26 = 0f;
float fLocal_27 = 0f;
int iLocal_28 = 0;
var uLocal_29 = 0;
int iLocal_30 = 0;
int iLocal_31 = 0;
int iLocal_32 = 0;
struct<2> Local_33 = {
	0, 0
};
var uLocal_35 = 0;
int iLocal_36 = 0;
int iLocal_37 = 0;
int iLocal_38 = 0;
vector3 vLocal_39 = {0f, 0f, 0f};
int iLocal_42 = 0;
int iLocal_43 = 0;
int iLocal_44 = 0;
int iLocal_45 = 0;
int iLocal_46 = 0;
int iLocal_47 = 0;
int iLocal_48 = 0;
int iLocal_49 = 0;
struct<2> Local_50 = {
	0, 0
};
var uLocal_52 = 0;
var uLocal_53 = 0;
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
var uLocal_67 = 0;
bool bLocal_68 = 0;
int iLocal_69 = 0;
int iLocal_70 = 0;
int iLocal_71 = 0;
int iLocal_72 = 0;
int iLocal_73 = 0;
int iLocal_74 = 0;
vector3 vLocal_75 = {0f, 0f, 0f};
int iLocal_78 = 0;
int iLocal_79 = 0;
int iLocal_80 = 0;
#pragma endregion //}

void __EntryFunction__() {
	var uVar0;
	struct<13> Var16;
	int iVar29;
	float fVar30;
	float fVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	int iVar35;

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
	sLocal_21 = "NULL";
	fLocal_22 = 0.73f;
	fLocal_23 = 0.55f;
	fLocal_24 = 0.73f;
	fLocal_25 = 0.45f;
	fLocal_26 = 0f;
	fLocal_27 = 0f;
	gameplay::network_set_script_is_safe_for_network_game();
	Global_14601 = 145;
	gameplay::clear_bit(&G_SleepModeOffOn11, 8);
	gameplay::clear_bit(&G_SleepModeOnOn25, 14);
	gameplay::clear_bit(&Global_2595318, 3);
	gameplay::clear_bit(&G_SleepModeOffOn11, 10);
	gameplay::clear_bit(&G_SleepModeOnOn25, 17);
	gameplay::clear_bit(&G_SleepModeOnOn25, 9);
	gameplay::clear_bit(&G_SleepModeOnOn25, 26);
	gameplay::clear_bit(&G_SleepModeOnOn25, 23);
	gameplay::clear_bit(&G_SleepModeOffOn11, 24);
	gameplay::clear_bit(&G_SleepModeOffOn11, 25);
	gameplay::clear_bit(&G_SleepModeOffOn11, 27);
	gameplay::clear_bit(&G_SleepModeOffOn11, 26);
	gameplay::clear_bit(&G_SleepModeOnOn25, 30);
	Global_2502457 = 0;
	iLocal_78 = 0;
	graphics::_0x1072F115DAB0717E(0, 0);
	mobile::script_is_moving_mobile_phone_offscreen(0);
	Global_14409 = 0;
	iLocal_30 = 0;
	Global_14387 = 0;
	Global_14427 = 0;
	Global_14428 = 0;
	func_105();
	Global_14374 = {Global_14406};
	Global_14447 = 4;
	Global_14448 = 0;
	Global_2918 = 1;
	Global_14423 = Global_14447;
	if (Global_14425 == 0) {
		Global_14426 = 0;
		if (Global_69702) {
			Global_14424 = unk_0x67D02A194A2FC2BD("cellphone_ifruit");
			iLocal_44 = 1;
			if (iLocal_44 == 1) {
			}
		}
		else if (Global_14386) {
			Global_14431 = 1;
			Global_14424 = unk_0x67D02A194A2FC2BD("cellphone_prologue");
		}
		else {
			Global_14424 = unk_0x67D02A194A2FC2BD(&Global_101700.f_13010[Global_14443 /*20*/]);
		}
		system::settimera(0);
		while (!graphics::has_scaleform_movie_loaded(Global_14424) && Global_14426 == 0) {
			system::wait(0);
			if (system::timera() > 20000) {
				Global_14426 = 1;
			}
			if (gameplay::is_pc_version()) {
				if (decorator::decor_exist_on(player::player_ped_id(), "Synched")) {
					if (system::timera() > 2000) {
						Global_14426 = 1;
					}
				}
			}
			if (Global_14442 == 1) {
				func_104();
			}
		}
		if (Global_14426 == 1) {
			if (graphics::has_scaleform_movie_loaded(Global_14424)) {
				func_103(Global_14424, "SHUTDOWN_MOVIE");
			}
			system::wait(0);
			graphics::set_scaleform_movie_as_no_longer_needed(&Global_14424);
			Global_14384 = 0;
			Global_14425 = 0;
			Global_14602 = 0;
			if (Global_101700.f_13010.f_84 == 1) {
				Global_101700.f_13010.f_84 = 0;
				ui::clear_floating_help(0, 1);
			}
			Global_14387 = 1;
			Global_14443.f_1 = 3;
			func_102();
			Global_14431 = 0;
			mobile::destroy_mobile_phone();
			gameplay::clear_bit(&G_SleepModeOnOn25, 9);
			gameplay::clear_bit(&G_SleepModeOnOn25, 27);
			gameplay::clear_bit(&G_SleepModeOnOn25, 30);
			gameplay::clear_bit(&G_SleepModeOffOn11, 5);
			gameplay::clear_bit(&G_SleepModeOffOn11, 21);
			gameplay::clear_bit(&Global_2315, 2);
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				audio::stop_ped_ringtone(player::player_ped_id());
			}
			if (entity::is_entity_dead(player::player_ped_id(), 0)) {
				audio::stop_ped_ringtone(player::player_ped_id());
			}
			Global_14604 = 0;
			Global_16805 = 0;
			Global_16804 = 0;
			Global_15758 = 0;
			func_100();
			func_98();
			Global_2595533 = 0;
			script::terminate_this_thread();
		}
		Global_14367 = 0.1f;
		Global_14368 = 0.38f;
		Global_14369 = 0.195f;
		Global_14370 = 0.05f;
		if (gameplay::is_xbox360_version() || gameplay::is_durango_version() || gameplay::is_pc_version()) {
			ui::get_hud_colour(18, &iLocal_64, &iLocal_65, &iLocal_66, &uLocal_67);
			func_97(Global_14424, "SET_SOFT_KEYS_COLOUR", 2f, system::to_float(iLocal_64), system::to_float(iLocal_65),
					system::to_float(iLocal_66), -1082130432);
			ui::get_hud_colour(9, &iLocal_64, &iLocal_65, &iLocal_66, &uLocal_67);
			func_97(Global_14424, "SET_SOFT_KEYS_COLOUR", 1f, system::to_float(iLocal_64), system::to_float(iLocal_65),
					system::to_float(iLocal_66), -1082130432);
			ui::get_hud_colour(6, &iLocal_64, &iLocal_65, &iLocal_66, &uLocal_67);
			func_97(Global_14424, "SET_SOFT_KEYS_COLOUR", 3f, system::to_float(iLocal_64), system::to_float(iLocal_65),
					system::to_float(iLocal_66), -1082130432);
		}
		else {
			ui::get_hud_colour(9, &iLocal_64, &iLocal_65, &iLocal_66, &uLocal_67);
			func_97(Global_14424, "SET_SOFT_KEYS_COLOUR", 2f, system::to_float(iLocal_64), system::to_float(iLocal_65),
					system::to_float(iLocal_66), -1082130432);
			ui::get_hud_colour(126, &iLocal_64, &iLocal_65, &iLocal_66, &uLocal_67);
			func_97(Global_14424, "SET_SOFT_KEYS_COLOUR", 1f, system::to_float(iLocal_64), system::to_float(iLocal_65),
					system::to_float(iLocal_66), -1082130432);
			ui::get_hud_colour(6, &iLocal_64, &iLocal_65, &iLocal_66, &uLocal_67);
			func_97(Global_14424, "SET_SOFT_KEYS_COLOUR", 3f, system::to_float(iLocal_64), system::to_float(iLocal_65),
					system::to_float(iLocal_66), -1082130432);
		}
		if (Global_14426 == 0) {
		}
		func_96();
		if (Global_69702) {
			StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
		}
		Global_14425 = 1;
	}
	Global_2316 = 99;
	func_95();
	if (player::is_player_playing(player::player_id())) {
		iLocal_56 = entity::get_entity_health(player::player_ped_id());
	}
	if (ui::is_radar_hidden()) {
		Global_16759 = 1;
	}
	else {
		Global_16759 = 0;
	}
	func_97(Global_14424, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	Global_14385 = 1;
	if (Global_69702) {
		Global_14606 = 0;
		Global_2595530 = func_92(2022, -1, 0);
		if (Global_2595530 < 1 || Global_2595530 > 7) {
			Global_2595530 = 1;
		}
		func_97(Global_14424, "SET_THEME", system::to_float(Global_2595530), -1082130432, -1082130432, -1082130432,
				-1082130432);
		func_91();
		Global_2595531 = func_92(2021, -1, 0);
		if (Global_2595531 == 0) {
			Var16 = {func_90(player::player_id())};
			iVar29 = 0;
			if (network::_0x72D918C99BCACC54(0) == 0) {
			}
			if (Global_2595534 == 1) {
			}
			if (network::network_clan_player_is_active(&Var16) && network::_0x72D918C99BCACC54(0) &&
				Global_2595534 == 0) {
				if (network::_0x5835D9CD92E83184(&Var16, &uVar0)) {
				}
				else {
					iVar29 = 1;
				}
				if (iVar29 == 0) {
					graphics::_push_scaleform_movie_function(Global_14424, "SET_BACKGROUND_CREW_IMAGE");
					graphics::begin_text_command_scaleform_string("CELL_2000");
					ui::add_text_component_substring_player_name(&uVar0);
					graphics::end_text_command_scaleform_string();
					graphics::_pop_scaleform_movie_function_void();
				}
				else {
					func_97(Global_14424, "SET_BACKGROUND_IMAGE", system::to_float(0), -1082130432, -1082130432,
							-1082130432, -1082130432);
				}
			}
			else {
				func_97(Global_14424, "SET_BACKGROUND_IMAGE", system::to_float(0), -1082130432, -1082130432,
						-1082130432, -1082130432);
			}
		}
		else {
			func_97(Global_14424, "SET_BACKGROUND_IMAGE", system::to_float(Global_2595531), -1082130432, -1082130432,
					-1082130432, -1082130432);
		}
	}
	else {
		if (Global_14386) {
			Global_14606 = 0;
		}
		else if (Global_101700.f_13010.f_88 == 1 || Global_101700.f_13010.f_89 == 1) {
			Global_14606 = 0;
		}
		else {
			Global_14606 = 0;
		}
		func_97(Global_14424, "SET_THEME", system::to_float(Global_101700.f_13010[Global_14443 /*20*/].f_6),
				-1082130432, -1082130432, -1082130432, -1082130432);
		if (Global_3117 == 0) {
			func_97(Global_14424, "SET_BACKGROUND_IMAGE",
					system::to_float(Global_101700.f_13010[Global_14443 /*20*/].f_9), -1082130432, -1082130432,
					-1082130432, -1082130432);
		}
		else {
			mobile::set_mobile_phone_scale(575f);
		}
		func_91();
	}
	uLocal_45 = func_89();
	if (Global_14386 == 0) {
		func_78();
	}
	Global_14421 = 0;
	Global_14605 = 0;
	gameplay::clear_bit(&G_SleepModeOnOn25, 9);
	Global_2452520 = 0;
	if (func_76(0) && network::network_is_signed_online()) {
		Global_2452520 = 1;
	}
	func_97(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_75();
	func_73();
	func_72(1);
	audio::play_sound_frontend(-1, "Pull_Out", &Global_14432, 1);
	system::settimerb(0);
	while (Global_14443.f_1 < 6 && Global_14426 == 0) {
		system::wait(0);
		if (system::timerb() > 10000) {
			Global_14426 = 1;
		}
		if (Global_14443.f_1 < 4) {
			Global_14426 = 1;
		}
	}
	if (Global_14443.f_1 == 5 || Global_14443.f_1 == 6) {
		if (func_71(14)) {
			func_97(Global_14424, "DISPLAY_VIEW", 1f, system::to_float(6), -1082130432, -1082130432, -1082130432);
		}
		else {
			func_97(Global_14424, "DISPLAY_VIEW", 1f, system::to_float(Global_14447), -1082130432, -1082130432,
					-1082130432);
		}
		if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2) {
			func_97(Global_14424, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else {
			func_97(Global_14424, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (Global_14431) {
			func_70(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		}
		else {
			func_70(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_14431) {
			func_70(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else {
			func_70(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_14606 == 0) {
			func_70(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			gameplay::clear_bit(&G_SleepModeOnOn25, 17);
		}
		else if (Global_69702) {
			func_70(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			gameplay::clear_bit(&G_SleepModeOnOn25, 17);
		}
		else {
			if (Global_14605 == 1) {
				if (Global_14431) {
					func_70(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else {
					func_70(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else if (Global_14431) {
				func_70(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else {
				func_70(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			gameplay::set_bit(&G_SleepModeOnOn25, 17);
		}
	}
	Global_14429 = 1;
	func_69();
	if (network::network_is_game_in_progress()) {
		iLocal_62 = network::get_network_time();
	}
	else {
		iLocal_57 = gameplay::get_game_timer();
	}
	if (Global_14602 == 1) {
		if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2) {
			if (Global_101700.f_13010.f_84 == 0) {
				Global_101700.f_13010.f_84 = 1;
				if (Global_14388 == 0) {
					fVar30 = 0.75f;
					fVar31 = 0.8f;
				}
				else {
					fVar30 = 0.65f;
					fVar31 = 0.77f;
				}
				if (fVar30 == fVar31) {
				}
				func_68("CELL_7052", 10000);
			}
		}
	}
	if (Global_69702 == 0) {
		iLocal_18 = gameplay::get_game_timer() + 375;
	}
	if (func_67()) {
		iLocal_36 = 1;
	}
	else {
		iLocal_36 = 0;
	}
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (ped::is_ped_in_cover(player::player_ped_id(), 0)) {
			iLocal_37 = 1;
			if (func_67()) {
				func_66();
			}
		}
		else {
			iLocal_37 = 0;
		}
	}
	if (gameplay::is_pc_version()) {
		if (Global_69702 == 0) {
			iLocal_59 = gameplay::get_game_timer();
			iLocal_61 = 0;
		}
	}
	while (true) {
		system::wait(0);
		if (gameplay::is_bit_set(Global_2595318, 24)) {
			if (!Global_14605) {
				if (Global_14443.f_1 == 6 || Global_14443.f_1 > 6) {
					gameplay::clear_bit(&Global_2595318, 24);
					func_75();
					func_97(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432,
							-1082130432);
					func_72(1);
					if (Global_14443.f_1 == 6) {
						func_97(Global_14424, "DISPLAY_VIEW", 1f, system::to_float(Global_14423), -1082130432,
								-1082130432, -1082130432);
					}
				}
			}
		}
		if (func_65()) {
			controls::disable_control_action(0, 114, 1);
		}
		if (Global_69702 == 0) {
			if (iLocal_32) {
				if (Global_14443.f_1 == 6 || Global_14443.f_1 == 7) {
					iLocal_32 = 0;
				}
			}
			if (Global_14443.f_1 > 4) {
				if (gameplay::is_bit_set(G_SleepModeOnOn25, 14) && Global_2595533 == 0 && Global_14383 == 0) {
					if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
						if (func_64()) {
							mobile::get_mobile_phone_position(&Local_33);
							if (Global_14389[Global_14388 /*3*/].f_1 != Local_33.f_1) {
								func_62();
							}
						}
						else {
							mobile::get_mobile_phone_position(&Local_33);
							if (Global_14396[Global_14388 /*3*/].f_1 != Local_33.f_1) {
								if (!func_65()) {
								}
								if (script::_get_number_of_instances_of_script_with_name_hash(joaat("appemail")) < 1) {
									func_60();
								}
							}
						}
						if (iLocal_37 == 0) {
							if (ped::is_ped_in_cover(player::player_ped_id(), 0)) {
								iLocal_37 = 1;
								func_60();
								func_66();
							}
						}
						else if (!ped::is_ped_in_cover(player::player_ped_id(), 0)) {
							iLocal_37 = 0;
							func_62();
							if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
								if (Global_15745 != 2) {
									func_59();
								}
							}
						}
						if (iLocal_36 == 0) {
							if (func_67()) {
								iLocal_36 = 1;
								if (ped::is_ped_in_cover(player::player_ped_id(), 0)) {
									func_66();
								}
								func_62();
							}
						}
						else {
							if (ped::get_ped_stealth_movement(player::player_ped_id())) {
								if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
									controls::disable_control_action(0, 26, 1);
								}
							}
							if (func_67() == 0) {
								iLocal_36 = 0;
								func_60();
							}
						}
					}
				}
			}
		}
		if (Global_2452520 == 1) {
			if (!func_76(0) || !network::network_is_signed_online()) {
				if (script::_get_number_of_instances_of_script_with_name_hash(joaat("appcamera")) == 0) {
					if (Global_14443.f_1 > 3) {
						Global_14428 = 1;
						func_58();
						func_55(0);
						Global_2452520 = 0;
					}
				}
			}
		}
		if (Global_14607 == 0) {
			if (Global_35781 != 15 || Global_2318 == 1 || func_54(0)) {
				if (!Global_14605) {
					if (Global_14443.f_1 == 6) {
						Global_2319 = 42;
						func_97(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432,
								-1082130432);
						func_75();
						func_73();
						func_72(1);
						func_97(Global_14424, "DISPLAY_VIEW", 1f, system::to_float(Global_14423), -1082130432,
								-1082130432, -1082130432);
					}
				}
				Global_14607 = 1;
			}
		}
		else if (Global_35781 == 15 && func_54(0) == 0 && Global_2318 == 0) {
			if (!Global_14605) {
				if (Global_14443.f_1 == 6) {
					Global_2319 = 255;
					func_97(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432,
							-1082130432);
					func_75();
					func_73();
					func_72(1);
					func_97(Global_14424, "DISPLAY_VIEW", 1f, system::to_float(Global_14423), -1082130432, -1082130432,
							-1082130432);
				}
			}
			Global_14607 = 0;
		}
		if (Global_14608 == 0) {
			if (gameplay::is_bit_set(G_SleepModeOffOn11, 3)) {
				if (!Global_14605) {
					if (Global_14443.f_1 == 6) {
						func_97(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432,
								-1082130432);
						func_75();
						func_73();
						func_72(1);
						func_97(Global_14424, "DISPLAY_VIEW", 1f, system::to_float(Global_14423), -1082130432,
								-1082130432, -1082130432);
					}
				}
				Global_14608 = 1;
			}
		}
		else if (!gameplay::is_bit_set(G_SleepModeOffOn11, 3)) {
			if (!Global_14605) {
				if (Global_14443.f_1 == 6) {
					func_97(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432,
							-1082130432);
					func_75();
					func_73();
					func_72(1);
					func_97(Global_14424, "DISPLAY_VIEW", 1f, system::to_float(Global_14423), -1082130432, -1082130432,
							-1082130432);
				}
			}
			Global_14608 = 0;
		}
		if (!ui::is_pause_menu_active()) {
			if (Global_14371.f_1 != Global_14389[Global_14388 /*3*/].f_1 || func_67()) {
				if (Global_14443.f_1 > 3) {
					if (script::_get_number_of_instances_of_script_with_name_hash(joaat("apptrackify")) == 0) {
						if (Global_69702) {
							if (Global_14443.f_1 == 9) {
								if (Global_15798 == 1 || gameplay::is_bit_set(G_SleepModeOffOn11, 23)) {
									controls::set_input_exclusive(0, Global_14412);
								}
							}
							else {
								controls::set_input_exclusive(0, Global_14412);
							}
						}
						else {
							controls::set_input_exclusive(0, Global_14412);
						}
					}
					if (script::_get_number_of_instances_of_script_with_name_hash(-1641206367) == 0) {
						controls::set_input_exclusive(0, Global_14413);
						if (gameplay::is_bit_set(G_SleepModeOnOn25, 17)) {
							controls::set_input_exclusive(0, Global_14414);
						}
					}
					if (!func_53() && script::_get_number_of_instances_of_script_with_name_hash(-1641206367) == 0) {
						controls::set_input_exclusive(0, Global_14415);
					}
				}
			}
			if (Global_14371.f_1 == Global_14389[Global_14388 /*3*/].f_1) {
			}
		}
		if (!controls::_is_input_disabled(2)) {
			controls::disable_control_action(0, 140, 1);
			controls::disable_control_action(0, 141, 1);
		}
		if (!ui::is_pause_menu_active()) {
			if (!G_DisableMessagesAndCalls2) {
				if (!func_65()) {
					controls::set_input_exclusive(0, 180);
					controls::set_input_exclusive(0, 181);
					controls::enable_control_action(0, 180, 1);
					controls::enable_control_action(0, 181, 1);
				}
				controls::set_input_exclusive(0, Global_14417);
				if (!func_53()) {
					controls::set_input_exclusive(0, Global_14418);
				}
				if (Global_14443.f_1 > 4) {
					controls::set_input_exclusive(0, Global_14420);
				}
			}
		}
		if (func_52(2, Global_14411, 0)) {
			iLocal_54 = 1;
			system::settimera(0);
		}
		if (iLocal_31 == 1) {
			if (!controls::is_control_pressed(2, Global_14412)) {
				Global_2317 = 1;
				iLocal_31 = 0;
			}
			if (Global_14443.f_1 <= 3) {
				iLocal_31 = 0;
			}
		}
		if (iLocal_54) {
			if (controls::is_control_pressed(2, Global_14411)) {
				if (system::timera() > 5000) {
					Global_14443.f_1 = 3;
					func_50();
				}
			}
			else {
				iLocal_54 = 0;
			}
		}
		Global_2921 = gameplay::get_game_timer();
		if (Global_14430) {
			func_69();
			Global_14429 = 1;
			Global_14430 = 0;
		}
		if (Global_14604 == 0) {
			ui::hide_hud_component_this_frame(6);
			ui::hide_hud_component_this_frame(7);
			ui::hide_hud_component_this_frame(8);
			ui::hide_hud_component_this_frame(9);
			func_44();
			func_43();
			ui::set_text_render_id(iLocal_42);
			if (Global_14429 == 1) {
				graphics::_set_2d_layer(4);
				if (Global_14386) {
					graphics::draw_scaleform_movie(Global_14424, Global_14363, Global_14364, Global_14365, Global_14366,
												   255, 255, 255, 255, 0);
				}
				else {
					graphics::draw_scaleform_movie(Global_14424, Global_14363, Global_14364, Global_14365, Global_14366,
												   255, 255, 255, 255, 0);
				}
				func_95();
			}
			if (Global_14383 == 1) {
				if (Global_14443.f_1 > 3) {
					func_42();
				}
			}
			else if (Global_14443.f_1 > 3) {
				if (Global_2595533 == 1) {
					func_41();
				}
				if (gameplay::is_bit_set(G_SleepModeOffOn11, 25)) {
					if (Global_69702 == 1) {
						func_40();
					}
				}
				else if (!gameplay::is_bit_set(G_SleepModeOffOn11, 24)) {
					if (gameplay::is_bit_set(G_SleepModeOffOn11, 26)) {
						if (func_52(2, Global_14410, 0)) {
							gameplay::set_bit(&G_SleepModeOffOn11, 25);
							gameplay::clear_bit(&G_SleepModeOffOn11, 26);
							gameplay::clear_bit(&Global_2315, 2);
						}
					}
				}
				else if (Global_69702 == 1) {
					func_39();
				}
			}
		}
		if (iLocal_30) {
			if (Global_14443.f_1 == 6) {
				func_35();
			}
		}
		else if (!gameplay::is_bit_set(G_SleepModeOnOn25, 23)) {
			if (Global_14443.f_1 == 5 || Global_14443.f_1 == 6) {
				if (Global_14604 == 0) {
					if (script::_get_number_of_instances_of_script_with_name_hash(joaat("appcamera")) < 1 &&
						script::_get_number_of_instances_of_script_with_name_hash(joaat("appemail")) < 1) {
						if (Global_14386 == 0) {
							if (gameplay::is_bit_set(G_SleepModeOnOn25, 14)) {
								if (!Global_69702) {
									if (iLocal_31 == 0) {
										if (!func_71(14)) {
											func_34();
										}
										else if (Global_2452520) {
											func_33();
										}
									}
								}
								else {
									func_22();
								}
							}
						}
						if (gameplay::is_bit_set(G_SleepModeOnOn25, 9)) {
							func_19(0, 0, 1, 1);
						}
						else if (Global_16804 == 0) {
							if (!gameplay::is_bit_set(Global_2595318, 3)) {
								if (Global_69702) {
									func_18();
								}
								func_17();
								func_15();
							}
						}
						else {
							if (Global_69702) {
								func_18();
							}
							if (!gameplay::is_bit_set(Global_2595318, 3)) {
								if (Global_16804 == 1) {
									if (gameplay::is_bit_set(Global_2595318, 1)) {
										if (gameplay::is_bit_set(G_SleepModeOnOn25, 14)) {
											if (Global_69702) {
												func_19(7, 0, 1, 0);
											}
											else {
												Global_16805 = 0;
											}
											Global_16804 = 0;
											gameplay::clear_bit(&Global_2595318, 1);
										}
									}
									else if (gameplay::is_bit_set(G_SleepModeOnOn25, 14)) {
										func_19(7, 0, 1, 0);
										Global_16804 = 0;
									}
								}
								else {
									if (Global_16804 == 3) {
										func_19(1, 0, 1, 0);
										Global_16804 = 0;
									}
									if (Global_16804 == 2) {
										func_19(14, 0, 1, 0);
										Global_16804 = 0;
									}
									if (Global_16804 == 4) {
										func_19(23, 0, 1, 0);
										Global_16804 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (script::has_script_loaded(&Global_2320[Global_14446 /*15*/].f_5)) {
			if (Global_14446 == 0) {
				if (script::_get_number_of_instances_of_script_with_name_hash(Global_2320[Global_14446 /*15*/].f_9) ==
					0) {
					Global_14441 = system::start_new_script(&Global_2320[Global_14446 /*15*/].f_5, 4000);
				}
			}
			else {
				iVar32 = 0;
				if (Global_14446 == 23) {
					if (gameplay::is_bit_set(Global_2595318, 4) == 0 && Global_1573849 == 0) {
					}
				}
				if (Global_14446 == 2 || iVar32 == 1) {
					if (script::_get_number_of_instances_of_script_with_name_hash(
							Global_2320[Global_14446 /*15*/].f_9) == 0) {
						Global_14441 = system::start_new_script(&Global_2320[Global_14446 /*15*/].f_5, 4592);
					}
				}
				else if (script::_get_number_of_instances_of_script_with_name_hash(
							 Global_2320[Global_14446 /*15*/].f_9) == 0) {
					Global_14441 = system::start_new_script(&Global_2320[Global_14446 /*15*/].f_5, 2552);
				}
			}
			script::set_script_as_no_longer_needed(&Global_2320[Global_14446 /*15*/].f_5);
			Global_2316 = 99;
			gameplay::clear_bit(&G_SleepModeOnOn25, 23);
		}
		if (controls::_is_input_disabled(2)) {
			if (ui::is_pause_menu_active()) {
				controls::disable_control_action(2, 200, 1);
			}
		}
		if (Global_14443.f_1 == 1) {
			func_6();
		}
		if (Global_14443.f_1 == 0) {
			func_6();
		}
		if (Global_14443.f_1 == 3) {
			func_6();
		}
		else {
			if (Global_15758) {
				if (Global_14443.f_1 == 9) {
					if (Global_69702) {
						if (!gameplay::is_bit_set(G_SleepModeOffOn11, 31)) {
							if (!gameplay::is_bit_set(G_SleepModeOffOn11, 27)) {
								if (func_5()) {
									if (!gameplay::is_bit_set(G_SleepModeOnOn25, 9)) {
										if (func_52(2, Global_14415, 0)) {
											if (!gameplay::is_pc_version()) {
												if (Global_14442 != 1) {
													if (Global_14443.f_1 > 6) {
														gameplay::set_bit(&G_SleepModeOffOn11, 24);
														gameplay::set_bit(&G_SleepModeOffOn11, 27);
														gameplay::clear_bit(&G_SleepModeOffOn11, 26);
														gameplay::clear_bit(&G_SleepModeOffOn11, 25);
														gameplay::set_bit(&Global_2494199.f_1640, 17);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (Global_14426 == 1) {
				Global_14428 = 1;
				func_55(0);
			}
			if (Global_14427 == 1) {
				Global_14428 = 1;
				func_55(0);
			}
			if (Global_69702) {
				if (!gameplay::is_bit_set(Global_2315, 0)) {
					if (ui::is_pause_menu_active()) {
						if (Global_2499540.f_1 == 1) {
						}
						else {
							func_58();
							func_55(0);
						}
					}
				}
			}
			if (player::is_player_playing(player::player_id())) {
				if (entity::is_entity_in_water(player::player_ped_id())) {
					if (entity::get_entity_submerged_level(player::player_ped_id()) > 0.3f) {
						gameplay::set_bit(&G_SleepModeOffOn11, 4);
					}
					if (entity::get_entity_submerged_level(player::player_ped_id()) == 1f) {
						Global_14428 = 1;
						func_58();
						func_55(0);
					}
				}
				if (func_71(14)) {
					if (entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[0 /*29*/] ||
						entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[1 /*29*/] ||
						entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[2 /*29*/]) {
						iLocal_79 = 0;
					}
					else if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						iLocal_79 = 1;
					}
				}
				if (ped::is_ped_in_any_train(player::player_ped_id()) ||
					player::is_player_riding_train(player::player_id()) ||
					ped::is_ped_on_mount(player::player_ped_id()) || gameplay::is_stunt_jump_in_progress() ||
					player::is_player_climbing(player::player_id()) || ped::is_ped_jacking(player::player_ped_id()) ||
					ped::is_ped_in_cover(player::player_ped_id(), 0) ||
					ped::is_ped_hanging_on_to_vehicle(player::player_ped_id()) ||
					script::_get_number_of_instances_of_script_with_name_hash(joaat("michael1")) > 0 ||
					Global_69963 == 1 || func_3(player::player_ped_id()) ||
					vehicle::is_vehicle_driveable(ped::set_exclusive_phone_relationships(player::player_ped_id()), 0) ||
					ped::is_ped_in_melee_combat(player::player_ped_id()) || graphics::_is_nightvision_inactive() ||
					iLocal_79) {
					if (!Global_14386) {
						gameplay::set_bit(&G_SleepModeOffOn11, 4);
					}
				}
				if (gameplay::is_pc_version()) {
					if (Global_69702 == 0) {
						if (iLocal_61 == 0) {
							if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
								if (!ped::is_ped_sitting_in_vehicle(
										player::player_ped_id(),
										ped::get_vehicle_ped_is_in(player::player_ped_id(), 0))) {
									iLocal_59 = gameplay::get_game_timer();
									iLocal_61 = 1;
								}
							}
						}
						else {
							iLocal_60 = gameplay::get_game_timer();
							iLocal_63 = iLocal_60 - iLocal_59;
							if (iLocal_63 < 4000) {
								gameplay::set_bit(&G_SleepModeOffOn11, 4);
							}
							else {
								iLocal_61 = 0;
							}
						}
					}
				}
				if (controls::is_control_pressed(0, 25) || controls::is_control_pressed(0, 68)) {
					if (Global_69702) {
						weapon::get_current_ped_weapon(player::player_ped_id(), &iLocal_69, 1);
						if (iLocal_69 != joaat("weapon_unarmed") && Global_14443.f_1 < 7) {
							gameplay::set_bit(&G_SleepModeOffOn11, 4);
						}
					}
				}
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
					iLocal_70 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
					if (entity::get_entity_model(iLocal_70) == joaat("submersible") ||
						entity::get_entity_model(iLocal_70) == joaat("submersible2")) {
						iLocal_73 = 1;
					}
					else {
						iLocal_73 = 0;
					}
					if (entity::get_entity_model(iLocal_70) == joaat("rhino") ||
						entity::get_entity_model(iLocal_70) == joaat("cutter") || iLocal_73 ||
						vehicle::is_vehicle_driveable(iLocal_70, 0) == 0) {
						gameplay::set_bit(&G_SleepModeOffOn11, 4);
					}
					if (entity::get_entity_model(iLocal_70) == joaat("valkyrie") ||
						entity::get_entity_model(iLocal_70) == joaat("insurgent") ||
						entity::get_entity_model(iLocal_70) == joaat("technical") ||
						entity::get_entity_model(iLocal_70) == joaat("trash") ||
						entity::get_entity_model(iLocal_70) == joaat("trash2") ||
						entity::get_entity_model(iLocal_70) == joaat("limo2") ||
						entity::get_entity_model(iLocal_70) == joaat("technical2") ||
						entity::get_entity_model(iLocal_70) == joaat("boxville5")) {
						if (ped::is_ped_sitting_in_vehicle(player::player_ped_id(), iLocal_70)) {
							iVar33 = func_2(player::player_ped_id(), iLocal_70);
							if (iVar33 != -2) {
								if (entity::get_entity_model(iLocal_70) == joaat("insurgent") ||
									entity::get_entity_model(iLocal_70) == joaat("limo2")) {
									if (iVar33 == 3) {
										gameplay::set_bit(&G_SleepModeOffOn11, 4);
									}
								}
								if (entity::get_entity_model(iLocal_70) == joaat("trash") ||
									entity::get_entity_model(iLocal_70) == joaat("trash2")) {
									if (iVar33 == 2 || iVar33 == 1) {
										gameplay::set_bit(&G_SleepModeOffOn11, 4);
									}
								}
								if (entity::get_entity_model(iLocal_70) == joaat("technical2")) {
									if (iVar33 == 1) {
										gameplay::set_bit(&G_SleepModeOffOn11, 4);
									}
								}
								if (entity::get_entity_model(iLocal_70) == joaat("boxville5")) {
									if (iVar33 == 3) {
										gameplay::set_bit(&G_SleepModeOffOn11, 4);
									}
								}
								if (vehicle::_0xE33FFA906CE74880(iLocal_70, iVar33)) {
									gameplay::set_bit(&G_SleepModeOffOn11, 4);
								}
							}
						}
					}
					if (controls::is_control_just_pressed(0, 69)) {
						if (Global_69702 == 0) {
							if (Global_14443.f_1 == 6 || Global_14443.f_1 == 7) {
								bVar34 = true;
								if (entity::get_entity_model(iLocal_70) == 886810209 &&
									entity::is_entity_in_water(iLocal_70)) {
									bVar34 = false;
								}
								if (vehicle::is_this_model_a_heli(entity::get_entity_model(iLocal_70)) ||
									vehicle::is_this_model_a_plane(entity::get_entity_model(iLocal_70)) ||
									entity::get_entity_model(iLocal_70) == joaat("submersible") ||
									entity::get_entity_model(iLocal_70) == joaat("submersible2")) {
									bVar34 = false;
								}
								if (bVar34) {
									func_55(0);
								}
							}
						}
					}
				}
				else {
					if (controls::is_control_just_pressed(0, 24)) {
						if (Global_69702 == 0) {
							if (Global_14443.f_1 == 6 || Global_14443.f_1 == 7) {
								func_55(0);
							}
						}
					}
					iLocal_73 = 0;
				}
				if (ped::is_ped_swimming_under_water(player::player_ped_id())) {
					Global_14428 = 1;
					func_58();
					func_55(0);
				}
				if (Global_69702 == 0) {
					if (entity::get_entity_health(player::player_ped_id()) < iLocal_56) {
						if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
							Global_14428 = 1;
							func_58();
							func_55(0);
						}
					}
					if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10) {
						if (ped::is_ped_swimming_under_water(player::player_ped_id())) {
							Global_14428 = 1;
							func_58();
							func_55(0);
						}
					}
				}
				else if (func_65()) {
					if (entity::get_entity_health(player::player_ped_id()) < iLocal_56) {
						if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
							Global_14428 = 1;
							func_58();
							func_55(0);
						}
					}
				}
				if (cam::is_aim_cam_active()) {
					if (!ped::is_ped_in_cover(player::player_ped_id(), 1)) {
						if (!func_65()) {
							weapon::get_current_ped_weapon(player::player_ped_id(), &iLocal_69, 1);
							if (iLocal_69 == joaat("weapon_sniperrifle") || iLocal_69 == joaat("weapon_heavysniper") ||
								iLocal_69 == joaat("weapon_remotesniper")) {
								bLocal_68 = true;
							}
							else {
								bLocal_68 = false;
							}
							if (cam::is_first_person_aim_cam_active()) {
								if (bLocal_68) {
									Global_14428 = 1;
									func_58();
									func_55(0);
								}
							}
						}
					}
				}
				if (ped::is_ped_being_jacked(player::player_ped_id())) {
					Global_14428 = 1;
					func_58();
					func_55(0);
				}
				if (ped::is_ped_being_stunned(player::player_ped_id(), 0)) {
					Global_14428 = 1;
					func_58();
					func_55(0);
				}
				if (player::is_player_being_arrested(player::player_id(), 1)) {
					Global_14428 = 1;
					func_58();
					func_55(0);
				}
				if (ped::is_ped_ragdoll(player::player_ped_id()) ||
					ped::is_ped_in_parachute_free_fall(player::player_ped_id())) {
					if (Global_69702 == 0) {
						Global_14428 = 1;
						func_58();
						func_55(0);
					}
				}
			}
			else {
				iVar35 = 0;
				if (Global_69702 && Global_2499540.f_1 && Global_2499540.f_37 && Global_14443.f_1 == 9) {
					iVar35 = 1;
					if (!gameplay::is_bit_set(G_SleepModeOffOn11, 24)) {
						if (gameplay::is_bit_set(G_SleepModeOffOn11, 26)) {
							gameplay::set_bit(&G_SleepModeOffOn11, 25);
							gameplay::clear_bit(&G_SleepModeOffOn11, 26);
							gameplay::clear_bit(&Global_2315, 2);
						}
					}
				}
				if (iVar35 == 0) {
					Global_14428 = 1;
					func_58();
					func_55(0);
				}
			}
		}
		if (Global_14421 == 1) {
			func_1();
		}
		if (Global_14442 == 2) {
			if (controls::_is_input_disabled(2)) {
				controls::set_input_exclusive(0, Global_14412);
				controls::set_input_exclusive(0, Global_14413);
				controls::disable_control_action(0, 24, 1);
				controls::disable_control_action(0, 257, 1);
			}
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				audio::stop_ped_ringtone(player::player_ped_id());
			}
		}
	}
}

// Position - 0x1C32
void func_1() {
	if (!controls::is_control_pressed(2, Global_14412) && !controls::is_control_pressed(2, Global_14411)) {
		Global_14421 = 0;
	}
}

// Position - 0x1C58
int func_2(int iParam0, int iParam1) {
	if (!entity::is_entity_dead(iParam0, 0) && !entity::is_entity_dead(iParam1, 0)) {
		if (ped::is_ped_sitting_in_vehicle(iParam0, iParam1)) {
			if (vehicle::get_ped_in_vehicle_seat(iParam1, -1, 0) == iParam0) {
				return -1;
			}
			if (vehicle::get_ped_in_vehicle_seat(iParam1, 0, 0) == iParam0) {
				return 0;
			}
			if (vehicle::get_ped_in_vehicle_seat(iParam1, 1, 0) == iParam0) {
				return 1;
			}
			if (vehicle::get_ped_in_vehicle_seat(iParam1, 2, 0) == iParam0) {
				return 2;
			}
			if (vehicle::get_ped_in_vehicle_seat(iParam1, 3, 0) == iParam0) {
				return 3;
			}
			if (vehicle::get_ped_in_vehicle_seat(iParam1, 4, 0) == iParam0) {
				return 4;
			}
			if (vehicle::get_ped_in_vehicle_seat(iParam1, 5, 0) == iParam0) {
				return 5;
			}
			if (vehicle::get_ped_in_vehicle_seat(iParam1, 6, 0) == iParam0) {
				return 6;
			}
			if (vehicle::get_ped_in_vehicle_seat(iParam1, 7, 0) == iParam0) {
				return 3;
			}
			if (vehicle::get_ped_in_vehicle_seat(iParam1, 8, 0) == iParam0) {
				return 4;
			}
		}
	}
	return -2;
}

// Position - 0x1D31
int func_3(int iParam0) {
	if (iParam0 == 0) {
		return 0;
	}
	if (func_4(iParam0) == -1) {
		return 0;
	}
	return 1;
}

// Position - 0x1D52
int func_4(int iParam0) {
	int iVar0;

	if (iParam0 == 0) {
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		if (Global_36715[iVar0 /*5*/] != -1) {
			if (iParam0 == Global_36715[iVar0 /*5*/].f_1) {
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x1D9B
bool func_5() { return Global_2499540.f_1; }

// Position - 0x1DA9
void func_6() {
	float fVar0;
	vector3 vVar1;
	float fVar4;

	Global_16804 = 0;
	Global_16805 = 0;
	controls::set_input_exclusive(0, Global_14413);
	ui::hide_hud_component_this_frame(6);
	ui::hide_hud_component_this_frame(7);
	ui::hide_hud_component_this_frame(8);
	ui::hide_hud_component_this_frame(9);
	if (Global_14409 == 0) {
		mobile::set_mobile_phone_scale(500f);
		if (func_64()) {
			iLocal_18 = gameplay::get_game_timer();
		}
		else {
			iLocal_18 = 0;
		}
		mobile::script_is_moving_mobile_phone_offscreen(1);
		Global_14409 = 1;
	}
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (audio::is_ped_ringtone_playing(player::player_ped_id())) {
			audio::stop_ped_ringtone(player::player_ped_id());
		}
	}
	if (entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (audio::is_ped_ringtone_playing(player::player_ped_id())) {
			audio::stop_ped_ringtone(player::player_ped_id());
		}
	}
	if (Global_101700.f_13010.f_84 == 1) {
		Global_101700.f_13010.f_84 = 0;
		ui::clear_floating_help(0, 1);
	}
	fVar0 = 350f;
	if (gameplay::is_bit_set(G_SleepModeOnOn25, 30) || gameplay::is_bit_set(Global_2315, 2)) {
		fVar0 = 25f;
	}
	vVar1 = {Global_14403};
	if (Global_14428 == 1) {
		vVar1 = {-45f, 45f, 25f};
	}
	if (gameplay::is_bit_set(G_SleepModeOffOn11, 26) || gameplay::is_bit_set(G_SleepModeOnOn25, 30) ||
		gameplay::is_bit_set(Global_2315, 2)) {
		vLocal_75 = {Global_14389[Global_14388 /*3*/]};
	}
	else {
		vLocal_75 = {Global_14396[Global_14388 /*3*/]};
	}
	fVar4 = func_12(vLocal_75, Global_14389[Global_14388 /*3*/], Global_14403, vVar1, fVar0, 0);
	if (!iLocal_43 && fVar4 >= 1f) {
		mobile::destroy_mobile_phone();
		iLocal_43 = 1;
	}
	if (iLocal_43 && gameplay::get_game_timer() - iLocal_18 > 500) {
		controls::set_input_exclusive(0, Global_14413);
		if (Global_14443.f_1 == 3) {
		}
		if (Global_14443.f_1 == 1) {
		}
		if (Global_14443.f_1 == 0) {
		}
		mobile::script_is_moving_mobile_phone_offscreen(0);
		Global_14384 = 0;
		Global_14425 = 0;
		Global_14602 = 0;
		if (Global_101700.f_13010.f_84 == 1) {
			Global_101700.f_13010.f_84 = 0;
			ui::clear_floating_help(0, 1);
		}
		Global_14387 = 1;
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			audio::stop_ped_ringtone(player::player_ped_id());
		}
		if (Global_16759 == 0) {
		}
		Global_14604 = 0;
		if (func_9(0)) {
			func_8();
		}
		gameplay::clear_bit(&G_SleepModeOffOn11, 8);
		gameplay::clear_bit(&G_SleepModeOnOn25, 14);
		gameplay::clear_bit(&G_SleepModeOnOn25, 9);
		gameplay::clear_bit(&G_SleepModeOnOn25, 27);
		gameplay::clear_bit(&G_SleepModeOnOn25, 30);
		gameplay::clear_bit(&G_SleepModeOffOn11, 5);
		gameplay::clear_bit(&G_SleepModeOffOn11, 19);
		gameplay::clear_bit(&G_SleepModeOffOn11, 21);
		gameplay::clear_bit(&G_SleepModeOffOn11, 24);
		gameplay::clear_bit(&G_SleepModeOffOn11, 25);
		gameplay::clear_bit(&G_SleepModeOffOn11, 27);
		gameplay::clear_bit(&G_SleepModeOffOn11, 26);
		gameplay::clear_bit(&Global_2315, 2);
		Global_2502457 = 0;
		iLocal_78 = 0;
		if (!player::is_player_playing(player::player_id())) {
			func_7();
		}
		system::settimera(0);
		if (script::_get_number_of_instances_of_script_with_name_hash(Global_2320[2 /*15*/].f_9) == 0) {
			while (script::is_thread_active(Global_14441)) {
				system::wait(0);
				controls::set_input_exclusive(0, Global_14413);
				if (graphics::has_scaleform_movie_loaded(Global_14424)) {
					ui::set_text_render_id(iLocal_42);
					graphics::draw_scaleform_movie(Global_14424, Global_14363, Global_14364, Global_14365, Global_14366,
												   255, 255, 255, 255, 0);
				}
				if (system::timera() > 5000) {
					script::terminate_thread(Global_14441);
				}
			}
		}
		Global_14431 = 0;
		if (graphics::has_scaleform_movie_loaded(Global_14424)) {
			func_103(Global_14424, "SHUTDOWN_MOVIE");
		}
		system::wait(0);
		graphics::set_scaleform_movie_as_no_longer_needed(&Global_14424);
		Global_14409 = 0;
		controls::set_input_exclusive(0, Global_14413);
		if (entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (Global_2499540.f_1) {
				if (Global_69702) {
					audio::play_sound_frontend(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
				}
				else {
					audio::play_sound_frontend(-1, "Hang_Up", &Global_14432, 1);
				}
			}
		}
		func_100();
		func_98();
		Global_15758 = 0;
		Global_2595533 = 0;
		script::terminate_this_thread();
	}
}

// Position - 0x2131
void func_7() {
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

// Position - 0x2188
void func_8() {
	if (Global_3118[0 /*2811*/][0 /*281*/].f_259 == 2) {
		Global_3118[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3118[1 /*2811*/][0 /*281*/].f_259 == 2) {
		Global_3118[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3118[2 /*2811*/][0 /*281*/].f_259 == 2) {
		Global_3118[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	gameplay::clear_bit(&G_SleepModeOnOn25, 25);
	gameplay::set_bit(&G_SleepModeOffOn11, 11);
}

// Position - 0x2205
bool func_9(int iParam0) {
	if (Global_35781 == 15) {
		return false;
	}
	if (func_10(iParam0)) {
		return false;
	}
	return true;
}

// Position - 0x2227
bool func_10(int iParam0) { return func_11(iParam0, Global_35781); }

// Position - 0x2238
int func_11(int iParam0, int iParam1) {
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

// Position - 0x2419
float func_12(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, float fParam12, int iParam13) {
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;

	if (Global_2595533 == 0) {
		if (gameplay::is_bit_set(G_SleepModeOnOn25, 14) && Global_14443.f_1 < 4) {
			mobile::get_mobile_phone_position(&Var0);
			if (Global_14396[Global_14388 /*3*/].f_1 == Var0.f_1) {
				Global_2595533 = 1;
			}
		}
	}
	if (func_64() && Global_2595533 == 0) {
		return 2f;
	}
	if (iLocal_18 == 0) {
		iLocal_18 = gameplay::get_game_timer();
	}
	fVar3 = func_14(system::to_float(gameplay::get_game_timer() - iLocal_18) / fParam12, 0f, 1f);
	if (fVar3 < 1f) {
		fVar4 = fVar3;
		if (iParam13) {
			fVar4--;
			fVar5 = 0.670158f;
			fVar4 *= fVar4 * ((fVar5 + 1f) * fVar4 + fVar5) + 1f;
		}
		else {
			fVar4 = system::sin(fVar3 * 90f);
		}
		Global_14371 = {func_13(vParam0, vParam3, fVar4)};
		Global_14374 = {func_13(vParam6, vParam9, fVar4)};
	}
	else {
		Global_14371 = {vParam3};
		Global_14374 = {vParam9};
	}
	mobile::set_mobile_phone_position(Global_14371);
	mobile::set_mobile_phone_rotation(Global_14374, 0);
	return fVar3;
}

// Position - 0x252B
Vector3 func_13(vector3 vParam0, vector3 vParam3, float fParam6) { return vParam0 + vParam3 - vParam0 * FtoV(fParam6); }

// Position - 0x2545
float func_14(float fParam0, float fParam1, float fParam2) {
	if (fParam0 > fParam2) {
		return fParam2;
	}
	else if (fParam0 < fParam1) {
		return fParam1;
	}
	return fParam0;
}

// Position - 0x256C
void func_15() {
	if (Global_14421 == 0) {
		if (func_52(2, Global_14415, 0)) {
			if (Global_69702 == 0) {
				if (Global_14606) {
					if (Global_14605 == 0) {
						Global_14605 = 1;
						func_97(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432,
								-1082130432);
						func_72(2);
						func_16();
						func_97(Global_14424, "DISPLAY_VIEW", 1f, system::to_float(Global_14448), -1082130432,
								-1082130432, -1082130432);
						Global_14423 = Global_14448;
					}
					else {
						Global_14605 = 0;
						func_97(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432,
								-1082130432);
						func_72(1);
						func_16();
						func_97(Global_14424, "DISPLAY_VIEW", 1f, system::to_float(Global_14447), -1082130432,
								-1082130432, -1082130432);
						Global_14423 = Global_14447;
					}
				}
			}
		}
	}
}

// Position - 0x2645
void func_16() {
	if (Global_14606 == 0) {
		func_70(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		gameplay::clear_bit(&G_SleepModeOnOn25, 17);
	}
	else if (Global_69702) {
		func_70(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		gameplay::clear_bit(&G_SleepModeOnOn25, 17);
	}
	else {
		if (Global_14605 == 1) {
			if (Global_14431) {
				func_70(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else {
				func_70(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else if (Global_14431) {
			func_70(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
		}
		else {
			func_70(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		gameplay::set_bit(&G_SleepModeOnOn25, 17);
	}
}

// Position - 0x271E
void func_17() {
	if (gameplay::is_bit_set(G_SleepModeOffOn11, 10) || iLocal_78 == 1) {
		Global_2920 = gameplay::get_game_timer();
		Global_2919 = 0;
		Global_14421 = 1;
		graphics::_push_scaleform_movie_function(Global_14424, "GET_CURRENT_SELECTION");
		uLocal_29 = graphics::_pop_scaleform_movie_function();
		iLocal_30 = 1;
	}
	else if (Global_14421 == 0) {
		if (func_52(2, Global_14412, 0)) {
			if (iLocal_31 == 0) {
				Global_2920 = gameplay::get_game_timer();
				Global_2919 = 0;
				Global_14421 = 1;
				graphics::_push_scaleform_movie_function(Global_14424, "GET_CURRENT_SELECTION");
				uLocal_29 = graphics::_pop_scaleform_movie_function();
				iLocal_30 = 1;
			}
		}
	}
}

// Position - 0x27A0
void func_18() {
	if (Global_14421 == 0) {
		if (func_52(2, Global_14410, 1)) {
			if (func_92(2084, -1, 0) == 1) {
				if (Global_101700.f_13010[Global_14443 /*20*/].f_17 == 0) {
					if (!gameplay::is_bit_set(G_SleepModeOffOn11, 3)) {
						if (!Global_14386) {
							if (!gameplay::is_bit_set(Global_2595318, 3)) {
								if (!gameplay::is_bit_set(G_SleepModeOnOn25, 14)) {
									Global_14421 = 1;
									gameplay::set_bit(&Global_2595318, 3);
									func_19(3, 0, 1, 0);
									Global_16804 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

// Position - 0x2821
int func_19(int iParam0, int iParam1, int iParam2, int iParam3) {
	func_105();
	if (Global_69702 == 0) {
		if (func_71(14)) {
			if (Global_16804 == 2 || Global_16804 == 4) {
			}
			else {
				return 0;
			}
		}
	}
	if (Global_14443.f_1 == 9) {
		return 0;
	}
	if (iParam2 == 0) {
		if (func_21(0) == 1) {
			return 0;
		}
	}
	if (Global_14409 == 1) {
		return 0;
	}
	if (Global_14443.f_1 == 7) {
		return 0;
	}
	if (iParam1 == 1) {
	}
	if (!script::is_thread_active(Global_14440)) {
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) == 0) {
			if (Global_14443.f_1 < 4) {
				func_20("cellphone_flashhand");
				if (script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) == 0) {
					Global_14440 = system::start_new_script("cellphone_flashhand", 1424);
				}
				script::set_script_as_no_longer_needed("cellphone_flashhand");
			}
		}
	}
	while (!Global_14425) {
		system::wait(0);
	}
	func_75();
	func_73();
	if (script::_get_number_of_instances_of_script_with_name_hash(Global_2320[iParam0 /*15*/].f_9) == 0) {
		Global_2919 = 0;
		Global_14443.f_1 = 7;
		func_20(&Global_2320[iParam0 /*15*/].f_5);
		if (iParam3) {
			if (script::_get_number_of_instances_of_script_with_name_hash(Global_2320[iParam0 /*15*/].f_9) == 0) {
				Global_14441 = system::start_new_script(&Global_2320[iParam0 /*15*/].f_5, 4000);
			}
		}
		else if (script::_get_number_of_instances_of_script_with_name_hash(Global_2320[iParam0 /*15*/].f_9) == 0) {
			Global_14441 = system::start_new_script(&Global_2320[iParam0 /*15*/].f_5, 2552);
		}
		script::set_script_as_no_longer_needed(&Global_2320[iParam0 /*15*/].f_5);
		return 1;
	}
	return 1;
}

// Position - 0x2987
void func_20(char *sParam0) {
	script::request_script(sParam0);
	while (!script::has_script_loaded(sParam0)) {
		system::wait(0);
	}
}

// Position - 0x29A7
int func_21(int iParam0) {
	if (iParam0 == 1) {
		if (Global_14443.f_1 > 3) {
			if (gameplay::is_bit_set(G_SleepModeOnOn25, 14)) {
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

// Position - 0x2A01
void func_22() {
	if (Global_14422) {
		if (system::timera() > 50) {
			Global_14422 = 0;
		}
	}
	if (controls::_is_input_disabled(2)) {
		if (controls::is_control_just_pressed(2, 180)) {
			switch (Global_14423) {
			case 0:
				if (Global_2882[1]) {
					func_31();
					Global_14423 = 1;
				}
				break;

			case 1:
				if (Global_2882[2]) {
					func_31();
					Global_14423 = 2;
				}
				break;

			case 2:
				if (Global_2882[3]) {
					func_31();
					func_29();
					Global_14423 = 3;
				}
				else {
					func_27();
					func_29();
					Global_14423 = 4;
				}
				break;

			case 3:
				if (Global_2882[4]) {
					func_31();
					Global_14423 = 4;
				}
				break;

			case 4:
				if (Global_2882[5]) {
					func_31();
					Global_14423 = 5;
				}
				break;

			case 5:
				if (Global_2882[6]) {
					func_31();
					func_29();
					Global_14423 = 6;
				}
				break;

			case 6:
				if (Global_2882[7]) {
					func_31();
					Global_14423 = 7;
				}
				break;

			case 7:
				if (Global_2882[8]) {
					func_31();
					Global_14423 = 8;
				}
				else {
					func_27();
					func_29();
					Global_14423 = 0;
				}
				break;

			case 8:
				if (Global_2882[0]) {
					func_31();
					func_29();
					Global_14423 = 0;
				}
				else {
					func_27();
					func_29();
				}
				break;
			}
		}
		if (controls::is_control_just_pressed(2, 181)) {
			switch (Global_14423) {
			case 0:
				if (Global_2882[8]) {
					func_27();
					func_24();
					Global_14423 = 8;
				}
				else {
					func_31();
					func_24();
					Global_14423 = 7;
				}
				break;

			case 1:
				if (Global_2882[0]) {
					func_27();
					Global_14423 = 0;
				}
				else if (Global_2882[8]) {
					func_24();
					func_31();
				}
				else {
					func_24();
				}
				break;

			case 2:
				if (Global_2882[1]) {
					func_27();
					Global_14423 = 1;
				}
				break;

			case 3:
				if (Global_2882[2]) {
					func_27();
					func_24();
					Global_14423 = 2;
				}
				break;

			case 4:
				if (Global_2882[3]) {
					func_27();
					Global_14423 = 3;
				}
				else {
					func_24();
					func_31();
					Global_14609 = 1;
					Global_14423 = 2;
				}
				break;

			case 5:
				if (Global_2882[4]) {
					func_27();
					Global_14423 = 4;
				}
				break;

			case 6:
				if (Global_2882[5]) {
					func_24();
					func_27();
					Global_14423 = 5;
				}
				break;

			case 7:
				if (Global_2882[6]) {
					func_27();
					Global_14423 = 6;
				}
				break;

			case 8:
				if (Global_2882[7]) {
					func_27();
					Global_14423 = 7;
				}
				break;
			}
		}
	}
	if (Global_14422 == 0) {
		if (func_52(2, Global_14418, 0)) {
			Global_14609 = 0;
			switch (Global_14423) {
			case 2:
				if (Global_2882[0] == 1) {
					Global_14423 = 0;
				}
				else {
					Global_14423 = 1;
					Global_14609 = 1;
				}
				break;

			case 5: Global_14423 = 3; break;

			case 6: Global_14423 = 7; break;

			case 7:
				if (Global_2882[Global_14423 + 1] == 1) {
					Global_14423 = 8;
				}
				else {
					Global_14423 = 6;
					Global_14609 = 1;
				}
				break;

			case 8: Global_14423 = 6; break;

			default: Global_14423++; break;
			}
			if (Global_14609 == 1) {
				func_27();
			}
			else {
				func_31();
			}
			Global_14422 = 1;
			system::settimera(0);
		}
		if (func_52(2, Global_14417, 0)) {
			Global_14609 = 0;
			switch (Global_14423) {
			case 0: Global_14423 = 2; break;

			case 1:
				if (Global_2882[0] == 1) {
					Global_14423 = 0;
				}
				else {
					Global_14423 = 2;
					Global_14609 = 1;
				}
				break;

			case 3: Global_14423 = 5; break;

			case 6:
				if (Global_2882[8] == 1) {
					Global_14423 = 8;
				}
				else {
					Global_14423 = 7;
					Global_14609 = 1;
				}
				break;

			default: Global_14423--; break;
			}
			if (Global_14609 == 1) {
				func_31();
			}
			else {
				func_27();
			}
			Global_14422 = 1;
			system::settimera(0);
		}
		if (func_52(2, Global_14419, 0)) {
			Global_14609 = 0;
			switch (Global_14423) {
			case 0:
				if (Global_2882[6]) {
					Global_14423 = 6;
				}
				break;

			case 1:
				if (Global_2882[7]) {
					Global_14423 = 7;
				}
				else {
					Global_14609 = 1;
					Global_14423 = 4;
				}
				break;

			case 2:
				if (Global_2882[8]) {
					Global_14423 = 8;
				}
				else {
					Global_14609 = 1;
					Global_14423 = 5;
				}
				break;

			case 3:
				if (Global_2882[0]) {
					Global_14423 = 0;
				}
				else {
					Global_14609 = 1;
					Global_14423 = 6;
				}
				break;

			case 4:
				if (Global_2882[1]) {
					Global_14423 = 1;
				}
				break;

			case 5:
				if (Global_2882[2]) {
					Global_14423 = 2;
				}
				break;

			case 6:
				if (Global_2882[3]) {
					Global_14423 = 3;
				}
				break;

			case 7:
				if (Global_2882[4]) {
					Global_14423 = 4;
				}
				break;

			case 8:
				if (Global_2882[5]) {
					Global_14423 = 5;
				}
				break;
			}
			if (Global_14609 == 1) {
				func_29();
			}
			else {
				func_24();
			}
			Global_14422 = 1;
			system::settimera(0);
		}
		if (func_52(2, Global_14420, 0)) {
			Global_14609 = 0;
			switch (Global_14423) {
			case 0:
				if (Global_2882[3]) {
					Global_14423 = 3;
				}
				break;

			case 1:
				if (Global_2882[4]) {
					Global_14423 = 4;
				}
				break;

			case 2:
				if (Global_2882[5]) {
					Global_14423 = 5;
				}
				break;

			case 3:
				if (Global_2882[6]) {
					Global_14423 = 6;
				}
				break;

			case 4:
				if (Global_2882[7]) {
					Global_14423 = 7;
				}
				else {
					Global_14609 = 1;
					Global_14423 = 1;
				}
				break;

			case 5:
				if (Global_2882[8]) {
					Global_14423 = 8;
				}
				else {
					Global_14609 = 1;
					Global_14423 = 2;
				}
				break;

			case 6:
				if (Global_2882[0]) {
					Global_14423 = 0;
				}
				else {
					Global_14609 = 1;
					Global_14423 = 3;
				}
				break;

			case 7:
				if (Global_2882[1]) {
					Global_14423 = 1;
				}
				break;

			case 8:
				if (Global_2882[2]) {
					Global_14423 = 2;
				}
				break;
			}
			if (Global_14609 == 1) {
				func_24();
			}
			else {
				func_29();
			}
			Global_14422 = 1;
			system::settimera(0);
		}
	}
	if (Global_2320[23 /*15*/].f_10 == 57) {
		if (Global_14422 == 1 && Global_14423 == 8) {
			if (iLocal_80 == 0) {
				iLocal_80 = 1;
				func_23(12);
			}
		}
	}
}

// Position - 0x305A
void func_23(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = iParam0 / 32;
	iVar1 = iParam0 % 32;
	gameplay::set_bit(&Global_2494199.f_4710.f_7[iVar0], iVar1);
}

// Position - 0x3083
void func_24() {
	func_97(Global_14424, "SET_INPUT_EVENT", system::to_float(1), -1082130432, -1082130432, -1082130432, -1082130432);
	audio::play_sound_frontend(-1, "Menu_Navigate", &Global_14432, 1);
	func_25();
}

// Position - 0x30C0
void func_25() {
	if (func_26()) {
		if (Global_14609 == 0) {
			mobile::_move_finger(1);
		}
		else {
			mobile::_move_finger(2);
		}
	}
}

// Position - 0x30E3
bool func_26() {
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_69702) {
		return false;
	}
	iVar2 = 0;
	iVar0 = cam::_0x19CAFA3C87F7C2FF();
	iVar1 = cam::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4) {
		iVar2 = 1;
	}
	if (Global_2595532 || iVar2) {
		return true;
	}
	return true;
}

// Position - 0x312A
void func_27() {
	func_97(Global_14424, "SET_INPUT_EVENT", system::to_float(4), -1082130432, -1082130432, -1082130432, -1082130432);
	audio::play_sound_frontend(-1, "Menu_Navigate", &Global_14432, 1);
	func_28();
}

// Position - 0x3167
void func_28() {
	if (func_26()) {
		if (Global_14609 == 0) {
			mobile::_move_finger(3);
		}
		else {
			mobile::_move_finger(4);
		}
	}
}

// Position - 0x318A
void func_29() {
	func_97(Global_14424, "SET_INPUT_EVENT", system::to_float(3), -1082130432, -1082130432, -1082130432, -1082130432);
	audio::play_sound_frontend(-1, "Menu_Navigate", &Global_14432, 1);
	func_30();
}

// Position - 0x31C7
void func_30() {
	if (func_26()) {
		if (Global_14609 == 0) {
			mobile::_move_finger(2);
		}
		else {
			mobile::_move_finger(1);
		}
	}
}

// Position - 0x31EA
void func_31() {
	func_97(Global_14424, "SET_INPUT_EVENT", system::to_float(2), -1082130432, -1082130432, -1082130432, -1082130432);
	audio::play_sound_frontend(-1, "Menu_Navigate", &Global_14432, 1);
	func_32();
}

// Position - 0x3227
void func_32() {
	if (func_26()) {
		if (Global_14609 == 0) {
			mobile::_move_finger(4);
		}
		else {
			mobile::_move_finger(3);
		}
	}
}

// Position - 0x324A
void func_33() {
	if (Global_14422) {
		if (system::timera() > 50) {
			Global_14422 = 0;
		}
	}
	if (controls::_is_input_disabled(2)) {
		if (controls::is_control_just_pressed(2, 180)) {
			switch (Global_14423) {
			case 6:
				if (Global_2882[7]) {
					func_31();
					Global_14423 = 7;
				}
				break;

			case 7:
				if (Global_2882[6]) {
					func_27();
					Global_14423 = 6;
				}
				break;
			}
		}
		if (controls::is_control_just_pressed(2, 181)) {
			switch (Global_14423) {
			case 6:
				if (Global_2882[7]) {
					func_31();
					Global_14423 = 7;
				}
				break;

			case 7:
				if (Global_2882[6]) {
					func_27();
					Global_14423 = 6;
				}
				break;
			}
		}
	}
	if (Global_14422 == 0) {
		if (func_52(2, Global_14418, 0)) {
			Global_14609 = 0;
			switch (Global_14423) {
			case 2: Global_14423 = 0; break;

			case 5: Global_14423 = 3; break;

			case 7:
				if (Global_2882[Global_14423 + 1] == 1) {
					Global_14423 = 8;
				}
				else {
					Global_14423 = 6;
					Global_14609 = 1;
				}
				break;

			case 8: Global_14423 = 6; break;

			default: Global_14423++; break;
			}
			if (Global_14609 == 1) {
				func_27();
			}
			else {
				func_31();
			}
			Global_14422 = 1;
			system::settimera(0);
		}
		if (func_52(2, Global_14417, 0)) {
			Global_14609 = 0;
			switch (Global_14423) {
			case 0: Global_14423 = 2; break;

			case 3: Global_14423 = 5; break;

			case 6:
				if (Global_2882[8] == 1) {
					Global_14423 = 8;
				}
				else {
					Global_14423 = 7;
					Global_14609 = 1;
				}
				break;

			default: Global_14423--; break;
			}
			if (Global_14609 == 1) {
				func_31();
			}
			else {
				func_27();
			}
			Global_14422 = 1;
			system::settimera(0);
		}
	}
}

// Position - 0x3408
void func_34() {
	if (Global_14422) {
		if (system::timera() > 50) {
			Global_14422 = 0;
		}
	}
	if (controls::_is_input_disabled(2)) {
		if (controls::is_control_just_pressed(2, 180)) {
			switch (Global_14423) {
			case 0:
				if (Global_2882[1]) {
					func_31();
					Global_14423 = 1;
				}
				break;

			case 1:
				if (Global_2882[2]) {
					func_31();
					Global_14423 = 2;
				}
				break;

			case 2:
				if (Global_2882[3]) {
					func_31();
					func_29();
					Global_14423 = 3;
				}
				else {
					func_27();
					func_29();
					Global_14423 = 4;
				}
				break;

			case 3:
				if (Global_2882[4]) {
					func_31();
					Global_14423 = 4;
				}
				break;

			case 4:
				if (Global_2882[5]) {
					func_31();
					Global_14423 = 5;
				}
				break;

			case 5:
				if (Global_2882[6]) {
					func_31();
					func_29();
					Global_14423 = 6;
				}
				break;

			case 6:
				if (Global_2882[7]) {
					func_31();
					Global_14423 = 7;
				}
				break;

			case 7:
				if (Global_2882[8]) {
					func_31();
					Global_14423 = 8;
				}
				else {
					func_27();
					func_29();
					Global_14423 = 0;
				}
				break;

			case 8:
				if (Global_2882[0]) {
					func_31();
					func_29();
					Global_14423 = 0;
				}
				break;
			}
		}
		if (controls::is_control_just_pressed(2, 181)) {
			switch (Global_14423) {
			case 0:
				if (Global_2882[8]) {
					func_27();
					func_24();
					Global_14423 = 8;
				}
				else {
					func_31();
					func_24();
					Global_14423 = 7;
				}
				break;

			case 1:
				if (Global_2882[0]) {
					func_27();
					Global_14423 = 0;
				}
				break;

			case 2:
				if (Global_2882[1]) {
					func_27();
					Global_14423 = 1;
				}
				break;

			case 3:
				if (Global_2882[2]) {
					func_27();
					func_24();
					Global_14423 = 2;
				}
				break;

			case 4:
				if (Global_2882[3]) {
					func_27();
					Global_14423 = 3;
				}
				else {
					func_24();
					func_31();
					Global_14609 = 1;
					Global_14423 = 2;
				}
				break;

			case 5:
				if (Global_2882[4]) {
					func_27();
					Global_14423 = 4;
				}
				break;

			case 6:
				if (Global_2882[5]) {
					func_24();
					func_27();
					Global_14423 = 5;
				}
				break;

			case 7:
				if (Global_2882[6]) {
					func_27();
					Global_14423 = 6;
				}
				break;

			case 8:
				if (Global_2882[7]) {
					func_27();
					Global_14423 = 7;
				}
				break;
			}
		}
	}
	if (Global_14422 == 0) {
		if (func_52(2, Global_14418, 0)) {
			Global_14609 = 0;
			switch (Global_14423) {
			case 2: Global_14423 = 0; break;

			case 5: Global_14423 = 3; break;

			case 7:
				if (Global_2882[Global_14423 + 1] == 1) {
					Global_14423 = 8;
				}
				else {
					Global_14423 = 6;
					Global_14609 = 1;
				}
				break;

			case 8: Global_14423 = 6; break;

			default: Global_14423++; break;
			}
			if (Global_14609 == 1) {
				func_27();
			}
			else {
				func_31();
			}
			Global_14422 = 1;
			system::settimera(0);
		}
		if (func_52(2, Global_14417, 0)) {
			Global_14609 = 0;
			switch (Global_14423) {
			case 0: Global_14423 = 2; break;

			case 3: Global_14423 = 5; break;

			case 6:
				if (Global_2882[8] == 1) {
					Global_14423 = 8;
				}
				else {
					Global_14423 = 7;
					Global_14609 = 1;
				}
				break;

			default: Global_14423--; break;
			}
			if (Global_14609 == 1) {
				func_31();
			}
			else {
				func_27();
			}
			Global_14422 = 1;
			system::settimera(0);
		}
		if (func_52(2, Global_14419, 0)) {
			Global_14609 = 0;
			switch (Global_14423) {
			case 0:
				if (Global_2882[6]) {
					Global_14423 = 6;
				}
				break;

			case 1:
				if (Global_2882[7]) {
					Global_14423 = 7;
				}
				break;

			case 2:
				if (Global_2882[8]) {
					Global_14423 = 8;
				}
				else {
					Global_14609 = 1;
					Global_14423 = 5;
				}
				break;

			case 3:
				if (Global_2882[0]) {
					Global_14423 = 0;
				}
				break;

			case 4:
				if (Global_2882[1]) {
					Global_14423 = 1;
				}
				break;

			case 5:
				if (Global_2882[2]) {
					Global_14423 = 2;
				}
				break;

			case 6:
				if (Global_2882[3]) {
					Global_14423 = 3;
				}
				break;

			case 7:
				if (Global_2882[4]) {
					Global_14423 = 4;
				}
				break;

			case 8:
				if (Global_2882[5]) {
					Global_14423 = 5;
				}
				break;
			}
			if (Global_14609 == 1) {
				func_29();
			}
			else {
				func_24();
			}
			Global_14422 = 1;
			system::settimera(0);
		}
		if (func_52(2, Global_14420, 0)) {
			Global_14609 = 0;
			switch (Global_14423) {
			case 0:
				if (Global_2882[3]) {
					Global_14423 = 3;
				}
				break;

			case 1:
				if (Global_2882[4]) {
					Global_14423 = 4;
				}
				break;

			case 2:
				if (Global_2882[5]) {
					Global_14423 = 5;
				}
				break;

			case 3:
				if (Global_2882[6]) {
					Global_14423 = 6;
				}
				break;

			case 4:
				if (Global_2882[7]) {
					Global_14423 = 7;
				}
				break;

			case 5:
				if (Global_2882[8]) {
					Global_14423 = 8;
				}
				else {
					Global_14609 = 1;
					Global_14423 = 2;
				}
				break;

			case 6:
				if (Global_2882[0]) {
					Global_14423 = 0;
				}
				break;

			case 7:
				if (Global_2882[1]) {
					Global_14423 = 1;
				}
				break;

			case 8:
				if (Global_2882[2]) {
					Global_14423 = 2;
				}
				break;
			}
			if (Global_14609 == 1) {
				func_24();
			}
			else {
				func_29();
			}
			Global_14422 = 1;
			system::settimera(0);
		}
	}
}

// Position - 0x399A
void func_35() {
	int iVar0;
	int iVar1;

	if (graphics::_0x768FF8961BA904D6(uLocal_29)) {
		iLocal_30 = 0;
		iLocal_28 = graphics::_0x2DE7EFA66B906036(uLocal_29);
		if (Global_14605 == 0) {
			Global_14447 = iLocal_28;
		}
		else {
			Global_14448 = iLocal_28;
		}
		if (iLocal_28 < 0) {
			iLocal_28 = 0;
		}
		Global_14446 = Global_2846[iLocal_28];
		if (gameplay::is_bit_set(G_SleepModeOffOn11, 10)) {
			Global_14446 = 2;
			gameplay::clear_bit(&G_SleepModeOffOn11, 10);
		}
		if (iLocal_78 == 1) {
			Global_14447 = 1;
			Global_14446 = 0;
			Global_2502457 = 0;
			iLocal_78 = 0;
		}
		iVar0 = 0;
		if (script::is_thread_active(Global_14441)) {
			iVar0 = 1;
		}
		if (Global_14446 == 3) {
			if (gameplay::is_bit_set(G_SleepModeOffOn11, 3)) {
				iVar0 = 1;
			}
			else if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				if (ped::is_ped_on_mount(player::player_ped_id()) || gameplay::is_stunt_jump_in_progress() ||
					player::is_player_climbing(player::player_id()) || ped::is_ped_jacking(player::player_ped_id()) ||
					ped::is_ped_hanging_on_to_vehicle(player::player_ped_id()) ||
					ped::is_ped_in_melee_combat(player::player_ped_id()) ||
					vehicle::is_vehicle_driveable(ped::set_exclusive_phone_relationships(player::player_ped_id()), 0) ||
					graphics::_is_nightvision_inactive()) {
					iVar0 = 1;
				}
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
					if (ped::is_ped_sitting_in_any_vehicle(player::player_ped_id()) == 0) {
						iVar0 = 1;
					}
					iVar1 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
					if (entity::get_entity_upright_value(iVar1) < 0f) {
						iVar0 = 1;
					}
				}
				if (player::is_player_targetting_anything(player::player_id())) {
					iVar0 = 1;
				}
				if (Global_69702) {
					if (controls::is_control_pressed(0, 25) || controls::is_control_pressed(0, 68)) {
						weapon::get_current_ped_weapon(player::player_ped_id(), &iLocal_69, 1);
						if (iLocal_69 != joaat("weapon_unarmed")) {
							iVar0 = 1;
						}
					}
				}
			}
		}
		if (Global_14446 == 2) {
			if (gameplay::is_bit_set(G_SleepModeOffOn11, 6)) {
				iVar0 = 1;
			}
		}
		if (Global_14446 == 23 && gameplay::are_strings_equal(&Global_2320[Global_14446 /*15*/], "CELL_BENWEB")) {
			if (gameplay::is_bit_set(G_SleepModeOffOn11, 6)) {
				iVar0 = 1;
			}
		}
		if (Global_69702) {
			if (Global_14446 == 15 || Global_14446 == 5) {
			}
			else {
				if (Global_14446 == 23) {
					if (gameplay::is_bit_set(Global_2595318, 4) == 0 && Global_1573849 == 0 &&
						gameplay::is_bit_set(Global_2595318, 20) == 0 &&
						gameplay::is_bit_set(Global_2595318, 22) == 0) {
					}
					if (gameplay::is_bit_set(Global_2595318, 20) == 1 && gameplay::is_bit_set(Global_2595318, 4) == 0 &&
						Global_1573849 == 0 && gameplay::is_bit_set(Global_2595318, 22) == 0 &&
						gameplay::is_bit_set(Global_2595318, 26) == 0) {
						iVar0 = 1;
						gameplay::set_bit(&Global_2595318, 21);
					}
				}
				if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
					if (ped::get_ped_config_flag(player::player_ped_id(), 78, 1) ||
						player::is_player_free_aiming(player::player_id())) {
						if (Global_14446 == 3) {
							iVar0 = 1;
						}
					}
				}
				if (iVar0 == 0) {
					func_70(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
					gameplay::clear_bit(&G_SleepModeOnOn25, 17);
					Global_14443.f_1 = 7;
					if (gameplay::is_bit_set(G_SleepModeOnOn25, 23)) {
					}
					else {
						func_37();
						script::request_script(&Global_2320[Global_14446 /*15*/].f_5);
						gameplay::set_bit(&G_SleepModeOnOn25, 23);
					}
				}
				else {
					if (Global_14446 == 2 || Global_14446 == 3) {
					}
					func_36();
				}
			}
		}
		else {
			switch (Global_14446) {
			case 3:
				if (Global_100753 == 1) {
					iVar0 = 1;
				}
				break;

			case 8: iVar0 = 1; break;

			case 15: iVar0 = 1; break;

			case 16:
				iVar0 = 1;
				gameplay::set_bit(&G_SleepModeOnOn25, 26);
				break;

			case 5: iVar0 = 1; break;

			case 20:
				iVar0 = 1;
				if (Global_14607 == 0) {
					if (Global_2317 == 0 && iLocal_31 == 0 && Global_35781 == 15) {
						iLocal_31 = 1;
						func_37();
						if (!Global_101700.f_13010.f_85) {
						}
					}
				}
				else {
					func_36();
				}
				break;

			default: break;
			}
			if (cutscene::_0x5EDEF0CF8C1DAB3C()) {
				if (Global_14446 != 0) {
					iVar0 = 1;
				}
			}
			if (func_71(14)) {
				if (Global_14446 != 3 && Global_14446 != 14) {
					iVar0 = 1;
				}
			}
			if (iVar0 == 0) {
				func_37();
				func_70(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				gameplay::clear_bit(&G_SleepModeOnOn25, 17);
				Global_14443.f_1 = 7;
				if (gameplay::is_bit_set(G_SleepModeOnOn25, 23)) {
				}
				else {
					script::request_script(&Global_2320[Global_14446 /*15*/].f_5);
					gameplay::set_bit(&G_SleepModeOnOn25, 23);
				}
			}
			else if (Global_14446 != 20) {
				if (Global_101700.f_13010.f_86 == 0) {
					if (script::_get_number_of_instances_of_script_with_name_hash(joaat("paparazzo3b")) > 0) {
						if (Global_14446 == 3) {
							if (player::is_player_playing(player::player_id())) {
								if (ped::is_ped_in_cover(player::player_ped_id(), 0)) {
									func_68("CELL_38", -1);
									Global_101700.f_13010.f_86 = 1;
								}
							}
						}
					}
				}
				func_36();
			}
		}
	}
}

// Position - 0x3E44
void func_36() {
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		audio::play_sound_frontend(-1, "Menu_Back", &Global_14432, 1);
	}
}

// Position - 0x3E66
void func_37() {
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		audio::play_sound_frontend(-1, "Menu_Accept", &Global_14432, 1);
		func_38();
	}
}

// Position - 0x3E8C
void func_38() {
	if (func_26()) {
		mobile::_move_finger(5);
	}
}

// Position - 0x3EA0
void func_39() {
	if (Global_14409 == 0) {
		if (func_12(Global_14396[Global_14388 /*3*/], Global_14389[Global_14388 /*3*/], Global_14403, Global_14403,
					350f, 0) >= 1f) {
			iLocal_18 = 0;
			gameplay::clear_bit(&G_SleepModeOffOn11, 24);
			gameplay::set_bit(&G_SleepModeOffOn11, 26);
		}
	}
}

// Position - 0x3EF1
void func_40() {
	if (Global_14409 == 0) {
		if (func_12(Global_14389[Global_14388 /*3*/], Global_14396[Global_14388 /*3*/], Global_14403, Global_14403,
					350f, 1) >= 1f) {
			iLocal_18 = 0;
			gameplay::clear_bit(&G_SleepModeOffOn11, 25);
			if (Global_15758) {
				gameplay::clear_bit(&G_SleepModeOffOn11, 27);
			}
		}
	}
}

// Position - 0x3F48
void func_41() {
	if (Global_14409 == 0 && Global_14383 == 0) {
		if (func_12(Global_14396[Global_14388 /*3*/], Global_14389[Global_14388 /*3*/], Global_14403, Global_14403,
					350f, 0) >= 1f) {
			iLocal_18 = 0;
			Global_2595533 = 0;
		}
	}
}

// Position - 0x3F97
void func_42() {
	float fVar0;
	float fVar1;

	if (gameplay::is_bit_set(Global_2315, 2)) {
		gameplay::set_bit(&G_SleepModeOffOn11, 8);
		gameplay::set_bit(&G_SleepModeOnOn25, 14);
		Global_14383 = 0;
		iLocal_18 = 0;
		mobile::set_mobile_phone_rotation(Global_14403, 0);
	}
	else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("appemail")) < 1) {
		fVar0 = func_12(Global_14389[Global_14388 /*3*/], Global_14396[Global_14388 /*3*/], Global_14406, Global_14403,
						450f, 1);
		if (fVar0 >= 1f) {
			gameplay::set_bit(&G_SleepModeOffOn11, 8);
			gameplay::set_bit(&G_SleepModeOnOn25, 14);
			Global_14383 = 0;
			iLocal_18 = 0;
			gameplay::clear_bit(&Global_2315, 2);
			iLocal_38 = 0;
		}
		else if (fVar0 >= 0.75f) {
			gameplay::set_bit(&G_SleepModeOffOn11, 8);
		}
	}
	else {
		if (iLocal_38 == 0) {
			vLocal_39 = {Global_14396[Global_14388 /*3*/]};
			vLocal_39.x -= 10f;
			vLocal_39.y += 20f;
			iLocal_38 = 1;
		}
		fVar1 = func_12(Global_14389[Global_14388 /*3*/], vLocal_39, -90f, 0f, 90f, -90f, 0f, 90f, 450f, 1);
		if (fVar1 >= 1f) {
			gameplay::set_bit(&G_SleepModeOffOn11, 8);
			gameplay::set_bit(&G_SleepModeOnOn25, 14);
			Global_14383 = 0;
			iLocal_18 = 0;
			gameplay::clear_bit(&Global_2315, 2);
			iLocal_38 = 0;
		}
		else if (fVar1 >= 0.75f) {
			gameplay::set_bit(&G_SleepModeOffOn11, 8);
		}
	}
}

// Position - 0x40EF
void func_43() {
	if (network::network_is_game_in_progress()) {
		iLocal_63 = network::get_time_difference(network::get_network_time(), iLocal_62);
	}
	else {
		iLocal_58 = gameplay::get_game_timer();
		iLocal_63 = iLocal_58 - iLocal_57;
	}
	if (iLocal_63 > 4000) {
		uLocal_45 = func_89();
		if (audio::is_mobile_phone_call_ongoing()) {
		}
		if (network::network_is_game_in_progress()) {
			iLocal_62 = network::get_network_time();
		}
		else {
			iLocal_57 = gameplay::get_game_timer();
		}
	}
}

// Position - 0x4145
void func_44() {
	if (Global_14442 == 1) {
		func_104();
		if (Global_14421 == 0) {
			if (func_52(2, Global_14413, 0)) {
				if (gameplay::is_bit_set(G_SleepModeOffOn11, 8)) {
					if (Global_15792 == 0) {
						func_36();
						Global_14421 = 1;
						Global_14442 = 3;
						Global_15794 = 1;
						if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
							audio::stop_ped_ringtone(player::player_ped_id());
						}
					}
				}
			}
		}
		if (Global_14421 == 0) {
			if (func_52(2, Global_14412, 0)) {
				if (gameplay::is_bit_set(G_SleepModeOffOn11, 8)) {
					func_37();
					Global_14421 = 1;
					Global_14442 = 2;
					if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
						audio::stop_ped_ringtone(player::player_ped_id());
					}
					func_49();
					func_48();
				}
			}
		}
	}
	else {
		if (iLocal_55 == 0) {
			if (gameplay::is_bit_set(G_SleepModeOnOn25, 27)) {
				iLocal_55 = 1;
				system::settimerb(0);
			}
		}
		else {
			if (Global_14443.f_1 > 3) {
				if (system::timerb() > 1500) {
					if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
						if (!audio::is_ped_ringtone_playing(player::player_ped_id())) {
							if (Global_14386) {
								audio::play_ped_ringtone("Dial_and_Remote_Ring", player::player_ped_id(), 1);
							}
							else if (!gameplay::is_bit_set(Global_2315, 5)) {
								audio::play_ped_ringtone("Remote_Ring", player::player_ped_id(), 1);
							}
						}
					}
				}
			}
			if (!gameplay::is_bit_set(G_SleepModeOnOn25, 27)) {
				iLocal_55 = 0;
				if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
					audio::stop_ped_ringtone(player::player_ped_id());
				}
			}
		}
		if (Global_14442 == 0) {
			if (Global_14421 == 0) {
				if (func_52(2, Global_14411, 0) || Global_2502457 == 1) {
					if (player::is_player_playing(player::player_id())) {
						if (player::is_player_control_on(player::player_id())) {
							if (gameplay::is_bit_set(G_SleepModeOffOn11, 8)) {
								switch (Global_14443.f_1) {
								case 3: break;

								case 4: break;

								case 6:
									if (Global_14604 == 0) {
										if (Global_14605 == 1) {
											func_36();
											Global_14605 = 0;
											func_97(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432,
													-1082130432, -1082130432);
											func_75();
											func_73();
											func_72(1);
											func_97(Global_14424, "DISPLAY_VIEW", 1f, system::to_float(Global_14447),
													-1082130432, -1082130432, -1082130432);
										}
										else {
											if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
												audio::play_sound_frontend(-1, "Put_Away", &Global_14432, 1);
											}
											iLocal_18 = 0;
											Global_14443.f_1 = 3;
										}
									}
									break;

								case 5: Global_14443.f_1 = 3; break;

								case 7:
									if (gameplay::is_bit_set(G_SleepModeOnOn25, 23) == 1) {
									}
									if (Global_2921 - Global_2920 > Global_2922 &&
										gameplay::is_bit_set(G_SleepModeOnOn25, 23) == 0) {
										if (gameplay::is_bit_set(G_SleepModeOffOn11, 0)) {
										}
										else {
											func_36();
											Global_2919 = 1;
											Global_14443.f_1 = 6;
											if (Global_69702) {
												func_97(Global_14424, "SET_THEME", system::to_float(Global_2595530),
														-1082130432, -1082130432, -1082130432, -1082130432);
											}
											Global_2316 = 99;
											if (Global_2502457 == 0) {
												func_45();
											}
										}
									}
									break;

								case 8: break;

								case 10:
									if (Global_1628 == 132) {
										if (Global_2499540.f_1 || gameplay::is_bit_set(G_SleepModeOffOn11, 20)) {
											func_36();
											func_66();
										}
									}
									else {
										func_36();
										func_66();
										Global_15794 = 1;
									}
									break;

								case 9:
									if (Global_15745 == 0) {
										Global_14443.f_1 = 3;
									}
									break;

								default: break;
								}
								if (Global_2502457 == 1) {
									iLocal_78 = 1;
									Global_2502457 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

// Position - 0x4490
void func_45() {
	vector3 vVar0[24];

	if (Global_14426 == 1) {
		return;
	}
	if (Global_14443.f_1 < 4) {
		return;
	}
	while (!graphics::has_scaleform_movie_loaded(Global_14424)) {
		system::wait(0);
	}
	switch (Global_14443.f_1) {
	case 6:
		func_97(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_72(Global_2918);
		if (Global_2918 == 1) {
			func_97(Global_14424, "DISPLAY_VIEW", 1f, system::to_float(Global_14447), -1082130432, -1082130432,
					-1082130432);
			Global_14423 = Global_14447;
		}
		else {
			func_97(Global_14424, "DISPLAY_VIEW", 1f, system::to_float(Global_14448), -1082130432, -1082130432,
					-1082130432);
			Global_14423 = Global_14448;
		}
		if (Global_14431) {
			func_70(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
			func_70(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else {
			func_70(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_70(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_14606 == 0) {
			func_70(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			gameplay::clear_bit(&G_SleepModeOnOn25, 17);
		}
		else if (Global_69702) {
			func_70(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			gameplay::clear_bit(&G_SleepModeOnOn25, 17);
		}
		else {
			if (Global_14605 == 1) {
				if (Global_14431) {
					func_70(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else {
					func_70(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else if (Global_14431) {
				func_70(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else {
				func_70(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			gameplay::set_bit(&G_SleepModeOnOn25, 17);
		}
		break;

	case 7: break;

	case 10:
		func_97(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_70(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		func_70(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		gameplay::clear_bit(&G_SleepModeOnOn25, 17);
		if (gameplay::is_bit_set(G_SleepModeOnOn25, 20)) {
			func_70(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		else if (Global_14431) {
			func_70(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
			if (Global_14386) {
				func_70(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else {
			func_70(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		break;

	case 9:
		if (Global_14442 == 1) {
			func_91();
			func_97(Global_14424, "SET_THEME", system::to_float(Global_101700.f_13010[Global_14443 /*20*/].f_6),
					-1082130432, -1082130432, -1082130432, -1082130432);
			if (Global_15758) {
				graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
				graphics::_push_scaleform_movie_function_parameter_int(4);
				graphics::_push_scaleform_movie_function_parameter_int(0);
				graphics::_push_scaleform_movie_function_parameter_int(2);
				graphics::begin_text_command_scaleform_string("CELL_CONDFON");
				ui::add_text_component_substring_player_name(&Global_15760);
				graphics::end_text_command_scaleform_string();
				func_47("CELL_300");
				func_47("CELL_217");
				func_47("CELL_217");
				graphics::_pop_scaleform_movie_function_void();
			}
			else if (Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] == 0) {
				func_70(Global_14424, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(2),
						-1f, -1f, &Global_117[Global_1628 /*10*/].f_4, "CELL_300", "CELL_217", "CELL_195", 0);
			}
			else {
				func_70(Global_14424, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(2),
						-1f, -1f, &Global_101700.f_27009[Global_1628 /*29*/].f_3,
						&Global_101700.f_27009[Global_1628 /*29*/].f_7, "CELL_217",
						&Global_101700.f_27009[Global_1628 /*29*/].f_3, 0);
			}
			func_97(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else if (Global_15745 == 4 || Global_15745 == 3) {
			func_97(Global_14424, "SET_THEME", system::to_float(Global_101700.f_13010[Global_14443 /*20*/].f_6),
					-1082130432, -1082130432, -1082130432, -1082130432);
			func_91();
			if (Global_15758) {
				graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
				graphics::_push_scaleform_movie_function_parameter_int(4);
				graphics::_push_scaleform_movie_function_parameter_int(0);
				graphics::_push_scaleform_movie_function_parameter_int(2);
				graphics::begin_text_command_scaleform_string("CELL_CONDFON");
				ui::add_text_component_substring_player_name(&Global_15760);
				graphics::end_text_command_scaleform_string();
				func_47("CELL_300");
				func_47("CELL_219");
				func_47("CELL_219");
				graphics::_pop_scaleform_movie_function_void();
			}
			else {
				if (Global_16003) {
					StringCopy(&cVar0, "CELL_219", 24);
				}
				else {
					StringCopy(&cVar0, "CELL_211", 24);
				}
				if (Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] == 0) {
					func_97(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432,
							-1082130432);
					func_70(Global_14424, "SET_DATA_SLOT", system::to_float(4), system::to_float(0),
							system::to_float(3), -1f, -1f, &Global_117[Global_1628 /*10*/].f_4, "CELL_300", &cVar0,
							"CELL_195", 0);
				}
				else {
					func_97(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432,
							-1082130432);
					func_70(Global_14424, "SET_DATA_SLOT", system::to_float(4), system::to_float(0),
							system::to_float(3), -1f, -1f, &Global_101700.f_27009[Global_1628 /*29*/].f_3,
							&Global_101700.f_27009[Global_1628 /*29*/].f_7, &cVar0,
							&Global_101700.f_27009[Global_1628 /*29*/].f_3, 0);
				}
			}
			func_97(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		func_46();
		break;

	default: break;
	}
}

// Position - 0x4A4F
void func_46() {
	if (graphics::has_scaleform_movie_loaded(Global_14424)) {
		if (Global_14442 == 1) {
			if (Global_14431) {
				func_70(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else {
				func_70(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15792) {
				func_70(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (gameplay::is_bit_set(G_SleepModeOnOn25, 20)) {
				func_70(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431) {
				func_70(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else {
				func_70(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_70(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			gameplay::clear_bit(&G_SleepModeOnOn25, 17);
		}
		else {
			func_70(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_70(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			gameplay::clear_bit(&G_SleepModeOnOn25, 17);
			if (gameplay::is_bit_set(G_SleepModeOnOn25, 20)) {
				func_70(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431) {
				func_70(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14386) {
					func_70(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else {
				func_70(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

// Position - 0x4BD2
void func_47(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x4BE4
void func_48() {
	if (Global_15758) {
		if (Global_69702) {
			if (graphics::has_scaleform_movie_loaded(Global_14424)) {
				if (!gameplay::is_pc_version()) {
					func_70(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					gameplay::set_bit(&Global_2494199.f_1640, 15);
				}
			}
		}
	}
}

// Position - 0x4C33
void func_49() {
	if (graphics::has_scaleform_movie_loaded(Global_14424)) {
		if (!Global_15753) {
			func_70(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_70(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			gameplay::clear_bit(&G_SleepModeOnOn25, 17);
			if (gameplay::is_bit_set(G_SleepModeOnOn25, 20)) {
				func_70(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431) {
				func_70(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14386) {
					func_70(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else {
				func_70(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15758) {
				graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
				graphics::_push_scaleform_movie_function_parameter_int(4);
				graphics::_push_scaleform_movie_function_parameter_int(0);
				graphics::_push_scaleform_movie_function_parameter_int(2);
				graphics::begin_text_command_scaleform_string("CELL_CONDFON");
				ui::add_text_component_substring_player_name(&Global_15760);
				graphics::end_text_command_scaleform_string();
				func_47("CELL_300");
				func_47("CELL_219");
				func_47("CELL_219");
				graphics::_pop_scaleform_movie_function_void();
			}
			else if (Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] == 0) {
				func_70(Global_14424, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3),
						-1f, -1f, &Global_117[Global_1628 /*10*/].f_4, "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else {
				func_70(Global_14424, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(3),
						-1f, -1f, &Global_101700.f_27009[Global_1628 /*29*/].f_3,
						&Global_101700.f_27009[Global_1628 /*29*/].f_7, "CELL_219",
						&Global_101700.f_27009[Global_1628 /*29*/].f_3, 0);
			}
		}
		func_97(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

// Position - 0x4DF8
void func_50() {
	Global_14611 = 0;
	func_51();
}

// Position - 0x4E08
void func_51() {
	if (audio::is_mobile_phone_call_ongoing() || Global_14442 == 1) {
		audio::restart_scripted_conversation();
		Global_16756 = 0;
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
		Global_14443.f_1 = Global_14445;
		return;
	}
}

// Position - 0x4E3F
bool func_52(int iParam0, int iParam1, int iParam2) {
	if (controls::is_control_just_pressed(iParam0, iParam1) ||
		iParam2 == 1 && controls::is_disabled_control_just_pressed(iParam0, iParam1)) {
		if (gameplay::is_pc_version()) {
			if (gameplay::update_onscreen_keyboard() == 0 ||
				network::_network_is_text_chat_active() && controls::_is_input_disabled(2)) {
				return false;
			}
		}
		if (ui::is_pause_menu_active() || ui::is_warning_message_active()) {
			return false;
		}
		else {
			return true;
		}
	}
	return false;
}

// Position - 0x4EB1
int func_53() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("apptrackify")) > 0) {
		return 1;
	}
	return 0;
}

// Position - 0x4ECE
int func_54(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return 1;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x4EF9
void func_55(int iParam0) {
	if (Global_14604) {
		func_57(0, 0);
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
	if (!func_56()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x4F69
int func_56() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x4F90
void func_57(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_21(0)) {
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

// Position - 0x5004
void func_58() {
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10) {
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

// Position - 0x502D
void func_59() {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (func_67() && ped::is_ped_in_cover(player::player_ped_id(), 0)) {
			iVar1 = 1;
		}
	}
	if (!Global_69702) {
		if (!ped::is_ped_injured(player::player_ped_id()) && iVar1 == 0) {
			iVar2 = ped::get_ped_prop_index(player::player_ped_id(), 0);
			if (Global_69702) {
				if (iVar2 == 15 || iVar2 == 16 || iVar2 == 17 || iVar2 == 18 || iVar2 == 19 ||
					ped::is_ped_wearing_helmet(player::player_ped_id())) {
					iVar0 = 1;
				}
			}
			else if (ped::is_ped_wearing_helmet(player::player_ped_id())) {
				iVar0 = 1;
			}
			if (!Global_14386) {
				if (Global_1628 != 128) {
					if (iVar0 == 0) {
						if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
							if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
							}
							else {
								if (Global_69702) {
									ped::set_ped_config_flag(player::player_ped_id(), 244, 0);
									ped::set_ped_config_flag(player::player_ped_id(), 243, 0);
									ped::set_ped_config_flag(player::player_ped_id(), 242, 0);
								}
								gameplay::set_bit(&G_SleepModeOnOn25, 11);
								ai::task_use_mobile_phone(player::player_ped_id(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

// Position - 0x5150
void func_60() {
	if (gameplay::is_bit_set(G_SleepModeOnOn25, 14) && Global_2595533 == 0 && Global_14383 == 0) {
		if (func_65()) {
		}
		else {
			func_61();
		}
		if (Global_14443.f_1 == 9) {
			if (Global_15758 == 0) {
				iLocal_32 = 1;
			}
		}
	}
}

// Position - 0x519B
void func_61() {
	struct<2> Var0;

	mobile::get_mobile_phone_position(&Var0);
	if (Global_14396[Global_14388 /*3*/].f_1 == Var0.f_1) {
	}
	else {
		Global_14383 = 1;
	}
}

// Position - 0x51C2
void func_62() {
	if (gameplay::is_bit_set(G_SleepModeOnOn25, 14) && Global_2595533 == 0 && Global_14383 == 0) {
		if (iLocal_32 == 0) {
			if (gameplay::is_bit_set(G_SleepModeOffOn11, 26)) {
				gameplay::clear_bit(&G_SleepModeOffOn11, 24);
				gameplay::clear_bit(&G_SleepModeOffOn11, 25);
				gameplay::clear_bit(&G_SleepModeOffOn11, 27);
				gameplay::clear_bit(&G_SleepModeOffOn11, 26);
				if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
					if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						func_61();
					}
					else if (func_64() == 0) {
						func_61();
					}
				}
			}
		}
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
			if (func_64()) {
				func_63();
			}
		}
		else if (func_65()) {
		}
		else if (func_64()) {
			func_63();
		}
		if (Global_14443.f_1 == 9) {
			if (Global_15758 == 0) {
				iLocal_32 = 1;
			}
		}
	}
}

// Position - 0x529E
void func_63() {
	struct<2> Var0;

	mobile::get_mobile_phone_position(&Var0);
	if (Global_14389[Global_14388 /*3*/].f_1 == Var0.f_1) {
	}
	else {
		Global_2595533 = 1;
	}
}

// Position - 0x52C6
bool func_64() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
			if (Global_14386 == 0) {
				if (Global_1628 != 128) {
					if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						if (Global_15745 != 2) {
						}
					}
				}
			}
		}
		if (func_71(14)) {
			return false;
		}
		if (ped::is_ped_in_cover(player::player_ped_id(), 0)) {
			return false;
		}
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (!cam::_is_in_vehicle_cam_disabled()) {
				if (entity::is_entity_in_water(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0))) {
					return false;
				}
			}
		}
		if (ped::is_ped_swimming(player::player_ped_id()) ||
			ped::is_ped_swimming_under_water(player::player_ped_id()) ||
			player::is_player_climbing(player::player_id()) ||
			ped::is_ped_hanging_on_to_vehicle(player::player_ped_id())) {
			return false;
		}
		if (Global_100748) {
			return false;
		}
	}
	if (Global_69702) {
		return false;
	}
	iVar2 = 0;
	iVar0 = cam::_0x19CAFA3C87F7C2FF();
	iVar1 = cam::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || cam::_is_in_vehicle_cam_disabled())) {
		iVar2 = 1;
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				iVar3 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
				if (vehicle::is_this_model_a_bike(entity::get_entity_model(iVar3)) ||
					vehicle::is_this_model_a_bicycle(entity::get_entity_model(iVar3)) ||
					vehicle::is_this_model_a_quadbike(entity::get_entity_model(iVar3)) ||
					entity::get_entity_model(iVar3) == joaat("seashark") ||
					entity::get_entity_model(iVar3) == joaat("seashark2") ||
					entity::get_entity_model(iVar3) == joaat("rhino") ||
					entity::get_entity_model(iVar3) == joaat("submersible") ||
					entity::get_entity_model(iVar3) == joaat("submersible2") ||
					entity::get_entity_model(iVar3) == joaat("toro")) {
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_2595532 || iVar2 == 1) {
		if (script::_get_number_of_instances_of_script_with_name_hash(joaat("apptrackify")) > 0 ||
			Global_101700.f_13010.f_89) {
			if (script::_get_number_of_instances_of_script_with_name_hash(joaat("michael2")) > 0) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return true;
		}
	}
	return false;
}

// Position - 0x54ED
bool func_65() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("appcamera")) > 0) {
		return true;
	}
	return false;
}

// Position - 0x550A
void func_66() {
	if (!Global_69702) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (gameplay::is_bit_set(G_SleepModeOnOn25, 11)) {
				if (!Global_14386) {
					ai::task_use_mobile_phone(player::player_ped_id(), 0, 1);
				}
				if (Global_69702) {
					ped::set_ped_config_flag(player::player_ped_id(), 244, 1);
					ped::set_ped_config_flag(player::player_ped_id(), 243, 1);
					ped::set_ped_config_flag(player::player_ped_id(), 242, 1);
				}
				gameplay::clear_bit(&G_SleepModeOnOn25, 11);
			}
		}
	}
}

// Position - 0x5574
int func_67() {
	int iVar0;
	int iVar1;

	iVar0 = cam::_0x19CAFA3C87F7C2FF();
	iVar1 = cam::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4) {
		return 1;
	}
	return 0;
}

// Position - 0x5598
void func_68(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x55AF
void func_69() {
	mobile::get_mobile_phone_render_id(&iLocal_42);
	if (iLocal_42 == -1) {
	}
}

// Position - 0x55C3
void func_70(int iParam0, char *sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6,
			 char *sParam7, char *sParam8, char *sParam9, char *sParam10, char *sParam11) {
	graphics::_push_scaleform_movie_function(iParam0, sParam1);
	graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam2));
	if (fParam3 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam3));
	}
	if (fParam4 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam4));
	}
	if (fParam5 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam5));
	}
	if (fParam6 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam6));
	}
	if (!gameplay::is_string_null_or_empty(sParam7)) {
		func_47(sParam7);
	}
	if (!gameplay::is_string_null_or_empty(sParam8)) {
		func_47(sParam8);
	}
	if (!gameplay::is_string_null_or_empty(sParam9)) {
		func_47(sParam9);
	}
	if (!gameplay::is_string_null_or_empty(sParam10)) {
		func_47(sParam10);
	}
	if (!gameplay::is_string_null_or_empty(sParam11)) {
		func_47(sParam11);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x5676
bool func_71(int iParam0) { return Global_35781 == iParam0; }

// Position - 0x5684
void func_72(int iParam0) {
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

	Global_16813 = 0;
	Global_2918 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9) {
		Global_2882[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9) {
		iVar1 = 0;
		if (func_71(14)) {
			while (iVar1 < 34) {
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11) {
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4) {
						if (Global_2882[iVar0] == 0) {
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 3) {
								if (gameplay::is_bit_set(G_SleepModeOffOn11, 3)) {
									iVar2 = 42;
									Global_14608 = 1;
								}
								else {
									iVar2 = 255;
									Global_14608 = 0;
								}
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_47(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(iVar2);
								graphics::_pop_scaleform_movie_function_void();
							}
							if (Global_2452520) {
								if (iVar1 == 14) {
									func_70(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
											system::to_float(Global_2320[iVar1 /*15*/].f_10),
											system::to_float(Global_16808), -1f, &Global_2320[iVar1 /*15*/], 0, 0, 0,
											0);
								}
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else {
			while (iVar1 < 34) {
				if (iParam0 == Global_2320[iVar1 /*15*/].f_11) {
					if (iVar0 == Global_2320[iVar1 /*15*/].f_4) {
						if (Global_2882[iVar0] == 0) {
							Global_2846[iVar0] = iVar1;
							if (iVar1 == 1) {
								iVar3 = 0;
								while (iVar3 < 35) {
									if (Global_101700.f_13100[iVar3 /*104*/].f_24 != 0) {
										if (Global_101700.f_13100[iVar3 /*104*/].f_28 == 0) {
											if (Global_101700.f_13100[iVar3 /*104*/].f_99[Global_14443] == 1) {
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_70(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
										system::to_float(Global_2320[iVar1 /*15*/].f_10),
										system::to_float(Global_16813), -1f, &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
							}
							else if (iVar1 == 7) {
								if (Global_69702) {
									iVar4 = 0;
									iVar4 = Global_2594052;
									iVar5 = 0;
									while (iVar5 < 12) {
										if (Global_2594053[iVar5 /*104*/].f_24 != 0) {
											if (Global_2594053[iVar5 /*104*/].f_28 == 0) {
												if (Global_2594053[iVar5 /*104*/
												]
														.f_99[Global_14443] == 1) {
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_70(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
											system::to_float(Global_2320[iVar1 /*15*/].f_10), system::to_float(iVar4),
											-1f, &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
								}
								else {
									switch (Global_14443) {
									case 0: iVar6 = Global_36917; break;

									case 1: iVar6 = Global_36918; break;

									case 2: iVar6 = Global_36919; break;

									default: break;
									}
									func_70(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
											system::to_float(Global_2320[iVar1 /*15*/].f_10), system::to_float(iVar6),
											-1f, &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14) {
								func_70(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
										system::to_float(Global_2320[iVar1 /*15*/].f_10),
										system::to_float(Global_16808), -1f, &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
							}
							else if (iVar1 == 20) {
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_47(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2319);
								graphics::_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 2) {
								if (gameplay::is_bit_set(G_SleepModeOffOn11, 6)) {
									iVar7 = 42;
								}
								else {
									iVar7 = 255;
								}
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_47(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(iVar7);
								graphics::_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 3) {
								if (gameplay::is_bit_set(G_SleepModeOffOn11, 3)) {
									iVar8 = 42;
									Global_14608 = 1;
								}
								else {
									iVar8 = 255;
									Global_14608 = 0;
								}
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_47(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(iVar8);
								graphics::_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 8) {
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_47(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(42);
								graphics::_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 23 &&
									 gameplay::are_strings_equal(&Global_2320[iVar1 /*15*/], "CELL_BENWEB") &&
									 gameplay::is_bit_set(G_SleepModeOffOn11, 6)) {
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_47(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(42);
								graphics::_pop_scaleform_movie_function_void();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23) {
								iVar9 = 0;
								iVar9 = Global_1618161.f_1;
								func_70(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
										system::to_float(Global_2320[iVar1 /*15*/].f_10), system::to_float(iVar9), -1f,
										&Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
							}
							else {
								func_70(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
										system::to_float(Global_2320[iVar1 /*15*/].f_10), system::to_float(0), -1f,
										&Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
							}
							Global_2882[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

// Position - 0x5C2A
void func_73() {
	if (Global_69702 == 0) {
		Global_2320[14 /*15*/].f_4 = -99;
		Global_2320[4 /*15*/].f_4 = -99;
		if (Global_2452520) {
			if (func_71(14)) {
				func_74(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_74(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else {
				func_74(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else {
			func_74(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

// Position - 0x5CB8
void func_74(int iParam0, char *sParam1, int iParam2, char *sParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8) {
	StringCopy(&Global_2320[iParam0 /*15*/], sParam1, 16);
	Global_2320[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&Global_2320[iParam0 /*15*/].f_5, sParam3, 16);
	Global_2320[iParam0 /*15*/].f_9 = gameplay::get_hash_key(sParam3);
	Global_2320[iParam0 /*15*/].f_10 = iParam4;
	Global_2320[iParam0 /*15*/].f_11 = iParam5;
	Global_2320[iParam0 /*15*/].f_12 = iParam6;
	Global_2320[iParam0 /*15*/].f_13 = iParam7;
	Global_2320[iParam0 /*15*/].f_14 = iParam8;
	if (Global_2320[iParam0 /*15*/].f_12 == 0) {
		Global_2320[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_2320[iParam0 /*15*/].f_13 == 0) {
		Global_2320[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_2320[iParam0 /*15*/].f_14 == 0) {
		Global_2320[iParam0 /*15*/].f_14 = 0;
	}
}

// Position - 0x5D6E
void func_75() {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 34) {
		Global_2320[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_69702 == 0) {
		iVar1 = 0;
		while (iVar2 < 150) {
			if (Global_101700.f_27009[iVar2 /*29*/].f_19[Global_14443] == 1) {
				iVar1 = 1;
			}
			iVar2++;
		}
		func_74(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_74(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_74(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if (Global_35781 == 15 && func_54(0) == 0 && Global_2318 == 0) {
			func_74(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14607 = 0;
			Global_2319 = 255;
		}
		else {
			func_74(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14607 = 1;
			Global_2319 = 42;
		}
		if (iVar1 == 1) {
			func_74(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else {
			func_74(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_74(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_74(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_74(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_101700.f_13010.f_89 == 1) {
			func_74(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_101700.f_13010.f_88 == 1) {
			func_74(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_74(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_74(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_74(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_74(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_74(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_74(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_74(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_74(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_74(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else {
		func_74(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_74(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_74(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_74(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_74(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_74(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_74(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_74(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (gameplay::is_bit_set(Global_2595318, 4) == 1) {
			func_74(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_74(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_74(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_74(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_74(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_74(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_74(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_74(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_74(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_74(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_74(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_74(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_74(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_74(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_74(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_74(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_74(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!gameplay::is_bit_set(Global_2595318, 4) == 1) {
			if (Global_1573849) {
				func_74(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (gameplay::is_bit_set(Global_2595318, 20) == 1) {
				func_74(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (gameplay::is_bit_set(Global_2595318, 22) == 1) {
				func_74(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (gameplay::is_bit_set(Global_2595318, 26) == 1) {
				func_74(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if (gameplay::is_bit_set(Global_2595318, 4) == 0 && Global_1573849 == 0 &&
			gameplay::is_bit_set(Global_2595318, 20) == 0 && gameplay::is_bit_set(Global_2595318, 22) == 0 &&
			gameplay::is_bit_set(Global_2595318, 26) == 0) {
			func_74(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

// Position - 0x6302
int func_76(int iParam0) {
	int iVar0;

	if (iParam0 == 1) {
	}
	if (iParam0 == 0) {
		if (func_77() == 0) {
			return 0;
		}
	}
	if (network::network_can_access_multiplayer(&iVar0) && gameplay::get_profile_setting(903) == 1) {
		return 1;
	}
	if (!network::network_can_access_multiplayer(&iVar0)) {
		if (iVar0 == 6) {
			return 1;
		}
		else if (iVar0 == 7) {
			return 1;
		}
		else if (iVar0 == 8) {
			return 1;
		}
		else if (iVar0 == 9) {
			return 1;
		}
		else if (iVar0 == 11) {
			return 1;
		}
		else if (iVar0 == 12) {
			return 1;
		}
		else if (iVar0 == 10) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x63A5
int func_77() {
	if (gameplay::is_orbis_version()) {
		if (!network::_0xBD545D44CCE70597()) {
			if (network::_0x74FB3E29E6D10FA9() == 4) {
				return 0;
			}
			if (network::_0x74FB3E29E6D10FA9() == 2) {
				return 0;
			}
			if (network::_0x74FB3E29E6D10FA9() == 1) {
				return 0;
			}
			if (network::_0x74FB3E29E6D10FA9() == 5) {
				return 0;
			}
		}
	}
	return 1;
}

// Position - 0x63ED
void func_78() {
	if (player::is_player_playing(player::player_id())) {
		iLocal_71 =
			zone::get_zone_scumminess(zone::get_zone_at_coords(entity::get_entity_coords(player::player_ped_id(), 1)));
	}
	switch (iLocal_71) {
	case 0: iLocal_46 = 5; break;

	case 1: iLocal_46 = 5; break;

	case 2: iLocal_46 = 4; break;

	case 3: iLocal_46 = 4; break;

	case 4: iLocal_46 = 3; break;

	case 5: iLocal_46 = 2; break;

	default: iLocal_46 = 3; break;
	}
	iLocal_72 = gameplay::get_random_int_in_range(0, 8);
	if (iLocal_72 < 2) {
		if (iLocal_46 > 2) {
			iLocal_46--;
		}
	}
	if (iLocal_73 == 1 || func_79()) {
		iLocal_46 = 0;
	}
	func_97(Global_14424, "SET_PROVIDER_ICON", system::to_float(uLocal_45), system::to_float(iLocal_46), -1082130432,
			-1082130432, -1082130432);
}

// Position - 0x64BD
int func_79() {
	int iVar0;
	vector3 vVar1;
	int iVar4;

	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		iVar0 = func_85();
		if (func_84(iVar0)) {
			vVar1 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			iVar4 = 0;
			while (iVar4 < G_SomeGlobalState.MessageCallStates.f_136) {
				if (gameplay::is_bit_set(G_SomeGlobalState.MessageCallStates[iVar4 /*15*/].f_2, iVar0)) {
					if (func_82(vVar1, func_83(iVar4))) {
						return 1;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < G_SomeGlobalState.MessageCallStates.f_764) {
				if (gameplay::is_bit_set(G_SomeGlobalState.MessageCallStates.f_651[iVar4 /*14*/].f_2, iVar0)) {
					if (func_82(vVar1, func_81(iVar4))) {
						return 1;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < G_SomeGlobalState.MessageCallStates.f_866) {
				if (gameplay::is_bit_set(G_SomeGlobalState.MessageCallStates.f_765[iVar4 /*10*/].f_2, iVar0)) {
					if (func_82(vVar1, func_80(iVar4))) {
						return 1;
					}
				}
				iVar4++;
			}
		}
	}
	return 0;
}

// Position - 0x65C6
int func_80(int iParam0) { return G_SomeGlobalState.MessageCallStates.f_765[iParam0 /*10*/].f_7; }

// Position - 0x65DE
int func_81(int iParam0) { return G_SomeGlobalState.MessageCallStates.f_651[iParam0 /*14*/].f_7; }

// Position - 0x65F6
bool func_82(vector3 vParam0, int iParam3) {
	if (iParam3 != -1) {
		if (iParam3 >= Global_35782) {
			return false;
		}
		if (system::vdist2(vParam0, Global_35782[iParam3 /*5*/]) <=
			Global_35782[iParam3 /*5*/].f_3 * Global_35782[iParam3 /*5*/].f_3) {
			return true;
		}
		else if (Global_35782[iParam3 /*5*/].f_4 != -1) {
			return func_82(vParam0, Global_35782[iParam3 /*5*/].f_4);
		}
	}
	return false;
}

// Position - 0x6661
int func_83(int iParam0) { return G_SomeGlobalState.MessageCallStates[iParam0 /*15*/].f_7; }

// Position - 0x6676
bool func_84(int iParam0) { return iParam0 < 3; }

// Position - 0x6682
var func_85() {
	func_86();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x669B
void func_86() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_88(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_87(player::player_ped_id());
			if (func_84(iVar0) && (!func_71(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_84(Global_101700.f_2095.f_539.f_3549)) {
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

// Position - 0x6798
int func_87(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_88(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0x67D5
int func_88(int iParam0) {
	if (func_84(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x67FF
var func_89() {
	func_105();
	return Global_101700.f_13010[Global_14443 /*20*/].f_8;
}

// Position - 0x6819
struct<13> func_90(int iParam0) {
	struct<13> Var0;

	network::network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

//Position - 0x6830
void func_91()
{
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (Global_14443 == 0) {
			switch (Global_101700.f_13010[Global_14443 /*20*/].f_6) {
			case 1: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 0); break;

			case 2: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 1); break;

			case 3: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 2); break;

			case 4: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 3); break;

			case 5: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 4); break;

			case 6: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 5); break;

			case 7: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 6); break;

			default: break;
			}
		}
		if (Global_14443 == 1) {
			switch (Global_101700.f_13010[Global_14443 /*20*/].f_6) {
			case 1: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 6); break;

			case 2: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 0); break;

			case 3: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 1); break;

			case 4: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 2); break;

			case 5: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 3); break;

			case 6: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 4); break;

			case 7: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 5); break;

			default: break;
			}
		}
		if (Global_14443 == 2) {
			switch (Global_101700.f_13010[Global_14443 /*20*/].f_6) {
			case 1: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 5); break;

			case 2: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 6); break;

			case 3: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 1); break;

			case 4: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 0); break;

			case 5: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 2); break;

			case 6: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 3); break;

			case 7: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 4); break;

			default: break;
			}
		}
		if (Global_14443 == 3) {
			switch (Global_2595530) {
			case 1: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 0); break;

			case 2: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 1); break;

			case 3: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 2); break;

			case 4: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 3); break;

			case 5: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 4); break;

			case 6: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 5); break;

			case 7: player::set_player_reset_flag_prefer_rear_seats(player::player_id(), 6); break;

			default: break;
			}
		}
	}
}

// Position - 0x6AA7
int func_92(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_93(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x6AD9
int func_93(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_94();
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

// Position - 0x6B0D
var func_94() { return Global_1312735; }

// Position - 0x6B19
void func_95() {
	if (func_71(14)) {
		if (Global_2452520) {
			if (Global_14443.f_1 == 6) {
				if (Global_14423 == 7) {
					func_97(Global_14424, "DISPLAY_VIEW", 1f, system::to_float(7), -1082130432, -1082130432,
							-1082130432);
				}
				else {
					Global_14423 = 6;
					func_97(Global_14424, "DISPLAY_VIEW", 1f, system::to_float(6), -1082130432, -1082130432,
							-1082130432);
				}
			}
		}
		else if (Global_14443.f_1 == 6) {
			func_97(Global_14424, "DISPLAY_VIEW", 1f, system::to_float(6), -1082130432, -1082130432, -1082130432);
		}
	}
	iLocal_48 = time::get_clock_minutes();
	if (iLocal_48 != Global_2316) {
		Global_2316 = iLocal_48;
		iLocal_47 = time::get_clock_hours();
		iLocal_49 = time::get_clock_day_of_week();
		switch (iLocal_49) {
		case 0: StringCopy(&Local_50, "CELL_920", 16); break;

		case 1: StringCopy(&Local_50, "CELL_921", 16); break;

		case 2: StringCopy(&Local_50, "CELL_922", 16); break;

		case 3: StringCopy(&Local_50, "CELL_923", 16); break;

		case 4: StringCopy(&Local_50, "CELL_924", 16); break;

		case 5: StringCopy(&Local_50, "CELL_925", 16); break;

		case 6: StringCopy(&Local_50, "CELL_926", 16); break;

		default: StringCopy(&Local_50, "CELL_206", 16); break;
		}
		func_70(Global_14424, "SET_TITLEBAR_TIME", system::to_float(iLocal_47), system::to_float(iLocal_48), -1f, -1f,
				-1f, &Local_50, 0, 0, 0, 0);
		if (Global_14386 == 0) {
			func_78();
		}
		if (player::is_player_playing(player::player_id())) {
			iLocal_56 = entity::get_entity_health(player::player_ped_id());
		}
	}
}

// Position - 0x6C98
void func_96() {
	if (Global_69702) {
		StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
		mobile::create_mobile_phone(0);
	}
	else if (Global_14386) {
		mobile::create_mobile_phone(4);
		StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
	}
	else {
		switch (Global_14443) {
		case 0:
			StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
			mobile::create_mobile_phone(0);
			break;

		case 2:
			StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
			mobile::create_mobile_phone(1);
			break;

		case 1:
			StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
			mobile::create_mobile_phone(2);
			break;

		default:
			StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
			mobile::create_mobile_phone(0);
			break;
		}
	}
	Global_14406 = {-90f, -130f, 0f};
	if (graphics::get_is_hidef()) {
		Global_14388 = 0;
		Global_14389[0 /*3*/] = {graphics::get_safe_zone_size() * 117.2f, graphics::get_safe_zone_size() * -158.8f,
								 -113f};
		Global_14396[0 /*3*/] = {graphics::get_safe_zone_size() * 117.2f, graphics::get_safe_zone_size() * -53.3f,
								 -113f};
	}
	else {
		Global_14388 = 0;
		Global_14389[0 /*3*/] = {graphics::get_safe_zone_size() * 85.7f, graphics::get_safe_zone_size() * -121.8f,
								 -91.5f};
		Global_14396[0 /*3*/] = {graphics::get_safe_zone_size() * 85.7f, graphics::get_safe_zone_size() * -35.3f,
								 -91.5f};
	}
	Global_14371 = {Global_14389[Global_14388 /*3*/]};
	mobile::set_mobile_phone_position(Global_14389[Global_14388 /*3*/]);
	mobile::set_mobile_phone_rotation(Global_14406, 0);
	Global_14383 = 1;
}

// Position - 0x6DFD
void func_97(int iParam0, char *sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6) {
	graphics::_push_scaleform_movie_function(iParam0, sParam1);
	graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam2));
	if (fParam3 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam3));
	}
	if (fParam4 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam4));
	}
	if (fParam5 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam5));
	}
	if (fParam6 != -1f) {
		graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam6));
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x6E60
void func_98() {
	Global_2499540.f_1 = 0;
	Global_2499540 = 0;
	Global_2499540.f_2 = 0;
	Global_2499540.f_33 = -1;
	Global_2499540.f_34 = -1;
	StringCopy(&Global_2499540.f_4, "", 64);
	StringCopy(&Global_2499540.f_39[0 /*16*/], "", 64);
	Global_2499540.f_38 = 0;
	Global_2499540.f_56 = 0;
	Global_2499540.f_57 = 0;
	Global_2499540.f_58 = -2;
	Global_2499540.f_3 = 0;
	func_99(&Global_2499540.f_20);
}

// Position - 0x6ED3
void func_99(var *uParam0) {
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

// Position - 0x6F1B
void func_100() {
	Global_2499540.f_2 = 1;
	Global_2499540.f_38 = 1;
	if (network::network_is_signed_online()) {
		if (network::_0x855BC38818F6F684()) {
			while (network::_0xEF0912DDF7C4CB4B()) {
				system::wait(0);
			}
			network::network_session_voice_leave();
			Global_2499540 = 0;
			Global_2499540.f_2 = 0;
		}
		else if (func_101(Global_2499540.f_20)) {
			if (network::network_is_friend(&Global_2499540.f_20)) {
				if (!network::_0x87EB7A3FFCB314DB(&Global_2499540.f_20)) {
					func_98();
				}
			}
		}
		else {
			func_98();
		}
	}
	else {
		func_98();
	}
	if (Global_2499540.f_37) {
		func_55(0);
	}
	Global_2499540.f_37 = 0;
	Global_2499540.f_3 = 0;
}

// Position - 0x6FBB
bool func_101(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7,
			  var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) {
	return network::network_is_handle_valid(&uParam0, 13);
}

// Position - 0x6FCB
void func_102() {
	Global_14611 = 0;
	func_7();
}

// Position - 0x6FDB
void func_103(int iParam0, char *sParam1) {
	graphics::_push_scaleform_movie_function(iParam0, sParam1);
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x6FF0
void func_104() {
	controls::set_input_exclusive(0, Global_14412);
	if (controls::_is_input_disabled(2)) {
		controls::set_input_exclusive(0, Global_14412);
		controls::set_input_exclusive(0, Global_14413);
		controls::disable_control_action(0, 24, 1);
		controls::disable_control_action(0, 257, 1);
	}
	if (Global_69702) {
		Global_101700.f_13010[3 /*20*/].f_10 = func_92(1192, -1, 0);
	}
	if (gameplay::is_pc_version()) {
		if (decorator::decor_exist_on(player::player_ped_id(), "Synched")) {
		}
		else if (gameplay::get_game_timer() - iLocal_74 >= 300 || iLocal_74 == 0 ||
				 iLocal_74 > gameplay::get_game_timer()) {
			controls::set_pad_shake(0, 100, 100);
			iLocal_74 = gameplay::get_game_timer();
		}
	}
	else if (Global_101700.f_13010[Global_14443 /*20*/].f_10 == 1) {
		if (gameplay::get_game_timer() - iLocal_74 >= 300 || iLocal_74 == 0 || iLocal_74 > gameplay::get_game_timer()) {
			controls::set_pad_shake(0, 100, 100);
			iLocal_74 = gameplay::get_game_timer();
		}
	}
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (!audio::is_ped_ringtone_playing(player::player_ped_id())) {
			if (Global_69702) {
				if (!gameplay::are_strings_equal(&Global_3118[3 /*2811*/][1 /*281*/].f_144[func_92(1193, -1, 0) /*6*/],
												 "Silent Ringtone Dummy")) {
					audio::play_ped_ringtone(&Global_3118[3 /*2811*/][1 /*281*/].f_144[func_92(1193, -1, 0) /*6*/],
											 player::player_ped_id(), 1);
				}
			}
			else if (!gameplay::are_strings_equal(&Global_101700.f_13010[Global_14443 /*20*/].f_11,
												  "Silent Ringtone Dummy")) {
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 != 1) {
					if (gameplay::is_pc_version()) {
						if (decorator::decor_exist_on(player::player_ped_id(), "Synched")) {
						}
						else {
							audio::play_ped_ringtone(&Global_101700.f_13010[Global_14443 /*20*/].f_11,
													 player::player_ped_id(), 1);
						}
					}
					else {
						audio::play_ped_ringtone(&Global_101700.f_13010[Global_14443 /*20*/].f_11,
												 player::player_ped_id(), 1);
					}
				}
			}
		}
	}
}

// Position - 0x71B9
void func_105() {
	if (func_71(14)) {
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
		Global_14443 = func_85();
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
