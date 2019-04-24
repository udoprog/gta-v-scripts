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
int iLocal_29 = 0;
int iLocal_30 = 0;
int iLocal_31 = 0;
int iLocal_32 = 0;
int iLocal_33 = 0;
int iLocal_34 = 0;
var uLocal_35 = 0;
var uLocal_36 = 0;
var uLocal_37 = 0;
var uLocal_38 = 0;
var uLocal_39 = 0;
var uLocal_40 = 0;
var uLocal_41 = 0;
var uLocal_42 = 0;
var uLocal_43 = 0;
var uLocal_44 = 0;
var uLocal_45 = 0;
var uLocal_46 = 0;
var uLocal_47 = 0;
var uLocal_48 = 0;
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
var uLocal_65 = 2;
var uLocal_66 = 0;
var uLocal_67 = 0;
var uLocal_68 = 7;
var uLocal_69 = 0;
var uLocal_70 = 0;
var uLocal_71 = 0;
var uLocal_72 = 0;
var uLocal_73 = 0;
var uLocal_74 = 0;
var uLocal_75 = 0;
var uLocal_76 = 4;
var uLocal_77 = 0;
var uLocal_78 = 0;
var uLocal_79 = 0;
var uLocal_80 = 0;
var uLocal_81 = 0;
var uLocal_82 = 0;
var uLocal_83 = 0;
var uLocal_84 = 4;
var uLocal_85 = 0;
var uLocal_86 = 0;
var uLocal_87 = 0;
var uLocal_88 = 0;
var uLocal_89 = 4;
var uLocal_90 = 0;
var uLocal_91 = 0;
var uLocal_92 = 0;
var uLocal_93 = 0;
var uLocal_94 = 4;
var uLocal_95 = 0;
var uLocal_96 = 0;
var uLocal_97 = 0;
var uLocal_98 = 0;
var uLocal_99 = 0;
var uLocal_100 = 4;
var uLocal_101 = 0;
var uLocal_102 = 0;
var uLocal_103 = 0;
var uLocal_104 = 0;
var uLocal_105 = 4;
var uLocal_106 = 0;
var uLocal_107 = 0;
var uLocal_108 = 0;
var uLocal_109 = 0;
var uLocal_110 = 4;
var uLocal_111 = 0;
var uLocal_112 = 0;
var uLocal_113 = 0;
var uLocal_114 = 0;
var uLocal_115 = 0;
var uLocal_116 = 0;
var uLocal_117 = 0;
var uLocal_118 = 0;
var uLocal_119 = 0;
int iLocal_120 = 0;
int iLocal_121 = 0;
var uLocal_122 = 0;
var uLocal_123 = 0;
var uLocal_124 = 0;
var uLocal_125 = 0;
int iLocal_126 = 0;
int iLocal_127 = 0;
int iLocal_128 = 0;
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
	iLocal_33 = joaat("s_m_y_sheriff_01");
	iLocal_34 = joaat("sheriff");
	if (player::has_force_cleanup_occurred(3)) {
		func_38();
	}
	gameplay::set_mission_flag(1);
	if (gameplay::is_pc_version()) {
		iLocal_32 = 6451;
	}
	else {
		iLocal_32 = 4516;
	}
	while (true) {
		pathfind::_0x0B919E1FB47CC4E0(2f);
		vehicle::_set_some_vehicle_density_multiplier_this_frame(2f);
		func_36();
		switch (iLocal_28) {
		case 0:
			graphics::_0x0218BA067D249DEA();
			cam::destroy_all_cams(0);
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				entity::set_entity_invincible(player::player_ped_id(), 1);
				entity::set_entity_visible(player::player_ped_id(), 0, 0);
				entity::freeze_entity_position(player::player_ped_id(), 1);
				ped::set_enable_scuba(player::player_ped_id(), 1);
				player::set_max_wanted_level(0);
			}
			if (player::is_player_playing(player::player_id())) {
				player::set_player_control(player::player_id(), 0, 0);
			}
			iLocal_127 = gameplay::get_game_timer();
			switch (Global_88268) {
			case 0:
				if (!Global_88267) {
					audio::play_end_credits_music(1);
					audio::set_mobile_radio_enabled_during_gameplay(1);
					audio::set_mobile_phone_radio_state(1);
					audio::set_radio_to_station_name("RADIO_01_CLASS_ROCK");
					audio::_0x4E404A9361F75BB2("RADIO_01_CLASS_ROCK", "END_CREDITS_KILL_TREVOR", 1);
				}
				break;

			case 1:
				if (!Global_88267) {
					audio::play_end_credits_music(1);
					audio::set_mobile_radio_enabled_during_gameplay(1);
					audio::set_mobile_phone_radio_state(1);
					audio::set_radio_to_station_name("RADIO_01_CLASS_ROCK");
					audio::_0x4E404A9361F75BB2("RADIO_01_CLASS_ROCK", "END_CREDITS_KILL_MICHAEL", 1);
				}
				break;

			case 2:
				if (!Global_88267) {
					audio::play_end_credits_music(1);
					audio::set_mobile_radio_enabled_during_gameplay(1);
					audio::set_mobile_phone_radio_state(1);
					audio::set_radio_to_station_name("RADIO_01_CLASS_ROCK");
					audio::_0x4E404A9361F75BB2("RADIO_01_CLASS_ROCK", "END_CREDITS_SAVE_MICHAEL_TREVOR", 1);
				}
				break;
			}
			ui::request_additional_text("CREDIT", 0);
			while (!ui::has_additional_text_loaded(0)) {
				system::wait(0);
			}
			if (!audio::is_audio_scene_active("END_CREDITS_SCENE")) {
				audio::start_audio_scene("END_CREDITS_SCENE");
			}
			if (!Global_88267) {
				gameplay::set_credits_active(1);
				gameplay::_0xB51B9AB9EF81868C(0);
			}
			streaming::set_game_pauses_for_streaming(0);
			ui::display_radar(0);
			iLocal_28 = 1;
			break;

		case 1:
			ui::hide_hud_and_radar_this_frame();
			gameplay::_0x23227DF0B2115469();
			switch (iLocal_29) {
			case 0:
				func_35();
				iLocal_29 = 18;
				break;

			case 18:
				if (func_34()) {
					iLocal_29 = 2;
				}
				break;

			case 2:
				if (func_33()) {
					iLocal_29 = 3;
				}
				break;

			case 3:
				if (func_32()) {
					iLocal_29 = 4;
				}
				break;

			case 4:
				if (func_31()) {
					iLocal_29 = 5;
				}
				break;

			case 5:
				if (func_30()) {
					iLocal_29 = 6;
				}
				break;

			case 6:
				if (func_29()) {
					iLocal_29 = 7;
				}
				break;

			case 7:
				if (func_28()) {
					iLocal_29 = 15;
				}
				break;

			case 15:
				if (func_27()) {
					iLocal_29 = 16;
				}
				break;

			case 16:
				if (func_26()) {
					iLocal_29 = 9;
				}
				break;

			case 9:
				if (func_25()) {
					iLocal_29 = 8;
				}
				break;

			case 8:
				if (func_24()) {
					iLocal_29 = 17;
				}
				break;

			case 17:
				if (func_23()) {
					iLocal_29 = 10;
				}
				break;

			case 10:
				if (func_22()) {
					iLocal_29 = 11;
				}
				break;

			case 11:
				if (func_21()) {
					iLocal_29 = 12;
				}
				break;

			case 12:
				if (func_20()) {
					iLocal_29 = 13;
				}
				break;

			case 13:
				if (func_19()) {
					iLocal_29 = 14;
				}
				break;

			case 14:
				if (func_18()) {
					iLocal_29 = 1;
				}
				break;

			case 1:
				if (func_17()) {
					iLocal_29 = 19;
				}
				break;

			case 19:
				if (func_16()) {
					iLocal_29 = 20;
				}
				break;

			case 20:
				if (func_15()) {
					iLocal_29 = 21;
				}
				break;

			case 21:
				if (func_14()) {
					iLocal_29 = 22;
				}
				break;

			case 22:
				if (func_13()) {
					iLocal_29 = 23;
				}
				break;

			case 23:
				if (func_12()) {
					iLocal_29 = 24;
				}
				break;

			case 24:
				if (func_11()) {
					iLocal_29 = 25;
				}
				break;

			case 25:
				if (func_10()) {
					iLocal_29 = 26;
				}
				break;

			case 26:
				if (func_9()) {
					iLocal_29 = 28;
				}
				break;

			case 28:
				if (func_8()) {
					iLocal_29 = 29;
				}
				break;

			case 29:
				if (func_7()) {
					iLocal_29 = 30;
				}
				break;

			case 30:
				if (func_6()) {
					iLocal_29 = 31;
				}
				break;

			case 31:
				if (func_5()) {
					iLocal_29 = 32;
				}
				break;

			case 32:
				if (func_3()) {
					iLocal_29 = 34;
				}
				break;

			case 34:
				cam::do_screen_fade_out(5000);
				iLocal_29 = 35;
				break;
			}
			func_36();
			func_2();
			if (iLocal_29 > 0) {
				entity::_set_entity_coords_2(player::player_ped_id(),
											 cam::_get_gameplay_cam_coords() + Vector(3f, 0f, 0f), 1, 0, 0, 1);
				entity::set_entity_visible(player::player_ped_id(), 0, 0);
				entity::set_entity_invincible(player::player_ped_id(), 1);
			}
			controls::disable_control_action(0, 37, 1);
			controls::disable_control_action(0, 167, 1);
			controls::disable_control_action(0, 166, 1);
			controls::disable_control_action(0, 166, 1);
			controls::disable_control_action(0, 169, 1);
			if ((system::to_float(gameplay::get_game_timer()) - system::to_float(iLocal_127)) / 60000f > 39f &&
				iLocal_128 == 0) {
				iLocal_128 = 1;
			}
			if (gameplay::_0x075F1D57402C93BA()) {
				if (iLocal_126 == 0) {
					system::settimera(0);
					iLocal_126 = 1;
				}
			}
			if (system::timera() > 40000 && iLocal_126 || func_1()) {
				audio::start_audio_scene("CAR_MOD_RADIO_MUTE_SCENE");
				gameplay::_0xB51B9AB9EF81868C(1);
				if (!cam::is_screen_faded_out()) {
					cam::do_screen_fade_out(5000);
				}
				system::settimerb(0);
				while (system::timerb() < 5000) {
					ui::hide_hud_and_radar_this_frame();
					func_36();
					system::wait(0);
				}
				gameplay::set_weather_type_now("EXTRASUNNY");
				audio::stop_audio_scene("END_CREDITS_SCENE");
				audio::play_end_credits_music(0);
				audio::stop_audio_scene("CAR_MOD_RADIO_MUTE_SCENE");
				streaming::set_game_pauses_for_streaming(1);
				graphics::_0x14FC5833464340A8();
				gameplay::set_time_scale(1f);
				player::set_player_control(player::player_id(), 1, 0);
				func_38();
			}
			break;
		}
		system::wait(0);
	}
}

