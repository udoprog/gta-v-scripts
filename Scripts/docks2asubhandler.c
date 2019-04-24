#pragma region Local Var //{
int iLocal_0 = 0;
int iLocal_1 = 0;
int iLocal_2 = 0;
struct<2> ScriptParam_0 = {
	0, 0
};
#pragma endregion //}

void __EntryFunction__() {
	float fVar0;

	if (player::has_force_cleanup_occurred(19)) {
		func_1();
	}
	iLocal_0 = ScriptParam_0;
	iLocal_1 = ScriptParam_0.f_1;
	while (!gameplay::is_bit_set(iLocal_2, 1)) {
		if (!gameplay::is_bit_set(iLocal_2, 0)) {
			if (entity::does_entity_exist(iLocal_0)) {
				if (vehicle::is_vehicle_driveable(iLocal_0, 0)) {
					entity::set_entity_as_mission_entity(iLocal_0, 0, 1);
					entity::freeze_entity_position(iLocal_0, 1);
					entity::set_entity_proofs(iLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (entity::does_entity_exist(iLocal_1)) {
						entity::set_entity_as_mission_entity(iLocal_1, 0, 1);
						entity::freeze_entity_position(iLocal_1, 1);
						entity::set_entity_proofs(iLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					gameplay::set_bit(&iLocal_2, 0);
				}
			}
		}
		else if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (vehicle::is_vehicle_driveable(iLocal_0, 0)) {
				fVar0 = system::vdist2(entity::get_entity_coords(player::player_ped_id(), 1),
									   entity::get_entity_coords(iLocal_0, 1));
				if (fVar0 > 90000f) {
					gameplay::set_bit(&iLocal_2, 1);
				}
				else if (fVar0 > 40000f && !entity::is_entity_on_screen(iLocal_0)) {
					gameplay::set_bit(&iLocal_2, 1);
				}
			}
			else {
				gameplay::set_bit(&iLocal_2, 1);
			}
		}
		system::wait(0);
	}
	func_1();
}

// Position - 0x10B
void func_1() {
	entity::set_vehicle_as_no_longer_needed(&iLocal_0);
	entity::set_entity_as_no_longer_needed(&iLocal_1);
	script::terminate_this_thread();
}
