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
char *sLocal_19[13] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
char *sLocal_33[13] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
int iLocal_47 = 0;
char *sLocal_48[7] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL};
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
vector3 vLocal_67 = {0f, 0f, 0f};
vector3 vLocal_70 = {0f, 0f, 0f};
float fLocal_73 = 0f;
float fLocal_74 = 0f;
float fLocal_75 = 0f;
float fLocal_76 = 0f;
float fLocal_77 = 0f;
vector3 vLocal_78 = {0f, 0f, 0f};
vector3 vLocal_81 = {0f, 0f, 0f};
vector3 vLocal_84 = {0f, 0f, 0f};
vector3 vLocal_87 = {0f, 0f, 0f};
vector3 vLocal_90 = {0f, 0f, 0f};
vector3 vLocal_93 = {0f, 0f, 0f};
float fLocal_96 = 0f;
float fLocal_97 = 0f;
float fLocal_98 = 0f;
float fLocal_99 = 0f;
int iLocal_100 = 0;
int iLocal_101 = 0;
int iLocal_102 = 0;
int iLocal_103 = 0;
int iLocal_104 = 0;
int iLocal_105 = 0;
int iLocal_106 = 0;
int iLocal_107 = 0;
int iLocal_108 = 0;
int iLocal_109 = 0;
int iLocal_110 = 0;
int iLocal_111 = 0;
int iLocal_112 = 0;
int iLocal_113 = 0;
float fLocal_114 = 0f;
int iLocal_115 = 0;
int iLocal_116 = 0;
int iLocal_117 = 0;
int iLocal_118 = 0;
int iLocal_119 = 0;
int iLocal_120 = 0;
int iLocal_121 = 0;
int iLocal_122 = 0;
int iLocal_123 = 0;
int iLocal_124 = 0;
int iLocal_125 = 0;
int iLocal_126 = 0;
int iLocal_127 = 0;
int iLocal_128 = 0;
int iLocal_129 = 0;
int iLocal_130 = 0;
int iLocal_131 = 0;
int iLocal_132 = 0;
int iLocal_133 = 0;
int iLocal_134 = 0;
int iLocal_135 = 0;
int iLocal_136 = 0;
int iLocal_137 = 0;
int iLocal_138 = 0;
int iLocal_139 = 0;
int iLocal_140 = 0;
int iLocal_141 = 0;
int iLocal_142 = 0;
int iLocal_143 = 0;
int iLocal_144 = 0;
char cLocal_145[16] = "";
var uLocal_147 = 0;
var uLocal_148 = 0;
int iLocal_149 = 0;
int iLocal_150 = 0;
int iLocal_151 = 0;
int iLocal_152 = 0;
int iLocal_153 = 0;
int iLocal_154 = 0;
int iLocal_155 = 0;
int iLocal_156 = 0;
float fLocal_157 = 0f;
float fLocal_158 = 0f;
float fLocal_159 = 0f;
float fLocal_160 = 0f;
float fLocal_161 = 0f;
float fLocal_162 = 0f;
float fLocal_163 = 0f;
float fLocal_164 = 0f;
#pragma endregion //}

