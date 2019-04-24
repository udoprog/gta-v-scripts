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
			if (brain::is_object_within_brain_activation_range(iScriptParam_0)) {
				switch (iLocal_2) {
				case 0:
					if (entity::does_entity_have_drawable(iScriptParam_0)) {
						streaming::request_anim_dict("map_objects");
						if (streaming::has_anim_dict_loaded("map_objects")) {
							entity::play_entity_anim(iScriptParam_0, "airdancer_test", "map_objects", 1f, 1, 0, 0, 0f,
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

// Position - 0x9F
void func_1() {
	func_2("ob_airdancer Terminated >>>>>>>>>>>>>>>>>\n");
	script::terminate_this_thread();
}

// Position - 0xB2
void func_2(char *sParam0) { func_3(sParam0); }

// Position - 0xC0
void func_3(char *sParam0) {
	if (gameplay::are_strings_equal(sParam0, sParam0)) {
	}
}