// Position - 0x5B2
int func_1() {
	if (ui::is_pause_menu_active()) {
		return 0;
	}
	if (controls::is_control_just_pressed(0, 18) || controls::is_control_just_pressed(2, 18)) {
		return 1;
	}
	return 0;
}

// Position - 0x5E4
void func_2() { Global_17151.f_6 = 1; }

// Position - 0x5F2
bool func_3() {
	switch (iLocal_31) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 2);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1761.323f, -862.844f,
																 8.164f, 0.4405f, 0f, 92.1012f, 45f, 1, 2),
									 35000 + iLocal_32 / 3, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1789.12f, -863.8638f,
																 8.3779f, 0.4405f, 0f, 92.1012f, 45f, 1, 2),
									 35000 + iLocal_32 / 3, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1919.929f, -868.6623f,
																 5.5128f, 5.0195f, 0f, 92.1012f, 45f, 1, 2),
									 35000 + iLocal_32 / 3, 3);
			cam::set_cam_active(iLocal_30, 1);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			cam::shake_cam(iLocal_30, "HAND_SHAKE", 0.1f);
			gameplay::set_weather_type_now("EXTRASUNNY");
			time::set_clock_time(19, 20, 0);
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		if (system::timerb() > 10000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 95000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x747
void func_4() {
	if (cam::is_screen_faded_out()) {
		cam::do_screen_fade_in(5000);
	}
}

// Position - 0x75D
bool func_5() {
	switch (iLocal_31) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 0);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -2024.12f, -556.459f,
																 10.3882f, 7.8994f, 0f, -42.1714f, 45f, 1, 2),
									 35000 + iLocal_32 / 6, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -2010.884f, -568.449f,
																 10.3882f, 7.8994f, 0f, -42.1714f, 45f, 1, 2),
									 35000 + iLocal_32 / 6, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1986.421f, -590.6094f,
																 10.3882f, 7.8994f, 0f, -42.1714f, 45f, 1, 2),
									 35000 + iLocal_32 / 6, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1949.009f, -624.4987f,
																 10.3882f, 7.8994f, 0f, -42.1714f, 45f, 1, 2),
									 35000 + iLocal_32 / 6, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1902.043f, -667.0425f,
																 10.3882f, 7.8994f, 0f, -42.1714f, 45f, 1, 2),
									 35000 + iLocal_32 / 6, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1859.102f, -705.9395f,
																 10.3882f, 7.8994f, 0f, -42.1714f, 45f, 1, 2),
									 35000 + iLocal_32 / 6, 3);
			cam::set_cam_active(iLocal_30, 1);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			cam::shake_cam(iLocal_30, "HAND_SHAKE", 0.1f);
			gameplay::set_weather_type_now("CLOUDS");
			time::set_clock_time(16, 20, 0);
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		if (system::timerb() > 15000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 95000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x95A
bool func_6() {
	switch (iLocal_31) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 2);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 190.783f, -1399.541f,
																 28.7482f, 9.2974f, 0f, 15.6743f, 45f, 1, 2),
									 27000 + iLocal_32 / 3, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 189.3631f, -1388.63f,
																 28.7482f, 9.2974f, 0f, 15.6743f, 45f, 1, 2),
									 27000 + iLocal_32 / 3, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 187.3559f, -1378.546f,
																 28.7482f, 13.7276f, 0f, 17.0204f, 45f, 1, 2),
									 32000 + iLocal_32 / 3, 3);
			cam::set_cam_active(iLocal_30, 1);
			gameplay::set_weather_type_now("THUNDER");
			cam::shake_cam(iLocal_30, "HAND_SHAKE", 0.06f);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			time::set_clock_time(21, 0, 0);
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		if (system::timerb() > 11000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 50000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0xAAC
bool func_7() {
	switch (iLocal_31) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 2);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 1138.231f, -560.4722f,
																 59.6695f, -19.2128f, 0f, 131.1068f, 45f, 1, 2),
									 15000 + iLocal_32 / 8, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 1135.092f, -561.3561f,
																 57.37753f, 1.84264f, -0.199522f, 131.7344f, 45f, 1, 2),
									 15000 + iLocal_32 / 8, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 1131.004f, -565.2379f,
																 57.093f, 1.8431f, -0.2123f, 128.403f, 45f, 1, 2),
									 15000 + iLocal_32 / 8, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 1122.95f, -574.3373f,
																 56.15794f, 2.104707f, -0.199523f, 136.0166f, 45f, 1,
																 2),
									 15000 + iLocal_32 / 8, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 1100.843f, -597.2391f,
																 56.50692f, 2.104707f, -0.199523f, 136.0166f, 45f, 1,
																 2),
									 15000 + iLocal_32 / 8, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 1070.652f, -628.5199f,
																 57.8283f, 2.104707f, -0.199523f, 119.1877f, 45f, 1, 2),
									 15000 + iLocal_32 / 8, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 1040.776f, -644.9377f,
																 73.35931f, 2.104707f, -0.199523f, 113.079f, 45f, 1, 2),
									 15000 + iLocal_32 / 8, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 1013.072f, -658.9576f,
																 105.4972f, 3.742157f, -0.199525f, 113.9499f, 45f, 1,
																 2),
									 15000 + iLocal_32 / 8, 3);
			cam::set_cam_active(iLocal_30, 1);
			gameplay::set_weather_type_now("EXTRASUNNY");
			cam::shake_cam(iLocal_30, "HAND_SHAKE", 0.06f);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			time::set_clock_time(19, 0, 0);
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		if (system::timerb() > 11000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 70000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0xD35
bool func_8() {
	switch (iLocal_31) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 0);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 570.1339f, 624.7344f,
																 181.2577f, 8.233f, 0f, -15.99f, 45f, 1, 2),
									 0, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 609.7789f, 763.0852f,
																 205.4756f, 7.075f, 0f, -15.99f, 45f, 1, 2),
									 30000 + iLocal_32 / 4, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 665.679f, 986.974f,
																 269.0323f, 15.0379f, 0f, -13.2777f, 45f, 1, 2),
									 30000 + iLocal_32 / 4, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 735.5938f, 1290.784f,
																 389.334f, 21.7942f, 0f, -12.8878f, 45f, 1, 2),
									 30000 + iLocal_32 / 4, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 764.2928f, 1416.215f,
																 450.2523f, 26.2951f, 0f, -12.8878f, 45f, 1, 2),
									 30000 + iLocal_32 / 4, 3);
			cam::set_cam_active(iLocal_30, 1);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			time::set_clock_time(0, 0, 0);
			gameplay::set_weather_type_now("FOGGY");
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		if (system::timerb() > 10000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 80000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0xEDF
bool func_9() {
	switch (iLocal_31) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 0);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 405.4927f, 110.5945f,
																 105.0361f, 28.7364f, 0f, 4.2586f, 45f, 1, 2),
									 15000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 351.9488f, 127.5968f,
																 104.7248f, 28.5356f, 0f, -29.4515f, 45f, 1, 2),
									 15000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 311.4437f, 151.5636f,
																 104.7248f, 25.4354f, 0f, -59.721f, 45f, 1, 2),
									 15000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 274.0936f, 167.2445f,
																 104.7248f, 25.4354f, 0f, -48.9993f, 45f, 1, 2),
									 15000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 218.1894f, 190.2665f,
																 123.8651f, 0.2697f, 0f, -110.6178f, 45f, 1, 2),
									 15000 + iLocal_32 / 5, 3);
			cam::set_cam_active(iLocal_30, 1);
			cam::shake_cam(iLocal_30, "HAND_SHAKE", 0.2f);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			time::set_clock_time(22, 0, 0);
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		if (system::timerb() > 12000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 54000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x1098
bool func_10() {
	switch (iLocal_31) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 0);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 191.2012f, -1188.771f,
																 59.37577f, -62.41468f, -0.001852f, 103.989f, 45f, 1,
																 2),
									 22000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 100.7434f, -1188.259f,
																 59.37577f, -62.41468f, -0.001852f, 103.989f, 45f, 1,
																 2),
									 22000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -41.31043f, -1187.095f,
																 59.37577f, -45.18603f, -0.001852f, 103.989f, 45f, 1,
																 2),
									 22000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -177.9301f, -1187.095f,
																 59.37577f, -33.29221f, -0.001851f, 103.989f, 45f, 1,
																 2),
									 22000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -308.133f, -1187.095f,
																 59.37577f, -8.678455f, -0.001852f, 115.1301f, 45f, 1,
																 2),
									 22000 + iLocal_32 / 5, 3);
			gameplay::set_weather_type_now("CLEAR");
			cam::set_cam_active(iLocal_30, 1);
			cam::shake_cam(iLocal_30, "HAND_SHAKE", 0.2f);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			time::set_clock_time(19, 0, 0);
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		if (system::timerb() > 12000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 83000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x126C
bool func_11() {
	switch (iLocal_31) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 0);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 888.9525f, -408.1645f,
																 37.6499f, -79.3137f, -0.5998f, 88.7316f, 45f, 1, 2),
									 23000 + iLocal_32 / 3, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 821.9319f, -422.6405f,
																 37.4952f, 3.0949f, -0.5998f, 104.4012f, 45f, 1, 2),
									 23000 + iLocal_32 / 3, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 696.0519f, -464.1059f,
																 64.8772f, 4.243f, -0.5998f, 112.2643f, 45f, 1, 2),
									 23000 + iLocal_32 / 3, 3);
			cam::set_cam_active(iLocal_30, 1);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			time::set_clock_time(19, 0, 0);
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		if (system::timerb() > 6500) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 40000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x13B5
bool func_12() {
	switch (iLocal_31) {
	case 0:
		entity::set_entity_coords(player::player_ped_id(), 2339.135f, 3033.743f, 49.2209f, 1, 0, 0, 1);
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 0);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -44.3122f, 2999.557f,
																 41.1735f, -2.7641f, 0.0005f, 109.3277f, 45f, 1, 2),
									 20000 + iLocal_32 / 8, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -164.9796f, 2964.199f,
																 32.6669f, -2.8667f, 0.0005f, 101.2396f, 45f, 1, 2),
									 20000 + iLocal_32 / 8, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -283.8676f, 2949.943f,
																 30.103f, 0.687f, 0.0005f, 82.314f, 45f, 1, 2),
									 20000 + iLocal_32 / 8, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -351.918f, 2953.701f,
																 26.1939f, 2.1626f, 0.0005f, 79.5006f, 45f, 1, 2),
									 20000 + iLocal_32 / 8, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -420.6262f, 2965.089f,
																 25.2746f, 3.4231f, 0.1093f, 78.6793f, 45f, 1, 2),
									 20000 + iLocal_32 / 8, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -467.0213f, 2974.305f,
																 26.1414f, 4.5971f, 0.1093f, 78.7363f, 45f, 1, 2),
									 20000 + iLocal_32 / 8, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -533.4514f, 3001.715f,
																 28.4767f, -2.3009f, 0.1093f, 66.7469f, 45f, 1, 2),
									 20000 + iLocal_32 / 8, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -596.659f, 3018.226f,
																 26.4333f, -2.7551f, 0.1093f, 96.0962f, 45f, 1, 2),
									 20000 + iLocal_32 / 8, 3);
			cam::set_cam_active(iLocal_30, 1);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			cam::shake_cam(iLocal_30, "HAND_SHAKE", 0.1f);
			gameplay::set_weather_type_now("EXTRASUNNY");
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		time::set_clock_time(18, 30, 0);
		if (system::timerb() > 10000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 130000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x165D
bool func_13() {
	switch (iLocal_31) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 0);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 2174.177f, 1735.244f,
																 109.4122f, 7.6816f, 0f, -0.0482f, 34.8528f, 1, 2),
									 20000 + iLocal_32 / 3, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 2174.177f, 1732.022f,
																 133.2939f, 7.6816f, 0f, -0.0482f, 34.8528f, 1, 2),
									 20000 + iLocal_32 / 3, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 2174.174f, 1727.594f,
																 175.5751f, 3.7588f, 0f, -7.0037f, 36.6129f, 1, 2),
									 20000 + iLocal_32 / 3, 3);
			cam::set_cam_active(iLocal_30, 1);
			cam::shake_cam(iLocal_30, "HAND_SHAKE", 0.05f);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		if (system::timerb() > 5000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 40000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x17A0
bool func_14() {
	vector3 vVar0;

	vehicle::_set_some_vehicle_density_multiplier_this_frame(2f);
	pathfind::_0x0B919E1FB47CC4E0(2f);
	vVar0 = {8f, 8f, 8f};
	switch (iLocal_31) {
	case 0:
		entity::set_entity_coords(player::player_ped_id(), -1905.508f, 4765.541f, 2.6826f, 1, 0, 0, 1);
		if (cam::is_screen_faded_out()) {
			iLocal_120 = ped::add_scenario_blocking_area(Vector(12.629f, 4359.485f, -954.3553f) - vVar0,
														 Vector(12.629f, 4359.485f, -954.3553f) + vVar0, 0, 1, 1, 1);
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 0);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1916.084f, 4795.219f,
																 3.1379f, 3.8531f, 0f, -171.7801f, 45f, 1, 2),
									 15000 + iLocal_32 / 11, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1905.508f, 4765.541f,
																 2.6826f, 9.3203f, -0.0565f, -173.3257f, 45f, 1, 2),
									 15000 + iLocal_32 / 11, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1832.65f, 4621.594f,
																 1.7506f, 10.6206f, -0.0565f, -136.3462f, 45f, 1, 2),
									 15000 + iLocal_32 / 11, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1710.094f, 4487.106f,
																 2.1122f, 8.2661f, -0.0565f, -111.2185f, 45f, 1, 2),
									 15000 + iLocal_32 / 11, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1593.169f, 4394.148f,
																 8.9492f, 8.6634f, -0.0565f, -123.0239f, 45f, 1, 2),
									 15000 + iLocal_32 / 11, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1435.347f, 4321.225f,
																 17.1582f, 3.6862f, -0.0565f, -85.5017f, 45f, 1, 2),
									 15000 + iLocal_32 / 11, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1242.052f, 4394.287f,
																 27.8612f, 2.4464f, -0.0565f, -89.9662f, 45f, 1, 2),
									 15000 + iLocal_32 / 11, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1078.79f, 4384.103f,
																 22.3137f, 6.5176f, -0.0565f, -90.2124f, 45f, 1, 2),
									 15000 + iLocal_32 / 11, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -923.3418f, 4390.717f,
																 30.8799f, 2.7141f, -0.0565f, -69.9486f, 45f, 1, 2),
									 15000 + iLocal_32 / 11, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -652.7346f, 4436.492f,
																 33.5175f, 4.6974f, -0.0565f, -92.9723f, 45f, 1, 2),
									 15000 + iLocal_32 / 11, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -383.5358f, 4422.515f,
																 81.1759f, 44.6958f, -0.0565f, -92.3987f, 45f, 1, 2),
									 15000 + iLocal_32 / 11, 3);
			cam::set_cam_active(iLocal_30, 1);
			gameplay::set_weather_type_now("EXTRASUNNY");
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			time::set_clock_time(8, 0, 0);
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		if (system::timerb() > 15000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 115000 + iLocal_32) {
			ped::remove_scenario_blocking_area(iLocal_120, 0);
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x1B40
bool func_15() {
	switch (iLocal_31) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 2);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -352.8542f, 6076.338f,
																 32.166f, -1.1628f, 0f, 105.5219f, 45f, 1, 2),
									 20000 + iLocal_32 / 8, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -381.4112f, 6066.082f,
																 32.3482f, 0.6536f, 0f, 130.2366f, 45f, 1, 2),
									 20000 + iLocal_32 / 8, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -410.881f, 6045.556f,
																 32.594f, 0.3665f, 0f, 106.2762f, 45f, 1, 2),
									 20000 + iLocal_32 / 8, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -463.5055f, 6026.212f,
																 35.196f, 2.9584f, 0f, 107.0341f, 45f, 1, 2),
									 20000 + iLocal_32 / 8, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -522.7526f, 6009.109f,
																 38.1065f, 2.3686f, 0f, 106.278f, 45f, 1, 2),
									 20000 + iLocal_32 / 8, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -571.135f, 5995.075f,
																 32.9546f, -8.7694f, 0f, 105.3941f, 45f, 1, 2),
									 20000 + iLocal_32 / 8, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -633.3229f, 5991.047f,
																 24.4397f, -7.9325f, 0f, 80.077f, 45f, 1, 2),
									 20000 + iLocal_32 / 8, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -715.5418f, 6010.523f,
																 17.5661f, 3.6859f, 0f, 73.0103f, 45f, 1, 2),
									 20000 + iLocal_32 / 8, 3);
			gameplay::set_weather_type_now("EXTRASUNNY");
			cam::set_cam_active(iLocal_30, 1);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			time::set_clock_time(19, 20, 0);
			system::settimerb(0);
			gameplay::set_time_scale(1f);
			iLocal_31++;
		}
		break;

	case 1:
		time::set_clock_time(19, 20, 0);
		if (system::timerb() > 13000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 120000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x1DAC
bool func_16() {
	switch (iLocal_31) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 0);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -133.3582f, -2571.779f,
																 168.8322f, -67.4567f, 0f, -77.0854f, 45f, 1, 2),
									 20000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -281.9736f, -2437.404f,
																 176.1545f, -74.7325f, 0f, -55.6515f, 45f, 1, 2),
									 20000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -426.4573f, -2339.119f,
																 176.1545f, -74.7325f, 0f, -55.6515f, 45f, 1, 2),
									 20000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -558.7574f, -2242.28f,
																 176.1545f, -74.7325f, 0f, -55.6515f, 45f, 1, 2),
									 20000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -769.587f, -2104.665f,
																 176.1545f, -74.7325f, 0f, -55.6515f, 45f, 1, 2),
									 20000 + iLocal_32 / 5, 3);
			gameplay::set_weather_type_now("EXTRASUNNY");
			cam::set_cam_active(iLocal_30, 1);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			time::set_clock_time(8, 0, 0);
			system::settimerb(0);
			gameplay::set_time_scale(1f);
			iLocal_31++;
		}
		break;

	case 1:
		if (system::timerb() > 10000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 75000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x1F63
bool func_17() {
	switch (iLocal_31) {
	case 0:
		streaming::request_ipl("prologue01");
		streaming::request_ipl("prologue01c");
		streaming::request_ipl("prologue01d");
		streaming::request_ipl("prologue01e");
		streaming::request_ipl("prologue01f");
		streaming::request_ipl("prologue01g");
		streaming::request_ipl("prologue01h");
		streaming::request_ipl("prologue01i");
		streaming::request_ipl("prologue01j");
		streaming::request_ipl("prologue01k");
		streaming::request_ipl("prologue01z");
		streaming::request_ipl("prologue02");
		streaming::request_ipl("prologue03");
		streaming::request_ipl("prologue03b");
		streaming::request_ipl("prologue04");
		streaming::request_ipl("prologue04b");
		streaming::request_ipl("prologue05");
		streaming::request_ipl("prologue05b");
		streaming::request_ipl("prologue06");
		streaming::request_ipl("prologue06b");
		streaming::request_ipl("prologuerd");
		streaming::request_ipl("prologuerdb");
		streaming::request_ipl("prologue_occl");
		pathfind::set_roads_in_angled_area(5526.24f, -5137.23f, 61.78925f, 3679.327f, -4973.879f, 125.0828f, 192f, 1, 1,
										   1);
		pathfind::set_roads_in_angled_area(3691.211f, -4941.24f, 94.59368f, 3511.115f, -4869.191f, 126.7621f, 16f, 1, 1,
										   1);
		pathfind::set_roads_in_angled_area(3510.004f, -4865.81f, 94.69557f, 3204.424f, -4833.817f, 126.8152f, 16f, 1, 1,
										   1);
		pathfind::set_roads_in_angled_area(3186.534f, -4832.798f, 109.8148f, 3202.187f, -4833.993f, 114.815f, 16f, 1, 1,
										   1);
		iLocal_31++;
		break;

	case 1:
		if (cam::is_screen_faded_out()) {
			time::set_clock_time(19, 0, 0);
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 0);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 3185.889f, -4832.746f,
																 114.2106f, 3.8204f, 0f, 83.179f, 48.7373f, 1, 2),
									 43000 + iLocal_32 / 3, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 3289.757f, -4842.213f,
																 114.2106f, 3.8204f, 0f, 83.179f, 48.7373f, 1, 2),
									 43000 + iLocal_32 / 3, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 3443.775f, -4856.407f,
																 114.2106f, 3.8204f, 0f, 83.179f, 48.7373f, 1, 2),
									 43000 + iLocal_32 / 3, 3);
			gameplay::set_weather_type_now("SNOWLIGHT");
			cam::set_cam_active(iLocal_30, 1);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 2:
		time::pause_clock(1);
		if (system::timerb() > 10000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 3:
		time::pause_clock(1);
		if (system::timerb() > 76000 + iLocal_32) {
			pathfind::set_roads_in_angled_area(5526.24f, -5137.23f, 61.78925f, 3679.327f, -4973.879f, 125.0828f, 192f,
											   0, 1, 1);
			pathfind::set_roads_in_angled_area(3691.211f, -4941.24f, 94.59368f, 3511.115f, -4869.191f, 126.7621f, 16f,
											   0, 1, 1);
			pathfind::set_roads_in_angled_area(3510.004f, -4865.81f, 94.69557f, 3204.424f, -4833.817f, 126.8152f, 16f,
											   0, 1, 1);
			pathfind::set_roads_in_angled_area(3186.534f, -4832.798f, 109.8148f, 3202.187f, -4833.993f, 114.815f, 16f,
											   0, 1, 1);
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x22CB
bool func_18() {
	switch (iLocal_31) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 2);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 1894.21f, 3752.368f,
																 38.8232f, -3.2748f, 0f, 74.7403f, 45f, 1, 2),
									 25000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 1822.434f, 3752.692f,
																 38.8232f, -0.6732f, 0f, 73.203f, 45f, 1, 2),
									 25000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 1721.525f, 3753.527f,
																 38.8232f, -0.6732f, 0f, 73.203f, 45f, 1, 2),
									 25000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 1670.582f, 3766.587f,
																 43.3779f, -1.7418f, 0f, 81.1962f, 45f, 1, 2),
									 25000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 1550.969f, 3785.112f,
																 39.979f, -1.4286f, 0f, 81.1962f, 45f, 1, 2),
									 25000 + iLocal_32 / 5, 3);
			cam::set_cam_active(iLocal_30, 1);
			gameplay::set_weather_type_now("EXTRASUNNY");
			cam::shake_cam(iLocal_30, "HAND_SHAKE", 0.06f);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			time::set_clock_time(20, 0, 0);
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		if (system::timerb() > 11000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 70000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x248B
bool func_19() {
	switch (iLocal_31) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 0);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 1921.736f, 2969.344f,
																 58.458f, 5.9884f, 0f, -115.0092f, 42.011f, 1, 2),
									 15000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 1977.809f, 2989.481f,
																 61.3841f, 3.4807f, 0f, -138.1117f, 42.011f, 1, 2),
									 15000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 2055.791f, 3005.162f,
																 63.5793f, 0.0466f, 0f, -152.9442f, 42.011f, 1, 2),
									 15000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 2153.164f, 2973.802f,
																 63.6353f, 0.225f, 0f, 143.9263f, 42.011f, 1, 2),
									 20000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 2207.884f, 2911.434f,
																 62.6499f, 1.6293f, 0f, 80.4066f, 42.011f, 1, 2),
									 25000 + iLocal_32 / 5, 3);
			cam::set_cam_active(iLocal_30, 1);
			cam::shake_cam(iLocal_30, "HAND_SHAKE", 0.2f);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			time::set_clock_time(0, 0, 0);
			gameplay::set_weather_type_now("EXTRASUNNY");
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		if (system::timerb() > 12000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 69000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x264A
bool func_20() {
	switch (iLocal_31) {
	case 0:
		entity::set_entity_coords(player::player_ped_id(), 2339.135f, 3033.743f, 49.2209f, 1, 0, 0, 1);
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 0);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 2339.135f, 3033.743f,
																 49.2209f, -0.8334f, 0f, -69.9175f, 45f, 1, 2),
									 23000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 2360.396f, 3041.517f,
																 48.8916f, 2.003f, 0f, -69.8641f, 45f, 1, 2),
									 23000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 2386.251f, 3048.823f,
																 49.832f, 2.003f, 0f, -77.7654f, 45f, 1, 2),
									 23000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 2424.438f, 3057.382f,
																 54.1784f, 9.9176f, 0f, -76.9599f, 45f, 1, 2),
									 23000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 2483.286f, 3071.011f,
																 64.7622f, 10.1908f, 0f, -75.0095f, 45f, 1, 2),
									 23000 + iLocal_32 / 5, 3);
			cam::set_cam_active(iLocal_30, 1);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			cam::shake_cam(iLocal_30, "HAND_SHAKE", 0.1f);
			gameplay::set_weather_type_now("EXTRASUNNY");
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		time::set_clock_time(7, 0, 0);
		if (system::timerb() > 12000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 70000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x2824
bool func_21() {
	switch (iLocal_31) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 2);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -237.0719f, 4715.175f,
																 137.1838f, 3.6968f, 0f, 49.6506f, 45f, 1, 2),
									 23000, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -304.0869f, 4774.08f,
																 141.6331f, 3.4343f, 0f, 49.1929f, 45f, 1, 2),
									 23000, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -366.7834f, 4826.342f,
																 145.2321f, 2.1269f, 0f, 49.7593f, 45f, 1, 2),
									 23000, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -443.3375f, 4887.394f,
																 146.8382f, 2.541f, 0f, 52.2997f, 45f, 1, 2),
									 23000, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -502.994f, 4933.501f,
																 154.1842f, 2.541f, 0f, 52.2997f, 45f, 1, 2),
									 23000, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -547.4118f, 4979.292f,
																 184.8952f, -15.0925f, 0f, 13.8734f, 45f, 1, 2),
									 23000, 3);
			cam::set_cam_active(iLocal_30, 1);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			cam::shake_cam(iLocal_30, "HAND_SHAKE", 0.1f);
			time::set_clock_time(22, 0, 0);
			gameplay::set_weather_type_now("EXTRASUNNY");
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		time::set_clock_time(22, 0, 0);
		if (system::timerb() > 10000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		time::set_clock_time(22, 0, 0);
		if (system::timerb() > 105000) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x2A0A
bool func_22() {
	switch (iLocal_31) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 0);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 3338.006f, -621.7776f,
																 -44.9584f, -14.9351f, 0f, 24.5152f, 45f, 1, 2),
									 18000 + iLocal_32 / 9, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 3287.102f, -490.8297f,
																 -61.6814f, -0.1146f, 0f, 5.9119f, 45f, 1, 2),
									 18000 + iLocal_32 / 9, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 3246.816f, -420.7375f,
																 -40.05f, 18.2685f, 0f, 36.753f, 45f, 1, 2),
									 18000 + iLocal_32 / 9, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 3202.109f, -357.5204f,
																 -24.0778f, 6.5175f, 0f, 50.9221f, 45f, 1, 2),
									 18000 + iLocal_32 / 9, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 3164.882f, -328.2462f,
																 -20.4826f, 9.0396f, 0f, 55.5429f, 45f, 1, 2),
									 18000 + iLocal_32 / 9, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 3140.673f, -303.8229f,
																 -16.9478f, 1.1297f, 0f, 15.8418f, 45f, 1, 2),
									 18000 + iLocal_32 / 9, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 3127.556f, -226.4933f,
																 -22.8197f, -0.6468f, 0f, 23.3618f, 45f, 1, 2),
									 18000 + iLocal_32 / 9, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 3072.322f, -156.1007f,
																 -17.7341f, 3.7494f, 0f, 40.322f, 45f, 1, 2),
									 18000 + iLocal_32 / 9, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 3068.951f, -152.1308f,
																 1.0045f, 6.0711f, 0f, 26.0366f, 45f, 1, 2),
									 18000 + iLocal_32 / 9, 3);
			cam::set_cam_active(iLocal_30, 1);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		if (system::timerb() > 10000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 116000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x2C92
bool func_23() {
	switch (iLocal_31) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 0);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -2026.197f, -2744.839f,
																 19.8858f, -0.3979f, -0.057f, -120.6251f, 45f, 1, 2),
									 20000 + iLocal_32 / 4, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1885.261f, -2826.456f,
																 18.7531f, -0.3979f, -0.057f, -120.6251f, 45f, 1, 2),
									 20000 + iLocal_32 / 4, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1767.411f, -2894.296f,
																 17.8071f, -0.3979f, -0.057f, -120.6251f, 45f, 1, 2),
									 20000 + iLocal_32 / 4, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1631.421f, -2973f,
																 15.6656f, -0.3979f, -0.057f, -120.6251f, 45f, 1, 2),
									 20000 + iLocal_32 / 4, 3);
			cam::set_cam_active(iLocal_30, 1);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		if (system::timerb() > 10000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 50000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x2E0E
bool func_24() {
	switch (iLocal_31) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 2);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1253.068f, -1415.438f,
																 18.0304f, 3.5572f, -0.0007f, 93.1711f, 45f, 1, 2),
									 23000 + iLocal_32 / 4, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1252.216f, -1443.228f,
																 18.03f, 3.5572f, -0.0007f, 88.3789f, 45f, 1, 2),
									 23000 + iLocal_32 / 4, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1253.896f, -1464.018f,
																 18.0297f, 3.5572f, -0.0007f, 82.0894f, 45f, 1, 2),
									 23000 + iLocal_32 / 4, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1261.993f, -1503.591f,
																 18.0293f, 3.5572f, -0.0007f, 70.0711f, 45f, 1, 2),
									 23000 + iLocal_32 / 4, 3);
			cam::set_cam_active(iLocal_30, 1);
			cam::shake_cam(iLocal_30, "HAND_SHAKE", 0.05f);
			time::set_clock_time(19, 10, 0);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		if (system::timerb() > 10000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 60000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x2FA0
bool func_25() {
	switch (iLocal_31) {
	case 0:
		entity::set_entity_coords(player::player_ped_id(), 2581.335f, 2621.898f, 36.8885f, 1, 0, 0, 1);
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 2);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 2581.335f, 2621.898f,
																 36.8885f, -0.2545f, 0f, 166.5471f, 45f, 1, 2),
									 25000 + iLocal_32 / 3, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 2581.335f, 2621.879f,
																 41.8131f, -0.2545f, 0f, 166.5471f, 45f, 1, 2),
									 25000 + iLocal_32 / 3, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 2581.333f, 2621.83f,
																 52.8645f, -0.2545f, 0f, 166.5471f, 45f, 1, 2),
									 25000 + iLocal_32 / 3, 3);
			cam::set_cam_active(iLocal_30, 1);
			cam::shake_cam(iLocal_30, "HAND_SHAKE", 0.05f);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			time::set_clock_time(20, 0, 0);
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		if (system::timerb() > 12000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 50000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x3106
bool func_26() {
	switch (iLocal_31) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 0);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -262.8899f, 308.8326f,
																 93.8405f, 0.1817f, 0f, -159.0937f, 45f, 1, 2),
									 23000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -248.2659f, 274.7704f,
																 93.9581f, 0.1817f, 0f, -155.6208f, 45f, 1, 2),
									 23000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -231.0772f, 231.8714f,
																 96.5047f, 0.1817f, 0f, -159.1501f, 45f, 1, 2),
									 23000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -187.7147f, 94.3744f,
																 117.7859f, 2.0378f, 0f, -168.487f, 45f, 1, 2),
									 23000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -125.3929f, -211.5931f,
																 129.3175f, 2.0378f, 0f, -168.487f, 45f, 1, 2),
									 23000 + iLocal_32 / 5, 3);
			cam::set_cam_active(iLocal_30, 1);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			gameplay::set_weather_type_now("EXTRASUNNY");
			time::set_clock_time(0, 0, 0);
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		if (system::timerb() > 10000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 70000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x32B7
bool func_27() {
	switch (iLocal_31) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 2);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -865.1187f, -2432.063f,
																 14.3939f, 3.4252f, 0f, 148.9827f, 45f, 1, 2),
									 22000 + iLocal_32 / 3, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -864.8112f, -2431.552f,
																 23.657f, 10.5248f, 0f, 148.9827f, 45f, 1, 2),
									 22000 + iLocal_32 / 3, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -865.5177f, -2432.725f,
																 98.3512f, -5.9302f, 0f, 148.9827f, 45f, 1, 2),
									 35000 + iLocal_32 / 3, 3);
			cam::set_cam_active(iLocal_30, 1);
			cam::shake_cam(iLocal_30, "HAND_SHAKE", 0.05f);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			gameplay::set_weather_type_now("CLEAR");
			time::set_clock_time(19, 0, 0);
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		if (system::timerb() > 12000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 48000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x340A
bool func_28() {
	switch (iLocal_31) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 0);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 1877.069f, 4189.788f,
																 37.3659f, 7.5546f, 0.0017f, 73.6847f, 45f, 1, 2),
									 26000 + iLocal_32 / 4, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 1488.104f, 4241.624f,
																 37.3659f, 7.5546f, 0.0017f, 64.4795f, 45f, 1, 2),
									 26000 + iLocal_32 / 4, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 1290.755f, 4243.994f,
																 37.3659f, 7.5546f, 0.0017f, 20.472f, 45f, 1, 2),
									 26000 + iLocal_32 / 4, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 1076.597f, 4244.019f,
																 37.3659f, 16.9531f, 0.0017f, 20.472f, 45f, 1, 2),
									 26000 + iLocal_32 / 4, 3);
			cam::set_cam_active(iLocal_30, 1);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			time::set_clock_time(20, 0, 0);
			gameplay::set_weather_type_now("CLEAR");
			iLocal_121 = pathfind::add_navmesh_blocking_object(1132.87f, -564.3635f, 55.8749f, 4f, 4f, 4f, 0f, 0, 7);
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		if (system::timerb() > 10000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 70000 + iLocal_32) {
			pathfind::remove_navmesh_blocking_object(iLocal_121);
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x35B6
bool func_29() {
	switch (iLocal_31) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 0);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 2432.456f, 3784.288f,
																 40.5582f, 3.6923f, 0f, -92.5777f, 45f, 1, 2),
									 16500 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 2448.433f, 3784.291f,
																 41.2309f, 8.4183f, 0f, -91.8215f, 45f, 1, 2),
									 16500 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 2461.687f, 3784.315f,
																 45.2641f, 8.4183f, 0f, -91.8215f, 45f, 1, 2),
									 16500 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 2487.57f, 3783.681f,
																 49.687f, 8.4183f, 0f, -91.8215f, 45f, 1, 2),
									 16500 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 2580.391f, 3780.907f,
																 83.9326f, 32.8287f, 0f, -91.3104f, 45f, 1, 2),
									 16500 + iLocal_32 / 5, 3);
			cam::set_cam_active(iLocal_30, 1);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			time::set_clock_time(8, 0, 0);
			gameplay::set_weather_type_now("EXTRASUNNY");
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		if (system::timerb() > 10000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 65000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x3768
bool func_30() {
	switch (iLocal_31) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 0);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 3587.535f, 4860.792f,
																 3.9609f, 6.6324f, -0.0179f, 27.2506f, 45f, 1, 2),
									 22000 + iLocal_32 / 4, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 3533.498f, 4960.601f,
																 3.9609f, 6.2686f, -0.0179f, 27.2506f, 45f, 1, 2),
									 22000 + iLocal_32 / 4, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 3459.745f, 5087.12f,
																 5.2853f, 6.2686f, -0.0179f, 27.2506f, 45f, 1, 2),
									 22000 + iLocal_32 / 4, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 3375.903f, 5228.506f,
																 5.2853f, 14.2505f, -0.0179f, 28.1868f, 45f, 1, 2),
									 22000 + iLocal_32 / 4, 3);
			cam::set_cam_active(iLocal_30, 1);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			time::set_clock_time(7, 0, 0);
			gameplay::set_weather_type_now("CLOUDS");
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		if (system::timerb() > 12000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 60000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x38F2
bool func_31() {
	switch (iLocal_31) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 0);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -2204.959f, 1620.865f,
																 267.1454f, -8.5002f, -0.0025f, -49.987f, 45f, 1, 2),
									 22000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -2043.704f, 1738.258f,
																 219.7041f, -12.5074f, -0.0025f, -51.8025f, 45f, 1, 2),
									 22000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1910.65f, 1852.888f,
																 179.1081f, -7.4417f, -0.0025f, -31.5586f, 45f, 1, 2),
									 22000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1864.61f, 1979.204f,
																 161.5704f, -5.0407f, -0.0025f, -33.7065f, 45f, 1, 2),
									 22000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1789.553f, 2127.887f,
																 140.8785f, -1.5848f, -0.0025f, -25.4394f, 45f, 1, 2),
									 22000 + iLocal_32 / 5, 3);
			cam::set_cam_active(iLocal_30, 1);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			time::set_clock_time(17, 0, 0);
			gameplay::set_weather_type_now("CLEAR");
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		if (system::timerb() > 13000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 65000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x3AB8
bool func_32() {
	switch (iLocal_31) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 0);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 920.1297f, -2895.537f,
																 30.41158f, -42.44789f, -0.00047f, -166.2714f,
																 50.09348f, 1, 2),
									 20000 + iLocal_32 / 6, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 920.1297f, -2971.776f,
																 30.41158f, -42.44789f, -0.00047f, -166.2714f,
																 50.09348f, 1, 2),
									 20000 + iLocal_32 / 6, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 920.1297f, -3010.082f,
																 30.41158f, -42.44789f, -0.00047f, -166.2714f,
																 50.09348f, 1, 2),
									 20000 + iLocal_32 / 6, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 920.1297f, -3059.167f,
																 30.41158f, -42.44789f, -0.00047f, -166.2714f,
																 50.09348f, 1, 2),
									 20000 + iLocal_32 / 6, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 920.1297f, -3097.478f,
																 30.41158f, -42.44789f, -0.00047f, -166.2714f,
																 50.09348f, 1, 2),
									 20000 + iLocal_32 / 6, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", 920.1297f, -3124.06f,
																 30.4116f, -42.4479f, -0.0005f, -166.2714f, 50.09348f,
																 1, 2),
									 20000 + iLocal_32 / 6, 3);
			cam::set_cam_active(iLocal_30, 1);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			time::set_clock_time(17, 0, 0);
			gameplay::set_weather_type_now("CLEAR");
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		if (system::timerb() > 13000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 90000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x3CB9
bool func_33() {
	switch (iLocal_31) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 0);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1355.741f, 187.977f,
																 59.08f, 1.8665f, 0f, -135.1039f, 45f, 1, 2),
									 20000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1329.714f, 161.8555f,
																 57.9754f, 1.8665f, 0f, -135.1039f, 45f, 1, 2),
									 20000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1283.708f, 115.683f,
																 60.0995f, 1.8665f, 0f, -135.1039f, 45f, 1, 2),
									 20000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1201.903f, 48.3632f,
																 63.5646f, 1.8665f, 0f, -124.3969f, 45f, 1, 2),
									 20000 + iLocal_32 / 5, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -984.733f, -100.3193f,
																 82.0615f, 4.914f, 0f, -124.3969f, 45f, 1, 2),
									 20000 + iLocal_32 / 5, 3);
			cam::set_cam_active(iLocal_30, 1);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			time::set_clock_time(7, 0, 0);
			gameplay::set_weather_type_now("EXTRASUNNY");
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		if (system::timerb() > 10000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 75000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x3E6A
bool func_34() {
	switch (iLocal_31) {
	case 0:
		if (cam::is_screen_faded_out()) {
			cam::destroy_all_cams(0);
			iLocal_30 = cam::create_cam("DEFAULT_SPLINE_CAMERA", 0);
			cam::_0xD1B0F412F109EA5D(iLocal_30, 2);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1692.157f, -1108.044f,
																 13.0504f, 0.7654f, 0.0022f, -92.6355f, 45f, 1, 2),
									 27000 + iLocal_32 / 4, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1692.278f, -1108.037f,
																 22.1027f, 0.7654f, 0.0022f, -92.6355f, 45f, 1, 2),
									 27000 + iLocal_32 / 4, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1689.383f, -1106.982f,
																 60.2891f, 2.9995f, 0.0022f, -72.0565f, 45f, 1, 2),
									 27000 + iLocal_32 / 4, 3);
			cam::_0x0FB82563989CF4FB(iLocal_30,
									 cam::create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", -1689.383f, -1106.982f,
																 60.2891f, 2.9995f, 0.0022f, -72.0565f, 45f, 1, 2),
									 27000 + iLocal_32 / 4, 3);
			cam::set_cam_active(iLocal_30, 1);
			cam::shake_cam(iLocal_30, "HAND_SHAKE", 0.05f);
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			time::set_clock_time(0, 0, 0);
			system::settimerb(0);
			iLocal_31++;
		}
		break;

	case 1:
		if (system::timerb() > 10000) {
			func_4();
			iLocal_31++;
		}
		break;

	case 2:
		if (system::timerb() > 35000 + iLocal_32) {
			func_35();
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x3FFB
void func_35() {
	cam::do_screen_fade_out(5000);
	iLocal_31 = 0;
}

// Position - 0x4012
void func_36() {
	unk1::_0xEB2D525B57F42B40();
	func_37();
}

// Position - 0x4022
void func_37() { Global_17151.f_134 = 1; }

// Position - 0x4030
void func_38() {
	int iVar0;

	streaming::remove_ipl("prologue01");
	streaming::remove_ipl("prologue01c");
	streaming::remove_ipl("prologue01d");
	streaming::remove_ipl("prologue01e");
	streaming::remove_ipl("prologue01f");
	streaming::remove_ipl("prologue01g");
	streaming::remove_ipl("prologue01h");
	streaming::remove_ipl("prologue01i");
	streaming::remove_ipl("prologue01j");
	streaming::remove_ipl("prologue01k");
	streaming::remove_ipl("prologue01z");
	streaming::remove_ipl("prologue02");
	streaming::remove_ipl("prologue03");
	streaming::remove_ipl("prologue03b");
	streaming::remove_ipl("prologue04");
	streaming::remove_ipl("prologue04b");
	streaming::remove_ipl("prologue05");
	streaming::remove_ipl("prologue05b");
	streaming::remove_ipl("prologue06");
	streaming::remove_ipl("prologue06b");
	streaming::remove_ipl("prologuerd");
	streaming::request_ipl("prologuerdb");
	streaming::remove_ipl("prologue_occl");
	pathfind::set_roads_in_angled_area(5526.24f, -5137.23f, 61.78925f, 3679.327f, -4973.879f, 125.0828f, 192f, 0, 1, 1);
	pathfind::set_roads_in_angled_area(3691.211f, -4941.24f, 94.59368f, 3511.115f, -4869.191f, 126.7621f, 16f, 0, 1, 1);
	pathfind::set_roads_in_angled_area(3510.004f, -4865.81f, 94.69557f, 3204.424f, -4833.817f, 126.8152f, 16f, 0, 1, 1);
	pathfind::set_roads_in_angled_area(3186.534f, -4832.798f, 109.8148f, 3202.187f, -4833.993f, 114.815f, 16f, 0, 1, 1);
	cam::render_script_cams(0, 0, 3000, 1, 0, 0);
	system::wait(0);
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		entity::freeze_entity_position(player::player_ped_id(), 0);
		entity::set_entity_invincible(player::player_ped_id(), 0);
		entity::set_entity_visible(player::player_ped_id(), 1, 0);
		entity::set_entity_coords(player::player_ped_id(), -1579.245f, 5162.347f, 18.7032f, 1, 0, 0, 1);
		entity::set_entity_heading(player::player_ped_id(), 187.9143f);
		ped::set_enable_scuba(player::player_ped_id(), 0);
	}
	audio::set_mobile_radio_enabled_during_gameplay(0);
	audio::set_mobile_phone_radio_state(0);
	audio::_0x1654F24A88A8E3FE("RADIO_01_CLASS_ROCK");
	audio::skip_radio_forward();
	iVar0 = gameplay::get_game_timer() + 5000;
	streaming::new_load_scene_start_sphere(-1579.245f, 5162.347f, 18.7032f, 150f, 0);
	while (gameplay::get_game_timer() < iVar0 && !streaming::is_new_load_scene_loaded()) {
		system::wait(0);
	}
	if (streaming::is_new_load_scene_active()) {
		streaming::new_load_scene_stop();
	}
	time::pause_clock(0);
	gameplay::set_credits_active(0);
	func_45(0, 0, 2000, 1);
	player::set_max_wanted_level(5);
	gameplay::_0xB51B9AB9EF81868C(0);
	gameplay::set_time_scale(1f);
	Global_88267 = 0;
	func_44(1, 0);
	func_40(0, 0);
	func_39();
}

