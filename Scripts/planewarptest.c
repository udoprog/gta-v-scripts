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
vector3 vLocal_19[2] = {{0f, 0f, 0f}, {0f, 0f, 0f}};
float fLocal_26[2] = {0f, 0f};
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
	if (player::has_force_cleanup_occurred(3)) {
		func_1();
	}
	gameplay::set_mission_flag(1);
	streaming::request_model(joaat("cuban800"));
	while (!streaming::has_model_loaded(joaat("cuban800"))) {
		system::wait(0);
	}
	vLocal_19[0 /*3*/] = {1169.976f, 3592.572f, 32.6481f};
	vLocal_19[1 /*3*/] = {1215.738f, 3586.608f, 33.5131f};
	fLocal_26[0] = 277.7043f;
	fLocal_26[1] = 77.1113f;
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		entity::set_entity_coords(player::player_ped_id(), 1220.202f, 3596.281f, 33.259f, 1, 0, 0, 1);
	}
	streaming::load_scene(1220.202f, 3596.281f, 33.259f);
	iLocal_18 = vehicle::create_vehicle(joaat("cuban800"), vLocal_19[0 /*3*/], fLocal_26[0], 1, 1);
	vehicle::set_vehicle_on_ground_properly(iLocal_18, 1084227584);
	streaming::set_model_as_no_longer_needed(joaat("cuban800"));
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		ped::set_ped_into_vehicle(player::player_ped_id(), iLocal_18, -1);
	}
	while (true) {
		func_1();
		system::wait(0);
	}
}

// Position - 0x135
void func_1() {
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		ai::clear_ped_tasks_immediately(player::player_ped_id());
	}
	if (entity::does_entity_exist(iLocal_18)) {
		vehicle::delete_vehicle(&iLocal_18);
	}
	streaming::set_model_as_no_longer_needed(joaat("cuban800"));
	script::terminate_this_thread();
}
