#pragma region Local Var //{
int iLocal_0 = 0;
int iLocal_1 = 0;
int iLocal_2 = 0;
int iLocal_3 = 0;
float fLocal_4 = 0f;
float fLocal_5[8] = {0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f};
float fLocal_14 = 0f;
#pragma endregion //}

void __EntryFunction__() {
	fLocal_4 = -99f;
	fLocal_14 = -1f;
	gameplay::network_set_script_is_safe_for_network_game();
	if (player::has_force_cleanup_occurred(32)) {
		func_30();
	}
	while (true) {
		system::wait(0);
		func_29(0);
		func_28();
		func_21();
		func_18();
		func_13();
		func_2();
		iLocal_1++;
		if (iLocal_1 >= 16) {
			iLocal_1 = 0;
		}
		iLocal_2++;
		if (iLocal_2 >= 16) {
			iLocal_2 = 0;
		}
		iLocal_3++;
		if (iLocal_3 >= 5) {
			iLocal_3 = 0;
		}
		if (!func_1()) {
			func_30();
		}
	}
}

// Position - 0x83
int func_1() {
	if (Global_36878) {
		return 1;
	}
	if (cam::does_cam_exist(Global_36879)) {
		return 1;
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("drunk")) > 0) {
		return 1;
	}
	if (Global_36688 > 0) {
		return 1;
	}
	return 0;
}