// Position - 0x4298
void func_39() {
	gameplay::set_credits_active(0);
	script::terminate_this_thread();
}

// Position - 0x42A9
void func_40(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	var uVar2;

	if (!Global_55824) {
		Global_55824 = iParam1;
	}
	if (iParam0) {
		if (func_43(0) && Global_69948.f_1 == 1 && func_42(Global_69948)) {
		}
		else {
			Global_55822 = 1;
		}
	}
	if (Global_101700.f_8044 || func_43(0)) {
		iVar0 = func_41();
		iVar1 = Global_82576[iVar0 /*5*/];
		uVar2 = Global_69971.f_109[iVar1 /*4*/];
		if (iVar0 == -1) {
			if (Global_101700.f_8044) {
			}
			return;
		}
		if (gameplay::is_bit_set(Global_82576[iVar0 /*5*/].f_1, 4)) {
			return;
		}
		if (gameplay::is_bit_set(Global_82576[iVar0 /*5*/].f_1, 5)) {
			return;
		}
		gameplay::set_bit(&Global_82576[iVar0 /*5*/].f_1, 4);
		gameplay::set_bit(&Global_69950, 1);
		Global_69966 = uVar2;
		Global_69967 = gameplay::get_game_timer();
	}
}

// Position - 0x437F
int func_41() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7) {
		if (gameplay::is_bit_set(Global_82576[iVar0 /*5*/].f_1, 2)) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x43B4
int func_42(int iParam0) {
	switch (iParam0) {
	case 71: return 1;

	case 86: return 1;

	case 91: return 1;

	default: return 0;
	}
	return 0;
}

// Position - 0x43F2
int func_43(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return 1;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x441D
void func_44(int iParam0, int iParam1) {
	Global_69970 = iParam1;
	if (Global_55816) {
		return;
	}
	if (Global_55843) {
		Global_55843 = 0;
		return;
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("mission_stat_watcher")) > 0) {
		if (Global_55816) {
		}
		Global_55842 = iParam0;
		Global_55816 = 1;
		Global_55827 = 1;
	}
}

// Position - 0x4467
void func_45(int iParam0, int iParam1, int iParam2, int iParam3) {
	cam::set_widescreen_borders(iParam0, 0);
	if (iParam3 == 1) {
		player::set_player_control(player::player_id(), !iParam0, 64);
	}
	else {
		player::set_player_control(player::player_id(), !iParam0, 0);
	}
	cam::render_script_cams(iParam0, iParam1, iParam2, 1, 0, 0);
	ui::clear_help(1);
	ui::clear_prints();
	func_52(iParam0, 1, 1, 0);
	func_46(iParam0);
	ui::display_hud(!iParam0);
	ui::display_radar(!iParam0);
}

// Position - 0x44CB
void func_46(int iParam0) {
	if (iParam0) {
		func_51();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
			gameplay::set_bit(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_50(0)) {
			func_47(0);
		}
	}
	else if (Global_14443.f_1 == 1) {
		if (Global_14443.f_1 != 0) {
			Global_14443.f_1 = 3;
		}
	}
}

// Position - 0x452E
void func_47(int iParam0) {
	if (Global_14604) {
		func_49(0, 0);
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
	if (!func_48()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0x459E
int func_48() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return 1;
	}
	return 0;
}

// Position - 0x45C5
void func_49(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_50(0)) {
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

// Position - 0x4639
bool func_50(int iParam0) {
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

// Position - 0x4693
void func_51() {
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10) {
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

// Position - 0x46BC
void func_52(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0) {
		player::special_ability_deactivate_fast(player::player_id());
		player::set_all_random_peds_flee(player::player_id(), 1);
		player::set_police_ignore_player(player::player_id(), 1);
		func_60(1);
		ui::_0xA8FDB297A8D25FBA();
		ui::_0xFDB423997FA30340();
		if (Global_14443.f_1 > 3) {
			if (audio::is_mobile_phone_call_ongoing()) {
				audio::stop_scripted_conversation(0);
			}
			if (!func_48()) {
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_59(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		Global_69700 = 1;
	}
	else {
		func_60(0);
		ui::_0xE1CD1E48E025E661();
		Global_55828 = 0;
		if (iParam1) {
			graphics::_0x03FC694AE06C5A20();
		}
		player::set_all_random_peds_flee(player::player_id(), 0);
		player::set_police_ignore_player(player::player_id(), 0);
		func_59(0, iParam3, iParam2, 0);
		if (network::network_is_game_in_progress()) {
			if (!ped::is_ped_injured(player::player_ped_id()) && !func_57(player::player_id()) &&
				!func_54(player::player_id(), 0) && !func_53()) {
				entity::set_entity_invincible(player::player_ped_id(), 0);
			}
		}
		else if (!ped::is_ped_injured(player::player_ped_id()) && !func_57(player::player_id())) {
			entity::set_entity_invincible(player::player_ped_id(), 0);
		}
		Global_69700 = 0;
	}
}

// Position - 0x47D5
bool func_53() { return gameplay::is_bit_set(Global_1591201[player::player_id() /*602*/].f_39.f_18, 14); }

// Position - 0x47F2
bool func_54(int iParam0, int iParam1) {
	bool bVar0;

	if (iParam0 == player::player_id()) {
		bVar0 = func_55(-1, 0) == 8;
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

// Position - 0x483D
int func_55(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1) {
		iVar1 = func_56();
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

// Position - 0x487E
var func_56() { return Global_1312735; }

// Position - 0x488A
int func_57(int iParam0) {
	if (func_54(iParam0, 0)) {
		return 1;
	}
	if (func_58()) {
		if (iParam0 == player::player_id()) {
			return 1;
		}
	}
	if (gameplay::is_bit_set(Global_2421664[iParam0 /*358*/].f_198, 2)) {
		return 1;
	}
	return 0;
}

// Position - 0x48CC
bool func_58() { return gameplay::is_bit_set(Global_2359301, 3); }

// Position - 0x48DD
int func_59(int iParam0, int iParam1, var uParam2, int iParam3) {
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

// Position - 0x4910
void func_60(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_2313, 13);
	}
	else {
		gameplay::clear_bit(&Global_2313, 13);
	}
}
