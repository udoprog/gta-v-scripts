#pragma region Local Var //{
int iLocal_0 = 0;
int iLocal_1 = 0;
vector3 vLocal_2 = {0f, 0f, 0f};
float fLocal_5 = 0f;
char *sLocal_6 = NULL;
int iLocal_7 = 0;
char *sLocal_8 = NULL;
int iLocal_9 = 0;
int iScriptParam_0 = 0;
#pragma endregion //}

void __EntryFunction__() {
	sLocal_6 = "Poledance_01";
	iLocal_7 = joaat("a_f_y_beach_01");
	sLocal_8 = "MISSSTRIP_CLUB";
	if (entity::does_entity_exist(iScriptParam_0)) {
		entity::freeze_entity_position(iScriptParam_0, 1);
		vLocal_2 = {entity::get_offset_from_entity_in_world_coords(iScriptParam_0, 0f, 0f, 0f)};
		fLocal_5 = entity::get_entity_heading(iScriptParam_0);
		entity::set_entity_collision(iScriptParam_0, 0, 0);
	}
	while (true) {
		system::wait(0);
		if (entity::does_entity_exist(iScriptParam_0)) {
			if (brain::is_object_within_brain_activation_range(iScriptParam_0)) {
				switch (iLocal_0) {
				case 0:
					if (func_5()) {
						func_4();
						iLocal_0 = 2;
					}
					break;

				case 2:
					func_3();
					if (func_2()) {
						entity::set_entity_collision(iScriptParam_0, 1, 0);
						iLocal_0 = 3;
					}
					break;

				case 3:
					if (!ped::is_ped_injured(iLocal_1)) {
						ai::task_cower(iLocal_1, -1);
						player::set_all_random_peds_flee(player::player_id(), 1);
						ped::set_ped_keep_task(iLocal_1, 1);
						script::terminate_this_thread();
					}
					break;
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

// Position - 0xDC
void func_1() {
	if (!entity::is_entity_dead(iLocal_1, 0)) {
		if (!entity::is_entity_on_screen(iLocal_1)) {
			ped::delete_ped(&iLocal_1);
		}
		else {
			ped::set_ped_keep_task(iLocal_1, 1);
		}
	}
	script::terminate_this_thread();
}

// Position - 0x10D
bool func_2() {
	vector3 vVar0;

	vVar0 = {2f, 2f, 0.5f};
	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (!ped::is_ped_injured(iLocal_1)) {
			if (entity::is_entity_at_entity(player::player_ped_id(), iLocal_1, vVar0, 0, 1, 0)) {
				return true;
			}
			if (entity::has_entity_been_damaged_by_entity(iLocal_1, player::player_ped_id(), 1)) {
				return true;
			}
			if (entity::is_entity_touching_entity(player::player_ped_id(), iLocal_1)) {
				return true;
			}
		}
		if (ped::is_ped_shooting(player::player_ped_id())) {
			return true;
		}
	}
	return false;
}

// Position - 0x181
void func_3() {
	if (!ped::is_ped_injured(iLocal_1)) {
		if (ai::get_script_task_status(iLocal_1, -2017877118) == 7) {
			ai::task_play_anim(iLocal_1, sLocal_8, sLocal_6, 8f, -8f, -1, 0, 0, 0, 0, 0);
		}
		else if (entity::has_entity_anim_finished(iLocal_1, sLocal_8, sLocal_6, 3)) {
			ai::task_play_anim(iLocal_1, sLocal_8, sLocal_6, 8f, -8f, -1, 0, 0, 0, 0, 0);
		}
		else if (!iLocal_9) {
			if (entity::is_entity_playing_anim(iLocal_1, sLocal_8, sLocal_6, 3)) {
				entity::set_entity_anim_current_time(iLocal_1, sLocal_8, sLocal_6,
													 gameplay::get_random_float_in_range(0f, 1f));
				iLocal_9 = 1;
			}
		}
	}
}

// Position - 0x215
void func_4() {
	if (entity::is_entity_dead(iLocal_1, 0)) {
		iLocal_1 = ped::create_ped(5, iLocal_7, vLocal_2.x, vLocal_2.y, vLocal_2.z, fLocal_5, 1, 1);
		ped::set_ped_random_component_variation(iLocal_1, 0);
		ped::set_ped_can_be_targetted(iLocal_1, 0);
		ped::set_blocking_of_non_temporary_events(iLocal_1, 1);
	}
}

// Position - 0x253
bool func_5() {
	streaming::request_model(iLocal_7);
	streaming::request_anim_dict(sLocal_8);
	if (streaming::has_model_loaded(iLocal_7) && streaming::has_anim_dict_loaded(sLocal_8)) {
		return true;
	}
	else {
		streaming::request_model(iLocal_7);
		streaming::request_anim_dict(sLocal_8);
	}
	return false;
}
