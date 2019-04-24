#pragma region Local Var //{
int iLocal_0 = 0;
int iLocal_1 = 0;
#pragma endregion //}

void __EntryFunction__() {
	int iVar0;

	iLocal_0 = -1;
	gameplay::network_set_script_is_safe_for_network_game();
	streaming::request_ipl("prologue06_int");
	streaming::request_ipl("prologue01");
	streaming::request_ipl("prologue02");
	streaming::request_ipl("prologue03");
	streaming::request_ipl("prologue04");
	streaming::request_ipl("prologue05");
	streaming::request_ipl("prologue06");
	streaming::request_ipl("prologuerd");
	streaming::request_ipl("Prologue01c");
	streaming::request_ipl("Prologue01d");
	streaming::request_ipl("Prologue01e");
	streaming::request_ipl("Prologue01f");
	streaming::request_ipl("Prologue01g");
	streaming::request_ipl("prologue01h");
	streaming::request_ipl("prologue01i");
	streaming::request_ipl("prologue01j");
	streaming::request_ipl("prologue01k");
	streaming::request_ipl("prologue01z");
	streaming::request_ipl("prologue03b");
	streaming::request_ipl("prologue04b");
	streaming::request_ipl("prologue05b");
	streaming::request_ipl("prologue06b");
	streaming::request_ipl("prologuerdb");
	streaming::request_ipl("prologue_occl");
	streaming::request_ipl("DES_ProTree_start");
	streaming::request_ipl("DES_ProTree_start_lod");
	streaming::request_ipl("prologue04_cover");
	streaming::request_ipl("prologue03_grv_fun");
	streaming::remove_ipl("prologue03_grv_dug");
	streaming::remove_ipl("prologue_grv_torch");
	streaming::_0xAF12610C644A35C9("prologue", 1);
	streaming::request_model(joaat("csb_prolsec"));
	while (!streaming::has_model_loaded(joaat("csb_prolsec"))) {
		system::wait(0);
	}
	player::set_player_model(player::player_id(), joaat("csb_prolsec"));
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		entity::set_entity_coords(player::player_ped_id(), 5313.8f, -5207.2f, 83.5f, 1, 0, 0, 1);
		entity::set_entity_heading(player::player_ped_id(), 169.2f);
	}
	ui::display_radar(0);
	player::set_player_control(player::player_id(), 0, 0);
	streaming::new_load_scene_start_sphere(5312.996f, -5208.671f, 83.90526f, 10f, 0);
	iVar0 = gameplay::get_game_timer() + 10000;
	while (!streaming::is_new_load_scene_loaded() && gameplay::get_game_timer() < iVar0) {
		system::wait(0);
	}
	script::shutdown_loading_screen();
	audio::start_audio_scene("MISSION_FAILED_SCENE");
	cam::do_screen_fade_in(2500);
	streaming::new_load_scene_stop();
	ui::request_additional_text("NG_INSTALL", 0);
	while (true) {
		if (!cam::is_screen_faded_in()) {
			cam::do_screen_fade_in(0);
		}
		graphics::draw_rect(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
		graphics::draw_rect(0.5f, 0.5f, 0.8f, 0.8f, 20, 20, 20, 255, 0);
		ui::set_text_scale(0.5f, 0.5f);
		ui::set_text_centre(1);
		if (system::timera() > 10000 && ui::has_additional_text_loaded(0)) {
			iLocal_0 = gameplay::get_random_int_in_range(0, 5);
			if (iLocal_0 - iLocal_1 != 0) {
				iLocal_1 = iLocal_0;
				system::settimera(0);
			}
		}
		else {
			switch (iLocal_0) {
			case 0: func_1(0.5f, 0.4f, "NG_INST_TT_1", 0); break;

			case 1: func_1(0.5f, 0.4f, "NG_INST_TT_2", 0); break;

			case 2: func_1(0.5f, 0.4f, "NG_INST_TT_3", 0); break;

			case 3: func_1(0.5f, 0.4f, "NG_INST_TT_4", 0); break;

			case 4: func_1(0.5f, 0.4f, "NG_INST_TT_5", 0); break;
			}
		}
		ui::disable_frontend_this_frame();
		if (gameplay::_0x14832BF2ABA53FC5()) {
			gameplay::_0xC79AE21974B01FB2();
			return;
		}
		system::wait(0);
	}
}

// Position - 0x2F8
void func_1(float fParam0, float fParam1, char *sParam2, int iParam3) {
	ui::begin_text_command_display_text(sParam2);
	ui::end_text_command_display_text(fParam0, fParam1, iParam3);
}
