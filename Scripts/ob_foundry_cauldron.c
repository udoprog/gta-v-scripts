#pragma region Local Var //{
var uLocal_0 = 0;
var uLocal_1 = 0;
int iLocal_2 = 0;
int iLocal_3 = 0;
int iLocal_4 = 0;
int iScriptParam_0 = 0;
#pragma endregion //}

void __EntryFunction__() {
	int iVar0;

	if (player::has_force_cleanup_occurred(2)) {
		func_1();
	}
	while (true) {
		system::wait(0);
		if (entity::does_entity_exist(iScriptParam_0)) {
			if (brain::is_object_within_brain_activation_range(iScriptParam_0) &&
				script::_get_number_of_instances_of_script_with_name_hash(joaat("finalec1")) == 0) {
				switch (iLocal_2) {
				case 0:
					if (!ped::is_ped_injured(player::player_ped_id())) {
						iVar0 = interior::get_interior_from_entity(player::player_ped_id());
						if (interior::is_valid_interior(iVar0)) {
							if (interior::is_interior_ready(iVar0)) {
								if (interior::is_interior_scene()) {
									streaming::request_ptfx_asset();
									iLocal_2 = 1;
								}
							}
						}
					}
					break;

				case 1:
					if (streaming::has_ptfx_asset_loaded()) {
						if (!ped::is_ped_injured(player::player_ped_id())) {
							if (!entity::does_entity_exist(iLocal_4)) {
								iLocal_4 = object::get_closest_object_of_type(
									1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
							}
							if (!graphics::does_particle_fx_looped_exist(iLocal_3)) {
								if (entity::does_entity_exist(iLocal_4)) {
									iVar0 = interior::get_interior_from_entity(player::player_ped_id());
									if (interior::is_valid_interior(iVar0)) {
										if (interior::is_interior_ready(iVar0)) {
											if (interior::is_interior_scene()) {
												iLocal_3 = graphics::start_particle_fx_looped_on_entity(
													"scr_obfoundry_"
													"cauldron_steam",
													iLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
											}
										}
									}
								}
							}
						}
					}
					break;

				case 2: break;
				}
			}
			else {
				func_1();
			}
		}
		else {
			func_1();
		}
	}
}

// Position - 0x135
void func_1() {
	if (graphics::does_particle_fx_looped_exist(iLocal_3)) {
		graphics::stop_particle_fx_looped(iLocal_3, 0);
	}
	if (entity::does_entity_exist(iLocal_4)) {
		entity::set_object_as_no_longer_needed(&iLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	script::terminate_this_thread();
}

// Position - 0x167
void func_2(char *sParam0) { func_3(sParam0); }

// Position - 0x175
void func_3(char *sParam0) {
	if (gameplay::are_strings_equal(sParam0, sParam0)) {
	}
}