// Position - 0xC0
void func_2() {
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;

	if (!Global_36878) {
		return;
	}
	iVar1 = gameplay::get_game_timer();
	if (Global_36880 > iVar1 || Global_36880 == -1) {
		if (streaming::is_player_switch_in_progress()) {
			return;
		}
		fVar2 = func_12();
		iVar0 = fLocal_5 - 1;
		while (iVar0 >= 1) {
			fLocal_5[iVar0] = fLocal_5[iVar0 - 1];
			iVar0 += -1;
		}
		fLocal_5[0] = fVar2;
		iVar4 = 0;
		iVar0 = 0;
		while (iVar0 < fLocal_5) {
			fVar3 += fLocal_5[iVar0];
			iVar4++;
			iVar0++;
		}
		fVar3 /= IntToFloat(iVar4);
		fVar5 = func_7();
		if (Global_36883 != Global_36884) {
			fVar6 = Global_36884 - Global_36883;
			Global_36883 += fVar6 * 0.1f;
			if (gameplay::absf(Global_36883 - Global_36884) < 0.01f) {
				Global_36883 = Global_36884;
			}
		}
		if (!cam::is_gameplay_cam_shaking()) {
			cam::shake_gameplay_cam("DRUNK_SHAKE", Global_36883 * fVar3 * fVar5);
		}
		if (gameplay::get_game_timer() % 100 == 0) {
			if (fLocal_14 == -1f) {
				fLocal_14 = fVar3;
			}
			cam::set_gameplay_cam_shake_amplitude(Global_36883 * fVar3 * fVar5);
			cam::custom_menu_coordinates(Global_36882 * fVar3 * fVar5);
			fLocal_14 = fVar3;
		}
		if (Global_36882 * fVar3 * fVar5 < 1f) {
			cam::_0x0225778816FDC28C(Global_36882 * fVar3 * fVar5);
		}
		else {
			cam::_0x0225778816FDC28C(1f);
		}
		if (!cam::is_cinematic_cam_shaking()) {
			cam::shake_cinematic_cam("DRUNK_SHAKE", Global_36883 * Global_36877 * fVar3 * fVar5);
		}
		cam::set_cinematic_cam_shake_amplitude(Global_36883 * Global_36877 * fVar3 * fVar5);
		if (cam::does_cam_exist(Global_36879)) {
			if (cam::is_cam_shaking(Global_36879)) {
				cam::set_cam_shake_amplitude(Global_36879, Global_36883 * fVar3 * fVar5);
			}
		}
		if (!gameplay::is_string_null_or_empty(&Global_36906) && !gameplay::is_string_null_or_empty(&Global_36890)) {
			audio::start_audio_scene(&Global_36890);
			StringCopy(&Global_36906, "", 16);
		}
		cam::_0xF4F2C0D4EE209E20();
		if (Global_36885 > 0f) {
			if (fLocal_4 != Global_36885) {
				if (graphics::_0x459FD2C8D0AB78BC() != -1) {
				}
				else {
					graphics::set_transition_timecycle_modifier(&Global_36886, 15f);
					fLocal_4 = Global_36885;
				}
			}
			else {
				if (graphics::_0x459FD2C8D0AB78BC() != -1 && graphics::get_timecycle_modifier_index() != -1) {
					fLocal_4 = -99f;
				}
				audio::_0x12561FCBB62D5B9C(2);
				iVar7 = Global_36880 - iVar1;
				if (iVar7 <= Global_36881 / 2) {
					bVar8 = false;
					if (player::is_player_playing(player::player_id())) {
						if (audio::is_any_speech_playing(player::player_ped_id())) {
							bVar8 = true;
						}
					}
					if (func_5(player::player_ped_id())) {
						Global_36880 += 1000;
					}
					else if (bVar8) {
						Global_36880 += 1000;
					}
					else if (graphics::_0x459FD2C8D0AB78BC() != -1) {
						Global_36880 += 1000;
					}
					else {
						if (graphics::get_timecycle_modifier_index() != -1) {
							graphics::_0x1CBA05AE7BD7EE05(system::to_float(Global_36881 / 2) / 1000f);
						}
						fLocal_4 = -99f;
						Global_36885 = 0f;
						StringCopy(&Global_36886, "", 16);
					}
				}
			}
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < fLocal_5) {
		fLocal_5[iVar0] = 0f;
		iVar0++;
	}
	fLocal_14 = -1f;
	func_3(1);
	iLocal_0 = 1;
}

// Position - 0x391
void func_3(int iParam0) {
	cam::custom_menu_coordinates(0f);
	cam::_0x0225778816FDC28C(0f);
	cam::set_gameplay_cam_shake_amplitude(0f);
	cam::stop_gameplay_cam_shaking(1);
	cam::set_cinematic_cam_shake_amplitude(0f);
	cam::stop_cinematic_cam_shaking(1);
	audio::_0x12561FCBB62D5B9C(0);
	if (audio::is_audio_scene_active("SAFEHOUSE_STONED_MICHAEL")) {
		audio::stop_audio_scene("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!gameplay::is_string_null_or_empty(&Global_36890)) {
		if (audio::is_audio_scene_active(&Global_36890)) {
			audio::stop_audio_scene(&Global_36890);
		}
	}
	if (cam::does_cam_exist(Global_36879)) {
		if (cam::is_cam_shaking(Global_36879)) {
			cam::set_cam_shake_amplitude(Global_36879, 0f);
			cam::stop_cam_shaking(Global_36879, 1);
		}
	}
	if (cam::is_script_global_shaking()) {
		cam::stop_script_global_shaking(0);
	}
	if (iParam0) {
		if (graphics::get_timecycle_modifier_index() != -1 || graphics::_0x459FD2C8D0AB78BC() != -1) {
			graphics::clear_timecycle_modifier();
		}
		else if (streaming::is_player_switch_in_progress()) {
			graphics::clear_timecycle_modifier();
		}
	}
	Global_36885 = 0f;
	StringCopy(&Global_36886, "", 16);
	StringCopy(&Global_36890, "", 64);
	StringCopy(&Global_36906, "", 16);
	func_4();
}

// Position - 0x46B
void func_4() {
	Global_36878 = 0;
	Global_36879 = 0;
	Global_36880 = 0;
	Global_36881 = 30000;
	Global_36882 = 0f;
	Global_36884 = 0f;
	Global_36883 = 0f;
	Global_36885 = 0f;
	StringCopy(&Global_36886, "", 16);
}

// Position - 0x49D
bool func_5(int iParam0) {
	if (iParam0 == 0) {
		return false;
	}
	if (func_6(iParam0) == -1) {
		return false;
	}
	return true;
}

// Position - 0x4BE
int func_6(int iParam0) {
	int iVar0;

	if (iParam0 == 0) {
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		if (Global_36715[iVar0 /*5*/] != -1) {
			if (iParam0 == Global_36715[iVar0 /*5*/].f_1) {
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x507
float func_7() {
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = 0.1f;
	iVar1 = func_11(player::player_ped_id());
	iVar2 = func_8(player::player_ped_id());
	if (iVar2 == 0) {
		if (iVar1 == 0) {
			fVar0 = 0.1f;
		}
		else {
			fVar0 = system::to_float(iVar1) / system::to_float(10);
			if (fVar0 > 1f) {
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 == 0) {
		fVar0 = 0.1f;
	}
	else {
		fVar0 = system::to_float(iVar2) / system::to_float(5);
		if (fVar0 > 1f) {
			fVar0 = 1f;
		}
	}
	return fVar0;
}

// Position - 0x586
int func_8(int iParam0) {
	int iVar0;
	int iVar1;

	if (iParam0 == 0) {
		return 0;
	}
	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1) {
		return -1;
	}
	return Global_36715[iVar1 /*5*/].f_4;
}

// Position - 0x5C9
int func_9(int iParam0) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		if (Global_36715[iVar0 /*5*/] == iParam0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x5F9
int func_10(int iParam0) {
	int iVar0;

	if (iParam0 == 0) {
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		if (iParam0 == Global_36715[iVar0 /*5*/].f_1) {
			return Global_36715[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x63A
int func_11(int iParam0) {
	int iVar0;
	int iVar1;

	if (iParam0 == 0) {
		return 0;
	}
	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_9(iVar0);
	if (iVar1 == -1) {
		return -1;
	}
	return Global_36715[iVar1 /*5*/].f_3;
}

// Position - 0x67D
float func_12() {
	int iVar0;
	float fVar1;
	int iVar2;

	iVar0 = gameplay::get_game_timer();
	fVar1 = 1f;
	iVar2 = Global_36880 - iVar0;
	if (iVar2 <= Global_36881) {
		if (Global_36880 != -1) {
			fVar1 = system::to_float(iVar2) / system::to_float(Global_36881);
		}
	}
	return fVar1;
}

// Position - 0x6B7
void func_13() {
	if (Global_36689[iLocal_3 /*5*/] == 0) {
		func_14(iLocal_3);
	}
}

// Position - 0x6D0
void func_14(int iParam0) {
	int iVar0;
	struct<5> Var1;

	if (iParam0 < 0 || iParam0 >= 5) {
		return;
	}
	if (entity::is_entity_dead(Global_36689[iParam0 /*5*/].f_1, 0)) {
		func_17(iParam0);
		return;
	}
	if (func_5(Global_36689[iParam0 /*5*/].f_1)) {
		func_17(iParam0);
		return;
	}
	if (!script::has_script_loaded("drunk")) {
		script::request_script("drunk");
		return;
	}
	iVar0 = func_16();
	if (iVar0 == -1) {
		func_17(iParam0);
		return;
	}
	Global_36715[iVar0 /*5*/] = func_15();
	Global_36715[iVar0 /*5*/].f_1 = Global_36689[iParam0 /*5*/].f_1;
	Global_36715[iVar0 /*5*/].f_2 = 0;
	Var1 = {Global_36689[iParam0 /*5*/]};
	system::start_new_script_with_args("drunk", &Var1, 5, 1424);
	script::set_script_as_no_longer_needed("drunk");
	func_17(iParam0);
}

// Position - 0x798
var func_15() {
	var uVar0;

	uVar0 = Global_36687;
	Global_36687++;
	return uVar0;
}

// Position - 0x7AF
int func_16() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		if (Global_36715[iVar0 /*5*/] == -1) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x7DE
void func_17(int iParam0) {
	if (iParam0 < 0 || iParam0 >= 5) {
		return;
	}
	if (Global_36689[iParam0 /*5*/].f_1 != 0) {
		if (Global_36689[iParam0 /*5*/].f_1 == player::player_ped_id()) {
			Global_36910 = 0;
		}
	}
	Global_36689[iParam0 /*5*/] = 13;
	Global_36689[iParam0 /*5*/].f_1 = 0;
	Global_36689[iParam0 /*5*/].f_2 = 0;
	Global_36689[iParam0 /*5*/].f_3 = 0;
	Global_36689[iParam0 /*5*/].f_4 = 0;
	Global_36688--;
	if (Global_36688 < 0) {
		Global_36688 = 0;
	}
}

// Position - 0x861
void func_18() {
	if (Global_36796[iLocal_1 /*5*/].f_2 != 6) {
		if (Global_36796[iLocal_1 /*5*/].f_1 == 0) {
			func_20(iLocal_1);
			func_19(iLocal_1);
		}
	}
}

// Position - 0x891
void func_19(int iParam0) {
	if (iParam0 < 0 || iParam0 >= 16) {
		return;
	}
	Global_36796[iParam0 /*5*/] = -1;
	Global_36796[iParam0 /*5*/].f_1 = -1;
	Global_36796[iParam0 /*5*/].f_2 = 6;
	Global_36796[iParam0 /*5*/].f_3 = 0;
	Global_36796[iParam0 /*5*/].f_4 = 0;
}

// Position - 0x8DE
void func_20(int iParam0) {
	int iVar0;

	iVar0 = Global_36796[iParam0 /*5*/].f_2;
	switch (iVar0) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6: break;

	default: break;
	}
}

// Position - 0x928
void func_21() {
	int iVar0;

	iVar0 = -1;
	if (Global_36715[iLocal_2 /*5*/] != -1) {
		iVar0 = func_27(Global_36715[iLocal_2 /*5*/], 0);
		if (iVar0 == -1) {
			func_22(Global_36715[iLocal_2 /*5*/]);
		}
		else {
			func_19(iVar0);
		}
	}
}

// Position - 0x968
void func_22(int iParam0) {
	int iVar0;

	func_25(iParam0);
	iVar0 = func_24(iParam0);
	if (iVar0 == -1) {
		return;
	}
	func_23(iVar0);
}

// Position - 0x98D
void func_23(int iParam0) {
	if (iParam0 < 0 || iParam0 >= 16) {
		return;
	}
	Global_36715[iParam0 /*5*/] = -1;
	Global_36715[iParam0 /*5*/].f_1 = 0;
	Global_36715[iParam0 /*5*/].f_2 = -1;
	Global_36715[iParam0 /*5*/].f_3 = 0;
	Global_36715[iParam0 /*5*/].f_4 = 0;
}

// Position - 0x9DA
int func_24(int iParam0) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		if (Global_36715[iVar0 /*5*/] == iParam0) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0xA0A
void func_25(int iParam0) {
	func_29(iParam0);
	func_26(iParam0);
}

// Position - 0xA1E
void func_26(int iParam0) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		if (iParam0 == Global_36796[iVar0 /*5*/].f_1) {
			func_19(iVar0);
		}
		iVar0++;
	}
}

// Position - 0xA50
int func_27(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		if (iParam1 == Global_36796[iVar0 /*5*/].f_2) {
			if (iParam0 == Global_36796[iVar0 /*5*/]) {
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

// Position - 0xA8E
void func_28() {
	if (Global_36796[iLocal_1 /*5*/] == 1) {
		Global_36796[iLocal_1 /*5*/] = 0;
	}
}

// Position - 0xAA9
void func_29(int iParam0) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		if (iParam0 == Global_36796[iVar0 /*5*/]) {
			func_19(iVar0);
		}
		iVar0++;
	}
}

// Position - 0xAD9
void func_30() {
	func_31();
	if (!iLocal_0) {
		func_3(1);
	}
	script::terminate_this_thread();
}

// Position - 0xAF4
void func_31() {
	func_34();
	func_33();
	func_32();
	func_4();
	Global_36911 = 0;
	Global_36910 = 0;
	Global_36688 = 0;
	gameplay::terminate_all_scripts_with_this_name("drunk");
}

// Position - 0xB1F
void func_32() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		func_19(iVar0);
		iVar0++;
	}
}

// Position - 0xB43
void func_33() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16) {
		func_23(iVar0);
		iVar0++;
	}
}

// Position - 0xB67
void func_34() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5) {
		func_17(iVar0);
		iVar0++;
	}
}