void __EntryFunction__() {
	int iVar0;

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
	iLocal_59 = 1;
	iLocal_62 = 1;
	iLocal_63 = 1;
	fLocal_73 = 0f;
	fLocal_74 = 172f;
	fLocal_77 = 0.7f;
	iLocal_137 = 1200;
	iLocal_138 = 1200;
	iLocal_139 = 166;
	fLocal_157 = 0.5f;
	fLocal_158 = 0.85f;
	fLocal_159 = 0.5f;
	fLocal_160 = -0.25f;
	fLocal_161 = 0.25f;
	fLocal_162 = 0.3f;
	fLocal_163 = 0.3f;
	fLocal_164 = 0.075f;
	gameplay::network_set_script_is_safe_for_network_game();
	if (unk::_get_current_language_id() == 0) {
		fLocal_77 = 1f;
	}
	else {
		fLocal_77 = 0.7f;
	}
	if (!func_135()) {
		Global_2594042 = 99;
		Global_2594043 = 99;
		iLocal_57 = 99;
	}
	else {
		Global_2594042 = 0;
		Global_2594043 = 0;
	}
	sLocal_19[0] = "No_Filter";
	sLocal_19[1] = "phone_cam1";
	sLocal_19[2] = "phone_cam2";
	sLocal_19[3] = "phone_cam3";
	sLocal_19[4] = "phone_cam4";
	sLocal_19[5] = "phone_cam5";
	sLocal_19[6] = "phone_cam6";
	sLocal_19[7] = "phone_cam7";
	sLocal_19[8] = "phone_cam8";
	sLocal_19[9] = "phone_cam9";
	sLocal_19[10] = "phone_cam10";
	sLocal_19[11] = "phone_cam11";
	sLocal_19[12] = "phone_cam12";
	sLocal_33[0] = "No_Border";
	sLocal_33[1] = "frame1";
	sLocal_33[2] = "frame2";
	sLocal_33[3] = "frame3";
	sLocal_33[4] = "frame4";
	sLocal_33[5] = "frame5";
	sLocal_33[6] = "frame6";
	sLocal_33[7] = "frame7";
	sLocal_33[8] = "frame8";
	sLocal_33[9] = "frame9";
	sLocal_33[10] = "frame10";
	sLocal_33[11] = "frame11";
	sLocal_33[12] = "frame12";
	sLocal_48[0] = "No_Expression";
	sLocal_48[1] = "mood_Aiming_1";
	sLocal_48[2] = "mood_Happy_1";
	sLocal_48[3] = "mood_smug_1";
	sLocal_48[4] = "mood_Injured_1";
	sLocal_48[5] = "mood_sulk_1";
	sLocal_48[6] = "mood_Angry_1";
	func_134();
	if (func_133(1, 1, !iLocal_64, 1)) {
		iLocal_64 = 1;
	}
	func_132();
	iLocal_112 = audio::get_sound_id();
	if (Global_14388 == 0) {
		fLocal_96 = 0.207f;
		fLocal_97 = 0.158f;
		fLocal_98 = 0.207f;
		fLocal_99 = 0.335f;
	}
	else {
		fLocal_96 = 0.24f;
		fLocal_97 = 0.258f;
		fLocal_98 = 0.24f;
		fLocal_99 = 0.435f;
	}
	Global_16778 = 0;
	Global_16779 = 0;
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (ped::is_ped_on_mount(player::player_ped_id())) {
			Global_16778 = 1;
		}
		if (graphics::_is_nightvision_inactive()) {
			Global_16778 = 1;
		}
		if (vehicle::is_vehicle_driveable(ped::set_exclusive_phone_relationships(player::player_ped_id()), 0)) {
			Global_16778 = 1;
		}
		if (ped::get_ped_config_flag(player::player_ped_id(), 78, 1)) {
			Global_16778 = 1;
		}
		if (ped::is_ped_in_any_train(player::player_ped_id())) {
			Global_16778 = 1;
		}
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (iLocal_131 == 1) {
				Global_16778 = 1;
			}
			iLocal_149 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
			if (entity::get_entity_model(iLocal_149) == joaat("rhino") ||
				entity::get_entity_model(iLocal_149) == joaat("cutter") ||
				entity::get_entity_model(iLocal_149) == joaat("submersible")) {
				Global_16778 = 1;
			}
			else if (vehicle::get_ped_in_vehicle_seat(iLocal_149, -1, 0) == player::player_ped_id()) {
				if (entity::get_entity_upright_value(iLocal_149) > 0f) {
					if (!Global_69702) {
						if (!func_131()) {
							ai::task_vehicle_temp_action(player::player_ped_id(), iLocal_149, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_69702) {
		if (player::is_player_playing(player::player_id())) {
			player::set_player_can_do_drive_by(player::player_id(), 0);
		}
	}
	gameplay::clear_bit(&G_SleepModeOnOn25, 21);
	func_130(0);
	gameplay::set_bit(&G_SleepModeOnOn25, 17);
	if (Global_14385 == 0) {
		func_129();
	}
	else {
		iLocal_140 = unk_0x67D02A194A2FC2BD("camera_gallery");
		iLocal_141 = unk_0x67D02A194A2FC2BD("instructional_buttons");
		while (!graphics::has_scaleform_movie_loaded(iLocal_140) || !graphics::has_scaleform_movie_loaded(iLocal_141)) {
			system::wait(0);
			unk1::_0xEB2D525B57F42B40();
			controls::disable_control_action(0, 25, 1);
		}
		if (Global_69702) {
			iLocal_144 = 2;
		}
		else {
			switch (func_128()) {
			case 0: iLocal_144 = 2; break;

			case 2: iLocal_144 = 2; break;

			case 3: iLocal_144 = 2; break;
			}
		}
		func_127(iLocal_140, "DISPLAY_VIEW", system::to_float(iLocal_144), -1082130432, -1082130432, -1082130432,
				 -1082130432);
		func_126(iLocal_140, "CLOSE_SHUTTER");
		graphics::_push_scaleform_movie_function(Global_14424, "DISPLAY_VIEW");
		graphics::_push_scaleform_movie_function_parameter_int(16);
		graphics::_pop_scaleform_movie_function_void();
	}
	vLocal_78 = {Global_14403};
	vLocal_81 = {Global_14396[Global_14388 /*3*/]};
	Global_16779 = 1;
	iLocal_118 = 1;
	iLocal_119 = 1;
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 0;
	if (Global_14443.f_1 > 3) {
		Global_14443.f_1 = 8;
	}
	if (iLocal_131 == 0) {
		gameplay::clear_bit(&Global_2315, 3);
	}
	func_124();
	graphics::_set_2d_layer(4);
	if (network::_0x76BF03FADBF154F5()) {
	}
	if (Global_1633501.f_102723) {
	}
	if (Global_1633501.f_102725 == 1) {
		iLocal_156 = 1;
	}
	if (iLocal_156 == 1) {
	}
	while (true) {
		system::wait(0);
		controls::set_input_exclusive(0, Global_14412);
		controls::set_input_exclusive(0, 186);
		unk1::_0xEB2D525B57F42B40();
		controls::disable_control_action(0, 25, 1);
		controls::disable_control_action(0, 0, 1);
		if (!Global_101700.f_13010.f_81) {
			if (!gameplay::is_bit_set(Global_2595318, 13)) {
				if (!ui::is_help_message_being_displayed()) {
					if (!gameplay::is_bit_set(G_SleepModeOffOn11, 28)) {
						if (iLocal_128 && iLocal_131 == 0) {
							gameplay::set_bit(&Global_2595318, 13);
							Global_101700.f_13010.f_81 = 1;
							func_123("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!ui::is_pause_menu_active()) {
			if (Global_1633501.f_102722 == 0 && Global_1633501.f_102723 == 0) {
				ui::set_hud_component_position(15, 0f, -0.0375f);
			}
			ui::hide_hud_component_this_frame(7);
			func_122();
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				ped::set_ped_reset_flag(player::player_ped_id(), 200, 1);
			}
			controls::disable_control_action(0, 44, 1);
			controls::disable_control_action(0, 47, 1);
			controls::disable_control_action(0, 91, 1);
			controls::disable_control_action(0, 92, 1);
			controls::disable_control_action(0, 68, 1);
			if (iLocal_150 == 0) {
				controls::set_input_exclusive(0, Global_14416);
			}
			controls::set_input_exclusive(0, Global_14413);
			if (cam::is_screen_faded_out() || cam::is_screen_fading_out()) {
				iLocal_130 = 1;
				Global_14443.f_1 = 3;
				gameplay::set_game_paused(0);
			}
			if (gameplay::is_stunt_jump_in_progress()) {
				Global_14443.f_1 = 3;
				gameplay::set_game_paused(0);
			}
			if (gameplay::is_bit_set(G_SleepModeOffOn11, 3)) {
				Global_14443.f_1 = 3;
				gameplay::set_game_paused(0);
			}
			if (network::network_is_game_in_progress()) {
				if (func_111()) {
					Global_14443.f_1 = 3;
					gameplay::set_game_paused(0);
				}
			}
			if (!ped::is_ped_injured(player::player_ped_id())) {
				if (ped::is_ped_in_cover(player::player_ped_id(), 0)) {
					Global_14443.f_1 = 3;
					gameplay::set_game_paused(0);
				}
				if (ped::get_ped_config_flag(player::player_ped_id(), 78, 1) ||
					player::is_player_climbing(player::player_id()) ||
					player::is_player_free_aiming(player::player_id())) {
					if (func_110()) {
					}
					else {
						Global_14443.f_1 = 3;
						gameplay::set_game_paused(0);
					}
				}
				if (ped::is_ped_ragdoll(player::player_ped_id()) ||
					ped::is_ped_in_parachute_free_fall(player::player_ped_id())) {
					if (Global_69702 == 1) {
						Global_14443.f_1 = 3;
					}
				}
				if (entity::is_entity_in_water(player::player_ped_id())) {
					if (entity::get_entity_submerged_level(player::player_ped_id()) > 0.3f) {
						Global_14443.f_1 = 3;
					}
				}
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
					func_109();
					iLocal_149 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
					if (entity::get_entity_upright_value(iLocal_149) < 0f) {
						func_107(0);
					}
					if (iLocal_115 == 1) {
						if (iLocal_116 == 1) {
							if (!cam::_0x1F2300CB7FA7B7F6()) {
								func_107(0);
							}
						}
						else if (!cam::_0x1F2300CB7FA7B7F6()) {
							iLocal_116 = 1;
							system::wait(0);
							unk1::_0xEB2D525B57F42B40();
						}
					}
				}
				else if (Global_69702 == 0) {
					if (gameplay::is_bit_set(G_SleepModeOnOn25, 18)) {
						func_106();
						if (Global_14443 == 0 || Global_14443 == 1 || Global_14443 == 2) {
							if (!ped::is_ped_running_mobile_phone_task(player::player_ped_id())) {
								if (ped::get_ped_parachute_state(player::player_ped_id()) == 2) {
								}
								else {
									Global_14443.f_1 = 3;
									gameplay::set_game_paused(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_142) {
				func_105();
			}
			if (Global_14443.f_1 < 4) {
			}
			if (iLocal_153 == 0) {
				if (iLocal_103 == 0) {
					if (iLocal_104 == 0) {
						if (iLocal_111 == 0) {
							if (Global_14443.f_1 > 3) {
								if (iLocal_150) {
									func_103();
									if (Global_16783 == 0 && Global_16780 == 6) {
										ui::clear_floating_help(0, 1);
										ui::_remove_loading_prompt();
										iLocal_150 = 0;
										func_102();
										if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
											vLocal_67 = {entity::get_entity_coords(player::player_ped_id(), 1)};
										}
										func_101();
										iLocal_109++;
										if (func_135()) {
											func_127(iLocal_140, "SET_REMAINING_PHOTOS", system::to_float(iLocal_109),
													 system::to_float(iLocal_110), -1082130432, -1082130432,
													 -1082130432);
										}
										else {
											func_127(iLocal_140, "SET_REMAINING_PHOTOS", system::to_float(iLocal_109),
													 system::to_float(iLocal_110), -1082130432, -1082130432,
													 -1082130432);
										}
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_100();
									}
									if (Global_16780 == 0) {
										iLocal_150 = 0;
										ui::_remove_loading_prompt();
										if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
											vLocal_67 = {entity::get_entity_coords(player::player_ped_id(), 1)};
										}
										func_99();
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_100();
										if (func_135()) {
											if (Global_2594043 == 0) {
												if (!gameplay::is_bit_set(Global_2595318, 2)) {
													func_127(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432,
															 -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!gameplay::is_bit_set(Global_2595318, 2)) {
											func_127(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432,
													 -1082130432, -1082130432);
										}
										func_98();
										func_97(1);
									}
								}
								else if (Global_14443.f_1 != 9) {
									if (Global_16779 == 1) {
										if (Global_16778 == 0) {
											func_96();
										}
									}
									else if (Global_2921 - Global_2920 > Global_2922) {
										if (func_95(2, Global_14411, 0)) {
											if (func_94() && iLocal_127) {
											}
											else if (iLocal_127 == 0) {
												gameplay::set_game_paused(0);
												audio::stop_sound(iLocal_112);
												iLocal_143 = 0;
												if (Global_16778 == 0) {
													func_101();
													Global_16778 = 1;
													ui::clear_floating_help(0, 1);
													iLocal_128 = 0;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													iLocal_122 = 1;
													iLocal_123 = 1;
													func_93(0, 0);
													func_97(0);
													iLocal_115 = 0;
													func_92();
													iLocal_142 = 0;
													func_90(0, 1);
													func_127(Global_14424, "DISPLAY_VIEW", 16f, -1082130432,
															 -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_101 == 0) {
										if (ui::is_help_message_being_displayed()) {
											func_89();
											iLocal_101 = 1;
										}
									}
									else if (!ui::is_help_message_being_displayed()) {
										func_89();
										iLocal_101 = 0;
									}
									if (iLocal_102 == 0) {
										if (gameplay::is_bit_set(G_SleepModeOnOn25, 28)) {
											func_89();
											iLocal_102 = 1;
										}
									}
									else if (!gameplay::is_bit_set(G_SleepModeOnOn25, 28)) {
										func_89();
										iLocal_102 = 0;
									}
									if (Global_16778 == 1) {
										func_82();
									}
									else if (Global_14443.f_1 > 4) {
										if (iLocal_124 == 1 && iLocal_125 == 0) {
											func_78();
										}
										if (iLocal_124 == 0 && iLocal_125 == 1) {
											func_99();
											if (iLocal_136 == 1 || iLocal_136 == 0) {
												if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
													if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
														func_126(iLocal_140, "CLOSE_SHUTTER");
														iLocal_135 = gameplay::get_game_timer();
														while (gameplay::get_game_timer() < iLocal_135 + iLocal_137 &&
															   Global_14443.f_1 > 3) {
															func_122();
															func_105();
															func_77();
															unk1::_0xEB2D525B57F42B40();
															system::wait(0);
														}
													}
												}
												if (func_135()) {
													if (Global_2594043 == 0) {
														if (!gameplay::is_bit_set(Global_2595318, 2)) {
															func_127(iLocal_140,
																	 "SHOW_PHOTO_"
																	 "FRAME",
																	 1f, -1082130432, -1082130432, -1082130432,
																	 -1082130432);
														}
													}
												}
												else if (!gameplay::is_bit_set(Global_2595318, 2)) {
													func_127(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432,
															 -1082130432, -1082130432, -1082130432);
												}
												func_105();
												func_122();
												iLocal_132 = 0;
												iLocal_133 = 0;
												iLocal_134 = 0;
												iLocal_127 = 0;
												func_100();
												iLocal_136 = 0;
												func_126(iLocal_140, "OPEN_SHUTTER");
											}
											func_98();
											func_97(1);
											func_76();
										}
									}
									if (iLocal_143 == 1) {
										func_73();
									}
									if (iLocal_129) {
										if (system::timerb() > 500) {
											iLocal_128 = 1;
											iLocal_129 = 0;
											gameplay::set_bit(&G_SleepModeOnOn25, 18);
											if (Global_16778 == 0) {
												func_90(1, 1);
											}
										}
									}
									if (iLocal_127 == 0) {
										if (iLocal_128 && Global_16778 == 0) {
											if (iLocal_130 == 0 && iLocal_125 == 0 && Global_16781 == 0) {
												func_10();
											}
										}
										else {
											func_77();
										}
									}
									else if (iLocal_124 == 0) {
										func_5();
									}
								}
							}
						}
					}
				}
				else {
					if (Global_14443.f_1 > 3) {
						if (Global_16779 == 1) {
							if (Global_16778 == 0) {
								func_96();
							}
						}
					}
					func_4();
				}
			}
			else {
				if (iLocal_155 == 1) {
					ui::_set_warning_message_2("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_152, "CELL_CAM_FW_2", 0, -1,
											   "", "", 1);
				}
				if (iLocal_155 == 2) {
					ui::_set_warning_message_2("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_152, "", 0, -1, "",
											   "", 1);
				}
				if (iLocal_155 == 6) {
					ui::_set_warning_message_2("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_152, "", 0, -1, "", "", 1);
				}
				if (iLocal_155 == 3) {
					ui::_set_warning_message_2("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_152, "", 0, -1,
											   "", "", 1);
				}
				if (iLocal_155 == 7) {
					if (gameplay::is_xbox360_version() || gameplay::is_durango_version()) {
						ui::_set_warning_message_2("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_152, "", 0, -1, "", "",
												   1);
					}
					if (gameplay::is_ps3_version() || gameplay::is_orbis_version()) {
						ui::_set_warning_message_2("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_152, "", 0, -1, "", "",
												   1);
					}
					if (gameplay::is_pc_version()) {
						ui::_set_warning_message_2("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_152, "", 0, -1, "", "",
												   1);
					}
				}
				if (iLocal_155 == 4) {
					ui::_set_warning_message_2("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_152, "CELL_CAM_CCW_2", 0, -1,
											   "", "", 1);
				}
				if (iLocal_155 == 5) {
					iVar0 = network::_0x9614B71F8ADB982B();
					switch (iVar0) {
					case -1:
						ui::_set_warning_message_2("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_152, "", 0, -1, "", "", 1);
						break;

					case 0:
						ui::_set_warning_message_2("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_152, "", 0, -1, "", "", 1);
						break;

					case 1:
						ui::_set_warning_message_2("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_152, "", 0, -1, "", "", 1);
						break;

					case 2:
						ui::_set_warning_message_2("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_152, "", 0, -1, "", "", 1);
						break;

					default:
						ui::_set_warning_message_2("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_152, "", 0, -1, "", "", 1);
						break;
					}
				}
				if (iLocal_155 == 0) {
				}
				if (iLocal_155 == 2 || iLocal_155 == 3) {
					if (controls::is_control_just_pressed(2, 202)) {
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_90(0, 1);
					}
					if (controls::is_control_just_pressed(2, 201)) {
						iLocal_154 = 1;
					}
					if (iLocal_154 == 1) {
						if (controls::is_control_just_released(2, 201)) {
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_90(0, 1);
							iLocal_154 = 0;
							ui::_0x9E778248D6685FE0("Gallery");
							ui::_0x75D3691713C3B05A();
						}
					}
				}
				else if (iLocal_155 == 7) {
					if (gameplay::is_orbis_version()) {
						if (controls::is_control_just_pressed(2, 201)) {
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_90(0, 1);
							iLocal_111 = 0;
						}
					}
					else if (controls::is_control_just_pressed(2, 202)) {
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_90(0, 1);
						iLocal_111 = 0;
					}
					if (!gameplay::is_orbis_version()) {
						if (controls::is_control_just_pressed(2, Global_14415)) {
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_90(0, 1);
							if (gameplay::is_bit_set(G_SleepModeOffOn11, 28)) {
								iLocal_111 = 0;
							}
							else {
								iLocal_111 = 2;
							}
							iLocal_107 = gameplay::get_game_timer();
							player::display_system_signin_ui(1);
						}
					}
				}
				else if (controls::is_control_just_pressed(2, 201)) {
					iLocal_153 = 0;
					iLocal_155 = 0;
					func_90(0, 1);
				}
			}
		}
		iLocal_108 = gameplay::get_game_timer();
		if (func_3() || iLocal_130) {
			func_1(0);
			func_93(0, 0);
			func_97(0);
			iLocal_115 = 0;
			func_92();
			Global_16778 = 0;
			Global_16779 = 0;
			Global_16781 = 0;
			graphics::set_scaleform_movie_as_no_longer_needed(&iLocal_140);
			graphics::set_scaleform_movie_as_no_longer_needed(&iLocal_141);
			gameplay::set_game_paused(0);
			if (Global_14606 == 1) {
				gameplay::set_bit(&G_SleepModeOnOn25, 17);
			}
			else {
				gameplay::clear_bit(&G_SleepModeOnOn25, 17);
			}
			ui::clear_floating_help(0, 1);
			player::set_player_can_do_drive_by(player::player_id(), 1);
			gameplay::clear_bit(&Global_2315, 3);
			gameplay::clear_bit(&Global_2595318, 3);
			ui::reset_hud_component_values(15);
			Global_16782 = 1;
			audio::stop_sound(iLocal_112);
			audio::release_sound_id(iLocal_112);
			ui::_remove_loading_prompt();
			func_92();
			mobile::_0xA2CCBE62CD4C91A4(0);
			unk_0x375A706A5C2FD084(0);
			mobile::_0x1B0B4AEED5B9B41C(1f);
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				ped::set_facial_idle_anim_override(player::player_ped_id(), "Mood_Normal_1", 0);
				ped::clear_facial_idle_anim_override(player::player_ped_id());
			}
			if (Global_2594043 > 0 && Global_2594043 < 13) {
				graphics::set_streamed_texture_dict_as_no_longer_needed(sLocal_33[Global_2594043]);
			}
			gameplay::clear_bit(&G_SleepModeOnOn25, 18);
			func_90(0, 1);
			if (func_133(0, 1, iLocal_64, 1)) {
				iLocal_64 = 0;
			}
			script::terminate_this_thread();
		}
	}
}

// Position - 0x105A
void func_1(int iParam0) {
	if (func_2()) {
		if (iParam0 == 1) {
			mobile::_set_phone_lean(1);
		}
		else if (Global_14443.f_1 > 3) {
			mobile::_set_phone_lean(0);
		}
	}
}

// Position - 0x1085
bool func_2() {
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

// Position - 0x10CC
int func_3() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 3 || Global_14443.f_1 == 0 || Global_14387 == 1) {
		Global_14430 = 1;
		return 1;
	}
	return 0;
}

// Position - 0x110F
void func_4() {
	iLocal_106 = graphics::_0xF5BED327CEA362B1(0);
	switch (iLocal_106) {
	case 0:
		iLocal_103 = 0;
		iLocal_109 = graphics::_0x473151EBC762C6DA();
		iLocal_110 = graphics::_0xDC54A7AF8B3A14EF();
		if (iLocal_104 == 1) {
			if (iLocal_127 == 0) {
				if (graphics::has_scaleform_movie_loaded(iLocal_140)) {
					if (func_135()) {
						if (Global_2594043 == 0) {
							if (!gameplay::is_bit_set(Global_2595318, 2)) {
								func_127(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432,
										 -1082130432);
							}
						}
						func_127(iLocal_140, "SET_REMAINING_PHOTOS", system::to_float(iLocal_109),
								 system::to_float(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
					else {
						if (!gameplay::is_bit_set(Global_2595318, 2)) {
							func_127(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432,
									 -1082130432);
						}
						func_127(iLocal_140, "SET_REMAINING_PHOTOS", system::to_float(iLocal_109),
								 system::to_float(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (graphics::has_scaleform_movie_loaded(iLocal_140)) {
				func_127(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_127(iLocal_140, "SET_REMAINING_PHOTOS", system::to_float(iLocal_109), system::to_float(iLocal_110),
						 -1082130432, -1082130432, -1082130432);
			}
			iLocal_104 = 0;
		}
		ui::_remove_loading_prompt();
		break;

	case 1:
		if (!ui::_is_loading_prompt_being_displayed()) {
			ui::_set_loading_prompt_text_entry("CELL_SPINNER2");
			ui::_show_loading_prompt(1);
		}
		break;

	case 2:
		if (gameplay::is_bit_set(G_SleepModeOffOn11, 28)) {
			iLocal_103 = 0;
			iLocal_109 = 0;
			iLocal_110 = 0;
		}
		else {
			Global_14443.f_1 = 3;
			Global_16782 = 1;
		}
		ui::_remove_loading_prompt();
		break;
	}
}

// Position - 0x12AA
void func_5() {
	if (func_95(2, Global_14412, 0)) {
		func_1(0);
		if (gameplay::is_bit_set(G_SleepModeOffOn11, 28)) {
			gameplay::set_game_paused(0);
			system::settimerb(0);
			func_102();
			iLocal_127 = 0;
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				vLocal_67 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			}
			func_101();
			iLocal_136 = 1;
		}
		else if (func_9()) {
			if (gameplay::is_bit_set(G_SleepModeOffOn11, 14)) {
				func_123("CELL_299", -1);
			}
			else {
				func_101();
				func_8();
			}
		}
		else {
			iLocal_153 = 1;
			func_90(1, 1);
		}
	}
	if (gameplay::is_bit_set(G_SleepModeOnOn25, 22)) {
		func_1(0);
		while (system::timera() < 2000) {
			system::wait(0);
			func_122();
			unk1::_0xEB2D525B57F42B40();
			func_77();
			func_109();
			func_105();
		}
		gameplay::set_game_paused(0);
		func_102();
		system::settimerb(0);
		iLocal_127 = 0;
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			vLocal_67 = {entity::get_entity_coords(player::player_ped_id(), 1)};
		}
		func_100();
		func_101();
	}
	if (func_95(2, Global_14416, 0)) {
		func_1(0);
		if (func_94() || gameplay::is_bit_set(G_SleepModeOffOn11, 28)) {
		}
		else {
			gameplay::set_game_paused(0);
			system::settimerb(0);
			iLocal_136 = 1;
			func_102();
			iLocal_127 = 0;
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				vLocal_67 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			}
			func_101();
		}
	}
	if (gameplay::is_bit_set(G_SleepModeOnOn25, 28)) {
		if (func_95(2, Global_14415, 0)) {
			func_1(0);
			gameplay::set_game_paused(0);
			graphics::_0x1072F115DAB0717E(0, 0);
			system::wait(0);
			unk1::_0xEB2D525B57F42B40();
			func_122();
			system::wait(0);
			unk1::_0xEB2D525B57F42B40();
			func_122();
			graphics::_0xD801CC02177FA3F1();
			graphics::_0x6A12D88881435DCA();
			Global_16782 = 1;
			iLocal_143 = 0;
			iLocal_126 = 0;
			func_90(0, 1);
			Global_16778 = 1;
			ui::clear_floating_help(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_6();
			iLocal_127 = 0;
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				vLocal_67 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			}
			func_93(0, 0);
			func_97(0);
			iLocal_115 = 0;
			func_92();
			gameplay::set_bit(&G_SleepModeOnOn25, 9);
			iLocal_142 = 0;
			func_127(Global_14424, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

// Position - 0x14D9
void func_6() {
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		audio::play_sound_frontend(-1, "Menu_Accept", &Global_14432, 1);
		func_7();
	}
}

// Position - 0x14FF
void func_7() {
	if (func_2()) {
		mobile::_move_finger(5);
	}
}

// Position - 0x1513
void func_8() {
	iLocal_150 = 1;
	Global_16783 = 1;
	ui::clear_floating_help(0, 1);
}

// Position - 0x1528
bool func_9() {
	if (iLocal_107 == iLocal_108) {
		if (iLocal_105) {
			iLocal_105 = 1;
		}
	}
	if (Global_14443.f_1 < 4) {
		return false;
	}
	if (iLocal_109 == iLocal_110 || iLocal_109 > iLocal_110) {
		iLocal_155 = 1;
		iLocal_152 = 2;
		return false;
	}
	return true;
}

// Position - 0x1570
void func_10() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (controls::_is_input_disabled(2)) {
		iVar0 = 179;
		iVar1 = 21;
	}
	else {
		iVar0 = 228;
		iVar1 = 229;
	}
	if (iLocal_131) {
		func_68();
		func_64();
		func_63();
		fLocal_73 = cam::get_gameplay_cam_relative_pitch();
		fLocal_74 = cam::get_gameplay_cam_relative_heading();
		if (iLocal_133 == 0) {
			if (controls::is_control_pressed(2, iVar0) && !controls::is_control_pressed(2, iVar1)) {
				iLocal_133 = 1;
				func_127(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_127(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (gameplay::is_bit_set(G_SleepModeOnOn25, 28)) {
					func_61(iLocal_141, "SET_DATA_SLOT", 0f, controls::get_control_instructional_button(0, 177, 1),
							"CELL_281");
					func_61(iLocal_141, "SET_DATA_SLOT", 1f, controls::get_control_instructional_button(2, 179, 1),
							"CELL_287");
					func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::get_control_instructional_button(2, 178, 1),
							"CELL_CAM_SELFIE_2");
				}
				else {
					func_61(iLocal_141, "SET_DATA_SLOT", 0f, controls::get_control_instructional_button(0, 176, 1),
							"CELL_280");
					func_61(iLocal_141, "SET_DATA_SLOT", 1f, controls::get_control_instructional_button(0, 177, 1),
							"CELL_281");
					func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::get_control_instructional_button(2, 178, 1),
							"CELL_CAM_SELFIE_2");
				}
				func_60();
				graphics::_push_scaleform_movie_function(iLocal_141, "SET_MAX_WIDTH");
				graphics::_push_scaleform_movie_function_parameter_float(fLocal_77);
				graphics::_pop_scaleform_movie_function_void();
				func_127(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432,
						 -1082130432);
			}
		}
		else if (!controls::is_control_pressed(2, iVar0) || controls::is_control_pressed(2, iVar1)) {
			iLocal_133 = 0;
			func_100();
		}
		if (iLocal_134 == 0) {
			if (controls::is_control_pressed(2, iVar1) && !controls::is_control_pressed(2, iVar0)) {
				iLocal_134 = 1;
				func_127(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_127(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (gameplay::is_bit_set(G_SleepModeOnOn25, 28)) {
					func_61(iLocal_141, "SET_DATA_SLOT", 0f, controls::get_control_instructional_button(0, 177, 1),
							"CELL_281");
					func_61(iLocal_141, "SET_DATA_SLOT", 1f, controls::get_control_instructional_button(2, 179, 1),
							"CELL_287");
				}
				else {
					func_61(iLocal_141, "SET_DATA_SLOT", 0f, controls::get_control_instructional_button(0, 176, 1),
							"CELL_280");
					func_61(iLocal_141, "SET_DATA_SLOT", 1f, controls::get_control_instructional_button(0, 177, 1),
							"CELL_281");
				}
				func_59();
				graphics::_push_scaleform_movie_function(iLocal_141, "SET_MAX_WIDTH");
				graphics::_push_scaleform_movie_function_parameter_float(fLocal_77);
				graphics::_pop_scaleform_movie_function_void();
				func_127(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432,
						 -1082130432);
			}
		}
		else if (!controls::is_control_pressed(2, iVar1) || controls::is_control_pressed(2, iVar0)) {
			iLocal_134 = 0;
			func_100();
		}
	}
	else {
		controls::enable_control_action(0, 2, 1);
		controls::enable_control_action(0, 1, 1);
	}
	if (controls::_0x6CD79468A1E595C6(2)) {
		func_100();
	}
	func_109();
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		ped::set_ped_reset_flag(player::player_ped_id(), 200, 1);
	}
	if (controls::is_control_just_pressed(2, 183) && iLocal_156 == 0) {
		audio::play_sound_frontend(-1, "Menu_Navigate", &Global_14432, 1);
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (ped::get_ped_parachute_state(player::player_ped_id()) != 2) {
				if (gameplay::is_bit_set(Global_2595318, 2)) {
					gameplay::clear_bit(&Global_2595318, 2);
					if (!gameplay::is_bit_set(Global_2595318, 2)) {
						func_127(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432,
								 -1082130432);
					}
				}
				else {
					gameplay::set_bit(&Global_2595318, 2);
					func_127(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_131) {
		if (iLocal_132 == 1) {
			iLocal_132 = 0;
			graphics::_push_scaleform_movie_function(iLocal_140, "SET_FOCUS_LOCK");
			graphics::_push_scaleform_movie_function_parameter_bool(0);
			func_58("CELL_FOCUS");
			graphics::_push_scaleform_movie_function_parameter_bool(1);
			graphics::_pop_scaleform_movie_function_void();
		}
		if (!func_57(14)) {
			if (gameplay::is_bit_set(Global_2595318, 10)) {
				if (Global_69702 == 0 &&
					script::_get_number_of_instances_of_script_with_name_hash(joaat("pi_menu")) > 0 && func_56()) {
					graphics::_push_scaleform_movie_function(iLocal_140, "SET_FOCUS_LOCK");
					graphics::_push_scaleform_movie_function_parameter_bool(1);
					graphics::begin_text_command_scaleform_string("CELL_ACTTL");
					ui::add_text_component_substring_player_name(ui::_get_label_text(&Global_2596034));
					graphics::end_text_command_scaleform_string();
					graphics::_push_scaleform_movie_function_parameter_bool(0);
					graphics::_pop_scaleform_movie_function_void();
					gameplay::clear_bit(&Global_2595318, 10);
				}
			}
		}
		else if (gameplay::is_bit_set(Global_2595318, 10)) {
			gameplay::clear_bit(&Global_2595318, 10);
		}
		iLocal_66 = gameplay::get_game_timer();
		if (iLocal_66 - iLocal_65 > 1500) {
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				vLocal_70 = {entity::get_entity_coords(player::player_ped_id(), 1)};
				if (gameplay::get_distance_between_coords(vLocal_70, vLocal_67, 1) > 5f) {
					Global_14443.f_1 = 3;
					gameplay::set_game_paused(0);
				}
				iLocal_65 = gameplay::get_game_timer();
			}
		}
	}
	else if (iLocal_132) {
		if (!controls::is_control_pressed(0, 182)) {
			audio::play_sound_frontend(-1, "Menu_Navigate", &Global_14432, 1);
			iLocal_132 = 0;
			graphics::_push_scaleform_movie_function(iLocal_140, "SET_FOCUS_LOCK");
			graphics::_push_scaleform_movie_function_parameter_bool(0);
			func_58("CELL_FOCUS");
			graphics::_push_scaleform_movie_function_parameter_bool(1);
			graphics::_pop_scaleform_movie_function_void();
		}
	}
	else if (controls::is_control_pressed(0, 182)) {
		audio::play_sound_frontend(-1, "Menu_Navigate", &Global_14432, 1);
		iLocal_132 = 1;
		if (!func_57(14)) {
			graphics::_push_scaleform_movie_function(iLocal_140, "SET_FOCUS_LOCK");
			graphics::_push_scaleform_movie_function_parameter_bool(1);
			func_58("CELL_FOCUS");
			graphics::_push_scaleform_movie_function_parameter_bool(1);
			graphics::_pop_scaleform_movie_function_void();
		}
	}
	if (func_135()) {
		if (controls::is_control_just_pressed(2, 186) && iLocal_156 == 0) {
			if (iLocal_131) {
				iLocal_57++;
				if (iLocal_57 > 0 && iLocal_57 < 7) {
					if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
						audio::play_sound_frontend(-1, "Menu_Navigate", &Global_14432, 1);
						ped::set_facial_idle_anim_override(player::player_ped_id(), "Mood_Normal_1", 0);
						ped::clear_facial_idle_anim_override(player::player_ped_id());
						if (Global_14443 == 0) {
							iVar4 = 0;
							iVar2 = ped::get_ped_prop_index(player::player_ped_id(), 0);
							if (iVar2 == 20 || iVar2 == 14) {
								iVar4 = 1;
							}
							iVar3 = ped::get_ped_prop_index(player::player_ped_id(), 1);
							if (iVar3 != -1) {
								iVar4 = 1;
							}
							if (iVar4 == 1) {
								if (iLocal_57 == 2 || iLocal_57 == 3 || iLocal_57 == 4 || iLocal_57 == 8 ||
									iLocal_57 == 9) {
									if (iVar2 == -1 && iVar3 > -1) {
										if (iLocal_57 == 3) {
											ped::set_facial_idle_anim_override(player::player_ped_id(),
																			   sLocal_48[iLocal_57], 0);
										}
									}
								}
								else {
									ped::set_facial_idle_anim_override(player::player_ped_id(), sLocal_48[iLocal_57],
																	   0);
								}
							}
							else {
								ped::set_facial_idle_anim_override(player::player_ped_id(), sLocal_48[iLocal_57], 0);
							}
						}
						else {
							ped::set_facial_idle_anim_override(player::player_ped_id(), sLocal_48[iLocal_57], 0);
						}
					}
				}
				if (iLocal_57 == 7 || iLocal_57 > 7) {
					iLocal_57 = 0;
				}
				if (iLocal_57 == 0) {
					if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
						ped::set_facial_idle_anim_override(player::player_ped_id(), "Mood_Normal_1", 0);
						ped::clear_facial_idle_anim_override(player::player_ped_id());
						audio::play_sound_frontend(-1, "Menu_Navigate", &Global_14432, 1);
					}
				}
			}
		}
		if (controls::is_control_just_pressed(2, 185) && iLocal_156 == 0) {
			if (iLocal_131) {
				if (iLocal_62 == 1) {
					audio::play_sound_frontend(-1, "Menu_Navigate", &Global_14432, 1);
					if (iLocal_61 == 0) {
						iLocal_61 = 1;
						iLocal_60 = 1;
						if (gameplay::are_strings_equal(sLocal_19[Global_2594042], "phone_cam12DUMMY")) {
						}
						else {
							mobile::_0xA2CCBE62CD4C91A4(1);
							unk_0x375A706A5C2FD084(1);
						}
					}
					else {
						iLocal_61 = 0;
						iLocal_60 = 0;
						mobile::_0xA2CCBE62CD4C91A4(0);
						unk_0x375A706A5C2FD084(0);
					}
				}
			}
			else if (iLocal_63 == 1) {
				if (iLocal_60 == 0) {
					iLocal_60 = 1;
					iLocal_61 = 1;
					mobile::_0xA2CCBE62CD4C91A4(1);
					unk_0x375A706A5C2FD084(1);
				}
				else {
					iLocal_60 = 0;
					iLocal_61 = 0;
					mobile::_0xA2CCBE62CD4C91A4(0);
					unk_0x375A706A5C2FD084(0);
				}
			}
		}
	}
	if (iLocal_59 == 1) {
		if (controls::is_control_just_pressed(0, 172) && iLocal_156 == 0) {
			if (func_135()) {
				Global_2594043++;
				audio::play_sound_frontend(-1, "Menu_Navigate", &Global_14432, 1);
			}
			if (Global_2594043 == 13) {
				func_97(0);
				mobile::_0x1B0B4AEED5B9B41C(1f);
				graphics::set_streamed_texture_dict_as_no_longer_needed(sLocal_33[Global_2594043 - 1]);
				Global_2594043 = 0;
				func_55();
				if (iLocal_47 == 1) {
					gameplay::clear_bit(&Global_2595318, 2);
					iLocal_47 = 0;
					func_127(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_2594043 > 0 && Global_2594043 < 13) {
				iLocal_59 = 0;
				iLocal_58 = 0;
				graphics::request_streamed_texture_dict(sLocal_33[Global_2594043], 0);
			}
		}
	}
	if (Global_2594043 > 0) {
		if (iLocal_59 == 0) {
			if (graphics::has_streamed_texture_dict_loaded(sLocal_33[Global_2594043])) {
				iLocal_58 = 1;
				iLocal_59 = 1;
				if (!graphics::_0xBCEDB009461DA156()) {
					func_97(1);
				}
				if (iLocal_47 == 0) {
					if (!gameplay::is_bit_set(Global_2595318, 2)) {
						iLocal_47 = 1;
					}
				}
				gameplay::set_bit(&Global_2595318, 2);
				func_127(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				mobile::_0x1B0B4AEED5B9B41C(0.25f);
				graphics::_0x27FEB5254759CDE3(sLocal_33[Global_2594043], 0);
			}
		}
		if (iLocal_58 == 1) {
			if (Global_2594043 == 1 || Global_2594043 == 3) {
			}
			if (Global_2594043 == 2 || Global_2594043 == 4) {
			}
		}
	}
	if (controls::is_control_just_pressed(0, 173) && iLocal_156 == 0) {
		if (func_135()) {
			func_92();
			Global_2594042++;
			audio::play_sound_frontend(-1, "Menu_Navigate", &Global_14432, 1);
		}
		if (Global_2594042 == 13) {
			Global_2594042 = 0;
		}
		if (Global_2594042 == 0) {
			if (func_135()) {
				func_92();
			}
		}
		else {
			func_98();
		}
		func_54();
	}
	if (controls::is_disabled_control_just_pressed(0, 184) && iLocal_156 == 0) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) &&
				ped::get_ped_parachute_state(player::player_ped_id()) != 2) {
				vLocal_67 = {entity::get_entity_coords(player::player_ped_id(), 1)};
				audio::play_sound_frontend(-1, "Menu_Navigate", &Global_14432, 1);
				func_127(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_126(iLocal_140, "CLOSE_SHUTTER");
				iLocal_135 = gameplay::get_game_timer();
				while (gameplay::get_game_timer() < iLocal_135 + iLocal_139 && Global_14443.f_1 > 3) {
					func_122();
					func_105();
					func_77();
					unk1::_0xEB2D525B57F42B40();
					system::wait(0);
				}
				if (iLocal_131 == 0) {
					audio::stop_sound(iLocal_112);
					iLocal_131 = 1;
					func_53(1);
					func_52();
					gameplay::set_bit(&Global_2315, 3);
					iLocal_65 = gameplay::get_game_timer();
				}
				else {
					iLocal_133 = 0;
					iLocal_134 = 0;
					func_53(0);
					iLocal_131 = 0;
					gameplay::clear_bit(&Global_2315, 3);
				}
				iLocal_135 = gameplay::get_game_timer();
				while (gameplay::get_game_timer() < iLocal_135 + iLocal_137 && Global_14443.f_1 > 3) {
					func_122();
					func_105();
					func_77();
					unk1::_0xEB2D525B57F42B40();
					system::wait(0);
				}
				func_126(iLocal_140, "OPEN_SHUTTER");
				if (func_135()) {
					if (Global_2594043 == 0) {
						if (!gameplay::is_bit_set(Global_2595318, 2)) {
							func_127(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432,
									 -1082130432);
						}
					}
				}
				else if (!gameplay::is_bit_set(Global_2595318, 2)) {
					func_127(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_105();
				func_122();
				if (gameplay::is_bit_set(G_SleepModeOnOn25, 28)) {
					StringCopy(&cLocal_145, "CELL_296", 16);
					func_50();
				}
				else {
					StringCopy(&cLocal_145, "CELL_295", 16);
					func_27();
				}
			}
		}
	}
	if (iLocal_131 == 0) {
		if (iLocal_113 == 0) {
			if (controls::is_control_just_pressed(0, 40) || controls::is_control_just_pressed(0, 41)) {
				fLocal_114 = cam::_get_gameplay_cam_zoom();
				if (fLocal_114 > 1f && fLocal_114 < 4.5f) {
					if (audio::has_sound_finished(iLocal_112)) {
						audio::play_sound_frontend(iLocal_112, "Camera_Zoom", &Global_14432, 1);
					}
				}
				else {
					audio::stop_sound(iLocal_112);
				}
				iLocal_113 = 1;
			}
		}
		else if (controls::is_control_pressed(0, 40) || controls::is_control_pressed(0, 41)) {
			fLocal_114 = cam::_get_gameplay_cam_zoom();
			if (fLocal_114 > 1f && fLocal_114 < 4.5f) {
				if (audio::has_sound_finished(iLocal_112)) {
					audio::play_sound_frontend(iLocal_112, "Camera_Zoom", &Global_14432, 1);
				}
			}
			else {
				audio::stop_sound(iLocal_112);
			}
		}
		else {
			audio::stop_sound(iLocal_112);
		}
	}
	if (func_95(2, Global_14412, 0)) {
		fLocal_75 = cam::get_gameplay_cam_relative_pitch();
		fLocal_76 = cam::get_gameplay_cam_relative_heading();
		graphics::_0x1072F115DAB0717E(0, 0);
		gameplay::set_bit(&G_SleepModeOnOn25, 21);
		audio::stop_sound(iLocal_112);
		iLocal_127 = 1;
		func_127(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_127(iLocal_140, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		audio::play_sound_frontend(-1, "Camera_Shoot", &Global_14432, 1);
		func_126(iLocal_140, "CLOSE_SHUTTER");
		vLocal_84 = {-90.3f, 0f, 90f};
		mobile::set_mobile_phone_rotation(vLocal_84, 0);
		if (!func_135()) {
			func_92();
		}
		Global_16781 = 1;
		ui::clear_floating_help(0, 1);
		while (Global_16780 < 6 && Global_14443.f_1 > 3) {
			func_122();
			func_105();
			func_77();
			func_109();
			unk1::_0xEB2D525B57F42B40();
			system::wait(0);
		}
		mobile::cell_cam_activate(0, 0);
		if (Global_14385) {
			func_1(1);
		}
		iLocal_135 = gameplay::get_game_timer();
		while (gameplay::get_game_timer() < iLocal_135 + iLocal_138 && Global_14443.f_1 > 3) {
			func_122();
			func_105();
			func_77();
			unk1::_0xEB2D525B57F42B40();
			system::wait(0);
		}
		system::settimera(0);
		func_126(iLocal_140, "OPEN_SHUTTER");
		gameplay::clear_bit(&G_SleepModeOnOn25, 21);
		func_100();
		if (Global_14443.f_1 > 3) {
			if (Global_69702) {
				func_20(1081, 1, -1);
				func_19();
				func_16(23, 0);
			}
			else {
				switch (func_11()) {
				case 0: stats::stat_increment(joaat("sp0_no_photos_taken"), 1f); break;

				case 1: stats::stat_increment(joaat("sp1_no_photos_taken"), 1f); break;

				case 2: stats::stat_increment(joaat("sp2_no_photos_taken"), 1f); break;
				}
				func_19();
			}
			func_97(0);
		}
		func_105();
	}
	if (gameplay::is_bit_set(G_SleepModeOnOn25, 28)) {
		if (func_95(2, Global_14415, 0)) {
			graphics::_0x1072F115DAB0717E(0, 0);
			system::wait(0);
			unk1::_0xEB2D525B57F42B40();
			func_122();
			system::wait(0);
			unk1::_0xEB2D525B57F42B40();
			func_122();
			graphics::_0xD801CC02177FA3F1();
			graphics::_0x6A12D88881435DCA();
			Global_16782 = 1;
			iLocal_143 = 0;
			iLocal_126 = 1;
			Global_16778 = 1;
			ui::clear_floating_help(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_6();
			iLocal_127 = 0;
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				vLocal_67 = {entity::get_entity_coords(player::player_ped_id(), 1)};
			}
			func_93(0, 0);
			func_97(0);
			iLocal_115 = 0;
			func_92();
			gameplay::set_bit(&G_SleepModeOnOn25, 9);
			gameplay::set_game_paused(0);
			iLocal_142 = 0;
			func_127(Global_14424, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

// Position - 0x23A8
int func_11() {
	func_12();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0x23C1
void func_12() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_15(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_14(player::player_ped_id());
			if (func_13(iVar0) && (!func_57(14) || Global_100652)) {
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

// Position - 0x24BE
bool func_13(int iParam0) { return iParam0 < 3; }

// Position - 0x24CA
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

// Position - 0x2507
int func_15(int iParam0) {
	if (func_13(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0x2531
void func_16(int iParam0, int iParam1) {
	int iVar0;

	if (func_18(iParam0, iParam1)) {
		iVar0 = func_17();
		Global_2452429[iVar0] = iParam0;
	}
}

// Position - 0x2554
int func_17() {
	int iVar0;
	int iVar1;

	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9) {
		if (Global_2452429[iVar1] == 0) {
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

// Position - 0x2589
bool func_18(int iParam0, var uParam1) {
	if (Global_1315221) {
		return false;
	}
	if (iParam0 == 22) {
		return true;
	}
	if (uParam1 || !Global_1315233 || iParam0 == 3 || iParam0 == 10 || iParam0 == 11 || iParam0 == 27 ||
		iParam0 == 28 || iParam0 == 29 || iParam0 == 30) {
		return true;
	}
	else {
		return false;
	}
	return true;
}

// Position - 0x260F
void func_19() {
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 1;
	iLocal_125 = 0;
	Global_14380 = {Global_14396[Global_14388 /*3*/]};
	func_90(0, 1);
	func_93(0, 0);
	func_97(0);
	iLocal_115 = 0;
	func_92();
	if (!gameplay::is_bit_set(G_SleepModeOffOn11, 28)) {
		if (network::_0x76BF03FADBF154F5() == 0) {
			if (gameplay::is_xbox360_version()) {
				if (iLocal_117 == 0) {
					iLocal_117 = 1;
				}
			}
		}
	}
}

// Position - 0x2672
void func_20(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = func_24(iParam0, func_25(iParam2), 0);
	iVar0 += iParam1;
	if (!func_23(iParam0)) {
		func_22(iParam0, iVar0, iParam2, 1, 0);
	}
	else {
		func_21(iParam0, iVar0, iParam2, 1);
	}
}

// Position - 0x26B4
void func_21(int iParam0, int iParam1, var uParam2, int iParam3) {
	int iVar0;

	iVar0 = Global_2503826[iParam0 /*3*/][func_25(uParam2)];
	if (iVar0 != 0) {
		stats::stat_set_int(iVar0, iParam1, iParam3);
	}
	switch (iParam0) {
	case 782: Global_1363219[func_25(uParam2)] = iParam1; break;

	case 783: Global_1363225[func_25(uParam2)] = iParam1; break;

	case 784: Global_1363231[func_25(uParam2)] = iParam1; break;

	case 785: Global_1363237[func_25(uParam2)] = iParam1; break;

	case 772: Global_1363195[func_25(uParam2)] = iParam1; break;

	case 773: Global_1363201[func_25(uParam2)] = iParam1; break;

	case 774: Global_1363207[func_25(uParam2)] = iParam1; break;

	case 775: Global_1363213[func_25(uParam2)] = iParam1; break;

	case 762: Global_1363171[func_25(uParam2)] = iParam1; break;

	case 763: Global_1363177[func_25(uParam2)] = iParam1; break;

	case 764: Global_1363183[func_25(uParam2)] = iParam1; break;

	case 765: Global_1363189[func_25(uParam2)] = iParam1; break;

	case 752: Global_1363243[func_25(uParam2)] = iParam1; break;

	case 753: Global_1363249[func_25(uParam2)] = iParam1; break;

	case 754: Global_1363255[func_25(uParam2)] = iParam1; break;

	case 755: Global_1363261[func_25(uParam2)] = iParam1; break;

	case 1298: Global_1363267[func_25(uParam2)] = iParam1; break;

	case 634: Global_1363273[func_25(uParam2)] = iParam1; break;

	case 1273: Global_1363279[func_25(uParam2)] = iParam1; break;

	case 1870: Global_2524277[0 /*3*/][func_25(uParam2)] = iParam1; break;

	case 2261: Global_2524277[1 /*3*/][func_25(uParam2)] = iParam1; break;

	case 2911: Global_2524277[2 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3040: Global_2524277[3 /*3*/][func_25(uParam2)] = iParam1; break;

	case 5886: Global_2524348[func_25(uParam2)] = iParam1; break;

	case 759: Global_1363285[func_25(uParam2)] = iParam1; break;

	case 760: Global_1363291[func_25(uParam2)] = iParam1; break;

	case 761: Global_1363297[func_25(uParam2)] = iParam1; break;

	case 1231: Global_1363303[func_25(uParam2)] = iParam1; break;

	case 3035: Global_2524311[0 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3036: Global_2524311[1 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3037: Global_2524311[2 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3038: Global_2524311[3 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3039: Global_2524311[4 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3618: Global_2524351[0 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3619: Global_2524351[1 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3620: Global_2524351[2 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3621: Global_2524351[3 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3622: Global_2524351[4 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3623: Global_2524367[0 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3624: Global_2524367[1 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3625: Global_2524367[2 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3626: Global_2524367[3 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3627: Global_2524367[4 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3203: Global_2524311[5 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3209: Global_2524277[4 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3645: Global_2524383[func_25(uParam2)] = iParam1; break;

	case 3646: Global_2524392[func_25(uParam2)] = iParam1; break;

	case 3647: Global_2524386[func_25(uParam2)] = iParam1; break;

	case 3648: Global_2524395[func_25(uParam2)] = iParam1; break;

	case 3649: Global_2524389[func_25(uParam2)] = iParam1; break;

	case 3650: Global_2524398[func_25(uParam2)] = iParam1; break;

	case 3671: Global_2524401[func_25(uParam2)] = iParam1; break;

	case 3211: Global_2524311[6 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3212: Global_2524277[5 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3216: Global_2524311[7 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3214: Global_2524277[6 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3991: Global_2524311[8 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3992: Global_2524277[7 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3994: Global_2524311[9 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3995: Global_2524277[8 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3997: Global_2524311[10 /*3*/][func_25(uParam2)] = iParam1; break;

	case 3998: Global_2524277[9 /*3*/][func_25(uParam2)] = iParam1; break;

	case 4000: Global_2524311[11 /*3*/][func_25(uParam2)] = iParam1; break;

	case 4001: Global_2524277[10 /*3*/][func_25(uParam2)] = iParam1; break;

	default: break;
	}
}

// Position - 0x2D13
void func_22(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4) {
	int iVar0;

	if (iParam4) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_25(uParam2)];
	if (iVar0 != 0) {
		stats::stat_set_int(iVar0, iParam1, iParam3);
	}
}

// Position - 0x2D43
int func_23(int iParam0) {
	if (Global_1363152) {
		switch (iParam0) {
		case 782:
		case 783:
		case 784:
		case 785:
		case 772:
		case 773:
		case 774:
		case 775:
		case 762:
		case 763:
		case 764:
		case 765:
		case 752:
		case 753:
		case 754:
		case 755:
		case 1298:
		case 634:
		case 1273:
		case 759:
		case 760:
		case 761:
		case 1231:
		case 1870:
		case 2261:
		case 2911:
		case 3040:
		case 5886:
		case 3035:
		case 3036:
		case 3037:
		case 3038:
		case 3039:
		case 3214:
		case 3216:
		case 3618:
		case 3619:
		case 3620:
		case 3621:
		case 3622:
		case 3623:
		case 3624:
		case 3625:
		case 3626:
		case 3627:
		case 3209:
		case 3203:
		case 3645:
		case 3646:
		case 3647:
		case 3648:
		case 3649:
		case 3650:
		case 3671:
		case 3212:
		case 3211:
		case 3992:
		case 3991:
		case 3995:
		case 3994:
		case 3998:
		case 3997:
		case 4001:
		case 4000: return 1;
		}
	}
	return 0;
}

// Position - 0x2EE1
int func_24(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_25(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0x2F13
int func_25(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_26();
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

// Position - 0x2F47
var func_26() { return Global_1312735; }

// Position - 0x2F53
void func_27() {
	if (iLocal_156 == 1) {
		func_49();
		return;
	}
	if (iLocal_133 == 0 && iLocal_134 == 0) {
		func_127(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_127(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_61(iLocal_141, "SET_DATA_SLOT", 1f, controls::get_control_instructional_button(0, 177, 1), "CELL_281");
		func_61(iLocal_141, "SET_DATA_SLOT", 0f, controls::get_control_instructional_button(0, 176, 1), "CELL_280");
		if (iLocal_131) {
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) ||
					ped::get_ped_parachute_state(player::player_ped_id()) == 2) {
					if (controls::_is_input_disabled(2) || gameplay::is_orbis_version()) {
						func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::get_control_instructional_button(0, 184, 1),
								"CELL_SP_2NP_XB");
					}
					else {
						func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::get_control_instructional_button(0, 184, 1),
								"CELL_SP_2NP_XB");
					}
				}
				else if (Global_69702 == 0 &&
						 script::_get_number_of_instances_of_script_with_name_hash(joaat("pi_menu")) > 0 && func_56()) {
					func_47();
				}
				else {
					if (controls::_is_input_disabled(2) || gameplay::is_orbis_version()) {
						func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::get_control_instructional_button(0, 184, 1),
								"CELL_SP_2NP_XB");
					}
					else {
						func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::get_control_instructional_button(0, 184, 1),
								"CELL_SP_2NP_XB");
					}
					func_61(iLocal_141, "SET_DATA_SLOT", 3f, controls::get_control_instructional_button(2, 183, 1),
							"CELL_GRID");
					func_61(iLocal_141, "SET_DATA_SLOT", 4f, controls::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
					if (func_135()) {
						func_46(5f);
						func_45(6f);
						if (func_29(1)) {
							func_28(7f);
							if (iLocal_62) {
								func_61(iLocal_141, "SET_DATA_SLOT", 8f,
										controls::get_control_instructional_button(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (iLocal_62) {
							func_61(iLocal_141, "SET_DATA_SLOT", 7f,
									controls::get_control_instructional_button(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) ||
				ped::get_ped_parachute_state(player::player_ped_id()) == 2) {
				if (ped::get_ped_parachute_state(player::player_ped_id()) != 2) {
					func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
					func_61(iLocal_141, "SET_DATA_SLOT", 4f, controls::get_control_instructional_button(2, 183, 1),
							"CELL_GRID");
					func_61(iLocal_141, "SET_DATA_SLOT", 5f, controls::get_control_instructional_button(0, 39, 1),
							"CELL_284");
					if (func_135()) {
						func_46(6f);
						func_45(7f);
						if (iLocal_63) {
							func_61(iLocal_141, "SET_DATA_SLOT", 3f,
									controls::get_control_instructional_button(0, 182, 1), "CELL_FOCUS");
						}
						func_61(iLocal_141, "SET_DATA_SLOT", 8f, controls::get_control_instructional_button(2, 185, 1),
								"CELL_DEPTH");
					}
				}
				else {
					func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
					if (func_135()) {
						func_46(3f);
						func_45(4f);
						func_61(iLocal_141, "SET_DATA_SLOT", 8f, controls::get_control_instructional_button(2, 185, 1),
								"CELL_DEPTH");
					}
				}
			}
			else {
				if (controls::_is_input_disabled(2) || gameplay::is_orbis_version()) {
					func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::get_control_instructional_button(0, 184, 1),
							"CELL_SP_1NP_XB");
				}
				else {
					func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::get_control_instructional_button(0, 184, 1),
							"CELL_SP_1NP_XB");
				}
				if (ped::get_ped_parachute_state(player::player_ped_id()) != 2) {
					func_61(iLocal_141, "SET_DATA_SLOT", 4f, controls::get_control_instructional_button(2, 183, 1),
							"CELL_GRID");
					func_61(iLocal_141, "SET_DATA_SLOT", 5f, controls::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
					func_61(iLocal_141, "SET_DATA_SLOT", 6f, controls::get_control_instructional_button(0, 39, 1),
							"CELL_284");
					if (func_135()) {
						func_46(7f);
						func_45(8f);
						if (iLocal_63) {
							func_61(iLocal_141, "SET_DATA_SLOT", 3f,
									controls::get_control_instructional_button(0, 182, 1), "CELL_FOCUS");
						}
						func_61(iLocal_141, "SET_DATA_SLOT", 9f, controls::get_control_instructional_button(2, 185, 1),
								"CELL_DEPTH");
					}
				}
				else {
					func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
					if (func_135()) {
						func_46(3f);
						func_45(4f);
						func_61(iLocal_141, "SET_DATA_SLOT", 5f, controls::get_control_instructional_button(2, 185, 1),
								"CELL_DEPTH");
					}
				}
			}
		}
		graphics::_push_scaleform_movie_function(iLocal_141, "SET_MAX_WIDTH");
		graphics::_push_scaleform_movie_function_parameter_float(fLocal_77);
		graphics::_pop_scaleform_movie_function_void();
		func_127(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

// Position - 0x33B6
void func_28(float fParam0) {
	func_61(iLocal_141, "SET_DATA_SLOT", fParam0, controls::get_control_instructional_button(0, 174, 1), "CELL_ACTION");
}

// Position - 0x33D6
bool func_29(int iParam0) {
	if (network::network_is_game_in_progress()) {
		if (func_44(Global_2524899, Global_2524900)) {
			if (iParam0 == 0 || !func_30(Global_2524899, Global_2524900, 0, 1, 0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x3416
int func_30(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	return func_31(player::player_ped_id(), iParam0, iParam1, iParam2, iParam3, iParam4);
}

// Position - 0x3430
int func_31(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5) {
	var *uVar0;
	var *uVar5;
	var *uVar10;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;

	uVar0 = 4;
	uVar5 = 4;
	uVar10 = 4;
	if (iParam1 == 0) {
		iVar18 = 3;
	}
	else if (bParam3) {
		iVar18 = 1;
	}
	else if (bParam4) {
		iVar18 = 2;
	}
	else {
		iVar18 = 0;
	}
	func_39(iParam1, iParam2, &uVar0, &uVar5, &uVar10, iVar18, bParam5);
	if (!entity::is_entity_dead(iParam0, 0)) {
		if (entity::get_entity_model(iParam0) == joaat("mp_f_freemode_01")) {
			iVar15 = func_38(iParam0);
			if (iVar15 != -1) {
				if (func_37(&uVar0, iVar15)) {
					return 1;
				}
			}
		}
		else {
			iVar16 = func_36(iParam0);
			if (iVar16 != -1) {
				if (func_34(&uVar5, iVar16)) {
					return 1;
				}
			}
		}
		if (network::network_is_game_in_progress()) {
			iVar17 = func_33(iParam0);
			if (iVar17 != 0) {
				if (func_32(&uVar10, iVar17)) {
					return 1;
				}
			}
		}
	}
	return 0;
}

// Position - 0x34FF
bool func_32(var *uParam0, int iParam1) {
	int iVar0;

	iVar0 = system::floor(system::to_float(iParam1) / 32f);
	if (gameplay::is_bit_set((*uParam0)[iVar0], iParam1 - iVar0 * 32)) {
		return true;
	}
	return false;
}

// Position - 0x3532
var func_33(int iParam0) {
	var uVar0;

	uVar0 = ped::get_ped_drawable_variation(iParam0, 1);
	return uVar0;
}

// Position - 0x3545
bool func_34(var *uParam0, int iParam1) { return func_35(uParam0, iParam1); }

// Position - 0x3555
int func_35(var *uParam0, int iParam1) {
	int iVar0;

	iVar0 = system::floor(system::to_float(iParam1) / 32f);
	if (gameplay::is_bit_set((*uParam0)[iVar0], iParam1 - iVar0 * 32)) {
		return 1;
	}
	return 0;
}

// Position - 0x3588
var func_36(int iParam0) {
	var uVar0;

	uVar0 = ped::get_ped_prop_index(iParam0, 0);
	return uVar0;
}

// Position - 0x359B
bool func_37(var *uParam0, int iParam1) { return func_35(uParam0, iParam1); }

// Position - 0x35AB
var func_38(int iParam0) {
	var uVar0;

	uVar0 = ped::get_ped_prop_index(iParam0, 0);
	return uVar0;
}

// Position - 0x35BE
void func_39(int iParam0, int iParam1, var *uParam2, var *uParam3, var *uParam4, int iParam5, bool bParam6) {
	func_43(uParam4, 91, 1);
	switch (iParam0) {
	case 1:
		switch (iParam1) {
		case 0:
			switch (iParam5) {
			case 0:
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
				break;

			case 1:
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
				break;

			case 2:
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
				break;
			}
			break;
		}
		break;

	case 0:
		switch (iParam1) {
		case 6:
		case 26:
			if (bParam6) {
				func_42(uParam3, 16, 1);
				func_42(uParam3, 48, 1);
				func_42(uParam3, 49, 1);
				func_42(uParam3, 18, 1);
				func_42(uParam3, 50, 1);
				func_42(uParam3, 51, 1);
				func_42(uParam3, 52, 1);
				func_42(uParam3, 53, 1);
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_42(uParam3, 62, 1);
				func_40(uParam2, 16, 1);
				func_40(uParam2, 47, 1);
				func_40(uParam2, 48, 1);
				func_40(uParam2, 18, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
			}
			func_43(uParam4, 3, 1);
			func_43(uParam4, 4, 1);
			func_43(uParam4, 5, 1);
			func_43(uParam4, 6, 1);
			func_43(uParam4, 7, 1);
			func_43(uParam4, 8, 1);
			func_43(uParam4, 9, 1);
			func_43(uParam4, 12, 1);
			func_43(uParam4, 14, 1);
			func_43(uParam4, 15, 1);
			func_43(uParam4, 16, 1);
			func_43(uParam4, 17, 1);
			func_43(uParam4, 18, 1);
			func_43(uParam4, 19, 1);
			func_43(uParam4, 20, 1);
			func_43(uParam4, 59, 1);
			func_43(uParam4, 60, 1);
			func_43(uParam4, 61, 1);
			func_43(uParam4, 62, 1);
			func_43(uParam4, 62, 1);
			func_43(uParam4, 63, 1);
			func_43(uParam4, 64, 1);
			func_43(uParam4, 65, 1);
			func_43(uParam4, 66, 1);
			func_43(uParam4, 67, 1);
			func_43(uParam4, 68, 1);
			func_43(uParam4, 69, 1);
			func_43(uParam4, 70, 1);
			func_43(uParam4, 71, 1);
			func_43(uParam4, 72, 1);
			func_43(uParam4, 21, 1);
			func_43(uParam4, 22, 1);
			func_43(uParam4, 23, 1);
			func_43(uParam4, 24, 1);
			func_43(uParam4, 25, 1);
			func_43(uParam4, 26, 1);
			func_43(uParam4, 36, 1);
			func_43(uParam4, 46, 1);
			func_43(uParam4, 38, 1);
			func_43(uParam4, 28, 1);
			func_43(uParam4, 10, 1);
			func_43(uParam4, 33, 1);
			func_43(uParam4, 92, 1);
			func_43(uParam4, 93, 1);
			func_43(uParam4, 94, 1);
			func_43(uParam4, 96, 1);
			func_43(uParam4, 97, 1);
			func_43(uParam4, 98, 1);
			func_43(uParam4, 100, 1);
			break;

		case 1:
			if (bParam6) {
				func_42(uParam3, 16, 1);
				func_42(uParam3, 48, 1);
				func_42(uParam3, 49, 1);
				func_42(uParam3, 18, 1);
				func_42(uParam3, 50, 1);
				func_42(uParam3, 51, 1);
				func_42(uParam3, 52, 1);
				func_42(uParam3, 53, 1);
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_42(uParam3, 62, 1);
				func_40(uParam2, 18, 1);
				func_40(uParam2, 49, 1);
				func_40(uParam2, 50, 1);
				func_40(uParam2, 51, 1);
				func_40(uParam2, 52, 1);
				func_40(uParam2, 62, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
			}
			func_43(uParam4, 9, 1);
			func_43(uParam4, 12, 1);
			func_43(uParam4, 13, 1);
			func_43(uParam4, 17, 1);
			func_43(uParam4, 18, 1);
			func_43(uParam4, 19, 1);
			func_43(uParam4, 20, 1);
			func_43(uParam4, 59, 1);
			func_43(uParam4, 60, 1);
			func_43(uParam4, 61, 1);
			func_43(uParam4, 62, 1);
			func_43(uParam4, 62, 1);
			func_43(uParam4, 63, 1);
			func_43(uParam4, 64, 1);
			func_43(uParam4, 65, 1);
			func_43(uParam4, 66, 1);
			func_43(uParam4, 67, 1);
			func_43(uParam4, 68, 1);
			func_43(uParam4, 69, 1);
			func_43(uParam4, 70, 1);
			func_43(uParam4, 71, 1);
			func_43(uParam4, 72, 1);
			func_43(uParam4, 21, 1);
			func_43(uParam4, 22, 1);
			func_43(uParam4, 23, 1);
			func_43(uParam4, 24, 1);
			func_43(uParam4, 25, 1);
			func_43(uParam4, 26, 1);
			func_43(uParam4, 36, 1);
			func_43(uParam4, 46, 1);
			func_43(uParam4, 38, 1);
			func_43(uParam4, 29, 1);
			func_43(uParam4, 28, 1);
			func_43(uParam4, 8, 1);
			func_43(uParam4, 10, 1);
			func_43(uParam4, 31, 1);
			func_43(uParam4, 33, 1);
			func_43(uParam4, 34, 1);
			func_43(uParam4, 92, 1);
			func_43(uParam4, 93, 1);
			func_43(uParam4, 94, 1);
			func_43(uParam4, 96, 1);
			func_43(uParam4, 97, 1);
			func_43(uParam4, 98, 1);
			func_43(uParam4, 100, 1);
			break;

		case 10: func_43(uParam4, 28, 1); break;

		case 12:
			if (bParam6) {
				func_42(uParam3, 3, 1);
				func_42(uParam3, 4, 1);
				func_42(uParam3, 6, 1);
				func_42(uParam3, 10, 1);
				func_42(uParam3, 54, 1);
				func_42(uParam3, 55, 1);
				func_42(uParam3, 56, 1);
				func_42(uParam3, 13, 1);
				func_42(uParam3, 16, 1);
				func_42(uParam3, 48, 1);
				func_42(uParam3, 49, 1);
				func_42(uParam3, 18, 1);
				func_42(uParam3, 50, 1);
				func_42(uParam3, 51, 1);
				func_42(uParam3, 52, 1);
				func_42(uParam3, 53, 1);
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_42(uParam3, 62, 1);
				func_42(uParam3, 20, 1);
				func_42(uParam3, 26, 1);
				func_42(uParam3, 27, 1);
				func_42(uParam3, 32, 1);
				func_42(uParam3, 33, 1);
				func_42(uParam3, 37, 1);
				func_42(uParam3, 39, 1);
				func_40(uParam2, 3, 1);
				func_40(uParam2, 4, 1);
				func_40(uParam2, 6, 1);
				func_40(uParam2, 8, 1);
				func_40(uParam2, 9, 1);
				func_40(uParam2, 10, 1);
				func_40(uParam2, 53, 1);
				func_40(uParam2, 56, 1);
				func_40(uParam2, 55, 1);
				func_40(uParam2, 13, 1);
				func_40(uParam2, 18, 1);
				func_40(uParam2, 49, 1);
				func_40(uParam2, 50, 1);
				func_40(uParam2, 51, 1);
				func_40(uParam2, 52, 1);
				func_40(uParam2, 62, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
				func_40(uParam2, 21, 1);
				func_40(uParam2, 26, 1);
				func_40(uParam2, 27, 1);
				func_40(uParam2, 28, 1);
				func_40(uParam2, 32, 1);
				func_40(uParam2, 36, 1);
				func_40(uParam2, 38, 1);
				func_40(uParam2, 55, 1);
			}
			func_43(uParam4, 2, 1);
			func_43(uParam4, 3, 1);
			func_43(uParam4, 4, 1);
			func_43(uParam4, 14, 1);
			func_43(uParam4, 15, 1);
			func_43(uParam4, 16, 1);
			func_43(uParam4, 9, 1);
			func_43(uParam4, 10, 1);
			func_43(uParam4, 12, 1);
			func_43(uParam4, 13, 1);
			func_43(uParam4, 17, 1);
			func_43(uParam4, 18, 1);
			func_43(uParam4, 19, 1);
			func_43(uParam4, 20, 1);
			func_43(uParam4, 59, 1);
			func_43(uParam4, 60, 1);
			func_43(uParam4, 61, 1);
			func_43(uParam4, 62, 1);
			func_43(uParam4, 62, 1);
			func_43(uParam4, 63, 1);
			func_43(uParam4, 64, 1);
			func_43(uParam4, 65, 1);
			func_43(uParam4, 66, 1);
			func_43(uParam4, 67, 1);
			func_43(uParam4, 68, 1);
			func_43(uParam4, 69, 1);
			func_43(uParam4, 70, 1);
			func_43(uParam4, 71, 1);
			func_43(uParam4, 72, 1);
			func_43(uParam4, 21, 1);
			func_43(uParam4, 22, 1);
			func_43(uParam4, 23, 1);
			func_43(uParam4, 24, 1);
			func_43(uParam4, 25, 1);
			func_43(uParam4, 26, 1);
			func_43(uParam4, 36, 1);
			func_43(uParam4, 46, 1);
			func_43(uParam4, 38, 1);
			func_43(uParam4, 29, 1);
			func_43(uParam4, 28, 1);
			func_43(uParam4, 8, 1);
			func_43(uParam4, 31, 1);
			func_43(uParam4, 32, 1);
			func_43(uParam4, 33, 1);
			func_43(uParam4, 34, 1);
			func_43(uParam4, 92, 1);
			func_43(uParam4, 93, 1);
			func_43(uParam4, 94, 1);
			func_43(uParam4, 96, 1);
			func_43(uParam4, 97, 1);
			func_43(uParam4, 98, 1);
			func_43(uParam4, 100, 1);
			break;

		case 15:
			if (bParam6) {
				func_42(uParam3, 16, 1);
				func_42(uParam3, 48, 1);
				func_42(uParam3, 49, 1);
				func_42(uParam3, 18, 1);
				func_42(uParam3, 50, 1);
				func_42(uParam3, 51, 1);
				func_42(uParam3, 52, 1);
				func_42(uParam3, 53, 1);
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_42(uParam3, 62, 1);
				func_40(uParam2, 18, 1);
				func_40(uParam2, 49, 1);
				func_40(uParam2, 50, 1);
				func_40(uParam2, 51, 1);
				func_40(uParam2, 52, 1);
				func_40(uParam2, 62, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
				func_40(uParam2, 19, 1);
			}
			func_43(uParam4, 3, 1);
			func_43(uParam4, 6, 1);
			func_43(uParam4, 8, 1);
			func_43(uParam4, 9, 1);
			func_43(uParam4, 10, 1);
			func_43(uParam4, 13, 1);
			func_43(uParam4, 17, 1);
			func_43(uParam4, 18, 1);
			func_43(uParam4, 19, 1);
			func_43(uParam4, 20, 1);
			func_43(uParam4, 59, 1);
			func_43(uParam4, 60, 1);
			func_43(uParam4, 61, 1);
			func_43(uParam4, 62, 1);
			func_43(uParam4, 62, 1);
			func_43(uParam4, 63, 1);
			func_43(uParam4, 64, 1);
			func_43(uParam4, 65, 1);
			func_43(uParam4, 66, 1);
			func_43(uParam4, 67, 1);
			func_43(uParam4, 68, 1);
			func_43(uParam4, 69, 1);
			func_43(uParam4, 70, 1);
			func_43(uParam4, 71, 1);
			func_43(uParam4, 72, 1);
			func_43(uParam4, 21, 1);
			func_43(uParam4, 22, 1);
			func_43(uParam4, 23, 1);
			func_43(uParam4, 24, 1);
			func_43(uParam4, 25, 1);
			func_43(uParam4, 26, 1);
			func_43(uParam4, 36, 1);
			func_43(uParam4, 46, 1);
			func_43(uParam4, 38, 1);
			func_43(uParam4, 29, 1);
			func_43(uParam4, 28, 1);
			func_43(uParam4, 31, 1);
			func_43(uParam4, 32, 1);
			func_43(uParam4, 33, 1);
			func_43(uParam4, 34, 1);
			func_43(uParam4, 92, 1);
			func_43(uParam4, 93, 1);
			func_43(uParam4, 94, 1);
			func_43(uParam4, 96, 1);
			func_43(uParam4, 97, 1);
			func_43(uParam4, 98, 1);
			func_43(uParam4, 100, 1);
			break;

		case 18:
			if (bParam6) {
				func_42(uParam3, 4, 1);
			}
			break;

		case 17: func_43(uParam4, 9, 1); break;

		case 19:
			if (bParam6) {
				func_42(uParam3, 16, 1);
				func_42(uParam3, 48, 1);
				func_42(uParam3, 49, 1);
				func_42(uParam3, 18, 1);
				func_42(uParam3, 50, 1);
				func_42(uParam3, 51, 1);
				func_42(uParam3, 52, 1);
				func_42(uParam3, 53, 1);
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_42(uParam3, 62, 1);
				func_40(uParam2, 16, 1);
				func_40(uParam2, 47, 1);
				func_40(uParam2, 48, 1);
				func_40(uParam2, 18, 1);
				func_40(uParam2, 49, 1);
				func_40(uParam2, 50, 1);
				func_40(uParam2, 51, 1);
				func_40(uParam2, 52, 1);
				func_40(uParam2, 62, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
			}
			func_43(uParam4, 9, 1);
			func_43(uParam4, 10, 1);
			func_43(uParam4, 18, 1);
			func_43(uParam4, 19, 1);
			func_43(uParam4, 20, 1);
			func_43(uParam4, 59, 1);
			func_43(uParam4, 60, 1);
			func_43(uParam4, 61, 1);
			func_43(uParam4, 62, 1);
			func_43(uParam4, 62, 1);
			func_43(uParam4, 63, 1);
			func_43(uParam4, 64, 1);
			func_43(uParam4, 65, 1);
			func_43(uParam4, 66, 1);
			func_43(uParam4, 67, 1);
			func_43(uParam4, 68, 1);
			func_43(uParam4, 69, 1);
			func_43(uParam4, 70, 1);
			func_43(uParam4, 71, 1);
			func_43(uParam4, 72, 1);
			func_43(uParam4, 21, 1);
			func_43(uParam4, 22, 1);
			func_43(uParam4, 23, 1);
			func_43(uParam4, 24, 1);
			func_43(uParam4, 25, 1);
			func_43(uParam4, 26, 1);
			func_43(uParam4, 36, 1);
			func_43(uParam4, 46, 1);
			func_43(uParam4, 38, 1);
			func_43(uParam4, 29, 1);
			func_43(uParam4, 8, 1);
			func_43(uParam4, 92, 1);
			func_43(uParam4, 93, 1);
			func_43(uParam4, 94, 1);
			func_43(uParam4, 96, 1);
			func_43(uParam4, 97, 1);
			func_43(uParam4, 98, 1);
			func_43(uParam4, 100, 1);
			break;

		case 21:
			if (bParam6) {
				func_42(uParam3, 3, 1);
				func_42(uParam3, 7, 1);
				func_42(uParam3, 0, 1);
				func_42(uParam3, 12, 1);
				func_42(uParam3, 13, 1);
				func_42(uParam3, 15, 1);
				func_42(uParam3, 16, 1);
				func_42(uParam3, 48, 1);
				func_42(uParam3, 49, 1);
				func_42(uParam3, 17, 1);
				func_42(uParam3, 18, 1);
				func_42(uParam3, 50, 1);
				func_42(uParam3, 51, 1);
				func_42(uParam3, 52, 1);
				func_42(uParam3, 53, 1);
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_42(uParam3, 62, 1);
				func_42(uParam3, 20, 1);
				func_42(uParam3, 21, 1);
				func_42(uParam3, 25, 1);
				func_42(uParam3, 26, 1);
				func_42(uParam3, 27, 1);
				func_42(uParam3, 30, 1);
				func_42(uParam3, 31, 1);
				func_42(uParam3, 32, 1);
				func_42(uParam3, 33, 1);
				func_42(uParam3, 39, 1);
				func_42(uParam3, 37, 1);
				func_42(uParam3, 55, 1);
				func_40(uParam2, 0, 1);
				func_40(uParam2, 2, 1);
				func_40(uParam2, 3, 1);
				func_40(uParam2, 4, 1);
				func_40(uParam2, 6, 1);
				func_40(uParam2, 7, 1);
				func_40(uParam2, 8, 1);
				func_40(uParam2, 11, 1);
				func_40(uParam2, 13, 1);
				func_40(uParam2, 15, 1);
				func_40(uParam2, 16, 1);
				func_40(uParam2, 47, 1);
				func_40(uParam2, 48, 1);
				func_40(uParam2, 17, 1);
				func_40(uParam2, 18, 1);
				func_40(uParam2, 49, 1);
				func_40(uParam2, 50, 1);
				func_40(uParam2, 51, 1);
				func_40(uParam2, 52, 1);
				func_40(uParam2, 62, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
				func_40(uParam2, 19, 1);
				func_40(uParam2, 20, 1);
				func_40(uParam2, 21, 1);
				func_40(uParam2, 22, 1);
				func_40(uParam2, 54, 1);
				func_40(uParam2, 24, 1);
				func_40(uParam2, 26, 1);
				func_40(uParam2, 27, 1);
				func_40(uParam2, 28, 1);
				func_40(uParam2, 30, 1);
				func_40(uParam2, 31, 1);
				func_40(uParam2, 32, 1);
				func_40(uParam2, 38, 1);
				func_40(uParam2, 36, 1);
			}
			func_43(uParam4, 3, 1);
			func_43(uParam4, 3, 1);
			func_43(uParam4, 4, 1);
			func_43(uParam4, 14, 1);
			func_43(uParam4, 15, 1);
			func_43(uParam4, 16, 1);
			func_43(uParam4, 8, 1);
			func_43(uParam4, 9, 1);
			func_43(uParam4, 10, 1);
			func_43(uParam4, 12, 1);
			func_43(uParam4, 13, 1);
			func_43(uParam4, 17, 1);
			func_43(uParam4, 18, 1);
			func_43(uParam4, 19, 1);
			func_43(uParam4, 20, 1);
			func_43(uParam4, 59, 1);
			func_43(uParam4, 60, 1);
			func_43(uParam4, 61, 1);
			func_43(uParam4, 62, 1);
			func_43(uParam4, 62, 1);
			func_43(uParam4, 63, 1);
			func_43(uParam4, 64, 1);
			func_43(uParam4, 65, 1);
			func_43(uParam4, 66, 1);
			func_43(uParam4, 67, 1);
			func_43(uParam4, 68, 1);
			func_43(uParam4, 69, 1);
			func_43(uParam4, 70, 1);
			func_43(uParam4, 71, 1);
			func_43(uParam4, 72, 1);
			func_43(uParam4, 21, 1);
			func_43(uParam4, 22, 1);
			func_43(uParam4, 23, 1);
			func_43(uParam4, 24, 1);
			func_43(uParam4, 25, 1);
			func_43(uParam4, 26, 1);
			func_43(uParam4, 36, 1);
			func_43(uParam4, 46, 1);
			func_43(uParam4, 38, 1);
			func_43(uParam4, 29, 1);
			func_43(uParam4, 28, 1);
			func_43(uParam4, 31, 1);
			func_43(uParam4, 33, 1);
			func_43(uParam4, 34, 1);
			func_43(uParam4, 92, 1);
			func_43(uParam4, 93, 1);
			func_43(uParam4, 94, 1);
			func_43(uParam4, 96, 1);
			func_43(uParam4, 97, 1);
			func_43(uParam4, 98, 1);
			func_43(uParam4, 100, 1);
			break;
		}
		break;

	case 2:
		switch (iParam1) {
		case 3:
			switch (iParam5) {
			case 0:
				func_42(uParam3, 13, 1);
				func_42(uParam3, 16, 1);
				func_42(uParam3, 48, 1);
				func_42(uParam3, 49, 1);
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_40(uParam2, 2, 1);
				func_40(uParam2, 20, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
				func_43(uParam4, 33, 1);
				func_43(uParam4, 8, 1);
				func_43(uParam4, 31, 1);
				func_42(uParam3, 67, 1);
				func_42(uParam3, 68, 1);
				func_42(uParam3, 69, 1);
				func_42(uParam3, 70, 1);
				func_42(uParam3, 71, 1);
				func_42(uParam3, 72, 1);
				func_42(uParam3, 73, 1);
				func_42(uParam3, 74, 1);
				func_42(uParam3, 75, 1);
				func_42(uParam3, 78, 1);
				func_42(uParam3, 79, 1);
				func_42(uParam3, 80, 1);
				func_42(uParam3, 81, 1);
				func_42(uParam3, 82, 1);
				func_42(uParam3, 91, 1);
				func_42(uParam3, 92, 1);
				func_40(uParam2, 69, 1);
				func_40(uParam2, 74, 1);
				func_40(uParam2, 90, 1);
				func_40(uParam2, 91, 1);
				break;

			case 1:
				func_42(uParam3, 4, 1);
				func_42(uParam3, 13, 1);
				func_42(uParam3, 16, 1);
				func_42(uParam3, 48, 1);
				func_42(uParam3, 49, 1);
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_40(uParam2, 2, 1);
				func_40(uParam2, 20, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
				func_43(uParam4, 28, 1);
				func_43(uParam4, 33, 1);
				func_43(uParam4, 8, 1);
				func_43(uParam4, 31, 1);
				func_43(uParam4, 43, 1);
				func_42(uParam3, 67, 1);
				func_42(uParam3, 68, 1);
				func_42(uParam3, 69, 1);
				func_42(uParam3, 70, 1);
				func_42(uParam3, 71, 1);
				func_42(uParam3, 72, 1);
				func_42(uParam3, 73, 1);
				func_42(uParam3, 74, 1);
				func_42(uParam3, 75, 1);
				func_42(uParam3, 78, 1);
				func_42(uParam3, 79, 1);
				func_42(uParam3, 80, 1);
				func_42(uParam3, 81, 1);
				func_42(uParam3, 82, 1);
				func_42(uParam3, 91, 1);
				func_42(uParam3, 92, 1);
				func_40(uParam2, 69, 1);
				func_40(uParam2, 74, 1);
				func_40(uParam2, 90, 1);
				func_40(uParam2, 91, 1);
				break;

			case 2:
				func_42(uParam3, 13, 1);
				func_42(uParam3, 16, 1);
				func_42(uParam3, 48, 1);
				func_42(uParam3, 49, 1);
				func_42(uParam3, 39, 1);
				func_40(uParam2, 2, 1);
				func_40(uParam2, 20, 1);
				func_40(uParam2, 38, 1);
				func_43(uParam4, 8, 1);
				func_43(uParam4, 10, 1);
				func_43(uParam4, 13, 1);
				func_43(uParam4, 19, 1);
				func_43(uParam4, 20, 1);
				func_43(uParam4, 59, 1);
				func_43(uParam4, 60, 1);
				func_43(uParam4, 61, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 63, 1);
				func_43(uParam4, 64, 1);
				func_43(uParam4, 65, 1);
				func_43(uParam4, 66, 1);
				func_43(uParam4, 67, 1);
				func_43(uParam4, 68, 1);
				func_43(uParam4, 69, 1);
				func_43(uParam4, 70, 1);
				func_43(uParam4, 71, 1);
				func_43(uParam4, 72, 1);
				func_43(uParam4, 21, 1);
				func_43(uParam4, 22, 1);
				func_43(uParam4, 23, 1);
				func_43(uParam4, 24, 1);
				func_43(uParam4, 25, 1);
				func_43(uParam4, 26, 1);
				func_43(uParam4, 28, 1);
				func_43(uParam4, 33, 1);
				func_43(uParam4, 31, 1);
				func_43(uParam4, 92, 1);
				func_43(uParam4, 93, 1);
				func_43(uParam4, 94, 1);
				func_43(uParam4, 96, 1);
				func_43(uParam4, 97, 1);
				func_43(uParam4, 98, 1);
				func_43(uParam4, 100, 1);
				func_42(uParam3, 67, 1);
				func_42(uParam3, 68, 1);
				func_42(uParam3, 69, 1);
				func_42(uParam3, 70, 1);
				func_42(uParam3, 71, 1);
				func_42(uParam3, 72, 1);
				func_42(uParam3, 73, 1);
				func_42(uParam3, 74, 1);
				func_42(uParam3, 75, 1);
				func_42(uParam3, 78, 1);
				func_42(uParam3, 79, 1);
				func_42(uParam3, 80, 1);
				func_42(uParam3, 81, 1);
				func_42(uParam3, 82, 1);
				func_42(uParam3, 91, 1);
				func_42(uParam3, 92, 1);
				func_40(uParam2, 69, 1);
				func_40(uParam2, 74, 1);
				func_40(uParam2, 90, 1);
				func_40(uParam2, 91, 1);
				break;
			}
			break;

		case 5:
		case 24:
			switch (iParam5) {
			case 0:
				func_42(uParam3, 16, 1);
				func_42(uParam3, 48, 1);
				func_42(uParam3, 49, 1);
				func_42(uParam3, 18, 1);
				func_42(uParam3, 50, 1);
				func_42(uParam3, 51, 1);
				func_42(uParam3, 52, 1);
				func_42(uParam3, 53, 1);
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_42(uParam3, 62, 1);
				func_40(uParam2, 16, 1);
				func_40(uParam2, 47, 1);
				func_40(uParam2, 48, 1);
				func_40(uParam2, 18, 1);
				func_40(uParam2, 49, 1);
				func_40(uParam2, 50, 1);
				func_40(uParam2, 51, 1);
				func_40(uParam2, 52, 1);
				func_40(uParam2, 62, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
				func_43(uParam4, 1, 1);
				func_43(uParam4, 2, 1);
				func_43(uParam4, 3, 1);
				func_43(uParam4, 4, 1);
				func_43(uParam4, 5, 1);
				func_43(uParam4, 7, 1);
				func_43(uParam4, 8, 1);
				func_43(uParam4, 9, 1);
				func_43(uParam4, 10, 1);
				func_43(uParam4, 12, 1);
				func_43(uParam4, 13, 1);
				func_43(uParam4, 14, 1);
				func_43(uParam4, 15, 1);
				func_43(uParam4, 16, 1);
				func_43(uParam4, 17, 1);
				func_43(uParam4, 18, 1);
				func_43(uParam4, 19, 1);
				func_43(uParam4, 20, 1);
				func_43(uParam4, 59, 1);
				func_43(uParam4, 60, 1);
				func_43(uParam4, 61, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 63, 1);
				func_43(uParam4, 64, 1);
				func_43(uParam4, 65, 1);
				func_43(uParam4, 66, 1);
				func_43(uParam4, 67, 1);
				func_43(uParam4, 68, 1);
				func_43(uParam4, 69, 1);
				func_43(uParam4, 70, 1);
				func_43(uParam4, 71, 1);
				func_43(uParam4, 72, 1);
				func_43(uParam4, 21, 1);
				func_43(uParam4, 22, 1);
				func_43(uParam4, 23, 1);
				func_43(uParam4, 24, 1);
				func_43(uParam4, 25, 1);
				func_43(uParam4, 26, 1);
				func_43(uParam4, 36, 1);
				func_43(uParam4, 46, 1);
				func_43(uParam4, 38, 1);
				func_43(uParam4, 28, 1);
				func_43(uParam4, 33, 1);
				func_43(uParam4, 43, 1);
				func_43(uParam4, 29, 1);
				func_43(uParam4, 92, 1);
				func_43(uParam4, 93, 1);
				func_43(uParam4, 94, 1);
				func_43(uParam4, 96, 1);
				func_43(uParam4, 97, 1);
				func_43(uParam4, 98, 1);
				func_43(uParam4, 100, 1);
				func_42(uParam3, 67, 1);
				func_42(uParam3, 68, 1);
				func_42(uParam3, 69, 1);
				func_42(uParam3, 70, 1);
				func_42(uParam3, 71, 1);
				func_42(uParam3, 72, 1);
				func_42(uParam3, 73, 1);
				func_42(uParam3, 74, 1);
				func_42(uParam3, 78, 1);
				func_42(uParam3, 79, 1);
				func_42(uParam3, 80, 1);
				func_42(uParam3, 81, 1);
				func_42(uParam3, 82, 1);
				func_42(uParam3, 91, 1);
				func_42(uParam3, 92, 1);
				func_40(uParam2, 66, 1);
				func_40(uParam2, 67, 1);
				func_40(uParam2, 68, 1);
				func_40(uParam2, 69, 1);
				func_40(uParam2, 70, 1);
				func_40(uParam2, 71, 1);
				func_40(uParam2, 72, 1);
				func_40(uParam2, 73, 1);
				func_40(uParam2, 77, 1);
				func_40(uParam2, 78, 1);
				func_40(uParam2, 79, 1);
				func_40(uParam2, 80, 1);
				func_40(uParam2, 81, 1);
				func_40(uParam2, 90, 1);
				func_40(uParam2, 91, 1);
				break;

			case 1:
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_40(uParam2, 16, 1);
				func_40(uParam2, 47, 1);
				func_40(uParam2, 48, 1);
				func_40(uParam2, 18, 1);
				func_40(uParam2, 49, 1);
				func_40(uParam2, 50, 1);
				func_40(uParam2, 51, 1);
				func_40(uParam2, 52, 1);
				func_40(uParam2, 62, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
				func_43(uParam4, 8, 1);
				func_43(uParam4, 9, 1);
				func_43(uParam4, 20, 1);
				func_43(uParam4, 59, 1);
				func_43(uParam4, 60, 1);
				func_43(uParam4, 61, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 63, 1);
				func_43(uParam4, 64, 1);
				func_43(uParam4, 65, 1);
				func_43(uParam4, 66, 1);
				func_43(uParam4, 67, 1);
				func_43(uParam4, 68, 1);
				func_43(uParam4, 69, 1);
				func_43(uParam4, 70, 1);
				func_43(uParam4, 71, 1);
				func_43(uParam4, 72, 1);
				func_43(uParam4, 21, 1);
				func_43(uParam4, 22, 1);
				func_43(uParam4, 23, 1);
				func_43(uParam4, 24, 1);
				func_43(uParam4, 25, 1);
				func_43(uParam4, 26, 1);
				func_43(uParam4, 36, 1);
				func_43(uParam4, 46, 1);
				func_43(uParam4, 38, 1);
				func_43(uParam4, 28, 1);
				func_43(uParam4, 33, 1);
				func_43(uParam4, 92, 1);
				func_43(uParam4, 93, 1);
				func_43(uParam4, 94, 1);
				func_43(uParam4, 96, 1);
				func_43(uParam4, 97, 1);
				func_43(uParam4, 98, 1);
				func_43(uParam4, 100, 1);
				func_42(uParam3, 67, 1);
				func_42(uParam3, 68, 1);
				func_42(uParam3, 69, 1);
				func_42(uParam3, 70, 1);
				func_42(uParam3, 71, 1);
				func_42(uParam3, 72, 1);
				func_42(uParam3, 73, 1);
				func_42(uParam3, 74, 1);
				func_42(uParam3, 78, 1);
				func_42(uParam3, 79, 1);
				func_42(uParam3, 80, 1);
				func_42(uParam3, 81, 1);
				func_42(uParam3, 82, 1);
				func_42(uParam3, 91, 1);
				func_42(uParam3, 92, 1);
				func_40(uParam2, 66, 1);
				func_40(uParam2, 67, 1);
				func_40(uParam2, 68, 1);
				func_40(uParam2, 69, 1);
				func_40(uParam2, 70, 1);
				func_40(uParam2, 71, 1);
				func_40(uParam2, 72, 1);
				func_40(uParam2, 73, 1);
				func_40(uParam2, 77, 1);
				func_40(uParam2, 78, 1);
				func_40(uParam2, 79, 1);
				func_40(uParam2, 80, 1);
				func_40(uParam2, 81, 1);
				func_40(uParam2, 90, 1);
				func_40(uParam2, 91, 1);
				break;

			case 2:
				func_42(uParam3, 16, 1);
				func_42(uParam3, 48, 1);
				func_42(uParam3, 49, 1);
				func_42(uParam3, 18, 1);
				func_42(uParam3, 50, 1);
				func_42(uParam3, 51, 1);
				func_42(uParam3, 52, 1);
				func_42(uParam3, 53, 1);
				func_42(uParam3, 62, 1);
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_40(uParam2, 18, 1);
				func_40(uParam2, 49, 1);
				func_40(uParam2, 50, 1);
				func_40(uParam2, 51, 1);
				func_40(uParam2, 52, 1);
				func_40(uParam2, 62, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
				func_43(uParam4, 4, 1);
				func_43(uParam4, 5, 1);
				func_43(uParam4, 8, 1);
				func_43(uParam4, 9, 1);
				func_43(uParam4, 10, 1);
				func_43(uParam4, 12, 1);
				func_43(uParam4, 14, 1);
				func_43(uParam4, 15, 1);
				func_43(uParam4, 16, 1);
				func_43(uParam4, 17, 1);
				func_43(uParam4, 18, 1);
				func_43(uParam4, 19, 1);
				func_43(uParam4, 20, 1);
				func_43(uParam4, 59, 1);
				func_43(uParam4, 60, 1);
				func_43(uParam4, 61, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 63, 1);
				func_43(uParam4, 64, 1);
				func_43(uParam4, 65, 1);
				func_43(uParam4, 66, 1);
				func_43(uParam4, 67, 1);
				func_43(uParam4, 68, 1);
				func_43(uParam4, 69, 1);
				func_43(uParam4, 70, 1);
				func_43(uParam4, 71, 1);
				func_43(uParam4, 72, 1);
				func_43(uParam4, 21, 1);
				func_43(uParam4, 22, 1);
				func_43(uParam4, 23, 1);
				func_43(uParam4, 24, 1);
				func_43(uParam4, 25, 1);
				func_43(uParam4, 26, 1);
				func_43(uParam4, 36, 1);
				func_43(uParam4, 46, 1);
				func_43(uParam4, 38, 1);
				func_43(uParam4, 28, 1);
				func_43(uParam4, 33, 1);
				func_43(uParam4, 92, 1);
				func_43(uParam4, 93, 1);
				func_43(uParam4, 94, 1);
				func_43(uParam4, 96, 1);
				func_43(uParam4, 97, 1);
				func_43(uParam4, 98, 1);
				func_43(uParam4, 100, 1);
				func_42(uParam3, 67, 1);
				func_42(uParam3, 68, 1);
				func_42(uParam3, 69, 1);
				func_42(uParam3, 70, 1);
				func_42(uParam3, 71, 1);
				func_42(uParam3, 72, 1);
				func_42(uParam3, 73, 1);
				func_42(uParam3, 74, 1);
				func_42(uParam3, 78, 1);
				func_42(uParam3, 79, 1);
				func_42(uParam3, 80, 1);
				func_42(uParam3, 81, 1);
				func_42(uParam3, 82, 1);
				func_42(uParam3, 91, 1);
				func_42(uParam3, 92, 1);
				func_40(uParam2, 66, 1);
				func_40(uParam2, 67, 1);
				func_40(uParam2, 68, 1);
				func_40(uParam2, 69, 1);
				func_40(uParam2, 70, 1);
				func_40(uParam2, 71, 1);
				func_40(uParam2, 72, 1);
				func_40(uParam2, 73, 1);
				func_40(uParam2, 77, 1);
				func_40(uParam2, 78, 1);
				func_40(uParam2, 79, 1);
				func_40(uParam2, 80, 1);
				func_40(uParam2, 81, 1);
				func_40(uParam2, 90, 1);
				func_40(uParam2, 91, 1);
				break;
			}
			break;

		case 29:
			switch (iParam5) {
			case 0:
				func_42(uParam3, 66, 1);
				func_42(uParam3, 67, 1);
				func_42(uParam3, 68, 1);
				func_42(uParam3, 69, 1);
				func_42(uParam3, 70, 1);
				func_42(uParam3, 71, 1);
				func_42(uParam3, 72, 1);
				func_42(uParam3, 73, 1);
				func_42(uParam3, 77, 1);
				func_42(uParam3, 78, 1);
				func_42(uParam3, 79, 1);
				func_42(uParam3, 80, 1);
				func_42(uParam3, 81, 1);
				func_42(uParam3, 91, 1);
				func_42(uParam3, 92, 1);
				func_40(uParam2, 66, 1);
				func_40(uParam2, 67, 1);
				func_40(uParam2, 68, 1);
				func_40(uParam2, 69, 1);
				func_40(uParam2, 70, 1);
				func_40(uParam2, 71, 1);
				func_40(uParam2, 72, 1);
				func_40(uParam2, 73, 1);
				func_40(uParam2, 77, 1);
				func_40(uParam2, 78, 1);
				func_40(uParam2, 79, 1);
				func_40(uParam2, 80, 1);
				func_40(uParam2, 81, 1);
				func_40(uParam2, 90, 1);
				func_40(uParam2, 91, 1);
				func_43(uParam4, 92, 1);
				func_43(uParam4, 93, 1);
				func_43(uParam4, 94, 1);
				func_43(uParam4, 96, 1);
				func_43(uParam4, 97, 1);
				func_43(uParam4, 98, 1);
				func_43(uParam4, 100, 1);
				break;

			case 1:
				func_42(uParam3, 16, 1);
				func_42(uParam3, 48, 1);
				func_42(uParam3, 49, 1);
				func_42(uParam3, 18, 1);
				func_42(uParam3, 50, 1);
				func_42(uParam3, 51, 1);
				func_42(uParam3, 52, 1);
				func_42(uParam3, 53, 1);
				func_42(uParam3, 62, 1);
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_40(uParam2, 18, 1);
				func_40(uParam2, 49, 1);
				func_40(uParam2, 50, 1);
				func_40(uParam2, 51, 1);
				func_40(uParam2, 52, 1);
				func_40(uParam2, 62, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
				func_43(uParam4, 9, 1);
				func_43(uParam4, 10, 1);
				func_43(uParam4, 12, 1);
				func_43(uParam4, 17, 1);
				func_43(uParam4, 18, 1);
				func_43(uParam4, 19, 1);
				func_43(uParam4, 20, 1);
				func_43(uParam4, 59, 1);
				func_43(uParam4, 60, 1);
				func_43(uParam4, 61, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 63, 1);
				func_43(uParam4, 64, 1);
				func_43(uParam4, 65, 1);
				func_43(uParam4, 66, 1);
				func_43(uParam4, 67, 1);
				func_43(uParam4, 68, 1);
				func_43(uParam4, 69, 1);
				func_43(uParam4, 70, 1);
				func_43(uParam4, 71, 1);
				func_43(uParam4, 72, 1);
				func_43(uParam4, 21, 1);
				func_43(uParam4, 22, 1);
				func_43(uParam4, 23, 1);
				func_43(uParam4, 24, 1);
				func_43(uParam4, 25, 1);
				func_43(uParam4, 26, 1);
				func_43(uParam4, 36, 1);
				func_43(uParam4, 46, 1);
				func_43(uParam4, 38, 1);
				func_43(uParam4, 29, 1);
				func_43(uParam4, 28, 1);
				func_43(uParam4, 8, 1);
				func_43(uParam4, 31, 1);
				func_43(uParam4, 32, 1);
				func_43(uParam4, 33, 1);
				func_43(uParam4, 34, 1);
				func_43(uParam4, 43, 1);
				func_43(uParam4, 92, 1);
				func_43(uParam4, 93, 1);
				func_43(uParam4, 94, 1);
				func_43(uParam4, 96, 1);
				func_43(uParam4, 97, 1);
				func_43(uParam4, 98, 1);
				func_43(uParam4, 100, 1);
				break;
			}
			break;

		case 30:
			func_42(uParam3, 67, 1);
			func_42(uParam3, 68, 1);
			func_42(uParam3, 69, 1);
			func_42(uParam3, 70, 1);
			func_42(uParam3, 71, 1);
			func_42(uParam3, 72, 1);
			func_42(uParam3, 73, 1);
			func_42(uParam3, 74, 1);
			func_42(uParam3, 78, 1);
			func_42(uParam3, 79, 1);
			func_42(uParam3, 80, 1);
			func_42(uParam3, 81, 1);
			func_42(uParam3, 82, 1);
			func_42(uParam3, 91, 1);
			func_42(uParam3, 92, 1);
			func_40(uParam2, 66, 1);
			func_40(uParam2, 67, 1);
			func_40(uParam2, 68, 1);
			func_40(uParam2, 69, 1);
			func_40(uParam2, 70, 1);
			func_40(uParam2, 71, 1);
			func_40(uParam2, 72, 1);
			func_40(uParam2, 73, 1);
			func_40(uParam2, 77, 1);
			func_40(uParam2, 78, 1);
			func_40(uParam2, 79, 1);
			func_40(uParam2, 80, 1);
			func_40(uParam2, 81, 1);
			func_40(uParam2, 90, 1);
			func_40(uParam2, 91, 1);
			func_43(uParam4, 92, 1);
			func_43(uParam4, 93, 1);
			func_43(uParam4, 94, 1);
			func_43(uParam4, 96, 1);
			func_43(uParam4, 97, 1);
			func_43(uParam4, 98, 1);
			func_43(uParam4, 100, 1);
			break;

		case 31:
			func_42(uParam3, 67, 1);
			func_42(uParam3, 68, 1);
			func_42(uParam3, 69, 1);
			func_42(uParam3, 70, 1);
			func_42(uParam3, 71, 1);
			func_42(uParam3, 72, 1);
			func_42(uParam3, 73, 1);
			func_42(uParam3, 74, 1);
			func_42(uParam3, 78, 1);
			func_42(uParam3, 79, 1);
			func_42(uParam3, 80, 1);
			func_42(uParam3, 81, 1);
			func_42(uParam3, 82, 1);
			func_42(uParam3, 91, 1);
			func_42(uParam3, 92, 1);
			func_40(uParam2, 66, 1);
			func_40(uParam2, 67, 1);
			func_40(uParam2, 68, 1);
			func_40(uParam2, 69, 1);
			func_40(uParam2, 70, 1);
			func_40(uParam2, 71, 1);
			func_40(uParam2, 72, 1);
			func_40(uParam2, 73, 1);
			func_40(uParam2, 77, 1);
			func_40(uParam2, 78, 1);
			func_40(uParam2, 79, 1);
			func_40(uParam2, 80, 1);
			func_40(uParam2, 81, 1);
			func_40(uParam2, 90, 1);
			func_40(uParam2, 91, 1);
			func_43(uParam4, 92, 1);
			func_43(uParam4, 93, 1);
			func_43(uParam4, 94, 1);
			func_43(uParam4, 96, 1);
			func_43(uParam4, 97, 1);
			func_43(uParam4, 98, 1);
			func_43(uParam4, 100, 1);
			break;

		case 32:
		case 33:
		case 34:
			switch (iParam5) {
			case 0:
				func_42(uParam3, 16, 1);
				func_42(uParam3, 48, 1);
				func_42(uParam3, 49, 1);
				func_42(uParam3, 18, 1);
				func_42(uParam3, 50, 1);
				func_42(uParam3, 51, 1);
				func_42(uParam3, 52, 1);
				func_42(uParam3, 53, 1);
				func_42(uParam3, 62, 1);
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_40(uParam2, 18, 1);
				func_40(uParam2, 49, 1);
				func_40(uParam2, 50, 1);
				func_40(uParam2, 51, 1);
				func_40(uParam2, 52, 1);
				func_40(uParam2, 62, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
				func_43(uParam4, 9, 1);
				func_43(uParam4, 10, 1);
				func_43(uParam4, 12, 1);
				func_43(uParam4, 17, 1);
				func_43(uParam4, 18, 1);
				func_43(uParam4, 19, 1);
				func_43(uParam4, 20, 1);
				func_43(uParam4, 59, 1);
				func_43(uParam4, 60, 1);
				func_43(uParam4, 61, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 63, 1);
				func_43(uParam4, 64, 1);
				func_43(uParam4, 65, 1);
				func_43(uParam4, 66, 1);
				func_43(uParam4, 67, 1);
				func_43(uParam4, 68, 1);
				func_43(uParam4, 69, 1);
				func_43(uParam4, 70, 1);
				func_43(uParam4, 71, 1);
				func_43(uParam4, 72, 1);
				func_43(uParam4, 21, 1);
				func_43(uParam4, 22, 1);
				func_43(uParam4, 23, 1);
				func_43(uParam4, 24, 1);
				func_43(uParam4, 25, 1);
				func_43(uParam4, 26, 1);
				func_43(uParam4, 36, 1);
				func_43(uParam4, 46, 1);
				func_43(uParam4, 38, 1);
				func_43(uParam4, 29, 1);
				func_43(uParam4, 28, 1);
				func_43(uParam4, 8, 1);
				func_43(uParam4, 31, 1);
				func_43(uParam4, 32, 1);
				func_43(uParam4, 33, 1);
				func_43(uParam4, 34, 1);
				func_43(uParam4, 92, 1);
				func_43(uParam4, 93, 1);
				func_43(uParam4, 94, 1);
				func_43(uParam4, 96, 1);
				func_43(uParam4, 97, 1);
				func_43(uParam4, 98, 1);
				func_43(uParam4, 100, 1);
				func_42(uParam3, 67, 1);
				func_42(uParam3, 68, 1);
				func_42(uParam3, 69, 1);
				func_42(uParam3, 70, 1);
				func_42(uParam3, 71, 1);
				func_42(uParam3, 72, 1);
				func_42(uParam3, 73, 1);
				func_42(uParam3, 74, 1);
				func_42(uParam3, 78, 1);
				func_42(uParam3, 79, 1);
				func_42(uParam3, 80, 1);
				func_42(uParam3, 81, 1);
				func_42(uParam3, 82, 1);
				func_42(uParam3, 91, 1);
				func_42(uParam3, 92, 1);
				func_40(uParam2, 66, 1);
				func_40(uParam2, 67, 1);
				func_40(uParam2, 68, 1);
				func_40(uParam2, 69, 1);
				func_40(uParam2, 70, 1);
				func_40(uParam2, 71, 1);
				func_40(uParam2, 72, 1);
				func_40(uParam2, 73, 1);
				func_40(uParam2, 77, 1);
				func_40(uParam2, 78, 1);
				func_40(uParam2, 79, 1);
				func_40(uParam2, 80, 1);
				func_40(uParam2, 81, 1);
				func_40(uParam2, 90, 1);
				func_40(uParam2, 91, 1);
				func_43(uParam4, 92, 1);
				func_43(uParam4, 93, 1);
				func_43(uParam4, 94, 1);
				func_43(uParam4, 96, 1);
				func_43(uParam4, 97, 1);
				func_43(uParam4, 98, 1);
				func_43(uParam4, 100, 1);
				break;

			case 1:
				func_42(uParam3, 67, 1);
				func_42(uParam3, 68, 1);
				func_42(uParam3, 69, 1);
				func_42(uParam3, 70, 1);
				func_42(uParam3, 71, 1);
				func_42(uParam3, 72, 1);
				func_42(uParam3, 73, 1);
				func_42(uParam3, 74, 1);
				func_42(uParam3, 78, 1);
				func_42(uParam3, 79, 1);
				func_42(uParam3, 80, 1);
				func_42(uParam3, 81, 1);
				func_42(uParam3, 82, 1);
				func_42(uParam3, 91, 1);
				func_42(uParam3, 92, 1);
				func_40(uParam2, 66, 1);
				func_40(uParam2, 67, 1);
				func_40(uParam2, 68, 1);
				func_40(uParam2, 69, 1);
				func_40(uParam2, 70, 1);
				func_40(uParam2, 71, 1);
				func_40(uParam2, 72, 1);
				func_40(uParam2, 73, 1);
				func_40(uParam2, 77, 1);
				func_40(uParam2, 78, 1);
				func_40(uParam2, 79, 1);
				func_40(uParam2, 80, 1);
				func_40(uParam2, 81, 1);
				func_40(uParam2, 90, 1);
				func_40(uParam2, 91, 1);
				func_43(uParam4, 92, 1);
				func_43(uParam4, 93, 1);
				func_43(uParam4, 94, 1);
				func_43(uParam4, 96, 1);
				func_43(uParam4, 97, 1);
				func_43(uParam4, 98, 1);
				func_43(uParam4, 100, 1);
				break;

			case 2:
				func_42(uParam3, 67, 1);
				func_42(uParam3, 68, 1);
				func_42(uParam3, 69, 1);
				func_42(uParam3, 70, 1);
				func_42(uParam3, 71, 1);
				func_42(uParam3, 72, 1);
				func_42(uParam3, 73, 1);
				func_42(uParam3, 74, 1);
				func_42(uParam3, 78, 1);
				func_42(uParam3, 79, 1);
				func_42(uParam3, 80, 1);
				func_42(uParam3, 81, 1);
				func_42(uParam3, 82, 1);
				func_42(uParam3, 91, 1);
				func_42(uParam3, 92, 1);
				func_40(uParam2, 66, 1);
				func_40(uParam2, 67, 1);
				func_40(uParam2, 68, 1);
				func_40(uParam2, 69, 1);
				func_40(uParam2, 70, 1);
				func_40(uParam2, 71, 1);
				func_40(uParam2, 72, 1);
				func_40(uParam2, 73, 1);
				func_40(uParam2, 77, 1);
				func_40(uParam2, 78, 1);
				func_40(uParam2, 79, 1);
				func_40(uParam2, 80, 1);
				func_40(uParam2, 81, 1);
				func_40(uParam2, 90, 1);
				func_40(uParam2, 91, 1);
				func_43(uParam4, 92, 1);
				func_43(uParam4, 93, 1);
				func_43(uParam4, 94, 1);
				func_43(uParam4, 96, 1);
				func_43(uParam4, 97, 1);
				func_43(uParam4, 98, 1);
				func_43(uParam4, 100, 1);
				break;
			}
			break;

		case 10:
			switch (iParam5) {
			case 0:
				func_42(uParam3, 3, 1);
				func_42(uParam3, 4, 1);
				func_42(uParam3, 6, 1);
				func_42(uParam3, 10, 1);
				func_42(uParam3, 54, 1);
				func_42(uParam3, 55, 1);
				func_42(uParam3, 56, 1);
				func_42(uParam3, 13, 1);
				func_42(uParam3, 16, 1);
				func_42(uParam3, 48, 1);
				func_42(uParam3, 49, 1);
				func_42(uParam3, 18, 1);
				func_42(uParam3, 50, 1);
				func_42(uParam3, 51, 1);
				func_42(uParam3, 52, 1);
				func_42(uParam3, 53, 1);
				func_42(uParam3, 62, 1);
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_42(uParam3, 20, 1);
				func_42(uParam3, 26, 1);
				func_42(uParam3, 27, 1);
				func_42(uParam3, 32, 1);
				func_42(uParam3, 33, 1);
				func_42(uParam3, 37, 1);
				func_42(uParam3, 39, 1);
				func_42(uParam3, 55, 1);
				func_40(uParam2, 3, 1);
				func_40(uParam2, 4, 1);
				func_40(uParam2, 6, 1);
				func_40(uParam2, 8, 1);
				func_40(uParam2, 9, 1);
				func_40(uParam2, 10, 1);
				func_40(uParam2, 53, 1);
				func_40(uParam2, 56, 1);
				func_40(uParam2, 55, 1);
				func_40(uParam2, 13, 1);
				func_40(uParam2, 18, 1);
				func_40(uParam2, 49, 1);
				func_40(uParam2, 50, 1);
				func_40(uParam2, 51, 1);
				func_40(uParam2, 52, 1);
				func_40(uParam2, 62, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
				func_40(uParam2, 21, 1);
				func_40(uParam2, 26, 1);
				func_40(uParam2, 27, 1);
				func_40(uParam2, 28, 1);
				func_40(uParam2, 32, 1);
				func_40(uParam2, 36, 1);
				func_40(uParam2, 38, 1);
				func_40(uParam2, 55, 1);
				func_43(uParam4, 3, 1);
				func_43(uParam4, 4, 1);
				func_43(uParam4, 14, 1);
				func_43(uParam4, 15, 1);
				func_43(uParam4, 16, 1);
				func_43(uParam4, 9, 1);
				func_43(uParam4, 10, 1);
				func_43(uParam4, 12, 1);
				func_43(uParam4, 13, 1);
				func_43(uParam4, 17, 1);
				func_43(uParam4, 18, 1);
				func_43(uParam4, 19, 1);
				func_43(uParam4, 20, 1);
				func_43(uParam4, 59, 1);
				func_43(uParam4, 60, 1);
				func_43(uParam4, 61, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 63, 1);
				func_43(uParam4, 64, 1);
				func_43(uParam4, 65, 1);
				func_43(uParam4, 66, 1);
				func_43(uParam4, 67, 1);
				func_43(uParam4, 68, 1);
				func_43(uParam4, 69, 1);
				func_43(uParam4, 70, 1);
				func_43(uParam4, 71, 1);
				func_43(uParam4, 72, 1);
				func_43(uParam4, 21, 1);
				func_43(uParam4, 22, 1);
				func_43(uParam4, 23, 1);
				func_43(uParam4, 24, 1);
				func_43(uParam4, 25, 1);
				func_43(uParam4, 26, 1);
				func_43(uParam4, 36, 1);
				func_43(uParam4, 46, 1);
				func_43(uParam4, 38, 1);
				func_43(uParam4, 29, 1);
				func_43(uParam4, 28, 1);
				func_43(uParam4, 8, 1);
				func_43(uParam4, 31, 1);
				func_43(uParam4, 32, 1);
				func_43(uParam4, 33, 1);
				func_43(uParam4, 34, 1);
				func_43(uParam4, 43, 1);
				func_43(uParam4, 92, 1);
				func_43(uParam4, 93, 1);
				func_43(uParam4, 94, 1);
				func_43(uParam4, 96, 1);
				func_43(uParam4, 97, 1);
				func_43(uParam4, 98, 1);
				func_43(uParam4, 100, 1);
				func_42(uParam3, 65, 1);
				func_42(uParam3, 67, 1);
				func_42(uParam3, 68, 1);
				func_42(uParam3, 69, 1);
				func_42(uParam3, 70, 1);
				func_42(uParam3, 71, 1);
				func_42(uParam3, 72, 1);
				func_42(uParam3, 73, 1);
				func_42(uParam3, 74, 1);
				func_42(uParam3, 75, 1);
				func_42(uParam3, 76, 1);
				func_42(uParam3, 78, 1);
				func_42(uParam3, 79, 1);
				func_42(uParam3, 80, 1);
				func_42(uParam3, 81, 1);
				func_42(uParam3, 82, 1);
				func_42(uParam3, 91, 1);
				func_42(uParam3, 92, 1);
				func_40(uParam2, 64, 1);
				func_40(uParam2, 65, 1);
				func_40(uParam2, 66, 1);
				func_40(uParam2, 67, 1);
				func_40(uParam2, 68, 1);
				func_40(uParam2, 69, 1);
				func_40(uParam2, 70, 1);
				func_40(uParam2, 71, 1);
				func_40(uParam2, 72, 1);
				func_40(uParam2, 73, 1);
				func_40(uParam2, 74, 1);
				func_40(uParam2, 75, 1);
				func_40(uParam2, 77, 1);
				func_40(uParam2, 78, 1);
				func_40(uParam2, 79, 1);
				func_40(uParam2, 80, 1);
				func_40(uParam2, 81, 1);
				func_40(uParam2, 90, 1);
				func_40(uParam2, 91, 1);
				break;

			case 1:
				func_42(uParam3, 3, 1);
				func_42(uParam3, 4, 1);
				func_42(uParam3, 6, 1);
				func_42(uParam3, 13, 1);
				func_42(uParam3, 18, 1);
				func_42(uParam3, 50, 1);
				func_42(uParam3, 51, 1);
				func_42(uParam3, 52, 1);
				func_42(uParam3, 53, 1);
				func_42(uParam3, 62, 1);
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_42(uParam3, 19, 1);
				func_42(uParam3, 20, 1);
				func_42(uParam3, 26, 1);
				func_42(uParam3, 27, 1);
				func_42(uParam3, 32, 1);
				func_42(uParam3, 33, 1);
				func_42(uParam3, 37, 1);
				func_42(uParam3, 39, 1);
				func_42(uParam3, 55, 1);
				func_40(uParam2, 3, 1);
				func_40(uParam2, 4, 1);
				func_40(uParam2, 6, 1);
				func_40(uParam2, 8, 1);
				func_40(uParam2, 9, 1);
				func_40(uParam2, 10, 1);
				func_40(uParam2, 53, 1);
				func_40(uParam2, 56, 1);
				func_40(uParam2, 55, 1);
				func_40(uParam2, 11, 1);
				func_40(uParam2, 13, 1);
				func_40(uParam2, 18, 1);
				func_40(uParam2, 49, 1);
				func_40(uParam2, 50, 1);
				func_40(uParam2, 51, 1);
				func_40(uParam2, 52, 1);
				func_40(uParam2, 62, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
				func_40(uParam2, 21, 1);
				func_40(uParam2, 22, 1);
				func_40(uParam2, 54, 1);
				func_40(uParam2, 26, 1);
				func_40(uParam2, 27, 1);
				func_40(uParam2, 28, 1);
				func_40(uParam2, 30, 1);
				func_40(uParam2, 31, 1);
				func_40(uParam2, 32, 1);
				func_40(uParam2, 36, 1);
				func_40(uParam2, 38, 1);
				func_40(uParam2, 55, 1);
				func_43(uParam4, 2, 1);
				func_43(uParam4, 3, 1);
				func_43(uParam4, 4, 1);
				func_43(uParam4, 14, 1);
				func_43(uParam4, 15, 1);
				func_43(uParam4, 16, 1);
				func_43(uParam4, 9, 1);
				func_43(uParam4, 10, 1);
				func_43(uParam4, 12, 1);
				func_43(uParam4, 13, 1);
				func_43(uParam4, 17, 1);
				func_43(uParam4, 18, 1);
				func_43(uParam4, 19, 1);
				func_43(uParam4, 20, 1);
				func_43(uParam4, 59, 1);
				func_43(uParam4, 60, 1);
				func_43(uParam4, 61, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 63, 1);
				func_43(uParam4, 64, 1);
				func_43(uParam4, 65, 1);
				func_43(uParam4, 66, 1);
				func_43(uParam4, 67, 1);
				func_43(uParam4, 68, 1);
				func_43(uParam4, 69, 1);
				func_43(uParam4, 70, 1);
				func_43(uParam4, 71, 1);
				func_43(uParam4, 72, 1);
				func_43(uParam4, 21, 1);
				func_43(uParam4, 22, 1);
				func_43(uParam4, 23, 1);
				func_43(uParam4, 24, 1);
				func_43(uParam4, 25, 1);
				func_43(uParam4, 26, 1);
				func_43(uParam4, 36, 1);
				func_43(uParam4, 46, 1);
				func_43(uParam4, 38, 1);
				func_43(uParam4, 29, 1);
				func_43(uParam4, 28, 1);
				func_43(uParam4, 8, 1);
				func_43(uParam4, 31, 1);
				func_43(uParam4, 32, 1);
				func_43(uParam4, 33, 1);
				func_43(uParam4, 34, 1);
				func_43(uParam4, 43, 1);
				func_43(uParam4, 92, 1);
				func_43(uParam4, 93, 1);
				func_43(uParam4, 94, 1);
				func_43(uParam4, 96, 1);
				func_43(uParam4, 97, 1);
				func_43(uParam4, 98, 1);
				func_43(uParam4, 100, 1);
				func_42(uParam3, 65, 1);
				func_42(uParam3, 67, 1);
				func_42(uParam3, 68, 1);
				func_42(uParam3, 69, 1);
				func_42(uParam3, 70, 1);
				func_42(uParam3, 71, 1);
				func_42(uParam3, 72, 1);
				func_42(uParam3, 73, 1);
				func_42(uParam3, 74, 1);
				func_42(uParam3, 75, 1);
				func_42(uParam3, 76, 1);
				func_42(uParam3, 78, 1);
				func_42(uParam3, 79, 1);
				func_42(uParam3, 80, 1);
				func_42(uParam3, 81, 1);
				func_42(uParam3, 82, 1);
				func_42(uParam3, 91, 1);
				func_42(uParam3, 92, 1);
				func_40(uParam2, 64, 1);
				func_40(uParam2, 65, 1);
				func_40(uParam2, 66, 1);
				func_40(uParam2, 67, 1);
				func_40(uParam2, 68, 1);
				func_40(uParam2, 69, 1);
				func_40(uParam2, 70, 1);
				func_40(uParam2, 71, 1);
				func_40(uParam2, 72, 1);
				func_40(uParam2, 73, 1);
				func_40(uParam2, 74, 1);
				func_40(uParam2, 75, 1);
				func_40(uParam2, 77, 1);
				func_40(uParam2, 78, 1);
				func_40(uParam2, 79, 1);
				func_40(uParam2, 80, 1);
				func_40(uParam2, 81, 1);
				func_40(uParam2, 90, 1);
				func_40(uParam2, 91, 1);
				break;

			case 2:
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_42(uParam3, 39, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
				func_40(uParam2, 38, 1);
				func_43(uParam4, 9, 1);
				func_43(uParam4, 10, 1);
				func_43(uParam4, 12, 1);
				func_43(uParam4, 18, 1);
				func_43(uParam4, 19, 1);
				func_43(uParam4, 20, 1);
				func_43(uParam4, 59, 1);
				func_43(uParam4, 60, 1);
				func_43(uParam4, 61, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 63, 1);
				func_43(uParam4, 64, 1);
				func_43(uParam4, 65, 1);
				func_43(uParam4, 66, 1);
				func_43(uParam4, 67, 1);
				func_43(uParam4, 68, 1);
				func_43(uParam4, 69, 1);
				func_43(uParam4, 70, 1);
				func_43(uParam4, 71, 1);
				func_43(uParam4, 72, 1);
				func_43(uParam4, 21, 1);
				func_43(uParam4, 22, 1);
				func_43(uParam4, 23, 1);
				func_43(uParam4, 24, 1);
				func_43(uParam4, 25, 1);
				func_43(uParam4, 26, 1);
				func_43(uParam4, 36, 1);
				func_43(uParam4, 46, 1);
				func_43(uParam4, 38, 1);
				func_43(uParam4, 29, 1);
				func_43(uParam4, 28, 1);
				func_43(uParam4, 8, 1);
				func_43(uParam4, 31, 1);
				func_43(uParam4, 32, 1);
				func_43(uParam4, 33, 1);
				func_43(uParam4, 34, 1);
				func_43(uParam4, 92, 1);
				func_43(uParam4, 93, 1);
				func_43(uParam4, 94, 1);
				func_43(uParam4, 96, 1);
				func_43(uParam4, 97, 1);
				func_43(uParam4, 98, 1);
				func_43(uParam4, 100, 1);
				func_42(uParam3, 65, 1);
				func_42(uParam3, 67, 1);
				func_42(uParam3, 68, 1);
				func_42(uParam3, 69, 1);
				func_42(uParam3, 70, 1);
				func_42(uParam3, 71, 1);
				func_42(uParam3, 72, 1);
				func_42(uParam3, 73, 1);
				func_42(uParam3, 74, 1);
				func_42(uParam3, 75, 1);
				func_42(uParam3, 76, 1);
				func_42(uParam3, 78, 1);
				func_42(uParam3, 79, 1);
				func_42(uParam3, 80, 1);
				func_42(uParam3, 81, 1);
				func_42(uParam3, 82, 1);
				func_42(uParam3, 91, 1);
				func_42(uParam3, 92, 1);
				func_40(uParam2, 64, 1);
				func_40(uParam2, 65, 1);
				func_40(uParam2, 66, 1);
				func_40(uParam2, 67, 1);
				func_40(uParam2, 68, 1);
				func_40(uParam2, 69, 1);
				func_40(uParam2, 70, 1);
				func_40(uParam2, 71, 1);
				func_40(uParam2, 72, 1);
				func_40(uParam2, 73, 1);
				func_40(uParam2, 74, 1);
				func_40(uParam2, 75, 1);
				func_40(uParam2, 77, 1);
				func_40(uParam2, 78, 1);
				func_40(uParam2, 79, 1);
				func_40(uParam2, 80, 1);
				func_40(uParam2, 81, 1);
				func_40(uParam2, 90, 1);
				func_40(uParam2, 91, 1);
				break;
			}
			break;

		case 13:
			switch (iParam5) {
			case 0:
				func_42(uParam3, 16, 1);
				func_42(uParam3, 48, 1);
				func_42(uParam3, 49, 1);
				func_42(uParam3, 18, 1);
				func_42(uParam3, 50, 1);
				func_42(uParam3, 51, 1);
				func_42(uParam3, 52, 1);
				func_42(uParam3, 53, 1);
				func_42(uParam3, 62, 1);
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_40(uParam2, 18, 1);
				func_40(uParam2, 49, 1);
				func_40(uParam2, 50, 1);
				func_40(uParam2, 51, 1);
				func_40(uParam2, 52, 1);
				func_40(uParam2, 62, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
				func_40(uParam2, 19, 1);
				func_43(uParam4, 2, 1);
				func_43(uParam4, 3, 1);
				func_43(uParam4, 8, 1);
				func_43(uParam4, 9, 1);
				func_43(uParam4, 10, 1);
				func_43(uParam4, 13, 1);
				func_43(uParam4, 17, 1);
				func_43(uParam4, 18, 1);
				func_43(uParam4, 19, 1);
				func_43(uParam4, 20, 1);
				func_43(uParam4, 59, 1);
				func_43(uParam4, 60, 1);
				func_43(uParam4, 61, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 63, 1);
				func_43(uParam4, 64, 1);
				func_43(uParam4, 65, 1);
				func_43(uParam4, 66, 1);
				func_43(uParam4, 67, 1);
				func_43(uParam4, 68, 1);
				func_43(uParam4, 69, 1);
				func_43(uParam4, 70, 1);
				func_43(uParam4, 71, 1);
				func_43(uParam4, 72, 1);
				func_43(uParam4, 21, 1);
				func_43(uParam4, 22, 1);
				func_43(uParam4, 23, 1);
				func_43(uParam4, 24, 1);
				func_43(uParam4, 25, 1);
				func_43(uParam4, 26, 1);
				func_43(uParam4, 36, 1);
				func_43(uParam4, 46, 1);
				func_43(uParam4, 38, 1);
				func_43(uParam4, 29, 1);
				func_43(uParam4, 28, 1);
				func_43(uParam4, 31, 1);
				func_43(uParam4, 32, 1);
				func_43(uParam4, 33, 1);
				func_43(uParam4, 34, 1);
				func_43(uParam4, 43, 1);
				func_43(uParam4, 92, 1);
				func_43(uParam4, 93, 1);
				func_43(uParam4, 94, 1);
				func_43(uParam4, 96, 1);
				func_43(uParam4, 97, 1);
				func_43(uParam4, 98, 1);
				func_43(uParam4, 100, 1);
				func_42(uParam3, 67, 1);
				func_42(uParam3, 68, 1);
				func_42(uParam3, 69, 1);
				func_42(uParam3, 70, 1);
				func_42(uParam3, 71, 1);
				func_42(uParam3, 72, 1);
				func_42(uParam3, 73, 1);
				func_42(uParam3, 74, 1);
				func_42(uParam3, 78, 1);
				func_42(uParam3, 79, 1);
				func_42(uParam3, 80, 1);
				func_42(uParam3, 81, 1);
				func_42(uParam3, 82, 1);
				func_42(uParam3, 91, 1);
				func_42(uParam3, 92, 1);
				func_40(uParam2, 66, 1);
				func_40(uParam2, 67, 1);
				func_40(uParam2, 68, 1);
				func_40(uParam2, 69, 1);
				func_40(uParam2, 70, 1);
				func_40(uParam2, 71, 1);
				func_40(uParam2, 72, 1);
				func_40(uParam2, 73, 1);
				func_40(uParam2, 77, 1);
				func_40(uParam2, 78, 1);
				func_40(uParam2, 79, 1);
				func_40(uParam2, 80, 1);
				func_40(uParam2, 81, 1);
				func_40(uParam2, 90, 1);
				func_40(uParam2, 91, 1);
				break;

			case 1:
				func_42(uParam3, 16, 1);
				func_42(uParam3, 48, 1);
				func_42(uParam3, 49, 1);
				func_42(uParam3, 18, 1);
				func_42(uParam3, 50, 1);
				func_42(uParam3, 51, 1);
				func_42(uParam3, 52, 1);
				func_42(uParam3, 53, 1);
				func_42(uParam3, 62, 1);
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_40(uParam2, 18, 1);
				func_40(uParam2, 49, 1);
				func_40(uParam2, 50, 1);
				func_40(uParam2, 51, 1);
				func_40(uParam2, 52, 1);
				func_40(uParam2, 62, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
				func_43(uParam4, 2, 1);
				func_43(uParam4, 7, 1);
				func_43(uParam4, 8, 1);
				func_43(uParam4, 9, 1);
				func_43(uParam4, 10, 1);
				func_43(uParam4, 13, 1);
				func_43(uParam4, 17, 1);
				func_43(uParam4, 18, 1);
				func_43(uParam4, 19, 1);
				func_43(uParam4, 20, 1);
				func_43(uParam4, 59, 1);
				func_43(uParam4, 60, 1);
				func_43(uParam4, 61, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 63, 1);
				func_43(uParam4, 64, 1);
				func_43(uParam4, 65, 1);
				func_43(uParam4, 66, 1);
				func_43(uParam4, 67, 1);
				func_43(uParam4, 68, 1);
				func_43(uParam4, 69, 1);
				func_43(uParam4, 70, 1);
				func_43(uParam4, 71, 1);
				func_43(uParam4, 72, 1);
				func_43(uParam4, 21, 1);
				func_43(uParam4, 22, 1);
				func_43(uParam4, 23, 1);
				func_43(uParam4, 24, 1);
				func_43(uParam4, 25, 1);
				func_43(uParam4, 26, 1);
				func_43(uParam4, 36, 1);
				func_43(uParam4, 46, 1);
				func_43(uParam4, 38, 1);
				func_43(uParam4, 29, 1);
				func_43(uParam4, 28, 1);
				func_43(uParam4, 31, 1);
				func_43(uParam4, 32, 1);
				func_43(uParam4, 33, 1);
				func_43(uParam4, 34, 1);
				func_43(uParam4, 43, 1);
				func_43(uParam4, 92, 1);
				func_43(uParam4, 93, 1);
				func_43(uParam4, 94, 1);
				func_43(uParam4, 96, 1);
				func_43(uParam4, 97, 1);
				func_43(uParam4, 98, 1);
				func_43(uParam4, 100, 1);
				func_42(uParam3, 67, 1);
				func_42(uParam3, 68, 1);
				func_42(uParam3, 69, 1);
				func_42(uParam3, 70, 1);
				func_42(uParam3, 71, 1);
				func_42(uParam3, 72, 1);
				func_42(uParam3, 73, 1);
				func_42(uParam3, 74, 1);
				func_42(uParam3, 78, 1);
				func_42(uParam3, 79, 1);
				func_42(uParam3, 80, 1);
				func_42(uParam3, 81, 1);
				func_42(uParam3, 82, 1);
				func_42(uParam3, 91, 1);
				func_42(uParam3, 92, 1);
				func_40(uParam2, 66, 1);
				func_40(uParam2, 67, 1);
				func_40(uParam2, 68, 1);
				func_40(uParam2, 69, 1);
				func_40(uParam2, 70, 1);
				func_40(uParam2, 71, 1);
				func_40(uParam2, 72, 1);
				func_40(uParam2, 73, 1);
				func_40(uParam2, 77, 1);
				func_40(uParam2, 78, 1);
				func_40(uParam2, 79, 1);
				func_40(uParam2, 80, 1);
				func_40(uParam2, 81, 1);
				func_40(uParam2, 90, 1);
				func_40(uParam2, 91, 1);
				break;

			case 2:
				func_42(uParam3, 18, 1);
				func_42(uParam3, 50, 1);
				func_42(uParam3, 51, 1);
				func_42(uParam3, 52, 1);
				func_42(uParam3, 53, 1);
				func_42(uParam3, 62, 1);
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_40(uParam2, 18, 1);
				func_40(uParam2, 49, 1);
				func_40(uParam2, 50, 1);
				func_40(uParam2, 51, 1);
				func_40(uParam2, 52, 1);
				func_40(uParam2, 62, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
				func_43(uParam4, 1, 1);
				func_43(uParam4, 2, 1);
				func_43(uParam4, 3, 1);
				func_43(uParam4, 5, 1);
				func_43(uParam4, 8, 1);
				func_43(uParam4, 9, 1);
				func_43(uParam4, 10, 1);
				func_43(uParam4, 13, 1);
				func_43(uParam4, 17, 1);
				func_43(uParam4, 18, 1);
				func_43(uParam4, 19, 1);
				func_43(uParam4, 20, 1);
				func_43(uParam4, 59, 1);
				func_43(uParam4, 60, 1);
				func_43(uParam4, 61, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 63, 1);
				func_43(uParam4, 64, 1);
				func_43(uParam4, 65, 1);
				func_43(uParam4, 66, 1);
				func_43(uParam4, 67, 1);
				func_43(uParam4, 68, 1);
				func_43(uParam4, 69, 1);
				func_43(uParam4, 70, 1);
				func_43(uParam4, 71, 1);
				func_43(uParam4, 72, 1);
				func_43(uParam4, 21, 1);
				func_43(uParam4, 22, 1);
				func_43(uParam4, 23, 1);
				func_43(uParam4, 24, 1);
				func_43(uParam4, 25, 1);
				func_43(uParam4, 26, 1);
				func_43(uParam4, 36, 1);
				func_43(uParam4, 46, 1);
				func_43(uParam4, 38, 1);
				func_43(uParam4, 29, 1);
				func_43(uParam4, 28, 1);
				func_43(uParam4, 31, 1);
				func_43(uParam4, 32, 1);
				func_43(uParam4, 33, 1);
				func_43(uParam4, 34, 1);
				func_43(uParam4, 92, 1);
				func_43(uParam4, 93, 1);
				func_43(uParam4, 94, 1);
				func_43(uParam4, 96, 1);
				func_43(uParam4, 97, 1);
				func_43(uParam4, 98, 1);
				func_43(uParam4, 100, 1);
				func_42(uParam3, 67, 1);
				func_42(uParam3, 68, 1);
				func_42(uParam3, 69, 1);
				func_42(uParam3, 70, 1);
				func_42(uParam3, 71, 1);
				func_42(uParam3, 72, 1);
				func_42(uParam3, 73, 1);
				func_42(uParam3, 74, 1);
				func_42(uParam3, 78, 1);
				func_42(uParam3, 79, 1);
				func_42(uParam3, 80, 1);
				func_42(uParam3, 81, 1);
				func_42(uParam3, 82, 1);
				func_42(uParam3, 91, 1);
				func_42(uParam3, 92, 1);
				func_40(uParam2, 66, 1);
				func_40(uParam2, 67, 1);
				func_40(uParam2, 68, 1);
				func_40(uParam2, 69, 1);
				func_40(uParam2, 70, 1);
				func_40(uParam2, 71, 1);
				func_40(uParam2, 72, 1);
				func_40(uParam2, 73, 1);
				func_40(uParam2, 77, 1);
				func_40(uParam2, 78, 1);
				func_40(uParam2, 79, 1);
				func_40(uParam2, 80, 1);
				func_40(uParam2, 81, 1);
				func_40(uParam2, 90, 1);
				func_40(uParam2, 91, 1);
				break;
			}
			break;

		case 16:
			switch (iParam5) {
			case 0: func_42(uParam3, 4, 1); break;

			case 1: func_43(uParam4, 43, 1); break;

			case 2: break;
			}
			break;

		case 23:
			switch (iParam5) {
			case 0:
				func_42(uParam3, 67, 1);
				func_42(uParam3, 68, 1);
				func_42(uParam3, 69, 1);
				func_42(uParam3, 70, 1);
				func_42(uParam3, 71, 1);
				func_42(uParam3, 72, 1);
				func_42(uParam3, 73, 1);
				func_42(uParam3, 74, 1);
				func_42(uParam3, 78, 1);
				func_42(uParam3, 79, 1);
				func_42(uParam3, 80, 1);
				func_42(uParam3, 81, 1);
				func_42(uParam3, 82, 1);
				func_42(uParam3, 91, 1);
				func_42(uParam3, 92, 1);
				func_40(uParam2, 66, 1);
				func_40(uParam2, 67, 1);
				func_40(uParam2, 68, 1);
				func_40(uParam2, 69, 1);
				func_40(uParam2, 70, 1);
				func_40(uParam2, 71, 1);
				func_40(uParam2, 72, 1);
				func_40(uParam2, 73, 1);
				func_40(uParam2, 74, 1);
				func_40(uParam2, 77, 1);
				func_40(uParam2, 78, 1);
				func_40(uParam2, 79, 1);
				func_40(uParam2, 80, 1);
				func_40(uParam2, 81, 1);
				func_40(uParam2, 90, 1);
				func_40(uParam2, 91, 1);
				func_43(uParam4, 92, 1);
				func_43(uParam4, 93, 1);
				func_43(uParam4, 94, 1);
				func_43(uParam4, 96, 1);
				func_43(uParam4, 97, 1);
				func_43(uParam4, 98, 1);
				func_43(uParam4, 100, 1);
				break;

			case 1:
				func_42(uParam3, 67, 1);
				func_42(uParam3, 68, 1);
				func_42(uParam3, 69, 1);
				func_42(uParam3, 70, 1);
				func_42(uParam3, 71, 1);
				func_42(uParam3, 72, 1);
				func_42(uParam3, 73, 1);
				func_42(uParam3, 74, 1);
				func_42(uParam3, 78, 1);
				func_42(uParam3, 79, 1);
				func_42(uParam3, 80, 1);
				func_42(uParam3, 81, 1);
				func_42(uParam3, 82, 1);
				func_42(uParam3, 91, 1);
				func_42(uParam3, 92, 1);
				func_40(uParam2, 66, 1);
				func_40(uParam2, 67, 1);
				func_40(uParam2, 68, 1);
				func_40(uParam2, 69, 1);
				func_40(uParam2, 70, 1);
				func_40(uParam2, 71, 1);
				func_40(uParam2, 72, 1);
				func_40(uParam2, 73, 1);
				func_40(uParam2, 74, 1);
				func_40(uParam2, 77, 1);
				func_40(uParam2, 78, 1);
				func_40(uParam2, 79, 1);
				func_40(uParam2, 80, 1);
				func_40(uParam2, 81, 1);
				func_40(uParam2, 90, 1);
				func_40(uParam2, 91, 1);
				func_43(uParam4, 92, 1);
				func_43(uParam4, 93, 1);
				func_43(uParam4, 94, 1);
				func_43(uParam4, 96, 1);
				func_43(uParam4, 97, 1);
				func_43(uParam4, 98, 1);
				func_43(uParam4, 100, 1);
				break;

			case 2:
				func_42(uParam3, 67, 1);
				func_42(uParam3, 68, 1);
				func_42(uParam3, 69, 1);
				func_42(uParam3, 70, 1);
				func_42(uParam3, 71, 1);
				func_42(uParam3, 72, 1);
				func_42(uParam3, 73, 1);
				func_42(uParam3, 74, 1);
				func_42(uParam3, 78, 1);
				func_42(uParam3, 79, 1);
				func_42(uParam3, 80, 1);
				func_42(uParam3, 81, 1);
				func_42(uParam3, 82, 1);
				func_42(uParam3, 91, 1);
				func_42(uParam3, 92, 1);
				func_40(uParam2, 66, 1);
				func_40(uParam2, 67, 1);
				func_40(uParam2, 68, 1);
				func_40(uParam2, 69, 1);
				func_40(uParam2, 70, 1);
				func_40(uParam2, 71, 1);
				func_40(uParam2, 72, 1);
				func_40(uParam2, 73, 1);
				func_40(uParam2, 74, 1);
				func_40(uParam2, 77, 1);
				func_40(uParam2, 78, 1);
				func_40(uParam2, 79, 1);
				func_40(uParam2, 80, 1);
				func_40(uParam2, 81, 1);
				func_40(uParam2, 90, 1);
				func_40(uParam2, 91, 1);
				func_43(uParam4, 92, 1);
				func_43(uParam4, 93, 1);
				func_43(uParam4, 94, 1);
				func_43(uParam4, 96, 1);
				func_43(uParam4, 97, 1);
				func_43(uParam4, 98, 1);
				func_43(uParam4, 100, 1);
				break;
			}
			break;

		case 17:
			switch (iParam5) {
			case 0:
				func_42(uParam3, 16, 1);
				func_42(uParam3, 48, 1);
				func_42(uParam3, 49, 1);
				func_42(uParam3, 18, 1);
				func_42(uParam3, 50, 1);
				func_42(uParam3, 51, 1);
				func_42(uParam3, 52, 1);
				func_42(uParam3, 53, 1);
				func_42(uParam3, 62, 1);
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_40(uParam2, 16, 1);
				func_40(uParam2, 47, 1);
				func_40(uParam2, 48, 1);
				func_40(uParam2, 18, 1);
				func_40(uParam2, 49, 1);
				func_40(uParam2, 50, 1);
				func_40(uParam2, 51, 1);
				func_40(uParam2, 52, 1);
				func_40(uParam2, 62, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
				func_43(uParam4, 1, 1);
				func_43(uParam4, 2, 1);
				func_43(uParam4, 3, 1);
				func_43(uParam4, 5, 1);
				func_43(uParam4, 6, 1);
				func_43(uParam4, 7, 1);
				func_43(uParam4, 8, 1);
				func_43(uParam4, 9, 1);
				func_43(uParam4, 10, 1);
				func_43(uParam4, 13, 1);
				func_43(uParam4, 18, 1);
				func_43(uParam4, 19, 1);
				func_43(uParam4, 20, 1);
				func_43(uParam4, 59, 1);
				func_43(uParam4, 60, 1);
				func_43(uParam4, 61, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 63, 1);
				func_43(uParam4, 64, 1);
				func_43(uParam4, 65, 1);
				func_43(uParam4, 66, 1);
				func_43(uParam4, 67, 1);
				func_43(uParam4, 68, 1);
				func_43(uParam4, 69, 1);
				func_43(uParam4, 70, 1);
				func_43(uParam4, 71, 1);
				func_43(uParam4, 72, 1);
				func_43(uParam4, 21, 1);
				func_43(uParam4, 22, 1);
				func_43(uParam4, 23, 1);
				func_43(uParam4, 24, 1);
				func_43(uParam4, 25, 1);
				func_43(uParam4, 26, 1);
				func_43(uParam4, 36, 1);
				func_43(uParam4, 46, 1);
				func_43(uParam4, 38, 1);
				func_43(uParam4, 29, 1);
				func_43(uParam4, 28, 1);
				func_43(uParam4, 92, 1);
				func_43(uParam4, 93, 1);
				func_43(uParam4, 94, 1);
				func_43(uParam4, 96, 1);
				func_43(uParam4, 97, 1);
				func_43(uParam4, 98, 1);
				func_43(uParam4, 100, 1);
				func_42(uParam3, 67, 1);
				func_42(uParam3, 68, 1);
				func_42(uParam3, 69, 1);
				func_42(uParam3, 70, 1);
				func_42(uParam3, 71, 1);
				func_42(uParam3, 72, 1);
				func_42(uParam3, 73, 1);
				func_42(uParam3, 74, 1);
				func_42(uParam3, 78, 1);
				func_42(uParam3, 79, 1);
				func_42(uParam3, 80, 1);
				func_42(uParam3, 81, 1);
				func_42(uParam3, 82, 1);
				func_42(uParam3, 91, 1);
				func_42(uParam3, 92, 1);
				func_40(uParam2, 66, 1);
				func_40(uParam2, 67, 1);
				func_40(uParam2, 68, 1);
				func_40(uParam2, 69, 1);
				func_40(uParam2, 70, 1);
				func_40(uParam2, 71, 1);
				func_40(uParam2, 72, 1);
				func_40(uParam2, 73, 1);
				func_40(uParam2, 77, 1);
				func_40(uParam2, 78, 1);
				func_40(uParam2, 79, 1);
				func_40(uParam2, 80, 1);
				func_40(uParam2, 81, 1);
				func_40(uParam2, 90, 1);
				func_40(uParam2, 91, 1);
				break;

			case 1:
				func_42(uParam3, 16, 1);
				func_42(uParam3, 48, 1);
				func_42(uParam3, 49, 1);
				func_42(uParam3, 18, 1);
				func_42(uParam3, 50, 1);
				func_42(uParam3, 51, 1);
				func_42(uParam3, 52, 1);
				func_42(uParam3, 53, 1);
				func_42(uParam3, 62, 1);
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_40(uParam2, 16, 1);
				func_40(uParam2, 47, 1);
				func_40(uParam2, 48, 1);
				func_40(uParam2, 18, 1);
				func_40(uParam2, 49, 1);
				func_40(uParam2, 50, 1);
				func_40(uParam2, 51, 1);
				func_40(uParam2, 52, 1);
				func_40(uParam2, 62, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
				func_43(uParam4, 1, 1);
				func_43(uParam4, 2, 1);
				func_43(uParam4, 3, 1);
				func_43(uParam4, 5, 1);
				func_43(uParam4, 6, 1);
				func_43(uParam4, 7, 1);
				func_43(uParam4, 8, 1);
				func_43(uParam4, 9, 1);
				func_43(uParam4, 10, 1);
				func_43(uParam4, 13, 1);
				func_43(uParam4, 18, 1);
				func_43(uParam4, 19, 1);
				func_43(uParam4, 20, 1);
				func_43(uParam4, 59, 1);
				func_43(uParam4, 60, 1);
				func_43(uParam4, 61, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 63, 1);
				func_43(uParam4, 64, 1);
				func_43(uParam4, 65, 1);
				func_43(uParam4, 66, 1);
				func_43(uParam4, 67, 1);
				func_43(uParam4, 68, 1);
				func_43(uParam4, 69, 1);
				func_43(uParam4, 70, 1);
				func_43(uParam4, 71, 1);
				func_43(uParam4, 72, 1);
				func_43(uParam4, 21, 1);
				func_43(uParam4, 22, 1);
				func_43(uParam4, 23, 1);
				func_43(uParam4, 24, 1);
				func_43(uParam4, 25, 1);
				func_43(uParam4, 26, 1);
				func_43(uParam4, 36, 1);
				func_43(uParam4, 46, 1);
				func_43(uParam4, 38, 1);
				func_43(uParam4, 29, 1);
				func_43(uParam4, 28, 1);
				func_43(uParam4, 43, 1);
				func_43(uParam4, 92, 1);
				func_43(uParam4, 93, 1);
				func_43(uParam4, 94, 1);
				func_43(uParam4, 96, 1);
				func_43(uParam4, 97, 1);
				func_43(uParam4, 98, 1);
				func_43(uParam4, 100, 1);
				func_42(uParam3, 67, 1);
				func_42(uParam3, 68, 1);
				func_42(uParam3, 69, 1);
				func_42(uParam3, 70, 1);
				func_42(uParam3, 71, 1);
				func_42(uParam3, 72, 1);
				func_42(uParam3, 73, 1);
				func_42(uParam3, 74, 1);
				func_42(uParam3, 78, 1);
				func_42(uParam3, 79, 1);
				func_42(uParam3, 80, 1);
				func_42(uParam3, 81, 1);
				func_42(uParam3, 82, 1);
				func_42(uParam3, 91, 1);
				func_42(uParam3, 92, 1);
				func_40(uParam2, 66, 1);
				func_40(uParam2, 67, 1);
				func_40(uParam2, 68, 1);
				func_40(uParam2, 69, 1);
				func_40(uParam2, 70, 1);
				func_40(uParam2, 71, 1);
				func_40(uParam2, 72, 1);
				func_40(uParam2, 73, 1);
				func_40(uParam2, 77, 1);
				func_40(uParam2, 78, 1);
				func_40(uParam2, 79, 1);
				func_40(uParam2, 80, 1);
				func_40(uParam2, 81, 1);
				func_40(uParam2, 90, 1);
				func_40(uParam2, 91, 1);
				break;

			case 2:
				func_42(uParam3, 16, 1);
				func_42(uParam3, 48, 1);
				func_42(uParam3, 49, 1);
				func_42(uParam3, 18, 1);
				func_42(uParam3, 50, 1);
				func_42(uParam3, 51, 1);
				func_42(uParam3, 52, 1);
				func_42(uParam3, 53, 1);
				func_42(uParam3, 62, 1);
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_40(uParam2, 16, 1);
				func_40(uParam2, 47, 1);
				func_40(uParam2, 48, 1);
				func_40(uParam2, 18, 1);
				func_40(uParam2, 49, 1);
				func_40(uParam2, 50, 1);
				func_40(uParam2, 51, 1);
				func_40(uParam2, 52, 1);
				func_40(uParam2, 62, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
				func_43(uParam4, 1, 1);
				func_43(uParam4, 2, 1);
				func_43(uParam4, 3, 1);
				func_43(uParam4, 5, 1);
				func_43(uParam4, 6, 1);
				func_43(uParam4, 7, 1);
				func_43(uParam4, 8, 1);
				func_43(uParam4, 9, 1);
				func_43(uParam4, 10, 1);
				func_43(uParam4, 13, 1);
				func_43(uParam4, 18, 1);
				func_43(uParam4, 19, 1);
				func_43(uParam4, 20, 1);
				func_43(uParam4, 59, 1);
				func_43(uParam4, 60, 1);
				func_43(uParam4, 61, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 63, 1);
				func_43(uParam4, 64, 1);
				func_43(uParam4, 65, 1);
				func_43(uParam4, 66, 1);
				func_43(uParam4, 67, 1);
				func_43(uParam4, 68, 1);
				func_43(uParam4, 69, 1);
				func_43(uParam4, 70, 1);
				func_43(uParam4, 71, 1);
				func_43(uParam4, 72, 1);
				func_43(uParam4, 21, 1);
				func_43(uParam4, 22, 1);
				func_43(uParam4, 23, 1);
				func_43(uParam4, 24, 1);
				func_43(uParam4, 25, 1);
				func_43(uParam4, 26, 1);
				func_43(uParam4, 36, 1);
				func_43(uParam4, 46, 1);
				func_43(uParam4, 38, 1);
				func_43(uParam4, 29, 1);
				func_43(uParam4, 28, 1);
				func_43(uParam4, 92, 1);
				func_43(uParam4, 93, 1);
				func_43(uParam4, 94, 1);
				func_43(uParam4, 96, 1);
				func_43(uParam4, 97, 1);
				func_43(uParam4, 98, 1);
				func_43(uParam4, 100, 1);
				func_42(uParam3, 67, 1);
				func_42(uParam3, 68, 1);
				func_42(uParam3, 69, 1);
				func_42(uParam3, 70, 1);
				func_42(uParam3, 71, 1);
				func_42(uParam3, 72, 1);
				func_42(uParam3, 73, 1);
				func_42(uParam3, 74, 1);
				func_42(uParam3, 78, 1);
				func_42(uParam3, 79, 1);
				func_42(uParam3, 80, 1);
				func_42(uParam3, 81, 1);
				func_42(uParam3, 82, 1);
				func_42(uParam3, 91, 1);
				func_42(uParam3, 92, 1);
				func_40(uParam2, 66, 1);
				func_40(uParam2, 67, 1);
				func_40(uParam2, 68, 1);
				func_40(uParam2, 69, 1);
				func_40(uParam2, 70, 1);
				func_40(uParam2, 71, 1);
				func_40(uParam2, 72, 1);
				func_40(uParam2, 73, 1);
				func_40(uParam2, 77, 1);
				func_40(uParam2, 78, 1);
				func_40(uParam2, 79, 1);
				func_40(uParam2, 80, 1);
				func_40(uParam2, 81, 1);
				func_40(uParam2, 90, 1);
				func_40(uParam2, 91, 1);
				break;
			}
			break;

		case 19:
			switch (iParam5) {
			case 0:
				func_42(uParam3, 3, 1);
				func_42(uParam3, 7, 1);
				func_42(uParam3, 0, 1);
				func_42(uParam3, 12, 1);
				func_42(uParam3, 13, 1);
				func_42(uParam3, 15, 1);
				func_42(uParam3, 16, 1);
				func_42(uParam3, 48, 1);
				func_42(uParam3, 49, 1);
				func_42(uParam3, 17, 1);
				func_42(uParam3, 18, 1);
				func_42(uParam3, 50, 1);
				func_42(uParam3, 51, 1);
				func_42(uParam3, 52, 1);
				func_42(uParam3, 53, 1);
				func_42(uParam3, 62, 1);
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_42(uParam3, 20, 1);
				func_42(uParam3, 21, 1);
				func_42(uParam3, 25, 1);
				func_42(uParam3, 26, 1);
				func_42(uParam3, 27, 1);
				func_42(uParam3, 30, 1);
				func_42(uParam3, 31, 1);
				func_42(uParam3, 32, 1);
				func_42(uParam3, 33, 1);
				func_42(uParam3, 39, 1);
				func_42(uParam3, 37, 1);
				func_40(uParam2, 0, 1);
				func_40(uParam2, 2, 1);
				func_40(uParam2, 3, 1);
				func_40(uParam2, 4, 1);
				func_40(uParam2, 6, 1);
				func_40(uParam2, 7, 1);
				func_40(uParam2, 8, 1);
				func_40(uParam2, 11, 1);
				func_40(uParam2, 13, 1);
				func_40(uParam2, 15, 1);
				func_40(uParam2, 16, 1);
				func_40(uParam2, 47, 1);
				func_40(uParam2, 48, 1);
				func_40(uParam2, 17, 1);
				func_40(uParam2, 18, 1);
				func_40(uParam2, 49, 1);
				func_40(uParam2, 50, 1);
				func_40(uParam2, 51, 1);
				func_40(uParam2, 52, 1);
				func_40(uParam2, 62, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
				func_40(uParam2, 19, 1);
				func_40(uParam2, 20, 1);
				func_40(uParam2, 21, 1);
				func_40(uParam2, 22, 1);
				func_40(uParam2, 54, 1);
				func_40(uParam2, 24, 1);
				func_40(uParam2, 26, 1);
				func_40(uParam2, 27, 1);
				func_40(uParam2, 28, 1);
				func_40(uParam2, 30, 1);
				func_40(uParam2, 31, 1);
				func_40(uParam2, 32, 1);
				func_40(uParam2, 38, 1);
				func_40(uParam2, 36, 1);
				func_43(uParam4, 1, 1);
				func_43(uParam4, 2, 1);
				func_43(uParam4, 3, 1);
				func_43(uParam4, 4, 1);
				func_43(uParam4, 14, 1);
				func_43(uParam4, 15, 1);
				func_43(uParam4, 16, 1);
				func_43(uParam4, 8, 1);
				func_43(uParam4, 9, 1);
				func_43(uParam4, 10, 1);
				func_43(uParam4, 13, 1);
				func_43(uParam4, 17, 1);
				func_43(uParam4, 18, 1);
				func_43(uParam4, 19, 1);
				func_43(uParam4, 20, 1);
				func_43(uParam4, 59, 1);
				func_43(uParam4, 60, 1);
				func_43(uParam4, 61, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 63, 1);
				func_43(uParam4, 64, 1);
				func_43(uParam4, 65, 1);
				func_43(uParam4, 66, 1);
				func_43(uParam4, 67, 1);
				func_43(uParam4, 68, 1);
				func_43(uParam4, 69, 1);
				func_43(uParam4, 70, 1);
				func_43(uParam4, 71, 1);
				func_43(uParam4, 72, 1);
				func_43(uParam4, 21, 1);
				func_43(uParam4, 22, 1);
				func_43(uParam4, 23, 1);
				func_43(uParam4, 24, 1);
				func_43(uParam4, 25, 1);
				func_43(uParam4, 26, 1);
				func_43(uParam4, 36, 1);
				func_43(uParam4, 46, 1);
				func_43(uParam4, 38, 1);
				func_43(uParam4, 29, 1);
				func_43(uParam4, 28, 1);
				func_43(uParam4, 31, 1);
				func_43(uParam4, 33, 1);
				func_43(uParam4, 34, 1);
				func_43(uParam4, 43, 1);
				func_43(uParam4, 92, 1);
				func_43(uParam4, 93, 1);
				func_43(uParam4, 94, 1);
				func_43(uParam4, 96, 1);
				func_43(uParam4, 97, 1);
				func_43(uParam4, 98, 1);
				func_43(uParam4, 100, 1);
				func_42(uParam3, 65, 1);
				func_42(uParam3, 67, 1);
				func_42(uParam3, 68, 1);
				func_42(uParam3, 69, 1);
				func_42(uParam3, 70, 1);
				func_42(uParam3, 71, 1);
				func_42(uParam3, 72, 1);
				func_42(uParam3, 73, 1);
				func_42(uParam3, 74, 1);
				func_42(uParam3, 75, 1);
				func_42(uParam3, 76, 1);
				func_42(uParam3, 77, 1);
				func_42(uParam3, 78, 1);
				func_42(uParam3, 79, 1);
				func_42(uParam3, 80, 1);
				func_42(uParam3, 81, 1);
				func_42(uParam3, 82, 1);
				func_42(uParam3, 91, 1);
				func_42(uParam3, 92, 1);
				func_40(uParam2, 64, 1);
				func_40(uParam2, 65, 1);
				func_40(uParam2, 66, 1);
				func_40(uParam2, 67, 1);
				func_40(uParam2, 68, 1);
				func_40(uParam2, 69, 1);
				func_40(uParam2, 70, 1);
				func_40(uParam2, 71, 1);
				func_40(uParam2, 72, 1);
				func_40(uParam2, 73, 1);
				func_40(uParam2, 74, 1);
				func_40(uParam2, 75, 1);
				func_40(uParam2, 77, 1);
				func_40(uParam2, 78, 1);
				func_40(uParam2, 79, 1);
				func_40(uParam2, 80, 1);
				func_40(uParam2, 81, 1);
				func_40(uParam2, 90, 1);
				func_40(uParam2, 91, 1);
				break;

			case 1:
				func_42(uParam3, 3, 1);
				func_42(uParam3, 7, 1);
				func_42(uParam3, 0, 1);
				func_42(uParam3, 12, 1);
				func_42(uParam3, 13, 1);
				func_42(uParam3, 15, 1);
				func_42(uParam3, 16, 1);
				func_42(uParam3, 48, 1);
				func_42(uParam3, 49, 1);
				func_42(uParam3, 17, 1);
				func_42(uParam3, 18, 1);
				func_42(uParam3, 50, 1);
				func_42(uParam3, 51, 1);
				func_42(uParam3, 52, 1);
				func_42(uParam3, 53, 1);
				func_42(uParam3, 62, 1);
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_42(uParam3, 20, 1);
				func_42(uParam3, 21, 1);
				func_42(uParam3, 25, 1);
				func_42(uParam3, 26, 1);
				func_42(uParam3, 27, 1);
				func_42(uParam3, 30, 1);
				func_42(uParam3, 31, 1);
				func_42(uParam3, 32, 1);
				func_42(uParam3, 33, 1);
				func_42(uParam3, 39, 1);
				func_40(uParam2, 0, 1);
				func_40(uParam2, 2, 1);
				func_40(uParam2, 3, 1);
				func_40(uParam2, 4, 1);
				func_40(uParam2, 6, 1);
				func_40(uParam2, 7, 1);
				func_40(uParam2, 11, 1);
				func_40(uParam2, 13, 1);
				func_40(uParam2, 15, 1);
				func_40(uParam2, 16, 1);
				func_40(uParam2, 47, 1);
				func_40(uParam2, 48, 1);
				func_40(uParam2, 17, 1);
				func_40(uParam2, 18, 1);
				func_40(uParam2, 49, 1);
				func_40(uParam2, 50, 1);
				func_40(uParam2, 51, 1);
				func_40(uParam2, 52, 1);
				func_40(uParam2, 62, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
				func_40(uParam2, 19, 1);
				func_40(uParam2, 20, 1);
				func_40(uParam2, 21, 1);
				func_40(uParam2, 22, 1);
				func_40(uParam2, 54, 1);
				func_40(uParam2, 24, 1);
				func_40(uParam2, 38, 1);
				func_43(uParam4, 1, 1);
				func_43(uParam4, 2, 1);
				func_43(uParam4, 3, 1);
				func_43(uParam4, 4, 1);
				func_43(uParam4, 14, 1);
				func_43(uParam4, 15, 1);
				func_43(uParam4, 16, 1);
				func_43(uParam4, 6, 1);
				func_43(uParam4, 7, 1);
				func_43(uParam4, 8, 1);
				func_43(uParam4, 9, 1);
				func_43(uParam4, 10, 1);
				func_43(uParam4, 13, 1);
				func_43(uParam4, 17, 1);
				func_43(uParam4, 18, 1);
				func_43(uParam4, 19, 1);
				func_43(uParam4, 20, 1);
				func_43(uParam4, 59, 1);
				func_43(uParam4, 60, 1);
				func_43(uParam4, 61, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 63, 1);
				func_43(uParam4, 64, 1);
				func_43(uParam4, 65, 1);
				func_43(uParam4, 66, 1);
				func_43(uParam4, 67, 1);
				func_43(uParam4, 68, 1);
				func_43(uParam4, 69, 1);
				func_43(uParam4, 70, 1);
				func_43(uParam4, 71, 1);
				func_43(uParam4, 72, 1);
				func_43(uParam4, 21, 1);
				func_43(uParam4, 22, 1);
				func_43(uParam4, 23, 1);
				func_43(uParam4, 24, 1);
				func_43(uParam4, 25, 1);
				func_43(uParam4, 26, 1);
				func_43(uParam4, 36, 1);
				func_43(uParam4, 46, 1);
				func_43(uParam4, 38, 1);
				func_43(uParam4, 29, 1);
				func_43(uParam4, 28, 1);
				func_43(uParam4, 31, 1);
				func_43(uParam4, 33, 1);
				func_43(uParam4, 34, 1);
				func_43(uParam4, 43, 1);
				func_43(uParam4, 92, 1);
				func_43(uParam4, 93, 1);
				func_43(uParam4, 94, 1);
				func_43(uParam4, 96, 1);
				func_43(uParam4, 97, 1);
				func_43(uParam4, 98, 1);
				func_43(uParam4, 100, 1);
				func_42(uParam3, 65, 1);
				func_42(uParam3, 67, 1);
				func_42(uParam3, 68, 1);
				func_42(uParam3, 69, 1);
				func_42(uParam3, 70, 1);
				func_42(uParam3, 71, 1);
				func_42(uParam3, 72, 1);
				func_42(uParam3, 73, 1);
				func_42(uParam3, 74, 1);
				func_42(uParam3, 75, 1);
				func_42(uParam3, 76, 1);
				func_42(uParam3, 77, 1);
				func_42(uParam3, 78, 1);
				func_42(uParam3, 79, 1);
				func_42(uParam3, 80, 1);
				func_42(uParam3, 81, 1);
				func_42(uParam3, 82, 1);
				func_42(uParam3, 91, 1);
				func_42(uParam3, 92, 1);
				func_40(uParam2, 64, 1);
				func_40(uParam2, 65, 1);
				func_40(uParam2, 66, 1);
				func_40(uParam2, 67, 1);
				func_40(uParam2, 68, 1);
				func_40(uParam2, 69, 1);
				func_40(uParam2, 70, 1);
				func_40(uParam2, 71, 1);
				func_40(uParam2, 72, 1);
				func_40(uParam2, 73, 1);
				func_40(uParam2, 74, 1);
				func_40(uParam2, 75, 1);
				func_40(uParam2, 77, 1);
				func_40(uParam2, 78, 1);
				func_40(uParam2, 79, 1);
				func_40(uParam2, 80, 1);
				func_40(uParam2, 81, 1);
				func_40(uParam2, 90, 1);
				func_40(uParam2, 91, 1);
				break;

			case 2:
				func_42(uParam3, 1, 1);
				func_42(uParam3, 3, 1);
				func_42(uParam3, 4, 1);
				func_42(uParam3, 5, 1);
				func_42(uParam3, 7, 1);
				func_42(uParam3, 10, 1);
				func_42(uParam3, 54, 1);
				func_42(uParam3, 55, 1);
				func_42(uParam3, 56, 1);
				func_42(uParam3, 0, 1);
				func_42(uParam3, 12, 1);
				func_42(uParam3, 13, 1);
				func_42(uParam3, 15, 1);
				func_42(uParam3, 16, 1);
				func_42(uParam3, 48, 1);
				func_42(uParam3, 49, 1);
				func_42(uParam3, 17, 1);
				func_42(uParam3, 18, 1);
				func_42(uParam3, 50, 1);
				func_42(uParam3, 51, 1);
				func_42(uParam3, 52, 1);
				func_42(uParam3, 53, 1);
				func_42(uParam3, 62, 1);
				func_42(uParam3, 38, 1);
				func_42(uParam3, 47, 1);
				func_42(uParam3, 20, 1);
				func_42(uParam3, 21, 1);
				func_42(uParam3, 25, 1);
				func_42(uParam3, 26, 1);
				func_42(uParam3, 27, 1);
				func_42(uParam3, 30, 1);
				func_42(uParam3, 31, 1);
				func_42(uParam3, 32, 1);
				func_42(uParam3, 33, 1);
				func_42(uParam3, 37, 1);
				func_42(uParam3, 39, 1);
				func_40(uParam2, 0, 1);
				func_40(uParam2, 1, 1);
				func_40(uParam2, 2, 1);
				func_40(uParam2, 3, 1);
				func_40(uParam2, 4, 1);
				func_40(uParam2, 5, 1);
				func_40(uParam2, 6, 1);
				func_40(uParam2, 7, 1);
				func_40(uParam2, 8, 1);
				func_40(uParam2, 9, 1);
				func_40(uParam2, 10, 1);
				func_40(uParam2, 53, 1);
				func_40(uParam2, 56, 1);
				func_40(uParam2, 55, 1);
				func_40(uParam2, 11, 1);
				func_40(uParam2, 12, 1);
				func_40(uParam2, 13, 1);
				func_40(uParam2, 14, 1);
				func_40(uParam2, 15, 1);
				func_40(uParam2, 16, 1);
				func_40(uParam2, 47, 1);
				func_40(uParam2, 48, 1);
				func_40(uParam2, 17, 1);
				func_40(uParam2, 18, 1);
				func_40(uParam2, 49, 1);
				func_40(uParam2, 50, 1);
				func_40(uParam2, 51, 1);
				func_40(uParam2, 52, 1);
				func_40(uParam2, 62, 1);
				func_40(uParam2, 37, 1);
				func_40(uParam2, 46, 1);
				func_40(uParam2, 19, 1);
				func_40(uParam2, 20, 1);
				func_40(uParam2, 21, 1);
				func_40(uParam2, 22, 1);
				func_40(uParam2, 54, 1);
				func_40(uParam2, 23, 1);
				func_40(uParam2, 24, 1);
				func_40(uParam2, 26, 1);
				func_40(uParam2, 27, 1);
				func_40(uParam2, 28, 1);
				func_40(uParam2, 29, 1);
				func_40(uParam2, 30, 1);
				func_40(uParam2, 31, 1);
				func_40(uParam2, 32, 1);
				func_40(uParam2, 33, 1);
				func_40(uParam2, 36, 1);
				func_40(uParam2, 38, 1);
				func_40(uParam2, 55, 1);
				func_43(uParam4, 1, 1);
				func_43(uParam4, 2, 1);
				func_43(uParam4, 3, 1);
				func_43(uParam4, 3, 1);
				func_43(uParam4, 4, 1);
				func_43(uParam4, 14, 1);
				func_43(uParam4, 15, 1);
				func_43(uParam4, 16, 1);
				func_43(uParam4, 6, 1);
				func_43(uParam4, 8, 1);
				func_43(uParam4, 9, 1);
				func_43(uParam4, 10, 1);
				func_43(uParam4, 12, 1);
				func_43(uParam4, 13, 1);
				func_43(uParam4, 17, 1);
				func_43(uParam4, 18, 1);
				func_43(uParam4, 19, 1);
				func_43(uParam4, 20, 1);
				func_43(uParam4, 59, 1);
				func_43(uParam4, 60, 1);
				func_43(uParam4, 61, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 62, 1);
				func_43(uParam4, 63, 1);
				func_43(uParam4, 64, 1);
				func_43(uParam4, 65, 1);
				func_43(uParam4, 66, 1);
				func_43(uParam4, 67, 1);
				func_43(uParam4, 68, 1);
				func_43(uParam4, 69, 1);
				func_43(uParam4, 70, 1);
				func_43(uParam4, 71, 1);
				func_43(uParam4, 72, 1);
				func_43(uParam4, 21, 1);
				func_43(uParam4, 22, 1);
				func_43(uParam4, 23, 1);
				func_43(uParam4, 24, 1);
				func_43(uParam4, 25, 1);
				func_43(uParam4, 26, 1);
				func_43(uParam4, 36, 1);
				func_43(uParam4, 46, 1);
				func_43(uParam4, 38, 1);
				func_43(uParam4, 29, 1);
				func_43(uParam4, 28, 1);
				func_43(uParam4, 31, 1);
				func_43(uParam4, 33, 1);
				func_43(uParam4, 34, 1);
				func_43(uParam4, 32, 1);
				func_43(uParam4, 92, 1);
				func_43(uParam4, 93, 1);
				func_43(uParam4, 94, 1);
				func_43(uParam4, 96, 1);
				func_43(uParam4, 97, 1);
				func_43(uParam4, 98, 1);
				func_43(uParam4, 100, 1);
				func_42(uParam3, 65, 1);
				func_42(uParam3, 67, 1);
				func_42(uParam3, 68, 1);
				func_42(uParam3, 69, 1);
				func_42(uParam3, 70, 1);
				func_42(uParam3, 71, 1);
				func_42(uParam3, 72, 1);
				func_42(uParam3, 73, 1);
				func_42(uParam3, 74, 1);
				func_42(uParam3, 75, 1);
				func_42(uParam3, 76, 1);
				func_42(uParam3, 77, 1);
				func_42(uParam3, 78, 1);
				func_42(uParam3, 79, 1);
				func_42(uParam3, 80, 1);
				func_42(uParam3, 81, 1);
				func_42(uParam3, 82, 1);
				func_42(uParam3, 91, 1);
				func_42(uParam3, 92, 1);
				func_40(uParam2, 64, 1);
				func_40(uParam2, 65, 1);
				func_40(uParam2, 66, 1);
				func_40(uParam2, 67, 1);
				func_40(uParam2, 68, 1);
				func_40(uParam2, 69, 1);
				func_40(uParam2, 70, 1);
				func_40(uParam2, 71, 1);
				func_40(uParam2, 72, 1);
				func_40(uParam2, 73, 1);
				func_40(uParam2, 74, 1);
				func_40(uParam2, 75, 1);
				func_40(uParam2, 77, 1);
				func_40(uParam2, 78, 1);
				func_40(uParam2, 79, 1);
				func_40(uParam2, 80, 1);
				func_40(uParam2, 81, 1);
				func_40(uParam2, 90, 1);
				func_40(uParam2, 91, 1);
				break;
			}
			break;

		case 18:
			switch (iParam5) {
			case 0: break;

			case 1:
				func_40(uParam2, 2, 1);
				func_40(uParam2, 20, 1);
				break;

			case 2: break;
			}
			break;

		case 0: break;
		}
		break;

	case 3:
		switch (iParam1) {
		case 0: break;

		case 8:
		case 10:
		case 12:
		case 14:
		case 18:
		case 22:
		case 25:
		case 29:
		case 33:
		case 19:
		case 21: func_39(2, 29, uParam2, uParam3, uParam4, 0, 0); break;

		case 31: func_39(2, 30, uParam2, uParam3, uParam4, 0, 0); break;

		case 16:
		case 26:
		case 30: break;
		}
		break;
	}
}

// Position - 0x9B91
void func_40(var *uParam0, int iParam1, int iParam2) { func_41(uParam0, iParam1, iParam2); }

// Position - 0x9BA3
void func_41(var *uParam0, int iParam1, bool bParam2) {
	int iVar0;

	iVar0 = system::floor(system::to_float(iParam1) / 32f);
	if (bParam2) {
		gameplay::set_bit(&(*uParam0)[iVar0], iParam1 - iVar0 * 32);
	}
	else {
		gameplay::clear_bit(&(*uParam0)[iVar0], iParam1 - iVar0 * 32);
	}
}

// Position - 0x9BE7
void func_42(var *uParam0, int iParam1, int iParam2) { func_41(uParam0, iParam1, iParam2); }

// Position - 0x9BF9
void func_43(var *uParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = system::floor(system::to_float(iParam1) / 32f);
	if (iParam2) {
		gameplay::set_bit(&(*uParam0)[iVar0], iParam1 - 32 * iVar0);
	}
	else {
		gameplay::clear_bit(&(*uParam0)[iVar0], iParam1 - iVar0 * 32);
	}
}

// Position - 0x9C3E
bool func_44(int iParam0, int iParam1) {
	switch (iParam0) {
	case 1:
		switch (iParam1) {
		case 0: return true;
		}
		break;

	case 2:
		switch (iParam1) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 5:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 14:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 26:
		case 25:
		case 24: return true;
		}
		break;

	case 3:
		switch (iParam1) {
		case 0: return true;
		}
		break;
	}
	return false;
}

// Position - 0x9D29
void func_45(float fParam0) {
	func_61(iLocal_141, "SET_DATA_SLOT", fParam0, controls::get_control_instructional_button(0, 172, 1), "CELL_BORDER");
}

// Position - 0x9D49
void func_46(float fParam0) {
	if (Global_1760863 == 1) {
		fParam0 = -1f;
	}
	func_61(iLocal_141, "SET_DATA_SLOT", fParam0, controls::get_control_instructional_button(0, 173, 1), "CELL_FILTER");
}

// Position - 0x9D74
void func_47() {
	if (controls::_is_input_disabled(2) || gameplay::is_orbis_version()) {
		func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::get_control_instructional_button(0, 184, 1),
				"CELL_SP_2NP_XB");
	}
	else {
		func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::get_control_instructional_button(0, 184, 1),
				"CELL_SP_2NP_XB");
	}
	func_61(iLocal_141, "SET_DATA_SLOT", 3f, controls::get_control_instructional_button(0, 183, 1), "CELL_GRID");
	func_61(iLocal_141, "SET_DATA_SLOT", 4f, controls::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
	func_46(5f);
	func_45(6f);
	func_48(7f);
	func_28(8f);
	if (iLocal_62) {
		func_61(iLocal_141, "SET_DATA_SLOT", 9f, controls::get_control_instructional_button(2, 185, 1), "CELL_DEPTH");
	}
	if (!func_57(14)) {
		if (Global_69702 == 0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("pi_menu")) > 0 &&
			func_56()) {
			graphics::_push_scaleform_movie_function(iLocal_140, "SET_FOCUS_LOCK");
			graphics::_push_scaleform_movie_function_parameter_bool(1);
			graphics::begin_text_command_scaleform_string("CELL_ACTTL");
			ui::add_text_component_substring_player_name(ui::_get_label_text(&Global_2596034));
			graphics::end_text_command_scaleform_string();
			graphics::_push_scaleform_movie_function_parameter_bool(0);
			graphics::_pop_scaleform_movie_function_void();
		}
	}
}

// Position - 0x9E81
void func_48(float fParam0) {
	func_61(iLocal_141, "SET_DATA_SLOT", fParam0, controls::get_control_instructional_button(0, 175, 1), "CELL_ACCYC");
}

// Position - 0x9EA1
void func_49() {
	func_127(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_127(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_61(iLocal_141, "SET_DATA_SLOT", 3f, controls::get_control_instructional_button(0, 39, 1), "CELL_284");
	func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
	func_61(iLocal_141, "SET_DATA_SLOT", 1f, controls::get_control_instructional_button(0, 177, 1), "CELL_281");
	func_61(iLocal_141, "SET_DATA_SLOT", 0f, controls::get_control_instructional_button(0, 176, 1), "CELL_280");
	graphics::_push_scaleform_movie_function(iLocal_141, "SET_MAX_WIDTH");
	graphics::_push_scaleform_movie_function_parameter_float(fLocal_77);
	graphics::_pop_scaleform_movie_function_void();
	func_127(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

// Position - 0x9F7A
void func_50() {
	if (iLocal_156 == 1) {
		func_51();
		return;
	}
	if (iLocal_133 == 0 && iLocal_134 == 0) {
		func_127(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_127(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_61(iLocal_141, "SET_DATA_SLOT", 0f, controls::get_control_instructional_button(0, 177, 1), "CELL_281");
		func_61(iLocal_141, "SET_DATA_SLOT", 1f, controls::get_control_instructional_button(2, 179, 1), "CELL_287");
		if (iLocal_131) {
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) ||
					ped::get_ped_parachute_state(player::player_ped_id()) == 2) {
					if (controls::_is_input_disabled(2) || gameplay::is_orbis_version()) {
						func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::get_control_instructional_button(0, 184, 1),
								"CELL_SP_2NP_XB");
					}
					else {
						func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::get_control_instructional_button(0, 184, 1),
								"CELL_SP_2NP_XB");
					}
					if (func_135()) {
						func_46(3f);
						func_45(4f);
					}
				}
				else if (Global_69702 == 0 &&
						 script::_get_number_of_instances_of_script_with_name_hash(joaat("pi_menu")) > 0 && func_56()) {
					func_47();
				}
				else {
					if (controls::_is_input_disabled(2) || gameplay::is_orbis_version()) {
						func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::get_control_instructional_button(0, 184, 1),
								"CELL_SP_2NP_XB");
					}
					else {
						func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::get_control_instructional_button(0, 184, 1),
								"CELL_SP_2NP_XB");
					}
					func_61(iLocal_141, "SET_DATA_SLOT", 3f, controls::get_control_instructional_button(2, 183, 1),
							"CELL_GRID");
					func_61(iLocal_141, "SET_DATA_SLOT", 4f, controls::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
					if (func_135()) {
						func_46(5f);
						func_45(6f);
						if (func_29(1)) {
							func_28(7f);
							if (iLocal_62) {
								func_61(iLocal_141, "SET_DATA_SLOT", 8f,
										controls::get_control_instructional_button(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (iLocal_62) {
							func_61(iLocal_141, "SET_DATA_SLOT", 7f,
									controls::get_control_instructional_button(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) ||
				ped::get_ped_parachute_state(player::player_ped_id()) == 2) {
				if (ped::get_ped_parachute_state(player::player_ped_id()) != 2) {
					func_61(iLocal_141, "SET_DATA_SLOT", 3f, controls::get_control_instructional_button(2, 183, 1),
							"CELL_GRID");
					func_61(iLocal_141, "SET_DATA_SLOT", 4f, controls::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
					func_61(iLocal_141, "SET_DATA_SLOT", 5f, controls::get_control_instructional_button(0, 39, 1),
							"CELL_284");
					if (func_135()) {
						func_46(6f);
						func_45(7f);
						func_61(iLocal_141, "SET_DATA_SLOT", 8f, controls::get_control_instructional_button(2, 185, 1),
								"CELL_DEPTH");
					}
				}
				else {
					func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
					if (func_135()) {
						func_46(3f);
						func_45(4f);
						func_61(iLocal_141, "SET_DATA_SLOT", 5f, controls::get_control_instructional_button(2, 185, 1),
								"CELL_DEPTH");
					}
				}
			}
			else if (ped::get_ped_parachute_state(player::player_ped_id()) != 2) {
				if (controls::_is_input_disabled(2) || gameplay::is_orbis_version()) {
					func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::get_control_instructional_button(0, 184, 1),
							"CELL_SP_1NP_XB");
				}
				else {
					func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::get_control_instructional_button(0, 184, 1),
							"CELL_SP_1NP_XB");
				}
				func_61(iLocal_141, "SET_DATA_SLOT", 4f, controls::get_control_instructional_button(2, 183, 1),
						"CELL_GRID");
				func_61(iLocal_141, "SET_DATA_SLOT", 5f, controls::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
				func_61(iLocal_141, "SET_DATA_SLOT", 6f, controls::get_control_instructional_button(0, 39, 1),
						"CELL_284");
				if (func_135()) {
					func_46(7f);
					func_45(8f);
					if (iLocal_63) {
						func_61(iLocal_141, "SET_DATA_SLOT", 3f, controls::get_control_instructional_button(0, 182, 1),
								"CELL_FOCUS");
					}
					func_61(iLocal_141, "SET_DATA_SLOT", 9f, controls::get_control_instructional_button(2, 185, 1),
							"CELL_DEPTH");
				}
				else {
					if (controls::_is_input_disabled(2) || gameplay::is_orbis_version()) {
						func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::get_control_instructional_button(0, 184, 1),
								"CELL_SP_1NP_XB");
					}
					else {
						func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::get_control_instructional_button(0, 184, 1),
								"CELL_SP_1NP_XB");
					}
					func_61(iLocal_141, "SET_DATA_SLOT", 3f, controls::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
					if (func_135()) {
						func_46(4f);
						func_45(5f);
						func_61(iLocal_141, "SET_DATA_SLOT", 6f, controls::get_control_instructional_button(2, 185, 1),
								"CELL_DEPTH");
					}
				}
			}
		}
		graphics::_push_scaleform_movie_function(iLocal_141, "SET_MAX_WIDTH");
		graphics::_push_scaleform_movie_function_parameter_float(fLocal_77);
		graphics::_pop_scaleform_movie_function_void();
		func_127(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

// Position - 0xA411
void func_51() {
	func_127(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_127(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_61(iLocal_141, "SET_DATA_SLOT", 3f, controls::get_control_instructional_button(0, 39, 1), "CELL_284");
	func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
	func_61(iLocal_141, "SET_DATA_SLOT", 1f, controls::get_control_instructional_button(2, 179, 1), "CELL_287");
	func_61(iLocal_141, "SET_DATA_SLOT", 0f, controls::get_control_instructional_button(0, 177, 1), "CELL_281");
	graphics::_push_scaleform_movie_function(iLocal_141, "SET_MAX_WIDTH");
	graphics::_push_scaleform_movie_function_parameter_float(fLocal_77);
	graphics::_pop_scaleform_movie_function_void();
	func_127(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

// Position - 0xA4EA
void func_52() {
	if (iLocal_131) {
		cam::set_gameplay_cam_relative_pitch(fLocal_73, 1065353216);
		cam::set_gameplay_cam_relative_heading(fLocal_74);
	}
}

// Position - 0xA508
void func_53(int iParam0) {
	if (iLocal_156 == 1) {
		return;
	}
	if (Global_1633501.f_102722 == 1) {
	}
	else if (Global_1633501.f_102723 == 1) {
	}
	else {
		mobile::_disable_phone_this_frame(iParam0);
	}
}

// Position - 0xA541
void func_54() {
	if (iLocal_61 == 1) {
		if (gameplay::are_strings_equal(sLocal_19[Global_2594042], "phone_cam12DUMMY")) {
			mobile::_0xA2CCBE62CD4C91A4(0);
			unk_0x375A706A5C2FD084(0);
		}
		else {
			mobile::_0xA2CCBE62CD4C91A4(1);
			unk_0x375A706A5C2FD084(1);
		}
	}
}

// Position - 0xA579
void func_55() {
	func_127(iLocal_140, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_135()) {
		if (Global_1760863 == 0) {
			graphics::set_timecycle_modifier("phone_cam");
		}
	}
}

// Position - 0xA5B8
int func_56() {
	if (func_57(14)) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[0 /*29*/] ||
				entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[1 /*29*/] ||
				entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[2 /*29*/]) {
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
	return 1;
}

// Position - 0xA634
bool func_57(int iParam0) { return Global_35781 == iParam0; }

// Position - 0xA642
void func_58(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0xA654
void func_59() {
	if (controls::_is_input_disabled(2) || gameplay::is_orbis_version()) {
		func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::get_control_instructional_button(0, 184, 1),
				"CELL_SP_2NP_XB");
	}
	else {
		func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::get_control_instructional_button(0, 184, 1),
				"CELL_SP_2NP_XB");
	}
	if (controls::_is_input_disabled(2)) {
		func_61(iLocal_141, "SET_DATA_SLOT", 3f, controls::get_control_instructional_button(0, 30, 1),
				"CELL_RT_RSTICK");
		func_61(iLocal_141, "SET_DATA_SLOT", 4f, controls::_0x80C2FD58D720C801(2, 1, 1), "CELL_RT_LSTICK");
	}
	else {
		func_61(iLocal_141, "SET_DATA_SLOT", 3f, controls::get_control_instructional_button(0, 1, 1), "CELL_RT_RSTICK");
		func_61(iLocal_141, "SET_DATA_SLOT", 4f, controls::_0x80C2FD58D720C801(2, 0, 1), "CELL_RT_LSTICK");
	}
}

// Position - 0xA703
void func_60() {
	if (controls::_is_input_disabled(2) || gameplay::is_orbis_version()) {
		func_61(iLocal_141, "SET_DATA_SLOT", 3f, controls::get_control_instructional_button(0, 184, 1),
				"CELL_SP_2NP_XB");
	}
	else {
		func_61(iLocal_141, "SET_DATA_SLOT", 3f, controls::get_control_instructional_button(0, 184, 1),
				"CELL_SP_2NP_XB");
	}
	func_61(iLocal_141, "SET_DATA_SLOT", 4f, controls::_0x80C2FD58D720C801(0, 1, 1), "CELL_LT_RSTICK");
	if (func_57(14)) {
		func_61(iLocal_141, "SET_DATA_SLOT", 5f, controls::get_control_instructional_button(2, 30, 1),
				"CELL_LT_LSTICK");
	}
	else {
		func_61(iLocal_141, "SET_DATA_SLOT", 5f, controls::get_control_instructional_button(0, 39, 1),
				"CELL_LT_LSTICKZ");
		func_61(iLocal_141, "SET_DATA_SLOT", 6f, controls::get_control_instructional_button(2, 30, 1),
				"CELL_LT_LSTICK");
	}
}

// Position - 0xA7B5
void func_61(int iParam0, char *sParam1, float fParam2, char *sParam3, char *sParam4) {
	graphics::_push_scaleform_movie_function(iParam0, sParam1);
	graphics::_push_scaleform_movie_function_parameter_int(system::round(fParam2));
	if (!gameplay::is_string_null_or_empty(sParam3)) {
		func_62(sParam3);
	}
	if (!gameplay::is_string_null_or_empty(sParam4)) {
		func_58(sParam4);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0xA7F4
void func_62(char *sParam0) { graphics::_0xE83A3E3557A56640(sParam0); }

// Position - 0xA802
void func_63() {
	if (Global_69702) {
		switch (Global_16862) {
		case 0:
			if (controls::_is_input_disabled(2)) {
				func_123("CELL_CAM_SELFIE_0_KM", -1);
			}
			else {
				func_123("CELL_CAM_SELFIE_0", -1);
			}
			Global_16862++;
			break;

		case 1:
			if (!ui::is_help_message_being_displayed()) {
				if (controls::_is_input_disabled(2)) {
					func_123("CELL_CAM_SELFIE_1_KM", -1);
				}
				else {
					func_123("CELL_CAM_SELFIE_1", -1);
				}
				Global_16862++;
			}
			break;

		case 2: break;
		}
	}
	else {
		switch (Global_16861) {
		case 0:
			if (controls::_is_input_disabled(2)) {
				func_123("CELL_CAM_SELFIE_0_KM", -1);
			}
			else {
				func_123("CELL_CAM_SELFIE_0", -1);
			}
			Global_16861++;
			break;

		case 1:
			if (!ui::is_help_message_being_displayed()) {
				if (controls::_is_input_disabled(2)) {
					func_123("CELL_CAM_SELFIE_1_KM", -1);
				}
				else {
					func_123("CELL_CAM_SELFIE_1", -1);
				}
				Global_16861++;
			}
			break;

		case 2: break;
		}
	}
}

// Position - 0xA8FE
void func_64() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;

	if (controls::_is_input_disabled(2)) {
		iVar9 = 179;
		iVar10 = 21;
	}
	else {
		iVar9 = 228;
		iVar10 = 229;
	}
	if (controls::is_control_pressed(2, iVar10) && !controls::is_control_pressed(2, iVar9)) {
		controls::disable_control_action(0, 2, 1);
		controls::disable_control_action(0, 1, 1);
		iVar0 = system::floor(controls::_0x4F8A26A890FD62FB(0, 30)) * 127;
		iVar1 = system::floor(controls::_0x4F8A26A890FD62FB(0, 31)) * 127;
		iVar2 = system::floor(controls::_0x4F8A26A890FD62FB(0, 1)) * 127;
		iVar3 = system::floor(controls::_0x4F8A26A890FD62FB(0, 2)) * 127;
		if (controls::_is_input_disabled(2)) {
			if (gameplay::absi(iVar0) > 28 || gameplay::absi(iVar1) > 28) {
				fVar6 = IntToFloat(iVar0) / 128f * fLocal_164;
			}
		}
		else if (gameplay::absi(iVar2) > 28 || gameplay::absi(iVar3) > 28) {
			fVar6 = IntToFloat(iVar2) / 128f * fLocal_164;
		}
		if (controls::_is_input_disabled(2)) {
			fVar7 = controls::_0x4F8A26A890FD62FB(0, 290);
			fVar8 = controls::_0x4F8A26A890FD62FB(0, 291);
			if (controls::_0xE1615EC03B3BB4FD()) {
				fVar8 *= -1f;
			}
			fVar4 += fVar7;
			fVar5 -= fVar8;
		}
		else if (gameplay::absi(iVar0) > 28 || gameplay::absi(iVar1) > 28) {
			fVar4 = IntToFloat(iVar0) / 128f * fLocal_164;
			fVar5 = IntToFloat(-iVar1) / 128f * fLocal_164;
		}
		func_67(fVar5);
		func_66(fVar6);
		func_65(fVar4);
	}
	else if (!controls::is_control_pressed(2, iVar9)) {
		controls::enable_control_action(0, 2, 1);
		controls::enable_control_action(0, 1, 1);
	}
}

// Position - 0xAA7D
void func_65(float fParam0) {
	fLocal_161 += fParam0;
	if (fLocal_161 > 1f) {
		fLocal_161 = 1f;
	}
	else if (fLocal_161 < -1f) {
		fLocal_161 = -1f;
	}
	mobile::_0xD6ADE981781FCA09(fLocal_161);
}

// Position - 0xAAA9
void func_66(float fParam0) {
	fLocal_162 += fParam0;
	if (fLocal_162 > 1f) {
		fLocal_162 = 1f;
	}
	else if (fLocal_162 < -1f) {
		fLocal_162 = -1f;
	}
	mobile::_0xF1E22DC13F5EEBAD(fLocal_162);
}

// Position - 0xAAD5
void func_67(float fParam0) {
	fLocal_163 += fParam0;
	if (fLocal_163 > 1f) {
		fLocal_163 = 1f;
	}
	else if (fLocal_163 < -1f) {
		fLocal_163 = -1f;
	}
	mobile::_0x466DA42C89865553(fLocal_163);
}

// Position - 0xAB01
void func_68() {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;

	if (controls::_is_input_disabled(2)) {
		iVar10 = 179;
		iVar11 = 178;
		if (controls::is_control_pressed(2, iVar10)) {
			if (controls::is_control_just_pressed(2, 178)) {
				mobile::_0x53F4892D18EC90A4(0.5f);
				mobile::_0x3117D84EFA60F77B(0.85f);
				mobile::_0xAC2890471901861C(0.5f);
				mobile::_0x15E69E2802C24B8D(-0.25f);
				fLocal_157 = 0.5f;
				fLocal_158 = 0.85f;
				fLocal_159 = 0.5f;
				fLocal_160 = -0.25f;
			}
		}
	}
	else {
		iVar10 = 228;
		iVar11 = 229;
	}
	if (controls::is_control_pressed(2, iVar10) && !controls::is_control_pressed(2, iVar11)) {
		if (controls::is_control_just_pressed(2, 178)) {
			mobile::_0x53F4892D18EC90A4(0.5f);
			mobile::_0x3117D84EFA60F77B(0.85f);
			mobile::_0xAC2890471901861C(0.5f);
			mobile::_0x15E69E2802C24B8D(-0.25f);
			fLocal_157 = 0.5f;
			fLocal_158 = 0.85f;
			fLocal_159 = 0.5f;
			fLocal_160 = -0.25f;
		}
		controls::disable_control_action(0, 2, 1);
		controls::disable_control_action(0, 1, 1);
		iVar0 = system::floor(controls::_0x4F8A26A890FD62FB(0, 30)) * 127;
		iVar1 = system::floor(controls::_0x4F8A26A890FD62FB(0, 31)) * 127;
		iVar2 = system::floor(controls::_0x4F8A26A890FD62FB(0, 1)) * 127;
		iVar3 = system::floor(controls::_0x4F8A26A890FD62FB(0, 2)) * 127;
		if (controls::_is_input_disabled(2)) {
			iVar1 = system::floor(controls::_0x4F8A26A890FD62FB(0, 39)) * 127;
			fVar8 = controls::_0x4F8A26A890FD62FB(0, 290);
			fVar9 = controls::_0x4F8A26A890FD62FB(0, 291);
			if (controls::_0xE1615EC03B3BB4FD()) {
				fVar9 *= -1f;
			}
			fVar6 += fVar8;
			fVar7 -= fVar9;
		}
		else if (gameplay::absi(iVar2) > 15 || gameplay::absi(iVar3) > 15) {
			fVar6 = IntToFloat(iVar2) / 128f * fLocal_164;
			fVar7 = IntToFloat(-iVar3) / 128f * fLocal_164;
		}
		if (gameplay::absi(iVar0) > 28 || gameplay::absi(iVar1) > 28) {
			fVar4 = IntToFloat(iVar0) / 128f * fLocal_164;
			fVar5 = IntToFloat(iVar1) / 128f * fLocal_164;
		}
		func_72(fVar6);
		func_71(fVar7);
		func_70(fVar4);
		if (!func_57(14)) {
			func_69(fVar5);
		}
	}
	else if (!controls::is_disabled_control_pressed(2, iVar11)) {
		controls::enable_control_action(0, 2, 1);
		controls::enable_control_action(0, 1, 1);
	}
	if (!controls::is_disabled_control_pressed(2, iVar10) && !controls::is_disabled_control_pressed(2, iVar11)) {
		iVar0 = system::floor(controls::_0x4F8A26A890FD62FB(0, 30)) * 127;
		iVar1 = system::floor(controls::_0x4F8A26A890FD62FB(0, 31)) * 127;
		iVar2 = system::floor(controls::_0x4F8A26A890FD62FB(0, 290)) * 127;
		iVar3 = system::floor(controls::_0x4F8A26A890FD62FB(0, 291)) * 127;
		iVar2 = system::floor(controls::_0x4F8A26A890FD62FB(0, 294)) * 127;
		iVar2 = system::floor(controls::_0x4F8A26A890FD62FB(0, 295)) * 127;
		iVar3 = system::floor(controls::_0x4F8A26A890FD62FB(0, 292)) * 127;
		iVar3 = system::floor(controls::_0x4F8A26A890FD62FB(0, 293)) * 127;
		if (gameplay::absi(iVar2) > 28 || gameplay::absi(iVar3) > 28) {
			fVar6 = IntToFloat(iVar2) / 128f * fLocal_164;
			fVar7 = IntToFloat(-iVar3) / 128f * fLocal_164;
		}
		if (gameplay::absi(iVar0) > 28 || gameplay::absi(iVar1) > 28) {
			fVar4 = IntToFloat(iVar0) / 128f * fLocal_164;
			fVar5 = IntToFloat(iVar1) / 128f * fLocal_164;
		}
		if (!func_57(14)) {
			func_69(fVar5);
		}
	}
}

// Position - 0xAE2C
void func_69(float fParam0) {
	fLocal_159 += fParam0;
	if (fLocal_159 > 1f) {
		fLocal_159 = 1f;
	}
	else if (fLocal_159 < 0f) {
		fLocal_159 = 0f;
	}
	mobile::_0xAC2890471901861C(fLocal_159);
}

// Position - 0xAE58
void func_70(float fParam0) {
	fLocal_160 += fParam0;
	if (fLocal_160 > 1f) {
		fLocal_160 = 1f;
	}
	else if (fLocal_160 < -1f) {
		fLocal_160 = -1f;
	}
	mobile::_0x15E69E2802C24B8D(fLocal_160);
}

// Position - 0xAE84
void func_71(float fParam0) {
	fLocal_158 += fParam0;
	if (fLocal_158 > 1.5f) {
		fLocal_158 = 1.5f;
	}
	else if (fLocal_158 < 0.5f) {
		fLocal_158 = 0.5f;
	}
	mobile::_0x3117D84EFA60F77B(fLocal_158);
}

// Position - 0xAEC0
void func_72(float fParam0) {
	fLocal_157 += fParam0;
	if (fLocal_157 > 2f) {
		fLocal_157 = 2f;
	}
	else if (fLocal_157 < -1.7f) {
		fLocal_157 = -1.7f;
	}
	mobile::_0x53F4892D18EC90A4(fLocal_157);
}

// Position - 0xAEF4
void func_73() {
	if (Global_69962 || Global_69963) {
		return;
	}
	if (iLocal_124 == 0) {
		if (!iLocal_150) {
			if (Global_1633501.f_102722 == 0 && Global_1633501.f_102723 == 0) {
				graphics::draw_scaleform_movie_fullscreen(iLocal_141, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_127 == 0) {
		if (Global_14385) {
			if (Global_14604) {
				if (iLocal_150 == 0) {
					if (Global_14443.f_1 > 3) {
					}
				}
			}
		}
		else {
			func_75(255, 255, 255, 255);
			func_74(0.059f, 0.644f, "CELL_284", 0);
			func_75(255, 255, 255, 255);
			func_74(0.165f, 0.644f, "CELL_285", 0);
			func_75(255, 255, 255, 255);
			func_74(0.275f, 0.75f, "CELL_280", 0);
			func_75(255, 255, 255, 255);
			func_74(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_14385) {
	}
	else {
		func_75(255, 255, 255, 255);
		func_74(0.275f, 0.75f, "CELL_287", 0);
		func_75(255, 255, 255, 255);
		func_74(0.275f, 0.79f, "CELL_286", 0);
		func_75(255, 255, 255, 255);
		func_74(0.275f, 0.83f, "CELL_281", 0);
	}
}

// Position - 0xB043
void func_74(float fParam0, float fParam1, char *sParam2, int iParam3) {
	ui::begin_text_command_display_text(sParam2);
	ui::end_text_command_display_text(fParam0, fParam1, iParam3);
}

// Position - 0xB05B
void func_75(int iParam0, int iParam1, int iParam2, int iParam3) {
	ui::set_text_scale(0.4f, 0.4f);
	ui::set_text_dropshadow(0, 0, 0, 0, 0);
	ui::set_text_edge(1, 0, 0, 0, 205);
	ui::set_text_proportional(1);
	ui::set_text_font(0);
	ui::set_text_colour(iParam0, iParam1, iParam2, iParam3);
}

// Position - 0xB09A
void func_76() {
	cam::set_gameplay_cam_relative_pitch(fLocal_75, 1065353216);
	cam::set_gameplay_cam_relative_heading(fLocal_76);
}

// Position - 0xB0B3
void func_77() {
	controls::disable_control_action(0, 25, 1);
	controls::disable_control_action(0, 44, 1);
	controls::disable_control_action(0, 3, 1);
	controls::disable_control_action(0, 4, 1);
	controls::disable_control_action(0, 5, 1);
	controls::disable_control_action(0, 6, 1);
	controls::disable_control_action(0, 1, 1);
	controls::disable_control_action(0, 2, 1);
	controls::disable_control_action(0, 39, 1);
	controls::disable_control_action(0, 47, 1);
	controls::disable_control_action(0, 56, 1);
}

// Position - 0xB10D
void func_78() {
	vLocal_87 = {Global_14396[Global_14388 /*3*/]};
	if (Global_14385) {
		if (func_81()) {
			mobile::get_mobile_phone_position(&vLocal_93);
			vLocal_87 = {vLocal_93};
			iLocal_121 = 0;
			iLocal_122 = 0;
			iLocal_123 = 0;
		}
		func_1(1);
		if (iLocal_121) {
			vLocal_81.x += 12f;
		}
		if (vLocal_81.x > vLocal_87.x || vLocal_81.x == vLocal_87.x) {
			vLocal_81.x = vLocal_87.x;
			iLocal_121 = 0;
		}
		if (iLocal_122) {
			vLocal_81.y -= 6f;
		}
		if (gameplay::is_bit_set(Global_2315, 4)) {
			if (vLocal_81.y < vLocal_87.y + 15f || vLocal_81.y == vLocal_87.y + 15f) {
				vLocal_81.y = vLocal_87.y + 15f;
				iLocal_122 = 0;
			}
		}
		else if (vLocal_81.y < vLocal_87.y + 10f || vLocal_81.y == vLocal_87.y + 10f) {
			vLocal_81.y = vLocal_87.y + 10f;
			iLocal_122 = 0;
		}
		if (iLocal_123) {
			vLocal_81.z -= 10f;
		}
		if (vLocal_81.z < vLocal_87.z || vLocal_81.z == vLocal_87.z) {
			vLocal_81.z = vLocal_87.z;
			iLocal_123 = 0;
		}
		if (func_81() == 0) {
			if (gameplay::is_bit_set(Global_2315, 4)) {
				vLocal_87.y += 15f;
			}
			else {
				vLocal_87.y += 10f;
			}
			vLocal_87.x -= 14f;
		}
		else {
			vLocal_87 = {Global_14389[Global_14388 /*3*/]};
		}
		vLocal_81 = {vLocal_87};
		iLocal_123 = 0;
		iLocal_122 = 0;
		iLocal_121 = 0;
		mobile::set_mobile_phone_position(vLocal_81);
		if (iLocal_121 == 0 && iLocal_122 == 0 && iLocal_123 == 0) {
			iLocal_124 = 0;
			vLocal_84 = {-90.3f, 0f, 90f};
			mobile::set_mobile_phone_rotation(vLocal_84, 0);
			if (!gameplay::is_bit_set(G_SleepModeOnOn25, 22)) {
				if (gameplay::is_bit_set(G_SleepModeOnOn25, 28)) {
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_80();
				}
				else {
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_79();
				}
				iLocal_100 = 2;
			}
		}
	}
}

// Position - 0xB30C
void func_79() {
	func_127(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_127(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (gameplay::is_bit_set(G_SleepModeOffOn11, 28)) {
		func_61(iLocal_141, "SET_DATA_SLOT", 0f, controls::get_control_instructional_button(0, 176, 1), "CELL_286");
	}
	else {
		func_61(iLocal_141, "SET_DATA_SLOT", 1f, controls::get_control_instructional_button(2, 178, 1), "CELL_277");
		func_61(iLocal_141, "SET_DATA_SLOT", 0f, controls::get_control_instructional_button(0, 176, 1), "CELL_GALSAVE");
	}
	graphics::_push_scaleform_movie_function(iLocal_141, "SET_MAX_WIDTH");
	graphics::_push_scaleform_movie_function_parameter_float(fLocal_77);
	graphics::_pop_scaleform_movie_function_void();
	func_127(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

// Position - 0xB3DE
void func_80() {
	func_127(iLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_127(iLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (gameplay::is_bit_set(G_SleepModeOffOn11, 28)) {
		func_61(iLocal_141, "SET_DATA_SLOT", 1f, controls::get_control_instructional_button(2, 179, 1), "CELL_287");
		func_61(iLocal_141, "SET_DATA_SLOT", 0f, controls::get_control_instructional_button(0, 176, 1), "CELL_286");
	}
	else {
		func_61(iLocal_141, "SET_DATA_SLOT", 2f, controls::get_control_instructional_button(2, 179, 1), "CELL_287");
		func_61(iLocal_141, "SET_DATA_SLOT", 1f, controls::get_control_instructional_button(2, 178, 1), "CELL_277");
		func_61(iLocal_141, "SET_DATA_SLOT", 0f, controls::get_control_instructional_button(0, 176, 1), "CELL_GALSAVE");
	}
	graphics::_push_scaleform_movie_function(iLocal_141, "SET_MAX_WIDTH");
	graphics::_push_scaleform_movie_function_parameter_float(fLocal_77);
	graphics::_pop_scaleform_movie_function_void();
	func_127(iLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

// Position - 0xB4DE
int func_81() {
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
		if (func_57(14)) {
			return 0;
		}
		if (ped::is_ped_in_cover(player::player_ped_id(), 0)) {
			return 0;
		}
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			if (!cam::_is_in_vehicle_cam_disabled()) {
				if (entity::is_entity_in_water(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0))) {
					return 0;
				}
			}
		}
		if (ped::is_ped_swimming(player::player_ped_id()) ||
			ped::is_ped_swimming_under_water(player::player_ped_id()) ||
			player::is_player_climbing(player::player_id()) ||
			ped::is_ped_hanging_on_to_vehicle(player::player_ped_id())) {
			return 0;
		}
		if (Global_100748) {
			return 0;
		}
	}
	if (Global_69702) {
		return 0;
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
				return 1;
			}
			else {
				return 0;
			}
		}
		else {
			return 1;
		}
	}
	return 0;
}

// Position - 0xB705
void func_82() {
	controls::disable_control_action(0, 47, 1);
	controls::set_input_exclusive(0, Global_14413);
	vLocal_84 = {Global_14403};
	vLocal_87 = {Global_14396[Global_14388 /*3*/]};
	if (func_81()) {
		mobile::get_mobile_phone_rotation(&vLocal_90, 0);
		vLocal_84 = {vLocal_90};
		mobile::get_mobile_phone_position(&vLocal_93);
		vLocal_87 = {vLocal_93};
		iLocal_118 = 0;
		iLocal_119 = 0;
		iLocal_120 = 0;
		iLocal_121 = 0;
		iLocal_122 = 0;
		iLocal_123 = 0;
	}
	if (Global_14385) {
		func_127(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_53(0);
		iLocal_131 = 0;
		if (gameplay::is_bit_set(G_SleepModeOnOn25, 30)) {
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			func_83();
		}
		if (iLocal_121) {
			if (gameplay::is_bit_set(G_SleepModeOnOn25, 9)) {
				vLocal_81.x += 2f;
			}
			else {
				vLocal_81.x += 12f;
			}
		}
		if (vLocal_81.x > vLocal_87.x || vLocal_81.x == vLocal_87.x) {
			vLocal_81.x = vLocal_87.x;
			iLocal_121 = 0;
		}
		if (iLocal_122) {
			vLocal_81.y -= 6f;
		}
		if (vLocal_81.y < vLocal_87.y || vLocal_81.y == vLocal_87.y) {
			vLocal_81.y = vLocal_87.y;
			iLocal_122 = 0;
		}
		if (iLocal_123) {
			vLocal_81.z -= 10f;
		}
		if (vLocal_81.z < vLocal_87.z || vLocal_81.z == vLocal_87.z) {
			vLocal_81.z = vLocal_87.z;
			iLocal_123 = 0;
		}
		if (iLocal_123 == 0) {
			if (iLocal_118) {
				vLocal_78.x++;
			}
			if (vLocal_78.x > vLocal_84.x || vLocal_78.x == vLocal_84.x) {
				vLocal_78.x = vLocal_84.x;
				iLocal_118 = 0;
			}
			if (iLocal_119) {
				vLocal_78.y -= 2f;
			}
			if (vLocal_78.y < vLocal_84.y || vLocal_78.y == vLocal_84.y) {
				vLocal_78.y = vLocal_84.y;
				iLocal_119 = 0;
			}
			if (iLocal_120) {
				vLocal_78.z -= 14f;
			}
			if (vLocal_78.z < vLocal_84.z || vLocal_78.z == vLocal_84.z) {
				vLocal_78.z = vLocal_84.z;
				iLocal_120 = 0;
			}
		}
		if (iLocal_126) {
			vLocal_78 = {vLocal_84};
			vLocal_81 = {vLocal_87};
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			if (func_81() == 0) {
				mobile::set_mobile_phone_rotation(vLocal_78, 0);
				mobile::set_mobile_phone_position(vLocal_81);
			}
			func_90(0, 1);
		}
		else if (func_81() == 0) {
			mobile::set_mobile_phone_rotation(vLocal_78, 0);
			mobile::set_mobile_phone_position(vLocal_81);
		}
		if (iLocal_118 == 0 && iLocal_119 == 0 && iLocal_120 == 0) {
			func_83();
		}
	}
	else {
		if (iLocal_118) {
			vLocal_78.x++;
		}
		if (vLocal_78.x > vLocal_84.x || vLocal_78.x == vLocal_84.x) {
			iLocal_118 = 0;
		}
		if (iLocal_119) {
			vLocal_78.y -= 2f;
		}
		if (vLocal_78.y < vLocal_84.y || vLocal_78.y == vLocal_84.y) {
			iLocal_119 = 0;
		}
		if (iLocal_120) {
			vLocal_78.z -= 7f;
		}
		if (vLocal_78.z < vLocal_84.z || vLocal_78.z == vLocal_84.z) {
			iLocal_120 = 0;
		}
		if (iLocal_118 == 0 && iLocal_119 == 0 && iLocal_120 == 0) {
			func_83();
		}
	}
	mobile::set_mobile_phone_rotation(vLocal_78, 0);
}

// Position - 0xBA0F
void func_83() {
	func_1(0);
	if (func_81() == 0) {
		if (gameplay::is_bit_set(G_SleepModeOnOn25, 30)) {
			mobile::set_mobile_phone_position(Global_14389[Global_14388 /*3*/]);
		}
		else {
			mobile::set_mobile_phone_position(Global_14396[Global_14388 /*3*/]);
		}
		vLocal_78 = {vLocal_84};
		mobile::set_mobile_phone_rotation(vLocal_78, 0);
	}
	Global_16778 = 0;
	func_93(0, 0);
	func_97(0);
	iLocal_115 = 0;
	func_92();
	Global_14430 = 1;
	Global_16781 = 0;
	if (Global_14443.f_1 > 4) {
		Global_14443.f_1 = 6;
		Global_14421 = 1;
		func_84();
	}
	if (graphics::has_scaleform_movie_loaded(iLocal_140)) {
		func_126(iLocal_140, "SHUTDOWN_MOVIE");
	}
	system::wait(0);
	unk1::_0xEB2D525B57F42B40();
	graphics::set_scaleform_movie_as_no_longer_needed(&iLocal_141);
	graphics::set_scaleform_movie_as_no_longer_needed(&iLocal_140);
	if (Global_14606 == 1) {
		gameplay::set_bit(&G_SleepModeOnOn25, 17);
	}
	else {
		gameplay::clear_bit(&G_SleepModeOnOn25, 17);
	}
	gameplay::clear_bit(&G_SleepModeOnOn25, 18);
	gameplay::clear_bit(&G_SleepModeOnOn25, 21);
	ui::clear_floating_help(0, 1);
	gameplay::clear_bit(&Global_2315, 3);
	gameplay::clear_bit(&Global_2595318, 3);
	gameplay::set_game_paused(0);
	player::set_player_can_do_drive_by(player::player_id(), 1);
	ui::reset_hud_component_values(15);
	Global_16782 = 1;
	audio::stop_sound(iLocal_112);
	audio::release_sound_id(iLocal_112);
	ui::_remove_loading_prompt();
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		ped::set_facial_idle_anim_override(player::player_ped_id(), "Mood_Normal_1", 0);
		ped::clear_facial_idle_anim_override(player::player_ped_id());
	}
	func_92();
	mobile::_0xA2CCBE62CD4C91A4(0);
	unk_0x375A706A5C2FD084(0);
	mobile::_0x1B0B4AEED5B9B41C(1f);
	if (Global_2594043 > 0 && Global_2594043 < 13) {
		graphics::set_streamed_texture_dict_as_no_longer_needed(sLocal_33[Global_2594043]);
	}
	func_90(0, 1);
	if (func_133(0, 1, iLocal_64, 1)) {
		iLocal_64 = 0;
	}
	script::terminate_this_thread();
}

// Position - 0xBB99
void func_84() {
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
		func_127(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_88(Global_2918);
		if (Global_2918 == 1) {
			func_127(Global_14424, "DISPLAY_VIEW", 1f, system::to_float(Global_14447), -1082130432, -1082130432,
					 -1082130432);
			Global_14423 = Global_14447;
		}
		else {
			func_127(Global_14424, "DISPLAY_VIEW", 1f, system::to_float(Global_14448), -1082130432, -1082130432,
					 -1082130432);
			Global_14423 = Global_14448;
		}
		if (Global_14431) {
			func_87(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
			func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else {
			func_87(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
			func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_14606 == 0) {
			func_87(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			gameplay::clear_bit(&G_SleepModeOnOn25, 17);
		}
		else if (Global_69702) {
			func_87(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			gameplay::clear_bit(&G_SleepModeOnOn25, 17);
		}
		else {
			if (Global_14605 == 1) {
				if (Global_14431) {
					func_87(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else {
					func_87(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else if (Global_14431) {
				func_87(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else {
				func_87(Global_14424, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			gameplay::set_bit(&G_SleepModeOnOn25, 17);
		}
		break;

	case 7: break;

	case 10:
		func_127(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_87(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		func_87(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		gameplay::clear_bit(&G_SleepModeOnOn25, 17);
		if (gameplay::is_bit_set(G_SleepModeOnOn25, 20)) {
			func_87(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		else if (Global_14431) {
			func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
			if (Global_14386) {
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else {
			func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		break;

	case 9:
		if (Global_14442 == 1) {
			func_86();
			func_127(Global_14424, "SET_THEME", system::to_float(Global_101700.f_13010[Global_14443 /*20*/].f_6),
					 -1082130432, -1082130432, -1082130432, -1082130432);
			if (Global_15758) {
				graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
				graphics::_push_scaleform_movie_function_parameter_int(4);
				graphics::_push_scaleform_movie_function_parameter_int(0);
				graphics::_push_scaleform_movie_function_parameter_int(2);
				graphics::begin_text_command_scaleform_string("CELL_CONDFON");
				ui::add_text_component_substring_player_name(&Global_15760);
				graphics::end_text_command_scaleform_string();
				func_58("CELL_300");
				func_58("CELL_217");
				func_58("CELL_217");
				graphics::_pop_scaleform_movie_function_void();
			}
			else if (Global_101700.f_27009[Global_1628 /*29*/].f_24[Global_14443] == 0) {
				func_87(Global_14424, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(2),
						-1f, -1f, &Global_117[Global_1628 /*10*/].f_4, "CELL_300", "CELL_217", "CELL_195", 0);
			}
			else {
				func_87(Global_14424, "SET_DATA_SLOT", system::to_float(4), system::to_float(0), system::to_float(2),
						-1f, -1f, &Global_101700.f_27009[Global_1628 /*29*/].f_3,
						&Global_101700.f_27009[Global_1628 /*29*/].f_7, "CELL_217",
						&Global_101700.f_27009[Global_1628 /*29*/].f_3, 0);
			}
			func_127(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else if (Global_15745 == 4 || Global_15745 == 3) {
			func_127(Global_14424, "SET_THEME", system::to_float(Global_101700.f_13010[Global_14443 /*20*/].f_6),
					 -1082130432, -1082130432, -1082130432, -1082130432);
			func_86();
			if (Global_15758) {
				graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
				graphics::_push_scaleform_movie_function_parameter_int(4);
				graphics::_push_scaleform_movie_function_parameter_int(0);
				graphics::_push_scaleform_movie_function_parameter_int(2);
				graphics::begin_text_command_scaleform_string("CELL_CONDFON");
				ui::add_text_component_substring_player_name(&Global_15760);
				graphics::end_text_command_scaleform_string();
				func_58("CELL_300");
				func_58("CELL_219");
				func_58("CELL_219");
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
					func_127(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432,
							 -1082130432);
					func_87(Global_14424, "SET_DATA_SLOT", system::to_float(4), system::to_float(0),
							system::to_float(3), -1f, -1f, &Global_117[Global_1628 /*10*/].f_4, "CELL_300", &cVar0,
							"CELL_195", 0);
				}
				else {
					func_127(Global_14424, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432,
							 -1082130432);
					func_87(Global_14424, "SET_DATA_SLOT", system::to_float(4), system::to_float(0),
							system::to_float(3), -1f, -1f, &Global_101700.f_27009[Global_1628 /*29*/].f_3,
							&Global_101700.f_27009[Global_1628 /*29*/].f_7, &cVar0,
							&Global_101700.f_27009[Global_1628 /*29*/].f_3, 0);
				}
			}
			func_127(Global_14424, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		func_85();
		break;

	default: break;
	}
}

// Position - 0xC175
void func_85() {
	if (graphics::has_scaleform_movie_loaded(Global_14424)) {
		if (Global_14442 == 1) {
			if (Global_14431) {
				func_87(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else {
				func_87(Global_14424, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15792) {
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (gameplay::is_bit_set(G_SleepModeOnOn25, 20)) {
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431) {
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else {
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_87(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			gameplay::clear_bit(&G_SleepModeOnOn25, 17);
		}
		else {
			func_87(Global_14424, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_87(Global_14424, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			gameplay::clear_bit(&G_SleepModeOnOn25, 17);
			if (gameplay::is_bit_set(G_SleepModeOnOn25, 20)) {
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14431) {
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14386) {
					func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else {
				func_87(Global_14424, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

// Position - 0xC305
void func_86() {
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

// Position - 0xC57C
void func_87(int iParam0, char *sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6,
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
		func_58(sParam7);
	}
	if (!gameplay::is_string_null_or_empty(sParam8)) {
		func_58(sParam8);
	}
	if (!gameplay::is_string_null_or_empty(sParam9)) {
		func_58(sParam9);
	}
	if (!gameplay::is_string_null_or_empty(sParam10)) {
		func_58(sParam10);
	}
	if (!gameplay::is_string_null_or_empty(sParam11)) {
		func_58(sParam11);
	}
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0xC62F
void func_88(int iParam0) {
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
		if (func_57(14)) {
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
								func_58(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(iVar2);
								graphics::_pop_scaleform_movie_function_void();
							}
							if (Global_2452520) {
								if (iVar1 == 14) {
									func_87(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
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
								func_87(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
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
									func_87(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
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
									func_87(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
											system::to_float(Global_2320[iVar1 /*15*/].f_10), system::to_float(iVar6),
											-1f, &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14) {
								func_87(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
										system::to_float(Global_2320[iVar1 /*15*/].f_10),
										system::to_float(Global_16808), -1f, &Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
							}
							else if (iVar1 == 20) {
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_58(&Global_2320[iVar1 /*15*/]);
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
								func_58(&Global_2320[iVar1 /*15*/]);
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
								func_58(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(iVar8);
								graphics::_pop_scaleform_movie_function_void();
							}
							else if (iVar1 == 8) {
								graphics::_push_scaleform_movie_function(Global_14424, "SET_DATA_SLOT");
								graphics::_push_scaleform_movie_function_parameter_int(1);
								graphics::_push_scaleform_movie_function_parameter_int(iVar0);
								graphics::_push_scaleform_movie_function_parameter_int(Global_2320[iVar1 /*15*/].f_10);
								graphics::_push_scaleform_movie_function_parameter_int(0);
								func_58(&Global_2320[iVar1 /*15*/]);
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
								func_58(&Global_2320[iVar1 /*15*/]);
								graphics::_push_scaleform_movie_function_parameter_int(42);
								graphics::_pop_scaleform_movie_function_void();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23) {
								iVar9 = 0;
								iVar9 = Global_1618161.f_1;
								func_87(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
										system::to_float(Global_2320[iVar1 /*15*/].f_10), system::to_float(iVar9), -1f,
										&Global_2320[iVar1 /*15*/], 0, 0, 0, 0);
							}
							else {
								func_87(Global_14424, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0),
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

// Position - 0xCBD5
void func_89() {
	switch (iLocal_100) {
	case 1:
		ui::clear_floating_help(0, 1);
		if (gameplay::is_bit_set(G_SleepModeOnOn25, 28)) {
			StringCopy(&cLocal_145, "CELL_296", 16);
			func_50();
		}
		else {
			StringCopy(&cLocal_145, "CELL_295", 16);
			func_27();
		}
		break;

	case 2:
		if (!gameplay::is_bit_set(G_SleepModeOnOn25, 22)) {
			ui::clear_floating_help(0, 1);
			if (gameplay::is_bit_set(G_SleepModeOnOn25, 28)) {
				StringCopy(&cLocal_145, "CELL_294", 16);
				func_80();
			}
			else {
				StringCopy(&cLocal_145, "CELL_293", 16);
				func_79();
			}
			iLocal_100 = 2;
		}
		break;

	default: break;
	}
}

// Position - 0xCC63
void func_90(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_91(0)) {
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

// Position - 0xCCD7
bool func_91(int iParam0) {
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

// Position - 0xCD31
void func_92() {
	if (Global_1633501.f_102722 == 0 && Global_1633501.f_102723 == 0 && Global_1760863 == 0) {
		graphics::clear_timecycle_modifier();
	}
}

// Position - 0xCD68
void func_93(int iParam0, int iParam1) {
	if (Global_1633501.f_102722 == 1) {
	}
	else if (Global_1633501.f_102723 == 1) {
	}
	else {
		mobile::cell_cam_activate(iParam0, iParam1);
	}
}

// Position - 0xCD9A
int func_94() {
	if (gameplay::is_bit_set(G_SleepModeOnOn25, 15)) {
		return 1;
	}
	return 0;
}

// Position - 0xCDB6
bool func_95(int iParam0, int iParam1, int iParam2) {
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

// Position - 0xCE28
void func_96() {
	if (Global_14385) {
		vLocal_84 = {-90.3f, 0f, 90f};
		vLocal_87 = {1.5f, 0f, -17f};
		if (func_81()) {
			mobile::get_mobile_phone_rotation(&vLocal_90, 0);
			vLocal_84 = {vLocal_90};
			mobile::get_mobile_phone_position(&vLocal_93);
			vLocal_87 = {vLocal_93};
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			iLocal_121 = 0;
			iLocal_122 = 0;
			iLocal_123 = 0;
		}
		if (iLocal_120 == 0) {
			if (iLocal_121) {
				vLocal_81.x -= 14f;
			}
			if (vLocal_81.x < vLocal_87.x || vLocal_81.x == vLocal_87.x) {
				iLocal_121 = 0;
			}
			if (iLocal_122) {
				vLocal_81.y += 7f;
			}
			if (vLocal_81.y > vLocal_87.y || vLocal_81.y == vLocal_87.y) {
				iLocal_122 = 0;
			}
			if (iLocal_123) {
				vLocal_81.z += 12f;
			}
			if (vLocal_81.z > vLocal_87.z || vLocal_81.z == vLocal_87.z) {
				iLocal_123 = 0;
			}
		}
		if (iLocal_118) {
			vLocal_78.x--;
		}
		if (vLocal_78.x < vLocal_84.x || vLocal_78.x == vLocal_84.x) {
			vLocal_78.x = vLocal_84.x;
			iLocal_118 = 0;
		}
		if (iLocal_119) {
			vLocal_78.y -= 0.5f;
		}
		if (vLocal_78.y < vLocal_84.y || vLocal_78.y == vLocal_84.y) {
			vLocal_78.y = vLocal_84.y;
			iLocal_119 = 0;
		}
		if (iLocal_120) {
			vLocal_78.z += 11f;
		}
		if (vLocal_78.z > vLocal_84.z || vLocal_78.z == vLocal_84.z) {
			vLocal_78.z = vLocal_84.z;
			iLocal_120 = 0;
		}
		if (func_81() == 0) {
			mobile::set_mobile_phone_rotation(vLocal_78, 0);
			mobile::set_mobile_phone_position(vLocal_81);
		}
	}
	else {
		vLocal_84 = {-93.9f, 4.9f, 90.7f};
		if (iLocal_118) {
			vLocal_78.x--;
		}
		if (vLocal_78.x < vLocal_84.x || vLocal_78.x == vLocal_84.x) {
			iLocal_118 = 0;
		}
		if (iLocal_119) {
			vLocal_78.y += 2f;
		}
		if (vLocal_78.y > vLocal_84.y || vLocal_78.y == vLocal_84.y) {
			iLocal_119 = 0;
		}
		if (iLocal_120) {
			vLocal_78.z += 7f;
		}
		if (vLocal_78.z > vLocal_84.z || vLocal_78.z == vLocal_84.z) {
			iLocal_120 = 0;
		}
		mobile::set_mobile_phone_rotation(vLocal_78, 0);
	}
	if (Global_14385) {
		if (iLocal_118 == 0 && iLocal_119 == 0 && iLocal_120 == 0 && iLocal_121 == 0 && iLocal_122 == 0 &&
			iLocal_123 == 0) {
			if (func_81()) {
			}
			else {
				vLocal_78 = {vLocal_84};
				mobile::set_mobile_phone_rotation(vLocal_78, 0);
				vLocal_81 = {vLocal_87};
				mobile::set_mobile_phone_position(vLocal_81);
			}
			if (iLocal_103 == 0) {
				Global_16779 = 0;
				func_93(1, 1);
				iLocal_115 = 1;
				func_97(1);
				func_55();
				func_98();
				func_53(0);
				system::settimera(0);
				iLocal_142 = 1;
				iLocal_143 = 1;
				func_105();
				func_127(iLocal_140, "DISPLAY_VIEW", system::to_float(iLocal_144), -1082130432, -1082130432,
						 -1082130432, -1082130432);
				if (!gameplay::is_bit_set(Global_2595318, 2)) {
					func_127(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_127(iLocal_140, "SET_REMAINING_PHOTOS", system::to_float(iLocal_109), system::to_float(iLocal_110),
						 -1082130432, -1082130432, -1082130432);
				func_129();
			}
		}
	}
	else if (iLocal_118 == 0 && iLocal_119 == 0 && iLocal_120 == 0) {
		vLocal_78 = {vLocal_84};
		mobile::set_mobile_phone_rotation(vLocal_78, 0);
		Global_16779 = 0;
	}
}

// Position - 0xD1A0
void func_97(int iParam0) {
	if (func_135()) {
		if (iParam0) {
			if (!graphics::_0xBCEDB009461DA156()) {
				graphics::_0x7AC24EAB6D74118D(1);
				if (Global_2594043 > 0 && Global_2594043 < 99) {
					graphics::_0x27FEB5254759CDE3(sLocal_33[Global_2594043], 0);
					mobile::_0x1B0B4AEED5B9B41C(0.25f);
				}
			}
		}
		else if (graphics::_0xBCEDB009461DA156()) {
			graphics::_0x7AC24EAB6D74118D(0);
		}
	}
}

// Position - 0xD1FE
void func_98() {
	if (Global_2594042 > 0 && Global_2594042 < 99) {
		if (Global_1760863 == 0) {
			graphics::set_timecycle_modifier(sLocal_19[Global_2594042]);
		}
	}
}

// Position - 0xD22F
void func_99() {
	if (Global_14385) {
		iLocal_125 = 0;
		func_55();
		func_90(1, 1);
		func_93(1, 1);
		iLocal_115 = 1;
		Global_16782 = 1;
	}
}

// Position - 0xD257
void func_100() {
	if (iLocal_127 == 0) {
		if (gameplay::is_bit_set(G_SleepModeOnOn25, 28)) {
			StringCopy(&cLocal_145, "CELL_296", 16);
			func_50();
		}
		else {
			StringCopy(&cLocal_145, "CELL_295", 16);
			func_27();
		}
		if (gameplay::are_strings_equal(&cLocal_145, "DUMMYCOMPARISON")) {
			fLocal_98 = fLocal_99;
			fLocal_96 = fLocal_97;
			fLocal_99 = fLocal_98;
			fLocal_97 = fLocal_96;
		}
		iLocal_100 = 1;
	}
}

// Position - 0xD2AC
void func_101() {
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		audio::play_sound_frontend(-1, "Menu_Back", &Global_14432, 1);
	}
}

// Position - 0xD2CE
void func_102() {
	graphics::_0x1072F115DAB0717E(0, 0);
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 1;
}

// Position - 0xD2EB
void func_103() { func_104(); }

// Position - 0xD2F7
void func_104() {
	if (iLocal_151) {
		if (system::timera() > 50) {
			iLocal_151 = 0;
		}
	}
	if (iLocal_151 == 0) {
	}
}

// Position - 0xD316
void func_105() {
	if (Global_14443.f_1 > 3) {
		if (!ui::is_pause_menu_active()) {
			graphics::draw_scaleform_movie(iLocal_140, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

// Position - 0xD348
void func_106() {
	if (func_57(14)) {
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
		Global_14443 = func_11();
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

// Position - 0xD3EA
void func_107(int iParam0) {
	if (Global_14604) {
		func_90(0, 0);
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
	if (!func_108()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0xD45A
int func_108() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0xD481
void func_109() {
	controls::disable_control_action(0, 0, 1);
	controls::disable_control_action(0, 56, 1);
	if (iLocal_150 == 0) {
		controls::set_input_exclusive(0, Global_14416);
		controls::set_input_exclusive(0, Global_14413);
		controls::disable_control_action(0, 278, 1);
		controls::disable_control_action(0, 279, 1);
		controls::disable_control_action(0, 280, 1);
		controls::disable_control_action(0, 281, 1);
		controls::disable_control_action(0, 282, 1);
		controls::disable_control_action(0, 282, 1);
		controls::disable_control_action(0, 284, 1);
		controls::disable_control_action(0, 285, 1);
		controls::disable_control_action(0, 69, 1);
		controls::disable_control_action(0, 70, 1);
		controls::disable_control_action(0, 114, 1);
		controls::disable_control_action(0, 71, 1);
		controls::disable_control_action(0, 72, 1);
		controls::disable_control_action(0, 74, 1);
		controls::disable_control_action(0, 75, 1);
		controls::disable_control_action(0, 76, 1);
		controls::disable_control_action(0, 73, 1);
		controls::disable_control_action(0, 77, 1);
		controls::disable_control_action(0, 78, 1);
		controls::disable_control_action(0, 286, 1);
		controls::disable_control_action(0, 287, 1);
		controls::disable_control_action(0, 79, 1);
		controls::disable_control_action(0, 80, 1);
		controls::disable_control_action(0, 81, 1);
		controls::disable_control_action(0, 82, 1);
		controls::disable_control_action(0, 86, 1);
		controls::disable_control_action(0, 59, 1);
		controls::disable_control_action(0, 60, 1);
		controls::disable_control_action(0, 61, 1);
		controls::disable_control_action(0, 62, 1);
		controls::disable_control_action(0, 63, 1);
		controls::disable_control_action(0, 64, 1);
		controls::disable_control_action(0, 87, 1);
		controls::disable_control_action(0, 88, 1);
		controls::disable_control_action(0, 89, 1);
		controls::disable_control_action(0, 90, 1);
		controls::disable_control_action(0, 107, 1);
		controls::disable_control_action(0, 108, 1);
		controls::disable_control_action(0, 109, 1);
		controls::disable_control_action(0, 110, 1);
		controls::disable_control_action(0, 111, 1);
		controls::disable_control_action(0, 112, 1);
		controls::disable_control_action(0, 113, 1);
		controls::disable_control_action(0, 114, 1);
		controls::disable_control_action(0, 91, 1);
		controls::disable_control_action(0, 92, 1);
		controls::disable_control_action(0, 68, 1);
		controls::disable_control_action(0, 102, 1);
		controls::disable_control_action(0, 136, 1);
		controls::disable_control_action(0, 137, 1);
		controls::disable_control_action(0, 138, 1);
		controls::disable_control_action(0, 139, 1);
		controls::disable_control_action(0, 102, 1);
	}
}

// Position - 0xD660
bool func_110() {
	int iVar0;

	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
			if (vehicle::is_vehicle_seat_free(iVar0, -1, 0)) {
				return true;
			}
			else if (vehicle::get_ped_in_vehicle_seat(iVar0, -1, 0) != player::player_ped_id()) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0xD6B3
bool func_111() {
	bool bVar0;
	int *iVar1;

	func_118(&bVar0, &iVar1);
	if (bVar0) {
		return true;
	}
	if (Global_1315210 == 0) {
		if (!network::network_is_game_in_progress()) {
			return true;
		}
	}
	if (func_117()) {
		return true;
	}
	if (Global_2454747) {
		return true;
	}
	if (func_116()) {
		return true;
	}
	if (func_115(157)) {
		if (!func_114()) {
			return true;
		}
	}
	if (func_115(155)) {
		return true;
	}
	if (!network::network_is_signed_online()) {
		return true;
	}
	if (func_112() != 0) {
		if (script::_get_number_of_instances_of_script_with_name_hash(func_112()) == 0) {
			return true;
		}
	}
	return false;
}

// Position - 0xD748
int func_112() {
	switch (func_113()) {
	case 0: return joaat("freemode");

	case 2: return joaat("creator");
	}
	return 0;
}

// Position - 0xD77C
int func_113() { return Global_25190; }

// Position - 0xD787
bool func_114() { return Global_2443134.f_577; }

// Position - 0xD796
bool func_115(int iParam0) {
	if (script::get_event_exists(1, iParam0)) {
		return true;
	}
	return false;
}

// Position - 0xD7AD
bool func_116() { return Global_2452525; }

// Position - 0xD7B9
bool func_117() { return Global_2443134.f_572; }

// Position - 0xD7C8
void func_118(int *iParam0, int *iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < script::get_number_of_events(1)) {
		iVar1 = script::get_event_at_index(1, iVar0);
		if (iVar1 == 171) {
			script::get_event_data(1, iVar0, &iVar2, 2);
			switch (iVar2) {
			case 381: func_119(iVar0); break;

			case 2:
				script::get_event_data(1, iVar0, &vVar4, 3);
				if (vVar4.z == 55) {
					*iParam0 = 1;
				}
				else if (vVar4.z == 32) {
					*iParam1 = 1;
				}
				break;
			}
		}
		iVar0++;
	}
}

// Position - 0xD848
void func_119(int iParam0) {
	vector3 vVar0;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (script::get_event_data(1, iParam0, &vVar0, 3)) {
		if (func_121(vVar0.y, 1, 1)) {
			iVar3 = player::get_player_ped(vVar0.y);
			if (entity::does_entity_exist(iVar3)) {
				if (ped::is_ped_in_any_vehicle(iVar3, 0)) {
					iVar4 = ped::get_vehicle_ped_is_in(iVar3, 0);
					if (vehicle::is_vehicle_window_intact(iVar4, vVar0.z) &&
						network::network_get_this_script_is_network_script()) {
						if (func_120(iVar4, &bVar5)) {
							vehicle::remove_vehicle_window(iVar4, vVar0.z);
						}
						if (bVar5) {
							entity::set_vehicle_as_no_longer_needed(&iVar4);
						}
					}
				}
			}
		}
	}
}

// Position - 0xD8C9
bool func_120(int iParam0, int *iParam1) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_a_mission_entity(iParam0)) {
			if (network::network_get_entity_is_local(iParam0)) {
				if (!vehicle::is_this_model_a_train(entity::get_entity_model(iParam0))) {
					entity::set_entity_as_mission_entity(iParam0, 0, 1);
					*iParam1 = 1;
				}
			}
		}
		if (entity::does_entity_belong_to_this_script(iParam0, 0)) {
			if (network::network_has_control_of_entity(iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0xD928
bool func_121(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != -1) {
		if (network::network_is_player_active(iParam0)) {
			if (iParam1) {
				if (!player::is_player_playing(iParam0)) {
					return false;
				}
			}
			if (iParam2) {
				if (!Global_2433125.f_3[iVar0]) {
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

// Position - 0xD972
void func_122() {
	if (iLocal_156 == 1) {
		ui::hide_hud_component_this_frame(7);
		ui::hide_hud_component_this_frame(1);
		ui::hide_hud_component_this_frame(3);
		ui::hide_hud_component_this_frame(4);
		ui::hide_hud_component_this_frame(6);
		ui::hide_hud_component_this_frame(8);
		ui::hide_hud_component_this_frame(9);
		ui::hide_hud_component_this_frame(2);
	}
	else {
		ui::hide_hud_and_radar_this_frame();
	}
}

// Position - 0xD9B1
void func_123(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0xD9C8
void func_124() {
	if (func_125()) {
		graphics::_0x4AF92ACD3141D96C();
		if (graphics::_0x2A893980E96B659A(0)) {
			iLocal_103 = 1;
			iLocal_111 = 0;
		}
		else {
			Global_16782 = 1;
			Global_14443.f_1 = 3;
			ui::_remove_loading_prompt();
		}
	}
	else {
		iLocal_109 = 0;
		iLocal_110 = 0;
		if (iLocal_104 == 1) {
			if (iLocal_127 == 0) {
				if (graphics::has_scaleform_movie_loaded(iLocal_140)) {
					if (func_135()) {
						if (Global_2594043 == 0) {
							if (!gameplay::is_bit_set(Global_2595318, 2)) {
								func_127(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432,
										 -1082130432);
							}
						}
						func_127(iLocal_140, "SET_REMAINING_PHOTOS", system::to_float(iLocal_109),
								 system::to_float(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
					else {
						if (!gameplay::is_bit_set(Global_2595318, 2)) {
							func_127(iLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432,
									 -1082130432);
						}
						func_127(iLocal_140, "SET_REMAINING_PHOTOS", system::to_float(iLocal_109),
								 system::to_float(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (graphics::has_scaleform_movie_loaded(iLocal_140)) {
				func_127(iLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_127(iLocal_140, "SET_REMAINING_PHOTOS", system::to_float(iLocal_109), system::to_float(iLocal_110),
						 -1082130432, -1082130432, -1082130432);
			}
			iLocal_104 = 0;
		}
		iLocal_111 = 0;
		ui::_remove_loading_prompt();
	}
}

// Position - 0xDB26
bool func_125() {
	if (Global_1633501.f_102722 == 1) {
		if (Global_69702) {
			return false;
		}
	}
	if (Global_1633501.f_102723 == 1) {
		if (Global_69702) {
			return false;
		}
	}
	if (gameplay::is_xbox360_version() || gameplay::is_ps3_version()) {
		if (gameplay::is_bit_set(G_SleepModeOffOn11, 28)) {
			return false;
		}
	}
	return true;
}

// Position - 0xDB82
void func_126(int iParam0, char *sParam1) {
	graphics::_push_scaleform_movie_function(iParam0, sParam1);
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0xDB97
void func_127(int iParam0, char *sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6) {
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

// Position - 0xDBFA
int func_128() {
	if (Global_69702) {
		Global_14443 = 3;
	}
	else {
		Global_14443 = func_11();
	}
	if (Global_14443 > 3) {
		Global_14443 = 3;
	}
	return Global_101700.f_13010[Global_14443 /*20*/].f_7;
}

// Position - 0xDC30
void func_129() {
	if (Global_14443.f_1 > 3) {
		Global_14443.f_1 = 8;
	}
	Global_16781 = 0;
	iLocal_127 = 0;
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		vLocal_67 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	}
	if (Global_14385) {
		while (system::timera() < iLocal_137) {
			system::wait(0);
			func_105();
			func_77();
			unk1::_0xEB2D525B57F42B40();
		}
		func_126(iLocal_140, "OPEN_SHUTTER");
		func_122();
		func_100();
		iLocal_129 = 1;
		system::settimerb(0);
	}
	else {
		func_93(1, 1);
		func_97(1);
		func_55();
		func_98();
		func_53(0);
		iLocal_115 = 1;
	}
}

// Position - 0xDCC4
void func_130(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&G_SleepModeOnOn25, 15);
	}
	else {
		gameplay::clear_bit(&G_SleepModeOnOn25, 15);
	}
}

// Position - 0xDCE7
bool func_131() { return Global_1315210; }

// Position - 0xDCF3
void func_132() {}

// Position - 0xDCFB
bool func_133(int iParam0, int iParam1, int iParam2, int iParam3) {
	int iVar0;

	iVar0 = 0;
	if (gameplay::is_pc_version()) {
		if (cutscene::_0xA0FE76168A189DDB() != iParam0 && iParam2) {
			cutscene::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

// Position - 0xDD2E
void func_134() {
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (ped::get_ped_stealth_movement(player::player_ped_id())) {
			ped::set_ped_stealth_movement(player::player_ped_id(), 0, 0);
			mobile::_0x53F4892D18EC90A4(fLocal_157);
			mobile::_0x3117D84EFA60F77B(fLocal_158);
			mobile::_0xAC2890471901861C(fLocal_159);
		}
		else {
			mobile::_0x53F4892D18EC90A4(fLocal_157);
			mobile::_0x3117D84EFA60F77B(fLocal_158);
			mobile::_0xAC2890471901861C(fLocal_159);
		}
	}
	mobile::_0x15E69E2802C24B8D(fLocal_160);
	mobile::_0xD6ADE981781FCA09(fLocal_161);
	mobile::_0xF1E22DC13F5EEBAD(fLocal_162);
	mobile::_0x466DA42C89865553(fLocal_163);
	func_52();
}

// Position - 0xDD9B
bool func_135() {
	if (iLocal_56 == 0) {
		iLocal_56 = 1;
	}
	return true;
}
