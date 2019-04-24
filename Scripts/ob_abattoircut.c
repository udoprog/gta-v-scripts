#pragma region Local Var //{
var uLocal_0 = 0;
var uLocal_1 = 0;
int iLocal_2 = 0;
int iScriptParam_0 = 0;
#pragma endregion //}

void __EntryFunction__() {
	if (player::has_force_cleanup_occurred(2)) {
		func_1();
	}
	if (entity::does_entity_exist(iScriptParam_0)) {
		entity::freeze_entity_position(iScriptParam_0, 1);
	}
	while (true) {
		system::wait(0);
		if (entity::does_entity_exist(iScriptParam_0)) {
			if (brain::is_object_within_brain_activation_range(iScriptParam_0) &&
				script::_get_number_of_instances_of_script_with_name_hash(joaat("michael2")) > 0) {
				switch (iLocal_2) {
				case 0:
					if (entity::does_entity_have_drawable(iScriptParam_0)) {
						streaming::request_anim_dict("MISSMIC2");
						if (streaming::has_anim_dict_loaded("MISSMIC2")) {
							entity::play_entity_anim(iScriptParam_0, "beefsplitter_loop", "MISSMIC2", 1f, 1, 0, 0, 0f,
													 0);
							iLocal_2 = 1;
						}
					}
					break;

				case 1: break;

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

// Position - 0xAF
void func_1() {
	func_2("ob_abattoir Terminated >>>>>>>>>>>>>>>>>\n");
	streaming::remove_anim_dict("MISSMIC2");
	script::terminate_this_thread();
}

// Position - 0xC8
void func_2(char *sParam0) { func_3(sParam0); }

// Position - 0xD6
void func_3(char *sParam0) {
	if (gameplay::are_strings_equal(sParam0, sParam0)) {
	}
}
