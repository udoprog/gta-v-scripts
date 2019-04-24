#pragma region Local Var //{
bool bLocal_0 = 0;
bool bLocal_1 = 0;
float fLocal_2 = 0f;
float fLocal_3 = 0f;
float fLocal_4 = 0f;
float fLocal_5 = 0f;
float fLocal_6 = 0f;
float fLocal_7 = 0f;
float fLocal_8 = 0f;
#pragma endregion //}

void __EntryFunction__() {
	bLocal_0 = true;
	bLocal_1 = true;
	fLocal_2 = 1f;
	fLocal_3 = 1f;
	fLocal_4 = 1f;
	fLocal_5 = 1f;
	fLocal_6 = 1f;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	gameplay::set_mission_flag(1);
	if (player::has_force_cleanup_occurred(3)) {
		func_1();
	}
	while (true) {
		system::wait(0);
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (bLocal_0) {
				vehicle::set_vehicle_density_multiplier_this_frame(fLocal_2);
			}
			vehicle::set_random_vehicle_density_multiplier_this_frame(fLocal_3);
			vehicle::set_parked_vehicle_density_multiplier_this_frame(fLocal_4);
			vehicle::_set_some_vehicle_density_multiplier_this_frame(fLocal_5);
			if (bLocal_1) {
				ped::set_ped_density_multiplier_this_frame(fLocal_6);
			}
			ped::set_scenario_ped_density_multiplier_this_frame(fLocal_7, fLocal_8);
		}
	}
}

// Position - 0x7C
void func_1() {
	vehicle::set_random_trains(1);
	script::terminate_this_thread();
}
