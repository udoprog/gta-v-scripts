#pragma region Local Var //{
var uLocal_0 = 0;
var uLocal_1 = 0;
int iLocal_2 = 0;
int iLocal_3 = 0;
vector3 vLocal_4 = {0f, 0f, 0f};
vector3 vLocal_7 = {0f, 0f, 0f};
int iScriptParam_0 = 0;
#pragma endregion //}

void __EntryFunction__() {
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (player::has_force_cleanup_occurred(2)) {
		func_4();
	}
	if (entity::does_entity_exist(iScriptParam_0)) {
		entity::freeze_entity_position(iScriptParam_0, 1);
		vLocal_4 = {entity::get_entity_coords(iScriptParam_0, 1)};
		vLocal_7 = {entity::get_entity_rotation(iScriptParam_0, 2)};
	}
	while (true) {
		system::wait(0);
		if (entity::does_entity_exist(iScriptParam_0)) {
			if (brain::is_object_within_brain_activation_range(iScriptParam_0)) {
				switch (iLocal_2) {
				case 0:
					if (entity::does_entity_have_drawable(iScriptParam_0)) {
						streaming::request_model(joaat("p_abat_roller_1_col"));
						if (streaming::has_model_loaded(joaat("p_abat_roller_1_col"))) {
							if (!func_3(vLocal_4, 0f, 0f, 0f, 0)) {
								iLocal_3 = object::create_object(joaat("p_abat_roller_1_col"), vLocal_4, 1, 1, 0);
								entity::set_entity_rotation(iLocal_3, vLocal_7, 2, 1);
								iLocal_2 = 1;
							}
						}
					}
					break;

				case 1:
					if (entity::does_entity_have_drawable(iScriptParam_0)) {
						if (script::_get_number_of_instances_of_script_with_name_hash(joaat("michael2")) > 0) {
							streaming::request_anim_dict("map_objects");
							if (streaming::has_anim_dict_loaded("map_objects")) {
								iLocal_2 = 2;
							}
						}
					}
					break;

				case 2:
					if (entity::does_entity_have_drawable(iScriptParam_0)) {
						if (script::_get_number_of_instances_of_script_with_name_hash(joaat("michael2")) > 0) {
							if (Global_88255) {
								if (streaming::has_anim_dict_loaded("map_objects")) {
									entity::play_entity_anim(iScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f,
															 0, 1, 0, 0f, 0);
									iLocal_2 = 3;
								}
							}
						}
					}
					break;

				case 3:
					fVar9 = 0.35f;
					vVar0 = {vLocal_4 + Vector(3.45f, 0f, 0f)};
					if (entity::does_entity_exist(iLocal_3)) {
						vVar3 = {entity::get_entity_coords(iLocal_3, 1)};
						if (!func_2(vVar3, vVar0, 0.1f, 0)) {
							vVar6 = {vVar0 - vVar3};
							entity::set_entity_coords(
								iLocal_3, vVar3 + func_1(vVar6) * FtoV(gameplay::get_frame_time()) * FtoV(fVar9), 1, 0,
								0, 1);
						}
						else {
							Global_88256 = 1;
							iLocal_2 = 4;
						}
					}
					break;

				case 4: break;
				}
			}
			else {
				func_4();
			}
		}
		else {
			func_4();
		}
	}
}

// Position - 0x1C6
Vector3 func_1(vector3 vParam0) {
	float fVar0;
	float fVar1;

	fVar0 = system::vmag(vParam0);
	if (fVar0 != 0f) {
		fVar1 = 1f / fVar0;
		vParam0 = {vParam0 * FtoV(fVar1)};
	}
	else {
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

// Position - 0x205
int func_2(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7) {
	if (fParam6 < 0f) {
		fParam6 = 0f;
	}
	if (!iParam7) {
		if (gameplay::absf(vParam0.x - vParam3.x) <= fParam6) {
			if (gameplay::absf(vParam0.y - vParam3.y) <= fParam6) {
				if (gameplay::absf(vParam0.z - vParam3.z) <= fParam6) {
					return 1;
				}
			}
		}
	}
	else if (gameplay::absf(vParam0.x - vParam3.x) <= fParam6) {
		if (gameplay::absf(vParam0.y - vParam3.y) <= fParam6) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x280
bool func_3(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x2C7
void func_4() {
	if (entity::does_entity_exist(iLocal_3)) {
		object::delete_object(&iLocal_3);
	}
	streaming::set_model_as_no_longer_needed(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	script::terminate_this_thread();
}

// Position - 0x2F2
void func_5(char *sParam0) { func_6(sParam0); }

// Position - 0x300
void func_6(char *sParam0) {
	if (gameplay::are_strings_equal(sParam0, sParam0)) {
	}
}
