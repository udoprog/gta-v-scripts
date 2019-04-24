#pragma region Local Var //{
int iLocal_0 = 0;
vector3 vLocal_1 = {0f, 0f, 0f};
int iLocal_4 = 0;
float fLocal_5 = 0f;
int iLocal_6 = 0;
int iLocal_7 = 0;
bool bLocal_8 = 0;
int iLocal_9 = 0;
#pragma endregion //}

void __EntryFunction__() {
	vLocal_1 = {613f, 6438f, 31f};
	fLocal_5 = 5f;
	iLocal_6 = 1;
	gameplay::set_mission_flag(1);
	if (player::has_force_cleanup_occurred(3)) {
		func_1();
	}
	vehicle::set_random_trains(0);
	vehicle::delete_all_trains();
	if (!ped::is_ped_injured(player::player_ped_id())) {
		entity::set_entity_coords(player::player_ped_id(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		entity::set_entity_heading(player::player_ped_id(), -177f);
		cam::set_gameplay_cam_relative_heading(0f);
	}
	streaming::request_model(joaat("freight"));
	streaming::request_model(joaat("freightcar"));
	streaming::request_model(joaat("freightgrain"));
	streaming::request_model(joaat("freightcont1"));
	streaming::request_model(joaat("freightcont2"));
	streaming::request_model(joaat("tankercar"));
	streaming::request_model(joaat("metrotrain"));
	while (!streaming::has_model_loaded(joaat("freight")) || !streaming::has_model_loaded(joaat("freightcar")) ||
		   !streaming::has_model_loaded(joaat("freightgrain")) || !streaming::has_model_loaded(joaat("freightcont1")) ||
		   !streaming::has_model_loaded(joaat("freightcont2")) || !streaming::has_model_loaded(joaat("tankercar")) ||
		   !streaming::has_model_loaded(joaat("metrotrain"))) {
		system::wait(0);
	}
	while (true) {
		system::wait(0);
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (iLocal_7) {
				if (entity::does_entity_exist(iLocal_0)) {
					vehicle::delete_mission_train(&iLocal_0);
				}
				iLocal_0 = vehicle::create_mission_train(iLocal_4, vLocal_1, iLocal_6);
				iLocal_7 = 0;
			}
			if (iLocal_9) {
				vLocal_1 = {cam::_get_gameplay_cam_coords()};
				iLocal_9 = 0;
			}
			if (vehicle::is_vehicle_driveable(iLocal_0, 0) && !entity::is_entity_dead(iLocal_0, 0)) {
				vehicle::set_train_speed(iLocal_0, fLocal_5);
				vehicle::set_train_cruise_speed(iLocal_0, fLocal_5);
			}
			if (bLocal_8) {
				func_1();
			}
		}
	}
}

// Position - 0x1A5
void func_1() {
	vehicle::set_random_trains(1);
	script::terminate_this_thread();
}
